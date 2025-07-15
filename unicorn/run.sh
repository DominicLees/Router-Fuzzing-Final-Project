#!/bin/bash

filename="mips"
if [ $# -gt 0 ]; then
    filename=$1
fi
docker run --rm -v .:/workspace -it unicorn sh -c "python3 $filename.py"