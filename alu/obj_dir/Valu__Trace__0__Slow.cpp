// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


VL_ATTR_COLD void Valu___024root__trace_init_sub__TOP__0(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+62,"a", false,-1, 3,0);
    tracep->declBus(c+63,"b", false,-1, 3,0);
    tracep->declBus(c+64,"i_mod", false,-1, 2,0);
    tracep->declBit(c+65,"o_overflow", false,-1);
    tracep->declBit(c+66,"o_cout", false,-1);
    tracep->declBus(c+67,"o_seg", false,-1, 7,0);
    tracep->declBus(c+68,"o_res", false,-1, 3,0);
    tracep->declBus(c+69,"o_minus", false,-1, 7,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+62,"a", false,-1, 3,0);
    tracep->declBus(c+63,"b", false,-1, 3,0);
    tracep->declBus(c+64,"i_mod", false,-1, 2,0);
    tracep->declBit(c+65,"o_overflow", false,-1);
    tracep->declBit(c+66,"o_cout", false,-1);
    tracep->declBus(c+67,"o_seg", false,-1, 7,0);
    tracep->declBus(c+68,"o_res", false,-1, 3,0);
    tracep->declBus(c+69,"o_minus", false,-1, 7,0);
    tracep->declBus(c+13,"a_1", false,-1, 3,0);
    tracep->declBus(c+14,"b_1", false,-1, 3,0);
    tracep->declBus(c+70,"b_sub", false,-1, 3,0);
    tracep->declBus(c+15,"b_sub_1", false,-1, 3,0);
    tracep->declBit(c+16,"o_overflow_1", false,-1);
    tracep->declBit(c+17,"o_overflow_2", false,-1);
    tracep->declBit(c+18,"o_cout_1", false,-1);
    tracep->declBit(c+19,"o_cout_2", false,-1);
    tracep->declBus(c+20,"o_res_1", false,-1, 3,0);
    tracep->declBus(c+21,"o_res_2", false,-1, 3,0);
    tracep->declBus(c+22,"o_max", false,-1, 3,0);
    tracep->declBus(c+23,"o_and", false,-1, 3,0);
    tracep->declBus(c+24,"o_or", false,-1, 3,0);
    tracep->declBus(c+71,"o_not", false,-1, 3,0);
    tracep->declBus(c+25,"o_xor", false,-1, 3,0);
    tracep->declBus(c+26,"o_equ", false,-1, 3,0);
    tracep->pushNamePrefix("Mux_i0 ");
    tracep->declBus(c+75,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+76,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+77,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+68,"out", false,-1, 3,0);
    tracep->declBus(c+64,"key", false,-1, 2,0);
    tracep->declQuad(c+72,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+75,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+76,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+77,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+78,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+68,"out", false,-1, 3,0);
    tracep->declBus(c+64,"key", false,-1, 2,0);
    tracep->declBus(c+79,"default_out", false,-1, 3,0);
    tracep->declQuad(c+72,"lut", false,-1, 55,0);
    tracep->declBus(c+80,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+27+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+35+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+43,"lut_out", false,-1, 3,0);
    tracep->declBit(c+44,"hit", false,-1);
    tracep->declBus(c+81,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("Mux_i1 ");
    tracep->declBus(c+82,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+76,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+83,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+66,"out", false,-1, 0,0);
    tracep->declBus(c+64,"key", false,-1, 2,0);
    tracep->declBus(c+45,"lut", false,-1, 7,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+82,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+76,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+83,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+78,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+66,"out", false,-1, 0,0);
    tracep->declBus(c+64,"key", false,-1, 2,0);
    tracep->declBus(c+84,"default_out", false,-1, 0,0);
    tracep->declBus(c+45,"lut", false,-1, 7,0);
    tracep->declBus(c+77,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+46+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+48+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+50,"lut_out", false,-1, 0,0);
    tracep->declBit(c+51,"hit", false,-1);
    tracep->declBus(c+85,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("Mux_i2 ");
    tracep->declBus(c+82,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+76,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+83,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+65,"out", false,-1, 0,0);
    tracep->declBus(c+64,"key", false,-1, 2,0);
    tracep->declBus(c+52,"lut", false,-1, 7,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+82,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+76,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+83,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+78,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+65,"out", false,-1, 0,0);
    tracep->declBus(c+64,"key", false,-1, 2,0);
    tracep->declBus(c+84,"default_out", false,-1, 0,0);
    tracep->declBus(c+52,"lut", false,-1, 7,0);
    tracep->declBus(c+77,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+53+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+11+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+55+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+57,"lut_out", false,-1, 0,0);
    tracep->declBit(c+58,"hit", false,-1);
    tracep->declBus(c+85,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("addr_4_i1 ");
    tracep->declBus(c+13,"a", false,-1, 3,0);
    tracep->declBus(c+14,"b", false,-1, 3,0);
    tracep->declBus(c+20,"sum", false,-1, 3,0);
    tracep->declBit(c+18,"cout", false,-1);
    tracep->declBit(c+16,"overflow", false,-1);
    tracep->declBus(c+59,"temp", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("addr_4_i2 ");
    tracep->declBus(c+13,"a", false,-1, 3,0);
    tracep->declBus(c+15,"b", false,-1, 3,0);
    tracep->declBus(c+21,"sum", false,-1, 3,0);
    tracep->declBit(c+19,"cout", false,-1);
    tracep->declBit(c+17,"overflow", false,-1);
    tracep->declBus(c+60,"temp", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("and_i0 ");
    tracep->declBus(c+62,"a", false,-1, 3,0);
    tracep->declBus(c+63,"b", false,-1, 3,0);
    tracep->declBus(c+23,"out", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("eq_i0 ");
    tracep->declBus(c+62,"a", false,-1, 3,0);
    tracep->declBus(c+63,"b", false,-1, 3,0);
    tracep->declBus(c+26,"out", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("max_i0 ");
    tracep->declBus(c+62,"a", false,-1, 3,0);
    tracep->declBus(c+63,"b", false,-1, 3,0);
    tracep->declBus(c+22,"out", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("or_i0 ");
    tracep->declBus(c+62,"a", false,-1, 3,0);
    tracep->declBus(c+63,"b", false,-1, 3,0);
    tracep->declBus(c+24,"out", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg_i0 ");
    tracep->declBit(c+74,"i_minus", false,-1);
    tracep->declBus(c+61,"i_seg", false,-1, 2,0);
    tracep->declBus(c+67,"o_seg", false,-1, 7,0);
    tracep->declBus(c+86,"num0", false,-1, 7,0);
    tracep->declBus(c+87,"num1", false,-1, 7,0);
    tracep->declBus(c+88,"num2", false,-1, 7,0);
    tracep->declBus(c+89,"num3", false,-1, 7,0);
    tracep->declBus(c+90,"num4", false,-1, 7,0);
    tracep->declBus(c+91,"num5", false,-1, 7,0);
    tracep->declBus(c+92,"num6", false,-1, 7,0);
    tracep->declBus(c+93,"num7", false,-1, 7,0);
    tracep->declBus(c+94,"num8", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("xor_i0 ");
    tracep->declBus(c+62,"a", false,-1, 3,0);
    tracep->declBus(c+63,"b", false,-1, 3,0);
    tracep->declBus(c+25,"out", false,-1, 3,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Valu___024root__trace_init_top(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_init_top\n"); );
    // Body
    Valu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu___024root__trace_register(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Valu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Valu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Valu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu___024root__trace_full_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_full_top_0\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu___024root__trace_full_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+5,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+6,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+7,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+8,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+9,(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+10,(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+11,(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+12,(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+13,(vlSelf->alu__DOT__a_1),4);
    bufp->fullCData(oldp+14,(vlSelf->alu__DOT__b_1),4);
    bufp->fullCData(oldp+15,(vlSelf->alu__DOT__b_sub_1),4);
    bufp->fullBit(oldp+16,(vlSelf->alu__DOT__o_overflow_1));
    bufp->fullBit(oldp+17,(vlSelf->alu__DOT__o_overflow_2));
    bufp->fullBit(oldp+18,(vlSelf->alu__DOT__o_cout_1));
    bufp->fullBit(oldp+19,(vlSelf->alu__DOT__o_cout_2));
    bufp->fullCData(oldp+20,(vlSelf->alu__DOT__o_res_1),4);
    bufp->fullCData(oldp+21,(vlSelf->alu__DOT__o_res_2),4);
    bufp->fullCData(oldp+22,(vlSelf->alu__DOT__o_max),4);
    bufp->fullCData(oldp+23,(vlSelf->alu__DOT__o_and),4);
    bufp->fullCData(oldp+24,(vlSelf->alu__DOT__o_or),4);
    bufp->fullCData(oldp+25,(vlSelf->alu__DOT__o_xor),4);
    bufp->fullCData(oldp+26,(vlSelf->alu__DOT__o_equ),4);
    bufp->fullCData(oldp+27,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+28,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+29,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+30,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+31,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+32,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+33,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[6]),7);
    bufp->fullCData(oldp+34,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[7]),7);
    bufp->fullCData(oldp+35,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+36,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+37,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+38,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+39,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+40,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+41,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+42,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+43,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+44,(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+45,((2U | (((IData)(vlSelf->alu__DOT__o_cout_1) 
                                     << 4U) | (IData)(vlSelf->alu__DOT__o_cout_2)))),8);
    bufp->fullCData(oldp+46,(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+47,(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullBit(oldp+48,(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+49,(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+50,(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+51,(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+52,((2U | (((IData)(vlSelf->alu__DOT__o_overflow_1) 
                                     << 4U) | (IData)(vlSelf->alu__DOT__o_overflow_2)))),8);
    bufp->fullCData(oldp+53,(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+54,(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullBit(oldp+55,(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+56,(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+57,(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+58,(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+59,(vlSelf->alu__DOT__addr_4_i1__DOT__temp),4);
    bufp->fullCData(oldp+60,(vlSelf->alu__DOT__addr_4_i2__DOT__temp),4);
    bufp->fullCData(oldp+61,(vlSelf->alu__DOT____Vcellinp__seg_i0__i_seg),3);
    bufp->fullCData(oldp+62,(vlSelf->a),4);
    bufp->fullCData(oldp+63,(vlSelf->b),4);
    bufp->fullCData(oldp+64,(vlSelf->i_mod),3);
    bufp->fullBit(oldp+65,(vlSelf->o_overflow));
    bufp->fullBit(oldp+66,(vlSelf->o_cout));
    bufp->fullCData(oldp+67,(vlSelf->o_seg),8);
    bufp->fullCData(oldp+68,(vlSelf->o_res),4);
    bufp->fullCData(oldp+69,(vlSelf->o_minus),8);
    bufp->fullCData(oldp+70,(((8U & ((~ ((IData)(vlSelf->b) 
                                         >> 3U)) << 3U)) 
                              | (7U & (IData)(vlSelf->b)))),4);
    bufp->fullCData(oldp+71,((0xfU & (~ (IData)(vlSelf->a)))),4);
    bufp->fullQData(oldp+72,((0x410300000000ULL | (
                                                   ((QData)((IData)(vlSelf->alu__DOT__o_res_1)) 
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
    bufp->fullBit(oldp+74,((1U & ((IData)(vlSelf->o_res) 
                                  >> 3U))));
    bufp->fullIData(oldp+75,(8U),32);
    bufp->fullIData(oldp+76,(3U),32);
    bufp->fullIData(oldp+77,(4U),32);
    bufp->fullIData(oldp+78,(0U),32);
    bufp->fullCData(oldp+79,(0U),4);
    bufp->fullIData(oldp+80,(7U),32);
    bufp->fullIData(oldp+81,(8U),32);
    bufp->fullIData(oldp+82,(2U),32);
    bufp->fullIData(oldp+83,(1U),32);
    bufp->fullBit(oldp+84,(0U));
    bufp->fullIData(oldp+85,(2U),32);
    bufp->fullCData(oldp+86,(0xfdU),8);
    bufp->fullCData(oldp+87,(0x60U),8);
    bufp->fullCData(oldp+88,(0xdaU),8);
    bufp->fullCData(oldp+89,(0xf2U),8);
    bufp->fullCData(oldp+90,(0x66U),8);
    bufp->fullCData(oldp+91,(0xb6U),8);
    bufp->fullCData(oldp+92,(0xbeU),8);
    bufp->fullCData(oldp+93,(0xe0U),8);
    bufp->fullCData(oldp+94,(0xffU),8);
}
