// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadder4__Syms.h"


//======================

void Vadder4::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vadder4::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vadder4__Syms* __restrict vlSymsp = static_cast<Vadder4__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vadder4::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vadder4::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vadder4__Syms* __restrict vlSymsp = static_cast<Vadder4__Syms*>(userp);
    Vadder4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vadder4::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vadder4__Syms* __restrict vlSymsp = static_cast<Vadder4__Syms*>(userp);
    Vadder4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+15,"a", false,-1, 3,0);
        tracep->declBus(c+16,"b", false,-1, 3,0);
        tracep->declBit(c+17,"c_in", false,-1);
        tracep->declBus(c+18,"sum", false,-1, 3,0);
        tracep->declBit(c+19,"c_out", false,-1);
        tracep->declBus(c+15,"adder4 a", false,-1, 3,0);
        tracep->declBus(c+16,"adder4 b", false,-1, 3,0);
        tracep->declBit(c+17,"adder4 c_in", false,-1);
        tracep->declBus(c+18,"adder4 sum", false,-1, 3,0);
        tracep->declBit(c+19,"adder4 c_out", false,-1);
        tracep->declBus(c+1,"adder4 c", false,-1, 3,1);
        tracep->declBit(c+20,"adder4 fa1 a", false,-1);
        tracep->declBit(c+21,"adder4 fa1 b", false,-1);
        tracep->declBit(c+17,"adder4 fa1 c_in", false,-1);
        tracep->declBit(c+22,"adder4 fa1 sum", false,-1);
        tracep->declBit(c+23,"adder4 fa1 c_out", false,-1);
        tracep->declBit(c+2,"adder4 fa1 s1", false,-1);
        tracep->declBit(c+24,"adder4 fa1 c1", false,-1);
        tracep->declBit(c+25,"adder4 fa1 c2", false,-1);
        tracep->declBit(c+26,"adder4 fa2 a", false,-1);
        tracep->declBit(c+27,"adder4 fa2 b", false,-1);
        tracep->declBit(c+3,"adder4 fa2 c_in", false,-1);
        tracep->declBit(c+4,"adder4 fa2 sum", false,-1);
        tracep->declBit(c+28,"adder4 fa2 c_out", false,-1);
        tracep->declBit(c+5,"adder4 fa2 s1", false,-1);
        tracep->declBit(c+29,"adder4 fa2 c1", false,-1);
        tracep->declBit(c+6,"adder4 fa2 c2", false,-1);
        tracep->declBit(c+30,"adder4 fa3 a", false,-1);
        tracep->declBit(c+31,"adder4 fa3 b", false,-1);
        tracep->declBit(c+7,"adder4 fa3 c_in", false,-1);
        tracep->declBit(c+8,"adder4 fa3 sum", false,-1);
        tracep->declBit(c+32,"adder4 fa3 c_out", false,-1);
        tracep->declBit(c+9,"adder4 fa3 s1", false,-1);
        tracep->declBit(c+33,"adder4 fa3 c1", false,-1);
        tracep->declBit(c+10,"adder4 fa3 c2", false,-1);
        tracep->declBit(c+34,"adder4 fa4 a", false,-1);
        tracep->declBit(c+35,"adder4 fa4 b", false,-1);
        tracep->declBit(c+11,"adder4 fa4 c_in", false,-1);
        tracep->declBit(c+12,"adder4 fa4 sum", false,-1);
        tracep->declBit(c+19,"adder4 fa4 c_out", false,-1);
        tracep->declBit(c+13,"adder4 fa4 s1", false,-1);
        tracep->declBit(c+36,"adder4 fa4 c1", false,-1);
        tracep->declBit(c+14,"adder4 fa4 c2", false,-1);
    }
}

void Vadder4::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vadder4::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vadder4__Syms* __restrict vlSymsp = static_cast<Vadder4__Syms*>(userp);
    Vadder4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vadder4::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vadder4__Syms* __restrict vlSymsp = static_cast<Vadder4__Syms*>(userp);
    Vadder4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->adder4__DOT__c),3);
        tracep->fullBit(oldp+2,(vlTOPp->adder4__DOT__fa1__DOT__s1));
        tracep->fullBit(oldp+3,((1U & (IData)(vlTOPp->adder4__DOT__c))));
        tracep->fullBit(oldp+4,((1U & ((IData)(vlTOPp->adder4__DOT__fa2__DOT__s1) 
                                       ^ (IData)(vlTOPp->adder4__DOT__c)))));
        tracep->fullBit(oldp+5,(vlTOPp->adder4__DOT__fa2__DOT__s1));
        tracep->fullBit(oldp+6,(((IData)(vlTOPp->adder4__DOT__fa2__DOT__s1) 
                                 & (IData)(vlTOPp->adder4__DOT__c))));
        tracep->fullBit(oldp+7,((1U & ((IData)(vlTOPp->adder4__DOT__c) 
                                       >> 1U))));
        tracep->fullBit(oldp+8,((1U & ((IData)(vlTOPp->adder4__DOT__fa3__DOT__s1) 
                                       ^ ((IData)(vlTOPp->adder4__DOT__c) 
                                          >> 1U)))));
        tracep->fullBit(oldp+9,(vlTOPp->adder4__DOT__fa3__DOT__s1));
        tracep->fullBit(oldp+10,(((IData)(vlTOPp->adder4__DOT__fa3__DOT__s1) 
                                  & ((IData)(vlTOPp->adder4__DOT__c) 
                                     >> 1U))));
        tracep->fullBit(oldp+11,((1U & ((IData)(vlTOPp->adder4__DOT__c) 
                                        >> 2U))));
        tracep->fullBit(oldp+12,((1U & ((IData)(vlTOPp->adder4__DOT__fa4__DOT__s1) 
                                        ^ ((IData)(vlTOPp->adder4__DOT__c) 
                                           >> 2U)))));
        tracep->fullBit(oldp+13,(vlTOPp->adder4__DOT__fa4__DOT__s1));
        tracep->fullBit(oldp+14,(((IData)(vlTOPp->adder4__DOT__fa4__DOT__s1) 
                                  & ((IData)(vlTOPp->adder4__DOT__c) 
                                     >> 2U))));
        tracep->fullCData(oldp+15,(vlTOPp->a),4);
        tracep->fullCData(oldp+16,(vlTOPp->b),4);
        tracep->fullBit(oldp+17,(vlTOPp->c_in));
        tracep->fullCData(oldp+18,(vlTOPp->sum),4);
        tracep->fullBit(oldp+19,(vlTOPp->c_out));
        tracep->fullBit(oldp+20,((1U & (IData)(vlTOPp->a))));
        tracep->fullBit(oldp+21,((1U & (IData)(vlTOPp->b))));
        tracep->fullBit(oldp+22,(((IData)(vlTOPp->adder4__DOT__fa1__DOT__s1) 
                                  ^ (IData)(vlTOPp->c_in))));
        tracep->fullBit(oldp+23,((1U & (((IData)(vlTOPp->adder4__DOT__fa1__DOT__s1) 
                                         & (IData)(vlTOPp->c_in)) 
                                        ^ ((IData)(vlTOPp->a) 
                                           & (IData)(vlTOPp->b))))));
        tracep->fullBit(oldp+24,((1U & ((IData)(vlTOPp->a) 
                                        & (IData)(vlTOPp->b)))));
        tracep->fullBit(oldp+25,(((IData)(vlTOPp->adder4__DOT__fa1__DOT__s1) 
                                  & (IData)(vlTOPp->c_in))));
        tracep->fullBit(oldp+26,((1U & ((IData)(vlTOPp->a) 
                                        >> 1U))));
        tracep->fullBit(oldp+27,((1U & ((IData)(vlTOPp->b) 
                                        >> 1U))));
        tracep->fullBit(oldp+28,((1U & (((IData)(vlTOPp->adder4__DOT__fa2__DOT__s1) 
                                         & (IData)(vlTOPp->adder4__DOT__c)) 
                                        ^ (((IData)(vlTOPp->a) 
                                            & (IData)(vlTOPp->b)) 
                                           >> 1U)))));
        tracep->fullBit(oldp+29,((1U & (((IData)(vlTOPp->a) 
                                         & (IData)(vlTOPp->b)) 
                                        >> 1U))));
        tracep->fullBit(oldp+30,((1U & ((IData)(vlTOPp->a) 
                                        >> 2U))));
        tracep->fullBit(oldp+31,((1U & ((IData)(vlTOPp->b) 
                                        >> 2U))));
        tracep->fullBit(oldp+32,((1U & (((IData)(vlTOPp->adder4__DOT__fa3__DOT__s1) 
                                         & ((IData)(vlTOPp->adder4__DOT__c) 
                                            >> 1U)) 
                                        ^ (((IData)(vlTOPp->a) 
                                            & (IData)(vlTOPp->b)) 
                                           >> 2U)))));
        tracep->fullBit(oldp+33,((1U & (((IData)(vlTOPp->a) 
                                         & (IData)(vlTOPp->b)) 
                                        >> 2U))));
        tracep->fullBit(oldp+34,((1U & ((IData)(vlTOPp->a) 
                                        >> 3U))));
        tracep->fullBit(oldp+35,((1U & ((IData)(vlTOPp->b) 
                                        >> 3U))));
        tracep->fullBit(oldp+36,((1U & (((IData)(vlTOPp->a) 
                                         & (IData)(vlTOPp->b)) 
                                        >> 3U))));
    }
}
