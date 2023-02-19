// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu4__Syms.h"


void Valu4::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Valu4__Syms* __restrict vlSymsp = static_cast<Valu4__Syms*>(userp);
    Valu4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Valu4::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Valu4__Syms* __restrict vlSymsp = static_cast<Valu4__Syms*>(userp);
    Valu4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->alu4__DOT__c1));
            tracep->chgBit(oldp+1,(vlTOPp->alu4__DOT__c2));
            tracep->chgBit(oldp+2,(vlTOPp->alu4__DOT__c3));
            tracep->chgBit(oldp+3,(vlTOPp->alu4__DOT__al0__DOT__g4__DOT__s1));
            tracep->chgBit(oldp+4,(((IData)(vlTOPp->alu4__DOT__al1__DOT__g4__DOT__s1) 
                                    ^ (IData)(vlTOPp->alu4__DOT__c1))));
            tracep->chgBit(oldp+5,(vlTOPp->alu4__DOT__al1__DOT__g4__DOT__s1));
            tracep->chgBit(oldp+6,(((IData)(vlTOPp->alu4__DOT__al1__DOT__g4__DOT__s1) 
                                    & (IData)(vlTOPp->alu4__DOT__c1))));
            tracep->chgBit(oldp+7,(((IData)(vlTOPp->alu4__DOT__al2__DOT__g4__DOT__s1) 
                                    ^ (IData)(vlTOPp->alu4__DOT__c2))));
            tracep->chgBit(oldp+8,(vlTOPp->alu4__DOT__al2__DOT__g4__DOT__s1));
            tracep->chgBit(oldp+9,(((IData)(vlTOPp->alu4__DOT__al2__DOT__g4__DOT__s1) 
                                    & (IData)(vlTOPp->alu4__DOT__c2))));
            tracep->chgBit(oldp+10,(((IData)(vlTOPp->alu4__DOT__al3__DOT__g4__DOT__s1) 
                                     ^ (IData)(vlTOPp->alu4__DOT__c3))));
            tracep->chgBit(oldp+11,(vlTOPp->alu4__DOT__al3__DOT__g4__DOT__s1));
            tracep->chgBit(oldp+12,(((IData)(vlTOPp->alu4__DOT__al3__DOT__g4__DOT__s1) 
                                     & (IData)(vlTOPp->alu4__DOT__c3))));
        }
        tracep->chgCData(oldp+13,(vlTOPp->a),4);
        tracep->chgCData(oldp+14,(vlTOPp->b),4);
        tracep->chgBit(oldp+15,(vlTOPp->c_in));
        tracep->chgCData(oldp+16,(vlTOPp->op),2);
        tracep->chgCData(oldp+17,(vlTOPp->result),4);
        tracep->chgBit(oldp+18,(vlTOPp->c_out));
        tracep->chgBit(oldp+19,((1U & (IData)(vlTOPp->a))));
        tracep->chgBit(oldp+20,((1U & (IData)(vlTOPp->b))));
        tracep->chgBit(oldp+21,((1U & ((0U == (IData)(vlTOPp->op))
                                        ? ((IData)(vlTOPp->a) 
                                           & (IData)(vlTOPp->b))
                                        : ((1U == (IData)(vlTOPp->op))
                                            ? ((IData)(vlTOPp->a) 
                                               | (IData)(vlTOPp->b))
                                            : ((2U 
                                                == (IData)(vlTOPp->op)) 
                                               & ((IData)(vlTOPp->alu4__DOT__al0__DOT__g4__DOT__s1) 
                                                  ^ (IData)(vlTOPp->c_in))))))));
        tracep->chgBit(oldp+22,((1U & ((IData)(vlTOPp->a) 
                                       & (IData)(vlTOPp->b)))));
        tracep->chgBit(oldp+23,((1U & ((IData)(vlTOPp->a) 
                                       | (IData)(vlTOPp->b)))));
        tracep->chgBit(oldp+24,(((IData)(vlTOPp->alu4__DOT__al0__DOT__g4__DOT__s1) 
                                 ^ (IData)(vlTOPp->c_in))));
        tracep->chgBit(oldp+25,(((IData)(vlTOPp->alu4__DOT__al0__DOT__g4__DOT__s1) 
                                 & (IData)(vlTOPp->c_in))));
        tracep->chgBit(oldp+26,((1U & ((IData)(vlTOPp->a) 
                                       >> 1U))));
        tracep->chgBit(oldp+27,((1U & ((IData)(vlTOPp->b) 
                                       >> 1U))));
        tracep->chgBit(oldp+28,((1U & ((0U == (IData)(vlTOPp->op))
                                        ? (((IData)(vlTOPp->a) 
                                            & (IData)(vlTOPp->b)) 
                                           >> 1U) : 
                                       ((1U == (IData)(vlTOPp->op))
                                         ? (((IData)(vlTOPp->a) 
                                             | (IData)(vlTOPp->b)) 
                                            >> 1U) : 
                                        ((2U == (IData)(vlTOPp->op)) 
                                         & ((IData)(vlTOPp->alu4__DOT__al1__DOT__g4__DOT__s1) 
                                            ^ (IData)(vlTOPp->alu4__DOT__c1))))))));
        tracep->chgBit(oldp+29,((1U & (((IData)(vlTOPp->a) 
                                        & (IData)(vlTOPp->b)) 
                                       >> 1U))));
        tracep->chgBit(oldp+30,((1U & (((IData)(vlTOPp->a) 
                                        | (IData)(vlTOPp->b)) 
                                       >> 1U))));
        tracep->chgBit(oldp+31,((1U & ((IData)(vlTOPp->a) 
                                       >> 2U))));
        tracep->chgBit(oldp+32,((1U & ((IData)(vlTOPp->b) 
                                       >> 2U))));
        tracep->chgBit(oldp+33,((1U & ((0U == (IData)(vlTOPp->op))
                                        ? (((IData)(vlTOPp->a) 
                                            & (IData)(vlTOPp->b)) 
                                           >> 2U) : 
                                       ((1U == (IData)(vlTOPp->op))
                                         ? (((IData)(vlTOPp->a) 
                                             | (IData)(vlTOPp->b)) 
                                            >> 2U) : 
                                        ((2U == (IData)(vlTOPp->op)) 
                                         & ((IData)(vlTOPp->alu4__DOT__al2__DOT__g4__DOT__s1) 
                                            ^ (IData)(vlTOPp->alu4__DOT__c2))))))));
        tracep->chgBit(oldp+34,((1U & (((IData)(vlTOPp->a) 
                                        & (IData)(vlTOPp->b)) 
                                       >> 2U))));
        tracep->chgBit(oldp+35,((1U & (((IData)(vlTOPp->a) 
                                        | (IData)(vlTOPp->b)) 
                                       >> 2U))));
        tracep->chgBit(oldp+36,((1U & ((IData)(vlTOPp->a) 
                                       >> 3U))));
        tracep->chgBit(oldp+37,((1U & ((IData)(vlTOPp->b) 
                                       >> 3U))));
        tracep->chgBit(oldp+38,((1U & ((0U == (IData)(vlTOPp->op))
                                        ? (((IData)(vlTOPp->a) 
                                            & (IData)(vlTOPp->b)) 
                                           >> 3U) : 
                                       ((1U == (IData)(vlTOPp->op))
                                         ? (((IData)(vlTOPp->a) 
                                             | (IData)(vlTOPp->b)) 
                                            >> 3U) : 
                                        ((2U == (IData)(vlTOPp->op)) 
                                         & ((IData)(vlTOPp->alu4__DOT__al3__DOT__g4__DOT__s1) 
                                            ^ (IData)(vlTOPp->alu4__DOT__c3))))))));
        tracep->chgBit(oldp+39,((1U & (((IData)(vlTOPp->a) 
                                        & (IData)(vlTOPp->b)) 
                                       >> 3U))));
        tracep->chgBit(oldp+40,((1U & (((IData)(vlTOPp->a) 
                                        | (IData)(vlTOPp->b)) 
                                       >> 3U))));
    }
}

void Valu4::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Valu4__Syms* __restrict vlSymsp = static_cast<Valu4__Syms*>(userp);
    Valu4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
