// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu___024root.h"

VL_ATTR_COLD void Valu___024root___eval_static(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Valu___024root___eval_initial__TOP(Valu___024root* vlSelf);

VL_ATTR_COLD void Valu___024root___eval_initial(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_initial\n"); );
    // Body
    Valu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__alu__DOT____Vcellinp__seg_i0__i_seg 
        = vlSelf->alu__DOT____Vcellinp__seg_i0__i_seg;
}

VL_ATTR_COLD void Valu___024root___eval_initial__TOP(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[5U] = 2U;
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[6U] = 1U;
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[7U] = 0U;
    vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__key_list[1U] = 0U;
}

VL_ATTR_COLD void Valu___024root___eval_final(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_final\n"); );
}

VL_ATTR_COLD void Valu___024root___eval_triggers__stl(Valu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__stl(Valu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Valu___024root___eval_stl(Valu___024root* vlSelf);

VL_ATTR_COLD void Valu___024root___eval_settle(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Valu___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/alu.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Valu___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__stl(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu___024root___stl_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___stl_sequent__TOP__0\n"); );
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
    vlSelf->o_minus = ((8U & (IData)(vlSelf->o_res))
                        ? 0xfdU : 0xffU);
    vlSelf->alu__DOT____Vcellinp__seg_i0__i_seg = (7U 
                                                   & (IData)(vlSelf->o_res));
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

VL_ATTR_COLD void Valu___024root___eval_stl(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Valu___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] alu.__Vcellinp__seg_i0__i_seg)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__nba(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] alu.__Vcellinp__seg_i0__i_seg)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu___024root___ctor_var_reset(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(4);
    vlSelf->b = VL_RAND_RESET_I(4);
    vlSelf->i_mod = VL_RAND_RESET_I(3);
    vlSelf->o_overflow = VL_RAND_RESET_I(1);
    vlSelf->o_cout = VL_RAND_RESET_I(1);
    vlSelf->o_seg = VL_RAND_RESET_I(8);
    vlSelf->o_res = VL_RAND_RESET_I(4);
    vlSelf->o_minus = VL_RAND_RESET_I(8);
    vlSelf->alu__DOT__a_1 = VL_RAND_RESET_I(4);
    vlSelf->alu__DOT__b_1 = VL_RAND_RESET_I(4);
    vlSelf->alu__DOT__b_sub_1 = VL_RAND_RESET_I(4);
    vlSelf->alu__DOT__o_overflow_1 = VL_RAND_RESET_I(1);
    vlSelf->alu__DOT__o_overflow_2 = VL_RAND_RESET_I(1);
    vlSelf->alu__DOT__o_cout_1 = VL_RAND_RESET_I(1);
    vlSelf->alu__DOT__o_cout_2 = VL_RAND_RESET_I(1);
    vlSelf->alu__DOT__o_res_1 = VL_RAND_RESET_I(4);
    vlSelf->alu__DOT__o_res_2 = VL_RAND_RESET_I(4);
    vlSelf->alu__DOT__o_max = VL_RAND_RESET_I(4);
    vlSelf->alu__DOT__o_and = VL_RAND_RESET_I(4);
    vlSelf->alu__DOT__o_or = VL_RAND_RESET_I(4);
    vlSelf->alu__DOT__o_xor = VL_RAND_RESET_I(4);
    vlSelf->alu__DOT__o_equ = VL_RAND_RESET_I(4);
    vlSelf->alu__DOT____Vcellinp__seg_i0__i_seg = VL_RAND_RESET_I(3);
    vlSelf->alu__DOT__addr_4_i1__DOT__temp = VL_RAND_RESET_I(4);
    vlSelf->alu__DOT__addr_4_i2__DOT__temp = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(4);
    vlSelf->alu__DOT__Mux_i0__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->alu__DOT__Mux_i1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->alu__DOT__Mux_i2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__alu__DOT____Vcellinp__seg_i0__i_seg = VL_RAND_RESET_I(3);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
