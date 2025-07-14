# based on https://github.com/unicorn-engine/unicorn/blob/master/bindings/python/tests/test_mips.py
from unicorn import *
from unicorn.mips_const import *
from termcolor import cprint

# constants are currently setup to run http_parser_main from the httpd binary from the TL-WR841N router
CODE_ADDRESS = 0x400000
ENTRY_POINT = 0x405da8 # address for http_parser_main()
END_OF_FUNCTION = 0x4074c0
MAIN_SIZE = END_OF_FUNCTION - ENTRY_POINT
END_ADDRESS = CODE_ADDRESS + MAIN_SIZE
STACK_ADDRESS = 0x00100000
STACK_SIZE = 0x00010000

# callback for tracing basic blocks
def hook_block(uc, address, size, user_data):
    print(">>> Tracing basic block at 0x%x, block size = 0x%x" % (address, size))

# callback for tracing instructions
def hook_code(uc, address, size, user_data):
    print(">>> Tracing instruction at 0x%x, instruction size = 0x%x" % (address, size))

# callback for skipping function calls
def hook_skip_function(uc, address, size, user_data):
    cprint(">>> Hooked function at 0x%x" % address, "yellow")
    # set return value
    if user_data:
        uc.reg_write(UC_MIPS_REG_V0, user_data)
        cprint(">>> Set return value to %d" % user_data, "yellow")
    # set PC to return address
    return_address = address + 4
    uc.reg_write(UC_MIPS_REG_PC, return_address)
    cprint(">>> Simulated return to 0x%x" % return_address, "yellow")

# open binary
with open("httpd", mode="rb") as file:
    binary_data = file.read()

# initialise emulator in MIPS32 + EL mode
mu = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 + UC_MODE_LITTLE_ENDIAN)

# map 2MB memory for this emulation
mu.mem_map(CODE_ADDRESS, 2 * 1024 * 1024)

# write machine code to be emulated to memory
mu.mem_write(CODE_ADDRESS, binary_data)

# set program counter to start of program
mu.reg_write(UC_MIPS_REG_PC, ENTRY_POINT)

# setup the stack
mu.mem_map(STACK_ADDRESS, STACK_SIZE)
mu.reg_write(UC_MIPS_REG_SP, STACK_ADDRESS + STACK_SIZE)

# tracing all basic blocks with customized callback
mu.hook_add(UC_HOOK_BLOCK, hook_block)

# tracing all instructions with customized callback
mu.hook_add(UC_HOOK_CODE, hook_code)

# skip memset
mu.hook_add(UC_HOOK_CODE, hook_skip_function, None, begin=0x405df4, end=0x405df4)

# skip http_filter_fillMac
mu.hook_add(UC_HOOK_CODE, hook_skip_function, 1, begin=0x405e0c, end=0x405e0c)

print("Starting emulation")
try:
    # emulate machine code in infinite time
    mu.emu_start(mu.reg_read(UC_MIPS_REG_PC), END_OF_FUNCTION)
    cprint("Return value: %d" % mu.reg_read(UC_MIPS_REG_V0), "green")
except UcError as e:
    cprint("ERROR: %s" % e, "red")

print("Finished emulation")