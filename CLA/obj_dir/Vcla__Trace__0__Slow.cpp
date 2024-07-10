// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcla__Syms.h"


VL_ATTR_COLD void Vcla___024root__trace_init_sub__TOP__0(Vcla___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcla___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"cin", false,-1);
    tracep->declBit(c+4,"sum", false,-1);
    tracep->declBit(c+5,"cout", false,-1);
    tracep->pushNamePrefix("cla ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"cin", false,-1);
    tracep->declBit(c+4,"sum", false,-1);
    tracep->declBit(c+5,"cout", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vcla___024root__trace_init_top(Vcla___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcla___024root__trace_init_top\n"); );
    // Body
    Vcla___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcla___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcla___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcla___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcla___024root__trace_register(Vcla___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcla___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcla___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcla___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcla___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcla___024root__trace_full_sub_0(Vcla___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcla___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcla___024root__trace_full_top_0\n"); );
    // Init
    Vcla___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcla___024root*>(voidSelf);
    Vcla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcla___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcla___024root__trace_full_sub_0(Vcla___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcla___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->a));
    bufp->fullBit(oldp+2,(vlSelf->b));
    bufp->fullBit(oldp+3,(vlSelf->cin));
    bufp->fullBit(oldp+4,(vlSelf->sum));
    bufp->fullBit(oldp+5,(vlSelf->cout));
}
