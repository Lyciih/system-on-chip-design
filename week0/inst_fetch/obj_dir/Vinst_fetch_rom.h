// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinst_fetch.h for the primary calling header

#ifndef _VINST_FETCH_ROM_H_
#define _VINST_FETCH_ROM_H_  // guard

#include "verilated.h"
#include "Vinst_fetch__Dpi.h"

//==========

class Vinst_fetch__Syms;
class Vinst_fetch_VerilatedVcd;


//----------

VL_MODULE(Vinst_fetch_rom) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__ce_i,0,0);
    VL_IN(__PVT__addr_i,31,0);
    VL_OUT(__PVT__inst_o,31,0);
    
    // LOCAL SIGNALS
    CData/*7:0*/ __PVT__mem[2097152];
    
    // INTERNAL VARIABLES
  private:
    Vinst_fetch__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vinst_fetch_rom);  ///< Copying not allowed
  public:
    Vinst_fetch_rom(const char* name = "TOP");
    ~Vinst_fetch_rom();
    
    // INTERNAL METHODS
    void __Vconfigure(Vinst_fetch__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__inst_fetch__rom0__1(Vinst_fetch__Syms* __restrict vlSymsp);
    void writeByte(uint32_t byte_addr, uint32_t val);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
