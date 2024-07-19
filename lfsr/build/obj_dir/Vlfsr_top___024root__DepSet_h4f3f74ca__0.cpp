// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr_top.h for the primary calling header

#include "verilated.h"

#include "Vlfsr_top__Syms.h"
#include "Vlfsr_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlfsr_top___024root___dump_triggers__act(Vlfsr_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vlfsr_top___024root___eval_triggers__act(Vlfsr_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlfsr_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
