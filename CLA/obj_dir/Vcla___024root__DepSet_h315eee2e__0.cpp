// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcla.h for the primary calling header

#include "verilated.h"

#include "Vcla___024root.h"

VL_INLINE_OPT void Vcla___024root___ico_sequent__TOP__0(Vcla___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcla___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->sum = ((IData)(vlSelf->a) ^ ((IData)(vlSelf->b) 
                                         ^ (IData)(vlSelf->cin)));
    vlSelf->cout = (((IData)(vlSelf->a) & (IData)(vlSelf->b)) 
                    | (((IData)(vlSelf->a) | (IData)(vlSelf->b)) 
                       & (IData)(vlSelf->cin)));
}

void Vcla___024root___eval_ico(Vcla___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcla___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vcla___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vcla___024root___eval_act(Vcla___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcla___024root___eval_act\n"); );
}

void Vcla___024root___eval_nba(Vcla___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcla___024root___eval_nba\n"); );
}

void Vcla___024root___eval_triggers__ico(Vcla___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcla___024root___dump_triggers__ico(Vcla___024root* vlSelf);
#endif  // VL_DEBUG
void Vcla___024root___eval_triggers__act(Vcla___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcla___024root___dump_triggers__act(Vcla___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcla___024root___dump_triggers__nba(Vcla___024root* vlSelf);
#endif  // VL_DEBUG

void Vcla___024root___eval(Vcla___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcla___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vcla___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vcla___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("cla.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vcla___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcla___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcla___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("cla.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vcla___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcla___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("cla.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcla___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vcla___024root___eval_debug_assertions(Vcla___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcla___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
