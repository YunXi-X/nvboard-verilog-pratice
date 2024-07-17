// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit = ((IData)(vlSelf->i_mod) 
                                                   == 
                                                   vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list
                                                   [0U]);
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit = ((IData)(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_mod) 
                                                      == 
                                                      vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list
                                                      [1U]));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit = ((IData)(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_mod) 
                                                      == 
                                                      vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list
                                                      [2U]));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit = ((IData)(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_mod) 
                                                      == 
                                                      vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list
                                                      [3U]));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit = ((IData)(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_mod) 
                                                      == 
                                                      vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list
                                                      [4U]));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit = ((IData)(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_mod) 
                                                      == 
                                                      vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list
                                                      [5U]));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit = ((IData)(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_mod) 
                                                      == 
                                                      vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list
                                                      [6U]));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit = ((IData)(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_mod) 
                                                      == 
                                                      vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list
                                                      [7U]));
    vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__hit = ((IData)(vlSelf->i_mod) 
                                                   == 
                                                   vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__key_list
                                                   [0U]);
    vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__hit = ((IData)(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_mod) 
                                                      == 
                                                      vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__key_list
                                                      [1U]));
    vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__hit = ((IData)(vlSelf->i_mod) 
                                                   == 
                                                   vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__key_list
                                                   [0U]);
    vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__hit = ((IData)(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->i_mod) 
                                                      == 
                                                      vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__key_list
                                                      [1U]));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[5U] 
        = (0x20U | (0xfU & (~ (IData)(vlSelf->a))));
    vlSelf->alu__DOT__o_and = ((IData)(vlSelf->a) & (IData)(vlSelf->b));
    vlSelf->alu__DOT__o_or = ((IData)(vlSelf->a) | (IData)(vlSelf->b));
    vlSelf->alu__DOT__o_xor = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[5U] 
        = (0xfU & (~ (IData)(vlSelf->a)));
    if (((IData)(vlSelf->a) == (IData)(vlSelf->b))) {
        vlSelf->alu__DOT__o_equ = 1U;
        vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[0U] = 1U;
    } else {
        vlSelf->alu__DOT__o_equ = 0U;
        vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[0U] = 0U;
    }
    if (((IData)(vlSelf->a) > (IData)(vlSelf->b))) {
        vlSelf->alu__DOT__o_max = vlSelf->a;
        vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[1U] 
            = vlSelf->a;
    } else {
        vlSelf->alu__DOT__o_max = vlSelf->b;
        vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[1U] 
            = vlSelf->b;
    }
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[2U] 
        = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[3U] 
        = ((IData)(vlSelf->a) | (IData)(vlSelf->b));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[4U] 
        = ((IData)(vlSelf->a) & (IData)(vlSelf->b));
    if ((8U & (IData)(vlSelf->b))) {
        vlSelf->alu__DOT__b_1 = (0xfU & ((IData)(1U) 
                                         + ((8U & (IData)(vlSelf->b)) 
                                            | (7U & 
                                               (~ (IData)(vlSelf->b))))));
        vlSelf->alu__DOT__b_sub_1 = (0xfU & ((8U & 
                                              ((~ ((IData)(vlSelf->b) 
                                                   >> 3U)) 
                                               << 3U)) 
                                             | (7U 
                                                & (IData)(vlSelf->b))));
    } else {
        vlSelf->alu__DOT__b_1 = (0xfU & (IData)(vlSelf->b));
        vlSelf->alu__DOT__b_sub_1 = (0xfU & ((IData)(1U) 
                                             + ((8U 
                                                 & ((~ 
                                                     ((IData)(vlSelf->b) 
                                                      >> 3U)) 
                                                    << 3U)) 
                                                | (7U 
                                                   & (~ (IData)(vlSelf->b))))));
    }
    vlSelf->alu__DOT__a_1 = (0xfU & ((8U & (IData)(vlSelf->a))
                                      ? ((IData)(1U) 
                                         + ((8U & (IData)(vlSelf->a)) 
                                            | (7U & 
                                               (~ (IData)(vlSelf->a)))))
                                      : (IData)(vlSelf->a)));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[4U] 
        = (0x30U | (IData)(vlSelf->alu__DOT__o_and));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[3U] 
        = (0x40U | (IData)(vlSelf->alu__DOT__o_or));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[2U] 
        = (0x50U | (IData)(vlSelf->alu__DOT__o_xor));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[1U] 
        = (0x60U | (IData)(vlSelf->alu__DOT__o_max));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[0U] 
        = (0x70U | (IData)(vlSelf->alu__DOT__o_equ));
    vlSelf->alu__DOT__o_cout_1 = (1U & (((IData)(vlSelf->alu__DOT__a_1) 
                                         + (IData)(vlSelf->alu__DOT__b_1)) 
                                        >> 4U));
    vlSelf->alu__DOT__o_cout_2 = (1U & (((IData)(vlSelf->alu__DOT__a_1) 
                                         + (IData)(vlSelf->alu__DOT__b_sub_1)) 
                                        >> 4U));
    vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__data_list[0U] 
        = (1U & (((IData)(vlSelf->alu__DOT__a_1) + (IData)(vlSelf->alu__DOT__b_sub_1)) 
                 >> 4U));
    vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__data_list[1U] 
        = (1U & (((IData)(vlSelf->alu__DOT__a_1) + (IData)(vlSelf->alu__DOT__b_1)) 
                 >> 4U));
    vlSelf->alu__DOT__addr_4_i1__DOT__temp = (0xfU 
                                              & ((IData)(vlSelf->alu__DOT__a_1) 
                                                 + (IData)(vlSelf->alu__DOT__b_1)));
    vlSelf->alu__DOT__addr_4_i2__DOT__temp = (0xfU 
                                              & ((IData)(vlSelf->alu__DOT__a_1) 
                                                 + (IData)(vlSelf->alu__DOT__b_sub_1)));
    vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__pair_list[1U] 
        = vlSelf->alu__DOT__o_cout_1;
    vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__pair_list[0U] 
        = (2U | (IData)(vlSelf->alu__DOT__o_cout_2));
    vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->i_mod) == vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__key_list
            [0U]) & vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->i_mod) == vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__key_list
               [1U]) & vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->o_cout = vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__lut_out;
    if ((8U & (IData)(vlSelf->alu__DOT__addr_4_i1__DOT__temp))) {
        vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[7U] 
            = ((8U & (IData)(vlSelf->alu__DOT__addr_4_i1__DOT__temp)) 
               | (7U & (~ (IData)(vlSelf->alu__DOT__addr_4_i1__DOT__temp))));
        vlSelf->alu__DOT__o_res_1 = ((8U & (IData)(vlSelf->alu__DOT__addr_4_i1__DOT__temp)) 
                                     | (7U & (~ (IData)(vlSelf->alu__DOT__addr_4_i1__DOT__temp))));
    } else {
        vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[7U] 
            = vlSelf->alu__DOT__addr_4_i1__DOT__temp;
        vlSelf->alu__DOT__o_res_1 = vlSelf->alu__DOT__addr_4_i1__DOT__temp;
    }
    if ((8U & (IData)(vlSelf->alu__DOT__addr_4_i2__DOT__temp))) {
        vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[6U] 
            = ((8U & (IData)(vlSelf->alu__DOT__addr_4_i2__DOT__temp)) 
               | (7U & (~ (IData)(vlSelf->alu__DOT__addr_4_i2__DOT__temp))));
        vlSelf->alu__DOT__o_res_2 = ((8U & (IData)(vlSelf->alu__DOT__addr_4_i2__DOT__temp)) 
                                     | (7U & (~ (IData)(vlSelf->alu__DOT__addr_4_i2__DOT__temp))));
    } else {
        vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[6U] 
            = vlSelf->alu__DOT__addr_4_i2__DOT__temp;
        vlSelf->alu__DOT__o_res_2 = vlSelf->alu__DOT__addr_4_i2__DOT__temp;
    }
    vlSelf->alu__DOT__o_overflow_1 = (((1U & ((IData)(vlSelf->alu__DOT__a_1) 
                                              >> 3U)) 
                                       == (1U & ((IData)(vlSelf->alu__DOT__b_1) 
                                                 >> 3U))) 
                                      & ((1U & ((IData)(vlSelf->alu__DOT__o_res_1) 
                                                >> 3U)) 
                                         != (1U & ((IData)(vlSelf->alu__DOT__a_1) 
                                                   >> 3U))));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[7U] 
        = vlSelf->alu__DOT__o_res_1;
    vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__data_list[1U] 
        = (((1U & ((IData)(vlSelf->alu__DOT__a_1) >> 3U)) 
            == (1U & ((IData)(vlSelf->alu__DOT__b_1) 
                      >> 3U))) & ((1U & ((IData)(vlSelf->alu__DOT__o_res_1) 
                                         >> 3U)) != 
                                  (1U & ((IData)(vlSelf->alu__DOT__a_1) 
                                         >> 3U))));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->i_mod) == vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->i_mod) == 
                          vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->i_mod) == 
                          vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->i_mod) == 
                          vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->i_mod) == 
                          vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->i_mod) == 
                          vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->i_mod) == 
                          vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->i_mod) == 
                          vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->o_res = vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out;
    vlSelf->alu__DOT__o_overflow_2 = (((1U & ((IData)(vlSelf->alu__DOT__a_1) 
                                              >> 3U)) 
                                       == (1U & ((IData)(vlSelf->alu__DOT__b_sub_1) 
                                                 >> 3U))) 
                                      & ((1U & ((IData)(vlSelf->alu__DOT__o_res_2) 
                                                >> 3U)) 
                                         != (1U & ((IData)(vlSelf->alu__DOT__a_1) 
                                                   >> 3U))));
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[6U] 
        = (0x10U | (IData)(vlSelf->alu__DOT__o_res_2));
    vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__data_list[0U] 
        = (((1U & ((IData)(vlSelf->alu__DOT__a_1) >> 3U)) 
            == (1U & ((IData)(vlSelf->alu__DOT__b_sub_1) 
                      >> 3U))) & ((1U & ((IData)(vlSelf->alu__DOT__o_res_2) 
                                         >> 3U)) != 
                                  (1U & ((IData)(vlSelf->alu__DOT__a_1) 
                                         >> 3U))));
    vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__pair_list[1U] 
        = vlSelf->alu__DOT__o_overflow_1;
    vlSelf->alu__DOT____Vcellinp__seg_i0__i_seg = (7U 
                                                   & (IData)(vlSelf->o_res));
    vlSelf->o_minus = ((8U & (IData)(vlSelf->o_res))
                        ? 0xfdU : 0xffU);
    vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__pair_list[0U] 
        = (2U | (IData)(vlSelf->alu__DOT__o_overflow_2));
    vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->i_mod) == vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__key_list
            [0U]) & vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->i_mod) == vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__key_list
               [1U]) & vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->o_overflow = vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__lut_out;
}

void Valu___024root___eval_ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Valu___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Valu___024root___eval_act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*7:0*/, 16> Valu__ConstPool__TABLE_h309d4518_0;

VL_INLINE_OPT void Valu___024root___nba_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->alu__DOT____Vcellinp__seg_i0__i_seg) 
                     << 1U) | (1U & ((IData)(vlSelf->o_res) 
                                     >> 3U)));
    vlSelf->o_seg = Valu__ConstPool__TABLE_h309d4518_0
        [__Vtableidx1];
}

void Valu___024root___eval_nba(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Valu___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Valu___024root___eval_triggers__ico(Valu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(Valu___024root* vlSelf);
#endif  // VL_DEBUG
void Valu___024root___eval_triggers__act(Valu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__nba(Valu___024root* vlSelf);
#endif  // VL_DEBUG

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Valu___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/alu.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Valu___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Valu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Valu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/alu.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Valu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/alu.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Valu___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xf0U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->i_mod & 0xf8U))) {
        Verilated::overWidthError("i_mod");}
}
#endif  // VL_DEBUG
