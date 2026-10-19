/* Generated: no runtime opcode fetch or decode. */
#include "dd3_static_semantics.h"
int dd3_static_execute_bank_04(DD3StaticRuntime *rt) {
    switch (rt->state.cpu.pc) {
        case 0x8000u: {
            rt->state.cpu.pc=0x800Eu; return dd3_static_complete(rt,3u);
        }
        case 0x8003u: {
            rt->state.cpu.pc=0xADE0u; return dd3_static_complete(rt,3u);
        }
        case 0x800Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8010u; return dd3_static_complete(rt,2u);
        }
        case 0x8010u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8012u; return dd3_static_complete(rt,4u);
        }
        case 0x8012u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8014u,0x8019u)) c++; rt->state.cpu.pc=0x8019u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8014u; return dd3_static_complete(rt,2u);
        }
        case 0x8014u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.x);
            rt->state.cpu.pc=0x8016u; return dd3_static_complete(rt,3u);
        }
        case 0x8016u: {
            dd3_static_push8(rt,(uint8_t)(0x8018u>>8)); dd3_static_push8(rt,(uint8_t)0x8018u);
            rt->state.cpu.pc=0x805Cu; return dd3_static_complete(rt,6u);
        }
        case 0x8019u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x801Au; return dd3_static_complete(rt,2u);
        }
        case 0x801Au: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x801Cu; return dd3_static_complete(rt,2u);
        }
        case 0x801Cu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x801Eu,0x8010u)) c++; rt->state.cpu.pc=0x8010u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x801Eu; return dd3_static_complete(rt,2u);
        }
        case 0x801Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8020u; return dd3_static_complete(rt,2u);
        }
        case 0x8020u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8022u; return dd3_static_complete(rt,4u);
        }
        case 0x8022u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8024u,0x8053u)) c++; rt->state.cpu.pc=0x8053u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8024u; return dd3_static_complete(rt,2u);
        }
        case 0x8024u: {
            uint16_t ea=(uint16_t)(0x0405u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8027u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0405u,ea)?1u:0u));
        }
        case 0x8027u: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8029u; return dd3_static_complete(rt,2u);
        }
        case 0x8029u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x802Bu,0x8053u)) c++; rt->state.cpu.pc=0x8053u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x802Bu; return dd3_static_complete(rt,2u);
        }
        case 0x802Bu: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x802Du; return dd3_static_complete(rt,4u);
        }
        case 0x802Du: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x802Fu; return dd3_static_complete(rt,2u);
        }
        case 0x802Fu: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8031u; return dd3_static_complete(rt,2u);
        }
        case 0x8031u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8033u,0x8040u)) c++; rt->state.cpu.pc=0x8040u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8033u; return dd3_static_complete(rt,2u);
        }
        case 0x8033u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8035u; return dd3_static_complete(rt,4u);
        }
        case 0x8035u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8037u; return dd3_static_complete(rt,2u);
        }
        case 0x8037u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8039u; return dd3_static_complete(rt,2u);
        }
        case 0x8039u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x803Bu,0x8050u)) c++; rt->state.cpu.pc=0x8050u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x803Bu; return dd3_static_complete(rt,2u);
        }
        case 0x803Bu: {
            uint16_t ea=(uint16_t)(0x0407u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x803Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0407u,ea)?1u:0u));
        }
        case 0x803Eu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8040u; return dd3_static_complete(rt,4u);
        }
        case 0x8040u: {
            uint16_t ea=(uint16_t)(0x0405u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8043u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0405u,ea)?1u:0u));
        }
        case 0x8043u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8045u; return dd3_static_complete(rt,2u);
        }
        case 0x8045u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8047u,0x8050u)) c++; rt->state.cpu.pc=0x8050u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8047u; return dd3_static_complete(rt,2u);
        }
        case 0x8047u: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8049u; return dd3_static_complete(rt,4u);
        }
        case 0x8049u: {
            dd3_static_write8(rt,(uint16_t)(0x0407u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x804Cu; return dd3_static_complete(rt,5u);
        }
        case 0x804Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x804Eu; return dd3_static_complete(rt,2u);
        }
        case 0x804Eu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8050u; return dd3_static_complete(rt,4u);
        }
        case 0x8050u: {
            uint16_t ea=(uint16_t)(0x0405u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8053u; return dd3_static_complete(rt,7u);
        }
        case 0x8053u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8054u; return dd3_static_complete(rt,2u);
        }
        case 0x8054u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8056u; return dd3_static_complete(rt,2u);
        }
        case 0x8056u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8058u,0x8020u)) c++; rt->state.cpu.pc=0x8020u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8058u; return dd3_static_complete(rt,2u);
        }
        case 0x8058u: {
            dd3_static_push8(rt,(uint8_t)(0x805Au>>8)); dd3_static_push8(rt,(uint8_t)0x805Au);
            rt->state.cpu.pc=0xA9CAu; return dd3_static_complete(rt,6u);
        }
        case 0x805Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x805Cu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x805Eu; return dd3_static_complete(rt,4u);
        }
        case 0x805Eu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8060u,0x8063u)) c++; rt->state.cpu.pc=0x8063u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8060u; return dd3_static_complete(rt,2u);
        }
        case 0x8060u: {
            uint16_t ea=(uint16_t)(0x03F9u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8063u; return dd3_static_complete(rt,7u);
        }
        case 0x8063u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8065u; return dd3_static_complete(rt,4u);
        }
        case 0x8065u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8066u; return dd3_static_complete(rt,2u);
        }
        case 0x8066u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8067u; return dd3_static_complete(rt,2u);
        }
        case 0x8067u: {
            uint16_t ea=(uint16_t)(0x8076u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x806Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8076u,ea)?1u:0u));
        }
        case 0x806Au: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x806Cu; return dd3_static_complete(rt,3u);
        }
        case 0x806Cu: {
            uint16_t ea=(uint16_t)(0x8077u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x806Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8077u,ea)?1u:0u));
        }
        case 0x806Fu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8071u; return dd3_static_complete(rt,3u);
        }
        case 0x8071u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8073u; return dd3_static_complete(rt,3u);
        }
        case 0x8073u: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x0029u); return dd3_static_complete(rt,5u);
        }
        case 0x8176u: {
            uint16_t ea=(uint16_t)(0x04A0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8179u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A0u,ea)?1u:0u));
        }
        case 0x8179u: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x817Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0x817Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x817Eu; return dd3_static_complete(rt,2u);
        }
        case 0x817Eu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8180u; return dd3_static_complete(rt,2u);
        }
        case 0x8180u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8182u,0x818Au)) c++; rt->state.cpu.pc=0x818Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8182u; return dd3_static_complete(rt,2u);
        }
        case 0x8182u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8184u; return dd3_static_complete(rt,2u);
        }
        case 0x8184u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8186u,0x818Au)) c++; rt->state.cpu.pc=0x818Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8186u; return dd3_static_complete(rt,2u);
        }
        case 0x8186u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8188u; return dd3_static_complete(rt,2u);
        }
        case 0x8188u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x818Au; return dd3_static_complete(rt,4u);
        }
        case 0x818Au: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x818Cu; return dd3_static_complete(rt,4u);
        }
        case 0x818Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x818Eu,0x8191u)) c++; rt->state.cpu.pc=0x8191u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x818Eu; return dd3_static_complete(rt,2u);
        }
        case 0x818Eu: {
            rt->state.cpu.pc=0x81E3u; return dd3_static_complete(rt,3u);
        }
        case 0x8191u: {
            dd3_static_push8(rt,(uint8_t)(0x8193u>>8)); dd3_static_push8(rt,(uint8_t)0x8193u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x8194u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8196u; return dd3_static_complete(rt,4u);
        }
        case 0x8196u: {
            uint8_t v=0x3Cu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8198u; return dd3_static_complete(rt,2u);
        }
        case 0x8198u: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x819Au; return dd3_static_complete(rt,4u);
        }
        case 0x819Au: {
            dd3_static_push8(rt,(uint8_t)(0x819Cu>>8)); dd3_static_push8(rt,(uint8_t)0x819Cu);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x819Du: {
            dd3_static_push8(rt,(uint8_t)(0x819Fu>>8)); dd3_static_push8(rt,(uint8_t)0x819Fu);
            rt->state.cpu.pc=0x84A4u; return dd3_static_complete(rt,6u);
        }
        case 0x81A0u: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81A3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0x81A3u: {
            uint8_t v=0x91u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x81A5u; return dd3_static_complete(rt,2u);
        }
        case 0x81A5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81A7u,0x81B6u)) c++; rt->state.cpu.pc=0x81B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81A7u; return dd3_static_complete(rt,2u);
        }
        case 0x81A7u: {
            uint8_t v=0x90u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x81A9u; return dd3_static_complete(rt,2u);
        }
        case 0x81A9u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81ABu,0x81CDu)) c++; rt->state.cpu.pc=0x81CDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81ABu; return dd3_static_complete(rt,2u);
        }
        case 0x81ABu: {
            dd3_static_push8(rt,(uint8_t)(0x81ADu>>8)); dd3_static_push8(rt,(uint8_t)0x81ADu);
            rt->state.cpu.pc=0x823Fu; return dd3_static_complete(rt,6u);
        }
        case 0x81AEu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x81B0u,0x81C6u)) c++; rt->state.cpu.pc=0x81C6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81B0u; return dd3_static_complete(rt,2u);
        }
        case 0x81B0u: {
            uint8_t v=0x27u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81B2u; return dd3_static_complete(rt,2u);
        }
        case 0x81B2u: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81B4u; return dd3_static_complete(rt,2u);
        }
        case 0x81B4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81B6u,0x81D1u)) c++; rt->state.cpu.pc=0x81D1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81B6u; return dd3_static_complete(rt,2u);
        }
        case 0x81B6u: {
            dd3_static_push8(rt,(uint8_t)(0x81B8u>>8)); dd3_static_push8(rt,(uint8_t)0x81B8u);
            rt->state.cpu.pc=0x823Fu; return dd3_static_complete(rt,6u);
        }
        case 0x81B9u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x81BBu,0x81C6u)) c++; rt->state.cpu.pc=0x81C6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81BBu; return dd3_static_complete(rt,2u);
        }
        case 0x81BBu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81BDu; return dd3_static_complete(rt,2u);
        }
        case 0x81BDu: {
            dd3_static_write8(rt,(uint16_t)(0x007Du+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x81C0u; return dd3_static_complete(rt,5u);
        }
        case 0x81C0u: {
            uint8_t v=0x17u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81C2u; return dd3_static_complete(rt,2u);
        }
        case 0x81C2u: {
            uint8_t v=0x3Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81C4u; return dd3_static_complete(rt,2u);
        }
        case 0x81C4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81C6u,0x81D1u)) c++; rt->state.cpu.pc=0x81D1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81C6u; return dd3_static_complete(rt,2u);
        }
        case 0x81C6u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81C7u; return dd3_static_complete(rt,2u);
        }
        case 0x81C7u: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x81CAu; return dd3_static_complete(rt,5u);
        }
        case 0x81CAu: {
            dd3_static_push8(rt,(uint8_t)(0x81CCu>>8)); dd3_static_push8(rt,(uint8_t)0x81CCu);
            rt->state.cpu.pc=0x8CCBu; return dd3_static_complete(rt,6u);
        }
        case 0x81CDu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81CFu; return dd3_static_complete(rt,2u);
        }
        case 0x81CFu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81D1u; return dd3_static_complete(rt,2u);
        }
        case 0x81D1u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x81D3u; return dd3_static_complete(rt,4u);
        }
        case 0x81D3u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81D4u; return dd3_static_complete(rt,2u);
        }
        case 0x81D4u: {
            dd3_static_push8(rt,(uint8_t)(0x81D6u>>8)); dd3_static_push8(rt,(uint8_t)0x81D6u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x81D7u: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81DAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0x81DAu: {
            uint8_t v=0x91u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x81DCu; return dd3_static_complete(rt,2u);
        }
        case 0x81DCu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81DEu,0x81E3u)) c++; rt->state.cpu.pc=0x81E3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81DEu; return dd3_static_complete(rt,2u);
        }
        case 0x81DEu: {
            uint8_t v=0x28u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81E0u; return dd3_static_complete(rt,2u);
        }
        case 0x81E0u: {
            dd3_static_push8(rt,(uint8_t)(0x81E2u>>8)); dd3_static_push8(rt,(uint8_t)0x81E2u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x81E3u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x81E5u; return dd3_static_complete(rt,2u);
        }
        case 0x81E5u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x81E7u,0x8226u)) c++; rt->state.cpu.pc=0x8226u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81E7u; return dd3_static_complete(rt,2u);
        }
        case 0x81E7u: {
            uint16_t ea=(uint16_t)(0x04B6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81EAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B6u,ea)?1u:0u));
        }
        case 0x81EAu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81ECu; return dd3_static_complete(rt,2u);
        }
        case 0x81ECu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81EEu; return dd3_static_complete(rt,2u);
        }
        case 0x81EEu: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x81F0u; return dd3_static_complete(rt,4u);
        }
        case 0x81F0u: {
            uint16_t ea=(uint16_t)(0x04A0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81F3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A0u,ea)?1u:0u));
        }
        case 0x81F3u: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81F6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0x81F6u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81F8u; return dd3_static_complete(rt,2u);
        }
        case 0x81F8u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x81FAu; return dd3_static_complete(rt,2u);
        }
        case 0x81FAu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81FCu,0x8226u)) c++; rt->state.cpu.pc=0x8226u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81FCu; return dd3_static_complete(rt,2u);
        }
        case 0x81FCu: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81FFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0x81FFu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8201u,0x8210u)) c++; rt->state.cpu.pc=0x8210u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8201u; return dd3_static_complete(rt,2u);
        }
        case 0x8201u: {
            uint8_t v=0x90u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8203u; return dd3_static_complete(rt,2u);
        }
        case 0x8203u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8205u,0x8210u)) c++; rt->state.cpu.pc=0x8210u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8205u; return dd3_static_complete(rt,2u);
        }
        case 0x8205u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8208u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0x8208u: {
            uint8_t v=0x30u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x820Au; return dd3_static_complete(rt,2u);
        }
        case 0x820Au: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x820Cu,0x821Eu)) c++; rt->state.cpu.pc=0x821Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x820Cu; return dd3_static_complete(rt,2u);
        }
        case 0x820Cu: {
            uint8_t v=0x50u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x820Eu; return dd3_static_complete(rt,2u);
        }
        case 0x820Eu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8210u,0x8226u)) c++; rt->state.cpu.pc=0x8226u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8210u; return dd3_static_complete(rt,2u);
        }
        case 0x8210u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8213u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0x8213u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8215u; return dd3_static_complete(rt,2u);
        }
        case 0x8215u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8217u,0x821Eu)) c++; rt->state.cpu.pc=0x821Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8217u; return dd3_static_complete(rt,2u);
        }
        case 0x8217u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x821Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0x821Au: {
            uint8_t v=0x40u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x821Cu; return dd3_static_complete(rt,2u);
        }
        case 0x821Cu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x821Eu,0x8226u)) c++; rt->state.cpu.pc=0x8226u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x821Eu; return dd3_static_complete(rt,2u);
        }
        case 0x821Eu: {
            uint16_t ea=0x049Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8221u; return dd3_static_complete(rt,4u);
        }
        case 0x8221u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8223u,0x8226u)) c++; rt->state.cpu.pc=0x8226u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8223u; return dd3_static_complete(rt,2u);
        }
        case 0x8223u: {
            dd3_static_push8(rt,(uint8_t)(0x8225u>>8)); dd3_static_push8(rt,(uint8_t)0x8225u);
            rt->state.cpu.pc=0x822Au; return dd3_static_complete(rt,6u);
        }
        case 0x8226u: {
            dd3_static_push8(rt,(uint8_t)(0x8228u>>8)); dd3_static_push8(rt,(uint8_t)0x8228u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x8229u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x822Au: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x822Cu; return dd3_static_complete(rt,2u);
        }
        case 0x822Cu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x822Eu; return dd3_static_complete(rt,4u);
        }
        case 0x822Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8230u; return dd3_static_complete(rt,2u);
        }
        case 0x8230u: {
            dd3_static_write8(rt,(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8232u; return dd3_static_complete(rt,4u);
        }
        case 0x8232u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8233u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8235u; return dd3_static_complete(rt,2u);
        }
        case 0x8235u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8238u; return dd3_static_complete(rt,5u);
        }
        case 0x8238u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8239u: {
            uint8_t v=0x0Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x823Bu; return dd3_static_complete(rt,2u);
        }
        case 0x823Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x823Eu; return dd3_static_complete(rt,5u);
        }
        case 0x823Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x823Fu: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8242u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x8242u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8244u; return dd3_static_complete(rt,2u);
        }
        case 0x8244u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8245u; return dd3_static_complete(rt,2u);
        }
        case 0x8245u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8246u; return dd3_static_complete(rt,2u);
        }
        case 0x8246u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8247u; return dd3_static_complete(rt,3u);
        }
        case 0x8247u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8249u; return dd3_static_complete(rt,4u);
        }
        case 0x8249u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x824Au; return dd3_static_complete(rt,2u);
        }
        case 0x824Au: {
            uint16_t ea=(uint16_t)(0x06DFu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x824Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06DFu,ea)?1u:0u));
        }
        case 0x824Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x824Fu,0x8253u)) c++; rt->state.cpu.pc=0x8253u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x824Fu; return dd3_static_complete(rt,2u);
        }
        case 0x824Fu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8250u; return dd3_static_complete(rt,4u);
        }
        case 0x8250u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8251u; return dd3_static_complete(rt,2u);
        }
        case 0x8251u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8252u; return dd3_static_complete(rt,2u);
        }
        case 0x8252u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8253u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8254u; return dd3_static_complete(rt,4u);
        }
        case 0x8254u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8255u; return dd3_static_complete(rt,2u);
        }
        case 0x8255u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8256u; return dd3_static_complete(rt,2u);
        }
        case 0x8256u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8257u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8259u; return dd3_static_complete(rt,4u);
        }
        case 0x8259u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x825Bu,0x8281u)) c++; rt->state.cpu.pc=0x8281u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x825Bu; return dd3_static_complete(rt,2u);
        }
        case 0x825Bu: {
            dd3_static_push8(rt,(uint8_t)(0x825Du>>8)); dd3_static_push8(rt,(uint8_t)0x825Du);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x825Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8260u>>8)); dd3_static_push8(rt,(uint8_t)0x8260u);
            rt->state.cpu.pc=0x8305u; return dd3_static_complete(rt,6u);
        }
        case 0x8261u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8263u; return dd3_static_complete(rt,2u);
        }
        case 0x8263u: {
            dd3_static_push8(rt,(uint8_t)(0x8265u>>8)); dd3_static_push8(rt,(uint8_t)0x8265u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8266u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8268u; return dd3_static_complete(rt,4u);
        }
        case 0x8268u: {
            uint8_t v=0x3Eu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x826Au; return dd3_static_complete(rt,2u);
        }
        case 0x826Au: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x826Cu; return dd3_static_complete(rt,4u);
        }
        case 0x826Cu: {
            dd3_static_push8(rt,(uint8_t)(0x826Eu>>8)); dd3_static_push8(rt,(uint8_t)0x826Eu);
            rt->state.cpu.pc=0x84A4u; return dd3_static_complete(rt,6u);
        }
        case 0x826Fu: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8271u; return dd3_static_complete(rt,2u);
        }
        case 0x8271u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8273u; return dd3_static_complete(rt,4u);
        }
        case 0x8273u: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8275u; return dd3_static_complete(rt,4u);
        }
        case 0x8275u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8277u; return dd3_static_complete(rt,2u);
        }
        case 0x8277u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8279u; return dd3_static_complete(rt,2u);
        }
        case 0x8279u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x827Bu,0x8281u)) c++; rt->state.cpu.pc=0x8281u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x827Bu; return dd3_static_complete(rt,2u);
        }
        case 0x827Bu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x827Cu; return dd3_static_complete(rt,2u);
        }
        case 0x827Cu: {
            uint16_t ea=(uint16_t)(0x82F5u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x827Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x82F5u,ea)?1u:0u));
        }
        case 0x827Fu: {
            dd3_static_write8(rt,(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8281u; return dd3_static_complete(rt,4u);
        }
        case 0x8281u: {
            dd3_static_push8(rt,(uint8_t)(0x8283u>>8)); dd3_static_push8(rt,(uint8_t)0x8283u);
            rt->state.cpu.pc=0x839Eu; return dd3_static_complete(rt,6u);
        }
        case 0x8284u: {
            uint16_t ea=(uint16_t)(0x82E3u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8287u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x82E3u,ea)?1u:0u));
        }
        case 0x8287u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x828Au; return dd3_static_complete(rt,5u);
        }
        case 0x828Au: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x828Cu; return dd3_static_complete(rt,6u);
        }
        case 0x828Cu: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x828Eu; return dd3_static_complete(rt,4u);
        }
        case 0x828Eu: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8290u; return dd3_static_complete(rt,2u);
        }
        case 0x8290u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8292u,0x82C2u)) c++; rt->state.cpu.pc=0x82C2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8292u; return dd3_static_complete(rt,2u);
        }
        case 0x8292u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8294u; return dd3_static_complete(rt,2u);
        }
        case 0x8294u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8296u; return dd3_static_complete(rt,4u);
        }
        case 0x8296u: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8298u; return dd3_static_complete(rt,4u);
        }
        case 0x8298u: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x829Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0x829Bu: {
            uint8_t v=0x90u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x829Du; return dd3_static_complete(rt,2u);
        }
        case 0x829Du: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x829Fu,0x82A4u)) c++; rt->state.cpu.pc=0x82A4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x829Fu; return dd3_static_complete(rt,2u);
        }
        case 0x829Fu: {
            uint16_t ea=(uint16_t)(0x82FDu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82A2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x82FDu,ea)?1u:0u));
        }
        case 0x82A2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82A4u,0x82B4u)) c++; rt->state.cpu.pc=0x82B4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82A4u; return dd3_static_complete(rt,2u);
        }
        case 0x82A4u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82A6u; return dd3_static_complete(rt,4u);
        }
        case 0x82A6u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x82A8u; return dd3_static_complete(rt,2u);
        }
        case 0x82A8u: {
            uint8_t v=0x74u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x82AAu; return dd3_static_complete(rt,2u);
        }
        case 0x82AAu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82ACu,0x82B1u)) c++; rt->state.cpu.pc=0x82B1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82ACu; return dd3_static_complete(rt,2u);
        }
        case 0x82ACu: {
            uint16_t ea=(uint16_t)(0x8301u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82AFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8301u,ea)?1u:0u));
        }
        case 0x82AFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82B1u,0x82B4u)) c++; rt->state.cpu.pc=0x82B4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82B1u; return dd3_static_complete(rt,2u);
        }
        case 0x82B1u: {
            uint16_t ea=(uint16_t)(0x82F9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82B4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x82F9u,ea)?1u:0u));
        }
        case 0x82B4u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x82B6u; return dd3_static_complete(rt,4u);
        }
        case 0x82B6u: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x82B8u; return dd3_static_complete(rt,6u);
        }
        case 0x82B8u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82BAu; return dd3_static_complete(rt,2u);
        }
        case 0x82BAu: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x82BCu; return dd3_static_complete(rt,4u);
        }
        case 0x82BCu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x82BEu,0x82C2u)) c++; rt->state.cpu.pc=0x82C2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82BEu; return dd3_static_complete(rt,2u);
        }
        case 0x82BEu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82C0u; return dd3_static_complete(rt,2u);
        }
        case 0x82C0u: {
            dd3_static_write8(rt,(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x82C2u; return dd3_static_complete(rt,4u);
        }
        case 0x82C2u: {
            dd3_static_push8(rt,(uint8_t)(0x82C4u>>8)); dd3_static_push8(rt,(uint8_t)0x82C4u);
            rt->state.cpu.pc=0xA6B9u; return dd3_static_complete(rt,6u);
        }
        case 0x82C5u: {
            dd3_static_push8(rt,(uint8_t)(0x82C7u>>8)); dd3_static_push8(rt,(uint8_t)0x82C7u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x82C8u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82CAu; return dd3_static_complete(rt,4u);
        }
        case 0x82CAu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x82CCu; return dd3_static_complete(rt,2u);
        }
        case 0x82CCu: {
            uint8_t v=0x74u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x82CEu; return dd3_static_complete(rt,2u);
        }
        case 0x82CEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82D0u,0x82E2u)) c++; rt->state.cpu.pc=0x82E2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82D0u; return dd3_static_complete(rt,2u);
        }
        case 0x82D0u: {
            uint16_t ea=(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82D2u; return dd3_static_complete(rt,4u);
        }
        case 0x82D2u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82D4u; return dd3_static_complete(rt,4u);
        }
        case 0x82D4u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x82D5u; return dd3_static_complete(rt,2u);
        }
        case 0x82D5u: {
            uint16_t ea=(uint16_t)(0x8322u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x82D8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8322u,ea)?1u:0u));
        }
        case 0x82D8u: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82DAu; return dd3_static_complete(rt,4u);
        }
        case 0x82DAu: {
            uint16_t ea=(uint16_t)(0x8323u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x82DDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8323u,ea)?1u:0u));
        }
        case 0x82DDu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x82DFu,0x82E2u)) c++; rt->state.cpu.pc=0x82E2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82DFu; return dd3_static_complete(rt,2u);
        }
        case 0x82DFu: {
            dd3_static_push8(rt,(uint8_t)(0x82E1u>>8)); dd3_static_push8(rt,(uint8_t)0x82E1u);
            rt->state.cpu.pc=0x822Au; return dd3_static_complete(rt,6u);
        }
        case 0x82E2u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8305u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8307u; return dd3_static_complete(rt,2u);
        }
        case 0x8307u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8309u,0x8314u)) c++; rt->state.cpu.pc=0x8314u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8309u; return dd3_static_complete(rt,2u);
        }
        case 0x8309u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x830Bu; return dd3_static_complete(rt,4u);
        }
        case 0x830Bu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x830Du; return dd3_static_complete(rt,2u);
        }
        case 0x830Du: {
            uint8_t v=0x29u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x830Fu; return dd3_static_complete(rt,2u);
        }
        case 0x830Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8311u,0x8315u)) c++; rt->state.cpu.pc=0x8315u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8311u; return dd3_static_complete(rt,2u);
        }
        case 0x8311u: {
            dd3_static_push8(rt,(uint8_t)(0x8313u>>8)); dd3_static_push8(rt,(uint8_t)0x8313u);
            rt->state.cpu.pc=0x8D30u; return dd3_static_complete(rt,6u);
        }
        case 0x8314u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8315u: {
            dd3_static_push8(rt,(uint8_t)(0x8317u>>8)); dd3_static_push8(rt,(uint8_t)0x8317u);
            rt->state.cpu.pc=0x8319u; return dd3_static_complete(rt,6u);
        }
        case 0x8318u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8319u: {
            uint16_t ea=(uint16_t)(0x04AAu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x831Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04AAu,ea)?1u:0u));
        }
        case 0x831Cu: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x831Eu; return dd3_static_complete(rt,2u);
        }
        case 0x831Eu: {
            dd3_static_write8(rt,(uint16_t)(0x04AAu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8321u; return dd3_static_complete(rt,5u);
        }
        case 0x8321u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8326u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8328u; return dd3_static_complete(rt,4u);
        }
        case 0x8328u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x832Au,0x8351u)) c++; rt->state.cpu.pc=0x8351u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x832Au; return dd3_static_complete(rt,2u);
        }
        case 0x832Au: {
            dd3_static_push8(rt,(uint8_t)(0x832Cu>>8)); dd3_static_push8(rt,(uint8_t)0x832Cu);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x832Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x832Fu; return dd3_static_complete(rt,2u);
        }
        case 0x832Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8331u>>8)); dd3_static_push8(rt,(uint8_t)0x8331u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8332u: {
            dd3_static_push8(rt,(uint8_t)(0x8334u>>8)); dd3_static_push8(rt,(uint8_t)0x8334u);
            rt->state.cpu.pc=0x839Eu; return dd3_static_complete(rt,6u);
        }
        case 0x8335u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8337u; return dd3_static_complete(rt,4u);
        }
        case 0x8337u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8339u; return dd3_static_complete(rt,2u);
        }
        case 0x8339u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x833Bu; return dd3_static_complete(rt,2u);
        }
        case 0x833Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x833Eu; return dd3_static_complete(rt,5u);
        }
        case 0x833Eu: {
            uint16_t ea=(uint16_t)(0x836Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8341u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x836Bu,ea)?1u:0u));
        }
        case 0x8341u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8344u; return dd3_static_complete(rt,5u);
        }
        case 0x8344u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8346u; return dd3_static_complete(rt,2u);
        }
        case 0x8346u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8348u,0x8351u)) c++; rt->state.cpu.pc=0x8351u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8348u; return dd3_static_complete(rt,2u);
        }
        case 0x8348u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x834Au; return dd3_static_complete(rt,2u);
        }
        case 0x834Au: {
            dd3_static_write8(rt,(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x834Cu; return dd3_static_complete(rt,4u);
        }
        case 0x834Cu: {
            uint16_t ea=(uint16_t)(0x837Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x834Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x837Bu,ea)?1u:0u));
        }
        case 0x834Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8351u,0x8351u)) c++; rt->state.cpu.pc=0x8351u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8351u; return dd3_static_complete(rt,2u);
        }
        case 0x8351u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8353u; return dd3_static_complete(rt,4u);
        }
        case 0x8353u: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8356u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0x8356u: {
            uint8_t v=0x90u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8358u; return dd3_static_complete(rt,2u);
        }
        case 0x8358u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x835Au,0x835Eu)) c++; rt->state.cpu.pc=0x835Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x835Au; return dd3_static_complete(rt,2u);
        }
        case 0x835Au: {
            uint8_t v=0x1Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x835Cu; return dd3_static_complete(rt,2u);
        }
        case 0x835Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x835Eu,0x8361u)) c++; rt->state.cpu.pc=0x8361u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x835Eu; return dd3_static_complete(rt,2u);
        }
        case 0x835Eu: {
            uint16_t ea=(uint16_t)(0x837Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8361u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x837Bu,ea)?1u:0u));
        }
        case 0x8361u: {
            dd3_static_push8(rt,(uint8_t)(0x8363u>>8)); dd3_static_push8(rt,(uint8_t)0x8363u);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x8364u: {
            dd3_static_push8(rt,(uint8_t)(0x8366u>>8)); dd3_static_push8(rt,(uint8_t)0x8366u);
            rt->state.cpu.pc=0xA6B9u; return dd3_static_complete(rt,6u);
        }
        case 0x8367u: {
            dd3_static_push8(rt,(uint8_t)(0x8369u>>8)); dd3_static_push8(rt,(uint8_t)0x8369u);
            rt->state.cpu.pc=0x98BAu; return dd3_static_complete(rt,6u);
        }
        case 0x836Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x839Eu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83A0u; return dd3_static_complete(rt,4u);
        }
        case 0x83A0u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x83A2u; return dd3_static_complete(rt,2u);
        }
        case 0x83A2u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x83A4u,0x83A9u)) c++; rt->state.cpu.pc=0x83A9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83A4u; return dd3_static_complete(rt,2u);
        }
        case 0x83A4u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x83A5u; return dd3_static_complete(rt,2u);
        }
        case 0x83A5u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x83A6u; return dd3_static_complete(rt,2u);
        }
        case 0x83A6u: {
            uint8_t v=0x09u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x83A8u; return dd3_static_complete(rt,2u);
        }
        case 0x83A8u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x83A9u; return dd3_static_complete(rt,2u);
        }
        case 0x83A9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x83AAu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83ACu; return dd3_static_complete(rt,4u);
        }
        case 0x83ACu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x83AEu,0x83B9u)) c++; rt->state.cpu.pc=0x83B9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83AEu; return dd3_static_complete(rt,2u);
        }
        case 0x83AEu: {
            dd3_static_push8(rt,(uint8_t)(0x83B0u>>8)); dd3_static_push8(rt,(uint8_t)0x83B0u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x83B1u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83B3u; return dd3_static_complete(rt,2u);
        }
        case 0x83B3u: {
            dd3_static_push8(rt,(uint8_t)(0x83B5u>>8)); dd3_static_push8(rt,(uint8_t)0x83B5u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x83B6u: {
            dd3_static_push8(rt,(uint8_t)(0x83B8u>>8)); dd3_static_push8(rt,(uint8_t)0x83B8u);
            rt->state.cpu.pc=0x83CCu; return dd3_static_complete(rt,6u);
        }
        case 0x83B9u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x83BBu; return dd3_static_complete(rt,6u);
        }
        case 0x83BBu: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83BDu; return dd3_static_complete(rt,4u);
        }
        case 0x83BDu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x83BFu; return dd3_static_complete(rt,2u);
        }
        case 0x83BFu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x83C1u,0x83C9u)) c++; rt->state.cpu.pc=0x83C9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83C1u; return dd3_static_complete(rt,2u);
        }
        case 0x83C1u: {
            dd3_static_push8(rt,(uint8_t)(0x83C3u>>8)); dd3_static_push8(rt,(uint8_t)0x83C3u);
            rt->state.cpu.pc=0x83DEu; return dd3_static_complete(rt,6u);
        }
        case 0x83C4u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83C6u; return dd3_static_complete(rt,2u);
        }
        case 0x83C6u: {
            dd3_static_push8(rt,(uint8_t)(0x83C8u>>8)); dd3_static_push8(rt,(uint8_t)0x83C8u);
            rt->state.cpu.pc=0xA612u; return dd3_static_complete(rt,6u);
        }
        case 0x83C9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x83CCu: {
            dd3_static_push8(rt,(uint8_t)(0x83CEu>>8)); dd3_static_push8(rt,(uint8_t)0x83CEu);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x83CFu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83D1u; return dd3_static_complete(rt,2u);
        }
        case 0x83D1u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x83D3u; return dd3_static_complete(rt,4u);
        }
        case 0x83D3u: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83D5u; return dd3_static_complete(rt,4u);
        }
        case 0x83D5u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x83D7u; return dd3_static_complete(rt,2u);
        }
        case 0x83D7u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x83D9u; return dd3_static_complete(rt,2u);
        }
        case 0x83D9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x83DBu,0x83DDu)) c++; rt->state.cpu.pc=0x83DDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83DBu; return dd3_static_complete(rt,2u);
        }
        case 0x83DBu: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x83DDu; return dd3_static_complete(rt,6u);
        }
        case 0x83DDu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x83DEu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83E0u; return dd3_static_complete(rt,2u);
        }
        case 0x83E0u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x83E2u; return dd3_static_complete(rt,4u);
        }
        case 0x83E2u: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83E4u; return dd3_static_complete(rt,4u);
        }
        case 0x83E4u: {
            uint16_t ea=(uint16_t)(0x83CAu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83E7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x83CAu,ea)?1u:0u));
        }
        case 0x83E7u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x83E9u; return dd3_static_complete(rt,4u);
        }
        case 0x83E9u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83EBu; return dd3_static_complete(rt,4u);
        }
        case 0x83EBu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x83EDu; return dd3_static_complete(rt,2u);
        }
        case 0x83EDu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x83EFu; return dd3_static_complete(rt,2u);
        }
        case 0x83EFu: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x83F1u; return dd3_static_complete(rt,4u);
        }
        case 0x83F1u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x83F3u; return dd3_static_complete(rt,4u);
        }
        case 0x83F3u: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83F5u; return dd3_static_complete(rt,4u);
        }
        case 0x83F5u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x83F7u; return dd3_static_complete(rt,2u);
        }
        case 0x83F7u: {
            dd3_static_write8(rt,(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x83F9u; return dd3_static_complete(rt,4u);
        }
        case 0x83F9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x83FAu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83FCu; return dd3_static_complete(rt,4u);
        }
        case 0x83FCu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x83FEu,0x841Cu)) c++; rt->state.cpu.pc=0x841Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83FEu; return dd3_static_complete(rt,2u);
        }
        case 0x83FEu: {
            dd3_static_push8(rt,(uint8_t)(0x8400u>>8)); dd3_static_push8(rt,(uint8_t)0x8400u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x8401u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8403u; return dd3_static_complete(rt,2u);
        }
        case 0x8403u: {
            dd3_static_push8(rt,(uint8_t)(0x8405u>>8)); dd3_static_push8(rt,(uint8_t)0x8405u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8406u: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8408u; return dd3_static_complete(rt,4u);
        }
        case 0x8408u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x840Au; return dd3_static_complete(rt,2u);
        }
        case 0x840Au: {
            uint8_t v=0x0Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x840Cu; return dd3_static_complete(rt,2u);
        }
        case 0x840Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x840Eu,0x841Cu)) c++; rt->state.cpu.pc=0x841Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x840Eu; return dd3_static_complete(rt,2u);
        }
        case 0x840Eu: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8410u; return dd3_static_complete(rt,2u);
        }
        case 0x8410u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8412u,0x841Cu)) c++; rt->state.cpu.pc=0x841Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8412u; return dd3_static_complete(rt,2u);
        }
        case 0x8412u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8414u; return dd3_static_complete(rt,4u);
        }
        case 0x8414u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8416u; return dd3_static_complete(rt,2u);
        }
        case 0x8416u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8418u; return dd3_static_complete(rt,2u);
        }
        case 0x8418u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x841Au; return dd3_static_complete(rt,2u);
        }
        case 0x841Au: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x841Cu; return dd3_static_complete(rt,4u);
        }
        case 0x841Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8460u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8462u; return dd3_static_complete(rt,4u);
        }
        case 0x8462u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8464u,0x84A1u)) c++; rt->state.cpu.pc=0x84A1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8464u; return dd3_static_complete(rt,2u);
        }
        case 0x8464u: {
            dd3_static_push8(rt,(uint8_t)(0x8466u>>8)); dd3_static_push8(rt,(uint8_t)0x8466u);
            rt->state.cpu.pc=0xA906u; return dd3_static_complete(rt,6u);
        }
        case 0x8467u: {
            dd3_static_push8(rt,(uint8_t)(0x8469u>>8)); dd3_static_push8(rt,(uint8_t)0x8469u);
            rt->state.cpu.pc=0xA92Cu; return dd3_static_complete(rt,6u);
        }
        case 0x846Au: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x846Cu; return dd3_static_complete(rt,2u);
        }
        case 0x846Cu: {
            dd3_static_push8(rt,(uint8_t)(0x846Eu>>8)); dd3_static_push8(rt,(uint8_t)0x846Eu);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x846Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8471u>>8)); dd3_static_push8(rt,(uint8_t)0x8471u);
            rt->state.cpu.pc=0x84CFu; return dd3_static_complete(rt,6u);
        }
        case 0x8472u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8474u; return dd3_static_complete(rt,2u);
        }
        case 0x8474u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8477u; return dd3_static_complete(rt,5u);
        }
        case 0x8477u: {
            uint8_t v=0x09u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8479u; return dd3_static_complete(rt,2u);
        }
        case 0x8479u: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x847Cu; return dd3_static_complete(rt,5u);
        }
        case 0x847Cu: {
            uint8_t v=0x1Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x847Eu; return dd3_static_complete(rt,2u);
        }
        case 0x847Eu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8480u; return dd3_static_complete(rt,4u);
        }
        case 0x8480u: {
            uint8_t v=0x46u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8482u; return dd3_static_complete(rt,2u);
        }
        case 0x8482u: {
            dd3_static_push8(rt,(uint8_t)(0x8484u>>8)); dd3_static_push8(rt,(uint8_t)0x8484u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x8485u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8487u; return dd3_static_complete(rt,2u);
        }
        case 0x8487u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8489u,0x8495u)) c++; rt->state.cpu.pc=0x8495u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8489u; return dd3_static_complete(rt,2u);
        }
        case 0x8489u: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x848Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0x848Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x848Eu,0x84A1u)) c++; rt->state.cpu.pc=0x84A1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x848Eu; return dd3_static_complete(rt,2u);
        }
        case 0x848Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8490u; return dd3_static_complete(rt,2u);
        }
        case 0x8490u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8493u; return dd3_static_complete(rt,5u);
        }
        case 0x8493u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8495u,0x84A1u)) c++; rt->state.cpu.pc=0x84A1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8495u; return dd3_static_complete(rt,2u);
        }
        case 0x8495u: {
            uint16_t ea=(uint16_t)(0x04B6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8498u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B6u,ea)?1u:0u));
        }
        case 0x8498u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x849Au; return dd3_static_complete(rt,2u);
        }
        case 0x849Au: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x849Cu; return dd3_static_complete(rt,4u);
        }
        case 0x849Cu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x849Eu; return dd3_static_complete(rt,2u);
        }
        case 0x849Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x84A1u; return dd3_static_complete(rt,5u);
        }
        case 0x84A1u: {
            rt->state.cpu.pc=0x931Au; return dd3_static_complete(rt,3u);
        }
        case 0x84A4u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x84A6u; return dd3_static_complete(rt,2u);
        }
        case 0x84A6u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x84A8u,0x8503u)) c++; rt->state.cpu.pc=0x8503u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84A8u; return dd3_static_complete(rt,2u);
        }
        case 0x84A8u: {
            uint16_t ea=(uint16_t)(0x04A0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84ABu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A0u,ea)?1u:0u));
        }
        case 0x84ABu: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84AEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0x84AEu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84B0u; return dd3_static_complete(rt,2u);
        }
        case 0x84B0u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x84B2u; return dd3_static_complete(rt,2u);
        }
        case 0x84B2u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84B4u,0x84B8u)) c++; rt->state.cpu.pc=0x84B8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84B4u; return dd3_static_complete(rt,2u);
        }
        case 0x84B4u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x84B6u; return dd3_static_complete(rt,2u);
        }
        case 0x84B6u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84B8u,0x8503u)) c++; rt->state.cpu.pc=0x8503u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84B8u; return dd3_static_complete(rt,2u);
        }
        case 0x84B8u: {
            uint16_t ea=(uint16_t)(0x04B6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84BBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B6u,ea)?1u:0u));
        }
        case 0x84BBu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84BDu; return dd3_static_complete(rt,2u);
        }
        case 0x84BDu: {
            uint16_t ea=(uint16_t)(0x0068u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84C0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0068u,ea)?1u:0u));
        }
        case 0x84C0u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x84C2u,0x8503u)) c++; rt->state.cpu.pc=0x8503u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84C2u; return dd3_static_complete(rt,2u);
        }
        case 0x84C2u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.y);
            rt->state.cpu.pc=0x84C4u; return dd3_static_complete(rt,3u);
        }
        case 0x84C4u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84C5u; return dd3_static_complete(rt,2u);
        }
        case 0x84C5u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84C6u; return dd3_static_complete(rt,3u);
        }
        case 0x84C6u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x84C7u; return dd3_static_complete(rt,2u);
        }
        case 0x84C7u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84C9u; return dd3_static_complete(rt,3u);
        }
        case 0x84C9u: {
            dd3_static_push8(rt,(uint8_t)(0x84CBu>>8)); dd3_static_push8(rt,(uint8_t)0x84CBu);
            rt->state.cpu.pc=0x853Bu; return dd3_static_complete(rt,6u);
        }
        case 0x84CCu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84CDu; return dd3_static_complete(rt,4u);
        }
        case 0x84CDu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x84CEu; return dd3_static_complete(rt,2u);
        }
        case 0x84CEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x84CFu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x84D1u; return dd3_static_complete(rt,2u);
        }
        case 0x84D1u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x84D3u,0x8503u)) c++; rt->state.cpu.pc=0x8503u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84D3u; return dd3_static_complete(rt,2u);
        }
        case 0x84D3u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84D5u; return dd3_static_complete(rt,4u);
        }
        case 0x84D5u: {
            uint8_t v=0x15u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x84D7u; return dd3_static_complete(rt,2u);
        }
        case 0x84D7u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84D9u,0x8503u)) c++; rt->state.cpu.pc=0x8503u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84D9u; return dd3_static_complete(rt,2u);
        }
        case 0x84D9u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84DBu; return dd3_static_complete(rt,2u);
        }
        case 0x84DBu: {
            dd3_static_write8(rt,(uint16_t)(0x06C2u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x84DEu; return dd3_static_complete(rt,5u);
        }
        case 0x84DEu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84DFu; return dd3_static_complete(rt,2u);
        }
        case 0x84DFu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84E0u; return dd3_static_complete(rt,3u);
        }
        case 0x84E0u: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84E2u; return dd3_static_complete(rt,2u);
        }
        case 0x84E2u: {
            uint16_t ea=(uint16_t)(0x04A0u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84E5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A0u,ea)?1u:0u));
        }
        case 0x84E5u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x84E7u; return dd3_static_complete(rt,3u);
        }
        case 0x84E7u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x84E9u; return dd3_static_complete(rt,3u);
        }
        case 0x84E9u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84EBu,0x84FCu)) c++; rt->state.cpu.pc=0x84FCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84EBu; return dd3_static_complete(rt,2u);
        }
        case 0x84EBu: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84EEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0x84EEu: {
            uint8_t v=0x80u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x84F0u; return dd3_static_complete(rt,2u);
        }
        case 0x84F0u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x84F2u,0x84FCu)) c++; rt->state.cpu.pc=0x84FCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84F2u; return dd3_static_complete(rt,2u);
        }
        case 0x84F2u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84F5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0x84F5u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x84F7u; return dd3_static_complete(rt,2u);
        }
        case 0x84F7u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x84F9u,0x84FCu)) c++; rt->state.cpu.pc=0x84FCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84F9u; return dd3_static_complete(rt,2u);
        }
        case 0x84F9u: {
            dd3_static_push8(rt,(uint8_t)(0x84FBu>>8)); dd3_static_push8(rt,(uint8_t)0x84FBu);
            rt->state.cpu.pc=0x8504u; return dd3_static_complete(rt,6u);
        }
        case 0x84FCu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x84FDu; return dd3_static_complete(rt,2u);
        }
        case 0x84FDu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x84FFu; return dd3_static_complete(rt,2u);
        }
        case 0x84FFu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8501u,0x84E2u)) c++; rt->state.cpu.pc=0x84E2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8501u; return dd3_static_complete(rt,2u);
        }
        case 0x8501u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8502u; return dd3_static_complete(rt,4u);
        }
        case 0x8502u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8503u; return dd3_static_complete(rt,2u);
        }
        case 0x8503u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8504u: {
            uint16_t ea=(uint16_t)(0x003Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8507u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Cu,ea)?1u:0u));
        }
        case 0x8507u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8509u,0x857Cu)) c++; rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8509u; return dd3_static_complete(rt,2u);
        }
        case 0x8509u: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x850Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0x850Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x850Eu,0x857Cu)) c++; rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x850Eu; return dd3_static_complete(rt,2u);
        }
        case 0x850Eu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8510u; return dd3_static_complete(rt,2u);
        }
        case 0x8510u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8512u; return dd3_static_complete(rt,2u);
        }
        case 0x8512u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8514u,0x857Cu)) c++; rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8514u; return dd3_static_complete(rt,2u);
        }
        case 0x8514u: {
            uint8_t v=0x2Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8516u; return dd3_static_complete(rt,2u);
        }
        case 0x8516u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8518u,0x857Cu)) c++; rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8518u; return dd3_static_complete(rt,2u);
        }
        case 0x8518u: {
            uint8_t v=0x12u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x851Au; return dd3_static_complete(rt,2u);
        }
        case 0x851Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x851Cu,0x857Cu)) c++; rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x851Cu; return dd3_static_complete(rt,2u);
        }
        case 0x851Cu: {
            uint8_t v=0x4Bu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x851Eu; return dd3_static_complete(rt,2u);
        }
        case 0x851Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8520u,0x857Cu)) c++; rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8520u; return dd3_static_complete(rt,2u);
        }
        case 0x8520u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8522u; return dd3_static_complete(rt,2u);
        }
        case 0x8522u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8524u,0x857Cu)) c++; rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8524u; return dd3_static_complete(rt,2u);
        }
        case 0x8524u: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8527u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0x8527u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8529u; return dd3_static_complete(rt,2u);
        }
        case 0x8529u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x852Bu,0x857Cu)) c++; rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x852Bu; return dd3_static_complete(rt,2u);
        }
        case 0x852Bu: {
            uint16_t ea=(uint16_t)(0x04AAu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x852Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04AAu,ea)?1u:0u));
        }
        case 0x852Eu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8530u; return dd3_static_complete(rt,2u);
        }
        case 0x8530u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8532u,0x857Cu)) c++; rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8532u; return dd3_static_complete(rt,2u);
        }
        case 0x8532u: {
            uint16_t ea=(uint16_t)(0x04B6u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8535u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B6u,ea)?1u:0u));
        }
        case 0x8535u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8537u; return dd3_static_complete(rt,2u);
        }
        case 0x8537u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8539u; return dd3_static_complete(rt,4u);
        }
        case 0x8539u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x853Bu,0x857Cu)) c++; rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x853Bu; return dd3_static_complete(rt,2u);
        }
        case 0x853Bu: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x853Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0x853Eu: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8540u; return dd3_static_complete(rt,2u);
        }
        case 0x8540u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8542u,0x857Cu)) c++; rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8542u; return dd3_static_complete(rt,2u);
        }
        case 0x8542u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8545u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0x8545u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8547u; return dd3_static_complete(rt,2u);
        }
        case 0x8547u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8549u,0x857Cu)) c++; rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8549u; return dd3_static_complete(rt,2u);
        }
        case 0x8549u: {
            uint8_t v=0x28u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x854Bu; return dd3_static_complete(rt,2u);
        }
        case 0x854Bu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x854Du,0x857Cu)) c++; rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x854Du; return dd3_static_complete(rt,2u);
        }
        case 0x854Du: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8550u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0x8550u: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8553u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0x8553u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8555u,0x857Cu)) c++; rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8555u; return dd3_static_complete(rt,2u);
        }
        case 0x8555u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8556u; return dd3_static_complete(rt,2u);
        }
        case 0x8556u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8557u; return dd3_static_complete(rt,3u);
        }
        case 0x8557u: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x855Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0x855Au: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x855Cu; return dd3_static_complete(rt,2u);
        }
        case 0x855Cu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x855Eu,0x8564u)) c++; rt->state.cpu.pc=0x8564u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x855Eu; return dd3_static_complete(rt,2u);
        }
        case 0x855Eu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x855Fu; return dd3_static_complete(rt,2u);
        }
        case 0x855Fu: {
            uint16_t ea=(uint16_t)(0x857Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8562u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x857Du,ea)?1u:0u));
        }
        case 0x8562u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8564u,0x8567u)) c++; rt->state.cpu.pc=0x8567u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8564u; return dd3_static_complete(rt,2u);
        }
        case 0x8564u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8565u; return dd3_static_complete(rt,4u);
        }
        case 0x8565u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8566u; return dd3_static_complete(rt,2u);
        }
        case 0x8566u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8567u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8568u; return dd3_static_complete(rt,4u);
        }
        case 0x8568u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8569u; return dd3_static_complete(rt,2u);
        }
        case 0x8569u: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x856Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0x856Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x856Eu; return dd3_static_complete(rt,2u);
        }
        case 0x856Eu: {
            uint8_t v=0x2Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8570u; return dd3_static_complete(rt,2u);
        }
        case 0x8570u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8572u,0x8577u)) c++; rt->state.cpu.pc=0x8577u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8572u; return dd3_static_complete(rt,2u);
        }
        case 0x8572u: {
            uint8_t v=0x2Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8574u; return dd3_static_complete(rt,2u);
        }
        case 0x8574u: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8577u; return dd3_static_complete(rt,5u);
        }
        case 0x8577u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8578u; return dd3_static_complete(rt,2u);
        }
        case 0x8578u: {
            dd3_static_write8(rt,(uint16_t)(0x06C2u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x857Bu; return dd3_static_complete(rt,5u);
        }
        case 0x857Bu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,2u);
        }
        case 0x857Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x858Du: {
            uint16_t ea=(uint16_t)(0x0318u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8590u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0318u,ea)?1u:0u));
        }
        case 0x8590u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8591u; return dd3_static_complete(rt,2u);
        }
        case 0x8591u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8594u; return dd3_static_complete(rt,5u);
        }
        case 0x8594u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8596u; return dd3_static_complete(rt,4u);
        }
        case 0x8596u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8598u,0x85A5u)) c++; rt->state.cpu.pc=0x85A5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8598u; return dd3_static_complete(rt,2u);
        }
        case 0x8598u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x859Au; return dd3_static_complete(rt,2u);
        }
        case 0x859Au: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x859Cu; return dd3_static_complete(rt,4u);
        }
        case 0x859Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x859Eu; return dd3_static_complete(rt,2u);
        }
        case 0x859Eu: {
            dd3_static_push8(rt,(uint8_t)(0x85A0u>>8)); dd3_static_push8(rt,(uint8_t)0x85A0u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x85A1u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85A3u; return dd3_static_complete(rt,2u);
        }
        case 0x85A3u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x85A5u; return dd3_static_complete(rt,4u);
        }
        case 0x85A5u: {
            dd3_static_push8(rt,(uint8_t)(0x85A7u>>8)); dd3_static_push8(rt,(uint8_t)0x85A7u);
            rt->state.cpu.pc=0xA6B9u; return dd3_static_complete(rt,6u);
        }
        case 0x85A8u: {
            dd3_static_push8(rt,(uint8_t)(0x85AAu>>8)); dd3_static_push8(rt,(uint8_t)0x85AAu);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x85ABu: {
            uint16_t ea=(uint16_t)(0x0318u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85AEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0318u,ea)?1u:0u));
        }
        case 0x85AEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x85B0u,0x85B4u)) c++; rt->state.cpu.pc=0x85B4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85B0u; return dd3_static_complete(rt,2u);
        }
        case 0x85B0u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85B2u; return dd3_static_complete(rt,2u);
        }
        case 0x85B2u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x85B4u; return dd3_static_complete(rt,4u);
        }
        case 0x85B4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x85D6u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85D8u; return dd3_static_complete(rt,4u);
        }
        case 0x85D8u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x85DAu,0x85E9u)) c++; rt->state.cpu.pc=0x85E9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85DAu; return dd3_static_complete(rt,2u);
        }
        case 0x85DAu: {
            dd3_static_push8(rt,(uint8_t)(0x85DCu>>8)); dd3_static_push8(rt,(uint8_t)0x85DCu);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x85DDu: {
            uint8_t v=0x09u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85DFu; return dd3_static_complete(rt,2u);
        }
        case 0x85DFu: {
            dd3_static_push8(rt,(uint8_t)(0x85E1u>>8)); dd3_static_push8(rt,(uint8_t)0x85E1u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x85E2u: {
            dd3_static_push8(rt,(uint8_t)(0x85E4u>>8)); dd3_static_push8(rt,(uint8_t)0x85E4u);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x85E5u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x85E7u; return dd3_static_complete(rt,4u);
        }
        case 0x85E7u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x85E9u; return dd3_static_complete(rt,4u);
        }
        case 0x85E9u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85EBu; return dd3_static_complete(rt,4u);
        }
        case 0x85EBu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x85EDu; return dd3_static_complete(rt,2u);
        }
        case 0x85EDu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x85EFu,0x85F9u)) c++; rt->state.cpu.pc=0x85F9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85EFu; return dd3_static_complete(rt,2u);
        }
        case 0x85EFu: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85F1u; return dd3_static_complete(rt,4u);
        }
        case 0x85F1u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85F3u; return dd3_static_complete(rt,2u);
        }
        case 0x85F3u: {
            uint8_t v=0x23u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x85F5u; return dd3_static_complete(rt,2u);
        }
        case 0x85F5u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x85F7u,0x861Au)) c++; rt->state.cpu.pc=0x861Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85F7u; return dd3_static_complete(rt,2u);
        }
        case 0x85F7u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x85F9u,0x8601u)) c++; rt->state.cpu.pc=0x8601u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85F9u; return dd3_static_complete(rt,2u);
        }
        case 0x85F9u: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85FBu; return dd3_static_complete(rt,4u);
        }
        case 0x85FBu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85FDu; return dd3_static_complete(rt,2u);
        }
        case 0x85FDu: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x85FFu; return dd3_static_complete(rt,2u);
        }
        case 0x85FFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8601u,0x861Au)) c++; rt->state.cpu.pc=0x861Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8601u; return dd3_static_complete(rt,2u);
        }
        case 0x8601u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8603u; return dd3_static_complete(rt,6u);
        }
        case 0x8603u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8605u; return dd3_static_complete(rt,4u);
        }
        case 0x8605u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8607u; return dd3_static_complete(rt,2u);
        }
        case 0x8607u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8609u,0x863Fu)) c++; rt->state.cpu.pc=0x863Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8609u; return dd3_static_complete(rt,2u);
        }
        case 0x8609u: {
            dd3_static_push8(rt,(uint8_t)(0x860Bu>>8)); dd3_static_push8(rt,(uint8_t)0x860Bu);
            rt->state.cpu.pc=0x8904u; return dd3_static_complete(rt,6u);
        }
        case 0x860Cu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x860Eu; return dd3_static_complete(rt,2u);
        }
        case 0x860Eu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8610u,0x863Fu)) c++; rt->state.cpu.pc=0x863Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8610u; return dd3_static_complete(rt,2u);
        }
        case 0x8610u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8612u; return dd3_static_complete(rt,2u);
        }
        case 0x8612u: {
            dd3_static_write8(rt,(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8614u; return dd3_static_complete(rt,4u);
        }
        case 0x8614u: {
            dd3_static_push8(rt,(uint8_t)(0x8616u>>8)); dd3_static_push8(rt,(uint8_t)0x8616u);
            rt->state.cpu.pc=0x8319u; return dd3_static_complete(rt,6u);
        }
        case 0x8617u: {
            rt->state.cpu.pc=0x863Fu; return dd3_static_complete(rt,3u);
        }
        case 0x861Au: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x861Bu; return dd3_static_complete(rt,2u);
        }
        case 0x861Bu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x861Du; return dd3_static_complete(rt,2u);
        }
        case 0x861Du: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x861Eu; return dd3_static_complete(rt,2u);
        }
        case 0x861Eu: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8621u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0x8621u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8623u; return dd3_static_complete(rt,2u);
        }
        case 0x8623u: {
            uint8_t v=0x0Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8625u; return dd3_static_complete(rt,2u);
        }
        case 0x8625u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8627u,0x863Fu)) c++; rt->state.cpu.pc=0x863Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8627u; return dd3_static_complete(rt,2u);
        }
        case 0x8627u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8629u; return dd3_static_complete(rt,2u);
        }
        case 0x8629u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x862Bu; return dd3_static_complete(rt,4u);
        }
        case 0x862Bu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x862Du; return dd3_static_complete(rt,4u);
        }
        case 0x862Du: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x862Fu; return dd3_static_complete(rt,2u);
        }
        case 0x862Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8631u,0x863Fu)) c++; rt->state.cpu.pc=0x863Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8631u; return dd3_static_complete(rt,2u);
        }
        case 0x8631u: {
            uint8_t v=0x23u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8633u; return dd3_static_complete(rt,2u);
        }
        case 0x8633u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8635u; return dd3_static_complete(rt,4u);
        }
        case 0x8635u: {
            uint8_t v=0x1Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8637u; return dd3_static_complete(rt,2u);
        }
        case 0x8637u: {
            dd3_static_write8(rt,(uint16_t)(0x06DBu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x863Au; return dd3_static_complete(rt,5u);
        }
        case 0x863Au: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x863Cu; return dd3_static_complete(rt,2u);
        }
        case 0x863Cu: {
            dd3_static_write8(rt,0x06DAu,rt->state.cpu.a);
            rt->state.cpu.pc=0x863Fu; return dd3_static_complete(rt,4u);
        }
        case 0x863Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8641u>>8)); dd3_static_push8(rt,(uint8_t)0x8641u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x8642u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8643u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8645u; return dd3_static_complete(rt,4u);
        }
        case 0x8645u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8647u,0x86A0u)) c++; rt->state.cpu.pc=0x86A0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8647u; return dd3_static_complete(rt,2u);
        }
        case 0x8647u: {
            dd3_static_push8(rt,(uint8_t)(0x8649u>>8)); dd3_static_push8(rt,(uint8_t)0x8649u);
            rt->state.cpu.pc=0xA906u; return dd3_static_complete(rt,6u);
        }
        case 0x864Au: {
            uint8_t v=0x0Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x864Cu; return dd3_static_complete(rt,2u);
        }
        case 0x864Cu: {
            dd3_static_push8(rt,(uint8_t)(0x864Eu>>8)); dd3_static_push8(rt,(uint8_t)0x864Eu);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x864Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8651u>>8)); dd3_static_push8(rt,(uint8_t)0x8651u);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x8652u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8654u; return dd3_static_complete(rt,4u);
        }
        case 0x8654u: {
            uint8_t v=0x1Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8656u; return dd3_static_complete(rt,2u);
        }
        case 0x8656u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8658u; return dd3_static_complete(rt,4u);
        }
        case 0x8658u: {
            uint8_t v=0x31u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x865Au; return dd3_static_complete(rt,2u);
        }
        case 0x865Au: {
            dd3_static_push8(rt,(uint8_t)(0x865Cu>>8)); dd3_static_push8(rt,(uint8_t)0x865Cu);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x865Du: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8660u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0x8660u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8662u; return dd3_static_complete(rt,2u);
        }
        case 0x8662u: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8664u; return dd3_static_complete(rt,4u);
        }
        case 0x8664u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8665u; return dd3_static_complete(rt,2u);
        }
        case 0x8665u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8667u; return dd3_static_complete(rt,2u);
        }
        case 0x8667u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8668u; return dd3_static_complete(rt,3u);
        }
        case 0x8668u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x866Au; return dd3_static_complete(rt,2u);
        }
        case 0x866Au: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x866Cu; return dd3_static_complete(rt,3u);
        }
        case 0x866Cu: {
            uint8_t v=0x08u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x866Eu; return dd3_static_complete(rt,2u);
        }
        case 0x866Eu: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8670u; return dd3_static_complete(rt,4u);
        }
        case 0x8670u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8672u,0x8676u)) c++; rt->state.cpu.pc=0x8676u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8672u; return dd3_static_complete(rt,2u);
        }
        case 0x8672u: {
            uint8_t v=0xF8u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8674u; return dd3_static_complete(rt,2u);
        }
        case 0x8674u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8676u; return dd3_static_complete(rt,5u);
        }
        case 0x8676u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.y);
            rt->state.cpu.pc=0x8678u; return dd3_static_complete(rt,3u);
        }
        case 0x8678u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8679u; return dd3_static_complete(rt,4u);
        }
        case 0x8679u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x867Au; return dd3_static_complete(rt,2u);
        }
        case 0x867Au: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x867Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0x867Du: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x867Fu; return dd3_static_complete(rt,2u);
        }
        case 0x867Fu: {
            uint8_t v=0x0Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8681u; return dd3_static_complete(rt,2u);
        }
        case 0x8681u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8683u,0x86A0u)) c++; rt->state.cpu.pc=0x86A0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8683u; return dd3_static_complete(rt,2u);
        }
        case 0x8683u: {
            uint16_t ea=(uint16_t)(0x007Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8686u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x007Du,ea)?1u:0u));
        }
        case 0x8686u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8688u; return dd3_static_complete(rt,2u);
        }
        case 0x8688u: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x868Au; return dd3_static_complete(rt,2u);
        }
        case 0x868Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x868Cu,0x86A0u)) c++; rt->state.cpu.pc=0x86A0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x868Cu; return dd3_static_complete(rt,2u);
        }
        case 0x868Cu: {
            uint16_t ea=(uint16_t)(0x00B7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x868Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B7u,ea)?1u:0u));
        }
        case 0x868Fu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8690u; return dd3_static_complete(rt,2u);
        }
        case 0x8690u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8692u; return dd3_static_complete(rt,3u);
        }
        case 0x8692u: {
            dd3_static_write8(rt,(uint16_t)(0x00B7u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8695u; return dd3_static_complete(rt,5u);
        }
        case 0x8695u: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8698u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0x8698u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x869Au; return dd3_static_complete(rt,3u);
        }
        case 0x869Au: {
            dd3_static_write8(rt,(uint16_t)(0x00C1u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x869Du; return dd3_static_complete(rt,5u);
        }
        case 0x869Du: {
            dd3_static_push8(rt,(uint8_t)(0x869Fu>>8)); dd3_static_push8(rt,(uint8_t)0x869Fu);
            rt->state.cpu.pc=0x86B7u; return dd3_static_complete(rt,6u);
        }
        case 0x86A0u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x86A2u; return dd3_static_complete(rt,6u);
        }
        case 0x86A2u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86A4u; return dd3_static_complete(rt,4u);
        }
        case 0x86A4u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x86A6u; return dd3_static_complete(rt,2u);
        }
        case 0x86A6u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x86A8u,0x86B3u)) c++; rt->state.cpu.pc=0x86B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86A8u; return dd3_static_complete(rt,2u);
        }
        case 0x86A8u: {
            uint8_t v=0x0Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86AAu; return dd3_static_complete(rt,2u);
        }
        case 0x86AAu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x86ACu; return dd3_static_complete(rt,4u);
        }
        case 0x86ACu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x86AEu; return dd3_static_complete(rt,2u);
        }
        case 0x86AEu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x86B0u,0x86B3u)) c++; rt->state.cpu.pc=0x86B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86B0u; return dd3_static_complete(rt,2u);
        }
        case 0x86B0u: {
            dd3_static_push8(rt,(uint8_t)(0x86B2u>>8)); dd3_static_push8(rt,(uint8_t)0x86B2u);
            rt->state.cpu.pc=0x8319u; return dd3_static_complete(rt,6u);
        }
        case 0x86B3u: {
            dd3_static_push8(rt,(uint8_t)(0x86B5u>>8)); dd3_static_push8(rt,(uint8_t)0x86B5u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x86B6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x86B7u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86B9u; return dd3_static_complete(rt,2u);
        }
        case 0x86B9u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x86BBu; return dd3_static_complete(rt,3u);
        }
        case 0x86BBu: {
            uint8_t v=0x10u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86BDu; return dd3_static_complete(rt,2u);
        }
        case 0x86BDu: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86BFu; return dd3_static_complete(rt,4u);
        }
        case 0x86BFu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x86C1u,0x86C5u)) c++; rt->state.cpu.pc=0x86C5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86C1u; return dd3_static_complete(rt,2u);
        }
        case 0x86C1u: {
            uint8_t v=0xF0u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86C3u; return dd3_static_complete(rt,2u);
        }
        case 0x86C3u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x86C5u; return dd3_static_complete(rt,5u);
        }
        case 0x86C5u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.y);
            rt->state.cpu.pc=0x86C7u; return dd3_static_complete(rt,3u);
        }
        case 0x86C7u: {
            uint8_t v=0x18u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86C9u; return dd3_static_complete(rt,2u);
        }
        case 0x86C9u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x86CBu; return dd3_static_complete(rt,3u);
        }
        case 0x86CBu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86CCu; return dd3_static_complete(rt,2u);
        }
        case 0x86CCu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86CDu; return dd3_static_complete(rt,3u);
        }
        case 0x86CDu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86CEu; return dd3_static_complete(rt,2u);
        }
        case 0x86CEu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86CFu; return dd3_static_complete(rt,3u);
        }
        case 0x86CFu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86D0u; return dd3_static_complete(rt,2u);
        }
        case 0x86D0u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86D1u; return dd3_static_complete(rt,3u);
        }
        case 0x86D1u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86D2u; return dd3_static_complete(rt,2u);
        }
        case 0x86D2u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86D3u; return dd3_static_complete(rt,4u);
        }
        case 0x86D3u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86D5u; return dd3_static_complete(rt,2u);
        }
        case 0x86D5u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x86D6u; return dd3_static_complete(rt,2u);
        }
        case 0x86D6u: {
            dd3_static_push8(rt,(uint8_t)(0x86D8u>>8)); dd3_static_push8(rt,(uint8_t)0x86D8u);
            rt->state.cpu.pc=0xA884u; return dd3_static_complete(rt,6u);
        }
        case 0x86D9u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86DBu; return dd3_static_complete(rt,4u);
        }
        case 0x86DBu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x86DCu; return dd3_static_complete(rt,2u);
        }
        case 0x86DCu: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x86DEu; return dd3_static_complete(rt,2u);
        }
        case 0x86DEu: {
            dd3_static_write8(rt,(uint16_t)(0x00CBu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x86E1u; return dd3_static_complete(rt,5u);
        }
        case 0x86E1u: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86E3u; return dd3_static_complete(rt,4u);
        }
        case 0x86E3u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x86E5u; return dd3_static_complete(rt,2u);
        }
        case 0x86E5u: {
            dd3_static_write8(rt,(uint16_t)(0x00D5u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x86E8u; return dd3_static_complete(rt,5u);
        }
        case 0x86E8u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86E9u; return dd3_static_complete(rt,4u);
        }
        case 0x86E9u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86EAu; return dd3_static_complete(rt,2u);
        }
        case 0x86EAu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86EBu; return dd3_static_complete(rt,4u);
        }
        case 0x86EBu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x86ECu; return dd3_static_complete(rt,2u);
        }
        case 0x86ECu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x86EDu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86EFu; return dd3_static_complete(rt,4u);
        }
        case 0x86EFu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x86F1u,0x86FCu)) c++; rt->state.cpu.pc=0x86FCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86F1u; return dd3_static_complete(rt,2u);
        }
        case 0x86F1u: {
            dd3_static_push8(rt,(uint8_t)(0x86F3u>>8)); dd3_static_push8(rt,(uint8_t)0x86F3u);
            rt->state.cpu.pc=0xA906u; return dd3_static_complete(rt,6u);
        }
        case 0x86F4u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86F6u; return dd3_static_complete(rt,2u);
        }
        case 0x86F6u: {
            dd3_static_push8(rt,(uint8_t)(0x86F8u>>8)); dd3_static_push8(rt,(uint8_t)0x86F8u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x86F9u: {
            dd3_static_push8(rt,(uint8_t)(0x86FBu>>8)); dd3_static_push8(rt,(uint8_t)0x86FBu);
            rt->state.cpu.pc=0x86FFu; return dd3_static_complete(rt,6u);
        }
        case 0x86FCu: {
            rt->state.cpu.pc=0x931Au; return dd3_static_complete(rt,3u);
        }
        case 0x86FFu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8701u; return dd3_static_complete(rt,2u);
        }
        case 0x8701u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8703u,0x8714u)) c++; rt->state.cpu.pc=0x8714u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8703u; return dd3_static_complete(rt,2u);
        }
        case 0x8703u: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8705u; return dd3_static_complete(rt,2u);
        }
        case 0x8705u: {
            uint16_t ea=0x049Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8708u; return dd3_static_complete(rt,4u);
        }
        case 0x8708u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x870Au,0x8723u)) c++; rt->state.cpu.pc=0x8723u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x870Au; return dd3_static_complete(rt,2u);
        }
        case 0x870Au: {
            uint16_t ea=(uint16_t)(0x04A0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x870Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A0u,ea)?1u:0u));
        }
        case 0x870Du: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8710u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0x8710u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8712u; return dd3_static_complete(rt,2u);
        }
        case 0x8712u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8714u,0x8719u)) c++; rt->state.cpu.pc=0x8719u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8714u; return dd3_static_complete(rt,2u);
        }
        case 0x8714u: {
            uint8_t v=0x03u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8716u; return dd3_static_complete(rt,2u);
        }
        case 0x8716u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8719u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0x8719u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x871Bu; return dd3_static_complete(rt,2u);
        }
        case 0x871Bu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x871Du,0x8723u)) c++; rt->state.cpu.pc=0x8723u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x871Du; return dd3_static_complete(rt,2u);
        }
        case 0x871Du: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x871Eu; return dd3_static_complete(rt,2u);
        }
        case 0x871Eu: {
            uint8_t v=0x30u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8720u; return dd3_static_complete(rt,2u);
        }
        case 0x8720u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8722u,0x8723u)) c++; rt->state.cpu.pc=0x8723u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8722u; return dd3_static_complete(rt,2u);
        }
        case 0x8722u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8723u; return dd3_static_complete(rt,2u);
        }
        case 0x8723u: {
            uint16_t ea=(uint16_t)(0x8784u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8726u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8784u,ea)?1u:0u));
        }
        case 0x8726u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8729u; return dd3_static_complete(rt,5u);
        }
        case 0x8729u: {
            uint8_t v=0x06u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x872Bu; return dd3_static_complete(rt,2u);
        }
        case 0x872Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x872Eu; return dd3_static_complete(rt,5u);
        }
        case 0x872Eu: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8730u; return dd3_static_complete(rt,2u);
        }
        case 0x8730u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8732u; return dd3_static_complete(rt,4u);
        }
        case 0x8732u: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8735u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0x8735u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8737u; return dd3_static_complete(rt,2u);
        }
        case 0x8737u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x873Au; return dd3_static_complete(rt,5u);
        }
        case 0x873Au: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x873Cu; return dd3_static_complete(rt,2u);
        }
        case 0x873Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0068u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x873Fu; return dd3_static_complete(rt,5u);
        }
        case 0x873Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8741u; return dd3_static_complete(rt,2u);
        }
        case 0x8741u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8743u; return dd3_static_complete(rt,2u);
        }
        case 0x8743u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8745u,0x875Fu)) c++; rt->state.cpu.pc=0x875Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8745u; return dd3_static_complete(rt,2u);
        }
        case 0x8745u: {
            uint16_t ea=0x049Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8748u; return dd3_static_complete(rt,4u);
        }
        case 0x8748u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x874Au,0x876Eu)) c++; rt->state.cpu.pc=0x876Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x874Au; return dd3_static_complete(rt,2u);
        }
        case 0x874Au: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x874Cu; return dd3_static_complete(rt,2u);
        }
        case 0x874Cu: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x874Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0x874Fu: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8751u; return dd3_static_complete(rt,3u);
        }
        case 0x8751u: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8753u; return dd3_static_complete(rt,3u);
        }
        case 0x8753u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8755u,0x8758u)) c++; rt->state.cpu.pc=0x8758u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8755u; return dd3_static_complete(rt,2u);
        }
        case 0x8755u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8756u; return dd3_static_complete(rt,2u);
        }
        case 0x8756u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8758u,0x874Cu)) c++; rt->state.cpu.pc=0x874Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8758u; return dd3_static_complete(rt,2u);
        }
        case 0x8758u: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x875Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0x875Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x875Du; return dd3_static_complete(rt,2u);
        }
        case 0x875Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x875Fu,0x8762u)) c++; rt->state.cpu.pc=0x8762u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x875Fu; return dd3_static_complete(rt,2u);
        }
        case 0x875Fu: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8762u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0x8762u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8764u; return dd3_static_complete(rt,2u);
        }
        case 0x8764u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8766u,0x876Eu)) c++; rt->state.cpu.pc=0x876Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8766u; return dd3_static_complete(rt,2u);
        }
        case 0x8766u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8767u; return dd3_static_complete(rt,2u);
        }
        case 0x8767u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8768u; return dd3_static_complete(rt,2u);
        }
        case 0x8768u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x876Au; return dd3_static_complete(rt,2u);
        }
        case 0x876Au: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x876Cu,0x876Eu)) c++; rt->state.cpu.pc=0x876Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x876Cu; return dd3_static_complete(rt,2u);
        }
        case 0x876Cu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x876Du; return dd3_static_complete(rt,2u);
        }
        case 0x876Du: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x876Eu; return dd3_static_complete(rt,2u);
        }
        case 0x876Eu: {
            uint16_t ea=(uint16_t)(0x04AAu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8771u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04AAu,ea)?1u:0u));
        }
        case 0x8771u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8773u,0x8774u)) c++; rt->state.cpu.pc=0x8774u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8773u; return dd3_static_complete(rt,2u);
        }
        case 0x8773u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8774u; return dd3_static_complete(rt,2u);
        }
        case 0x8774u: {
            uint16_t ea=(uint16_t)(0x878Au+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8777u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x878Au,ea)?1u:0u));
        }
        case 0x8777u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8778u; return dd3_static_complete(rt,2u);
        }
        case 0x8778u: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x877Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0x877Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x877Eu; return dd3_static_complete(rt,5u);
        }
        case 0x877Eu: {
            uint8_t v=0x24u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8780u; return dd3_static_complete(rt,2u);
        }
        case 0x8780u: {
            dd3_static_push8(rt,(uint8_t)(0x8782u>>8)); dd3_static_push8(rt,(uint8_t)0x8782u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x8783u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8790u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8792u; return dd3_static_complete(rt,4u);
        }
        case 0x8792u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8794u,0x87E1u)) c++; rt->state.cpu.pc=0x87E1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8794u; return dd3_static_complete(rt,2u);
        }
        case 0x8794u: {
            dd3_static_push8(rt,(uint8_t)(0x8796u>>8)); dd3_static_push8(rt,(uint8_t)0x8796u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x8797u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8799u; return dd3_static_complete(rt,2u);
        }
        case 0x8799u: {
            dd3_static_push8(rt,(uint8_t)(0x879Bu>>8)); dd3_static_push8(rt,(uint8_t)0x879Bu);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x879Cu: {
            dd3_static_push8(rt,(uint8_t)(0x879Eu>>8)); dd3_static_push8(rt,(uint8_t)0x879Eu);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x879Fu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87A1u; return dd3_static_complete(rt,2u);
        }
        case 0x87A1u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x87A3u; return dd3_static_complete(rt,4u);
        }
        case 0x87A3u: {
            uint8_t v=0x09u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87A5u; return dd3_static_complete(rt,2u);
        }
        case 0x87A5u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x87A7u; return dd3_static_complete(rt,4u);
        }
        case 0x87A7u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87AAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x87AAu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87ACu; return dd3_static_complete(rt,2u);
        }
        case 0x87ACu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x87ADu; return dd3_static_complete(rt,2u);
        }
        case 0x87ADu: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87B0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0x87B0u: {
            uint8_t v=0xA0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87B2u; return dd3_static_complete(rt,2u);
        }
        case 0x87B2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87B4u,0x87E1u)) c++; rt->state.cpu.pc=0x87E1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87B4u; return dd3_static_complete(rt,2u);
        }
        case 0x87B4u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x87B6u; return dd3_static_complete(rt,2u);
        }
        case 0x87B6u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x87B8u,0x87E1u)) c++; rt->state.cpu.pc=0x87E1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87B8u; return dd3_static_complete(rt,2u);
        }
        case 0x87B8u: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87BBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0x87BBu: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87BDu; return dd3_static_complete(rt,2u);
        }
        case 0x87BDu: {
            dd3_static_write8(rt,(uint16_t)(0x004Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x87C0u; return dd3_static_complete(rt,5u);
        }
        case 0x87C0u: {
            dd3_static_push8(rt,(uint8_t)(0x87C2u>>8)); dd3_static_push8(rt,(uint8_t)0x87C2u);
            rt->state.cpu.pc=0xA847u; return dd3_static_complete(rt,6u);
        }
        case 0x87C3u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87C5u; return dd3_static_complete(rt,2u);
        }
        case 0x87C5u: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x87C8u; return dd3_static_complete(rt,5u);
        }
        case 0x87C8u: {
            dd3_static_write8(rt,(uint16_t)(0x007Du+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x87CBu; return dd3_static_complete(rt,5u);
        }
        case 0x87CBu: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87CEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0x87CEu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87D0u; return dd3_static_complete(rt,2u);
        }
        case 0x87D0u: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x87D3u; return dd3_static_complete(rt,5u);
        }
        case 0x87D3u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87D6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x87D6u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87D8u; return dd3_static_complete(rt,2u);
        }
        case 0x87D8u: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x87DBu; return dd3_static_complete(rt,5u);
        }
        case 0x87DBu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87DCu; return dd3_static_complete(rt,2u);
        }
        case 0x87DCu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87DEu; return dd3_static_complete(rt,2u);
        }
        case 0x87DEu: {
            dd3_static_write8(rt,(uint16_t)(0x03B8u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x87E1u; return dd3_static_complete(rt,5u);
        }
        case 0x87E1u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x87E3u; return dd3_static_complete(rt,6u);
        }
        case 0x87E3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87E5u,0x87E8u)) c++; rt->state.cpu.pc=0x87E8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87E5u; return dd3_static_complete(rt,2u);
        }
        case 0x87E5u: {
            dd3_static_push8(rt,(uint8_t)(0x87E7u>>8)); dd3_static_push8(rt,(uint8_t)0x87E7u);
            rt->state.cpu.pc=0x8904u; return dd3_static_complete(rt,6u);
        }
        case 0x87E8u: {
            dd3_static_push8(rt,(uint8_t)(0x87EAu>>8)); dd3_static_push8(rt,(uint8_t)0x87EAu);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x87EBu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x87ECu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87EEu; return dd3_static_complete(rt,4u);
        }
        case 0x87EEu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x87F0u,0x883Bu)) c++; rt->state.cpu.pc=0x883Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87F0u; return dd3_static_complete(rt,2u);
        }
        case 0x87F0u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87F2u; return dd3_static_complete(rt,4u);
        }
        case 0x87F2u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x87F4u; return dd3_static_complete(rt,2u);
        }
        case 0x87F4u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87F6u,0x87FEu)) c++; rt->state.cpu.pc=0x87FEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87F6u; return dd3_static_complete(rt,2u);
        }
        case 0x87F6u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x87F8u; return dd3_static_complete(rt,2u);
        }
        case 0x87F8u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87FAu,0x87FEu)) c++; rt->state.cpu.pc=0x87FEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87FAu; return dd3_static_complete(rt,2u);
        }
        case 0x87FAu: {
            uint8_t v=0x0Du;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x87FCu; return dd3_static_complete(rt,2u);
        }
        case 0x87FCu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87FEu,0x881Bu)) c++; rt->state.cpu.pc=0x881Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87FEu; return dd3_static_complete(rt,2u);
        }
        case 0x87FEu: {
            uint16_t ea=(uint16_t)(0x06E1u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8801u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06E1u,ea)?1u:0u));
        }
        case 0x8801u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8803u,0x881Bu)) c++; rt->state.cpu.pc=0x881Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8803u; return dd3_static_complete(rt,2u);
        }
        case 0x8803u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8805u; return dd3_static_complete(rt,2u);
        }
        case 0x8805u: {
            dd3_static_write8(rt,(uint16_t)(0x06E1u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8808u; return dd3_static_complete(rt,5u);
        }
        case 0x8808u: {
            uint16_t ea=(uint16_t)(0x04AAu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x880Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04AAu,ea)?1u:0u));
        }
        case 0x880Bu: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x880Du; return dd3_static_complete(rt,4u);
        }
        case 0x880Du: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x880Fu,0x881Bu)) c++; rt->state.cpu.pc=0x881Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x880Fu; return dd3_static_complete(rt,2u);
        }
        case 0x880Fu: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8812u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x8812u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8814u,0x881Bu)) c++; rt->state.cpu.pc=0x881Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8814u; return dd3_static_complete(rt,2u);
        }
        case 0x8814u: {
            uint8_t v=0x3Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8816u; return dd3_static_complete(rt,2u);
        }
        case 0x8816u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8818u; return dd3_static_complete(rt,4u);
        }
        case 0x8818u: {
            rt->state.cpu.pc=0x93D2u; return dd3_static_complete(rt,3u);
        }
        case 0x881Bu: {
            dd3_static_push8(rt,(uint8_t)(0x881Du>>8)); dd3_static_push8(rt,(uint8_t)0x881Du);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x881Eu: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8820u; return dd3_static_complete(rt,2u);
        }
        case 0x8820u: {
            dd3_static_push8(rt,(uint8_t)(0x8822u>>8)); dd3_static_push8(rt,(uint8_t)0x8822u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8823u: {
            dd3_static_push8(rt,(uint8_t)(0x8825u>>8)); dd3_static_push8(rt,(uint8_t)0x8825u);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x8826u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8828u; return dd3_static_complete(rt,4u);
        }
        case 0x8828u: {
            uint8_t v=0x09u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x882Au; return dd3_static_complete(rt,2u);
        }
        case 0x882Au: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x882Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0x882Du: {
            uint8_t v=0x90u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x882Fu; return dd3_static_complete(rt,2u);
        }
        case 0x882Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8831u,0x8833u)) c++; rt->state.cpu.pc=0x8833u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8831u; return dd3_static_complete(rt,2u);
        }
        case 0x8831u: {
            uint8_t v=0x1Du;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8833u; return dd3_static_complete(rt,2u);
        }
        case 0x8833u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.y);
            rt->state.cpu.pc=0x8835u; return dd3_static_complete(rt,4u);
        }
        case 0x8835u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8837u; return dd3_static_complete(rt,4u);
        }
        case 0x8837u: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8839u; return dd3_static_complete(rt,2u);
        }
        case 0x8839u: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x883Bu; return dd3_static_complete(rt,4u);
        }
        case 0x883Bu: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x883Du; return dd3_static_complete(rt,6u);
        }
        case 0x883Du: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x883Fu; return dd3_static_complete(rt,4u);
        }
        case 0x883Fu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8841u; return dd3_static_complete(rt,2u);
        }
        case 0x8841u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8843u,0x8846u)) c++; rt->state.cpu.pc=0x8846u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8843u; return dd3_static_complete(rt,2u);
        }
        case 0x8843u: {
            rt->state.cpu.pc=0x88D8u; return dd3_static_complete(rt,3u);
        }
        case 0x8846u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8848u; return dd3_static_complete(rt,2u);
        }
        case 0x8848u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x884Au,0x88A7u)) c++; rt->state.cpu.pc=0x88A7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x884Au; return dd3_static_complete(rt,2u);
        }
        case 0x884Au: {
            uint16_t ea=(uint16_t)(0x04A0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x884Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A0u,ea)?1u:0u));
        }
        case 0x884Du: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8850u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0x8850u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8852u,0x8872u)) c++; rt->state.cpu.pc=0x8872u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8852u; return dd3_static_complete(rt,2u);
        }
        case 0x8852u: {
            uint16_t ea=(uint16_t)(0x0054u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8855u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0054u,ea)?1u:0u));
        }
        case 0x8855u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8857u; return dd3_static_complete(rt,2u);
        }
        case 0x8857u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8859u,0x8872u)) c++; rt->state.cpu.pc=0x8872u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8859u; return dd3_static_complete(rt,2u);
        }
        case 0x8859u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x885Bu; return dd3_static_complete(rt,4u);
        }
        case 0x885Bu: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x885Du; return dd3_static_complete(rt,2u);
        }
        case 0x885Du: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x885Fu,0x8862u)) c++; rt->state.cpu.pc=0x8862u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x885Fu; return dd3_static_complete(rt,2u);
        }
        case 0x885Fu: {
            rt->state.cpu.pc=0x88D5u; return dd3_static_complete(rt,3u);
        }
        case 0x8862u: {
            uint16_t ea=(uint16_t)(0x88DCu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8865u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x88DCu,ea)?1u:0u));
        }
        case 0x8865u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8867u,0x88A7u)) c++; rt->state.cpu.pc=0x88A7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8867u; return dd3_static_complete(rt,2u);
        }
        case 0x8867u: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x886Au; return dd3_static_complete(rt,4u);
        }
        case 0x886Au: {
            uint8_t v=0x07u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x886Cu; return dd3_static_complete(rt,2u);
        }
        case 0x886Cu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x886Du; return dd3_static_complete(rt,2u);
        }
        case 0x886Du: {
            uint16_t ea=(uint16_t)(0x88FCu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8870u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x88FCu,ea)?1u:0u));
        }
        case 0x8870u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8872u,0x88A7u)) c++; rt->state.cpu.pc=0x88A7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8872u; return dd3_static_complete(rt,2u);
        }
        case 0x8872u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8875u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0x8875u: {
            uint8_t v=0x70u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8877u; return dd3_static_complete(rt,2u);
        }
        case 0x8877u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8879u,0x88A7u)) c++; rt->state.cpu.pc=0x88A7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8879u; return dd3_static_complete(rt,2u);
        }
        case 0x8879u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x887Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0x887Cu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x887Eu; return dd3_static_complete(rt,2u);
        }
        case 0x887Eu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8880u,0x88A7u)) c++; rt->state.cpu.pc=0x88A7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8880u; return dd3_static_complete(rt,2u);
        }
        case 0x8880u: {
            uint16_t ea=(uint16_t)(0x04A0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8883u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A0u,ea)?1u:0u));
        }
        case 0x8883u: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8886u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0x8886u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8888u; return dd3_static_complete(rt,2u);
        }
        case 0x8888u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x888Au; return dd3_static_complete(rt,2u);
        }
        case 0x888Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x888Cu,0x88A7u)) c++; rt->state.cpu.pc=0x88A7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x888Cu; return dd3_static_complete(rt,2u);
        }
        case 0x888Cu: {
            uint16_t ea=(uint16_t)(0x0054u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x888Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0054u,ea)?1u:0u));
        }
        case 0x888Fu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8891u; return dd3_static_complete(rt,2u);
        }
        case 0x8891u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8893u,0x88D8u)) c++; rt->state.cpu.pc=0x88D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8893u; return dd3_static_complete(rt,2u);
        }
        case 0x8893u: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8896u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0x8896u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8898u,0x889Eu)) c++; rt->state.cpu.pc=0x889Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8898u; return dd3_static_complete(rt,2u);
        }
        case 0x8898u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x889Au; return dd3_static_complete(rt,2u);
        }
        case 0x889Au: {
            uint8_t v=0xC0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x889Cu; return dd3_static_complete(rt,2u);
        }
        case 0x889Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x889Eu,0x88D8u)) c++; rt->state.cpu.pc=0x88D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x889Eu; return dd3_static_complete(rt,2u);
        }
        case 0x889Eu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88A0u; return dd3_static_complete(rt,4u);
        }
        case 0x88A0u: {
            uint16_t ea=(uint16_t)(0x88ECu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88A3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x88ECu,ea)?1u:0u));
        }
        case 0x88A3u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x88A5u; return dd3_static_complete(rt,4u);
        }
        case 0x88A5u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x88A7u,0x88D8u)) c++; rt->state.cpu.pc=0x88D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88A7u; return dd3_static_complete(rt,2u);
        }
        case 0x88A7u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x88A9u; return dd3_static_complete(rt,2u);
        }
        case 0x88A9u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x88ABu,0x88D5u)) c++; rt->state.cpu.pc=0x88D5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88ABu; return dd3_static_complete(rt,2u);
        }
        case 0x88ABu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88ADu; return dd3_static_complete(rt,4u);
        }
        case 0x88ADu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x88AFu; return dd3_static_complete(rt,2u);
        }
        case 0x88AFu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x88B1u,0x88B9u)) c++; rt->state.cpu.pc=0x88B9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88B1u; return dd3_static_complete(rt,2u);
        }
        case 0x88B1u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x88B3u; return dd3_static_complete(rt,2u);
        }
        case 0x88B3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x88B5u,0x88B9u)) c++; rt->state.cpu.pc=0x88B9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88B5u; return dd3_static_complete(rt,2u);
        }
        case 0x88B5u: {
            uint8_t v=0x0Du;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x88B7u; return dd3_static_complete(rt,2u);
        }
        case 0x88B7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x88B9u,0x88D5u)) c++; rt->state.cpu.pc=0x88D5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88B9u; return dd3_static_complete(rt,2u);
        }
        case 0x88B9u: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88BCu; return dd3_static_complete(rt,4u);
        }
        case 0x88BCu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x88BDu; return dd3_static_complete(rt,2u);
        }
        case 0x88BDu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x88BFu; return dd3_static_complete(rt,2u);
        }
        case 0x88BFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x88C1u,0x88D5u)) c++; rt->state.cpu.pc=0x88D5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88C1u; return dd3_static_complete(rt,2u);
        }
        case 0x88C1u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88C4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0x88C4u: {
            uint8_t v=0x60u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x88C6u; return dd3_static_complete(rt,2u);
        }
        case 0x88C6u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x88C8u,0x88D5u)) c++; rt->state.cpu.pc=0x88D5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88C8u; return dd3_static_complete(rt,2u);
        }
        case 0x88C8u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88CBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0x88CBu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x88CDu; return dd3_static_complete(rt,2u);
        }
        case 0x88CDu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x88CFu,0x88D5u)) c++; rt->state.cpu.pc=0x88D5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88CFu; return dd3_static_complete(rt,2u);
        }
        case 0x88CFu: {
            uint8_t v=0x53u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88D1u; return dd3_static_complete(rt,2u);
        }
        case 0x88D1u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x88D3u; return dd3_static_complete(rt,4u);
        }
        case 0x88D3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x88D5u,0x88D8u)) c++; rt->state.cpu.pc=0x88D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88D5u; return dd3_static_complete(rt,2u);
        }
        case 0x88D5u: {
            dd3_static_push8(rt,(uint8_t)(0x88D7u>>8)); dd3_static_push8(rt,(uint8_t)0x88D7u);
            rt->state.cpu.pc=0x8904u; return dd3_static_complete(rt,6u);
        }
        case 0x88D8u: {
            dd3_static_push8(rt,(uint8_t)(0x88DAu>>8)); dd3_static_push8(rt,(uint8_t)0x88DAu);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x88DBu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8904u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8906u; return dd3_static_complete(rt,2u);
        }
        case 0x8906u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8908u; return dd3_static_complete(rt,4u);
        }
        case 0x8908u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8909u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x890Bu; return dd3_static_complete(rt,4u);
        }
        case 0x890Bu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x890Du,0x8920u)) c++; rt->state.cpu.pc=0x8920u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x890Du; return dd3_static_complete(rt,2u);
        }
        case 0x890Du: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x890Fu; return dd3_static_complete(rt,2u);
        }
        case 0x890Fu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8911u; return dd3_static_complete(rt,4u);
        }
        case 0x8911u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8913u; return dd3_static_complete(rt,2u);
        }
        case 0x8913u: {
            dd3_static_push8(rt,(uint8_t)(0x8915u>>8)); dd3_static_push8(rt,(uint8_t)0x8915u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8916u: {
            uint8_t v=0x1Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8918u; return dd3_static_complete(rt,2u);
        }
        case 0x8918u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x891Au; return dd3_static_complete(rt,4u);
        }
        case 0x891Au: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x891Cu; return dd3_static_complete(rt,4u);
        }
        case 0x891Cu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x891Eu; return dd3_static_complete(rt,2u);
        }
        case 0x891Eu: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8920u; return dd3_static_complete(rt,4u);
        }
        case 0x8920u: {
            rt->state.cpu.pc=0x931Au; return dd3_static_complete(rt,3u);
        }
        case 0x8923u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8925u; return dd3_static_complete(rt,4u);
        }
        case 0x8925u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8927u,0x8944u)) c++; rt->state.cpu.pc=0x8944u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8927u; return dd3_static_complete(rt,2u);
        }
        case 0x8927u: {
            dd3_static_push8(rt,(uint8_t)(0x8929u>>8)); dd3_static_push8(rt,(uint8_t)0x8929u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x892Au: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x892Cu; return dd3_static_complete(rt,4u);
        }
        case 0x892Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x892Eu; return dd3_static_complete(rt,2u);
        }
        case 0x892Eu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x892Fu; return dd3_static_complete(rt,2u);
        }
        case 0x892Fu: {
            uint8_t v=0x14u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8931u; return dd3_static_complete(rt,2u);
        }
        case 0x8931u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8932u; return dd3_static_complete(rt,2u);
        }
        case 0x8932u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8934u; return dd3_static_complete(rt,2u);
        }
        case 0x8934u: {
            dd3_static_push8(rt,(uint8_t)(0x8936u>>8)); dd3_static_push8(rt,(uint8_t)0x8936u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8937u: {
            dd3_static_push8(rt,(uint8_t)(0x8939u>>8)); dd3_static_push8(rt,(uint8_t)0x8939u);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x893Au: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x893Cu; return dd3_static_complete(rt,4u);
        }
        case 0x893Cu: {
            uint16_t ea=(uint16_t)(0x895Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x893Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x895Du,ea)?1u:0u));
        }
        case 0x893Fu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8941u; return dd3_static_complete(rt,4u);
        }
        case 0x8941u: {
            dd3_static_push8(rt,(uint8_t)(0x8943u>>8)); dd3_static_push8(rt,(uint8_t)0x8943u);
            rt->state.cpu.pc=0xAA59u; return dd3_static_complete(rt,6u);
        }
        case 0x8944u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8946u; return dd3_static_complete(rt,6u);
        }
        case 0x8946u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8948u; return dd3_static_complete(rt,4u);
        }
        case 0x8948u: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x894Au; return dd3_static_complete(rt,2u);
        }
        case 0x894Au: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x894Cu,0x8959u)) c++; rt->state.cpu.pc=0x8959u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x894Cu; return dd3_static_complete(rt,2u);
        }
        case 0x894Cu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x894Eu; return dd3_static_complete(rt,4u);
        }
        case 0x894Eu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8950u; return dd3_static_complete(rt,2u);
        }
        case 0x8950u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8951u; return dd3_static_complete(rt,2u);
        }
        case 0x8951u: {
            uint8_t v=0x14u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8953u; return dd3_static_complete(rt,2u);
        }
        case 0x8953u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8954u; return dd3_static_complete(rt,2u);
        }
        case 0x8954u: {
            uint16_t ea=(uint16_t)(0x8961u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8957u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8961u,ea)?1u:0u));
        }
        case 0x8957u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8959u; return dd3_static_complete(rt,4u);
        }
        case 0x8959u: {
            dd3_static_push8(rt,(uint8_t)(0x895Bu>>8)); dd3_static_push8(rt,(uint8_t)0x895Bu);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x895Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8965u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8967u; return dd3_static_complete(rt,4u);
        }
        case 0x8967u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8969u,0x8990u)) c++; rt->state.cpu.pc=0x8990u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8969u; return dd3_static_complete(rt,2u);
        }
        case 0x8969u: {
            dd3_static_push8(rt,(uint8_t)(0x896Bu>>8)); dd3_static_push8(rt,(uint8_t)0x896Bu);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x896Cu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x896Eu; return dd3_static_complete(rt,2u);
        }
        case 0x896Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8970u>>8)); dd3_static_push8(rt,(uint8_t)0x8970u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8971u: {
            dd3_static_push8(rt,(uint8_t)(0x8973u>>8)); dd3_static_push8(rt,(uint8_t)0x8973u);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x8974u: {
            uint8_t v=0x06u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8976u; return dd3_static_complete(rt,2u);
        }
        case 0x8976u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8978u; return dd3_static_complete(rt,4u);
        }
        case 0x8978u: {
            dd3_static_push8(rt,(uint8_t)(0x897Au>>8)); dd3_static_push8(rt,(uint8_t)0x897Au);
            rt->state.cpu.pc=0xAA59u; return dd3_static_complete(rt,6u);
        }
        case 0x897Bu: {
            dd3_static_push8(rt,(uint8_t)(0x897Du>>8)); dd3_static_push8(rt,(uint8_t)0x897Du);
            rt->state.cpu.pc=0x839Eu; return dd3_static_complete(rt,6u);
        }
        case 0x897Eu: {
            uint16_t ea=(uint16_t)(0x899Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8981u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x899Bu,ea)?1u:0u));
        }
        case 0x8981u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8983u; return dd3_static_complete(rt,4u);
        }
        case 0x8983u: {
            uint8_t v=0x18u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8985u; return dd3_static_complete(rt,2u);
        }
        case 0x8985u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8987u,0x8990u)) c++; rt->state.cpu.pc=0x8990u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8987u; return dd3_static_complete(rt,2u);
        }
        case 0x8987u: {
            uint16_t ea=(uint16_t)(0x04AEu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x898Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04AEu,ea)?1u:0u));
        }
        case 0x898Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x898Cu,0x8990u)) c++; rt->state.cpu.pc=0x8990u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x898Cu; return dd3_static_complete(rt,2u);
        }
        case 0x898Cu: {
            uint8_t v=0x05u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x898Eu; return dd3_static_complete(rt,2u);
        }
        case 0x898Eu: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8990u; return dd3_static_complete(rt,4u);
        }
        case 0x8990u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8992u; return dd3_static_complete(rt,6u);
        }
        case 0x8992u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8994u,0x8997u)) c++; rt->state.cpu.pc=0x8997u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8994u; return dd3_static_complete(rt,2u);
        }
        case 0x8994u: {
            dd3_static_push8(rt,(uint8_t)(0x8996u>>8)); dd3_static_push8(rt,(uint8_t)0x8996u);
            rt->state.cpu.pc=0x8904u; return dd3_static_complete(rt,6u);
        }
        case 0x8997u: {
            dd3_static_push8(rt,(uint8_t)(0x8999u>>8)); dd3_static_push8(rt,(uint8_t)0x8999u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x899Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x89BDu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89BFu; return dd3_static_complete(rt,4u);
        }
        case 0x89BFu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x89C1u,0x89E8u)) c++; rt->state.cpu.pc=0x89E8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x89C1u; return dd3_static_complete(rt,2u);
        }
        case 0x89C1u: {
            dd3_static_push8(rt,(uint8_t)(0x89C3u>>8)); dd3_static_push8(rt,(uint8_t)0x89C3u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x89C4u: {
            uint8_t v=0x0Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89C6u; return dd3_static_complete(rt,2u);
        }
        case 0x89C6u: {
            dd3_static_push8(rt,(uint8_t)(0x89C8u>>8)); dd3_static_push8(rt,(uint8_t)0x89C8u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x89C9u: {
            dd3_static_push8(rt,(uint8_t)(0x89CBu>>8)); dd3_static_push8(rt,(uint8_t)0x89CBu);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x89CCu: {
            dd3_static_write8(rt,(uint16_t)(0x0421u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x89CFu; return dd3_static_complete(rt,5u);
        }
        case 0x89CFu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89D1u; return dd3_static_complete(rt,2u);
        }
        case 0x89D1u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x89D3u; return dd3_static_complete(rt,4u);
        }
        case 0x89D3u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89D5u; return dd3_static_complete(rt,4u);
        }
        case 0x89D5u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x89D7u; return dd3_static_complete(rt,2u);
        }
        case 0x89D7u: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x89D9u; return dd3_static_complete(rt,4u);
        }
        case 0x89D9u: {
            uint8_t v=0x23u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89DBu; return dd3_static_complete(rt,2u);
        }
        case 0x89DBu: {
            dd3_static_push8(rt,(uint8_t)(0x89DDu>>8)); dd3_static_push8(rt,(uint8_t)0x89DDu);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x89DEu: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89E0u; return dd3_static_complete(rt,2u);
        }
        case 0x89E0u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x89E2u; return dd3_static_complete(rt,2u);
        }
        case 0x89E2u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x89E4u,0x89E6u)) c++; rt->state.cpu.pc=0x89E6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x89E4u; return dd3_static_complete(rt,2u);
        }
        case 0x89E4u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89E6u; return dd3_static_complete(rt,2u);
        }
        case 0x89E6u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x89E8u; return dd3_static_complete(rt,4u);
        }
        case 0x89E8u: {
            uint16_t ea=(uint16_t)(0x045Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89EBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x045Du,ea)?1u:0u));
        }
        case 0x89EBu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x89EDu,0x8A0Cu)) c++; rt->state.cpu.pc=0x8A0Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x89EDu; return dd3_static_complete(rt,2u);
        }
        case 0x89EDu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89EFu; return dd3_static_complete(rt,4u);
        }
        case 0x89EFu: {
            uint8_t v=0x1Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x89F1u; return dd3_static_complete(rt,2u);
        }
        case 0x89F1u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x89F3u,0x8A04u)) c++; rt->state.cpu.pc=0x8A04u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x89F3u; return dd3_static_complete(rt,2u);
        }
        case 0x89F3u: {
            uint16_t ea=0x04BCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89F6u; return dd3_static_complete(rt,4u);
        }
        case 0x89F6u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x89F8u; return dd3_static_complete(rt,2u);
        }
        case 0x89F8u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x89FAu,0x8A04u)) c++; rt->state.cpu.pc=0x8A04u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x89FAu; return dd3_static_complete(rt,2u);
        }
        case 0x89FAu: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x89FCu; return dd3_static_complete(rt,6u);
        }
        case 0x89FCu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x89FEu,0x8A14u)) c++; rt->state.cpu.pc=0x8A14u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x89FEu; return dd3_static_complete(rt,2u);
        }
        case 0x89FEu: {
            uint8_t v=0x24u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A00u; return dd3_static_complete(rt,2u);
        }
        case 0x8A00u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8A02u; return dd3_static_complete(rt,4u);
        }
        case 0x8A02u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8A04u,0x8A14u)) c++; rt->state.cpu.pc=0x8A14u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A04u; return dd3_static_complete(rt,2u);
        }
        case 0x8A04u: {
            uint8_t v=0x26u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A06u; return dd3_static_complete(rt,2u);
        }
        case 0x8A06u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8A08u; return dd3_static_complete(rt,4u);
        }
        case 0x8A08u: {
            dd3_static_push8(rt,(uint8_t)(0x8A0Au>>8)); dd3_static_push8(rt,(uint8_t)0x8A0Au);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x8A0Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8A0Cu: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8A0Eu; return dd3_static_complete(rt,6u);
        }
        case 0x8A0Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8A10u,0x8A14u)) c++; rt->state.cpu.pc=0x8A14u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A10u; return dd3_static_complete(rt,2u);
        }
        case 0x8A10u: {
            uint8_t v=0x12u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A12u; return dd3_static_complete(rt,2u);
        }
        case 0x8A12u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8A14u; return dd3_static_complete(rt,4u);
        }
        case 0x8A14u: {
            dd3_static_push8(rt,(uint8_t)(0x8A16u>>8)); dd3_static_push8(rt,(uint8_t)0x8A16u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x8A17u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8A18u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A1Au; return dd3_static_complete(rt,4u);
        }
        case 0x8A1Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8A1Cu,0x8A4Du)) c++; rt->state.cpu.pc=0x8A4Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A1Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8A1Cu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8A1Du; return dd3_static_complete(rt,2u);
        }
        case 0x8A1Du: {
            uint8_t v=0x1Au;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8A1Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8A1Fu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8A20u; return dd3_static_complete(rt,2u);
        }
        case 0x8A20u: {
            dd3_static_push8(rt,(uint8_t)(0x8A22u>>8)); dd3_static_push8(rt,(uint8_t)0x8A22u);
            rt->state.cpu.pc=0x8A6Fu; return dd3_static_complete(rt,6u);
        }
        case 0x8A23u: {
            dd3_static_push8(rt,(uint8_t)(0x8A25u>>8)); dd3_static_push8(rt,(uint8_t)0x8A25u);
            rt->state.cpu.pc=0xA949u; return dd3_static_complete(rt,6u);
        }
        case 0x8A26u: {
            uint16_t ea=(uint16_t)(0x8A6Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A29u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8A6Bu,ea)?1u:0u));
        }
        case 0x8A29u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8A2Bu,0x8A2Eu)) c++; rt->state.cpu.pc=0x8A2Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A2Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8A2Bu: {
            dd3_static_push8(rt,(uint8_t)(0x8A2Du>>8)); dd3_static_push8(rt,(uint8_t)0x8A2Du);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x8A2Eu: {
            uint16_t ea=(uint16_t)(0x8A5Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A31u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8A5Bu,ea)?1u:0u));
        }
        case 0x8A31u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8A34u; return dd3_static_complete(rt,5u);
        }
        case 0x8A34u: {
            uint16_t ea=(uint16_t)(0x8A5Fu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A37u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8A5Fu,ea)?1u:0u));
        }
        case 0x8A37u: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8A3Au; return dd3_static_complete(rt,5u);
        }
        case 0x8A3Au: {
            uint16_t ea=(uint16_t)(0x8A63u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A3Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8A63u,ea)?1u:0u));
        }
        case 0x8A3Du: {
            dd3_static_write8(rt,(uint16_t)(0x0350u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8A40u; return dd3_static_complete(rt,5u);
        }
        case 0x8A40u: {
            uint16_t ea=(uint16_t)(0x8A67u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A43u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8A67u,ea)?1u:0u));
        }
        case 0x8A43u: {
            dd3_static_push8(rt,(uint8_t)(0x8A45u>>8)); dd3_static_push8(rt,(uint8_t)0x8A45u);
            rt->state.cpu.pc=0xA612u; return dd3_static_complete(rt,6u);
        }
        case 0x8A46u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A48u; return dd3_static_complete(rt,2u);
        }
        case 0x8A48u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8A4Au; return dd3_static_complete(rt,4u);
        }
        case 0x8A4Au: {
            dd3_static_push8(rt,(uint8_t)(0x8A4Cu>>8)); dd3_static_push8(rt,(uint8_t)0x8A4Cu);
            rt->state.cpu.pc=0xA910u; return dd3_static_complete(rt,6u);
        }
        case 0x8A4Du: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8A4Fu; return dd3_static_complete(rt,6u);
        }
        case 0x8A4Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8A51u,0x8A55u)) c++; rt->state.cpu.pc=0x8A55u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A51u; return dd3_static_complete(rt,2u);
        }
        case 0x8A51u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A53u; return dd3_static_complete(rt,2u);
        }
        case 0x8A53u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8A55u; return dd3_static_complete(rt,4u);
        }
        case 0x8A55u: {
            rt->state.cpu.pc=0x931Au; return dd3_static_complete(rt,3u);
        }
        case 0x8A6Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8A71u>>8)); dd3_static_push8(rt,(uint8_t)0x8A71u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x8A72u: {
            dd3_static_push8(rt,(uint8_t)(0x8A74u>>8)); dd3_static_push8(rt,(uint8_t)0x8A74u);
            rt->state.cpu.pc=0xA92Cu; return dd3_static_complete(rt,6u);
        }
        case 0x8A75u: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A77u; return dd3_static_complete(rt,2u);
        }
        case 0x8A77u: {
            dd3_static_push8(rt,(uint8_t)(0x8A79u>>8)); dd3_static_push8(rt,(uint8_t)0x8A79u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8A7Au: {
            uint8_t v=0x07u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A7Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8A7Cu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8A7Eu; return dd3_static_complete(rt,4u);
        }
        case 0x8A7Eu: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A80u; return dd3_static_complete(rt,2u);
        }
        case 0x8A80u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8A82u; return dd3_static_complete(rt,4u);
        }
        case 0x8A82u: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8A84u; return dd3_static_complete(rt,4u);
        }
        case 0x8A84u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8A85u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A87u; return dd3_static_complete(rt,4u);
        }
        case 0x8A87u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8A89u,0x8AC2u)) c++; rt->state.cpu.pc=0x8AC2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8A89u; return dd3_static_complete(rt,2u);
        }
        case 0x8A89u: {
            dd3_static_push8(rt,(uint8_t)(0x8A8Bu>>8)); dd3_static_push8(rt,(uint8_t)0x8A8Bu);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x8A8Cu: {
            dd3_static_push8(rt,(uint8_t)(0x8A8Eu>>8)); dd3_static_push8(rt,(uint8_t)0x8A8Eu);
            rt->state.cpu.pc=0xA949u; return dd3_static_complete(rt,6u);
        }
        case 0x8A8Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8A91u>>8)); dd3_static_push8(rt,(uint8_t)0x8A91u);
            rt->state.cpu.pc=0xA92Cu; return dd3_static_complete(rt,6u);
        }
        case 0x8A92u: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A94u; return dd3_static_complete(rt,2u);
        }
        case 0x8A94u: {
            dd3_static_push8(rt,(uint8_t)(0x8A96u>>8)); dd3_static_push8(rt,(uint8_t)0x8A96u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8A97u: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A99u; return dd3_static_complete(rt,2u);
        }
        case 0x8A99u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8A9Cu; return dd3_static_complete(rt,5u);
        }
        case 0x8A9Cu: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8A9Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8A9Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8AA1u; return dd3_static_complete(rt,5u);
        }
        case 0x8AA1u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8AA3u; return dd3_static_complete(rt,2u);
        }
        case 0x8AA3u: {
            dd3_static_write8(rt,(uint16_t)(0x0350u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8AA6u; return dd3_static_complete(rt,5u);
        }
        case 0x8AA6u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8AA8u; return dd3_static_complete(rt,4u);
        }
        case 0x8AA8u: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8AAAu; return dd3_static_complete(rt,4u);
        }
        case 0x8AAAu: {
            uint8_t v=0x0Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8AACu; return dd3_static_complete(rt,2u);
        }
        case 0x8AACu: {
            dd3_static_push8(rt,(uint8_t)(0x8AAEu>>8)); dd3_static_push8(rt,(uint8_t)0x8AAEu);
            rt->state.cpu.pc=0xA612u; return dd3_static_complete(rt,6u);
        }
        case 0x8AAFu: {
            dd3_static_push8(rt,(uint8_t)(0x8AB1u>>8)); dd3_static_push8(rt,(uint8_t)0x8AB1u);
            rt->state.cpu.pc=0xA910u; return dd3_static_complete(rt,6u);
        }
        case 0x8AB2u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8AB4u; return dd3_static_complete(rt,4u);
        }
        case 0x8AB4u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8AB6u; return dd3_static_complete(rt,2u);
        }
        case 0x8AB6u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8AB8u,0x8AC2u)) c++; rt->state.cpu.pc=0x8AC2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8AB8u; return dd3_static_complete(rt,2u);
        }
        case 0x8AB8u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8ABAu; return dd3_static_complete(rt,2u);
        }
        case 0x8ABAu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8ABCu; return dd3_static_complete(rt,4u);
        }
        case 0x8ABCu: {
            dd3_static_push8(rt,(uint8_t)(0x8ABEu>>8)); dd3_static_push8(rt,(uint8_t)0x8ABEu);
            rt->state.cpu.pc=0xA922u; return dd3_static_complete(rt,6u);
        }
        case 0x8ABFu: {
            dd3_static_push8(rt,(uint8_t)(0x8AC1u>>8)); dd3_static_push8(rt,(uint8_t)0x8AC1u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x8AC2u: {
            uint8_t v=0x06u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8AC4u; return dd3_static_complete(rt,2u);
        }
        case 0x8AC4u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8AC5u; return dd3_static_complete(rt,2u);
        }
        case 0x8AC5u: {
            dd3_static_push8(rt,(uint8_t)(0x8AC7u>>8)); dd3_static_push8(rt,(uint8_t)0x8AC7u);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x8AC8u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8ACAu; return dd3_static_complete(rt,4u);
        }
        case 0x8ACAu: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8ACCu; return dd3_static_complete(rt,2u);
        }
        case 0x8ACCu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8ACEu,0x8AD4u)) c++; rt->state.cpu.pc=0x8AD4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8ACEu; return dd3_static_complete(rt,2u);
        }
        case 0x8ACEu: {
            dd3_static_push8(rt,(uint8_t)(0x8AD0u>>8)); dd3_static_push8(rt,(uint8_t)0x8AD0u);
            rt->state.cpu.pc=0xA922u; return dd3_static_complete(rt,6u);
        }
        case 0x8AD1u: {
            rt->state.cpu.pc=0x931Au; return dd3_static_complete(rt,3u);
        }
        case 0x8AD4u: {
            rt->state.cpu.pc=0x931Du; return dd3_static_complete(rt,3u);
        }
        case 0x8B38u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B3Au; return dd3_static_complete(rt,4u);
        }
        case 0x8B3Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8B3Cu,0x8B54u)) c++; rt->state.cpu.pc=0x8B54u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8B3Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8B3Cu: {
            dd3_static_push8(rt,(uint8_t)(0x8B3Eu>>8)); dd3_static_push8(rt,(uint8_t)0x8B3Eu);
            rt->state.cpu.pc=0x8A6Fu; return dd3_static_complete(rt,6u);
        }
        case 0x8B3Fu: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B41u; return dd3_static_complete(rt,4u);
        }
        case 0x8B41u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8B43u; return dd3_static_complete(rt,2u);
        }
        case 0x8B43u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8B45u; return dd3_static_complete(rt,2u);
        }
        case 0x8B45u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8B47u; return dd3_static_complete(rt,2u);
        }
        case 0x8B47u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8B4Au; return dd3_static_complete(rt,5u);
        }
        case 0x8B4Au: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B4Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8B4Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8B4Fu; return dd3_static_complete(rt,5u);
        }
        case 0x8B4Fu: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B51u; return dd3_static_complete(rt,2u);
        }
        case 0x8B51u: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8B54u; return dd3_static_complete(rt,5u);
        }
        case 0x8B54u: {
            rt->state.cpu.pc=0x931Au; return dd3_static_complete(rt,3u);
        }
        case 0x8B57u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B59u; return dd3_static_complete(rt,4u);
        }
        case 0x8B59u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8B5Bu,0x8B6Eu)) c++; rt->state.cpu.pc=0x8B6Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8B5Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8B5Bu: {
            dd3_static_push8(rt,(uint8_t)(0x8B5Du>>8)); dd3_static_push8(rt,(uint8_t)0x8B5Du);
            rt->state.cpu.pc=0x8A6Fu; return dd3_static_complete(rt,6u);
        }
        case 0x8B5Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8B60u>>8)); dd3_static_push8(rt,(uint8_t)0x8B60u);
            rt->state.cpu.pc=0xA949u; return dd3_static_complete(rt,6u);
        }
        case 0x8B61u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B63u; return dd3_static_complete(rt,2u);
        }
        case 0x8B63u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8B66u; return dd3_static_complete(rt,5u);
        }
        case 0x8B66u: {
            uint8_t v=0x0Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B68u; return dd3_static_complete(rt,2u);
        }
        case 0x8B68u: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8B6Bu; return dd3_static_complete(rt,5u);
        }
        case 0x8B6Bu: {
            dd3_static_push8(rt,(uint8_t)(0x8B6Du>>8)); dd3_static_push8(rt,(uint8_t)0x8B6Du);
            rt->state.cpu.pc=0xA910u; return dd3_static_complete(rt,6u);
        }
        case 0x8B6Eu: {
            rt->state.cpu.pc=0x931Au; return dd3_static_complete(rt,3u);
        }
        case 0x8B8Cu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B8Eu; return dd3_static_complete(rt,4u);
        }
        case 0x8B8Eu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8B90u,0x8BAAu)) c++; rt->state.cpu.pc=0x8BAAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8B90u; return dd3_static_complete(rt,2u);
        }
        case 0x8B90u: {
            dd3_static_push8(rt,(uint8_t)(0x8B92u>>8)); dd3_static_push8(rt,(uint8_t)0x8B92u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x8B93u: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B95u; return dd3_static_complete(rt,2u);
        }
        case 0x8B95u: {
            dd3_static_push8(rt,(uint8_t)(0x8B97u>>8)); dd3_static_push8(rt,(uint8_t)0x8B97u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8B98u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B9Au; return dd3_static_complete(rt,2u);
        }
        case 0x8B9Au: {
            dd3_static_write8(rt,(uint16_t)(0x0421u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8B9Du; return dd3_static_complete(rt,5u);
        }
        case 0x8B9Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8B9Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8B9Fu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8BA1u; return dd3_static_complete(rt,4u);
        }
        case 0x8BA1u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BA3u; return dd3_static_complete(rt,2u);
        }
        case 0x8BA3u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8BA5u; return dd3_static_complete(rt,4u);
        }
        case 0x8BA5u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BA7u; return dd3_static_complete(rt,2u);
        }
        case 0x8BA7u: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8BAAu; return dd3_static_complete(rt,5u);
        }
        case 0x8BAAu: {
            uint16_t ea=(uint16_t)(0x0347u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BADu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0347u,ea)?1u:0u));
        }
        case 0x8BADu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8BAFu,0x8BF0u)) c++; rt->state.cpu.pc=0x8BF0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BAFu; return dd3_static_complete(rt,2u);
        }
        case 0x8BAFu: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8BB1u; return dd3_static_complete(rt,6u);
        }
        case 0x8BB1u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8BB3u,0x8BBCu)) c++; rt->state.cpu.pc=0x8BBCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BB3u; return dd3_static_complete(rt,2u);
        }
        case 0x8BB3u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BB5u; return dd3_static_complete(rt,2u);
        }
        case 0x8BB5u: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8BB8u; return dd3_static_complete(rt,5u);
        }
        case 0x8BB8u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BBAu; return dd3_static_complete(rt,2u);
        }
        case 0x8BBAu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8BBCu; return dd3_static_complete(rt,4u);
        }
        case 0x8BBCu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8BBDu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BBFu; return dd3_static_complete(rt,4u);
        }
        case 0x8BBFu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8BC1u,0x8BF0u)) c++; rt->state.cpu.pc=0x8BF0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BC1u; return dd3_static_complete(rt,2u);
        }
        case 0x8BC1u: {
            dd3_static_push8(rt,(uint8_t)(0x8BC3u>>8)); dd3_static_push8(rt,(uint8_t)0x8BC3u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x8BC4u: {
            uint8_t v=0x0Du;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BC6u; return dd3_static_complete(rt,2u);
        }
        case 0x8BC6u: {
            dd3_static_push8(rt,(uint8_t)(0x8BC8u>>8)); dd3_static_push8(rt,(uint8_t)0x8BC8u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8BC9u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BCBu; return dd3_static_complete(rt,4u);
        }
        case 0x8BCBu: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8BCDu; return dd3_static_complete(rt,2u);
        }
        case 0x8BCDu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8BCFu,0x8BD4u)) c++; rt->state.cpu.pc=0x8BD4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BCFu; return dd3_static_complete(rt,2u);
        }
        case 0x8BCFu: {
            uint8_t v=0x4Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BD1u; return dd3_static_complete(rt,2u);
        }
        case 0x8BD1u: {
            dd3_static_push8(rt,(uint8_t)(0x8BD3u>>8)); dd3_static_push8(rt,(uint8_t)0x8BD3u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x8BD4u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BD6u; return dd3_static_complete(rt,2u);
        }
        case 0x8BD6u: {
            dd3_static_write8(rt,(uint16_t)(0x0421u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8BD9u; return dd3_static_complete(rt,5u);
        }
        case 0x8BD9u: {
            dd3_static_push8(rt,(uint8_t)(0x8BDBu>>8)); dd3_static_push8(rt,(uint8_t)0x8BDBu);
            rt->state.cpu.pc=0x8C60u; return dd3_static_complete(rt,6u);
        }
        case 0x8BDCu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BDEu; return dd3_static_complete(rt,4u);
        }
        case 0x8BDEu: {
            uint8_t v=0x11u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8BE0u; return dd3_static_complete(rt,2u);
        }
        case 0x8BE0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8BE2u,0x8BE7u)) c++; rt->state.cpu.pc=0x8BE7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BE2u; return dd3_static_complete(rt,2u);
        }
        case 0x8BE2u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BE4u; return dd3_static_complete(rt,2u);
        }
        case 0x8BE4u: {
            dd3_static_write8(rt,0x068Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8BE7u; return dd3_static_complete(rt,4u);
        }
        case 0x8BE7u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8BE9u; return dd3_static_complete(rt,2u);
        }
        case 0x8BE9u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8BEBu,0x8BF0u)) c++; rt->state.cpu.pc=0x8BF0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BEBu; return dd3_static_complete(rt,2u);
        }
        case 0x8BEBu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BEDu; return dd3_static_complete(rt,2u);
        }
        case 0x8BEDu: {
            dd3_static_write8(rt,(uint16_t)(0x045Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8BF0u; return dd3_static_complete(rt,5u);
        }
        case 0x8BF0u: {
            uint8_t v=0x03u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BF2u; return dd3_static_complete(rt,2u);
        }
        case 0x8BF2u: {
            uint16_t ea=(uint16_t)(0x04D3u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8BF5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04D3u,ea)?1u:0u));
        }
        case 0x8BF5u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8BF7u,0x8BFBu)) c++; rt->state.cpu.pc=0x8BFBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BF7u; return dd3_static_complete(rt,2u);
        }
        case 0x8BF7u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8BF9u; return dd3_static_complete(rt,2u);
        }
        case 0x8BF9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8BFBu,0x8C02u)) c++; rt->state.cpu.pc=0x8C02u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BFBu; return dd3_static_complete(rt,2u);
        }
        case 0x8BFBu: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8BFCu; return dd3_static_complete(rt,2u);
        }
        case 0x8BFCu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8BFEu,0x8BF2u)) c++; rt->state.cpu.pc=0x8BF2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8BFEu; return dd3_static_complete(rt,2u);
        }
        case 0x8BFEu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C00u; return dd3_static_complete(rt,2u);
        }
        case 0x8C00u: {
            dd3_static_write8(rt,(uint16_t)((0xFEu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8C02u; return dd3_static_complete(rt,4u);
        }
        case 0x8C02u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8C04u; return dd3_static_complete(rt,6u);
        }
        case 0x8C04u: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C06u; return dd3_static_complete(rt,4u);
        }
        case 0x8C06u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8C08u; return dd3_static_complete(rt,2u);
        }
        case 0x8C08u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8C0Au,0x8C2Cu)) c++; rt->state.cpu.pc=0x8C2Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C0Au; return dd3_static_complete(rt,2u);
        }
        case 0x8C0Au: {
            dd3_static_push8(rt,(uint8_t)(0x8C0Cu>>8)); dd3_static_push8(rt,(uint8_t)0x8C0Cu);
            rt->state.cpu.pc=0xA605u; return dd3_static_complete(rt,6u);
        }
        case 0x8C0Du: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C0Fu; return dd3_static_complete(rt,4u);
        }
        case 0x8C0Fu: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8C11u; return dd3_static_complete(rt,2u);
        }
        case 0x8C11u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8C13u,0x8C19u)) c++; rt->state.cpu.pc=0x8C19u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C13u; return dd3_static_complete(rt,2u);
        }
        case 0x8C13u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8C14u; return dd3_static_complete(rt,2u);
        }
        case 0x8C14u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C16u; return dd3_static_complete(rt,2u);
        }
        case 0x8C16u: {
            dd3_static_write8(rt,(uint16_t)(0x04D3u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8C19u; return dd3_static_complete(rt,5u);
        }
        case 0x8C19u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8C1Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8C1Bu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8C1Du,0x8C5Cu)) c++; rt->state.cpu.pc=0x8C5Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C1Du; return dd3_static_complete(rt,2u);
        }
        case 0x8C1Du: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C1Fu; return dd3_static_complete(rt,4u);
        }
        case 0x8C1Fu: {
            uint8_t v=0x15u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8C21u; return dd3_static_complete(rt,2u);
        }
        case 0x8C21u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8C23u,0x8C5Cu)) c++; rt->state.cpu.pc=0x8C5Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C23u; return dd3_static_complete(rt,2u);
        }
        case 0x8C23u: {
            uint16_t ea=0x06BAu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C26u; return dd3_static_complete(rt,4u);
        }
        case 0x8C26u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8C28u,0x8C2Bu)) c++; rt->state.cpu.pc=0x8C2Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C28u; return dd3_static_complete(rt,2u);
        }
        case 0x8C28u: {
            uint16_t ea=0x06BAu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8C2Bu; return dd3_static_complete(rt,6u);
        }
        case 0x8C2Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8C2Cu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C2Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8C2Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8C30u,0x8C4Cu)) c++; rt->state.cpu.pc=0x8C4Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C30u; return dd3_static_complete(rt,2u);
        }
        case 0x8C30u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C32u; return dd3_static_complete(rt,4u);
        }
        case 0x8C32u: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8C34u; return dd3_static_complete(rt,2u);
        }
        case 0x8C34u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8C36u,0x8C5Cu)) c++; rt->state.cpu.pc=0x8C5Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C36u; return dd3_static_complete(rt,2u);
        }
        case 0x8C36u: {
            uint8_t v=0x03u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C38u; return dd3_static_complete(rt,2u);
        }
        case 0x8C38u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C3Au; return dd3_static_complete(rt,4u);
        }
        case 0x8C3Au: {
            uint8_t v=0x15u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8C3Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8C3Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8C3Eu,0x8C40u)) c++; rt->state.cpu.pc=0x8C40u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C3Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8C3Eu: {
            uint8_t v=0x08u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C40u; return dd3_static_complete(rt,2u);
        }
        case 0x8C40u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.y);
            rt->state.cpu.pc=0x8C42u; return dd3_static_complete(rt,4u);
        }
        case 0x8C42u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C44u; return dd3_static_complete(rt,2u);
        }
        case 0x8C44u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8C46u; return dd3_static_complete(rt,4u);
        }
        case 0x8C46u: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8C48u; return dd3_static_complete(rt,6u);
        }
        case 0x8C48u: {
            dd3_static_push8(rt,(uint8_t)(0x8C4Au>>8)); dd3_static_push8(rt,(uint8_t)0x8C4Au);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x8C4Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8C4Cu: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C4Eu; return dd3_static_complete(rt,4u);
        }
        case 0x8C4Eu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8C50u; return dd3_static_complete(rt,2u);
        }
        case 0x8C50u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8C52u,0x8C5Cu)) c++; rt->state.cpu.pc=0x8C5Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C52u; return dd3_static_complete(rt,2u);
        }
        case 0x8C52u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C54u; return dd3_static_complete(rt,2u);
        }
        case 0x8C54u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8C56u; return dd3_static_complete(rt,4u);
        }
        case 0x8C56u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C58u; return dd3_static_complete(rt,2u);
        }
        case 0x8C58u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8C5Au; return dd3_static_complete(rt,4u);
        }
        case 0x8C5Au: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8C5Cu; return dd3_static_complete(rt,6u);
        }
        case 0x8C5Cu: {
            dd3_static_push8(rt,(uint8_t)(0x8C5Eu>>8)); dd3_static_push8(rt,(uint8_t)0x8C5Eu);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x8C5Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8C60u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C63u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x8C63u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8C65u,0x8C94u)) c++; rt->state.cpu.pc=0x8C94u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C65u; return dd3_static_complete(rt,2u);
        }
        case 0x8C65u: {
            dd3_static_push8(rt,(uint8_t)(0x8C67u>>8)); dd3_static_push8(rt,(uint8_t)0x8C67u);
            rt->state.cpu.pc=0xAA75u; return dd3_static_complete(rt,6u);
        }
        case 0x8C68u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8C69u; return dd3_static_complete(rt,2u);
        }
        case 0x8C69u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C6Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8C6Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8C6Eu; return dd3_static_complete(rt,5u);
        }
        case 0x8C6Eu: {
            uint16_t ea=(uint16_t)(0x03F1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C71u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F1u,ea)?1u:0u));
        }
        case 0x8C71u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C73u; return dd3_static_complete(rt,3u);
        }
        case 0x8C73u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8C75u; return dd3_static_complete(rt,3u);
        }
        case 0x8C75u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8C77u,0x8C7Du)) c++; rt->state.cpu.pc=0x8C7Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C77u; return dd3_static_complete(rt,2u);
        }
        case 0x8C77u: {
            dd3_static_push8(rt,(uint8_t)(0x8C79u>>8)); dd3_static_push8(rt,(uint8_t)0x8C79u);
            rt->state.cpu.pc=0x8CCBu; return dd3_static_complete(rt,6u);
        }
        case 0x8C7Au: {
            rt->state.cpu.pc=0x8CCAu; return dd3_static_complete(rt,3u);
        }
        case 0x8C7Du: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C80u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0x8C80u: {
            uint8_t v=0x14u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8C82u; return dd3_static_complete(rt,2u);
        }
        case 0x8C82u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8C84u,0x8C77u)) c++; rt->state.cpu.pc=0x8C77u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C84u; return dd3_static_complete(rt,2u);
        }
        case 0x8C84u: {
            uint8_t v=0x16u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8C86u; return dd3_static_complete(rt,2u);
        }
        case 0x8C86u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8C88u,0x8C77u)) c++; rt->state.cpu.pc=0x8C77u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C88u; return dd3_static_complete(rt,2u);
        }
        case 0x8C88u: {
            uint8_t v=0x6Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C8Au; return dd3_static_complete(rt,2u);
        }
        case 0x8C8Au: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8C8Du; return dd3_static_complete(rt,5u);
        }
        case 0x8C8Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C8Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8C8Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8C92u; return dd3_static_complete(rt,5u);
        }
        case 0x8C92u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8C94u,0x8CCAu)) c++; rt->state.cpu.pc=0x8CCAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C94u; return dd3_static_complete(rt,2u);
        }
        case 0x8C94u: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C96u; return dd3_static_complete(rt,2u);
        }
        case 0x8C96u: {
            uint16_t ea=(uint16_t)(0x03F1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8C99u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F1u,ea)?1u:0u));
        }
        case 0x8C99u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8C9Bu; return dd3_static_complete(rt,3u);
        }
        case 0x8C9Bu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8C9Du; return dd3_static_complete(rt,3u);
        }
        case 0x8C9Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8C9Fu,0x8CA6u)) c++; rt->state.cpu.pc=0x8CA6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8C9Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8C9Fu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8CA0u; return dd3_static_complete(rt,2u);
        }
        case 0x8CA0u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x8CA2u; return dd3_static_complete(rt,2u);
        }
        case 0x8CA2u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8CA4u,0x8C96u)) c++; rt->state.cpu.pc=0x8C96u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8CA4u; return dd3_static_complete(rt,2u);
        }
        case 0x8CA4u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8CA6u,0x8CCAu)) c++; rt->state.cpu.pc=0x8CCAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8CA6u; return dd3_static_complete(rt,2u);
        }
        case 0x8CA6u: {
            uint16_t ea=(uint16_t)(0x003Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CA9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Cu,ea)?1u:0u));
        }
        case 0x8CA9u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8CABu,0x8C9Fu)) c++; rt->state.cpu.pc=0x8C9Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8CABu; return dd3_static_complete(rt,2u);
        }
        case 0x8CABu: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CAEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0x8CAEu: {
            uint8_t v=0x11u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8CB0u; return dd3_static_complete(rt,2u);
        }
        case 0x8CB0u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8CB2u,0x8C9Fu)) c++; rt->state.cpu.pc=0x8C9Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8CB2u; return dd3_static_complete(rt,2u);
        }
        case 0x8CB2u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CB4u; return dd3_static_complete(rt,2u);
        }
        case 0x8CB4u: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8CB7u; return dd3_static_complete(rt,5u);
        }
        case 0x8CB7u: {
            uint16_t ea=(uint16_t)(0x03B8u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CBAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03B8u,ea)?1u:0u));
        }
        case 0x8CBAu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8CBCu,0x8CCAu)) c++; rt->state.cpu.pc=0x8CCAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8CBCu; return dd3_static_complete(rt,2u);
        }
        case 0x8CBCu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8CBEu; return dd3_static_complete(rt,2u);
        }
        case 0x8CBEu: {
            dd3_static_write8(rt,(uint16_t)(0x03B8u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8CC1u; return dd3_static_complete(rt,5u);
        }
        case 0x8CC1u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8CC2u; return dd3_static_complete(rt,2u);
        }
        case 0x8CC2u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CC4u; return dd3_static_complete(rt,2u);
        }
        case 0x8CC4u: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8CC7u; return dd3_static_complete(rt,5u);
        }
        case 0x8CC7u: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8CCAu; return dd3_static_complete(rt,5u);
        }
        case 0x8CCAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8CCBu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CCDu; return dd3_static_complete(rt,2u);
        }
        case 0x8CCDu: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8CD0u; return dd3_static_complete(rt,5u);
        }
        case 0x8CD0u: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8CD3u; return dd3_static_complete(rt,5u);
        }
        case 0x8CD3u: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8CD6u; return dd3_static_complete(rt,5u);
        }
        case 0x8CD6u: {
            dd3_static_write8(rt,(uint16_t)(0x03B8u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8CD9u; return dd3_static_complete(rt,5u);
        }
        case 0x8CD9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8CDAu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CDCu; return dd3_static_complete(rt,4u);
        }
        case 0x8CDCu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8CDEu,0x8D09u)) c++; rt->state.cpu.pc=0x8D09u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8CDEu; return dd3_static_complete(rt,2u);
        }
        case 0x8CDEu: {
            dd3_static_push8(rt,(uint8_t)(0x8CE0u>>8)); dd3_static_push8(rt,(uint8_t)0x8CE0u);
            rt->state.cpu.pc=0xA900u; return dd3_static_complete(rt,6u);
        }
        case 0x8CE1u: {
            dd3_static_push8(rt,(uint8_t)(0x8CE3u>>8)); dd3_static_push8(rt,(uint8_t)0x8CE3u);
            rt->state.cpu.pc=0xA92Cu; return dd3_static_complete(rt,6u);
        }
        case 0x8CE4u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CE6u; return dd3_static_complete(rt,2u);
        }
        case 0x8CE6u: {
            dd3_static_push8(rt,(uint8_t)(0x8CE8u>>8)); dd3_static_push8(rt,(uint8_t)0x8CE8u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8CE9u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CEBu; return dd3_static_complete(rt,4u);
        }
        case 0x8CEBu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8CEDu; return dd3_static_complete(rt,2u);
        }
        case 0x8CEDu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8CEEu; return dd3_static_complete(rt,2u);
        }
        case 0x8CEEu: {
            uint8_t v=0x27u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8CF0u; return dd3_static_complete(rt,2u);
        }
        case 0x8CF0u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8CF1u; return dd3_static_complete(rt,2u);
        }
        case 0x8CF1u: {
            uint16_t ea=(uint16_t)(0x8D0Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CF4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8D0Cu,ea)?1u:0u));
        }
        case 0x8CF4u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8CF7u; return dd3_static_complete(rt,5u);
        }
        case 0x8CF7u: {
            uint16_t ea=(uint16_t)(0x8D0Eu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CFAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8D0Eu,ea)?1u:0u));
        }
        case 0x8CFAu: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8CFDu; return dd3_static_complete(rt,5u);
        }
        case 0x8CFDu: {
            uint8_t v=0x1Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8CFFu; return dd3_static_complete(rt,2u);
        }
        case 0x8CFFu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8D01u; return dd3_static_complete(rt,4u);
        }
        case 0x8D01u: {
            uint8_t v=0x46u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D03u; return dd3_static_complete(rt,2u);
        }
        case 0x8D03u: {
            dd3_static_push8(rt,(uint8_t)(0x8D05u>>8)); dd3_static_push8(rt,(uint8_t)0x8D05u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x8D06u: {
            dd3_static_push8(rt,(uint8_t)(0x8D08u>>8)); dd3_static_push8(rt,(uint8_t)0x8D08u);
            rt->state.cpu.pc=0x8D30u; return dd3_static_complete(rt,6u);
        }
        case 0x8D09u: {
            rt->state.cpu.pc=0x931Au; return dd3_static_complete(rt,3u);
        }
        case 0x8D10u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D12u; return dd3_static_complete(rt,4u);
        }
        case 0x8D12u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8D14u,0x8D27u)) c++; rt->state.cpu.pc=0x8D27u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8D14u; return dd3_static_complete(rt,2u);
        }
        case 0x8D14u: {
            dd3_static_push8(rt,(uint8_t)(0x8D16u>>8)); dd3_static_push8(rt,(uint8_t)0x8D16u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x8D17u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D19u; return dd3_static_complete(rt,2u);
        }
        case 0x8D19u: {
            dd3_static_push8(rt,(uint8_t)(0x8D1Bu>>8)); dd3_static_push8(rt,(uint8_t)0x8D1Bu);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8D1Cu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D1Eu; return dd3_static_complete(rt,4u);
        }
        case 0x8D1Eu: {
            uint16_t ea=(uint16_t)(0x836Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D21u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x836Bu,ea)?1u:0u));
        }
        case 0x8D21u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8D24u; return dd3_static_complete(rt,5u);
        }
        case 0x8D24u: {
            dd3_static_push8(rt,(uint8_t)(0x8D26u>>8)); dd3_static_push8(rt,(uint8_t)0x8D26u);
            rt->state.cpu.pc=0x8D30u; return dd3_static_complete(rt,6u);
        }
        case 0x8D27u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D29u; return dd3_static_complete(rt,2u);
        }
        case 0x8D29u: {
            dd3_static_push8(rt,(uint8_t)(0x8D2Bu>>8)); dd3_static_push8(rt,(uint8_t)0x8D2Bu);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x8D2Cu: {
            dd3_static_push8(rt,(uint8_t)(0x8D2Eu>>8)); dd3_static_push8(rt,(uint8_t)0x8D2Eu);
            rt->state.cpu.pc=0xA6B9u; return dd3_static_complete(rt,6u);
        }
        case 0x8D2Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8D30u: {
            uint16_t ea=(uint16_t)(0x04B6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D33u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B6u,ea)?1u:0u));
        }
        case 0x8D33u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D35u; return dd3_static_complete(rt,2u);
        }
        case 0x8D35u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8D37u,0x8D44u)) c++; rt->state.cpu.pc=0x8D44u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8D37u; return dd3_static_complete(rt,2u);
        }
        case 0x8D37u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D39u; return dd3_static_complete(rt,4u);
        }
        case 0x8D39u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D3Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8D3Bu: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8D3Du; return dd3_static_complete(rt,4u);
        }
        case 0x8D3Du: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D3Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8D3Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8D42u; return dd3_static_complete(rt,5u);
        }
        case 0x8D42u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8D44u,0x8D4Fu)) c++; rt->state.cpu.pc=0x8D4Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8D44u; return dd3_static_complete(rt,2u);
        }
        case 0x8D44u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D46u; return dd3_static_complete(rt,4u);
        }
        case 0x8D46u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D48u; return dd3_static_complete(rt,2u);
        }
        case 0x8D48u: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8D4Au; return dd3_static_complete(rt,4u);
        }
        case 0x8D4Au: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D4Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8D4Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8D4Fu; return dd3_static_complete(rt,5u);
        }
        case 0x8D4Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8D50u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D52u; return dd3_static_complete(rt,4u);
        }
        case 0x8D52u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8D54u,0x8D73u)) c++; rt->state.cpu.pc=0x8D73u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8D54u; return dd3_static_complete(rt,2u);
        }
        case 0x8D54u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D56u; return dd3_static_complete(rt,2u);
        }
        case 0x8D56u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8D58u; return dd3_static_complete(rt,4u);
        }
        case 0x8D58u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D5Au; return dd3_static_complete(rt,2u);
        }
        case 0x8D5Au: {
            dd3_static_push8(rt,(uint8_t)(0x8D5Cu>>8)); dd3_static_push8(rt,(uint8_t)0x8D5Cu);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8D5Du: {
            uint16_t ea=(uint16_t)(0x04B6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D60u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B6u,ea)?1u:0u));
        }
        case 0x8D60u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D61u; return dd3_static_complete(rt,2u);
        }
        case 0x8D61u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D63u; return dd3_static_complete(rt,2u);
        }
        case 0x8D63u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D64u; return dd3_static_complete(rt,3u);
        }
        case 0x8D64u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D66u; return dd3_static_complete(rt,4u);
        }
        case 0x8D66u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D68u; return dd3_static_complete(rt,2u);
        }
        case 0x8D68u: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8D6Au; return dd3_static_complete(rt,4u);
        }
        case 0x8D6Au: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D6Bu; return dd3_static_complete(rt,4u);
        }
        case 0x8D6Bu: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D6Du; return dd3_static_complete(rt,4u);
        }
        case 0x8D6Du: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8D6Fu; return dd3_static_complete(rt,4u);
        }
        case 0x8D6Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D71u; return dd3_static_complete(rt,2u);
        }
        case 0x8D71u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8D73u; return dd3_static_complete(rt,4u);
        }
        case 0x8D73u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D74u; return dd3_static_complete(rt,2u);
        }
        case 0x8D74u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D76u; return dd3_static_complete(rt,2u);
        }
        case 0x8D76u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8D77u; return dd3_static_complete(rt,2u);
        }
        case 0x8D77u: {
            uint16_t ea=(uint16_t)(0x04AAu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D7Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04AAu,ea)?1u:0u));
        }
        case 0x8D7Au: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8D7Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8D7Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8D7Eu,0x8D81u)) c++; rt->state.cpu.pc=0x8D81u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8D7Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8D7Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8D80u>>8)); dd3_static_push8(rt,(uint8_t)0x8D80u);
            rt->state.cpu.pc=0x822Au; return dd3_static_complete(rt,6u);
        }
        case 0x8D81u: {
            dd3_static_push8(rt,(uint8_t)(0x8D83u>>8)); dd3_static_push8(rt,(uint8_t)0x8D83u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x8D84u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8D85u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D87u; return dd3_static_complete(rt,4u);
        }
        case 0x8D87u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8D89u,0x8DCCu)) c++; rt->state.cpu.pc=0x8DCCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8D89u; return dd3_static_complete(rt,2u);
        }
        case 0x8D89u: {
            dd3_static_push8(rt,(uint8_t)(0x8D8Bu>>8)); dd3_static_push8(rt,(uint8_t)0x8D8Bu);
            rt->state.cpu.pc=0xA906u; return dd3_static_complete(rt,6u);
        }
        case 0x8D8Cu: {
            uint8_t v=0x16u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D8Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8D8Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8D90u>>8)); dd3_static_push8(rt,(uint8_t)0x8D90u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8D91u: {
            uint16_t ea=0x049Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D94u; return dd3_static_complete(rt,4u);
        }
        case 0x8D94u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8D96u,0x8D9Bu)) c++; rt->state.cpu.pc=0x8D9Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8D96u; return dd3_static_complete(rt,2u);
        }
        case 0x8D96u: {
            uint16_t ea=(uint16_t)(0x06C2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D99u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06C2u,ea)?1u:0u));
        }
        case 0x8D99u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8D9Bu,0x8DA3u)) c++; rt->state.cpu.pc=0x8DA3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8D9Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8D9Bu: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8D9Du; return dd3_static_complete(rt,2u);
        }
        case 0x8D9Du: {
            dd3_static_push8(rt,(uint8_t)(0x8D9Fu>>8)); dd3_static_push8(rt,(uint8_t)0x8D9Fu);
            rt->state.cpu.pc=0xA612u; return dd3_static_complete(rt,6u);
        }
        case 0x8DA0u: {
            rt->state.cpu.pc=0x8DCCu; return dd3_static_complete(rt,3u);
        }
        case 0x8DA3u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8DA4u; return dd3_static_complete(rt,2u);
        }
        case 0x8DA4u: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DA7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0x8DA7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8DA9u,0x8DD1u)) c++; rt->state.cpu.pc=0x8DD1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8DA9u; return dd3_static_complete(rt,2u);
        }
        case 0x8DA9u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DABu; return dd3_static_complete(rt,2u);
        }
        case 0x8DABu: {
            uint8_t v=0x2Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8DADu; return dd3_static_complete(rt,2u);
        }
        case 0x8DADu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8DAFu,0x8DD1u)) c++; rt->state.cpu.pc=0x8DD1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8DAFu; return dd3_static_complete(rt,2u);
        }
        case 0x8DAFu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DB0u; return dd3_static_complete(rt,2u);
        }
        case 0x8DB0u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DB2u; return dd3_static_complete(rt,2u);
        }
        case 0x8DB2u: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8DB5u; return dd3_static_complete(rt,5u);
        }
        case 0x8DB5u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DB7u; return dd3_static_complete(rt,2u);
        }
        case 0x8DB7u: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8DBAu; return dd3_static_complete(rt,5u);
        }
        case 0x8DBAu: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DBCu; return dd3_static_complete(rt,4u);
        }
        case 0x8DBCu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DBEu; return dd3_static_complete(rt,2u);
        }
        case 0x8DBEu: {
            dd3_static_write8(rt,(uint16_t)(0x0068u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8DC1u; return dd3_static_complete(rt,5u);
        }
        case 0x8DC1u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DC2u; return dd3_static_complete(rt,2u);
        }
        case 0x8DC2u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DC3u; return dd3_static_complete(rt,3u);
        }
        case 0x8DC3u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DC4u; return dd3_static_complete(rt,2u);
        }
        case 0x8DC4u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8DC5u; return dd3_static_complete(rt,2u);
        }
        case 0x8DC5u: {
            uint8_t v=0x16u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DC7u; return dd3_static_complete(rt,2u);
        }
        case 0x8DC7u: {
            dd3_static_push8(rt,(uint8_t)(0x8DC9u>>8)); dd3_static_push8(rt,(uint8_t)0x8DC9u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8DCAu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DCBu; return dd3_static_complete(rt,4u);
        }
        case 0x8DCBu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8DCCu; return dd3_static_complete(rt,2u);
        }
        case 0x8DCCu: {
            uint16_t ea=(uint16_t)(0x06C2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DCFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06C2u,ea)?1u:0u));
        }
        case 0x8DCFu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8DD1u,0x8DDBu)) c++; rt->state.cpu.pc=0x8DDBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8DD1u; return dd3_static_complete(rt,2u);
        }
        case 0x8DD1u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DD3u; return dd3_static_complete(rt,2u);
        }
        case 0x8DD3u: {
            dd3_static_write8(rt,(uint16_t)(0x06C2u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8DD6u; return dd3_static_complete(rt,5u);
        }
        case 0x8DD6u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DD8u; return dd3_static_complete(rt,2u);
        }
        case 0x8DD8u: {
            rt->state.cpu.pc=0x9317u; return dd3_static_complete(rt,3u);
        }
        case 0x8DDBu: {
            uint8_t v=0x11u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DDDu; return dd3_static_complete(rt,2u);
        }
        case 0x8DDDu: {
            dd3_static_push8(rt,(uint8_t)(0x8DDFu>>8)); dd3_static_push8(rt,(uint8_t)0x8DDFu);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x8DE0u: {
            dd3_static_push8(rt,(uint8_t)(0x8DE2u>>8)); dd3_static_push8(rt,(uint8_t)0x8DE2u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x8DE3u: {
            dd3_static_push8(rt,(uint8_t)(0x8DE5u>>8)); dd3_static_push8(rt,(uint8_t)0x8DE5u);
            rt->state.cpu.pc=0x8DE7u; return dd3_static_complete(rt,6u);
        }
        case 0x8DE6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8DE7u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DE8u; return dd3_static_complete(rt,2u);
        }
        case 0x8DE8u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8DE9u; return dd3_static_complete(rt,3u);
        }
        case 0x8DE9u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DEBu; return dd3_static_complete(rt,4u);
        }
        case 0x8DEBu: {
            uint8_t v=0x13u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8DEDu; return dd3_static_complete(rt,2u);
        }
        case 0x8DEDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8DEFu,0x8E08u)) c++; rt->state.cpu.pc=0x8E08u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8DEFu; return dd3_static_complete(rt,2u);
        }
        case 0x8DEFu: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DF1u; return dd3_static_complete(rt,4u);
        }
        case 0x8DF1u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8DF2u; return dd3_static_complete(rt,2u);
        }
        case 0x8DF2u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DF4u; return dd3_static_complete(rt,4u);
        }
        case 0x8DF4u: {
            uint16_t ea=(uint16_t)(0x8EF1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8DF7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8EF1u,ea)?1u:0u));
        }
        case 0x8DF7u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8DF9u,0x8DFCu)) c++; rt->state.cpu.pc=0x8DFCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8DF9u; return dd3_static_complete(rt,2u);
        }
        case 0x8DF9u: {
            rt->state.cpu.pc=0x8E75u; return dd3_static_complete(rt,3u);
        }
        case 0x8DFCu: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8DFFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x8DFFu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8E01u,0x8E75u)) c++; rt->state.cpu.pc=0x8E75u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8E01u; return dd3_static_complete(rt,2u);
        }
        case 0x8E01u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E03u; return dd3_static_complete(rt,2u);
        }
        case 0x8E03u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E05u; return dd3_static_complete(rt,3u);
        }
        case 0x8E05u: {
            rt->state.cpu.pc=0x8E64u; return dd3_static_complete(rt,3u);
        }
        case 0x8E08u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E0Au; return dd3_static_complete(rt,2u);
        }
        case 0x8E0Au: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8E0Du; return dd3_static_complete(rt,5u);
        }
        case 0x8E0Du: {
            dd3_static_write8(rt,(uint16_t)(0x033Eu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8E10u; return dd3_static_complete(rt,5u);
        }
        case 0x8E10u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E12u; return dd3_static_complete(rt,2u);
        }
        case 0x8E12u: {
            dd3_static_write8(rt,(uint16_t)(0x0359u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8E15u; return dd3_static_complete(rt,5u);
        }
        case 0x8E15u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E17u; return dd3_static_complete(rt,4u);
        }
        case 0x8E17u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E19u; return dd3_static_complete(rt,2u);
        }
        case 0x8E19u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E1Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8E1Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8E1Eu; return dd3_static_complete(rt,5u);
        }
        case 0x8E1Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8E20u>>8)); dd3_static_push8(rt,(uint8_t)0x8E20u);
            rt->state.cpu.pc=0xAA75u; return dd3_static_complete(rt,6u);
        }
        case 0x8E21u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8E22u; return dd3_static_complete(rt,2u);
        }
        case 0x8E22u: {
            dd3_static_push8(rt,(uint8_t)(0x8E24u>>8)); dd3_static_push8(rt,(uint8_t)0x8E24u);
            rt->state.cpu.pc=0xAA68u; return dd3_static_complete(rt,6u);
        }
        case 0x8E25u: {
            uint8_t v=0x81u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E27u; return dd3_static_complete(rt,2u);
        }
        case 0x8E27u: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8E2Au; return dd3_static_complete(rt,5u);
        }
        case 0x8E2Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E2Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8E2Cu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E2Eu; return dd3_static_complete(rt,3u);
        }
        case 0x8E2Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8E31u; return dd3_static_complete(rt,5u);
        }
        case 0x8E31u: {
            uint8_t v=0x28u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E33u; return dd3_static_complete(rt,2u);
        }
        case 0x8E33u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E35u; return dd3_static_complete(rt,3u);
        }
        case 0x8E35u: {
            dd3_static_push8(rt,(uint8_t)(0x8E37u>>8)); dd3_static_push8(rt,(uint8_t)0x8E37u);
            rt->state.cpu.pc=0xA884u; return dd3_static_complete(rt,6u);
        }
        case 0x8E38u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E3Au; return dd3_static_complete(rt,4u);
        }
        case 0x8E3Au: {
            dd3_static_write8(rt,(uint16_t)(0x00CBu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8E3Du; return dd3_static_complete(rt,5u);
        }
        case 0x8E3Du: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E3Fu; return dd3_static_complete(rt,4u);
        }
        case 0x8E3Fu: {
            dd3_static_write8(rt,(uint16_t)(0x00D5u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8E42u; return dd3_static_complete(rt,5u);
        }
        case 0x8E42u: {
            uint8_t v=0x1Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E44u; return dd3_static_complete(rt,2u);
        }
        case 0x8E44u: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8E47u; return dd3_static_complete(rt,5u);
        }
        case 0x8E47u: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E4Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0x8E4Au: {
            uint8_t v=0xDDu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E4Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8E4Cu: {
            dd3_static_write8(rt,(uint16_t)(0x004Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8E4Fu; return dd3_static_complete(rt,5u);
        }
        case 0x8E4Fu: {
            uint8_t v=0x2Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E51u; return dd3_static_complete(rt,2u);
        }
        case 0x8E51u: {
            dd3_static_push8(rt,(uint8_t)(0x8E53u>>8)); dd3_static_push8(rt,(uint8_t)0x8E53u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x8E54u: {
            uint8_t v=0x09u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E56u; return dd3_static_complete(rt,2u);
        }
        case 0x8E56u: {
            dd3_static_push8(rt,(uint8_t)(0x8E58u>>8)); dd3_static_push8(rt,(uint8_t)0x8E58u);
            rt->state.cpu.pc=0xA837u; return dd3_static_complete(rt,6u);
        }
        case 0x8E59u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E5Bu; return dd3_static_complete(rt,4u);
        }
        case 0x8E5Bu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E5Du; return dd3_static_complete(rt,2u);
        }
        case 0x8E5Du: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E5Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8E5Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8E62u; return dd3_static_complete(rt,5u);
        }
        case 0x8E62u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8E64u,0x8E75u)) c++; rt->state.cpu.pc=0x8E75u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8E64u; return dd3_static_complete(rt,2u);
        }
        case 0x8E64u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E66u; return dd3_static_complete(rt,3u);
        }
        case 0x8E66u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E68u; return dd3_static_complete(rt,4u);
        }
        case 0x8E68u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E6Au; return dd3_static_complete(rt,2u);
        }
        case 0x8E6Au: {
            uint16_t ea=(uint16_t)(0x8F01u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E6Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8F01u,ea)?1u:0u));
        }
        case 0x8E6Du: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8E6Fu; return dd3_static_complete(rt,4u);
        }
        case 0x8E6Fu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E70u; return dd3_static_complete(rt,4u);
        }
        case 0x8E70u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8E71u; return dd3_static_complete(rt,2u);
        }
        case 0x8E71u: {
            dd3_static_push8(rt,(uint8_t)(0x8E73u>>8)); dd3_static_push8(rt,(uint8_t)0x8E73u);
            rt->state.cpu.pc=0x8E78u; return dd3_static_complete(rt,6u);
        }
        case 0x8E74u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8E75u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E76u; return dd3_static_complete(rt,4u);
        }
        case 0x8E76u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8E77u; return dd3_static_complete(rt,2u);
        }
        case 0x8E77u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8E78u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E79u; return dd3_static_complete(rt,2u);
        }
        case 0x8E79u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E7Au; return dd3_static_complete(rt,3u);
        }
        case 0x8E7Au: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E7Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8E7Bu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E7Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8E7Cu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8E7Du; return dd3_static_complete(rt,2u);
        }
        case 0x8E7Du: {
            uint16_t ea=(uint16_t)(0x8F05u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E80u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8F05u,ea)?1u:0u));
        }
        case 0x8E80u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E82u; return dd3_static_complete(rt,3u);
        }
        case 0x8E82u: {
            uint16_t ea=(uint16_t)(0x8F06u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E85u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8F06u,ea)?1u:0u));
        }
        case 0x8E85u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E87u; return dd3_static_complete(rt,3u);
        }
        case 0x8E87u: {
            uint16_t ea=(uint16_t)(0x8F07u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E8Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8F07u,ea)?1u:0u));
        }
        case 0x8E8Au: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8E8Cu; return dd3_static_complete(rt,3u);
        }
        case 0x8E8Cu: {
            uint16_t ea=(uint16_t)(0x06C2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E8Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06C2u,ea)?1u:0u));
        }
        case 0x8E8Fu: {
            uint16_t ea=(uint16_t)(0x00CBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E92u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00CBu,ea)?1u:0u));
        }
        case 0x8E92u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8E93u; return dd3_static_complete(rt,2u);
        }
        case 0x8E93u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8E95u; return dd3_static_complete(rt,2u);
        }
        case 0x8E95u: {
            dd3_static_write8(rt,(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8E97u; return dd3_static_complete(rt,4u);
        }
        case 0x8E97u: {
            uint16_t ea=(uint16_t)(0x00D5u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8E9Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00D5u,ea)?1u:0u));
        }
        case 0x8E9Au: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8E9Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8E9Cu: {
            dd3_static_write8(rt,(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8E9Eu; return dd3_static_complete(rt,4u);
        }
        case 0x8E9Eu: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EA0u; return dd3_static_complete(rt,3u);
        }
        case 0x8EA0u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8EA1u; return dd3_static_complete(rt,2u);
        }
        case 0x8EA1u: {
            uint16_t ea=(uint16_t)(0x00DFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8EA4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00DFu,ea)?1u:0u));
        }
        case 0x8EA4u: {
            dd3_static_write8(rt,(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8EA6u; return dd3_static_complete(rt,4u);
        }
        case 0x8EA6u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EA8u; return dd3_static_complete(rt,2u);
        }
        case 0x8EA8u: {
            uint16_t ea=(uint16_t)(0x00E9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8EABu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00E9u,ea)?1u:0u));
        }
        case 0x8EABu: {
            dd3_static_write8(rt,(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8EADu; return dd3_static_complete(rt,4u);
        }
        case 0x8EADu: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EAFu; return dd3_static_complete(rt,4u);
        }
        case 0x8EAFu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8EB1u,0x8EC2u)) c++; rt->state.cpu.pc=0x8EC2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8EB1u; return dd3_static_complete(rt,2u);
        }
        case 0x8EB1u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EB3u; return dd3_static_complete(rt,3u);
        }
        case 0x8EB3u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EB5u; return dd3_static_complete(rt,2u);
        }
        case 0x8EB5u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8EB6u; return dd3_static_complete(rt,2u);
        }
        case 0x8EB6u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8EB8u; return dd3_static_complete(rt,2u);
        }
        case 0x8EB8u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EBAu; return dd3_static_complete(rt,3u);
        }
        case 0x8EBAu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EBCu; return dd3_static_complete(rt,3u);
        }
        case 0x8EBCu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EBEu; return dd3_static_complete(rt,2u);
        }
        case 0x8EBEu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8EC0u; return dd3_static_complete(rt,2u);
        }
        case 0x8EC0u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EC2u; return dd3_static_complete(rt,3u);
        }
        case 0x8EC2u: {
            uint16_t ea=(uint16_t)(0x00B7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EC5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B7u,ea)?1u:0u));
        }
        case 0x8EC5u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8EC6u; return dd3_static_complete(rt,2u);
        }
        case 0x8EC6u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8EC8u; return dd3_static_complete(rt,3u);
        }
        case 0x8EC8u: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8ECAu; return dd3_static_complete(rt,4u);
        }
        case 0x8ECAu: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8ECDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0x8ECDu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8ECFu; return dd3_static_complete(rt,3u);
        }
        case 0x8ECFu: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8ED1u; return dd3_static_complete(rt,4u);
        }
        case 0x8ED1u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8ED3u,0x8ED9u)) c++; rt->state.cpu.pc=0x8ED9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8ED3u; return dd3_static_complete(rt,2u);
        }
        case 0x8ED3u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8ED5u; return dd3_static_complete(rt,2u);
        }
        case 0x8ED5u: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8ED7u; return dd3_static_complete(rt,4u);
        }
        case 0x8ED7u: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8ED9u; return dd3_static_complete(rt,4u);
        }
        case 0x8ED9u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EDAu; return dd3_static_complete(rt,4u);
        }
        case 0x8EDAu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8EDCu; return dd3_static_complete(rt,2u);
        }
        case 0x8EDCu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8EDEu,0x8EEBu)) c++; rt->state.cpu.pc=0x8EEBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8EDEu; return dd3_static_complete(rt,2u);
        }
        case 0x8EDEu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EDFu; return dd3_static_complete(rt,2u);
        }
        case 0x8EDFu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EE0u; return dd3_static_complete(rt,3u);
        }
        case 0x8EE0u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EE1u; return dd3_static_complete(rt,2u);
        }
        case 0x8EE1u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8EE2u; return dd3_static_complete(rt,2u);
        }
        case 0x8EE2u: {
            uint8_t v=0x30u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8EE4u; return dd3_static_complete(rt,2u);
        }
        case 0x8EE4u: {
            dd3_static_push8(rt,(uint8_t)(0x8EE6u>>8)); dd3_static_push8(rt,(uint8_t)0x8EE6u);
            rt->state.cpu.pc=0xA612u; return dd3_static_complete(rt,6u);
        }
        case 0x8EE7u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EE8u; return dd3_static_complete(rt,2u);
        }
        case 0x8EE8u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8EE9u; return dd3_static_complete(rt,2u);
        }
        case 0x8EE9u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8EEAu; return dd3_static_complete(rt,4u);
        }
        case 0x8EEAu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8EEBu; return dd3_static_complete(rt,2u);
        }
        case 0x8EEBu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8F15u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F17u; return dd3_static_complete(rt,4u);
        }
        case 0x8F17u: {
            uint8_t v=0x1Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8F19u; return dd3_static_complete(rt,2u);
        }
        case 0x8F19u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8F1Bu,0x8F59u)) c++; rt->state.cpu.pc=0x8F59u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8F1Bu; return dd3_static_complete(rt,2u);
        }
        case 0x8F1Bu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F1Du; return dd3_static_complete(rt,4u);
        }
        case 0x8F1Du: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8F1Fu,0x8F2Fu)) c++; rt->state.cpu.pc=0x8F2Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8F1Fu; return dd3_static_complete(rt,2u);
        }
        case 0x8F1Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8F21u>>8)); dd3_static_push8(rt,(uint8_t)0x8F21u);
            rt->state.cpu.pc=0xA8B0u; return dd3_static_complete(rt,6u);
        }
        case 0x8F22u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F24u; return dd3_static_complete(rt,2u);
        }
        case 0x8F24u: {
            dd3_static_push8(rt,(uint8_t)(0x8F26u>>8)); dd3_static_push8(rt,(uint8_t)0x8F26u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8F27u: {
            uint8_t v=0x47u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F29u; return dd3_static_complete(rt,2u);
        }
        case 0x8F29u: {
            dd3_static_push8(rt,(uint8_t)(0x8F2Bu>>8)); dd3_static_push8(rt,(uint8_t)0x8F2Bu);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x8F2Cu: {
            dd3_static_push8(rt,(uint8_t)(0x8F2Eu>>8)); dd3_static_push8(rt,(uint8_t)0x8F2Eu);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x8F2Fu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F31u; return dd3_static_complete(rt,2u);
        }
        case 0x8F31u: {
            dd3_static_push8(rt,(uint8_t)(0x8F33u>>8)); dd3_static_push8(rt,(uint8_t)0x8F33u);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x8F34u: {
            uint16_t ea=(uint16_t)(0x04A0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F37u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A0u,ea)?1u:0u));
        }
        case 0x8F37u: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F3Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0x8F3Au: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8F3Cu,0x8F58u)) c++; rt->state.cpu.pc=0x8F58u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8F3Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8F3Cu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F3Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8F3Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8F40u,0x8F58u)) c++; rt->state.cpu.pc=0x8F58u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8F40u; return dd3_static_complete(rt,2u);
        }
        case 0x8F40u: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F43u; return dd3_static_complete(rt,4u);
        }
        case 0x8F43u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F46u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0x8F46u: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x8F48u; return dd3_static_complete(rt,2u);
        }
        case 0x8F48u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8F4Au,0x8F50u)) c++; rt->state.cpu.pc=0x8F50u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8F4Au; return dd3_static_complete(rt,2u);
        }
        case 0x8F4Au: {
            uint8_t v=0x1Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F4Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8F4Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8F4Eu,0x8F58u)) c++; rt->state.cpu.pc=0x8F58u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8F4Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8F4Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8F50u,0x8F54u)) c++; rt->state.cpu.pc=0x8F54u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8F50u; return dd3_static_complete(rt,2u);
        }
        case 0x8F50u: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F52u; return dd3_static_complete(rt,2u);
        }
        case 0x8F52u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8F54u,0x8F58u)) c++; rt->state.cpu.pc=0x8F58u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8F54u; return dd3_static_complete(rt,2u);
        }
        case 0x8F54u: {
            uint8_t v=0x4Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F56u; return dd3_static_complete(rt,2u);
        }
        case 0x8F56u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8F58u; return dd3_static_complete(rt,4u);
        }
        case 0x8F58u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8F59u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F5Bu; return dd3_static_complete(rt,4u);
        }
        case 0x8F5Bu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8F5Du,0x8F75u)) c++; rt->state.cpu.pc=0x8F75u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8F5Du; return dd3_static_complete(rt,2u);
        }
        case 0x8F5Du: {
            dd3_static_push8(rt,(uint8_t)(0x8F5Fu>>8)); dd3_static_push8(rt,(uint8_t)0x8F5Fu);
            rt->state.cpu.pc=0xA8B0u; return dd3_static_complete(rt,6u);
        }
        case 0x8F60u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F62u; return dd3_static_complete(rt,2u);
        }
        case 0x8F62u: {
            dd3_static_push8(rt,(uint8_t)(0x8F64u>>8)); dd3_static_push8(rt,(uint8_t)0x8F64u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x8F65u: {
            uint8_t v=0x47u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F67u; return dd3_static_complete(rt,2u);
        }
        case 0x8F67u: {
            dd3_static_push8(rt,(uint8_t)(0x8F69u>>8)); dd3_static_push8(rt,(uint8_t)0x8F69u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x8F6Au: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F6Cu; return dd3_static_complete(rt,4u);
        }
        case 0x8F6Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F6Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8F6Eu: {
            uint8_t v=0x4Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8F70u; return dd3_static_complete(rt,2u);
        }
        case 0x8F70u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8F72u,0x8F75u)) c++; rt->state.cpu.pc=0x8F75u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8F72u; return dd3_static_complete(rt,2u);
        }
        case 0x8F72u: {
            dd3_static_push8(rt,(uint8_t)(0x8F74u>>8)); dd3_static_push8(rt,(uint8_t)0x8F74u);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x8F75u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F77u; return dd3_static_complete(rt,2u);
        }
        case 0x8F77u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F79u; return dd3_static_complete(rt,3u);
        }
        case 0x8F79u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F7Bu; return dd3_static_complete(rt,4u);
        }
        case 0x8F7Bu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F7Cu; return dd3_static_complete(rt,2u);
        }
        case 0x8F7Cu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F7Eu; return dd3_static_complete(rt,3u);
        }
        case 0x8F7Eu: {
            uint16_t ea=(uint16_t)(0x03F9u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F81u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F9u,ea)?1u:0u));
        }
        case 0x8F81u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F83u; return dd3_static_complete(rt,2u);
        }
        case 0x8F83u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8F85u,0x8F87u)) c++; rt->state.cpu.pc=0x8F87u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8F85u; return dd3_static_complete(rt,2u);
        }
        case 0x8F85u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8F87u; return dd3_static_complete(rt,5u);
        }
        case 0x8F87u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F89u; return dd3_static_complete(rt,3u);
        }
        case 0x8F89u: {
            uint16_t ea=(uint16_t)(0x8FC7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F8Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8FC7u,ea)?1u:0u));
        }
        case 0x8F8Cu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F8Du; return dd3_static_complete(rt,2u);
        }
        case 0x8F8Du: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8F8Eu; return dd3_static_complete(rt,2u);
        }
        case 0x8F8Eu: {
            uint16_t ea=(uint16_t)(0x8FE7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F91u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8FE7u,ea)?1u:0u));
        }
        case 0x8F91u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F93u; return dd3_static_complete(rt,3u);
        }
        case 0x8F93u: {
            uint16_t ea=(uint16_t)(0x8FE8u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F96u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8FE8u,ea)?1u:0u));
        }
        case 0x8F96u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F98u; return dd3_static_complete(rt,3u);
        }
        case 0x8F98u: {
            uint16_t ea=(uint16_t)(0x8FFDu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8F9Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8FFDu,ea)?1u:0u));
        }
        case 0x8F9Bu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8F9Du; return dd3_static_complete(rt,3u);
        }
        case 0x8F9Du: {
            uint16_t ea=(uint16_t)(0x8FFEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8FA0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8FFEu,ea)?1u:0u));
        }
        case 0x8FA0u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8FA2u; return dd3_static_complete(rt,3u);
        }
        case 0x8FA2u: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8FA5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0x8FA5u: {
            uint8_t v=0x90u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8FA7u; return dd3_static_complete(rt,2u);
        }
        case 0x8FA7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8FA9u,0x8FC0u)) c++; rt->state.cpu.pc=0x8FC0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8FA9u; return dd3_static_complete(rt,2u);
        }
        case 0x8FA9u: {
            uint8_t v=0x63u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8FABu; return dd3_static_complete(rt,2u);
        }
        case 0x8FABu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8FADu; return dd3_static_complete(rt,3u);
        }
        case 0x8FADu: {
            uint8_t v=0x90u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8FAFu; return dd3_static_complete(rt,2u);
        }
        case 0x8FAFu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8FB1u; return dd3_static_complete(rt,3u);
        }
        case 0x8FB1u: {
            uint16_t ea=(uint16_t)(0x03F9u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8FB4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F9u,ea)?1u:0u));
        }
        case 0x8FB4u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8FB6u; return dd3_static_complete(rt,2u);
        }
        case 0x8FB6u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8FB8u,0x8FC0u)) c++; rt->state.cpu.pc=0x8FC0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8FB8u; return dd3_static_complete(rt,2u);
        }
        case 0x8FB8u: {
            uint8_t v=0x68u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8FBAu; return dd3_static_complete(rt,2u);
        }
        case 0x8FBAu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8FBCu; return dd3_static_complete(rt,3u);
        }
        case 0x8FBCu: {
            uint8_t v=0x90u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8FBEu; return dd3_static_complete(rt,2u);
        }
        case 0x8FBEu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8FC0u; return dd3_static_complete(rt,3u);
        }
        case 0x8FC0u: {
            dd3_static_push8(rt,(uint8_t)(0x8FC2u>>8)); dd3_static_push8(rt,(uint8_t)0x8FC2u);
            rt->state.cpu.pc=0xA807u; return dd3_static_complete(rt,6u);
        }
        case 0x8FC3u: {
            dd3_static_push8(rt,(uint8_t)(0x8FC5u>>8)); dd3_static_push8(rt,(uint8_t)0x8FC5u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x8FC6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9164u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9166u; return dd3_static_complete(rt,4u);
        }
        case 0x9166u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9168u; return dd3_static_complete(rt,3u);
        }
        case 0x9168u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x916Au,0x917Au)) c++; rt->state.cpu.pc=0x917Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x916Au; return dd3_static_complete(rt,2u);
        }
        case 0x916Au: {
            dd3_static_push8(rt,(uint8_t)(0x916Cu>>8)); dd3_static_push8(rt,(uint8_t)0x916Cu);
            rt->state.cpu.pc=0xA8B0u; return dd3_static_complete(rt,6u);
        }
        case 0x916Du: {
            uint8_t v=0x11u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x916Fu; return dd3_static_complete(rt,2u);
        }
        case 0x916Fu: {
            dd3_static_push8(rt,(uint8_t)(0x9171u>>8)); dd3_static_push8(rt,(uint8_t)0x9171u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x9172u: {
            uint8_t v=0x47u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9174u; return dd3_static_complete(rt,2u);
        }
        case 0x9174u: {
            dd3_static_push8(rt,(uint8_t)(0x9176u>>8)); dd3_static_push8(rt,(uint8_t)0x9176u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x9177u: {
            dd3_static_push8(rt,(uint8_t)(0x9179u>>8)); dd3_static_push8(rt,(uint8_t)0x9179u);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x917Au: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x917Cu; return dd3_static_complete(rt,4u);
        }
        case 0x917Cu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x917Eu; return dd3_static_complete(rt,2u);
        }
        case 0x917Eu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9180u,0x9188u)) c++; rt->state.cpu.pc=0x9188u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9180u; return dd3_static_complete(rt,2u);
        }
        case 0x9180u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x9182u; return dd3_static_complete(rt,2u);
        }
        case 0x9182u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9184u,0x9198u)) c++; rt->state.cpu.pc=0x9198u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9184u; return dd3_static_complete(rt,2u);
        }
        case 0x9184u: {
            uint8_t v=0x2Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9186u; return dd3_static_complete(rt,2u);
        }
        case 0x9186u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9188u,0x91A3u)) c++; rt->state.cpu.pc=0x91A3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9188u; return dd3_static_complete(rt,2u);
        }
        case 0x9188u: {
            uint8_t v=0x35u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x918Au; return dd3_static_complete(rt,2u);
        }
        case 0x918Au: {
            uint8_t v=0x0Eu;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x918Cu; return dd3_static_complete(rt,2u);
        }
        case 0x918Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x918Eu,0x91A3u)) c++; rt->state.cpu.pc=0x91A3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x918Eu; return dd3_static_complete(rt,2u);
        }
        case 0x918Eu: {
            uint8_t v=0x12u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9190u; return dd3_static_complete(rt,2u);
        }
        case 0x9190u: {
            uint8_t v=0x09u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x9192u; return dd3_static_complete(rt,2u);
        }
        case 0x9192u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9194u,0x91A3u)) c++; rt->state.cpu.pc=0x91A3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9194u; return dd3_static_complete(rt,2u);
        }
        case 0x9194u: {
            uint8_t v=0x2Du;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9196u; return dd3_static_complete(rt,2u);
        }
        case 0x9196u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9198u,0x91A3u)) c++; rt->state.cpu.pc=0x91A3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9198u; return dd3_static_complete(rt,2u);
        }
        case 0x9198u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x919Au; return dd3_static_complete(rt,3u);
        }
        case 0x919Au: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x919Cu; return dd3_static_complete(rt,2u);
        }
        case 0x919Cu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x919Du; return dd3_static_complete(rt,2u);
        }
        case 0x919Du: {
            uint8_t v=0x30u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x919Fu; return dd3_static_complete(rt,2u);
        }
        case 0x919Fu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x91A0u; return dd3_static_complete(rt,2u);
        }
        case 0x91A0u: {
            uint16_t ea=(uint16_t)(0x91A7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x91A3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x91A7u,ea)?1u:0u));
        }
        case 0x91A3u: {
            dd3_static_push8(rt,(uint8_t)(0x91A5u>>8)); dd3_static_push8(rt,(uint8_t)0x91A5u);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x91A6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9209u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x920Bu; return dd3_static_complete(rt,4u);
        }
        case 0x920Bu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x920Du,0x9235u)) c++; rt->state.cpu.pc=0x9235u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x920Du; return dd3_static_complete(rt,2u);
        }
        case 0x920Du: {
            dd3_static_push8(rt,(uint8_t)(0x920Fu>>8)); dd3_static_push8(rt,(uint8_t)0x920Fu);
            rt->state.cpu.pc=0xA906u; return dd3_static_complete(rt,6u);
        }
        case 0x9210u: {
            uint8_t v=0x11u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9212u; return dd3_static_complete(rt,2u);
        }
        case 0x9212u: {
            dd3_static_push8(rt,(uint8_t)(0x9214u>>8)); dd3_static_push8(rt,(uint8_t)0x9214u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x9215u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9217u; return dd3_static_complete(rt,4u);
        }
        case 0x9217u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9219u; return dd3_static_complete(rt,2u);
        }
        case 0x9219u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x921Bu; return dd3_static_complete(rt,2u);
        }
        case 0x921Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x921Eu; return dd3_static_complete(rt,5u);
        }
        case 0x921Eu: {
            dd3_static_push8(rt,(uint8_t)(0x9220u>>8)); dd3_static_push8(rt,(uint8_t)0x9220u);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x9221u: {
            uint8_t v=0x05u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9223u; return dd3_static_complete(rt,2u);
        }
        case 0x9223u: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9226u; return dd3_static_complete(rt,5u);
        }
        case 0x9226u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9228u; return dd3_static_complete(rt,2u);
        }
        case 0x9228u: {
            dd3_static_write8(rt,(uint16_t)(0x0350u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x922Bu; return dd3_static_complete(rt,5u);
        }
        case 0x922Bu: {
            uint8_t v=0x46u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x922Du; return dd3_static_complete(rt,2u);
        }
        case 0x922Du: {
            dd3_static_push8(rt,(uint8_t)(0x922Fu>>8)); dd3_static_push8(rt,(uint8_t)0x922Fu);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x9230u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9232u; return dd3_static_complete(rt,2u);
        }
        case 0x9232u: {
            dd3_static_push8(rt,(uint8_t)(0x9234u>>8)); dd3_static_push8(rt,(uint8_t)0x9234u);
            rt->state.cpu.pc=0x9259u; return dd3_static_complete(rt,6u);
        }
        case 0x9235u: {
            uint8_t v=0x15u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9237u; return dd3_static_complete(rt,2u);
        }
        case 0x9237u: {
            dd3_static_push8(rt,(uint8_t)(0x9239u>>8)); dd3_static_push8(rt,(uint8_t)0x9239u);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x923Au: {
            dd3_static_push8(rt,(uint8_t)(0x923Cu>>8)); dd3_static_push8(rt,(uint8_t)0x923Cu);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x923Du: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x923Fu; return dd3_static_complete(rt,4u);
        }
        case 0x923Fu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9241u; return dd3_static_complete(rt,2u);
        }
        case 0x9241u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9243u; return dd3_static_complete(rt,4u);
        }
        case 0x9243u: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9245u; return dd3_static_complete(rt,4u);
        }
        case 0x9245u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9247u; return dd3_static_complete(rt,2u);
        }
        case 0x9247u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9249u,0x924Cu)) c++; rt->state.cpu.pc=0x924Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9249u; return dd3_static_complete(rt,2u);
        }
        case 0x9249u: {
            rt->state.cpu.pc=0x931Du; return dd3_static_complete(rt,3u);
        }
        case 0x924Cu: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x924Eu; return dd3_static_complete(rt,4u);
        }
        case 0x924Eu: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9250u; return dd3_static_complete(rt,4u);
        }
        case 0x9250u: {
            uint16_t ea=(uint16_t)(0x928Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9253u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x928Cu,ea)?1u:0u));
        }
        case 0x9253u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9255u,0x9258u)) c++; rt->state.cpu.pc=0x9258u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9255u; return dd3_static_complete(rt,2u);
        }
        case 0x9255u: {
            dd3_static_push8(rt,(uint8_t)(0x9257u>>8)); dd3_static_push8(rt,(uint8_t)0x9257u);
            rt->state.cpu.pc=0x9259u; return dd3_static_complete(rt,6u);
        }
        case 0x9258u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9259u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x925Bu; return dd3_static_complete(rt,3u);
        }
        case 0x925Bu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x925Cu; return dd3_static_complete(rt,3u);
        }
        case 0x925Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x925Eu; return dd3_static_complete(rt,2u);
        }
        case 0x925Eu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9260u; return dd3_static_complete(rt,3u);
        }
        case 0x9260u: {
            uint16_t ea=(uint16_t)(0x9292u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9263u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9292u,ea)?1u:0u));
        }
        case 0x9263u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9264u; return dd3_static_complete(rt,2u);
        }
        case 0x9264u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9266u; return dd3_static_complete(rt,4u);
        }
        case 0x9266u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9268u,0x9275u)) c++; rt->state.cpu.pc=0x9275u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9268u; return dd3_static_complete(rt,2u);
        }
        case 0x9268u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9269u; return dd3_static_complete(rt,2u);
        }
        case 0x9269u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x926Bu; return dd3_static_complete(rt,2u);
        }
        case 0x926Bu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x926Cu; return dd3_static_complete(rt,2u);
        }
        case 0x926Cu: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x926Eu; return dd3_static_complete(rt,2u);
        }
        case 0x926Eu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x926Fu; return dd3_static_complete(rt,2u);
        }
        case 0x926Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9271u,0x9275u)) c++; rt->state.cpu.pc=0x9275u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9271u; return dd3_static_complete(rt,2u);
        }
        case 0x9271u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9273u; return dd3_static_complete(rt,2u);
        }
        case 0x9273u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9275u; return dd3_static_complete(rt,3u);
        }
        case 0x9275u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9276u; return dd3_static_complete(rt,2u);
        }
        case 0x9276u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x9277u; return dd3_static_complete(rt,2u);
        }
        case 0x9277u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x9279u; return dd3_static_complete(rt,4u);
        }
        case 0x9279u: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x927Bu; return dd3_static_complete(rt,4u);
        }
        case 0x927Bu: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x927Du; return dd3_static_complete(rt,4u);
        }
        case 0x927Du: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x927Fu; return dd3_static_complete(rt,3u);
        }
        case 0x927Fu: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9281u; return dd3_static_complete(rt,4u);
        }
        case 0x9281u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9282u; return dd3_static_complete(rt,4u);
        }
        case 0x9282u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9284u; return dd3_static_complete(rt,3u);
        }
        case 0x9284u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9298u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x929Au; return dd3_static_complete(rt,4u);
        }
        case 0x929Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x929Cu,0x92A8u)) c++; rt->state.cpu.pc=0x92A8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x929Cu; return dd3_static_complete(rt,2u);
        }
        case 0x929Cu: {
            dd3_static_push8(rt,(uint8_t)(0x929Eu>>8)); dd3_static_push8(rt,(uint8_t)0x929Eu);
            rt->state.cpu.pc=0xA906u; return dd3_static_complete(rt,6u);
        }
        case 0x929Fu: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x92A1u; return dd3_static_complete(rt,2u);
        }
        case 0x92A1u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x92A3u; return dd3_static_complete(rt,4u);
        }
        case 0x92A3u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x92A5u; return dd3_static_complete(rt,2u);
        }
        case 0x92A5u: {
            dd3_static_push8(rt,(uint8_t)(0x92A7u>>8)); dd3_static_push8(rt,(uint8_t)0x92A7u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x92A8u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x92AAu; return dd3_static_complete(rt,6u);
        }
        case 0x92AAu: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x92ACu; return dd3_static_complete(rt,4u);
        }
        case 0x92ACu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x92AEu; return dd3_static_complete(rt,2u);
        }
        case 0x92AEu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x92B0u,0x92B4u)) c++; rt->state.cpu.pc=0x92B4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x92B0u; return dd3_static_complete(rt,2u);
        }
        case 0x92B0u: {
            uint8_t v=0x13u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x92B2u; return dd3_static_complete(rt,2u);
        }
        case 0x92B2u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x92B4u; return dd3_static_complete(rt,4u);
        }
        case 0x92B4u: {
            rt->state.cpu.pc=0x931Au; return dd3_static_complete(rt,3u);
        }
        case 0x9304u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9306u; return dd3_static_complete(rt,4u);
        }
        case 0x9306u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9308u,0x9315u)) c++; rt->state.cpu.pc=0x9315u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9308u; return dd3_static_complete(rt,2u);
        }
        case 0x9308u: {
            dd3_static_push8(rt,(uint8_t)(0x930Au>>8)); dd3_static_push8(rt,(uint8_t)0x930Au);
            rt->state.cpu.pc=0xA8B0u; return dd3_static_complete(rt,6u);
        }
        case 0x930Bu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x930Du; return dd3_static_complete(rt,2u);
        }
        case 0x930Du: {
            dd3_static_push8(rt,(uint8_t)(0x930Fu>>8)); dd3_static_push8(rt,(uint8_t)0x930Fu);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x9310u: {
            uint8_t v=0x26u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9312u; return dd3_static_complete(rt,2u);
        }
        case 0x9312u: {
            dd3_static_push8(rt,(uint8_t)(0x9314u>>8)); dd3_static_push8(rt,(uint8_t)0x9314u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x9315u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9317u; return dd3_static_complete(rt,2u);
        }
        case 0x9317u: {
            dd3_static_push8(rt,(uint8_t)(0x9319u>>8)); dd3_static_push8(rt,(uint8_t)0x9319u);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x931Au: {
            dd3_static_push8(rt,(uint8_t)(0x931Cu>>8)); dd3_static_push8(rt,(uint8_t)0x931Cu);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x931Du: {
            dd3_static_push8(rt,(uint8_t)(0x931Fu>>8)); dd3_static_push8(rt,(uint8_t)0x931Fu);
            rt->state.cpu.pc=0xA936u; return dd3_static_complete(rt,6u);
        }
        case 0x9320u: {
            dd3_static_push8(rt,(uint8_t)(0x9322u>>8)); dd3_static_push8(rt,(uint8_t)0x9322u);
            rt->state.cpu.pc=0xA6B9u; return dd3_static_complete(rt,6u);
        }
        case 0x9323u: {
            dd3_static_push8(rt,(uint8_t)(0x9325u>>8)); dd3_static_push8(rt,(uint8_t)0x9325u);
            rt->state.cpu.pc=0xA64Eu; return dd3_static_complete(rt,6u);
        }
        case 0x9326u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9327u: {
            dd3_static_push8(rt,(uint8_t)(0x9329u>>8)); dd3_static_push8(rt,(uint8_t)0x9329u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x932Au: {
            dd3_static_push8(rt,(uint8_t)(0x932Cu>>8)); dd3_static_push8(rt,(uint8_t)0x932Cu);
            rt->state.cpu.pc=0xA936u; return dd3_static_complete(rt,6u);
        }
        case 0x932Du: {
            dd3_static_push8(rt,(uint8_t)(0x932Fu>>8)); dd3_static_push8(rt,(uint8_t)0x932Fu);
            rt->state.cpu.pc=0xA6B9u; return dd3_static_complete(rt,6u);
        }
        case 0x9330u: {
            dd3_static_push8(rt,(uint8_t)(0x9332u>>8)); dd3_static_push8(rt,(uint8_t)0x9332u);
            rt->state.cpu.pc=0xA682u; return dd3_static_complete(rt,6u);
        }
        case 0x9333u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9355u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9357u; return dd3_static_complete(rt,4u);
        }
        case 0x9357u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9359u,0x9369u)) c++; rt->state.cpu.pc=0x9369u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9359u; return dd3_static_complete(rt,2u);
        }
        case 0x9359u: {
            dd3_static_push8(rt,(uint8_t)(0x935Bu>>8)); dd3_static_push8(rt,(uint8_t)0x935Bu);
            rt->state.cpu.pc=0xA8B0u; return dd3_static_complete(rt,6u);
        }
        case 0x935Cu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x935Eu; return dd3_static_complete(rt,2u);
        }
        case 0x935Eu: {
            dd3_static_push8(rt,(uint8_t)(0x9360u>>8)); dd3_static_push8(rt,(uint8_t)0x9360u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x9361u: {
            uint8_t v=0x26u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9363u; return dd3_static_complete(rt,2u);
        }
        case 0x9363u: {
            dd3_static_push8(rt,(uint8_t)(0x9365u>>8)); dd3_static_push8(rt,(uint8_t)0x9365u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x9366u: {
            dd3_static_push8(rt,(uint8_t)(0x9368u>>8)); dd3_static_push8(rt,(uint8_t)0x9368u);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x9369u: {
            uint16_t ea=(uint16_t)(0x938Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x936Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x938Du,ea)?1u:0u));
        }
        case 0x936Cu: {
            dd3_static_push8(rt,(uint8_t)(0x936Eu>>8)); dd3_static_push8(rt,(uint8_t)0x936Eu);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x936Fu: {
            dd3_static_push8(rt,(uint8_t)(0x9371u>>8)); dd3_static_push8(rt,(uint8_t)0x9371u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x9372u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x9374u; return dd3_static_complete(rt,2u);
        }
        case 0x9374u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9376u,0x938Cu)) c++; rt->state.cpu.pc=0x938Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9376u; return dd3_static_complete(rt,2u);
        }
        case 0x9376u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9378u; return dd3_static_complete(rt,4u);
        }
        case 0x9378u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x937Au; return dd3_static_complete(rt,2u);
        }
        case 0x937Au: {
            uint8_t v=0x39u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x937Cu; return dd3_static_complete(rt,2u);
        }
        case 0x937Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x937Eu,0x938Cu)) c++; rt->state.cpu.pc=0x938Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x937Eu; return dd3_static_complete(rt,2u);
        }
        case 0x937Eu: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9381u; return dd3_static_complete(rt,4u);
        }
        case 0x9381u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9382u; return dd3_static_complete(rt,2u);
        }
        case 0x9382u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9384u; return dd3_static_complete(rt,2u);
        }
        case 0x9384u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9385u; return dd3_static_complete(rt,2u);
        }
        case 0x9385u: {
            uint16_t ea=(uint16_t)(0x939Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9388u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x939Cu,ea)?1u:0u));
        }
        case 0x9388u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x938Au,0x938Cu)) c++; rt->state.cpu.pc=0x938Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x938Au; return dd3_static_complete(rt,2u);
        }
        case 0x938Au: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x938Cu; return dd3_static_complete(rt,4u);
        }
        case 0x938Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x93A4u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x93A6u; return dd3_static_complete(rt,4u);
        }
        case 0x93A6u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x93A8u,0x93B5u)) c++; rt->state.cpu.pc=0x93B5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x93A8u; return dd3_static_complete(rt,2u);
        }
        case 0x93A8u: {
            dd3_static_push8(rt,(uint8_t)(0x93AAu>>8)); dd3_static_push8(rt,(uint8_t)0x93AAu);
            rt->state.cpu.pc=0xA906u; return dd3_static_complete(rt,6u);
        }
        case 0x93ABu: {
            uint8_t v=0x22u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x93ADu; return dd3_static_complete(rt,2u);
        }
        case 0x93ADu: {
            dd3_static_push8(rt,(uint8_t)(0x93AFu>>8)); dd3_static_push8(rt,(uint8_t)0x93AFu);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x93B0u: {
            uint8_t v=0x12u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x93B2u; return dd3_static_complete(rt,2u);
        }
        case 0x93B2u: {
            dd3_static_push8(rt,(uint8_t)(0x93B4u>>8)); dd3_static_push8(rt,(uint8_t)0x93B4u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x93B5u: {
            uint8_t v=0x1Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x93B7u; return dd3_static_complete(rt,2u);
        }
        case 0x93B7u: {
            dd3_static_push8(rt,(uint8_t)(0x93B9u>>8)); dd3_static_push8(rt,(uint8_t)0x93B9u);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x93BAu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x93BCu; return dd3_static_complete(rt,4u);
        }
        case 0x93BCu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x93BEu,0x93C8u)) c++; rt->state.cpu.pc=0x93C8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x93BEu; return dd3_static_complete(rt,2u);
        }
        case 0x93BEu: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x93C0u; return dd3_static_complete(rt,4u);
        }
        case 0x93C0u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x93C2u; return dd3_static_complete(rt,2u);
        }
        case 0x93C2u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x93C4u; return dd3_static_complete(rt,2u);
        }
        case 0x93C4u: {
            uint8_t v=0x1Eu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x93C6u; return dd3_static_complete(rt,2u);
        }
        case 0x93C6u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x93C8u; return dd3_static_complete(rt,4u);
        }
        case 0x93C8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x93D2u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x93D4u; return dd3_static_complete(rt,4u);
        }
        case 0x93D4u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x93D6u,0x93ECu)) c++; rt->state.cpu.pc=0x93ECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x93D6u; return dd3_static_complete(rt,2u);
        }
        case 0x93D6u: {
            dd3_static_push8(rt,(uint8_t)(0x93D8u>>8)); dd3_static_push8(rt,(uint8_t)0x93D8u);
            rt->state.cpu.pc=0x9DA2u; return dd3_static_complete(rt,6u);
        }
        case 0x93D9u: {
            dd3_static_push8(rt,(uint8_t)(0x93DBu>>8)); dd3_static_push8(rt,(uint8_t)0x93DBu);
            rt->state.cpu.pc=0xA8B0u; return dd3_static_complete(rt,6u);
        }
        case 0x93DCu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x93DEu; return dd3_static_complete(rt,2u);
        }
        case 0x93DEu: {
            dd3_static_push8(rt,(uint8_t)(0x93E0u>>8)); dd3_static_push8(rt,(uint8_t)0x93E0u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x93E1u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x93E3u; return dd3_static_complete(rt,2u);
        }
        case 0x93E3u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x93E5u,0x93ECu)) c++; rt->state.cpu.pc=0x93ECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x93E5u; return dd3_static_complete(rt,2u);
        }
        case 0x93E5u: {
            uint16_t ea=(uint16_t)(0x04B6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x93E8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B6u,ea)?1u:0u));
        }
        case 0x93E8u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x93EAu; return dd3_static_complete(rt,2u);
        }
        case 0x93EAu: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x93ECu; return dd3_static_complete(rt,4u);
        }
        case 0x93ECu: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x93EEu; return dd3_static_complete(rt,4u);
        }
        case 0x93EEu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x93F0u; return dd3_static_complete(rt,2u);
        }
        case 0x93F0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x93F2u,0x945Au)) c++; rt->state.cpu.pc=0x945Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x93F2u; return dd3_static_complete(rt,2u);
        }
        case 0x93F2u: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x93F4u; return dd3_static_complete(rt,4u);
        }
        case 0x93F4u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x93F6u; return dd3_static_complete(rt,2u);
        }
        case 0x93F6u: {
            uint8_t v=0x2Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x93F8u; return dd3_static_complete(rt,2u);
        }
        case 0x93F8u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x93FAu,0x945Au)) c++; rt->state.cpu.pc=0x945Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x93FAu; return dd3_static_complete(rt,2u);
        }
        case 0x93FAu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x93FCu; return dd3_static_complete(rt,2u);
        }
        case 0x93FCu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x93FEu,0x940Bu)) c++; rt->state.cpu.pc=0x940Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x93FEu; return dd3_static_complete(rt,2u);
        }
        case 0x93FEu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9400u; return dd3_static_complete(rt,4u);
        }
        case 0x9400u: {
            uint16_t ea=(uint16_t)(0x06DFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9403u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06DFu,ea)?1u:0u));
        }
        case 0x9403u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x9404u; return dd3_static_complete(rt,2u);
        }
        case 0x9404u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x9406u; return dd3_static_complete(rt,2u);
        }
        case 0x9406u: {
            dd3_static_write8(rt,(uint16_t)(0x06DFu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9409u; return dd3_static_complete(rt,5u);
        }
        case 0x9409u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x940Bu,0x9413u)) c++; rt->state.cpu.pc=0x9413u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x940Bu; return dd3_static_complete(rt,2u);
        }
        case 0x940Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x940Du; return dd3_static_complete(rt,2u);
        }
        case 0x940Du: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9410u; return dd3_static_complete(rt,5u);
        }
        case 0x9410u: {
            dd3_static_push8(rt,(uint8_t)(0x9412u>>8)); dd3_static_push8(rt,(uint8_t)0x9412u);
            rt->state.cpu.pc=0xAA75u; return dd3_static_complete(rt,6u);
        }
        case 0x9413u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9416u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x9416u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9418u; return dd3_static_complete(rt,2u);
        }
        case 0x9418u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9419u; return dd3_static_complete(rt,2u);
        }
        case 0x9419u: {
            dd3_static_push8(rt,(uint8_t)(0x941Bu>>8)); dd3_static_push8(rt,(uint8_t)0x941Bu);
            rt->state.cpu.pc=0xAA68u; return dd3_static_complete(rt,6u);
        }
        case 0x941Cu: {
            dd3_static_push8(rt,(uint8_t)(0x941Eu>>8)); dd3_static_push8(rt,(uint8_t)0x941Eu);
            rt->state.cpu.pc=0x9469u; return dd3_static_complete(rt,6u);
        }
        case 0x941Fu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9420u; return dd3_static_complete(rt,2u);
        }
        case 0x9420u: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9423u; return dd3_static_complete(rt,5u);
        }
        case 0x9423u: {
            uint8_t v=0x68u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9425u; return dd3_static_complete(rt,2u);
        }
        case 0x9425u: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9428u; return dd3_static_complete(rt,5u);
        }
        case 0x9428u: {
            uint8_t v=0x14u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x942Au; return dd3_static_complete(rt,2u);
        }
        case 0x942Au: {
            dd3_static_write8(rt,(uint16_t)(0x0074u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x942Du; return dd3_static_complete(rt,5u);
        }
        case 0x942Du: {
            uint8_t v=0x82u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x942Fu; return dd3_static_complete(rt,2u);
        }
        case 0x942Fu: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9432u; return dd3_static_complete(rt,5u);
        }
        case 0x9432u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9434u; return dd3_static_complete(rt,2u);
        }
        case 0x9434u: {
            dd3_static_write8(rt,(uint16_t)(0x03B8u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9437u; return dd3_static_complete(rt,5u);
        }
        case 0x9437u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9438u; return dd3_static_complete(rt,2u);
        }
        case 0x9438u: {
            dd3_static_write8(rt,(uint16_t)(0x03F1u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x943Bu; return dd3_static_complete(rt,5u);
        }
        case 0x943Bu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x943Du; return dd3_static_complete(rt,2u);
        }
        case 0x943Du: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x943Fu; return dd3_static_complete(rt,3u);
        }
        case 0x943Fu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9441u; return dd3_static_complete(rt,3u);
        }
        case 0x9441u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9443u; return dd3_static_complete(rt,4u);
        }
        case 0x9443u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9445u,0x9449u)) c++; rt->state.cpu.pc=0x9449u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9445u; return dd3_static_complete(rt,2u);
        }
        case 0x9445u: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9447u; return dd3_static_complete(rt,2u);
        }
        case 0x9447u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9449u; return dd3_static_complete(rt,3u);
        }
        case 0x9449u: {
            dd3_static_push8(rt,(uint8_t)(0x944Bu>>8)); dd3_static_push8(rt,(uint8_t)0x944Bu);
            rt->state.cpu.pc=0xA85Du; return dd3_static_complete(rt,6u);
        }
        case 0x944Cu: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x944Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0x944Fu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x9450u; return dd3_static_complete(rt,2u);
        }
        case 0x9450u: {
            uint8_t v=0x80u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x9452u; return dd3_static_complete(rt,2u);
        }
        case 0x9452u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9455u; return dd3_static_complete(rt,5u);
        }
        case 0x9455u: {
            uint8_t v=0x33u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9457u; return dd3_static_complete(rt,2u);
        }
        case 0x9457u: {
            dd3_static_push8(rt,(uint8_t)(0x9459u>>8)); dd3_static_push8(rt,(uint8_t)0x9459u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x945Au: {
            uint8_t v=0x27u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x945Cu; return dd3_static_complete(rt,2u);
        }
        case 0x945Cu: {
            dd3_static_push8(rt,(uint8_t)(0x945Eu>>8)); dd3_static_push8(rt,(uint8_t)0x945Eu);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x945Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9469u: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x946Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0x946Cu: {
            uint8_t v=0xDFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x946Eu; return dd3_static_complete(rt,2u);
        }
        case 0x946Eu: {
            dd3_static_write8(rt,(uint16_t)(0x004Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9471u; return dd3_static_complete(rt,5u);
        }
        case 0x9471u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9472u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9474u; return dd3_static_complete(rt,4u);
        }
        case 0x9474u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9476u,0x9488u)) c++; rt->state.cpu.pc=0x9488u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9476u; return dd3_static_complete(rt,2u);
        }
        case 0x9476u: {
            dd3_static_push8(rt,(uint8_t)(0x9478u>>8)); dd3_static_push8(rt,(uint8_t)0x9478u);
            rt->state.cpu.pc=0xA906u; return dd3_static_complete(rt,6u);
        }
        case 0x9479u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x947Bu; return dd3_static_complete(rt,2u);
        }
        case 0x947Bu: {
            dd3_static_push8(rt,(uint8_t)(0x947Du>>8)); dd3_static_push8(rt,(uint8_t)0x947Du);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x947Eu: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9480u; return dd3_static_complete(rt,2u);
        }
        case 0x9480u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9483u; return dd3_static_complete(rt,5u);
        }
        case 0x9483u: {
            uint8_t v=0x46u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9485u; return dd3_static_complete(rt,2u);
        }
        case 0x9485u: {
            dd3_static_push8(rt,(uint8_t)(0x9487u>>8)); dd3_static_push8(rt,(uint8_t)0x9487u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x9488u: {
            uint8_t v=0x18u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x948Au; return dd3_static_complete(rt,2u);
        }
        case 0x948Au: {
            rt->state.cpu.pc=0x9317u; return dd3_static_complete(rt,3u);
        }
        case 0x94F0u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x94F2u; return dd3_static_complete(rt,4u);
        }
        case 0x94F2u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x94F4u,0x94F8u)) c++; rt->state.cpu.pc=0x94F8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x94F4u; return dd3_static_complete(rt,2u);
        }
        case 0x94F4u: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x94F6u; return dd3_static_complete(rt,2u);
        }
        case 0x94F6u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x94F8u; return dd3_static_complete(rt,4u);
        }
        case 0x94F8u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x94FAu; return dd3_static_complete(rt,4u);
        }
        case 0x94FAu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x94FBu; return dd3_static_complete(rt,3u);
        }
        case 0x94FBu: {
            dd3_static_push8(rt,(uint8_t)(0x94FDu>>8)); dd3_static_push8(rt,(uint8_t)0x94FDu);
            rt->state.cpu.pc=0x8460u; return dd3_static_complete(rt,6u);
        }
        case 0x94FEu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x94FFu; return dd3_static_complete(rt,4u);
        }
        case 0x94FFu: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9501u; return dd3_static_complete(rt,4u);
        }
        case 0x9501u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9503u; return dd3_static_complete(rt,6u);
        }
        case 0x9503u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9505u,0x9509u)) c++; rt->state.cpu.pc=0x9509u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9505u; return dd3_static_complete(rt,2u);
        }
        case 0x9505u: {
            uint8_t v=0x48u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9507u; return dd3_static_complete(rt,2u);
        }
        case 0x9507u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9509u; return dd3_static_complete(rt,4u);
        }
        case 0x9509u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x950Au: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x950Cu; return dd3_static_complete(rt,4u);
        }
        case 0x950Cu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x950Eu,0x952Au)) c++; rt->state.cpu.pc=0x952Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x950Eu; return dd3_static_complete(rt,2u);
        }
        case 0x950Eu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9510u; return dd3_static_complete(rt,2u);
        }
        case 0x9510u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9512u; return dd3_static_complete(rt,4u);
        }
        case 0x9512u: {
            uint8_t v=0x05u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9514u; return dd3_static_complete(rt,2u);
        }
        case 0x9514u: {
            dd3_static_push8(rt,(uint8_t)(0x9516u>>8)); dd3_static_push8(rt,(uint8_t)0x9516u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x9517u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9519u; return dd3_static_complete(rt,2u);
        }
        case 0x9519u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x951Cu; return dd3_static_complete(rt,5u);
        }
        case 0x951Cu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x951Eu; return dd3_static_complete(rt,2u);
        }
        case 0x951Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9521u; return dd3_static_complete(rt,5u);
        }
        case 0x9521u: {
            uint8_t v=0xE0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9523u; return dd3_static_complete(rt,2u);
        }
        case 0x9523u: {
            dd3_static_write8(rt,(uint16_t)(0x0350u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9526u; return dd3_static_complete(rt,5u);
        }
        case 0x9526u: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9528u; return dd3_static_complete(rt,2u);
        }
        case 0x9528u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x952Au; return dd3_static_complete(rt,4u);
        }
        case 0x952Au: {
            dd3_static_push8(rt,(uint8_t)(0x952Cu>>8)); dd3_static_push8(rt,(uint8_t)0x952Cu);
            rt->state.cpu.pc=0x9327u; return dd3_static_complete(rt,6u);
        }
        case 0x952Du: {
            uint16_t ea=(uint16_t)(0x0347u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9530u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0347u,ea)?1u:0u));
        }
        case 0x9530u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9532u,0x9536u)) c++; rt->state.cpu.pc=0x9536u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9532u; return dd3_static_complete(rt,2u);
        }
        case 0x9532u: {
            uint8_t v=0x49u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9534u; return dd3_static_complete(rt,2u);
        }
        case 0x9534u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9536u; return dd3_static_complete(rt,4u);
        }
        case 0x9536u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9537u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9539u; return dd3_static_complete(rt,4u);
        }
        case 0x9539u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x953Bu,0x955Au)) c++; rt->state.cpu.pc=0x955Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x953Bu; return dd3_static_complete(rt,2u);
        }
        case 0x953Bu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x953Du; return dd3_static_complete(rt,2u);
        }
        case 0x953Du: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x953Fu; return dd3_static_complete(rt,4u);
        }
        case 0x953Fu: {
            uint8_t v=0x06u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9541u; return dd3_static_complete(rt,2u);
        }
        case 0x9541u: {
            dd3_static_push8(rt,(uint8_t)(0x9543u>>8)); dd3_static_push8(rt,(uint8_t)0x9543u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x9544u: {
            uint8_t v=0x18u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9546u; return dd3_static_complete(rt,2u);
        }
        case 0x9546u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9548u; return dd3_static_complete(rt,4u);
        }
        case 0x9548u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x954Au; return dd3_static_complete(rt,2u);
        }
        case 0x954Au: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x954Cu; return dd3_static_complete(rt,4u);
        }
        case 0x954Cu: {
            uint8_t v=0x0Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x954Eu; return dd3_static_complete(rt,2u);
        }
        case 0x954Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9551u; return dd3_static_complete(rt,5u);
        }
        case 0x9551u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9553u; return dd3_static_complete(rt,4u);
        }
        case 0x9553u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9555u; return dd3_static_complete(rt,2u);
        }
        case 0x9555u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9557u; return dd3_static_complete(rt,2u);
        }
        case 0x9557u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x955Au; return dd3_static_complete(rt,5u);
        }
        case 0x955Au: {
            dd3_static_push8(rt,(uint8_t)(0x955Cu>>8)); dd3_static_push8(rt,(uint8_t)0x955Cu);
            rt->state.cpu.pc=0xA6B9u; return dd3_static_complete(rt,6u);
        }
        case 0x955Du: {
            dd3_static_push8(rt,(uint8_t)(0x955Fu>>8)); dd3_static_push8(rt,(uint8_t)0x955Fu);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x9560u: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9563u; return dd3_static_complete(rt,4u);
        }
        case 0x9563u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9565u; return dd3_static_complete(rt,2u);
        }
        case 0x9565u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9567u,0x956Fu)) c++; rt->state.cpu.pc=0x956Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9567u; return dd3_static_complete(rt,2u);
        }
        case 0x9567u: {
            uint16_t ea=(uint16_t)(0x0318u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x956Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0318u,ea)?1u:0u));
        }
        case 0x956Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x956Cu,0x956Fu)) c++; rt->state.cpu.pc=0x956Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x956Cu; return dd3_static_complete(rt,2u);
        }
        case 0x956Cu: {
            uint16_t ea=(uint16_t)(0x0318u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x956Fu; return dd3_static_complete(rt,7u);
        }
        case 0x956Fu: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9571u; return dd3_static_complete(rt,6u);
        }
        case 0x9571u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9573u,0x9582u)) c++; rt->state.cpu.pc=0x9582u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9573u; return dd3_static_complete(rt,2u);
        }
        case 0x9573u: {
            uint8_t v=0x12u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9575u; return dd3_static_complete(rt,2u);
        }
        case 0x9575u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9577u; return dd3_static_complete(rt,4u);
        }
        case 0x9577u: {
            dd3_static_push8(rt,(uint8_t)(0x9579u>>8)); dd3_static_push8(rt,(uint8_t)0x9579u);
            rt->state.cpu.pc=0xFC30u; return dd3_static_complete(rt,6u);
        }
        case 0x957Au: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x957Cu; return dd3_static_complete(rt,3u);
        }
        case 0x957Cu: {
            dd3_static_write8(rt,(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x957Eu; return dd3_static_complete(rt,4u);
        }
        case 0x957Eu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9580u; return dd3_static_complete(rt,3u);
        }
        case 0x9580u: {
            dd3_static_write8(rt,(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9582u; return dd3_static_complete(rt,4u);
        }
        case 0x9582u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9597u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9599u; return dd3_static_complete(rt,2u);
        }
        case 0x9599u: {
            dd3_static_push8(rt,(uint8_t)(0x959Bu>>8)); dd3_static_push8(rt,(uint8_t)0x959Bu);
            rt->state.cpu.pc=0x95ADu; return dd3_static_complete(rt,6u);
        }
        case 0x959Cu: {
            dd3_static_push8(rt,(uint8_t)(0x959Eu>>8)); dd3_static_push8(rt,(uint8_t)0x959Eu);
            rt->state.cpu.pc=0x8460u; return dd3_static_complete(rt,6u);
        }
        case 0x959Fu: {
            uint16_t ea=(uint16_t)(0x0347u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x95A2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0347u,ea)?1u:0u));
        }
        case 0x95A2u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x95A4u,0x95A8u)) c++; rt->state.cpu.pc=0x95A8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x95A4u; return dd3_static_complete(rt,2u);
        }
        case 0x95A4u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x95A6u; return dd3_static_complete(rt,2u);
        }
        case 0x95A6u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x95A8u,0x95ACu)) c++; rt->state.cpu.pc=0x95ACu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x95A8u; return dd3_static_complete(rt,2u);
        }
        case 0x95A8u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x95AAu; return dd3_static_complete(rt,2u);
        }
        case 0x95AAu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x95ACu; return dd3_static_complete(rt,4u);
        }
        case 0x95ACu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x95ADu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x95AFu; return dd3_static_complete(rt,4u);
        }
        case 0x95AFu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x95B1u,0x95E9u)) c++; rt->state.cpu.pc=0x95E9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x95B1u; return dd3_static_complete(rt,2u);
        }
        case 0x95B1u: {
            dd3_static_push8(rt,(uint8_t)(0x95B3u>>8)); dd3_static_push8(rt,(uint8_t)0x95B3u);
            rt->state.cpu.pc=0xA906u; return dd3_static_complete(rt,6u);
        }
        case 0x95B4u: {
            dd3_static_push8(rt,(uint8_t)(0x95B6u>>8)); dd3_static_push8(rt,(uint8_t)0x95B6u);
            rt->state.cpu.pc=0xA92Cu; return dd3_static_complete(rt,6u);
        }
        case 0x95B7u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x95B9u; return dd3_static_complete(rt,2u);
        }
        case 0x95B9u: {
            dd3_static_push8(rt,(uint8_t)(0x95BBu>>8)); dd3_static_push8(rt,(uint8_t)0x95BBu);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x95BCu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x95BEu; return dd3_static_complete(rt,4u);
        }
        case 0x95BEu: {
            uint8_t v=0x09u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x95C0u; return dd3_static_complete(rt,2u);
        }
        case 0x95C0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x95C2u,0x95C3u)) c++; rt->state.cpu.pc=0x95C3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x95C2u; return dd3_static_complete(rt,2u);
        }
        case 0x95C2u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x95C3u; return dd3_static_complete(rt,2u);
        }
        case 0x95C3u: {
            uint16_t ea=(uint16_t)(0x95EAu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x95C6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x95EAu,ea)?1u:0u));
        }
        case 0x95C6u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x95C9u; return dd3_static_complete(rt,5u);
        }
        case 0x95C9u: {
            uint16_t ea=(uint16_t)(0x95F2u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x95CCu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x95F2u,ea)?1u:0u));
        }
        case 0x95CCu: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x95CFu; return dd3_static_complete(rt,5u);
        }
        case 0x95CFu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x95D1u; return dd3_static_complete(rt,2u);
        }
        case 0x95D1u: {
            dd3_static_write8(rt,(uint16_t)(0x0350u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x95D4u; return dd3_static_complete(rt,5u);
        }
        case 0x95D4u: {
            uint8_t v=0x1Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x95D6u; return dd3_static_complete(rt,2u);
        }
        case 0x95D6u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x95D8u; return dd3_static_complete(rt,4u);
        }
        case 0x95D8u: {
            uint8_t v=0x46u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x95DAu; return dd3_static_complete(rt,2u);
        }
        case 0x95DAu: {
            dd3_static_push8(rt,(uint8_t)(0x95DCu>>8)); dd3_static_push8(rt,(uint8_t)0x95DCu);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x95DDu: {
            uint16_t ea=(uint16_t)(0x04B6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x95E0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B6u,ea)?1u:0u));
        }
        case 0x95E0u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x95E2u; return dd3_static_complete(rt,2u);
        }
        case 0x95E2u: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x95E4u; return dd3_static_complete(rt,4u);
        }
        case 0x95E4u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x95E6u; return dd3_static_complete(rt,2u);
        }
        case 0x95E6u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x95E9u; return dd3_static_complete(rt,5u);
        }
        case 0x95E9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x95FAu: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x95FCu; return dd3_static_complete(rt,2u);
        }
        case 0x95FCu: {
            dd3_static_push8(rt,(uint8_t)(0x95FEu>>8)); dd3_static_push8(rt,(uint8_t)0x95FEu);
            rt->state.cpu.pc=0x95ADu; return dd3_static_complete(rt,6u);
        }
        case 0x95FFu: {
            dd3_static_push8(rt,(uint8_t)(0x9601u>>8)); dd3_static_push8(rt,(uint8_t)0x9601u);
            rt->state.cpu.pc=0x8460u; return dd3_static_complete(rt,6u);
        }
        case 0x9602u: {
            uint16_t ea=(uint16_t)(0x0347u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9605u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0347u,ea)?1u:0u));
        }
        case 0x9605u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9607u,0x960Bu)) c++; rt->state.cpu.pc=0x960Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9607u; return dd3_static_complete(rt,2u);
        }
        case 0x9607u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9609u; return dd3_static_complete(rt,2u);
        }
        case 0x9609u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x960Bu,0x960Fu)) c++; rt->state.cpu.pc=0x960Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x960Bu; return dd3_static_complete(rt,2u);
        }
        case 0x960Bu: {
            uint8_t v=0x35u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x960Du; return dd3_static_complete(rt,2u);
        }
        case 0x960Du: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x960Fu; return dd3_static_complete(rt,4u);
        }
        case 0x960Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x961Fu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9621u; return dd3_static_complete(rt,4u);
        }
        case 0x9621u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9623u,0x962Eu)) c++; rt->state.cpu.pc=0x962Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9623u; return dd3_static_complete(rt,2u);
        }
        case 0x9623u: {
            dd3_static_push8(rt,(uint8_t)(0x9625u>>8)); dd3_static_push8(rt,(uint8_t)0x9625u);
            rt->state.cpu.pc=0xA8B0u; return dd3_static_complete(rt,6u);
        }
        case 0x9626u: {
            dd3_static_push8(rt,(uint8_t)(0x9628u>>8)); dd3_static_push8(rt,(uint8_t)0x9628u);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x9629u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x962Bu; return dd3_static_complete(rt,2u);
        }
        case 0x962Bu: {
            dd3_static_push8(rt,(uint8_t)(0x962Du>>8)); dd3_static_push8(rt,(uint8_t)0x962Du);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x962Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9630u; return dd3_static_complete(rt,2u);
        }
        case 0x9630u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9633u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x9633u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9635u,0x9638u)) c++; rt->state.cpu.pc=0x9638u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9635u; return dd3_static_complete(rt,2u);
        }
        case 0x9635u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9637u; return dd3_static_complete(rt,4u);
        }
        case 0x9637u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9638u; return dd3_static_complete(rt,2u);
        }
        case 0x9638u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x963Au; return dd3_static_complete(rt,2u);
        }
        case 0x963Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x963Cu,0x9641u)) c++; rt->state.cpu.pc=0x9641u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x963Cu; return dd3_static_complete(rt,2u);
        }
        case 0x963Cu: {
            uint16_t ea=(uint16_t)(0x96DEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x963Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x96DEu,ea)?1u:0u));
        }
        case 0x963Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9641u,0x9644u)) c++; rt->state.cpu.pc=0x9644u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9641u; return dd3_static_complete(rt,2u);
        }
        case 0x9641u: {
            uint16_t ea=(uint16_t)(0x96CDu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9644u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x96CDu,ea)?1u:0u));
        }
        case 0x9644u: {
            dd3_static_push8(rt,(uint8_t)(0x9646u>>8)); dd3_static_push8(rt,(uint8_t)0x9646u);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x9647u: {
            uint16_t ea=(uint16_t)(0x0060u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x964Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0060u,ea)?1u:0u));
        }
        case 0x964Au: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x964Cu; return dd3_static_complete(rt,2u);
        }
        case 0x964Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x964Eu,0x96C1u)) c++; rt->state.cpu.pc=0x96C1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x964Eu; return dd3_static_complete(rt,2u);
        }
        case 0x964Eu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x964Fu; return dd3_static_complete(rt,2u);
        }
        case 0x964Fu: {
            uint16_t ea=(uint16_t)(0x96EEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9652u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x96EEu,ea)?1u:0u));
        }
        case 0x9652u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9654u; return dd3_static_complete(rt,4u);
        }
        case 0x9654u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9656u,0x96C1u)) c++; rt->state.cpu.pc=0x96C1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9656u; return dd3_static_complete(rt,2u);
        }
        case 0x9656u: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9659u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0x9659u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x965Bu,0x96C1u)) c++; rt->state.cpu.pc=0x96C1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x965Bu; return dd3_static_complete(rt,2u);
        }
        case 0x965Bu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x965Du; return dd3_static_complete(rt,2u);
        }
        case 0x965Du: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9660u; return dd3_static_complete(rt,5u);
        }
        case 0x9660u: {
            dd3_static_push8(rt,(uint8_t)(0x9662u>>8)); dd3_static_push8(rt,(uint8_t)0x9662u);
            rt->state.cpu.pc=0xAA75u; return dd3_static_complete(rt,6u);
        }
        case 0x9663u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9664u; return dd3_static_complete(rt,3u);
        }
        case 0x9664u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9665u; return dd3_static_complete(rt,2u);
        }
        case 0x9665u: {
            dd3_static_push8(rt,(uint8_t)(0x9667u>>8)); dd3_static_push8(rt,(uint8_t)0x9667u);
            rt->state.cpu.pc=0xAA68u; return dd3_static_complete(rt,6u);
        }
        case 0x9668u: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x966Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0x966Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0074u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x966Eu; return dd3_static_complete(rt,5u);
        }
        case 0x966Eu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x966Fu; return dd3_static_complete(rt,2u);
        }
        case 0x966Fu: {
            uint16_t ea=(uint16_t)(0x96B4u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9672u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x96B4u,ea)?1u:0u));
        }
        case 0x9672u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9674u; return dd3_static_complete(rt,3u);
        }
        case 0x9674u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9675u; return dd3_static_complete(rt,4u);
        }
        case 0x9675u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9676u; return dd3_static_complete(rt,2u);
        }
        case 0x9676u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9678u; return dd3_static_complete(rt,3u);
        }
        case 0x9678u: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x967Bu; return dd3_static_complete(rt,5u);
        }
        case 0x967Bu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x967Cu; return dd3_static_complete(rt,2u);
        }
        case 0x967Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x967Fu; return dd3_static_complete(rt,5u);
        }
        case 0x967Fu: {
            uint8_t v=0x82u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9681u; return dd3_static_complete(rt,2u);
        }
        case 0x9681u: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9684u; return dd3_static_complete(rt,5u);
        }
        case 0x9684u: {
            dd3_static_push8(rt,(uint8_t)(0x9686u>>8)); dd3_static_push8(rt,(uint8_t)0x9686u);
            rt->state.cpu.pc=0x9469u; return dd3_static_complete(rt,6u);
        }
        case 0x9687u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9689u; return dd3_static_complete(rt,2u);
        }
        case 0x9689u: {
            dd3_static_write8(rt,(uint16_t)(0x03B8u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x968Cu; return dd3_static_complete(rt,5u);
        }
        case 0x968Cu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x968Eu; return dd3_static_complete(rt,2u);
        }
        case 0x968Eu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9690u; return dd3_static_complete(rt,3u);
        }
        case 0x9690u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9692u; return dd3_static_complete(rt,4u);
        }
        case 0x9692u: {
            dd3_static_write8(rt,(uint16_t)(0x0068u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9695u; return dd3_static_complete(rt,5u);
        }
        case 0x9695u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9697u,0x969Bu)) c++; rt->state.cpu.pc=0x969Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9697u; return dd3_static_complete(rt,2u);
        }
        case 0x9697u: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9699u; return dd3_static_complete(rt,2u);
        }
        case 0x9699u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x969Bu; return dd3_static_complete(rt,3u);
        }
        case 0x969Bu: {
            uint8_t v=0x18u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x969Du; return dd3_static_complete(rt,2u);
        }
        case 0x969Du: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x969Fu; return dd3_static_complete(rt,3u);
        }
        case 0x969Fu: {
            uint8_t v=0x26u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x96A1u; return dd3_static_complete(rt,2u);
        }
        case 0x96A1u: {
            dd3_static_push8(rt,(uint8_t)(0x96A3u>>8)); dd3_static_push8(rt,(uint8_t)0x96A3u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x96A4u: {
            dd3_static_push8(rt,(uint8_t)(0x96A6u>>8)); dd3_static_push8(rt,(uint8_t)0x96A6u);
            rt->state.cpu.pc=0xA85Du; return dd3_static_complete(rt,6u);
        }
        case 0x96A7u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x96A9u; return dd3_static_complete(rt,4u);
        }
        case 0x96A9u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x96ABu; return dd3_static_complete(rt,2u);
        }
        case 0x96ABu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x96ADu; return dd3_static_complete(rt,2u);
        }
        case 0x96ADu: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x96B0u; return dd3_static_complete(rt,5u);
        }
        case 0x96B0u: {
            uint16_t ea=(uint16_t)(0x003Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x96B3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Cu,ea)?1u:0u));
        }
        case 0x96B3u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x96B5u; return dd3_static_complete(rt,2u);
        }
        case 0x96B5u: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x96B8u; return dd3_static_complete(rt,5u);
        }
        case 0x96B8u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x96BAu; return dd3_static_complete(rt,2u);
        }
        case 0x96BAu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x96BCu,0x96C1u)) c++; rt->state.cpu.pc=0x96C1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x96BCu; return dd3_static_complete(rt,2u);
        }
        case 0x96BCu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x96BEu; return dd3_static_complete(rt,2u);
        }
        case 0x96BEu: {
            dd3_static_write8(rt,(uint16_t)(0x04C4u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x96C1u; return dd3_static_complete(rt,5u);
        }
        case 0x96C1u: {
            dd3_static_push8(rt,(uint8_t)(0x96C3u>>8)); dd3_static_push8(rt,(uint8_t)0x96C3u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x96C4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9701u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9703u; return dd3_static_complete(rt,4u);
        }
        case 0x9703u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9705u,0x9710u)) c++; rt->state.cpu.pc=0x9710u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9705u; return dd3_static_complete(rt,2u);
        }
        case 0x9705u: {
            dd3_static_push8(rt,(uint8_t)(0x9707u>>8)); dd3_static_push8(rt,(uint8_t)0x9707u);
            rt->state.cpu.pc=0xA8B0u; return dd3_static_complete(rt,6u);
        }
        case 0x9708u: {
            dd3_static_push8(rt,(uint8_t)(0x970Au>>8)); dd3_static_push8(rt,(uint8_t)0x970Au);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x970Bu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x970Du; return dd3_static_complete(rt,2u);
        }
        case 0x970Du: {
            dd3_static_push8(rt,(uint8_t)(0x970Fu>>8)); dd3_static_push8(rt,(uint8_t)0x970Fu);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x9710u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9712u; return dd3_static_complete(rt,2u);
        }
        case 0x9712u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9715u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x9715u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9717u,0x971Au)) c++; rt->state.cpu.pc=0x971Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9717u; return dd3_static_complete(rt,2u);
        }
        case 0x9717u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9719u; return dd3_static_complete(rt,4u);
        }
        case 0x9719u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x971Au; return dd3_static_complete(rt,2u);
        }
        case 0x971Au: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x971Cu; return dd3_static_complete(rt,2u);
        }
        case 0x971Cu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x971Eu,0x9723u)) c++; rt->state.cpu.pc=0x9723u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x971Eu; return dd3_static_complete(rt,2u);
        }
        case 0x971Eu: {
            uint16_t ea=(uint16_t)(0x973Eu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9721u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x973Eu,ea)?1u:0u));
        }
        case 0x9721u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9723u,0x9726u)) c++; rt->state.cpu.pc=0x9726u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9723u; return dd3_static_complete(rt,2u);
        }
        case 0x9723u: {
            uint16_t ea=(uint16_t)(0x972Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9726u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x972Du,ea)?1u:0u));
        }
        case 0x9726u: {
            dd3_static_push8(rt,(uint8_t)(0x9728u>>8)); dd3_static_push8(rt,(uint8_t)0x9728u);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x9729u: {
            dd3_static_push8(rt,(uint8_t)(0x972Bu>>8)); dd3_static_push8(rt,(uint8_t)0x972Bu);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x972Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9779u: {
            dd3_static_push8(rt,(uint8_t)(0x977Bu>>8)); dd3_static_push8(rt,(uint8_t)0x977Bu);
            rt->state.cpu.pc=0x8460u; return dd3_static_complete(rt,6u);
        }
        case 0x977Cu: {
            uint16_t ea=(uint16_t)(0x0347u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x977Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0347u,ea)?1u:0u));
        }
        case 0x977Fu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9781u,0x9785u)) c++; rt->state.cpu.pc=0x9785u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9781u; return dd3_static_complete(rt,2u);
        }
        case 0x9781u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9783u; return dd3_static_complete(rt,2u);
        }
        case 0x9783u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9785u,0x9789u)) c++; rt->state.cpu.pc=0x9789u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9785u; return dd3_static_complete(rt,2u);
        }
        case 0x9785u: {
            uint8_t v=0x37u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9787u; return dd3_static_complete(rt,2u);
        }
        case 0x9787u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9789u; return dd3_static_complete(rt,4u);
        }
        case 0x9789u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x978Au: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x978Cu; return dd3_static_complete(rt,4u);
        }
        case 0x978Cu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x978Eu,0x97ABu)) c++; rt->state.cpu.pc=0x97ABu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x978Eu; return dd3_static_complete(rt,2u);
        }
        case 0x978Eu: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9790u; return dd3_static_complete(rt,4u);
        }
        case 0x9790u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9791u; return dd3_static_complete(rt,3u);
        }
        case 0x9791u: {
            dd3_static_push8(rt,(uint8_t)(0x9793u>>8)); dd3_static_push8(rt,(uint8_t)0x9793u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x9794u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9796u; return dd3_static_complete(rt,2u);
        }
        case 0x9796u: {
            dd3_static_push8(rt,(uint8_t)(0x9798u>>8)); dd3_static_push8(rt,(uint8_t)0x9798u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x9799u: {
            dd3_static_push8(rt,(uint8_t)(0x979Bu>>8)); dd3_static_push8(rt,(uint8_t)0x979Bu);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x979Cu: {
            uint8_t v=0x09u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x979Eu; return dd3_static_complete(rt,2u);
        }
        case 0x979Eu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x97A0u; return dd3_static_complete(rt,4u);
        }
        case 0x97A0u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97A2u; return dd3_static_complete(rt,2u);
        }
        case 0x97A2u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x97A4u; return dd3_static_complete(rt,4u);
        }
        case 0x97A4u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x97A5u; return dd3_static_complete(rt,4u);
        }
        case 0x97A5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x97A7u,0x97ABu)) c++; rt->state.cpu.pc=0x97ABu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x97A7u; return dd3_static_complete(rt,2u);
        }
        case 0x97A7u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97A9u; return dd3_static_complete(rt,2u);
        }
        case 0x97A9u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x97ABu; return dd3_static_complete(rt,4u);
        }
        case 0x97ABu: {
            dd3_static_push8(rt,(uint8_t)(0x97ADu>>8)); dd3_static_push8(rt,(uint8_t)0x97ADu);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x97AEu: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97B0u; return dd3_static_complete(rt,4u);
        }
        case 0x97B0u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x97B2u,0x97B6u)) c++; rt->state.cpu.pc=0x97B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x97B2u; return dd3_static_complete(rt,2u);
        }
        case 0x97B2u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x97B4u; return dd3_static_complete(rt,6u);
        }
        case 0x97B4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x97B6u,0x97C6u)) c++; rt->state.cpu.pc=0x97C6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x97B6u; return dd3_static_complete(rt,2u);
        }
        case 0x97B6u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x97B8u; return dd3_static_complete(rt,2u);
        }
        case 0x97B8u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x97BAu,0x97C2u)) c++; rt->state.cpu.pc=0x97C2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x97BAu; return dd3_static_complete(rt,2u);
        }
        case 0x97BAu: {
            uint16_t ea=(uint16_t)(0x04A0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97BDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A0u,ea)?1u:0u));
        }
        case 0x97BDu: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97C0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0x97C0u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x97C2u,0x97C6u)) c++; rt->state.cpu.pc=0x97C6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x97C2u; return dd3_static_complete(rt,2u);
        }
        case 0x97C2u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97C4u; return dd3_static_complete(rt,2u);
        }
        case 0x97C4u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x97C6u; return dd3_static_complete(rt,4u);
        }
        case 0x97C6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x97C7u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97C9u; return dd3_static_complete(rt,4u);
        }
        case 0x97C9u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x97CBu,0x97FEu)) c++; rt->state.cpu.pc=0x97FEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x97CBu; return dd3_static_complete(rt,2u);
        }
        case 0x97CBu: {
            dd3_static_push8(rt,(uint8_t)(0x97CDu>>8)); dd3_static_push8(rt,(uint8_t)0x97CDu);
            rt->state.cpu.pc=0xA8B0u; return dd3_static_complete(rt,6u);
        }
        case 0x97CEu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97D0u; return dd3_static_complete(rt,2u);
        }
        case 0x97D0u: {
            dd3_static_push8(rt,(uint8_t)(0x97D2u>>8)); dd3_static_push8(rt,(uint8_t)0x97D2u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x97D3u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97D5u; return dd3_static_complete(rt,4u);
        }
        case 0x97D5u: {
            uint8_t v=0x3Eu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x97D7u; return dd3_static_complete(rt,2u);
        }
        case 0x97D7u: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x97D9u; return dd3_static_complete(rt,4u);
        }
        case 0x97D9u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97DBu; return dd3_static_complete(rt,4u);
        }
        case 0x97DBu: {
            uint16_t ea=(uint16_t)(0x82E3u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97DEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x82E3u,ea)?1u:0u));
        }
        case 0x97DEu: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x97E1u; return dd3_static_complete(rt,5u);
        }
        case 0x97E1u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97E3u; return dd3_static_complete(rt,2u);
        }
        case 0x97E3u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x97E5u; return dd3_static_complete(rt,4u);
        }
        case 0x97E5u: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97E7u; return dd3_static_complete(rt,4u);
        }
        case 0x97E7u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x97E9u; return dd3_static_complete(rt,2u);
        }
        case 0x97E9u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x97EBu; return dd3_static_complete(rt,2u);
        }
        case 0x97EBu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x97EDu,0x97FEu)) c++; rt->state.cpu.pc=0x97FEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x97EDu; return dd3_static_complete(rt,2u);
        }
        case 0x97EDu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x97EEu; return dd3_static_complete(rt,2u);
        }
        case 0x97EEu: {
            uint16_t ea=(uint16_t)(0x82F5u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97F1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x82F5u,ea)?1u:0u));
        }
        case 0x97F1u: {
            dd3_static_write8(rt,(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x97F3u; return dd3_static_complete(rt,4u);
        }
        case 0x97F3u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x97F5u; return dd3_static_complete(rt,4u);
        }
        case 0x97F5u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x97F7u; return dd3_static_complete(rt,2u);
        }
        case 0x97F7u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x97F9u; return dd3_static_complete(rt,2u);
        }
        case 0x97F9u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x97FBu; return dd3_static_complete(rt,2u);
        }
        case 0x97FBu: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x97FEu; return dd3_static_complete(rt,5u);
        }
        case 0x97FEu: {
            dd3_static_push8(rt,(uint8_t)(0x9800u>>8)); dd3_static_push8(rt,(uint8_t)0x9800u);
            rt->state.cpu.pc=0x8281u; return dd3_static_complete(rt,6u);
        }
        case 0x9801u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9804u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0x9804u: {
            uint8_t v=0x28u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9806u; return dd3_static_complete(rt,2u);
        }
        case 0x9806u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9808u,0x9815u)) c++; rt->state.cpu.pc=0x9815u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9808u; return dd3_static_complete(rt,2u);
        }
        case 0x9808u: {
            uint8_t v=0x55u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x980Au; return dd3_static_complete(rt,2u);
        }
        case 0x980Au: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x980Cu; return dd3_static_complete(rt,4u);
        }
        case 0x980Cu: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x980Eu; return dd3_static_complete(rt,4u);
        }
        case 0x980Eu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9810u; return dd3_static_complete(rt,2u);
        }
        case 0x9810u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9812u; return dd3_static_complete(rt,2u);
        }
        case 0x9812u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9815u; return dd3_static_complete(rt,5u);
        }
        case 0x9815u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9818u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0x9818u: {
            uint8_t v=0x40u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x981Au; return dd3_static_complete(rt,2u);
        }
        case 0x981Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x981Cu,0x982Fu)) c++; rt->state.cpu.pc=0x982Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x981Cu; return dd3_static_complete(rt,2u);
        }
        case 0x981Cu: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x981Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0x981Fu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9821u; return dd3_static_complete(rt,2u);
        }
        case 0x9821u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9823u,0x982Fu)) c++; rt->state.cpu.pc=0x982Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9823u; return dd3_static_complete(rt,2u);
        }
        case 0x9823u: {
            uint16_t ea=(uint16_t)(0x04B6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9826u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B6u,ea)?1u:0u));
        }
        case 0x9826u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9828u; return dd3_static_complete(rt,4u);
        }
        case 0x9828u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x982Au,0x982Fu)) c++; rt->state.cpu.pc=0x982Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x982Au; return dd3_static_complete(rt,2u);
        }
        case 0x982Au: {
            uint16_t ea=(uint16_t)(0x039Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x982Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Du,ea)?1u:0u));
        }
        case 0x982Du: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x982Fu,0x9832u)) c++; rt->state.cpu.pc=0x9832u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x982Fu; return dd3_static_complete(rt,2u);
        }
        case 0x982Fu: {
            dd3_static_push8(rt,(uint8_t)(0x9831u>>8)); dd3_static_push8(rt,(uint8_t)0x9831u);
            rt->state.cpu.pc=0x822Au; return dd3_static_complete(rt,6u);
        }
        case 0x9832u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9833u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9835u; return dd3_static_complete(rt,4u);
        }
        case 0x9835u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9837u,0x988Au)) c++; rt->state.cpu.pc=0x988Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9837u; return dd3_static_complete(rt,2u);
        }
        case 0x9837u: {
            dd3_static_push8(rt,(uint8_t)(0x9839u>>8)); dd3_static_push8(rt,(uint8_t)0x9839u);
            rt->state.cpu.pc=0xA906u; return dd3_static_complete(rt,6u);
        }
        case 0x983Au: {
            uint16_t ea=(uint16_t)(0x06E1u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x983Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06E1u,ea)?1u:0u));
        }
        case 0x983Du: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x983Fu; return dd3_static_complete(rt,2u);
        }
        case 0x983Fu: {
            dd3_static_write8(rt,(uint16_t)(0x06E1u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9842u; return dd3_static_complete(rt,5u);
        }
        case 0x9842u: {
            uint8_t v=0x16u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9844u; return dd3_static_complete(rt,2u);
        }
        case 0x9844u: {
            dd3_static_push8(rt,(uint8_t)(0x9846u>>8)); dd3_static_push8(rt,(uint8_t)0x9846u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x9847u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9849u; return dd3_static_complete(rt,2u);
        }
        case 0x9849u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x984Cu; return dd3_static_complete(rt,5u);
        }
        case 0x984Cu: {
            uint8_t v=0x0Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x984Eu; return dd3_static_complete(rt,2u);
        }
        case 0x984Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9851u; return dd3_static_complete(rt,5u);
        }
        case 0x9851u: {
            uint8_t v=0xB8u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9853u; return dd3_static_complete(rt,2u);
        }
        case 0x9853u: {
            dd3_static_write8(rt,(uint16_t)(0x0350u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9856u; return dd3_static_complete(rt,5u);
        }
        case 0x9856u: {
            uint8_t v=0x46u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9858u; return dd3_static_complete(rt,2u);
        }
        case 0x9858u: {
            dd3_static_push8(rt,(uint8_t)(0x985Au>>8)); dd3_static_push8(rt,(uint8_t)0x985Au);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x985Bu: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x985Du; return dd3_static_complete(rt,4u);
        }
        case 0x985Du: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x985Fu; return dd3_static_complete(rt,2u);
        }
        case 0x985Fu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9861u; return dd3_static_complete(rt,2u);
        }
        case 0x9861u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9863u; return dd3_static_complete(rt,2u);
        }
        case 0x9863u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9866u; return dd3_static_complete(rt,5u);
        }
        case 0x9866u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9868u; return dd3_static_complete(rt,4u);
        }
        case 0x9868u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x986Au; return dd3_static_complete(rt,2u);
        }
        case 0x986Au: {
            uint8_t v=0x53u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x986Cu; return dd3_static_complete(rt,2u);
        }
        case 0x986Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x986Eu,0x9876u)) c++; rt->state.cpu.pc=0x9876u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x986Eu; return dd3_static_complete(rt,2u);
        }
        case 0x986Eu: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9871u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0x9871u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9873u; return dd3_static_complete(rt,2u);
        }
        case 0x9873u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9876u; return dd3_static_complete(rt,5u);
        }
        case 0x9876u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9878u; return dd3_static_complete(rt,4u);
        }
        case 0x9878u: {
            uint8_t v=0x0Du;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x987Au; return dd3_static_complete(rt,2u);
        }
        case 0x987Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x987Cu,0x9880u)) c++; rt->state.cpu.pc=0x9880u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x987Cu; return dd3_static_complete(rt,2u);
        }
        case 0x987Cu: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x987Eu; return dd3_static_complete(rt,2u);
        }
        case 0x987Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9880u,0x988Au)) c++; rt->state.cpu.pc=0x988Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9880u; return dd3_static_complete(rt,2u);
        }
        case 0x9880u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9882u; return dd3_static_complete(rt,4u);
        }
        case 0x9882u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9884u; return dd3_static_complete(rt,2u);
        }
        case 0x9884u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9886u; return dd3_static_complete(rt,2u);
        }
        case 0x9886u: {
            uint8_t v=0x1Eu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9888u; return dd3_static_complete(rt,2u);
        }
        case 0x9888u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x988Au; return dd3_static_complete(rt,4u);
        }
        case 0x988Au: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x988Cu; return dd3_static_complete(rt,4u);
        }
        case 0x988Cu: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x988Eu; return dd3_static_complete(rt,2u);
        }
        case 0x988Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9890u,0x989Cu)) c++; rt->state.cpu.pc=0x989Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9890u; return dd3_static_complete(rt,2u);
        }
        case 0x9890u: {
            uint8_t v=0x0Du;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9892u; return dd3_static_complete(rt,2u);
        }
        case 0x9892u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9894u,0x989Cu)) c++; rt->state.cpu.pc=0x989Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9894u; return dd3_static_complete(rt,2u);
        }
        case 0x9894u: {
            uint8_t v=0x29u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9896u; return dd3_static_complete(rt,2u);
        }
        case 0x9896u: {
            dd3_static_push8(rt,(uint8_t)(0x9898u>>8)); dd3_static_push8(rt,(uint8_t)0x9898u);
            rt->state.cpu.pc=0x9317u; return dd3_static_complete(rt,6u);
        }
        case 0x9899u: {
            rt->state.cpu.pc=0x989Fu; return dd3_static_complete(rt,3u);
        }
        case 0x989Cu: {
            dd3_static_push8(rt,(uint8_t)(0x989Eu>>8)); dd3_static_push8(rt,(uint8_t)0x989Eu);
            rt->state.cpu.pc=0x931Au; return dd3_static_complete(rt,6u);
        }
        case 0x989Fu: {
            uint16_t ea=(uint16_t)(0x04A0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x98A2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A0u,ea)?1u:0u));
        }
        case 0x98A2u: {
            dd3_static_push8(rt,(uint8_t)(0x98A4u>>8)); dd3_static_push8(rt,(uint8_t)0x98A4u);
            rt->state.cpu.pc=0x98BAu; return dd3_static_complete(rt,6u);
        }
        case 0x98A5u: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x98A7u; return dd3_static_complete(rt,4u);
        }
        case 0x98A7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x98A9u,0x98B0u)) c++; rt->state.cpu.pc=0x98B0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x98A9u; return dd3_static_complete(rt,2u);
        }
        case 0x98A9u: {
            dd3_static_push8(rt,(uint8_t)(0x98ABu>>8)); dd3_static_push8(rt,(uint8_t)0x98ABu);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x98ACu: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x98AEu; return dd3_static_complete(rt,4u);
        }
        case 0x98AEu: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x98B0u; return dd3_static_complete(rt,4u);
        }
        case 0x98B0u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x98BAu: {
            uint16_t ea=(uint16_t)(0x04A8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x98BDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A8u,ea)?1u:0u));
        }
        case 0x98BDu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x98BFu; return dd3_static_complete(rt,2u);
        }
        case 0x98BFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x98C1u,0x98CFu)) c++; rt->state.cpu.pc=0x98CFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x98C1u; return dd3_static_complete(rt,2u);
        }
        case 0x98C1u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x98C3u; return dd3_static_complete(rt,4u);
        }
        case 0x98C3u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x98C5u; return dd3_static_complete(rt,2u);
        }
        case 0x98C5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x98C7u,0x98D0u)) c++; rt->state.cpu.pc=0x98D0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x98C7u; return dd3_static_complete(rt,2u);
        }
        case 0x98C7u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x98C9u; return dd3_static_complete(rt,2u);
        }
        case 0x98C9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x98CBu,0x98D0u)) c++; rt->state.cpu.pc=0x98D0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x98CBu; return dd3_static_complete(rt,2u);
        }
        case 0x98CBu: {
            uint8_t v=0x0Du;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x98CDu; return dd3_static_complete(rt,2u);
        }
        case 0x98CDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x98CFu,0x98D0u)) c++; rt->state.cpu.pc=0x98D0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x98CFu; return dd3_static_complete(rt,2u);
        }
        case 0x98CFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x98D0u: {
            uint16_t ea=(uint16_t)(0x04A0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x98D3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A0u,ea)?1u:0u));
        }
        case 0x98D3u: {
            dd3_static_push8(rt,(uint8_t)(0x98D5u>>8)); dd3_static_push8(rt,(uint8_t)0x98D5u);
            rt->state.cpu.pc=0xAA85u; return dd3_static_complete(rt,6u);
        }
        case 0x98D6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x98D7u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x98D9u; return dd3_static_complete(rt,4u);
        }
        case 0x98D9u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x98DBu,0x98E7u)) c++; rt->state.cpu.pc=0x98E7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x98DBu; return dd3_static_complete(rt,2u);
        }
        case 0x98DBu: {
            dd3_static_push8(rt,(uint8_t)(0x98DDu>>8)); dd3_static_push8(rt,(uint8_t)0x98DDu);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x98DEu: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x98E0u; return dd3_static_complete(rt,2u);
        }
        case 0x98E0u: {
            dd3_static_push8(rt,(uint8_t)(0x98E2u>>8)); dd3_static_push8(rt,(uint8_t)0x98E2u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x98E3u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x98E5u; return dd3_static_complete(rt,2u);
        }
        case 0x98E5u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x98E7u; return dd3_static_complete(rt,4u);
        }
        case 0x98E7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x98E8u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x98EAu; return dd3_static_complete(rt,4u);
        }
        case 0x98EAu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x98ECu,0x98F8u)) c++; rt->state.cpu.pc=0x98F8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x98ECu; return dd3_static_complete(rt,2u);
        }
        case 0x98ECu: {
            dd3_static_push8(rt,(uint8_t)(0x98EEu>>8)); dd3_static_push8(rt,(uint8_t)0x98EEu);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x98EFu: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x98F1u; return dd3_static_complete(rt,2u);
        }
        case 0x98F1u: {
            dd3_static_push8(rt,(uint8_t)(0x98F3u>>8)); dd3_static_push8(rt,(uint8_t)0x98F3u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x98F4u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x98F6u; return dd3_static_complete(rt,2u);
        }
        case 0x98F6u: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x98F8u; return dd3_static_complete(rt,4u);
        }
        case 0x98F8u: {
            uint8_t v=0x16u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x98FAu; return dd3_static_complete(rt,2u);
        }
        case 0x98FAu: {
            dd3_static_push8(rt,(uint8_t)(0x98FCu>>8)); dd3_static_push8(rt,(uint8_t)0x98FCu);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x98FDu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9903u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9905u; return dd3_static_complete(rt,4u);
        }
        case 0x9905u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9907u,0x9970u)) c++; rt->state.cpu.pc=0x9970u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9907u; return dd3_static_complete(rt,2u);
        }
        case 0x9907u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x990Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x990Au: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x990Cu; return dd3_static_complete(rt,2u);
        }
        case 0x990Cu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x990Du; return dd3_static_complete(rt,2u);
        }
        case 0x990Du: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9910u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0x9910u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9912u,0x9913u)) c++; rt->state.cpu.pc=0x9913u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9912u; return dd3_static_complete(rt,2u);
        }
        case 0x9912u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9913u: {
            dd3_static_push8(rt,(uint8_t)(0x9915u>>8)); dd3_static_push8(rt,(uint8_t)0x9915u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x9916u: {
            uint8_t v=0x15u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9918u; return dd3_static_complete(rt,2u);
        }
        case 0x9918u: {
            dd3_static_push8(rt,(uint8_t)(0x991Au>>8)); dd3_static_push8(rt,(uint8_t)0x991Au);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x991Bu: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x991Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x991Eu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9920u; return dd3_static_complete(rt,2u);
        }
        case 0x9920u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9921u; return dd3_static_complete(rt,2u);
        }
        case 0x9921u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9922u; return dd3_static_complete(rt,2u);
        }
        case 0x9922u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9923u; return dd3_static_complete(rt,3u);
        }
        case 0x9923u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9924u; return dd3_static_complete(rt,2u);
        }
        case 0x9924u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9925u; return dd3_static_complete(rt,2u);
        }
        case 0x9925u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9927u; return dd3_static_complete(rt,2u);
        }
        case 0x9927u: {
            dd3_static_push8(rt,(uint8_t)(0x9929u>>8)); dd3_static_push8(rt,(uint8_t)0x9929u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x992Au: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x992Bu; return dd3_static_complete(rt,4u);
        }
        case 0x992Bu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x992Cu; return dd3_static_complete(rt,2u);
        }
        case 0x992Cu: {
            dd3_static_push8(rt,(uint8_t)(0x992Eu>>8)); dd3_static_push8(rt,(uint8_t)0x992Eu);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0x992Fu: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9932u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x9932u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9934u; return dd3_static_complete(rt,2u);
        }
        case 0x9934u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9935u; return dd3_static_complete(rt,2u);
        }
        case 0x9935u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9937u; return dd3_static_complete(rt,4u);
        }
        case 0x9937u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9939u; return dd3_static_complete(rt,2u);
        }
        case 0x9939u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x993Bu; return dd3_static_complete(rt,2u);
        }
        case 0x993Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0068u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x993Eu; return dd3_static_complete(rt,5u);
        }
        case 0x993Eu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9940u; return dd3_static_complete(rt,2u);
        }
        case 0x9940u: {
            uint8_t v=0x06u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9942u; return dd3_static_complete(rt,2u);
        }
        case 0x9942u: {
            dd3_static_write8(rt,(uint16_t)(0x007Du+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9945u; return dd3_static_complete(rt,5u);
        }
        case 0x9945u: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9948u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0x9948u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x994Au; return dd3_static_complete(rt,2u);
        }
        case 0x994Au: {
            dd3_static_write8(rt,(uint16_t)(0x004Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x994Du; return dd3_static_complete(rt,5u);
        }
        case 0x994Du: {
            uint8_t v=0x2Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x994Fu; return dd3_static_complete(rt,2u);
        }
        case 0x994Fu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9951u; return dd3_static_complete(rt,4u);
        }
        case 0x9951u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9953u; return dd3_static_complete(rt,2u);
        }
        case 0x9953u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9955u; return dd3_static_complete(rt,4u);
        }
        case 0x9955u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9957u; return dd3_static_complete(rt,2u);
        }
        case 0x9957u: {
            dd3_static_write8(rt,(uint16_t)(0x0421u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x995Au; return dd3_static_complete(rt,5u);
        }
        case 0x995Au: {
            dd3_static_write8(rt,(uint16_t)(0x0401u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x995Du; return dd3_static_complete(rt,5u);
        }
        case 0x995Du: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x995Fu; return dd3_static_complete(rt,2u);
        }
        case 0x995Fu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9961u; return dd3_static_complete(rt,3u);
        }
        case 0x9961u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9963u; return dd3_static_complete(rt,2u);
        }
        case 0x9963u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9965u; return dd3_static_complete(rt,3u);
        }
        case 0x9965u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9967u; return dd3_static_complete(rt,4u);
        }
        case 0x9967u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9969u,0x996Du)) c++; rt->state.cpu.pc=0x996Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9969u; return dd3_static_complete(rt,2u);
        }
        case 0x9969u: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x996Bu; return dd3_static_complete(rt,2u);
        }
        case 0x996Bu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x996Du; return dd3_static_complete(rt,3u);
        }
        case 0x996Du: {
            dd3_static_push8(rt,(uint8_t)(0x996Fu>>8)); dd3_static_push8(rt,(uint8_t)0x996Fu);
            rt->state.cpu.pc=0xA85Du; return dd3_static_complete(rt,6u);
        }
        case 0x9970u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9972u; return dd3_static_complete(rt,6u);
        }
        case 0x9972u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9974u,0x9977u)) c++; rt->state.cpu.pc=0x9977u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9974u; return dd3_static_complete(rt,2u);
        }
        case 0x9974u: {
            dd3_static_push8(rt,(uint8_t)(0x9976u>>8)); dd3_static_push8(rt,(uint8_t)0x9976u);
            rt->state.cpu.pc=0x99F7u; return dd3_static_complete(rt,6u);
        }
        case 0x9977u: {
            dd3_static_push8(rt,(uint8_t)(0x9979u>>8)); dd3_static_push8(rt,(uint8_t)0x9979u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x997Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x99F7u: {
            uint8_t v=0x57u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99F9u; return dd3_static_complete(rt,2u);
        }
        case 0x99F9u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x99FBu; return dd3_static_complete(rt,4u);
        }
        case 0x99FBu: {
            uint8_t v=0x2Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x99FDu; return dd3_static_complete(rt,2u);
        }
        case 0x99FDu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x99FFu; return dd3_static_complete(rt,4u);
        }
        case 0x99FFu: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A02u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x9A02u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A04u; return dd3_static_complete(rt,2u);
        }
        case 0x9A04u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9A05u; return dd3_static_complete(rt,2u);
        }
        case 0x9A05u: {
            uint16_t ea=(uint16_t)(0x0068u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A08u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0068u,ea)?1u:0u));
        }
        case 0x9A08u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A0Au; return dd3_static_complete(rt,2u);
        }
        case 0x9A0Au: {
            uint8_t v=0x25u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A0Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9A0Cu: {
            dd3_static_write8(rt,(uint16_t)(0x007Du+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A0Fu; return dd3_static_complete(rt,5u);
        }
        case 0x9A0Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9B22u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B24u; return dd3_static_complete(rt,4u);
        }
        case 0x9B24u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9B26u,0x9B59u)) c++; rt->state.cpu.pc=0x9B59u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9B26u; return dd3_static_complete(rt,2u);
        }
        case 0x9B26u: {
            dd3_static_push8(rt,(uint8_t)(0x9B28u>>8)); dd3_static_push8(rt,(uint8_t)0x9B28u);
            rt->state.cpu.pc=0xA906u; return dd3_static_complete(rt,6u);
        }
        case 0x9B29u: {
            uint8_t v=0x18u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B2Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9B2Bu: {
            dd3_static_push8(rt,(uint8_t)(0x9B2Du>>8)); dd3_static_push8(rt,(uint8_t)0x9B2Du);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x9B2Eu: {
            uint8_t v=0x46u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B30u; return dd3_static_complete(rt,2u);
        }
        case 0x9B30u: {
            dd3_static_push8(rt,(uint8_t)(0x9B32u>>8)); dd3_static_push8(rt,(uint8_t)0x9B32u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x9B33u: {
            dd3_static_push8(rt,(uint8_t)(0x9B35u>>8)); dd3_static_push8(rt,(uint8_t)0x9B35u);
            rt->state.cpu.pc=0x8239u; return dd3_static_complete(rt,6u);
        }
        case 0x9B36u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B38u; return dd3_static_complete(rt,2u);
        }
        case 0x9B38u: {
            dd3_static_write8(rt,(uint16_t)(0x0359u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B3Bu; return dd3_static_complete(rt,5u);
        }
        case 0x9B3Bu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B3Du; return dd3_static_complete(rt,2u);
        }
        case 0x9B3Du: {
            dd3_static_write8(rt,(uint16_t)(0x0350u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B40u; return dd3_static_complete(rt,5u);
        }
        case 0x9B40u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B42u; return dd3_static_complete(rt,2u);
        }
        case 0x9B42u: {
            dd3_static_write8(rt,(uint16_t)(0x033Eu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B45u; return dd3_static_complete(rt,5u);
        }
        case 0x9B45u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B47u; return dd3_static_complete(rt,2u);
        }
        case 0x9B47u: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B4Au; return dd3_static_complete(rt,5u);
        }
        case 0x9B4Au: {
            uint16_t ea=(uint16_t)(0x04B6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B4Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B6u,ea)?1u:0u));
        }
        case 0x9B4Du: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B4Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9B4Fu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B51u; return dd3_static_complete(rt,2u);
        }
        case 0x9B51u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B54u; return dd3_static_complete(rt,5u);
        }
        case 0x9B54u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B56u; return dd3_static_complete(rt,2u);
        }
        case 0x9B56u: {
            dd3_static_write8(rt,(uint16_t)(0x0068u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B59u; return dd3_static_complete(rt,5u);
        }
        case 0x9B59u: {
            uint8_t v=0x3Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B5Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9B5Bu: {
            dd3_static_push8(rt,(uint8_t)(0x9B5Du>>8)); dd3_static_push8(rt,(uint8_t)0x9B5Du);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x9B5Eu: {
            dd3_static_push8(rt,(uint8_t)(0x9B60u>>8)); dd3_static_push8(rt,(uint8_t)0x9B60u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x9B61u: {
            uint16_t ea=(uint16_t)(0x0060u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B64u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0060u,ea)?1u:0u));
        }
        case 0x9B64u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9B66u; return dd3_static_complete(rt,2u);
        }
        case 0x9B66u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9B68u,0x9B71u)) c++; rt->state.cpu.pc=0x9B71u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9B68u; return dd3_static_complete(rt,2u);
        }
        case 0x9B68u: {
            dd3_static_push8(rt,(uint8_t)(0x9B6Au>>8)); dd3_static_push8(rt,(uint8_t)0x9B6Au);
            rt->state.cpu.pc=0xA936u; return dd3_static_complete(rt,6u);
        }
        case 0x9B6Bu: {
            dd3_static_push8(rt,(uint8_t)(0x9B6Du>>8)); dd3_static_push8(rt,(uint8_t)0x9B6Du);
            rt->state.cpu.pc=0xA6B9u; return dd3_static_complete(rt,6u);
        }
        case 0x9B6Eu: {
            dd3_static_push8(rt,(uint8_t)(0x9B70u>>8)); dd3_static_push8(rt,(uint8_t)0x9B70u);
            rt->state.cpu.pc=0xA64Eu; return dd3_static_complete(rt,6u);
        }
        case 0x9B71u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9B7Fu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B81u; return dd3_static_complete(rt,4u);
        }
        case 0x9B81u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9B83u,0x9B91u)) c++; rt->state.cpu.pc=0x9B91u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9B83u; return dd3_static_complete(rt,2u);
        }
        case 0x9B83u: {
            dd3_static_push8(rt,(uint8_t)(0x9B85u>>8)); dd3_static_push8(rt,(uint8_t)0x9B85u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x9B86u: {
            uint8_t v=0x38u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B88u; return dd3_static_complete(rt,2u);
        }
        case 0x9B88u: {
            dd3_static_push8(rt,(uint8_t)(0x9B8Au>>8)); dd3_static_push8(rt,(uint8_t)0x9B8Au);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x9B8Bu: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B8Du; return dd3_static_complete(rt,4u);
        }
        case 0x9B8Du: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B8Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9B8Fu: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B91u; return dd3_static_complete(rt,4u);
        }
        case 0x9B91u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B93u; return dd3_static_complete(rt,2u);
        }
        case 0x9B93u: {
            dd3_static_push8(rt,(uint8_t)(0x9B95u>>8)); dd3_static_push8(rt,(uint8_t)0x9B95u);
            rt->state.cpu.pc=0xA612u; return dd3_static_complete(rt,6u);
        }
        case 0x9B96u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B98u; return dd3_static_complete(rt,2u);
        }
        case 0x9B98u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B9Au; return dd3_static_complete(rt,4u);
        }
        case 0x9B9Au: {
            dd3_static_push8(rt,(uint8_t)(0x9B9Cu>>8)); dd3_static_push8(rt,(uint8_t)0x9B9Cu);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x9B9Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9B9Eu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BA0u; return dd3_static_complete(rt,4u);
        }
        case 0x9BA0u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9BA2u,0x9BD7u)) c++; rt->state.cpu.pc=0x9BD7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9BA2u; return dd3_static_complete(rt,2u);
        }
        case 0x9BA2u: {
            dd3_static_push8(rt,(uint8_t)(0x9BA4u>>8)); dd3_static_push8(rt,(uint8_t)0x9BA4u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x9BA5u: {
            uint8_t v=0x15u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BA7u; return dd3_static_complete(rt,2u);
        }
        case 0x9BA7u: {
            dd3_static_push8(rt,(uint8_t)(0x9BA9u>>8)); dd3_static_push8(rt,(uint8_t)0x9BA9u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x9BAAu: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BADu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x9BADu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BAFu; return dd3_static_complete(rt,2u);
        }
        case 0x9BAFu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9BB0u; return dd3_static_complete(rt,2u);
        }
        case 0x9BB0u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BB1u; return dd3_static_complete(rt,2u);
        }
        case 0x9BB1u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BB2u; return dd3_static_complete(rt,3u);
        }
        case 0x9BB2u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BB3u; return dd3_static_complete(rt,2u);
        }
        case 0x9BB3u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9BB4u; return dd3_static_complete(rt,2u);
        }
        case 0x9BB4u: {
            uint8_t v=0x15u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BB6u; return dd3_static_complete(rt,2u);
        }
        case 0x9BB6u: {
            dd3_static_push8(rt,(uint8_t)(0x9BB8u>>8)); dd3_static_push8(rt,(uint8_t)0x9BB8u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x9BB9u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BBAu; return dd3_static_complete(rt,4u);
        }
        case 0x9BBAu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9BBBu; return dd3_static_complete(rt,2u);
        }
        case 0x9BBBu: {
            uint8_t v=0x2Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BBDu; return dd3_static_complete(rt,2u);
        }
        case 0x9BBDu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9BBFu; return dd3_static_complete(rt,4u);
        }
        case 0x9BBFu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BC1u; return dd3_static_complete(rt,2u);
        }
        case 0x9BC1u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BC4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0x9BC4u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BC6u; return dd3_static_complete(rt,2u);
        }
        case 0x9BC6u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9BC7u; return dd3_static_complete(rt,2u);
        }
        case 0x9BC7u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BC9u; return dd3_static_complete(rt,3u);
        }
        case 0x9BC9u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BCBu; return dd3_static_complete(rt,4u);
        }
        case 0x9BCBu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BCDu; return dd3_static_complete(rt,2u);
        }
        case 0x9BCDu: {
            dd3_static_write8(rt,(uint16_t)(0x0068u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9BD0u; return dd3_static_complete(rt,5u);
        }
        case 0x9BD0u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BD2u; return dd3_static_complete(rt,2u);
        }
        case 0x9BD2u: {
            uint8_t v=0x25u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BD4u; return dd3_static_complete(rt,2u);
        }
        case 0x9BD4u: {
            dd3_static_write8(rt,(uint16_t)(0x007Du+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x9BD7u; return dd3_static_complete(rt,5u);
        }
        case 0x9BD7u: {
            dd3_static_push8(rt,(uint8_t)(0x9BD9u>>8)); dd3_static_push8(rt,(uint8_t)0x9BD9u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x9BDAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9BDBu: {
            uint8_t v=0x06u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BDDu; return dd3_static_complete(rt,2u);
        }
        case 0x9BDDu: {
            dd3_static_push8(rt,(uint8_t)(0x9BDFu>>8)); dd3_static_push8(rt,(uint8_t)0x9BDFu);
            rt->state.cpu.pc=0x95ADu; return dd3_static_complete(rt,6u);
        }
        case 0x9BE0u: {
            dd3_static_push8(rt,(uint8_t)(0x9BE2u>>8)); dd3_static_push8(rt,(uint8_t)0x9BE2u);
            rt->state.cpu.pc=0x8460u; return dd3_static_complete(rt,6u);
        }
        case 0x9BE3u: {
            uint16_t ea=(uint16_t)(0x0347u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BE6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0347u,ea)?1u:0u));
        }
        case 0x9BE6u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9BE8u,0x9BECu)) c++; rt->state.cpu.pc=0x9BECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9BE8u; return dd3_static_complete(rt,2u);
        }
        case 0x9BE8u: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9BEAu; return dd3_static_complete(rt,2u);
        }
        case 0x9BEAu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9BECu,0x9BF0u)) c++; rt->state.cpu.pc=0x9BF0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9BECu; return dd3_static_complete(rt,2u);
        }
        case 0x9BECu: {
            uint8_t v=0x3Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BEEu; return dd3_static_complete(rt,2u);
        }
        case 0x9BEEu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9BF0u; return dd3_static_complete(rt,4u);
        }
        case 0x9BF0u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9C07u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C09u; return dd3_static_complete(rt,4u);
        }
        case 0x9C09u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9C0Bu,0x9C14u)) c++; rt->state.cpu.pc=0x9C14u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C0Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9C0Bu: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C0Du; return dd3_static_complete(rt,4u);
        }
        case 0x9C0Du: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C0Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9C0Fu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C11u; return dd3_static_complete(rt,2u);
        }
        case 0x9C11u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9C14u; return dd3_static_complete(rt,5u);
        }
        case 0x9C14u: {
            dd3_static_push8(rt,(uint8_t)(0x9C16u>>8)); dd3_static_push8(rt,(uint8_t)0x9C16u);
            rt->state.cpu.pc=0x8326u; return dd3_static_complete(rt,6u);
        }
        case 0x9C17u: {
            uint16_t ea=(uint16_t)(0x039Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C1Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Du,ea)?1u:0u));
        }
        case 0x9C1Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9C1Cu,0x9C36u)) c++; rt->state.cpu.pc=0x9C36u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C1Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9C1Cu: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C1Eu; return dd3_static_complete(rt,4u);
        }
        case 0x9C1Eu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9C20u,0x9C28u)) c++; rt->state.cpu.pc=0x9C28u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C20u; return dd3_static_complete(rt,2u);
        }
        case 0x9C20u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C22u; return dd3_static_complete(rt,2u);
        }
        case 0x9C22u: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9C24u; return dd3_static_complete(rt,4u);
        }
        case 0x9C24u: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9C26u; return dd3_static_complete(rt,4u);
        }
        case 0x9C26u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9C28u,0x9C36u)) c++; rt->state.cpu.pc=0x9C36u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C28u; return dd3_static_complete(rt,2u);
        }
        case 0x9C28u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C2Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0x9C2Bu: {
            uint8_t v=0x60u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9C2Du; return dd3_static_complete(rt,2u);
        }
        case 0x9C2Du: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9C2Fu,0x9C3Eu)) c++; rt->state.cpu.pc=0x9C3Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C2Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9C2Fu: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C32u; return dd3_static_complete(rt,4u);
        }
        case 0x9C32u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C34u; return dd3_static_complete(rt,2u);
        }
        case 0x9C34u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9C36u,0x9C3Au)) c++; rt->state.cpu.pc=0x9C3Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C36u; return dd3_static_complete(rt,2u);
        }
        case 0x9C36u: {
            dd3_static_push8(rt,(uint8_t)(0x9C38u>>8)); dd3_static_push8(rt,(uint8_t)0x9C38u);
            rt->state.cpu.pc=0x822Au; return dd3_static_complete(rt,6u);
        }
        case 0x9C39u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9C3Au: {
            uint8_t v=0x5Du;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C3Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9C3Cu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9C3Eu; return dd3_static_complete(rt,4u);
        }
        case 0x9C3Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9C3Fu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C41u; return dd3_static_complete(rt,4u);
        }
        case 0x9C41u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9C43u,0x9C50u)) c++; rt->state.cpu.pc=0x9C50u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C43u; return dd3_static_complete(rt,2u);
        }
        case 0x9C43u: {
            dd3_static_push8(rt,(uint8_t)(0x9C45u>>8)); dd3_static_push8(rt,(uint8_t)0x9C45u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x9C46u: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C48u; return dd3_static_complete(rt,2u);
        }
        case 0x9C48u: {
            dd3_static_push8(rt,(uint8_t)(0x9C4Au>>8)); dd3_static_push8(rt,(uint8_t)0x9C4Au);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0x9C4Bu: {
            uint8_t v=0x35u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C4Du; return dd3_static_complete(rt,2u);
        }
        case 0x9C4Du: {
            dd3_static_push8(rt,(uint8_t)(0x9C4Fu>>8)); dd3_static_push8(rt,(uint8_t)0x9C4Fu);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x9C50u: {
            uint8_t v=0x2Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C52u; return dd3_static_complete(rt,2u);
        }
        case 0x9C52u: {
            dd3_static_push8(rt,(uint8_t)(0x9C54u>>8)); dd3_static_push8(rt,(uint8_t)0x9C54u);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x9C55u: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C57u; return dd3_static_complete(rt,4u);
        }
        case 0x9C57u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C59u; return dd3_static_complete(rt,2u);
        }
        case 0x9C59u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9C5Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9C5Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9C5Du,0x9C65u)) c++; rt->state.cpu.pc=0x9C65u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C5Du; return dd3_static_complete(rt,2u);
        }
        case 0x9C5Du: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C5Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9C5Fu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9C61u; return dd3_static_complete(rt,4u);
        }
        case 0x9C61u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C63u; return dd3_static_complete(rt,2u);
        }
        case 0x9C63u: {
            dd3_static_write8(rt,(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9C65u; return dd3_static_complete(rt,4u);
        }
        case 0x9C65u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9DA2u: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DA4u; return dd3_static_complete(rt,2u);
        }
        case 0x9DA4u: {
            uint16_t ea=(uint16_t)(0x003Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DA7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Cu,ea)?1u:0u));
        }
        case 0x9DA7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9DA9u,0x9DB2u)) c++; rt->state.cpu.pc=0x9DB2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9DA9u; return dd3_static_complete(rt,2u);
        }
        case 0x9DA9u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9DAAu; return dd3_static_complete(rt,2u);
        }
        case 0x9DAAu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x9DACu; return dd3_static_complete(rt,2u);
        }
        case 0x9DACu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9DAEu,0x9DA4u)) c++; rt->state.cpu.pc=0x9DA4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9DAEu; return dd3_static_complete(rt,2u);
        }
        case 0x9DAEu: {
            uint8_t v=0x07u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9DB0u; return dd3_static_complete(rt,2u);
        }
        case 0x9DB0u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x9DB1u; return dd3_static_complete(rt,2u);
        }
        case 0x9DB1u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9DB2u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x9DB3u; return dd3_static_complete(rt,2u);
        }
        case 0x9DB3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9E69u: {
            uint16_t ea=0xF4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E6Bu; return dd3_static_complete(rt,3u);
        }
        case 0x9E6Bu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9E6Du; return dd3_static_complete(rt,2u);
        }
        case 0x9E6Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9E6Fu,0x9E88u)) c++; rt->state.cpu.pc=0x9E88u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9E6Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9E6Fu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E71u; return dd3_static_complete(rt,4u);
        }
        case 0x9E71u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9E73u,0x9E7Eu)) c++; rt->state.cpu.pc=0x9E7Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9E73u; return dd3_static_complete(rt,2u);
        }
        case 0x9E73u: {
            dd3_static_push8(rt,(uint8_t)(0x9E75u>>8)); dd3_static_push8(rt,(uint8_t)0x9E75u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x9E76u: {
            dd3_static_push8(rt,(uint8_t)(0x9E78u>>8)); dd3_static_push8(rt,(uint8_t)0x9E78u);
            rt->state.cpu.pc=0x9F62u; return dd3_static_complete(rt,6u);
        }
        case 0x9E79u: {
            uint8_t v=0x25u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E7Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9E7Bu: {
            dd3_static_push8(rt,(uint8_t)(0x9E7Du>>8)); dd3_static_push8(rt,(uint8_t)0x9E7Du);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x9E7Eu: {
            uint8_t v=0x09u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E80u; return dd3_static_complete(rt,2u);
        }
        case 0x9E80u: {
            rt->state.cpu.pc=0xA03Au; return dd3_static_complete(rt,3u);
        }
        case 0x9E88u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E8Au; return dd3_static_complete(rt,4u);
        }
        case 0x9E8Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9E8Cu,0x9EBFu)) c++; rt->state.cpu.pc=0x9EBFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9E8Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9E8Cu: {
            dd3_static_push8(rt,(uint8_t)(0x9E8Eu>>8)); dd3_static_push8(rt,(uint8_t)0x9E8Eu);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x9E8Fu: {
            dd3_static_push8(rt,(uint8_t)(0x9E91u>>8)); dd3_static_push8(rt,(uint8_t)0x9E91u);
            rt->state.cpu.pc=0x9F62u; return dd3_static_complete(rt,6u);
        }
        case 0x9E92u: {
            uint8_t v=0x25u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E94u; return dd3_static_complete(rt,2u);
        }
        case 0x9E94u: {
            dd3_static_push8(rt,(uint8_t)(0x9E96u>>8)); dd3_static_push8(rt,(uint8_t)0x9E96u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0x9E97u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E99u; return dd3_static_complete(rt,2u);
        }
        case 0x9E99u: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9E9Bu; return dd3_static_complete(rt,4u);
        }
        case 0x9E9Bu: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E9Du; return dd3_static_complete(rt,3u);
        }
        case 0x9E9Du: {
            uint8_t v=0x0Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9E9Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9E9Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9EA1u,0x9EBFu)) c++; rt->state.cpu.pc=0x9EBFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EA1u; return dd3_static_complete(rt,2u);
        }
        case 0x9EA1u: {
            uint8_t v=0x81u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EA3u; return dd3_static_complete(rt,2u);
        }
        case 0x9EA3u: {
            dd3_static_write8(rt,0x3Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EA5u; return dd3_static_complete(rt,3u);
        }
        case 0x9EA5u: {
            uint8_t v=0x15u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EA7u; return dd3_static_complete(rt,2u);
        }
        case 0x9EA7u: {
            dd3_static_write8(rt,0x80u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EA9u; return dd3_static_complete(rt,3u);
        }
        case 0x9EA9u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EABu; return dd3_static_complete(rt,2u);
        }
        case 0x9EABu: {
            dd3_static_write8(rt,0x77u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EADu; return dd3_static_complete(rt,3u);
        }
        case 0x9EADu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EAFu; return dd3_static_complete(rt,2u);
        }
        case 0x9EAFu: {
            dd3_static_write8(rt,0xC4u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EB1u; return dd3_static_complete(rt,3u);
        }
        case 0x9EB1u: {
            dd3_static_write8(rt,0xD8u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EB3u; return dd3_static_complete(rt,3u);
        }
        case 0x9EB3u: {
            uint8_t v=0xEBu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EB5u; return dd3_static_complete(rt,2u);
        }
        case 0x9EB5u: {
            dd3_static_write8(rt,0xBAu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EB7u; return dd3_static_complete(rt,3u);
        }
        case 0x9EB7u: {
            uint8_t v=0x6Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EB9u; return dd3_static_complete(rt,2u);
        }
        case 0x9EB9u: {
            dd3_static_write8(rt,0xCEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EBBu; return dd3_static_complete(rt,3u);
        }
        case 0x9EBBu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EBDu; return dd3_static_complete(rt,2u);
        }
        case 0x9EBDu: {
            dd3_static_write8(rt,0x47u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EBFu; return dd3_static_complete(rt,3u);
        }
        case 0x9EBFu: {
            uint16_t ea=(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EC1u; return dd3_static_complete(rt,4u);
        }
        case 0x9EC1u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EC3u; return dd3_static_complete(rt,2u);
        }
        case 0x9EC3u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9EC5u; return dd3_static_complete(rt,2u);
        }
        case 0x9EC5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9EC7u,0x9F0Bu)) c++; rt->state.cpu.pc=0x9F0Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EC7u; return dd3_static_complete(rt,2u);
        }
        case 0x9EC7u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EC9u; return dd3_static_complete(rt,3u);
        }
        case 0x9EC9u: {
            uint8_t v=0x0Cu;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x9ECBu; return dd3_static_complete(rt,2u);
        }
        case 0x9ECBu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9ECDu,0x9ED1u)) c++; rt->state.cpu.pc=0x9ED1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9ECDu; return dd3_static_complete(rt,2u);
        }
        case 0x9ECDu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9ECFu; return dd3_static_complete(rt,2u);
        }
        case 0x9ECFu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9ED1u,0x9F15u)) c++; rt->state.cpu.pc=0x9F15u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9ED1u; return dd3_static_complete(rt,2u);
        }
        case 0x9ED1u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9ED3u; return dd3_static_complete(rt,2u);
        }
        case 0x9ED3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9ED5u,0x9ED8u)) c++; rt->state.cpu.pc=0x9ED8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9ED5u; return dd3_static_complete(rt,2u);
        }
        case 0x9ED5u: {
            rt->state.cpu.pc=0x9E7Eu; return dd3_static_complete(rt,3u);
        }
        case 0x9ED8u: {
            uint8_t v=0x0Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EDAu; return dd3_static_complete(rt,2u);
        }
        case 0x9EDAu: {
            dd3_static_push8(rt,(uint8_t)(0x9EDCu>>8)); dd3_static_push8(rt,(uint8_t)0x9EDCu);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0x9EDDu: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EDFu; return dd3_static_complete(rt,4u);
        }
        case 0x9EDFu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EE1u; return dd3_static_complete(rt,2u);
        }
        case 0x9EE1u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9EE3u,0x9F3Eu)) c++; rt->state.cpu.pc=0x9F3Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EE3u; return dd3_static_complete(rt,2u);
        }
        case 0x9EE3u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9EE5u; return dd3_static_complete(rt,2u);
        }
        case 0x9EE5u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9EE7u,0x9F58u)) c++; rt->state.cpu.pc=0x9F58u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EE7u; return dd3_static_complete(rt,2u);
        }
        case 0x9EE7u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EE9u; return dd3_static_complete(rt,3u);
        }
        case 0x9EE9u: {
            uint8_t v=0x0Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9EEBu; return dd3_static_complete(rt,2u);
        }
        case 0x9EEBu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9EEDu,0x9F34u)) c++; rt->state.cpu.pc=0x9F34u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EEDu; return dd3_static_complete(rt,2u);
        }
        case 0x9EEDu: {
            uint16_t ea=(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EEFu; return dd3_static_complete(rt,4u);
        }
        case 0x9EEFu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EF1u; return dd3_static_complete(rt,2u);
        }
        case 0x9EF1u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9EF3u; return dd3_static_complete(rt,2u);
        }
        case 0x9EF3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9EF5u,0x9F0Cu)) c++; rt->state.cpu.pc=0x9F0Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EF5u; return dd3_static_complete(rt,2u);
        }
        case 0x9EF5u: {
            uint8_t v=0x15u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EF7u; return dd3_static_complete(rt,2u);
        }
        case 0x9EF7u: {
            dd3_static_write8(rt,0x80u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EF9u; return dd3_static_complete(rt,3u);
        }
        case 0x9EF9u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EFBu; return dd3_static_complete(rt,2u);
        }
        case 0x9EFBu: {
            dd3_static_write8(rt,(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9EFDu; return dd3_static_complete(rt,4u);
        }
        case 0x9EFDu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9EFFu; return dd3_static_complete(rt,4u);
        }
        case 0x9EFFu: {
            uint8_t v=0x09u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F01u; return dd3_static_complete(rt,2u);
        }
        case 0x9F01u: {
            dd3_static_write8(rt,0x7Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F03u; return dd3_static_complete(rt,3u);
        }
        case 0x9F03u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F05u; return dd3_static_complete(rt,2u);
        }
        case 0x9F05u: {
            dd3_static_write8(rt,0xBAu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F07u; return dd3_static_complete(rt,3u);
        }
        case 0x9F07u: {
            uint8_t v=0x90u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F09u; return dd3_static_complete(rt,2u);
        }
        case 0x9F09u: {
            dd3_static_write8(rt,0xCEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F0Bu; return dd3_static_complete(rt,3u);
        }
        case 0x9F0Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F0Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F0Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9F0Eu: {
            dd3_static_write8(rt,0x80u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F10u; return dd3_static_complete(rt,3u);
        }
        case 0x9F10u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F12u; return dd3_static_complete(rt,2u);
        }
        case 0x9F12u: {
            dd3_static_write8(rt,(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F14u; return dd3_static_complete(rt,4u);
        }
        case 0x9F14u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F15u: {
            uint16_t ea=(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F17u; return dd3_static_complete(rt,4u);
        }
        case 0x9F17u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9F19u,0x9F25u)) c++; rt->state.cpu.pc=0x9F25u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F19u; return dd3_static_complete(rt,2u);
        }
        case 0x9F19u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F1Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9F1Bu: {
            dd3_static_write8(rt,(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F1Du; return dd3_static_complete(rt,4u);
        }
        case 0x9F1Du: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F1Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9F1Fu: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F21u; return dd3_static_complete(rt,4u);
        }
        case 0x9F21u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F23u; return dd3_static_complete(rt,2u);
        }
        case 0x9F23u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F25u; return dd3_static_complete(rt,4u);
        }
        case 0x9F25u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9F27u; return dd3_static_complete(rt,6u);
        }
        case 0x9F27u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9F29u,0x9F33u)) c++; rt->state.cpu.pc=0x9F33u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F29u; return dd3_static_complete(rt,2u);
        }
        case 0x9F29u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F2Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9F2Bu: {
            dd3_static_write8(rt,0x80u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F2Du; return dd3_static_complete(rt,3u);
        }
        case 0x9F2Du: {
            dd3_static_write8(rt,0x47u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F2Fu; return dd3_static_complete(rt,3u);
        }
        case 0x9F2Fu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F31u; return dd3_static_complete(rt,2u);
        }
        case 0x9F31u: {
            dd3_static_write8(rt,(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F33u; return dd3_static_complete(rt,4u);
        }
        case 0x9F33u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F34u: {
            uint16_t ea=(uint16_t)(0x04C8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F37u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04C8u,ea)?1u:0u));
        }
        case 0x9F37u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9F38u; return dd3_static_complete(rt,2u);
        }
        case 0x9F38u: {
            uint16_t ea=(uint16_t)(0x9F5Fu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F3Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9F5Fu,ea)?1u:0u));
        }
        case 0x9F3Bu: {
            dd3_static_write8(rt,0x80u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F3Du; return dd3_static_complete(rt,3u);
        }
        case 0x9F3Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F3Eu: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F40u; return dd3_static_complete(rt,2u);
        }
        case 0x9F40u: {
            dd3_static_write8(rt,(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F42u; return dd3_static_complete(rt,4u);
        }
        case 0x9F42u: {
            uint16_t ea=(uint16_t)(0x04C8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9F45u; return dd3_static_complete(rt,7u);
        }
        case 0x9F45u: {
            uint16_t ea=(uint16_t)(0x04C8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F48u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04C8u,ea)?1u:0u));
        }
        case 0x9F48u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9F4Au; return dd3_static_complete(rt,2u);
        }
        case 0x9F4Au: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9F4Cu,0x9F58u)) c++; rt->state.cpu.pc=0x9F58u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F4Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9F4Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F4Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9F4Eu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F50u; return dd3_static_complete(rt,4u);
        }
        case 0x9F50u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F52u; return dd3_static_complete(rt,2u);
        }
        case 0x9F52u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F54u; return dd3_static_complete(rt,4u);
        }
        case 0x9F54u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F56u; return dd3_static_complete(rt,2u);
        }
        case 0x9F56u: {
            dd3_static_write8(rt,(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F58u; return dd3_static_complete(rt,4u);
        }
        case 0x9F58u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F62u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F64u; return dd3_static_complete(rt,2u);
        }
        case 0x9F64u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F67u; return dd3_static_complete(rt,5u);
        }
        case 0x9F67u: {
            uint8_t v=0x1Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F69u; return dd3_static_complete(rt,2u);
        }
        case 0x9F69u: {
            dd3_static_write8(rt,0x06DDu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F6Cu; return dd3_static_complete(rt,4u);
        }
        case 0x9F6Cu: {
            dd3_static_write8(rt,0x06DEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F6Fu; return dd3_static_complete(rt,4u);
        }
        case 0x9F6Fu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F71u; return dd3_static_complete(rt,2u);
        }
        case 0x9F71u: {
            dd3_static_write8(rt,0x06DAu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F74u; return dd3_static_complete(rt,4u);
        }
        case 0x9F74u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F76u; return dd3_static_complete(rt,2u);
        }
        case 0x9F76u: {
            dd3_static_write8(rt,(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F78u; return dd3_static_complete(rt,4u);
        }
        case 0x9F78u: {
            dd3_static_write8(rt,(uint16_t)(0x04C8u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F7Bu; return dd3_static_complete(rt,5u);
        }
        case 0x9F7Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F7Cu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F7Eu; return dd3_static_complete(rt,4u);
        }
        case 0x9F7Eu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9F80u,0x9F91u)) c++; rt->state.cpu.pc=0x9F91u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F80u; return dd3_static_complete(rt,2u);
        }
        case 0x9F80u: {
            dd3_static_push8(rt,(uint8_t)(0x9F82u>>8)); dd3_static_push8(rt,(uint8_t)0x9F82u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0x9F83u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F85u; return dd3_static_complete(rt,4u);
        }
        case 0x9F85u: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F87u; return dd3_static_complete(rt,2u);
        }
        case 0x9F87u: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F89u; return dd3_static_complete(rt,4u);
        }
        case 0x9F89u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F8Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9F8Bu: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F8Du; return dd3_static_complete(rt,4u);
        }
        case 0x9F8Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F8Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9F8Fu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F91u; return dd3_static_complete(rt,4u);
        }
        case 0x9F91u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9F93u; return dd3_static_complete(rt,6u);
        }
        case 0x9F93u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9F95u,0x9FA2u)) c++; rt->state.cpu.pc=0x9FA2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F95u; return dd3_static_complete(rt,2u);
        }
        case 0x9F95u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F97u; return dd3_static_complete(rt,4u);
        }
        case 0x9F97u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x9F98u; return dd3_static_complete(rt,2u);
        }
        case 0x9F98u: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x9F9Au; return dd3_static_complete(rt,2u);
        }
        case 0x9F9Au: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9F9Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9F9Bu: {
            uint16_t ea=(uint16_t)(0x9FACu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F9Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9FACu,ea)?1u:0u));
        }
        case 0x9F9Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9FA0u,0x9FA2u)) c++; rt->state.cpu.pc=0x9FA2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9FA0u; return dd3_static_complete(rt,2u);
        }
        case 0x9FA0u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x9FA2u; return dd3_static_complete(rt,4u);
        }
        case 0x9FA2u: {
            uint16_t ea=(uint16_t)(0x0318u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9FA5u; return dd3_static_complete(rt,7u);
        }
        case 0x9FA5u: {
            dd3_static_push8(rt,(uint8_t)(0x9FA7u>>8)); dd3_static_push8(rt,(uint8_t)0x9FA7u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0x9FA8u: {
            dd3_static_push8(rt,(uint8_t)(0x9FAAu>>8)); dd3_static_push8(rt,(uint8_t)0x9FAAu);
            rt->state.cpu.pc=0xA6B9u; return dd3_static_complete(rt,6u);
        }
        case 0x9FABu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9FFAu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FFCu; return dd3_static_complete(rt,4u);
        }
        case 0x9FFCu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9FFEu,0xA012u)) c++; rt->state.cpu.pc=0xA012u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9FFEu; return dd3_static_complete(rt,2u);
        }
        case 0x9FFEu: {
            dd3_static_push8(rt,(uint8_t)(0xA000u>>8)); dd3_static_push8(rt,(uint8_t)0xA000u);
            rt->state.cpu.pc=0xA900u; return dd3_static_complete(rt,6u);
        }
        case 0xA010u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA012u; return dd3_static_complete(rt,4u);
        }
        case 0xA012u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA014u,0xA019u)) c++; rt->state.cpu.pc=0xA019u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA014u; return dd3_static_complete(rt,2u);
        }
        case 0xA014u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.x);
            rt->state.cpu.pc=0xA016u; return dd3_static_complete(rt,3u);
        }
        case 0xA016u: {
            dd3_static_push8(rt,(uint8_t)(0xA018u>>8)); dd3_static_push8(rt,(uint8_t)0xA018u);
            rt->state.cpu.pc=0x805Cu; return dd3_static_complete(rt,6u);
        }
        case 0xA019u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA01Au; return dd3_static_complete(rt,2u);
        }
        case 0xA01Au: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xA01Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA01Cu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA01Eu,0xA010u)) c++; rt->state.cpu.pc=0xA010u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA01Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA01Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA020u; return dd3_static_complete(rt,2u);
        }
        case 0xA020u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA022u; return dd3_static_complete(rt,4u);
        }
        case 0xA022u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA024u,0xA053u)) c++; rt->state.cpu.pc=0xA053u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA024u; return dd3_static_complete(rt,2u);
        }
        case 0xA024u: {
            uint16_t ea=(uint16_t)(0x0405u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA027u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0405u,ea)?1u:0u));
        }
        case 0xA027u: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA029u; return dd3_static_complete(rt,2u);
        }
        case 0xA029u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA02Bu,0xA053u)) c++; rt->state.cpu.pc=0xA053u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA02Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA02Bu: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA02Du; return dd3_static_complete(rt,4u);
        }
        case 0xA02Du: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA02Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA02Fu: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA031u; return dd3_static_complete(rt,2u);
        }
        case 0xA031u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA033u,0xA040u)) c++; rt->state.cpu.pc=0xA040u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA033u; return dd3_static_complete(rt,2u);
        }
        case 0xA033u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA035u; return dd3_static_complete(rt,4u);
        }
        case 0xA035u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA037u; return dd3_static_complete(rt,2u);
        }
        case 0xA037u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA039u; return dd3_static_complete(rt,2u);
        }
        case 0xA039u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA03Bu,0xA050u)) c++; rt->state.cpu.pc=0xA050u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA03Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA03Bu: {
            uint16_t ea=(uint16_t)(0x0407u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA03Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0407u,ea)?1u:0u));
        }
        case 0xA03Eu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA040u; return dd3_static_complete(rt,4u);
        }
        case 0xA040u: {
            uint16_t ea=(uint16_t)(0x0405u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA043u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0405u,ea)?1u:0u));
        }
        case 0xA043u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA045u; return dd3_static_complete(rt,2u);
        }
        case 0xA045u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA047u,0xA050u)) c++; rt->state.cpu.pc=0xA050u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA047u; return dd3_static_complete(rt,2u);
        }
        case 0xA047u: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA049u; return dd3_static_complete(rt,4u);
        }
        case 0xA049u: {
            dd3_static_write8(rt,(uint16_t)(0x0407u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA04Cu; return dd3_static_complete(rt,5u);
        }
        case 0xA04Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA04Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA04Eu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA050u; return dd3_static_complete(rt,4u);
        }
        case 0xA050u: {
            uint16_t ea=(uint16_t)(0x0405u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA053u; return dd3_static_complete(rt,7u);
        }
        case 0xA053u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA054u; return dd3_static_complete(rt,2u);
        }
        case 0xA054u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xA056u; return dd3_static_complete(rt,2u);
        }
        case 0xA056u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA058u,0xA020u)) c++; rt->state.cpu.pc=0xA020u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA058u; return dd3_static_complete(rt,2u);
        }
        case 0xA058u: {
            dd3_static_push8(rt,(uint8_t)(0xA05Au>>8)); dd3_static_push8(rt,(uint8_t)0xA05Au);
            rt->state.cpu.pc=0xA9CAu; return dd3_static_complete(rt,6u);
        }
        case 0xA05Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA612u: {
            dd3_static_write8(rt,(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA614u; return dd3_static_complete(rt,4u);
        }
        case 0xA614u: {
            dd3_static_push8(rt,(uint8_t)(0xA616u>>8)); dd3_static_push8(rt,(uint8_t)0xA616u);
            rt->state.cpu.pc=0x8319u; return dd3_static_complete(rt,6u);
        }
        case 0xA617u: {
            rt->state.cpu.pc=0x863Fu; return dd3_static_complete(rt,3u);
        }
        case 0xA63Du: {
            (void)rt;
            rt->state.cpu.pc=0xA63Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA63Eu: {
            uint16_t ea=0x20u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA640u; return dd3_static_complete(rt,5u);
        }
        case 0xA640u: {
            uint16_t ea=(uint16_t)(0x60A6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA643u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x60A6u,ea)?1u:0u));
        }
        case 0xA643u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA645u; return dd3_static_complete(rt,4u);
        }
        case 0xA645u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA647u,0xA6A0u)) c++; rt->state.cpu.pc=0xA6A0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA647u; return dd3_static_complete(rt,2u);
        }
        case 0xA647u: {
            dd3_static_push8(rt,(uint8_t)(0xA649u>>8)); dd3_static_push8(rt,(uint8_t)0xA649u);
            rt->state.cpu.pc=0xA906u; return dd3_static_complete(rt,6u);
        }
        case 0xA64Au: {
            uint8_t v=0x0Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA64Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA64Cu: {
            dd3_static_push8(rt,(uint8_t)(0xA64Eu>>8)); dd3_static_push8(rt,(uint8_t)0xA64Eu);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0xA64Fu: {
            dd3_static_push8(rt,(uint8_t)(0xA651u>>8)); dd3_static_push8(rt,(uint8_t)0xA651u);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0xA652u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA654u; return dd3_static_complete(rt,4u);
        }
        case 0xA654u: {
            uint8_t v=0x1Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA656u; return dd3_static_complete(rt,2u);
        }
        case 0xA656u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA658u; return dd3_static_complete(rt,4u);
        }
        case 0xA658u: {
            uint8_t v=0x31u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA65Au; return dd3_static_complete(rt,2u);
        }
        case 0xA65Au: {
            dd3_static_push8(rt,(uint8_t)(0xA65Cu>>8)); dd3_static_push8(rt,(uint8_t)0xA65Cu);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0xA65Du: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA660u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0xA660u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA662u; return dd3_static_complete(rt,2u);
        }
        case 0xA662u: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA664u; return dd3_static_complete(rt,4u);
        }
        case 0xA6A0u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA6A2u; return dd3_static_complete(rt,6u);
        }
        case 0xA6A2u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6A4u; return dd3_static_complete(rt,4u);
        }
        case 0xA6A4u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA6A6u; return dd3_static_complete(rt,2u);
        }
        case 0xA6A6u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA6A8u,0xA6B3u)) c++; rt->state.cpu.pc=0xA6B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6A8u; return dd3_static_complete(rt,2u);
        }
        case 0xA6A8u: {
            uint8_t v=0x0Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6AAu; return dd3_static_complete(rt,2u);
        }
        case 0xA6AAu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA6ACu; return dd3_static_complete(rt,4u);
        }
        case 0xA6ACu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xA6AEu; return dd3_static_complete(rt,2u);
        }
        case 0xA6AEu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA6B0u,0xA6B3u)) c++; rt->state.cpu.pc=0xA6B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6B0u; return dd3_static_complete(rt,2u);
        }
        case 0xA6B0u: {
            dd3_static_push8(rt,(uint8_t)(0xA6B2u>>8)); dd3_static_push8(rt,(uint8_t)0xA6B2u);
            rt->state.cpu.pc=0x8319u; return dd3_static_complete(rt,6u);
        }
        case 0xA6B3u: {
            dd3_static_push8(rt,(uint8_t)(0xA6B5u>>8)); dd3_static_push8(rt,(uint8_t)0xA6B5u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0xA6B6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA85Du: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA85Fu,0xA862u)) c++; rt->state.cpu.pc=0xA862u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA85Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA85Fu: {
            rt->state.cpu.pc=0x88D5u; return dd3_static_complete(rt,3u);
        }
        case 0xA862u: {
            uint16_t ea=(uint16_t)(0x88DCu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA865u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x88DCu,ea)?1u:0u));
        }
        case 0xA865u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA867u,0xA8A7u)) c++; rt->state.cpu.pc=0xA8A7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA867u; return dd3_static_complete(rt,2u);
        }
        case 0xA867u: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA86Au; return dd3_static_complete(rt,4u);
        }
        case 0xA86Au: {
            uint8_t v=0x07u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA86Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA86Cu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA86Du; return dd3_static_complete(rt,2u);
        }
        case 0xA86Du: {
            uint16_t ea=(uint16_t)(0x88FCu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA870u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x88FCu,ea)?1u:0u));
        }
        case 0xA870u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA872u,0xA8A7u)) c++; rt->state.cpu.pc=0xA8A7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA872u; return dd3_static_complete(rt,2u);
        }
        case 0xA872u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA875u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xA875u: {
            uint8_t v=0x70u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA877u; return dd3_static_complete(rt,2u);
        }
        case 0xA877u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA879u,0xA8A7u)) c++; rt->state.cpu.pc=0xA8A7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA879u; return dd3_static_complete(rt,2u);
        }
        case 0xA879u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA87Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xA87Cu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA87Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA87Eu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA880u,0xA8A7u)) c++; rt->state.cpu.pc=0xA8A7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA880u; return dd3_static_complete(rt,2u);
        }
        case 0xA880u: {
            uint16_t ea=(uint16_t)(0x04A0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA883u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A0u,ea)?1u:0u));
        }
        case 0xA883u: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA886u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0xA886u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA888u; return dd3_static_complete(rt,2u);
        }
        case 0xA888u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA88Au; return dd3_static_complete(rt,2u);
        }
        case 0xA88Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA88Cu,0xA8A7u)) c++; rt->state.cpu.pc=0xA8A7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA88Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA88Cu: {
            uint16_t ea=(uint16_t)(0x0054u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA88Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0054u,ea)?1u:0u));
        }
        case 0xA88Fu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA891u; return dd3_static_complete(rt,2u);
        }
        case 0xA891u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA893u,0xA8D8u)) c++; rt->state.cpu.pc=0xA8D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA893u; return dd3_static_complete(rt,2u);
        }
        case 0xA893u: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA896u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0xA896u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA898u,0xA89Eu)) c++; rt->state.cpu.pc=0xA89Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA898u; return dd3_static_complete(rt,2u);
        }
        case 0xA898u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA89Au; return dd3_static_complete(rt,2u);
        }
        case 0xA89Au: {
            uint8_t v=0xC0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA89Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA89Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA89Eu,0xA8D8u)) c++; rt->state.cpu.pc=0xA8D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA89Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA89Eu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8A0u; return dd3_static_complete(rt,4u);
        }
        case 0xA8A0u: {
            uint16_t ea=(uint16_t)(0x88ECu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8A3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x88ECu,ea)?1u:0u));
        }
        case 0xA8A3u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA8A5u; return dd3_static_complete(rt,4u);
        }
        case 0xA8A5u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA8A7u,0xA8D8u)) c++; rt->state.cpu.pc=0xA8D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8A7u; return dd3_static_complete(rt,2u);
        }
        case 0xA8A7u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xA8A9u; return dd3_static_complete(rt,2u);
        }
        case 0xA8A9u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA8ABu,0xA8D5u)) c++; rt->state.cpu.pc=0xA8D5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8ABu; return dd3_static_complete(rt,2u);
        }
        case 0xA8ABu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8ADu; return dd3_static_complete(rt,4u);
        }
        case 0xA8ADu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA8AFu; return dd3_static_complete(rt,2u);
        }
        case 0xA8AFu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA8B1u,0xA8B9u)) c++; rt->state.cpu.pc=0xA8B9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8B1u; return dd3_static_complete(rt,2u);
        }
        case 0xA8B0u: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0xA8B1u; return dd3_static_complete(rt,3u);
        }
        case 0xA8B1u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA8B3u; return dd3_static_complete(rt,2u);
        }
        case 0xA8B3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA8B5u,0xA8B9u)) c++; rt->state.cpu.pc=0xA8B9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8B5u; return dd3_static_complete(rt,2u);
        }
        case 0xA8B5u: {
            uint8_t v=0x0Du;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA8B7u; return dd3_static_complete(rt,2u);
        }
        case 0xA8B7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA8B9u,0xA8D5u)) c++; rt->state.cpu.pc=0xA8D5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8B9u; return dd3_static_complete(rt,2u);
        }
        case 0xA8B9u: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8BCu; return dd3_static_complete(rt,4u);
        }
        case 0xA8BCu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8BDu; return dd3_static_complete(rt,2u);
        }
        case 0xA8BDu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8BFu; return dd3_static_complete(rt,2u);
        }
        case 0xA8BFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA8C1u,0xA8D5u)) c++; rt->state.cpu.pc=0xA8D5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8C1u; return dd3_static_complete(rt,2u);
        }
        case 0xA8C1u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8C4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xA8C4u: {
            uint8_t v=0x60u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA8C6u; return dd3_static_complete(rt,2u);
        }
        case 0xA8C6u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA8C8u,0xA8D5u)) c++; rt->state.cpu.pc=0xA8D5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8C8u; return dd3_static_complete(rt,2u);
        }
        case 0xA8C8u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8CBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xA8CBu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA8CDu; return dd3_static_complete(rt,2u);
        }
        case 0xA8CCu: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0xA8CDu; return dd3_static_complete(rt,3u);
        }
        case 0xA8CDu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA8CFu,0xA8D5u)) c++; rt->state.cpu.pc=0xA8D5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8CFu; return dd3_static_complete(rt,2u);
        }
        case 0xA8CFu: {
            uint8_t v=0x53u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8D1u; return dd3_static_complete(rt,2u);
        }
        case 0xA8D1u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA8D3u; return dd3_static_complete(rt,4u);
        }
        case 0xA8D3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA8D5u,0xA8D8u)) c++; rt->state.cpu.pc=0xA8D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8D5u; return dd3_static_complete(rt,2u);
        }
        case 0xA8D5u: {
            dd3_static_push8(rt,(uint8_t)(0xA8D7u>>8)); dd3_static_push8(rt,(uint8_t)0xA8D7u);
            rt->state.cpu.pc=0x8904u; return dd3_static_complete(rt,6u);
        }
        case 0xA8D8u: {
            dd3_static_push8(rt,(uint8_t)(0xA8DAu>>8)); dd3_static_push8(rt,(uint8_t)0xA8DAu);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0xA8DBu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA906u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA908u; return dd3_static_complete(rt,4u);
        }
        case 0xA908u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA910u: {
            uint16_t ea=0xA9u; (void)dd3_static_read8(rt,ea);
            rt->state.cpu.pc=0xA912u; return dd3_static_complete(rt,3u);
        }
        case 0xA912u: {
            uint16_t ea=0x20u; (void)dd3_static_read8(rt,ea);
            rt->state.cpu.pc=0xA914u; return dd3_static_complete(rt,3u);
        }
        case 0xA914u: {
            uint16_t ea=(uint16_t)((0xABu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA916u; return dd3_static_complete(rt,4u);
        }
        case 0xA916u: {
            uint8_t v=0x1Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA918u; return dd3_static_complete(rt,2u);
        }
        case 0xA918u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA91Au; return dd3_static_complete(rt,4u);
        }
        case 0xA91Au: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA91Cu; return dd3_static_complete(rt,4u);
        }
        case 0xA922u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0xB5u)+rt->state.cpu.y); uint8_t v=(uint8_t)(rt->state.cpu.a&rt->state.cpu.x&((uint8_t)(ea>>8)+1u));
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA924u; return dd3_static_complete(rt,6u);
        }
        case 0xA924u: {
            uint16_t ea=0x30u; (void)dd3_static_read8(rt,ea);
            rt->state.cpu.pc=0xA926u; return dd3_static_complete(rt,3u);
        }
        case 0xA926u: {
            uint16_t ea=(uint16_t)(0xCC20u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA929u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xCC20u,ea)?1u:0u));
        }
        case 0xA929u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA92Au; return dd3_static_complete(rt,2u);
        }
        case 0xA92Au: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA92Cu; return dd3_static_complete(rt,4u);
        }
        case 0xA92Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA92Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA92Eu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA92Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA92Fu: {
            uint8_t v=0x14u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA931u; return dd3_static_complete(rt,2u);
        }
        case 0xA931u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA932u; return dd3_static_complete(rt,2u);
        }
        case 0xA932u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA934u; return dd3_static_complete(rt,2u);
        }
        case 0xA934u: {
            dd3_static_push8(rt,(uint8_t)(0xA936u>>8)); dd3_static_push8(rt,(uint8_t)0xA936u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0xA937u: {
            dd3_static_push8(rt,(uint8_t)(0xA939u>>8)); dd3_static_push8(rt,(uint8_t)0xA939u);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0xA93Au: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA93Cu; return dd3_static_complete(rt,4u);
        }
        case 0xA93Cu: {
            uint16_t ea=(uint16_t)(0x895Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA93Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x895Du,ea)?1u:0u));
        }
        case 0xA93Fu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA941u; return dd3_static_complete(rt,4u);
        }
        case 0xA941u: {
            dd3_static_push8(rt,(uint8_t)(0xA943u>>8)); dd3_static_push8(rt,(uint8_t)0xA943u);
            rt->state.cpu.pc=0xAA59u; return dd3_static_complete(rt,6u);
        }
        case 0xA944u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA946u; return dd3_static_complete(rt,6u);
        }
        case 0xA946u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA948u; return dd3_static_complete(rt,4u);
        }
        case 0xA948u: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA94Au; return dd3_static_complete(rt,2u);
        }
        case 0xA949u: {
            uint16_t ea=0x90u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA94Bu; return dd3_static_complete(rt,5u);
        }
        case 0xA94Au: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA94Cu,0xA959u)) c++; rt->state.cpu.pc=0xA959u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA94Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA94Bu: {
            uint16_t ea=0x44B5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA94Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA94Cu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA94Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA94Eu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA950u; return dd3_static_complete(rt,2u);
        }
        case 0xA950u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA951u; return dd3_static_complete(rt,2u);
        }
        case 0xA951u: {
            uint8_t v=0x14u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA953u; return dd3_static_complete(rt,2u);
        }
        case 0xA953u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA954u; return dd3_static_complete(rt,2u);
        }
        case 0xA954u: {
            uint16_t ea=(uint16_t)(0x8961u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA957u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8961u,ea)?1u:0u));
        }
        case 0xA957u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA959u; return dd3_static_complete(rt,4u);
        }
        case 0xA959u: {
            dd3_static_push8(rt,(uint8_t)(0xA95Bu>>8)); dd3_static_push8(rt,(uint8_t)0xA95Bu);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0xA95Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAA59u: {
            uint16_t ea=(uint16_t)(0x0293u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA5Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0293u,ea)?1u:0u));
        }
        case 0xAA5Cu: {
            uint16_t ea=dd3_static_read16_zp(rt,(uint8_t)(0x02u+rt->state.cpu.x)); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA5Eu; return dd3_static_complete(rt,8u);
        }
        case 0xAA5Eu: {
            uint16_t ea=0x03u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA60u; return dd3_static_complete(rt,3u);
        }
        case 0xAA60u: {
            uint16_t ea=0x07u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA62u; return dd3_static_complete(rt,3u);
        }
        case 0xAA62u: {
            uint16_t ea=0xFFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xAA64u; return dd3_static_complete(rt,5u);
        }
        case 0xAA64u: {
            uint16_t ea=(uint16_t)(0xF0E8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xAA67u; return dd3_static_complete(rt,7u);
        }
        case 0xAA67u: {
            uint16_t ea=0x06u; (void)dd3_static_read8(rt,ea);
            rt->state.cpu.pc=0xAA69u; return dd3_static_complete(rt,3u);
        }
        case 0xAA68u: {
            uint16_t ea=0x08u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xAA6Au; return dd3_static_complete(rt,5u);
        }
        case 0xAA69u: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0xAA6Au; return dd3_static_complete(rt,3u);
        }
        case 0xAA6Au: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0xAA6Bu; return dd3_static_complete(rt,3u);
        }
        case 0xAA75u: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA77u; return dd3_static_complete(rt,2u);
        }
        case 0xAA77u: {
            dd3_static_push8(rt,(uint8_t)(0xAA79u>>8)); dd3_static_push8(rt,(uint8_t)0xAA79u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0xAA7Au: {
            uint8_t v=0x07u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA7Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAA7Cu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xAA7Eu; return dd3_static_complete(rt,4u);
        }
        case 0xAA7Eu: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA80u; return dd3_static_complete(rt,2u);
        }
        case 0xAA85u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA87u; return dd3_static_complete(rt,4u);
        }
        case 0xAA87u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAA89u,0xAAC2u)) c++; rt->state.cpu.pc=0xAAC2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA89u; return dd3_static_complete(rt,2u);
        }
        case 0xAA89u: {
            dd3_static_push8(rt,(uint8_t)(0xAA8Bu>>8)); dd3_static_push8(rt,(uint8_t)0xAA8Bu);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0xAA8Cu: {
            dd3_static_push8(rt,(uint8_t)(0xAA8Eu>>8)); dd3_static_push8(rt,(uint8_t)0xAA8Eu);
            rt->state.cpu.pc=0xA949u; return dd3_static_complete(rt,6u);
        }
        case 0xAA8Fu: {
            dd3_static_push8(rt,(uint8_t)(0xAA91u>>8)); dd3_static_push8(rt,(uint8_t)0xAA91u);
            rt->state.cpu.pc=0xA92Cu; return dd3_static_complete(rt,6u);
        }
        case 0xAA92u: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA94u; return dd3_static_complete(rt,2u);
        }
        case 0xAA94u: {
            dd3_static_push8(rt,(uint8_t)(0xAA96u>>8)); dd3_static_push8(rt,(uint8_t)0xAA96u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0xAA96u: {
            uint8_t v=0xA9u;
            rt->state.cpu.a=v; rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA98u; return dd3_static_complete(rt,2u);
        }
        case 0xAA97u: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA99u; return dd3_static_complete(rt,2u);
        }
        case 0xAA98u: {
            uint16_t ea=0x189Du; (void)dd3_static_read8(rt,ea);
            rt->state.cpu.pc=0xAA9Bu; return dd3_static_complete(rt,4u);
        }
        case 0xAA99u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAA9Cu; return dd3_static_complete(rt,5u);
        }
        case 0xAA9Bu: {
            uint16_t ea=dd3_static_read16_zp(rt,(uint8_t)(0xA9u+rt->state.cpu.x)); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA9Du; return dd3_static_complete(rt,8u);
        }
        case 0xAA9Cu: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA9Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAA9Du: {
            uint16_t ea=dd3_static_read16_zp(rt,(uint8_t)(0x9Du+rt->state.cpu.x)); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA9Fu; return dd3_static_complete(rt,8u);
        }
        case 0xAA9Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAAA1u; return dd3_static_complete(rt,5u);
        }
        case 0xAA9Fu: {
            uint16_t ea=0x03u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAAA1u; return dd3_static_complete(rt,5u);
        }
        case 0xAAA1u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAA3u; return dd3_static_complete(rt,2u);
        }
        case 0xAAA3u: {
            dd3_static_write8(rt,(uint16_t)(0x0350u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAAA6u; return dd3_static_complete(rt,5u);
        }
        case 0xAAA6u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAAA8u; return dd3_static_complete(rt,4u);
        }
        case 0xAAA8u: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xAAAAu; return dd3_static_complete(rt,4u);
        }
        case 0xAAAAu: {
            uint8_t v=0x0Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAACu; return dd3_static_complete(rt,2u);
        }
        case 0xAAACu: {
            dd3_static_push8(rt,(uint8_t)(0xAAAEu>>8)); dd3_static_push8(rt,(uint8_t)0xAAAEu);
            rt->state.cpu.pc=0xA612u; return dd3_static_complete(rt,6u);
        }
        case 0xAAAFu: {
            dd3_static_push8(rt,(uint8_t)(0xAAB1u>>8)); dd3_static_push8(rt,(uint8_t)0xAAB1u);
            rt->state.cpu.pc=0xA910u; return dd3_static_complete(rt,6u);
        }
        case 0xAAB2u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAB4u; return dd3_static_complete(rt,4u);
        }
        case 0xAAB4u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAAB6u; return dd3_static_complete(rt,2u);
        }
        case 0xAAB6u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAAB8u,0xAAC2u)) c++; rt->state.cpu.pc=0xAAC2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAAB8u; return dd3_static_complete(rt,2u);
        }
        case 0xAAB8u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAABAu; return dd3_static_complete(rt,2u);
        }
        case 0xAABAu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xAABCu; return dd3_static_complete(rt,4u);
        }
        case 0xAABCu: {
            dd3_static_push8(rt,(uint8_t)(0xAABEu>>8)); dd3_static_push8(rt,(uint8_t)0xAABEu);
            rt->state.cpu.pc=0xA922u; return dd3_static_complete(rt,6u);
        }
        case 0xAAC2u: {
            uint8_t v=0x06u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAC4u; return dd3_static_complete(rt,2u);
        }
        case 0xAAC4u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAAC5u; return dd3_static_complete(rt,2u);
        }
        case 0xAAC5u: {
            dd3_static_push8(rt,(uint8_t)(0xAAC7u>>8)); dd3_static_push8(rt,(uint8_t)0xAAC7u);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0xABB4u: {
            { uint16_t ret=0xABB6u; dd3_static_push8(rt,(uint8_t)(ret>>8)); dd3_static_push8(rt,(uint8_t)ret); dd3_static_push8(rt,dd3_static_pack_p(rt,1)); rt->state.cpu.i=1; rt->state.cpu.pc=rt->rom->irq_vector; }
            return dd3_static_complete(rt,7u);
        }
        case 0xC006u: {
            uint16_t ea=(uint16_t)(0xFFFFu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC009u; return dd3_static_complete(rt,7u);
        }
        case 0xC009u: {
            uint16_t ea=(uint16_t)(0xFFFFu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC00Cu; return dd3_static_complete(rt,7u);
        }
        case 0xC00Cu: {
            uint16_t ea=(uint16_t)(0xA2FFu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC00Fu; return dd3_static_complete(rt,7u);
        }
        default: return dd3_static_fail_unproven(rt,4,rt->state.cpu.pc);
    }
}
