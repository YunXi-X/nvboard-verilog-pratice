// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPS_top__Syms.h"


void VPS_top___024root__trace_chg_sub_0(VPS_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPS_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS_top___024root__trace_chg_top_0\n"); );
    // Init
    VPS_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPS_top___024root*>(voidSelf);
    VPS_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPS_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPS_top___024root__trace_chg_sub_0(VPS_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPS_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgBit(oldp+2,(vlSelf->in));
    bufp->chgCData(oldp+3,(vlSelf->statue),4);
    bufp->chgCData(oldp+4,(vlSelf->out),4);
}

void VPS_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS_top___024root__trace_cleanup\n"); );
    // Init
    VPS_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPS_top___024root*>(voidSelf);
    VPS_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
