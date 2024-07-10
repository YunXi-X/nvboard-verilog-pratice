// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaddr_4.h for the primary calling header

#include "verilated.h"

#include "Vaddr_4___024root.h"

VL_INLINE_OPT void Vaddr_4___024root___ico_sequent__TOP__0(Vaddr_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddr_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddr_4___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->__VdfgTmp_ha9918942__0 = (3U & ((1U & (IData)(vlSelf->a)) 
                                            + ((1U 
                                                & (IData)(vlSelf->b)) 
                                               + (IData)(vlSelf->cin))));
    vlSelf->__VdfgTmp_h1b116cf0__0 = (3U & ((1U & ((IData)(vlSelf->a) 
                                                   >> 1U)) 
                                            + ((1U 
                                                & ((IData)(vlSelf->b) 
                                                   >> 1U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_ha9918942__0) 
                                                  >> 1U))));
    vlSelf->__VdfgTmp_hef5a094a__0 = (3U & ((1U & ((IData)(vlSelf->a) 
                                                   >> 2U)) 
                                            + ((1U 
                                                & ((IData)(vlSelf->b) 
                                                   >> 2U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h1b116cf0__0) 
                                                  >> 1U))));
    vlSelf->cout = (1U & (((1U & ((IData)(vlSelf->a) 
                                  >> 3U)) + ((1U & 
                                              ((IData)(vlSelf->b) 
                                               >> 3U)) 
                                             + ((IData)(vlSelf->__VdfgTmp_hef5a094a__0) 
                                                >> 1U))) 
                          >> 1U));
    vlSelf->sum = ((8U & ((((IData)(vlSelf->a) >> 3U) 
                           + (((IData)(vlSelf->b) >> 3U) 
                              + ((IData)(vlSelf->__VdfgTmp_hef5a094a__0) 
                                 >> 1U))) << 3U)) | 
                   ((4U & ((((IData)(vlSelf->a) >> 2U) 
                            + (((IData)(vlSelf->b) 
                                >> 2U) + ((IData)(vlSelf->__VdfgTmp_h1b116cf0__0) 
                                          >> 1U))) 
                           << 2U)) | ((2U & ((((IData)(vlSelf->a) 
                                               >> 1U) 
                                              + (((IData)(vlSelf->b) 
                                                  >> 1U) 
                                                 + 
                                                 ((IData)(vlSelf->__VdfgTmp_ha9918942__0) 
                                                  >> 1U))) 
                                             << 1U)) 
                                      | (1U & ((IData)(vlSelf->a) 
                                               + ((IData)(vlSelf->b) 
                                                  + (IData)(vlSelf->cin)))))));
}

void Vaddr_4___024root___eval_ico(Vaddr_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddr_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddr_4___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vaddr_4___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vaddr_4___024root___eval_act(Vaddr_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddr_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddr_4___024root___eval_act\n"); );
}

void Vaddr_4___024root___eval_nba(Vaddr_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddr_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddr_4___024root___eval_nba\n"); );
}

void Vaddr_4___024root___eval_triggers__ico(Vaddr_4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddr_4___024root___dump_triggers__ico(Vaddr_4___024root* vlSelf);
#endif  // VL_DEBUG
void Vaddr_4___024root___eval_triggers__act(Vaddr_4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddr_4___024root___dump_triggers__act(Vaddr_4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddr_4___024root___dump_triggers__nba(Vaddr_4___024root* vlSelf);
#endif  // VL_DEBUG

void Vaddr_4___024root___eval(Vaddr_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddr_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddr_4___024root___eval\n"); );
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
        Vaddr_4___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vaddr_4___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("addr_4.v", 3, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vaddr_4___024root___eval_ico(vlSelf);
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
            Vaddr_4___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vaddr_4___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("addr_4.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vaddr_4___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vaddr_4___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("addr_4.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vaddr_4___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vaddr_4___024root___eval_debug_assertions(Vaddr_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddr_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddr_4___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xf0U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
