// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vinst_fetch__Syms.h"


void Vinst_fetch::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vinst_fetch__Syms* __restrict vlSymsp = static_cast<Vinst_fetch__Syms*>(userp);
    Vinst_fetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vinst_fetch::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vinst_fetch__Syms* __restrict vlSymsp = static_cast<Vinst_fetch__Syms*>(userp);
    Vinst_fetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSymsp->TOP__inst_fetch__rom0.__PVT__inst_o),32);
            tracep->chgIData(oldp+1,(vlSymsp->TOP__inst_fetch.__PVT__pc_wire),32);
            tracep->chgBit(oldp+2,(vlSymsp->TOP__inst_fetch.__PVT__ce_wire));
            tracep->chgIData(oldp+3,((0x1ffffcU & vlSymsp->TOP__inst_fetch.__PVT__pc_wire)),21);
        }
        tracep->chgBit(oldp+4,(vlTOPp->rst_i));
        tracep->chgBit(oldp+5,(vlTOPp->clk_i));
        tracep->chgIData(oldp+6,(vlTOPp->inst_o),32);
    }
}

void Vinst_fetch::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vinst_fetch__Syms* __restrict vlSymsp = static_cast<Vinst_fetch__Syms*>(userp);
    Vinst_fetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
