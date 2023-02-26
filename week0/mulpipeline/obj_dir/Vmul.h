// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMUL_H_
#define _VMUL_H_  // guard

#include "verilated.h"

//==========

class Vmul__Syms;
class Vmul_VerilatedVcd;


//----------

VL_MODULE(Vmul) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(req_i,0,0);
    VL_OUT8(ready_o,0,0);
    VL_OUT8(overflow_o,0,0);
    VL_IN(a_i,31,0);
    VL_IN(b_i,31,0);
    VL_OUT64(result_o,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    WData/*64:0*/ mul__DOT__acc_temp_5[3];
    IData/*31:0*/ mul__DOT__ready_temp;
    WData/*64:0*/ mul__DOT__acc_temp[32][3];
    WData/*64:0*/ mul__DOT__acc_temp_1[16][3];
    WData/*64:0*/ mul__DOT__acc_temp_2[8][3];
    WData/*64:0*/ mul__DOT__acc_temp_3[4][3];
    WData/*64:0*/ mul__DOT__acc_temp_4[2][3];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ mul__DOT____Vcellout__u_mult_step0__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__ready_o;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        WData/*64:0*/ mul__DOT____Vcellout__u_mult_step0__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__acc_o[3];
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__acc_o[3];
    };
    struct {
        WData/*64:0*/ mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__acc_o[3];
        CData/*0:0*/ __Vm_traceActivity[2];
    };
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vmul__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmul);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vmul(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vmul();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
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
    static void _eval_initial_loop(Vmul__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vmul__Syms* symsp, bool first);
  private:
    static QData _change_request(Vmul__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vmul__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vmul__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vmul__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vmul__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vmul__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vmul__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vmul__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
