// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr_top.h for the primary calling header

#include "verilated.h"

#include "Vlfsr_top___024root.h"

void Vlfsr_top___024root___eval_act(Vlfsr_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vlfsr_top___024root___nba_sequent__TOP__0(Vlfsr_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__out;
    __Vdly__out = 0;
    // Body
    __Vdly__out = vlSelf->out;
    if ((0U == (IData)(vlSelf->out))) {
        vlSelf->lfsr_top__DOT__lfsr_i0__DOT__counter = 0U;
        __Vdly__out = 1U;
    } else if ((0xffU > (IData)(vlSelf->lfsr_top__DOT__lfsr_i0__DOT__counter))) {
        vlSelf->lfsr_top__DOT__lfsr_i0__DOT__counter 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->lfsr_top__DOT__lfsr_i0__DOT__counter)));
        __Vdly__out = ((0x7fU & (IData)(__Vdly__out)) 
                       | (0x80U & (VL_REDXOR_4((0xfU 
                                                & (IData)(vlSelf->out))) 
                                   << 7U)));
        __Vdly__out = ((0x80U & (IData)(__Vdly__out)) 
                       | (0x7fU & ((IData)(vlSelf->out) 
                                   >> 1U)));
    } else {
        __Vdly__out = 0U;
    }
    vlSelf->out = __Vdly__out;
}

void Vlfsr_top___024root___eval_nba(Vlfsr_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vlfsr_top___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vlfsr_top___024root___eval_triggers__act(Vlfsr_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlfsr_top___024root___dump_triggers__act(Vlfsr_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlfsr_top___024root___dump_triggers__nba(Vlfsr_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vlfsr_top___024root___eval(Vlfsr_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_top___024root___eval\n"); );
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
            Vlfsr_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vlfsr_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/mike/project/ysyx-workbench/nvboard-verilog-pratice/lfsr/vsrc/lfsr_top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vlfsr_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vlfsr_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/mike/project/ysyx-workbench/nvboard-verilog-pratice/lfsr/vsrc/lfsr_top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vlfsr_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vlfsr_top___024root___eval_debug_assertions(Vlfsr_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
