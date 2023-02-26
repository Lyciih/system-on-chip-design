// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul.h for the primary calling header

#include "Vmul.h"
#include "Vmul__Syms.h"

//==========

void Vmul::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmul::eval\n"); );
    Vmul__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mul.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmul::_eval_initial_loop(Vmul__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mul.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vmul::_sequent__TOP__1(Vmul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_sequent__TOP__1\n"); );
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp312[3];
    WData/*95:0*/ __Vtemp322[3];
    WData/*95:0*/ __Vtemp323[3];
    WData/*95:0*/ __Vtemp324[3];
    WData/*95:0*/ __Vtemp327[3];
    WData/*95:0*/ __Vtemp328[3];
    WData/*95:0*/ __Vtemp329[3];
    WData/*95:0*/ __Vtemp332[3];
    WData/*95:0*/ __Vtemp333[3];
    WData/*95:0*/ __Vtemp334[3];
    WData/*95:0*/ __Vtemp337[3];
    WData/*95:0*/ __Vtemp338[3];
    WData/*95:0*/ __Vtemp339[3];
    WData/*95:0*/ __Vtemp342[3];
    WData/*95:0*/ __Vtemp343[3];
    WData/*95:0*/ __Vtemp344[3];
    WData/*95:0*/ __Vtemp347[3];
    WData/*95:0*/ __Vtemp348[3];
    WData/*95:0*/ __Vtemp349[3];
    WData/*95:0*/ __Vtemp352[3];
    WData/*95:0*/ __Vtemp353[3];
    WData/*95:0*/ __Vtemp354[3];
    WData/*95:0*/ __Vtemp357[3];
    WData/*95:0*/ __Vtemp358[3];
    WData/*95:0*/ __Vtemp359[3];
    WData/*95:0*/ __Vtemp362[3];
    WData/*95:0*/ __Vtemp363[3];
    WData/*95:0*/ __Vtemp364[3];
    WData/*95:0*/ __Vtemp367[3];
    WData/*95:0*/ __Vtemp368[3];
    WData/*95:0*/ __Vtemp369[3];
    WData/*95:0*/ __Vtemp372[3];
    WData/*95:0*/ __Vtemp373[3];
    WData/*95:0*/ __Vtemp374[3];
    WData/*95:0*/ __Vtemp377[3];
    WData/*95:0*/ __Vtemp378[3];
    WData/*95:0*/ __Vtemp379[3];
    WData/*95:0*/ __Vtemp382[3];
    WData/*95:0*/ __Vtemp383[3];
    WData/*95:0*/ __Vtemp384[3];
    WData/*95:0*/ __Vtemp387[3];
    WData/*95:0*/ __Vtemp388[3];
    WData/*95:0*/ __Vtemp389[3];
    WData/*95:0*/ __Vtemp392[3];
    WData/*95:0*/ __Vtemp393[3];
    WData/*95:0*/ __Vtemp394[3];
    WData/*95:0*/ __Vtemp397[3];
    WData/*95:0*/ __Vtemp398[3];
    WData/*95:0*/ __Vtemp399[3];
    WData/*95:0*/ __Vtemp402[3];
    WData/*95:0*/ __Vtemp403[3];
    WData/*95:0*/ __Vtemp404[3];
    WData/*95:0*/ __Vtemp407[3];
    WData/*95:0*/ __Vtemp408[3];
    WData/*95:0*/ __Vtemp409[3];
    WData/*95:0*/ __Vtemp412[3];
    WData/*95:0*/ __Vtemp413[3];
    WData/*95:0*/ __Vtemp414[3];
    WData/*95:0*/ __Vtemp417[3];
    WData/*95:0*/ __Vtemp418[3];
    WData/*95:0*/ __Vtemp419[3];
    WData/*95:0*/ __Vtemp422[3];
    WData/*95:0*/ __Vtemp423[3];
    WData/*95:0*/ __Vtemp424[3];
    WData/*95:0*/ __Vtemp427[3];
    WData/*95:0*/ __Vtemp428[3];
    WData/*95:0*/ __Vtemp429[3];
    WData/*95:0*/ __Vtemp432[3];
    WData/*95:0*/ __Vtemp433[3];
    WData/*95:0*/ __Vtemp434[3];
    WData/*95:0*/ __Vtemp437[3];
    WData/*95:0*/ __Vtemp438[3];
    WData/*95:0*/ __Vtemp439[3];
    WData/*95:0*/ __Vtemp442[3];
    WData/*95:0*/ __Vtemp443[3];
    WData/*95:0*/ __Vtemp444[3];
    WData/*95:0*/ __Vtemp447[3];
    WData/*95:0*/ __Vtemp448[3];
    WData/*95:0*/ __Vtemp449[3];
    WData/*95:0*/ __Vtemp452[3];
    WData/*95:0*/ __Vtemp453[3];
    WData/*95:0*/ __Vtemp454[3];
    WData/*95:0*/ __Vtemp457[3];
    WData/*95:0*/ __Vtemp458[3];
    WData/*95:0*/ __Vtemp459[3];
    WData/*95:0*/ __Vtemp462[3];
    WData/*95:0*/ __Vtemp463[3];
    WData/*95:0*/ __Vtemp464[3];
    WData/*95:0*/ __Vtemp467[3];
    WData/*95:0*/ __Vtemp468[3];
    WData/*95:0*/ __Vtemp469[3];
    WData/*95:0*/ __Vtemp472[3];
    WData/*95:0*/ __Vtemp473[3];
    WData/*95:0*/ __Vtemp474[3];
    // Body
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    vlTOPp->mul__DOT____Vcellout__u_mult_step0__ready_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlTOPp->req_i));
    if (vlTOPp->rst_i) {
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__acc_o[2U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__acc_o[2U] = 0U;
    } else {
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x80000000U 
                                              & vlTOPp->b_i)
                                              ? (0x80000000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0x1fU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x80000000U 
                                              & vlTOPp->b_i)
                                              ? ((0x7fffffffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 1U)) 
                                                 | (0x80000000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0x1fU)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x80000000U 
                                              & vlTOPp->b_i)
                                              ? (0x7fffffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 1U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x40000000U 
                                              & vlTOPp->b_i)
                                              ? (0xc0000000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0x1eU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x40000000U 
                                              & vlTOPp->b_i)
                                              ? ((0x3fffffffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 2U)) 
                                                 | (0xc0000000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0x1eU)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x40000000U 
                                              & vlTOPp->b_i)
                                              ? (0x3fffffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 2U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x20000000U 
                                              & vlTOPp->b_i)
                                              ? (0xe0000000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0x1dU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x20000000U 
                                              & vlTOPp->b_i)
                                              ? ((0x1fffffffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 3U)) 
                                                 | (0xe0000000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0x1dU)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x20000000U 
                                              & vlTOPp->b_i)
                                              ? (0x1fffffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 3U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x10000000U 
                                              & vlTOPp->b_i)
                                              ? (0xf0000000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0x1cU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x10000000U 
                                              & vlTOPp->b_i)
                                              ? ((0xfffffffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 4U)) 
                                                 | (0xf0000000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0x1cU)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x10000000U 
                                              & vlTOPp->b_i)
                                              ? (0xfffffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 4U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x8000000U 
                                              & vlTOPp->b_i)
                                              ? (0xf8000000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0x1bU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x8000000U 
                                              & vlTOPp->b_i)
                                              ? ((0x7ffffffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 5U)) 
                                                 | (0xf8000000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0x1bU)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x8000000U 
                                              & vlTOPp->b_i)
                                              ? (0x7ffffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 5U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x4000000U 
                                              & vlTOPp->b_i)
                                              ? (0xfc000000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0x1aU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x4000000U 
                                              & vlTOPp->b_i)
                                              ? ((0x3ffffffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 6U)) 
                                                 | (0xfc000000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0x1aU)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x4000000U 
                                              & vlTOPp->b_i)
                                              ? (0x3ffffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 6U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x2000000U 
                                              & vlTOPp->b_i)
                                              ? (0xfe000000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0x19U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x2000000U 
                                              & vlTOPp->b_i)
                                              ? ((0x1ffffffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 7U)) 
                                                 | (0xfe000000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0x19U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x2000000U 
                                              & vlTOPp->b_i)
                                              ? (0x1ffffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 7U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x1000000U 
                                              & vlTOPp->b_i)
                                              ? (0xff000000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0x18U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x1000000U 
                                              & vlTOPp->b_i)
                                              ? ((0xffffffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 8U)) 
                                                 | (0xff000000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0x18U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x1000000U 
                                              & vlTOPp->b_i)
                                              ? (0xffffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 8U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x800000U 
                                              & vlTOPp->b_i)
                                              ? (0xff800000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0x17U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x800000U 
                                              & vlTOPp->b_i)
                                              ? ((0x7fffffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 9U)) 
                                                 | (0xff800000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0x17U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x800000U 
                                              & vlTOPp->b_i)
                                              ? (0x7fffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 9U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x400000U 
                                              & vlTOPp->b_i)
                                              ? (0xffc00000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0x16U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x400000U 
                                              & vlTOPp->b_i)
                                              ? ((0x3fffffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0xaU)) 
                                                 | (0xffc00000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0x16U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x400000U 
                                              & vlTOPp->b_i)
                                              ? (0x3fffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0xaU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x200000U 
                                              & vlTOPp->b_i)
                                              ? (0xffe00000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0x15U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x200000U 
                                              & vlTOPp->b_i)
                                              ? ((0x1fffffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0xbU)) 
                                                 | (0xffe00000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0x15U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x200000U 
                                              & vlTOPp->b_i)
                                              ? (0x1fffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0xbU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x100000U 
                                              & vlTOPp->b_i)
                                              ? (0xfff00000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0x14U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x100000U 
                                              & vlTOPp->b_i)
                                              ? ((0xfffffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0xcU)) 
                                                 | (0xfff00000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0x14U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x100000U 
                                              & vlTOPp->b_i)
                                              ? (0xfffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0xcU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x80000U 
                                              & vlTOPp->b_i)
                                              ? (0xfff80000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0x13U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x80000U 
                                              & vlTOPp->b_i)
                                              ? ((0x7ffffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0xdU)) 
                                                 | (0xfff80000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0x13U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x80000U 
                                              & vlTOPp->b_i)
                                              ? (0x7ffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0xdU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x40000U 
                                              & vlTOPp->b_i)
                                              ? (0xfffc0000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0x12U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x40000U 
                                              & vlTOPp->b_i)
                                              ? ((0x3ffffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0xeU)) 
                                                 | (0xfffc0000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0x12U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x40000U 
                                              & vlTOPp->b_i)
                                              ? (0x3ffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0xeU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x20000U 
                                              & vlTOPp->b_i)
                                              ? (0xfffe0000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0x11U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x20000U 
                                              & vlTOPp->b_i)
                                              ? ((0x1ffffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0xfU)) 
                                                 | (0xfffe0000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0x11U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x20000U 
                                              & vlTOPp->b_i)
                                              ? (0x1ffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0xfU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x10000U 
                                              & vlTOPp->b_i)
                                              ? (0xffff0000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0x10U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x10000U 
                                              & vlTOPp->b_i)
                                              ? ((0xffffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0x10U)) 
                                                 | (0xffff0000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0x10U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x10000U 
                                              & vlTOPp->b_i)
                                              ? (0xffffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0x10U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x8000U 
                                              & vlTOPp->b_i)
                                              ? (0xffff8000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0xfU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x8000U 
                                              & vlTOPp->b_i)
                                              ? ((0x7fffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0x11U)) 
                                                 | (0xffff8000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0xfU)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x8000U 
                                              & vlTOPp->b_i)
                                              ? (0x7fffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0x11U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x4000U 
                                              & vlTOPp->b_i)
                                              ? (0xffffc000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0xeU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x4000U 
                                              & vlTOPp->b_i)
                                              ? ((0x3fffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0x12U)) 
                                                 | (0xffffc000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0xeU)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x4000U 
                                              & vlTOPp->b_i)
                                              ? (0x3fffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0x12U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x2000U 
                                              & vlTOPp->b_i)
                                              ? (0xffffe000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0xdU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x2000U 
                                              & vlTOPp->b_i)
                                              ? ((0x1fffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0x13U)) 
                                                 | (0xffffe000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0xdU)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x2000U 
                                              & vlTOPp->b_i)
                                              ? (0x1fffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0x13U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x1000U 
                                              & vlTOPp->b_i)
                                              ? (0xfffff000U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0xcU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x1000U 
                                              & vlTOPp->b_i)
                                              ? ((0xfffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0x14U)) 
                                                 | (0xfffff000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0xcU)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x1000U 
                                              & vlTOPp->b_i)
                                              ? (0xfffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0x14U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x800U 
                                              & vlTOPp->b_i)
                                              ? (0xfffff800U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0xbU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x800U 
                                              & vlTOPp->b_i)
                                              ? ((0x7ffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0x15U)) 
                                                 | (0xfffff800U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0xbU)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x800U 
                                              & vlTOPp->b_i)
                                              ? (0x7ffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0x15U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x400U 
                                              & vlTOPp->b_i)
                                              ? (0xfffffc00U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 0xaU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x400U 
                                              & vlTOPp->b_i)
                                              ? ((0x3ffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0x16U)) 
                                                 | (0xfffffc00U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 0xaU)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x400U 
                                              & vlTOPp->b_i)
                                              ? (0x3ffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0x16U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x200U 
                                              & vlTOPp->b_i)
                                              ? (0xfffffe00U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 9U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x200U 
                                              & vlTOPp->b_i)
                                              ? ((0x1ffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0x17U)) 
                                                 | (0xfffffe00U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 9U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x200U 
                                              & vlTOPp->b_i)
                                              ? (0x1ffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0x17U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x100U 
                                              & vlTOPp->b_i)
                                              ? (0xffffff00U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 8U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x100U 
                                              & vlTOPp->b_i)
                                              ? ((0xffU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0x18U)) 
                                                 | (0xffffff00U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 8U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x100U 
                                              & vlTOPp->b_i)
                                              ? (0xffU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0x18U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x80U 
                                              & vlTOPp->b_i)
                                              ? (0xffffff80U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 7U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x80U 
                                              & vlTOPp->b_i)
                                              ? ((0x7fU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0x19U)) 
                                                 | (0xffffff80U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 7U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x80U 
                                              & vlTOPp->b_i)
                                              ? (0x7fU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0x19U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x40U 
                                              & vlTOPp->b_i)
                                              ? (0xffffffc0U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 6U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x40U 
                                              & vlTOPp->b_i)
                                              ? ((0x3fU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0x1aU)) 
                                                 | (0xffffffc0U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 6U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x40U 
                                              & vlTOPp->b_i)
                                              ? (0x3fU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0x1aU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x20U 
                                              & vlTOPp->b_i)
                                              ? (0xffffffe0U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 5U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x20U 
                                              & vlTOPp->b_i)
                                              ? ((0x1fU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0x1bU)) 
                                                 | (0xffffffe0U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 5U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x20U 
                                              & vlTOPp->b_i)
                                              ? (0x1fU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0x1bU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x10U 
                                              & vlTOPp->b_i)
                                              ? (0xfffffff0U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 4U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x10U 
                                              & vlTOPp->b_i)
                                              ? ((0xfU 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0x1cU)) 
                                                 | (0xfffffff0U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 4U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((0x10U 
                                              & vlTOPp->b_i)
                                              ? (0xfU 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0x1cU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((8U & vlTOPp->b_i)
                                              ? (0xfffffff8U 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 3U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((8U & vlTOPp->b_i)
                                              ? ((7U 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0x1dU)) 
                                                 | (0xfffffff8U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 3U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((8U & vlTOPp->b_i)
                                              ? (7U 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0x1dU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((4U & vlTOPp->b_i)
                                              ? (0xfffffffcU 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 2U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((4U & vlTOPp->b_i)
                                              ? ((3U 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0x1eU)) 
                                                 | (0xfffffffcU 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 2U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((4U & vlTOPp->b_i)
                                              ? (3U 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0x1eU))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((2U & vlTOPp->b_i)
                                              ? (0xfffffffeU 
                                                 & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                    << 1U))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((2U & vlTOPp->b_i)
                                              ? ((1U 
                                                  & ((IData)((QData)((IData)(vlTOPp->a_i))) 
                                                     >> 0x1fU)) 
                                                 | (0xfffffffeU 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlTOPp->a_i)) 
                                                                >> 0x20U)) 
                                                       << 1U)))
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((2U & vlTOPp->b_i)
                                              ? (1U 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlTOPp->a_i)) 
                                                             >> 0x20U)) 
                                                    >> 0x1fU))
                                              : 0U)
                                          : 0U) : 0U);
    }
    VL_EXTEND_WI(65,32, __Vtemp312, vlTOPp->a_i);
    if (vlTOPp->rst_i) {
        vlTOPp->mul__DOT____Vcellout__u_mult_step0__acc_o[0U] = 0U;
        vlTOPp->mul__DOT____Vcellout__u_mult_step0__acc_o[1U] = 0U;
        vlTOPp->mul__DOT____Vcellout__u_mult_step0__acc_o[2U] = 0U;
    } else {
        vlTOPp->mul__DOT____Vcellout__u_mult_step0__acc_o[0U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((1U & vlTOPp->b_i)
                                              ? __Vtemp312[0U]
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__u_mult_step0__acc_o[1U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((1U & vlTOPp->b_i)
                                              ? __Vtemp312[1U]
                                              : 0U)
                                          : 0U) : 0U);
        vlTOPp->mul__DOT____Vcellout__u_mult_step0__acc_o[2U] 
            = ((IData)(vlTOPp->req_i) ? ((IData)(vlTOPp->req_i)
                                          ? ((1U & vlTOPp->b_i)
                                              ? __Vtemp312[2U]
                                              : 0U)
                                          : 0U) : 0U);
    }
    vlTOPp->mul__DOT__ready_temp = ((0x7fffffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__ready_o) 
                                       << 0x1fU));
    vlTOPp->mul__DOT__ready_temp = ((0xbfffffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__ready_o) 
                                       << 0x1eU));
    vlTOPp->mul__DOT__ready_temp = ((0xdfffffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__ready_o) 
                                       << 0x1dU));
    vlTOPp->mul__DOT__ready_temp = ((0xefffffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__ready_o) 
                                       << 0x1cU));
    vlTOPp->mul__DOT__ready_temp = ((0xf7ffffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__ready_o) 
                                       << 0x1bU));
    vlTOPp->mul__DOT__ready_temp = ((0xfbffffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__ready_o) 
                                       << 0x1aU));
    vlTOPp->mul__DOT__ready_temp = ((0xfdffffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__ready_o) 
                                       << 0x19U));
    vlTOPp->mul__DOT__ready_temp = ((0xfeffffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__ready_o) 
                                       << 0x18U));
    vlTOPp->mul__DOT__ready_temp = ((0xff7fffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__ready_o) 
                                       << 0x17U));
    vlTOPp->mul__DOT__ready_temp = ((0xffbfffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__ready_o) 
                                       << 0x16U));
    vlTOPp->mul__DOT__ready_temp = ((0xffdfffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__ready_o) 
                                       << 0x15U));
    vlTOPp->mul__DOT__ready_temp = ((0xffefffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__ready_o) 
                                       << 0x14U));
    vlTOPp->mul__DOT__ready_temp = ((0xfff7ffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__ready_o) 
                                       << 0x13U));
    vlTOPp->mul__DOT__ready_temp = ((0xfffbffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__ready_o) 
                                       << 0x12U));
    vlTOPp->mul__DOT__ready_temp = ((0xfffdffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__ready_o) 
                                       << 0x11U));
    vlTOPp->mul__DOT__ready_temp = ((0xfffeffffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__ready_o) 
                                       << 0x10U));
    vlTOPp->mul__DOT__ready_temp = ((0xffff7fffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__ready_o) 
                                       << 0xfU));
    vlTOPp->mul__DOT__ready_temp = ((0xffffbfffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__ready_o) 
                                       << 0xeU));
    vlTOPp->mul__DOT__ready_temp = ((0xffffdfffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__ready_o) 
                                       << 0xdU));
    vlTOPp->mul__DOT__ready_temp = ((0xffffefffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__ready_o) 
                                       << 0xcU));
    vlTOPp->mul__DOT__ready_temp = ((0xfffff7ffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__ready_o) 
                                       << 0xbU));
    vlTOPp->mul__DOT__ready_temp = ((0xfffffbffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__ready_o) 
                                       << 0xaU));
    vlTOPp->mul__DOT__ready_temp = ((0xfffffdffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__ready_o) 
                                       << 9U));
    vlTOPp->mul__DOT__ready_temp = ((0xfffffeffU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__ready_o) 
                                       << 8U));
    vlTOPp->mul__DOT__ready_temp = ((0xffffff7fU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__ready_o) 
                                       << 7U));
    vlTOPp->mul__DOT__ready_temp = ((0xffffffbfU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__ready_o) 
                                       << 6U));
    vlTOPp->mul__DOT__ready_temp = ((0xffffffdfU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__ready_o) 
                                       << 5U));
    vlTOPp->mul__DOT__ready_temp = ((0xffffffefU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__ready_o) 
                                       << 4U));
    vlTOPp->mul__DOT__ready_temp = ((0xfffffff7U & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__ready_o) 
                                       << 3U));
    vlTOPp->mul__DOT__ready_temp = ((0xfffffffbU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__ready_o) 
                                       << 2U));
    vlTOPp->mul__DOT__ready_temp = ((0xfffffffdU & vlTOPp->mul__DOT__ready_temp) 
                                    | ((IData)(vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__ready_o) 
                                       << 1U));
    vlTOPp->mul__DOT__ready_temp = ((0xfffffffeU & vlTOPp->mul__DOT__ready_temp) 
                                    | (IData)(vlTOPp->mul__DOT____Vcellout__u_mult_step0__ready_o));
    vlTOPp->mul__DOT__acc_temp[0x1fU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x1fU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x1fU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__31__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x1eU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x1eU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x1eU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__30__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x1dU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x1dU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x1dU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__29__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x1cU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x1cU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x1cU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__28__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x1bU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x1bU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x1bU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__27__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x1aU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x1aU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x1aU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__26__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x19U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x19U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x19U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__25__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x18U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x18U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x18U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__24__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x17U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x17U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x17U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__23__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x16U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x16U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x16U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__22__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x15U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x15U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x15U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__21__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x14U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x14U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x14U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__20__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x13U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x13U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x13U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__19__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x12U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x12U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x12U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__18__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x11U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x11U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x11U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__17__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0x10U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0x10U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0x10U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__16__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0xfU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0xfU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0xfU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__15__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0xeU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0xeU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0xeU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__14__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0xdU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0xdU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0xdU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__13__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0xcU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0xcU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0xcU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__12__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0xbU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0xbU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0xbU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__11__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0xaU][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0xaU][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0xaU][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__10__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[9U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[9U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[9U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__9__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[8U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[8U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[8U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__8__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[7U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[7U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[7U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__7__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[6U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[6U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[6U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__6__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[5U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[5U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[5U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__5__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[4U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[4U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[4U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__4__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[3U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[3U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[3U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__3__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[2U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[2U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[2U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__2__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[1U][0U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[1U][1U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[1U][2U] = vlTOPp->mul__DOT____Vcellout__genblk1__BRA__1__KET____DOT__mult_stepx__acc_o[2U];
    vlTOPp->mul__DOT__acc_temp[0U][0U] = vlTOPp->mul__DOT____Vcellout__u_mult_step0__acc_o[0U];
    vlTOPp->mul__DOT__acc_temp[0U][1U] = vlTOPp->mul__DOT____Vcellout__u_mult_step0__acc_o[1U];
    vlTOPp->mul__DOT__acc_temp[0U][2U] = vlTOPp->mul__DOT____Vcellout__u_mult_step0__acc_o[2U];
    __Vtemp322[0U] = vlTOPp->mul__DOT__acc_temp[0U][0U];
    __Vtemp322[1U] = vlTOPp->mul__DOT__acc_temp[0U][1U];
    __Vtemp322[2U] = vlTOPp->mul__DOT__acc_temp[0U][2U];
    __Vtemp323[0U] = vlTOPp->mul__DOT__acc_temp[1U][0U];
    __Vtemp323[1U] = vlTOPp->mul__DOT__acc_temp[1U][1U];
    __Vtemp323[2U] = vlTOPp->mul__DOT__acc_temp[1U][2U];
    VL_ADD_W(3, __Vtemp324, __Vtemp322, __Vtemp323);
    vlTOPp->mul__DOT__acc_temp_1[0U][0U] = __Vtemp324[0U];
    vlTOPp->mul__DOT__acc_temp_1[0U][1U] = __Vtemp324[1U];
    vlTOPp->mul__DOT__acc_temp_1[0U][2U] = (1U & __Vtemp324[2U]);
    __Vtemp327[0U] = vlTOPp->mul__DOT__acc_temp[2U][0U];
    __Vtemp327[1U] = vlTOPp->mul__DOT__acc_temp[2U][1U];
    __Vtemp327[2U] = vlTOPp->mul__DOT__acc_temp[2U][2U];
    __Vtemp328[0U] = vlTOPp->mul__DOT__acc_temp[3U][0U];
    __Vtemp328[1U] = vlTOPp->mul__DOT__acc_temp[3U][1U];
    __Vtemp328[2U] = vlTOPp->mul__DOT__acc_temp[3U][2U];
    VL_ADD_W(3, __Vtemp329, __Vtemp327, __Vtemp328);
    vlTOPp->mul__DOT__acc_temp_1[1U][0U] = __Vtemp329[0U];
    vlTOPp->mul__DOT__acc_temp_1[1U][1U] = __Vtemp329[1U];
    vlTOPp->mul__DOT__acc_temp_1[1U][2U] = (1U & __Vtemp329[2U]);
    __Vtemp332[0U] = vlTOPp->mul__DOT__acc_temp[4U][0U];
    __Vtemp332[1U] = vlTOPp->mul__DOT__acc_temp[4U][1U];
    __Vtemp332[2U] = vlTOPp->mul__DOT__acc_temp[4U][2U];
    __Vtemp333[0U] = vlTOPp->mul__DOT__acc_temp[5U][0U];
    __Vtemp333[1U] = vlTOPp->mul__DOT__acc_temp[5U][1U];
    __Vtemp333[2U] = vlTOPp->mul__DOT__acc_temp[5U][2U];
    VL_ADD_W(3, __Vtemp334, __Vtemp332, __Vtemp333);
    vlTOPp->mul__DOT__acc_temp_1[2U][0U] = __Vtemp334[0U];
    vlTOPp->mul__DOT__acc_temp_1[2U][1U] = __Vtemp334[1U];
    vlTOPp->mul__DOT__acc_temp_1[2U][2U] = (1U & __Vtemp334[2U]);
    __Vtemp337[0U] = vlTOPp->mul__DOT__acc_temp[6U][0U];
    __Vtemp337[1U] = vlTOPp->mul__DOT__acc_temp[6U][1U];
    __Vtemp337[2U] = vlTOPp->mul__DOT__acc_temp[6U][2U];
    __Vtemp338[0U] = vlTOPp->mul__DOT__acc_temp[7U][0U];
    __Vtemp338[1U] = vlTOPp->mul__DOT__acc_temp[7U][1U];
    __Vtemp338[2U] = vlTOPp->mul__DOT__acc_temp[7U][2U];
    VL_ADD_W(3, __Vtemp339, __Vtemp337, __Vtemp338);
    vlTOPp->mul__DOT__acc_temp_1[3U][0U] = __Vtemp339[0U];
    vlTOPp->mul__DOT__acc_temp_1[3U][1U] = __Vtemp339[1U];
    vlTOPp->mul__DOT__acc_temp_1[3U][2U] = (1U & __Vtemp339[2U]);
    __Vtemp342[0U] = vlTOPp->mul__DOT__acc_temp[8U][0U];
    __Vtemp342[1U] = vlTOPp->mul__DOT__acc_temp[8U][1U];
    __Vtemp342[2U] = vlTOPp->mul__DOT__acc_temp[8U][2U];
    __Vtemp343[0U] = vlTOPp->mul__DOT__acc_temp[9U][0U];
    __Vtemp343[1U] = vlTOPp->mul__DOT__acc_temp[9U][1U];
    __Vtemp343[2U] = vlTOPp->mul__DOT__acc_temp[9U][2U];
    VL_ADD_W(3, __Vtemp344, __Vtemp342, __Vtemp343);
    vlTOPp->mul__DOT__acc_temp_1[4U][0U] = __Vtemp344[0U];
    vlTOPp->mul__DOT__acc_temp_1[4U][1U] = __Vtemp344[1U];
    vlTOPp->mul__DOT__acc_temp_1[4U][2U] = (1U & __Vtemp344[2U]);
    __Vtemp347[0U] = vlTOPp->mul__DOT__acc_temp[0xaU][0U];
    __Vtemp347[1U] = vlTOPp->mul__DOT__acc_temp[0xaU][1U];
    __Vtemp347[2U] = vlTOPp->mul__DOT__acc_temp[0xaU][2U];
    __Vtemp348[0U] = vlTOPp->mul__DOT__acc_temp[0xbU][0U];
    __Vtemp348[1U] = vlTOPp->mul__DOT__acc_temp[0xbU][1U];
    __Vtemp348[2U] = vlTOPp->mul__DOT__acc_temp[0xbU][2U];
    VL_ADD_W(3, __Vtemp349, __Vtemp347, __Vtemp348);
    vlTOPp->mul__DOT__acc_temp_1[5U][0U] = __Vtemp349[0U];
    vlTOPp->mul__DOT__acc_temp_1[5U][1U] = __Vtemp349[1U];
    vlTOPp->mul__DOT__acc_temp_1[5U][2U] = (1U & __Vtemp349[2U]);
    __Vtemp352[0U] = vlTOPp->mul__DOT__acc_temp[0xcU][0U];
    __Vtemp352[1U] = vlTOPp->mul__DOT__acc_temp[0xcU][1U];
    __Vtemp352[2U] = vlTOPp->mul__DOT__acc_temp[0xcU][2U];
    __Vtemp353[0U] = vlTOPp->mul__DOT__acc_temp[0xdU][0U];
    __Vtemp353[1U] = vlTOPp->mul__DOT__acc_temp[0xdU][1U];
    __Vtemp353[2U] = vlTOPp->mul__DOT__acc_temp[0xdU][2U];
    VL_ADD_W(3, __Vtemp354, __Vtemp352, __Vtemp353);
    vlTOPp->mul__DOT__acc_temp_1[6U][0U] = __Vtemp354[0U];
    vlTOPp->mul__DOT__acc_temp_1[6U][1U] = __Vtemp354[1U];
    vlTOPp->mul__DOT__acc_temp_1[6U][2U] = (1U & __Vtemp354[2U]);
    __Vtemp357[0U] = vlTOPp->mul__DOT__acc_temp[0xeU][0U];
    __Vtemp357[1U] = vlTOPp->mul__DOT__acc_temp[0xeU][1U];
    __Vtemp357[2U] = vlTOPp->mul__DOT__acc_temp[0xeU][2U];
    __Vtemp358[0U] = vlTOPp->mul__DOT__acc_temp[0xfU][0U];
    __Vtemp358[1U] = vlTOPp->mul__DOT__acc_temp[0xfU][1U];
    __Vtemp358[2U] = vlTOPp->mul__DOT__acc_temp[0xfU][2U];
    VL_ADD_W(3, __Vtemp359, __Vtemp357, __Vtemp358);
    vlTOPp->mul__DOT__acc_temp_1[7U][0U] = __Vtemp359[0U];
    vlTOPp->mul__DOT__acc_temp_1[7U][1U] = __Vtemp359[1U];
    vlTOPp->mul__DOT__acc_temp_1[7U][2U] = (1U & __Vtemp359[2U]);
    __Vtemp362[0U] = vlTOPp->mul__DOT__acc_temp[0x10U][0U];
    __Vtemp362[1U] = vlTOPp->mul__DOT__acc_temp[0x10U][1U];
    __Vtemp362[2U] = vlTOPp->mul__DOT__acc_temp[0x10U][2U];
    __Vtemp363[0U] = vlTOPp->mul__DOT__acc_temp[0x11U][0U];
    __Vtemp363[1U] = vlTOPp->mul__DOT__acc_temp[0x11U][1U];
    __Vtemp363[2U] = vlTOPp->mul__DOT__acc_temp[0x11U][2U];
    VL_ADD_W(3, __Vtemp364, __Vtemp362, __Vtemp363);
    vlTOPp->mul__DOT__acc_temp_1[8U][0U] = __Vtemp364[0U];
    vlTOPp->mul__DOT__acc_temp_1[8U][1U] = __Vtemp364[1U];
    vlTOPp->mul__DOT__acc_temp_1[8U][2U] = (1U & __Vtemp364[2U]);
    __Vtemp367[0U] = vlTOPp->mul__DOT__acc_temp[0x12U][0U];
    __Vtemp367[1U] = vlTOPp->mul__DOT__acc_temp[0x12U][1U];
    __Vtemp367[2U] = vlTOPp->mul__DOT__acc_temp[0x12U][2U];
    __Vtemp368[0U] = vlTOPp->mul__DOT__acc_temp[0x13U][0U];
    __Vtemp368[1U] = vlTOPp->mul__DOT__acc_temp[0x13U][1U];
    __Vtemp368[2U] = vlTOPp->mul__DOT__acc_temp[0x13U][2U];
    VL_ADD_W(3, __Vtemp369, __Vtemp367, __Vtemp368);
    vlTOPp->mul__DOT__acc_temp_1[9U][0U] = __Vtemp369[0U];
    vlTOPp->mul__DOT__acc_temp_1[9U][1U] = __Vtemp369[1U];
    vlTOPp->mul__DOT__acc_temp_1[9U][2U] = (1U & __Vtemp369[2U]);
    __Vtemp372[0U] = vlTOPp->mul__DOT__acc_temp[0x14U][0U];
    __Vtemp372[1U] = vlTOPp->mul__DOT__acc_temp[0x14U][1U];
    __Vtemp372[2U] = vlTOPp->mul__DOT__acc_temp[0x14U][2U];
    __Vtemp373[0U] = vlTOPp->mul__DOT__acc_temp[0x15U][0U];
    __Vtemp373[1U] = vlTOPp->mul__DOT__acc_temp[0x15U][1U];
    __Vtemp373[2U] = vlTOPp->mul__DOT__acc_temp[0x15U][2U];
    VL_ADD_W(3, __Vtemp374, __Vtemp372, __Vtemp373);
    vlTOPp->mul__DOT__acc_temp_1[0xaU][0U] = __Vtemp374[0U];
    vlTOPp->mul__DOT__acc_temp_1[0xaU][1U] = __Vtemp374[1U];
    vlTOPp->mul__DOT__acc_temp_1[0xaU][2U] = (1U & 
                                              __Vtemp374[2U]);
    __Vtemp377[0U] = vlTOPp->mul__DOT__acc_temp[0x16U][0U];
    __Vtemp377[1U] = vlTOPp->mul__DOT__acc_temp[0x16U][1U];
    __Vtemp377[2U] = vlTOPp->mul__DOT__acc_temp[0x16U][2U];
    __Vtemp378[0U] = vlTOPp->mul__DOT__acc_temp[0x17U][0U];
    __Vtemp378[1U] = vlTOPp->mul__DOT__acc_temp[0x17U][1U];
    __Vtemp378[2U] = vlTOPp->mul__DOT__acc_temp[0x17U][2U];
    VL_ADD_W(3, __Vtemp379, __Vtemp377, __Vtemp378);
    vlTOPp->mul__DOT__acc_temp_1[0xbU][0U] = __Vtemp379[0U];
    vlTOPp->mul__DOT__acc_temp_1[0xbU][1U] = __Vtemp379[1U];
    vlTOPp->mul__DOT__acc_temp_1[0xbU][2U] = (1U & 
                                              __Vtemp379[2U]);
    __Vtemp382[0U] = vlTOPp->mul__DOT__acc_temp[0x18U][0U];
    __Vtemp382[1U] = vlTOPp->mul__DOT__acc_temp[0x18U][1U];
    __Vtemp382[2U] = vlTOPp->mul__DOT__acc_temp[0x18U][2U];
    __Vtemp383[0U] = vlTOPp->mul__DOT__acc_temp[0x19U][0U];
    __Vtemp383[1U] = vlTOPp->mul__DOT__acc_temp[0x19U][1U];
    __Vtemp383[2U] = vlTOPp->mul__DOT__acc_temp[0x19U][2U];
    VL_ADD_W(3, __Vtemp384, __Vtemp382, __Vtemp383);
    vlTOPp->mul__DOT__acc_temp_1[0xcU][0U] = __Vtemp384[0U];
    vlTOPp->mul__DOT__acc_temp_1[0xcU][1U] = __Vtemp384[1U];
    vlTOPp->mul__DOT__acc_temp_1[0xcU][2U] = (1U & 
                                              __Vtemp384[2U]);
    __Vtemp387[0U] = vlTOPp->mul__DOT__acc_temp[0x1aU][0U];
    __Vtemp387[1U] = vlTOPp->mul__DOT__acc_temp[0x1aU][1U];
    __Vtemp387[2U] = vlTOPp->mul__DOT__acc_temp[0x1aU][2U];
    __Vtemp388[0U] = vlTOPp->mul__DOT__acc_temp[0x1bU][0U];
    __Vtemp388[1U] = vlTOPp->mul__DOT__acc_temp[0x1bU][1U];
    __Vtemp388[2U] = vlTOPp->mul__DOT__acc_temp[0x1bU][2U];
    VL_ADD_W(3, __Vtemp389, __Vtemp387, __Vtemp388);
    vlTOPp->mul__DOT__acc_temp_1[0xdU][0U] = __Vtemp389[0U];
    vlTOPp->mul__DOT__acc_temp_1[0xdU][1U] = __Vtemp389[1U];
    vlTOPp->mul__DOT__acc_temp_1[0xdU][2U] = (1U & 
                                              __Vtemp389[2U]);
    __Vtemp392[0U] = vlTOPp->mul__DOT__acc_temp[0x1cU][0U];
    __Vtemp392[1U] = vlTOPp->mul__DOT__acc_temp[0x1cU][1U];
    __Vtemp392[2U] = vlTOPp->mul__DOT__acc_temp[0x1cU][2U];
    __Vtemp393[0U] = vlTOPp->mul__DOT__acc_temp[0x1dU][0U];
    __Vtemp393[1U] = vlTOPp->mul__DOT__acc_temp[0x1dU][1U];
    __Vtemp393[2U] = vlTOPp->mul__DOT__acc_temp[0x1dU][2U];
    VL_ADD_W(3, __Vtemp394, __Vtemp392, __Vtemp393);
    vlTOPp->mul__DOT__acc_temp_1[0xeU][0U] = __Vtemp394[0U];
    vlTOPp->mul__DOT__acc_temp_1[0xeU][1U] = __Vtemp394[1U];
    vlTOPp->mul__DOT__acc_temp_1[0xeU][2U] = (1U & 
                                              __Vtemp394[2U]);
    __Vtemp397[0U] = vlTOPp->mul__DOT__acc_temp[0x1eU][0U];
    __Vtemp397[1U] = vlTOPp->mul__DOT__acc_temp[0x1eU][1U];
    __Vtemp397[2U] = vlTOPp->mul__DOT__acc_temp[0x1eU][2U];
    __Vtemp398[0U] = vlTOPp->mul__DOT__acc_temp[0x1fU][0U];
    __Vtemp398[1U] = vlTOPp->mul__DOT__acc_temp[0x1fU][1U];
    __Vtemp398[2U] = vlTOPp->mul__DOT__acc_temp[0x1fU][2U];
    VL_ADD_W(3, __Vtemp399, __Vtemp397, __Vtemp398);
    vlTOPp->mul__DOT__acc_temp_1[0xfU][0U] = __Vtemp399[0U];
    vlTOPp->mul__DOT__acc_temp_1[0xfU][1U] = __Vtemp399[1U];
    vlTOPp->mul__DOT__acc_temp_1[0xfU][2U] = (1U & 
                                              __Vtemp399[2U]);
    __Vtemp402[0U] = vlTOPp->mul__DOT__acc_temp_1[0U][0U];
    __Vtemp402[1U] = vlTOPp->mul__DOT__acc_temp_1[0U][1U];
    __Vtemp402[2U] = vlTOPp->mul__DOT__acc_temp_1[0U][2U];
    __Vtemp403[0U] = vlTOPp->mul__DOT__acc_temp_1[1U][0U];
    __Vtemp403[1U] = vlTOPp->mul__DOT__acc_temp_1[1U][1U];
    __Vtemp403[2U] = vlTOPp->mul__DOT__acc_temp_1[1U][2U];
    VL_ADD_W(3, __Vtemp404, __Vtemp402, __Vtemp403);
    vlTOPp->mul__DOT__acc_temp_2[0U][0U] = __Vtemp404[0U];
    vlTOPp->mul__DOT__acc_temp_2[0U][1U] = __Vtemp404[1U];
    vlTOPp->mul__DOT__acc_temp_2[0U][2U] = (1U & __Vtemp404[2U]);
    __Vtemp407[0U] = vlTOPp->mul__DOT__acc_temp_1[2U][0U];
    __Vtemp407[1U] = vlTOPp->mul__DOT__acc_temp_1[2U][1U];
    __Vtemp407[2U] = vlTOPp->mul__DOT__acc_temp_1[2U][2U];
    __Vtemp408[0U] = vlTOPp->mul__DOT__acc_temp_1[3U][0U];
    __Vtemp408[1U] = vlTOPp->mul__DOT__acc_temp_1[3U][1U];
    __Vtemp408[2U] = vlTOPp->mul__DOT__acc_temp_1[3U][2U];
    VL_ADD_W(3, __Vtemp409, __Vtemp407, __Vtemp408);
    vlTOPp->mul__DOT__acc_temp_2[1U][0U] = __Vtemp409[0U];
    vlTOPp->mul__DOT__acc_temp_2[1U][1U] = __Vtemp409[1U];
    vlTOPp->mul__DOT__acc_temp_2[1U][2U] = (1U & __Vtemp409[2U]);
    __Vtemp412[0U] = vlTOPp->mul__DOT__acc_temp_1[4U][0U];
    __Vtemp412[1U] = vlTOPp->mul__DOT__acc_temp_1[4U][1U];
    __Vtemp412[2U] = vlTOPp->mul__DOT__acc_temp_1[4U][2U];
    __Vtemp413[0U] = vlTOPp->mul__DOT__acc_temp_1[5U][0U];
    __Vtemp413[1U] = vlTOPp->mul__DOT__acc_temp_1[5U][1U];
    __Vtemp413[2U] = vlTOPp->mul__DOT__acc_temp_1[5U][2U];
    VL_ADD_W(3, __Vtemp414, __Vtemp412, __Vtemp413);
    vlTOPp->mul__DOT__acc_temp_2[2U][0U] = __Vtemp414[0U];
    vlTOPp->mul__DOT__acc_temp_2[2U][1U] = __Vtemp414[1U];
    vlTOPp->mul__DOT__acc_temp_2[2U][2U] = (1U & __Vtemp414[2U]);
    __Vtemp417[0U] = vlTOPp->mul__DOT__acc_temp_1[6U][0U];
    __Vtemp417[1U] = vlTOPp->mul__DOT__acc_temp_1[6U][1U];
    __Vtemp417[2U] = vlTOPp->mul__DOT__acc_temp_1[6U][2U];
    __Vtemp418[0U] = vlTOPp->mul__DOT__acc_temp_1[7U][0U];
    __Vtemp418[1U] = vlTOPp->mul__DOT__acc_temp_1[7U][1U];
    __Vtemp418[2U] = vlTOPp->mul__DOT__acc_temp_1[7U][2U];
    VL_ADD_W(3, __Vtemp419, __Vtemp417, __Vtemp418);
    vlTOPp->mul__DOT__acc_temp_2[3U][0U] = __Vtemp419[0U];
    vlTOPp->mul__DOT__acc_temp_2[3U][1U] = __Vtemp419[1U];
    vlTOPp->mul__DOT__acc_temp_2[3U][2U] = (1U & __Vtemp419[2U]);
    __Vtemp422[0U] = vlTOPp->mul__DOT__acc_temp_1[8U][0U];
    __Vtemp422[1U] = vlTOPp->mul__DOT__acc_temp_1[8U][1U];
    __Vtemp422[2U] = vlTOPp->mul__DOT__acc_temp_1[8U][2U];
    __Vtemp423[0U] = vlTOPp->mul__DOT__acc_temp_1[9U][0U];
    __Vtemp423[1U] = vlTOPp->mul__DOT__acc_temp_1[9U][1U];
    __Vtemp423[2U] = vlTOPp->mul__DOT__acc_temp_1[9U][2U];
    VL_ADD_W(3, __Vtemp424, __Vtemp422, __Vtemp423);
    vlTOPp->mul__DOT__acc_temp_2[4U][0U] = __Vtemp424[0U];
    vlTOPp->mul__DOT__acc_temp_2[4U][1U] = __Vtemp424[1U];
    vlTOPp->mul__DOT__acc_temp_2[4U][2U] = (1U & __Vtemp424[2U]);
    __Vtemp427[0U] = vlTOPp->mul__DOT__acc_temp_1[0xaU][0U];
    __Vtemp427[1U] = vlTOPp->mul__DOT__acc_temp_1[0xaU][1U];
    __Vtemp427[2U] = vlTOPp->mul__DOT__acc_temp_1[0xaU][2U];
    __Vtemp428[0U] = vlTOPp->mul__DOT__acc_temp_1[0xbU][0U];
    __Vtemp428[1U] = vlTOPp->mul__DOT__acc_temp_1[0xbU][1U];
    __Vtemp428[2U] = vlTOPp->mul__DOT__acc_temp_1[0xbU][2U];
    VL_ADD_W(3, __Vtemp429, __Vtemp427, __Vtemp428);
    vlTOPp->mul__DOT__acc_temp_2[5U][0U] = __Vtemp429[0U];
    vlTOPp->mul__DOT__acc_temp_2[5U][1U] = __Vtemp429[1U];
    vlTOPp->mul__DOT__acc_temp_2[5U][2U] = (1U & __Vtemp429[2U]);
    __Vtemp432[0U] = vlTOPp->mul__DOT__acc_temp_1[0xcU][0U];
    __Vtemp432[1U] = vlTOPp->mul__DOT__acc_temp_1[0xcU][1U];
    __Vtemp432[2U] = vlTOPp->mul__DOT__acc_temp_1[0xcU][2U];
    __Vtemp433[0U] = vlTOPp->mul__DOT__acc_temp_1[0xdU][0U];
    __Vtemp433[1U] = vlTOPp->mul__DOT__acc_temp_1[0xdU][1U];
    __Vtemp433[2U] = vlTOPp->mul__DOT__acc_temp_1[0xdU][2U];
    VL_ADD_W(3, __Vtemp434, __Vtemp432, __Vtemp433);
    vlTOPp->mul__DOT__acc_temp_2[6U][0U] = __Vtemp434[0U];
    vlTOPp->mul__DOT__acc_temp_2[6U][1U] = __Vtemp434[1U];
    vlTOPp->mul__DOT__acc_temp_2[6U][2U] = (1U & __Vtemp434[2U]);
    __Vtemp437[0U] = vlTOPp->mul__DOT__acc_temp_1[0xeU][0U];
    __Vtemp437[1U] = vlTOPp->mul__DOT__acc_temp_1[0xeU][1U];
    __Vtemp437[2U] = vlTOPp->mul__DOT__acc_temp_1[0xeU][2U];
    __Vtemp438[0U] = vlTOPp->mul__DOT__acc_temp_1[0xfU][0U];
    __Vtemp438[1U] = vlTOPp->mul__DOT__acc_temp_1[0xfU][1U];
    __Vtemp438[2U] = vlTOPp->mul__DOT__acc_temp_1[0xfU][2U];
    VL_ADD_W(3, __Vtemp439, __Vtemp437, __Vtemp438);
    vlTOPp->mul__DOT__acc_temp_2[7U][0U] = __Vtemp439[0U];
    vlTOPp->mul__DOT__acc_temp_2[7U][1U] = __Vtemp439[1U];
    vlTOPp->mul__DOT__acc_temp_2[7U][2U] = (1U & __Vtemp439[2U]);
    __Vtemp442[0U] = vlTOPp->mul__DOT__acc_temp_2[0U][0U];
    __Vtemp442[1U] = vlTOPp->mul__DOT__acc_temp_2[0U][1U];
    __Vtemp442[2U] = vlTOPp->mul__DOT__acc_temp_2[0U][2U];
    __Vtemp443[0U] = vlTOPp->mul__DOT__acc_temp_2[1U][0U];
    __Vtemp443[1U] = vlTOPp->mul__DOT__acc_temp_2[1U][1U];
    __Vtemp443[2U] = vlTOPp->mul__DOT__acc_temp_2[1U][2U];
    VL_ADD_W(3, __Vtemp444, __Vtemp442, __Vtemp443);
    vlTOPp->mul__DOT__acc_temp_3[0U][0U] = __Vtemp444[0U];
    vlTOPp->mul__DOT__acc_temp_3[0U][1U] = __Vtemp444[1U];
    vlTOPp->mul__DOT__acc_temp_3[0U][2U] = (1U & __Vtemp444[2U]);
    __Vtemp447[0U] = vlTOPp->mul__DOT__acc_temp_2[2U][0U];
    __Vtemp447[1U] = vlTOPp->mul__DOT__acc_temp_2[2U][1U];
    __Vtemp447[2U] = vlTOPp->mul__DOT__acc_temp_2[2U][2U];
    __Vtemp448[0U] = vlTOPp->mul__DOT__acc_temp_2[3U][0U];
    __Vtemp448[1U] = vlTOPp->mul__DOT__acc_temp_2[3U][1U];
    __Vtemp448[2U] = vlTOPp->mul__DOT__acc_temp_2[3U][2U];
    VL_ADD_W(3, __Vtemp449, __Vtemp447, __Vtemp448);
    vlTOPp->mul__DOT__acc_temp_3[1U][0U] = __Vtemp449[0U];
    vlTOPp->mul__DOT__acc_temp_3[1U][1U] = __Vtemp449[1U];
    vlTOPp->mul__DOT__acc_temp_3[1U][2U] = (1U & __Vtemp449[2U]);
    __Vtemp452[0U] = vlTOPp->mul__DOT__acc_temp_2[4U][0U];
    __Vtemp452[1U] = vlTOPp->mul__DOT__acc_temp_2[4U][1U];
    __Vtemp452[2U] = vlTOPp->mul__DOT__acc_temp_2[4U][2U];
    __Vtemp453[0U] = vlTOPp->mul__DOT__acc_temp_2[5U][0U];
    __Vtemp453[1U] = vlTOPp->mul__DOT__acc_temp_2[5U][1U];
    __Vtemp453[2U] = vlTOPp->mul__DOT__acc_temp_2[5U][2U];
    VL_ADD_W(3, __Vtemp454, __Vtemp452, __Vtemp453);
    vlTOPp->mul__DOT__acc_temp_3[2U][0U] = __Vtemp454[0U];
    vlTOPp->mul__DOT__acc_temp_3[2U][1U] = __Vtemp454[1U];
    vlTOPp->mul__DOT__acc_temp_3[2U][2U] = (1U & __Vtemp454[2U]);
    __Vtemp457[0U] = vlTOPp->mul__DOT__acc_temp_2[6U][0U];
    __Vtemp457[1U] = vlTOPp->mul__DOT__acc_temp_2[6U][1U];
    __Vtemp457[2U] = vlTOPp->mul__DOT__acc_temp_2[6U][2U];
    __Vtemp458[0U] = vlTOPp->mul__DOT__acc_temp_2[7U][0U];
    __Vtemp458[1U] = vlTOPp->mul__DOT__acc_temp_2[7U][1U];
    __Vtemp458[2U] = vlTOPp->mul__DOT__acc_temp_2[7U][2U];
    VL_ADD_W(3, __Vtemp459, __Vtemp457, __Vtemp458);
    vlTOPp->mul__DOT__acc_temp_3[3U][0U] = __Vtemp459[0U];
    vlTOPp->mul__DOT__acc_temp_3[3U][1U] = __Vtemp459[1U];
    vlTOPp->mul__DOT__acc_temp_3[3U][2U] = (1U & __Vtemp459[2U]);
    __Vtemp462[0U] = vlTOPp->mul__DOT__acc_temp_3[0U][0U];
    __Vtemp462[1U] = vlTOPp->mul__DOT__acc_temp_3[0U][1U];
    __Vtemp462[2U] = vlTOPp->mul__DOT__acc_temp_3[0U][2U];
    __Vtemp463[0U] = vlTOPp->mul__DOT__acc_temp_3[1U][0U];
    __Vtemp463[1U] = vlTOPp->mul__DOT__acc_temp_3[1U][1U];
    __Vtemp463[2U] = vlTOPp->mul__DOT__acc_temp_3[1U][2U];
    VL_ADD_W(3, __Vtemp464, __Vtemp462, __Vtemp463);
    vlTOPp->mul__DOT__acc_temp_4[0U][0U] = __Vtemp464[0U];
    vlTOPp->mul__DOT__acc_temp_4[0U][1U] = __Vtemp464[1U];
    vlTOPp->mul__DOT__acc_temp_4[0U][2U] = (1U & __Vtemp464[2U]);
    __Vtemp467[0U] = vlTOPp->mul__DOT__acc_temp_3[2U][0U];
    __Vtemp467[1U] = vlTOPp->mul__DOT__acc_temp_3[2U][1U];
    __Vtemp467[2U] = vlTOPp->mul__DOT__acc_temp_3[2U][2U];
    __Vtemp468[0U] = vlTOPp->mul__DOT__acc_temp_3[3U][0U];
    __Vtemp468[1U] = vlTOPp->mul__DOT__acc_temp_3[3U][1U];
    __Vtemp468[2U] = vlTOPp->mul__DOT__acc_temp_3[3U][2U];
    VL_ADD_W(3, __Vtemp469, __Vtemp467, __Vtemp468);
    vlTOPp->mul__DOT__acc_temp_4[1U][0U] = __Vtemp469[0U];
    vlTOPp->mul__DOT__acc_temp_4[1U][1U] = __Vtemp469[1U];
    vlTOPp->mul__DOT__acc_temp_4[1U][2U] = (1U & __Vtemp469[2U]);
    __Vtemp472[0U] = vlTOPp->mul__DOT__acc_temp_4[0U][0U];
    __Vtemp472[1U] = vlTOPp->mul__DOT__acc_temp_4[0U][1U];
    __Vtemp472[2U] = vlTOPp->mul__DOT__acc_temp_4[0U][2U];
    __Vtemp473[0U] = vlTOPp->mul__DOT__acc_temp_4[1U][0U];
    __Vtemp473[1U] = vlTOPp->mul__DOT__acc_temp_4[1U][1U];
    __Vtemp473[2U] = vlTOPp->mul__DOT__acc_temp_4[1U][2U];
    VL_ADD_W(3, __Vtemp474, __Vtemp472, __Vtemp473);
    vlTOPp->mul__DOT__acc_temp_5[0U] = __Vtemp474[0U];
    vlTOPp->mul__DOT__acc_temp_5[1U] = __Vtemp474[1U];
    vlTOPp->mul__DOT__acc_temp_5[2U] = (1U & __Vtemp474[2U]);
}

VL_INLINE_OPT void Vmul::_combo__TOP__3(Vmul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_combo__TOP__3\n"); );
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ready_o = ((~ (IData)(vlTOPp->rst_i)) & 
                       ((IData)(vlTOPp->req_i) & (vlTOPp->mul__DOT__ready_temp 
                                                  >> 0x1fU)));
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

void Vmul::_eval(Vmul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_eval\n"); );
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

VL_INLINE_OPT QData Vmul::_change_request(Vmul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_change_request\n"); );
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vmul::_change_request_1(Vmul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_change_request_1\n"); );
    Vmul* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmul::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((rst_i & 0xfeU))) {
        Verilated::overWidthError("rst_i");}
    if (VL_UNLIKELY((req_i & 0xfeU))) {
        Verilated::overWidthError("req_i");}
}
#endif  // VL_DEBUG
