#! /bin/sh

make -C obj_dir -f Vadder4.mk clean
verilator -Wall --cc --exe --build testbench.cpp adder4.v --trace
make -C obj_dir -f Vadder4.mk
./obj_dir/Vadder4
