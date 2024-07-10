// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaddr_4__Syms.h"


VL_ATTR_COLD void Vaddr_4___024root__trace_init_sub__TOP__0(Vaddr_4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddr_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddr_4___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4,"a", false,-1, 3,0);
    tracep->declBus(c+5,"b", false,-1, 3,0);
    tracep->declBit(c+6,"cin", false,-1);
    tracep->declBus(c+7,"sum", false,-1, 3,0);
    tracep->declBit(c+8,"cout", false,-1);
    tracep->pushNamePrefix("addr_4 ");
    tracep->declBus(c+4,"a", false,-1, 3,0);
    tracep->declBus(c+5,"b", false,-1, 3,0);
    tracep->declBit(c+6,"cin", false,-1);
    tracep->declBus(c+7,"sum", false,-1, 3,0);
    tracep->declBit(c+8,"cout", false,-1);
    tracep->declBit(c+1,"temp0", false,-1);
    tracep->declBit(c+2,"temp1", false,-1);
    tracep->declBit(c+3,"temp2", false,-1);
    tracep->declBit(c+9,"sum0", false,-1);
    tracep->declBit(c+10,"sum1", false,-1);
    tracep->declBit(c+11,"sum2", false,-1);
    tracep->declBit(c+12,"sum3", false,-1);
    tracep->pushNamePrefix("ins1 ");
    tracep->declBit(c+13,"a", false,-1);
    tracep->declBit(c+14,"b", false,-1);
    tracep->declBit(c+6,"cin", false,-1);
    tracep->declBit(c+9,"sum", false,-1);
    tracep->declBit(c+1,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ins2 ");
    tracep->declBit(c+15,"a", false,-1);
    tracep->declBit(c+16,"b", false,-1);
    tracep->declBit(c+1,"cin", false,-1);
    tracep->declBit(c+10,"sum", false,-1);
    tracep->declBit(c+2,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ins3 ");
    tracep->declBit(c+17,"a", false,-1);
    tracep->declBit(c+18,"b", false,-1);
    tracep->declBit(c+2,"cin", false,-1);
    tracep->declBit(c+11,"sum", false,-1);
    tracep->declBit(c+3,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ins4 ");
    tracep->declBit(c+19,"a", false,-1);
    tracep->declBit(c+20,"b", false,-1);
    tracep->declBit(c+3,"cin", false,-1);
    tracep->declBit(c+12,"sum", false,-1);
    tracep->declBit(c+8,"cout", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vaddr_4___024root__trace_init_top(Vaddr_4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddr_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddr_4___024root__trace_init_top\n"); );
    // Body
    Vaddr_4___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vaddr_4___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaddr_4___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaddr_4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vaddr_4___024root__trace_register(Vaddr_4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddr_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddr_4___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vaddr_4___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vaddr_4___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vaddr_4___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vaddr_4___024root__trace_full_sub_0(Vaddr_4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vaddr_4___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddr_4___024root__trace_full_top_0\n"); );
    // Init
    Vaddr_4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaddr_4___024root*>(voidSelf);
    Vaddr_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vaddr_4___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vaddr_4___024root__trace_full_sub_0(Vaddr_4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddr_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddr_4___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((1U & ((IData)(vlSelf->__VdfgTmp_ha9918942__0) 
                                 >> 1U))));
    bufp->fullBit(oldp+2,((1U & ((IData)(vlSelf->__VdfgTmp_h1b116cf0__0) 
                                 >> 1U))));
    bufp->fullBit(oldp+3,((1U & ((IData)(vlSelf->__VdfgTmp_hef5a094a__0) 
                                 >> 1U))));
    bufp->fullCData(oldp+4,(vlSelf->a),4);
    bufp->fullCData(oldp+5,(vlSelf->b),4);
    bufp->fullBit(oldp+6,(vlSelf->cin));
    bufp->fullCData(oldp+7,(vlSelf->sum),4);
    bufp->fullBit(oldp+8,(vlSelf->cout));
    bufp->fullBit(oldp+9,((1U & ((IData)(vlSelf->a) 
                                 + ((IData)(vlSelf->b) 
                                    + (IData)(vlSelf->cin))))));
    bufp->fullBit(oldp+10,((1U & (((IData)(vlSelf->a) 
                                   >> 1U) + (((IData)(vlSelf->b) 
                                              >> 1U) 
                                             + ((IData)(vlSelf->__VdfgTmp_ha9918942__0) 
                                                >> 1U))))));
    bufp->fullBit(oldp+11,((1U & (((IData)(vlSelf->a) 
                                   >> 2U) + (((IData)(vlSelf->b) 
                                              >> 2U) 
                                             + ((IData)(vlSelf->__VdfgTmp_h1b116cf0__0) 
                                                >> 1U))))));
    bufp->fullBit(oldp+12,((1U & (((IData)(vlSelf->a) 
                                   >> 3U) + (((IData)(vlSelf->b) 
                                              >> 3U) 
                                             + ((IData)(vlSelf->__VdfgTmp_hef5a094a__0) 
                                                >> 1U))))));
    bufp->fullBit(oldp+13,((1U & (IData)(vlSelf->a))));
    bufp->fullBit(oldp+14,((1U & (IData)(vlSelf->b))));
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelf->a) 
                                  >> 1U))));
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->b) 
                                  >> 1U))));
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelf->a) 
                                  >> 2U))));
    bufp->fullBit(oldp+18,((1U & ((IData)(vlSelf->b) 
                                  >> 2U))));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelf->a) 
                                  >> 3U))));
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelf->b) 
                                  >> 3U))));
}
