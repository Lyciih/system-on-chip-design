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
        tracep->declBit(c+319,"clk_i", false,-1);
        tracep->declBit(c+320,"rst_i", false,-1);
        tracep->declBit(c+321,"req_i", false,-1);
        tracep->declBus(c+322,"a_i", false,-1, 31,0);
        tracep->declBus(c+323,"b_i", false,-1, 31,0);
        tracep->declBit(c+324,"ready_o", false,-1);
        tracep->declQuad(c+325,"result_o", false,-1, 63,0);
        tracep->declBit(c+327,"overflow_o", false,-1);
        tracep->declBus(c+361,"mul XLEN", false,-1, 31,0);
        tracep->declBit(c+319,"mul clk_i", false,-1);
        tracep->declBit(c+320,"mul rst_i", false,-1);
        tracep->declBit(c+321,"mul req_i", false,-1);
        tracep->declBus(c+322,"mul a_i", false,-1, 31,0);
        tracep->declBus(c+323,"mul b_i", false,-1, 31,0);
        tracep->declBit(c+324,"mul ready_o", false,-1);
        tracep->declQuad(c+325,"mul result_o", false,-1, 63,0);
        tracep->declBit(c+327,"mul overflow_o", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declArray(c+1+i*3,"mul acc_temp", true,(i+0), 64,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declArray(c+97+i*3,"mul acc_temp_1", true,(i+0), 64,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+145+i*3,"mul acc_temp_2", true,(i+0), 64,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+169+i*3,"mul acc_temp_3", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+181+i*3,"mul acc_temp_4", true,(i+0), 64,0);}}
        tracep->declArray(c+187,"mul acc_temp_5", false,-1, 64,0);
        tracep->declBus(c+190,"mul ready_temp", false,-1, 31,0);
        tracep->declBus(c+361,"mul u_mult_step0 XLEN", false,-1, 31,0);
        tracep->declBus(c+362,"mul u_mult_step0 SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul u_mult_step0 clk_i", false,-1);
        tracep->declBit(c+320,"mul u_mult_step0 rst_i", false,-1);
        tracep->declBit(c+321,"mul u_mult_step0 en_i", false,-1);
        tracep->declBit(c+328,"mul u_mult_step0 flush_i", false,-1);
        tracep->declBus(c+322,"mul u_mult_step0 a_i", false,-1, 31,0);
        tracep->declBit(c+329,"mul u_mult_step0 b_i", false,-1);
        tracep->declArray(c+191,"mul u_mult_step0 acc_o", false,-1, 64,0);
        tracep->declBit(c+194,"mul u_mult_step0 ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[1] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+363,"mul genblk1[1] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[1] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[1] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[1] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[1] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[1] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+330,"mul genblk1[1] mult_stepx b_i", false,-1);
        tracep->declArray(c+195,"mul genblk1[1] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+198,"mul genblk1[1] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[2] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+364,"mul genblk1[2] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[2] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[2] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[2] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[2] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[2] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+331,"mul genblk1[2] mult_stepx b_i", false,-1);
        tracep->declArray(c+199,"mul genblk1[2] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+202,"mul genblk1[2] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[3] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+365,"mul genblk1[3] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[3] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[3] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[3] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[3] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[3] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+332,"mul genblk1[3] mult_stepx b_i", false,-1);
        tracep->declArray(c+203,"mul genblk1[3] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+206,"mul genblk1[3] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[4] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+366,"mul genblk1[4] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[4] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[4] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[4] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[4] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[4] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+333,"mul genblk1[4] mult_stepx b_i", false,-1);
        tracep->declArray(c+207,"mul genblk1[4] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+210,"mul genblk1[4] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[5] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+367,"mul genblk1[5] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[5] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[5] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[5] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[5] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[5] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+334,"mul genblk1[5] mult_stepx b_i", false,-1);
        tracep->declArray(c+211,"mul genblk1[5] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+214,"mul genblk1[5] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[6] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+368,"mul genblk1[6] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[6] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[6] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[6] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[6] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[6] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+335,"mul genblk1[6] mult_stepx b_i", false,-1);
        tracep->declArray(c+215,"mul genblk1[6] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+218,"mul genblk1[6] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[7] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+369,"mul genblk1[7] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[7] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[7] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[7] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[7] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[7] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+336,"mul genblk1[7] mult_stepx b_i", false,-1);
        tracep->declArray(c+219,"mul genblk1[7] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+222,"mul genblk1[7] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[8] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+370,"mul genblk1[8] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[8] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[8] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[8] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[8] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[8] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+337,"mul genblk1[8] mult_stepx b_i", false,-1);
        tracep->declArray(c+223,"mul genblk1[8] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+226,"mul genblk1[8] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[9] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+371,"mul genblk1[9] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[9] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[9] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[9] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[9] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[9] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+338,"mul genblk1[9] mult_stepx b_i", false,-1);
        tracep->declArray(c+227,"mul genblk1[9] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+230,"mul genblk1[9] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[10] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+372,"mul genblk1[10] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[10] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[10] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[10] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[10] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[10] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+339,"mul genblk1[10] mult_stepx b_i", false,-1);
        tracep->declArray(c+231,"mul genblk1[10] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+234,"mul genblk1[10] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[11] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+373,"mul genblk1[11] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[11] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[11] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[11] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[11] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[11] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+340,"mul genblk1[11] mult_stepx b_i", false,-1);
        tracep->declArray(c+235,"mul genblk1[11] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+238,"mul genblk1[11] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[12] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+374,"mul genblk1[12] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[12] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[12] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[12] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[12] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[12] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+341,"mul genblk1[12] mult_stepx b_i", false,-1);
        tracep->declArray(c+239,"mul genblk1[12] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+242,"mul genblk1[12] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[13] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+375,"mul genblk1[13] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[13] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[13] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[13] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[13] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[13] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+342,"mul genblk1[13] mult_stepx b_i", false,-1);
        tracep->declArray(c+243,"mul genblk1[13] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+246,"mul genblk1[13] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[14] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+376,"mul genblk1[14] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[14] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[14] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[14] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[14] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[14] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+343,"mul genblk1[14] mult_stepx b_i", false,-1);
        tracep->declArray(c+247,"mul genblk1[14] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+250,"mul genblk1[14] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[15] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+377,"mul genblk1[15] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[15] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[15] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[15] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[15] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[15] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+344,"mul genblk1[15] mult_stepx b_i", false,-1);
        tracep->declArray(c+251,"mul genblk1[15] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+254,"mul genblk1[15] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[16] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+378,"mul genblk1[16] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[16] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[16] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[16] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[16] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[16] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+345,"mul genblk1[16] mult_stepx b_i", false,-1);
        tracep->declArray(c+255,"mul genblk1[16] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+258,"mul genblk1[16] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[17] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+379,"mul genblk1[17] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[17] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[17] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[17] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[17] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[17] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+346,"mul genblk1[17] mult_stepx b_i", false,-1);
        tracep->declArray(c+259,"mul genblk1[17] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+262,"mul genblk1[17] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[18] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+380,"mul genblk1[18] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[18] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[18] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[18] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[18] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[18] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+347,"mul genblk1[18] mult_stepx b_i", false,-1);
        tracep->declArray(c+263,"mul genblk1[18] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+266,"mul genblk1[18] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[19] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+381,"mul genblk1[19] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[19] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[19] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[19] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[19] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[19] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+348,"mul genblk1[19] mult_stepx b_i", false,-1);
        tracep->declArray(c+267,"mul genblk1[19] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+270,"mul genblk1[19] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[20] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+382,"mul genblk1[20] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[20] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[20] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[20] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[20] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[20] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+349,"mul genblk1[20] mult_stepx b_i", false,-1);
        tracep->declArray(c+271,"mul genblk1[20] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+274,"mul genblk1[20] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[21] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+383,"mul genblk1[21] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[21] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[21] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[21] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[21] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[21] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+350,"mul genblk1[21] mult_stepx b_i", false,-1);
        tracep->declArray(c+275,"mul genblk1[21] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+278,"mul genblk1[21] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[22] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+384,"mul genblk1[22] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[22] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[22] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[22] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[22] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[22] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+351,"mul genblk1[22] mult_stepx b_i", false,-1);
        tracep->declArray(c+279,"mul genblk1[22] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+282,"mul genblk1[22] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[23] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+385,"mul genblk1[23] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[23] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[23] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[23] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[23] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[23] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+352,"mul genblk1[23] mult_stepx b_i", false,-1);
        tracep->declArray(c+283,"mul genblk1[23] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+286,"mul genblk1[23] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[24] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+386,"mul genblk1[24] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[24] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[24] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[24] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[24] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[24] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+353,"mul genblk1[24] mult_stepx b_i", false,-1);
        tracep->declArray(c+287,"mul genblk1[24] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+290,"mul genblk1[24] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[25] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+387,"mul genblk1[25] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[25] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[25] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[25] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[25] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[25] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+354,"mul genblk1[25] mult_stepx b_i", false,-1);
        tracep->declArray(c+291,"mul genblk1[25] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+294,"mul genblk1[25] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[26] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+388,"mul genblk1[26] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[26] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[26] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[26] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[26] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[26] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+355,"mul genblk1[26] mult_stepx b_i", false,-1);
        tracep->declArray(c+295,"mul genblk1[26] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+298,"mul genblk1[26] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[27] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+389,"mul genblk1[27] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[27] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[27] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[27] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[27] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[27] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+356,"mul genblk1[27] mult_stepx b_i", false,-1);
        tracep->declArray(c+299,"mul genblk1[27] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+302,"mul genblk1[27] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[28] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+390,"mul genblk1[28] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[28] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[28] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[28] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[28] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[28] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+357,"mul genblk1[28] mult_stepx b_i", false,-1);
        tracep->declArray(c+303,"mul genblk1[28] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+306,"mul genblk1[28] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[29] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+391,"mul genblk1[29] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[29] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[29] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[29] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[29] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[29] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+358,"mul genblk1[29] mult_stepx b_i", false,-1);
        tracep->declArray(c+307,"mul genblk1[29] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+310,"mul genblk1[29] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[30] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+392,"mul genblk1[30] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[30] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[30] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[30] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[30] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[30] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+359,"mul genblk1[30] mult_stepx b_i", false,-1);
        tracep->declArray(c+311,"mul genblk1[30] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+314,"mul genblk1[30] mult_stepx ready_o", false,-1);
        tracep->declBus(c+361,"mul genblk1[31] mult_stepx XLEN", false,-1, 31,0);
        tracep->declBus(c+393,"mul genblk1[31] mult_stepx SHIFT", false,-1, 31,0);
        tracep->declBit(c+319,"mul genblk1[31] mult_stepx clk_i", false,-1);
        tracep->declBit(c+320,"mul genblk1[31] mult_stepx rst_i", false,-1);
        tracep->declBit(c+321,"mul genblk1[31] mult_stepx en_i", false,-1);
        tracep->declBit(c+328,"mul genblk1[31] mult_stepx flush_i", false,-1);
        tracep->declBus(c+322,"mul genblk1[31] mult_stepx a_i", false,-1, 31,0);
        tracep->declBit(c+360,"mul genblk1[31] mult_stepx b_i", false,-1);
        tracep->declArray(c+315,"mul genblk1[31] mult_stepx acc_o", false,-1, 64,0);
        tracep->declBit(c+318,"mul genblk1[31] mult_stepx ready_o", false,-1);
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
        tracep->fullWData(oldp+1,(vlTOPp->mul__DOT__acc_temp[0]),65);
        tracep->fullWData(oldp+4,(vlTOPp->mul__DOT__acc_temp[1]),65);
        tracep->fullWData(oldp+7,(vlTOPp->mul__DOT__acc_temp[2]),65);
        tracep->fullWData(oldp+10,(vlTOPp->mul__DOT__acc_temp[3]),65);
        tracep->fullWData(oldp+13,(vlTOPp->mul__DOT__acc_temp[4]),65);
        tracep->fullWData(oldp+16,(vlTOPp->mul__DOT__acc_temp[5]),65);
        tracep->fullWData(oldp+19,(vlTOPp->mul__DOT__acc_temp[6]),65);
        tracep->fullWData(oldp+22,(vlTOPp->mul__DOT__acc_temp[7]),65);
        tracep->fullWData(oldp+25,(vlTOPp->mul__DOT__acc_temp[8]),65);
        tracep->fullWData(oldp+28,(vlTOPp->mul__DOT__acc_temp[9]),65);
        tracep->fullWData(oldp+31,(vlTOPp->mul__DOT__acc_temp[10]),65);
        tracep->fullWData(oldp+34,(vlTOPp->mul__DOT__acc_temp[11]),65);
        tracep->fullWData(oldp+37,(vlTOPp->mul__DOT__acc_temp[12]),65);
        tracep->fullWData(oldp+40,(vlTOPp->mul__DOT__acc_temp[13]),65);
        tracep->fullWData(oldp+43,(vlTOPp->mul__DOT__acc_temp[14]),65);
        tracep->fullWData(oldp+46,(vlTOPp->mul__DOT__acc_temp[15]),65);
        tracep->fullWData(oldp+49,(vlTOPp->mul__DOT__acc_temp[16]),65);
        tracep->fullWData(oldp+52,(vlTOPp->mul__DOT__acc_temp[17]),65);
        tracep->fullWData(oldp+55,(vlTOPp->mul__DOT__acc_temp[18]),65);
        tracep->fullWData(oldp+58,(vlTOPp->mul__DOT__acc_temp[19]),65);
        tracep->fullWData(oldp+61,(vlTOPp->mul__DOT__acc_temp[20]),65);
        tracep->fullWData(oldp+64,(vlTOPp->mul__DOT__acc_temp[21]),65);
        tracep->fullWData(oldp+67,(vlTOPp->mul__DOT__acc_temp[22]),65);
        tracep->fullWData(oldp+70,(vlTOPp->mul__DOT__acc_temp[23]),65);
        tracep->fullWData(oldp+73,(vlTOPp->mul__DOT__acc_temp[24]),65);
        tracep->fullWData(oldp+76,(vlTOPp->mul__DOT__acc_temp[25]),65);
        tracep->fullWData(oldp+79,(vlTOPp->mul__DOT__acc_temp[26]),65);
        tracep->fullWData(oldp+82,(vlTOPp->mul__DOT__acc_temp[27]),65);
        tracep->fullWData(oldp+85,(vlTOPp->mul__DOT__acc_temp[28]),65);
        tracep->fullWData(oldp+88,(vlTOPp->mul__DOT__acc_temp[29]),65);
        tracep->fullWData(oldp+91,(vlTOPp->mul__DOT__acc_temp[30]),65);
        tracep->fullWData(oldp+94,(vlTOPp->mul__DOT__acc_temp[31]),65);
        tracep->fullWData(oldp+97,(vlTOPp->mul__DOT__acc_temp_1[0]),65);
        tracep->fullWData(oldp+100,(vlTOPp->mul__DOT__acc_temp_1[1]),65);
        tracep->fullWData(oldp+103,(vlTOPp->mul__DOT__acc_temp_1[2]),65);
        tracep->fullWData(oldp+106,(vlTOPp->mul__DOT__acc_temp_1[3]),65);
        tracep->fullWData(oldp+109,(vlTOPp->mul__DOT__acc_temp_1[4]),65);
        tracep->fullWData(oldp+112,(vlTOPp->mul__DOT__acc_temp_1[5]),65);
        tracep->fullWData(oldp+115,(vlTOPp->mul__DOT__acc_temp_1[6]),65);
        tracep->fullWData(oldp+118,(vlTOPp->mul__DOT__acc_temp_1[7]),65);
        tracep->fullWData(oldp+121,(vlTOPp->mul__DOT__acc_temp_1[8]),65);
        tracep->fullWData(oldp+124,(vlTOPp->mul__DOT__acc_temp_1[9]),65);
        tracep->fullWData(oldp+127,(vlTOPp->mul__DOT__acc_temp_1[10]),65);
        tracep->fullWData(oldp+130,(vlTOPp->mul__DOT__acc_temp_1[11]),65);
        tracep->fullWData(oldp+133,(vlTOPp->mul__DOT__acc_temp_1[12]),65);
        tracep->fullWData(oldp+136,(vlTOPp->mul__DOT__acc_temp_1[13]),65);
        tracep->fullWData(oldp+139,(vlTOPp->mul__DOT__acc_temp_1[14]),65);
        tracep->fullWData(oldp+142,(vlTOPp->mul__DOT__acc_temp_1[15]),65);
        tracep->fullWData(oldp+145,(vlTOPp->mul__DOT__acc_temp_2[0]),65);
        tracep->fullWData(oldp+148,(vlTOPp->mul__DOT__acc_temp_2[1]),65);
        tracep->fullWData(oldp+151,(vlTOPp->mul__DOT__acc_temp_2[2]),65);
        tracep->fullWData(oldp+154,(vlTOPp->mul__DOT__acc_temp_2[3]),65);
        tracep->fullWData(oldp+157,(vlTOPp->mul__DOT__acc_temp_2[4]),65);
        tracep->fullWData(oldp+160,(vlTOPp->mul__DOT__acc_temp_2[5]),65);
        tracep->fullWData(oldp+163,(vlTOPp->mul__DOT__acc_temp_2[6]),65);
        tracep->fullWData(oldp+166,(vlTOPp->mul__DOT__acc_temp_2[7]),65);
        tracep->fullWData(oldp+169,(vlTOPp->mul__DOT__acc_temp_3[0]),65);
        tracep->fullWData(oldp+172,(vlTOPp->mul__DOT__acc_temp_3[1]),65);
        tracep->fullWData(oldp+175,(vlTOPp->mul__DOT__acc_temp_3[2]),65);
        tracep->fullWData(oldp+178,(vlTOPp->mul__DOT__acc_temp_3[3]),65);
        tracep->fullWData(oldp+181,(vlTOPp->mul__DOT__acc_temp_4[0]),65);
        tracep->fullWData(oldp+184,(vlTOPp->mul__DOT__acc_temp_4[1]),65);
        tracep->fullWData(oldp+187,(vlTOPp->mul__DOT__acc_temp_5),65);
        tracep->fullIData(oldp+190,(vlTOPp->mul__DOT__ready_temp),32);
        tracep->fullWData(oldp+191,(vlTOPp->mul__DOT____Vcellout__u_mult_step0__acc_o),65);
        tracep->fullBit(oldp+194,(vlTOPp->mul__DOT____Vcellout__u_mult_step0__ready_o));
        tracep->fullWData(oldp+195,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+198,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+199,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+202,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+203,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+206,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+207,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+210,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+211,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+214,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+215,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+218,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+219,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+222,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+223,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+226,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+227,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+230,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+231,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+234,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+235,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+238,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+239,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+242,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+243,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+246,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+247,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+250,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+251,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+254,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+255,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+258,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+259,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+262,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+263,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+266,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+267,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+270,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+271,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+274,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+275,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+278,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+279,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+282,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+283,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+286,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+287,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+290,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+291,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+294,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+295,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+298,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+299,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+302,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+303,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+306,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+307,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+310,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+311,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+314,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__ready_o));
        tracep->fullWData(oldp+315,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__acc_o),65);
        tracep->fullBit(oldp+318,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__ready_o));
        tracep->fullBit(oldp+319,(vlTOPp->clk_i));
        tracep->fullBit(oldp+320,(vlTOPp->rst_i));
        tracep->fullBit(oldp+321,(vlTOPp->req_i));
        tracep->fullIData(oldp+322,(vlTOPp->a_i),32);
        tracep->fullIData(oldp+323,(vlTOPp->b_i),32);
        tracep->fullBit(oldp+324,(vlTOPp->ready_o));
        tracep->fullQData(oldp+325,(vlTOPp->result_o),64);
        tracep->fullBit(oldp+327,(vlTOPp->overflow_o));
        tracep->fullBit(oldp+328,((1U & (~ (IData)(vlTOPp->req_i)))));
        tracep->fullBit(oldp+329,((1U & vlTOPp->b_i)));
        tracep->fullBit(oldp+330,((1U & (vlTOPp->b_i 
                                         >> 1U))));
        tracep->fullBit(oldp+331,((1U & (vlTOPp->b_i 
                                         >> 2U))));
        tracep->fullBit(oldp+332,((1U & (vlTOPp->b_i 
                                         >> 3U))));
        tracep->fullBit(oldp+333,((1U & (vlTOPp->b_i 
                                         >> 4U))));
        tracep->fullBit(oldp+334,((1U & (vlTOPp->b_i 
                                         >> 5U))));
        tracep->fullBit(oldp+335,((1U & (vlTOPp->b_i 
                                         >> 6U))));
        tracep->fullBit(oldp+336,((1U & (vlTOPp->b_i 
                                         >> 7U))));
        tracep->fullBit(oldp+337,((1U & (vlTOPp->b_i 
                                         >> 8U))));
        tracep->fullBit(oldp+338,((1U & (vlTOPp->b_i 
                                         >> 9U))));
        tracep->fullBit(oldp+339,((1U & (vlTOPp->b_i 
                                         >> 0xaU))));
        tracep->fullBit(oldp+340,((1U & (vlTOPp->b_i 
                                         >> 0xbU))));
        tracep->fullBit(oldp+341,((1U & (vlTOPp->b_i 
                                         >> 0xcU))));
        tracep->fullBit(oldp+342,((1U & (vlTOPp->b_i 
                                         >> 0xdU))));
        tracep->fullBit(oldp+343,((1U & (vlTOPp->b_i 
                                         >> 0xeU))));
        tracep->fullBit(oldp+344,((1U & (vlTOPp->b_i 
                                         >> 0xfU))));
        tracep->fullBit(oldp+345,((1U & (vlTOPp->b_i 
                                         >> 0x10U))));
        tracep->fullBit(oldp+346,((1U & (vlTOPp->b_i 
                                         >> 0x11U))));
        tracep->fullBit(oldp+347,((1U & (vlTOPp->b_i 
                                         >> 0x12U))));
        tracep->fullBit(oldp+348,((1U & (vlTOPp->b_i 
                                         >> 0x13U))));
        tracep->fullBit(oldp+349,((1U & (vlTOPp->b_i 
                                         >> 0x14U))));
        tracep->fullBit(oldp+350,((1U & (vlTOPp->b_i 
                                         >> 0x15U))));
        tracep->fullBit(oldp+351,((1U & (vlTOPp->b_i 
                                         >> 0x16U))));
        tracep->fullBit(oldp+352,((1U & (vlTOPp->b_i 
                                         >> 0x17U))));
        tracep->fullBit(oldp+353,((1U & (vlTOPp->b_i 
                                         >> 0x18U))));
        tracep->fullBit(oldp+354,((1U & (vlTOPp->b_i 
                                         >> 0x19U))));
        tracep->fullBit(oldp+355,((1U & (vlTOPp->b_i 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+356,((1U & (vlTOPp->b_i 
                                         >> 0x1bU))));
        tracep->fullBit(oldp+357,((1U & (vlTOPp->b_i 
                                         >> 0x1cU))));
        tracep->fullBit(oldp+358,((1U & (vlTOPp->b_i 
                                         >> 0x1dU))));
        tracep->fullBit(oldp+359,((1U & (vlTOPp->b_i 
                                         >> 0x1eU))));
        tracep->fullBit(oldp+360,((1U & (vlTOPp->b_i 
                                         >> 0x1fU))));
        tracep->fullIData(oldp+361,(0x20U),32);
        tracep->fullIData(oldp+362,(0U),32);
        tracep->fullIData(oldp+363,(1U),32);
        tracep->fullIData(oldp+364,(2U),32);
        tracep->fullIData(oldp+365,(3U),32);
        tracep->fullIData(oldp+366,(4U),32);
        tracep->fullIData(oldp+367,(5U),32);
        tracep->fullIData(oldp+368,(6U),32);
        tracep->fullIData(oldp+369,(7U),32);
        tracep->fullIData(oldp+370,(8U),32);
        tracep->fullIData(oldp+371,(9U),32);
        tracep->fullIData(oldp+372,(0xaU),32);
        tracep->fullIData(oldp+373,(0xbU),32);
        tracep->fullIData(oldp+374,(0xcU),32);
        tracep->fullIData(oldp+375,(0xdU),32);
        tracep->fullIData(oldp+376,(0xeU),32);
        tracep->fullIData(oldp+377,(0xfU),32);
        tracep->fullIData(oldp+378,(0x10U),32);
        tracep->fullIData(oldp+379,(0x11U),32);
        tracep->fullIData(oldp+380,(0x12U),32);
        tracep->fullIData(oldp+381,(0x13U),32);
        tracep->fullIData(oldp+382,(0x14U),32);
        tracep->fullIData(oldp+383,(0x15U),32);
        tracep->fullIData(oldp+384,(0x16U),32);
        tracep->fullIData(oldp+385,(0x17U),32);
        tracep->fullIData(oldp+386,(0x18U),32);
        tracep->fullIData(oldp+387,(0x19U),32);
        tracep->fullIData(oldp+388,(0x1aU),32);
        tracep->fullIData(oldp+389,(0x1bU),32);
        tracep->fullIData(oldp+390,(0x1cU),32);
        tracep->fullIData(oldp+391,(0x1dU),32);
        tracep->fullIData(oldp+392,(0x1eU),32);
        tracep->fullIData(oldp+393,(0x1fU),32);
    }
}
