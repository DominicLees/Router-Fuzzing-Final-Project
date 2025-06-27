FROM ubuntu:24.04

WORKDIR /target
COPY includes/. /target

# Install dependencies
RUN apt-get update
RUN apt-get install -y build-essential python3-dev automake cmake git flex bison libglib2.0-dev libpixman-1-dev python3-setuptools cargo libgtk-3-dev
RUN apt-get install -y lld-14 llvm-14 llvm-14-dev clang-14 || sudo apt-get install -y lld llvm llvm-dev clang
RUN apt-get install -y gcc-$(gcc --version|head -n1|sed 's/\..*//'|sed 's/.* //')-plugin-dev libstdc++-$(gcc --version|head -n1|sed 's/\..*//'|sed 's/.* //')-dev

# Install AFL++
WORKDIR /
RUN git clone https://github.com/AFLplusplus/AFLplusplus
WORKDIR /AFLplusplus
RUN make source-only && make install
ENV CC=/AFLplusplus/afl-clang-fast CXX=/AFLplusplus/afl-clang-fast++
WORKDIR /target