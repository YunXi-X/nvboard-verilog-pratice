// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_top.h for the primary calling header

#include "verilated.h"

#include "VFSM_top__Syms.h"
#include "VFSM_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_top___024root___dump_triggers__ico(VFSM_top___024root* vlSelf);
#endif  // VL_DEBUG

void VFSM_top___024root___eval_triggers__ico(VFSM_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFSM_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_top___024root___dump_triggers__act(VFSM_top___024root* vlSelf);
#endif  // VL_DEBUG

void VFSM_top___024root___eval_triggers__act(VFSM_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__reset))));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFSM_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
