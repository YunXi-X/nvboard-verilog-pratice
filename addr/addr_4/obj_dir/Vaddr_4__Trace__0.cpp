// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaddr_4__Syms.h"


void Vaddr_4___024root__trace_chg_sub_0(Vaddr_4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vaddr_4___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddr_4___024root__trace_chg_top_0\n"); );
    // Init
    Vaddr_4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaddr_4___024root*>(voidSelf);
    Vaddr_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vaddr_4___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vaddr_4___024root__trace_chg_sub_0(Vaddr_4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddr_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddr_4___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((1U & ((IData)(vlSelf->__VdfgTmp_ha9918942__0) 
                                    >> 1U))));
        bufp->chgBit(oldp+1,((1U & ((IData)(vlSelf->__VdfgTmp_h1b116cf0__0) 
                                    >> 1U))));
        bufp->chgBit(oldp+2,((1U & ((IData)(vlSelf->__VdfgTmp_hef5a094a__0) 
                                    >> 1U))));
    }
    bufp->chgCData(oldp+3,(vlSelf->a),4);
    bufp->chgCData(oldp+4,(vlSelf->b),4);
    bufp->chgBit(oldp+5,(vlSelf->cin));
    bufp->chgCData(oldp+6,(vlSelf->sum),4);
    bufp->chgBit(oldp+7,(vlSelf->cout));
    bufp->chgBit(oldp+8,((1U & ((IData)(vlSelf->a) 
                                + ((IData)(vlSelf->b) 
                                   + (IData)(vlSelf->cin))))));
    bufp->chgBit(oldp+9,((1U & (((IData)(vlSelf->a) 
                                 >> 1U) + (((IData)(vlSelf->b) 
                                            >> 1U) 
                                           + ((IData)(vlSelf->__VdfgTmp_ha9918942__0) 
                                              >> 1U))))));
    bufp->chgBit(oldp+10,((1U & (((IData)(vlSelf->a) 
                                  >> 2U) + (((IData)(vlSelf->b) 
                                             >> 2U) 
                                            + ((IData)(vlSelf->__VdfgTmp_h1b116cf0__0) 
                                               >> 1U))))));
    bufp->chgBit(oldp+11,((1U & (((IData)(vlSelf->a) 
                                  >> 3U) + (((IData)(vlSelf->b) 
                                             >> 3U) 
                                            + ((IData)(vlSelf->__VdfgTmp_hef5a094a__0) 
                                               >> 1U))))));
    bufp->chgBit(oldp+12,((1U & (IData)(vlSelf->a))));
    bufp->chgBit(oldp+13,((1U & (IData)(vlSelf->b))));
    bufp->chgBit(oldp+14,((1U & ((IData)(vlSelf->a) 
                                 >> 1U))));
    bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->b) 
                                 >> 1U))));
    bufp->chgBit(oldp+16,((1U & ((IData)(vlSelf->a) 
                                 >> 2U))));
    bufp->chgBit(oldp+17,((1U & ((IData)(vlSelf->b) 
                                 >> 2U))));
    bufp->chgBit(oldp+18,((1U & ((IData)(vlSelf->a) 
                                 >> 3U))));
    bufp->chgBit(oldp+19,((1U & ((IData)(vlSelf->b) 
                                 >> 3U))));
}

void Vaddr_4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddr_4___024root__trace_cleanup\n"); );
    // Init
    Vaddr_4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaddr_4___024root*>(voidSelf);
    Vaddr_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
