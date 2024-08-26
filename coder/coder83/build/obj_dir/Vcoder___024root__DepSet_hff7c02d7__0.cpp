// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoder.h for the primary calling header

#include "verilated.h"

#include "Vcoder___024root.h"

void Vcoder___024root___eval_act(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vcoder___024root___nba_sequent__TOP__0(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->en) {
        vlSelf->out = 0U;
        if ((1U & (IData)(vlSelf->x))) {
            vlSelf->out = 0U;
            vlSelf->seg = ((4U & (IData)(vlSelf->out))
                            ? ((2U & (IData)(vlSelf->out))
                                ? ((1U & (IData)(vlSelf->out))
                                    ? 0x1fU : 0x41U)
                                : ((1U & (IData)(vlSelf->out))
                                    ? 0x49U : 0x99U))
                            : ((2U & (IData)(vlSelf->out))
                                ? ((1U & (IData)(vlSelf->out))
                                    ? 0xdU : 0x25U)
                                : ((1U & (IData)(vlSelf->out))
                                    ? 0x9fU : 2U)));
        }
        if ((2U & (IData)(vlSelf->x))) {
            vlSelf->out = 1U;
            vlSelf->seg = ((4U & (IData)(vlSelf->out))
                            ? ((2U & (IData)(vlSelf->out))
                                ? ((1U & (IData)(vlSelf->out))
                                    ? 0x1fU : 0x41U)
                                : ((1U & (IData)(vlSelf->out))
                                    ? 0x49U : 0x99U))
                            : ((2U & (IData)(vlSelf->out))
                                ? ((1U & (IData)(vlSelf->out))
                                    ? 0xdU : 0x25U)
                                : ((1U & (IData)(vlSelf->out))
                                    ? 0x9fU : 2U)));
        }
        if ((4U & (IData)(vlSelf->x))) {
            vlSelf->out = 2U;
            vlSelf->seg = ((4U & (IData)(vlSelf->out))
                            ? ((2U & (IData)(vlSelf->out))
                                ? ((1U & (IData)(vlSelf->out))
                                    ? 0x1fU : 0x41U)
                                : ((1U & (IData)(vlSelf->out))
                                    ? 0x49U : 0x99U))
                            : ((2U & (IData)(vlSelf->out))
                                ? ((1U & (IData)(vlSelf->out))
                                    ? 0xdU : 0x25U)
                                : ((1U & (IData)(vlSelf->out))
                                    ? 0x9fU : 2U)));
        }
        if ((8U & (IData)(vlSelf->x))) {
            vlSelf->out = 3U;
            vlSelf->seg = ((4U & (IData)(vlSelf->out))
                            ? ((2U & (IData)(vlSelf->out))
                                ? ((1U & (IData)(vlSelf->out))
                                    ? 0x1fU : 0x41U)
                                : ((1U & (IData)(vlSelf->out))
                                    ? 0x49U : 0x99U))
                            : ((2U & (IData)(vlSelf->out))
                                ? ((1U & (IData)(vlSelf->out))
                                    ? 0xdU : 0x25U)
                                : ((1U & (IData)(vlSelf->out))
                                    ? 0x9fU : 2U)));
        }
        if ((0x10U & (IData)(vlSelf->x))) {
            vlSelf->out = 4U;
            vlSelf->seg = ((4U & (IData)(vlSelf->out))
                            ? ((2U & (IData)(vlSelf->out))
                                ? ((1U & (IData)(vlSelf->out))
                                    ? 0x1fU : 0x41U)
                                : ((1U & (IData)(vlSelf->out))
                                    ? 0x49U : 0x99U))
                            : ((2U & (IData)(vlSelf->out))
                                ? ((1U & (IData)(vlSelf->out))
                                    ? 0xdU : 0x25U)
                                : ((1U & (IData)(vlSelf->out))
                                    ? 0x9fU : 2U)));
        }
        if ((0x20U & (IData)(vlSelf->x))) {
            vlSelf->out = 5U;
            vlSelf->seg = ((4U & (IData)(vlSelf->out))
                            ? ((2U & (IData)(vlSelf->out))
                                ? ((1U & (IData)(vlSelf->out))
                                    ? 0x1fU : 0x41U)
                                : ((1U & (IData)(vlSelf->out))
                                    ? 0x49U : 0x99U))
                            : ((2U & (IData)(vlSelf->out))
                                ? ((1U & (IData)(vlSelf->out))
                                    ? 0xdU : 0x25U)
                                : ((1U & (IData)(vlSelf->out))
                                    ? 0x9fU : 2U)));
        }
        if ((0x40U & (IData)(vlSelf->x))) {
            vlSelf->out = 6U;
            vlSelf->seg = ((4U & (IData)(vlSelf->out))
                            ? ((2U & (IData)(vlSelf->out))
                                ? ((1U & (IData)(vlSelf->out))
                                    ? 0x1fU : 0x41U)
                                : ((1U & (IData)(vlSelf->out))
                                    ? 0x49U : 0x99U))
                            : ((2U & (IData)(vlSelf->out))
                                ? ((1U & (IData)(vlSelf->out))
                                    ? 0xdU : 0x25U)
                                : ((1U & (IData)(vlSelf->out))
                                    ? 0x9fU : 2U)));
        }
        if ((0x80U & (IData)(vlSelf->x))) {
            vlSelf->out = 7U;
            vlSelf->seg = ((4U & (IData)(vlSelf->out))
                            ? ((2U & (IData)(vlSelf->out))
                                ? ((1U & (IData)(vlSelf->out))
                                    ? 0x1fU : 0x41U)
                                : ((1U & (IData)(vlSelf->out))
                                    ? 0x49U : 0x99U))
                            : ((2U & (IData)(vlSelf->out))
                                ? ((1U & (IData)(vlSelf->out))
                                    ? 0xdU : 0x25U)
                                : ((1U & (IData)(vlSelf->out))
                                    ? 0x9fU : 2U)));
        }
    } else {
        vlSelf->out = 0U;
    }
}

void Vcoder___024root___eval_nba(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vcoder___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vcoder___024root___eval_triggers__act(Vcoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoder___024root___dump_triggers__act(Vcoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcoder___024root___dump_triggers__nba(Vcoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vcoder___024root___eval(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___eval\n"); );
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
            Vcoder___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcoder___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/mike/project/nvboard-verilog-pratice/coder/coder83/vsrc/coder.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vcoder___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcoder___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/mike/project/nvboard-verilog-pratice/coder/coder83/vsrc/coder.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcoder___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vcoder___024root___eval_debug_assertions(Vcoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
