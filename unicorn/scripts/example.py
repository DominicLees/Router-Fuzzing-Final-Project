from emu import Emu
from unicorn import Uc
from unicorn.mips_const import *
import os, random

def argument_generator():
    return os.urandom(1000)

def hook_strcpy(uc: Uc, address: int, size: int, user_data: str):
    uc.mem_write(uc.reg_read(UC_MIPS_REG_A0), bytes(user_data, "ascii") + b'\00')
    uc.reg_write(UC_MIPS_REG_V0, 0)

def hook_strcmp(uc: Uc, address: int, size: int, user_data: str):
    if user_data == "password":
        uc.reg_write(UC_MIPS_REG_V0, 0)
    else:
        uc.reg_write(UC_MIPS_REG_V0, 1)

emu = Emu("/workspaces/dxl184/unicorn/scripts/example_targets/vulnerable_target.example", 0x400710, 0x4007d4, True)
input = "password"
emu.add_hook(0x400750, hook_strcpy, input)
emu.add_hook(0x400774, hook_strcmp, input)
emu.setup()
emu.uc.mem_write(0x42003c, int.to_bytes(0x42003c, 4, "little"))
emu.run(input, False)
