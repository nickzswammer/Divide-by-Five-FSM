// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfsm.h for the primary calling header

#include "Vfsm__pch.h"
#include "Vfsm___024root.h"

VL_ATTR_COLD void Vfsm___024root___eval_static__TOP(Vfsm___024root* vlSelf);

VL_ATTR_COLD void Vfsm___024root___eval_static(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfsm___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vfsm___024root___eval_static__TOP(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fsm__DOT__CLK = 0U;
}

VL_ATTR_COLD void Vfsm___024root___eval_final(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfsm___024root___dump_triggers__stl(Vfsm___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfsm___024root___eval_phase__stl(Vfsm___024root* vlSelf);

VL_ATTR_COLD void Vfsm___024root___eval_settle(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vfsm___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_fsm.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfsm___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfsm___024root___dump_triggers__stl(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vfsm___024root___act_comb__TOP__0(Vfsm___024root* vlSelf);

VL_ATTR_COLD void Vfsm___024root___eval_stl(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vfsm___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vfsm___024root___eval_triggers__stl(Vfsm___024root* vlSelf);

VL_ATTR_COLD bool Vfsm___024root___eval_phase__stl(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfsm___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vfsm___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfsm___024root___dump_triggers__act(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_fsm.CLK or negedge tb_fsm.nRST)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_fsm.CLK)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfsm___024root___dump_triggers__nba(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_fsm.CLK or negedge tb_fsm.nRST)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_fsm.CLK)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfsm___024root___ctor_var_reset(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_fsm__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->tb_fsm__DOT__nRST = VL_RAND_RESET_I(1);
    vlSelf->tb_fsm__DOT__tb_data = VL_RAND_RESET_I(1);
    vlSelf->tb_fsm__DOT__test_counter = 0;
    vlSelf->tb_fsm__DOT__current_test = 0;
    vlSelf->tb_fsm__DOT__tests.atDefault().__PVT__test_number = 0;
    vlSelf->tb_fsm__DOT__tests.atDefault().__PVT__data_stream = VL_RAND_RESET_I(8);
    vlSelf->tb_fsm__DOT__tests.atDefault().__PVT__expected_output = VL_RAND_RESET_I(1);
    vlSelf->tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__test_number = 0;
    vlSelf->tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__data_stream = VL_RAND_RESET_I(8);
    vlSelf->tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__expected_output = VL_RAND_RESET_I(1);
    vlSelf->tb_fsm__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_fsm__DOT__tb_fsm__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_fsm__DOT__tb_fsm__DOT__next = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_fsm__DOT__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_fsm__DOT__nRST__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
