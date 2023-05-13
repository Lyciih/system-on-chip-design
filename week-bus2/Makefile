TOP = test_top
GTKWAVE = gtkwave

V_SRC = $(wildcard ./vsrc/*.v)
V_SRC += $(wildcard ./vsrc/if/*.v)
V_SRC += $(wildcard ./vsrc/id/*.v)
V_SRC += $(wildcard ./vsrc/exe/*.v)
V_SRC += $(wildcard ./vsrc/mem/*.v)
V_SRC += $(wildcard ./vsrc/wb/*.v)

TESTBENCH_SRC = $(wildcard ./tb/*.cpp)
VTOP = ./vsrc/$(TOP).v
INC = -Ivsrc -Ivsrc/if -Ivsrc/id -Ivsrc/exe -Ivsrc/mem -Ivsrc/wb
PROG = test

.DEFAULT_GOAL := all
all:vhdl

vhdl:

obj_dir/V$(TOP).mk: $(V_SRC) $(TESTBENCH_SRC)
	verilator --cc --exe --build $(TESTBENCH_SRC) $(INC) $(VTOP) --trace

obj_dir/V$(TOP): obj_dir/V$(TOP).mk
	$(MAKE) -C obj_dir/ -f V$(TOP).mk

test_src/$(PROG).bin:
	$(MAKE) -C test_src/


.PHONY: clean vhdl run wave test

run: test_src/$(PROG).bin obj_dir/V$(TOP)
#obj_dir/V$(TOP) test_src/$(PROG).bin
	obj_dir/V$(TOP) isa/generated/rv32ui-p-and.bin
wave: run
	$(GTKWAVE) wave.vcd

vhdl: obj_dir/V$(TOP).mk
#make -C obj_dir/ -f V$(TOP).mk

clean:
	rm -rf obj_dir wave.vcd
	rm -rf test_src/*.elf test_src/*.bin

test:
	python3 test_all_isa.py
