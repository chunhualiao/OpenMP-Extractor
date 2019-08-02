#!/bin/bash

SCRIPT=$(pwd)
CLANG="${SCRIPT}/../../llvm-8.0/llvm-build/bin/clang"
PRAGFIND="${SCRIPT}/build/ompextractor/libCLANGOMPExtractor.so"
file="${1}"
FLAGS=" -Xclang -load -Xclang $PRAGFIND -Xclang -add-plugin -Xclang -extract-omp -fopenmp -g -O0 -c -fsyntax-only ${file}"
$CLANG $FLAGS
