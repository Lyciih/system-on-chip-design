// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


//======================

void Vtest_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtest_top::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtest_top::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtest_top::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtest_top::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+308,"rst_i", false,-1);
        tracep->declBit(c+309,"clk_i", false,-1);
        tracep->declBit(c+310,"halt_o", false,-1);
        tracep->declBit(c+308,"test_top rst_i", false,-1);
        tracep->declBit(c+309,"test_top clk_i", false,-1);
        tracep->declBit(c+10,"test_top halt_o", false,-1);
        tracep->declBus(c+380,"test_top NrDevices", false,-1, 31,0);
        tracep->declBus(c+381,"test_top NrHosts", false,-1, 31,0);
        tracep->declBus(c+382,"test_top MemSize", false,-1, 31,0);
        tracep->declBus(c+383,"test_top MemAddrWidth", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+103+i*1,"test_top host_req", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+104+i*1,"test_top host_gnt", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+105+i*1,"test_top host_addr", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+106+i*1,"test_top host_we", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+107+i*1,"test_top host_wdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+108+i*1,"test_top host_rdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBit(c+109+i*1,"test_top device_req", true,(i+0));}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+111+i*1,"test_top device_addr", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBit(c+113+i*1,"test_top device_we", true,(i+0));}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+115+i*1,"test_top device_wdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+117+i*1,"test_top device_rdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1+i*1,"test_top cfg_device_addr_base", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+3+i*1,"test_top cfg_device_addr_mask", true,(i+0), 31,0);}}
        tracep->declBit(c+10,"test_top halt_from_console", false,-1);
        tracep->declBus(c+11,"test_top core_ram_pc", false,-1, 31,0);
        tracep->declBit(c+12,"test_top core_ram_ce", false,-1);
        tracep->declBus(c+311,"test_top ram_core_inst", false,-1, 31,0);
        tracep->declBus(c+384,"test_top u_bus NrDevices", false,-1, 31,0);
        tracep->declBus(c+385,"test_top u_bus NrHosts", false,-1, 31,0);
        tracep->declBus(c+386,"test_top u_bus DataWidth", false,-1, 31,0);
        tracep->declBus(c+386,"test_top u_bus AddressWidth", false,-1, 31,0);
        tracep->declBit(c+309,"test_top u_bus clk_i", false,-1);
        tracep->declBit(c+308,"test_top u_bus rst_i", false,-1);
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+119+i*1,"test_top u_bus host_req_i", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+120+i*1,"test_top u_bus host_gnt_o", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+121+i*1,"test_top u_bus host_addr_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+122+i*1,"test_top u_bus host_we_i", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+123+i*1,"test_top u_bus host_wdata_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+124+i*1,"test_top u_bus host_rdata_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBit(c+125+i*1,"test_top u_bus device_req_o", true,(i+0));}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+127+i*1,"test_top u_bus device_addr_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBit(c+129+i*1,"test_top u_bus device_we_o", true,(i+0));}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+131+i*1,"test_top u_bus device_wdata_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+133+i*1,"test_top u_bus device_rdata_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+5+i*1,"test_top u_bus cfg_device_addr_base", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+7+i*1,"test_top u_bus cfg_device_addr_mask", true,(i+0), 31,0);}}
        tracep->declBus(c+385,"test_top u_bus NumBitsHostSel", false,-1, 31,0);
        tracep->declBus(c+385,"test_top u_bus NumBitsDeviceSel", false,-1, 31,0);
        tracep->declBus(c+135,"test_top u_bus host_sel_req", false,-1, 0,0);
        tracep->declBus(c+136,"test_top u_bus device_sel_req", false,-1, 0,0);
        tracep->declBus(c+13,"test_top u_bus host_sel_resp", false,-1, 0,0);
        tracep->declBus(c+14,"test_top u_bus device_sel_resp", false,-1, 0,0);
        tracep->declBus(c+387,"test_top u_bus unnamedblk1 host", false,-1, 31,0);
        tracep->declBus(c+388,"test_top u_bus unnamedblk2 device", false,-1, 31,0);
        tracep->declBus(c+388,"test_top u_bus unnamedblk3 device", false,-1, 31,0);
        tracep->declBus(c+389,"test_top u_bus unnamedblk4 host", false,-1, 31,0);
        tracep->declBit(c+390,"test_top console0 FlushOnChar", false,-1);
        tracep->declBit(c+309,"test_top console0 clk_i", false,-1);
        tracep->declBit(c+308,"test_top console0 rst_i", false,-1);
        tracep->declBit(c+137,"test_top console0 req_i", false,-1);
        tracep->declBit(c+138,"test_top console0 we_i", false,-1);
        tracep->declBus(c+139,"test_top console0 addr_i", false,-1, 31,0);
        tracep->declBus(c+140,"test_top console0 wdata_i", false,-1, 31,0);
        tracep->declBit(c+10,"test_top console0 halt_o", false,-1);
        tracep->declBus(c+391,"test_top console0 CHAR_OUT_ADDR", false,-1, 7,0);
        tracep->declBus(c+392,"test_top console0 SIM_CTRL_ADDR", false,-1, 7,0);
        tracep->declBus(c+141,"test_top console0 ctrl_addr", false,-1, 7,0);
        tracep->declBus(c+15,"test_top console0 sim_finish", false,-1, 2,0);
        tracep->declBus(c+16,"test_top console0 log_fd", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 rst_i", false,-1);
        tracep->declBit(c+309,"test_top core_top0 clk_i", false,-1);
        tracep->declBit(c+142,"test_top core_top0 ram_we_o", false,-1);
        tracep->declBit(c+312,"test_top core_top0 ram_request_o", false,-1);
        tracep->declBus(c+143,"test_top core_top0 ram_addr_o", false,-1, 31,0);
        tracep->declBus(c+144,"test_top core_top0 ram_wdata_o", false,-1, 31,0);
        tracep->declBus(c+145,"test_top core_top0 ram_rdata_i", false,-1, 31,0);
        tracep->declBus(c+11,"test_top core_top0 pc_wire_o", false,-1, 31,0);
        tracep->declBit(c+12,"test_top core_top0 ce_wire_o", false,-1);
        tracep->declBus(c+311,"test_top core_top0 if_inst_i", false,-1, 31,0);
        tracep->declBus(c+11,"test_top core_top0 pc_wire", false,-1, 31,0);
        tracep->declBit(c+12,"test_top core_top0 ce_wire", false,-1);
        tracep->declBus(c+146,"test_top core_top0 ctrl_stall_o", false,-1, 5,0);
        tracep->declBit(c+147,"test_top core_top0 ctrl_flush_jump_o", false,-1);
        tracep->declBus(c+148,"test_top core_top0 ctrl_new_pc_o", false,-1, 31,0);
        tracep->declBus(c+11,"test_top core_top0 if_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+17,"test_top core_top0 if_id_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+18,"test_top core_top0 if_id_inst_o", false,-1, 31,0);
        tracep->declBus(c+149,"test_top core_top0 id_inst_o", false,-1, 31,0);
        tracep->declBus(c+150,"test_top core_top0 id_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+313,"test_top core_top0 id_op1_o", false,-1, 31,0);
        tracep->declBus(c+314,"test_top core_top0 id_op2_o", false,-1, 31,0);
        tracep->declBit(c+151,"test_top core_top0 id_reg_we_o", false,-1);
        tracep->declBus(c+152,"test_top core_top0 id_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+153,"test_top core_top0 id_reg1_addr_o", false,-1, 4,0);
        tracep->declBus(c+154,"test_top core_top0 id_reg2_addr_o", false,-1, 4,0);
        tracep->declBit(c+155,"test_top core_top0 id_reg1_re_o", false,-1);
        tracep->declBit(c+156,"test_top core_top0 id_reg2_re_o", false,-1);
        tracep->declBit(c+19,"test_top core_top0 id_pipe_ctrl_stallreq_o", false,-1);
        tracep->declBus(c+157,"test_top core_top0 reg1_data_o", false,-1, 31,0);
        tracep->declBus(c+158,"test_top core_top0 reg2_data_o", false,-1, 31,0);
        tracep->declBus(c+20,"test_top core_top0 id_exe_op1_o", false,-1, 31,0);
        tracep->declBus(c+21,"test_top core_top0 id_exe_op2_o", false,-1, 31,0);
        tracep->declBit(c+22,"test_top core_top0 id_exe_reg_we_o", false,-1);
        tracep->declBus(c+23,"test_top core_top0 id_exe_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+24,"test_top core_top0 id_exe_inst_o", false,-1, 31,0);
        tracep->declBus(c+25,"test_top core_top0 id_exe_inst_addr_o", false,-1, 31,0);
        tracep->declBit(c+26,"test_top core_top0 id_exe_id_inst_is_load_o", false,-1);
        tracep->declBus(c+27,"test_top core_top0 id_exe_id_rd_o", false,-1, 4,0);
        tracep->declBus(c+159,"test_top core_top0 exe_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+160,"test_top core_top0 exe_reg_we_o", false,-1);
        tracep->declBus(c+161,"test_top core_top0 exe_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+162,"test_top core_top0 exe_mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+163,"test_top core_top0 exe_mem_data_o", false,-1, 31,0);
        tracep->declBit(c+164,"test_top core_top0 exe_mem_we_o", false,-1);
        tracep->declBus(c+165,"test_top core_top0 exe_mem_op_o", false,-1, 3,0);
        tracep->declBit(c+166,"test_top core_top0 exe_pipe_ctrl_stallreq_o", false,-1);
        tracep->declBit(c+147,"test_top core_top0 exe_pipe_ctrl_jump_enable_o", false,-1);
        tracep->declBus(c+148,"test_top core_top0 exe_pipe_ctrl_jump_addr_o", false,-1, 31,0);
        tracep->declBus(c+28,"test_top core_top0 exe_mem_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+29,"test_top core_top0 exe_mem_reg_we_o", false,-1);
        tracep->declBus(c+30,"test_top core_top0 exe_mem_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+31,"test_top core_top0 exe_mem_mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+32,"test_top core_top0 exe_mem_mem_data_o", false,-1, 31,0);
        tracep->declBit(c+33,"test_top core_top0 exe_mem_mem_we_o", false,-1);
        tracep->declBus(c+34,"test_top core_top0 exe_mem_mem_op_o", false,-1, 3,0);
        tracep->declBus(c+167,"test_top core_top0 mem_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+168,"test_top core_top0 mem_reg_we_o", false,-1);
        tracep->declBus(c+169,"test_top core_top0 mem_reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+393,"test_top core_top0 mem_halt_o", false,-1);
        tracep->declBus(c+35,"test_top core_top0 mem_wb_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+36,"test_top core_top0 mem_wb_reg_we_o", false,-1);
        tracep->declBus(c+37,"test_top core_top0 mem_wb_reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 ctrl0 rst_i", false,-1);
        tracep->declBit(c+19,"test_top core_top0 ctrl0 stallreq_from_id_i", false,-1);
        tracep->declBit(c+166,"test_top core_top0 ctrl0 stallreq_from_exe_i", false,-1);
        tracep->declBit(c+147,"test_top core_top0 ctrl0 jump_enable_i", false,-1);
        tracep->declBus(c+148,"test_top core_top0 ctrl0 jump_addr_i", false,-1, 31,0);
        tracep->declBus(c+146,"test_top core_top0 ctrl0 stall_o", false,-1, 5,0);
        tracep->declBit(c+147,"test_top core_top0 ctrl0 flush_jump_o", false,-1);
        tracep->declBus(c+148,"test_top core_top0 ctrl0 new_pc_o", false,-1, 31,0);
        tracep->declBit(c+309,"test_top core_top0 pc_reg0 clk_i", false,-1);
        tracep->declBit(c+308,"test_top core_top0 pc_reg0 rst_i", false,-1);
        tracep->declBus(c+146,"test_top core_top0 pc_reg0 stall_i", false,-1, 5,0);
        tracep->declBit(c+147,"test_top core_top0 pc_reg0 flush_jump_i", false,-1);
        tracep->declBus(c+148,"test_top core_top0 pc_reg0 new_pc_i", false,-1, 31,0);
        tracep->declBus(c+11,"test_top core_top0 pc_reg0 pc_o", false,-1, 31,0);
        tracep->declBit(c+12,"test_top core_top0 pc_reg0 ce_o", false,-1);
        tracep->declBit(c+309,"test_top core_top0 if_id0 clk_i", false,-1);
        tracep->declBit(c+308,"test_top core_top0 if_id0 rst_i", false,-1);
        tracep->declBus(c+146,"test_top core_top0 if_id0 stall_i", false,-1, 5,0);
        tracep->declBit(c+147,"test_top core_top0 if_id0 flush_jump_i", false,-1);
        tracep->declBus(c+11,"test_top core_top0 if_id0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+311,"test_top core_top0 if_id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+17,"test_top core_top0 if_id0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+18,"test_top core_top0 if_id0 inst_o", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 id0 rst_i", false,-1);
        tracep->declBus(c+17,"test_top core_top0 id0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+18,"test_top core_top0 id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+157,"test_top core_top0 id0 reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+158,"test_top core_top0 id0 reg2_rdata_i", false,-1, 31,0);
        tracep->declBit(c+26,"test_top core_top0 id0 pre_inst_is_load_i", false,-1);
        tracep->declBus(c+27,"test_top core_top0 id0 exe_rd_i", false,-1, 4,0);
        tracep->declBus(c+159,"test_top core_top0 id0 exe_reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+160,"test_top core_top0 id0 exe_reg_we_i", false,-1);
        tracep->declBus(c+161,"test_top core_top0 id0 exe_reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+167,"test_top core_top0 id0 mem_reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+168,"test_top core_top0 id0 mem_reg_we_i", false,-1);
        tracep->declBus(c+169,"test_top core_top0 id0 mem_reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+153,"test_top core_top0 id0 reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+154,"test_top core_top0 id0 reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+155,"test_top core_top0 id0 reg1_re_o", false,-1);
        tracep->declBit(c+156,"test_top core_top0 id0 reg2_re_o", false,-1);
        tracep->declBus(c+149,"test_top core_top0 id0 inst_o", false,-1, 31,0);
        tracep->declBus(c+150,"test_top core_top0 id0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+313,"test_top core_top0 id0 op1_o", false,-1, 31,0);
        tracep->declBus(c+314,"test_top core_top0 id0 op2_o", false,-1, 31,0);
        tracep->declBit(c+151,"test_top core_top0 id0 reg_we_o", false,-1);
        tracep->declBus(c+152,"test_top core_top0 id0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+19,"test_top core_top0 id0 stallreq_o", false,-1);
        tracep->declBus(c+170,"test_top core_top0 id0 op1_o_final", false,-1, 31,0);
        tracep->declBus(c+171,"test_top core_top0 id0 op2_o_final", false,-1, 31,0);
        tracep->declBus(c+38,"test_top core_top0 id0 opcode", false,-1, 6,0);
        tracep->declBus(c+39,"test_top core_top0 id0 rd", false,-1, 4,0);
        tracep->declBus(c+40,"test_top core_top0 id0 rs1", false,-1, 4,0);
        tracep->declBus(c+41,"test_top core_top0 id0 rs2", false,-1, 4,0);
        tracep->declBus(c+40,"test_top core_top0 id0 i_reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+394,"test_top core_top0 id0 i_reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+395,"test_top core_top0 id0 i_reg1_re_o", false,-1);
        tracep->declBit(c+396,"test_top core_top0 id0 i_reg2_re_o", false,-1);
        tracep->declBus(c+157,"test_top core_top0 id0 i_op1_o", false,-1, 31,0);
        tracep->declBus(c+42,"test_top core_top0 id0 i_op2_o", false,-1, 31,0);
        tracep->declBit(c+395,"test_top core_top0 id0 i_reg_we_o", false,-1);
        tracep->declBus(c+43,"test_top core_top0 id0 i_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+40,"test_top core_top0 id0 r_reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+41,"test_top core_top0 id0 r_reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+395,"test_top core_top0 id0 r_reg1_re_o", false,-1);
        tracep->declBit(c+395,"test_top core_top0 id0 r_reg2_re_o", false,-1);
        tracep->declBus(c+157,"test_top core_top0 id0 r_op1_o", false,-1, 31,0);
        tracep->declBus(c+158,"test_top core_top0 id0 r_op2_o", false,-1, 31,0);
        tracep->declBit(c+395,"test_top core_top0 id0 r_reg_we_o", false,-1);
        tracep->declBus(c+43,"test_top core_top0 id0 r_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+19,"test_top core_top0 id0 is_load_hazard", false,-1);
        tracep->declBus(c+18,"test_top core_top0 id0 inst_type_i inst_i", false,-1, 31,0);
        tracep->declBus(c+157,"test_top core_top0 id0 inst_type_i reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+158,"test_top core_top0 id0 inst_type_i reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+40,"test_top core_top0 id0 inst_type_i reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+394,"test_top core_top0 id0 inst_type_i reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+395,"test_top core_top0 id0 inst_type_i reg1_re_o", false,-1);
        tracep->declBit(c+396,"test_top core_top0 id0 inst_type_i reg2_re_o", false,-1);
        tracep->declBus(c+157,"test_top core_top0 id0 inst_type_i op1_o", false,-1, 31,0);
        tracep->declBus(c+42,"test_top core_top0 id0 inst_type_i op2_o", false,-1, 31,0);
        tracep->declBit(c+395,"test_top core_top0 id0 inst_type_i reg_we_o", false,-1);
        tracep->declBus(c+43,"test_top core_top0 id0 inst_type_i reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+39,"test_top core_top0 id0 inst_type_i rd", false,-1, 4,0);
        tracep->declBus(c+44,"test_top core_top0 id0 inst_type_i funct3", false,-1, 2,0);
        tracep->declBus(c+40,"test_top core_top0 id0 inst_type_i rs1", false,-1, 4,0);
        tracep->declBus(c+18,"test_top core_top0 id0 inst_type_r inst_i", false,-1, 31,0);
        tracep->declBus(c+157,"test_top core_top0 id0 inst_type_r reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+158,"test_top core_top0 id0 inst_type_r reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+40,"test_top core_top0 id0 inst_type_r reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+41,"test_top core_top0 id0 inst_type_r reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+395,"test_top core_top0 id0 inst_type_r reg1_re_o", false,-1);
        tracep->declBit(c+395,"test_top core_top0 id0 inst_type_r reg2_re_o", false,-1);
        tracep->declBus(c+157,"test_top core_top0 id0 inst_type_r op1_o", false,-1, 31,0);
        tracep->declBus(c+158,"test_top core_top0 id0 inst_type_r op2_o", false,-1, 31,0);
        tracep->declBit(c+395,"test_top core_top0 id0 inst_type_r reg_we_o", false,-1);
        tracep->declBus(c+43,"test_top core_top0 id0 inst_type_r reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+39,"test_top core_top0 id0 inst_type_r rd", false,-1, 4,0);
        tracep->declBus(c+44,"test_top core_top0 id0 inst_type_r funct3", false,-1, 2,0);
        tracep->declBus(c+40,"test_top core_top0 id0 inst_type_r rs1", false,-1, 4,0);
        tracep->declBus(c+41,"test_top core_top0 id0 inst_type_r rs2", false,-1, 4,0);
        tracep->declBit(c+308,"test_top core_top0 id_exe0 rst_i", false,-1);
        tracep->declBit(c+309,"test_top core_top0 id_exe0 clk_i", false,-1);
        tracep->declBus(c+146,"test_top core_top0 id_exe0 stall_i", false,-1, 5,0);
        tracep->declBit(c+147,"test_top core_top0 id_exe0 flush_jump_i", false,-1);
        tracep->declBus(c+313,"test_top core_top0 id_exe0 op1_i", false,-1, 31,0);
        tracep->declBus(c+314,"test_top core_top0 id_exe0 op2_i", false,-1, 31,0);
        tracep->declBit(c+151,"test_top core_top0 id_exe0 reg_we_i", false,-1);
        tracep->declBus(c+152,"test_top core_top0 id_exe0 reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+149,"test_top core_top0 id_exe0 inst_i", false,-1, 31,0);
        tracep->declBus(c+150,"test_top core_top0 id_exe0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+20,"test_top core_top0 id_exe0 op1_o", false,-1, 31,0);
        tracep->declBus(c+21,"test_top core_top0 id_exe0 op2_o", false,-1, 31,0);
        tracep->declBit(c+22,"test_top core_top0 id_exe0 reg_we_o", false,-1);
        tracep->declBus(c+23,"test_top core_top0 id_exe0 reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+24,"test_top core_top0 id_exe0 inst_o", false,-1, 31,0);
        tracep->declBus(c+25,"test_top core_top0 id_exe0 inst_addr_o", false,-1, 31,0);
        tracep->declBit(c+26,"test_top core_top0 id_exe0 inst_is_load_o", false,-1);
        tracep->declBus(c+27,"test_top core_top0 id_exe0 rd_o", false,-1, 4,0);
        tracep->declBus(c+172,"test_top core_top0 id_exe0 opcode", false,-1, 6,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 rst_i", false,-1);
        tracep->declBit(c+309,"test_top core_top0 exe0 clk_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 op1_i", false,-1, 31,0);
        tracep->declBus(c+21,"test_top core_top0 exe0 op2_i", false,-1, 31,0);
        tracep->declBit(c+22,"test_top core_top0 exe0 reg_we_i", false,-1);
        tracep->declBus(c+23,"test_top core_top0 exe0 reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+24,"test_top core_top0 exe0 inst_i", false,-1, 31,0);
        tracep->declBus(c+25,"test_top core_top0 exe0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+159,"test_top core_top0 exe0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+160,"test_top core_top0 exe0 reg_we_o", false,-1);
        tracep->declBus(c+161,"test_top core_top0 exe0 reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+162,"test_top core_top0 exe0 mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+163,"test_top core_top0 exe0 mem_data_o", false,-1, 31,0);
        tracep->declBit(c+164,"test_top core_top0 exe0 mem_we_o", false,-1);
        tracep->declBus(c+165,"test_top core_top0 exe0 mem_op_o", false,-1, 3,0);
        tracep->declBit(c+166,"test_top core_top0 exe0 stallreq_o", false,-1);
        tracep->declBit(c+147,"test_top core_top0 exe0 jump_enable_o", false,-1);
        tracep->declBus(c+148,"test_top core_top0 exe0 jump_addr_o", false,-1, 31,0);
        tracep->declBus(c+45,"test_top core_top0 exe0 opcode", false,-1, 6,0);
        tracep->declBus(c+46,"test_top core_top0 exe0 funct3", false,-1, 2,0);
        tracep->declBus(c+47,"test_top core_top0 exe0 funct7", false,-1, 6,0);
        tracep->declBus(c+48,"test_top core_top0 exe0 shamt", false,-1, 4,0);
        tracep->declBit(c+49,"test_top core_top0 exe0 direct", false,-1);
        tracep->declBit(c+50,"test_top core_top0 exe0 arithmetic", false,-1);
        tracep->declBus(c+315,"test_top core_top0 exe0 shift_result_type_i", false,-1, 31,0);
        tracep->declBus(c+316,"test_top core_top0 exe0 shift_result_type_r", false,-1, 31,0);
        tracep->declBus(c+51,"test_top core_top0 exe0 b_type_offset", false,-1, 31,0);
        tracep->declBus(c+52,"test_top core_top0 exe0 jal_type_offset", false,-1, 31,0);
        tracep->declBus(c+53,"test_top core_top0 exe0 store_addr_offset", false,-1, 31,0);
        tracep->declBus(c+54,"test_top core_top0 exe0 load_addr_offset", false,-1, 31,0);
        tracep->declBus(c+173,"test_top core_top0 exe0 compare_sub_type_i", false,-1, 31,0);
        tracep->declBus(c+397,"test_top core_top0 exe0 compare_sub_type_r", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 r_type_add_or_sub", false,-1);
        tracep->declBit(c+49,"test_top core_top0 exe0 r_type_sl_or_sr", false,-1);
        tracep->declBit(c+50,"test_top core_top0 exe0 r_type_arithmetic", false,-1);
        tracep->declBit(c+55,"test_top core_top0 exe0 r_or_m_type", false,-1);
        tracep->declBus(c+398,"test_top core_top0 exe0 m_d_op", false,-1, 1,0);
        tracep->declBit(c+399,"test_top core_top0 exe0 rs1_signed_i", false,-1);
        tracep->declBit(c+400,"test_top core_top0 exe0 rs2_signed_i", false,-1);
        tracep->declBus(c+56,"test_top core_top0 exe0 m_d_high_result", false,-1, 31,0);
        tracep->declBus(c+57,"test_top core_top0 exe0 m_d_low_result", false,-1, 31,0);
        tracep->declBit(c+58,"test_top core_top0 exe0 m_d_ready", false,-1);
        tracep->declBus(c+59,"test_top core_top0 exe0 m_d_count", false,-1, 5,0);
        tracep->declBit(c+309,"test_top core_top0 exe0 m_d clk_i", false,-1);
        tracep->declBit(c+55,"test_top core_top0 exe0 m_d mul_div_req_i", false,-1);
        tracep->declBus(c+46,"test_top core_top0 exe0 m_d m_d_op", false,-1, 2,0);
        tracep->declBus(c+45,"test_top core_top0 exe0 m_d op", false,-1, 6,0);
        tracep->declBus(c+20,"test_top core_top0 exe0 m_d rs1", false,-1, 31,0);
        tracep->declBit(c+399,"test_top core_top0 exe0 m_d rs1_signed", false,-1);
        tracep->declBus(c+21,"test_top core_top0 exe0 m_d rs2", false,-1, 31,0);
        tracep->declBit(c+400,"test_top core_top0 exe0 m_d rs2_signed", false,-1);
        tracep->declBus(c+56,"test_top core_top0 exe0 m_d high", false,-1, 31,0);
        tracep->declBus(c+57,"test_top core_top0 exe0 m_d low", false,-1, 31,0);
        tracep->declBit(c+58,"test_top core_top0 exe0 m_d ready", false,-1);
        tracep->declBus(c+59,"test_top core_top0 exe0 m_d count", false,-1, 5,0);
        tracep->declArray(c+60,"test_top core_top0 exe0 m_d long_temp", false,-1, 64,0);
        tracep->declBus(c+63,"test_top core_top0 exe0 m_d rs1_temp", false,-1, 31,0);
        tracep->declBus(c+64,"test_top core_top0 exe0 m_d rs2_temp", false,-1, 31,0);
        tracep->declBit(c+65,"test_top core_top0 exe0 m_d rs1_is_neg", false,-1);
        tracep->declBit(c+66,"test_top core_top0 exe0 m_d rs2_is_neg", false,-1);
        tracep->declBit(c+67,"test_top core_top0 exe0 m_d m_or_d", false,-1);
        tracep->declBit(c+308,"test_top core_top0 exe_mem0 rst_i", false,-1);
        tracep->declBit(c+309,"test_top core_top0 exe_mem0 clk_i", false,-1);
        tracep->declBus(c+146,"test_top core_top0 exe_mem0 stall_i", false,-1, 5,0);
        tracep->declBus(c+159,"test_top core_top0 exe_mem0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+160,"test_top core_top0 exe_mem0 reg_we_i", false,-1);
        tracep->declBus(c+161,"test_top core_top0 exe_mem0 reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+162,"test_top core_top0 exe_mem0 mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+163,"test_top core_top0 exe_mem0 mem_data_i", false,-1, 31,0);
        tracep->declBit(c+164,"test_top core_top0 exe_mem0 mem_we_i", false,-1);
        tracep->declBus(c+165,"test_top core_top0 exe_mem0 mem_op_i", false,-1, 3,0);
        tracep->declBus(c+28,"test_top core_top0 exe_mem0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+29,"test_top core_top0 exe_mem0 reg_we_o", false,-1);
        tracep->declBus(c+30,"test_top core_top0 exe_mem0 reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+31,"test_top core_top0 exe_mem0 mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+32,"test_top core_top0 exe_mem0 mem_data_o", false,-1, 31,0);
        tracep->declBit(c+33,"test_top core_top0 exe_mem0 mem_we_o", false,-1);
        tracep->declBus(c+34,"test_top core_top0 exe_mem0 mem_op_o", false,-1, 3,0);
        tracep->declBit(c+308,"test_top core_top0 mem0 rst_i", false,-1);
        tracep->declBit(c+309,"test_top core_top0 mem0 clk_i", false,-1);
        tracep->declBus(c+28,"test_top core_top0 mem0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+29,"test_top core_top0 mem0 reg_we_i", false,-1);
        tracep->declBus(c+30,"test_top core_top0 mem0 reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+31,"test_top core_top0 mem0 mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+32,"test_top core_top0 mem0 mem_data_i", false,-1, 31,0);
        tracep->declBit(c+33,"test_top core_top0 mem0 mem_we_i", false,-1);
        tracep->declBus(c+34,"test_top core_top0 mem0 mem_op_i", false,-1, 3,0);
        tracep->declBus(c+145,"test_top core_top0 mem0 ram_data_i", false,-1, 31,0);
        tracep->declBus(c+143,"test_top core_top0 mem0 ram_addr_o", false,-1, 31,0);
        tracep->declBus(c+144,"test_top core_top0 mem0 ram_data_o", false,-1, 31,0);
        tracep->declBit(c+142,"test_top core_top0 mem0 ram_w_request_o", false,-1);
        tracep->declBit(c+312,"test_top core_top0 mem0 ram_request_o", false,-1);
        tracep->declBus(c+167,"test_top core_top0 mem0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+168,"test_top core_top0 mem0 reg_we_o", false,-1);
        tracep->declBus(c+169,"test_top core_top0 mem0 reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+68,"test_top core_top0 mem0 ram_addr_offset", false,-1, 1,0);
        tracep->declBit(c+308,"test_top core_top0 mem_wb0 rst_i", false,-1);
        tracep->declBit(c+309,"test_top core_top0 mem_wb0 clk_i", false,-1);
        tracep->declBus(c+146,"test_top core_top0 mem_wb0 stall_i", false,-1, 5,0);
        tracep->declBus(c+167,"test_top core_top0 mem_wb0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+168,"test_top core_top0 mem_wb0 reg_we_i", false,-1);
        tracep->declBus(c+169,"test_top core_top0 mem_wb0 reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+35,"test_top core_top0 mem_wb0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+36,"test_top core_top0 mem_wb0 reg_we_o", false,-1);
        tracep->declBus(c+37,"test_top core_top0 mem_wb0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+309,"test_top dpram0 clk_i", false,-1);
        tracep->declBit(c+308,"test_top dpram0 rst_i", false,-1);
        tracep->declBit(c+174,"test_top dpram0 we_i", false,-1);
        tracep->declBit(c+175,"test_top dpram0 request_i", false,-1);
        tracep->declBus(c+176,"test_top dpram0 addr_i", false,-1, 31,0);
        tracep->declBus(c+177,"test_top dpram0 data_i", false,-1, 31,0);
        tracep->declBus(c+178,"test_top dpram0 data_o", false,-1, 31,0);
        tracep->declBit(c+12,"test_top dpram0 inst_ce_i", false,-1);
        tracep->declBus(c+11,"test_top dpram0 pc_i", false,-1, 31,0);
        tracep->declBus(c+311,"test_top dpram0 inst_o", false,-1, 31,0);
        tracep->declBus(c+179,"test_top dpram0 addr4", false,-1, 21,0);
        tracep->declBus(c+69,"test_top dpram0 rom_addr4", false,-1, 21,0);
        tracep->declBit(c+309,"test_top core_top0 regfile0 clk_i", false,-1);
        tracep->declBit(c+308,"test_top core_top0 regfile0 rst_i", false,-1);
        tracep->declBit(c+36,"test_top core_top0 regfile0 we_i", false,-1);
        tracep->declBus(c+35,"test_top core_top0 regfile0 waddr_i", false,-1, 4,0);
        tracep->declBus(c+37,"test_top core_top0 regfile0 wdata_i", false,-1, 31,0);
        tracep->declBit(c+155,"test_top core_top0 regfile0 re1_i", false,-1);
        tracep->declBus(c+153,"test_top core_top0 regfile0 raddr1_i", false,-1, 4,0);
        tracep->declBit(c+156,"test_top core_top0 regfile0 re2_i", false,-1);
        tracep->declBus(c+154,"test_top core_top0 regfile0 raddr2_i", false,-1, 4,0);
        tracep->declBus(c+157,"test_top core_top0 regfile0 rdata1_o", false,-1, 31,0);
        tracep->declBus(c+158,"test_top core_top0 regfile0 rdata2_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+70+i*1,"test_top core_top0 regfile0 regs", true,(i+0), 31,0);}}
        tracep->declBus(c+9,"test_top core_top0 regfile0 i", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type XLEN", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type value_i", false,-1, 31,0);
        tracep->declBus(c+48,"test_top core_top0 exe0 shift_i_type shamt_i", false,-1, 4,0);
        tracep->declBit(c+49,"test_top core_top0 exe0 shift_i_type direct_i", false,-1);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type arithmetic_i", false,-1);
        tracep->declBus(c+315,"test_top core_top0 exe0 shift_i_type value_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+180+i*1,"test_top core_top0 exe0 shift_i_type shift_l_temp", true,(i+0), 31,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+212+i*1,"test_top core_top0 exe0 shift_i_type shift_r_temp", true,(i+0), 31,0);}}
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type shift_l_cell_0 XLEN", false,-1, 31,0);
        tracep->declBus(c+401,"test_top core_top0 exe0 shift_i_type shift_l_cell_0 DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type shift_l_cell_0 rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type shift_l_cell_0 value_i", false,-1, 31,0);
        tracep->declBus(c+317,"test_top core_top0 exe0 shift_i_type shift_l_cell_0 value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type shift_r_cell_0 XLEN", false,-1, 31,0);
        tracep->declBus(c+401,"test_top core_top0 exe0 shift_i_type shift_r_cell_0 DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type shift_r_cell_0 rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type shift_r_cell_0 value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type shift_r_cell_0 arithmetic_i", false,-1);
        tracep->declBus(c+317,"test_top core_top0 exe0 shift_i_type shift_r_cell_0 value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[1] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+402,"test_top core_top0 exe0 shift_i_type genblk1[1] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[1] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[1] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+318,"test_top core_top0 exe0 shift_i_type genblk1[1] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[2] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+403,"test_top core_top0 exe0 shift_i_type genblk1[2] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[2] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[2] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+319,"test_top core_top0 exe0 shift_i_type genblk1[2] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[3] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+404,"test_top core_top0 exe0 shift_i_type genblk1[3] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[3] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[3] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+320,"test_top core_top0 exe0 shift_i_type genblk1[3] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[4] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+405,"test_top core_top0 exe0 shift_i_type genblk1[4] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[4] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[4] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+321,"test_top core_top0 exe0 shift_i_type genblk1[4] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[5] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+406,"test_top core_top0 exe0 shift_i_type genblk1[5] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[5] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[5] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+322,"test_top core_top0 exe0 shift_i_type genblk1[5] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[6] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+407,"test_top core_top0 exe0 shift_i_type genblk1[6] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[6] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[6] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+323,"test_top core_top0 exe0 shift_i_type genblk1[6] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[7] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+408,"test_top core_top0 exe0 shift_i_type genblk1[7] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[7] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[7] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+324,"test_top core_top0 exe0 shift_i_type genblk1[7] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[8] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+409,"test_top core_top0 exe0 shift_i_type genblk1[8] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[8] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[8] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+325,"test_top core_top0 exe0 shift_i_type genblk1[8] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[9] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+410,"test_top core_top0 exe0 shift_i_type genblk1[9] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[9] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[9] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+326,"test_top core_top0 exe0 shift_i_type genblk1[9] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[10] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+411,"test_top core_top0 exe0 shift_i_type genblk1[10] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[10] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[10] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+327,"test_top core_top0 exe0 shift_i_type genblk1[10] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[11] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+412,"test_top core_top0 exe0 shift_i_type genblk1[11] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[11] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[11] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+328,"test_top core_top0 exe0 shift_i_type genblk1[11] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[12] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+413,"test_top core_top0 exe0 shift_i_type genblk1[12] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[12] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[12] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+329,"test_top core_top0 exe0 shift_i_type genblk1[12] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[13] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+414,"test_top core_top0 exe0 shift_i_type genblk1[13] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[13] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[13] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+330,"test_top core_top0 exe0 shift_i_type genblk1[13] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[14] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+415,"test_top core_top0 exe0 shift_i_type genblk1[14] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[14] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[14] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+331,"test_top core_top0 exe0 shift_i_type genblk1[14] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[15] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+416,"test_top core_top0 exe0 shift_i_type genblk1[15] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[15] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[15] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+332,"test_top core_top0 exe0 shift_i_type genblk1[15] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[16] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+417,"test_top core_top0 exe0 shift_i_type genblk1[16] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[16] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[16] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+333,"test_top core_top0 exe0 shift_i_type genblk1[16] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[17] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+418,"test_top core_top0 exe0 shift_i_type genblk1[17] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[17] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[17] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+334,"test_top core_top0 exe0 shift_i_type genblk1[17] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[18] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+419,"test_top core_top0 exe0 shift_i_type genblk1[18] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[18] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[18] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+335,"test_top core_top0 exe0 shift_i_type genblk1[18] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[19] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+420,"test_top core_top0 exe0 shift_i_type genblk1[19] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[19] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[19] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+336,"test_top core_top0 exe0 shift_i_type genblk1[19] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[20] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+421,"test_top core_top0 exe0 shift_i_type genblk1[20] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[20] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[20] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+337,"test_top core_top0 exe0 shift_i_type genblk1[20] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[21] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+422,"test_top core_top0 exe0 shift_i_type genblk1[21] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[21] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[21] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+338,"test_top core_top0 exe0 shift_i_type genblk1[21] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[22] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+423,"test_top core_top0 exe0 shift_i_type genblk1[22] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[22] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[22] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+339,"test_top core_top0 exe0 shift_i_type genblk1[22] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[23] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+424,"test_top core_top0 exe0 shift_i_type genblk1[23] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[23] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[23] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+340,"test_top core_top0 exe0 shift_i_type genblk1[23] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[24] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+425,"test_top core_top0 exe0 shift_i_type genblk1[24] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[24] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[24] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+341,"test_top core_top0 exe0 shift_i_type genblk1[24] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[25] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+426,"test_top core_top0 exe0 shift_i_type genblk1[25] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[25] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[25] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+342,"test_top core_top0 exe0 shift_i_type genblk1[25] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[26] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+427,"test_top core_top0 exe0 shift_i_type genblk1[26] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[26] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[26] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+343,"test_top core_top0 exe0 shift_i_type genblk1[26] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[27] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+428,"test_top core_top0 exe0 shift_i_type genblk1[27] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[27] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[27] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+344,"test_top core_top0 exe0 shift_i_type genblk1[27] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[28] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+429,"test_top core_top0 exe0 shift_i_type genblk1[28] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[28] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[28] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+345,"test_top core_top0 exe0 shift_i_type genblk1[28] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[29] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+430,"test_top core_top0 exe0 shift_i_type genblk1[29] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[29] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[29] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+346,"test_top core_top0 exe0 shift_i_type genblk1[29] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[30] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+431,"test_top core_top0 exe0 shift_i_type genblk1[30] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[30] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[30] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+347,"test_top core_top0 exe0 shift_i_type genblk1[30] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk1[31] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+432,"test_top core_top0 exe0 shift_i_type genblk1[31] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk1[31] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk1[31] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+348,"test_top core_top0 exe0 shift_i_type genblk1[31] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[1] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+402,"test_top core_top0 exe0 shift_i_type genblk2[1] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[1] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[1] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[1] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+349,"test_top core_top0 exe0 shift_i_type genblk2[1] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[2] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+403,"test_top core_top0 exe0 shift_i_type genblk2[2] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[2] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[2] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[2] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+350,"test_top core_top0 exe0 shift_i_type genblk2[2] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[3] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+404,"test_top core_top0 exe0 shift_i_type genblk2[3] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[3] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[3] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[3] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+351,"test_top core_top0 exe0 shift_i_type genblk2[3] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[4] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+405,"test_top core_top0 exe0 shift_i_type genblk2[4] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[4] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[4] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[4] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+352,"test_top core_top0 exe0 shift_i_type genblk2[4] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[5] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+406,"test_top core_top0 exe0 shift_i_type genblk2[5] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[5] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[5] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[5] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+353,"test_top core_top0 exe0 shift_i_type genblk2[5] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[6] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+407,"test_top core_top0 exe0 shift_i_type genblk2[6] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[6] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[6] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[6] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+354,"test_top core_top0 exe0 shift_i_type genblk2[6] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[7] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+408,"test_top core_top0 exe0 shift_i_type genblk2[7] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[7] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[7] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[7] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+355,"test_top core_top0 exe0 shift_i_type genblk2[7] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[8] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+409,"test_top core_top0 exe0 shift_i_type genblk2[8] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[8] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[8] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[8] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+356,"test_top core_top0 exe0 shift_i_type genblk2[8] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[9] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+410,"test_top core_top0 exe0 shift_i_type genblk2[9] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[9] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[9] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[9] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+357,"test_top core_top0 exe0 shift_i_type genblk2[9] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[10] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+411,"test_top core_top0 exe0 shift_i_type genblk2[10] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[10] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[10] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[10] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+358,"test_top core_top0 exe0 shift_i_type genblk2[10] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[11] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+412,"test_top core_top0 exe0 shift_i_type genblk2[11] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[11] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[11] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[11] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+359,"test_top core_top0 exe0 shift_i_type genblk2[11] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[12] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+413,"test_top core_top0 exe0 shift_i_type genblk2[12] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[12] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[12] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[12] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+360,"test_top core_top0 exe0 shift_i_type genblk2[12] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[13] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+414,"test_top core_top0 exe0 shift_i_type genblk2[13] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[13] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[13] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[13] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+361,"test_top core_top0 exe0 shift_i_type genblk2[13] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[14] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+415,"test_top core_top0 exe0 shift_i_type genblk2[14] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[14] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[14] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[14] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+362,"test_top core_top0 exe0 shift_i_type genblk2[14] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[15] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+416,"test_top core_top0 exe0 shift_i_type genblk2[15] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[15] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[15] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[15] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+363,"test_top core_top0 exe0 shift_i_type genblk2[15] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[16] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+417,"test_top core_top0 exe0 shift_i_type genblk2[16] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[16] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[16] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[16] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+364,"test_top core_top0 exe0 shift_i_type genblk2[16] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[17] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+418,"test_top core_top0 exe0 shift_i_type genblk2[17] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[17] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[17] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[17] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+365,"test_top core_top0 exe0 shift_i_type genblk2[17] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[18] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+419,"test_top core_top0 exe0 shift_i_type genblk2[18] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[18] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[18] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[18] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+366,"test_top core_top0 exe0 shift_i_type genblk2[18] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[19] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+420,"test_top core_top0 exe0 shift_i_type genblk2[19] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[19] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[19] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[19] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+367,"test_top core_top0 exe0 shift_i_type genblk2[19] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[20] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+421,"test_top core_top0 exe0 shift_i_type genblk2[20] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[20] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[20] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[20] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+368,"test_top core_top0 exe0 shift_i_type genblk2[20] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[21] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+422,"test_top core_top0 exe0 shift_i_type genblk2[21] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[21] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[21] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[21] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+369,"test_top core_top0 exe0 shift_i_type genblk2[21] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[22] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+423,"test_top core_top0 exe0 shift_i_type genblk2[22] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[22] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[22] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[22] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+370,"test_top core_top0 exe0 shift_i_type genblk2[22] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[23] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+424,"test_top core_top0 exe0 shift_i_type genblk2[23] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[23] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[23] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[23] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+371,"test_top core_top0 exe0 shift_i_type genblk2[23] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[24] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+425,"test_top core_top0 exe0 shift_i_type genblk2[24] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[24] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[24] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[24] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+372,"test_top core_top0 exe0 shift_i_type genblk2[24] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[25] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+426,"test_top core_top0 exe0 shift_i_type genblk2[25] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[25] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[25] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[25] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+373,"test_top core_top0 exe0 shift_i_type genblk2[25] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[26] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+427,"test_top core_top0 exe0 shift_i_type genblk2[26] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[26] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[26] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[26] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+374,"test_top core_top0 exe0 shift_i_type genblk2[26] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[27] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+428,"test_top core_top0 exe0 shift_i_type genblk2[27] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[27] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[27] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[27] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+375,"test_top core_top0 exe0 shift_i_type genblk2[27] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[28] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+429,"test_top core_top0 exe0 shift_i_type genblk2[28] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[28] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[28] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[28] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+376,"test_top core_top0 exe0 shift_i_type genblk2[28] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[29] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+430,"test_top core_top0 exe0 shift_i_type genblk2[29] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[29] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[29] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[29] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+377,"test_top core_top0 exe0 shift_i_type genblk2[29] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[30] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+431,"test_top core_top0 exe0 shift_i_type genblk2[30] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[30] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[30] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[30] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+378,"test_top core_top0 exe0 shift_i_type genblk2[30] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_i_type genblk2[31] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+432,"test_top core_top0 exe0 shift_i_type genblk2[31] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_i_type genblk2[31] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_i_type genblk2[31] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_i_type genblk2[31] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+379,"test_top core_top0 exe0 shift_i_type genblk2[31] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type XLEN", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type value_i", false,-1, 31,0);
        tracep->declBus(c+102,"test_top core_top0 exe0 shift_r_type shamt_i", false,-1, 4,0);
        tracep->declBit(c+49,"test_top core_top0 exe0 shift_r_type direct_i", false,-1);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type arithmetic_i", false,-1);
        tracep->declBus(c+316,"test_top core_top0 exe0 shift_r_type value_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+244+i*1,"test_top core_top0 exe0 shift_r_type shift_l_temp", true,(i+0), 31,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+276+i*1,"test_top core_top0 exe0 shift_r_type shift_r_temp", true,(i+0), 31,0);}}
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type shift_l_cell_0 XLEN", false,-1, 31,0);
        tracep->declBus(c+401,"test_top core_top0 exe0 shift_r_type shift_l_cell_0 DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type shift_l_cell_0 rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type shift_l_cell_0 value_i", false,-1, 31,0);
        tracep->declBus(c+317,"test_top core_top0 exe0 shift_r_type shift_l_cell_0 value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type shift_r_cell_0 XLEN", false,-1, 31,0);
        tracep->declBus(c+401,"test_top core_top0 exe0 shift_r_type shift_r_cell_0 DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type shift_r_cell_0 rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type shift_r_cell_0 value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type shift_r_cell_0 arithmetic_i", false,-1);
        tracep->declBus(c+317,"test_top core_top0 exe0 shift_r_type shift_r_cell_0 value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[1] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+402,"test_top core_top0 exe0 shift_r_type genblk1[1] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[1] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[1] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+318,"test_top core_top0 exe0 shift_r_type genblk1[1] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[2] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+403,"test_top core_top0 exe0 shift_r_type genblk1[2] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[2] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[2] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+319,"test_top core_top0 exe0 shift_r_type genblk1[2] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[3] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+404,"test_top core_top0 exe0 shift_r_type genblk1[3] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[3] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[3] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+320,"test_top core_top0 exe0 shift_r_type genblk1[3] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[4] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+405,"test_top core_top0 exe0 shift_r_type genblk1[4] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[4] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[4] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+321,"test_top core_top0 exe0 shift_r_type genblk1[4] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[5] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+406,"test_top core_top0 exe0 shift_r_type genblk1[5] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[5] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[5] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+322,"test_top core_top0 exe0 shift_r_type genblk1[5] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[6] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+407,"test_top core_top0 exe0 shift_r_type genblk1[6] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[6] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[6] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+323,"test_top core_top0 exe0 shift_r_type genblk1[6] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[7] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+408,"test_top core_top0 exe0 shift_r_type genblk1[7] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[7] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[7] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+324,"test_top core_top0 exe0 shift_r_type genblk1[7] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[8] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+409,"test_top core_top0 exe0 shift_r_type genblk1[8] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[8] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[8] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+325,"test_top core_top0 exe0 shift_r_type genblk1[8] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[9] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+410,"test_top core_top0 exe0 shift_r_type genblk1[9] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[9] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[9] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+326,"test_top core_top0 exe0 shift_r_type genblk1[9] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[10] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+411,"test_top core_top0 exe0 shift_r_type genblk1[10] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[10] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[10] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+327,"test_top core_top0 exe0 shift_r_type genblk1[10] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[11] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+412,"test_top core_top0 exe0 shift_r_type genblk1[11] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[11] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[11] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+328,"test_top core_top0 exe0 shift_r_type genblk1[11] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[12] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+413,"test_top core_top0 exe0 shift_r_type genblk1[12] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[12] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[12] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+329,"test_top core_top0 exe0 shift_r_type genblk1[12] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[13] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+414,"test_top core_top0 exe0 shift_r_type genblk1[13] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[13] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[13] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+330,"test_top core_top0 exe0 shift_r_type genblk1[13] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[14] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+415,"test_top core_top0 exe0 shift_r_type genblk1[14] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[14] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[14] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+331,"test_top core_top0 exe0 shift_r_type genblk1[14] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[15] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+416,"test_top core_top0 exe0 shift_r_type genblk1[15] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[15] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[15] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+332,"test_top core_top0 exe0 shift_r_type genblk1[15] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[16] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+417,"test_top core_top0 exe0 shift_r_type genblk1[16] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[16] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[16] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+333,"test_top core_top0 exe0 shift_r_type genblk1[16] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[17] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+418,"test_top core_top0 exe0 shift_r_type genblk1[17] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[17] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[17] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+334,"test_top core_top0 exe0 shift_r_type genblk1[17] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[18] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+419,"test_top core_top0 exe0 shift_r_type genblk1[18] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[18] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[18] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+335,"test_top core_top0 exe0 shift_r_type genblk1[18] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[19] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+420,"test_top core_top0 exe0 shift_r_type genblk1[19] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[19] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[19] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+336,"test_top core_top0 exe0 shift_r_type genblk1[19] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[20] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+421,"test_top core_top0 exe0 shift_r_type genblk1[20] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[20] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[20] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+337,"test_top core_top0 exe0 shift_r_type genblk1[20] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[21] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+422,"test_top core_top0 exe0 shift_r_type genblk1[21] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[21] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[21] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+338,"test_top core_top0 exe0 shift_r_type genblk1[21] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[22] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+423,"test_top core_top0 exe0 shift_r_type genblk1[22] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[22] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[22] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+339,"test_top core_top0 exe0 shift_r_type genblk1[22] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[23] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+424,"test_top core_top0 exe0 shift_r_type genblk1[23] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[23] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[23] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+340,"test_top core_top0 exe0 shift_r_type genblk1[23] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[24] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+425,"test_top core_top0 exe0 shift_r_type genblk1[24] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[24] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[24] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+341,"test_top core_top0 exe0 shift_r_type genblk1[24] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[25] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+426,"test_top core_top0 exe0 shift_r_type genblk1[25] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[25] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[25] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+342,"test_top core_top0 exe0 shift_r_type genblk1[25] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[26] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+427,"test_top core_top0 exe0 shift_r_type genblk1[26] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[26] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[26] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+343,"test_top core_top0 exe0 shift_r_type genblk1[26] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[27] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+428,"test_top core_top0 exe0 shift_r_type genblk1[27] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[27] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[27] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+344,"test_top core_top0 exe0 shift_r_type genblk1[27] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[28] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+429,"test_top core_top0 exe0 shift_r_type genblk1[28] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[28] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[28] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+345,"test_top core_top0 exe0 shift_r_type genblk1[28] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[29] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+430,"test_top core_top0 exe0 shift_r_type genblk1[29] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[29] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[29] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+346,"test_top core_top0 exe0 shift_r_type genblk1[29] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[30] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+431,"test_top core_top0 exe0 shift_r_type genblk1[30] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[30] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[30] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+347,"test_top core_top0 exe0 shift_r_type genblk1[30] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk1[31] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+432,"test_top core_top0 exe0 shift_r_type genblk1[31] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk1[31] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk1[31] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+348,"test_top core_top0 exe0 shift_r_type genblk1[31] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[1] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+402,"test_top core_top0 exe0 shift_r_type genblk2[1] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[1] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[1] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[1] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+349,"test_top core_top0 exe0 shift_r_type genblk2[1] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[2] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+403,"test_top core_top0 exe0 shift_r_type genblk2[2] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[2] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[2] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[2] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+350,"test_top core_top0 exe0 shift_r_type genblk2[2] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[3] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+404,"test_top core_top0 exe0 shift_r_type genblk2[3] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[3] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[3] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[3] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+351,"test_top core_top0 exe0 shift_r_type genblk2[3] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[4] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+405,"test_top core_top0 exe0 shift_r_type genblk2[4] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[4] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[4] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[4] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+352,"test_top core_top0 exe0 shift_r_type genblk2[4] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[5] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+406,"test_top core_top0 exe0 shift_r_type genblk2[5] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[5] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[5] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[5] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+353,"test_top core_top0 exe0 shift_r_type genblk2[5] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[6] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+407,"test_top core_top0 exe0 shift_r_type genblk2[6] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[6] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[6] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[6] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+354,"test_top core_top0 exe0 shift_r_type genblk2[6] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[7] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+408,"test_top core_top0 exe0 shift_r_type genblk2[7] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[7] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[7] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[7] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+355,"test_top core_top0 exe0 shift_r_type genblk2[7] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[8] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+409,"test_top core_top0 exe0 shift_r_type genblk2[8] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[8] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[8] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[8] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+356,"test_top core_top0 exe0 shift_r_type genblk2[8] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[9] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+410,"test_top core_top0 exe0 shift_r_type genblk2[9] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[9] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[9] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[9] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+357,"test_top core_top0 exe0 shift_r_type genblk2[9] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[10] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+411,"test_top core_top0 exe0 shift_r_type genblk2[10] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[10] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[10] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[10] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+358,"test_top core_top0 exe0 shift_r_type genblk2[10] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[11] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+412,"test_top core_top0 exe0 shift_r_type genblk2[11] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[11] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[11] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[11] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+359,"test_top core_top0 exe0 shift_r_type genblk2[11] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[12] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+413,"test_top core_top0 exe0 shift_r_type genblk2[12] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[12] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[12] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[12] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+360,"test_top core_top0 exe0 shift_r_type genblk2[12] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[13] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+414,"test_top core_top0 exe0 shift_r_type genblk2[13] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[13] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[13] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[13] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+361,"test_top core_top0 exe0 shift_r_type genblk2[13] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[14] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+415,"test_top core_top0 exe0 shift_r_type genblk2[14] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[14] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[14] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[14] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+362,"test_top core_top0 exe0 shift_r_type genblk2[14] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[15] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+416,"test_top core_top0 exe0 shift_r_type genblk2[15] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[15] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[15] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[15] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+363,"test_top core_top0 exe0 shift_r_type genblk2[15] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[16] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+417,"test_top core_top0 exe0 shift_r_type genblk2[16] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[16] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[16] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[16] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+364,"test_top core_top0 exe0 shift_r_type genblk2[16] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[17] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+418,"test_top core_top0 exe0 shift_r_type genblk2[17] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[17] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[17] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[17] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+365,"test_top core_top0 exe0 shift_r_type genblk2[17] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[18] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+419,"test_top core_top0 exe0 shift_r_type genblk2[18] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[18] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[18] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[18] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+366,"test_top core_top0 exe0 shift_r_type genblk2[18] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[19] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+420,"test_top core_top0 exe0 shift_r_type genblk2[19] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[19] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[19] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[19] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+367,"test_top core_top0 exe0 shift_r_type genblk2[19] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[20] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+421,"test_top core_top0 exe0 shift_r_type genblk2[20] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[20] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[20] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[20] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+368,"test_top core_top0 exe0 shift_r_type genblk2[20] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[21] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+422,"test_top core_top0 exe0 shift_r_type genblk2[21] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[21] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[21] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[21] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+369,"test_top core_top0 exe0 shift_r_type genblk2[21] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[22] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+423,"test_top core_top0 exe0 shift_r_type genblk2[22] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[22] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[22] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[22] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+370,"test_top core_top0 exe0 shift_r_type genblk2[22] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[23] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+424,"test_top core_top0 exe0 shift_r_type genblk2[23] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[23] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[23] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[23] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+371,"test_top core_top0 exe0 shift_r_type genblk2[23] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[24] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+425,"test_top core_top0 exe0 shift_r_type genblk2[24] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[24] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[24] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[24] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+372,"test_top core_top0 exe0 shift_r_type genblk2[24] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[25] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+426,"test_top core_top0 exe0 shift_r_type genblk2[25] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[25] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[25] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[25] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+373,"test_top core_top0 exe0 shift_r_type genblk2[25] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[26] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+427,"test_top core_top0 exe0 shift_r_type genblk2[26] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[26] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[26] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[26] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+374,"test_top core_top0 exe0 shift_r_type genblk2[26] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[27] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+428,"test_top core_top0 exe0 shift_r_type genblk2[27] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[27] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[27] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[27] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+375,"test_top core_top0 exe0 shift_r_type genblk2[27] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[28] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+429,"test_top core_top0 exe0 shift_r_type genblk2[28] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[28] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[28] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[28] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+376,"test_top core_top0 exe0 shift_r_type genblk2[28] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[29] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+430,"test_top core_top0 exe0 shift_r_type genblk2[29] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[29] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[29] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[29] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+377,"test_top core_top0 exe0 shift_r_type genblk2[29] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[30] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+431,"test_top core_top0 exe0 shift_r_type genblk2[30] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[30] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[30] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[30] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+378,"test_top core_top0 exe0 shift_r_type genblk2[30] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+386,"test_top core_top0 exe0 shift_r_type genblk2[31] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+432,"test_top core_top0 exe0 shift_r_type genblk2[31] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+308,"test_top core_top0 exe0 shift_r_type genblk2[31] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+20,"test_top core_top0 exe0 shift_r_type genblk2[31] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+50,"test_top core_top0 exe0 shift_r_type genblk2[31] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+379,"test_top core_top0 exe0 shift_r_type genblk2[31] shift_r_sell_n value_o", false,-1, 31,0);
    }
}

void Vtest_top::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtest_top::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtest_top::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[0]),32);
        tracep->fullIData(oldp+2,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[1]),32);
        tracep->fullIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0]),32);
        tracep->fullIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[1]),32);
        tracep->fullIData(oldp+5,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[0]),32);
        tracep->fullIData(oldp+6,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[1]),32);
        tracep->fullIData(oldp+7,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
        tracep->fullIData(oldp+8,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
        tracep->fullIData(oldp+9,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__i),32);
        tracep->fullBit(oldp+10,(vlSymsp->TOP__test_top.__PVT__halt_from_console));
        tracep->fullIData(oldp+11,(vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire),32);
        tracep->fullBit(oldp+12,(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire));
        tracep->fullBit(oldp+13,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_resp));
        tracep->fullBit(oldp+14,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp));
        tracep->fullCData(oldp+15,(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish),3);
        tracep->fullIData(oldp+16,(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd),32);
        tracep->fullIData(oldp+17,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o),32);
        tracep->fullIData(oldp+18,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o),32);
        tracep->fullBit(oldp+19,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_inst_is_load_o) 
                                  & (((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0xfU)) 
                                      == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_rd_o)) 
                                     | ((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0x14U)) 
                                        == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_rd_o))))));
        tracep->fullIData(oldp+20,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o),32);
        tracep->fullIData(oldp+21,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o),32);
        tracep->fullBit(oldp+22,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o));
        tracep->fullCData(oldp+23,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o),5);
        tracep->fullIData(oldp+24,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o),32);
        tracep->fullIData(oldp+25,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o),32);
        tracep->fullBit(oldp+26,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_inst_is_load_o));
        tracep->fullCData(oldp+27,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_rd_o),5);
        tracep->fullCData(oldp+28,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o),5);
        tracep->fullBit(oldp+29,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
        tracep->fullIData(oldp+30,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o),32);
        tracep->fullIData(oldp+31,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o),32);
        tracep->fullIData(oldp+32,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o),32);
        tracep->fullBit(oldp+33,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o));
        tracep->fullCData(oldp+34,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o),4);
        tracep->fullCData(oldp+35,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o),5);
        tracep->fullBit(oldp+36,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o));
        tracep->fullIData(oldp+37,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o),32);
        tracep->fullCData(oldp+38,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)),7);
        tracep->fullCData(oldp+39,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 7U))),5);
        tracep->fullCData(oldp+40,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+41,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0x14U))),5);
        tracep->fullIData(oldp+42,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op2_o),32);
        tracep->fullCData(oldp+43,((0x1fU & ((0x4000U 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                              ? ((0x2000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)))
                                              : ((0x2000U 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 
                                                  (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)))))),5);
        tracep->fullCData(oldp+44,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+45,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)),7);
        tracep->fullCData(oldp+46,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+47,((0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 0x19U))),7);
        tracep->fullCData(oldp+48,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+49,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                        >> 0xeU))));
        tracep->fullBit(oldp+50,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                        >> 0x1eU))));
        tracep->fullIData(oldp+51,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_type_offset),32);
        tracep->fullIData(oldp+52,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
                                    + ((0xfff00000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                          >> 0x1fU)))) 
                                           << 0x14U)) 
                                       | ((0xff000U 
                                           & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o) 
                                          | ((0x800U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 9U)) 
                                             | (0x7feU 
                                                & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 0x14U))))))),32);
        tracep->fullIData(oldp+53,(((0xfffff000U & 
                                     ((- (IData)((1U 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0x1fU)))) 
                                      << 0xcU)) | (
                                                   (0xfe0U 
                                                    & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                         >> 7U))))),32);
        tracep->fullIData(oldp+54,(((0xfffff000U & 
                                     ((- (IData)((1U 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 0x1fU)))) 
                                      << 0xcU)) | (0xfffU 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      >> 0x14U)))),32);
        tracep->fullBit(oldp+55,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                        >> 0x19U))));
        tracep->fullIData(oldp+56,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_high_result),32);
        tracep->fullIData(oldp+57,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_low_result),32);
        tracep->fullBit(oldp+58,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_ready));
        tracep->fullCData(oldp+59,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_count),6);
        tracep->fullWData(oldp+60,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d__DOT__long_temp),65);
        tracep->fullIData(oldp+63,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d__DOT__rs1_temp),32);
        tracep->fullIData(oldp+64,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d__DOT__rs2_temp),32);
        tracep->fullBit(oldp+65,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d__DOT__rs1_is_neg));
        tracep->fullBit(oldp+66,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d__DOT__rs2_is_neg));
        tracep->fullBit(oldp+67,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                        >> 0xeU))));
        tracep->fullCData(oldp+68,((3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o)),2);
        tracep->fullIData(oldp+69,((0x3ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)),22);
        tracep->fullIData(oldp+70,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[0]),32);
        tracep->fullIData(oldp+71,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[1]),32);
        tracep->fullIData(oldp+72,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[2]),32);
        tracep->fullIData(oldp+73,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[3]),32);
        tracep->fullIData(oldp+74,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[4]),32);
        tracep->fullIData(oldp+75,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[5]),32);
        tracep->fullIData(oldp+76,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[6]),32);
        tracep->fullIData(oldp+77,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[7]),32);
        tracep->fullIData(oldp+78,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[8]),32);
        tracep->fullIData(oldp+79,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[9]),32);
        tracep->fullIData(oldp+80,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[10]),32);
        tracep->fullIData(oldp+81,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[11]),32);
        tracep->fullIData(oldp+82,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[12]),32);
        tracep->fullIData(oldp+83,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[13]),32);
        tracep->fullIData(oldp+84,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[14]),32);
        tracep->fullIData(oldp+85,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[15]),32);
        tracep->fullIData(oldp+86,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[16]),32);
        tracep->fullIData(oldp+87,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[17]),32);
        tracep->fullIData(oldp+88,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[18]),32);
        tracep->fullIData(oldp+89,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[19]),32);
        tracep->fullIData(oldp+90,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[20]),32);
        tracep->fullIData(oldp+91,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[21]),32);
        tracep->fullIData(oldp+92,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[22]),32);
        tracep->fullIData(oldp+93,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[23]),32);
        tracep->fullIData(oldp+94,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[24]),32);
        tracep->fullIData(oldp+95,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[25]),32);
        tracep->fullIData(oldp+96,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[26]),32);
        tracep->fullIData(oldp+97,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[27]),32);
        tracep->fullIData(oldp+98,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[28]),32);
        tracep->fullIData(oldp+99,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[29]),32);
        tracep->fullIData(oldp+100,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[30]),32);
        tracep->fullIData(oldp+101,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[31]),32);
        tracep->fullCData(oldp+102,((0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)),5);
        tracep->fullBit(oldp+103,(vlSymsp->TOP__test_top.__PVT__host_req[0]));
        tracep->fullBit(oldp+104,(vlSymsp->TOP__test_top.__PVT__host_gnt[0]));
        tracep->fullIData(oldp+105,(vlSymsp->TOP__test_top.__PVT__host_addr[0]),32);
        tracep->fullBit(oldp+106,(vlSymsp->TOP__test_top.__PVT__host_we[0]));
        tracep->fullIData(oldp+107,(vlSymsp->TOP__test_top.__PVT__host_wdata[0]),32);
        tracep->fullIData(oldp+108,(vlSymsp->TOP__test_top.__PVT__host_rdata[0]),32);
        tracep->fullBit(oldp+109,(vlSymsp->TOP__test_top.__PVT__device_req[0]));
        tracep->fullBit(oldp+110,(vlSymsp->TOP__test_top.__PVT__device_req[1]));
        tracep->fullIData(oldp+111,(vlSymsp->TOP__test_top.__PVT__device_addr[0]),32);
        tracep->fullIData(oldp+112,(vlSymsp->TOP__test_top.__PVT__device_addr[1]),32);
        tracep->fullBit(oldp+113,(vlSymsp->TOP__test_top.__PVT__device_we[0]));
        tracep->fullBit(oldp+114,(vlSymsp->TOP__test_top.__PVT__device_we[1]));
        tracep->fullIData(oldp+115,(vlSymsp->TOP__test_top.__PVT__device_wdata[0]),32);
        tracep->fullIData(oldp+116,(vlSymsp->TOP__test_top.__PVT__device_wdata[1]),32);
        tracep->fullIData(oldp+117,(vlSymsp->TOP__test_top.__PVT__device_rdata[0]),32);
        tracep->fullIData(oldp+118,(vlSymsp->TOP__test_top.__PVT__device_rdata[1]),32);
        tracep->fullBit(oldp+119,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0]));
        tracep->fullBit(oldp+120,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0]));
        tracep->fullIData(oldp+121,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0]),32);
        tracep->fullBit(oldp+122,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0]));
        tracep->fullIData(oldp+123,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0]),32);
        tracep->fullIData(oldp+124,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0]),32);
        tracep->fullBit(oldp+125,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0]));
        tracep->fullBit(oldp+126,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1]));
        tracep->fullIData(oldp+127,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0]),32);
        tracep->fullIData(oldp+128,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1]),32);
        tracep->fullBit(oldp+129,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0]));
        tracep->fullBit(oldp+130,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1]));
        tracep->fullIData(oldp+131,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0]),32);
        tracep->fullIData(oldp+132,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1]),32);
        tracep->fullIData(oldp+133,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[0]),32);
        tracep->fullIData(oldp+134,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[1]),32);
        tracep->fullBit(oldp+135,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req));
        tracep->fullBit(oldp+136,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req));
        tracep->fullBit(oldp+137,(vlSymsp->TOP__test_top.__PVT__device_req
                                  [1U]));
        tracep->fullBit(oldp+138,(vlSymsp->TOP__test_top.__PVT__device_we
                                  [1U]));
        tracep->fullIData(oldp+139,(vlSymsp->TOP__test_top.__PVT__device_addr
                                    [1U]),32);
        tracep->fullIData(oldp+140,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                    [1U]),32);
        tracep->fullCData(oldp+141,((0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [1U])),8);
        tracep->fullBit(oldp+142,(vlSymsp->TOP__test_top__core_top0.__PVT__ram_we_o));
        tracep->fullIData(oldp+143,(vlSymsp->TOP__test_top__core_top0.__PVT__ram_addr_o),32);
        tracep->fullIData(oldp+144,(vlSymsp->TOP__test_top__core_top0.__PVT__ram_wdata_o),32);
        tracep->fullIData(oldp+145,(vlSymsp->TOP__test_top.__PVT__host_rdata
                                    [0U]),32);
        tracep->fullCData(oldp+146,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o),6);
        tracep->fullBit(oldp+147,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_enable_o));
        tracep->fullIData(oldp+148,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_addr_o),32);
        tracep->fullIData(oldp+149,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o),32);
        tracep->fullIData(oldp+150,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_addr_o),32);
        tracep->fullBit(oldp+151,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o));
        tracep->fullCData(oldp+152,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o),5);
        tracep->fullCData(oldp+153,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o),5);
        tracep->fullCData(oldp+154,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o),5);
        tracep->fullBit(oldp+155,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o));
        tracep->fullBit(oldp+156,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o));
        tracep->fullIData(oldp+157,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o),32);
        tracep->fullIData(oldp+158,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o),32);
        tracep->fullCData(oldp+159,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o),5);
        tracep->fullBit(oldp+160,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o));
        tracep->fullIData(oldp+161,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o),32);
        tracep->fullIData(oldp+162,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o),32);
        tracep->fullIData(oldp+163,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o),32);
        tracep->fullBit(oldp+164,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o));
        tracep->fullCData(oldp+165,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o),4);
        tracep->fullBit(oldp+166,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_stallreq_o));
        tracep->fullCData(oldp+167,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o),5);
        tracep->fullBit(oldp+168,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o));
        tracep->fullIData(oldp+169,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_wdata_o),32);
        tracep->fullIData(oldp+170,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final),32);
        tracep->fullIData(oldp+171,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final),32);
        tracep->fullCData(oldp+172,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o)),7);
        tracep->fullIData(oldp+173,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__compare_sub_type_i),32);
        tracep->fullBit(oldp+174,(vlSymsp->TOP__test_top.__PVT__device_we
                                  [0U]));
        tracep->fullBit(oldp+175,(vlSymsp->TOP__test_top.__PVT__device_req
                                  [0U]));
        tracep->fullIData(oldp+176,(vlSymsp->TOP__test_top.__PVT__device_addr
                                    [0U]),32);
        tracep->fullIData(oldp+177,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                    [0U]),32);
        tracep->fullIData(oldp+178,(vlSymsp->TOP__test_top__dpram0.__PVT__data_o),32);
        tracep->fullIData(oldp+179,((0x3ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [0U])),22);
        tracep->fullIData(oldp+180,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[0]),32);
        tracep->fullIData(oldp+181,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[1]),32);
        tracep->fullIData(oldp+182,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[2]),32);
        tracep->fullIData(oldp+183,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[3]),32);
        tracep->fullIData(oldp+184,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[4]),32);
        tracep->fullIData(oldp+185,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[5]),32);
        tracep->fullIData(oldp+186,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[6]),32);
        tracep->fullIData(oldp+187,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[7]),32);
        tracep->fullIData(oldp+188,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[8]),32);
        tracep->fullIData(oldp+189,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[9]),32);
        tracep->fullIData(oldp+190,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[10]),32);
        tracep->fullIData(oldp+191,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[11]),32);
        tracep->fullIData(oldp+192,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[12]),32);
        tracep->fullIData(oldp+193,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[13]),32);
        tracep->fullIData(oldp+194,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[14]),32);
        tracep->fullIData(oldp+195,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[15]),32);
        tracep->fullIData(oldp+196,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[16]),32);
        tracep->fullIData(oldp+197,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[17]),32);
        tracep->fullIData(oldp+198,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[18]),32);
        tracep->fullIData(oldp+199,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[19]),32);
        tracep->fullIData(oldp+200,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[20]),32);
        tracep->fullIData(oldp+201,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[21]),32);
        tracep->fullIData(oldp+202,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[22]),32);
        tracep->fullIData(oldp+203,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[23]),32);
        tracep->fullIData(oldp+204,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[24]),32);
        tracep->fullIData(oldp+205,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[25]),32);
        tracep->fullIData(oldp+206,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[26]),32);
        tracep->fullIData(oldp+207,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[27]),32);
        tracep->fullIData(oldp+208,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[28]),32);
        tracep->fullIData(oldp+209,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[29]),32);
        tracep->fullIData(oldp+210,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[30]),32);
        tracep->fullIData(oldp+211,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[31]),32);
        tracep->fullIData(oldp+212,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[0]),32);
        tracep->fullIData(oldp+213,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[1]),32);
        tracep->fullIData(oldp+214,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[2]),32);
        tracep->fullIData(oldp+215,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[3]),32);
        tracep->fullIData(oldp+216,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[4]),32);
        tracep->fullIData(oldp+217,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[5]),32);
        tracep->fullIData(oldp+218,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[6]),32);
        tracep->fullIData(oldp+219,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[7]),32);
        tracep->fullIData(oldp+220,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[8]),32);
        tracep->fullIData(oldp+221,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[9]),32);
        tracep->fullIData(oldp+222,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[10]),32);
        tracep->fullIData(oldp+223,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[11]),32);
        tracep->fullIData(oldp+224,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[12]),32);
        tracep->fullIData(oldp+225,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[13]),32);
        tracep->fullIData(oldp+226,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[14]),32);
        tracep->fullIData(oldp+227,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[15]),32);
        tracep->fullIData(oldp+228,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[16]),32);
        tracep->fullIData(oldp+229,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[17]),32);
        tracep->fullIData(oldp+230,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[18]),32);
        tracep->fullIData(oldp+231,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[19]),32);
        tracep->fullIData(oldp+232,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[20]),32);
        tracep->fullIData(oldp+233,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[21]),32);
        tracep->fullIData(oldp+234,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[22]),32);
        tracep->fullIData(oldp+235,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[23]),32);
        tracep->fullIData(oldp+236,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[24]),32);
        tracep->fullIData(oldp+237,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[25]),32);
        tracep->fullIData(oldp+238,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[26]),32);
        tracep->fullIData(oldp+239,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[27]),32);
        tracep->fullIData(oldp+240,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[28]),32);
        tracep->fullIData(oldp+241,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[29]),32);
        tracep->fullIData(oldp+242,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[30]),32);
        tracep->fullIData(oldp+243,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[31]),32);
        tracep->fullIData(oldp+244,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[0]),32);
        tracep->fullIData(oldp+245,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[1]),32);
        tracep->fullIData(oldp+246,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[2]),32);
        tracep->fullIData(oldp+247,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[3]),32);
        tracep->fullIData(oldp+248,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[4]),32);
        tracep->fullIData(oldp+249,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[5]),32);
        tracep->fullIData(oldp+250,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[6]),32);
        tracep->fullIData(oldp+251,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[7]),32);
        tracep->fullIData(oldp+252,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[8]),32);
        tracep->fullIData(oldp+253,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[9]),32);
        tracep->fullIData(oldp+254,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[10]),32);
        tracep->fullIData(oldp+255,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[11]),32);
        tracep->fullIData(oldp+256,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[12]),32);
        tracep->fullIData(oldp+257,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[13]),32);
        tracep->fullIData(oldp+258,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[14]),32);
        tracep->fullIData(oldp+259,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[15]),32);
        tracep->fullIData(oldp+260,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[16]),32);
        tracep->fullIData(oldp+261,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[17]),32);
        tracep->fullIData(oldp+262,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[18]),32);
        tracep->fullIData(oldp+263,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[19]),32);
        tracep->fullIData(oldp+264,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[20]),32);
        tracep->fullIData(oldp+265,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[21]),32);
        tracep->fullIData(oldp+266,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[22]),32);
        tracep->fullIData(oldp+267,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[23]),32);
        tracep->fullIData(oldp+268,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[24]),32);
        tracep->fullIData(oldp+269,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[25]),32);
        tracep->fullIData(oldp+270,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[26]),32);
        tracep->fullIData(oldp+271,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[27]),32);
        tracep->fullIData(oldp+272,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[28]),32);
        tracep->fullIData(oldp+273,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[29]),32);
        tracep->fullIData(oldp+274,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[30]),32);
        tracep->fullIData(oldp+275,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[31]),32);
        tracep->fullIData(oldp+276,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[0]),32);
        tracep->fullIData(oldp+277,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[1]),32);
        tracep->fullIData(oldp+278,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[2]),32);
        tracep->fullIData(oldp+279,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[3]),32);
        tracep->fullIData(oldp+280,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[4]),32);
        tracep->fullIData(oldp+281,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[5]),32);
        tracep->fullIData(oldp+282,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[6]),32);
        tracep->fullIData(oldp+283,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[7]),32);
        tracep->fullIData(oldp+284,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[8]),32);
        tracep->fullIData(oldp+285,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[9]),32);
        tracep->fullIData(oldp+286,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[10]),32);
        tracep->fullIData(oldp+287,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[11]),32);
        tracep->fullIData(oldp+288,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[12]),32);
        tracep->fullIData(oldp+289,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[13]),32);
        tracep->fullIData(oldp+290,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[14]),32);
        tracep->fullIData(oldp+291,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[15]),32);
        tracep->fullIData(oldp+292,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[16]),32);
        tracep->fullIData(oldp+293,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[17]),32);
        tracep->fullIData(oldp+294,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[18]),32);
        tracep->fullIData(oldp+295,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[19]),32);
        tracep->fullIData(oldp+296,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[20]),32);
        tracep->fullIData(oldp+297,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[21]),32);
        tracep->fullIData(oldp+298,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[22]),32);
        tracep->fullIData(oldp+299,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[23]),32);
        tracep->fullIData(oldp+300,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[24]),32);
        tracep->fullIData(oldp+301,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[25]),32);
        tracep->fullIData(oldp+302,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[26]),32);
        tracep->fullIData(oldp+303,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[27]),32);
        tracep->fullIData(oldp+304,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[28]),32);
        tracep->fullIData(oldp+305,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[29]),32);
        tracep->fullIData(oldp+306,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[30]),32);
        tracep->fullIData(oldp+307,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[31]),32);
        tracep->fullBit(oldp+308,(vlTOPp->rst_i));
        tracep->fullBit(oldp+309,(vlTOPp->clk_i));
        tracep->fullBit(oldp+310,(vlTOPp->halt_o));
        tracep->fullIData(oldp+311,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
                                      ? ((((0x2fffffU 
                                            >= (0x3ffffcU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire))
                                            ? vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                           [(0x3ffffcU 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)]
                                            : 0U) << 0x18U) 
                                         | ((((0x2fffffU 
                                               >= (0x3fffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x3ffffcU 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire))))
                                               ? vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                              [(0x3fffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0x3ffffcU 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))]
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((0x2fffffU 
                                                  >= 
                                                  (0x3fffffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x3ffffcU 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire))))
                                                  ? 
                                                 vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                 [(0x3fffffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x3ffffcU 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))]
                                                  : 0U) 
                                                << 8U) 
                                               | ((0x2fffffU 
                                                   >= 
                                                   (0x3fffffU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       (0x3ffffcU 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire))))
                                                   ? 
                                                  vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                  [
                                                  (0x3fffffU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0x3ffffcU 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))]
                                                   : 0U))))
                                      : 0U)),32);
        tracep->fullBit(oldp+312,((1U & ((~ (IData)(vlTOPp->rst_i)) 
                                         & ((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                                             ? ((4U 
                                                 & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))
                                                 ? 
                                                (~ 
                                                 ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                                                  >> 1U))
                                                 : 
                                                (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                                                  >> 1U) 
                                                 | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o)))
                                             : ((~ 
                                                 ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                                                  >> 2U)) 
                                                & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o) 
                                                    >> 1U) 
                                                   | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o))))))));
        tracep->fullIData(oldp+313,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                                 & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                                & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                                   == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))) 
                                               & (0U 
                                                  != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                               ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                                               : ((
                                                   (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                                    & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                                       == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))) 
                                                   & (0U 
                                                      != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                                   ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_wdata_o
                                                   : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final)))),32);
        tracep->fullIData(oldp+314,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                               & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                                  == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                               ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                                               : ((
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                                   & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                                      == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                                   ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_wdata_o
                                                   : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final)))),32);
        tracep->fullIData(oldp+315,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x4000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp
                                              [(0x1fU 
                                                & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 0x14U))]
                                               : vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp
                                              [(0x1fU 
                                                & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 0x14U))]))),32);
        tracep->fullIData(oldp+316,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x4000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp
                                              [(0x1fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)]
                                               : vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp
                                              [(0x1fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)]))),32);
        tracep->fullIData(oldp+317,(((IData)(vlTOPp->rst_i)
                                      ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)),32);
        tracep->fullIData(oldp+318,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffffeU 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 1U)))),32);
        tracep->fullIData(oldp+319,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffffcU 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 2U)))),32);
        tracep->fullIData(oldp+320,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffff8U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 3U)))),32);
        tracep->fullIData(oldp+321,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffff0U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 4U)))),32);
        tracep->fullIData(oldp+322,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffffe0U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 5U)))),32);
        tracep->fullIData(oldp+323,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffffc0U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 6U)))),32);
        tracep->fullIData(oldp+324,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffff80U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 7U)))),32);
        tracep->fullIData(oldp+325,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffff00U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 8U)))),32);
        tracep->fullIData(oldp+326,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffe00U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 9U)))),32);
        tracep->fullIData(oldp+327,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffc00U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0xaU)))),32);
        tracep->fullIData(oldp+328,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffff800U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0xbU)))),32);
        tracep->fullIData(oldp+329,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffff000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0xcU)))),32);
        tracep->fullIData(oldp+330,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffe000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0xdU)))),32);
        tracep->fullIData(oldp+331,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffc000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0xeU)))),32);
        tracep->fullIData(oldp+332,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffff8000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0xfU)))),32);
        tracep->fullIData(oldp+333,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffff0000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x10U)))),32);
        tracep->fullIData(oldp+334,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffe0000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x11U)))),32);
        tracep->fullIData(oldp+335,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffc0000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x12U)))),32);
        tracep->fullIData(oldp+336,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfff80000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x13U)))),32);
        tracep->fullIData(oldp+337,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfff00000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x14U)))),32);
        tracep->fullIData(oldp+338,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffe00000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x15U)))),32);
        tracep->fullIData(oldp+339,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffc00000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x16U)))),32);
        tracep->fullIData(oldp+340,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xff800000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x17U)))),32);
        tracep->fullIData(oldp+341,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xff000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x18U)))),32);
        tracep->fullIData(oldp+342,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfe000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x19U)))),32);
        tracep->fullIData(oldp+343,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfc000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x1aU)))),32);
        tracep->fullIData(oldp+344,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xf8000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x1bU)))),32);
        tracep->fullIData(oldp+345,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xf0000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x1cU)))),32);
        tracep->fullIData(oldp+346,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xe0000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x1dU)))),32);
        tracep->fullIData(oldp+347,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xc0000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x1eU)))),32);
        tracep->fullIData(oldp+348,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0x80000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x1fU)))),32);
        tracep->fullIData(oldp+349,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0x80000000U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o) 
                                                  | (0x7fffffffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 1U)))
                                               : (0x7fffffffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 1U))))),32);
        tracep->fullIData(oldp+350,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xc0000000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0x1eU)) 
                                                  | (0x3fffffffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 2U)))
                                               : (0x3fffffffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 2U))))),32);
        tracep->fullIData(oldp+351,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xe0000000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0x1dU)) 
                                                  | (0x1fffffffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 3U)))
                                               : (0x1fffffffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 3U))))),32);
        tracep->fullIData(oldp+352,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xf0000000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0x1cU)) 
                                                  | (0xfffffffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 4U)))
                                               : (0xfffffffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 4U))))),32);
        tracep->fullIData(oldp+353,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xf8000000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0x1bU)) 
                                                  | (0x7ffffffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 5U)))
                                               : (0x7ffffffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 5U))))),32);
        tracep->fullIData(oldp+354,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xfc000000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0x1aU)) 
                                                  | (0x3ffffffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 6U)))
                                               : (0x3ffffffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 6U))))),32);
        tracep->fullIData(oldp+355,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xfe000000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0x19U)) 
                                                  | (0x1ffffffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 7U)))
                                               : (0x1ffffffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 7U))))),32);
        tracep->fullIData(oldp+356,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xff000000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0x18U)) 
                                                  | (0xffffffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 8U)))
                                               : (0xffffffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 8U))))),32);
        tracep->fullIData(oldp+357,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xff800000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0x17U)) 
                                                  | (0x7fffffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 9U)))
                                               : (0x7fffffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 9U))))),32);
        tracep->fullIData(oldp+358,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xffc00000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0x16U)) 
                                                  | (0x3fffffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0xaU)))
                                               : (0x3fffffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0xaU))))),32);
        tracep->fullIData(oldp+359,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xffe00000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0x15U)) 
                                                  | (0x1fffffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0xbU)))
                                               : (0x1fffffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0xbU))))),32);
        tracep->fullIData(oldp+360,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xfff00000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0x14U)) 
                                                  | (0xfffffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0xcU)))
                                               : (0xfffffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0xcU))))),32);
        tracep->fullIData(oldp+361,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xfff80000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0x13U)) 
                                                  | (0x7ffffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0xdU)))
                                               : (0x7ffffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0xdU))))),32);
        tracep->fullIData(oldp+362,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xfffc0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0x12U)) 
                                                  | (0x3ffffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0xeU)))
                                               : (0x3ffffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0xeU))))),32);
        tracep->fullIData(oldp+363,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xfffe0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0x11U)) 
                                                  | (0x1ffffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0xfU)))
                                               : (0x1ffffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0xfU))))),32);
        tracep->fullIData(oldp+364,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xffff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0x10U)))
                                               : (0xffffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0x10U))))),32);
        tracep->fullIData(oldp+365,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xffff8000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0xfU)) 
                                                  | (0x7fffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0x11U)))
                                               : (0x7fffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0x11U))))),32);
        tracep->fullIData(oldp+366,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xffffc000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0xeU)) 
                                                  | (0x3fffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0x12U)))
                                               : (0x3fffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0x12U))))),32);
        tracep->fullIData(oldp+367,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xffffe000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0xdU)) 
                                                  | (0x1fffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0x13U)))
                                               : (0x1fffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0x13U))))),32);
        tracep->fullIData(oldp+368,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xfffff000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | (0xfffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0x14U)))
                                               : (0xfffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0x14U))))),32);
        tracep->fullIData(oldp+369,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xfffff800U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0xbU)) 
                                                  | (0x7ffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0x15U)))
                                               : (0x7ffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0x15U))))),32);
        tracep->fullIData(oldp+370,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xfffffc00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 0xaU)) 
                                                  | (0x3ffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0x16U)))
                                               : (0x3ffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0x16U))))),32);
        tracep->fullIData(oldp+371,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xfffffe00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 9U)) 
                                                  | (0x1ffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0x17U)))
                                               : (0x1ffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0x17U))))),32);
        tracep->fullIData(oldp+372,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0x18U)))
                                               : (0xffU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0x18U))))),32);
        tracep->fullIData(oldp+373,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xffffff80U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0x19U)))
                                               : (0x7fU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0x19U))))),32);
        tracep->fullIData(oldp+374,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xffffffc0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 6U)) 
                                                  | (0x3fU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0x1aU)))
                                               : (0x3fU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0x1aU))))),32);
        tracep->fullIData(oldp+375,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xffffffe0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0x1bU)))
                                               : (0x1fU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0x1bU))))),32);
        tracep->fullIData(oldp+376,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xfffffff0U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 4U)) 
                                                  | (0xfU 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0x1cU)))
                                               : (0xfU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0x1cU))))),32);
        tracep->fullIData(oldp+377,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xfffffff8U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0x1dU)))
                                               : (7U 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0x1dU))))),32);
        tracep->fullIData(oldp+378,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xfffffffcU 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0x1eU)))
                                               : (3U 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0x1eU))))),32);
        tracep->fullIData(oldp+379,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40000000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? ((0xfffffffeU 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                                     >> 0x1fU)))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                        >> 0x1fU)))
                                               : (1U 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                     >> 0x1fU))))),32);
        tracep->fullIData(oldp+380,(2U),32);
        tracep->fullIData(oldp+381,(1U),32);
        tracep->fullIData(oldp+382,(0x100000U),32);
        tracep->fullIData(oldp+383,(0x14U),32);
        tracep->fullIData(oldp+384,(2U),32);
        tracep->fullIData(oldp+385,(1U),32);
        tracep->fullIData(oldp+386,(0x20U),32);
        tracep->fullIData(oldp+387,(0xffffffffU),32);
        tracep->fullIData(oldp+388,(2U),32);
        tracep->fullIData(oldp+389,(1U),32);
        tracep->fullBit(oldp+390,(1U));
        tracep->fullCData(oldp+391,(4U),8);
        tracep->fullCData(oldp+392,(8U),8);
        tracep->fullBit(oldp+393,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_halt_o));
        tracep->fullCData(oldp+394,(0U),5);
        tracep->fullBit(oldp+395,(1U));
        tracep->fullBit(oldp+396,(0U));
        tracep->fullIData(oldp+397,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__compare_sub_type_r),32);
        tracep->fullCData(oldp+398,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_op),2);
        tracep->fullBit(oldp+399,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__rs1_signed_i));
        tracep->fullBit(oldp+400,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__rs2_signed_i));
        tracep->fullIData(oldp+401,(0U),32);
        tracep->fullIData(oldp+402,(1U),32);
        tracep->fullIData(oldp+403,(2U),32);
        tracep->fullIData(oldp+404,(3U),32);
        tracep->fullIData(oldp+405,(4U),32);
        tracep->fullIData(oldp+406,(5U),32);
        tracep->fullIData(oldp+407,(6U),32);
        tracep->fullIData(oldp+408,(7U),32);
        tracep->fullIData(oldp+409,(8U),32);
        tracep->fullIData(oldp+410,(9U),32);
        tracep->fullIData(oldp+411,(0xaU),32);
        tracep->fullIData(oldp+412,(0xbU),32);
        tracep->fullIData(oldp+413,(0xcU),32);
        tracep->fullIData(oldp+414,(0xdU),32);
        tracep->fullIData(oldp+415,(0xeU),32);
        tracep->fullIData(oldp+416,(0xfU),32);
        tracep->fullIData(oldp+417,(0x10U),32);
        tracep->fullIData(oldp+418,(0x11U),32);
        tracep->fullIData(oldp+419,(0x12U),32);
        tracep->fullIData(oldp+420,(0x13U),32);
        tracep->fullIData(oldp+421,(0x14U),32);
        tracep->fullIData(oldp+422,(0x15U),32);
        tracep->fullIData(oldp+423,(0x16U),32);
        tracep->fullIData(oldp+424,(0x17U),32);
        tracep->fullIData(oldp+425,(0x18U),32);
        tracep->fullIData(oldp+426,(0x19U),32);
        tracep->fullIData(oldp+427,(0x1aU),32);
        tracep->fullIData(oldp+428,(0x1bU),32);
        tracep->fullIData(oldp+429,(0x1cU),32);
        tracep->fullIData(oldp+430,(0x1dU),32);
        tracep->fullIData(oldp+431,(0x1eU),32);
        tracep->fullIData(oldp+432,(0x1fU),32);
    }
}
