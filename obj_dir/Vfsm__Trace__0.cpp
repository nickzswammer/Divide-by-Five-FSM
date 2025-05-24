// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vfsm__Syms.h"


void Vfsm___024root__trace_chg_0_sub_0(Vfsm___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vfsm___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root__trace_chg_0\n"); );
    // Init
    Vfsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsm___024root*>(voidSelf);
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfsm___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfsm___024root__trace_chg_0_sub_0(Vfsm___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_fsm__DOT__nRST));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_fsm__DOT__tb_data));
        bufp->chgIData(oldp+2,(vlSelfRef.tb_fsm__DOT__test_counter),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_fsm__DOT__current_test),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec
                               .__PVT__test_number),32);
        bufp->chgCData(oldp+5,(vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec
                               .__PVT__data_stream),8);
        bufp->chgBit(oldp+6,(vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec
                             .__PVT__expected_output));
        bufp->chgIData(oldp+7,(vlSelfRef.tb_fsm__DOT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+8,(vlSelfRef.tb_fsm__DOT__CLK));
    bufp->chgBit(oldp+9,((0U == (IData)(vlSelfRef.tb_fsm__DOT__tb_fsm__DOT__state))));
    bufp->chgCData(oldp+10,(vlSelfRef.tb_fsm__DOT__tb_fsm__DOT__state),3);
    bufp->chgCData(oldp+11,(vlSelfRef.tb_fsm__DOT__tb_fsm__DOT__next),3);
}

void Vfsm___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root__trace_cleanup\n"); );
    // Init
    Vfsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfsm___024root*>(voidSelf);
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
