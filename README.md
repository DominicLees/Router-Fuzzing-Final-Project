# Router Fuzzing Framework - Cyber Security MSc Final Project

This repository contains the files for my Cyber Security MSc final project. The goal of my project was to perform fuzz testing on Wi-Fi router firmware. 
I did this by: 
- Performing static analysis on the disassembled binaries to find functions to target
- Developing a Python tool that rehosted the firmware binaries using [Unicorn](https://github.com/unicorn-engine)
- Wrote scripts that used my tool to perform fuzzing on the binaries

## Repository Contents

- **afl-fuzz-container** - contains docker containers to fuzz programs using AFL++
- **decompilations** - contains C code that has been decompiled by ghidra
- **experiments** - contains C programs that were used to test simple concepts around fuzzing
- **mips-compilation** - contains a docker container for compiling C code into MIPS32 binaries
- **unicorn** - contains a docker container to run python scripts that use the unicorn CPU emulator
- - **scripts** - contains fuzzing scripts
- - - **example_targets** - contains short C programs with intentionally included vulnerabilities to test if the fuzzer is able to find them, also includes the compiled MIPS32 binaries of those programs
- - - **emu.py** - the fuzzing tool

This repository does not contain the binaries of the firmwares that were tested. These can be found on the [TP-Link Website](https://www.tp-link.com/us/support/download/).