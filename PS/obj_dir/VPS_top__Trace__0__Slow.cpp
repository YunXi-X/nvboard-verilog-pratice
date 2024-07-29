// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPS_top__Syms.h"


VL_ATTR_COLD void VPS_top___024root__trace_init_sub__TOP__0(VPS_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPS_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"in", false,-1);
    tracep->declBus(c+4,"statue", false,-1, 3,0);
    tracep->declBus(c+5,"out", false,-1, 3,0);
    tracep->pushNamePrefix("PS_top ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"in", false,-1);
    tracep->declBus(c+4,"statue", false,-1, 3,0);
    tracep->declBus(c+5,"out", false,-1, 3,0);
    tracep->declBus(c+6,"S0", false,-1, 3,0);
    tracep->declBus(c+7,"S1", false,-1, 3,0);
    tracep->declBus(c+8,"S2", false,-1, 3,0);
    tracep->declBus(c+9,"S3", false,-1, 3,0);
    tracep->declBus(c+10,"S4", false,-1, 3,0);
    tracep->declBus(c+11,"S5", false,-1, 3,0);
    tracep->declBus(c+12,"S6", false,-1, 3,0);
    tracep->declBus(c+13,"S7", false,-1, 3,0);
    tracep->declBus(c+14,"S8", false,-1, 3,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VPS_top___024root__trace_init_top(VPS_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPS_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS_top___024root__trace_init_top\n"); );
    // Body
    VPS_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPS_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPS_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPS_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPS_top___024root__trace_register(VPS_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPS_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPS_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPS_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPS_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPS_top___024root__trace_full_sub_0(VPS_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPS_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS_top___024root__trace_full_top_0\n"); );
    // Init
    VPS_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPS_top___024root*>(voidSelf);
    VPS_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPS_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPS_top___024root__trace_full_sub_0(VPS_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPS_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->reset));
    bufp->fullBit(oldp+3,(vlSelf->in));
    bufp->fullCData(oldp+4,(vlSelf->statue),4);
    bufp->fullCData(oldp+5,(vlSelf->out),4);
    bufp->fullCData(oldp+6,(0U),4);
    bufp->fullCData(oldp+7,(1U),4);
    bufp->fullCData(oldp+8,(2U),4);
    bufp->fullCData(oldp+9,(3U),4);
    bufp->fullCData(oldp+10,(4U),4);
    bufp->fullCData(oldp+11,(5U),4);
    bufp->fullCData(oldp+12,(6U),4);
    bufp->fullCData(oldp+13,(7U),4);
    bufp->fullCData(oldp+14,(8U),4);
}
