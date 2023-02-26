// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinst_fetch.h for the primary calling header

#ifndef _VINST_FETCH_INST_FETCH_H_
#define _VINST_FETCH_INST_FETCH_H_  // guard

#include "verilated.h"
#include "Vinst_fetch__Dpi.h"

//==========

class Vinst_fetch__Syms;
class Vinst_fetch_VerilatedVcd;
class Vinst_fetch_rom;


//----------

VL_MODULE(Vinst_fetch_inst_fetch) {
  public:
    // CELLS
    Vinst_fetch_rom* rom0;
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_OUT(inst_o,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__ce_wire;
    IData/*31:0*/ __PVT__pc_wire;
    
    // LOCAL VARIABLES
    IData/*31:0*/ __Vdly__pc_wire;
    
    // INTERNAL VARIABLES
  private:
    Vinst_fetch__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vinst_fetch_inst_fetch);  ///< Copying not allowed
  public:
    Vinst_fetch_inst_fetch(const char* name = "TOP");
    ~Vinst_fetch_inst_fetch();
    
    // INTERNAL METHODS
    void __Vconfigure(Vinst_fetch__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__inst_fetch__1(Vinst_fetch__Syms* __restrict vlSymsp);
    static void _sequent__TOP__inst_fetch__2(Vinst_fetch__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
