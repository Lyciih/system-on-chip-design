// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmul__Syms.h"


//======================

void Vmul::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vmul::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmul__Syms* __restrict vlSymsp = static_cast<Vmul__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vmul::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vmul::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vmul__Syms* __restrict vlSymsp = static_cast<Vmul__Syms*>(userp);
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vmul::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vmul__Syms* __restrict vlSymsp = static_cast<Vmul__Syms*>(userp);
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+14,"clk_i", false,-1);
        tracep->declBit(c+15,"rst_i", false,-1);
        tracep->declBus(c+16,"a_i", false,-1, 31,0);
        tracep->declBus(c+17,"b_i", false,-1, 31,0);
        tracep->declBit(c+18,"req_i", false,-1);
        tracep->declBit(c+19,"ready_o", false,-1);
        tracep->declBus(c+20,"result_o", false,-1, 31,0);
        tracep->declBus(c+24,"mul XLEN", false,-1, 31,0);
        tracep->declBit(c+14,"mul clk_i", false,-1);
        tracep->declBit(c+15,"mul rst_i", false,-1);
        tracep->declBus(c+16,"mul a_i", false,-1, 31,0);
        tracep->declBus(c+17,"mul b_i", false,-1, 31,0);
        tracep->declBit(c+18,"mul req_i", false,-1);
        tracep->declBit(c+19,"mul ready_o", false,-1);
        tracep->declBus(c+20,"mul result_o", false,-1, 31,0);
        tracep->declBit(c+21,"mul is_a_zero", false,-1);
        tracep->declBit(c+22,"mul is_b_zero", false,-1);
        tracep->declBus(c+16,"mul op_a", false,-1, 31,0);
        tracep->declBus(c+17,"mul op_b", false,-1, 31,0);
        tracep->declBit(c+1,"mul is_calc_done", false,-1);
        tracep->declBus(c+2,"mul reg32", false,-1, 31,0);
        tracep->declArray(c+3,"mul result", false,-1, 64,0);
        tracep->declBus(c+6,"mul cnt", false,-1, 5,0);
        tracep->declBus(c+7,"mul mull", false,-1, 31,0);
        tracep->declBus(c+8,"mul mulh", false,-1, 31,0);
        tracep->declBus(c+25,"mul S_IDLE", false,-1, 1,0);
        tracep->declBus(c+26,"mul S_CALC", false,-1, 1,0);
        tracep->declBus(c+27,"mul S_DONE", false,-1, 1,0);
        tracep->declBus(c+9,"mul S", false,-1, 1,0);
        tracep->declBus(c+23,"mul S_nxt", false,-1, 1,0);
        tracep->declBit(c+10,"mul mul_add", false,-1);
        tracep->declBus(c+2,"mul adder_opa", false,-1, 31,0);
        tracep->declBus(c+8,"mul adder_opb", false,-1, 31,0);
        tracep->declBus(c+11,"mul adder_tmp", false,-1, 31,0);
        tracep->declQuad(c+12,"mul result_tmp", false,-1, 63,0);
    }
}

void Vmul::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vmul::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vmul__Syms* __restrict vlSymsp = static_cast<Vmul__Syms*>(userp);
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vmul::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vmul__Syms* __restrict vlSymsp = static_cast<Vmul__Syms*>(userp);
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (~ (IData)((0U 
                                                  != (IData)(vlTOPp->mul__DOT__cnt)))))));
        tracep->fullIData(oldp+2,(vlTOPp->mul__DOT__reg32),32);
        tracep->fullWData(oldp+3,(vlTOPp->mul__DOT__result),65);
        tracep->fullCData(oldp+6,(vlTOPp->mul__DOT__cnt),6);
        tracep->fullIData(oldp+7,(vlTOPp->mul__DOT__result[0U]),32);
        tracep->fullIData(oldp+8,(vlTOPp->mul__DOT__result[1U]),32);
        tracep->fullCData(oldp+9,(vlTOPp->mul__DOT__S),2);
        tracep->fullBit(oldp+10,((1U & vlTOPp->mul__DOT__result[0U])));
        tracep->fullIData(oldp+11,((vlTOPp->mul__DOT__reg32 
                                    + vlTOPp->mul__DOT__result[1U])),32);
        tracep->fullQData(oldp+12,((((QData)((IData)(
                                                     (vlTOPp->mul__DOT__reg32 
                                                      + 
                                                      vlTOPp->mul__DOT__result[1U]))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mul__DOT__result[0U])))),64);
        tracep->fullBit(oldp+14,(vlTOPp->clk_i));
        tracep->fullBit(oldp+15,(vlTOPp->rst_i));
        tracep->fullIData(oldp+16,(vlTOPp->a_i),32);
        tracep->fullIData(oldp+17,(vlTOPp->b_i),32);
        tracep->fullBit(oldp+18,(vlTOPp->req_i));
        tracep->fullBit(oldp+19,(vlTOPp->ready_o));
        tracep->fullIData(oldp+20,(vlTOPp->result_o),32);
        tracep->fullBit(oldp+21,((1U & (~ (IData)((0U 
                                                   != vlTOPp->a_i))))));
        tracep->fullBit(oldp+22,((1U & (~ (IData)((0U 
                                                   != vlTOPp->b_i))))));
        tracep->fullCData(oldp+23,(((0U == (IData)(vlTOPp->mul__DOT__S))
                                     ? ((1U & ((~ (IData)(
                                                          (0U 
                                                           != vlTOPp->a_i))) 
                                               | (~ (IData)(
                                                            (0U 
                                                             != vlTOPp->b_i)))))
                                         ? 2U : 1U)
                                     : ((1U == (IData)(vlTOPp->mul__DOT__S))
                                         ? ((0U != (IData)(vlTOPp->mul__DOT__cnt))
                                             ? 1U : 2U)
                                         : 0U))),2);
        tracep->fullIData(oldp+24,(0x20U),32);
        tracep->fullCData(oldp+25,(0U),2);
        tracep->fullCData(oldp+26,(1U),2);
        tracep->fullCData(oldp+27,(2U),2);
    }
}
