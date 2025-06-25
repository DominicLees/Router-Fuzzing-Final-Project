#!/bin/bash

mkdir out
docker run -v .:/workspace --mount type=bind,src=./out,dst=/out -it fuzz #sh -c "afl-fuzz -i in/seed -o ../out -x in/json.dict -- ./json.out @@"