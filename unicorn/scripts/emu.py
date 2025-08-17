"""Unicorn wrapper for emulating binaries

Provides the Emu class for setting up and performing emulation.

Based on https://github.com/unicorn-engine/unicorn/blob/master/bindings/python/tests/test_mips.py
"""
from unicorn import *
from unicorn.mips_const import *
from termcolor import cprint
from collections.abc import Callable
from datetime import datetime, timedelta
import os, sys

ARGUMENT_REGISTERS = [
    UC_MIPS_REG_A0,
    UC_MIPS_REG_A1,
    UC_MIPS_REG_A2,
    UC_MIPS_REG_A3
]

class HiddenPrints:
    def __enter__(self):
        self._original_stdout = sys.stdout
        sys.stdout = open(os.devnull, 'w')

    def __exit__(self, exc_type, exc_val, exc_tb):
        sys.stdout.close()
        sys.stdout = self._original_stdout

class Hook:
    """Used by the Emu class to store the data needed to set a hook in unicorn.
    
    Attributes:
        address (int): The address in the binary the hook is set to
        function (Callable): The function called when the emulator reaches the specified address
        user_data (Any): Data passed to the function as an argument
        handle (int): The hook handle set by unicorn
    """
    handle = None
    def __init__(
        self, 
        address: int,
        function: Callable[[Uc, int, int, int, int, any], any] | Callable[[Uc, int, int, any], any],
        user_data = None
    ):
        self.address = address
        self.function = function
        self.user_data = user_data

# callback for tracing basic blocks
def hook_block(uc: Uc, address: int, size: int, user_data):
    print(">>> Tracing basic block at 0x%x, block size = 0x%x" % (address, size))

# callback for tracing instructions
def hook_print_code(uc: Uc, address: int, size: int, user_data):
    print(">>> Tracing instruction at 0x%x, instruction size = 0x%x" % (address, size))

def hook_count_instruction(uc: Uc, address: int, size: int, user_data: "Emu"):
    user_data.instructions_executed += 1

# callback for tracing memory reads
def hook_mem_read(uc: Uc, access: int, address: int, size: int, value: int, user_data):
    cprint(">>> Reading memory at 0x%x, size = 0x%x" % (address, size), "blue")

# callback for tracing memory writes
def hook_mem_write(uc: Uc, access: int, address: int, size: int, value: int, user_data):
    cprint(">>> Writing to memory at 0x%x, size = 0x%x, value = %d" % (address, size, value), "cyan")

# wrapper function for user defined hooks
def hook_wrapper(uc: Uc, address: int, size: int, user_data: Hook):
    cprint(">>> Hooked function at 0x%x" % address, "yellow")
    # call user defined hook function
    result = user_data.function(uc, address, size, user_data.user_data)
    # if user function did not change the PC, set it to the next instruction
    if uc.reg_read(UC_MIPS_REG_PC) == address:
        uc.reg_write(UC_MIPS_REG_PC, address + 4)
    cprint(">>> Simulated return to 0x%x" % uc.reg_read(UC_MIPS_REG_PC), "yellow")
    return result

def hook_mem_fetch_unmapped(uc: Uc, access: int, address: int, size: int, value: int, user_data):
    cprint("ERROR: Attempt to fetch from 0x%x" % address, "red")
    return -1

def hook_mem_read_unmapped(uc: Uc, access: int, address: int, size: int, value: int, user_data):
    cprint("ERROR: Attempt to read from 0x%x" % address, "red")
    return -1

def hook_mem_write_unmapped(uc: Uc, access: int, address: int, size: int, value: int, user_data):
    cprint("ERROR: Attempt to write to 0x%x" % address, "red")
    return -1

class Emu:
    """Creates a unicorn engine instance for MIPS EL emulation. Default setup is for MIPS EL."""
    CODE_ADDRESS = 0x400000
    MEMORY_SIZE = 2 * 1024 * 1024 # 2MB
    STACK_ADDRESS = 0x00100000
    STACK_SIZE = 0x00010000
    ARCHITECTURE = UC_ARCH_MIPS
    MODE = UC_MODE_MIPS32
    BYTE_ORDER = UC_MODE_LITTLE_ENDIAN
    hooks: list[Hook] = []

    def __init__(
        self, 
        binary: str, 
        entry_point: int, 
        end_of_function: int, 
        debug = False
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
        """Creates a new emulator with the specified options and the binary loaded into memory. Overwrites any existing emulator."""
        # initialise emulator
        uc = Uc(self.ARCHITECTURE, self.MODE + self.BYTE_ORDER)

        # map memory for this emulation
        uc.mem_map(self.CODE_ADDRESS, self.MEMORY_SIZE)

        # write machine code to be emulated to memory
        uc.mem_write(self.CODE_ADDRESS, self.binary_data)

        # setup the stack
        uc.mem_map(self.STACK_ADDRESS, self.STACK_SIZE)
        uc.reg_write(UC_MIPS_REG_SP, self.STACK_ADDRESS + self.STACK_SIZE)

        # set instruction counter
        self.instructions_executed = 0

        # add hooks
        uc.hook_add(UC_HOOK_CODE, hook_count_instruction, self)

        # In debug mode hooks are set that print everything the emulator is doing
        if self.debug:
            # tracing all basic blocks
            uc.hook_add(UC_HOOK_BLOCK, hook_block)

            # tracing all instructions
            uc.hook_add(UC_HOOK_CODE, hook_print_code)

            # tracing all memory read/writes
            uc.hook_add(UC_HOOK_MEM_READ, hook_mem_read)
            uc.hook_add(UC_HOOK_MEM_WRITE, hook_mem_write)

        # trace unmapped memory accesses
        uc.hook_add(UC_HOOK_MEM_FETCH_UNMAPPED, hook_mem_fetch_unmapped)
        uc.hook_add(UC_HOOK_MEM_READ_UNMAPPED, hook_mem_read_unmapped)
        uc.hook_add(UC_HOOK_MEM_WRITE_UNMAPPED, hook_mem_write_unmapped)

        # add user defined hooks
        for hook in self.hooks:
            hook.handle = uc.hook_add(UC_HOOK_CODE, hook_wrapper, user_data=hook, begin=hook.address, end=hook.address)
        self.uc = uc

    def get_hook(
        self,
        address: int
    ) -> Hook | None:
        """Finds and returns a previously set user-defined hook for the emu

        Args:
            address (int): The address of the hook to find

        Returns:
            (Hook | None): Returns the found hook otherwise returns None
        """
        for hook in self.hooks:
            if hook.address == address:
                return hook

    def add_hook(
        self,
        address: int,
        function: Callable[[Uc, int, int, int, int, any], any] | Callable[[Uc, int, int, any], any],
        user_data = None
    ):
        """Adds a hook to the emulator's list of hooks. Hooks are set when Emu.setup() is called. Writing a new hook to an existing hook's address will overwrite the old hook.

        Args:
            address (int): The address in the binary the hook is set to
            function (Callable): A function to be called when the emulator reaches the specified address
            user_data (Any): Data to be passed to the hook callback function
        """
        hook = self.get_hook(address)
        if hook == None:
            self.hooks.append(Hook(address, function, user_data))
        else:
            hook.function = function
            hook.user_data = user_data

    def remove_hook(
        self,
        address: int
    ):
        """Removes a hook from the emulator's list of hooks

        Args:
            address (int): The address of the hook to remove
        """
        for i, hook in enumerate(self.hooks):
            if hook.address == address:
                if hook.handle != None:
                    self.uc.hook_del(hook.handle)
                del self.hooks[i]
                del hook
                return

    def run(
        self, 
        args: int | str | bytes | list[int | str | bytes] = None, 
        reset = True
    ) -> int:
        """Starts emulation at the object's entry_point value

        Args:
            args (int | str | bytes | list[int  |  str  |  bytes]): Values to be stored in the argument registers (A0 to A3). Strings are converted to bytes and given a null terminator. Bytes are stored in memory and a pointer to it is stored in the register. Max number of arguments is 4.
            reset (bool, optional): Should the state of the CPU be reset before emulation is started. Defaults to `True`.

        Raises:
            Exception: If length of args is greater than 4. If an arg is not of type `str`, `bytes` or `int`.
            UcError: When the unicorn engine raises an error

        Returns:
            int: The return value stored in the V0 register after emulation finished
        """
        if reset or hasattr(self, "uc") == False:
            self.setup()

        # set program counter to start of program
        self.uc.reg_write(UC_MIPS_REG_PC, self.entry_point)

        if args:
            # convert singular argument to a list
            if type(args) is not list:
                args = [args]
            # currently only supports passing 4 arguments via the registers, any additional arguments would have to go on the stack, can be added later if needed
            elif len(args) > 4:
                raise Exception("Maximum of 4 arguments can be passed into a run")

            # map memory for function arguments
            current_address = 0x10000
            self.uc.mem_map(current_address, 0x10000)

            # store each argument in the corresponding register
            for i, arg in enumerate(args):
                # convert strings to bytes
                if type(arg) is str:
                    arg = bytes(arg, "ascii") + b'\00'
                # write bytes to memory and set the register value to point to the start of the array
                if type(arg) is bytes:
                    self.uc.mem_write(current_address, arg)
                    self.uc.reg_write(ARGUMENT_REGISTERS[i], current_address)
                    print("Wrote %s to 0x%x" % (arg, current_address))
                    current_address += len(arg)
                    # round current_address to the next multiple of 4
                    current_address += 4 - (current_address % 4)
                # ints are written straight into the registers
                elif type(arg) is int:
                    self.uc.reg_write(ARGUMENT_REGISTERS[i], arg)
                # throw error for non compatiable arg type
                else:
                    raise Exception("Argument not of type int, str or bytes in args list")
                print("Set A%d to 0x%x" % (i, self.uc.reg_read(ARGUMENT_REGISTERS[i])))

        print("Starting emulation")
        try:
            self.uc.emu_start(self.uc.reg_read(UC_MIPS_REG_PC), self.end_of_function)
            result = self.uc.reg_read(UC_MIPS_REG_V0)
            cprint("Return value: %d" % result, "green")
        except UcError as e:
            cprint("ERROR: %s" % e, "red")
            raise e

        print("Finished emulation. Instructions executed = %d" % self.instructions_executed)
        return result
    
    def fuzz(
        self,
        args_generator: Callable[[], list[int | str | bytes]],
        run_limit: int = 0,
        time_limit: timedelta = None,
        pre_run_function: Callable[[Uc, list[int | str | bytes]], None] = None
    ):
        """Repeatedly calls run() on the emulator using newly generated args each time

        Args:
            args_generator (Callable[[], list[int  |  str  |  bytes]]): Function that returns an appropriate list of args. Should be different each time the function is called. 
            run_limit (int, optional): How many times to run the emulation. If 0 is used will run until the program is killed or until time_limit is reached. Defaults to 0.
            time_limit (timedelta, optional): How long to fuzz for. If none is set will run until the program is killed or until run_limit is reached. Defaults to None.
            pre_run_function (Callable[[Uc, list[int  |  str  |  bytes]], None], optional): Function called after a new set of args have been generated and before the emulation is run. Takes the Emu and the args as arguments. Defaults to None.
        """
        runs = 0
        start_time = datetime.now()
        if time_limit == None:
            timeout = datetime.max
        else:
            timeout = start_time + time_limit

        while True:
            args = args_generator()
            if pre_run_function != None:
                pre_run_function(self, args)
            try:
                with HiddenPrints():
                    self.run(args)
            except UcError:
                # TODO: Log the error and keep on fuzzing instead of exiting
                cprint("UcError raised with args: %s" % args, "red")
                break
            except KeyboardInterrupt:
                break
            
            current_time = datetime.now()
            runs += 1
            os.system("clear")
            print("Tests: %d, Fuzzing time: %s, Last args: %s" % (runs, current_time - start_time, args))
            if runs == run_limit or current_time > timeout:
                break