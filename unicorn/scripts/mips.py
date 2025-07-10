# based on https://github.com/unicorn-engine/unicorn/blob/master/bindings/python/tests/test_mips.py
from unicorn import *
from unicorn.mips_const import *

CODE_ADDRESS = 0x400000
ENTRY_POINT = 0x402b30
END_OF_MAIN = 0x402c64
MAIN_SIZE = END_OF_MAIN - ENTRY_POINT
END_ADDRESS = CODE_ADDRESS + MAIN_SIZE
STACK_ADDRESS = 0x01000000
STACK_SIZE = 0x00010000

# callback for tracing basic blocks
def hook_block(uc, address, size, user_data):
    print(">>> Tracing basic block at 0x%x, block size = 0x%x" % (address, size))

# callback for tracing instructions
def hook_code(uc, address, size, user_data):
    print(">>> Tracing instruction at 0x%x, instruction size = 0x%x" % (address, size))

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

print("Starting emulation")
try:
    # emulate machine code in infinite time
    mu.emu_start(mu.reg_read(UC_MIPS_REG_PC), END_ADDRESS)
except UcError as e:
    print("ERROR: %s" % e)

print("Finished emulation")