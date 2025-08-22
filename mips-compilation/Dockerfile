FROM ubuntu:24.04

RUN apt-get update
RUN apt-get install -y gcc-mipsel-linux-gnu

# Copy in included files
WORKDIR /target
COPY includes/. /target

# Compile C files
RUN find ./ -type f -name "*.c" -exec sh -c 'mipsel-linux-gnu-gcc "$1" -o "${1%.c}.out"' _ {} \;