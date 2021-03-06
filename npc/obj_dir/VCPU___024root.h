// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VCPU__Syms;
class VCPU_VerilatedVcd;
class VCPU___024unit;


//----------

VL_MODULE(VCPU___024root) {
  public:
    // CELLS
    VCPU___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*4:0*/ CPU__DOT__IDU__DOT__contr_io_out_alu_op;
        CData/*0:0*/ CPU__DOT__IDU__DOT__contr_io_out_reg_write;
        CData/*0:0*/ CPU__DOT__IDU__DOT__contr_io_out_jalr;
        CData/*2:0*/ CPU__DOT__IDU__DOT__contr_io_out_branch;
        CData/*2:0*/ CPU__DOT__IDU__DOT__contr_io_out_wdth;
        CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_229;
        CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_283;
        CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_400;
        CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_456;
        CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_571;
        CData/*0:0*/ CPU__DOT__EXU__DOT__ALU_io_out_cmp;
        VlWide<4>/*127:0*/ CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31;
        IData/*31:0*/ CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_5;
        IData/*31:0*/ CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_6;
        IData/*31:0*/ CPU__DOT__EXU__DOT__ALU__DOT___GEN_1;
        VlWide<4>/*126:0*/ CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_75;
        IData/*31:0*/ CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_9;
        IData/*31:0*/ CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_10;
        VlWide<4>/*127:0*/ CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153;
        QData/*63:0*/ CPU__DOT__pc;
        QData/*63:0*/ CPU__DOT__snpc;
        QData/*63:0*/ CPU__DOT___pc_T_3;
        QData/*63:0*/ CPU__DOT__IFU__DOT__fetchmem_rdata;
        QData/*63:0*/ CPU__DOT__IDU__DOT__immgen_io_out_imm;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs_io_out_rs2_data;
        QData/*63:0*/ CPU__DOT__EXU__DOT__ALU_io_in_src1;
        QData/*63:0*/ CPU__DOT__EXU__DOT__ALU_io_in_src2;
        QData/*63:0*/ CPU__DOT__EXU__DOT__mem_rdata;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_1;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_2;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_3;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_4;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_5;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_6;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_7;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_8;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_9;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_10;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_11;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_12;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_13;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_14;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_15;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_16;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_17;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_18;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_19;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_20;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_21;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_22;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_23;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_24;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_25;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_26;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_27;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_28;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_29;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_30;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT__reg_31;
        QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT___GEN_26;
        QData/*63:0*/ CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_4;
        QData/*63:0*/ CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_14;
        QData/*63:0*/ CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25;
    };
    struct {
        QData/*32:0*/ CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_40;
        VlUnpacked<QData/*63:0*/, 33> CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    QData/*63:0*/ __Vtask_pmem_read__0__rdata;
    QData/*63:0*/ __Vtask_pmem_read__3__rdata;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VCPU__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCPU___024root);  ///< Copying not allowed
  public:
    VCPU___024root(const char* name);
    ~VCPU___024root();

    // INTERNAL METHODS
    void __Vconfigure(VCPU__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
