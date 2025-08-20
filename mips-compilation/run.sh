#!/bin/bash

mkdir -p out
docker run -v .:/workspace --mount type=bind,src=./out,dst=/out -it mips