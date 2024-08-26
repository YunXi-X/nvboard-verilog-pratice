// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoder.h for the primary calling header

#include "verilated.h"

#include "Vcoder___024root.h"

VL_ATTR_COLD void Vcoder___024root___eval_static(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcoder___024root___eval_initial(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__en = vlSelf->en;
    vlSelf->__Vtrigrprev__TOP__x = vlSelf->x;
}

VL_ATTR_COLD void Vcoder___024root___eval_final(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vcoder___024root___eval_settle(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoder___024root___dump_triggers__act(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] en or [changed] x)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoder___024root___dump_triggers__nba(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] en or [changed] x)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcoder___024root___ctor_var_reset(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->x = 0;
    vlSelf->en = 0;
    vlSelf->out = 0;
    vlSelf->seg = 0;
    vlSelf->__Vtrigrprev__TOP__en = 0;
    vlSelf->__Vtrigrprev__TOP__x = 0;
    vlSelf->__VactDidInit = 0;
}
