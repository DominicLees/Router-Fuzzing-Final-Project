from mips import *
from unicorn.mips_const import *
from parse import parse, Result
import random

def hook_skip_printf(uc: Uc, address: int, size: int, user_data):
    uc.reg_write(UC_MIPS_REG_PC, address + 0x10)

# implement strchr
def hook_strchr(uc: Uc, address: int, size: int, user_data):
    uc.reg_write(UC_MIPS_REG_V0, uc.reg_read(UC_MIPS_REG_A0))
    uc.reg_write(UC_MIPS_REG_PC, 0x40b148)

# implement sscanf
def hook_sscanf(uc: Uc, address: int, size: int, user_data: str):
    result = parse("#{:d},{:d},{:d},{:d},{:d},{:d}#{:d},{:d},{:d},{:d},{:d},{:d}", user_data)
    # if string does not match format return 0
    if type(result) is not Result:
        uc.reg_write(UC_MIPS_REG_V0, 0)
        return
    result = result.fixed
    uc.reg_write(UC_MIPS_REG_V0, len(result))
    SP = uc.reg_read(UC_MIPS_REG_SP)
    # first 6 numbers stored consecutively in stack starting at 0x58, next 6 numbers stored consecutively starting at 0x40
    for i in range(0,6):
        uc.mem_write(SP + 0x58 + i * 4, int.to_bytes(result[i], length=4, byteorder="little"))
    for i in range(0,6):
        uc.mem_write(SP + 0x40 + i * 4, int.to_bytes(result[6 + i], length=4, byteorder="little"))

# run emulation
emu = Emu("/workspaces/dxl184/unicorn/includes/httpd", 0x40b0b4, 0x40b2e0)
emu.add_hook(0x40b168, hook_skip_printf)
emu.add_hook(0x40b204, hook_skip_printf)
emu.add_hook(0x40b13c, hook_strchr)

# generate arg1, expected arg1 format: #%u,%u,%u,%u,%u,%u#%u,%u,%u,%u,%u,%u
def generate_args():
    nums = []
    for i in range(0, 12):
        nums.append(random.randint(0, 5))
    return ["#%u,%u,%u,%u,%u,%u#%u,%u,%u,%u,%u,%u" % tuple(nums), bytes(4), bytes(2), bytes(2)]

def pre_run(emu: Emu, args: list):
    emu.add_hook(0x40b1ec, hook_sscanf, args[0])

emu.fuzz(generate_args, pre_run_function=pre_run)