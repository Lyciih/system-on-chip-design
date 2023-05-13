// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef _VTEST_TOP_TEST_TOP_H_
#define _VTEST_TOP_TEST_TOP_H_  // guard

#include "verilated.h"
#include "Vtest_top__Dpi.h"

//==========

class Vtest_top__Syms;
class Vtest_top_VerilatedVcd;
class Vtest_top_core_top;
class Vtest_top_dpram;


//----------

VL_MODULE(Vtest_top_test_top) {
  public:
    // CELLS
    Vtest_top_core_top* core_top0;
    Vtest_top_dpram* dpram0;
    
    // PORTS
    VL_IN8(rst_i,0,0);
    VL_IN8(clk_i,0,0);
    VL_OUT8(halt_o,0,0);
    
    // INTERNAL VARIABLES
  private:
    Vtest_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtest_top_test_top);  ///< Copying not allowed
  public:
    Vtest_top_test_top(const char* name = "TOP");
    ~Vtest_top_test_top();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtest_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
