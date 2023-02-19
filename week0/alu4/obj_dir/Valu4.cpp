// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu4.h for the primary calling header

#include "Valu4.h"
#include "Valu4__Syms.h"

//==========

void Valu4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu4::eval\n"); );
    Valu4__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Valu4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("alu4.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Valu4::_eval_initial_loop(Valu4__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("alu4.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Valu4::_combo__TOP__1(Valu4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::_combo__TOP__1\n"); );
    Valu4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->alu4__DOT__al3__DOT__g4__DOT__s1 = (1U 
                                                & (((IData)(vlTOPp->a) 
                                                    ^ (IData)(vlTOPp->b)) 
                                                   >> 3U));
    vlTOPp->alu4__DOT__al2__DOT__g4__DOT__s1 = (1U 
                                                & (((IData)(vlTOPp->a) 
                                                    ^ (IData)(vlTOPp->b)) 
                                                   >> 2U));
    vlTOPp->alu4__DOT__al1__DOT__g4__DOT__s1 = (1U 
                                                & (((IData)(vlTOPp->a) 
                                                    ^ (IData)(vlTOPp->b)) 
                                                   >> 1U));
    vlTOPp->alu4__DOT__al0__DOT__g4__DOT__s1 = (1U 
                                                & ((IData)(vlTOPp->a) 
                                                   ^ (IData)(vlTOPp->b)));
    vlTOPp->result = ((0xeU & (IData)(vlTOPp->result)) 
                      | (1U & ((0U == (IData)(vlTOPp->op))
                                ? ((IData)(vlTOPp->a) 
                                   & (IData)(vlTOPp->b))
                                : ((1U == (IData)(vlTOPp->op))
                                    ? ((IData)(vlTOPp->a) 
                                       | (IData)(vlTOPp->b))
                                    : ((2U == (IData)(vlTOPp->op)) 
                                       & ((IData)(vlTOPp->alu4__DOT__al0__DOT__g4__DOT__s1) 
                                          ^ (IData)(vlTOPp->c_in)))))));
    vlTOPp->alu4__DOT__c1 = (1U & (((IData)(vlTOPp->alu4__DOT__al0__DOT__g4__DOT__s1) 
                                    & (IData)(vlTOPp->c_in)) 
                                   ^ ((IData)(vlTOPp->a) 
                                      & (IData)(vlTOPp->b))));
    vlTOPp->result = ((0xdU & (IData)(vlTOPp->result)) 
                      | (2U & (((0U == (IData)(vlTOPp->op))
                                 ? (((IData)(vlTOPp->a) 
                                     & (IData)(vlTOPp->b)) 
                                    >> 1U) : ((1U == (IData)(vlTOPp->op))
                                               ? (((IData)(vlTOPp->a) 
                                                   | (IData)(vlTOPp->b)) 
                                                  >> 1U)
                                               : ((2U 
                                                   == (IData)(vlTOPp->op)) 
                                                  & ((IData)(vlTOPp->alu4__DOT__al1__DOT__g4__DOT__s1) 
                                                     ^ (IData)(vlTOPp->alu4__DOT__c1))))) 
                               << 1U)));
    vlTOPp->alu4__DOT__c2 = (1U & (((IData)(vlTOPp->alu4__DOT__al1__DOT__g4__DOT__s1) 
                                    & (IData)(vlTOPp->alu4__DOT__c1)) 
                                   ^ (((IData)(vlTOPp->a) 
                                       & (IData)(vlTOPp->b)) 
                                      >> 1U)));
    vlTOPp->result = ((0xbU & (IData)(vlTOPp->result)) 
                      | (4U & (((0U == (IData)(vlTOPp->op))
                                 ? (((IData)(vlTOPp->a) 
                                     & (IData)(vlTOPp->b)) 
                                    >> 2U) : ((1U == (IData)(vlTOPp->op))
                                               ? (((IData)(vlTOPp->a) 
                                                   | (IData)(vlTOPp->b)) 
                                                  >> 2U)
                                               : ((2U 
                                                   == (IData)(vlTOPp->op)) 
                                                  & ((IData)(vlTOPp->alu4__DOT__al2__DOT__g4__DOT__s1) 
                                                     ^ (IData)(vlTOPp->alu4__DOT__c2))))) 
                               << 2U)));
    vlTOPp->alu4__DOT__c3 = (1U & (((IData)(vlTOPp->alu4__DOT__al2__DOT__g4__DOT__s1) 
                                    & (IData)(vlTOPp->alu4__DOT__c2)) 
                                   ^ (((IData)(vlTOPp->a) 
                                       & (IData)(vlTOPp->b)) 
                                      >> 2U)));
    vlTOPp->c_out = (1U & (((IData)(vlTOPp->alu4__DOT__al3__DOT__g4__DOT__s1) 
                            & (IData)(vlTOPp->alu4__DOT__c3)) 
                           ^ (((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
                              >> 3U)));
    vlTOPp->result = ((7U & (IData)(vlTOPp->result)) 
                      | (8U & (((0U == (IData)(vlTOPp->op))
                                 ? (((IData)(vlTOPp->a) 
                                     & (IData)(vlTOPp->b)) 
                                    >> 3U) : ((1U == (IData)(vlTOPp->op))
                                               ? (((IData)(vlTOPp->a) 
                                                   | (IData)(vlTOPp->b)) 
                                                  >> 3U)
                                               : ((2U 
                                                   == (IData)(vlTOPp->op)) 
                                                  & ((IData)(vlTOPp->alu4__DOT__al3__DOT__g4__DOT__s1) 
                                                     ^ (IData)(vlTOPp->alu4__DOT__c3))))) 
                               << 3U)));
}

void Valu4::_eval(Valu4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::_eval\n"); );
    Valu4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
}

VL_INLINE_OPT QData Valu4::_change_request(Valu4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::_change_request\n"); );
    Valu4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Valu4::_change_request_1(Valu4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::_change_request_1\n"); );
    Valu4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Valu4::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((b & 0xf0U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((c_in & 0xfeU))) {
        Verilated::overWidthError("c_in");}
    if (VL_UNLIKELY((op & 0xfcU))) {
        Verilated::overWidthError("op");}
}
#endif  // VL_DEBUG
