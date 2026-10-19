/* Generated physical-bank dispatch. */
#include "dd3_static_semantics.h"
int dd3_static_execute_generated(DD3StaticRuntime *rt,int physical_bank){switch(physical_bank){
case 0:return dd3_static_execute_bank_00(rt);
case 1:return dd3_static_execute_bank_01(rt);
case 2:return dd3_static_execute_bank_02(rt);
case 3:return dd3_static_execute_bank_03(rt);
case 4:return dd3_static_execute_bank_04(rt);
case 5:return dd3_static_execute_bank_05(rt);
case 6:return dd3_static_execute_bank_06(rt);
case 7:return dd3_static_execute_bank_07(rt);
case 8:return dd3_static_execute_bank_08(rt);
case 9:return dd3_static_execute_bank_09(rt);
case 10:return dd3_static_execute_bank_10(rt);
case 11:return dd3_static_execute_bank_11(rt);
case 12:return dd3_static_execute_bank_12(rt);
case 13:return dd3_static_execute_bank_13(rt);
case 14:return dd3_static_execute_bank_14(rt);
case 15:return dd3_static_execute_bank_15(rt);
case 16:return dd3_static_execute_bank_16(rt);
default:return dd3_static_fail_unproven(rt,physical_bank,rt->state.cpu.pc);}}
