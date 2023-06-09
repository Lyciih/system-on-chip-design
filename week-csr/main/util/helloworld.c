#include "kprintf.h"

int main(int argc, char **argv) 
{
  char *s = "Hello";

  int c = 0x31;
  kprintf("DCLab 系統晶片%s %c, %d, %x, %p\n",s,c,c,c,s);
  int i = 100;
  
  while(i>0)
  {
	  i--;
	  kprintf("%d 秒\n", get_time());
  }

  
  sim_halt();
  return 0;
}
