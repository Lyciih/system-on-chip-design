// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadder4__Syms.h"


void Vadder4::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vadder4__Syms* __restrict vlSymsp = static_cast<Vadder4__Syms*>(userp);
    Vadder4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vadder4::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vadder4__Syms* __restrict vlSymsp = static_cast<Vadder4__Syms*>(userp);
    Vadder4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->adder4__DOT__c),3);
            tracep->chgBit(oldp+1,(vlTOPp->adder4__DOT__fa1__DOT__s1));
            tracep->chgBit(oldp+2,((1U & (IData)(vlTOPp->adder4__DOT__c))));
            tracep->chgBit(oldp+3,((1U & ((IData)(vlTOPp->adder4__DOT__fa2__DOT__s1) 
                                          ^ (IData)(vlTOPp->adder4__DOT__c)))));
            tracep->chgBit(oldp+4,(vlTOPp->adder4__DOT__fa2__DOT__s1));
            tracep->chgBit(oldp+5,(((IData)(vlTOPp->adder4__DOT__fa2__DOT__s1) 
                                    & (IData)(vlTOPp->adder4__DOT__c))));
            tracep->chgBit(oldp+6,((1U & ((IData)(vlTOPp->adder4__DOT__c) 
                                          >> 1U))));
            tracep->chgBit(oldp+7,((1U & ((IData)(vlTOPp->adder4__DOT__fa3__DOT__s1) 
                                          ^ ((IData)(vlTOPp->adder4__DOT__c) 
                                             >> 1U)))));
            tracep->chgBit(oldp+8,(vlTOPp->adder4__DOT__fa3__DOT__s1));
            tracep->chgBit(oldp+9,(((IData)(vlTOPp->adder4__DOT__fa3__DOT__s1) 
                                    & ((IData)(vlTOPp->adder4__DOT__c) 
                                       >> 1U))));
            tracep->chgBit(oldp+10,((1U & ((IData)(vlTOPp->adder4__DOT__c) 
                                           >> 2U))));
            tracep->chgBit(oldp+11,((1U & ((IData)(vlTOPp->adder4__DOT__fa4__DOT__s1) 
                                           ^ ((IData)(vlTOPp->adder4__DOT__c) 
                                              >> 2U)))));
            tracep->chgBit(oldp+12,(vlTOPp->adder4__DOT__fa4__DOT__s1));
            tracep->chgBit(oldp+13,(((IData)(vlTOPp->adder4__DOT__fa4__DOT__s1) 
                                     & ((IData)(vlTOPp->adder4__DOT__c) 
                                        >> 2U))));
        }
        tracep->chgCData(oldp+14,(vlTOPp->a),4);
        tracep->chgCData(oldp+15,(vlTOPp->b),4);
        tracep->chgBit(oldp+16,(vlTOPp->c_in));
        tracep->chgCData(oldp+17,(vlTOPp->sum),4);
        tracep->chgBit(oldp+18,(vlTOPp->c_out));
        tracep->chgBit(oldp+19,((1U & (IData)(vlTOPp->a))));
        tracep->chgBit(oldp+20,((1U & (IData)(vlTOPp->b))));
        tracep->chgBit(oldp+21,(((IData)(vlTOPp->adder4__DOT__fa1__DOT__s1) 
                                 ^ (IData)(vlTOPp->c_in))));
        tracep->chgBit(oldp+22,((1U & (((IData)(vlTOPp->adder4__DOT__fa1__DOT__s1) 
                                        & (IData)(vlTOPp->c_in)) 
                                       ^ ((IData)(vlTOPp->a) 
                                          & (IData)(vlTOPp->b))))));
        tracep->chgBit(oldp+23,((1U & ((IData)(vlTOPp->a) 
                                       & (IData)(vlTOPp->b)))));
        tracep->chgBit(oldp+24,(((IData)(vlTOPp->adder4__DOT__fa1__DOT__s1) 
                                 & (IData)(vlTOPp->c_in))));
        tracep->chgBit(oldp+25,((1U & ((IData)(vlTOPp->a) 
                                       >> 1U))));
        tracep->chgBit(oldp+26,((1U & ((IData)(vlTOPp->b) 
                                       >> 1U))));
        tracep->chgBit(oldp+27,((1U & (((IData)(vlTOPp->adder4__DOT__fa2__DOT__s1) 
                                        & (IData)(vlTOPp->adder4__DOT__c)) 
                                       ^ (((IData)(vlTOPp->a) 
                                           & (IData)(vlTOPp->b)) 
                                          >> 1U)))));
        tracep->chgBit(oldp+28,((1U & (((IData)(vlTOPp->a) 
                                        & (IData)(vlTOPp->b)) 
                                       >> 1U))));
        tracep->chgBit(oldp+29,((1U & ((IData)(vlTOPp->a) 
                                       >> 2U))));
        tracep->chgBit(oldp+30,((1U & ((IData)(vlTOPp->b) 
                                       >> 2U))));
        tracep->chgBit(oldp+31,((1U & (((IData)(vlTOPp->adder4__DOT__fa3__DOT__s1) 
                                        & ((IData)(vlTOPp->adder4__DOT__c) 
                                           >> 1U)) 
                                       ^ (((IData)(vlTOPp->a) 
                                           & (IData)(vlTOPp->b)) 
                                          >> 2U)))));
        tracep->chgBit(oldp+32,((1U & (((IData)(vlTOPp->a) 
                                        & (IData)(vlTOPp->b)) 
                                       >> 2U))));
        tracep->chgBit(oldp+33,((1U & ((IData)(vlTOPp->a) 
                                       >> 3U))));
        tracep->chgBit(oldp+34,((1U & ((IData)(vlTOPp->b) 
                                       >> 3U))));
        tracep->chgBit(oldp+35,((1U & (((IData)(vlTOPp->a) 
                                        & (IData)(vlTOPp->b)) 
                                       >> 3U))));
    }
}

void Vadder4::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vadder4__Syms* __restrict vlSymsp = static_cast<Vadder4__Syms*>(userp);
    Vadder4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
