#include <stdint.h>
#include "util.h"
#include "soc_reg.h"

void sim_halt() 
{ 
  DEV_WRITE(CTRL_BASE + CTRL_CTRL, 1); 
}

int get_time() 
{ 
  return DEV_READ(TIMER_BASE); 
}
