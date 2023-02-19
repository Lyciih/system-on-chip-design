#include "Vcounter.h"
#include <stdio.h>
#include <stdlib.h>
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;

double sc_time_stamp(int len)
{
	return (main_time % len);
}

int main ()
{
	Verilated::traceEverOn(true);

	VerilatedVcdC * tfp = new VerilatedVcdC();
	Vcounter *top = new Vcounter("top");
	top ->trace(tfp, 0);
	tfp->open("wave.vcd");

	top->clk = 0;
	top->rst = 0;
	top->eval();

	while(main_time < 40 && !Verilated::gotFinish())
	{
		if(main_time % 2 == 1)
		{
			top->clk = 1;
			top->rst = 0;
			top->eval();
			printf("%d\n", top->q);
			tfp->dump(main_time);
			main_time++;
		}
		else
		{
			top->clk = 0;
			top->eval();
			tfp->dump(main_time);
			main_time++;
		}
	}
	top->clk = 1;
	top->rst = 1;
	top->eval();
	printf("%d\n", top->q);
	tfp->dump(main_time);
	main_time++;
	top->final();
	tfp->close();
	delete top;
	return 0;
}
