#!/bin/bash

rm -r build/
mkdir build
cd build/
cmake -DLLVM_DIR=/home/souzadinizme1/workdir/llvm-8.0/llvm-build/lib/cmake/llvm/ ../
make
cd ../
