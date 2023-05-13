#include "kprintf.h"

int main(int argc, char **argv) 
{
  char *s = "Hello";

  int c = 0x31;
  kprintf("DCLab 系統晶片%s %c, %d, %x, %p\n",s,c,c,c,s);
  sim_halt();
  return 0;
}
