/* Generated: no runtime opcode fetch or decode. */
#include "dd3_static_semantics.h"
int dd3_static_execute_bank_08(DD3StaticRuntime *rt) {
    switch (rt->state.cpu.pc) {
        case 0x8000u: {
            rt->state.cpu.pc=0x8018u; return dd3_static_complete(rt,3u);
        }
        case 0x8003u: {
            rt->state.cpu.pc=0x9FEEu; return dd3_static_complete(rt,3u);
        }
        case 0x8006u: {
            rt->state.cpu.pc=0xBEC0u; return dd3_static_complete(rt,3u);
        }
        case 0x8009u: {
            rt->state.cpu.pc=0x84FCu; return dd3_static_complete(rt,3u);
        }
        case 0x800Cu: {
            rt->state.cpu.pc=0x9A4Eu; return dd3_static_complete(rt,3u);
        }
        case 0x8018u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8019u; return dd3_static_complete(rt,2u);
        }
        case 0x8019u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x801Au; return dd3_static_complete(rt,3u);
        }
        case 0x801Au: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x801Bu; return dd3_static_complete(rt,2u);
        }
        case 0x801Bu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x801Cu; return dd3_static_complete(rt,3u);
        }
        case 0x801Cu: {
            dd3_static_push8(rt,(uint8_t)(0x801Eu>>8)); dd3_static_push8(rt,(uint8_t)0x801Eu);
            rt->state.cpu.pc=0x8024u; return dd3_static_complete(rt,6u);
        }
        case 0x801Fu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8020u; return dd3_static_complete(rt,4u);
        }
        case 0x8020u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8021u; return dd3_static_complete(rt,2u);
        }
        case 0x8021u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8022u; return dd3_static_complete(rt,4u);
        }
        case 0x8022u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8023u; return dd3_static_complete(rt,2u);
        }
        case 0x8023u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8024u: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8026u; return dd3_static_complete(rt,3u);
        }
        case 0x8026u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8028u; return dd3_static_complete(rt,4u);
        }
        case 0x8028u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x802Au,0x806Eu)) c++; rt->state.cpu.pc=0x806Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x802Au; return dd3_static_complete(rt,2u);
        }
        case 0x802Au: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x802Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0x802Du: {
            dd3_static_write8(rt,0x03C5u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8030u; return dd3_static_complete(rt,4u);
        }
        case 0x8030u: {
            uint16_t ea=(uint16_t)(0x039Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8033u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Du,ea)?1u:0u));
        }
        case 0x8033u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8035u; return dd3_static_complete(rt,2u);
        }
        case 0x8035u: {
            dd3_static_write8(rt,(uint16_t)(0x039Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8038u; return dd3_static_complete(rt,5u);
        }
        case 0x8038u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x803Au; return dd3_static_complete(rt,4u);
        }
        case 0x803Au: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x803Cu; return dd3_static_complete(rt,2u);
        }
        case 0x803Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x803Eu,0x8043u)) c++; rt->state.cpu.pc=0x8043u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x803Eu; return dd3_static_complete(rt,2u);
        }
        case 0x803Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8040u; return dd3_static_complete(rt,2u);
        }
        case 0x8040u: {
            dd3_static_write8(rt,(uint16_t)(0x0394u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8043u; return dd3_static_complete(rt,5u);
        }
        case 0x8043u: {
            dd3_static_push8(rt,(uint8_t)(0x8045u>>8)); dd3_static_push8(rt,(uint8_t)0x8045u);
            rt->state.cpu.pc=0x84DCu; return dd3_static_complete(rt,6u);
        }
        case 0x8046u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8048u; return dd3_static_complete(rt,4u);
        }
        case 0x8048u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x804Au; return dd3_static_complete(rt,2u);
        }
        case 0x804Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x804Cu,0x806Eu)) c++; rt->state.cpu.pc=0x806Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x804Cu; return dd3_static_complete(rt,2u);
        }
        case 0x804Cu: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x804Eu; return dd3_static_complete(rt,4u);
        }
        case 0x804Eu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8050u,0x8065u)) c++; rt->state.cpu.pc=0x8065u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8050u; return dd3_static_complete(rt,2u);
        }
        case 0x8050u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8052u; return dd3_static_complete(rt,4u);
        }
        case 0x8052u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8054u; return dd3_static_complete(rt,2u);
        }
        case 0x8054u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8056u,0x8061u)) c++; rt->state.cpu.pc=0x8061u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8056u; return dd3_static_complete(rt,2u);
        }
        case 0x8056u: {
            uint16_t ea=(uint16_t)(0x0394u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8059u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0394u,ea)?1u:0u));
        }
        case 0x8059u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x805Bu,0x8061u)) c++; rt->state.cpu.pc=0x8061u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x805Bu; return dd3_static_complete(rt,2u);
        }
        case 0x805Bu: {
            dd3_static_push8(rt,(uint8_t)(0x805Du>>8)); dd3_static_push8(rt,(uint8_t)0x805Du);
            rt->state.cpu.pc=0x83B3u; return dd3_static_complete(rt,6u);
        }
        case 0x805Eu: {
            rt->state.cpu.pc=0x806Eu; return dd3_static_complete(rt,3u);
        }
        case 0x8061u: {
            dd3_static_push8(rt,(uint8_t)(0x8063u>>8)); dd3_static_push8(rt,(uint8_t)0x8063u);
            rt->state.cpu.pc=0x806Fu; return dd3_static_complete(rt,6u);
        }
        case 0x8064u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8065u: {
            dd3_static_push8(rt,(uint8_t)(0x8067u>>8)); dd3_static_push8(rt,(uint8_t)0x8067u);
            rt->state.cpu.pc=0x81BFu; return dd3_static_complete(rt,6u);
        }
        case 0x8068u: {
            dd3_static_push8(rt,(uint8_t)(0x806Au>>8)); dd3_static_push8(rt,(uint8_t)0x806Au);
            rt->state.cpu.pc=0x8472u; return dd3_static_complete(rt,6u);
        }
        case 0x806Bu: {
            dd3_static_push8(rt,(uint8_t)(0x806Du>>8)); dd3_static_push8(rt,(uint8_t)0x806Du);
            rt->state.cpu.pc=0x82BEu; return dd3_static_complete(rt,6u);
        }
        case 0x806Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x806Fu: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8071u; return dd3_static_complete(rt,4u);
        }
        case 0x8071u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8073u; return dd3_static_complete(rt,2u);
        }
        case 0x8073u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8075u,0x807Fu)) c++; rt->state.cpu.pc=0x807Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8075u; return dd3_static_complete(rt,2u);
        }
        case 0x8075u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8077u; return dd3_static_complete(rt,2u);
        }
        case 0x8077u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8079u,0x807Cu)) c++; rt->state.cpu.pc=0x807Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8079u; return dd3_static_complete(rt,2u);
        }
        case 0x8079u: {
            rt->state.cpu.pc=0x81B1u; return dd3_static_complete(rt,3u);
        }
        case 0x807Cu: {
            rt->state.cpu.pc=0x8155u; return dd3_static_complete(rt,3u);
        }
        case 0x807Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8081u; return dd3_static_complete(rt,2u);
        }
        case 0x8081u: {
            dd3_static_write8(rt,0x20u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8083u; return dd3_static_complete(rt,3u);
        }
        case 0x8083u: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8085u; return dd3_static_complete(rt,2u);
        }
        case 0x8085u: {
            dd3_static_push8(rt,(uint8_t)(0x8087u>>8)); dd3_static_push8(rt,(uint8_t)0x8087u);
            rt->state.cpu.pc=0x85C8u; return dd3_static_complete(rt,6u);
        }
        case 0x8088u: {
            dd3_static_push8(rt,(uint8_t)(0x808Au>>8)); dd3_static_push8(rt,(uint8_t)0x808Au);
            rt->state.cpu.pc=0x8648u; return dd3_static_complete(rt,6u);
        }
        case 0x808Bu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x808Du,0x80EBu)) c++; rt->state.cpu.pc=0x80EBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x808Du; return dd3_static_complete(rt,2u);
        }
        case 0x808Du: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x808Fu; return dd3_static_complete(rt,3u);
        }
        case 0x808Fu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8091u; return dd3_static_complete(rt,2u);
        }
        case 0x8091u: {
            dd3_static_write8(rt,(uint16_t)(0x039Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8094u; return dd3_static_complete(rt,5u);
        }
        case 0x8094u: {
            dd3_static_write8(rt,0x20u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8096u; return dd3_static_complete(rt,3u);
        }
        case 0x8096u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8098u; return dd3_static_complete(rt,2u);
        }
        case 0x8098u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x809Au; return dd3_static_complete(rt,2u);
        }
        case 0x809Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x809Cu,0x80A9u)) c++; rt->state.cpu.pc=0x80A9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x809Cu; return dd3_static_complete(rt,2u);
        }
        case 0x809Cu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x809Eu; return dd3_static_complete(rt,3u);
        }
        case 0x809Eu: {
            dd3_static_write8(rt,0x00F3u,rt->state.cpu.a);
            rt->state.cpu.pc=0x80A1u; return dd3_static_complete(rt,4u);
        }
        case 0x80A1u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80A3u; return dd3_static_complete(rt,3u);
        }
        case 0x80A3u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80A5u; return dd3_static_complete(rt,2u);
        }
        case 0x80A5u: {
            dd3_static_write8(rt,0x34u,rt->state.cpu.a);
            rt->state.cpu.pc=0x80A7u; return dd3_static_complete(rt,3u);
        }
        case 0x80A7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80A9u,0x80B1u)) c++; rt->state.cpu.pc=0x80B1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80A9u; return dd3_static_complete(rt,2u);
        }
        case 0x80A9u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80ABu; return dd3_static_complete(rt,2u);
        }
        case 0x80ABu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80ADu,0x80E0u)) c++; rt->state.cpu.pc=0x80E0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80ADu; return dd3_static_complete(rt,2u);
        }
        case 0x80ADu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80AFu; return dd3_static_complete(rt,2u);
        }
        case 0x80AFu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80B1u,0x80B4u)) c++; rt->state.cpu.pc=0x80B4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80B1u; return dd3_static_complete(rt,2u);
        }
        case 0x80B1u: {
            dd3_static_push8(rt,(uint8_t)(0x80B3u>>8)); dd3_static_push8(rt,(uint8_t)0x80B3u);
            rt->state.cpu.pc=0x852Au; return dd3_static_complete(rt,6u);
        }
        case 0x80B4u: {
            dd3_static_push8(rt,(uint8_t)(0x80B6u>>8)); dd3_static_push8(rt,(uint8_t)0x80B6u);
            rt->state.cpu.pc=0x880Cu; return dd3_static_complete(rt,6u);
        }
        case 0x80B7u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x80B9u,0x80D0u)) c++; rt->state.cpu.pc=0x80D0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80B9u; return dd3_static_complete(rt,2u);
        }
        case 0x80B9u: {
            uint16_t ea=(uint16_t)(0x039Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80BCu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Du,ea)?1u:0u));
        }
        case 0x80BCu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80BEu; return dd3_static_complete(rt,2u);
        }
        case 0x80BEu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80C0u; return dd3_static_complete(rt,2u);
        }
        case 0x80C0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80C2u,0x80C5u)) c++; rt->state.cpu.pc=0x80C5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80C2u; return dd3_static_complete(rt,2u);
        }
        case 0x80C2u: {
            dd3_static_push8(rt,(uint8_t)(0x80C4u>>8)); dd3_static_push8(rt,(uint8_t)0x80C4u);
            rt->state.cpu.pc=0x852Au; return dd3_static_complete(rt,6u);
        }
        case 0x80C5u: {
            uint16_t ea=(uint16_t)(0x039Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80C8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Du,ea)?1u:0u));
        }
        case 0x80C8u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80CAu; return dd3_static_complete(rt,2u);
        }
        case 0x80CAu: {
            dd3_static_write8(rt,(uint16_t)(0x039Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x80CDu; return dd3_static_complete(rt,5u);
        }
        case 0x80CDu: {
            rt->state.cpu.pc=0x8154u; return dd3_static_complete(rt,3u);
        }
        case 0x80D0u: {
            uint16_t ea=(uint16_t)(0x039Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80D3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Du,ea)?1u:0u));
        }
        case 0x80D3u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80D5u; return dd3_static_complete(rt,2u);
        }
        case 0x80D5u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80D7u; return dd3_static_complete(rt,2u);
        }
        case 0x80D7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80D9u,0x80EBu)) c++; rt->state.cpu.pc=0x80EBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80D9u; return dd3_static_complete(rt,2u);
        }
        case 0x80D9u: {
            dd3_static_push8(rt,(uint8_t)(0x80DBu>>8)); dd3_static_push8(rt,(uint8_t)0x80DBu);
            rt->state.cpu.pc=0x88D0u; return dd3_static_complete(rt,6u);
        }
        case 0x80DCu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x80DEu,0x8133u)) c++; rt->state.cpu.pc=0x8133u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80DEu; return dd3_static_complete(rt,2u);
        }
        case 0x80DEu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x80E0u,0x80EBu)) c++; rt->state.cpu.pc=0x80EBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80E0u; return dd3_static_complete(rt,2u);
        }
        case 0x80E0u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80E2u; return dd3_static_complete(rt,3u);
        }
        case 0x80E2u: {
            dd3_static_write8(rt,(uint16_t)(0x0382u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x80E5u; return dd3_static_complete(rt,5u);
        }
        case 0x80E5u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80E7u; return dd3_static_complete(rt,3u);
        }
        case 0x80E7u: {
            dd3_static_write8(rt,(uint16_t)(0x038Bu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x80EAu; return dd3_static_complete(rt,5u);
        }
        case 0x80EAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x80EBu: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80EDu; return dd3_static_complete(rt,2u);
        }
        case 0x80EDu: {
            dd3_static_push8(rt,(uint8_t)(0x80EFu>>8)); dd3_static_push8(rt,(uint8_t)0x80EFu);
            rt->state.cpu.pc=0x85C8u; return dd3_static_complete(rt,6u);
        }
        case 0x80F0u: {
            dd3_static_push8(rt,(uint8_t)(0x80F2u>>8)); dd3_static_push8(rt,(uint8_t)0x80F2u);
            rt->state.cpu.pc=0x8648u; return dd3_static_complete(rt,6u);
        }
        case 0x80F3u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x80F5u,0x8154u)) c++; rt->state.cpu.pc=0x8154u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80F5u; return dd3_static_complete(rt,2u);
        }
        case 0x80F5u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80F7u; return dd3_static_complete(rt,3u);
        }
        case 0x80F7u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80F9u; return dd3_static_complete(rt,2u);
        }
        case 0x80F9u: {
            dd3_static_write8(rt,(uint16_t)(0x039Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x80FCu; return dd3_static_complete(rt,5u);
        }
        case 0x80FCu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80FEu; return dd3_static_complete(rt,2u);
        }
        case 0x80FEu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8100u; return dd3_static_complete(rt,2u);
        }
        case 0x8100u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8102u,0x80E0u)) c++; rt->state.cpu.pc=0x80E0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8102u; return dd3_static_complete(rt,2u);
        }
        case 0x8102u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8104u; return dd3_static_complete(rt,2u);
        }
        case 0x8104u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8106u,0x8124u)) c++; rt->state.cpu.pc=0x8124u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8106u; return dd3_static_complete(rt,2u);
        }
        case 0x8106u: {
            dd3_static_push8(rt,(uint8_t)(0x8108u>>8)); dd3_static_push8(rt,(uint8_t)0x8108u);
            rt->state.cpu.pc=0x852Au; return dd3_static_complete(rt,6u);
        }
        case 0x8109u: {
            dd3_static_push8(rt,(uint8_t)(0x810Bu>>8)); dd3_static_push8(rt,(uint8_t)0x810Bu);
            rt->state.cpu.pc=0x880Cu; return dd3_static_complete(rt,6u);
        }
        case 0x810Cu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x810Eu,0x8154u)) c++; rt->state.cpu.pc=0x8154u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x810Eu; return dd3_static_complete(rt,2u);
        }
        case 0x810Eu: {
            uint16_t ea=(uint16_t)(0x039Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8111u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Du,ea)?1u:0u));
        }
        case 0x8111u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8113u; return dd3_static_complete(rt,2u);
        }
        case 0x8113u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8115u; return dd3_static_complete(rt,2u);
        }
        case 0x8115u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8117u,0x811Au)) c++; rt->state.cpu.pc=0x811Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8117u; return dd3_static_complete(rt,2u);
        }
        case 0x8117u: {
            dd3_static_push8(rt,(uint8_t)(0x8119u>>8)); dd3_static_push8(rt,(uint8_t)0x8119u);
            rt->state.cpu.pc=0x852Au; return dd3_static_complete(rt,6u);
        }
        case 0x811Au: {
            uint16_t ea=(uint16_t)(0x039Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x811Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Du,ea)?1u:0u));
        }
        case 0x811Du: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x811Fu; return dd3_static_complete(rt,2u);
        }
        case 0x811Fu: {
            dd3_static_write8(rt,(uint16_t)(0x039Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8122u; return dd3_static_complete(rt,5u);
        }
        case 0x8122u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8124u,0x8154u)) c++; rt->state.cpu.pc=0x8154u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8124u; return dd3_static_complete(rt,2u);
        }
        case 0x8124u: {
            uint16_t ea=0x20u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8126u; return dd3_static_complete(rt,3u);
        }
        case 0x8126u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8128u,0x8109u)) c++; rt->state.cpu.pc=0x8109u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8128u; return dd3_static_complete(rt,2u);
        }
        case 0x8128u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x812Au; return dd3_static_complete(rt,2u);
        }
        case 0x812Au: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x812Cu; return dd3_static_complete(rt,2u);
        }
        case 0x812Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x812Eu,0x8133u)) c++; rt->state.cpu.pc=0x8133u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x812Eu; return dd3_static_complete(rt,2u);
        }
        case 0x812Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8130u>>8)); dd3_static_push8(rt,(uint8_t)0x8130u);
            rt->state.cpu.pc=0x88D0u; return dd3_static_complete(rt,6u);
        }
        case 0x8131u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8133u,0x8154u)) c++; rt->state.cpu.pc=0x8154u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8133u; return dd3_static_complete(rt,2u);
        }
        case 0x8133u: {
            uint16_t ea=(uint16_t)(0x038Bu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8136u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x038Bu,ea)?1u:0u));
        }
        case 0x8136u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8138u; return dd3_static_complete(rt,2u);
        }
        case 0x8138u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x813Au; return dd3_static_complete(rt,2u);
        }
        case 0x813Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x813Cu,0x8140u)) c++; rt->state.cpu.pc=0x8140u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x813Cu; return dd3_static_complete(rt,2u);
        }
        case 0x813Cu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x813Eu; return dd3_static_complete(rt,2u);
        }
        case 0x813Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8140u,0x8146u)) c++; rt->state.cpu.pc=0x8146u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8140u; return dd3_static_complete(rt,2u);
        }
        case 0x8140u: {
            uint8_t v=0x23u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8142u; return dd3_static_complete(rt,2u);
        }
        case 0x8142u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8144u; return dd3_static_complete(rt,4u);
        }
        case 0x8144u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8146u,0x814Au)) c++; rt->state.cpu.pc=0x814Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8146u; return dd3_static_complete(rt,2u);
        }
        case 0x8146u: {
            uint8_t v=0x13u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8148u; return dd3_static_complete(rt,2u);
        }
        case 0x8148u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x814Au; return dd3_static_complete(rt,4u);
        }
        case 0x814Au: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x814Cu; return dd3_static_complete(rt,3u);
        }
        case 0x814Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0382u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x814Fu; return dd3_static_complete(rt,5u);
        }
        case 0x814Fu: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8151u; return dd3_static_complete(rt,3u);
        }
        case 0x8151u: {
            dd3_static_write8(rt,(uint16_t)(0x038Bu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8154u; return dd3_static_complete(rt,5u);
        }
        case 0x8154u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8155u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8157u; return dd3_static_complete(rt,2u);
        }
        case 0x8157u: {
            dd3_static_write8(rt,0x20u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8159u; return dd3_static_complete(rt,3u);
        }
        case 0x8159u: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x815Bu; return dd3_static_complete(rt,2u);
        }
        case 0x815Bu: {
            dd3_static_push8(rt,(uint8_t)(0x815Du>>8)); dd3_static_push8(rt,(uint8_t)0x815Du);
            rt->state.cpu.pc=0x85C8u; return dd3_static_complete(rt,6u);
        }
        case 0x815Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8160u>>8)); dd3_static_push8(rt,(uint8_t)0x8160u);
            rt->state.cpu.pc=0x8648u; return dd3_static_complete(rt,6u);
        }
        case 0x8161u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8163u,0x8185u)) c++; rt->state.cpu.pc=0x8185u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8163u; return dd3_static_complete(rt,2u);
        }
        case 0x8163u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8165u; return dd3_static_complete(rt,3u);
        }
        case 0x8165u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8167u; return dd3_static_complete(rt,2u);
        }
        case 0x8167u: {
            dd3_static_write8(rt,(uint16_t)(0x039Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x816Au; return dd3_static_complete(rt,5u);
        }
        case 0x816Au: {
            dd3_static_write8(rt,0x20u,rt->state.cpu.a);
            rt->state.cpu.pc=0x816Cu; return dd3_static_complete(rt,3u);
        }
        case 0x816Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x816Eu; return dd3_static_complete(rt,2u);
        }
        case 0x816Eu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8170u; return dd3_static_complete(rt,2u);
        }
        case 0x8170u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8172u,0x8178u)) c++; rt->state.cpu.pc=0x8178u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8172u; return dd3_static_complete(rt,2u);
        }
        case 0x8172u: {
            dd3_static_push8(rt,(uint8_t)(0x8174u>>8)); dd3_static_push8(rt,(uint8_t)0x8174u);
            rt->state.cpu.pc=0x852Au; return dd3_static_complete(rt,6u);
        }
        case 0x8175u: {
            rt->state.cpu.pc=0x8185u; return dd3_static_complete(rt,3u);
        }
        case 0x8178u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x817Au; return dd3_static_complete(rt,3u);
        }
        case 0x817Au: {
            dd3_static_write8(rt,(uint16_t)(0x0382u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x817Du; return dd3_static_complete(rt,5u);
        }
        case 0x817Du: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x817Fu; return dd3_static_complete(rt,3u);
        }
        case 0x817Fu: {
            dd3_static_write8(rt,(uint16_t)(0x038Bu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8182u; return dd3_static_complete(rt,5u);
        }
        case 0x8182u: {
            rt->state.cpu.pc=0x81B0u; return dd3_static_complete(rt,3u);
        }
        case 0x8185u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8187u; return dd3_static_complete(rt,2u);
        }
        case 0x8187u: {
            dd3_static_push8(rt,(uint8_t)(0x8189u>>8)); dd3_static_push8(rt,(uint8_t)0x8189u);
            rt->state.cpu.pc=0x85C8u; return dd3_static_complete(rt,6u);
        }
        case 0x818Au: {
            dd3_static_push8(rt,(uint8_t)(0x818Cu>>8)); dd3_static_push8(rt,(uint8_t)0x818Cu);
            rt->state.cpu.pc=0x8648u; return dd3_static_complete(rt,6u);
        }
        case 0x818Du: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x818Fu,0x81B0u)) c++; rt->state.cpu.pc=0x81B0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x818Fu; return dd3_static_complete(rt,2u);
        }
        case 0x818Fu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8191u; return dd3_static_complete(rt,3u);
        }
        case 0x8191u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8193u; return dd3_static_complete(rt,2u);
        }
        case 0x8193u: {
            dd3_static_write8(rt,(uint16_t)(0x039Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8196u; return dd3_static_complete(rt,5u);
        }
        case 0x8196u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8198u; return dd3_static_complete(rt,2u);
        }
        case 0x8198u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x819Au; return dd3_static_complete(rt,2u);
        }
        case 0x819Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x819Cu,0x8178u)) c++; rt->state.cpu.pc=0x8178u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x819Cu; return dd3_static_complete(rt,2u);
        }
        case 0x819Cu: {
            dd3_static_push8(rt,(uint8_t)(0x819Eu>>8)); dd3_static_push8(rt,(uint8_t)0x819Eu);
            rt->state.cpu.pc=0x852Au; return dd3_static_complete(rt,6u);
        }
        case 0x819Fu: {
            uint16_t ea=0x20u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81A1u; return dd3_static_complete(rt,3u);
        }
        case 0x81A1u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81A3u; return dd3_static_complete(rt,2u);
        }
        case 0x81A3u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x81A5u; return dd3_static_complete(rt,2u);
        }
        case 0x81A5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81A7u,0x81B0u)) c++; rt->state.cpu.pc=0x81B0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81A7u; return dd3_static_complete(rt,2u);
        }
        case 0x81A7u: {
            uint16_t ea=(uint16_t)(0x039Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81AAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Du,ea)?1u:0u));
        }
        case 0x81AAu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81ACu; return dd3_static_complete(rt,2u);
        }
        case 0x81ACu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x81AEu; return dd3_static_complete(rt,2u);
        }
        case 0x81AEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81B0u,0x81B0u)) c++; rt->state.cpu.pc=0x81B0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81B0u; return dd3_static_complete(rt,2u);
        }
        case 0x81B0u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x81B1u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81B3u; return dd3_static_complete(rt,2u);
        }
        case 0x81B3u: {
            dd3_static_push8(rt,(uint8_t)(0x81B5u>>8)); dd3_static_push8(rt,(uint8_t)0x81B5u);
            rt->state.cpu.pc=0x85C8u; return dd3_static_complete(rt,6u);
        }
        case 0x81B6u: {
            dd3_static_push8(rt,(uint8_t)(0x81B8u>>8)); dd3_static_push8(rt,(uint8_t)0x81B8u);
            rt->state.cpu.pc=0x8648u; return dd3_static_complete(rt,6u);
        }
        case 0x81B9u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x81BBu,0x81BEu)) c++; rt->state.cpu.pc=0x81BEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81BBu; return dd3_static_complete(rt,2u);
        }
        case 0x81BBu: {
            dd3_static_push8(rt,(uint8_t)(0x81BDu>>8)); dd3_static_push8(rt,(uint8_t)0x81BDu);
            rt->state.cpu.pc=0x852Au; return dd3_static_complete(rt,6u);
        }
        case 0x81BEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x81BFu: {
            dd3_static_push8(rt,(uint8_t)(0x81C1u>>8)); dd3_static_push8(rt,(uint8_t)0x81C1u);
            rt->state.cpu.pc=0x893Cu; return dd3_static_complete(rt,6u);
        }
        case 0x81C2u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81C4u; return dd3_static_complete(rt,2u);
        }
        case 0x81C4u: {
            dd3_static_push8(rt,(uint8_t)(0x81C6u>>8)); dd3_static_push8(rt,(uint8_t)0x81C6u);
            rt->state.cpu.pc=0x85C8u; return dd3_static_complete(rt,6u);
        }
        case 0x81C7u: {
            dd3_static_push8(rt,(uint8_t)(0x81C9u>>8)); dd3_static_push8(rt,(uint8_t)0x81C9u);
            rt->state.cpu.pc=0x8648u; return dd3_static_complete(rt,6u);
        }
        case 0x81CAu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x81CCu,0x81E3u)) c++; rt->state.cpu.pc=0x81E3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81CCu; return dd3_static_complete(rt,2u);
        }
        case 0x81CCu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81CEu; return dd3_static_complete(rt,4u);
        }
        case 0x81CEu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x81D0u; return dd3_static_complete(rt,2u);
        }
        case 0x81D0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81D2u,0x8203u)) c++; rt->state.cpu.pc=0x8203u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81D2u; return dd3_static_complete(rt,2u);
        }
        case 0x81D2u: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81D5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0x81D5u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81D7u; return dd3_static_complete(rt,2u);
        }
        case 0x81D7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81D9u,0x8203u)) c++; rt->state.cpu.pc=0x8203u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81D9u; return dd3_static_complete(rt,2u);
        }
        case 0x81D9u: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81DBu; return dd3_static_complete(rt,2u);
        }
        case 0x81DBu: {
            dd3_static_push8(rt,(uint8_t)(0x81DDu>>8)); dd3_static_push8(rt,(uint8_t)0x81DDu);
            rt->state.cpu.pc=0x85C8u; return dd3_static_complete(rt,6u);
        }
        case 0x81DEu: {
            dd3_static_push8(rt,(uint8_t)(0x81E0u>>8)); dd3_static_push8(rt,(uint8_t)0x81E0u);
            rt->state.cpu.pc=0x8648u; return dd3_static_complete(rt,6u);
        }
        case 0x81E1u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x81E3u,0x8203u)) c++; rt->state.cpu.pc=0x8203u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81E3u; return dd3_static_complete(rt,2u);
        }
        case 0x81E3u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81E5u; return dd3_static_complete(rt,3u);
        }
        case 0x81E5u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81E7u; return dd3_static_complete(rt,2u);
        }
        case 0x81E7u: {
            dd3_static_write8(rt,(uint16_t)(0x039Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x81EAu; return dd3_static_complete(rt,5u);
        }
        case 0x81EAu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81ECu; return dd3_static_complete(rt,2u);
        }
        case 0x81ECu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81EEu,0x8204u)) c++; rt->state.cpu.pc=0x8204u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81EEu; return dd3_static_complete(rt,2u);
        }
        case 0x81EEu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x81F0u; return dd3_static_complete(rt,2u);
        }
        case 0x81F0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81F2u,0x81F5u)) c++; rt->state.cpu.pc=0x81F5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81F2u; return dd3_static_complete(rt,2u);
        }
        case 0x81F2u: {
            rt->state.cpu.pc=0x8290u; return dd3_static_complete(rt,3u);
        }
        case 0x81F5u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81F7u; return dd3_static_complete(rt,4u);
        }
        case 0x81F7u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81F9u; return dd3_static_complete(rt,2u);
        }
        case 0x81F9u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81FBu; return dd3_static_complete(rt,3u);
        }
        case 0x81FBu: {
            dd3_static_write8(rt,(uint16_t)(0x0382u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x81FEu; return dd3_static_complete(rt,5u);
        }
        case 0x81FEu: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8200u; return dd3_static_complete(rt,3u);
        }
        case 0x8200u: {
            dd3_static_write8(rt,(uint16_t)(0x038Bu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8203u; return dd3_static_complete(rt,5u);
        }
        case 0x8203u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8204u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8206u; return dd3_static_complete(rt,4u);
        }
        case 0x8206u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8208u; return dd3_static_complete(rt,2u);
        }
        case 0x8208u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x820Au,0x8234u)) c++; rt->state.cpu.pc=0x8234u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x820Au; return dd3_static_complete(rt,2u);
        }
        case 0x820Au: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x820Cu; return dd3_static_complete(rt,2u);
        }
        case 0x820Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x820Eu,0x8223u)) c++; rt->state.cpu.pc=0x8223u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x820Eu; return dd3_static_complete(rt,2u);
        }
        case 0x820Eu: {
            uint16_t ea=(uint16_t)(0x038Bu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8211u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x038Bu,ea)?1u:0u));
        }
        case 0x8211u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8213u; return dd3_static_complete(rt,2u);
        }
        case 0x8213u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8215u; return dd3_static_complete(rt,2u);
        }
        case 0x8215u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8217u,0x8280u)) c++; rt->state.cpu.pc=0x8280u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8217u; return dd3_static_complete(rt,2u);
        }
        case 0x8217u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8219u; return dd3_static_complete(rt,4u);
        }
        case 0x8219u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x821Bu; return dd3_static_complete(rt,2u);
        }
        case 0x821Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x821Du,0x823Fu)) c++; rt->state.cpu.pc=0x823Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x821Du; return dd3_static_complete(rt,2u);
        }
        case 0x821Du: {
            uint8_t v=0x1Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x821Fu; return dd3_static_complete(rt,2u);
        }
        case 0x821Fu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8221u; return dd3_static_complete(rt,4u);
        }
        case 0x8221u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8223u,0x8278u)) c++; rt->state.cpu.pc=0x8278u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8223u; return dd3_static_complete(rt,2u);
        }
        case 0x8223u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8225u; return dd3_static_complete(rt,4u);
        }
        case 0x8225u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8227u; return dd3_static_complete(rt,2u);
        }
        case 0x8227u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8229u,0x821Du)) c++; rt->state.cpu.pc=0x821Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8229u; return dd3_static_complete(rt,2u);
        }
        case 0x8229u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x822Au; return dd3_static_complete(rt,2u);
        }
        case 0x822Au: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x822Cu; return dd3_static_complete(rt,2u);
        }
        case 0x822Cu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x822Du; return dd3_static_complete(rt,2u);
        }
        case 0x822Du: {
            uint16_t ea=(uint16_t)(0x8284u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8230u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8284u,ea)?1u:0u));
        }
        case 0x8230u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8232u; return dd3_static_complete(rt,4u);
        }
        case 0x8232u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8234u,0x8278u)) c++; rt->state.cpu.pc=0x8278u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8234u; return dd3_static_complete(rt,2u);
        }
        case 0x8234u: {
            uint16_t ea=(uint16_t)(0x038Bu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8237u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x038Bu,ea)?1u:0u));
        }
        case 0x8237u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8239u,0x8280u)) c++; rt->state.cpu.pc=0x8280u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8239u; return dd3_static_complete(rt,2u);
        }
        case 0x8239u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x823Bu; return dd3_static_complete(rt,2u);
        }
        case 0x823Bu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x823Du; return dd3_static_complete(rt,2u);
        }
        case 0x823Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x823Fu,0x8280u)) c++; rt->state.cpu.pc=0x8280u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x823Fu; return dd3_static_complete(rt,2u);
        }
        case 0x823Fu: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8241u; return dd3_static_complete(rt,4u);
        }
        case 0x8241u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8243u,0x826Bu)) c++; rt->state.cpu.pc=0x826Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8243u; return dd3_static_complete(rt,2u);
        }
        case 0x8243u: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8245u; return dd3_static_complete(rt,4u);
        }
        case 0x8245u: {
            uint8_t v=0xE8u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8247u; return dd3_static_complete(rt,2u);
        }
        case 0x8247u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8249u,0x826Bu)) c++; rt->state.cpu.pc=0x826Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8249u; return dd3_static_complete(rt,2u);
        }
        case 0x8249u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x824Bu; return dd3_static_complete(rt,4u);
        }
        case 0x824Bu: {
            uint8_t v=0xB5u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x824Du; return dd3_static_complete(rt,2u);
        }
        case 0x824Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x824Fu,0x8272u)) c++; rt->state.cpu.pc=0x8272u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x824Fu; return dd3_static_complete(rt,2u);
        }
        case 0x824Fu: {
            uint8_t v=0x32u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8251u; return dd3_static_complete(rt,2u);
        }
        case 0x8251u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8253u,0x8272u)) c++; rt->state.cpu.pc=0x8272u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8253u; return dd3_static_complete(rt,2u);
        }
        case 0x8253u: {
            uint8_t v=0xDBu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8255u; return dd3_static_complete(rt,2u);
        }
        case 0x8255u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8257u,0x8272u)) c++; rt->state.cpu.pc=0x8272u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8257u; return dd3_static_complete(rt,2u);
        }
        case 0x8257u: {
            uint8_t v=0xDDu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8259u; return dd3_static_complete(rt,2u);
        }
        case 0x8259u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x825Bu,0x8272u)) c++; rt->state.cpu.pc=0x8272u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x825Bu; return dd3_static_complete(rt,2u);
        }
        case 0x825Bu: {
            uint8_t v=0xD3u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x825Du; return dd3_static_complete(rt,2u);
        }
        case 0x825Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x825Fu,0x8272u)) c++; rt->state.cpu.pc=0x8272u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x825Fu; return dd3_static_complete(rt,2u);
        }
        case 0x825Fu: {
            uint8_t v=0xB2u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8261u; return dd3_static_complete(rt,2u);
        }
        case 0x8261u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8263u,0x8272u)) c++; rt->state.cpu.pc=0x8272u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8263u; return dd3_static_complete(rt,2u);
        }
        case 0x8263u: {
            uint8_t v=0xC4u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8265u; return dd3_static_complete(rt,2u);
        }
        case 0x8265u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8267u,0x8272u)) c++; rt->state.cpu.pc=0x8272u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8267u; return dd3_static_complete(rt,2u);
        }
        case 0x8267u: {
            uint8_t v=0xB8u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8269u; return dd3_static_complete(rt,2u);
        }
        case 0x8269u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x826Bu,0x8272u)) c++; rt->state.cpu.pc=0x8272u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x826Bu; return dd3_static_complete(rt,2u);
        }
        case 0x826Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x826Du; return dd3_static_complete(rt,2u);
        }
        case 0x826Du: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8270u; return dd3_static_complete(rt,5u);
        }
        case 0x8270u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8272u,0x8280u)) c++; rt->state.cpu.pc=0x8280u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8272u; return dd3_static_complete(rt,2u);
        }
        case 0x8272u: {
            uint8_t v=0x0Du;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8274u; return dd3_static_complete(rt,2u);
        }
        case 0x8274u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8276u; return dd3_static_complete(rt,4u);
        }
        case 0x8276u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8278u,0x8280u)) c++; rt->state.cpu.pc=0x8280u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8278u; return dd3_static_complete(rt,2u);
        }
        case 0x8278u: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x827Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0x827Bu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x827Du; return dd3_static_complete(rt,2u);
        }
        case 0x827Du: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8280u; return dd3_static_complete(rt,5u);
        }
        case 0x8280u: {
            dd3_static_push8(rt,(uint8_t)(0x8282u>>8)); dd3_static_push8(rt,(uint8_t)0x8282u);
            rt->state.cpu.pc=0x852Au; return dd3_static_complete(rt,6u);
        }
        case 0x8283u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8290u: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8293u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0x8293u: {
            dd3_static_write8(rt,0x24u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8295u; return dd3_static_complete(rt,3u);
        }
        case 0x8295u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8297u; return dd3_static_complete(rt,3u);
        }
        case 0x8297u: {
            dd3_static_write8(rt,(uint16_t)(0x0382u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x829Au; return dd3_static_complete(rt,5u);
        }
        case 0x829Au: {
            dd3_static_push8(rt,(uint8_t)(0x829Cu>>8)); dd3_static_push8(rt,(uint8_t)0x829Cu);
            rt->state.cpu.pc=0x84FCu; return dd3_static_complete(rt,6u);
        }
        case 0x829Du: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x829Fu; return dd3_static_complete(rt,3u);
        }
        case 0x829Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0382u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x82A2u; return dd3_static_complete(rt,5u);
        }
        case 0x82A2u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x82A3u; return dd3_static_complete(rt,2u);
        }
        case 0x82A3u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82A5u; return dd3_static_complete(rt,3u);
        }
        case 0x82A5u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x82A7u; return dd3_static_complete(rt,3u);
        }
        case 0x82A7u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x82A9u; return dd3_static_complete(rt,3u);
        }
        case 0x82A9u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82ABu; return dd3_static_complete(rt,3u);
        }
        case 0x82ABu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x82ADu; return dd3_static_complete(rt,3u);
        }
        case 0x82ADu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x82AFu,0x82B2u)) c++; rt->state.cpu.pc=0x82B2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82AFu; return dd3_static_complete(rt,2u);
        }
        case 0x82AFu: {
            rt->state.cpu.pc=0x8204u; return dd3_static_complete(rt,3u);
        }
        case 0x82B2u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82B4u; return dd3_static_complete(rt,3u);
        }
        case 0x82B4u: {
            dd3_static_write8(rt,(uint16_t)(0x0382u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x82B7u; return dd3_static_complete(rt,5u);
        }
        case 0x82B7u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82B9u; return dd3_static_complete(rt,3u);
        }
        case 0x82B9u: {
            dd3_static_write8(rt,(uint16_t)(0x038Bu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x82BCu; return dd3_static_complete(rt,5u);
        }
        case 0x82BCu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x82BDu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x82BEu: {
            uint16_t ea=(uint16_t)(0x0347u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82C1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0347u,ea)?1u:0u));
        }
        case 0x82C1u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x82C3u,0x82BDu)) c++; rt->state.cpu.pc=0x82BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82C3u; return dd3_static_complete(rt,2u);
        }
        case 0x82C3u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82C5u; return dd3_static_complete(rt,2u);
        }
        case 0x82C5u: {
            dd3_static_push8(rt,(uint8_t)(0x82C7u>>8)); dd3_static_push8(rt,(uint8_t)0x82C7u);
            rt->state.cpu.pc=0x85C8u; return dd3_static_complete(rt,6u);
        }
        case 0x82C8u: {
            dd3_static_push8(rt,(uint8_t)(0x82CAu>>8)); dd3_static_push8(rt,(uint8_t)0x82CAu);
            rt->state.cpu.pc=0x84FCu; return dd3_static_complete(rt,6u);
        }
        case 0x82CBu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82CDu; return dd3_static_complete(rt,3u);
        }
        case 0x82CDu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x82CEu; return dd3_static_complete(rt,2u);
        }
        case 0x82CEu: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x82D0u; return dd3_static_complete(rt,3u);
        }
        case 0x82D0u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x82D2u; return dd3_static_complete(rt,3u);
        }
        case 0x82D2u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82D4u; return dd3_static_complete(rt,3u);
        }
        case 0x82D4u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x82D6u; return dd3_static_complete(rt,3u);
        }
        case 0x82D6u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0x82D8u; return dd3_static_complete(rt,3u);
        }
        case 0x82D8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x82DAu,0x82DBu)) c++; rt->state.cpu.pc=0x82DBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82DAu; return dd3_static_complete(rt,2u);
        }
        case 0x82DAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x82DBu: {
            uint16_t ea=(uint16_t)(0x039Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82DEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Du,ea)?1u:0u));
        }
        case 0x82DEu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x82E0u; return dd3_static_complete(rt,2u);
        }
        case 0x82E0u: {
            dd3_static_write8(rt,(uint16_t)(0x039Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x82E3u; return dd3_static_complete(rt,5u);
        }
        case 0x82E3u: {
            uint16_t ea=(uint16_t)(0x038Bu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82E6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x038Bu,ea)?1u:0u));
        }
        case 0x82E6u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x82E8u; return dd3_static_complete(rt,2u);
        }
        case 0x82E8u: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x82EAu; return dd3_static_complete(rt,2u);
        }
        case 0x82EAu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82ECu,0x82F0u)) c++; rt->state.cpu.pc=0x82F0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82ECu; return dd3_static_complete(rt,2u);
        }
        case 0x82ECu: {
            dd3_static_push8(rt,(uint8_t)(0x82EEu>>8)); dd3_static_push8(rt,(uint8_t)0x82EEu);
            rt->state.cpu.pc=0x88EFu; return dd3_static_complete(rt,6u);
        }
        case 0x82EFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x82F0u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82F2u; return dd3_static_complete(rt,3u);
        }
        case 0x82F2u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x82F4u; return dd3_static_complete(rt,2u);
        }
        case 0x82F4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82F6u,0x82F9u)) c++; rt->state.cpu.pc=0x82F9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82F6u; return dd3_static_complete(rt,2u);
        }
        case 0x82F6u: {
            dd3_static_push8(rt,(uint8_t)(0x82F8u>>8)); dd3_static_push8(rt,(uint8_t)0x82F8u);
            rt->state.cpu.pc=0x8916u; return dd3_static_complete(rt,6u);
        }
        case 0x82F9u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82FBu; return dd3_static_complete(rt,4u);
        }
        case 0x82FBu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x82FDu; return dd3_static_complete(rt,2u);
        }
        case 0x82FDu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82FFu,0x8320u)) c++; rt->state.cpu.pc=0x8320u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82FFu; return dd3_static_complete(rt,2u);
        }
        case 0x82FFu: {
            uint16_t ea=(uint16_t)(0x038Bu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8302u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x038Bu,ea)?1u:0u));
        }
        case 0x8302u: {
            uint8_t v=0x07u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8304u; return dd3_static_complete(rt,2u);
        }
        case 0x8304u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8306u,0x831Au)) c++; rt->state.cpu.pc=0x831Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8306u; return dd3_static_complete(rt,2u);
        }
        case 0x8306u: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8308u; return dd3_static_complete(rt,2u);
        }
        case 0x8308u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x830Au,0x831Du)) c++; rt->state.cpu.pc=0x831Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x830Au; return dd3_static_complete(rt,2u);
        }
        case 0x830Au: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x830Cu; return dd3_static_complete(rt,2u);
        }
        case 0x830Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x830Eu,0x833Eu)) c++; rt->state.cpu.pc=0x833Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x830Eu; return dd3_static_complete(rt,2u);
        }
        case 0x830Eu: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8310u; return dd3_static_complete(rt,4u);
        }
        case 0x8310u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8312u; return dd3_static_complete(rt,2u);
        }
        case 0x8312u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8314u,0x834Au)) c++; rt->state.cpu.pc=0x834Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8314u; return dd3_static_complete(rt,2u);
        }
        case 0x8314u: {
            uint8_t v=0x12u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8316u; return dd3_static_complete(rt,2u);
        }
        case 0x8316u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8318u; return dd3_static_complete(rt,4u);
        }
        case 0x8318u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x831Au,0x8384u)) c++; rt->state.cpu.pc=0x8384u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x831Au; return dd3_static_complete(rt,2u);
        }
        case 0x831Au: {
            rt->state.cpu.pc=0x838Du; return dd3_static_complete(rt,3u);
        }
        case 0x831Du: {
            rt->state.cpu.pc=0x8393u; return dd3_static_complete(rt,3u);
        }
        case 0x8320u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8322u; return dd3_static_complete(rt,4u);
        }
        case 0x8322u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8324u; return dd3_static_complete(rt,2u);
        }
        case 0x8324u: {
            uint8_t v=0x6Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8326u; return dd3_static_complete(rt,2u);
        }
        case 0x8326u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8328u,0x83A4u)) c++; rt->state.cpu.pc=0x83A4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8328u; return dd3_static_complete(rt,2u);
        }
        case 0x8328u: {
            uint8_t v=0x6Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x832Au; return dd3_static_complete(rt,2u);
        }
        case 0x832Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x832Cu,0x8334u)) c++; rt->state.cpu.pc=0x8334u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x832Cu; return dd3_static_complete(rt,2u);
        }
        case 0x832Cu: {
            uint8_t v=0x6Bu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x832Eu; return dd3_static_complete(rt,2u);
        }
        case 0x832Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8330u,0x8338u)) c++; rt->state.cpu.pc=0x8338u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8330u; return dd3_static_complete(rt,2u);
        }
        case 0x8330u: {
            uint8_t v=0x65u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8332u; return dd3_static_complete(rt,2u);
        }
        case 0x8332u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8334u,0x833Au)) c++; rt->state.cpu.pc=0x833Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8334u; return dd3_static_complete(rt,2u);
        }
        case 0x8334u: {
            uint8_t v=0x6Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8336u; return dd3_static_complete(rt,2u);
        }
        case 0x8336u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8338u,0x833Au)) c++; rt->state.cpu.pc=0x833Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8338u; return dd3_static_complete(rt,2u);
        }
        case 0x8338u: {
            uint8_t v=0x6Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x833Au; return dd3_static_complete(rt,2u);
        }
        case 0x833Au: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x833Cu; return dd3_static_complete(rt,4u);
        }
        case 0x833Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x833Eu,0x8384u)) c++; rt->state.cpu.pc=0x8384u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x833Eu; return dd3_static_complete(rt,2u);
        }
        case 0x833Eu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8340u; return dd3_static_complete(rt,4u);
        }
        case 0x8340u: {
            uint8_t v=0x99u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8342u; return dd3_static_complete(rt,2u);
        }
        case 0x8342u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8344u,0x8384u)) c++; rt->state.cpu.pc=0x8384u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8344u; return dd3_static_complete(rt,2u);
        }
        case 0x8344u: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8346u; return dd3_static_complete(rt,2u);
        }
        case 0x8346u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8348u; return dd3_static_complete(rt,4u);
        }
        case 0x8348u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x834Au,0x8384u)) c++; rt->state.cpu.pc=0x8384u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x834Au; return dd3_static_complete(rt,2u);
        }
        case 0x834Au: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x834Bu; return dd3_static_complete(rt,2u);
        }
        case 0x834Bu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x834Cu; return dd3_static_complete(rt,3u);
        }
        case 0x834Cu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x834Eu; return dd3_static_complete(rt,4u);
        }
        case 0x834Eu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8350u; return dd3_static_complete(rt,2u);
        }
        case 0x8350u: {
            uint8_t v=0x1Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8352u; return dd3_static_complete(rt,2u);
        }
        case 0x8352u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8354u,0x8378u)) c++; rt->state.cpu.pc=0x8378u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8354u; return dd3_static_complete(rt,2u);
        }
        case 0x8354u: {
            uint8_t v=0x23u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8356u; return dd3_static_complete(rt,2u);
        }
        case 0x8356u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8358u,0x8378u)) c++; rt->state.cpu.pc=0x8378u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8358u; return dd3_static_complete(rt,2u);
        }
        case 0x8358u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8359u; return dd3_static_complete(rt,2u);
        }
        case 0x8359u: {
            uint8_t v=0x1Au;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x835Bu; return dd3_static_complete(rt,2u);
        }
        case 0x835Bu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x835Cu; return dd3_static_complete(rt,2u);
        }
        case 0x835Cu: {
            uint16_t ea=(uint16_t)(0x83AAu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x835Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x83AAu,ea)?1u:0u));
        }
        case 0x835Fu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8361u,0x8373u)) c++; rt->state.cpu.pc=0x8373u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8361u; return dd3_static_complete(rt,2u);
        }
        case 0x8361u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8363u; return dd3_static_complete(rt,2u);
        }
        case 0x8363u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8365u,0x8371u)) c++; rt->state.cpu.pc=0x8371u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8365u; return dd3_static_complete(rt,2u);
        }
        case 0x8365u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8366u; return dd3_static_complete(rt,3u);
        }
        case 0x8366u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8368u; return dd3_static_complete(rt,4u);
        }
        case 0x8368u: {
            uint8_t v=0x99u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x836Au; return dd3_static_complete(rt,2u);
        }
        case 0x836Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x836Cu,0x8370u)) c++; rt->state.cpu.pc=0x8370u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x836Cu; return dd3_static_complete(rt,2u);
        }
        case 0x836Cu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x836Du; return dd3_static_complete(rt,4u);
        }
        case 0x836Du: {
            rt->state.cpu.pc=0x8373u; return dd3_static_complete(rt,3u);
        }
        case 0x8370u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8371u; return dd3_static_complete(rt,4u);
        }
        case 0x8371u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8373u; return dd3_static_complete(rt,4u);
        }
        case 0x8373u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8374u; return dd3_static_complete(rt,4u);
        }
        case 0x8374u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8375u; return dd3_static_complete(rt,2u);
        }
        case 0x8375u: {
            rt->state.cpu.pc=0x8384u; return dd3_static_complete(rt,3u);
        }
        case 0x8378u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8379u; return dd3_static_complete(rt,4u);
        }
        case 0x8379u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x837Au; return dd3_static_complete(rt,2u);
        }
        case 0x837Au: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x837Cu; return dd3_static_complete(rt,4u);
        }
        case 0x837Cu: {
            uint8_t v=0x99u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x837Eu; return dd3_static_complete(rt,2u);
        }
        case 0x837Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8380u,0x8384u)) c++; rt->state.cpu.pc=0x8384u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8380u; return dd3_static_complete(rt,2u);
        }
        case 0x8380u: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8382u; return dd3_static_complete(rt,2u);
        }
        case 0x8382u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8384u; return dd3_static_complete(rt,4u);
        }
        case 0x8384u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8386u; return dd3_static_complete(rt,3u);
        }
        case 0x8386u: {
            dd3_static_write8(rt,(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8388u; return dd3_static_complete(rt,4u);
        }
        case 0x8388u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x838Au; return dd3_static_complete(rt,3u);
        }
        case 0x838Au: {
            dd3_static_write8(rt,(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x838Cu; return dd3_static_complete(rt,4u);
        }
        case 0x838Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x838Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x838Fu; return dd3_static_complete(rt,2u);
        }
        case 0x838Fu: {
            dd3_static_write8(rt,(uint16_t)(0x045Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8392u; return dd3_static_complete(rt,5u);
        }
        case 0x8392u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8393u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8395u; return dd3_static_complete(rt,2u);
        }
        case 0x8395u: {
            dd3_static_write8(rt,(uint16_t)(0x045Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8398u; return dd3_static_complete(rt,5u);
        }
        case 0x8398u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x839Au; return dd3_static_complete(rt,4u);
        }
        case 0x839Au: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x839Cu; return dd3_static_complete(rt,2u);
        }
        case 0x839Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x839Eu,0x834Au)) c++; rt->state.cpu.pc=0x834Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x839Eu; return dd3_static_complete(rt,2u);
        }
        case 0x839Eu: {
            uint8_t v=0x1Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83A0u; return dd3_static_complete(rt,2u);
        }
        case 0x83A0u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x83A2u; return dd3_static_complete(rt,4u);
        }
        case 0x83A2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x83A4u,0x8384u)) c++; rt->state.cpu.pc=0x8384u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83A4u; return dd3_static_complete(rt,2u);
        }
        case 0x83A4u: {
            uint8_t v=0x76u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83A6u; return dd3_static_complete(rt,2u);
        }
        case 0x83A6u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x83A8u; return dd3_static_complete(rt,4u);
        }
        case 0x83A8u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x83AAu,0x8384u)) c++; rt->state.cpu.pc=0x8384u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83AAu; return dd3_static_complete(rt,2u);
        }
        case 0x83AAu: {
            uint16_t ea=(uint16_t)(0x1919u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x83ADu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x1919u,ea)?1u:0u));
        }
        case 0x83ADu: {
            uint16_t ea=(uint16_t)(0xFF19u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x83B0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xFF19u,ea)?1u:0u));
        }
        case 0x83B0u: {
            uint16_t ea=(uint16_t)(0x2119u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x83B3u; return dd3_static_complete(rt,7u);
        }
        case 0x83B3u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83B5u; return dd3_static_complete(rt,2u);
        }
        case 0x83B5u: {
            dd3_static_push8(rt,(uint8_t)(0x83B7u>>8)); dd3_static_push8(rt,(uint8_t)0x83B7u);
            rt->state.cpu.pc=0x85C8u; return dd3_static_complete(rt,6u);
        }
        case 0x83B8u: {
            uint16_t ea=(uint16_t)(0x0394u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83BBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0394u,ea)?1u:0u));
        }
        case 0x83BBu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x83BCu; return dd3_static_complete(rt,2u);
        }
        case 0x83BCu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x83BDu; return dd3_static_complete(rt,2u);
        }
        case 0x83BDu: {
            uint16_t ea=(uint16_t)(0x920Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83C0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x920Cu,ea)?1u:0u));
        }
        case 0x83C0u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x83C2u; return dd3_static_complete(rt,3u);
        }
        case 0x83C2u: {
            uint16_t ea=(uint16_t)(0x920Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83C5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x920Du,ea)?1u:0u));
        }
        case 0x83C5u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0x83C7u; return dd3_static_complete(rt,3u);
        }
        case 0x83C7u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83C9u; return dd3_static_complete(rt,2u);
        }
        case 0x83C9u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83CBu; return dd3_static_complete(rt,4u);
        }
        case 0x83CBu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x83CDu; return dd3_static_complete(rt,2u);
        }
        case 0x83CDu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x83CFu; return dd3_static_complete(rt,2u);
        }
        case 0x83CFu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x83D1u,0x83D7u)) c++; rt->state.cpu.pc=0x83D7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83D1u; return dd3_static_complete(rt,2u);
        }
        case 0x83D1u: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x83D3u; return dd3_static_complete(rt,2u);
        }
        case 0x83D3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x83D5u,0x8427u)) c++; rt->state.cpu.pc=0x8427u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83D5u; return dd3_static_complete(rt,2u);
        }
        case 0x83D5u: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83D7u; return dd3_static_complete(rt,2u);
        }
        case 0x83D7u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83D9u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x83D9u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x83DBu; return dd3_static_complete(rt,3u);
        }
        case 0x83DBu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x83DCu; return dd3_static_complete(rt,2u);
        }
        case 0x83DCu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83DEu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x83DEu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x83E0u; return dd3_static_complete(rt,3u);
        }
        case 0x83E0u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x83E1u; return dd3_static_complete(rt,2u);
        }
        case 0x83E1u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83E3u; return dd3_static_complete(rt,3u);
        }
        case 0x83E3u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x83E5u; return dd3_static_complete(rt,3u);
        }
        case 0x83E5u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0x83E7u; return dd3_static_complete(rt,3u);
        }
        case 0x83E7u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83E9u; return dd3_static_complete(rt,3u);
        }
        case 0x83E9u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x83EBu; return dd3_static_complete(rt,3u);
        }
        case 0x83EBu: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x83EDu; return dd3_static_complete(rt,3u);
        }
        case 0x83EDu: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0x83EEu; return dd3_static_complete(rt,3u);
        }
        case 0x83EEu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x83EFu; return dd3_static_complete(rt,2u);
        }
        case 0x83EFu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x83F1u; return dd3_static_complete(rt,2u);
        }
        case 0x83F1u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x83F3u,0x83F8u)) c++; rt->state.cpu.pc=0x83F8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83F3u; return dd3_static_complete(rt,2u);
        }
        case 0x83F3u: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt));
            rt->state.cpu.pc=0x83F4u; return dd3_static_complete(rt,4u);
        }
        case 0x83F4u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x83F6u,0x8407u)) c++; rt->state.cpu.pc=0x8407u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83F6u; return dd3_static_complete(rt,2u);
        }
        case 0x83F6u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x83F8u,0x8427u)) c++; rt->state.cpu.pc=0x8427u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83F8u; return dd3_static_complete(rt,2u);
        }
        case 0x83F8u: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt));
            rt->state.cpu.pc=0x83F9u; return dd3_static_complete(rt,4u);
        }
        case 0x83F9u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x83FBu,0x8427u)) c++; rt->state.cpu.pc=0x8427u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83FBu; return dd3_static_complete(rt,2u);
        }
        case 0x83FBu: {
            uint16_t ea=0x04FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83FEu; return dd3_static_complete(rt,4u);
        }
        case 0x83FEu: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8400u; return dd3_static_complete(rt,2u);
        }
        case 0x8400u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8402u,0x8407u)) c++; rt->state.cpu.pc=0x8407u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8402u; return dd3_static_complete(rt,2u);
        }
        case 0x8402u: {
            dd3_static_push8(rt,(uint8_t)(0x8404u>>8)); dd3_static_push8(rt,(uint8_t)0x8404u);
            rt->state.cpu.pc=0x8428u; return dd3_static_complete(rt,6u);
        }
        case 0x8405u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8407u,0x8427u)) c++; rt->state.cpu.pc=0x8427u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8407u; return dd3_static_complete(rt,2u);
        }
        case 0x8407u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8409u; return dd3_static_complete(rt,2u);
        }
        case 0x8409u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x840Bu; return dd3_static_complete(rt,4u);
        }
        case 0x840Bu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x840Cu; return dd3_static_complete(rt,2u);
        }
        case 0x840Cu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x840Eu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x840Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0382u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8411u; return dd3_static_complete(rt,5u);
        }
        case 0x8411u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8412u; return dd3_static_complete(rt,2u);
        }
        case 0x8412u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8414u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x8414u: {
            dd3_static_write8(rt,(uint16_t)(0x038Bu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8417u; return dd3_static_complete(rt,5u);
        }
        case 0x8417u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8419u; return dd3_static_complete(rt,2u);
        }
        case 0x8419u: {
            dd3_static_write8(rt,(uint16_t)(0x0394u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x841Cu; return dd3_static_complete(rt,5u);
        }
        case 0x841Cu: {
            dd3_static_push8(rt,(uint8_t)(0x841Eu>>8)); dd3_static_push8(rt,(uint8_t)0x841Eu);
            rt->state.cpu.pc=0x84FCu; return dd3_static_complete(rt,6u);
        }
        case 0x841Fu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8421u; return dd3_static_complete(rt,3u);
        }
        case 0x8421u: {
            dd3_static_write8(rt,(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8423u; return dd3_static_complete(rt,4u);
        }
        case 0x8423u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8425u; return dd3_static_complete(rt,3u);
        }
        case 0x8425u: {
            dd3_static_write8(rt,(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8427u; return dd3_static_complete(rt,4u);
        }
        case 0x8427u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8428u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x842Au; return dd3_static_complete(rt,4u);
        }
        case 0x842Au: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x842Cu; return dd3_static_complete(rt,2u);
        }
        case 0x842Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x842Eu,0x8461u)) c++; rt->state.cpu.pc=0x8461u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x842Eu; return dd3_static_complete(rt,2u);
        }
        case 0x842Eu: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8430u; return dd3_static_complete(rt,4u);
        }
        case 0x8430u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8431u; return dd3_static_complete(rt,2u);
        }
        case 0x8431u: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8433u; return dd3_static_complete(rt,4u);
        }
        case 0x8433u: {
            dd3_static_write8(rt,0x03E3u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8436u; return dd3_static_complete(rt,4u);
        }
        case 0x8436u: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8438u; return dd3_static_complete(rt,4u);
        }
        case 0x8438u: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x843Au; return dd3_static_complete(rt,4u);
        }
        case 0x843Au: {
            dd3_static_write8(rt,0x03E4u,rt->state.cpu.a);
            rt->state.cpu.pc=0x843Du; return dd3_static_complete(rt,4u);
        }
        case 0x843Du: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x843Fu; return dd3_static_complete(rt,3u);
        }
        case 0x843Fu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8440u; return dd3_static_complete(rt,2u);
        }
        case 0x8440u: {
            uint8_t v=0x40u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8442u; return dd3_static_complete(rt,2u);
        }
        case 0x8442u: {
            dd3_static_write8(rt,0x03E5u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8445u; return dd3_static_complete(rt,4u);
        }
        case 0x8445u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8447u; return dd3_static_complete(rt,3u);
        }
        case 0x8447u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8449u; return dd3_static_complete(rt,2u);
        }
        case 0x8449u: {
            dd3_static_write8(rt,0x03E6u,rt->state.cpu.a);
            rt->state.cpu.pc=0x844Cu; return dd3_static_complete(rt,4u);
        }
        case 0x844Cu: {
            uint16_t ea=0x03E3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x844Fu; return dd3_static_complete(rt,4u);
        }
        case 0x844Fu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8450u; return dd3_static_complete(rt,2u);
        }
        case 0x8450u: {
            uint16_t ea=0x03E5u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8453u; return dd3_static_complete(rt,4u);
        }
        case 0x8453u: {
            dd3_static_write8(rt,0x03E7u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8456u; return dd3_static_complete(rt,4u);
        }
        case 0x8456u: {
            uint16_t ea=0x03E4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8459u; return dd3_static_complete(rt,4u);
        }
        case 0x8459u: {
            uint16_t ea=0x03E6u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x845Cu; return dd3_static_complete(rt,4u);
        }
        case 0x845Cu: {
            dd3_static_write8(rt,0x03E8u,rt->state.cpu.a);
            rt->state.cpu.pc=0x845Fu; return dd3_static_complete(rt,4u);
        }
        case 0x845Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8461u,0x8463u)) c++; rt->state.cpu.pc=0x8463u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8461u; return dd3_static_complete(rt,2u);
        }
        case 0x8461u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8462u; return dd3_static_complete(rt,2u);
        }
        case 0x8462u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8463u: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8465u; return dd3_static_complete(rt,4u);
        }
        case 0x8465u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8466u; return dd3_static_complete(rt,2u);
        }
        case 0x8466u: {
            uint8_t v=0x02u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8468u; return dd3_static_complete(rt,2u);
        }
        case 0x8468u: {
            dd3_static_write8(rt,(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x846Au; return dd3_static_complete(rt,4u);
        }
        case 0x846Au: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x846Cu; return dd3_static_complete(rt,4u);
        }
        case 0x846Cu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x846Eu; return dd3_static_complete(rt,2u);
        }
        case 0x846Eu: {
            dd3_static_write8(rt,(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8470u; return dd3_static_complete(rt,4u);
        }
        case 0x8470u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8471u; return dd3_static_complete(rt,2u);
        }
        case 0x8471u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8472u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8474u; return dd3_static_complete(rt,4u);
        }
        case 0x8474u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8476u; return dd3_static_complete(rt,2u);
        }
        case 0x8476u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8478u,0x849Cu)) c++; rt->state.cpu.pc=0x849Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8478u; return dd3_static_complete(rt,2u);
        }
        case 0x8478u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8479u; return dd3_static_complete(rt,2u);
        }
        case 0x8479u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x847Au; return dd3_static_complete(rt,3u);
        }
        case 0x847Au: {
            uint8_t v=0xFDu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x847Cu; return dd3_static_complete(rt,2u);
        }
        case 0x847Cu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x847Du; return dd3_static_complete(rt,2u);
        }
        case 0x847Du: {
            uint8_t v=0x8Cu;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x847Fu; return dd3_static_complete(rt,2u);
        }
        case 0x847Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8481u>>8)); dd3_static_push8(rt,(uint8_t)0x8481u);
            rt->state.cpu.pc=0xA624u; return dd3_static_complete(rt,6u);
        }
        case 0x8482u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8483u; return dd3_static_complete(rt,4u);
        }
        case 0x8483u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8484u; return dd3_static_complete(rt,2u);
        }
        case 0x8484u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8486u,0x8493u)) c++; rt->state.cpu.pc=0x8493u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8486u; return dd3_static_complete(rt,2u);
        }
        case 0x8486u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8488u; return dd3_static_complete(rt,4u);
        }
        case 0x8488u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x848Au; return dd3_static_complete(rt,2u);
        }
        case 0x848Au: {
            uint8_t v=0xC0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x848Cu; return dd3_static_complete(rt,2u);
        }
        case 0x848Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x848Eu,0x8493u)) c++; rt->state.cpu.pc=0x8493u; return dd3_static_complete(rt,c); }
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
            uint16_t ea=(uint16_t)(0x038Bu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8496u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x038Bu,ea)?1u:0u));
        }
        case 0x8496u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8498u; return dd3_static_complete(rt,2u);
        }
        case 0x8498u: {
            uint8_t v=0x07u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x849Au; return dd3_static_complete(rt,2u);
        }
        case 0x849Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x849Cu,0x84DBu)) c++; rt->state.cpu.pc=0x84DBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x849Cu; return dd3_static_complete(rt,2u);
        }
        case 0x849Cu: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x849Eu; return dd3_static_complete(rt,4u);
        }
        case 0x849Eu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84A0u; return dd3_static_complete(rt,2u);
        }
        case 0x84A0u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x84A2u,0x84DBu)) c++; rt->state.cpu.pc=0x84DBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84A2u; return dd3_static_complete(rt,2u);
        }
        case 0x84A2u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84A4u; return dd3_static_complete(rt,4u);
        }
        case 0x84A4u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x84A5u; return dd3_static_complete(rt,2u);
        }
        case 0x84A5u: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x84A7u; return dd3_static_complete(rt,4u);
        }
        case 0x84A7u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x84A9u; return dd3_static_complete(rt,3u);
        }
        case 0x84A9u: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84ABu; return dd3_static_complete(rt,4u);
        }
        case 0x84ABu: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x84ADu; return dd3_static_complete(rt,4u);
        }
        case 0x84ADu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x84AFu; return dd3_static_complete(rt,3u);
        }
        case 0x84AFu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84B1u; return dd3_static_complete(rt,3u);
        }
        case 0x84B1u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x84B2u; return dd3_static_complete(rt,2u);
        }
        case 0x84B2u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x84B4u; return dd3_static_complete(rt,3u);
        }
        case 0x84B4u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x84B6u; return dd3_static_complete(rt,3u);
        }
        case 0x84B6u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84B8u; return dd3_static_complete(rt,3u);
        }
        case 0x84B8u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x84BAu; return dd3_static_complete(rt,3u);
        }
        case 0x84BAu: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x84BCu; return dd3_static_complete(rt,3u);
        }
        case 0x84BCu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x84BEu,0x84C0u)) c++; rt->state.cpu.pc=0x84C0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84BEu; return dd3_static_complete(rt,2u);
        }
        case 0x84BEu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x84C0u,0x84DBu)) c++; rt->state.cpu.pc=0x84DBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84C0u; return dd3_static_complete(rt,2u);
        }
        case 0x84C0u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84C2u; return dd3_static_complete(rt,4u);
        }
        case 0x84C2u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84C4u; return dd3_static_complete(rt,2u);
        }
        case 0x84C4u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x84C6u; return dd3_static_complete(rt,2u);
        }
        case 0x84C6u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84C8u,0x84DBu)) c++; rt->state.cpu.pc=0x84DBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84C8u; return dd3_static_complete(rt,2u);
        }
        case 0x84C8u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x84CAu; return dd3_static_complete(rt,2u);
        }
        case 0x84CAu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x84CCu,0x84D2u)) c++; rt->state.cpu.pc=0x84D2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84CCu; return dd3_static_complete(rt,2u);
        }
        case 0x84CCu: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84CEu; return dd3_static_complete(rt,2u);
        }
        case 0x84CEu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x84D0u; return dd3_static_complete(rt,4u);
        }
        case 0x84D0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84D2u,0x84D6u)) c++; rt->state.cpu.pc=0x84D6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84D2u; return dd3_static_complete(rt,2u);
        }
        case 0x84D2u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84D4u; return dd3_static_complete(rt,2u);
        }
        case 0x84D4u: {
            dd3_static_write8(rt,(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x84D6u; return dd3_static_complete(rt,4u);
        }
        case 0x84D6u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84D8u; return dd3_static_complete(rt,2u);
        }
        case 0x84D8u: {
            dd3_static_write8(rt,(uint16_t)(0x045Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x84DBu; return dd3_static_complete(rt,5u);
        }
        case 0x84DBu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x84DCu: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84DEu; return dd3_static_complete(rt,4u);
        }
        case 0x84DEu: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84E0u; return dd3_static_complete(rt,2u);
        }
        case 0x84E0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84E2u,0x84FBu)) c++; rt->state.cpu.pc=0x84FBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84E2u; return dd3_static_complete(rt,2u);
        }
        case 0x84E2u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84E4u; return dd3_static_complete(rt,4u);
        }
        case 0x84E4u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84E6u; return dd3_static_complete(rt,2u);
        }
        case 0x84E6u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84E8u,0x84FBu)) c++; rt->state.cpu.pc=0x84FBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84E8u; return dd3_static_complete(rt,2u);
        }
        case 0x84E8u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84EAu; return dd3_static_complete(rt,4u);
        }
        case 0x84EAu: {
            uint8_t v=0xF7u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84ECu; return dd3_static_complete(rt,2u);
        }
        case 0x84ECu: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x84EEu; return dd3_static_complete(rt,4u);
        }
        case 0x84EEu: {
            dd3_static_push8(rt,(uint8_t)(0x84F0u>>8)); dd3_static_push8(rt,(uint8_t)0x84F0u);
            rt->state.cpu.pc=0x84FCu; return dd3_static_complete(rt,6u);
        }
        case 0x84F1u: {
            uint16_t ea=0x23u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84F3u; return dd3_static_complete(rt,3u);
        }
        case 0x84F3u: {
            dd3_static_write8(rt,(uint16_t)(0x038Bu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x84F6u; return dd3_static_complete(rt,5u);
        }
        case 0x84F6u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84F8u; return dd3_static_complete(rt,2u);
        }
        case 0x84F8u: {
            dd3_static_write8(rt,(uint16_t)(0x03AFu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x84FBu; return dd3_static_complete(rt,5u);
        }
        case 0x84FBu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x84FCu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84FDu; return dd3_static_complete(rt,2u);
        }
        case 0x84FDu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84FEu; return dd3_static_complete(rt,3u);
        }
        case 0x84FEu: {
            uint16_t ea=0x00F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8501u; return dd3_static_complete(rt,4u);
        }
        case 0x8501u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8502u; return dd3_static_complete(rt,2u);
        }
        case 0x8502u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8503u; return dd3_static_complete(rt,2u);
        }
        case 0x8503u: {
            uint16_t ea=(uint16_t)(0x89BBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8506u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x89BBu,ea)?1u:0u));
        }
        case 0x8506u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8508u; return dd3_static_complete(rt,3u);
        }
        case 0x8508u: {
            uint16_t ea=(uint16_t)(0x89BCu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x850Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x89BCu,ea)?1u:0u));
        }
        case 0x850Bu: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0x850Du; return dd3_static_complete(rt,3u);
        }
        case 0x850Du: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8510u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0x8510u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8511u; return dd3_static_complete(rt,2u);
        }
        case 0x8511u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8512u; return dd3_static_complete(rt,2u);
        }
        case 0x8512u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8513u; return dd3_static_complete(rt,2u);
        }
        case 0x8513u: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8516u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0x8516u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8517u; return dd3_static_complete(rt,2u);
        }
        case 0x8517u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8518u; return dd3_static_complete(rt,2u);
        }
        case 0x8518u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8519u; return dd3_static_complete(rt,2u);
        }
        case 0x8519u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x851Bu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x851Bu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x851Du; return dd3_static_complete(rt,3u);
        }
        case 0x851Du: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x851Eu; return dd3_static_complete(rt,2u);
        }
        case 0x851Eu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8520u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x8520u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8522u; return dd3_static_complete(rt,3u);
        }
        case 0x8522u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8523u; return dd3_static_complete(rt,2u);
        }
        case 0x8523u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8525u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x8525u: {
            dd3_static_write8(rt,0x23u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8527u; return dd3_static_complete(rt,3u);
        }
        case 0x8527u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8528u; return dd3_static_complete(rt,4u);
        }
        case 0x8528u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8529u; return dd3_static_complete(rt,2u);
        }
        case 0x8529u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x852Au: {
            uint16_t ea=0x1Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x852Cu; return dd3_static_complete(rt,3u);
        }
        case 0x852Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x852Eu,0x8549u)) c++; rt->state.cpu.pc=0x8549u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x852Eu; return dd3_static_complete(rt,2u);
        }
        case 0x852Eu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8530u; return dd3_static_complete(rt,2u);
        }
        case 0x8530u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8532u,0x8559u)) c++; rt->state.cpu.pc=0x8559u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8532u; return dd3_static_complete(rt,2u);
        }
        case 0x8532u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8534u; return dd3_static_complete(rt,2u);
        }
        case 0x8534u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8536u,0x8539u)) c++; rt->state.cpu.pc=0x8539u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8536u; return dd3_static_complete(rt,2u);
        }
        case 0x8536u: {
            rt->state.cpu.pc=0x859Du; return dd3_static_complete(rt,3u);
        }
        case 0x8539u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x853Au; return dd3_static_complete(rt,2u);
        }
        case 0x853Au: {
            uint16_t ea=0x03E7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x853Du; return dd3_static_complete(rt,4u);
        }
        case 0x853Du: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x853Fu; return dd3_static_complete(rt,4u);
        }
        case 0x853Fu: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8541u; return dd3_static_complete(rt,4u);
        }
        case 0x8541u: {
            uint16_t ea=0x03E8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8544u; return dd3_static_complete(rt,4u);
        }
        case 0x8544u: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8546u; return dd3_static_complete(rt,4u);
        }
        case 0x8546u: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8548u; return dd3_static_complete(rt,4u);
        }
        case 0x8548u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8549u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x854Au; return dd3_static_complete(rt,2u);
        }
        case 0x854Au: {
            uint16_t ea=0x03E7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x854Du; return dd3_static_complete(rt,4u);
        }
        case 0x854Du: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x854Fu; return dd3_static_complete(rt,4u);
        }
        case 0x854Fu: {
            dd3_static_write8(rt,(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8551u; return dd3_static_complete(rt,4u);
        }
        case 0x8551u: {
            uint16_t ea=0x03E8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8554u; return dd3_static_complete(rt,4u);
        }
        case 0x8554u: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8556u; return dd3_static_complete(rt,4u);
        }
        case 0x8556u: {
            dd3_static_write8(rt,(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8558u; return dd3_static_complete(rt,4u);
        }
        case 0x8558u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8559u: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x855Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0x855Cu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x855Du; return dd3_static_complete(rt,2u);
        }
        case 0x855Du: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x855Fu; return dd3_static_complete(rt,2u);
        }
        case 0x855Fu: {
            uint8_t v=0xE0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8561u; return dd3_static_complete(rt,2u);
        }
        case 0x8561u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8562u; return dd3_static_complete(rt,2u);
        }
        case 0x8562u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8563u; return dd3_static_complete(rt,2u);
        }
        case 0x8563u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8564u; return dd3_static_complete(rt,2u);
        }
        case 0x8564u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8565u; return dd3_static_complete(rt,2u);
        }
        case 0x8565u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8566u; return dd3_static_complete(rt,2u);
        }
        case 0x8566u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8567u; return dd3_static_complete(rt,3u);
        }
        case 0x8567u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8569u; return dd3_static_complete(rt,3u);
        }
        case 0x8569u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x856Bu; return dd3_static_complete(rt,2u);
        }
        case 0x856Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x856Du,0x8585u)) c++; rt->state.cpu.pc=0x8585u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x856Du; return dd3_static_complete(rt,2u);
        }
        case 0x856Du: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x856Eu; return dd3_static_complete(rt,4u);
        }
        case 0x856Eu: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8570u; return dd3_static_complete(rt,2u);
        }
        case 0x8570u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8572u,0x8582u)) c++; rt->state.cpu.pc=0x8582u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8572u; return dd3_static_complete(rt,2u);
        }
        case 0x8572u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8573u; return dd3_static_complete(rt,2u);
        }
        case 0x8573u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8575u; return dd3_static_complete(rt,4u);
        }
        case 0x8575u: {
            uint16_t ea=0x03E7u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8578u; return dd3_static_complete(rt,4u);
        }
        case 0x8578u: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x857Au; return dd3_static_complete(rt,4u);
        }
        case 0x857Au: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,4u);
        }
        case 0x857Cu: {
            uint16_t ea=0x03E8u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x857Fu; return dd3_static_complete(rt,4u);
        }
        case 0x857Fu: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8581u; return dd3_static_complete(rt,4u);
        }
        case 0x8581u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8582u: {
            rt->state.cpu.pc=0x8549u; return dd3_static_complete(rt,3u);
        }
        case 0x8585u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8586u; return dd3_static_complete(rt,4u);
        }
        case 0x8586u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8588u; return dd3_static_complete(rt,2u);
        }
        case 0x8588u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x858Au,0x859Au)) c++; rt->state.cpu.pc=0x859Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x858Au; return dd3_static_complete(rt,2u);
        }
        case 0x858Au: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x858Bu; return dd3_static_complete(rt,2u);
        }
        case 0x858Bu: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x858Du; return dd3_static_complete(rt,4u);
        }
        case 0x858Du: {
            uint16_t ea=0x03E7u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8590u; return dd3_static_complete(rt,4u);
        }
        case 0x8590u: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8592u; return dd3_static_complete(rt,4u);
        }
        case 0x8592u: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8594u; return dd3_static_complete(rt,4u);
        }
        case 0x8594u: {
            uint16_t ea=0x03E8u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8597u; return dd3_static_complete(rt,4u);
        }
        case 0x8597u: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8599u; return dd3_static_complete(rt,4u);
        }
        case 0x8599u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x859Au: {
            rt->state.cpu.pc=0x8549u; return dd3_static_complete(rt,3u);
        }
        case 0x859Du: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85A0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0x85A0u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x85A1u; return dd3_static_complete(rt,2u);
        }
        case 0x85A1u: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x85A3u; return dd3_static_complete(rt,2u);
        }
        case 0x85A3u: {
            uint8_t v=0xE0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85A5u; return dd3_static_complete(rt,2u);
        }
        case 0x85A5u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85A6u; return dd3_static_complete(rt,2u);
        }
        case 0x85A6u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85A7u; return dd3_static_complete(rt,2u);
        }
        case 0x85A7u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85A8u; return dd3_static_complete(rt,2u);
        }
        case 0x85A8u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85A9u; return dd3_static_complete(rt,2u);
        }
        case 0x85A9u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85AAu; return dd3_static_complete(rt,2u);
        }
        case 0x85AAu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85ABu; return dd3_static_complete(rt,3u);
        }
        case 0x85ABu: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85ADu; return dd3_static_complete(rt,3u);
        }
        case 0x85ADu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85AFu; return dd3_static_complete(rt,2u);
        }
        case 0x85AFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x85B1u,0x85BCu)) c++; rt->state.cpu.pc=0x85BCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85B1u; return dd3_static_complete(rt,2u);
        }
        case 0x85B1u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85B2u; return dd3_static_complete(rt,4u);
        }
        case 0x85B2u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x85B4u; return dd3_static_complete(rt,2u);
        }
        case 0x85B4u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x85B6u,0x85B9u)) c++; rt->state.cpu.pc=0x85B9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85B6u; return dd3_static_complete(rt,2u);
        }
        case 0x85B6u: {
            rt->state.cpu.pc=0x8539u; return dd3_static_complete(rt,3u);
        }
        case 0x85B9u: {
            rt->state.cpu.pc=0x8549u; return dd3_static_complete(rt,3u);
        }
        case 0x85BCu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85BDu; return dd3_static_complete(rt,4u);
        }
        case 0x85BDu: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x85BFu; return dd3_static_complete(rt,2u);
        }
        case 0x85BFu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x85C1u,0x85C4u)) c++; rt->state.cpu.pc=0x85C4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85C1u; return dd3_static_complete(rt,2u);
        }
        case 0x85C1u: {
            rt->state.cpu.pc=0x8539u; return dd3_static_complete(rt,3u);
        }
        case 0x85C4u: {
            rt->state.cpu.pc=0x8549u; return dd3_static_complete(rt,3u);
        }
        case 0x85C8u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.y);
            rt->state.cpu.pc=0x85CAu; return dd3_static_complete(rt,3u);
        }
        case 0x85CAu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85CCu; return dd3_static_complete(rt,2u);
        }
        case 0x85CCu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85CEu; return dd3_static_complete(rt,4u);
        }
        case 0x85CEu: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x85D0u; return dd3_static_complete(rt,2u);
        }
        case 0x85D0u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x85D2u,0x85E0u)) c++; rt->state.cpu.pc=0x85E0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85D2u; return dd3_static_complete(rt,2u);
        }
        case 0x85D2u: {
            uint8_t v=0x03u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85D4u; return dd3_static_complete(rt,2u);
        }
        case 0x85D4u: {
            uint8_t v=0x09u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x85D6u; return dd3_static_complete(rt,2u);
        }
        case 0x85D6u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x85D8u,0x85E0u)) c++; rt->state.cpu.pc=0x85E0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85D8u; return dd3_static_complete(rt,2u);
        }
        case 0x85D8u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85DAu; return dd3_static_complete(rt,2u);
        }
        case 0x85DAu: {
            uint8_t v=0x12u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x85DCu; return dd3_static_complete(rt,2u);
        }
        case 0x85DCu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x85DEu,0x85E0u)) c++; rt->state.cpu.pc=0x85E0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85DEu; return dd3_static_complete(rt,2u);
        }
        case 0x85DEu: {
            uint8_t v=0x06u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85E0u; return dd3_static_complete(rt,2u);
        }
        case 0x85E0u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85E1u; return dd3_static_complete(rt,2u);
        }
        case 0x85E1u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x85E2u; return dd3_static_complete(rt,2u);
        }
        case 0x85E2u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x85E4u; return dd3_static_complete(rt,3u);
        }
        case 0x85E4u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x85E5u; return dd3_static_complete(rt,2u);
        }
        case 0x85E5u: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85E7u; return dd3_static_complete(rt,4u);
        }
        case 0x85E7u: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0x85E8u; return dd3_static_complete(rt,3u);
        }
        case 0x85E8u: {
            uint16_t ea=(uint16_t)(0x863Fu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85EBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x863Fu,ea)?1u:0u));
        }
        case 0x85EBu: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt));
            rt->state.cpu.pc=0x85ECu; return dd3_static_complete(rt,4u);
        }
        case 0x85ECu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x85EEu,0x85F3u)) c++; rt->state.cpu.pc=0x85F3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85EEu; return dd3_static_complete(rt,2u);
        }
        case 0x85EEu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85F0u; return dd3_static_complete(rt,2u);
        }
        case 0x85F0u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x85F1u; return dd3_static_complete(rt,2u);
        }
        case 0x85F1u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x85F3u; return dd3_static_complete(rt,2u);
        }
        case 0x85F3u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85F5u; return dd3_static_complete(rt,2u);
        }
        case 0x85F5u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x85F6u; return dd3_static_complete(rt,2u);
        }
        case 0x85F6u: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0x85F7u; return dd3_static_complete(rt,3u);
        }
        case 0x85F7u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x85F9u; return dd3_static_complete(rt,4u);
        }
        case 0x85F9u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x85FBu; return dd3_static_complete(rt,3u);
        }
        case 0x85FBu: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85FDu; return dd3_static_complete(rt,4u);
        }
        case 0x85FDu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x85FFu; return dd3_static_complete(rt,2u);
        }
        case 0x85FFu: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt));
            rt->state.cpu.pc=0x8600u; return dd3_static_complete(rt,4u);
        }
        case 0x8600u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8602u,0x8604u)) c++; rt->state.cpu.pc=0x8604u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8602u; return dd3_static_complete(rt,2u);
        }
        case 0x8602u: {
            uint8_t v=0xFFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8604u; return dd3_static_complete(rt,2u);
        }
        case 0x8604u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8606u; return dd3_static_complete(rt,3u);
        }
        case 0x8606u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8608u; return dd3_static_complete(rt,2u);
        }
        case 0x8608u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x860Au,0x8610u)) c++; rt->state.cpu.pc=0x8610u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x860Au; return dd3_static_complete(rt,2u);
        }
        case 0x860Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x860Cu; return dd3_static_complete(rt,2u);
        }
        case 0x860Cu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x860Eu; return dd3_static_complete(rt,3u);
        }
        case 0x860Eu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8610u; return dd3_static_complete(rt,3u);
        }
        case 0x8610u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8612u; return dd3_static_complete(rt,4u);
        }
        case 0x8612u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8614u; return dd3_static_complete(rt,2u);
        }
        case 0x8614u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8616u,0x862Eu)) c++; rt->state.cpu.pc=0x862Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8616u; return dd3_static_complete(rt,2u);
        }
        case 0x8616u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8618u; return dd3_static_complete(rt,4u);
        }
        case 0x8618u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x861Au; return dd3_static_complete(rt,2u);
        }
        case 0x861Au: {
            uint8_t v=0x80u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x861Cu; return dd3_static_complete(rt,2u);
        }
        case 0x861Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x861Eu,0x862Eu)) c++; rt->state.cpu.pc=0x862Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x861Eu; return dd3_static_complete(rt,2u);
        }
        case 0x861Eu: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8620u; return dd3_static_complete(rt,4u);
        }
        case 0x8620u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8621u; return dd3_static_complete(rt,2u);
        }
        case 0x8621u: {
            uint8_t v=0x02u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8623u; return dd3_static_complete(rt,2u);
        }
        case 0x8623u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8625u; return dd3_static_complete(rt,3u);
        }
        case 0x8625u: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8627u; return dd3_static_complete(rt,4u);
        }
        case 0x8627u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8629u; return dd3_static_complete(rt,2u);
        }
        case 0x8629u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x862Bu; return dd3_static_complete(rt,3u);
        }
        case 0x862Bu: {
            rt->state.cpu.pc=0x8636u; return dd3_static_complete(rt,3u);
        }
        case 0x862Eu: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8630u; return dd3_static_complete(rt,4u);
        }
        case 0x8630u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8632u; return dd3_static_complete(rt,3u);
        }
        case 0x8632u: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8634u; return dd3_static_complete(rt,4u);
        }
        case 0x8634u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8636u; return dd3_static_complete(rt,3u);
        }
        case 0x8636u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8638u; return dd3_static_complete(rt,4u);
        }
        case 0x8638u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0x863Au; return dd3_static_complete(rt,3u);
        }
        case 0x863Au: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x863Cu; return dd3_static_complete(rt,4u);
        }
        case 0x863Cu: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x863Eu; return dd3_static_complete(rt,3u);
        }
        case 0x863Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8648u: {
            uint16_t ea=0x00F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x864Bu; return dd3_static_complete(rt,4u);
        }
        case 0x864Bu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x864Cu; return dd3_static_complete(rt,2u);
        }
        case 0x864Cu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x864Du; return dd3_static_complete(rt,2u);
        }
        case 0x864Du: {
            uint16_t ea=(uint16_t)(0x89BBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8650u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x89BBu,ea)?1u:0u));
        }
        case 0x8650u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8652u; return dd3_static_complete(rt,3u);
        }
        case 0x8652u: {
            uint16_t ea=(uint16_t)(0x89BCu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8655u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x89BCu,ea)?1u:0u));
        }
        case 0x8655u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8657u; return dd3_static_complete(rt,3u);
        }
        case 0x8657u: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x865Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0x865Au: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x865Bu; return dd3_static_complete(rt,2u);
        }
        case 0x865Bu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x865Cu; return dd3_static_complete(rt,2u);
        }
        case 0x865Cu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x865Du; return dd3_static_complete(rt,2u);
        }
        case 0x865Du: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8660u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0x8660u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8661u; return dd3_static_complete(rt,2u);
        }
        case 0x8661u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8663u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x8663u: {
            dd3_static_write8(rt,0x03DFu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8666u; return dd3_static_complete(rt,4u);
        }
        case 0x8666u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8667u; return dd3_static_complete(rt,2u);
        }
        case 0x8667u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8669u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x8669u: {
            dd3_static_write8(rt,0x03E0u,rt->state.cpu.a);
            rt->state.cpu.pc=0x866Cu; return dd3_static_complete(rt,4u);
        }
        case 0x866Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x866Eu; return dd3_static_complete(rt,2u);
        }
        case 0x866Eu: {
            uint16_t ea=0x03DFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8671u; return dd3_static_complete(rt,4u);
        }
        case 0x8671u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8673u; return dd3_static_complete(rt,3u);
        }
        case 0x8673u: {
            uint16_t ea=0x03E0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8676u; return dd3_static_complete(rt,4u);
        }
        case 0x8676u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8678u; return dd3_static_complete(rt,3u);
        }
        case 0x8678u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8679u; return dd3_static_complete(rt,2u);
        }
        case 0x8679u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x867Bu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x867Bu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x867Du; return dd3_static_complete(rt,3u);
        }
        case 0x867Du: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x867Fu; return dd3_static_complete(rt,3u);
        }
        case 0x867Fu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8680u; return dd3_static_complete(rt,2u);
        }
        case 0x8680u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8682u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x8682u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8684u; return dd3_static_complete(rt,3u);
        }
        case 0x8684u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8685u; return dd3_static_complete(rt,2u);
        }
        case 0x8685u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8687u,0x868Bu)) c++; rt->state.cpu.pc=0x868Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8687u; return dd3_static_complete(rt,2u);
        }
        case 0x8687u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8688u; return dd3_static_complete(rt,2u);
        }
        case 0x8688u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8689u; return dd3_static_complete(rt,2u);
        }
        case 0x8689u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x868Bu,0x8678u)) c++; rt->state.cpu.pc=0x8678u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x868Bu; return dd3_static_complete(rt,2u);
        }
        case 0x868Bu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x868Du; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x868Du: {
            dd3_static_write8(rt,0x03E1u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8690u; return dd3_static_complete(rt,4u);
        }
        case 0x8690u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8691u; return dd3_static_complete(rt,2u);
        }
        case 0x8691u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8693u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x8693u: {
            dd3_static_write8(rt,0x03E2u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8696u; return dd3_static_complete(rt,4u);
        }
        case 0x8696u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8698u; return dd3_static_complete(rt,2u);
        }
        case 0x8698u: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.y);
            rt->state.cpu.pc=0x869Au; return dd3_static_complete(rt,3u);
        }
        case 0x869Au: {
            uint16_t ea=0x03E1u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x869Du; return dd3_static_complete(rt,4u);
        }
        case 0x869Du: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x869Fu; return dd3_static_complete(rt,3u);
        }
        case 0x869Fu: {
            uint16_t ea=0x03E2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86A2u; return dd3_static_complete(rt,4u);
        }
        case 0x86A2u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0x86A4u; return dd3_static_complete(rt,3u);
        }
        case 0x86A4u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86A6u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x86A6u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x86A8u,0x8713u)) c++; rt->state.cpu.pc=0x8713u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86A8u; return dd3_static_complete(rt,2u);
        }
        case 0x86A8u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86A9u; return dd3_static_complete(rt,3u);
        }
        case 0x86A9u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86AAu; return dd3_static_complete(rt,2u);
        }
        case 0x86AAu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86ACu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x86ACu: {
            dd3_static_write8(rt,0x03E3u,rt->state.cpu.a);
            rt->state.cpu.pc=0x86AFu; return dd3_static_complete(rt,4u);
        }
        case 0x86AFu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86B0u; return dd3_static_complete(rt,2u);
        }
        case 0x86B0u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86B2u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x86B2u: {
            dd3_static_write8(rt,0x03E4u,rt->state.cpu.a);
            rt->state.cpu.pc=0x86B5u; return dd3_static_complete(rt,4u);
        }
        case 0x86B5u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86B6u; return dd3_static_complete(rt,4u);
        }
        case 0x86B6u: {
            dd3_static_write8(rt,0x1Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0x86B8u; return dd3_static_complete(rt,3u);
        }
        case 0x86B8u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x86BAu,0x86C9u)) c++; rt->state.cpu.pc=0x86C9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86BAu; return dd3_static_complete(rt,2u);
        }
        case 0x86BAu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x86BCu; return dd3_static_complete(rt,2u);
        }
        case 0x86BCu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x86BEu,0x86D0u)) c++; rt->state.cpu.pc=0x86D0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86BEu; return dd3_static_complete(rt,2u);
        }
        case 0x86BEu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x86C0u; return dd3_static_complete(rt,2u);
        }
        case 0x86C0u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x86C2u,0x86D7u)) c++; rt->state.cpu.pc=0x86D7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86C2u; return dd3_static_complete(rt,2u);
        }
        case 0x86C2u: {
            dd3_static_push8(rt,(uint8_t)(0x86C4u>>8)); dd3_static_push8(rt,(uint8_t)0x86C4u);
            rt->state.cpu.pc=0x87C7u; return dd3_static_complete(rt,6u);
        }
        case 0x86C5u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x86C7u,0x86E4u)) c++; rt->state.cpu.pc=0x86E4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86C7u; return dd3_static_complete(rt,2u);
        }
        case 0x86C7u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x86C9u,0x86DCu)) c++; rt->state.cpu.pc=0x86DCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86C9u; return dd3_static_complete(rt,2u);
        }
        case 0x86C9u: {
            dd3_static_push8(rt,(uint8_t)(0x86CBu>>8)); dd3_static_push8(rt,(uint8_t)0x86CBu);
            rt->state.cpu.pc=0x8721u; return dd3_static_complete(rt,6u);
        }
        case 0x86CCu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x86CEu,0x86E4u)) c++; rt->state.cpu.pc=0x86E4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86CEu; return dd3_static_complete(rt,2u);
        }
        case 0x86CEu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x86D0u,0x86DCu)) c++; rt->state.cpu.pc=0x86DCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86D0u; return dd3_static_complete(rt,2u);
        }
        case 0x86D0u: {
            dd3_static_push8(rt,(uint8_t)(0x86D2u>>8)); dd3_static_push8(rt,(uint8_t)0x86D2u);
            rt->state.cpu.pc=0x874Du; return dd3_static_complete(rt,6u);
        }
        case 0x86D3u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x86D5u,0x86E4u)) c++; rt->state.cpu.pc=0x86E4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86D5u; return dd3_static_complete(rt,2u);
        }
        case 0x86D5u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x86D7u,0x86DCu)) c++; rt->state.cpu.pc=0x86DCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86D7u; return dd3_static_complete(rt,2u);
        }
        case 0x86D7u: {
            dd3_static_push8(rt,(uint8_t)(0x86D9u>>8)); dd3_static_push8(rt,(uint8_t)0x86D9u);
            rt->state.cpu.pc=0x878Au; return dd3_static_complete(rt,6u);
        }
        case 0x86DAu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x86DCu,0x86E4u)) c++; rt->state.cpu.pc=0x86E4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86DCu; return dd3_static_complete(rt,2u);
        }
        case 0x86DCu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86DDu; return dd3_static_complete(rt,2u);
        }
        case 0x86DDu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86DEu; return dd3_static_complete(rt,2u);
        }
        case 0x86DEu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86DFu; return dd3_static_complete(rt,2u);
        }
        case 0x86DFu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86E0u; return dd3_static_complete(rt,2u);
        }
        case 0x86E0u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x86E2u; return dd3_static_complete(rt,5u);
        }
        case 0x86E2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x86E4u,0x86A4u)) c++; rt->state.cpu.pc=0x86A4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86E4u; return dd3_static_complete(rt,2u);
        }
        case 0x86E4u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86E5u; return dd3_static_complete(rt,2u);
        }
        case 0x86E5u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86E7u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x86E7u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x86E9u; return dd3_static_complete(rt,3u);
        }
        case 0x86E9u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86EAu; return dd3_static_complete(rt,2u);
        }
        case 0x86EAu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86ECu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x86ECu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x86EEu; return dd3_static_complete(rt,3u);
        }
        case 0x86EEu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86EFu; return dd3_static_complete(rt,2u);
        }
        case 0x86EFu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86F1u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x86F1u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x86F3u; return dd3_static_complete(rt,3u);
        }
        case 0x86F3u: {
            uint16_t ea=0x00F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86F6u; return dd3_static_complete(rt,4u);
        }
        case 0x86F6u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86F7u; return dd3_static_complete(rt,2u);
        }
        case 0x86F7u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86F8u; return dd3_static_complete(rt,2u);
        }
        case 0x86F8u: {
            uint16_t ea=(uint16_t)(0x89BBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86FBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x89BBu,ea)?1u:0u));
        }
        case 0x86FBu: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x86FDu; return dd3_static_complete(rt,3u);
        }
        case 0x86FDu: {
            uint16_t ea=(uint16_t)(0x89BCu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8700u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x89BCu,ea)?1u:0u));
        }
        case 0x8700u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8702u; return dd3_static_complete(rt,3u);
        }
        case 0x8702u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8704u; return dd3_static_complete(rt,3u);
        }
        case 0x8704u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8705u; return dd3_static_complete(rt,2u);
        }
        case 0x8705u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8706u; return dd3_static_complete(rt,2u);
        }
        case 0x8706u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8707u; return dd3_static_complete(rt,2u);
        }
        case 0x8707u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8709u; return dd3_static_complete(rt,3u);
        }
        case 0x8709u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x870Au; return dd3_static_complete(rt,2u);
        }
        case 0x870Au: {
            uint8_t v=0x04u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x870Cu; return dd3_static_complete(rt,2u);
        }
        case 0x870Cu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x870Du; return dd3_static_complete(rt,2u);
        }
        case 0x870Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x870Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0x870Fu: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8711u; return dd3_static_complete(rt,3u);
        }
        case 0x8711u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8712u; return dd3_static_complete(rt,2u);
        }
        case 0x8712u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8713u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8715u; return dd3_static_complete(rt,2u);
        }
        case 0x8715u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8717u; return dd3_static_complete(rt,3u);
        }
        case 0x8717u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8719u; return dd3_static_complete(rt,3u);
        }
        case 0x8719u: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x871Bu; return dd3_static_complete(rt,3u);
        }
        case 0x871Bu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x871Du; return dd3_static_complete(rt,2u);
        }
        case 0x871Du: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x871Fu; return dd3_static_complete(rt,3u);
        }
        case 0x871Fu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8720u; return dd3_static_complete(rt,2u);
        }
        case 0x8720u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8721u: {
            uint16_t ea=0x03E3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8724u; return dd3_static_complete(rt,4u);
        }
        case 0x8724u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8725u; return dd3_static_complete(rt,2u);
        }
        case 0x8725u: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8727u; return dd3_static_complete(rt,3u);
        }
        case 0x8727u: {
            dd3_static_write8(rt,0x03E7u,rt->state.cpu.a);
            rt->state.cpu.pc=0x872Au; return dd3_static_complete(rt,4u);
        }
        case 0x872Au: {
            uint16_t ea=0x03E4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x872Du; return dd3_static_complete(rt,4u);
        }
        case 0x872Du: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x872Fu; return dd3_static_complete(rt,3u);
        }
        case 0x872Fu: {
            dd3_static_write8(rt,0x03E8u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8732u; return dd3_static_complete(rt,4u);
        }
        case 0x8732u: {
            uint16_t ea=0x03E7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8735u; return dd3_static_complete(rt,4u);
        }
        case 0x8735u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8737u,0x8749u)) c++; rt->state.cpu.pc=0x8749u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8737u; return dd3_static_complete(rt,2u);
        }
        case 0x8737u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8739u; return dd3_static_complete(rt,3u);
        }
        case 0x8739u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x873Bu; return dd3_static_complete(rt,2u);
        }
        case 0x873Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x873Du,0x8744u)) c++; rt->state.cpu.pc=0x8744u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x873Du; return dd3_static_complete(rt,2u);
        }
        case 0x873Du: {
            uint16_t ea=0x03E8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8740u; return dd3_static_complete(rt,4u);
        }
        case 0x8740u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8742u,0x8749u)) c++; rt->state.cpu.pc=0x8749u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8742u; return dd3_static_complete(rt,2u);
        }
        case 0x8742u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8744u,0x874Bu)) c++; rt->state.cpu.pc=0x874Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8744u; return dd3_static_complete(rt,2u);
        }
        case 0x8744u: {
            uint16_t ea=0x03E8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8747u; return dd3_static_complete(rt,4u);
        }
        case 0x8747u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8749u,0x874Bu)) c++; rt->state.cpu.pc=0x874Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8749u; return dd3_static_complete(rt,2u);
        }
        case 0x8749u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x874Au; return dd3_static_complete(rt,2u);
        }
        case 0x874Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x874Bu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x874Cu; return dd3_static_complete(rt,2u);
        }
        case 0x874Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x874Du: {
            uint16_t ea=0x03E3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8750u; return dd3_static_complete(rt,4u);
        }
        case 0x8750u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8751u; return dd3_static_complete(rt,2u);
        }
        case 0x8751u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8753u; return dd3_static_complete(rt,3u);
        }
        case 0x8753u: {
            dd3_static_write8(rt,0x03E5u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8756u; return dd3_static_complete(rt,4u);
        }
        case 0x8756u: {
            uint16_t ea=0x03E4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8759u; return dd3_static_complete(rt,4u);
        }
        case 0x8759u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x875Bu; return dd3_static_complete(rt,3u);
        }
        case 0x875Bu: {
            dd3_static_write8(rt,0x03E6u,rt->state.cpu.a);
            rt->state.cpu.pc=0x875Eu; return dd3_static_complete(rt,4u);
        }
        case 0x875Eu: {
            uint16_t ea=0x03E5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8761u; return dd3_static_complete(rt,4u);
        }
        case 0x8761u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8762u; return dd3_static_complete(rt,2u);
        }
        case 0x8762u: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8764u; return dd3_static_complete(rt,3u);
        }
        case 0x8764u: {
            dd3_static_write8(rt,0x03E7u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8767u; return dd3_static_complete(rt,4u);
        }
        case 0x8767u: {
            uint16_t ea=0x03E6u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x876Au; return dd3_static_complete(rt,4u);
        }
        case 0x876Au: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x876Cu; return dd3_static_complete(rt,3u);
        }
        case 0x876Cu: {
            dd3_static_write8(rt,0x03E8u,rt->state.cpu.a);
            rt->state.cpu.pc=0x876Fu; return dd3_static_complete(rt,4u);
        }
        case 0x876Fu: {
            uint16_t ea=0x03E7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8772u; return dd3_static_complete(rt,4u);
        }
        case 0x8772u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8774u,0x8786u)) c++; rt->state.cpu.pc=0x8786u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8774u; return dd3_static_complete(rt,2u);
        }
        case 0x8774u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8776u; return dd3_static_complete(rt,3u);
        }
        case 0x8776u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8778u; return dd3_static_complete(rt,2u);
        }
        case 0x8778u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x877Au,0x8781u)) c++; rt->state.cpu.pc=0x8781u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x877Au; return dd3_static_complete(rt,2u);
        }
        case 0x877Au: {
            uint16_t ea=0x03E8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x877Du; return dd3_static_complete(rt,4u);
        }
        case 0x877Du: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x877Fu,0x8786u)) c++; rt->state.cpu.pc=0x8786u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x877Fu; return dd3_static_complete(rt,2u);
        }
        case 0x877Fu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8781u,0x8788u)) c++; rt->state.cpu.pc=0x8788u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8781u; return dd3_static_complete(rt,2u);
        }
        case 0x8781u: {
            uint16_t ea=0x03E8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8784u; return dd3_static_complete(rt,4u);
        }
        case 0x8784u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8786u,0x8788u)) c++; rt->state.cpu.pc=0x8788u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8786u; return dd3_static_complete(rt,2u);
        }
        case 0x8786u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8787u; return dd3_static_complete(rt,2u);
        }
        case 0x8787u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8788u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8789u; return dd3_static_complete(rt,2u);
        }
        case 0x8789u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x878Au: {
            uint16_t ea=0x03E3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x878Du; return dd3_static_complete(rt,4u);
        }
        case 0x878Du: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x878Eu; return dd3_static_complete(rt,2u);
        }
        case 0x878Eu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8790u; return dd3_static_complete(rt,3u);
        }
        case 0x8790u: {
            dd3_static_write8(rt,0x03E5u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8793u; return dd3_static_complete(rt,4u);
        }
        case 0x8793u: {
            uint16_t ea=0x03E4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8796u; return dd3_static_complete(rt,4u);
        }
        case 0x8796u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8798u; return dd3_static_complete(rt,3u);
        }
        case 0x8798u: {
            dd3_static_write8(rt,0x03E6u,rt->state.cpu.a);
            rt->state.cpu.pc=0x879Bu; return dd3_static_complete(rt,4u);
        }
        case 0x879Bu: {
            uint16_t ea=0x03E5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x879Eu; return dd3_static_complete(rt,4u);
        }
        case 0x879Eu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x879Fu; return dd3_static_complete(rt,2u);
        }
        case 0x879Fu: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x87A1u; return dd3_static_complete(rt,3u);
        }
        case 0x87A1u: {
            dd3_static_write8(rt,0x03E7u,rt->state.cpu.a);
            rt->state.cpu.pc=0x87A4u; return dd3_static_complete(rt,4u);
        }
        case 0x87A4u: {
            uint16_t ea=0x03E6u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87A7u; return dd3_static_complete(rt,4u);
        }
        case 0x87A7u: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x87A9u; return dd3_static_complete(rt,3u);
        }
        case 0x87A9u: {
            dd3_static_write8(rt,0x03E8u,rt->state.cpu.a);
            rt->state.cpu.pc=0x87ACu; return dd3_static_complete(rt,4u);
        }
        case 0x87ACu: {
            uint16_t ea=0x03E7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87AFu; return dd3_static_complete(rt,4u);
        }
        case 0x87AFu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87B1u,0x87C3u)) c++; rt->state.cpu.pc=0x87C3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87B1u; return dd3_static_complete(rt,2u);
        }
        case 0x87B1u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87B3u; return dd3_static_complete(rt,3u);
        }
        case 0x87B3u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87B5u; return dd3_static_complete(rt,2u);
        }
        case 0x87B5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87B7u,0x87BEu)) c++; rt->state.cpu.pc=0x87BEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87B7u; return dd3_static_complete(rt,2u);
        }
        case 0x87B7u: {
            uint16_t ea=0x03E8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87BAu; return dd3_static_complete(rt,4u);
        }
        case 0x87BAu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x87BCu,0x87C3u)) c++; rt->state.cpu.pc=0x87C3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87BCu; return dd3_static_complete(rt,2u);
        }
        case 0x87BCu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x87BEu,0x87C5u)) c++; rt->state.cpu.pc=0x87C5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87BEu; return dd3_static_complete(rt,2u);
        }
        case 0x87BEu: {
            uint16_t ea=0x03E8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87C1u; return dd3_static_complete(rt,4u);
        }
        case 0x87C1u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x87C3u,0x87C5u)) c++; rt->state.cpu.pc=0x87C5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87C3u; return dd3_static_complete(rt,2u);
        }
        case 0x87C3u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x87C4u; return dd3_static_complete(rt,2u);
        }
        case 0x87C4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x87C5u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x87C6u; return dd3_static_complete(rt,2u);
        }
        case 0x87C6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x87C7u: {
            dd3_static_push8(rt,(uint8_t)(0x87C9u>>8)); dd3_static_push8(rt,(uint8_t)0x87C9u);
            rt->state.cpu.pc=0x87F6u; return dd3_static_complete(rt,6u);
        }
        case 0x87CAu: {
            uint16_t ea=0x03E3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87CDu; return dd3_static_complete(rt,4u);
        }
        case 0x87CDu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x87CEu; return dd3_static_complete(rt,2u);
        }
        case 0x87CEu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x87D0u; return dd3_static_complete(rt,3u);
        }
        case 0x87D0u: {
            dd3_static_write8(rt,0x03E7u,rt->state.cpu.a);
            rt->state.cpu.pc=0x87D3u; return dd3_static_complete(rt,4u);
        }
        case 0x87D3u: {
            uint16_t ea=0x03E4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87D6u; return dd3_static_complete(rt,4u);
        }
        case 0x87D6u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x87D8u; return dd3_static_complete(rt,3u);
        }
        case 0x87D8u: {
            dd3_static_write8(rt,0x03E8u,rt->state.cpu.a);
            rt->state.cpu.pc=0x87DBu; return dd3_static_complete(rt,4u);
        }
        case 0x87DBu: {
            uint16_t ea=0x03E7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87DEu; return dd3_static_complete(rt,4u);
        }
        case 0x87DEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87E0u,0x87F2u)) c++; rt->state.cpu.pc=0x87F2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87E0u; return dd3_static_complete(rt,2u);
        }
        case 0x87E0u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87E2u; return dd3_static_complete(rt,3u);
        }
        case 0x87E2u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87E4u; return dd3_static_complete(rt,2u);
        }
        case 0x87E4u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87E6u,0x87EDu)) c++; rt->state.cpu.pc=0x87EDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87E6u; return dd3_static_complete(rt,2u);
        }
        case 0x87E6u: {
            uint16_t ea=0x03E8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87E9u; return dd3_static_complete(rt,4u);
        }
        case 0x87E9u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x87EBu,0x87F2u)) c++; rt->state.cpu.pc=0x87F2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87EBu; return dd3_static_complete(rt,2u);
        }
        case 0x87EBu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x87EDu,0x87F4u)) c++; rt->state.cpu.pc=0x87F4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87EDu; return dd3_static_complete(rt,2u);
        }
        case 0x87EDu: {
            uint16_t ea=0x03E8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87F0u; return dd3_static_complete(rt,4u);
        }
        case 0x87F0u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x87F2u,0x87F4u)) c++; rt->state.cpu.pc=0x87F4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87F2u; return dd3_static_complete(rt,2u);
        }
        case 0x87F2u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x87F3u; return dd3_static_complete(rt,2u);
        }
        case 0x87F3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x87F4u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x87F5u; return dd3_static_complete(rt,2u);
        }
        case 0x87F5u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x87F6u: {
            uint16_t ea=(uint16_t)(0x038Bu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87F9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x038Bu,ea)?1u:0u));
        }
        case 0x87F9u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87FBu; return dd3_static_complete(rt,2u);
        }
        case 0x87FBu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x87FDu; return dd3_static_complete(rt,2u);
        }
        case 0x87FDu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87FFu,0x880Bu)) c++; rt->state.cpu.pc=0x880Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87FFu; return dd3_static_complete(rt,2u);
        }
        case 0x87FFu: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8801u; return dd3_static_complete(rt,3u);
        }
        case 0x8801u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8803u; return dd3_static_complete(rt,2u);
        }
        case 0x8803u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8805u,0x880Bu)) c++; rt->state.cpu.pc=0x880Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8805u; return dd3_static_complete(rt,2u);
        }
        case 0x8805u: {
            uint16_t ea=0x03A7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8808u; return dd3_static_complete(rt,4u);
        }
        case 0x8808u: {
            dd3_static_write8(rt,0x03E3u,rt->state.cpu.a);
            rt->state.cpu.pc=0x880Bu; return dd3_static_complete(rt,4u);
        }
        case 0x880Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x880Cu: {
            uint16_t ea=0x35u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x880Eu; return dd3_static_complete(rt,3u);
        }
        case 0x880Eu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8810u; return dd3_static_complete(rt,2u);
        }
        case 0x8810u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8812u,0x8818u)) c++; rt->state.cpu.pc=0x8818u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8812u; return dd3_static_complete(rt,2u);
        }
        case 0x8812u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8814u; return dd3_static_complete(rt,3u);
        }
        case 0x8814u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8816u; return dd3_static_complete(rt,2u);
        }
        case 0x8816u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8818u,0x881Bu)) c++; rt->state.cpu.pc=0x881Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8818u; return dd3_static_complete(rt,2u);
        }
        case 0x8818u: {
            rt->state.cpu.pc=0x88C9u; return dd3_static_complete(rt,3u);
        }
        case 0x881Bu: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x881Du; return dd3_static_complete(rt,4u);
        }
        case 0x881Du: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x881Fu; return dd3_static_complete(rt,2u);
        }
        case 0x881Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8821u,0x8818u)) c++; rt->state.cpu.pc=0x8818u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8821u; return dd3_static_complete(rt,2u);
        }
        case 0x8821u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8823u; return dd3_static_complete(rt,3u);
        }
        case 0x8823u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,2u);
        }
        case 0x8824u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8825u; return dd3_static_complete(rt,2u);
        }
        case 0x8825u: {
            uint16_t ea=(uint16_t)(0x9208u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8828u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9208u,ea)?1u:0u));
        }
        case 0x8828u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0x882Au; return dd3_static_complete(rt,3u);
        }
        case 0x882Au: {
            uint16_t ea=(uint16_t)(0x9209u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x882Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9209u,ea)?1u:0u));
        }
        case 0x882Du: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0x882Fu; return dd3_static_complete(rt,3u);
        }
        case 0x882Fu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8830u; return dd3_static_complete(rt,2u);
        }
        case 0x8830u: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8832u; return dd3_static_complete(rt,3u);
        }
        case 0x8832u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8834u; return dd3_static_complete(rt,4u);
        }
        case 0x8834u: {
            dd3_static_write8(rt,0x03DFu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8837u; return dd3_static_complete(rt,4u);
        }
        case 0x8837u: {
            uint16_t ea=0x30u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8839u; return dd3_static_complete(rt,3u);
        }
        case 0x8839u: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x883Bu; return dd3_static_complete(rt,4u);
        }
        case 0x883Bu: {
            dd3_static_write8(rt,0x03E0u,rt->state.cpu.a);
            rt->state.cpu.pc=0x883Eu; return dd3_static_complete(rt,4u);
        }
        case 0x883Eu: {
            uint16_t ea=0x03E0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8841u; return dd3_static_complete(rt,4u);
        }
        case 0x8841u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8843u,0x8858u)) c++; rt->state.cpu.pc=0x8858u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8843u; return dd3_static_complete(rt,2u);
        }
        case 0x8843u: {
            uint16_t ea=0x03DFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8846u; return dd3_static_complete(rt,4u);
        }
        case 0x8846u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8848u; return dd3_static_complete(rt,2u);
        }
        case 0x8848u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8849u; return dd3_static_complete(rt,2u);
        }
        case 0x8849u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x884Bu; return dd3_static_complete(rt,2u);
        }
        case 0x884Bu: {
            dd3_static_write8(rt,0x03DFu,rt->state.cpu.a);
            rt->state.cpu.pc=0x884Eu; return dd3_static_complete(rt,4u);
        }
        case 0x884Eu: {
            uint16_t ea=0x03E0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8851u; return dd3_static_complete(rt,4u);
        }
        case 0x8851u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8853u; return dd3_static_complete(rt,2u);
        }
        case 0x8853u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8855u; return dd3_static_complete(rt,2u);
        }
        case 0x8855u: {
            dd3_static_write8(rt,0x03E0u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8858u; return dd3_static_complete(rt,4u);
        }
        case 0x8858u: {
            uint16_t ea=0x03E0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x885Bu; return dd3_static_complete(rt,4u);
        }
        case 0x885Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x885Du,0x88C9u)) c++; rt->state.cpu.pc=0x88C9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x885Du; return dd3_static_complete(rt,2u);
        }
        case 0x885Du: {
            uint16_t ea=0x03DFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8860u; return dd3_static_complete(rt,4u);
        }
        case 0x8860u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8862u; return dd3_static_complete(rt,2u);
        }
        case 0x8862u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8864u,0x88C9u)) c++; rt->state.cpu.pc=0x88C9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8864u; return dd3_static_complete(rt,2u);
        }
        case 0x8864u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8866u; return dd3_static_complete(rt,3u);
        }
        case 0x8866u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8868u,0x8899u)) c++; rt->state.cpu.pc=0x8899u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8868u; return dd3_static_complete(rt,2u);
        }
        case 0x8868u: {
            uint8_t v=0x05u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x886Au; return dd3_static_complete(rt,2u);
        }
        case 0x886Au: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x886Cu; return dd3_static_complete(rt,4u);
        }
        case 0x886Cu: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x886Eu; return dd3_static_complete(rt,4u);
        }
        case 0x886Eu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x886Fu; return dd3_static_complete(rt,2u);
        }
        case 0x886Fu: {
            uint8_t v=0x0Au;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8871u; return dd3_static_complete(rt,2u);
        }
        case 0x8871u: {
            dd3_static_write8(rt,(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8873u; return dd3_static_complete(rt,4u);
        }
        case 0x8873u: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8875u; return dd3_static_complete(rt,4u);
        }
        case 0x8875u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8877u; return dd3_static_complete(rt,2u);
        }
        case 0x8877u: {
            dd3_static_write8(rt,(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8879u; return dd3_static_complete(rt,4u);
        }
        case 0x8879u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x887Bu; return dd3_static_complete(rt,3u);
        }
        case 0x887Bu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x887Du; return dd3_static_complete(rt,2u);
        }
        case 0x887Du: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x887Eu; return dd3_static_complete(rt,2u);
        }
        case 0x887Eu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x887Fu; return dd3_static_complete(rt,2u);
        }
        case 0x887Fu: {
            uint16_t ea=(uint16_t)(0x920Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8882u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x920Cu,ea)?1u:0u));
        }
        case 0x8882u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8884u; return dd3_static_complete(rt,3u);
        }
        case 0x8884u: {
            uint16_t ea=(uint16_t)(0x920Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8887u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x920Du,ea)?1u:0u));
        }
        case 0x8887u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x8889u; return dd3_static_complete(rt,3u);
        }
        case 0x8889u: {
            uint8_t v=0x06u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x888Bu; return dd3_static_complete(rt,2u);
        }
        case 0x888Bu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x888Du; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0x888Du: {
            dd3_static_write8(rt,(uint16_t)(0x0382u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8890u; return dd3_static_complete(rt,5u);
        }
        case 0x8890u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8891u; return dd3_static_complete(rt,2u);
        }
        case 0x8891u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8893u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0x8893u: {
            dd3_static_write8(rt,(uint16_t)(0x038Bu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8896u; return dd3_static_complete(rt,5u);
        }
        case 0x8896u: {
            rt->state.cpu.pc=0x88C0u; return dd3_static_complete(rt,3u);
        }
        case 0x8899u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x889Bu; return dd3_static_complete(rt,2u);
        }
        case 0x889Bu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x889Du; return dd3_static_complete(rt,4u);
        }
        case 0x889Du: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x889Fu; return dd3_static_complete(rt,4u);
        }
        case 0x889Fu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x88A0u; return dd3_static_complete(rt,2u);
        }
        case 0x88A0u: {
            uint8_t v=0x04u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x88A2u; return dd3_static_complete(rt,2u);
        }
        case 0x88A2u: {
            dd3_static_write8(rt,(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x88A4u; return dd3_static_complete(rt,4u);
        }
        case 0x88A4u: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88A6u; return dd3_static_complete(rt,4u);
        }
        case 0x88A6u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x88A8u; return dd3_static_complete(rt,2u);
        }
        case 0x88A8u: {
            dd3_static_write8(rt,(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x88AAu; return dd3_static_complete(rt,4u);
        }
        case 0x88AAu: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88ACu; return dd3_static_complete(rt,3u);
        }
        case 0x88ACu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x88AEu; return dd3_static_complete(rt,2u);
        }
        case 0x88AEu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x88AFu; return dd3_static_complete(rt,2u);
        }
        case 0x88AFu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x88B0u; return dd3_static_complete(rt,2u);
        }
        case 0x88B0u: {
            uint16_t ea=(uint16_t)(0x920Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88B3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x920Cu,ea)?1u:0u));
        }
        case 0x88B3u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x88B5u; return dd3_static_complete(rt,3u);
        }
        case 0x88B5u: {
            uint16_t ea=(uint16_t)(0x920Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88B8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x920Du,ea)?1u:0u));
        }
        case 0x88B8u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x88BAu; return dd3_static_complete(rt,3u);
        }
        case 0x88BAu: {
            uint8_t v=0x08u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88BCu; return dd3_static_complete(rt,2u);
        }
        case 0x88BCu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88BEu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0x88BEu: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x88C0u; return dd3_static_complete(rt,4u);
        }
        case 0x88C0u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88C2u; return dd3_static_complete(rt,3u);
        }
        case 0x88C2u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x88C4u; return dd3_static_complete(rt,2u);
        }
        case 0x88C4u: {
            dd3_static_write8(rt,(uint16_t)(0x0394u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x88C7u; return dd3_static_complete(rt,5u);
        }
        case 0x88C7u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x88C8u; return dd3_static_complete(rt,2u);
        }
        case 0x88C8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x88C9u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88CBu; return dd3_static_complete(rt,2u);
        }
        case 0x88CBu: {
            dd3_static_write8(rt,(uint16_t)(0x0394u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x88CEu; return dd3_static_complete(rt,5u);
        }
        case 0x88CEu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x88CFu; return dd3_static_complete(rt,2u);
        }
        case 0x88CFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x88D0u: {
            uint16_t ea=0x1Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88D2u; return dd3_static_complete(rt,3u);
        }
        case 0x88D2u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x88D4u,0x88EDu)) c++; rt->state.cpu.pc=0x88EDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88D4u; return dd3_static_complete(rt,2u);
        }
        case 0x88D4u: {
            uint16_t ea=0x03E8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88D7u; return dd3_static_complete(rt,4u);
        }
        case 0x88D7u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x88D9u,0x88DFu)) c++; rt->state.cpu.pc=0x88DFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88D9u; return dd3_static_complete(rt,2u);
        }
        case 0x88D9u: {
            uint16_t ea=0x03E7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88DCu; return dd3_static_complete(rt,4u);
        }
        case 0x88DCu: {
            rt->state.cpu.pc=0x88E7u; return dd3_static_complete(rt,3u);
        }
        case 0x88DFu: {
            uint16_t ea=0x03E7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88E2u; return dd3_static_complete(rt,4u);
        }
        case 0x88E2u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x88E4u; return dd3_static_complete(rt,2u);
        }
        case 0x88E4u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x88E5u; return dd3_static_complete(rt,2u);
        }
        case 0x88E5u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x88E7u; return dd3_static_complete(rt,2u);
        }
        case 0x88E7u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x88E9u; return dd3_static_complete(rt,2u);
        }
        case 0x88E9u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x88EBu,0x88EDu)) c++; rt->state.cpu.pc=0x88EDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88EBu; return dd3_static_complete(rt,2u);
        }
        case 0x88EBu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x88ECu; return dd3_static_complete(rt,2u);
        }
        case 0x88ECu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x88EDu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x88EEu; return dd3_static_complete(rt,2u);
        }
        case 0x88EEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x88EFu: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88F1u; return dd3_static_complete(rt,3u);
        }
        case 0x88F1u: {
            uint8_t v=0x0Bu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x88F3u; return dd3_static_complete(rt,2u);
        }
        case 0x88F3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x88F5u,0x88FDu)) c++; rt->state.cpu.pc=0x88FDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88F5u; return dd3_static_complete(rt,2u);
        }
        case 0x88F5u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x88F7u; return dd3_static_complete(rt,2u);
        }
        case 0x88F7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x88F9u,0x890Du)) c++; rt->state.cpu.pc=0x890Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88F9u; return dd3_static_complete(rt,2u);
        }
        case 0x88F9u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88FBu; return dd3_static_complete(rt,2u);
        }
        case 0x88FBu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x88FDu,0x890Au)) c++; rt->state.cpu.pc=0x890Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88FDu; return dd3_static_complete(rt,2u);
        }
        case 0x88FDu: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8900u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0x8900u: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8902u; return dd3_static_complete(rt,2u);
        }
        case 0x8902u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8904u,0x8908u)) c++; rt->state.cpu.pc=0x8908u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8904u; return dd3_static_complete(rt,2u);
        }
        case 0x8904u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8906u; return dd3_static_complete(rt,2u);
        }
        case 0x8906u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8908u,0x890Au)) c++; rt->state.cpu.pc=0x890Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8908u; return dd3_static_complete(rt,2u);
        }
        case 0x8908u: {
            uint8_t v=0x09u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x890Au; return dd3_static_complete(rt,2u);
        }
        case 0x890Au: {
            dd3_static_write8(rt,(uint16_t)(0x0382u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x890Du; return dd3_static_complete(rt,5u);
        }
        case 0x890Du: {
            dd3_static_push8(rt,(uint8_t)(0x890Fu>>8)); dd3_static_push8(rt,(uint8_t)0x890Fu);
            rt->state.cpu.pc=0x84FCu; return dd3_static_complete(rt,6u);
        }
        case 0x8910u: {
            uint16_t ea=0x23u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8912u; return dd3_static_complete(rt,3u);
        }
        case 0x8912u: {
            dd3_static_write8(rt,(uint16_t)(0x038Bu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8915u; return dd3_static_complete(rt,5u);
        }
        case 0x8915u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8916u: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8919u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0x8919u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x891Bu; return dd3_static_complete(rt,2u);
        }
        case 0x891Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x891Du,0x8921u)) c++; rt->state.cpu.pc=0x8921u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x891Du; return dd3_static_complete(rt,2u);
        }
        case 0x891Du: {
            uint8_t v=0x09u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x891Fu; return dd3_static_complete(rt,2u);
        }
        case 0x891Fu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8921u,0x8922u)) c++; rt->state.cpu.pc=0x8922u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8921u; return dd3_static_complete(rt,2u);
        }
        case 0x8921u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8922u: {
            uint8_t v=0x0Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8924u; return dd3_static_complete(rt,2u);
        }
        case 0x8924u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8926u,0x892Au)) c++; rt->state.cpu.pc=0x892Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8926u; return dd3_static_complete(rt,2u);
        }
        case 0x8926u: {
            uint8_t v=0x60u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8928u; return dd3_static_complete(rt,2u);
        }
        case 0x8928u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x892Au,0x892Eu)) c++; rt->state.cpu.pc=0x892Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x892Au; return dd3_static_complete(rt,2u);
        }
        case 0x892Au: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x892Cu; return dd3_static_complete(rt,2u);
        }
        case 0x892Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x892Eu,0x892Eu)) c++; rt->state.cpu.pc=0x892Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x892Eu; return dd3_static_complete(rt,2u);
        }
        case 0x892Eu: {
            dd3_static_write8(rt,0x04F6u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8931u; return dd3_static_complete(rt,4u);
        }
        case 0x8931u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8933u; return dd3_static_complete(rt,2u);
        }
        case 0x8933u: {
            dd3_static_write8(rt,0x04F7u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8936u; return dd3_static_complete(rt,4u);
        }
        case 0x8936u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8938u; return dd3_static_complete(rt,2u);
        }
        case 0x8938u: {
            dd3_static_write8(rt,0x04FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x893Bu; return dd3_static_complete(rt,4u);
        }
        case 0x893Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x893Cu: {
            uint16_t ea=(uint16_t)(0x03AFu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x893Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03AFu,ea)?1u:0u));
        }
        case 0x893Fu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8941u,0x89BAu)) c++; rt->state.cpu.pc=0x89BAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8941u; return dd3_static_complete(rt,2u);
        }
        case 0x8941u: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8944u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0x8944u: {
            dd3_static_write8(rt,0x22u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8946u; return dd3_static_complete(rt,3u);
        }
        case 0x8946u: {
            uint16_t ea=(uint16_t)(0x03AFu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8949u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03AFu,ea)?1u:0u));
        }
        case 0x8949u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x894Bu; return dd3_static_complete(rt,2u);
        }
        case 0x894Bu: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x894Du; return dd3_static_complete(rt,2u);
        }
        case 0x894Du: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x894Fu,0x8959u)) c++; rt->state.cpu.pc=0x8959u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x894Fu; return dd3_static_complete(rt,2u);
        }
        case 0x894Fu: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8951u; return dd3_static_complete(rt,4u);
        }
        case 0x8951u: {
            uint8_t v=0x28u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8953u; return dd3_static_complete(rt,2u);
        }
        case 0x8953u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8955u,0x896Fu)) c++; rt->state.cpu.pc=0x896Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8955u; return dd3_static_complete(rt,2u);
        }
        case 0x8955u: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8957u; return dd3_static_complete(rt,2u);
        }
        case 0x8957u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8959u,0x8971u)) c++; rt->state.cpu.pc=0x8971u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8959u; return dd3_static_complete(rt,2u);
        }
        case 0x8959u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x895Bu; return dd3_static_complete(rt,2u);
        }
        case 0x895Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x895Du,0x8971u)) c++; rt->state.cpu.pc=0x8971u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x895Du; return dd3_static_complete(rt,2u);
        }
        case 0x895Du: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x895Fu; return dd3_static_complete(rt,4u);
        }
        case 0x895Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8961u,0x896Bu)) c++; rt->state.cpu.pc=0x896Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8961u; return dd3_static_complete(rt,2u);
        }
        case 0x8961u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8963u; return dd3_static_complete(rt,4u);
        }
        case 0x8963u: {
            uint8_t v=0xD8u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8965u; return dd3_static_complete(rt,2u);
        }
        case 0x8965u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8967u,0x896Bu)) c++; rt->state.cpu.pc=0x896Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8967u; return dd3_static_complete(rt,2u);
        }
        case 0x8967u: {
            uint8_t v=0x11u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8969u; return dd3_static_complete(rt,2u);
        }
        case 0x8969u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x896Bu,0x8971u)) c++; rt->state.cpu.pc=0x8971u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x896Bu; return dd3_static_complete(rt,2u);
        }
        case 0x896Bu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x896Du; return dd3_static_complete(rt,2u);
        }
        case 0x896Du: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x896Fu,0x8971u)) c++; rt->state.cpu.pc=0x8971u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x896Fu; return dd3_static_complete(rt,2u);
        }
        case 0x896Fu: {
            uint8_t v=0x18u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8971u; return dd3_static_complete(rt,2u);
        }
        case 0x8971u: {
            dd3_static_write8(rt,(uint16_t)(0x0382u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8974u; return dd3_static_complete(rt,5u);
        }
        case 0x8974u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8976u; return dd3_static_complete(rt,2u);
        }
        case 0x8976u: {
            dd3_static_push8(rt,(uint8_t)(0x8978u>>8)); dd3_static_push8(rt,(uint8_t)0x8978u);
            rt->state.cpu.pc=0x85C8u; return dd3_static_complete(rt,6u);
        }
        case 0x8979u: {
            dd3_static_push8(rt,(uint8_t)(0x897Bu>>8)); dd3_static_push8(rt,(uint8_t)0x897Bu);
            rt->state.cpu.pc=0x8648u; return dd3_static_complete(rt,6u);
        }
        case 0x897Cu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x897Eu,0x8984u)) c++; rt->state.cpu.pc=0x8984u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x897Eu; return dd3_static_complete(rt,2u);
        }
        case 0x897Eu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8980u; return dd3_static_complete(rt,3u);
        }
        case 0x8980u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8982u; return dd3_static_complete(rt,2u);
        }
        case 0x8982u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8984u,0x89B5u)) c++; rt->state.cpu.pc=0x89B5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8984u; return dd3_static_complete(rt,2u);
        }
        case 0x8984u: {
            dd3_static_push8(rt,(uint8_t)(0x8986u>>8)); dd3_static_push8(rt,(uint8_t)0x8986u);
            rt->state.cpu.pc=0x84FCu; return dd3_static_complete(rt,6u);
        }
        case 0x8987u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8989u; return dd3_static_complete(rt,3u);
        }
        case 0x8989u: {
            dd3_static_write8(rt,0x03DFu,rt->state.cpu.a);
            rt->state.cpu.pc=0x898Cu; return dd3_static_complete(rt,4u);
        }
        case 0x898Cu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x898Eu; return dd3_static_complete(rt,3u);
        }
        case 0x898Eu: {
            dd3_static_write8(rt,0x03E0u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8991u; return dd3_static_complete(rt,4u);
        }
        case 0x8991u: {
            uint16_t ea=0x23u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8993u; return dd3_static_complete(rt,3u);
        }
        case 0x8993u: {
            dd3_static_write8(rt,0x03E3u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8996u; return dd3_static_complete(rt,4u);
        }
        case 0x8996u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8997u; return dd3_static_complete(rt,2u);
        }
        case 0x8997u: {
            uint16_t ea=0x03DFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x899Au; return dd3_static_complete(rt,4u);
        }
        case 0x899Au: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x899Cu; return dd3_static_complete(rt,3u);
        }
        case 0x899Cu: {
            dd3_static_write8(rt,0x03E1u,rt->state.cpu.a);
            rt->state.cpu.pc=0x899Fu; return dd3_static_complete(rt,4u);
        }
        case 0x899Fu: {
            uint16_t ea=0x03E0u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89A2u; return dd3_static_complete(rt,4u);
        }
        case 0x89A2u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x89A4u; return dd3_static_complete(rt,3u);
        }
        case 0x89A4u: {
            dd3_static_write8(rt,0x03E2u,rt->state.cpu.a);
            rt->state.cpu.pc=0x89A7u; return dd3_static_complete(rt,4u);
        }
        case 0x89A7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x89A9u,0x89B5u)) c++; rt->state.cpu.pc=0x89B5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x89A9u; return dd3_static_complete(rt,2u);
        }
        case 0x89A9u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89ABu; return dd3_static_complete(rt,2u);
        }
        case 0x89ABu: {
            dd3_static_write8(rt,(uint16_t)(0x03AFu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x89AEu; return dd3_static_complete(rt,5u);
        }
        case 0x89AEu: {
            uint16_t ea=0x03E3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89B1u; return dd3_static_complete(rt,4u);
        }
        case 0x89B1u: {
            dd3_static_write8(rt,(uint16_t)(0x038Bu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x89B4u; return dd3_static_complete(rt,5u);
        }
        case 0x89B4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x89B5u: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x89B7u; return dd3_static_complete(rt,3u);
        }
        case 0x89B7u: {
            dd3_static_write8(rt,(uint16_t)(0x0382u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x89BAu; return dd3_static_complete(rt,5u);
        }
        case 0x89BAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9A4Eu: {
            dd3_static_push8(rt,(uint8_t)(0x9A50u>>8)); dd3_static_push8(rt,(uint8_t)0x9A50u);
            rt->state.cpu.pc=0x9A9Du; return dd3_static_complete(rt,6u);
        }
        case 0x9A51u: {
            dd3_static_push8(rt,(uint8_t)(0x9A53u>>8)); dd3_static_push8(rt,(uint8_t)0x9A53u);
            rt->state.cpu.pc=0x9A9Du; return dd3_static_complete(rt,6u);
        }
        case 0x9A54u: {
            dd3_static_push8(rt,(uint8_t)(0x9A56u>>8)); dd3_static_push8(rt,(uint8_t)0x9A56u);
            rt->state.cpu.pc=0x9A9Du; return dd3_static_complete(rt,6u);
        }
        case 0x9A57u: {
            uint16_t ea=0x3Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A59u; return dd3_static_complete(rt,3u);
        }
        case 0x9A59u: {
            uint16_t ea=0x0601u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9A5Cu; return dd3_static_complete(rt,4u);
        }
        case 0x9A5Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9A5Eu,0x9A9Cu)) c++; rt->state.cpu.pc=0x9A9Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9A5Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9A5Eu: {
            dd3_static_write8(rt,0x0601u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A61u; return dd3_static_complete(rt,4u);
        }
        case 0x9A61u: {
            uint8_t v=0x30u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A63u; return dd3_static_complete(rt,2u);
        }
        case 0x9A63u: {
            uint16_t ea=0x3Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A65u; return dd3_static_complete(rt,3u);
        }
        case 0x9A65u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A67u; return dd3_static_complete(rt,2u);
        }
        case 0x9A67u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9A69u,0x9A6Bu)) c++; rt->state.cpu.pc=0x9A6Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9A69u; return dd3_static_complete(rt,2u);
        }
        case 0x9A69u: {
            uint8_t v=0x70u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A6Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9A6Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A6Du; return dd3_static_complete(rt,2u);
        }
        case 0x9A6Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A6Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9A6Fu: {
            dd3_static_write8(rt,(uint16_t)(0x060Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9A72u; return dd3_static_complete(rt,5u);
        }
        case 0x9A72u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9A73u; return dd3_static_complete(rt,2u);
        }
        case 0x9A73u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9A74u; return dd3_static_complete(rt,2u);
        }
        case 0x9A74u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x9A76u; return dd3_static_complete(rt,2u);
        }
        case 0x9A76u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9A78u,0x9A6Fu)) c++; rt->state.cpu.pc=0x9A6Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9A78u; return dd3_static_complete(rt,2u);
        }
        case 0x9A78u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A7Au; return dd3_static_complete(rt,2u);
        }
        case 0x9A7Au: {
            dd3_static_write8(rt,0x04D1u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A7Du; return dd3_static_complete(rt,4u);
        }
        case 0x9A7Du: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A7Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9A7Eu: {
            uint8_t v=0x20u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A80u; return dd3_static_complete(rt,2u);
        }
        case 0x9A80u: {
            uint8_t v=0x50u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9A82u; return dd3_static_complete(rt,2u);
        }
        case 0x9A82u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9A84u,0x9A8Bu)) c++; rt->state.cpu.pc=0x9A8Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9A84u; return dd3_static_complete(rt,2u);
        }
        case 0x9A84u: {
            uint8_t v=0x60u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A86u; return dd3_static_complete(rt,2u);
        }
        case 0x9A86u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A88u; return dd3_static_complete(rt,2u);
        }
        case 0x9A88u: {
            dd3_static_write8(rt,0x04D1u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9A8Bu; return dd3_static_complete(rt,4u);
        }
        case 0x9A8Bu: {
            uint16_t ea=0x0600u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x9A8Eu; return dd3_static_complete(rt,4u);
        }
        case 0x9A8Eu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9A90u,0x9A93u)) c++; rt->state.cpu.pc=0x9A93u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9A90u; return dd3_static_complete(rt,2u);
        }
        case 0x9A90u: {
            dd3_static_write8(rt,0x0600u,rt->state.cpu.x);
            rt->state.cpu.pc=0x9A93u; return dd3_static_complete(rt,4u);
        }
        case 0x9A93u: {
            dd3_static_push8(rt,(uint8_t)(0x9A95u>>8)); dd3_static_push8(rt,(uint8_t)0x9A95u);
            rt->state.cpu.pc=0x9A9Du; return dd3_static_complete(rt,6u);
        }
        case 0x9A96u: {
            dd3_static_push8(rt,(uint8_t)(0x9A98u>>8)); dd3_static_push8(rt,(uint8_t)0x9A98u);
            rt->state.cpu.pc=0x9A9Du; return dd3_static_complete(rt,6u);
        }
        case 0x9A99u: {
            dd3_static_push8(rt,(uint8_t)(0x9A9Bu>>8)); dd3_static_push8(rt,(uint8_t)0x9A9Bu);
            rt->state.cpu.pc=0x9A9Du; return dd3_static_complete(rt,6u);
        }
        case 0x9A9Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9A9Du: {
            uint8_t v=0x60u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9A9Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9A9Fu: {
            dd3_static_push8(rt,(uint8_t)(0x9AA1u>>8)); dd3_static_push8(rt,(uint8_t)0x9AA1u);
            rt->state.cpu.pc=0xC000u; return dd3_static_complete(rt,6u);
        }
        case 0x9AA2u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9AA4u,0x9ABFu)) c++; rt->state.cpu.pc=0x9ABFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9AA4u; return dd3_static_complete(rt,2u);
        }
        case 0x9AA4u: {
            uint16_t ea=0x04D1u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AA7u; return dd3_static_complete(rt,4u);
        }
        case 0x9AA7u: {
            uint8_t v=0x0Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9AA9u; return dd3_static_complete(rt,2u);
        }
        case 0x9AA9u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9AABu,0x9AB0u)) c++; rt->state.cpu.pc=0x9AB0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9AABu; return dd3_static_complete(rt,2u);
        }
        case 0x9AABu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AADu; return dd3_static_complete(rt,2u);
        }
        case 0x9AADu: {
            dd3_static_write8(rt,0x04D1u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9AB0u; return dd3_static_complete(rt,4u);
        }
        case 0x9AB0u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9AB1u; return dd3_static_complete(rt,2u);
        }
        case 0x9AB1u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9AB2u; return dd3_static_complete(rt,2u);
        }
        case 0x9AB2u: {
            uint16_t ea=(uint16_t)(0x9AC0u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AB5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9AC0u,ea)?1u:0u));
        }
        case 0x9AB5u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9AB7u; return dd3_static_complete(rt,3u);
        }
        case 0x9AB7u: {
            uint16_t ea=(uint16_t)(0x9AC1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9ABAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9AC1u,ea)?1u:0u));
        }
        case 0x9ABAu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9ABCu; return dd3_static_complete(rt,3u);
        }
        case 0x9ABCu: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x0029u); return dd3_static_complete(rt,5u);
        }
        case 0x9ABFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9AD8u: {
            uint16_t ea=0x3Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9ADAu; return dd3_static_complete(rt,3u);
        }
        case 0x9ADAu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9ADCu; return dd3_static_complete(rt,2u);
        }
        case 0x9ADCu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9ADEu,0x9AE4u)) c++; rt->state.cpu.pc=0x9AE4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9ADEu; return dd3_static_complete(rt,2u);
        }
        case 0x9ADEu: {
            uint16_t ea=0x9Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AE0u; return dd3_static_complete(rt,3u);
        }
        case 0x9AE0u: {
            uint8_t v=0xC8u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9AE2u; return dd3_static_complete(rt,2u);
        }
        case 0x9AE2u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9AE4u,0x9AF9u)) c++; rt->state.cpu.pc=0x9AF9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9AE4u; return dd3_static_complete(rt,2u);
        }
        case 0x9AE4u: {
            uint8_t v=0x23u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AE6u; return dd3_static_complete(rt,2u);
        }
        case 0x9AE6u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AE8u; return dd3_static_complete(rt,2u);
        }
        case 0x9AE8u: {
            dd3_static_push8(rt,(uint8_t)(0x9AEAu>>8)); dd3_static_push8(rt,(uint8_t)0x9AEAu);
            rt->state.cpu.pc=0x9F53u; return dd3_static_complete(rt,6u);
        }
        case 0x9AEBu: {
            uint8_t v=0xFDu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AEDu; return dd3_static_complete(rt,2u);
        }
        case 0x9AEDu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9AEFu; return dd3_static_complete(rt,3u);
        }
        case 0x9AEFu: {
            uint8_t v=0x9Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9AF1u; return dd3_static_complete(rt,2u);
        }
        case 0x9AF1u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9AF3u; return dd3_static_complete(rt,3u);
        }
        case 0x9AF3u: {
            dd3_static_push8(rt,(uint8_t)(0x9AF5u>>8)); dd3_static_push8(rt,(uint8_t)0x9AF5u);
            rt->state.cpu.pc=0x9F74u; return dd3_static_complete(rt,6u);
        }
        case 0x9AF6u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0x9AF9u; return dd3_static_complete(rt,4u);
        }
        case 0x9AF9u: {
            uint16_t ea=0x04D1u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9AFCu; return dd3_static_complete(rt,6u);
        }
        case 0x9AFCu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9B1Du: {
            uint16_t ea=0x3Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B1Fu; return dd3_static_complete(rt,3u);
        }
        case 0x9B1Fu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B21u; return dd3_static_complete(rt,2u);
        }
        case 0x9B21u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9B23u,0x9B2Du)) c++; rt->state.cpu.pc=0x9B2Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9B23u; return dd3_static_complete(rt,2u);
        }
        case 0x9B23u: {
            uint16_t ea=0x9Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B25u; return dd3_static_complete(rt,3u);
        }
        case 0x9B25u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9B27u; return dd3_static_complete(rt,2u);
        }
        case 0x9B27u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9B29u,0x9B2Du)) c++; rt->state.cpu.pc=0x9B2Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9B29u; return dd3_static_complete(rt,2u);
        }
        case 0x9B29u: {
            uint8_t v=0xD0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9B2Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9B2Bu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9B2Du,0x9B72u)) c++; rt->state.cpu.pc=0x9B72u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9B2Du; return dd3_static_complete(rt,2u);
        }
        case 0x9B2Du: {
            uint8_t v=0x23u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B2Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9B2Fu: {
            uint8_t v=0x20u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B31u; return dd3_static_complete(rt,2u);
        }
        case 0x9B31u: {
            dd3_static_push8(rt,(uint8_t)(0x9B33u>>8)); dd3_static_push8(rt,(uint8_t)0x9B33u);
            rt->state.cpu.pc=0x9F53u; return dd3_static_complete(rt,6u);
        }
        case 0x9B34u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B36u; return dd3_static_complete(rt,2u);
        }
        case 0x9B36u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B39u; return dd3_static_complete(rt,5u);
        }
        case 0x9B39u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9B3Au; return dd3_static_complete(rt,2u);
        }
        case 0x9B3Au: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B3Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9B3Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B3Fu; return dd3_static_complete(rt,5u);
        }
        case 0x9B3Fu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9B40u; return dd3_static_complete(rt,2u);
        }
        case 0x9B40u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B42u; return dd3_static_complete(rt,2u);
        }
        case 0x9B42u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B44u; return dd3_static_complete(rt,3u);
        }
        case 0x9B44u: {
            dd3_static_push8(rt,(uint8_t)(0x9B46u>>8)); dd3_static_push8(rt,(uint8_t)0x9B46u);
            rt->state.cpu.pc=0x9B76u; return dd3_static_complete(rt,6u);
        }
        case 0x9B47u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B49u; return dd3_static_complete(rt,2u);
        }
        case 0x9B49u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B4Cu; return dd3_static_complete(rt,5u);
        }
        case 0x9B4Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9B4Du; return dd3_static_complete(rt,2u);
        }
        case 0x9B4Du: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B50u; return dd3_static_complete(rt,5u);
        }
        case 0x9B50u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9B51u; return dd3_static_complete(rt,2u);
        }
        case 0x9B51u: {
            uint16_t ea=0x0034u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B54u; return dd3_static_complete(rt,4u);
        }
        case 0x9B54u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9B56u,0x9B5Cu)) c++; rt->state.cpu.pc=0x9B5Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9B56u; return dd3_static_complete(rt,2u);
        }
        case 0x9B56u: {
            dd3_static_push8(rt,(uint8_t)(0x9B58u>>8)); dd3_static_push8(rt,(uint8_t)0x9B58u);
            rt->state.cpu.pc=0x9BC0u; return dd3_static_complete(rt,6u);
        }
        case 0x9B59u: {
            rt->state.cpu.pc=0x9B6Fu; return dd3_static_complete(rt,3u);
        }
        case 0x9B5Cu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B5Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9B5Eu: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B60u; return dd3_static_complete(rt,3u);
        }
        case 0x9B60u: {
            dd3_static_push8(rt,(uint8_t)(0x9B62u>>8)); dd3_static_push8(rt,(uint8_t)0x9B62u);
            rt->state.cpu.pc=0x9B76u; return dd3_static_complete(rt,6u);
        }
        case 0x9B63u: {
            uint8_t v=0x14u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B65u; return dd3_static_complete(rt,2u);
        }
        case 0x9B65u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B68u; return dd3_static_complete(rt,5u);
        }
        case 0x9B68u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9B69u; return dd3_static_complete(rt,2u);
        }
        case 0x9B69u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B6Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9B6Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B6Eu; return dd3_static_complete(rt,5u);
        }
        case 0x9B6Eu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9B6Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9B6Fu: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0x9B72u; return dd3_static_complete(rt,4u);
        }
        case 0x9B72u: {
            uint16_t ea=0x04D1u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9B75u; return dd3_static_complete(rt,6u);
        }
        case 0x9B75u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9B76u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B78u; return dd3_static_complete(rt,2u);
        }
        case 0x9B78u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B7Au; return dd3_static_complete(rt,3u);
        }
        case 0x9B7Au: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B7Cu; return dd3_static_complete(rt,3u);
        }
        case 0x9B7Cu: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B7Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0x9B7Fu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B80u; return dd3_static_complete(rt,2u);
        }
        case 0x9B80u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B81u; return dd3_static_complete(rt,2u);
        }
        case 0x9B81u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9B82u; return dd3_static_complete(rt,2u);
        }
        case 0x9B82u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9B83u; return dd3_static_complete(rt,2u);
        }
        case 0x9B83u: {
            uint16_t ea=(uint16_t)(0x9B98u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B86u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9B98u,ea)?1u:0u));
        }
        case 0x9B86u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9B89u; return dd3_static_complete(rt,5u);
        }
        case 0x9B89u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9B8Au; return dd3_static_complete(rt,2u);
        }
        case 0x9B8Au: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9B8Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9B8Bu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9B8Du; return dd3_static_complete(rt,5u);
        }
        case 0x9B8Du: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9B8Fu,0x9B83u)) c++; rt->state.cpu.pc=0x9B83u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9B8Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9B8Fu: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B91u; return dd3_static_complete(rt,3u);
        }
        case 0x9B91u: {
            uint16_t ea=(uint16_t)(0x045Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9B94u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x045Du,ea)?1u:0u));
        }
        case 0x9B94u: {
            dd3_static_push8(rt,(uint8_t)(0x9B96u>>8)); dd3_static_push8(rt,(uint8_t)0x9B96u);
            rt->state.cpu.pc=0x9BE1u; return dd3_static_complete(rt,6u);
        }
        case 0x9B97u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9BC0u: {
            uint8_t v=0x6Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BC2u; return dd3_static_complete(rt,2u);
        }
        case 0x9BC2u: {
            uint8_t v=0x06u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BC4u; return dd3_static_complete(rt,2u);
        }
        case 0x9BC4u: {
            dd3_static_push8(rt,(uint8_t)(0x9BC6u>>8)); dd3_static_push8(rt,(uint8_t)0x9BC6u);
            rt->state.cpu.pc=0x9F6Cu; return dd3_static_complete(rt,6u);
        }
        case 0x9BC7u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BC9u; return dd3_static_complete(rt,2u);
        }
        case 0x9BC9u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9BCCu; return dd3_static_complete(rt,5u);
        }
        case 0x9BCCu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9BCDu; return dd3_static_complete(rt,2u);
        }
        case 0x9BCDu: {
            uint8_t v=0x6Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BCFu; return dd3_static_complete(rt,2u);
        }
        case 0x9BCFu: {
            uint8_t v=0x06u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BD1u; return dd3_static_complete(rt,2u);
        }
        case 0x9BD1u: {
            dd3_static_push8(rt,(uint8_t)(0x9BD3u>>8)); dd3_static_push8(rt,(uint8_t)0x9BD3u);
            rt->state.cpu.pc=0x9F6Cu; return dd3_static_complete(rt,6u);
        }
        case 0x9BD4u: {
            uint8_t v=0x14u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BD6u; return dd3_static_complete(rt,2u);
        }
        case 0x9BD6u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9BD9u; return dd3_static_complete(rt,5u);
        }
        case 0x9BD9u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9BDAu; return dd3_static_complete(rt,2u);
        }
        case 0x9BDAu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BDCu; return dd3_static_complete(rt,2u);
        }
        case 0x9BDCu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9BDFu; return dd3_static_complete(rt,5u);
        }
        case 0x9BDFu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9BE0u; return dd3_static_complete(rt,2u);
        }
        case 0x9BE0u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9BE1u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BE3u; return dd3_static_complete(rt,3u);
        }
        case 0x9BE3u: {
            uint8_t v=0x06u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BE5u; return dd3_static_complete(rt,2u);
        }
        case 0x9BE5u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BE7u; return dd3_static_complete(rt,3u);
        }
        case 0x9BE7u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BE9u; return dd3_static_complete(rt,2u);
        }
        case 0x9BE9u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BEBu; return dd3_static_complete(rt,3u);
        }
        case 0x9BEBu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9BEDu,0x9C02u)) c++; rt->state.cpu.pc=0x9C02u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9BEDu; return dd3_static_complete(rt,2u);
        }
        case 0x9BEDu: {
            uint8_t v=0x7Eu;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BEFu; return dd3_static_complete(rt,2u);
        }
        case 0x9BEFu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x9BF0u; return dd3_static_complete(rt,2u);
        }
        case 0x9BF0u: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x9BF2u; return dd3_static_complete(rt,2u);
        }
        case 0x9BF2u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BF4u; return dd3_static_complete(rt,3u);
        }
        case 0x9BF4u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9BF6u,0x9C02u)) c++; rt->state.cpu.pc=0x9C02u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9BF6u; return dd3_static_complete(rt,2u);
        }
        case 0x9BF6u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BF7u; return dd3_static_complete(rt,3u);
        }
        case 0x9BF7u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9BF9u; return dd3_static_complete(rt,2u);
        }
        case 0x9BF9u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BFBu; return dd3_static_complete(rt,3u);
        }
        case 0x9BFBu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9BFCu; return dd3_static_complete(rt,4u);
        }
        case 0x9BFCu: {
            uint8_t v=0xF8u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9BFEu; return dd3_static_complete(rt,2u);
        }
        case 0x9BFEu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9C00u,0x9C02u)) c++; rt->state.cpu.pc=0x9C02u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C00u; return dd3_static_complete(rt,2u);
        }
        case 0x9C00u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C02u; return dd3_static_complete(rt,2u);
        }
        case 0x9C02u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C03u; return dd3_static_complete(rt,2u);
        }
        case 0x9C03u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9C06u; return dd3_static_complete(rt,5u);
        }
        case 0x9C06u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9C07u; return dd3_static_complete(rt,2u);
        }
        case 0x9C07u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9C09u; return dd3_static_complete(rt,5u);
        }
        case 0x9C09u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9C0Bu,0x9BE7u)) c++; rt->state.cpu.pc=0x9BE7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C0Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9C0Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9C0Cu: {
            uint16_t ea=0x3Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C0Eu; return dd3_static_complete(rt,3u);
        }
        case 0x9C0Eu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C10u; return dd3_static_complete(rt,2u);
        }
        case 0x9C10u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9C12u,0x9C1Cu)) c++; rt->state.cpu.pc=0x9C1Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C12u; return dd3_static_complete(rt,2u);
        }
        case 0x9C12u: {
            uint16_t ea=0x9Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C14u; return dd3_static_complete(rt,3u);
        }
        case 0x9C14u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9C16u; return dd3_static_complete(rt,2u);
        }
        case 0x9C16u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9C18u,0x9C1Cu)) c++; rt->state.cpu.pc=0x9C1Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C18u; return dd3_static_complete(rt,2u);
        }
        case 0x9C18u: {
            uint8_t v=0xD8u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9C1Au; return dd3_static_complete(rt,2u);
        }
        case 0x9C1Au: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9C1Cu,0x9C31u)) c++; rt->state.cpu.pc=0x9C31u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C1Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9C1Cu: {
            uint8_t v=0x23u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C1Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9C1Eu: {
            uint8_t v=0x40u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C20u; return dd3_static_complete(rt,2u);
        }
        case 0x9C20u: {
            dd3_static_push8(rt,(uint8_t)(0x9C22u>>8)); dd3_static_push8(rt,(uint8_t)0x9C22u);
            rt->state.cpu.pc=0x9F53u; return dd3_static_complete(rt,6u);
        }
        case 0x9C23u: {
            uint8_t v=0x35u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C25u; return dd3_static_complete(rt,2u);
        }
        case 0x9C25u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C27u; return dd3_static_complete(rt,3u);
        }
        case 0x9C27u: {
            uint8_t v=0x9Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C29u; return dd3_static_complete(rt,2u);
        }
        case 0x9C29u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C2Bu; return dd3_static_complete(rt,3u);
        }
        case 0x9C2Bu: {
            dd3_static_push8(rt,(uint8_t)(0x9C2Du>>8)); dd3_static_push8(rt,(uint8_t)0x9C2Du);
            rt->state.cpu.pc=0x9F74u; return dd3_static_complete(rt,6u);
        }
        case 0x9C2Eu: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0x9C31u; return dd3_static_complete(rt,4u);
        }
        case 0x9C31u: {
            uint16_t ea=0x04D1u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9C34u; return dd3_static_complete(rt,6u);
        }
        case 0x9C34u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9C55u: {
            uint16_t ea=0x3Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C57u; return dd3_static_complete(rt,3u);
        }
        case 0x9C57u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C59u; return dd3_static_complete(rt,2u);
        }
        case 0x9C59u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9C5Bu,0x9C65u)) c++; rt->state.cpu.pc=0x9C65u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C5Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9C5Bu: {
            uint16_t ea=0x9Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C5Du; return dd3_static_complete(rt,3u);
        }
        case 0x9C5Du: {
            uint8_t v=0x18u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9C5Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9C5Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9C61u,0x9C65u)) c++; rt->state.cpu.pc=0x9C65u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C61u; return dd3_static_complete(rt,2u);
        }
        case 0x9C61u: {
            uint8_t v=0xE0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9C63u; return dd3_static_complete(rt,2u);
        }
        case 0x9C63u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9C65u,0x9CAAu)) c++; rt->state.cpu.pc=0x9CAAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C65u; return dd3_static_complete(rt,2u);
        }
        case 0x9C65u: {
            uint8_t v=0x23u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C67u; return dd3_static_complete(rt,2u);
        }
        case 0x9C67u: {
            uint8_t v=0x60u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C69u; return dd3_static_complete(rt,2u);
        }
        case 0x9C69u: {
            dd3_static_push8(rt,(uint8_t)(0x9C6Bu>>8)); dd3_static_push8(rt,(uint8_t)0x9C6Bu);
            rt->state.cpu.pc=0x9F53u; return dd3_static_complete(rt,6u);
        }
        case 0x9C6Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C6Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9C6Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9C71u; return dd3_static_complete(rt,5u);
        }
        case 0x9C71u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9C72u; return dd3_static_complete(rt,2u);
        }
        case 0x9C72u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C74u; return dd3_static_complete(rt,2u);
        }
        case 0x9C74u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9C77u; return dd3_static_complete(rt,5u);
        }
        case 0x9C77u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9C78u; return dd3_static_complete(rt,2u);
        }
        case 0x9C78u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C7Au; return dd3_static_complete(rt,2u);
        }
        case 0x9C7Au: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C7Cu; return dd3_static_complete(rt,3u);
        }
        case 0x9C7Cu: {
            dd3_static_push8(rt,(uint8_t)(0x9C7Eu>>8)); dd3_static_push8(rt,(uint8_t)0x9C7Eu);
            rt->state.cpu.pc=0x9CAEu; return dd3_static_complete(rt,6u);
        }
        case 0x9C7Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C81u; return dd3_static_complete(rt,2u);
        }
        case 0x9C81u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9C84u; return dd3_static_complete(rt,5u);
        }
        case 0x9C84u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9C85u; return dd3_static_complete(rt,2u);
        }
        case 0x9C85u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9C88u; return dd3_static_complete(rt,5u);
        }
        case 0x9C88u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9C89u; return dd3_static_complete(rt,2u);
        }
        case 0x9C89u: {
            uint16_t ea=0x0034u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C8Cu; return dd3_static_complete(rt,4u);
        }
        case 0x9C8Cu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9C8Eu,0x9C94u)) c++; rt->state.cpu.pc=0x9C94u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9C8Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9C8Eu: {
            dd3_static_push8(rt,(uint8_t)(0x9C90u>>8)); dd3_static_push8(rt,(uint8_t)0x9C90u);
            rt->state.cpu.pc=0x9BC0u; return dd3_static_complete(rt,6u);
        }
        case 0x9C91u: {
            rt->state.cpu.pc=0x9CA7u; return dd3_static_complete(rt,3u);
        }
        case 0x9C94u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C96u; return dd3_static_complete(rt,2u);
        }
        case 0x9C96u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9C98u; return dd3_static_complete(rt,3u);
        }
        case 0x9C98u: {
            dd3_static_push8(rt,(uint8_t)(0x9C9Au>>8)); dd3_static_push8(rt,(uint8_t)0x9C9Au);
            rt->state.cpu.pc=0x9CAEu; return dd3_static_complete(rt,6u);
        }
        case 0x9C9Bu: {
            uint8_t v=0x14u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9C9Du; return dd3_static_complete(rt,2u);
        }
        case 0x9C9Du: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9CA0u; return dd3_static_complete(rt,5u);
        }
        case 0x9CA0u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9CA1u; return dd3_static_complete(rt,2u);
        }
        case 0x9CA1u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CA3u; return dd3_static_complete(rt,2u);
        }
        case 0x9CA3u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9CA6u; return dd3_static_complete(rt,5u);
        }
        case 0x9CA6u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9CA7u; return dd3_static_complete(rt,2u);
        }
        case 0x9CA7u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0x9CAAu; return dd3_static_complete(rt,4u);
        }
        case 0x9CAAu: {
            uint16_t ea=0x04D1u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9CADu; return dd3_static_complete(rt,6u);
        }
        case 0x9CADu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9CAEu: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CB0u; return dd3_static_complete(rt,3u);
        }
        case 0x9CB0u: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CB3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0x9CB3u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9CB5u,0x9CBEu)) c++; rt->state.cpu.pc=0x9CBEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9CB5u; return dd3_static_complete(rt,2u);
        }
        case 0x9CB5u: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CB8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0x9CB8u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9CBAu; return dd3_static_complete(rt,2u);
        }
        case 0x9CBAu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9CBCu,0x9CC4u)) c++; rt->state.cpu.pc=0x9CC4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9CBCu; return dd3_static_complete(rt,2u);
        }
        case 0x9CBCu: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CBEu; return dd3_static_complete(rt,2u);
        }
        case 0x9CBEu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CC0u; return dd3_static_complete(rt,2u);
        }
        case 0x9CC0u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9CC2u; return dd3_static_complete(rt,2u);
        }
        case 0x9CC2u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9CC4u,0x9CC8u)) c++; rt->state.cpu.pc=0x9CC8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9CC4u; return dd3_static_complete(rt,2u);
        }
        case 0x9CC4u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CC6u; return dd3_static_complete(rt,2u);
        }
        case 0x9CC6u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9CC8u,0x9CCBu)) c++; rt->state.cpu.pc=0x9CCBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9CC8u; return dd3_static_complete(rt,2u);
        }
        case 0x9CC8u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x9CC9u; return dd3_static_complete(rt,2u);
        }
        case 0x9CC9u: {
            uint8_t v=0x0Fu;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x9CCBu; return dd3_static_complete(rt,2u);
        }
        case 0x9CCBu: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CCDu; return dd3_static_complete(rt,3u);
        }
        case 0x9CCDu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CCEu; return dd3_static_complete(rt,2u);
        }
        case 0x9CCEu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9CCFu; return dd3_static_complete(rt,2u);
        }
        case 0x9CCFu: {
            uint16_t ea=(uint16_t)(0x9DBFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CD2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9DBFu,ea)?1u:0u));
        }
        case 0x9CD2u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CD4u; return dd3_static_complete(rt,3u);
        }
        case 0x9CD4u: {
            uint16_t ea=(uint16_t)(0x9DC0u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CD7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9DC0u,ea)?1u:0u));
        }
        case 0x9CD7u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CD9u; return dd3_static_complete(rt,3u);
        }
        case 0x9CD9u: {
            uint8_t v=0x0Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CDBu; return dd3_static_complete(rt,2u);
        }
        case 0x9CDBu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9CDDu; return dd3_static_complete(rt,3u);
        }
        case 0x9CDDu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CDFu; return dd3_static_complete(rt,2u);
        }
        case 0x9CDFu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CE1u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0x9CE1u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9CE4u; return dd3_static_complete(rt,5u);
        }
        case 0x9CE4u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9CE5u; return dd3_static_complete(rt,2u);
        }
        case 0x9CE5u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9CE6u; return dd3_static_complete(rt,2u);
        }
        case 0x9CE6u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9CE8u; return dd3_static_complete(rt,5u);
        }
        case 0x9CE8u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9CEAu,0x9CDFu)) c++; rt->state.cpu.pc=0x9CDFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9CEAu; return dd3_static_complete(rt,2u);
        }
        case 0x9CEAu: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CECu; return dd3_static_complete(rt,3u);
        }
        case 0x9CECu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9CEEu; return dd3_static_complete(rt,2u);
        }
        case 0x9CEEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9CF0u,0x9CF8u)) c++; rt->state.cpu.pc=0x9CF8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9CF0u; return dd3_static_complete(rt,2u);
        }
        case 0x9CF0u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9CF2u; return dd3_static_complete(rt,2u);
        }
        case 0x9CF2u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9CF4u,0x9CF8u)) c++; rt->state.cpu.pc=0x9CF8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9CF4u; return dd3_static_complete(rt,2u);
        }
        case 0x9CF4u: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9CF6u; return dd3_static_complete(rt,2u);
        }
        case 0x9CF6u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9CF8u,0x9D08u)) c++; rt->state.cpu.pc=0x9D08u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9CF8u; return dd3_static_complete(rt,2u);
        }
        case 0x9CF8u: {
            dd3_static_push8(rt,(uint8_t)(0x9CFAu>>8)); dd3_static_push8(rt,(uint8_t)0x9CFAu);
            rt->state.cpu.pc=0x9D13u; return dd3_static_complete(rt,6u);
        }
        case 0x9CFBu: {
            uint16_t ea=0xB5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9CFDu; return dd3_static_complete(rt,3u);
        }
        case 0x9CFDu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9D00u; return dd3_static_complete(rt,5u);
        }
        case 0x9D00u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9D01u; return dd3_static_complete(rt,2u);
        }
        case 0x9D01u: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D03u; return dd3_static_complete(rt,3u);
        }
        case 0x9D03u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9D06u; return dd3_static_complete(rt,5u);
        }
        case 0x9D06u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9D07u; return dd3_static_complete(rt,2u);
        }
        case 0x9D07u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9D08u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D0Au; return dd3_static_complete(rt,2u);
        }
        case 0x9D0Au: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9D0Du; return dd3_static_complete(rt,5u);
        }
        case 0x9D0Du: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9D0Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9D0Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9D11u; return dd3_static_complete(rt,5u);
        }
        case 0x9D11u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9D12u; return dd3_static_complete(rt,2u);
        }
        case 0x9D12u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9D13u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D15u; return dd3_static_complete(rt,3u);
        }
        case 0x9D15u: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D18u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0x9D18u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9D19u; return dd3_static_complete(rt,2u);
        }
        case 0x9D19u: {
            uint16_t ea=(uint16_t)(0x06DFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D1Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06DFu,ea)?1u:0u));
        }
        case 0x9D1Cu: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D1Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9D1Eu: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D20u; return dd3_static_complete(rt,3u);
        }
        case 0x9D20u: {
            uint16_t ea=(uint16_t)(0x06DFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D23u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06DFu,ea)?1u:0u));
        }
        case 0x9D23u: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D25u; return dd3_static_complete(rt,2u);
        }
        case 0x9D25u: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D27u; return dd3_static_complete(rt,3u);
        }
        case 0x9D27u: {
            uint16_t ea=0xB3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D29u; return dd3_static_complete(rt,3u);
        }
        case 0x9D29u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D2Au; return dd3_static_complete(rt,2u);
        }
        case 0x9D2Au: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9D2Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9D2Bu: {
            uint16_t ea=(uint16_t)(0x9D60u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D2Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9D60u,ea)?1u:0u));
        }
        case 0x9D2Eu: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D30u; return dd3_static_complete(rt,3u);
        }
        case 0x9D30u: {
            uint16_t ea=(uint16_t)(0x9D5Fu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D33u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9D5Fu,ea)?1u:0u));
        }
        case 0x9D33u: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D35u; return dd3_static_complete(rt,3u);
        }
        case 0x9D35u: {
            uint16_t ea=0xB4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D37u; return dd3_static_complete(rt,3u);
        }
        case 0x9D37u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D38u; return dd3_static_complete(rt,2u);
        }
        case 0x9D38u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D39u; return dd3_static_complete(rt,2u);
        }
        case 0x9D39u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9D3Au; return dd3_static_complete(rt,2u);
        }
        case 0x9D3Au: {
            uint16_t ea=(uint16_t)(0x9D82u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D3Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9D82u,ea)?1u:0u));
        }
        case 0x9D3Du: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x9D3Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9D3Eu: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x9D40u; return dd3_static_complete(rt,3u);
        }
        case 0x9D40u: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D42u; return dd3_static_complete(rt,3u);
        }
        case 0x9D42u: {
            uint16_t ea=(uint16_t)(0x9D81u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D45u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x9D81u,ea)?1u:0u));
        }
        case 0x9D45u: {
            uint16_t ea=0xB5u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x9D47u; return dd3_static_complete(rt,3u);
        }
        case 0x9D47u: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D49u; return dd3_static_complete(rt,3u);
        }
        case 0x9D49u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9D4Bu,0x9D4Du)) c++; rt->state.cpu.pc=0x9D4Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9D4Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9D4Bu: {
            uint8_t v=0x30u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D4Du; return dd3_static_complete(rt,2u);
        }
        case 0x9D4Du: {
            dd3_static_write8(rt,0xB5u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D4Fu; return dd3_static_complete(rt,3u);
        }
        case 0x9D4Fu: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9D51u; return dd3_static_complete(rt,3u);
        }
        case 0x9D51u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9D53u; return dd3_static_complete(rt,2u);
        }
        case 0x9D53u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9D55u,0x9D5Au)) c++; rt->state.cpu.pc=0x9D5Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9D55u; return dd3_static_complete(rt,2u);
        }
        case 0x9D55u: {
            uint16_t ea=0xB5u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9D57u; return dd3_static_complete(rt,5u);
        }
        case 0x9D57u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x9D58u; return dd3_static_complete(rt,2u);
        }
        case 0x9D58u: {
            uint8_t v=0x0Au;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x9D5Au; return dd3_static_complete(rt,2u);
        }
        case 0x9D5Au: {
            uint8_t v=0x30u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D5Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9D5Cu: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9D5Eu; return dd3_static_complete(rt,3u);
        }
        case 0x9D5Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9E4Eu: {
            uint16_t ea=0x3Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E50u; return dd3_static_complete(rt,3u);
        }
        case 0x9E50u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E52u; return dd3_static_complete(rt,2u);
        }
        case 0x9E52u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9E54u,0x9E5Eu)) c++; rt->state.cpu.pc=0x9E5Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9E54u; return dd3_static_complete(rt,2u);
        }
        case 0x9E54u: {
            uint16_t ea=0x9Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E56u; return dd3_static_complete(rt,3u);
        }
        case 0x9E56u: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9E58u; return dd3_static_complete(rt,2u);
        }
        case 0x9E58u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9E5Au,0x9E5Eu)) c++; rt->state.cpu.pc=0x9E5Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9E5Au; return dd3_static_complete(rt,2u);
        }
        case 0x9E5Au: {
            uint8_t v=0xE8u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9E5Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9E5Cu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9E5Eu,0x9E73u)) c++; rt->state.cpu.pc=0x9E73u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9E5Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9E5Eu: {
            uint8_t v=0x23u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E60u; return dd3_static_complete(rt,2u);
        }
        case 0x9E60u: {
            uint8_t v=0x80u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E62u; return dd3_static_complete(rt,2u);
        }
        case 0x9E62u: {
            dd3_static_push8(rt,(uint8_t)(0x9E64u>>8)); dd3_static_push8(rt,(uint8_t)0x9E64u);
            rt->state.cpu.pc=0x9F53u; return dd3_static_complete(rt,6u);
        }
        case 0x9E65u: {
            uint8_t v=0x77u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E67u; return dd3_static_complete(rt,2u);
        }
        case 0x9E67u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E69u; return dd3_static_complete(rt,3u);
        }
        case 0x9E69u: {
            uint8_t v=0x9Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E6Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9E6Bu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E6Du; return dd3_static_complete(rt,3u);
        }
        case 0x9E6Du: {
            dd3_static_push8(rt,(uint8_t)(0x9E6Fu>>8)); dd3_static_push8(rt,(uint8_t)0x9E6Fu);
            rt->state.cpu.pc=0x9F74u; return dd3_static_complete(rt,6u);
        }
        case 0x9E70u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0x9E73u; return dd3_static_complete(rt,4u);
        }
        case 0x9E73u: {
            uint16_t ea=0x04D1u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9E76u; return dd3_static_complete(rt,6u);
        }
        case 0x9E76u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9E97u: {
            uint16_t ea=0x3Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E99u; return dd3_static_complete(rt,3u);
        }
        case 0x9E99u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9E9Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9E9Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9E9Du,0x9EA3u)) c++; rt->state.cpu.pc=0x9EA3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9E9Du; return dd3_static_complete(rt,2u);
        }
        case 0x9E9Du: {
            uint16_t ea=0x9Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9E9Fu; return dd3_static_complete(rt,3u);
        }
        case 0x9E9Fu: {
            uint8_t v=0x28u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9EA1u; return dd3_static_complete(rt,2u);
        }
        case 0x9EA1u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9EA3u,0x9EB4u)) c++; rt->state.cpu.pc=0x9EB4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EA3u; return dd3_static_complete(rt,2u);
        }
        case 0x9EA3u: {
            uint8_t v=0x23u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EA5u; return dd3_static_complete(rt,2u);
        }
        case 0x9EA5u: {
            uint8_t v=0xA0u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EA7u; return dd3_static_complete(rt,2u);
        }
        case 0x9EA7u: {
            dd3_static_push8(rt,(uint8_t)(0x9EA9u>>8)); dd3_static_push8(rt,(uint8_t)0x9EA9u);
            rt->state.cpu.pc=0x9F53u; return dd3_static_complete(rt,6u);
        }
        case 0x9EAAu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EACu; return dd3_static_complete(rt,2u);
        }
        case 0x9EACu: {
            uint8_t v=0x20u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EAEu; return dd3_static_complete(rt,2u);
        }
        case 0x9EAEu: {
            dd3_static_push8(rt,(uint8_t)(0x9EB0u>>8)); dd3_static_push8(rt,(uint8_t)0x9EB0u);
            rt->state.cpu.pc=0x9F6Cu; return dd3_static_complete(rt,6u);
        }
        case 0x9EB1u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0x9EB4u; return dd3_static_complete(rt,4u);
        }
        case 0x9EB4u: {
            uint16_t ea=0x04D1u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9EB7u; return dd3_static_complete(rt,6u);
        }
        case 0x9EB7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9EB8u: {
            uint16_t ea=0x3Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EBAu; return dd3_static_complete(rt,3u);
        }
        case 0x9EBAu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EBCu; return dd3_static_complete(rt,2u);
        }
        case 0x9EBCu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9EBEu,0x9EC4u)) c++; rt->state.cpu.pc=0x9EC4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EBEu; return dd3_static_complete(rt,2u);
        }
        case 0x9EBEu: {
            uint16_t ea=0x9Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EC0u; return dd3_static_complete(rt,3u);
        }
        case 0x9EC0u: {
            uint8_t v=0xC8u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9EC2u; return dd3_static_complete(rt,2u);
        }
        case 0x9EC2u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9EC4u,0x9ECBu)) c++; rt->state.cpu.pc=0x9ECBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EC4u; return dd3_static_complete(rt,2u);
        }
        case 0x9EC4u: {
            uint8_t v=0x2Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EC6u; return dd3_static_complete(rt,2u);
        }
        case 0x9EC6u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EC8u; return dd3_static_complete(rt,2u);
        }
        case 0x9EC8u: {
            rt->state.cpu.pc=0x9AE8u; return dd3_static_complete(rt,3u);
        }
        case 0x9ECBu: {
            uint16_t ea=0x04D1u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9ECEu; return dd3_static_complete(rt,6u);
        }
        case 0x9ECEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9ECFu: {
            uint16_t ea=0x3Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9ED1u; return dd3_static_complete(rt,3u);
        }
        case 0x9ED1u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9ED3u; return dd3_static_complete(rt,2u);
        }
        case 0x9ED3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9ED5u,0x9EDFu)) c++; rt->state.cpu.pc=0x9EDFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9ED5u; return dd3_static_complete(rt,2u);
        }
        case 0x9ED5u: {
            uint16_t ea=0x9Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9ED7u; return dd3_static_complete(rt,3u);
        }
        case 0x9ED7u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9ED9u; return dd3_static_complete(rt,2u);
        }
        case 0x9ED9u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9EDBu,0x9EDFu)) c++; rt->state.cpu.pc=0x9EDFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EDBu; return dd3_static_complete(rt,2u);
        }
        case 0x9EDBu: {
            uint8_t v=0xD0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9EDDu; return dd3_static_complete(rt,2u);
        }
        case 0x9EDDu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9EDFu,0x9EE6u)) c++; rt->state.cpu.pc=0x9EE6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EDFu; return dd3_static_complete(rt,2u);
        }
        case 0x9EDFu: {
            uint8_t v=0x2Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EE1u; return dd3_static_complete(rt,2u);
        }
        case 0x9EE1u: {
            uint8_t v=0x20u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EE3u; return dd3_static_complete(rt,2u);
        }
        case 0x9EE3u: {
            rt->state.cpu.pc=0x9B31u; return dd3_static_complete(rt,3u);
        }
        case 0x9EE6u: {
            uint16_t ea=0x04D1u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9EE9u; return dd3_static_complete(rt,6u);
        }
        case 0x9EE9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9EEAu: {
            uint16_t ea=0x3Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EECu; return dd3_static_complete(rt,3u);
        }
        case 0x9EECu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9EEEu; return dd3_static_complete(rt,2u);
        }
        case 0x9EEEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9EF0u,0x9EFAu)) c++; rt->state.cpu.pc=0x9EFAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EF0u; return dd3_static_complete(rt,2u);
        }
        case 0x9EF0u: {
            uint16_t ea=0x9Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EF2u; return dd3_static_complete(rt,3u);
        }
        case 0x9EF2u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9EF4u; return dd3_static_complete(rt,2u);
        }
        case 0x9EF4u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9EF6u,0x9EFAu)) c++; rt->state.cpu.pc=0x9EFAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EF6u; return dd3_static_complete(rt,2u);
        }
        case 0x9EF6u: {
            uint8_t v=0xD8u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9EF8u; return dd3_static_complete(rt,2u);
        }
        case 0x9EF8u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9EFAu,0x9F01u)) c++; rt->state.cpu.pc=0x9F01u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9EFAu; return dd3_static_complete(rt,2u);
        }
        case 0x9EFAu: {
            uint8_t v=0x2Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EFCu; return dd3_static_complete(rt,2u);
        }
        case 0x9EFCu: {
            uint8_t v=0x40u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9EFEu; return dd3_static_complete(rt,2u);
        }
        case 0x9EFEu: {
            rt->state.cpu.pc=0x9C20u; return dd3_static_complete(rt,3u);
        }
        case 0x9F01u: {
            uint16_t ea=0x04D1u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9F04u; return dd3_static_complete(rt,6u);
        }
        case 0x9F04u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F05u: {
            uint16_t ea=0x3Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F07u; return dd3_static_complete(rt,3u);
        }
        case 0x9F07u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F09u; return dd3_static_complete(rt,2u);
        }
        case 0x9F09u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9F0Bu,0x9F15u)) c++; rt->state.cpu.pc=0x9F15u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F0Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9F0Bu: {
            uint16_t ea=0x9Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F0Du; return dd3_static_complete(rt,3u);
        }
        case 0x9F0Du: {
            uint8_t v=0x18u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9F0Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9F0Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9F11u,0x9F15u)) c++; rt->state.cpu.pc=0x9F15u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F11u; return dd3_static_complete(rt,2u);
        }
        case 0x9F11u: {
            uint8_t v=0xE0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9F13u; return dd3_static_complete(rt,2u);
        }
        case 0x9F13u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9F15u,0x9F1Cu)) c++; rt->state.cpu.pc=0x9F1Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F15u; return dd3_static_complete(rt,2u);
        }
        case 0x9F15u: {
            uint8_t v=0x2Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F17u; return dd3_static_complete(rt,2u);
        }
        case 0x9F17u: {
            uint8_t v=0x60u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F19u; return dd3_static_complete(rt,2u);
        }
        case 0x9F19u: {
            rt->state.cpu.pc=0x9C69u; return dd3_static_complete(rt,3u);
        }
        case 0x9F1Cu: {
            uint16_t ea=0x04D1u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9F1Fu; return dd3_static_complete(rt,6u);
        }
        case 0x9F1Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F20u: {
            uint16_t ea=0x3Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F22u; return dd3_static_complete(rt,3u);
        }
        case 0x9F22u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F24u; return dd3_static_complete(rt,2u);
        }
        case 0x9F24u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9F26u,0x9F30u)) c++; rt->state.cpu.pc=0x9F30u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F26u; return dd3_static_complete(rt,2u);
        }
        case 0x9F26u: {
            uint16_t ea=0x9Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F28u; return dd3_static_complete(rt,3u);
        }
        case 0x9F28u: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9F2Au; return dd3_static_complete(rt,2u);
        }
        case 0x9F2Au: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9F2Cu,0x9F30u)) c++; rt->state.cpu.pc=0x9F30u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F2Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9F2Cu: {
            uint8_t v=0xE8u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9F2Eu; return dd3_static_complete(rt,2u);
        }
        case 0x9F2Eu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9F30u,0x9F37u)) c++; rt->state.cpu.pc=0x9F37u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F30u; return dd3_static_complete(rt,2u);
        }
        case 0x9F30u: {
            uint8_t v=0x2Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F32u; return dd3_static_complete(rt,2u);
        }
        case 0x9F32u: {
            uint8_t v=0x80u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F34u; return dd3_static_complete(rt,2u);
        }
        case 0x9F34u: {
            rt->state.cpu.pc=0x9E62u; return dd3_static_complete(rt,3u);
        }
        case 0x9F37u: {
            uint16_t ea=0x04D1u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9F3Au; return dd3_static_complete(rt,6u);
        }
        case 0x9F3Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F3Bu: {
            uint16_t ea=0x3Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F3Du; return dd3_static_complete(rt,3u);
        }
        case 0x9F3Du: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F3Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9F3Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9F41u,0x9F47u)) c++; rt->state.cpu.pc=0x9F47u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F41u; return dd3_static_complete(rt,2u);
        }
        case 0x9F41u: {
            uint16_t ea=0x9Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F43u; return dd3_static_complete(rt,3u);
        }
        case 0x9F43u: {
            uint8_t v=0x28u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9F45u; return dd3_static_complete(rt,2u);
        }
        case 0x9F45u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9F47u,0x9F4Eu)) c++; rt->state.cpu.pc=0x9F4Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F47u; return dd3_static_complete(rt,2u);
        }
        case 0x9F47u: {
            uint8_t v=0x2Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F49u; return dd3_static_complete(rt,2u);
        }
        case 0x9F49u: {
            uint8_t v=0xA0u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F4Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9F4Bu: {
            rt->state.cpu.pc=0x9EA7u; return dd3_static_complete(rt,3u);
        }
        case 0x9F4Eu: {
            uint16_t ea=0x04D1u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9F51u; return dd3_static_complete(rt,6u);
        }
        case 0x9F51u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F53u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F56u; return dd3_static_complete(rt,4u);
        }
        case 0x9F56u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F59u; return dd3_static_complete(rt,5u);
        }
        case 0x9F59u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9F5Au; return dd3_static_complete(rt,2u);
        }
        case 0x9F5Au: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9F5Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9F5Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F5Eu; return dd3_static_complete(rt,5u);
        }
        case 0x9F5Eu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9F5Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9F5Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F61u; return dd3_static_complete(rt,2u);
        }
        case 0x9F61u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F64u; return dd3_static_complete(rt,5u);
        }
        case 0x9F64u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9F65u; return dd3_static_complete(rt,2u);
        }
        case 0x9F65u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F67u; return dd3_static_complete(rt,2u);
        }
        case 0x9F67u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F6Au; return dd3_static_complete(rt,5u);
        }
        case 0x9F6Au: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9F6Bu; return dd3_static_complete(rt,2u);
        }
        case 0x9F6Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F6Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F6Fu; return dd3_static_complete(rt,5u);
        }
        case 0x9F6Fu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9F70u; return dd3_static_complete(rt,2u);
        }
        case 0x9F70u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9F71u; return dd3_static_complete(rt,2u);
        }
        case 0x9F71u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9F73u,0x9F6Cu)) c++; rt->state.cpu.pc=0x9F6Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F73u; return dd3_static_complete(rt,2u);
        }
        case 0x9F73u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9F74u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F76u; return dd3_static_complete(rt,2u);
        }
        case 0x9F76u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9F78u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0x9F78u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x9F7Bu; return dd3_static_complete(rt,5u);
        }
        case 0x9F7Bu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9F7Cu; return dd3_static_complete(rt,2u);
        }
        case 0x9F7Cu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9F7Du; return dd3_static_complete(rt,2u);
        }
        case 0x9F7Du: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x9F7Fu; return dd3_static_complete(rt,2u);
        }
        case 0x9F7Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9F81u,0x9F76u)) c++; rt->state.cpu.pc=0x9F76u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9F81u; return dd3_static_complete(rt,2u);
        }
        case 0x9F81u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9FB4u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FB5u; return dd3_static_complete(rt,2u);
        }
        case 0x9FB5u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FB6u; return dd3_static_complete(rt,3u);
        }
        case 0x9FB6u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FB7u; return dd3_static_complete(rt,2u);
        }
        case 0x9FB7u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FB8u; return dd3_static_complete(rt,3u);
        }
        case 0x9FB8u: {
            uint8_t v=0x03u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FBAu; return dd3_static_complete(rt,2u);
        }
        case 0x9FBAu: {
            dd3_static_push8(rt,(uint8_t)(0x9FBCu>>8)); dd3_static_push8(rt,(uint8_t)0x9FBCu);
            rt->state.cpu.pc=0xFCE0u; return dd3_static_complete(rt,6u);
        }
        case 0x9FBDu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FBFu; return dd3_static_complete(rt,2u);
        }
        case 0x9FBFu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FC0u; return dd3_static_complete(rt,2u);
        }
        case 0x9FC0u: {
            uint8_t v=0x64u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9FC2u; return dd3_static_complete(rt,2u);
        }
        case 0x9FC2u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9FC4u,0x9FC9u)) c++; rt->state.cpu.pc=0x9FC9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9FC4u; return dd3_static_complete(rt,2u);
        }
        case 0x9FC4u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9FC5u; return dd3_static_complete(rt,2u);
        }
        case 0x9FC5u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x9FC7u,0x9FBAu)) c++; rt->state.cpu.pc=0x9FBAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9FC7u; return dd3_static_complete(rt,2u);
        }
        case 0x9FC7u: {
            uint8_t v=0x32u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FC9u; return dd3_static_complete(rt,2u);
        }
        case 0x9FC9u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FCBu; return dd3_static_complete(rt,3u);
        }
        case 0x9FCBu: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9FCDu; return dd3_static_complete(rt,2u);
        }
        case 0x9FCDu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9FCFu,0x9FD1u)) c++; rt->state.cpu.pc=0x9FD1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9FCFu; return dd3_static_complete(rt,2u);
        }
        case 0x9FCFu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x9FD1u; return dd3_static_complete(rt,5u);
        }
        case 0x9FD1u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FD3u; return dd3_static_complete(rt,2u);
        }
        case 0x9FD3u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.y);
            rt->state.cpu.pc=0x9FD5u; return dd3_static_complete(rt,3u);
        }
        case 0x9FD5u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FD7u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0x9FD7u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x9FD8u; return dd3_static_complete(rt,2u);
        }
        case 0x9FD8u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x9FDAu; return dd3_static_complete(rt,3u);
        }
        case 0x9FDAu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FDCu; return dd3_static_complete(rt,3u);
        }
        case 0x9FDCu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9FDDu; return dd3_static_complete(rt,2u);
        }
        case 0x9FDDu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9FDFu; return dd3_static_complete(rt,3u);
        }
        case 0x9FDFu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x9FE1u,0x9FD5u)) c++; rt->state.cpu.pc=0x9FD5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9FE1u; return dd3_static_complete(rt,2u);
        }
        case 0x9FE1u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9FE2u; return dd3_static_complete(rt,2u);
        }
        case 0x9FE2u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.y);
            rt->state.cpu.pc=0x9FE4u; return dd3_static_complete(rt,3u);
        }
        case 0x9FE4u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FE5u; return dd3_static_complete(rt,4u);
        }
        case 0x9FE5u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x9FE6u; return dd3_static_complete(rt,2u);
        }
        case 0x9FE6u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FE7u; return dd3_static_complete(rt,4u);
        }
        case 0x9FE7u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x9FE8u; return dd3_static_complete(rt,2u);
        }
        case 0x9FE8u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FEAu; return dd3_static_complete(rt,3u);
        }
        case 0x9FEAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9FEEu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FEFu; return dd3_static_complete(rt,2u);
        }
        case 0x9FEFu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FF0u; return dd3_static_complete(rt,3u);
        }
        case 0x9FF0u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FF1u; return dd3_static_complete(rt,2u);
        }
        case 0x9FF1u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FF2u; return dd3_static_complete(rt,3u);
        }
        case 0x9FF2u: {
            uint16_t ea=0x76u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x9FF4u; return dd3_static_complete(rt,3u);
        }
        case 0x9FF4u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x9FF6u; return dd3_static_complete(rt,2u);
        }
        case 0x9FF6u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9FF8u,0x9FFEu)) c++; rt->state.cpu.pc=0x9FFEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9FF8u; return dd3_static_complete(rt,2u);
        }
        case 0x9FF8u: {
            dd3_static_push8(rt,(uint8_t)(0x9FFAu>>8)); dd3_static_push8(rt,(uint8_t)0x9FFAu);
            rt->state.cpu.pc=0xB671u; return dd3_static_complete(rt,6u);
        }
        case 0x9FFBu: {
            rt->state.cpu.pc=0xA191u; return dd3_static_complete(rt,3u);
        }
        case 0x9FFEu: {
            uint8_t v=0x0Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA000u; return dd3_static_complete(rt,2u);
        }
        default: return dd3_static_fail_unproven(rt,8,rt->state.cpu.pc);
    }
}
