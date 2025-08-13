from unicorn.scripts.emu import Emu
from unicorn import Uc
from unicorn.mips_const import *

# implement memset behaviour
def hook_memset(uc: Uc, address: int, size: int, user_data):
    """
    Registers:
        A0: Starting address of memory to be filled
        A1: Number memory to be filled with
        A2: Number of bytes
    """
    start_address = uc.reg_read(UC_MIPS_REG_A0)
    num = uc.reg_read(UC_MIPS_REG_A1)
    char = chr(num)
    length = uc.reg_read(UC_MIPS_REG_A2)
    uc.mem_write(start_address, bytes(char * length, "ascii"))
    print(">>> Emulated memset: Wrote %d bytes of 0x%x between 0x%x and 0x%x" % (length, num, start_address, start_address + length))

# skip http_filter_fillMac
def hook_filter_fillMac(uc: Uc, address: int, size: int, user_data):
    uc.reg_write(UC_MIPS_REG_V0, 0)
    print(">>> Set return register to 0")

# setup and run emulation
emu = Emu("/workspaces/dxl184/unicorn/includes/httpd", 0x405da8, 0x4074c0, True)
emu.add_hook(0x405df4, hook_memset)
emu.add_hook(0x405e0c, hook_filter_fillMac)
emu.run("Hello world")