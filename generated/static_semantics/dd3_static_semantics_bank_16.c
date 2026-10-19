/* Generated: no runtime opcode fetch or decode. */
#include "dd3_static_semantics.h"
int dd3_static_execute_bank_16(DD3StaticRuntime *rt) {
    switch (rt->state.cpu.pc) {
        case 0x07F0u: {
            uint16_t ea=(uint16_t)(dd3_static_read8(rt,0x07F1u)|((uint16_t)dd3_static_read8(rt,0x07F2u)<<8));
            dd3_static_write8(rt,ea,rt->state.cpu.a);
            rt->state.cpu.pc=0x07F3u; return dd3_static_complete(rt,4u);
        }
        case 0x07F3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        default: return dd3_static_fail_unproven(rt,16,rt->state.cpu.pc);
    }
}
