// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfsm.h for the primary calling header

#ifndef VERILATED_VFSM___024ROOT_H_
#define VERILATED_VFSM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "Vfsm___024root.h"


class Vfsm__Syms;
struct Vfsm_tb_fsm__DOT__TestVector__struct__0 {
    IData/*31:0*/ __PVT__test_number;
    CData/*7:0*/ __PVT__data_stream;
    CData/*0:0*/ __PVT__expected_output;

    bool operator==(const Vfsm_tb_fsm__DOT__TestVector__struct__0& rhs) const {
        return __PVT__test_number == rhs.__PVT__test_number
            && __PVT__data_stream == rhs.__PVT__data_stream
            && __PVT__expected_output == rhs.__PVT__expected_output;
    }
    bool operator!=(const Vfsm_tb_fsm__DOT__TestVector__struct__0& rhs) const {
        return !(*this == rhs);
    }
};

class alignas(VL_CACHE_LINE_BYTES) Vfsm___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fsm__DOT__CLK;
    CData/*0:0*/ tb_fsm__DOT__nRST;
    CData/*0:0*/ tb_fsm__DOT__tb_data;
    CData/*2:0*/ tb_fsm__DOT__tb_fsm__DOT__state;
    CData/*2:0*/ tb_fsm__DOT__tb_fsm__DOT__next;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fsm__DOT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fsm__DOT__nRST__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_fsm__DOT__test_counter;
    IData/*31:0*/ tb_fsm__DOT__current_test;
    IData/*31:0*/ tb_fsm__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlQueue<Vfsm_tb_fsm__DOT__TestVector__struct__0> tb_fsm__DOT__tests;
    Vfsm_tb_fsm__DOT__TestVector__struct__0 tb_fsm__DOT__gen_test__Vstatic__vec;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf19e91ee__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfsm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfsm___024root(Vfsm__Syms* symsp, const char* v__name);
    ~Vfsm___024root();
    VL_UNCOPYABLE(Vfsm___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vfsm_tb_fsm__DOT__TestVector__struct__0& obj);

#endif  // guard
