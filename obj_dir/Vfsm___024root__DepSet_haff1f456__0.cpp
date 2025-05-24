// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfsm.h for the primary calling header

#include "Vfsm__pch.h"
#include "Vfsm__Syms.h"
#include "Vfsm___024root.h"

VL_INLINE_OPT VlCoroutine Vfsm___024root___eval_initial__TOP__Vtiming__0(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    Vfsm_tb_fsm__DOT__TestVector__struct__0 __Vfunc_tb_fsm__DOT__gen_test__0__Vfuncout;
    __Vfunc_tb_fsm__DOT__gen_test__0__Vfuncout.__PVT__test_number = 0;
    __Vfunc_tb_fsm__DOT__gen_test__0__Vfuncout.__PVT__data_stream = 0;
    __Vfunc_tb_fsm__DOT__gen_test__0__Vfuncout.__PVT__expected_output = 0;
    Vfsm_tb_fsm__DOT__TestVector__struct__0 __Vfunc_tb_fsm__DOT__gen_test__1__Vfuncout;
    __Vfunc_tb_fsm__DOT__gen_test__1__Vfuncout.__PVT__test_number = 0;
    __Vfunc_tb_fsm__DOT__gen_test__1__Vfuncout.__PVT__data_stream = 0;
    __Vfunc_tb_fsm__DOT__gen_test__1__Vfuncout.__PVT__expected_output = 0;
    Vfsm_tb_fsm__DOT__TestVector__struct__0 __Vfunc_tb_fsm__DOT__gen_test__2__Vfuncout;
    __Vfunc_tb_fsm__DOT__gen_test__2__Vfuncout.__PVT__test_number = 0;
    __Vfunc_tb_fsm__DOT__gen_test__2__Vfuncout.__PVT__data_stream = 0;
    __Vfunc_tb_fsm__DOT__gen_test__2__Vfuncout.__PVT__expected_output = 0;
    Vfsm_tb_fsm__DOT__TestVector__struct__0 __Vfunc_tb_fsm__DOT__gen_test__3__Vfuncout;
    __Vfunc_tb_fsm__DOT__gen_test__3__Vfuncout.__PVT__test_number = 0;
    __Vfunc_tb_fsm__DOT__gen_test__3__Vfuncout.__PVT__data_stream = 0;
    __Vfunc_tb_fsm__DOT__gen_test__3__Vfuncout.__PVT__expected_output = 0;
    Vfsm_tb_fsm__DOT__TestVector__struct__0 __Vfunc_tb_fsm__DOT__gen_test__4__Vfuncout;
    __Vfunc_tb_fsm__DOT__gen_test__4__Vfuncout.__PVT__test_number = 0;
    __Vfunc_tb_fsm__DOT__gen_test__4__Vfuncout.__PVT__data_stream = 0;
    __Vfunc_tb_fsm__DOT__gen_test__4__Vfuncout.__PVT__expected_output = 0;
    Vfsm_tb_fsm__DOT__TestVector__struct__0 __Vtask_tb_fsm__DOT__send_stream__6__vec;
    __Vtask_tb_fsm__DOT__send_stream__6__vec.__PVT__test_number = 0;
    __Vtask_tb_fsm__DOT__send_stream__6__vec.__PVT__data_stream = 0;
    __Vtask_tb_fsm__DOT__send_stream__6__vec.__PVT__expected_output = 0;
    CData/*0:0*/ __Vtask_tb_fsm__DOT__send_bit__8__data_bit;
    __Vtask_tb_fsm__DOT__send_bit__8__data_bit = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_fsm__DOT__tb_data = 0U;
    vlSelfRef.tb_fsm__DOT__current_test = 0U;
    VL_TIMEFORMAT_IINI(0xfffffff7U, 2U, std::string{" ns"}, 0x14U, vlSymsp->_vm_contextp__);
    vlSelfRef.tb_fsm__DOT__tests.renew(5U);
    vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__test_number = 0U;
    vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__data_stream = 5U;
    vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__expected_output = 1U;
    __Vfunc_tb_fsm__DOT__gen_test__0__Vfuncout = vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec;
    vlSelfRef.tb_fsm__DOT__tests.at(0U) = __Vfunc_tb_fsm__DOT__gen_test__0__Vfuncout;
    vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__test_number = 1U;
    vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__data_stream = 1U;
    vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__expected_output = 0U;
    __Vfunc_tb_fsm__DOT__gen_test__1__Vfuncout = vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec;
    vlSelfRef.tb_fsm__DOT__tests.at(1U) = __Vfunc_tb_fsm__DOT__gen_test__1__Vfuncout;
    vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__test_number = 2U;
    vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__data_stream = 0xffU;
    vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__expected_output = 1U;
    __Vfunc_tb_fsm__DOT__gen_test__2__Vfuncout = vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec;
    vlSelfRef.tb_fsm__DOT__tests.at(2U) = __Vfunc_tb_fsm__DOT__gen_test__2__Vfuncout;
    vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__test_number = 3U;
    vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__data_stream = 0U;
    vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__expected_output = 1U;
    __Vfunc_tb_fsm__DOT__gen_test__3__Vfuncout = vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec;
    vlSelfRef.tb_fsm__DOT__tests.at(3U) = __Vfunc_tb_fsm__DOT__gen_test__3__Vfuncout;
    vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__test_number = 4U;
    vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__data_stream = 0x28U;
    vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec.__PVT__expected_output = 1U;
    vlSelfRef.tb_fsm__DOT__test_counter = 5U;
    __Vfunc_tb_fsm__DOT__gen_test__4__Vfuncout = vlSelfRef.tb_fsm__DOT__gen_test__Vstatic__vec;
    vlSelfRef.tb_fsm__DOT__tests.at(4U) = __Vfunc_tb_fsm__DOT__gen_test__4__Vfuncout;
    vlSelfRef.tb_fsm__DOT__nRST = 0U;
    co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fsm.CLK)", 
                                                         "tb/tb_fsm.sv", 
                                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fsm.CLK)", 
                                                         "tb/tb_fsm.sv", 
                                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fsm.CLK)", 
                                                         "tb/tb_fsm.sv", 
                                                         48);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_fsm__DOT__nRST = 1U;
    vlSelfRef.tb_fsm__DOT__tb_data = 0U;
    co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fsm.CLK)", 
                                                         "tb/tb_fsm.sv", 
                                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fsm.sv", 
                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_fsm__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.tb_fsm__DOT__unnamedblk2__DOT__i)) {
        __Vtask_tb_fsm__DOT__send_stream__6__vec = vlSelfRef.tb_fsm__DOT__tests.at(vlSelfRef.tb_fsm__DOT__unnamedblk2__DOT__i);
        vlSelfRef.tb_fsm__DOT__current_test = __Vtask_tb_fsm__DOT__send_stream__6__vec
            .__PVT__test_number;
        vlSelfRef.tb_fsm__DOT__nRST = 0U;
        co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fsm.CLK)", 
                                                             "tb/tb_fsm.sv", 
                                                             46);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fsm.CLK)", 
                                                             "tb/tb_fsm.sv", 
                                                             46);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fsm.CLK)", 
                                                             "tb/tb_fsm.sv", 
                                                             48);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_fsm__DOT__nRST = 1U;
        vlSelfRef.tb_fsm__DOT__tb_data = 0U;
        co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fsm.CLK)", 
                                                             "tb/tb_fsm.sv", 
                                                             52);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_fsm.sv", 
                                             53);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fsm__DOT__send_bit__8__data_bit 
            = (1U & (__Vtask_tb_fsm__DOT__send_stream__6__vec
                     .__PVT__data_stream >> 7U));
        vlSelfRef.tb_fsm__DOT__tb_data = __Vtask_tb_fsm__DOT__send_bit__8__data_bit;
        co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fsm.CLK)", 
                                                             "tb/tb_fsm.sv", 
                                                             64);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_fsm.sv", 
                                             65);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fsm__DOT__send_bit__8__data_bit 
            = (1U & (__Vtask_tb_fsm__DOT__send_stream__6__vec
                     .__PVT__data_stream >> 6U));
        vlSelfRef.tb_fsm__DOT__tb_data = __Vtask_tb_fsm__DOT__send_bit__8__data_bit;
        co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fsm.CLK)", 
                                                             "tb/tb_fsm.sv", 
                                                             64);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_fsm.sv", 
                                             65);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fsm__DOT__send_bit__8__data_bit 
            = (1U & (__Vtask_tb_fsm__DOT__send_stream__6__vec
                     .__PVT__data_stream >> 5U));
        vlSelfRef.tb_fsm__DOT__tb_data = __Vtask_tb_fsm__DOT__send_bit__8__data_bit;
        co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fsm.CLK)", 
                                                             "tb/tb_fsm.sv", 
                                                             64);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_fsm.sv", 
                                             65);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fsm__DOT__send_bit__8__data_bit 
            = (1U & (__Vtask_tb_fsm__DOT__send_stream__6__vec
                     .__PVT__data_stream >> 4U));
        vlSelfRef.tb_fsm__DOT__tb_data = __Vtask_tb_fsm__DOT__send_bit__8__data_bit;
        co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fsm.CLK)", 
                                                             "tb/tb_fsm.sv", 
                                                             64);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_fsm.sv", 
                                             65);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fsm__DOT__send_bit__8__data_bit 
            = (1U & (__Vtask_tb_fsm__DOT__send_stream__6__vec
                     .__PVT__data_stream >> 3U));
        vlSelfRef.tb_fsm__DOT__tb_data = __Vtask_tb_fsm__DOT__send_bit__8__data_bit;
        co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fsm.CLK)", 
                                                             "tb/tb_fsm.sv", 
                                                             64);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_fsm.sv", 
                                             65);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fsm__DOT__send_bit__8__data_bit 
            = (1U & (__Vtask_tb_fsm__DOT__send_stream__6__vec
                     .__PVT__data_stream >> 2U));
        vlSelfRef.tb_fsm__DOT__tb_data = __Vtask_tb_fsm__DOT__send_bit__8__data_bit;
        co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fsm.CLK)", 
                                                             "tb/tb_fsm.sv", 
                                                             64);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_fsm.sv", 
                                             65);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fsm__DOT__send_bit__8__data_bit 
            = (1U & (__Vtask_tb_fsm__DOT__send_stream__6__vec
                     .__PVT__data_stream >> 1U));
        vlSelfRef.tb_fsm__DOT__tb_data = __Vtask_tb_fsm__DOT__send_bit__8__data_bit;
        co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fsm.CLK)", 
                                                             "tb/tb_fsm.sv", 
                                                             64);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_fsm.sv", 
                                             65);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fsm__DOT__send_bit__8__data_bit 
            = (1U & __Vtask_tb_fsm__DOT__send_stream__6__vec
               .__PVT__data_stream);
        vlSelfRef.tb_fsm__DOT__tb_data = __Vtask_tb_fsm__DOT__send_bit__8__data_bit;
        co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fsm.CLK)", 
                                                             "tb/tb_fsm.sv", 
                                                             64);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_fsm.sv", 
                                             65);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_fsm.sv", 
                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((0U == (IData)(vlSelfRef.tb_fsm__DOT__tb_fsm__DOT__state)) 
             != __Vtask_tb_fsm__DOT__send_stream__6__vec
             .__PVT__expected_output)) {
            VL_WRITEF_NX("Time %t: [FAILED] Test %11d failed on input %3#; Expected %b, got %b\n\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         32,__Vtask_tb_fsm__DOT__send_stream__6__vec
                         .__PVT__test_number,8,__Vtask_tb_fsm__DOT__send_stream__6__vec
                         .__PVT__data_stream,1,__Vtask_tb_fsm__DOT__send_stream__6__vec
                         .__PVT__expected_output,1,
                         (0U == (IData)(vlSelfRef.tb_fsm__DOT__tb_fsm__DOT__state)));
        } else {
            VL_WRITEF_NX("Time %t: [PASSED] Test %11d passed.\n\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         32,__Vtask_tb_fsm__DOT__send_stream__6__vec
                         .__PVT__test_number);
        }
        co_await vlSelfRef.__VdlySched.delay(0x14ULL, 
                                             nullptr, 
                                             "tb/tb_fsm.sv", 
                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_fsm__DOT__nRST = 0U;
        co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fsm.CLK)", 
                                                             "tb/tb_fsm.sv", 
                                                             46);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fsm.CLK)", 
                                                             "tb/tb_fsm.sv", 
                                                             46);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fsm.CLK)", 
                                                             "tb/tb_fsm.sv", 
                                                             48);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_fsm__DOT__nRST = 1U;
        vlSelfRef.tb_fsm__DOT__tb_data = 0U;
        co_await vlSelfRef.__VtrigSched_hf19e91ee__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fsm.CLK)", 
                                                             "tb/tb_fsm.sv", 
                                                             52);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_fsm.sv", 
                                             53);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_fsm__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_fsm__DOT__unnamedblk2__DOT__i);
    }
    VL_FINISH_MT("tb/tb_fsm.sv", 161, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfsm___024root___dump_triggers__act(Vfsm___024root* vlSelf);
#endif  // VL_DEBUG

void Vfsm___024root___eval_triggers__act(Vfsm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (((IData)(vlSelfRef.tb_fsm__DOT__CLK) 
                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fsm__DOT__CLK__0))) 
                                       | ((~ (IData)(vlSelfRef.tb_fsm__DOT__nRST)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fsm__DOT__nRST__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_fsm__DOT__CLK) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fsm__DOT__CLK__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fsm__DOT__CLK__0 
        = vlSelfRef.tb_fsm__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fsm__DOT__nRST__0 
        = vlSelfRef.tb_fsm__DOT__nRST;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfsm___024root___dump_triggers__act(vlSelf);
    }
#endif
}
