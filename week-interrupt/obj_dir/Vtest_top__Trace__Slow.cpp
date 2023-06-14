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
        tracep->declBit(c+453,"rst_i", false,-1);
        tracep->declBit(c+454,"clk_i", false,-1);
        tracep->declBit(c+455,"halt_o", false,-1);
        tracep->declBit(c+453,"test_top rst_i", false,-1);
        tracep->declBit(c+454,"test_top clk_i", false,-1);
        tracep->declBit(c+23,"test_top halt_o", false,-1);
        tracep->declBus(c+529,"test_top NrDevices", false,-1, 31,0);
        tracep->declBus(c+530,"test_top NrHosts", false,-1, 31,0);
        tracep->declBus(c+531,"test_top MemSize", false,-1, 31,0);
        tracep->declBus(c+532,"test_top MemAddrWidth", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+201+i*1,"test_top host_req", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+202+i*1,"test_top host_gnt", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+203+i*1,"test_top host_addr", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+204+i*1,"test_top host_we", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+205+i*1,"test_top host_wdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+206+i*1,"test_top host_rdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBit(c+207+i*1,"test_top device_req", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+211+i*1,"test_top device_addr", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBit(c+215+i*1,"test_top device_we", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+219+i*1,"test_top device_wdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+195+i*1,"test_top device_rdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1+i*1,"test_top cfg_device_addr_base", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+5+i*1,"test_top cfg_device_addr_mask", true,(i+0), 31,0);}}
        tracep->declBit(c+23,"test_top halt_from_console", false,-1);
        tracep->declBus(c+24,"test_top core_ram_pc", false,-1, 31,0);
        tracep->declBit(c+25,"test_top core_ram_ce", false,-1);
        tracep->declBus(c+456,"test_top ram_core_inst", false,-1, 31,0);
        tracep->declBus(c+26,"test_top ram_op_o", false,-1, 3,0);
        tracep->declBit(c+27,"test_top timer_irq", false,-1);
        tracep->declBit(c+28,"test_top software_irq", false,-1);
        tracep->declBus(c+533,"test_top u_bus NrDevices", false,-1, 31,0);
        tracep->declBus(c+534,"test_top u_bus NrHosts", false,-1, 31,0);
        tracep->declBus(c+535,"test_top u_bus DataWidth", false,-1, 31,0);
        tracep->declBus(c+535,"test_top u_bus AddressWidth", false,-1, 31,0);
        tracep->declBit(c+454,"test_top u_bus clk_i", false,-1);
        tracep->declBit(c+453,"test_top u_bus rst_i", false,-1);
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+223+i*1,"test_top u_bus host_req_i", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+224+i*1,"test_top u_bus host_gnt_o", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+225+i*1,"test_top u_bus host_addr_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+226+i*1,"test_top u_bus host_we_i", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+227+i*1,"test_top u_bus host_wdata_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+228+i*1,"test_top u_bus host_rdata_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBit(c+229+i*1,"test_top u_bus device_req_o", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+233+i*1,"test_top u_bus device_addr_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBit(c+237+i*1,"test_top u_bus device_we_o", true,(i+0));}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+241+i*1,"test_top u_bus device_wdata_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+245+i*1,"test_top u_bus device_rdata_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+9+i*1,"test_top u_bus cfg_device_addr_base", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+13+i*1,"test_top u_bus cfg_device_addr_mask", true,(i+0), 31,0);}}
        tracep->declBus(c+534,"test_top u_bus NumBitsHostSel", false,-1, 31,0);
        tracep->declBus(c+536,"test_top u_bus NumBitsDeviceSel", false,-1, 31,0);
        tracep->declBus(c+249,"test_top u_bus host_sel_req", false,-1, 0,0);
        tracep->declBus(c+250,"test_top u_bus device_sel_req", false,-1, 1,0);
        tracep->declBus(c+457,"test_top u_bus host_sel_resp", false,-1, 0,0);
        tracep->declBus(c+458,"test_top u_bus device_sel_resp", false,-1, 1,0);
        tracep->declBus(c+537,"test_top u_bus unnamedblk1 host", false,-1, 31,0);
        tracep->declBus(c+538,"test_top u_bus unnamedblk2 device", false,-1, 31,0);
        tracep->declBus(c+538,"test_top u_bus unnamedblk3 device", false,-1, 31,0);
        tracep->declBus(c+539,"test_top u_bus unnamedblk4 host", false,-1, 31,0);
        tracep->declBit(c+540,"test_top console0 FlushOnChar", false,-1);
        tracep->declBit(c+454,"test_top console0 clk_i", false,-1);
        tracep->declBit(c+453,"test_top console0 rst_i", false,-1);
        tracep->declBit(c+251,"test_top console0 req_i", false,-1);
        tracep->declBit(c+252,"test_top console0 we_i", false,-1);
        tracep->declBus(c+253,"test_top console0 addr_i", false,-1, 31,0);
        tracep->declBus(c+254,"test_top console0 wdata_i", false,-1, 31,0);
        tracep->declBit(c+23,"test_top console0 halt_o", false,-1);
        tracep->declBus(c+541,"test_top console0 CHAR_OUT_ADDR", false,-1, 7,0);
        tracep->declBus(c+542,"test_top console0 SIM_CTRL_ADDR", false,-1, 7,0);
        tracep->declBus(c+255,"test_top console0 ctrl_addr", false,-1, 7,0);
        tracep->declBus(c+29,"test_top console0 sim_finish", false,-1, 2,0);
        tracep->declBus(c+30,"test_top console0 log_fd", false,-1, 31,0);
        tracep->declBit(c+454,"test_top timer0 clk_i", false,-1);
        tracep->declBit(c+453,"test_top timer0 rst_i", false,-1);
        tracep->declBit(c+256,"test_top timer0 req_i", false,-1);
        tracep->declBit(c+257,"test_top timer0 we_i", false,-1);
        tracep->declBus(c+258,"test_top timer0 addr_i", false,-1, 31,0);
        tracep->declBus(c+259,"test_top timer0 time_set_i", false,-1, 31,0);
        tracep->declBus(c+31,"test_top timer0 second_count", false,-1, 31,0);
        tracep->declBus(c+32,"test_top timer0 clk_count", false,-1, 31,0);
        tracep->declBit(c+454,"test_top clint0 clk_i", false,-1);
        tracep->declBit(c+453,"test_top clint0 rst_i", false,-1);
        tracep->declBit(c+260,"test_top clint0 req_i", false,-1);
        tracep->declBit(c+261,"test_top clint0 we_i", false,-1);
        tracep->declBus(c+262,"test_top clint0 addr_i", false,-1, 31,0);
        tracep->declBus(c+263,"test_top clint0 data_i", false,-1, 31,0);
        tracep->declBus(c+264,"test_top clint0 data_o", false,-1, 31,0);
        tracep->declBit(c+27,"test_top clint0 timer_irq_o", false,-1);
        tracep->declBit(c+28,"test_top clint0 software_irq_o", false,-1);
        tracep->declBus(c+543,"test_top clint0 MTIMECMP_BASE", false,-1, 15,0);
        tracep->declBus(c+544,"test_top clint0 MSIP_BASE", false,-1, 15,0);
        tracep->declBus(c+545,"test_top clint0 TIME_ADDR", false,-1, 15,0);
        tracep->declBus(c+265,"test_top clint0 raddr", false,-1, 15,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+33+i*1,"test_top clint0 mtime_mem", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+35+i*1,"test_top clint0 mtimecmp_mem", true,(i+0), 31,0);}}
        tracep->declBus(c+37,"test_top clint0 msip_mem", false,-1, 31,0);
        tracep->declQuad(c+38,"test_top clint0 mtime", false,-1, 63,0);
        tracep->declQuad(c+40,"test_top clint0 mtimecmp", false,-1, 63,0);
        tracep->declQuad(c+42,"test_top clint0 msip", false,-1, 63,0);
        tracep->declBit(c+44,"test_top clint0 carry", false,-1);
        tracep->declBit(c+266,"test_top clint0 is_time_addr0", false,-1);
        tracep->declBit(c+267,"test_top clint0 is_time_addr1", false,-1);
        tracep->declBit(c+268,"test_top clint0 is_mtimecmp_addr0", false,-1);
        tracep->declBit(c+269,"test_top clint0 is_mtimecmp_addr1", false,-1);
        tracep->declBit(c+270,"test_top clint0 is_msip_addr", false,-1);
        tracep->declQuad(c+45,"test_top clint0 time_interval", false,-1, 63,0);
        tracep->declBit(c+47,"test_top clint0 is_timeout", false,-1);
        tracep->declBit(c+48,"test_top clint0 is_mtimecmp_nonzero", false,-1);
        tracep->declBit(c+453,"test_top core_top0 rst_i", false,-1);
        tracep->declBit(c+454,"test_top core_top0 clk_i", false,-1);
        tracep->declBit(c+271,"test_top core_top0 ram_we_o", false,-1);
        tracep->declBit(c+459,"test_top core_top0 ram_request_o", false,-1);
        tracep->declBus(c+26,"test_top core_top0 ram_op_o", false,-1, 3,0);
        tracep->declBus(c+272,"test_top core_top0 ram_addr_o", false,-1, 31,0);
        tracep->declBus(c+199,"test_top core_top0 ram_wdata_o", false,-1, 31,0);
        tracep->declBus(c+273,"test_top core_top0 ram_rdata_i", false,-1, 31,0);
        tracep->declBit(c+27,"test_top core_top0 timer_irq_i", false,-1);
        tracep->declBit(c+28,"test_top core_top0 software_irq_i", false,-1);
        tracep->declBus(c+24,"test_top core_top0 pc_wire_o", false,-1, 31,0);
        tracep->declBit(c+25,"test_top core_top0 ce_wire_o", false,-1);
        tracep->declBus(c+456,"test_top core_top0 if_inst_i", false,-1, 31,0);
        tracep->declBus(c+24,"test_top core_top0 pc_wire", false,-1, 31,0);
        tracep->declBit(c+25,"test_top core_top0 ce_wire", false,-1);
        tracep->declBus(c+274,"test_top core_top0 ctrl_stall_o", false,-1, 5,0);
        tracep->declBit(c+275,"test_top core_top0 ctrl_flush_jump_o", false,-1);
        tracep->declBus(c+200,"test_top core_top0 ctrl_new_pc_o", false,-1, 31,0);
        tracep->declBus(c+24,"test_top core_top0 if_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+49,"test_top core_top0 if_id_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+50,"test_top core_top0 if_id_inst_o", false,-1, 31,0);
        tracep->declBus(c+276,"test_top core_top0 id_inst_o", false,-1, 31,0);
        tracep->declBus(c+277,"test_top core_top0 id_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+460,"test_top core_top0 id_op1_o", false,-1, 31,0);
        tracep->declBus(c+461,"test_top core_top0 id_op2_o", false,-1, 31,0);
        tracep->declBit(c+278,"test_top core_top0 id_reg_we_o", false,-1);
        tracep->declBus(c+279,"test_top core_top0 id_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+280,"test_top core_top0 id_reg1_addr_o", false,-1, 4,0);
        tracep->declBus(c+281,"test_top core_top0 id_reg2_addr_o", false,-1, 4,0);
        tracep->declBit(c+282,"test_top core_top0 id_reg1_re_o", false,-1);
        tracep->declBit(c+283,"test_top core_top0 id_reg2_re_o", false,-1);
        tracep->declBit(c+51,"test_top core_top0 id_pipe_ctrl_stallreq_o", false,-1);
        tracep->declBus(c+284,"test_top core_top0 reg1_data_o", false,-1, 31,0);
        tracep->declBus(c+285,"test_top core_top0 reg2_data_o", false,-1, 31,0);
        tracep->declBus(c+52,"test_top core_top0 id_exe_op1_o", false,-1, 31,0);
        tracep->declBus(c+53,"test_top core_top0 id_exe_op2_o", false,-1, 31,0);
        tracep->declBit(c+54,"test_top core_top0 id_exe_reg_we_o", false,-1);
        tracep->declBus(c+55,"test_top core_top0 id_exe_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+56,"test_top core_top0 id_exe_inst_o", false,-1, 31,0);
        tracep->declBus(c+57,"test_top core_top0 id_exe_inst_addr_o", false,-1, 31,0);
        tracep->declBit(c+58,"test_top core_top0 id_exe_id_inst_is_load_o", false,-1);
        tracep->declBus(c+59,"test_top core_top0 id_exe_id_rd_o", false,-1, 4,0);
        tracep->declBus(c+286,"test_top core_top0 exe_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+287,"test_top core_top0 exe_reg_we_o", false,-1);
        tracep->declBus(c+288,"test_top core_top0 exe_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+289,"test_top core_top0 exe_mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+290,"test_top core_top0 exe_mem_data_o", false,-1, 31,0);
        tracep->declBit(c+291,"test_top core_top0 exe_mem_we_o", false,-1);
        tracep->declBus(c+292,"test_top core_top0 exe_mem_op_o", false,-1, 3,0);
        tracep->declBit(c+293,"test_top core_top0 exe_pipe_ctrl_stallreq_o", false,-1);
        tracep->declBit(c+275,"test_top core_top0 exe_pipe_ctrl_jump_enable_o", false,-1);
        tracep->declBus(c+294,"test_top core_top0 exe_pipe_ctrl_jump_addr_o", false,-1, 31,0);
        tracep->declBus(c+295,"test_top core_top0 exe_csr_raddr", false,-1, 11,0);
        tracep->declBus(c+60,"test_top core_top0 exe_mem_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+61,"test_top core_top0 exe_mem_reg_we_o", false,-1);
        tracep->declBus(c+62,"test_top core_top0 exe_mem_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+63,"test_top core_top0 exe_mem_mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+64,"test_top core_top0 exe_mem_mem_data_o", false,-1, 31,0);
        tracep->declBit(c+65,"test_top core_top0 exe_mem_mem_we_o", false,-1);
        tracep->declBus(c+26,"test_top core_top0 exe_mem_mem_op_o", false,-1, 3,0);
        tracep->declBus(c+296,"test_top core_top0 mem_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+297,"test_top core_top0 mem_reg_we_o", false,-1);
        tracep->declBus(c+298,"test_top core_top0 mem_reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+546,"test_top core_top0 mem_halt_o", false,-1);
        tracep->declBus(c+66,"test_top core_top0 mem_wb_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+67,"test_top core_top0 mem_wb_reg_we_o", false,-1);
        tracep->declBus(c+68,"test_top core_top0 mem_wb_reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+299,"test_top core_top0 exe_exe_mem_we", false,-1);
        tracep->declBus(c+300,"test_top core_top0 exe_exe_mem_waddr", false,-1, 11,0);
        tracep->declBus(c+301,"test_top core_top0 exe_exe_mem_wdata", false,-1, 31,0);
        tracep->declBit(c+69,"test_top core_top0 exe_mem_mem_we", false,-1);
        tracep->declBus(c+70,"test_top core_top0 exe_mem_mem_waddr", false,-1, 11,0);
        tracep->declBus(c+71,"test_top core_top0 exe_mem_mem_wdata", false,-1, 31,0);
        tracep->declBit(c+302,"test_top core_top0 mem_wb_we", false,-1);
        tracep->declBus(c+303,"test_top core_top0 mem_wb_waddr", false,-1, 11,0);
        tracep->declBus(c+304,"test_top core_top0 mem_wb_wdata", false,-1, 31,0);
        tracep->declBit(c+72,"test_top core_top0 wb_csr_we", false,-1);
        tracep->declBus(c+73,"test_top core_top0 wb_csr_waddr", false,-1, 11,0);
        tracep->declBus(c+74,"test_top core_top0 wb_csr_wdata", false,-1, 31,0);
        tracep->declBit(c+547,"test_top core_top0 wb_csr_instret_incr", false,-1);
        tracep->declBus(c+305,"test_top core_top0 csr_exe_rdata", false,-1, 31,0);
        tracep->declBus(c+306,"test_top core_top0 id_id_exe_exception", false,-1, 31,0);
        tracep->declBus(c+75,"test_top core_top0 id_exe_exe_exception", false,-1, 31,0);
        tracep->declBus(c+462,"test_top core_top0 exe_exe_mem_exception", false,-1, 31,0);
        tracep->declBus(c+76,"test_top core_top0 exe_mem_mem_exception", false,-1, 31,0);
        tracep->declBus(c+548,"test_top core_top0 mem_interrupt_ctrl_exception", false,-1, 31,0);
        tracep->declBus(c+463,"test_top core_top0 exe_exe_mem_inst_addr", false,-1, 31,0);
        tracep->declBus(c+77,"test_top core_top0 exe_mem_mem_inst_addr", false,-1, 31,0);
        tracep->declBus(c+307,"test_top core_top0 mem_interrupt_ctrl_inst_addr", false,-1, 31,0);
        tracep->declBit(c+549,"test_top core_top0 mstatus_ie", false,-1);
        tracep->declBit(c+550,"test_top core_top0 mie_external", false,-1);
        tracep->declBit(c+551,"test_top core_top0 mie_timer", false,-1);
        tracep->declBit(c+552,"test_top core_top0 mie_software", false,-1);
        tracep->declBit(c+553,"test_top core_top0 mip_external", false,-1);
        tracep->declBit(c+554,"test_top core_top0 mip_timer", false,-1);
        tracep->declBit(c+555,"test_top core_top0 mip_software", false,-1);
        tracep->declBus(c+556,"test_top core_top0 mtvec", false,-1, 31,0);
        tracep->declBus(c+557,"test_top core_top0 csr_interrupt_ctrl_mepc", false,-1, 31,0);
        tracep->declBus(c+308,"test_top core_top0 interrupt_ctrl_csr_mepc", false,-1, 31,0);
        tracep->declBit(c+78,"test_top core_top0 interrupt_type", false,-1);
        tracep->declBit(c+79,"test_top core_top0 cause_we", false,-1);
        tracep->declBus(c+80,"test_top core_top0 cause", false,-1, 3,0);
        tracep->declBit(c+81,"test_top core_top0 epc_we", false,-1);
        tracep->declBit(c+558,"test_top core_top0 mepc", false,-1);
        tracep->declBit(c+82,"test_top core_top0 mstatus_ie_clear", false,-1);
        tracep->declBit(c+83,"test_top core_top0 mstatus_ie_set", false,-1);
        tracep->declBit(c+84,"test_top core_top0 flush_int", false,-1);
        tracep->declBit(c+84,"test_top core_top0 interrupt_ctrl_pipe_ctrl_int_enable", false,-1);
        tracep->declBus(c+85,"test_top core_top0 isr_addr", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 ctrl0 rst_i", false,-1);
        tracep->declBit(c+51,"test_top core_top0 ctrl0 stallreq_from_id_i", false,-1);
        tracep->declBit(c+293,"test_top core_top0 ctrl0 stallreq_from_exe_i", false,-1);
        tracep->declBit(c+275,"test_top core_top0 ctrl0 jump_enable_i", false,-1);
        tracep->declBit(c+84,"test_top core_top0 ctrl0 int_enable_i", false,-1);
        tracep->declBus(c+294,"test_top core_top0 ctrl0 jump_addr_i", false,-1, 31,0);
        tracep->declBus(c+85,"test_top core_top0 ctrl0 isr_addr_i", false,-1, 31,0);
        tracep->declBus(c+274,"test_top core_top0 ctrl0 stall_o", false,-1, 5,0);
        tracep->declBit(c+275,"test_top core_top0 ctrl0 flush_jump_o", false,-1);
        tracep->declBit(c+84,"test_top core_top0 ctrl0 flush_int_o", false,-1);
        tracep->declBus(c+200,"test_top core_top0 ctrl0 new_pc_o", false,-1, 31,0);
        tracep->declBit(c+454,"test_top core_top0 pc_reg0 clk_i", false,-1);
        tracep->declBit(c+453,"test_top core_top0 pc_reg0 rst_i", false,-1);
        tracep->declBus(c+274,"test_top core_top0 pc_reg0 stall_i", false,-1, 5,0);
        tracep->declBit(c+275,"test_top core_top0 pc_reg0 flush_jump_i", false,-1);
        tracep->declBit(c+84,"test_top core_top0 pc_reg0 flush_int_i", false,-1);
        tracep->declBus(c+200,"test_top core_top0 pc_reg0 new_pc_i", false,-1, 31,0);
        tracep->declBus(c+24,"test_top core_top0 pc_reg0 pc_o", false,-1, 31,0);
        tracep->declBit(c+25,"test_top core_top0 pc_reg0 ce_o", false,-1);
        tracep->declBit(c+454,"test_top core_top0 if_id0 clk_i", false,-1);
        tracep->declBit(c+453,"test_top core_top0 if_id0 rst_i", false,-1);
        tracep->declBus(c+274,"test_top core_top0 if_id0 stall_i", false,-1, 5,0);
        tracep->declBit(c+275,"test_top core_top0 if_id0 flush_jump_i", false,-1);
        tracep->declBit(c+84,"test_top core_top0 if_id0 flush_int_i", false,-1);
        tracep->declBus(c+24,"test_top core_top0 if_id0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+456,"test_top core_top0 if_id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+49,"test_top core_top0 if_id0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+50,"test_top core_top0 if_id0 inst_o", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 id0 rst_i", false,-1);
        tracep->declBus(c+49,"test_top core_top0 id0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+50,"test_top core_top0 id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+284,"test_top core_top0 id0 reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+285,"test_top core_top0 id0 reg2_rdata_i", false,-1, 31,0);
        tracep->declBit(c+58,"test_top core_top0 id0 pre_inst_is_load_i", false,-1);
        tracep->declBus(c+59,"test_top core_top0 id0 exe_rd_i", false,-1, 4,0);
        tracep->declBus(c+286,"test_top core_top0 id0 exe_reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+287,"test_top core_top0 id0 exe_reg_we_i", false,-1);
        tracep->declBus(c+288,"test_top core_top0 id0 exe_reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+296,"test_top core_top0 id0 mem_reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+297,"test_top core_top0 id0 mem_reg_we_i", false,-1);
        tracep->declBus(c+298,"test_top core_top0 id0 mem_reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+280,"test_top core_top0 id0 reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+281,"test_top core_top0 id0 reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+282,"test_top core_top0 id0 reg1_re_o", false,-1);
        tracep->declBit(c+283,"test_top core_top0 id0 reg2_re_o", false,-1);
        tracep->declBus(c+276,"test_top core_top0 id0 inst_o", false,-1, 31,0);
        tracep->declBus(c+277,"test_top core_top0 id0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+460,"test_top core_top0 id0 op1_o", false,-1, 31,0);
        tracep->declBus(c+461,"test_top core_top0 id0 op2_o", false,-1, 31,0);
        tracep->declBit(c+278,"test_top core_top0 id0 reg_we_o", false,-1);
        tracep->declBus(c+279,"test_top core_top0 id0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+51,"test_top core_top0 id0 stallreq_o", false,-1);
        tracep->declBus(c+306,"test_top core_top0 id0 exception_o", false,-1, 31,0);
        tracep->declBus(c+309,"test_top core_top0 id0 op1_o_final", false,-1, 31,0);
        tracep->declBus(c+310,"test_top core_top0 id0 op2_o_final", false,-1, 31,0);
        tracep->declBit(c+311,"test_top core_top0 id0 except_mret", false,-1);
        tracep->declBit(c+312,"test_top core_top0 id0 except_ecall", false,-1);
        tracep->declBus(c+86,"test_top core_top0 id0 opcode", false,-1, 6,0);
        tracep->declBus(c+87,"test_top core_top0 id0 rd", false,-1, 4,0);
        tracep->declBus(c+88,"test_top core_top0 id0 funct3", false,-1, 2,0);
        tracep->declBus(c+89,"test_top core_top0 id0 funct7", false,-1, 6,0);
        tracep->declBus(c+90,"test_top core_top0 id0 rs1", false,-1, 4,0);
        tracep->declBus(c+91,"test_top core_top0 id0 rs2", false,-1, 4,0);
        tracep->declBus(c+90,"test_top core_top0 id0 i_reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+559,"test_top core_top0 id0 i_reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+560,"test_top core_top0 id0 i_reg1_re_o", false,-1);
        tracep->declBit(c+561,"test_top core_top0 id0 i_reg2_re_o", false,-1);
        tracep->declBus(c+284,"test_top core_top0 id0 i_op1_o", false,-1, 31,0);
        tracep->declBus(c+92,"test_top core_top0 id0 i_op2_o", false,-1, 31,0);
        tracep->declBit(c+560,"test_top core_top0 id0 i_reg_we_o", false,-1);
        tracep->declBus(c+93,"test_top core_top0 id0 i_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+90,"test_top core_top0 id0 r_reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+91,"test_top core_top0 id0 r_reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+560,"test_top core_top0 id0 r_reg1_re_o", false,-1);
        tracep->declBit(c+560,"test_top core_top0 id0 r_reg2_re_o", false,-1);
        tracep->declBus(c+284,"test_top core_top0 id0 r_op1_o", false,-1, 31,0);
        tracep->declBus(c+285,"test_top core_top0 id0 r_op2_o", false,-1, 31,0);
        tracep->declBit(c+560,"test_top core_top0 id0 r_reg_we_o", false,-1);
        tracep->declBus(c+93,"test_top core_top0 id0 r_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+51,"test_top core_top0 id0 is_load_hazard", false,-1);
        tracep->declBus(c+50,"test_top core_top0 id0 inst_type_i inst_i", false,-1, 31,0);
        tracep->declBus(c+284,"test_top core_top0 id0 inst_type_i reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+285,"test_top core_top0 id0 inst_type_i reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+90,"test_top core_top0 id0 inst_type_i reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+559,"test_top core_top0 id0 inst_type_i reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+560,"test_top core_top0 id0 inst_type_i reg1_re_o", false,-1);
        tracep->declBit(c+561,"test_top core_top0 id0 inst_type_i reg2_re_o", false,-1);
        tracep->declBus(c+284,"test_top core_top0 id0 inst_type_i op1_o", false,-1, 31,0);
        tracep->declBus(c+92,"test_top core_top0 id0 inst_type_i op2_o", false,-1, 31,0);
        tracep->declBit(c+560,"test_top core_top0 id0 inst_type_i reg_we_o", false,-1);
        tracep->declBus(c+93,"test_top core_top0 id0 inst_type_i reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+87,"test_top core_top0 id0 inst_type_i rd", false,-1, 4,0);
        tracep->declBus(c+88,"test_top core_top0 id0 inst_type_i funct3", false,-1, 2,0);
        tracep->declBus(c+90,"test_top core_top0 id0 inst_type_i rs1", false,-1, 4,0);
        tracep->declBus(c+50,"test_top core_top0 id0 inst_type_r inst_i", false,-1, 31,0);
        tracep->declBus(c+284,"test_top core_top0 id0 inst_type_r reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+285,"test_top core_top0 id0 inst_type_r reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+90,"test_top core_top0 id0 inst_type_r reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+91,"test_top core_top0 id0 inst_type_r reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+560,"test_top core_top0 id0 inst_type_r reg1_re_o", false,-1);
        tracep->declBit(c+560,"test_top core_top0 id0 inst_type_r reg2_re_o", false,-1);
        tracep->declBus(c+284,"test_top core_top0 id0 inst_type_r op1_o", false,-1, 31,0);
        tracep->declBus(c+285,"test_top core_top0 id0 inst_type_r op2_o", false,-1, 31,0);
        tracep->declBit(c+560,"test_top core_top0 id0 inst_type_r reg_we_o", false,-1);
        tracep->declBus(c+93,"test_top core_top0 id0 inst_type_r reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+87,"test_top core_top0 id0 inst_type_r rd", false,-1, 4,0);
        tracep->declBus(c+88,"test_top core_top0 id0 inst_type_r funct3", false,-1, 2,0);
        tracep->declBus(c+90,"test_top core_top0 id0 inst_type_r rs1", false,-1, 4,0);
        tracep->declBus(c+91,"test_top core_top0 id0 inst_type_r rs2", false,-1, 4,0);
        tracep->declBit(c+453,"test_top core_top0 id_exe0 rst_i", false,-1);
        tracep->declBit(c+454,"test_top core_top0 id_exe0 clk_i", false,-1);
        tracep->declBus(c+274,"test_top core_top0 id_exe0 stall_i", false,-1, 5,0);
        tracep->declBit(c+275,"test_top core_top0 id_exe0 flush_jump_i", false,-1);
        tracep->declBit(c+84,"test_top core_top0 id_exe0 flush_int_i", false,-1);
        tracep->declBus(c+460,"test_top core_top0 id_exe0 op1_i", false,-1, 31,0);
        tracep->declBus(c+461,"test_top core_top0 id_exe0 op2_i", false,-1, 31,0);
        tracep->declBit(c+278,"test_top core_top0 id_exe0 reg_we_i", false,-1);
        tracep->declBus(c+279,"test_top core_top0 id_exe0 reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+276,"test_top core_top0 id_exe0 inst_i", false,-1, 31,0);
        tracep->declBus(c+277,"test_top core_top0 id_exe0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+306,"test_top core_top0 id_exe0 exception_i", false,-1, 31,0);
        tracep->declBus(c+52,"test_top core_top0 id_exe0 op1_o", false,-1, 31,0);
        tracep->declBus(c+53,"test_top core_top0 id_exe0 op2_o", false,-1, 31,0);
        tracep->declBit(c+54,"test_top core_top0 id_exe0 reg_we_o", false,-1);
        tracep->declBus(c+55,"test_top core_top0 id_exe0 reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+56,"test_top core_top0 id_exe0 inst_o", false,-1, 31,0);
        tracep->declBus(c+57,"test_top core_top0 id_exe0 inst_addr_o", false,-1, 31,0);
        tracep->declBit(c+58,"test_top core_top0 id_exe0 inst_is_load_o", false,-1);
        tracep->declBus(c+59,"test_top core_top0 id_exe0 rd_o", false,-1, 4,0);
        tracep->declBus(c+75,"test_top core_top0 id_exe0 exception_o", false,-1, 31,0);
        tracep->declBus(c+313,"test_top core_top0 id_exe0 opcode", false,-1, 6,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 rst_i", false,-1);
        tracep->declBit(c+454,"test_top core_top0 exe0 clk_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 op1_i", false,-1, 31,0);
        tracep->declBus(c+53,"test_top core_top0 exe0 op2_i", false,-1, 31,0);
        tracep->declBit(c+54,"test_top core_top0 exe0 reg_we_i", false,-1);
        tracep->declBus(c+55,"test_top core_top0 exe0 reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+56,"test_top core_top0 exe0 inst_i", false,-1, 31,0);
        tracep->declBus(c+57,"test_top core_top0 exe0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+75,"test_top core_top0 exe0 exception_i", false,-1, 31,0);
        tracep->declBus(c+463,"test_top core_top0 exe0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+286,"test_top core_top0 exe0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+287,"test_top core_top0 exe0 reg_we_o", false,-1);
        tracep->declBus(c+288,"test_top core_top0 exe0 reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+289,"test_top core_top0 exe0 mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+290,"test_top core_top0 exe0 mem_data_o", false,-1, 31,0);
        tracep->declBit(c+291,"test_top core_top0 exe0 mem_we_o", false,-1);
        tracep->declBus(c+292,"test_top core_top0 exe0 mem_op_o", false,-1, 3,0);
        tracep->declBit(c+293,"test_top core_top0 exe0 stallreq_o", false,-1);
        tracep->declBit(c+275,"test_top core_top0 exe0 jump_enable_o", false,-1);
        tracep->declBus(c+294,"test_top core_top0 exe0 jump_addr_o", false,-1, 31,0);
        tracep->declBus(c+305,"test_top core_top0 exe0 csr_rdata_i", false,-1, 31,0);
        tracep->declBus(c+295,"test_top core_top0 exe0 csr_raddr_o", false,-1, 11,0);
        tracep->declBus(c+301,"test_top core_top0 exe0 csr_wdata_o", false,-1, 31,0);
        tracep->declBus(c+300,"test_top core_top0 exe0 csr_waddr_o", false,-1, 11,0);
        tracep->declBit(c+299,"test_top core_top0 exe0 csr_we_o", false,-1);
        tracep->declBus(c+462,"test_top core_top0 exe0 exception_o", false,-1, 31,0);
        tracep->declBit(c+302,"test_top core_top0 exe0 mem_exe_csr_we_i", false,-1);
        tracep->declBus(c+303,"test_top core_top0 exe0 mem_exe_csr_waddr_i", false,-1, 11,0);
        tracep->declBus(c+304,"test_top core_top0 exe0 mem_exe_csr_wdata_i", false,-1, 31,0);
        tracep->declBus(c+94,"test_top core_top0 exe0 opcode", false,-1, 6,0);
        tracep->declBus(c+95,"test_top core_top0 exe0 funct3", false,-1, 2,0);
        tracep->declBus(c+96,"test_top core_top0 exe0 funct7", false,-1, 6,0);
        tracep->declBus(c+97,"test_top core_top0 exe0 shamt", false,-1, 4,0);
        tracep->declBit(c+98,"test_top core_top0 exe0 direct", false,-1);
        tracep->declBit(c+99,"test_top core_top0 exe0 arithmetic", false,-1);
        tracep->declBus(c+464,"test_top core_top0 exe0 shift_result_type_i", false,-1, 31,0);
        tracep->declBus(c+465,"test_top core_top0 exe0 shift_result_type_r", false,-1, 31,0);
        tracep->declBus(c+100,"test_top core_top0 exe0 b_type_offset", false,-1, 31,0);
        tracep->declBus(c+101,"test_top core_top0 exe0 jal_type_offset", false,-1, 31,0);
        tracep->declBus(c+102,"test_top core_top0 exe0 store_addr_offset", false,-1, 31,0);
        tracep->declBus(c+103,"test_top core_top0 exe0 load_addr_offset", false,-1, 31,0);
        tracep->declBus(c+314,"test_top core_top0 exe0 compare_sub_type_i", false,-1, 31,0);
        tracep->declBus(c+562,"test_top core_top0 exe0 compare_sub_type_r", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 r_type_add_or_sub", false,-1);
        tracep->declBit(c+98,"test_top core_top0 exe0 r_type_sl_or_sr", false,-1);
        tracep->declBit(c+99,"test_top core_top0 exe0 r_type_arithmetic", false,-1);
        tracep->declBit(c+104,"test_top core_top0 exe0 r_or_m_type", false,-1);
        tracep->declBus(c+563,"test_top core_top0 exe0 m_d_op", false,-1, 1,0);
        tracep->declBit(c+564,"test_top core_top0 exe0 rs1_signed_i", false,-1);
        tracep->declBit(c+565,"test_top core_top0 exe0 rs2_signed_i", false,-1);
        tracep->declBus(c+105,"test_top core_top0 exe0 m_d_high_result", false,-1, 31,0);
        tracep->declBus(c+106,"test_top core_top0 exe0 m_d_low_result", false,-1, 31,0);
        tracep->declBit(c+107,"test_top core_top0 exe0 m_d_ready", false,-1);
        tracep->declBus(c+108,"test_top core_top0 exe0 m_d_count", false,-1, 5,0);
        tracep->declBus(c+109,"test_top core_top0 exe0 csr_addr", false,-1, 31,20);
        tracep->declBus(c+315,"test_top core_top0 exe0 csr_rdata", false,-1, 31,0);
        tracep->declBit(c+454,"test_top core_top0 exe0 m_d clk_i", false,-1);
        tracep->declBit(c+104,"test_top core_top0 exe0 m_d mul_div_req_i", false,-1);
        tracep->declBus(c+95,"test_top core_top0 exe0 m_d m_d_op", false,-1, 2,0);
        tracep->declBus(c+94,"test_top core_top0 exe0 m_d op", false,-1, 6,0);
        tracep->declBus(c+52,"test_top core_top0 exe0 m_d rs1", false,-1, 31,0);
        tracep->declBit(c+564,"test_top core_top0 exe0 m_d rs1_signed", false,-1);
        tracep->declBus(c+53,"test_top core_top0 exe0 m_d rs2", false,-1, 31,0);
        tracep->declBit(c+565,"test_top core_top0 exe0 m_d rs2_signed", false,-1);
        tracep->declBus(c+105,"test_top core_top0 exe0 m_d high", false,-1, 31,0);
        tracep->declBus(c+106,"test_top core_top0 exe0 m_d low", false,-1, 31,0);
        tracep->declBit(c+107,"test_top core_top0 exe0 m_d ready", false,-1);
        tracep->declBus(c+108,"test_top core_top0 exe0 m_d count", false,-1, 5,0);
        tracep->declArray(c+110,"test_top core_top0 exe0 m_d long_temp", false,-1, 64,0);
        tracep->declBus(c+113,"test_top core_top0 exe0 m_d rs1_temp", false,-1, 31,0);
        tracep->declBus(c+114,"test_top core_top0 exe0 m_d rs2_temp", false,-1, 31,0);
        tracep->declBit(c+115,"test_top core_top0 exe0 m_d rs1_is_neg", false,-1);
        tracep->declBit(c+116,"test_top core_top0 exe0 m_d rs2_is_neg", false,-1);
        tracep->declBit(c+117,"test_top core_top0 exe0 m_d m_or_d", false,-1);
        tracep->declBit(c+453,"test_top core_top0 exe_mem0 rst_i", false,-1);
        tracep->declBit(c+454,"test_top core_top0 exe_mem0 clk_i", false,-1);
        tracep->declBus(c+274,"test_top core_top0 exe_mem0 stall_i", false,-1, 5,0);
        tracep->declBit(c+84,"test_top core_top0 exe_mem0 flush_int_i", false,-1);
        tracep->declBus(c+463,"test_top core_top0 exe_mem0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+286,"test_top core_top0 exe_mem0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+287,"test_top core_top0 exe_mem0 reg_we_i", false,-1);
        tracep->declBus(c+288,"test_top core_top0 exe_mem0 reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+289,"test_top core_top0 exe_mem0 mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+290,"test_top core_top0 exe_mem0 mem_data_i", false,-1, 31,0);
        tracep->declBit(c+291,"test_top core_top0 exe_mem0 mem_we_i", false,-1);
        tracep->declBus(c+292,"test_top core_top0 exe_mem0 mem_op_i", false,-1, 3,0);
        tracep->declBus(c+462,"test_top core_top0 exe_mem0 exception_i", false,-1, 31,0);
        tracep->declBus(c+60,"test_top core_top0 exe_mem0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+61,"test_top core_top0 exe_mem0 reg_we_o", false,-1);
        tracep->declBus(c+62,"test_top core_top0 exe_mem0 reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+77,"test_top core_top0 exe_mem0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+63,"test_top core_top0 exe_mem0 mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+64,"test_top core_top0 exe_mem0 mem_data_o", false,-1, 31,0);
        tracep->declBit(c+65,"test_top core_top0 exe_mem0 mem_we_o", false,-1);
        tracep->declBus(c+26,"test_top core_top0 exe_mem0 mem_op_o", false,-1, 3,0);
        tracep->declBus(c+76,"test_top core_top0 exe_mem0 exception_o", false,-1, 31,0);
        tracep->declBit(c+299,"test_top core_top0 exe_mem0 csr_we_i", false,-1);
        tracep->declBus(c+300,"test_top core_top0 exe_mem0 csr_waddr_i", false,-1, 11,0);
        tracep->declBus(c+301,"test_top core_top0 exe_mem0 csr_wdata_i", false,-1, 31,0);
        tracep->declBit(c+69,"test_top core_top0 exe_mem0 csr_we_o", false,-1);
        tracep->declBus(c+70,"test_top core_top0 exe_mem0 csr_waddr_o", false,-1, 11,0);
        tracep->declBus(c+71,"test_top core_top0 exe_mem0 csr_wdata_o", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 mem0 rst_i", false,-1);
        tracep->declBit(c+454,"test_top core_top0 mem0 clk_i", false,-1);
        tracep->declBus(c+60,"test_top core_top0 mem0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+61,"test_top core_top0 mem0 reg_we_i", false,-1);
        tracep->declBus(c+62,"test_top core_top0 mem0 reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+77,"test_top core_top0 mem0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+63,"test_top core_top0 mem0 mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+64,"test_top core_top0 mem0 mem_data_i", false,-1, 31,0);
        tracep->declBit(c+65,"test_top core_top0 mem0 mem_we_i", false,-1);
        tracep->declBus(c+26,"test_top core_top0 mem0 mem_op_i", false,-1, 3,0);
        tracep->declBus(c+76,"test_top core_top0 mem0 exception_i", false,-1, 31,0);
        tracep->declBus(c+273,"test_top core_top0 mem0 ram_data_i", false,-1, 31,0);
        tracep->declBus(c+307,"test_top core_top0 mem0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+272,"test_top core_top0 mem0 ram_addr_o", false,-1, 31,0);
        tracep->declBus(c+199,"test_top core_top0 mem0 ram_data_o", false,-1, 31,0);
        tracep->declBit(c+271,"test_top core_top0 mem0 ram_w_request_o", false,-1);
        tracep->declBit(c+459,"test_top core_top0 mem0 ram_request_o", false,-1);
        tracep->declBus(c+26,"test_top core_top0 mem0 ram_op_o", false,-1, 3,0);
        tracep->declBus(c+296,"test_top core_top0 mem0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+297,"test_top core_top0 mem0 reg_we_o", false,-1);
        tracep->declBus(c+298,"test_top core_top0 mem0 reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+548,"test_top core_top0 mem0 exception_o", false,-1, 31,0);
        tracep->declBit(c+69,"test_top core_top0 mem0 csr_we_i", false,-1);
        tracep->declBus(c+70,"test_top core_top0 mem0 csr_waddr_i", false,-1, 11,0);
        tracep->declBus(c+71,"test_top core_top0 mem0 csr_wdata_i", false,-1, 31,0);
        tracep->declBit(c+302,"test_top core_top0 mem0 csr_we_o", false,-1);
        tracep->declBus(c+303,"test_top core_top0 mem0 csr_waddr_o", false,-1, 11,0);
        tracep->declBus(c+304,"test_top core_top0 mem0 csr_wdata_o", false,-1, 31,0);
        tracep->declBus(c+118,"test_top core_top0 mem0 ram_addr_offset", false,-1, 1,0);
        tracep->declBit(c+453,"test_top core_top0 mem_wb0 rst_i", false,-1);
        tracep->declBit(c+454,"test_top core_top0 mem_wb0 clk_i", false,-1);
        tracep->declBus(c+274,"test_top core_top0 mem_wb0 stall_i", false,-1, 5,0);
        tracep->declBit(c+84,"test_top core_top0 mem_wb0 flush_int_i", false,-1);
        tracep->declBus(c+296,"test_top core_top0 mem_wb0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+297,"test_top core_top0 mem_wb0 reg_we_i", false,-1);
        tracep->declBus(c+298,"test_top core_top0 mem_wb0 reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+66,"test_top core_top0 mem_wb0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+67,"test_top core_top0 mem_wb0 reg_we_o", false,-1);
        tracep->declBus(c+68,"test_top core_top0 mem_wb0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+302,"test_top core_top0 mem_wb0 csr_we_i", false,-1);
        tracep->declBus(c+303,"test_top core_top0 mem_wb0 csr_waddr_i", false,-1, 11,0);
        tracep->declBus(c+304,"test_top core_top0 mem_wb0 csr_wdata_i", false,-1, 31,0);
        tracep->declBit(c+72,"test_top core_top0 mem_wb0 csr_we_o", false,-1);
        tracep->declBus(c+73,"test_top core_top0 mem_wb0 csr_waddr_o", false,-1, 11,0);
        tracep->declBus(c+74,"test_top core_top0 mem_wb0 csr_wdata_o", false,-1, 31,0);
        tracep->declBit(c+454,"test_top core_top0 csr0 clk_i", false,-1);
        tracep->declBit(c+453,"test_top core_top0 csr0 rst_i", false,-1);
        tracep->declBus(c+295,"test_top core_top0 csr0 raddr_i", false,-1, 11,0);
        tracep->declBus(c+305,"test_top core_top0 csr0 rdata_o", false,-1, 31,0);
        tracep->declBit(c+72,"test_top core_top0 csr0 we_i", false,-1);
        tracep->declBus(c+73,"test_top core_top0 csr0 waddr_i", false,-1, 11,0);
        tracep->declBus(c+74,"test_top core_top0 csr0 wdata_i", false,-1, 31,0);
        tracep->declBit(c+547,"test_top core_top0 csr0 instret_incr_i", false,-1);
        tracep->declBit(c+27,"test_top core_top0 csr0 irq_timer_i", false,-1);
        tracep->declBit(c+28,"test_top core_top0 csr0 irq_software_i", false,-1);
        tracep->declBit(c+566,"test_top core_top0 csr0 irq_external_i", false,-1);
        tracep->declBit(c+549,"test_top core_top0 csr0 mstatus_ie_o", false,-1);
        tracep->declBit(c+550,"test_top core_top0 csr0 mie_external_o", false,-1);
        tracep->declBit(c+551,"test_top core_top0 csr0 mie_timer_o", false,-1);
        tracep->declBit(c+552,"test_top core_top0 csr0 mie_software_o", false,-1);
        tracep->declBit(c+553,"test_top core_top0 csr0 mip_external_o", false,-1);
        tracep->declBit(c+554,"test_top core_top0 csr0 mip_timer_o", false,-1);
        tracep->declBit(c+555,"test_top core_top0 csr0 mip_software_o", false,-1);
        tracep->declBus(c+556,"test_top core_top0 csr0 mtvec_o", false,-1, 31,0);
        tracep->declBus(c+557,"test_top core_top0 csr0 mepc_o", false,-1, 31,0);
        tracep->declBit(c+78,"test_top core_top0 csr0 interrupt_type_i", false,-1);
        tracep->declBit(c+79,"test_top core_top0 csr0 cause_we_i", false,-1);
        tracep->declBus(c+80,"test_top core_top0 csr0 cause_i", false,-1, 3,0);
        tracep->declBit(c+81,"test_top core_top0 csr0 epc_we_i", false,-1);
        tracep->declBus(c+308,"test_top core_top0 csr0 epc_i", false,-1, 31,0);
        tracep->declBit(c+82,"test_top core_top0 csr0 mstatus_ie_clear_i", false,-1);
        tracep->declBit(c+83,"test_top core_top0 csr0 mstatus_ie_set_i", false,-1);
        tracep->declBus(c+567,"test_top core_top0 csr0 CSR_MVENDORID_VALUE", false,-1, 31,0);
        tracep->declBus(c+568,"test_top core_top0 csr0 CSR_MARCHID_VALUE", false,-1, 31,0);
        tracep->declBus(c+567,"test_top core_top0 csr0 CSR_MIMPID_VALUE", false,-1, 31,0);
        tracep->declBus(c+567,"test_top core_top0 csr0 CSR_MHARTID_VALUE", false,-1, 31,0);
        tracep->declBus(c+569,"test_top core_top0 csr0 mxl", false,-1, 1,0);
        tracep->declBus(c+570,"test_top core_top0 csr0 mextensions", false,-1, 25,0);
        tracep->declBus(c+571,"test_top core_top0 csr0 misa", false,-1, 31,0);
        tracep->declQuad(c+119,"test_top core_top0 csr0 mcycle", false,-1, 63,0);
        tracep->declQuad(c+121,"test_top core_top0 csr0 minstret", false,-1, 63,0);
        tracep->declBus(c+123,"test_top core_top0 csr0 mstatus", false,-1, 31,0);
        tracep->declBit(c+124,"test_top core_top0 csr0 w_mstatus", false,-1);
        tracep->declBus(c+125,"test_top core_top0 csr0 mie", false,-1, 31,0);
        tracep->declBit(c+126,"test_top core_top0 csr0 w_mie", false,-1);
        tracep->declBus(c+127,"test_top core_top0 csr0 mtvec", false,-1, 31,0);
        tracep->declBit(c+128,"test_top core_top0 csr0 w_mtvec", false,-1);
        tracep->declBus(c+129,"test_top core_top0 csr0 mscratch", false,-1, 31,0);
        tracep->declBit(c+130,"test_top core_top0 csr0 w_mscratch", false,-1);
        tracep->declBus(c+131,"test_top core_top0 csr0 mepc", false,-1, 31,0);
        tracep->declBit(c+132,"test_top core_top0 csr0 w_mepc", false,-1);
        tracep->declBus(c+567,"test_top core_top0 csr0 mcause", false,-1, 31,0);
        tracep->declBus(c+567,"test_top core_top0 csr0 mip", false,-1, 31,0);
        tracep->declBus(c+133,"test_top core_top0 csr0 mtval", false,-1, 31,0);
        tracep->declBit(c+134,"test_top core_top0 csr0 w_mtval", false,-1);
        tracep->declBus(c+135,"test_top core_top0 csr0 medeleg", false,-1, 31,0);
        tracep->declBit(c+136,"test_top core_top0 csr0 w_medeleg", false,-1);
        tracep->declBus(c+137,"test_top core_top0 csr0 mideleg", false,-1, 31,0);
        tracep->declBit(c+138,"test_top core_top0 csr0 w_mideleg", false,-1);
        tracep->declBus(c+139,"test_top core_top0 csr0 pmpcfg0", false,-1, 31,0);
        tracep->declBit(c+140,"test_top core_top0 csr0 w_pmpcfg0", false,-1);
        tracep->declBus(c+141,"test_top core_top0 csr0 pmpaddr0", false,-1, 31,0);
        tracep->declBit(c+142,"test_top core_top0 csr0 w_pmpaddr0", false,-1);
        tracep->declBus(c+143,"test_top core_top0 csr0 stvec", false,-1, 31,0);
        tracep->declBit(c+144,"test_top core_top0 csr0 w_stvec", false,-1);
        tracep->declBus(c+145,"test_top core_top0 csr0 sscratch", false,-1, 31,0);
        tracep->declBit(c+146,"test_top core_top0 csr0 w_sscratch", false,-1);
        tracep->declBus(c+147,"test_top core_top0 csr0 sepc", false,-1, 31,0);
        tracep->declBit(c+148,"test_top core_top0 csr0 w_sepc", false,-1);
        tracep->declBus(c+149,"test_top core_top0 csr0 scause", false,-1, 31,0);
        tracep->declBit(c+150,"test_top core_top0 csr0 w_scause", false,-1);
        tracep->declBus(c+151,"test_top core_top0 csr0 satp", false,-1, 31,0);
        tracep->declBit(c+152,"test_top core_top0 csr0 w_satp", false,-1);
        tracep->declBit(c+454,"test_top core_top0 interrupt_ctrl0 clk_i", false,-1);
        tracep->declBit(c+453,"test_top core_top0 interrupt_ctrl0 rst_i", false,-1);
        tracep->declBus(c+548,"test_top core_top0 interrupt_ctrl0 exception_i", false,-1, 31,0);
        tracep->declBus(c+307,"test_top core_top0 interrupt_ctrl0 pc_i", false,-1, 31,0);
        tracep->declBit(c+549,"test_top core_top0 interrupt_ctrl0 mstatus_ie_i", false,-1);
        tracep->declBit(c+550,"test_top core_top0 interrupt_ctrl0 mie_external_i", false,-1);
        tracep->declBit(c+551,"test_top core_top0 interrupt_ctrl0 mie_timer_i", false,-1);
        tracep->declBit(c+552,"test_top core_top0 interrupt_ctrl0 mie_sw_i", false,-1);
        tracep->declBit(c+553,"test_top core_top0 interrupt_ctrl0 mip_external_i", false,-1);
        tracep->declBit(c+554,"test_top core_top0 interrupt_ctrl0 mip_timer_i", false,-1);
        tracep->declBit(c+555,"test_top core_top0 interrupt_ctrl0 mip_sw_i", false,-1);
        tracep->declBus(c+556,"test_top core_top0 interrupt_ctrl0 mtvec_i", false,-1, 31,0);
        tracep->declBus(c+557,"test_top core_top0 interrupt_ctrl0 epc_i", false,-1, 31,0);
        tracep->declBit(c+78,"test_top core_top0 interrupt_ctrl0 interrupt_type_o", false,-1);
        tracep->declBit(c+79,"test_top core_top0 interrupt_ctrl0 cause_we_o", false,-1);
        tracep->declBus(c+80,"test_top core_top0 interrupt_ctrl0 trap_cause_o", false,-1, 3,0);
        tracep->declBit(c+81,"test_top core_top0 interrupt_ctrl0 epc_we_o", false,-1);
        tracep->declBus(c+308,"test_top core_top0 interrupt_ctrl0 epc_o", false,-1, 31,0);
        tracep->declBit(c+82,"test_top core_top0 interrupt_ctrl0 mstatus_ie_clear_o", false,-1);
        tracep->declBit(c+83,"test_top core_top0 interrupt_ctrl0 mstatus_ie_set_o", false,-1);
        tracep->declBit(c+84,"test_top core_top0 interrupt_ctrl0 flush_o", false,-1);
        tracep->declBus(c+85,"test_top core_top0 interrupt_ctrl0 new_pc_o", false,-1, 31,0);
        tracep->declBus(c+153,"test_top core_top0 interrupt_ctrl0 S", false,-1, 3,0);
        tracep->declBus(c+154,"test_top core_top0 interrupt_ctrl0 S_nxt", false,-1, 3,0);
        tracep->declBus(c+572,"test_top core_top0 interrupt_ctrl0 RESET", false,-1, 3,0);
        tracep->declBus(c+573,"test_top core_top0 interrupt_ctrl0 OPERATING", false,-1, 3,0);
        tracep->declBus(c+574,"test_top core_top0 interrupt_ctrl0 TRAP_TAKEN", false,-1, 3,0);
        tracep->declBus(c+575,"test_top core_top0 interrupt_ctrl0 TRAP_RETURN", false,-1, 3,0);
        tracep->declBit(c+576,"test_top core_top0 interrupt_ctrl0 mret", false,-1);
        tracep->declBit(c+577,"test_top core_top0 interrupt_ctrl0 ecall", false,-1);
        tracep->declBit(c+17,"test_top core_top0 interrupt_ctrl0 eip", false,-1);
        tracep->declBit(c+18,"test_top core_top0 interrupt_ctrl0 tip", false,-1);
        tracep->declBit(c+19,"test_top core_top0 interrupt_ctrl0 sip", false,-1);
        tracep->declBit(c+20,"test_top core_top0 interrupt_ctrl0 ip", false,-1);
        tracep->declBit(c+21,"test_top core_top0 interrupt_ctrl0 trap_happened", false,-1);
        tracep->declBus(c+578,"test_top core_top0 interrupt_ctrl0 mtvec_mode", false,-1, 1,0);
        tracep->declBus(c+579,"test_top core_top0 interrupt_ctrl0 mtvec_base", false,-1, 29,0);
        tracep->declBus(c+155,"test_top core_top0 interrupt_ctrl0 trap_mux_out", false,-1, 31,0);
        tracep->declBus(c+156,"test_top core_top0 interrupt_ctrl0 vec_mux_out", false,-1, 31,0);
        tracep->declBus(c+157,"test_top core_top0 interrupt_ctrl0 base_offset", false,-1, 31,0);
        tracep->declBit(c+158,"test_top core_top0 interrupt_ctrl0 exception", false,-1);
        tracep->declBit(c+454,"test_top dpram0 clk_i", false,-1);
        tracep->declBit(c+453,"test_top dpram0 rst_i", false,-1);
        tracep->declBit(c+316,"test_top dpram0 we_i", false,-1);
        tracep->declBit(c+317,"test_top dpram0 request_i", false,-1);
        tracep->declBus(c+318,"test_top dpram0 addr_i", false,-1, 31,0);
        tracep->declBus(c+319,"test_top dpram0 data_i", false,-1, 31,0);
        tracep->declBus(c+26,"test_top dpram0 ram_op_i", false,-1, 3,0);
        tracep->declBus(c+320,"test_top dpram0 data_o", false,-1, 31,0);
        tracep->declBit(c+25,"test_top dpram0 inst_ce_i", false,-1);
        tracep->declBus(c+24,"test_top dpram0 pc_i", false,-1, 31,0);
        tracep->declBus(c+456,"test_top dpram0 inst_o", false,-1, 31,0);
        tracep->declBus(c+321,"test_top dpram0 ram_addr_offset", false,-1, 1,0);
        tracep->declQuad(c+322,"test_top dpram0 data_temp", false,-1, 63,0);
        tracep->declQuad(c+159,"test_top dpram0 data_write", false,-1, 63,0);
        tracep->declBus(c+324,"test_top dpram0 addr4", false,-1, 21,0);
        tracep->declBus(c+161,"test_top dpram0 rom_addr4", false,-1, 21,0);
        tracep->declBit(c+454,"test_top core_top0 regfile0 clk_i", false,-1);
        tracep->declBit(c+453,"test_top core_top0 regfile0 rst_i", false,-1);
        tracep->declBit(c+67,"test_top core_top0 regfile0 we_i", false,-1);
        tracep->declBus(c+66,"test_top core_top0 regfile0 waddr_i", false,-1, 4,0);
        tracep->declBus(c+68,"test_top core_top0 regfile0 wdata_i", false,-1, 31,0);
        tracep->declBit(c+282,"test_top core_top0 regfile0 re1_i", false,-1);
        tracep->declBus(c+280,"test_top core_top0 regfile0 raddr1_i", false,-1, 4,0);
        tracep->declBit(c+283,"test_top core_top0 regfile0 re2_i", false,-1);
        tracep->declBus(c+281,"test_top core_top0 regfile0 raddr2_i", false,-1, 4,0);
        tracep->declBus(c+284,"test_top core_top0 regfile0 rdata1_o", false,-1, 31,0);
        tracep->declBus(c+285,"test_top core_top0 regfile0 rdata2_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+162+i*1,"test_top core_top0 regfile0 regs", true,(i+0), 31,0);}}
        tracep->declBus(c+22,"test_top core_top0 regfile0 i", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type XLEN", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type value_i", false,-1, 31,0);
        tracep->declBus(c+97,"test_top core_top0 exe0 shift_i_type shamt_i", false,-1, 4,0);
        tracep->declBit(c+98,"test_top core_top0 exe0 shift_i_type direct_i", false,-1);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type arithmetic_i", false,-1);
        tracep->declBus(c+464,"test_top core_top0 exe0 shift_i_type value_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+325+i*1,"test_top core_top0 exe0 shift_i_type shift_l_temp", true,(i+0), 31,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+357+i*1,"test_top core_top0 exe0 shift_i_type shift_r_temp", true,(i+0), 31,0);}}
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type shift_l_cell_0 XLEN", false,-1, 31,0);
        tracep->declBus(c+580,"test_top core_top0 exe0 shift_i_type shift_l_cell_0 DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type shift_l_cell_0 rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type shift_l_cell_0 value_i", false,-1, 31,0);
        tracep->declBus(c+466,"test_top core_top0 exe0 shift_i_type shift_l_cell_0 value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type shift_r_cell_0 XLEN", false,-1, 31,0);
        tracep->declBus(c+580,"test_top core_top0 exe0 shift_i_type shift_r_cell_0 DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type shift_r_cell_0 rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type shift_r_cell_0 value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type shift_r_cell_0 arithmetic_i", false,-1);
        tracep->declBus(c+466,"test_top core_top0 exe0 shift_i_type shift_r_cell_0 value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[1] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+581,"test_top core_top0 exe0 shift_i_type genblk1[1] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[1] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[1] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+467,"test_top core_top0 exe0 shift_i_type genblk1[1] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[2] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+582,"test_top core_top0 exe0 shift_i_type genblk1[2] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[2] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[2] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+468,"test_top core_top0 exe0 shift_i_type genblk1[2] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[3] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+583,"test_top core_top0 exe0 shift_i_type genblk1[3] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[3] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[3] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+469,"test_top core_top0 exe0 shift_i_type genblk1[3] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[4] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+584,"test_top core_top0 exe0 shift_i_type genblk1[4] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[4] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[4] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+470,"test_top core_top0 exe0 shift_i_type genblk1[4] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[5] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+585,"test_top core_top0 exe0 shift_i_type genblk1[5] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[5] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[5] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+471,"test_top core_top0 exe0 shift_i_type genblk1[5] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[6] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+586,"test_top core_top0 exe0 shift_i_type genblk1[6] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[6] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[6] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+472,"test_top core_top0 exe0 shift_i_type genblk1[6] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[7] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+587,"test_top core_top0 exe0 shift_i_type genblk1[7] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[7] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[7] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+473,"test_top core_top0 exe0 shift_i_type genblk1[7] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[8] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+588,"test_top core_top0 exe0 shift_i_type genblk1[8] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[8] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[8] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+474,"test_top core_top0 exe0 shift_i_type genblk1[8] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[9] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+589,"test_top core_top0 exe0 shift_i_type genblk1[9] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[9] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[9] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+475,"test_top core_top0 exe0 shift_i_type genblk1[9] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[10] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+590,"test_top core_top0 exe0 shift_i_type genblk1[10] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[10] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[10] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+476,"test_top core_top0 exe0 shift_i_type genblk1[10] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[11] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+591,"test_top core_top0 exe0 shift_i_type genblk1[11] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[11] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[11] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+477,"test_top core_top0 exe0 shift_i_type genblk1[11] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[12] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+592,"test_top core_top0 exe0 shift_i_type genblk1[12] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[12] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[12] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+478,"test_top core_top0 exe0 shift_i_type genblk1[12] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[13] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+593,"test_top core_top0 exe0 shift_i_type genblk1[13] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[13] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[13] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+479,"test_top core_top0 exe0 shift_i_type genblk1[13] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[14] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+594,"test_top core_top0 exe0 shift_i_type genblk1[14] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[14] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[14] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+480,"test_top core_top0 exe0 shift_i_type genblk1[14] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[15] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+595,"test_top core_top0 exe0 shift_i_type genblk1[15] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[15] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[15] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+481,"test_top core_top0 exe0 shift_i_type genblk1[15] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[16] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+596,"test_top core_top0 exe0 shift_i_type genblk1[16] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[16] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[16] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+482,"test_top core_top0 exe0 shift_i_type genblk1[16] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[17] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+597,"test_top core_top0 exe0 shift_i_type genblk1[17] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[17] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[17] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+483,"test_top core_top0 exe0 shift_i_type genblk1[17] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[18] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+598,"test_top core_top0 exe0 shift_i_type genblk1[18] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[18] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[18] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+484,"test_top core_top0 exe0 shift_i_type genblk1[18] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[19] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+599,"test_top core_top0 exe0 shift_i_type genblk1[19] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[19] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[19] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+485,"test_top core_top0 exe0 shift_i_type genblk1[19] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[20] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+600,"test_top core_top0 exe0 shift_i_type genblk1[20] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[20] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[20] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+486,"test_top core_top0 exe0 shift_i_type genblk1[20] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[21] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+601,"test_top core_top0 exe0 shift_i_type genblk1[21] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[21] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[21] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+487,"test_top core_top0 exe0 shift_i_type genblk1[21] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[22] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+568,"test_top core_top0 exe0 shift_i_type genblk1[22] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[22] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[22] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+488,"test_top core_top0 exe0 shift_i_type genblk1[22] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[23] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+602,"test_top core_top0 exe0 shift_i_type genblk1[23] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[23] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[23] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+489,"test_top core_top0 exe0 shift_i_type genblk1[23] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[24] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+603,"test_top core_top0 exe0 shift_i_type genblk1[24] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[24] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[24] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+490,"test_top core_top0 exe0 shift_i_type genblk1[24] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[25] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+604,"test_top core_top0 exe0 shift_i_type genblk1[25] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[25] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[25] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+491,"test_top core_top0 exe0 shift_i_type genblk1[25] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[26] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+605,"test_top core_top0 exe0 shift_i_type genblk1[26] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[26] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[26] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+492,"test_top core_top0 exe0 shift_i_type genblk1[26] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[27] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+606,"test_top core_top0 exe0 shift_i_type genblk1[27] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[27] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[27] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+493,"test_top core_top0 exe0 shift_i_type genblk1[27] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[28] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+607,"test_top core_top0 exe0 shift_i_type genblk1[28] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[28] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[28] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+494,"test_top core_top0 exe0 shift_i_type genblk1[28] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[29] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+608,"test_top core_top0 exe0 shift_i_type genblk1[29] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[29] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[29] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+495,"test_top core_top0 exe0 shift_i_type genblk1[29] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[30] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+609,"test_top core_top0 exe0 shift_i_type genblk1[30] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[30] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[30] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+496,"test_top core_top0 exe0 shift_i_type genblk1[30] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk1[31] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+610,"test_top core_top0 exe0 shift_i_type genblk1[31] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk1[31] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk1[31] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+497,"test_top core_top0 exe0 shift_i_type genblk1[31] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[1] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+581,"test_top core_top0 exe0 shift_i_type genblk2[1] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[1] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[1] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[1] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+498,"test_top core_top0 exe0 shift_i_type genblk2[1] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[2] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+582,"test_top core_top0 exe0 shift_i_type genblk2[2] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[2] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[2] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[2] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+499,"test_top core_top0 exe0 shift_i_type genblk2[2] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[3] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+583,"test_top core_top0 exe0 shift_i_type genblk2[3] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[3] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[3] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[3] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+500,"test_top core_top0 exe0 shift_i_type genblk2[3] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[4] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+584,"test_top core_top0 exe0 shift_i_type genblk2[4] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[4] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[4] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[4] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+501,"test_top core_top0 exe0 shift_i_type genblk2[4] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[5] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+585,"test_top core_top0 exe0 shift_i_type genblk2[5] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[5] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[5] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[5] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+502,"test_top core_top0 exe0 shift_i_type genblk2[5] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[6] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+586,"test_top core_top0 exe0 shift_i_type genblk2[6] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[6] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[6] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[6] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+503,"test_top core_top0 exe0 shift_i_type genblk2[6] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[7] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+587,"test_top core_top0 exe0 shift_i_type genblk2[7] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[7] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[7] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[7] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+504,"test_top core_top0 exe0 shift_i_type genblk2[7] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[8] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+588,"test_top core_top0 exe0 shift_i_type genblk2[8] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[8] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[8] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[8] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+505,"test_top core_top0 exe0 shift_i_type genblk2[8] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[9] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+589,"test_top core_top0 exe0 shift_i_type genblk2[9] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[9] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[9] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[9] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+506,"test_top core_top0 exe0 shift_i_type genblk2[9] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[10] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+590,"test_top core_top0 exe0 shift_i_type genblk2[10] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[10] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[10] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[10] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+507,"test_top core_top0 exe0 shift_i_type genblk2[10] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[11] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+591,"test_top core_top0 exe0 shift_i_type genblk2[11] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[11] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[11] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[11] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+508,"test_top core_top0 exe0 shift_i_type genblk2[11] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[12] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+592,"test_top core_top0 exe0 shift_i_type genblk2[12] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[12] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[12] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[12] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+509,"test_top core_top0 exe0 shift_i_type genblk2[12] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[13] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+593,"test_top core_top0 exe0 shift_i_type genblk2[13] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[13] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[13] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[13] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+510,"test_top core_top0 exe0 shift_i_type genblk2[13] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[14] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+594,"test_top core_top0 exe0 shift_i_type genblk2[14] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[14] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[14] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[14] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+511,"test_top core_top0 exe0 shift_i_type genblk2[14] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[15] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+595,"test_top core_top0 exe0 shift_i_type genblk2[15] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[15] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[15] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[15] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+512,"test_top core_top0 exe0 shift_i_type genblk2[15] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[16] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+596,"test_top core_top0 exe0 shift_i_type genblk2[16] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[16] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[16] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[16] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+513,"test_top core_top0 exe0 shift_i_type genblk2[16] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[17] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+597,"test_top core_top0 exe0 shift_i_type genblk2[17] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[17] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[17] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[17] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+514,"test_top core_top0 exe0 shift_i_type genblk2[17] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[18] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+598,"test_top core_top0 exe0 shift_i_type genblk2[18] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[18] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[18] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[18] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+515,"test_top core_top0 exe0 shift_i_type genblk2[18] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[19] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+599,"test_top core_top0 exe0 shift_i_type genblk2[19] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[19] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[19] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[19] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+516,"test_top core_top0 exe0 shift_i_type genblk2[19] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[20] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+600,"test_top core_top0 exe0 shift_i_type genblk2[20] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[20] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[20] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[20] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+517,"test_top core_top0 exe0 shift_i_type genblk2[20] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[21] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+601,"test_top core_top0 exe0 shift_i_type genblk2[21] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[21] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[21] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[21] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+518,"test_top core_top0 exe0 shift_i_type genblk2[21] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[22] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+568,"test_top core_top0 exe0 shift_i_type genblk2[22] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[22] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[22] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[22] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+519,"test_top core_top0 exe0 shift_i_type genblk2[22] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[23] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+602,"test_top core_top0 exe0 shift_i_type genblk2[23] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[23] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[23] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[23] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+520,"test_top core_top0 exe0 shift_i_type genblk2[23] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[24] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+603,"test_top core_top0 exe0 shift_i_type genblk2[24] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[24] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[24] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[24] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+521,"test_top core_top0 exe0 shift_i_type genblk2[24] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[25] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+604,"test_top core_top0 exe0 shift_i_type genblk2[25] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[25] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[25] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[25] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+522,"test_top core_top0 exe0 shift_i_type genblk2[25] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[26] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+605,"test_top core_top0 exe0 shift_i_type genblk2[26] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[26] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[26] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[26] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+523,"test_top core_top0 exe0 shift_i_type genblk2[26] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[27] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+606,"test_top core_top0 exe0 shift_i_type genblk2[27] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[27] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[27] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[27] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+524,"test_top core_top0 exe0 shift_i_type genblk2[27] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[28] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+607,"test_top core_top0 exe0 shift_i_type genblk2[28] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[28] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[28] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[28] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+525,"test_top core_top0 exe0 shift_i_type genblk2[28] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[29] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+608,"test_top core_top0 exe0 shift_i_type genblk2[29] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[29] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[29] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[29] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+526,"test_top core_top0 exe0 shift_i_type genblk2[29] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[30] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+609,"test_top core_top0 exe0 shift_i_type genblk2[30] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[30] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[30] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[30] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+527,"test_top core_top0 exe0 shift_i_type genblk2[30] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_i_type genblk2[31] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+610,"test_top core_top0 exe0 shift_i_type genblk2[31] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_i_type genblk2[31] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_i_type genblk2[31] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_i_type genblk2[31] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+528,"test_top core_top0 exe0 shift_i_type genblk2[31] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type XLEN", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type value_i", false,-1, 31,0);
        tracep->declBus(c+194,"test_top core_top0 exe0 shift_r_type shamt_i", false,-1, 4,0);
        tracep->declBit(c+98,"test_top core_top0 exe0 shift_r_type direct_i", false,-1);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type arithmetic_i", false,-1);
        tracep->declBus(c+465,"test_top core_top0 exe0 shift_r_type value_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+389+i*1,"test_top core_top0 exe0 shift_r_type shift_l_temp", true,(i+0), 31,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+421+i*1,"test_top core_top0 exe0 shift_r_type shift_r_temp", true,(i+0), 31,0);}}
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type shift_l_cell_0 XLEN", false,-1, 31,0);
        tracep->declBus(c+580,"test_top core_top0 exe0 shift_r_type shift_l_cell_0 DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type shift_l_cell_0 rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type shift_l_cell_0 value_i", false,-1, 31,0);
        tracep->declBus(c+466,"test_top core_top0 exe0 shift_r_type shift_l_cell_0 value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type shift_r_cell_0 XLEN", false,-1, 31,0);
        tracep->declBus(c+580,"test_top core_top0 exe0 shift_r_type shift_r_cell_0 DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type shift_r_cell_0 rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type shift_r_cell_0 value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type shift_r_cell_0 arithmetic_i", false,-1);
        tracep->declBus(c+466,"test_top core_top0 exe0 shift_r_type shift_r_cell_0 value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[1] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+581,"test_top core_top0 exe0 shift_r_type genblk1[1] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[1] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[1] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+467,"test_top core_top0 exe0 shift_r_type genblk1[1] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[2] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+582,"test_top core_top0 exe0 shift_r_type genblk1[2] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[2] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[2] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+468,"test_top core_top0 exe0 shift_r_type genblk1[2] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[3] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+583,"test_top core_top0 exe0 shift_r_type genblk1[3] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[3] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[3] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+469,"test_top core_top0 exe0 shift_r_type genblk1[3] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[4] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+584,"test_top core_top0 exe0 shift_r_type genblk1[4] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[4] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[4] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+470,"test_top core_top0 exe0 shift_r_type genblk1[4] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[5] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+585,"test_top core_top0 exe0 shift_r_type genblk1[5] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[5] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[5] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+471,"test_top core_top0 exe0 shift_r_type genblk1[5] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[6] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+586,"test_top core_top0 exe0 shift_r_type genblk1[6] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[6] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[6] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+472,"test_top core_top0 exe0 shift_r_type genblk1[6] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[7] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+587,"test_top core_top0 exe0 shift_r_type genblk1[7] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[7] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[7] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+473,"test_top core_top0 exe0 shift_r_type genblk1[7] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[8] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+588,"test_top core_top0 exe0 shift_r_type genblk1[8] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[8] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[8] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+474,"test_top core_top0 exe0 shift_r_type genblk1[8] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[9] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+589,"test_top core_top0 exe0 shift_r_type genblk1[9] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[9] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[9] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+475,"test_top core_top0 exe0 shift_r_type genblk1[9] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[10] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+590,"test_top core_top0 exe0 shift_r_type genblk1[10] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[10] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[10] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+476,"test_top core_top0 exe0 shift_r_type genblk1[10] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[11] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+591,"test_top core_top0 exe0 shift_r_type genblk1[11] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[11] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[11] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+477,"test_top core_top0 exe0 shift_r_type genblk1[11] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[12] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+592,"test_top core_top0 exe0 shift_r_type genblk1[12] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[12] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[12] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+478,"test_top core_top0 exe0 shift_r_type genblk1[12] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[13] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+593,"test_top core_top0 exe0 shift_r_type genblk1[13] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[13] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[13] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+479,"test_top core_top0 exe0 shift_r_type genblk1[13] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[14] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+594,"test_top core_top0 exe0 shift_r_type genblk1[14] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[14] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[14] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+480,"test_top core_top0 exe0 shift_r_type genblk1[14] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[15] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+595,"test_top core_top0 exe0 shift_r_type genblk1[15] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[15] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[15] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+481,"test_top core_top0 exe0 shift_r_type genblk1[15] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[16] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+596,"test_top core_top0 exe0 shift_r_type genblk1[16] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[16] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[16] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+482,"test_top core_top0 exe0 shift_r_type genblk1[16] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[17] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+597,"test_top core_top0 exe0 shift_r_type genblk1[17] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[17] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[17] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+483,"test_top core_top0 exe0 shift_r_type genblk1[17] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[18] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+598,"test_top core_top0 exe0 shift_r_type genblk1[18] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[18] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[18] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+484,"test_top core_top0 exe0 shift_r_type genblk1[18] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[19] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+599,"test_top core_top0 exe0 shift_r_type genblk1[19] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[19] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[19] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+485,"test_top core_top0 exe0 shift_r_type genblk1[19] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[20] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+600,"test_top core_top0 exe0 shift_r_type genblk1[20] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[20] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[20] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+486,"test_top core_top0 exe0 shift_r_type genblk1[20] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[21] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+601,"test_top core_top0 exe0 shift_r_type genblk1[21] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[21] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[21] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+487,"test_top core_top0 exe0 shift_r_type genblk1[21] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[22] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+568,"test_top core_top0 exe0 shift_r_type genblk1[22] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[22] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[22] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+488,"test_top core_top0 exe0 shift_r_type genblk1[22] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[23] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+602,"test_top core_top0 exe0 shift_r_type genblk1[23] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[23] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[23] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+489,"test_top core_top0 exe0 shift_r_type genblk1[23] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[24] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+603,"test_top core_top0 exe0 shift_r_type genblk1[24] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[24] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[24] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+490,"test_top core_top0 exe0 shift_r_type genblk1[24] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[25] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+604,"test_top core_top0 exe0 shift_r_type genblk1[25] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[25] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[25] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+491,"test_top core_top0 exe0 shift_r_type genblk1[25] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[26] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+605,"test_top core_top0 exe0 shift_r_type genblk1[26] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[26] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[26] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+492,"test_top core_top0 exe0 shift_r_type genblk1[26] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[27] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+606,"test_top core_top0 exe0 shift_r_type genblk1[27] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[27] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[27] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+493,"test_top core_top0 exe0 shift_r_type genblk1[27] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[28] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+607,"test_top core_top0 exe0 shift_r_type genblk1[28] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[28] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[28] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+494,"test_top core_top0 exe0 shift_r_type genblk1[28] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[29] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+608,"test_top core_top0 exe0 shift_r_type genblk1[29] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[29] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[29] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+495,"test_top core_top0 exe0 shift_r_type genblk1[29] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[30] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+609,"test_top core_top0 exe0 shift_r_type genblk1[30] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[30] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[30] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+496,"test_top core_top0 exe0 shift_r_type genblk1[30] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk1[31] shift_l_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+610,"test_top core_top0 exe0 shift_r_type genblk1[31] shift_l_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk1[31] shift_l_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk1[31] shift_l_sell_n value_i", false,-1, 31,0);
        tracep->declBus(c+497,"test_top core_top0 exe0 shift_r_type genblk1[31] shift_l_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[1] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+581,"test_top core_top0 exe0 shift_r_type genblk2[1] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[1] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[1] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[1] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+498,"test_top core_top0 exe0 shift_r_type genblk2[1] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[2] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+582,"test_top core_top0 exe0 shift_r_type genblk2[2] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[2] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[2] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[2] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+499,"test_top core_top0 exe0 shift_r_type genblk2[2] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[3] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+583,"test_top core_top0 exe0 shift_r_type genblk2[3] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[3] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[3] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[3] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+500,"test_top core_top0 exe0 shift_r_type genblk2[3] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[4] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+584,"test_top core_top0 exe0 shift_r_type genblk2[4] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[4] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[4] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[4] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+501,"test_top core_top0 exe0 shift_r_type genblk2[4] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[5] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+585,"test_top core_top0 exe0 shift_r_type genblk2[5] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[5] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[5] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[5] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+502,"test_top core_top0 exe0 shift_r_type genblk2[5] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[6] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+586,"test_top core_top0 exe0 shift_r_type genblk2[6] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[6] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[6] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[6] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+503,"test_top core_top0 exe0 shift_r_type genblk2[6] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[7] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+587,"test_top core_top0 exe0 shift_r_type genblk2[7] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[7] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[7] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[7] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+504,"test_top core_top0 exe0 shift_r_type genblk2[7] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[8] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+588,"test_top core_top0 exe0 shift_r_type genblk2[8] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[8] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[8] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[8] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+505,"test_top core_top0 exe0 shift_r_type genblk2[8] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[9] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+589,"test_top core_top0 exe0 shift_r_type genblk2[9] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[9] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[9] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[9] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+506,"test_top core_top0 exe0 shift_r_type genblk2[9] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[10] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+590,"test_top core_top0 exe0 shift_r_type genblk2[10] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[10] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[10] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[10] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+507,"test_top core_top0 exe0 shift_r_type genblk2[10] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[11] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+591,"test_top core_top0 exe0 shift_r_type genblk2[11] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[11] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[11] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[11] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+508,"test_top core_top0 exe0 shift_r_type genblk2[11] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[12] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+592,"test_top core_top0 exe0 shift_r_type genblk2[12] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[12] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[12] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[12] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+509,"test_top core_top0 exe0 shift_r_type genblk2[12] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[13] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+593,"test_top core_top0 exe0 shift_r_type genblk2[13] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[13] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[13] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[13] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+510,"test_top core_top0 exe0 shift_r_type genblk2[13] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[14] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+594,"test_top core_top0 exe0 shift_r_type genblk2[14] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[14] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[14] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[14] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+511,"test_top core_top0 exe0 shift_r_type genblk2[14] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[15] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+595,"test_top core_top0 exe0 shift_r_type genblk2[15] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[15] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[15] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[15] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+512,"test_top core_top0 exe0 shift_r_type genblk2[15] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[16] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+596,"test_top core_top0 exe0 shift_r_type genblk2[16] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[16] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[16] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[16] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+513,"test_top core_top0 exe0 shift_r_type genblk2[16] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[17] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+597,"test_top core_top0 exe0 shift_r_type genblk2[17] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[17] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[17] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[17] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+514,"test_top core_top0 exe0 shift_r_type genblk2[17] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[18] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+598,"test_top core_top0 exe0 shift_r_type genblk2[18] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[18] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[18] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[18] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+515,"test_top core_top0 exe0 shift_r_type genblk2[18] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[19] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+599,"test_top core_top0 exe0 shift_r_type genblk2[19] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[19] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[19] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[19] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+516,"test_top core_top0 exe0 shift_r_type genblk2[19] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[20] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+600,"test_top core_top0 exe0 shift_r_type genblk2[20] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[20] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[20] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[20] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+517,"test_top core_top0 exe0 shift_r_type genblk2[20] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[21] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+601,"test_top core_top0 exe0 shift_r_type genblk2[21] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[21] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[21] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[21] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+518,"test_top core_top0 exe0 shift_r_type genblk2[21] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[22] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+568,"test_top core_top0 exe0 shift_r_type genblk2[22] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[22] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[22] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[22] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+519,"test_top core_top0 exe0 shift_r_type genblk2[22] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[23] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+602,"test_top core_top0 exe0 shift_r_type genblk2[23] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[23] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[23] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[23] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+520,"test_top core_top0 exe0 shift_r_type genblk2[23] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[24] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+603,"test_top core_top0 exe0 shift_r_type genblk2[24] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[24] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[24] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[24] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+521,"test_top core_top0 exe0 shift_r_type genblk2[24] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[25] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+604,"test_top core_top0 exe0 shift_r_type genblk2[25] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[25] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[25] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[25] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+522,"test_top core_top0 exe0 shift_r_type genblk2[25] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[26] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+605,"test_top core_top0 exe0 shift_r_type genblk2[26] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[26] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[26] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[26] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+523,"test_top core_top0 exe0 shift_r_type genblk2[26] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[27] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+606,"test_top core_top0 exe0 shift_r_type genblk2[27] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[27] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[27] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[27] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+524,"test_top core_top0 exe0 shift_r_type genblk2[27] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[28] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+607,"test_top core_top0 exe0 shift_r_type genblk2[28] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[28] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[28] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[28] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+525,"test_top core_top0 exe0 shift_r_type genblk2[28] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[29] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+608,"test_top core_top0 exe0 shift_r_type genblk2[29] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[29] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[29] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[29] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+526,"test_top core_top0 exe0 shift_r_type genblk2[29] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[30] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+609,"test_top core_top0 exe0 shift_r_type genblk2[30] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[30] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[30] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[30] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+527,"test_top core_top0 exe0 shift_r_type genblk2[30] shift_r_sell_n value_o", false,-1, 31,0);
        tracep->declBus(c+535,"test_top core_top0 exe0 shift_r_type genblk2[31] shift_r_sell_n XLEN", false,-1, 31,0);
        tracep->declBus(c+610,"test_top core_top0 exe0 shift_r_type genblk2[31] shift_r_sell_n DISTANCE", false,-1, 31,0);
        tracep->declBit(c+453,"test_top core_top0 exe0 shift_r_type genblk2[31] shift_r_sell_n rst_i", false,-1);
        tracep->declBus(c+52,"test_top core_top0 exe0 shift_r_type genblk2[31] shift_r_sell_n value_i", false,-1, 31,0);
        tracep->declBit(c+99,"test_top core_top0 exe0 shift_r_type genblk2[31] shift_r_sell_n arithmetic_i", false,-1);
        tracep->declBus(c+528,"test_top core_top0 exe0 shift_r_type genblk2[31] shift_r_sell_n value_o", false,-1, 31,0);
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
        tracep->fullIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[2]),32);
        tracep->fullIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[3]),32);
        tracep->fullIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0]),32);
        tracep->fullIData(oldp+6,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[1]),32);
        tracep->fullIData(oldp+7,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[2]),32);
        tracep->fullIData(oldp+8,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[3]),32);
        tracep->fullIData(oldp+9,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[0]),32);
        tracep->fullIData(oldp+10,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[1]),32);
        tracep->fullIData(oldp+11,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[2]),32);
        tracep->fullIData(oldp+12,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[3]),32);
        tracep->fullIData(oldp+13,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
        tracep->fullIData(oldp+14,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
        tracep->fullIData(oldp+15,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[2]),32);
        tracep->fullIData(oldp+16,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[3]),32);
        tracep->fullBit(oldp+17,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip));
        tracep->fullBit(oldp+18,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip));
        tracep->fullBit(oldp+19,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip));
        tracep->fullBit(oldp+20,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                   | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip)) 
                                  | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))));
        tracep->fullBit(oldp+21,((1U & ((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mstatus_ie) 
                                          & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                              | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip)) 
                                             | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip))) 
                                         | (vlSymsp->TOP__test_top__core_top0.__PVT__mem_interrupt_ctrl_exception 
                                            >> 1U)) 
                                        | vlSymsp->TOP__test_top__core_top0.__PVT__mem_interrupt_ctrl_exception))));
        tracep->fullIData(oldp+22,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__i),32);
        tracep->fullBit(oldp+23,(vlSymsp->TOP__test_top.__PVT__halt_from_console));
        tracep->fullIData(oldp+24,(vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire),32);
        tracep->fullBit(oldp+25,(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire));
        tracep->fullCData(oldp+26,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o),4);
        tracep->fullBit(oldp+27,(((~ (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                 [1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                  [0U]))) 
                                               - (((QData)((IData)(
                                                                   vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                                                                   [1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                                                                    [0U])))) 
                                              >> 0x3fU))) 
                                  & (0ULL != (((QData)((IData)(
                                                               vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                                                               [1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                                                                [0U])))))));
        tracep->fullBit(oldp+28,((0U != vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem)));
        tracep->fullCData(oldp+29,(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish),3);
        tracep->fullIData(oldp+30,(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd),32);
        tracep->fullIData(oldp+31,(vlSymsp->TOP__test_top.__Vcellout__timer0__second_count),32);
        tracep->fullIData(oldp+32,(vlSymsp->TOP__test_top.__PVT__timer0__DOT__clk_count),32);
        tracep->fullIData(oldp+33,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[0]),32);
        tracep->fullIData(oldp+34,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[1]),32);
        tracep->fullIData(oldp+35,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[0]),32);
        tracep->fullIData(oldp+36,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[1]),32);
        tracep->fullIData(oldp+37,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem),32);
        tracep->fullQData(oldp+38,((((QData)((IData)(
                                                     vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                     [1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                 [0U])))),64);
        tracep->fullQData(oldp+40,((((QData)((IData)(
                                                     vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                                                     [1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                                                                 [0U])))),64);
        tracep->fullQData(oldp+42,((QData)((IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem))),64);
        tracep->fullBit(oldp+44,((0xffffffffU == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                  [0U])));
        tracep->fullQData(oldp+45,(((((QData)((IData)(
                                                      vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                      [1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                  [0U]))) 
                                    - (((QData)((IData)(
                                                        vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                                                        [1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                                                                    [0U]))))),64);
        tracep->fullBit(oldp+47,((1U & (~ (IData)((
                                                   ((((QData)((IData)(
                                                                      vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                      [1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                       [0U]))) 
                                                    - 
                                                    (((QData)((IData)(
                                                                      vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                                                                      [1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                                                                       [0U])))) 
                                                   >> 0x3fU))))));
        tracep->fullBit(oldp+48,((0ULL == (((QData)((IData)(
                                                            vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                                                            [1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem
                                                             [0U]))))));
        tracep->fullIData(oldp+49,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o),32);
        tracep->fullIData(oldp+50,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o),32);
        tracep->fullBit(oldp+51,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_inst_is_load_o) 
                                  & (((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0xfU)) 
                                      == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_rd_o)) 
                                     | ((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                  >> 0x14U)) 
                                        == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_rd_o))))));
        tracep->fullIData(oldp+52,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o),32);
        tracep->fullIData(oldp+53,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o),32);
        tracep->fullBit(oldp+54,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o));
        tracep->fullCData(oldp+55,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o),5);
        tracep->fullIData(oldp+56,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o),32);
        tracep->fullIData(oldp+57,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o),32);
        tracep->fullBit(oldp+58,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_inst_is_load_o));
        tracep->fullCData(oldp+59,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_id_rd_o),5);
        tracep->fullCData(oldp+60,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o),5);
        tracep->fullBit(oldp+61,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
        tracep->fullIData(oldp+62,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o),32);
        tracep->fullIData(oldp+63,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o),32);
        tracep->fullIData(oldp+64,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o),32);
        tracep->fullBit(oldp+65,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o));
        tracep->fullCData(oldp+66,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o),5);
        tracep->fullBit(oldp+67,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o));
        tracep->fullIData(oldp+68,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o),32);
        tracep->fullBit(oldp+69,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we));
        tracep->fullSData(oldp+70,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_waddr),12);
        tracep->fullIData(oldp+71,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_wdata),32);
        tracep->fullBit(oldp+72,(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we));
        tracep->fullSData(oldp+73,(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr),12);
        tracep->fullIData(oldp+74,(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_wdata),32);
        tracep->fullIData(oldp+75,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exe_exception),32);
        tracep->fullIData(oldp+76,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_exception),32);
        tracep->fullIData(oldp+77,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_inst_addr),32);
        tracep->fullBit(oldp+78,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_type));
        tracep->fullBit(oldp+79,(vlSymsp->TOP__test_top__core_top0.__PVT__cause_we));
        tracep->fullCData(oldp+80,(vlSymsp->TOP__test_top__core_top0.__PVT__cause),4);
        tracep->fullBit(oldp+81,(vlSymsp->TOP__test_top__core_top0.__PVT__epc_we));
        tracep->fullBit(oldp+82,(vlSymsp->TOP__test_top__core_top0.__PVT__mstatus_ie_clear));
        tracep->fullBit(oldp+83,(vlSymsp->TOP__test_top__core_top0.__PVT__mstatus_ie_set));
        tracep->fullBit(oldp+84,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl_pipe_ctrl_int_enable));
        tracep->fullIData(oldp+85,(vlSymsp->TOP__test_top__core_top0.__PVT__isr_addr),32);
        tracep->fullCData(oldp+86,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)),7);
        tracep->fullCData(oldp+87,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 7U))),5);
        tracep->fullCData(oldp+88,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+89,((0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0x19U))),7);
        tracep->fullCData(oldp+90,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+91,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0x14U))),5);
        tracep->fullIData(oldp+92,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__i_op2_o),32);
        tracep->fullCData(oldp+93,((0x1fU & ((0x4000U 
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
        tracep->fullCData(oldp+94,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)),7);
        tracep->fullCData(oldp+95,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+96,((0x7fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 0x19U))),7);
        tracep->fullCData(oldp+97,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+98,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                        >> 0xeU))));
        tracep->fullBit(oldp+99,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                        >> 0x1eU))));
        tracep->fullIData(oldp+100,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_type_offset),32);
        tracep->fullIData(oldp+101,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o 
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
        tracep->fullIData(oldp+102,(((0xfffff000U & 
                                      ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                                     ((0xfe0U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                 >> 0x14U)) 
                                      | (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 7U))))),32);
        tracep->fullIData(oldp+103,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__load_addr_offset),32);
        tracep->fullBit(oldp+104,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                         >> 0x19U))));
        tracep->fullIData(oldp+105,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_high_result),32);
        tracep->fullIData(oldp+106,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_low_result),32);
        tracep->fullBit(oldp+107,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_ready));
        tracep->fullCData(oldp+108,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_count),6);
        tracep->fullSData(oldp+109,((0xfffU & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x14U))),12);
        tracep->fullWData(oldp+110,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d__DOT__long_temp),65);
        tracep->fullIData(oldp+113,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d__DOT__rs1_temp),32);
        tracep->fullIData(oldp+114,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d__DOT__rs2_temp),32);
        tracep->fullBit(oldp+115,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d__DOT__rs1_is_neg));
        tracep->fullBit(oldp+116,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d__DOT__rs2_is_neg));
        tracep->fullBit(oldp+117,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                         >> 0xeU))));
        tracep->fullCData(oldp+118,((3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o)),2);
        tracep->fullQData(oldp+119,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle),64);
        tracep->fullQData(oldp+121,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__minstret),64);
        tracep->fullIData(oldp+123,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus),32);
        tracep->fullBit(oldp+124,(((0x300U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
        tracep->fullIData(oldp+125,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie),32);
        tracep->fullBit(oldp+126,(((0x304U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
        tracep->fullIData(oldp+127,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec),32);
        tracep->fullBit(oldp+128,(((0x305U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
        tracep->fullIData(oldp+129,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mscratch),32);
        tracep->fullBit(oldp+130,(((0x340U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
        tracep->fullIData(oldp+131,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc),32);
        tracep->fullBit(oldp+132,(((0x341U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
        tracep->fullIData(oldp+133,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtval),32);
        tracep->fullBit(oldp+134,(((0x343U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
        tracep->fullIData(oldp+135,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__medeleg),32);
        tracep->fullBit(oldp+136,(((0x302U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
        tracep->fullIData(oldp+137,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mideleg),32);
        tracep->fullBit(oldp+138,(((0x303U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
        tracep->fullIData(oldp+139,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__pmpcfg0),32);
        tracep->fullBit(oldp+140,(((0x3a0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
        tracep->fullIData(oldp+141,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__pmpaddr0),32);
        tracep->fullBit(oldp+142,(((0x3b0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
        tracep->fullIData(oldp+143,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__stvec),32);
        tracep->fullBit(oldp+144,(((0x105U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
        tracep->fullIData(oldp+145,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__sscratch),32);
        tracep->fullBit(oldp+146,(((0x140U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
        tracep->fullIData(oldp+147,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__sepc),32);
        tracep->fullBit(oldp+148,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_sepc));
        tracep->fullIData(oldp+149,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__scause),32);
        tracep->fullBit(oldp+150,(((0x142U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
        tracep->fullIData(oldp+151,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__satp),32);
        tracep->fullBit(oldp+152,(((0x180U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_waddr)) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_we))));
        tracep->fullCData(oldp+153,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S),4);
        tracep->fullCData(oldp+154,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S_nxt),4);
        tracep->fullIData(oldp+155,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_type)
                                      ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__mtvec)
                                          ? ((0xfffffffcU 
                                              & vlSymsp->TOP__test_top__core_top0.__PVT__mtvec) 
                                             + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__cause) 
                                                << 2U))
                                          : (0xfffffffcU 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__mtvec))
                                      : (0xfffffffcU 
                                         & vlSymsp->TOP__test_top__core_top0.__PVT__mtvec))),32);
        tracep->fullIData(oldp+156,(((1U & vlSymsp->TOP__test_top__core_top0.__PVT__mtvec)
                                      ? ((0xfffffffcU 
                                          & vlSymsp->TOP__test_top__core_top0.__PVT__mtvec) 
                                         + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__cause) 
                                            << 2U))
                                      : (0xfffffffcU 
                                         & vlSymsp->TOP__test_top__core_top0.__PVT__mtvec))),32);
        tracep->fullIData(oldp+157,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__cause) 
                                     << 2U)),32);
        tracep->fullBit(oldp+158,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__exception));
        tracep->fullQData(oldp+159,(vlSymsp->TOP__test_top__dpram0.__PVT__data_write),64);
        tracep->fullIData(oldp+161,((0x3ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)),22);
        tracep->fullIData(oldp+162,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[0]),32);
        tracep->fullIData(oldp+163,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[1]),32);
        tracep->fullIData(oldp+164,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[2]),32);
        tracep->fullIData(oldp+165,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[3]),32);
        tracep->fullIData(oldp+166,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[4]),32);
        tracep->fullIData(oldp+167,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[5]),32);
        tracep->fullIData(oldp+168,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[6]),32);
        tracep->fullIData(oldp+169,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[7]),32);
        tracep->fullIData(oldp+170,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[8]),32);
        tracep->fullIData(oldp+171,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[9]),32);
        tracep->fullIData(oldp+172,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[10]),32);
        tracep->fullIData(oldp+173,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[11]),32);
        tracep->fullIData(oldp+174,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[12]),32);
        tracep->fullIData(oldp+175,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[13]),32);
        tracep->fullIData(oldp+176,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[14]),32);
        tracep->fullIData(oldp+177,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[15]),32);
        tracep->fullIData(oldp+178,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[16]),32);
        tracep->fullIData(oldp+179,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[17]),32);
        tracep->fullIData(oldp+180,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[18]),32);
        tracep->fullIData(oldp+181,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[19]),32);
        tracep->fullIData(oldp+182,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[20]),32);
        tracep->fullIData(oldp+183,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[21]),32);
        tracep->fullIData(oldp+184,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[22]),32);
        tracep->fullIData(oldp+185,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[23]),32);
        tracep->fullIData(oldp+186,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[24]),32);
        tracep->fullIData(oldp+187,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[25]),32);
        tracep->fullIData(oldp+188,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[26]),32);
        tracep->fullIData(oldp+189,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[27]),32);
        tracep->fullIData(oldp+190,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[28]),32);
        tracep->fullIData(oldp+191,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[29]),32);
        tracep->fullIData(oldp+192,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[30]),32);
        tracep->fullIData(oldp+193,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[31]),32);
        tracep->fullCData(oldp+194,((0x1fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)),5);
        tracep->fullIData(oldp+195,(vlSymsp->TOP__test_top.__PVT__device_rdata[0]),32);
        tracep->fullIData(oldp+196,(vlSymsp->TOP__test_top.__PVT__device_rdata[1]),32);
        tracep->fullIData(oldp+197,(vlSymsp->TOP__test_top.__PVT__device_rdata[2]),32);
        tracep->fullIData(oldp+198,(vlSymsp->TOP__test_top.__PVT__device_rdata[3]),32);
        tracep->fullIData(oldp+199,(vlSymsp->TOP__test_top__core_top0.__PVT__ram_wdata_o),32);
        tracep->fullIData(oldp+200,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl_pipe_ctrl_int_enable)
                                      ? vlSymsp->TOP__test_top__core_top0.__PVT__isr_addr
                                      : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_enable_o)
                                          ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_addr_o
                                          : 0U))),32);
        tracep->fullBit(oldp+201,(vlSymsp->TOP__test_top.__PVT__host_req[0]));
        tracep->fullBit(oldp+202,(vlSymsp->TOP__test_top.__PVT__host_gnt[0]));
        tracep->fullIData(oldp+203,(vlSymsp->TOP__test_top.__PVT__host_addr[0]),32);
        tracep->fullBit(oldp+204,(vlSymsp->TOP__test_top.__PVT__host_we[0]));
        tracep->fullIData(oldp+205,(vlSymsp->TOP__test_top.__PVT__host_wdata[0]),32);
        tracep->fullIData(oldp+206,(vlSymsp->TOP__test_top.__PVT__host_rdata[0]),32);
        tracep->fullBit(oldp+207,(vlSymsp->TOP__test_top.__PVT__device_req[0]));
        tracep->fullBit(oldp+208,(vlSymsp->TOP__test_top.__PVT__device_req[1]));
        tracep->fullBit(oldp+209,(vlSymsp->TOP__test_top.__PVT__device_req[2]));
        tracep->fullBit(oldp+210,(vlSymsp->TOP__test_top.__PVT__device_req[3]));
        tracep->fullIData(oldp+211,(vlSymsp->TOP__test_top.__PVT__device_addr[0]),32);
        tracep->fullIData(oldp+212,(vlSymsp->TOP__test_top.__PVT__device_addr[1]),32);
        tracep->fullIData(oldp+213,(vlSymsp->TOP__test_top.__PVT__device_addr[2]),32);
        tracep->fullIData(oldp+214,(vlSymsp->TOP__test_top.__PVT__device_addr[3]),32);
        tracep->fullBit(oldp+215,(vlSymsp->TOP__test_top.__PVT__device_we[0]));
        tracep->fullBit(oldp+216,(vlSymsp->TOP__test_top.__PVT__device_we[1]));
        tracep->fullBit(oldp+217,(vlSymsp->TOP__test_top.__PVT__device_we[2]));
        tracep->fullBit(oldp+218,(vlSymsp->TOP__test_top.__PVT__device_we[3]));
        tracep->fullIData(oldp+219,(vlSymsp->TOP__test_top.__PVT__device_wdata[0]),32);
        tracep->fullIData(oldp+220,(vlSymsp->TOP__test_top.__PVT__device_wdata[1]),32);
        tracep->fullIData(oldp+221,(vlSymsp->TOP__test_top.__PVT__device_wdata[2]),32);
        tracep->fullIData(oldp+222,(vlSymsp->TOP__test_top.__PVT__device_wdata[3]),32);
        tracep->fullBit(oldp+223,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0]));
        tracep->fullBit(oldp+224,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0]));
        tracep->fullIData(oldp+225,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0]),32);
        tracep->fullBit(oldp+226,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0]));
        tracep->fullIData(oldp+227,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0]),32);
        tracep->fullIData(oldp+228,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0]),32);
        tracep->fullBit(oldp+229,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0]));
        tracep->fullBit(oldp+230,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1]));
        tracep->fullBit(oldp+231,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[2]));
        tracep->fullBit(oldp+232,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[3]));
        tracep->fullIData(oldp+233,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0]),32);
        tracep->fullIData(oldp+234,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1]),32);
        tracep->fullIData(oldp+235,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[2]),32);
        tracep->fullIData(oldp+236,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[3]),32);
        tracep->fullBit(oldp+237,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0]));
        tracep->fullBit(oldp+238,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1]));
        tracep->fullBit(oldp+239,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[2]));
        tracep->fullBit(oldp+240,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[3]));
        tracep->fullIData(oldp+241,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0]),32);
        tracep->fullIData(oldp+242,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1]),32);
        tracep->fullIData(oldp+243,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[2]),32);
        tracep->fullIData(oldp+244,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[3]),32);
        tracep->fullIData(oldp+245,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[0]),32);
        tracep->fullIData(oldp+246,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[1]),32);
        tracep->fullIData(oldp+247,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[2]),32);
        tracep->fullIData(oldp+248,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[3]),32);
        tracep->fullBit(oldp+249,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req));
        tracep->fullCData(oldp+250,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req),2);
        tracep->fullBit(oldp+251,(vlSymsp->TOP__test_top.__PVT__device_req
                                  [1U]));
        tracep->fullBit(oldp+252,(vlSymsp->TOP__test_top.__PVT__device_we
                                  [1U]));
        tracep->fullIData(oldp+253,(vlSymsp->TOP__test_top.__PVT__device_addr
                                    [1U]),32);
        tracep->fullIData(oldp+254,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                    [1U]),32);
        tracep->fullCData(oldp+255,((0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [1U])),8);
        tracep->fullBit(oldp+256,(vlSymsp->TOP__test_top.__PVT__device_req
                                  [3U]));
        tracep->fullBit(oldp+257,(vlSymsp->TOP__test_top.__PVT__device_we
                                  [3U]));
        tracep->fullIData(oldp+258,(vlSymsp->TOP__test_top.__PVT__device_addr
                                    [3U]),32);
        tracep->fullIData(oldp+259,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                    [3U]),32);
        tracep->fullBit(oldp+260,(vlSymsp->TOP__test_top.__PVT__device_req
                                  [2U]));
        tracep->fullBit(oldp+261,(vlSymsp->TOP__test_top.__PVT__device_we
                                  [2U]));
        tracep->fullIData(oldp+262,(vlSymsp->TOP__test_top.__PVT__device_addr
                                    [2U]),32);
        tracep->fullIData(oldp+263,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                    [2U]),32);
        tracep->fullIData(oldp+264,(vlSymsp->TOP__test_top.__Vcellout__clint0__data_o),32);
        tracep->fullSData(oldp+265,((0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [2U])),16);
        tracep->fullBit(oldp+266,((0xbff8U == (0xffffU 
                                               & vlSymsp->TOP__test_top.__PVT__device_addr
                                               [2U]))));
        tracep->fullBit(oldp+267,((0xbffcU == (0xffffU 
                                               & vlSymsp->TOP__test_top.__PVT__device_addr
                                               [2U]))));
        tracep->fullBit(oldp+268,((0x4000U == (0xffffU 
                                               & vlSymsp->TOP__test_top.__PVT__device_addr
                                               [2U]))));
        tracep->fullBit(oldp+269,((0x4004U == (0xffffU 
                                               & vlSymsp->TOP__test_top.__PVT__device_addr
                                               [2U]))));
        tracep->fullBit(oldp+270,((0U == (0xffffU & 
                                          vlSymsp->TOP__test_top.__PVT__device_addr
                                          [2U]))));
        tracep->fullBit(oldp+271,(vlSymsp->TOP__test_top__core_top0.__PVT__ram_we_o));
        tracep->fullIData(oldp+272,(vlSymsp->TOP__test_top__core_top0.__PVT__ram_addr_o),32);
        tracep->fullIData(oldp+273,(vlSymsp->TOP__test_top.__PVT__host_rdata
                                    [0U]),32);
        tracep->fullCData(oldp+274,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o),6);
        tracep->fullBit(oldp+275,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_enable_o));
        tracep->fullIData(oldp+276,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o),32);
        tracep->fullIData(oldp+277,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_addr_o),32);
        tracep->fullBit(oldp+278,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o));
        tracep->fullCData(oldp+279,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o),5);
        tracep->fullCData(oldp+280,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o),5);
        tracep->fullCData(oldp+281,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o),5);
        tracep->fullBit(oldp+282,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o));
        tracep->fullBit(oldp+283,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o));
        tracep->fullIData(oldp+284,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o),32);
        tracep->fullIData(oldp+285,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o),32);
        tracep->fullCData(oldp+286,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o),5);
        tracep->fullBit(oldp+287,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o));
        tracep->fullIData(oldp+288,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o),32);
        tracep->fullIData(oldp+289,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o),32);
        tracep->fullIData(oldp+290,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o),32);
        tracep->fullBit(oldp+291,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o));
        tracep->fullCData(oldp+292,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o),4);
        tracep->fullBit(oldp+293,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_stallreq_o));
        tracep->fullIData(oldp+294,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_pipe_ctrl_jump_addr_o),32);
        tracep->fullSData(oldp+295,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr),12);
        tracep->fullCData(oldp+296,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o),5);
        tracep->fullBit(oldp+297,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o));
        tracep->fullIData(oldp+298,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_wdata_o),32);
        tracep->fullBit(oldp+299,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_exe_mem_we));
        tracep->fullSData(oldp+300,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_exe_mem_waddr),12);
        tracep->fullIData(oldp+301,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_exe_mem_wdata),32);
        tracep->fullBit(oldp+302,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_we));
        tracep->fullSData(oldp+303,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_waddr),12);
        tracep->fullIData(oldp+304,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_wdata),32);
        tracep->fullIData(oldp+305,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_exe_rdata),32);
        tracep->fullIData(oldp+306,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall) 
                                      << 1U) | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret))),32);
        tracep->fullIData(oldp+307,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_interrupt_ctrl_inst_addr),32);
        tracep->fullIData(oldp+308,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl_csr_mepc),32);
        tracep->fullIData(oldp+309,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final),32);
        tracep->fullIData(oldp+310,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final),32);
        tracep->fullBit(oldp+311,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret));
        tracep->fullBit(oldp+312,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall));
        tracep->fullCData(oldp+313,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o)),7);
        tracep->fullIData(oldp+314,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__compare_sub_type_i),32);
        tracep->fullIData(oldp+315,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata),32);
        tracep->fullBit(oldp+316,(vlSymsp->TOP__test_top.__PVT__device_we
                                  [0U]));
        tracep->fullBit(oldp+317,(vlSymsp->TOP__test_top.__PVT__device_req
                                  [0U]));
        tracep->fullIData(oldp+318,(vlSymsp->TOP__test_top.__PVT__device_addr
                                    [0U]),32);
        tracep->fullIData(oldp+319,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                    [0U]),32);
        tracep->fullIData(oldp+320,(vlSymsp->TOP__test_top__dpram0.__PVT__data_o),32);
        tracep->fullCData(oldp+321,((3U & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [0U])),2);
        tracep->fullQData(oldp+322,(vlSymsp->TOP__test_top__dpram0.__PVT__data_temp),64);
        tracep->fullIData(oldp+324,((0x3ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                                     [0U])),22);
        tracep->fullIData(oldp+325,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[0]),32);
        tracep->fullIData(oldp+326,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[1]),32);
        tracep->fullIData(oldp+327,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[2]),32);
        tracep->fullIData(oldp+328,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[3]),32);
        tracep->fullIData(oldp+329,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[4]),32);
        tracep->fullIData(oldp+330,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[5]),32);
        tracep->fullIData(oldp+331,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[6]),32);
        tracep->fullIData(oldp+332,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[7]),32);
        tracep->fullIData(oldp+333,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[8]),32);
        tracep->fullIData(oldp+334,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[9]),32);
        tracep->fullIData(oldp+335,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[10]),32);
        tracep->fullIData(oldp+336,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[11]),32);
        tracep->fullIData(oldp+337,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[12]),32);
        tracep->fullIData(oldp+338,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[13]),32);
        tracep->fullIData(oldp+339,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[14]),32);
        tracep->fullIData(oldp+340,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[15]),32);
        tracep->fullIData(oldp+341,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[16]),32);
        tracep->fullIData(oldp+342,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[17]),32);
        tracep->fullIData(oldp+343,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[18]),32);
        tracep->fullIData(oldp+344,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[19]),32);
        tracep->fullIData(oldp+345,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[20]),32);
        tracep->fullIData(oldp+346,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[21]),32);
        tracep->fullIData(oldp+347,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[22]),32);
        tracep->fullIData(oldp+348,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[23]),32);
        tracep->fullIData(oldp+349,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[24]),32);
        tracep->fullIData(oldp+350,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[25]),32);
        tracep->fullIData(oldp+351,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[26]),32);
        tracep->fullIData(oldp+352,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[27]),32);
        tracep->fullIData(oldp+353,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[28]),32);
        tracep->fullIData(oldp+354,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[29]),32);
        tracep->fullIData(oldp+355,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[30]),32);
        tracep->fullIData(oldp+356,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_l_temp[31]),32);
        tracep->fullIData(oldp+357,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[0]),32);
        tracep->fullIData(oldp+358,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[1]),32);
        tracep->fullIData(oldp+359,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[2]),32);
        tracep->fullIData(oldp+360,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[3]),32);
        tracep->fullIData(oldp+361,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[4]),32);
        tracep->fullIData(oldp+362,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[5]),32);
        tracep->fullIData(oldp+363,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[6]),32);
        tracep->fullIData(oldp+364,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[7]),32);
        tracep->fullIData(oldp+365,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[8]),32);
        tracep->fullIData(oldp+366,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[9]),32);
        tracep->fullIData(oldp+367,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[10]),32);
        tracep->fullIData(oldp+368,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[11]),32);
        tracep->fullIData(oldp+369,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[12]),32);
        tracep->fullIData(oldp+370,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[13]),32);
        tracep->fullIData(oldp+371,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[14]),32);
        tracep->fullIData(oldp+372,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[15]),32);
        tracep->fullIData(oldp+373,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[16]),32);
        tracep->fullIData(oldp+374,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[17]),32);
        tracep->fullIData(oldp+375,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[18]),32);
        tracep->fullIData(oldp+376,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[19]),32);
        tracep->fullIData(oldp+377,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[20]),32);
        tracep->fullIData(oldp+378,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[21]),32);
        tracep->fullIData(oldp+379,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[22]),32);
        tracep->fullIData(oldp+380,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[23]),32);
        tracep->fullIData(oldp+381,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[24]),32);
        tracep->fullIData(oldp+382,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[25]),32);
        tracep->fullIData(oldp+383,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[26]),32);
        tracep->fullIData(oldp+384,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[27]),32);
        tracep->fullIData(oldp+385,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[28]),32);
        tracep->fullIData(oldp+386,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[29]),32);
        tracep->fullIData(oldp+387,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[30]),32);
        tracep->fullIData(oldp+388,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_i_type.__PVT__shift_r_temp[31]),32);
        tracep->fullIData(oldp+389,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[0]),32);
        tracep->fullIData(oldp+390,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[1]),32);
        tracep->fullIData(oldp+391,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[2]),32);
        tracep->fullIData(oldp+392,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[3]),32);
        tracep->fullIData(oldp+393,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[4]),32);
        tracep->fullIData(oldp+394,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[5]),32);
        tracep->fullIData(oldp+395,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[6]),32);
        tracep->fullIData(oldp+396,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[7]),32);
        tracep->fullIData(oldp+397,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[8]),32);
        tracep->fullIData(oldp+398,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[9]),32);
        tracep->fullIData(oldp+399,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[10]),32);
        tracep->fullIData(oldp+400,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[11]),32);
        tracep->fullIData(oldp+401,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[12]),32);
        tracep->fullIData(oldp+402,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[13]),32);
        tracep->fullIData(oldp+403,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[14]),32);
        tracep->fullIData(oldp+404,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[15]),32);
        tracep->fullIData(oldp+405,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[16]),32);
        tracep->fullIData(oldp+406,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[17]),32);
        tracep->fullIData(oldp+407,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[18]),32);
        tracep->fullIData(oldp+408,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[19]),32);
        tracep->fullIData(oldp+409,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[20]),32);
        tracep->fullIData(oldp+410,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[21]),32);
        tracep->fullIData(oldp+411,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[22]),32);
        tracep->fullIData(oldp+412,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[23]),32);
        tracep->fullIData(oldp+413,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[24]),32);
        tracep->fullIData(oldp+414,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[25]),32);
        tracep->fullIData(oldp+415,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[26]),32);
        tracep->fullIData(oldp+416,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[27]),32);
        tracep->fullIData(oldp+417,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[28]),32);
        tracep->fullIData(oldp+418,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[29]),32);
        tracep->fullIData(oldp+419,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[30]),32);
        tracep->fullIData(oldp+420,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp[31]),32);
        tracep->fullIData(oldp+421,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[0]),32);
        tracep->fullIData(oldp+422,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[1]),32);
        tracep->fullIData(oldp+423,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[2]),32);
        tracep->fullIData(oldp+424,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[3]),32);
        tracep->fullIData(oldp+425,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[4]),32);
        tracep->fullIData(oldp+426,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[5]),32);
        tracep->fullIData(oldp+427,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[6]),32);
        tracep->fullIData(oldp+428,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[7]),32);
        tracep->fullIData(oldp+429,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[8]),32);
        tracep->fullIData(oldp+430,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[9]),32);
        tracep->fullIData(oldp+431,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[10]),32);
        tracep->fullIData(oldp+432,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[11]),32);
        tracep->fullIData(oldp+433,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[12]),32);
        tracep->fullIData(oldp+434,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[13]),32);
        tracep->fullIData(oldp+435,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[14]),32);
        tracep->fullIData(oldp+436,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[15]),32);
        tracep->fullIData(oldp+437,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[16]),32);
        tracep->fullIData(oldp+438,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[17]),32);
        tracep->fullIData(oldp+439,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[18]),32);
        tracep->fullIData(oldp+440,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[19]),32);
        tracep->fullIData(oldp+441,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[20]),32);
        tracep->fullIData(oldp+442,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[21]),32);
        tracep->fullIData(oldp+443,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[22]),32);
        tracep->fullIData(oldp+444,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[23]),32);
        tracep->fullIData(oldp+445,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[24]),32);
        tracep->fullIData(oldp+446,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[25]),32);
        tracep->fullIData(oldp+447,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[26]),32);
        tracep->fullIData(oldp+448,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[27]),32);
        tracep->fullIData(oldp+449,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[28]),32);
        tracep->fullIData(oldp+450,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[29]),32);
        tracep->fullIData(oldp+451,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[30]),32);
        tracep->fullIData(oldp+452,(vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp[31]),32);
        tracep->fullBit(oldp+453,(vlTOPp->rst_i));
        tracep->fullBit(oldp+454,(vlTOPp->clk_i));
        tracep->fullBit(oldp+455,(vlTOPp->halt_o));
        tracep->fullIData(oldp+456,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
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
        tracep->fullBit(oldp+457,(((~ (IData)(vlTOPp->rst_i)) 
                                   & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))));
        tracep->fullCData(oldp+458,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))),2);
        tracep->fullBit(oldp+459,((1U & ((~ (IData)(vlTOPp->rst_i)) 
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
        tracep->fullIData(oldp+460,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+461,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+462,(((IData)(vlTOPp->rst_i)
                                      ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exe_exception)),32);
        tracep->fullIData(oldp+463,(((IData)(vlTOPp->rst_i)
                                      ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o)),32);
        tracep->fullIData(oldp+464,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+465,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x4000U 
                                               & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)
                                               ? vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_r_temp
                                              [(0x1fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)]
                                               : vlSymsp->TOP__test_top__core_top0__exe0__DOT__shift_r_type.__PVT__shift_l_temp
                                              [(0x1fU 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o)]))),32);
        tracep->fullIData(oldp+466,(((IData)(vlTOPp->rst_i)
                                      ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o)),32);
        tracep->fullIData(oldp+467,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffffeU 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 1U)))),32);
        tracep->fullIData(oldp+468,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffffcU 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 2U)))),32);
        tracep->fullIData(oldp+469,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffff8U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 3U)))),32);
        tracep->fullIData(oldp+470,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffff0U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 4U)))),32);
        tracep->fullIData(oldp+471,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffffe0U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 5U)))),32);
        tracep->fullIData(oldp+472,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffffc0U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 6U)))),32);
        tracep->fullIData(oldp+473,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffff80U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 7U)))),32);
        tracep->fullIData(oldp+474,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffff00U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 8U)))),32);
        tracep->fullIData(oldp+475,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffe00U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 9U)))),32);
        tracep->fullIData(oldp+476,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffffc00U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0xaU)))),32);
        tracep->fullIData(oldp+477,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffff800U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0xbU)))),32);
        tracep->fullIData(oldp+478,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffff000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0xcU)))),32);
        tracep->fullIData(oldp+479,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffe000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0xdU)))),32);
        tracep->fullIData(oldp+480,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffffc000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0xeU)))),32);
        tracep->fullIData(oldp+481,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffff8000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0xfU)))),32);
        tracep->fullIData(oldp+482,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffff0000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x10U)))),32);
        tracep->fullIData(oldp+483,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffe0000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x11U)))),32);
        tracep->fullIData(oldp+484,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfffc0000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x12U)))),32);
        tracep->fullIData(oldp+485,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfff80000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x13U)))),32);
        tracep->fullIData(oldp+486,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfff00000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x14U)))),32);
        tracep->fullIData(oldp+487,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffe00000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x15U)))),32);
        tracep->fullIData(oldp+488,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xffc00000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x16U)))),32);
        tracep->fullIData(oldp+489,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xff800000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x17U)))),32);
        tracep->fullIData(oldp+490,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xff000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x18U)))),32);
        tracep->fullIData(oldp+491,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfe000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x19U)))),32);
        tracep->fullIData(oldp+492,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xfc000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x1aU)))),32);
        tracep->fullIData(oldp+493,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xf8000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x1bU)))),32);
        tracep->fullIData(oldp+494,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xf0000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x1cU)))),32);
        tracep->fullIData(oldp+495,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xe0000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x1dU)))),32);
        tracep->fullIData(oldp+496,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0xc0000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x1eU)))),32);
        tracep->fullIData(oldp+497,(((IData)(vlTOPp->rst_i)
                                      ? 0U : (0x80000000U 
                                              & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                                 << 0x1fU)))),32);
        tracep->fullIData(oldp+498,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+499,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+500,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+501,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+502,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+503,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+504,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+505,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+506,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+507,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+508,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+509,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+510,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+511,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+512,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+513,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+514,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+515,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+516,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+517,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+518,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+519,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+520,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+521,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+522,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+523,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+524,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+525,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+526,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+527,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+528,(((IData)(vlTOPp->rst_i)
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
        tracep->fullIData(oldp+529,(4U),32);
        tracep->fullIData(oldp+530,(1U),32);
        tracep->fullIData(oldp+531,(0x100000U),32);
        tracep->fullIData(oldp+532,(0x18U),32);
        tracep->fullIData(oldp+533,(4U),32);
        tracep->fullIData(oldp+534,(1U),32);
        tracep->fullIData(oldp+535,(0x20U),32);
        tracep->fullIData(oldp+536,(2U),32);
        tracep->fullIData(oldp+537,(0xffffffffU),32);
        tracep->fullIData(oldp+538,(4U),32);
        tracep->fullIData(oldp+539,(1U),32);
        tracep->fullBit(oldp+540,(1U));
        tracep->fullCData(oldp+541,(4U),8);
        tracep->fullCData(oldp+542,(8U),8);
        tracep->fullSData(oldp+543,(0x4000U),16);
        tracep->fullSData(oldp+544,(0U),16);
        tracep->fullSData(oldp+545,(0xbff8U),16);
        tracep->fullBit(oldp+546,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_halt_o));
        tracep->fullBit(oldp+547,(vlSymsp->TOP__test_top__core_top0.__PVT__wb_csr_instret_incr));
        tracep->fullIData(oldp+548,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_interrupt_ctrl_exception),32);
        tracep->fullBit(oldp+549,(vlSymsp->TOP__test_top__core_top0.__PVT__mstatus_ie));
        tracep->fullBit(oldp+550,(vlSymsp->TOP__test_top__core_top0.__PVT__mie_external));
        tracep->fullBit(oldp+551,(vlSymsp->TOP__test_top__core_top0.__PVT__mie_timer));
        tracep->fullBit(oldp+552,(vlSymsp->TOP__test_top__core_top0.__PVT__mie_software));
        tracep->fullBit(oldp+553,(vlSymsp->TOP__test_top__core_top0.__PVT__mip_external));
        tracep->fullBit(oldp+554,(vlSymsp->TOP__test_top__core_top0.__PVT__mip_timer));
        tracep->fullBit(oldp+555,(vlSymsp->TOP__test_top__core_top0.__PVT__mip_software));
        tracep->fullIData(oldp+556,(vlSymsp->TOP__test_top__core_top0.__PVT__mtvec),32);
        tracep->fullIData(oldp+557,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_interrupt_ctrl_mepc),32);
        tracep->fullBit(oldp+558,(vlSymsp->TOP__test_top__core_top0.__PVT__mepc));
        tracep->fullCData(oldp+559,(0U),5);
        tracep->fullBit(oldp+560,(1U));
        tracep->fullBit(oldp+561,(0U));
        tracep->fullIData(oldp+562,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__compare_sub_type_r),32);
        tracep->fullCData(oldp+563,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__m_d_op),2);
        tracep->fullBit(oldp+564,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__rs1_signed_i));
        tracep->fullBit(oldp+565,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__rs2_signed_i));
        tracep->fullBit(oldp+566,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__irq_external_i));
        tracep->fullIData(oldp+567,(0U),32);
        tracep->fullIData(oldp+568,(0x16U),32);
        tracep->fullCData(oldp+569,(1U),2);
        tracep->fullIData(oldp+570,(0x1100U),26);
        tracep->fullIData(oldp+571,(0x40001100U),32);
        tracep->fullCData(oldp+572,(1U),4);
        tracep->fullCData(oldp+573,(2U),4);
        tracep->fullCData(oldp+574,(4U),4);
        tracep->fullCData(oldp+575,(8U),4);
        tracep->fullBit(oldp+576,((1U & vlSymsp->TOP__test_top__core_top0.__PVT__mem_interrupt_ctrl_exception)));
        tracep->fullBit(oldp+577,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__mem_interrupt_ctrl_exception 
                                         >> 1U))));
        tracep->fullCData(oldp+578,((3U & vlSymsp->TOP__test_top__core_top0.__PVT__mtvec)),2);
        tracep->fullIData(oldp+579,((0x3fffffffU & 
                                     (vlSymsp->TOP__test_top__core_top0.__PVT__mtvec 
                                      >> 2U))),30);
        tracep->fullIData(oldp+580,(0U),32);
        tracep->fullIData(oldp+581,(1U),32);
        tracep->fullIData(oldp+582,(2U),32);
        tracep->fullIData(oldp+583,(3U),32);
        tracep->fullIData(oldp+584,(4U),32);
        tracep->fullIData(oldp+585,(5U),32);
        tracep->fullIData(oldp+586,(6U),32);
        tracep->fullIData(oldp+587,(7U),32);
        tracep->fullIData(oldp+588,(8U),32);
        tracep->fullIData(oldp+589,(9U),32);
        tracep->fullIData(oldp+590,(0xaU),32);
        tracep->fullIData(oldp+591,(0xbU),32);
        tracep->fullIData(oldp+592,(0xcU),32);
        tracep->fullIData(oldp+593,(0xdU),32);
        tracep->fullIData(oldp+594,(0xeU),32);
        tracep->fullIData(oldp+595,(0xfU),32);
        tracep->fullIData(oldp+596,(0x10U),32);
        tracep->fullIData(oldp+597,(0x11U),32);
        tracep->fullIData(oldp+598,(0x12U),32);
        tracep->fullIData(oldp+599,(0x13U),32);
        tracep->fullIData(oldp+600,(0x14U),32);
        tracep->fullIData(oldp+601,(0x15U),32);
        tracep->fullIData(oldp+602,(0x17U),32);
        tracep->fullIData(oldp+603,(0x18U),32);
        tracep->fullIData(oldp+604,(0x19U),32);
        tracep->fullIData(oldp+605,(0x1aU),32);
        tracep->fullIData(oldp+606,(0x1bU),32);
        tracep->fullIData(oldp+607,(0x1cU),32);
        tracep->fullIData(oldp+608,(0x1dU),32);
        tracep->fullIData(oldp+609,(0x1eU),32);
        tracep->fullIData(oldp+610,(0x1fU),32);
    }
}
