#include "Valu4.h"
#include <stdio.h>
#include <stdlib.h>
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;

int main ()
{
	Verilated::traceEverOn(true);

	VerilatedVcdC * tfp = new VerilatedVcdC();
	Valu4 *top = new Valu4("top");
	top ->trace(tfp, 0);
	tfp->open("wave.vcd");

	printf("\n---------\ntest and\n\n");
	while(main_time < 20 && !Verilated::gotFinish())
	{
		top->a = rand() & 0xf;
		top->b = rand() & 0xf;
		top->c_in = 0;
		top->op = 0; 
		top->eval();

		printf("%2d & %2d = %2d\n", top->a, top->b, top->result);
		tfp->dump(main_time);
		main_time++;
	}


	printf("\n---------\ntest or\n\n");
	while(main_time < 40 && !Verilated::gotFinish())
	{
		top->a = rand() & 0xf;
		top->b = rand() & 0xf;
		top->c_in = 0;
		top->op = 1; 
		top->eval();

		printf("%2d or %2d = %2d\n", top->a, top->b, top->result);
		tfp->dump(main_time);
		main_time++;
	}


	printf("\n---------\ntest add\n\n");
	while(main_time < 60 && !Verilated::gotFinish())
	{
		top->a = rand() & 0xf;
		top->b = rand() & 0xf;
		top->c_in = 0;
		top->op = 2; 
		top->eval();

		printf("%2d + %2d = %2d\n", top->a, top->b, top->result);
		tfp->dump(main_time);
		main_time++;
	}
	top->final();
	tfp->close();
	delete top;
	return 0;
}
