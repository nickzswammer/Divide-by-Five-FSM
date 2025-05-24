// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfsm.h for the primary calling header

#include "Vfsm__pch.h"
#include "Vfsm___024root.h"

VlCoroutine Vfsm___024root___eval_initial__TOP__Vtiming__0(Vfsm___024root* vlSelf);
VlCoroutine Vfsm___024root___eval_initial__TOP__Vtiming__1(Vfsm___024root* vlSelf);

void Vfsm___024root___eval_initial(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vfsm___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfsm___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fsm__DOT__CLK__0 
        = vlSelfRef.tb_fsm__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fsm__DOT__nRST__0 
        = vlSelfRef.tb_fsm__DOT__nRST;
}

VL_INLINE_OPT VlCoroutine Vfsm___024root___eval_initial__TOP__Vtiming__1(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "tb/tb_fsm.sv", 
                                             22);
        vlSelfRef.tb_fsm__DOT__CLK = (1U & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_fsm__DOT__CLK)));
    }
}

void Vfsm___024root___act_comb__TOP__0(Vfsm___024root* vlSelf);

void Vfsm___024root___eval_act(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vfsm___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 16> Vfsm__ConstPool__TABLE_h46e25716_0;

VL_INLINE_OPT void Vfsm___024root___act_comb__TOP__0(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___act_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.tb_fsm__DOT__tb_data) 
                     << 3U) | (IData)(vlSelfRef.tb_fsm__DOT__tb_fsm__DOT__state));
    vlSelfRef.tb_fsm__DOT__tb_fsm__DOT__next = Vfsm__ConstPool__TABLE_h46e25716_0
        [__Vtableidx1];
}

void Vfsm___024root___nba_sequent__TOP__0(Vfsm___024root* vlSelf);

void Vfsm___024root___eval_nba(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfsm___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfsm___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vfsm___024root___nba_sequent__TOP__0(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fsm__DOT__tb_fsm__DOT__state = ((IData)(vlSelfRef.tb_fsm__DOT__nRST)
                                                  ? (IData)(vlSelfRef.tb_fsm__DOT__tb_fsm__DOT__next)
                                                  : 0U);
}

void Vfsm___024root___timing_resume(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hf19e91ee__0.resume(
                                                   "@(posedge tb_fsm.CLK)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfsm___024root___timing_commit(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hf19e91ee__0.commit(
                                                   "@(posedge tb_fsm.CLK)");
    }
}

void Vfsm___024root___eval_triggers__act(Vfsm___024root* vlSelf);

bool Vfsm___024root___eval_phase__act(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfsm___024root___eval_triggers__act(vlSelf);
    Vfsm___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vfsm___024root___timing_resume(vlSelf);
        Vfsm___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfsm___024root___eval_phase__nba(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfsm___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfsm___024root___dump_triggers__nba(Vfsm___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfsm___024root___dump_triggers__act(Vfsm___024root* vlSelf);
#endif  // VL_DEBUG

void Vfsm___024root___eval(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vfsm___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_fsm.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vfsm___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_fsm.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vfsm___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vfsm___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfsm___024root___eval_debug_assertions(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

std::string VL_TO_STRING(const Vfsm_tb_fsm__DOT__TestVector__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{test_number:" + VL_TO_STRING(obj.__PVT__test_number);
        out += ", data_stream:" + VL_TO_STRING(obj.__PVT__data_stream);
        out += ", expected_output:" + VL_TO_STRING(obj.__PVT__expected_output);
        out += "}";
    return out;
}
