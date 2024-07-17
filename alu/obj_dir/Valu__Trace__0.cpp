// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


void Valu___024root__trace_chg_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_chg_top_0\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Valu___024root__trace_chg_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+4,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+5,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+6,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+7,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[7]),3);
        bufp->chgCData(oldp+8,(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+9,(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+10,(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+11,(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__key_list[1]),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+12,(vlSelf->alu__DOT__a_1),4);
        bufp->chgCData(oldp+13,(vlSelf->alu__DOT__b_1),4);
        bufp->chgCData(oldp+14,(vlSelf->alu__DOT__b_sub_1),4);
        bufp->chgBit(oldp+15,(vlSelf->alu__DOT__o_overflow_1));
        bufp->chgBit(oldp+16,(vlSelf->alu__DOT__o_overflow_2));
        bufp->chgBit(oldp+17,(vlSelf->alu__DOT__o_cout_1));
        bufp->chgBit(oldp+18,(vlSelf->alu__DOT__o_cout_2));
        bufp->chgCData(oldp+19,(vlSelf->alu__DOT__o_res_1),4);
        bufp->chgCData(oldp+20,(vlSelf->alu__DOT__o_res_2),4);
        bufp->chgCData(oldp+21,(vlSelf->alu__DOT__o_max),4);
        bufp->chgCData(oldp+22,(vlSelf->alu__DOT__o_and),4);
        bufp->chgCData(oldp+23,(vlSelf->alu__DOT__o_or),4);
        bufp->chgCData(oldp+24,(vlSelf->alu__DOT__o_xor),4);
        bufp->chgCData(oldp+25,(vlSelf->alu__DOT__o_equ),4);
        bufp->chgCData(oldp+26,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[0]),7);
        bufp->chgCData(oldp+27,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[1]),7);
        bufp->chgCData(oldp+28,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[2]),7);
        bufp->chgCData(oldp+29,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[3]),7);
        bufp->chgCData(oldp+30,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[4]),7);
        bufp->chgCData(oldp+31,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[5]),7);
        bufp->chgCData(oldp+32,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[6]),7);
        bufp->chgCData(oldp+33,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[7]),7);
        bufp->chgCData(oldp+34,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+35,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+36,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+37,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+38,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[4]),4);
        bufp->chgCData(oldp+39,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[5]),4);
        bufp->chgCData(oldp+40,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[6]),4);
        bufp->chgCData(oldp+41,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[7]),4);
        bufp->chgCData(oldp+42,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+43,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+44,((2U | (((IData)(vlSelf->alu__DOT__o_cout_1) 
                                        << 4U) | (IData)(vlSelf->alu__DOT__o_cout_2)))),8);
        bufp->chgCData(oldp+45,(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+46,(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgBit(oldp+47,(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+48,(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+49,(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+50,(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+51,((2U | (((IData)(vlSelf->alu__DOT__o_overflow_1) 
                                        << 4U) | (IData)(vlSelf->alu__DOT__o_overflow_2)))),8);
        bufp->chgCData(oldp+52,(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+53,(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgBit(oldp+54,(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+55,(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+56,(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+57,(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+58,(vlSelf->alu__DOT__addr_4_i1__DOT__temp),4);
        bufp->chgCData(oldp+59,(vlSelf->alu__DOT__addr_4_i2__DOT__temp),4);
        bufp->chgCData(oldp+60,(vlSelf->alu__DOT____Vcellinp__seg_i0__i_seg),3);
    }
    bufp->chgCData(oldp+61,(vlSelf->a),4);
    bufp->chgCData(oldp+62,(vlSelf->b),4);
    bufp->chgCData(oldp+63,(vlSelf->i_mod),3);
    bufp->chgBit(oldp+64,(vlSelf->o_overflow));
    bufp->chgBit(oldp+65,(vlSelf->o_cout));
    bufp->chgCData(oldp+66,(vlSelf->o_seg),8);
    bufp->chgCData(oldp+67,(vlSelf->o_res),4);
    bufp->chgCData(oldp+68,(vlSelf->o_minus),8);
    bufp->chgCData(oldp+69,(((8U & ((~ ((IData)(vlSelf->b) 
                                        >> 3U)) << 3U)) 
                             | (7U & (IData)(vlSelf->b)))),4);
    bufp->chgCData(oldp+70,((0xfU & (~ (IData)(vlSelf->a)))),4);
    bufp->chgQData(oldp+71,((0x410300000000ULL | (((QData)((IData)(vlSelf->alu__DOT__o_res_1)) 
                                                   << 0x31U) 
                                                  | (((QData)((IData)(vlSelf->alu__DOT__o_res_2)) 
                                                      << 0x2aU) 
                                                     | (((QData)((IData)(
                                                                         (0xfU 
                                                                          & (~ (IData)(vlSelf->a))))) 
                                                         << 0x23U) 
                                                        | (QData)((IData)(
                                                                          (0x8143070U 
                                                                           | (((IData)(vlSelf->alu__DOT__o_and) 
                                                                               << 0x1cU) 
                                                                              | (((IData)(vlSelf->alu__DOT__o_or) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->alu__DOT__o_xor) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->alu__DOT__o_max) 
                                                                                << 7U) 
                                                                                | (IData)(vlSelf->alu__DOT__o_equ))))))))))))),56);
    bufp->chgBit(oldp+73,((1U & ((IData)(vlSelf->o_res) 
                                 >> 3U))));
}

void Valu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_cleanup\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
