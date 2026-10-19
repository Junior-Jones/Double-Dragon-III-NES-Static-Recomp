/* Generated: no runtime opcode fetch or decode. */
#include "dd3_static_semantics.h"
int dd3_static_execute_bank_12(DD3StaticRuntime *rt) {
    switch (rt->state.cpu.pc) {
        case 0x8020u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8022u; return dd3_static_complete(rt,2u);
        }
        case 0x8022u: {
            dd3_static_write8(rt,0x3Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0x8024u; return dd3_static_complete(rt,3u);
        }
        case 0x8024u: {
            dd3_static_write8(rt,0x04B0u,rt->state.cpu.x);
            rt->state.cpu.pc=0x8027u; return dd3_static_complete(rt,4u);
        }
        case 0x8027u: {
            dd3_static_write8(rt,0x04B1u,rt->state.cpu.x);
            rt->state.cpu.pc=0x802Au; return dd3_static_complete(rt,4u);
        }
        case 0x802Au: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x802Cu; return dd3_static_complete(rt,3u);
        }
        case 0x802Cu: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x802Eu; return dd3_static_complete(rt,4u);
        }
        case 0x802Eu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8030u,0x8043u)) c++; rt->state.cpu.pc=0x8043u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8030u; return dd3_static_complete(rt,2u);
        }
        case 0x8030u: {
            dd3_static_push8(rt,(uint8_t)(0x8032u>>8)); dd3_static_push8(rt,(uint8_t)0x8032u);
            rt->state.cpu.pc=0xFCA2u; return dd3_static_complete(rt,6u);
        }
        case 0x8033u: {
            uint16_t ea=(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8035u; return dd3_static_complete(rt,4u);
        }
        case 0x8035u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8037u,0x803Du)) c++; rt->state.cpu.pc=0x803Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8037u; return dd3_static_complete(rt,2u);
        }
        case 0x8037u: {
            dd3_static_push8(rt,(uint8_t)(0x8039u>>8)); dd3_static_push8(rt,(uint8_t)0x8039u);
            rt->state.cpu.pc=0x8093u; return dd3_static_complete(rt,6u);
        }
        case 0x803Au: {
            rt->state.cpu.pc=0x8040u; return dd3_static_complete(rt,3u);
        }
        case 0x803Du: {
            dd3_static_push8(rt,(uint8_t)(0x803Fu>>8)); dd3_static_push8(rt,(uint8_t)0x803Fu);
            rt->state.cpu.pc=0x80B2u; return dd3_static_complete(rt,6u);
        }
        case 0x8040u: {
            dd3_static_push8(rt,(uint8_t)(0x8042u>>8)); dd3_static_push8(rt,(uint8_t)0x8042u);
            rt->state.cpu.pc=0x850Eu; return dd3_static_complete(rt,6u);
        }
        case 0x8043u: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8045u; return dd3_static_complete(rt,5u);
        }
        case 0x8045u: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8047u; return dd3_static_complete(rt,3u);
        }
        case 0x8047u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8049u; return dd3_static_complete(rt,2u);
        }
        case 0x8049u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x804Bu,0x802Au)) c++; rt->state.cpu.pc=0x802Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x804Bu; return dd3_static_complete(rt,2u);
        }
        case 0x804Bu: {
            dd3_static_push8(rt,(uint8_t)(0x804Du>>8)); dd3_static_push8(rt,(uint8_t)0x804Du);
            rt->state.cpu.pc=0xFC71u; return dd3_static_complete(rt,6u);
        }
        case 0x804Eu: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8050u; return dd3_static_complete(rt,3u);
        }
        case 0x8050u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8052u; return dd3_static_complete(rt,4u);
        }
        case 0x8052u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8054u,0x8057u)) c++; rt->state.cpu.pc=0x8057u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8054u; return dd3_static_complete(rt,2u);
        }
        case 0x8054u: {
            dd3_static_push8(rt,(uint8_t)(0x8056u>>8)); dd3_static_push8(rt,(uint8_t)0x8056u);
            rt->state.cpu.pc=0xFCA2u; return dd3_static_complete(rt,6u);
        }
        case 0x8057u: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8059u; return dd3_static_complete(rt,5u);
        }
        case 0x8059u: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x805Bu; return dd3_static_complete(rt,3u);
        }
        case 0x805Bu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x805Du; return dd3_static_complete(rt,2u);
        }
        case 0x805Du: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x805Fu,0x804Eu)) c++; rt->state.cpu.pc=0x804Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x805Fu; return dd3_static_complete(rt,2u);
        }
        case 0x805Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8061u>>8)); dd3_static_push8(rt,(uint8_t)0x8061u);
            rt->state.cpu.pc=0x8063u; return dd3_static_complete(rt,6u);
        }
        case 0x8062u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8063u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8065u; return dd3_static_complete(rt,2u);
        }
        case 0x8065u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8067u; return dd3_static_complete(rt,4u);
        }
        case 0x8067u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8069u,0x807Du)) c++; rt->state.cpu.pc=0x807Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8069u; return dd3_static_complete(rt,2u);
        }
        case 0x8069u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x806Bu; return dd3_static_complete(rt,4u);
        }
        case 0x806Bu: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x806Du; return dd3_static_complete(rt,2u);
        }
        case 0x806Du: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x806Fu,0x807Du)) c++; rt->state.cpu.pc=0x807Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x806Fu; return dd3_static_complete(rt,2u);
        }
        case 0x806Fu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8070u; return dd3_static_complete(rt,2u);
        }
        case 0x8070u: {
            uint16_t ea=(uint16_t)(0x8083u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8073u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8083u,ea)?1u:0u));
        }
        case 0x8073u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8075u,0x807Du)) c++; rt->state.cpu.pc=0x807Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8075u; return dd3_static_complete(rt,2u);
        }
        case 0x8075u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8076u; return dd3_static_complete(rt,2u);
        }
        case 0x8076u: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8078u; return dd3_static_complete(rt,2u);
        }
        case 0x8078u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8079u; return dd3_static_complete(rt,2u);
        }
        case 0x8079u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x807Au; return dd3_static_complete(rt,2u);
        }
        case 0x807Au: {
            dd3_static_write8(rt,(uint16_t)(0x048Eu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x807Du; return dd3_static_complete(rt,5u);
        }
        case 0x807Du: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x807Eu; return dd3_static_complete(rt,2u);
        }
        case 0x807Eu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8080u; return dd3_static_complete(rt,2u);
        }
        case 0x8080u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8082u,0x8065u)) c++; rt->state.cpu.pc=0x8065u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8082u; return dd3_static_complete(rt,2u);
        }
        case 0x8082u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8093u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8095u; return dd3_static_complete(rt,4u);
        }
        case 0x8095u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8097u; return dd3_static_complete(rt,2u);
        }
        case 0x8097u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8099u,0x80B1u)) c++; rt->state.cpu.pc=0x80B1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8099u; return dd3_static_complete(rt,2u);
        }
        case 0x8099u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x809Bu; return dd3_static_complete(rt,2u);
        }
        case 0x809Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x809Du,0x80B1u)) c++; rt->state.cpu.pc=0x80B1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x809Du; return dd3_static_complete(rt,2u);
        }
        case 0x809Du: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x809Fu; return dd3_static_complete(rt,2u);
        }
        case 0x809Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80A1u,0x80B1u)) c++; rt->state.cpu.pc=0x80B1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80A1u; return dd3_static_complete(rt,2u);
        }
        case 0x80A1u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80A3u; return dd3_static_complete(rt,4u);
        }
        case 0x80A3u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x80A5u,0x80B1u)) c++; rt->state.cpu.pc=0x80B1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80A5u; return dd3_static_complete(rt,2u);
        }
        case 0x80A5u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80A7u; return dd3_static_complete(rt,2u);
        }
        case 0x80A7u: {
            uint16_t ea=(uint16_t)(0x0394u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80AAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0394u,ea)?1u:0u));
        }
        case 0x80AAu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x80ACu,0x80AEu)) c++; rt->state.cpu.pc=0x80AEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80ACu; return dd3_static_complete(rt,2u);
        }
        case 0x80ACu: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80AEu; return dd3_static_complete(rt,2u);
        }
        case 0x80AEu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80AFu; return dd3_static_complete(rt,2u);
        }
        case 0x80AFu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x80B1u; return dd3_static_complete(rt,4u);
        }
        case 0x80B1u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x80B2u: {
            dd3_static_push8(rt,(uint8_t)(0x80B4u>>8)); dd3_static_push8(rt,(uint8_t)0x80B4u);
            rt->state.cpu.pc=0x892Fu; return dd3_static_complete(rt,6u);
        }
        case 0x80B5u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80B7u; return dd3_static_complete(rt,4u);
        }
        case 0x80B7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x80B9u,0x80D8u)) c++; rt->state.cpu.pc=0x80D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80B9u; return dd3_static_complete(rt,2u);
        }
        case 0x80B9u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80BBu; return dd3_static_complete(rt,2u);
        }
        case 0x80BBu: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80BDu; return dd3_static_complete(rt,2u);
        }
        case 0x80BDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80BFu,0x80D8u)) c++; rt->state.cpu.pc=0x80D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80BFu; return dd3_static_complete(rt,2u);
        }
        case 0x80BFu: {
            uint8_t v=0x60u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80C1u; return dd3_static_complete(rt,2u);
        }
        case 0x80C1u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x80C3u,0x80D8u)) c++; rt->state.cpu.pc=0x80D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80C3u; return dd3_static_complete(rt,2u);
        }
        case 0x80C3u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80C4u; return dd3_static_complete(rt,2u);
        }
        case 0x80C4u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x80C5u; return dd3_static_complete(rt,2u);
        }
        case 0x80C5u: {
            uint16_t ea=(uint16_t)(0x80D9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80C8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x80D9u,ea)?1u:0u));
        }
        case 0x80C8u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x80CAu; return dd3_static_complete(rt,3u);
        }
        case 0x80CAu: {
            uint16_t ea=(uint16_t)(0x80DAu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80CDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x80DAu,ea)?1u:0u));
        }
        case 0x80CDu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x80CFu; return dd3_static_complete(rt,3u);
        }
        case 0x80CFu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80D1u; return dd3_static_complete(rt,2u);
        }
        case 0x80D1u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80D2u; return dd3_static_complete(rt,3u);
        }
        case 0x80D2u: {
            uint8_t v=0xD7u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80D4u; return dd3_static_complete(rt,2u);
        }
        case 0x80D4u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80D5u; return dd3_static_complete(rt,3u);
        }
        case 0x80D5u: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x0029u); return dd3_static_complete(rt,5u);
        }
        case 0x80D8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8199u: {
            uint16_t ea=(uint16_t)(0x0463u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x819Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0463u,ea)?1u:0u));
        }
        case 0x819Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x819Eu,0x81BFu)) c++; rt->state.cpu.pc=0x81BFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x819Eu; return dd3_static_complete(rt,2u);
        }
        case 0x819Eu: {
            uint16_t ea=(uint16_t)(0x04C4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81A1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04C4u,ea)?1u:0u));
        }
        case 0x81A1u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81A3u; return dd3_static_complete(rt,2u);
        }
        case 0x81A3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81A5u,0x81C5u)) c++; rt->state.cpu.pc=0x81C5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81A5u; return dd3_static_complete(rt,2u);
        }
        case 0x81A5u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81A7u; return dd3_static_complete(rt,2u);
        }
        case 0x81A7u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x81A9u; return dd3_static_complete(rt,4u);
        }
        case 0x81A9u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81ABu,0x81BCu)) c++; rt->state.cpu.pc=0x81BCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81ABu; return dd3_static_complete(rt,2u);
        }
        case 0x81ABu: {
            uint16_t ea=(uint16_t)(0x04C4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81AEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04C4u,ea)?1u:0u));
        }
        case 0x81AEu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81B0u; return dd3_static_complete(rt,2u);
        }
        case 0x81B0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81B2u,0x81C5u)) c++; rt->state.cpu.pc=0x81C5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81B2u; return dd3_static_complete(rt,2u);
        }
        case 0x81B2u: {
            uint16_t ea=(uint16_t)(0x0463u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81B5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0463u,ea)?1u:0u));
        }
        case 0x81B5u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81B7u,0x81BCu)) c++; rt->state.cpu.pc=0x81BCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81B7u; return dd3_static_complete(rt,2u);
        }
        case 0x81B7u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81B9u; return dd3_static_complete(rt,2u);
        }
        case 0x81B9u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x81BBu; return dd3_static_complete(rt,4u);
        }
        case 0x81BBu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x81BCu: {
            dd3_static_push8(rt,(uint8_t)(0x81BEu>>8)); dd3_static_push8(rt,(uint8_t)0x81BEu);
            rt->state.cpu.pc=0x82BEu; return dd3_static_complete(rt,6u);
        }
        case 0x81BFu: {
            dd3_static_push8(rt,(uint8_t)(0x81C1u>>8)); dd3_static_push8(rt,(uint8_t)0x81C1u);
            rt->state.cpu.pc=0x8221u; return dd3_static_complete(rt,6u);
        }
        case 0x81C2u: {
            dd3_static_push8(rt,(uint8_t)(0x81C4u>>8)); dd3_static_push8(rt,(uint8_t)0x81C4u);
            rt->state.cpu.pc=0x8663u; return dd3_static_complete(rt,6u);
        }
        case 0x81C5u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x81C6u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81C8u; return dd3_static_complete(rt,4u);
        }
        case 0x81C8u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81CAu; return dd3_static_complete(rt,2u);
        }
        case 0x81CAu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81CCu; return dd3_static_complete(rt,2u);
        }
        case 0x81CCu: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x81CFu; return dd3_static_complete(rt,5u);
        }
        case 0x81CFu: {
            uint16_t ea=(uint16_t)(0x0463u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81D2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0463u,ea)?1u:0u));
        }
        case 0x81D2u: {
            uint16_t ea=(uint16_t)(0x8210u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81D5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8210u,ea)?1u:0u));
        }
        case 0x81D5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81D7u,0x81D9u)) c++; rt->state.cpu.pc=0x81D9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81D7u; return dd3_static_complete(rt,2u);
        }
        case 0x81D7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x81D9u,0x81E8u)) c++; rt->state.cpu.pc=0x81E8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81D9u; return dd3_static_complete(rt,2u);
        }
        case 0x81D9u: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x81DBu; return dd3_static_complete(rt,2u);
        }
        case 0x81DBu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81DDu,0x81F6u)) c++; rt->state.cpu.pc=0x81F6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81DDu; return dd3_static_complete(rt,2u);
        }
        case 0x81DDu: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81DFu; return dd3_static_complete(rt,4u);
        }
        case 0x81DFu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81E1u; return dd3_static_complete(rt,2u);
        }
        case 0x81E1u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81E3u,0x81F6u)) c++; rt->state.cpu.pc=0x81F6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81E3u; return dd3_static_complete(rt,2u);
        }
        case 0x81E3u: {
            uint8_t v=0x09u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81E5u; return dd3_static_complete(rt,2u);
        }
        case 0x81E5u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x81E7u; return dd3_static_complete(rt,4u);
        }
        case 0x81E7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x81E8u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81E9u; return dd3_static_complete(rt,2u);
        }
        case 0x81E9u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x81EAu; return dd3_static_complete(rt,2u);
        }
        case 0x81EAu: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81ECu; return dd3_static_complete(rt,4u);
        }
        case 0x81ECu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x81EEu,0x81F0u)) c++; rt->state.cpu.pc=0x81F0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81EEu; return dd3_static_complete(rt,2u);
        }
        case 0x81EEu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x81EFu; return dd3_static_complete(rt,2u);
        }
        case 0x81EFu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x81F0u; return dd3_static_complete(rt,2u);
        }
        case 0x81F0u: {
            uint16_t ea=(uint16_t)(0x821Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81F3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x821Du,ea)?1u:0u));
        }
        case 0x81F3u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x81F6u; return dd3_static_complete(rt,5u);
        }
        case 0x81F6u: {
            uint16_t ea=(uint16_t)((0x99u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81F8u; return dd3_static_complete(rt,4u);
        }
        case 0x81F8u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81FAu; return dd3_static_complete(rt,2u);
        }
        case 0x81FAu: {
            uint8_t v=0xC0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x81FCu; return dd3_static_complete(rt,2u);
        }
        case 0x81FCu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81FEu,0x820Fu)) c++; rt->state.cpu.pc=0x820Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81FEu; return dd3_static_complete(rt,2u);
        }
        case 0x81FEu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8200u; return dd3_static_complete(rt,4u);
        }
        case 0x8200u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8201u; return dd3_static_complete(rt,2u);
        }
        case 0x8201u: {
            uint16_t ea=(uint16_t)(0x8219u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8204u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8219u,ea)?1u:0u));
        }
        case 0x8204u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8206u; return dd3_static_complete(rt,4u);
        }
        case 0x8206u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8208u; return dd3_static_complete(rt,4u);
        }
        case 0x8208u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x820Au; return dd3_static_complete(rt,2u);
        }
        case 0x820Au: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x820Cu; return dd3_static_complete(rt,2u);
        }
        case 0x820Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x820Fu; return dd3_static_complete(rt,5u);
        }
        case 0x820Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8221u: {
            uint16_t ea=(uint16_t)(0x0463u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8224u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0463u,ea)?1u:0u));
        }
        case 0x8224u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8226u,0x8230u)) c++; rt->state.cpu.pc=0x8230u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8226u; return dd3_static_complete(rt,2u);
        }
        case 0x8226u: {
            uint16_t ea=(uint16_t)(0x0467u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8229u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0467u,ea)?1u:0u));
        }
        case 0x8229u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x822Bu,0x822Eu)) c++; rt->state.cpu.pc=0x822Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x822Bu; return dd3_static_complete(rt,2u);
        }
        case 0x822Bu: {
            uint16_t ea=(uint16_t)(0x0467u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x822Eu; return dd3_static_complete(rt,7u);
        }
        case 0x822Eu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x822Fu; return dd3_static_complete(rt,2u);
        }
        case 0x822Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8230u: {
            uint16_t ea=(uint16_t)(0x0465u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0465u,ea)?1u:0u));
        }
        case 0x8233u: {
            dd3_static_write8(rt,(uint16_t)(0x0465u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8236u; return dd3_static_complete(rt,5u);
        }
        case 0x8236u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8238u,0x8276u)) c++; rt->state.cpu.pc=0x8276u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8238u; return dd3_static_complete(rt,2u);
        }
        case 0x8238u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x823Au; return dd3_static_complete(rt,2u);
        }
        case 0x823Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x823Cu,0x8240u)) c++; rt->state.cpu.pc=0x8240u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x823Cu; return dd3_static_complete(rt,2u);
        }
        case 0x823Cu: {
            uint8_t v=0x07u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x823Eu; return dd3_static_complete(rt,2u);
        }
        case 0x823Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8240u,0x8276u)) c++; rt->state.cpu.pc=0x8276u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8240u; return dd3_static_complete(rt,2u);
        }
        case 0x8240u: {
            uint16_t ea=(uint16_t)(0x0469u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8243u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0469u,ea)?1u:0u));
        }
        case 0x8243u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8245u,0x8248u)) c++; rt->state.cpu.pc=0x8248u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8245u; return dd3_static_complete(rt,2u);
        }
        case 0x8245u: {
            uint16_t ea=(uint16_t)(0x0469u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8248u; return dd3_static_complete(rt,7u);
        }
        case 0x8248u: {
            uint16_t ea=(uint16_t)(0x0467u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x824Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0467u,ea)?1u:0u));
        }
        case 0x824Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x824Du,0x8276u)) c++; rt->state.cpu.pc=0x8276u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x824Du; return dd3_static_complete(rt,2u);
        }
        case 0x824Du: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x824Fu; return dd3_static_complete(rt,2u);
        }
        case 0x824Fu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8251u,0x8276u)) c++; rt->state.cpu.pc=0x8276u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8251u; return dd3_static_complete(rt,2u);
        }
        case 0x8251u: {
            uint16_t ea=(uint16_t)(0x0469u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8254u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0469u,ea)?1u:0u));
        }
        case 0x8254u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8256u; return dd3_static_complete(rt,2u);
        }
        case 0x8256u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8258u,0x8271u)) c++; rt->state.cpu.pc=0x8271u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8258u; return dd3_static_complete(rt,2u);
        }
        case 0x8258u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x825Au; return dd3_static_complete(rt,2u);
        }
        case 0x825Au: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x825Cu; return dd3_static_complete(rt,4u);
        }
        case 0x825Cu: {
            uint16_t ea=(uint16_t)(0x0463u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x825Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0463u,ea)?1u:0u));
        }
        case 0x825Fu: {
            uint16_t ea=(uint16_t)(0x827Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8262u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x827Du,ea)?1u:0u));
        }
        case 0x8262u: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8264u; return dd3_static_complete(rt,4u);
        }
        case 0x8264u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8266u; return dd3_static_complete(rt,2u);
        }
        case 0x8266u: {
            dd3_static_write8(rt,(uint16_t)(0x0467u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8269u; return dd3_static_complete(rt,5u);
        }
        case 0x8269u: {
            dd3_static_write8(rt,(uint16_t)(0x0469u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x826Cu; return dd3_static_complete(rt,5u);
        }
        case 0x826Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0465u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x826Fu; return dd3_static_complete(rt,5u);
        }
        case 0x826Fu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8270u; return dd3_static_complete(rt,2u);
        }
        case 0x8270u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8271u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8273u; return dd3_static_complete(rt,2u);
        }
        case 0x8273u: {
            dd3_static_write8(rt,(uint16_t)(0x0469u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8276u; return dd3_static_complete(rt,5u);
        }
        case 0x8276u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8278u; return dd3_static_complete(rt,2u);
        }
        case 0x8278u: {
            dd3_static_write8(rt,(uint16_t)(0x0467u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x827Bu; return dd3_static_complete(rt,5u);
        }
        case 0x827Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x827Du,0x822Eu)) c++; rt->state.cpu.pc=0x822Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x827Du; return dd3_static_complete(rt,2u);
        }
        case 0x827Du: {
            uint16_t ea=(uint16_t)(0xFFFFu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8280u; return dd3_static_complete(rt,7u);
        }
        case 0x8280u: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt)); { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)((hi<<8)|lo); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8286u: {
            uint16_t ea=(uint16_t)(0x0318u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8289u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0318u,ea)?1u:0u));
        }
        case 0x8289u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x828Bu,0x828Fu)) c++; rt->state.cpu.pc=0x828Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x828Bu; return dd3_static_complete(rt,2u);
        }
        case 0x828Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x828Du; return dd3_static_complete(rt,2u);
        }
        case 0x828Du: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x828Fu; return dd3_static_complete(rt,4u);
        }
        case 0x828Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8290u: {
            uint16_t ea=(uint16_t)((0x99u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8292u; return dd3_static_complete(rt,4u);
        }
        case 0x8292u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8294u; return dd3_static_complete(rt,2u);
        }
        case 0x8294u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8296u,0x82BDu)) c++; rt->state.cpu.pc=0x82BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8296u; return dd3_static_complete(rt,2u);
        }
        case 0x8296u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8298u; return dd3_static_complete(rt,2u);
        }
        case 0x8298u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x829Au,0x82BBu)) c++; rt->state.cpu.pc=0x82BBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x829Au; return dd3_static_complete(rt,2u);
        }
        case 0x829Au: {
            uint16_t ea=(uint16_t)((0x99u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x829Cu; return dd3_static_complete(rt,4u);
        }
        case 0x829Cu: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x829Eu; return dd3_static_complete(rt,2u);
        }
        case 0x829Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82A0u,0x8296u)) c++; rt->state.cpu.pc=0x8296u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82A0u; return dd3_static_complete(rt,2u);
        }
        case 0x82A0u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x82A1u: {
            uint16_t ea=(uint16_t)((0x99u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82A3u; return dd3_static_complete(rt,4u);
        }
        case 0x82A3u: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x82A5u; return dd3_static_complete(rt,2u);
        }
        case 0x82A5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82A7u,0x82BDu)) c++; rt->state.cpu.pc=0x82BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82A7u; return dd3_static_complete(rt,2u);
        }
        case 0x82A7u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x82A9u; return dd3_static_complete(rt,2u);
        }
        case 0x82A9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82ABu,0x82B4u)) c++; rt->state.cpu.pc=0x82B4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82ABu; return dd3_static_complete(rt,2u);
        }
        case 0x82ABu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82ADu; return dd3_static_complete(rt,2u);
        }
        case 0x82ADu: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x82B0u; return dd3_static_complete(rt,5u);
        }
        case 0x82B0u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82B2u; return dd3_static_complete(rt,2u);
        }
        case 0x82B2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82B4u,0x82BBu)) c++; rt->state.cpu.pc=0x82BBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82B4u; return dd3_static_complete(rt,2u);
        }
        case 0x82B4u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82B6u; return dd3_static_complete(rt,2u);
        }
        case 0x82B6u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x82B9u; return dd3_static_complete(rt,5u);
        }
        case 0x82B9u: {
            uint8_t v=0x05u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82BBu; return dd3_static_complete(rt,2u);
        }
        case 0x82BBu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x82BDu; return dd3_static_complete(rt,4u);
        }
        case 0x82BDu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x82BEu: {
            uint16_t ea=(uint16_t)(0x0463u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82C1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0463u,ea)?1u:0u));
        }
        case 0x82C1u: {
            uint16_t ea=(uint16_t)(0x82FBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82C4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x82FBu,ea)?1u:0u));
        }
        case 0x82C4u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x82C7u; return dd3_static_complete(rt,5u);
        }
        case 0x82C7u: {
            uint16_t ea=(uint16_t)(0x830Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82CAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x830Du,ea)?1u:0u));
        }
        case 0x82CAu: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x82CCu; return dd3_static_complete(rt,2u);
        }
        case 0x82CCu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82CEu,0x82EEu)) c++; rt->state.cpu.pc=0x82EEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82CEu; return dd3_static_complete(rt,2u);
        }
        case 0x82CEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82D0u,0x82ECu)) c++; rt->state.cpu.pc=0x82ECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82D0u; return dd3_static_complete(rt,2u);
        }
        case 0x82D0u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x82D2u; return dd3_static_complete(rt,4u);
        }
        case 0x82D2u: {
            uint8_t v=0x2Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x82D4u; return dd3_static_complete(rt,2u);
        }
        case 0x82D4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82D6u,0x82DFu)) c++; rt->state.cpu.pc=0x82DFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82D6u; return dd3_static_complete(rt,2u);
        }
        case 0x82D6u: {
            uint16_t ea=(uint16_t)(0x0463u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82D9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0463u,ea)?1u:0u));
        }
        case 0x82D9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82DBu,0x82DFu)) c++; rt->state.cpu.pc=0x82DFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82DBu; return dd3_static_complete(rt,2u);
        }
        case 0x82DBu: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82DDu; return dd3_static_complete(rt,2u);
        }
        case 0x82DDu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x82DFu; return dd3_static_complete(rt,4u);
        }
        case 0x82DFu: {
            uint16_t ea=(uint16_t)(0x0463u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82E2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0463u,ea)?1u:0u));
        }
        case 0x82E2u: {
            uint16_t ea=(uint16_t)(0x8304u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82E5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8304u,ea)?1u:0u));
        }
        case 0x82E5u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x82E8u; return dd3_static_complete(rt,5u);
        }
        case 0x82E8u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82EAu,0x82EEu)) c++; rt->state.cpu.pc=0x82EEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82EAu; return dd3_static_complete(rt,2u);
        }
        case 0x82EAu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x82ECu; return dd3_static_complete(rt,2u);
        }
        case 0x82ECu: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x82EEu; return dd3_static_complete(rt,4u);
        }
        case 0x82EEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x82EFu: {
            uint16_t ea=(uint16_t)(0x0463u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82F2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0463u,ea)?1u:0u));
        }
        case 0x82F2u: {
            uint16_t ea=(uint16_t)(0x830Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82F5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x830Du,ea)?1u:0u));
        }
        case 0x82F5u: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x82F7u; return dd3_static_complete(rt,2u);
        }
        case 0x82F7u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82F9u,0x82EEu)) c++; rt->state.cpu.pc=0x82EEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82F9u; return dd3_static_complete(rt,2u);
        }
        case 0x82F9u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82FBu,0x82ECu)) c++; rt->state.cpu.pc=0x82ECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82FBu; return dd3_static_complete(rt,2u);
        }
        case 0x82FBu: {
            { uint16_t ret=0x82FDu; dd3_static_push8(rt,(uint8_t)(ret>>8)); dd3_static_push8(rt,(uint8_t)ret); dd3_static_push8(rt,dd3_static_pack_p(rt,1)); rt->state.cpu.i=1; rt->state.cpu.pc=rt->rom->irq_vector; }
            return dd3_static_complete(rt,7u);
        }
        case 0x8316u: {
            dd3_static_push8(rt,(uint8_t)(0x8318u>>8)); dd3_static_push8(rt,(uint8_t)0x8318u);
            rt->state.cpu.pc=0x82EFu; return dd3_static_complete(rt,6u);
        }
        case 0x8319u: {
            uint16_t ea=(uint16_t)((0x97u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x831Bu; return dd3_static_complete(rt,4u);
        }
        case 0x831Bu: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x831Du; return dd3_static_complete(rt,2u);
        }
        case 0x831Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x831Fu,0x835Bu)) c++; rt->state.cpu.pc=0x835Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x831Fu; return dd3_static_complete(rt,2u);
        }
        case 0x831Fu: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8322u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0x8322u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8324u,0x835Bu)) c++; rt->state.cpu.pc=0x835Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8324u; return dd3_static_complete(rt,2u);
        }
        case 0x8324u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8325u; return dd3_static_complete(rt,2u);
        }
        case 0x8325u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8327u; return dd3_static_complete(rt,2u);
        }
        case 0x8327u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8328u; return dd3_static_complete(rt,2u);
        }
        case 0x8328u: {
            uint16_t ea=(uint16_t)(0x003Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x832Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Cu,ea)?1u:0u));
        }
        case 0x832Bu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x832Du,0x8341u)) c++; rt->state.cpu.pc=0x8341u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x832Du; return dd3_static_complete(rt,2u);
        }
        case 0x832Du: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8330u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0x8330u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8332u,0x8341u)) c++; rt->state.cpu.pc=0x8341u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8332u; return dd3_static_complete(rt,2u);
        }
        case 0x8332u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8334u; return dd3_static_complete(rt,2u);
        }
        case 0x8334u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8336u; return dd3_static_complete(rt,2u);
        }
        case 0x8336u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8338u,0x833Cu)) c++; rt->state.cpu.pc=0x833Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8338u; return dd3_static_complete(rt,2u);
        }
        case 0x8338u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x833Au; return dd3_static_complete(rt,2u);
        }
        case 0x833Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x833Cu,0x8341u)) c++; rt->state.cpu.pc=0x8341u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x833Cu; return dd3_static_complete(rt,2u);
        }
        case 0x833Cu: {
            uint16_t ea=(uint16_t)(0x0318u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x833Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0318u,ea)?1u:0u));
        }
        case 0x833Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8341u,0x835Cu)) c++; rt->state.cpu.pc=0x835Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8341u; return dd3_static_complete(rt,2u);
        }
        case 0x8341u: {
            dd3_static_push8(rt,(uint8_t)(0x8343u>>8)); dd3_static_push8(rt,(uint8_t)0x8343u);
            rt->state.cpu.pc=0x83FDu; return dd3_static_complete(rt,6u);
        }
        case 0x8344u: {
            uint16_t ea=(uint16_t)(0x8446u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8347u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8446u,ea)?1u:0u));
        }
        case 0x8347u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8349u,0x8350u)) c++; rt->state.cpu.pc=0x8350u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8349u; return dd3_static_complete(rt,2u);
        }
        case 0x8349u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x834Bu,0x835Bu)) c++; rt->state.cpu.pc=0x835Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x834Bu; return dd3_static_complete(rt,2u);
        }
        case 0x834Bu: {
            uint16_t ea=(uint16_t)(0x844Au+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x834Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x844Au,ea)?1u:0u));
        }
        case 0x834Eu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8350u,0x835Bu)) c++; rt->state.cpu.pc=0x835Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8350u; return dd3_static_complete(rt,2u);
        }
        case 0x8350u: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8352u; return dd3_static_complete(rt,3u);
        }
        case 0x8352u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8354u; return dd3_static_complete(rt,4u);
        }
        case 0x8354u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8355u; return dd3_static_complete(rt,2u);
        }
        case 0x8355u: {
            uint16_t ea=(uint16_t)(0x8406u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8358u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8406u,ea)?1u:0u));
        }
        case 0x8358u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8359u; return dd3_static_complete(rt,2u);
        }
        case 0x8359u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.y);
            rt->state.cpu.pc=0x835Bu; return dd3_static_complete(rt,4u);
        }
        case 0x835Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x835Cu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x835Eu; return dd3_static_complete(rt,2u);
        }
        case 0x835Eu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8360u,0x8341u)) c++; rt->state.cpu.pc=0x8341u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8360u; return dd3_static_complete(rt,2u);
        }
        case 0x8360u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x8362u; return dd3_static_complete(rt,2u);
        }
        case 0x8362u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8364u,0x8341u)) c++; rt->state.cpu.pc=0x8341u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8364u; return dd3_static_complete(rt,2u);
        }
        case 0x8364u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8366u; return dd3_static_complete(rt,4u);
        }
        case 0x8366u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8367u; return dd3_static_complete(rt,2u);
        }
        case 0x8367u: {
            uint16_t ea=(uint16_t)(0x00CBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x836Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00CBu,ea)?1u:0u));
        }
        case 0x836Au: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x836Cu; return dd3_static_complete(rt,3u);
        }
        case 0x836Cu: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x836Eu; return dd3_static_complete(rt,4u);
        }
        case 0x836Eu: {
            uint16_t ea=(uint16_t)(0x00D5u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8371u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00D5u,ea)?1u:0u));
        }
        case 0x8371u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8373u; return dd3_static_complete(rt,3u);
        }
        case 0x8373u: {
            dd3_static_push8(rt,(uint8_t)(0x8375u>>8)); dd3_static_push8(rt,(uint8_t)0x8375u);
            rt->state.cpu.pc=0x8416u; return dd3_static_complete(rt,6u);
        }
        case 0x8376u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8378u; return dd3_static_complete(rt,3u);
        }
        case 0x8378u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x837Au; return dd3_static_complete(rt,2u);
        }
        case 0x837Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x837Cu,0x8341u)) c++; rt->state.cpu.pc=0x8341u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x837Cu; return dd3_static_complete(rt,2u);
        }
        case 0x837Cu: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x837Eu; return dd3_static_complete(rt,4u);
        }
        case 0x837Eu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x837Fu; return dd3_static_complete(rt,2u);
        }
        case 0x837Fu: {
            uint16_t ea=(uint16_t)(0x00DFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8382u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00DFu,ea)?1u:0u));
        }
        case 0x8382u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8384u; return dd3_static_complete(rt,3u);
        }
        case 0x8384u: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8386u; return dd3_static_complete(rt,4u);
        }
        case 0x8386u: {
            uint16_t ea=(uint16_t)(0x00E9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8389u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00E9u,ea)?1u:0u));
        }
        case 0x8389u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x838Bu; return dd3_static_complete(rt,3u);
        }
        case 0x838Bu: {
            dd3_static_push8(rt,(uint8_t)(0x838Du>>8)); dd3_static_push8(rt,(uint8_t)0x838Du);
            rt->state.cpu.pc=0x8416u; return dd3_static_complete(rt,6u);
        }
        case 0x838Eu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8390u; return dd3_static_complete(rt,3u);
        }
        case 0x8390u: {
            uint8_t v=0x18u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8392u; return dd3_static_complete(rt,2u);
        }
        case 0x8392u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8394u,0x8341u)) c++; rt->state.cpu.pc=0x8341u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8394u; return dd3_static_complete(rt,2u);
        }
        case 0x8394u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8396u; return dd3_static_complete(rt,4u);
        }
        case 0x8396u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8397u; return dd3_static_complete(rt,2u);
        }
        case 0x8397u: {
            uint16_t ea=(uint16_t)(0x00B7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x839Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B7u,ea)?1u:0u));
        }
        case 0x839Au: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x839Cu; return dd3_static_complete(rt,3u);
        }
        case 0x839Cu: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x839Eu; return dd3_static_complete(rt,4u);
        }
        case 0x839Eu: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x83A1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0x83A1u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x83A3u; return dd3_static_complete(rt,3u);
        }
        case 0x83A3u: {
            dd3_static_push8(rt,(uint8_t)(0x83A5u>>8)); dd3_static_push8(rt,(uint8_t)0x83A5u);
            rt->state.cpu.pc=0x8416u; return dd3_static_complete(rt,6u);
        }
        case 0x83A6u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83A8u; return dd3_static_complete(rt,3u);
        }
        case 0x83A8u: {
            uint8_t v=0x18u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x83AAu; return dd3_static_complete(rt,2u);
        }
        case 0x83AAu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x83ACu,0x8341u)) c++; rt->state.cpu.pc=0x8341u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83ACu; return dd3_static_complete(rt,2u);
        }
        case 0x83ACu: {
            dd3_static_push8(rt,(uint8_t)(0x83AEu>>8)); dd3_static_push8(rt,(uint8_t)0x83AEu);
            rt->state.cpu.pc=0x83FDu; return dd3_static_complete(rt,6u);
        }
        case 0x83AFu: {
            uint16_t ea=(uint16_t)(0x8446u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x83B2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8446u,ea)?1u:0u));
        }
        case 0x83B2u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x83B4u,0x83C1u)) c++; rt->state.cpu.pc=0x83C1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83B4u; return dd3_static_complete(rt,2u);
        }
        case 0x83B4u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x83B6u,0x83B9u)) c++; rt->state.cpu.pc=0x83B9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83B6u; return dd3_static_complete(rt,2u);
        }
        case 0x83B6u: {
            rt->state.cpu.pc=0x8341u; return dd3_static_complete(rt,3u);
        }
        case 0x83B9u: {
            uint16_t ea=(uint16_t)(0x844Au+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x83BCu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x844Au,ea)?1u:0u));
        }
        case 0x83BCu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x83BEu,0x83C1u)) c++; rt->state.cpu.pc=0x83C1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83BEu; return dd3_static_complete(rt,2u);
        }
        case 0x83BEu: {
            rt->state.cpu.pc=0x8341u; return dd3_static_complete(rt,3u);
        }
        case 0x83C1u: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83C3u; return dd3_static_complete(rt,3u);
        }
        case 0x83C3u: {
            uint16_t ea=0x74u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83C5u; return dd3_static_complete(rt,3u);
        }
        case 0x83C5u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x83C7u; return dd3_static_complete(rt,2u);
        }
        case 0x83C7u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x83C9u,0x83F1u)) c++; rt->state.cpu.pc=0x83F1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83C9u; return dd3_static_complete(rt,2u);
        }
        case 0x83C9u: {
            uint16_t ea=0x75u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83CBu; return dd3_static_complete(rt,3u);
        }
        case 0x83CBu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x83CDu; return dd3_static_complete(rt,2u);
        }
        case 0x83CDu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x83CFu,0x83F1u)) c++; rt->state.cpu.pc=0x83F1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83CFu; return dd3_static_complete(rt,2u);
        }
        case 0x83CFu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83D1u; return dd3_static_complete(rt,4u);
        }
        case 0x83D1u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x83D3u,0x83D9u)) c++; rt->state.cpu.pc=0x83D9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83D3u; return dd3_static_complete(rt,2u);
        }
        case 0x83D3u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x83D5u; return dd3_static_complete(rt,2u);
        }
        case 0x83D5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x83D7u,0x83DDu)) c++; rt->state.cpu.pc=0x83DDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83D7u; return dd3_static_complete(rt,2u);
        }
        case 0x83D7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x83D9u,0x83F2u)) c++; rt->state.cpu.pc=0x83F2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83D9u; return dd3_static_complete(rt,2u);
        }
        case 0x83D9u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x83DBu; return dd3_static_complete(rt,2u);
        }
        case 0x83DBu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x83DDu,0x83F2u)) c++; rt->state.cpu.pc=0x83F2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83DDu; return dd3_static_complete(rt,2u);
        }
        case 0x83DDu: {
            uint16_t ea=0x0481u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83E0u; return dd3_static_complete(rt,4u);
        }
        case 0x83E0u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x83E2u,0x83F1u)) c++; rt->state.cpu.pc=0x83F1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83E2u; return dd3_static_complete(rt,2u);
        }
        case 0x83E2u: {
            uint16_t ea=0x0482u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83E5u; return dd3_static_complete(rt,4u);
        }
        case 0x83E5u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x83E7u,0x83F1u)) c++; rt->state.cpu.pc=0x83F1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83E7u; return dd3_static_complete(rt,2u);
        }
        case 0x83E7u: {
            uint8_t v=0x36u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83E9u; return dd3_static_complete(rt,2u);
        }
        case 0x83E9u: {
            dd3_static_write8(rt,0x45u,rt->state.cpu.a);
            rt->state.cpu.pc=0x83EBu; return dd3_static_complete(rt,3u);
        }
        case 0x83EBu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83EDu; return dd3_static_complete(rt,2u);
        }
        case 0x83EDu: {
            dd3_static_write8(rt,0x44u,rt->state.cpu.a);
            rt->state.cpu.pc=0x83EFu; return dd3_static_complete(rt,3u);
        }
        case 0x83EFu: {
            dd3_static_write8(rt,0x7Du,rt->state.cpu.a);
            rt->state.cpu.pc=0x83F1u; return dd3_static_complete(rt,3u);
        }
        case 0x83F1u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x83F2u: {
            uint8_t v=0x36u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83F4u; return dd3_static_complete(rt,2u);
        }
        case 0x83F4u: {
            dd3_static_write8(rt,0x44u,rt->state.cpu.a);
            rt->state.cpu.pc=0x83F6u; return dd3_static_complete(rt,3u);
        }
        case 0x83F6u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83F8u; return dd3_static_complete(rt,2u);
        }
        case 0x83F8u: {
            dd3_static_write8(rt,0x45u,rt->state.cpu.a);
            rt->state.cpu.pc=0x83FAu; return dd3_static_complete(rt,3u);
        }
        case 0x83FAu: {
            dd3_static_write8(rt,0x7Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x83FCu; return dd3_static_complete(rt,3u);
        }
        case 0x83FCu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x83FDu: {
            uint16_t ea=(uint16_t)(0x0347u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8400u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0347u,ea)?1u:0u));
        }
        case 0x8400u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8401u; return dd3_static_complete(rt,3u);
        }
        case 0x8401u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8403u; return dd3_static_complete(rt,4u);
        }
        case 0x8403u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8404u; return dd3_static_complete(rt,2u);
        }
        case 0x8404u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8405u; return dd3_static_complete(rt,4u);
        }
        case 0x8405u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8416u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8418u; return dd3_static_complete(rt,2u);
        }
        case 0x8418u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x841Au; return dd3_static_complete(rt,3u);
        }
        case 0x841Au: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x841Cu; return dd3_static_complete(rt,3u);
        }
        case 0x841Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x841Eu,0x8427u)) c++; rt->state.cpu.pc=0x8427u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x841Eu; return dd3_static_complete(rt,2u);
        }
        case 0x841Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8420u>>8)); dd3_static_push8(rt,(uint8_t)0x8420u);
            rt->state.cpu.pc=0x8434u; return dd3_static_complete(rt,6u);
        }
        case 0x8421u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8423u; return dd3_static_complete(rt,3u);
        }
        case 0x8423u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8425u,0x8433u)) c++; rt->state.cpu.pc=0x8433u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8425u; return dd3_static_complete(rt,2u);
        }
        case 0x8425u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8427u,0x842Fu)) c++; rt->state.cpu.pc=0x842Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8427u; return dd3_static_complete(rt,2u);
        }
        case 0x8427u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8429u; return dd3_static_complete(rt,2u);
        }
        case 0x8429u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x842Bu; return dd3_static_complete(rt,3u);
        }
        case 0x842Bu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x842Du; return dd3_static_complete(rt,3u);
        }
        case 0x842Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x842Fu,0x8433u)) c++; rt->state.cpu.pc=0x8433u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x842Fu; return dd3_static_complete(rt,2u);
        }
        case 0x842Fu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8431u; return dd3_static_complete(rt,2u);
        }
        case 0x8431u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8433u; return dd3_static_complete(rt,3u);
        }
        case 0x8433u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8434u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8436u; return dd3_static_complete(rt,3u);
        }
        case 0x8436u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8438u; return dd3_static_complete(rt,2u);
        }
        case 0x8438u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8439u; return dd3_static_complete(rt,2u);
        }
        case 0x8439u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x843Bu; return dd3_static_complete(rt,2u);
        }
        case 0x843Bu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x843Du; return dd3_static_complete(rt,3u);
        }
        case 0x843Du: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x843Fu; return dd3_static_complete(rt,3u);
        }
        case 0x843Fu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8441u; return dd3_static_complete(rt,2u);
        }
        case 0x8441u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8443u; return dd3_static_complete(rt,2u);
        }
        case 0x8443u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8445u; return dd3_static_complete(rt,3u);
        }
        case 0x8445u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x844Eu: {
            uint16_t ea=(uint16_t)(0x0318u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8451u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0318u,ea)?1u:0u));
        }
        case 0x8451u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8453u,0x8456u)) c++; rt->state.cpu.pc=0x8456u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8453u; return dd3_static_complete(rt,2u);
        }
        case 0x8453u: {
            rt->state.cpu.pc=0x8316u; return dd3_static_complete(rt,3u);
        }
        case 0x8456u: {
            dd3_static_push8(rt,(uint8_t)(0x8458u>>8)); dd3_static_push8(rt,(uint8_t)0x8458u);
            rt->state.cpu.pc=0x82EFu; return dd3_static_complete(rt,6u);
        }
        case 0x8459u: {
            uint16_t ea=(uint16_t)((0x97u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x845Bu; return dd3_static_complete(rt,4u);
        }
        case 0x845Bu: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x845Du; return dd3_static_complete(rt,2u);
        }
        case 0x845Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x845Fu,0x849Bu)) c++; rt->state.cpu.pc=0x849Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x845Fu; return dd3_static_complete(rt,2u);
        }
        case 0x845Fu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8461u; return dd3_static_complete(rt,2u);
        }
        case 0x8461u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8463u,0x847Au)) c++; rt->state.cpu.pc=0x847Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8463u; return dd3_static_complete(rt,2u);
        }
        case 0x8463u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8465u; return dd3_static_complete(rt,4u);
        }
        case 0x8465u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8466u; return dd3_static_complete(rt,2u);
        }
        case 0x8466u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8468u; return dd3_static_complete(rt,4u);
        }
        case 0x8468u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x846Au; return dd3_static_complete(rt,2u);
        }
        case 0x846Au: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x846Cu; return dd3_static_complete(rt,2u);
        }
        case 0x846Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x846Eu,0x8474u)) c++; rt->state.cpu.pc=0x8474u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x846Eu; return dd3_static_complete(rt,2u);
        }
        case 0x846Eu: {
            uint16_t ea=(uint16_t)(0x840Au+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8471u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x840Au,ea)?1u:0u));
        }
        case 0x8471u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8472u; return dd3_static_complete(rt,2u);
        }
        case 0x8472u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8474u,0x8497u)) c++; rt->state.cpu.pc=0x8497u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8474u; return dd3_static_complete(rt,2u);
        }
        case 0x8474u: {
            uint16_t ea=(uint16_t)(0x840Eu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8477u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x840Eu,ea)?1u:0u));
        }
        case 0x8477u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8478u; return dd3_static_complete(rt,2u);
        }
        case 0x8478u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x847Au,0x8497u)) c++; rt->state.cpu.pc=0x8497u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x847Au; return dd3_static_complete(rt,2u);
        }
        case 0x847Au: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x847Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0x847Du: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x847Fu,0x849Bu)) c++; rt->state.cpu.pc=0x849Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x847Fu; return dd3_static_complete(rt,2u);
        }
        case 0x847Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8481u>>8)); dd3_static_push8(rt,(uint8_t)0x8481u);
            rt->state.cpu.pc=0x83FDu; return dd3_static_complete(rt,6u);
        }
        case 0x8482u: {
            uint16_t ea=(uint16_t)(0x8446u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8485u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8446u,ea)?1u:0u));
        }
        case 0x8485u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8487u,0x848Eu)) c++; rt->state.cpu.pc=0x848Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8487u; return dd3_static_complete(rt,2u);
        }
        case 0x8487u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8489u,0x849Bu)) c++; rt->state.cpu.pc=0x849Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8489u; return dd3_static_complete(rt,2u);
        }
        case 0x8489u: {
            uint16_t ea=(uint16_t)(0x844Au+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x848Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x844Au,ea)?1u:0u));
        }
        case 0x848Cu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x848Eu,0x849Bu)) c++; rt->state.cpu.pc=0x849Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x848Eu; return dd3_static_complete(rt,2u);
        }
        case 0x848Eu: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8490u; return dd3_static_complete(rt,3u);
        }
        case 0x8490u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8492u; return dd3_static_complete(rt,4u);
        }
        case 0x8492u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8493u; return dd3_static_complete(rt,2u);
        }
        case 0x8493u: {
            uint16_t ea=(uint16_t)(0x8412u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8496u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8412u,ea)?1u:0u));
        }
        case 0x8496u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8497u; return dd3_static_complete(rt,2u);
        }
        case 0x8497u: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8499u; return dd3_static_complete(rt,3u);
        }
        case 0x8499u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.y);
            rt->state.cpu.pc=0x849Bu; return dd3_static_complete(rt,4u);
        }
        case 0x849Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x849Cu: {
            uint16_t ea=(uint16_t)((0x97u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x849Eu; return dd3_static_complete(rt,4u);
        }
        case 0x849Eu: {
            rt->state.cpu.pc=0x84A3u; return dd3_static_complete(rt,3u);
        }
        case 0x84A1u: {
            uint16_t ea=(uint16_t)((0x99u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84A3u; return dd3_static_complete(rt,4u);
        }
        case 0x84A3u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84A5u; return dd3_static_complete(rt,2u);
        }
        case 0x84A5u: {
            uint8_t v=0xC0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x84A7u; return dd3_static_complete(rt,2u);
        }
        case 0x84A7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84A9u,0x84B3u)) c++; rt->state.cpu.pc=0x84B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84A9u; return dd3_static_complete(rt,2u);
        }
        case 0x84A9u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84ABu; return dd3_static_complete(rt,4u);
        }
        case 0x84ABu: {
            uint16_t ea=(uint16_t)(0x8744u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84AEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8744u,ea)?1u:0u));
        }
        case 0x84AEu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x84B0u; return dd3_static_complete(rt,4u);
        }
        case 0x84B0u: {
            dd3_static_push8(rt,(uint8_t)(0x84B2u>>8)); dd3_static_push8(rt,(uint8_t)0x84B2u);
            rt->state.cpu.pc=0x82D0u; return dd3_static_complete(rt,6u);
        }
        case 0x84B3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x84B5u: {
            uint8_t v=0x50u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84B7u; return dd3_static_complete(rt,2u);
        }
        case 0x84B7u: {
            uint16_t ea=(uint16_t)((0x97u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84B9u; return dd3_static_complete(rt,4u);
        }
        case 0x84B9u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84BBu; return dd3_static_complete(rt,2u);
        }
        case 0x84BBu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84BDu,0x84C3u)) c++; rt->state.cpu.pc=0x84C3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84BDu; return dd3_static_complete(rt,2u);
        }
        case 0x84BDu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x84BFu,0x850Au)) c++; rt->state.cpu.pc=0x850Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84BFu; return dd3_static_complete(rt,2u);
        }
        case 0x84BFu: {
            uint8_t v=0x4Fu;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84C1u; return dd3_static_complete(rt,2u);
        }
        case 0x84C1u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84C3u,0x850Au)) c++; rt->state.cpu.pc=0x850Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84C3u; return dd3_static_complete(rt,2u);
        }
        case 0x84C3u: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x84C5u; return dd3_static_complete(rt,6u);
        }
        case 0x84C5u: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84C7u; return dd3_static_complete(rt,4u);
        }
        case 0x84C7u: {
            uint8_t v=0x28u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x84C9u; return dd3_static_complete(rt,2u);
        }
        case 0x84C9u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x84CBu,0x84DFu)) c++; rt->state.cpu.pc=0x84DFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84CBu; return dd3_static_complete(rt,2u);
        }
        case 0x84CBu: {
            uint16_t ea=(uint16_t)((0x99u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84CDu; return dd3_static_complete(rt,4u);
        }
        case 0x84CDu: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84CFu; return dd3_static_complete(rt,2u);
        }
        case 0x84CFu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84D1u,0x850Cu)) c++; rt->state.cpu.pc=0x850Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84D1u; return dd3_static_complete(rt,2u);
        }
        case 0x84D1u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84D3u; return dd3_static_complete(rt,2u);
        }
        case 0x84D3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84D5u,0x84DBu)) c++; rt->state.cpu.pc=0x84DBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84D5u; return dd3_static_complete(rt,2u);
        }
        case 0x84D5u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84D7u; return dd3_static_complete(rt,4u);
        }
        case 0x84D7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x84D9u,0x850Cu)) c++; rt->state.cpu.pc=0x850Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84D9u; return dd3_static_complete(rt,2u);
        }
        case 0x84D9u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x84DBu,0x84DFu)) c++; rt->state.cpu.pc=0x84DFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84DBu; return dd3_static_complete(rt,2u);
        }
        case 0x84DBu: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84DDu; return dd3_static_complete(rt,4u);
        }
        case 0x84DDu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x84DFu,0x850Cu)) c++; rt->state.cpu.pc=0x850Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84DFu; return dd3_static_complete(rt,2u);
        }
        case 0x84DFu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84E1u; return dd3_static_complete(rt,2u);
        }
        case 0x84E1u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x84E3u; return dd3_static_complete(rt,4u);
        }
        case 0x84E3u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84E6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x84E6u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84E8u; return dd3_static_complete(rt,2u);
        }
        case 0x84E8u: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x84EBu; return dd3_static_complete(rt,5u);
        }
        case 0x84EBu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x84ECu; return dd3_static_complete(rt,2u);
        }
        case 0x84ECu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84EEu; return dd3_static_complete(rt,2u);
        }
        case 0x84EEu: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x84F1u; return dd3_static_complete(rt,5u);
        }
        case 0x84F1u: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84F4u; return dd3_static_complete(rt,4u);
        }
        case 0x84F4u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84F5u; return dd3_static_complete(rt,2u);
        }
        case 0x84F5u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84F7u; return dd3_static_complete(rt,2u);
        }
        case 0x84F7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84F9u,0x84FFu)) c++; rt->state.cpu.pc=0x84FFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84F9u; return dd3_static_complete(rt,2u);
        }
        case 0x84F9u: {
            uint8_t v=0x31u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84FBu; return dd3_static_complete(rt,2u);
        }
        case 0x84FBu: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x84FEu; return dd3_static_complete(rt,5u);
        }
        case 0x84FEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x84FFu: {
            uint8_t v=0x18u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8501u; return dd3_static_complete(rt,2u);
        }
        case 0x8501u: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8504u; return dd3_static_complete(rt,5u);
        }
        case 0x8504u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8506u; return dd3_static_complete(rt,2u);
        }
        case 0x8506u: {
            dd3_static_write8(rt,(uint16_t)(0x04AEu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8509u; return dd3_static_complete(rt,5u);
        }
        case 0x8509u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x850Au: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.y);
            rt->state.cpu.pc=0x850Cu; return dd3_static_complete(rt,4u);
        }
        case 0x850Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x850Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x850Eu: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8510u; return dd3_static_complete(rt,3u);
        }
        case 0x8510u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8512u; return dd3_static_complete(rt,3u);
        }
        case 0x8512u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8513u; return dd3_static_complete(rt,2u);
        }
        case 0x8513u: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8515u; return dd3_static_complete(rt,2u);
        }
        case 0x8515u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8517u; return dd3_static_complete(rt,3u);
        }
        case 0x8517u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8519u; return dd3_static_complete(rt,3u);
        }
        case 0x8519u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x851Bu; return dd3_static_complete(rt,2u);
        }
        case 0x851Bu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x851Du; return dd3_static_complete(rt,3u);
        }
        case 0x851Du: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x851Fu; return dd3_static_complete(rt,3u);
        }
        case 0x851Fu: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8521u; return dd3_static_complete(rt,4u);
        }
        case 0x8521u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8523u,0x8533u)) c++; rt->state.cpu.pc=0x8533u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8523u; return dd3_static_complete(rt,2u);
        }
        case 0x8523u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8525u,0x852Bu)) c++; rt->state.cpu.pc=0x852Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8525u; return dd3_static_complete(rt,2u);
        }
        case 0x8525u: {
            dd3_static_push8(rt,(uint8_t)(0x8527u>>8)); dd3_static_push8(rt,(uint8_t)0x8527u);
            rt->state.cpu.pc=0x85BEu; return dd3_static_complete(rt,6u);
        }
        case 0x8528u: {
            rt->state.cpu.pc=0x8556u; return dd3_static_complete(rt,3u);
        }
        case 0x852Bu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x852Du; return dd3_static_complete(rt,3u);
        }
        case 0x852Du: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x852Fu; return dd3_static_complete(rt,4u);
        }
        case 0x852Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8531u,0x8533u)) c++; rt->state.cpu.pc=0x8533u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8531u; return dd3_static_complete(rt,2u);
        }
        case 0x8531u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8533u,0x8525u)) c++; rt->state.cpu.pc=0x8525u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8533u; return dd3_static_complete(rt,2u);
        }
        case 0x8533u: {
            uint8_t v=0xEFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8535u; return dd3_static_complete(rt,2u);
        }
        case 0x8535u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8536u; return dd3_static_complete(rt,2u);
        }
        case 0x8536u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8538u; return dd3_static_complete(rt,3u);
        }
        case 0x8538u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x853Au; return dd3_static_complete(rt,3u);
        }
        case 0x853Au: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x853Cu; return dd3_static_complete(rt,3u);
        }
        case 0x853Cu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x853Eu; return dd3_static_complete(rt,2u);
        }
        case 0x853Eu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8540u; return dd3_static_complete(rt,3u);
        }
        case 0x8540u: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8542u; return dd3_static_complete(rt,4u);
        }
        case 0x8542u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8544u; return dd3_static_complete(rt,3u);
        }
        case 0x8544u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8546u,0x8556u)) c++; rt->state.cpu.pc=0x8556u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8546u; return dd3_static_complete(rt,2u);
        }
        case 0x8546u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8548u,0x854Eu)) c++; rt->state.cpu.pc=0x854Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8548u; return dd3_static_complete(rt,2u);
        }
        case 0x8548u: {
            dd3_static_push8(rt,(uint8_t)(0x854Au>>8)); dd3_static_push8(rt,(uint8_t)0x854Au);
            rt->state.cpu.pc=0x85CCu; return dd3_static_complete(rt,6u);
        }
        case 0x854Bu: {
            rt->state.cpu.pc=0x8556u; return dd3_static_complete(rt,3u);
        }
        case 0x854Eu: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8550u; return dd3_static_complete(rt,4u);
        }
        case 0x8550u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8552u; return dd3_static_complete(rt,3u);
        }
        case 0x8552u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8554u,0x8556u)) c++; rt->state.cpu.pc=0x8556u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8554u; return dd3_static_complete(rt,2u);
        }
        case 0x8554u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8556u,0x8548u)) c++; rt->state.cpu.pc=0x8548u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8556u; return dd3_static_complete(rt,2u);
        }
        case 0x8556u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8558u; return dd3_static_complete(rt,4u);
        }
        case 0x8558u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8559u; return dd3_static_complete(rt,2u);
        }
        case 0x8559u: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x855Bu; return dd3_static_complete(rt,4u);
        }
        case 0x855Bu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x855Du; return dd3_static_complete(rt,3u);
        }
        case 0x855Du: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x855Fu; return dd3_static_complete(rt,4u);
        }
        case 0x855Fu: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8561u; return dd3_static_complete(rt,4u);
        }
        case 0x8561u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8563u; return dd3_static_complete(rt,3u);
        }
        case 0x8563u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8565u; return dd3_static_complete(rt,4u);
        }
        case 0x8565u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8567u; return dd3_static_complete(rt,2u);
        }
        case 0x8567u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8569u,0x856Bu)) c++; rt->state.cpu.pc=0x856Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8569u; return dd3_static_complete(rt,2u);
        }
        case 0x8569u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x856Bu,0x8598u)) c++; rt->state.cpu.pc=0x8598u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x856Bu; return dd3_static_complete(rt,2u);
        }
        case 0x856Bu: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x856Du; return dd3_static_complete(rt,3u);
        }
        case 0x856Du: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x856Eu; return dd3_static_complete(rt,2u);
        }
        case 0x856Eu: {
            uint8_t v=0xBFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8570u; return dd3_static_complete(rt,2u);
        }
        case 0x8570u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8572u; return dd3_static_complete(rt,3u);
        }
        case 0x8572u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8574u; return dd3_static_complete(rt,3u);
        }
        case 0x8574u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8576u; return dd3_static_complete(rt,2u);
        }
        case 0x8576u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8578u; return dd3_static_complete(rt,3u);
        }
        case 0x8578u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x857Au; return dd3_static_complete(rt,3u);
        }
        case 0x857Au: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x857Bu; return dd3_static_complete(rt,2u);
        }
        case 0x857Bu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x857Du; return dd3_static_complete(rt,3u);
        }
        case 0x857Du: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0x857Fu; return dd3_static_complete(rt,3u);
        }
        case 0x857Fu: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8581u; return dd3_static_complete(rt,3u);
        }
        case 0x8581u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8583u; return dd3_static_complete(rt,3u);
        }
        case 0x8583u: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8585u; return dd3_static_complete(rt,3u);
        }
        case 0x8585u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8587u,0x858Du)) c++; rt->state.cpu.pc=0x858Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8587u; return dd3_static_complete(rt,2u);
        }
        case 0x8587u: {
            dd3_static_push8(rt,(uint8_t)(0x8589u>>8)); dd3_static_push8(rt,(uint8_t)0x8589u);
            rt->state.cpu.pc=0x8966u; return dd3_static_complete(rt,6u);
        }
        case 0x858Au: {
            dd3_static_push8(rt,(uint8_t)(0x858Cu>>8)); dd3_static_push8(rt,(uint8_t)0x858Cu);
            rt->state.cpu.pc=0x85DAu; return dd3_static_complete(rt,6u);
        }
        case 0x858Du: {
            uint8_t v=0x34u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x858Fu; return dd3_static_complete(rt,2u);
        }
        case 0x858Fu: {
            uint16_t ea=(uint16_t)(0x038Bu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8592u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x038Bu,ea)?1u:0u));
        }
        case 0x8592u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8594u; return dd3_static_complete(rt,2u);
        }
        case 0x8594u: {
            uint8_t v=0x07u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8596u; return dd3_static_complete(rt,2u);
        }
        case 0x8596u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8598u,0x859Au)) c++; rt->state.cpu.pc=0x859Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8598u; return dd3_static_complete(rt,2u);
        }
        case 0x8598u: {
            uint8_t v=0x1Fu;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x859Au; return dd3_static_complete(rt,2u);
        }
        case 0x859Au: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.y);
            rt->state.cpu.pc=0x859Cu; return dd3_static_complete(rt,3u);
        }
        case 0x859Cu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x859Du; return dd3_static_complete(rt,2u);
        }
        case 0x859Du: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x859Eu; return dd3_static_complete(rt,2u);
        }
        case 0x859Eu: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x85A0u; return dd3_static_complete(rt,3u);
        }
        case 0x85A0u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x85A2u; return dd3_static_complete(rt,3u);
        }
        case 0x85A2u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85A4u; return dd3_static_complete(rt,3u);
        }
        case 0x85A4u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x85A6u; return dd3_static_complete(rt,2u);
        }
        case 0x85A6u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x85A8u; return dd3_static_complete(rt,3u);
        }
        case 0x85A8u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85AAu; return dd3_static_complete(rt,3u);
        }
        case 0x85AAu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x85ABu; return dd3_static_complete(rt,2u);
        }
        case 0x85ABu: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x85ADu; return dd3_static_complete(rt,3u);
        }
        case 0x85ADu: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0x85AFu; return dd3_static_complete(rt,3u);
        }
        case 0x85AFu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85B1u; return dd3_static_complete(rt,3u);
        }
        case 0x85B1u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x85B3u; return dd3_static_complete(rt,3u);
        }
        case 0x85B3u: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x85B5u; return dd3_static_complete(rt,3u);
        }
        case 0x85B5u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x85B7u,0x85BDu)) c++; rt->state.cpu.pc=0x85BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85B7u; return dd3_static_complete(rt,2u);
        }
        case 0x85B7u: {
            dd3_static_push8(rt,(uint8_t)(0x85B9u>>8)); dd3_static_push8(rt,(uint8_t)0x85B9u);
            rt->state.cpu.pc=0x8966u; return dd3_static_complete(rt,6u);
        }
        case 0x85BAu: {
            dd3_static_push8(rt,(uint8_t)(0x85BCu>>8)); dd3_static_push8(rt,(uint8_t)0x85BCu);
            rt->state.cpu.pc=0x85FBu; return dd3_static_complete(rt,6u);
        }
        case 0x85BDu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x85BEu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85C0u; return dd3_static_complete(rt,3u);
        }
        case 0x85C0u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x85C1u; return dd3_static_complete(rt,2u);
        }
        case 0x85C1u: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x85C3u; return dd3_static_complete(rt,2u);
        }
        case 0x85C3u: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x85C5u; return dd3_static_complete(rt,4u);
        }
        case 0x85C5u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85C7u; return dd3_static_complete(rt,3u);
        }
        case 0x85C7u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x85C9u; return dd3_static_complete(rt,2u);
        }
        case 0x85C9u: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x85CBu; return dd3_static_complete(rt,4u);
        }
        case 0x85CBu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x85CCu: {
            uint8_t v=0xEFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85CEu; return dd3_static_complete(rt,2u);
        }
        case 0x85CEu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x85CFu; return dd3_static_complete(rt,2u);
        }
        case 0x85CFu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x85D1u; return dd3_static_complete(rt,3u);
        }
        case 0x85D1u: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x85D3u; return dd3_static_complete(rt,4u);
        }
        case 0x85D3u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85D5u; return dd3_static_complete(rt,3u);
        }
        case 0x85D5u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x85D7u; return dd3_static_complete(rt,2u);
        }
        case 0x85D7u: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x85D9u; return dd3_static_complete(rt,4u);
        }
        case 0x85D9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x85DAu: {
            uint16_t ea=(uint16_t)(0x0394u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85DDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0394u,ea)?1u:0u));
        }
        case 0x85DDu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x85DFu,0x85EDu)) c++; rt->state.cpu.pc=0x85EDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85DFu; return dd3_static_complete(rt,2u);
        }
        case 0x85DFu: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85E1u; return dd3_static_complete(rt,4u);
        }
        case 0x85E1u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x85E2u; return dd3_static_complete(rt,2u);
        }
        case 0x85E2u: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x85E4u; return dd3_static_complete(rt,3u);
        }
        case 0x85E4u: {
            dd3_static_write8(rt,(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x85E6u; return dd3_static_complete(rt,4u);
        }
        case 0x85E6u: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85E8u; return dd3_static_complete(rt,4u);
        }
        case 0x85E8u: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x85EAu; return dd3_static_complete(rt,3u);
        }
        case 0x85EAu: {
            dd3_static_write8(rt,(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x85ECu; return dd3_static_complete(rt,4u);
        }
        case 0x85ECu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x85EDu: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85EFu; return dd3_static_complete(rt,4u);
        }
        case 0x85EFu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x85F0u; return dd3_static_complete(rt,2u);
        }
        case 0x85F0u: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x85F2u; return dd3_static_complete(rt,3u);
        }
        case 0x85F2u: {
            dd3_static_write8(rt,(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x85F4u; return dd3_static_complete(rt,4u);
        }
        case 0x85F4u: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85F6u; return dd3_static_complete(rt,4u);
        }
        case 0x85F6u: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x85F8u; return dd3_static_complete(rt,3u);
        }
        case 0x85F8u: {
            dd3_static_write8(rt,(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x85FAu; return dd3_static_complete(rt,4u);
        }
        case 0x85FAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x85FBu: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85FDu; return dd3_static_complete(rt,3u);
        }
        case 0x85FDu: {
            uint8_t v=0x1Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x85FFu; return dd3_static_complete(rt,2u);
        }
        case 0x85FFu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8601u,0x8630u)) c++; rt->state.cpu.pc=0x8630u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8601u; return dd3_static_complete(rt,2u);
        }
        case 0x8601u: {
            uint16_t ea=(uint16_t)(0x038Bu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8604u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x038Bu,ea)?1u:0u));
        }
        case 0x8604u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8606u; return dd3_static_complete(rt,2u);
        }
        case 0x8606u: {
            uint8_t v=0x07u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8608u; return dd3_static_complete(rt,2u);
        }
        case 0x8608u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x860Au,0x8630u)) c++; rt->state.cpu.pc=0x8630u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x860Au; return dd3_static_complete(rt,2u);
        }
        case 0x860Au: {
            uint16_t ea=(uint16_t)(0x0394u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x860Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0394u,ea)?1u:0u));
        }
        case 0x860Du: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x860Fu,0x861Du)) c++; rt->state.cpu.pc=0x861Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x860Fu; return dd3_static_complete(rt,2u);
        }
        case 0x860Fu: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8611u; return dd3_static_complete(rt,4u);
        }
        case 0x8611u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8612u; return dd3_static_complete(rt,2u);
        }
        case 0x8612u: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8614u; return dd3_static_complete(rt,3u);
        }
        case 0x8614u: {
            dd3_static_write8(rt,(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8616u; return dd3_static_complete(rt,4u);
        }
        case 0x8616u: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8618u; return dd3_static_complete(rt,4u);
        }
        case 0x8618u: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x861Au; return dd3_static_complete(rt,3u);
        }
        case 0x861Au: {
            dd3_static_write8(rt,(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x861Cu; return dd3_static_complete(rt,4u);
        }
        case 0x861Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x861Du: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x861Fu; return dd3_static_complete(rt,4u);
        }
        case 0x861Fu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8620u; return dd3_static_complete(rt,2u);
        }
        case 0x8620u: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8622u; return dd3_static_complete(rt,3u);
        }
        case 0x8622u: {
            dd3_static_write8(rt,(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8624u; return dd3_static_complete(rt,4u);
        }
        case 0x8624u: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8626u; return dd3_static_complete(rt,4u);
        }
        case 0x8626u: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8628u; return dd3_static_complete(rt,3u);
        }
        case 0x8628u: {
            dd3_static_write8(rt,(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x862Au; return dd3_static_complete(rt,4u);
        }
        case 0x862Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x862Cu; return dd3_static_complete(rt,2u);
        }
        case 0x862Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x862Fu; return dd3_static_complete(rt,5u);
        }
        case 0x862Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8630u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8632u; return dd3_static_complete(rt,2u);
        }
        case 0x8632u: {
            dd3_static_write8(rt,(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8634u; return dd3_static_complete(rt,4u);
        }
        case 0x8634u: {
            dd3_static_write8(rt,(uint16_t)(0x045Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8637u; return dd3_static_complete(rt,5u);
        }
        case 0x8637u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x863Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x863Au: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x863Cu,0x8644u)) c++; rt->state.cpu.pc=0x8644u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x863Cu; return dd3_static_complete(rt,2u);
        }
        case 0x863Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x863Eu; return dd3_static_complete(rt,2u);
        }
        case 0x863Eu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x863Fu; return dd3_static_complete(rt,2u);
        }
        case 0x863Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8641u; return dd3_static_complete(rt,2u);
        }
        case 0x8641u: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8644u; return dd3_static_complete(rt,5u);
        }
        case 0x8644u: {
            uint16_t ea=(uint16_t)((0xFEu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8646u; return dd3_static_complete(rt,4u);
        }
        case 0x8646u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8648u,0x8662u)) c++; rt->state.cpu.pc=0x8662u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8648u; return dd3_static_complete(rt,2u);
        }
        case 0x8648u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x864Au; return dd3_static_complete(rt,4u);
        }
        case 0x864Au: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x864Bu; return dd3_static_complete(rt,2u);
        }
        case 0x864Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x864Du; return dd3_static_complete(rt,2u);
        }
        case 0x864Du: {
            dd3_static_write8(rt,(uint16_t)(0x04D3u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8650u; return dd3_static_complete(rt,5u);
        }
        case 0x8650u: {
            uint8_t v=0x03u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8652u; return dd3_static_complete(rt,2u);
        }
        case 0x8652u: {
            uint16_t ea=(uint16_t)(0x04D3u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8655u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04D3u,ea)?1u:0u));
        }
        case 0x8655u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8657u,0x865Bu)) c++; rt->state.cpu.pc=0x865Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8657u; return dd3_static_complete(rt,2u);
        }
        case 0x8657u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8659u; return dd3_static_complete(rt,2u);
        }
        case 0x8659u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x865Bu,0x8662u)) c++; rt->state.cpu.pc=0x8662u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x865Bu; return dd3_static_complete(rt,2u);
        }
        case 0x865Bu: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x865Cu; return dd3_static_complete(rt,2u);
        }
        case 0x865Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x865Eu,0x8652u)) c++; rt->state.cpu.pc=0x8652u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x865Eu; return dd3_static_complete(rt,2u);
        }
        case 0x865Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8660u; return dd3_static_complete(rt,2u);
        }
        case 0x8660u: {
            dd3_static_write8(rt,(uint16_t)((0xFEu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8662u; return dd3_static_complete(rt,4u);
        }
        case 0x8662u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8663u: {
            uint16_t ea=(uint16_t)(0x04C4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8666u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04C4u,ea)?1u:0u));
        }
        case 0x8666u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8668u; return dd3_static_complete(rt,2u);
        }
        case 0x8668u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x866Au,0x866Bu)) c++; rt->state.cpu.pc=0x866Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x866Au; return dd3_static_complete(rt,2u);
        }
        case 0x866Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x866Bu: {
            uint16_t ea=(uint16_t)((0x97u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x866Du; return dd3_static_complete(rt,4u);
        }
        case 0x866Du: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x866Fu; return dd3_static_complete(rt,2u);
        }
        case 0x866Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8671u,0x8674u)) c++; rt->state.cpu.pc=0x8674u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8671u; return dd3_static_complete(rt,2u);
        }
        case 0x8671u: {
            rt->state.cpu.pc=0x86FAu; return dd3_static_complete(rt,3u);
        }
        case 0x8674u: {
            uint8_t v=0xC0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8676u; return dd3_static_complete(rt,2u);
        }
        case 0x8676u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8678u,0x8680u)) c++; rt->state.cpu.pc=0x8680u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8678u; return dd3_static_complete(rt,2u);
        }
        case 0x8678u: {
            uint16_t ea=(uint16_t)((0x99u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x867Au; return dd3_static_complete(rt,4u);
        }
        case 0x867Au: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x867Cu; return dd3_static_complete(rt,2u);
        }
        case 0x867Cu: {
            uint8_t v=0xC0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x867Eu; return dd3_static_complete(rt,2u);
        }
        case 0x867Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8680u,0x868Au)) c++; rt->state.cpu.pc=0x868Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8680u; return dd3_static_complete(rt,2u);
        }
        case 0x8680u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8682u; return dd3_static_complete(rt,4u);
        }
        case 0x8682u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8683u; return dd3_static_complete(rt,2u);
        }
        case 0x8683u: {
            uint16_t ea=(uint16_t)(0x8744u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8686u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8744u,ea)?1u:0u));
        }
        case 0x8686u: {
            dd3_static_push8(rt,(uint8_t)(0x8688u>>8)); dd3_static_push8(rt,(uint8_t)0x8688u);
            rt->state.cpu.pc=0x82D0u; return dd3_static_complete(rt,6u);
        }
        case 0x8689u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x868Au: {
            uint16_t ea=(uint16_t)((0x97u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x868Cu; return dd3_static_complete(rt,4u);
        }
        case 0x868Cu: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x868Eu; return dd3_static_complete(rt,2u);
        }
        case 0x868Eu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x868Fu; return dd3_static_complete(rt,3u);
        }
        case 0x868Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8691u>>8)); dd3_static_push8(rt,(uint8_t)0x8691u);
            rt->state.cpu.pc=0x87B3u; return dd3_static_complete(rt,6u);
        }
        case 0x8692u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8693u; return dd3_static_complete(rt,4u);
        }
        case 0x8693u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8695u; return dd3_static_complete(rt,3u);
        }
        case 0x8695u: {
            uint8_t v=0x11u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8697u; return dd3_static_complete(rt,2u);
        }
        case 0x8697u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8699u,0x86F8u)) c++; rt->state.cpu.pc=0x86F8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8699u; return dd3_static_complete(rt,2u);
        }
        case 0x8699u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x869Bu; return dd3_static_complete(rt,2u);
        }
        case 0x869Bu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x869Du; return dd3_static_complete(rt,3u);
        }
        case 0x869Du: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x869Fu,0x86A0u)) c++; rt->state.cpu.pc=0x86A0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x869Fu; return dd3_static_complete(rt,2u);
        }
        case 0x869Fu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86A0u; return dd3_static_complete(rt,2u);
        }
        case 0x86A0u: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.y);
            rt->state.cpu.pc=0x86A2u; return dd3_static_complete(rt,3u);
        }
        case 0x86A2u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86A4u; return dd3_static_complete(rt,2u);
        }
        case 0x86A4u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x86A6u; return dd3_static_complete(rt,3u);
        }
        case 0x86A6u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86A8u; return dd3_static_complete(rt,3u);
        }
        case 0x86A8u: {
            dd3_static_push8(rt,(uint8_t)(0x86AAu>>8)); dd3_static_push8(rt,(uint8_t)0x86AAu);
            rt->state.cpu.pc=0x8843u; return dd3_static_complete(rt,6u);
        }
        case 0x86ABu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x86ADu,0x86B9u)) c++; rt->state.cpu.pc=0x86B9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86ADu; return dd3_static_complete(rt,2u);
        }
        case 0x86ADu: {
            dd3_static_push8(rt,(uint8_t)(0x86AFu>>8)); dd3_static_push8(rt,(uint8_t)0x86AFu);
            rt->state.cpu.pc=0x887Au; return dd3_static_complete(rt,6u);
        }
        case 0x86B0u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x86B2u,0x86B9u)) c++; rt->state.cpu.pc=0x86B9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86B2u; return dd3_static_complete(rt,2u);
        }
        case 0x86B2u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86B4u; return dd3_static_complete(rt,2u);
        }
        case 0x86B4u: {
            dd3_static_push8(rt,(uint8_t)(0x86B6u>>8)); dd3_static_push8(rt,(uint8_t)0x86B6u);
            rt->state.cpu.pc=0x8898u; return dd3_static_complete(rt,6u);
        }
        case 0x86B7u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x86B9u,0x86C3u)) c++; rt->state.cpu.pc=0x86C3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86B9u; return dd3_static_complete(rt,2u);
        }
        case 0x86B9u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x86BBu; return dd3_static_complete(rt,5u);
        }
        case 0x86BBu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86BDu; return dd3_static_complete(rt,3u);
        }
        case 0x86BDu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x86BFu; return dd3_static_complete(rt,2u);
        }
        case 0x86BFu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x86C1u,0x86A6u)) c++; rt->state.cpu.pc=0x86A6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86C1u; return dd3_static_complete(rt,2u);
        }
        case 0x86C1u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x86C3u,0x86C9u)) c++; rt->state.cpu.pc=0x86C9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86C3u; return dd3_static_complete(rt,2u);
        }
        case 0x86C3u: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86C5u; return dd3_static_complete(rt,3u);
        }
        case 0x86C5u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86C6u; return dd3_static_complete(rt,2u);
        }
        case 0x86C6u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86C7u; return dd3_static_complete(rt,2u);
        }
        case 0x86C7u: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.y);
            rt->state.cpu.pc=0x86C9u; return dd3_static_complete(rt,3u);
        }
        case 0x86C9u: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86CCu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0x86CCu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x86CEu,0x86E6u)) c++; rt->state.cpu.pc=0x86E6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86CEu; return dd3_static_complete(rt,2u);
        }
        case 0x86CEu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86D0u; return dd3_static_complete(rt,2u);
        }
        case 0x86D0u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x86D2u; return dd3_static_complete(rt,2u);
        }
        case 0x86D2u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x86D4u,0x86E6u)) c++; rt->state.cpu.pc=0x86E6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86D4u; return dd3_static_complete(rt,2u);
        }
        case 0x86D4u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x86D5u; return dd3_static_complete(rt,2u);
        }
        case 0x86D5u: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x86D7u; return dd3_static_complete(rt,2u);
        }
        case 0x86D7u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86D8u; return dd3_static_complete(rt,2u);
        }
        case 0x86D8u: {
            uint16_t ea=(uint16_t)(0x8703u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86DBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8703u,ea)?1u:0u));
        }
        case 0x86DBu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x86DDu; return dd3_static_complete(rt,3u);
        }
        case 0x86DDu: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86DFu; return dd3_static_complete(rt,3u);
        }
        case 0x86DFu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86E1u; return dd3_static_complete(rt,2u);
        }
        case 0x86E1u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x86E2u; return dd3_static_complete(rt,2u);
        }
        case 0x86E2u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x86E4u; return dd3_static_complete(rt,3u);
        }
        case 0x86E4u: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0x86E6u; return dd3_static_complete(rt,3u);
        }
        case 0x86E6u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86E8u; return dd3_static_complete(rt,4u);
        }
        case 0x86E8u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86E9u; return dd3_static_complete(rt,2u);
        }
        case 0x86E9u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86EAu; return dd3_static_complete(rt,2u);
        }
        case 0x86EAu: {
            uint16_t ea=(uint16_t)(0x870Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86EDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x870Cu,ea)?1u:0u));
        }
        case 0x86EDu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x86EFu; return dd3_static_complete(rt,3u);
        }
        case 0x86EFu: {
            uint16_t ea=(uint16_t)(0x870Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86F2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x870Du,ea)?1u:0u));
        }
        case 0x86F2u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x86F4u; return dd3_static_complete(rt,3u);
        }
        case 0x86F4u: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86F6u; return dd3_static_complete(rt,3u);
        }
        case 0x86F6u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86F8u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0x86F8u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x86FAu; return dd3_static_complete(rt,4u);
        }
        case 0x86FAu: {
            uint16_t ea=(uint16_t)(0x0463u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86FDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0463u,ea)?1u:0u));
        }
        case 0x86FDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x86FFu,0x8702u)) c++; rt->state.cpu.pc=0x8702u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86FFu; return dd3_static_complete(rt,2u);
        }
        case 0x86FFu: {
            dd3_static_push8(rt,(uint8_t)(0x8701u>>8)); dd3_static_push8(rt,(uint8_t)0x8701u);
            rt->state.cpu.pc=0x8748u; return dd3_static_complete(rt,6u);
        }
        case 0x8702u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8748u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x874Au; return dd3_static_complete(rt,4u);
        }
        case 0x874Au: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x874Cu; return dd3_static_complete(rt,2u);
        }
        case 0x874Cu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x874Eu,0x87B1u)) c++; rt->state.cpu.pc=0x87B1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x874Eu; return dd3_static_complete(rt,2u);
        }
        case 0x874Eu: {
            uint16_t ea=(uint16_t)(0x0463u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8751u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0463u,ea)?1u:0u));
        }
        case 0x8751u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8753u; return dd3_static_complete(rt,2u);
        }
        case 0x8753u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8755u,0x87B1u)) c++; rt->state.cpu.pc=0x87B1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8755u; return dd3_static_complete(rt,2u);
        }
        case 0x8755u: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8757u; return dd3_static_complete(rt,2u);
        }
        case 0x8757u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8759u,0x87B1u)) c++; rt->state.cpu.pc=0x87B1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8759u; return dd3_static_complete(rt,2u);
        }
        case 0x8759u: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x875Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0x875Cu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x875Eu,0x87B1u)) c++; rt->state.cpu.pc=0x87B1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x875Eu; return dd3_static_complete(rt,2u);
        }
        case 0x875Eu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8760u; return dd3_static_complete(rt,2u);
        }
        case 0x8760u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8762u; return dd3_static_complete(rt,3u);
        }
        case 0x8762u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8764u; return dd3_static_complete(rt,3u);
        }
        case 0x8764u: {
            dd3_static_push8(rt,(uint8_t)(0x8766u>>8)); dd3_static_push8(rt,(uint8_t)0x8766u);
            rt->state.cpu.pc=0x8843u; return dd3_static_complete(rt,6u);
        }
        case 0x8767u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8769u,0x87A9u)) c++; rt->state.cpu.pc=0x87A9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8769u; return dd3_static_complete(rt,2u);
        }
        case 0x8769u: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x876Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0x876Cu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x876Eu,0x87A9u)) c++; rt->state.cpu.pc=0x87A9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x876Eu; return dd3_static_complete(rt,2u);
        }
        case 0x876Eu: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8771u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0x8771u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8773u; return dd3_static_complete(rt,2u);
        }
        case 0x8773u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8775u; return dd3_static_complete(rt,2u);
        }
        case 0x8775u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8777u,0x87A9u)) c++; rt->state.cpu.pc=0x87A9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8777u; return dd3_static_complete(rt,2u);
        }
        case 0x8777u: {
            uint8_t v=0x24u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8779u; return dd3_static_complete(rt,2u);
        }
        case 0x8779u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x877Bu,0x87A9u)) c++; rt->state.cpu.pc=0x87A9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x877Bu; return dd3_static_complete(rt,2u);
        }
        case 0x877Bu: {
            dd3_static_push8(rt,(uint8_t)(0x877Du>>8)); dd3_static_push8(rt,(uint8_t)0x877Du);
            rt->state.cpu.pc=0x8854u; return dd3_static_complete(rt,6u);
        }
        case 0x877Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8780u,0x87A9u)) c++; rt->state.cpu.pc=0x87A9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8780u; return dd3_static_complete(rt,2u);
        }
        case 0x8780u: {
            dd3_static_push8(rt,(uint8_t)(0x8782u>>8)); dd3_static_push8(rt,(uint8_t)0x8782u);
            rt->state.cpu.pc=0x887Au; return dd3_static_complete(rt,6u);
        }
        case 0x8783u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8785u,0x87A9u)) c++; rt->state.cpu.pc=0x87A9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8785u; return dd3_static_complete(rt,2u);
        }
        case 0x8785u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8787u; return dd3_static_complete(rt,2u);
        }
        case 0x8787u: {
            dd3_static_push8(rt,(uint8_t)(0x8789u>>8)); dd3_static_push8(rt,(uint8_t)0x8789u);
            rt->state.cpu.pc=0x8898u; return dd3_static_complete(rt,6u);
        }
        case 0x878Au: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x878Cu,0x87A9u)) c++; rt->state.cpu.pc=0x87A9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x878Cu; return dd3_static_complete(rt,2u);
        }
        case 0x878Cu: {
            uint8_t v=0x4Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x878Eu; return dd3_static_complete(rt,2u);
        }
        case 0x878Eu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8790u; return dd3_static_complete(rt,4u);
        }
        case 0x8790u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8792u; return dd3_static_complete(rt,3u);
        }
        case 0x8792u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8793u; return dd3_static_complete(rt,2u);
        }
        case 0x8793u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8795u; return dd3_static_complete(rt,2u);
        }
        case 0x8795u: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8798u; return dd3_static_complete(rt,5u);
        }
        case 0x8798u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x879Au; return dd3_static_complete(rt,2u);
        }
        case 0x879Au: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x879Cu; return dd3_static_complete(rt,2u);
        }
        case 0x879Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x879Fu; return dd3_static_complete(rt,5u);
        }
        case 0x879Fu: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87A2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0x87A2u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87A4u; return dd3_static_complete(rt,2u);
        }
        case 0x87A4u: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x87A7u; return dd3_static_complete(rt,5u);
        }
        case 0x87A7u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x87A8u; return dd3_static_complete(rt,2u);
        }
        case 0x87A8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x87A9u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x87ABu; return dd3_static_complete(rt,5u);
        }
        case 0x87ABu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87ADu; return dd3_static_complete(rt,3u);
        }
        case 0x87ADu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x87AFu; return dd3_static_complete(rt,2u);
        }
        case 0x87AFu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x87B1u,0x8762u)) c++; rt->state.cpu.pc=0x8762u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87B1u; return dd3_static_complete(rt,2u);
        }
        case 0x87B1u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x87B2u; return dd3_static_complete(rt,2u);
        }
        case 0x87B2u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x87B3u: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87B6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0x87B6u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x87B8u,0x8821u)) c++; rt->state.cpu.pc=0x8821u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87B8u; return dd3_static_complete(rt,2u);
        }
        case 0x87B8u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87BAu; return dd3_static_complete(rt,4u);
        }
        case 0x87BAu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x87BCu; return dd3_static_complete(rt,2u);
        }
        case 0x87BCu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87BEu,0x8821u)) c++; rt->state.cpu.pc=0x8821u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87BEu; return dd3_static_complete(rt,2u);
        }
        case 0x87BEu: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87C0u; return dd3_static_complete(rt,2u);
        }
        case 0x87C0u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x87C2u; return dd3_static_complete(rt,3u);
        }
        case 0x87C2u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87C4u; return dd3_static_complete(rt,3u);
        }
        case 0x87C4u: {
            dd3_static_push8(rt,(uint8_t)(0x87C6u>>8)); dd3_static_push8(rt,(uint8_t)0x87C6u);
            rt->state.cpu.pc=0x8843u; return dd3_static_complete(rt,6u);
        }
        case 0x87C7u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x87C9u,0x8819u)) c++; rt->state.cpu.pc=0x8819u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87C9u; return dd3_static_complete(rt,2u);
        }
        case 0x87C9u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87CBu; return dd3_static_complete(rt,3u);
        }
        case 0x87CBu: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87CEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0x87CEu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87D0u; return dd3_static_complete(rt,2u);
        }
        case 0x87D0u: {
            uint8_t v=0x65u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x87D2u; return dd3_static_complete(rt,2u);
        }
        case 0x87D2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87D4u,0x8819u)) c++; rt->state.cpu.pc=0x8819u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87D4u; return dd3_static_complete(rt,2u);
        }
        case 0x87D4u: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87D7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0x87D7u: {
            uint8_t v=0x11u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x87D9u; return dd3_static_complete(rt,2u);
        }
        case 0x87D9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87DBu,0x87E9u)) c++; rt->state.cpu.pc=0x87E9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87DBu; return dd3_static_complete(rt,2u);
        }
        case 0x87DBu: {
            uint8_t v=0x12u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x87DDu; return dd3_static_complete(rt,2u);
        }
        case 0x87DDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87DFu,0x87EFu)) c++; rt->state.cpu.pc=0x87EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87DFu; return dd3_static_complete(rt,2u);
        }
        case 0x87DFu: {
            uint8_t v=0x13u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x87E1u; return dd3_static_complete(rt,2u);
        }
        case 0x87E1u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87E3u,0x87EFu)) c++; rt->state.cpu.pc=0x87EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87E3u; return dd3_static_complete(rt,2u);
        }
        case 0x87E3u: {
            uint8_t v=0x18u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x87E5u; return dd3_static_complete(rt,2u);
        }
        case 0x87E5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87E7u,0x87EFu)) c++; rt->state.cpu.pc=0x87EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87E7u; return dd3_static_complete(rt,2u);
        }
        case 0x87E7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87E9u,0x8819u)) c++; rt->state.cpu.pc=0x8819u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87E9u; return dd3_static_complete(rt,2u);
        }
        case 0x87E9u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87EBu; return dd3_static_complete(rt,4u);
        }
        case 0x87EBu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x87EDu; return dd3_static_complete(rt,2u);
        }
        case 0x87EDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87EFu,0x8821u)) c++; rt->state.cpu.pc=0x8821u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87EFu; return dd3_static_complete(rt,2u);
        }
        case 0x87EFu: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87F2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0x87F2u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87F4u; return dd3_static_complete(rt,2u);
        }
        case 0x87F4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87F6u,0x8819u)) c++; rt->state.cpu.pc=0x8819u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87F6u; return dd3_static_complete(rt,2u);
        }
        case 0x87F6u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87F8u; return dd3_static_complete(rt,2u);
        }
        case 0x87F8u: {
            dd3_static_push8(rt,(uint8_t)(0x87FAu>>8)); dd3_static_push8(rt,(uint8_t)0x87FAu);
            rt->state.cpu.pc=0x8898u; return dd3_static_complete(rt,6u);
        }
        case 0x87FBu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x87FDu,0x8804u)) c++; rt->state.cpu.pc=0x8804u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87FDu; return dd3_static_complete(rt,2u);
        }
        case 0x87FDu: {
            uint8_t v=0x05u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87FFu; return dd3_static_complete(rt,2u);
        }
        case 0x87FFu: {
            dd3_static_push8(rt,(uint8_t)(0x8801u>>8)); dd3_static_push8(rt,(uint8_t)0x8801u);
            rt->state.cpu.pc=0x8898u; return dd3_static_complete(rt,6u);
        }
        case 0x8802u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8804u,0x8819u)) c++; rt->state.cpu.pc=0x8819u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8804u; return dd3_static_complete(rt,2u);
        }
        case 0x8804u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8806u; return dd3_static_complete(rt,3u);
        }
        case 0x8806u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8807u; return dd3_static_complete(rt,2u);
        }
        case 0x8807u: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x880Au; return dd3_static_complete(rt,5u);
        }
        case 0x880Au: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x880Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0x880Du: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8810u; return dd3_static_complete(rt,5u);
        }
        case 0x8810u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8811u; return dd3_static_complete(rt,2u);
        }
        case 0x8811u: {
            uint16_t ea=(uint16_t)(0x8823u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8814u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8823u,ea)?1u:0u));
        }
        case 0x8814u: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8817u; return dd3_static_complete(rt,5u);
        }
        case 0x8817u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8818u; return dd3_static_complete(rt,2u);
        }
        case 0x8818u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8819u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x881Bu; return dd3_static_complete(rt,5u);
        }
        case 0x881Bu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x881Du; return dd3_static_complete(rt,3u);
        }
        case 0x881Du: {
            uint8_t v=0x07u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x881Fu; return dd3_static_complete(rt,2u);
        }
        case 0x881Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8821u,0x87C2u)) c++; rt->state.cpu.pc=0x87C2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8821u; return dd3_static_complete(rt,2u);
        }
        case 0x8821u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8822u; return dd3_static_complete(rt,2u);
        }
        case 0x8822u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8843u: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x8845u; return dd3_static_complete(rt,3u);
        }
        case 0x8845u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8847u,0x8852u)) c++; rt->state.cpu.pc=0x8852u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8847u; return dd3_static_complete(rt,2u);
        }
        case 0x8847u: {
            uint16_t ea=(uint16_t)(0x003Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x884Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Cu,ea)?1u:0u));
        }
        case 0x884Au: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x884Cu; return dd3_static_complete(rt,2u);
        }
        case 0x884Cu: {
            uint8_t v=0x80u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x884Eu; return dd3_static_complete(rt,2u);
        }
        case 0x884Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8850u,0x8852u)) c++; rt->state.cpu.pc=0x8852u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8850u; return dd3_static_complete(rt,2u);
        }
        case 0x8850u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8851u; return dd3_static_complete(rt,2u);
        }
        case 0x8851u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8852u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8853u; return dd3_static_complete(rt,2u);
        }
        case 0x8853u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8854u: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8857u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0x8857u: {
            uint8_t v=0x1Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8859u; return dd3_static_complete(rt,2u);
        }
        case 0x8859u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x885Bu; return dd3_static_complete(rt,2u);
        }
        case 0x885Bu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x885Du,0x8861u)) c++; rt->state.cpu.pc=0x8861u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x885Du; return dd3_static_complete(rt,2u);
        }
        case 0x885Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x885Fu; return dd3_static_complete(rt,2u);
        }
        case 0x885Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8861u,0x8865u)) c++; rt->state.cpu.pc=0x8865u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8861u; return dd3_static_complete(rt,2u);
        }
        case 0x8861u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8862u; return dd3_static_complete(rt,2u);
        }
        case 0x8862u: {
            uint16_t ea=(uint16_t)(0x886Au+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8865u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x886Au,ea)?1u:0u));
        }
        case 0x8865u: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8867u; return dd3_static_complete(rt,3u);
        }
        case 0x8867u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8869u; return dd3_static_complete(rt,2u);
        }
        case 0x8869u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x887Au: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x887Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0x887Du: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x887Fu; return dd3_static_complete(rt,2u);
        }
        case 0x887Fu: {
            uint8_t v=0x16u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8881u; return dd3_static_complete(rt,2u);
        }
        case 0x8881u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8883u,0x8889u)) c++; rt->state.cpu.pc=0x8889u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8883u; return dd3_static_complete(rt,2u);
        }
        case 0x8883u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8885u; return dd3_static_complete(rt,2u);
        }
        case 0x8885u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8887u,0x8889u)) c++; rt->state.cpu.pc=0x8889u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8887u; return dd3_static_complete(rt,2u);
        }
        case 0x8887u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8888u; return dd3_static_complete(rt,2u);
        }
        case 0x8888u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8889u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x888Au; return dd3_static_complete(rt,2u);
        }
        case 0x888Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8898u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8899u; return dd3_static_complete(rt,2u);
        }
        case 0x8899u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x889Au; return dd3_static_complete(rt,2u);
        }
        case 0x889Au: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x889Bu; return dd3_static_complete(rt,2u);
        }
        case 0x889Bu: {
            uint16_t ea=(uint16_t)(0x88B3u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x889Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x88B3u,ea)?1u:0u));
        }
        case 0x889Eu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x88A0u; return dd3_static_complete(rt,3u);
        }
        case 0x88A0u: {
            uint16_t ea=(uint16_t)(0x88B4u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88A3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x88B4u,ea)?1u:0u));
        }
        case 0x88A3u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x88A5u; return dd3_static_complete(rt,3u);
        }
        case 0x88A5u: {
            uint16_t ea=(uint16_t)(0x88B5u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88A8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x88B5u,ea)?1u:0u));
        }
        case 0x88A8u: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x88AAu; return dd3_static_complete(rt,3u);
        }
        case 0x88AAu: {
            uint16_t ea=(uint16_t)(0x88B6u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88ADu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x88B6u,ea)?1u:0u));
        }
        case 0x88ADu: {
            dd3_static_write8(rt,0x1Du,rt->state.cpu.a);
            rt->state.cpu.pc=0x88AFu; return dd3_static_complete(rt,3u);
        }
        case 0x88AFu: {
            dd3_static_push8(rt,(uint8_t)(0x88B1u>>8)); dd3_static_push8(rt,(uint8_t)0x88B1u);
            rt->state.cpu.pc=0x88CBu; return dd3_static_complete(rt,6u);
        }
        case 0x88B2u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x88CBu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88CDu; return dd3_static_complete(rt,3u);
        }
        case 0x88CDu: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88CFu; return dd3_static_complete(rt,4u);
        }
        case 0x88CFu: {
            uint16_t ea=(uint16_t)(0x00E9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x88D2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00E9u,ea)?1u:0u));
        }
        case 0x88D2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x88D4u,0x892Du)) c++; rt->state.cpu.pc=0x892Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88D4u; return dd3_static_complete(rt,2u);
        }
        case 0x88D4u: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88D6u; return dd3_static_complete(rt,4u);
        }
        case 0x88D6u: {
            uint16_t ea=(uint16_t)(0x00DFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x88D9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00DFu,ea)?1u:0u));
        }
        case 0x88D9u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x88DBu,0x892Du)) c++; rt->state.cpu.pc=0x892Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88DBu; return dd3_static_complete(rt,2u);
        }
        case 0x88DBu: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88DDu; return dd3_static_complete(rt,4u);
        }
        case 0x88DDu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x88DEu; return dd3_static_complete(rt,2u);
        }
        case 0x88DEu: {
            uint16_t ea=(uint16_t)(0x00CBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x88E1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00CBu,ea)?1u:0u));
        }
        case 0x88E1u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x88E3u; return dd3_static_complete(rt,3u);
        }
        case 0x88E3u: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88E5u; return dd3_static_complete(rt,4u);
        }
        case 0x88E5u: {
            uint16_t ea=(uint16_t)(0x00D5u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x88E8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00D5u,ea)?1u:0u));
        }
        case 0x88E8u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x88EAu; return dd3_static_complete(rt,3u);
        }
        case 0x88EAu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x88ECu,0x88EFu)) c++; rt->state.cpu.pc=0x88EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88ECu; return dd3_static_complete(rt,2u);
        }
        case 0x88ECu: {
            dd3_static_push8(rt,(uint8_t)(0x88EEu>>8)); dd3_static_push8(rt,(uint8_t)0x88EEu);
            rt->state.cpu.pc=0x8954u; return dd3_static_complete(rt,6u);
        }
        case 0x88EFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x88F1u,0x892Du)) c++; rt->state.cpu.pc=0x892Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88F1u; return dd3_static_complete(rt,2u);
        }
        case 0x88F1u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88F3u; return dd3_static_complete(rt,3u);
        }
        case 0x88F3u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x88F5u; return dd3_static_complete(rt,3u);
        }
        case 0x88F5u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x88F7u,0x892Du)) c++; rt->state.cpu.pc=0x892Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88F7u; return dd3_static_complete(rt,2u);
        }
        case 0x88F7u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88F9u; return dd3_static_complete(rt,4u);
        }
        case 0x88F9u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x88FBu; return dd3_static_complete(rt,3u);
        }
        case 0x88FBu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x88FDu,0x8918u)) c++; rt->state.cpu.pc=0x8918u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88FDu; return dd3_static_complete(rt,2u);
        }
        case 0x88FDu: {
            uint16_t ea=(uint16_t)(0x00B7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8900u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B7u,ea)?1u:0u));
        }
        case 0x8900u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8901u; return dd3_static_complete(rt,2u);
        }
        case 0x8901u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8903u; return dd3_static_complete(rt,4u);
        }
        case 0x8903u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8905u; return dd3_static_complete(rt,3u);
        }
        case 0x8905u: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8908u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0x8908u: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x890Au; return dd3_static_complete(rt,4u);
        }
        case 0x890Au: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x890Cu; return dd3_static_complete(rt,3u);
        }
        case 0x890Cu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x890Eu,0x892Du)) c++; rt->state.cpu.pc=0x892Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x890Eu; return dd3_static_complete(rt,2u);
        }
        case 0x890Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8910u,0x892Du)) c++; rt->state.cpu.pc=0x892Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8910u; return dd3_static_complete(rt,2u);
        }
        case 0x8910u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8912u; return dd3_static_complete(rt,3u);
        }
        case 0x8912u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8914u; return dd3_static_complete(rt,3u);
        }
        case 0x8914u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8916u,0x892Du)) c++; rt->state.cpu.pc=0x892Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8916u; return dd3_static_complete(rt,2u);
        }
        case 0x8916u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8917u; return dd3_static_complete(rt,2u);
        }
        case 0x8917u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8918u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x891Au; return dd3_static_complete(rt,4u);
        }
        case 0x891Au: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x891Bu; return dd3_static_complete(rt,2u);
        }
        case 0x891Bu: {
            uint16_t ea=(uint16_t)(0x00B7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x891Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B7u,ea)?1u:0u));
        }
        case 0x891Eu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8920u; return dd3_static_complete(rt,3u);
        }
        case 0x8920u: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8922u; return dd3_static_complete(rt,4u);
        }
        case 0x8922u: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8925u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0x8925u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8927u; return dd3_static_complete(rt,3u);
        }
        case 0x8927u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8929u,0x892Du)) c++; rt->state.cpu.pc=0x892Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8929u; return dd3_static_complete(rt,2u);
        }
        case 0x8929u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x892Bu,0x892Du)) c++; rt->state.cpu.pc=0x892Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x892Bu; return dd3_static_complete(rt,2u);
        }
        case 0x892Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x892Du,0x8910u)) c++; rt->state.cpu.pc=0x8910u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x892Du; return dd3_static_complete(rt,2u);
        }
        case 0x892Du: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x892Eu; return dd3_static_complete(rt,2u);
        }
        case 0x892Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x892Fu: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8931u; return dd3_static_complete(rt,3u);
        }
        case 0x8931u: {
            uint16_t ea=(uint16_t)((0x99u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8933u; return dd3_static_complete(rt,4u);
        }
        case 0x8933u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8935u; return dd3_static_complete(rt,2u);
        }
        case 0x8935u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8936u; return dd3_static_complete(rt,2u);
        }
        case 0x8936u: {
            uint16_t ea=(uint16_t)(0x8944u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8939u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8944u,ea)?1u:0u));
        }
        case 0x8939u: {
            dd3_static_write8(rt,(uint16_t)(0x0463u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x893Cu; return dd3_static_complete(rt,5u);
        }
        case 0x893Cu: {
            uint16_t ea=(uint16_t)((0x97u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x893Eu; return dd3_static_complete(rt,4u);
        }
        case 0x893Eu: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8940u; return dd3_static_complete(rt,2u);
        }
        case 0x8940u: {
            dd3_static_write8(rt,(uint16_t)(0x046Bu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8943u; return dd3_static_complete(rt,5u);
        }
        case 0x8943u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8954u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8956u; return dd3_static_complete(rt,3u);
        }
        case 0x8956u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8958u; return dd3_static_complete(rt,2u);
        }
        case 0x8958u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8959u; return dd3_static_complete(rt,2u);
        }
        case 0x8959u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x895Bu; return dd3_static_complete(rt,2u);
        }
        case 0x895Bu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x895Du; return dd3_static_complete(rt,3u);
        }
        case 0x895Du: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x895Fu; return dd3_static_complete(rt,3u);
        }
        case 0x895Fu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8961u; return dd3_static_complete(rt,2u);
        }
        case 0x8961u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8963u; return dd3_static_complete(rt,2u);
        }
        case 0x8963u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8965u; return dd3_static_complete(rt,3u);
        }
        case 0x8965u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8966u: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8968u; return dd3_static_complete(rt,3u);
        }
        case 0x8968u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x896Au; return dd3_static_complete(rt,2u);
        }
        case 0x896Au: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x896Bu; return dd3_static_complete(rt,2u);
        }
        case 0x896Bu: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x896Du; return dd3_static_complete(rt,2u);
        }
        case 0x896Du: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0x896Fu; return dd3_static_complete(rt,3u);
        }
        case 0x896Fu: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8971u; return dd3_static_complete(rt,3u);
        }
        case 0x8971u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8973u; return dd3_static_complete(rt,2u);
        }
        case 0x8973u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8975u; return dd3_static_complete(rt,2u);
        }
        case 0x8975u: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8977u; return dd3_static_complete(rt,3u);
        }
        case 0x8977u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8978u: {
            dd3_static_push8(rt,(uint8_t)(0x897Au>>8)); dd3_static_push8(rt,(uint8_t)0x897Au);
            rt->state.cpu.pc=0x8993u; return dd3_static_complete(rt,6u);
        }
        case 0x897Bu: {
            dd3_static_push8(rt,(uint8_t)(0x897Du>>8)); dd3_static_push8(rt,(uint8_t)0x897Du);
            rt->state.cpu.pc=0x9C4Bu; return dd3_static_complete(rt,6u);
        }
        case 0x897Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8980u>>8)); dd3_static_push8(rt,(uint8_t)0x8980u);
            rt->state.cpu.pc=0x9C60u; return dd3_static_complete(rt,6u);
        }
        case 0x8981u: {
            dd3_static_push8(rt,(uint8_t)(0x8983u>>8)); dd3_static_push8(rt,(uint8_t)0x8983u);
            rt->state.cpu.pc=0x9CCBu; return dd3_static_complete(rt,6u);
        }
        case 0x8984u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8986u; return dd3_static_complete(rt,2u);
        }
        case 0x8986u: {
            dd3_static_write8(rt,0x00F5u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8989u; return dd3_static_complete(rt,4u);
        }
        case 0x8989u: {
            dd3_static_write8(rt,0x038Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x898Cu; return dd3_static_complete(rt,4u);
        }
        case 0x898Cu: {
            dd3_static_write8(rt,0x038Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x898Fu; return dd3_static_complete(rt,4u);
        }
        case 0x898Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8991u>>8)); dd3_static_push8(rt,(uint8_t)0x8991u);
            rt->state.cpu.pc=0x9719u; return dd3_static_complete(rt,6u);
        }
        case 0x8992u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8993u: {
            uint8_t v=0x06u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8995u; return dd3_static_complete(rt,2u);
        }
        case 0x8995u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8997u; return dd3_static_complete(rt,2u);
        }
        case 0x8997u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8999u; return dd3_static_complete(rt,4u);
        }
        case 0x8999u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x899Au; return dd3_static_complete(rt,2u);
        }
        case 0x899Au: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x899Cu,0x8997u)) c++; rt->state.cpu.pc=0x8997u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x899Cu; return dd3_static_complete(rt,2u);
        }
        case 0x899Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x899Du: {
            dd3_static_push8(rt,(uint8_t)(0x899Fu>>8)); dd3_static_push8(rt,(uint8_t)0x899Fu);
            rt->state.cpu.pc=0x96BCu; return dd3_static_complete(rt,6u);
        }
        case 0x89A0u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89A2u; return dd3_static_complete(rt,3u);
        }
        case 0x89A2u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x89A4u; return dd3_static_complete(rt,2u);
        }
        case 0x89A4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x89A6u,0x89BEu)) c++; rt->state.cpu.pc=0x89BEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x89A6u; return dd3_static_complete(rt,2u);
        }
        case 0x89A6u: {
            uint16_t ea=0x00F6u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89A9u; return dd3_static_complete(rt,4u);
        }
        case 0x89A9u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x89AAu; return dd3_static_complete(rt,2u);
        }
        case 0x89AAu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x89ABu; return dd3_static_complete(rt,2u);
        }
        case 0x89ABu: {
            uint16_t ea=(uint16_t)(0x89C1u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89AEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x89C1u,ea)?1u:0u));
        }
        case 0x89AEu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x89B0u; return dd3_static_complete(rt,3u);
        }
        case 0x89B0u: {
            uint16_t ea=(uint16_t)(0x89C2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89B3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x89C2u,ea)?1u:0u));
        }
        case 0x89B3u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x89B5u; return dd3_static_complete(rt,3u);
        }
        case 0x89B5u: {
            uint8_t v=0x89u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89B7u; return dd3_static_complete(rt,2u);
        }
        case 0x89B7u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x89B8u; return dd3_static_complete(rt,3u);
        }
        case 0x89B8u: {
            uint8_t v=0xBDu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89BAu; return dd3_static_complete(rt,2u);
        }
        case 0x89BAu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x89BBu; return dd3_static_complete(rt,3u);
        }
        case 0x89BBu: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x0029u); return dd3_static_complete(rt,5u);
        }
        case 0x89BEu: {
            rt->state.cpu.pc=0x9B79u; return dd3_static_complete(rt,3u);
        }
        case 0x89F5u: {
            uint16_t ea=0xFAu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89F7u; return dd3_static_complete(rt,3u);
        }
        case 0x89F7u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x89F9u,0x89FCu)) c++; rt->state.cpu.pc=0x89FCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x89F9u; return dd3_static_complete(rt,2u);
        }
        case 0x89F9u: {
            uint16_t ea=0xFAu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x89FBu; return dd3_static_complete(rt,5u);
        }
        case 0x89FBu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x89FCu: {
            uint16_t ea=0x00F5u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x89FFu; return dd3_static_complete(rt,6u);
        }
        case 0x89FFu: {
            rt->state.cpu.pc=0x9719u; return dd3_static_complete(rt,3u);
        }
        case 0x8A02u: {
            uint16_t ea=0x00F7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A05u; return dd3_static_complete(rt,4u);
        }
        case 0x8A05u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8A07u,0x89FCu)) c++; rt->state.cpu.pc=0x89FCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A07u; return dd3_static_complete(rt,2u);
        }
        case 0x8A07u: {
            dd3_static_push8(rt,(uint8_t)(0x8A09u>>8)); dd3_static_push8(rt,(uint8_t)0x8A09u);
            rt->state.cpu.pc=0x8CC5u; return dd3_static_complete(rt,6u);
        }
        case 0x8A0Au: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8A0Cu,0x8A0Fu)) c++; rt->state.cpu.pc=0x8A0Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A0Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8A0Cu: {
            dd3_static_push8(rt,(uint8_t)(0x8A0Eu>>8)); dd3_static_push8(rt,(uint8_t)0x8A0Eu);
            rt->state.cpu.pc=0x8C8Fu; return dd3_static_complete(rt,6u);
        }
        case 0x8A0Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8A10u: {
            dd3_static_push8(rt,(uint8_t)(0x8A12u>>8)); dd3_static_push8(rt,(uint8_t)0x8A12u);
            rt->state.cpu.pc=0x8CA9u; return dd3_static_complete(rt,6u);
        }
        case 0x8A13u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8A14u: {
            dd3_static_push8(rt,(uint8_t)(0x8A16u>>8)); dd3_static_push8(rt,(uint8_t)0x8A16u);
            rt->state.cpu.pc=0x9A06u; return dd3_static_complete(rt,6u);
        }
        case 0x8A17u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A19u; return dd3_static_complete(rt,2u);
        }
        case 0x8A19u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A1Bu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8A1Bu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8A1Cu; return dd3_static_complete(rt,3u);
        }
        case 0x8A1Cu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8A1Du; return dd3_static_complete(rt,2u);
        }
        case 0x8A1Du: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8A1Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8A1Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8A21u,0x8A3Eu)) c++; rt->state.cpu.pc=0x8A3Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A21u; return dd3_static_complete(rt,2u);
        }
        case 0x8A21u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A23u; return dd3_static_complete(rt,2u);
        }
        case 0x8A23u: {
            uint8_t v=0xC0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8A25u; return dd3_static_complete(rt,2u);
        }
        case 0x8A25u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8A27u,0x8A2Eu)) c++; rt->state.cpu.pc=0x8A2Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A27u; return dd3_static_complete(rt,2u);
        }
        case 0x8A27u: {
            dd3_static_push8(rt,(uint8_t)(0x8A29u>>8)); dd3_static_push8(rt,(uint8_t)0x8A29u);
            rt->state.cpu.pc=0x8A69u; return dd3_static_complete(rt,6u);
        }
        case 0x8A2Au: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8A2Cu,0x8A67u)) c++; rt->state.cpu.pc=0x8A67u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A2Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8A2Cu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8A2Eu,0x8A3Eu)) c++; rt->state.cpu.pc=0x8A3Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A2Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8A2Eu: {
            uint8_t v=0x80u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8A30u; return dd3_static_complete(rt,2u);
        }
        case 0x8A30u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8A32u,0x8A39u)) c++; rt->state.cpu.pc=0x8A39u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A32u; return dd3_static_complete(rt,2u);
        }
        case 0x8A32u: {
            dd3_static_push8(rt,(uint8_t)(0x8A34u>>8)); dd3_static_push8(rt,(uint8_t)0x8A34u);
            rt->state.cpu.pc=0x8A7Cu; return dd3_static_complete(rt,6u);
        }
        case 0x8A35u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8A37u,0x8A67u)) c++; rt->state.cpu.pc=0x8A67u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A37u; return dd3_static_complete(rt,2u);
        }
        case 0x8A37u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8A39u,0x8A3Eu)) c++; rt->state.cpu.pc=0x8A3Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A39u; return dd3_static_complete(rt,2u);
        }
        case 0x8A39u: {
            dd3_static_push8(rt,(uint8_t)(0x8A3Bu>>8)); dd3_static_push8(rt,(uint8_t)0x8A3Bu);
            rt->state.cpu.pc=0x8A98u; return dd3_static_complete(rt,6u);
        }
        case 0x8A3Cu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8A3Eu,0x8A67u)) c++; rt->state.cpu.pc=0x8A67u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A3Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8A3Eu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8A3Fu; return dd3_static_complete(rt,4u);
        }
        case 0x8A3Fu: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8A41u; return dd3_static_complete(rt,2u);
        }
        case 0x8A41u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8A43u,0x8A60u)) c++; rt->state.cpu.pc=0x8A60u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A43u; return dd3_static_complete(rt,2u);
        }
        case 0x8A43u: {
            uint8_t v=0x02u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A45u; return dd3_static_complete(rt,2u);
        }
        case 0x8A45u: {
            uint8_t v=0x0Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8A47u; return dd3_static_complete(rt,2u);
        }
        case 0x8A47u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8A49u,0x8A50u)) c++; rt->state.cpu.pc=0x8A50u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A49u; return dd3_static_complete(rt,2u);
        }
        case 0x8A49u: {
            dd3_static_push8(rt,(uint8_t)(0x8A4Bu>>8)); dd3_static_push8(rt,(uint8_t)0x8A4Bu);
            rt->state.cpu.pc=0x8A69u; return dd3_static_complete(rt,6u);
        }
        case 0x8A4Cu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8A4Eu,0x8A66u)) c++; rt->state.cpu.pc=0x8A66u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A4Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8A4Eu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8A50u,0x8A60u)) c++; rt->state.cpu.pc=0x8A60u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A50u; return dd3_static_complete(rt,2u);
        }
        case 0x8A50u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8A52u; return dd3_static_complete(rt,2u);
        }
        case 0x8A52u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8A54u,0x8A5Bu)) c++; rt->state.cpu.pc=0x8A5Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A54u; return dd3_static_complete(rt,2u);
        }
        case 0x8A54u: {
            dd3_static_push8(rt,(uint8_t)(0x8A56u>>8)); dd3_static_push8(rt,(uint8_t)0x8A56u);
            rt->state.cpu.pc=0x8A7Cu; return dd3_static_complete(rt,6u);
        }
        case 0x8A57u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8A59u,0x8A66u)) c++; rt->state.cpu.pc=0x8A66u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A59u; return dd3_static_complete(rt,2u);
        }
        case 0x8A59u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8A5Bu,0x8A60u)) c++; rt->state.cpu.pc=0x8A60u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A5Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8A5Bu: {
            dd3_static_push8(rt,(uint8_t)(0x8A5Du>>8)); dd3_static_push8(rt,(uint8_t)0x8A5Du);
            rt->state.cpu.pc=0x8A98u; return dd3_static_complete(rt,6u);
        }
        case 0x8A5Eu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8A60u,0x8A66u)) c++; rt->state.cpu.pc=0x8A66u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A60u; return dd3_static_complete(rt,2u);
        }
        case 0x8A60u: {
            uint16_t ea=0x00F5u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8A63u; return dd3_static_complete(rt,6u);
        }
        case 0x8A63u: {
            dd3_static_push8(rt,(uint8_t)(0x8A65u>>8)); dd3_static_push8(rt,(uint8_t)0x8A65u);
            rt->state.cpu.pc=0x9719u; return dd3_static_complete(rt,6u);
        }
        case 0x8A66u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8A67u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8A68u; return dd3_static_complete(rt,4u);
        }
        case 0x8A68u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8A69u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A6Bu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8A6Bu: {
            uint16_t ea=(uint16_t)((0x87u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8A6Du; return dd3_static_complete(rt,4u);
        }
        case 0x8A6Du: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8A6Fu,0x8A7Au)) c++; rt->state.cpu.pc=0x8A7Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A6Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8A6Fu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8A70u; return dd3_static_complete(rt,2u);
        }
        case 0x8A70u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8A71u; return dd3_static_complete(rt,2u);
        }
        case 0x8A71u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A73u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8A73u: {
            uint16_t ea=(uint16_t)((0x88u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8A75u; return dd3_static_complete(rt,4u);
        }
        case 0x8A75u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8A77u,0x8A7Au)) c++; rt->state.cpu.pc=0x8A7Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A77u; return dd3_static_complete(rt,2u);
        }
        case 0x8A77u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8A78u; return dd3_static_complete(rt,2u);
        }
        case 0x8A78u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8A79u; return dd3_static_complete(rt,2u);
        }
        case 0x8A79u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8A7Au: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8A7Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8A7Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8A7Cu: {
            uint16_t ea=(uint16_t)((0x87u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A7Eu; return dd3_static_complete(rt,4u);
        }
        case 0x8A7Eu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8A7Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8A7Fu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8A81u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8A81u: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0x8A82u; return dd3_static_complete(rt,3u);
        }
        case 0x8A82u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8A83u; return dd3_static_complete(rt,2u);
        }
        case 0x8A83u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8A84u; return dd3_static_complete(rt,2u);
        }
        case 0x8A84u: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt));
            rt->state.cpu.pc=0x8A85u; return dd3_static_complete(rt,4u);
        }
        case 0x8A85u: {
            uint16_t ea=(uint16_t)((0x87u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A87u; return dd3_static_complete(rt,4u);
        }
        case 0x8A87u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8A89u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8A89u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8A8Bu,0x8A8Eu)) c++; rt->state.cpu.pc=0x8A8Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A8Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8A8Bu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8A8Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8A8Cu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8A8Du; return dd3_static_complete(rt,2u);
        }
        case 0x8A8Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8A8Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8A90u>>8)); dd3_static_push8(rt,(uint8_t)0x8A90u);
            rt->state.cpu.pc=0x8AB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8A91u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8A93u,0x8A96u)) c++; rt->state.cpu.pc=0x8A96u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A93u; return dd3_static_complete(rt,2u);
        }
        case 0x8A93u: {
            dd3_static_push8(rt,(uint8_t)(0x8A95u>>8)); dd3_static_push8(rt,(uint8_t)0x8A95u);
            rt->state.cpu.pc=0x8AC5u; return dd3_static_complete(rt,6u);
        }
        case 0x8A96u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8A97u; return dd3_static_complete(rt,2u);
        }
        case 0x8A97u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8A98u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A9Au; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8A9Au: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8A9Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8A9Bu: {
            uint16_t ea=(uint16_t)((0x87u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8A9Du; return dd3_static_complete(rt,4u);
        }
        case 0x8A9Du: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0x8A9Eu; return dd3_static_complete(rt,3u);
        }
        case 0x8A9Eu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8A9Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8A9Fu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8AA0u; return dd3_static_complete(rt,2u);
        }
        case 0x8AA0u: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt));
            rt->state.cpu.pc=0x8AA1u; return dd3_static_complete(rt,4u);
        }
        case 0x8AA1u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8AA3u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8AA3u: {
            uint16_t ea=(uint16_t)((0x87u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8AA5u; return dd3_static_complete(rt,4u);
        }
        case 0x8AA5u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8AA7u,0x8AAAu)) c++; rt->state.cpu.pc=0x8AAAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8AA7u; return dd3_static_complete(rt,2u);
        }
        case 0x8AA7u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8AA8u; return dd3_static_complete(rt,2u);
        }
        case 0x8AA8u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8AA9u; return dd3_static_complete(rt,2u);
        }
        case 0x8AA9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8AAAu: {
            dd3_static_push8(rt,(uint8_t)(0x8AACu>>8)); dd3_static_push8(rt,(uint8_t)0x8AACu);
            rt->state.cpu.pc=0x8AB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8AADu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8AAFu,0x8AB2u)) c++; rt->state.cpu.pc=0x8AB2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8AAFu; return dd3_static_complete(rt,2u);
        }
        case 0x8AAFu: {
            dd3_static_push8(rt,(uint8_t)(0x8AB1u>>8)); dd3_static_push8(rt,(uint8_t)0x8AB1u);
            rt->state.cpu.pc=0x8AE9u; return dd3_static_complete(rt,6u);
        }
        case 0x8AB2u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8AB3u; return dd3_static_complete(rt,2u);
        }
        case 0x8AB3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8AB4u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8AB5u; return dd3_static_complete(rt,2u);
        }
        case 0x8AB5u: {
            uint16_t ea=(uint16_t)((0x87u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8AB7u; return dd3_static_complete(rt,4u);
        }
        case 0x8AB7u: {
            uint16_t ea=(uint16_t)((0x8Bu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8AB9u; return dd3_static_complete(rt,4u);
        }
        case 0x8AB9u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8ABBu,0x8AC3u)) c++; rt->state.cpu.pc=0x8AC3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8ABBu; return dd3_static_complete(rt,2u);
        }
        case 0x8ABBu: {
            uint16_t ea=(uint16_t)((0x88u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8ABDu; return dd3_static_complete(rt,4u);
        }
        case 0x8ABDu: {
            uint16_t ea=(uint16_t)((0x8Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8ABFu; return dd3_static_complete(rt,4u);
        }
        case 0x8ABFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8AC1u,0x8AC3u)) c++; rt->state.cpu.pc=0x8AC3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8AC1u; return dd3_static_complete(rt,2u);
        }
        case 0x8AC1u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8AC2u; return dd3_static_complete(rt,2u);
        }
        case 0x8AC2u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8AC3u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8AC4u; return dd3_static_complete(rt,2u);
        }
        case 0x8AC4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8AC5u: {
            dd3_static_write8(rt,0x33u,rt->state.cpu.y);
            rt->state.cpu.pc=0x8AC7u; return dd3_static_complete(rt,3u);
        }
        case 0x8AC7u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8AC9u; return dd3_static_complete(rt,2u);
        }
        case 0x8AC9u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8ACBu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8ACBu: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8ACDu; return dd3_static_complete(rt,2u);
        }
        case 0x8ACDu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8ACFu,0x8AD5u)) c++; rt->state.cpu.pc=0x8AD5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8ACFu; return dd3_static_complete(rt,2u);
        }
        case 0x8ACFu: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8AD1u; return dd3_static_complete(rt,2u);
        }
        case 0x8AD1u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8AD3u,0x8AE8u)) c++; rt->state.cpu.pc=0x8AE8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8AD3u; return dd3_static_complete(rt,2u);
        }
        case 0x8AD3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8AD5u,0x8AD9u)) c++; rt->state.cpu.pc=0x8AD9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8AD5u; return dd3_static_complete(rt,2u);
        }
        case 0x8AD5u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8AD7u; return dd3_static_complete(rt,2u);
        }
        case 0x8AD7u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8AD9u,0x8AE8u)) c++; rt->state.cpu.pc=0x8AE8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8AD9u; return dd3_static_complete(rt,2u);
        }
        case 0x8AD9u: {
            uint16_t ea=0x33u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8ADBu; return dd3_static_complete(rt,3u);
        }
        case 0x8ADBu: {
            uint16_t ea=(uint16_t)((0x87u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8ADDu; return dd3_static_complete(rt,4u);
        }
        case 0x8ADDu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8ADEu; return dd3_static_complete(rt,2u);
        }
        case 0x8ADEu: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8AE0u; return dd3_static_complete(rt,2u);
        }
        case 0x8AE0u: {
            dd3_static_write8(rt,(uint16_t)((0x87u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8AE2u; return dd3_static_complete(rt,4u);
        }
        case 0x8AE2u: {
            uint16_t ea=(uint16_t)((0x88u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8AE4u; return dd3_static_complete(rt,4u);
        }
        case 0x8AE4u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8AE6u; return dd3_static_complete(rt,2u);
        }
        case 0x8AE6u: {
            dd3_static_write8(rt,(uint16_t)((0x88u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8AE8u; return dd3_static_complete(rt,4u);
        }
        case 0x8AE8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8AE9u: {
            dd3_static_write8(rt,0x33u,rt->state.cpu.y);
            rt->state.cpu.pc=0x8AEBu; return dd3_static_complete(rt,3u);
        }
        case 0x8AEBu: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8AEDu; return dd3_static_complete(rt,2u);
        }
        case 0x8AEDu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8AEFu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8AEFu: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8AF1u; return dd3_static_complete(rt,2u);
        }
        case 0x8AF1u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8AF3u,0x8AF9u)) c++; rt->state.cpu.pc=0x8AF9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8AF3u; return dd3_static_complete(rt,2u);
        }
        case 0x8AF3u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8AF5u; return dd3_static_complete(rt,2u);
        }
        case 0x8AF5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8AF7u,0x8B0Cu)) c++; rt->state.cpu.pc=0x8B0Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8AF7u; return dd3_static_complete(rt,2u);
        }
        case 0x8AF7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8AF9u,0x8AFDu)) c++; rt->state.cpu.pc=0x8AFDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8AF9u; return dd3_static_complete(rt,2u);
        }
        case 0x8AF9u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8AFBu; return dd3_static_complete(rt,2u);
        }
        case 0x8AFBu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8AFDu,0x8B0Cu)) c++; rt->state.cpu.pc=0x8B0Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8AFDu; return dd3_static_complete(rt,2u);
        }
        case 0x8AFDu: {
            uint16_t ea=0x33u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8AFFu; return dd3_static_complete(rt,3u);
        }
        case 0x8AFFu: {
            uint16_t ea=(uint16_t)((0x87u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B01u; return dd3_static_complete(rt,4u);
        }
        case 0x8B01u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8B02u; return dd3_static_complete(rt,2u);
        }
        case 0x8B02u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8B04u; return dd3_static_complete(rt,2u);
        }
        case 0x8B04u: {
            dd3_static_write8(rt,(uint16_t)((0x87u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8B06u; return dd3_static_complete(rt,4u);
        }
        case 0x8B06u: {
            uint16_t ea=(uint16_t)((0x88u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B08u; return dd3_static_complete(rt,4u);
        }
        case 0x8B08u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8B0Au; return dd3_static_complete(rt,2u);
        }
        case 0x8B0Au: {
            dd3_static_write8(rt,(uint16_t)((0x88u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8B0Cu; return dd3_static_complete(rt,4u);
        }
        case 0x8B0Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8B0Du: {
            uint16_t ea=0x07FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B10u; return dd3_static_complete(rt,4u);
        }
        case 0x8B10u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8B12u; return dd3_static_complete(rt,2u);
        }
        case 0x8B12u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8B14u,0x8B1Au)) c++; rt->state.cpu.pc=0x8B1Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8B14u; return dd3_static_complete(rt,2u);
        }
        case 0x8B14u: {
            uint16_t ea=0x00F5u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8B17u; return dd3_static_complete(rt,6u);
        }
        case 0x8B17u: {
            dd3_static_push8(rt,(uint8_t)(0x8B19u>>8)); dd3_static_push8(rt,(uint8_t)0x8B19u);
            rt->state.cpu.pc=0x9719u; return dd3_static_complete(rt,6u);
        }
        case 0x8B1Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8B1Bu: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B1Du; return dd3_static_complete(rt,3u);
        }
        case 0x8B1Du: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8B1Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8B1Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8B21u,0x8B83u)) c++; rt->state.cpu.pc=0x8B83u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8B21u; return dd3_static_complete(rt,2u);
        }
        case 0x8B21u: {
            uint16_t ea=0x00F7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B24u; return dd3_static_complete(rt,4u);
        }
        case 0x8B24u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8B26u,0x8B76u)) c++; rt->state.cpu.pc=0x8B76u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8B26u; return dd3_static_complete(rt,2u);
        }
        case 0x8B26u: {
            dd3_static_push8(rt,(uint8_t)(0x8B28u>>8)); dd3_static_push8(rt,(uint8_t)0x8B28u);
            rt->state.cpu.pc=0x8CC5u; return dd3_static_complete(rt,6u);
        }
        case 0x8B29u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8B2Bu,0x8B75u)) c++; rt->state.cpu.pc=0x8B75u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8B2Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8B2Bu: {
            dd3_static_push8(rt,(uint8_t)(0x8B2Du>>8)); dd3_static_push8(rt,(uint8_t)0x8B2Du);
            rt->state.cpu.pc=0x9A06u; return dd3_static_complete(rt,6u);
        }
        case 0x8B2Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8B30u>>8)); dd3_static_push8(rt,(uint8_t)0x8B30u);
            rt->state.cpu.pc=0x8BF6u; return dd3_static_complete(rt,6u);
        }
        case 0x8B31u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8B33u,0x8B3Cu)) c++; rt->state.cpu.pc=0x8B3Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8B33u; return dd3_static_complete(rt,2u);
        }
        case 0x8B33u: {
            uint16_t ea=0x04FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B36u; return dd3_static_complete(rt,4u);
        }
        case 0x8B36u: {
            dd3_static_write8(rt,0x04FFu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8B39u; return dd3_static_complete(rt,4u);
        }
        case 0x8B39u: {
            rt->state.cpu.pc=0x8A02u; return dd3_static_complete(rt,3u);
        }
        case 0x8B3Cu: {
            uint8_t v=0x3Eu;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B3Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8B3Eu: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B40u; return dd3_static_complete(rt,3u);
        }
        case 0x8B40u: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8B42u; return dd3_static_complete(rt,2u);
        }
        case 0x8B42u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8B44u,0x8B52u)) c++; rt->state.cpu.pc=0x8B52u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8B44u; return dd3_static_complete(rt,2u);
        }
        case 0x8B44u: {
            uint8_t v=0x37u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B46u; return dd3_static_complete(rt,2u);
        }
        case 0x8B46u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8B48u; return dd3_static_complete(rt,2u);
        }
        case 0x8B48u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8B4Au,0x8B52u)) c++; rt->state.cpu.pc=0x8B52u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8B4Au; return dd3_static_complete(rt,2u);
        }
        case 0x8B4Au: {
            uint8_t v=0x39u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B4Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8B4Cu: {
            uint8_t v=0x0Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8B4Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8B4Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8B50u,0x8B52u)) c++; rt->state.cpu.pc=0x8B52u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8B50u; return dd3_static_complete(rt,2u);
        }
        case 0x8B50u: {
            uint8_t v=0x40u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B52u; return dd3_static_complete(rt,2u);
        }
        case 0x8B52u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8B53u; return dd3_static_complete(rt,2u);
        }
        case 0x8B53u: {
            dd3_static_push8(rt,(uint8_t)(0x8B55u>>8)); dd3_static_push8(rt,(uint8_t)0x8B55u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0x8B56u: {
            uint8_t v=0x03u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B58u; return dd3_static_complete(rt,2u);
        }
        case 0x8B58u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B5Au; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8B5Au: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8B5Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8B5Cu: {
            dd3_static_write8(rt,0x04CCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8B5Fu; return dd3_static_complete(rt,4u);
        }
        case 0x8B5Fu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B61u; return dd3_static_complete(rt,2u);
        }
        case 0x8B61u: {
            dd3_static_write8(rt,0x04CDu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8B64u; return dd3_static_complete(rt,4u);
        }
        case 0x8B64u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B66u; return dd3_static_complete(rt,3u);
        }
        case 0x8B66u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8B68u; return dd3_static_complete(rt,2u);
        }
        case 0x8B68u: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8B6Au; return dd3_static_complete(rt,3u);
        }
        case 0x8B6Au: {
            uint16_t ea=0x04FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B6Du; return dd3_static_complete(rt,4u);
        }
        case 0x8B6Du: {
            dd3_static_write8(rt,0x04FFu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8B70u; return dd3_static_complete(rt,4u);
        }
        case 0x8B70u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B72u; return dd3_static_complete(rt,2u);
        }
        case 0x8B72u: {
            dd3_static_write8(rt,0x04FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8B75u; return dd3_static_complete(rt,4u);
        }
        case 0x8B75u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8B76u: {
            uint16_t ea=0x04FFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B79u; return dd3_static_complete(rt,4u);
        }
        case 0x8B79u: {
            dd3_static_write8(rt,0x04FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8B7Cu; return dd3_static_complete(rt,4u);
        }
        case 0x8B7Cu: {
            uint16_t ea=0x00F5u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8B7Fu; return dd3_static_complete(rt,6u);
        }
        case 0x8B7Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8B81u>>8)); dd3_static_push8(rt,(uint8_t)0x8B81u);
            rt->state.cpu.pc=0x9719u; return dd3_static_complete(rt,6u);
        }
        case 0x8B82u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8B83u: {
            uint16_t ea=0x04CCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B86u; return dd3_static_complete(rt,4u);
        }
        case 0x8B86u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8B88u,0x8BF5u)) c++; rt->state.cpu.pc=0x8BF5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8B88u; return dd3_static_complete(rt,2u);
        }
        case 0x8B88u: {
            uint16_t ea=0x04CDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B8Bu; return dd3_static_complete(rt,4u);
        }
        case 0x8B8Bu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8B8Du,0x8BEFu)) c++; rt->state.cpu.pc=0x8BEFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8B8Du; return dd3_static_complete(rt,2u);
        }
        case 0x8B8Du: {
            uint16_t ea=0x00F7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B90u; return dd3_static_complete(rt,4u);
        }
        case 0x8B90u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8B92u,0x8BB7u)) c++; rt->state.cpu.pc=0x8BB7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8B92u; return dd3_static_complete(rt,2u);
        }
        case 0x8B92u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B94u; return dd3_static_complete(rt,2u);
        }
        case 0x8B94u: {
            dd3_static_write8(rt,0x030Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8B97u; return dd3_static_complete(rt,4u);
        }
        case 0x8B97u: {
            dd3_static_push8(rt,(uint8_t)(0x8B99u>>8)); dd3_static_push8(rt,(uint8_t)0x8B99u);
            rt->state.cpu.pc=0x9A06u; return dd3_static_complete(rt,6u);
        }
        case 0x8B9Au: {
            dd3_static_push8(rt,(uint8_t)(0x8B9Cu>>8)); dd3_static_push8(rt,(uint8_t)0x8B9Cu);
            rt->state.cpu.pc=0x8CC5u; return dd3_static_complete(rt,6u);
        }
        case 0x8B9Du: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B9Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8B9Fu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BA1u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8BA1u: {
            dd3_static_write8(rt,(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8BA3u; return dd3_static_complete(rt,4u);
        }
        case 0x8BA3u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BA5u; return dd3_static_complete(rt,2u);
        }
        case 0x8BA5u: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8BA7u; return dd3_static_complete(rt,3u);
        }
        case 0x8BA7u: {
            uint16_t ea=0x00F8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BAAu; return dd3_static_complete(rt,4u);
        }
        case 0x8BAAu: {
            dd3_static_push8(rt,(uint8_t)(0x8BACu>>8)); dd3_static_push8(rt,(uint8_t)0x8BACu);
            rt->state.cpu.pc=0x9A28u; return dd3_static_complete(rt,6u);
        }
        case 0x8BADu: {
            uint16_t ea=0x00F7u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8BB0u; return dd3_static_complete(rt,6u);
        }
        case 0x8BB0u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8BB2u,0x8BB7u)) c++; rt->state.cpu.pc=0x8BB7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BB2u; return dd3_static_complete(rt,2u);
        }
        case 0x8BB2u: {
            dd3_static_push8(rt,(uint8_t)(0x8BB4u>>8)); dd3_static_push8(rt,(uint8_t)0x8BB4u);
            rt->state.cpu.pc=0x8CC5u; return dd3_static_complete(rt,6u);
        }
        case 0x8BB5u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8BB7u,0x8B9Du)) c++; rt->state.cpu.pc=0x8B9Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BB7u; return dd3_static_complete(rt,2u);
        }
        case 0x8BB7u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BB9u; return dd3_static_complete(rt,3u);
        }
        case 0x8BB9u: {
            uint8_t v=0x0Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8BBBu; return dd3_static_complete(rt,2u);
        }
        case 0x8BBBu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8BBDu,0x8BC3u)) c++; rt->state.cpu.pc=0x8BC3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BBDu; return dd3_static_complete(rt,2u);
        }
        case 0x8BBDu: {
            uint16_t ea=0x46u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BBFu; return dd3_static_complete(rt,3u);
        }
        case 0x8BBFu: {
            uint8_t v=0x81u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8BC1u; return dd3_static_complete(rt,2u);
        }
        case 0x8BC1u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8BC3u,0x8BF5u)) c++; rt->state.cpu.pc=0x8BF5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BC3u; return dd3_static_complete(rt,2u);
        }
        case 0x8BC3u: {
            uint8_t v=0x3Eu;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BC5u; return dd3_static_complete(rt,2u);
        }
        case 0x8BC5u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BC7u; return dd3_static_complete(rt,3u);
        }
        case 0x8BC7u: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8BC9u; return dd3_static_complete(rt,2u);
        }
        case 0x8BC9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8BCBu,0x8BD9u)) c++; rt->state.cpu.pc=0x8BD9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BCBu; return dd3_static_complete(rt,2u);
        }
        case 0x8BCBu: {
            uint8_t v=0x37u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BCDu; return dd3_static_complete(rt,2u);
        }
        case 0x8BCDu: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8BCFu; return dd3_static_complete(rt,2u);
        }
        case 0x8BCFu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8BD1u,0x8BD9u)) c++; rt->state.cpu.pc=0x8BD9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BD1u; return dd3_static_complete(rt,2u);
        }
        case 0x8BD1u: {
            uint8_t v=0x39u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BD3u; return dd3_static_complete(rt,2u);
        }
        case 0x8BD3u: {
            uint8_t v=0x0Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8BD5u; return dd3_static_complete(rt,2u);
        }
        case 0x8BD5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8BD7u,0x8BD9u)) c++; rt->state.cpu.pc=0x8BD9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BD7u; return dd3_static_complete(rt,2u);
        }
        case 0x8BD7u: {
            uint8_t v=0x40u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BD9u; return dd3_static_complete(rt,2u);
        }
        case 0x8BD9u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8BDAu; return dd3_static_complete(rt,2u);
        }
        case 0x8BDAu: {
            dd3_static_push8(rt,(uint8_t)(0x8BDCu>>8)); dd3_static_push8(rt,(uint8_t)0x8BDCu);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0x8BDDu: {
            dd3_static_push8(rt,(uint8_t)(0x8BDFu>>8)); dd3_static_push8(rt,(uint8_t)0x8BDFu);
            rt->state.cpu.pc=0x9A06u; return dd3_static_complete(rt,6u);
        }
        case 0x8BE0u: {
            uint8_t v=0x03u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BE2u; return dd3_static_complete(rt,2u);
        }
        case 0x8BE2u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BE4u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8BE4u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8BE6u; return dd3_static_complete(rt,2u);
        }
        case 0x8BE6u: {
            dd3_static_write8(rt,0x04CCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8BE9u; return dd3_static_complete(rt,4u);
        }
        case 0x8BE9u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BEBu; return dd3_static_complete(rt,2u);
        }
        case 0x8BEBu: {
            dd3_static_write8(rt,0x04CDu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8BEEu; return dd3_static_complete(rt,4u);
        }
        case 0x8BEEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8BEFu: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BF1u; return dd3_static_complete(rt,3u);
        }
        case 0x8BF1u: {
            uint8_t v=0xDFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8BF3u; return dd3_static_complete(rt,2u);
        }
        case 0x8BF3u: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8BF5u; return dd3_static_complete(rt,3u);
        }
        case 0x8BF5u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8BF6u: {
            uint16_t ea=0x04CCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BF9u; return dd3_static_complete(rt,4u);
        }
        case 0x8BF9u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8BFBu,0x8BFEu)) c++; rt->state.cpu.pc=0x8BFEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BFBu; return dd3_static_complete(rt,2u);
        }
        case 0x8BFBu: {
            rt->state.cpu.pc=0x8C8Du; return dd3_static_complete(rt,3u);
        }
        case 0x8BFEu: {
            uint16_t ea=0x00F8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C01u; return dd3_static_complete(rt,4u);
        }
        case 0x8C01u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C03u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8C03u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C04u; return dd3_static_complete(rt,2u);
        }
        case 0x8C04u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8C06u,0x8C07u)) c++; rt->state.cpu.pc=0x8C07u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C06u; return dd3_static_complete(rt,2u);
        }
        case 0x8C06u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8C07u; return dd3_static_complete(rt,2u);
        }
        case 0x8C07u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C08u; return dd3_static_complete(rt,2u);
        }
        case 0x8C08u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8C0Au,0x8C0Bu)) c++; rt->state.cpu.pc=0x8C0Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C0Au; return dd3_static_complete(rt,2u);
        }
        case 0x8C0Au: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8C0Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8C0Bu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8C0Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8C0Cu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8C0Du; return dd3_static_complete(rt,2u);
        }
        case 0x8C0Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C0Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8C0Fu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8C10u; return dd3_static_complete(rt,2u);
        }
        case 0x8C10u: {
            uint8_t v=0x20u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8C12u; return dd3_static_complete(rt,2u);
        }
        case 0x8C12u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C14u; return dd3_static_complete(rt,3u);
        }
        case 0x8C14u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8C15u; return dd3_static_complete(rt,2u);
        }
        case 0x8C15u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C17u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8C17u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8C19u; return dd3_static_complete(rt,2u);
        }
        case 0x8C19u: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C1Bu; return dd3_static_complete(rt,3u);
        }
        case 0x8C1Bu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C1Du; return dd3_static_complete(rt,3u);
        }
        case 0x8C1Du: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8C1Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8C1Eu: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8C20u; return dd3_static_complete(rt,3u);
        }
        case 0x8C20u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C22u; return dd3_static_complete(rt,3u);
        }
        case 0x8C22u: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8C24u; return dd3_static_complete(rt,3u);
        }
        case 0x8C24u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8C26u,0x8C8Du)) c++; rt->state.cpu.pc=0x8C8Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C26u; return dd3_static_complete(rt,2u);
        }
        case 0x8C26u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8C27u; return dd3_static_complete(rt,2u);
        }
        case 0x8C27u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C29u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8C29u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8C2Au; return dd3_static_complete(rt,2u);
        }
        case 0x8C2Au: {
            uint8_t v=0x20u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8C2Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8C2Cu: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C2Eu; return dd3_static_complete(rt,3u);
        }
        case 0x8C2Eu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8C2Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8C2Fu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C31u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8C31u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8C33u; return dd3_static_complete(rt,2u);
        }
        case 0x8C33u: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C35u; return dd3_static_complete(rt,3u);
        }
        case 0x8C35u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C37u; return dd3_static_complete(rt,3u);
        }
        case 0x8C37u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8C38u; return dd3_static_complete(rt,2u);
        }
        case 0x8C38u: {
            uint8_t v=0xFFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8C3Au; return dd3_static_complete(rt,2u);
        }
        case 0x8C3Au: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C3Cu; return dd3_static_complete(rt,3u);
        }
        case 0x8C3Cu: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C3Eu; return dd3_static_complete(rt,3u);
        }
        case 0x8C3Eu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8C40u; return dd3_static_complete(rt,2u);
        }
        case 0x8C40u: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C42u; return dd3_static_complete(rt,3u);
        }
        case 0x8C42u: {
            uint16_t ea=0xB5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C44u; return dd3_static_complete(rt,3u);
        }
        case 0x8C44u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8C45u; return dd3_static_complete(rt,2u);
        }
        case 0x8C45u: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8C47u; return dd3_static_complete(rt,3u);
        }
        case 0x8C47u: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C49u; return dd3_static_complete(rt,3u);
        }
        case 0x8C49u: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8C4Bu; return dd3_static_complete(rt,3u);
        }
        case 0x8C4Bu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8C4Du,0x8C8Du)) c++; rt->state.cpu.pc=0x8C8Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C4Du; return dd3_static_complete(rt,2u);
        }
        case 0x8C4Du: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8C4Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8C4Eu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C50u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8C50u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C52u; return dd3_static_complete(rt,3u);
        }
        case 0x8C52u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8C53u; return dd3_static_complete(rt,2u);
        }
        case 0x8C53u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C55u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8C55u: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C57u; return dd3_static_complete(rt,3u);
        }
        case 0x8C57u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8C58u; return dd3_static_complete(rt,2u);
        }
        case 0x8C58u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C5Au; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8C5Au: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8C5Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8C5Bu: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8C5Du; return dd3_static_complete(rt,3u);
        }
        case 0x8C5Du: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C5Fu; return dd3_static_complete(rt,3u);
        }
        case 0x8C5Fu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8C60u; return dd3_static_complete(rt,2u);
        }
        case 0x8C60u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C62u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8C62u: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8C64u; return dd3_static_complete(rt,3u);
        }
        case 0x8C64u: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C66u; return dd3_static_complete(rt,3u);
        }
        case 0x8C66u: {
            uint8_t v=0x50u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C68u; return dd3_static_complete(rt,2u);
        }
        case 0x8C68u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8C69u; return dd3_static_complete(rt,2u);
        }
        case 0x8C69u: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8C6Bu; return dd3_static_complete(rt,3u);
        }
        case 0x8C6Bu: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C6Du; return dd3_static_complete(rt,3u);
        }
        case 0x8C6Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C6Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8C6Fu: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8C71u; return dd3_static_complete(rt,3u);
        }
        case 0x8C71u: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C73u; return dd3_static_complete(rt,3u);
        }
        case 0x8C73u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C75u; return dd3_static_complete(rt,3u);
        }
        case 0x8C75u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8C76u; return dd3_static_complete(rt,2u);
        }
        case 0x8C76u: {
            uint8_t v=0xFFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8C78u; return dd3_static_complete(rt,2u);
        }
        case 0x8C78u: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C7Au; return dd3_static_complete(rt,3u);
        }
        case 0x8C7Au: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C7Cu; return dd3_static_complete(rt,3u);
        }
        case 0x8C7Cu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8C7Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8C7Eu: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C80u; return dd3_static_complete(rt,3u);
        }
        case 0x8C80u: {
            uint16_t ea=0xB5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C82u; return dd3_static_complete(rt,3u);
        }
        case 0x8C82u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8C83u; return dd3_static_complete(rt,2u);
        }
        case 0x8C83u: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8C85u; return dd3_static_complete(rt,3u);
        }
        case 0x8C85u: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C87u; return dd3_static_complete(rt,3u);
        }
        case 0x8C87u: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8C89u; return dd3_static_complete(rt,3u);
        }
        case 0x8C89u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8C8Bu,0x8C8Du)) c++; rt->state.cpu.pc=0x8C8Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C8Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8C8Bu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8C8Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8C8Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8C8Du: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8C8Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8C8Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8C8Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8C91u>>8)); dd3_static_push8(rt,(uint8_t)0x8C91u);
            rt->state.cpu.pc=0x9A06u; return dd3_static_complete(rt,6u);
        }
        case 0x8C92u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C94u; return dd3_static_complete(rt,2u);
        }
        case 0x8C94u: {
            dd3_static_write8(rt,0x030Au,rt->state.cpu.y);
            rt->state.cpu.pc=0x8C97u; return dd3_static_complete(rt,4u);
        }
        case 0x8C97u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C99u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8C99u: {
            dd3_static_write8(rt,(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8C9Bu; return dd3_static_complete(rt,4u);
        }
        case 0x8C9Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C9Du; return dd3_static_complete(rt,2u);
        }
        case 0x8C9Du: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C9Fu; return dd3_static_complete(rt,3u);
        }
        case 0x8C9Fu: {
            uint16_t ea=0x00F8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CA2u; return dd3_static_complete(rt,4u);
        }
        case 0x8CA2u: {
            dd3_static_push8(rt,(uint8_t)(0x8CA4u>>8)); dd3_static_push8(rt,(uint8_t)0x8CA4u);
            rt->state.cpu.pc=0x9A28u; return dd3_static_complete(rt,6u);
        }
        case 0x8CA5u: {
            uint16_t ea=0x00F7u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8CA8u; return dd3_static_complete(rt,6u);
        }
        case 0x8CA8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8CA9u: {
            uint16_t ea=0x3Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CABu; return dd3_static_complete(rt,3u);
        }
        case 0x8CABu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8CADu,0x8CC4u)) c++; rt->state.cpu.pc=0x8CC4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8CADu; return dd3_static_complete(rt,2u);
        }
        case 0x8CADu: {
            uint16_t ea=0x3Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CAFu; return dd3_static_complete(rt,3u);
        }
        case 0x8CAFu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8CB1u,0x8CC4u)) c++; rt->state.cpu.pc=0x8CC4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8CB1u; return dd3_static_complete(rt,2u);
        }
        case 0x8CB1u: {
            uint16_t ea=0x86u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CB3u; return dd3_static_complete(rt,3u);
        }
        case 0x8CB3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8CB5u,0x8CBEu)) c++; rt->state.cpu.pc=0x8CBEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8CB5u; return dd3_static_complete(rt,2u);
        }
        case 0x8CB5u: {
            uint16_t ea=0x86u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8CB7u; return dd3_static_complete(rt,5u);
        }
        case 0x8CB7u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CB9u; return dd3_static_complete(rt,2u);
        }
        case 0x8CB9u: {
            dd3_static_write8(rt,0x3Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8CBBu; return dd3_static_complete(rt,3u);
        }
        case 0x8CBBu: {
            dd3_static_write8(rt,0x3Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8CBDu; return dd3_static_complete(rt,3u);
        }
        case 0x8CBDu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8CBEu: {
            uint16_t ea=0x00F5u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8CC1u; return dd3_static_complete(rt,6u);
        }
        case 0x8CC1u: {
            dd3_static_push8(rt,(uint8_t)(0x8CC3u>>8)); dd3_static_push8(rt,(uint8_t)0x8CC3u);
            rt->state.cpu.pc=0x9719u; return dd3_static_complete(rt,6u);
        }
        case 0x8CC4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8CC5u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CC7u; return dd3_static_complete(rt,2u);
        }
        case 0x8CC7u: {
            uint16_t ea=(uint16_t)((0x3Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CC9u; return dd3_static_complete(rt,4u);
        }
        case 0x8CC9u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8CCBu,0x8CD2u)) c++; rt->state.cpu.pc=0x8CD2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8CCBu; return dd3_static_complete(rt,2u);
        }
        case 0x8CCBu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8CCCu; return dd3_static_complete(rt,2u);
        }
        case 0x8CCCu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8CCEu; return dd3_static_complete(rt,2u);
        }
        case 0x8CCEu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8CD0u,0x8CC7u)) c++; rt->state.cpu.pc=0x8CC7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8CD0u; return dd3_static_complete(rt,2u);
        }
        case 0x8CD0u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8CD1u; return dd3_static_complete(rt,2u);
        }
        case 0x8CD1u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8CD2u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8CD3u; return dd3_static_complete(rt,2u);
        }
        case 0x8CD3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8CD4u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CD6u; return dd3_static_complete(rt,2u);
        }
        case 0x8CD6u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CD8u; return dd3_static_complete(rt,4u);
        }
        case 0x8CD8u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8CDAu,0x8CDCu)) c++; rt->state.cpu.pc=0x8CDCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8CDAu; return dd3_static_complete(rt,2u);
        }
        case 0x8CDAu: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CDCu; return dd3_static_complete(rt,2u);
        }
        case 0x8CDCu: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CDEu; return dd3_static_complete(rt,3u);
        }
        case 0x8CDEu: {
            uint8_t v=0xC0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8CE0u; return dd3_static_complete(rt,2u);
        }
        case 0x8CE0u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8CE2u,0x8CE7u)) c++; rt->state.cpu.pc=0x8CE7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8CE2u; return dd3_static_complete(rt,2u);
        }
        case 0x8CE2u: {
            uint16_t ea=0x04CCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CE5u; return dd3_static_complete(rt,4u);
        }
        case 0x8CE5u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8CE7u,0x8CEAu)) c++; rt->state.cpu.pc=0x8CEAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8CE7u; return dd3_static_complete(rt,2u);
        }
        case 0x8CE7u: {
            rt->state.cpu.pc=0x8D62u; return dd3_static_complete(rt,3u);
        }
        case 0x8CEAu: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CECu; return dd3_static_complete(rt,4u);
        }
        case 0x8CECu: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8CEEu; return dd3_static_complete(rt,2u);
        }
        case 0x8CEEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8CF0u,0x8D34u)) c++; rt->state.cpu.pc=0x8D34u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8CF0u; return dd3_static_complete(rt,2u);
        }
        case 0x8CF0u: {
            uint16_t ea=0x04CDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CF3u; return dd3_static_complete(rt,4u);
        }
        case 0x8CF3u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8CF5u,0x8D57u)) c++; rt->state.cpu.pc=0x8D57u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8CF5u; return dd3_static_complete(rt,2u);
        }
        case 0x8CF5u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CF7u; return dd3_static_complete(rt,2u);
        }
        case 0x8CF7u: {
            dd3_static_write8(rt,0x44u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8CF9u; return dd3_static_complete(rt,3u);
        }
        case 0x8CF9u: {
            dd3_static_write8(rt,0x45u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8CFBu; return dd3_static_complete(rt,3u);
        }
        case 0x8CFBu: {
            uint8_t v=0x74u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CFDu; return dd3_static_complete(rt,2u);
        }
        case 0x8CFDu: {
            dd3_static_write8(rt,0x00CBu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D00u; return dd3_static_complete(rt,4u);
        }
        case 0x8D00u: {
            dd3_static_write8(rt,0x00CCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D03u; return dd3_static_complete(rt,4u);
        }
        case 0x8D03u: {
            uint16_t ea=0x00F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D06u; return dd3_static_complete(rt,4u);
        }
        case 0x8D06u: {
            uint16_t ea=(uint16_t)(0x8D63u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D09u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8D63u,ea)?1u:0u));
        }
        case 0x8D09u: {
            dd3_static_write8(rt,0x00DFu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D0Cu; return dd3_static_complete(rt,4u);
        }
        case 0x8D0Cu: {
            dd3_static_write8(rt,0x00E0u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D0Fu; return dd3_static_complete(rt,4u);
        }
        case 0x8D0Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D11u; return dd3_static_complete(rt,2u);
        }
        case 0x8D11u: {
            dd3_static_write8(rt,0x00E9u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D14u; return dd3_static_complete(rt,4u);
        }
        case 0x8D14u: {
            dd3_static_write8(rt,0x00EAu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D17u; return dd3_static_complete(rt,4u);
        }
        case 0x8D17u: {
            uint16_t ea=0x0382u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8D1Au; return dd3_static_complete(rt,6u);
        }
        case 0x8D1Au: {
            uint16_t ea=0x0383u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8D1Du; return dd3_static_complete(rt,6u);
        }
        case 0x8D1Du: {
            uint8_t v=0x37u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D1Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8D1Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8D21u>>8)); dd3_static_push8(rt,(uint8_t)0x8D21u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0x8D22u: {
            dd3_static_push8(rt,(uint8_t)(0x8D24u>>8)); dd3_static_push8(rt,(uint8_t)0x8D24u);
            rt->state.cpu.pc=0x9A06u; return dd3_static_complete(rt,6u);
        }
        case 0x8D25u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D27u; return dd3_static_complete(rt,2u);
        }
        case 0x8D27u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D29u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8D29u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D2Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8D2Bu: {
            dd3_static_write8(rt,0x04CCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D2Eu; return dd3_static_complete(rt,4u);
        }
        case 0x8D2Eu: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D30u; return dd3_static_complete(rt,2u);
        }
        case 0x8D30u: {
            dd3_static_write8(rt,0x04CDu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D33u; return dd3_static_complete(rt,4u);
        }
        case 0x8D33u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8D34u: {
            uint16_t ea=0x4Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D36u; return dd3_static_complete(rt,3u);
        }
        case 0x8D36u: {
            uint8_t v=0xFBu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D38u; return dd3_static_complete(rt,2u);
        }
        case 0x8D38u: {
            dd3_static_write8(rt,0x4Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D3Au; return dd3_static_complete(rt,3u);
        }
        case 0x8D3Au: {
            uint16_t ea=0x4Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D3Cu; return dd3_static_complete(rt,3u);
        }
        case 0x8D3Cu: {
            uint8_t v=0xFBu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D3Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8D3Eu: {
            dd3_static_write8(rt,0x4Du,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D40u; return dd3_static_complete(rt,3u);
        }
        case 0x8D40u: {
            uint8_t v=0x37u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D42u; return dd3_static_complete(rt,2u);
        }
        case 0x8D42u: {
            dd3_static_push8(rt,(uint8_t)(0x8D44u>>8)); dd3_static_push8(rt,(uint8_t)0x8D44u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0x8D45u: {
            dd3_static_push8(rt,(uint8_t)(0x8D47u>>8)); dd3_static_push8(rt,(uint8_t)0x8D47u);
            rt->state.cpu.pc=0x9A06u; return dd3_static_complete(rt,6u);
        }
        case 0x8D48u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D4Au; return dd3_static_complete(rt,2u);
        }
        case 0x8D4Au: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D4Cu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8D4Cu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D4Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8D4Eu: {
            dd3_static_write8(rt,0x04CCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D51u; return dd3_static_complete(rt,4u);
        }
        case 0x8D51u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D53u; return dd3_static_complete(rt,2u);
        }
        case 0x8D53u: {
            dd3_static_write8(rt,0x04CDu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D56u; return dd3_static_complete(rt,4u);
        }
        case 0x8D56u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8D57u: {
            uint8_t v=0xFBu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D59u; return dd3_static_complete(rt,2u);
        }
        case 0x8D59u: {
            dd3_static_push8(rt,(uint8_t)(0x8D5Bu>>8)); dd3_static_push8(rt,(uint8_t)0x8D5Bu);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0x8D5Cu: {
            uint16_t ea=0x00F5u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8D5Fu; return dd3_static_complete(rt,6u);
        }
        case 0x8D5Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8D61u>>8)); dd3_static_push8(rt,(uint8_t)0x8D61u);
            rt->state.cpu.pc=0x9719u; return dd3_static_complete(rt,6u);
        }
        case 0x8D62u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8D6Au: {
            uint16_t ea=0x04CCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D6Du; return dd3_static_complete(rt,4u);
        }
        case 0x8D6Du: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8D6Fu,0x8D7Bu)) c++; rt->state.cpu.pc=0x8D7Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8D6Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8D6Fu: {
            uint16_t ea=0x04FFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D72u; return dd3_static_complete(rt,4u);
        }
        case 0x8D72u: {
            dd3_static_write8(rt,0x04FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D75u; return dd3_static_complete(rt,4u);
        }
        case 0x8D75u: {
            uint16_t ea=0x00F5u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8D78u; return dd3_static_complete(rt,6u);
        }
        case 0x8D78u: {
            dd3_static_push8(rt,(uint8_t)(0x8D7Au>>8)); dd3_static_push8(rt,(uint8_t)0x8D7Au);
            rt->state.cpu.pc=0x9719u; return dd3_static_complete(rt,6u);
        }
        case 0x8D7Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8D7Cu: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D7Eu; return dd3_static_complete(rt,3u);
        }
        case 0x8D7Eu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8D80u,0x8D97u)) c++; rt->state.cpu.pc=0x8D97u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8D80u; return dd3_static_complete(rt,2u);
        }
        case 0x8D80u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D82u; return dd3_static_complete(rt,3u);
        }
        case 0x8D82u: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D84u; return dd3_static_complete(rt,3u);
        }
        case 0x8D84u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8D86u,0x8D97u)) c++; rt->state.cpu.pc=0x8D97u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8D86u; return dd3_static_complete(rt,2u);
        }
        case 0x8D86u: {
            dd3_static_push8(rt,(uint8_t)(0x8D88u>>8)); dd3_static_push8(rt,(uint8_t)0x8D88u);
            rt->state.cpu.pc=0x9A06u; return dd3_static_complete(rt,6u);
        }
        case 0x8D89u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D8Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8D8Bu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D8Du; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8D8Du: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8D8Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8D8Eu: {
            uint16_t ea=0x00F5u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8D91u; return dd3_static_complete(rt,4u);
        }
        case 0x8D91u: {
            dd3_static_write8(rt,0x00F5u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D94u; return dd3_static_complete(rt,4u);
        }
        case 0x8D94u: {
            rt->state.cpu.pc=0x9719u; return dd3_static_complete(rt,3u);
        }
        case 0x8D97u: {
            rt->state.cpu.pc=0x89FCu; return dd3_static_complete(rt,3u);
        }
        case 0x8D9Au: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D9Cu; return dd3_static_complete(rt,3u);
        }
        case 0x8D9Cu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8D9Du; return dd3_static_complete(rt,2u);
        }
        case 0x8D9Du: {
            uint8_t v=0x70u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8D9Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8D9Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8DA1u,0x8DAFu)) c++; rt->state.cpu.pc=0x8DAFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8DA1u; return dd3_static_complete(rt,2u);
        }
        case 0x8DA1u: {
            uint16_t ea=0x0693u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DA4u; return dd3_static_complete(rt,4u);
        }
        case 0x8DA4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8DA6u,0x8DAFu)) c++; rt->state.cpu.pc=0x8DAFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8DA6u; return dd3_static_complete(rt,2u);
        }
        case 0x8DA6u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DA8u; return dd3_static_complete(rt,2u);
        }
        case 0x8DA8u: {
            dd3_static_write8(rt,0x3Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DAAu; return dd3_static_complete(rt,3u);
        }
        case 0x8DAAu: {
            dd3_static_write8(rt,0x3Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DACu; return dd3_static_complete(rt,3u);
        }
        case 0x8DACu: {
            rt->state.cpu.pc=0x89FCu; return dd3_static_complete(rt,3u);
        }
        case 0x8DAFu: {
            uint16_t ea=0x0693u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DB2u; return dd3_static_complete(rt,4u);
        }
        case 0x8DB2u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8DB4u; return dd3_static_complete(rt,2u);
        }
        case 0x8DB4u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8DB6u,0x8DBAu)) c++; rt->state.cpu.pc=0x8DBAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8DB6u; return dd3_static_complete(rt,2u);
        }
        case 0x8DB6u: {
            dd3_static_push8(rt,(uint8_t)(0x8DB8u>>8)); dd3_static_push8(rt,(uint8_t)0x8DB8u);
            rt->state.cpu.pc=0xB93Bu; return dd3_static_complete(rt,6u);
        }
        case 0x8DB9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8DBAu: {
            uint16_t ea=0x0693u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8DBDu; return dd3_static_complete(rt,6u);
        }
        case 0x8DBDu: {
            uint8_t v=0x84u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DBFu; return dd3_static_complete(rt,2u);
        }
        case 0x8DBFu: {
            dd3_static_write8(rt,0x3Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DC1u; return dd3_static_complete(rt,3u);
        }
        case 0x8DC1u: {
            dd3_static_write8(rt,0x3Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DC3u; return dd3_static_complete(rt,3u);
        }
        case 0x8DC3u: {
            uint8_t v=0x15u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DC5u; return dd3_static_complete(rt,2u);
        }
        case 0x8DC5u: {
            dd3_static_write8(rt,0x0076u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DC8u; return dd3_static_complete(rt,4u);
        }
        case 0x8DC8u: {
            dd3_static_write8(rt,0x0077u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DCBu; return dd3_static_complete(rt,4u);
        }
        case 0x8DCBu: {
            uint8_t v=0x5Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DCDu; return dd3_static_complete(rt,2u);
        }
        case 0x8DCDu: {
            dd3_static_write8(rt,0x46u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DCFu; return dd3_static_complete(rt,3u);
        }
        case 0x8DCFu: {
            dd3_static_write8(rt,0x47u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DD1u; return dd3_static_complete(rt,3u);
        }
        case 0x8DD1u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DD3u; return dd3_static_complete(rt,2u);
        }
        case 0x8DD3u: {
            dd3_static_write8(rt,0x0309u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DD6u; return dd3_static_complete(rt,4u);
        }
        case 0x8DD6u: {
            dd3_static_write8(rt,0x030Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DD9u; return dd3_static_complete(rt,4u);
        }
        case 0x8DD9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8E31u: {
            uint16_t ea=0x36u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E33u; return dd3_static_complete(rt,3u);
        }
        case 0x8E33u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8E35u,0x8E49u)) c++; rt->state.cpu.pc=0x8E49u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8E35u; return dd3_static_complete(rt,2u);
        }
        case 0x8E35u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E37u; return dd3_static_complete(rt,3u);
        }
        case 0x8E37u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8E39u,0x8E3Fu)) c++; rt->state.cpu.pc=0x8E3Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8E39u; return dd3_static_complete(rt,2u);
        }
        case 0x8E39u: {
            uint16_t ea=0x44u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E3Bu; return dd3_static_complete(rt,3u);
        }
        case 0x8E3Bu: {
            uint8_t v=0x80u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8E3Du; return dd3_static_complete(rt,2u);
        }
        case 0x8E3Du: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8E3Fu,0x8E4Cu)) c++; rt->state.cpu.pc=0x8E4Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8E3Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8E3Fu: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E41u; return dd3_static_complete(rt,3u);
        }
        case 0x8E41u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8E43u,0x8E49u)) c++; rt->state.cpu.pc=0x8E49u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8E43u; return dd3_static_complete(rt,2u);
        }
        case 0x8E43u: {
            uint16_t ea=0x45u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E45u; return dd3_static_complete(rt,3u);
        }
        case 0x8E45u: {
            uint8_t v=0x80u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8E47u; return dd3_static_complete(rt,2u);
        }
        case 0x8E47u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8E49u,0x8E4Cu)) c++; rt->state.cpu.pc=0x8E4Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8E49u; return dd3_static_complete(rt,2u);
        }
        case 0x8E49u: {
            rt->state.cpu.pc=0x89FCu; return dd3_static_complete(rt,3u);
        }
        case 0x8E4Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8E78u: {
            uint16_t ea=0x46u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E7Au; return dd3_static_complete(rt,3u);
        }
        case 0x8E7Au: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8E7Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8E7Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8E7Eu,0x8E84u)) c++; rt->state.cpu.pc=0x8E84u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8E7Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8E7Eu: {
            uint16_t ea=0x72u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E80u; return dd3_static_complete(rt,3u);
        }
        case 0x8E80u: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8E82u; return dd3_static_complete(rt,2u);
        }
        case 0x8E82u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8E84u,0x8E87u)) c++; rt->state.cpu.pc=0x8E87u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8E84u; return dd3_static_complete(rt,2u);
        }
        case 0x8E84u: {
            rt->state.cpu.pc=0x89FCu; return dd3_static_complete(rt,3u);
        }
        case 0x8E87u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8E88u: {
            uint16_t ea=0xB0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E8Au; return dd3_static_complete(rt,3u);
        }
        case 0x8E8Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8E8Cu,0x8E97u)) c++; rt->state.cpu.pc=0x8E97u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8E8Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8E8Cu: {
            uint16_t ea=0x3Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E8Eu; return dd3_static_complete(rt,3u);
        }
        case 0x8E8Eu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8E90u,0x8E96u)) c++; rt->state.cpu.pc=0x8E96u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8E90u; return dd3_static_complete(rt,2u);
        }
        case 0x8E90u: {
            uint8_t v=0x4Du;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E92u; return dd3_static_complete(rt,2u);
        }
        case 0x8E92u: {
            dd3_static_write8(rt,0x46u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E94u; return dd3_static_complete(rt,3u);
        }
        case 0x8E94u: {
            uint16_t ea=0xB0u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8E96u; return dd3_static_complete(rt,5u);
        }
        case 0x8E96u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8E97u: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E99u; return dd3_static_complete(rt,2u);
        }
        case 0x8E99u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E9Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8E9Bu: {
            dd3_static_push8(rt,(uint8_t)(0x8E9Du>>8)); dd3_static_push8(rt,(uint8_t)0x8E9Du);
            rt->state.cpu.pc=0x9F28u; return dd3_static_complete(rt,6u);
        }
        case 0x8E9Eu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8EA0u,0x8EA4u)) c++; rt->state.cpu.pc=0x8EA4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8EA0u; return dd3_static_complete(rt,2u);
        }
        case 0x8EA0u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8EA1u; return dd3_static_complete(rt,2u);
        }
        case 0x8EA1u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8EA3u,0x8E99u)) c++; rt->state.cpu.pc=0x8E99u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8EA3u; return dd3_static_complete(rt,2u);
        }
        case 0x8EA3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8EA4u: {
            uint16_t ea=0xB0u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8EA6u; return dd3_static_complete(rt,5u);
        }
        case 0x8EA6u: {
            rt->state.cpu.pc=0x89FCu; return dd3_static_complete(rt,3u);
        }
        case 0x8EA9u: {
            uint16_t ea=0xB0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EABu; return dd3_static_complete(rt,3u);
        }
        case 0x8EABu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8EADu,0x8EBEu)) c++; rt->state.cpu.pc=0x8EBEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8EADu; return dd3_static_complete(rt,2u);
        }
        case 0x8EADu: {
            dd3_static_push8(rt,(uint8_t)(0x8EAFu>>8)); dd3_static_push8(rt,(uint8_t)0x8EAFu);
            rt->state.cpu.pc=0x9A06u; return dd3_static_complete(rt,6u);
        }
        case 0x8EB0u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EB2u; return dd3_static_complete(rt,2u);
        }
        case 0x8EB2u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EB4u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x8EB4u: {
            dd3_static_push8(rt,(uint8_t)(0x8EB6u>>8)); dd3_static_push8(rt,(uint8_t)0x8EB6u);
            rt->state.cpu.pc=0x8EE6u; return dd3_static_complete(rt,6u);
        }
        case 0x8EB7u: {
            uint16_t ea=0xB0u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8EB9u; return dd3_static_complete(rt,5u);
        }
        case 0x8EB9u: {
            uint8_t v=0x75u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EBBu; return dd3_static_complete(rt,2u);
        }
        case 0x8EBBu: {
            dd3_static_write8(rt,0xFAu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EBDu; return dd3_static_complete(rt,3u);
        }
        case 0x8EBDu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8EBEu: {
            uint16_t ea=0xFAu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8EC0u; return dd3_static_complete(rt,5u);
        }
        case 0x8EC0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8EC2u,0x8EE5u)) c++; rt->state.cpu.pc=0x8EE5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8EC2u; return dd3_static_complete(rt,2u);
        }
        case 0x8EC2u: {
            uint16_t ea=0xB1u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EC4u; return dd3_static_complete(rt,3u);
        }
        case 0x8EC4u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8EC6u,0x8EE2u)) c++; rt->state.cpu.pc=0x8EE2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8EC6u; return dd3_static_complete(rt,2u);
        }
        case 0x8EC6u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EC8u; return dd3_static_complete(rt,3u);
        }
        case 0x8EC8u: {
            uint8_t v=0xF7u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8ECAu; return dd3_static_complete(rt,2u);
        }
        case 0x8ECAu: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8ECCu; return dd3_static_complete(rt,3u);
        }
        case 0x8ECCu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8ECEu; return dd3_static_complete(rt,2u);
        }
        case 0x8ECEu: {
            dd3_static_write8(rt,0x04D1u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8ED1u; return dd3_static_complete(rt,4u);
        }
        case 0x8ED1u: {
            dd3_static_push8(rt,(uint8_t)(0x8ED3u>>8)); dd3_static_push8(rt,(uint8_t)0x8ED3u);
            rt->state.cpu.pc=0xFCB1u; return dd3_static_complete(rt,6u);
        }
        case 0x8ED4u: {
            uint16_t ea=0x76u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8ED6u; return dd3_static_complete(rt,3u);
        }
        case 0x8ED6u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8ED8u; return dd3_static_complete(rt,2u);
        }
        case 0x8ED8u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8EDAu,0x8EE2u)) c++; rt->state.cpu.pc=0x8EE2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8EDAu; return dd3_static_complete(rt,2u);
        }
        case 0x8EDAu: {
            uint16_t ea=0xB2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EDCu; return dd3_static_complete(rt,3u);
        }
        case 0x8EDCu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EDEu; return dd3_static_complete(rt,2u);
        }
        case 0x8EDEu: {
            dd3_static_write8(rt,0x46u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EE0u; return dd3_static_complete(rt,3u);
        }
        case 0x8EE0u: {
            dd3_static_write8(rt,0xB2u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EE2u; return dd3_static_complete(rt,3u);
        }
        case 0x8EE2u: {
            rt->state.cpu.pc=0x89FCu; return dd3_static_complete(rt,3u);
        }
        case 0x8EE5u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8EE6u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EE7u; return dd3_static_complete(rt,2u);
        }
        case 0x8EE7u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EE8u; return dd3_static_complete(rt,2u);
        }
        case 0x8EE8u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EE9u; return dd3_static_complete(rt,2u);
        }
        case 0x8EE9u: {
            dd3_static_write8(rt,0xFDu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EEBu; return dd3_static_complete(rt,3u);
        }
        case 0x8EEBu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EEDu; return dd3_static_complete(rt,2u);
        }
        case 0x8EEDu: {
            dd3_static_write8(rt,0xFBu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EEFu; return dd3_static_complete(rt,3u);
        }
        case 0x8EEFu: {
            dd3_static_write8(rt,0xFCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EF1u; return dd3_static_complete(rt,3u);
        }
        case 0x8EF1u: {
            dd3_static_push8(rt,(uint8_t)(0x8EF3u>>8)); dd3_static_push8(rt,(uint8_t)0x8EF3u);
            rt->state.cpu.pc=0x8F0Cu; return dd3_static_complete(rt,6u);
        }
        case 0x8EF4u: {
            uint16_t ea=0xFBu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EF6u; return dd3_static_complete(rt,3u);
        }
        case 0x8EF6u: {
            uint8_t v=0x07u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8EF8u; return dd3_static_complete(rt,2u);
        }
        case 0x8EF8u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8EFAu,0x8EF1u)) c++; rt->state.cpu.pc=0x8EF1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8EFAu; return dd3_static_complete(rt,2u);
        }
        case 0x8EFAu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EFCu; return dd3_static_complete(rt,2u);
        }
        case 0x8EFCu: {
            dd3_static_write8(rt,0xFBu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EFEu; return dd3_static_complete(rt,3u);
        }
        case 0x8EFEu: {
            uint8_t v=0x22u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F00u; return dd3_static_complete(rt,2u);
        }
        case 0x8F00u: {
            dd3_static_write8(rt,0xFCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F02u; return dd3_static_complete(rt,3u);
        }
        case 0x8F02u: {
            dd3_static_push8(rt,(uint8_t)(0x8F04u>>8)); dd3_static_push8(rt,(uint8_t)0x8F04u);
            rt->state.cpu.pc=0x8F46u; return dd3_static_complete(rt,6u);
        }
        case 0x8F05u: {
            uint16_t ea=0xFBu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F07u; return dd3_static_complete(rt,3u);
        }
        case 0x8F07u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8F09u; return dd3_static_complete(rt,2u);
        }
        case 0x8F09u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8F0Bu,0x8F02u)) c++; rt->state.cpu.pc=0x8F02u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8F0Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8F0Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8F0Cu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F0Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8F0Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8F10u>>8)); dd3_static_push8(rt,(uint8_t)0x8F10u);
            rt->state.cpu.pc=0xD97Cu; return dd3_static_complete(rt,6u);
        }
        case 0x8F11u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8F13u,0x8F0Cu)) c++; rt->state.cpu.pc=0x8F0Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8F13u; return dd3_static_complete(rt,2u);
        }
        case 0x8F13u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F16u; return dd3_static_complete(rt,4u);
        }
        case 0x8F16u: {
            uint8_t v=0x23u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F18u; return dd3_static_complete(rt,2u);
        }
        case 0x8F18u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8F1Bu; return dd3_static_complete(rt,5u);
        }
        case 0x8F1Bu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8F1Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8F1Cu: {
            uint16_t ea=0xFCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F1Eu; return dd3_static_complete(rt,3u);
        }
        case 0x8F1Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8F21u; return dd3_static_complete(rt,5u);
        }
        case 0x8F21u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8F22u; return dd3_static_complete(rt,2u);
        }
        case 0x8F22u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F24u; return dd3_static_complete(rt,2u);
        }
        case 0x8F24u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8F27u; return dd3_static_complete(rt,5u);
        }
        case 0x8F27u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8F28u; return dd3_static_complete(rt,2u);
        }
        case 0x8F28u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F2Au; return dd3_static_complete(rt,2u);
        }
        case 0x8F2Au: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8F2Du; return dd3_static_complete(rt,5u);
        }
        case 0x8F2Du: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8F2Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8F2Eu: {
            uint8_t v=0x20u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F30u; return dd3_static_complete(rt,2u);
        }
        case 0x8F30u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F32u; return dd3_static_complete(rt,2u);
        }
        case 0x8F32u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8F35u; return dd3_static_complete(rt,5u);
        }
        case 0x8F35u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8F36u; return dd3_static_complete(rt,2u);
        }
        case 0x8F36u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8F37u; return dd3_static_complete(rt,2u);
        }
        case 0x8F37u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8F39u,0x8F32u)) c++; rt->state.cpu.pc=0x8F32u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8F39u; return dd3_static_complete(rt,2u);
        }
        case 0x8F39u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0x8F3Cu; return dd3_static_complete(rt,4u);
        }
        case 0x8F3Cu: {
            uint16_t ea=0xFCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F3Eu; return dd3_static_complete(rt,3u);
        }
        case 0x8F3Eu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8F3Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8F3Fu: {
            uint8_t v=0x20u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8F41u; return dd3_static_complete(rt,2u);
        }
        case 0x8F41u: {
            dd3_static_write8(rt,0xFCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F43u; return dd3_static_complete(rt,3u);
        }
        case 0x8F43u: {
            uint16_t ea=0xFBu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8F45u; return dd3_static_complete(rt,5u);
        }
        case 0x8F45u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8F46u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F48u; return dd3_static_complete(rt,2u);
        }
        case 0x8F48u: {
            dd3_static_push8(rt,(uint8_t)(0x8F4Au>>8)); dd3_static_push8(rt,(uint8_t)0x8F4Au);
            rt->state.cpu.pc=0xD97Cu; return dd3_static_complete(rt,6u);
        }
        case 0x8F4Bu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8F4Du,0x8F46u)) c++; rt->state.cpu.pc=0x8F46u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8F4Du; return dd3_static_complete(rt,2u);
        }
        case 0x8F4Du: {
            uint16_t ea=0xFBu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F4Fu; return dd3_static_complete(rt,3u);
        }
        case 0x8F4Fu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F50u; return dd3_static_complete(rt,2u);
        }
        case 0x8F50u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8F51u; return dd3_static_complete(rt,2u);
        }
        case 0x8F51u: {
            uint16_t ea=0xFDu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8F53u; return dd3_static_complete(rt,3u);
        }
        case 0x8F53u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8F54u; return dd3_static_complete(rt,2u);
        }
        case 0x8F54u: {
            uint16_t ea=(uint16_t)(0x8F96u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F57u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8F96u,ea)?1u:0u));
        }
        case 0x8F57u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F59u; return dd3_static_complete(rt,3u);
        }
        case 0x8F59u: {
            uint16_t ea=(uint16_t)(0x8F97u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F5Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8F97u,ea)?1u:0u));
        }
        case 0x8F5Cu: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F5Eu; return dd3_static_complete(rt,3u);
        }
        case 0x8F5Eu: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F61u; return dd3_static_complete(rt,4u);
        }
        case 0x8F61u: {
            uint8_t v=0x23u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F63u; return dd3_static_complete(rt,2u);
        }
        case 0x8F63u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8F66u; return dd3_static_complete(rt,5u);
        }
        case 0x8F66u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8F67u; return dd3_static_complete(rt,2u);
        }
        case 0x8F67u: {
            uint16_t ea=0xFCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F69u; return dd3_static_complete(rt,3u);
        }
        case 0x8F69u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8F6Cu; return dd3_static_complete(rt,5u);
        }
        case 0x8F6Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8F6Du; return dd3_static_complete(rt,2u);
        }
        case 0x8F6Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F6Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8F6Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8F72u; return dd3_static_complete(rt,5u);
        }
        case 0x8F72u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8F73u; return dd3_static_complete(rt,2u);
        }
        case 0x8F73u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F75u; return dd3_static_complete(rt,2u);
        }
        case 0x8F75u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F77u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Du),ea)?1u:0u));
        }
        case 0x8F77u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8F7Au; return dd3_static_complete(rt,5u);
        }
        case 0x8F7Au: {
            dd3_static_write8(rt,0x21u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F7Cu; return dd3_static_complete(rt,3u);
        }
        case 0x8F7Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8F7Du; return dd3_static_complete(rt,2u);
        }
        case 0x8F7Du: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8F7Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8F7Eu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F80u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Du),ea)?1u:0u));
        }
        case 0x8F80u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8F83u; return dd3_static_complete(rt,5u);
        }
        case 0x8F83u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8F84u; return dd3_static_complete(rt,2u);
        }
        case 0x8F84u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8F85u; return dd3_static_complete(rt,2u);
        }
        case 0x8F85u: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8F87u; return dd3_static_complete(rt,5u);
        }
        case 0x8F87u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8F89u,0x8F7Eu)) c++; rt->state.cpu.pc=0x8F7Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8F89u; return dd3_static_complete(rt,2u);
        }
        case 0x8F89u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0x8F8Cu; return dd3_static_complete(rt,4u);
        }
        case 0x8F8Cu: {
            uint16_t ea=0xFCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F8Eu; return dd3_static_complete(rt,3u);
        }
        case 0x8F8Eu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8F8Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8F8Fu: {
            uint8_t v=0x20u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8F91u; return dd3_static_complete(rt,2u);
        }
        case 0x8F91u: {
            dd3_static_write8(rt,0xFCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F93u; return dd3_static_complete(rt,3u);
        }
        case 0x8F93u: {
            uint16_t ea=0xFBu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8F95u; return dd3_static_complete(rt,5u);
        }
        case 0x8F95u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x96BCu: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x96BEu; return dd3_static_complete(rt,3u);
        }
        case 0x96BEu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x96C0u,0x96DBu)) c++; rt->state.cpu.pc=0x96DBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x96C0u; return dd3_static_complete(rt,2u);
        }
        case 0x96C0u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x96C2u; return dd3_static_complete(rt,3u);
        }
        case 0x96C2u: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x96C4u; return dd3_static_complete(rt,3u);
        }
        case 0x96C4u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x96C6u,0x9706u)) c++; rt->state.cpu.pc=0x9706u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x96C6u; return dd3_static_complete(rt,2u);
        }
        case 0x96C6u: {
            dd3_static_push8(rt,(uint8_t)(0x96C8u>>8)); dd3_static_push8(rt,(uint8_t)0x96C8u);
            rt->state.cpu.pc=0x9707u; return dd3_static_complete(rt,6u);
        }
        case 0x96C9u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x96CBu,0x96E1u)) c++; rt->state.cpu.pc=0x96E1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x96CBu; return dd3_static_complete(rt,2u);
        }
        case 0x96CBu: {
            uint16_t ea=0x76u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x96CDu; return dd3_static_complete(rt,3u);
        }
        case 0x96CDu: {
            uint8_t v=0x15u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x96CFu; return dd3_static_complete(rt,2u);
        }
        case 0x96CFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x96D1u,0x96D7u)) c++; rt->state.cpu.pc=0x96D7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x96D1u; return dd3_static_complete(rt,2u);
        }
        case 0x96D1u: {
            uint16_t ea=0x72u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x96D3u; return dd3_static_complete(rt,3u);
        }
        case 0x96D3u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x96D5u; return dd3_static_complete(rt,2u);
        }
        case 0x96D5u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x96D7u,0x96DAu)) c++; rt->state.cpu.pc=0x96DAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x96D7u; return dd3_static_complete(rt,2u);
        }
        case 0x96D7u: {
            dd3_static_push8(rt,(uint8_t)(0x96D9u>>8)); dd3_static_push8(rt,(uint8_t)0x96D9u);
            rt->state.cpu.pc=0xF75Au; return dd3_static_complete(rt,6u);
        }
        case 0x96DAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x96DBu: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x96DDu; return dd3_static_complete(rt,3u);
        }
        case 0x96DDu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x96DFu,0x96C6u)) c++; rt->state.cpu.pc=0x96C6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x96DFu; return dd3_static_complete(rt,2u);
        }
        case 0x96DFu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x96E1u,0x9706u)) c++; rt->state.cpu.pc=0x9706u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x96E1u; return dd3_static_complete(rt,2u);
        }
        case 0x96E1u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x96E3u; return dd3_static_complete(rt,3u);
        }
        case 0x96E3u: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x96E5u; return dd3_static_complete(rt,3u);
        }
        case 0x96E5u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x96E7u,0x9706u)) c++; rt->state.cpu.pc=0x9706u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x96E7u; return dd3_static_complete(rt,2u);
        }
        case 0x96E7u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x96E9u; return dd3_static_complete(rt,3u);
        }
        case 0x96E9u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x96EBu; return dd3_static_complete(rt,2u);
        }
        case 0x96EBu: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0x96EDu; return dd3_static_complete(rt,3u);
        }
        case 0x96EDu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x96EFu; return dd3_static_complete(rt,3u);
        }
        case 0x96EFu: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x96F1u; return dd3_static_complete(rt,2u);
        }
        case 0x96F1u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0x96F3u; return dd3_static_complete(rt,3u);
        }
        case 0x96F3u: {
            uint16_t ea=0x00F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x96F6u; return dd3_static_complete(rt,4u);
        }
        case 0x96F6u: {
            uint16_t ea=(uint16_t)(0x9CBBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x96F9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9CBBu,ea)?1u:0u));
        }
        case 0x96F9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x96FBu,0x9701u)) c++; rt->state.cpu.pc=0x9701u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x96FBu; return dd3_static_complete(rt,2u);
        }
        case 0x96FBu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x96FDu; return dd3_static_complete(rt,3u);
        }
        case 0x96FDu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x96FFu; return dd3_static_complete(rt,2u);
        }
        case 0x96FFu: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9701u; return dd3_static_complete(rt,3u);
        }
        case 0x9701u: {
            uint8_t v=0x15u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9703u; return dd3_static_complete(rt,2u);
        }
        case 0x9703u: {
            dd3_static_push8(rt,(uint8_t)(0x9705u>>8)); dd3_static_push8(rt,(uint8_t)0x9705u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0x9706u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9707u: {
            uint8_t v=0x03u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9709u; return dd3_static_complete(rt,2u);
        }
        case 0x9709u: {
            uint16_t ea=(uint16_t)(0x04D3u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x970Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04D3u,ea)?1u:0u));
        }
        case 0x970Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x970Eu,0x9712u)) c++; rt->state.cpu.pc=0x9712u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x970Eu; return dd3_static_complete(rt,2u);
        }
        case 0x970Eu: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9710u; return dd3_static_complete(rt,2u);
        }
        case 0x9710u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9712u,0x9717u)) c++; rt->state.cpu.pc=0x9717u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9712u; return dd3_static_complete(rt,2u);
        }
        case 0x9712u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9713u; return dd3_static_complete(rt,2u);
        }
        case 0x9713u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9715u,0x9709u)) c++; rt->state.cpu.pc=0x9709u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9715u; return dd3_static_complete(rt,2u);
        }
        case 0x9715u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x9716u; return dd3_static_complete(rt,2u);
        }
        case 0x9716u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9717u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x9718u; return dd3_static_complete(rt,2u);
        }
        case 0x9718u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9719u: {
            dd3_static_push8(rt,(uint8_t)(0x971Bu>>8)); dd3_static_push8(rt,(uint8_t)0x971Bu);
            rt->state.cpu.pc=0x9A06u; return dd3_static_complete(rt,6u);
        }
        case 0x971Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x971Eu; return dd3_static_complete(rt,2u);
        }
        case 0x971Eu: {
            dd3_static_write8(rt,0x86u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9720u; return dd3_static_complete(rt,3u);
        }
        case 0x9720u: {
            uint16_t ea=0x36u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9722u; return dd3_static_complete(rt,3u);
        }
        case 0x9722u: {
            uint8_t v=0xF7u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9724u; return dd3_static_complete(rt,2u);
        }
        case 0x9724u: {
            dd3_static_write8(rt,0x36u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9726u; return dd3_static_complete(rt,3u);
        }
        case 0x9726u: {
            uint16_t ea=0x37u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9728u; return dd3_static_complete(rt,3u);
        }
        case 0x9728u: {
            uint8_t v=0xF7u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x972Au; return dd3_static_complete(rt,2u);
        }
        case 0x972Au: {
            dd3_static_write8(rt,0x37u,rt->state.cpu.a);
            rt->state.cpu.pc=0x972Cu; return dd3_static_complete(rt,3u);
        }
        case 0x972Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x972Eu; return dd3_static_complete(rt,2u);
        }
        case 0x972Eu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9730u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9730u: {
            dd3_static_write8(rt,0x00F6u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9733u; return dd3_static_complete(rt,4u);
        }
        case 0x9733u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9734u; return dd3_static_complete(rt,2u);
        }
        case 0x9734u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9735u; return dd3_static_complete(rt,2u);
        }
        case 0x9735u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9737u,0x9744u)) c++; rt->state.cpu.pc=0x9744u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9737u; return dd3_static_complete(rt,2u);
        }
        case 0x9737u: {
            uint16_t ea=(uint16_t)(0x978Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x973Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x978Cu,ea)?1u:0u));
        }
        case 0x973Au: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x973Cu; return dd3_static_complete(rt,3u);
        }
        case 0x973Cu: {
            uint16_t ea=(uint16_t)(0x978Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x973Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x978Du,ea)?1u:0u));
        }
        case 0x973Fu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9741u; return dd3_static_complete(rt,3u);
        }
        case 0x9741u: {
            rt->state.cpu.pc=0x974Eu; return dd3_static_complete(rt,3u);
        }
        case 0x9744u: {
            uint16_t ea=(uint16_t)(0x9758u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9747u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9758u,ea)?1u:0u));
        }
        case 0x9747u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9749u; return dd3_static_complete(rt,3u);
        }
        case 0x9749u: {
            uint16_t ea=(uint16_t)(0x9759u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x974Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9759u,ea)?1u:0u));
        }
        case 0x974Cu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x974Eu; return dd3_static_complete(rt,3u);
        }
        case 0x974Eu: {
            uint8_t v=0x97u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9750u; return dd3_static_complete(rt,2u);
        }
        case 0x9750u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9751u; return dd3_static_complete(rt,3u);
        }
        case 0x9751u: {
            uint8_t v=0x56u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9753u; return dd3_static_complete(rt,2u);
        }
        case 0x9753u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9754u; return dd3_static_complete(rt,3u);
        }
        case 0x9754u: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x0029u); return dd3_static_complete(rt,5u);
        }
        case 0x9757u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9790u: {
            dd3_static_push8(rt,(uint8_t)(0x9792u>>8)); dd3_static_push8(rt,(uint8_t)0x9792u);
            rt->state.cpu.pc=0x97C7u; return dd3_static_complete(rt,6u);
        }
        case 0x9793u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9795u; return dd3_static_complete(rt,2u);
        }
        case 0x9795u: {
            dd3_static_write8(rt,0x3Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9797u; return dd3_static_complete(rt,3u);
        }
        case 0x9797u: {
            dd3_static_write8(rt,0x3Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9799u; return dd3_static_complete(rt,3u);
        }
        case 0x9799u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x979Au: {
            dd3_static_push8(rt,(uint8_t)(0x979Cu>>8)); dd3_static_push8(rt,(uint8_t)0x979Cu);
            rt->state.cpu.pc=0x97B6u; return dd3_static_complete(rt,6u);
        }
        case 0x979Du: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x979Fu; return dd3_static_complete(rt,2u);
        }
        case 0x979Fu: {
            dd3_static_write8(rt,0x00F8u,rt->state.cpu.a);
            rt->state.cpu.pc=0x97A2u; return dd3_static_complete(rt,4u);
        }
        case 0x97A2u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x97B6u: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97B8u; return dd3_static_complete(rt,2u);
        }
        case 0x97B8u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97BAu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x97BAu: {
            dd3_static_write8(rt,0x00F7u,rt->state.cpu.a);
            rt->state.cpu.pc=0x97BDu; return dd3_static_complete(rt,4u);
        }
        case 0x97BDu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x97C7u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97C9u; return dd3_static_complete(rt,2u);
        }
        case 0x97C9u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97CBu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x97CBu: {
            dd3_static_write8(rt,0x04F6u,rt->state.cpu.a);
            rt->state.cpu.pc=0x97CEu; return dd3_static_complete(rt,4u);
        }
        case 0x97CEu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x97CFu; return dd3_static_complete(rt,2u);
        }
        case 0x97CFu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97D1u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x97D1u: {
            dd3_static_write8(rt,0x04F7u,rt->state.cpu.a);
            rt->state.cpu.pc=0x97D4u; return dd3_static_complete(rt,4u);
        }
        case 0x97D4u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x97D5u; return dd3_static_complete(rt,2u);
        }
        case 0x97D5u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97D7u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x97D7u: {
            dd3_static_write8(rt,0x04F8u,rt->state.cpu.a);
            rt->state.cpu.pc=0x97DAu; return dd3_static_complete(rt,4u);
        }
        case 0x97DAu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x97DBu; return dd3_static_complete(rt,2u);
        }
        case 0x97DBu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97DDu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x97DDu: {
            dd3_static_write8(rt,0x04F9u,rt->state.cpu.a);
            rt->state.cpu.pc=0x97E0u; return dd3_static_complete(rt,4u);
        }
        case 0x97E0u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x97E1u; return dd3_static_complete(rt,2u);
        }
        case 0x97E1u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97E3u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x97E3u: {
            dd3_static_write8(rt,0x04FAu,rt->state.cpu.a);
            rt->state.cpu.pc=0x97E6u; return dd3_static_complete(rt,4u);
        }
        case 0x97E6u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x97E7u; return dd3_static_complete(rt,2u);
        }
        case 0x97E7u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97E9u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x97E9u: {
            dd3_static_write8(rt,0x04FBu,rt->state.cpu.a);
            rt->state.cpu.pc=0x97ECu; return dd3_static_complete(rt,4u);
        }
        case 0x97ECu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x97EDu; return dd3_static_complete(rt,2u);
        }
        case 0x97EDu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97EFu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x97EFu: {
            dd3_static_write8(rt,0x04FCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x97F2u; return dd3_static_complete(rt,4u);
        }
        case 0x97F2u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x97F3u; return dd3_static_complete(rt,2u);
        }
        case 0x97F3u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97F5u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x97F5u: {
            dd3_static_write8(rt,0x04FDu,rt->state.cpu.a);
            rt->state.cpu.pc=0x97F8u; return dd3_static_complete(rt,4u);
        }
        case 0x97F8u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x97F9u; return dd3_static_complete(rt,2u);
        }
        case 0x97F9u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97FBu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x97FBu: {
            dd3_static_write8(rt,0x04FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x97FEu; return dd3_static_complete(rt,4u);
        }
        case 0x97FEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x97FFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9800u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9802u; return dd3_static_complete(rt,2u);
        }
        case 0x9802u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9804u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9804u: {
            dd3_static_write8(rt,0x00F9u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9807u; return dd3_static_complete(rt,4u);
        }
        case 0x9807u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9808u: {
            uint16_t ea=0x4Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x980Au; return dd3_static_complete(rt,3u);
        }
        case 0x980Au: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x980Cu; return dd3_static_complete(rt,2u);
        }
        case 0x980Cu: {
            dd3_static_write8(rt,0x4Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x980Eu; return dd3_static_complete(rt,3u);
        }
        case 0x980Eu: {
            uint16_t ea=0x4Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9810u; return dd3_static_complete(rt,3u);
        }
        case 0x9810u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9812u; return dd3_static_complete(rt,2u);
        }
        case 0x9812u: {
            dd3_static_write8(rt,0x4Du,rt->state.cpu.a);
            rt->state.cpu.pc=0x9814u; return dd3_static_complete(rt,3u);
        }
        case 0x9814u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9816u; return dd3_static_complete(rt,2u);
        }
        case 0x9816u: {
            dd3_static_write8(rt,0x68u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9818u; return dd3_static_complete(rt,3u);
        }
        case 0x9818u: {
            dd3_static_write8(rt,0x69u,rt->state.cpu.a);
            rt->state.cpu.pc=0x981Au; return dd3_static_complete(rt,3u);
        }
        case 0x981Au: {
            uint8_t v=0x56u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x981Cu; return dd3_static_complete(rt,2u);
        }
        case 0x981Cu: {
            dd3_static_write8(rt,0x44u,rt->state.cpu.a);
            rt->state.cpu.pc=0x981Eu; return dd3_static_complete(rt,3u);
        }
        case 0x981Eu: {
            dd3_static_write8(rt,0x45u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9820u; return dd3_static_complete(rt,3u);
        }
        case 0x9820u: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9822u; return dd3_static_complete(rt,2u);
        }
        case 0x9822u: {
            dd3_static_write8(rt,0x04FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9825u; return dd3_static_complete(rt,4u);
        }
        case 0x9825u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9826u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9828u; return dd3_static_complete(rt,3u);
        }
        case 0x9828u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x982Au; return dd3_static_complete(rt,2u);
        }
        case 0x982Au: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0x982Cu; return dd3_static_complete(rt,3u);
        }
        case 0x982Cu: {
            uint8_t v=0x3Eu;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x982Eu; return dd3_static_complete(rt,2u);
        }
        case 0x982Eu: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9830u; return dd3_static_complete(rt,3u);
        }
        case 0x9830u: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9832u; return dd3_static_complete(rt,2u);
        }
        case 0x9832u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9834u,0x983Cu)) c++; rt->state.cpu.pc=0x983Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9834u; return dd3_static_complete(rt,2u);
        }
        case 0x9834u: {
            uint8_t v=0x37u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9836u; return dd3_static_complete(rt,2u);
        }
        case 0x9836u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9838u; return dd3_static_complete(rt,2u);
        }
        case 0x9838u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x983Au,0x983Cu)) c++; rt->state.cpu.pc=0x983Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x983Au; return dd3_static_complete(rt,2u);
        }
        case 0x983Au: {
            uint8_t v=0x40u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x983Cu; return dd3_static_complete(rt,2u);
        }
        case 0x983Cu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x983Du; return dd3_static_complete(rt,2u);
        }
        case 0x983Du: {
            dd3_static_push8(rt,(uint8_t)(0x983Fu>>8)); dd3_static_push8(rt,(uint8_t)0x983Fu);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0x9840u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9842u; return dd3_static_complete(rt,2u);
        }
        case 0x9842u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9844u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9844u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9846u; return dd3_static_complete(rt,2u);
        }
        case 0x9846u: {
            dd3_static_write8(rt,0x04CCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9849u; return dd3_static_complete(rt,4u);
        }
        case 0x9849u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x984Bu; return dd3_static_complete(rt,2u);
        }
        case 0x984Bu: {
            dd3_static_write8(rt,0x04CDu,rt->state.cpu.a);
            rt->state.cpu.pc=0x984Eu; return dd3_static_complete(rt,4u);
        }
        case 0x984Eu: {
            uint16_t ea=0x04FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9851u; return dd3_static_complete(rt,4u);
        }
        case 0x9851u: {
            dd3_static_write8(rt,0x04FFu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9854u; return dd3_static_complete(rt,4u);
        }
        case 0x9854u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9856u; return dd3_static_complete(rt,2u);
        }
        case 0x9856u: {
            dd3_static_write8(rt,0x04FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9859u; return dd3_static_complete(rt,4u);
        }
        case 0x9859u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x985Bu; return dd3_static_complete(rt,3u);
        }
        case 0x985Bu: {
            uint8_t v=0x0Du;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x985Du; return dd3_static_complete(rt,2u);
        }
        case 0x985Du: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x985Fu,0x9863u)) c++; rt->state.cpu.pc=0x9863u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x985Fu; return dd3_static_complete(rt,2u);
        }
        case 0x985Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9861u; return dd3_static_complete(rt,2u);
        }
        case 0x9861u: {
            dd3_static_write8(rt,0x3Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9863u; return dd3_static_complete(rt,3u);
        }
        case 0x9863u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9864u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9866u; return dd3_static_complete(rt,2u);
        }
        case 0x9866u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9868u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9868u: {
            dd3_static_write8(rt,0xFAu,rt->state.cpu.a);
            rt->state.cpu.pc=0x986Au; return dd3_static_complete(rt,3u);
        }
        case 0x986Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x986Bu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x986Du; return dd3_static_complete(rt,3u);
        }
        case 0x986Du: {
            uint8_t v=0xF7u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x986Fu; return dd3_static_complete(rt,2u);
        }
        case 0x986Fu: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9871u; return dd3_static_complete(rt,3u);
        }
        case 0x9871u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9873u; return dd3_static_complete(rt,2u);
        }
        case 0x9873u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9875u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9875u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9877u; return dd3_static_complete(rt,2u);
        }
        case 0x9877u: {
            dd3_static_write8(rt,0x04CCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x987Au; return dd3_static_complete(rt,4u);
        }
        case 0x987Au: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x987Cu; return dd3_static_complete(rt,2u);
        }
        case 0x987Cu: {
            dd3_static_write8(rt,0x04CDu,rt->state.cpu.a);
            rt->state.cpu.pc=0x987Fu; return dd3_static_complete(rt,4u);
        }
        case 0x987Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9880u: {
            uint16_t ea=0x36u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9882u; return dd3_static_complete(rt,3u);
        }
        case 0x9882u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9884u; return dd3_static_complete(rt,2u);
        }
        case 0x9884u: {
            dd3_static_write8(rt,0x36u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9886u; return dd3_static_complete(rt,3u);
        }
        case 0x9886u: {
            uint16_t ea=0x37u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9888u; return dd3_static_complete(rt,3u);
        }
        case 0x9888u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x988Au; return dd3_static_complete(rt,2u);
        }
        case 0x988Au: {
            dd3_static_write8(rt,0x37u,rt->state.cpu.a);
            rt->state.cpu.pc=0x988Cu; return dd3_static_complete(rt,3u);
        }
        case 0x988Cu: {
            uint8_t v=0x14u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x988Eu; return dd3_static_complete(rt,2u);
        }
        case 0x988Eu: {
            dd3_static_push8(rt,(uint8_t)(0x9890u>>8)); dd3_static_push8(rt,(uint8_t)0x9890u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0x9891u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9892u: {
            dd3_static_push8(rt,(uint8_t)(0x9894u>>8)); dd3_static_push8(rt,(uint8_t)0x9894u);
            rt->state.cpu.pc=0x97B6u; return dd3_static_complete(rt,6u);
        }
        case 0x9895u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9897u; return dd3_static_complete(rt,2u);
        }
        case 0x9897u: {
            dd3_static_write8(rt,0x00F8u,rt->state.cpu.a);
            rt->state.cpu.pc=0x989Au; return dd3_static_complete(rt,4u);
        }
        case 0x989Au: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x989Cu; return dd3_static_complete(rt,3u);
        }
        case 0x989Cu: {
            uint8_t v=0xDFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x989Eu; return dd3_static_complete(rt,2u);
        }
        case 0x989Eu: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0x98A0u; return dd3_static_complete(rt,3u);
        }
        case 0x98A0u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x98C7u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x98C9u; return dd3_static_complete(rt,2u);
        }
        case 0x98C9u: {
            dd3_static_write8(rt,0x0693u,rt->state.cpu.a);
            rt->state.cpu.pc=0x98CCu; return dd3_static_complete(rt,4u);
        }
        case 0x98CCu: {
            dd3_static_write8(rt,0x0694u,rt->state.cpu.a);
            rt->state.cpu.pc=0x98CFu; return dd3_static_complete(rt,4u);
        }
        case 0x98CFu: {
            dd3_static_write8(rt,0x0695u,rt->state.cpu.a);
            rt->state.cpu.pc=0x98D2u; return dd3_static_complete(rt,4u);
        }
        case 0x98D2u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x98F4u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x98F6u; return dd3_static_complete(rt,2u);
        }
        case 0x98F6u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x98F8u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x98F8u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x98FAu,0x9907u)) c++; rt->state.cpu.pc=0x9907u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x98FAu; return dd3_static_complete(rt,2u);
        }
        case 0x98FAu: {
            uint16_t ea=0x36u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x98FCu; return dd3_static_complete(rt,3u);
        }
        case 0x98FCu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x98FEu; return dd3_static_complete(rt,2u);
        }
        case 0x98FEu: {
            dd3_static_write8(rt,0x36u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9900u; return dd3_static_complete(rt,3u);
        }
        case 0x9900u: {
            uint16_t ea=0x37u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9902u; return dd3_static_complete(rt,3u);
        }
        case 0x9902u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9904u; return dd3_static_complete(rt,2u);
        }
        case 0x9904u: {
            dd3_static_write8(rt,0x37u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9906u; return dd3_static_complete(rt,3u);
        }
        case 0x9906u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9907u: {
            uint16_t ea=0x36u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9909u; return dd3_static_complete(rt,3u);
        }
        case 0x9909u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x990Bu; return dd3_static_complete(rt,2u);
        }
        case 0x990Bu: {
            dd3_static_write8(rt,0x36u,rt->state.cpu.a);
            rt->state.cpu.pc=0x990Du; return dd3_static_complete(rt,3u);
        }
        case 0x990Du: {
            uint16_t ea=0x37u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x990Fu; return dd3_static_complete(rt,3u);
        }
        case 0x990Fu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9911u; return dd3_static_complete(rt,2u);
        }
        case 0x9911u: {
            dd3_static_write8(rt,0x37u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9913u; return dd3_static_complete(rt,3u);
        }
        case 0x9913u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9915u; return dd3_static_complete(rt,2u);
        }
        case 0x9915u: {
            dd3_static_write8(rt,0x44u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9917u; return dd3_static_complete(rt,3u);
        }
        case 0x9917u: {
            dd3_static_write8(rt,0x45u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9919u; return dd3_static_complete(rt,3u);
        }
        case 0x9919u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x991Au: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x991Cu; return dd3_static_complete(rt,2u);
        }
        case 0x991Cu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x991Eu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x991Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9920u,0x992Du)) c++; rt->state.cpu.pc=0x992Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9920u; return dd3_static_complete(rt,2u);
        }
        case 0x9920u: {
            dd3_static_write8(rt,0x3Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9922u; return dd3_static_complete(rt,3u);
        }
        case 0x9922u: {
            dd3_static_write8(rt,0x3Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9924u; return dd3_static_complete(rt,3u);
        }
        case 0x9924u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9926u; return dd3_static_complete(rt,2u);
        }
        case 0x9926u: {
            dd3_static_write8(rt,0x0309u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9929u; return dd3_static_complete(rt,4u);
        }
        case 0x9929u: {
            dd3_static_write8(rt,0x030Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x992Cu; return dd3_static_complete(rt,4u);
        }
        case 0x992Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x992Du: {
            dd3_static_write8(rt,0x46u,rt->state.cpu.a);
            rt->state.cpu.pc=0x992Fu; return dd3_static_complete(rt,3u);
        }
        case 0x992Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x993Bu: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x993Du; return dd3_static_complete(rt,2u);
        }
        case 0x993Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x993Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x993Fu: {
            dd3_static_push8(rt,(uint8_t)(0x9941u>>8)); dd3_static_push8(rt,(uint8_t)0x9941u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0x9942u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9943u: {
            dd3_static_push8(rt,(uint8_t)(0x9945u>>8)); dd3_static_push8(rt,(uint8_t)0x9945u);
            rt->state.cpu.pc=0x9972u; return dd3_static_complete(rt,6u);
        }
        case 0x9946u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9948u; return dd3_static_complete(rt,2u);
        }
        case 0x9948u: {
            dd3_static_write8(rt,0xB0u,rt->state.cpu.a);
            rt->state.cpu.pc=0x994Au; return dd3_static_complete(rt,3u);
        }
        case 0x994Au: {
            dd3_static_write8(rt,0x04FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x994Du; return dd3_static_complete(rt,4u);
        }
        case 0x994Du: {
            dd3_static_write8(rt,0x04F6u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9950u; return dd3_static_complete(rt,4u);
        }
        case 0x9950u: {
            dd3_static_write8(rt,0x04F7u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9953u; return dd3_static_complete(rt,4u);
        }
        case 0x9953u: {
            dd3_static_write8(rt,0x04F8u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9956u; return dd3_static_complete(rt,4u);
        }
        case 0x9956u: {
            dd3_static_write8(rt,0x04F9u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9959u; return dd3_static_complete(rt,4u);
        }
        case 0x9959u: {
            dd3_static_write8(rt,0x04FAu,rt->state.cpu.a);
            rt->state.cpu.pc=0x995Cu; return dd3_static_complete(rt,4u);
        }
        case 0x995Cu: {
            dd3_static_write8(rt,0x04FBu,rt->state.cpu.a);
            rt->state.cpu.pc=0x995Fu; return dd3_static_complete(rt,4u);
        }
        case 0x995Fu: {
            dd3_static_write8(rt,0x04FCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9962u; return dd3_static_complete(rt,4u);
        }
        case 0x9962u: {
            dd3_static_write8(rt,0x04FDu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9965u; return dd3_static_complete(rt,4u);
        }
        case 0x9965u: {
            dd3_static_write8(rt,0x0382u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9968u; return dd3_static_complete(rt,4u);
        }
        case 0x9968u: {
            dd3_static_write8(rt,0x0383u,rt->state.cpu.a);
            rt->state.cpu.pc=0x996Bu; return dd3_static_complete(rt,4u);
        }
        case 0x996Bu: {
            dd3_static_write8(rt,0x0384u,rt->state.cpu.a);
            rt->state.cpu.pc=0x996Eu; return dd3_static_complete(rt,4u);
        }
        case 0x996Eu: {
            dd3_static_write8(rt,0x0385u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9971u; return dd3_static_complete(rt,4u);
        }
        case 0x9971u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9972u: {
            uint8_t v=0x02u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9974u; return dd3_static_complete(rt,2u);
        }
        case 0x9974u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9976u; return dd3_static_complete(rt,2u);
        }
        case 0x9976u: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9978u; return dd3_static_complete(rt,4u);
        }
        case 0x9978u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x997Au; return dd3_static_complete(rt,2u);
        }
        case 0x997Au: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x997Cu; return dd3_static_complete(rt,4u);
        }
        case 0x997Cu: {
            dd3_static_write8(rt,(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x997Eu; return dd3_static_complete(rt,4u);
        }
        case 0x997Eu: {
            dd3_static_write8(rt,(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9980u; return dd3_static_complete(rt,4u);
        }
        case 0x9980u: {
            dd3_static_write8(rt,(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9982u; return dd3_static_complete(rt,4u);
        }
        case 0x9982u: {
            dd3_static_write8(rt,(uint16_t)((0x6Eu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9984u; return dd3_static_complete(rt,4u);
        }
        case 0x9984u: {
            uint8_t v=0x50u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9986u; return dd3_static_complete(rt,2u);
        }
        case 0x9986u: {
            dd3_static_write8(rt,(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9988u; return dd3_static_complete(rt,4u);
        }
        case 0x9988u: {
            uint8_t v=0x4Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x998Au; return dd3_static_complete(rt,2u);
        }
        case 0x998Au: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x998Cu; return dd3_static_complete(rt,4u);
        }
        case 0x998Cu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x998Eu; return dd3_static_complete(rt,2u);
        }
        case 0x998Eu: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9990u; return dd3_static_complete(rt,4u);
        }
        case 0x9990u: {
            uint8_t v=0x15u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9992u; return dd3_static_complete(rt,2u);
        }
        case 0x9992u: {
            dd3_static_write8(rt,(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9994u; return dd3_static_complete(rt,4u);
        }
        case 0x9994u: {
            uint8_t v=0x84u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9996u; return dd3_static_complete(rt,2u);
        }
        case 0x9996u: {
            dd3_static_write8(rt,(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9998u; return dd3_static_complete(rt,4u);
        }
        case 0x9998u: {
            uint8_t v=0x03u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x999Au; return dd3_static_complete(rt,2u);
        }
        case 0x999Au: {
            uint8_t v=0x50u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x999Cu; return dd3_static_complete(rt,2u);
        }
        case 0x999Cu: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x999Eu; return dd3_static_complete(rt,4u);
        }
        case 0x999Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99A0u; return dd3_static_complete(rt,2u);
        }
        case 0x99A0u: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x99A2u; return dd3_static_complete(rt,4u);
        }
        case 0x99A2u: {
            dd3_static_write8(rt,(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x99A4u; return dd3_static_complete(rt,4u);
        }
        case 0x99A4u: {
            dd3_static_write8(rt,(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x99A6u; return dd3_static_complete(rt,4u);
        }
        case 0x99A6u: {
            dd3_static_write8(rt,(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x99A8u; return dd3_static_complete(rt,4u);
        }
        case 0x99A8u: {
            dd3_static_write8(rt,(uint16_t)((0x6Eu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x99AAu; return dd3_static_complete(rt,4u);
        }
        case 0x99AAu: {
            dd3_static_write8(rt,0x0309u,rt->state.cpu.a);
            rt->state.cpu.pc=0x99ADu; return dd3_static_complete(rt,4u);
        }
        case 0x99ADu: {
            dd3_static_write8(rt,0x030Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x99B0u; return dd3_static_complete(rt,4u);
        }
        case 0x99B0u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99B2u; return dd3_static_complete(rt,2u);
        }
        case 0x99B2u: {
            dd3_static_write8(rt,(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x99B4u; return dd3_static_complete(rt,4u);
        }
        case 0x99B4u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99B6u; return dd3_static_complete(rt,2u);
        }
        case 0x99B6u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x99B8u; return dd3_static_complete(rt,4u);
        }
        case 0x99B8u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99BAu; return dd3_static_complete(rt,2u);
        }
        case 0x99BAu: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x99BCu; return dd3_static_complete(rt,4u);
        }
        case 0x99BCu: {
            uint8_t v=0x05u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99BEu; return dd3_static_complete(rt,2u);
        }
        case 0x99BEu: {
            dd3_static_write8(rt,(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x99C0u; return dd3_static_complete(rt,4u);
        }
        case 0x99C0u: {
            uint8_t v=0x81u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99C2u; return dd3_static_complete(rt,2u);
        }
        case 0x99C2u: {
            dd3_static_write8(rt,(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x99C4u; return dd3_static_complete(rt,4u);
        }
        case 0x99C4u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99C6u; return dd3_static_complete(rt,2u);
        }
        case 0x99C6u: {
            dd3_static_write8(rt,0x0309u,rt->state.cpu.a);
            rt->state.cpu.pc=0x99C9u; return dd3_static_complete(rt,4u);
        }
        case 0x99C9u: {
            dd3_static_write8(rt,0x030Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x99CCu; return dd3_static_complete(rt,4u);
        }
        case 0x99CCu: {
            uint8_t v=0x14u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99CEu; return dd3_static_complete(rt,2u);
        }
        case 0x99CEu: {
            dd3_static_write8(rt,(uint16_t)(0x045Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x99D1u; return dd3_static_complete(rt,5u);
        }
        case 0x99D1u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x99D2u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99D4u; return dd3_static_complete(rt,2u);
        }
        case 0x99D4u: {
            dd3_static_write8(rt,0xB0u,rt->state.cpu.a);
            rt->state.cpu.pc=0x99D6u; return dd3_static_complete(rt,3u);
        }
        case 0x99D6u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99D8u; return dd3_static_complete(rt,3u);
        }
        case 0x99D8u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x99DAu; return dd3_static_complete(rt,2u);
        }
        case 0x99DAu: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0x99DCu; return dd3_static_complete(rt,3u);
        }
        case 0x99DCu: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99DEu; return dd3_static_complete(rt,2u);
        }
        case 0x99DEu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99E0u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x99E0u: {
            dd3_static_write8(rt,0xB1u,rt->state.cpu.a);
            rt->state.cpu.pc=0x99E2u; return dd3_static_complete(rt,3u);
        }
        case 0x99E2u: {
            uint16_t ea=0x76u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99E4u; return dd3_static_complete(rt,3u);
        }
        case 0x99E4u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x99E6u; return dd3_static_complete(rt,2u);
        }
        case 0x99E6u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x99E8u,0x99F6u)) c++; rt->state.cpu.pc=0x99F6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x99E8u; return dd3_static_complete(rt,2u);
        }
        case 0x99E8u: {
            uint16_t ea=0xB2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99EAu; return dd3_static_complete(rt,3u);
        }
        case 0x99EAu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x99ECu,0x99F6u)) c++; rt->state.cpu.pc=0x99F6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x99ECu; return dd3_static_complete(rt,2u);
        }
        case 0x99ECu: {
            uint16_t ea=0x46u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99EEu; return dd3_static_complete(rt,3u);
        }
        case 0x99EEu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x99F0u; return dd3_static_complete(rt,2u);
        }
        case 0x99F0u: {
            dd3_static_write8(rt,0xB2u,rt->state.cpu.a);
            rt->state.cpu.pc=0x99F2u; return dd3_static_complete(rt,3u);
        }
        case 0x99F2u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99F4u; return dd3_static_complete(rt,2u);
        }
        case 0x99F4u: {
            dd3_static_write8(rt,0x46u,rt->state.cpu.a);
            rt->state.cpu.pc=0x99F6u; return dd3_static_complete(rt,3u);
        }
        case 0x99F6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x99FFu: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A01u; return dd3_static_complete(rt,3u);
        }
        case 0x9A01u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A03u; return dd3_static_complete(rt,2u);
        }
        case 0x9A03u: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A05u; return dd3_static_complete(rt,3u);
        }
        case 0x9A05u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9A06u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A07u; return dd3_static_complete(rt,2u);
        }
        case 0x9A07u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A08u; return dd3_static_complete(rt,3u);
        }
        case 0x9A08u: {
            uint16_t ea=0x00F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A0Bu; return dd3_static_complete(rt,4u);
        }
        case 0x9A0Bu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A0Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9A0Cu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9A0Du; return dd3_static_complete(rt,2u);
        }
        case 0x9A0Du: {
            uint16_t ea=(uint16_t)(0xA106u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A10u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA106u,ea)?1u:0u));
        }
        case 0x9A10u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A12u; return dd3_static_complete(rt,3u);
        }
        case 0x9A12u: {
            uint16_t ea=(uint16_t)(0xA107u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A15u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA107u,ea)?1u:0u));
        }
        case 0x9A15u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A17u; return dd3_static_complete(rt,3u);
        }
        case 0x9A17u: {
            uint16_t ea=0x00F5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A1Au; return dd3_static_complete(rt,4u);
        }
        case 0x9A1Au: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A1Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9A1Bu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9A1Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9A1Cu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A1Eu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0x9A1Eu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A20u; return dd3_static_complete(rt,3u);
        }
        case 0x9A20u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9A21u; return dd3_static_complete(rt,2u);
        }
        case 0x9A21u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A23u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0x9A23u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A25u; return dd3_static_complete(rt,3u);
        }
        case 0x9A25u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A26u; return dd3_static_complete(rt,4u);
        }
        case 0x9A26u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9A27u; return dd3_static_complete(rt,2u);
        }
        case 0x9A27u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9A28u: {
            uint8_t v=0x81u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A2Au; return dd3_static_complete(rt,2u);
        }
        case 0x9A2Au: {
            dd3_static_write8(rt,(uint16_t)((0x3Eu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A2Cu; return dd3_static_complete(rt,4u);
        }
        case 0x9A2Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A2Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9A2Eu: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A30u; return dd3_static_complete(rt,4u);
        }
        case 0x9A30u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A32u; return dd3_static_complete(rt,2u);
        }
        case 0x9A32u: {
            dd3_static_write8(rt,(uint16_t)(0x0396u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A35u; return dd3_static_complete(rt,5u);
        }
        case 0x9A35u: {
            dd3_static_write8(rt,(uint16_t)(0x04B2u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A38u; return dd3_static_complete(rt,5u);
        }
        case 0x9A38u: {
            dd3_static_write8(rt,(uint16_t)(0x0487u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A3Bu; return dd3_static_complete(rt,5u);
        }
        case 0x9A3Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0483u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A3Eu; return dd3_static_complete(rt,5u);
        }
        case 0x9A3Eu: {
            dd3_static_write8(rt,(uint16_t)((0x4Eu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A40u; return dd3_static_complete(rt,4u);
        }
        case 0x9A40u: {
            dd3_static_write8(rt,0x0309u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A43u; return dd3_static_complete(rt,4u);
        }
        case 0x9A43u: {
            dd3_static_write8(rt,0x030Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A46u; return dd3_static_complete(rt,4u);
        }
        case 0x9A46u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A47u; return dd3_static_complete(rt,2u);
        }
        case 0x9A47u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A48u; return dd3_static_complete(rt,3u);
        }
        case 0x9A48u: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A4Au; return dd3_static_complete(rt,4u);
        }
        case 0x9A4Au: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9A4Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9A4Bu: {
            uint16_t ea=(uint16_t)(0x9B48u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A4Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9B48u,ea)?1u:0u));
        }
        case 0x9A4Eu: {
            dd3_static_write8(rt,0x04DEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A51u; return dd3_static_complete(rt,4u);
        }
        case 0x9A51u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A52u; return dd3_static_complete(rt,4u);
        }
        case 0x9A52u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9A53u; return dd3_static_complete(rt,2u);
        }
        case 0x9A53u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A55u; return dd3_static_complete(rt,2u);
        }
        case 0x9A55u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A57u; return dd3_static_complete(rt,4u);
        }
        case 0x9A57u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A59u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9A59u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A5Bu; return dd3_static_complete(rt,3u);
        }
        case 0x9A5Bu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9A5Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9A5Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A5Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9A5Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0483u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A61u; return dd3_static_complete(rt,5u);
        }
        case 0x9A61u: {
            dd3_static_write8(rt,(uint16_t)(0x0070u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A64u; return dd3_static_complete(rt,5u);
        }
        case 0x9A64u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9A66u; return dd3_static_complete(rt,5u);
        }
        case 0x9A66u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9A68u,0x9AC3u)) c++; rt->state.cpu.pc=0x9AC3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9A68u; return dd3_static_complete(rt,2u);
        }
        case 0x9A68u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A6Au; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9A6Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9A6Cu,0x9AC2u)) c++; rt->state.cpu.pc=0x9AC2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9A6Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9A6Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0070u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A6Fu; return dd3_static_complete(rt,5u);
        }
        case 0x9A6Fu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A70u; return dd3_static_complete(rt,2u);
        }
        case 0x9A70u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A71u; return dd3_static_complete(rt,3u);
        }
        case 0x9A71u: {
            uint16_t ea=(uint16_t)(0x0070u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A74u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0070u,ea)?1u:0u));
        }
        case 0x9A74u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9A75u; return dd3_static_complete(rt,2u);
        }
        case 0x9A75u: {
            uint16_t ea=(uint16_t)(0x9B41u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A78u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9B41u,ea)?1u:0u));
        }
        case 0x9A78u: {
            dd3_static_write8(rt,(uint16_t)(0x0483u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A7Bu; return dd3_static_complete(rt,5u);
        }
        case 0x9A7Bu: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A7Du; return dd3_static_complete(rt,2u);
        }
        case 0x9A7Du: {
            uint16_t ea=(uint16_t)(0x003Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A80u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Cu,ea)?1u:0u));
        }
        case 0x9A80u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9A82u,0x9A89u)) c++; rt->state.cpu.pc=0x9A89u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9A82u; return dd3_static_complete(rt,2u);
        }
        case 0x9A82u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9A83u; return dd3_static_complete(rt,2u);
        }
        case 0x9A83u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x9A85u; return dd3_static_complete(rt,2u);
        }
        case 0x9A85u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9A87u,0x9AC0u)) c++; rt->state.cpu.pc=0x9AC0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9A87u; return dd3_static_complete(rt,2u);
        }
        case 0x9A87u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9A89u,0x9A7Du)) c++; rt->state.cpu.pc=0x9A7Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9A89u; return dd3_static_complete(rt,2u);
        }
        case 0x9A89u: {
            uint16_t ea=(uint16_t)(0x0483u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A8Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0483u,ea)?1u:0u));
        }
        case 0x9A8Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0074u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A8Fu; return dd3_static_complete(rt,5u);
        }
        case 0x9A8Fu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A91u; return dd3_static_complete(rt,2u);
        }
        case 0x9A91u: {
            dd3_static_write8(rt,(uint16_t)(0x0483u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A94u; return dd3_static_complete(rt,5u);
        }
        case 0x9A94u: {
            uint8_t v=0x82u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A96u; return dd3_static_complete(rt,2u);
        }
        case 0x9A96u: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A99u; return dd3_static_complete(rt,5u);
        }
        case 0x9A99u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A9Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9A9Bu: {
            dd3_static_write8(rt,(uint16_t)(0x004Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A9Eu; return dd3_static_complete(rt,5u);
        }
        case 0x9A9Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AA0u; return dd3_static_complete(rt,2u);
        }
        case 0x9AA0u: {
            dd3_static_write8(rt,0x0309u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9AA3u; return dd3_static_complete(rt,4u);
        }
        case 0x9AA3u: {
            dd3_static_write8(rt,0x030Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9AA6u; return dd3_static_complete(rt,4u);
        }
        case 0x9AA6u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AA8u; return dd3_static_complete(rt,2u);
        }
        case 0x9AA8u: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9AABu; return dd3_static_complete(rt,5u);
        }
        case 0x9AABu: {
            dd3_static_write8(rt,(uint16_t)(0x007Du+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9AAEu; return dd3_static_complete(rt,5u);
        }
        case 0x9AAEu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9AAFu; return dd3_static_complete(rt,2u);
        }
        case 0x9AAFu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x9AB0u; return dd3_static_complete(rt,2u);
        }
        case 0x9AB0u: {
            uint8_t v=0x02u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x9AB2u; return dd3_static_complete(rt,2u);
        }
        case 0x9AB2u: {
            dd3_static_write8(rt,(uint16_t)(0x03F1u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9AB5u; return dd3_static_complete(rt,5u);
        }
        case 0x9AB5u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9AB7u; return dd3_static_complete(rt,2u);
        }
        case 0x9AB7u: {
            dd3_static_write8(rt,(uint16_t)(0x03B8u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9ABAu; return dd3_static_complete(rt,5u);
        }
        case 0x9ABAu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9ABBu; return dd3_static_complete(rt,2u);
        }
        case 0x9ABBu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9ABDu; return dd3_static_complete(rt,2u);
        }
        case 0x9ABDu: {
            dd3_static_write8(rt,(uint16_t)(0x0487u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9AC0u; return dd3_static_complete(rt,5u);
        }
        case 0x9AC0u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9AC1u; return dd3_static_complete(rt,4u);
        }
        case 0x9AC1u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9AC2u; return dd3_static_complete(rt,2u);
        }
        case 0x9AC2u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9AC3u; return dd3_static_complete(rt,2u);
        }
        case 0x9AC3u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9AC5u; return dd3_static_complete(rt,5u);
        }
        case 0x9AC5u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9AC7u,0x9AD5u)) c++; rt->state.cpu.pc=0x9AD5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9AC7u; return dd3_static_complete(rt,2u);
        }
        case 0x9AC7u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AC9u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9AC9u: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9ACBu; return dd3_static_complete(rt,4u);
        }
        case 0x9ACBu: {
            uint8_t v=0x07u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9ACDu; return dd3_static_complete(rt,2u);
        }
        case 0x9ACDu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9ACFu,0x9AD4u)) c++; rt->state.cpu.pc=0x9AD4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9ACFu; return dd3_static_complete(rt,2u);
        }
        case 0x9ACFu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AD1u; return dd3_static_complete(rt,2u);
        }
        case 0x9AD1u: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9AD4u; return dd3_static_complete(rt,5u);
        }
        case 0x9AD4u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9AD5u; return dd3_static_complete(rt,2u);
        }
        case 0x9AD5u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9AD7u; return dd3_static_complete(rt,5u);
        }
        case 0x9AD7u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9AD9u,0x9B00u)) c++; rt->state.cpu.pc=0x9B00u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9AD9u; return dd3_static_complete(rt,2u);
        }
        case 0x9AD9u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9ADBu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9ADBu: {
            dd3_static_write8(rt,(uint16_t)(0x0384u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9ADEu; return dd3_static_complete(rt,5u);
        }
        case 0x9ADEu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9ADFu; return dd3_static_complete(rt,2u);
        }
        case 0x9ADFu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AE1u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9AE1u: {
            dd3_static_write8(rt,(uint16_t)((0xB9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9AE3u; return dd3_static_complete(rt,4u);
        }
        case 0x9AE3u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9AE4u; return dd3_static_complete(rt,2u);
        }
        case 0x9AE4u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AE6u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9AE6u: {
            dd3_static_write8(rt,(uint16_t)((0xC3u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9AE8u; return dd3_static_complete(rt,4u);
        }
        case 0x9AE8u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9AE9u; return dd3_static_complete(rt,2u);
        }
        case 0x9AE9u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AEBu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9AEBu: {
            dd3_static_write8(rt,(uint16_t)((0xCDu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9AEDu; return dd3_static_complete(rt,4u);
        }
        case 0x9AEDu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9AEEu; return dd3_static_complete(rt,2u);
        }
        case 0x9AEEu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AF0u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9AF0u: {
            dd3_static_write8(rt,(uint16_t)((0xD7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9AF2u; return dd3_static_complete(rt,4u);
        }
        case 0x9AF2u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9AF3u; return dd3_static_complete(rt,2u);
        }
        case 0x9AF3u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AF5u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9AF5u: {
            dd3_static_write8(rt,(uint16_t)((0xE1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9AF7u; return dd3_static_complete(rt,4u);
        }
        case 0x9AF7u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9AF8u; return dd3_static_complete(rt,2u);
        }
        case 0x9AF8u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AFAu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9AFAu: {
            dd3_static_write8(rt,(uint16_t)((0xEBu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9AFCu; return dd3_static_complete(rt,4u);
        }
        case 0x9AFCu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9AFDu; return dd3_static_complete(rt,2u);
        }
        case 0x9AFDu: {
            rt->state.cpu.pc=0x9B06u; return dd3_static_complete(rt,3u);
        }
        case 0x9B00u: {
            dd3_static_write8(rt,0x00F8u,rt->state.cpu.y);
            rt->state.cpu.pc=0x9B03u; return dd3_static_complete(rt,4u);
        }
        case 0x9B03u: {
            dd3_static_push8(rt,(uint8_t)(0x9B05u>>8)); dd3_static_push8(rt,(uint8_t)0x9B05u);
            rt->state.cpu.pc=0xFC80u; return dd3_static_complete(rt,6u);
        }
        case 0x9B06u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B08u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9B08u: {
            dd3_static_write8(rt,(uint16_t)(0x045Fu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B0Bu; return dd3_static_complete(rt,5u);
        }
        case 0x9B0Bu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9B0Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9B0Cu: {
            dd3_static_write8(rt,0x00F8u,rt->state.cpu.y);
            rt->state.cpu.pc=0x9B0Fu; return dd3_static_complete(rt,4u);
        }
        case 0x9B0Fu: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B11u; return dd3_static_complete(rt,3u);
        }
        case 0x9B11u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9B13u,0x9B20u)) c++; rt->state.cpu.pc=0x9B20u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9B13u; return dd3_static_complete(rt,2u);
        }
        case 0x9B13u: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B15u; return dd3_static_complete(rt,4u);
        }
        case 0x9B15u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9B16u; return dd3_static_complete(rt,2u);
        }
        case 0x9B16u: {
            uint16_t ea=(uint16_t)(0x9B21u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B19u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9B21u,ea)?1u:0u));
        }
        case 0x9B19u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x9B1Au; return dd3_static_complete(rt,2u);
        }
        case 0x9B1Au: {
            uint16_t ea=(uint16_t)(0x045Fu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x9B1Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x045Fu,ea)?1u:0u));
        }
        case 0x9B1Du: {
            dd3_static_write8(rt,(uint16_t)(0x045Fu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B20u; return dd3_static_complete(rt,5u);
        }
        case 0x9B20u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9B79u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B7Bu; return dd3_static_complete(rt,3u);
        }
        case 0x9B7Bu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B7Du; return dd3_static_complete(rt,2u);
        }
        case 0x9B7Du: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9B7Fu,0x9B91u)) c++; rt->state.cpu.pc=0x9B91u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9B7Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9B7Fu: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B81u; return dd3_static_complete(rt,3u);
        }
        case 0x9B81u: {
            uint8_t v=0x05u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B83u; return dd3_static_complete(rt,2u);
        }
        case 0x9B83u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9B85u,0x9BEEu)) c++; rt->state.cpu.pc=0x9BEEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9B85u; return dd3_static_complete(rt,2u);
        }
        case 0x9B85u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B87u; return dd3_static_complete(rt,3u);
        }
        case 0x9B87u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B89u; return dd3_static_complete(rt,2u);
        }
        case 0x9B89u: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B8Bu; return dd3_static_complete(rt,3u);
        }
        case 0x9B8Bu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B8Du; return dd3_static_complete(rt,2u);
        }
        case 0x9B8Du: {
            dd3_static_write8(rt,0x068Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B90u; return dd3_static_complete(rt,4u);
        }
        case 0x9B90u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9B91u: {
            uint16_t ea=0x068Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B94u; return dd3_static_complete(rt,4u);
        }
        case 0x9B94u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9B96u,0x9BEEu)) c++; rt->state.cpu.pc=0x9BEEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9B96u; return dd3_static_complete(rt,2u);
        }
        case 0x9B96u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B98u; return dd3_static_complete(rt,2u);
        }
        case 0x9B98u: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B9Au; return dd3_static_complete(rt,3u);
        }
        case 0x9B9Au: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B9Cu; return dd3_static_complete(rt,3u);
        }
        case 0x9B9Cu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9B9Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9B9Eu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9BA0u,0x9B9Au)) c++; rt->state.cpu.pc=0x9B9Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9BA0u; return dd3_static_complete(rt,2u);
        }
        case 0x9BA0u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BA2u; return dd3_static_complete(rt,3u);
        }
        case 0x9BA2u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BA4u; return dd3_static_complete(rt,2u);
        }
        case 0x9BA4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9BA6u,0x9BC8u)) c++; rt->state.cpu.pc=0x9BC8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9BA6u; return dd3_static_complete(rt,2u);
        }
        case 0x9BA6u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BA8u; return dd3_static_complete(rt,3u);
        }
        case 0x9BA8u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BAAu; return dd3_static_complete(rt,2u);
        }
        case 0x9BAAu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9BACu,0x9BEEu)) c++; rt->state.cpu.pc=0x9BEEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9BACu; return dd3_static_complete(rt,2u);
        }
        case 0x9BACu: {
            uint16_t ea=0x00F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BAFu; return dd3_static_complete(rt,4u);
        }
        case 0x9BAFu: {
            uint16_t ea=(uint16_t)(0x9CBBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BB2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9CBBu,ea)?1u:0u));
        }
        case 0x9BB2u: {
            dd3_static_write8(rt,0x00F3u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BB5u; return dd3_static_complete(rt,4u);
        }
        case 0x9BB5u: {
            rt->state.cpu.pc=0x9BD5u; return dd3_static_complete(rt,3u);
        }
        case 0x9BC8u: {
            uint16_t ea=0x00F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BCBu; return dd3_static_complete(rt,4u);
        }
        case 0x9BCBu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9BCCu; return dd3_static_complete(rt,2u);
        }
        case 0x9BCCu: {
            dd3_static_write8(rt,0x00F3u,rt->state.cpu.y);
            rt->state.cpu.pc=0x9BCFu; return dd3_static_complete(rt,4u);
        }
        case 0x9BCFu: {
            uint16_t ea=(uint16_t)(0x9BB8u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BD2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9BB8u,ea)?1u:0u));
        }
        case 0x9BD2u: {
            dd3_static_write8(rt,0x00F4u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BD5u; return dd3_static_complete(rt,4u);
        }
        case 0x9BD5u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BD7u; return dd3_static_complete(rt,3u);
        }
        case 0x9BD7u: {
            uint8_t v=0xEAu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BD9u; return dd3_static_complete(rt,2u);
        }
        case 0x9BD9u: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BDBu; return dd3_static_complete(rt,3u);
        }
        case 0x9BDBu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BDDu; return dd3_static_complete(rt,3u);
        }
        case 0x9BDDu: {
            uint8_t v=0xF7u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BDFu; return dd3_static_complete(rt,2u);
        }
        case 0x9BDFu: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BE1u; return dd3_static_complete(rt,3u);
        }
        case 0x9BE1u: {
            uint16_t ea=0x00F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BE4u; return dd3_static_complete(rt,4u);
        }
        case 0x9BE4u: {
            uint8_t v=0x0Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9BE6u; return dd3_static_complete(rt,2u);
        }
        case 0x9BE6u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9BE8u,0x9BEFu)) c++; rt->state.cpu.pc=0x9BEFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9BE8u; return dd3_static_complete(rt,2u);
        }
        case 0x9BE8u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BEAu; return dd3_static_complete(rt,3u);
        }
        case 0x9BEAu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BECu; return dd3_static_complete(rt,2u);
        }
        case 0x9BECu: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BEEu; return dd3_static_complete(rt,3u);
        }
        case 0x9BEEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9BEFu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BF1u; return dd3_static_complete(rt,2u);
        }
        case 0x9BF1u: {
            dd3_static_push8(rt,(uint8_t)(0x9BF3u>>8)); dd3_static_push8(rt,(uint8_t)0x9BF3u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0x9BF4u: {
            dd3_static_push8(rt,(uint8_t)(0x9BF6u>>8)); dd3_static_push8(rt,(uint8_t)0x9BF6u);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0x9BF7u: {
            rt->state.cpu.i=1;
            rt->state.cpu.pc=0x9BF8u; return dd3_static_complete(rt,2u);
        }
        case 0x9BF8u: {
            dd3_static_push8(rt,(uint8_t)(0x9BFAu>>8)); dd3_static_push8(rt,(uint8_t)0x9BFAu);
            rt->state.cpu.pc=0xFCF6u; return dd3_static_complete(rt,6u);
        }
        case 0x9BFBu: {
            dd3_static_push8(rt,(uint8_t)(0x9BFDu>>8)); dd3_static_push8(rt,(uint8_t)0x9BFDu);
            rt->state.cpu.pc=0xD089u; return dd3_static_complete(rt,6u);
        }
        case 0x9BFEu: {
            dd3_static_push8(rt,(uint8_t)(0x9C00u>>8)); dd3_static_push8(rt,(uint8_t)0x9C00u);
            rt->state.cpu.pc=0xD03Cu; return dd3_static_complete(rt,6u);
        }
        case 0x9C01u: {
            dd3_static_push8(rt,(uint8_t)(0x9C03u>>8)); dd3_static_push8(rt,(uint8_t)0x9C03u);
            rt->state.cpu.pc=0xF5E5u; return dd3_static_complete(rt,6u);
        }
        case 0x9C04u: {
            dd3_static_push8(rt,(uint8_t)(0x9C06u>>8)); dd3_static_push8(rt,(uint8_t)0x9C06u);
            rt->state.cpu.pc=0x8978u; return dd3_static_complete(rt,6u);
        }
        case 0x9C07u: {
            dd3_static_push8(rt,(uint8_t)(0x9C09u>>8)); dd3_static_push8(rt,(uint8_t)0x9C09u);
            rt->state.cpu.pc=0xD1B9u; return dd3_static_complete(rt,6u);
        }
        case 0x9C0Au: {
            dd3_static_push8(rt,(uint8_t)(0x9C0Cu>>8)); dd3_static_push8(rt,(uint8_t)0x9C0Cu);
            rt->state.cpu.pc=0xD17Fu; return dd3_static_complete(rt,6u);
        }
        case 0x9C0Du: {
            dd3_static_push8(rt,(uint8_t)(0x9C0Fu>>8)); dd3_static_push8(rt,(uint8_t)0x9C0Fu);
            rt->state.cpu.pc=0xC017u; return dd3_static_complete(rt,6u);
        }
        case 0x9C10u: {
            uint16_t ea=0x04DDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C13u; return dd3_static_complete(rt,4u);
        }
        case 0x9C13u: {
            dd3_static_write8(rt,0x04DFu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C16u; return dd3_static_complete(rt,4u);
        }
        case 0x9C16u: {
            uint16_t ea=0x04DEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C19u; return dd3_static_complete(rt,4u);
        }
        case 0x9C19u: {
            dd3_static_write8(rt,0x04E0u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C1Cu; return dd3_static_complete(rt,4u);
        }
        case 0x9C1Cu: {
            dd3_static_push8(rt,(uint8_t)(0x9C1Eu>>8)); dd3_static_push8(rt,(uint8_t)0x9C1Eu);
            rt->state.cpu.pc=0xD88Fu; return dd3_static_complete(rt,6u);
        }
        case 0x9C1Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C21u; return dd3_static_complete(rt,2u);
        }
        case 0x9C21u: {
            dd3_static_write8(rt,0x00A7u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C24u; return dd3_static_complete(rt,4u);
        }
        case 0x9C24u: {
            dd3_static_write8(rt,0x00A1u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C27u; return dd3_static_complete(rt,4u);
        }
        case 0x9C27u: {
            dd3_static_write8(rt,0x00A8u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C2Au; return dd3_static_complete(rt,4u);
        }
        case 0x9C2Au: {
            dd3_static_push8(rt,(uint8_t)(0x9C2Cu>>8)); dd3_static_push8(rt,(uint8_t)0x9C2Cu);
            rt->state.cpu.pc=0xE3B7u; return dd3_static_complete(rt,6u);
        }
        case 0x9C2Du: {
            uint16_t ea=0x00F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C30u; return dd3_static_complete(rt,4u);
        }
        case 0x9C30u: {
            uint16_t ea=(uint16_t)(0x9C3Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C33u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9C3Cu,ea)?1u:0u));
        }
        case 0x9C33u: {
            dd3_static_push8(rt,(uint8_t)(0x9C35u>>8)); dd3_static_push8(rt,(uint8_t)0x9C35u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0x9C36u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C38u; return dd3_static_complete(rt,2u);
        }
        case 0x9C38u: {
            dd3_static_write8(rt,0x068Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C3Bu; return dd3_static_complete(rt,4u);
        }
        case 0x9C3Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9C4Bu: {
            uint16_t ea=0x00F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C4Eu; return dd3_static_complete(rt,4u);
        }
        case 0x9C4Eu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C4Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9C4Fu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C50u; return dd3_static_complete(rt,2u);
        }
        case 0x9C50u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C52u; return dd3_static_complete(rt,3u);
        }
        case 0x9C52u: {
            uint8_t v=0x9Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C54u; return dd3_static_complete(rt,2u);
        }
        case 0x9C54u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x9C55u; return dd3_static_complete(rt,2u);
        }
        case 0x9C55u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x9C57u; return dd3_static_complete(rt,3u);
        }
        case 0x9C57u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C59u; return dd3_static_complete(rt,3u);
        }
        case 0x9C59u: {
            uint8_t v=0xA8u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C5Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9C5Bu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x9C5Du; return dd3_static_complete(rt,2u);
        }
        case 0x9C5Du: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C5Fu; return dd3_static_complete(rt,3u);
        }
        case 0x9C5Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9C60u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C62u; return dd3_static_complete(rt,2u);
        }
        case 0x9C62u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C64u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0x9C64u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C66u; return dd3_static_complete(rt,3u);
        }
        case 0x9C66u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9C67u; return dd3_static_complete(rt,2u);
        }
        case 0x9C67u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C69u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0x9C69u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C6Bu; return dd3_static_complete(rt,3u);
        }
        case 0x9C6Bu: {
            uint8_t v=0x03u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C6Du; return dd3_static_complete(rt,2u);
        }
        case 0x9C6Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C6Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9C6Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0087u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9C72u; return dd3_static_complete(rt,5u);
        }
        case 0x9C72u: {
            dd3_static_write8(rt,(uint16_t)(0x008Bu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9C75u; return dd3_static_complete(rt,5u);
        }
        case 0x9C75u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9C76u; return dd3_static_complete(rt,2u);
        }
        case 0x9C76u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9C78u,0x9C6Du)) c++; rt->state.cpu.pc=0x9C6Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C78u; return dd3_static_complete(rt,2u);
        }
        case 0x9C78u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9C79u: {
            uint16_t ea=0x00F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C7Cu; return dd3_static_complete(rt,4u);
        }
        case 0x9C7Cu: {
            uint16_t ea=(uint16_t)(0xF690u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C7Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xF690u,ea)?1u:0u));
        }
        case 0x9C7Fu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9C81u,0x9CBAu)) c++; rt->state.cpu.pc=0x9CBAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C81u; return dd3_static_complete(rt,2u);
        }
        case 0x9C81u: {
            uint8_t v=0x54u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C83u; return dd3_static_complete(rt,2u);
        }
        case 0x9C83u: {
            dd3_static_write8(rt,0x04D8u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C86u; return dd3_static_complete(rt,4u);
        }
        case 0x9C86u: {
            dd3_static_write8(rt,0x04D9u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C89u; return dd3_static_complete(rt,4u);
        }
        case 0x9C89u: {
            uint8_t v=0x4Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C8Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9C8Bu: {
            dd3_static_write8(rt,0x04DAu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C8Eu; return dd3_static_complete(rt,4u);
        }
        case 0x9C8Eu: {
            uint8_t v=0x64u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C90u; return dd3_static_complete(rt,2u);
        }
        case 0x9C90u: {
            dd3_static_write8(rt,0x04DBu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C93u; return dd3_static_complete(rt,4u);
        }
        case 0x9C93u: {
            uint8_t v=0x05u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C95u; return dd3_static_complete(rt,2u);
        }
        case 0x9C95u: {
            dd3_static_write8(rt,0x06DFu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C98u; return dd3_static_complete(rt,4u);
        }
        case 0x9C98u: {
            dd3_static_write8(rt,0x06E0u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C9Bu; return dd3_static_complete(rt,4u);
        }
        case 0x9C9Bu: {
            dd3_static_write8(rt,0x06E2u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C9Eu; return dd3_static_complete(rt,4u);
        }
        case 0x9C9Eu: {
            uint8_t v=0x14u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CA0u; return dd3_static_complete(rt,2u);
        }
        case 0x9CA0u: {
            dd3_static_write8(rt,0x06E1u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CA3u; return dd3_static_complete(rt,4u);
        }
        case 0x9CA3u: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CA5u; return dd3_static_complete(rt,2u);
        }
        case 0x9CA5u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CA7u; return dd3_static_complete(rt,4u);
        }
        case 0x9CA7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9CA9u,0x9CB7u)) c++; rt->state.cpu.pc=0x9CB7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9CA9u; return dd3_static_complete(rt,2u);
        }
        case 0x9CA9u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CABu; return dd3_static_complete(rt,4u);
        }
        case 0x9CABu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9CACu; return dd3_static_complete(rt,2u);
        }
        case 0x9CACu: {
            uint16_t ea=(uint16_t)(0x04D8u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CAFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04D8u,ea)?1u:0u));
        }
        case 0x9CAFu: {
            dd3_static_write8(rt,(uint16_t)(0x045Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9CB2u; return dd3_static_complete(rt,5u);
        }
        case 0x9CB2u: {
            uint8_t v=0x81u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CB4u; return dd3_static_complete(rt,2u);
        }
        case 0x9CB4u: {
            dd3_static_write8(rt,(uint16_t)(0x04D3u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9CB7u; return dd3_static_complete(rt,5u);
        }
        case 0x9CB7u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9CB8u; return dd3_static_complete(rt,2u);
        }
        case 0x9CB8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9CBAu,0x9CA5u)) c++; rt->state.cpu.pc=0x9CA5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9CBAu; return dd3_static_complete(rt,2u);
        }
        case 0x9CBAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9CCBu: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CCDu; return dd3_static_complete(rt,2u);
        }
        case 0x9CCDu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CCFu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0x9CCFu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CD1u; return dd3_static_complete(rt,3u);
        }
        case 0x9CD1u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9CD2u; return dd3_static_complete(rt,2u);
        }
        case 0x9CD2u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CD4u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0x9CD4u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CD6u; return dd3_static_complete(rt,3u);
        }
        case 0x9CD6u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CD8u; return dd3_static_complete(rt,3u);
        }
        case 0x9CD8u: {
            uint8_t v=0xF7u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CDAu; return dd3_static_complete(rt,2u);
        }
        case 0x9CDAu: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CDCu; return dd3_static_complete(rt,3u);
        }
        case 0x9CDCu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CDEu; return dd3_static_complete(rt,2u);
        }
        case 0x9CDEu: {
            dd3_static_write8(rt,0x44u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CE0u; return dd3_static_complete(rt,3u);
        }
        case 0x9CE0u: {
            dd3_static_write8(rt,0x45u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CE2u; return dd3_static_complete(rt,3u);
        }
        case 0x9CE2u: {
            dd3_static_write8(rt,0x36u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CE4u; return dd3_static_complete(rt,3u);
        }
        case 0x9CE4u: {
            dd3_static_write8(rt,0x37u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CE6u; return dd3_static_complete(rt,3u);
        }
        case 0x9CE6u: {
            dd3_static_write8(rt,0x0487u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CE9u; return dd3_static_complete(rt,4u);
        }
        case 0x9CE9u: {
            dd3_static_write8(rt,0x0488u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CECu; return dd3_static_complete(rt,4u);
        }
        case 0x9CECu: {
            dd3_static_write8(rt,0x0489u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CEFu; return dd3_static_complete(rt,4u);
        }
        case 0x9CEFu: {
            dd3_static_write8(rt,0x048Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CF2u; return dd3_static_complete(rt,4u);
        }
        case 0x9CF2u: {
            dd3_static_write8(rt,0x048Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CF5u; return dd3_static_complete(rt,4u);
        }
        case 0x9CF5u: {
            dd3_static_write8(rt,0x048Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CF8u; return dd3_static_complete(rt,4u);
        }
        case 0x9CF8u: {
            dd3_static_write8(rt,0x03BCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CFBu; return dd3_static_complete(rt,4u);
        }
        case 0x9CFBu: {
            dd3_static_write8(rt,0x03BDu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CFEu; return dd3_static_complete(rt,4u);
        }
        case 0x9CFEu: {
            dd3_static_write8(rt,0x03BEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D01u; return dd3_static_complete(rt,4u);
        }
        case 0x9D01u: {
            dd3_static_write8(rt,0x03BFu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D04u; return dd3_static_complete(rt,4u);
        }
        case 0x9D04u: {
            dd3_static_write8(rt,0x0483u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D07u; return dd3_static_complete(rt,4u);
        }
        case 0x9D07u: {
            dd3_static_write8(rt,0x0484u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D0Au; return dd3_static_complete(rt,4u);
        }
        case 0x9D0Au: {
            dd3_static_write8(rt,0x3Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D0Cu; return dd3_static_complete(rt,3u);
        }
        case 0x9D0Cu: {
            dd3_static_write8(rt,0x3Du,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D0Eu; return dd3_static_complete(rt,3u);
        }
        case 0x9D0Eu: {
            dd3_static_write8(rt,0x3Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D10u; return dd3_static_complete(rt,3u);
        }
        case 0x9D10u: {
            dd3_static_write8(rt,0x3Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D12u; return dd3_static_complete(rt,3u);
        }
        case 0x9D12u: {
            dd3_static_write8(rt,0xAAu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D14u; return dd3_static_complete(rt,3u);
        }
        case 0x9D14u: {
            dd3_static_write8(rt,0xABu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D16u; return dd3_static_complete(rt,3u);
        }
        case 0x9D16u: {
            dd3_static_write8(rt,0x0394u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D19u; return dd3_static_complete(rt,4u);
        }
        case 0x9D19u: {
            dd3_static_write8(rt,0x0395u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D1Cu; return dd3_static_complete(rt,4u);
        }
        case 0x9D1Cu: {
            dd3_static_write8(rt,0x0382u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D1Fu; return dd3_static_complete(rt,4u);
        }
        case 0x9D1Fu: {
            dd3_static_write8(rt,0x0383u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D22u; return dd3_static_complete(rt,4u);
        }
        case 0x9D22u: {
            dd3_static_write8(rt,0x03C3u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D25u; return dd3_static_complete(rt,4u);
        }
        case 0x9D25u: {
            dd3_static_write8(rt,0x06AEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D28u; return dd3_static_complete(rt,4u);
        }
        case 0x9D28u: {
            uint16_t ea=0x00F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D2Bu; return dd3_static_complete(rt,4u);
        }
        case 0x9D2Bu: {
            uint16_t ea=(uint16_t)(0xF690u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D2Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xF690u,ea)?1u:0u));
        }
        case 0x9D2Eu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9D30u,0x9D89u)) c++; rt->state.cpu.pc=0x9D89u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9D30u; return dd3_static_complete(rt,2u);
        }
        case 0x9D30u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D32u; return dd3_static_complete(rt,2u);
        }
        case 0x9D32u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D34u; return dd3_static_complete(rt,3u);
        }
        case 0x9D34u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D36u; return dd3_static_complete(rt,3u);
        }
        case 0x9D36u: {
            uint16_t ea=0x0485u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D39u; return dd3_static_complete(rt,4u);
        }
        case 0x9D39u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9D3Bu,0x9D55u)) c++; rt->state.cpu.pc=0x9D55u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9D3Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9D3Bu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D3Du; return dd3_static_complete(rt,2u);
        }
        case 0x9D3Du: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9D3Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9D3Eu: {
            uint16_t ea=0x74u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D40u; return dd3_static_complete(rt,3u);
        }
        case 0x9D40u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9D41u; return dd3_static_complete(rt,2u);
        }
        case 0x9D41u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.y);
            rt->state.cpu.pc=0x9D43u; return dd3_static_complete(rt,3u);
        }
        case 0x9D43u: {
            uint16_t ea=(uint16_t)(0x9E19u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D46u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9E19u,ea)?1u:0u));
        }
        case 0x9D46u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9D48u; return dd3_static_complete(rt,4u);
        }
        case 0x9D48u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9D4Au,0x9D55u)) c++; rt->state.cpu.pc=0x9D55u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9D4Au; return dd3_static_complete(rt,2u);
        }
        case 0x9D4Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D4Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9D4Cu: {
            dd3_static_write8(rt,0x0481u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D4Fu; return dd3_static_complete(rt,4u);
        }
        case 0x9D4Fu: {
            dd3_static_write8(rt,0x0485u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D52u; return dd3_static_complete(rt,4u);
        }
        case 0x9D52u: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9D55u; return dd3_static_complete(rt,5u);
        }
        case 0x9D55u: {
            uint16_t ea=0x0486u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D58u; return dd3_static_complete(rt,4u);
        }
        case 0x9D58u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9D5Au,0x9D73u)) c++; rt->state.cpu.pc=0x9D73u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9D5Au; return dd3_static_complete(rt,2u);
        }
        case 0x9D5Au: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D5Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9D5Cu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9D5Du; return dd3_static_complete(rt,2u);
        }
        case 0x9D5Du: {
            uint16_t ea=0x75u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D5Fu; return dd3_static_complete(rt,3u);
        }
        case 0x9D5Fu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9D60u; return dd3_static_complete(rt,2u);
        }
        case 0x9D60u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.y);
            rt->state.cpu.pc=0x9D62u; return dd3_static_complete(rt,3u);
        }
        case 0x9D62u: {
            uint16_t ea=(uint16_t)(0x9E19u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D65u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9E19u,ea)?1u:0u));
        }
        case 0x9D65u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9D67u; return dd3_static_complete(rt,4u);
        }
        case 0x9D67u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9D69u,0x9D73u)) c++; rt->state.cpu.pc=0x9D73u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9D69u; return dd3_static_complete(rt,2u);
        }
        case 0x9D69u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D6Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9D6Bu: {
            dd3_static_write8(rt,0x0482u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D6Eu; return dd3_static_complete(rt,4u);
        }
        case 0x9D6Eu: {
            dd3_static_write8(rt,0x0486u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D71u; return dd3_static_complete(rt,4u);
        }
        case 0x9D71u: {
            dd3_static_write8(rt,(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9D73u; return dd3_static_complete(rt,4u);
        }
        case 0x9D73u: {
            uint8_t v=0x04u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D75u; return dd3_static_complete(rt,2u);
        }
        case 0x9D75u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x9D77u; return dd3_static_complete(rt,3u);
        }
        case 0x9D77u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9D79u,0x9D82u)) c++; rt->state.cpu.pc=0x9D82u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9D79u; return dd3_static_complete(rt,2u);
        }
        case 0x9D79u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9D7Bu; return dd3_static_complete(rt,3u);
        }
        case 0x9D7Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9D7Du,0x9D82u)) c++; rt->state.cpu.pc=0x9D82u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9D7Du; return dd3_static_complete(rt,2u);
        }
        case 0x9D7Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D7Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9D7Fu: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9D82u; return dd3_static_complete(rt,5u);
        }
        case 0x9D82u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9D83u; return dd3_static_complete(rt,2u);
        }
        case 0x9D83u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x9D85u; return dd3_static_complete(rt,2u);
        }
        case 0x9D85u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9D87u,0x9D75u)) c++; rt->state.cpu.pc=0x9D75u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9D87u; return dd3_static_complete(rt,2u);
        }
        case 0x9D87u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9D89u,0x9D9Fu)) c++; rt->state.cpu.pc=0x9D9Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9D89u; return dd3_static_complete(rt,2u);
        }
        case 0x9D89u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D8Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9D8Bu: {
            dd3_static_write8(rt,0x0481u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D8Eu; return dd3_static_complete(rt,4u);
        }
        case 0x9D8Eu: {
            dd3_static_write8(rt,0x0482u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D91u; return dd3_static_complete(rt,4u);
        }
        case 0x9D91u: {
            dd3_static_write8(rt,0x0485u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D94u; return dd3_static_complete(rt,4u);
        }
        case 0x9D94u: {
            dd3_static_write8(rt,0x0486u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D97u; return dd3_static_complete(rt,4u);
        }
        case 0x9D97u: {
            dd3_static_write8(rt,0x40u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D99u; return dd3_static_complete(rt,3u);
        }
        case 0x9D99u: {
            dd3_static_write8(rt,0x41u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D9Bu; return dd3_static_complete(rt,3u);
        }
        case 0x9D9Bu: {
            dd3_static_write8(rt,0x42u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D9Du; return dd3_static_complete(rt,3u);
        }
        case 0x9D9Du: {
            dd3_static_write8(rt,0x43u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D9Fu; return dd3_static_complete(rt,3u);
        }
        case 0x9D9Fu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DA1u; return dd3_static_complete(rt,2u);
        }
        case 0x9DA1u: {
            dd3_static_write8(rt,0x0405u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9DA4u; return dd3_static_complete(rt,4u);
        }
        case 0x9DA4u: {
            dd3_static_write8(rt,0x0406u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9DA7u; return dd3_static_complete(rt,4u);
        }
        case 0x9DA7u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DA9u; return dd3_static_complete(rt,2u);
        }
        case 0x9DA9u: {
            dd3_static_write8(rt,0x4Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9DABu; return dd3_static_complete(rt,3u);
        }
        case 0x9DABu: {
            dd3_static_write8(rt,0x4Du,rt->state.cpu.a);
            rt->state.cpu.pc=0x9DADu; return dd3_static_complete(rt,3u);
        }
        case 0x9DADu: {
            uint16_t ea=0x00FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DB0u; return dd3_static_complete(rt,4u);
        }
        case 0x9DB0u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9DB2u,0x9DBDu)) c++; rt->state.cpu.pc=0x9DBDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9DB2u; return dd3_static_complete(rt,2u);
        }
        case 0x9DB2u: {
            uint16_t ea=0x74u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DB4u; return dd3_static_complete(rt,3u);
        }
        case 0x9DB4u: {
            uint16_t ea=(uint16_t)(0x04D3u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DB7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04D3u,ea)?1u:0u));
        }
        case 0x9DB7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9DB9u,0x9DBDu)) c++; rt->state.cpu.pc=0x9DBDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9DB9u; return dd3_static_complete(rt,2u);
        }
        case 0x9DB9u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DBBu; return dd3_static_complete(rt,2u);
        }
        case 0x9DBBu: {
            dd3_static_write8(rt,0x3Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9DBDu; return dd3_static_complete(rt,3u);
        }
        case 0x9DBDu: {
            uint16_t ea=0x00FFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DC0u; return dd3_static_complete(rt,4u);
        }
        case 0x9DC0u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9DC2u,0x9DCDu)) c++; rt->state.cpu.pc=0x9DCDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9DC2u; return dd3_static_complete(rt,2u);
        }
        case 0x9DC2u: {
            uint16_t ea=0x75u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DC4u; return dd3_static_complete(rt,3u);
        }
        case 0x9DC4u: {
            uint16_t ea=(uint16_t)(0x04D3u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DC7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04D3u,ea)?1u:0u));
        }
        case 0x9DC7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9DC9u,0x9DCDu)) c++; rt->state.cpu.pc=0x9DCDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9DC9u; return dd3_static_complete(rt,2u);
        }
        case 0x9DC9u: {
            uint8_t v=0x80u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DCBu; return dd3_static_complete(rt,2u);
        }
        case 0x9DCBu: {
            dd3_static_write8(rt,0x3Du,rt->state.cpu.y);
            rt->state.cpu.pc=0x9DCDu; return dd3_static_complete(rt,3u);
        }
        case 0x9DCDu: {
            dd3_static_push8(rt,(uint8_t)(0x9DCFu>>8)); dd3_static_push8(rt,(uint8_t)0x9DCFu);
            rt->state.cpu.pc=0x9C79u; return dd3_static_complete(rt,6u);
        }
        case 0x9DD0u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DD2u; return dd3_static_complete(rt,2u);
        }
        case 0x9DD2u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DD4u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9DD4u: {
            dd3_static_write8(rt,0xB7u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9DD6u; return dd3_static_complete(rt,3u);
        }
        case 0x9DD6u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9DD7u; return dd3_static_complete(rt,2u);
        }
        case 0x9DD7u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DD9u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9DD9u: {
            dd3_static_write8(rt,0xC1u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9DDBu; return dd3_static_complete(rt,3u);
        }
        case 0x9DDBu: {
            dd3_static_write8(rt,0xC2u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9DDDu; return dd3_static_complete(rt,3u);
        }
        case 0x9DDDu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9DDEu; return dd3_static_complete(rt,2u);
        }
        case 0x9DDEu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DE0u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9DE0u: {
            dd3_static_write8(rt,0xCBu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9DE2u; return dd3_static_complete(rt,3u);
        }
        case 0x9DE2u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9DE3u; return dd3_static_complete(rt,2u);
        }
        case 0x9DE3u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DE5u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9DE5u: {
            dd3_static_write8(rt,0xDFu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9DE7u; return dd3_static_complete(rt,3u);
        }
        case 0x9DE7u: {
            dd3_static_write8(rt,0xE0u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9DE9u; return dd3_static_complete(rt,3u);
        }
        case 0x9DE9u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9DEAu; return dd3_static_complete(rt,2u);
        }
        case 0x9DEAu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DECu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9DECu: {
            dd3_static_write8(rt,0xE9u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9DEEu; return dd3_static_complete(rt,3u);
        }
        case 0x9DEEu: {
            dd3_static_write8(rt,0xEAu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9DF0u; return dd3_static_complete(rt,3u);
        }
        case 0x9DF0u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9DF1u; return dd3_static_complete(rt,2u);
        }
        case 0x9DF1u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DF3u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9DF3u: {
            dd3_static_write8(rt,0xB8u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9DF5u; return dd3_static_complete(rt,3u);
        }
        case 0x9DF5u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9DF6u; return dd3_static_complete(rt,2u);
        }
        case 0x9DF6u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DF8u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9DF8u: {
            dd3_static_write8(rt,0xCCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9DFAu; return dd3_static_complete(rt,3u);
        }
        case 0x9DFAu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9DFBu; return dd3_static_complete(rt,2u);
        }
        case 0x9DFBu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DFDu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9DFDu: {
            dd3_static_write8(rt,0x68u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9DFFu; return dd3_static_complete(rt,3u);
        }
        case 0x9DFFu: {
            dd3_static_write8(rt,0x69u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E01u; return dd3_static_complete(rt,3u);
        }
        case 0x9E01u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E03u; return dd3_static_complete(rt,2u);
        }
        case 0x9E03u: {
            dd3_static_write8(rt,0xD5u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E05u; return dd3_static_complete(rt,3u);
        }
        case 0x9E05u: {
            dd3_static_write8(rt,0xD6u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E07u; return dd3_static_complete(rt,3u);
        }
        case 0x9E07u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E09u; return dd3_static_complete(rt,3u);
        }
        case 0x9E09u: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E0Bu; return dd3_static_complete(rt,3u);
        }
        case 0x9E0Bu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9E0Du,0x9E10u)) c++; rt->state.cpu.pc=0x9E10u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9E0Du; return dd3_static_complete(rt,2u);
        }
        case 0x9E0Du: {
            dd3_static_push8(rt,(uint8_t)(0x9E0Fu>>8)); dd3_static_push8(rt,(uint8_t)0x9E0Fu);
            rt->state.cpu.pc=0x9E1Du; return dd3_static_complete(rt,6u);
        }
        case 0x9E10u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E12u; return dd3_static_complete(rt,2u);
        }
        case 0x9E12u: {
            dd3_static_write8(rt,0x0309u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E15u; return dd3_static_complete(rt,4u);
        }
        case 0x9E15u: {
            dd3_static_write8(rt,0x030Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E18u; return dd3_static_complete(rt,4u);
        }
        case 0x9E18u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9E1Du: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E1Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9E1Fu: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E21u; return dd3_static_complete(rt,4u);
        }
        case 0x9E21u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9E23u,0x9E25u)) c++; rt->state.cpu.pc=0x9E25u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9E23u; return dd3_static_complete(rt,2u);
        }
        case 0x9E23u: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E25u; return dd3_static_complete(rt,2u);
        }
        case 0x9E25u: {
            uint16_t ea=0xB7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E27u; return dd3_static_complete(rt,3u);
        }
        case 0x9E27u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x9E28u; return dd3_static_complete(rt,2u);
        }
        case 0x9E28u: {
            uint16_t ea=0xB8u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x9E2Au; return dd3_static_complete(rt,3u);
        }
        case 0x9E2Au: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9E2Cu; return dd3_static_complete(rt,4u);
        }
        case 0x9E2Cu: {
            uint16_t ea=0xC1u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E2Eu; return dd3_static_complete(rt,3u);
        }
        case 0x9E2Eu: {
            uint16_t ea=0xC2u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x9E30u; return dd3_static_complete(rt,3u);
        }
        case 0x9E30u: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9E32u; return dd3_static_complete(rt,4u);
        }
        case 0x9E32u: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9E34u; return dd3_static_complete(rt,6u);
        }
        case 0x9E34u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=v&1u; v=(uint8_t)((v>>1)|(c<<7)); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9E36u; return dd3_static_complete(rt,6u);
        }
        case 0x9E36u: {
            uint16_t ea=0xCBu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E38u; return dd3_static_complete(rt,3u);
        }
        case 0x9E38u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x9E39u; return dd3_static_complete(rt,2u);
        }
        case 0x9E39u: {
            uint16_t ea=0xCCu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x9E3Bu; return dd3_static_complete(rt,3u);
        }
        case 0x9E3Bu: {
            dd3_static_write8(rt,(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9E3Du; return dd3_static_complete(rt,4u);
        }
        case 0x9E3Du: {
            uint16_t ea=0xD5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E3Fu; return dd3_static_complete(rt,3u);
        }
        case 0x9E3Fu: {
            uint16_t ea=0xD6u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x9E41u; return dd3_static_complete(rt,3u);
        }
        case 0x9E41u: {
            dd3_static_write8(rt,(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9E43u; return dd3_static_complete(rt,4u);
        }
        case 0x9E43u: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9E45u; return dd3_static_complete(rt,6u);
        }
        case 0x9E45u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=v&1u; v=(uint8_t)((v>>1)|(c<<7)); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9E47u; return dd3_static_complete(rt,6u);
        }
        case 0x9E47u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9E48u: {
            uint16_t ea=0x00F9u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E4Bu; return dd3_static_complete(rt,4u);
        }
        case 0x9E4Bu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E4Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9E4Cu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9E4Du; return dd3_static_complete(rt,2u);
        }
        case 0x9E4Du: {
            uint16_t ea=(uint16_t)(0xA02Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E50u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA02Cu,ea)?1u:0u));
        }
        case 0x9E50u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E52u; return dd3_static_complete(rt,3u);
        }
        case 0x9E52u: {
            uint16_t ea=(uint16_t)(0xA02Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E55u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA02Du,ea)?1u:0u));
        }
        case 0x9E55u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E57u; return dd3_static_complete(rt,3u);
        }
        case 0x9E57u: {
            dd3_static_push8(rt,(uint8_t)(0x9E59u>>8)); dd3_static_push8(rt,(uint8_t)0x9E59u);
            rt->state.cpu.pc=0xA0E9u; return dd3_static_complete(rt,6u);
        }
        case 0x9E5Au: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9E5Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9E5Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9E5Eu,0x9E8Eu)) c++; rt->state.cpu.pc=0x9E8Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9E5Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9E5Eu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9E60u; return dd3_static_complete(rt,2u);
        }
        case 0x9E60u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9E62u,0x9E63u)) c++; rt->state.cpu.pc=0x9E63u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9E62u; return dd3_static_complete(rt,2u);
        }
        case 0x9E62u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9E63u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E65u; return dd3_static_complete(rt,2u);
        }
        case 0x9E65u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E67u; return dd3_static_complete(rt,3u);
        }
        case 0x9E67u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9E69u,0x9E6Bu)) c++; rt->state.cpu.pc=0x9E6Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9E69u; return dd3_static_complete(rt,2u);
        }
        case 0x9E69u: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E6Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9E6Bu: {
            uint16_t ea=(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E6Du; return dd3_static_complete(rt,4u);
        }
        case 0x9E6Du: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E6Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9E6Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9E71u,0x9E7Cu)) c++; rt->state.cpu.pc=0x9E7Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9E71u; return dd3_static_complete(rt,2u);
        }
        case 0x9E71u: {
            dd3_static_push8(rt,(uint8_t)(0x9E73u>>8)); dd3_static_push8(rt,(uint8_t)0x9E73u);
            rt->state.cpu.pc=0x9FBEu; return dd3_static_complete(rt,6u);
        }
        case 0x9E74u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9E76u,0x9E8Du)) c++; rt->state.cpu.pc=0x9E8Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9E76u; return dd3_static_complete(rt,2u);
        }
        case 0x9E76u: {
            uint16_t ea=(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E78u; return dd3_static_complete(rt,4u);
        }
        case 0x9E78u: {
            uint8_t v=0xFCu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E7Au; return dd3_static_complete(rt,2u);
        }
        case 0x9E7Au: {
            dd3_static_write8(rt,(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9E7Cu; return dd3_static_complete(rt,4u);
        }
        case 0x9E7Cu: {
            dd3_static_push8(rt,(uint8_t)(0x9E7Eu>>8)); dd3_static_push8(rt,(uint8_t)0x9E7Eu);
            rt->state.cpu.pc=0x9F3Fu; return dd3_static_complete(rt,6u);
        }
        case 0x9E7Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9E81u,0x9E8Du)) c++; rt->state.cpu.pc=0x9E8Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9E81u; return dd3_static_complete(rt,2u);
        }
        case 0x9E81u: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E83u; return dd3_static_complete(rt,3u);
        }
        case 0x9E83u: {
            uint8_t v=0xF7u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E85u; return dd3_static_complete(rt,2u);
        }
        case 0x9E85u: {
            dd3_static_write8(rt,0x35u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E87u; return dd3_static_complete(rt,3u);
        }
        case 0x9E87u: {
            uint16_t ea=0x00F5u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9E8Au; return dd3_static_complete(rt,6u);
        }
        case 0x9E8Au: {
            dd3_static_push8(rt,(uint8_t)(0x9E8Cu>>8)); dd3_static_push8(rt,(uint8_t)0x9E8Cu);
            rt->state.cpu.pc=0x9719u; return dd3_static_complete(rt,6u);
        }
        case 0x9E8Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9E8Eu: {
            uint16_t ea=0x36u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E90u; return dd3_static_complete(rt,3u);
        }
        case 0x9E90u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E92u; return dd3_static_complete(rt,2u);
        }
        case 0x9E92u: {
            dd3_static_write8(rt,0x36u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E94u; return dd3_static_complete(rt,3u);
        }
        case 0x9E94u: {
            uint16_t ea=0x37u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E96u; return dd3_static_complete(rt,3u);
        }
        case 0x9E96u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E98u; return dd3_static_complete(rt,2u);
        }
        case 0x9E98u: {
            dd3_static_write8(rt,0x37u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E9Au; return dd3_static_complete(rt,3u);
        }
        case 0x9E9Au: {
            uint16_t ea=0x36u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E9Cu; return dd3_static_complete(rt,3u);
        }
        case 0x9E9Cu: {
            uint16_t ea=0x37u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E9Eu; return dd3_static_complete(rt,3u);
        }
        case 0x9E9Eu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EA0u; return dd3_static_complete(rt,2u);
        }
        case 0x9EA0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9EA2u,0x9F13u)) c++; rt->state.cpu.pc=0x9F13u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EA2u; return dd3_static_complete(rt,2u);
        }
        case 0x9EA2u: {
            uint16_t ea=0x36u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EA4u; return dd3_static_complete(rt,3u);
        }
        case 0x9EA4u: {
            uint16_t ea=0x37u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EA6u; return dd3_static_complete(rt,3u);
        }
        case 0x9EA6u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EA8u; return dd3_static_complete(rt,2u);
        }
        case 0x9EA8u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9EAAu,0x9EBFu)) c++; rt->state.cpu.pc=0x9EBFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EAAu; return dd3_static_complete(rt,2u);
        }
        case 0x9EAAu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EACu; return dd3_static_complete(rt,2u);
        }
        case 0x9EACu: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EAEu; return dd3_static_complete(rt,4u);
        }
        case 0x9EAEu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9EB0u,0x9EB5u)) c++; rt->state.cpu.pc=0x9EB5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EB0u; return dd3_static_complete(rt,2u);
        }
        case 0x9EB0u: {
            dd3_static_push8(rt,(uint8_t)(0x9EB2u>>8)); dd3_static_push8(rt,(uint8_t)0x9EB2u);
            rt->state.cpu.pc=0x9FBEu; return dd3_static_complete(rt,6u);
        }
        case 0x9EB3u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9EB5u,0x9EBBu)) c++; rt->state.cpu.pc=0x9EBBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EB5u; return dd3_static_complete(rt,2u);
        }
        case 0x9EB5u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9EB6u; return dd3_static_complete(rt,2u);
        }
        case 0x9EB6u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x9EB8u; return dd3_static_complete(rt,2u);
        }
        case 0x9EB8u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9EBAu,0x9EB0u)) c++; rt->state.cpu.pc=0x9EB0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EBAu; return dd3_static_complete(rt,2u);
        }
        case 0x9EBAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9EBBu: {
            dd3_static_push8(rt,(uint8_t)(0x9EBDu>>8)); dd3_static_push8(rt,(uint8_t)0x9EBDu);
            rt->state.cpu.pc=0x9F3Fu; return dd3_static_complete(rt,6u);
        }
        case 0x9EBEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9EBFu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EC1u; return dd3_static_complete(rt,2u);
        }
        case 0x9EC1u: {
            uint16_t ea=0x36u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EC3u; return dd3_static_complete(rt,3u);
        }
        case 0x9EC3u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EC5u; return dd3_static_complete(rt,2u);
        }
        case 0x9EC5u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9EC7u,0x9EC9u)) c++; rt->state.cpu.pc=0x9EC9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EC7u; return dd3_static_complete(rt,2u);
        }
        case 0x9EC7u: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EC9u; return dd3_static_complete(rt,2u);
        }
        case 0x9EC9u: {
            uint16_t ea=(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9ECBu; return dd3_static_complete(rt,4u);
        }
        case 0x9ECBu: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9ECDu; return dd3_static_complete(rt,2u);
        }
        case 0x9ECDu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9ECFu; return dd3_static_complete(rt,2u);
        }
        case 0x9ECFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9ED1u,0x9EE5u)) c++; rt->state.cpu.pc=0x9EE5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9ED1u; return dd3_static_complete(rt,2u);
        }
        case 0x9ED1u: {
            uint16_t ea=0x04CCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9ED4u; return dd3_static_complete(rt,4u);
        }
        case 0x9ED4u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9ED6u,0x9EE4u)) c++; rt->state.cpu.pc=0x9EE4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9ED6u; return dd3_static_complete(rt,2u);
        }
        case 0x9ED6u: {
            uint16_t ea=(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9ED8u; return dd3_static_complete(rt,4u);
        }
        case 0x9ED8u: {
            uint8_t v=0xFCu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EDAu; return dd3_static_complete(rt,2u);
        }
        case 0x9EDAu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EDCu; return dd3_static_complete(rt,2u);
        }
        case 0x9EDCu: {
            dd3_static_write8(rt,(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9EDEu; return dd3_static_complete(rt,4u);
        }
        case 0x9EDEu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EE0u; return dd3_static_complete(rt,2u);
        }
        case 0x9EE0u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9EE2u; return dd3_static_complete(rt,4u);
        }
        case 0x9EE2u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9EE4u; return dd3_static_complete(rt,4u);
        }
        case 0x9EE4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9EE5u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9EE7u; return dd3_static_complete(rt,2u);
        }
        case 0x9EE7u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9EE9u,0x9F12u)) c++; rt->state.cpu.pc=0x9F12u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EE9u; return dd3_static_complete(rt,2u);
        }
        case 0x9EE9u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EEAu; return dd3_static_complete(rt,2u);
        }
        case 0x9EEAu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EECu; return dd3_static_complete(rt,2u);
        }
        case 0x9EECu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9EEDu; return dd3_static_complete(rt,2u);
        }
        case 0x9EEDu: {
            dd3_static_push8(rt,(uint8_t)(0x9EEFu>>8)); dd3_static_push8(rt,(uint8_t)0x9EEFu);
            rt->state.cpu.pc=0x9FBEu; return dd3_static_complete(rt,6u);
        }
        case 0x9EF0u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9EF2u,0x9F12u)) c++; rt->state.cpu.pc=0x9F12u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EF2u; return dd3_static_complete(rt,2u);
        }
        case 0x9EF2u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EF4u; return dd3_static_complete(rt,2u);
        }
        case 0x9EF4u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9EF6u; return dd3_static_complete(rt,4u);
        }
        case 0x9EF6u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9EF8u; return dd3_static_complete(rt,4u);
        }
        case 0x9EF8u: {
            uint16_t ea=0x36u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EFAu; return dd3_static_complete(rt,3u);
        }
        case 0x9EFAu: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EFCu; return dd3_static_complete(rt,2u);
        }
        case 0x9EFCu: {
            dd3_static_write8(rt,0x36u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EFEu; return dd3_static_complete(rt,3u);
        }
        case 0x9EFEu: {
            dd3_static_write8(rt,0x37u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F00u; return dd3_static_complete(rt,3u);
        }
        case 0x9F00u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F02u; return dd3_static_complete(rt,2u);
        }
        case 0x9F02u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F04u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9F04u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F06u; return dd3_static_complete(rt,2u);
        }
        case 0x9F06u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9F08u,0x9F0Cu)) c++; rt->state.cpu.pc=0x9F0Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F08u; return dd3_static_complete(rt,2u);
        }
        case 0x9F08u: {
            dd3_static_push8(rt,(uint8_t)(0x9F0Au>>8)); dd3_static_push8(rt,(uint8_t)0x9F0Au);
            rt->state.cpu.pc=0x9F19u; return dd3_static_complete(rt,6u);
        }
        case 0x9F0Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F0Cu: {
            uint16_t ea=0x00F5u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9F0Fu; return dd3_static_complete(rt,6u);
        }
        case 0x9F0Fu: {
            dd3_static_push8(rt,(uint8_t)(0x9F11u>>8)); dd3_static_push8(rt,(uint8_t)0x9F11u);
            rt->state.cpu.pc=0x9719u; return dd3_static_complete(rt,6u);
        }
        case 0x9F12u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F13u: {
            uint16_t ea=0x04CCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F16u; return dd3_static_complete(rt,4u);
        }
        case 0x9F16u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9F18u,0x9F0Cu)) c++; rt->state.cpu.pc=0x9F0Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F18u; return dd3_static_complete(rt,2u);
        }
        case 0x9F18u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F19u: {
            uint8_t v=0x09u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F1Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9F1Bu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F1Du; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9F1Du: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F1Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9F1Fu: {
            dd3_static_write8(rt,0x04CCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F22u; return dd3_static_complete(rt,4u);
        }
        case 0x9F22u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F24u; return dd3_static_complete(rt,2u);
        }
        case 0x9F24u: {
            dd3_static_write8(rt,0x04CDu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F27u; return dd3_static_complete(rt,4u);
        }
        case 0x9F27u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F28u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F29u; return dd3_static_complete(rt,2u);
        }
        case 0x9F29u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9F2Au; return dd3_static_complete(rt,2u);
        }
        case 0x9F2Au: {
            uint16_t ea=(uint16_t)(0xA02Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F2Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA02Cu,ea)?1u:0u));
        }
        case 0x9F2Du: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F2Fu; return dd3_static_complete(rt,3u);
        }
        case 0x9F2Fu: {
            uint16_t ea=(uint16_t)(0xA02Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F32u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA02Du,ea)?1u:0u));
        }
        case 0x9F32u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F34u; return dd3_static_complete(rt,3u);
        }
        case 0x9F34u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F36u; return dd3_static_complete(rt,4u);
        }
        case 0x9F36u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9F38u,0x9F3Du)) c++; rt->state.cpu.pc=0x9F3Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F38u; return dd3_static_complete(rt,2u);
        }
        case 0x9F38u: {
            dd3_static_push8(rt,(uint8_t)(0x9F3Au>>8)); dd3_static_push8(rt,(uint8_t)0x9F3Au);
            rt->state.cpu.pc=0x9FBEu; return dd3_static_complete(rt,6u);
        }
        case 0x9F3Bu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9F3Du,0x9F3Eu)) c++; rt->state.cpu.pc=0x9F3Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F3Du; return dd3_static_complete(rt,2u);
        }
        case 0x9F3Du: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x9F3Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9F3Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F3Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F41u; return dd3_static_complete(rt,2u);
        }
        case 0x9F41u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F43u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9F43u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9F45u,0x9FB0u)) c++; rt->state.cpu.pc=0x9FB0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F45u; return dd3_static_complete(rt,2u);
        }
        case 0x9F45u: {
            uint16_t ea=(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F47u; return dd3_static_complete(rt,4u);
        }
        case 0x9F47u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F49u; return dd3_static_complete(rt,2u);
        }
        case 0x9F49u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9F4Bu,0x9F66u)) c++; rt->state.cpu.pc=0x9F66u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F4Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9F4Bu: {
            uint8_t v=0x37u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F4Du; return dd3_static_complete(rt,2u);
        }
        case 0x9F4Du: {
            dd3_static_push8(rt,(uint8_t)(0x9F4Fu>>8)); dd3_static_push8(rt,(uint8_t)0x9F4Fu);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0x9F50u: {
            uint8_t v=0x09u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F52u; return dd3_static_complete(rt,2u);
        }
        case 0x9F52u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F54u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9F54u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F56u; return dd3_static_complete(rt,2u);
        }
        case 0x9F56u: {
            dd3_static_write8(rt,0x04CCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F59u; return dd3_static_complete(rt,4u);
        }
        case 0x9F59u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F5Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9F5Bu: {
            dd3_static_write8(rt,0x04CDu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F5Eu; return dd3_static_complete(rt,4u);
        }
        case 0x9F5Eu: {
            uint16_t ea=(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F60u; return dd3_static_complete(rt,4u);
        }
        case 0x9F60u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F62u; return dd3_static_complete(rt,2u);
        }
        case 0x9F62u: {
            dd3_static_write8(rt,(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F64u; return dd3_static_complete(rt,4u);
        }
        case 0x9F64u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x9F65u; return dd3_static_complete(rt,2u);
        }
        case 0x9F65u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F66u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9F68u; return dd3_static_complete(rt,2u);
        }
        case 0x9F68u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9F6Au,0x9F92u)) c++; rt->state.cpu.pc=0x9F92u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F6Au; return dd3_static_complete(rt,2u);
        }
        case 0x9F6Au: {
            uint16_t ea=0x04CCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F6Du; return dd3_static_complete(rt,4u);
        }
        case 0x9F6Du: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9F6Fu,0x9F90u)) c++; rt->state.cpu.pc=0x9F90u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F6Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9F6Fu: {
            uint8_t v=0x37u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F71u; return dd3_static_complete(rt,2u);
        }
        case 0x9F71u: {
            dd3_static_push8(rt,(uint8_t)(0x9F73u>>8)); dd3_static_push8(rt,(uint8_t)0x9F73u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0x9F74u: {
            uint8_t v=0x09u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F76u; return dd3_static_complete(rt,2u);
        }
        case 0x9F76u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F78u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9F78u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F7Au; return dd3_static_complete(rt,2u);
        }
        case 0x9F7Au: {
            dd3_static_write8(rt,0x04CCu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F7Du; return dd3_static_complete(rt,4u);
        }
        case 0x9F7Du: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F7Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9F7Fu: {
            dd3_static_write8(rt,0x04CDu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F82u; return dd3_static_complete(rt,4u);
        }
        case 0x9F82u: {
            uint16_t ea=(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F84u; return dd3_static_complete(rt,4u);
        }
        case 0x9F84u: {
            uint8_t v=0xFCu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F86u; return dd3_static_complete(rt,2u);
        }
        case 0x9F86u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F88u; return dd3_static_complete(rt,2u);
        }
        case 0x9F88u: {
            dd3_static_write8(rt,(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F8Au; return dd3_static_complete(rt,4u);
        }
        case 0x9F8Au: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F8Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9F8Cu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F8Eu; return dd3_static_complete(rt,4u);
        }
        case 0x9F8Eu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F90u; return dd3_static_complete(rt,4u);
        }
        case 0x9F90u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x9F91u; return dd3_static_complete(rt,2u);
        }
        case 0x9F91u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F92u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9F94u; return dd3_static_complete(rt,2u);
        }
        case 0x9F94u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9F96u,0x9FB0u)) c++; rt->state.cpu.pc=0x9FB0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F96u; return dd3_static_complete(rt,2u);
        }
        case 0x9F96u: {
            uint16_t ea=(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F98u; return dd3_static_complete(rt,4u);
        }
        case 0x9F98u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F9Au; return dd3_static_complete(rt,2u);
        }
        case 0x9F9Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9F9Cu,0x9FABu)) c++; rt->state.cpu.pc=0x9FABu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F9Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9F9Cu: {
            dd3_static_push8(rt,(uint8_t)(0x9F9Eu>>8)); dd3_static_push8(rt,(uint8_t)0x9F9Eu);
            rt->state.cpu.pc=0x9F19u; return dd3_static_complete(rt,6u);
        }
        case 0x9F9Fu: {
            uint16_t ea=0x36u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FA1u; return dd3_static_complete(rt,3u);
        }
        case 0x9FA1u: {
            uint8_t v=0xEFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FA3u; return dd3_static_complete(rt,2u);
        }
        case 0x9FA3u: {
            dd3_static_write8(rt,0x36u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FA5u; return dd3_static_complete(rt,3u);
        }
        case 0x9FA5u: {
            uint16_t ea=0x37u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FA7u; return dd3_static_complete(rt,3u);
        }
        case 0x9FA7u: {
            uint8_t v=0xEFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FA9u; return dd3_static_complete(rt,2u);
        }
        case 0x9FA9u: {
            dd3_static_write8(rt,0x37u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FABu; return dd3_static_complete(rt,3u);
        }
        case 0x9FABu: {
            uint16_t ea=0x04CCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FAEu; return dd3_static_complete(rt,4u);
        }
        case 0x9FAEu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9FB0u,0x9F90u)) c++; rt->state.cpu.pc=0x9F90u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9FB0u; return dd3_static_complete(rt,2u);
        }
        case 0x9FB0u: {
            uint16_t ea=(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FB2u; return dd3_static_complete(rt,4u);
        }
        case 0x9FB2u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FB4u; return dd3_static_complete(rt,2u);
        }
        case 0x9FB4u: {
            dd3_static_write8(rt,(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9FB6u; return dd3_static_complete(rt,4u);
        }
        case 0x9FB6u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FB8u; return dd3_static_complete(rt,2u);
        }
        case 0x9FB8u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9FBAu; return dd3_static_complete(rt,4u);
        }
        case 0x9FBAu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9FBCu; return dd3_static_complete(rt,4u);
        }
        case 0x9FBCu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x9FBDu; return dd3_static_complete(rt,2u);
        }
        case 0x9FBDu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9FBEu: {
            uint8_t v=0x07u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FC0u; return dd3_static_complete(rt,2u);
        }
        case 0x9FC0u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FC2u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9FC2u: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9FC4u; return dd3_static_complete(rt,4u);
        }
        case 0x9FC4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9FC6u,0x9FF8u)) c++; rt->state.cpu.pc=0x9FF8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9FC6u; return dd3_static_complete(rt,2u);
        }
        case 0x9FC6u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9FC7u; return dd3_static_complete(rt,2u);
        }
        case 0x9FC7u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FC9u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9FC9u: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9FCBu; return dd3_static_complete(rt,4u);
        }
        case 0x9FCBu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9FCDu,0x9FF8u)) c++; rt->state.cpu.pc=0x9FF8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9FCDu; return dd3_static_complete(rt,2u);
        }
        case 0x9FCDu: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FCFu; return dd3_static_complete(rt,2u);
        }
        case 0x9FCFu: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FD1u; return dd3_static_complete(rt,4u);
        }
        case 0x9FD1u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x9FD2u; return dd3_static_complete(rt,2u);
        }
        case 0x9FD2u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x9FD4u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9FD4u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9FD5u; return dd3_static_complete(rt,2u);
        }
        case 0x9FD5u: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FD7u; return dd3_static_complete(rt,4u);
        }
        case 0x9FD7u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x9FD9u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9FD9u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9FDBu,0x9FF8u)) c++; rt->state.cpu.pc=0x9FF8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9FDBu; return dd3_static_complete(rt,2u);
        }
        case 0x9FDBu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9FDCu; return dd3_static_complete(rt,2u);
        }
        case 0x9FDCu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FDEu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9FDEu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x9FDFu; return dd3_static_complete(rt,2u);
        }
        case 0x9FDFu: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x9FE1u; return dd3_static_complete(rt,4u);
        }
        case 0x9FE1u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9FE2u; return dd3_static_complete(rt,2u);
        }
        case 0x9FE2u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FE4u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9FE4u: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x9FE6u; return dd3_static_complete(rt,4u);
        }
        case 0x9FE6u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9FE8u,0x9FF8u)) c++; rt->state.cpu.pc=0x9FF8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9FE8u; return dd3_static_complete(rt,2u);
        }
        case 0x9FE8u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9FE9u; return dd3_static_complete(rt,2u);
        }
        case 0x9FE9u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FEBu; return dd3_static_complete(rt,4u);
        }
        case 0x9FEBu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x9FECu; return dd3_static_complete(rt,2u);
        }
        case 0x9FECu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x9FEEu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9FEEu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9FF0u,0x9FF8u)) c++; rt->state.cpu.pc=0x9FF8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9FF0u; return dd3_static_complete(rt,2u);
        }
        case 0x9FF0u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9FF1u; return dd3_static_complete(rt,2u);
        }
        case 0x9FF1u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FF3u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0x9FF3u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x9FF4u; return dd3_static_complete(rt,2u);
        }
        case 0x9FF4u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x9FF6u; return dd3_static_complete(rt,4u);
        }
        case 0x9FF6u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9FF8u,0x9FFCu)) c++; rt->state.cpu.pc=0x9FFCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9FF8u; return dd3_static_complete(rt,2u);
        }
        case 0x9FF8u: {
            dd3_static_push8(rt,(uint8_t)(0x9FFAu>>8)); dd3_static_push8(rt,(uint8_t)0x9FFAu);
            rt->state.cpu.pc=0xA01Cu; return dd3_static_complete(rt,6u);
        }
        case 0x9FFBu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9FFCu: {
            uint16_t ea=(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FFEu; return dd3_static_complete(rt,4u);
        }
        case 0x9FFEu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA000u; return dd3_static_complete(rt,2u);
        }
        case 0xFC3Fu: {
            uint16_t ea=0x07u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC41u; return dd3_static_complete(rt,5u);
        }
        case 0xFC41u: {
            uint16_t ea=0x06u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC43u; return dd3_static_complete(rt,3u);
        }
        case 0xFC43u: {
            uint16_t ea=0x09u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xFC45u; return dd3_static_complete(rt,5u);
        }
        case 0xFC45u: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC47u; return dd3_static_complete(rt,2u);
        }
        case 0xFC47u: {
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&0x0Du); dd3_static_set_nz(rt,rt->state.cpu.a); rt->state.cpu.c=rt->state.cpu.n;
            rt->state.cpu.pc=0xFC49u; return dd3_static_complete(rt,2u);
        }
        case 0xFC49u: {
            uint16_t ea=0xAD10u; (void)dd3_static_read8(rt,ea);
            rt->state.cpu.pc=0xFC4Cu; return dd3_static_complete(rt,4u);
        }
        case 0xFC4Cu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xFC4Eu; return dd3_static_complete(rt,8u);
        }
        case 0xFC4Eu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC4Fu; return dd3_static_complete(rt,2u);
        }
        case 0xFC4Fu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC50u; return dd3_static_complete(rt,2u);
        }
        case 0xFC50u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC52u; return dd3_static_complete(rt,3u);
        }
        case 0xFC52u: {
            uint8_t v=0x9Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFC54u; return dd3_static_complete(rt,2u);
        }
        case 0xFC54u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xFC55u; return dd3_static_complete(rt,2u);
        }
        case 0xFC55u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xFC57u; return dd3_static_complete(rt,3u);
        }
        case 0xFC57u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC59u; return dd3_static_complete(rt,3u);
        }
        case 0xFC59u: {
            uint8_t v=0xA8u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xFC5Bu; return dd3_static_complete(rt,2u);
        }
        case 0xFC5Bu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xFC5Du; return dd3_static_complete(rt,2u);
        }
        case 0xFC5Du: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xFC5Fu; return dd3_static_complete(rt,3u);
        }
        case 0xFC5Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        default: return dd3_static_fail_unproven(rt,12,rt->state.cpu.pc);
    }
}
