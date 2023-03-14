#! bin/bash

rm -rf obj_dir
verilator -Wall --cc --exe --build testbench.cpp mul.v --trace
./obj_dir/Vmul
