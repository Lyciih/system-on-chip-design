// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu4__Syms.h"


//======================

void Valu4::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Valu4::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Valu4__Syms* __restrict vlSymsp = static_cast<Valu4__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Valu4::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Valu4::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Valu4__Syms* __restrict vlSymsp = static_cast<Valu4__Syms*>(userp);
    Valu4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Valu4::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Valu4__Syms* __restrict vlSymsp = static_cast<Valu4__Syms*>(userp);
    Valu4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+14,"a", false,-1, 3,0);
        tracep->declBus(c+15,"b", false,-1, 3,0);
        tracep->declBit(c+16,"c_in", false,-1);
        tracep->declBus(c+17,"op", false,-1, 1,0);
        tracep->declBus(c+18,"result", false,-1, 3,0);
        tracep->declBit(c+19,"c_out", false,-1);
        tracep->declBus(c+14,"alu4 a", false,-1, 3,0);
        tracep->declBus(c+15,"alu4 b", false,-1, 3,0);
        tracep->declBit(c+16,"alu4 c_in", false,-1);
        tracep->declBus(c+17,"alu4 op", false,-1, 1,0);
        tracep->declBus(c+18,"alu4 result", false,-1, 3,0);
        tracep->declBit(c+19,"alu4 c_out", false,-1);
        tracep->declBit(c+1,"alu4 c1", false,-1);
        tracep->declBit(c+2,"alu4 c2", false,-1);
        tracep->declBit(c+3,"alu4 c3", false,-1);
        tracep->declBit(c+20,"alu4 al0 a", false,-1);
        tracep->declBit(c+21,"alu4 al0 b", false,-1);
        tracep->declBit(c+16,"alu4 al0 c_in", false,-1);
        tracep->declBus(c+17,"alu4 al0 op", false,-1, 1,0);
        tracep->declBit(c+22,"alu4 al0 result", false,-1);
        tracep->declBit(c+1,"alu4 al0 c_out", false,-1);
        tracep->declBit(c+23,"alu4 al0 c1", false,-1);
        tracep->declBit(c+24,"alu4 al0 c2", false,-1);
        tracep->declBit(c+25,"alu4 al0 c3", false,-1);
        tracep->declBit(c+20,"alu4 al0 g4 a", false,-1);
        tracep->declBit(c+21,"alu4 al0 g4 b", false,-1);
        tracep->declBit(c+16,"alu4 al0 g4 c_in", false,-1);
        tracep->declBit(c+25,"alu4 al0 g4 sum", false,-1);
        tracep->declBit(c+1,"alu4 al0 g4 c_out", false,-1);
        tracep->declBit(c+4,"alu4 al0 g4 s1", false,-1);
        tracep->declBit(c+23,"alu4 al0 g4 c1", false,-1);
        tracep->declBit(c+26,"alu4 al0 g4 c2", false,-1);
        tracep->declBit(c+23,"alu4 al0 g5 a_i", false,-1);
        tracep->declBit(c+24,"alu4 al0 g5 b_i", false,-1);
        tracep->declBit(c+25,"alu4 al0 g5 c_i", false,-1);
        tracep->declBit(c+42,"alu4 al0 g5 d_i", false,-1);
        tracep->declBus(c+17,"alu4 al0 g5 sel_i", false,-1, 1,0);
        tracep->declBit(c+22,"alu4 al0 g5 q_o", false,-1);
        tracep->declBit(c+22,"alu4 al0 g5 q", false,-1);
        tracep->declBit(c+27,"alu4 al1 a", false,-1);
        tracep->declBit(c+28,"alu4 al1 b", false,-1);
        tracep->declBit(c+1,"alu4 al1 c_in", false,-1);
        tracep->declBus(c+17,"alu4 al1 op", false,-1, 1,0);
        tracep->declBit(c+29,"alu4 al1 result", false,-1);
        tracep->declBit(c+2,"alu4 al1 c_out", false,-1);
        tracep->declBit(c+30,"alu4 al1 c1", false,-1);
        tracep->declBit(c+31,"alu4 al1 c2", false,-1);
        tracep->declBit(c+5,"alu4 al1 c3", false,-1);
        tracep->declBit(c+27,"alu4 al1 g4 a", false,-1);
        tracep->declBit(c+28,"alu4 al1 g4 b", false,-1);
        tracep->declBit(c+1,"alu4 al1 g4 c_in", false,-1);
        tracep->declBit(c+5,"alu4 al1 g4 sum", false,-1);
        tracep->declBit(c+2,"alu4 al1 g4 c_out", false,-1);
        tracep->declBit(c+6,"alu4 al1 g4 s1", false,-1);
        tracep->declBit(c+30,"alu4 al1 g4 c1", false,-1);
        tracep->declBit(c+7,"alu4 al1 g4 c2", false,-1);
        tracep->declBit(c+30,"alu4 al1 g5 a_i", false,-1);
        tracep->declBit(c+31,"alu4 al1 g5 b_i", false,-1);
        tracep->declBit(c+5,"alu4 al1 g5 c_i", false,-1);
        tracep->declBit(c+42,"alu4 al1 g5 d_i", false,-1);
        tracep->declBus(c+17,"alu4 al1 g5 sel_i", false,-1, 1,0);
        tracep->declBit(c+29,"alu4 al1 g5 q_o", false,-1);
        tracep->declBit(c+29,"alu4 al1 g5 q", false,-1);
        tracep->declBit(c+32,"alu4 al2 a", false,-1);
        tracep->declBit(c+33,"alu4 al2 b", false,-1);
        tracep->declBit(c+2,"alu4 al2 c_in", false,-1);
        tracep->declBus(c+17,"alu4 al2 op", false,-1, 1,0);
        tracep->declBit(c+34,"alu4 al2 result", false,-1);
        tracep->declBit(c+3,"alu4 al2 c_out", false,-1);
        tracep->declBit(c+35,"alu4 al2 c1", false,-1);
        tracep->declBit(c+36,"alu4 al2 c2", false,-1);
        tracep->declBit(c+8,"alu4 al2 c3", false,-1);
        tracep->declBit(c+32,"alu4 al2 g4 a", false,-1);
        tracep->declBit(c+33,"alu4 al2 g4 b", false,-1);
        tracep->declBit(c+2,"alu4 al2 g4 c_in", false,-1);
        tracep->declBit(c+8,"alu4 al2 g4 sum", false,-1);
        tracep->declBit(c+3,"alu4 al2 g4 c_out", false,-1);
        tracep->declBit(c+9,"alu4 al2 g4 s1", false,-1);
        tracep->declBit(c+35,"alu4 al2 g4 c1", false,-1);
        tracep->declBit(c+10,"alu4 al2 g4 c2", false,-1);
        tracep->declBit(c+35,"alu4 al2 g5 a_i", false,-1);
        tracep->declBit(c+36,"alu4 al2 g5 b_i", false,-1);
        tracep->declBit(c+8,"alu4 al2 g5 c_i", false,-1);
        tracep->declBit(c+42,"alu4 al2 g5 d_i", false,-1);
        tracep->declBus(c+17,"alu4 al2 g5 sel_i", false,-1, 1,0);
        tracep->declBit(c+34,"alu4 al2 g5 q_o", false,-1);
        tracep->declBit(c+34,"alu4 al2 g5 q", false,-1);
        tracep->declBit(c+37,"alu4 al3 a", false,-1);
        tracep->declBit(c+38,"alu4 al3 b", false,-1);
        tracep->declBit(c+3,"alu4 al3 c_in", false,-1);
        tracep->declBus(c+17,"alu4 al3 op", false,-1, 1,0);
        tracep->declBit(c+39,"alu4 al3 result", false,-1);
        tracep->declBit(c+19,"alu4 al3 c_out", false,-1);
        tracep->declBit(c+40,"alu4 al3 c1", false,-1);
        tracep->declBit(c+41,"alu4 al3 c2", false,-1);
        tracep->declBit(c+11,"alu4 al3 c3", false,-1);
        tracep->declBit(c+37,"alu4 al3 g4 a", false,-1);
        tracep->declBit(c+38,"alu4 al3 g4 b", false,-1);
        tracep->declBit(c+3,"alu4 al3 g4 c_in", false,-1);
        tracep->declBit(c+11,"alu4 al3 g4 sum", false,-1);
        tracep->declBit(c+19,"alu4 al3 g4 c_out", false,-1);
        tracep->declBit(c+12,"alu4 al3 g4 s1", false,-1);
        tracep->declBit(c+40,"alu4 al3 g4 c1", false,-1);
        tracep->declBit(c+13,"alu4 al3 g4 c2", false,-1);
        tracep->declBit(c+40,"alu4 al3 g5 a_i", false,-1);
        tracep->declBit(c+41,"alu4 al3 g5 b_i", false,-1);
        tracep->declBit(c+11,"alu4 al3 g5 c_i", false,-1);
        tracep->declBit(c+42,"alu4 al3 g5 d_i", false,-1);
        tracep->declBus(c+17,"alu4 al3 g5 sel_i", false,-1, 1,0);
        tracep->declBit(c+39,"alu4 al3 g5 q_o", false,-1);
        tracep->declBit(c+39,"alu4 al3 g5 q", false,-1);
    }
}

void Valu4::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Valu4::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Valu4__Syms* __restrict vlSymsp = static_cast<Valu4__Syms*>(userp);
    Valu4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Valu4::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Valu4__Syms* __restrict vlSymsp = static_cast<Valu4__Syms*>(userp);
    Valu4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->alu4__DOT__c1));
        tracep->fullBit(oldp+2,(vlTOPp->alu4__DOT__c2));
        tracep->fullBit(oldp+3,(vlTOPp->alu4__DOT__c3));
        tracep->fullBit(oldp+4,(vlTOPp->alu4__DOT__al0__DOT__g4__DOT__s1));
        tracep->fullBit(oldp+5,(((IData)(vlTOPp->alu4__DOT__al1__DOT__g4__DOT__s1) 
                                 ^ (IData)(vlTOPp->alu4__DOT__c1))));
        tracep->fullBit(oldp+6,(vlTOPp->alu4__DOT__al1__DOT__g4__DOT__s1));
        tracep->fullBit(oldp+7,(((IData)(vlTOPp->alu4__DOT__al1__DOT__g4__DOT__s1) 
                                 & (IData)(vlTOPp->alu4__DOT__c1))));
        tracep->fullBit(oldp+8,(((IData)(vlTOPp->alu4__DOT__al2__DOT__g4__DOT__s1) 
                                 ^ (IData)(vlTOPp->alu4__DOT__c2))));
        tracep->fullBit(oldp+9,(vlTOPp->alu4__DOT__al2__DOT__g4__DOT__s1));
        tracep->fullBit(oldp+10,(((IData)(vlTOPp->alu4__DOT__al2__DOT__g4__DOT__s1) 
                                  & (IData)(vlTOPp->alu4__DOT__c2))));
        tracep->fullBit(oldp+11,(((IData)(vlTOPp->alu4__DOT__al3__DOT__g4__DOT__s1) 
                                  ^ (IData)(vlTOPp->alu4__DOT__c3))));
        tracep->fullBit(oldp+12,(vlTOPp->alu4__DOT__al3__DOT__g4__DOT__s1));
        tracep->fullBit(oldp+13,(((IData)(vlTOPp->alu4__DOT__al3__DOT__g4__DOT__s1) 
                                  & (IData)(vlTOPp->alu4__DOT__c3))));
        tracep->fullCData(oldp+14,(vlTOPp->a),4);
        tracep->fullCData(oldp+15,(vlTOPp->b),4);
        tracep->fullBit(oldp+16,(vlTOPp->c_in));
        tracep->fullCData(oldp+17,(vlTOPp->op),2);
        tracep->fullCData(oldp+18,(vlTOPp->result),4);
        tracep->fullBit(oldp+19,(vlTOPp->c_out));
        tracep->fullBit(oldp+20,((1U & (IData)(vlTOPp->a))));
        tracep->fullBit(oldp+21,((1U & (IData)(vlTOPp->b))));
        tracep->fullBit(oldp+22,((1U & ((0U == (IData)(vlTOPp->op))
                                         ? ((IData)(vlTOPp->a) 
                                            & (IData)(vlTOPp->b))
                                         : ((1U == (IData)(vlTOPp->op))
                                             ? ((IData)(vlTOPp->a) 
                                                | (IData)(vlTOPp->b))
                                             : ((2U 
                                                 == (IData)(vlTOPp->op)) 
                                                & ((IData)(vlTOPp->alu4__DOT__al0__DOT__g4__DOT__s1) 
                                                   ^ (IData)(vlTOPp->c_in))))))));
        tracep->fullBit(oldp+23,((1U & ((IData)(vlTOPp->a) 
                                        & (IData)(vlTOPp->b)))));
        tracep->fullBit(oldp+24,((1U & ((IData)(vlTOPp->a) 
                                        | (IData)(vlTOPp->b)))));
        tracep->fullBit(oldp+25,(((IData)(vlTOPp->alu4__DOT__al0__DOT__g4__DOT__s1) 
                                  ^ (IData)(vlTOPp->c_in))));
        tracep->fullBit(oldp+26,(((IData)(vlTOPp->alu4__DOT__al0__DOT__g4__DOT__s1) 
                                  & (IData)(vlTOPp->c_in))));
        tracep->fullBit(oldp+27,((1U & ((IData)(vlTOPp->a) 
                                        >> 1U))));
        tracep->fullBit(oldp+28,((1U & ((IData)(vlTOPp->b) 
                                        >> 1U))));
        tracep->fullBit(oldp+29,((1U & ((0U == (IData)(vlTOPp->op))
                                         ? (((IData)(vlTOPp->a) 
                                             & (IData)(vlTOPp->b)) 
                                            >> 1U) : 
                                        ((1U == (IData)(vlTOPp->op))
                                          ? (((IData)(vlTOPp->a) 
                                              | (IData)(vlTOPp->b)) 
                                             >> 1U)
                                          : ((2U == (IData)(vlTOPp->op)) 
                                             & ((IData)(vlTOPp->alu4__DOT__al1__DOT__g4__DOT__s1) 
                                                ^ (IData)(vlTOPp->alu4__DOT__c1))))))));
        tracep->fullBit(oldp+30,((1U & (((IData)(vlTOPp->a) 
                                         & (IData)(vlTOPp->b)) 
                                        >> 1U))));
        tracep->fullBit(oldp+31,((1U & (((IData)(vlTOPp->a) 
                                         | (IData)(vlTOPp->b)) 
                                        >> 1U))));
        tracep->fullBit(oldp+32,((1U & ((IData)(vlTOPp->a) 
                                        >> 2U))));
        tracep->fullBit(oldp+33,((1U & ((IData)(vlTOPp->b) 
                                        >> 2U))));
        tracep->fullBit(oldp+34,((1U & ((0U == (IData)(vlTOPp->op))
                                         ? (((IData)(vlTOPp->a) 
                                             & (IData)(vlTOPp->b)) 
                                            >> 2U) : 
                                        ((1U == (IData)(vlTOPp->op))
                                          ? (((IData)(vlTOPp->a) 
                                              | (IData)(vlTOPp->b)) 
                                             >> 2U)
                                          : ((2U == (IData)(vlTOPp->op)) 
                                             & ((IData)(vlTOPp->alu4__DOT__al2__DOT__g4__DOT__s1) 
                                                ^ (IData)(vlTOPp->alu4__DOT__c2))))))));
        tracep->fullBit(oldp+35,((1U & (((IData)(vlTOPp->a) 
                                         & (IData)(vlTOPp->b)) 
                                        >> 2U))));
        tracep->fullBit(oldp+36,((1U & (((IData)(vlTOPp->a) 
                                         | (IData)(vlTOPp->b)) 
                                        >> 2U))));
        tracep->fullBit(oldp+37,((1U & ((IData)(vlTOPp->a) 
                                        >> 3U))));
        tracep->fullBit(oldp+38,((1U & ((IData)(vlTOPp->b) 
                                        >> 3U))));
        tracep->fullBit(oldp+39,((1U & ((0U == (IData)(vlTOPp->op))
                                         ? (((IData)(vlTOPp->a) 
                                             & (IData)(vlTOPp->b)) 
                                            >> 3U) : 
                                        ((1U == (IData)(vlTOPp->op))
                                          ? (((IData)(vlTOPp->a) 
                                              | (IData)(vlTOPp->b)) 
                                             >> 3U)
                                          : ((2U == (IData)(vlTOPp->op)) 
                                             & ((IData)(vlTOPp->alu4__DOT__al3__DOT__g4__DOT__s1) 
                                                ^ (IData)(vlTOPp->alu4__DOT__c3))))))));
        tracep->fullBit(oldp+40,((1U & (((IData)(vlTOPp->a) 
                                         & (IData)(vlTOPp->b)) 
                                        >> 3U))));
        tracep->fullBit(oldp+41,((1U & (((IData)(vlTOPp->a) 
                                         | (IData)(vlTOPp->b)) 
                                        >> 3U))));
        tracep->fullBit(oldp+42,(0U));
    }
}
