// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFSM_top__Syms.h"


VL_ATTR_COLD void VFSM_top___024root__trace_init_sub__TOP__0(VFSM_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"in", false,-1);
    tracep->declBus(c+4,"statue", false,-1, 3,0);
    tracep->declBit(c+5,"out", false,-1);
    tracep->pushNamePrefix("FSM_top ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"in", false,-1);
    tracep->declBus(c+4,"statue", false,-1, 3,0);
    tracep->declBit(c+5,"out", false,-1);
    tracep->declBus(c+7,"S0", false,-1, 3,0);
    tracep->declBus(c+8,"S1", false,-1, 3,0);
    tracep->declBus(c+9,"S2", false,-1, 3,0);
    tracep->declBus(c+10,"S3", false,-1, 3,0);
    tracep->declBus(c+11,"S4", false,-1, 3,0);
    tracep->declBus(c+12,"S5", false,-1, 3,0);
    tracep->declBus(c+13,"S6", false,-1, 3,0);
    tracep->declBus(c+14,"S7", false,-1, 3,0);
    tracep->declBus(c+15,"S8", false,-1, 3,0);
    tracep->declBus(c+6,"out_temp", false,-1, 3,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VFSM_top___024root__trace_init_top(VFSM_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root__trace_init_top\n"); );
    // Body
    VFSM_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VFSM_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VFSM_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VFSM_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VFSM_top___024root__trace_register(VFSM_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VFSM_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VFSM_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VFSM_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VFSM_top___024root__trace_full_sub_0(VFSM_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VFSM_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root__trace_full_top_0\n"); );
    // Init
    VFSM_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFSM_top___024root*>(voidSelf);
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFSM_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VFSM_top___024root__trace_full_sub_0(VFSM_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->reset));
    bufp->fullBit(oldp+3,(vlSelf->in));
    bufp->fullCData(oldp+4,(vlSelf->statue),4);
    bufp->fullBit(oldp+5,(vlSelf->out));
    bufp->fullCData(oldp+6,(vlSelf->FSM_top__DOT__out_temp),4);
    bufp->fullCData(oldp+7,(0U),4);
    bufp->fullCData(oldp+8,(1U),4);
    bufp->fullCData(oldp+9,(2U),4);
    bufp->fullCData(oldp+10,(3U),4);
    bufp->fullCData(oldp+11,(4U),4);
    bufp->fullCData(oldp+12,(5U),4);
    bufp->fullCData(oldp+13,(6U),4);
    bufp->fullCData(oldp+14,(7U),4);
    bufp->fullCData(oldp+15,(8U),4);
}
