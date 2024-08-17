// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_top.h for the primary calling header

#include "verilated.h"

#include "VFSM_top___024root.h"

void VFSM_top___024root___eval_act(VFSM_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*0:0*/, 16> VFSM_top__ConstPool__TABLE_h7d902788_0;
extern const VlUnpacked<CData/*3:0*/, 32> VFSM_top__ConstPool__TABLE_hb38e0f0f_0;

VL_INLINE_OPT void VFSM_top___024root___nba_sequent__TOP__0(VFSM_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = vlSelf->FSM_top__DOT__out_temp;
    vlSelf->out = VFSM_top__ConstPool__TABLE_h7d902788_0
        [__Vtableidx2];
    __Vtableidx1 = (((IData)(vlSelf->in) << 4U) | (IData)(vlSelf->statue));
    vlSelf->FSM_top__DOT__out_temp = VFSM_top__ConstPool__TABLE_hb38e0f0f_0
        [__Vtableidx1];
}

void VFSM_top___024root___eval_nba(VFSM_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VFSM_top___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VFSM_top___024root___eval_triggers__act(VFSM_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_top___024root___dump_triggers__act(VFSM_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_top___024root___dump_triggers__nba(VFSM_top___024root* vlSelf);
#endif  // VL_DEBUG

void VFSM_top___024root___eval(VFSM_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VFSM_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VFSM_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/FSM_top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VFSM_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VFSM_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/FSM_top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VFSM_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VFSM_top___024root___eval_debug_assertions(VFSM_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->in & 0xfeU))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((vlSelf->statue & 0xf0U))) {
        Verilated::overWidthError("statue");}
}
#endif  // VL_DEBUG
