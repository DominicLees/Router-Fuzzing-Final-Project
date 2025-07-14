# based on https://github.com/unicorn-engine/unicorn/blob/master/bindings/python/tests/test_mips.py
from unicorn import *
from unicorn.mips_const import *
from termcolor import cprint

# constants are currently setup to run str2num from the httpd binary from the TL-WR841N router
CODE_ADDRESS = 0x400000
ENTRY_POINT = 0x412480
END_OF_FUNCTION = 0x4124b4
STACK_ADDRESS = 0x00100000
STACK_SIZE = 0x00010000
STRING = b"123\00"

# callback for tracing basic blocks
def hook_block(uc, address, size, user_data):
    print(">>> Tracing basic block at 0x%x, block size = 0x%x" % (address, size))

# callback for tracing instructions
def hook_code(uc, address, size, user_data):
    print(">>> Tracing instruction at 0x%x, instruction size = 0x%x" % (address, size))

# callback for tracing memory reads
def hook_mem_read(uc, access, address, size, value, user_data):
    cprint(">>> Reading memory at 0x%x, size = 0x%x" % (address, size), "blue")

# callback for tracing memory writes
def hook_mem_write(uc, access, address, size, value, user_data):
    cprint(">>> Writing to memory at 0x%x, size = 0x%x, value = %d" % (address, size, value), "cyan")

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

def hook_mem_fetch_unmapped(uc, access, address, size, value, user_data):
    cprint("ERROR: Attempt to fetch from 0x%x" % address, "red")
    return -1

def hook_mem_read_unmapped(uc, access, address, size, value, user_data):
    cprint("ERROR: Attempt to read from 0x%x" % address, "red")
    return -1

def hook_mem_write_unmapped(uc, access, address, size, value, user_data):
    cprint("Attempt to write to 0x%x" % address, "red")
    return -1

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

# pass in a string as an argument to the function
mu.mem_map(0x10000, 0x1000)
mu.mem_write(0x10000, STRING)
mu.reg_write(UC_MIPS_REG_A0, 0x10000)

# tracing all basic blocks with customized callback
mu.hook_add(UC_HOOK_BLOCK, hook_block)

# tracing all instructions with customized callback
mu.hook_add(UC_HOOK_CODE, hook_code)

# tracing all memory read/writes
mu.hook_add(UC_HOOK_MEM_READ, hook_mem_read)
mu.hook_add(UC_HOOK_MEM_WRITE, hook_mem_write)
mu.hook_add(UC_HOOK_MEM_FETCH_UNMAPPED, hook_mem_fetch_unmapped)
mu.hook_add(UC_HOOK_MEM_READ_UNMAPPED, hook_mem_read_unmapped)
mu.hook_add(UC_HOOK_MEM_WRITE_UNMAPPED, hook_mem_write_unmapped)

# skip memset
# mu.hook_add(UC_HOOK_CODE, hook_skip_function, None, begin=0x405df4, end=0x405df4)

# skip http_filter_fillMac
# mu.hook_add(UC_HOOK_CODE, hook_skip_function, 1, begin=0x405e0c, end=0x405e0c)

print("Starting emulation")
try:
    # emulate machine code in infinite time
    mu.emu_start(mu.reg_read(UC_MIPS_REG_PC), END_OF_FUNCTION)
    cprint("Return value: %d" % mu.reg_read(UC_MIPS_REG_V0), "green")
except UcError as e:
    cprint("ERROR: %s" % e, "red")

print("Finished emulation")