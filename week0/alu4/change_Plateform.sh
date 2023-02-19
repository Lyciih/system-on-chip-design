#!/bin/sh
rm -rf obj_dir wave.vcd
verilator alu4.v --exe testbench.cpp --cc
verilator -Wall --cc --exe --build testbench.cpp alu4.v  --trace
make -C obj_dir -f Valu4.mk
./obj_dir/Valu4
gtkwave wave.vcd
