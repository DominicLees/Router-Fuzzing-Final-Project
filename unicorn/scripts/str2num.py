from mips import Emu
import os

# constants are currently setup to run str2num from the httpd binary from the TL-WR841N router
ENTRY_POINT = 0x412480
END_OF_FUNCTION = 0x4124b4

emu = Emu("httpd", ENTRY_POINT, END_OF_FUNCTION)
count = 0

# Continuously executes the function until unicorn throws an error or stopped by the user
while (True):
    try:
        count += 1
        result = emu.run(os.urandom(999) + b"\00") # Pass 999 random bytes to the function
        if result < 0:
            break
    except KeyboardInterrupt:
        print("\nExecutions: %d" % count)
        exit(0)