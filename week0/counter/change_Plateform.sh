#!/bin/sh
rm -rf obj_dir wave.vcd
verilator counter.v --exe testbench.cpp --cc
verilator -Wall --cc --exe --build testbench.cpp counter.v  --trace
make -C obj_dir -f Vcounter.mk
./obj_dir/Vcounter
gtkwave wave.vcd
