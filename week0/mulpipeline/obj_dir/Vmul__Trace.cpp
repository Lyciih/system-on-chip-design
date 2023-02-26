// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmul__Syms.h"


void Vmul::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vmul__Syms* __restrict vlSymsp = static_cast<Vmul__Syms*>(userp);
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vmul::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vmul__Syms* __restrict vlSymsp = static_cast<Vmul__Syms*>(userp);
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgWData(oldp+0,(vlTOPp->mul__DOT__acc_temp[0]),65);
            tracep->chgWData(oldp+3,(vlTOPp->mul__DOT__acc_temp[1]),65);
            tracep->chgWData(oldp+6,(vlTOPp->mul__DOT__acc_temp[2]),65);
            tracep->chgWData(oldp+9,(vlTOPp->mul__DOT__acc_temp[3]),65);
            tracep->chgWData(oldp+12,(vlTOPp->mul__DOT__acc_temp[4]),65);
            tracep->chgWData(oldp+15,(vlTOPp->mul__DOT__acc_temp[5]),65);
            tracep->chgWData(oldp+18,(vlTOPp->mul__DOT__acc_temp[6]),65);
            tracep->chgWData(oldp+21,(vlTOPp->mul__DOT__acc_temp[7]),65);
            tracep->chgWData(oldp+24,(vlTOPp->mul__DOT__acc_temp[8]),65);
            tracep->chgWData(oldp+27,(vlTOPp->mul__DOT__acc_temp[9]),65);
            tracep->chgWData(oldp+30,(vlTOPp->mul__DOT__acc_temp[10]),65);
            tracep->chgWData(oldp+33,(vlTOPp->mul__DOT__acc_temp[11]),65);
            tracep->chgWData(oldp+36,(vlTOPp->mul__DOT__acc_temp[12]),65);
            tracep->chgWData(oldp+39,(vlTOPp->mul__DOT__acc_temp[13]),65);
            tracep->chgWData(oldp+42,(vlTOPp->mul__DOT__acc_temp[14]),65);
            tracep->chgWData(oldp+45,(vlTOPp->mul__DOT__acc_temp[15]),65);
            tracep->chgWData(oldp+48,(vlTOPp->mul__DOT__acc_temp[16]),65);
            tracep->chgWData(oldp+51,(vlTOPp->mul__DOT__acc_temp[17]),65);
            tracep->chgWData(oldp+54,(vlTOPp->mul__DOT__acc_temp[18]),65);
            tracep->chgWData(oldp+57,(vlTOPp->mul__DOT__acc_temp[19]),65);
            tracep->chgWData(oldp+60,(vlTOPp->mul__DOT__acc_temp[20]),65);
            tracep->chgWData(oldp+63,(vlTOPp->mul__DOT__acc_temp[21]),65);
            tracep->chgWData(oldp+66,(vlTOPp->mul__DOT__acc_temp[22]),65);
            tracep->chgWData(oldp+69,(vlTOPp->mul__DOT__acc_temp[23]),65);
            tracep->chgWData(oldp+72,(vlTOPp->mul__DOT__acc_temp[24]),65);
            tracep->chgWData(oldp+75,(vlTOPp->mul__DOT__acc_temp[25]),65);
            tracep->chgWData(oldp+78,(vlTOPp->mul__DOT__acc_temp[26]),65);
            tracep->chgWData(oldp+81,(vlTOPp->mul__DOT__acc_temp[27]),65);
            tracep->chgWData(oldp+84,(vlTOPp->mul__DOT__acc_temp[28]),65);
            tracep->chgWData(oldp+87,(vlTOPp->mul__DOT__acc_temp[29]),65);
            tracep->chgWData(oldp+90,(vlTOPp->mul__DOT__acc_temp[30]),65);
            tracep->chgWData(oldp+93,(vlTOPp->mul__DOT__acc_temp[31]),65);
            tracep->chgWData(oldp+96,(vlTOPp->mul__DOT__acc_temp_1[0]),65);
            tracep->chgWData(oldp+99,(vlTOPp->mul__DOT__acc_temp_1[1]),65);
            tracep->chgWData(oldp+102,(vlTOPp->mul__DOT__acc_temp_1[2]),65);
            tracep->chgWData(oldp+105,(vlTOPp->mul__DOT__acc_temp_1[3]),65);
            tracep->chgWData(oldp+108,(vlTOPp->mul__DOT__acc_temp_1[4]),65);
            tracep->chgWData(oldp+111,(vlTOPp->mul__DOT__acc_temp_1[5]),65);
            tracep->chgWData(oldp+114,(vlTOPp->mul__DOT__acc_temp_1[6]),65);
            tracep->chgWData(oldp+117,(vlTOPp->mul__DOT__acc_temp_1[7]),65);
            tracep->chgWData(oldp+120,(vlTOPp->mul__DOT__acc_temp_1[8]),65);
            tracep->chgWData(oldp+123,(vlTOPp->mul__DOT__acc_temp_1[9]),65);
            tracep->chgWData(oldp+126,(vlTOPp->mul__DOT__acc_temp_1[10]),65);
            tracep->chgWData(oldp+129,(vlTOPp->mul__DOT__acc_temp_1[11]),65);
            tracep->chgWData(oldp+132,(vlTOPp->mul__DOT__acc_temp_1[12]),65);
            tracep->chgWData(oldp+135,(vlTOPp->mul__DOT__acc_temp_1[13]),65);
            tracep->chgWData(oldp+138,(vlTOPp->mul__DOT__acc_temp_1[14]),65);
            tracep->chgWData(oldp+141,(vlTOPp->mul__DOT__acc_temp_1[15]),65);
            tracep->chgWData(oldp+144,(vlTOPp->mul__DOT__acc_temp_2[0]),65);
            tracep->chgWData(oldp+147,(vlTOPp->mul__DOT__acc_temp_2[1]),65);
            tracep->chgWData(oldp+150,(vlTOPp->mul__DOT__acc_temp_2[2]),65);
            tracep->chgWData(oldp+153,(vlTOPp->mul__DOT__acc_temp_2[3]),65);
            tracep->chgWData(oldp+156,(vlTOPp->mul__DOT__acc_temp_2[4]),65);
            tracep->chgWData(oldp+159,(vlTOPp->mul__DOT__acc_temp_2[5]),65);
            tracep->chgWData(oldp+162,(vlTOPp->mul__DOT__acc_temp_2[6]),65);
            tracep->chgWData(oldp+165,(vlTOPp->mul__DOT__acc_temp_2[7]),65);
            tracep->chgWData(oldp+168,(vlTOPp->mul__DOT__acc_temp_3[0]),65);
            tracep->chgWData(oldp+171,(vlTOPp->mul__DOT__acc_temp_3[1]),65);
            tracep->chgWData(oldp+174,(vlTOPp->mul__DOT__acc_temp_3[2]),65);
            tracep->chgWData(oldp+177,(vlTOPp->mul__DOT__acc_temp_3[3]),65);
            tracep->chgWData(oldp+180,(vlTOPp->mul__DOT__acc_temp_4[0]),65);
            tracep->chgWData(oldp+183,(vlTOPp->mul__DOT__acc_temp_4[1]),65);
            tracep->chgWData(oldp+186,(vlTOPp->mul__DOT__acc_temp_5),65);
            tracep->chgIData(oldp+189,(vlTOPp->mul__DOT__ready_temp),32);
            tracep->chgWData(oldp+190,(vlTOPp->mul__DOT____Vcellout__u_mult_step0__acc_o),65);
            tracep->chgBit(oldp+193,(vlTOPp->mul__DOT____Vcellout__u_mult_step0__ready_o));
            tracep->chgWData(oldp+194,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+197,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+198,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+201,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+202,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+205,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+206,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+209,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+210,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+213,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+214,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+217,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+218,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+221,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+222,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+225,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+226,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+229,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+230,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+233,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+234,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+237,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+238,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+241,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+242,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+245,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+246,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+249,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+250,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+253,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+254,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+257,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+258,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+261,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+262,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+265,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+266,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+269,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+270,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+273,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+274,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+277,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+278,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+281,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+282,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+285,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+286,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+289,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+290,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+293,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+294,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+297,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+298,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+301,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+302,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+305,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+306,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+309,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+310,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+313,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__ready_o));
            tracep->chgWData(oldp+314,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__acc_o),65);
            tracep->chgBit(oldp+317,(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__ready_o));
        }
        tracep->chgBit(oldp+318,(vlTOPp->clk_i));
        tracep->chgBit(oldp+319,(vlTOPp->rst_i));
        tracep->chgBit(oldp+320,(vlTOPp->req_i));
        tracep->chgIData(oldp+321,(vlTOPp->a_i),32);
        tracep->chgIData(oldp+322,(vlTOPp->b_i),32);
        tracep->chgBit(oldp+323,(vlTOPp->ready_o));
        tracep->chgQData(oldp+324,(vlTOPp->result_o),64);
        tracep->chgBit(oldp+326,(vlTOPp->overflow_o));
        tracep->chgBit(oldp+327,((1U & (~ (IData)(vlTOPp->req_i)))));
        tracep->chgBit(oldp+328,((1U & vlTOPp->b_i)));
        tracep->chgBit(oldp+329,((1U & (vlTOPp->b_i 
                                        >> 1U))));
        tracep->chgBit(oldp+330,((1U & (vlTOPp->b_i 
                                        >> 2U))));
        tracep->chgBit(oldp+331,((1U & (vlTOPp->b_i 
                                        >> 3U))));
        tracep->chgBit(oldp+332,((1U & (vlTOPp->b_i 
                                        >> 4U))));
        tracep->chgBit(oldp+333,((1U & (vlTOPp->b_i 
                                        >> 5U))));
        tracep->chgBit(oldp+334,((1U & (vlTOPp->b_i 
                                        >> 6U))));
        tracep->chgBit(oldp+335,((1U & (vlTOPp->b_i 
                                        >> 7U))));
        tracep->chgBit(oldp+336,((1U & (vlTOPp->b_i 
                                        >> 8U))));
        tracep->chgBit(oldp+337,((1U & (vlTOPp->b_i 
                                        >> 9U))));
        tracep->chgBit(oldp+338,((1U & (vlTOPp->b_i 
                                        >> 0xaU))));
        tracep->chgBit(oldp+339,((1U & (vlTOPp->b_i 
                                        >> 0xbU))));
        tracep->chgBit(oldp+340,((1U & (vlTOPp->b_i 
                                        >> 0xcU))));
        tracep->chgBit(oldp+341,((1U & (vlTOPp->b_i 
                                        >> 0xdU))));
        tracep->chgBit(oldp+342,((1U & (vlTOPp->b_i 
                                        >> 0xeU))));
        tracep->chgBit(oldp+343,((1U & (vlTOPp->b_i 
                                        >> 0xfU))));
        tracep->chgBit(oldp+344,((1U & (vlTOPp->b_i 
                                        >> 0x10U))));
        tracep->chgBit(oldp+345,((1U & (vlTOPp->b_i 
                                        >> 0x11U))));
        tracep->chgBit(oldp+346,((1U & (vlTOPp->b_i 
                                        >> 0x12U))));
        tracep->chgBit(oldp+347,((1U & (vlTOPp->b_i 
                                        >> 0x13U))));
        tracep->chgBit(oldp+348,((1U & (vlTOPp->b_i 
                                        >> 0x14U))));
        tracep->chgBit(oldp+349,((1U & (vlTOPp->b_i 
                                        >> 0x15U))));
        tracep->chgBit(oldp+350,((1U & (vlTOPp->b_i 
                                        >> 0x16U))));
        tracep->chgBit(oldp+351,((1U & (vlTOPp->b_i 
                                        >> 0x17U))));
        tracep->chgBit(oldp+352,((1U & (vlTOPp->b_i 
                                        >> 0x18U))));
        tracep->chgBit(oldp+353,((1U & (vlTOPp->b_i 
                                        >> 0x19U))));
        tracep->chgBit(oldp+354,((1U & (vlTOPp->b_i 
                                        >> 0x1aU))));
        tracep->chgBit(oldp+355,((1U & (vlTOPp->b_i 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+356,((1U & (vlTOPp->b_i 
                                        >> 0x1cU))));
        tracep->chgBit(oldp+357,((1U & (vlTOPp->b_i 
                                        >> 0x1dU))));
        tracep->chgBit(oldp+358,((1U & (vlTOPp->b_i 
                                        >> 0x1eU))));
        tracep->chgBit(oldp+359,((1U & (vlTOPp->b_i 
                                        >> 0x1fU))));
    }
}

void Vmul::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vmul__Syms* __restrict vlSymsp = static_cast<Vmul__Syms*>(userp);
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
