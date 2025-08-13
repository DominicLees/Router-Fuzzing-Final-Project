from unicorn.scripts.emu import *

# constants are currently setup to run str2num from the httpd binary from the TL-WR841N router
ENTRY_POINT = 0x412480
END_OF_FUNCTION = 0x4124b4
STRING = b"123\00"

emu = Emu("httpd", ENTRY_POINT, END_OF_FUNCTION)
emu.run(STRING)