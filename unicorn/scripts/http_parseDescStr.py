from mips import *
from unicorn.mips_const import *

def hook_skip_printf(uc: Uc, address: int, size: int, user_data):
    uc.reg_write(UC_MIPS_REG_PC, 0x40b178)

# implement strchr
def hook_strchr(uc: Uc, address: int, size: int, user_data):
    uc.reg_write(UC_MIPS_REG_V0, uc.reg_read(UC_MIPS_REG_A0))
    uc.reg_write(UC_MIPS_REG_PC, 0x40b148)

# implement scanf
def hook_scanf(uc: Uc, address: int, size: int, user_data):
    uc.reg_write(UC_MIPS_REG_V0, 12)
    uc.mem_write(uc.reg_read(UC_MIPS_REG_A2), b"\01")
    seventh_int_address = int.from_bytes(uc.mem_read(uc.reg_read(UC_MIPS_REG_SP) + 0x20, 4), "little")
    uc.mem_write(seventh_int_address, b"\00\00\00\07")

# run emulation
emu = Emu("/workspaces/dxl184/unicorn/includes/httpd", 0x40b0b4, 0x40b2e0, True)
emu.add_hook(0x40b168, hook_skip_printf)
emu.add_hook(0x40b13c, hook_strchr)
emu.add_hook(0x40b1ec, hook_scanf)
# expected arg1 format: #%u,%u,%u,%u,%u,%u#%u,%u,%u,%u,%u,%u
emu.run(["#1,1,1,1,1,1#7,1,1,1,1,1", bytes(4), bytes(4), bytes(4)])