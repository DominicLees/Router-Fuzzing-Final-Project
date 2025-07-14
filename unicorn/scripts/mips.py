# based on https://github.com/unicorn-engine/unicorn/blob/master/bindings/python/tests/test_mips.py
from unicorn import *
from unicorn.mips_const import *
from termcolor import cprint

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

class Emu:
    CODE_ADDRESS = 0x400000
    STACK_ADDRESS = 0x00100000
    STACK_SIZE = 0x00010000

    def __init__(self, binary, entry_point, end_of_function):
        self.entry_point = entry_point
        self.end_of_function = end_of_function
        # open binary
        with open(binary, mode="rb") as file:
            self.binary_data = file.read()

    def setup(self):
        # initialise emulator in MIPS32 + EL mode
        mu = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 + UC_MODE_LITTLE_ENDIAN)

        # map 2MB memory for this emulation
        mu.mem_map(self.CODE_ADDRESS, 2 * 1024 * 1024)

        # write machine code to be emulated to memory
        mu.mem_write(self.CODE_ADDRESS, self.binary_data)

        # setup the stack
        mu.mem_map(self.STACK_ADDRESS, self.STACK_SIZE)
        mu.reg_write(UC_MIPS_REG_SP, self.STACK_ADDRESS + self.STACK_SIZE)

        # map memory for arguments to the function
        mu.mem_map(0x10000, 0x1000)

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
        self.mu = mu

    def run(self, arg):
        if hasattr(self, "mu") == False:
            self.setup()

        # set program counter to start of program
        self.mu.reg_write(UC_MIPS_REG_PC, self.entry_point)

        # TODO: Allow multiple arguments to be passed
        # pass in a string as an argument to the function
        self.mu.mem_write(0x10000, arg)
        self.mu.reg_write(UC_MIPS_REG_A0, 0x10000)

        result = 0
        print("Starting emulation")
        try:
            self.mu.emu_start(self.mu.reg_read(UC_MIPS_REG_PC), self.end_of_function)
            cprint("Return value: %d" % self.mu.reg_read(UC_MIPS_REG_V0), "green")
        except UcError as e:
            cprint("ERROR: %s" % e, "red")
            result = -1

        print("Finished emulation")
        return result