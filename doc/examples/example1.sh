#!/bin/bash

. GetGlobals.sh
export PATH=$CXXTEST/bin:$PATH:`pwd`/../../scripts

cd example1
ROOT=`pwd`

# @compile:
g++ -fprofile-arcs -ftest-coverage -fPIC -O0 example1.cpp -o program
# @:compile

# @run:
./program
# @:run

# @gcovr:
gcovr -r .
# @:gcovr

\rm -f program *.gc*
