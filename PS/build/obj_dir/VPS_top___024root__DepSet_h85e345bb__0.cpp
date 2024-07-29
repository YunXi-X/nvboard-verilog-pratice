// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPS_top.h for the primary calling header

#include "verilated.h"

#include "VPS_top___024root.h"

void VPS_top___024root___eval_act(VPS_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS_top___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*3:0*/, 64> VPS_top__ConstPool__TABLE_hdcc997b5_0;

VL_INLINE_OPT void VPS_top___024root___nba_sequent__TOP__0(VPS_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->in) << 5U) | (
                                                   ((IData)(vlSelf->statue) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->reset)));
    vlSelf->out = VPS_top__ConstPool__TABLE_hdcc997b5_0
        [__Vtableidx1];
}

void VPS_top___024root___eval_nba(VPS_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPS_top___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VPS_top___024root___eval_triggers__act(VPS_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPS_top___024root___dump_triggers__act(VPS_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPS_top___024root___dump_triggers__nba(VPS_top___024root* vlSelf);
#endif  // VL_DEBUG

void VPS_top___024root___eval(VPS_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS_top___024root___eval\n"); );
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
            VPS_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPS_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/mike/project/ysyx-workbench/nvboard-verilog-pratice/PS/vsrc/PS_top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VPS_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPS_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/mike/project/ysyx-workbench/nvboard-verilog-pratice/PS/vsrc/PS_top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPS_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VPS_top___024root___eval_debug_assertions(VPS_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPS_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS_top___024root___eval_debug_assertions\n"); );
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
