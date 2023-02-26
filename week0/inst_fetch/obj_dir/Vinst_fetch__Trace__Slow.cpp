// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vinst_fetch__Syms.h"


//======================

void Vinst_fetch::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vinst_fetch::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vinst_fetch__Syms* __restrict vlSymsp = static_cast<Vinst_fetch__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vinst_fetch::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vinst_fetch::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vinst_fetch__Syms* __restrict vlSymsp = static_cast<Vinst_fetch__Syms*>(userp);
    Vinst_fetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vinst_fetch::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vinst_fetch__Syms* __restrict vlSymsp = static_cast<Vinst_fetch__Syms*>(userp);
    Vinst_fetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+5,"rst_i", false,-1);
        tracep->declBit(c+6,"clk_i", false,-1);
        tracep->declBus(c+7,"inst_o", false,-1, 31,0);
        tracep->declBit(c+5,"inst_fetch rst_i", false,-1);
        tracep->declBit(c+6,"inst_fetch clk_i", false,-1);
        tracep->declBus(c+1,"inst_fetch inst_o", false,-1, 31,0);
        tracep->declBus(c+2,"inst_fetch pc_wire", false,-1, 31,0);
        tracep->declBit(c+3,"inst_fetch ce_wire", false,-1);
        tracep->declBit(c+6,"inst_fetch pc_reg0 clk_i", false,-1);
        tracep->declBit(c+5,"inst_fetch pc_reg0 rst_i", false,-1);
        tracep->declBus(c+2,"inst_fetch pc_reg0 pc_o", false,-1, 31,0);
        tracep->declBit(c+3,"inst_fetch pc_reg0 ce_o", false,-1);
        tracep->declBit(c+6,"inst_fetch rom0 clk_i", false,-1);
        tracep->declBit(c+3,"inst_fetch rom0 ce_i", false,-1);
        tracep->declBus(c+2,"inst_fetch rom0 addr_i", false,-1, 31,0);
        tracep->declBus(c+1,"inst_fetch rom0 inst_o", false,-1, 31,0);
        tracep->declBus(c+4,"inst_fetch rom0 addr4", false,-1, 20,0);
    }
}

void Vinst_fetch::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vinst_fetch::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vinst_fetch__Syms* __restrict vlSymsp = static_cast<Vinst_fetch__Syms*>(userp);
    Vinst_fetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vinst_fetch::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vinst_fetch__Syms* __restrict vlSymsp = static_cast<Vinst_fetch__Syms*>(userp);
    Vinst_fetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSymsp->TOP__inst_fetch__rom0.__PVT__inst_o),32);
        tracep->fullIData(oldp+2,(vlSymsp->TOP__inst_fetch.__PVT__pc_wire),32);
        tracep->fullBit(oldp+3,(vlSymsp->TOP__inst_fetch.__PVT__ce_wire));
        tracep->fullIData(oldp+4,((0x1ffffcU & vlSymsp->TOP__inst_fetch.__PVT__pc_wire)),21);
        tracep->fullBit(oldp+5,(vlTOPp->rst_i));
        tracep->fullBit(oldp+6,(vlTOPp->clk_i));
        tracep->fullIData(oldp+7,(vlTOPp->inst_o),32);
    }
}
