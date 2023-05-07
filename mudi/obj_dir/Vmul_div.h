// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMUL_DIV_H_
#define _VMUL_DIV_H_  // guard

#include "verilated.h"

//==========

class Vmul_div__Syms;

//----------

VL_MODULE(Vmul_div) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(op,1,0);
    VL_IN8(rs1_signed,0,0);
    VL_IN8(rs2_signed,0,0);
    VL_OUT8(ready,0,0);
    VL_OUT8(count,5,0);
    VL_OUT8(stall,0,0);
    VL_IN(rs1,31,0);
    VL_IN(rs2,31,0);
    VL_OUT(high,31,0);
    VL_OUT(low,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ mul_div__DOT__rs1_is_neg;
    CData/*0:0*/ mul_div__DOT__rs2_is_neg;
    WData/*64:0*/ mul_div__DOT__long_temp[3];
    IData/*31:0*/ mul_div__DOT__rs1_temp;
    IData/*31:0*/ mul_div__DOT__rs2_temp;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vmul_div__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmul_div);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vmul_div(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vmul_div();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vmul_div__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vmul_div__Syms* symsp, bool first);
  private:
    static QData _change_request(Vmul_div__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vmul_div__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vmul_div__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vmul_div__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vmul_div__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vmul_div__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
