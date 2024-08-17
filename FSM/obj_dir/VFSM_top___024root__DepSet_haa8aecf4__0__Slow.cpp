// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_top.h for the primary calling header

#include "verilated.h"

#include "VFSM_top___024root.h"

VL_ATTR_COLD void VFSM_top___024root___eval_static(VFSM_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void VFSM_top___024root___eval_initial(VFSM_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VFSM_top___024root___eval_final(VFSM_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void VFSM_top___024root___eval_settle(VFSM_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_top___024root___dump_triggers__act(VFSM_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_top___024root___dump_triggers__nba(VFSM_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFSM_top___024root___ctor_var_reset(VFSM_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->in = VL_RAND_RESET_I(1);
    vlSelf->statue = VL_RAND_RESET_I(4);
    vlSelf->out = VL_RAND_RESET_I(1);
    vlSelf->FSM_top__DOT__out_temp = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
}
