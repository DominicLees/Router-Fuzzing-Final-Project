from mips import Emu
import os

# currently setup to run str2num from the httpd binary from the TL-WR841N router
def arg_gen():
    return os.urandom(999) + b"\00"

emu = Emu("/workspaces/dxl184/unicorn/includes/httpd", 0x412480, 0x4124b4)
emu.fuzz(arg_gen)