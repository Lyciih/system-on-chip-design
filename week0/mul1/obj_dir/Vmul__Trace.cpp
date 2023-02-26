// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmul__Syms.h"


void Vmul::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vmul__Syms* __restrict vlSymsp = static_cast<Vmul__Syms*>(userp);
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vmul::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vmul__Syms* __restrict vlSymsp = static_cast<Vmul__Syms*>(userp);
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlTOPp->mul__DOT__cnt)))))));
            tracep->chgIData(oldp+1,(vlTOPp->mul__DOT__reg32),32);
            tracep->chgWData(oldp+2,(vlTOPp->mul__DOT__result),65);
            tracep->chgCData(oldp+5,(vlTOPp->mul__DOT__cnt),6);
            tracep->chgIData(oldp+6,(vlTOPp->mul__DOT__result[0U]),32);
            tracep->chgIData(oldp+7,(vlTOPp->mul__DOT__result[1U]),32);
            tracep->chgCData(oldp+8,(vlTOPp->mul__DOT__S),2);
            tracep->chgBit(oldp+9,((1U & vlTOPp->mul__DOT__result[0U])));
            tracep->chgIData(oldp+10,((vlTOPp->mul__DOT__reg32 
                                       + vlTOPp->mul__DOT__result[1U])),32);
            tracep->chgQData(oldp+11,((((QData)((IData)(
                                                        (vlTOPp->mul__DOT__reg32 
                                                         + 
                                                         vlTOPp->mul__DOT__result[1U]))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->mul__DOT__result[0U])))),64);
        }
        tracep->chgBit(oldp+13,(vlTOPp->clk_i));
        tracep->chgBit(oldp+14,(vlTOPp->rst_i));
        tracep->chgIData(oldp+15,(vlTOPp->a_i),32);
        tracep->chgIData(oldp+16,(vlTOPp->b_i),32);
        tracep->chgBit(oldp+17,(vlTOPp->req_i));
        tracep->chgBit(oldp+18,(vlTOPp->ready_o));
        tracep->chgIData(oldp+19,(vlTOPp->result_o),32);
        tracep->chgBit(oldp+20,((1U & (~ (IData)((0U 
                                                  != vlTOPp->a_i))))));
        tracep->chgBit(oldp+21,((1U & (~ (IData)((0U 
                                                  != vlTOPp->b_i))))));
        tracep->chgCData(oldp+22,(((0U == (IData)(vlTOPp->mul__DOT__S))
                                    ? ((1U & ((~ (IData)(
                                                         (0U 
                                                          != vlTOPp->a_i))) 
                                              | (~ (IData)(
                                                           (0U 
                                                            != vlTOPp->b_i)))))
                                        ? 2U : 1U) : 
                                   ((1U == (IData)(vlTOPp->mul__DOT__S))
                                     ? ((0U != (IData)(vlTOPp->mul__DOT__cnt))
                                         ? 1U : 2U)
                                     : 0U))),2);
    }
}

void Vmul::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vmul__Syms* __restrict vlSymsp = static_cast<Vmul__Syms*>(userp);
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
