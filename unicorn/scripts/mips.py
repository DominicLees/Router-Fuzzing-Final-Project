# based on https://github.com/unicorn-engine/unicorn/blob/master/bindings/python/tests/test_mips.py
from unicorn import *
from unicorn.mips_const import *
import inspect

ADDRESS = 0x100000
ENTRY_POINT = 0x405da8

# callback for tracing basic blocks
def hook_block(uc, address, size, user_data):
    print(">>> Tracing basic block at 0x%x, block size = 0x%x" % (address, size))

# callback for tracing instructions
def hook_code(uc, address, size, user_data):
    print(">>> Tracing instruction at 0x%x, instruction size = 0x%x" % (address, size))

# open binary
with open("httpd", mode="rb") as file:
    binary_data = file.read()

print("Starting emulation")
try:
    # initialise emulator in MIPS32 + EB mode
    mu = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 + UC_MODE_BIG_ENDIAN)

    # map 2MB memory for this emulation
    mu.mem_map(ADDRESS, 2 * 1024 * 1024)

    # write machine code to be emulated to memory
    mu.mem_write(ADDRESS, binary_data)

    # tracing all basic blocks with customized callback
    mu.hook_add(UC_HOOK_BLOCK, hook_block)

    # tracing all instructions with customized callback
    mu.hook_add(UC_HOOK_CODE, hook_code)

    # emulate machine code in infinite time
    mu.emu_start(ENTRY_POINT, ENTRY_POINT + len(binary_data))
except UcError as e:
    print("ERROR: %s" % e)
    print("Last function called: %s" % inspect.trace()[-1][3])

print("Finished emulation")