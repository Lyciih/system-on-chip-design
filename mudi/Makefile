all:
	verilator -cc mul_div.v --exe test_bench.cpp
	make -C ./obj_dir/ -f Vmul_div.mk

.PHONY: clean run

clean:
	rm -rf obj_dir
run:
	./obj_dir/Vmul_div
