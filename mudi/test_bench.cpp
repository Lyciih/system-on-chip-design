#include <stdio.h>
#include <verilated.h>
#include "Vmul_div.h"

int main (int argc, char** argv)
{
	Verilated::commandArgs(argc, argv);
	Vmul_div * top = new Vmul_div;
	if(!Verilated::gotFinish()){
		for(int i = 0; i<35; i++)
		{
			top->clk = 0;
			top->eval();
			top->rs1 = -1;
			top->rs2 = 1;
			top->rs1_signed = 1;
			top->rs2_signed = 1;
			top->op = 1;
			top->clk = 1;
			top->eval();
			printf("%d %d %d %d %d\n",top->high, top->low, top->ready, top->stall, top->count);
		}
		top->clk = 0;
		top->eval();
		top->rs1 = -1;
		top->rs2 = 1;
		top->rs1_signed = 1;
		top->rs2_signed = 1;
		top->op = 0;
		top->clk = 1;
		top->eval();
		printf("%d %d %d %d %d\n",top->high, top->low, top->ready, top->stall, top->count);

	}
	delete top;
	exit(0);
}
