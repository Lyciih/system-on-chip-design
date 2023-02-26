// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul.h for the primary calling header

#include "Vmul.h"
#include "Vmul__Syms.h"

//==========

VL_CTOR_IMP(Vmul) {
    Vmul__Syms* __restrict vlSymsp = __VlSymsp = new Vmul__Syms(this, name());
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmul::__Vconfigure(Vmul__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vmul::~Vmul() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vmul::_settle__TOP__2(Vmul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_settle__TOP__2\n"); );
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp477[3];
    WData/*95:0*/ __Vtemp478[3];
    WData/*95:0*/ __Vtemp479[3];
    WData/*95:0*/ __Vtemp482[3];
    WData/*95:0*/ __Vtemp483[3];
    WData/*95:0*/ __Vtemp484[3];
    WData/*95:0*/ __Vtemp487[3];
    WData/*95:0*/ __Vtemp488[3];
    WData/*95:0*/ __Vtemp489[3];
    WData/*95:0*/ __Vtemp492[3];
    WData/*95:0*/ __Vtemp493[3];
    WData/*95:0*/ __Vtemp494[3];
    WData/*95:0*/ __Vtemp497[3];
    WData/*95:0*/ __Vtemp498[3];
    WData/*95:0*/ __Vtemp499[3];
    WData/*95:0*/ __Vtemp502[3];
    WData/*95:0*/ __Vtemp503[3];
    WData/*95:0*/ __Vtemp504[3];
    WData/*95:0*/ __Vtemp507[3];
    WData/*95:0*/ __Vtemp508[3];
    WData/*95:0*/ __Vtemp509[3];
    WData/*95:0*/ __Vtemp512[3];
    WData/*95:0*/ __Vtemp513[3];
    WData/*95:0*/ __Vtemp514[3];
    WData/*95:0*/ __Vtemp517[3];
    WData/*95:0*/ __Vtemp518[3];
    WData/*95:0*/ __Vtemp519[3];
    WData/*95:0*/ __Vtemp522[3];
    WData/*95:0*/ __Vtemp523[3];
    WData/*95:0*/ __Vtemp524[3];
    WData/*95:0*/ __Vtemp527[3];
    WData/*95:0*/ __Vtemp528[3];
    WData/*95:0*/ __Vtemp529[3];
    WData/*95:0*/ __Vtemp532[3];
    WData/*95:0*/ __Vtemp533[3];
    WData/*95:0*/ __Vtemp534[3];
    WData/*95:0*/ __Vtemp537[3];
    WData/*95:0*/ __Vtemp538[3];
    WData/*95:0*/ __Vtemp539[3];
    WData/*95:0*/ __Vtemp542[3];
    WData/*95:0*/ __Vtemp543[3];
    WData/*95:0*/ __Vtemp544[3];
    WData/*95:0*/ __Vtemp547[3];
    WData/*95:0*/ __Vtemp548[3];
    WData/*95:0*/ __Vtemp549[3];
    WData/*95:0*/ __Vtemp552[3];
    WData/*95:0*/ __Vtemp553[3];
    WData/*95:0*/ __Vtemp554[3];
    WData/*95:0*/ __Vtemp557[3];
    WData/*95:0*/ __Vtemp558[3];
    WData/*95:0*/ __Vtemp559[3];
    WData/*95:0*/ __Vtemp562[3];
    WData/*95:0*/ __Vtemp563[3];
    WData/*95:0*/ __Vtemp564[3];
    WData/*95:0*/ __Vtemp567[3];
    WData/*95:0*/ __Vtemp568[3];
    WData/*95:0*/ __Vtemp569[3];
    WData/*95:0*/ __Vtemp572[3];
    WData/*95:0*/ __Vtemp573[3];
    WData/*95:0*/ __Vtemp574[3];
    WData/*95:0*/ __Vtemp577[3];
    WData/*95:0*/ __Vtemp578[3];
    WData/*95:0*/ __Vtemp579[3];
    WData/*95:0*/ __Vtemp582[3];
    WData/*95:0*/ __Vtemp583[3];
    WData/*95:0*/ __Vtemp584[3];
    WData/*95:0*/ __Vtemp587[3];
    WData/*95:0*/ __Vtemp588[3];
    WData/*95:0*/ __Vtemp589[3];
    WData/*95:0*/ __Vtemp592[3];
    WData/*95:0*/ __Vtemp593[3];
    WData/*95:0*/ __Vtemp594[3];
    WData/*95:0*/ __Vtemp597[3];
    WData/*95:0*/ __Vtemp598[3];
    WData/*95:0*/ __Vtemp599[3];
    WData/*95:0*/ __Vtemp602[3];
    WData/*95:0*/ __Vtemp603[3];
    WData/*95:0*/ __Vtemp604[3];
    WData/*95:0*/ __Vtemp607[3];
    WData/*95:0*/ __Vtemp608[3];
    WData/*95:0*/ __Vtemp609[3];
    WData/*95:0*/ __Vtemp612[3];
    WData/*95:0*/ __Vtemp613[3];
    WData/*95:0*/ __Vtemp614[3];
    WData/*95:0*/ __Vtemp617[3];
    WData/*95:0*/ __Vtemp618[3];
    WData/*95:0*/ __Vtemp619[3];
    WData/*95:0*/ __Vtemp622[3];
    WData/*95:0*/ __Vtemp623[3];
    WData/*95:0*/ __Vtemp624[3];
    WData/*95:0*/ __Vtemp627[3];
    WData/*95:0*/ __Vtemp628[3];
    WData/*95:0*/ __Vtemp629[3];
    // Body
    vlTOPp->mul__DOT__ready_temp = ((0xfffffffeU & vlTOPp->mul__DOT__ready_temp) 
                                    | (IData)(vlTOPp->mul__DOT____Vcellout__u_mult_step0__ready_o));
    vlTOPp->mul__DOT__ready_temp = ((0xfffffffdU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__ready_o) 
                                       << 1U));
    vlTOPp->mul__DOT__ready_temp = ((0xfffffffbU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__ready_o) 
                                       << 2U));
    vlTOPp->mul__DOT__ready_temp = ((0xfffffff7U & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__ready_o) 
                                       << 3U));
    vlTOPp->mul__DOT__ready_temp = ((0xffffffefU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__ready_o) 
                                       << 4U));
    vlTOPp->mul__DOT__ready_temp = ((0xffffffdfU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__ready_o) 
                                       << 5U));
    vlTOPp->mul__DOT__ready_temp = ((0xffffffbfU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__ready_o) 
                                       << 6U));
    vlTOPp->mul__DOT__ready_temp = ((0xffffff7fU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__ready_o) 
                                       << 7U));
    vlTOPp->mul__DOT__ready_temp = ((0xfffffeffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__ready_o) 
                                       << 8U));
    vlTOPp->mul__DOT__ready_temp = ((0xfffffdffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__ready_o) 
                                       << 9U));
    vlTOPp->mul__DOT__ready_temp = ((0xfffffbffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__ready_o) 
                                       << 0xaU));
    vlTOPp->mul__DOT__ready_temp = ((0xfffff7ffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__ready_o) 
                                       << 0xbU));
    vlTOPp->mul__DOT__ready_temp = ((0xffffefffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__ready_o) 
                                       << 0xcU));
    vlTOPp->mul__DOT__ready_temp = ((0xffffdfffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__ready_o) 
                                       << 0xdU));
    vlTOPp->mul__DOT__ready_temp = ((0xffffbfffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__ready_o) 
                                       << 0xeU));
    vlTOPp->mul__DOT__ready_temp = ((0xffff7fffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__ready_o) 
                                       << 0xfU));
    vlTOPp->mul__DOT__ready_temp = ((0xfffeffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__ready_o) 
                                       << 0x10U));
    vlTOPp->mul__DOT__ready_temp = ((0xfffdffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__ready_o) 
                                       << 0x11U));
    vlTOPp->mul__DOT__ready_temp = ((0xfffbffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__ready_o) 
                                       << 0x12U));
    vlTOPp->mul__DOT__ready_temp = ((0xfff7ffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__ready_o) 
                                       << 0x13U));
    vlTOPp->mul__DOT__ready_temp = ((0xffefffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__ready_o) 
                                       << 0x14U));
    vlTOPp->mul__DOT__ready_temp = ((0xffdfffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__ready_o) 
                                       << 0x15U));
    vlTOPp->mul__DOT__ready_temp = ((0xffbfffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__ready_o) 
                                       << 0x16U));
    vlTOPp->mul__DOT__ready_temp = ((0xff7fffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__ready_o) 
                                       << 0x17U));
    vlTOPp->mul__DOT__ready_temp = ((0xfeffffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__ready_o) 
                                       << 0x18U));
    vlTOPp->mul__DOT__ready_temp = ((0xfdffffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__ready_o) 
                                       << 0x19U));
    vlTOPp->mul__DOT__ready_temp = ((0xfbffffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__ready_o) 
                                       << 0x1aU));
    vlTOPp->mul__DOT__ready_temp = ((0xf7ffffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__ready_o) 
                                       << 0x1bU));
    vlTOPp->mul__DOT__ready_temp = ((0xefffffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__ready_o) 
                                       << 0x1cU));
    vlTOPp->mul__DOT__ready_temp = ((0xdfffffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__ready_o) 
                                       << 0x1dU));
    vlTOPp->mul__DOT__ready_temp = ((0xbfffffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__ready_o) 
                                       << 0x1eU));
    vlTOPp->mul__DOT__ready_temp = ((0x7fffffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__ready_o) 
                                       << 0x1fU));
    vlTOPp->mul__DOT__acc_temp[0U][0U] = vlTOPp->mul__DOT____Vcellout__u_mult_step0__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0U][1U] = vlTOPp->mul__DOT____Vcellout__u_mult_step0__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0U][2U] = vlTOPp->mul__DOT____Vcellout__u_mult_step0__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[1U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[1U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[1U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[2U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[2U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[2U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[3U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[3U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[3U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[4U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[4U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[4U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[5U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[5U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[5U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[6U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[6U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[6U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[7U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[7U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[7U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[8U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[8U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[8U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[9U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[9U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[9U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0xaU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0xaU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0xaU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0xbU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0xbU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0xbU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0xcU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0xcU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0xcU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0xdU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0xdU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0xdU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0xeU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0xeU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0xeU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0xfU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0xfU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0xfU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x10U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x10U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x10U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x11U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x11U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x11U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x12U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x12U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x12U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x13U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x13U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x13U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x14U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x14U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x14U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x15U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x15U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x15U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x16U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x16U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x16U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x17U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x17U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x17U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x18U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x18U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x18U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x19U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x19U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x19U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x1aU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x1aU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x1aU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x1bU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x1bU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x1bU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x1cU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x1cU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x1cU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x1dU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x1dU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x1dU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x1eU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x1eU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x1eU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x1fU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x1fU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x1fU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->ready_o = ((~ (IData)(vlTOPp->rst_i)) & 
                       ((IData)(vlTOPp->req_i) & (vlTOPp->mul__DOT__ready_temp 
                                                  >> 0x1fU)));
    __Vtemp477[0U] = vlTOPp->mul__DOT__acc_temp[0U][0U];
    __Vtemp477[1U] = vlTOPp->mul__DOT__acc_temp[0U][1U];
    __Vtemp477[2U] = vlTOPp->mul__DOT__acc_temp[0U][2U];
    __Vtemp478[0U] = vlTOPp->mul__DOT__acc_temp[1U][0U];
    __Vtemp478[1U] = vlTOPp->mul__DOT__acc_temp[1U][1U];
    __Vtemp478[2U] = vlTOPp->mul__DOT__acc_temp[1U][2U];
    VL_ADD_W(3, __Vtemp479, __Vtemp477, __Vtemp478);
    vlTOPp->mul__DOT__acc_temp_1[0U][0U] = __Vtemp479[0U];
    vlTOPp->mul__DOT__acc_temp_1[0U][1U] = __Vtemp479[1U];
    vlTOPp->mul__DOT__acc_temp_1[0U][2U] = (1U & __Vtemp479[2U]);
    __Vtemp482[0U] = vlTOPp->mul__DOT__acc_temp[2U][0U];
    __Vtemp482[1U] = vlTOPp->mul__DOT__acc_temp[2U][1U];
    __Vtemp482[2U] = vlTOPp->mul__DOT__acc_temp[2U][2U];
    __Vtemp483[0U] = vlTOPp->mul__DOT__acc_temp[3U][0U];
    __Vtemp483[1U] = vlTOPp->mul__DOT__acc_temp[3U][1U];
    __Vtemp483[2U] = vlTOPp->mul__DOT__acc_temp[3U][2U];
    VL_ADD_W(3, __Vtemp484, __Vtemp482, __Vtemp483);
    vlTOPp->mul__DOT__acc_temp_1[1U][0U] = __Vtemp484[0U];
    vlTOPp->mul__DOT__acc_temp_1[1U][1U] = __Vtemp484[1U];
    vlTOPp->mul__DOT__acc_temp_1[1U][2U] = (1U & __Vtemp484[2U]);
    __Vtemp487[0U] = vlTOPp->mul__DOT__acc_temp[4U][0U];
    __Vtemp487[1U] = vlTOPp->mul__DOT__acc_temp[4U][1U];
    __Vtemp487[2U] = vlTOPp->mul__DOT__acc_temp[4U][2U];
    __Vtemp488[0U] = vlTOPp->mul__DOT__acc_temp[5U][0U];
    __Vtemp488[1U] = vlTOPp->mul__DOT__acc_temp[5U][1U];
    __Vtemp488[2U] = vlTOPp->mul__DOT__acc_temp[5U][2U];
    VL_ADD_W(3, __Vtemp489, __Vtemp487, __Vtemp488);
    vlTOPp->mul__DOT__acc_temp_1[2U][0U] = __Vtemp489[0U];
    vlTOPp->mul__DOT__acc_temp_1[2U][1U] = __Vtemp489[1U];
    vlTOPp->mul__DOT__acc_temp_1[2U][2U] = (1U & __Vtemp489[2U]);
    __Vtemp492[0U] = vlTOPp->mul__DOT__acc_temp[6U][0U];
    __Vtemp492[1U] = vlTOPp->mul__DOT__acc_temp[6U][1U];
    __Vtemp492[2U] = vlTOPp->mul__DOT__acc_temp[6U][2U];
    __Vtemp493[0U] = vlTOPp->mul__DOT__acc_temp[7U][0U];
    __Vtemp493[1U] = vlTOPp->mul__DOT__acc_temp[7U][1U];
    __Vtemp493[2U] = vlTOPp->mul__DOT__acc_temp[7U][2U];
    VL_ADD_W(3, __Vtemp494, __Vtemp492, __Vtemp493);
    vlTOPp->mul__DOT__acc_temp_1[3U][0U] = __Vtemp494[0U];
    vlTOPp->mul__DOT__acc_temp_1[3U][1U] = __Vtemp494[1U];
    vlTOPp->mul__DOT__acc_temp_1[3U][2U] = (1U & __Vtemp494[2U]);
    __Vtemp497[0U] = vlTOPp->mul__DOT__acc_temp[8U][0U];
    __Vtemp497[1U] = vlTOPp->mul__DOT__acc_temp[8U][1U];
    __Vtemp497[2U] = vlTOPp->mul__DOT__acc_temp[8U][2U];
    __Vtemp498[0U] = vlTOPp->mul__DOT__acc_temp[9U][0U];
    __Vtemp498[1U] = vlTOPp->mul__DOT__acc_temp[9U][1U];
    __Vtemp498[2U] = vlTOPp->mul__DOT__acc_temp[9U][2U];
    VL_ADD_W(3, __Vtemp499, __Vtemp497, __Vtemp498);
    vlTOPp->mul__DOT__acc_temp_1[4U][0U] = __Vtemp499[0U];
    vlTOPp->mul__DOT__acc_temp_1[4U][1U] = __Vtemp499[1U];
    vlTOPp->mul__DOT__acc_temp_1[4U][2U] = (1U & __Vtemp499[2U]);
    __Vtemp502[0U] = vlTOPp->mul__DOT__acc_temp[0xaU][0U];
    __Vtemp502[1U] = vlTOPp->mul__DOT__acc_temp[0xaU][1U];
    __Vtemp502[2U] = vlTOPp->mul__DOT__acc_temp[0xaU][2U];
    __Vtemp503[0U] = vlTOPp->mul__DOT__acc_temp[0xbU][0U];
    __Vtemp503[1U] = vlTOPp->mul__DOT__acc_temp[0xbU][1U];
    __Vtemp503[2U] = vlTOPp->mul__DOT__acc_temp[0xbU][2U];
    VL_ADD_W(3, __Vtemp504, __Vtemp502, __Vtemp503);
    vlTOPp->mul__DOT__acc_temp_1[5U][0U] = __Vtemp504[0U];
    vlTOPp->mul__DOT__acc_temp_1[5U][1U] = __Vtemp504[1U];
    vlTOPp->mul__DOT__acc_temp_1[5U][2U] = (1U & __Vtemp504[2U]);
    __Vtemp507[0U] = vlTOPp->mul__DOT__acc_temp[0xcU][0U];
    __Vtemp507[1U] = vlTOPp->mul__DOT__acc_temp[0xcU][1U];
    __Vtemp507[2U] = vlTOPp->mul__DOT__acc_temp[0xcU][2U];
    __Vtemp508[0U] = vlTOPp->mul__DOT__acc_temp[0xdU][0U];
    __Vtemp508[1U] = vlTOPp->mul__DOT__acc_temp[0xdU][1U];
    __Vtemp508[2U] = vlTOPp->mul__DOT__acc_temp[0xdU][2U];
    VL_ADD_W(3, __Vtemp509, __Vtemp507, __Vtemp508);
    vlTOPp->mul__DOT__acc_temp_1[6U][0U] = __Vtemp509[0U];
    vlTOPp->mul__DOT__acc_temp_1[6U][1U] = __Vtemp509[1U];
    vlTOPp->mul__DOT__acc_temp_1[6U][2U] = (1U & __Vtemp509[2U]);
    __Vtemp512[0U] = vlTOPp->mul__DOT__acc_temp[0xeU][0U];
    __Vtemp512[1U] = vlTOPp->mul__DOT__acc_temp[0xeU][1U];
    __Vtemp512[2U] = vlTOPp->mul__DOT__acc_temp[0xeU][2U];
    __Vtemp513[0U] = vlTOPp->mul__DOT__acc_temp[0xfU][0U];
    __Vtemp513[1U] = vlTOPp->mul__DOT__acc_temp[0xfU][1U];
    __Vtemp513[2U] = vlTOPp->mul__DOT__acc_temp[0xfU][2U];
    VL_ADD_W(3, __Vtemp514, __Vtemp512, __Vtemp513);
    vlTOPp->mul__DOT__acc_temp_1[7U][0U] = __Vtemp514[0U];
    vlTOPp->mul__DOT__acc_temp_1[7U][1U] = __Vtemp514[1U];
    vlTOPp->mul__DOT__acc_temp_1[7U][2U] = (1U & __Vtemp514[2U]);
    __Vtemp517[0U] = vlTOPp->mul__DOT__acc_temp[0x10U][0U];
    __Vtemp517[1U] = vlTOPp->mul__DOT__acc_temp[0x10U][1U];
    __Vtemp517[2U] = vlTOPp->mul__DOT__acc_temp[0x10U][2U];
    __Vtemp518[0U] = vlTOPp->mul__DOT__acc_temp[0x11U][0U];
    __Vtemp518[1U] = vlTOPp->mul__DOT__acc_temp[0x11U][1U];
    __Vtemp518[2U] = vlTOPp->mul__DOT__acc_temp[0x11U][2U];
    VL_ADD_W(3, __Vtemp519, __Vtemp517, __Vtemp518);
    vlTOPp->mul__DOT__acc_temp_1[8U][0U] = __Vtemp519[0U];
    vlTOPp->mul__DOT__acc_temp_1[8U][1U] = __Vtemp519[1U];
    vlTOPp->mul__DOT__acc_temp_1[8U][2U] = (1U & __Vtemp519[2U]);
    __Vtemp522[0U] = vlTOPp->mul__DOT__acc_temp[0x12U][0U];
    __Vtemp522[1U] = vlTOPp->mul__DOT__acc_temp[0x12U][1U];
    __Vtemp522[2U] = vlTOPp->mul__DOT__acc_temp[0x12U][2U];
    __Vtemp523[0U] = vlTOPp->mul__DOT__acc_temp[0x13U][0U];
    __Vtemp523[1U] = vlTOPp->mul__DOT__acc_temp[0x13U][1U];
    __Vtemp523[2U] = vlTOPp->mul__DOT__acc_temp[0x13U][2U];
    VL_ADD_W(3, __Vtemp524, __Vtemp522, __Vtemp523);
    vlTOPp->mul__DOT__acc_temp_1[9U][0U] = __Vtemp524[0U];
    vlTOPp->mul__DOT__acc_temp_1[9U][1U] = __Vtemp524[1U];
    vlTOPp->mul__DOT__acc_temp_1[9U][2U] = (1U & __Vtemp524[2U]);
    __Vtemp527[0U] = vlTOPp->mul__DOT__acc_temp[0x14U][0U];
    __Vtemp527[1U] = vlTOPp->mul__DOT__acc_temp[0x14U][1U];
    __Vtemp527[2U] = vlTOPp->mul__DOT__acc_temp[0x14U][2U];
    __Vtemp528[0U] = vlTOPp->mul__DOT__acc_temp[0x15U][0U];
    __Vtemp528[1U] = vlTOPp->mul__DOT__acc_temp[0x15U][1U];
    __Vtemp528[2U] = vlTOPp->mul__DOT__acc_temp[0x15U][2U];
    VL_ADD_W(3, __Vtemp529, __Vtemp527, __Vtemp528);
    vlTOPp->mul__DOT__acc_temp_1[0xaU][0U] = __Vtemp529[0U];
    vlTOPp->mul__DOT__acc_temp_1[0xaU][1U] = __Vtemp529[1U];
    vlTOPp->mul__DOT__acc_temp_1[0xaU][2U] = (1U & 
                                              __Vtemp529[2U]);
    __Vtemp532[0U] = vlTOPp->mul__DOT__acc_temp[0x16U][0U];
    __Vtemp532[1U] = vlTOPp->mul__DOT__acc_temp[0x16U][1U];
    __Vtemp532[2U] = vlTOPp->mul__DOT__acc_temp[0x16U][2U];
    __Vtemp533[0U] = vlTOPp->mul__DOT__acc_temp[0x17U][0U];
    __Vtemp533[1U] = vlTOPp->mul__DOT__acc_temp[0x17U][1U];
    __Vtemp533[2U] = vlTOPp->mul__DOT__acc_temp[0x17U][2U];
    VL_ADD_W(3, __Vtemp534, __Vtemp532, __Vtemp533);
    vlTOPp->mul__DOT__acc_temp_1[0xbU][0U] = __Vtemp534[0U];
    vlTOPp->mul__DOT__acc_temp_1[0xbU][1U] = __Vtemp534[1U];
    vlTOPp->mul__DOT__acc_temp_1[0xbU][2U] = (1U & 
                                              __Vtemp534[2U]);
    __Vtemp537[0U] = vlTOPp->mul__DOT__acc_temp[0x18U][0U];
    __Vtemp537[1U] = vlTOPp->mul__DOT__acc_temp[0x18U][1U];
    __Vtemp537[2U] = vlTOPp->mul__DOT__acc_temp[0x18U][2U];
    __Vtemp538[0U] = vlTOPp->mul__DOT__acc_temp[0x19U][0U];
    __Vtemp538[1U] = vlTOPp->mul__DOT__acc_temp[0x19U][1U];
    __Vtemp538[2U] = vlTOPp->mul__DOT__acc_temp[0x19U][2U];
    VL_ADD_W(3, __Vtemp539, __Vtemp537, __Vtemp538);
    vlTOPp->mul__DOT__acc_temp_1[0xcU][0U] = __Vtemp539[0U];
    vlTOPp->mul__DOT__acc_temp_1[0xcU][1U] = __Vtemp539[1U];
    vlTOPp->mul__DOT__acc_temp_1[0xcU][2U] = (1U & 
                                              __Vtemp539[2U]);
    __Vtemp542[0U] = vlTOPp->mul__DOT__acc_temp[0x1aU][0U];
    __Vtemp542[1U] = vlTOPp->mul__DOT__acc_temp[0x1aU][1U];
    __Vtemp542[2U] = vlTOPp->mul__DOT__acc_temp[0x1aU][2U];
    __Vtemp543[0U] = vlTOPp->mul__DOT__acc_temp[0x1bU][0U];
    __Vtemp543[1U] = vlTOPp->mul__DOT__acc_temp[0x1bU][1U];
    __Vtemp543[2U] = vlTOPp->mul__DOT__acc_temp[0x1bU][2U];
    VL_ADD_W(3, __Vtemp544, __Vtemp542, __Vtemp543);
    vlTOPp->mul__DOT__acc_temp_1[0xdU][0U] = __Vtemp544[0U];
    vlTOPp->mul__DOT__acc_temp_1[0xdU][1U] = __Vtemp544[1U];
    vlTOPp->mul__DOT__acc_temp_1[0xdU][2U] = (1U & 
                                              __Vtemp544[2U]);
    __Vtemp547[0U] = vlTOPp->mul__DOT__acc_temp[0x1cU][0U];
    __Vtemp547[1U] = vlTOPp->mul__DOT__acc_temp[0x1cU][1U];
    __Vtemp547[2U] = vlTOPp->mul__DOT__acc_temp[0x1cU][2U];
    __Vtemp548[0U] = vlTOPp->mul__DOT__acc_temp[0x1dU][0U];
    __Vtemp548[1U] = vlTOPp->mul__DOT__acc_temp[0x1dU][1U];
    __Vtemp548[2U] = vlTOPp->mul__DOT__acc_temp[0x1dU][2U];
    VL_ADD_W(3, __Vtemp549, __Vtemp547, __Vtemp548);
    vlTOPp->mul__DOT__acc_temp_1[0xeU][0U] = __Vtemp549[0U];
    vlTOPp->mul__DOT__acc_temp_1[0xeU][1U] = __Vtemp549[1U];
    vlTOPp->mul__DOT__acc_temp_1[0xeU][2U] = (1U & 
                                              __Vtemp549[2U]);
    __Vtemp552[0U] = vlTOPp->mul__DOT__acc_temp[0x1eU][0U];
    __Vtemp552[1U] = vlTOPp->mul__DOT__acc_temp[0x1eU][1U];
    __Vtemp552[2U] = vlTOPp->mul__DOT__acc_temp[0x1eU][2U];
    __Vtemp553[0U] = vlTOPp->mul__DOT__acc_temp[0x1fU][0U];
    __Vtemp553[1U] = vlTOPp->mul__DOT__acc_temp[0x1fU][1U];
    __Vtemp553[2U] = vlTOPp->mul__DOT__acc_temp[0x1fU][2U];
    VL_ADD_W(3, __Vtemp554, __Vtemp552, __Vtemp553);
    vlTOPp->mul__DOT__acc_temp_1[0xfU][0U] = __Vtemp554[0U];
    vlTOPp->mul__DOT__acc_temp_1[0xfU][1U] = __Vtemp554[1U];
    vlTOPp->mul__DOT__acc_temp_1[0xfU][2U] = (1U & 
                                              __Vtemp554[2U]);
    __Vtemp557[0U] = vlTOPp->mul__DOT__acc_temp_1[0U][0U];
    __Vtemp557[1U] = vlTOPp->mul__DOT__acc_temp_1[0U][1U];
    __Vtemp557[2U] = vlTOPp->mul__DOT__acc_temp_1[0U][2U];
    __Vtemp558[0U] = vlTOPp->mul__DOT__acc_temp_1[1U][0U];
    __Vtemp558[1U] = vlTOPp->mul__DOT__acc_temp_1[1U][1U];
    __Vtemp558[2U] = vlTOPp->mul__DOT__acc_temp_1[1U][2U];
    VL_ADD_W(3, __Vtemp559, __Vtemp557, __Vtemp558);
    vlTOPp->mul__DOT__acc_temp_2[0U][0U] = __Vtemp559[0U];
    vlTOPp->mul__DOT__acc_temp_2[0U][1U] = __Vtemp559[1U];
    vlTOPp->mul__DOT__acc_temp_2[0U][2U] = (1U & __Vtemp559[2U]);
    __Vtemp562[0U] = vlTOPp->mul__DOT__acc_temp_1[2U][0U];
    __Vtemp562[1U] = vlTOPp->mul__DOT__acc_temp_1[2U][1U];
    __Vtemp562[2U] = vlTOPp->mul__DOT__acc_temp_1[2U][2U];
    __Vtemp563[0U] = vlTOPp->mul__DOT__acc_temp_1[3U][0U];
    __Vtemp563[1U] = vlTOPp->mul__DOT__acc_temp_1[3U][1U];
    __Vtemp563[2U] = vlTOPp->mul__DOT__acc_temp_1[3U][2U];
    VL_ADD_W(3, __Vtemp564, __Vtemp562, __Vtemp563);
    vlTOPp->mul__DOT__acc_temp_2[1U][0U] = __Vtemp564[0U];
    vlTOPp->mul__DOT__acc_temp_2[1U][1U] = __Vtemp564[1U];
    vlTOPp->mul__DOT__acc_temp_2[1U][2U] = (1U & __Vtemp564[2U]);
    __Vtemp567[0U] = vlTOPp->mul__DOT__acc_temp_1[4U][0U];
    __Vtemp567[1U] = vlTOPp->mul__DOT__acc_temp_1[4U][1U];
    __Vtemp567[2U] = vlTOPp->mul__DOT__acc_temp_1[4U][2U];
    __Vtemp568[0U] = vlTOPp->mul__DOT__acc_temp_1[5U][0U];
    __Vtemp568[1U] = vlTOPp->mul__DOT__acc_temp_1[5U][1U];
    __Vtemp568[2U] = vlTOPp->mul__DOT__acc_temp_1[5U][2U];
    VL_ADD_W(3, __Vtemp569, __Vtemp567, __Vtemp568);
    vlTOPp->mul__DOT__acc_temp_2[2U][0U] = __Vtemp569[0U];
    vlTOPp->mul__DOT__acc_temp_2[2U][1U] = __Vtemp569[1U];
    vlTOPp->mul__DOT__acc_temp_2[2U][2U] = (1U & __Vtemp569[2U]);
    __Vtemp572[0U] = vlTOPp->mul__DOT__acc_temp_1[6U][0U];
    __Vtemp572[1U] = vlTOPp->mul__DOT__acc_temp_1[6U][1U];
    __Vtemp572[2U] = vlTOPp->mul__DOT__acc_temp_1[6U][2U];
    __Vtemp573[0U] = vlTOPp->mul__DOT__acc_temp_1[7U][0U];
    __Vtemp573[1U] = vlTOPp->mul__DOT__acc_temp_1[7U][1U];
    __Vtemp573[2U] = vlTOPp->mul__DOT__acc_temp_1[7U][2U];
    VL_ADD_W(3, __Vtemp574, __Vtemp572, __Vtemp573);
    vlTOPp->mul__DOT__acc_temp_2[3U][0U] = __Vtemp574[0U];
    vlTOPp->mul__DOT__acc_temp_2[3U][1U] = __Vtemp574[1U];
    vlTOPp->mul__DOT__acc_temp_2[3U][2U] = (1U & __Vtemp574[2U]);
    __Vtemp577[0U] = vlTOPp->mul__DOT__acc_temp_1[8U][0U];
    __Vtemp577[1U] = vlTOPp->mul__DOT__acc_temp_1[8U][1U];
    __Vtemp577[2U] = vlTOPp->mul__DOT__acc_temp_1[8U][2U];
    __Vtemp578[0U] = vlTOPp->mul__DOT__acc_temp_1[9U][0U];
    __Vtemp578[1U] = vlTOPp->mul__DOT__acc_temp_1[9U][1U];
    __Vtemp578[2U] = vlTOPp->mul__DOT__acc_temp_1[9U][2U];
    VL_ADD_W(3, __Vtemp579, __Vtemp577, __Vtemp578);
    vlTOPp->mul__DOT__acc_temp_2[4U][0U] = __Vtemp579[0U];
    vlTOPp->mul__DOT__acc_temp_2[4U][1U] = __Vtemp579[1U];
    vlTOPp->mul__DOT__acc_temp_2[4U][2U] = (1U & __Vtemp579[2U]);
    __Vtemp582[0U] = vlTOPp->mul__DOT__acc_temp_1[0xaU][0U];
    __Vtemp582[1U] = vlTOPp->mul__DOT__acc_temp_1[0xaU][1U];
    __Vtemp582[2U] = vlTOPp->mul__DOT__acc_temp_1[0xaU][2U];
    __Vtemp583[0U] = vlTOPp->mul__DOT__acc_temp_1[0xbU][0U];
    __Vtemp583[1U] = vlTOPp->mul__DOT__acc_temp_1[0xbU][1U];
    __Vtemp583[2U] = vlTOPp->mul__DOT__acc_temp_1[0xbU][2U];
    VL_ADD_W(3, __Vtemp584, __Vtemp582, __Vtemp583);
    vlTOPp->mul__DOT__acc_temp_2[5U][0U] = __Vtemp584[0U];
    vlTOPp->mul__DOT__acc_temp_2[5U][1U] = __Vtemp584[1U];
    vlTOPp->mul__DOT__acc_temp_2[5U][2U] = (1U & __Vtemp584[2U]);
    __Vtemp587[0U] = vlTOPp->mul__DOT__acc_temp_1[0xcU][0U];
    __Vtemp587[1U] = vlTOPp->mul__DOT__acc_temp_1[0xcU][1U];
    __Vtemp587[2U] = vlTOPp->mul__DOT__acc_temp_1[0xcU][2U];
    __Vtemp588[0U] = vlTOPp->mul__DOT__acc_temp_1[0xdU][0U];
    __Vtemp588[1U] = vlTOPp->mul__DOT__acc_temp_1[0xdU][1U];
    __Vtemp588[2U] = vlTOPp->mul__DOT__acc_temp_1[0xdU][2U];
    VL_ADD_W(3, __Vtemp589, __Vtemp587, __Vtemp588);
    vlTOPp->mul__DOT__acc_temp_2[6U][0U] = __Vtemp589[0U];
    vlTOPp->mul__DOT__acc_temp_2[6U][1U] = __Vtemp589[1U];
    vlTOPp->mul__DOT__acc_temp_2[6U][2U] = (1U & __Vtemp589[2U]);
    __Vtemp592[0U] = vlTOPp->mul__DOT__acc_temp_1[0xeU][0U];
    __Vtemp592[1U] = vlTOPp->mul__DOT__acc_temp_1[0xeU][1U];
    __Vtemp592[2U] = vlTOPp->mul__DOT__acc_temp_1[0xeU][2U];
    __Vtemp593[0U] = vlTOPp->mul__DOT__acc_temp_1[0xfU][0U];
    __Vtemp593[1U] = vlTOPp->mul__DOT__acc_temp_1[0xfU][1U];
    __Vtemp593[2U] = vlTOPp->mul__DOT__acc_temp_1[0xfU][2U];
    VL_ADD_W(3, __Vtemp594, __Vtemp592, __Vtemp593);
    vlTOPp->mul__DOT__acc_temp_2[7U][0U] = __Vtemp594[0U];
    vlTOPp->mul__DOT__acc_temp_2[7U][1U] = __Vtemp594[1U];
    vlTOPp->mul__DOT__acc_temp_2[7U][2U] = (1U & __Vtemp594[2U]);
    __Vtemp597[0U] = vlTOPp->mul__DOT__acc_temp_2[0U][0U];
    __Vtemp597[1U] = vlTOPp->mul__DOT__acc_temp_2[0U][1U];
    __Vtemp597[2U] = vlTOPp->mul__DOT__acc_temp_2[0U][2U];
    __Vtemp598[0U] = vlTOPp->mul__DOT__acc_temp_2[1U][0U];
    __Vtemp598[1U] = vlTOPp->mul__DOT__acc_temp_2[1U][1U];
    __Vtemp598[2U] = vlTOPp->mul__DOT__acc_temp_2[1U][2U];
    VL_ADD_W(3, __Vtemp599, __Vtemp597, __Vtemp598);
    vlTOPp->mul__DOT__acc_temp_3[0U][0U] = __Vtemp599[0U];
    vlTOPp->mul__DOT__acc_temp_3[0U][1U] = __Vtemp599[1U];
    vlTOPp->mul__DOT__acc_temp_3[0U][2U] = (1U & __Vtemp599[2U]);
    __Vtemp602[0U] = vlTOPp->mul__DOT__acc_temp_2[2U][0U];
    __Vtemp602[1U] = vlTOPp->mul__DOT__acc_temp_2[2U][1U];
    __Vtemp602[2U] = vlTOPp->mul__DOT__acc_temp_2[2U][2U];
    __Vtemp603[0U] = vlTOPp->mul__DOT__acc_temp_2[3U][0U];
    __Vtemp603[1U] = vlTOPp->mul__DOT__acc_temp_2[3U][1U];
    __Vtemp603[2U] = vlTOPp->mul__DOT__acc_temp_2[3U][2U];
    VL_ADD_W(3, __Vtemp604, __Vtemp602, __Vtemp603);
    vlTOPp->mul__DOT__acc_temp_3[1U][0U] = __Vtemp604[0U];
    vlTOPp->mul__DOT__acc_temp_3[1U][1U] = __Vtemp604[1U];
    vlTOPp->mul__DOT__acc_temp_3[1U][2U] = (1U & __Vtemp604[2U]);
    __Vtemp607[0U] = vlTOPp->mul__DOT__acc_temp_2[4U][0U];
    __Vtemp607[1U] = vlTOPp->mul__DOT__acc_temp_2[4U][1U];
    __Vtemp607[2U] = vlTOPp->mul__DOT__acc_temp_2[4U][2U];
    __Vtemp608[0U] = vlTOPp->mul__DOT__acc_temp_2[5U][0U];
    __Vtemp608[1U] = vlTOPp->mul__DOT__acc_temp_2[5U][1U];
    __Vtemp608[2U] = vlTOPp->mul__DOT__acc_temp_2[5U][2U];
    VL_ADD_W(3, __Vtemp609, __Vtemp607, __Vtemp608);
    vlTOPp->mul__DOT__acc_temp_3[2U][0U] = __Vtemp609[0U];
    vlTOPp->mul__DOT__acc_temp_3[2U][1U] = __Vtemp609[1U];
    vlTOPp->mul__DOT__acc_temp_3[2U][2U] = (1U & __Vtemp609[2U]);
    __Vtemp612[0U] = vlTOPp->mul__DOT__acc_temp_2[6U][0U];
    __Vtemp612[1U] = vlTOPp->mul__DOT__acc_temp_2[6U][1U];
    __Vtemp612[2U] = vlTOPp->mul__DOT__acc_temp_2[6U][2U];
    __Vtemp613[0U] = vlTOPp->mul__DOT__acc_temp_2[7U][0U];
    __Vtemp613[1U] = vlTOPp->mul__DOT__acc_temp_2[7U][1U];
    __Vtemp613[2U] = vlTOPp->mul__DOT__acc_temp_2[7U][2U];
    VL_ADD_W(3, __Vtemp614, __Vtemp612, __Vtemp613);
    vlTOPp->mul__DOT__acc_temp_3[3U][0U] = __Vtemp614[0U];
    vlTOPp->mul__DOT__acc_temp_3[3U][1U] = __Vtemp614[1U];
    vlTOPp->mul__DOT__acc_temp_3[3U][2U] = (1U & __Vtemp614[2U]);
    __Vtemp617[0U] = vlTOPp->mul__DOT__acc_temp_3[0U][0U];
    __Vtemp617[1U] = vlTOPp->mul__DOT__acc_temp_3[0U][1U];
    __Vtemp617[2U] = vlTOPp->mul__DOT__acc_temp_3[0U][2U];
    __Vtemp618[0U] = vlTOPp->mul__DOT__acc_temp_3[1U][0U];
    __Vtemp618[1U] = vlTOPp->mul__DOT__acc_temp_3[1U][1U];
    __Vtemp618[2U] = vlTOPp->mul__DOT__acc_temp_3[1U][2U];
    VL_ADD_W(3, __Vtemp619, __Vtemp617, __Vtemp618);
    vlTOPp->mul__DOT__acc_temp_4[0U][0U] = __Vtemp619[0U];
    vlTOPp->mul__DOT__acc_temp_4[0U][1U] = __Vtemp619[1U];
    vlTOPp->mul__DOT__acc_temp_4[0U][2U] = (1U & __Vtemp619[2U]);
    __Vtemp622[0U] = vlTOPp->mul__DOT__acc_temp_3[2U][0U];
    __Vtemp622[1U] = vlTOPp->mul__DOT__acc_temp_3[2U][1U];
    __Vtemp622[2U] = vlTOPp->mul__DOT__acc_temp_3[2U][2U];
    __Vtemp623[0U] = vlTOPp->mul__DOT__acc_temp_3[3U][0U];
    __Vtemp623[1U] = vlTOPp->mul__DOT__acc_temp_3[3U][1U];
    __Vtemp623[2U] = vlTOPp->mul__DOT__acc_temp_3[3U][2U];
    VL_ADD_W(3, __Vtemp624, __Vtemp622, __Vtemp623);
    vlTOPp->mul__DOT__acc_temp_4[1U][0U] = __Vtemp624[0U];
    vlTOPp->mul__DOT__acc_temp_4[1U][1U] = __Vtemp624[1U];
    vlTOPp->mul__DOT__acc_temp_4[1U][2U] = (1U & __Vtemp624[2U]);
    __Vtemp627[0U] = vlTOPp->mul__DOT__acc_temp_4[0U][0U];
    __Vtemp627[1U] = vlTOPp->mul__DOT__acc_temp_4[0U][1U];
    __Vtemp627[2U] = vlTOPp->mul__DOT__acc_temp_4[0U][2U];
    __Vtemp628[0U] = vlTOPp->mul__DOT__acc_temp_4[1U][0U];
    __Vtemp628[1U] = vlTOPp->mul__DOT__acc_temp_4[1U][1U];
    __Vtemp628[2U] = vlTOPp->mul__DOT__acc_temp_4[1U][2U];
    VL_ADD_W(3, __Vtemp629, __Vtemp627, __Vtemp628);
    vlTOPp->mul__DOT__acc_temp_5[0U] = __Vtemp629[0U];
    vlTOPp->mul__DOT__acc_temp_5[1U] = __Vtemp629[1U];
    vlTOPp->mul__DOT__acc_temp_5[2U] = (1U & __Vtemp629[2U]);
    vlTOPp->result_o = ((IData)(vlTOPp->rst_i) ? 0ULL
                         : ((IData)(vlTOPp->req_i) ? 
                            (((QData)((IData)(vlTOPp->mul__DOT__acc_temp_5[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlTOPp->mul__DOT__acc_temp_5[0U])))
                             : 0ULL));
    vlTOPp->overflow_o = ((~ (IData)(vlTOPp->rst_i)) 
                          & ((IData)(vlTOPp->req_i) 
                             & vlTOPp->mul__DOT__acc_temp_5[2U]));
}

void Vmul::_eval_initial(Vmul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_eval_initial\n"); );
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

void Vmul::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::final\n"); );
    // Variables
    Vmul__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmul::_eval_settle(Vmul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_eval_settle\n"); );
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vmul::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    req_i = VL_RAND_RESET_I(1);
    a_i = VL_RAND_RESET_I(32);
    b_i = VL_RAND_RESET_I(32);
    ready_o = VL_RAND_RESET_I(1);
    result_o = VL_RAND_RESET_Q(64);
    overflow_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            VL_RAND_RESET_W(65, mul__DOT__acc_temp[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            VL_RAND_RESET_W(65, mul__DOT__acc_temp_1[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            VL_RAND_RESET_W(65, mul__DOT__acc_temp_2[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(65, mul__DOT__acc_temp_3[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            VL_RAND_RESET_W(65, mul__DOT__acc_temp_4[__Vi0]);
    }}
    VL_RAND_RESET_W(65, mul__DOT__acc_temp_5);
    mul__DOT__ready_temp = VL_RAND_RESET_I(32);
    mul__DOT____Vcellout__u_mult_step0__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__u_mult_step0__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__acc_o);
    mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__ready_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__acc_o);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
