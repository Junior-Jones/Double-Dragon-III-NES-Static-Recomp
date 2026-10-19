/* Generated: no runtime opcode fetch or decode. */
#include "dd3_static_semantics.h"
int dd3_static_execute_bank_15(DD3StaticRuntime *rt) {
    switch (rt->state.cpu.pc) {
        case 0xC017u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x0Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC019u; return dd3_static_complete(rt,8u);
        }
        case 0xC019u: {
            uint16_t ea=0x3313u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC01Cu; return dd3_static_complete(rt,6u);
        }
        case 0xC01Cu: {
            uint16_t ea=0x130Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC01Fu; return dd3_static_complete(rt,6u);
        }
        case 0xC01Fu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x0Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC021u; return dd3_static_complete(rt,8u);
        }
        case 0xC021u: {
            uint16_t ea=0x3313u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC024u; return dd3_static_complete(rt,6u);
        }
        case 0xC024u: {
            uint16_t ea=0x2A0Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC027u; return dd3_static_complete(rt,6u);
        }
        case 0xC027u: {
            (void)rt;
            rt->state.cpu.pc=0xC028u; return dd3_static_complete(rt,2u);
        }
        case 0xC028u: {
            uint16_t ea=0x130Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC02Bu; return dd3_static_complete(rt,6u);
        }
        case 0xC02Bu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x0Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC02Du; return dd3_static_complete(rt,8u);
        }
        case 0xC02Du: {
            uint16_t ea=0x3313u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC030u; return dd3_static_complete(rt,6u);
        }
        case 0xC030u: {
            uint16_t ea=0x130Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC033u; return dd3_static_complete(rt,6u);
        }
        case 0xC033u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x0Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC035u; return dd3_static_complete(rt,8u);
        }
        case 0xC035u: {
            uint16_t ea=0x3C1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC038u; return dd3_static_complete(rt,6u);
        }
        case 0xC038u: {
            uint16_t ea=0x130Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC03Bu; return dd3_static_complete(rt,6u);
        }
        case 0xC03Bu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x0Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC03Du; return dd3_static_complete(rt,8u);
        }
        case 0xC03Du: {
            uint16_t ea=0x3313u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC040u; return dd3_static_complete(rt,6u);
        }
        case 0xC040u: {
            uint16_t ea=0x0C0Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC043u; return dd3_static_complete(rt,6u);
        }
        case 0xC043u: {
            uint16_t ea=(uint16_t)((0x0Fu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC045u; return dd3_static_complete(rt,6u);
        }
        case 0xC045u: {
            uint16_t ea=0x2516u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC048u; return dd3_static_complete(rt,6u);
        }
        case 0xC048u: {
            uint16_t ea=0x2716u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC04Bu; return dd3_static_complete(rt,6u);
        }
        case 0xC04Bu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC04Du,0xC05Cu)) c++; rt->state.cpu.pc=0xC05Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC04Du; return dd3_static_complete(rt,2u);
        }
        case 0xC04Du: {
            uint16_t ea=0x17u; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC04Fu; return dd3_static_complete(rt,5u);
        }
        case 0xC04Fu: {
            uint16_t ea=0x0Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC051u; return dd3_static_complete(rt,5u);
        }
        case 0xC051u: {
            uint16_t ea=0x1A2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC054u; return dd3_static_complete(rt,6u);
        }
        case 0xC054u: {
            uint16_t ea=0x000Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC057u; return dd3_static_complete(rt,6u);
        }
        case 0xC057u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC059u,0xC068u)) c++; rt->state.cpu.pc=0xC068u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC059u; return dd3_static_complete(rt,2u);
        }
        case 0xC059u: {
            uint16_t ea=0x1C0Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC05Cu; return dd3_static_complete(rt,6u);
        }
        case 0xC05Cu: {
            uint16_t ea=0x2716u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC05Fu; return dd3_static_complete(rt,6u);
        }
        case 0xC05Fu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC061u,0xC070u)) c++; rt->state.cpu.pc=0xC070u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC061u; return dd3_static_complete(rt,2u);
        }
        case 0xC061u: {
            uint16_t ea=0x3C00u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC064u; return dd3_static_complete(rt,6u);
        }
        case 0xC064u: {
            uint16_t ea=0x2716u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC067u; return dd3_static_complete(rt,6u);
        }
        case 0xC067u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC069u,0xC078u)) c++; rt->state.cpu.pc=0xC078u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC069u; return dd3_static_complete(rt,2u);
        }
        case 0xC068u: {
            uint16_t ea=0x000Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC06Bu; return dd3_static_complete(rt,6u);
        }
        case 0xC069u: {
            uint16_t ea=0x1000u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC06Cu; return dd3_static_complete(rt,6u);
        }
        case 0xC06Bu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC06Du,0xC07Cu)) c++; rt->state.cpu.pc=0xC07Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC06Du; return dd3_static_complete(rt,2u);
        }
        case 0xC06Cu: {
            uint16_t ea=0x2716u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC06Fu; return dd3_static_complete(rt,6u);
        }
        case 0xC06Du: {
            uint16_t ea=(uint16_t)((0x27u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC06Fu; return dd3_static_complete(rt,6u);
        }
        case 0xC06Fu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC071u,0xC0B9u)) c++; rt->state.cpu.pc=0xC0B9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC071u; return dd3_static_complete(rt,2u);
        }
        case 0xC070u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC071u; return dd3_static_complete(rt,3u);
        }
        case 0xC071u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC072u; return dd3_static_complete(rt,2u);
        }
        case 0xC072u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC073u; return dd3_static_complete(rt,3u);
        }
        case 0xC073u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC074u; return dd3_static_complete(rt,2u);
        }
        case 0xC074u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC075u; return dd3_static_complete(rt,3u);
        }
        case 0xC075u: {
            dd3_static_push8(rt,(uint8_t)(0xC077u>>8)); dd3_static_push8(rt,(uint8_t)0xC077u);
            rt->state.cpu.pc=0xFE75u; return dd3_static_complete(rt,6u);
        }
        case 0xC078u: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC07Au; return dd3_static_complete(rt,5u);
        }
        case 0xC07Au: {
            uint16_t ea=0xABu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC07Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC07Cu: {
            uint16_t ea=(uint16_t)(0xE0A5u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC07Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE0A5u,ea)?1u:0u));
        }
        case 0xC07Fu: {
            uint16_t ea=0xA1u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC081u; return dd3_static_complete(rt,3u);
        }
        case 0xC081u: {
            dd3_static_write8(rt,0xC000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC084u; return dd3_static_complete(rt,4u);
        }
        case 0xC084u: {
            dd3_static_write8(rt,0xC001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC087u; return dd3_static_complete(rt,4u);
        }
        case 0xC087u: {
            dd3_static_write8(rt,(uint16_t)(0xE000u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC08Au; return dd3_static_complete(rt,5u);
        }
        case 0xC08Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC08Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC08Cu: {
            dd3_static_write8(rt,0x39u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC08Eu; return dd3_static_complete(rt,3u);
        }
        case 0xC08Eu: {
            dd3_static_push8(rt,(uint8_t)(0xC090u>>8)); dd3_static_push8(rt,(uint8_t)0xC090u);
            rt->state.cpu.pc=0xFED7u; return dd3_static_complete(rt,6u);
        }
        case 0xC091u: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC093u; return dd3_static_complete(rt,3u);
        }
        case 0xC093u: {
            dd3_static_write8(rt,0x2001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC096u; return dd3_static_complete(rt,4u);
        }
        case 0xC096u: {
            dd3_static_push8(rt,(uint8_t)(0xC098u>>8)); dd3_static_push8(rt,(uint8_t)0xC098u);
            rt->state.cpu.pc=0xC5EAu; return dd3_static_complete(rt,6u);
        }
        case 0xC099u: {
            dd3_static_push8(rt,(uint8_t)(0xC09Bu>>8)); dd3_static_push8(rt,(uint8_t)0xC09Bu);
            rt->state.cpu.pc=0xF2F8u; return dd3_static_complete(rt,6u);
        }
        case 0xC09Cu: {
            dd3_static_push8(rt,(uint8_t)(0xC09Eu>>8)); dd3_static_push8(rt,(uint8_t)0xC09Eu);
            rt->state.cpu.pc=0xFD9Eu; return dd3_static_complete(rt,6u);
        }
        case 0xC09Fu: {
            dd3_static_push8(rt,(uint8_t)(0xC0A1u>>8)); dd3_static_push8(rt,(uint8_t)0xC0A1u);
            rt->state.cpu.pc=0xFC53u; return dd3_static_complete(rt,6u);
        }
        case 0xC0A2u: {
            rt->state.cpu.pc=0xE169u; return dd3_static_complete(rt,3u);
        }
        case 0xC0B9u: {
            (void)rt;
            rt->state.cpu.pc=0xC0BAu; return dd3_static_complete(rt,2u);
        }
        case 0xC0BAu: {
            uint16_t ea=0x20u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC0BCu; return dd3_static_complete(rt,3u);
        }
        case 0xC0BCu: {
            uint16_t ea=(uint16_t)((0xF0u+rt->state.cpu.x)&0xFFu); (void)dd3_static_read8(rt,ea);
            rt->state.cpu.pc=0xC0BEu; return dd3_static_complete(rt,4u);
        }
        case 0xC0BEu: {
            dd3_static_push8(rt,(uint8_t)(0xC0C0u>>8)); dd3_static_push8(rt,(uint8_t)0xC0C0u);
            rt->state.cpu.pc=0xF201u; return dd3_static_complete(rt,6u);
        }
        case 0xC0C1u: {
            dd3_static_push8(rt,(uint8_t)(0xC0C3u>>8)); dd3_static_push8(rt,(uint8_t)0xC0C3u);
            rt->state.cpu.pc=0xF240u; return dd3_static_complete(rt,6u);
        }
        case 0xC0C4u: {
            dd3_static_push8(rt,(uint8_t)(0xC0C6u>>8)); dd3_static_push8(rt,(uint8_t)0xC0C6u);
            rt->state.cpu.pc=0xF337u; return dd3_static_complete(rt,6u);
        }
        case 0xC0C7u: {
            dd3_static_push8(rt,(uint8_t)(0xC0C9u>>8)); dd3_static_push8(rt,(uint8_t)0xC0C9u);
            rt->state.cpu.pc=0xFD9Eu; return dd3_static_complete(rt,6u);
        }
        case 0xC0CAu: {
            dd3_static_push8(rt,(uint8_t)(0xC0CCu>>8)); dd3_static_push8(rt,(uint8_t)0xC0CCu);
            rt->state.cpu.pc=0xFC53u; return dd3_static_complete(rt,6u);
        }
        case 0xC0CDu: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC0CFu; return dd3_static_complete(rt,5u);
        }
        case 0xC0CFu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0D1u; return dd3_static_complete(rt,2u);
        }
        case 0xC0D1u: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0D3u; return dd3_static_complete(rt,3u);
        }
        case 0xC0D3u: {
            rt->state.cpu.pc=0xE169u; return dd3_static_complete(rt,3u);
        }
        case 0xC5DAu: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC5DCu; return dd3_static_complete(rt,4u);
        }
        case 0xC5DCu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC5DEu,0xC64Eu)) c++; rt->state.cpu.pc=0xC64Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC5DEu; return dd3_static_complete(rt,2u);
        }
        case 0xC5DEu: {
            uint16_t ea=(uint16_t)((0xB3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC5E0u; return dd3_static_complete(rt,4u);
        }
        case 0xC5E0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC5E2u,0xC64Eu)) c++; rt->state.cpu.pc=0xC64Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC5E2u; return dd3_static_complete(rt,2u);
        }
        case 0xC5E2u: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC5E4u; return dd3_static_complete(rt,2u);
        }
        case 0xC5E4u: {
            uint16_t ea=(uint16_t)(0x003Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC5E7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Cu,ea)?1u:0u));
        }
        case 0xC5E7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC5E9u,0xC620u)) c++; rt->state.cpu.pc=0xC620u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC5E9u; return dd3_static_complete(rt,2u);
        }
        case 0xC5E9u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC5EAu; return dd3_static_complete(rt,2u);
        }
        case 0xC5EAu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xC5ECu; return dd3_static_complete(rt,2u);
        }
        case 0xC5ECu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC5EEu,0xC5E4u)) c++; rt->state.cpu.pc=0xC5E4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC5EEu; return dd3_static_complete(rt,2u);
        }
        case 0xC5EEu: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC5F0u; return dd3_static_complete(rt,2u);
        }
        case 0xC5F0u: {
            uint16_t ea=(uint16_t)(0x03F1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC5F3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F1u,ea)?1u:0u));
        }
        case 0xC5F3u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC5F5u; return dd3_static_complete(rt,2u);
        }
        case 0xC5F5u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC5F7u,0xC5FEu)) c++; rt->state.cpu.pc=0xC5FEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC5F7u; return dd3_static_complete(rt,2u);
        }
        case 0xC5F7u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC5F8u; return dd3_static_complete(rt,2u);
        }
        case 0xC5F8u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xC5FAu; return dd3_static_complete(rt,2u);
        }
        case 0xC5FAu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC5FCu,0xC5F0u)) c++; rt->state.cpu.pc=0xC5F0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC5FCu; return dd3_static_complete(rt,2u);
        }
        case 0xC5FCu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC5FEu,0xC64Eu)) c++; rt->state.cpu.pc=0xC64Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC5FEu; return dd3_static_complete(rt,2u);
        }
        case 0xC5FEu: {
            dd3_static_write8(rt,0x26u,rt->state.cpu.y);
            rt->state.cpu.pc=0xC600u; return dd3_static_complete(rt,3u);
        }
        case 0xC600u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC601u; return dd3_static_complete(rt,3u);
        }
        case 0xC601u: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC604u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0xC604u: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC606u; return dd3_static_complete(rt,2u);
        }
        case 0xC606u: {
            dd3_static_write8(rt,(uint16_t)(0x004Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC609u; return dd3_static_complete(rt,5u);
        }
        case 0xC609u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC60Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC60Bu: {
            dd3_static_write8(rt,(uint16_t)(0x03F1u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC60Eu; return dd3_static_complete(rt,5u);
        }
        case 0xC60Eu: {
            dd3_static_write8(rt,(uint16_t)(0x03B8u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC611u; return dd3_static_complete(rt,5u);
        }
        case 0xC611u: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC614u; return dd3_static_complete(rt,5u);
        }
        case 0xC614u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC615u; return dd3_static_complete(rt,4u);
        }
        case 0xC615u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC616u; return dd3_static_complete(rt,2u);
        }
        case 0xC616u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC618u; return dd3_static_complete(rt,2u);
        }
        case 0xC618u: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC61Bu; return dd3_static_complete(rt,5u);
        }
        case 0xC61Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC61Eu; return dd3_static_complete(rt,5u);
        }
        case 0xC61Eu: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC620u; return dd3_static_complete(rt,3u);
        }
        case 0xC620u: {
            dd3_static_write8(rt,0x26u,rt->state.cpu.y);
            rt->state.cpu.pc=0xC622u; return dd3_static_complete(rt,3u);
        }
        case 0xC622u: {
            uint16_t ea=(uint16_t)((0x23u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC624u; return dd3_static_complete(rt,4u);
        }
        case 0xC624u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC625u; return dd3_static_complete(rt,2u);
        }
        case 0xC625u: {
            uint16_t ea=(uint16_t)(0xE6DBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC628u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE6DBu,ea)?1u:0u));
        }
        case 0xC628u: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC62Au; return dd3_static_complete(rt,3u);
        }
        case 0xC62Au: {
            dd3_static_write8(rt,(uint16_t)(0x0074u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC62Du; return dd3_static_complete(rt,5u);
        }
        case 0xC62Du: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC62Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC62Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC632u; return dd3_static_complete(rt,5u);
        }
        case 0xC632u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC634u; return dd3_static_complete(rt,2u);
        }
        case 0xC634u: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC637u; return dd3_static_complete(rt,5u);
        }
        case 0xC637u: {
            dd3_static_write8(rt,(uint16_t)(0x007Du+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC63Au; return dd3_static_complete(rt,5u);
        }
        case 0xC63Au: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC63Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC63Bu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC63Du; return dd3_static_complete(rt,2u);
        }
        case 0xC63Du: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC640u; return dd3_static_complete(rt,5u);
        }
        case 0xC640u: {
            uint8_t v=0x82u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC642u; return dd3_static_complete(rt,2u);
        }
        case 0xC642u: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC645u; return dd3_static_complete(rt,5u);
        }
        case 0xC645u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC646u; return dd3_static_complete(rt,2u);
        }
        case 0xC646u: {
            dd3_static_write8(rt,(uint16_t)(0x03F1u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC649u; return dd3_static_complete(rt,5u);
        }
        case 0xC649u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC64Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC64Bu: {
            dd3_static_write8(rt,(uint16_t)(0x03B8u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC64Eu; return dd3_static_complete(rt,5u);
        }
        case 0xC64Eu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC64Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC64Fu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC651u,0xC5DAu)) c++; rt->state.cpu.pc=0xC5DAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC651u; return dd3_static_complete(rt,2u);
        }
        case 0xC651u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC653u; return dd3_static_complete(rt,2u);
        }
        case 0xC653u: {
            dd3_static_write8(rt,0x04DDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC656u; return dd3_static_complete(rt,4u);
        }
        case 0xC656u: {
            dd3_static_push8(rt,(uint8_t)(0xC658u>>8)); dd3_static_push8(rt,(uint8_t)0xC658u);
            rt->state.cpu.pc=0xEF2Fu; return dd3_static_complete(rt,6u);
        }
        case 0xC659u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC65Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC65Bu: {
            dd3_static_push8(rt,(uint8_t)(0xC65Du>>8)); dd3_static_push8(rt,(uint8_t)0xC65Du);
            rt->state.cpu.pc=0xF5BDu; return dd3_static_complete(rt,6u);
        }
        case 0xC65Eu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC660u; return dd3_static_complete(rt,2u);
        }
        case 0xC660u: {
            dd3_static_write8(rt,0xA000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC663u; return dd3_static_complete(rt,4u);
        }
        case 0xC663u: {
            dd3_static_push8(rt,(uint8_t)(0xC665u>>8)); dd3_static_push8(rt,(uint8_t)0xC665u);
            rt->state.cpu.pc=0xD198u; return dd3_static_complete(rt,6u);
        }
        case 0xC666u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC667u; return dd3_static_complete(rt,4u);
        }
        case 0xC667u: {
            dd3_static_write8(rt,0x04E7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC66Au; return dd3_static_complete(rt,4u);
        }
        case 0xC66Au: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC66Bu; return dd3_static_complete(rt,4u);
        }
        case 0xC66Bu: {
            dd3_static_write8(rt,0x04E6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC66Eu; return dd3_static_complete(rt,4u);
        }
        case 0xC66Eu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC66Fu; return dd3_static_complete(rt,4u);
        }
        case 0xC66Fu: {
            dd3_static_write8(rt,0x04DEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC672u; return dd3_static_complete(rt,4u);
        }
        case 0xC672u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC673u; return dd3_static_complete(rt,4u);
        }
        case 0xC673u: {
            dd3_static_write8(rt,0x04DDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC676u; return dd3_static_complete(rt,4u);
        }
        case 0xC676u: {
            dd3_static_push8(rt,(uint8_t)(0xC678u>>8)); dd3_static_push8(rt,(uint8_t)0xC678u);
            rt->state.cpu.pc=0xFEEEu; return dd3_static_complete(rt,6u);
        }
        case 0xC679u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC67Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC67Bu: {
            dd3_static_write8(rt,0x44u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC67Du; return dd3_static_complete(rt,3u);
        }
        case 0xC67Du: {
            dd3_static_write8(rt,0x45u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC67Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC67Fu: {
            uint16_t ea=0x04F0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC682u; return dd3_static_complete(rt,4u);
        }
        case 0xC682u: {
            dd3_static_write8(rt,0x04EEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC685u; return dd3_static_complete(rt,4u);
        }
        case 0xC685u: {
            uint16_t ea=0x04F1u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC688u; return dd3_static_complete(rt,4u);
        }
        case 0xC688u: {
            dd3_static_write8(rt,0x04EFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC68Bu; return dd3_static_complete(rt,4u);
        }
        case 0xC68Bu: {
            dd3_static_push8(rt,(uint8_t)(0xC68Du>>8)); dd3_static_push8(rt,(uint8_t)0xC68Du);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xC68Eu: {
            dd3_static_push8(rt,(uint8_t)(0xC690u>>8)); dd3_static_push8(rt,(uint8_t)0xC690u);
            rt->state.cpu.pc=0xFCF6u; return dd3_static_complete(rt,6u);
        }
        case 0xC691u: {
            dd3_static_push8(rt,(uint8_t)(0xC693u>>8)); dd3_static_push8(rt,(uint8_t)0xC693u);
            rt->state.cpu.pc=0xD052u; return dd3_static_complete(rt,6u);
        }
        case 0xC694u: {
            dd3_static_push8(rt,(uint8_t)(0xC696u>>8)); dd3_static_push8(rt,(uint8_t)0xC696u);
            rt->state.cpu.pc=0xC017u; return dd3_static_complete(rt,6u);
        }
        case 0xC697u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC698u; return dd3_static_complete(rt,4u);
        }
        case 0xC698u: {
            dd3_static_write8(rt,0x91u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC69Au; return dd3_static_complete(rt,3u);
        }
        case 0xC69Au: {
            dd3_static_push8(rt,(uint8_t)(0xC69Cu>>8)); dd3_static_push8(rt,(uint8_t)0xC69Cu);
            rt->state.cpu.pc=0xD052u; return dd3_static_complete(rt,6u);
        }
        case 0xC69Du: {
            dd3_static_push8(rt,(uint8_t)(0xC69Fu>>8)); dd3_static_push8(rt,(uint8_t)0xC69Fu);
            rt->state.cpu.pc=0xFCE3u; return dd3_static_complete(rt,6u);
        }
        case 0xC6A0u: {
            dd3_static_push8(rt,(uint8_t)(0xC6A2u>>8)); dd3_static_push8(rt,(uint8_t)0xC6A2u);
            rt->state.cpu.pc=0xFE75u; return dd3_static_complete(rt,6u);
        }
        case 0xC6A3u: {
            dd3_static_push8(rt,(uint8_t)(0xC6A5u>>8)); dd3_static_push8(rt,(uint8_t)0xC6A5u);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xC6A6u: {
            dd3_static_push8(rt,(uint8_t)(0xC6A8u>>8)); dd3_static_push8(rt,(uint8_t)0xC6A8u);
            rt->state.cpu.pc=0xD1B9u; return dd3_static_complete(rt,6u);
        }
        case 0xC6A9u: {
            dd3_static_push8(rt,(uint8_t)(0xC6ABu>>8)); dd3_static_push8(rt,(uint8_t)0xC6ABu);
            rt->state.cpu.pc=0xD17Fu; return dd3_static_complete(rt,6u);
        }
        case 0xC6ACu: {
            dd3_static_push8(rt,(uint8_t)(0xC6AEu>>8)); dd3_static_push8(rt,(uint8_t)0xC6AEu);
            rt->state.cpu.pc=0xD920u; return dd3_static_complete(rt,6u);
        }
        case 0xC6AFu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6B1u; return dd3_static_complete(rt,2u);
        }
        case 0xC6B1u: {
            dd3_static_write8(rt,0x04D1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6B4u; return dd3_static_complete(rt,4u);
        }
        case 0xC6B4u: {
            dd3_static_push8(rt,(uint8_t)(0xC6B6u>>8)); dd3_static_push8(rt,(uint8_t)0xC6B6u);
            rt->state.cpu.pc=0xFCB1u; return dd3_static_complete(rt,6u);
        }
        case 0xC6B7u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6B9u; return dd3_static_complete(rt,2u);
        }
        case 0xC6B9u: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6BBu; return dd3_static_complete(rt,3u);
        }
        case 0xC6BBu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6BDu; return dd3_static_complete(rt,2u);
        }
        case 0xC6BDu: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6BFu; return dd3_static_complete(rt,3u);
        }
        case 0xC6BFu: {
            dd3_static_push8(rt,(uint8_t)(0xC6C1u>>8)); dd3_static_push8(rt,(uint8_t)0xC6C1u);
            rt->state.cpu.pc=0xE3B7u; return dd3_static_complete(rt,6u);
        }
        case 0xC6C2u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6C4u; return dd3_static_complete(rt,3u);
        }
        case 0xC6C4u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6C6u; return dd3_static_complete(rt,2u);
        }
        case 0xC6C6u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6C8u; return dd3_static_complete(rt,3u);
        }
        case 0xC6C8u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6CAu; return dd3_static_complete(rt,2u);
        }
        case 0xC6CAu: {
            dd3_static_push8(rt,(uint8_t)(0xC6CCu>>8)); dd3_static_push8(rt,(uint8_t)0xC6CCu);
            rt->state.cpu.pc=0xF5BDu; return dd3_static_complete(rt,6u);
        }
        case 0xC6CDu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6CFu; return dd3_static_complete(rt,2u);
        }
        case 0xC6CFu: {
            dd3_static_push8(rt,(uint8_t)(0xC6D1u>>8)); dd3_static_push8(rt,(uint8_t)0xC6D1u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xC6D2u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6D4u; return dd3_static_complete(rt,2u);
        }
        case 0xC6D4u: {
            dd3_static_write8(rt,0x0309u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6D7u; return dd3_static_complete(rt,4u);
        }
        case 0xC6D7u: {
            dd3_static_write8(rt,0x030Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6DAu; return dd3_static_complete(rt,4u);
        }
        case 0xC6DAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xCB86u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xCB87u; return dd3_static_complete(rt,2u);
        }
        case 0xCB87u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xCB89u; return dd3_static_complete(rt,2u);
        }
        case 0xCB89u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xCB8Cu; return dd3_static_complete(rt,5u);
        }
        case 0xCB8Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCB8Du; return dd3_static_complete(rt,2u);
        }
        case 0xCB8Du: {
            rt->state.cpu.pc=0xEB9Cu; return dd3_static_complete(rt,3u);
        }
        case 0xCE91u: {
            dd3_static_write8(rt,0xABu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE93u; return dd3_static_complete(rt,3u);
        }
        case 0xCE93u: {
            dd3_static_write8(rt,0xA1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE95u; return dd3_static_complete(rt,3u);
        }
        case 0xCE95u: {
            rt->state.cpu.i=0;
            rt->state.cpu.pc=0xCE96u; return dd3_static_complete(rt,2u);
        }
        case 0xCE96u: {
            uint8_t v=0x0Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCE98u; return dd3_static_complete(rt,2u);
        }
        case 0xCE98u: {
            dd3_static_write8(rt,0x04DDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE9Bu; return dd3_static_complete(rt,4u);
        }
        case 0xCE9Bu: {
            dd3_static_push8(rt,(uint8_t)(0xCE9Du>>8)); dd3_static_push8(rt,(uint8_t)0xCE9Du);
            rt->state.cpu.pc=0xF279u; return dd3_static_complete(rt,6u);
        }
        case 0xCE9Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCEA0u; return dd3_static_complete(rt,2u);
        }
        case 0xCEA0u: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCEA2u; return dd3_static_complete(rt,3u);
        }
        case 0xCEA2u: {
            dd3_static_push8(rt,(uint8_t)(0xCEA4u>>8)); dd3_static_push8(rt,(uint8_t)0xCEA4u);
            rt->state.cpu.pc=0xFEBFu; return dd3_static_complete(rt,6u);
        }
        case 0xCEA5u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCEA7u; return dd3_static_complete(rt,2u);
        }
        case 0xCEA7u: {
            dd3_static_push8(rt,(uint8_t)(0xCEA9u>>8)); dd3_static_push8(rt,(uint8_t)0xCEA9u);
            rt->state.cpu.pc=0xFE8Eu; return dd3_static_complete(rt,6u);
        }
        case 0xCEAAu: {
            dd3_static_push8(rt,(uint8_t)(0xCEACu>>8)); dd3_static_push8(rt,(uint8_t)0xCEACu);
            rt->state.cpu.pc=0xFC62u; return dd3_static_complete(rt,6u);
        }
        case 0xCEADu: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCEAFu; return dd3_static_complete(rt,2u);
        }
        case 0xCEAFu: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xCEB0u; return dd3_static_complete(rt,2u);
        }
        case 0xCEB0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCEB2u,0xCEAFu)) c++; rt->state.cpu.pc=0xCEAFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCEB2u; return dd3_static_complete(rt,2u);
        }
        case 0xCEB2u: {
            dd3_static_push8(rt,(uint8_t)(0xCEB4u>>8)); dd3_static_push8(rt,(uint8_t)0xCEB4u);
            rt->state.cpu.pc=0xDBCAu; return dd3_static_complete(rt,6u);
        }
        case 0xCEB5u: {
            uint16_t ea=0x06B1u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCEB8u; return dd3_static_complete(rt,4u);
        }
        case 0xCEB8u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCEBAu,0xCEC6u)) c++; rt->state.cpu.pc=0xCEC6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCEBAu; return dd3_static_complete(rt,2u);
        }
        case 0xCEBAu: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCEBCu; return dd3_static_complete(rt,3u);
        }
        case 0xCEBCu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xCEBEu; return dd3_static_complete(rt,2u);
        }
        case 0xCEBEu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCEC0u,0xCEBAu)) c++; rt->state.cpu.pc=0xCEBAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCEC0u; return dd3_static_complete(rt,2u);
        }
        case 0xCEC0u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCEC2u; return dd3_static_complete(rt,2u);
        }
        case 0xCEC2u: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCEC4u; return dd3_static_complete(rt,3u);
        }
        case 0xCEC4u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCEC6u,0xCEAAu)) c++; rt->state.cpu.pc=0xCEAAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCEC6u; return dd3_static_complete(rt,2u);
        }
        case 0xCEC6u: {
            uint8_t v=0x0Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCEC8u; return dd3_static_complete(rt,2u);
        }
        case 0xCEC8u: {
            dd3_static_write8(rt,0x04DDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCECBu; return dd3_static_complete(rt,4u);
        }
        case 0xCECBu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCECDu; return dd3_static_complete(rt,2u);
        }
        case 0xCECDu: {
            dd3_static_write8(rt,0x04DEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCED0u; return dd3_static_complete(rt,4u);
        }
        case 0xCED0u: {
            dd3_static_push8(rt,(uint8_t)(0xCED2u>>8)); dd3_static_push8(rt,(uint8_t)0xCED2u);
            rt->state.cpu.pc=0xF279u; return dd3_static_complete(rt,6u);
        }
        case 0xCED3u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCED5u; return dd3_static_complete(rt,2u);
        }
        case 0xCED5u: {
            dd3_static_write8(rt,0xFBu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCED7u; return dd3_static_complete(rt,3u);
        }
        case 0xCED7u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCED9u; return dd3_static_complete(rt,2u);
        }
        case 0xCED9u: {
            dd3_static_write8(rt,0xFCu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCEDBu; return dd3_static_complete(rt,3u);
        }
        case 0xCEDBu: {
            dd3_static_push8(rt,(uint8_t)(0xCEDDu>>8)); dd3_static_push8(rt,(uint8_t)0xCEDDu);
            rt->state.cpu.pc=0xF5CFu; return dd3_static_complete(rt,6u);
        }
        case 0xCEDEu: {
            dd3_static_push8(rt,(uint8_t)(0xCEE0u>>8)); dd3_static_push8(rt,(uint8_t)0xCEE0u);
            rt->state.cpu.pc=0xFC62u; return dd3_static_complete(rt,6u);
        }
        case 0xCEE1u: {
            uint16_t ea=0xFBu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCEE3u; return dd3_static_complete(rt,3u);
        }
        case 0xCEE3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCEE5u,0xCEF9u)) c++; rt->state.cpu.pc=0xCEF9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCEE5u; return dd3_static_complete(rt,2u);
        }
        case 0xCEE5u: {
            uint16_t ea=0xFCu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xCEE7u; return dd3_static_complete(rt,5u);
        }
        case 0xCEE7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCEE9u,0xCEDBu)) c++; rt->state.cpu.pc=0xCEDBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCEE9u; return dd3_static_complete(rt,2u);
        }
        case 0xCEE9u: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCEEBu; return dd3_static_complete(rt,3u);
        }
        case 0xCEEBu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCEEDu; return dd3_static_complete(rt,2u);
        }
        case 0xCEEDu: {
            dd3_static_write8(rt,0x9Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCEEFu; return dd3_static_complete(rt,3u);
        }
        case 0xCEEFu: {
            uint16_t ea=0xFBu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xCEF1u; return dd3_static_complete(rt,5u);
        }
        case 0xCEF1u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCEF3u,0xCED7u)) c++; rt->state.cpu.pc=0xCED7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCEF3u; return dd3_static_complete(rt,2u);
        }
        case 0xCEF3u: {
            dd3_static_push8(rt,(uint8_t)(0xCEF5u>>8)); dd3_static_push8(rt,(uint8_t)0xCEF5u);
            rt->state.cpu.pc=0xEF50u; return dd3_static_complete(rt,6u);
        }
        case 0xCEF6u: {
            rt->state.cpu.pc=0xEEDBu; return dd3_static_complete(rt,3u);
        }
        case 0xCEF9u: {
            uint8_t v=0x7Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCEFBu; return dd3_static_complete(rt,2u);
        }
        case 0xCEFBu: {
            dd3_static_write8(rt,0x44u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCEFDu; return dd3_static_complete(rt,3u);
        }
        case 0xCEFDu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCEFFu; return dd3_static_complete(rt,2u);
        }
        case 0xCEFFu: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF01u; return dd3_static_complete(rt,3u);
        }
        case 0xCF01u: {
            dd3_static_push8(rt,(uint8_t)(0xCF03u>>8)); dd3_static_push8(rt,(uint8_t)0xCF03u);
            rt->state.cpu.pc=0xFC62u; return dd3_static_complete(rt,6u);
        }
        case 0xCF04u: {
            dd3_static_push8(rt,(uint8_t)(0xCF06u>>8)); dd3_static_push8(rt,(uint8_t)0xCF06u);
            rt->state.cpu.pc=0xDBCAu; return dd3_static_complete(rt,6u);
        }
        case 0xCF07u: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF09u; return dd3_static_complete(rt,3u);
        }
        case 0xCF09u: {
            uint8_t v=0xD0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF0Bu; return dd3_static_complete(rt,2u);
        }
        case 0xCF0Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCF0Du,0xCF19u)) c++; rt->state.cpu.pc=0xCF19u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCF0Du; return dd3_static_complete(rt,2u);
        }
        case 0xCF0Du: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF0Fu; return dd3_static_complete(rt,3u);
        }
        case 0xCF0Fu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xCF11u; return dd3_static_complete(rt,2u);
        }
        case 0xCF11u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCF13u,0xCF0Du)) c++; rt->state.cpu.pc=0xCF0Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCF13u; return dd3_static_complete(rt,2u);
        }
        case 0xCF13u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF15u; return dd3_static_complete(rt,2u);
        }
        case 0xCF15u: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF17u; return dd3_static_complete(rt,3u);
        }
        case 0xCF17u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCF19u,0xCF01u)) c++; rt->state.cpu.pc=0xCF01u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCF19u; return dd3_static_complete(rt,2u);
        }
        case 0xCF19u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF1Bu; return dd3_static_complete(rt,2u);
        }
        case 0xCF1Bu: {
            dd3_static_push8(rt,(uint8_t)(0xCF1Du>>8)); dd3_static_push8(rt,(uint8_t)0xCF1Du);
            rt->state.cpu.pc=0xF5BDu; return dd3_static_complete(rt,6u);
        }
        case 0xCF1Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF20u; return dd3_static_complete(rt,2u);
        }
        case 0xCF20u: {
            dd3_static_write8(rt,0xABu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF22u; return dd3_static_complete(rt,3u);
        }
        case 0xCF22u: {
            dd3_static_write8(rt,0xA1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF24u; return dd3_static_complete(rt,3u);
        }
        case 0xCF24u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF26u; return dd3_static_complete(rt,2u);
        }
        case 0xCF26u: {
            dd3_static_push8(rt,(uint8_t)(0xCF28u>>8)); dd3_static_push8(rt,(uint8_t)0xCF28u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xCF29u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF2Bu; return dd3_static_complete(rt,2u);
        }
        case 0xCF2Bu: {
            dd3_static_write8(rt,0xA000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF2Eu; return dd3_static_complete(rt,4u);
        }
        case 0xCF2Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD052u: {
            uint16_t ea=(uint16_t)((0x20u+rt->state.cpu.y)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD054u; return dd3_static_complete(rt,4u);
        }
        case 0xD054u: {
            uint16_t ea=(uint16_t)((0xEFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD056u; return dd3_static_complete(rt,6u);
        }
        case 0xD056u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD058u; return dd3_static_complete(rt,2u);
        }
        case 0xD058u: {
            dd3_static_push8(rt,(uint8_t)(0xD05Au>>8)); dd3_static_push8(rt,(uint8_t)0xD05Au);
            rt->state.cpu.pc=0xF5BDu; return dd3_static_complete(rt,6u);
        }
        case 0xD05Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD05Du; return dd3_static_complete(rt,2u);
        }
        case 0xD05Du: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD05Fu; return dd3_static_complete(rt,3u);
        }
        case 0xD05Fu: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD061u; return dd3_static_complete(rt,3u);
        }
        case 0xD061u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xD063u; return dd3_static_complete(rt,2u);
        }
        case 0xD063u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD065u,0xD05Fu)) c++; rt->state.cpu.pc=0xD05Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD065u; return dd3_static_complete(rt,2u);
        }
        case 0xD065u: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD067u; return dd3_static_complete(rt,5u);
        }
        case 0xD067u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD069u,0xD05Bu)) c++; rt->state.cpu.pc=0xD05Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD069u; return dd3_static_complete(rt,2u);
        }
        case 0xD069u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD06Bu; return dd3_static_complete(rt,2u);
        }
        case 0xD06Bu: {
            dd3_static_push8(rt,(uint8_t)(0xD06Du>>8)); dd3_static_push8(rt,(uint8_t)0xD06Du);
            rt->state.cpu.pc=0xF5BDu; return dd3_static_complete(rt,6u);
        }
        case 0xD06Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD089u: {
            uint16_t ea=(uint16_t)(0x9CBBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD08Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9CBBu,ea)?1u:0u));
        }
        case 0xD08Cu: {
            dd3_static_write8(rt,0xF3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD08Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD08Eu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD090u; return dd3_static_complete(rt,3u);
        }
        case 0xD090u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD092u; return dd3_static_complete(rt,2u);
        }
        case 0xD092u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD094u; return dd3_static_complete(rt,3u);
        }
        case 0xD094u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD096u; return dd3_static_complete(rt,2u);
        }
        case 0xD096u: {
            dd3_static_push8(rt,(uint8_t)(0xD098u>>8)); dd3_static_push8(rt,(uint8_t)0xD098u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xD099u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD09Bu; return dd3_static_complete(rt,2u);
        }
        case 0xD09Bu: {
            dd3_static_push8(rt,(uint8_t)(0xD09Du>>8)); dd3_static_push8(rt,(uint8_t)0xD09Du);
            rt->state.cpu.pc=0xF38Eu; return dd3_static_complete(rt,6u);
        }
        case 0xD09Eu: {
            dd3_static_push8(rt,(uint8_t)(0xD0A0u>>8)); dd3_static_push8(rt,(uint8_t)0xD0A0u);
            rt->state.cpu.pc=0xF128u; return dd3_static_complete(rt,6u);
        }
        case 0xD0A1u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD0A3u; return dd3_static_complete(rt,2u);
        }
        case 0xD0A3u: {
            dd3_static_push8(rt,(uint8_t)(0xD0A5u>>8)); dd3_static_push8(rt,(uint8_t)0xD0A5u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xD0A6u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD0A8u; return dd3_static_complete(rt,2u);
        }
        case 0xD0A8u: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD0AAu; return dd3_static_complete(rt,3u);
        }
        case 0xD0AAu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD0ACu; return dd3_static_complete(rt,2u);
        }
        case 0xD0ACu: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD0AEu; return dd3_static_complete(rt,3u);
        }
        case 0xD0AEu: {
            dd3_static_push8(rt,(uint8_t)(0xD0B0u>>8)); dd3_static_push8(rt,(uint8_t)0xD0B0u);
            rt->state.cpu.pc=0xFEBFu; return dd3_static_complete(rt,6u);
        }
        case 0xD0B1u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD0B3u; return dd3_static_complete(rt,2u);
        }
        case 0xD0B3u: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD0B5u; return dd3_static_complete(rt,3u);
        }
        case 0xD0B5u: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD0B8u; return dd3_static_complete(rt,6u);
        }
        case 0xD0B8u: {
            dd3_static_push8(rt,(uint8_t)(0xD0BAu>>8)); dd3_static_push8(rt,(uint8_t)0xD0BAu);
            rt->state.cpu.pc=0xE319u; return dd3_static_complete(rt,6u);
        }
        case 0xD0BBu: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD0BDu; return dd3_static_complete(rt,3u);
        }
        case 0xD0BDu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD0BFu; return dd3_static_complete(rt,2u);
        }
        case 0xD0BFu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD0C1u,0xD0B1u)) c++; rt->state.cpu.pc=0xD0B1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD0C1u; return dd3_static_complete(rt,2u);
        }
        case 0xD0C1u: {
            dd3_static_push8(rt,(uint8_t)(0xD0C3u>>8)); dd3_static_push8(rt,(uint8_t)0xD0C3u);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xD0C4u: {
            uint8_t v=0xFCu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD0C6u; return dd3_static_complete(rt,2u);
        }
        case 0xD0C6u: {
            dd3_static_push8(rt,(uint8_t)(0xD0C8u>>8)); dd3_static_push8(rt,(uint8_t)0xD0C8u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xD0C9u: {
            dd3_static_push8(rt,(uint8_t)(0xD0CBu>>8)); dd3_static_push8(rt,(uint8_t)0xD0CBu);
            rt->state.cpu.pc=0xF2AFu; return dd3_static_complete(rt,6u);
        }
        case 0xD0CCu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD0CEu; return dd3_static_complete(rt,3u);
        }
        case 0xD0CEu: {
            uint8_t v=0xEFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD0D0u; return dd3_static_complete(rt,2u);
        }
        case 0xD0D0u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD0D2u; return dd3_static_complete(rt,3u);
        }
        case 0xD0D2u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD0D4u,0xD0EAu)) c++; rt->state.cpu.pc=0xD0EAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD0D4u; return dd3_static_complete(rt,2u);
        }
        case 0xD0D4u: {
            uint16_t ea=0x04D2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD0D7u; return dd3_static_complete(rt,4u);
        }
        case 0xD0D7u: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD0D9u; return dd3_static_complete(rt,3u);
        }
        case 0xD0D9u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD0DBu; return dd3_static_complete(rt,2u);
        }
        case 0xD0DBu: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD0DDu; return dd3_static_complete(rt,5u);
        }
        case 0xD0DDu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD0DFu,0xD0E4u)) c++; rt->state.cpu.pc=0xD0E4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD0DFu; return dd3_static_complete(rt,2u);
        }
        case 0xD0DFu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD0E1u; return dd3_static_complete(rt,2u);
        }
        case 0xD0E1u: {
            dd3_static_write8(rt,(uint16_t)(0x04D3u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xD0E4u; return dd3_static_complete(rt,5u);
        }
        case 0xD0E4u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD0E5u; return dd3_static_complete(rt,2u);
        }
        case 0xD0E5u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xD0E7u; return dd3_static_complete(rt,2u);
        }
        case 0xD0E7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD0E9u,0xD0DBu)) c++; rt->state.cpu.pc=0xD0DBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD0E9u; return dd3_static_complete(rt,2u);
        }
        case 0xD0E9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD0EAu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD0ECu; return dd3_static_complete(rt,2u);
        }
        case 0xD0ECu: {
            dd3_static_write8(rt,0xF3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD0EEu; return dd3_static_complete(rt,3u);
        }
        case 0xD0EEu: {
            dd3_static_write8(rt,0xF4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD0F0u; return dd3_static_complete(rt,3u);
        }
        case 0xD0F0u: {
            dd3_static_write8(rt,0x04D2u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD0F3u; return dd3_static_complete(rt,4u);
        }
        case 0xD0F3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD17Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD181u; return dd3_static_complete(rt,2u);
        }
        case 0xD181u: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD183u; return dd3_static_complete(rt,3u);
        }
        case 0xD183u: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD186u; return dd3_static_complete(rt,6u);
        }
        case 0xD186u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD188u; return dd3_static_complete(rt,3u);
        }
        case 0xD188u: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD18Au; return dd3_static_complete(rt,2u);
        }
        case 0xD18Au: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD18Cu; return dd3_static_complete(rt,3u);
        }
        case 0xD18Cu: {
            uint16_t ea=0x046Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD18Fu; return dd3_static_complete(rt,4u);
        }
        case 0xD18Fu: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD191u; return dd3_static_complete(rt,3u);
        }
        case 0xD191u: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD193u; return dd3_static_complete(rt,2u);
        }
        case 0xD193u: {
            uint16_t ea=(uint16_t)(0xF1DFu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD196u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xF1DFu,ea)?1u:0u));
        }
        case 0xD196u: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD198u; return dd3_static_complete(rt,3u);
        }
        case 0xD198u: {
            dd3_static_push8(rt,(uint8_t)(0xD19Au>>8)); dd3_static_push8(rt,(uint8_t)0xD19Au);
            rt->state.cpu.pc=0xE319u; return dd3_static_complete(rt,6u);
        }
        case 0xD19Bu: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD19Du; return dd3_static_complete(rt,3u);
        }
        case 0xD19Du: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD19Fu; return dd3_static_complete(rt,2u);
        }
        case 0xD19Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD1A1u,0xD17Fu)) c++; rt->state.cpu.pc=0xD17Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD1A1u; return dd3_static_complete(rt,2u);
        }
        case 0xD1A1u: {
            dd3_static_push8(rt,(uint8_t)(0xD1A3u>>8)); dd3_static_push8(rt,(uint8_t)0xD1A3u);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xD1A4u: {
            uint8_t v=0xFCu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1A6u; return dd3_static_complete(rt,2u);
        }
        case 0xD1A6u: {
            dd3_static_push8(rt,(uint8_t)(0xD1A8u>>8)); dd3_static_push8(rt,(uint8_t)0xD1A8u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xD1A9u: {
            dd3_static_push8(rt,(uint8_t)(0xD1ABu>>8)); dd3_static_push8(rt,(uint8_t)0xD1ABu);
            rt->state.cpu.pc=0xF2AFu; return dd3_static_complete(rt,6u);
        }
        case 0xD1ACu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1AEu; return dd3_static_complete(rt,3u);
        }
        case 0xD1AEu: {
            uint8_t v=0xD7u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1B0u; return dd3_static_complete(rt,2u);
        }
        case 0xD1B0u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1B2u; return dd3_static_complete(rt,3u);
        }
        case 0xD1B2u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1B4u; return dd3_static_complete(rt,2u);
        }
        case 0xD1B4u: {
            dd3_static_write8(rt,0x04D3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1B7u; return dd3_static_complete(rt,4u);
        }
        case 0xD1B7u: {
            dd3_static_write8(rt,0x04D4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1BAu; return dd3_static_complete(rt,4u);
        }
        case 0xD1B9u: {
            uint16_t ea=0xA2u; (void)dd3_static_read8(rt,ea);
            rt->state.cpu.pc=0xD1BBu; return dd3_static_complete(rt,3u);
        }
        case 0xD1BAu: {
            uint8_t v=0x80u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1BCu; return dd3_static_complete(rt,2u);
        }
        case 0xD1BBu: {
            (void)0xADu;
            rt->state.cpu.pc=0xD1BDu; return dd3_static_complete(rt,2u);
        }
        case 0xD1BCu: {
            uint16_t ea=0x04D2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1BFu; return dd3_static_complete(rt,4u);
        }
        case 0xD1BDu: {
            rt->stopped=1u; rt->error_code=DD3_STATIC_ERR_UNPROVEN;
            snprintf(rt->error,sizeof(rt->error),"CPU JAM/KIL reached in generated context");
            return 0;
        }
        case 0xD1BFu: {
            uint8_t v=0xFCu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1C1u; return dd3_static_complete(rt,2u);
        }
        case 0xD1C1u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1C3u; return dd3_static_complete(rt,2u);
        }
        case 0xD1C3u: {
            dd3_static_write8(rt,0x04D3u,rt->state.cpu.x);
            rt->state.cpu.pc=0xD1C6u; return dd3_static_complete(rt,4u);
        }
        case 0xD1C6u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1C8u; return dd3_static_complete(rt,3u);
        }
        case 0xD1C8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD1CAu,0xD1CFu)) c++; rt->state.cpu.pc=0xD1CFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD1CAu; return dd3_static_complete(rt,2u);
        }
        case 0xD1CAu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1CCu; return dd3_static_complete(rt,2u);
        }
        case 0xD1CCu: {
            dd3_static_write8(rt,0x04D4u,rt->state.cpu.x);
            rt->state.cpu.pc=0xD1CFu; return dd3_static_complete(rt,4u);
        }
        case 0xD1CFu: {
            dd3_static_write8(rt,0x04D2u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1D2u; return dd3_static_complete(rt,4u);
        }
        case 0xD1D2u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1D4u; return dd3_static_complete(rt,2u);
        }
        case 0xD1D4u: {
            dd3_static_write8(rt,0x74u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1D6u; return dd3_static_complete(rt,3u);
        }
        case 0xD1D6u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1D8u; return dd3_static_complete(rt,3u);
        }
        case 0xD1D8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD1DAu,0xD1DEu)) c++; rt->state.cpu.pc=0xD1DEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD1DAu; return dd3_static_complete(rt,2u);
        }
        case 0xD1DAu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1DCu; return dd3_static_complete(rt,2u);
        }
        case 0xD1DCu: {
            dd3_static_write8(rt,0x75u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1DEu; return dd3_static_complete(rt,3u);
        }
        case 0xD1DEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD882u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD884u; return dd3_static_complete(rt,3u);
        }
        case 0xD884u: {
            uint16_t ea=(uint16_t)(0xFBF3u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD887u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xFBF3u,ea)?1u:0u));
        }
        case 0xD887u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD888u; return dd3_static_complete(rt,2u);
        }
        case 0xD888u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD88Au; return dd3_static_complete(rt,3u);
        }
        case 0xD88Au: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD88Bu; return dd3_static_complete(rt,2u);
        }
        case 0xD88Bu: {
            uint16_t ea=(uint16_t)(0xFC03u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD88Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xFC03u,ea)?1u:0u));
        }
        case 0xD88Eu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD890u,0xD8C3u)) c++; rt->state.cpu.pc=0xD8C3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD890u; return dd3_static_complete(rt,2u);
        }
        case 0xD88Fu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0xA0u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD891u; return dd3_static_complete(rt,8u);
        }
        case 0xD890u: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD892u; return dd3_static_complete(rt,2u);
        }
        case 0xD891u: {
            uint16_t ea=0xB1u; (void)dd3_static_read8(rt,ea);
            rt->state.cpu.pc=0xD893u; return dd3_static_complete(rt,3u);
        }
        case 0xD892u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD894u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD893u: {
            uint8_t v=0x29u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD895u; return dd3_static_complete(rt,2u);
        }
        case 0xD894u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD896u; return dd3_static_complete(rt,2u);
        }
        case 0xD895u: {
            uint16_t ea=(uint16_t)(0x00C9u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=v&1u; v=(uint8_t)((v>>1)|(c<<7)); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD898u; return dd3_static_complete(rt,7u);
        }
        case 0xD896u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xD898u; return dd3_static_complete(rt,2u);
        }
        case 0xD898u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD89Au,0xD8A5u)) c++; rt->state.cpu.pc=0xD8A5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD89Au; return dd3_static_complete(rt,2u);
        }
        case 0xD89Au: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xD89Cu; return dd3_static_complete(rt,2u);
        }
        case 0xD89Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD89Eu,0xD8A5u)) c++; rt->state.cpu.pc=0xD8A5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD89Eu; return dd3_static_complete(rt,2u);
        }
        case 0xD89Eu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xD8A0u; return dd3_static_complete(rt,2u);
        }
        case 0xD8A0u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD8A2u,0xD8A5u)) c++; rt->state.cpu.pc=0xD8A5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD8A2u; return dd3_static_complete(rt,2u);
        }
        case 0xD8A2u: {
            rt->state.cpu.pc=0xF8C3u; return dd3_static_complete(rt,3u);
        }
        case 0xD8A5u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8A7u; return dd3_static_complete(rt,2u);
        }
        case 0xD8A7u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8A9u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD8A9u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8ABu; return dd3_static_complete(rt,3u);
        }
        case 0xD8ABu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD8ACu; return dd3_static_complete(rt,2u);
        }
        case 0xD8ACu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8AEu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD8AEu: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8B0u; return dd3_static_complete(rt,3u);
        }
        case 0xD8B0u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD8B1u; return dd3_static_complete(rt,2u);
        }
        case 0xD8B1u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8B3u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD8B3u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8B5u; return dd3_static_complete(rt,3u);
        }
        case 0xD8B5u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD8B6u; return dd3_static_complete(rt,2u);
        }
        case 0xD8B6u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8B8u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD8B8u: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8BAu; return dd3_static_complete(rt,3u);
        }
        case 0xD8BAu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8BCu; return dd3_static_complete(rt,2u);
        }
        case 0xD8BCu: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8BEu; return dd3_static_complete(rt,3u);
        }
        case 0xD8BEu: {
            dd3_static_write8(rt,0x20u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8C0u; return dd3_static_complete(rt,3u);
        }
        case 0xD8C0u: {
            dd3_static_push8(rt,(uint8_t)(0xD8C2u>>8)); dd3_static_push8(rt,(uint8_t)0xD8C2u);
            rt->state.cpu.pc=0xF8DEu; return dd3_static_complete(rt,6u);
        }
        case 0xD8C3u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8C5u; return dd3_static_complete(rt,3u);
        }
        case 0xD8C5u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD8C6u; return dd3_static_complete(rt,2u);
        }
        case 0xD8C6u: {
            uint8_t v=0x05u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD8C8u; return dd3_static_complete(rt,2u);
        }
        case 0xD8C8u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8CAu; return dd3_static_complete(rt,3u);
        }
        case 0xD8CAu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8CCu; return dd3_static_complete(rt,3u);
        }
        case 0xD8CCu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD8CEu; return dd3_static_complete(rt,2u);
        }
        case 0xD8CEu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8D0u; return dd3_static_complete(rt,3u);
        }
        case 0xD8D0u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD8D2u; return dd3_static_complete(rt,5u);
        }
        case 0xD8D2u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD8D4u; return dd3_static_complete(rt,5u);
        }
        case 0xD8D4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD8D6u,0xD882u)) c++; rt->state.cpu.pc=0xD882u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD8D6u; return dd3_static_complete(rt,2u);
        }
        case 0xD8D6u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8D7u; return dd3_static_complete(rt,4u);
        }
        case 0xD8D7u: {
            dd3_static_push8(rt,(uint8_t)(0xD8D9u>>8)); dd3_static_push8(rt,(uint8_t)0xD8D9u);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xD8DAu: {
            uint16_t ea=0x09u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8DCu; return dd3_static_complete(rt,3u);
        }
        case 0xD8DCu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8DDu; return dd3_static_complete(rt,2u);
        }
        case 0xD8DDu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD920u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD921u; return dd3_static_complete(rt,2u);
        }
        case 0xD921u: {
            uint16_t ea=0x1Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD923u; return dd3_static_complete(rt,3u);
        }
        case 0xD923u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD925u,0xD92Cu)) c++; rt->state.cpu.pc=0xD92Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD925u; return dd3_static_complete(rt,2u);
        }
        case 0xD925u: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xD927u; return dd3_static_complete(rt,2u);
        }
        case 0xD927u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD929u,0xD934u)) c++; rt->state.cpu.pc=0xD934u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD929u; return dd3_static_complete(rt,2u);
        }
        case 0xD929u: {
            rt->state.cpu.pc=0xFA3Au; return dd3_static_complete(rt,3u);
        }
        case 0xD92Cu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD92Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD92Eu: {
            dd3_static_write8(rt,0x1Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xD930u; return dd3_static_complete(rt,3u);
        }
        case 0xD930u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD932u; return dd3_static_complete(rt,3u);
        }
        case 0xD932u: {
            dd3_static_write8(rt,0x1Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD934u; return dd3_static_complete(rt,3u);
        }
        case 0xD934u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD936u; return dd3_static_complete(rt,3u);
        }
        case 0xD936u: {
            dd3_static_write8(rt,0x25u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD938u; return dd3_static_complete(rt,3u);
        }
        case 0xD938u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD939u; return dd3_static_complete(rt,2u);
        }
        case 0xD939u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD93Bu; return dd3_static_complete(rt,3u);
        }
        case 0xD93Bu: {
            uint16_t ea=0x20u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD93Du; return dd3_static_complete(rt,3u);
        }
        case 0xD93Du: {
            dd3_static_write8(rt,0x26u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD93Fu; return dd3_static_complete(rt,3u);
        }
        case 0xD93Fu: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD941u; return dd3_static_complete(rt,3u);
        }
        case 0xD941u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD943u,0xD946u)) c++; rt->state.cpu.pc=0xD946u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD943u; return dd3_static_complete(rt,2u);
        }
        case 0xD943u: {
            rt->state.cpu.pc=0xFA3Au; return dd3_static_complete(rt,3u);
        }
        case 0xD946u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD948u,0xD951u)) c++; rt->state.cpu.pc=0xD951u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD948u; return dd3_static_complete(rt,2u);
        }
        case 0xD948u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD94Au; return dd3_static_complete(rt,3u);
        }
        case 0xD94Au: {
            dd3_static_write8(rt,0x25u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD94Cu; return dd3_static_complete(rt,3u);
        }
        case 0xD94Cu: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD94Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD94Eu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD94Fu; return dd3_static_complete(rt,2u);
        }
        case 0xD94Fu: {
            dd3_static_write8(rt,0x26u,rt->state.cpu.x);
            rt->state.cpu.pc=0xD951u; return dd3_static_complete(rt,3u);
        }
        case 0xD951u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD953u; return dd3_static_complete(rt,3u);
        }
        case 0xD953u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD954u; return dd3_static_complete(rt,2u);
        }
        case 0xD954u: {
            uint16_t ea=0x23u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD956u; return dd3_static_complete(rt,3u);
        }
        case 0xD956u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD958u; return dd3_static_complete(rt,3u);
        }
        case 0xD957u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD958u; return dd3_static_complete(rt,2u);
        }
        case 0xD958u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD95Au; return dd3_static_complete(rt,3u);
        }
        case 0xD95Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD95Cu,0xD963u)) c++; rt->state.cpu.pc=0xD963u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD95Cu; return dd3_static_complete(rt,2u);
        }
        case 0xD95Cu: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xD95Eu; return dd3_static_complete(rt,2u);
        }
        case 0xD95Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD960u,0xD96Bu)) c++; rt->state.cpu.pc=0xD96Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD960u; return dd3_static_complete(rt,2u);
        }
        case 0xD960u: {
            rt->state.cpu.pc=0xFA3Au; return dd3_static_complete(rt,3u);
        }
        case 0xD963u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD965u; return dd3_static_complete(rt,3u);
        }
        case 0xD965u: {
            dd3_static_write8(rt,0x23u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD967u; return dd3_static_complete(rt,3u);
        }
        case 0xD967u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD969u; return dd3_static_complete(rt,3u);
        }
        case 0xD969u: {
            dd3_static_write8(rt,0x24u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD96Bu; return dd3_static_complete(rt,3u);
        }
        case 0xD96Bu: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD96Du; return dd3_static_complete(rt,3u);
        }
        case 0xD96Du: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD96Eu; return dd3_static_complete(rt,2u);
        }
        case 0xD96Eu: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD970u; return dd3_static_complete(rt,3u);
        }
        case 0xD970u: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD972u; return dd3_static_complete(rt,3u);
        }
        case 0xD972u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD974u; return dd3_static_complete(rt,3u);
        }
        case 0xD974u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD976u,0xD979u)) c++; rt->state.cpu.pc=0xD979u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD976u; return dd3_static_complete(rt,2u);
        }
        case 0xD976u: {
            rt->state.cpu.pc=0xFA3Au; return dd3_static_complete(rt,3u);
        }
        case 0xD979u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD97Bu,0xD988u)) c++; rt->state.cpu.pc=0xD988u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD97Bu; return dd3_static_complete(rt,2u);
        }
        case 0xD97Bu: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD97Du; return dd3_static_complete(rt,3u);
        }
        case 0xD97Du: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD97Eu; return dd3_static_complete(rt,2u);
        }
        case 0xD97Eu: {
            uint8_t v=0xF0u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD980u; return dd3_static_complete(rt,2u);
        }
        case 0xD980u: {
            dd3_static_write8(rt,0x21u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD982u; return dd3_static_complete(rt,3u);
        }
        case 0xD982u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD984u; return dd3_static_complete(rt,3u);
        }
        case 0xD984u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD986u; return dd3_static_complete(rt,2u);
        }
        case 0xD986u: {
            dd3_static_write8(rt,0x22u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD988u; return dd3_static_complete(rt,3u);
        }
        case 0xD988u: {
            uint16_t ea=0x1Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD98Au; return dd3_static_complete(rt,3u);
        }
        case 0xD98Au: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD98Bu; return dd3_static_complete(rt,2u);
        }
        case 0xD98Bu: {
            uint16_t ea=0x25u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD98Du; return dd3_static_complete(rt,3u);
        }
        case 0xD98Du: {
            dd3_static_write8(rt,0x1Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xD98Fu; return dd3_static_complete(rt,3u);
        }
        case 0xD98Fu: {
            uint16_t ea=0x1Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD991u; return dd3_static_complete(rt,3u);
        }
        case 0xD991u: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD993u; return dd3_static_complete(rt,3u);
        }
        case 0xD993u: {
            dd3_static_write8(rt,0x1Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD995u; return dd3_static_complete(rt,3u);
        }
        case 0xD995u: {
            uint16_t ea=0x1Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD997u; return dd3_static_complete(rt,5u);
        }
        case 0xD997u: {
            uint16_t ea=0x1Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=v&1u; v=(uint8_t)((v>>1)|(c<<7)); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD999u; return dd3_static_complete(rt,5u);
        }
        case 0xD999u: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD99Bu; return dd3_static_complete(rt,3u);
        }
        case 0xD99Bu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD99Cu; return dd3_static_complete(rt,2u);
        }
        case 0xD99Cu: {
            uint16_t ea=0x23u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD99Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD99Eu: {
            dd3_static_write8(rt,0x21u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD9A0u; return dd3_static_complete(rt,3u);
        }
        case 0xD9A0u: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD9A2u; return dd3_static_complete(rt,3u);
        }
        case 0xD9A2u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD9A4u; return dd3_static_complete(rt,3u);
        }
        case 0xD9A4u: {
            dd3_static_write8(rt,0x22u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD9A6u; return dd3_static_complete(rt,3u);
        }
        case 0xD9A6u: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD9A8u; return dd3_static_complete(rt,5u);
        }
        case 0xD9A8u: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=v&1u; v=(uint8_t)((v>>1)|(c<<7)); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD9AAu; return dd3_static_complete(rt,5u);
        }
        case 0xD9AAu: {
            uint16_t ea=0x10u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD9ACu; return dd3_static_complete(rt,3u);
        }
        case 0xD9ACu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD9ADu; return dd3_static_complete(rt,2u);
        }
        case 0xD9ADu: {
            uint16_t ea=0x1Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD9AFu; return dd3_static_complete(rt,3u);
        }
        case 0xD9AFu: {
            dd3_static_write8(rt,0x25u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD9B1u; return dd3_static_complete(rt,3u);
        }
        case 0xD9B1u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD9B3u; return dd3_static_complete(rt,3u);
        }
        case 0xD9B3u: {
            uint16_t ea=0x1Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD9B5u; return dd3_static_complete(rt,3u);
        }
        case 0xD9B5u: {
            dd3_static_write8(rt,0x26u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD9B7u; return dd3_static_complete(rt,3u);
        }
        case 0xD9B7u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD9B9u,0xD9C6u)) c++; rt->state.cpu.pc=0xD9C6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD9B9u; return dd3_static_complete(rt,2u);
        }
        case 0xD9B9u: {
            uint16_t ea=0x1Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD9BBu; return dd3_static_complete(rt,3u);
        }
        case 0xD9BBu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD9BCu; return dd3_static_complete(rt,2u);
        }
        case 0xD9BCu: {
            uint16_t ea=0x10u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD9BEu; return dd3_static_complete(rt,3u);
        }
        case 0xD9BEu: {
            dd3_static_write8(rt,0x25u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD9C0u; return dd3_static_complete(rt,3u);
        }
        case 0xD9C0u: {
            uint16_t ea=0x1Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD9C2u; return dd3_static_complete(rt,3u);
        }
        case 0xD9C2u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD9C4u; return dd3_static_complete(rt,3u);
        }
        case 0xD9C4u: {
            dd3_static_write8(rt,0x26u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD9C6u; return dd3_static_complete(rt,3u);
        }
        case 0xD9C6u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD9C8u,0xDA3Au)) c++; rt->state.cpu.pc=0xDA3Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD9C8u; return dd3_static_complete(rt,2u);
        }
        case 0xD9C8u: {
            uint16_t ea=0x25u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD9CAu; return dd3_static_complete(rt,3u);
        }
        case 0xD9CAu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD9CBu; return dd3_static_complete(rt,2u);
        }
        case 0xD9CBu: {
            uint8_t v=0x60u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD9CDu; return dd3_static_complete(rt,2u);
        }
        case 0xD9CDu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD9CFu,0xDA3Au)) c++; rt->state.cpu.pc=0xDA3Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD9CFu; return dd3_static_complete(rt,2u);
        }
        case 0xD9CFu: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD9D1u; return dd3_static_complete(rt,3u);
        }
        case 0xD9D1u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD9D2u; return dd3_static_complete(rt,2u);
        }
        case 0xD9D2u: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD9D4u; return dd3_static_complete(rt,3u);
        }
        case 0xD9D4u: {
            dd3_static_write8(rt,0x27u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD9D6u; return dd3_static_complete(rt,3u);
        }
        case 0xD9D6u: {
            uint16_t ea=0x13u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD9D8u; return dd3_static_complete(rt,3u);
        }
        case 0xD9D8u: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD9DAu; return dd3_static_complete(rt,3u);
        }
        case 0xD9DAu: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD9DCu; return dd3_static_complete(rt,3u);
        }
        case 0xD9DCu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD9DEu,0xD9EBu)) c++; rt->state.cpu.pc=0xD9EBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD9DEu; return dd3_static_complete(rt,2u);
        }
        case 0xD9DEu: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD9E0u; return dd3_static_complete(rt,3u);
        }
        case 0xD9E0u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD9E1u; return dd3_static_complete(rt,2u);
        }
        case 0xD9E1u: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD9E3u; return dd3_static_complete(rt,3u);
        }
        case 0xD9E3u: {
            dd3_static_write8(rt,0x27u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD9E5u; return dd3_static_complete(rt,3u);
        }
        case 0xD9E5u: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD9E7u; return dd3_static_complete(rt,3u);
        }
        case 0xD9E7u: {
            uint16_t ea=0x13u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD9E9u; return dd3_static_complete(rt,3u);
        }
        case 0xD9E9u: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD9EBu; return dd3_static_complete(rt,3u);
        }
        case 0xD9EBu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD9EDu,0xDA3Au)) c++; rt->state.cpu.pc=0xDA3Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD9EDu; return dd3_static_complete(rt,2u);
        }
        case 0xD9EDu: {
            uint16_t ea=0x27u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD9EFu; return dd3_static_complete(rt,3u);
        }
        case 0xD9EFu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD9F0u; return dd3_static_complete(rt,2u);
        }
        case 0xD9F0u: {
            uint8_t v=0x40u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD9F2u; return dd3_static_complete(rt,2u);
        }
        case 0xD9F2u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD9F4u,0xDA3Au)) c++; rt->state.cpu.pc=0xDA3Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD9F4u; return dd3_static_complete(rt,2u);
        }
        case 0xD9F4u: {
            dd3_static_push8(rt,(uint8_t)(0xD9F6u>>8)); dd3_static_push8(rt,(uint8_t)0xD9F6u);
            rt->state.cpu.pc=0xCE91u; return dd3_static_complete(rt,6u);
        }
        case 0xD9F7u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD9F9u; return dd3_static_complete(rt,3u);
        }
        case 0xD9F9u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD9FAu; return dd3_static_complete(rt,2u);
        }
        case 0xD9FAu: {
            uint16_t ea=0x25u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD9FCu; return dd3_static_complete(rt,3u);
        }
        case 0xD9FCu: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD9FEu; return dd3_static_complete(rt,3u);
        }
        case 0xD9FEu: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xDA00u; return dd3_static_complete(rt,3u);
        }
        case 0xDA00u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDA02u,0xDA3Au)) c++; rt->state.cpu.pc=0xDA3Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDA02u; return dd3_static_complete(rt,2u);
        }
        case 0xDA02u: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA04u; return dd3_static_complete(rt,3u);
        }
        case 0xDA04u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xDA06u; return dd3_static_complete(rt,3u);
        }
        case 0xDA06u: {
            dd3_static_write8(rt,0x21u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA08u; return dd3_static_complete(rt,3u);
        }
        case 0xDA08u: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA0Au; return dd3_static_complete(rt,3u);
        }
        case 0xDA0Au: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xDA0Cu; return dd3_static_complete(rt,3u);
        }
        case 0xDA0Cu: {
            dd3_static_write8(rt,0x22u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA0Eu; return dd3_static_complete(rt,3u);
        }
        case 0xDA0Eu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA10u; return dd3_static_complete(rt,3u);
        }
        case 0xDA10u: {
            dd3_static_write8(rt,0x09u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA12u; return dd3_static_complete(rt,3u);
        }
        case 0xDA12u: {
            uint16_t ea=0x1Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA14u; return dd3_static_complete(rt,3u);
        }
        case 0xDA14u: {
            dd3_static_write8(rt,0x0Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA16u; return dd3_static_complete(rt,3u);
        }
        case 0xDA16u: {
            uint16_t ea=0x1Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA18u; return dd3_static_complete(rt,3u);
        }
        case 0xDA18u: {
            dd3_static_write8(rt,0x0Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA1Au; return dd3_static_complete(rt,3u);
        }
        case 0xDA1Au: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA1Cu; return dd3_static_complete(rt,3u);
        }
        case 0xDA1Cu: {
            dd3_static_write8(rt,0x0Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA1Eu; return dd3_static_complete(rt,3u);
        }
        case 0xDA1Eu: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA20u; return dd3_static_complete(rt,3u);
        }
        case 0xDA20u: {
            dd3_static_write8(rt,0x0Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA22u; return dd3_static_complete(rt,3u);
        }
        case 0xDA22u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA24u; return dd3_static_complete(rt,3u);
        }
        case 0xDA24u: {
            dd3_static_write8(rt,0x0Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA26u; return dd3_static_complete(rt,3u);
        }
        case 0xDA26u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA28u; return dd3_static_complete(rt,3u);
        }
        case 0xDA28u: {
            dd3_static_write8(rt,0x0Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA2Au; return dd3_static_complete(rt,3u);
        }
        case 0xDA2Au: {
            uint16_t ea=0x25u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA2Cu; return dd3_static_complete(rt,3u);
        }
        case 0xDA2Cu: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA2Eu; return dd3_static_complete(rt,3u);
        }
        case 0xDA2Eu: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA30u; return dd3_static_complete(rt,3u);
        }
        case 0xDA30u: {
            dd3_static_write8(rt,0x05u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA32u; return dd3_static_complete(rt,3u);
        }
        case 0xDA32u: {
            uint16_t ea=0x27u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA34u; return dd3_static_complete(rt,3u);
        }
        case 0xDA34u: {
            dd3_static_write8(rt,0x06u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA36u; return dd3_static_complete(rt,3u);
        }
        case 0xDA36u: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA38u; return dd3_static_complete(rt,3u);
        }
        case 0xDA38u: {
            dd3_static_write8(rt,0x07u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA3Au; return dd3_static_complete(rt,3u);
        }
        case 0xDA3Au: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA3Bu; return dd3_static_complete(rt,4u);
        }
        case 0xDA3Bu: {
            dd3_static_write8(rt,0x20u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA3Du; return dd3_static_complete(rt,3u);
        }
        case 0xDA3Du: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA3Eu; return dd3_static_complete(rt,4u);
        }
        case 0xDA3Eu: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA40u; return dd3_static_complete(rt,3u);
        }
        case 0xDA40u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA42u; return dd3_static_complete(rt,2u);
        }
        case 0xDA42u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA44u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xDA44u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xDA46u,0xDA47u)) c++; rt->state.cpu.pc=0xDA47u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDA46u; return dd3_static_complete(rt,2u);
        }
        case 0xDA46u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xDA47u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA49u; return dd3_static_complete(rt,3u);
        }
        case 0xDA49u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xDA4Au; return dd3_static_complete(rt,2u);
        }
        case 0xDA4Au: {
            uint8_t v=0x04u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xDA4Cu; return dd3_static_complete(rt,2u);
        }
        case 0xDA4Cu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA4Eu; return dd3_static_complete(rt,3u);
        }
        case 0xDA4Eu: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDA50u; return dd3_static_complete(rt,3u);
        }
        case 0xDA50u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xDA52u; return dd3_static_complete(rt,2u);
        }
        case 0xDA52u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDA54u; return dd3_static_complete(rt,3u);
        }
        case 0xDA54u: {
            rt->state.cpu.pc=0xF8DEu; return dd3_static_complete(rt,3u);
        }
        case 0xDBCAu: {
            dd3_static_write8(rt,0x1Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xDBCCu; return dd3_static_complete(rt,3u);
        }
        case 0xDBCCu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDBCDu; return dd3_static_complete(rt,2u);
        }
        case 0xDBCDu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDBCFu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Du),ea)?1u:0u));
        }
        case 0xDBCFu: {
            dd3_static_write8(rt,0x1Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDBD1u; return dd3_static_complete(rt,3u);
        }
        case 0xDBD1u: {
            rt->state.cpu.pc=0xFBD4u; return dd3_static_complete(rt,3u);
        }
        case 0xE070u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE071u; return dd3_static_complete(rt,3u);
        }
        case 0xE071u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE072u; return dd3_static_complete(rt,2u);
        }
        case 0xE072u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE073u; return dd3_static_complete(rt,3u);
        }
        case 0xE073u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE074u; return dd3_static_complete(rt,2u);
        }
        case 0xE074u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE075u; return dd3_static_complete(rt,3u);
        }
        case 0xE075u: {
            dd3_static_push8(rt,(uint8_t)(0xE077u>>8)); dd3_static_push8(rt,(uint8_t)0xE077u);
            rt->state.cpu.pc=0xFE75u; return dd3_static_complete(rt,6u);
        }
        case 0xE078u: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xE07Au; return dd3_static_complete(rt,5u);
        }
        case 0xE07Au: {
            uint16_t ea=0xABu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE07Cu; return dd3_static_complete(rt,3u);
        }
        case 0xE07Cu: {
            uint16_t ea=(uint16_t)(0xE0A5u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE07Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE0A5u,ea)?1u:0u));
        }
        case 0xE07Fu: {
            uint16_t ea=0xA1u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE081u; return dd3_static_complete(rt,3u);
        }
        case 0xE081u: {
            dd3_static_write8(rt,0xC000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE084u; return dd3_static_complete(rt,4u);
        }
        case 0xE084u: {
            dd3_static_write8(rt,0xC001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE087u; return dd3_static_complete(rt,4u);
        }
        case 0xE087u: {
            dd3_static_write8(rt,(uint16_t)(0xE000u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE08Au; return dd3_static_complete(rt,5u);
        }
        case 0xE08Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE08Cu; return dd3_static_complete(rt,2u);
        }
        case 0xE08Cu: {
            dd3_static_write8(rt,0x39u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE08Eu; return dd3_static_complete(rt,3u);
        }
        case 0xE08Eu: {
            dd3_static_push8(rt,(uint8_t)(0xE090u>>8)); dd3_static_push8(rt,(uint8_t)0xE090u);
            rt->state.cpu.pc=0xFED7u; return dd3_static_complete(rt,6u);
        }
        case 0xE091u: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE093u; return dd3_static_complete(rt,3u);
        }
        case 0xE093u: {
            dd3_static_write8(rt,0x2001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE096u; return dd3_static_complete(rt,4u);
        }
        case 0xE096u: {
            dd3_static_push8(rt,(uint8_t)(0xE098u>>8)); dd3_static_push8(rt,(uint8_t)0xE098u);
            rt->state.cpu.pc=0xC5EAu; return dd3_static_complete(rt,6u);
        }
        case 0xE099u: {
            dd3_static_push8(rt,(uint8_t)(0xE09Bu>>8)); dd3_static_push8(rt,(uint8_t)0xE09Bu);
            rt->state.cpu.pc=0xF2F8u; return dd3_static_complete(rt,6u);
        }
        case 0xE09Cu: {
            dd3_static_push8(rt,(uint8_t)(0xE09Eu>>8)); dd3_static_push8(rt,(uint8_t)0xE09Eu);
            rt->state.cpu.pc=0xFD9Eu; return dd3_static_complete(rt,6u);
        }
        case 0xE09Fu: {
            dd3_static_push8(rt,(uint8_t)(0xE0A1u>>8)); dd3_static_push8(rt,(uint8_t)0xE0A1u);
            rt->state.cpu.pc=0xFC53u; return dd3_static_complete(rt,6u);
        }
        case 0xE0A2u: {
            rt->state.cpu.pc=0xE169u; return dd3_static_complete(rt,3u);
        }
        case 0xE0A9u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0AAu; return dd3_static_complete(rt,3u);
        }
        case 0xE0AAu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0ABu; return dd3_static_complete(rt,2u);
        }
        case 0xE0ABu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0ACu; return dd3_static_complete(rt,3u);
        }
        case 0xE0ACu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0ADu; return dd3_static_complete(rt,2u);
        }
        case 0xE0ADu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0AEu; return dd3_static_complete(rt,3u);
        }
        case 0xE0AEu: {
            uint16_t ea=0xA7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE0B0u; return dd3_static_complete(rt,3u);
        }
        case 0xE0B0u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE0B2u,0xE0D3u)) c++; rt->state.cpu.pc=0xE0D3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE0B2u; return dd3_static_complete(rt,2u);
        }
        case 0xE0B2u: {
            uint16_t ea=0xA7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE0B4u; return dd3_static_complete(rt,3u);
        }
        case 0xE0B4u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0B6u; return dd3_static_complete(rt,2u);
        }
        case 0xE0B6u: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0B8u; return dd3_static_complete(rt,3u);
        }
        case 0xE0B8u: {
            dd3_static_push8(rt,(uint8_t)(0xE0BAu>>8)); dd3_static_push8(rt,(uint8_t)0xE0BAu);
            rt->state.cpu.pc=0xC5EAu; return dd3_static_complete(rt,6u);
        }
        case 0xE0BBu: {
            dd3_static_push8(rt,(uint8_t)(0xE0BDu>>8)); dd3_static_push8(rt,(uint8_t)0xE0BDu);
            rt->state.cpu.pc=0xF0F4u; return dd3_static_complete(rt,6u);
        }
        case 0xE0BEu: {
            dd3_static_push8(rt,(uint8_t)(0xE0C0u>>8)); dd3_static_push8(rt,(uint8_t)0xE0C0u);
            rt->state.cpu.pc=0xF201u; return dd3_static_complete(rt,6u);
        }
        case 0xE0C1u: {
            dd3_static_push8(rt,(uint8_t)(0xE0C3u>>8)); dd3_static_push8(rt,(uint8_t)0xE0C3u);
            rt->state.cpu.pc=0xF240u; return dd3_static_complete(rt,6u);
        }
        case 0xE0C4u: {
            dd3_static_push8(rt,(uint8_t)(0xE0C6u>>8)); dd3_static_push8(rt,(uint8_t)0xE0C6u);
            rt->state.cpu.pc=0xF337u; return dd3_static_complete(rt,6u);
        }
        case 0xE0C7u: {
            dd3_static_push8(rt,(uint8_t)(0xE0C9u>>8)); dd3_static_push8(rt,(uint8_t)0xE0C9u);
            rt->state.cpu.pc=0xFD9Eu; return dd3_static_complete(rt,6u);
        }
        case 0xE0CAu: {
            dd3_static_push8(rt,(uint8_t)(0xE0CCu>>8)); dd3_static_push8(rt,(uint8_t)0xE0CCu);
            rt->state.cpu.pc=0xFC53u; return dd3_static_complete(rt,6u);
        }
        case 0xE0CDu: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xE0CFu; return dd3_static_complete(rt,5u);
        }
        case 0xE0CFu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE0D1u; return dd3_static_complete(rt,2u);
        }
        case 0xE0D1u: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0D3u; return dd3_static_complete(rt,3u);
        }
        case 0xE0D3u: {
            rt->state.cpu.pc=0xE169u; return dd3_static_complete(rt,3u);
        }
        case 0xE0D6u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0D7u; return dd3_static_complete(rt,3u);
        }
        case 0xE0D7u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0D8u; return dd3_static_complete(rt,2u);
        }
        case 0xE0D8u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0D9u; return dd3_static_complete(rt,3u);
        }
        case 0xE0D9u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0DAu; return dd3_static_complete(rt,2u);
        }
        case 0xE0DAu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0DBu; return dd3_static_complete(rt,3u);
        }
        case 0xE0DBu: {
            dd3_static_push8(rt,(uint8_t)(0xE0DDu>>8)); dd3_static_push8(rt,(uint8_t)0xE0DDu);
            rt->state.cpu.pc=0xFE75u; return dd3_static_complete(rt,6u);
        }
        case 0xE0DEu: {
            uint16_t ea=0xA2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE0E0u; return dd3_static_complete(rt,3u);
        }
        case 0xE0E0u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0E1u; return dd3_static_complete(rt,3u);
        }
        case 0xE0E1u: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE0E4u; return dd3_static_complete(rt,4u);
        }
        case 0xE0E4u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0E5u; return dd3_static_complete(rt,3u);
        }
        case 0xE0E5u: {
            dd3_static_push8(rt,(uint8_t)(0xE0E7u>>8)); dd3_static_push8(rt,(uint8_t)0xE0E7u);
            rt->state.cpu.pc=0xFED7u; return dd3_static_complete(rt,6u);
        }
        case 0xE0E8u: {
            dd3_static_push8(rt,(uint8_t)(0xE0EAu>>8)); dd3_static_push8(rt,(uint8_t)0xE0EAu);
            rt->state.cpu.pc=0xFEEEu; return dd3_static_complete(rt,6u);
        }
        case 0xE0EBu: {
            uint16_t ea=0x06DAu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE0EEu; return dd3_static_complete(rt,4u);
        }
        case 0xE0EEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE0F0u,0xE10Du)) c++; rt->state.cpu.pc=0xE10Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE0F0u; return dd3_static_complete(rt,2u);
        }
        case 0xE0F0u: {
            uint16_t ea=0x06DBu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE0F3u; return dd3_static_complete(rt,4u);
        }
        case 0xE0F3u: {
            dd3_static_write8(rt,0x04E6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0F6u; return dd3_static_complete(rt,4u);
        }
        case 0xE0F6u: {
            uint16_t ea=0x06DCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE0F9u; return dd3_static_complete(rt,4u);
        }
        case 0xE0F9u: {
            dd3_static_write8(rt,0x04E7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE0FCu; return dd3_static_complete(rt,4u);
        }
        case 0xE0FCu: {
            uint16_t ea=0x06DDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE0FFu; return dd3_static_complete(rt,4u);
        }
        case 0xE0FFu: {
            dd3_static_write8(rt,0x04E8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE102u; return dd3_static_complete(rt,4u);
        }
        case 0xE102u: {
            uint16_t ea=0x06DEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE105u; return dd3_static_complete(rt,4u);
        }
        case 0xE105u: {
            dd3_static_write8(rt,0x04E9u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE108u; return dd3_static_complete(rt,4u);
        }
        case 0xE108u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE10Au; return dd3_static_complete(rt,2u);
        }
        case 0xE10Au: {
            dd3_static_write8(rt,0x06DAu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE10Du; return dd3_static_complete(rt,4u);
        }
        case 0xE10Du: {
            uint16_t ea=0x17u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xE10Fu; return dd3_static_complete(rt,5u);
        }
        case 0xE10Fu: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE111u; return dd3_static_complete(rt,3u);
        }
        case 0xE111u: {
            dd3_static_write8(rt,0x2001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE114u; return dd3_static_complete(rt,4u);
        }
        case 0xE114u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE117u; return dd3_static_complete(rt,4u);
        }
        case 0xE117u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE11Au; return dd3_static_complete(rt,4u);
        }
        case 0xE11Au: {
            uint16_t ea=0xA7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE11Cu; return dd3_static_complete(rt,3u);
        }
        case 0xE11Cu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE11Eu,0xE15Cu)) c++; rt->state.cpu.pc=0xE15Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE11Eu; return dd3_static_complete(rt,2u);
        }
        case 0xE11Eu: {
            uint16_t ea=0xA7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE120u; return dd3_static_complete(rt,3u);
        }
        case 0xE120u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE122u; return dd3_static_complete(rt,2u);
        }
        case 0xE122u: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE124u; return dd3_static_complete(rt,3u);
        }
        case 0xE124u: {
            dd3_static_push8(rt,(uint8_t)(0xE126u>>8)); dd3_static_push8(rt,(uint8_t)0xE126u);
            rt->state.cpu.pc=0xC5EAu; return dd3_static_complete(rt,6u);
        }
        case 0xE127u: {
            uint16_t ea=0xAAu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE129u; return dd3_static_complete(rt,3u);
        }
        case 0xE129u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE12Bu,0xE133u)) c++; rt->state.cpu.pc=0xE133u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE12Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE12Bu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE12Du; return dd3_static_complete(rt,2u);
        }
        case 0xE12Du: {
            dd3_static_write8(rt,0xABu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE12Fu; return dd3_static_complete(rt,3u);
        }
        case 0xE12Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE131u; return dd3_static_complete(rt,2u);
        }
        case 0xE131u: {
            dd3_static_write8(rt,0xAAu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE133u; return dd3_static_complete(rt,3u);
        }
        case 0xE133u: {
            uint16_t ea=0xABu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE135u; return dd3_static_complete(rt,3u);
        }
        case 0xE135u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE137u,0xE13Bu)) c++; rt->state.cpu.pc=0xE13Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE137u; return dd3_static_complete(rt,2u);
        }
        case 0xE137u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE139u; return dd3_static_complete(rt,2u);
        }
        case 0xE139u: {
            dd3_static_write8(rt,0xA9u,rt->state.cpu.y);
            rt->state.cpu.pc=0xE13Bu; return dd3_static_complete(rt,3u);
        }
        case 0xE13Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE13Du; return dd3_static_complete(rt,2u);
        }
        case 0xE13Du: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE140u; return dd3_static_complete(rt,4u);
        }
        case 0xE140u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE143u; return dd3_static_complete(rt,4u);
        }
        case 0xE143u: {
            dd3_static_push8(rt,(uint8_t)(0xE145u>>8)); dd3_static_push8(rt,(uint8_t)0xE145u);
            rt->state.cpu.pc=0xD17Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE146u: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xE148u; return dd3_static_complete(rt,5u);
        }
        case 0xE148u: {
            uint16_t ea=0xABu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE14Au; return dd3_static_complete(rt,3u);
        }
        case 0xE14Au: {
            uint16_t ea=(uint16_t)(0xE170u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE14Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE170u,ea)?1u:0u));
        }
        case 0xE14Du: {
            uint16_t ea=0xA1u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE14Fu; return dd3_static_complete(rt,3u);
        }
        case 0xE14Fu: {
            dd3_static_write8(rt,0xC000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE152u; return dd3_static_complete(rt,4u);
        }
        case 0xE152u: {
            dd3_static_write8(rt,0xC001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE155u; return dd3_static_complete(rt,4u);
        }
        case 0xE155u: {
            dd3_static_write8(rt,(uint16_t)(0xE000u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE158u; return dd3_static_complete(rt,5u);
        }
        case 0xE158u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE15Au; return dd3_static_complete(rt,2u);
        }
        case 0xE15Au: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE15Cu; return dd3_static_complete(rt,3u);
        }
        case 0xE15Cu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE15Du; return dd3_static_complete(rt,4u);
        }
        case 0xE15Du: {
            dd3_static_push8(rt,(uint8_t)(0xE15Fu>>8)); dd3_static_push8(rt,(uint8_t)0xE15Fu);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xE160u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE161u; return dd3_static_complete(rt,4u);
        }
        case 0xE161u: {
            dd3_static_write8(rt,0xA2u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE163u; return dd3_static_complete(rt,3u);
        }
        case 0xE163u: {
            dd3_static_write8(rt,0x8000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE166u; return dd3_static_complete(rt,4u);
        }
        case 0xE166u: {
            dd3_static_push8(rt,(uint8_t)(0xE168u>>8)); dd3_static_push8(rt,(uint8_t)0xE168u);
            rt->state.cpu.pc=0xCDB4u; return dd3_static_complete(rt,6u);
        }
        case 0xE169u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE16Au; return dd3_static_complete(rt,4u);
        }
        case 0xE16Au: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE16Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE16Bu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE16Cu; return dd3_static_complete(rt,4u);
        }
        case 0xE16Cu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE16Du; return dd3_static_complete(rt,2u);
        }
        case 0xE16Du: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE16Eu; return dd3_static_complete(rt,4u);
        }
        case 0xE16Eu: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt)); { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)((hi<<8)|lo); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE173u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE174u; return dd3_static_complete(rt,3u);
        }
        case 0xE174u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE175u; return dd3_static_complete(rt,2u);
        }
        case 0xE175u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE176u; return dd3_static_complete(rt,3u);
        }
        case 0xE176u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE177u; return dd3_static_complete(rt,2u);
        }
        case 0xE177u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE178u; return dd3_static_complete(rt,3u);
        }
        case 0xE178u: {
            dd3_static_write8(rt,0xE000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE17Bu; return dd3_static_complete(rt,4u);
        }
        case 0xE17Bu: {
            dd3_static_write8(rt,0xE001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE17Eu; return dd3_static_complete(rt,4u);
        }
        case 0xE17Eu: {
            uint16_t ea=0xA2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE180u; return dd3_static_complete(rt,3u);
        }
        case 0xE180u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE181u; return dd3_static_complete(rt,3u);
        }
        case 0xE181u: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE184u; return dd3_static_complete(rt,4u);
        }
        case 0xE184u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE185u; return dd3_static_complete(rt,3u);
        }
        case 0xE185u: {
            uint16_t ea=0xABu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE187u; return dd3_static_complete(rt,3u);
        }
        case 0xE187u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE188u; return dd3_static_complete(rt,2u);
        }
        case 0xE188u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE189u; return dd3_static_complete(rt,2u);
        }
        case 0xE189u: {
            uint16_t ea=(uint16_t)(0xE1A3u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE18Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE1A3u,ea)?1u:0u));
        }
        case 0xE18Cu: {
            dd3_static_write8(rt,0xAEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE18Eu; return dd3_static_complete(rt,3u);
        }
        case 0xE18Eu: {
            uint16_t ea=(uint16_t)(0xE1A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE191u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE1A4u,ea)?1u:0u));
        }
        case 0xE191u: {
            dd3_static_write8(rt,0xAFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE193u; return dd3_static_complete(rt,3u);
        }
        case 0xE193u: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x00AEu); return dd3_static_complete(rt,5u);
        }
        case 0xE196u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE197u; return dd3_static_complete(rt,4u);
        }
        case 0xE197u: {
            dd3_static_push8(rt,(uint8_t)(0xE199u>>8)); dd3_static_push8(rt,(uint8_t)0xE199u);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xE19Au: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE19Bu; return dd3_static_complete(rt,4u);
        }
        case 0xE19Bu: {
            dd3_static_write8(rt,0xA2u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE19Du; return dd3_static_complete(rt,3u);
        }
        case 0xE19Du: {
            dd3_static_write8(rt,0x8000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE1A0u; return dd3_static_complete(rt,4u);
        }
        case 0xE1A0u: {
            rt->state.cpu.pc=0xE169u; return dd3_static_complete(rt,3u);
        }
        case 0xE1ABu: {
            dd3_static_write8(rt,0xE000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE1AEu; return dd3_static_complete(rt,4u);
        }
        case 0xE1AEu: {
            uint8_t v=0x05u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE1B0u; return dd3_static_complete(rt,2u);
        }
        case 0xE1B0u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE1B1u; return dd3_static_complete(rt,2u);
        }
        case 0xE1B1u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE1B3u,0xE1B0u)) c++; rt->state.cpu.pc=0xE1B0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE1B3u; return dd3_static_complete(rt,2u);
        }
        case 0xE1B3u: {
            dd3_static_push8(rt,(uint8_t)(0xE1B5u>>8)); dd3_static_push8(rt,(uint8_t)0xE1B5u);
            rt->state.cpu.pc=0xF2B3u; return dd3_static_complete(rt,6u);
        }
        case 0xE1B6u: {
            dd3_static_push8(rt,(uint8_t)(0xE1B8u>>8)); dd3_static_push8(rt,(uint8_t)0xE1B8u);
            rt->state.cpu.pc=0xFC53u; return dd3_static_complete(rt,6u);
        }
        case 0xE1B9u: {
            rt->state.cpu.pc=0xE196u; return dd3_static_complete(rt,3u);
        }
        case 0xE1BCu: {
            uint16_t ea=0x39u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE1BEu; return dd3_static_complete(rt,3u);
        }
        case 0xE1BEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE1C0u,0xE1D5u)) c++; rt->state.cpu.pc=0xE1D5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE1C0u; return dd3_static_complete(rt,2u);
        }
        case 0xE1C0u: {
            uint8_t v=0x48u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE1C2u; return dd3_static_complete(rt,2u);
        }
        case 0xE1C2u: {
            dd3_static_write8(rt,0xC000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE1C5u; return dd3_static_complete(rt,4u);
        }
        case 0xE1C5u: {
            uint16_t ea=0x06B1u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE1C8u; return dd3_static_complete(rt,4u);
        }
        case 0xE1C8u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE1CAu,0xE1D0u)) c++; rt->state.cpu.pc=0xE1D0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE1CAu; return dd3_static_complete(rt,2u);
        }
        case 0xE1CAu: {
            dd3_static_push8(rt,(uint8_t)(0xE1CCu>>8)); dd3_static_push8(rt,(uint8_t)0xE1CCu);
            rt->state.cpu.pc=0xD17Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE1CDu: {
            uint16_t ea=0x06B1u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xE1D0u; return dd3_static_complete(rt,6u);
        }
        case 0xE1D0u: {
            uint16_t ea=0x39u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xE1D2u; return dd3_static_complete(rt,5u);
        }
        case 0xE1D2u: {
            rt->state.cpu.pc=0xE196u; return dd3_static_complete(rt,3u);
        }
        case 0xE1D5u: {
            dd3_static_write8(rt,0xE000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE1D8u; return dd3_static_complete(rt,4u);
        }
        case 0xE1D8u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE1DAu; return dd3_static_complete(rt,2u);
        }
        case 0xE1DAu: {
            uint8_t v=0x7Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE1DCu; return dd3_static_complete(rt,2u);
        }
        case 0xE1DCu: {
            dd3_static_write8(rt,0x8000u,rt->state.cpu.x);
            rt->state.cpu.pc=0xE1DFu; return dd3_static_complete(rt,4u);
        }
        case 0xE1DFu: {
            dd3_static_write8(rt,0x8001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE1E2u; return dd3_static_complete(rt,4u);
        }
        case 0xE1E2u: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE1E4u; return dd3_static_complete(rt,2u);
        }
        case 0xE1E4u: {
            uint8_t v=0x7Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE1E6u; return dd3_static_complete(rt,2u);
        }
        case 0xE1E6u: {
            dd3_static_write8(rt,0x8000u,rt->state.cpu.x);
            rt->state.cpu.pc=0xE1E9u; return dd3_static_complete(rt,4u);
        }
        case 0xE1E9u: {
            dd3_static_write8(rt,0x8001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE1ECu; return dd3_static_complete(rt,4u);
        }
        case 0xE1ECu: {
            dd3_static_push8(rt,(uint8_t)(0xE1EEu>>8)); dd3_static_push8(rt,(uint8_t)0xE1EEu);
            rt->state.cpu.pc=0xF337u; return dd3_static_complete(rt,6u);
        }
        case 0xE1EFu: {
            uint16_t ea=0x39u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xE1F1u; return dd3_static_complete(rt,5u);
        }
        case 0xE1F1u: {
            rt->state.cpu.pc=0xE196u; return dd3_static_complete(rt,3u);
        }
        case 0xE1F4u: {
            dd3_static_write8(rt,0xE000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE1F7u; return dd3_static_complete(rt,4u);
        }
        case 0xE1F7u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE1F9u; return dd3_static_complete(rt,2u);
        }
        case 0xE1F9u: {
            uint8_t v=0x74u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE1FBu; return dd3_static_complete(rt,2u);
        }
        case 0xE1FBu: {
            dd3_static_write8(rt,0x8000u,rt->state.cpu.x);
            rt->state.cpu.pc=0xE1FEu; return dd3_static_complete(rt,4u);
        }
        case 0xE1FEu: {
            dd3_static_write8(rt,0x8001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE201u; return dd3_static_complete(rt,4u);
        }
        case 0xE201u: {
            dd3_static_push8(rt,(uint8_t)(0xE203u>>8)); dd3_static_push8(rt,(uint8_t)0xE203u);
            rt->state.cpu.pc=0xF337u; return dd3_static_complete(rt,6u);
        }
        case 0xE204u: {
            uint16_t ea=0x39u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xE206u; return dd3_static_complete(rt,5u);
        }
        case 0xE206u: {
            rt->state.cpu.pc=0xE196u; return dd3_static_complete(rt,3u);
        }
        case 0xE209u: {
            dd3_static_write8(rt,0xE000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE20Cu; return dd3_static_complete(rt,4u);
        }
        case 0xE20Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE20Eu; return dd3_static_complete(rt,2u);
        }
        case 0xE20Eu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE210u; return dd3_static_complete(rt,2u);
        }
        case 0xE210u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE212u,0xE1FBu)) c++; rt->state.cpu.pc=0xE1FBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE212u; return dd3_static_complete(rt,2u);
        }
        case 0xE212u: {
            rt->state.cpu.i=1;
            rt->state.cpu.pc=0xE213u; return dd3_static_complete(rt,2u);
        }
        case 0xE213u: {
            rt->state.cpu.d=0;
            rt->state.cpu.pc=0xE214u; return dd3_static_complete(rt,2u);
        }
        case 0xE214u: {
            dd3_static_push8(rt,(uint8_t)(0xE216u>>8)); dd3_static_push8(rt,(uint8_t)0xE216u);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xE217u: {
            uint8_t v=0x06u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE219u; return dd3_static_complete(rt,2u);
        }
        case 0xE219u: {
            dd3_static_push8(rt,(uint8_t)(0xE21Bu>>8)); dd3_static_push8(rt,(uint8_t)0xE21Bu);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xE21Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE21Eu; return dd3_static_complete(rt,2u);
        }
        case 0xE21Eu: {
            dd3_static_write8(rt,0x06D4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE221u; return dd3_static_complete(rt,4u);
        }
        case 0xE221u: {
            dd3_static_write8(rt,0xAAu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE223u; return dd3_static_complete(rt,3u);
        }
        case 0xE223u: {
            dd3_static_write8(rt,0xABu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE225u; return dd3_static_complete(rt,3u);
        }
        case 0xE225u: {
            dd3_static_write8(rt,0x06DAu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE228u; return dd3_static_complete(rt,4u);
        }
        case 0xE228u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE22Au; return dd3_static_complete(rt,2u);
        }
        case 0xE22Au: {
            dd3_static_write8(rt,0x06D5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE22Du; return dd3_static_complete(rt,4u);
        }
        case 0xE22Du: {
            dd3_static_push8(rt,(uint8_t)(0xE22Fu>>8)); dd3_static_push8(rt,(uint8_t)0xE22Fu);
            rt->state.cpu.pc=0xF376u; return dd3_static_complete(rt,6u);
        }
        case 0xE230u: {
            dd3_static_push8(rt,(uint8_t)(0xE232u>>8)); dd3_static_push8(rt,(uint8_t)0xE232u);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xE233u: {
            dd3_static_push8(rt,(uint8_t)(0xE235u>>8)); dd3_static_push8(rt,(uint8_t)0xE235u);
            rt->state.cpu.pc=0xFCE3u; return dd3_static_complete(rt,6u);
        }
        case 0xE236u: {
            dd3_static_push8(rt,(uint8_t)(0xE238u>>8)); dd3_static_push8(rt,(uint8_t)0xE238u);
            rt->state.cpu.pc=0xD089u; return dd3_static_complete(rt,6u);
        }
        case 0xE239u: {
            dd3_static_push8(rt,(uint8_t)(0xE23Bu>>8)); dd3_static_push8(rt,(uint8_t)0xE23Bu);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xE23Cu: {
            dd3_static_push8(rt,(uint8_t)(0xE23Eu>>8)); dd3_static_push8(rt,(uint8_t)0xE23Eu);
            rt->state.cpu.pc=0xD07Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE23Fu: {
            uint8_t v=0x34u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE241u; return dd3_static_complete(rt,2u);
        }
        case 0xE241u: {
            dd3_static_push8(rt,(uint8_t)(0xE243u>>8)); dd3_static_push8(rt,(uint8_t)0xE243u);
            rt->state.cpu.pc=0xD00Du; return dd3_static_complete(rt,6u);
        }
        case 0xE244u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE246u; return dd3_static_complete(rt,2u);
        }
        case 0xE246u: {
            uint8_t v=0x02u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE248u; return dd3_static_complete(rt,2u);
        }
        case 0xE248u: {
            uint8_t v=0x07u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE24Au; return dd3_static_complete(rt,2u);
        }
        case 0xE24Au: {
            dd3_static_push8(rt,(uint8_t)(0xE24Cu>>8)); dd3_static_push8(rt,(uint8_t)0xE24Cu);
            rt->state.cpu.pc=0xFD81u; return dd3_static_complete(rt,6u);
        }
        case 0xE24Du: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE24Fu; return dd3_static_complete(rt,2u);
        }
        case 0xE24Fu: {
            uint16_t ea=0x0102u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE252u; return dd3_static_complete(rt,4u);
        }
        case 0xE252u: {
            uint16_t ea=(uint16_t)(0x0100u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE255u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0100u,ea)?1u:0u));
        }
        case 0xE255u: {
            dd3_static_write8(rt,(uint16_t)((0x17u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xE257u; return dd3_static_complete(rt,4u);
        }
        case 0xE257u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE258u; return dd3_static_complete(rt,2u);
        }
        case 0xE258u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE259u; return dd3_static_complete(rt,2u);
        }
        case 0xE259u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xE25Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE25Bu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE25Du,0xE252u)) c++; rt->state.cpu.pc=0xE252u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE25Du; return dd3_static_complete(rt,2u);
        }
        case 0xE25Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE25Fu; return dd3_static_complete(rt,2u);
        }
        case 0xE25Fu: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE261u; return dd3_static_complete(rt,3u);
        }
        case 0xE261u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE263u; return dd3_static_complete(rt,3u);
        }
        case 0xE263u: {
            dd3_static_write8(rt,0x046Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE266u; return dd3_static_complete(rt,4u);
        }
        case 0xE266u: {
            dd3_static_write8(rt,0xF3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE268u; return dd3_static_complete(rt,3u);
        }
        case 0xE268u: {
            dd3_static_write8(rt,0xF4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE26Au; return dd3_static_complete(rt,3u);
        }
        case 0xE26Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE26Cu; return dd3_static_complete(rt,2u);
        }
        case 0xE26Cu: {
            dd3_static_write8(rt,0x0470u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE26Fu; return dd3_static_complete(rt,4u);
        }
        case 0xE26Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE271u; return dd3_static_complete(rt,2u);
        }
        case 0xE271u: {
            dd3_static_push8(rt,(uint8_t)(0xE273u>>8)); dd3_static_push8(rt,(uint8_t)0xE273u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE274u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE276u; return dd3_static_complete(rt,2u);
        }
        case 0xE276u: {
            dd3_static_write8(rt,0x04DDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE279u; return dd3_static_complete(rt,4u);
        }
        case 0xE279u: {
            dd3_static_write8(rt,0x04DEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE27Cu; return dd3_static_complete(rt,4u);
        }
        case 0xE27Cu: {
            dd3_static_push8(rt,(uint8_t)(0xE27Eu>>8)); dd3_static_push8(rt,(uint8_t)0xE27Eu);
            rt->state.cpu.pc=0xD957u; return dd3_static_complete(rt,6u);
        }
        case 0xE27Fu: {
            dd3_static_push8(rt,(uint8_t)(0xE281u>>8)); dd3_static_push8(rt,(uint8_t)0xE281u);
            rt->state.cpu.pc=0xEDBBu; return dd3_static_complete(rt,6u);
        }
        case 0xE282u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE284u; return dd3_static_complete(rt,3u);
        }
        case 0xE284u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE286u; return dd3_static_complete(rt,2u);
        }
        case 0xE286u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE288u; return dd3_static_complete(rt,3u);
        }
        case 0xE288u: {
            dd3_static_push8(rt,(uint8_t)(0xE28Au>>8)); dd3_static_push8(rt,(uint8_t)0xE28Au);
            rt->state.cpu.pc=0xF06Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE28Bu: {
            dd3_static_push8(rt,(uint8_t)(0xE28Du>>8)); dd3_static_push8(rt,(uint8_t)0xE28Du);
            rt->state.cpu.pc=0xF15Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE28Eu: {
            dd3_static_push8(rt,(uint8_t)(0xE290u>>8)); dd3_static_push8(rt,(uint8_t)0xE290u);
            rt->state.cpu.pc=0xF5E5u; return dd3_static_complete(rt,6u);
        }
        case 0xE291u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE293u; return dd3_static_complete(rt,3u);
        }
        case 0xE293u: {
            uint8_t v=0xFDu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE295u; return dd3_static_complete(rt,2u);
        }
        case 0xE295u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE297u; return dd3_static_complete(rt,3u);
        }
        case 0xE297u: {
            dd3_static_push8(rt,(uint8_t)(0xE299u>>8)); dd3_static_push8(rt,(uint8_t)0xE299u);
            rt->state.cpu.pc=0xE31Eu; return dd3_static_complete(rt,6u);
        }
        case 0xE29Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE29Cu; return dd3_static_complete(rt,2u);
        }
        case 0xE29Cu: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE29Eu; return dd3_static_complete(rt,3u);
        }
        case 0xE29Eu: {
            dd3_static_push8(rt,(uint8_t)(0xE2A0u>>8)); dd3_static_push8(rt,(uint8_t)0xE2A0u);
            rt->state.cpu.pc=0xDBCAu; return dd3_static_complete(rt,6u);
        }
        case 0xE2A1u: {
            dd3_static_push8(rt,(uint8_t)(0xE2A3u>>8)); dd3_static_push8(rt,(uint8_t)0xE2A3u);
            rt->state.cpu.pc=0xE3D1u; return dd3_static_complete(rt,6u);
        }
        case 0xE2A4u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE2A6u; return dd3_static_complete(rt,3u);
        }
        case 0xE2A6u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE2A8u,0xE2E2u)) c++; rt->state.cpu.pc=0xE2E2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE2A8u; return dd3_static_complete(rt,2u);
        }
        case 0xE2A8u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE2AAu; return dd3_static_complete(rt,3u);
        }
        case 0xE2AAu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE2ACu; return dd3_static_complete(rt,2u);
        }
        case 0xE2ACu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE2AEu,0xE2B1u)) c++; rt->state.cpu.pc=0xE2B1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE2AEu; return dd3_static_complete(rt,2u);
        }
        case 0xE2AEu: {
            dd3_static_push8(rt,(uint8_t)(0xE2B0u>>8)); dd3_static_push8(rt,(uint8_t)0xE2B0u);
            rt->state.cpu.pc=0xFCB1u; return dd3_static_complete(rt,6u);
        }
        case 0xE2B1u: {
            dd3_static_push8(rt,(uint8_t)(0xE2B3u>>8)); dd3_static_push8(rt,(uint8_t)0xE2B3u);
            rt->state.cpu.pc=0xD6AEu; return dd3_static_complete(rt,6u);
        }
        case 0xE2B4u: {
            dd3_static_push8(rt,(uint8_t)(0xE2B6u>>8)); dd3_static_push8(rt,(uint8_t)0xE2B6u);
            rt->state.cpu.pc=0xCEE8u; return dd3_static_complete(rt,6u);
        }
        case 0xE2B7u: {
            dd3_static_push8(rt,(uint8_t)(0xE2B9u>>8)); dd3_static_push8(rt,(uint8_t)0xE2B9u);
            rt->state.cpu.pc=0xD1B9u; return dd3_static_complete(rt,6u);
        }
        case 0xE2BAu: {
            dd3_static_push8(rt,(uint8_t)(0xE2BCu>>8)); dd3_static_push8(rt,(uint8_t)0xE2BCu);
            rt->state.cpu.pc=0xB882u; return dd3_static_complete(rt,6u);
        }
        case 0xE2BDu: {
            dd3_static_push8(rt,(uint8_t)(0xE2BFu>>8)); dd3_static_push8(rt,(uint8_t)0xE2BFu);
            rt->state.cpu.pc=0xD65Au; return dd3_static_complete(rt,6u);
        }
        case 0xE2C0u: {
            dd3_static_push8(rt,(uint8_t)(0xE2C2u>>8)); dd3_static_push8(rt,(uint8_t)0xE2C2u);
            rt->state.cpu.pc=0xB0E3u; return dd3_static_complete(rt,6u);
        }
        case 0xE2C3u: {
            dd3_static_push8(rt,(uint8_t)(0xE2C5u>>8)); dd3_static_push8(rt,(uint8_t)0xE2C5u);
            rt->state.cpu.pc=0x899Du; return dd3_static_complete(rt,6u);
        }
        case 0xE2C6u: {
            dd3_static_push8(rt,(uint8_t)(0xE2C8u>>8)); dd3_static_push8(rt,(uint8_t)0xE2C8u);
            rt->state.cpu.pc=0xFC93u; return dd3_static_complete(rt,6u);
        }
        case 0xE2C9u: {
            dd3_static_push8(rt,(uint8_t)(0xE2CBu>>8)); dd3_static_push8(rt,(uint8_t)0xE2CBu);
            rt->state.cpu.pc=0xF6A0u; return dd3_static_complete(rt,6u);
        }
        case 0xE2CCu: {
            dd3_static_push8(rt,(uint8_t)(0xE2CEu>>8)); dd3_static_push8(rt,(uint8_t)0xE2CEu);
            rt->state.cpu.pc=0xFC62u; return dd3_static_complete(rt,6u);
        }
        case 0xE2CFu: {
            dd3_static_push8(rt,(uint8_t)(0xE2D1u>>8)); dd3_static_push8(rt,(uint8_t)0xE2D1u);
            rt->state.cpu.pc=0x8020u; return dd3_static_complete(rt,6u);
        }
        case 0xE2D2u: {
            dd3_static_push8(rt,(uint8_t)(0xE2D4u>>8)); dd3_static_push8(rt,(uint8_t)0xE2D4u);
            rt->state.cpu.pc=0xCD48u; return dd3_static_complete(rt,6u);
        }
        case 0xE2D5u: {
            dd3_static_push8(rt,(uint8_t)(0xE2D7u>>8)); dd3_static_push8(rt,(uint8_t)0xE2D7u);
            rt->state.cpu.pc=0xDF3Au; return dd3_static_complete(rt,6u);
        }
        case 0xE2D8u: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE2DAu; return dd3_static_complete(rt,3u);
        }
        case 0xE2DAu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xE2DCu; return dd3_static_complete(rt,2u);
        }
        case 0xE2DCu: {
            dd3_static_push8(rt,(uint8_t)(0xE2DEu>>8)); dd3_static_push8(rt,(uint8_t)0xE2DEu);
            rt->state.cpu.pc=0xC11Bu; return dd3_static_complete(rt,6u);
        }
        case 0xE2DFu: {
            dd3_static_push8(rt,(uint8_t)(0xE2E1u>>8)); dd3_static_push8(rt,(uint8_t)0xE2E1u);
            rt->state.cpu.pc=0xD198u; return dd3_static_complete(rt,6u);
        }
        case 0xE2E2u: {
            dd3_static_push8(rt,(uint8_t)(0xE2E4u>>8)); dd3_static_push8(rt,(uint8_t)0xE2E4u);
            rt->state.cpu.pc=0xD8C2u; return dd3_static_complete(rt,6u);
        }
        case 0xE2E5u: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE2E7u; return dd3_static_complete(rt,3u);
        }
        case 0xE2E7u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xE2E9u; return dd3_static_complete(rt,2u);
        }
        case 0xE2E9u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE2EBu,0xE2E5u)) c++; rt->state.cpu.pc=0xE2E5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE2EBu; return dd3_static_complete(rt,2u);
        }
        case 0xE2EBu: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE2EEu; return dd3_static_complete(rt,4u);
        }
        case 0xE2EEu: {
            dd3_static_write8(rt,0x04F4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE2F1u; return dd3_static_complete(rt,4u);
        }
        case 0xE2F1u: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xE2F4u; return dd3_static_complete(rt,6u);
        }
        case 0xE2F4u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE2F6u; return dd3_static_complete(rt,3u);
        }
        case 0xE2F6u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE2F8u; return dd3_static_complete(rt,2u);
        }
        case 0xE2F8u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE2FAu,0xE303u)) c++; rt->state.cpu.pc=0xE303u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE2FAu; return dd3_static_complete(rt,2u);
        }
        case 0xE2FAu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE2FCu; return dd3_static_complete(rt,3u);
        }
        case 0xE2FCu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE2FEu; return dd3_static_complete(rt,2u);
        }
        case 0xE2FEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE300u,0xE313u)) c++; rt->state.cpu.pc=0xE313u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE300u; return dd3_static_complete(rt,2u);
        }
        case 0xE300u: {
            rt->state.cpu.pc=0xE29Au; return dd3_static_complete(rt,3u);
        }
        case 0xE303u: {
            uint16_t ea=0x07FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE306u; return dd3_static_complete(rt,4u);
        }
        case 0xE306u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE308u; return dd3_static_complete(rt,2u);
        }
        case 0xE308u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE30Au,0xE30Du)) c++; rt->state.cpu.pc=0xE30Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE30Au; return dd3_static_complete(rt,2u);
        }
        case 0xE30Au: {
            rt->state.cpu.pc=0xE29Au; return dd3_static_complete(rt,3u);
        }
        case 0xE30Du: {
            dd3_static_push8(rt,(uint8_t)(0xE30Fu>>8)); dd3_static_push8(rt,(uint8_t)0xE30Fu);
            rt->state.cpu.pc=0xEF56u; return dd3_static_complete(rt,6u);
        }
        case 0xE310u: {
            rt->state.cpu.pc=0xE288u; return dd3_static_complete(rt,3u);
        }
        case 0xE313u: {
            dd3_static_push8(rt,(uint8_t)(0xE315u>>8)); dd3_static_push8(rt,(uint8_t)0xE315u);
            rt->state.cpu.pc=0xEF98u; return dd3_static_complete(rt,6u);
        }
        case 0xE316u: {
            rt->state.cpu.pc=0xFF84u; return dd3_static_complete(rt,3u);
        }
        case 0xE319u: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE31Bu; return dd3_static_complete(rt,3u);
        }
        case 0xE31Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE31Du,0xE319u)) c++; rt->state.cpu.pc=0xE319u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE31Du; return dd3_static_complete(rt,2u);
        }
        case 0xE31Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE31Eu: {
            dd3_static_push8(rt,(uint8_t)(0xE320u>>8)); dd3_static_push8(rt,(uint8_t)0xE320u);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xE321u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE323u; return dd3_static_complete(rt,3u);
        }
        case 0xE323u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE325u; return dd3_static_complete(rt,2u);
        }
        case 0xE325u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE327u,0xE330u)) c++; rt->state.cpu.pc=0xE330u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE327u; return dd3_static_complete(rt,2u);
        }
        case 0xE327u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE329u; return dd3_static_complete(rt,2u);
        }
        case 0xE329u: {
            dd3_static_write8(rt,0xF3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE32Bu; return dd3_static_complete(rt,3u);
        }
        case 0xE32Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE32Du; return dd3_static_complete(rt,2u);
        }
        case 0xE32Du: {
            dd3_static_write8(rt,0x06B9u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE330u; return dd3_static_complete(rt,4u);
        }
        case 0xE330u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE332u; return dd3_static_complete(rt,2u);
        }
        case 0xE332u: {
            dd3_static_write8(rt,0xF5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE334u; return dd3_static_complete(rt,3u);
        }
        case 0xE334u: {
            dd3_static_write8(rt,0x36u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE336u; return dd3_static_complete(rt,3u);
        }
        case 0xE336u: {
            dd3_static_write8(rt,0x37u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE338u; return dd3_static_complete(rt,3u);
        }
        case 0xE338u: {
            dd3_static_write8(rt,0xFFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE33Au; return dd3_static_complete(rt,3u);
        }
        case 0xE33Au: {
            dd3_static_write8(rt,0x04DEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE33Du; return dd3_static_complete(rt,4u);
        }
        case 0xE33Du: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE33Fu; return dd3_static_complete(rt,2u);
        }
        case 0xE33Fu: {
            dd3_static_write8(rt,0xFEu,rt->state.cpu.y);
            rt->state.cpu.pc=0xE341u; return dd3_static_complete(rt,3u);
        }
        case 0xE341u: {
            uint8_t v=0x81u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE343u; return dd3_static_complete(rt,2u);
        }
        case 0xE343u: {
            dd3_static_write8(rt,0x04D3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE346u; return dd3_static_complete(rt,4u);
        }
        case 0xE346u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE348u; return dd3_static_complete(rt,3u);
        }
        case 0xE348u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE34Au; return dd3_static_complete(rt,2u);
        }
        case 0xE34Au: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE34Cu; return dd3_static_complete(rt,3u);
        }
        case 0xE34Cu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE34Eu; return dd3_static_complete(rt,3u);
        }
        case 0xE34Eu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE350u; return dd3_static_complete(rt,2u);
        }
        case 0xE350u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE352u; return dd3_static_complete(rt,3u);
        }
        case 0xE352u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE354u; return dd3_static_complete(rt,3u);
        }
        case 0xE354u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE356u,0xE35Fu)) c++; rt->state.cpu.pc=0xE35Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE356u; return dd3_static_complete(rt,2u);
        }
        case 0xE356u: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE358u; return dd3_static_complete(rt,2u);
        }
        case 0xE358u: {
            dd3_static_write8(rt,0xFFu,rt->state.cpu.y);
            rt->state.cpu.pc=0xE35Au; return dd3_static_complete(rt,3u);
        }
        case 0xE35Au: {
            uint8_t v=0x81u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE35Cu; return dd3_static_complete(rt,2u);
        }
        case 0xE35Cu: {
            dd3_static_write8(rt,0x04D4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE35Fu; return dd3_static_complete(rt,4u);
        }
        case 0xE35Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE361u; return dd3_static_complete(rt,2u);
        }
        case 0xE361u: {
            dd3_static_push8(rt,(uint8_t)(0xE363u>>8)); dd3_static_push8(rt,(uint8_t)0xE363u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE364u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE366u; return dd3_static_complete(rt,2u);
        }
        case 0xE366u: {
            dd3_static_write8(rt,0x06D5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE369u; return dd3_static_complete(rt,4u);
        }
        case 0xE369u: {
            dd3_static_push8(rt,(uint8_t)(0xE36Bu>>8)); dd3_static_push8(rt,(uint8_t)0xE36Bu);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xE36Cu: {
            dd3_static_push8(rt,(uint8_t)(0xE36Eu>>8)); dd3_static_push8(rt,(uint8_t)0xE36Eu);
            rt->state.cpu.pc=0x8978u; return dd3_static_complete(rt,6u);
        }
        case 0xE36Fu: {
            dd3_static_push8(rt,(uint8_t)(0xE371u>>8)); dd3_static_push8(rt,(uint8_t)0xE371u);
            rt->state.cpu.pc=0xD07Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE372u: {
            dd3_static_push8(rt,(uint8_t)(0xE374u>>8)); dd3_static_push8(rt,(uint8_t)0xE374u);
            rt->state.cpu.pc=0xFCF6u; return dd3_static_complete(rt,6u);
        }
        case 0xE375u: {
            dd3_static_push8(rt,(uint8_t)(0xE377u>>8)); dd3_static_push8(rt,(uint8_t)0xE377u);
            rt->state.cpu.pc=0xD052u; return dd3_static_complete(rt,6u);
        }
        case 0xE378u: {
            dd3_static_push8(rt,(uint8_t)(0xE37Au>>8)); dd3_static_push8(rt,(uint8_t)0xE37Au);
            rt->state.cpu.pc=0xC017u; return dd3_static_complete(rt,6u);
        }
        case 0xE37Bu: {
            uint16_t ea=0x04DDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE37Eu; return dd3_static_complete(rt,4u);
        }
        case 0xE37Eu: {
            dd3_static_write8(rt,0x04DFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE381u; return dd3_static_complete(rt,4u);
        }
        case 0xE381u: {
            dd3_static_push8(rt,(uint8_t)(0xE383u>>8)); dd3_static_push8(rt,(uint8_t)0xE383u);
            rt->state.cpu.pc=0xD052u; return dd3_static_complete(rt,6u);
        }
        case 0xE384u: {
            dd3_static_push8(rt,(uint8_t)(0xE386u>>8)); dd3_static_push8(rt,(uint8_t)0xE386u);
            rt->state.cpu.pc=0xFCE3u; return dd3_static_complete(rt,6u);
        }
        case 0xE387u: {
            dd3_static_push8(rt,(uint8_t)(0xE389u>>8)); dd3_static_push8(rt,(uint8_t)0xE389u);
            rt->state.cpu.pc=0xFE75u; return dd3_static_complete(rt,6u);
        }
        case 0xE38Au: {
            dd3_static_push8(rt,(uint8_t)(0xE38Cu>>8)); dd3_static_push8(rt,(uint8_t)0xE38Cu);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xE38Du: {
            dd3_static_push8(rt,(uint8_t)(0xE38Fu>>8)); dd3_static_push8(rt,(uint8_t)0xE38Fu);
            rt->state.cpu.pc=0xD1B9u; return dd3_static_complete(rt,6u);
        }
        case 0xE390u: {
            dd3_static_push8(rt,(uint8_t)(0xE392u>>8)); dd3_static_push8(rt,(uint8_t)0xE392u);
            rt->state.cpu.pc=0xD17Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE393u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE396u; return dd3_static_complete(rt,4u);
        }
        case 0xE396u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE399u; return dd3_static_complete(rt,4u);
        }
        case 0xE399u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE39Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE39Bu: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE39Du; return dd3_static_complete(rt,3u);
        }
        case 0xE39Du: {
            dd3_static_write8(rt,0xA1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE39Fu; return dd3_static_complete(rt,3u);
        }
        case 0xE39Fu: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE3A1u; return dd3_static_complete(rt,3u);
        }
        case 0xE3A1u: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3A3u; return dd3_static_complete(rt,2u);
        }
        case 0xE3A3u: {
            dd3_static_write8(rt,0x06D6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE3A6u; return dd3_static_complete(rt,4u);
        }
        case 0xE3A6u: {
            dd3_static_push8(rt,(uint8_t)(0xE3A8u>>8)); dd3_static_push8(rt,(uint8_t)0xE3A8u);
            rt->state.cpu.pc=0xE3B7u; return dd3_static_complete(rt,6u);
        }
        case 0xE3A9u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3ABu; return dd3_static_complete(rt,3u);
        }
        case 0xE3ABu: {
            uint16_t ea=(uint16_t)(0x9C3Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3AEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9C3Cu,ea)?1u:0u));
        }
        case 0xE3AEu: {
            dd3_static_push8(rt,(uint8_t)(0xE3B0u>>8)); dd3_static_push8(rt,(uint8_t)0xE3B0u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE3B1u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3B3u; return dd3_static_complete(rt,2u);
        }
        case 0xE3B3u: {
            dd3_static_write8(rt,0x068Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE3B6u; return dd3_static_complete(rt,4u);
        }
        case 0xE3B6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE3B7u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3B9u; return dd3_static_complete(rt,2u);
        }
        case 0xE3B9u: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE3BBu; return dd3_static_complete(rt,3u);
        }
        case 0xE3BBu: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3BDu; return dd3_static_complete(rt,2u);
        }
        case 0xE3BDu: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE3BFu; return dd3_static_complete(rt,3u);
        }
        case 0xE3BFu: {
            dd3_static_push8(rt,(uint8_t)(0xE3C1u>>8)); dd3_static_push8(rt,(uint8_t)0xE3C1u);
            rt->state.cpu.pc=0xFEBFu; return dd3_static_complete(rt,6u);
        }
        case 0xE3C2u: {
            rt->state.cpu.i=0;
            rt->state.cpu.pc=0xE3C3u; return dd3_static_complete(rt,2u);
        }
        case 0xE3C3u: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3C5u; return dd3_static_complete(rt,3u);
        }
        case 0xE3C5u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xE3C7u; return dd3_static_complete(rt,2u);
        }
        case 0xE3C7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE3C9u,0xE3C3u)) c++; rt->state.cpu.pc=0xE3C3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE3C9u; return dd3_static_complete(rt,2u);
        }
        case 0xE3C9u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3CBu; return dd3_static_complete(rt,2u);
        }
        case 0xE3CBu: {
            dd3_static_write8(rt,0xA1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE3CDu; return dd3_static_complete(rt,3u);
        }
        case 0xE3CDu: {
            dd3_static_push8(rt,(uint8_t)(0xE3CFu>>8)); dd3_static_push8(rt,(uint8_t)0xE3CFu);
            rt->state.cpu.pc=0xFD00u; return dd3_static_complete(rt,6u);
        }
        case 0xE3D0u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE3D1u: {
            dd3_static_push8(rt,(uint8_t)(0xE3D3u>>8)); dd3_static_push8(rt,(uint8_t)0xE3D3u);
            rt->state.cpu.pc=0xFD9Eu; return dd3_static_complete(rt,6u);
        }
        case 0xE3D4u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3D6u; return dd3_static_complete(rt,2u);
        }
        case 0xE3D6u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3D8u; return dd3_static_complete(rt,3u);
        }
        case 0xE3D8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE3DAu,0xE3DCu)) c++; rt->state.cpu.pc=0xE3DCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE3DAu; return dd3_static_complete(rt,2u);
        }
        case 0xE3DAu: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3DCu; return dd3_static_complete(rt,3u);
        }
        case 0xE3DCu: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3DEu; return dd3_static_complete(rt,3u);
        }
        case 0xE3DEu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE3E0u,0xE3E2u)) c++; rt->state.cpu.pc=0xE3E2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE3E0u; return dd3_static_complete(rt,2u);
        }
        case 0xE3E0u: {
            uint16_t ea=0x98u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE3E2u; return dd3_static_complete(rt,3u);
        }
        case 0xE3E2u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE3E4u; return dd3_static_complete(rt,2u);
        }
        case 0xE3E4u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE3E6u,0xE409u)) c++; rt->state.cpu.pc=0xE409u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE3E6u; return dd3_static_complete(rt,2u);
        }
        case 0xE3E6u: {
            uint16_t ea=0x068Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3E9u; return dd3_static_complete(rt,4u);
        }
        case 0xE3E9u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE3EBu,0xE408u)) c++; rt->state.cpu.pc=0xE408u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE3EBu; return dd3_static_complete(rt,2u);
        }
        case 0xE3EBu: {
            uint8_t v=0xFFu;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3EDu; return dd3_static_complete(rt,2u);
        }
        case 0xE3EDu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3EFu; return dd3_static_complete(rt,3u);
        }
        case 0xE3EFu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE3F1u; return dd3_static_complete(rt,2u);
        }
        case 0xE3F1u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE3F3u; return dd3_static_complete(rt,3u);
        }
        case 0xE3F3u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE3F5u,0xE3FCu)) c++; rt->state.cpu.pc=0xE3FCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE3F5u; return dd3_static_complete(rt,2u);
        }
        case 0xE3F5u: {
            uint8_t v=0xFDu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3F7u; return dd3_static_complete(rt,2u);
        }
        case 0xE3F7u: {
            dd3_static_push8(rt,(uint8_t)(0xE3F9u>>8)); dd3_static_push8(rt,(uint8_t)0xE3F9u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE3FAu: {
            uint8_t v=0x42u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE3FCu; return dd3_static_complete(rt,2u);
        }
        case 0xE3FCu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE3FDu; return dd3_static_complete(rt,2u);
        }
        case 0xE3FDu: {
            dd3_static_push8(rt,(uint8_t)(0xE3FFu>>8)); dd3_static_push8(rt,(uint8_t)0xE3FFu);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE400u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE402u; return dd3_static_complete(rt,2u);
        }
        case 0xE402u: {
            dd3_static_write8(rt,0x0309u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE405u; return dd3_static_complete(rt,4u);
        }
        case 0xE405u: {
            dd3_static_write8(rt,0x030Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xE408u; return dd3_static_complete(rt,4u);
        }
        case 0xE408u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE409u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE40Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE40Bu: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE40Du; return dd3_static_complete(rt,3u);
        }
        case 0xE40Du: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE40Fu,0xE411u)) c++; rt->state.cpu.pc=0xE411u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE40Fu; return dd3_static_complete(rt,2u);
        }
        case 0xE40Fu: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE411u; return dd3_static_complete(rt,3u);
        }
        case 0xE411u: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE413u; return dd3_static_complete(rt,3u);
        }
        case 0xE413u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE415u,0xE417u)) c++; rt->state.cpu.pc=0xE417u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE415u; return dd3_static_complete(rt,2u);
        }
        case 0xE415u: {
            uint16_t ea=0x98u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE417u; return dd3_static_complete(rt,3u);
        }
        case 0xE417u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE419u; return dd3_static_complete(rt,2u);
        }
        case 0xE419u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE41Bu,0xE423u)) c++; rt->state.cpu.pc=0xE423u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE41Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE41Bu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE41Du; return dd3_static_complete(rt,3u);
        }
        case 0xE41Du: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE41Fu,0xE422u)) c++; rt->state.cpu.pc=0xE422u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE41Fu; return dd3_static_complete(rt,2u);
        }
        case 0xE41Fu: {
            dd3_static_push8(rt,(uint8_t)(0xE421u>>8)); dd3_static_push8(rt,(uint8_t)0xE421u);
            rt->state.cpu.pc=0xF6DFu; return dd3_static_complete(rt,6u);
        }
        case 0xE422u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE423u: {
            uint16_t ea=0x030Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE426u; return dd3_static_complete(rt,4u);
        }
        case 0xE426u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE428u,0xE422u)) c++; rt->state.cpu.pc=0xE422u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE428u; return dd3_static_complete(rt,2u);
        }
        case 0xE428u: {
            uint16_t ea=0x36u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE42Au; return dd3_static_complete(rt,3u);
        }
        case 0xE42Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE42Cu,0xE422u)) c++; rt->state.cpu.pc=0xE422u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE42Cu; return dd3_static_complete(rt,2u);
        }
        case 0xE42Cu: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE42Eu; return dd3_static_complete(rt,3u);
        }
        case 0xE42Eu: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE430u; return dd3_static_complete(rt,3u);
        }
        case 0xE430u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE432u,0xE422u)) c++; rt->state.cpu.pc=0xE422u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE432u; return dd3_static_complete(rt,2u);
        }
        case 0xE432u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE434u; return dd3_static_complete(rt,3u);
        }
        case 0xE434u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE436u,0xE444u)) c++; rt->state.cpu.pc=0xE444u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE436u; return dd3_static_complete(rt,2u);
        }
        case 0xE436u: {
            uint16_t ea=0x44u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE438u; return dd3_static_complete(rt,3u);
        }
        case 0xE438u: {
            uint8_t v=0x80u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xE43Au; return dd3_static_complete(rt,2u);
        }
        case 0xE43Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE43Cu,0xE444u)) c++; rt->state.cpu.pc=0xE444u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE43Cu; return dd3_static_complete(rt,2u);
        }
        case 0xE43Cu: {
            uint8_t v=0x81u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xE43Eu; return dd3_static_complete(rt,2u);
        }
        case 0xE43Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE440u,0xE444u)) c++; rt->state.cpu.pc=0xE444u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE440u; return dd3_static_complete(rt,2u);
        }
        case 0xE440u: {
            uint8_t v=0x82u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xE442u; return dd3_static_complete(rt,2u);
        }
        case 0xE442u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE444u,0xE408u)) c++; rt->state.cpu.pc=0xE408u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE444u; return dd3_static_complete(rt,2u);
        }
        case 0xE444u: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE446u; return dd3_static_complete(rt,3u);
        }
        case 0xE446u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE448u,0xE456u)) c++; rt->state.cpu.pc=0xE456u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE448u; return dd3_static_complete(rt,2u);
        }
        case 0xE448u: {
            uint16_t ea=0x45u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE44Au; return dd3_static_complete(rt,3u);
        }
        case 0xE44Au: {
            uint8_t v=0x80u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xE44Cu; return dd3_static_complete(rt,2u);
        }
        case 0xE44Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE44Eu,0xE456u)) c++; rt->state.cpu.pc=0xE456u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE44Eu; return dd3_static_complete(rt,2u);
        }
        case 0xE44Eu: {
            uint8_t v=0x81u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xE450u; return dd3_static_complete(rt,2u);
        }
        case 0xE450u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE452u,0xE456u)) c++; rt->state.cpu.pc=0xE456u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE452u; return dd3_static_complete(rt,2u);
        }
        case 0xE452u: {
            uint8_t v=0x82u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xE454u; return dd3_static_complete(rt,2u);
        }
        case 0xE454u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE456u,0xE408u)) c++; rt->state.cpu.pc=0xE408u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE456u; return dd3_static_complete(rt,2u);
        }
        case 0xE456u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE458u; return dd3_static_complete(rt,2u);
        }
        case 0xE458u: {
            dd3_static_write8(rt,0x060Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xE45Bu; return dd3_static_complete(rt,4u);
        }
        case 0xE45Bu: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE45Eu; return dd3_static_complete(rt,4u);
        }
        case 0xE45Eu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE460u; return dd3_static_complete(rt,3u);
        }
        case 0xE460u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE462u; return dd3_static_complete(rt,2u);
        }
        case 0xE462u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE464u; return dd3_static_complete(rt,3u);
        }
        case 0xE464u: {
            uint8_t v=0xFDu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE466u; return dd3_static_complete(rt,2u);
        }
        case 0xE466u: {
            dd3_static_push8(rt,(uint8_t)(0xE468u>>8)); dd3_static_push8(rt,(uint8_t)0xE468u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE469u: {
            uint16_t ea=0x04EEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE46Cu; return dd3_static_complete(rt,4u);
        }
        case 0xE46Cu: {
            dd3_static_write8(rt,0x04F0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE46Fu; return dd3_static_complete(rt,4u);
        }
        case 0xE46Fu: {
            uint16_t ea=0x04EFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE472u; return dd3_static_complete(rt,4u);
        }
        case 0xE472u: {
            dd3_static_write8(rt,0x04F1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE475u; return dd3_static_complete(rt,4u);
        }
        case 0xE475u: {
            uint16_t ea=0x91u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE477u; return dd3_static_complete(rt,3u);
        }
        case 0xE477u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE478u; return dd3_static_complete(rt,3u);
        }
        case 0xE478u: {
            uint16_t ea=0x04DDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE47Bu; return dd3_static_complete(rt,4u);
        }
        case 0xE47Bu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE47Cu; return dd3_static_complete(rt,3u);
        }
        case 0xE47Cu: {
            uint16_t ea=0x04DEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE47Fu; return dd3_static_complete(rt,4u);
        }
        case 0xE47Fu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE480u; return dd3_static_complete(rt,3u);
        }
        case 0xE480u: {
            uint16_t ea=0x04E6u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE483u; return dd3_static_complete(rt,4u);
        }
        case 0xE483u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE484u; return dd3_static_complete(rt,3u);
        }
        case 0xE484u: {
            uint16_t ea=0x04E7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE487u; return dd3_static_complete(rt,4u);
        }
        case 0xE487u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE488u; return dd3_static_complete(rt,3u);
        }
        case 0xE488u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE48Au; return dd3_static_complete(rt,3u);
        }
        case 0xE48Au: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE48Cu; return dd3_static_complete(rt,2u);
        }
        case 0xE48Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE48Eu,0xE494u)) c++; rt->state.cpu.pc=0xE494u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE48Eu; return dd3_static_complete(rt,2u);
        }
        case 0xE48Eu: {
            uint16_t ea=0x04FFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE491u; return dd3_static_complete(rt,4u);
        }
        case 0xE491u: {
            dd3_static_write8(rt,0x04FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE494u; return dd3_static_complete(rt,4u);
        }
        case 0xE494u: {
            uint8_t v=0x76u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE496u; return dd3_static_complete(rt,2u);
        }
        case 0xE496u: {
            dd3_static_write8(rt,0x04E6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE499u; return dd3_static_complete(rt,4u);
        }
        case 0xE499u: {
            uint8_t v=0x77u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE49Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE49Bu: {
            dd3_static_write8(rt,0x04E7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE49Eu; return dd3_static_complete(rt,4u);
        }
        case 0xE49Eu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE4A0u; return dd3_static_complete(rt,2u);
        }
        case 0xE4A0u: {
            dd3_static_write8(rt,0x04DEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE4A3u; return dd3_static_complete(rt,4u);
        }
        case 0xE4A3u: {
            dd3_static_push8(rt,(uint8_t)(0xE4A5u>>8)); dd3_static_push8(rt,(uint8_t)0xE4A5u);
            rt->state.cpu.pc=0xD957u; return dd3_static_complete(rt,6u);
        }
        case 0xE4A6u: {
            uint8_t v=0x35u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE4A8u; return dd3_static_complete(rt,2u);
        }
        case 0xE4A8u: {
            dd3_static_push8(rt,(uint8_t)(0xE4AAu>>8)); dd3_static_push8(rt,(uint8_t)0xE4AAu);
            rt->state.cpu.pc=0xCB86u; return dd3_static_complete(rt,6u);
        }
        case 0xE4ABu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE4ADu; return dd3_static_complete(rt,2u);
        }
        case 0xE4ADu: {
            dd3_static_write8(rt,0xA000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE4B0u; return dd3_static_complete(rt,4u);
        }
        case 0xE4B0u: {
            dd3_static_push8(rt,(uint8_t)(0xE4B2u>>8)); dd3_static_push8(rt,(uint8_t)0xE4B2u);
            rt->state.cpu.pc=0xF363u; return dd3_static_complete(rt,6u);
        }
        case 0xE4B3u: {
            dd3_static_push8(rt,(uint8_t)(0xE4B5u>>8)); dd3_static_push8(rt,(uint8_t)0xE4B5u);
            rt->state.cpu.pc=0xFCF6u; return dd3_static_complete(rt,6u);
        }
        case 0xE4B6u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE4B8u; return dd3_static_complete(rt,2u);
        }
        case 0xE4B8u: {
            dd3_static_write8(rt,0x06B0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE4BBu; return dd3_static_complete(rt,4u);
        }
        case 0xE4BBu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE4BDu; return dd3_static_complete(rt,2u);
        }
        case 0xE4BDu: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE4BFu; return dd3_static_complete(rt,3u);
        }
        case 0xE4BFu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE4C1u; return dd3_static_complete(rt,2u);
        }
        case 0xE4C1u: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE4C3u; return dd3_static_complete(rt,3u);
        }
        case 0xE4C3u: {
            dd3_static_push8(rt,(uint8_t)(0xE4C5u>>8)); dd3_static_push8(rt,(uint8_t)0xE4C5u);
            rt->state.cpu.pc=0xFEBFu; return dd3_static_complete(rt,6u);
        }
        case 0xE4C6u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE4C8u; return dd3_static_complete(rt,3u);
        }
        case 0xE4C8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE4CAu,0xE4D5u)) c++; rt->state.cpu.pc=0xE4D5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE4CAu; return dd3_static_complete(rt,2u);
        }
        case 0xE4CAu: {
            uint16_t ea=0x74u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE4CCu; return dd3_static_complete(rt,3u);
        }
        case 0xE4CCu: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE4CEu; return dd3_static_complete(rt,3u);
        }
        case 0xE4CEu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE4CFu; return dd3_static_complete(rt,2u);
        }
        case 0xE4CFu: {
            uint16_t ea=0x045Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE4D2u; return dd3_static_complete(rt,4u);
        }
        case 0xE4D2u: {
            dd3_static_write8(rt,(uint16_t)(0x04D8u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE4D5u; return dd3_static_complete(rt,5u);
        }
        case 0xE4D5u: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE4D7u; return dd3_static_complete(rt,3u);
        }
        case 0xE4D7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE4D9u,0xE4E4u)) c++; rt->state.cpu.pc=0xE4E4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE4D9u; return dd3_static_complete(rt,2u);
        }
        case 0xE4D9u: {
            uint16_t ea=0x75u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE4DBu; return dd3_static_complete(rt,3u);
        }
        case 0xE4DBu: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE4DDu; return dd3_static_complete(rt,3u);
        }
        case 0xE4DDu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE4DEu; return dd3_static_complete(rt,2u);
        }
        case 0xE4DEu: {
            uint16_t ea=0x045Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE4E1u; return dd3_static_complete(rt,4u);
        }
        case 0xE4E1u: {
            dd3_static_write8(rt,(uint16_t)(0x04D8u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE4E4u; return dd3_static_complete(rt,5u);
        }
        case 0xE4E4u: {
            uint16_t ea=0x04D2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE4E7u; return dd3_static_complete(rt,4u);
        }
        case 0xE4E7u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE4E9u; return dd3_static_complete(rt,3u);
        }
        case 0xE4E9u: {
            dd3_static_push8(rt,(uint8_t)(0xE4EBu>>8)); dd3_static_push8(rt,(uint8_t)0xE4EBu);
            rt->state.cpu.pc=0xD052u; return dd3_static_complete(rt,6u);
        }
        case 0xE4ECu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE4EEu; return dd3_static_complete(rt,2u);
        }
        case 0xE4EEu: {
            uint16_t ea=0x060Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE4F1u; return dd3_static_complete(rt,4u);
        }
        case 0xE4F1u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xE4F4u; return dd3_static_complete(rt,4u);
        }
        case 0xE4F4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE4F6u,0xE507u)) c++; rt->state.cpu.pc=0xE507u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE4F6u; return dd3_static_complete(rt,2u);
        }
        case 0xE4F6u: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xE4F8u; return dd3_static_complete(rt,5u);
        }
        case 0xE4F8u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE4FAu,0xE502u)) c++; rt->state.cpu.pc=0xE502u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE4FAu; return dd3_static_complete(rt,2u);
        }
        case 0xE4FAu: {
            uint16_t ea=(uint16_t)(0x04D3u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE4FDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04D3u,ea)?1u:0u));
        }
        case 0xE4FDu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE4FFu,0xE502u)) c++; rt->state.cpu.pc=0xE502u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE4FFu; return dd3_static_complete(rt,2u);
        }
        case 0xE4FFu: {
            dd3_static_push8(rt,(uint8_t)(0xE501u>>8)); dd3_static_push8(rt,(uint8_t)0xE501u);
            rt->state.cpu.pc=0xE919u; return dd3_static_complete(rt,6u);
        }
        case 0xE502u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE503u; return dd3_static_complete(rt,2u);
        }
        case 0xE503u: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xE505u; return dd3_static_complete(rt,2u);
        }
        case 0xE505u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE507u,0xE513u)) c++; rt->state.cpu.pc=0xE513u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE507u; return dd3_static_complete(rt,2u);
        }
        case 0xE507u: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE509u; return dd3_static_complete(rt,3u);
        }
        case 0xE509u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xE50Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE50Bu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE50Du,0xE507u)) c++; rt->state.cpu.pc=0xE507u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE50Du; return dd3_static_complete(rt,2u);
        }
        case 0xE50Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE50Fu; return dd3_static_complete(rt,2u);
        }
        case 0xE50Fu: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE511u; return dd3_static_complete(rt,3u);
        }
        case 0xE511u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE513u,0xE4EEu)) c++; rt->state.cpu.pc=0xE4EEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE513u; return dd3_static_complete(rt,2u);
        }
        case 0xE513u: {
            dd3_static_push8(rt,(uint8_t)(0xE515u>>8)); dd3_static_push8(rt,(uint8_t)0xE515u);
            rt->state.cpu.pc=0xEB40u; return dd3_static_complete(rt,6u);
        }
        case 0xE516u: {
            dd3_static_push8(rt,(uint8_t)(0xE518u>>8)); dd3_static_push8(rt,(uint8_t)0xE518u);
            rt->state.cpu.pc=0xEF36u; return dd3_static_complete(rt,6u);
        }
        case 0xE519u: {
            dd3_static_push8(rt,(uint8_t)(0xE51Bu>>8)); dd3_static_push8(rt,(uint8_t)0xE51Bu);
            rt->state.cpu.pc=0xF28Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE51Cu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE51Eu; return dd3_static_complete(rt,2u);
        }
        case 0xE51Eu: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE520u; return dd3_static_complete(rt,3u);
        }
        case 0xE520u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE522u; return dd3_static_complete(rt,2u);
        }
        case 0xE522u: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE524u; return dd3_static_complete(rt,3u);
        }
        case 0xE524u: {
            dd3_static_push8(rt,(uint8_t)(0xE526u>>8)); dd3_static_push8(rt,(uint8_t)0xE526u);
            rt->state.cpu.pc=0xFEBFu; return dd3_static_complete(rt,6u);
        }
        case 0xE527u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE529u; return dd3_static_complete(rt,2u);
        }
        case 0xE529u: {
            dd3_static_write8(rt,0x97u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE52Bu; return dd3_static_complete(rt,3u);
        }
        case 0xE52Bu: {
            dd3_static_write8(rt,0x98u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE52Du; return dd3_static_complete(rt,3u);
        }
        case 0xE52Du: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE52Fu; return dd3_static_complete(rt,2u);
        }
        case 0xE52Fu: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE532u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0xE532u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE534u,0xE547u)) c++; rt->state.cpu.pc=0xE547u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE534u; return dd3_static_complete(rt,2u);
        }
        case 0xE534u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE536u; return dd3_static_complete(rt,2u);
        }
        case 0xE536u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE537u; return dd3_static_complete(rt,2u);
        }
        case 0xE537u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE539u; return dd3_static_complete(rt,2u);
        }
        case 0xE539u: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE53Cu; return dd3_static_complete(rt,5u);
        }
        case 0xE53Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE53Fu; return dd3_static_complete(rt,5u);
        }
        case 0xE53Fu: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xE542u; return dd3_static_complete(rt,5u);
        }
        case 0xE542u: {
            dd3_static_write8(rt,(uint16_t)(0x03B8u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xE545u; return dd3_static_complete(rt,5u);
        }
        case 0xE545u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE547u,0xE564u)) c++; rt->state.cpu.pc=0xE564u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE547u; return dd3_static_complete(rt,2u);
        }
        case 0xE547u: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE549u; return dd3_static_complete(rt,2u);
        }
        case 0xE549u: {
            uint16_t ea=(uint16_t)(0x003Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE54Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Cu,ea)?1u:0u));
        }
        case 0xE54Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE54Eu,0xE55Fu)) c++; rt->state.cpu.pc=0xE55Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE54Eu; return dd3_static_complete(rt,2u);
        }
        case 0xE54Eu: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE551u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0xE551u: {
            uint8_t v=0x11u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xE553u; return dd3_static_complete(rt,2u);
        }
        case 0xE553u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE555u,0xE55Fu)) c++; rt->state.cpu.pc=0xE55Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE555u; return dd3_static_complete(rt,2u);
        }
        case 0xE555u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE557u; return dd3_static_complete(rt,2u);
        }
        case 0xE557u: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xE55Au; return dd3_static_complete(rt,5u);
        }
        case 0xE55Au: {
            dd3_static_write8(rt,(uint16_t)(0x03B8u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xE55Du; return dd3_static_complete(rt,5u);
        }
        case 0xE55Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE55Fu,0xE564u)) c++; rt->state.cpu.pc=0xE564u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE55Fu; return dd3_static_complete(rt,2u);
        }
        case 0xE55Fu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE560u; return dd3_static_complete(rt,2u);
        }
        case 0xE560u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xE562u; return dd3_static_complete(rt,2u);
        }
        case 0xE562u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE564u,0xE549u)) c++; rt->state.cpu.pc=0xE549u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE564u; return dd3_static_complete(rt,2u);
        }
        case 0xE564u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE565u; return dd3_static_complete(rt,2u);
        }
        case 0xE565u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE567u,0xE52Fu)) c++; rt->state.cpu.pc=0xE52Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE567u; return dd3_static_complete(rt,2u);
        }
        case 0xE567u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE569u; return dd3_static_complete(rt,3u);
        }
        case 0xE569u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE56Bu,0xE575u)) c++; rt->state.cpu.pc=0xE575u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE56Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE56Bu: {
            uint16_t ea=0x74u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE56Du; return dd3_static_complete(rt,3u);
        }
        case 0xE56Du: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE56Fu; return dd3_static_complete(rt,3u);
        }
        case 0xE56Fu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE570u; return dd3_static_complete(rt,2u);
        }
        case 0xE570u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE572u; return dd3_static_complete(rt,2u);
        }
        case 0xE572u: {
            dd3_static_write8(rt,(uint16_t)(0x04D3u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE575u; return dd3_static_complete(rt,5u);
        }
        case 0xE575u: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE577u; return dd3_static_complete(rt,3u);
        }
        case 0xE577u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE579u,0xE583u)) c++; rt->state.cpu.pc=0xE583u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE579u; return dd3_static_complete(rt,2u);
        }
        case 0xE579u: {
            uint16_t ea=0x75u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE57Bu; return dd3_static_complete(rt,3u);
        }
        case 0xE57Bu: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE57Du; return dd3_static_complete(rt,3u);
        }
        case 0xE57Du: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE57Eu; return dd3_static_complete(rt,2u);
        }
        case 0xE57Eu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE580u; return dd3_static_complete(rt,2u);
        }
        case 0xE580u: {
            dd3_static_write8(rt,(uint16_t)(0x04D3u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE583u; return dd3_static_complete(rt,5u);
        }
        case 0xE583u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE585u; return dd3_static_complete(rt,2u);
        }
        case 0xE585u: {
            dd3_static_push8(rt,(uint8_t)(0xE587u>>8)); dd3_static_push8(rt,(uint8_t)0xE587u);
            rt->state.cpu.pc=0xE887u; return dd3_static_complete(rt,6u);
        }
        case 0xE588u: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE58Au; return dd3_static_complete(rt,2u);
        }
        case 0xE58Au: {
            dd3_static_push8(rt,(uint8_t)(0xE58Cu>>8)); dd3_static_push8(rt,(uint8_t)0xE58Cu);
            rt->state.cpu.pc=0xE887u; return dd3_static_complete(rt,6u);
        }
        case 0xE58Du: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE58Fu; return dd3_static_complete(rt,3u);
        }
        case 0xE58Fu: {
            dd3_static_write8(rt,0x23u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE591u; return dd3_static_complete(rt,3u);
        }
        case 0xE591u: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE593u; return dd3_static_complete(rt,3u);
        }
        case 0xE593u: {
            dd3_static_write8(rt,0x24u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE595u; return dd3_static_complete(rt,3u);
        }
        case 0xE595u: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE597u; return dd3_static_complete(rt,3u);
        }
        case 0xE597u: {
            uint16_t ea=0x98u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE599u; return dd3_static_complete(rt,3u);
        }
        case 0xE599u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE59Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE59Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE59Du,0xE5A3u)) c++; rt->state.cpu.pc=0xE5A3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE59Du; return dd3_static_complete(rt,2u);
        }
        case 0xE59Du: {
            uint16_t ea=0x23u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE59Fu; return dd3_static_complete(rt,3u);
        }
        case 0xE59Fu: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE5A1u; return dd3_static_complete(rt,3u);
        }
        case 0xE5A1u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE5A3u,0xE5B2u)) c++; rt->state.cpu.pc=0xE5B2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE5A3u; return dd3_static_complete(rt,2u);
        }
        case 0xE5A3u: {
            dd3_static_push8(rt,(uint8_t)(0xE5A5u>>8)); dd3_static_push8(rt,(uint8_t)0xE5A5u);
            rt->state.cpu.pc=0xE6DFu; return dd3_static_complete(rt,6u);
        }
        case 0xE5A6u: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5A8u; return dd3_static_complete(rt,3u);
        }
        case 0xE5A8u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xE5AAu; return dd3_static_complete(rt,2u);
        }
        case 0xE5AAu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE5ACu,0xE5A6u)) c++; rt->state.cpu.pc=0xE5A6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE5ACu; return dd3_static_complete(rt,2u);
        }
        case 0xE5ACu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5AEu; return dd3_static_complete(rt,2u);
        }
        case 0xE5AEu: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE5B0u; return dd3_static_complete(rt,3u);
        }
        case 0xE5B0u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE5B2u,0xE595u)) c++; rt->state.cpu.pc=0xE595u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE5B2u; return dd3_static_complete(rt,2u);
        }
        case 0xE5B2u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5B4u; return dd3_static_complete(rt,3u);
        }
        case 0xE5B4u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE5B6u,0xE5C5u)) c++; rt->state.cpu.pc=0xE5C5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE5B6u; return dd3_static_complete(rt,2u);
        }
        case 0xE5B6u: {
            uint16_t ea=0x23u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5B8u; return dd3_static_complete(rt,3u);
        }
        case 0xE5B8u: {
            dd3_static_write8(rt,0x74u,rt->state.cpu.x);
            rt->state.cpu.pc=0xE5BAu; return dd3_static_complete(rt,3u);
        }
        case 0xE5BAu: {
            uint16_t ea=(uint16_t)(0x04D8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5BDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04D8u,ea)?1u:0u));
        }
        case 0xE5BDu: {
            dd3_static_write8(rt,0x045Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xE5C0u; return dd3_static_complete(rt,4u);
        }
        case 0xE5C0u: {
            uint8_t v=0x81u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5C2u; return dd3_static_complete(rt,2u);
        }
        case 0xE5C2u: {
            dd3_static_write8(rt,(uint16_t)(0x04D3u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE5C5u; return dd3_static_complete(rt,5u);
        }
        case 0xE5C5u: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5C7u; return dd3_static_complete(rt,3u);
        }
        case 0xE5C7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE5C9u,0xE5D8u)) c++; rt->state.cpu.pc=0xE5D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE5C9u; return dd3_static_complete(rt,2u);
        }
        case 0xE5C9u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5CBu; return dd3_static_complete(rt,3u);
        }
        case 0xE5CBu: {
            dd3_static_write8(rt,0x75u,rt->state.cpu.x);
            rt->state.cpu.pc=0xE5CDu; return dd3_static_complete(rt,3u);
        }
        case 0xE5CDu: {
            uint16_t ea=(uint16_t)(0x04D8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5D0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04D8u,ea)?1u:0u));
        }
        case 0xE5D0u: {
            dd3_static_write8(rt,0x045Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE5D3u; return dd3_static_complete(rt,4u);
        }
        case 0xE5D3u: {
            uint8_t v=0x81u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5D5u; return dd3_static_complete(rt,2u);
        }
        case 0xE5D5u: {
            dd3_static_write8(rt,(uint16_t)(0x04D3u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE5D8u; return dd3_static_complete(rt,5u);
        }
        case 0xE5D8u: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5DAu; return dd3_static_complete(rt,2u);
        }
        case 0xE5DAu: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5DCu; return dd3_static_complete(rt,4u);
        }
        case 0xE5DCu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE5DEu,0xE64Eu)) c++; rt->state.cpu.pc=0xE64Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE5DEu; return dd3_static_complete(rt,2u);
        }
        case 0xE5DEu: {
            uint16_t ea=(uint16_t)((0xB3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5E0u; return dd3_static_complete(rt,4u);
        }
        case 0xE5E0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE5E2u,0xE64Eu)) c++; rt->state.cpu.pc=0xE64Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE5E2u; return dd3_static_complete(rt,2u);
        }
        case 0xE5E2u: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5E4u; return dd3_static_complete(rt,2u);
        }
        case 0xE5E4u: {
            uint16_t ea=(uint16_t)(0x003Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5E7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Cu,ea)?1u:0u));
        }
        case 0xE5E7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE5E9u,0xE620u)) c++; rt->state.cpu.pc=0xE620u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE5E9u; return dd3_static_complete(rt,2u);
        }
        case 0xE5E9u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE5EAu; return dd3_static_complete(rt,2u);
        }
        case 0xE5EAu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xE5ECu; return dd3_static_complete(rt,2u);
        }
        case 0xE5ECu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE5EEu,0xE5E4u)) c++; rt->state.cpu.pc=0xE5E4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE5EEu; return dd3_static_complete(rt,2u);
        }
        case 0xE5EEu: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5F0u; return dd3_static_complete(rt,2u);
        }
        case 0xE5F0u: {
            uint16_t ea=(uint16_t)(0x03F1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE5F3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F1u,ea)?1u:0u));
        }
        case 0xE5F3u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xE5F5u; return dd3_static_complete(rt,2u);
        }
        case 0xE5F5u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE5F7u,0xE5FEu)) c++; rt->state.cpu.pc=0xE5FEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE5F7u; return dd3_static_complete(rt,2u);
        }
        case 0xE5F7u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE5F8u; return dd3_static_complete(rt,2u);
        }
        case 0xE5F8u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xE5FAu; return dd3_static_complete(rt,2u);
        }
        case 0xE5FAu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE5FCu,0xE5F0u)) c++; rt->state.cpu.pc=0xE5F0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE5FCu; return dd3_static_complete(rt,2u);
        }
        case 0xE5FCu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE5FEu,0xE64Eu)) c++; rt->state.cpu.pc=0xE64Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE5FEu; return dd3_static_complete(rt,2u);
        }
        case 0xE5FEu: {
            dd3_static_write8(rt,0x26u,rt->state.cpu.y);
            rt->state.cpu.pc=0xE600u; return dd3_static_complete(rt,3u);
        }
        case 0xE600u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE601u; return dd3_static_complete(rt,3u);
        }
        case 0xE601u: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE604u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0xE604u: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE606u; return dd3_static_complete(rt,2u);
        }
        case 0xE606u: {
            dd3_static_write8(rt,(uint16_t)(0x004Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xE609u; return dd3_static_complete(rt,5u);
        }
        case 0xE609u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE60Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE60Bu: {
            dd3_static_write8(rt,(uint16_t)(0x03F1u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xE60Eu; return dd3_static_complete(rt,5u);
        }
        case 0xE60Eu: {
            dd3_static_write8(rt,(uint16_t)(0x03B8u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xE611u; return dd3_static_complete(rt,5u);
        }
        case 0xE611u: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xE614u; return dd3_static_complete(rt,5u);
        }
        case 0xE614u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE615u; return dd3_static_complete(rt,4u);
        }
        case 0xE615u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE616u; return dd3_static_complete(rt,2u);
        }
        case 0xE616u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE618u; return dd3_static_complete(rt,2u);
        }
        case 0xE618u: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xE61Bu; return dd3_static_complete(rt,5u);
        }
        case 0xE61Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xE61Eu; return dd3_static_complete(rt,5u);
        }
        case 0xE61Eu: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE620u; return dd3_static_complete(rt,3u);
        }
        case 0xE620u: {
            dd3_static_write8(rt,0x26u,rt->state.cpu.y);
            rt->state.cpu.pc=0xE622u; return dd3_static_complete(rt,3u);
        }
        case 0xE622u: {
            uint16_t ea=(uint16_t)((0x23u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE624u; return dd3_static_complete(rt,4u);
        }
        case 0xE624u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE625u; return dd3_static_complete(rt,2u);
        }
        case 0xE625u: {
            uint16_t ea=(uint16_t)(0xE6DBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE628u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE6DBu,ea)?1u:0u));
        }
        case 0xE628u: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE62Au; return dd3_static_complete(rt,3u);
        }
        case 0xE62Au: {
            dd3_static_write8(rt,(uint16_t)(0x0074u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xE62Du; return dd3_static_complete(rt,5u);
        }
        case 0xE62Du: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE62Fu; return dd3_static_complete(rt,2u);
        }
        case 0xE62Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE632u; return dd3_static_complete(rt,5u);
        }
        case 0xE632u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE634u; return dd3_static_complete(rt,2u);
        }
        case 0xE634u: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xE637u; return dd3_static_complete(rt,5u);
        }
        case 0xE637u: {
            dd3_static_write8(rt,(uint16_t)(0x007Du+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xE63Au; return dd3_static_complete(rt,5u);
        }
        case 0xE63Au: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE63Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE63Bu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE63Du; return dd3_static_complete(rt,2u);
        }
        case 0xE63Du: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE640u; return dd3_static_complete(rt,5u);
        }
        case 0xE640u: {
            uint8_t v=0x82u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE642u; return dd3_static_complete(rt,2u);
        }
        case 0xE642u: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xE645u; return dd3_static_complete(rt,5u);
        }
        case 0xE645u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE646u; return dd3_static_complete(rt,2u);
        }
        case 0xE646u: {
            dd3_static_write8(rt,(uint16_t)(0x03F1u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xE649u; return dd3_static_complete(rt,5u);
        }
        case 0xE649u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE64Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE64Bu: {
            dd3_static_write8(rt,(uint16_t)(0x03B8u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xE64Eu; return dd3_static_complete(rt,5u);
        }
        case 0xE64Eu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE64Fu; return dd3_static_complete(rt,2u);
        }
        case 0xE64Fu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE651u,0xE5DAu)) c++; rt->state.cpu.pc=0xE5DAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE651u; return dd3_static_complete(rt,2u);
        }
        case 0xE651u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE653u; return dd3_static_complete(rt,2u);
        }
        case 0xE653u: {
            dd3_static_write8(rt,0x04DDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE656u; return dd3_static_complete(rt,4u);
        }
        case 0xE656u: {
            dd3_static_push8(rt,(uint8_t)(0xE658u>>8)); dd3_static_push8(rt,(uint8_t)0xE658u);
            rt->state.cpu.pc=0xEF2Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE659u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE65Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE65Bu: {
            dd3_static_push8(rt,(uint8_t)(0xE65Du>>8)); dd3_static_push8(rt,(uint8_t)0xE65Du);
            rt->state.cpu.pc=0xF5BDu; return dd3_static_complete(rt,6u);
        }
        case 0xE65Eu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE660u; return dd3_static_complete(rt,2u);
        }
        case 0xE660u: {
            dd3_static_write8(rt,0xA000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE663u; return dd3_static_complete(rt,4u);
        }
        case 0xE663u: {
            dd3_static_push8(rt,(uint8_t)(0xE665u>>8)); dd3_static_push8(rt,(uint8_t)0xE665u);
            rt->state.cpu.pc=0xD198u; return dd3_static_complete(rt,6u);
        }
        case 0xE666u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE667u; return dd3_static_complete(rt,4u);
        }
        case 0xE667u: {
            dd3_static_write8(rt,0x04E7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE66Au; return dd3_static_complete(rt,4u);
        }
        case 0xE66Au: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE66Bu; return dd3_static_complete(rt,4u);
        }
        case 0xE66Bu: {
            dd3_static_write8(rt,0x04E6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE66Eu; return dd3_static_complete(rt,4u);
        }
        case 0xE66Eu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE66Fu; return dd3_static_complete(rt,4u);
        }
        case 0xE66Fu: {
            dd3_static_write8(rt,0x04DEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE672u; return dd3_static_complete(rt,4u);
        }
        case 0xE672u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE673u; return dd3_static_complete(rt,4u);
        }
        case 0xE673u: {
            dd3_static_write8(rt,0x04DDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE676u; return dd3_static_complete(rt,4u);
        }
        case 0xE676u: {
            dd3_static_push8(rt,(uint8_t)(0xE678u>>8)); dd3_static_push8(rt,(uint8_t)0xE678u);
            rt->state.cpu.pc=0xFEEEu; return dd3_static_complete(rt,6u);
        }
        case 0xE679u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE67Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE67Bu: {
            dd3_static_write8(rt,0x44u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE67Du; return dd3_static_complete(rt,3u);
        }
        case 0xE67Du: {
            dd3_static_write8(rt,0x45u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE67Fu; return dd3_static_complete(rt,3u);
        }
        case 0xE67Fu: {
            uint16_t ea=0x04F0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE682u; return dd3_static_complete(rt,4u);
        }
        case 0xE682u: {
            dd3_static_write8(rt,0x04EEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE685u; return dd3_static_complete(rt,4u);
        }
        case 0xE685u: {
            uint16_t ea=0x04F1u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE688u; return dd3_static_complete(rt,4u);
        }
        case 0xE688u: {
            dd3_static_write8(rt,0x04EFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE68Bu; return dd3_static_complete(rt,4u);
        }
        case 0xE68Bu: {
            dd3_static_push8(rt,(uint8_t)(0xE68Du>>8)); dd3_static_push8(rt,(uint8_t)0xE68Du);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xE68Eu: {
            dd3_static_push8(rt,(uint8_t)(0xE690u>>8)); dd3_static_push8(rt,(uint8_t)0xE690u);
            rt->state.cpu.pc=0xFCF6u; return dd3_static_complete(rt,6u);
        }
        case 0xE691u: {
            dd3_static_push8(rt,(uint8_t)(0xE693u>>8)); dd3_static_push8(rt,(uint8_t)0xE693u);
            rt->state.cpu.pc=0xD052u; return dd3_static_complete(rt,6u);
        }
        case 0xE694u: {
            dd3_static_push8(rt,(uint8_t)(0xE696u>>8)); dd3_static_push8(rt,(uint8_t)0xE696u);
            rt->state.cpu.pc=0xC017u; return dd3_static_complete(rt,6u);
        }
        case 0xE697u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE698u; return dd3_static_complete(rt,4u);
        }
        case 0xE698u: {
            dd3_static_write8(rt,0x91u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE69Au; return dd3_static_complete(rt,3u);
        }
        case 0xE69Au: {
            dd3_static_push8(rt,(uint8_t)(0xE69Cu>>8)); dd3_static_push8(rt,(uint8_t)0xE69Cu);
            rt->state.cpu.pc=0xD052u; return dd3_static_complete(rt,6u);
        }
        case 0xE69Du: {
            dd3_static_push8(rt,(uint8_t)(0xE69Fu>>8)); dd3_static_push8(rt,(uint8_t)0xE69Fu);
            rt->state.cpu.pc=0xFCE3u; return dd3_static_complete(rt,6u);
        }
        case 0xE6A0u: {
            dd3_static_push8(rt,(uint8_t)(0xE6A2u>>8)); dd3_static_push8(rt,(uint8_t)0xE6A2u);
            rt->state.cpu.pc=0xFE75u; return dd3_static_complete(rt,6u);
        }
        case 0xE6A3u: {
            dd3_static_push8(rt,(uint8_t)(0xE6A5u>>8)); dd3_static_push8(rt,(uint8_t)0xE6A5u);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xE6A6u: {
            dd3_static_push8(rt,(uint8_t)(0xE6A8u>>8)); dd3_static_push8(rt,(uint8_t)0xE6A8u);
            rt->state.cpu.pc=0xD1B9u; return dd3_static_complete(rt,6u);
        }
        case 0xE6A9u: {
            dd3_static_push8(rt,(uint8_t)(0xE6ABu>>8)); dd3_static_push8(rt,(uint8_t)0xE6ABu);
            rt->state.cpu.pc=0xD17Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE6ACu: {
            dd3_static_push8(rt,(uint8_t)(0xE6AEu>>8)); dd3_static_push8(rt,(uint8_t)0xE6AEu);
            rt->state.cpu.pc=0xD920u; return dd3_static_complete(rt,6u);
        }
        case 0xE6AFu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE6B1u; return dd3_static_complete(rt,2u);
        }
        case 0xE6B1u: {
            dd3_static_write8(rt,0x04D1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE6B4u; return dd3_static_complete(rt,4u);
        }
        case 0xE6B4u: {
            dd3_static_push8(rt,(uint8_t)(0xE6B6u>>8)); dd3_static_push8(rt,(uint8_t)0xE6B6u);
            rt->state.cpu.pc=0xFCB1u; return dd3_static_complete(rt,6u);
        }
        case 0xE6B7u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE6B9u; return dd3_static_complete(rt,2u);
        }
        case 0xE6B9u: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE6BBu; return dd3_static_complete(rt,3u);
        }
        case 0xE6BBu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE6BDu; return dd3_static_complete(rt,2u);
        }
        case 0xE6BDu: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE6BFu; return dd3_static_complete(rt,3u);
        }
        case 0xE6BFu: {
            dd3_static_push8(rt,(uint8_t)(0xE6C1u>>8)); dd3_static_push8(rt,(uint8_t)0xE6C1u);
            rt->state.cpu.pc=0xE3B7u; return dd3_static_complete(rt,6u);
        }
        case 0xE6C2u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE6C4u; return dd3_static_complete(rt,3u);
        }
        case 0xE6C4u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE6C6u; return dd3_static_complete(rt,2u);
        }
        case 0xE6C6u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE6C8u; return dd3_static_complete(rt,3u);
        }
        case 0xE6C8u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE6CAu; return dd3_static_complete(rt,2u);
        }
        case 0xE6CAu: {
            dd3_static_push8(rt,(uint8_t)(0xE6CCu>>8)); dd3_static_push8(rt,(uint8_t)0xE6CCu);
            rt->state.cpu.pc=0xF5BDu; return dd3_static_complete(rt,6u);
        }
        case 0xE6CDu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE6CFu; return dd3_static_complete(rt,2u);
        }
        case 0xE6CFu: {
            dd3_static_push8(rt,(uint8_t)(0xE6D1u>>8)); dd3_static_push8(rt,(uint8_t)0xE6D1u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xE6D2u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE6D4u; return dd3_static_complete(rt,2u);
        }
        case 0xE6D4u: {
            dd3_static_write8(rt,0x0309u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE6D7u; return dd3_static_complete(rt,4u);
        }
        case 0xE6D7u: {
            dd3_static_write8(rt,0x030Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xE6DAu; return dd3_static_complete(rt,4u);
        }
        case 0xE6DAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE6DFu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE6E1u; return dd3_static_complete(rt,2u);
        }
        case 0xE6E1u: {
            dd3_static_push8(rt,(uint8_t)(0xE6E3u>>8)); dd3_static_push8(rt,(uint8_t)0xE6E3u);
            rt->state.cpu.pc=0xE6EAu; return dd3_static_complete(rt,6u);
        }
        case 0xE6E4u: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE6E6u; return dd3_static_complete(rt,2u);
        }
        case 0xE6E6u: {
            dd3_static_push8(rt,(uint8_t)(0xE6E8u>>8)); dd3_static_push8(rt,(uint8_t)0xE6E8u);
            rt->state.cpu.pc=0xE6EAu; return dd3_static_complete(rt,6u);
        }
        case 0xE6E9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE6EAu: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE6ECu; return dd3_static_complete(rt,4u);
        }
        case 0xE6ECu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE6EEu,0xE6E9u)) c++; rt->state.cpu.pc=0xE6E9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE6EEu; return dd3_static_complete(rt,2u);
        }
        case 0xE6EEu: {
            uint16_t ea=(uint16_t)((0x23u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE6F0u; return dd3_static_complete(rt,4u);
        }
        case 0xE6F0u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE6F2u,0xE6F5u)) c++; rt->state.cpu.pc=0xE6F5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE6F2u; return dd3_static_complete(rt,2u);
        }
        case 0xE6F2u: {
            rt->state.cpu.pc=0xE78Du; return dd3_static_complete(rt,3u);
        }
        case 0xE6F5u: {
            uint16_t ea=(uint16_t)((0x97u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE6F7u; return dd3_static_complete(rt,4u);
        }
        case 0xE6F7u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE6F8u; return dd3_static_complete(rt,2u);
        }
        case 0xE6F8u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE6FAu,0xE70Bu)) c++; rt->state.cpu.pc=0xE70Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE6FAu; return dd3_static_complete(rt,2u);
        }
        case 0xE6FAu: {
            uint16_t ea=(uint16_t)((0xB3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE6FCu; return dd3_static_complete(rt,4u);
        }
        case 0xE6FCu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE6FDu; return dd3_static_complete(rt,2u);
        }
        case 0xE6FDu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE6FEu; return dd3_static_complete(rt,2u);
        }
        case 0xE6FEu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xE700u; return dd3_static_complete(rt,2u);
        }
        case 0xE700u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE702u,0xE704u)) c++; rt->state.cpu.pc=0xE704u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE702u; return dd3_static_complete(rt,2u);
        }
        case 0xE702u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE704u; return dd3_static_complete(rt,2u);
        }
        case 0xE704u: {
            uint16_t ea=(uint16_t)(0x04D3u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE707u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04D3u,ea)?1u:0u));
        }
        case 0xE707u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE709u,0xE6FDu)) c++; rt->state.cpu.pc=0xE6FDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE709u; return dd3_static_complete(rt,2u);
        }
        case 0xE709u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE70Bu,0xE71Du)) c++; rt->state.cpu.pc=0xE71Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE70Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE70Bu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE70Cu; return dd3_static_complete(rt,2u);
        }
        case 0xE70Cu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE70Eu,0xE72Du)) c++; rt->state.cpu.pc=0xE72Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE70Eu; return dd3_static_complete(rt,2u);
        }
        case 0xE70Eu: {
            uint16_t ea=(uint16_t)((0xB3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE710u; return dd3_static_complete(rt,4u);
        }
        case 0xE710u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE711u; return dd3_static_complete(rt,2u);
        }
        case 0xE711u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE712u; return dd3_static_complete(rt,2u);
        }
        case 0xE712u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE714u,0xE716u)) c++; rt->state.cpu.pc=0xE716u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE714u; return dd3_static_complete(rt,2u);
        }
        case 0xE714u: {
            uint8_t v=0x03u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE716u; return dd3_static_complete(rt,2u);
        }
        case 0xE716u: {
            uint16_t ea=(uint16_t)(0x04D3u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE719u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04D3u,ea)?1u:0u));
        }
        case 0xE719u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE71Bu,0xE711u)) c++; rt->state.cpu.pc=0xE711u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE71Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE71Bu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE71Du,0xE71Du)) c++; rt->state.cpu.pc=0xE71Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE71Du; return dd3_static_complete(rt,2u);
        }
        case 0xE71Du: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE71Eu; return dd3_static_complete(rt,2u);
        }
        case 0xE71Eu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE71Fu; return dd3_static_complete(rt,3u);
        }
        case 0xE71Fu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE720u; return dd3_static_complete(rt,2u);
        }
        case 0xE720u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE721u; return dd3_static_complete(rt,3u);
        }
        case 0xE721u: {
            dd3_static_push8(rt,(uint8_t)(0xE723u>>8)); dd3_static_push8(rt,(uint8_t)0xE723u);
            rt->state.cpu.pc=0xE825u; return dd3_static_complete(rt,6u);
        }
        case 0xE724u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE725u; return dd3_static_complete(rt,4u);
        }
        case 0xE725u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE726u; return dd3_static_complete(rt,2u);
        }
        case 0xE726u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE727u; return dd3_static_complete(rt,4u);
        }
        case 0xE727u: {
            dd3_static_write8(rt,(uint16_t)((0xB3u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xE729u; return dd3_static_complete(rt,4u);
        }
        case 0xE729u: {
            dd3_static_push8(rt,(uint8_t)(0xE72Bu>>8)); dd3_static_push8(rt,(uint8_t)0xE72Bu);
            rt->state.cpu.pc=0xE887u; return dd3_static_complete(rt,6u);
        }
        case 0xE72Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE72Du: {
            uint16_t ea=(uint16_t)((0x97u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE72Fu; return dd3_static_complete(rt,4u);
        }
        case 0xE72Fu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE730u; return dd3_static_complete(rt,2u);
        }
        case 0xE730u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE732u,0xE72Cu)) c++; rt->state.cpu.pc=0xE72Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE732u; return dd3_static_complete(rt,2u);
        }
        case 0xE732u: {
            uint16_t ea=(uint16_t)((0xB3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE734u; return dd3_static_complete(rt,4u);
        }
        case 0xE734u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xE736u; return dd3_static_complete(rt,2u);
        }
        case 0xE736u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE738u,0xE72Cu)) c++; rt->state.cpu.pc=0xE72Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE738u; return dd3_static_complete(rt,2u);
        }
        case 0xE738u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE739u; return dd3_static_complete(rt,2u);
        }
        case 0xE739u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE73Bu; return dd3_static_complete(rt,3u);
        }
        case 0xE73Bu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE73Du,0xE741u)) c++; rt->state.cpu.pc=0xE741u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE73Du; return dd3_static_complete(rt,2u);
        }
        case 0xE73Du: {
            uint16_t ea=0x23u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xE73Fu; return dd3_static_complete(rt,3u);
        }
        case 0xE73Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE741u,0xE72Cu)) c++; rt->state.cpu.pc=0xE72Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE741u; return dd3_static_complete(rt,2u);
        }
        case 0xE741u: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE743u; return dd3_static_complete(rt,3u);
        }
        case 0xE743u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE745u,0xE749u)) c++; rt->state.cpu.pc=0xE749u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE745u; return dd3_static_complete(rt,2u);
        }
        case 0xE745u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xE747u; return dd3_static_complete(rt,3u);
        }
        case 0xE747u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE749u,0xE72Cu)) c++; rt->state.cpu.pc=0xE72Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE749u; return dd3_static_complete(rt,2u);
        }
        case 0xE749u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE74Au; return dd3_static_complete(rt,2u);
        }
        case 0xE74Au: {
            dd3_static_write8(rt,(uint16_t)((0x23u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xE74Cu; return dd3_static_complete(rt,4u);
        }
        case 0xE74Cu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE74Eu; return dd3_static_complete(rt,2u);
        }
        case 0xE74Eu: {
            dd3_static_write8(rt,(uint16_t)((0xB3u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xE750u; return dd3_static_complete(rt,4u);
        }
        case 0xE750u: {
            dd3_static_push8(rt,(uint8_t)(0xE752u>>8)); dd3_static_push8(rt,(uint8_t)0xE752u);
            rt->state.cpu.pc=0xE7C4u; return dd3_static_complete(rt,6u);
        }
        case 0xE753u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE754u; return dd3_static_complete(rt,2u);
        }
        case 0xE754u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE755u; return dd3_static_complete(rt,3u);
        }
        case 0xE755u: {
            uint16_t ea=(uint16_t)((0x23u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE757u; return dd3_static_complete(rt,4u);
        }
        case 0xE757u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE758u; return dd3_static_complete(rt,2u);
        }
        case 0xE758u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE759u; return dd3_static_complete(rt,2u);
        }
        case 0xE759u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE75Cu; return dd3_static_complete(rt,4u);
        }
        case 0xE75Cu: {
            uint16_t ea=(uint16_t)(0xE783u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE75Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE783u,ea)?1u:0u));
        }
        case 0xE75Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE762u; return dd3_static_complete(rt,5u);
        }
        case 0xE762u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE763u; return dd3_static_complete(rt,2u);
        }
        case 0xE763u: {
            uint16_t ea=(uint16_t)(0xE784u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE766u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE784u,ea)?1u:0u));
        }
        case 0xE766u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE769u; return dd3_static_complete(rt,5u);
        }
        case 0xE769u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE76Au; return dd3_static_complete(rt,2u);
        }
        case 0xE76Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE76Cu; return dd3_static_complete(rt,2u);
        }
        case 0xE76Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE76Fu; return dd3_static_complete(rt,5u);
        }
        case 0xE76Fu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE770u; return dd3_static_complete(rt,2u);
        }
        case 0xE770u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE772u; return dd3_static_complete(rt,2u);
        }
        case 0xE772u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE775u; return dd3_static_complete(rt,5u);
        }
        case 0xE775u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE776u; return dd3_static_complete(rt,2u);
        }
        case 0xE776u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE777u; return dd3_static_complete(rt,4u);
        }
        case 0xE777u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE778u; return dd3_static_complete(rt,2u);
        }
        case 0xE778u: {
            uint16_t ea=(uint16_t)(0xE78Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE77Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE78Bu,ea)?1u:0u));
        }
        case 0xE77Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE77Eu; return dd3_static_complete(rt,5u);
        }
        case 0xE77Eu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE77Fu; return dd3_static_complete(rt,2u);
        }
        case 0xE77Fu: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xE782u; return dd3_static_complete(rt,4u);
        }
        case 0xE782u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE78Du: {
            uint16_t ea=(uint16_t)((0x97u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE78Fu; return dd3_static_complete(rt,4u);
        }
        case 0xE78Fu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE790u; return dd3_static_complete(rt,2u);
        }
        case 0xE790u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE791u; return dd3_static_complete(rt,2u);
        }
        case 0xE791u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE793u,0xE7A3u)) c++; rt->state.cpu.pc=0xE7A3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE793u; return dd3_static_complete(rt,2u);
        }
        case 0xE793u: {
            uint16_t ea=(uint16_t)((0x23u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE795u; return dd3_static_complete(rt,4u);
        }
        case 0xE795u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE797u,0xE7A2u)) c++; rt->state.cpu.pc=0xE7A2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE797u; return dd3_static_complete(rt,2u);
        }
        case 0xE797u: {
            dd3_static_push8(rt,(uint8_t)(0xE799u>>8)); dd3_static_push8(rt,(uint8_t)0xE799u);
            rt->state.cpu.pc=0xE7D1u; return dd3_static_complete(rt,6u);
        }
        case 0xE79Au: {
            uint16_t ea=(uint16_t)((0x23u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE79Cu; return dd3_static_complete(rt,4u);
        }
        case 0xE79Cu: {
            dd3_static_write8(rt,(uint16_t)((0xB3u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xE79Eu; return dd3_static_complete(rt,4u);
        }
        case 0xE79Eu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE7A0u; return dd3_static_complete(rt,2u);
        }
        case 0xE7A0u: {
            dd3_static_write8(rt,(uint16_t)((0x23u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xE7A2u; return dd3_static_complete(rt,4u);
        }
        case 0xE7A2u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE7A3u: {
            uint16_t ea=(uint16_t)((0x97u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE7A5u; return dd3_static_complete(rt,4u);
        }
        case 0xE7A5u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE7A6u; return dd3_static_complete(rt,2u);
        }
        case 0xE7A6u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE7A7u; return dd3_static_complete(rt,2u);
        }
        case 0xE7A7u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE7A8u; return dd3_static_complete(rt,2u);
        }
        case 0xE7A8u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE7AAu,0xE7AEu)) c++; rt->state.cpu.pc=0xE7AEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE7AAu; return dd3_static_complete(rt,2u);
        }
        case 0xE7AAu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE7ACu; return dd3_static_complete(rt,2u);
        }
        case 0xE7ACu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE7AEu,0xE7BBu)) c++; rt->state.cpu.pc=0xE7BBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE7AEu; return dd3_static_complete(rt,2u);
        }
        case 0xE7AEu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE7AFu; return dd3_static_complete(rt,2u);
        }
        case 0xE7AFu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE7B1u,0xE7C3u)) c++; rt->state.cpu.pc=0xE7C3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE7B1u; return dd3_static_complete(rt,2u);
        }
        case 0xE7B1u: {
            uint16_t ea=(uint16_t)((0x23u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE7B3u; return dd3_static_complete(rt,4u);
        }
        case 0xE7B3u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE7B4u; return dd3_static_complete(rt,2u);
        }
        case 0xE7B4u: {
            uint16_t ea=(uint16_t)(0x06DFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE7B7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06DFu,ea)?1u:0u));
        }
        case 0xE7B7u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE7B9u,0xE7C3u)) c++; rt->state.cpu.pc=0xE7C3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE7B9u; return dd3_static_complete(rt,2u);
        }
        case 0xE7B9u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE7BBu; return dd3_static_complete(rt,2u);
        }
        case 0xE7BBu: {
            dd3_static_push8(rt,(uint8_t)(0xE7BDu>>8)); dd3_static_push8(rt,(uint8_t)0xE7BDu);
            rt->state.cpu.pc=0xE7D1u; return dd3_static_complete(rt,6u);
        }
        case 0xE7BEu: {
            dd3_static_write8(rt,(uint16_t)((0xB3u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xE7C0u; return dd3_static_complete(rt,4u);
        }
        case 0xE7C0u: {
            dd3_static_push8(rt,(uint8_t)(0xE7C2u>>8)); dd3_static_push8(rt,(uint8_t)0xE7C2u);
            rt->state.cpu.pc=0xE7C4u; return dd3_static_complete(rt,6u);
        }
        case 0xE7C3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE7C4u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE7C5u; return dd3_static_complete(rt,3u);
        }
        case 0xE7C5u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE7C6u; return dd3_static_complete(rt,2u);
        }
        case 0xE7C6u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE7C7u; return dd3_static_complete(rt,3u);
        }
        case 0xE7C7u: {
            uint8_t v=0x1Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE7C9u; return dd3_static_complete(rt,2u);
        }
        case 0xE7C9u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE7CBu; return dd3_static_complete(rt,3u);
        }
        case 0xE7CBu: {
            uint8_t v=0x1Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE7CDu; return dd3_static_complete(rt,2u);
        }
        case 0xE7CDu: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE7CFu; return dd3_static_complete(rt,3u);
        }
        case 0xE7CFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE7D1u,0xE7DAu)) c++; rt->state.cpu.pc=0xE7DAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE7D1u; return dd3_static_complete(rt,2u);
        }
        case 0xE7D1u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE7D2u; return dd3_static_complete(rt,3u);
        }
        case 0xE7D2u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE7D3u; return dd3_static_complete(rt,2u);
        }
        case 0xE7D3u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE7D4u; return dd3_static_complete(rt,3u);
        }
        case 0xE7D4u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE7D6u; return dd3_static_complete(rt,2u);
        }
        case 0xE7D6u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE7D8u; return dd3_static_complete(rt,3u);
        }
        case 0xE7D8u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE7DAu; return dd3_static_complete(rt,3u);
        }
        case 0xE7DAu: {
            uint16_t ea=(uint16_t)((0x23u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE7DCu; return dd3_static_complete(rt,4u);
        }
        case 0xE7DCu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE7DDu; return dd3_static_complete(rt,2u);
        }
        case 0xE7DDu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE7DEu; return dd3_static_complete(rt,2u);
        }
        case 0xE7DEu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE7DFu; return dd3_static_complete(rt,2u);
        }
        case 0xE7DFu: {
            uint16_t ea=(uint16_t)((0xB3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE7E1u; return dd3_static_complete(rt,4u);
        }
        case 0xE7E1u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE7E3u,0xE7E5u)) c++; rt->state.cpu.pc=0xE7E5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE7E3u; return dd3_static_complete(rt,2u);
        }
        case 0xE7E3u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE7E4u; return dd3_static_complete(rt,2u);
        }
        case 0xE7E4u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE7E5u; return dd3_static_complete(rt,2u);
        }
        case 0xE7E5u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE7E8u; return dd3_static_complete(rt,4u);
        }
        case 0xE7E8u: {
            uint16_t ea=(uint16_t)(0xE815u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE7EBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE815u,ea)?1u:0u));
        }
        case 0xE7EBu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE7EEu; return dd3_static_complete(rt,5u);
        }
        case 0xE7EEu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE7EFu; return dd3_static_complete(rt,2u);
        }
        case 0xE7EFu: {
            uint16_t ea=(uint16_t)(0xE816u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE7F2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE816u,ea)?1u:0u));
        }
        case 0xE7F2u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE7F5u; return dd3_static_complete(rt,5u);
        }
        case 0xE7F5u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE7F6u; return dd3_static_complete(rt,2u);
        }
        case 0xE7F6u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE7F8u; return dd3_static_complete(rt,2u);
        }
        case 0xE7F8u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE7FBu; return dd3_static_complete(rt,5u);
        }
        case 0xE7FBu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE7FCu; return dd3_static_complete(rt,2u);
        }
        case 0xE7FCu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE7FEu; return dd3_static_complete(rt,2u);
        }
        case 0xE7FEu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE801u; return dd3_static_complete(rt,5u);
        }
        case 0xE801u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE802u; return dd3_static_complete(rt,2u);
        }
        case 0xE802u: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE804u; return dd3_static_complete(rt,3u);
        }
        case 0xE804u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE807u; return dd3_static_complete(rt,5u);
        }
        case 0xE807u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE808u; return dd3_static_complete(rt,2u);
        }
        case 0xE808u: {
            uint16_t ea=0x30u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE80Au; return dd3_static_complete(rt,3u);
        }
        case 0xE80Au: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE80Du; return dd3_static_complete(rt,5u);
        }
        case 0xE80Du: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE80Eu; return dd3_static_complete(rt,2u);
        }
        case 0xE80Eu: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xE811u; return dd3_static_complete(rt,4u);
        }
        case 0xE811u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE812u; return dd3_static_complete(rt,4u);
        }
        case 0xE812u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE813u; return dd3_static_complete(rt,2u);
        }
        case 0xE813u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE814u; return dd3_static_complete(rt,4u);
        }
        case 0xE814u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE825u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE827u; return dd3_static_complete(rt,4u);
        }
        case 0xE827u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE829u,0xE84Fu)) c++; rt->state.cpu.pc=0xE84Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE829u; return dd3_static_complete(rt,2u);
        }
        case 0xE829u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xE82Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE82Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE82Du,0xE83Eu)) c++; rt->state.cpu.pc=0xE83Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE82Du; return dd3_static_complete(rt,2u);
        }
        case 0xE82Du: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE82Fu; return dd3_static_complete(rt,3u);
        }
        case 0xE82Fu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE830u; return dd3_static_complete(rt,2u);
        }
        case 0xE830u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE831u; return dd3_static_complete(rt,2u);
        }
        case 0xE831u: {
            uint16_t ea=(uint16_t)(0xE905u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE834u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE905u,ea)?1u:0u));
        }
        case 0xE834u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xE836u; return dd3_static_complete(rt,3u);
        }
        case 0xE836u: {
            uint16_t ea=(uint16_t)(0xE906u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE839u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE906u,ea)?1u:0u));
        }
        case 0xE839u: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE83Bu; return dd3_static_complete(rt,3u);
        }
        case 0xE83Bu: {
            rt->state.cpu.pc=0xE850u; return dd3_static_complete(rt,3u);
        }
        case 0xE83Eu: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE840u; return dd3_static_complete(rt,3u);
        }
        case 0xE840u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE841u; return dd3_static_complete(rt,2u);
        }
        case 0xE841u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE842u; return dd3_static_complete(rt,2u);
        }
        case 0xE842u: {
            uint16_t ea=(uint16_t)(0xE90Fu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE845u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE90Fu,ea)?1u:0u));
        }
        case 0xE845u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xE847u; return dd3_static_complete(rt,3u);
        }
        case 0xE847u: {
            uint16_t ea=(uint16_t)(0xE910u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE84Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE910u,ea)?1u:0u));
        }
        case 0xE84Au: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE84Cu; return dd3_static_complete(rt,3u);
        }
        case 0xE84Cu: {
            rt->state.cpu.pc=0xE850u; return dd3_static_complete(rt,3u);
        }
        case 0xE84Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE850u: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE852u; return dd3_static_complete(rt,3u);
        }
        case 0xE852u: {
            dd3_static_push8(rt,(uint8_t)(0xE854u>>8)); dd3_static_push8(rt,(uint8_t)0xE854u);
            rt->state.cpu.pc=0xE85Eu; return dd3_static_complete(rt,6u);
        }
        case 0xE855u: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE857u; return dd3_static_complete(rt,3u);
        }
        case 0xE857u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xE858u; return dd3_static_complete(rt,2u);
        }
        case 0xE858u: {
            uint8_t v=0x20u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xE85Au; return dd3_static_complete(rt,2u);
        }
        case 0xE85Au: {
            dd3_static_push8(rt,(uint8_t)(0xE85Cu>>8)); dd3_static_push8(rt,(uint8_t)0xE85Cu);
            rt->state.cpu.pc=0xE85Eu; return dd3_static_complete(rt,6u);
        }
        case 0xE85Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE85Eu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE85Fu; return dd3_static_complete(rt,3u);
        }
        case 0xE85Fu: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE862u; return dd3_static_complete(rt,4u);
        }
        case 0xE862u: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE864u; return dd3_static_complete(rt,3u);
        }
        case 0xE864u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE867u; return dd3_static_complete(rt,5u);
        }
        case 0xE867u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE868u; return dd3_static_complete(rt,2u);
        }
        case 0xE868u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE869u; return dd3_static_complete(rt,4u);
        }
        case 0xE869u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE86Cu; return dd3_static_complete(rt,5u);
        }
        case 0xE86Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE86Du; return dd3_static_complete(rt,2u);
        }
        case 0xE86Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE86Fu; return dd3_static_complete(rt,2u);
        }
        case 0xE86Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE872u; return dd3_static_complete(rt,5u);
        }
        case 0xE872u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE873u; return dd3_static_complete(rt,2u);
        }
        case 0xE873u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE875u; return dd3_static_complete(rt,2u);
        }
        case 0xE875u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE878u; return dd3_static_complete(rt,5u);
        }
        case 0xE878u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE879u; return dd3_static_complete(rt,2u);
        }
        case 0xE879u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE87Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE87Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE87Eu; return dd3_static_complete(rt,5u);
        }
        case 0xE87Eu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE87Fu; return dd3_static_complete(rt,2u);
        }
        case 0xE87Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE882u; return dd3_static_complete(rt,5u);
        }
        case 0xE882u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE883u; return dd3_static_complete(rt,2u);
        }
        case 0xE883u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xE886u; return dd3_static_complete(rt,4u);
        }
        case 0xE886u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE887u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xE889u; return dd3_static_complete(rt,2u);
        }
        case 0xE889u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE88Bu,0xE8A8u)) c++; rt->state.cpu.pc=0xE8A8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE88Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE88Bu: {
            uint8_t v=0x60u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE88Du; return dd3_static_complete(rt,2u);
        }
        case 0xE88Du: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE88Fu; return dd3_static_complete(rt,3u);
        }
        case 0xE88Fu: {
            uint8_t v=0x70u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE891u; return dd3_static_complete(rt,2u);
        }
        case 0xE891u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE893u; return dd3_static_complete(rt,3u);
        }
        case 0xE893u: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE895u; return dd3_static_complete(rt,3u);
        }
        case 0xE895u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE896u; return dd3_static_complete(rt,2u);
        }
        case 0xE896u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE897u; return dd3_static_complete(rt,2u);
        }
        case 0xE897u: {
            uint16_t ea=(uint16_t)(0xE905u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE89Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE905u,ea)?1u:0u));
        }
        case 0xE89Au: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xE89Cu; return dd3_static_complete(rt,3u);
        }
        case 0xE89Cu: {
            uint16_t ea=(uint16_t)(0xE906u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE89Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE906u,ea)?1u:0u));
        }
        case 0xE89Fu: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE8A1u; return dd3_static_complete(rt,3u);
        }
        case 0xE8A1u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE8A3u; return dd3_static_complete(rt,3u);
        }
        case 0xE8A3u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE8A5u,0xE8C5u)) c++; rt->state.cpu.pc=0xE8C5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE8A5u; return dd3_static_complete(rt,2u);
        }
        case 0xE8A5u: {
            rt->state.cpu.pc=0xE8C6u; return dd3_static_complete(rt,3u);
        }
        case 0xE8A8u: {
            uint8_t v=0x61u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE8AAu; return dd3_static_complete(rt,2u);
        }
        case 0xE8AAu: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE8ACu; return dd3_static_complete(rt,3u);
        }
        case 0xE8ACu: {
            uint8_t v=0x71u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE8AEu; return dd3_static_complete(rt,2u);
        }
        case 0xE8AEu: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE8B0u; return dd3_static_complete(rt,3u);
        }
        case 0xE8B0u: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE8B2u; return dd3_static_complete(rt,3u);
        }
        case 0xE8B2u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE8B3u; return dd3_static_complete(rt,2u);
        }
        case 0xE8B3u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE8B4u; return dd3_static_complete(rt,2u);
        }
        case 0xE8B4u: {
            uint16_t ea=(uint16_t)(0xE90Fu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE8B7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE90Fu,ea)?1u:0u));
        }
        case 0xE8B7u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xE8B9u; return dd3_static_complete(rt,3u);
        }
        case 0xE8B9u: {
            uint16_t ea=(uint16_t)(0xE910u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE8BCu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE910u,ea)?1u:0u));
        }
        case 0xE8BCu: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE8BEu; return dd3_static_complete(rt,3u);
        }
        case 0xE8BEu: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE8C0u; return dd3_static_complete(rt,3u);
        }
        case 0xE8C0u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xE8C2u,0xE8C5u)) c++; rt->state.cpu.pc=0xE8C5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE8C2u; return dd3_static_complete(rt,2u);
        }
        case 0xE8C2u: {
            rt->state.cpu.pc=0xE8C6u; return dd3_static_complete(rt,3u);
        }
        case 0xE8C5u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE8C6u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE8C9u; return dd3_static_complete(rt,4u);
        }
        case 0xE8C9u: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE8CBu; return dd3_static_complete(rt,3u);
        }
        case 0xE8CBu: {
            dd3_static_push8(rt,(uint8_t)(0xE8CDu>>8)); dd3_static_push8(rt,(uint8_t)0xE8CDu);
            rt->state.cpu.pc=0xE8DEu; return dd3_static_complete(rt,6u);
        }
        case 0xE8CEu: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE8D0u; return dd3_static_complete(rt,3u);
        }
        case 0xE8D0u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xE8D1u; return dd3_static_complete(rt,2u);
        }
        case 0xE8D1u: {
            uint8_t v=0x20u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xE8D3u; return dd3_static_complete(rt,2u);
        }
        case 0xE8D3u: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE8D5u; return dd3_static_complete(rt,3u);
        }
        case 0xE8D5u: {
            uint16_t ea=0x30u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE8D7u; return dd3_static_complete(rt,3u);
        }
        case 0xE8D7u: {
            dd3_static_push8(rt,(uint8_t)(0xE8D9u>>8)); dd3_static_push8(rt,(uint8_t)0xE8D9u);
            rt->state.cpu.pc=0xE8DEu; return dd3_static_complete(rt,6u);
        }
        case 0xE8DAu: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xE8DDu; return dd3_static_complete(rt,4u);
        }
        case 0xE8DDu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE8DEu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE8DFu; return dd3_static_complete(rt,3u);
        }
        case 0xE8DFu: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE8E1u; return dd3_static_complete(rt,3u);
        }
        case 0xE8E1u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE8E4u; return dd3_static_complete(rt,5u);
        }
        case 0xE8E4u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE8E5u; return dd3_static_complete(rt,2u);
        }
        case 0xE8E5u: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE8E7u; return dd3_static_complete(rt,3u);
        }
        case 0xE8E7u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE8EAu; return dd3_static_complete(rt,5u);
        }
        case 0xE8EAu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE8EBu; return dd3_static_complete(rt,2u);
        }
        case 0xE8EBu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE8EDu; return dd3_static_complete(rt,2u);
        }
        case 0xE8EDu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE8F0u; return dd3_static_complete(rt,5u);
        }
        case 0xE8F0u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE8F1u; return dd3_static_complete(rt,2u);
        }
        case 0xE8F1u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE8F3u; return dd3_static_complete(rt,2u);
        }
        case 0xE8F3u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE8F6u; return dd3_static_complete(rt,5u);
        }
        case 0xE8F6u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE8F7u; return dd3_static_complete(rt,2u);
        }
        case 0xE8F7u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE8F8u; return dd3_static_complete(rt,4u);
        }
        case 0xE8F8u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE8FBu; return dd3_static_complete(rt,5u);
        }
        case 0xE8FBu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE8FCu; return dd3_static_complete(rt,2u);
        }
        case 0xE8FCu: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE8FEu; return dd3_static_complete(rt,2u);
        }
        case 0xE8FEu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE900u; return dd3_static_complete(rt,2u);
        }
        case 0xE900u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE903u; return dd3_static_complete(rt,5u);
        }
        case 0xE903u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE904u; return dd3_static_complete(rt,2u);
        }
        case 0xE904u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE919u: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.y);
            rt->state.cpu.pc=0xE91Bu; return dd3_static_complete(rt,3u);
        }
        case 0xE91Bu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xE91Du; return dd3_static_complete(rt,2u);
        }
        case 0xE91Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE91Fu,0xE943u)) c++; rt->state.cpu.pc=0xE943u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE91Fu; return dd3_static_complete(rt,2u);
        }
        case 0xE91Fu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE920u; return dd3_static_complete(rt,2u);
        }
        case 0xE920u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE921u; return dd3_static_complete(rt,2u);
        }
        case 0xE921u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE922u; return dd3_static_complete(rt,2u);
        }
        case 0xE922u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE923u; return dd3_static_complete(rt,2u);
        }
        case 0xE923u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE924u; return dd3_static_complete(rt,2u);
        }
        case 0xE924u: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE926u; return dd3_static_complete(rt,3u);
        }
        case 0xE926u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE927u; return dd3_static_complete(rt,2u);
        }
        case 0xE927u: {
            dd3_static_push8(rt,(uint8_t)(0xE929u>>8)); dd3_static_push8(rt,(uint8_t)0xE929u);
            rt->state.cpu.pc=0xE949u; return dd3_static_complete(rt,6u);
        }
        case 0xE92Au: {
            dd3_static_push8(rt,(uint8_t)(0xE92Cu>>8)); dd3_static_push8(rt,(uint8_t)0xE92Cu);
            rt->state.cpu.pc=0xE949u; return dd3_static_complete(rt,6u);
        }
        case 0xE92Du: {
            dd3_static_push8(rt,(uint8_t)(0xE92Fu>>8)); dd3_static_push8(rt,(uint8_t)0xE92Fu);
            rt->state.cpu.pc=0xE97Au; return dd3_static_complete(rt,6u);
        }
        case 0xE930u: {
            dd3_static_push8(rt,(uint8_t)(0xE932u>>8)); dd3_static_push8(rt,(uint8_t)0xE932u);
            rt->state.cpu.pc=0xEA28u; return dd3_static_complete(rt,6u);
        }
        case 0xE933u: {
            uint16_t ea=0xB5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xE935u; return dd3_static_complete(rt,5u);
        }
        case 0xE935u: {
            uint16_t ea=0xB5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE937u; return dd3_static_complete(rt,3u);
        }
        case 0xE937u: {
            dd3_static_push8(rt,(uint8_t)(0xE939u>>8)); dd3_static_push8(rt,(uint8_t)0xE939u);
            rt->state.cpu.pc=0xEB29u; return dd3_static_complete(rt,6u);
        }
        case 0xE93Au: {
            uint16_t ea=0xB5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE93Cu; return dd3_static_complete(rt,3u);
        }
        case 0xE93Cu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xE93Du; return dd3_static_complete(rt,2u);
        }
        case 0xE93Du: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xE93Fu; return dd3_static_complete(rt,2u);
        }
        case 0xE93Fu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE940u; return dd3_static_complete(rt,2u);
        }
        case 0xE940u: {
            dd3_static_push8(rt,(uint8_t)(0xE942u>>8)); dd3_static_push8(rt,(uint8_t)0xE942u);
            rt->state.cpu.pc=0xEB29u; return dd3_static_complete(rt,6u);
        }
        case 0xE943u: {
            dd3_static_push8(rt,(uint8_t)(0xE945u>>8)); dd3_static_push8(rt,(uint8_t)0xE945u);
            rt->state.cpu.pc=0xEBA1u; return dd3_static_complete(rt,6u);
        }
        case 0xE946u: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE948u; return dd3_static_complete(rt,3u);
        }
        case 0xE948u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE949u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE94Cu; return dd3_static_complete(rt,4u);
        }
        case 0xE94Cu: {
            uint16_t ea=(uint16_t)(0xECE4u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE94Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xECE4u,ea)?1u:0u));
        }
        case 0xE94Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE952u; return dd3_static_complete(rt,5u);
        }
        case 0xE952u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE953u; return dd3_static_complete(rt,2u);
        }
        case 0xE953u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE954u; return dd3_static_complete(rt,2u);
        }
        case 0xE954u: {
            uint16_t ea=(uint16_t)(0xECE4u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE957u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xECE4u,ea)?1u:0u));
        }
        case 0xE957u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE95Au; return dd3_static_complete(rt,5u);
        }
        case 0xE95Au: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE95Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE95Bu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE95Cu; return dd3_static_complete(rt,2u);
        }
        case 0xE95Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE95Eu; return dd3_static_complete(rt,2u);
        }
        case 0xE95Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE961u; return dd3_static_complete(rt,5u);
        }
        case 0xE961u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE962u; return dd3_static_complete(rt,2u);
        }
        case 0xE962u: {
            uint8_t v=0x06u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE964u; return dd3_static_complete(rt,2u);
        }
        case 0xE964u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE967u; return dd3_static_complete(rt,5u);
        }
        case 0xE967u: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE969u; return dd3_static_complete(rt,3u);
        }
        case 0xE969u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE96Au; return dd3_static_complete(rt,2u);
        }
        case 0xE96Au: {
            uint16_t ea=(uint16_t)(0xECE4u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE96Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xECE4u,ea)?1u:0u));
        }
        case 0xE96Du: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE970u; return dd3_static_complete(rt,5u);
        }
        case 0xE970u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE971u; return dd3_static_complete(rt,2u);
        }
        case 0xE971u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE972u; return dd3_static_complete(rt,2u);
        }
        case 0xE972u: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xE974u; return dd3_static_complete(rt,5u);
        }
        case 0xE974u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE976u,0xE96Au)) c++; rt->state.cpu.pc=0xE96Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE976u; return dd3_static_complete(rt,2u);
        }
        case 0xE976u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xE979u; return dd3_static_complete(rt,4u);
        }
        case 0xE979u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xE97Au: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE97Cu; return dd3_static_complete(rt,3u);
        }
        case 0xE97Cu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xE97Eu; return dd3_static_complete(rt,2u);
        }
        case 0xE97Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xE980u,0xE979u)) c++; rt->state.cpu.pc=0xE979u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE980u; return dd3_static_complete(rt,2u);
        }
        case 0xE980u: {
            uint16_t ea=(uint16_t)(0x04D8u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE983u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04D8u,ea)?1u:0u));
        }
        case 0xE983u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE985u; return dd3_static_complete(rt,2u);
        }
        case 0xE985u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE986u; return dd3_static_complete(rt,2u);
        }
        case 0xE986u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE987u; return dd3_static_complete(rt,2u);
        }
        case 0xE987u: {
            uint16_t ea=(uint16_t)(0xEABAu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE98Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEABAu,ea)?1u:0u));
        }
        case 0xE98Au: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE98Cu; return dd3_static_complete(rt,3u);
        }
        case 0xE98Cu: {
            uint16_t ea=(uint16_t)(0xEAB9u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE98Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEAB9u,ea)?1u:0u));
        }
        case 0xE98Fu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xE991u; return dd3_static_complete(rt,3u);
        }
        case 0xE991u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE993u; return dd3_static_complete(rt,2u);
        }
        case 0xE993u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE995u; return dd3_static_complete(rt,3u);
        }
        case 0xE995u: {
            uint16_t ea=(uint16_t)(0x04D8u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE998u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04D8u,ea)?1u:0u));
        }
        case 0xE998u: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE99Au; return dd3_static_complete(rt,2u);
        }
        case 0xE99Au: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE99Bu; return dd3_static_complete(rt,2u);
        }
        case 0xE99Bu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE99Cu; return dd3_static_complete(rt,2u);
        }
        case 0xE99Cu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE99Du; return dd3_static_complete(rt,2u);
        }
        case 0xE99Du: {
            uint16_t ea=(uint16_t)(0xEADCu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE9A0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEADCu,ea)?1u:0u));
        }
        case 0xE9A0u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xE9A1u; return dd3_static_complete(rt,2u);
        }
        case 0xE9A1u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xE9A3u; return dd3_static_complete(rt,3u);
        }
        case 0xE9A3u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE9A5u; return dd3_static_complete(rt,3u);
        }
        case 0xE9A5u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xE9A7u; return dd3_static_complete(rt,2u);
        }
        case 0xE9A7u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE9A9u,0xE9B0u)) c++; rt->state.cpu.pc=0xE9B0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE9A9u; return dd3_static_complete(rt,2u);
        }
        case 0xE9A9u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xE9AAu; return dd3_static_complete(rt,2u);
        }
        case 0xE9AAu: {
            uint8_t v=0x0Au;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xE9ACu; return dd3_static_complete(rt,2u);
        }
        case 0xE9ACu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xE9AEu; return dd3_static_complete(rt,3u);
        }
        case 0xE9AEu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xE9B0u; return dd3_static_complete(rt,5u);
        }
        case 0xE9B0u: {
            uint16_t ea=(uint16_t)(0xEADBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE9B3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEADBu,ea)?1u:0u));
        }
        case 0xE9B3u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xE9B4u; return dd3_static_complete(rt,2u);
        }
        case 0xE9B4u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xE9B6u; return dd3_static_complete(rt,3u);
        }
        case 0xE9B6u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xE9B8u; return dd3_static_complete(rt,3u);
        }
        case 0xE9B8u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xE9BAu; return dd3_static_complete(rt,2u);
        }
        case 0xE9BAu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xE9BCu,0xE9C3u)) c++; rt->state.cpu.pc=0xE9C3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xE9BCu; return dd3_static_complete(rt,2u);
        }
        case 0xE9BCu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xE9BDu; return dd3_static_complete(rt,2u);
        }
        case 0xE9BDu: {
            uint8_t v=0x0Au;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xE9BFu; return dd3_static_complete(rt,2u);
        }
        case 0xE9BFu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xE9C1u; return dd3_static_complete(rt,3u);
        }
        case 0xE9C1u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xE9C3u; return dd3_static_complete(rt,5u);
        }
        case 0xE9C3u: {
            uint16_t ea=(uint16_t)(0xEADAu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE9C6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEADAu,ea)?1u:0u));
        }
        case 0xE9C6u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xE9C7u; return dd3_static_complete(rt,2u);
        }
        case 0xE9C7u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xE9C9u; return dd3_static_complete(rt,3u);
        }
        case 0xE9C9u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xE9CBu; return dd3_static_complete(rt,3u);
        }
        case 0xE9CBu: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE9CEu; return dd3_static_complete(rt,4u);
        }
        case 0xE9CEu: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE9D0u; return dd3_static_complete(rt,3u);
        }
        case 0xE9D0u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE9D1u; return dd3_static_complete(rt,2u);
        }
        case 0xE9D1u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE9D2u; return dd3_static_complete(rt,2u);
        }
        case 0xE9D2u: {
            uint16_t ea=(uint16_t)(0xEB19u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE9D5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEB19u,ea)?1u:0u));
        }
        case 0xE9D5u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE9D8u; return dd3_static_complete(rt,5u);
        }
        case 0xE9D8u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE9D9u; return dd3_static_complete(rt,2u);
        }
        case 0xE9D9u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE9DAu; return dd3_static_complete(rt,2u);
        }
        case 0xE9DAu: {
            uint16_t ea=(uint16_t)(0xEB19u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE9DDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEB19u,ea)?1u:0u));
        }
        case 0xE9DDu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE9E0u; return dd3_static_complete(rt,5u);
        }
        case 0xE9E0u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE9E1u; return dd3_static_complete(rt,2u);
        }
        case 0xE9E1u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xE9E2u; return dd3_static_complete(rt,2u);
        }
        case 0xE9E2u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE9E4u; return dd3_static_complete(rt,2u);
        }
        case 0xE9E4u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE9E7u; return dd3_static_complete(rt,5u);
        }
        case 0xE9E7u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE9E8u; return dd3_static_complete(rt,2u);
        }
        case 0xE9E8u: {
            uint8_t v=0x05u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE9EAu; return dd3_static_complete(rt,2u);
        }
        case 0xE9EAu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE9EDu; return dd3_static_complete(rt,5u);
        }
        case 0xE9EDu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE9EEu; return dd3_static_complete(rt,2u);
        }
        case 0xE9EEu: {
            uint8_t v=0x50u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE9F0u; return dd3_static_complete(rt,2u);
        }
        case 0xE9F0u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE9F3u; return dd3_static_complete(rt,5u);
        }
        case 0xE9F3u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE9F4u; return dd3_static_complete(rt,2u);
        }
        case 0xE9F4u: {
            uint8_t v=0x3Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE9F6u; return dd3_static_complete(rt,2u);
        }
        case 0xE9F6u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xE9F9u; return dd3_static_complete(rt,5u);
        }
        case 0xE9F9u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xE9FAu; return dd3_static_complete(rt,2u);
        }
        case 0xE9FAu: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xE9FCu; return dd3_static_complete(rt,3u);
        }
        case 0xE9FCu: {
            uint8_t v=0x30u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xE9FEu; return dd3_static_complete(rt,2u);
        }
        case 0xE9FEu: {
            uint8_t v=0x30u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xEA00u; return dd3_static_complete(rt,2u);
        }
        case 0xEA00u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEA02u,0xEA04u)) c++; rt->state.cpu.pc=0xEA04u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEA02u; return dd3_static_complete(rt,2u);
        }
        case 0xEA02u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA04u; return dd3_static_complete(rt,2u);
        }
        case 0xEA04u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEA07u; return dd3_static_complete(rt,5u);
        }
        case 0xEA07u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEA08u; return dd3_static_complete(rt,2u);
        }
        case 0xEA08u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA0Au; return dd3_static_complete(rt,3u);
        }
        case 0xEA0Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEA0Cu,0xEA14u)) c++; rt->state.cpu.pc=0xEA14u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEA0Cu; return dd3_static_complete(rt,2u);
        }
        case 0xEA0Cu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA0Eu; return dd3_static_complete(rt,3u);
        }
        case 0xEA0Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEA10u,0xEA14u)) c++; rt->state.cpu.pc=0xEA14u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEA10u; return dd3_static_complete(rt,2u);
        }
        case 0xEA10u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA12u; return dd3_static_complete(rt,2u);
        }
        case 0xEA12u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEA14u,0xEA18u)) c++; rt->state.cpu.pc=0xEA18u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEA14u; return dd3_static_complete(rt,2u);
        }
        case 0xEA14u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA16u; return dd3_static_complete(rt,3u);
        }
        case 0xEA16u: {
            uint8_t v=0x30u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEA18u; return dd3_static_complete(rt,2u);
        }
        case 0xEA18u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEA1Bu; return dd3_static_complete(rt,5u);
        }
        case 0xEA1Bu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEA1Cu; return dd3_static_complete(rt,2u);
        }
        case 0xEA1Cu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA1Eu; return dd3_static_complete(rt,3u);
        }
        case 0xEA1Eu: {
            uint8_t v=0x30u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEA20u; return dd3_static_complete(rt,2u);
        }
        case 0xEA20u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEA23u; return dd3_static_complete(rt,5u);
        }
        case 0xEA23u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEA24u; return dd3_static_complete(rt,2u);
        }
        case 0xEA24u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xEA27u; return dd3_static_complete(rt,4u);
        }
        case 0xEA27u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xEA28u: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA2Au; return dd3_static_complete(rt,3u);
        }
        case 0xEA2Au: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xEA2Cu; return dd3_static_complete(rt,2u);
        }
        case 0xEA2Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEA2Eu,0xEA27u)) c++; rt->state.cpu.pc=0xEA27u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEA2Eu; return dd3_static_complete(rt,2u);
        }
        case 0xEA2Eu: {
            uint16_t ea=(uint16_t)(0x06DFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA31u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06DFu,ea)?1u:0u));
        }
        case 0xEA31u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEA33u; return dd3_static_complete(rt,2u);
        }
        case 0xEA33u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEA34u; return dd3_static_complete(rt,2u);
        }
        case 0xEA34u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEA35u; return dd3_static_complete(rt,2u);
        }
        case 0xEA35u: {
            uint16_t ea=(uint16_t)(0xEABAu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA38u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEABAu,ea)?1u:0u));
        }
        case 0xEA38u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEA3Au; return dd3_static_complete(rt,3u);
        }
        case 0xEA3Au: {
            uint16_t ea=(uint16_t)(0xEAB9u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA3Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEAB9u,ea)?1u:0u));
        }
        case 0xEA3Du: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xEA3Fu; return dd3_static_complete(rt,3u);
        }
        case 0xEA3Fu: {
            uint16_t ea=(uint16_t)(0x06DFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA42u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06DFu,ea)?1u:0u));
        }
        case 0xEA42u: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEA44u; return dd3_static_complete(rt,2u);
        }
        case 0xEA44u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEA45u; return dd3_static_complete(rt,2u);
        }
        case 0xEA45u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEA46u; return dd3_static_complete(rt,2u);
        }
        case 0xEA46u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEA47u; return dd3_static_complete(rt,2u);
        }
        case 0xEA47u: {
            uint16_t ea=(uint16_t)(0xEADCu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA4Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEADCu,ea)?1u:0u));
        }
        case 0xEA4Au: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xEA4Bu; return dd3_static_complete(rt,2u);
        }
        case 0xEA4Bu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xEA4Du; return dd3_static_complete(rt,3u);
        }
        case 0xEA4Du: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEA4Fu; return dd3_static_complete(rt,3u);
        }
        case 0xEA4Fu: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xEA51u; return dd3_static_complete(rt,2u);
        }
        case 0xEA51u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xEA53u,0xEA5Au)) c++; rt->state.cpu.pc=0xEA5Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEA53u; return dd3_static_complete(rt,2u);
        }
        case 0xEA53u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xEA54u; return dd3_static_complete(rt,2u);
        }
        case 0xEA54u: {
            uint8_t v=0x0Au;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xEA56u; return dd3_static_complete(rt,2u);
        }
        case 0xEA56u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEA58u; return dd3_static_complete(rt,3u);
        }
        case 0xEA58u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xEA5Au; return dd3_static_complete(rt,5u);
        }
        case 0xEA5Au: {
            uint16_t ea=(uint16_t)(0xEADBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA5Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEADBu,ea)?1u:0u));
        }
        case 0xEA5Du: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xEA5Eu; return dd3_static_complete(rt,2u);
        }
        case 0xEA5Eu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xEA60u; return dd3_static_complete(rt,3u);
        }
        case 0xEA60u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xEA62u; return dd3_static_complete(rt,3u);
        }
        case 0xEA62u: {
            uint16_t ea=(uint16_t)(0xEADAu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA65u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEADAu,ea)?1u:0u));
        }
        case 0xEA65u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xEA66u; return dd3_static_complete(rt,2u);
        }
        case 0xEA66u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xEA68u; return dd3_static_complete(rt,2u);
        }
        case 0xEA68u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEA6Au; return dd3_static_complete(rt,3u);
        }
        case 0xEA6Au: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA6Du; return dd3_static_complete(rt,4u);
        }
        case 0xEA6Du: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA6Fu; return dd3_static_complete(rt,3u);
        }
        case 0xEA6Fu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEA70u; return dd3_static_complete(rt,2u);
        }
        case 0xEA70u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xEA71u; return dd3_static_complete(rt,2u);
        }
        case 0xEA71u: {
            uint16_t ea=(uint16_t)(0xEB21u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA74u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEB21u,ea)?1u:0u));
        }
        case 0xEA74u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEA77u; return dd3_static_complete(rt,5u);
        }
        case 0xEA77u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEA78u; return dd3_static_complete(rt,2u);
        }
        case 0xEA78u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xEA79u; return dd3_static_complete(rt,2u);
        }
        case 0xEA79u: {
            uint16_t ea=(uint16_t)(0xEB21u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA7Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEB21u,ea)?1u:0u));
        }
        case 0xEA7Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEA7Fu; return dd3_static_complete(rt,5u);
        }
        case 0xEA7Fu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEA80u; return dd3_static_complete(rt,2u);
        }
        case 0xEA80u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xEA81u; return dd3_static_complete(rt,2u);
        }
        case 0xEA81u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA83u; return dd3_static_complete(rt,2u);
        }
        case 0xEA83u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEA86u; return dd3_static_complete(rt,5u);
        }
        case 0xEA86u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEA87u; return dd3_static_complete(rt,2u);
        }
        case 0xEA87u: {
            uint8_t v=0x05u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA89u; return dd3_static_complete(rt,2u);
        }
        case 0xEA89u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEA8Cu; return dd3_static_complete(rt,5u);
        }
        case 0xEA8Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEA8Du; return dd3_static_complete(rt,2u);
        }
        case 0xEA8Du: {
            uint8_t v=0x57u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA8Fu; return dd3_static_complete(rt,2u);
        }
        case 0xEA8Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEA92u; return dd3_static_complete(rt,5u);
        }
        case 0xEA92u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEA93u; return dd3_static_complete(rt,2u);
        }
        case 0xEA93u: {
            uint8_t v=0x3Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA95u; return dd3_static_complete(rt,2u);
        }
        case 0xEA95u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEA98u; return dd3_static_complete(rt,5u);
        }
        case 0xEA98u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEA99u; return dd3_static_complete(rt,2u);
        }
        case 0xEA99u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEA9Bu; return dd3_static_complete(rt,2u);
        }
        case 0xEA9Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEA9Eu; return dd3_static_complete(rt,5u);
        }
        case 0xEA9Eu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEA9Fu; return dd3_static_complete(rt,2u);
        }
        case 0xEA9Fu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEAA1u; return dd3_static_complete(rt,3u);
        }
        case 0xEAA1u: {
            uint8_t v=0x30u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEAA3u; return dd3_static_complete(rt,2u);
        }
        case 0xEAA3u: {
            uint8_t v=0x30u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xEAA5u; return dd3_static_complete(rt,2u);
        }
        case 0xEAA5u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEAA7u,0xEAA9u)) c++; rt->state.cpu.pc=0xEAA9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEAA7u; return dd3_static_complete(rt,2u);
        }
        case 0xEAA7u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEAA9u; return dd3_static_complete(rt,2u);
        }
        case 0xEAA9u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEAACu; return dd3_static_complete(rt,5u);
        }
        case 0xEAACu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEAADu; return dd3_static_complete(rt,2u);
        }
        case 0xEAADu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEAAFu; return dd3_static_complete(rt,3u);
        }
        case 0xEAAFu: {
            uint8_t v=0x30u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEAB1u; return dd3_static_complete(rt,2u);
        }
        case 0xEAB1u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEAB4u; return dd3_static_complete(rt,5u);
        }
        case 0xEAB4u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEAB5u; return dd3_static_complete(rt,2u);
        }
        case 0xEAB5u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xEAB8u; return dd3_static_complete(rt,4u);
        }
        case 0xEAB8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xEB29u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB2Cu; return dd3_static_complete(rt,4u);
        }
        case 0xEB2Cu: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB2Eu; return dd3_static_complete(rt,2u);
        }
        case 0xEB2Eu: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEB30u; return dd3_static_complete(rt,3u);
        }
        case 0xEB30u: {
            uint16_t ea=(uint16_t)(0xED24u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB33u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xED24u,ea)?1u:0u));
        }
        case 0xEB33u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEB36u; return dd3_static_complete(rt,5u);
        }
        case 0xEB36u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEB37u; return dd3_static_complete(rt,2u);
        }
        case 0xEB37u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xEB38u; return dd3_static_complete(rt,2u);
        }
        case 0xEB38u: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xEB3Au; return dd3_static_complete(rt,5u);
        }
        case 0xEB3Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEB3Cu,0xEB30u)) c++; rt->state.cpu.pc=0xEB30u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEB3Cu; return dd3_static_complete(rt,2u);
        }
        case 0xEB3Cu: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xEB3Fu; return dd3_static_complete(rt,4u);
        }
        case 0xEB3Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xEB40u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB43u; return dd3_static_complete(rt,4u);
        }
        case 0xEB43u: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB45u; return dd3_static_complete(rt,3u);
        }
        case 0xEB45u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEB46u; return dd3_static_complete(rt,3u);
        }
        case 0xEB46u: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB48u; return dd3_static_complete(rt,2u);
        }
        case 0xEB48u: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEB4Au; return dd3_static_complete(rt,3u);
        }
        case 0xEB4Au: {
            uint8_t v=0x22u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB4Cu; return dd3_static_complete(rt,2u);
        }
        case 0xEB4Cu: {
            uint8_t v=0xF4u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB4Eu; return dd3_static_complete(rt,2u);
        }
        case 0xEB4Eu: {
            dd3_static_push8(rt,(uint8_t)(0xEB50u>>8)); dd3_static_push8(rt,(uint8_t)0xEB50u);
            rt->state.cpu.pc=0xEB63u; return dd3_static_complete(rt,6u);
        }
        case 0xEB51u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEB52u; return dd3_static_complete(rt,4u);
        }
        case 0xEB52u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEB54u; return dd3_static_complete(rt,3u);
        }
        case 0xEB54u: {
            uint8_t v=0x1Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB56u; return dd3_static_complete(rt,2u);
        }
        case 0xEB56u: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEB58u; return dd3_static_complete(rt,3u);
        }
        case 0xEB58u: {
            uint8_t v=0x23u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB5Au; return dd3_static_complete(rt,2u);
        }
        case 0xEB5Au: {
            uint8_t v=0x14u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB5Cu; return dd3_static_complete(rt,2u);
        }
        case 0xEB5Cu: {
            dd3_static_push8(rt,(uint8_t)(0xEB5Eu>>8)); dd3_static_push8(rt,(uint8_t)0xEB5Eu);
            rt->state.cpu.pc=0xEB63u; return dd3_static_complete(rt,6u);
        }
        case 0xEB5Fu: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xEB62u; return dd3_static_complete(rt,4u);
        }
        case 0xEB62u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xEB63u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEB66u; return dd3_static_complete(rt,5u);
        }
        case 0xEB66u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEB67u; return dd3_static_complete(rt,2u);
        }
        case 0xEB67u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEB68u; return dd3_static_complete(rt,2u);
        }
        case 0xEB68u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEB6Bu; return dd3_static_complete(rt,5u);
        }
        case 0xEB6Bu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEB6Cu; return dd3_static_complete(rt,2u);
        }
        case 0xEB6Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB6Eu; return dd3_static_complete(rt,2u);
        }
        case 0xEB6Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEB71u; return dd3_static_complete(rt,5u);
        }
        case 0xEB71u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEB72u; return dd3_static_complete(rt,2u);
        }
        case 0xEB72u: {
            uint8_t v=0x06u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB74u; return dd3_static_complete(rt,2u);
        }
        case 0xEB74u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEB77u; return dd3_static_complete(rt,5u);
        }
        case 0xEB77u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEB78u; return dd3_static_complete(rt,2u);
        }
        case 0xEB78u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB7Au; return dd3_static_complete(rt,2u);
        }
        case 0xEB7Au: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEB7Cu; return dd3_static_complete(rt,3u);
        }
        case 0xEB7Cu: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xEB7Eu; return dd3_static_complete(rt,5u);
        }
        case 0xEB7Eu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xEB80u,0xEB90u)) c++; rt->state.cpu.pc=0xEB90u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEB80u; return dd3_static_complete(rt,2u);
        }
        case 0xEB80u: {
            uint16_t ea=0xB5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB82u; return dd3_static_complete(rt,3u);
        }
        case 0xEB82u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEB85u; return dd3_static_complete(rt,5u);
        }
        case 0xEB85u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEB86u; return dd3_static_complete(rt,2u);
        }
        case 0xEB86u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xEB87u; return dd3_static_complete(rt,2u);
        }
        case 0xEB87u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xEB89u; return dd3_static_complete(rt,2u);
        }
        case 0xEB89u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEB8Cu; return dd3_static_complete(rt,5u);
        }
        case 0xEB8Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEB8Du; return dd3_static_complete(rt,2u);
        }
        case 0xEB8Du: {
            rt->state.cpu.pc=0xEB9Cu; return dd3_static_complete(rt,3u);
        }
        case 0xEB90u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB92u; return dd3_static_complete(rt,2u);
        }
        case 0xEB92u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEB95u; return dd3_static_complete(rt,5u);
        }
        case 0xEB95u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEB96u; return dd3_static_complete(rt,2u);
        }
        case 0xEB96u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEB98u; return dd3_static_complete(rt,2u);
        }
        case 0xEB98u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEB9Bu; return dd3_static_complete(rt,5u);
        }
        case 0xEB9Bu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEB9Cu; return dd3_static_complete(rt,2u);
        }
        case 0xEB9Cu: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xEB9Eu; return dd3_static_complete(rt,5u);
        }
        case 0xEB9Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEBA0u,0xEB7Cu)) c++; rt->state.cpu.pc=0xEB7Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEBA0u; return dd3_static_complete(rt,2u);
        }
        case 0xEBA0u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xEBA1u: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEBA3u; return dd3_static_complete(rt,3u);
        }
        case 0xEBA3u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xEBA5u; return dd3_static_complete(rt,2u);
        }
        case 0xEBA5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEBA7u,0xEC08u)) c++; rt->state.cpu.pc=0xEC08u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEBA7u; return dd3_static_complete(rt,2u);
        }
        case 0xEBA7u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEBA8u; return dd3_static_complete(rt,2u);
        }
        case 0xEBA8u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEBA9u; return dd3_static_complete(rt,3u);
        }
        case 0xEBA9u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xEBAAu; return dd3_static_complete(rt,2u);
        }
        case 0xEBAAu: {
            uint16_t ea=(uint16_t)(0xECA6u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEBADu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xECA6u,ea)?1u:0u));
        }
        case 0xEBADu: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEBAFu; return dd3_static_complete(rt,3u);
        }
        case 0xEBAFu: {
            uint16_t ea=(uint16_t)(0xECA7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEBB2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xECA7u,ea)?1u:0u));
        }
        case 0xEBB2u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEBB4u; return dd3_static_complete(rt,3u);
        }
        case 0xEBB4u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEBB5u; return dd3_static_complete(rt,4u);
        }
        case 0xEBB5u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEBB6u; return dd3_static_complete(rt,2u);
        }
        case 0xEBB6u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xEBB7u; return dd3_static_complete(rt,2u);
        }
        case 0xEBB7u: {
            uint16_t ea=(uint16_t)(0xEC62u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEBBAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEC62u,ea)?1u:0u));
        }
        case 0xEBBAu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEBBCu; return dd3_static_complete(rt,3u);
        }
        case 0xEBBCu: {
            uint16_t ea=(uint16_t)(0xEC63u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEBBFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEC63u,ea)?1u:0u));
        }
        case 0xEBBFu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xEBC1u; return dd3_static_complete(rt,3u);
        }
        case 0xEBC1u: {
            uint16_t ea=(uint16_t)(0xEC64u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEBC4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEC64u,ea)?1u:0u));
        }
        case 0xEBC4u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEBC6u; return dd3_static_complete(rt,3u);
        }
        case 0xEBC6u: {
            uint16_t ea=(uint16_t)(0xEC65u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEBC9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEC65u,ea)?1u:0u));
        }
        case 0xEBC9u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEBCAu; return dd3_static_complete(rt,2u);
        }
        case 0xEBCAu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEBCCu; return dd3_static_complete(rt,2u);
        }
        case 0xEBCCu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEBCEu; return dd3_static_complete(rt,2u);
        }
        case 0xEBCEu: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEBD0u; return dd3_static_complete(rt,3u);
        }
        case 0xEBD0u: {
            uint16_t ea=(uint16_t)(0xEC76u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEBD3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEC76u,ea)?1u:0u));
        }
        case 0xEBD3u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xEBD4u; return dd3_static_complete(rt,2u);
        }
        case 0xEBD4u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xEBD6u; return dd3_static_complete(rt,3u);
        }
        case 0xEBD6u: {
            dd3_static_write8(rt,(uint16_t)(0x0200u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEBD9u; return dd3_static_complete(rt,5u);
        }
        case 0xEBD9u: {
            uint16_t ea=(uint16_t)(0xEC77u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEBDCu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEC77u,ea)?1u:0u));
        }
        case 0xEBDCu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xEBDDu; return dd3_static_complete(rt,2u);
        }
        case 0xEBDDu: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xEBDFu; return dd3_static_complete(rt,3u);
        }
        case 0xEBDFu: {
            dd3_static_write8(rt,(uint16_t)(0x0201u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEBE2u; return dd3_static_complete(rt,5u);
        }
        case 0xEBE2u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEBE3u; return dd3_static_complete(rt,2u);
        }
        case 0xEBE3u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEBE4u; return dd3_static_complete(rt,3u);
        }
        case 0xEBE4u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEBE6u; return dd3_static_complete(rt,2u);
        }
        case 0xEBE6u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEBE8u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0xEBE8u: {
            dd3_static_write8(rt,(uint16_t)(0x0202u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEBEBu; return dd3_static_complete(rt,5u);
        }
        case 0xEBEBu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEBECu; return dd3_static_complete(rt,4u);
        }
        case 0xEBECu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xEBEDu; return dd3_static_complete(rt,2u);
        }
        case 0xEBEDu: {
            uint16_t ea=(uint16_t)(0xEC78u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEBF0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xEC78u,ea)?1u:0u));
        }
        case 0xEBF0u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xEBF1u; return dd3_static_complete(rt,2u);
        }
        case 0xEBF1u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xEBF3u; return dd3_static_complete(rt,3u);
        }
        case 0xEBF3u: {
            dd3_static_write8(rt,(uint16_t)(0x0203u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEBF6u; return dd3_static_complete(rt,5u);
        }
        case 0xEBF6u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEBF7u; return dd3_static_complete(rt,2u);
        }
        case 0xEBF7u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEBF8u; return dd3_static_complete(rt,2u);
        }
        case 0xEBF8u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEBF9u; return dd3_static_complete(rt,2u);
        }
        case 0xEBF9u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEBFAu; return dd3_static_complete(rt,2u);
        }
        case 0xEBFAu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xEBFBu; return dd3_static_complete(rt,2u);
        }
        case 0xEBFBu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xEBFCu; return dd3_static_complete(rt,2u);
        }
        case 0xEBFCu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xEBFDu; return dd3_static_complete(rt,2u);
        }
        case 0xEBFDu: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xEBFFu; return dd3_static_complete(rt,5u);
        }
        case 0xEBFFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEC01u,0xEC03u)) c++; rt->state.cpu.pc=0xEC03u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEC01u; return dd3_static_complete(rt,2u);
        }
        case 0xEC01u: {
            uint16_t ea=0x30u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xEC03u; return dd3_static_complete(rt,5u);
        }
        case 0xEC03u: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xEC05u; return dd3_static_complete(rt,5u);
        }
        case 0xEC05u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEC07u,0xEBD0u)) c++; rt->state.cpu.pc=0xEBD0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEC07u; return dd3_static_complete(rt,2u);
        }
        case 0xEC07u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xEC08u: {
            uint8_t v=0x4Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEC0Au; return dd3_static_complete(rt,2u);
        }
        case 0xEC0Au: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEC0Cu; return dd3_static_complete(rt,3u);
        }
        case 0xEC0Cu: {
            uint8_t v=0xECu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEC0Eu; return dd3_static_complete(rt,2u);
        }
        case 0xEC0Eu: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEC10u; return dd3_static_complete(rt,3u);
        }
        case 0xEC10u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEC12u; return dd3_static_complete(rt,2u);
        }
        case 0xEC12u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEC15u; return dd3_static_complete(rt,4u);
        }
        case 0xEC15u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEC17u; return dd3_static_complete(rt,2u);
        }
        case 0xEC17u: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEC19u; return dd3_static_complete(rt,3u);
        }
        case 0xEC19u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEC1Bu; return dd3_static_complete(rt,2u);
        }
        case 0xEC1Bu: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEC1Du; return dd3_static_complete(rt,3u);
        }
        case 0xEC1Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEC1Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0xEC1Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEC22u; return dd3_static_complete(rt,5u);
        }
        case 0xEC22u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEC23u; return dd3_static_complete(rt,2u);
        }
        case 0xEC23u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xEC24u; return dd3_static_complete(rt,2u);
        }
        case 0xEC24u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEC26u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0xEC26u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEC29u; return dd3_static_complete(rt,5u);
        }
        case 0xEC29u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEC2Au; return dd3_static_complete(rt,2u);
        }
        case 0xEC2Au: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xEC2Bu; return dd3_static_complete(rt,2u);
        }
        case 0xEC2Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEC2Du; return dd3_static_complete(rt,2u);
        }
        case 0xEC2Du: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEC30u; return dd3_static_complete(rt,5u);
        }
        case 0xEC30u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEC31u; return dd3_static_complete(rt,2u);
        }
        case 0xEC31u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEC33u; return dd3_static_complete(rt,2u);
        }
        case 0xEC33u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEC36u; return dd3_static_complete(rt,5u);
        }
        case 0xEC36u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEC37u; return dd3_static_complete(rt,2u);
        }
        case 0xEC37u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEC39u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0xEC39u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xEC3Cu; return dd3_static_complete(rt,5u);
        }
        case 0xEC3Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEC3Du; return dd3_static_complete(rt,2u);
        }
        case 0xEC3Du: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xEC3Eu; return dd3_static_complete(rt,2u);
        }
        case 0xEC3Eu: {
            uint16_t ea=0xB5u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xEC40u; return dd3_static_complete(rt,5u);
        }
        case 0xEC40u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEC42u,0xEC37u)) c++; rt->state.cpu.pc=0xEC37u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEC42u; return dd3_static_complete(rt,2u);
        }
        case 0xEC42u: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xEC44u; return dd3_static_complete(rt,5u);
        }
        case 0xEC44u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEC46u,0xEC19u)) c++; rt->state.cpu.pc=0xEC19u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEC46u; return dd3_static_complete(rt,2u);
        }
        case 0xEC46u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xEC49u; return dd3_static_complete(rt,4u);
        }
        case 0xEC49u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xEDBBu: {
            dd3_static_push8(rt,(uint8_t)(0xEDBDu>>8)); dd3_static_push8(rt,(uint8_t)0xEDBDu);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xEDBEu: {
            rt->state.cpu.i=1;
            rt->state.cpu.pc=0xEDBFu; return dd3_static_complete(rt,2u);
        }
        case 0xEDBFu: {
            dd3_static_push8(rt,(uint8_t)(0xEDC1u>>8)); dd3_static_push8(rt,(uint8_t)0xEDC1u);
            rt->state.cpu.pc=0xD089u; return dd3_static_complete(rt,6u);
        }
        case 0xEDC2u: {
            dd3_static_push8(rt,(uint8_t)(0xEDC4u>>8)); dd3_static_push8(rt,(uint8_t)0xEDC4u);
            rt->state.cpu.pc=0xD88Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEDC5u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEDC7u; return dd3_static_complete(rt,2u);
        }
        case 0xEDC7u: {
            dd3_static_write8(rt,0xA1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEDC9u; return dd3_static_complete(rt,3u);
        }
        case 0xEDC9u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEDCBu; return dd3_static_complete(rt,2u);
        }
        case 0xEDCBu: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEDCDu; return dd3_static_complete(rt,3u);
        }
        case 0xEDCDu: {
            uint8_t v=0x14u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEDCFu; return dd3_static_complete(rt,2u);
        }
        case 0xEDCFu: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEDD1u; return dd3_static_complete(rt,3u);
        }
        case 0xEDD1u: {
            uint8_t v=0x36u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEDD3u; return dd3_static_complete(rt,2u);
        }
        case 0xEDD3u: {
            dd3_static_push8(rt,(uint8_t)(0xEDD5u>>8)); dd3_static_push8(rt,(uint8_t)0xEDD5u);
            rt->state.cpu.pc=0xF02Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEDD6u: {
            uint8_t v=0x07u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEDD8u; return dd3_static_complete(rt,2u);
        }
        case 0xEDD8u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEDDAu; return dd3_static_complete(rt,2u);
        }
        case 0xEDDAu: {
            dd3_static_write8(rt,(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xEDDCu; return dd3_static_complete(rt,4u);
        }
        case 0xEDDCu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xEDDDu; return dd3_static_complete(rt,2u);
        }
        case 0xEDDDu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xEDDFu,0xEDDAu)) c++; rt->state.cpu.pc=0xEDDAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEDDFu; return dd3_static_complete(rt,2u);
        }
        case 0xEDDFu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEDE1u; return dd3_static_complete(rt,2u);
        }
        case 0xEDE1u: {
            dd3_static_push8(rt,(uint8_t)(0xEDE3u>>8)); dd3_static_push8(rt,(uint8_t)0xEDE3u);
            rt->state.cpu.pc=0xFE8Eu; return dd3_static_complete(rt,6u);
        }
        case 0xEDE4u: {
            uint8_t v=0x1Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEDE6u; return dd3_static_complete(rt,2u);
        }
        case 0xEDE6u: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEDE8u; return dd3_static_complete(rt,3u);
        }
        case 0xEDE8u: {
            uint8_t v=0x32u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEDEAu; return dd3_static_complete(rt,2u);
        }
        case 0xEDEAu: {
            dd3_static_push8(rt,(uint8_t)(0xEDECu>>8)); dd3_static_push8(rt,(uint8_t)0xEDECu);
            rt->state.cpu.pc=0xF02Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEDEDu: {
            uint16_t ea=0x99u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEDEFu; return dd3_static_complete(rt,3u);
        }
        case 0xEDEFu: {
            dd3_static_write8(rt,0x06FFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEDF2u; return dd3_static_complete(rt,4u);
        }
        case 0xEDF2u: {
            uint8_t v=0xC0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xEDF4u; return dd3_static_complete(rt,2u);
        }
        case 0xEDF4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEDF6u,0xEDFCu)) c++; rt->state.cpu.pc=0xEDFCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEDF6u; return dd3_static_complete(rt,2u);
        }
        case 0xEDF6u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEDF8u; return dd3_static_complete(rt,2u);
        }
        case 0xEDF8u: {
            dd3_static_write8(rt,0xA000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEDFBu; return dd3_static_complete(rt,4u);
        }
        case 0xEDFBu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xEDFCu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEDFEu; return dd3_static_complete(rt,2u);
        }
        case 0xEDFEu: {
            dd3_static_push8(rt,(uint8_t)(0xEE00u>>8)); dd3_static_push8(rt,(uint8_t)0xEE00u);
            rt->state.cpu.pc=0xFE8Eu; return dd3_static_complete(rt,6u);
        }
        case 0xEE01u: {
            uint8_t v=0x09u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE03u; return dd3_static_complete(rt,2u);
        }
        case 0xEE03u: {
            dd3_static_push8(rt,(uint8_t)(0xEE05u>>8)); dd3_static_push8(rt,(uint8_t)0xEE05u);
            rt->state.cpu.pc=0xF38Eu; return dd3_static_complete(rt,6u);
        }
        case 0xEE06u: {
            uint8_t v=0x30u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE08u; return dd3_static_complete(rt,2u);
        }
        case 0xEE08u: {
            dd3_static_push8(rt,(uint8_t)(0xEE0Au>>8)); dd3_static_push8(rt,(uint8_t)0xEE0Au);
            rt->state.cpu.pc=0xFE8Eu; return dd3_static_complete(rt,6u);
        }
        case 0xEE0Bu: {
            uint8_t v=0x33u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE0Du; return dd3_static_complete(rt,2u);
        }
        case 0xEE0Du: {
            dd3_static_push8(rt,(uint8_t)(0xEE0Fu>>8)); dd3_static_push8(rt,(uint8_t)0xEE0Fu);
            rt->state.cpu.pc=0xCB86u; return dd3_static_complete(rt,6u);
        }
        case 0xEE10u: {
            dd3_static_push8(rt,(uint8_t)(0xEE12u>>8)); dd3_static_push8(rt,(uint8_t)0xEE12u);
            rt->state.cpu.pc=0xFEBFu; return dd3_static_complete(rt,6u);
        }
        case 0xEE13u: {
            dd3_static_push8(rt,(uint8_t)(0xEE15u>>8)); dd3_static_push8(rt,(uint8_t)0xEE15u);
            rt->state.cpu.pc=0xFCF6u; return dd3_static_complete(rt,6u);
        }
        case 0xEE16u: {
            dd3_static_push8(rt,(uint8_t)(0xEE18u>>8)); dd3_static_push8(rt,(uint8_t)0xEE18u);
            rt->state.cpu.pc=0xF279u; return dd3_static_complete(rt,6u);
        }
        case 0xEE19u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE1Bu; return dd3_static_complete(rt,2u);
        }
        case 0xEE1Bu: {
            dd3_static_write8(rt,0xA000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE1Eu; return dd3_static_complete(rt,4u);
        }
        case 0xEE1Eu: {
            dd3_static_push8(rt,(uint8_t)(0xEE20u>>8)); dd3_static_push8(rt,(uint8_t)0xEE20u);
            rt->state.cpu.pc=0xF363u; return dd3_static_complete(rt,6u);
        }
        case 0xEE21u: {
            dd3_static_push8(rt,(uint8_t)(0xEE23u>>8)); dd3_static_push8(rt,(uint8_t)0xEE23u);
            rt->state.cpu.pc=0xFCF6u; return dd3_static_complete(rt,6u);
        }
        case 0xEE24u: {
            dd3_static_push8(rt,(uint8_t)(0xEE26u>>8)); dd3_static_push8(rt,(uint8_t)0xEE26u);
            rt->state.cpu.pc=0xEF50u; return dd3_static_complete(rt,6u);
        }
        case 0xEE27u: {
            dd3_static_push8(rt,(uint8_t)(0xEE29u>>8)); dd3_static_push8(rt,(uint8_t)0xEE29u);
            rt->state.cpu.pc=0xF28Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEE2Au: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE2Cu; return dd3_static_complete(rt,2u);
        }
        case 0xEE2Cu: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE2Eu; return dd3_static_complete(rt,3u);
        }
        case 0xEE2Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE30u; return dd3_static_complete(rt,2u);
        }
        case 0xEE30u: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE32u; return dd3_static_complete(rt,3u);
        }
        case 0xEE32u: {
            dd3_static_push8(rt,(uint8_t)(0xEE34u>>8)); dd3_static_push8(rt,(uint8_t)0xEE34u);
            rt->state.cpu.pc=0xFEBFu; return dd3_static_complete(rt,6u);
        }
        case 0xEE35u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE37u; return dd3_static_complete(rt,2u);
        }
        case 0xEE37u: {
            dd3_static_write8(rt,0x06B1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE3Au; return dd3_static_complete(rt,4u);
        }
        case 0xEE3Au: {
            uint8_t v=0xB0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE3Cu; return dd3_static_complete(rt,2u);
        }
        case 0xEE3Cu: {
            dd3_static_write8(rt,0x06B0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE3Fu; return dd3_static_complete(rt,4u);
        }
        case 0xEE3Fu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE41u; return dd3_static_complete(rt,2u);
        }
        case 0xEE41u: {
            dd3_static_write8(rt,0x06B2u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE44u; return dd3_static_complete(rt,4u);
        }
        case 0xEE44u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE46u; return dd3_static_complete(rt,2u);
        }
        case 0xEE46u: {
            dd3_static_push8(rt,(uint8_t)(0xEE48u>>8)); dd3_static_push8(rt,(uint8_t)0xEE48u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEE49u: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE4Bu; return dd3_static_complete(rt,2u);
        }
        case 0xEE4Bu: {
            dd3_static_push8(rt,(uint8_t)(0xEE4Du>>8)); dd3_static_push8(rt,(uint8_t)0xEE4Du);
            rt->state.cpu.pc=0xFE8Eu; return dd3_static_complete(rt,6u);
        }
        case 0xEE4Eu: {
            dd3_static_push8(rt,(uint8_t)(0xEE50u>>8)); dd3_static_push8(rt,(uint8_t)0xEE50u);
            rt->state.cpu.pc=0xF5CFu; return dd3_static_complete(rt,6u);
        }
        case 0xEE51u: {
            uint16_t ea=0x06B0u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xEE54u; return dd3_static_complete(rt,6u);
        }
        case 0xEE54u: {
            uint16_t ea=0x06B0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE57u; return dd3_static_complete(rt,4u);
        }
        case 0xEE57u: {
            uint8_t v=0xF0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xEE59u; return dd3_static_complete(rt,2u);
        }
        case 0xEE59u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEE5Bu,0xEE4Eu)) c++; rt->state.cpu.pc=0xEE4Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEE5Bu; return dd3_static_complete(rt,2u);
        }
        case 0xEE5Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE5Du; return dd3_static_complete(rt,2u);
        }
        case 0xEE5Du: {
            dd3_static_write8(rt,0x06B0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE60u; return dd3_static_complete(rt,4u);
        }
        case 0xEE60u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE62u; return dd3_static_complete(rt,2u);
        }
        case 0xEE62u: {
            dd3_static_push8(rt,(uint8_t)(0xEE64u>>8)); dd3_static_push8(rt,(uint8_t)0xEE64u);
            rt->state.cpu.pc=0xFE8Eu; return dd3_static_complete(rt,6u);
        }
        case 0xEE65u: {
            uint8_t v=0x7Du;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE67u; return dd3_static_complete(rt,2u);
        }
        case 0xEE67u: {
            dd3_static_write8(rt,0x04E6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE6Au; return dd3_static_complete(rt,4u);
        }
        case 0xEE6Au: {
            dd3_static_push8(rt,(uint8_t)(0xEE6Cu>>8)); dd3_static_push8(rt,(uint8_t)0xEE6Cu);
            rt->state.cpu.pc=0xFEEEu; return dd3_static_complete(rt,6u);
        }
        case 0xEE6Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE6Fu; return dd3_static_complete(rt,2u);
        }
        case 0xEE6Fu: {
            dd3_static_write8(rt,0x04DEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE72u; return dd3_static_complete(rt,4u);
        }
        case 0xEE72u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE74u; return dd3_static_complete(rt,2u);
        }
        case 0xEE74u: {
            dd3_static_write8(rt,0x3Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE76u; return dd3_static_complete(rt,3u);
        }
        case 0xEE76u: {
            uint8_t v=0x7Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE78u; return dd3_static_complete(rt,2u);
        }
        case 0xEE78u: {
            dd3_static_write8(rt,0x44u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE7Au; return dd3_static_complete(rt,3u);
        }
        case 0xEE7Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE7Cu; return dd3_static_complete(rt,2u);
        }
        case 0xEE7Cu: {
            dd3_static_write8(rt,0xDFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE7Eu; return dd3_static_complete(rt,3u);
        }
        case 0xEE7Eu: {
            dd3_static_write8(rt,0xE9u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE80u; return dd3_static_complete(rt,3u);
        }
        case 0xEE80u: {
            dd3_static_write8(rt,0xC1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE82u; return dd3_static_complete(rt,3u);
        }
        case 0xEE82u: {
            dd3_static_write8(rt,0xD5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE84u; return dd3_static_complete(rt,3u);
        }
        case 0xEE84u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE86u; return dd3_static_complete(rt,2u);
        }
        case 0xEE86u: {
            dd3_static_write8(rt,0xB7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE88u; return dd3_static_complete(rt,3u);
        }
        case 0xEE88u: {
            uint8_t v=0x62u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE8Au; return dd3_static_complete(rt,2u);
        }
        case 0xEE8Au: {
            dd3_static_write8(rt,0xCBu,rt->state.cpu.y);
            rt->state.cpu.pc=0xEE8Cu; return dd3_static_complete(rt,3u);
        }
        case 0xEE8Cu: {
            dd3_static_push8(rt,(uint8_t)(0xEE8Eu>>8)); dd3_static_push8(rt,(uint8_t)0xEE8Eu);
            rt->state.cpu.pc=0xFD0Du; return dd3_static_complete(rt,6u);
        }
        case 0xEE8Fu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE91u; return dd3_static_complete(rt,2u);
        }
        case 0xEE91u: {
            dd3_static_write8(rt,0xABu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE93u; return dd3_static_complete(rt,3u);
        }
        case 0xEE93u: {
            dd3_static_write8(rt,0xA1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE95u; return dd3_static_complete(rt,3u);
        }
        case 0xEE95u: {
            rt->state.cpu.i=0;
            rt->state.cpu.pc=0xEE96u; return dd3_static_complete(rt,2u);
        }
        case 0xEE96u: {
            uint8_t v=0x0Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEE98u; return dd3_static_complete(rt,2u);
        }
        case 0xEE98u: {
            dd3_static_write8(rt,0x04DDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEE9Bu; return dd3_static_complete(rt,4u);
        }
        case 0xEE9Bu: {
            dd3_static_push8(rt,(uint8_t)(0xEE9Du>>8)); dd3_static_push8(rt,(uint8_t)0xEE9Du);
            rt->state.cpu.pc=0xF279u; return dd3_static_complete(rt,6u);
        }
        case 0xEE9Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEEA0u; return dd3_static_complete(rt,2u);
        }
        case 0xEEA0u: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEEA2u; return dd3_static_complete(rt,3u);
        }
        case 0xEEA2u: {
            dd3_static_push8(rt,(uint8_t)(0xEEA4u>>8)); dd3_static_push8(rt,(uint8_t)0xEEA4u);
            rt->state.cpu.pc=0xFEBFu; return dd3_static_complete(rt,6u);
        }
        case 0xEEA5u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEEA7u; return dd3_static_complete(rt,2u);
        }
        case 0xEEA7u: {
            dd3_static_push8(rt,(uint8_t)(0xEEA9u>>8)); dd3_static_push8(rt,(uint8_t)0xEEA9u);
            rt->state.cpu.pc=0xFE8Eu; return dd3_static_complete(rt,6u);
        }
        case 0xEEAAu: {
            dd3_static_push8(rt,(uint8_t)(0xEEACu>>8)); dd3_static_push8(rt,(uint8_t)0xEEACu);
            rt->state.cpu.pc=0xFC62u; return dd3_static_complete(rt,6u);
        }
        case 0xEEADu: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEEAFu; return dd3_static_complete(rt,2u);
        }
        case 0xEEAFu: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xEEB0u; return dd3_static_complete(rt,2u);
        }
        case 0xEEB0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEEB2u,0xEEAFu)) c++; rt->state.cpu.pc=0xEEAFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEEB2u; return dd3_static_complete(rt,2u);
        }
        case 0xEEB2u: {
            dd3_static_push8(rt,(uint8_t)(0xEEB4u>>8)); dd3_static_push8(rt,(uint8_t)0xEEB4u);
            rt->state.cpu.pc=0xDBCAu; return dd3_static_complete(rt,6u);
        }
        case 0xEEB5u: {
            uint16_t ea=0x06B1u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEEB8u; return dd3_static_complete(rt,4u);
        }
        case 0xEEB8u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEEBAu,0xEEC6u)) c++; rt->state.cpu.pc=0xEEC6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEEBAu; return dd3_static_complete(rt,2u);
        }
        case 0xEEBAu: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEEBCu; return dd3_static_complete(rt,3u);
        }
        case 0xEEBCu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xEEBEu; return dd3_static_complete(rt,2u);
        }
        case 0xEEBEu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xEEC0u,0xEEBAu)) c++; rt->state.cpu.pc=0xEEBAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEEC0u; return dd3_static_complete(rt,2u);
        }
        case 0xEEC0u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEEC2u; return dd3_static_complete(rt,2u);
        }
        case 0xEEC2u: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEEC4u; return dd3_static_complete(rt,3u);
        }
        case 0xEEC4u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEEC6u,0xEEAAu)) c++; rt->state.cpu.pc=0xEEAAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEEC6u; return dd3_static_complete(rt,2u);
        }
        case 0xEEC6u: {
            uint8_t v=0x0Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEEC8u; return dd3_static_complete(rt,2u);
        }
        case 0xEEC8u: {
            dd3_static_write8(rt,0x04DDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEECBu; return dd3_static_complete(rt,4u);
        }
        case 0xEECBu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEECDu; return dd3_static_complete(rt,2u);
        }
        case 0xEECDu: {
            dd3_static_write8(rt,0x04DEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEED0u; return dd3_static_complete(rt,4u);
        }
        case 0xEED0u: {
            dd3_static_push8(rt,(uint8_t)(0xEED2u>>8)); dd3_static_push8(rt,(uint8_t)0xEED2u);
            rt->state.cpu.pc=0xF279u; return dd3_static_complete(rt,6u);
        }
        case 0xEED3u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEED5u; return dd3_static_complete(rt,2u);
        }
        case 0xEED5u: {
            dd3_static_write8(rt,0xFBu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEED7u; return dd3_static_complete(rt,3u);
        }
        case 0xEED7u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEED9u; return dd3_static_complete(rt,2u);
        }
        case 0xEED9u: {
            dd3_static_write8(rt,0xFCu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEEDBu; return dd3_static_complete(rt,3u);
        }
        case 0xEEDBu: {
            dd3_static_push8(rt,(uint8_t)(0xEEDDu>>8)); dd3_static_push8(rt,(uint8_t)0xEEDDu);
            rt->state.cpu.pc=0xF5CFu; return dd3_static_complete(rt,6u);
        }
        case 0xEEDEu: {
            dd3_static_push8(rt,(uint8_t)(0xEEE0u>>8)); dd3_static_push8(rt,(uint8_t)0xEEE0u);
            rt->state.cpu.pc=0xFC62u; return dd3_static_complete(rt,6u);
        }
        case 0xEEE1u: {
            uint16_t ea=0xFBu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEEE3u; return dd3_static_complete(rt,3u);
        }
        case 0xEEE3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEEE5u,0xEEF9u)) c++; rt->state.cpu.pc=0xEEF9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEEE5u; return dd3_static_complete(rt,2u);
        }
        case 0xEEE5u: {
            uint16_t ea=0xFCu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xEEE7u; return dd3_static_complete(rt,5u);
        }
        case 0xEEE7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEEE9u,0xEEDBu)) c++; rt->state.cpu.pc=0xEEDBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEEE9u; return dd3_static_complete(rt,2u);
        }
        case 0xEEE9u: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEEEBu; return dd3_static_complete(rt,3u);
        }
        case 0xEEEBu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEEEDu; return dd3_static_complete(rt,2u);
        }
        case 0xEEEDu: {
            dd3_static_write8(rt,0x9Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEEEFu; return dd3_static_complete(rt,3u);
        }
        case 0xEEEFu: {
            uint16_t ea=0xFBu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xEEF1u; return dd3_static_complete(rt,5u);
        }
        case 0xEEF1u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEEF3u,0xEED7u)) c++; rt->state.cpu.pc=0xEED7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEEF3u; return dd3_static_complete(rt,2u);
        }
        case 0xEEF3u: {
            dd3_static_push8(rt,(uint8_t)(0xEEF5u>>8)); dd3_static_push8(rt,(uint8_t)0xEEF5u);
            rt->state.cpu.pc=0xEF50u; return dd3_static_complete(rt,6u);
        }
        case 0xEEF6u: {
            rt->state.cpu.pc=0xEEDBu; return dd3_static_complete(rt,3u);
        }
        case 0xEEF9u: {
            uint8_t v=0x7Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEEFBu; return dd3_static_complete(rt,2u);
        }
        case 0xEEFBu: {
            dd3_static_write8(rt,0x44u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEEFDu; return dd3_static_complete(rt,3u);
        }
        case 0xEEFDu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEEFFu; return dd3_static_complete(rt,2u);
        }
        case 0xEEFFu: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF01u; return dd3_static_complete(rt,3u);
        }
        case 0xEF01u: {
            dd3_static_push8(rt,(uint8_t)(0xEF03u>>8)); dd3_static_push8(rt,(uint8_t)0xEF03u);
            rt->state.cpu.pc=0xFC62u; return dd3_static_complete(rt,6u);
        }
        case 0xEF04u: {
            dd3_static_push8(rt,(uint8_t)(0xEF06u>>8)); dd3_static_push8(rt,(uint8_t)0xEF06u);
            rt->state.cpu.pc=0xDBCAu; return dd3_static_complete(rt,6u);
        }
        case 0xEF07u: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF09u; return dd3_static_complete(rt,3u);
        }
        case 0xEF09u: {
            uint8_t v=0xD0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF0Bu; return dd3_static_complete(rt,2u);
        }
        case 0xEF0Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEF0Du,0xEF19u)) c++; rt->state.cpu.pc=0xEF19u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEF0Du; return dd3_static_complete(rt,2u);
        }
        case 0xEF0Du: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF0Fu; return dd3_static_complete(rt,3u);
        }
        case 0xEF0Fu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xEF11u; return dd3_static_complete(rt,2u);
        }
        case 0xEF11u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xEF13u,0xEF0Du)) c++; rt->state.cpu.pc=0xEF0Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEF13u; return dd3_static_complete(rt,2u);
        }
        case 0xEF13u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF15u; return dd3_static_complete(rt,2u);
        }
        case 0xEF15u: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF17u; return dd3_static_complete(rt,3u);
        }
        case 0xEF17u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEF19u,0xEF01u)) c++; rt->state.cpu.pc=0xEF01u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEF19u; return dd3_static_complete(rt,2u);
        }
        case 0xEF19u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF1Bu; return dd3_static_complete(rt,2u);
        }
        case 0xEF1Bu: {
            dd3_static_push8(rt,(uint8_t)(0xEF1Du>>8)); dd3_static_push8(rt,(uint8_t)0xEF1Du);
            rt->state.cpu.pc=0xF5BDu; return dd3_static_complete(rt,6u);
        }
        case 0xEF1Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF20u; return dd3_static_complete(rt,2u);
        }
        case 0xEF20u: {
            dd3_static_write8(rt,0xABu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF22u; return dd3_static_complete(rt,3u);
        }
        case 0xEF22u: {
            dd3_static_write8(rt,0xA1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF24u; return dd3_static_complete(rt,3u);
        }
        case 0xEF24u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF26u; return dd3_static_complete(rt,2u);
        }
        case 0xEF26u: {
            dd3_static_push8(rt,(uint8_t)(0xEF28u>>8)); dd3_static_push8(rt,(uint8_t)0xEF28u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEF29u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF2Bu; return dd3_static_complete(rt,2u);
        }
        case 0xEF2Bu: {
            dd3_static_write8(rt,0xA000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF2Eu; return dd3_static_complete(rt,4u);
        }
        case 0xEF2Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xEF2Fu: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF31u; return dd3_static_complete(rt,3u);
        }
        case 0xEF31u: {
            uint8_t v=0xE7u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF33u; return dd3_static_complete(rt,2u);
        }
        case 0xEF33u: {
            dd3_static_write8(rt,0x9Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF35u; return dd3_static_complete(rt,3u);
        }
        case 0xEF35u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xEF36u: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF38u; return dd3_static_complete(rt,3u);
        }
        case 0xEF38u: {
            uint8_t v=0x18u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF3Au; return dd3_static_complete(rt,2u);
        }
        case 0xEF3Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEF3Cu,0xEF33u)) c++; rt->state.cpu.pc=0xEF33u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEF3Cu; return dd3_static_complete(rt,2u);
        }
        case 0xEF3Cu: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF3Eu; return dd3_static_complete(rt,3u);
        }
        case 0xEF3Eu: {
            uint8_t v=0xEFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF40u; return dd3_static_complete(rt,2u);
        }
        case 0xEF40u: {
            rt->state.cpu.pc=0xEF33u; return dd3_static_complete(rt,3u);
        }
        case 0xEF50u: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF52u; return dd3_static_complete(rt,3u);
        }
        case 0xEF52u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF54u; return dd3_static_complete(rt,2u);
        }
        case 0xEF54u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEF56u,0xEF33u)) c++; rt->state.cpu.pc=0xEF33u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEF56u; return dd3_static_complete(rt,2u);
        }
        case 0xEF56u: {
            rt->state.cpu.i=0;
            rt->state.cpu.pc=0xEF57u; return dd3_static_complete(rt,2u);
        }
        case 0xEF57u: {
            dd3_static_push8(rt,(uint8_t)(0xEF59u>>8)); dd3_static_push8(rt,(uint8_t)0xEF59u);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xEF5Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF5Cu; return dd3_static_complete(rt,2u);
        }
        case 0xEF5Cu: {
            dd3_static_write8(rt,0x060Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF5Fu; return dd3_static_complete(rt,4u);
        }
        case 0xEF5Fu: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF62u; return dd3_static_complete(rt,4u);
        }
        case 0xEF62u: {
            dd3_static_push8(rt,(uint8_t)(0xEF64u>>8)); dd3_static_push8(rt,(uint8_t)0xEF64u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEF65u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF67u; return dd3_static_complete(rt,2u);
        }
        case 0xEF67u: {
            dd3_static_push8(rt,(uint8_t)(0xEF69u>>8)); dd3_static_push8(rt,(uint8_t)0xEF69u);
            rt->state.cpu.pc=0xF38Eu; return dd3_static_complete(rt,6u);
        }
        case 0xEF6Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF6Cu; return dd3_static_complete(rt,2u);
        }
        case 0xEF6Cu: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF6Eu; return dd3_static_complete(rt,3u);
        }
        case 0xEF6Eu: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF70u; return dd3_static_complete(rt,3u);
        }
        case 0xEF70u: {
            uint8_t v=0x30u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF72u; return dd3_static_complete(rt,2u);
        }
        case 0xEF72u: {
            dd3_static_write8(rt,0x04F3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF75u; return dd3_static_complete(rt,4u);
        }
        case 0xEF75u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF77u; return dd3_static_complete(rt,2u);
        }
        case 0xEF77u: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF79u; return dd3_static_complete(rt,3u);
        }
        case 0xEF79u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF7Bu; return dd3_static_complete(rt,2u);
        }
        case 0xEF7Bu: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEF7Du; return dd3_static_complete(rt,3u);
        }
        case 0xEF7Du: {
            dd3_static_push8(rt,(uint8_t)(0xEF7Fu>>8)); dd3_static_push8(rt,(uint8_t)0xEF7Fu);
            rt->state.cpu.pc=0xFEBFu; return dd3_static_complete(rt,6u);
        }
        case 0xEF80u: {
            dd3_static_push8(rt,(uint8_t)(0xEF82u>>8)); dd3_static_push8(rt,(uint8_t)0xEF82u);
            rt->state.cpu.pc=0xF5CFu; return dd3_static_complete(rt,6u);
        }
        case 0xEF83u: {
            dd3_static_push8(rt,(uint8_t)(0xEF85u>>8)); dd3_static_push8(rt,(uint8_t)0xEF85u);
            rt->state.cpu.pc=0xF5CFu; return dd3_static_complete(rt,6u);
        }
        case 0xEF86u: {
            dd3_static_push8(rt,(uint8_t)(0xEF88u>>8)); dd3_static_push8(rt,(uint8_t)0xEF88u);
            rt->state.cpu.pc=0xF5CFu; return dd3_static_complete(rt,6u);
        }
        case 0xEF89u: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xEF8Cu; return dd3_static_complete(rt,6u);
        }
        case 0xEF8Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEF8Eu,0xEF80u)) c++; rt->state.cpu.pc=0xEF80u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEF8Eu; return dd3_static_complete(rt,2u);
        }
        case 0xEF8Eu: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF90u; return dd3_static_complete(rt,3u);
        }
        case 0xEF90u: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xEF92u; return dd3_static_complete(rt,2u);
        }
        case 0xEF92u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEF94u,0xEF94u)) c++; rt->state.cpu.pc=0xEF94u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEF94u; return dd3_static_complete(rt,2u);
        }
        case 0xEF94u: {
            dd3_static_push8(rt,(uint8_t)(0xEF96u>>8)); dd3_static_push8(rt,(uint8_t)0xEF96u);
            rt->state.cpu.pc=0xF2AFu; return dd3_static_complete(rt,6u);
        }
        case 0xEF97u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xEF98u: {
            rt->state.cpu.i=1;
            rt->state.cpu.pc=0xEF99u; return dd3_static_complete(rt,2u);
        }
        case 0xEF99u: {
            dd3_static_push8(rt,(uint8_t)(0xEF9Bu>>8)); dd3_static_push8(rt,(uint8_t)0xEF9Bu);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xEF9Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEF9Eu; return dd3_static_complete(rt,2u);
        }
        case 0xEF9Eu: {
            dd3_static_write8(rt,0x060Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xEFA1u; return dd3_static_complete(rt,4u);
        }
        case 0xEFA1u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xEFA4u; return dd3_static_complete(rt,4u);
        }
        case 0xEFA4u: {
            dd3_static_push8(rt,(uint8_t)(0xEFA6u>>8)); dd3_static_push8(rt,(uint8_t)0xEFA6u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEFA7u: {
            dd3_static_push8(rt,(uint8_t)(0xEFA9u>>8)); dd3_static_push8(rt,(uint8_t)0xEFA9u);
            rt->state.cpu.pc=0xD089u; return dd3_static_complete(rt,6u);
        }
        case 0xEFAAu: {
            dd3_static_push8(rt,(uint8_t)(0xEFACu>>8)); dd3_static_push8(rt,(uint8_t)0xEFACu);
            rt->state.cpu.pc=0xD88Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEFADu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEFAFu; return dd3_static_complete(rt,2u);
        }
        case 0xEFAFu: {
            dd3_static_write8(rt,0xA1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEFB1u; return dd3_static_complete(rt,3u);
        }
        case 0xEFB1u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEFB3u; return dd3_static_complete(rt,2u);
        }
        case 0xEFB3u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEFB5u; return dd3_static_complete(rt,3u);
        }
        case 0xEFB5u: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEFB7u; return dd3_static_complete(rt,3u);
        }
        case 0xEFB7u: {
            uint8_t v=0x96u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEFB9u; return dd3_static_complete(rt,2u);
        }
        case 0xEFB9u: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEFBBu; return dd3_static_complete(rt,3u);
        }
        case 0xEFBBu: {
            uint8_t v=0x13u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEFBDu; return dd3_static_complete(rt,2u);
        }
        case 0xEFBDu: {
            dd3_static_push8(rt,(uint8_t)(0xEFBFu>>8)); dd3_static_push8(rt,(uint8_t)0xEFBFu);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEFC0u: {
            uint8_t v=0x3Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEFC2u; return dd3_static_complete(rt,2u);
        }
        case 0xEFC2u: {
            dd3_static_push8(rt,(uint8_t)(0xEFC4u>>8)); dd3_static_push8(rt,(uint8_t)0xEFC4u);
            rt->state.cpu.pc=0xF02Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEFC5u: {
            uint8_t v=0x3Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEFC7u; return dd3_static_complete(rt,2u);
        }
        case 0xEFC7u: {
            dd3_static_push8(rt,(uint8_t)(0xEFC9u>>8)); dd3_static_push8(rt,(uint8_t)0xEFC9u);
            rt->state.cpu.pc=0xF02Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEFCAu: {
            uint8_t v=0x3Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEFCCu; return dd3_static_complete(rt,2u);
        }
        case 0xEFCCu: {
            dd3_static_push8(rt,(uint8_t)(0xEFCEu>>8)); dd3_static_push8(rt,(uint8_t)0xEFCEu);
            rt->state.cpu.pc=0xF02Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEFCFu: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEFD1u; return dd3_static_complete(rt,2u);
        }
        case 0xEFD1u: {
            dd3_static_push8(rt,(uint8_t)(0xEFD3u>>8)); dd3_static_push8(rt,(uint8_t)0xEFD3u);
            rt->state.cpu.pc=0xF02Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEFD4u: {
            uint8_t v=0x3Du;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEFD6u; return dd3_static_complete(rt,2u);
        }
        case 0xEFD6u: {
            dd3_static_push8(rt,(uint8_t)(0xEFD8u>>8)); dd3_static_push8(rt,(uint8_t)0xEFD8u);
            rt->state.cpu.pc=0xF02Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEFD9u: {
            uint8_t v=0x0Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEFDBu; return dd3_static_complete(rt,2u);
        }
        case 0xEFDBu: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEFDDu; return dd3_static_complete(rt,3u);
        }
        case 0xEFDDu: {
            uint8_t v=0x3Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEFDFu; return dd3_static_complete(rt,2u);
        }
        case 0xEFDFu: {
            dd3_static_push8(rt,(uint8_t)(0xEFE1u>>8)); dd3_static_push8(rt,(uint8_t)0xEFE1u);
            rt->state.cpu.pc=0xF02Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEFE2u: {
            uint8_t v=0x50u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEFE4u; return dd3_static_complete(rt,2u);
        }
        case 0xEFE4u: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEFE6u; return dd3_static_complete(rt,3u);
        }
        case 0xEFE6u: {
            uint8_t v=0x05u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEFE8u; return dd3_static_complete(rt,2u);
        }
        case 0xEFE8u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xEFEAu; return dd3_static_complete(rt,3u);
        }
        case 0xEFEAu: {
            uint8_t v=0x42u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEFECu; return dd3_static_complete(rt,2u);
        }
        case 0xEFECu: {
            dd3_static_push8(rt,(uint8_t)(0xEFEEu>>8)); dd3_static_push8(rt,(uint8_t)0xEFEEu);
            rt->state.cpu.pc=0xF02Fu; return dd3_static_complete(rt,6u);
        }
        case 0xEFEFu: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xEFF1u; return dd3_static_complete(rt,5u);
        }
        case 0xEFF1u: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEFF3u; return dd3_static_complete(rt,3u);
        }
        case 0xEFF3u: {
            uint8_t v=0x09u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xEFF5u; return dd3_static_complete(rt,2u);
        }
        case 0xEFF5u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xEFF7u,0xEFEAu)) c++; rt->state.cpu.pc=0xEFEAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xEFF7u; return dd3_static_complete(rt,2u);
        }
        case 0xEFF7u: {
            uint8_t v=0x41u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xEFF9u; return dd3_static_complete(rt,2u);
        }
        case 0xEFF9u: {
            dd3_static_push8(rt,(uint8_t)(0xEFFBu>>8)); dd3_static_push8(rt,(uint8_t)0xEFFBu);
            rt->state.cpu.pc=0xCB86u; return dd3_static_complete(rt,6u);
        }
        case 0xEFFCu: {
            dd3_static_push8(rt,(uint8_t)(0xEFFEu>>8)); dd3_static_push8(rt,(uint8_t)0xEFFEu);
            rt->state.cpu.pc=0xF337u; return dd3_static_complete(rt,6u);
        }
        case 0xEFFFu: {
            dd3_static_push8(rt,(uint8_t)(0xF001u>>8)); dd3_static_push8(rt,(uint8_t)0xF001u);
            rt->state.cpu.pc=0xEF36u; return dd3_static_complete(rt,6u);
        }
        case 0xF002u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF004u; return dd3_static_complete(rt,2u);
        }
        case 0xF004u: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF006u; return dd3_static_complete(rt,3u);
        }
        case 0xF006u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF008u; return dd3_static_complete(rt,2u);
        }
        case 0xF008u: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF00Au; return dd3_static_complete(rt,3u);
        }
        case 0xF00Au: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF00Cu; return dd3_static_complete(rt,2u);
        }
        case 0xF00Cu: {
            dd3_static_write8(rt,0xA1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF00Eu; return dd3_static_complete(rt,3u);
        }
        case 0xF00Eu: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF010u; return dd3_static_complete(rt,2u);
        }
        case 0xF010u: {
            dd3_static_write8(rt,0xABu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF012u; return dd3_static_complete(rt,3u);
        }
        case 0xF012u: {
            rt->state.cpu.i=0;
            rt->state.cpu.pc=0xF013u; return dd3_static_complete(rt,2u);
        }
        case 0xF013u: {
            dd3_static_push8(rt,(uint8_t)(0xF015u>>8)); dd3_static_push8(rt,(uint8_t)0xF015u);
            rt->state.cpu.pc=0xFEBFu; return dd3_static_complete(rt,6u);
        }
        case 0xF016u: {
            uint8_t v=0xB4u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF018u; return dd3_static_complete(rt,2u);
        }
        case 0xF018u: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF01Au; return dd3_static_complete(rt,3u);
        }
        case 0xF01Au: {
            dd3_static_push8(rt,(uint8_t)(0xF01Cu>>8)); dd3_static_push8(rt,(uint8_t)0xF01Cu);
            rt->state.cpu.pc=0xEF36u; return dd3_static_complete(rt,6u);
        }
        case 0xF01Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF01Fu; return dd3_static_complete(rt,2u);
        }
        case 0xF01Fu: {
            dd3_static_push8(rt,(uint8_t)(0xF021u>>8)); dd3_static_push8(rt,(uint8_t)0xF021u);
            rt->state.cpu.pc=0xF5BDu; return dd3_static_complete(rt,6u);
        }
        case 0xF022u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF024u; return dd3_static_complete(rt,2u);
        }
        case 0xF024u: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF026u; return dd3_static_complete(rt,3u);
        }
        case 0xF026u: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF028u; return dd3_static_complete(rt,3u);
        }
        case 0xF028u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xF02Au; return dd3_static_complete(rt,2u);
        }
        case 0xF02Au: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF02Cu,0xF026u)) c++; rt->state.cpu.pc=0xF026u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF02Cu; return dd3_static_complete(rt,2u);
        }
        case 0xF02Cu: {
            rt->state.cpu.pc=0xF022u; return dd3_static_complete(rt,3u);
        }
        case 0xF02Fu: {
            dd3_static_push8(rt,(uint8_t)(0xF031u>>8)); dd3_static_push8(rt,(uint8_t)0xF031u);
            rt->state.cpu.pc=0xCB86u; return dd3_static_complete(rt,6u);
        }
        case 0xF032u: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF034u; return dd3_static_complete(rt,3u);
        }
        case 0xF034u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF036u,0xF039u)) c++; rt->state.cpu.pc=0xF039u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF036u; return dd3_static_complete(rt,2u);
        }
        case 0xF036u: {
            dd3_static_push8(rt,(uint8_t)(0xF038u>>8)); dd3_static_push8(rt,(uint8_t)0xF038u);
            rt->state.cpu.pc=0xF3B9u; return dd3_static_complete(rt,6u);
        }
        case 0xF039u: {
            dd3_static_push8(rt,(uint8_t)(0xF03Bu>>8)); dd3_static_push8(rt,(uint8_t)0xF03Bu);
            rt->state.cpu.pc=0xF337u; return dd3_static_complete(rt,6u);
        }
        case 0xF03Cu: {
            dd3_static_push8(rt,(uint8_t)(0xF03Eu>>8)); dd3_static_push8(rt,(uint8_t)0xF03Eu);
            rt->state.cpu.pc=0xEF36u; return dd3_static_complete(rt,6u);
        }
        case 0xF03Fu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF041u; return dd3_static_complete(rt,2u);
        }
        case 0xF041u: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF043u; return dd3_static_complete(rt,3u);
        }
        case 0xF043u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF045u; return dd3_static_complete(rt,2u);
        }
        case 0xF045u: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF047u; return dd3_static_complete(rt,3u);
        }
        case 0xF047u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF049u; return dd3_static_complete(rt,2u);
        }
        case 0xF049u: {
            dd3_static_write8(rt,0xABu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF04Bu; return dd3_static_complete(rt,3u);
        }
        case 0xF04Bu: {
            rt->state.cpu.i=0;
            rt->state.cpu.pc=0xF04Cu; return dd3_static_complete(rt,2u);
        }
        case 0xF04Cu: {
            dd3_static_push8(rt,(uint8_t)(0xF04Eu>>8)); dd3_static_push8(rt,(uint8_t)0xF04Eu);
            rt->state.cpu.pc=0xFEBFu; return dd3_static_complete(rt,6u);
        }
        case 0xF04Fu: {
            uint16_t ea=0xB5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF051u; return dd3_static_complete(rt,3u);
        }
        case 0xF051u: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF053u; return dd3_static_complete(rt,3u);
        }
        case 0xF053u: {
            dd3_static_push8(rt,(uint8_t)(0xF055u>>8)); dd3_static_push8(rt,(uint8_t)0xF055u);
            rt->state.cpu.pc=0xEF36u; return dd3_static_complete(rt,6u);
        }
        case 0xF056u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF058u; return dd3_static_complete(rt,2u);
        }
        case 0xF058u: {
            dd3_static_push8(rt,(uint8_t)(0xF05Au>>8)); dd3_static_push8(rt,(uint8_t)0xF05Au);
            rt->state.cpu.pc=0xF5BDu; return dd3_static_complete(rt,6u);
        }
        case 0xF05Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF05Du; return dd3_static_complete(rt,2u);
        }
        case 0xF05Du: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF05Fu; return dd3_static_complete(rt,3u);
        }
        case 0xF05Fu: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF061u; return dd3_static_complete(rt,3u);
        }
        case 0xF061u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xF063u; return dd3_static_complete(rt,2u);
        }
        case 0xF063u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF065u,0xF05Fu)) c++; rt->state.cpu.pc=0xF05Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF065u; return dd3_static_complete(rt,2u);
        }
        case 0xF065u: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xF067u; return dd3_static_complete(rt,5u);
        }
        case 0xF067u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF069u,0xF05Bu)) c++; rt->state.cpu.pc=0xF05Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF069u; return dd3_static_complete(rt,2u);
        }
        case 0xF069u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF06Bu; return dd3_static_complete(rt,2u);
        }
        case 0xF06Bu: {
            dd3_static_push8(rt,(uint8_t)(0xF06Du>>8)); dd3_static_push8(rt,(uint8_t)0xF06Du);
            rt->state.cpu.pc=0xF5BDu; return dd3_static_complete(rt,6u);
        }
        case 0xF06Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF06Fu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF071u; return dd3_static_complete(rt,3u);
        }
        case 0xF071u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF073u; return dd3_static_complete(rt,2u);
        }
        case 0xF073u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF075u,0xF083u)) c++; rt->state.cpu.pc=0xF083u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF075u; return dd3_static_complete(rt,2u);
        }
        case 0xF075u: {
            uint16_t ea=0x0470u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF078u; return dd3_static_complete(rt,4u);
        }
        case 0xF078u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF07Au,0xF084u)) c++; rt->state.cpu.pc=0xF084u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF07Au; return dd3_static_complete(rt,2u);
        }
        case 0xF07Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF07Cu; return dd3_static_complete(rt,2u);
        }
        case 0xF07Cu: {
            dd3_static_write8(rt,0xF4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF07Eu; return dd3_static_complete(rt,3u);
        }
        case 0xF07Eu: {
            dd3_static_write8(rt,0xF3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF080u; return dd3_static_complete(rt,3u);
        }
        case 0xF080u: {
            dd3_static_write8(rt,0x04D2u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF083u; return dd3_static_complete(rt,4u);
        }
        case 0xF083u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF084u: {
            uint16_t ea=0x0470u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xF087u; return dd3_static_complete(rt,6u);
        }
        case 0xF087u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF089u; return dd3_static_complete(rt,3u);
        }
        case 0xF089u: {
            uint16_t ea=(uint16_t)(0x9CBBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF08Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9CBBu,ea)?1u:0u));
        }
        case 0xF08Cu: {
            dd3_static_write8(rt,0xF3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF08Eu; return dd3_static_complete(rt,3u);
        }
        case 0xF08Eu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF090u; return dd3_static_complete(rt,3u);
        }
        case 0xF090u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF092u; return dd3_static_complete(rt,2u);
        }
        case 0xF092u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF094u; return dd3_static_complete(rt,3u);
        }
        case 0xF094u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF096u; return dd3_static_complete(rt,2u);
        }
        case 0xF096u: {
            dd3_static_push8(rt,(uint8_t)(0xF098u>>8)); dd3_static_push8(rt,(uint8_t)0xF098u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xF099u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF09Bu; return dd3_static_complete(rt,2u);
        }
        case 0xF09Bu: {
            dd3_static_push8(rt,(uint8_t)(0xF09Du>>8)); dd3_static_push8(rt,(uint8_t)0xF09Du);
            rt->state.cpu.pc=0xF38Eu; return dd3_static_complete(rt,6u);
        }
        case 0xF09Eu: {
            dd3_static_push8(rt,(uint8_t)(0xF0A0u>>8)); dd3_static_push8(rt,(uint8_t)0xF0A0u);
            rt->state.cpu.pc=0xF128u; return dd3_static_complete(rt,6u);
        }
        case 0xF0A1u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF0A3u; return dd3_static_complete(rt,2u);
        }
        case 0xF0A3u: {
            dd3_static_push8(rt,(uint8_t)(0xF0A5u>>8)); dd3_static_push8(rt,(uint8_t)0xF0A5u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xF0A6u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF0A8u; return dd3_static_complete(rt,2u);
        }
        case 0xF0A8u: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF0AAu; return dd3_static_complete(rt,3u);
        }
        case 0xF0AAu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF0ACu; return dd3_static_complete(rt,2u);
        }
        case 0xF0ACu: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF0AEu; return dd3_static_complete(rt,3u);
        }
        case 0xF0AEu: {
            dd3_static_push8(rt,(uint8_t)(0xF0B0u>>8)); dd3_static_push8(rt,(uint8_t)0xF0B0u);
            rt->state.cpu.pc=0xFEBFu; return dd3_static_complete(rt,6u);
        }
        case 0xF0B1u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF0B3u; return dd3_static_complete(rt,2u);
        }
        case 0xF0B3u: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF0B5u; return dd3_static_complete(rt,3u);
        }
        case 0xF0B5u: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xF0B8u; return dd3_static_complete(rt,6u);
        }
        case 0xF0B8u: {
            dd3_static_push8(rt,(uint8_t)(0xF0BAu>>8)); dd3_static_push8(rt,(uint8_t)0xF0BAu);
            rt->state.cpu.pc=0xE319u; return dd3_static_complete(rt,6u);
        }
        case 0xF0BBu: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF0BDu; return dd3_static_complete(rt,3u);
        }
        case 0xF0BDu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF0BFu; return dd3_static_complete(rt,2u);
        }
        case 0xF0BFu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF0C1u,0xF0B1u)) c++; rt->state.cpu.pc=0xF0B1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF0C1u; return dd3_static_complete(rt,2u);
        }
        case 0xF0C1u: {
            dd3_static_push8(rt,(uint8_t)(0xF0C3u>>8)); dd3_static_push8(rt,(uint8_t)0xF0C3u);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xF0C4u: {
            uint8_t v=0xFCu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF0C6u; return dd3_static_complete(rt,2u);
        }
        case 0xF0C6u: {
            dd3_static_push8(rt,(uint8_t)(0xF0C8u>>8)); dd3_static_push8(rt,(uint8_t)0xF0C8u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xF0C9u: {
            dd3_static_push8(rt,(uint8_t)(0xF0CBu>>8)); dd3_static_push8(rt,(uint8_t)0xF0CBu);
            rt->state.cpu.pc=0xF2AFu; return dd3_static_complete(rt,6u);
        }
        case 0xF0CCu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF0CEu; return dd3_static_complete(rt,3u);
        }
        case 0xF0CEu: {
            uint8_t v=0xEFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF0D0u; return dd3_static_complete(rt,2u);
        }
        case 0xF0D0u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF0D2u; return dd3_static_complete(rt,3u);
        }
        case 0xF0D2u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF0D4u,0xF0EAu)) c++; rt->state.cpu.pc=0xF0EAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF0D4u; return dd3_static_complete(rt,2u);
        }
        case 0xF0D4u: {
            uint16_t ea=0x04D2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF0D7u; return dd3_static_complete(rt,4u);
        }
        case 0xF0D7u: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF0D9u; return dd3_static_complete(rt,3u);
        }
        case 0xF0D9u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF0DBu; return dd3_static_complete(rt,2u);
        }
        case 0xF0DBu: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xF0DDu; return dd3_static_complete(rt,5u);
        }
        case 0xF0DDu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF0DFu,0xF0E4u)) c++; rt->state.cpu.pc=0xF0E4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF0DFu; return dd3_static_complete(rt,2u);
        }
        case 0xF0DFu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF0E1u; return dd3_static_complete(rt,2u);
        }
        case 0xF0E1u: {
            dd3_static_write8(rt,(uint16_t)(0x04D3u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xF0E4u; return dd3_static_complete(rt,5u);
        }
        case 0xF0E4u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF0E5u; return dd3_static_complete(rt,2u);
        }
        case 0xF0E5u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xF0E7u; return dd3_static_complete(rt,2u);
        }
        case 0xF0E7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF0E9u,0xF0DBu)) c++; rt->state.cpu.pc=0xF0DBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF0E9u; return dd3_static_complete(rt,2u);
        }
        case 0xF0E9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF0EAu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF0ECu; return dd3_static_complete(rt,2u);
        }
        case 0xF0ECu: {
            dd3_static_write8(rt,0xF3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF0EEu; return dd3_static_complete(rt,3u);
        }
        case 0xF0EEu: {
            dd3_static_write8(rt,0xF4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF0F0u; return dd3_static_complete(rt,3u);
        }
        case 0xF0F0u: {
            dd3_static_write8(rt,0x04D2u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF0F3u; return dd3_static_complete(rt,4u);
        }
        case 0xF0F3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF0F4u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF0F6u; return dd3_static_complete(rt,3u);
        }
        case 0xF0F6u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF0F8u; return dd3_static_complete(rt,2u);
        }
        case 0xF0F8u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF0FAu,0xF127u)) c++; rt->state.cpu.pc=0xF127u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF0FAu; return dd3_static_complete(rt,2u);
        }
        case 0xF0FAu: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF0FCu; return dd3_static_complete(rt,3u);
        }
        case 0xF0FCu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF0FDu; return dd3_static_complete(rt,2u);
        }
        case 0xF0FDu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF0FEu; return dd3_static_complete(rt,2u);
        }
        case 0xF0FEu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF0FFu; return dd3_static_complete(rt,2u);
        }
        case 0xF0FFu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF101u,0xF110u)) c++; rt->state.cpu.pc=0xF110u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF101u; return dd3_static_complete(rt,2u);
        }
        case 0xF101u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF103u; return dd3_static_complete(rt,3u);
        }
        case 0xF103u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF105u; return dd3_static_complete(rt,2u);
        }
        case 0xF105u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF107u,0xF127u)) c++; rt->state.cpu.pc=0xF127u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF107u; return dd3_static_complete(rt,2u);
        }
        case 0xF107u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF109u; return dd3_static_complete(rt,3u);
        }
        case 0xF109u: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF10Bu; return dd3_static_complete(rt,2u);
        }
        case 0xF10Bu: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF10Du; return dd3_static_complete(rt,3u);
        }
        case 0xF10Du: {
            rt->state.cpu.pc=0xF11Fu; return dd3_static_complete(rt,3u);
        }
        case 0xF110u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF111u; return dd3_static_complete(rt,2u);
        }
        case 0xF111u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF113u,0xF127u)) c++; rt->state.cpu.pc=0xF127u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF113u; return dd3_static_complete(rt,2u);
        }
        case 0xF113u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF115u; return dd3_static_complete(rt,3u);
        }
        case 0xF115u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF117u; return dd3_static_complete(rt,2u);
        }
        case 0xF117u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF119u,0xF127u)) c++; rt->state.cpu.pc=0xF127u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF119u; return dd3_static_complete(rt,2u);
        }
        case 0xF119u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF11Bu; return dd3_static_complete(rt,3u);
        }
        case 0xF11Bu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF11Du; return dd3_static_complete(rt,2u);
        }
        case 0xF11Du: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF11Fu; return dd3_static_complete(rt,3u);
        }
        case 0xF11Fu: {
            dd3_static_push8(rt,(uint8_t)(0xF121u>>8)); dd3_static_push8(rt,(uint8_t)0xF121u);
            rt->state.cpu.pc=0xF128u; return dd3_static_complete(rt,6u);
        }
        case 0xF122u: {
            uint8_t v=0x49u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF124u; return dd3_static_complete(rt,2u);
        }
        case 0xF124u: {
            dd3_static_push8(rt,(uint8_t)(0xF126u>>8)); dd3_static_push8(rt,(uint8_t)0xF126u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xF127u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF128u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF12Au; return dd3_static_complete(rt,2u);
        }
        case 0xF12Au: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF12Cu; return dd3_static_complete(rt,2u);
        }
        case 0xF12Cu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF12Eu; return dd3_static_complete(rt,3u);
        }
        case 0xF12Eu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF130u; return dd3_static_complete(rt,2u);
        }
        case 0xF130u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF132u,0xF134u)) c++; rt->state.cpu.pc=0xF134u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF132u; return dd3_static_complete(rt,2u);
        }
        case 0xF132u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF134u; return dd3_static_complete(rt,2u);
        }
        case 0xF134u: {
            dd3_static_push8(rt,(uint8_t)(0xF136u>>8)); dd3_static_push8(rt,(uint8_t)0xF136u);
            rt->state.cpu.pc=0xF140u; return dd3_static_complete(rt,6u);
        }
        case 0xF137u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xF138u; return dd3_static_complete(rt,2u);
        }
        case 0xF138u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF139u; return dd3_static_complete(rt,2u);
        }
        case 0xF139u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF13Bu; return dd3_static_complete(rt,2u);
        }
        case 0xF13Bu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF13Cu; return dd3_static_complete(rt,2u);
        }
        case 0xF13Cu: {
            dd3_static_push8(rt,(uint8_t)(0xF13Eu>>8)); dd3_static_push8(rt,(uint8_t)0xF13Eu);
            rt->state.cpu.pc=0xF140u; return dd3_static_complete(rt,6u);
        }
        case 0xF13Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF140u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF141u; return dd3_static_complete(rt,2u);
        }
        case 0xF141u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF142u; return dd3_static_complete(rt,2u);
        }
        case 0xF142u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xF143u; return dd3_static_complete(rt,2u);
        }
        case 0xF143u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF146u; return dd3_static_complete(rt,4u);
        }
        case 0xF146u: {
            uint16_t ea=(uint16_t)(0xF15Au+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF149u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xF15Au,ea)?1u:0u));
        }
        case 0xF149u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF14Cu; return dd3_static_complete(rt,4u);
        }
        case 0xF14Cu: {
            uint16_t ea=(uint16_t)(0xF159u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF14Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xF159u,ea)?1u:0u));
        }
        case 0xF14Fu: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF152u; return dd3_static_complete(rt,4u);
        }
        case 0xF152u: {
            uint16_t ea=(uint16_t)(0xF15Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF155u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xF15Du,ea)?1u:0u));
        }
        case 0xF155u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF158u; return dd3_static_complete(rt,4u);
        }
        case 0xF158u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF15Fu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF161u; return dd3_static_complete(rt,3u);
        }
        case 0xF161u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF163u; return dd3_static_complete(rt,2u);
        }
        case 0xF163u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF165u; return dd3_static_complete(rt,3u);
        }
        case 0xF165u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF167u; return dd3_static_complete(rt,2u);
        }
        case 0xF167u: {
            dd3_static_push8(rt,(uint8_t)(0xF169u>>8)); dd3_static_push8(rt,(uint8_t)0xF169u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xF16Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF16Cu; return dd3_static_complete(rt,2u);
        }
        case 0xF16Cu: {
            dd3_static_push8(rt,(uint8_t)(0xF16Eu>>8)); dd3_static_push8(rt,(uint8_t)0xF16Eu);
            rt->state.cpu.pc=0xF38Eu; return dd3_static_complete(rt,6u);
        }
        case 0xF16Fu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF171u; return dd3_static_complete(rt,2u);
        }
        case 0xF171u: {
            dd3_static_push8(rt,(uint8_t)(0xF173u>>8)); dd3_static_push8(rt,(uint8_t)0xF173u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xF174u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF176u; return dd3_static_complete(rt,2u);
        }
        case 0xF176u: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF178u; return dd3_static_complete(rt,3u);
        }
        case 0xF178u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF17Au; return dd3_static_complete(rt,2u);
        }
        case 0xF17Au: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF17Cu; return dd3_static_complete(rt,3u);
        }
        case 0xF17Cu: {
            dd3_static_push8(rt,(uint8_t)(0xF17Eu>>8)); dd3_static_push8(rt,(uint8_t)0xF17Eu);
            rt->state.cpu.pc=0xFEBFu; return dd3_static_complete(rt,6u);
        }
        case 0xF17Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF181u; return dd3_static_complete(rt,2u);
        }
        case 0xF181u: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF183u; return dd3_static_complete(rt,3u);
        }
        case 0xF183u: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xF186u; return dd3_static_complete(rt,6u);
        }
        case 0xF186u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF188u; return dd3_static_complete(rt,3u);
        }
        case 0xF188u: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF18Au; return dd3_static_complete(rt,2u);
        }
        case 0xF18Au: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF18Cu; return dd3_static_complete(rt,3u);
        }
        case 0xF18Cu: {
            uint16_t ea=0x046Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF18Fu; return dd3_static_complete(rt,4u);
        }
        case 0xF18Fu: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF191u; return dd3_static_complete(rt,3u);
        }
        case 0xF191u: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF193u; return dd3_static_complete(rt,2u);
        }
        case 0xF193u: {
            uint16_t ea=(uint16_t)(0xF1DFu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF196u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xF1DFu,ea)?1u:0u));
        }
        case 0xF196u: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF198u; return dd3_static_complete(rt,3u);
        }
        case 0xF198u: {
            dd3_static_push8(rt,(uint8_t)(0xF19Au>>8)); dd3_static_push8(rt,(uint8_t)0xF19Au);
            rt->state.cpu.pc=0xE319u; return dd3_static_complete(rt,6u);
        }
        case 0xF19Bu: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF19Du; return dd3_static_complete(rt,3u);
        }
        case 0xF19Du: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF19Fu; return dd3_static_complete(rt,2u);
        }
        case 0xF19Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF1A1u,0xF17Fu)) c++; rt->state.cpu.pc=0xF17Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF1A1u; return dd3_static_complete(rt,2u);
        }
        case 0xF1A1u: {
            dd3_static_push8(rt,(uint8_t)(0xF1A3u>>8)); dd3_static_push8(rt,(uint8_t)0xF1A3u);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xF1A4u: {
            uint8_t v=0xFCu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF1A6u; return dd3_static_complete(rt,2u);
        }
        case 0xF1A6u: {
            dd3_static_push8(rt,(uint8_t)(0xF1A8u>>8)); dd3_static_push8(rt,(uint8_t)0xF1A8u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xF1A9u: {
            dd3_static_push8(rt,(uint8_t)(0xF1ABu>>8)); dd3_static_push8(rt,(uint8_t)0xF1ABu);
            rt->state.cpu.pc=0xF2AFu; return dd3_static_complete(rt,6u);
        }
        case 0xF1ACu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF1AEu; return dd3_static_complete(rt,3u);
        }
        case 0xF1AEu: {
            uint8_t v=0xD7u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF1B0u; return dd3_static_complete(rt,2u);
        }
        case 0xF1B0u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF1B2u; return dd3_static_complete(rt,3u);
        }
        case 0xF1B2u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF1B4u; return dd3_static_complete(rt,2u);
        }
        case 0xF1B4u: {
            dd3_static_write8(rt,0x04D3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF1B7u; return dd3_static_complete(rt,4u);
        }
        case 0xF1B7u: {
            dd3_static_write8(rt,0x04D4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF1BAu; return dd3_static_complete(rt,4u);
        }
        case 0xF1BAu: {
            uint8_t v=0x80u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF1BCu; return dd3_static_complete(rt,2u);
        }
        case 0xF1BCu: {
            uint16_t ea=0x04D2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF1BFu; return dd3_static_complete(rt,4u);
        }
        case 0xF1BFu: {
            uint8_t v=0xFCu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF1C1u; return dd3_static_complete(rt,2u);
        }
        case 0xF1C1u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF1C3u; return dd3_static_complete(rt,2u);
        }
        case 0xF1C3u: {
            dd3_static_write8(rt,0x04D3u,rt->state.cpu.x);
            rt->state.cpu.pc=0xF1C6u; return dd3_static_complete(rt,4u);
        }
        case 0xF1C6u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF1C8u; return dd3_static_complete(rt,3u);
        }
        case 0xF1C8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xF1CAu,0xF1CFu)) c++; rt->state.cpu.pc=0xF1CFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF1CAu; return dd3_static_complete(rt,2u);
        }
        case 0xF1CAu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF1CCu; return dd3_static_complete(rt,2u);
        }
        case 0xF1CCu: {
            dd3_static_write8(rt,0x04D4u,rt->state.cpu.x);
            rt->state.cpu.pc=0xF1CFu; return dd3_static_complete(rt,4u);
        }
        case 0xF1CFu: {
            dd3_static_write8(rt,0x04D2u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF1D2u; return dd3_static_complete(rt,4u);
        }
        case 0xF1D2u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF1D4u; return dd3_static_complete(rt,2u);
        }
        case 0xF1D4u: {
            dd3_static_write8(rt,0x74u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF1D6u; return dd3_static_complete(rt,3u);
        }
        case 0xF1D6u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF1D8u; return dd3_static_complete(rt,3u);
        }
        case 0xF1D8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xF1DAu,0xF1DEu)) c++; rt->state.cpu.pc=0xF1DEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF1DAu; return dd3_static_complete(rt,2u);
        }
        case 0xF1DAu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF1DCu; return dd3_static_complete(rt,2u);
        }
        case 0xF1DCu: {
            dd3_static_write8(rt,0x75u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF1DEu; return dd3_static_complete(rt,3u);
        }
        case 0xF1DEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF1E2u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF1E4u; return dd3_static_complete(rt,2u);
        }
        case 0xF1E4u: {
            dd3_static_write8(rt,0x0600u,rt->state.cpu.x);
            rt->state.cpu.pc=0xF1E7u; return dd3_static_complete(rt,4u);
        }
        case 0xF1E7u: {
            uint8_t v=0x3Fu;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF1E9u; return dd3_static_complete(rt,2u);
        }
        case 0xF1E9u: {
            dd3_static_write8(rt,(uint16_t)(0x060Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xF1ECu; return dd3_static_complete(rt,5u);
        }
        case 0xF1ECu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xF1EDu; return dd3_static_complete(rt,2u);
        }
        case 0xF1EDu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xF1EFu,0xF1E9u)) c++; rt->state.cpu.pc=0xF1E9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF1EFu; return dd3_static_complete(rt,2u);
        }
        case 0xF1EFu: {
            dd3_static_push8(rt,(uint8_t)(0xF1F1u>>8)); dd3_static_push8(rt,(uint8_t)0xF1F1u);
            rt->state.cpu.pc=0xFCE3u; return dd3_static_complete(rt,6u);
        }
        case 0xF1F2u: {
            dd3_static_push8(rt,(uint8_t)(0xF1F4u>>8)); dd3_static_push8(rt,(uint8_t)0xF1F4u);
            rt->state.cpu.pc=0xC5EAu; return dd3_static_complete(rt,6u);
        }
        case 0xF1F5u: {
            dd3_static_push8(rt,(uint8_t)(0xF1F7u>>8)); dd3_static_push8(rt,(uint8_t)0xF1F7u);
            rt->state.cpu.pc=0xC510u; return dd3_static_complete(rt,6u);
        }
        case 0xF1F8u: {
            uint16_t ea=0x060Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF1FBu; return dd3_static_complete(rt,4u);
        }
        case 0xF1FBu: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xF1FEu; return dd3_static_complete(rt,4u);
        }
        case 0xF1FEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF200u,0xF1EFu)) c++; rt->state.cpu.pc=0xF1EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF200u; return dd3_static_complete(rt,2u);
        }
        case 0xF200u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF201u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF203u; return dd3_static_complete(rt,3u);
        }
        case 0xF203u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF205u; return dd3_static_complete(rt,2u);
        }
        case 0xF205u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF207u,0xF23Fu)) c++; rt->state.cpu.pc=0xF23Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF207u; return dd3_static_complete(rt,2u);
        }
        case 0xF207u: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF209u; return dd3_static_complete(rt,3u);
        }
        case 0xF209u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF20Au; return dd3_static_complete(rt,2u);
        }
        case 0xF20Au: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF20Bu; return dd3_static_complete(rt,2u);
        }
        case 0xF20Bu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF20Cu; return dd3_static_complete(rt,2u);
        }
        case 0xF20Cu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF20Eu,0xF220u)) c++; rt->state.cpu.pc=0xF220u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF20Eu; return dd3_static_complete(rt,2u);
        }
        case 0xF20Eu: {
            uint16_t ea=0x046Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF211u; return dd3_static_complete(rt,4u);
        }
        case 0xF211u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xF213u; return dd3_static_complete(rt,2u);
        }
        case 0xF213u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF215u,0xF220u)) c++; rt->state.cpu.pc=0xF220u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF215u; return dd3_static_complete(rt,2u);
        }
        case 0xF215u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF217u; return dd3_static_complete(rt,2u);
        }
        case 0xF217u: {
            dd3_static_push8(rt,(uint8_t)(0xF219u>>8)); dd3_static_push8(rt,(uint8_t)0xF219u);
            rt->state.cpu.pc=0xF259u; return dd3_static_complete(rt,6u);
        }
        case 0xF21Au: {
            uint16_t ea=0x046Fu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xF21Du; return dd3_static_complete(rt,6u);
        }
        case 0xF21Du: {
            rt->state.cpu.pc=0xF23Au; return dd3_static_complete(rt,3u);
        }
        case 0xF220u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF221u; return dd3_static_complete(rt,2u);
        }
        case 0xF221u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF223u,0xF233u)) c++; rt->state.cpu.pc=0xF233u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF223u; return dd3_static_complete(rt,2u);
        }
        case 0xF223u: {
            uint16_t ea=0x046Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF226u; return dd3_static_complete(rt,4u);
        }
        case 0xF226u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF228u,0xF23Fu)) c++; rt->state.cpu.pc=0xF23Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF228u; return dd3_static_complete(rt,2u);
        }
        case 0xF228u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF22Au; return dd3_static_complete(rt,2u);
        }
        case 0xF22Au: {
            dd3_static_push8(rt,(uint8_t)(0xF22Cu>>8)); dd3_static_push8(rt,(uint8_t)0xF22Cu);
            rt->state.cpu.pc=0xF259u; return dd3_static_complete(rt,6u);
        }
        case 0xF22Du: {
            uint16_t ea=0x046Fu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xF230u; return dd3_static_complete(rt,6u);
        }
        case 0xF230u: {
            rt->state.cpu.pc=0xF23Au; return dd3_static_complete(rt,3u);
        }
        case 0xF233u: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF235u; return dd3_static_complete(rt,3u);
        }
        case 0xF235u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF237u; return dd3_static_complete(rt,2u);
        }
        case 0xF237u: {
            rt->state.cpu.pc=0xF23Fu; return dd3_static_complete(rt,3u);
        }
        case 0xF23Au: {
            uint8_t v=0x49u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF23Cu; return dd3_static_complete(rt,2u);
        }
        case 0xF23Cu: {
            dd3_static_push8(rt,(uint8_t)(0xF23Eu>>8)); dd3_static_push8(rt,(uint8_t)0xF23Eu);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xF23Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF240u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF242u; return dd3_static_complete(rt,3u);
        }
        case 0xF242u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF244u; return dd3_static_complete(rt,2u);
        }
        case 0xF244u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF246u,0xF258u)) c++; rt->state.cpu.pc=0xF258u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF246u; return dd3_static_complete(rt,2u);
        }
        case 0xF246u: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF249u; return dd3_static_complete(rt,4u);
        }
        case 0xF249u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF24Bu; return dd3_static_complete(rt,2u);
        }
        case 0xF24Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF24Du,0xF253u)) c++; rt->state.cpu.pc=0xF253u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF24Du; return dd3_static_complete(rt,2u);
        }
        case 0xF24Du: {
            uint8_t v=0x1Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF24Fu; return dd3_static_complete(rt,2u);
        }
        case 0xF24Fu: {
            dd3_static_push8(rt,(uint8_t)(0xF251u>>8)); dd3_static_push8(rt,(uint8_t)0xF251u);
            rt->state.cpu.pc=0xF259u; return dd3_static_complete(rt,6u);
        }
        case 0xF252u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF253u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF255u; return dd3_static_complete(rt,2u);
        }
        case 0xF255u: {
            dd3_static_push8(rt,(uint8_t)(0xF257u>>8)); dd3_static_push8(rt,(uint8_t)0xF257u);
            rt->state.cpu.pc=0xF259u; return dd3_static_complete(rt,6u);
        }
        case 0xF258u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF259u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF25Au; return dd3_static_complete(rt,3u);
        }
        case 0xF25Au: {
            uint16_t ea=0x046Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF25Du; return dd3_static_complete(rt,4u);
        }
        case 0xF25Du: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF25Eu; return dd3_static_complete(rt,2u);
        }
        case 0xF25Eu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xF25Fu; return dd3_static_complete(rt,2u);
        }
        case 0xF25Fu: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF262u; return dd3_static_complete(rt,4u);
        }
        case 0xF262u: {
            uint16_t ea=(uint16_t)(0xF274u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF265u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xF274u,ea)?1u:0u));
        }
        case 0xF265u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF268u; return dd3_static_complete(rt,4u);
        }
        case 0xF268u: {
            uint16_t ea=(uint16_t)(0xF273u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF26Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xF273u,ea)?1u:0u));
        }
        case 0xF26Bu: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF26Eu; return dd3_static_complete(rt,4u);
        }
        case 0xF26Eu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF26Fu; return dd3_static_complete(rt,4u);
        }
        case 0xF26Fu: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF272u; return dd3_static_complete(rt,4u);
        }
        case 0xF272u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF279u: {
            dd3_static_push8(rt,(uint8_t)(0xF27Bu>>8)); dd3_static_push8(rt,(uint8_t)0xF27Bu);
            rt->state.cpu.pc=0xD957u; return dd3_static_complete(rt,6u);
        }
        case 0xF27Cu: {
            dd3_static_push8(rt,(uint8_t)(0xF27Eu>>8)); dd3_static_push8(rt,(uint8_t)0xF27Eu);
            rt->state.cpu.pc=0xD8C2u; return dd3_static_complete(rt,6u);
        }
        case 0xF27Fu: {
            uint8_t v=0x08u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF281u; return dd3_static_complete(rt,2u);
        }
        case 0xF281u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF282u; return dd3_static_complete(rt,2u);
        }
        case 0xF282u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF283u; return dd3_static_complete(rt,3u);
        }
        case 0xF283u: {
            dd3_static_push8(rt,(uint8_t)(0xF285u>>8)); dd3_static_push8(rt,(uint8_t)0xF285u);
            rt->state.cpu.pc=0xF5CFu; return dd3_static_complete(rt,6u);
        }
        case 0xF286u: {
            dd3_static_push8(rt,(uint8_t)(0xF288u>>8)); dd3_static_push8(rt,(uint8_t)0xF288u);
            rt->state.cpu.pc=0xC5EAu; return dd3_static_complete(rt,6u);
        }
        case 0xF289u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF28Au; return dd3_static_complete(rt,4u);
        }
        case 0xF28Au: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xF28Bu; return dd3_static_complete(rt,2u);
        }
        case 0xF28Bu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xF28Cu; return dd3_static_complete(rt,2u);
        }
        case 0xF28Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xF28Eu,0xF281u)) c++; rt->state.cpu.pc=0xF281u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF28Eu; return dd3_static_complete(rt,2u);
        }
        case 0xF28Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF28Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF291u; return dd3_static_complete(rt,2u);
        }
        case 0xF291u: {
            dd3_static_write8(rt,0x068Eu,rt->state.cpu.x);
            rt->state.cpu.pc=0xF294u; return dd3_static_complete(rt,4u);
        }
        case 0xF294u: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF296u; return dd3_static_complete(rt,2u);
        }
        case 0xF296u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF297u; return dd3_static_complete(rt,2u);
        }
        case 0xF297u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF298u; return dd3_static_complete(rt,3u);
        }
        case 0xF298u: {
            dd3_static_push8(rt,(uint8_t)(0xF29Au>>8)); dd3_static_push8(rt,(uint8_t)0xF29Au);
            rt->state.cpu.pc=0xFCE3u; return dd3_static_complete(rt,6u);
        }
        case 0xF29Bu: {
            dd3_static_push8(rt,(uint8_t)(0xF29Du>>8)); dd3_static_push8(rt,(uint8_t)0xF29Du);
            rt->state.cpu.pc=0xFE75u; return dd3_static_complete(rt,6u);
        }
        case 0xF29Eu: {
            dd3_static_push8(rt,(uint8_t)(0xF2A0u>>8)); dd3_static_push8(rt,(uint8_t)0xF2A0u);
            rt->state.cpu.pc=0xC5EAu; return dd3_static_complete(rt,6u);
        }
        case 0xF2A1u: {
            dd3_static_push8(rt,(uint8_t)(0xF2A3u>>8)); dd3_static_push8(rt,(uint8_t)0xF2A3u);
            rt->state.cpu.pc=0xCEE8u; return dd3_static_complete(rt,6u);
        }
        case 0xF2A4u: {
            uint16_t ea=0x068Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF2A7u; return dd3_static_complete(rt,4u);
        }
        case 0xF2A7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xF2A9u,0xF298u)) c++; rt->state.cpu.pc=0xF298u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF2A9u; return dd3_static_complete(rt,2u);
        }
        case 0xF2A9u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF2AAu; return dd3_static_complete(rt,4u);
        }
        case 0xF2AAu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF2ABu; return dd3_static_complete(rt,2u);
        }
        case 0xF2ABu: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF2ACu; return dd3_static_complete(rt,2u);
        }
        case 0xF2ACu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xF2AEu,0xF296u)) c++; rt->state.cpu.pc=0xF296u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF2AEu; return dd3_static_complete(rt,2u);
        }
        case 0xF2AEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF2AFu: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF2B1u; return dd3_static_complete(rt,2u);
        }
        case 0xF2B1u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF2B3u,0xF291u)) c++; rt->state.cpu.pc=0xF291u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF2B3u; return dd3_static_complete(rt,2u);
        }
        case 0xF2B3u: {
            uint16_t ea=0xA0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF2B5u; return dd3_static_complete(rt,3u);
        }
        case 0xF2B5u: {
            uint8_t v=0xFCu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF2B7u; return dd3_static_complete(rt,2u);
        }
        case 0xF2B7u: {
            uint16_t ea=0x06B2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF2BAu; return dd3_static_complete(rt,4u);
        }
        case 0xF2BAu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF2BCu; return dd3_static_complete(rt,2u);
        }
        case 0xF2BCu: {
            dd3_static_write8(rt,0xA0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF2BEu; return dd3_static_complete(rt,3u);
        }
        case 0xF2BEu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF2C0u; return dd3_static_complete(rt,2u);
        }
        case 0xF2C0u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF2C2u; return dd3_static_complete(rt,2u);
        }
        case 0xF2C2u: {
            dd3_static_write8(rt,0x8000u,rt->state.cpu.x);
            rt->state.cpu.pc=0xF2C5u; return dd3_static_complete(rt,4u);
        }
        case 0xF2C5u: {
            dd3_static_write8(rt,0x8001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF2C8u; return dd3_static_complete(rt,4u);
        }
        case 0xF2C8u: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF2CAu; return dd3_static_complete(rt,2u);
        }
        case 0xF2CAu: {
            uint8_t v=0x42u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF2CCu; return dd3_static_complete(rt,2u);
        }
        case 0xF2CCu: {
            dd3_static_write8(rt,0x8000u,rt->state.cpu.x);
            rt->state.cpu.pc=0xF2CFu; return dd3_static_complete(rt,4u);
        }
        case 0xF2CFu: {
            dd3_static_write8(rt,0x8001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF2D2u; return dd3_static_complete(rt,4u);
        }
        case 0xF2D2u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF2D5u; return dd3_static_complete(rt,4u);
        }
        case 0xF2D5u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF2D7u; return dd3_static_complete(rt,2u);
        }
        case 0xF2D7u: {
            dd3_static_write8(rt,0x2005u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF2DAu; return dd3_static_complete(rt,4u);
        }
        case 0xF2DAu: {
            uint8_t v=0xD0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF2DCu; return dd3_static_complete(rt,2u);
        }
        case 0xF2DCu: {
            dd3_static_write8(rt,0x2005u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF2DFu; return dd3_static_complete(rt,4u);
        }
        case 0xF2DFu: {
            uint16_t ea=0xA0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF2E1u; return dd3_static_complete(rt,3u);
        }
        case 0xF2E1u: {
            dd3_static_write8(rt,0x2000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF2E4u; return dd3_static_complete(rt,4u);
        }
        case 0xF2E4u: {
            uint8_t v=0x2Bu;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF2E6u; return dd3_static_complete(rt,2u);
        }
        case 0xF2E6u: {
            uint16_t ea=0x06B2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF2E9u; return dd3_static_complete(rt,4u);
        }
        case 0xF2E9u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF2EBu; return dd3_static_complete(rt,2u);
        }
        case 0xF2EBu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF2EDu,0xF2EFu)) c++; rt->state.cpu.pc=0xF2EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF2EDu; return dd3_static_complete(rt,2u);
        }
        case 0xF2EDu: {
            uint8_t v=0x23u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF2EFu; return dd3_static_complete(rt,2u);
        }
        case 0xF2EFu: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.x);
            rt->state.cpu.pc=0xF2F2u; return dd3_static_complete(rt,4u);
        }
        case 0xF2F2u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF2F4u; return dd3_static_complete(rt,2u);
        }
        case 0xF2F4u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.x);
            rt->state.cpu.pc=0xF2F7u; return dd3_static_complete(rt,4u);
        }
        case 0xF2F7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF2F8u: {
            uint16_t ea=0xA0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF2FAu; return dd3_static_complete(rt,3u);
        }
        case 0xF2FAu: {
            uint8_t v=0xFCu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF2FCu; return dd3_static_complete(rt,2u);
        }
        case 0xF2FCu: {
            dd3_static_write8(rt,0xA0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF2FEu; return dd3_static_complete(rt,3u);
        }
        case 0xF2FEu: {
            dd3_static_write8(rt,0x2000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF301u; return dd3_static_complete(rt,4u);
        }
        case 0xF301u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF304u; return dd3_static_complete(rt,4u);
        }
        case 0xF304u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF306u; return dd3_static_complete(rt,2u);
        }
        case 0xF306u: {
            dd3_static_write8(rt,0x2005u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF309u; return dd3_static_complete(rt,4u);
        }
        case 0xF309u: {
            uint16_t ea=0x06B0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF30Cu; return dd3_static_complete(rt,4u);
        }
        case 0xF30Cu: {
            dd3_static_write8(rt,0x2005u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF30Fu; return dd3_static_complete(rt,4u);
        }
        case 0xF30Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF337u: {
            uint16_t ea=0xA0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF339u; return dd3_static_complete(rt,3u);
        }
        case 0xF339u: {
            uint8_t v=0xFCu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF33Bu; return dd3_static_complete(rt,2u);
        }
        case 0xF33Bu: {
            dd3_static_write8(rt,0x2000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF33Eu; return dd3_static_complete(rt,4u);
        }
        case 0xF33Eu: {
            dd3_static_write8(rt,0xA0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF340u; return dd3_static_complete(rt,3u);
        }
        case 0xF340u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF343u; return dd3_static_complete(rt,4u);
        }
        case 0xF343u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF345u; return dd3_static_complete(rt,2u);
        }
        case 0xF345u: {
            dd3_static_write8(rt,0x2005u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF348u; return dd3_static_complete(rt,4u);
        }
        case 0xF348u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF34Au; return dd3_static_complete(rt,2u);
        }
        case 0xF34Au: {
            dd3_static_write8(rt,0x2005u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF34Du; return dd3_static_complete(rt,4u);
        }
        case 0xF34Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF363u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF366u; return dd3_static_complete(rt,4u);
        }
        case 0xF366u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF368u; return dd3_static_complete(rt,2u);
        }
        case 0xF368u: {
            dd3_static_write8(rt,0xA0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF36Au; return dd3_static_complete(rt,3u);
        }
        case 0xF36Au: {
            dd3_static_write8(rt,0x2000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF36Du; return dd3_static_complete(rt,4u);
        }
        case 0xF36Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF36Fu; return dd3_static_complete(rt,2u);
        }
        case 0xF36Fu: {
            dd3_static_write8(rt,0x2005u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF372u; return dd3_static_complete(rt,4u);
        }
        case 0xF372u: {
            dd3_static_write8(rt,0x2005u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF375u; return dd3_static_complete(rt,4u);
        }
        case 0xF375u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF376u: {
            uint8_t v=0x07u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF378u; return dd3_static_complete(rt,2u);
        }
        case 0xF378u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF37Au; return dd3_static_complete(rt,2u);
        }
        case 0xF37Au: {
            dd3_static_write8(rt,(uint16_t)((0x93u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xF37Cu; return dd3_static_complete(rt,4u);
        }
        case 0xF37Cu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xF37Du; return dd3_static_complete(rt,2u);
        }
        case 0xF37Du: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xF37Fu,0xF37Au)) c++; rt->state.cpu.pc=0xF37Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF37Fu; return dd3_static_complete(rt,2u);
        }
        case 0xF37Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF380u: {
            uint8_t v=0x40u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF382u; return dd3_static_complete(rt,2u);
        }
        case 0xF382u: {
            dd3_static_write8(rt,0x04EEu,rt->state.cpu.x);
            rt->state.cpu.pc=0xF385u; return dd3_static_complete(rt,4u);
        }
        case 0xF385u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xF386u; return dd3_static_complete(rt,2u);
        }
        case 0xF386u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xF387u; return dd3_static_complete(rt,2u);
        }
        case 0xF387u: {
            dd3_static_write8(rt,0x04EFu,rt->state.cpu.x);
            rt->state.cpu.pc=0xF38Au; return dd3_static_complete(rt,4u);
        }
        case 0xF38Au: {
            dd3_static_push8(rt,(uint8_t)(0xF38Cu>>8)); dd3_static_push8(rt,(uint8_t)0xF38Cu);
            rt->state.cpu.pc=0xFED7u; return dd3_static_complete(rt,6u);
        }
        case 0xF38Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF38Eu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF38Fu; return dd3_static_complete(rt,3u);
        }
        case 0xF38Fu: {
            dd3_static_push8(rt,(uint8_t)(0xF391u>>8)); dd3_static_push8(rt,(uint8_t)0xF391u);
            rt->state.cpu.pc=0xFD9Eu; return dd3_static_complete(rt,6u);
        }
        case 0xF392u: {
            dd3_static_push8(rt,(uint8_t)(0xF394u>>8)); dd3_static_push8(rt,(uint8_t)0xF394u);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xF395u: {
            dd3_static_push8(rt,(uint8_t)(0xF397u>>8)); dd3_static_push8(rt,(uint8_t)0xF397u);
            rt->state.cpu.pc=0xD089u; return dd3_static_complete(rt,6u);
        }
        case 0xF398u: {
            dd3_static_push8(rt,(uint8_t)(0xF39Au>>8)); dd3_static_push8(rt,(uint8_t)0xF39Au);
            rt->state.cpu.pc=0xD88Fu; return dd3_static_complete(rt,6u);
        }
        case 0xF39Bu: {
            dd3_static_push8(rt,(uint8_t)(0xF39Du>>8)); dd3_static_push8(rt,(uint8_t)0xF39Du);
            rt->state.cpu.pc=0xF380u; return dd3_static_complete(rt,6u);
        }
        case 0xF39Eu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF39Fu; return dd3_static_complete(rt,4u);
        }
        case 0xF39Fu: {
            dd3_static_push8(rt,(uint8_t)(0xF3A1u>>8)); dd3_static_push8(rt,(uint8_t)0xF3A1u);
            rt->state.cpu.pc=0xF3B9u; return dd3_static_complete(rt,6u);
        }
        case 0xF3A2u: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF3A4u; return dd3_static_complete(rt,2u);
        }
        case 0xF3A4u: {
            dd3_static_write8(rt,0x04DDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF3A7u; return dd3_static_complete(rt,4u);
        }
        case 0xF3A7u: {
            uint8_t v=0xAAu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF3A9u; return dd3_static_complete(rt,2u);
        }
        case 0xF3A9u: {
            dd3_static_push8(rt,(uint8_t)(0xF3ABu>>8)); dd3_static_push8(rt,(uint8_t)0xF3ABu);
            rt->state.cpu.pc=0xF1E2u; return dd3_static_complete(rt,6u);
        }
        case 0xF3ACu: {
            dd3_static_push8(rt,(uint8_t)(0xF3AEu>>8)); dd3_static_push8(rt,(uint8_t)0xF3AEu);
            rt->state.cpu.pc=0xF337u; return dd3_static_complete(rt,6u);
        }
        case 0xF3AFu: {
            dd3_static_push8(rt,(uint8_t)(0xF3B1u>>8)); dd3_static_push8(rt,(uint8_t)0xF3B1u);
            rt->state.cpu.pc=0xFCE3u; return dd3_static_complete(rt,6u);
        }
        case 0xF3B2u: {
            dd3_static_push8(rt,(uint8_t)(0xF3B4u>>8)); dd3_static_push8(rt,(uint8_t)0xF3B4u);
            rt->state.cpu.pc=0xFD1Au; return dd3_static_complete(rt,6u);
        }
        case 0xF3B5u: {
            dd3_static_push8(rt,(uint8_t)(0xF3B7u>>8)); dd3_static_push8(rt,(uint8_t)0xF3B7u);
            rt->state.cpu.pc=0xF28Fu; return dd3_static_complete(rt,6u);
        }
        case 0xF3B8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF3B9u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF3BAu; return dd3_static_complete(rt,2u);
        }
        case 0xF3BAu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xF3BBu; return dd3_static_complete(rt,2u);
        }
        case 0xF3BBu: {
            uint16_t ea=(uint16_t)(0xF3F0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF3BEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xF3F0u,ea)?1u:0u));
        }
        case 0xF3BEu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF3C0u; return dd3_static_complete(rt,3u);
        }
        case 0xF3C0u: {
            uint16_t ea=(uint16_t)(0xF3F1u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF3C3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xF3F1u,ea)?1u:0u));
        }
        case 0xF3C3u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xF3C5u; return dd3_static_complete(rt,3u);
        }
        case 0xF3C5u: {
            dd3_static_push8(rt,(uint8_t)(0xF3C7u>>8)); dd3_static_push8(rt,(uint8_t)0xF3C7u);
            rt->state.cpu.pc=0xDBC0u; return dd3_static_complete(rt,6u);
        }
        case 0xF3C8u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF3CAu; return dd3_static_complete(rt,2u);
        }
        case 0xF3CAu: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF3CDu; return dd3_static_complete(rt,4u);
        }
        case 0xF3CDu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF3CEu; return dd3_static_complete(rt,2u);
        }
        case 0xF3CEu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF3D0u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xF3D0u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF3D3u; return dd3_static_complete(rt,4u);
        }
        case 0xF3D3u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF3D4u; return dd3_static_complete(rt,2u);
        }
        case 0xF3D4u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF3D6u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xF3D6u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF3D9u; return dd3_static_complete(rt,4u);
        }
        case 0xF3D9u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF3DAu; return dd3_static_complete(rt,2u);
        }
        case 0xF3DAu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF3DBu; return dd3_static_complete(rt,2u);
        }
        case 0xF3DBu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF3DDu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xF3DDu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xF3DFu; return dd3_static_complete(rt,2u);
        }
        case 0xF3DFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF3E1u,0xF3E5u)) c++; rt->state.cpu.pc=0xF3E5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF3E1u; return dd3_static_complete(rt,2u);
        }
        case 0xF3E1u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF3E2u; return dd3_static_complete(rt,2u);
        }
        case 0xF3E2u: {
            rt->state.cpu.pc=0xF3CAu; return dd3_static_complete(rt,3u);
        }
        case 0xF3E5u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xF3E7u; return dd3_static_complete(rt,2u);
        }
        case 0xF3E7u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF3E9u,0xF3EFu)) c++; rt->state.cpu.pc=0xF3EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF3E9u; return dd3_static_complete(rt,2u);
        }
        case 0xF3E9u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF3ECu; return dd3_static_complete(rt,4u);
        }
        case 0xF3ECu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF3EDu; return dd3_static_complete(rt,2u);
        }
        case 0xF3EDu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF3EFu,0xF3DBu)) c++; rt->state.cpu.pc=0xF3DBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF3EFu; return dd3_static_complete(rt,2u);
        }
        case 0xF3EFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF5BDu: {
            dd3_static_write8(rt,0x068Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF5C0u; return dd3_static_complete(rt,4u);
        }
        case 0xF5C0u: {
            dd3_static_push8(rt,(uint8_t)(0xF5C2u>>8)); dd3_static_push8(rt,(uint8_t)0xF5C2u);
            rt->state.cpu.pc=0xF5CFu; return dd3_static_complete(rt,6u);
        }
        case 0xF5C3u: {
            dd3_static_push8(rt,(uint8_t)(0xF5C5u>>8)); dd3_static_push8(rt,(uint8_t)0xF5C5u);
            rt->state.cpu.pc=0xCEE8u; return dd3_static_complete(rt,6u);
        }
        case 0xF5C6u: {
            uint16_t ea=0x068Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF5C9u; return dd3_static_complete(rt,4u);
        }
        case 0xF5C9u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xF5CBu,0xF5C0u)) c++; rt->state.cpu.pc=0xF5C0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF5CBu; return dd3_static_complete(rt,2u);
        }
        case 0xF5CBu: {
            dd3_static_push8(rt,(uint8_t)(0xF5CDu>>8)); dd3_static_push8(rt,(uint8_t)0xF5CDu);
            rt->state.cpu.pc=0xF5CFu; return dd3_static_complete(rt,6u);
        }
        case 0xF5CEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF5CFu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF5D1u; return dd3_static_complete(rt,2u);
        }
        case 0xF5D1u: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF5D3u; return dd3_static_complete(rt,3u);
        }
        case 0xF5D3u: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF5D5u; return dd3_static_complete(rt,3u);
        }
        case 0xF5D5u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xF5D7u; return dd3_static_complete(rt,2u);
        }
        case 0xF5D7u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF5D9u,0xF5D3u)) c++; rt->state.cpu.pc=0xF5D3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF5D9u; return dd3_static_complete(rt,2u);
        }
        case 0xF5D9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF5E5u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF5E7u; return dd3_static_complete(rt,3u);
        }
        case 0xF5E7u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF5E9u; return dd3_static_complete(rt,2u);
        }
        case 0xF5E9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF5EBu,0xF615u)) c++; rt->state.cpu.pc=0xF615u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF5EBu; return dd3_static_complete(rt,2u);
        }
        case 0xF5EBu: {
            uint8_t v=0x12u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF5EDu; return dd3_static_complete(rt,2u);
        }
        case 0xF5EDu: {
            dd3_static_push8(rt,(uint8_t)(0xF5EFu>>8)); dd3_static_push8(rt,(uint8_t)0xF5EFu);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xF5F0u: {
            uint8_t v=0x37u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF5F2u; return dd3_static_complete(rt,2u);
        }
        case 0xF5F2u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF5F4u; return dd3_static_complete(rt,3u);
        }
        case 0xF5F4u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xF5F6u,0xF5F8u)) c++; rt->state.cpu.pc=0xF5F8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF5F6u; return dd3_static_complete(rt,2u);
        }
        case 0xF5F6u: {
            uint8_t v=0x38u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF5F8u; return dd3_static_complete(rt,2u);
        }
        case 0xF5F8u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF5FAu; return dd3_static_complete(rt,2u);
        }
        case 0xF5FAu: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF5FCu; return dd3_static_complete(rt,3u);
        }
        case 0xF5FCu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF5FDu; return dd3_static_complete(rt,2u);
        }
        case 0xF5FDu: {
            dd3_static_push8(rt,(uint8_t)(0xF5FFu>>8)); dd3_static_push8(rt,(uint8_t)0xF5FFu);
            rt->state.cpu.pc=0xF644u; return dd3_static_complete(rt,6u);
        }
        case 0xF600u: {
            uint8_t v=0x39u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF602u; return dd3_static_complete(rt,2u);
        }
        case 0xF602u: {
            dd3_static_push8(rt,(uint8_t)(0xF604u>>8)); dd3_static_push8(rt,(uint8_t)0xF604u);
            rt->state.cpu.pc=0xF644u; return dd3_static_complete(rt,6u);
        }
        case 0xF605u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF607u; return dd3_static_complete(rt,2u);
        }
        case 0xF607u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF609u; return dd3_static_complete(rt,3u);
        }
        case 0xF609u: {
            uint8_t v=0x3Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF60Bu; return dd3_static_complete(rt,2u);
        }
        case 0xF60Bu: {
            dd3_static_push8(rt,(uint8_t)(0xF60Du>>8)); dd3_static_push8(rt,(uint8_t)0xF60Du);
            rt->state.cpu.pc=0xF644u; return dd3_static_complete(rt,6u);
        }
        case 0xF60Eu: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xF610u; return dd3_static_complete(rt,5u);
        }
        case 0xF610u: {
            uint8_t v=0x3Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF612u; return dd3_static_complete(rt,2u);
        }
        case 0xF612u: {
            dd3_static_push8(rt,(uint8_t)(0xF614u>>8)); dd3_static_push8(rt,(uint8_t)0xF614u);
            rt->state.cpu.pc=0xF644u; return dd3_static_complete(rt,6u);
        }
        case 0xF615u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF617u; return dd3_static_complete(rt,3u);
        }
        case 0xF617u: {
            uint8_t v=0x0Eu;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xF619u; return dd3_static_complete(rt,2u);
        }
        case 0xF619u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF61Bu,0xF621u)) c++; rt->state.cpu.pc=0xF621u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF61Bu; return dd3_static_complete(rt,2u);
        }
        case 0xF61Bu: {
            uint16_t ea=(uint16_t)(0xF690u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF61Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xF690u,ea)?1u:0u));
        }
        case 0xF61Eu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xF620u,0xF626u)) c++; rt->state.cpu.pc=0xF626u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF620u; return dd3_static_complete(rt,2u);
        }
        case 0xF620u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF621u: {
            uint8_t v=0x43u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF623u; return dd3_static_complete(rt,2u);
        }
        case 0xF623u: {
            rt->state.cpu.pc=0xF636u; return dd3_static_complete(rt,3u);
        }
        case 0xF626u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF627u; return dd3_static_complete(rt,2u);
        }
        case 0xF627u: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF629u; return dd3_static_complete(rt,3u);
        }
        case 0xF629u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF62Au; return dd3_static_complete(rt,2u);
        }
        case 0xF62Au: {
            uint16_t ea=(uint16_t)(0xBD26u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF62Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBD26u,ea)?1u:0u));
        }
        case 0xF62Du: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF62Fu; return dd3_static_complete(rt,3u);
        }
        case 0xF62Fu: {
            uint16_t ea=(uint16_t)(0xBD27u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF632u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBD27u,ea)?1u:0u));
        }
        case 0xF632u: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF634u; return dd3_static_complete(rt,3u);
        }
        case 0xF634u: {
            uint8_t v=0x34u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF636u; return dd3_static_complete(rt,2u);
        }
        case 0xF636u: {
            dd3_static_push8(rt,(uint8_t)(0xF638u>>8)); dd3_static_push8(rt,(uint8_t)0xF638u);
            rt->state.cpu.pc=0xCB86u; return dd3_static_complete(rt,6u);
        }
        case 0xF639u: {
            dd3_static_push8(rt,(uint8_t)(0xF63Bu>>8)); dd3_static_push8(rt,(uint8_t)0xF63Bu);
            rt->state.cpu.pc=0xF337u; return dd3_static_complete(rt,6u);
        }
        case 0xF63Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF63Eu; return dd3_static_complete(rt,2u);
        }
        case 0xF63Eu: {
            dd3_static_write8(rt,0x06B0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF641u; return dd3_static_complete(rt,4u);
        }
        case 0xF641u: {
            rt->state.cpu.pc=0xBB42u; return dd3_static_complete(rt,3u);
        }
        case 0xF644u: {
            dd3_static_push8(rt,(uint8_t)(0xF646u>>8)); dd3_static_push8(rt,(uint8_t)0xF646u);
            rt->state.cpu.pc=0xCB86u; return dd3_static_complete(rt,6u);
        }
        case 0xF647u: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF649u; return dd3_static_complete(rt,3u);
        }
        case 0xF649u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF64Bu,0xF64Eu)) c++; rt->state.cpu.pc=0xF64Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF64Bu; return dd3_static_complete(rt,2u);
        }
        case 0xF64Bu: {
            dd3_static_push8(rt,(uint8_t)(0xF64Du>>8)); dd3_static_push8(rt,(uint8_t)0xF64Du);
            rt->state.cpu.pc=0xF3B9u; return dd3_static_complete(rt,6u);
        }
        case 0xF64Eu: {
            dd3_static_push8(rt,(uint8_t)(0xF650u>>8)); dd3_static_push8(rt,(uint8_t)0xF650u);
            rt->state.cpu.pc=0xF337u; return dd3_static_complete(rt,6u);
        }
        case 0xF651u: {
            dd3_static_push8(rt,(uint8_t)(0xF653u>>8)); dd3_static_push8(rt,(uint8_t)0xF653u);
            rt->state.cpu.pc=0xEF36u; return dd3_static_complete(rt,6u);
        }
        case 0xF654u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF656u; return dd3_static_complete(rt,2u);
        }
        case 0xF656u: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF658u; return dd3_static_complete(rt,3u);
        }
        case 0xF658u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF65Au; return dd3_static_complete(rt,2u);
        }
        case 0xF65Au: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF65Cu; return dd3_static_complete(rt,3u);
        }
        case 0xF65Cu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF65Eu; return dd3_static_complete(rt,2u);
        }
        case 0xF65Eu: {
            dd3_static_write8(rt,0xA1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF660u; return dd3_static_complete(rt,3u);
        }
        case 0xF660u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF662u; return dd3_static_complete(rt,2u);
        }
        case 0xF662u: {
            dd3_static_write8(rt,0xABu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF664u; return dd3_static_complete(rt,3u);
        }
        case 0xF664u: {
            rt->state.cpu.i=0;
            rt->state.cpu.pc=0xF665u; return dd3_static_complete(rt,2u);
        }
        case 0xF665u: {
            dd3_static_push8(rt,(uint8_t)(0xF667u>>8)); dd3_static_push8(rt,(uint8_t)0xF667u);
            rt->state.cpu.pc=0xFEBFu; return dd3_static_complete(rt,6u);
        }
        case 0xF668u: {
            uint8_t v=0x96u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF66Au; return dd3_static_complete(rt,2u);
        }
        case 0xF66Au: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF66Cu; return dd3_static_complete(rt,3u);
        }
        case 0xF66Cu: {
            dd3_static_push8(rt,(uint8_t)(0xF66Eu>>8)); dd3_static_push8(rt,(uint8_t)0xF66Eu);
            rt->state.cpu.pc=0xEF36u; return dd3_static_complete(rt,6u);
        }
        case 0xF66Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF671u; return dd3_static_complete(rt,2u);
        }
        case 0xF671u: {
            dd3_static_push8(rt,(uint8_t)(0xF673u>>8)); dd3_static_push8(rt,(uint8_t)0xF673u);
            rt->state.cpu.pc=0xF5BDu; return dd3_static_complete(rt,6u);
        }
        case 0xF674u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF676u; return dd3_static_complete(rt,2u);
        }
        case 0xF676u: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF678u; return dd3_static_complete(rt,3u);
        }
        case 0xF678u: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF67Au; return dd3_static_complete(rt,3u);
        }
        case 0xF67Au: {
            uint16_t ea=0x98u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF67Cu; return dd3_static_complete(rt,3u);
        }
        case 0xF67Cu: {
            uint8_t v=0xD0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF67Eu; return dd3_static_complete(rt,2u);
        }
        case 0xF67Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF680u,0xF68Au)) c++; rt->state.cpu.pc=0xF68Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF680u; return dd3_static_complete(rt,2u);
        }
        case 0xF680u: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF682u; return dd3_static_complete(rt,3u);
        }
        case 0xF682u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xF684u; return dd3_static_complete(rt,2u);
        }
        case 0xF684u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF686u,0xF678u)) c++; rt->state.cpu.pc=0xF678u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF686u; return dd3_static_complete(rt,2u);
        }
        case 0xF686u: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xF688u; return dd3_static_complete(rt,5u);
        }
        case 0xF688u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF68Au,0xF674u)) c++; rt->state.cpu.pc=0xF674u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF68Au; return dd3_static_complete(rt,2u);
        }
        case 0xF68Au: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF68Cu; return dd3_static_complete(rt,2u);
        }
        case 0xF68Cu: {
            dd3_static_push8(rt,(uint8_t)(0xF68Eu>>8)); dd3_static_push8(rt,(uint8_t)0xF68Eu);
            rt->state.cpu.pc=0xF5BDu; return dd3_static_complete(rt,6u);
        }
        case 0xF68Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF6A0u: {
            uint8_t v=0x02u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6A2u; return dd3_static_complete(rt,2u);
        }
        case 0xF6A2u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6A4u; return dd3_static_complete(rt,4u);
        }
        case 0xF6A4u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xF6A6u,0xF6DAu)) c++; rt->state.cpu.pc=0xF6DAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF6A6u; return dd3_static_complete(rt,2u);
        }
        case 0xF6A6u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6A8u; return dd3_static_complete(rt,4u);
        }
        case 0xF6A8u: {
            uint8_t v=0x74u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xF6AAu; return dd3_static_complete(rt,2u);
        }
        case 0xF6AAu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF6ACu,0xF6DAu)) c++; rt->state.cpu.pc=0xF6DAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF6ACu; return dd3_static_complete(rt,2u);
        }
        case 0xF6ACu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6AEu; return dd3_static_complete(rt,2u);
        }
        case 0xF6AEu: {
            uint16_t ea=0x0087u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6B1u; return dd3_static_complete(rt,4u);
        }
        case 0xF6B1u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xF6B2u; return dd3_static_complete(rt,2u);
        }
        case 0xF6B2u: {
            uint8_t v=0x89u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF6B4u; return dd3_static_complete(rt,2u);
        }
        case 0xF6B4u: {
            uint16_t ea=0x0088u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6B7u; return dd3_static_complete(rt,4u);
        }
        case 0xF6B7u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF6B9u; return dd3_static_complete(rt,2u);
        }
        case 0xF6B9u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xF6BBu,0xF6BDu)) c++; rt->state.cpu.pc=0xF6BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF6BBu; return dd3_static_complete(rt,2u);
        }
        case 0xF6BBu: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6BDu; return dd3_static_complete(rt,2u);
        }
        case 0xF6BDu: {
            dd3_static_write8(rt,(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu),rt->state.cpu.y);
            rt->state.cpu.pc=0xF6BFu; return dd3_static_complete(rt,4u);
        }
        case 0xF6BFu: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6C1u; return dd3_static_complete(rt,2u);
        }
        case 0xF6C1u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xF6C4u; return dd3_static_complete(rt,5u);
        }
        case 0xF6C4u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF6C6u; return dd3_static_complete(rt,2u);
        }
        case 0xF6C6u: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xF6C8u; return dd3_static_complete(rt,4u);
        }
        case 0xF6C8u: {
            uint8_t v=0x5Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6CAu; return dd3_static_complete(rt,2u);
        }
        case 0xF6CAu: {
            dd3_static_write8(rt,(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xF6CCu; return dd3_static_complete(rt,4u);
        }
        case 0xF6CCu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6CEu; return dd3_static_complete(rt,2u);
        }
        case 0xF6CEu: {
            dd3_static_write8(rt,(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xF6D0u; return dd3_static_complete(rt,4u);
        }
        case 0xF6D0u: {
            uint16_t ea=(uint16_t)(0xF6DBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6D3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xF6DBu,ea)?1u:0u));
        }
        case 0xF6D3u: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xF6D5u; return dd3_static_complete(rt,4u);
        }
        case 0xF6D5u: {
            uint16_t ea=(uint16_t)(0xF6DCu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6D8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xF6DCu,ea)?1u:0u));
        }
        case 0xF6D8u: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xF6DAu; return dd3_static_complete(rt,4u);
        }
        case 0xF6DAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF6DFu: {
            uint16_t ea=0x99u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6E1u; return dd3_static_complete(rt,3u);
        }
        case 0xF6E1u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF6E3u; return dd3_static_complete(rt,2u);
        }
        case 0xF6E3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF6E5u,0xF74Eu)) c++; rt->state.cpu.pc=0xF74Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF6E5u; return dd3_static_complete(rt,2u);
        }
        case 0xF6E5u: {
            uint16_t ea=0xFFF6u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6E8u; return dd3_static_complete(rt,4u);
        }
        case 0xF6E8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xF6EAu,0xF74Eu)) c++; rt->state.cpu.pc=0xF74Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF6EAu; return dd3_static_complete(rt,2u);
        }
        case 0xF6EAu: {
            uint16_t ea=0x06FFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6EDu; return dd3_static_complete(rt,4u);
        }
        case 0xF6EDu: {
            uint8_t v=0x46u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xF6EFu; return dd3_static_complete(rt,2u);
        }
        case 0xF6EFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF6F1u,0xF74Eu)) c++; rt->state.cpu.pc=0xF74Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF6F1u; return dd3_static_complete(rt,2u);
        }
        case 0xF6F1u: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6F3u; return dd3_static_complete(rt,3u);
        }
        case 0xF6F3u: {
            uint8_t v=0xCFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF6F5u; return dd3_static_complete(rt,2u);
        }
        case 0xF6F5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF6F7u,0xF74Eu)) c++; rt->state.cpu.pc=0xF74Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF6F7u; return dd3_static_complete(rt,2u);
        }
        case 0xF6F7u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF6F8u; return dd3_static_complete(rt,2u);
        }
        case 0xF6F8u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF6FAu,0xF708u)) c++; rt->state.cpu.pc=0xF708u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF6FAu; return dd3_static_complete(rt,2u);
        }
        case 0xF6FAu: {
            uint16_t ea=0x00F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF6FDu; return dd3_static_complete(rt,4u);
        }
        case 0xF6FDu: {
            uint8_t v=0x0Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xF6FFu; return dd3_static_complete(rt,2u);
        }
        case 0xF6FFu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF701u,0xF74Eu)) c++; rt->state.cpu.pc=0xF74Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF701u; return dd3_static_complete(rt,2u);
        }
        case 0xF701u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF703u; return dd3_static_complete(rt,3u);
        }
        case 0xF703u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF705u; return dd3_static_complete(rt,2u);
        }
        case 0xF705u: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF707u; return dd3_static_complete(rt,3u);
        }
        case 0xF707u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF708u: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF70Au; return dd3_static_complete(rt,3u);
        }
        case 0xF70Au: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF70Bu; return dd3_static_complete(rt,2u);
        }
        case 0xF70Bu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF70Cu; return dd3_static_complete(rt,2u);
        }
        case 0xF70Cu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF70Eu,0xF71Du)) c++; rt->state.cpu.pc=0xF71Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF70Eu; return dd3_static_complete(rt,2u);
        }
        case 0xF70Eu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF710u; return dd3_static_complete(rt,2u);
        }
        case 0xF710u: {
            dd3_static_write8(rt,0x04D3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF713u; return dd3_static_complete(rt,4u);
        }
        case 0xF713u: {
            dd3_static_write8(rt,0x04D4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF716u; return dd3_static_complete(rt,4u);
        }
        case 0xF716u: {
            dd3_static_write8(rt,0x04D5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF719u; return dd3_static_complete(rt,4u);
        }
        case 0xF719u: {
            dd3_static_write8(rt,0x04D6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF71Cu; return dd3_static_complete(rt,4u);
        }
        case 0xF71Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF71Du: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF71Eu; return dd3_static_complete(rt,2u);
        }
        case 0xF71Eu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF71Fu; return dd3_static_complete(rt,2u);
        }
        case 0xF71Fu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF720u; return dd3_static_complete(rt,2u);
        }
        case 0xF720u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF722u,0xF727u)) c++; rt->state.cpu.pc=0xF727u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF722u; return dd3_static_complete(rt,2u);
        }
        case 0xF722u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF724u; return dd3_static_complete(rt,2u);
        }
        case 0xF724u: {
            dd3_static_write8(rt,0x3Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF726u; return dd3_static_complete(rt,3u);
        }
        case 0xF726u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF727u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF728u; return dd3_static_complete(rt,2u);
        }
        case 0xF728u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF72Au,0xF72Fu)) c++; rt->state.cpu.pc=0xF72Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF72Au; return dd3_static_complete(rt,2u);
        }
        case 0xF72Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF72Cu; return dd3_static_complete(rt,2u);
        }
        case 0xF72Cu: {
            dd3_static_write8(rt,0x3Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF72Eu; return dd3_static_complete(rt,3u);
        }
        case 0xF72Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF72Fu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF730u; return dd3_static_complete(rt,2u);
        }
        case 0xF730u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF732u,0xF743u)) c++; rt->state.cpu.pc=0xF743u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF732u; return dd3_static_complete(rt,2u);
        }
        case 0xF732u: {
            uint8_t v=0x64u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF734u; return dd3_static_complete(rt,2u);
        }
        case 0xF734u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF736u; return dd3_static_complete(rt,3u);
        }
        case 0xF736u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xF738u,0xF73Bu)) c++; rt->state.cpu.pc=0xF73Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF738u; return dd3_static_complete(rt,2u);
        }
        case 0xF738u: {
            dd3_static_write8(rt,0x045Du,rt->state.cpu.y);
            rt->state.cpu.pc=0xF73Bu; return dd3_static_complete(rt,4u);
        }
        case 0xF73Bu: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF73Du; return dd3_static_complete(rt,3u);
        }
        case 0xF73Du: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xF73Fu,0xF742u)) c++; rt->state.cpu.pc=0xF742u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF73Fu; return dd3_static_complete(rt,2u);
        }
        case 0xF73Fu: {
            dd3_static_write8(rt,0x045Eu,rt->state.cpu.y);
            rt->state.cpu.pc=0xF742u; return dd3_static_complete(rt,4u);
        }
        case 0xF742u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF743u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF744u; return dd3_static_complete(rt,2u);
        }
        case 0xF744u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF746u,0xF74Eu)) c++; rt->state.cpu.pc=0xF74Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF746u; return dd3_static_complete(rt,2u);
        }
        case 0xF746u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF748u; return dd3_static_complete(rt,2u);
        }
        case 0xF748u: {
            dd3_static_write8(rt,0x045Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xF74Bu; return dd3_static_complete(rt,4u);
        }
        case 0xF74Bu: {
            dd3_static_write8(rt,0x045Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF74Eu; return dd3_static_complete(rt,4u);
        }
        case 0xF74Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF882u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF884u; return dd3_static_complete(rt,3u);
        }
        case 0xF884u: {
            uint16_t ea=(uint16_t)(0xFBF3u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF887u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xFBF3u,ea)?1u:0u));
        }
        case 0xF887u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xF888u; return dd3_static_complete(rt,2u);
        }
        case 0xF888u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xF88Au; return dd3_static_complete(rt,3u);
        }
        case 0xF88Au: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF88Bu; return dd3_static_complete(rt,2u);
        }
        case 0xF88Bu: {
            uint16_t ea=(uint16_t)(0xFC03u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF88Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xFC03u,ea)?1u:0u));
        }
        case 0xF88Eu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xF890u,0xF8C3u)) c++; rt->state.cpu.pc=0xF8C3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF890u; return dd3_static_complete(rt,2u);
        }
        case 0xF890u: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF892u; return dd3_static_complete(rt,2u);
        }
        case 0xF892u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF894u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xF894u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF896u; return dd3_static_complete(rt,2u);
        }
        case 0xF896u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xF898u; return dd3_static_complete(rt,2u);
        }
        case 0xF898u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF89Au,0xF8A5u)) c++; rt->state.cpu.pc=0xF8A5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF89Au; return dd3_static_complete(rt,2u);
        }
        case 0xF89Au: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xF89Cu; return dd3_static_complete(rt,2u);
        }
        case 0xF89Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF89Eu,0xF8A5u)) c++; rt->state.cpu.pc=0xF8A5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF89Eu; return dd3_static_complete(rt,2u);
        }
        case 0xF89Eu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xF8A0u; return dd3_static_complete(rt,2u);
        }
        case 0xF8A0u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF8A2u,0xF8A5u)) c++; rt->state.cpu.pc=0xF8A5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF8A2u; return dd3_static_complete(rt,2u);
        }
        case 0xF8A2u: {
            rt->state.cpu.pc=0xF8C3u; return dd3_static_complete(rt,3u);
        }
        case 0xF8A5u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF8A7u; return dd3_static_complete(rt,2u);
        }
        case 0xF8A7u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF8A9u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xF8A9u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8ABu; return dd3_static_complete(rt,3u);
        }
        case 0xF8ABu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF8ACu; return dd3_static_complete(rt,2u);
        }
        case 0xF8ACu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF8AEu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xF8AEu: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8B0u; return dd3_static_complete(rt,3u);
        }
        case 0xF8B0u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF8B1u; return dd3_static_complete(rt,2u);
        }
        case 0xF8B1u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF8B3u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xF8B3u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8B5u; return dd3_static_complete(rt,3u);
        }
        case 0xF8B5u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF8B6u; return dd3_static_complete(rt,2u);
        }
        case 0xF8B6u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF8B8u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xF8B8u: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8BAu; return dd3_static_complete(rt,3u);
        }
        case 0xF8BAu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF8BCu; return dd3_static_complete(rt,2u);
        }
        case 0xF8BCu: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8BEu; return dd3_static_complete(rt,3u);
        }
        case 0xF8BEu: {
            dd3_static_write8(rt,0x20u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8C0u; return dd3_static_complete(rt,3u);
        }
        case 0xF8C0u: {
            dd3_static_push8(rt,(uint8_t)(0xF8C2u>>8)); dd3_static_push8(rt,(uint8_t)0xF8C2u);
            rt->state.cpu.pc=0xF8DEu; return dd3_static_complete(rt,6u);
        }
        case 0xF8C3u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF8C5u; return dd3_static_complete(rt,3u);
        }
        case 0xF8C5u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xF8C6u; return dd3_static_complete(rt,2u);
        }
        case 0xF8C6u: {
            uint8_t v=0x05u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xF8C8u; return dd3_static_complete(rt,2u);
        }
        case 0xF8C8u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8CAu; return dd3_static_complete(rt,3u);
        }
        case 0xF8CAu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF8CCu; return dd3_static_complete(rt,3u);
        }
        case 0xF8CCu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xF8CEu; return dd3_static_complete(rt,2u);
        }
        case 0xF8CEu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8D0u; return dd3_static_complete(rt,3u);
        }
        case 0xF8D0u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xF8D2u; return dd3_static_complete(rt,5u);
        }
        case 0xF8D2u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xF8D4u; return dd3_static_complete(rt,5u);
        }
        case 0xF8D4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF8D6u,0xF882u)) c++; rt->state.cpu.pc=0xF882u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF8D6u; return dd3_static_complete(rt,2u);
        }
        case 0xF8D6u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8D7u; return dd3_static_complete(rt,4u);
        }
        case 0xF8D7u: {
            dd3_static_push8(rt,(uint8_t)(0xF8D9u>>8)); dd3_static_push8(rt,(uint8_t)0xF8D9u);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xF8DAu: {
            uint16_t ea=0x09u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF8DCu; return dd3_static_complete(rt,3u);
        }
        case 0xF8DCu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8DDu; return dd3_static_complete(rt,2u);
        }
        case 0xF8DDu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xF8DEu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF8E0u; return dd3_static_complete(rt,2u);
        }
        case 0xF8E0u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF8E2u; return dd3_static_complete(rt,3u);
        }
        case 0xF8E2u: {
            dd3_static_write8(rt,0x1Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8E4u; return dd3_static_complete(rt,3u);
        }
        case 0xF8E4u: {
            uint16_t ea=0x20u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF8E6u; return dd3_static_complete(rt,3u);
        }
        case 0xF8E6u: {
            dd3_static_write8(rt,0x1Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8E8u; return dd3_static_complete(rt,3u);
        }
        case 0xF8E8u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF8EAu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xF8EAu: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8ECu; return dd3_static_complete(rt,3u);
        }
        case 0xF8ECu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8EDu; return dd3_static_complete(rt,3u);
        }
        case 0xF8EDu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF8EEu; return dd3_static_complete(rt,2u);
        }
        case 0xF8EEu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF8F0u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xF8F0u: {
            dd3_static_write8(rt,0x20u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8F2u; return dd3_static_complete(rt,3u);
        }
        case 0xF8F2u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8F3u; return dd3_static_complete(rt,3u);
        }
        case 0xF8F3u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF8F4u; return dd3_static_complete(rt,2u);
        }
        case 0xF8F4u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF8F6u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xF8F6u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8F8u; return dd3_static_complete(rt,3u);
        }
        case 0xF8F8u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xF8F9u; return dd3_static_complete(rt,2u);
        }
        case 0xF8F9u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF8FBu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xF8FBu: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF8FDu; return dd3_static_complete(rt,3u);
        }
        case 0xF8FDu: {
            dd3_static_push8(rt,(uint8_t)(0xF8FFu>>8)); dd3_static_push8(rt,(uint8_t)0xF8FFu);
            rt->state.cpu.pc=0xFA57u; return dd3_static_complete(rt,6u);
        }
        case 0xF900u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF902u; return dd3_static_complete(rt,3u);
        }
        case 0xF902u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xF903u; return dd3_static_complete(rt,2u);
        }
        case 0xF903u: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xF905u; return dd3_static_complete(rt,3u);
        }
        case 0xF905u: {
            dd3_static_write8(rt,0x21u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF907u; return dd3_static_complete(rt,3u);
        }
        case 0xF907u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF909u; return dd3_static_complete(rt,3u);
        }
        case 0xF909u: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xF90Bu; return dd3_static_complete(rt,3u);
        }
        case 0xF90Bu: {
            dd3_static_write8(rt,0x22u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF90Du; return dd3_static_complete(rt,3u);
        }
        case 0xF90Du: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF90Fu; return dd3_static_complete(rt,3u);
        }
        case 0xF90Fu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xF910u; return dd3_static_complete(rt,2u);
        }
        case 0xF910u: {
            uint16_t ea=0x23u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xF912u; return dd3_static_complete(rt,3u);
        }
        case 0xF912u: {
            dd3_static_write8(rt,0x23u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF914u; return dd3_static_complete(rt,3u);
        }
        case 0xF914u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF916u; return dd3_static_complete(rt,3u);
        }
        case 0xF916u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xF918u; return dd3_static_complete(rt,3u);
        }
        case 0xF918u: {
            dd3_static_write8(rt,0x24u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF91Au; return dd3_static_complete(rt,3u);
        }
        case 0xF91Au: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF91Cu; return dd3_static_complete(rt,3u);
        }
        case 0xF91Cu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xF91Du; return dd3_static_complete(rt,2u);
        }
        case 0xF91Du: {
            uint16_t ea=0x1Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF91Fu; return dd3_static_complete(rt,3u);
        }
        case 0xF91Fu: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF921u; return dd3_static_complete(rt,3u);
        }
        case 0xF921u: {
            uint16_t ea=0x1Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF923u; return dd3_static_complete(rt,3u);
        }
        case 0xF923u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF925u,0xF92Cu)) c++; rt->state.cpu.pc=0xF92Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF925u; return dd3_static_complete(rt,2u);
        }
        case 0xF925u: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xF927u; return dd3_static_complete(rt,2u);
        }
        case 0xF927u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF929u,0xF934u)) c++; rt->state.cpu.pc=0xF934u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF929u; return dd3_static_complete(rt,2u);
        }
        case 0xF929u: {
            rt->state.cpu.pc=0xFA3Au; return dd3_static_complete(rt,3u);
        }
        case 0xF92Cu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF92Eu; return dd3_static_complete(rt,3u);
        }
        case 0xF92Eu: {
            dd3_static_write8(rt,0x1Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xF930u; return dd3_static_complete(rt,3u);
        }
        case 0xF930u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF932u; return dd3_static_complete(rt,3u);
        }
        case 0xF932u: {
            dd3_static_write8(rt,0x1Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF934u; return dd3_static_complete(rt,3u);
        }
        case 0xF934u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF936u; return dd3_static_complete(rt,3u);
        }
        case 0xF936u: {
            dd3_static_write8(rt,0x25u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF938u; return dd3_static_complete(rt,3u);
        }
        case 0xF938u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xF939u; return dd3_static_complete(rt,2u);
        }
        case 0xF939u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF93Bu; return dd3_static_complete(rt,3u);
        }
        case 0xF93Bu: {
            uint16_t ea=0x20u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF93Du; return dd3_static_complete(rt,3u);
        }
        case 0xF93Du: {
            dd3_static_write8(rt,0x26u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF93Fu; return dd3_static_complete(rt,3u);
        }
        case 0xF93Fu: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF941u; return dd3_static_complete(rt,3u);
        }
        case 0xF941u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF943u,0xF946u)) c++; rt->state.cpu.pc=0xF946u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF943u; return dd3_static_complete(rt,2u);
        }
        case 0xF943u: {
            rt->state.cpu.pc=0xFA3Au; return dd3_static_complete(rt,3u);
        }
        case 0xF946u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF948u,0xF951u)) c++; rt->state.cpu.pc=0xF951u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF948u; return dd3_static_complete(rt,2u);
        }
        case 0xF948u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF94Au; return dd3_static_complete(rt,3u);
        }
        case 0xF94Au: {
            dd3_static_write8(rt,0x25u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF94Cu; return dd3_static_complete(rt,3u);
        }
        case 0xF94Cu: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF94Eu; return dd3_static_complete(rt,3u);
        }
        case 0xF94Eu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xF94Fu; return dd3_static_complete(rt,2u);
        }
        case 0xF94Fu: {
            dd3_static_write8(rt,0x26u,rt->state.cpu.x);
            rt->state.cpu.pc=0xF951u; return dd3_static_complete(rt,3u);
        }
        case 0xF951u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF953u; return dd3_static_complete(rt,3u);
        }
        case 0xF953u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xF954u; return dd3_static_complete(rt,2u);
        }
        case 0xF954u: {
            uint16_t ea=0x23u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF956u; return dd3_static_complete(rt,3u);
        }
        case 0xF956u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF958u; return dd3_static_complete(rt,3u);
        }
        case 0xF958u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF95Au; return dd3_static_complete(rt,3u);
        }
        case 0xF95Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF95Cu,0xF963u)) c++; rt->state.cpu.pc=0xF963u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF95Cu; return dd3_static_complete(rt,2u);
        }
        case 0xF95Cu: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xF95Eu; return dd3_static_complete(rt,2u);
        }
        case 0xF95Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF960u,0xF96Bu)) c++; rt->state.cpu.pc=0xF96Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF960u; return dd3_static_complete(rt,2u);
        }
        case 0xF960u: {
            rt->state.cpu.pc=0xFA3Au; return dd3_static_complete(rt,3u);
        }
        case 0xF963u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF965u; return dd3_static_complete(rt,3u);
        }
        case 0xF965u: {
            dd3_static_write8(rt,0x23u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF967u; return dd3_static_complete(rt,3u);
        }
        case 0xF967u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF969u; return dd3_static_complete(rt,3u);
        }
        case 0xF969u: {
            dd3_static_write8(rt,0x24u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF96Bu; return dd3_static_complete(rt,3u);
        }
        case 0xF96Bu: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF96Du; return dd3_static_complete(rt,3u);
        }
        case 0xF96Du: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xF96Eu; return dd3_static_complete(rt,2u);
        }
        case 0xF96Eu: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF970u; return dd3_static_complete(rt,3u);
        }
        case 0xF970u: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF972u; return dd3_static_complete(rt,3u);
        }
        case 0xF972u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF974u; return dd3_static_complete(rt,3u);
        }
        case 0xF974u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF976u,0xF979u)) c++; rt->state.cpu.pc=0xF979u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF976u; return dd3_static_complete(rt,2u);
        }
        case 0xF976u: {
            rt->state.cpu.pc=0xFA3Au; return dd3_static_complete(rt,3u);
        }
        case 0xF979u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF97Bu,0xF988u)) c++; rt->state.cpu.pc=0xF988u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF97Bu; return dd3_static_complete(rt,2u);
        }
        case 0xF97Bu: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF97Du; return dd3_static_complete(rt,3u);
        }
        case 0xF97Du: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xF97Eu; return dd3_static_complete(rt,2u);
        }
        case 0xF97Eu: {
            uint8_t v=0xF0u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xF980u; return dd3_static_complete(rt,2u);
        }
        case 0xF980u: {
            dd3_static_write8(rt,0x21u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF982u; return dd3_static_complete(rt,3u);
        }
        case 0xF982u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF984u; return dd3_static_complete(rt,3u);
        }
        case 0xF984u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xF986u; return dd3_static_complete(rt,2u);
        }
        case 0xF986u: {
            dd3_static_write8(rt,0x22u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF988u; return dd3_static_complete(rt,3u);
        }
        case 0xF988u: {
            uint16_t ea=0x1Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF98Au; return dd3_static_complete(rt,3u);
        }
        case 0xF98Au: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xF98Bu; return dd3_static_complete(rt,2u);
        }
        case 0xF98Bu: {
            uint16_t ea=0x25u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xF98Du; return dd3_static_complete(rt,3u);
        }
        case 0xF98Du: {
            dd3_static_write8(rt,0x1Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xF98Fu; return dd3_static_complete(rt,3u);
        }
        case 0xF98Fu: {
            uint16_t ea=0x1Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF991u; return dd3_static_complete(rt,3u);
        }
        case 0xF991u: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xF993u; return dd3_static_complete(rt,3u);
        }
        case 0xF993u: {
            dd3_static_write8(rt,0x1Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xF995u; return dd3_static_complete(rt,3u);
        }
        case 0xF995u: {
            uint16_t ea=0x1Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xF997u; return dd3_static_complete(rt,5u);
        }
        case 0xF997u: {
            uint16_t ea=0x1Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=v&1u; v=(uint8_t)((v>>1)|(c<<7)); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xF999u; return dd3_static_complete(rt,5u);
        }
        case 0xF999u: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF99Bu; return dd3_static_complete(rt,3u);
        }
        case 0xF99Bu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xF99Cu; return dd3_static_complete(rt,2u);
        }
        case 0xF99Cu: {
            uint16_t ea=0x23u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xF99Eu; return dd3_static_complete(rt,3u);
        }
        case 0xF99Eu: {
            dd3_static_write8(rt,0x21u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF9A0u; return dd3_static_complete(rt,3u);
        }
        case 0xF9A0u: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF9A2u; return dd3_static_complete(rt,3u);
        }
        case 0xF9A2u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xF9A4u; return dd3_static_complete(rt,3u);
        }
        case 0xF9A4u: {
            dd3_static_write8(rt,0x22u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF9A6u; return dd3_static_complete(rt,3u);
        }
        case 0xF9A6u: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xF9A8u; return dd3_static_complete(rt,5u);
        }
        case 0xF9A8u: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=v&1u; v=(uint8_t)((v>>1)|(c<<7)); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xF9AAu; return dd3_static_complete(rt,5u);
        }
        case 0xF9AAu: {
            uint16_t ea=0x10u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF9ACu; return dd3_static_complete(rt,3u);
        }
        case 0xF9ACu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xF9ADu; return dd3_static_complete(rt,2u);
        }
        case 0xF9ADu: {
            uint16_t ea=0x1Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF9AFu; return dd3_static_complete(rt,3u);
        }
        case 0xF9AFu: {
            dd3_static_write8(rt,0x25u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF9B1u; return dd3_static_complete(rt,3u);
        }
        case 0xF9B1u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF9B3u; return dd3_static_complete(rt,3u);
        }
        case 0xF9B3u: {
            uint16_t ea=0x1Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF9B5u; return dd3_static_complete(rt,3u);
        }
        case 0xF9B5u: {
            dd3_static_write8(rt,0x26u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF9B7u; return dd3_static_complete(rt,3u);
        }
        case 0xF9B7u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF9B9u,0xF9C6u)) c++; rt->state.cpu.pc=0xF9C6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF9B9u; return dd3_static_complete(rt,2u);
        }
        case 0xF9B9u: {
            uint16_t ea=0x1Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF9BBu; return dd3_static_complete(rt,3u);
        }
        case 0xF9BBu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xF9BCu; return dd3_static_complete(rt,2u);
        }
        case 0xF9BCu: {
            uint16_t ea=0x10u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF9BEu; return dd3_static_complete(rt,3u);
        }
        case 0xF9BEu: {
            dd3_static_write8(rt,0x25u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF9C0u; return dd3_static_complete(rt,3u);
        }
        case 0xF9C0u: {
            uint16_t ea=0x1Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF9C2u; return dd3_static_complete(rt,3u);
        }
        case 0xF9C2u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF9C4u; return dd3_static_complete(rt,3u);
        }
        case 0xF9C4u: {
            dd3_static_write8(rt,0x26u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF9C6u; return dd3_static_complete(rt,3u);
        }
        case 0xF9C6u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF9C8u,0xFA3Au)) c++; rt->state.cpu.pc=0xFA3Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF9C8u; return dd3_static_complete(rt,2u);
        }
        case 0xF9C8u: {
            uint16_t ea=0x25u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF9CAu; return dd3_static_complete(rt,3u);
        }
        case 0xF9CAu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xF9CBu; return dd3_static_complete(rt,2u);
        }
        case 0xF9CBu: {
            uint8_t v=0x60u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF9CDu; return dd3_static_complete(rt,2u);
        }
        case 0xF9CDu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF9CFu,0xFA3Au)) c++; rt->state.cpu.pc=0xFA3Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF9CFu; return dd3_static_complete(rt,2u);
        }
        case 0xF9CFu: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF9D1u; return dd3_static_complete(rt,3u);
        }
        case 0xF9D1u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xF9D2u; return dd3_static_complete(rt,2u);
        }
        case 0xF9D2u: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF9D4u; return dd3_static_complete(rt,3u);
        }
        case 0xF9D4u: {
            dd3_static_write8(rt,0x27u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF9D6u; return dd3_static_complete(rt,3u);
        }
        case 0xF9D6u: {
            uint16_t ea=0x13u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF9D8u; return dd3_static_complete(rt,3u);
        }
        case 0xF9D8u: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF9DAu; return dd3_static_complete(rt,3u);
        }
        case 0xF9DAu: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF9DCu; return dd3_static_complete(rt,3u);
        }
        case 0xF9DCu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF9DEu,0xF9EBu)) c++; rt->state.cpu.pc=0xF9EBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF9DEu; return dd3_static_complete(rt,2u);
        }
        case 0xF9DEu: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF9E0u; return dd3_static_complete(rt,3u);
        }
        case 0xF9E0u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xF9E1u; return dd3_static_complete(rt,2u);
        }
        case 0xF9E1u: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF9E3u; return dd3_static_complete(rt,3u);
        }
        case 0xF9E3u: {
            dd3_static_write8(rt,0x27u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF9E5u; return dd3_static_complete(rt,3u);
        }
        case 0xF9E5u: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF9E7u; return dd3_static_complete(rt,3u);
        }
        case 0xF9E7u: {
            uint16_t ea=0x13u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF9E9u; return dd3_static_complete(rt,3u);
        }
        case 0xF9E9u: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0xF9EBu; return dd3_static_complete(rt,3u);
        }
        case 0xF9EBu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xF9EDu,0xFA3Au)) c++; rt->state.cpu.pc=0xFA3Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF9EDu; return dd3_static_complete(rt,2u);
        }
        case 0xF9EDu: {
            uint16_t ea=0x27u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF9EFu; return dd3_static_complete(rt,3u);
        }
        case 0xF9EFu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xF9F0u; return dd3_static_complete(rt,2u);
        }
        case 0xF9F0u: {
            uint8_t v=0x40u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF9F2u; return dd3_static_complete(rt,2u);
        }
        case 0xF9F2u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xF9F4u,0xFA3Au)) c++; rt->state.cpu.pc=0xFA3Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xF9F4u; return dd3_static_complete(rt,2u);
        }
        case 0xF9F4u: {
            dd3_static_push8(rt,(uint8_t)(0xF9F6u>>8)); dd3_static_push8(rt,(uint8_t)0xF9F6u);
            rt->state.cpu.pc=0xCE91u; return dd3_static_complete(rt,6u);
        }
        case 0xF9F7u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF9F9u; return dd3_static_complete(rt,3u);
        }
        case 0xF9F9u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xF9FAu; return dd3_static_complete(rt,2u);
        }
        case 0xF9FAu: {
            uint16_t ea=0x25u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xF9FCu; return dd3_static_complete(rt,3u);
        }
        case 0xF9FCu: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xF9FEu; return dd3_static_complete(rt,3u);
        }
        case 0xF9FEu: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xFA00u; return dd3_static_complete(rt,3u);
        }
        case 0xFA00u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xFA02u,0xFA3Au)) c++; rt->state.cpu.pc=0xFA3Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFA02u; return dd3_static_complete(rt,2u);
        }
        case 0xFA02u: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA04u; return dd3_static_complete(rt,3u);
        }
        case 0xFA04u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xFA06u; return dd3_static_complete(rt,3u);
        }
        case 0xFA06u: {
            dd3_static_write8(rt,0x21u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA08u; return dd3_static_complete(rt,3u);
        }
        case 0xFA08u: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA0Au; return dd3_static_complete(rt,3u);
        }
        case 0xFA0Au: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xFA0Cu; return dd3_static_complete(rt,3u);
        }
        case 0xFA0Cu: {
            dd3_static_write8(rt,0x22u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA0Eu; return dd3_static_complete(rt,3u);
        }
        case 0xFA0Eu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA10u; return dd3_static_complete(rt,3u);
        }
        case 0xFA10u: {
            dd3_static_write8(rt,0x09u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA12u; return dd3_static_complete(rt,3u);
        }
        case 0xFA12u: {
            uint16_t ea=0x1Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA14u; return dd3_static_complete(rt,3u);
        }
        case 0xFA14u: {
            dd3_static_write8(rt,0x0Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA16u; return dd3_static_complete(rt,3u);
        }
        case 0xFA16u: {
            uint16_t ea=0x1Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA18u; return dd3_static_complete(rt,3u);
        }
        case 0xFA18u: {
            dd3_static_write8(rt,0x0Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA1Au; return dd3_static_complete(rt,3u);
        }
        case 0xFA1Au: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA1Cu; return dd3_static_complete(rt,3u);
        }
        case 0xFA1Cu: {
            dd3_static_write8(rt,0x0Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA1Eu; return dd3_static_complete(rt,3u);
        }
        case 0xFA1Eu: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA20u; return dd3_static_complete(rt,3u);
        }
        case 0xFA20u: {
            dd3_static_write8(rt,0x0Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA22u; return dd3_static_complete(rt,3u);
        }
        case 0xFA22u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA24u; return dd3_static_complete(rt,3u);
        }
        case 0xFA24u: {
            dd3_static_write8(rt,0x0Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA26u; return dd3_static_complete(rt,3u);
        }
        case 0xFA26u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA28u; return dd3_static_complete(rt,3u);
        }
        case 0xFA28u: {
            dd3_static_write8(rt,0x0Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA2Au; return dd3_static_complete(rt,3u);
        }
        case 0xFA2Au: {
            uint16_t ea=0x25u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA2Cu; return dd3_static_complete(rt,3u);
        }
        case 0xFA2Cu: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA2Eu; return dd3_static_complete(rt,3u);
        }
        case 0xFA2Eu: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA30u; return dd3_static_complete(rt,3u);
        }
        case 0xFA30u: {
            dd3_static_write8(rt,0x05u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA32u; return dd3_static_complete(rt,3u);
        }
        case 0xFA32u: {
            uint16_t ea=0x27u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA34u; return dd3_static_complete(rt,3u);
        }
        case 0xFA34u: {
            dd3_static_write8(rt,0x06u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA36u; return dd3_static_complete(rt,3u);
        }
        case 0xFA36u: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA38u; return dd3_static_complete(rt,3u);
        }
        case 0xFA38u: {
            dd3_static_write8(rt,0x07u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA3Au; return dd3_static_complete(rt,3u);
        }
        case 0xFA3Au: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA3Bu; return dd3_static_complete(rt,4u);
        }
        case 0xFA3Bu: {
            dd3_static_write8(rt,0x20u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA3Du; return dd3_static_complete(rt,3u);
        }
        case 0xFA3Du: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA3Eu; return dd3_static_complete(rt,4u);
        }
        case 0xFA3Eu: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA40u; return dd3_static_complete(rt,3u);
        }
        case 0xFA40u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA42u; return dd3_static_complete(rt,2u);
        }
        case 0xFA42u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA44u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xFA44u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xFA46u,0xFA47u)) c++; rt->state.cpu.pc=0xFA47u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFA46u; return dd3_static_complete(rt,2u);
        }
        case 0xFA46u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFA47u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA49u; return dd3_static_complete(rt,3u);
        }
        case 0xFA49u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xFA4Au; return dd3_static_complete(rt,2u);
        }
        case 0xFA4Au: {
            uint8_t v=0x04u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xFA4Cu; return dd3_static_complete(rt,2u);
        }
        case 0xFA4Cu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA4Eu; return dd3_static_complete(rt,3u);
        }
        case 0xFA4Eu: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA50u; return dd3_static_complete(rt,3u);
        }
        case 0xFA50u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xFA52u; return dd3_static_complete(rt,2u);
        }
        case 0xFA52u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA54u; return dd3_static_complete(rt,3u);
        }
        case 0xFA54u: {
            rt->state.cpu.pc=0xF8DEu; return dd3_static_complete(rt,3u);
        }
        case 0xFA57u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA59u; return dd3_static_complete(rt,2u);
        }
        case 0xFA59u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA5Bu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Du),ea)?1u:0u));
        }
        case 0xFA5Bu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xFA5Du,0xFA7Cu)) c++; rt->state.cpu.pc=0xFA7Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFA5Du; return dd3_static_complete(rt,2u);
        }
        case 0xFA5Du: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA5Fu; return dd3_static_complete(rt,3u);
        }
        case 0xFA5Fu: {
            uint8_t v=0x06u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA61u; return dd3_static_complete(rt,2u);
        }
        case 0xFA61u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA63u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Du),ea)?1u:0u));
        }
        case 0xFA63u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xFA65u,0xFA67u)) c++; rt->state.cpu.pc=0xFA67u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFA65u; return dd3_static_complete(rt,2u);
        }
        case 0xFA65u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA67u; return dd3_static_complete(rt,2u);
        }
        case 0xFA67u: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xFA69u; return dd3_static_complete(rt,5u);
        }
        case 0xFA69u: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xFA6Bu; return dd3_static_complete(rt,5u);
        }
        case 0xFA6Bu: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA6Du; return dd3_static_complete(rt,3u);
        }
        case 0xFA6Du: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA6Eu; return dd3_static_complete(rt,2u);
        }
        case 0xFA6Eu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xFA6Fu; return dd3_static_complete(rt,2u);
        }
        case 0xFA6Fu: {
            uint16_t ea=(uint16_t)(0xFA7Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA72u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xFA7Du,ea)?1u:0u));
        }
        case 0xFA72u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA74u; return dd3_static_complete(rt,3u);
        }
        case 0xFA74u: {
            uint16_t ea=(uint16_t)(0xFA7Eu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFA77u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xFA7Eu,ea)?1u:0u));
        }
        case 0xFA77u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFA79u; return dd3_static_complete(rt,3u);
        }
        case 0xFA79u: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x002Fu); return dd3_static_complete(rt,5u);
        }
        case 0xFA7Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFBD4u: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFBD6u; return dd3_static_complete(rt,2u);
        }
        case 0xFBD6u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xFBD7u; return dd3_static_complete(rt,2u);
        }
        case 0xFBD7u: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xFBD9u; return dd3_static_complete(rt,3u);
        }
        case 0xFBD9u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xFBDBu; return dd3_static_complete(rt,3u);
        }
        case 0xFBDBu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFBDDu; return dd3_static_complete(rt,2u);
        }
        case 0xFBDDu: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xFBDFu; return dd3_static_complete(rt,3u);
        }
        case 0xFBDFu: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xFBE1u; return dd3_static_complete(rt,3u);
        }
        case 0xFBE1u: {
            rt->state.cpu.pc=0xFA57u; return dd3_static_complete(rt,3u);
        }
        case 0xFC30u: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFC33u; return dd3_static_complete(rt,4u);
        }
        case 0xFC33u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC34u; return dd3_static_complete(rt,3u);
        }
        case 0xFC34u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFC36u; return dd3_static_complete(rt,2u);
        }
        case 0xFC36u: {
            dd3_static_push8(rt,(uint8_t)(0xFC38u>>8)); dd3_static_push8(rt,(uint8_t)0xFC38u);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xFC39u: {
            dd3_static_push8(rt,(uint8_t)(0xFC3Bu>>8)); dd3_static_push8(rt,(uint8_t)0xFC3Bu);
            rt->state.cpu.pc=0x8009u; return dd3_static_complete(rt,6u);
        }
        case 0xFC3Cu: {
            rt->state.cpu.pc=0xFC4Eu; return dd3_static_complete(rt,3u);
        }
        case 0xFC3Fu: {
            dd3_static_write8(rt,0x07FFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC42u; return dd3_static_complete(rt,4u);
        }
        case 0xFC42u: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFC45u; return dd3_static_complete(rt,4u);
        }
        case 0xFC45u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC46u; return dd3_static_complete(rt,3u);
        }
        case 0xFC46u: {
            uint8_t v=0x05u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFC48u; return dd3_static_complete(rt,2u);
        }
        case 0xFC48u: {
            dd3_static_push8(rt,(uint8_t)(0xFC4Au>>8)); dd3_static_push8(rt,(uint8_t)0xFC4Au);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xFC4Bu: {
            dd3_static_push8(rt,(uint8_t)(0xFC4Du>>8)); dd3_static_push8(rt,(uint8_t)0xFC4Du);
            rt->state.cpu.pc=0x8000u; return dd3_static_complete(rt,6u);
        }
        case 0xFC4Eu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC4Fu; return dd3_static_complete(rt,4u);
        }
        case 0xFC4Fu: {
            dd3_static_push8(rt,(uint8_t)(0xFC51u>>8)); dd3_static_push8(rt,(uint8_t)0xFC51u);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xFC52u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFC53u: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFC56u; return dd3_static_complete(rt,4u);
        }
        case 0xFC56u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC57u; return dd3_static_complete(rt,3u);
        }
        case 0xFC57u: {
            uint8_t v=0x05u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFC59u; return dd3_static_complete(rt,2u);
        }
        case 0xFC59u: {
            dd3_static_push8(rt,(uint8_t)(0xFC5Bu>>8)); dd3_static_push8(rt,(uint8_t)0xFC5Bu);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xFC5Cu: {
            dd3_static_push8(rt,(uint8_t)(0xFC5Eu>>8)); dd3_static_push8(rt,(uint8_t)0xFC5Eu);
            rt->state.cpu.pc=0x8003u; return dd3_static_complete(rt,6u);
        }
        case 0xFC5Fu: {
            rt->state.cpu.pc=0xFC4Eu; return dd3_static_complete(rt,3u);
        }
        case 0xFC62u: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFC65u; return dd3_static_complete(rt,4u);
        }
        case 0xFC65u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC66u; return dd3_static_complete(rt,3u);
        }
        case 0xFC66u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFC68u; return dd3_static_complete(rt,2u);
        }
        case 0xFC68u: {
            dd3_static_push8(rt,(uint8_t)(0xFC6Au>>8)); dd3_static_push8(rt,(uint8_t)0xFC6Au);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xFC6Bu: {
            dd3_static_push8(rt,(uint8_t)(0xFC6Du>>8)); dd3_static_push8(rt,(uint8_t)0xFC6Du);
            rt->state.cpu.pc=0x8000u; return dd3_static_complete(rt,6u);
        }
        case 0xFC6Eu: {
            rt->state.cpu.pc=0xFC4Eu; return dd3_static_complete(rt,3u);
        }
        case 0xFC71u: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFC74u; return dd3_static_complete(rt,4u);
        }
        case 0xFC74u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC75u; return dd3_static_complete(rt,3u);
        }
        case 0xFC75u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFC77u; return dd3_static_complete(rt,2u);
        }
        case 0xFC77u: {
            dd3_static_push8(rt,(uint8_t)(0xFC79u>>8)); dd3_static_push8(rt,(uint8_t)0xFC79u);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xFC7Au: {
            dd3_static_push8(rt,(uint8_t)(0xFC7Cu>>8)); dd3_static_push8(rt,(uint8_t)0xFC7Cu);
            rt->state.cpu.pc=0x8003u; return dd3_static_complete(rt,6u);
        }
        case 0xFC7Du: {
            rt->state.cpu.pc=0xFC4Eu; return dd3_static_complete(rt,3u);
        }
        case 0xFC80u: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFC83u; return dd3_static_complete(rt,4u);
        }
        case 0xFC83u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC84u; return dd3_static_complete(rt,3u);
        }
        case 0xFC84u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC85u; return dd3_static_complete(rt,2u);
        }
        case 0xFC85u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC86u; return dd3_static_complete(rt,3u);
        }
        case 0xFC86u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFC88u; return dd3_static_complete(rt,2u);
        }
        case 0xFC88u: {
            dd3_static_push8(rt,(uint8_t)(0xFC8Au>>8)); dd3_static_push8(rt,(uint8_t)0xFC8Au);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xFC8Bu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC8Cu; return dd3_static_complete(rt,4u);
        }
        case 0xFC8Cu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFC8Du; return dd3_static_complete(rt,2u);
        }
        case 0xFC8Du: {
            dd3_static_push8(rt,(uint8_t)(0xFC8Fu>>8)); dd3_static_push8(rt,(uint8_t)0xFC8Fu);
            rt->state.cpu.pc=0x8006u; return dd3_static_complete(rt,6u);
        }
        case 0xFC90u: {
            rt->state.cpu.pc=0xFC4Eu; return dd3_static_complete(rt,3u);
        }
        case 0xFC93u: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFC96u; return dd3_static_complete(rt,4u);
        }
        case 0xFC96u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC97u; return dd3_static_complete(rt,3u);
        }
        case 0xFC97u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFC99u; return dd3_static_complete(rt,2u);
        }
        case 0xFC99u: {
            dd3_static_push8(rt,(uint8_t)(0xFC9Bu>>8)); dd3_static_push8(rt,(uint8_t)0xFC9Bu);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xFC9Cu: {
            dd3_static_push8(rt,(uint8_t)(0xFC9Eu>>8)); dd3_static_push8(rt,(uint8_t)0xFC9Eu);
            rt->state.cpu.pc=0x8003u; return dd3_static_complete(rt,6u);
        }
        case 0xFC9Fu: {
            rt->state.cpu.pc=0xFC4Eu; return dd3_static_complete(rt,3u);
        }
        case 0xFCA2u: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFCA5u; return dd3_static_complete(rt,4u);
        }
        case 0xFCA5u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFCA6u; return dd3_static_complete(rt,3u);
        }
        case 0xFCA6u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFCA8u; return dd3_static_complete(rt,2u);
        }
        case 0xFCA8u: {
            dd3_static_push8(rt,(uint8_t)(0xFCAAu>>8)); dd3_static_push8(rt,(uint8_t)0xFCAAu);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xFCABu: {
            dd3_static_push8(rt,(uint8_t)(0xFCADu>>8)); dd3_static_push8(rt,(uint8_t)0xFCADu);
            rt->state.cpu.pc=0x8000u; return dd3_static_complete(rt,6u);
        }
        case 0xFCAEu: {
            rt->state.cpu.pc=0xFC4Eu; return dd3_static_complete(rt,3u);
        }
        case 0xFCB1u: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFCB4u; return dd3_static_complete(rt,4u);
        }
        case 0xFCB4u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFCB5u; return dd3_static_complete(rt,3u);
        }
        case 0xFCB5u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFCB7u; return dd3_static_complete(rt,2u);
        }
        case 0xFCB7u: {
            dd3_static_push8(rt,(uint8_t)(0xFCB9u>>8)); dd3_static_push8(rt,(uint8_t)0xFCB9u);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xFCBAu: {
            dd3_static_push8(rt,(uint8_t)(0xFCBCu>>8)); dd3_static_push8(rt,(uint8_t)0xFCBCu);
            rt->state.cpu.pc=0x800Cu; return dd3_static_complete(rt,6u);
        }
        case 0xFCBDu: {
            rt->state.cpu.pc=0xFC4Eu; return dd3_static_complete(rt,3u);
        }
        case 0xFCE0u: {
            rt->state.cpu.pc=0xFE50u; return dd3_static_complete(rt,3u);
        }
        case 0xFCE3u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFCE4u; return dd3_static_complete(rt,3u);
        }
        case 0xFCE4u: {
            uint16_t ea=0xA3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFCE6u; return dd3_static_complete(rt,3u);
        }
        case 0xFCE6u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFCE7u; return dd3_static_complete(rt,3u);
        }
        case 0xFCE7u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFCE9u; return dd3_static_complete(rt,2u);
        }
        case 0xFCE9u: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFCEBu; return dd3_static_complete(rt,3u);
        }
        case 0xFCEBu: {
            uint16_t ea=0xA0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFCEDu; return dd3_static_complete(rt,3u);
        }
        case 0xFCEDu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFCEFu; return dd3_static_complete(rt,2u);
        }
        case 0xFCEFu: {
            dd3_static_write8(rt,0xA0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFCF1u; return dd3_static_complete(rt,3u);
        }
        case 0xFCF1u: {
            dd3_static_write8(rt,0x2000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFCF4u; return dd3_static_complete(rt,4u);
        }
        case 0xFCF4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFCF6u,0xFCF4u)) c++; rt->state.cpu.pc=0xFCF4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFCF6u; return dd3_static_complete(rt,2u);
        }
        case 0xFCF6u: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFCF8u; return dd3_static_complete(rt,3u);
        }
        case 0xFCF8u: {
            uint8_t v=0xE7u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFCFAu; return dd3_static_complete(rt,2u);
        }
        case 0xFCFAu: {
            dd3_static_write8(rt,0x9Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xFCFCu; return dd3_static_complete(rt,3u);
        }
        case 0xFCFCu: {
            dd3_static_write8(rt,0x2001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFCFFu; return dd3_static_complete(rt,4u);
        }
        case 0xFCFFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFD00u: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD02u; return dd3_static_complete(rt,3u);
        }
        case 0xFD02u: {
            uint8_t v=0x18u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD04u; return dd3_static_complete(rt,2u);
        }
        case 0xFD04u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFD06u,0xFCFAu)) c++; rt->state.cpu.pc=0xFCFAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFD06u; return dd3_static_complete(rt,2u);
        }
        case 0xFD06u: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD08u; return dd3_static_complete(rt,3u);
        }
        case 0xFD08u: {
            uint8_t v=0xEFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD0Au; return dd3_static_complete(rt,2u);
        }
        case 0xFD0Au: {
            rt->state.cpu.pc=0xFCFAu; return dd3_static_complete(rt,3u);
        }
        case 0xFD0Du: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD0Fu; return dd3_static_complete(rt,3u);
        }
        case 0xFD0Fu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD11u; return dd3_static_complete(rt,2u);
        }
        case 0xFD11u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFD13u,0xFCFAu)) c++; rt->state.cpu.pc=0xFCFAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFD13u; return dd3_static_complete(rt,2u);
        }
        case 0xFD13u: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD15u; return dd3_static_complete(rt,3u);
        }
        case 0xFD15u: {
            uint8_t v=0xF7u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD17u; return dd3_static_complete(rt,2u);
        }
        case 0xFD17u: {
            rt->state.cpu.pc=0xFCFAu; return dd3_static_complete(rt,3u);
        }
        case 0xFD1Au: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD1Cu; return dd3_static_complete(rt,3u);
        }
        case 0xFD1Cu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD1Eu; return dd3_static_complete(rt,2u);
        }
        case 0xFD1Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFD20u,0xFCFAu)) c++; rt->state.cpu.pc=0xFCFAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFD20u; return dd3_static_complete(rt,2u);
        }
        case 0xFD20u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD23u; return dd3_static_complete(rt,4u);
        }
        case 0xFD23u: {
            uint16_t ea=0x9Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD25u; return dd3_static_complete(rt,3u);
        }
        case 0xFD25u: {
            dd3_static_write8(rt,0x2005u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD28u; return dd3_static_complete(rt,4u);
        }
        case 0xFD28u: {
            uint16_t ea=0x9Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD2Au; return dd3_static_complete(rt,3u);
        }
        case 0xFD2Au: {
            dd3_static_write8(rt,0x2005u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD2Du; return dd3_static_complete(rt,4u);
        }
        case 0xFD2Du: {
            uint16_t ea=0xA0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD2Fu; return dd3_static_complete(rt,3u);
        }
        case 0xFD2Fu: {
            dd3_static_write8(rt,0x2000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD32u; return dd3_static_complete(rt,4u);
        }
        case 0xFD32u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFD33u: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD35u; return dd3_static_complete(rt,3u);
        }
        case 0xFD35u: {
            dd3_static_write8(rt,0x05u,rt->state.cpu.x);
            rt->state.cpu.pc=0xFD37u; return dd3_static_complete(rt,3u);
        }
        case 0xFD37u: {
            dd3_static_write8(rt,0x06u,rt->state.cpu.y);
            rt->state.cpu.pc=0xFD39u; return dd3_static_complete(rt,3u);
        }
        case 0xFD39u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD3Cu; return dd3_static_complete(rt,4u);
        }
        case 0xFD3Cu: {
            uint16_t ea=0xA0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD3Eu; return dd3_static_complete(rt,3u);
        }
        case 0xFD3Eu: {
            uint8_t v=0xFBu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD40u; return dd3_static_complete(rt,2u);
        }
        case 0xFD40u: {
            dd3_static_write8(rt,0x2000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD43u; return dd3_static_complete(rt,4u);
        }
        case 0xFD43u: {
            dd3_static_write8(rt,0xA0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD45u; return dd3_static_complete(rt,3u);
        }
        case 0xFD45u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD47u; return dd3_static_complete(rt,3u);
        }
        case 0xFD47u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD4Au; return dd3_static_complete(rt,4u);
        }
        case 0xFD4Au: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD4Cu; return dd3_static_complete(rt,2u);
        }
        case 0xFD4Cu: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.y);
            rt->state.cpu.pc=0xFD4Fu; return dd3_static_complete(rt,4u);
        }
        case 0xFD4Fu: {
            uint8_t v=0x04u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD51u; return dd3_static_complete(rt,2u);
        }
        case 0xFD51u: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xFD53u; return dd3_static_complete(rt,2u);
        }
        case 0xFD53u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xFD55u,0xFD57u)) c++; rt->state.cpu.pc=0xFD57u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFD55u; return dd3_static_complete(rt,2u);
        }
        case 0xFD55u: {
            uint16_t ea=0x06u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD57u; return dd3_static_complete(rt,3u);
        }
        case 0xFD57u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD59u; return dd3_static_complete(rt,2u);
        }
        case 0xFD59u: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD5Bu; return dd3_static_complete(rt,3u);
        }
        case 0xFD5Bu: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD5Eu; return dd3_static_complete(rt,4u);
        }
        case 0xFD5Eu: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xFD5Fu; return dd3_static_complete(rt,2u);
        }
        case 0xFD5Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFD61u,0xFD5Bu)) c++; rt->state.cpu.pc=0xFD5Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFD61u; return dd3_static_complete(rt,2u);
        }
        case 0xFD61u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFD62u; return dd3_static_complete(rt,2u);
        }
        case 0xFD62u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFD64u,0xFD5Bu)) c++; rt->state.cpu.pc=0xFD5Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFD64u; return dd3_static_complete(rt,2u);
        }
        case 0xFD64u: {
            uint16_t ea=0x06u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD66u; return dd3_static_complete(rt,3u);
        }
        case 0xFD66u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD68u; return dd3_static_complete(rt,3u);
        }
        case 0xFD68u: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xFD6Au; return dd3_static_complete(rt,2u);
        }
        case 0xFD6Au: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xFD6Cu,0xFD7Eu)) c++; rt->state.cpu.pc=0xFD7Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFD6Cu; return dd3_static_complete(rt,2u);
        }
        case 0xFD6Cu: {
            uint8_t v=0x02u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xFD6Eu; return dd3_static_complete(rt,2u);
        }
        case 0xFD6Eu: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD71u; return dd3_static_complete(rt,4u);
        }
        case 0xFD71u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD73u; return dd3_static_complete(rt,2u);
        }
        case 0xFD73u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD76u; return dd3_static_complete(rt,4u);
        }
        case 0xFD76u: {
            uint8_t v=0x40u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD78u; return dd3_static_complete(rt,2u);
        }
        case 0xFD78u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.y);
            rt->state.cpu.pc=0xFD7Bu; return dd3_static_complete(rt,4u);
        }
        case 0xFD7Bu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFD7Cu; return dd3_static_complete(rt,2u);
        }
        case 0xFD7Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFD7Eu,0xFD78u)) c++; rt->state.cpu.pc=0xFD78u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFD7Eu; return dd3_static_complete(rt,2u);
        }
        case 0xFD7Eu: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD80u; return dd3_static_complete(rt,3u);
        }
        case 0xFD80u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFD81u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD82u; return dd3_static_complete(rt,3u);
        }
        case 0xFD82u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD83u; return dd3_static_complete(rt,2u);
        }
        case 0xFD83u: {
            dd3_static_write8(rt,0x05u,rt->state.cpu.y);
            rt->state.cpu.pc=0xFD85u; return dd3_static_complete(rt,3u);
        }
        case 0xFD85u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xFD86u; return dd3_static_complete(rt,2u);
        }
        case 0xFD86u: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xFD88u; return dd3_static_complete(rt,3u);
        }
        case 0xFD88u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFD89u; return dd3_static_complete(rt,2u);
        }
        case 0xFD89u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFD8Au; return dd3_static_complete(rt,4u);
        }
        case 0xFD8Au: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFD8Cu; return dd3_static_complete(rt,2u);
        }
        case 0xFD8Cu: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.y);
            rt->state.cpu.pc=0xFD8Eu; return dd3_static_complete(rt,3u);
        }
        case 0xFD8Eu: {
            dd3_static_write8(rt,(uint16_t)(dd3_static_read16_zp(rt,0x04u)+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xFD90u; return dd3_static_complete(rt,6u);
        }
        case 0xFD90u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xFD91u; return dd3_static_complete(rt,2u);
        }
        case 0xFD91u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFD93u,0xFD8Eu)) c++; rt->state.cpu.pc=0xFD8Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFD93u; return dd3_static_complete(rt,2u);
        }
        case 0xFD93u: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xFD95u; return dd3_static_complete(rt,5u);
        }
        case 0xFD95u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFD96u; return dd3_static_complete(rt,2u);
        }
        case 0xFD96u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFD98u,0xFD8Eu)) c++; rt->state.cpu.pc=0xFD8Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFD98u; return dd3_static_complete(rt,2u);
        }
        case 0xFD98u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFD9Eu: {
            dd3_static_push8(rt,(uint8_t)(0xFDA0u>>8)); dd3_static_push8(rt,(uint8_t)0xFDA0u);
            rt->state.cpu.pc=0xFE03u; return dd3_static_complete(rt,6u);
        }
        case 0xFDA1u: {
            dd3_static_push8(rt,(uint8_t)(0xFDA3u>>8)); dd3_static_push8(rt,(uint8_t)0xFDA3u);
            rt->state.cpu.pc=0xFE25u; return dd3_static_complete(rt,6u);
        }
        case 0xFDA4u: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFDA6u; return dd3_static_complete(rt,2u);
        }
        case 0xFDA6u: {
            uint16_t ea=(uint16_t)((0x97u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFDA8u; return dd3_static_complete(rt,4u);
        }
        case 0xFDA8u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xFDA9u; return dd3_static_complete(rt,2u);
        }
        case 0xFDA9u: {
            uint16_t ea=(uint16_t)((0x99u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFDABu; return dd3_static_complete(rt,4u);
        }
        case 0xFDABu: {
            uint16_t ea=(uint16_t)((0x97u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFDADu; return dd3_static_complete(rt,4u);
        }
        case 0xFDADu: {
            dd3_static_write8(rt,(uint16_t)((0x97u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xFDAFu; return dd3_static_complete(rt,4u);
        }
        case 0xFDAFu: {
            dd3_static_write8(rt,(uint16_t)((0x99u+rt->state.cpu.x)&0xFFu),rt->state.cpu.y);
            rt->state.cpu.pc=0xFDB1u; return dd3_static_complete(rt,4u);
        }
        case 0xFDB1u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFDB2u; return dd3_static_complete(rt,2u);
        }
        case 0xFDB2u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xFDB4u,0xFDA6u)) c++; rt->state.cpu.pc=0xFDA6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFDB4u; return dd3_static_complete(rt,2u);
        }
        case 0xFDB4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFE03u: {
            uint16_t ea=0x9Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE05u; return dd3_static_complete(rt,3u);
        }
        case 0xFE05u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFE06u; return dd3_static_complete(rt,2u);
        }
        case 0xFE06u: {
            dd3_static_write8(rt,0x4016u,rt->state.cpu.x);
            rt->state.cpu.pc=0xFE09u; return dd3_static_complete(rt,4u);
        }
        case 0xFE09u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFE0Au; return dd3_static_complete(rt,2u);
        }
        case 0xFE0Au: {
            dd3_static_write8(rt,0x4016u,rt->state.cpu.x);
            rt->state.cpu.pc=0xFE0Du; return dd3_static_complete(rt,4u);
        }
        case 0xFE0Du: {
            uint8_t v=0x08u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE0Fu; return dd3_static_complete(rt,2u);
        }
        case 0xFE0Fu: {
            uint16_t ea=0x4016u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE12u; return dd3_static_complete(rt,4u);
        }
        case 0xFE12u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE13u; return dd3_static_complete(rt,2u);
        }
        case 0xFE13u: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xFE15u; return dd3_static_complete(rt,5u);
        }
        case 0xFE15u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE16u; return dd3_static_complete(rt,2u);
        }
        case 0xFE16u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xFE18u; return dd3_static_complete(rt,5u);
        }
        case 0xFE18u: {
            uint16_t ea=0x4017u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE1Bu; return dd3_static_complete(rt,4u);
        }
        case 0xFE1Bu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE1Cu; return dd3_static_complete(rt,2u);
        }
        case 0xFE1Cu: {
            uint16_t ea=0x98u; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xFE1Eu; return dd3_static_complete(rt,5u);
        }
        case 0xFE1Eu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE1Fu; return dd3_static_complete(rt,2u);
        }
        case 0xFE1Fu: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xFE21u; return dd3_static_complete(rt,5u);
        }
        case 0xFE21u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFE22u; return dd3_static_complete(rt,2u);
        }
        case 0xFE22u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFE24u,0xFE0Fu)) c++; rt->state.cpu.pc=0xFE0Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFE24u; return dd3_static_complete(rt,2u);
        }
        case 0xFE24u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFE25u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE27u; return dd3_static_complete(rt,3u);
        }
        case 0xFE27u: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE29u; return dd3_static_complete(rt,3u);
        }
        case 0xFE29u: {
            dd3_static_write8(rt,0x97u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE2Bu; return dd3_static_complete(rt,3u);
        }
        case 0xFE2Bu: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE2Du; return dd3_static_complete(rt,3u);
        }
        case 0xFE2Du: {
            uint16_t ea=0x98u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE2Fu; return dd3_static_complete(rt,3u);
        }
        case 0xFE2Fu: {
            dd3_static_write8(rt,0x98u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE31u; return dd3_static_complete(rt,3u);
        }
        case 0xFE31u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFE50u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE51u; return dd3_static_complete(rt,2u);
        }
        case 0xFE51u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE52u; return dd3_static_complete(rt,3u);
        }
        case 0xFE52u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE53u; return dd3_static_complete(rt,2u);
        }
        case 0xFE53u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE54u; return dd3_static_complete(rt,3u);
        }
        case 0xFE54u: {
            uint8_t v=0x17u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE56u; return dd3_static_complete(rt,2u);
        }
        case 0xFE56u: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE58u; return dd3_static_complete(rt,2u);
        }
        case 0xFE58u: {
            uint16_t ea=(uint16_t)((0x00u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE5Au; return dd3_static_complete(rt,4u);
        }
        case 0xFE5Au: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE5Cu; return dd3_static_complete(rt,2u);
        }
        case 0xFE5Cu: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE5Eu; return dd3_static_complete(rt,3u);
        }
        case 0xFE5Eu: {
            uint16_t ea=(uint16_t)((0x01u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE60u; return dd3_static_complete(rt,4u);
        }
        case 0xFE60u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE62u; return dd3_static_complete(rt,2u);
        }
        case 0xFE62u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE64u; return dd3_static_complete(rt,3u);
        }
        case 0xFE64u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xFE65u; return dd3_static_complete(rt,2u);
        }
        case 0xFE65u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFE67u,0xFE68u)) c++; rt->state.cpu.pc=0xFE68u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFE67u; return dd3_static_complete(rt,2u);
        }
        case 0xFE67u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xFE68u; return dd3_static_complete(rt,2u);
        }
        case 0xFE68u: {
            uint16_t ea=(uint16_t)((0x00u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=v&1u; v=(uint8_t)((v>>1)|(c<<7)); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xFE6Au; return dd3_static_complete(rt,6u);
        }
        case 0xFE6Au: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFE6Bu; return dd3_static_complete(rt,2u);
        }
        case 0xFE6Bu: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xFE6Cu; return dd3_static_complete(rt,2u);
        }
        case 0xFE6Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFE6Eu,0xFE68u)) c++; rt->state.cpu.pc=0xFE68u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFE6Eu; return dd3_static_complete(rt,2u);
        }
        case 0xFE6Eu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE6Fu; return dd3_static_complete(rt,4u);
        }
        case 0xFE6Fu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xFE70u; return dd3_static_complete(rt,2u);
        }
        case 0xFE70u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE71u; return dd3_static_complete(rt,4u);
        }
        case 0xFE71u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFE72u; return dd3_static_complete(rt,2u);
        }
        case 0xFE72u: {
            uint16_t ea=0x17u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE74u; return dd3_static_complete(rt,3u);
        }
        case 0xFE74u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFE75u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE77u; return dd3_static_complete(rt,2u);
        }
        case 0xFE77u: {
            dd3_static_write8(rt,0x2003u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE7Au; return dd3_static_complete(rt,4u);
        }
        case 0xFE7Au: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE7Cu; return dd3_static_complete(rt,2u);
        }
        case 0xFE7Cu: {
            dd3_static_write8(rt,0x4014u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE7Fu; return dd3_static_complete(rt,4u);
        }
        case 0xFE7Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFE80u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE82u; return dd3_static_complete(rt,3u);
        }
        case 0xFE82u: {
            uint8_t v=0xFEu;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE84u; return dd3_static_complete(rt,2u);
        }
        case 0xFE84u: {
            (void)rt;
            rt->state.cpu.pc=0xFE85u; return dd3_static_complete(rt,2u);
        }
        case 0xFE85u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFE86u; return dd3_static_complete(rt,2u);
        }
        case 0xFE86u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFE88u,0xFE84u)) c++; rt->state.cpu.pc=0xFE84u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFE88u; return dd3_static_complete(rt,2u);
        }
        case 0xFE88u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xFE8Au; return dd3_static_complete(rt,3u);
        }
        case 0xFE8Au: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xFE8Bu; return dd3_static_complete(rt,2u);
        }
        case 0xFE8Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFE8Du,0xFE80u)) c++; rt->state.cpu.pc=0xFE80u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFE8Du; return dd3_static_complete(rt,2u);
        }
        case 0xFE8Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFE8Eu: {
            dd3_static_write8(rt,0x13u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE90u; return dd3_static_complete(rt,3u);
        }
        case 0xFE90u: {
            uint16_t ea=0x13u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE92u; return dd3_static_complete(rt,3u);
        }
        case 0xFE92u: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFE94u; return dd3_static_complete(rt,2u);
        }
        case 0xFE94u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFE96u,0xFEAEu)) c++; rt->state.cpu.pc=0xFEAEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFE96u; return dd3_static_complete(rt,2u);
        }
        case 0xFE96u: {
            uint8_t v=0xFAu;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFE98u; return dd3_static_complete(rt,2u);
        }
        case 0xFE98u: {
            dd3_static_push8(rt,(uint8_t)(0xFE9Au>>8)); dd3_static_push8(rt,(uint8_t)0xFE9Au);
            rt->state.cpu.pc=0xFE80u; return dd3_static_complete(rt,6u);
        }
        case 0xFE9Bu: {
            dd3_static_push8(rt,(uint8_t)(0xFE9Du>>8)); dd3_static_push8(rt,(uint8_t)0xFE9Du);
            rt->state.cpu.pc=0xFE80u; return dd3_static_complete(rt,6u);
        }
        case 0xFE9Eu: {
            dd3_static_push8(rt,(uint8_t)(0xFEA0u>>8)); dd3_static_push8(rt,(uint8_t)0xFEA0u);
            rt->state.cpu.pc=0xFE80u; return dd3_static_complete(rt,6u);
        }
        case 0xFEA1u: {
            dd3_static_push8(rt,(uint8_t)(0xFEA3u>>8)); dd3_static_push8(rt,(uint8_t)0xFEA3u);
            rt->state.cpu.pc=0xFE80u; return dd3_static_complete(rt,6u);
        }
        case 0xFEA4u: {
            uint16_t ea=0x13u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFEA6u; return dd3_static_complete(rt,3u);
        }
        case 0xFEA6u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xFEA7u; return dd3_static_complete(rt,2u);
        }
        case 0xFEA7u: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xFEA9u; return dd3_static_complete(rt,2u);
        }
        case 0xFEA9u: {
            dd3_static_write8(rt,0x13u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFEABu; return dd3_static_complete(rt,3u);
        }
        case 0xFEABu: {
            rt->state.cpu.pc=0xFE90u; return dd3_static_complete(rt,3u);
        }
        case 0xFEAEu: {
            uint16_t ea=0x13u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFEB0u; return dd3_static_complete(rt,3u);
        }
        case 0xFEB0u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFEB2u; return dd3_static_complete(rt,2u);
        }
        case 0xFEB2u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFEB4u,0xFEBEu)) c++; rt->state.cpu.pc=0xFEBEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFEB4u; return dd3_static_complete(rt,2u);
        }
        case 0xFEB4u: {
            uint8_t v=0x64u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFEB6u; return dd3_static_complete(rt,2u);
        }
        case 0xFEB6u: {
            dd3_static_push8(rt,(uint8_t)(0xFEB8u>>8)); dd3_static_push8(rt,(uint8_t)0xFEB8u);
            rt->state.cpu.pc=0xFE80u; return dd3_static_complete(rt,6u);
        }
        case 0xFEB9u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xFEBAu; return dd3_static_complete(rt,2u);
        }
        case 0xFEBAu: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xFEBCu; return dd3_static_complete(rt,2u);
        }
        case 0xFEBCu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFEBEu,0xFEB4u)) c++; rt->state.cpu.pc=0xFEB4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFEBEu; return dd3_static_complete(rt,2u);
        }
        case 0xFEBEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFEBFu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFEC0u; return dd3_static_complete(rt,3u);
        }
        case 0xFEC0u: {
            uint16_t ea=0xA0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFEC2u; return dd3_static_complete(rt,3u);
        }
        case 0xFEC2u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFEC4u; return dd3_static_complete(rt,2u);
        }
        case 0xFEC4u: {
            dd3_static_write8(rt,0xA0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFEC6u; return dd3_static_complete(rt,3u);
        }
        case 0xFEC6u: {
            dd3_static_write8(rt,0x2000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFEC9u; return dd3_static_complete(rt,4u);
        }
        case 0xFEC9u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFECAu; return dd3_static_complete(rt,4u);
        }
        case 0xFECAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFECBu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFECCu; return dd3_static_complete(rt,3u);
        }
        case 0xFECCu: {
            uint16_t ea=0xA0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFECEu; return dd3_static_complete(rt,3u);
        }
        case 0xFECEu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFED0u; return dd3_static_complete(rt,2u);
        }
        case 0xFED0u: {
            dd3_static_write8(rt,0xA0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFED2u; return dd3_static_complete(rt,3u);
        }
        case 0xFED2u: {
            dd3_static_write8(rt,0x2000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFED5u; return dd3_static_complete(rt,4u);
        }
        case 0xFED5u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFED6u; return dd3_static_complete(rt,4u);
        }
        case 0xFED6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFED7u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFED9u; return dd3_static_complete(rt,2u);
        }
        case 0xFED9u: {
            dd3_static_write8(rt,0x8000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFEDCu; return dd3_static_complete(rt,4u);
        }
        case 0xFEDCu: {
            uint16_t ea=0x04EEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFEDFu; return dd3_static_complete(rt,4u);
        }
        case 0xFEDFu: {
            dd3_static_write8(rt,0x8001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFEE2u; return dd3_static_complete(rt,4u);
        }
        case 0xFEE2u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFEE4u; return dd3_static_complete(rt,2u);
        }
        case 0xFEE4u: {
            dd3_static_write8(rt,0x8000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFEE7u; return dd3_static_complete(rt,4u);
        }
        case 0xFEE7u: {
            uint16_t ea=0x04EFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFEEAu; return dd3_static_complete(rt,4u);
        }
        case 0xFEEAu: {
            dd3_static_write8(rt,0x8001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFEEDu; return dd3_static_complete(rt,4u);
        }
        case 0xFEEDu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFEEEu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFEF0u; return dd3_static_complete(rt,2u);
        }
        case 0xFEF0u: {
            dd3_static_write8(rt,0x8000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFEF3u; return dd3_static_complete(rt,4u);
        }
        case 0xFEF3u: {
            uint16_t ea=0x04E6u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFEF6u; return dd3_static_complete(rt,4u);
        }
        case 0xFEF6u: {
            dd3_static_write8(rt,0x8001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFEF9u; return dd3_static_complete(rt,4u);
        }
        case 0xFEF9u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFEFBu; return dd3_static_complete(rt,2u);
        }
        case 0xFEFBu: {
            dd3_static_write8(rt,0x8000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFEFEu; return dd3_static_complete(rt,4u);
        }
        case 0xFEFEu: {
            uint16_t ea=0x04E7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF01u; return dd3_static_complete(rt,4u);
        }
        case 0xFF01u: {
            dd3_static_write8(rt,0x8001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF04u; return dd3_static_complete(rt,4u);
        }
        case 0xFF04u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF06u; return dd3_static_complete(rt,2u);
        }
        case 0xFF06u: {
            dd3_static_write8(rt,0x8000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF09u; return dd3_static_complete(rt,4u);
        }
        case 0xFF09u: {
            uint16_t ea=0x04E8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF0Cu; return dd3_static_complete(rt,4u);
        }
        case 0xFF0Cu: {
            dd3_static_write8(rt,0x8001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF0Fu; return dd3_static_complete(rt,4u);
        }
        case 0xFF0Fu: {
            uint8_t v=0x05u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF11u; return dd3_static_complete(rt,2u);
        }
        case 0xFF11u: {
            dd3_static_write8(rt,0x8000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF14u; return dd3_static_complete(rt,4u);
        }
        case 0xFF14u: {
            uint16_t ea=0x04E9u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF17u; return dd3_static_complete(rt,4u);
        }
        case 0xFF17u: {
            dd3_static_write8(rt,0x8001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF1Au; return dd3_static_complete(rt,4u);
        }
        case 0xFF1Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFF1Bu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF1Cu; return dd3_static_complete(rt,3u);
        }
        case 0xFF1Cu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF1Du; return dd3_static_complete(rt,2u);
        }
        case 0xFF1Du: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF1Eu; return dd3_static_complete(rt,3u);
        }
        case 0xFF1Eu: {
            uint16_t ea=0x06D8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF21u; return dd3_static_complete(rt,4u);
        }
        case 0xFF21u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFF23u,0xFF25u)) c++; rt->state.cpu.pc=0xFF25u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFF23u; return dd3_static_complete(rt,2u);
        }
        case 0xFF23u: {
            (void)rt;
            rt->state.cpu.pc=0xFF24u; return dd3_static_complete(rt,2u);
        }
        case 0xFF24u: {
            (void)rt;
            rt->state.cpu.pc=0xFF25u; return dd3_static_complete(rt,2u);
        }
        case 0xFF25u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF27u; return dd3_static_complete(rt,2u);
        }
        case 0xFF27u: {
            dd3_static_write8(rt,0x06D8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF2Au; return dd3_static_complete(rt,4u);
        }
        case 0xFF2Au: {
            uint8_t v=0x07u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF2Cu; return dd3_static_complete(rt,2u);
        }
        case 0xFF2Cu: {
            dd3_static_write8(rt,0x00A2u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF2Fu; return dd3_static_complete(rt,4u);
        }
        case 0xFF2Fu: {
            dd3_static_write8(rt,0x8000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF32u; return dd3_static_complete(rt,4u);
        }
        case 0xFF32u: {
            rt->state.cpu.x=rt->state.cpu.s; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFF33u; return dd3_static_complete(rt,2u);
        }
        case 0xFF33u: {
            uint16_t ea=(uint16_t)(0x0102u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF36u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0102u,ea)?1u:0u));
        }
        case 0xFF36u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF37u; return dd3_static_complete(rt,2u);
        }
        case 0xFF37u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF39u; return dd3_static_complete(rt,2u);
        }
        case 0xFF39u: {
            dd3_static_write8(rt,0x8001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF3Cu; return dd3_static_complete(rt,4u);
        }
        case 0xFF3Cu: {
            uint8_t v=0x06u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF3Eu; return dd3_static_complete(rt,2u);
        }
        case 0xFF3Eu: {
            dd3_static_write8(rt,0x00A2u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF41u; return dd3_static_complete(rt,4u);
        }
        case 0xFF41u: {
            dd3_static_write8(rt,0x8000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF44u; return dd3_static_complete(rt,4u);
        }
        case 0xFF44u: {
            uint16_t ea=(uint16_t)(0x0102u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF47u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0102u,ea)?1u:0u));
        }
        case 0xFF47u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF48u; return dd3_static_complete(rt,2u);
        }
        case 0xFF48u: {
            dd3_static_write8(rt,0x8001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF4Bu; return dd3_static_complete(rt,4u);
        }
        case 0xFF4Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF4Du; return dd3_static_complete(rt,2u);
        }
        case 0xFF4Du: {
            dd3_static_write8(rt,0x06D8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF50u; return dd3_static_complete(rt,4u);
        }
        case 0xFF50u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF51u; return dd3_static_complete(rt,4u);
        }
        case 0xFF51u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFF52u; return dd3_static_complete(rt,2u);
        }
        case 0xFF52u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF53u; return dd3_static_complete(rt,4u);
        }
        case 0xFF53u: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xFF56u; return dd3_static_complete(rt,4u);
        }
        case 0xFF56u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFF58u,0xFF59u)) c++; rt->state.cpu.pc=0xFF59u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFF58u; return dd3_static_complete(rt,2u);
        }
        case 0xFF58u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFF59u: {
            (void)rt;
            rt->state.cpu.pc=0xFF5Au; return dd3_static_complete(rt,2u);
        }
        case 0xFF5Au: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF5Du; return dd3_static_complete(rt,4u);
        }
        case 0xFF5Du: {
            (void)0xEAu;
            rt->state.cpu.pc=0xFF5Fu; return dd3_static_complete(rt,2u);
        }
        case 0xFF5Fu: {
            uint16_t ea=0xA3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0xFF61u; return dd3_static_complete(rt,3u);
        }
        case 0xFF61u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xFF63u,0xFF6Bu)) c++; rt->state.cpu.pc=0xFF6Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFF63u; return dd3_static_complete(rt,2u);
        }
        case 0xFF63u: {
            if (!rt->state.cpu.v) { unsigned c=3u; if (dd3_static_page_crossed(0xFF65u,0xFF68u)) c++; rt->state.cpu.pc=0xFF68u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFF65u; return dd3_static_complete(rt,2u);
        }
        case 0xFF65u: {
            rt->state.cpu.pc=0xE0D6u; return dd3_static_complete(rt,3u);
        }
        case 0xFF68u: {
            rt->state.cpu.pc=0xE0A9u; return dd3_static_complete(rt,3u);
        }
        case 0xFF6Bu: {
            if (!rt->state.cpu.v) { unsigned c=3u; if (dd3_static_page_crossed(0xFF6Du,0xFF70u)) c++; rt->state.cpu.pc=0xFF70u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFF6Du; return dd3_static_complete(rt,2u);
        }
        case 0xFF6Du: {
            rt->state.cpu.pc=0xE070u; return dd3_static_complete(rt,3u);
        }
        case 0xFF70u: {
            uint16_t ea=0xA0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF72u; return dd3_static_complete(rt,3u);
        }
        case 0xFF72u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF74u; return dd3_static_complete(rt,2u);
        }
        case 0xFF74u: {
            dd3_static_write8(rt,0xA0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF76u; return dd3_static_complete(rt,3u);
        }
        case 0xFF76u: {
            dd3_static_write8(rt,0x2000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF79u; return dd3_static_complete(rt,4u);
        }
        case 0xFF79u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF7Cu; return dd3_static_complete(rt,4u);
        }
        case 0xFF7Cu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF7Du; return dd3_static_complete(rt,4u);
        }
        case 0xFF7Du: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF7Eu; return dd3_static_complete(rt,4u);
        }
        case 0xFF7Eu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF7Fu; return dd3_static_complete(rt,4u);
        }
        case 0xFF7Fu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF80u; return dd3_static_complete(rt,4u);
        }
        case 0xFF80u: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF82u; return dd3_static_complete(rt,3u);
        }
        case 0xFF82u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF83u; return dd3_static_complete(rt,4u);
        }
        case 0xFF83u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFF84u: {
            rt->state.cpu.i=1;
            rt->state.cpu.pc=0xFF85u; return dd3_static_complete(rt,2u);
        }
        case 0xFF85u: {
            uint8_t v=0xFFu;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF87u; return dd3_static_complete(rt,2u);
        }
        case 0xFF87u: {
            rt->state.cpu.s=rt->state.cpu.x;
            rt->state.cpu.pc=0xFF88u; return dd3_static_complete(rt,2u);
        }
        case 0xFF88u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF8Au; return dd3_static_complete(rt,2u);
        }
        case 0xFF8Au: {
            dd3_static_write8(rt,0x2000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF8Du; return dd3_static_complete(rt,4u);
        }
        case 0xFF8Du: {
            dd3_static_write8(rt,0x2001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFF90u; return dd3_static_complete(rt,4u);
        }
        case 0xFF90u: {
            uint8_t v=0x02u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFF92u; return dd3_static_complete(rt,2u);
        }
        case 0xFF92u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0xFF95u; return dd3_static_complete(rt,4u);
        }
        case 0xFF95u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xFF97u,0xFF92u)) c++; rt->state.cpu.pc=0xFF92u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFF97u; return dd3_static_complete(rt,2u);
        }
        case 0xFF97u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0xFF9Au; return dd3_static_complete(rt,4u);
        }
        case 0xFF9Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xFF9Cu,0xFF97u)) c++; rt->state.cpu.pc=0xFF97u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFF9Cu; return dd3_static_complete(rt,2u);
        }
        case 0xFF9Cu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFF9Du; return dd3_static_complete(rt,2u);
        }
        case 0xFF9Du: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFF9Fu,0xFF92u)) c++; rt->state.cpu.pc=0xFF92u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFF9Fu; return dd3_static_complete(rt,2u);
        }
        case 0xFF9Fu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFFA1u; return dd3_static_complete(rt,2u);
        }
        case 0xFFA1u: {
            dd3_static_write8(rt,0x2000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFFA4u; return dd3_static_complete(rt,4u);
        }
        case 0xFFA4u: {
            dd3_static_write8(rt,0xA0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFFA6u; return dd3_static_complete(rt,3u);
        }
        case 0xFFA6u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFFA8u; return dd3_static_complete(rt,2u);
        }
        case 0xFFA8u: {
            dd3_static_write8(rt,0xA000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFFABu; return dd3_static_complete(rt,4u);
        }
        case 0xFFABu: {
            rt->state.cpu.d=0;
            rt->state.cpu.pc=0xFFACu; return dd3_static_complete(rt,2u);
        }
        case 0xFFACu: {
            uint8_t v=0x06u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFFAEu; return dd3_static_complete(rt,2u);
        }
        case 0xFFAEu: {
            dd3_static_write8(rt,0x9Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xFFB0u; return dd3_static_complete(rt,3u);
        }
        case 0xFFB0u: {
            dd3_static_write8(rt,0x2001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFFB3u; return dd3_static_complete(rt,4u);
        }
        case 0xFFB3u: {
            uint8_t v=0x02u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFFB5u; return dd3_static_complete(rt,2u);
        }
        case 0xFFB5u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFFB8u; return dd3_static_complete(rt,4u);
        }
        case 0xFFB8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xFFBAu,0xFFB5u)) c++; rt->state.cpu.pc=0xFFB5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFFBAu; return dd3_static_complete(rt,2u);
        }
        case 0xFFBAu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFFBBu; return dd3_static_complete(rt,2u);
        }
        case 0xFFBBu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFFBDu,0xFFB5u)) c++; rt->state.cpu.pc=0xFFB5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFFBDu; return dd3_static_complete(rt,2u);
        }
        case 0xFFBDu: {
            dd3_static_write8(rt,0x9Eu,rt->state.cpu.x);
            rt->state.cpu.pc=0xFFBFu; return dd3_static_complete(rt,3u);
        }
        case 0xFFBFu: {
            dd3_static_write8(rt,0x9Du,rt->state.cpu.x);
            rt->state.cpu.pc=0xFFC1u; return dd3_static_complete(rt,3u);
        }
        case 0xFFC1u: {
            dd3_static_write8(rt,0x9Cu,rt->state.cpu.x);
            rt->state.cpu.pc=0xFFC3u; return dd3_static_complete(rt,3u);
        }
        case 0xFFC3u: {
            dd3_static_write8(rt,0x4016u,rt->state.cpu.x);
            rt->state.cpu.pc=0xFFC6u; return dd3_static_complete(rt,4u);
        }
        case 0xFFC6u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFFC8u; return dd3_static_complete(rt,2u);
        }
        case 0xFFC8u: {
            dd3_static_write8(rt,0x9Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xFFCAu; return dd3_static_complete(rt,3u);
        }
        case 0xFFCAu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFFCCu; return dd3_static_complete(rt,2u);
        }
        case 0xFFCCu: {
            dd3_static_write8(rt,0x4017u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFFCFu; return dd3_static_complete(rt,4u);
        }
        case 0xFFCFu: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFFD1u; return dd3_static_complete(rt,2u);
        }
        case 0xFFD1u: {
            dd3_static_write8(rt,0x4015u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFFD4u; return dd3_static_complete(rt,4u);
        }
        case 0xFFD4u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFFD6u; return dd3_static_complete(rt,2u);
        }
        case 0xFFD6u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFFD7u; return dd3_static_complete(rt,2u);
        }
        case 0xFFD7u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFFDAu; return dd3_static_complete(rt,4u);
        }
        case 0xFFDAu: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFFDDu; return dd3_static_complete(rt,4u);
        }
        case 0xFFDDu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFFDFu; return dd3_static_complete(rt,2u);
        }
        case 0xFFDFu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xFFE0u; return dd3_static_complete(rt,2u);
        }
        case 0xFFE0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFFE2u,0xFFD7u)) c++; rt->state.cpu.pc=0xFFD7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFFE2u; return dd3_static_complete(rt,2u);
        }
        case 0xFFE2u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFFE4u; return dd3_static_complete(rt,2u);
        }
        case 0xFFE4u: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFFE6u; return dd3_static_complete(rt,3u);
        }
        case 0xFFE6u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFFE8u; return dd3_static_complete(rt,2u);
        }
        case 0xFFE8u: {
            dd3_static_write8(rt,0xA4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFFEAu; return dd3_static_complete(rt,3u);
        }
        case 0xFFEAu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFFECu; return dd3_static_complete(rt,2u);
        }
        case 0xFFECu: {
            dd3_static_write8(rt,0x00A7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFFEFu; return dd3_static_complete(rt,4u);
        }
        case 0xFFEFu: {
            rt->state.cpu.pc=0xE212u; return dd3_static_complete(rt,3u);
        }
        default: return dd3_static_fail_unproven(rt,15,rt->state.cpu.pc);
    }
}
