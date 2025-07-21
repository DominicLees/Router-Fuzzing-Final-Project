# based on https://github.com/unicorn-engine/unicorn/blob/master/bindings/python/tests/test_mips.py
from unicorn import *
from unicorn.mips_const import *
from termcolor import cprint
from collections.abc import Callable

ARGUMENT_REGISTERS = [
    UC_MIPS_REG_A0,
    UC_MIPS_REG_A1,
    UC_MIPS_REG_A2,
    UC_MIPS_REG_A3
]

# callback for tracing basic blocks
def hook_block(uc: Uc, address: int, size: int, user_data):
    print(">>> Tracing basic block at 0x%x, block size = 0x%x" % (address, size))

# callback for tracing instructions
def hook_code(uc: Uc, address: int, size: int, user_data):
    print(">>> Tracing instruction at 0x%x, instruction size = 0x%x" % (address, size))

# callback for tracing memory reads
def hook_mem_read(uc: Uc, access: int, address: int, size: int, value: int, user_data):
    cprint(">>> Reading memory at 0x%x, size = 0x%x" % (address, size), "blue")

# callback for tracing memory writes
def hook_mem_write(uc: Uc, access: int, address: int, size: int, value: int, user_data):
    cprint(">>> Writing to memory at 0x%x, size = 0x%x, value = %d" % (address, size, value), "cyan")

# callback for skipping function calls
def hook_skip_function(uc: Uc, address: int, size: int, user_data):
    cprint(">>> Hooked function at 0x%x" % address, "yellow")
    # set return value
    if user_data != None:
        uc.reg_write(UC_MIPS_REG_V0, user_data)
        cprint(">>> Set return value to %d" % user_data, "yellow")
    # set PC to return address
    return_address = address + 4
    uc.reg_write(UC_MIPS_REG_PC, return_address)
    cprint(">>> Simulated return to 0x%x" % return_address, "yellow")

def hook_mem_fetch_unmapped(uc: Uc, access: int, address: int, size: int, value: int, user_data):
    cprint("ERROR: Attempt to fetch from 0x%x" % address, "red")
    return -1

def hook_mem_read_unmapped(uc: Uc, access: int, address: int, size: int, value: int, user_data):
    cprint("ERROR: Attempt to read from 0x%x" % address, "red")
    return -1

def hook_mem_write_unmapped(uc: Uc, access: int, address: int, size: int, value: int, user_data):
    cprint("Attempt to write to 0x%x" % address, "red")
    return -1

class Hook:
    """Used by the Emu class to store the data needed to set a hook in unicorn.
    
    Attributes:
        address (int): The address in the binary the hook is set to
        function (Callable): The function called when the emulator reaches the specified address
        user_data (any, optional): Data passed to the function when it is called
    """
    def __init__(
        self, 
        address: int,
        function: Callable[[Uc, int, int, int, int, any], any] | Callable[[Uc, int, int, any], any],
        user_data = None
    ):
        self.address = address
        self.function = function
        self.user_data = user_data

class Emu:
    CODE_ADDRESS = 0x400000
    STACK_ADDRESS = 0x00100000
    STACK_SIZE = 0x00010000
    hooks: list[Hook] = []

    def __init__(
        self, 
        binary: str, 
        entry_point: int, 
        end_of_function: int, 
        debug=False
    ):
        """
        Args:
            binary (str): file path to the binary to be loaded into the emulator
            entry_point (int): the address in the binary where emulation will start
            end_of_function (int): the address in the binary where emlation will end once reached
            debug (bool, optional): Enabled additional prints of all instruction, block and memory read/write traces. Defaults to False.
        """
        self.entry_point = entry_point
        self.end_of_function = end_of_function
        self.debug = debug
        # read raw binary data from file
        with open(binary, mode="rb") as file:
            self.binary_data = file.read()

    def setup(self):
        """Creates a new emulator with the specified state. Overrides any existing emulator."""
        # initialise emulator in MIPS32 + EL mode
        mu = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 + UC_MODE_LITTLE_ENDIAN)

        # map 2MB memory for this emulation
        mu.mem_map(self.CODE_ADDRESS, 2 * 1024 * 1024)

        # write machine code to be emulated to memory
        mu.mem_write(self.CODE_ADDRESS, self.binary_data)

        # setup the stack
        mu.mem_map(self.STACK_ADDRESS, self.STACK_SIZE)
        mu.reg_write(UC_MIPS_REG_SP, self.STACK_ADDRESS + self.STACK_SIZE)

        if self.debug:
            # tracing all basic blocks with customized callback
            mu.hook_add(UC_HOOK_BLOCK, hook_block)

            # tracing all instructions with customized callback
            mu.hook_add(UC_HOOK_CODE, hook_code)

            # tracing all memory read/writes
            mu.hook_add(UC_HOOK_MEM_READ, hook_mem_read)
            mu.hook_add(UC_HOOK_MEM_WRITE, hook_mem_write)

        # trace unmapped memory accesses
        mu.hook_add(UC_HOOK_MEM_FETCH_UNMAPPED, hook_mem_fetch_unmapped)
        mu.hook_add(UC_HOOK_MEM_READ_UNMAPPED, hook_mem_read_unmapped)
        mu.hook_add(UC_HOOK_MEM_WRITE_UNMAPPED, hook_mem_write_unmapped)

        # add additonally defined hooks
        for hook in self.hooks:
            mu.hook_add(UC_HOOK_CODE, hook.function, user_data=hook.user_data, begin=hook.address, end=hook.address)
        self.mu = mu

    def add_hook(
        self,
        address: int,
        function: Callable[[Uc, int, int, int, int, any], any] | Callable[[Uc, int, int, any], any],
        user_data = None
    ):
        """Adds a hook to the emulator's list of hooks. Hooks are set when Emu.setup() is called. 

        Args:
            address (int): The address in the binary the hook is set to
            function (Callable): A function to be called when the emulator reaches the specified address
        """
        self.hooks.append(Hook(address, function, user_data))

    def add_function_skip_hook(
        self,
        address: int,
        return_value: int = None
    ):
        """Adds a hook to skip a function at the specified address

        Args:
            address (int): The address of the function in the binary to skip
            return_value (int, optional): The value to be set to the return register (V0). Defaults to None.
        """
        self.hooks.append(Hook(address, hook_skip_function, return_value))

    def run(
        self, 
        args: int | str | bytes | list[int | str | bytes] = None, 
        reset = True
    ) -> int:
        """Starts emulation at the object's entry_point value

        Args:
            args (int | str | bytes | list[int  |  str  |  bytes]): Values to be stored in the argument registers (A0 to A3). Strings are converted to bytes and given a null terminator. Bytes are stored in memory and a pointer to it is stored in the register.
            reset (bool, optional): Should the state of the CPU be reset before emulation is started. Defaults to True.

        Raises:
            Exception: if length of args is greater than 4

        Returns:
            int: -1 if there was an error during emulation, otherwise the return value stored in the V0 register after emulation finished
        """
        if hasattr(self, "mu") == False or reset:
            self.setup()

        # set program counter to start of program
        self.mu.reg_write(UC_MIPS_REG_PC, self.entry_point)

        if args:
            # convert singular argument to a list
            if type(args) is not list:
                args = [args]
            # currently only supports passing 4 arguments via the registers, any additional arguments would have to go on the stack, can be added later if needed
            elif len(args) > 4:
                raise Exception("Maximum of 4 arguments can be passed into a run")

            # map memory for arguments to the function
            current_address = 0x10000
            self.mu.mem_map(current_address, 0x1000)

            # set each register to an argument
            i = 0
            for arg in args:
                # convert strings to bytes
                if type(arg) is str:
                    arg = bytes(arg, "ascii") + b'\00'
                # write string arguments to memory and set the register value to point to the string
                if type(arg) is bytes:
                    self.mu.mem_write(current_address, arg)
                    self.mu.reg_write(ARGUMENT_REGISTERS[i], current_address)
                    print("Wrote %s to 0x%x" % (arg, current_address))
                    current_address += len(arg)
                # numbers can be written straight into the registers
                else:
                    self.mu.reg_write(ARGUMENT_REGISTERS[i], arg)
                print("Set A%d to 0x%x" % (i, self.mu.reg_read(ARGUMENT_REGISTERS[i])))
                i += 1

        print("Starting emulation")
        try:
            self.mu.emu_start(self.mu.reg_read(UC_MIPS_REG_PC), self.end_of_function)
            result = self.mu.reg_read(UC_MIPS_REG_V0)
            cprint("Return value: %d" % result, "green")
        except UcError as e:
            cprint("ERROR: %s" % e, "red")
            result = -1

        print("Finished emulation")
        return result