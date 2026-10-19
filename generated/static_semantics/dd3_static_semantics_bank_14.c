/* Generated: no runtime opcode fetch or decode. */
#include "dd3_static_semantics.h"
int dd3_static_execute_bank_14(DD3StaticRuntime *rt) {
    switch (rt->state.cpu.pc) {
        case 0xC000u: {
            rt->state.cpu.pc=0xD97Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC006u: {
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC017u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC019u; return dd3_static_complete(rt,2u);
        }
        case 0xC019u: {
            dd3_static_write8(rt,0x060Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC01Cu; return dd3_static_complete(rt,4u);
        }
        case 0xC01Cu: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC01Fu; return dd3_static_complete(rt,4u);
        }
        case 0xC01Fu: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC021u; return dd3_static_complete(rt,2u);
        }
        case 0xC021u: {
            dd3_static_write8(rt,(uint16_t)(0x0693u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC024u; return dd3_static_complete(rt,5u);
        }
        case 0xC024u: {
            dd3_static_write8(rt,(uint16_t)(0x069Du+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC027u; return dd3_static_complete(rt,5u);
        }
        case 0xC027u: {
            dd3_static_write8(rt,(uint16_t)(0x0698u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC02Au; return dd3_static_complete(rt,5u);
        }
        case 0xC02Au: {
            dd3_static_write8(rt,(uint16_t)(0x06A2u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC02Du; return dd3_static_complete(rt,5u);
        }
        case 0xC02Du: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC02Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC02Eu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC030u,0xC021u)) c++; rt->state.cpu.pc=0xC021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC030u; return dd3_static_complete(rt,2u);
        }
        case 0xC030u: {
            dd3_static_write8(rt,0x04CCu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC033u; return dd3_static_complete(rt,4u);
        }
        case 0xC033u: {
            dd3_static_write8(rt,0x04CDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC036u; return dd3_static_complete(rt,4u);
        }
        case 0xC036u: {
            dd3_static_write8(rt,0x04CEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC039u; return dd3_static_complete(rt,4u);
        }
        case 0xC039u: {
            dd3_static_write8(rt,0x04CFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC03Cu; return dd3_static_complete(rt,4u);
        }
        case 0xC03Cu: {
            dd3_static_write8(rt,0x0692u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC03Fu; return dd3_static_complete(rt,4u);
        }
        case 0xC03Fu: {
            dd3_static_write8(rt,0x06ADu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC042u; return dd3_static_complete(rt,4u);
        }
        case 0xC042u: {
            dd3_static_write8(rt,0x06ACu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC045u; return dd3_static_complete(rt,4u);
        }
        case 0xC045u: {
            dd3_static_write8(rt,0x03A7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC048u; return dd3_static_complete(rt,4u);
        }
        case 0xC048u: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC04Bu; return dd3_static_complete(rt,4u);
        }
        case 0xC04Bu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC04Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC04Cu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC04Eu; return dd3_static_complete(rt,3u);
        }
        case 0xC04Eu: {
            uint8_t v=0xF8u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC050u; return dd3_static_complete(rt,2u);
        }
        case 0xC050u: {
            dd3_static_write8(rt,0x87u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC052u; return dd3_static_complete(rt,3u);
        }
        case 0xC052u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC054u; return dd3_static_complete(rt,3u);
        }
        case 0xC054u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC055u; return dd3_static_complete(rt,3u);
        }
        case 0xC055u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC057u; return dd3_static_complete(rt,3u);
        }
        case 0xC057u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC058u; return dd3_static_complete(rt,3u);
        }
        case 0xC058u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC05Au; return dd3_static_complete(rt,3u);
        }
        case 0xC05Au: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC05Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC05Bu: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC05Du; return dd3_static_complete(rt,3u);
        }
        case 0xC05Du: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC05Eu; return dd3_static_complete(rt,3u);
        }
        case 0xC05Eu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC060u; return dd3_static_complete(rt,3u);
        }
        case 0xC060u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC062u; return dd3_static_complete(rt,3u);
        }
        case 0xC062u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC064u; return dd3_static_complete(rt,3u);
        }
        case 0xC064u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC066u; return dd3_static_complete(rt,3u);
        }
        case 0xC066u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC068u; return dd3_static_complete(rt,3u);
        }
        case 0xC068u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC06Au; return dd3_static_complete(rt,3u);
        }
        case 0xC06Au: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC06Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC06Cu: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC06Eu; return dd3_static_complete(rt,3u);
        }
        case 0xC06Eu: {
            dd3_static_push8(rt,(uint8_t)(0xC070u>>8)); dd3_static_push8(rt,(uint8_t)0xC070u);
            rt->state.cpu.pc=0xC828u; return dd3_static_complete(rt,6u);
        }
        case 0xC071u: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC073u; return dd3_static_complete(rt,2u);
        }
        case 0xC073u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC075u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC075u: {
            dd3_static_write8(rt,0x04DDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC078u; return dd3_static_complete(rt,4u);
        }
        case 0xC078u: {
            uint8_t v=0x05u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC07Au; return dd3_static_complete(rt,2u);
        }
        case 0xC07Au: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC07Cu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC07Cu: {
            dd3_static_write8(rt,0x04EEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC07Fu; return dd3_static_complete(rt,4u);
        }
        case 0xC07Fu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC080u; return dd3_static_complete(rt,2u);
        }
        case 0xC080u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC082u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC082u: {
            dd3_static_write8(rt,0x04EFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC085u; return dd3_static_complete(rt,4u);
        }
        case 0xC085u: {
            dd3_static_push8(rt,(uint8_t)(0xC087u>>8)); dd3_static_push8(rt,(uint8_t)0xC087u);
            rt->state.cpu.pc=0xFED7u; return dd3_static_complete(rt,6u);
        }
        case 0xC088u: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC08Au; return dd3_static_complete(rt,2u);
        }
        case 0xC08Au: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC08Cu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC08Cu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC08Du; return dd3_static_complete(rt,2u);
        }
        case 0xC08Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC08Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC08Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC091u,0xC099u)) c++; rt->state.cpu.pc=0xC099u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC091u; return dd3_static_complete(rt,2u);
        }
        case 0xC091u: {
            uint16_t ea=0x13u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC093u; return dd3_static_complete(rt,3u);
        }
        case 0xC093u: {
            dd3_static_push8(rt,(uint8_t)(0xC095u>>8)); dd3_static_push8(rt,(uint8_t)0xC095u);
            rt->state.cpu.pc=0xCB86u; return dd3_static_complete(rt,6u);
        }
        case 0xC096u: {
            rt->state.cpu.pc=0xC0F3u; return dd3_static_complete(rt,3u);
        }
        case 0xC099u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC09Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC09Bu: {
            dd3_static_write8(rt,0x2001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC09Eu; return dd3_static_complete(rt,4u);
        }
        case 0xC09Eu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0A0u; return dd3_static_complete(rt,3u);
        }
        case 0xC0A0u: {
            dd3_static_write8(rt,0x8Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0A2u; return dd3_static_complete(rt,3u);
        }
        case 0xC0A2u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0A4u; return dd3_static_complete(rt,3u);
        }
        case 0xC0A4u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0A6u; return dd3_static_complete(rt,3u);
        }
        case 0xC0A6u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0A8u; return dd3_static_complete(rt,3u);
        }
        case 0xC0A8u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC0A9u; return dd3_static_complete(rt,2u);
        }
        case 0xC0A9u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC0ABu; return dd3_static_complete(rt,2u);
        }
        case 0xC0ABu: {
            dd3_static_write8(rt,0x88u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0ADu; return dd3_static_complete(rt,3u);
        }
        case 0xC0ADu: {
            dd3_static_write8(rt,0x90u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0AFu; return dd3_static_complete(rt,3u);
        }
        case 0xC0AFu: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0B1u; return dd3_static_complete(rt,3u);
        }
        case 0xC0B1u: {
            dd3_static_write8(rt,0x91u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0B3u; return dd3_static_complete(rt,3u);
        }
        case 0xC0B3u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0B5u; return dd3_static_complete(rt,3u);
        }
        case 0xC0B5u: {
            dd3_static_write8(rt,0x92u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0B7u; return dd3_static_complete(rt,3u);
        }
        case 0xC0B7u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0B9u; return dd3_static_complete(rt,3u);
        }
        case 0xC0B9u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0BAu; return dd3_static_complete(rt,3u);
        }
        case 0xC0BAu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0BCu; return dd3_static_complete(rt,3u);
        }
        case 0xC0BCu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0BDu; return dd3_static_complete(rt,3u);
        }
        case 0xC0BDu: {
            dd3_static_push8(rt,(uint8_t)(0xC0BFu>>8)); dd3_static_push8(rt,(uint8_t)0xC0BFu);
            rt->state.cpu.pc=0xC11Bu; return dd3_static_complete(rt,6u);
        }
        case 0xC0C0u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0C2u; return dd3_static_complete(rt,3u);
        }
        case 0xC0C2u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xC0C3u; return dd3_static_complete(rt,2u);
        }
        case 0xC0C3u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC0C5u; return dd3_static_complete(rt,2u);
        }
        case 0xC0C5u: {
            dd3_static_write8(rt,0x87u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0C7u; return dd3_static_complete(rt,3u);
        }
        case 0xC0C7u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0C9u; return dd3_static_complete(rt,3u);
        }
        case 0xC0C9u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC0CBu; return dd3_static_complete(rt,2u);
        }
        case 0xC0CBu: {
            dd3_static_write8(rt,0x88u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0CDu; return dd3_static_complete(rt,3u);
        }
        case 0xC0CDu: {
            dd3_static_push8(rt,(uint8_t)(0xC0CFu>>8)); dd3_static_push8(rt,(uint8_t)0xC0CFu);
            rt->state.cpu.pc=0xC5EAu; return dd3_static_complete(rt,6u);
        }
        case 0xC0D0u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0D1u; return dd3_static_complete(rt,4u);
        }
        case 0xC0D1u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0D3u; return dd3_static_complete(rt,3u);
        }
        case 0xC0D3u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0D4u; return dd3_static_complete(rt,4u);
        }
        case 0xC0D4u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0D6u; return dd3_static_complete(rt,3u);
        }
        case 0xC0D6u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0D8u; return dd3_static_complete(rt,3u);
        }
        case 0xC0D8u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC0DAu; return dd3_static_complete(rt,3u);
        }
        case 0xC0DAu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC0DCu,0xC0B7u)) c++; rt->state.cpu.pc=0xC0B7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0DCu; return dd3_static_complete(rt,2u);
        }
        case 0xC0DCu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0DEu; return dd3_static_complete(rt,3u);
        }
        case 0xC0DEu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC0E0u; return dd3_static_complete(rt,3u);
        }
        case 0xC0E0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC0E2u,0xC0B7u)) c++; rt->state.cpu.pc=0xC0B7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0E2u; return dd3_static_complete(rt,2u);
        }
        case 0xC0E2u: {
            dd3_static_push8(rt,(uint8_t)(0xC0E4u>>8)); dd3_static_push8(rt,(uint8_t)0xC0E4u);
            rt->state.cpu.pc=0xC5EAu; return dd3_static_complete(rt,6u);
        }
        case 0xC0E5u: {
            uint16_t ea=0x060Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0E8u; return dd3_static_complete(rt,4u);
        }
        case 0xC0E8u: {
            uint16_t ea=0x060Au; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC0EBu; return dd3_static_complete(rt,4u);
        }
        case 0xC0EBu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC0EDu,0xC0E2u)) c++; rt->state.cpu.pc=0xC0E2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0EDu; return dd3_static_complete(rt,2u);
        }
        case 0xC0EDu: {
            uint8_t v=0x18u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0EFu; return dd3_static_complete(rt,2u);
        }
        case 0xC0EFu: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0F1u; return dd3_static_complete(rt,3u);
        }
        case 0xC0F1u: {
            dd3_static_write8(rt,0x9Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0F3u; return dd3_static_complete(rt,3u);
        }
        case 0xC0F3u: {
            uint16_t ea=0x3Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0F5u; return dd3_static_complete(rt,3u);
        }
        case 0xC0F5u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0F7u; return dd3_static_complete(rt,2u);
        }
        case 0xC0F7u: {
            dd3_static_write8(rt,0x0601u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0FAu; return dd3_static_complete(rt,4u);
        }
        case 0xC0FAu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0FBu; return dd3_static_complete(rt,4u);
        }
        case 0xC0FBu: {
            dd3_static_write8(rt,0x8Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0FDu; return dd3_static_complete(rt,3u);
        }
        case 0xC0FDu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0FEu; return dd3_static_complete(rt,4u);
        }
        case 0xC0FEu: {
            dd3_static_write8(rt,0x89u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC100u; return dd3_static_complete(rt,3u);
        }
        case 0xC100u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC101u; return dd3_static_complete(rt,4u);
        }
        case 0xC101u: {
            dd3_static_write8(rt,0x88u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC103u; return dd3_static_complete(rt,3u);
        }
        case 0xC103u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC104u; return dd3_static_complete(rt,4u);
        }
        case 0xC104u: {
            dd3_static_write8(rt,0x87u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC106u; return dd3_static_complete(rt,3u);
        }
        case 0xC106u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC107u; return dd3_static_complete(rt,4u);
        }
        case 0xC107u: {
            dd3_static_push8(rt,(uint8_t)(0xC109u>>8)); dd3_static_push8(rt,(uint8_t)0xC109u);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xC10Au: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC10Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC10Cu: {
            dd3_static_write8(rt,0x8Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC10Eu; return dd3_static_complete(rt,3u);
        }
        case 0xC10Eu: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC110u; return dd3_static_complete(rt,3u);
        }
        case 0xC110u: {
            dd3_static_write8(rt,0x90u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC112u; return dd3_static_complete(rt,3u);
        }
        case 0xC112u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC114u; return dd3_static_complete(rt,3u);
        }
        case 0xC114u: {
            dd3_static_write8(rt,0x91u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC116u; return dd3_static_complete(rt,3u);
        }
        case 0xC116u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC118u; return dd3_static_complete(rt,3u);
        }
        case 0xC118u: {
            dd3_static_write8(rt,0x92u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC11Au; return dd3_static_complete(rt,3u);
        }
        case 0xC11Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xC11Bu: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC11Eu; return dd3_static_complete(rt,4u);
        }
        case 0xC11Eu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC11Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC11Fu: {
            dd3_static_push8(rt,(uint8_t)(0xC121u>>8)); dd3_static_push8(rt,(uint8_t)0xC121u);
            rt->state.cpu.pc=0xC12Du; return dd3_static_complete(rt,6u);
        }
        case 0xC122u: {
            dd3_static_push8(rt,(uint8_t)(0xC124u>>8)); dd3_static_push8(rt,(uint8_t)0xC124u);
            rt->state.cpu.pc=0xC372u; return dd3_static_complete(rt,6u);
        }
        case 0xC125u: {
            dd3_static_push8(rt,(uint8_t)(0xC127u>>8)); dd3_static_push8(rt,(uint8_t)0xC127u);
            rt->state.cpu.pc=0xC510u; return dd3_static_complete(rt,6u);
        }
        case 0xC128u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC129u; return dd3_static_complete(rt,4u);
        }
        case 0xC129u: {
            dd3_static_push8(rt,(uint8_t)(0xC12Bu>>8)); dd3_static_push8(rt,(uint8_t)0xC12Bu);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xC12Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xC12Du: {
            uint8_t v=0x30u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC12Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC12Fu: {
            dd3_static_push8(rt,(uint8_t)(0xC131u>>8)); dd3_static_push8(rt,(uint8_t)0xC131u);
            rt->state.cpu.pc=0xD97Cu; return dd3_static_complete(rt,6u);
        }
        case 0xC132u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC134u,0xC135u)) c++; rt->state.cpu.pc=0xC135u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC134u; return dd3_static_complete(rt,2u);
        }
        case 0xC134u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xC135u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC137u; return dd3_static_complete(rt,3u);
        }
        case 0xC137u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC138u; return dd3_static_complete(rt,2u);
        }
        case 0xC138u: {
            uint8_t v=0x04u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC13Au; return dd3_static_complete(rt,2u);
        }
        case 0xC13Au: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC13Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC13Cu: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC13Eu; return dd3_static_complete(rt,3u);
        }
        case 0xC13Eu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC140u; return dd3_static_complete(rt,2u);
        }
        case 0xC140u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC142u; return dd3_static_complete(rt,3u);
        }
        case 0xC142u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC144u; return dd3_static_complete(rt,3u);
        }
        case 0xC144u: {
            uint8_t v=0xF8u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC146u; return dd3_static_complete(rt,2u);
        }
        case 0xC146u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xC147u; return dd3_static_complete(rt,2u);
        }
        case 0xC147u: {
            uint16_t ea=0x8Fu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC149u; return dd3_static_complete(rt,3u);
        }
        case 0xC149u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC14Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC14Bu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC14Du; return dd3_static_complete(rt,3u);
        }
        case 0xC14Du: {
            uint16_t ea=0x90u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC14Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC14Fu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC151u; return dd3_static_complete(rt,3u);
        }
        case 0xC151u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC153u; return dd3_static_complete(rt,3u);
        }
        case 0xC153u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC155u,0xC156u)) c++; rt->state.cpu.pc=0xC156u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC155u; return dd3_static_complete(rt,2u);
        }
        case 0xC155u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xC156u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC158u,0xC17Fu)) c++; rt->state.cpu.pc=0xC17Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC158u; return dd3_static_complete(rt,2u);
        }
        case 0xC158u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0xC15Au; return dd3_static_complete(rt,3u);
        }
        case 0xC15Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC15Cu,0xC17Fu)) c++; rt->state.cpu.pc=0xC17Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC15Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC15Cu: {
            uint16_t ea=0x8Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC15Eu; return dd3_static_complete(rt,3u);
        }
        case 0xC15Eu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC160u; return dd3_static_complete(rt,3u);
        }
        case 0xC160u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC162u; return dd3_static_complete(rt,3u);
        }
        case 0xC162u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC164u; return dd3_static_complete(rt,3u);
        }
        case 0xC164u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC165u; return dd3_static_complete(rt,2u);
        }
        case 0xC165u: {
            uint8_t v=0x08u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC167u; return dd3_static_complete(rt,2u);
        }
        case 0xC167u: {
            dd3_static_write8(rt,0x8Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC169u; return dd3_static_complete(rt,3u);
        }
        case 0xC169u: {
            uint16_t ea=0x90u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC16Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC16Bu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC16Du; return dd3_static_complete(rt,3u);
        }
        case 0xC16Du: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC16Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC16Fu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC171u; return dd3_static_complete(rt,2u);
        }
        case 0xC171u: {
            dd3_static_write8(rt,0x90u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC173u; return dd3_static_complete(rt,3u);
        }
        case 0xC173u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC175u; return dd3_static_complete(rt,3u);
        }
        case 0xC175u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC176u; return dd3_static_complete(rt,2u);
        }
        case 0xC176u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC178u; return dd3_static_complete(rt,2u);
        }
        case 0xC178u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC17Au; return dd3_static_complete(rt,3u);
        }
        case 0xC17Au: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC17Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC17Cu: {
            rt->state.cpu.pc=0xC196u; return dd3_static_complete(rt,3u);
        }
        case 0xC17Fu: {
            uint16_t ea=0x8Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC181u; return dd3_static_complete(rt,3u);
        }
        case 0xC181u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC183u; return dd3_static_complete(rt,3u);
        }
        case 0xC183u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC185u; return dd3_static_complete(rt,3u);
        }
        case 0xC185u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC187u; return dd3_static_complete(rt,3u);
        }
        case 0xC187u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xC188u; return dd3_static_complete(rt,2u);
        }
        case 0xC188u: {
            uint8_t v=0x08u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC18Au; return dd3_static_complete(rt,2u);
        }
        case 0xC18Au: {
            dd3_static_write8(rt,0x8Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC18Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC18Cu: {
            uint16_t ea=0x90u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC18Eu; return dd3_static_complete(rt,3u);
        }
        case 0xC18Eu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC190u; return dd3_static_complete(rt,3u);
        }
        case 0xC190u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC192u; return dd3_static_complete(rt,3u);
        }
        case 0xC192u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC194u; return dd3_static_complete(rt,2u);
        }
        case 0xC194u: {
            dd3_static_write8(rt,0x90u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC196u; return dd3_static_complete(rt,3u);
        }
        case 0xC196u: {
            uint16_t ea=0x91u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC198u; return dd3_static_complete(rt,3u);
        }
        case 0xC198u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC199u; return dd3_static_complete(rt,2u);
        }
        case 0xC199u: {
            uint8_t v=0xEFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC19Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC19Bu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC19Du; return dd3_static_complete(rt,3u);
        }
        case 0xC19Du: {
            uint16_t ea=0x92u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC19Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC19Fu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC1A1u; return dd3_static_complete(rt,2u);
        }
        case 0xC1A1u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC1A3u; return dd3_static_complete(rt,3u);
        }
        case 0xC1A3u: {
            dd3_static_push8(rt,(uint8_t)(0xC1A5u>>8)); dd3_static_push8(rt,(uint8_t)0xC1A5u);
            rt->state.cpu.pc=0xC828u; return dd3_static_complete(rt,6u);
        }
        case 0xC1A6u: {
            uint8_t v=0x05u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC1A8u; return dd3_static_complete(rt,2u);
        }
        case 0xC1A8u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC1AAu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC1AAu: {
            uint16_t ea=0x04EEu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC1ADu; return dd3_static_complete(rt,4u);
        }
        case 0xC1ADu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC1AFu,0xC1BBu)) c++; rt->state.cpu.pc=0xC1BBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC1AFu; return dd3_static_complete(rt,2u);
        }
        case 0xC1AFu: {
            dd3_static_write8(rt,0x04EEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC1B2u; return dd3_static_complete(rt,4u);
        }
        case 0xC1B2u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC1B3u; return dd3_static_complete(rt,2u);
        }
        case 0xC1B3u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC1B5u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC1B5u: {
            dd3_static_write8(rt,0x04EFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC1B8u; return dd3_static_complete(rt,4u);
        }
        case 0xC1B8u: {
            dd3_static_push8(rt,(uint8_t)(0xC1BAu>>8)); dd3_static_push8(rt,(uint8_t)0xC1BAu);
            rt->state.cpu.pc=0xFED7u; return dd3_static_complete(rt,6u);
        }
        case 0xC1BBu: {
            uint16_t ea=0x91u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC1BDu; return dd3_static_complete(rt,3u);
        }
        case 0xC1BDu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC1BFu; return dd3_static_complete(rt,3u);
        }
        case 0xC1BFu: {
            uint16_t ea=0x92u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC1C1u; return dd3_static_complete(rt,3u);
        }
        case 0xC1C1u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC1C3u; return dd3_static_complete(rt,3u);
        }
        case 0xC1C3u: {
            dd3_static_push8(rt,(uint8_t)(0xC1C5u>>8)); dd3_static_push8(rt,(uint8_t)0xC1C5u);
            rt->state.cpu.pc=0xC336u; return dd3_static_complete(rt,6u);
        }
        case 0xC1C6u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC1C8u; return dd3_static_complete(rt,3u);
        }
        case 0xC1C8u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC1C9u; return dd3_static_complete(rt,2u);
        }
        case 0xC1C9u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC1CAu; return dd3_static_complete(rt,2u);
        }
        case 0xC1CAu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC1CBu; return dd3_static_complete(rt,2u);
        }
        case 0xC1CBu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC1CDu; return dd3_static_complete(rt,3u);
        }
        case 0xC1CDu: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC1CFu; return dd3_static_complete(rt,3u);
        }
        case 0xC1CFu: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC1D1u; return dd3_static_complete(rt,3u);
        }
        case 0xC1D1u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC1D3u; return dd3_static_complete(rt,2u);
        }
        case 0xC1D3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC1D5u,0xC1DAu)) c++; rt->state.cpu.pc=0xC1DAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC1D5u; return dd3_static_complete(rt,2u);
        }
        case 0xC1D5u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC1D7u; return dd3_static_complete(rt,3u);
        }
        case 0xC1D7u: {
            uint8_t v=0x1Eu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC1D9u; return dd3_static_complete(rt,2u);
        }
        case 0xC1D9u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC1DAu; return dd3_static_complete(rt,2u);
        }
        case 0xC1DAu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC1DCu; return dd3_static_complete(rt,3u);
        }
        case 0xC1DCu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC1DDu; return dd3_static_complete(rt,2u);
        }
        case 0xC1DDu: {
            uint16_t ea=(uint16_t)(0xC7ECu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC1E0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xC7ECu,ea)?1u:0u));
        }
        case 0xC1E0u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC1E2u; return dd3_static_complete(rt,3u);
        }
        case 0xC1E2u: {
            uint16_t ea=(uint16_t)(0xC7B0u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC1E5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xC7B0u,ea)?1u:0u));
        }
        case 0xC1E5u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC1E7u; return dd3_static_complete(rt,2u);
        }
        case 0xC1E7u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC1E9u; return dd3_static_complete(rt,3u);
        }
        case 0xC1E9u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC1ECu; return dd3_static_complete(rt,4u);
        }
        case 0xC1ECu: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC1EEu; return dd3_static_complete(rt,3u);
        }
        case 0xC1EEu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC1F1u; return dd3_static_complete(rt,5u);
        }
        case 0xC1F1u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC1F2u; return dd3_static_complete(rt,2u);
        }
        case 0xC1F2u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC1F4u; return dd3_static_complete(rt,3u);
        }
        case 0xC1F4u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC1F7u; return dd3_static_complete(rt,5u);
        }
        case 0xC1F7u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC1F8u; return dd3_static_complete(rt,2u);
        }
        case 0xC1F8u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC1FAu; return dd3_static_complete(rt,2u);
        }
        case 0xC1FAu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC1FDu; return dd3_static_complete(rt,5u);
        }
        case 0xC1FDu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC1FEu; return dd3_static_complete(rt,2u);
        }
        case 0xC1FEu: {
            uint16_t ea=0x27u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC200u; return dd3_static_complete(rt,3u);
        }
        case 0xC200u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC203u; return dd3_static_complete(rt,5u);
        }
        case 0xC203u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC204u; return dd3_static_complete(rt,2u);
        }
        case 0xC204u: {
            uint8_t v=0x07u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC206u; return dd3_static_complete(rt,2u);
        }
        case 0xC206u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC208u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC208u: {
            dd3_static_push8(rt,(uint8_t)(0xC20Au>>8)); dd3_static_push8(rt,(uint8_t)0xC20Au);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xC20Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC20Du; return dd3_static_complete(rt,2u);
        }
        case 0xC20Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC20Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC20Fu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC211u; return dd3_static_complete(rt,3u);
        }
        case 0xC211u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC212u; return dd3_static_complete(rt,2u);
        }
        case 0xC212u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC214u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC214u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC216u; return dd3_static_complete(rt,3u);
        }
        case 0xC216u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC218u; return dd3_static_complete(rt,3u);
        }
        case 0xC218u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC219u; return dd3_static_complete(rt,3u);
        }
        case 0xC219u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC21Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC21Bu: {
            dd3_static_write8(rt,0x06u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC21Du; return dd3_static_complete(rt,3u);
        }
        case 0xC21Du: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC21Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC21Fu: {
            dd3_static_write8(rt,0x07u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC221u; return dd3_static_complete(rt,3u);
        }
        case 0xC221u: {
            dd3_static_push8(rt,(uint8_t)(0xC223u>>8)); dd3_static_push8(rt,(uint8_t)0xC223u);
            rt->state.cpu.pc=0xC2C8u; return dd3_static_complete(rt,6u);
        }
        case 0xC224u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC226u; return dd3_static_complete(rt,3u);
        }
        case 0xC226u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC228u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xC228u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xC22Au; return dd3_static_complete(rt,3u);
        }
        case 0xC22Au: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC22Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC22Bu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC22Du; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xC22Du: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC22Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC22Fu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC230u; return dd3_static_complete(rt,2u);
        }
        case 0xC230u: {
            dd3_static_write8(rt,0x24u,rt->state.cpu.y);
            rt->state.cpu.pc=0xC232u; return dd3_static_complete(rt,3u);
        }
        case 0xC232u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC234u; return dd3_static_complete(rt,3u);
        }
        case 0xC234u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC236u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Du),ea)?1u:0u));
        }
        case 0xC236u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC239u; return dd3_static_complete(rt,5u);
        }
        case 0xC239u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC23Au; return dd3_static_complete(rt,2u);
        }
        case 0xC23Au: {
            uint16_t ea=0x27u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC23Cu; return dd3_static_complete(rt,5u);
        }
        case 0xC23Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC23Eu,0xC219u)) c++; rt->state.cpu.pc=0xC219u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC23Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC23Eu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC23Fu; return dd3_static_complete(rt,4u);
        }
        case 0xC23Fu: {
            dd3_static_write8(rt,0x24u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC241u; return dd3_static_complete(rt,3u);
        }
        case 0xC241u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xC244u; return dd3_static_complete(rt,4u);
        }
        case 0xC244u: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC246u; return dd3_static_complete(rt,3u);
        }
        case 0xC246u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC248u,0xC249u)) c++; rt->state.cpu.pc=0xC249u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC248u; return dd3_static_complete(rt,2u);
        }
        case 0xC248u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xC249u: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC24Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC24Bu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC24Du; return dd3_static_complete(rt,3u);
        }
        case 0xC24Du: {
            uint16_t ea=0x30u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC24Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC24Fu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC251u; return dd3_static_complete(rt,3u);
        }
        case 0xC251u: {
            uint16_t ea=0x91u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC253u; return dd3_static_complete(rt,3u);
        }
        case 0xC253u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC255u; return dd3_static_complete(rt,3u);
        }
        case 0xC255u: {
            uint16_t ea=0x92u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC257u; return dd3_static_complete(rt,3u);
        }
        case 0xC257u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC259u; return dd3_static_complete(rt,3u);
        }
        case 0xC259u: {
            dd3_static_push8(rt,(uint8_t)(0xC25Bu>>8)); dd3_static_push8(rt,(uint8_t)0xC25Bu);
            rt->state.cpu.pc=0xC828u; return dd3_static_complete(rt,6u);
        }
        case 0xC25Cu: {
            uint8_t v=0x3Bu;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC25Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC25Eu: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC260u; return dd3_static_complete(rt,3u);
        }
        case 0xC260u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC262u; return dd3_static_complete(rt,2u);
        }
        case 0xC262u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC264u,0xC266u)) c++; rt->state.cpu.pc=0xC266u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC264u; return dd3_static_complete(rt,2u);
        }
        case 0xC264u: {
            uint8_t v=0x1Du;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC266u; return dd3_static_complete(rt,2u);
        }
        case 0xC266u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC268u; return dd3_static_complete(rt,3u);
        }
        case 0xC268u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC269u; return dd3_static_complete(rt,2u);
        }
        case 0xC269u: {
            uint16_t ea=(uint16_t)(0xC7ECu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC26Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xC7ECu,ea)?1u:0u));
        }
        case 0xC26Cu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC26Eu; return dd3_static_complete(rt,3u);
        }
        case 0xC26Eu: {
            uint16_t ea=(uint16_t)(0xC7B0u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC271u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xC7B0u,ea)?1u:0u));
        }
        case 0xC271u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC273u; return dd3_static_complete(rt,3u);
        }
        case 0xC273u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC275u; return dd3_static_complete(rt,2u);
        }
        case 0xC275u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC278u; return dd3_static_complete(rt,4u);
        }
        case 0xC278u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC27Au; return dd3_static_complete(rt,3u);
        }
        case 0xC27Au: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC27Du; return dd3_static_complete(rt,5u);
        }
        case 0xC27Du: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC27Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC27Eu: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC280u; return dd3_static_complete(rt,3u);
        }
        case 0xC280u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC283u; return dd3_static_complete(rt,5u);
        }
        case 0xC283u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC284u; return dd3_static_complete(rt,2u);
        }
        case 0xC284u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC286u; return dd3_static_complete(rt,2u);
        }
        case 0xC286u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC289u; return dd3_static_complete(rt,5u);
        }
        case 0xC289u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC28Au; return dd3_static_complete(rt,2u);
        }
        case 0xC28Au: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC28Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC28Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC28Fu; return dd3_static_complete(rt,5u);
        }
        case 0xC28Fu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC290u; return dd3_static_complete(rt,2u);
        }
        case 0xC290u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC292u; return dd3_static_complete(rt,2u);
        }
        case 0xC292u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC294u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC294u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC296u; return dd3_static_complete(rt,3u);
        }
        case 0xC296u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC297u; return dd3_static_complete(rt,2u);
        }
        case 0xC297u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC299u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC299u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC29Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC29Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC29Du; return dd3_static_complete(rt,2u);
        }
        case 0xC29Du: {
            dd3_static_write8(rt,0x24u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC29Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC29Fu: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2A1u; return dd3_static_complete(rt,3u);
        }
        case 0xC2A1u: {
            dd3_static_write8(rt,0x06u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2A3u; return dd3_static_complete(rt,3u);
        }
        case 0xC2A3u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2A5u; return dd3_static_complete(rt,3u);
        }
        case 0xC2A5u: {
            dd3_static_write8(rt,0x07u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2A7u; return dd3_static_complete(rt,3u);
        }
        case 0xC2A7u: {
            dd3_static_push8(rt,(uint8_t)(0xC2A9u>>8)); dd3_static_push8(rt,(uint8_t)0xC2A9u);
            rt->state.cpu.pc=0xC2C8u; return dd3_static_complete(rt,6u);
        }
        case 0xC2AAu: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2ACu; return dd3_static_complete(rt,3u);
        }
        case 0xC2ACu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2AEu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xC2AEu: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2B0u; return dd3_static_complete(rt,3u);
        }
        case 0xC2B0u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC2B1u; return dd3_static_complete(rt,2u);
        }
        case 0xC2B1u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2B3u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xC2B3u: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2B5u; return dd3_static_complete(rt,3u);
        }
        case 0xC2B5u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC2B6u; return dd3_static_complete(rt,2u);
        }
        case 0xC2B6u: {
            dd3_static_write8(rt,0x24u,rt->state.cpu.y);
            rt->state.cpu.pc=0xC2B8u; return dd3_static_complete(rt,3u);
        }
        case 0xC2B8u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2BAu; return dd3_static_complete(rt,3u);
        }
        case 0xC2BAu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2BCu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Du),ea)?1u:0u));
        }
        case 0xC2BCu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC2BFu; return dd3_static_complete(rt,5u);
        }
        case 0xC2BFu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC2C0u; return dd3_static_complete(rt,2u);
        }
        case 0xC2C0u: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC2C2u; return dd3_static_complete(rt,5u);
        }
        case 0xC2C2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC2C4u,0xC29Fu)) c++; rt->state.cpu.pc=0xC29Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC2C4u; return dd3_static_complete(rt,2u);
        }
        case 0xC2C4u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xC2C7u; return dd3_static_complete(rt,4u);
        }
        case 0xC2C7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xC2C8u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2C9u; return dd3_static_complete(rt,2u);
        }
        case 0xC2C9u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2CAu; return dd3_static_complete(rt,3u);
        }
        case 0xC2CAu: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2CCu; return dd3_static_complete(rt,2u);
        }
        case 0xC2CCu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2CEu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC2CEu: {
            dd3_static_write8(rt,0x08u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2D0u; return dd3_static_complete(rt,3u);
        }
        case 0xC2D0u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC2D1u; return dd3_static_complete(rt,2u);
        }
        case 0xC2D1u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2D3u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC2D3u: {
            dd3_static_write8(rt,0x09u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2D5u; return dd3_static_complete(rt,3u);
        }
        case 0xC2D5u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2D7u; return dd3_static_complete(rt,2u);
        }
        case 0xC2D7u: {
            dd3_static_write8(rt,0x0Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2D9u; return dd3_static_complete(rt,3u);
        }
        case 0xC2D9u: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2DBu; return dd3_static_complete(rt,3u);
        }
        case 0xC2DBu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2DDu; return dd3_static_complete(rt,2u);
        }
        case 0xC2DDu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC2DFu,0xC2E3u)) c++; rt->state.cpu.pc=0xC2E3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC2DFu; return dd3_static_complete(rt,2u);
        }
        case 0xC2DFu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2E1u; return dd3_static_complete(rt,2u);
        }
        case 0xC2E1u: {
            dd3_static_write8(rt,0x0Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2E3u; return dd3_static_complete(rt,3u);
        }
        case 0xC2E3u: {
            uint16_t ea=0x06u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2E5u; return dd3_static_complete(rt,3u);
        }
        case 0xC2E5u: {
            uint8_t v=0xF8u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2E7u; return dd3_static_complete(rt,2u);
        }
        case 0xC2E7u: {
            dd3_static_write8(rt,0x0Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2E9u; return dd3_static_complete(rt,3u);
        }
        case 0xC2E9u: {
            uint16_t ea=0x07u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2EBu; return dd3_static_complete(rt,3u);
        }
        case 0xC2EBu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2ECu; return dd3_static_complete(rt,2u);
        }
        case 0xC2ECu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2EDu; return dd3_static_complete(rt,2u);
        }
        case 0xC2EDu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC2EEu; return dd3_static_complete(rt,2u);
        }
        case 0xC2EEu: {
            uint16_t ea=0x0Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC2F0u; return dd3_static_complete(rt,3u);
        }
        case 0xC2F0u: {
            dd3_static_write8(rt,0x0Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2F2u; return dd3_static_complete(rt,3u);
        }
        case 0xC2F2u: {
            uint16_t ea=0x0Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2F4u; return dd3_static_complete(rt,3u);
        }
        case 0xC2F4u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC2F5u; return dd3_static_complete(rt,2u);
        }
        case 0xC2F5u: {
            uint16_t ea=0x0Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC2F7u; return dd3_static_complete(rt,3u);
        }
        case 0xC2F7u: {
            dd3_static_write8(rt,0x0Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2F9u; return dd3_static_complete(rt,3u);
        }
        case 0xC2F9u: {
            uint16_t ea=0x06u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC2FBu; return dd3_static_complete(rt,3u);
        }
        case 0xC2FBu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2FDu; return dd3_static_complete(rt,2u);
        }
        case 0xC2FDu: {
            dd3_static_write8(rt,0x0Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC2FFu; return dd3_static_complete(rt,3u);
        }
        case 0xC2FFu: {
            uint16_t ea=0x07u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC301u; return dd3_static_complete(rt,3u);
        }
        case 0xC301u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC303u; return dd3_static_complete(rt,2u);
        }
        case 0xC303u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC304u; return dd3_static_complete(rt,2u);
        }
        case 0xC304u: {
            uint16_t ea=0x0Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC306u; return dd3_static_complete(rt,3u);
        }
        case 0xC306u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC307u; return dd3_static_complete(rt,2u);
        }
        case 0xC307u: {
            uint16_t ea=(uint16_t)(0xC332u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC30Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xC332u,ea)?1u:0u));
        }
        case 0xC30Au: {
            dd3_static_write8(rt,0x0Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC30Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC30Cu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC30Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC30Eu: {
            dd3_static_write8(rt,0x0Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC310u; return dd3_static_complete(rt,3u);
        }
        case 0xC310u: {
            uint16_t ea=0x0Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC312u; return dd3_static_complete(rt,3u);
        }
        case 0xC312u: {
            uint16_t ea=0x0Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC314u; return dd3_static_complete(rt,3u);
        }
        case 0xC314u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x08u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC316u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x08u),ea)?1u:0u));
        }
        case 0xC316u: {
            dd3_static_write8(rt,0x0Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC318u; return dd3_static_complete(rt,3u);
        }
        case 0xC318u: {
            uint16_t ea=0x0Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC31Au; return dd3_static_complete(rt,3u);
        }
        case 0xC31Au: {
            uint16_t ea=0x0Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC31Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC31Cu: {
            uint16_t ea=(uint16_t)(0x060Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC31Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x060Cu,ea)?1u:0u));
        }
        case 0xC31Fu: {
            uint16_t ea=0x0Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC321u; return dd3_static_complete(rt,3u);
        }
        case 0xC321u: {
            dd3_static_write8(rt,(uint16_t)(0x060Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xC324u; return dd3_static_complete(rt,5u);
        }
        case 0xC324u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC325u; return dd3_static_complete(rt,2u);
        }
        case 0xC325u: {
            uint8_t v=0xE0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC327u; return dd3_static_complete(rt,2u);
        }
        case 0xC327u: {
            uint16_t ea=0x0600u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC32Au; return dd3_static_complete(rt,4u);
        }
        case 0xC32Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC32Cu,0xC32Fu)) c++; rt->state.cpu.pc=0xC32Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC32Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC32Cu: {
            dd3_static_write8(rt,0x0600u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC32Fu; return dd3_static_complete(rt,4u);
        }
        case 0xC32Fu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC330u; return dd3_static_complete(rt,4u);
        }
        case 0xC330u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC331u; return dd3_static_complete(rt,2u);
        }
        case 0xC331u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xC336u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC337u; return dd3_static_complete(rt,2u);
        }
        case 0xC337u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC338u; return dd3_static_complete(rt,3u);
        }
        case 0xC338u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC33Au; return dd3_static_complete(rt,5u);
        }
        case 0xC33Au: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC33Cu; return dd3_static_complete(rt,5u);
        }
        case 0xC33Cu: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC33Eu; return dd3_static_complete(rt,5u);
        }
        case 0xC33Eu: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC340u; return dd3_static_complete(rt,3u);
        }
        case 0xC340u: {
            uint8_t v=0x1Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC342u; return dd3_static_complete(rt,2u);
        }
        case 0xC342u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC344u,0xC34Au)) c++; rt->state.cpu.pc=0xC34Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC344u; return dd3_static_complete(rt,2u);
        }
        case 0xC344u: {
            uint8_t v=0x1Eu;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC346u; return dd3_static_complete(rt,2u);
        }
        case 0xC346u: {
            uint8_t v=0x30u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC348u; return dd3_static_complete(rt,2u);
        }
        case 0xC348u: {
            dd3_static_write8(rt,0x23u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC34Au; return dd3_static_complete(rt,3u);
        }
        case 0xC34Au: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC34Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC34Bu: {
            dd3_static_write8(rt,0x24u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC34Du; return dd3_static_complete(rt,3u);
        }
        case 0xC34Du: {
            uint8_t v=0x1Du;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC34Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC34Fu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xC350u; return dd3_static_complete(rt,2u);
        }
        case 0xC350u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC352u; return dd3_static_complete(rt,3u);
        }
        case 0xC352u: {
            dd3_static_write8(rt,0x24u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC354u; return dd3_static_complete(rt,3u);
        }
        case 0xC354u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC356u; return dd3_static_complete(rt,5u);
        }
        case 0xC356u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC357u; return dd3_static_complete(rt,4u);
        }
        case 0xC357u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC358u; return dd3_static_complete(rt,2u);
        }
        case 0xC358u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC35Au; return dd3_static_complete(rt,2u);
        }
        case 0xC35Au: {
            uint8_t v=0x18u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC35Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC35Cu: {
            dd3_static_write8(rt,0x27u,rt->state.cpu.x);
            rt->state.cpu.pc=0xC35Eu; return dd3_static_complete(rt,3u);
        }
        case 0xC35Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC360u; return dd3_static_complete(rt,2u);
        }
        case 0xC360u: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.x);
            rt->state.cpu.pc=0xC362u; return dd3_static_complete(rt,3u);
        }
        case 0xC362u: {
            uint8_t v=0x18u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC364u; return dd3_static_complete(rt,2u);
        }
        case 0xC364u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC366u,0xC36Fu)) c++; rt->state.cpu.pc=0xC36Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC366u; return dd3_static_complete(rt,2u);
        }
        case 0xC366u: {
            dd3_static_write8(rt,0x27u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC368u; return dd3_static_complete(rt,3u);
        }
        case 0xC368u: {
            uint8_t v=0x18u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC36Au; return dd3_static_complete(rt,2u);
        }
        case 0xC36Au: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xC36Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC36Bu: {
            uint16_t ea=0x27u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC36Du; return dd3_static_complete(rt,3u);
        }
        case 0xC36Du: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC36Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC36Fu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC370u; return dd3_static_complete(rt,4u);
        }
        case 0xC370u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC371u; return dd3_static_complete(rt,2u);
        }
        case 0xC371u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xC372u: {
            uint8_t v=0x30u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC374u; return dd3_static_complete(rt,2u);
        }
        case 0xC374u: {
            dd3_static_push8(rt,(uint8_t)(0xC376u>>8)); dd3_static_push8(rt,(uint8_t)0xC376u);
            rt->state.cpu.pc=0xD97Cu; return dd3_static_complete(rt,6u);
        }
        case 0xC377u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC379u,0xC37Au)) c++; rt->state.cpu.pc=0xC37Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC379u; return dd3_static_complete(rt,2u);
        }
        case 0xC379u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xC37Au: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC37Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC37Cu: {
            uint8_t v=0xF8u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC37Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC37Eu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xC37Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC37Fu: {
            uint16_t ea=0x91u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC381u; return dd3_static_complete(rt,3u);
        }
        case 0xC381u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC383u; return dd3_static_complete(rt,3u);
        }
        case 0xC383u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC385u; return dd3_static_complete(rt,3u);
        }
        case 0xC385u: {
            uint16_t ea=0x92u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC387u; return dd3_static_complete(rt,3u);
        }
        case 0xC387u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC389u; return dd3_static_complete(rt,3u);
        }
        case 0xC389u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC38Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC38Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC38Du,0xC38Eu)) c++; rt->state.cpu.pc=0xC38Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC38Du; return dd3_static_complete(rt,2u);
        }
        case 0xC38Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xC38Eu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0xC390u; return dd3_static_complete(rt,3u);
        }
        case 0xC390u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC392u,0xC3B9u)) c++; rt->state.cpu.pc=0xC3B9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC392u; return dd3_static_complete(rt,2u);
        }
        case 0xC392u: {
            uint16_t ea=0x91u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC394u; return dd3_static_complete(rt,3u);
        }
        case 0xC394u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC395u; return dd3_static_complete(rt,2u);
        }
        case 0xC395u: {
            uint8_t v=0x08u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC397u; return dd3_static_complete(rt,2u);
        }
        case 0xC397u: {
            dd3_static_write8(rt,0x91u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC399u; return dd3_static_complete(rt,3u);
        }
        case 0xC399u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC39Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC39Bu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC39Du; return dd3_static_complete(rt,3u);
        }
        case 0xC39Du: {
            uint16_t ea=0x92u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC39Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC39Fu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC3A1u; return dd3_static_complete(rt,2u);
        }
        case 0xC3A1u: {
            dd3_static_write8(rt,0x92u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3A3u; return dd3_static_complete(rt,3u);
        }
        case 0xC3A3u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3A5u; return dd3_static_complete(rt,3u);
        }
        case 0xC3A5u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC3A7u; return dd3_static_complete(rt,3u);
        }
        case 0xC3A7u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC3A8u; return dd3_static_complete(rt,2u);
        }
        case 0xC3A8u: {
            uint8_t v=0xEFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC3AAu; return dd3_static_complete(rt,2u);
        }
        case 0xC3AAu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3ACu; return dd3_static_complete(rt,3u);
        }
        case 0xC3ACu: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3AEu; return dd3_static_complete(rt,3u);
        }
        case 0xC3AEu: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC3B0u; return dd3_static_complete(rt,3u);
        }
        case 0xC3B0u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC3B2u; return dd3_static_complete(rt,2u);
        }
        case 0xC3B2u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3B4u; return dd3_static_complete(rt,3u);
        }
        case 0xC3B4u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3B6u; return dd3_static_complete(rt,3u);
        }
        case 0xC3B6u: {
            rt->state.cpu.pc=0xC3DBu; return dd3_static_complete(rt,3u);
        }
        case 0xC3B9u: {
            uint16_t ea=0x91u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC3BBu; return dd3_static_complete(rt,3u);
        }
        case 0xC3BBu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xC3BCu; return dd3_static_complete(rt,2u);
        }
        case 0xC3BCu: {
            uint8_t v=0x08u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC3BEu; return dd3_static_complete(rt,2u);
        }
        case 0xC3BEu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3C0u; return dd3_static_complete(rt,3u);
        }
        case 0xC3C0u: {
            dd3_static_write8(rt,0x91u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3C2u; return dd3_static_complete(rt,3u);
        }
        case 0xC3C2u: {
            uint16_t ea=0x92u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC3C4u; return dd3_static_complete(rt,3u);
        }
        case 0xC3C4u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC3C6u; return dd3_static_complete(rt,2u);
        }
        case 0xC3C6u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3C8u; return dd3_static_complete(rt,3u);
        }
        case 0xC3C8u: {
            dd3_static_write8(rt,0x92u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3CAu; return dd3_static_complete(rt,3u);
        }
        case 0xC3CAu: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC3CCu; return dd3_static_complete(rt,3u);
        }
        case 0xC3CCu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC3CDu; return dd3_static_complete(rt,2u);
        }
        case 0xC3CDu: {
            uint8_t v=0x30u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC3CFu; return dd3_static_complete(rt,2u);
        }
        case 0xC3CFu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3D1u; return dd3_static_complete(rt,3u);
        }
        case 0xC3D1u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3D3u; return dd3_static_complete(rt,3u);
        }
        case 0xC3D3u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC3D5u; return dd3_static_complete(rt,3u);
        }
        case 0xC3D5u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC3D7u; return dd3_static_complete(rt,2u);
        }
        case 0xC3D7u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3D9u; return dd3_static_complete(rt,3u);
        }
        case 0xC3D9u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3DBu; return dd3_static_complete(rt,3u);
        }
        case 0xC3DBu: {
            uint16_t ea=0x8Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC3DDu; return dd3_static_complete(rt,3u);
        }
        case 0xC3DDu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3DFu; return dd3_static_complete(rt,3u);
        }
        case 0xC3DFu: {
            uint16_t ea=0x90u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC3E1u; return dd3_static_complete(rt,3u);
        }
        case 0xC3E1u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3E3u; return dd3_static_complete(rt,3u);
        }
        case 0xC3E3u: {
            dd3_static_push8(rt,(uint8_t)(0xC3E5u>>8)); dd3_static_push8(rt,(uint8_t)0xC3E5u);
            rt->state.cpu.pc=0xC828u; return dd3_static_complete(rt,6u);
        }
        case 0xC3E6u: {
            uint8_t v=0x05u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC3E8u; return dd3_static_complete(rt,2u);
        }
        case 0xC3E8u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC3EAu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC3EAu: {
            uint16_t ea=0x04EEu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC3EDu; return dd3_static_complete(rt,4u);
        }
        case 0xC3EDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC3EFu,0xC3FBu)) c++; rt->state.cpu.pc=0xC3FBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC3EFu; return dd3_static_complete(rt,2u);
        }
        case 0xC3EFu: {
            dd3_static_write8(rt,0x04EEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3F2u; return dd3_static_complete(rt,4u);
        }
        case 0xC3F2u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC3F3u; return dd3_static_complete(rt,2u);
        }
        case 0xC3F3u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC3F5u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC3F5u: {
            dd3_static_write8(rt,0x04EFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3F8u; return dd3_static_complete(rt,4u);
        }
        case 0xC3F8u: {
            dd3_static_push8(rt,(uint8_t)(0xC3FAu>>8)); dd3_static_push8(rt,(uint8_t)0xC3FAu);
            rt->state.cpu.pc=0xFED7u; return dd3_static_complete(rt,6u);
        }
        case 0xC3FBu: {
            uint16_t ea=0x8Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC3FDu; return dd3_static_complete(rt,3u);
        }
        case 0xC3FDu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3FEu; return dd3_static_complete(rt,2u);
        }
        case 0xC3FEu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC3FFu; return dd3_static_complete(rt,2u);
        }
        case 0xC3FFu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC400u; return dd3_static_complete(rt,2u);
        }
        case 0xC400u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC402u; return dd3_static_complete(rt,3u);
        }
        case 0xC402u: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC404u; return dd3_static_complete(rt,3u);
        }
        case 0xC404u: {
            dd3_static_write8(rt,0x27u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC406u; return dd3_static_complete(rt,3u);
        }
        case 0xC406u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC408u; return dd3_static_complete(rt,2u);
        }
        case 0xC408u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xC409u; return dd3_static_complete(rt,2u);
        }
        case 0xC409u: {
            uint16_t ea=0x27u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC40Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC40Bu: {
            dd3_static_write8(rt,0x27u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC40Du; return dd3_static_complete(rt,3u);
        }
        case 0xC40Du: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC40Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC40Fu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC411u; return dd3_static_complete(rt,3u);
        }
        case 0xC411u: {
            uint16_t ea=0x30u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC413u; return dd3_static_complete(rt,3u);
        }
        case 0xC413u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC415u; return dd3_static_complete(rt,3u);
        }
        case 0xC415u: {
            dd3_static_push8(rt,(uint8_t)(0xC417u>>8)); dd3_static_push8(rt,(uint8_t)0xC417u);
            rt->state.cpu.pc=0xC876u; return dd3_static_complete(rt,6u);
        }
        case 0xC418u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC41Au; return dd3_static_complete(rt,5u);
        }
        case 0xC41Au: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC41Cu; return dd3_static_complete(rt,5u);
        }
        case 0xC41Cu: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC41Eu; return dd3_static_complete(rt,5u);
        }
        case 0xC41Eu: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC420u; return dd3_static_complete(rt,3u);
        }
        case 0xC420u: {
            dd3_static_write8(rt,0x24u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC422u; return dd3_static_complete(rt,3u);
        }
        case 0xC422u: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC424u; return dd3_static_complete(rt,3u);
        }
        case 0xC424u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC426u; return dd3_static_complete(rt,2u);
        }
        case 0xC426u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC428u,0xC42Fu)) c++; rt->state.cpu.pc=0xC42Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC428u; return dd3_static_complete(rt,2u);
        }
        case 0xC428u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC42Au; return dd3_static_complete(rt,3u);
        }
        case 0xC42Au: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC42Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC42Bu: {
            uint8_t v=0x1Eu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC42Du; return dd3_static_complete(rt,2u);
        }
        case 0xC42Du: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC42Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC42Fu: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC431u; return dd3_static_complete(rt,3u);
        }
        case 0xC431u: {
            dd3_static_write8(rt,0x25u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC433u; return dd3_static_complete(rt,3u);
        }
        case 0xC433u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC434u; return dd3_static_complete(rt,2u);
        }
        case 0xC434u: {
            uint8_t v=0x1Du;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC436u; return dd3_static_complete(rt,2u);
        }
        case 0xC436u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xC437u; return dd3_static_complete(rt,2u);
        }
        case 0xC437u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC439u; return dd3_static_complete(rt,3u);
        }
        case 0xC439u: {
            dd3_static_write8(rt,0x24u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC43Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC43Bu: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC43Du; return dd3_static_complete(rt,5u);
        }
        case 0xC43Du: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC43Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC43Fu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC440u; return dd3_static_complete(rt,2u);
        }
        case 0xC440u: {
            uint16_t ea=(uint16_t)(0xC7ECu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC443u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xC7ECu,ea)?1u:0u));
        }
        case 0xC443u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC445u; return dd3_static_complete(rt,3u);
        }
        case 0xC445u: {
            uint16_t ea=(uint16_t)(0xC7B0u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC448u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xC7B0u,ea)?1u:0u));
        }
        case 0xC448u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC44Au; return dd3_static_complete(rt,2u);
        }
        case 0xC44Au: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC44Du; return dd3_static_complete(rt,4u);
        }
        case 0xC44Du: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC450u; return dd3_static_complete(rt,5u);
        }
        case 0xC450u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC451u; return dd3_static_complete(rt,2u);
        }
        case 0xC451u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC453u; return dd3_static_complete(rt,3u);
        }
        case 0xC453u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC456u; return dd3_static_complete(rt,5u);
        }
        case 0xC456u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC457u; return dd3_static_complete(rt,2u);
        }
        case 0xC457u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC459u; return dd3_static_complete(rt,2u);
        }
        case 0xC459u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC45Cu; return dd3_static_complete(rt,5u);
        }
        case 0xC45Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC45Du; return dd3_static_complete(rt,2u);
        }
        case 0xC45Du: {
            uint16_t ea=0x27u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC45Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC45Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC462u; return dd3_static_complete(rt,5u);
        }
        case 0xC462u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC463u; return dd3_static_complete(rt,2u);
        }
        case 0xC463u: {
            uint8_t v=0x07u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC465u; return dd3_static_complete(rt,2u);
        }
        case 0xC465u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC467u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC467u: {
            dd3_static_push8(rt,(uint8_t)(0xC469u>>8)); dd3_static_push8(rt,(uint8_t)0xC469u);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xC46Au: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC46Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC46Cu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC46Eu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC46Eu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC470u; return dd3_static_complete(rt,3u);
        }
        case 0xC470u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC471u; return dd3_static_complete(rt,2u);
        }
        case 0xC471u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC473u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC473u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC475u; return dd3_static_complete(rt,3u);
        }
        case 0xC475u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC477u; return dd3_static_complete(rt,3u);
        }
        case 0xC477u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC479u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xC479u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xC47Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC47Bu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC47Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC47Cu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC47Eu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xC47Eu: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC480u; return dd3_static_complete(rt,3u);
        }
        case 0xC480u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC482u; return dd3_static_complete(rt,3u);
        }
        case 0xC482u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC484u; return dd3_static_complete(rt,3u);
        }
        case 0xC484u: {
            dd3_static_write8(rt,0x06u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC486u; return dd3_static_complete(rt,3u);
        }
        case 0xC486u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC488u; return dd3_static_complete(rt,3u);
        }
        case 0xC488u: {
            dd3_static_write8(rt,0x07u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC48Au; return dd3_static_complete(rt,3u);
        }
        case 0xC48Au: {
            dd3_static_push8(rt,(uint8_t)(0xC48Cu>>8)); dd3_static_push8(rt,(uint8_t)0xC48Cu);
            rt->state.cpu.pc=0xC2C8u; return dd3_static_complete(rt,6u);
        }
        case 0xC48Du: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC48Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC48Fu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC491u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Du),ea)?1u:0u));
        }
        case 0xC491u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC492u; return dd3_static_complete(rt,2u);
        }
        case 0xC492u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.y);
            rt->state.cpu.pc=0xC494u; return dd3_static_complete(rt,3u);
        }
        case 0xC494u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC497u; return dd3_static_complete(rt,5u);
        }
        case 0xC497u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC498u; return dd3_static_complete(rt,2u);
        }
        case 0xC498u: {
            uint16_t ea=0x27u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC49Au; return dd3_static_complete(rt,5u);
        }
        case 0xC49Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC49Cu,0xC482u)) c++; rt->state.cpu.pc=0xC482u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC49Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC49Cu: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xC49Fu; return dd3_static_complete(rt,4u);
        }
        case 0xC49Fu: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4A1u; return dd3_static_complete(rt,3u);
        }
        case 0xC4A1u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC4A3u,0xC50Fu)) c++; rt->state.cpu.pc=0xC50Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC4A3u; return dd3_static_complete(rt,2u);
        }
        case 0xC4A3u: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4A5u; return dd3_static_complete(rt,3u);
        }
        case 0xC4A5u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC4A7u; return dd3_static_complete(rt,3u);
        }
        case 0xC4A7u: {
            uint16_t ea=0x30u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4A9u; return dd3_static_complete(rt,3u);
        }
        case 0xC4A9u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC4ABu; return dd3_static_complete(rt,3u);
        }
        case 0xC4ABu: {
            uint16_t ea=0x8Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4ADu; return dd3_static_complete(rt,3u);
        }
        case 0xC4ADu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC4AFu; return dd3_static_complete(rt,3u);
        }
        case 0xC4AFu: {
            uint16_t ea=0x90u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4B1u; return dd3_static_complete(rt,3u);
        }
        case 0xC4B1u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC4B2u; return dd3_static_complete(rt,2u);
        }
        case 0xC4B2u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC4B4u; return dd3_static_complete(rt,2u);
        }
        case 0xC4B4u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC4B6u; return dd3_static_complete(rt,3u);
        }
        case 0xC4B6u: {
            dd3_static_push8(rt,(uint8_t)(0xC4B8u>>8)); dd3_static_push8(rt,(uint8_t)0xC4B8u);
            rt->state.cpu.pc=0xC828u; return dd3_static_complete(rt,6u);
        }
        case 0xC4B9u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4BCu; return dd3_static_complete(rt,4u);
        }
        case 0xC4BCu: {
            uint16_t ea=0x25u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4BEu; return dd3_static_complete(rt,3u);
        }
        case 0xC4BEu: {
            uint16_t ea=(uint16_t)(0xC7B0u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4C1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xC7B0u,ea)?1u:0u));
        }
        case 0xC4C1u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC4C4u; return dd3_static_complete(rt,5u);
        }
        case 0xC4C4u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC4C5u; return dd3_static_complete(rt,2u);
        }
        case 0xC4C5u: {
            uint16_t ea=(uint16_t)(0xC7ECu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4C8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xC7ECu,ea)?1u:0u));
        }
        case 0xC4C8u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC4CBu; return dd3_static_complete(rt,5u);
        }
        case 0xC4CBu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC4CCu; return dd3_static_complete(rt,2u);
        }
        case 0xC4CCu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4CEu; return dd3_static_complete(rt,2u);
        }
        case 0xC4CEu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC4D1u; return dd3_static_complete(rt,5u);
        }
        case 0xC4D1u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC4D2u; return dd3_static_complete(rt,2u);
        }
        case 0xC4D2u: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4D4u; return dd3_static_complete(rt,3u);
        }
        case 0xC4D4u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC4D7u; return dd3_static_complete(rt,5u);
        }
        case 0xC4D7u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC4D8u; return dd3_static_complete(rt,2u);
        }
        case 0xC4D8u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4DAu; return dd3_static_complete(rt,2u);
        }
        case 0xC4DAu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4DCu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC4DCu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC4DEu; return dd3_static_complete(rt,3u);
        }
        case 0xC4DEu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC4DFu; return dd3_static_complete(rt,2u);
        }
        case 0xC4DFu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4E1u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xC4E1u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC4E3u; return dd3_static_complete(rt,3u);
        }
        case 0xC4E3u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4E5u; return dd3_static_complete(rt,3u);
        }
        case 0xC4E5u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4E7u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xC4E7u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xC4E9u; return dd3_static_complete(rt,3u);
        }
        case 0xC4E9u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC4EAu; return dd3_static_complete(rt,2u);
        }
        case 0xC4EAu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4ECu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xC4ECu: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC4EEu; return dd3_static_complete(rt,3u);
        }
        case 0xC4EEu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4F0u; return dd3_static_complete(rt,2u);
        }
        case 0xC4F0u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.y);
            rt->state.cpu.pc=0xC4F2u; return dd3_static_complete(rt,3u);
        }
        case 0xC4F2u: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4F4u; return dd3_static_complete(rt,3u);
        }
        case 0xC4F4u: {
            dd3_static_write8(rt,0x06u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC4F6u; return dd3_static_complete(rt,3u);
        }
        case 0xC4F6u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4F8u; return dd3_static_complete(rt,3u);
        }
        case 0xC4F8u: {
            dd3_static_write8(rt,0x07u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC4FAu; return dd3_static_complete(rt,3u);
        }
        case 0xC4FAu: {
            dd3_static_push8(rt,(uint8_t)(0xC4FCu>>8)); dd3_static_push8(rt,(uint8_t)0xC4FCu);
            rt->state.cpu.pc=0xC2C8u; return dd3_static_complete(rt,6u);
        }
        case 0xC4FDu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC4FFu; return dd3_static_complete(rt,3u);
        }
        case 0xC4FFu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC501u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Du),ea)?1u:0u));
        }
        case 0xC501u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC502u; return dd3_static_complete(rt,2u);
        }
        case 0xC502u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.y);
            rt->state.cpu.pc=0xC504u; return dd3_static_complete(rt,3u);
        }
        case 0xC504u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC507u; return dd3_static_complete(rt,5u);
        }
        case 0xC507u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC508u; return dd3_static_complete(rt,2u);
        }
        case 0xC508u: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC50Au; return dd3_static_complete(rt,5u);
        }
        case 0xC50Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC50Cu,0xC4F2u)) c++; rt->state.cpu.pc=0xC4F2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC50Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC50Cu: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xC50Fu; return dd3_static_complete(rt,4u);
        }
        case 0xC50Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xC510u: {
            uint16_t ea=0x0600u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC513u; return dd3_static_complete(rt,4u);
        }
        case 0xC513u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC515u,0xC571u)) c++; rt->state.cpu.pc=0xC571u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC515u; return dd3_static_complete(rt,2u);
        }
        case 0xC515u: {
            uint8_t v=0x30u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC517u; return dd3_static_complete(rt,2u);
        }
        case 0xC517u: {
            dd3_static_push8(rt,(uint8_t)(0xC519u>>8)); dd3_static_push8(rt,(uint8_t)0xC519u);
            rt->state.cpu.pc=0xD97Cu; return dd3_static_complete(rt,6u);
        }
        case 0xC51Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC51Cu,0xC571u)) c++; rt->state.cpu.pc=0xC571u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC51Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC51Cu: {
            uint8_t v=0x23u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC51Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC51Eu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC520u; return dd3_static_complete(rt,3u);
        }
        case 0xC520u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC522u; return dd3_static_complete(rt,2u);
        }
        case 0xC522u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC524u; return dd3_static_complete(rt,3u);
        }
        case 0xC524u: {
            uint16_t ea=0x0600u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC527u; return dd3_static_complete(rt,4u);
        }
        case 0xC527u: {
            uint8_t v=0x40u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC529u; return dd3_static_complete(rt,2u);
        }
        case 0xC529u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC52Bu,0xC52Fu)) c++; rt->state.cpu.pc=0xC52Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC52Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC52Bu: {
            uint8_t v=0x2Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC52Du; return dd3_static_complete(rt,2u);
        }
        case 0xC52Du: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC52Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC52Fu: {
            uint16_t ea=0x0600u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC532u; return dd3_static_complete(rt,4u);
        }
        case 0xC532u: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC534u; return dd3_static_complete(rt,2u);
        }
        case 0xC534u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC535u; return dd3_static_complete(rt,2u);
        }
        case 0xC535u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC537u; return dd3_static_complete(rt,3u);
        }
        case 0xC537u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC539u; return dd3_static_complete(rt,3u);
        }
        case 0xC539u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC53Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC53Bu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC53Du; return dd3_static_complete(rt,2u);
        }
        case 0xC53Du: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC53Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC53Fu: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC542u; return dd3_static_complete(rt,4u);
        }
        case 0xC542u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC545u; return dd3_static_complete(rt,5u);
        }
        case 0xC545u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC546u; return dd3_static_complete(rt,2u);
        }
        case 0xC546u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC548u; return dd3_static_complete(rt,3u);
        }
        case 0xC548u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC54Bu; return dd3_static_complete(rt,5u);
        }
        case 0xC54Bu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC54Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC54Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC54Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC54Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC551u; return dd3_static_complete(rt,5u);
        }
        case 0xC551u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC552u; return dd3_static_complete(rt,2u);
        }
        case 0xC552u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC554u; return dd3_static_complete(rt,2u);
        }
        case 0xC554u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC557u; return dd3_static_complete(rt,5u);
        }
        case 0xC557u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC558u; return dd3_static_complete(rt,2u);
        }
        case 0xC558u: {
            uint16_t ea=0x0600u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC55Bu; return dd3_static_complete(rt,4u);
        }
        case 0xC55Bu: {
            uint16_t ea=(uint16_t)(0x060Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC55Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x060Cu,ea)?1u:0u));
        }
        case 0xC55Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC561u; return dd3_static_complete(rt,5u);
        }
        case 0xC561u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC562u; return dd3_static_complete(rt,2u);
        }
        case 0xC562u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC563u; return dd3_static_complete(rt,2u);
        }
        case 0xC563u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC564u; return dd3_static_complete(rt,2u);
        }
        case 0xC564u: {
            uint8_t v=0x1Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC566u; return dd3_static_complete(rt,2u);
        }
        case 0xC566u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC568u,0xC55Bu)) c++; rt->state.cpu.pc=0xC55Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC568u; return dd3_static_complete(rt,2u);
        }
        case 0xC568u: {
            dd3_static_write8(rt,0x0600u,rt->state.cpu.y);
            rt->state.cpu.pc=0xC56Bu; return dd3_static_complete(rt,4u);
        }
        case 0xC56Bu: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xC56Eu; return dd3_static_complete(rt,4u);
        }
        case 0xC56Eu: {
            rt->state.cpu.pc=0xC510u; return dd3_static_complete(rt,3u);
        }
        case 0xC571u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xC5EAu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC5ECu; return dd3_static_complete(rt,3u);
        }
        case 0xC5ECu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC5EDu; return dd3_static_complete(rt,3u);
        }
        case 0xC5EDu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC5EFu; return dd3_static_complete(rt,3u);
        }
        case 0xC5EFu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC5F0u; return dd3_static_complete(rt,3u);
        }
        case 0xC5F0u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC5F2u; return dd3_static_complete(rt,3u);
        }
        case 0xC5F2u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC5F3u; return dd3_static_complete(rt,3u);
        }
        case 0xC5F3u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC5F5u; return dd3_static_complete(rt,3u);
        }
        case 0xC5F5u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC5F6u; return dd3_static_complete(rt,3u);
        }
        case 0xC5F6u: {
            uint8_t v=0x78u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC5F8u; return dd3_static_complete(rt,2u);
        }
        case 0xC5F8u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC5FAu; return dd3_static_complete(rt,3u);
        }
        case 0xC5FAu: {
            uint16_t ea=0x060Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC5FDu; return dd3_static_complete(rt,4u);
        }
        case 0xC5FDu: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xC600u; return dd3_static_complete(rt,4u);
        }
        case 0xC600u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC602u,0xC64Fu)) c++; rt->state.cpu.pc=0xC64Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC602u; return dd3_static_complete(rt,2u);
        }
        case 0xC602u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC605u; return dd3_static_complete(rt,4u);
        }
        case 0xC605u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC608u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC608u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC60Bu; return dd3_static_complete(rt,4u);
        }
        case 0xC60Bu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC60Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC60Cu: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC60Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC60Eu: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC610u; return dd3_static_complete(rt,2u);
        }
        case 0xC610u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC612u,0xC616u)) c++; rt->state.cpu.pc=0xC616u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC612u; return dd3_static_complete(rt,2u);
        }
        case 0xC612u: {
            uint8_t v=0x30u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC614u; return dd3_static_complete(rt,2u);
        }
        case 0xC614u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC616u,0xC631u)) c++; rt->state.cpu.pc=0xC631u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC616u; return dd3_static_complete(rt,2u);
        }
        case 0xC616u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC619u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC619u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC61Cu; return dd3_static_complete(rt,4u);
        }
        case 0xC61Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC61Du; return dd3_static_complete(rt,2u);
        }
        case 0xC61Du: {
            uint16_t ea=0xA0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC61Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC61Fu: {
            uint8_t v=0xFBu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC621u; return dd3_static_complete(rt,2u);
        }
        case 0xC621u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC624u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC624u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC625u; return dd3_static_complete(rt,2u);
        }
        case 0xC625u: {
            dd3_static_write8(rt,0xA0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC627u; return dd3_static_complete(rt,3u);
        }
        case 0xC627u: {
            dd3_static_write8(rt,0x2000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC62Au; return dd3_static_complete(rt,4u);
        }
        case 0xC62Au: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC62Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC62Du: {
            uint8_t v=0x21u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC62Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC62Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC631u,0xC633u)) c++; rt->state.cpu.pc=0xC633u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC631u; return dd3_static_complete(rt,2u);
        }
        case 0xC631u: {
            (void)rt;
            rt->state.cpu.pc=0xC632u; return dd3_static_complete(rt,2u);
        }
        case 0xC632u: {
            (void)0xA8u;
            rt->state.cpu.pc=0xC634u; return dd3_static_complete(rt,2u);
        }
        case 0xC633u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC634u; return dd3_static_complete(rt,2u);
        }
        case 0xC634u: {
            uint16_t ea=(uint16_t)(0xC783u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC637u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xC783u,ea)?1u:0u));
        }
        case 0xC637u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC639u; return dd3_static_complete(rt,3u);
        }
        case 0xC639u: {
            uint16_t ea=(uint16_t)(0xC762u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC63Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xC762u,ea)?1u:0u));
        }
        case 0xC63Cu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC63Eu; return dd3_static_complete(rt,3u);
        }
        case 0xC63Eu: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC641u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC641u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC642u; return dd3_static_complete(rt,2u);
        }
        case 0xC642u: {
            uint8_t v=0x0Eu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC644u; return dd3_static_complete(rt,2u);
        }
        case 0xC644u: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC646u; return dd3_static_complete(rt,3u);
        }
        case 0xC646u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC648u; return dd3_static_complete(rt,3u);
        }
        case 0xC648u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xC649u; return dd3_static_complete(rt,2u);
        }
        case 0xC649u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC64Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC64Bu: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC64Du; return dd3_static_complete(rt,3u);
        }
        case 0xC64Du: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC64Fu,0xC65Cu)) c++; rt->state.cpu.pc=0xC65Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC64Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC64Fu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC650u; return dd3_static_complete(rt,4u);
        }
        case 0xC650u: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC652u; return dd3_static_complete(rt,3u);
        }
        case 0xC652u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC653u; return dd3_static_complete(rt,4u);
        }
        case 0xC653u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC655u; return dd3_static_complete(rt,3u);
        }
        case 0xC655u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC656u; return dd3_static_complete(rt,4u);
        }
        case 0xC656u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC658u; return dd3_static_complete(rt,3u);
        }
        case 0xC658u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC659u; return dd3_static_complete(rt,4u);
        }
        case 0xC659u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC65Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC65Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xC65Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC65Du; return dd3_static_complete(rt,2u);
        }
        case 0xC65Du: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x0019u); return dd3_static_complete(rt,5u);
        }
        case 0xC660u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC663u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC663u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC666u; return dd3_static_complete(rt,4u);
        }
        case 0xC666u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC667u; return dd3_static_complete(rt,2u);
        }
        case 0xC667u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC66Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC66Au: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC66Du; return dd3_static_complete(rt,4u);
        }
        case 0xC66Du: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC66Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC66Eu: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC671u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC671u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC674u; return dd3_static_complete(rt,4u);
        }
        case 0xC674u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC675u; return dd3_static_complete(rt,2u);
        }
        case 0xC675u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC678u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC678u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC67Bu; return dd3_static_complete(rt,4u);
        }
        case 0xC67Bu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC67Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC67Cu: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC67Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC67Fu: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC682u; return dd3_static_complete(rt,4u);
        }
        case 0xC682u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC683u; return dd3_static_complete(rt,2u);
        }
        case 0xC683u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC686u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC686u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC689u; return dd3_static_complete(rt,4u);
        }
        case 0xC689u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC68Au; return dd3_static_complete(rt,2u);
        }
        case 0xC68Au: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC68Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC68Du: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC690u; return dd3_static_complete(rt,4u);
        }
        case 0xC690u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC691u; return dd3_static_complete(rt,2u);
        }
        case 0xC691u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC694u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC694u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC697u; return dd3_static_complete(rt,4u);
        }
        case 0xC697u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC698u; return dd3_static_complete(rt,2u);
        }
        case 0xC698u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC69Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC69Bu: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC69Eu; return dd3_static_complete(rt,4u);
        }
        case 0xC69Eu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC69Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC69Fu: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6A2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC6A2u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6A5u; return dd3_static_complete(rt,4u);
        }
        case 0xC6A5u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC6A6u; return dd3_static_complete(rt,2u);
        }
        case 0xC6A6u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6A9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC6A9u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6ACu; return dd3_static_complete(rt,4u);
        }
        case 0xC6ACu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC6ADu; return dd3_static_complete(rt,2u);
        }
        case 0xC6ADu: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6B0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC6B0u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6B3u; return dd3_static_complete(rt,4u);
        }
        case 0xC6B3u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC6B4u; return dd3_static_complete(rt,2u);
        }
        case 0xC6B4u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6B7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC6B7u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6BAu; return dd3_static_complete(rt,4u);
        }
        case 0xC6BAu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC6BBu; return dd3_static_complete(rt,2u);
        }
        case 0xC6BBu: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6BEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC6BEu: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6C1u; return dd3_static_complete(rt,4u);
        }
        case 0xC6C1u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC6C2u; return dd3_static_complete(rt,2u);
        }
        case 0xC6C2u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6C5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC6C5u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6C8u; return dd3_static_complete(rt,4u);
        }
        case 0xC6C8u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC6C9u; return dd3_static_complete(rt,2u);
        }
        case 0xC6C9u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6CCu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC6CCu: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6CFu; return dd3_static_complete(rt,4u);
        }
        case 0xC6CFu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC6D0u; return dd3_static_complete(rt,2u);
        }
        case 0xC6D0u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6D3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC6D3u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6D6u; return dd3_static_complete(rt,4u);
        }
        case 0xC6D6u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC6D7u; return dd3_static_complete(rt,2u);
        }
        case 0xC6D7u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6DAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC6DAu: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6DDu; return dd3_static_complete(rt,4u);
        }
        case 0xC6DDu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC6DEu; return dd3_static_complete(rt,2u);
        }
        case 0xC6DEu: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6E1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC6E1u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6E4u; return dd3_static_complete(rt,4u);
        }
        case 0xC6E4u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC6E5u; return dd3_static_complete(rt,2u);
        }
        case 0xC6E5u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6E8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC6E8u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6EBu; return dd3_static_complete(rt,4u);
        }
        case 0xC6EBu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC6ECu; return dd3_static_complete(rt,2u);
        }
        case 0xC6ECu: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6EFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC6EFu: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6F2u; return dd3_static_complete(rt,4u);
        }
        case 0xC6F2u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC6F3u; return dd3_static_complete(rt,2u);
        }
        case 0xC6F3u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6F6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC6F6u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC6F9u; return dd3_static_complete(rt,4u);
        }
        case 0xC6F9u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC6FAu; return dd3_static_complete(rt,2u);
        }
        case 0xC6FAu: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC6FDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC6FDu: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC700u; return dd3_static_complete(rt,4u);
        }
        case 0xC700u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC701u; return dd3_static_complete(rt,2u);
        }
        case 0xC701u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC704u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC704u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC707u; return dd3_static_complete(rt,4u);
        }
        case 0xC707u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC708u; return dd3_static_complete(rt,2u);
        }
        case 0xC708u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC70Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC70Bu: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC70Eu; return dd3_static_complete(rt,4u);
        }
        case 0xC70Eu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC70Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC70Fu: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC712u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC712u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC715u; return dd3_static_complete(rt,4u);
        }
        case 0xC715u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC716u; return dd3_static_complete(rt,2u);
        }
        case 0xC716u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC719u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC719u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC71Cu; return dd3_static_complete(rt,4u);
        }
        case 0xC71Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC71Du; return dd3_static_complete(rt,2u);
        }
        case 0xC71Du: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC720u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC720u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC723u; return dd3_static_complete(rt,4u);
        }
        case 0xC723u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC724u; return dd3_static_complete(rt,2u);
        }
        case 0xC724u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC727u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC727u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC72Au; return dd3_static_complete(rt,4u);
        }
        case 0xC72Au: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC72Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC72Bu: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC72Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC72Eu: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC731u; return dd3_static_complete(rt,4u);
        }
        case 0xC731u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC732u; return dd3_static_complete(rt,2u);
        }
        case 0xC732u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC735u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC735u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC738u; return dd3_static_complete(rt,4u);
        }
        case 0xC738u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC739u; return dd3_static_complete(rt,2u);
        }
        case 0xC739u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC73Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC73Cu: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC73Fu; return dd3_static_complete(rt,4u);
        }
        case 0xC73Fu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC740u; return dd3_static_complete(rt,2u);
        }
        case 0xC740u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC741u; return dd3_static_complete(rt,2u);
        }
        case 0xC741u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC742u; return dd3_static_complete(rt,3u);
        }
        case 0xC742u: {
            uint16_t ea=0x060Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC745u; return dd3_static_complete(rt,4u);
        }
        case 0xC745u: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC747u; return dd3_static_complete(rt,2u);
        }
        case 0xC747u: {
            uint16_t ea=(uint16_t)(0x0500u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC74Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0500u,ea)?1u:0u));
        }
        case 0xC74Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC74Cu,0xC75Au)) c++; rt->state.cpu.pc=0xC75Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC74Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC74Cu: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC74Fu; return dd3_static_complete(rt,4u);
        }
        case 0xC74Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC751u; return dd3_static_complete(rt,2u);
        }
        case 0xC751u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC754u; return dd3_static_complete(rt,4u);
        }
        case 0xC754u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC757u; return dd3_static_complete(rt,4u);
        }
        case 0xC757u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC75Au; return dd3_static_complete(rt,4u);
        }
        case 0xC75Au: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC75Bu; return dd3_static_complete(rt,4u);
        }
        case 0xC75Bu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC75Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC75Cu: {
            dd3_static_write8(rt,0x060Au,rt->state.cpu.x);
            rt->state.cpu.pc=0xC75Fu; return dd3_static_complete(rt,4u);
        }
        case 0xC75Fu: {
            rt->state.cpu.pc=0xC5FDu; return dd3_static_complete(rt,3u);
        }
        case 0xC828u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC829u; return dd3_static_complete(rt,2u);
        }
        case 0xC829u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC82Au; return dd3_static_complete(rt,3u);
        }
        case 0xC82Au: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC82Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC82Cu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC82Du; return dd3_static_complete(rt,3u);
        }
        case 0xC82Du: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC82Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC82Fu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC830u; return dd3_static_complete(rt,3u);
        }
        case 0xC830u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC832u; return dd3_static_complete(rt,3u);
        }
        case 0xC832u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC833u; return dd3_static_complete(rt,3u);
        }
        case 0xC833u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC835u; return dd3_static_complete(rt,3u);
        }
        case 0xC835u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC836u; return dd3_static_complete(rt,3u);
        }
        case 0xC836u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC838u; return dd3_static_complete(rt,3u);
        }
        case 0xC838u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC839u; return dd3_static_complete(rt,3u);
        }
        case 0xC839u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC83Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC83Bu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC83Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC83Cu: {
            dd3_static_push8(rt,(uint8_t)(0xC83Eu>>8)); dd3_static_push8(rt,(uint8_t)0xC83Eu);
            rt->state.cpu.pc=0xC876u; return dd3_static_complete(rt,6u);
        }
        case 0xC83Fu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC840u; return dd3_static_complete(rt,2u);
        }
        case 0xC840u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC841u; return dd3_static_complete(rt,2u);
        }
        case 0xC841u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC843u; return dd3_static_complete(rt,3u);
        }
        case 0xC843u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC844u; return dd3_static_complete(rt,4u);
        }
        case 0xC844u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC846u; return dd3_static_complete(rt,3u);
        }
        case 0xC846u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC847u; return dd3_static_complete(rt,4u);
        }
        case 0xC847u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC849u; return dd3_static_complete(rt,3u);
        }
        case 0xC849u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC84Au; return dd3_static_complete(rt,4u);
        }
        case 0xC84Au: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC84Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC84Cu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC84Du; return dd3_static_complete(rt,4u);
        }
        case 0xC84Du: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC84Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC84Fu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC851u; return dd3_static_complete(rt,3u);
        }
        case 0xC851u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC852u; return dd3_static_complete(rt,2u);
        }
        case 0xC852u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC854u; return dd3_static_complete(rt,3u);
        }
        case 0xC854u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC856u; return dd3_static_complete(rt,3u);
        }
        case 0xC856u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC858u; return dd3_static_complete(rt,3u);
        }
        case 0xC858u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC859u; return dd3_static_complete(rt,2u);
        }
        case 0xC859u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC85Au; return dd3_static_complete(rt,2u);
        }
        case 0xC85Au: {
            uint16_t ea=(uint16_t)(0xC8ABu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC85Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xC8ABu,ea)?1u:0u));
        }
        case 0xC85Du: {
            dd3_static_write8(rt,0x06u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC85Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC85Fu: {
            uint16_t ea=(uint16_t)(0xC8ACu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC862u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xC8ACu,ea)?1u:0u));
        }
        case 0xC862u: {
            dd3_static_write8(rt,0x07u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC864u; return dd3_static_complete(rt,3u);
        }
        case 0xC864u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC866u; return dd3_static_complete(rt,3u);
        }
        case 0xC866u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x06u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC868u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x06u),ea)?1u:0u));
        }
        case 0xC868u: {
            dd3_static_write8(rt,0x13u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC86Au; return dd3_static_complete(rt,3u);
        }
        case 0xC86Au: {
            dd3_static_push8(rt,(uint8_t)(0xC86Cu>>8)); dd3_static_push8(rt,(uint8_t)0xC86Cu);
            rt->state.cpu.pc=0xC8FBu; return dd3_static_complete(rt,6u);
        }
        case 0xC86Du: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC86Eu; return dd3_static_complete(rt,4u);
        }
        case 0xC86Eu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC870u; return dd3_static_complete(rt,3u);
        }
        case 0xC870u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC871u; return dd3_static_complete(rt,4u);
        }
        case 0xC871u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC873u; return dd3_static_complete(rt,3u);
        }
        case 0xC873u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC874u; return dd3_static_complete(rt,4u);
        }
        case 0xC874u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC875u; return dd3_static_complete(rt,2u);
        }
        case 0xC875u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xC876u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC878u; return dd3_static_complete(rt,2u);
        }
        case 0xC878u: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC87Au; return dd3_static_complete(rt,3u);
        }
        case 0xC87Au: {
            dd3_static_write8(rt,0x05u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC87Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC87Cu: {
            uint8_t v=0x09u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC87Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC87Eu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xC87Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC87Fu: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC881u; return dd3_static_complete(rt,3u);
        }
        case 0xC881u: {
            uint8_t v=0xF0u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC883u; return dd3_static_complete(rt,2u);
        }
        case 0xC883u: {
            dd3_static_write8(rt,0x06u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC885u; return dd3_static_complete(rt,3u);
        }
        case 0xC885u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC887u; return dd3_static_complete(rt,3u);
        }
        case 0xC887u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC889u; return dd3_static_complete(rt,2u);
        }
        case 0xC889u: {
            dd3_static_write8(rt,0x07u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC88Bu; return dd3_static_complete(rt,3u);
        }
        case 0xC88Bu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC88Du,0xC895u)) c++; rt->state.cpu.pc=0xC895u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC88Du; return dd3_static_complete(rt,2u);
        }
        case 0xC88Du: {
            uint16_t ea=0x06u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC88Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC88Fu: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xC891u; return dd3_static_complete(rt,3u);
        }
        case 0xC891u: {
            uint16_t ea=0x07u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC893u; return dd3_static_complete(rt,3u);
        }
        case 0xC893u: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC895u; return dd3_static_complete(rt,3u);
        }
        case 0xC895u: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC897u; return dd3_static_complete(rt,5u);
        }
        case 0xC897u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC899u; return dd3_static_complete(rt,5u);
        }
        case 0xC899u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC89Bu; return dd3_static_complete(rt,5u);
        }
        case 0xC89Bu: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC89Du; return dd3_static_complete(rt,5u);
        }
        case 0xC89Du: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC89Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC89Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC8A0u,0xC87Eu)) c++; rt->state.cpu.pc=0xC87Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC8A0u; return dd3_static_complete(rt,2u);
        }
        case 0xC8A0u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC8A2u; return dd3_static_complete(rt,5u);
        }
        case 0xC8A2u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=v&1u; v=(uint8_t)((v>>1)|(c<<7)); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC8A4u; return dd3_static_complete(rt,5u);
        }
        case 0xC8A4u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC8A6u; return dd3_static_complete(rt,3u);
        }
        case 0xC8A6u: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC8A8u; return dd3_static_complete(rt,3u);
        }
        case 0xC8A8u: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC8AAu; return dd3_static_complete(rt,3u);
        }
        case 0xC8AAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xC8FBu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC8FDu; return dd3_static_complete(rt,3u);
        }
        case 0xC8FDu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC8FEu; return dd3_static_complete(rt,2u);
        }
        case 0xC8FEu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC900u; return dd3_static_complete(rt,3u);
        }
        case 0xC900u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC902u; return dd3_static_complete(rt,2u);
        }
        case 0xC902u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC904u,0xC90Cu)) c++; rt->state.cpu.pc=0xC90Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC904u; return dd3_static_complete(rt,2u);
        }
        case 0xC904u: {
            uint16_t ea=(uint16_t)(0xC92Au+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC907u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xC92Au,ea)?1u:0u));
        }
        case 0xC907u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC909u,0xC90Cu)) c++; rt->state.cpu.pc=0xC90Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC909u; return dd3_static_complete(rt,2u);
        }
        case 0xC909u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC90Au; return dd3_static_complete(rt,2u);
        }
        case 0xC90Au: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.y);
            rt->state.cpu.pc=0xC90Cu; return dd3_static_complete(rt,3u);
        }
        case 0xC90Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC90Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC90Eu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC910u; return dd3_static_complete(rt,3u);
        }
        case 0xC910u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC912u; return dd3_static_complete(rt,5u);
        }
        case 0xC912u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC914u; return dd3_static_complete(rt,5u);
        }
        case 0xC914u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC916u; return dd3_static_complete(rt,5u);
        }
        case 0xC916u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC918u; return dd3_static_complete(rt,5u);
        }
        case 0xC918u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC91Au; return dd3_static_complete(rt,5u);
        }
        case 0xC91Au: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC91Cu; return dd3_static_complete(rt,5u);
        }
        case 0xC91Cu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC91Eu; return dd3_static_complete(rt,3u);
        }
        case 0xC91Eu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC91Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC91Fu: {
            uint8_t v=0x66u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC921u; return dd3_static_complete(rt,2u);
        }
        case 0xC921u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC923u; return dd3_static_complete(rt,3u);
        }
        case 0xC923u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC925u; return dd3_static_complete(rt,3u);
        }
        case 0xC925u: {
            uint8_t v=0xC9u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xC927u; return dd3_static_complete(rt,2u);
        }
        case 0xC927u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xC929u; return dd3_static_complete(rt,3u);
        }
        case 0xC929u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xCB86u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCB88u; return dd3_static_complete(rt,3u);
        }
        case 0xCB88u: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCB8Bu; return dd3_static_complete(rt,4u);
        }
        case 0xCB8Bu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCB8Cu; return dd3_static_complete(rt,3u);
        }
        case 0xCB8Cu: {
            dd3_static_push8(rt,(uint8_t)(0xCB8Eu>>8)); dd3_static_push8(rt,(uint8_t)0xCB8Eu);
            rt->state.cpu.pc=0xFCE3u; return dd3_static_complete(rt,6u);
        }
        case 0xCB8Fu: {
            dd3_static_push8(rt,(uint8_t)(0xCB91u>>8)); dd3_static_push8(rt,(uint8_t)0xCB91u);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xCB92u: {
            uint16_t ea=0xA0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCB94u; return dd3_static_complete(rt,3u);
        }
        case 0xCB94u: {
            uint8_t v=0xFBu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCB96u; return dd3_static_complete(rt,2u);
        }
        case 0xCB96u: {
            dd3_static_write8(rt,0xA0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCB98u; return dd3_static_complete(rt,3u);
        }
        case 0xCB98u: {
            dd3_static_write8(rt,0x2000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCB9Bu; return dd3_static_complete(rt,4u);
        }
        case 0xCB9Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCB9Du; return dd3_static_complete(rt,2u);
        }
        case 0xCB9Du: {
            dd3_static_write8(rt,0x2001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBA0u; return dd3_static_complete(rt,4u);
        }
        case 0xCBA0u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBA2u; return dd3_static_complete(rt,3u);
        }
        case 0xCBA2u: {
            dd3_static_push8(rt,(uint8_t)(0xCBA4u>>8)); dd3_static_push8(rt,(uint8_t)0xCBA4u);
            rt->state.cpu.pc=0xC8FBu; return dd3_static_complete(rt,6u);
        }
        case 0xCBA5u: {
            uint8_t v=0x07u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBA7u; return dd3_static_complete(rt,2u);
        }
        case 0xCBA7u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBA9u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xCBA9u: {
            dd3_static_push8(rt,(uint8_t)(0xCBABu>>8)); dd3_static_push8(rt,(uint8_t)0xCBABu);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xCBACu: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBAEu; return dd3_static_complete(rt,2u);
        }
        case 0xCBAEu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBB0u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xCBB0u: {
            dd3_static_write8(rt,0x04DDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBB3u; return dd3_static_complete(rt,4u);
        }
        case 0xCBB3u: {
            uint8_t v=0x05u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBB5u; return dd3_static_complete(rt,2u);
        }
        case 0xCBB5u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBB7u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xCBB7u: {
            dd3_static_write8(rt,0x04EEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBBAu; return dd3_static_complete(rt,4u);
        }
        case 0xCBBAu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xCBBBu; return dd3_static_complete(rt,2u);
        }
        case 0xCBBBu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBBDu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xCBBDu: {
            dd3_static_write8(rt,0x04EFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBC0u; return dd3_static_complete(rt,4u);
        }
        case 0xCBC0u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBC2u; return dd3_static_complete(rt,2u);
        }
        case 0xCBC2u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBC4u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xCBC4u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBC5u; return dd3_static_complete(rt,3u);
        }
        case 0xCBC5u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xCBC6u; return dd3_static_complete(rt,2u);
        }
        case 0xCBC6u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBC8u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xCBC8u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBCAu; return dd3_static_complete(rt,3u);
        }
        case 0xCBCAu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBCBu; return dd3_static_complete(rt,4u);
        }
        case 0xCBCBu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBCDu; return dd3_static_complete(rt,3u);
        }
        case 0xCBCDu: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBCFu; return dd3_static_complete(rt,2u);
        }
        case 0xCBCFu: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBD1u; return dd3_static_complete(rt,3u);
        }
        case 0xCBD1u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBD3u; return dd3_static_complete(rt,2u);
        }
        case 0xCBD3u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBD5u; return dd3_static_complete(rt,3u);
        }
        case 0xCBD5u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBD7u; return dd3_static_complete(rt,3u);
        }
        case 0xCBD7u: {
            dd3_static_push8(rt,(uint8_t)(0xCBD9u>>8)); dd3_static_push8(rt,(uint8_t)0xCBD9u);
            rt->state.cpu.pc=0xCBFDu; return dd3_static_complete(rt,6u);
        }
        case 0xCBDAu: {
            dd3_static_push8(rt,(uint8_t)(0xCBDCu>>8)); dd3_static_push8(rt,(uint8_t)0xCBDCu);
            rt->state.cpu.pc=0xFED7u; return dd3_static_complete(rt,6u);
        }
        case 0xCBDDu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBDEu; return dd3_static_complete(rt,4u);
        }
        case 0xCBDEu: {
            dd3_static_push8(rt,(uint8_t)(0xCBE0u>>8)); dd3_static_push8(rt,(uint8_t)0xCBE0u);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xCBE1u: {
            dd3_static_push8(rt,(uint8_t)(0xCBE3u>>8)); dd3_static_push8(rt,(uint8_t)0xCBE3u);
            rt->state.cpu.pc=0xFEEEu; return dd3_static_complete(rt,6u);
        }
        case 0xCBE4u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBE6u; return dd3_static_complete(rt,2u);
        }
        case 0xCBE6u: {
            dd3_static_write8(rt,0x068Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBE9u; return dd3_static_complete(rt,4u);
        }
        case 0xCBE9u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBEBu; return dd3_static_complete(rt,2u);
        }
        case 0xCBEBu: {
            dd3_static_write8(rt,0x068Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBEEu; return dd3_static_complete(rt,4u);
        }
        case 0xCBEEu: {
            dd3_static_push8(rt,(uint8_t)(0xCBF0u>>8)); dd3_static_push8(rt,(uint8_t)0xCBF0u);
            rt->state.cpu.pc=0xFCE3u; return dd3_static_complete(rt,6u);
        }
        case 0xCBF1u: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBF3u; return dd3_static_complete(rt,3u);
        }
        case 0xCBF3u: {
            uint8_t v=0x18u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBF5u; return dd3_static_complete(rt,2u);
        }
        case 0xCBF5u: {
            dd3_static_write8(rt,0x9Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBF7u; return dd3_static_complete(rt,3u);
        }
        case 0xCBF7u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCBF9u; return dd3_static_complete(rt,2u);
        }
        case 0xCBF9u: {
            dd3_static_write8(rt,0x0600u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCBFCu; return dd3_static_complete(rt,4u);
        }
        case 0xCBFCu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xCBFDu: {
            dd3_static_push8(rt,(uint8_t)(0xCBFFu>>8)); dd3_static_push8(rt,(uint8_t)0xCBFFu);
            rt->state.cpu.pc=0xCCE6u; return dd3_static_complete(rt,6u);
        }
        case 0xCC00u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCC02u; return dd3_static_complete(rt,3u);
        }
        case 0xCC02u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCC04u,0xCC49u)) c++; rt->state.cpu.pc=0xCC49u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCC04u; return dd3_static_complete(rt,2u);
        }
        case 0xCC04u: {
            dd3_static_push8(rt,(uint8_t)(0xCC06u>>8)); dd3_static_push8(rt,(uint8_t)0xCC06u);
            rt->state.cpu.pc=0xCCE6u; return dd3_static_complete(rt,6u);
        }
        case 0xCC07u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCC09u; return dd3_static_complete(rt,3u);
        }
        case 0xCC09u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCC0Bu,0xCC0Cu)) c++; rt->state.cpu.pc=0xCC0Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCC0Bu; return dd3_static_complete(rt,2u);
        }
        case 0xCC0Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xCC0Cu: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC0Eu; return dd3_static_complete(rt,2u);
        }
        case 0xCC0Eu: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xCC10u; return dd3_static_complete(rt,2u);
        }
        case 0xCC10u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCC12u,0xCC21u)) c++; rt->state.cpu.pc=0xCC21u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCC12u; return dd3_static_complete(rt,2u);
        }
        case 0xCC12u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCC14u; return dd3_static_complete(rt,3u);
        }
        case 0xCC14u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC16u; return dd3_static_complete(rt,3u);
        }
        case 0xCC16u: {
            dd3_static_push8(rt,(uint8_t)(0xCC18u>>8)); dd3_static_push8(rt,(uint8_t)0xCC18u);
            rt->state.cpu.pc=0xCCE6u; return dd3_static_complete(rt,6u);
        }
        case 0xCC19u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC1Bu; return dd3_static_complete(rt,3u);
        }
        case 0xCC1Bu: {
            dd3_static_push8(rt,(uint8_t)(0xCC1Du>>8)); dd3_static_push8(rt,(uint8_t)0xCC1Du);
            rt->state.cpu.pc=0xCCD4u; return dd3_static_complete(rt,6u);
        }
        case 0xCC1Eu: {
            rt->state.cpu.pc=0xCBFDu; return dd3_static_complete(rt,3u);
        }
        case 0xCC21u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCC23u; return dd3_static_complete(rt,3u);
        }
        case 0xCC23u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC24u; return dd3_static_complete(rt,3u);
        }
        case 0xCC24u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCC26u; return dd3_static_complete(rt,3u);
        }
        case 0xCC26u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC27u; return dd3_static_complete(rt,3u);
        }
        case 0xCC27u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCC29u; return dd3_static_complete(rt,3u);
        }
        case 0xCC29u: {
            dd3_static_push8(rt,(uint8_t)(0xCC2Bu>>8)); dd3_static_push8(rt,(uint8_t)0xCC2Bu);
            rt->state.cpu.pc=0xCCE6u; return dd3_static_complete(rt,6u);
        }
        case 0xCC2Cu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.x);
            rt->state.cpu.pc=0xCC2Eu; return dd3_static_complete(rt,3u);
        }
        case 0xCC2Eu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC30u; return dd3_static_complete(rt,3u);
        }
        case 0xCC30u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCC32u; return dd3_static_complete(rt,3u);
        }
        case 0xCC32u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC33u; return dd3_static_complete(rt,3u);
        }
        case 0xCC33u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCC35u; return dd3_static_complete(rt,2u);
        }
        case 0xCC35u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC37u; return dd3_static_complete(rt,3u);
        }
        case 0xCC37u: {
            dd3_static_push8(rt,(uint8_t)(0xCC39u>>8)); dd3_static_push8(rt,(uint8_t)0xCC39u);
            rt->state.cpu.pc=0xCBFDu; return dd3_static_complete(rt,6u);
        }
        case 0xCC3Au: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC3Bu; return dd3_static_complete(rt,4u);
        }
        case 0xCC3Bu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC3Du; return dd3_static_complete(rt,3u);
        }
        case 0xCC3Du: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC3Eu; return dd3_static_complete(rt,4u);
        }
        case 0xCC3Eu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC40u; return dd3_static_complete(rt,3u);
        }
        case 0xCC40u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC41u; return dd3_static_complete(rt,4u);
        }
        case 0xCC41u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC43u; return dd3_static_complete(rt,3u);
        }
        case 0xCC43u: {
            dd3_static_push8(rt,(uint8_t)(0xCC45u>>8)); dd3_static_push8(rt,(uint8_t)0xCC45u);
            rt->state.cpu.pc=0xCCD4u; return dd3_static_complete(rt,6u);
        }
        case 0xCC46u: {
            rt->state.cpu.pc=0xCBFDu; return dd3_static_complete(rt,3u);
        }
        case 0xCC49u: {
            uint8_t v=0x05u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCC4Bu; return dd3_static_complete(rt,2u);
        }
        case 0xCC4Bu: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC4Du; return dd3_static_complete(rt,2u);
        }
        case 0xCC4Du: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC4Eu; return dd3_static_complete(rt,2u);
        }
        case 0xCC4Eu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCC4Fu; return dd3_static_complete(rt,2u);
        }
        case 0xCC4Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCC51u,0xCC4Du)) c++; rt->state.cpu.pc=0xCC4Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCC51u; return dd3_static_complete(rt,2u);
        }
        case 0xCC51u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCC52u; return dd3_static_complete(rt,2u);
        }
        case 0xCC52u: {
            uint16_t ea=(uint16_t)(0xCC5Fu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCC55u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xCC5Fu,ea)?1u:0u));
        }
        case 0xCC55u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC57u; return dd3_static_complete(rt,3u);
        }
        case 0xCC57u: {
            uint16_t ea=(uint16_t)(0xCC60u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCC5Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xCC60u,ea)?1u:0u));
        }
        case 0xCC5Au: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC5Cu; return dd3_static_complete(rt,3u);
        }
        case 0xCC5Cu: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x002Du); return dd3_static_complete(rt,5u);
        }
        case 0xCC67u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCC69u; return dd3_static_complete(rt,3u);
        }
        case 0xCC69u: {
            dd3_static_push8(rt,(uint8_t)(0xCC6Bu>>8)); dd3_static_push8(rt,(uint8_t)0xCC6Bu);
            rt->state.cpu.pc=0xCCE6u; return dd3_static_complete(rt,6u);
        }
        case 0xCC6Cu: {
            dd3_static_push8(rt,(uint8_t)(0xCC6Eu>>8)); dd3_static_push8(rt,(uint8_t)0xCC6Eu);
            rt->state.cpu.pc=0xCCF7u; return dd3_static_complete(rt,6u);
        }
        case 0xCC6Fu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCC70u; return dd3_static_complete(rt,2u);
        }
        case 0xCC70u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCC72u,0xCC6Cu)) c++; rt->state.cpu.pc=0xCC6Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCC72u; return dd3_static_complete(rt,2u);
        }
        case 0xCC72u: {
            dd3_static_push8(rt,(uint8_t)(0xCC74u>>8)); dd3_static_push8(rt,(uint8_t)0xCC74u);
            rt->state.cpu.pc=0xCCD4u; return dd3_static_complete(rt,6u);
        }
        case 0xCC75u: {
            rt->state.cpu.pc=0xCBFDu; return dd3_static_complete(rt,3u);
        }
        case 0xCC78u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCC7Au; return dd3_static_complete(rt,3u);
        }
        case 0xCC7Au: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC7Cu; return dd3_static_complete(rt,2u);
        }
        case 0xCC7Cu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCC7Du; return dd3_static_complete(rt,2u);
        }
        case 0xCC7Du: {
            dd3_static_push8(rt,(uint8_t)(0xCC7Fu>>8)); dd3_static_push8(rt,(uint8_t)0xCC7Fu);
            rt->state.cpu.pc=0xCCE6u; return dd3_static_complete(rt,6u);
        }
        case 0xCC80u: {
            dd3_static_push8(rt,(uint8_t)(0xCC82u>>8)); dd3_static_push8(rt,(uint8_t)0xCC82u);
            rt->state.cpu.pc=0xCCF7u; return dd3_static_complete(rt,6u);
        }
        case 0xCC83u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCC84u; return dd3_static_complete(rt,2u);
        }
        case 0xCC84u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCC86u,0xCC7Du)) c++; rt->state.cpu.pc=0xCC7Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCC86u; return dd3_static_complete(rt,2u);
        }
        case 0xCC86u: {
            dd3_static_push8(rt,(uint8_t)(0xCC88u>>8)); dd3_static_push8(rt,(uint8_t)0xCC88u);
            rt->state.cpu.pc=0xCCD4u; return dd3_static_complete(rt,6u);
        }
        case 0xCC89u: {
            rt->state.cpu.pc=0xCBFDu; return dd3_static_complete(rt,3u);
        }
        case 0xCC8Cu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCC8Eu; return dd3_static_complete(rt,3u);
        }
        case 0xCC8Eu: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC90u; return dd3_static_complete(rt,2u);
        }
        case 0xCC90u: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC92u; return dd3_static_complete(rt,3u);
        }
        case 0xCC92u: {
            dd3_static_push8(rt,(uint8_t)(0xCC94u>>8)); dd3_static_push8(rt,(uint8_t)0xCC94u);
            rt->state.cpu.pc=0xCCE6u; return dd3_static_complete(rt,6u);
        }
        case 0xCC95u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCC97u; return dd3_static_complete(rt,3u);
        }
        case 0xCC97u: {
            dd3_static_push8(rt,(uint8_t)(0xCC99u>>8)); dd3_static_push8(rt,(uint8_t)0xCC99u);
            rt->state.cpu.pc=0xCCE6u; return dd3_static_complete(rt,6u);
        }
        case 0xCC9Au: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCC9Cu; return dd3_static_complete(rt,3u);
        }
        case 0xCC9Cu: {
            dd3_static_push8(rt,(uint8_t)(0xCC9Eu>>8)); dd3_static_push8(rt,(uint8_t)0xCC9Eu);
            rt->state.cpu.pc=0xCCF7u; return dd3_static_complete(rt,6u);
        }
        case 0xCC9Fu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCCA0u; return dd3_static_complete(rt,2u);
        }
        case 0xCCA0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCCA2u,0xCC9Cu)) c++; rt->state.cpu.pc=0xCC9Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCCA2u; return dd3_static_complete(rt,2u);
        }
        case 0xCCA2u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xCCA4u; return dd3_static_complete(rt,5u);
        }
        case 0xCCA4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCCA6u,0xCC9Au)) c++; rt->state.cpu.pc=0xCC9Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCCA6u; return dd3_static_complete(rt,2u);
        }
        case 0xCCA6u: {
            dd3_static_push8(rt,(uint8_t)(0xCCA8u>>8)); dd3_static_push8(rt,(uint8_t)0xCCA8u);
            rt->state.cpu.pc=0xCCD4u; return dd3_static_complete(rt,6u);
        }
        case 0xCCA9u: {
            rt->state.cpu.pc=0xCBFDu; return dd3_static_complete(rt,3u);
        }
        case 0xCCACu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCCAEu; return dd3_static_complete(rt,3u);
        }
        case 0xCCAEu: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCCB0u; return dd3_static_complete(rt,2u);
        }
        case 0xCCB0u: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCCB2u; return dd3_static_complete(rt,3u);
        }
        case 0xCCB2u: {
            dd3_static_push8(rt,(uint8_t)(0xCCB4u>>8)); dd3_static_push8(rt,(uint8_t)0xCCB4u);
            rt->state.cpu.pc=0xCCE6u; return dd3_static_complete(rt,6u);
        }
        case 0xCCB5u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCCB7u; return dd3_static_complete(rt,3u);
        }
        case 0xCCB7u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCCB9u; return dd3_static_complete(rt,3u);
        }
        case 0xCCB9u: {
            dd3_static_write8(rt,0x1Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xCCBBu; return dd3_static_complete(rt,3u);
        }
        case 0xCCBBu: {
            uint16_t ea=0x1Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCCBDu; return dd3_static_complete(rt,3u);
        }
        case 0xCCBDu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCCBFu; return dd3_static_complete(rt,3u);
        }
        case 0xCCBFu: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCCC1u; return dd3_static_complete(rt,3u);
        }
        case 0xCCC1u: {
            dd3_static_push8(rt,(uint8_t)(0xCCC3u>>8)); dd3_static_push8(rt,(uint8_t)0xCCC3u);
            rt->state.cpu.pc=0xCCE6u; return dd3_static_complete(rt,6u);
        }
        case 0xCCC4u: {
            dd3_static_push8(rt,(uint8_t)(0xCCC6u>>8)); dd3_static_push8(rt,(uint8_t)0xCCC6u);
            rt->state.cpu.pc=0xCCF7u; return dd3_static_complete(rt,6u);
        }
        case 0xCCC7u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCCC8u; return dd3_static_complete(rt,2u);
        }
        case 0xCCC8u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCCCAu,0xCCC1u)) c++; rt->state.cpu.pc=0xCCC1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCCCAu; return dd3_static_complete(rt,2u);
        }
        case 0xCCCAu: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xCCCCu; return dd3_static_complete(rt,5u);
        }
        case 0xCCCCu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCCCEu,0xCCBBu)) c++; rt->state.cpu.pc=0xCCBBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCCCEu; return dd3_static_complete(rt,2u);
        }
        case 0xCCCEu: {
            dd3_static_push8(rt,(uint8_t)(0xCCD0u>>8)); dd3_static_push8(rt,(uint8_t)0xCCD0u);
            rt->state.cpu.pc=0xCCD4u; return dd3_static_complete(rt,6u);
        }
        case 0xCCD1u: {
            rt->state.cpu.pc=0xCBFDu; return dd3_static_complete(rt,3u);
        }
        case 0xCCD4u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCCD6u; return dd3_static_complete(rt,3u);
        }
        case 0xCCD6u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xCCD7u; return dd3_static_complete(rt,2u);
        }
        case 0xCCD7u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xCCD9u; return dd3_static_complete(rt,3u);
        }
        case 0xCCD9u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCCDBu; return dd3_static_complete(rt,3u);
        }
        case 0xCCDBu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCCDDu; return dd3_static_complete(rt,2u);
        }
        case 0xCCDDu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xCCDFu; return dd3_static_complete(rt,3u);
        }
        case 0xCCDFu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xCCE1u; return dd3_static_complete(rt,3u);
        }
        case 0xCCE1u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCCE3u; return dd3_static_complete(rt,2u);
        }
        case 0xCCE3u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCCE5u; return dd3_static_complete(rt,3u);
        }
        case 0xCCE5u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xCCE6u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCCE8u; return dd3_static_complete(rt,3u);
        }
        case 0xCCE8u: {
            uint8_t v=0x80u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xCCEAu; return dd3_static_complete(rt,2u);
        }
        case 0xCCEAu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCCECu,0xCCEEu)) c++; rt->state.cpu.pc=0xCCEEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCCECu; return dd3_static_complete(rt,2u);
        }
        case 0xCCECu: {
            (void)rt;
            rt->state.cpu.pc=0xCCEDu; return dd3_static_complete(rt,2u);
        }
        case 0xCCEDu: {
            (void)0xA4u;
            rt->state.cpu.pc=0xCCEFu; return dd3_static_complete(rt,2u);
        }
        case 0xCCEEu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCCF0u; return dd3_static_complete(rt,3u);
        }
        case 0xCCEFu: {
            uint16_t ea=(uint16_t)(0x29B1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCCF2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x29B1u,ea)?1u:0u));
        }
        case 0xCCF0u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCCF2u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xCCF2u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xCCF4u; return dd3_static_complete(rt,3u);
        }
        case 0xCCF4u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xCCF6u; return dd3_static_complete(rt,5u);
        }
        case 0xCCF6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xCCF7u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCCF9u; return dd3_static_complete(rt,3u);
        }
        case 0xCCF9u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCCFBu; return dd3_static_complete(rt,2u);
        }
        case 0xCCFBu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xCCFDu; return dd3_static_complete(rt,2u);
        }
        case 0xCCFDu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCCFFu,0xCD2Bu)) c++; rt->state.cpu.pc=0xCD2Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCCFFu; return dd3_static_complete(rt,2u);
        }
        case 0xCCFFu: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD01u; return dd3_static_complete(rt,3u);
        }
        case 0xCD01u: {
            uint8_t v=0xC0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xCD03u; return dd3_static_complete(rt,2u);
        }
        case 0xCD03u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCD05u,0xCD2Bu)) c++; rt->state.cpu.pc=0xCD2Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCD05u; return dd3_static_complete(rt,2u);
        }
        case 0xCD05u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD07u; return dd3_static_complete(rt,3u);
        }
        case 0xCD07u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD08u; return dd3_static_complete(rt,3u);
        }
        case 0xCD08u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD09u; return dd3_static_complete(rt,2u);
        }
        case 0xCD09u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD0Au; return dd3_static_complete(rt,3u);
        }
        case 0xCD0Au: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD0Cu; return dd3_static_complete(rt,3u);
        }
        case 0xCD0Cu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xCD0Du; return dd3_static_complete(rt,2u);
        }
        case 0xCD0Du: {
            uint8_t v=0xC0u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xCD0Fu; return dd3_static_complete(rt,2u);
        }
        case 0xCD0Fu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD11u; return dd3_static_complete(rt,3u);
        }
        case 0xCD11u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD13u; return dd3_static_complete(rt,3u);
        }
        case 0xCD13u: {
            uint8_t v=0x23u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xCD15u; return dd3_static_complete(rt,2u);
        }
        case 0xCD15u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCD17u,0xCD1Eu)) c++; rt->state.cpu.pc=0xCD1Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCD17u; return dd3_static_complete(rt,2u);
        }
        case 0xCD17u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xCD18u; return dd3_static_complete(rt,2u);
        }
        case 0xCD18u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD1Au; return dd3_static_complete(rt,2u);
        }
        case 0xCD1Au: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xCD1Cu; return dd3_static_complete(rt,3u);
        }
        case 0xCD1Cu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD1Eu; return dd3_static_complete(rt,3u);
        }
        case 0xCD1Eu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD20u; return dd3_static_complete(rt,3u);
        }
        case 0xCD20u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xCD21u; return dd3_static_complete(rt,2u);
        }
        case 0xCD21u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD23u; return dd3_static_complete(rt,3u);
        }
        case 0xCD23u: {
            dd3_static_write8(rt,(uint16_t)(0x060Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xCD26u; return dd3_static_complete(rt,5u);
        }
        case 0xCD26u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD27u; return dd3_static_complete(rt,4u);
        }
        case 0xCD27u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xCD28u; return dd3_static_complete(rt,2u);
        }
        case 0xCD28u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD29u; return dd3_static_complete(rt,4u);
        }
        case 0xCD29u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD2Bu; return dd3_static_complete(rt,3u);
        }
        case 0xCD2Bu: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD2Du; return dd3_static_complete(rt,3u);
        }
        case 0xCD2Du: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD30u; return dd3_static_complete(rt,4u);
        }
        case 0xCD30u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD32u; return dd3_static_complete(rt,3u);
        }
        case 0xCD32u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD35u; return dd3_static_complete(rt,4u);
        }
        case 0xCD35u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD37u; return dd3_static_complete(rt,3u);
        }
        case 0xCD37u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD3Au; return dd3_static_complete(rt,4u);
        }
        case 0xCD3Au: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xCD3Bu; return dd3_static_complete(rt,2u);
        }
        case 0xCD3Bu: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD3Du; return dd3_static_complete(rt,3u);
        }
        case 0xCD3Du: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xCD3Fu; return dd3_static_complete(rt,2u);
        }
        case 0xCD3Fu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD41u; return dd3_static_complete(rt,3u);
        }
        case 0xCD41u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD43u; return dd3_static_complete(rt,3u);
        }
        case 0xCD43u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xCD45u; return dd3_static_complete(rt,2u);
        }
        case 0xCD45u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD47u; return dd3_static_complete(rt,3u);
        }
        case 0xCD47u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xCD48u: {
            uint16_t ea=0x06AFu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xCD4Bu; return dd3_static_complete(rt,6u);
        }
        case 0xCD4Bu: {
            uint16_t ea=0x06AFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD4Eu; return dd3_static_complete(rt,4u);
        }
        case 0xCD4Eu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD50u; return dd3_static_complete(rt,2u);
        }
        case 0xCD50u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCD52u,0xCDA1u)) c++; rt->state.cpu.pc=0xCDA1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCD52u; return dd3_static_complete(rt,2u);
        }
        case 0xCD52u: {
            uint16_t ea=0x06AEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD55u; return dd3_static_complete(rt,4u);
        }
        case 0xCD55u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCD57u,0xCDA1u)) c++; rt->state.cpu.pc=0xCDA1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCD57u; return dd3_static_complete(rt,2u);
        }
        case 0xCD57u: {
            uint16_t ea=0x06AEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD5Au; return dd3_static_complete(rt,4u);
        }
        case 0xCD5Au: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD5Cu; return dd3_static_complete(rt,2u);
        }
        case 0xCD5Cu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xCD5Eu; return dd3_static_complete(rt,2u);
        }
        case 0xCD5Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCD60u,0xCD6Bu)) c++; rt->state.cpu.pc=0xCD6Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCD60u; return dd3_static_complete(rt,2u);
        }
        case 0xCD60u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD62u; return dd3_static_complete(rt,3u);
        }
        case 0xCD62u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xCD63u; return dd3_static_complete(rt,2u);
        }
        case 0xCD63u: {
            uint8_t v=0xB0u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xCD65u; return dd3_static_complete(rt,2u);
        }
        case 0xCD65u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD67u; return dd3_static_complete(rt,3u);
        }
        case 0xCD67u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xCD69u; return dd3_static_complete(rt,2u);
        }
        case 0xCD69u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCD6Bu,0xCDA1u)) c++; rt->state.cpu.pc=0xCDA1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCD6Bu; return dd3_static_complete(rt,2u);
        }
        case 0xCD6Bu: {
            uint16_t ea=0x06ADu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD6Eu; return dd3_static_complete(rt,4u);
        }
        case 0xCD6Eu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xCD70u,0xCD75u)) c++; rt->state.cpu.pc=0xCD75u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCD70u; return dd3_static_complete(rt,2u);
        }
        case 0xCD70u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD72u; return dd3_static_complete(rt,2u);
        }
        case 0xCD72u: {
            dd3_static_write8(rt,0x06ADu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD75u; return dd3_static_complete(rt,4u);
        }
        case 0xCD75u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xCD77u; return dd3_static_complete(rt,2u);
        }
        case 0xCD77u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCD79u,0xCD7Eu)) c++; rt->state.cpu.pc=0xCD7Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCD79u; return dd3_static_complete(rt,2u);
        }
        case 0xCD79u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD7Bu; return dd3_static_complete(rt,2u);
        }
        case 0xCD7Bu: {
            dd3_static_write8(rt,0x06ADu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD7Eu; return dd3_static_complete(rt,4u);
        }
        case 0xCD7Eu: {
            uint16_t ea=0x06AEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD81u; return dd3_static_complete(rt,4u);
        }
        case 0xCD81u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD83u; return dd3_static_complete(rt,2u);
        }
        case 0xCD83u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD85u; return dd3_static_complete(rt,3u);
        }
        case 0xCD85u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD86u; return dd3_static_complete(rt,2u);
        }
        case 0xCD86u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xCD87u; return dd3_static_complete(rt,2u);
        }
        case 0xCD87u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xCD89u; return dd3_static_complete(rt,3u);
        }
        case 0xCD89u: {
            uint16_t ea=0x06ADu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xCD8Cu; return dd3_static_complete(rt,4u);
        }
        case 0xCD8Cu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xCD8Du; return dd3_static_complete(rt,2u);
        }
        case 0xCD8Du: {
            uint16_t ea=(uint16_t)(0xCD9Fu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD90u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xCD9Fu,ea)?1u:0u));
        }
        case 0xCD90u: {
            dd3_static_write8(rt,0x04DDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCD93u; return dd3_static_complete(rt,4u);
        }
        case 0xCD93u: {
            uint16_t ea=0x06ADu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xCD96u; return dd3_static_complete(rt,6u);
        }
        case 0xCD96u: {
            uint16_t ea=0x06AEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCD99u; return dd3_static_complete(rt,4u);
        }
        case 0xCD99u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xCD9Bu,0xCDA1u)) c++; rt->state.cpu.pc=0xCDA1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCD9Bu; return dd3_static_complete(rt,2u);
        }
        case 0xCD9Bu: {
            uint16_t ea=0x06ADu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xCD9Eu; return dd3_static_complete(rt,6u);
        }
        case 0xCD9Eu: {
            uint16_t ea=0x06ADu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xCDA1u; return dd3_static_complete(rt,6u);
        }
        case 0xCDA1u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xCDB4u: {
            uint16_t ea=0x0308u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCDB7u; return dd3_static_complete(rt,4u);
        }
        case 0xCDB7u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCDB9u,0xCDBFu)) c++; rt->state.cpu.pc=0xCDBFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCDB9u; return dd3_static_complete(rt,2u);
        }
        case 0xCDB9u: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCDBBu; return dd3_static_complete(rt,3u);
        }
        case 0xCDBBu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xCDBDu; return dd3_static_complete(rt,2u);
        }
        case 0xCDBDu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCDBFu,0xCDC0u)) c++; rt->state.cpu.pc=0xCDC0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCDBFu; return dd3_static_complete(rt,2u);
        }
        case 0xCDBFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xCDC0u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCDC2u; return dd3_static_complete(rt,3u);
        }
        case 0xCDC2u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCDC3u; return dd3_static_complete(rt,3u);
        }
        case 0xCDC3u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCDC5u; return dd3_static_complete(rt,3u);
        }
        case 0xCDC5u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCDC6u; return dd3_static_complete(rt,3u);
        }
        case 0xCDC6u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCDC8u; return dd3_static_complete(rt,2u);
        }
        case 0xCDC8u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.y);
            rt->state.cpu.pc=0xCDCAu; return dd3_static_complete(rt,3u);
        }
        case 0xCDCAu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCDCCu; return dd3_static_complete(rt,2u);
        }
        case 0xCDCCu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xCDCEu; return dd3_static_complete(rt,3u);
        }
        case 0xCDCEu: {
            uint8_t v=0x03u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCDD0u; return dd3_static_complete(rt,2u);
        }
        case 0xCDD0u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCDD2u; return dd3_static_complete(rt,4u);
        }
        case 0xCDD2u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xCDD4u,0xCDECu)) c++; rt->state.cpu.pc=0xCDECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCDD4u; return dd3_static_complete(rt,2u);
        }
        case 0xCDD4u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xCDD5u; return dd3_static_complete(rt,2u);
        }
        case 0xCDD5u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCDD7u; return dd3_static_complete(rt,4u);
        }
        case 0xCDD7u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCDD9u; return dd3_static_complete(rt,2u);
        }
        case 0xCDD9u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCDDBu,0xCDECu)) c++; rt->state.cpu.pc=0xCDECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCDDBu; return dd3_static_complete(rt,2u);
        }
        case 0xCDDBu: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCDDDu; return dd3_static_complete(rt,4u);
        }
        case 0xCDDDu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xCDDEu; return dd3_static_complete(rt,2u);
        }
        case 0xCDDEu: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xCDE0u; return dd3_static_complete(rt,2u);
        }
        case 0xCDE0u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xCDE2u; return dd3_static_complete(rt,3u);
        }
        case 0xCDE2u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCDE4u,0xCDE6u)) c++; rt->state.cpu.pc=0xCDE6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCDE4u; return dd3_static_complete(rt,2u);
        }
        case 0xCDE4u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCDE6u; return dd3_static_complete(rt,3u);
        }
        case 0xCDE6u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xCDE8u; return dd3_static_complete(rt,3u);
        }
        case 0xCDE8u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCDEAu,0xCDECu)) c++; rt->state.cpu.pc=0xCDECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCDEAu; return dd3_static_complete(rt,2u);
        }
        case 0xCDEAu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xCDECu; return dd3_static_complete(rt,3u);
        }
        case 0xCDECu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCDEDu; return dd3_static_complete(rt,2u);
        }
        case 0xCDEDu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xCDEFu,0xCDD0u)) c++; rt->state.cpu.pc=0xCDD0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCDEFu; return dd3_static_complete(rt,2u);
        }
        case 0xCDEFu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xCDF1u; return dd3_static_complete(rt,2u);
        }
        case 0xCDF1u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCDF3u,0xCE4Eu)) c++; rt->state.cpu.pc=0xCE4Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCDF3u; return dd3_static_complete(rt,2u);
        }
        case 0xCDF3u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCDF5u; return dd3_static_complete(rt,3u);
        }
        case 0xCDF5u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xCDF6u; return dd3_static_complete(rt,2u);
        }
        case 0xCDF6u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xCDF8u; return dd3_static_complete(rt,3u);
        }
        case 0xCDF8u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCDFAu,0xCE4Eu)) c++; rt->state.cpu.pc=0xCE4Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCDFAu; return dd3_static_complete(rt,2u);
        }
        case 0xCDFAu: {
            uint8_t v=0x14u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xCDFCu; return dd3_static_complete(rt,2u);
        }
        case 0xCDFCu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCDFEu,0xCE4Eu)) c++; rt->state.cpu.pc=0xCE4Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCDFEu; return dd3_static_complete(rt,2u);
        }
        case 0xCDFEu: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCE00u; return dd3_static_complete(rt,2u);
        }
        case 0xCE00u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE02u; return dd3_static_complete(rt,3u);
        }
        case 0xCE02u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCE04u; return dd3_static_complete(rt,2u);
        }
        case 0xCE04u: {
            uint8_t v=0xFCu;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCE06u; return dd3_static_complete(rt,2u);
        }
        case 0xCE06u: {
            uint16_t ea=(uint16_t)(0x0200u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCE09u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0200u,ea)?1u:0u));
        }
        case 0xCE09u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE0Au; return dd3_static_complete(rt,3u);
        }
        case 0xCE0Au: {
            uint16_t ea=(uint16_t)(0x0200u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCE0Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0200u,ea)?1u:0u));
        }
        case 0xCE0Du: {
            dd3_static_write8(rt,(uint16_t)(0x0200u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xCE10u; return dd3_static_complete(rt,5u);
        }
        case 0xCE10u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE11u; return dd3_static_complete(rt,4u);
        }
        case 0xCE11u: {
            dd3_static_write8(rt,(uint16_t)(0x0200u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xCE14u; return dd3_static_complete(rt,5u);
        }
        case 0xCE14u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xCE15u; return dd3_static_complete(rt,2u);
        }
        case 0xCE15u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCE16u; return dd3_static_complete(rt,2u);
        }
        case 0xCE16u: {
            uint16_t ea=(uint16_t)(0x0200u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCE19u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0200u,ea)?1u:0u));
        }
        case 0xCE19u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE1Au; return dd3_static_complete(rt,3u);
        }
        case 0xCE1Au: {
            uint16_t ea=(uint16_t)(0x0200u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCE1Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0200u,ea)?1u:0u));
        }
        case 0xCE1Du: {
            dd3_static_write8(rt,(uint16_t)(0x0200u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xCE20u; return dd3_static_complete(rt,5u);
        }
        case 0xCE20u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE21u; return dd3_static_complete(rt,4u);
        }
        case 0xCE21u: {
            dd3_static_write8(rt,(uint16_t)(0x0200u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xCE24u; return dd3_static_complete(rt,5u);
        }
        case 0xCE24u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCE25u; return dd3_static_complete(rt,2u);
        }
        case 0xCE25u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xCE26u; return dd3_static_complete(rt,2u);
        }
        case 0xCE26u: {
            uint16_t ea=(uint16_t)(0x0200u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCE29u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0200u,ea)?1u:0u));
        }
        case 0xCE29u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE2Au; return dd3_static_complete(rt,3u);
        }
        case 0xCE2Au: {
            uint16_t ea=(uint16_t)(0x0200u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCE2Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0200u,ea)?1u:0u));
        }
        case 0xCE2Du: {
            dd3_static_write8(rt,(uint16_t)(0x0200u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xCE30u; return dd3_static_complete(rt,5u);
        }
        case 0xCE30u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE31u; return dd3_static_complete(rt,4u);
        }
        case 0xCE31u: {
            dd3_static_write8(rt,(uint16_t)(0x0200u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xCE34u; return dd3_static_complete(rt,5u);
        }
        case 0xCE34u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCE35u; return dd3_static_complete(rt,2u);
        }
        case 0xCE35u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xCE36u; return dd3_static_complete(rt,2u);
        }
        case 0xCE36u: {
            uint16_t ea=(uint16_t)(0x0200u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCE39u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0200u,ea)?1u:0u));
        }
        case 0xCE39u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE3Au; return dd3_static_complete(rt,3u);
        }
        case 0xCE3Au: {
            uint16_t ea=(uint16_t)(0x0200u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCE3Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0200u,ea)?1u:0u));
        }
        case 0xCE3Du: {
            dd3_static_write8(rt,(uint16_t)(0x0200u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xCE40u; return dd3_static_complete(rt,5u);
        }
        case 0xCE40u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE41u; return dd3_static_complete(rt,4u);
        }
        case 0xCE41u: {
            dd3_static_write8(rt,(uint16_t)(0x0200u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xCE44u; return dd3_static_complete(rt,5u);
        }
        case 0xCE44u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCE45u; return dd3_static_complete(rt,2u);
        }
        case 0xCE45u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE46u; return dd3_static_complete(rt,2u);
        }
        case 0xCE46u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xCE47u; return dd3_static_complete(rt,2u);
        }
        case 0xCE47u: {
            uint8_t v=0x07u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xCE49u; return dd3_static_complete(rt,2u);
        }
        case 0xCE49u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xCE4Au; return dd3_static_complete(rt,2u);
        }
        case 0xCE4Au: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xCE4Cu; return dd3_static_complete(rt,5u);
        }
        case 0xCE4Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCE4Eu,0xCE06u)) c++; rt->state.cpu.pc=0xCE06u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCE4Eu; return dd3_static_complete(rt,2u);
        }
        case 0xCE4Eu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE4Fu; return dd3_static_complete(rt,4u);
        }
        case 0xCE4Fu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE51u; return dd3_static_complete(rt,3u);
        }
        case 0xCE51u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE52u; return dd3_static_complete(rt,4u);
        }
        case 0xCE52u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCE54u; return dd3_static_complete(rt,3u);
        }
        case 0xCE54u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xCEE8u: {
            uint16_t ea=0x068Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCEEBu; return dd3_static_complete(rt,4u);
        }
        case 0xCEEBu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xCEEDu,0xCF56u)) c++; rt->state.cpu.pc=0xCF56u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCEEDu; return dd3_static_complete(rt,2u);
        }
        case 0xCEEDu: {
            uint8_t v=0x38u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCEEFu; return dd3_static_complete(rt,2u);
        }
        case 0xCEEFu: {
            dd3_static_push8(rt,(uint8_t)(0xCEF1u>>8)); dd3_static_push8(rt,(uint8_t)0xCEF1u);
            rt->state.cpu.pc=0xD97Cu; return dd3_static_complete(rt,6u);
        }
        case 0xCEF2u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCEF4u,0xCF56u)) c++; rt->state.cpu.pc=0xCF56u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCEF4u; return dd3_static_complete(rt,2u);
        }
        case 0xCEF4u: {
            uint16_t ea=0x068Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCEF7u; return dd3_static_complete(rt,4u);
        }
        case 0xCEF7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCEF9u,0xCF2Au)) c++; rt->state.cpu.pc=0xCF2Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCEF9u; return dd3_static_complete(rt,2u);
        }
        case 0xCEF9u: {
            uint16_t ea=0x068Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCEFCu; return dd3_static_complete(rt,4u);
        }
        case 0xCEFCu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xCEFEu,0xCF03u)) c++; rt->state.cpu.pc=0xCF03u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCEFEu; return dd3_static_complete(rt,2u);
        }
        case 0xCEFEu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF00u; return dd3_static_complete(rt,2u);
        }
        case 0xCF00u: {
            dd3_static_write8(rt,0x068Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF03u; return dd3_static_complete(rt,4u);
        }
        case 0xCF03u: {
            uint16_t ea=0x068Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF06u; return dd3_static_complete(rt,4u);
        }
        case 0xCF06u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF08u; return dd3_static_complete(rt,2u);
        }
        case 0xCF08u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCF0Au,0xCF0Du)) c++; rt->state.cpu.pc=0xCF0Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCF0Au; return dd3_static_complete(rt,2u);
        }
        case 0xCF0Au: {
            dd3_static_push8(rt,(uint8_t)(0xCF0Cu>>8)); dd3_static_push8(rt,(uint8_t)0xCF0Cu);
            rt->state.cpu.pc=0xCF57u; return dd3_static_complete(rt,6u);
        }
        case 0xCF0Du: {
            uint16_t ea=0x068Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF10u; return dd3_static_complete(rt,4u);
        }
        case 0xCF10u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xCF11u; return dd3_static_complete(rt,2u);
        }
        case 0xCF11u: {
            uint8_t v=0x08u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xCF13u; return dd3_static_complete(rt,2u);
        }
        case 0xCF13u: {
            dd3_static_write8(rt,0x068Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF16u; return dd3_static_complete(rt,4u);
        }
        case 0xCF16u: {
            uint8_t v=0x4Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xCF18u; return dd3_static_complete(rt,2u);
        }
        case 0xCF18u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCF1Au,0xCF56u)) c++; rt->state.cpu.pc=0xCF56u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCF1Au; return dd3_static_complete(rt,2u);
        }
        case 0xCF1Au: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF1Cu; return dd3_static_complete(rt,2u);
        }
        case 0xCF1Cu: {
            dd3_static_write8(rt,0x068Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF1Fu; return dd3_static_complete(rt,4u);
        }
        case 0xCF1Fu: {
            uint16_t ea=0x068Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF22u; return dd3_static_complete(rt,4u);
        }
        case 0xCF22u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF24u; return dd3_static_complete(rt,2u);
        }
        case 0xCF24u: {
            dd3_static_write8(rt,0x068Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF27u; return dd3_static_complete(rt,4u);
        }
        case 0xCF27u: {
            rt->state.cpu.pc=0xCF56u; return dd3_static_complete(rt,3u);
        }
        case 0xCF2Au: {
            uint16_t ea=0x068Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF2Du; return dd3_static_complete(rt,4u);
        }
        case 0xCF2Du: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xCF2Fu,0xCF34u)) c++; rt->state.cpu.pc=0xCF34u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCF2Fu; return dd3_static_complete(rt,2u);
        }
        case 0xCF2Fu: {
            uint8_t v=0x30u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF31u; return dd3_static_complete(rt,2u);
        }
        case 0xCF31u: {
            dd3_static_write8(rt,0x068Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF34u; return dd3_static_complete(rt,4u);
        }
        case 0xCF34u: {
            uint16_t ea=0x068Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF37u; return dd3_static_complete(rt,4u);
        }
        case 0xCF37u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF39u; return dd3_static_complete(rt,2u);
        }
        case 0xCF39u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCF3Bu,0xCF3Eu)) c++; rt->state.cpu.pc=0xCF3Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCF3Bu; return dd3_static_complete(rt,2u);
        }
        case 0xCF3Bu: {
            dd3_static_push8(rt,(uint8_t)(0xCF3Du>>8)); dd3_static_push8(rt,(uint8_t)0xCF3Du);
            rt->state.cpu.pc=0xCF57u; return dd3_static_complete(rt,6u);
        }
        case 0xCF3Eu: {
            uint16_t ea=0x068Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF41u; return dd3_static_complete(rt,4u);
        }
        case 0xCF41u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xCF42u; return dd3_static_complete(rt,2u);
        }
        case 0xCF42u: {
            uint8_t v=0x08u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xCF44u; return dd3_static_complete(rt,2u);
        }
        case 0xCF44u: {
            dd3_static_write8(rt,0x068Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF47u; return dd3_static_complete(rt,4u);
        }
        case 0xCF47u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCF49u,0xCF56u)) c++; rt->state.cpu.pc=0xCF56u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCF49u; return dd3_static_complete(rt,2u);
        }
        case 0xCF49u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF4Bu; return dd3_static_complete(rt,2u);
        }
        case 0xCF4Bu: {
            dd3_static_write8(rt,0x068Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF4Eu; return dd3_static_complete(rt,4u);
        }
        case 0xCF4Eu: {
            uint16_t ea=0x068Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF51u; return dd3_static_complete(rt,4u);
        }
        case 0xCF51u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF53u; return dd3_static_complete(rt,2u);
        }
        case 0xCF53u: {
            dd3_static_write8(rt,0x068Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF56u; return dd3_static_complete(rt,4u);
        }
        case 0xCF56u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xCF57u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF59u; return dd3_static_complete(rt,2u);
        }
        case 0xCF59u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF5Bu; return dd3_static_complete(rt,3u);
        }
        case 0xCF5Bu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF5Du; return dd3_static_complete(rt,3u);
        }
        case 0xCF5Du: {
            uint16_t ea=0x04DDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF60u; return dd3_static_complete(rt,4u);
        }
        case 0xCF60u: {
            dd3_static_write8(rt,0x04DFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF63u; return dd3_static_complete(rt,4u);
        }
        case 0xCF63u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF64u; return dd3_static_complete(rt,2u);
        }
        case 0xCF64u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF65u; return dd3_static_complete(rt,2u);
        }
        case 0xCF65u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF66u; return dd3_static_complete(rt,2u);
        }
        case 0xCF66u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF67u; return dd3_static_complete(rt,2u);
        }
        case 0xCF67u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF69u; return dd3_static_complete(rt,3u);
        }
        case 0xCF69u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xCF6Bu; return dd3_static_complete(rt,5u);
        }
        case 0xCF6Bu: {
            uint8_t v=0x90u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF6Du; return dd3_static_complete(rt,2u);
        }
        case 0xCF6Du: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xCF6Eu; return dd3_static_complete(rt,2u);
        }
        case 0xCF6Eu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xCF70u; return dd3_static_complete(rt,3u);
        }
        case 0xCF70u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF72u; return dd3_static_complete(rt,3u);
        }
        case 0xCF72u: {
            uint8_t v=0xD9u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF74u; return dd3_static_complete(rt,2u);
        }
        case 0xCF74u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xCF76u; return dd3_static_complete(rt,3u);
        }
        case 0xCF76u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xCF78u; return dd3_static_complete(rt,3u);
        }
        case 0xCF78u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF7Bu; return dd3_static_complete(rt,4u);
        }
        case 0xCF7Bu: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF7Du; return dd3_static_complete(rt,2u);
        }
        case 0xCF7Du: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xCF80u; return dd3_static_complete(rt,5u);
        }
        case 0xCF80u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCF81u; return dd3_static_complete(rt,2u);
        }
        case 0xCF81u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF83u; return dd3_static_complete(rt,2u);
        }
        case 0xCF83u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xCF86u; return dd3_static_complete(rt,5u);
        }
        case 0xCF86u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCF87u; return dd3_static_complete(rt,2u);
        }
        case 0xCF87u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF89u; return dd3_static_complete(rt,2u);
        }
        case 0xCF89u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xCF8Cu; return dd3_static_complete(rt,5u);
        }
        case 0xCF8Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCF8Du; return dd3_static_complete(rt,2u);
        }
        case 0xCF8Du: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF8Fu; return dd3_static_complete(rt,2u);
        }
        case 0xCF8Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xCF92u; return dd3_static_complete(rt,5u);
        }
        case 0xCF92u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCF93u; return dd3_static_complete(rt,2u);
        }
        case 0xCF93u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF95u; return dd3_static_complete(rt,2u);
        }
        case 0xCF95u: {
            uint16_t ea=0x068Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF98u; return dd3_static_complete(rt,4u);
        }
        case 0xCF98u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCF9Au,0xCF9Fu)) c++; rt->state.cpu.pc=0xCF9Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCF9Au; return dd3_static_complete(rt,2u);
        }
        case 0xCF9Au: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCF9Cu; return dd3_static_complete(rt,2u);
        }
        case 0xCF9Cu: {
            rt->state.cpu.pc=0xCFB1u; return dd3_static_complete(rt,3u);
        }
        case 0xCF9Fu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCFA1u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xCFA1u: {
            uint16_t ea=0x068Fu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xCFA4u; return dd3_static_complete(rt,4u);
        }
        case 0xCFA4u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCFA6u,0xCFB1u)) c++; rt->state.cpu.pc=0xCFB1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCFA6u; return dd3_static_complete(rt,2u);
        }
        case 0xCFA6u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCFA8u; return dd3_static_complete(rt,2u);
        }
        case 0xCFA8u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCFAAu; return dd3_static_complete(rt,3u);
        }
        case 0xCFAAu: {
            uint16_t ea=0x068Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCFADu; return dd3_static_complete(rt,4u);
        }
        case 0xCFADu: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xCFAFu; return dd3_static_complete(rt,2u);
        }
        case 0xCFAFu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCFB1u; return dd3_static_complete(rt,3u);
        }
        case 0xCFB1u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xCFB4u; return dd3_static_complete(rt,5u);
        }
        case 0xCFB4u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCFB5u; return dd3_static_complete(rt,2u);
        }
        case 0xCFB5u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xCFB6u; return dd3_static_complete(rt,2u);
        }
        case 0xCFB6u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xCFB8u; return dd3_static_complete(rt,2u);
        }
        case 0xCFB8u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCFBAu,0xCF95u)) c++; rt->state.cpu.pc=0xCF95u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCFBAu; return dd3_static_complete(rt,2u);
        }
        case 0xCFBAu: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xCFBDu; return dd3_static_complete(rt,4u);
        }
        case 0xCFBDu: {
            uint16_t ea=0x068Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCFC0u; return dd3_static_complete(rt,4u);
        }
        case 0xCFC0u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCFC2u; return dd3_static_complete(rt,2u);
        }
        case 0xCFC2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCFC4u,0xD00Au)) c++; rt->state.cpu.pc=0xD00Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCFC4u; return dd3_static_complete(rt,2u);
        }
        case 0xCFC4u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCFC7u; return dd3_static_complete(rt,4u);
        }
        case 0xCFC7u: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCFC9u; return dd3_static_complete(rt,2u);
        }
        case 0xCFC9u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xCFCCu; return dd3_static_complete(rt,5u);
        }
        case 0xCFCCu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCFCDu; return dd3_static_complete(rt,2u);
        }
        case 0xCFCDu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCFCFu; return dd3_static_complete(rt,2u);
        }
        case 0xCFCFu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xCFD2u; return dd3_static_complete(rt,5u);
        }
        case 0xCFD2u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCFD3u; return dd3_static_complete(rt,2u);
        }
        case 0xCFD3u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCFD5u; return dd3_static_complete(rt,2u);
        }
        case 0xCFD5u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xCFD8u; return dd3_static_complete(rt,5u);
        }
        case 0xCFD8u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCFD9u; return dd3_static_complete(rt,2u);
        }
        case 0xCFD9u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCFDBu; return dd3_static_complete(rt,2u);
        }
        case 0xCFDBu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xCFDEu; return dd3_static_complete(rt,5u);
        }
        case 0xCFDEu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xCFDFu; return dd3_static_complete(rt,2u);
        }
        case 0xCFDFu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCFE1u; return dd3_static_complete(rt,2u);
        }
        case 0xCFE1u: {
            uint16_t ea=0x068Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCFE4u; return dd3_static_complete(rt,4u);
        }
        case 0xCFE4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xCFE6u,0xCFEBu)) c++; rt->state.cpu.pc=0xCFEBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCFE6u; return dd3_static_complete(rt,2u);
        }
        case 0xCFE6u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCFE8u; return dd3_static_complete(rt,2u);
        }
        case 0xCFE8u: {
            rt->state.cpu.pc=0xCFFEu; return dd3_static_complete(rt,3u);
        }
        case 0xCFEBu: {
            uint16_t ea=(uint16_t)(0x06C4u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCFEEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06C4u,ea)?1u:0u));
        }
        case 0xCFEEu: {
            uint16_t ea=0x068Fu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xCFF1u; return dd3_static_complete(rt,4u);
        }
        case 0xCFF1u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xCFF3u,0xCFFEu)) c++; rt->state.cpu.pc=0xCFFEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xCFF3u; return dd3_static_complete(rt,2u);
        }
        case 0xCFF3u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCFF5u; return dd3_static_complete(rt,2u);
        }
        case 0xCFF5u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xCFF7u; return dd3_static_complete(rt,3u);
        }
        case 0xCFF7u: {
            uint16_t ea=0x068Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xCFFAu; return dd3_static_complete(rt,4u);
        }
        case 0xCFFAu: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xCFFCu; return dd3_static_complete(rt,2u);
        }
        case 0xCFFCu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xCFFEu; return dd3_static_complete(rt,3u);
        }
        case 0xCFFEu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xD001u; return dd3_static_complete(rt,5u);
        }
        case 0xD001u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD002u; return dd3_static_complete(rt,2u);
        }
        case 0xD002u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD003u; return dd3_static_complete(rt,2u);
        }
        case 0xD003u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xD005u; return dd3_static_complete(rt,2u);
        }
        case 0xD005u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD007u,0xCFE1u)) c++; rt->state.cpu.pc=0xCFE1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD007u; return dd3_static_complete(rt,2u);
        }
        case 0xD007u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xD00Au; return dd3_static_complete(rt,4u);
        }
        case 0xD00Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD00Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD00Fu; return dd3_static_complete(rt,2u);
        }
        case 0xD00Fu: {
            dd3_static_write8(rt,(uint16_t)((0x00u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xD011u; return dd3_static_complete(rt,4u);
        }
        case 0xD011u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD012u; return dd3_static_complete(rt,2u);
        }
        case 0xD012u: {
            uint8_t v=0x94u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xD014u; return dd3_static_complete(rt,2u);
        }
        case 0xD014u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD016u,0xD00Fu)) c++; rt->state.cpu.pc=0xD00Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD016u; return dd3_static_complete(rt,2u);
        }
        case 0xD016u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD03Cu: {
            uint16_t ea=0x04F5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD03Fu; return dd3_static_complete(rt,4u);
        }
        case 0xD03Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD041u,0xD051u)) c++; rt->state.cpu.pc=0xD051u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD041u; return dd3_static_complete(rt,2u);
        }
        case 0xD041u: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD043u; return dd3_static_complete(rt,2u);
        }
        case 0xD043u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xD045u; return dd3_static_complete(rt,2u);
        }
        case 0xD045u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD047u,0xD051u)) c++; rt->state.cpu.pc=0xD051u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD047u; return dd3_static_complete(rt,2u);
        }
        case 0xD047u: {
            dd3_static_write8(rt,(uint16_t)(0x0200u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xD04Au; return dd3_static_complete(rt,5u);
        }
        case 0xD04Au: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD04Bu; return dd3_static_complete(rt,2u);
        }
        case 0xD04Bu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD04Cu; return dd3_static_complete(rt,2u);
        }
        case 0xD04Cu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD04Du; return dd3_static_complete(rt,2u);
        }
        case 0xD04Du: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD04Eu; return dd3_static_complete(rt,2u);
        }
        case 0xD04Eu: {
            rt->state.cpu.pc=0xD043u; return dd3_static_complete(rt,3u);
        }
        case 0xD051u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD052u: {
            uint8_t v=0xFCu;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD054u; return dd3_static_complete(rt,2u);
        }
        case 0xD054u: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD056u; return dd3_static_complete(rt,2u);
        }
        case 0xD056u: {
            dd3_static_write8(rt,(uint16_t)(0x0200u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xD059u; return dd3_static_complete(rt,5u);
        }
        case 0xD059u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xD05Bu; return dd3_static_complete(rt,2u);
        }
        case 0xD05Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD05Du,0xD064u)) c++; rt->state.cpu.pc=0xD064u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD05Du; return dd3_static_complete(rt,2u);
        }
        case 0xD05Du: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD05Eu; return dd3_static_complete(rt,2u);
        }
        case 0xD05Eu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD05Fu; return dd3_static_complete(rt,2u);
        }
        case 0xD05Fu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD060u; return dd3_static_complete(rt,2u);
        }
        case 0xD060u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD061u; return dd3_static_complete(rt,2u);
        }
        case 0xD061u: {
            rt->state.cpu.pc=0xD056u; return dd3_static_complete(rt,3u);
        }
        case 0xD064u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD065u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD067u; return dd3_static_complete(rt,2u);
        }
        case 0xD067u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD069u; return dd3_static_complete(rt,2u);
        }
        case 0xD069u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD06Bu; return dd3_static_complete(rt,2u);
        }
        case 0xD06Bu: {
            dd3_static_push8(rt,(uint8_t)(0xD06Du>>8)); dd3_static_push8(rt,(uint8_t)0xD06Du);
            rt->state.cpu.pc=0xFD33u; return dd3_static_complete(rt,6u);
        }
        case 0xD06Eu: {
            uint8_t v=0x24u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD070u; return dd3_static_complete(rt,2u);
        }
        case 0xD070u: {
            dd3_static_push8(rt,(uint8_t)(0xD072u>>8)); dd3_static_push8(rt,(uint8_t)0xD072u);
            rt->state.cpu.pc=0xFD33u; return dd3_static_complete(rt,6u);
        }
        case 0xD073u: {
            uint8_t v=0x28u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD075u; return dd3_static_complete(rt,2u);
        }
        case 0xD075u: {
            dd3_static_push8(rt,(uint8_t)(0xD077u>>8)); dd3_static_push8(rt,(uint8_t)0xD077u);
            rt->state.cpu.pc=0xFD33u; return dd3_static_complete(rt,6u);
        }
        case 0xD078u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD07Fu: {
            uint16_t ea=0x9Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD081u; return dd3_static_complete(rt,3u);
        }
        case 0xD081u: {
            uint8_t v=0xF9u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD083u; return dd3_static_complete(rt,2u);
        }
        case 0xD083u: {
            dd3_static_write8(rt,0x9Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD085u; return dd3_static_complete(rt,3u);
        }
        case 0xD085u: {
            dd3_static_write8(rt,0x2001u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD088u; return dd3_static_complete(rt,4u);
        }
        case 0xD088u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD089u: {
            dd3_static_push8(rt,(uint8_t)(0xD08Bu>>8)); dd3_static_push8(rt,(uint8_t)0xD08Bu);
            rt->state.cpu.pc=0xFCF6u; return dd3_static_complete(rt,6u);
        }
        case 0xD08Cu: {
            dd3_static_push8(rt,(uint8_t)(0xD08Eu>>8)); dd3_static_push8(rt,(uint8_t)0xD08Eu);
            rt->state.cpu.pc=0xD065u; return dd3_static_complete(rt,6u);
        }
        case 0xD08Fu: {
            dd3_static_push8(rt,(uint8_t)(0xD091u>>8)); dd3_static_push8(rt,(uint8_t)0xD091u);
            rt->state.cpu.pc=0xD052u; return dd3_static_complete(rt,6u);
        }
        case 0xD092u: {
            dd3_static_push8(rt,(uint8_t)(0xD094u>>8)); dd3_static_push8(rt,(uint8_t)0xD094u);
            rt->state.cpu.pc=0xFE75u; return dd3_static_complete(rt,6u);
        }
        case 0xD095u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD17Fu: {
            uint16_t ea=0xA0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD181u; return dd3_static_complete(rt,3u);
        }
        case 0xD181u: {
            uint8_t v=0xFCu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD183u; return dd3_static_complete(rt,2u);
        }
        case 0xD183u: {
            uint16_t ea=0x06B2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD186u; return dd3_static_complete(rt,4u);
        }
        case 0xD186u: {
            dd3_static_write8(rt,0xA0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD188u; return dd3_static_complete(rt,3u);
        }
        case 0xD188u: {
            dd3_static_write8(rt,0x2000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD18Bu; return dd3_static_complete(rt,4u);
        }
        case 0xD18Bu: {
            uint16_t ea=0x06B1u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD18Eu; return dd3_static_complete(rt,4u);
        }
        case 0xD18Eu: {
            dd3_static_write8(rt,0x2005u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD191u; return dd3_static_complete(rt,4u);
        }
        case 0xD191u: {
            uint16_t ea=0x06B0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD194u; return dd3_static_complete(rt,4u);
        }
        case 0xD194u: {
            dd3_static_write8(rt,0x2005u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD197u; return dd3_static_complete(rt,4u);
        }
        case 0xD197u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD198u: {
            uint16_t ea=0x3Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD19Au; return dd3_static_complete(rt,3u);
        }
        case 0xD19Au: {
            dd3_static_write8(rt,0x06B2u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD19Du; return dd3_static_complete(rt,4u);
        }
        case 0xD19Du: {
            uint16_t ea=0x9Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD19Fu; return dd3_static_complete(rt,3u);
        }
        case 0xD19Fu: {
            dd3_static_write8(rt,0x06B0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1A2u; return dd3_static_complete(rt,4u);
        }
        case 0xD1A2u: {
            uint16_t ea=0x9Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1A4u; return dd3_static_complete(rt,3u);
        }
        case 0xD1A4u: {
            dd3_static_write8(rt,0x06B1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1A7u; return dd3_static_complete(rt,4u);
        }
        case 0xD1A7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD1B9u: {
            uint8_t v=0x03u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1BBu; return dd3_static_complete(rt,2u);
        }
        case 0xD1BBu: {
            uint16_t ea=(uint16_t)((0x87u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1BDu; return dd3_static_complete(rt,4u);
        }
        case 0xD1BDu: {
            dd3_static_write8(rt,(uint16_t)((0x8Bu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xD1BFu; return dd3_static_complete(rt,4u);
        }
        case 0xD1BFu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD1C0u; return dd3_static_complete(rt,2u);
        }
        case 0xD1C0u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD1C2u,0xD1BBu)) c++; rt->state.cpu.pc=0xD1BBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD1C2u; return dd3_static_complete(rt,2u);
        }
        case 0xD1C2u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1C4u; return dd3_static_complete(rt,3u);
        }
        case 0xD1C4u: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1C6u; return dd3_static_complete(rt,3u);
        }
        case 0xD1C6u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD1C8u,0xD210u)) c++; rt->state.cpu.pc=0xD210u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD1C8u; return dd3_static_complete(rt,2u);
        }
        case 0xD1C8u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1CAu; return dd3_static_complete(rt,3u);
        }
        case 0xD1CAu: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1CCu; return dd3_static_complete(rt,3u);
        }
        case 0xD1CCu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD1CEu,0xD1E0u)) c++; rt->state.cpu.pc=0xD1E0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD1CEu; return dd3_static_complete(rt,2u);
        }
        case 0xD1CEu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1D0u; return dd3_static_complete(rt,2u);
        }
        case 0xD1D0u: {
            uint16_t ea=(uint16_t)(0x003Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1D3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Cu,ea)?1u:0u));
        }
        case 0xD1D3u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD1D5u,0xD1D7u)) c++; rt->state.cpu.pc=0xD1D7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD1D5u; return dd3_static_complete(rt,2u);
        }
        case 0xD1D5u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1D7u; return dd3_static_complete(rt,2u);
        }
        case 0xD1D7u: {
            dd3_static_push8(rt,(uint8_t)(0xD1D9u>>8)); dd3_static_push8(rt,(uint8_t)0xD1D9u);
            rt->state.cpu.pc=0xD211u; return dd3_static_complete(rt,6u);
        }
        case 0xD1DAu: {
            dd3_static_push8(rt,(uint8_t)(0xD1DCu>>8)); dd3_static_push8(rt,(uint8_t)0xD1DCu);
            rt->state.cpu.pc=0xD251u; return dd3_static_complete(rt,6u);
        }
        case 0xD1DDu: {
            rt->state.cpu.pc=0xD1E3u; return dd3_static_complete(rt,3u);
        }
        case 0xD1E0u: {
            dd3_static_push8(rt,(uint8_t)(0xD1E2u>>8)); dd3_static_push8(rt,(uint8_t)0xD1E2u);
            rt->state.cpu.pc=0xD300u; return dd3_static_complete(rt,6u);
        }
        case 0xD1E3u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1E5u; return dd3_static_complete(rt,2u);
        }
        case 0xD1E5u: {
            dd3_static_push8(rt,(uint8_t)(0xD1E7u>>8)); dd3_static_push8(rt,(uint8_t)0xD1E7u);
            rt->state.cpu.pc=0xD5B4u; return dd3_static_complete(rt,6u);
        }
        case 0xD1E8u: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1EAu; return dd3_static_complete(rt,2u);
        }
        case 0xD1EAu: {
            dd3_static_push8(rt,(uint8_t)(0xD1ECu>>8)); dd3_static_push8(rt,(uint8_t)0xD1ECu);
            rt->state.cpu.pc=0xD5B4u; return dd3_static_complete(rt,6u);
        }
        case 0xD1EDu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1EFu; return dd3_static_complete(rt,3u);
        }
        case 0xD1EFu: {
            dd3_static_write8(rt,0x87u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1F1u; return dd3_static_complete(rt,3u);
        }
        case 0xD1F1u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1F3u; return dd3_static_complete(rt,3u);
        }
        case 0xD1F3u: {
            dd3_static_write8(rt,0x88u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1F5u; return dd3_static_complete(rt,3u);
        }
        case 0xD1F5u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1F7u; return dd3_static_complete(rt,3u);
        }
        case 0xD1F7u: {
            dd3_static_write8(rt,0x89u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1F9u; return dd3_static_complete(rt,3u);
        }
        case 0xD1F9u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD1FBu; return dd3_static_complete(rt,3u);
        }
        case 0xD1FBu: {
            dd3_static_write8(rt,0x8Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD1FDu; return dd3_static_complete(rt,3u);
        }
        case 0xD1FDu: {
            dd3_static_push8(rt,(uint8_t)(0xD1FFu>>8)); dd3_static_push8(rt,(uint8_t)0xD1FFu);
            rt->state.cpu.pc=0xD6AEu; return dd3_static_complete(rt,6u);
        }
        case 0xD200u: {
            uint16_t ea=0xFFF6u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD203u; return dd3_static_complete(rt,4u);
        }
        case 0xD203u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD205u; return dd3_static_complete(rt,2u);
        }
        case 0xD205u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD207u,0xD20Du)) c++; rt->state.cpu.pc=0xD20Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD207u; return dd3_static_complete(rt,2u);
        }
        case 0xD207u: {
            dd3_static_push8(rt,(uint8_t)(0xD209u>>8)); dd3_static_push8(rt,(uint8_t)0xD209u);
            rt->state.cpu.pc=0xD52Du; return dd3_static_complete(rt,6u);
        }
        case 0xD20Au: {
            dd3_static_push8(rt,(uint8_t)(0xD20Cu>>8)); dd3_static_push8(rt,(uint8_t)0xD20Cu);
            rt->state.cpu.pc=0xD4CBu; return dd3_static_complete(rt,6u);
        }
        case 0xD20Du: {
            dd3_static_push8(rt,(uint8_t)(0xD20Fu>>8)); dd3_static_push8(rt,(uint8_t)0xD20Fu);
            rt->state.cpu.pc=0xD65Au; return dd3_static_complete(rt,6u);
        }
        case 0xD210u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD211u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD213u; return dd3_static_complete(rt,3u);
        }
        case 0xD213u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD214u; return dd3_static_complete(rt,2u);
        }
        case 0xD214u: {
            uint8_t v=0x40u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD216u; return dd3_static_complete(rt,2u);
        }
        case 0xD216u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD218u; return dd3_static_complete(rt,3u);
        }
        case 0xD218u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD21Au; return dd3_static_complete(rt,3u);
        }
        case 0xD21Au: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD21Cu; return dd3_static_complete(rt,2u);
        }
        case 0xD21Cu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD21Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD21Eu: {
            uint16_t ea=(uint16_t)(0x00B7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD221u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B7u,ea)?1u:0u));
        }
        case 0xD221u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD222u; return dd3_static_complete(rt,2u);
        }
        case 0xD222u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD224u; return dd3_static_complete(rt,3u);
        }
        case 0xD224u: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD227u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0xD227u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD229u; return dd3_static_complete(rt,3u);
        }
        case 0xD229u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD22Bu,0xD22Fu)) c++; rt->state.cpu.pc=0xD22Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD22Bu; return dd3_static_complete(rt,2u);
        }
        case 0xD22Bu: {
            dd3_static_push8(rt,(uint8_t)(0xD22Du>>8)); dd3_static_push8(rt,(uint8_t)0xD22Du);
            rt->state.cpu.pc=0xD2B0u; return dd3_static_complete(rt,6u);
        }
        case 0xD22Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD22Fu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD231u; return dd3_static_complete(rt,3u);
        }
        case 0xD231u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD232u; return dd3_static_complete(rt,2u);
        }
        case 0xD232u: {
            uint8_t v=0xC0u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD234u; return dd3_static_complete(rt,2u);
        }
        case 0xD234u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD236u; return dd3_static_complete(rt,3u);
        }
        case 0xD236u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD238u; return dd3_static_complete(rt,3u);
        }
        case 0xD238u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD23Au; return dd3_static_complete(rt,2u);
        }
        case 0xD23Au: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD23Cu; return dd3_static_complete(rt,3u);
        }
        case 0xD23Cu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD23Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD23Eu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD23Fu; return dd3_static_complete(rt,2u);
        }
        case 0xD23Fu: {
            uint16_t ea=(uint16_t)(0x00B7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD242u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B7u,ea)?1u:0u));
        }
        case 0xD242u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD244u; return dd3_static_complete(rt,3u);
        }
        case 0xD244u: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD247u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0xD247u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD249u,0xD24Du)) c++; rt->state.cpu.pc=0xD24Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD249u; return dd3_static_complete(rt,2u);
        }
        case 0xD249u: {
            dd3_static_push8(rt,(uint8_t)(0xD24Bu>>8)); dd3_static_push8(rt,(uint8_t)0xD24Bu);
            rt->state.cpu.pc=0xD2C8u; return dd3_static_complete(rt,6u);
        }
        case 0xD24Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD24Du: {
            dd3_static_push8(rt,(uint8_t)(0xD24Fu>>8)); dd3_static_push8(rt,(uint8_t)0xD24Fu);
            rt->state.cpu.pc=0xD29Eu; return dd3_static_complete(rt,6u);
        }
        case 0xD250u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD251u: {
            uint16_t ea=(uint16_t)(0x00CBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD254u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00CBu,ea)?1u:0u));
        }
        case 0xD254u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD255u; return dd3_static_complete(rt,2u);
        }
        case 0xD255u: {
            uint16_t ea=(uint16_t)(0x00DFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD258u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00DFu,ea)?1u:0u));
        }
        case 0xD258u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD25Au; return dd3_static_complete(rt,3u);
        }
        case 0xD25Au: {
            uint16_t ea=(uint16_t)(0x00D5u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD25Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00D5u,ea)?1u:0u));
        }
        case 0xD25Du: {
            uint16_t ea=(uint16_t)(0x00E9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD260u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00E9u,ea)?1u:0u));
        }
        case 0xD260u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD262u; return dd3_static_complete(rt,3u);
        }
        case 0xD262u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD264u; return dd3_static_complete(rt,3u);
        }
        case 0xD264u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD265u; return dd3_static_complete(rt,2u);
        }
        case 0xD265u: {
            uint8_t v=0xB0u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD267u; return dd3_static_complete(rt,2u);
        }
        case 0xD267u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD269u; return dd3_static_complete(rt,3u);
        }
        case 0xD269u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD26Bu; return dd3_static_complete(rt,3u);
        }
        case 0xD26Bu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD26Du; return dd3_static_complete(rt,2u);
        }
        case 0xD26Du: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD26Fu; return dd3_static_complete(rt,3u);
        }
        case 0xD26Fu: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD271u; return dd3_static_complete(rt,3u);
        }
        case 0xD271u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD272u; return dd3_static_complete(rt,2u);
        }
        case 0xD272u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD274u; return dd3_static_complete(rt,3u);
        }
        case 0xD274u: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD276u; return dd3_static_complete(rt,3u);
        }
        case 0xD276u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD278u; return dd3_static_complete(rt,3u);
        }
        case 0xD278u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD27Au,0xD27Eu)) c++; rt->state.cpu.pc=0xD27Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD27Au; return dd3_static_complete(rt,2u);
        }
        case 0xD27Au: {
            dd3_static_push8(rt,(uint8_t)(0xD27Cu>>8)); dd3_static_push8(rt,(uint8_t)0xD27Cu);
            rt->state.cpu.pc=0xD2DAu; return dd3_static_complete(rt,6u);
        }
        case 0xD27Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD27Eu: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD280u; return dd3_static_complete(rt,3u);
        }
        case 0xD280u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD281u; return dd3_static_complete(rt,2u);
        }
        case 0xD281u: {
            uint8_t v=0x60u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD283u; return dd3_static_complete(rt,2u);
        }
        case 0xD283u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD285u; return dd3_static_complete(rt,3u);
        }
        case 0xD285u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD287u; return dd3_static_complete(rt,3u);
        }
        case 0xD287u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD289u; return dd3_static_complete(rt,2u);
        }
        case 0xD289u: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD28Bu; return dd3_static_complete(rt,3u);
        }
        case 0xD28Bu: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD28Du; return dd3_static_complete(rt,3u);
        }
        case 0xD28Du: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD28Eu; return dd3_static_complete(rt,2u);
        }
        case 0xD28Eu: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD290u; return dd3_static_complete(rt,3u);
        }
        case 0xD290u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD292u; return dd3_static_complete(rt,3u);
        }
        case 0xD292u: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD294u; return dd3_static_complete(rt,3u);
        }
        case 0xD294u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD296u,0xD29Au)) c++; rt->state.cpu.pc=0xD29Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD296u; return dd3_static_complete(rt,2u);
        }
        case 0xD296u: {
            dd3_static_push8(rt,(uint8_t)(0xD298u>>8)); dd3_static_push8(rt,(uint8_t)0xD298u);
            rt->state.cpu.pc=0xD2F0u; return dd3_static_complete(rt,6u);
        }
        case 0xD299u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD29Au: {
            dd3_static_push8(rt,(uint8_t)(0xD29Cu>>8)); dd3_static_push8(rt,(uint8_t)0xD29Cu);
            rt->state.cpu.pc=0xD2A7u; return dd3_static_complete(rt,6u);
        }
        case 0xD29Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD29Eu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD2A0u; return dd3_static_complete(rt,3u);
        }
        case 0xD2A0u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD2A2u; return dd3_static_complete(rt,3u);
        }
        case 0xD2A2u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD2A4u; return dd3_static_complete(rt,3u);
        }
        case 0xD2A4u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD2A6u; return dd3_static_complete(rt,3u);
        }
        case 0xD2A6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD2A7u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD2A9u; return dd3_static_complete(rt,3u);
        }
        case 0xD2A9u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD2ABu; return dd3_static_complete(rt,3u);
        }
        case 0xD2ABu: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD2ADu; return dd3_static_complete(rt,3u);
        }
        case 0xD2ADu: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD2AFu; return dd3_static_complete(rt,3u);
        }
        case 0xD2AFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD2B0u: {
            uint16_t ea=(uint16_t)(0x00B7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD2B3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B7u,ea)?1u:0u));
        }
        case 0xD2B3u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD2B4u; return dd3_static_complete(rt,2u);
        }
        case 0xD2B4u: {
            uint8_t v=0x40u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD2B6u; return dd3_static_complete(rt,2u);
        }
        case 0xD2B6u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD2B8u; return dd3_static_complete(rt,3u);
        }
        case 0xD2B8u: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD2BBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0xD2BBu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD2BDu; return dd3_static_complete(rt,2u);
        }
        case 0xD2BDu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD2BFu; return dd3_static_complete(rt,3u);
        }
        case 0xD2BFu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD2C1u,0xD2C7u)) c++; rt->state.cpu.pc=0xD2C7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD2C1u; return dd3_static_complete(rt,2u);
        }
        case 0xD2C1u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD2C3u; return dd3_static_complete(rt,2u);
        }
        case 0xD2C3u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD2C5u; return dd3_static_complete(rt,3u);
        }
        case 0xD2C5u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD2C7u; return dd3_static_complete(rt,3u);
        }
        case 0xD2C7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD2C8u: {
            uint16_t ea=(uint16_t)(0x00B7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD2CBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B7u,ea)?1u:0u));
        }
        case 0xD2CBu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD2CCu; return dd3_static_complete(rt,2u);
        }
        case 0xD2CCu: {
            uint8_t v=0xC0u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD2CEu; return dd3_static_complete(rt,2u);
        }
        case 0xD2CEu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD2D0u; return dd3_static_complete(rt,3u);
        }
        case 0xD2D0u: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD2D3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0xD2D3u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD2D5u; return dd3_static_complete(rt,2u);
        }
        case 0xD2D5u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD2D7u; return dd3_static_complete(rt,3u);
        }
        case 0xD2D7u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD2D9u,0xD2C1u)) c++; rt->state.cpu.pc=0xD2C1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD2D9u; return dd3_static_complete(rt,2u);
        }
        case 0xD2D9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD2DAu: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD2DCu; return dd3_static_complete(rt,3u);
        }
        case 0xD2DCu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD2DDu; return dd3_static_complete(rt,2u);
        }
        case 0xD2DDu: {
            uint8_t v=0xB0u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD2DFu; return dd3_static_complete(rt,2u);
        }
        case 0xD2DFu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD2E1u; return dd3_static_complete(rt,3u);
        }
        case 0xD2E1u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD2E3u; return dd3_static_complete(rt,3u);
        }
        case 0xD2E3u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD2E5u; return dd3_static_complete(rt,2u);
        }
        case 0xD2E5u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD2E7u; return dd3_static_complete(rt,3u);
        }
        case 0xD2E7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD2E9u,0xD2EFu)) c++; rt->state.cpu.pc=0xD2EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD2E9u; return dd3_static_complete(rt,2u);
        }
        case 0xD2E9u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD2EBu; return dd3_static_complete(rt,2u);
        }
        case 0xD2EBu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD2EDu; return dd3_static_complete(rt,3u);
        }
        case 0xD2EDu: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD2EFu; return dd3_static_complete(rt,3u);
        }
        case 0xD2EFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD2F0u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD2F2u; return dd3_static_complete(rt,3u);
        }
        case 0xD2F2u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD2F3u; return dd3_static_complete(rt,2u);
        }
        case 0xD2F3u: {
            uint8_t v=0x60u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD2F5u; return dd3_static_complete(rt,2u);
        }
        case 0xD2F5u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD2F7u; return dd3_static_complete(rt,3u);
        }
        case 0xD2F7u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD2F9u; return dd3_static_complete(rt,3u);
        }
        case 0xD2F9u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD2FBu; return dd3_static_complete(rt,2u);
        }
        case 0xD2FBu: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD2FDu; return dd3_static_complete(rt,3u);
        }
        case 0xD2FDu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD2FFu,0xD2E9u)) c++; rt->state.cpu.pc=0xD2E9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD2FFu; return dd3_static_complete(rt,2u);
        }
        case 0xD2FFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD300u: {
            uint16_t ea=0xB7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD302u; return dd3_static_complete(rt,3u);
        }
        case 0xD302u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD303u; return dd3_static_complete(rt,2u);
        }
        case 0xD303u: {
            uint16_t ea=0xB8u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD305u; return dd3_static_complete(rt,3u);
        }
        case 0xD305u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD307u; return dd3_static_complete(rt,3u);
        }
        case 0xD307u: {
            uint16_t ea=0xC1u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD309u; return dd3_static_complete(rt,3u);
        }
        case 0xD309u: {
            uint16_t ea=0xC2u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD30Bu; return dd3_static_complete(rt,3u);
        }
        case 0xD30Bu: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD30Du; return dd3_static_complete(rt,3u);
        }
        case 0xD30Du: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD30Fu,0xD312u)) c++; rt->state.cpu.pc=0xD312u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD30Fu; return dd3_static_complete(rt,2u);
        }
        case 0xD30Fu: {
            dd3_static_push8(rt,(uint8_t)(0xD311u>>8)); dd3_static_push8(rt,(uint8_t)0xD311u);
            rt->state.cpu.pc=0xD369u; return dd3_static_complete(rt,6u);
        }
        case 0xD312u: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD314u; return dd3_static_complete(rt,3u);
        }
        case 0xD314u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD316u,0xD325u)) c++; rt->state.cpu.pc=0xD325u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD316u; return dd3_static_complete(rt,2u);
        }
        case 0xD316u: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD318u; return dd3_static_complete(rt,3u);
        }
        case 0xD318u: {
            uint8_t v=0x7Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xD31Au; return dd3_static_complete(rt,2u);
        }
        case 0xD31Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD31Cu,0xD325u)) c++; rt->state.cpu.pc=0xD325u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD31Cu; return dd3_static_complete(rt,2u);
        }
        case 0xD31Cu: {
            dd3_static_push8(rt,(uint8_t)(0xD31Eu>>8)); dd3_static_push8(rt,(uint8_t)0xD31Eu);
            rt->state.cpu.pc=0xD37Bu; return dd3_static_complete(rt,6u);
        }
        case 0xD31Fu: {
            dd3_static_push8(rt,(uint8_t)(0xD321u>>8)); dd3_static_push8(rt,(uint8_t)0xD321u);
            rt->state.cpu.pc=0xD211u; return dd3_static_complete(rt,6u);
        }
        case 0xD322u: {
            rt->state.cpu.pc=0xD328u; return dd3_static_complete(rt,3u);
        }
        case 0xD325u: {
            dd3_static_push8(rt,(uint8_t)(0xD327u>>8)); dd3_static_push8(rt,(uint8_t)0xD327u);
            rt->state.cpu.pc=0xD29Eu; return dd3_static_complete(rt,6u);
        }
        case 0xD328u: {
            uint16_t ea=0xCBu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD32Au; return dd3_static_complete(rt,3u);
        }
        case 0xD32Au: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD32Bu; return dd3_static_complete(rt,2u);
        }
        case 0xD32Bu: {
            uint16_t ea=0xDFu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD32Du; return dd3_static_complete(rt,3u);
        }
        case 0xD32Du: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD32Fu; return dd3_static_complete(rt,3u);
        }
        case 0xD32Fu: {
            uint16_t ea=0xD5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD331u; return dd3_static_complete(rt,3u);
        }
        case 0xD331u: {
            uint16_t ea=0xE9u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD333u; return dd3_static_complete(rt,3u);
        }
        case 0xD333u: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD335u; return dd3_static_complete(rt,3u);
        }
        case 0xD335u: {
            uint16_t ea=0xCCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD337u; return dd3_static_complete(rt,3u);
        }
        case 0xD337u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD338u; return dd3_static_complete(rt,2u);
        }
        case 0xD338u: {
            uint16_t ea=0xE0u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD33Au; return dd3_static_complete(rt,3u);
        }
        case 0xD33Au: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD33Cu; return dd3_static_complete(rt,3u);
        }
        case 0xD33Cu: {
            uint16_t ea=0xD6u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD33Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD33Eu: {
            uint16_t ea=0xEAu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD340u; return dd3_static_complete(rt,3u);
        }
        case 0xD340u: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD342u; return dd3_static_complete(rt,3u);
        }
        case 0xD342u: {
            uint16_t ea=0xB5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD344u; return dd3_static_complete(rt,3u);
        }
        case 0xD344u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD345u; return dd3_static_complete(rt,2u);
        }
        case 0xD345u: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD347u; return dd3_static_complete(rt,3u);
        }
        case 0xD347u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD349u; return dd3_static_complete(rt,3u);
        }
        case 0xD349u: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD34Bu; return dd3_static_complete(rt,3u);
        }
        case 0xD34Bu: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD34Du; return dd3_static_complete(rt,3u);
        }
        case 0xD34Du: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD34Fu; return dd3_static_complete(rt,3u);
        }
        case 0xD34Fu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD351u,0xD354u)) c++; rt->state.cpu.pc=0xD354u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD351u; return dd3_static_complete(rt,2u);
        }
        case 0xD351u: {
            dd3_static_push8(rt,(uint8_t)(0xD353u>>8)); dd3_static_push8(rt,(uint8_t)0xD353u);
            rt->state.cpu.pc=0xD369u; return dd3_static_complete(rt,6u);
        }
        case 0xD354u: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD356u; return dd3_static_complete(rt,3u);
        }
        case 0xD356u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD358u,0xD365u)) c++; rt->state.cpu.pc=0xD365u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD358u; return dd3_static_complete(rt,2u);
        }
        case 0xD358u: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD35Au; return dd3_static_complete(rt,3u);
        }
        case 0xD35Au: {
            uint8_t v=0x4Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xD35Cu; return dd3_static_complete(rt,2u);
        }
        case 0xD35Cu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD35Eu,0xD365u)) c++; rt->state.cpu.pc=0xD365u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD35Eu; return dd3_static_complete(rt,2u);
        }
        case 0xD35Eu: {
            dd3_static_push8(rt,(uint8_t)(0xD360u>>8)); dd3_static_push8(rt,(uint8_t)0xD360u);
            rt->state.cpu.pc=0xD3AFu; return dd3_static_complete(rt,6u);
        }
        case 0xD361u: {
            dd3_static_push8(rt,(uint8_t)(0xD363u>>8)); dd3_static_push8(rt,(uint8_t)0xD363u);
            rt->state.cpu.pc=0xD251u; return dd3_static_complete(rt,6u);
        }
        case 0xD364u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD365u: {
            dd3_static_push8(rt,(uint8_t)(0xD367u>>8)); dd3_static_push8(rt,(uint8_t)0xD367u);
            rt->state.cpu.pc=0xD2A7u; return dd3_static_complete(rt,6u);
        }
        case 0xD368u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD369u: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD36Bu; return dd3_static_complete(rt,3u);
        }
        case 0xD36Bu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD36Du; return dd3_static_complete(rt,2u);
        }
        case 0xD36Du: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD36Eu; return dd3_static_complete(rt,2u);
        }
        case 0xD36Eu: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD370u; return dd3_static_complete(rt,2u);
        }
        case 0xD370u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD372u; return dd3_static_complete(rt,3u);
        }
        case 0xD372u: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD374u; return dd3_static_complete(rt,3u);
        }
        case 0xD374u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD376u; return dd3_static_complete(rt,2u);
        }
        case 0xD376u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD378u; return dd3_static_complete(rt,2u);
        }
        case 0xD378u: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD37Au; return dd3_static_complete(rt,3u);
        }
        case 0xD37Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD37Bu: {
            uint16_t ea=0xB7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD37Du; return dd3_static_complete(rt,3u);
        }
        case 0xD37Du: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD37Eu; return dd3_static_complete(rt,2u);
        }
        case 0xD37Eu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD380u; return dd3_static_complete(rt,3u);
        }
        case 0xD380u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD382u; return dd3_static_complete(rt,3u);
        }
        case 0xD382u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD384u; return dd3_static_complete(rt,2u);
        }
        case 0xD384u: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD386u; return dd3_static_complete(rt,3u);
        }
        case 0xD386u: {
            uint16_t ea=0xB8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD388u; return dd3_static_complete(rt,3u);
        }
        case 0xD388u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD389u; return dd3_static_complete(rt,2u);
        }
        case 0xD389u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD38Bu; return dd3_static_complete(rt,3u);
        }
        case 0xD38Bu: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD38Du; return dd3_static_complete(rt,3u);
        }
        case 0xD38Du: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD38Fu; return dd3_static_complete(rt,2u);
        }
        case 0xD38Fu: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD391u; return dd3_static_complete(rt,3u);
        }
        case 0xD391u: {
            uint8_t v=0x03u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD393u; return dd3_static_complete(rt,2u);
        }
        case 0xD393u: {
            uint16_t ea=(uint16_t)((0xB3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD395u; return dd3_static_complete(rt,4u);
        }
        case 0xD395u: {
            uint8_t v=0x40u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xD397u; return dd3_static_complete(rt,2u);
        }
        case 0xD397u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD399u,0xD39Fu)) c++; rt->state.cpu.pc=0xD39Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD399u; return dd3_static_complete(rt,2u);
        }
        case 0xD399u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD39Au; return dd3_static_complete(rt,2u);
        }
        case 0xD39Au: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD39Cu,0xD393u)) c++; rt->state.cpu.pc=0xD393u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD39Cu; return dd3_static_complete(rt,2u);
        }
        case 0xD39Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD39Eu; return dd3_static_complete(rt,2u);
        }
        case 0xD39Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD39Fu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xD3A1u; return dd3_static_complete(rt,2u);
        }
        case 0xD3A1u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD3A3u,0xD3ABu)) c++; rt->state.cpu.pc=0xD3ABu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD3A3u; return dd3_static_complete(rt,2u);
        }
        case 0xD3A3u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD3A4u; return dd3_static_complete(rt,2u);
        }
        case 0xD3A4u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD3A5u; return dd3_static_complete(rt,2u);
        }
        case 0xD3A5u: {
            uint16_t ea=(uint16_t)((0xB3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xD3A7u; return dd3_static_complete(rt,4u);
        }
        case 0xD3A7u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD3A9u,0xD3ABu)) c++; rt->state.cpu.pc=0xD3ABu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD3A9u; return dd3_static_complete(rt,2u);
        }
        case 0xD3A9u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD3AAu; return dd3_static_complete(rt,2u);
        }
        case 0xD3AAu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD3ABu; return dd3_static_complete(rt,2u);
        }
        case 0xD3ABu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD3ACu; return dd3_static_complete(rt,2u);
        }
        case 0xD3ACu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD3ADu; return dd3_static_complete(rt,2u);
        }
        case 0xD3ADu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD3AEu; return dd3_static_complete(rt,2u);
        }
        case 0xD3AEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD3AFu: {
            uint16_t ea=0xCBu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD3B1u; return dd3_static_complete(rt,3u);
        }
        case 0xD3B1u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD3B2u; return dd3_static_complete(rt,2u);
        }
        case 0xD3B2u: {
            uint16_t ea=0xDFu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD3B4u; return dd3_static_complete(rt,3u);
        }
        case 0xD3B4u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD3B5u; return dd3_static_complete(rt,2u);
        }
        case 0xD3B5u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD3B7u; return dd3_static_complete(rt,3u);
        }
        case 0xD3B7u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD3B9u; return dd3_static_complete(rt,3u);
        }
        case 0xD3B9u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD3BBu; return dd3_static_complete(rt,2u);
        }
        case 0xD3BBu: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD3BDu; return dd3_static_complete(rt,3u);
        }
        case 0xD3BDu: {
            uint16_t ea=0xCCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD3BFu; return dd3_static_complete(rt,3u);
        }
        case 0xD3BFu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD3C0u; return dd3_static_complete(rt,2u);
        }
        case 0xD3C0u: {
            uint16_t ea=0xE0u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD3C2u; return dd3_static_complete(rt,3u);
        }
        case 0xD3C2u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD3C3u; return dd3_static_complete(rt,2u);
        }
        case 0xD3C3u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD3C5u; return dd3_static_complete(rt,3u);
        }
        case 0xD3C5u: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD3C7u; return dd3_static_complete(rt,3u);
        }
        case 0xD3C7u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD3C9u; return dd3_static_complete(rt,2u);
        }
        case 0xD3C9u: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD3CBu; return dd3_static_complete(rt,3u);
        }
        case 0xD3CBu: {
            uint8_t v=0x02u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD3CDu; return dd3_static_complete(rt,2u);
        }
        case 0xD3CDu: {
            uint16_t ea=(uint16_t)((0xB3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD3CFu; return dd3_static_complete(rt,4u);
        }
        case 0xD3CFu: {
            uint8_t v=0x40u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xD3D1u; return dd3_static_complete(rt,2u);
        }
        case 0xD3D1u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD3D3u,0xD3DCu)) c++; rt->state.cpu.pc=0xD3DCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD3D3u; return dd3_static_complete(rt,2u);
        }
        case 0xD3D3u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xD3D5u; return dd3_static_complete(rt,2u);
        }
        case 0xD3D5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD3D7u,0xD3E9u)) c++; rt->state.cpu.pc=0xD3E9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD3D7u; return dd3_static_complete(rt,2u);
        }
        case 0xD3D7u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD3D9u; return dd3_static_complete(rt,2u);
        }
        case 0xD3D9u: {
            rt->state.cpu.pc=0xD3CDu; return dd3_static_complete(rt,3u);
        }
        case 0xD3DCu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xD3DEu; return dd3_static_complete(rt,2u);
        }
        case 0xD3DEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD3E0u,0xD404u)) c++; rt->state.cpu.pc=0xD404u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD3E0u; return dd3_static_complete(rt,2u);
        }
        case 0xD3E0u: {
            uint16_t ea=(uint16_t)((0xB1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xD3E2u; return dd3_static_complete(rt,4u);
        }
        case 0xD3E2u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD3E4u,0xD404u)) c++; rt->state.cpu.pc=0xD404u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD3E4u; return dd3_static_complete(rt,2u);
        }
        case 0xD3E4u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD3E6u; return dd3_static_complete(rt,2u);
        }
        case 0xD3E6u: {
            rt->state.cpu.pc=0xD404u; return dd3_static_complete(rt,3u);
        }
        case 0xD3E9u: {
            uint8_t v=0x03u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD3EBu; return dd3_static_complete(rt,2u);
        }
        case 0xD3EBu: {
            uint16_t ea=(uint16_t)((0xB3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD3EDu; return dd3_static_complete(rt,4u);
        }
        case 0xD3EDu: {
            uint8_t v=0x60u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xD3EFu; return dd3_static_complete(rt,2u);
        }
        case 0xD3EFu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD3F1u,0xD3FAu)) c++; rt->state.cpu.pc=0xD3FAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD3F1u; return dd3_static_complete(rt,2u);
        }
        case 0xD3F1u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xD3F3u; return dd3_static_complete(rt,2u);
        }
        case 0xD3F3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD3F5u,0xD3FAu)) c++; rt->state.cpu.pc=0xD3FAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD3F5u; return dd3_static_complete(rt,2u);
        }
        case 0xD3F5u: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD3F7u; return dd3_static_complete(rt,2u);
        }
        case 0xD3F7u: {
            rt->state.cpu.pc=0xD3EBu; return dd3_static_complete(rt,3u);
        }
        case 0xD3FAu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xD3FCu; return dd3_static_complete(rt,2u);
        }
        case 0xD3FCu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD3FEu,0xD404u)) c++; rt->state.cpu.pc=0xD404u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD3FEu; return dd3_static_complete(rt,2u);
        }
        case 0xD3FEu: {
            uint16_t ea=(uint16_t)((0xB1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xD400u; return dd3_static_complete(rt,4u);
        }
        case 0xD400u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD402u,0xD404u)) c++; rt->state.cpu.pc=0xD404u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD402u; return dd3_static_complete(rt,2u);
        }
        case 0xD402u: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD404u; return dd3_static_complete(rt,2u);
        }
        case 0xD404u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD405u; return dd3_static_complete(rt,2u);
        }
        case 0xD405u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD406u; return dd3_static_complete(rt,2u);
        }
        case 0xD406u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD407u; return dd3_static_complete(rt,2u);
        }
        case 0xD407u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD4CBu: {
            uint16_t ea=0x04FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD4CEu; return dd3_static_complete(rt,4u);
        }
        case 0xD4CEu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD4D0u; return dd3_static_complete(rt,3u);
        }
        case 0xD4D0u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD4D2u; return dd3_static_complete(rt,5u);
        }
        case 0xD4D2u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD4D4u,0xD4E7u)) c++; rt->state.cpu.pc=0xD4E7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD4D4u; return dd3_static_complete(rt,2u);
        }
        case 0xD4D4u: {
            uint16_t ea=0x8Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD4D6u; return dd3_static_complete(rt,3u);
        }
        case 0xD4D6u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD4D7u; return dd3_static_complete(rt,2u);
        }
        case 0xD4D7u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD4D9u; return dd3_static_complete(rt,3u);
        }
        case 0xD4D9u: {
            uint16_t ea=0x8Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD4DBu; return dd3_static_complete(rt,3u);
        }
        case 0xD4DBu: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD4DDu; return dd3_static_complete(rt,3u);
        }
        case 0xD4DDu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD4DFu,0xD4E7u)) c++; rt->state.cpu.pc=0xD4E7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD4DFu; return dd3_static_complete(rt,2u);
        }
        case 0xD4DFu: {
            uint16_t ea=0x8Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD4E1u; return dd3_static_complete(rt,3u);
        }
        case 0xD4E1u: {
            dd3_static_write8(rt,0x87u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD4E3u; return dd3_static_complete(rt,3u);
        }
        case 0xD4E3u: {
            uint16_t ea=0x8Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD4E5u; return dd3_static_complete(rt,3u);
        }
        case 0xD4E5u: {
            dd3_static_write8(rt,0x88u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD4E7u; return dd3_static_complete(rt,3u);
        }
        case 0xD4E7u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD4E9u; return dd3_static_complete(rt,5u);
        }
        case 0xD4E9u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD4EBu,0xD4FEu)) c++; rt->state.cpu.pc=0xD4FEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD4EBu; return dd3_static_complete(rt,2u);
        }
        case 0xD4EBu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD4EDu; return dd3_static_complete(rt,3u);
        }
        case 0xD4EDu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD4EEu; return dd3_static_complete(rt,2u);
        }
        case 0xD4EEu: {
            uint16_t ea=0x8Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD4F0u; return dd3_static_complete(rt,3u);
        }
        case 0xD4F0u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD4F2u; return dd3_static_complete(rt,3u);
        }
        case 0xD4F2u: {
            uint16_t ea=0x8Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD4F4u; return dd3_static_complete(rt,3u);
        }
        case 0xD4F4u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD4F6u,0xD4FEu)) c++; rt->state.cpu.pc=0xD4FEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD4F6u; return dd3_static_complete(rt,2u);
        }
        case 0xD4F6u: {
            uint16_t ea=0x8Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD4F8u; return dd3_static_complete(rt,3u);
        }
        case 0xD4F8u: {
            dd3_static_write8(rt,0x87u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD4FAu; return dd3_static_complete(rt,3u);
        }
        case 0xD4FAu: {
            uint16_t ea=0x8Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD4FCu; return dd3_static_complete(rt,3u);
        }
        case 0xD4FCu: {
            dd3_static_write8(rt,0x88u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD4FEu; return dd3_static_complete(rt,3u);
        }
        case 0xD4FEu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD500u; return dd3_static_complete(rt,5u);
        }
        case 0xD500u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD502u,0xD515u)) c++; rt->state.cpu.pc=0xD515u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD502u; return dd3_static_complete(rt,2u);
        }
        case 0xD502u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD504u; return dd3_static_complete(rt,3u);
        }
        case 0xD504u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD505u; return dd3_static_complete(rt,2u);
        }
        case 0xD505u: {
            uint16_t ea=0x8Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD507u; return dd3_static_complete(rt,3u);
        }
        case 0xD507u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD509u; return dd3_static_complete(rt,3u);
        }
        case 0xD509u: {
            uint16_t ea=0x8Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD50Bu; return dd3_static_complete(rt,3u);
        }
        case 0xD50Bu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD50Du,0xD515u)) c++; rt->state.cpu.pc=0xD515u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD50Du; return dd3_static_complete(rt,2u);
        }
        case 0xD50Du: {
            uint16_t ea=0x8Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD50Fu; return dd3_static_complete(rt,3u);
        }
        case 0xD50Fu: {
            dd3_static_write8(rt,0x89u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD511u; return dd3_static_complete(rt,3u);
        }
        case 0xD511u: {
            uint16_t ea=0x8Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD513u; return dd3_static_complete(rt,3u);
        }
        case 0xD513u: {
            dd3_static_write8(rt,0x8Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD515u; return dd3_static_complete(rt,3u);
        }
        case 0xD515u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD517u; return dd3_static_complete(rt,5u);
        }
        case 0xD517u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD519u,0xD52Cu)) c++; rt->state.cpu.pc=0xD52Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD519u; return dd3_static_complete(rt,2u);
        }
        case 0xD519u: {
            uint16_t ea=0x8Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD51Bu; return dd3_static_complete(rt,3u);
        }
        case 0xD51Bu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD51Cu; return dd3_static_complete(rt,2u);
        }
        case 0xD51Cu: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD51Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD51Eu: {
            uint16_t ea=0x8Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD520u; return dd3_static_complete(rt,3u);
        }
        case 0xD520u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD522u; return dd3_static_complete(rt,3u);
        }
        case 0xD522u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD524u,0xD52Cu)) c++; rt->state.cpu.pc=0xD52Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD524u; return dd3_static_complete(rt,2u);
        }
        case 0xD524u: {
            uint16_t ea=0x8Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD526u; return dd3_static_complete(rt,3u);
        }
        case 0xD526u: {
            dd3_static_write8(rt,0x89u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD528u; return dd3_static_complete(rt,3u);
        }
        case 0xD528u: {
            uint16_t ea=0x8Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD52Au; return dd3_static_complete(rt,3u);
        }
        case 0xD52Au: {
            dd3_static_write8(rt,0x8Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD52Cu; return dd3_static_complete(rt,3u);
        }
        case 0xD52Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD52Du: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD52Fu; return dd3_static_complete(rt,3u);
        }
        case 0xD52Fu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD530u; return dd3_static_complete(rt,2u);
        }
        case 0xD530u: {
            uint16_t ea=0x04F6u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD533u; return dd3_static_complete(rt,4u);
        }
        case 0xD533u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD535u; return dd3_static_complete(rt,3u);
        }
        case 0xD535u: {
            uint16_t ea=0x04F7u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD538u; return dd3_static_complete(rt,4u);
        }
        case 0xD538u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD53Au,0xD54Fu)) c++; rt->state.cpu.pc=0xD54Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD53Au; return dd3_static_complete(rt,2u);
        }
        case 0xD53Au: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD53Cu; return dd3_static_complete(rt,3u);
        }
        case 0xD53Cu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD53Du; return dd3_static_complete(rt,2u);
        }
        case 0xD53Du: {
            uint16_t ea=0x8Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD53Fu; return dd3_static_complete(rt,3u);
        }
        case 0xD53Fu: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD541u; return dd3_static_complete(rt,3u);
        }
        case 0xD541u: {
            uint16_t ea=0x8Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD543u; return dd3_static_complete(rt,3u);
        }
        case 0xD543u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD545u,0xD54Fu)) c++; rt->state.cpu.pc=0xD54Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD545u; return dd3_static_complete(rt,2u);
        }
        case 0xD545u: {
            uint16_t ea=0x04F6u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD548u; return dd3_static_complete(rt,4u);
        }
        case 0xD548u: {
            dd3_static_write8(rt,0x87u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD54Au; return dd3_static_complete(rt,3u);
        }
        case 0xD54Au: {
            uint16_t ea=0x04F7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD54Du; return dd3_static_complete(rt,4u);
        }
        case 0xD54Du: {
            dd3_static_write8(rt,0x88u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD54Fu; return dd3_static_complete(rt,3u);
        }
        case 0xD54Fu: {
            uint16_t ea=0x04F8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD552u; return dd3_static_complete(rt,4u);
        }
        case 0xD552u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD553u; return dd3_static_complete(rt,2u);
        }
        case 0xD553u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD555u; return dd3_static_complete(rt,3u);
        }
        case 0xD555u: {
            uint16_t ea=0x04F9u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD558u; return dd3_static_complete(rt,4u);
        }
        case 0xD558u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD55Au; return dd3_static_complete(rt,3u);
        }
        case 0xD55Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD55Cu,0xD571u)) c++; rt->state.cpu.pc=0xD571u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD55Cu; return dd3_static_complete(rt,2u);
        }
        case 0xD55Cu: {
            uint16_t ea=0x8Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD55Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD55Eu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD55Fu; return dd3_static_complete(rt,2u);
        }
        case 0xD55Fu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD561u; return dd3_static_complete(rt,3u);
        }
        case 0xD561u: {
            uint16_t ea=0x8Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD563u; return dd3_static_complete(rt,3u);
        }
        case 0xD563u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD565u; return dd3_static_complete(rt,3u);
        }
        case 0xD565u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD567u,0xD571u)) c++; rt->state.cpu.pc=0xD571u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD567u; return dd3_static_complete(rt,2u);
        }
        case 0xD567u: {
            uint16_t ea=0x04F8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD56Au; return dd3_static_complete(rt,4u);
        }
        case 0xD56Au: {
            dd3_static_write8(rt,0x87u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD56Cu; return dd3_static_complete(rt,3u);
        }
        case 0xD56Cu: {
            uint16_t ea=0x04F9u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD56Fu; return dd3_static_complete(rt,4u);
        }
        case 0xD56Fu: {
            dd3_static_write8(rt,0x88u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD571u; return dd3_static_complete(rt,3u);
        }
        case 0xD571u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD573u; return dd3_static_complete(rt,3u);
        }
        case 0xD573u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD574u; return dd3_static_complete(rt,2u);
        }
        case 0xD574u: {
            uint16_t ea=0x04FAu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD577u; return dd3_static_complete(rt,4u);
        }
        case 0xD577u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD579u; return dd3_static_complete(rt,3u);
        }
        case 0xD579u: {
            uint16_t ea=0x04FBu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD57Cu; return dd3_static_complete(rt,4u);
        }
        case 0xD57Cu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD57Eu,0xD593u)) c++; rt->state.cpu.pc=0xD593u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD57Eu; return dd3_static_complete(rt,2u);
        }
        case 0xD57Eu: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD580u; return dd3_static_complete(rt,3u);
        }
        case 0xD580u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD581u; return dd3_static_complete(rt,2u);
        }
        case 0xD581u: {
            uint16_t ea=0x8Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD583u; return dd3_static_complete(rt,3u);
        }
        case 0xD583u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD585u; return dd3_static_complete(rt,3u);
        }
        case 0xD585u: {
            uint16_t ea=0x8Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD587u; return dd3_static_complete(rt,3u);
        }
        case 0xD587u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD589u,0xD593u)) c++; rt->state.cpu.pc=0xD593u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD589u; return dd3_static_complete(rt,2u);
        }
        case 0xD589u: {
            uint16_t ea=0x04FAu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD58Cu; return dd3_static_complete(rt,4u);
        }
        case 0xD58Cu: {
            dd3_static_write8(rt,0x89u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD58Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD58Eu: {
            uint16_t ea=0x04FBu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD591u; return dd3_static_complete(rt,4u);
        }
        case 0xD591u: {
            dd3_static_write8(rt,0x8Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD593u; return dd3_static_complete(rt,3u);
        }
        case 0xD593u: {
            uint16_t ea=0x04FCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD596u; return dd3_static_complete(rt,4u);
        }
        case 0xD596u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD597u; return dd3_static_complete(rt,2u);
        }
        case 0xD597u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD599u; return dd3_static_complete(rt,3u);
        }
        case 0xD599u: {
            uint16_t ea=0x04FDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD59Cu; return dd3_static_complete(rt,4u);
        }
        case 0xD59Cu: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD59Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD59Eu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD5A0u,0xD5B3u)) c++; rt->state.cpu.pc=0xD5B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD5A0u; return dd3_static_complete(rt,2u);
        }
        case 0xD5A0u: {
            uint16_t ea=0x8Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD5A2u; return dd3_static_complete(rt,3u);
        }
        case 0xD5A2u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD5A3u; return dd3_static_complete(rt,2u);
        }
        case 0xD5A3u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD5A5u; return dd3_static_complete(rt,3u);
        }
        case 0xD5A5u: {
            uint16_t ea=0x8Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD5A7u; return dd3_static_complete(rt,3u);
        }
        case 0xD5A7u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD5A9u; return dd3_static_complete(rt,3u);
        }
        case 0xD5A9u: {
            uint16_t ea=0x04FCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD5ACu; return dd3_static_complete(rt,4u);
        }
        case 0xD5ACu: {
            dd3_static_write8(rt,0x89u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD5AEu; return dd3_static_complete(rt,3u);
        }
        case 0xD5AEu: {
            uint16_t ea=0x04FDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD5B1u; return dd3_static_complete(rt,4u);
        }
        case 0xD5B1u: {
            dd3_static_write8(rt,0x8Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD5B3u; return dd3_static_complete(rt,3u);
        }
        case 0xD5B3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD5B4u: {
            uint16_t ea=(uint16_t)(0x008Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD5B7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x008Bu,ea)?1u:0u));
        }
        case 0xD5B7u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD5B8u; return dd3_static_complete(rt,2u);
        }
        case 0xD5B8u: {
            uint16_t ea=(uint16_t)(0x0029u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD5BBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0029u,ea)?1u:0u));
        }
        case 0xD5BBu: {
            dd3_static_write8(rt,(uint16_t)(0x002Du+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xD5BEu; return dd3_static_complete(rt,5u);
        }
        case 0xD5BEu: {
            uint16_t ea=(uint16_t)(0x008Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD5C1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x008Cu,ea)?1u:0u));
        }
        case 0xD5C1u: {
            uint16_t ea=(uint16_t)(0x002Au+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD5C4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x002Au,ea)?1u:0u));
        }
        case 0xD5C4u: {
            dd3_static_write8(rt,(uint16_t)(0x002Eu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xD5C7u; return dd3_static_complete(rt,5u);
        }
        case 0xD5C7u: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0xD5C8u; return dd3_static_complete(rt,3u);
        }
        case 0xD5C8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD5CAu,0xD5EBu)) c++; rt->state.cpu.pc=0xD5EBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD5CAu; return dd3_static_complete(rt,2u);
        }
        case 0xD5CAu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD5CCu; return dd3_static_complete(rt,2u);
        }
        case 0xD5CCu: {
            uint16_t ea=(uint16_t)(0x002Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD5CFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x002Du,ea)?1u:0u));
        }
        case 0xD5CFu: {
            dd3_static_write8(rt,(uint16_t)(0x002Du+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xD5D2u; return dd3_static_complete(rt,5u);
        }
        case 0xD5D2u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD5D4u; return dd3_static_complete(rt,2u);
        }
        case 0xD5D4u: {
            uint16_t ea=(uint16_t)(0x002Eu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD5D7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x002Eu,ea)?1u:0u));
        }
        case 0xD5D7u: {
            dd3_static_write8(rt,(uint16_t)(0x002Eu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xD5DAu; return dd3_static_complete(rt,5u);
        }
        case 0xD5DAu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD5DCu; return dd3_static_complete(rt,2u);
        }
        case 0xD5DCu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD5DDu; return dd3_static_complete(rt,2u);
        }
        case 0xD5DDu: {
            uint16_t ea=(uint16_t)(0x002Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD5E0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x002Du,ea)?1u:0u));
        }
        case 0xD5E0u: {
            dd3_static_write8(rt,(uint16_t)(0x002Du+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xD5E3u; return dd3_static_complete(rt,5u);
        }
        case 0xD5E3u: {
            uint16_t ea=(uint16_t)(0x002Eu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD5E6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x002Eu,ea)?1u:0u));
        }
        case 0xD5E6u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD5E8u; return dd3_static_complete(rt,2u);
        }
        case 0xD5E8u: {
            dd3_static_write8(rt,(uint16_t)(0x002Eu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xD5EBu; return dd3_static_complete(rt,5u);
        }
        case 0xD5EBu: {
            uint16_t ea=(uint16_t)(0x002Eu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD5EEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x002Eu,ea)?1u:0u));
        }
        case 0xD5EEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD5F0u,0xD5FCu)) c++; rt->state.cpu.pc=0xD5FCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD5F0u; return dd3_static_complete(rt,2u);
        }
        case 0xD5F0u: {
            uint16_t ea=(uint16_t)(0x002Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD5F3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x002Du,ea)?1u:0u));
        }
        case 0xD5F3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD5F5u,0xD625u)) c++; rt->state.cpu.pc=0xD625u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD5F5u; return dd3_static_complete(rt,2u);
        }
        case 0xD5F5u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD5F7u; return dd3_static_complete(rt,2u);
        }
        case 0xD5F7u: {
            uint16_t ea=(uint16_t)(0x002Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xD5FAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x002Du,ea)?1u:0u));
        }
        case 0xD5FAu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD5FCu,0xD625u)) c++; rt->state.cpu.pc=0xD625u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD5FCu; return dd3_static_complete(rt,2u);
        }
        case 0xD5FCu: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt));
            rt->state.cpu.pc=0xD5FDu; return dd3_static_complete(rt,4u);
        }
        case 0xD5FDu: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0xD5FEu; return dd3_static_complete(rt,3u);
        }
        case 0xD5FEu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD600u,0xD614u)) c++; rt->state.cpu.pc=0xD614u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD600u; return dd3_static_complete(rt,2u);
        }
        case 0xD600u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD602u; return dd3_static_complete(rt,2u);
        }
        case 0xD602u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD603u; return dd3_static_complete(rt,2u);
        }
        case 0xD603u: {
            uint16_t ea=(uint16_t)(0x008Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD606u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x008Bu,ea)?1u:0u));
        }
        case 0xD606u: {
            dd3_static_write8(rt,(uint16_t)(0x0029u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xD609u; return dd3_static_complete(rt,5u);
        }
        case 0xD609u: {
            uint16_t ea=(uint16_t)(0x008Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD60Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x008Cu,ea)?1u:0u));
        }
        case 0xD60Cu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD60Eu; return dd3_static_complete(rt,2u);
        }
        case 0xD60Eu: {
            dd3_static_write8(rt,(uint16_t)(0x002Au+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xD611u; return dd3_static_complete(rt,5u);
        }
        case 0xD611u: {
            rt->state.cpu.pc=0xD625u; return dd3_static_complete(rt,3u);
        }
        case 0xD614u: {
            uint16_t ea=(uint16_t)(0x008Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD617u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x008Bu,ea)?1u:0u));
        }
        case 0xD617u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD618u; return dd3_static_complete(rt,2u);
        }
        case 0xD618u: {
            uint8_t v=0x03u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD61Au; return dd3_static_complete(rt,2u);
        }
        case 0xD61Au: {
            dd3_static_write8(rt,(uint16_t)(0x0029u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xD61Du; return dd3_static_complete(rt,5u);
        }
        case 0xD61Du: {
            uint16_t ea=(uint16_t)(0x008Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD620u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x008Cu,ea)?1u:0u));
        }
        case 0xD620u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD622u; return dd3_static_complete(rt,2u);
        }
        case 0xD622u: {
            dd3_static_write8(rt,(uint16_t)(0x002Au+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xD625u; return dd3_static_complete(rt,5u);
        }
        case 0xD625u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD626u; return dd3_static_complete(rt,4u);
        }
        case 0xD626u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD65Au: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD65Cu; return dd3_static_complete(rt,3u);
        }
        case 0xD65Cu: {
            dd3_static_write8(rt,0x9Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD65Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD65Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD660u; return dd3_static_complete(rt,2u);
        }
        case 0xD660u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD662u; return dd3_static_complete(rt,3u);
        }
        case 0xD662u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD664u; return dd3_static_complete(rt,3u);
        }
        case 0xD664u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD666u; return dd3_static_complete(rt,3u);
        }
        case 0xD666u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD668u; return dd3_static_complete(rt,3u);
        }
        case 0xD668u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD66Au; return dd3_static_complete(rt,3u);
        }
        case 0xD66Au: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD66Bu; return dd3_static_complete(rt,2u);
        }
        case 0xD66Bu: {
            uint8_t v=0xEFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD66Du; return dd3_static_complete(rt,2u);
        }
        case 0xD66Du: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD66Fu; return dd3_static_complete(rt,3u);
        }
        case 0xD66Fu: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD671u; return dd3_static_complete(rt,3u);
        }
        case 0xD671u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD673u; return dd3_static_complete(rt,2u);
        }
        case 0xD673u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD675u; return dd3_static_complete(rt,3u);
        }
        case 0xD675u: {
            uint8_t v=0x09u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD677u; return dd3_static_complete(rt,2u);
        }
        case 0xD677u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD679u; return dd3_static_complete(rt,3u);
        }
        case 0xD679u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD67Au; return dd3_static_complete(rt,2u);
        }
        case 0xD67Au: {
            uint8_t v=0xF0u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD67Cu; return dd3_static_complete(rt,2u);
        }
        case 0xD67Cu: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xD67Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD67Eu: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD680u; return dd3_static_complete(rt,3u);
        }
        case 0xD680u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD682u; return dd3_static_complete(rt,2u);
        }
        case 0xD682u: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD684u; return dd3_static_complete(rt,3u);
        }
        case 0xD684u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD686u,0xD68Eu)) c++; rt->state.cpu.pc=0xD68Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD686u; return dd3_static_complete(rt,2u);
        }
        case 0xD686u: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD688u; return dd3_static_complete(rt,3u);
        }
        case 0xD688u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD68Au; return dd3_static_complete(rt,3u);
        }
        case 0xD68Au: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD68Cu; return dd3_static_complete(rt,3u);
        }
        case 0xD68Cu: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD68Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD68Eu: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD690u; return dd3_static_complete(rt,5u);
        }
        case 0xD690u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD692u; return dd3_static_complete(rt,5u);
        }
        case 0xD692u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD694u; return dd3_static_complete(rt,5u);
        }
        case 0xD694u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD696u; return dd3_static_complete(rt,5u);
        }
        case 0xD696u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD697u; return dd3_static_complete(rt,2u);
        }
        case 0xD697u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD699u,0xD677u)) c++; rt->state.cpu.pc=0xD677u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD699u; return dd3_static_complete(rt,2u);
        }
        case 0xD699u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD69Bu; return dd3_static_complete(rt,5u);
        }
        case 0xD69Bu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=v&1u; v=(uint8_t)((v>>1)|(c<<7)); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD69Du; return dd3_static_complete(rt,5u);
        }
        case 0xD69Du: {
            uint8_t v=0xEFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD69Fu; return dd3_static_complete(rt,2u);
        }
        case 0xD69Fu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD6A0u; return dd3_static_complete(rt,2u);
        }
        case 0xD6A0u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD6A2u; return dd3_static_complete(rt,3u);
        }
        case 0xD6A2u: {
            dd3_static_write8(rt,0x9Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xD6A4u; return dd3_static_complete(rt,3u);
        }
        case 0xD6A4u: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD6A6u; return dd3_static_complete(rt,3u);
        }
        case 0xD6A6u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD6A8u; return dd3_static_complete(rt,2u);
        }
        case 0xD6A8u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD6A9u; return dd3_static_complete(rt,2u);
        }
        case 0xD6A9u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD6ABu; return dd3_static_complete(rt,2u);
        }
        case 0xD6ABu: {
            dd3_static_write8(rt,0x3Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD6ADu; return dd3_static_complete(rt,3u);
        }
        case 0xD6ADu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD6AEu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD6B0u; return dd3_static_complete(rt,3u);
        }
        case 0xD6B0u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xD6B2u; return dd3_static_complete(rt,3u);
        }
        case 0xD6B2u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD6B4u; return dd3_static_complete(rt,3u);
        }
        case 0xD6B4u: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD6B6u; return dd3_static_complete(rt,3u);
        }
        case 0xD6B6u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD6B8u; return dd3_static_complete(rt,3u);
        }
        case 0xD6B8u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD6BAu; return dd3_static_complete(rt,3u);
        }
        case 0xD6BAu: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD6BCu; return dd3_static_complete(rt,3u);
        }
        case 0xD6BCu: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD6BEu; return dd3_static_complete(rt,3u);
        }
        case 0xD6BEu: {
            dd3_static_push8(rt,(uint8_t)(0xD6C0u>>8)); dd3_static_push8(rt,(uint8_t)0xD6C0u);
            rt->state.cpu.pc=0xD7ADu; return dd3_static_complete(rt,6u);
        }
        case 0xD6C1u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD6C3u; return dd3_static_complete(rt,2u);
        }
        case 0xD6C3u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD6C5u; return dd3_static_complete(rt,3u);
        }
        case 0xD6C5u: {
            dd3_static_push8(rt,(uint8_t)(0xD6C7u>>8)); dd3_static_push8(rt,(uint8_t)0xD6C7u);
            rt->state.cpu.pc=0xD742u; return dd3_static_complete(rt,6u);
        }
        case 0xD6C8u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD6CAu,0xD6E3u)) c++; rt->state.cpu.pc=0xD6E3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD6CAu; return dd3_static_complete(rt,2u);
        }
        case 0xD6CAu: {
            uint16_t ea=0x8Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD6CCu; return dd3_static_complete(rt,3u);
        }
        case 0xD6CCu: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xD6CEu; return dd3_static_complete(rt,3u);
        }
        case 0xD6CEu: {
            uint16_t ea=0x8Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD6D0u; return dd3_static_complete(rt,3u);
        }
        case 0xD6D0u: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD6D2u; return dd3_static_complete(rt,3u);
        }
        case 0xD6D2u: {
            uint16_t ea=0x8Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD6D4u; return dd3_static_complete(rt,3u);
        }
        case 0xD6D4u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD6D6u; return dd3_static_complete(rt,3u);
        }
        case 0xD6D6u: {
            uint16_t ea=0x8Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD6D8u; return dd3_static_complete(rt,3u);
        }
        case 0xD6D8u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD6DAu; return dd3_static_complete(rt,3u);
        }
        case 0xD6DAu: {
            dd3_static_push8(rt,(uint8_t)(0xD6DCu>>8)); dd3_static_push8(rt,(uint8_t)0xD6DCu);
            rt->state.cpu.pc=0xD7ADu; return dd3_static_complete(rt,6u);
        }
        case 0xD6DDu: {
            dd3_static_push8(rt,(uint8_t)(0xD6DFu>>8)); dd3_static_push8(rt,(uint8_t)0xD6DFu);
            rt->state.cpu.pc=0xD742u; return dd3_static_complete(rt,6u);
        }
        case 0xD6E0u: {
            dd3_static_push8(rt,(uint8_t)(0xD6E2u>>8)); dd3_static_push8(rt,(uint8_t)0xD6E2u);
            rt->state.cpu.pc=0xD6E4u; return dd3_static_complete(rt,6u);
        }
        case 0xD6E3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD6E4u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD6E6u; return dd3_static_complete(rt,2u);
        }
        case 0xD6E6u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD6E7u; return dd3_static_complete(rt,2u);
        }
        case 0xD6E7u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD6E9u; return dd3_static_complete(rt,3u);
        }
        case 0xD6E9u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD6EBu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD6EBu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD6ECu; return dd3_static_complete(rt,2u);
        }
        case 0xD6ECu: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD6EEu; return dd3_static_complete(rt,3u);
        }
        case 0xD6EEu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD6F0u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD6F0u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD6F2u,0xD6FCu)) c++; rt->state.cpu.pc=0xD6FCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD6F2u; return dd3_static_complete(rt,2u);
        }
        case 0xD6F2u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD6F3u; return dd3_static_complete(rt,2u);
        }
        case 0xD6F3u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD6F5u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD6F5u: {
            dd3_static_write8(rt,0x87u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD6F7u; return dd3_static_complete(rt,3u);
        }
        case 0xD6F7u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD6F8u; return dd3_static_complete(rt,2u);
        }
        case 0xD6F8u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD6FAu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD6FAu: {
            dd3_static_write8(rt,0x88u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD6FCu; return dd3_static_complete(rt,3u);
        }
        case 0xD6FCu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD6FDu; return dd3_static_complete(rt,2u);
        }
        case 0xD6FDu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD6FEu; return dd3_static_complete(rt,2u);
        }
        case 0xD6FEu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD700u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD700u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD702u; return dd3_static_complete(rt,3u);
        }
        case 0xD702u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD703u; return dd3_static_complete(rt,2u);
        }
        case 0xD703u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD705u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD705u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD707u; return dd3_static_complete(rt,3u);
        }
        case 0xD707u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD709u,0xD713u)) c++; rt->state.cpu.pc=0xD713u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD709u; return dd3_static_complete(rt,2u);
        }
        case 0xD709u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD70Au; return dd3_static_complete(rt,2u);
        }
        case 0xD70Au: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD70Cu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD70Cu: {
            dd3_static_write8(rt,0x87u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD70Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD70Eu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD70Fu; return dd3_static_complete(rt,2u);
        }
        case 0xD70Fu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD711u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD711u: {
            dd3_static_write8(rt,0x88u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD713u; return dd3_static_complete(rt,3u);
        }
        case 0xD713u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD714u; return dd3_static_complete(rt,2u);
        }
        case 0xD714u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD715u; return dd3_static_complete(rt,2u);
        }
        case 0xD715u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD717u; return dd3_static_complete(rt,3u);
        }
        case 0xD717u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD719u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD719u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD71Au; return dd3_static_complete(rt,2u);
        }
        case 0xD71Au: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD71Cu; return dd3_static_complete(rt,3u);
        }
        case 0xD71Cu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD71Eu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD71Eu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD720u,0xD72Au)) c++; rt->state.cpu.pc=0xD72Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD720u; return dd3_static_complete(rt,2u);
        }
        case 0xD720u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD721u; return dd3_static_complete(rt,2u);
        }
        case 0xD721u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD723u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD723u: {
            dd3_static_write8(rt,0x89u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD725u; return dd3_static_complete(rt,3u);
        }
        case 0xD725u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD726u; return dd3_static_complete(rt,2u);
        }
        case 0xD726u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD728u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD728u: {
            dd3_static_write8(rt,0x8Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD72Au; return dd3_static_complete(rt,3u);
        }
        case 0xD72Au: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD72Bu; return dd3_static_complete(rt,2u);
        }
        case 0xD72Bu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD72Cu; return dd3_static_complete(rt,2u);
        }
        case 0xD72Cu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD72Eu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD72Eu: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD730u; return dd3_static_complete(rt,3u);
        }
        case 0xD730u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD731u; return dd3_static_complete(rt,2u);
        }
        case 0xD731u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD733u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD733u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD735u; return dd3_static_complete(rt,3u);
        }
        case 0xD735u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD737u,0xD741u)) c++; rt->state.cpu.pc=0xD741u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD737u; return dd3_static_complete(rt,2u);
        }
        case 0xD737u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD738u; return dd3_static_complete(rt,2u);
        }
        case 0xD738u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD73Au; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD73Au: {
            dd3_static_write8(rt,0x89u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD73Cu; return dd3_static_complete(rt,3u);
        }
        case 0xD73Cu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD73Du; return dd3_static_complete(rt,2u);
        }
        case 0xD73Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD73Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD73Fu: {
            dd3_static_write8(rt,0x8Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD741u; return dd3_static_complete(rt,3u);
        }
        case 0xD741u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD742u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD744u; return dd3_static_complete(rt,2u);
        }
        case 0xD744u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD746u; return dd3_static_complete(rt,3u);
        }
        case 0xD746u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD748u; return dd3_static_complete(rt,2u);
        }
        case 0xD748u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD749u; return dd3_static_complete(rt,2u);
        }
        case 0xD749u: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD74Bu; return dd3_static_complete(rt,3u);
        }
        case 0xD74Bu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD74Du; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD74Du: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD74Eu; return dd3_static_complete(rt,2u);
        }
        case 0xD74Eu: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD750u; return dd3_static_complete(rt,3u);
        }
        case 0xD750u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD752u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD752u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD753u; return dd3_static_complete(rt,2u);
        }
        case 0xD753u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD755u,0xD759u)) c++; rt->state.cpu.pc=0xD759u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD755u; return dd3_static_complete(rt,2u);
        }
        case 0xD755u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD757u; return dd3_static_complete(rt,2u);
        }
        case 0xD757u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD759u; return dd3_static_complete(rt,3u);
        }
        case 0xD759u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD75Au; return dd3_static_complete(rt,2u);
        }
        case 0xD75Au: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD75Cu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD75Cu: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD75Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD75Eu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD75Fu; return dd3_static_complete(rt,2u);
        }
        case 0xD75Fu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD761u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD761u: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD763u; return dd3_static_complete(rt,3u);
        }
        case 0xD763u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD764u; return dd3_static_complete(rt,2u);
        }
        case 0xD764u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD766u,0xD76Au)) c++; rt->state.cpu.pc=0xD76Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD766u; return dd3_static_complete(rt,2u);
        }
        case 0xD766u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD768u; return dd3_static_complete(rt,2u);
        }
        case 0xD768u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD76Au; return dd3_static_complete(rt,3u);
        }
        case 0xD76Au: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD76Bu; return dd3_static_complete(rt,2u);
        }
        case 0xD76Bu: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD76Du; return dd3_static_complete(rt,3u);
        }
        case 0xD76Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD76Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD76Fu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD770u; return dd3_static_complete(rt,2u);
        }
        case 0xD770u: {
            uint16_t ea=0x30u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD772u; return dd3_static_complete(rt,3u);
        }
        case 0xD772u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD774u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD774u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD775u; return dd3_static_complete(rt,2u);
        }
        case 0xD775u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD777u,0xD77Bu)) c++; rt->state.cpu.pc=0xD77Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD777u; return dd3_static_complete(rt,2u);
        }
        case 0xD777u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD779u; return dd3_static_complete(rt,2u);
        }
        case 0xD779u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD77Bu; return dd3_static_complete(rt,3u);
        }
        case 0xD77Bu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD77Cu; return dd3_static_complete(rt,2u);
        }
        case 0xD77Cu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD77Eu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD77Eu: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD780u; return dd3_static_complete(rt,3u);
        }
        case 0xD780u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD781u; return dd3_static_complete(rt,2u);
        }
        case 0xD781u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD783u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD783u: {
            uint16_t ea=0x30u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD785u; return dd3_static_complete(rt,3u);
        }
        case 0xD785u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD786u; return dd3_static_complete(rt,2u);
        }
        case 0xD786u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD788u,0xD78Cu)) c++; rt->state.cpu.pc=0xD78Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD788u; return dd3_static_complete(rt,2u);
        }
        case 0xD788u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD78Au; return dd3_static_complete(rt,2u);
        }
        case 0xD78Au: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD78Cu; return dd3_static_complete(rt,3u);
        }
        case 0xD78Cu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD78Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD78Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD790u,0xD7ABu)) c++; rt->state.cpu.pc=0xD7ABu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD790u; return dd3_static_complete(rt,2u);
        }
        case 0xD790u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD791u; return dd3_static_complete(rt,2u);
        }
        case 0xD791u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD792u; return dd3_static_complete(rt,2u);
        }
        case 0xD792u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD794u; return dd3_static_complete(rt,3u);
        }
        case 0xD794u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD796u; return dd3_static_complete(rt,3u);
        }
        case 0xD796u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD798u; return dd3_static_complete(rt,3u);
        }
        case 0xD798u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD79Au; return dd3_static_complete(rt,2u);
        }
        case 0xD79Au: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD79Cu; return dd3_static_complete(rt,3u);
        }
        case 0xD79Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD79Eu; return dd3_static_complete(rt,2u);
        }
        case 0xD79Eu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD7A0u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD7A0u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD7A1u; return dd3_static_complete(rt,2u);
        }
        case 0xD7A1u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD7A3u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD7A3u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD7A5u,0xD7A9u)) c++; rt->state.cpu.pc=0xD7A9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD7A5u; return dd3_static_complete(rt,2u);
        }
        case 0xD7A5u: {
            dd3_static_push8(rt,(uint8_t)(0xD7A7u>>8)); dd3_static_push8(rt,(uint8_t)0xD7A7u);
            rt->state.cpu.pc=0xD742u; return dd3_static_complete(rt,6u);
        }
        case 0xD7A8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD7A9u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD7AAu; return dd3_static_complete(rt,2u);
        }
        case 0xD7AAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD7ABu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD7ACu; return dd3_static_complete(rt,2u);
        }
        case 0xD7ACu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD7ADu: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD7AFu; return dd3_static_complete(rt,3u);
        }
        case 0xD7AFu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD7B0u; return dd3_static_complete(rt,2u);
        }
        case 0xD7B0u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD7B1u; return dd3_static_complete(rt,2u);
        }
        case 0xD7B1u: {
            uint16_t ea=(uint16_t)(0xD7DCu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD7B4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xD7DCu,ea)?1u:0u));
        }
        case 0xD7B4u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD7B6u; return dd3_static_complete(rt,3u);
        }
        case 0xD7B6u: {
            uint16_t ea=(uint16_t)(0xD7DDu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD7B9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xD7DDu,ea)?1u:0u));
        }
        case 0xD7B9u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD7BBu; return dd3_static_complete(rt,3u);
        }
        case 0xD7BBu: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD7BDu; return dd3_static_complete(rt,3u);
        }
        case 0xD7BDu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD7BFu; return dd3_static_complete(rt,3u);
        }
        case 0xD7BFu: {
            uint16_t ea=0x30u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD7C1u; return dd3_static_complete(rt,3u);
        }
        case 0xD7C1u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD7C3u; return dd3_static_complete(rt,3u);
        }
        case 0xD7C3u: {
            dd3_static_push8(rt,(uint8_t)(0xD7C5u>>8)); dd3_static_push8(rt,(uint8_t)0xD7C5u);
            rt->state.cpu.pc=0xC876u; return dd3_static_complete(rt,6u);
        }
        case 0xD7C6u: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD7C8u; return dd3_static_complete(rt,3u);
        }
        case 0xD7C8u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD7C9u; return dd3_static_complete(rt,2u);
        }
        case 0xD7C9u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD7CAu; return dd3_static_complete(rt,2u);
        }
        case 0xD7CAu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD7CBu; return dd3_static_complete(rt,2u);
        }
        case 0xD7CBu: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD7CDu; return dd3_static_complete(rt,3u);
        }
        case 0xD7CDu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD7CEu; return dd3_static_complete(rt,2u);
        }
        case 0xD7CEu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD7D0u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD7D0u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD7D1u; return dd3_static_complete(rt,2u);
        }
        case 0xD7D1u: {
            uint8_t v=0x2Bu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD7D3u; return dd3_static_complete(rt,2u);
        }
        case 0xD7D3u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD7D5u; return dd3_static_complete(rt,3u);
        }
        case 0xD7D5u: {
            uint8_t v=0xD8u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD7D7u; return dd3_static_complete(rt,2u);
        }
        case 0xD7D7u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD7D9u; return dd3_static_complete(rt,2u);
        }
        case 0xD7D9u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD7DBu; return dd3_static_complete(rt,3u);
        }
        case 0xD7DBu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD88Fu: {
            dd3_static_push8(rt,(uint8_t)(0xD891u>>8)); dd3_static_push8(rt,(uint8_t)0xD891u);
            rt->state.cpu.pc=0xFCE3u; return dd3_static_complete(rt,6u);
        }
        case 0xD892u: {
            dd3_static_push8(rt,(uint8_t)(0xD894u>>8)); dd3_static_push8(rt,(uint8_t)0xD894u);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xD895u: {
            dd3_static_push8(rt,(uint8_t)(0xD897u>>8)); dd3_static_push8(rt,(uint8_t)0xD897u);
            rt->state.cpu.pc=0xDBC0u; return dd3_static_complete(rt,6u);
        }
        case 0xD898u: {
            uint16_t ea=0x2002u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD89Bu; return dd3_static_complete(rt,4u);
        }
        case 0xD89Bu: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD89Du; return dd3_static_complete(rt,2u);
        }
        case 0xD89Du: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8A0u; return dd3_static_complete(rt,4u);
        }
        case 0xD8A0u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8A2u; return dd3_static_complete(rt,2u);
        }
        case 0xD8A2u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8A5u; return dd3_static_complete(rt,4u);
        }
        case 0xD8A5u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8A7u; return dd3_static_complete(rt,2u);
        }
        case 0xD8A7u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8A9u; return dd3_static_complete(rt,2u);
        }
        case 0xD8A9u: {
            dd3_static_write8(rt,0x2007u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8ACu; return dd3_static_complete(rt,4u);
        }
        case 0xD8ACu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD8ADu; return dd3_static_complete(rt,2u);
        }
        case 0xD8ADu: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xD8AFu; return dd3_static_complete(rt,2u);
        }
        case 0xD8AFu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD8B1u,0xD8A9u)) c++; rt->state.cpu.pc=0xD8A9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD8B1u; return dd3_static_complete(rt,2u);
        }
        case 0xD8B1u: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8B3u; return dd3_static_complete(rt,2u);
        }
        case 0xD8B3u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8B6u; return dd3_static_complete(rt,4u);
        }
        case 0xD8B6u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8B8u; return dd3_static_complete(rt,2u);
        }
        case 0xD8B8u: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8BBu; return dd3_static_complete(rt,4u);
        }
        case 0xD8BBu: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8BEu; return dd3_static_complete(rt,4u);
        }
        case 0xD8BEu: {
            dd3_static_write8(rt,0x2006u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8C1u; return dd3_static_complete(rt,4u);
        }
        case 0xD8C1u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD8C2u: {
            uint16_t ea=0x04DDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8C5u; return dd3_static_complete(rt,4u);
        }
        case 0xD8C5u: {
            uint16_t ea=0x04DFu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xD8C8u; return dd3_static_complete(rt,4u);
        }
        case 0xD8C8u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD8CAu,0xD920u)) c++; rt->state.cpu.pc=0xD920u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD8CAu; return dd3_static_complete(rt,2u);
        }
        case 0xD8CAu: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8CCu; return dd3_static_complete(rt,2u);
        }
        case 0xD8CCu: {
            dd3_static_push8(rt,(uint8_t)(0xD8CEu>>8)); dd3_static_push8(rt,(uint8_t)0xD8CEu);
            rt->state.cpu.pc=0xD97Cu; return dd3_static_complete(rt,6u);
        }
        case 0xD8CFu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD8D1u,0xD8D4u)) c++; rt->state.cpu.pc=0xD8D4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD8D1u; return dd3_static_complete(rt,2u);
        }
        case 0xD8D1u: {
            rt->state.cpu.pc=0xD956u; return dd3_static_complete(rt,3u);
        }
        case 0xD8D4u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8D6u; return dd3_static_complete(rt,2u);
        }
        case 0xD8D6u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8D8u; return dd3_static_complete(rt,3u);
        }
        case 0xD8D8u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8DAu; return dd3_static_complete(rt,3u);
        }
        case 0xD8DAu: {
            uint16_t ea=0x04DDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8DDu; return dd3_static_complete(rt,4u);
        }
        case 0xD8DDu: {
            dd3_static_write8(rt,0x04DFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8E0u; return dd3_static_complete(rt,4u);
        }
        case 0xD8E0u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8E1u; return dd3_static_complete(rt,2u);
        }
        case 0xD8E1u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8E2u; return dd3_static_complete(rt,2u);
        }
        case 0xD8E2u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8E3u; return dd3_static_complete(rt,2u);
        }
        case 0xD8E3u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8E4u; return dd3_static_complete(rt,2u);
        }
        case 0xD8E4u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8E6u; return dd3_static_complete(rt,3u);
        }
        case 0xD8E6u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xD8E8u; return dd3_static_complete(rt,5u);
        }
        case 0xD8E8u: {
            uint8_t v=0x90u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8EAu; return dd3_static_complete(rt,2u);
        }
        case 0xD8EAu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD8EBu; return dd3_static_complete(rt,2u);
        }
        case 0xD8EBu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD8EDu; return dd3_static_complete(rt,3u);
        }
        case 0xD8EDu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8EFu; return dd3_static_complete(rt,3u);
        }
        case 0xD8EFu: {
            uint8_t v=0xD9u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8F1u; return dd3_static_complete(rt,2u);
        }
        case 0xD8F1u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD8F3u; return dd3_static_complete(rt,3u);
        }
        case 0xD8F3u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD8F5u; return dd3_static_complete(rt,3u);
        }
        case 0xD8F5u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8F8u; return dd3_static_complete(rt,4u);
        }
        case 0xD8F8u: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD8FAu; return dd3_static_complete(rt,2u);
        }
        case 0xD8FAu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xD8FDu; return dd3_static_complete(rt,5u);
        }
        case 0xD8FDu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD8FEu; return dd3_static_complete(rt,2u);
        }
        case 0xD8FEu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD900u; return dd3_static_complete(rt,2u);
        }
        case 0xD900u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xD903u; return dd3_static_complete(rt,5u);
        }
        case 0xD903u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD904u; return dd3_static_complete(rt,2u);
        }
        case 0xD904u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD906u; return dd3_static_complete(rt,2u);
        }
        case 0xD906u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xD909u; return dd3_static_complete(rt,5u);
        }
        case 0xD909u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD90Au; return dd3_static_complete(rt,2u);
        }
        case 0xD90Au: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD90Cu; return dd3_static_complete(rt,2u);
        }
        case 0xD90Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xD90Fu; return dd3_static_complete(rt,5u);
        }
        case 0xD90Fu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD910u; return dd3_static_complete(rt,2u);
        }
        case 0xD910u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD912u; return dd3_static_complete(rt,2u);
        }
        case 0xD912u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD914u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD914u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xD917u; return dd3_static_complete(rt,5u);
        }
        case 0xD917u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD918u; return dd3_static_complete(rt,2u);
        }
        case 0xD918u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD919u; return dd3_static_complete(rt,2u);
        }
        case 0xD919u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xD91Bu; return dd3_static_complete(rt,2u);
        }
        case 0xD91Bu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD91Du,0xD912u)) c++; rt->state.cpu.pc=0xD912u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD91Du; return dd3_static_complete(rt,2u);
        }
        case 0xD91Du: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xD920u; return dd3_static_complete(rt,4u);
        }
        case 0xD920u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD922u; return dd3_static_complete(rt,2u);
        }
        case 0xD922u: {
            dd3_static_push8(rt,(uint8_t)(0xD924u>>8)); dd3_static_push8(rt,(uint8_t)0xD924u);
            rt->state.cpu.pc=0xD97Cu; return dd3_static_complete(rt,6u);
        }
        case 0xD925u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD927u,0xD92Au)) c++; rt->state.cpu.pc=0xD92Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD927u; return dd3_static_complete(rt,2u);
        }
        case 0xD927u: {
            rt->state.cpu.pc=0xD956u; return dd3_static_complete(rt,3u);
        }
        case 0xD92Au: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD92Du; return dd3_static_complete(rt,4u);
        }
        case 0xD92Du: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD92Fu; return dd3_static_complete(rt,2u);
        }
        case 0xD92Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xD932u; return dd3_static_complete(rt,5u);
        }
        case 0xD932u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD934u; return dd3_static_complete(rt,2u);
        }
        case 0xD934u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD935u; return dd3_static_complete(rt,2u);
        }
        case 0xD935u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xD938u; return dd3_static_complete(rt,5u);
        }
        case 0xD938u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD93Au; return dd3_static_complete(rt,2u);
        }
        case 0xD93Au: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD93Bu; return dd3_static_complete(rt,2u);
        }
        case 0xD93Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xD93Eu; return dd3_static_complete(rt,5u);
        }
        case 0xD93Eu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD93Fu; return dd3_static_complete(rt,2u);
        }
        case 0xD93Fu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD941u; return dd3_static_complete(rt,2u);
        }
        case 0xD941u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xD944u; return dd3_static_complete(rt,5u);
        }
        case 0xD944u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD945u; return dd3_static_complete(rt,2u);
        }
        case 0xD945u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD947u; return dd3_static_complete(rt,2u);
        }
        case 0xD947u: {
            uint16_t ea=(uint16_t)(0x06C4u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD94Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06C4u,ea)?1u:0u));
        }
        case 0xD94Au: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xD94Du; return dd3_static_complete(rt,5u);
        }
        case 0xD94Du: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xD94Eu; return dd3_static_complete(rt,2u);
        }
        case 0xD94Eu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD94Fu; return dd3_static_complete(rt,2u);
        }
        case 0xD94Fu: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xD951u; return dd3_static_complete(rt,2u);
        }
        case 0xD951u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD953u,0xD947u)) c++; rt->state.cpu.pc=0xD947u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD953u; return dd3_static_complete(rt,2u);
        }
        case 0xD953u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xD956u; return dd3_static_complete(rt,4u);
        }
        case 0xD956u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD957u: {
            uint8_t v=0x90u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD959u; return dd3_static_complete(rt,2u);
        }
        case 0xD959u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD95Bu; return dd3_static_complete(rt,3u);
        }
        case 0xD95Bu: {
            uint8_t v=0xDBu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD95Du; return dd3_static_complete(rt,2u);
        }
        case 0xD95Du: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD95Fu; return dd3_static_complete(rt,3u);
        }
        case 0xD95Fu: {
            uint16_t ea=0x04DEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD962u; return dd3_static_complete(rt,4u);
        }
        case 0xD962u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD963u; return dd3_static_complete(rt,2u);
        }
        case 0xD963u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD964u; return dd3_static_complete(rt,2u);
        }
        case 0xD964u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD965u; return dd3_static_complete(rt,2u);
        }
        case 0xD965u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xD966u; return dd3_static_complete(rt,2u);
        }
        case 0xD966u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD967u; return dd3_static_complete(rt,2u);
        }
        case 0xD967u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD969u; return dd3_static_complete(rt,3u);
        }
        case 0xD969u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD96Bu; return dd3_static_complete(rt,3u);
        }
        case 0xD96Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD96Du; return dd3_static_complete(rt,2u);
        }
        case 0xD96Du: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xD96Fu; return dd3_static_complete(rt,3u);
        }
        case 0xD96Fu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xD971u; return dd3_static_complete(rt,3u);
        }
        case 0xD971u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD973u; return dd3_static_complete(rt,2u);
        }
        case 0xD973u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD975u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xD975u: {
            dd3_static_write8(rt,(uint16_t)(0x06C4u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xD978u; return dd3_static_complete(rt,5u);
        }
        case 0xD978u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xD979u; return dd3_static_complete(rt,2u);
        }
        case 0xD979u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xD97Bu,0xD973u)) c++; rt->state.cpu.pc=0xD973u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD97Bu; return dd3_static_complete(rt,2u);
        }
        case 0xD97Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD97Cu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xD97Eu; return dd3_static_complete(rt,3u);
        }
        case 0xD97Eu: {
            uint16_t ea=0x060Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xD981u; return dd3_static_complete(rt,4u);
        }
        case 0xD981u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD982u; return dd3_static_complete(rt,2u);
        }
        case 0xD982u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD985u; return dd3_static_complete(rt,4u);
        }
        case 0xD985u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xD987u,0xD98Eu)) c++; rt->state.cpu.pc=0xD98Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD987u; return dd3_static_complete(rt,2u);
        }
        case 0xD987u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD988u; return dd3_static_complete(rt,2u);
        }
        case 0xD988u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xD98Au; return dd3_static_complete(rt,3u);
        }
        case 0xD98Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xD98Cu,0xD98Eu)) c++; rt->state.cpu.pc=0xD98Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xD98Cu; return dd3_static_complete(rt,2u);
        }
        case 0xD98Cu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xD98Du; return dd3_static_complete(rt,2u);
        }
        case 0xD98Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xD98Eu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xD98Fu; return dd3_static_complete(rt,2u);
        }
        case 0xD98Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xDBC0u: {
            uint16_t ea=0xA0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDBC2u; return dd3_static_complete(rt,3u);
        }
        case 0xDBC2u: {
            uint8_t v=0xFBu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDBC4u; return dd3_static_complete(rt,2u);
        }
        case 0xDBC4u: {
            dd3_static_write8(rt,0x2000u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDBC7u; return dd3_static_complete(rt,4u);
        }
        case 0xDBC7u: {
            dd3_static_write8(rt,0xA0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDBC9u; return dd3_static_complete(rt,3u);
        }
        case 0xDBC9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xDBCAu: {
            uint16_t ea=0xBFFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDBCDu; return dd3_static_complete(rt,4u);
        }
        case 0xDBCDu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDBCEu; return dd3_static_complete(rt,3u);
        }
        case 0xDBCEu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDBD0u; return dd3_static_complete(rt,2u);
        }
        case 0xDBD0u: {
            dd3_static_write8(rt,0x0308u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDBD3u; return dd3_static_complete(rt,4u);
        }
        case 0xDBD3u: {
            dd3_static_push8(rt,(uint8_t)(0xDBD5u>>8)); dd3_static_push8(rt,(uint8_t)0xDBD5u);
            rt->state.cpu.pc=0xD052u; return dd3_static_complete(rt,6u);
        }
        case 0xDBD6u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDBD8u; return dd3_static_complete(rt,2u);
        }
        case 0xDBD8u: {
            dd3_static_write8(rt,0x04F5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDBDBu; return dd3_static_complete(rt,4u);
        }
        case 0xDBDBu: {
            dd3_static_write8(rt,0x11u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDBDDu; return dd3_static_complete(rt,3u);
        }
        case 0xDBDDu: {
            dd3_static_write8(rt,0x0Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xDBDFu; return dd3_static_complete(rt,3u);
        }
        case 0xDBDFu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDBE1u; return dd3_static_complete(rt,2u);
        }
        case 0xDBE1u: {
            uint16_t ea=(uint16_t)(0xDF28u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDBE4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xDF28u,ea)?1u:0u));
        }
        case 0xDBE4u: {
            dd3_static_write8(rt,0x11u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDBE6u; return dd3_static_complete(rt,3u);
        }
        case 0xDBE6u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDBE7u; return dd3_static_complete(rt,2u);
        }
        case 0xDBE7u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDBE9u; return dd3_static_complete(rt,4u);
        }
        case 0xDBE9u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xDBEBu,0xDBF7u)) c++; rt->state.cpu.pc=0xDBF7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDBEBu; return dd3_static_complete(rt,2u);
        }
        case 0xDBEBu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDBEDu; return dd3_static_complete(rt,2u);
        }
        case 0xDBEDu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDBEFu,0xDBF7u)) c++; rt->state.cpu.pc=0xDBF7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDBEFu; return dd3_static_complete(rt,2u);
        }
        case 0xDBEFu: {
            uint16_t ea=0x0Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDBF1u; return dd3_static_complete(rt,3u);
        }
        case 0xDBF1u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDBF3u; return dd3_static_complete(rt,3u);
        }
        case 0xDBF3u: {
            dd3_static_write8(rt,(uint16_t)((0x04u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xDBF5u; return dd3_static_complete(rt,4u);
        }
        case 0xDBF5u: {
            uint16_t ea=0x0Du; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xDBF7u; return dd3_static_complete(rt,5u);
        }
        case 0xDBF7u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDBF8u; return dd3_static_complete(rt,2u);
        }
        case 0xDBF8u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xDBFAu; return dd3_static_complete(rt,2u);
        }
        case 0xDBFAu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDBFCu,0xDBE1u)) c++; rt->state.cpu.pc=0xDBE1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDBFCu; return dd3_static_complete(rt,2u);
        }
        case 0xDBFCu: {
            uint16_t ea=0x0Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDBFEu; return dd3_static_complete(rt,3u);
        }
        case 0xDBFEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDC00u,0xDC03u)) c++; rt->state.cpu.pc=0xDC03u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDC00u; return dd3_static_complete(rt,2u);
        }
        case 0xDC00u: {
            rt->state.cpu.pc=0xDC9Au; return dd3_static_complete(rt,3u);
        }
        case 0xDC03u: {
            uint16_t ea=0x0Du; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xDC05u; return dd3_static_complete(rt,5u);
        }
        case 0xDC05u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDC07u,0xDC3Bu)) c++; rt->state.cpu.pc=0xDC3Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDC07u; return dd3_static_complete(rt,2u);
        }
        case 0xDC07u: {
            uint16_t ea=0x0Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC09u; return dd3_static_complete(rt,3u);
        }
        case 0xDC09u: {
            dd3_static_write8(rt,0x11u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC0Bu; return dd3_static_complete(rt,3u);
        }
        case 0xDC0Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC0Du; return dd3_static_complete(rt,2u);
        }
        case 0xDC0Du: {
            dd3_static_write8(rt,0x0Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC0Fu; return dd3_static_complete(rt,3u);
        }
        case 0xDC0Fu: {
            uint16_t ea=0x0Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC11u; return dd3_static_complete(rt,3u);
        }
        case 0xDC11u: {
            uint16_t ea=(uint16_t)((0x04u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC13u; return dd3_static_complete(rt,4u);
        }
        case 0xDC13u: {
            uint16_t ea=(uint16_t)((0x05u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC15u; return dd3_static_complete(rt,4u);
        }
        case 0xDC15u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDC16u; return dd3_static_complete(rt,2u);
        }
        case 0xDC16u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC18u; return dd3_static_complete(rt,4u);
        }
        case 0xDC18u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xDC19u; return dd3_static_complete(rt,2u);
        }
        case 0xDC19u: {
            uint16_t ea=(uint16_t)(0x00CBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xDC1Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00CBu,ea)?1u:0u));
        }
        case 0xDC1Cu: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC1Eu; return dd3_static_complete(rt,4u);
        }
        case 0xDC1Eu: {
            uint16_t ea=(uint16_t)(0x00D5u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xDC21u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00D5u,ea)?1u:0u));
        }
        case 0xDC21u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDC23u,0xDC2Fu)) c++; rt->state.cpu.pc=0xDC2Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDC23u; return dd3_static_complete(rt,2u);
        }
        case 0xDC23u: {
            uint16_t ea=0x0Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC25u; return dd3_static_complete(rt,3u);
        }
        case 0xDC25u: {
            uint16_t ea=(uint16_t)((0x04u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC27u; return dd3_static_complete(rt,4u);
        }
        case 0xDC27u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC28u; return dd3_static_complete(rt,3u);
        }
        case 0xDC28u: {
            uint16_t ea=(uint16_t)((0x05u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC2Au; return dd3_static_complete(rt,4u);
        }
        case 0xDC2Au: {
            dd3_static_write8(rt,(uint16_t)((0x04u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xDC2Cu; return dd3_static_complete(rt,4u);
        }
        case 0xDC2Cu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC2Du; return dd3_static_complete(rt,4u);
        }
        case 0xDC2Du: {
            dd3_static_write8(rt,(uint16_t)((0x05u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xDC2Fu; return dd3_static_complete(rt,4u);
        }
        case 0xDC2Fu: {
            uint16_t ea=0x0Cu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xDC31u; return dd3_static_complete(rt,5u);
        }
        case 0xDC31u: {
            uint16_t ea=0x0Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC33u; return dd3_static_complete(rt,3u);
        }
        case 0xDC33u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDC35u; return dd3_static_complete(rt,3u);
        }
        case 0xDC35u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDC37u,0xDC0Fu)) c++; rt->state.cpu.pc=0xDC0Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDC37u; return dd3_static_complete(rt,2u);
        }
        case 0xDC37u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xDC39u; return dd3_static_complete(rt,5u);
        }
        case 0xDC39u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDC3Bu,0xDC0Bu)) c++; rt->state.cpu.pc=0xDC0Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDC3Bu; return dd3_static_complete(rt,2u);
        }
        case 0xDC3Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC3Du; return dd3_static_complete(rt,2u);
        }
        case 0xDC3Du: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC3Fu; return dd3_static_complete(rt,3u);
        }
        case 0xDC3Fu: {
            dd3_static_write8(rt,0x0Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC41u; return dd3_static_complete(rt,3u);
        }
        case 0xDC41u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC43u; return dd3_static_complete(rt,2u);
        }
        case 0xDC43u: {
            dd3_static_write8(rt,0x12u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC45u; return dd3_static_complete(rt,3u);
        }
        case 0xDC45u: {
            uint16_t ea=0x0Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC47u; return dd3_static_complete(rt,3u);
        }
        case 0xDC47u: {
            uint16_t ea=(uint16_t)((0x04u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC49u; return dd3_static_complete(rt,4u);
        }
        case 0xDC49u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.y);
            rt->state.cpu.pc=0xDC4Bu; return dd3_static_complete(rt,3u);
        }
        case 0xDC4Bu: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC4Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0xDC4Eu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDC4Fu; return dd3_static_complete(rt,2u);
        }
        case 0xDC4Fu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC50u; return dd3_static_complete(rt,2u);
        }
        case 0xDC50u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDC51u; return dd3_static_complete(rt,2u);
        }
        case 0xDC51u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC52u; return dd3_static_complete(rt,2u);
        }
        case 0xDC52u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC53u; return dd3_static_complete(rt,3u);
        }
        case 0xDC53u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC54u; return dd3_static_complete(rt,2u);
        }
        case 0xDC54u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDC55u; return dd3_static_complete(rt,2u);
        }
        case 0xDC55u: {
            uint16_t ea=(uint16_t)(0xDF08u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC58u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xDF08u,ea)?1u:0u));
        }
        case 0xDC58u: {
            dd3_static_push8(rt,(uint8_t)(0xDC5Au>>8)); dd3_static_push8(rt,(uint8_t)0xDC5Au);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xDC5Bu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC5Cu; return dd3_static_complete(rt,4u);
        }
        case 0xDC5Cu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDC5Du; return dd3_static_complete(rt,2u);
        }
        case 0xDC5Du: {
            uint16_t ea=(uint16_t)(0x8000u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC60u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8000u,ea)?1u:0u));
        }
        case 0xDC60u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC62u; return dd3_static_complete(rt,3u);
        }
        case 0xDC62u: {
            uint16_t ea=(uint16_t)(0x8001u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC65u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8001u,ea)?1u:0u));
        }
        case 0xDC65u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC67u; return dd3_static_complete(rt,3u);
        }
        case 0xDC67u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC69u; return dd3_static_complete(rt,3u);
        }
        case 0xDC69u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDC6Bu,0xDC92u)) c++; rt->state.cpu.pc=0xDC92u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDC6Bu; return dd3_static_complete(rt,2u);
        }
        case 0xDC6Bu: {
            uint16_t ea=0x0Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC6Du; return dd3_static_complete(rt,3u);
        }
        case 0xDC6Du: {
            uint16_t ea=(uint16_t)((0x04u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC6Fu; return dd3_static_complete(rt,4u);
        }
        case 0xDC6Fu: {
            uint16_t ea=(uint16_t)(0x007Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC72u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x007Du,ea)?1u:0u));
        }
        case 0xDC72u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC73u; return dd3_static_complete(rt,3u);
        }
        case 0xDC73u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC75u; return dd3_static_complete(rt,2u);
        }
        case 0xDC75u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC76u; return dd3_static_complete(rt,2u);
        }
        case 0xDC76u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC78u; return dd3_static_complete(rt,3u);
        }
        case 0xDC78u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC79u; return dd3_static_complete(rt,4u);
        }
        case 0xDC79u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC7Bu; return dd3_static_complete(rt,2u);
        }
        case 0xDC7Bu: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDC7Du; return dd3_static_complete(rt,2u);
        }
        case 0xDC7Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDC7Fu,0xDC92u)) c++; rt->state.cpu.pc=0xDC92u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDC7Fu; return dd3_static_complete(rt,2u);
        }
        case 0xDC7Fu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDC80u; return dd3_static_complete(rt,2u);
        }
        case 0xDC80u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC81u; return dd3_static_complete(rt,2u);
        }
        case 0xDC81u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDC82u; return dd3_static_complete(rt,2u);
        }
        case 0xDC82u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC84u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xDC84u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC86u; return dd3_static_complete(rt,3u);
        }
        case 0xDC86u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDC87u; return dd3_static_complete(rt,2u);
        }
        case 0xDC87u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC89u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xDC89u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC8Bu; return dd3_static_complete(rt,3u);
        }
        case 0xDC8Bu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC8Du; return dd3_static_complete(rt,3u);
        }
        case 0xDC8Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDC8Fu,0xDC92u)) c++; rt->state.cpu.pc=0xDC92u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDC8Fu; return dd3_static_complete(rt,2u);
        }
        case 0xDC8Fu: {
            dd3_static_push8(rt,(uint8_t)(0xDC91u>>8)); dd3_static_push8(rt,(uint8_t)0xDC91u);
            rt->state.cpu.pc=0xDCC4u; return dd3_static_complete(rt,6u);
        }
        case 0xDC92u: {
            uint16_t ea=0x0Eu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xDC94u; return dd3_static_complete(rt,5u);
        }
        case 0xDC94u: {
            uint16_t ea=0x0Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDC96u; return dd3_static_complete(rt,3u);
        }
        case 0xDC96u: {
            uint16_t ea=0x0Eu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDC98u; return dd3_static_complete(rt,3u);
        }
        case 0xDC98u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDC9Au,0xDC41u)) c++; rt->state.cpu.pc=0xDC41u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDC9Au; return dd3_static_complete(rt,2u);
        }
        case 0xDC9Au: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDC9Bu; return dd3_static_complete(rt,4u);
        }
        case 0xDC9Bu: {
            dd3_static_push8(rt,(uint8_t)(0xDC9Du>>8)); dd3_static_push8(rt,(uint8_t)0xDC9Du);
            rt->state.cpu.pc=0xFF1Bu; return dd3_static_complete(rt,6u);
        }
        case 0xDC9Eu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDCA0u; return dd3_static_complete(rt,2u);
        }
        case 0xDCA0u: {
            dd3_static_write8(rt,0x0308u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDCA3u; return dd3_static_complete(rt,4u);
        }
        case 0xDCA3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xDCC4u: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDCC6u; return dd3_static_complete(rt,3u);
        }
        case 0xDCC6u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDCC8u,0xDCC9u)) c++; rt->state.cpu.pc=0xDCC9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDCC8u; return dd3_static_complete(rt,2u);
        }
        case 0xDCC8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xDCC9u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDCCBu; return dd3_static_complete(rt,2u);
        }
        case 0xDCCBu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDCCDu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xDCCDu: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDCCFu; return dd3_static_complete(rt,3u);
        }
        case 0xDCCFu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDCD0u; return dd3_static_complete(rt,2u);
        }
        case 0xDCD0u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDCD2u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xDCD2u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDCD4u; return dd3_static_complete(rt,3u);
        }
        case 0xDCD4u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDCD5u; return dd3_static_complete(rt,2u);
        }
        case 0xDCD5u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDCD7u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xDCD7u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDCD9u; return dd3_static_complete(rt,3u);
        }
        case 0xDCD9u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDCDAu; return dd3_static_complete(rt,2u);
        }
        case 0xDCDAu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDCDCu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xDCDCu: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xDCDEu; return dd3_static_complete(rt,3u);
        }
        case 0xDCDEu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDCDFu; return dd3_static_complete(rt,2u);
        }
        case 0xDCDFu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDCE1u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xDCE1u: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDCE3u; return dd3_static_complete(rt,3u);
        }
        case 0xDCE3u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDCE4u; return dd3_static_complete(rt,2u);
        }
        case 0xDCE4u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDCE6u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xDCE6u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDCE8u; return dd3_static_complete(rt,3u);
        }
        case 0xDCE8u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDCE9u; return dd3_static_complete(rt,2u);
        }
        case 0xDCE9u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDCEBu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xDCEBu: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDCEDu; return dd3_static_complete(rt,3u);
        }
        case 0xDCEDu: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xDCEFu; return dd3_static_complete(rt,2u);
        }
        case 0xDCEFu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDCF1u,0xDD51u)) c++; rt->state.cpu.pc=0xDD51u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDCF1u; return dd3_static_complete(rt,2u);
        }
        case 0xDCF1u: {
            uint16_t ea=(uint16_t)(0xDF30u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDCF4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xDF30u,ea)?1u:0u));
        }
        case 0xDCF4u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xDCF6u,0xDD51u)) c++; rt->state.cpu.pc=0xDD51u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDCF6u; return dd3_static_complete(rt,2u);
        }
        case 0xDCF6u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDCF8u; return dd3_static_complete(rt,3u);
        }
        case 0xDCF8u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDCFAu; return dd3_static_complete(rt,4u);
        }
        case 0xDCFAu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDCFBu; return dd3_static_complete(rt,2u);
        }
        case 0xDCFBu: {
            uint16_t ea=(uint16_t)(0xDCA4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDCFEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xDCA4u,ea)?1u:0u));
        }
        case 0xDCFEu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDCFFu; return dd3_static_complete(rt,2u);
        }
        case 0xDCFFu: {
            uint16_t ea=(uint16_t)(0xDD0Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD02u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xDD0Cu,ea)?1u:0u));
        }
        case 0xDD02u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDD04u; return dd3_static_complete(rt,3u);
        }
        case 0xDD04u: {
            uint16_t ea=(uint16_t)(0xDD0Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD07u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xDD0Du,ea)?1u:0u));
        }
        case 0xDD07u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xDD09u; return dd3_static_complete(rt,3u);
        }
        case 0xDD09u: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x0029u); return dd3_static_complete(rt,5u);
        }
        case 0xDD16u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD18u; return dd3_static_complete(rt,3u);
        }
        case 0xDD18u: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD1Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0xDD1Bu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xDD1Du,0xDD29u)) c++; rt->state.cpu.pc=0xDD29u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDD1Du; return dd3_static_complete(rt,2u);
        }
        case 0xDD1Du: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xDD1Fu; return dd3_static_complete(rt,5u);
        }
        case 0xDD1Fu: {
            uint8_t v=0x91u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDD21u; return dd3_static_complete(rt,2u);
        }
        case 0xDD21u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDD23u,0xDD29u)) c++; rt->state.cpu.pc=0xDD29u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDD23u; return dd3_static_complete(rt,2u);
        }
        case 0xDD23u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDD25u,0xDD33u)) c++; rt->state.cpu.pc=0xDD33u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDD25u; return dd3_static_complete(rt,2u);
        }
        case 0xDD25u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xDD27u; return dd3_static_complete(rt,5u);
        }
        case 0xDD27u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDD29u,0xDD51u)) c++; rt->state.cpu.pc=0xDD51u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDD29u; return dd3_static_complete(rt,2u);
        }
        case 0xDD29u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xDD2Bu; return dd3_static_complete(rt,5u);
        }
        case 0xDD2Bu: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xDD2Du; return dd3_static_complete(rt,5u);
        }
        case 0xDD2Du: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD2Fu; return dd3_static_complete(rt,2u);
        }
        case 0xDD2Fu: {
            uint8_t v=0x04u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD31u; return dd3_static_complete(rt,2u);
        }
        case 0xDD31u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDD33u,0xDD55u)) c++; rt->state.cpu.pc=0xDD55u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDD33u; return dd3_static_complete(rt,2u);
        }
        case 0xDD33u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD35u; return dd3_static_complete(rt,2u);
        }
        case 0xDD35u: {
            uint8_t v=0x02u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD37u; return dd3_static_complete(rt,2u);
        }
        case 0xDD37u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDD39u,0xDD55u)) c++; rt->state.cpu.pc=0xDD55u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDD39u; return dd3_static_complete(rt,2u);
        }
        case 0xDD39u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD3Bu; return dd3_static_complete(rt,3u);
        }
        case 0xDD3Bu: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD3Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0xDD3Eu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xDD40u,0xDD51u)) c++; rt->state.cpu.pc=0xDD51u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDD40u; return dd3_static_complete(rt,2u);
        }
        case 0xDD40u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xDD42u,0xDD49u)) c++; rt->state.cpu.pc=0xDD49u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDD42u; return dd3_static_complete(rt,2u);
        }
        case 0xDD42u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD44u; return dd3_static_complete(rt,3u);
        }
        case 0xDD44u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD47u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0xDD47u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xDD49u,0xDD51u)) c++; rt->state.cpu.pc=0xDD51u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDD49u; return dd3_static_complete(rt,2u);
        }
        case 0xDD49u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xDD4Bu; return dd3_static_complete(rt,5u);
        }
        case 0xDD4Bu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD4Du; return dd3_static_complete(rt,2u);
        }
        case 0xDD4Du: {
            uint8_t v=0x02u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD4Fu; return dd3_static_complete(rt,2u);
        }
        case 0xDD4Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDD51u,0xDD55u)) c++; rt->state.cpu.pc=0xDD55u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDD51u; return dd3_static_complete(rt,2u);
        }
        case 0xDD51u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD53u; return dd3_static_complete(rt,2u);
        }
        case 0xDD53u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD55u; return dd3_static_complete(rt,2u);
        }
        case 0xDD55u: {
            dd3_static_write8(rt,0x11u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDD57u; return dd3_static_complete(rt,3u);
        }
        case 0xDD57u: {
            dd3_static_write8(rt,0x0Cu,rt->state.cpu.x);
            rt->state.cpu.pc=0xDD59u; return dd3_static_complete(rt,3u);
        }
        case 0xDD59u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD5Bu; return dd3_static_complete(rt,3u);
        }
        case 0xDD5Bu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD5Du; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xDD5Du: {
            dd3_static_write8(rt,0x26u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDD5Fu; return dd3_static_complete(rt,3u);
        }
        case 0xDD5Fu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD61u; return dd3_static_complete(rt,3u);
        }
        case 0xDD61u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD63u; return dd3_static_complete(rt,4u);
        }
        case 0xDD63u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDD64u; return dd3_static_complete(rt,2u);
        }
        case 0xDD64u: {
            uint16_t ea=(uint16_t)(0xDD77u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD67u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xDD77u,ea)?1u:0u));
        }
        case 0xDD67u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDD68u; return dd3_static_complete(rt,2u);
        }
        case 0xDD68u: {
            uint16_t ea=(uint16_t)(0xDD97u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD6Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xDD97u,ea)?1u:0u));
        }
        case 0xDD6Bu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDD6Du; return dd3_static_complete(rt,3u);
        }
        case 0xDD6Du: {
            uint16_t ea=(uint16_t)(0xDD98u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD70u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xDD98u,ea)?1u:0u));
        }
        case 0xDD70u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xDD72u; return dd3_static_complete(rt,3u);
        }
        case 0xDD72u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDD74u; return dd3_static_complete(rt,3u);
        }
        case 0xDD74u: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x0029u); return dd3_static_complete(rt,5u);
        }
        case 0xDDA1u: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDDA3u; return dd3_static_complete(rt,3u);
        }
        case 0xDDA3u: {
            uint8_t v=0x40u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDDA5u; return dd3_static_complete(rt,2u);
        }
        case 0xDDA5u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDDA7u,0xDDADu)) c++; rt->state.cpu.pc=0xDDADu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDDA7u; return dd3_static_complete(rt,2u);
        }
        case 0xDDA7u: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDDA9u; return dd3_static_complete(rt,2u);
        }
        case 0xDDA9u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDDABu; return dd3_static_complete(rt,2u);
        }
        case 0xDDABu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDDADu,0xDDE3u)) c++; rt->state.cpu.pc=0xDDE3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDDADu; return dd3_static_complete(rt,2u);
        }
        case 0xDDADu: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDDAFu; return dd3_static_complete(rt,2u);
        }
        case 0xDDAFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDDB1u,0xDDE3u)) c++; rt->state.cpu.pc=0xDDE3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDDB1u; return dd3_static_complete(rt,2u);
        }
        case 0xDDB1u: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDDB4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0xDDB4u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xDDB6u,0xDDDEu)) c++; rt->state.cpu.pc=0xDDDEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDDB6u; return dd3_static_complete(rt,2u);
        }
        case 0xDDB6u: {
            uint8_t v=0x91u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDDB8u; return dd3_static_complete(rt,2u);
        }
        case 0xDDB8u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDDBAu,0xDDC3u)) c++; rt->state.cpu.pc=0xDDC3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDDBAu; return dd3_static_complete(rt,2u);
        }
        case 0xDDBAu: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDDBCu; return dd3_static_complete(rt,3u);
        }
        case 0xDDBCu: {
            uint8_t v=0x0Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDDBEu; return dd3_static_complete(rt,2u);
        }
        case 0xDDBEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDDC0u,0xDDC3u)) c++; rt->state.cpu.pc=0xDDC3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDDC0u; return dd3_static_complete(rt,2u);
        }
        case 0xDDC0u: {
            rt->state.cpu.pc=0xDE50u; return dd3_static_complete(rt,3u);
        }
        case 0xDDC3u: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDDC5u; return dd3_static_complete(rt,3u);
        }
        case 0xDDC5u: {
            uint8_t v=0x0Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDDC7u; return dd3_static_complete(rt,2u);
        }
        case 0xDDC7u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDDC9u,0xDDDEu)) c++; rt->state.cpu.pc=0xDDDEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDDC9u; return dd3_static_complete(rt,2u);
        }
        case 0xDDC9u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDDCBu; return dd3_static_complete(rt,2u);
        }
        case 0xDDCBu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDDCDu,0xDDDEu)) c++; rt->state.cpu.pc=0xDDDEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDDCDu; return dd3_static_complete(rt,2u);
        }
        case 0xDDCDu: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDDD0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0xDDD0u: {
            uint8_t v=0x90u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDDD2u; return dd3_static_complete(rt,2u);
        }
        case 0xDDD2u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDDD4u,0xDDDEu)) c++; rt->state.cpu.pc=0xDDDEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDDD4u; return dd3_static_complete(rt,2u);
        }
        case 0xDDD4u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDDD7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0xDDD7u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDDD9u; return dd3_static_complete(rt,2u);
        }
        case 0xDDD9u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDDDAu; return dd3_static_complete(rt,2u);
        }
        case 0xDDDAu: {
            uint16_t ea=(uint16_t)(0x03F1u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDDDDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F1u,ea)?1u:0u));
        }
        case 0xDDDDu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDDDEu; return dd3_static_complete(rt,2u);
        }
        case 0xDDDEu: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDDE0u; return dd3_static_complete(rt,3u);
        }
        case 0xDDE0u: {
            uint16_t ea=(uint16_t)(0xDF04u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDDE3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xDF04u,ea)?1u:0u));
        }
        case 0xDDE3u: {
            uint16_t ea=0x04F5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDDE6u; return dd3_static_complete(rt,4u);
        }
        case 0xDDE6u: {
            dd3_static_write8(rt,(uint16_t)(0x0201u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xDDE9u; return dd3_static_complete(rt,5u);
        }
        case 0xDDE9u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDDEBu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Du),ea)?1u:0u));
        }
        case 0xDDEBu: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDDEDu; return dd3_static_complete(rt,2u);
        }
        case 0xDDEDu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDDEFu; return dd3_static_complete(rt,2u);
        }
        case 0xDDEFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDDF1u,0xDE03u)) c++; rt->state.cpu.pc=0xDE03u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDDF1u; return dd3_static_complete(rt,2u);
        }
        case 0xDDF1u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDDF3u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Du),ea)?1u:0u));
        }
        case 0xDDF3u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDDF5u; return dd3_static_complete(rt,2u);
        }
        case 0xDDF5u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDDF7u; return dd3_static_complete(rt,2u);
        }
        case 0xDDF7u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDDF8u; return dd3_static_complete(rt,3u);
        }
        case 0xDDF8u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDDFAu; return dd3_static_complete(rt,3u);
        }
        case 0xDDFAu: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDDFDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0xDDFDu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDDFFu; return dd3_static_complete(rt,2u);
        }
        case 0xDDFFu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDE00u; return dd3_static_complete(rt,2u);
        }
        case 0xDE00u: {
            rt->state.cpu.pc=0xDE0Eu; return dd3_static_complete(rt,3u);
        }
        case 0xDE03u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDE05u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Du),ea)?1u:0u));
        }
        case 0xDE05u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE06u; return dd3_static_complete(rt,3u);
        }
        case 0xDE06u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDE08u; return dd3_static_complete(rt,3u);
        }
        case 0xDE08u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xDE0Au; return dd3_static_complete(rt,2u);
        }
        case 0xDE0Au: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDE0Cu,0xDE2Eu)) c++; rt->state.cpu.pc=0xDE2Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDE0Cu; return dd3_static_complete(rt,2u);
        }
        case 0xDE0Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDE0Eu,0xDE15u)) c++; rt->state.cpu.pc=0xDE15u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDE0Eu; return dd3_static_complete(rt,2u);
        }
        case 0xDE0Eu: {
            uint16_t ea=(uint16_t)(0x03F1u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDE11u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F1u,ea)?1u:0u));
        }
        case 0xDE11u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDE13u; return dd3_static_complete(rt,2u);
        }
        case 0xDE13u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDE15u,0xDE2Eu)) c++; rt->state.cpu.pc=0xDE2Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDE15u; return dd3_static_complete(rt,2u);
        }
        case 0xDE15u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDE17u; return dd3_static_complete(rt,4u);
        }
        case 0xDE17u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDE19u; return dd3_static_complete(rt,2u);
        }
        case 0xDE19u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDE1Bu,0xDE2Au)) c++; rt->state.cpu.pc=0xDE2Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDE1Bu; return dd3_static_complete(rt,2u);
        }
        case 0xDE1Bu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE1Cu; return dd3_static_complete(rt,4u);
        }
        case 0xDE1Cu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE1Du; return dd3_static_complete(rt,3u);
        }
        case 0xDE1Du: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE1Fu; return dd3_static_complete(rt,2u);
        }
        case 0xDE1Fu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDE21u; return dd3_static_complete(rt,2u);
        }
        case 0xDE21u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDE23u,0xDE2Au)) c++; rt->state.cpu.pc=0xDE2Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDE23u; return dd3_static_complete(rt,2u);
        }
        case 0xDE23u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE24u; return dd3_static_complete(rt,4u);
        }
        case 0xDE24u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE26u; return dd3_static_complete(rt,2u);
        }
        case 0xDE26u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE28u; return dd3_static_complete(rt,2u);
        }
        case 0xDE28u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDE2Au,0xDE37u)) c++; rt->state.cpu.pc=0xDE37u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDE2Au; return dd3_static_complete(rt,2u);
        }
        case 0xDE2Au: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE2Bu; return dd3_static_complete(rt,4u);
        }
        case 0xDE2Bu: {
            rt->state.cpu.pc=0xDE37u; return dd3_static_complete(rt,3u);
        }
        case 0xDE2Eu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDE30u; return dd3_static_complete(rt,4u);
        }
        case 0xDE30u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDE32u; return dd3_static_complete(rt,2u);
        }
        case 0xDE32u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDE34u,0xDE2Au)) c++; rt->state.cpu.pc=0xDE2Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDE34u; return dd3_static_complete(rt,2u);
        }
        case 0xDE34u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE35u; return dd3_static_complete(rt,4u);
        }
        case 0xDE35u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE37u; return dd3_static_complete(rt,2u);
        }
        case 0xDE37u: {
            uint16_t ea=0x04F5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDE3Au; return dd3_static_complete(rt,4u);
        }
        case 0xDE3Au: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE3Cu; return dd3_static_complete(rt,3u);
        }
        case 0xDE3Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0202u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xDE3Fu; return dd3_static_complete(rt,5u);
        }
        case 0xDE3Fu: {
            rt->state.cpu.pc=0xDE5Eu; return dd3_static_complete(rt,3u);
        }
        case 0xDE42u: {
            uint16_t ea=0x04F5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDE45u; return dd3_static_complete(rt,4u);
        }
        case 0xDE45u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xDE46u; return dd3_static_complete(rt,2u);
        }
        case 0xDE46u: {
            uint8_t v=0x04u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xDE48u; return dd3_static_complete(rt,2u);
        }
        case 0xDE48u: {
            dd3_static_write8(rt,0x04F5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE4Bu; return dd3_static_complete(rt,4u);
        }
        case 0xDE4Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDE4Du,0xDE50u)) c++; rt->state.cpu.pc=0xDE50u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDE4Du; return dd3_static_complete(rt,2u);
        }
        case 0xDE4Du: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xDE4Fu; return dd3_static_complete(rt,5u);
        }
        case 0xDE4Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xDE50u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xDE52u; return dd3_static_complete(rt,5u);
        }
        case 0xDE52u: {
            uint16_t ea=0x0Cu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xDE54u; return dd3_static_complete(rt,5u);
        }
        case 0xDE54u: {
            uint16_t ea=0x0Cu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xDE56u; return dd3_static_complete(rt,5u);
        }
        case 0xDE56u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xDE58u; return dd3_static_complete(rt,5u);
        }
        case 0xDE58u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDE5Au,0xDE5Du)) c++; rt->state.cpu.pc=0xDE5Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDE5Au; return dd3_static_complete(rt,2u);
        }
        case 0xDE5Au: {
            rt->state.cpu.pc=0xDD59u; return dd3_static_complete(rt,3u);
        }
        case 0xDE5Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xDE5Eu: {
            uint16_t ea=0x0Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDE60u; return dd3_static_complete(rt,3u);
        }
        case 0xDE60u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDE62u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0xDE62u: {
            dd3_static_push8(rt,(uint8_t)(0xDE64u>>8)); dd3_static_push8(rt,(uint8_t)0xDE64u);
            rt->state.cpu.pc=0xDEFAu; return dd3_static_complete(rt,6u);
        }
        case 0xDE65u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDE67u; return dd3_static_complete(rt,2u);
        }
        case 0xDE67u: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0xDE68u; return dd3_static_complete(rt,3u);
        }
        case 0xDE68u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDE6Au; return dd3_static_complete(rt,3u);
        }
        case 0xDE6Au: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xDE6Bu; return dd3_static_complete(rt,2u);
        }
        case 0xDE6Bu: {
            uint16_t ea=(uint16_t)(0x00B7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xDE6Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B7u,ea)?1u:0u));
        }
        case 0xDE6Eu: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE70u; return dd3_static_complete(rt,3u);
        }
        case 0xDE70u: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDE73u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0xDE73u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xDE75u; return dd3_static_complete(rt,2u);
        }
        case 0xDE75u: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt));
            rt->state.cpu.pc=0xDE76u; return dd3_static_complete(rt,4u);
        }
        case 0xDE76u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xDE78u,0xDE7Bu)) c++; rt->state.cpu.pc=0xDE7Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDE78u; return dd3_static_complete(rt,2u);
        }
        case 0xDE78u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xDE79u; return dd3_static_complete(rt,2u);
        }
        case 0xDE79u: {
            uint8_t v=0xFFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xDE7Bu; return dd3_static_complete(rt,2u);
        }
        case 0xDE7Bu: {
            dd3_static_write8(rt,0x20u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE7Du; return dd3_static_complete(rt,3u);
        }
        case 0xDE7Du: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDE7Fu; return dd3_static_complete(rt,3u);
        }
        case 0xDE7Fu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xDE80u; return dd3_static_complete(rt,2u);
        }
        case 0xDE80u: {
            uint8_t v=0x04u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xDE82u; return dd3_static_complete(rt,2u);
        }
        case 0xDE82u: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE84u; return dd3_static_complete(rt,3u);
        }
        case 0xDE84u: {
            uint16_t ea=0x20u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDE86u; return dd3_static_complete(rt,3u);
        }
        case 0xDE86u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xDE88u; return dd3_static_complete(rt,2u);
        }
        case 0xDE88u: {
            dd3_static_write8(rt,0x20u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE8Au; return dd3_static_complete(rt,3u);
        }
        case 0xDE8Au: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDE8Cu; return dd3_static_complete(rt,3u);
        }
        case 0xDE8Cu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xDE8Du; return dd3_static_complete(rt,2u);
        }
        case 0xDE8Du: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xDE8Fu; return dd3_static_complete(rt,3u);
        }
        case 0xDE8Fu: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDE91u; return dd3_static_complete(rt,3u);
        }
        case 0xDE91u: {
            uint16_t ea=0x20u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDE93u; return dd3_static_complete(rt,3u);
        }
        case 0xDE93u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xDE95u; return dd3_static_complete(rt,3u);
        }
        case 0xDE95u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xDE97u,0xDEF7u)) c++; rt->state.cpu.pc=0xDEF7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDE97u; return dd3_static_complete(rt,2u);
        }
        case 0xDE97u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDE99u,0xDEF7u)) c++; rt->state.cpu.pc=0xDEF7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDE99u; return dd3_static_complete(rt,2u);
        }
        case 0xDE99u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDE9Bu; return dd3_static_complete(rt,3u);
        }
        case 0xDE9Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0203u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xDE9Eu; return dd3_static_complete(rt,5u);
        }
        case 0xDE9Eu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDEA0u; return dd3_static_complete(rt,3u);
        }
        case 0xDEA0u: {
            uint16_t ea=(uint16_t)(0x00CBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDEA3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00CBu,ea)?1u:0u));
        }
        case 0xDEA3u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xDEA4u; return dd3_static_complete(rt,2u);
        }
        case 0xDEA4u: {
            uint16_t ea=(uint16_t)(0x00DFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xDEA7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00DFu,ea)?1u:0u));
        }
        case 0xDEA7u: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDEA9u; return dd3_static_complete(rt,3u);
        }
        case 0xDEA9u: {
            uint16_t ea=(uint16_t)(0x00D5u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDEACu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00D5u,ea)?1u:0u));
        }
        case 0xDEACu: {
            uint16_t ea=(uint16_t)(0x00E9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xDEAFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00E9u,ea)?1u:0u));
        }
        case 0xDEAFu: {
            dd3_static_write8(rt,0x20u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDEB1u; return dd3_static_complete(rt,3u);
        }
        case 0xDEB1u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDEB3u; return dd3_static_complete(rt,3u);
        }
        case 0xDEB3u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xDEB4u; return dd3_static_complete(rt,2u);
        }
        case 0xDEB4u: {
            uint8_t v=0x13u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xDEB6u; return dd3_static_complete(rt,2u);
        }
        case 0xDEB6u: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDEB8u; return dd3_static_complete(rt,3u);
        }
        case 0xDEB8u: {
            uint16_t ea=0x20u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDEBAu; return dd3_static_complete(rt,3u);
        }
        case 0xDEBAu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xDEBCu; return dd3_static_complete(rt,2u);
        }
        case 0xDEBCu: {
            dd3_static_write8(rt,0x20u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDEBEu; return dd3_static_complete(rt,3u);
        }
        case 0xDEBEu: {
            uint16_t ea=0x0Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDEC0u; return dd3_static_complete(rt,3u);
        }
        case 0xDEC0u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDEC1u; return dd3_static_complete(rt,2u);
        }
        case 0xDEC1u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDEC3u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0xDEC3u: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0xDEC4u; return dd3_static_complete(rt,3u);
        }
        case 0xDEC4u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xDEC5u; return dd3_static_complete(rt,2u);
        }
        case 0xDEC5u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xDEC7u; return dd3_static_complete(rt,3u);
        }
        case 0xDEC7u: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDEC9u; return dd3_static_complete(rt,3u);
        }
        case 0xDEC9u: {
            uint16_t ea=0x20u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDECBu; return dd3_static_complete(rt,3u);
        }
        case 0xDECBu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xDECDu; return dd3_static_complete(rt,2u);
        }
        case 0xDECDu: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt));
            rt->state.cpu.pc=0xDECEu; return dd3_static_complete(rt,4u);
        }
        case 0xDECEu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xDED0u,0xDED3u)) c++; rt->state.cpu.pc=0xDED3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDED0u; return dd3_static_complete(rt,2u);
        }
        case 0xDED0u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xDED1u; return dd3_static_complete(rt,2u);
        }
        case 0xDED1u: {
            uint8_t v=0xFFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xDED3u; return dd3_static_complete(rt,2u);
        }
        case 0xDED3u: {
            dd3_static_write8(rt,0x20u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDED5u; return dd3_static_complete(rt,3u);
        }
        case 0xDED5u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDED7u; return dd3_static_complete(rt,3u);
        }
        case 0xDED7u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xDED8u; return dd3_static_complete(rt,2u);
        }
        case 0xDED8u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xDEDAu; return dd3_static_complete(rt,3u);
        }
        case 0xDEDAu: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xDEDCu; return dd3_static_complete(rt,3u);
        }
        case 0xDEDCu: {
            uint16_t ea=0x20u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDEDEu; return dd3_static_complete(rt,3u);
        }
        case 0xDEDEu: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xDEE0u; return dd3_static_complete(rt,3u);
        }
        case 0xDEE0u: {
            dd3_static_write8(rt,0x20u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDEE2u; return dd3_static_complete(rt,3u);
        }
        case 0xDEE2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDEE4u,0xDEF7u)) c++; rt->state.cpu.pc=0xDEF7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDEE4u; return dd3_static_complete(rt,2u);
        }
        case 0xDEE4u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xDEE6u,0xDEF7u)) c++; rt->state.cpu.pc=0xDEF7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDEE6u; return dd3_static_complete(rt,2u);
        }
        case 0xDEE6u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDEE8u; return dd3_static_complete(rt,3u);
        }
        case 0xDEE8u: {
            uint8_t v=0x48u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDEEAu; return dd3_static_complete(rt,2u);
        }
        case 0xDEEAu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDEECu,0xDEF7u)) c++; rt->state.cpu.pc=0xDEF7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDEECu; return dd3_static_complete(rt,2u);
        }
        case 0xDEECu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDEEEu; return dd3_static_complete(rt,2u);
        }
        case 0xDEEEu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xDEEFu; return dd3_static_complete(rt,2u);
        }
        case 0xDEEFu: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xDEF1u; return dd3_static_complete(rt,3u);
        }
        case 0xDEF1u: {
            dd3_static_write8(rt,(uint16_t)(0x0200u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xDEF4u; return dd3_static_complete(rt,5u);
        }
        case 0xDEF4u: {
            rt->state.cpu.pc=0xDE42u; return dd3_static_complete(rt,3u);
        }
        case 0xDEF7u: {
            rt->state.cpu.pc=0xDE50u; return dd3_static_complete(rt,3u);
        }
        case 0xDEFAu: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0xDEFCu; return dd3_static_complete(rt,3u);
        }
        case 0xDEFCu: {
            if (!rt->state.cpu.v) { unsigned c=3u; if (dd3_static_page_crossed(0xDEFEu,0xDF03u)) c++; rt->state.cpu.pc=0xDF03u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDEFEu; return dd3_static_complete(rt,2u);
        }
        case 0xDEFEu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF00u; return dd3_static_complete(rt,2u);
        }
        case 0xDF00u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xDF01u; return dd3_static_complete(rt,2u);
        }
        case 0xDF01u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xDF03u; return dd3_static_complete(rt,2u);
        }
        case 0xDF03u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xDF3Au: {
            uint16_t ea=0x0309u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDF3Du; return dd3_static_complete(rt,4u);
        }
        case 0xDF3Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDF3Fu,0xDF40u)) c++; rt->state.cpu.pc=0xDF40u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDF3Fu; return dd3_static_complete(rt,2u);
        }
        case 0xDF3Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xDF40u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDF42u; return dd3_static_complete(rt,2u);
        }
        case 0xDF42u: {
            dd3_static_write8(rt,0x0309u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF45u; return dd3_static_complete(rt,4u);
        }
        case 0xDF45u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF46u; return dd3_static_complete(rt,2u);
        }
        case 0xDF46u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF47u; return dd3_static_complete(rt,3u);
        }
        case 0xDF47u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF48u; return dd3_static_complete(rt,2u);
        }
        case 0xDF48u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF49u; return dd3_static_complete(rt,3u);
        }
        case 0xDF49u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDF4Bu; return dd3_static_complete(rt,2u);
        }
        case 0xDF4Bu: {
            uint16_t ea=(uint16_t)(0xDFD8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDF4Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xDFD8u,ea)?1u:0u));
        }
        case 0xDF4Eu: {
            dd3_static_write8(rt,(uint16_t)(0x06C4u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xDF51u; return dd3_static_complete(rt,5u);
        }
        case 0xDF51u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDF52u; return dd3_static_complete(rt,2u);
        }
        case 0xDF52u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xDF54u; return dd3_static_complete(rt,2u);
        }
        case 0xDF54u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDF56u,0xDF4Bu)) c++; rt->state.cpu.pc=0xDF4Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDF56u; return dd3_static_complete(rt,2u);
        }
        case 0xDF56u: {
            uint8_t v=0x02u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDF58u; return dd3_static_complete(rt,2u);
        }
        case 0xDF58u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDF5Au; return dd3_static_complete(rt,4u);
        }
        case 0xDF5Au: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xDF5Bu; return dd3_static_complete(rt,2u);
        }
        case 0xDF5Bu: {
            uint8_t v=0x04u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xDF5Du; return dd3_static_complete(rt,2u);
        }
        case 0xDF5Du: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF5Eu; return dd3_static_complete(rt,2u);
        }
        case 0xDF5Eu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF5Fu; return dd3_static_complete(rt,2u);
        }
        case 0xDF5Fu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDF60u; return dd3_static_complete(rt,2u);
        }
        case 0xDF60u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF61u; return dd3_static_complete(rt,2u);
        }
        case 0xDF61u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF62u; return dd3_static_complete(rt,2u);
        }
        case 0xDF62u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF63u; return dd3_static_complete(rt,2u);
        }
        case 0xDF63u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF65u; return dd3_static_complete(rt,3u);
        }
        case 0xDF65u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF66u; return dd3_static_complete(rt,2u);
        }
        case 0xDF66u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF67u; return dd3_static_complete(rt,3u);
        }
        case 0xDF67u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDF69u; return dd3_static_complete(rt,3u);
        }
        case 0xDF69u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDF6Bu; return dd3_static_complete(rt,2u);
        }
        case 0xDF6Bu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF6Du; return dd3_static_complete(rt,3u);
        }
        case 0xDF6Du: {
            uint16_t ea=(uint16_t)(0xDFE0u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDF70u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xDFE0u,ea)?1u:0u));
        }
        case 0xDF70u: {
            dd3_static_write8(rt,(uint16_t)(0x06C4u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xDF73u; return dd3_static_complete(rt,5u);
        }
        case 0xDF73u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDF74u; return dd3_static_complete(rt,2u);
        }
        case 0xDF74u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDF75u; return dd3_static_complete(rt,2u);
        }
        case 0xDF75u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xDF77u; return dd3_static_complete(rt,5u);
        }
        case 0xDF77u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDF79u,0xDF6Du)) c++; rt->state.cpu.pc=0xDF6Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDF79u; return dd3_static_complete(rt,2u);
        }
        case 0xDF79u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF7Au; return dd3_static_complete(rt,4u);
        }
        case 0xDF7Au: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDF7Bu; return dd3_static_complete(rt,2u);
        }
        case 0xDF7Bu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDF7Cu; return dd3_static_complete(rt,2u);
        }
        case 0xDF7Cu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xDF7Eu; return dd3_static_complete(rt,2u);
        }
        case 0xDF7Eu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDF80u,0xDF58u)) c++; rt->state.cpu.pc=0xDF58u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDF80u; return dd3_static_complete(rt,2u);
        }
        case 0xDF80u: {
            uint16_t ea=0x76u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDF82u; return dd3_static_complete(rt,3u);
        }
        case 0xDF82u: {
            uint8_t v=0x1Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDF84u; return dd3_static_complete(rt,2u);
        }
        case 0xDF84u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDF86u,0xDF9Fu)) c++; rt->state.cpu.pc=0xDF9Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDF86u; return dd3_static_complete(rt,2u);
        }
        case 0xDF86u: {
            uint16_t ea=0x04BCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDF89u; return dd3_static_complete(rt,4u);
        }
        case 0xDF89u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF8Bu; return dd3_static_complete(rt,2u);
        }
        case 0xDF8Bu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF8Cu; return dd3_static_complete(rt,2u);
        }
        case 0xDF8Cu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF8Du; return dd3_static_complete(rt,2u);
        }
        case 0xDF8Du: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDF8Eu; return dd3_static_complete(rt,2u);
        }
        case 0xDF8Eu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDF8Fu; return dd3_static_complete(rt,2u);
        }
        case 0xDF8Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDF91u; return dd3_static_complete(rt,2u);
        }
        case 0xDF91u: {
            uint16_t ea=(uint16_t)(0xE058u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDF94u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE058u,ea)?1u:0u));
        }
        case 0xDF94u: {
            dd3_static_write8(rt,(uint16_t)(0x06CCu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xDF97u; return dd3_static_complete(rt,5u);
        }
        case 0xDF97u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDF98u; return dd3_static_complete(rt,2u);
        }
        case 0xDF98u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDF99u; return dd3_static_complete(rt,2u);
        }
        case 0xDF99u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xDF9Bu; return dd3_static_complete(rt,2u);
        }
        case 0xDF9Bu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDF9Du,0xDF91u)) c++; rt->state.cpu.pc=0xDF91u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDF9Du; return dd3_static_complete(rt,2u);
        }
        case 0xDF9Du: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDF9Fu,0xDFD3u)) c++; rt->state.cpu.pc=0xDFD3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDF9Fu; return dd3_static_complete(rt,2u);
        }
        case 0xDF9Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDFA1u; return dd3_static_complete(rt,2u);
        }
        case 0xDFA1u: {
            uint8_t v=0x07u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDFA3u; return dd3_static_complete(rt,2u);
        }
        case 0xDFA3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDFA5u,0xDFC5u)) c++; rt->state.cpu.pc=0xDFC5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDFA5u; return dd3_static_complete(rt,2u);
        }
        case 0xDFA5u: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDFA7u; return dd3_static_complete(rt,2u);
        }
        case 0xDFA7u: {
            uint8_t v=0x0Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDFA9u; return dd3_static_complete(rt,2u);
        }
        case 0xDFA9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDFABu,0xDFC5u)) c++; rt->state.cpu.pc=0xDFC5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDFABu; return dd3_static_complete(rt,2u);
        }
        case 0xDFABu: {
            uint8_t v=0x08u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDFADu; return dd3_static_complete(rt,2u);
        }
        case 0xDFADu: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDFAFu; return dd3_static_complete(rt,2u);
        }
        case 0xDFAFu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDFB1u,0xDFC5u)) c++; rt->state.cpu.pc=0xDFC5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDFB1u; return dd3_static_complete(rt,2u);
        }
        case 0xDFB1u: {
            uint8_t v=0x0Cu;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDFB3u; return dd3_static_complete(rt,2u);
        }
        case 0xDFB3u: {
            uint8_t v=0x15u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDFB5u; return dd3_static_complete(rt,2u);
        }
        case 0xDFB5u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDFB7u,0xDFD3u)) c++; rt->state.cpu.pc=0xDFD3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDFB7u; return dd3_static_complete(rt,2u);
        }
        case 0xDFB7u: {
            uint16_t ea=0xF4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDFB9u; return dd3_static_complete(rt,3u);
        }
        case 0xDFB9u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDFBBu; return dd3_static_complete(rt,2u);
        }
        case 0xDFBBu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDFBDu,0xDFC5u)) c++; rt->state.cpu.pc=0xDFC5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDFBDu; return dd3_static_complete(rt,2u);
        }
        case 0xDFBDu: {
            uint8_t v=0x10u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDFBFu; return dd3_static_complete(rt,2u);
        }
        case 0xDFBFu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xDFC1u; return dd3_static_complete(rt,2u);
        }
        case 0xDFC1u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xDFC3u,0xDFC5u)) c++; rt->state.cpu.pc=0xDFC5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDFC3u; return dd3_static_complete(rt,2u);
        }
        case 0xDFC3u: {
            uint8_t v=0x14u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDFC5u; return dd3_static_complete(rt,2u);
        }
        case 0xDFC5u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDFC7u; return dd3_static_complete(rt,2u);
        }
        case 0xDFC7u: {
            uint16_t ea=(uint16_t)(0xE040u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xDFCAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xE040u,ea)?1u:0u));
        }
        case 0xDFCAu: {
            dd3_static_write8(rt,(uint16_t)(0x06D0u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xDFCDu; return dd3_static_complete(rt,5u);
        }
        case 0xDFCDu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDFCEu; return dd3_static_complete(rt,2u);
        }
        case 0xDFCEu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDFCFu; return dd3_static_complete(rt,2u);
        }
        case 0xDFCFu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xDFD1u; return dd3_static_complete(rt,2u);
        }
        case 0xDFD1u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xDFD3u,0xDFC7u)) c++; rt->state.cpu.pc=0xDFC7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xDFD3u; return dd3_static_complete(rt,2u);
        }
        case 0xDFD3u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDFD4u; return dd3_static_complete(rt,4u);
        }
        case 0xDFD4u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xDFD5u; return dd3_static_complete(rt,2u);
        }
        case 0xDFD5u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xDFD6u; return dd3_static_complete(rt,4u);
        }
        case 0xDFD6u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xDFD7u; return dd3_static_complete(rt,2u);
        }
        case 0xDFD7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xFED7u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xFED8u; return dd3_static_complete(rt,2u);
        }
        case 0xFED8u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xFEDAu; return dd3_static_complete(rt,3u);
        }
        case 0xFEDAu: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xFEDCu; return dd3_static_complete(rt,3u);
        }
        case 0xFEDCu: {
            uint16_t ea=0x20u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFEDEu; return dd3_static_complete(rt,3u);
        }
        case 0xFEDEu: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xFEE0u; return dd3_static_complete(rt,3u);
        }
        case 0xFEE0u: {
            dd3_static_write8(rt,0x20u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFEE2u; return dd3_static_complete(rt,3u);
        }
        case 0xFEE2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xFEE4u,0xFEF7u)) c++; rt->state.cpu.pc=0xFEF7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFEE4u; return dd3_static_complete(rt,2u);
        }
        case 0xFEE4u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xFEE6u,0xFEF7u)) c++; rt->state.cpu.pc=0xFEF7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFEE6u; return dd3_static_complete(rt,2u);
        }
        case 0xFEE6u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFEE8u; return dd3_static_complete(rt,3u);
        }
        case 0xFEE8u: {
            uint8_t v=0x48u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xFEEAu; return dd3_static_complete(rt,2u);
        }
        case 0xFEEAu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xFEECu,0xFEF7u)) c++; rt->state.cpu.pc=0xFEF7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xFEECu; return dd3_static_complete(rt,2u);
        }
        case 0xFEECu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFEEEu; return dd3_static_complete(rt,2u);
        }
        case 0xFEEEu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xFEEFu; return dd3_static_complete(rt,2u);
        }
        case 0xFEEFu: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xFEF1u; return dd3_static_complete(rt,3u);
        }
        case 0xFEF1u: {
            dd3_static_write8(rt,(uint16_t)(0x0200u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xFEF4u; return dd3_static_complete(rt,5u);
        }
        case 0xFEF4u: {
            rt->state.cpu.pc=0xDE42u; return dd3_static_complete(rt,3u);
        }
        case 0xFEF7u: {
            rt->state.cpu.pc=0xDE50u; return dd3_static_complete(rt,3u);
        }
        default: return dd3_static_fail_unproven(rt,14,rt->state.cpu.pc);
    }
}
