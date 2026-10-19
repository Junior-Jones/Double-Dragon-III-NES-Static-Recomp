/* Generated: no runtime opcode fetch or decode. */
#include "dd3_static_semantics.h"
int dd3_static_execute_bank_09(DD3StaticRuntime *rt) {
    switch (rt->state.cpu.pc) {
        case 0x8018u: {
            dd3_static_push8(rt,(uint8_t)(0x801Au>>8)); dd3_static_push8(rt,(uint8_t)0x801Au);
            rt->state.cpu.pc=0xA4A2u; return dd3_static_complete(rt,6u);
        }
        case 0x801Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x801Du; return dd3_static_complete(rt,2u);
        }
        case 0x801Du: {
            uint16_t ea=(uint16_t)((0x3Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x801Fu; return dd3_static_complete(rt,4u);
        }
        case 0x801Fu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8021u,0x8024u)) c++; rt->state.cpu.pc=0x8024u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8021u; return dd3_static_complete(rt,2u);
        }
        case 0x8021u: {
            rt->state.cpu.pc=0xA16Au; return dd3_static_complete(rt,3u);
        }
        case 0x8024u: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8026u; return dd3_static_complete(rt,4u);
        }
        case 0x8026u: {
            uint8_t v=0x15u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8028u; return dd3_static_complete(rt,2u);
        }
        case 0x8028u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x802Au,0x8039u)) c++; rt->state.cpu.pc=0x8039u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x802Au; return dd3_static_complete(rt,2u);
        }
        case 0x802Au: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x802Cu; return dd3_static_complete(rt,4u);
        }
        case 0x802Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x802Eu; return dd3_static_complete(rt,2u);
        }
        case 0x802Eu: {
            uint8_t v=0x70u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8030u; return dd3_static_complete(rt,2u);
        }
        case 0x8030u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8032u,0x8021u)) c++; rt->state.cpu.pc=0x8021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8032u; return dd3_static_complete(rt,2u);
        }
        case 0x8032u: {
            dd3_static_push8(rt,(uint8_t)(0x8034u>>8)); dd3_static_push8(rt,(uint8_t)0x8034u);
            rt->state.cpu.pc=0xB8D0u; return dd3_static_complete(rt,6u);
        }
        case 0x8035u: {
            uint8_t v=0x02u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8037u; return dd3_static_complete(rt,2u);
        }
        case 0x8037u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8039u,0x8021u)) c++; rt->state.cpu.pc=0x8021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8039u; return dd3_static_complete(rt,2u);
        }
        case 0x8039u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x803Bu; return dd3_static_complete(rt,4u);
        }
        case 0x803Bu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x803Du; return dd3_static_complete(rt,2u);
        }
        case 0x803Du: {
            uint8_t v=0x61u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x803Fu; return dd3_static_complete(rt,2u);
        }
        case 0x803Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8041u,0x8021u)) c++; rt->state.cpu.pc=0x8021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8041u; return dd3_static_complete(rt,2u);
        }
        case 0x8041u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8043u; return dd3_static_complete(rt,2u);
        }
        case 0x8043u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8045u,0x8021u)) c++; rt->state.cpu.pc=0x8021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8045u; return dd3_static_complete(rt,2u);
        }
        case 0x8045u: {
            uint8_t v=0x1Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8047u; return dd3_static_complete(rt,2u);
        }
        case 0x8047u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8049u,0x8021u)) c++; rt->state.cpu.pc=0x8021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8049u; return dd3_static_complete(rt,2u);
        }
        case 0x8049u: {
            uint8_t v=0x71u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x804Bu; return dd3_static_complete(rt,2u);
        }
        case 0x804Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x804Du,0x8021u)) c++; rt->state.cpu.pc=0x8021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x804Du; return dd3_static_complete(rt,2u);
        }
        case 0x804Du: {
            uint8_t v=0x77u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x804Fu; return dd3_static_complete(rt,2u);
        }
        case 0x804Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8051u,0x8021u)) c++; rt->state.cpu.pc=0x8021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8051u; return dd3_static_complete(rt,2u);
        }
        case 0x8051u: {
            uint8_t v=0x78u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8053u; return dd3_static_complete(rt,2u);
        }
        case 0x8053u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8055u,0x8021u)) c++; rt->state.cpu.pc=0x8021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8055u; return dd3_static_complete(rt,2u);
        }
        case 0x8055u: {
            uint8_t v=0x24u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8057u; return dd3_static_complete(rt,2u);
        }
        case 0x8057u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8059u,0x8021u)) c++; rt->state.cpu.pc=0x8021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8059u; return dd3_static_complete(rt,2u);
        }
        case 0x8059u: {
            dd3_static_push8(rt,(uint8_t)(0x805Bu>>8)); dd3_static_push8(rt,(uint8_t)0x805Bu);
            rt->state.cpu.pc=0xA540u; return dd3_static_complete(rt,6u);
        }
        case 0x805Cu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x805Eu,0x8021u)) c++; rt->state.cpu.pc=0x8021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x805Eu; return dd3_static_complete(rt,2u);
        }
        case 0x805Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8060u>>8)); dd3_static_push8(rt,(uint8_t)0x8060u);
            rt->state.cpu.pc=0xB563u; return dd3_static_complete(rt,6u);
        }
        case 0x8061u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8062u; return dd3_static_complete(rt,2u);
        }
        case 0x8062u: {
            dd3_static_push8(rt,(uint8_t)(0x8064u>>8)); dd3_static_push8(rt,(uint8_t)0x8064u);
            rt->state.cpu.pc=0x8018u; return dd3_static_complete(rt,6u);
        }
        case 0x8065u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8067u,0x80B6u)) c++; rt->state.cpu.pc=0x80B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8067u; return dd3_static_complete(rt,2u);
        }
        case 0x8067u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8069u; return dd3_static_complete(rt,4u);
        }
        case 0x8069u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x806Bu; return dd3_static_complete(rt,2u);
        }
        case 0x806Bu: {
            uint8_t v=0x1Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x806Du; return dd3_static_complete(rt,2u);
        }
        case 0x806Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x806Fu,0x80B6u)) c++; rt->state.cpu.pc=0x80B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x806Fu; return dd3_static_complete(rt,2u);
        }
        case 0x806Fu: {
            uint8_t v=0x22u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8071u; return dd3_static_complete(rt,2u);
        }
        case 0x8071u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8073u,0x80B6u)) c++; rt->state.cpu.pc=0x80B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8073u; return dd3_static_complete(rt,2u);
        }
        case 0x8073u: {
            uint8_t v=0x1Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8075u; return dd3_static_complete(rt,2u);
        }
        case 0x8075u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8077u,0x80B6u)) c++; rt->state.cpu.pc=0x80B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8077u; return dd3_static_complete(rt,2u);
        }
        case 0x8077u: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8079u; return dd3_static_complete(rt,2u);
        }
        case 0x8079u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x807Bu,0x80B6u)) c++; rt->state.cpu.pc=0x80B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x807Bu; return dd3_static_complete(rt,2u);
        }
        case 0x807Bu: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x807Du; return dd3_static_complete(rt,4u);
        }
        case 0x807Du: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x807Fu; return dd3_static_complete(rt,2u);
        }
        case 0x807Fu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8081u; return dd3_static_complete(rt,2u);
        }
        case 0x8081u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8083u,0x808Au)) c++; rt->state.cpu.pc=0x808Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8083u; return dd3_static_complete(rt,2u);
        }
        case 0x8083u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8085u; return dd3_static_complete(rt,2u);
        }
        case 0x8085u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8087u,0x80A6u)) c++; rt->state.cpu.pc=0x80A6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8087u; return dd3_static_complete(rt,2u);
        }
        case 0x8087u: {
            dd3_static_push8(rt,(uint8_t)(0x8089u>>8)); dd3_static_push8(rt,(uint8_t)0x8089u);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,6u);
        }
        case 0x808Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x808Cu; return dd3_static_complete(rt,2u);
        }
        case 0x808Cu: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x808Eu; return dd3_static_complete(rt,4u);
        }
        case 0x808Eu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8091u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0x8091u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8093u; return dd3_static_complete(rt,2u);
        }
        case 0x8093u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8095u,0x80A3u)) c++; rt->state.cpu.pc=0x80A3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8095u; return dd3_static_complete(rt,2u);
        }
        case 0x8095u: {
            uint16_t ea=(uint16_t)((0x4Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8097u; return dd3_static_complete(rt,4u);
        }
        case 0x8097u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8099u,0x80A3u)) c++; rt->state.cpu.pc=0x80A3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8099u; return dd3_static_complete(rt,2u);
        }
        case 0x8099u: {
            dd3_static_push8(rt,(uint8_t)(0x809Bu>>8)); dd3_static_push8(rt,(uint8_t)0x809Bu);
            rt->state.cpu.pc=0xA261u; return dd3_static_complete(rt,6u);
        }
        case 0x809Cu: {
            dd3_static_push8(rt,(uint8_t)(0x809Eu>>8)); dd3_static_push8(rt,(uint8_t)0x809Eu);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,6u);
        }
        case 0x809Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80A1u; return dd3_static_complete(rt,2u);
        }
        case 0x80A1u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x80A3u; return dd3_static_complete(rt,4u);
        }
        case 0x80A3u: {
            rt->state.cpu.pc=0xA0B6u; return dd3_static_complete(rt,3u);
        }
        case 0x80A6u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80A9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0x80A9u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80ABu; return dd3_static_complete(rt,2u);
        }
        case 0x80ABu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80ADu,0x80B3u)) c++; rt->state.cpu.pc=0x80B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80ADu; return dd3_static_complete(rt,2u);
        }
        case 0x80ADu: {
            uint16_t ea=(uint16_t)((0x4Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80AFu; return dd3_static_complete(rt,4u);
        }
        case 0x80AFu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x80B1u,0x8099u)) c++; rt->state.cpu.pc=0x8099u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80B1u; return dd3_static_complete(rt,2u);
        }
        case 0x80B1u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80B3u,0x80B6u)) c++; rt->state.cpu.pc=0x80B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80B3u; return dd3_static_complete(rt,2u);
        }
        case 0x80B3u: {
            rt->state.cpu.pc=0xA021u; return dd3_static_complete(rt,3u);
        }
        case 0x80B6u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80B8u; return dd3_static_complete(rt,4u);
        }
        case 0x80B8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x80BAu,0x80B3u)) c++; rt->state.cpu.pc=0x80B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80BAu; return dd3_static_complete(rt,2u);
        }
        case 0x80BAu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80BCu; return dd3_static_complete(rt,2u);
        }
        case 0x80BCu: {
            uint8_t v=0x2Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80BEu; return dd3_static_complete(rt,2u);
        }
        case 0x80BEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80C0u,0x80B3u)) c++; rt->state.cpu.pc=0x80B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80C0u; return dd3_static_complete(rt,2u);
        }
        case 0x80C0u: {
            uint8_t v=0x4Bu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80C2u; return dd3_static_complete(rt,2u);
        }
        case 0x80C2u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80C4u,0x80F5u)) c++; rt->state.cpu.pc=0x80F5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80C4u; return dd3_static_complete(rt,2u);
        }
        case 0x80C4u: {
            uint8_t v=0x12u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80C6u; return dd3_static_complete(rt,2u);
        }
        case 0x80C6u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80C8u,0x80F5u)) c++; rt->state.cpu.pc=0x80F5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80C8u; return dd3_static_complete(rt,2u);
        }
        case 0x80C8u: {
            uint8_t v=0x5Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80CAu; return dd3_static_complete(rt,2u);
        }
        case 0x80CAu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80CCu,0x80F5u)) c++; rt->state.cpu.pc=0x80F5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80CCu; return dd3_static_complete(rt,2u);
        }
        case 0x80CCu: {
            uint8_t v=0x09u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80CEu; return dd3_static_complete(rt,2u);
        }
        case 0x80CEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80D0u,0x80F5u)) c++; rt->state.cpu.pc=0x80F5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80D0u; return dd3_static_complete(rt,2u);
        }
        case 0x80D0u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80D2u; return dd3_static_complete(rt,2u);
        }
        case 0x80D2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80D4u,0x80D7u)) c++; rt->state.cpu.pc=0x80D7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80D4u; return dd3_static_complete(rt,2u);
        }
        case 0x80D4u: {
            rt->state.cpu.pc=0xA15Fu; return dd3_static_complete(rt,3u);
        }
        case 0x80D7u: {
            uint8_t v=0x29u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80D9u; return dd3_static_complete(rt,2u);
        }
        case 0x80D9u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x80DBu,0x80EFu)) c++; rt->state.cpu.pc=0x80EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80DBu; return dd3_static_complete(rt,2u);
        }
        case 0x80DBu: {
            uint8_t v=0x2Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80DDu; return dd3_static_complete(rt,2u);
        }
        case 0x80DDu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x80DFu,0x80EFu)) c++; rt->state.cpu.pc=0x80EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80DFu; return dd3_static_complete(rt,2u);
        }
        case 0x80DFu: {
            uint16_t ea=(uint16_t)((0xC3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80E1u; return dd3_static_complete(rt,4u);
        }
        case 0x80E1u: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80E3u; return dd3_static_complete(rt,2u);
        }
        case 0x80E3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80E5u,0x80ECu)) c++; rt->state.cpu.pc=0x80ECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80E5u; return dd3_static_complete(rt,2u);
        }
        case 0x80E5u: {
            uint16_t ea=(uint16_t)(0x06BEu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80E8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06BEu,ea)?1u:0u));
        }
        case 0x80E8u: {
            uint8_t v=0x80u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80EAu; return dd3_static_complete(rt,2u);
        }
        case 0x80EAu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x80ECu,0x80EFu)) c++; rt->state.cpu.pc=0x80EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80ECu; return dd3_static_complete(rt,2u);
        }
        case 0x80ECu: {
            dd3_static_push8(rt,(uint8_t)(0x80EEu>>8)); dd3_static_push8(rt,(uint8_t)0x80EEu);
            rt->state.cpu.pc=0xA21Eu; return dd3_static_complete(rt,6u);
        }
        case 0x80EFu: {
            uint16_t ea=(uint16_t)((0x4Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80F1u; return dd3_static_complete(rt,4u);
        }
        case 0x80F1u: {
            uint8_t v=0x43u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80F3u; return dd3_static_complete(rt,2u);
        }
        case 0x80F3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80F5u,0x8107u)) c++; rt->state.cpu.pc=0x8107u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80F5u; return dd3_static_complete(rt,2u);
        }
        case 0x80F5u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80F7u; return dd3_static_complete(rt,2u);
        }
        case 0x80F7u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x80F9u; return dd3_static_complete(rt,4u);
        }
        case 0x80F9u: {
            dd3_static_write8(rt,(uint16_t)(0x04ACu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x80FCu; return dd3_static_complete(rt,5u);
        }
        case 0x80FCu: {
            dd3_static_write8(rt,(uint16_t)(0x04B0u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x80FFu; return dd3_static_complete(rt,5u);
        }
        case 0x80FFu: {
            dd3_static_write8(rt,0x03C3u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8102u; return dd3_static_complete(rt,4u);
        }
        case 0x8102u: {
            dd3_static_write8(rt,(uint16_t)(0x04C6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8105u; return dd3_static_complete(rt,5u);
        }
        case 0x8105u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8107u,0x816Au)) c++; rt->state.cpu.pc=0x816Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8107u; return dd3_static_complete(rt,2u);
        }
        case 0x8107u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8108u; return dd3_static_complete(rt,2u);
        }
        case 0x8108u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x810Au; return dd3_static_complete(rt,2u);
        }
        case 0x810Au: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x810Bu; return dd3_static_complete(rt,2u);
        }
        case 0x810Bu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x810Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0x810Eu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8110u; return dd3_static_complete(rt,2u);
        }
        case 0x8110u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8112u,0x8119u)) c++; rt->state.cpu.pc=0x8119u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8112u; return dd3_static_complete(rt,2u);
        }
        case 0x8112u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8115u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0x8115u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8117u; return dd3_static_complete(rt,2u);
        }
        case 0x8117u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8119u,0x8167u)) c++; rt->state.cpu.pc=0x8167u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8119u; return dd3_static_complete(rt,2u);
        }
        case 0x8119u: {
            uint16_t ea=(uint16_t)((0x56u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x811Bu; return dd3_static_complete(rt,4u);
        }
        case 0x811Bu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x811Du; return dd3_static_complete(rt,2u);
        }
        case 0x811Du: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x811Fu,0x816Au)) c++; rt->state.cpu.pc=0x816Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x811Fu; return dd3_static_complete(rt,2u);
        }
        case 0x811Fu: {
            uint16_t ea=(uint16_t)((0x4Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8121u; return dd3_static_complete(rt,4u);
        }
        case 0x8121u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8123u; return dd3_static_complete(rt,2u);
        }
        case 0x8123u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8125u,0x816Au)) c++; rt->state.cpu.pc=0x816Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8125u; return dd3_static_complete(rt,2u);
        }
        case 0x8125u: {
            uint16_t ea=0x049Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8128u; return dd3_static_complete(rt,4u);
        }
        case 0x8128u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x812Au,0x8130u)) c++; rt->state.cpu.pc=0x8130u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x812Au; return dd3_static_complete(rt,2u);
        }
        case 0x812Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x812Cu; return dd3_static_complete(rt,2u);
        }
        case 0x812Cu: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x812Eu; return dd3_static_complete(rt,4u);
        }
        case 0x812Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8130u,0x816Au)) c++; rt->state.cpu.pc=0x816Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8130u; return dd3_static_complete(rt,2u);
        }
        case 0x8130u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8133u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0x8133u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8135u; return dd3_static_complete(rt,2u);
        }
        case 0x8135u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8137u,0x8142u)) c++; rt->state.cpu.pc=0x8142u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8137u; return dd3_static_complete(rt,2u);
        }
        case 0x8137u: {
            dd3_static_push8(rt,(uint8_t)(0x8139u>>8)); dd3_static_push8(rt,(uint8_t)0x8139u);
            rt->state.cpu.pc=0xAB90u; return dd3_static_complete(rt,6u);
        }
        case 0x813Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x813Cu,0x8142u)) c++; rt->state.cpu.pc=0x8142u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x813Cu; return dd3_static_complete(rt,2u);
        }
        case 0x813Cu: {
            uint8_t v=0x4Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x813Eu; return dd3_static_complete(rt,2u);
        }
        case 0x813Eu: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0x8140u; return dd3_static_complete(rt,4u);
        }
        case 0x8140u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8142u,0x816Au)) c++; rt->state.cpu.pc=0x816Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8142u; return dd3_static_complete(rt,2u);
        }
        case 0x8142u: {
            dd3_static_push8(rt,(uint8_t)(0x8144u>>8)); dd3_static_push8(rt,(uint8_t)0x8144u);
            rt->state.cpu.pc=0xA658u; return dd3_static_complete(rt,6u);
        }
        case 0x8145u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8147u; return dd3_static_complete(rt,4u);
        }
        case 0x8147u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8149u; return dd3_static_complete(rt,2u);
        }
        case 0x8149u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x814Bu; return dd3_static_complete(rt,2u);
        }
        case 0x814Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x814Du,0x815Fu)) c++; rt->state.cpu.pc=0x815Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x814Du; return dd3_static_complete(rt,2u);
        }
        case 0x814Du: {
            dd3_static_push8(rt,(uint8_t)(0x814Fu>>8)); dd3_static_push8(rt,(uint8_t)0x814Fu);
            rt->state.cpu.pc=0xA196u; return dd3_static_complete(rt,6u);
        }
        case 0x8150u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8152u,0x816Au)) c++; rt->state.cpu.pc=0x816Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8152u; return dd3_static_complete(rt,2u);
        }
        case 0x8152u: {
            dd3_static_push8(rt,(uint8_t)(0x8154u>>8)); dd3_static_push8(rt,(uint8_t)0x8154u);
            rt->state.cpu.pc=0xAA41u; return dd3_static_complete(rt,6u);
        }
        case 0x8155u: {
            dd3_static_push8(rt,(uint8_t)(0x8157u>>8)); dd3_static_push8(rt,(uint8_t)0x8157u);
            rt->state.cpu.pc=0xA196u; return dd3_static_complete(rt,6u);
        }
        case 0x8158u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x815Au,0x816Au)) c++; rt->state.cpu.pc=0x816Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x815Au; return dd3_static_complete(rt,2u);
        }
        case 0x815Au: {
            dd3_static_push8(rt,(uint8_t)(0x815Cu>>8)); dd3_static_push8(rt,(uint8_t)0x815Cu);
            rt->state.cpu.pc=0xA4D9u; return dd3_static_complete(rt,6u);
        }
        case 0x815Du: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x815Fu,0x816Au)) c++; rt->state.cpu.pc=0x816Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x815Fu; return dd3_static_complete(rt,2u);
        }
        case 0x815Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8161u>>8)); dd3_static_push8(rt,(uint8_t)0x8161u);
            rt->state.cpu.pc=0xAC69u; return dd3_static_complete(rt,6u);
        }
        case 0x8162u: {
            dd3_static_push8(rt,(uint8_t)(0x8164u>>8)); dd3_static_push8(rt,(uint8_t)0x8164u);
            rt->state.cpu.pc=0xAD5Eu; return dd3_static_complete(rt,6u);
        }
        case 0x8165u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8167u,0x816Au)) c++; rt->state.cpu.pc=0x816Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8167u; return dd3_static_complete(rt,2u);
        }
        case 0x8167u: {
            dd3_static_push8(rt,(uint8_t)(0x8169u>>8)); dd3_static_push8(rt,(uint8_t)0x8169u);
            rt->state.cpu.pc=0xA1A5u; return dd3_static_complete(rt,6u);
        }
        case 0x816Au: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x816Cu; return dd3_static_complete(rt,4u);
        }
        case 0x816Cu: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x816Eu; return dd3_static_complete(rt,2u);
        }
        case 0x816Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8170u,0x8184u)) c++; rt->state.cpu.pc=0x8184u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8170u; return dd3_static_complete(rt,2u);
        }
        case 0x8170u: {
            uint16_t ea=0x47u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8172u; return dd3_static_complete(rt,3u);
        }
        case 0x8172u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8174u; return dd3_static_complete(rt,2u);
        }
        case 0x8174u: {
            uint8_t v=0x61u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8176u; return dd3_static_complete(rt,2u);
        }
        case 0x8176u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8178u,0x8184u)) c++; rt->state.cpu.pc=0x8184u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8178u; return dd3_static_complete(rt,2u);
        }
        case 0x8178u: {
            uint16_t ea=0x46u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x817Au; return dd3_static_complete(rt,3u);
        }
        case 0x817Au: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x817Cu; return dd3_static_complete(rt,2u);
        }
        case 0x817Cu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x817Eu; return dd3_static_complete(rt,2u);
        }
        case 0x817Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8180u,0x8184u)) c++; rt->state.cpu.pc=0x8184u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8180u; return dd3_static_complete(rt,2u);
        }
        case 0x8180u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8182u; return dd3_static_complete(rt,2u);
        }
        case 0x8182u: {
            dd3_static_write8(rt,0x46u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8184u; return dd3_static_complete(rt,3u);
        }
        case 0x8184u: {
            dd3_static_push8(rt,(uint8_t)(0x8186u>>8)); dd3_static_push8(rt,(uint8_t)0x8186u);
            rt->state.cpu.pc=0xB079u; return dd3_static_complete(rt,6u);
        }
        case 0x8187u: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8189u; return dd3_static_complete(rt,5u);
        }
        case 0x8189u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x818Au; return dd3_static_complete(rt,2u);
        }
        case 0x818Au: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x818Cu; return dd3_static_complete(rt,2u);
        }
        case 0x818Cu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x818Eu,0x8191u)) c++; rt->state.cpu.pc=0x8191u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x818Eu; return dd3_static_complete(rt,2u);
        }
        case 0x818Eu: {
            rt->state.cpu.pc=0xA01Du; return dd3_static_complete(rt,3u);
        }
        case 0x8191u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8192u; return dd3_static_complete(rt,4u);
        }
        case 0x8192u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8193u; return dd3_static_complete(rt,2u);
        }
        case 0x8193u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8194u; return dd3_static_complete(rt,4u);
        }
        case 0x8194u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8195u; return dd3_static_complete(rt,2u);
        }
        case 0x8195u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9FEBu: {
            uint16_t ea=dd3_static_read16_zp(rt,(uint8_t)(0x00u+rt->state.cpu.x)); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FEDu; return dd3_static_complete(rt,6u);
        }
        case 0x9FEDu: {
            (void)0x02u;
            rt->state.cpu.pc=0x9FEFu; return dd3_static_complete(rt,2u);
        }
        case 0x9FEFu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0x9FF1u; return dd3_static_complete(rt,2u);
        }
        case 0x9FF1u: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt)); { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)((hi<<8)|lo); }
            return dd3_static_complete(rt,6u);
        }
        case 0x9FFBu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x9FFDu,0x9FFFu)) c++; rt->state.cpu.pc=0x9FFFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x9FFDu; return dd3_static_complete(rt,2u);
        }
        case 0x9FFDu: {
            uint16_t ea=(uint16_t)(0x04FFu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA000u; return dd3_static_complete(rt,7u);
        }
        case 0xA000u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA002u,0xA00Au)) c++; rt->state.cpu.pc=0xA00Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA002u; return dd3_static_complete(rt,2u);
        }
        case 0xA002u: {
            uint16_t ea=0x46u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA004u; return dd3_static_complete(rt,3u);
        }
        case 0xA004u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA006u; return dd3_static_complete(rt,2u);
        }
        case 0xA006u: {
            uint8_t v=0x74u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA008u; return dd3_static_complete(rt,2u);
        }
        case 0xA008u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA00Au,0x9FFBu)) c++; rt->state.cpu.pc=0x9FFBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA00Au; return dd3_static_complete(rt,2u);
        }
        case 0xA00Au: {
            dd3_static_push8(rt,(uint8_t)(0xA00Cu>>8)); dd3_static_push8(rt,(uint8_t)0xA00Cu);
            rt->state.cpu.pc=0xA2BCu; return dd3_static_complete(rt,6u);
        }
        case 0xA00Du: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA00Fu,0x9FEBu)) c++; rt->state.cpu.pc=0x9FEBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA00Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA00Fu: {
            dd3_static_push8(rt,(uint8_t)(0xA011u>>8)); dd3_static_push8(rt,(uint8_t)0xA011u);
            rt->state.cpu.pc=0xA301u; return dd3_static_complete(rt,6u);
        }
        case 0xA012u: {
            dd3_static_push8(rt,(uint8_t)(0xA014u>>8)); dd3_static_push8(rt,(uint8_t)0xA014u);
            rt->state.cpu.pc=0xA462u; return dd3_static_complete(rt,6u);
        }
        case 0xA015u: {
            dd3_static_push8(rt,(uint8_t)(0xA017u>>8)); dd3_static_push8(rt,(uint8_t)0xA017u);
            rt->state.cpu.pc=0xA26Au; return dd3_static_complete(rt,6u);
        }
        case 0xA018u: {
            dd3_static_push8(rt,(uint8_t)(0xA01Au>>8)); dd3_static_push8(rt,(uint8_t)0xA01Au);
            rt->state.cpu.pc=0xA4A2u; return dd3_static_complete(rt,6u);
        }
        case 0xA01Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA01Du; return dd3_static_complete(rt,2u);
        }
        case 0xA01Du: {
            uint16_t ea=(uint16_t)((0x3Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA01Fu; return dd3_static_complete(rt,4u);
        }
        case 0xA01Fu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA021u,0xA024u)) c++; rt->state.cpu.pc=0xA024u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA021u; return dd3_static_complete(rt,2u);
        }
        case 0xA021u: {
            rt->state.cpu.pc=0xA16Au; return dd3_static_complete(rt,3u);
        }
        case 0xA024u: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA026u; return dd3_static_complete(rt,4u);
        }
        case 0xA026u: {
            uint8_t v=0x15u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA028u; return dd3_static_complete(rt,2u);
        }
        case 0xA028u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA02Au,0xA039u)) c++; rt->state.cpu.pc=0xA039u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA02Au; return dd3_static_complete(rt,2u);
        }
        case 0xA02Au: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA02Cu; return dd3_static_complete(rt,4u);
        }
        case 0xA02Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA02Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA02Eu: {
            uint8_t v=0x70u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA030u; return dd3_static_complete(rt,2u);
        }
        case 0xA030u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA032u,0xA021u)) c++; rt->state.cpu.pc=0xA021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA032u; return dd3_static_complete(rt,2u);
        }
        case 0xA032u: {
            dd3_static_push8(rt,(uint8_t)(0xA034u>>8)); dd3_static_push8(rt,(uint8_t)0xA034u);
            rt->state.cpu.pc=0xB8D0u; return dd3_static_complete(rt,6u);
        }
        case 0xA035u: {
            uint8_t v=0x02u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA037u; return dd3_static_complete(rt,2u);
        }
        case 0xA037u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA039u,0xA021u)) c++; rt->state.cpu.pc=0xA021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA039u; return dd3_static_complete(rt,2u);
        }
        case 0xA039u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA03Bu; return dd3_static_complete(rt,4u);
        }
        case 0xA03Bu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA03Du; return dd3_static_complete(rt,2u);
        }
        case 0xA03Du: {
            uint8_t v=0x61u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA03Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA03Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA041u,0xA021u)) c++; rt->state.cpu.pc=0xA021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA041u; return dd3_static_complete(rt,2u);
        }
        case 0xA041u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA043u; return dd3_static_complete(rt,2u);
        }
        case 0xA043u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA045u,0xA021u)) c++; rt->state.cpu.pc=0xA021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA045u; return dd3_static_complete(rt,2u);
        }
        case 0xA045u: {
            uint8_t v=0x1Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA047u; return dd3_static_complete(rt,2u);
        }
        case 0xA047u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA049u,0xA021u)) c++; rt->state.cpu.pc=0xA021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA049u; return dd3_static_complete(rt,2u);
        }
        case 0xA049u: {
            uint8_t v=0x71u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA04Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA04Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA04Du,0xA021u)) c++; rt->state.cpu.pc=0xA021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA04Du; return dd3_static_complete(rt,2u);
        }
        case 0xA04Du: {
            uint8_t v=0x77u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA04Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA04Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA051u,0xA021u)) c++; rt->state.cpu.pc=0xA021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA051u; return dd3_static_complete(rt,2u);
        }
        case 0xA051u: {
            uint8_t v=0x78u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA053u; return dd3_static_complete(rt,2u);
        }
        case 0xA053u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA055u,0xA021u)) c++; rt->state.cpu.pc=0xA021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA055u; return dd3_static_complete(rt,2u);
        }
        case 0xA055u: {
            uint8_t v=0x24u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA057u; return dd3_static_complete(rt,2u);
        }
        case 0xA057u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA059u,0xA021u)) c++; rt->state.cpu.pc=0xA021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA059u; return dd3_static_complete(rt,2u);
        }
        case 0xA059u: {
            dd3_static_push8(rt,(uint8_t)(0xA05Bu>>8)); dd3_static_push8(rt,(uint8_t)0xA05Bu);
            rt->state.cpu.pc=0xA540u; return dd3_static_complete(rt,6u);
        }
        case 0xA05Cu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA05Eu,0xA021u)) c++; rt->state.cpu.pc=0xA021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA05Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA05Eu: {
            dd3_static_push8(rt,(uint8_t)(0xA060u>>8)); dd3_static_push8(rt,(uint8_t)0xA060u);
            rt->state.cpu.pc=0xB563u; return dd3_static_complete(rt,6u);
        }
        case 0xA061u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA062u; return dd3_static_complete(rt,2u);
        }
        case 0xA062u: {
            dd3_static_push8(rt,(uint8_t)(0xA064u>>8)); dd3_static_push8(rt,(uint8_t)0xA064u);
            rt->state.cpu.pc=0x8018u; return dd3_static_complete(rt,6u);
        }
        case 0xA065u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA067u,0xA0B6u)) c++; rt->state.cpu.pc=0xA0B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA067u; return dd3_static_complete(rt,2u);
        }
        case 0xA067u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA069u; return dd3_static_complete(rt,4u);
        }
        case 0xA069u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA06Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA06Bu: {
            uint8_t v=0x1Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA06Du; return dd3_static_complete(rt,2u);
        }
        case 0xA06Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA06Fu,0xA0B6u)) c++; rt->state.cpu.pc=0xA0B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA06Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA06Fu: {
            uint8_t v=0x22u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA071u; return dd3_static_complete(rt,2u);
        }
        case 0xA071u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA073u,0xA0B6u)) c++; rt->state.cpu.pc=0xA0B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA073u; return dd3_static_complete(rt,2u);
        }
        case 0xA073u: {
            uint8_t v=0x1Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA075u; return dd3_static_complete(rt,2u);
        }
        case 0xA075u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA077u,0xA0B6u)) c++; rt->state.cpu.pc=0xA0B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA077u; return dd3_static_complete(rt,2u);
        }
        case 0xA077u: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA079u; return dd3_static_complete(rt,2u);
        }
        case 0xA079u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA07Bu,0xA0B6u)) c++; rt->state.cpu.pc=0xA0B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA07Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA07Bu: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA07Du; return dd3_static_complete(rt,4u);
        }
        case 0xA07Du: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA07Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA07Fu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA081u; return dd3_static_complete(rt,2u);
        }
        case 0xA081u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA083u,0xA08Au)) c++; rt->state.cpu.pc=0xA08Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA083u; return dd3_static_complete(rt,2u);
        }
        case 0xA083u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA085u; return dd3_static_complete(rt,2u);
        }
        case 0xA085u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA087u,0xA0A6u)) c++; rt->state.cpu.pc=0xA0A6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA087u; return dd3_static_complete(rt,2u);
        }
        case 0xA087u: {
            dd3_static_push8(rt,(uint8_t)(0xA089u>>8)); dd3_static_push8(rt,(uint8_t)0xA089u);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,6u);
        }
        case 0xA08Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA08Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA08Cu: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA08Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA08Eu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA091u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA091u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA093u; return dd3_static_complete(rt,2u);
        }
        case 0xA093u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA095u,0xA0A3u)) c++; rt->state.cpu.pc=0xA0A3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA095u; return dd3_static_complete(rt,2u);
        }
        case 0xA095u: {
            uint16_t ea=(uint16_t)((0x4Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA097u; return dd3_static_complete(rt,4u);
        }
        case 0xA097u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA099u,0xA0A3u)) c++; rt->state.cpu.pc=0xA0A3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA099u; return dd3_static_complete(rt,2u);
        }
        case 0xA099u: {
            dd3_static_push8(rt,(uint8_t)(0xA09Bu>>8)); dd3_static_push8(rt,(uint8_t)0xA09Bu);
            rt->state.cpu.pc=0xA261u; return dd3_static_complete(rt,6u);
        }
        case 0xA09Cu: {
            dd3_static_push8(rt,(uint8_t)(0xA09Eu>>8)); dd3_static_push8(rt,(uint8_t)0xA09Eu);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,6u);
        }
        case 0xA09Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA0A1u; return dd3_static_complete(rt,2u);
        }
        case 0xA0A1u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA0A3u; return dd3_static_complete(rt,4u);
        }
        case 0xA0A3u: {
            rt->state.cpu.pc=0xA0B6u; return dd3_static_complete(rt,3u);
        }
        case 0xA0A6u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA0A9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA0A9u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA0ABu; return dd3_static_complete(rt,2u);
        }
        case 0xA0ABu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA0ADu,0xA0B3u)) c++; rt->state.cpu.pc=0xA0B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0ADu; return dd3_static_complete(rt,2u);
        }
        case 0xA0ADu: {
            uint16_t ea=(uint16_t)((0x4Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA0AFu; return dd3_static_complete(rt,4u);
        }
        case 0xA0AFu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA0B1u,0xA099u)) c++; rt->state.cpu.pc=0xA099u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0B1u; return dd3_static_complete(rt,2u);
        }
        case 0xA0B1u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA0B3u,0xA0B6u)) c++; rt->state.cpu.pc=0xA0B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0B3u; return dd3_static_complete(rt,2u);
        }
        case 0xA0B3u: {
            rt->state.cpu.pc=0xA021u; return dd3_static_complete(rt,3u);
        }
        case 0xA0B6u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA0B8u; return dd3_static_complete(rt,4u);
        }
        case 0xA0B8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA0BAu,0xA0B3u)) c++; rt->state.cpu.pc=0xA0B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0BAu; return dd3_static_complete(rt,2u);
        }
        case 0xA0BAu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA0BCu; return dd3_static_complete(rt,2u);
        }
        case 0xA0BCu: {
            uint8_t v=0x2Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA0BEu; return dd3_static_complete(rt,2u);
        }
        case 0xA0BEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA0C0u,0xA0B3u)) c++; rt->state.cpu.pc=0xA0B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0C0u; return dd3_static_complete(rt,2u);
        }
        case 0xA0C0u: {
            uint8_t v=0x4Bu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA0C2u; return dd3_static_complete(rt,2u);
        }
        case 0xA0C2u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA0C4u,0xA0F5u)) c++; rt->state.cpu.pc=0xA0F5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0C4u; return dd3_static_complete(rt,2u);
        }
        case 0xA0C4u: {
            uint8_t v=0x12u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA0C6u; return dd3_static_complete(rt,2u);
        }
        case 0xA0C6u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA0C8u,0xA0F5u)) c++; rt->state.cpu.pc=0xA0F5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0C8u; return dd3_static_complete(rt,2u);
        }
        case 0xA0C8u: {
            uint8_t v=0x5Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA0CAu; return dd3_static_complete(rt,2u);
        }
        case 0xA0CAu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA0CCu,0xA0F5u)) c++; rt->state.cpu.pc=0xA0F5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0CCu; return dd3_static_complete(rt,2u);
        }
        case 0xA0CCu: {
            uint8_t v=0x09u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA0CEu; return dd3_static_complete(rt,2u);
        }
        case 0xA0CEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA0D0u,0xA0F5u)) c++; rt->state.cpu.pc=0xA0F5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0D0u; return dd3_static_complete(rt,2u);
        }
        case 0xA0D0u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA0D2u; return dd3_static_complete(rt,2u);
        }
        case 0xA0D2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA0D4u,0xA0D7u)) c++; rt->state.cpu.pc=0xA0D7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0D4u; return dd3_static_complete(rt,2u);
        }
        case 0xA0D4u: {
            rt->state.cpu.pc=0xA15Fu; return dd3_static_complete(rt,3u);
        }
        case 0xA0D7u: {
            uint8_t v=0x29u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA0D9u; return dd3_static_complete(rt,2u);
        }
        case 0xA0D9u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA0DBu,0xA0EFu)) c++; rt->state.cpu.pc=0xA0EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0DBu; return dd3_static_complete(rt,2u);
        }
        case 0xA0DBu: {
            uint8_t v=0x2Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA0DDu; return dd3_static_complete(rt,2u);
        }
        case 0xA0DDu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA0DFu,0xA0EFu)) c++; rt->state.cpu.pc=0xA0EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0DFu; return dd3_static_complete(rt,2u);
        }
        case 0xA0DFu: {
            uint16_t ea=(uint16_t)((0xC3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA0E1u; return dd3_static_complete(rt,4u);
        }
        case 0xA0E1u: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA0E3u; return dd3_static_complete(rt,2u);
        }
        case 0xA0E3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA0E5u,0xA0ECu)) c++; rt->state.cpu.pc=0xA0ECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0E5u; return dd3_static_complete(rt,2u);
        }
        case 0xA0E5u: {
            uint16_t ea=(uint16_t)(0x06BEu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA0E8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06BEu,ea)?1u:0u));
        }
        case 0xA0E8u: {
            uint8_t v=0x80u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA0EAu; return dd3_static_complete(rt,2u);
        }
        case 0xA0EAu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA0ECu,0xA0EFu)) c++; rt->state.cpu.pc=0xA0EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0ECu; return dd3_static_complete(rt,2u);
        }
        case 0xA0ECu: {
            dd3_static_push8(rt,(uint8_t)(0xA0EEu>>8)); dd3_static_push8(rt,(uint8_t)0xA0EEu);
            rt->state.cpu.pc=0xA21Eu; return dd3_static_complete(rt,6u);
        }
        case 0xA0EFu: {
            uint16_t ea=(uint16_t)((0x4Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA0F1u; return dd3_static_complete(rt,4u);
        }
        case 0xA0F1u: {
            uint8_t v=0x43u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA0F3u; return dd3_static_complete(rt,2u);
        }
        case 0xA0F3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA0F5u,0xA107u)) c++; rt->state.cpu.pc=0xA107u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0F5u; return dd3_static_complete(rt,2u);
        }
        case 0xA0F5u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA0F7u; return dd3_static_complete(rt,2u);
        }
        case 0xA0F7u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA0F9u; return dd3_static_complete(rt,4u);
        }
        case 0xA0F9u: {
            dd3_static_write8(rt,(uint16_t)(0x04ACu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA0FCu; return dd3_static_complete(rt,5u);
        }
        case 0xA0FCu: {
            dd3_static_write8(rt,(uint16_t)(0x04B0u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA0FFu; return dd3_static_complete(rt,5u);
        }
        case 0xA0FFu: {
            dd3_static_write8(rt,0x03C3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA102u; return dd3_static_complete(rt,4u);
        }
        case 0xA102u: {
            dd3_static_write8(rt,(uint16_t)(0x04C6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA105u; return dd3_static_complete(rt,5u);
        }
        case 0xA105u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA107u,0xA16Au)) c++; rt->state.cpu.pc=0xA16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA107u; return dd3_static_complete(rt,2u);
        }
        case 0xA107u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA108u; return dd3_static_complete(rt,2u);
        }
        case 0xA108u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA10Au; return dd3_static_complete(rt,2u);
        }
        case 0xA10Au: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA10Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA10Bu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA10Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA10Eu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA110u; return dd3_static_complete(rt,2u);
        }
        case 0xA110u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA112u,0xA119u)) c++; rt->state.cpu.pc=0xA119u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA112u; return dd3_static_complete(rt,2u);
        }
        case 0xA112u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA115u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA115u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA117u; return dd3_static_complete(rt,2u);
        }
        case 0xA117u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA119u,0xA167u)) c++; rt->state.cpu.pc=0xA167u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA119u; return dd3_static_complete(rt,2u);
        }
        case 0xA119u: {
            uint16_t ea=(uint16_t)((0x56u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA11Bu; return dd3_static_complete(rt,4u);
        }
        case 0xA11Bu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA11Du; return dd3_static_complete(rt,2u);
        }
        case 0xA11Du: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA11Fu,0xA16Au)) c++; rt->state.cpu.pc=0xA16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA11Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA11Fu: {
            uint16_t ea=(uint16_t)((0x4Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA121u; return dd3_static_complete(rt,4u);
        }
        case 0xA121u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA123u; return dd3_static_complete(rt,2u);
        }
        case 0xA123u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA125u,0xA16Au)) c++; rt->state.cpu.pc=0xA16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA125u; return dd3_static_complete(rt,2u);
        }
        case 0xA125u: {
            uint16_t ea=0x049Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA128u; return dd3_static_complete(rt,4u);
        }
        case 0xA128u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA12Au,0xA130u)) c++; rt->state.cpu.pc=0xA130u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA12Au; return dd3_static_complete(rt,2u);
        }
        case 0xA12Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA12Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA12Cu: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA12Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA12Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA130u,0xA16Au)) c++; rt->state.cpu.pc=0xA16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA130u; return dd3_static_complete(rt,2u);
        }
        case 0xA130u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA133u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA133u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA135u; return dd3_static_complete(rt,2u);
        }
        case 0xA135u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA137u,0xA142u)) c++; rt->state.cpu.pc=0xA142u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA137u; return dd3_static_complete(rt,2u);
        }
        case 0xA137u: {
            dd3_static_push8(rt,(uint8_t)(0xA139u>>8)); dd3_static_push8(rt,(uint8_t)0xA139u);
            rt->state.cpu.pc=0xAB90u; return dd3_static_complete(rt,6u);
        }
        case 0xA13Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA13Cu,0xA142u)) c++; rt->state.cpu.pc=0xA142u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA13Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA13Cu: {
            uint8_t v=0x4Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA13Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA13Eu: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA140u; return dd3_static_complete(rt,4u);
        }
        case 0xA140u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA142u,0xA16Au)) c++; rt->state.cpu.pc=0xA16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA142u; return dd3_static_complete(rt,2u);
        }
        case 0xA142u: {
            dd3_static_push8(rt,(uint8_t)(0xA144u>>8)); dd3_static_push8(rt,(uint8_t)0xA144u);
            rt->state.cpu.pc=0xA658u; return dd3_static_complete(rt,6u);
        }
        case 0xA145u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA147u; return dd3_static_complete(rt,4u);
        }
        case 0xA147u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA149u; return dd3_static_complete(rt,2u);
        }
        case 0xA149u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA14Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA14Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA14Du,0xA15Fu)) c++; rt->state.cpu.pc=0xA15Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA14Du; return dd3_static_complete(rt,2u);
        }
        case 0xA14Du: {
            dd3_static_push8(rt,(uint8_t)(0xA14Fu>>8)); dd3_static_push8(rt,(uint8_t)0xA14Fu);
            rt->state.cpu.pc=0xA196u; return dd3_static_complete(rt,6u);
        }
        case 0xA150u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA152u,0xA16Au)) c++; rt->state.cpu.pc=0xA16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA152u; return dd3_static_complete(rt,2u);
        }
        case 0xA152u: {
            dd3_static_push8(rt,(uint8_t)(0xA154u>>8)); dd3_static_push8(rt,(uint8_t)0xA154u);
            rt->state.cpu.pc=0xAA41u; return dd3_static_complete(rt,6u);
        }
        case 0xA155u: {
            dd3_static_push8(rt,(uint8_t)(0xA157u>>8)); dd3_static_push8(rt,(uint8_t)0xA157u);
            rt->state.cpu.pc=0xA196u; return dd3_static_complete(rt,6u);
        }
        case 0xA158u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA15Au,0xA16Au)) c++; rt->state.cpu.pc=0xA16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA15Au; return dd3_static_complete(rt,2u);
        }
        case 0xA15Au: {
            dd3_static_push8(rt,(uint8_t)(0xA15Cu>>8)); dd3_static_push8(rt,(uint8_t)0xA15Cu);
            rt->state.cpu.pc=0xA4D9u; return dd3_static_complete(rt,6u);
        }
        case 0xA15Du: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA15Fu,0xA16Au)) c++; rt->state.cpu.pc=0xA16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA15Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA15Fu: {
            dd3_static_push8(rt,(uint8_t)(0xA161u>>8)); dd3_static_push8(rt,(uint8_t)0xA161u);
            rt->state.cpu.pc=0xAC69u; return dd3_static_complete(rt,6u);
        }
        case 0xA162u: {
            dd3_static_push8(rt,(uint8_t)(0xA164u>>8)); dd3_static_push8(rt,(uint8_t)0xA164u);
            rt->state.cpu.pc=0xAD5Eu; return dd3_static_complete(rt,6u);
        }
        case 0xA165u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA167u,0xA16Au)) c++; rt->state.cpu.pc=0xA16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA167u; return dd3_static_complete(rt,2u);
        }
        case 0xA167u: {
            dd3_static_push8(rt,(uint8_t)(0xA169u>>8)); dd3_static_push8(rt,(uint8_t)0xA169u);
            rt->state.cpu.pc=0xA1A5u; return dd3_static_complete(rt,6u);
        }
        case 0xA16Au: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA16Cu; return dd3_static_complete(rt,4u);
        }
        case 0xA16Cu: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA16Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA16Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA170u,0xA184u)) c++; rt->state.cpu.pc=0xA184u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA170u; return dd3_static_complete(rt,2u);
        }
        case 0xA170u: {
            uint16_t ea=0x47u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA172u; return dd3_static_complete(rt,3u);
        }
        case 0xA172u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA174u; return dd3_static_complete(rt,2u);
        }
        case 0xA174u: {
            uint8_t v=0x61u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA176u; return dd3_static_complete(rt,2u);
        }
        case 0xA176u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA178u,0xA184u)) c++; rt->state.cpu.pc=0xA184u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA178u; return dd3_static_complete(rt,2u);
        }
        case 0xA178u: {
            uint16_t ea=0x46u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA17Au; return dd3_static_complete(rt,3u);
        }
        case 0xA17Au: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA17Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA17Cu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA17Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA17Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA180u,0xA184u)) c++; rt->state.cpu.pc=0xA184u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA180u; return dd3_static_complete(rt,2u);
        }
        case 0xA180u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA182u; return dd3_static_complete(rt,2u);
        }
        case 0xA182u: {
            dd3_static_write8(rt,0x46u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA184u; return dd3_static_complete(rt,3u);
        }
        case 0xA184u: {
            dd3_static_push8(rt,(uint8_t)(0xA186u>>8)); dd3_static_push8(rt,(uint8_t)0xA186u);
            rt->state.cpu.pc=0xB079u; return dd3_static_complete(rt,6u);
        }
        case 0xA187u: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA189u; return dd3_static_complete(rt,5u);
        }
        case 0xA189u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA18Au; return dd3_static_complete(rt,2u);
        }
        case 0xA18Au: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xA18Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA18Cu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA18Eu,0xA191u)) c++; rt->state.cpu.pc=0xA191u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA18Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA18Eu: {
            rt->state.cpu.pc=0xA01Du; return dd3_static_complete(rt,3u);
        }
        case 0xA191u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA192u; return dd3_static_complete(rt,4u);
        }
        case 0xA192u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA193u; return dd3_static_complete(rt,2u);
        }
        case 0xA193u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA194u; return dd3_static_complete(rt,4u);
        }
        case 0xA194u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA195u; return dd3_static_complete(rt,2u);
        }
        case 0xA195u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA196u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA198u; return dd3_static_complete(rt,4u);
        }
        case 0xA198u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA19Au,0xA1A3u)) c++; rt->state.cpu.pc=0xA1A3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA19Au; return dd3_static_complete(rt,2u);
        }
        case 0xA19Au: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA19Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA19Du: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA19Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA19Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA1A1u,0xA1A3u)) c++; rt->state.cpu.pc=0xA1A3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA1A1u; return dd3_static_complete(rt,2u);
        }
        case 0xA1A1u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA1A2u; return dd3_static_complete(rt,2u);
        }
        case 0xA1A2u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA1A3u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA1A4u; return dd3_static_complete(rt,2u);
        }
        case 0xA1A4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA1A5u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA1A7u; return dd3_static_complete(rt,2u);
        }
        case 0xA1A7u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA1A9u; return dd3_static_complete(rt,4u);
        }
        case 0xA1A9u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA1ABu; return dd3_static_complete(rt,2u);
        }
        case 0xA1ABu: {
            uint8_t v=0x28u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA1ADu; return dd3_static_complete(rt,2u);
        }
        case 0xA1ADu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA1AFu,0xA1F3u)) c++; rt->state.cpu.pc=0xA1F3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA1AFu; return dd3_static_complete(rt,2u);
        }
        case 0xA1AFu: {
            uint8_t v=0x27u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA1B1u; return dd3_static_complete(rt,2u);
        }
        case 0xA1B1u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA1B3u,0xA1F3u)) c++; rt->state.cpu.pc=0xA1F3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA1B3u; return dd3_static_complete(rt,2u);
        }
        case 0xA1B3u: {
            uint8_t v=0x2Bu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA1B5u; return dd3_static_complete(rt,2u);
        }
        case 0xA1B5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA1B7u,0xA1F2u)) c++; rt->state.cpu.pc=0xA1F2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA1B7u; return dd3_static_complete(rt,2u);
        }
        case 0xA1B7u: {
            uint8_t v=0x29u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA1B9u; return dd3_static_complete(rt,2u);
        }
        case 0xA1B9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA1BBu,0xA1CAu)) c++; rt->state.cpu.pc=0xA1CAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA1BBu; return dd3_static_complete(rt,2u);
        }
        case 0xA1BBu: {
            uint8_t v=0x2Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA1BDu; return dd3_static_complete(rt,2u);
        }
        case 0xA1BDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA1BFu,0xA1C9u)) c++; rt->state.cpu.pc=0xA1C9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA1BFu; return dd3_static_complete(rt,2u);
        }
        case 0xA1BFu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA1C1u; return dd3_static_complete(rt,2u);
        }
        case 0xA1C1u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA1C3u,0xA1F2u)) c++; rt->state.cpu.pc=0xA1F2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA1C3u; return dd3_static_complete(rt,2u);
        }
        case 0xA1C3u: {
            dd3_static_push8(rt,(uint8_t)(0xA1C5u>>8)); dd3_static_push8(rt,(uint8_t)0xA1C5u);
            rt->state.cpu.pc=0xA261u; return dd3_static_complete(rt,6u);
        }
        case 0xA1C6u: {
            rt->state.cpu.pc=0xA1F2u; return dd3_static_complete(rt,3u);
        }
        case 0xA1C9u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA1CAu; return dd3_static_complete(rt,2u);
        }
        case 0xA1CAu: {
            uint16_t ea=(uint16_t)(0x06C0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA1CDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06C0u,ea)?1u:0u));
        }
        case 0xA1CDu: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA1CFu; return dd3_static_complete(rt,2u);
        }
        case 0xA1CFu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA1D1u,0xA1DDu)) c++; rt->state.cpu.pc=0xA1DDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA1D1u; return dd3_static_complete(rt,2u);
        }
        case 0xA1D1u: {
            uint16_t ea=(uint16_t)(0x06BEu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA1D4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06BEu,ea)?1u:0u));
        }
        case 0xA1D4u: {
            uint16_t ea=(uint16_t)(0xA21Au+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA1D7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA21Au,ea)?1u:0u));
        }
        case 0xA1D7u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA1D9u,0xA1F2u)) c++; rt->state.cpu.pc=0xA1F2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA1D9u; return dd3_static_complete(rt,2u);
        }
        case 0xA1D9u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA1DBu; return dd3_static_complete(rt,2u);
        }
        case 0xA1DBu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA1DDu,0xA1E9u)) c++; rt->state.cpu.pc=0xA1E9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA1DDu; return dd3_static_complete(rt,2u);
        }
        case 0xA1DDu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA1DEu; return dd3_static_complete(rt,2u);
        }
        case 0xA1DEu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA1E0u; return dd3_static_complete(rt,2u);
        }
        case 0xA1E0u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA1E1u; return dd3_static_complete(rt,2u);
        }
        case 0xA1E1u: {
            dd3_static_push8(rt,(uint8_t)(0xA1E3u>>8)); dd3_static_push8(rt,(uint8_t)0xA1E3u);
            rt->state.cpu.pc=0xA21Eu; return dd3_static_complete(rt,6u);
        }
        case 0xA1E4u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA1E6u; return dd3_static_complete(rt,2u);
        }
        case 0xA1E6u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA1E8u; return dd3_static_complete(rt,4u);
        }
        case 0xA1E8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA1E9u: {
            uint16_t ea=(uint16_t)(0xA21Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA1ECu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA21Cu,ea)?1u:0u));
        }
        case 0xA1ECu: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA1EEu; return dd3_static_complete(rt,4u);
        }
        case 0xA1EEu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA1F0u; return dd3_static_complete(rt,2u);
        }
        case 0xA1F0u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA1F2u; return dd3_static_complete(rt,4u);
        }
        case 0xA1F2u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA1F3u: {
            uint16_t ea=(uint16_t)(0x06BEu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA1F6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06BEu,ea)?1u:0u));
        }
        case 0xA1F6u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA1F8u; return dd3_static_complete(rt,2u);
        }
        case 0xA1F8u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA1FAu,0xA219u)) c++; rt->state.cpu.pc=0xA219u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA1FAu; return dd3_static_complete(rt,2u);
        }
        case 0xA1FAu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA1FBu; return dd3_static_complete(rt,2u);
        }
        case 0xA1FBu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA1FDu; return dd3_static_complete(rt,2u);
        }
        case 0xA1FDu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA1FEu; return dd3_static_complete(rt,2u);
        }
        case 0xA1FEu: {
            uint16_t ea=(uint16_t)(0x0046u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA201u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0046u,ea)?1u:0u));
        }
        case 0xA201u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA203u; return dd3_static_complete(rt,2u);
        }
        case 0xA203u: {
            uint8_t v=0x2Bu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA205u; return dd3_static_complete(rt,2u);
        }
        case 0xA205u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA207u,0xA20Bu)) c++; rt->state.cpu.pc=0xA20Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA207u; return dd3_static_complete(rt,2u);
        }
        case 0xA207u: {
            dd3_static_push8(rt,(uint8_t)(0xA209u>>8)); dd3_static_push8(rt,(uint8_t)0xA209u);
            rt->state.cpu.pc=0xA259u; return dd3_static_complete(rt,6u);
        }
        case 0xA20Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA20Bu: {
            dd3_static_push8(rt,(uint8_t)(0xA20Du>>8)); dd3_static_push8(rt,(uint8_t)0xA20Du);
            rt->state.cpu.pc=0xA8F2u; return dd3_static_complete(rt,6u);
        }
        case 0xA20Eu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA210u,0xA259u)) c++; rt->state.cpu.pc=0xA259u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA210u; return dd3_static_complete(rt,2u);
        }
        case 0xA210u: {
            uint8_t v=0x0Du;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA212u; return dd3_static_complete(rt,2u);
        }
        case 0xA212u: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA214u; return dd3_static_complete(rt,4u);
        }
        case 0xA214u: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA216u; return dd3_static_complete(rt,2u);
        }
        case 0xA216u: {
            dd3_static_write8(rt,(uint16_t)(0x0046u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA219u; return dd3_static_complete(rt,5u);
        }
        case 0xA219u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA21Eu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA221u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA221u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA223u; return dd3_static_complete(rt,2u);
        }
        case 0xA223u: {
            dd3_static_write8(rt,(uint16_t)(0x04ACu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA226u; return dd3_static_complete(rt,5u);
        }
        case 0xA226u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA228u,0xA23Bu)) c++; rt->state.cpu.pc=0xA23Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA228u; return dd3_static_complete(rt,2u);
        }
        case 0xA228u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA22Au; return dd3_static_complete(rt,4u);
        }
        case 0xA22Au: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA22Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA22Cu: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA22Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA22Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA230u,0xA23Bu)) c++; rt->state.cpu.pc=0xA23Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA230u; return dd3_static_complete(rt,2u);
        }
        case 0xA230u: {
            uint8_t v=0x26u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA232u; return dd3_static_complete(rt,2u);
        }
        case 0xA232u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA234u,0xA23Bu)) c++; rt->state.cpu.pc=0xA23Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA234u; return dd3_static_complete(rt,2u);
        }
        case 0xA234u: {
            dd3_static_push8(rt,(uint8_t)(0xA236u>>8)); dd3_static_push8(rt,(uint8_t)0xA236u);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,6u);
        }
        case 0xA237u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA239u; return dd3_static_complete(rt,2u);
        }
        case 0xA239u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA23Bu; return dd3_static_complete(rt,4u);
        }
        case 0xA23Bu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA23Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA23Eu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA240u; return dd3_static_complete(rt,2u);
        }
        case 0xA240u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA242u,0xA259u)) c++; rt->state.cpu.pc=0xA259u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA242u; return dd3_static_complete(rt,2u);
        }
        case 0xA242u: {
            uint16_t ea=(uint16_t)(0x0046u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA245u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0046u,ea)?1u:0u));
        }
        case 0xA245u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA247u; return dd3_static_complete(rt,2u);
        }
        case 0xA247u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA249u; return dd3_static_complete(rt,2u);
        }
        case 0xA249u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA24Bu,0xA259u)) c++; rt->state.cpu.pc=0xA259u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA24Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA24Bu: {
            uint8_t v=0x26u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA24Du; return dd3_static_complete(rt,2u);
        }
        case 0xA24Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA24Fu,0xA259u)) c++; rt->state.cpu.pc=0xA259u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA24Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA24Fu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA251u; return dd3_static_complete(rt,2u);
        }
        case 0xA251u: {
            dd3_static_write8(rt,(uint16_t)(0x0046u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA254u; return dd3_static_complete(rt,5u);
        }
        case 0xA254u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA256u; return dd3_static_complete(rt,2u);
        }
        case 0xA256u: {
            dd3_static_write8(rt,(uint16_t)(0x0072u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA259u; return dd3_static_complete(rt,5u);
        }
        case 0xA259u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA25Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA25Cu: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA25Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA25Eu: {
            dd3_static_write8(rt,(uint16_t)(0x04ACu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA261u; return dd3_static_complete(rt,5u);
        }
        case 0xA261u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA264u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA264u: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA266u; return dd3_static_complete(rt,2u);
        }
        case 0xA266u: {
            dd3_static_write8(rt,(uint16_t)(0x04ACu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA269u; return dd3_static_complete(rt,5u);
        }
        case 0xA269u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA26Au: {
            uint16_t ea=0x049Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA26Du; return dd3_static_complete(rt,4u);
        }
        case 0xA26Du: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA26Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA26Fu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA271u; return dd3_static_complete(rt,2u);
        }
        case 0xA271u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA273u,0xA2BBu)) c++; rt->state.cpu.pc=0xA2BBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA273u; return dd3_static_complete(rt,2u);
        }
        case 0xA273u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA275u; return dd3_static_complete(rt,2u);
        }
        case 0xA275u: {
            uint8_t v=0x03u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA277u; return dd3_static_complete(rt,2u);
        }
        case 0xA277u: {
            dd3_static_push8(rt,(uint8_t)(0xA279u>>8)); dd3_static_push8(rt,(uint8_t)0xA279u);
            rt->state.cpu.pc=0xB3A2u; return dd3_static_complete(rt,6u);
        }
        case 0xA27Au: {
            uint16_t ea=0x04B8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA27Du; return dd3_static_complete(rt,4u);
        }
        case 0xA27Du: {
            uint8_t v=0x9Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA27Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA27Fu: {
            dd3_static_write8(rt,0x04B8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA282u; return dd3_static_complete(rt,4u);
        }
        case 0xA282u: {
            uint16_t ea=0x04B9u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA285u; return dd3_static_complete(rt,4u);
        }
        case 0xA285u: {
            uint8_t v=0x9Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA287u; return dd3_static_complete(rt,2u);
        }
        case 0xA287u: {
            dd3_static_write8(rt,0x04B9u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA28Au; return dd3_static_complete(rt,4u);
        }
        case 0xA28Au: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA28Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA28Cu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA28Eu; return dd3_static_complete(rt,3u);
        }
        case 0xA28Eu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA28Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA28Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA291u,0xA293u)) c++; rt->state.cpu.pc=0xA293u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA291u; return dd3_static_complete(rt,2u);
        }
        case 0xA291u: {
            uint8_t v=0x20u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA293u; return dd3_static_complete(rt,2u);
        }
        case 0xA293u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA295u; return dd3_static_complete(rt,2u);
        }
        case 0xA295u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.x);
            rt->state.cpu.pc=0xA297u; return dd3_static_complete(rt,3u);
        }
        case 0xA297u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA299u; return dd3_static_complete(rt,3u);
        }
        case 0xA299u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA29Au; return dd3_static_complete(rt,3u);
        }
        case 0xA29Au: {
            uint16_t ea=0x04B8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA29Du; return dd3_static_complete(rt,4u);
        }
        case 0xA29Du: {
            dd3_static_write8(rt,0x04B8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2A0u; return dd3_static_complete(rt,4u);
        }
        case 0xA2A0u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2A1u; return dd3_static_complete(rt,4u);
        }
        case 0xA2A1u: {
            uint8_t v=0x60u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2A3u; return dd3_static_complete(rt,2u);
        }
        case 0xA2A3u: {
            uint16_t ea=0x04B9u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2A6u; return dd3_static_complete(rt,4u);
        }
        case 0xA2A6u: {
            dd3_static_write8(rt,0x04B9u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2A9u; return dd3_static_complete(rt,4u);
        }
        case 0xA2A9u: {
            uint16_t ea=0x0029u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2ACu; return dd3_static_complete(rt,4u);
        }
        case 0xA2ACu: {
            dd3_static_write8(rt,0x06BEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2AFu; return dd3_static_complete(rt,4u);
        }
        case 0xA2AFu: {
            dd3_static_write8(rt,0x06BFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2B2u; return dd3_static_complete(rt,4u);
        }
        case 0xA2B2u: {
            uint16_t ea=0x002Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2B5u; return dd3_static_complete(rt,4u);
        }
        case 0xA2B5u: {
            dd3_static_write8(rt,0x06C0u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2B8u; return dd3_static_complete(rt,4u);
        }
        case 0xA2B8u: {
            dd3_static_write8(rt,0x06C1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2BBu; return dd3_static_complete(rt,4u);
        }
        case 0xA2BBu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA2BCu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2BEu; return dd3_static_complete(rt,2u);
        }
        case 0xA2BEu: {
            dd3_static_write8(rt,0x049Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2C1u; return dd3_static_complete(rt,4u);
        }
        case 0xA2C1u: {
            dd3_static_write8(rt,0x049Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2C4u; return dd3_static_complete(rt,4u);
        }
        case 0xA2C4u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2C6u; return dd3_static_complete(rt,3u);
        }
        case 0xA2C6u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA2C8u,0xA2CDu)) c++; rt->state.cpu.pc=0xA2CDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA2C8u; return dd3_static_complete(rt,2u);
        }
        case 0xA2C8u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2CAu; return dd3_static_complete(rt,2u);
        }
        case 0xA2CAu: {
            dd3_static_write8(rt,0x049Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2CDu; return dd3_static_complete(rt,4u);
        }
        case 0xA2CDu: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2CFu; return dd3_static_complete(rt,3u);
        }
        case 0xA2CFu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA2D1u,0xA2D9u)) c++; rt->state.cpu.pc=0xA2D9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA2D1u; return dd3_static_complete(rt,2u);
        }
        case 0xA2D1u: {
            uint16_t ea=0x049Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2D4u; return dd3_static_complete(rt,4u);
        }
        case 0xA2D4u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2D6u; return dd3_static_complete(rt,2u);
        }
        case 0xA2D6u: {
            dd3_static_write8(rt,0x049Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2D9u; return dd3_static_complete(rt,4u);
        }
        case 0xA2D9u: {
            uint16_t ea=0x3Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2DBu; return dd3_static_complete(rt,3u);
        }
        case 0xA2DBu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA2DDu,0xA2E8u)) c++; rt->state.cpu.pc=0xA2E8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA2DDu; return dd3_static_complete(rt,2u);
        }
        case 0xA2DDu: {
            uint16_t ea=0x76u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2DFu; return dd3_static_complete(rt,3u);
        }
        case 0xA2DFu: {
            uint8_t v=0x15u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA2E1u; return dd3_static_complete(rt,2u);
        }
        case 0xA2E1u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA2E3u,0xA2E8u)) c++; rt->state.cpu.pc=0xA2E8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA2E3u; return dd3_static_complete(rt,2u);
        }
        case 0xA2E3u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2E5u; return dd3_static_complete(rt,2u);
        }
        case 0xA2E5u: {
            dd3_static_write8(rt,0x049Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2E8u; return dd3_static_complete(rt,4u);
        }
        case 0xA2E8u: {
            uint16_t ea=0x3Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2EAu; return dd3_static_complete(rt,3u);
        }
        case 0xA2EAu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA2ECu,0xA2FAu)) c++; rt->state.cpu.pc=0xA2FAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA2ECu; return dd3_static_complete(rt,2u);
        }
        case 0xA2ECu: {
            uint16_t ea=0x77u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2EEu; return dd3_static_complete(rt,3u);
        }
        case 0xA2EEu: {
            uint8_t v=0x15u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA2F0u; return dd3_static_complete(rt,2u);
        }
        case 0xA2F0u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA2F2u,0xA2FAu)) c++; rt->state.cpu.pc=0xA2FAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA2F2u; return dd3_static_complete(rt,2u);
        }
        case 0xA2F2u: {
            uint16_t ea=0x049Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2F5u; return dd3_static_complete(rt,4u);
        }
        case 0xA2F5u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2F7u; return dd3_static_complete(rt,2u);
        }
        case 0xA2F7u: {
            dd3_static_write8(rt,0x049Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA2FAu; return dd3_static_complete(rt,4u);
        }
        case 0xA2FAu: {
            uint16_t ea=0x049Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2FDu; return dd3_static_complete(rt,4u);
        }
        case 0xA2FDu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA2FEu; return dd3_static_complete(rt,2u);
        }
        case 0xA2FEu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA300u; return dd3_static_complete(rt,2u);
        }
        case 0xA300u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA301u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA303u; return dd3_static_complete(rt,2u);
        }
        case 0xA303u: {
            uint16_t ea=0x049Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA306u; return dd3_static_complete(rt,4u);
        }
        case 0xA306u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA308u,0xA325u)) c++; rt->state.cpu.pc=0xA325u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA308u; return dd3_static_complete(rt,2u);
        }
        case 0xA308u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA30Au; return dd3_static_complete(rt,2u);
        }
        case 0xA30Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA30Cu,0xA30Fu)) c++; rt->state.cpu.pc=0xA30Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA30Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA30Cu: {
            rt->state.cpu.pc=0xA369u; return dd3_static_complete(rt,3u);
        }
        case 0xA30Fu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA311u; return dd3_static_complete(rt,2u);
        }
        case 0xA311u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA313u,0xA314u)) c++; rt->state.cpu.pc=0xA314u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA313u; return dd3_static_complete(rt,2u);
        }
        case 0xA313u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA314u; return dd3_static_complete(rt,2u);
        }
        case 0xA314u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA316u; return dd3_static_complete(rt,2u);
        }
        case 0xA316u: {
            uint16_t ea=0x049Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA319u; return dd3_static_complete(rt,4u);
        }
        case 0xA319u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA31Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA31Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA31Du,0xA326u)) c++; rt->state.cpu.pc=0xA326u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA31Du; return dd3_static_complete(rt,2u);
        }
        case 0xA31Du: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA31Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA31Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA321u,0xA322u)) c++; rt->state.cpu.pc=0xA322u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA321u; return dd3_static_complete(rt,2u);
        }
        case 0xA321u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA322u; return dd3_static_complete(rt,2u);
        }
        case 0xA322u: {
            dd3_static_push8(rt,(uint8_t)(0xA324u>>8)); dd3_static_push8(rt,(uint8_t)0xA324u);
            rt->state.cpu.pc=0xA3FAu; return dd3_static_complete(rt,6u);
        }
        case 0xA325u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA326u: {
            dd3_static_push8(rt,(uint8_t)(0xA328u>>8)); dd3_static_push8(rt,(uint8_t)0xA328u);
            rt->state.cpu.pc=0xA3FAu; return dd3_static_complete(rt,6u);
        }
        case 0xA329u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA32Au; return dd3_static_complete(rt,2u);
        }
        case 0xA32Au: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xA32Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA32Cu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA32Eu,0xA326u)) c++; rt->state.cpu.pc=0xA326u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA32Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA32Eu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA330u; return dd3_static_complete(rt,3u);
        }
        case 0xA330u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA331u; return dd3_static_complete(rt,2u);
        }
        case 0xA331u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA333u; return dd3_static_complete(rt,3u);
        }
        case 0xA333u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA335u; return dd3_static_complete(rt,3u);
        }
        case 0xA335u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA337u; return dd3_static_complete(rt,2u);
        }
        case 0xA337u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA339u; return dd3_static_complete(rt,2u);
        }
        case 0xA339u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA33Bu; return dd3_static_complete(rt,3u);
        }
        case 0xA33Bu: {
            uint16_t ea=0x04A4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA33Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA33Eu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA33Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA33Fu: {
            uint16_t ea=0x04A6u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA342u; return dd3_static_complete(rt,4u);
        }
        case 0xA342u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA344u; return dd3_static_complete(rt,3u);
        }
        case 0xA344u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA346u; return dd3_static_complete(rt,2u);
        }
        case 0xA346u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA348u; return dd3_static_complete(rt,2u);
        }
        case 0xA348u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA34Au; return dd3_static_complete(rt,3u);
        }
        case 0xA34Au: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA34Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA34Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA34Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA34Eu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA350u; return dd3_static_complete(rt,3u);
        }
        case 0xA350u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA351u; return dd3_static_complete(rt,2u);
        }
        case 0xA351u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA353u; return dd3_static_complete(rt,3u);
        }
        case 0xA353u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xA355u; return dd3_static_complete(rt,3u);
        }
        case 0xA355u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA357u; return dd3_static_complete(rt,3u);
        }
        case 0xA357u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA359u; return dd3_static_complete(rt,3u);
        }
        case 0xA359u: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA35Bu; return dd3_static_complete(rt,3u);
        }
        case 0xA35Bu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA35Du,0xA35Eu)) c++; rt->state.cpu.pc=0xA35Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA35Du; return dd3_static_complete(rt,2u);
        }
        case 0xA35Du: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA35Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA35Eu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA35Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA35Fu: {
            dd3_static_write8(rt,(uint16_t)(0x04AAu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA362u; return dd3_static_complete(rt,5u);
        }
        case 0xA362u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA364u; return dd3_static_complete(rt,2u);
        }
        case 0xA364u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA365u; return dd3_static_complete(rt,2u);
        }
        case 0xA365u: {
            dd3_static_write8(rt,(uint16_t)(0x04AAu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA368u; return dd3_static_complete(rt,5u);
        }
        case 0xA368u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA369u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA36Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA36Bu: {
            uint16_t ea=0x049Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA36Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA36Eu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA370u; return dd3_static_complete(rt,2u);
        }
        case 0xA370u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA372u,0xA377u)) c++; rt->state.cpu.pc=0xA377u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA372u; return dd3_static_complete(rt,2u);
        }
        case 0xA372u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA374u; return dd3_static_complete(rt,2u);
        }
        case 0xA374u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA376u,0xA377u)) c++; rt->state.cpu.pc=0xA377u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA376u; return dd3_static_complete(rt,2u);
        }
        case 0xA376u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA377u; return dd3_static_complete(rt,2u);
        }
        case 0xA377u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA379u; return dd3_static_complete(rt,2u);
        }
        case 0xA379u: {
            dd3_static_push8(rt,(uint8_t)(0xA37Bu>>8)); dd3_static_push8(rt,(uint8_t)0xA37Bu);
            rt->state.cpu.pc=0xB3A2u; return dd3_static_complete(rt,6u);
        }
        case 0xA37Cu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA37Eu; return dd3_static_complete(rt,3u);
        }
        case 0xA37Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0023u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA381u; return dd3_static_complete(rt,5u);
        }
        case 0xA381u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA383u; return dd3_static_complete(rt,3u);
        }
        case 0xA383u: {
            dd3_static_write8(rt,(uint16_t)(0x002Fu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA386u; return dd3_static_complete(rt,5u);
        }
        case 0xA386u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA388u; return dd3_static_complete(rt,3u);
        }
        case 0xA388u: {
            dd3_static_write8(rt,(uint16_t)(0x001Fu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA38Bu; return dd3_static_complete(rt,5u);
        }
        case 0xA38Bu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA38Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA38Cu: {
            uint16_t ea=(uint16_t)(0x002Fu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA38Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x002Fu,ea)?1u:0u));
        }
        case 0xA38Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0025u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA392u; return dd3_static_complete(rt,5u);
        }
        case 0xA392u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA394u; return dd3_static_complete(rt,2u);
        }
        case 0xA394u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA396u; return dd3_static_complete(rt,2u);
        }
        case 0xA396u: {
            dd3_static_write8(rt,(uint16_t)(0x0027u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA399u; return dd3_static_complete(rt,5u);
        }
        case 0xA399u: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA39Bu; return dd3_static_complete(rt,3u);
        }
        case 0xA39Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0021u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA39Eu; return dd3_static_complete(rt,5u);
        }
        case 0xA39Eu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA39Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA39Fu: {
            uint16_t ea=(uint16_t)(0x0025u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA3A2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0025u,ea)?1u:0u));
        }
        case 0xA3A2u: {
            dd3_static_write8(rt,(uint16_t)(0x0025u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA3A5u; return dd3_static_complete(rt,5u);
        }
        case 0xA3A5u: {
            uint16_t ea=(uint16_t)(0x0027u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA3A8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0027u,ea)?1u:0u));
        }
        case 0xA3A8u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA3AAu; return dd3_static_complete(rt,2u);
        }
        case 0xA3AAu: {
            dd3_static_write8(rt,(uint16_t)(0x0027u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA3ADu; return dd3_static_complete(rt,5u);
        }
        case 0xA3ADu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA3AEu; return dd3_static_complete(rt,2u);
        }
        case 0xA3AEu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xA3B0u; return dd3_static_complete(rt,2u);
        }
        case 0xA3B0u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA3B2u,0xA379u)) c++; rt->state.cpu.pc=0xA379u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA3B2u; return dd3_static_complete(rt,2u);
        }
        case 0xA3B2u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA3B4u; return dd3_static_complete(rt,2u);
        }
        case 0xA3B4u: {
            uint16_t ea=0x25u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA3B6u; return dd3_static_complete(rt,3u);
        }
        case 0xA3B6u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA3B7u; return dd3_static_complete(rt,2u);
        }
        case 0xA3B7u: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA3B9u; return dd3_static_complete(rt,3u);
        }
        case 0xA3B9u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xA3BBu; return dd3_static_complete(rt,3u);
        }
        case 0xA3BBu: {
            uint16_t ea=0x27u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA3BDu; return dd3_static_complete(rt,3u);
        }
        case 0xA3BDu: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA3BFu; return dd3_static_complete(rt,3u);
        }
        case 0xA3BFu: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA3C1u; return dd3_static_complete(rt,3u);
        }
        case 0xA3C1u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA3C3u,0xA3C4u)) c++; rt->state.cpu.pc=0xA3C4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA3C3u; return dd3_static_complete(rt,2u);
        }
        case 0xA3C3u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA3C4u; return dd3_static_complete(rt,2u);
        }
        case 0xA3C4u: {
            dd3_static_push8(rt,(uint8_t)(0xA3C6u>>8)); dd3_static_push8(rt,(uint8_t)0xA3C6u);
            rt->state.cpu.pc=0xA41Bu; return dd3_static_complete(rt,6u);
        }
        case 0xA3C7u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA3C8u; return dd3_static_complete(rt,2u);
        }
        case 0xA3C8u: {
            dd3_static_write8(rt,(uint16_t)(0x04A2u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA3CBu; return dd3_static_complete(rt,5u);
        }
        case 0xA3CBu: {
            uint16_t ea=(uint16_t)(0x002Fu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA3CEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x002Fu,ea)?1u:0u));
        }
        case 0xA3CEu: {
            dd3_static_write8(rt,(uint16_t)(0x04A4u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA3D1u; return dd3_static_complete(rt,5u);
        }
        case 0xA3D1u: {
            uint16_t ea=(uint16_t)(0x001Fu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA3D4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x001Fu,ea)?1u:0u));
        }
        case 0xA3D4u: {
            dd3_static_write8(rt,(uint16_t)(0x04A6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA3D7u; return dd3_static_complete(rt,5u);
        }
        case 0xA3D7u: {
            uint16_t ea=(uint16_t)(0x0021u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA3DAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0021u,ea)?1u:0u));
        }
        case 0xA3DAu: {
            dd3_static_write8(rt,(uint16_t)(0x04A8u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA3DDu; return dd3_static_complete(rt,5u);
        }
        case 0xA3DDu: {
            uint16_t ea=(uint16_t)(0x0023u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA3E0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0023u,ea)?1u:0u));
        }
        case 0xA3E0u: {
            dd3_static_write8(rt,(uint16_t)(0x04B8u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA3E3u; return dd3_static_complete(rt,5u);
        }
        case 0xA3E3u: {
            uint16_t ea=0x049Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA3E6u; return dd3_static_complete(rt,4u);
        }
        case 0xA3E6u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA3E8u; return dd3_static_complete(rt,2u);
        }
        case 0xA3E8u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA3EAu,0xA415u)) c++; rt->state.cpu.pc=0xA415u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA3EAu; return dd3_static_complete(rt,2u);
        }
        case 0xA3EAu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA3EBu; return dd3_static_complete(rt,2u);
        }
        case 0xA3EBu: {
            dd3_static_write8(rt,(uint16_t)(0x04AAu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA3EEu; return dd3_static_complete(rt,5u);
        }
        case 0xA3EEu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA3EFu; return dd3_static_complete(rt,2u);
        }
        case 0xA3EFu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA3F0u; return dd3_static_complete(rt,2u);
        }
        case 0xA3F0u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA3F2u; return dd3_static_complete(rt,2u);
        }
        case 0xA3F2u: {
            dd3_static_write8(rt,(uint16_t)(0x04A2u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA3F5u; return dd3_static_complete(rt,5u);
        }
        case 0xA3F5u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA3F6u; return dd3_static_complete(rt,2u);
        }
        case 0xA3F6u: {
            dd3_static_push8(rt,(uint8_t)(0xA3F8u>>8)); dd3_static_push8(rt,(uint8_t)0xA3F8u);
            rt->state.cpu.pc=0xA3FEu; return dd3_static_complete(rt,6u);
        }
        case 0xA3F9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA3FAu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA3FBu; return dd3_static_complete(rt,2u);
        }
        case 0xA3FBu: {
            dd3_static_write8(rt,(uint16_t)(0x04A2u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA3FEu; return dd3_static_complete(rt,5u);
        }
        case 0xA3FEu: {
            dd3_static_push8(rt,(uint8_t)(0xA400u>>8)); dd3_static_push8(rt,(uint8_t)0xA400u);
            rt->state.cpu.pc=0xB3A2u; return dd3_static_complete(rt,6u);
        }
        case 0xA401u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA403u; return dd3_static_complete(rt,3u);
        }
        case 0xA403u: {
            dd3_static_write8(rt,(uint16_t)(0x04A4u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA406u; return dd3_static_complete(rt,5u);
        }
        case 0xA406u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA408u; return dd3_static_complete(rt,3u);
        }
        case 0xA408u: {
            dd3_static_write8(rt,(uint16_t)(0x04A6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA40Bu; return dd3_static_complete(rt,5u);
        }
        case 0xA40Bu: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA40Du; return dd3_static_complete(rt,3u);
        }
        case 0xA40Du: {
            dd3_static_write8(rt,(uint16_t)(0x04A8u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA410u; return dd3_static_complete(rt,5u);
        }
        case 0xA410u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA412u; return dd3_static_complete(rt,3u);
        }
        case 0xA412u: {
            dd3_static_write8(rt,(uint16_t)(0x04B8u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA415u; return dd3_static_complete(rt,5u);
        }
        case 0xA415u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA417u; return dd3_static_complete(rt,2u);
        }
        case 0xA417u: {
            dd3_static_write8(rt,(uint16_t)(0x04AAu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA41Au; return dd3_static_complete(rt,5u);
        }
        case 0xA41Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA41Bu: {
            uint16_t ea=0x03C3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA41Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA41Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA420u,0xA43Eu)) c++; rt->state.cpu.pc=0xA43Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA420u; return dd3_static_complete(rt,2u);
        }
        case 0xA420u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA422u; return dd3_static_complete(rt,2u);
        }
        case 0xA422u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA424u,0xA448u)) c++; rt->state.cpu.pc=0xA448u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA424u; return dd3_static_complete(rt,2u);
        }
        case 0xA424u: {
            uint16_t ea=0x049Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA427u; return dd3_static_complete(rt,4u);
        }
        case 0xA427u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA429u; return dd3_static_complete(rt,2u);
        }
        case 0xA429u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA42Bu,0xA448u)) c++; rt->state.cpu.pc=0xA448u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA42Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA42Bu: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA42Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xA42Eu: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA431u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0xA431u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA433u; return dd3_static_complete(rt,2u);
        }
        case 0xA433u: {
            uint8_t v=0xC0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA435u; return dd3_static_complete(rt,2u);
        }
        case 0xA435u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA437u,0xA45Eu)) c++; rt->state.cpu.pc=0xA45Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA437u; return dd3_static_complete(rt,2u);
        }
        case 0xA437u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA438u; return dd3_static_complete(rt,2u);
        }
        case 0xA438u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA43Au; return dd3_static_complete(rt,2u);
        }
        case 0xA43Au: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA43Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA43Bu: {
            rt->state.cpu.pc=0xA45Eu; return dd3_static_complete(rt,3u);
        }
        case 0xA43Eu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA441u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA441u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA443u; return dd3_static_complete(rt,2u);
        }
        case 0xA443u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA445u,0xA45Eu)) c++; rt->state.cpu.pc=0xA45Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA445u; return dd3_static_complete(rt,2u);
        }
        case 0xA445u: {
            uint16_t ea=0x03C3u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA448u; return dd3_static_complete(rt,6u);
        }
        case 0xA448u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA44Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xA44Bu: {
            uint16_t ea=0x03C2u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA44Eu; return dd3_static_complete(rt,6u);
        }
        case 0xA44Eu: {
            uint16_t ea=0x03C2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA451u; return dd3_static_complete(rt,4u);
        }
        case 0xA451u: {
            uint8_t v=0x30u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA453u; return dd3_static_complete(rt,2u);
        }
        case 0xA453u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA455u,0xA461u)) c++; rt->state.cpu.pc=0xA461u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA455u; return dd3_static_complete(rt,2u);
        }
        case 0xA455u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA457u; return dd3_static_complete(rt,2u);
        }
        case 0xA457u: {
            dd3_static_write8(rt,0x03C3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA45Au; return dd3_static_complete(rt,4u);
        }
        case 0xA45Au: {
            dd3_static_write8(rt,0x03C2u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA45Du; return dd3_static_complete(rt,4u);
        }
        case 0xA45Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA45Eu: {
            uint16_t ea=0x03C3u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA461u; return dd3_static_complete(rt,6u);
        }
        case 0xA461u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA462u: {
            uint16_t ea=0x049Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA465u; return dd3_static_complete(rt,4u);
        }
        case 0xA465u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA467u; return dd3_static_complete(rt,2u);
        }
        case 0xA467u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA469u; return dd3_static_complete(rt,2u);
        }
        case 0xA469u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA46Bu,0xA4A1u)) c++; rt->state.cpu.pc=0xA4A1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA46Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA46Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA46Du; return dd3_static_complete(rt,2u);
        }
        case 0xA46Du: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA470u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xA470u: {
            uint16_t ea=(uint16_t)(0x0384u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA473u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0384u,ea)?1u:0u));
        }
        case 0xA473u: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA476u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0xA476u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA478u,0xA49Cu)) c++; rt->state.cpu.pc=0xA49Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA478u; return dd3_static_complete(rt,2u);
        }
        case 0xA478u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA47Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xA47Bu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA47Du; return dd3_static_complete(rt,2u);
        }
        case 0xA47Du: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA47Fu,0xA49Cu)) c++; rt->state.cpu.pc=0xA49Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA47Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA47Fu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA480u; return dd3_static_complete(rt,2u);
        }
        case 0xA480u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA482u; return dd3_static_complete(rt,2u);
        }
        case 0xA482u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA483u; return dd3_static_complete(rt,2u);
        }
        case 0xA483u: {
            uint16_t ea=(uint16_t)(0x0384u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA486u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0384u,ea)?1u:0u));
        }
        case 0xA486u: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA489u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0xA489u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA48Bu,0xA49Cu)) c++; rt->state.cpu.pc=0xA49Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA48Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA48Bu: {
            uint16_t ea=0x049Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA48Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA48Eu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA48Fu; return dd3_static_complete(rt,3u);
        }
        case 0xA48Fu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA490u; return dd3_static_complete(rt,2u);
        }
        case 0xA490u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA491u; return dd3_static_complete(rt,2u);
        }
        case 0xA491u: {
            dd3_static_write8(rt,0x049Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA494u; return dd3_static_complete(rt,4u);
        }
        case 0xA494u: {
            dd3_static_push8(rt,(uint8_t)(0xA496u>>8)); dd3_static_push8(rt,(uint8_t)0xA496u);
            rt->state.cpu.pc=0xA301u; return dd3_static_complete(rt,6u);
        }
        case 0xA497u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA498u; return dd3_static_complete(rt,4u);
        }
        case 0xA498u: {
            dd3_static_write8(rt,0x049Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA49Bu; return dd3_static_complete(rt,4u);
        }
        case 0xA49Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA49Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA49Du; return dd3_static_complete(rt,2u);
        }
        case 0xA49Du: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xA49Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA49Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA4A1u,0xA46Du)) c++; rt->state.cpu.pc=0xA46Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA4A1u; return dd3_static_complete(rt,2u);
        }
        case 0xA4A1u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA4A2u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA4A3u; return dd3_static_complete(rt,2u);
        }
        case 0xA4A3u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA4A4u; return dd3_static_complete(rt,3u);
        }
        case 0xA4A4u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA4A5u; return dd3_static_complete(rt,2u);
        }
        case 0xA4A5u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA4A6u; return dd3_static_complete(rt,3u);
        }
        case 0xA4A6u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA4A8u; return dd3_static_complete(rt,2u);
        }
        case 0xA4A8u: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA4AAu; return dd3_static_complete(rt,4u);
        }
        case 0xA4AAu: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA4ACu; return dd3_static_complete(rt,2u);
        }
        case 0xA4ACu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA4AEu,0xA4D4u)) c++; rt->state.cpu.pc=0xA4D4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA4AEu; return dd3_static_complete(rt,2u);
        }
        case 0xA4AEu: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA4B1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xA4B1u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA4B3u; return dd3_static_complete(rt,2u);
        }
        case 0xA4B3u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA4B4u; return dd3_static_complete(rt,2u);
        }
        case 0xA4B4u: {
            uint16_t ea=(uint16_t)(0x003Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA4B7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Cu,ea)?1u:0u));
        }
        case 0xA4B7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA4B9u,0xA4D4u)) c++; rt->state.cpu.pc=0xA4D4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA4B9u; return dd3_static_complete(rt,2u);
        }
        case 0xA4B9u: {
            dd3_static_push8(rt,(uint8_t)(0xA4BBu>>8)); dd3_static_push8(rt,(uint8_t)0xA4BBu);
            rt->state.cpu.pc=0xB3A2u; return dd3_static_complete(rt,6u);
        }
        case 0xA4BCu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA4BDu; return dd3_static_complete(rt,2u);
        }
        case 0xA4BDu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA4BFu; return dd3_static_complete(rt,2u);
        }
        case 0xA4BFu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA4C0u; return dd3_static_complete(rt,2u);
        }
        case 0xA4C0u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA4C2u; return dd3_static_complete(rt,3u);
        }
        case 0xA4C2u: {
            dd3_static_write8(rt,(uint16_t)(0x04A4u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA4C5u; return dd3_static_complete(rt,5u);
        }
        case 0xA4C5u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA4C7u; return dd3_static_complete(rt,3u);
        }
        case 0xA4C7u: {
            dd3_static_write8(rt,(uint16_t)(0x04A6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA4CAu; return dd3_static_complete(rt,5u);
        }
        case 0xA4CAu: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA4CCu; return dd3_static_complete(rt,3u);
        }
        case 0xA4CCu: {
            dd3_static_write8(rt,(uint16_t)(0x04A8u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA4CFu; return dd3_static_complete(rt,5u);
        }
        case 0xA4CFu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA4D1u; return dd3_static_complete(rt,3u);
        }
        case 0xA4D1u: {
            dd3_static_write8(rt,(uint16_t)(0x04B8u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA4D4u; return dd3_static_complete(rt,5u);
        }
        case 0xA4D4u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA4D5u; return dd3_static_complete(rt,4u);
        }
        case 0xA4D5u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA4D6u; return dd3_static_complete(rt,2u);
        }
        case 0xA4D6u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA4D7u; return dd3_static_complete(rt,4u);
        }
        case 0xA4D7u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA4D8u; return dd3_static_complete(rt,2u);
        }
        case 0xA4D8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA4D9u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA4DAu; return dd3_static_complete(rt,2u);
        }
        case 0xA4DAu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA4DBu; return dd3_static_complete(rt,3u);
        }
        case 0xA4DBu: {
            uint16_t ea=(uint16_t)(0x0483u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA4DEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0483u,ea)?1u:0u));
        }
        case 0xA4DEu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA4E0u,0xA53Cu)) c++; rt->state.cpu.pc=0xA53Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA4E0u; return dd3_static_complete(rt,2u);
        }
        case 0xA4E0u: {
            uint16_t ea=(uint16_t)(0x04AAu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA4E3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04AAu,ea)?1u:0u));
        }
        case 0xA4E3u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA4E5u; return dd3_static_complete(rt,2u);
        }
        case 0xA4E5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA4E7u,0xA53Cu)) c++; rt->state.cpu.pc=0xA53Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA4E7u; return dd3_static_complete(rt,2u);
        }
        case 0xA4E7u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA4EAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xA4EAu: {
            uint16_t ea=(uint16_t)(0x0384u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA4EDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0384u,ea)?1u:0u));
        }
        case 0xA4EDu: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA4F0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0xA4F0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA4F2u,0xA53Cu)) c++; rt->state.cpu.pc=0xA53Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA4F2u; return dd3_static_complete(rt,2u);
        }
        case 0xA4F2u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA4F3u; return dd3_static_complete(rt,2u);
        }
        case 0xA4F3u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA4F5u; return dd3_static_complete(rt,2u);
        }
        case 0xA4F5u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA4F6u; return dd3_static_complete(rt,2u);
        }
        case 0xA4F6u: {
            uint16_t ea=(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA4F8u; return dd3_static_complete(rt,4u);
        }
        case 0xA4F8u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA4FAu; return dd3_static_complete(rt,2u);
        }
        case 0xA4FAu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA4FCu; return dd3_static_complete(rt,2u);
        }
        case 0xA4FCu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA4FEu,0xA53Cu)) c++; rt->state.cpu.pc=0xA53Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA4FEu; return dd3_static_complete(rt,2u);
        }
        case 0xA4FEu: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA500u; return dd3_static_complete(rt,2u);
        }
        case 0xA500u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA502u,0xA53Cu)) c++; rt->state.cpu.pc=0xA53Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA502u; return dd3_static_complete(rt,2u);
        }
        case 0xA502u: {
            uint8_t v=0x09u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA504u; return dd3_static_complete(rt,2u);
        }
        case 0xA504u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA506u,0xA53Cu)) c++; rt->state.cpu.pc=0xA53Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA506u; return dd3_static_complete(rt,2u);
        }
        case 0xA506u: {
            uint16_t ea=(uint16_t)(0x06C0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA509u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06C0u,ea)?1u:0u));
        }
        case 0xA509u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA50Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA50Bu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA50Du,0xA53Cu)) c++; rt->state.cpu.pc=0xA53Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA50Du; return dd3_static_complete(rt,2u);
        }
        case 0xA50Du: {
            uint16_t ea=(uint16_t)(0x06BEu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA510u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06BEu,ea)?1u:0u));
        }
        case 0xA510u: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA512u; return dd3_static_complete(rt,2u);
        }
        case 0xA512u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA514u,0xA53Cu)) c++; rt->state.cpu.pc=0xA53Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA514u; return dd3_static_complete(rt,2u);
        }
        case 0xA514u: {
            uint16_t ea=(uint16_t)(0x0046u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA517u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0046u,ea)?1u:0u));
        }
        case 0xA517u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA519u; return dd3_static_complete(rt,2u);
        }
        case 0xA519u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA51Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA51Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA51Du,0xA53Cu)) c++; rt->state.cpu.pc=0xA53Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA51Du; return dd3_static_complete(rt,2u);
        }
        case 0xA51Du: {
            uint16_t ea=(uint16_t)(0x004Eu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA520u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Eu,ea)?1u:0u));
        }
        case 0xA520u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA522u; return dd3_static_complete(rt,2u);
        }
        case 0xA522u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA524u,0xA53Cu)) c++; rt->state.cpu.pc=0xA53Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA524u; return dd3_static_complete(rt,2u);
        }
        case 0xA524u: {
            uint8_t v=0x09u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA526u; return dd3_static_complete(rt,2u);
        }
        case 0xA526u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA528u; return dd3_static_complete(rt,4u);
        }
        case 0xA528u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA52Au; return dd3_static_complete(rt,2u);
        }
        case 0xA52Au: {
            dd3_static_write8(rt,(uint16_t)(0x04CAu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA52Du; return dd3_static_complete(rt,5u);
        }
        case 0xA52Du: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA52Fu; return dd3_static_complete(rt,4u);
        }
        case 0xA52Fu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA531u; return dd3_static_complete(rt,2u);
        }
        case 0xA531u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA533u; return dd3_static_complete(rt,2u);
        }
        case 0xA533u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA535u,0xA538u)) c++; rt->state.cpu.pc=0xA538u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA535u; return dd3_static_complete(rt,2u);
        }
        case 0xA535u: {
            dd3_static_push8(rt,(uint8_t)(0xA537u>>8)); dd3_static_push8(rt,(uint8_t)0xA537u);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,6u);
        }
        case 0xA538u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA539u; return dd3_static_complete(rt,4u);
        }
        case 0xA539u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA53Au; return dd3_static_complete(rt,2u);
        }
        case 0xA53Au: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA53Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA53Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA53Cu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA53Du; return dd3_static_complete(rt,4u);
        }
        case 0xA53Du: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA53Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA53Eu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA53Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA53Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA540u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA542u; return dd3_static_complete(rt,2u);
        }
        case 0xA542u: {
            uint16_t ea=(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA544u; return dd3_static_complete(rt,4u);
        }
        case 0xA544u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA546u,0xA54Du)) c++; rt->state.cpu.pc=0xA54Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA546u; return dd3_static_complete(rt,2u);
        }
        case 0xA546u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA547u; return dd3_static_complete(rt,2u);
        }
        case 0xA547u: {
            dd3_static_write8(rt,(uint16_t)(0x03D6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA54Au; return dd3_static_complete(rt,5u);
        }
        case 0xA54Au: {
            rt->state.cpu.pc=0xA5E0u; return dd3_static_complete(rt,3u);
        }
        case 0xA54Du: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA54Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA54Eu: {
            dd3_static_write8(rt,(uint16_t)(0x04ACu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA551u; return dd3_static_complete(rt,5u);
        }
        case 0xA551u: {
            dd3_static_write8(rt,(uint16_t)(0x04C6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA554u; return dd3_static_complete(rt,5u);
        }
        case 0xA554u: {
            dd3_static_push8(rt,(uint8_t)(0xA556u>>8)); dd3_static_push8(rt,(uint8_t)0xA556u);
            rt->state.cpu.pc=0xA5FEu; return dd3_static_complete(rt,6u);
        }
        case 0xA557u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA558u; return dd3_static_complete(rt,2u);
        }
        case 0xA558u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA559u; return dd3_static_complete(rt,3u);
        }
        case 0xA559u: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA55Bu; return dd3_static_complete(rt,3u);
        }
        case 0xA55Bu: {
            dd3_static_push8(rt,(uint8_t)(0xA55Du>>8)); dd3_static_push8(rt,(uint8_t)0xA55Du);
            rt->state.cpu.pc=0x84FCu; return dd3_static_complete(rt,6u);
        }
        case 0xA55Eu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA55Fu; return dd3_static_complete(rt,4u);
        }
        case 0xA55Fu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA560u; return dd3_static_complete(rt,2u);
        }
        case 0xA560u: {
            uint16_t ea=0x23u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA562u; return dd3_static_complete(rt,3u);
        }
        case 0xA562u: {
            dd3_static_write8(rt,(uint16_t)(0x038Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA565u; return dd3_static_complete(rt,5u);
        }
        case 0xA565u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA567u; return dd3_static_complete(rt,2u);
        }
        case 0xA567u: {
            dd3_static_write8(rt,(uint16_t)(0x03B1u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA56Au; return dd3_static_complete(rt,5u);
        }
        case 0xA56Au: {
            uint16_t ea=(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA56Cu; return dd3_static_complete(rt,4u);
        }
        case 0xA56Cu: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA56Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA56Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA570u,0xA574u)) c++; rt->state.cpu.pc=0xA574u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA570u; return dd3_static_complete(rt,2u);
        }
        case 0xA570u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA572u; return dd3_static_complete(rt,2u);
        }
        case 0xA572u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA574u,0xA57Cu)) c++; rt->state.cpu.pc=0xA57Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA574u; return dd3_static_complete(rt,2u);
        }
        case 0xA574u: {
            uint16_t ea=(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA576u; return dd3_static_complete(rt,4u);
        }
        case 0xA576u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA578u; return dd3_static_complete(rt,2u);
        }
        case 0xA578u: {
            dd3_static_write8(rt,(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA57Au; return dd3_static_complete(rt,4u);
        }
        case 0xA57Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA57Cu,0xA5E0u)) c++; rt->state.cpu.pc=0xA5E0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA57Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA57Cu: {
            uint8_t v=0x81u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA57Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA57Eu: {
            dd3_static_push8(rt,(uint8_t)(0xA580u>>8)); dd3_static_push8(rt,(uint8_t)0xA580u);
            rt->state.cpu.pc=0xA624u; return dd3_static_complete(rt,6u);
        }
        case 0xA581u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA583u,0xA5CBu)) c++; rt->state.cpu.pc=0xA5CBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA583u; return dd3_static_complete(rt,2u);
        }
        case 0xA583u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA585u; return dd3_static_complete(rt,3u);
        }
        case 0xA585u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA586u; return dd3_static_complete(rt,2u);
        }
        case 0xA586u: {
            uint8_t v=0x78u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA588u; return dd3_static_complete(rt,2u);
        }
        case 0xA588u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA58Au; return dd3_static_complete(rt,3u);
        }
        case 0xA58Au: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA58Cu; return dd3_static_complete(rt,3u);
        }
        case 0xA58Cu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA58Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA58Eu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA590u; return dd3_static_complete(rt,3u);
        }
        case 0xA590u: {
            uint16_t ea=(uint16_t)((0xCDu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA592u; return dd3_static_complete(rt,4u);
        }
        case 0xA592u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA593u; return dd3_static_complete(rt,2u);
        }
        case 0xA593u: {
            uint16_t ea=(uint16_t)((0xE1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA595u; return dd3_static_complete(rt,4u);
        }
        case 0xA595u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xA597u; return dd3_static_complete(rt,3u);
        }
        case 0xA597u: {
            uint16_t ea=(uint16_t)((0xD7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA599u; return dd3_static_complete(rt,4u);
        }
        case 0xA599u: {
            uint16_t ea=(uint16_t)((0xEBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA59Bu; return dd3_static_complete(rt,4u);
        }
        case 0xA59Bu: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA59Du; return dd3_static_complete(rt,3u);
        }
        case 0xA59Du: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA59Fu; return dd3_static_complete(rt,3u);
        }
        case 0xA59Fu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA5A0u; return dd3_static_complete(rt,2u);
        }
        case 0xA5A0u: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA5A2u; return dd3_static_complete(rt,3u);
        }
        case 0xA5A2u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA5A4u; return dd3_static_complete(rt,3u);
        }
        case 0xA5A4u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5A6u; return dd3_static_complete(rt,3u);
        }
        case 0xA5A6u: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA5A8u; return dd3_static_complete(rt,3u);
        }
        case 0xA5A8u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA5AAu; return dd3_static_complete(rt,3u);
        }
        case 0xA5AAu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA5ACu,0xA5AFu)) c++; rt->state.cpu.pc=0xA5AFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA5ACu; return dd3_static_complete(rt,2u);
        }
        case 0xA5ACu: {
            dd3_static_push8(rt,(uint8_t)(0xA5AEu>>8)); dd3_static_push8(rt,(uint8_t)0xA5AEu);
            rt->state.cpu.pc=0xB390u; return dd3_static_complete(rt,6u);
        }
        case 0xA5AFu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5B1u; return dd3_static_complete(rt,3u);
        }
        case 0xA5B1u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA5B2u; return dd3_static_complete(rt,2u);
        }
        case 0xA5B2u: {
            uint8_t v=0x78u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA5B4u; return dd3_static_complete(rt,2u);
        }
        case 0xA5B4u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA5B6u; return dd3_static_complete(rt,3u);
        }
        case 0xA5B6u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5B8u; return dd3_static_complete(rt,3u);
        }
        case 0xA5B8u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA5BAu; return dd3_static_complete(rt,2u);
        }
        case 0xA5BAu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA5BCu; return dd3_static_complete(rt,3u);
        }
        case 0xA5BCu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA5BEu,0xA5CBu)) c++; rt->state.cpu.pc=0xA5CBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA5BEu; return dd3_static_complete(rt,2u);
        }
        case 0xA5BEu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA5BFu; return dd3_static_complete(rt,2u);
        }
        case 0xA5BFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA5C1u,0xA5E0u)) c++; rt->state.cpu.pc=0xA5E0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA5C1u; return dd3_static_complete(rt,2u);
        }
        case 0xA5C1u: {
            uint16_t ea=(uint16_t)(0x03D6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA5C4u; return dd3_static_complete(rt,7u);
        }
        case 0xA5C4u: {
            uint16_t ea=(uint16_t)(0x03D6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5C7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03D6u,ea)?1u:0u));
        }
        case 0xA5C7u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA5C9u; return dd3_static_complete(rt,2u);
        }
        case 0xA5C9u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA5CBu,0xA5E0u)) c++; rt->state.cpu.pc=0xA5E0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA5CBu; return dd3_static_complete(rt,2u);
        }
        case 0xA5CBu: {
            uint16_t ea=(uint16_t)((0x3Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5CDu; return dd3_static_complete(rt,4u);
        }
        case 0xA5CDu: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA5CFu; return dd3_static_complete(rt,2u);
        }
        case 0xA5CFu: {
            dd3_static_write8(rt,(uint16_t)((0x3Eu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA5D1u; return dd3_static_complete(rt,4u);
        }
        case 0xA5D1u: {
            uint16_t ea=(uint16_t)((0xC3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5D3u; return dd3_static_complete(rt,4u);
        }
        case 0xA5D3u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA5D5u,0xA5DEu)) c++; rt->state.cpu.pc=0xA5DEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA5D5u; return dd3_static_complete(rt,2u);
        }
        case 0xA5D5u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5D7u; return dd3_static_complete(rt,2u);
        }
        case 0xA5D7u: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA5DAu; return dd3_static_complete(rt,5u);
        }
        case 0xA5DAu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5DCu; return dd3_static_complete(rt,2u);
        }
        case 0xA5DCu: {
            dd3_static_write8(rt,(uint16_t)((0x6Au+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA5DEu; return dd3_static_complete(rt,4u);
        }
        case 0xA5DEu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA5DFu; return dd3_static_complete(rt,2u);
        }
        case 0xA5DFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA5E0u: {
            uint16_t ea=(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5E2u; return dd3_static_complete(rt,4u);
        }
        case 0xA5E2u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA5E4u; return dd3_static_complete(rt,2u);
        }
        case 0xA5E4u: {
            dd3_static_write8(rt,(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA5E6u; return dd3_static_complete(rt,4u);
        }
        case 0xA5E6u: {
            uint16_t ea=(uint16_t)((0x3Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5E8u; return dd3_static_complete(rt,4u);
        }
        case 0xA5E8u: {
            uint8_t v=0xDFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA5EAu; return dd3_static_complete(rt,2u);
        }
        case 0xA5EAu: {
            dd3_static_write8(rt,(uint16_t)((0x3Eu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA5ECu; return dd3_static_complete(rt,4u);
        }
        case 0xA5ECu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA5EEu; return dd3_static_complete(rt,2u);
        }
        case 0xA5EEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA5F0u,0xA5FCu)) c++; rt->state.cpu.pc=0xA5FCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA5F0u; return dd3_static_complete(rt,2u);
        }
        case 0xA5F0u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5F2u; return dd3_static_complete(rt,4u);
        }
        case 0xA5F2u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA5F4u; return dd3_static_complete(rt,2u);
        }
        case 0xA5F4u: {
            uint8_t v=0x26u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA5F6u; return dd3_static_complete(rt,2u);
        }
        case 0xA5F6u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA5F8u,0xA5FCu)) c++; rt->state.cpu.pc=0xA5FCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA5F8u; return dd3_static_complete(rt,2u);
        }
        case 0xA5F8u: {
            uint8_t v=0x26u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5FAu; return dd3_static_complete(rt,2u);
        }
        case 0xA5FAu: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA5FCu; return dd3_static_complete(rt,4u);
        }
        case 0xA5FCu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA5FDu; return dd3_static_complete(rt,2u);
        }
        case 0xA5FDu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA5FEu: {
            uint16_t ea=(uint16_t)(0x0483u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA601u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0483u,ea)?1u:0u));
        }
        case 0xA601u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA603u,0xA61Cu)) c++; rt->state.cpu.pc=0xA61Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA603u; return dd3_static_complete(rt,2u);
        }
        case 0xA603u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA605u; return dd3_static_complete(rt,2u);
        }
        case 0xA605u: {
            uint8_t v=0x12u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA607u; return dd3_static_complete(rt,2u);
        }
        case 0xA607u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA609u,0xA61Cu)) c++; rt->state.cpu.pc=0xA61Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA609u; return dd3_static_complete(rt,2u);
        }
        case 0xA609u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA60Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA60Bu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA60Du,0xA61Cu)) c++; rt->state.cpu.pc=0xA61Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA60Du; return dd3_static_complete(rt,2u);
        }
        case 0xA60Du: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA60Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA60Eu: {
            uint8_t v=0x12u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA610u; return dd3_static_complete(rt,2u);
        }
        case 0xA610u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA611u; return dd3_static_complete(rt,2u);
        }
        case 0xA611u: {
            uint16_t ea=(uint16_t)(0xA61Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA614u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA61Du,ea)?1u:0u));
        }
        case 0xA614u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA616u; return dd3_static_complete(rt,3u);
        }
        case 0xA616u: {
            uint16_t ea=(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA618u; return dd3_static_complete(rt,4u);
        }
        case 0xA618u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA61Au; return dd3_static_complete(rt,3u);
        }
        case 0xA61Au: {
            dd3_static_write8(rt,(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA61Cu; return dd3_static_complete(rt,4u);
        }
        case 0xA61Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA624u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.y);
            rt->state.cpu.pc=0xA626u; return dd3_static_complete(rt,3u);
        }
        case 0xA626u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA628u; return dd3_static_complete(rt,3u);
        }
        case 0xA628u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA629u; return dd3_static_complete(rt,2u);
        }
        case 0xA629u: {
            uint8_t v=0x80u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA62Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA62Bu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA62Du; return dd3_static_complete(rt,3u);
        }
        case 0xA62Du: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA62Fu; return dd3_static_complete(rt,3u);
        }
        case 0xA62Fu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA631u; return dd3_static_complete(rt,2u);
        }
        case 0xA631u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA633u; return dd3_static_complete(rt,3u);
        }
        case 0xA633u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA635u; return dd3_static_complete(rt,3u);
        }
        case 0xA635u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA636u; return dd3_static_complete(rt,2u);
        }
        case 0xA636u: {
            uint16_t ea=(uint16_t)((0xB9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA638u; return dd3_static_complete(rt,4u);
        }
        case 0xA638u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA63Au; return dd3_static_complete(rt,3u);
        }
        case 0xA63Au: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA63Cu; return dd3_static_complete(rt,3u);
        }
        case 0xA63Cu: {
            uint16_t ea=(uint16_t)((0xC3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA63Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA63Eu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA640u; return dd3_static_complete(rt,3u);
        }
        case 0xA640u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA642u,0xA645u)) c++; rt->state.cpu.pc=0xA645u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA642u; return dd3_static_complete(rt,2u);
        }
        case 0xA642u: {
            dd3_static_push8(rt,(uint8_t)(0xA644u>>8)); dd3_static_push8(rt,(uint8_t)0xA644u);
            rt->state.cpu.pc=0xB390u; return dd3_static_complete(rt,6u);
        }
        case 0xA645u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA647u; return dd3_static_complete(rt,3u);
        }
        case 0xA647u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA648u; return dd3_static_complete(rt,2u);
        }
        case 0xA648u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA64Au; return dd3_static_complete(rt,3u);
        }
        case 0xA64Au: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA64Cu; return dd3_static_complete(rt,3u);
        }
        case 0xA64Cu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA64Eu; return dd3_static_complete(rt,3u);
        }
        case 0xA64Eu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA650u; return dd3_static_complete(rt,2u);
        }
        case 0xA650u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA652u; return dd3_static_complete(rt,3u);
        }
        case 0xA652u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA654u,0xA656u)) c++; rt->state.cpu.pc=0xA656u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA654u; return dd3_static_complete(rt,2u);
        }
        case 0xA654u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA655u; return dd3_static_complete(rt,2u);
        }
        case 0xA655u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA656u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA657u; return dd3_static_complete(rt,2u);
        }
        case 0xA657u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA658u: {
            dd3_static_push8(rt,(uint8_t)(0xA65Au>>8)); dd3_static_push8(rt,(uint8_t)0xA65Au);
            rt->state.cpu.pc=0xB417u; return dd3_static_complete(rt,6u);
        }
        case 0xA65Bu: {
            uint16_t ea=0x049Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA65Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA65Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA660u,0xA668u)) c++; rt->state.cpu.pc=0xA668u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA660u; return dd3_static_complete(rt,2u);
        }
        case 0xA660u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA662u; return dd3_static_complete(rt,2u);
        }
        case 0xA662u: {
            dd3_static_write8(rt,(uint16_t)(0x04CAu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA665u; return dd3_static_complete(rt,5u);
        }
        case 0xA665u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA667u,0xA6D3u)) c++; rt->state.cpu.pc=0xA6D3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA667u; return dd3_static_complete(rt,2u);
        }
        case 0xA667u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA668u: {
            uint16_t ea=(uint16_t)((0xC3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA66Au; return dd3_static_complete(rt,4u);
        }
        case 0xA66Au: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA66Cu,0xA67Bu)) c++; rt->state.cpu.pc=0xA67Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA66Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA66Cu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA66Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA66Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA671u; return dd3_static_complete(rt,5u);
        }
        case 0xA671u: {
            dd3_static_push8(rt,(uint8_t)(0xA673u>>8)); dd3_static_push8(rt,(uint8_t)0xA673u);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,6u);
        }
        case 0xA674u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA676u; return dd3_static_complete(rt,2u);
        }
        case 0xA676u: {
            dd3_static_write8(rt,(uint16_t)((0x6Au+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA678u; return dd3_static_complete(rt,4u);
        }
        case 0xA678u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA67Au; return dd3_static_complete(rt,4u);
        }
        case 0xA67Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA67Bu: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA67Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xA67Eu: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA681u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0xA681u: {
            uint16_t ea=(uint16_t)(0x0384u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA684u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0384u,ea)?1u:0u));
        }
        case 0xA684u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA686u,0xA6A2u)) c++; rt->state.cpu.pc=0xA6A2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA686u; return dd3_static_complete(rt,2u);
        }
        case 0xA686u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA689u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xA689u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA68Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA68Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA68Du,0xA6A2u)) c++; rt->state.cpu.pc=0xA6A2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA68Du; return dd3_static_complete(rt,2u);
        }
        case 0xA68Du: {
            uint16_t ea=(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA68Fu; return dd3_static_complete(rt,4u);
        }
        case 0xA68Fu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA691u,0xA667u)) c++; rt->state.cpu.pc=0xA667u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA691u; return dd3_static_complete(rt,2u);
        }
        case 0xA691u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA693u; return dd3_static_complete(rt,2u);
        }
        case 0xA693u: {
            uint8_t v=0x0Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA695u; return dd3_static_complete(rt,2u);
        }
        case 0xA695u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA697u,0xA667u)) c++; rt->state.cpu.pc=0xA667u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA697u; return dd3_static_complete(rt,2u);
        }
        case 0xA697u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA699u; return dd3_static_complete(rt,3u);
        }
        case 0xA699u: {
            uint8_t v=0x0Bu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA69Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA69Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA69Du,0xA6A2u)) c++; rt->state.cpu.pc=0xA6A2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA69Du; return dd3_static_complete(rt,2u);
        }
        case 0xA69Du: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA69Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA69Fu: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA6A1u; return dd3_static_complete(rt,4u);
        }
        case 0xA6A1u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA6A2u: {
            dd3_static_push8(rt,(uint8_t)(0xA6A4u>>8)); dd3_static_push8(rt,(uint8_t)0xA6A4u);
            rt->state.cpu.pc=0xA9AAu; return dd3_static_complete(rt,6u);
        }
        case 0xA6A5u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA6A7u,0xA667u)) c++; rt->state.cpu.pc=0xA667u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6A7u; return dd3_static_complete(rt,2u);
        }
        case 0xA6A7u: {
            uint16_t ea=(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6A9u; return dd3_static_complete(rt,4u);
        }
        case 0xA6A9u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA6ABu,0xA667u)) c++; rt->state.cpu.pc=0xA667u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6ABu; return dd3_static_complete(rt,2u);
        }
        case 0xA6ABu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6AEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA6AEu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6B0u; return dd3_static_complete(rt,2u);
        }
        case 0xA6B0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA6B2u,0xA667u)) c++; rt->state.cpu.pc=0xA667u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6B2u; return dd3_static_complete(rt,2u);
        }
        case 0xA6B2u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6B5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xA6B5u: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6B8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0xA6B8u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6BAu; return dd3_static_complete(rt,2u);
        }
        case 0xA6BAu: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA6BCu; return dd3_static_complete(rt,2u);
        }
        case 0xA6BCu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA6BEu,0xA6CEu)) c++; rt->state.cpu.pc=0xA6CEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6BEu; return dd3_static_complete(rt,2u);
        }
        case 0xA6BEu: {
            uint8_t v=0x57u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA6C0u; return dd3_static_complete(rt,2u);
        }
        case 0xA6C0u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA6C2u,0xA6CAu)) c++; rt->state.cpu.pc=0xA6CAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6C2u; return dd3_static_complete(rt,2u);
        }
        case 0xA6C2u: {
            uint8_t v=0x4Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA6C4u; return dd3_static_complete(rt,2u);
        }
        case 0xA6C4u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA6C6u,0xA6D7u)) c++; rt->state.cpu.pc=0xA6D7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6C6u; return dd3_static_complete(rt,2u);
        }
        case 0xA6C6u: {
            uint8_t v=0x51u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA6C8u; return dd3_static_complete(rt,2u);
        }
        case 0xA6C8u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA6CAu,0xA6D7u)) c++; rt->state.cpu.pc=0xA6D7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6CAu; return dd3_static_complete(rt,2u);
        }
        case 0xA6CAu: {
            uint8_t v=0x05u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6CCu; return dd3_static_complete(rt,2u);
        }
        case 0xA6CCu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA6CEu,0xA6D0u)) c++; rt->state.cpu.pc=0xA6D0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6CEu; return dd3_static_complete(rt,2u);
        }
        case 0xA6CEu: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6D0u; return dd3_static_complete(rt,2u);
        }
        case 0xA6D0u: {
            dd3_static_write8(rt,(uint16_t)(0x04CAu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA6D3u; return dd3_static_complete(rt,5u);
        }
        case 0xA6D3u: {
            uint8_t v=0x09u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6D5u; return dd3_static_complete(rt,2u);
        }
        case 0xA6D5u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA6D7u,0xA721u)) c++; rt->state.cpu.pc=0xA721u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6D7u; return dd3_static_complete(rt,2u);
        }
        case 0xA6D7u: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6DAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0xA6DAu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA6DBu; return dd3_static_complete(rt,2u);
        }
        case 0xA6DBu: {
            uint16_t ea=(uint16_t)((0x56u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6DDu; return dd3_static_complete(rt,4u);
        }
        case 0xA6DDu: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6DFu; return dd3_static_complete(rt,2u);
        }
        case 0xA6DFu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA6E1u,0xA6F9u)) c++; rt->state.cpu.pc=0xA6F9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6E1u; return dd3_static_complete(rt,2u);
        }
        case 0xA6E1u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6E3u; return dd3_static_complete(rt,2u);
        }
        case 0xA6E3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA6E5u,0xA6EBu)) c++; rt->state.cpu.pc=0xA6EBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6E5u; return dd3_static_complete(rt,2u);
        }
        case 0xA6E5u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xA6E7u; return dd3_static_complete(rt,2u);
        }
        case 0xA6E7u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA6E9u,0xA6EFu)) c++; rt->state.cpu.pc=0xA6EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6E9u; return dd3_static_complete(rt,2u);
        }
        case 0xA6E9u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA6EBu,0xA6FDu)) c++; rt->state.cpu.pc=0xA6FDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6EBu; return dd3_static_complete(rt,2u);
        }
        case 0xA6EBu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xA6EDu; return dd3_static_complete(rt,2u);
        }
        case 0xA6EDu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA6EFu,0xA707u)) c++; rt->state.cpu.pc=0xA707u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6EFu; return dd3_static_complete(rt,2u);
        }
        case 0xA6EFu: {
            uint16_t ea=0x0034u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6F2u; return dd3_static_complete(rt,4u);
        }
        case 0xA6F2u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA6F4u,0xA737u)) c++; rt->state.cpu.pc=0xA737u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6F4u; return dd3_static_complete(rt,2u);
        }
        case 0xA6F4u: {
            dd3_static_push8(rt,(uint8_t)(0xA6F6u>>8)); dd3_static_push8(rt,(uint8_t)0xA6F6u);
            rt->state.cpu.pc=0xA749u; return dd3_static_complete(rt,6u);
        }
        case 0xA6F7u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA6F9u,0xA737u)) c++; rt->state.cpu.pc=0xA737u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6F9u; return dd3_static_complete(rt,2u);
        }
        case 0xA6F9u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xA6FBu; return dd3_static_complete(rt,2u);
        }
        case 0xA6FBu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA6FDu,0xA707u)) c++; rt->state.cpu.pc=0xA707u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6FDu; return dd3_static_complete(rt,2u);
        }
        case 0xA6FDu: {
            uint16_t ea=(uint16_t)((0x56u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6FFu; return dd3_static_complete(rt,4u);
        }
        case 0xA6FFu: {
            uint8_t v=0xFCu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA701u; return dd3_static_complete(rt,2u);
        }
        case 0xA701u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA703u; return dd3_static_complete(rt,2u);
        }
        case 0xA703u: {
            dd3_static_write8(rt,(uint16_t)((0x56u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA705u; return dd3_static_complete(rt,4u);
        }
        case 0xA705u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA707u,0xA714u)) c++; rt->state.cpu.pc=0xA714u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA707u; return dd3_static_complete(rt,2u);
        }
        case 0xA707u: {
            uint16_t ea=(uint16_t)((0x56u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA709u; return dd3_static_complete(rt,4u);
        }
        case 0xA709u: {
            uint8_t v=0xFCu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA70Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA70Bu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA70Du; return dd3_static_complete(rt,2u);
        }
        case 0xA70Du: {
            dd3_static_write8(rt,(uint16_t)((0x56u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA70Fu; return dd3_static_complete(rt,4u);
        }
        case 0xA70Fu: {
            dd3_static_push8(rt,(uint8_t)(0xA711u>>8)); dd3_static_push8(rt,(uint8_t)0xA711u);
            rt->state.cpu.pc=0xA7BFu; return dd3_static_complete(rt,6u);
        }
        case 0xA712u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA714u,0xA737u)) c++; rt->state.cpu.pc=0xA737u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA714u; return dd3_static_complete(rt,2u);
        }
        case 0xA714u: {
            dd3_static_push8(rt,(uint8_t)(0xA716u>>8)); dd3_static_push8(rt,(uint8_t)0xA716u);
            rt->state.cpu.pc=0xB4B5u; return dd3_static_complete(rt,6u);
        }
        case 0xA717u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA719u,0xA71Du)) c++; rt->state.cpu.pc=0xA71Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA719u; return dd3_static_complete(rt,2u);
        }
        case 0xA719u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA71Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA71Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA71Du,0xA721u)) c++; rt->state.cpu.pc=0xA721u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA71Du; return dd3_static_complete(rt,2u);
        }
        case 0xA71Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA71Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA71Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA721u,0xA728u)) c++; rt->state.cpu.pc=0xA728u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA721u; return dd3_static_complete(rt,2u);
        }
        case 0xA721u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA723u; return dd3_static_complete(rt,4u);
        }
        case 0xA723u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA725u; return dd3_static_complete(rt,2u);
        }
        case 0xA725u: {
            dd3_static_write8(rt,(uint16_t)(0x04B2u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA728u; return dd3_static_complete(rt,5u);
        }
        case 0xA728u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA72Au; return dd3_static_complete(rt,4u);
        }
        case 0xA72Au: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA72Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA72Cu: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA72Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA72Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA730u,0xA737u)) c++; rt->state.cpu.pc=0xA737u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA730u; return dd3_static_complete(rt,2u);
        }
        case 0xA730u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA732u; return dd3_static_complete(rt,2u);
        }
        case 0xA732u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA734u,0xA737u)) c++; rt->state.cpu.pc=0xA737u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA734u; return dd3_static_complete(rt,2u);
        }
        case 0xA734u: {
            dd3_static_push8(rt,(uint8_t)(0xA736u>>8)); dd3_static_push8(rt,(uint8_t)0xA736u);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,6u);
        }
        case 0xA737u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA749u: {
            uint16_t ea=0x0034u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA74Cu; return dd3_static_complete(rt,4u);
        }
        case 0xA74Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA74Eu,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA74Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA74Eu: {
            dd3_static_push8(rt,(uint8_t)(0xA750u>>8)); dd3_static_push8(rt,(uint8_t)0xA750u);
            rt->state.cpu.pc=0xA8F2u; return dd3_static_complete(rt,6u);
        }
        case 0xA751u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA753u,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA753u; return dd3_static_complete(rt,2u);
        }
        case 0xA753u: {
            dd3_static_push8(rt,(uint8_t)(0xA755u>>8)); dd3_static_push8(rt,(uint8_t)0xA755u);
            rt->state.cpu.pc=0xA8D1u; return dd3_static_complete(rt,6u);
        }
        case 0xA756u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA758u,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA758u; return dd3_static_complete(rt,2u);
        }
        case 0xA758u: {
            dd3_static_push8(rt,(uint8_t)(0xA75Au>>8)); dd3_static_push8(rt,(uint8_t)0xA75Au);
            rt->state.cpu.pc=0xA888u; return dd3_static_complete(rt,6u);
        }
        case 0xA75Bu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA75Du,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA75Du; return dd3_static_complete(rt,2u);
        }
        case 0xA75Du: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA75Fu; return dd3_static_complete(rt,4u);
        }
        case 0xA75Fu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA761u,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA761u; return dd3_static_complete(rt,2u);
        }
        case 0xA761u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA763u; return dd3_static_complete(rt,2u);
        }
        case 0xA763u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA765u; return dd3_static_complete(rt,2u);
        }
        case 0xA765u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA767u,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA767u; return dd3_static_complete(rt,2u);
        }
        case 0xA767u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA76Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xA76Au: {
            uint8_t v=0x80u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA76Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA76Cu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA76Eu,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA76Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA76Eu: {
            uint16_t ea=(uint16_t)(0x06C0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA771u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06C0u,ea)?1u:0u));
        }
        case 0xA771u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA773u; return dd3_static_complete(rt,2u);
        }
        case 0xA773u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA775u,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA775u; return dd3_static_complete(rt,2u);
        }
        case 0xA775u: {
            uint16_t ea=(uint16_t)(0x06BEu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA778u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06BEu,ea)?1u:0u));
        }
        case 0xA778u: {
            uint8_t v=0x50u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA77Au; return dd3_static_complete(rt,2u);
        }
        case 0xA77Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA77Cu,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA77Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA77Cu: {
            uint8_t v=0x18u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA77Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA77Eu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA780u,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA780u; return dd3_static_complete(rt,2u);
        }
        case 0xA780u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA781u; return dd3_static_complete(rt,2u);
        }
        case 0xA781u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA783u; return dd3_static_complete(rt,2u);
        }
        case 0xA783u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA784u; return dd3_static_complete(rt,2u);
        }
        case 0xA784u: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA787u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0xA787u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA789u; return dd3_static_complete(rt,2u);
        }
        case 0xA789u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA78Bu,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA78Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA78Bu: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA78Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0xA78Eu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA790u; return dd3_static_complete(rt,2u);
        }
        case 0xA790u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA792u,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA792u; return dd3_static_complete(rt,2u);
        }
        case 0xA792u: {
            uint16_t ea=(uint16_t)(0x06C0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA795u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06C0u,ea)?1u:0u));
        }
        case 0xA795u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA797u; return dd3_static_complete(rt,2u);
        }
        case 0xA797u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA799u,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA799u; return dd3_static_complete(rt,2u);
        }
        case 0xA799u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA79Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xA79Cu: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA79Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xA79Fu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA7A1u,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA7A1u; return dd3_static_complete(rt,2u);
        }
        case 0xA7A1u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7A4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xA7A4u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA7A5u; return dd3_static_complete(rt,2u);
        }
        case 0xA7A5u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA7A8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xA7A8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA7AAu,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA7AAu; return dd3_static_complete(rt,2u);
        }
        case 0xA7AAu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7ADu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA7ADu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA7AFu; return dd3_static_complete(rt,2u);
        }
        case 0xA7AFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA7B1u,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA7B1u; return dd3_static_complete(rt,2u);
        }
        case 0xA7B1u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7B4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA7B4u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA7B6u; return dd3_static_complete(rt,2u);
        }
        case 0xA7B6u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA7B8u,0xA7BDu)) c++; rt->state.cpu.pc=0xA7BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA7B8u; return dd3_static_complete(rt,2u);
        }
        case 0xA7B8u: {
            dd3_static_push8(rt,(uint8_t)(0xA7BAu>>8)); dd3_static_push8(rt,(uint8_t)0xA7BAu);
            rt->state.cpu.pc=0xB031u; return dd3_static_complete(rt,6u);
        }
        case 0xA7BBu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA7BCu; return dd3_static_complete(rt,2u);
        }
        case 0xA7BCu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA7BDu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA7BEu; return dd3_static_complete(rt,2u);
        }
        case 0xA7BEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA7BFu: {
            dd3_static_push8(rt,(uint8_t)(0xA7C1u>>8)); dd3_static_push8(rt,(uint8_t)0xA7C1u);
            rt->state.cpu.pc=0xA8F2u; return dd3_static_complete(rt,6u);
        }
        case 0xA7C2u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA7C4u,0xA825u)) c++; rt->state.cpu.pc=0xA825u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA7C4u; return dd3_static_complete(rt,2u);
        }
        case 0xA7C4u: {
            dd3_static_push8(rt,(uint8_t)(0xA7C6u>>8)); dd3_static_push8(rt,(uint8_t)0xA7C6u);
            rt->state.cpu.pc=0xA8D1u; return dd3_static_complete(rt,6u);
        }
        case 0xA7C7u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA7C9u,0xA825u)) c++; rt->state.cpu.pc=0xA825u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA7C9u; return dd3_static_complete(rt,2u);
        }
        case 0xA7C9u: {
            dd3_static_push8(rt,(uint8_t)(0xA7CBu>>8)); dd3_static_push8(rt,(uint8_t)0xA7CBu);
            rt->state.cpu.pc=0xA888u; return dd3_static_complete(rt,6u);
        }
        case 0xA7CCu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA7CEu,0xA825u)) c++; rt->state.cpu.pc=0xA825u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA7CEu; return dd3_static_complete(rt,2u);
        }
        case 0xA7CEu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA7CFu; return dd3_static_complete(rt,2u);
        }
        case 0xA7CFu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA7D1u; return dd3_static_complete(rt,2u);
        }
        case 0xA7D1u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA7D2u; return dd3_static_complete(rt,2u);
        }
        case 0xA7D2u: {
            uint16_t ea=(uint16_t)(0x003Eu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7D5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Eu,ea)?1u:0u));
        }
        case 0xA7D5u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA7D7u,0xA825u)) c++; rt->state.cpu.pc=0xA825u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA7D7u; return dd3_static_complete(rt,2u);
        }
        case 0xA7D7u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7DAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA7DAu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA7DCu; return dd3_static_complete(rt,2u);
        }
        case 0xA7DCu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA7DEu,0xA825u)) c++; rt->state.cpu.pc=0xA825u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA7DEu; return dd3_static_complete(rt,2u);
        }
        case 0xA7DEu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7E1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA7E1u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA7E3u; return dd3_static_complete(rt,2u);
        }
        case 0xA7E3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA7E5u,0xA825u)) c++; rt->state.cpu.pc=0xA825u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA7E5u; return dd3_static_complete(rt,2u);
        }
        case 0xA7E5u: {
            uint16_t ea=(uint16_t)(0x0046u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7E8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0046u,ea)?1u:0u));
        }
        case 0xA7E8u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA7EAu; return dd3_static_complete(rt,2u);
        }
        case 0xA7EAu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA7ECu; return dd3_static_complete(rt,2u);
        }
        case 0xA7ECu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA7EEu,0xA825u)) c++; rt->state.cpu.pc=0xA825u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA7EEu; return dd3_static_complete(rt,2u);
        }
        case 0xA7EEu: {
            uint16_t ea=(uint16_t)(0x06C0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7F1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06C0u,ea)?1u:0u));
        }
        case 0xA7F1u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA7F3u; return dd3_static_complete(rt,2u);
        }
        case 0xA7F3u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA7F5u,0xA814u)) c++; rt->state.cpu.pc=0xA814u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA7F5u; return dd3_static_complete(rt,2u);
        }
        case 0xA7F5u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA7F7u,0xA814u)) c++; rt->state.cpu.pc=0xA814u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA7F7u; return dd3_static_complete(rt,2u);
        }
        case 0xA7F7u: {
            uint16_t ea=(uint16_t)(0x04AAu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7FAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04AAu,ea)?1u:0u));
        }
        case 0xA7FAu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA7FCu; return dd3_static_complete(rt,2u);
        }
        case 0xA7FCu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA7FEu,0xA825u)) c++; rt->state.cpu.pc=0xA825u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA7FEu; return dd3_static_complete(rt,2u);
        }
        case 0xA7FEu: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA801u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xA801u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA803u; return dd3_static_complete(rt,2u);
        }
        case 0xA803u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA805u,0xA825u)) c++; rt->state.cpu.pc=0xA825u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA805u; return dd3_static_complete(rt,2u);
        }
        case 0xA805u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA806u; return dd3_static_complete(rt,2u);
        }
        case 0xA806u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA807u; return dd3_static_complete(rt,2u);
        }
        case 0xA807u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA809u; return dd3_static_complete(rt,2u);
        }
        case 0xA809u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA80Au; return dd3_static_complete(rt,2u);
        }
        case 0xA80Au: {
            dd3_static_push8(rt,(uint8_t)(0xA80Cu>>8)); dd3_static_push8(rt,(uint8_t)0xA80Cu);
            rt->state.cpu.pc=0xB012u; return dd3_static_complete(rt,6u);
        }
        case 0xA80Du: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA80Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA80Eu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA80Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA80Fu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA811u; return dd3_static_complete(rt,2u);
        }
        case 0xA811u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA812u; return dd3_static_complete(rt,2u);
        }
        case 0xA812u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA813u; return dd3_static_complete(rt,2u);
        }
        case 0xA813u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA814u: {
            uint16_t ea=(uint16_t)((0xE1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA816u; return dd3_static_complete(rt,4u);
        }
        case 0xA816u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA817u; return dd3_static_complete(rt,2u);
        }
        case 0xA817u: {
            uint16_t ea=(uint16_t)(0x00E1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA81Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00E1u,ea)?1u:0u));
        }
        case 0xA81Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA81Cu,0xA825u)) c++; rt->state.cpu.pc=0xA825u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA81Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA81Cu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA81Eu; return dd3_static_complete(rt,3u);
        }
        case 0xA81Eu: {
            uint16_t ea=(uint16_t)((0xEBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA820u; return dd3_static_complete(rt,4u);
        }
        case 0xA820u: {
            uint16_t ea=(uint16_t)(0x00EBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA823u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00EBu,ea)?1u:0u));
        }
        case 0xA823u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA825u,0xA827u)) c++; rt->state.cpu.pc=0xA827u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA825u; return dd3_static_complete(rt,2u);
        }
        case 0xA825u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA826u; return dd3_static_complete(rt,2u);
        }
        case 0xA826u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA827u: {
            uint16_t ea=0x0034u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA82Au; return dd3_static_complete(rt,4u);
        }
        case 0xA82Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA82Cu,0xA833u)) c++; rt->state.cpu.pc=0xA833u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA82Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA82Cu: {
            uint16_t ea=(uint16_t)(0x04AAu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA82Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04AAu,ea)?1u:0u));
        }
        case 0xA82Fu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA831u; return dd3_static_complete(rt,2u);
        }
        case 0xA831u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA833u,0xA825u)) c++; rt->state.cpu.pc=0xA825u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA833u; return dd3_static_complete(rt,2u);
        }
        case 0xA833u: {
            uint16_t ea=(uint16_t)(0x06C0u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA836u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06C0u,ea)?1u:0u));
        }
        case 0xA836u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA837u; return dd3_static_complete(rt,2u);
        }
        case 0xA837u: {
            uint16_t ea=(uint16_t)(0x06BEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA83Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06BEu,ea)?1u:0u));
        }
        case 0xA83Au: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA83Cu; return dd3_static_complete(rt,3u);
        }
        case 0xA83Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA83Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA83Eu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA840u; return dd3_static_complete(rt,2u);
        }
        case 0xA840u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA842u; return dd3_static_complete(rt,3u);
        }
        case 0xA842u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA845u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xA845u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA846u; return dd3_static_complete(rt,2u);
        }
        case 0xA846u: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA849u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0xA849u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA84Bu; return dd3_static_complete(rt,3u);
        }
        case 0xA84Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA84Du; return dd3_static_complete(rt,2u);
        }
        case 0xA84Du: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA84Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA84Fu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA851u; return dd3_static_complete(rt,3u);
        }
        case 0xA851u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA853u; return dd3_static_complete(rt,3u);
        }
        case 0xA853u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA854u; return dd3_static_complete(rt,2u);
        }
        case 0xA854u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA856u; return dd3_static_complete(rt,3u);
        }
        case 0xA856u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA858u; return dd3_static_complete(rt,3u);
        }
        case 0xA858u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA85Au; return dd3_static_complete(rt,3u);
        }
        case 0xA85Au: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA85Cu; return dd3_static_complete(rt,3u);
        }
        case 0xA85Cu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA85Eu,0xA825u)) c++; rt->state.cpu.pc=0xA825u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA85Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA85Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA860u; return dd3_static_complete(rt,2u);
        }
        case 0xA860u: {
            dd3_static_write8(rt,(uint16_t)(0x0461u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA863u; return dd3_static_complete(rt,5u);
        }
        case 0xA863u: {
            dd3_static_write8(rt,(uint16_t)(0x04B2u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA866u; return dd3_static_complete(rt,5u);
        }
        case 0xA866u: {
            uint8_t v=0x0Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA868u; return dd3_static_complete(rt,2u);
        }
        case 0xA868u: {
            dd3_static_write8(rt,(uint16_t)(0x0072u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA86Bu; return dd3_static_complete(rt,5u);
        }
        case 0xA86Bu: {
            dd3_static_push8(rt,(uint8_t)(0xA86Du>>8)); dd3_static_push8(rt,(uint8_t)0xA86Du);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,6u);
        }
        case 0xA86Eu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA871u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA871u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA873u; return dd3_static_complete(rt,2u);
        }
        case 0xA873u: {
            dd3_static_write8(rt,(uint16_t)(0x04ACu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA876u; return dd3_static_complete(rt,5u);
        }
        case 0xA876u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA877u; return dd3_static_complete(rt,2u);
        }
        case 0xA877u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA888u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA889u; return dd3_static_complete(rt,2u);
        }
        case 0xA889u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA88Au; return dd3_static_complete(rt,3u);
        }
        case 0xA88Au: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA88Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA88Bu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA88Cu; return dd3_static_complete(rt,3u);
        }
        case 0xA88Cu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA88Eu; return dd3_static_complete(rt,3u);
        }
        case 0xA88Eu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA88Fu; return dd3_static_complete(rt,3u);
        }
        case 0xA88Fu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA891u; return dd3_static_complete(rt,3u);
        }
        case 0xA891u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA892u; return dd3_static_complete(rt,3u);
        }
        case 0xA892u: {
            uint16_t ea=0x00F4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA895u; return dd3_static_complete(rt,4u);
        }
        case 0xA895u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA896u; return dd3_static_complete(rt,2u);
        }
        case 0xA896u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA897u; return dd3_static_complete(rt,2u);
        }
        case 0xA897u: {
            uint16_t ea=(uint16_t)(0xB9FAu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA89Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB9FAu,ea)?1u:0u));
        }
        case 0xA89Au: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA89Cu; return dd3_static_complete(rt,3u);
        }
        case 0xA89Cu: {
            uint16_t ea=(uint16_t)(0xB9FBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA89Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB9FBu,ea)?1u:0u));
        }
        case 0xA89Fu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8A1u; return dd3_static_complete(rt,3u);
        }
        case 0xA8A1u: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8A3u; return dd3_static_complete(rt,4u);
        }
        case 0xA8A3u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA8A4u; return dd3_static_complete(rt,2u);
        }
        case 0xA8A4u: {
            uint8_t v=0x05u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA8A6u; return dd3_static_complete(rt,2u);
        }
        case 0xA8A6u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8A7u; return dd3_static_complete(rt,2u);
        }
        case 0xA8A7u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA8A8u; return dd3_static_complete(rt,2u);
        }
        case 0xA8A8u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA8AAu; return dd3_static_complete(rt,3u);
        }
        case 0xA8AAu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8ACu; return dd3_static_complete(rt,3u);
        }
        case 0xA8ACu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8AEu; return dd3_static_complete(rt,3u);
        }
        case 0xA8AEu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA8B0u; return dd3_static_complete(rt,2u);
        }
        case 0xA8B0u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8B2u; return dd3_static_complete(rt,3u);
        }
        case 0xA8B2u: {
            dd3_static_push8(rt,(uint8_t)(0xA8B4u>>8)); dd3_static_push8(rt,(uint8_t)0xA8B4u);
            rt->state.cpu.pc=0x9FB4u; return dd3_static_complete(rt,6u);
        }
        case 0xA8B5u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA8B7u; return dd3_static_complete(rt,2u);
        }
        case 0xA8B7u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA8B9u,0xA8C5u)) c++; rt->state.cpu.pc=0xA8C5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8B9u; return dd3_static_complete(rt,2u);
        }
        case 0xA8B9u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8BAu; return dd3_static_complete(rt,4u);
        }
        case 0xA8BAu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8BCu; return dd3_static_complete(rt,3u);
        }
        case 0xA8BCu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8BDu; return dd3_static_complete(rt,4u);
        }
        case 0xA8BDu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8BFu; return dd3_static_complete(rt,3u);
        }
        case 0xA8BFu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8C0u; return dd3_static_complete(rt,4u);
        }
        case 0xA8C0u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA8C1u; return dd3_static_complete(rt,2u);
        }
        case 0xA8C1u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8C2u; return dd3_static_complete(rt,4u);
        }
        case 0xA8C2u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA8C3u; return dd3_static_complete(rt,2u);
        }
        case 0xA8C3u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA8C4u; return dd3_static_complete(rt,2u);
        }
        case 0xA8C4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA8C5u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8C6u; return dd3_static_complete(rt,4u);
        }
        case 0xA8C6u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8C8u; return dd3_static_complete(rt,3u);
        }
        case 0xA8C8u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8C9u; return dd3_static_complete(rt,4u);
        }
        case 0xA8C9u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8CBu; return dd3_static_complete(rt,3u);
        }
        case 0xA8CBu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,4u);
        }
        case 0xA8CCu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA8CDu; return dd3_static_complete(rt,2u);
        }
        case 0xA8CDu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8CEu; return dd3_static_complete(rt,4u);
        }
        case 0xA8CEu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xA8CFu; return dd3_static_complete(rt,2u);
        }
        case 0xA8CFu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA8D0u; return dd3_static_complete(rt,2u);
        }
        case 0xA8D0u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA8D1u: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8D3u; return dd3_static_complete(rt,4u);
        }
        case 0xA8D3u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA8D5u; return dd3_static_complete(rt,2u);
        }
        case 0xA8D5u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA8D7u,0xA8F0u)) c++; rt->state.cpu.pc=0xA8F0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8D7u; return dd3_static_complete(rt,2u);
        }
        case 0xA8D7u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA8D8u; return dd3_static_complete(rt,2u);
        }
        case 0xA8D8u: {
            uint16_t ea=(uint16_t)(0xA878u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8DBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA878u,ea)?1u:0u));
        }
        case 0xA8DBu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA8DDu,0xA8F0u)) c++; rt->state.cpu.pc=0xA8F0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8DDu; return dd3_static_complete(rt,2u);
        }
        case 0xA8DDu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8DEu; return dd3_static_complete(rt,2u);
        }
        case 0xA8DEu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8E0u; return dd3_static_complete(rt,2u);
        }
        case 0xA8E0u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA8E1u; return dd3_static_complete(rt,2u);
        }
        case 0xA8E1u: {
            uint16_t ea=(uint16_t)(0x0076u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8E4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0076u,ea)?1u:0u));
        }
        case 0xA8E4u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA8E6u; return dd3_static_complete(rt,2u);
        }
        case 0xA8E6u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA8E8u,0xA8F0u)) c++; rt->state.cpu.pc=0xA8F0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8E8u; return dd3_static_complete(rt,2u);
        }
        case 0xA8E8u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA8E9u; return dd3_static_complete(rt,2u);
        }
        case 0xA8E9u: {
            uint16_t ea=(uint16_t)(0xA878u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8ECu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA878u,ea)?1u:0u));
        }
        case 0xA8ECu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA8EEu,0xA8F0u)) c++; rt->state.cpu.pc=0xA8F0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8EEu; return dd3_static_complete(rt,2u);
        }
        case 0xA8EEu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA8EFu; return dd3_static_complete(rt,2u);
        }
        case 0xA8EFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA8F0u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA8F1u; return dd3_static_complete(rt,2u);
        }
        case 0xA8F1u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA8F2u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8F3u; return dd3_static_complete(rt,2u);
        }
        case 0xA8F3u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8F4u; return dd3_static_complete(rt,3u);
        }
        case 0xA8F4u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8F6u; return dd3_static_complete(rt,3u);
        }
        case 0xA8F6u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA8F8u; return dd3_static_complete(rt,2u);
        }
        case 0xA8F8u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA8FAu,0xA937u)) c++; rt->state.cpu.pc=0xA937u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8FAu; return dd3_static_complete(rt,2u);
        }
        case 0xA8FAu: {
            uint8_t v=0x09u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA8FCu; return dd3_static_complete(rt,2u);
        }
        case 0xA8FCu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA8FEu,0xA937u)) c++; rt->state.cpu.pc=0xA937u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8FEu; return dd3_static_complete(rt,2u);
        }
        case 0xA8FEu: {
            uint8_t v=0x0Bu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA900u; return dd3_static_complete(rt,2u);
        }
        case 0xA900u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA902u,0xA92Cu)) c++; rt->state.cpu.pc=0xA92Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA902u; return dd3_static_complete(rt,2u);
        }
        case 0xA902u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA904u; return dd3_static_complete(rt,2u);
        }
        case 0xA904u: {
            uint16_t ea=(uint16_t)(0xA93Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA907u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA93Bu,ea)?1u:0u));
        }
        case 0xA907u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA909u,0xA937u)) c++; rt->state.cpu.pc=0xA937u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA909u; return dd3_static_complete(rt,2u);
        }
        case 0xA909u: {
            uint16_t ea=0xF4u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA90Bu; return dd3_static_complete(rt,3u);
        }
        case 0xA90Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA90Du,0xA930u)) c++; rt->state.cpu.pc=0xA930u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA90Du; return dd3_static_complete(rt,2u);
        }
        case 0xA90Du: {
            uint16_t ea=(uint16_t)(0xA93Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA910u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA93Cu,ea)?1u:0u));
        }
        case 0xA910u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA912u,0xA930u)) c++; rt->state.cpu.pc=0xA930u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA912u; return dd3_static_complete(rt,2u);
        }
        case 0xA912u: {
            uint16_t ea=(uint16_t)(0xA93Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA915u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA93Du,ea)?1u:0u));
        }
        case 0xA915u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA916u; return dd3_static_complete(rt,2u);
        }
        case 0xA916u: {
            uint16_t ea=(uint16_t)((0xB9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA918u; return dd3_static_complete(rt,4u);
        }
        case 0xA918u: {
            uint16_t ea=(uint16_t)(0xA93Eu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA91Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA93Eu,ea)?1u:0u));
        }
        case 0xA91Bu: {
            uint16_t ea=(uint16_t)((0xC3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA91Du; return dd3_static_complete(rt,4u);
        }
        case 0xA91Du: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA91Fu,0xA930u)) c++; rt->state.cpu.pc=0xA930u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA91Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA91Fu: {
            uint16_t ea=(uint16_t)(0xA93Fu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA922u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA93Fu,ea)?1u:0u));
        }
        case 0xA922u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA923u; return dd3_static_complete(rt,2u);
        }
        case 0xA923u: {
            uint16_t ea=(uint16_t)((0xB9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA925u; return dd3_static_complete(rt,4u);
        }
        case 0xA925u: {
            uint16_t ea=(uint16_t)(0xA940u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA928u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA940u,ea)?1u:0u));
        }
        case 0xA928u: {
            uint16_t ea=(uint16_t)((0xC3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA92Au; return dd3_static_complete(rt,4u);
        }
        case 0xA92Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA92Cu,0xA930u)) c++; rt->state.cpu.pc=0xA930u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA92Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA92Cu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA92Du; return dd3_static_complete(rt,4u);
        }
        case 0xA92Du: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA92Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA92Eu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA92Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA92Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA930u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA931u; return dd3_static_complete(rt,2u);
        }
        case 0xA931u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA932u; return dd3_static_complete(rt,2u);
        }
        case 0xA932u: {
            uint8_t v=0x06u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA934u; return dd3_static_complete(rt,2u);
        }
        case 0xA934u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA935u; return dd3_static_complete(rt,2u);
        }
        case 0xA935u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA937u,0xA904u)) c++; rt->state.cpu.pc=0xA904u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA937u; return dd3_static_complete(rt,2u);
        }
        case 0xA937u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA938u; return dd3_static_complete(rt,4u);
        }
        case 0xA938u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA939u; return dd3_static_complete(rt,2u);
        }
        case 0xA939u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA93Au; return dd3_static_complete(rt,2u);
        }
        case 0xA93Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA94Bu: {
            uint16_t ea=(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA94Du; return dd3_static_complete(rt,4u);
        }
        case 0xA94Du: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA94Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA94Fu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA951u; return dd3_static_complete(rt,2u);
        }
        case 0xA951u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA953u,0xA957u)) c++; rt->state.cpu.pc=0xA957u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA953u; return dd3_static_complete(rt,2u);
        }
        case 0xA953u: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA955u; return dd3_static_complete(rt,2u);
        }
        case 0xA955u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA957u,0xA9A4u)) c++; rt->state.cpu.pc=0xA9A4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA957u; return dd3_static_complete(rt,2u);
        }
        case 0xA957u: {
            uint8_t v=0xA6u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA959u; return dd3_static_complete(rt,2u);
        }
        case 0xA959u: {
            dd3_static_write8(rt,0x0029u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA95Cu; return dd3_static_complete(rt,4u);
        }
        case 0xA95Cu: {
            uint8_t v=0xA9u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA95Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA95Eu: {
            dd3_static_write8(rt,0x002Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA961u; return dd3_static_complete(rt,4u);
        }
        case 0xA961u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA964u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xA964u: {
            uint16_t ea=(uint16_t)(0x00B7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA967u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B7u,ea)?1u:0u));
        }
        case 0xA967u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA968u; return dd3_static_complete(rt,2u);
        }
        case 0xA968u: {
            uint16_t ea=0x0087u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA96Bu; return dd3_static_complete(rt,4u);
        }
        case 0xA96Bu: {
            dd3_static_write8(rt,0x002Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA96Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA96Eu: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA971u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0xA971u: {
            uint16_t ea=0x0088u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA974u; return dd3_static_complete(rt,4u);
        }
        case 0xA974u: {
            dd3_static_write8(rt,0x002Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA977u; return dd3_static_complete(rt,4u);
        }
        case 0xA977u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA979u,0xA995u)) c++; rt->state.cpu.pc=0xA995u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA979u; return dd3_static_complete(rt,2u);
        }
        case 0xA979u: {
            uint16_t ea=0x002Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA97Cu; return dd3_static_complete(rt,4u);
        }
        case 0xA97Cu: {
            uint8_t v=0x40u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA97Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA97Eu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA980u,0xA995u)) c++; rt->state.cpu.pc=0xA995u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA980u; return dd3_static_complete(rt,2u);
        }
        case 0xA980u: {
            uint8_t v=0xC0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA982u; return dd3_static_complete(rt,2u);
        }
        case 0xA982u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA984u,0xA995u)) c++; rt->state.cpu.pc=0xA995u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA984u; return dd3_static_complete(rt,2u);
        }
        case 0xA984u: {
            uint16_t ea=0x0029u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA987u; return dd3_static_complete(rt,4u);
        }
        case 0xA987u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA988u; return dd3_static_complete(rt,2u);
        }
        case 0xA988u: {
            uint8_t v=0x02u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA98Au; return dd3_static_complete(rt,2u);
        }
        case 0xA98Au: {
            dd3_static_write8(rt,0x0029u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA98Du; return dd3_static_complete(rt,4u);
        }
        case 0xA98Du: {
            uint16_t ea=0x002Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA990u; return dd3_static_complete(rt,4u);
        }
        case 0xA990u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA992u; return dd3_static_complete(rt,2u);
        }
        case 0xA992u: {
            dd3_static_write8(rt,0x002Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA995u; return dd3_static_complete(rt,4u);
        }
        case 0xA995u: {
            dd3_static_push8(rt,(uint8_t)(0xA997u>>8)); dd3_static_push8(rt,(uint8_t)0xA997u);
            rt->state.cpu.pc=0x9FB4u; return dd3_static_complete(rt,6u);
        }
        case 0xA998u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA999u; return dd3_static_complete(rt,2u);
        }
        case 0xA999u: {
            uint8_t v=0x03u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA99Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA99Bu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA99Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA99Cu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA99Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA99Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0461u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA9A1u; return dd3_static_complete(rt,5u);
        }
        case 0xA9A1u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA9A2u; return dd3_static_complete(rt,2u);
        }
        case 0xA9A2u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA9A3u; return dd3_static_complete(rt,2u);
        }
        case 0xA9A3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA9A4u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA9A5u; return dd3_static_complete(rt,2u);
        }
        case 0xA9A5u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA9AAu: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9ACu; return dd3_static_complete(rt,4u);
        }
        case 0xA9ACu: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA9AEu; return dd3_static_complete(rt,2u);
        }
        case 0xA9AEu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA9B0u,0xAA07u)) c++; rt->state.cpu.pc=0xAA07u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9B0u; return dd3_static_complete(rt,2u);
        }
        case 0xA9B0u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA9B1u; return dd3_static_complete(rt,2u);
        }
        case 0xA9B1u: {
            uint16_t ea=(uint16_t)(0xAA1Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9B4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAA1Bu,ea)?1u:0u));
        }
        case 0xA9B4u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA9B6u,0xAA07u)) c++; rt->state.cpu.pc=0xAA07u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9B6u; return dd3_static_complete(rt,2u);
        }
        case 0xA9B6u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9B8u; return dd3_static_complete(rt,4u);
        }
        case 0xA9B8u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA9BAu; return dd3_static_complete(rt,2u);
        }
        case 0xA9BAu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA9BCu; return dd3_static_complete(rt,2u);
        }
        case 0xA9BCu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA9BEu,0xAA05u)) c++; rt->state.cpu.pc=0xAA05u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9BEu; return dd3_static_complete(rt,2u);
        }
        case 0xA9BEu: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9C1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xA9C1u: {
            uint8_t v=0x70u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA9C3u; return dd3_static_complete(rt,2u);
        }
        case 0xA9C3u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA9C5u,0xA9D2u)) c++; rt->state.cpu.pc=0xA9D2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9C5u; return dd3_static_complete(rt,2u);
        }
        case 0xA9C5u: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9C7u; return dd3_static_complete(rt,4u);
        }
        case 0xA9C7u: {
            uint8_t v=0x09u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA9C9u; return dd3_static_complete(rt,2u);
        }
        case 0xA9C9u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA9CBu,0xAA07u)) c++; rt->state.cpu.pc=0xAA07u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9CBu; return dd3_static_complete(rt,2u);
        }
        case 0xA9CBu: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9CEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xA9CEu: {
            uint8_t v=0x40u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA9D0u; return dd3_static_complete(rt,2u);
        }
        case 0xA9D0u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA9D2u,0xAA07u)) c++; rt->state.cpu.pc=0xAA07u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9D2u; return dd3_static_complete(rt,2u);
        }
        case 0xA9D2u: {
            dd3_static_push8(rt,(uint8_t)(0xA9D4u>>8)); dd3_static_push8(rt,(uint8_t)0xA9D4u);
            rt->state.cpu.pc=0xAA09u; return dd3_static_complete(rt,6u);
        }
        case 0xA9D5u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA9D7u,0xA9E4u)) c++; rt->state.cpu.pc=0xA9E4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9D7u; return dd3_static_complete(rt,2u);
        }
        case 0xA9D7u: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9DAu; return dd3_static_complete(rt,4u);
        }
        case 0xA9DAu: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA9DCu; return dd3_static_complete(rt,2u);
        }
        case 0xA9DCu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA9DEu,0xA9E4u)) c++; rt->state.cpu.pc=0xA9E4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9DEu; return dd3_static_complete(rt,2u);
        }
        case 0xA9DEu: {
            uint8_t v=0x5Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9E0u; return dd3_static_complete(rt,2u);
        }
        case 0xA9E0u: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA9E2u; return dd3_static_complete(rt,4u);
        }
        case 0xA9E2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA9E4u,0xAA05u)) c++; rt->state.cpu.pc=0xAA05u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9E4u; return dd3_static_complete(rt,2u);
        }
        case 0xA9E4u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9E7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xA9E7u: {
            uint16_t ea=(uint16_t)((0x6Au+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA9E9u; return dd3_static_complete(rt,4u);
        }
        case 0xA9E9u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA9EBu,0xAA07u)) c++; rt->state.cpu.pc=0xAA07u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9EBu; return dd3_static_complete(rt,2u);
        }
        case 0xA9EBu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9EDu; return dd3_static_complete(rt,2u);
        }
        case 0xA9EDu: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA9EFu; return dd3_static_complete(rt,4u);
        }
        case 0xA9EFu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9F2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xA9F2u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA9F4u; return dd3_static_complete(rt,2u);
        }
        case 0xA9F4u: {
            dd3_static_write8(rt,(uint16_t)(0x04ACu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA9F7u; return dd3_static_complete(rt,5u);
        }
        case 0xA9F7u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9FAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xA9FAu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA9FCu,0xAA02u)) c++; rt->state.cpu.pc=0xAA02u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9FCu; return dd3_static_complete(rt,2u);
        }
        case 0xA9FCu: {
            dd3_static_push8(rt,(uint8_t)(0xA9FEu>>8)); dd3_static_push8(rt,(uint8_t)0xA9FEu);
            rt->state.cpu.pc=0xB36Cu; return dd3_static_complete(rt,6u);
        }
        case 0xA9FFu: {
            rt->state.cpu.pc=0xAA05u; return dd3_static_complete(rt,3u);
        }
        case 0xAA02u: {
            dd3_static_push8(rt,(uint8_t)(0xAA04u>>8)); dd3_static_push8(rt,(uint8_t)0xAA04u);
            rt->state.cpu.pc=0xB360u; return dd3_static_complete(rt,6u);
        }
        case 0xAA05u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xAA06u; return dd3_static_complete(rt,2u);
        }
        case 0xAA06u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAA07u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xAA08u; return dd3_static_complete(rt,2u);
        }
        case 0xAA08u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAA09u: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA0Bu; return dd3_static_complete(rt,4u);
        }
        case 0xAA0Bu: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAA0Du; return dd3_static_complete(rt,2u);
        }
        case 0xAA0Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAA0Fu,0xAA19u)) c++; rt->state.cpu.pc=0xAA19u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA0Fu; return dd3_static_complete(rt,2u);
        }
        case 0xAA0Fu: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAA11u; return dd3_static_complete(rt,2u);
        }
        case 0xAA11u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAA13u,0xAA19u)) c++; rt->state.cpu.pc=0xAA19u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA13u; return dd3_static_complete(rt,2u);
        }
        case 0xAA13u: {
            uint8_t v=0x0Du;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAA15u; return dd3_static_complete(rt,2u);
        }
        case 0xAA15u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAA17u,0xAA19u)) c++; rt->state.cpu.pc=0xAA19u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA17u; return dd3_static_complete(rt,2u);
        }
        case 0xAA17u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xAA18u; return dd3_static_complete(rt,2u);
        }
        case 0xAA18u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAA19u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xAA1Au; return dd3_static_complete(rt,2u);
        }
        case 0xAA1Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAA41u: {
            uint16_t ea=(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA43u; return dd3_static_complete(rt,4u);
        }
        case 0xAA43u: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAA45u; return dd3_static_complete(rt,2u);
        }
        case 0xAA45u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAA47u,0xAA5Eu)) c++; rt->state.cpu.pc=0xAA5Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA47u; return dd3_static_complete(rt,2u);
        }
        case 0xAA47u: {
            uint8_t v=0x7Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAA49u; return dd3_static_complete(rt,2u);
        }
        case 0xAA49u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAA4Bu,0xAA5Eu)) c++; rt->state.cpu.pc=0xAA5Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA4Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAA4Bu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA4Du; return dd3_static_complete(rt,2u);
        }
        case 0xAA4Du: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA4Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAA4Eu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAA4Fu; return dd3_static_complete(rt,2u);
        }
        case 0xAA4Fu: {
            uint16_t ea=(uint16_t)(0xAA7Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA52u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAA7Bu,ea)?1u:0u));
        }
        case 0xAA52u: {
            dd3_static_write8(rt,0x0029u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA55u; return dd3_static_complete(rt,4u);
        }
        case 0xAA55u: {
            uint16_t ea=(uint16_t)(0xAA7Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA58u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAA7Cu,ea)?1u:0u));
        }
        case 0xAA58u: {
            dd3_static_write8(rt,0x002Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA5Bu; return dd3_static_complete(rt,4u);
        }
        case 0xAA5Bu: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x0029u); return dd3_static_complete(rt,5u);
        }
        case 0xAA5Eu: {
            uint8_t v=0x7Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAA60u; return dd3_static_complete(rt,2u);
        }
        case 0xAA60u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAA62u,0xAA7Au)) c++; rt->state.cpu.pc=0xAA7Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA62u; return dd3_static_complete(rt,2u);
        }
        case 0xAA62u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA64u; return dd3_static_complete(rt,4u);
        }
        case 0xAA64u: {
            uint8_t v=0xA9u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAA66u; return dd3_static_complete(rt,2u);
        }
        case 0xAA66u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAA68u,0xAA7Au)) c++; rt->state.cpu.pc=0xAA7Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA68u; return dd3_static_complete(rt,2u);
        }
        case 0xAA68u: {
            uint8_t v=0xAAu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAA6Au; return dd3_static_complete(rt,2u);
        }
        case 0xAA6Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAA6Cu,0xAA7Au)) c++; rt->state.cpu.pc=0xAA7Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA6Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAA6Cu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA6Du; return dd3_static_complete(rt,2u);
        }
        case 0xAA6Du: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA6Fu; return dd3_static_complete(rt,2u);
        }
        case 0xAA6Fu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAA70u; return dd3_static_complete(rt,2u);
        }
        case 0xAA70u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA72u; return dd3_static_complete(rt,2u);
        }
        case 0xAA72u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xAA74u; return dd3_static_complete(rt,4u);
        }
        case 0xAA74u: {
            dd3_static_write8(rt,(uint16_t)(0x0072u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xAA77u; return dd3_static_complete(rt,5u);
        }
        case 0xAA77u: {
            dd3_static_push8(rt,(uint8_t)(0xAA79u>>8)); dd3_static_push8(rt,(uint8_t)0xAA79u);
            rt->state.cpu.pc=0xA259u; return dd3_static_complete(rt,6u);
        }
        case 0xAA7Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAA95u: {
            uint16_t ea=(uint16_t)((0x4Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA97u; return dd3_static_complete(rt,4u);
        }
        case 0xAA97u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAA99u,0xAA9Au)) c++; rt->state.cpu.pc=0xAA9Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA99u; return dd3_static_complete(rt,2u);
        }
        case 0xAA99u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAA9Au: {
            uint16_t ea=(uint16_t)((0x4Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA9Cu; return dd3_static_complete(rt,4u);
        }
        case 0xAA9Cu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA9Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAA9Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAAA0u,0xAAA3u)) c++; rt->state.cpu.pc=0xAAA3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAAA0u; return dd3_static_complete(rt,2u);
        }
        case 0xAAA0u: {
            rt->state.cpu.pc=0xAB54u; return dd3_static_complete(rt,3u);
        }
        case 0xAAA3u: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAA6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0xAAA6u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAAA8u; return dd3_static_complete(rt,2u);
        }
        case 0xAAA8u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAAAAu,0xAAB5u)) c++; rt->state.cpu.pc=0xAAB5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAAAAu; return dd3_static_complete(rt,2u);
        }
        case 0xAAAAu: {
            uint16_t ea=(uint16_t)(0x03EBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAADu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03EBu,ea)?1u:0u));
        }
        case 0xAAADu: {
            uint8_t v=0xFEu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAAAFu; return dd3_static_complete(rt,2u);
        }
        case 0xAAAFu: {
            dd3_static_write8(rt,(uint16_t)(0x03EBu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAAB2u; return dd3_static_complete(rt,5u);
        }
        case 0xAAB2u: {
            rt->state.cpu.pc=0xAB18u; return dd3_static_complete(rt,3u);
        }
        case 0xAAB5u: {
            uint16_t ea=(uint16_t)(0x03EBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAB8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03EBu,ea)?1u:0u));
        }
        case 0xAAB8u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAABAu; return dd3_static_complete(rt,2u);
        }
        case 0xAABAu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAABCu,0xAAF0u)) c++; rt->state.cpu.pc=0xAAF0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAABCu; return dd3_static_complete(rt,2u);
        }
        case 0xAABCu: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAABFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xAABFu: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAAC1u; return dd3_static_complete(rt,2u);
        }
        case 0xAAC1u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAAC3u,0xAB0Cu)) c++; rt->state.cpu.pc=0xAB0Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAAC3u; return dd3_static_complete(rt,2u);
        }
        case 0xAAC3u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAC6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xAAC6u: {
            uint16_t ea=(uint16_t)(0x0068u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAC9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0068u,ea)?1u:0u));
        }
        case 0xAAC9u: {
            uint16_t ea=(uint16_t)((0x6Au+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAACBu; return dd3_static_complete(rt,4u);
        }
        case 0xAACBu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAACDu,0xAAF0u)) c++; rt->state.cpu.pc=0xAAF0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAACDu; return dd3_static_complete(rt,2u);
        }
        case 0xAACDu: {
            uint16_t ea=(uint16_t)(0x03EBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAD0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03EBu,ea)?1u:0u));
        }
        case 0xAAD0u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAAD2u; return dd3_static_complete(rt,2u);
        }
        case 0xAAD2u: {
            dd3_static_write8(rt,(uint16_t)(0x03EBu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAAD5u; return dd3_static_complete(rt,5u);
        }
        case 0xAAD5u: {
            uint16_t ea=0x00F4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAD8u; return dd3_static_complete(rt,4u);
        }
        case 0xAAD8u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAAD9u; return dd3_static_complete(rt,2u);
        }
        case 0xAAD9u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAADAu; return dd3_static_complete(rt,2u);
        }
        case 0xAADAu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAADBu; return dd3_static_complete(rt,2u);
        }
        case 0xAADBu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAADDu; return dd3_static_complete(rt,3u);
        }
        case 0xAADDu: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAE0u; return dd3_static_complete(rt,4u);
        }
        case 0xAAE0u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAAE1u; return dd3_static_complete(rt,2u);
        }
        case 0xAAE1u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAAE3u; return dd3_static_complete(rt,2u);
        }
        case 0xAAE3u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xAAE4u; return dd3_static_complete(rt,2u);
        }
        case 0xAAE4u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xAAE6u; return dd3_static_complete(rt,3u);
        }
        case 0xAAE6u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAAE7u; return dd3_static_complete(rt,2u);
        }
        case 0xAAE7u: {
            uint16_t ea=(uint16_t)(0xAB65u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAEAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAB65u,ea)?1u:0u));
        }
        case 0xAAEAu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAAECu,0xAB0Cu)) c++; rt->state.cpu.pc=0xAB0Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAAECu; return dd3_static_complete(rt,2u);
        }
        case 0xAAECu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAEEu; return dd3_static_complete(rt,2u);
        }
        case 0xAAEEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAAF0u,0xAAF9u)) c++; rt->state.cpu.pc=0xAAF9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAAF0u; return dd3_static_complete(rt,2u);
        }
        case 0xAAF0u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAF3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xAAF3u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAAF5u; return dd3_static_complete(rt,2u);
        }
        case 0xAAF5u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAAF7u,0xAB0Cu)) c++; rt->state.cpu.pc=0xAB0Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAAF7u; return dd3_static_complete(rt,2u);
        }
        case 0xAAF7u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAF9u; return dd3_static_complete(rt,2u);
        }
        case 0xAAF9u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xAAFBu; return dd3_static_complete(rt,4u);
        }
        case 0xAAFBu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAFEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xAAFEu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAB00u; return dd3_static_complete(rt,2u);
        }
        case 0xAB00u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAB02u,0xAB0Bu)) c++; rt->state.cpu.pc=0xAB0Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAB02u; return dd3_static_complete(rt,2u);
        }
        case 0xAB02u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAB03u; return dd3_static_complete(rt,2u);
        }
        case 0xAB03u: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAB05u; return dd3_static_complete(rt,2u);
        }
        case 0xAB05u: {
            dd3_static_write8(rt,(uint16_t)(0x04ACu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAB08u; return dd3_static_complete(rt,5u);
        }
        case 0xAB08u: {
            dd3_static_push8(rt,(uint8_t)(0xAB0Au>>8)); dd3_static_push8(rt,(uint8_t)0xAB0Au);
            rt->state.cpu.pc=0xB34Fu; return dd3_static_complete(rt,6u);
        }
        case 0xAB0Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAB0Cu: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAB0Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xAB0Fu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAB11u; return dd3_static_complete(rt,2u);
        }
        case 0xAB11u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAB13u; return dd3_static_complete(rt,2u);
        }
        case 0xAB13u: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAB16u; return dd3_static_complete(rt,5u);
        }
        case 0xAB16u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAB18u,0xAB47u)) c++; rt->state.cpu.pc=0xAB47u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAB18u; return dd3_static_complete(rt,2u);
        }
        case 0xAB18u: {
            uint16_t ea=(uint16_t)(0x039Fu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAB1Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Fu,ea)?1u:0u));
        }
        case 0xAB1Bu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAB1Du,0xAB20u)) c++; rt->state.cpu.pc=0xAB20u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAB1Du; return dd3_static_complete(rt,2u);
        }
        case 0xAB1Du: {
            rt->state.cpu.pc=0xAAB5u; return dd3_static_complete(rt,3u);
        }
        case 0xAB20u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAB23u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xAB23u: {
            uint8_t v=0x30u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAB25u; return dd3_static_complete(rt,2u);
        }
        case 0xAB25u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAB27u,0xAB3Bu)) c++; rt->state.cpu.pc=0xAB3Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAB27u; return dd3_static_complete(rt,2u);
        }
        case 0xAB27u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAB2Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xAB2Au: {
            uint8_t v=0x81u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAB2Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAB2Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAB2Eu,0xAB32u)) c++; rt->state.cpu.pc=0xAB32u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAB2Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAB2Eu: {
            uint8_t v=0x7Du;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAB30u; return dd3_static_complete(rt,2u);
        }
        case 0xAB30u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAB32u; return dd3_static_complete(rt,2u);
        }
        case 0xAB32u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAB33u; return dd3_static_complete(rt,2u);
        }
        case 0xAB33u: {
            uint16_t ea=(uint16_t)(0xAB61u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAB36u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAB61u,ea)?1u:0u));
        }
        case 0xAB36u: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAB39u; return dd3_static_complete(rt,5u);
        }
        case 0xAB39u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAB3Bu,0xAB47u)) c++; rt->state.cpu.pc=0xAB47u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAB3Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAB3Bu: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAB3Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xAB3Eu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAB40u; return dd3_static_complete(rt,2u);
        }
        case 0xAB40u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAB42u,0xAB44u)) c++; rt->state.cpu.pc=0xAB44u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAB42u; return dd3_static_complete(rt,2u);
        }
        case 0xAB42u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAB44u; return dd3_static_complete(rt,2u);
        }
        case 0xAB44u: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAB47u; return dd3_static_complete(rt,5u);
        }
        case 0xAB47u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAB49u; return dd3_static_complete(rt,4u);
        }
        case 0xAB49u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAB4Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAB4Bu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAB4Du; return dd3_static_complete(rt,2u);
        }
        case 0xAB4Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAB4Fu,0xAB54u)) c++; rt->state.cpu.pc=0xAB54u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAB4Fu; return dd3_static_complete(rt,2u);
        }
        case 0xAB4Fu: {
            dd3_static_push8(rt,(uint8_t)(0xAB51u>>8)); dd3_static_push8(rt,(uint8_t)0xAB51u);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,6u);
        }
        case 0xAB52u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAB54u,0xAB54u)) c++; rt->state.cpu.pc=0xAB54u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAB54u; return dd3_static_complete(rt,2u);
        }
        case 0xAB54u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAB57u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xAB57u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAB59u,0xAB5Du)) c++; rt->state.cpu.pc=0xAB5Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAB59u; return dd3_static_complete(rt,2u);
        }
        case 0xAB59u: {
            dd3_static_push8(rt,(uint8_t)(0xAB5Bu>>8)); dd3_static_push8(rt,(uint8_t)0xAB5Bu);
            rt->state.cpu.pc=0xB365u; return dd3_static_complete(rt,6u);
        }
        case 0xAB5Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAB5Du: {
            dd3_static_push8(rt,(uint8_t)(0xAB5Fu>>8)); dd3_static_push8(rt,(uint8_t)0xAB5Fu);
            rt->state.cpu.pc=0xB371u; return dd3_static_complete(rt,6u);
        }
        case 0xAB60u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAB8Du: {
            rt->state.cpu.pc=0xAC3Fu; return dd3_static_complete(rt,3u);
        }
        case 0xAB90u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAB91u; return dd3_static_complete(rt,2u);
        }
        case 0xAB91u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAB92u; return dd3_static_complete(rt,3u);
        }
        case 0xAB92u: {
            uint16_t ea=(uint16_t)(0x03EBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAB95u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03EBu,ea)?1u:0u));
        }
        case 0xAB95u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAB97u,0xAB8Du)) c++; rt->state.cpu.pc=0xAB8Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAB97u; return dd3_static_complete(rt,2u);
        }
        case 0xAB97u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAB99u; return dd3_static_complete(rt,2u);
        }
        case 0xAB99u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAB9Bu,0xAB8Du)) c++; rt->state.cpu.pc=0xAB8Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAB9Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAB9Bu: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAB9Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xAB9Eu: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABA1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0xABA1u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xABA3u; return dd3_static_complete(rt,3u);
        }
        case 0xABA3u: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABA6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0xABA6u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xABA8u; return dd3_static_complete(rt,2u);
        }
        case 0xABA8u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xABAAu; return dd3_static_complete(rt,3u);
        }
        case 0xABAAu: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABADu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0xABADu: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xABAFu; return dd3_static_complete(rt,2u);
        }
        case 0xABAFu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xABB1u,0xAB8Du)) c++; rt->state.cpu.pc=0xAB8Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xABB1u; return dd3_static_complete(rt,2u);
        }
        case 0xABB1u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABB3u; return dd3_static_complete(rt,3u);
        }
        case 0xABB3u: {
            dd3_static_write8(rt,0x25u,rt->state.cpu.a);
            rt->state.cpu.pc=0xABB5u; return dd3_static_complete(rt,3u);
        }
        case 0xABB5u: {
            uint8_t v=0x3Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xABB7u; return dd3_static_complete(rt,2u);
        }
        case 0xABB7u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xABB9u,0xABD0u)) c++; rt->state.cpu.pc=0xABD0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xABB9u; return dd3_static_complete(rt,2u);
        }
        case 0xABB9u: {
            uint16_t ea=0x44u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABBBu; return dd3_static_complete(rt,3u);
        }
        case 0xABBBu: {
            uint8_t v=0xB6u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xABBDu; return dd3_static_complete(rt,2u);
        }
        case 0xABBDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xABBFu,0xABC5u)) c++; rt->state.cpu.pc=0xABC5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xABBFu; return dd3_static_complete(rt,2u);
        }
        case 0xABBFu: {
            uint16_t ea=0x45u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABC1u; return dd3_static_complete(rt,3u);
        }
        case 0xABC1u: {
            uint8_t v=0xB6u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xABC3u; return dd3_static_complete(rt,2u);
        }
        case 0xABC3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xABC5u,0xABC9u)) c++; rt->state.cpu.pc=0xABC9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xABC5u; return dd3_static_complete(rt,2u);
        }
        case 0xABC5u: {
            uint8_t v=0x34u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABC7u; return dd3_static_complete(rt,2u);
        }
        case 0xABC7u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xABC9u; return dd3_static_complete(rt,3u);
        }
        case 0xABC9u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABCCu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xABCCu: {
            uint8_t v=0x60u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xABCEu; return dd3_static_complete(rt,2u);
        }
        case 0xABCEu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xABD0u,0xAB8Du)) c++; rt->state.cpu.pc=0xAB8Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xABD0u; return dd3_static_complete(rt,2u);
        }
        case 0xABD0u: {
            uint16_t ea=0xF4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABD2u; return dd3_static_complete(rt,3u);
        }
        case 0xABD2u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xABD3u; return dd3_static_complete(rt,2u);
        }
        case 0xABD3u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xABD4u; return dd3_static_complete(rt,2u);
        }
        case 0xABD4u: {
            uint16_t ea=(uint16_t)(0xBA8Eu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABD7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBA8Eu,ea)?1u:0u));
        }
        case 0xABD7u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xABD9u; return dd3_static_complete(rt,3u);
        }
        case 0xABD9u: {
            uint16_t ea=(uint16_t)(0xBA8Fu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABDCu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBA8Fu,ea)?1u:0u));
        }
        case 0xABDCu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xABDEu; return dd3_static_complete(rt,3u);
        }
        case 0xABDEu: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABE0u; return dd3_static_complete(rt,4u);
        }
        case 0xABE0u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xABE2u; return dd3_static_complete(rt,2u);
        }
        case 0xABE2u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xABE4u,0xABE7u)) c++; rt->state.cpu.pc=0xABE7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xABE4u; return dd3_static_complete(rt,2u);
        }
        case 0xABE4u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xABE5u; return dd3_static_complete(rt,2u);
        }
        case 0xABE5u: {
            uint8_t v=0x09u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xABE7u; return dd3_static_complete(rt,2u);
        }
        case 0xABE7u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xABE8u; return dd3_static_complete(rt,2u);
        }
        case 0xABE8u: {
            uint8_t v=0x05u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xABEAu; return dd3_static_complete(rt,2u);
        }
        case 0xABEAu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xABEBu; return dd3_static_complete(rt,2u);
        }
        case 0xABEBu: {
            uint16_t ea=(uint16_t)(0xBA74u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABEEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBA74u,ea)?1u:0u));
        }
        case 0xABEEu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xABEFu; return dd3_static_complete(rt,2u);
        }
        case 0xABEFu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xABF1u; return dd3_static_complete(rt,3u);
        }
        case 0xABF1u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xABF3u; return dd3_static_complete(rt,3u);
        }
        case 0xABF3u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABF5u; return dd3_static_complete(rt,2u);
        }
        case 0xABF5u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xABF7u; return dd3_static_complete(rt,3u);
        }
        case 0xABF7u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xABF9u; return dd3_static_complete(rt,3u);
        }
        case 0xABF9u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABFBu; return dd3_static_complete(rt,2u);
        }
        case 0xABFBu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABFDu; return dd3_static_complete(rt,3u);
        }
        case 0xABFDu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xABFFu; return dd3_static_complete(rt,2u);
        }
        case 0xABFFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAC01u,0xAC03u)) c++; rt->state.cpu.pc=0xAC03u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC01u; return dd3_static_complete(rt,2u);
        }
        case 0xAC01u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC03u; return dd3_static_complete(rt,2u);
        }
        case 0xAC03u: {
            uint16_t ea=(uint16_t)(0xBA81u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC06u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBA81u,ea)?1u:0u));
        }
        case 0xAC06u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAC08u,0xAC3Fu)) c++; rt->state.cpu.pc=0xAC3Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC08u; return dd3_static_complete(rt,2u);
        }
        case 0xAC08u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAC0Au; return dd3_static_complete(rt,3u);
        }
        case 0xAC0Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAC0Cu,0xAC0Fu)) c++; rt->state.cpu.pc=0xAC0Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC0Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAC0Cu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAC0Du; return dd3_static_complete(rt,2u);
        }
        case 0xAC0Du: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAC0Fu,0xAC03u)) c++; rt->state.cpu.pc=0xAC03u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC0Fu; return dd3_static_complete(rt,2u);
        }
        case 0xAC0Fu: {
            uint16_t ea=(uint16_t)(0x03EBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC12u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03EBu,ea)?1u:0u));
        }
        case 0xAC12u: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC14u; return dd3_static_complete(rt,2u);
        }
        case 0xAC14u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC16u; return dd3_static_complete(rt,2u);
        }
        case 0xAC16u: {
            dd3_static_write8(rt,(uint16_t)(0x03EBu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAC19u; return dd3_static_complete(rt,5u);
        }
        case 0xAC19u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC1Au; return dd3_static_complete(rt,2u);
        }
        case 0xAC1Au: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC1Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAC1Bu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xAC1Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAC1Cu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xAC1Eu; return dd3_static_complete(rt,3u);
        }
        case 0xAC1Eu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC20u; return dd3_static_complete(rt,3u);
        }
        case 0xAC20u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC22u; return dd3_static_complete(rt,3u);
        }
        case 0xAC22u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xAC24u; return dd3_static_complete(rt,2u);
        }
        case 0xAC24u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC26u; return dd3_static_complete(rt,3u);
        }
        case 0xAC26u: {
            dd3_static_push8(rt,(uint8_t)(0xAC28u>>8)); dd3_static_push8(rt,(uint8_t)0xAC28u);
            rt->state.cpu.pc=0x9FB4u; return dd3_static_complete(rt,6u);
        }
        case 0xAC29u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAC2Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAC2Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAC2Du,0xAC3Fu)) c++; rt->state.cpu.pc=0xAC3Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC2Du; return dd3_static_complete(rt,2u);
        }
        case 0xAC2Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC2Fu; return dd3_static_complete(rt,2u);
        }
        case 0xAC2Fu: {
            dd3_static_write8(rt,(uint16_t)((0x62u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xAC31u; return dd3_static_complete(rt,4u);
        }
        case 0xAC31u: {
            uint16_t ea=0x25u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC33u; return dd3_static_complete(rt,3u);
        }
        case 0xAC33u: {
            uint8_t v=0x3Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAC35u; return dd3_static_complete(rt,2u);
        }
        case 0xAC35u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAC37u,0xAC3Bu)) c++; rt->state.cpu.pc=0xAC3Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC37u; return dd3_static_complete(rt,2u);
        }
        case 0xAC37u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC39u; return dd3_static_complete(rt,2u);
        }
        case 0xAC39u: {
            dd3_static_write8(rt,(uint16_t)((0x62u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xAC3Bu; return dd3_static_complete(rt,4u);
        }
        case 0xAC3Bu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC3Cu; return dd3_static_complete(rt,4u);
        }
        case 0xAC3Cu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAC3Du; return dd3_static_complete(rt,2u);
        }
        case 0xAC3Du: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xAC3Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAC3Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAC3Fu: {
            uint16_t ea=0xF4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC41u; return dd3_static_complete(rt,3u);
        }
        case 0xAC41u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAC43u; return dd3_static_complete(rt,2u);
        }
        case 0xAC43u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAC45u,0xAC5Du)) c++; rt->state.cpu.pc=0xAC5Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC45u; return dd3_static_complete(rt,2u);
        }
        case 0xAC45u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC48u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xAC48u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC4Au; return dd3_static_complete(rt,2u);
        }
        case 0xAC4Au: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAC4Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAC4Bu: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC4Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0xAC4Eu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC50u; return dd3_static_complete(rt,2u);
        }
        case 0xAC50u: {
            uint8_t v=0x3Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAC52u; return dd3_static_complete(rt,2u);
        }
        case 0xAC52u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAC54u,0xAC5Du)) c++; rt->state.cpu.pc=0xAC5Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC54u; return dd3_static_complete(rt,2u);
        }
        case 0xAC54u: {
            dd3_static_write8(rt,0x25u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC56u; return dd3_static_complete(rt,3u);
        }
        case 0xAC56u: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC59u; return dd3_static_complete(rt,4u);
        }
        case 0xAC59u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC5Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAC5Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAC5Du,0xAC2Du)) c++; rt->state.cpu.pc=0xAC2Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC5Du; return dd3_static_complete(rt,2u);
        }
        case 0xAC5Du: {
            uint16_t ea=(uint16_t)(0x03EBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC60u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03EBu,ea)?1u:0u));
        }
        case 0xAC60u: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC62u; return dd3_static_complete(rt,2u);
        }
        case 0xAC62u: {
            dd3_static_write8(rt,(uint16_t)(0x03EBu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAC65u; return dd3_static_complete(rt,5u);
        }
        case 0xAC65u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC66u; return dd3_static_complete(rt,4u);
        }
        case 0xAC66u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAC67u; return dd3_static_complete(rt,2u);
        }
        case 0xAC67u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xAC68u; return dd3_static_complete(rt,2u);
        }
        case 0xAC68u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAC69u: {
            uint16_t ea=(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC6Bu; return dd3_static_complete(rt,4u);
        }
        case 0xAC6Bu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC6Du; return dd3_static_complete(rt,2u);
        }
        case 0xAC6Du: {
            uint8_t v=0x09u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAC6Fu; return dd3_static_complete(rt,2u);
        }
        case 0xAC6Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAC71u,0xAC9Cu)) c++; rt->state.cpu.pc=0xAC9Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC71u; return dd3_static_complete(rt,2u);
        }
        case 0xAC71u: {
            uint8_t v=0x0Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAC73u; return dd3_static_complete(rt,2u);
        }
        case 0xAC73u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAC75u,0xAC9Cu)) c++; rt->state.cpu.pc=0xAC9Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC75u; return dd3_static_complete(rt,2u);
        }
        case 0xAC75u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC78u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xAC78u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC7Au; return dd3_static_complete(rt,2u);
        }
        case 0xAC7Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAC7Cu,0xAC9Cu)) c++; rt->state.cpu.pc=0xAC9Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC7Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAC7Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC7Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAC7Eu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC80u; return dd3_static_complete(rt,3u);
        }
        case 0xAC80u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC82u; return dd3_static_complete(rt,2u);
        }
        case 0xAC82u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC84u; return dd3_static_complete(rt,3u);
        }
        case 0xAC84u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC86u; return dd3_static_complete(rt,4u);
        }
        case 0xAC86u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC88u; return dd3_static_complete(rt,2u);
        }
        case 0xAC88u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAC8Au; return dd3_static_complete(rt,2u);
        }
        case 0xAC8Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAC8Cu,0xAC8Eu)) c++; rt->state.cpu.pc=0xAC8Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC8Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAC8Cu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xAC8Eu; return dd3_static_complete(rt,5u);
        }
        case 0xAC8Eu: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC91u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xAC91u: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC94u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0xAC94u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC96u; return dd3_static_complete(rt,3u);
        }
        case 0xAC96u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC98u; return dd3_static_complete(rt,2u);
        }
        case 0xAC98u: {
            uint8_t v=0xC0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAC9Au; return dd3_static_complete(rt,2u);
        }
        case 0xAC9Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAC9Cu,0xACA2u)) c++; rt->state.cpu.pc=0xACA2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC9Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAC9Cu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC9Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAC9Eu: {
            dd3_static_write8(rt,(uint16_t)(0x04C6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xACA1u; return dd3_static_complete(rt,5u);
        }
        case 0xACA1u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xACA2u: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xACA5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0xACA5u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xACA7u; return dd3_static_complete(rt,2u);
        }
        case 0xACA7u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xACA9u; return dd3_static_complete(rt,2u);
        }
        case 0xACA9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xACABu,0xAC9Cu)) c++; rt->state.cpu.pc=0xAC9Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xACABu; return dd3_static_complete(rt,2u);
        }
        case 0xACABu: {
            uint8_t v=0x16u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xACADu; return dd3_static_complete(rt,2u);
        }
        case 0xACADu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xACAFu,0xACB3u)) c++; rt->state.cpu.pc=0xACB3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xACAFu; return dd3_static_complete(rt,2u);
        }
        case 0xACAFu: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xACB1u; return dd3_static_complete(rt,2u);
        }
        case 0xACB1u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xACB3u,0xACC8u)) c++; rt->state.cpu.pc=0xACC8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xACB3u; return dd3_static_complete(rt,2u);
        }
        case 0xACB3u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xACB5u; return dd3_static_complete(rt,5u);
        }
        case 0xACB5u: {
            uint16_t ea=(uint16_t)(0x0054u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xACB8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0054u,ea)?1u:0u));
        }
        case 0xACB8u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xACBAu; return dd3_static_complete(rt,2u);
        }
        case 0xACBAu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xACBCu,0xACC2u)) c++; rt->state.cpu.pc=0xACC2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xACBCu; return dd3_static_complete(rt,2u);
        }
        case 0xACBCu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xACBEu; return dd3_static_complete(rt,2u);
        }
        case 0xACBEu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xACC0u; return dd3_static_complete(rt,3u);
        }
        case 0xACC0u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xACC2u,0xACC8u)) c++; rt->state.cpu.pc=0xACC8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xACC2u; return dd3_static_complete(rt,2u);
        }
        case 0xACC2u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xACC4u; return dd3_static_complete(rt,3u);
        }
        case 0xACC4u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xACC6u,0xACC8u)) c++; rt->state.cpu.pc=0xACC8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xACC6u; return dd3_static_complete(rt,2u);
        }
        case 0xACC6u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xACC8u; return dd3_static_complete(rt,5u);
        }
        case 0xACC8u: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xACCAu; return dd3_static_complete(rt,4u);
        }
        case 0xACCAu: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xACCCu; return dd3_static_complete(rt,2u);
        }
        case 0xACCCu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xACCEu,0xACD1u)) c++; rt->state.cpu.pc=0xACD1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xACCEu; return dd3_static_complete(rt,2u);
        }
        case 0xACCEu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xACCFu; return dd3_static_complete(rt,2u);
        }
        case 0xACCFu: {
            uint8_t v=0x09u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xACD1u; return dd3_static_complete(rt,2u);
        }
        case 0xACD1u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xACD2u; return dd3_static_complete(rt,2u);
        }
        case 0xACD2u: {
            uint8_t v=0x05u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xACD4u; return dd3_static_complete(rt,2u);
        }
        case 0xACD4u: {
            dd3_static_write8(rt,0x1Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xACD6u; return dd3_static_complete(rt,3u);
        }
        case 0xACD6u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xACD7u; return dd3_static_complete(rt,2u);
        }
        case 0xACD7u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xACD8u; return dd3_static_complete(rt,2u);
        }
        case 0xACD8u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xACDAu; return dd3_static_complete(rt,3u);
        }
        case 0xACDAu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xACDCu,0xAD19u)) c++; rt->state.cpu.pc=0xAD19u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xACDCu; return dd3_static_complete(rt,2u);
        }
        case 0xACDCu: {
            uint16_t ea=(uint16_t)(0x0483u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xACDFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0483u,ea)?1u:0u));
        }
        case 0xACDFu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xACE1u,0xAD0Cu)) c++; rt->state.cpu.pc=0xAD0Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xACE1u; return dd3_static_complete(rt,2u);
        }
        case 0xACE1u: {
            uint16_t ea=0x1Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xACE3u; return dd3_static_complete(rt,3u);
        }
        case 0xACE3u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xACE4u; return dd3_static_complete(rt,2u);
        }
        case 0xACE4u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xACE5u; return dd3_static_complete(rt,2u);
        }
        case 0xACE5u: {
            uint16_t ea=(uint16_t)(0xBE5Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xACE8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBE5Bu,ea)?1u:0u));
        }
        case 0xACE8u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xACEBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xACEBu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xACEDu,0xAD0Cu)) c++; rt->state.cpu.pc=0xAD0Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xACEDu; return dd3_static_complete(rt,2u);
        }
        case 0xACEDu: {
            uint16_t ea=(uint16_t)(0xBE5Au+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xACF0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBE5Au,ea)?1u:0u));
        }
        case 0xACF0u: {
            dd3_static_write8(rt,(uint16_t)(0x04C6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xACF3u; return dd3_static_complete(rt,5u);
        }
        case 0xACF3u: {
            uint8_t v=0x43u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xACF5u; return dd3_static_complete(rt,2u);
        }
        case 0xACF5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xACF7u,0xAD0Bu)) c++; rt->state.cpu.pc=0xAD0Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xACF7u; return dd3_static_complete(rt,2u);
        }
        case 0xACF7u: {
            uint8_t v=0x5Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xACF9u; return dd3_static_complete(rt,2u);
        }
        case 0xACF9u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xACFBu; return dd3_static_complete(rt,3u);
        }
        case 0xACFBu: {
            uint8_t v=0xADu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xACFDu; return dd3_static_complete(rt,2u);
        }
        case 0xACFDu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xACFFu; return dd3_static_complete(rt,3u);
        }
        case 0xACFFu: {
            dd3_static_push8(rt,(uint8_t)(0xAD01u>>8)); dd3_static_push8(rt,(uint8_t)0xAD01u);
            rt->state.cpu.pc=0x9FB4u; return dd3_static_complete(rt,6u);
        }
        case 0xAD02u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAD04u; return dd3_static_complete(rt,2u);
        }
        case 0xAD04u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAD06u,0xAD0Bu)) c++; rt->state.cpu.pc=0xAD0Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAD06u; return dd3_static_complete(rt,2u);
        }
        case 0xAD06u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD08u; return dd3_static_complete(rt,2u);
        }
        case 0xAD08u: {
            dd3_static_write8(rt,(uint16_t)(0x04C6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAD0Bu; return dd3_static_complete(rt,5u);
        }
        case 0xAD0Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAD0Cu: {
            uint16_t ea=(uint16_t)(0xBB92u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD0Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBB92u,ea)?1u:0u));
        }
        case 0xAD0Fu: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAD11u; return dd3_static_complete(rt,3u);
        }
        case 0xAD11u: {
            uint16_t ea=(uint16_t)(0xBB93u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD14u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBB93u,ea)?1u:0u));
        }
        case 0xAD14u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAD16u; return dd3_static_complete(rt,3u);
        }
        case 0xAD16u: {
            rt->state.cpu.pc=0xAD23u; return dd3_static_complete(rt,3u);
        }
        case 0xAD19u: {
            uint16_t ea=(uint16_t)(0xBBACu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD1Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBBACu,ea)?1u:0u));
        }
        case 0xAD1Cu: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAD1Eu; return dd3_static_complete(rt,3u);
        }
        case 0xAD1Eu: {
            uint16_t ea=(uint16_t)(0xBBADu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD21u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBBADu,ea)?1u:0u));
        }
        case 0xAD21u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAD23u; return dd3_static_complete(rt,3u);
        }
        case 0xAD23u: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD25u; return dd3_static_complete(rt,3u);
        }
        case 0xAD25u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xAD26u; return dd3_static_complete(rt,2u);
        }
        case 0xAD26u: {
            uint8_t v=0x06u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xAD28u; return dd3_static_complete(rt,2u);
        }
        case 0xAD28u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAD2Au; return dd3_static_complete(rt,3u);
        }
        case 0xAD2Au: {
            uint16_t ea=0x30u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD2Cu; return dd3_static_complete(rt,3u);
        }
        case 0xAD2Cu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xAD2Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAD2Eu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xAD30u; return dd3_static_complete(rt,3u);
        }
        case 0xAD30u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD32u; return dd3_static_complete(rt,3u);
        }
        case 0xAD32u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAD33u; return dd3_static_complete(rt,2u);
        }
        case 0xAD33u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAD34u; return dd3_static_complete(rt,2u);
        }
        case 0xAD34u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xAD36u; return dd3_static_complete(rt,5u);
        }
        case 0xAD36u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xAD37u; return dd3_static_complete(rt,2u);
        }
        case 0xAD37u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xAD39u; return dd3_static_complete(rt,3u);
        }
        case 0xAD39u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xAD3Au; return dd3_static_complete(rt,2u);
        }
        case 0xAD3Au: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xAD3Cu; return dd3_static_complete(rt,3u);
        }
        case 0xAD3Cu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAD3Eu; return dd3_static_complete(rt,3u);
        }
        case 0xAD3Eu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD40u; return dd3_static_complete(rt,3u);
        }
        case 0xAD40u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xAD42u; return dd3_static_complete(rt,2u);
        }
        case 0xAD42u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xAD44u; return dd3_static_complete(rt,3u);
        }
        case 0xAD44u: {
            dd3_static_push8(rt,(uint8_t)(0xAD46u>>8)); dd3_static_push8(rt,(uint8_t)0xAD46u);
            rt->state.cpu.pc=0x9FB4u; return dd3_static_complete(rt,6u);
        }
        case 0xAD47u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAD48u; return dd3_static_complete(rt,2u);
        }
        case 0xAD48u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD4Au; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0xAD4Au: {
            dd3_static_write8(rt,(uint16_t)(0x04C6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAD4Du; return dd3_static_complete(rt,5u);
        }
        case 0xAD4Du: {
            uint8_t v=0x3Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAD4Fu; return dd3_static_complete(rt,2u);
        }
        case 0xAD4Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAD51u,0xAD5Bu)) c++; rt->state.cpu.pc=0xAD5Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAD51u; return dd3_static_complete(rt,2u);
        }
        case 0xAD51u: {
            dd3_static_push8(rt,(uint8_t)(0xAD53u>>8)); dd3_static_push8(rt,(uint8_t)0xAD53u);
            rt->state.cpu.pc=0xA8F2u; return dd3_static_complete(rt,6u);
        }
        case 0xAD54u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAD56u,0xAD5Bu)) c++; rt->state.cpu.pc=0xAD5Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAD56u; return dd3_static_complete(rt,2u);
        }
        case 0xAD56u: {
            uint8_t v=0x41u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD58u; return dd3_static_complete(rt,2u);
        }
        case 0xAD58u: {
            dd3_static_write8(rt,(uint16_t)(0x04C6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAD5Bu; return dd3_static_complete(rt,5u);
        }
        case 0xAD5Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAD5Eu: {
            uint16_t ea=0x049Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD61u; return dd3_static_complete(rt,4u);
        }
        case 0xAD61u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAD63u,0xADD2u)) c++; rt->state.cpu.pc=0xADD2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAD63u; return dd3_static_complete(rt,2u);
        }
        case 0xAD63u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD66u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xAD66u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAD68u; return dd3_static_complete(rt,2u);
        }
        case 0xAD68u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAD6Au,0xADD2u)) c++; rt->state.cpu.pc=0xADD2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAD6Au; return dd3_static_complete(rt,2u);
        }
        case 0xAD6Au: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD6Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xAD6Du: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD70u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0xAD70u: {
            uint16_t ea=(uint16_t)(0x0384u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAD73u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0384u,ea)?1u:0u));
        }
        case 0xAD73u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAD75u,0xADD2u)) c++; rt->state.cpu.pc=0xADD2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAD75u; return dd3_static_complete(rt,2u);
        }
        case 0xAD75u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD77u; return dd3_static_complete(rt,2u);
        }
        case 0xAD77u: {
            uint16_t ea=(uint16_t)(0x04C6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD7Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04C6u,ea)?1u:0u));
        }
        case 0xAD7Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAD7Cu,0xADD2u)) c++; rt->state.cpu.pc=0xADD2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAD7Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAD7Cu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAD7Eu; return dd3_static_complete(rt,3u);
        }
        case 0xAD7Eu: {
            uint16_t ea=(uint16_t)(0xBE74u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD81u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBE74u,ea)?1u:0u));
        }
        case 0xAD81u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAD83u,0xADD2u)) c++; rt->state.cpu.pc=0xADD2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAD83u; return dd3_static_complete(rt,2u);
        }
        case 0xAD83u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAD85u; return dd3_static_complete(rt,3u);
        }
        case 0xAD85u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAD87u,0xADCCu)) c++; rt->state.cpu.pc=0xADCCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAD87u; return dd3_static_complete(rt,2u);
        }
        case 0xAD87u: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD8Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0xAD8Au: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAD8Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAD8Cu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAD8Eu,0xADD2u)) c++; rt->state.cpu.pc=0xADD2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAD8Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAD8Eu: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD91u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xAD91u: {
            uint16_t ea=(uint16_t)(0xBE75u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAD94u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBE75u,ea)?1u:0u));
        }
        case 0xAD94u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAD96u,0xADD2u)) c++; rt->state.cpu.pc=0xADD2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAD96u; return dd3_static_complete(rt,2u);
        }
        case 0xAD96u: {
            uint16_t ea=(uint16_t)(0xBE76u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAD99u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBE76u,ea)?1u:0u));
        }
        case 0xAD99u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAD9Bu,0xADD2u)) c++; rt->state.cpu.pc=0xADD2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAD9Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAD9Bu: {
            uint16_t ea=(uint16_t)(0x04C6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAD9Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04C6u,ea)?1u:0u));
        }
        case 0xAD9Eu: {
            uint8_t v=0x42u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xADA0u; return dd3_static_complete(rt,2u);
        }
        case 0xADA0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xADA2u,0xADA9u)) c++; rt->state.cpu.pc=0xADA9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xADA2u; return dd3_static_complete(rt,2u);
        }
        case 0xADA2u: {
            uint8_t v=0x80u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xADA4u; return dd3_static_complete(rt,2u);
        }
        case 0xADA4u: {
            dd3_static_push8(rt,(uint8_t)(0xADA6u>>8)); dd3_static_push8(rt,(uint8_t)0xADA6u);
            rt->state.cpu.pc=0xA624u; return dd3_static_complete(rt,6u);
        }
        case 0xADA7u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xADA9u,0xADD2u)) c++; rt->state.cpu.pc=0xADD2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xADA9u; return dd3_static_complete(rt,2u);
        }
        case 0xADA9u: {
            uint16_t ea=(uint16_t)(0x03EBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xADACu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03EBu,ea)?1u:0u));
        }
        case 0xADACu: {
            uint8_t v=0xFEu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xADAEu; return dd3_static_complete(rt,2u);
        }
        case 0xADAEu: {
            dd3_static_write8(rt,(uint16_t)(0x03EBu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xADB1u; return dd3_static_complete(rt,5u);
        }
        case 0xADB1u: {
            uint16_t ea=(uint16_t)(0x04C6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xADB4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04C6u,ea)?1u:0u));
        }
        case 0xADB4u: {
            uint8_t v=0x79u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xADB6u; return dd3_static_complete(rt,2u);
        }
        case 0xADB6u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xADB8u,0xADC3u)) c++; rt->state.cpu.pc=0xADC3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xADB8u; return dd3_static_complete(rt,2u);
        }
        case 0xADB8u: {
            uint16_t ea=0x47u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xADBAu; return dd3_static_complete(rt,3u);
        }
        case 0xADBAu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xADBCu; return dd3_static_complete(rt,2u);
        }
        case 0xADBCu: {
            uint8_t v=0x61u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xADBEu; return dd3_static_complete(rt,2u);
        }
        case 0xADBEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xADC0u,0xADCCu)) c++; rt->state.cpu.pc=0xADCCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xADC0u; return dd3_static_complete(rt,2u);
        }
        case 0xADC0u: {
            uint16_t ea=(uint16_t)(0x04C6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xADC3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04C6u,ea)?1u:0u));
        }
        case 0xADC3u: {
            dd3_static_push8(rt,(uint8_t)(0xADC5u>>8)); dd3_static_push8(rt,(uint8_t)0xADC5u);
            rt->state.cpu.pc=0xB8A6u; return dd3_static_complete(rt,6u);
        }
        case 0xADC6u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xADC8u,0xADCCu)) c++; rt->state.cpu.pc=0xADCCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xADC8u; return dd3_static_complete(rt,2u);
        }
        case 0xADC8u: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xADCAu; return dd3_static_complete(rt,4u);
        }
        case 0xADCAu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xADCCu,0xADEEu)) c++; rt->state.cpu.pc=0xADEEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xADCCu; return dd3_static_complete(rt,2u);
        }
        case 0xADCCu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xADCDu; return dd3_static_complete(rt,2u);
        }
        case 0xADCDu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xADCEu; return dd3_static_complete(rt,2u);
        }
        case 0xADCEu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xADCFu; return dd3_static_complete(rt,2u);
        }
        case 0xADCFu: {
            rt->state.cpu.pc=0xAD7Eu; return dd3_static_complete(rt,3u);
        }
        case 0xADD2u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xADD5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xADD5u: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xADD8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0xADD8u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xADDAu; return dd3_static_complete(rt,2u);
        }
        case 0xADDAu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xADDCu; return dd3_static_complete(rt,2u);
        }
        case 0xADDCu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xADDEu,0xADEEu)) c++; rt->state.cpu.pc=0xADEEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xADDEu; return dd3_static_complete(rt,2u);
        }
        case 0xADDEu: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xADE0u; return dd3_static_complete(rt,4u);
        }
        case 0xADE0u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xADE2u; return dd3_static_complete(rt,2u);
        }
        case 0xADE2u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xADE4u; return dd3_static_complete(rt,2u);
        }
        case 0xADE4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xADE6u,0xADEEu)) c++; rt->state.cpu.pc=0xADEEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xADE6u; return dd3_static_complete(rt,2u);
        }
        case 0xADE6u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xADE8u; return dd3_static_complete(rt,2u);
        }
        case 0xADE8u: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xADEAu; return dd3_static_complete(rt,4u);
        }
        case 0xADEAu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xADECu; return dd3_static_complete(rt,2u);
        }
        case 0xADECu: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xADEEu; return dd3_static_complete(rt,4u);
        }
        case 0xADEEu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xADEFu; return dd3_static_complete(rt,2u);
        }
        case 0xADEFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xADF0u: {
            uint16_t ea=(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xADF2u; return dd3_static_complete(rt,4u);
        }
        case 0xADF2u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xADF4u,0xAE12u)) c++; rt->state.cpu.pc=0xAE12u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xADF4u; return dd3_static_complete(rt,2u);
        }
        case 0xADF4u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xADF6u; return dd3_static_complete(rt,2u);
        }
        case 0xADF6u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xADF8u; return dd3_static_complete(rt,4u);
        }
        case 0xADF8u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xADFBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xADFBu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xADFDu,0xAE03u)) c++; rt->state.cpu.pc=0xAE03u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xADFDu; return dd3_static_complete(rt,2u);
        }
        case 0xADFDu: {
            dd3_static_push8(rt,(uint8_t)(0xADFFu>>8)); dd3_static_push8(rt,(uint8_t)0xADFFu);
            rt->state.cpu.pc=0xB378u; return dd3_static_complete(rt,6u);
        }
        case 0xAE00u: {
            rt->state.cpu.pc=0xAE06u; return dd3_static_complete(rt,3u);
        }
        case 0xAE03u: {
            dd3_static_push8(rt,(uint8_t)(0xAE05u>>8)); dd3_static_push8(rt,(uint8_t)0xAE05u);
            rt->state.cpu.pc=0xB384u; return dd3_static_complete(rt,6u);
        }
        case 0xAE06u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE09u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xAE09u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAE0Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAE0Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAE0Du,0xAE3Du)) c++; rt->state.cpu.pc=0xAE3Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE0Du; return dd3_static_complete(rt,2u);
        }
        case 0xAE0Du: {
            dd3_static_push8(rt,(uint8_t)(0xAE0Fu>>8)); dd3_static_push8(rt,(uint8_t)0xAE0Fu);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,6u);
        }
        case 0xAE10u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAE12u,0xAE3Du)) c++; rt->state.cpu.pc=0xAE3Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE12u; return dd3_static_complete(rt,2u);
        }
        case 0xAE12u: {
            uint16_t ea=(uint16_t)(0x039Fu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE15u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Fu,ea)?1u:0u));
        }
        case 0xAE15u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAE17u,0xAE1Au)) c++; rt->state.cpu.pc=0xAE1Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE17u; return dd3_static_complete(rt,2u);
        }
        case 0xAE17u: {
            dd3_static_push8(rt,(uint8_t)(0xAE19u>>8)); dd3_static_push8(rt,(uint8_t)0xAE19u);
            rt->state.cpu.pc=0xB346u; return dd3_static_complete(rt,6u);
        }
        case 0xAE1Au: {
            uint16_t ea=(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE1Cu; return dd3_static_complete(rt,4u);
        }
        case 0xAE1Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAE1Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAE1Eu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAE20u; return dd3_static_complete(rt,2u);
        }
        case 0xAE20u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAE22u,0xAE2Bu)) c++; rt->state.cpu.pc=0xAE2Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE22u; return dd3_static_complete(rt,2u);
        }
        case 0xAE22u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE25u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xAE25u: {
            uint8_t v=0x50u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAE27u; return dd3_static_complete(rt,2u);
        }
        case 0xAE27u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAE29u,0xAE39u)) c++; rt->state.cpu.pc=0xAE39u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE29u; return dd3_static_complete(rt,2u);
        }
        case 0xAE29u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAE2Bu,0xAE3Du)) c++; rt->state.cpu.pc=0xAE3Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE2Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAE2Bu: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE2Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0xAE2Eu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAE30u; return dd3_static_complete(rt,2u);
        }
        case 0xAE30u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAE32u,0xAE39u)) c++; rt->state.cpu.pc=0xAE39u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE32u; return dd3_static_complete(rt,2u);
        }
        case 0xAE32u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE35u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xAE35u: {
            uint8_t v=0x40u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAE37u; return dd3_static_complete(rt,2u);
        }
        case 0xAE37u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAE39u,0xAE3Du)) c++; rt->state.cpu.pc=0xAE3Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE39u; return dd3_static_complete(rt,2u);
        }
        case 0xAE39u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE3Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAE3Bu: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xAE3Du; return dd3_static_complete(rt,4u);
        }
        case 0xAE3Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAEE4u: {
            uint16_t ea=(uint16_t)((0x4Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEE6u; return dd3_static_complete(rt,4u);
        }
        case 0xAEE6u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAEE8u,0xAEE9u)) c++; rt->state.cpu.pc=0xAEE9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAEE8u; return dd3_static_complete(rt,2u);
        }
        case 0xAEE8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAEE9u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEEBu; return dd3_static_complete(rt,3u);
        }
        case 0xAEEBu: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAEEDu; return dd3_static_complete(rt,2u);
        }
        case 0xAEEDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAEEFu,0xAEF3u)) c++; rt->state.cpu.pc=0xAEF3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAEEFu; return dd3_static_complete(rt,2u);
        }
        case 0xAEEFu: {
            uint8_t v=0x0Bu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAEF1u; return dd3_static_complete(rt,2u);
        }
        case 0xAEF1u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAEF3u,0xAEF8u)) c++; rt->state.cpu.pc=0xAEF8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAEF3u; return dd3_static_complete(rt,2u);
        }
        case 0xAEF3u: {
            uint8_t v=0x52u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEF5u; return dd3_static_complete(rt,2u);
        }
        case 0xAEF5u: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xAEF7u; return dd3_static_complete(rt,4u);
        }
        case 0xAEF7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAEF8u: {
            uint16_t ea=(uint16_t)(0x04B2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEFBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B2u,ea)?1u:0u));
        }
        case 0xAEFBu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAEFCu; return dd3_static_complete(rt,2u);
        }
        case 0xAEFCu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAEFDu; return dd3_static_complete(rt,2u);
        }
        case 0xAEFDu: {
            uint16_t ea=(uint16_t)(0xAF0Au+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF00u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAF0Au,ea)?1u:0u));
        }
        case 0xAF00u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF02u; return dd3_static_complete(rt,3u);
        }
        case 0xAF02u: {
            uint16_t ea=(uint16_t)(0xAF0Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF05u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAF0Bu,ea)?1u:0u));
        }
        case 0xAF05u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF07u; return dd3_static_complete(rt,3u);
        }
        case 0xAF07u: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x0029u); return dd3_static_complete(rt,5u);
        }
        case 0xAF14u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF16u; return dd3_static_complete(rt,2u);
        }
        case 0xAF16u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF19u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xAF19u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF1Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAF1Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAF1Du,0xAF1Fu)) c++; rt->state.cpu.pc=0xAF1Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF1Du; return dd3_static_complete(rt,2u);
        }
        case 0xAF1Du: {
            uint8_t v=0x80u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF1Fu; return dd3_static_complete(rt,2u);
        }
        case 0xAF1Fu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF20u; return dd3_static_complete(rt,2u);
        }
        case 0xAF20u: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAF23u; return dd3_static_complete(rt,5u);
        }
        case 0xAF23u: {
            dd3_static_push8(rt,(uint8_t)(0xAF25u>>8)); dd3_static_push8(rt,(uint8_t)0xAF25u);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,6u);
        }
        case 0xAF26u: {
            uint16_t ea=(uint16_t)(0x04B2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xAF29u; return dd3_static_complete(rt,7u);
        }
        case 0xAF29u: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF2Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0xAF2Cu: {
            uint8_t v=0x0Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAF2Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAF2Eu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAF30u,0xAF4Eu)) c++; rt->state.cpu.pc=0xAF4Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF30u; return dd3_static_complete(rt,2u);
        }
        case 0xAF30u: {
            uint16_t ea=(uint16_t)(0x039Fu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF33u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Fu,ea)?1u:0u));
        }
        case 0xAF33u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAF35u,0xAF4Du)) c++; rt->state.cpu.pc=0xAF4Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF35u; return dd3_static_complete(rt,2u);
        }
        case 0xAF35u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF37u; return dd3_static_complete(rt,3u);
        }
        case 0xAF37u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF3Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xAF3Au: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF3Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAF3Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAF3Eu,0xAF6Du)) c++; rt->state.cpu.pc=0xAF6Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF3Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAF3Eu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF40u; return dd3_static_complete(rt,3u);
        }
        case 0xAF40u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF42u; return dd3_static_complete(rt,2u);
        }
        case 0xAF42u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAF44u; return dd3_static_complete(rt,2u);
        }
        case 0xAF44u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAF46u,0xAF4Du)) c++; rt->state.cpu.pc=0xAF4Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF46u; return dd3_static_complete(rt,2u);
        }
        case 0xAF46u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF48u; return dd3_static_complete(rt,2u);
        }
        case 0xAF48u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xAF4Au; return dd3_static_complete(rt,4u);
        }
        case 0xAF4Au: {
            dd3_static_push8(rt,(uint8_t)(0xAF4Cu>>8)); dd3_static_push8(rt,(uint8_t)0xAF4Cu);
            rt->state.cpu.pc=0xB346u; return dd3_static_complete(rt,6u);
        }
        case 0xAF4Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAF4Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF50u; return dd3_static_complete(rt,2u);
        }
        case 0xAF50u: {
            dd3_static_write8(rt,(uint16_t)(0x04BAu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAF53u; return dd3_static_complete(rt,5u);
        }
        case 0xAF53u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF56u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xAF56u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAF58u,0xAF62u)) c++; rt->state.cpu.pc=0xAF62u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF58u; return dd3_static_complete(rt,2u);
        }
        case 0xAF58u: {
            dd3_static_push8(rt,(uint8_t)(0xAF5Au>>8)); dd3_static_push8(rt,(uint8_t)0xAF5Au);
            rt->state.cpu.pc=0xB36Cu; return dd3_static_complete(rt,6u);
        }
        case 0xAF5Bu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF5Du; return dd3_static_complete(rt,2u);
        }
        case 0xAF5Du: {
            dd3_static_write8(rt,(uint16_t)(0x04BAu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAF60u; return dd3_static_complete(rt,5u);
        }
        case 0xAF60u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAF62u,0xAF65u)) c++; rt->state.cpu.pc=0xAF65u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF62u; return dd3_static_complete(rt,2u);
        }
        case 0xAF62u: {
            dd3_static_push8(rt,(uint8_t)(0xAF64u>>8)); dd3_static_push8(rt,(uint8_t)0xAF64u);
            rt->state.cpu.pc=0xB360u; return dd3_static_complete(rt,6u);
        }
        case 0xAF65u: {
            uint16_t ea=(uint16_t)(0x04B2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xAF68u; return dd3_static_complete(rt,7u);
        }
        case 0xAF68u: {
            uint16_t ea=(uint16_t)(0x039Fu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF6Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Fu,ea)?1u:0u));
        }
        case 0xAF6Bu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAF6Du,0xAF81u)) c++; rt->state.cpu.pc=0xAF81u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF6Du; return dd3_static_complete(rt,2u);
        }
        case 0xAF6Du: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF70u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xAF70u: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF72u; return dd3_static_complete(rt,2u);
        }
        case 0xAF72u: {
            dd3_static_write8(rt,(uint16_t)(0x04ACu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAF75u; return dd3_static_complete(rt,5u);
        }
        case 0xAF75u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF77u; return dd3_static_complete(rt,2u);
        }
        case 0xAF77u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xAF79u; return dd3_static_complete(rt,4u);
        }
        case 0xAF79u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAF81u: {
            uint16_t ea=(uint16_t)(0x04BAu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF84u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04BAu,ea)?1u:0u));
        }
        case 0xAF84u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAF86u,0xAF8Du)) c++; rt->state.cpu.pc=0xAF8Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF86u; return dd3_static_complete(rt,2u);
        }
        case 0xAF86u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF89u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xAF89u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAF8Bu,0xAF92u)) c++; rt->state.cpu.pc=0xAF92u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF8Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAF8Bu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAF8Du,0xAF9Bu)) c++; rt->state.cpu.pc=0xAF9Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF8Du; return dd3_static_complete(rt,2u);
        }
        case 0xAF8Du: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF90u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xAF90u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAF92u,0xAF9Bu)) c++; rt->state.cpu.pc=0xAF9Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF92u; return dd3_static_complete(rt,2u);
        }
        case 0xAF92u: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF95u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0xAF95u: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAF97u; return dd3_static_complete(rt,2u);
        }
        case 0xAF97u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAF99u,0xAFF8u)) c++; rt->state.cpu.pc=0xAFF8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF99u; return dd3_static_complete(rt,2u);
        }
        case 0xAF99u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAF9Bu,0xAFA6u)) c++; rt->state.cpu.pc=0xAFA6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF9Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAF9Bu: {
            uint16_t ea=(uint16_t)((0x6Au+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF9Du; return dd3_static_complete(rt,4u);
        }
        case 0xAF9Du: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF9Fu; return dd3_static_complete(rt,2u);
        }
        case 0xAF9Fu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAFA1u; return dd3_static_complete(rt,2u);
        }
        case 0xAFA1u: {
            dd3_static_write8(rt,(uint16_t)((0x6Au+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xAFA3u; return dd3_static_complete(rt,4u);
        }
        case 0xAFA3u: {
            uint16_t ea=(uint16_t)(0x04B2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xAFA6u; return dd3_static_complete(rt,7u);
        }
        case 0xAFA6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAFA7u: {
            uint16_t ea=(uint16_t)(0x039Fu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFAAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Fu,ea)?1u:0u));
        }
        case 0xAFAAu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAFACu,0xAFBBu)) c++; rt->state.cpu.pc=0xAFBBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAFACu; return dd3_static_complete(rt,2u);
        }
        case 0xAFACu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFAFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xAFAFu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAFB1u; return dd3_static_complete(rt,2u);
        }
        case 0xAFB1u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAFB3u,0xAF6Du)) c++; rt->state.cpu.pc=0xAF6Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAFB3u; return dd3_static_complete(rt,2u);
        }
        case 0xAFB3u: {
            dd3_static_push8(rt,(uint8_t)(0xAFB5u>>8)); dd3_static_push8(rt,(uint8_t)0xAFB5u);
            rt->state.cpu.pc=0xB346u; return dd3_static_complete(rt,6u);
        }
        case 0xAFB6u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFB8u; return dd3_static_complete(rt,2u);
        }
        case 0xAFB8u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xAFBAu; return dd3_static_complete(rt,4u);
        }
        case 0xAFBAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAFBBu: {
            uint16_t ea=(uint16_t)(0x0461u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFBEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0461u,ea)?1u:0u));
        }
        case 0xAFBEu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAFBFu; return dd3_static_complete(rt,2u);
        }
        case 0xAFBFu: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFC2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xAFC2u: {
            uint16_t ea=(uint16_t)(0xB00Fu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAFC5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB00Fu,ea)?1u:0u));
        }
        case 0xAFC5u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAFC7u,0xB00Eu)) c++; rt->state.cpu.pc=0xB00Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAFC7u; return dd3_static_complete(rt,2u);
        }
        case 0xAFC7u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFC9u; return dd3_static_complete(rt,2u);
        }
        case 0xAFC9u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFCCu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xAFCCu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAFCEu; return dd3_static_complete(rt,2u);
        }
        case 0xAFCEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAFD0u,0xAFD2u)) c++; rt->state.cpu.pc=0xAFD2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAFD0u; return dd3_static_complete(rt,2u);
        }
        case 0xAFD0u: {
            uint8_t v=0x80u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFD2u; return dd3_static_complete(rt,2u);
        }
        case 0xAFD2u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAFD3u; return dd3_static_complete(rt,2u);
        }
        case 0xAFD3u: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAFD6u; return dd3_static_complete(rt,5u);
        }
        case 0xAFD6u: {
            uint16_t ea=(uint16_t)(0x04B2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xAFD9u; return dd3_static_complete(rt,7u);
        }
        case 0xAFD9u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAFDAu: {
            uint16_t ea=(uint16_t)(0x039Fu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFDDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Fu,ea)?1u:0u));
        }
        case 0xAFDDu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAFDFu,0xAFF1u)) c++; rt->state.cpu.pc=0xAFF1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAFDFu; return dd3_static_complete(rt,2u);
        }
        case 0xAFDFu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFE2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xAFE2u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAFE4u; return dd3_static_complete(rt,2u);
        }
        case 0xAFE4u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAFE6u,0xAFE9u)) c++; rt->state.cpu.pc=0xAFE9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAFE6u; return dd3_static_complete(rt,2u);
        }
        case 0xAFE6u: {
            rt->state.cpu.pc=0xAF6Du; return dd3_static_complete(rt,3u);
        }
        case 0xAFE9u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFEBu; return dd3_static_complete(rt,2u);
        }
        case 0xAFEBu: {
            dd3_static_write8(rt,(uint16_t)(0x04B2u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAFEEu; return dd3_static_complete(rt,5u);
        }
        case 0xAFEEu: {
            rt->state.cpu.pc=0xAF29u; return dd3_static_complete(rt,3u);
        }
        case 0xAFF1u: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFF4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0xAFF4u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAFF6u; return dd3_static_complete(rt,2u);
        }
        case 0xAFF6u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAFF8u,0xB00Eu)) c++; rt->state.cpu.pc=0xB00Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAFF8u; return dd3_static_complete(rt,2u);
        }
        case 0xAFF8u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFFBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xAFFBu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAFFDu; return dd3_static_complete(rt,2u);
        }
        case 0xAFFDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAFFFu,0xB007u)) c++; rt->state.cpu.pc=0xB007u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAFFFu; return dd3_static_complete(rt,2u);
        }
        case 0xAFFFu: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB001u; return dd3_static_complete(rt,3u);
        }
        case 0xB001u: {
            dd3_static_write8(rt,(uint16_t)(0x04B8u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB004u; return dd3_static_complete(rt,5u);
        }
        case 0xB004u: {
            dd3_static_push8(rt,(uint8_t)(0xB006u>>8)); dd3_static_push8(rt,(uint8_t)0xB006u);
            rt->state.cpu.pc=0xB012u; return dd3_static_complete(rt,6u);
        }
        case 0xB007u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB009u; return dd3_static_complete(rt,2u);
        }
        case 0xB009u: {
            dd3_static_write8(rt,(uint16_t)(0x04B2u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB00Cu; return dd3_static_complete(rt,5u);
        }
        case 0xB00Cu: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB00Eu; return dd3_static_complete(rt,4u);
        }
        case 0xB00Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB012u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB013u; return dd3_static_complete(rt,2u);
        }
        case 0xB013u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB014u; return dd3_static_complete(rt,3u);
        }
        case 0xB014u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB015u; return dd3_static_complete(rt,2u);
        }
        case 0xB015u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB017u; return dd3_static_complete(rt,2u);
        }
        case 0xB017u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB018u; return dd3_static_complete(rt,2u);
        }
        case 0xB018u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB01Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xB01Bu: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB01Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xB01Eu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB020u,0xB02Bu)) c++; rt->state.cpu.pc=0xB02Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB020u; return dd3_static_complete(rt,2u);
        }
        case 0xB020u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB023u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xB023u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB025u; return dd3_static_complete(rt,3u);
        }
        case 0xB025u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB027u; return dd3_static_complete(rt,5u);
        }
        case 0xB027u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB029u; return dd3_static_complete(rt,3u);
        }
        case 0xB029u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB02Bu,0xB033u)) c++; rt->state.cpu.pc=0xB033u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB02Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB02Bu: {
            dd3_static_push8(rt,(uint8_t)(0xB02Du>>8)); dd3_static_push8(rt,(uint8_t)0xB02Du);
            rt->state.cpu.pc=0xA21Eu; return dd3_static_complete(rt,6u);
        }
        case 0xB02Eu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB02Fu; return dd3_static_complete(rt,4u);
        }
        case 0xB02Fu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB030u; return dd3_static_complete(rt,2u);
        }
        case 0xB030u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB031u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB032u; return dd3_static_complete(rt,2u);
        }
        case 0xB032u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB033u; return dd3_static_complete(rt,3u);
        }
        case 0xB033u: {
            uint16_t ea=(uint16_t)(0x004Eu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB036u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Eu,ea)?1u:0u));
        }
        case 0xB036u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB038u; return dd3_static_complete(rt,2u);
        }
        case 0xB038u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB03Au,0xB02Bu)) c++; rt->state.cpu.pc=0xB02Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB03Au; return dd3_static_complete(rt,2u);
        }
        case 0xB03Au: {
            uint16_t ea=(uint16_t)(0x06BEu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB03Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06BEu,ea)?1u:0u));
        }
        case 0xB03Du: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB03Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB03Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB041u,0xB056u)) c++; rt->state.cpu.pc=0xB056u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB041u; return dd3_static_complete(rt,2u);
        }
        case 0xB041u: {
            uint16_t ea=(uint16_t)(0x0046u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB044u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0046u,ea)?1u:0u));
        }
        case 0xB044u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB046u; return dd3_static_complete(rt,2u);
        }
        case 0xB046u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB048u; return dd3_static_complete(rt,2u);
        }
        case 0xB048u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB04Au,0xB02Bu)) c++; rt->state.cpu.pc=0xB02Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB04Au; return dd3_static_complete(rt,2u);
        }
        case 0xB04Au: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB04Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB04Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB04Eu,0xB02Bu)) c++; rt->state.cpu.pc=0xB02Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB04Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB04Eu: {
            uint8_t v=0x26u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB050u; return dd3_static_complete(rt,2u);
        }
        case 0xB050u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB052u,0xB02Bu)) c++; rt->state.cpu.pc=0xB02Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB052u; return dd3_static_complete(rt,2u);
        }
        case 0xB052u: {
            uint8_t v=0x2Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB054u; return dd3_static_complete(rt,2u);
        }
        case 0xB054u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB056u,0xB058u)) c++; rt->state.cpu.pc=0xB058u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB056u; return dd3_static_complete(rt,2u);
        }
        case 0xB056u: {
            uint8_t v=0x29u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB058u; return dd3_static_complete(rt,2u);
        }
        case 0xB058u: {
            dd3_static_write8(rt,(uint16_t)(0x0046u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB05Bu; return dd3_static_complete(rt,5u);
        }
        case 0xB05Bu: {
            uint8_t v=0x2Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB05Du; return dd3_static_complete(rt,2u);
        }
        case 0xB05Du: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB05Fu; return dd3_static_complete(rt,4u);
        }
        case 0xB05Fu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB062u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xB062u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB064u; return dd3_static_complete(rt,2u);
        }
        case 0xB064u: {
            dd3_static_write8(rt,(uint16_t)(0x04ACu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB067u; return dd3_static_complete(rt,5u);
        }
        case 0xB067u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB06Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xB06Au: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB06Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB06Cu: {
            dd3_static_write8(rt,(uint16_t)(0x04ACu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB06Fu; return dd3_static_complete(rt,5u);
        }
        case 0xB06Fu: {
            uint8_t v=0x7Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB071u; return dd3_static_complete(rt,2u);
        }
        case 0xB071u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB073u; return dd3_static_complete(rt,4u);
        }
        case 0xB073u: {
            dd3_static_write8(rt,(uint16_t)(0x0072u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB076u; return dd3_static_complete(rt,5u);
        }
        case 0xB076u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB077u; return dd3_static_complete(rt,4u);
        }
        case 0xB077u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB078u; return dd3_static_complete(rt,2u);
        }
        case 0xB078u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB079u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB07Bu; return dd3_static_complete(rt,4u);
        }
        case 0xB07Bu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB07Du; return dd3_static_complete(rt,2u);
        }
        case 0xB07Du: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB07Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB07Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB081u,0xB0B7u)) c++; rt->state.cpu.pc=0xB0B7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB081u; return dd3_static_complete(rt,2u);
        }
        case 0xB081u: {
            uint16_t ea=0x049Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB084u; return dd3_static_complete(rt,4u);
        }
        case 0xB084u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB086u,0xB0A7u)) c++; rt->state.cpu.pc=0xB0A7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB086u; return dd3_static_complete(rt,2u);
        }
        case 0xB086u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB089u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xB089u: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB08Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB08Bu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB08Du,0xB095u)) c++; rt->state.cpu.pc=0xB095u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB08Du; return dd3_static_complete(rt,2u);
        }
        case 0xB08Du: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB090u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xB090u: {
            uint16_t ea=(uint16_t)(0x0312u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB093u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0312u,ea)?1u:0u));
        }
        case 0xB093u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB095u,0xB0B7u)) c++; rt->state.cpu.pc=0xB0B7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB095u; return dd3_static_complete(rt,2u);
        }
        case 0xB095u: {
            dd3_static_push8(rt,(uint8_t)(0xB097u>>8)); dd3_static_push8(rt,(uint8_t)0xB097u);
            rt->state.cpu.pc=0xAA09u; return dd3_static_complete(rt,6u);
        }
        case 0xB098u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB09Au,0xB0A7u)) c++; rt->state.cpu.pc=0xB0A7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB09Au; return dd3_static_complete(rt,2u);
        }
        case 0xB09Au: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB09Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0xB09Du: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB09Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB09Fu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB0A1u,0xB0A7u)) c++; rt->state.cpu.pc=0xB0A7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0A1u; return dd3_static_complete(rt,2u);
        }
        case 0xB0A1u: {
            uint8_t v=0x53u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0A3u; return dd3_static_complete(rt,2u);
        }
        case 0xB0A3u: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB0A5u; return dd3_static_complete(rt,4u);
        }
        case 0xB0A5u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB0A7u,0xB0AFu)) c++; rt->state.cpu.pc=0xB0AFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0A7u; return dd3_static_complete(rt,2u);
        }
        case 0xB0A7u: {
            uint8_t v=0x09u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0A9u; return dd3_static_complete(rt,2u);
        }
        case 0xB0A9u: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB0ABu; return dd3_static_complete(rt,4u);
        }
        case 0xB0ABu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0ADu; return dd3_static_complete(rt,2u);
        }
        case 0xB0ADu: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB0AFu; return dd3_static_complete(rt,4u);
        }
        case 0xB0AFu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0B2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xB0B2u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB0B4u; return dd3_static_complete(rt,2u);
        }
        case 0xB0B4u: {
            dd3_static_write8(rt,(uint16_t)(0x04ACu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB0B7u; return dd3_static_complete(rt,5u);
        }
        case 0xB0B7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB0B8u: {
            uint16_t ea=(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0BAu; return dd3_static_complete(rt,4u);
        }
        case 0xB0BAu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB0BCu,0xB0C8u)) c++; rt->state.cpu.pc=0xB0C8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0BCu; return dd3_static_complete(rt,2u);
        }
        case 0xB0BCu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB0BEu; return dd3_static_complete(rt,2u);
        }
        case 0xB0BEu: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB0C0u; return dd3_static_complete(rt,4u);
        }
        case 0xB0C0u: {
            dd3_static_push8(rt,(uint8_t)(0xB0C2u>>8)); dd3_static_push8(rt,(uint8_t)0xB0C2u);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,6u);
        }
        case 0xB0C3u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0C5u; return dd3_static_complete(rt,2u);
        }
        case 0xB0C5u: {
            dd3_static_write8(rt,(uint16_t)(0x04BEu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB0C8u; return dd3_static_complete(rt,5u);
        }
        case 0xB0C8u: {
            uint16_t ea=(uint16_t)(0x04BEu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0CBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04BEu,ea)?1u:0u));
        }
        case 0xB0CBu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB0CDu,0xB0D0u)) c++; rt->state.cpu.pc=0xB0D0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0CDu; return dd3_static_complete(rt,2u);
        }
        case 0xB0CDu: {
            rt->state.cpu.pc=0xB13Du; return dd3_static_complete(rt,3u);
        }
        case 0xB0D0u: {
            uint16_t ea=(uint16_t)(0x04A0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0D3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A0u,ea)?1u:0u));
        }
        case 0xB0D3u: {
            dd3_static_push8(rt,(uint8_t)(0xB0D5u>>8)); dd3_static_push8(rt,(uint8_t)0xB0D5u);
            rt->state.cpu.pc=0xB3A2u; return dd3_static_complete(rt,6u);
        }
        case 0xB0D6u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0D8u; return dd3_static_complete(rt,3u);
        }
        case 0xB0D8u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB0DAu; return dd3_static_complete(rt,2u);
        }
        case 0xB0DAu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB0DCu,0xB0F4u)) c++; rt->state.cpu.pc=0xB0F4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0DCu; return dd3_static_complete(rt,2u);
        }
        case 0xB0DCu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0DEu; return dd3_static_complete(rt,3u);
        }
        case 0xB0DEu: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB0E0u; return dd3_static_complete(rt,2u);
        }
        case 0xB0E0u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB0E2u,0xB117u)) c++; rt->state.cpu.pc=0xB117u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0E2u; return dd3_static_complete(rt,2u);
        }
        case 0xB0E2u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0E4u; return dd3_static_complete(rt,3u);
        }
        case 0xB0E4u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB0E6u,0xB0EDu)) c++; rt->state.cpu.pc=0xB0EDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0E6u; return dd3_static_complete(rt,2u);
        }
        case 0xB0E6u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0E8u; return dd3_static_complete(rt,2u);
        }
        case 0xB0E8u: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB0EBu; return dd3_static_complete(rt,5u);
        }
        case 0xB0EBu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB0EDu,0xB10Bu)) c++; rt->state.cpu.pc=0xB10Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0EDu; return dd3_static_complete(rt,2u);
        }
        case 0xB0EDu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0EFu; return dd3_static_complete(rt,2u);
        }
        case 0xB0EFu: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB0F2u; return dd3_static_complete(rt,5u);
        }
        case 0xB0F2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB0F4u,0xB10Bu)) c++; rt->state.cpu.pc=0xB10Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0F4u; return dd3_static_complete(rt,2u);
        }
        case 0xB0F4u: {
            uint16_t ea=(uint16_t)(0x039Fu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0F7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Fu,ea)?1u:0u));
        }
        case 0xB0F7u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB0F9u,0xB0DCu)) c++; rt->state.cpu.pc=0xB0DCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0F9u; return dd3_static_complete(rt,2u);
        }
        case 0xB0F9u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0FBu; return dd3_static_complete(rt,3u);
        }
        case 0xB0FBu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB0FDu; return dd3_static_complete(rt,2u);
        }
        case 0xB0FDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB0FFu,0xB106u)) c++; rt->state.cpu.pc=0xB106u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0FFu; return dd3_static_complete(rt,2u);
        }
        case 0xB0FFu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB101u; return dd3_static_complete(rt,2u);
        }
        case 0xB101u: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB104u; return dd3_static_complete(rt,5u);
        }
        case 0xB104u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB106u,0xB10Bu)) c++; rt->state.cpu.pc=0xB10Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB106u; return dd3_static_complete(rt,2u);
        }
        case 0xB106u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB108u; return dd3_static_complete(rt,2u);
        }
        case 0xB108u: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB10Bu; return dd3_static_complete(rt,5u);
        }
        case 0xB10Bu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB10Du; return dd3_static_complete(rt,3u);
        }
        case 0xB10Du: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB10Fu,0xB113u)) c++; rt->state.cpu.pc=0xB113u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB10Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB10Fu: {
            dd3_static_push8(rt,(uint8_t)(0xB111u>>8)); dd3_static_push8(rt,(uint8_t)0xB111u);
            rt->state.cpu.pc=0xB371u; return dd3_static_complete(rt,6u);
        }
        case 0xB112u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB113u: {
            dd3_static_push8(rt,(uint8_t)(0xB115u>>8)); dd3_static_push8(rt,(uint8_t)0xB115u);
            rt->state.cpu.pc=0xB365u; return dd3_static_complete(rt,6u);
        }
        case 0xB116u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB117u: {
            uint16_t ea=(uint16_t)(0x04A0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB11Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A0u,ea)?1u:0u));
        }
        case 0xB11Au: {
            dd3_static_write8(rt,(uint16_t)(0x0487u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB11Du; return dd3_static_complete(rt,5u);
        }
        case 0xB11Du: {
            uint16_t ea=(uint16_t)(0x04A0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB120u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A0u,ea)?1u:0u));
        }
        case 0xB120u: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB123u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0xB123u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB125u; return dd3_static_complete(rt,3u);
        }
        case 0xB125u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB127u; return dd3_static_complete(rt,2u);
        }
        case 0xB127u: {
            uint16_t ea=(uint16_t)(0xB4AFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB12Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB4AFu,ea)?1u:0u));
        }
        case 0xB12Au: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB12Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB12Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB12Eu,0xB131u)) c++; rt->state.cpu.pc=0xB131u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB12Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB12Eu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB12Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB12Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB131u,0xB127u)) c++; rt->state.cpu.pc=0xB127u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB131u; return dd3_static_complete(rt,2u);
        }
        case 0xB131u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB132u; return dd3_static_complete(rt,2u);
        }
        case 0xB132u: {
            dd3_static_write8(rt,(uint16_t)(0x0483u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB135u; return dd3_static_complete(rt,5u);
        }
        case 0xB135u: {
            uint8_t v=0x11u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB137u; return dd3_static_complete(rt,2u);
        }
        case 0xB137u: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB139u; return dd3_static_complete(rt,4u);
        }
        case 0xB139u: {
            uint16_t ea=(uint16_t)(0x04BEu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB13Cu; return dd3_static_complete(rt,7u);
        }
        case 0xB13Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB13Du: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB13Fu; return dd3_static_complete(rt,4u);
        }
        case 0xB13Fu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB141u; return dd3_static_complete(rt,2u);
        }
        case 0xB141u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB143u; return dd3_static_complete(rt,2u);
        }
        case 0xB143u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB145u,0xB149u)) c++; rt->state.cpu.pc=0xB149u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB145u; return dd3_static_complete(rt,2u);
        }
        case 0xB145u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB147u; return dd3_static_complete(rt,2u);
        }
        case 0xB147u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB149u; return dd3_static_complete(rt,4u);
        }
        case 0xB149u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB14Au: {
            uint16_t ea=(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB14Cu; return dd3_static_complete(rt,4u);
        }
        case 0xB14Cu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB14Eu,0xB17Au)) c++; rt->state.cpu.pc=0xB17Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB14Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB14Eu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB150u; return dd3_static_complete(rt,2u);
        }
        case 0xB150u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB152u; return dd3_static_complete(rt,4u);
        }
        case 0xB152u: {
            uint16_t ea=(uint16_t)(0x04CAu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB155u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04CAu,ea)?1u:0u));
        }
        case 0xB155u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB157u; return dd3_static_complete(rt,2u);
        }
        case 0xB157u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB159u,0xB16Au)) c++; rt->state.cpu.pc=0xB16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB159u; return dd3_static_complete(rt,2u);
        }
        case 0xB159u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB15Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xB15Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB15Eu,0xB164u)) c++; rt->state.cpu.pc=0xB164u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB15Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB15Eu: {
            dd3_static_push8(rt,(uint8_t)(0xB160u>>8)); dd3_static_push8(rt,(uint8_t)0xB160u);
            rt->state.cpu.pc=0xB378u; return dd3_static_complete(rt,6u);
        }
        case 0xB161u: {
            rt->state.cpu.pc=0xB17Au; return dd3_static_complete(rt,3u);
        }
        case 0xB164u: {
            dd3_static_push8(rt,(uint8_t)(0xB166u>>8)); dd3_static_push8(rt,(uint8_t)0xB166u);
            rt->state.cpu.pc=0xB384u; return dd3_static_complete(rt,6u);
        }
        case 0xB167u: {
            rt->state.cpu.pc=0xB17Au; return dd3_static_complete(rt,3u);
        }
        case 0xB16Au: {
            dd3_static_push8(rt,(uint8_t)(0xB16Cu>>8)); dd3_static_push8(rt,(uint8_t)0xB16Cu);
            rt->state.cpu.pc=0xB34Fu; return dd3_static_complete(rt,6u);
        }
        case 0xB16Du: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB170u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xB170u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB172u,0xB176u)) c++; rt->state.cpu.pc=0xB176u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB172u; return dd3_static_complete(rt,2u);
        }
        case 0xB172u: {
            dd3_static_push8(rt,(uint8_t)(0xB174u>>8)); dd3_static_push8(rt,(uint8_t)0xB174u);
            rt->state.cpu.pc=0xB371u; return dd3_static_complete(rt,6u);
        }
        case 0xB175u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB176u: {
            dd3_static_push8(rt,(uint8_t)(0xB178u>>8)); dd3_static_push8(rt,(uint8_t)0xB178u);
            rt->state.cpu.pc=0xB365u; return dd3_static_complete(rt,6u);
        }
        case 0xB179u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB17Au: {
            uint16_t ea=(uint16_t)(0x04CAu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB17Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04CAu,ea)?1u:0u));
        }
        case 0xB17Du: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB17Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB17Eu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB17Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB17Fu: {
            uint16_t ea=(uint16_t)(0xB18Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB182u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB18Cu,ea)?1u:0u));
        }
        case 0xB182u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB184u; return dd3_static_complete(rt,3u);
        }
        case 0xB184u: {
            uint16_t ea=(uint16_t)(0xB18Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB187u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB18Du,ea)?1u:0u));
        }
        case 0xB187u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB189u; return dd3_static_complete(rt,3u);
        }
        case 0xB189u: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x0029u); return dd3_static_complete(rt,5u);
        }
        case 0xB198u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB19Au; return dd3_static_complete(rt,2u);
        }
        case 0xB19Au: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB19Cu; return dd3_static_complete(rt,4u);
        }
        case 0xB19Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB1B9u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1BCu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xB1BCu: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1BFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0xB1BFu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB1C1u; return dd3_static_complete(rt,2u);
        }
        case 0xB1C1u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB1C3u; return dd3_static_complete(rt,2u);
        }
        case 0xB1C3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB1C5u,0xB198u)) c++; rt->state.cpu.pc=0xB198u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1C5u; return dd3_static_complete(rt,2u);
        }
        case 0xB1C5u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1C8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xB1C8u: {
            uint8_t v=0x24u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB1CAu; return dd3_static_complete(rt,2u);
        }
        case 0xB1CAu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB1CCu,0xB1CFu)) c++; rt->state.cpu.pc=0xB1CFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1CCu; return dd3_static_complete(rt,2u);
        }
        case 0xB1CCu: {
            dd3_static_push8(rt,(uint8_t)(0xB1CEu>>8)); dd3_static_push8(rt,(uint8_t)0xB1CEu);
            rt->state.cpu.pc=0xB34Fu; return dd3_static_complete(rt,6u);
        }
        case 0xB1CFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB1D0u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1D3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xB1D3u: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1D6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0xB1D6u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB1D8u; return dd3_static_complete(rt,2u);
        }
        case 0xB1D8u: {
            uint8_t v=0x57u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB1DAu; return dd3_static_complete(rt,2u);
        }
        case 0xB1DAu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB1DCu,0xB1E4u)) c++; rt->state.cpu.pc=0xB1E4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1DCu; return dd3_static_complete(rt,2u);
        }
        case 0xB1DCu: {
            uint8_t v=0x4Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB1DEu; return dd3_static_complete(rt,2u);
        }
        case 0xB1DEu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB1E0u,0xB198u)) c++; rt->state.cpu.pc=0xB198u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1E0u; return dd3_static_complete(rt,2u);
        }
        case 0xB1E0u: {
            uint8_t v=0x51u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB1E2u; return dd3_static_complete(rt,2u);
        }
        case 0xB1E2u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB1E4u,0xB198u)) c++; rt->state.cpu.pc=0xB198u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1E4u; return dd3_static_complete(rt,2u);
        }
        case 0xB1E4u: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1E7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0xB1E7u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB1E9u; return dd3_static_complete(rt,2u);
        }
        case 0xB1E9u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB1EBu,0xB1CFu)) c++; rt->state.cpu.pc=0xB1CFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1EBu; return dd3_static_complete(rt,2u);
        }
        case 0xB1EBu: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1EEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xB1EEu: {
            uint8_t v=0x30u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB1F0u; return dd3_static_complete(rt,2u);
        }
        case 0xB1F0u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB1F2u,0xB1CFu)) c++; rt->state.cpu.pc=0xB1CFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1F2u; return dd3_static_complete(rt,2u);
        }
        case 0xB1F2u: {
            uint8_t v=0x50u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB1F4u; return dd3_static_complete(rt,2u);
        }
        case 0xB1F4u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB1F6u,0xB1CFu)) c++; rt->state.cpu.pc=0xB1CFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1F6u; return dd3_static_complete(rt,2u);
        }
        case 0xB1F6u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB1F8u,0xB1CCu)) c++; rt->state.cpu.pc=0xB1CCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1F8u; return dd3_static_complete(rt,2u);
        }
        case 0xB1F8u: {
            uint16_t ea=(uint16_t)(0x04AAu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1FBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04AAu,ea)?1u:0u));
        }
        case 0xB1FBu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB1FDu,0xB198u)) c++; rt->state.cpu.pc=0xB198u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1FDu; return dd3_static_complete(rt,2u);
        }
        case 0xB1FDu: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB200u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0xB200u: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB202u; return dd3_static_complete(rt,2u);
        }
        case 0xB202u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB204u,0xB198u)) c++; rt->state.cpu.pc=0xB198u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB204u; return dd3_static_complete(rt,2u);
        }
        case 0xB204u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB207u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xB207u: {
            uint8_t v=0x60u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB209u; return dd3_static_complete(rt,2u);
        }
        case 0xB209u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB20Bu,0xB198u)) c++; rt->state.cpu.pc=0xB198u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB20Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB20Bu: {
            uint8_t v=0x28u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB20Du; return dd3_static_complete(rt,2u);
        }
        case 0xB20Du: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB20Fu,0xB229u)) c++; rt->state.cpu.pc=0xB229u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB20Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB20Fu: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB211u; return dd3_static_complete(rt,4u);
        }
        case 0xB211u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB213u; return dd3_static_complete(rt,2u);
        }
        case 0xB213u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB215u; return dd3_static_complete(rt,2u);
        }
        case 0xB215u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB217u,0xB1CFu)) c++; rt->state.cpu.pc=0xB1CFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB217u; return dd3_static_complete(rt,2u);
        }
        case 0xB217u: {
            dd3_static_push8(rt,(uint8_t)(0xB219u>>8)); dd3_static_push8(rt,(uint8_t)0xB219u);
            rt->state.cpu.pc=0xA94Bu; return dd3_static_complete(rt,6u);
        }
        case 0xB21Au: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB21Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB21Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB21Eu,0xB224u)) c++; rt->state.cpu.pc=0xB224u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB21Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB21Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB220u; return dd3_static_complete(rt,2u);
        }
        case 0xB220u: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB222u; return dd3_static_complete(rt,4u);
        }
        case 0xB222u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB224u,0xB1CFu)) c++; rt->state.cpu.pc=0xB1CFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB224u; return dd3_static_complete(rt,2u);
        }
        case 0xB224u: {
            uint8_t v=0x05u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB226u; return dd3_static_complete(rt,2u);
        }
        case 0xB226u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB228u; return dd3_static_complete(rt,4u);
        }
        case 0xB228u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB229u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB22Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xB22Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB22Eu,0xB237u)) c++; rt->state.cpu.pc=0xB237u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB22Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB22Eu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB230u,0xB230u)) c++; rt->state.cpu.pc=0xB230u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB230u; return dd3_static_complete(rt,2u);
        }
        case 0xB230u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB232u; return dd3_static_complete(rt,2u);
        }
        case 0xB232u: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB235u; return dd3_static_complete(rt,5u);
        }
        case 0xB235u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB237u,0xB23Cu)) c++; rt->state.cpu.pc=0xB23Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB237u; return dd3_static_complete(rt,2u);
        }
        case 0xB237u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB239u; return dd3_static_complete(rt,2u);
        }
        case 0xB239u: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB23Cu; return dd3_static_complete(rt,5u);
        }
        case 0xB23Cu: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB23Eu; return dd3_static_complete(rt,4u);
        }
        case 0xB23Eu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB240u; return dd3_static_complete(rt,2u);
        }
        case 0xB240u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB242u; return dd3_static_complete(rt,2u);
        }
        case 0xB242u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB244u,0xB247u)) c++; rt->state.cpu.pc=0xB247u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB244u; return dd3_static_complete(rt,2u);
        }
        case 0xB244u: {
            dd3_static_push8(rt,(uint8_t)(0xB246u>>8)); dd3_static_push8(rt,(uint8_t)0xB246u);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,6u);
        }
        case 0xB247u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB248u: {
            uint16_t ea=(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB24Au; return dd3_static_complete(rt,4u);
        }
        case 0xB24Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB24Cu,0xB250u)) c++; rt->state.cpu.pc=0xB250u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB24Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB24Cu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB24Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB24Eu: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB250u; return dd3_static_complete(rt,4u);
        }
        case 0xB250u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB253u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xB253u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB254u; return dd3_static_complete(rt,3u);
        }
        case 0xB254u: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB257u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0xB257u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB258u; return dd3_static_complete(rt,3u);
        }
        case 0xB258u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB25Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xB25Bu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB25Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB25Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB25Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB25Eu: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB261u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xB261u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB262u; return dd3_static_complete(rt,3u);
        }
        case 0xB262u: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB264u; return dd3_static_complete(rt,3u);
        }
        case 0xB264u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB265u; return dd3_static_complete(rt,2u);
        }
        case 0xB265u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB267u; return dd3_static_complete(rt,2u);
        }
        case 0xB267u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB269u; return dd3_static_complete(rt,3u);
        }
        case 0xB269u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB26Au; return dd3_static_complete(rt,4u);
        }
        case 0xB26Au: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB26Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB26Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB26Eu,0xB26Fu)) c++; rt->state.cpu.pc=0xB26Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB26Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB26Eu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB26Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB26Fu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB270u; return dd3_static_complete(rt,2u);
        }
        case 0xB270u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB272u; return dd3_static_complete(rt,3u);
        }
        case 0xB272u: {
            dd3_static_write8(rt,(uint16_t)(0x04B8u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB275u; return dd3_static_complete(rt,5u);
        }
        case 0xB275u: {
            uint16_t ea=(uint16_t)(0x06BEu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB278u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06BEu,ea)?1u:0u));
        }
        case 0xB278u: {
            dd3_static_write8(rt,(uint16_t)(0x04A4u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB27Bu; return dd3_static_complete(rt,5u);
        }
        case 0xB27Bu: {
            uint16_t ea=(uint16_t)(0x06C0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB27Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06C0u,ea)?1u:0u));
        }
        case 0xB27Eu: {
            dd3_static_write8(rt,(uint16_t)(0x04A6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB281u; return dd3_static_complete(rt,5u);
        }
        case 0xB281u: {
            uint16_t ea=(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB283u; return dd3_static_complete(rt,4u);
        }
        case 0xB283u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB285u; return dd3_static_complete(rt,2u);
        }
        case 0xB285u: {
            uint8_t v=0x0Bu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB287u; return dd3_static_complete(rt,2u);
        }
        case 0xB287u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB289u,0xB299u)) c++; rt->state.cpu.pc=0xB299u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB289u; return dd3_static_complete(rt,2u);
        }
        case 0xB289u: {
            dd3_static_push8(rt,(uint8_t)(0xB28Bu>>8)); dd3_static_push8(rt,(uint8_t)0xB28Bu);
            rt->state.cpu.pc=0xAEE4u; return dd3_static_complete(rt,6u);
        }
        case 0xB28Cu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB28Du; return dd3_static_complete(rt,4u);
        }
        case 0xB28Du: {
            dd3_static_write8(rt,(uint16_t)(0x04B8u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB290u; return dd3_static_complete(rt,5u);
        }
        case 0xB290u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB291u; return dd3_static_complete(rt,4u);
        }
        case 0xB291u: {
            dd3_static_write8(rt,(uint16_t)(0x04A6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB294u; return dd3_static_complete(rt,5u);
        }
        case 0xB294u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB295u; return dd3_static_complete(rt,4u);
        }
        case 0xB295u: {
            dd3_static_write8(rt,(uint16_t)(0x04A4u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB298u; return dd3_static_complete(rt,5u);
        }
        case 0xB298u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB299u: {
            dd3_static_push8(rt,(uint8_t)(0xB29Bu>>8)); dd3_static_push8(rt,(uint8_t)0xB29Bu);
            rt->state.cpu.pc=0xAA95u; return dd3_static_complete(rt,6u);
        }
        case 0xB29Cu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB29Du; return dd3_static_complete(rt,2u);
        }
        case 0xB29Du: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB29Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB29Fu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB2A0u; return dd3_static_complete(rt,2u);
        }
        case 0xB2A0u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2A1u; return dd3_static_complete(rt,4u);
        }
        case 0xB2A1u: {
            dd3_static_write8(rt,(uint16_t)(0x04B8u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB2A4u; return dd3_static_complete(rt,5u);
        }
        case 0xB2A4u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2A6u; return dd3_static_complete(rt,3u);
        }
        case 0xB2A6u: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2A9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xB2A9u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB2ABu,0xB2CAu)) c++; rt->state.cpu.pc=0xB2CAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB2ABu; return dd3_static_complete(rt,2u);
        }
        case 0xB2ABu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB2ADu; return dd3_static_complete(rt,5u);
        }
        case 0xB2ADu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2AFu; return dd3_static_complete(rt,3u);
        }
        case 0xB2AFu: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2B2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xB2B2u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB2B4u,0xB2CAu)) c++; rt->state.cpu.pc=0xB2CAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB2B4u; return dd3_static_complete(rt,2u);
        }
        case 0xB2B4u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2B7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xB2B7u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB2B9u; return dd3_static_complete(rt,2u);
        }
        case 0xB2B9u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB2BBu,0xB2E1u)) c++; rt->state.cpu.pc=0xB2E1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB2BBu; return dd3_static_complete(rt,2u);
        }
        case 0xB2BBu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2BDu; return dd3_static_complete(rt,3u);
        }
        case 0xB2BDu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2BFu; return dd3_static_complete(rt,2u);
        }
        case 0xB2BFu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2C1u; return dd3_static_complete(rt,2u);
        }
        case 0xB2C1u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2C3u; return dd3_static_complete(rt,2u);
        }
        case 0xB2C3u: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB2C6u; return dd3_static_complete(rt,5u);
        }
        case 0xB2C6u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2C8u; return dd3_static_complete(rt,2u);
        }
        case 0xB2C8u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB2CAu,0xB2D3u)) c++; rt->state.cpu.pc=0xB2D3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB2CAu; return dd3_static_complete(rt,2u);
        }
        case 0xB2CAu: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2CDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xB2CDu: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB2CFu; return dd3_static_complete(rt,2u);
        }
        case 0xB2CFu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB2D1u,0xB2F2u)) c++; rt->state.cpu.pc=0xB2F2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB2D1u; return dd3_static_complete(rt,2u);
        }
        case 0xB2D1u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2D3u; return dd3_static_complete(rt,2u);
        }
        case 0xB2D3u: {
            dd3_static_write8(rt,(uint16_t)(0x04B2u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB2D6u; return dd3_static_complete(rt,5u);
        }
        case 0xB2D6u: {
            uint8_t v=0x0Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2D8u; return dd3_static_complete(rt,2u);
        }
        case 0xB2D8u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB2DAu; return dd3_static_complete(rt,4u);
        }
        case 0xB2DAu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2DCu; return dd3_static_complete(rt,2u);
        }
        case 0xB2DCu: {
            dd3_static_write8(rt,(uint16_t)(0x0461u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB2DFu; return dd3_static_complete(rt,5u);
        }
        case 0xB2DFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB2E1u,0xB2F2u)) c++; rt->state.cpu.pc=0xB2F2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB2E1u; return dd3_static_complete(rt,2u);
        }
        case 0xB2E1u: {
            uint16_t ea=(uint16_t)(0x04A6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2E4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A6u,ea)?1u:0u));
        }
        case 0xB2E4u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB2E6u; return dd3_static_complete(rt,2u);
        }
        case 0xB2E6u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB2E8u,0xB2F2u)) c++; rt->state.cpu.pc=0xB2F2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB2E8u; return dd3_static_complete(rt,2u);
        }
        case 0xB2E8u: {
            uint16_t ea=(uint16_t)(0x04A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2EBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A4u,ea)?1u:0u));
        }
        case 0xB2EBu: {
            uint8_t v=0x40u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB2EDu; return dd3_static_complete(rt,2u);
        }
        case 0xB2EDu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB2EFu,0xB2F2u)) c++; rt->state.cpu.pc=0xB2F2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB2EFu; return dd3_static_complete(rt,2u);
        }
        case 0xB2EFu: {
            dd3_static_push8(rt,(uint8_t)(0xB2F1u>>8)); dd3_static_push8(rt,(uint8_t)0xB2F1u);
            rt->state.cpu.pc=0xB012u; return dd3_static_complete(rt,6u);
        }
        case 0xB2F2u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2F3u; return dd3_static_complete(rt,4u);
        }
        case 0xB2F3u: {
            dd3_static_write8(rt,(uint16_t)(0x04A6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB2F6u; return dd3_static_complete(rt,5u);
        }
        case 0xB2F6u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2F7u; return dd3_static_complete(rt,4u);
        }
        case 0xB2F7u: {
            dd3_static_write8(rt,(uint16_t)(0x04A4u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB2FAu; return dd3_static_complete(rt,5u);
        }
        case 0xB2FAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB346u: {
            uint16_t ea=(uint16_t)(0x0312u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB349u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0312u,ea)?1u:0u));
        }
        case 0xB349u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB34Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB34Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB34Eu; return dd3_static_complete(rt,5u);
        }
        case 0xB34Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB34Fu: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB351u; return dd3_static_complete(rt,4u);
        }
        case 0xB351u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB353u; return dd3_static_complete(rt,2u);
        }
        case 0xB353u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB355u; return dd3_static_complete(rt,2u);
        }
        case 0xB355u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB357u,0xB35Fu)) c++; rt->state.cpu.pc=0xB35Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB357u; return dd3_static_complete(rt,2u);
        }
        case 0xB357u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB359u; return dd3_static_complete(rt,2u);
        }
        case 0xB359u: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB35Bu; return dd3_static_complete(rt,4u);
        }
        case 0xB35Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB35Du; return dd3_static_complete(rt,2u);
        }
        case 0xB35Du: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB35Fu; return dd3_static_complete(rt,4u);
        }
        case 0xB35Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB360u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB362u; return dd3_static_complete(rt,2u);
        }
        case 0xB362u: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB365u; return dd3_static_complete(rt,5u);
        }
        case 0xB365u: {
            uint16_t ea=(uint16_t)((0x6Au+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB367u; return dd3_static_complete(rt,4u);
        }
        case 0xB367u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB369u; return dd3_static_complete(rt,2u);
        }
        case 0xB369u: {
            dd3_static_write8(rt,(uint16_t)((0x6Au+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB36Bu; return dd3_static_complete(rt,4u);
        }
        case 0xB36Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB36Cu: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB36Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB36Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB371u; return dd3_static_complete(rt,5u);
        }
        case 0xB371u: {
            uint16_t ea=(uint16_t)((0x6Au+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB373u; return dd3_static_complete(rt,4u);
        }
        case 0xB373u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB375u; return dd3_static_complete(rt,2u);
        }
        case 0xB375u: {
            dd3_static_write8(rt,(uint16_t)((0x6Au+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB377u; return dd3_static_complete(rt,4u);
        }
        case 0xB377u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB378u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB37Au; return dd3_static_complete(rt,2u);
        }
        case 0xB37Au: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB37Du; return dd3_static_complete(rt,5u);
        }
        case 0xB37Du: {
            uint16_t ea=(uint16_t)((0x6Au+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB37Fu; return dd3_static_complete(rt,4u);
        }
        case 0xB37Fu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB381u; return dd3_static_complete(rt,2u);
        }
        case 0xB381u: {
            dd3_static_write8(rt,(uint16_t)((0x6Au+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB383u; return dd3_static_complete(rt,4u);
        }
        case 0xB383u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB384u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB386u; return dd3_static_complete(rt,2u);
        }
        case 0xB386u: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB389u; return dd3_static_complete(rt,5u);
        }
        case 0xB389u: {
            uint16_t ea=(uint16_t)((0x6Au+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB38Bu; return dd3_static_complete(rt,4u);
        }
        case 0xB38Bu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB38Du; return dd3_static_complete(rt,2u);
        }
        case 0xB38Du: {
            dd3_static_write8(rt,(uint16_t)((0x6Au+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB38Fu; return dd3_static_complete(rt,4u);
        }
        case 0xB38Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB390u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB392u; return dd3_static_complete(rt,3u);
        }
        case 0xB392u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB394u; return dd3_static_complete(rt,2u);
        }
        case 0xB394u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB395u; return dd3_static_complete(rt,2u);
        }
        case 0xB395u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB397u; return dd3_static_complete(rt,2u);
        }
        case 0xB397u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB399u; return dd3_static_complete(rt,3u);
        }
        case 0xB399u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB39Bu; return dd3_static_complete(rt,3u);
        }
        case 0xB39Bu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB39Du; return dd3_static_complete(rt,2u);
        }
        case 0xB39Du: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB39Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB39Fu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3A1u; return dd3_static_complete(rt,3u);
        }
        case 0xB3A1u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB3A2u: {
            uint16_t ea=(uint16_t)((0xCDu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3A4u; return dd3_static_complete(rt,4u);
        }
        case 0xB3A4u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB3A5u; return dd3_static_complete(rt,2u);
        }
        case 0xB3A5u: {
            uint16_t ea=(uint16_t)(0x00CBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB3A8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00CBu,ea)?1u:0u));
        }
        case 0xB3A8u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3AAu; return dd3_static_complete(rt,3u);
        }
        case 0xB3AAu: {
            uint16_t ea=(uint16_t)((0xD7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3ACu; return dd3_static_complete(rt,4u);
        }
        case 0xB3ACu: {
            uint16_t ea=(uint16_t)(0x00D5u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB3AFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00D5u,ea)?1u:0u));
        }
        case 0xB3AFu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3B1u; return dd3_static_complete(rt,3u);
        }
        case 0xB3B1u: {
            dd3_static_push8(rt,(uint8_t)(0xB3B3u>>8)); dd3_static_push8(rt,(uint8_t)0xB3B3u);
            rt->state.cpu.pc=0xB3F9u; return dd3_static_complete(rt,6u);
        }
        case 0xB3B4u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3B6u; return dd3_static_complete(rt,3u);
        }
        case 0xB3B6u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3B8u; return dd3_static_complete(rt,3u);
        }
        case 0xB3B8u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3BAu; return dd3_static_complete(rt,3u);
        }
        case 0xB3BAu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3BCu; return dd3_static_complete(rt,3u);
        }
        case 0xB3BCu: {
            uint16_t ea=(uint16_t)((0xE1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3BEu; return dd3_static_complete(rt,4u);
        }
        case 0xB3BEu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB3BFu; return dd3_static_complete(rt,2u);
        }
        case 0xB3BFu: {
            uint16_t ea=(uint16_t)(0x00DFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB3C2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00DFu,ea)?1u:0u));
        }
        case 0xB3C2u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3C4u; return dd3_static_complete(rt,3u);
        }
        case 0xB3C4u: {
            uint16_t ea=(uint16_t)((0xEBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3C6u; return dd3_static_complete(rt,4u);
        }
        case 0xB3C6u: {
            uint16_t ea=(uint16_t)(0x00E9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB3C9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00E9u,ea)?1u:0u));
        }
        case 0xB3C9u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3CBu; return dd3_static_complete(rt,3u);
        }
        case 0xB3CBu: {
            dd3_static_push8(rt,(uint8_t)(0xB3CDu>>8)); dd3_static_push8(rt,(uint8_t)0xB3CDu);
            rt->state.cpu.pc=0xB3F9u; return dd3_static_complete(rt,6u);
        }
        case 0xB3CEu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3D0u; return dd3_static_complete(rt,3u);
        }
        case 0xB3D0u: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3D2u; return dd3_static_complete(rt,3u);
        }
        case 0xB3D2u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3D4u; return dd3_static_complete(rt,3u);
        }
        case 0xB3D4u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB3D6u,0xB3DCu)) c++; rt->state.cpu.pc=0xB3DCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB3D6u; return dd3_static_complete(rt,2u);
        }
        case 0xB3D6u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3D8u; return dd3_static_complete(rt,3u);
        }
        case 0xB3D8u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3DAu; return dd3_static_complete(rt,2u);
        }
        case 0xB3DAu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3DCu; return dd3_static_complete(rt,3u);
        }
        case 0xB3DCu: {
            uint16_t ea=(uint16_t)((0xB9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3DEu; return dd3_static_complete(rt,4u);
        }
        case 0xB3DEu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB3DFu; return dd3_static_complete(rt,2u);
        }
        case 0xB3DFu: {
            uint16_t ea=(uint16_t)(0x00B7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB3E2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B7u,ea)?1u:0u));
        }
        case 0xB3E2u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3E4u; return dd3_static_complete(rt,3u);
        }
        case 0xB3E4u: {
            uint16_t ea=(uint16_t)((0xC3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3E6u; return dd3_static_complete(rt,4u);
        }
        case 0xB3E6u: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB3E9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0xB3E9u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3EBu; return dd3_static_complete(rt,3u);
        }
        case 0xB3EBu: {
            dd3_static_push8(rt,(uint8_t)(0xB3EDu>>8)); dd3_static_push8(rt,(uint8_t)0xB3EDu);
            rt->state.cpu.pc=0xB3F9u; return dd3_static_complete(rt,6u);
        }
        case 0xB3EEu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3F0u; return dd3_static_complete(rt,3u);
        }
        case 0xB3F0u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB3F2u,0xB3F8u)) c++; rt->state.cpu.pc=0xB3F8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB3F2u; return dd3_static_complete(rt,2u);
        }
        case 0xB3F2u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3F4u; return dd3_static_complete(rt,3u);
        }
        case 0xB3F4u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3F6u; return dd3_static_complete(rt,2u);
        }
        case 0xB3F6u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3F8u; return dd3_static_complete(rt,3u);
        }
        case 0xB3F8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB3F9u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3FBu; return dd3_static_complete(rt,2u);
        }
        case 0xB3FBu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3FDu; return dd3_static_complete(rt,3u);
        }
        case 0xB3FDu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3FFu; return dd3_static_complete(rt,3u);
        }
        case 0xB3FFu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB401u,0xB40Au)) c++; rt->state.cpu.pc=0xB40Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB401u; return dd3_static_complete(rt,2u);
        }
        case 0xB401u: {
            dd3_static_push8(rt,(uint8_t)(0xB403u>>8)); dd3_static_push8(rt,(uint8_t)0xB403u);
            rt->state.cpu.pc=0xB390u; return dd3_static_complete(rt,6u);
        }
        case 0xB404u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB406u; return dd3_static_complete(rt,3u);
        }
        case 0xB406u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB408u,0xB416u)) c++; rt->state.cpu.pc=0xB416u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB408u; return dd3_static_complete(rt,2u);
        }
        case 0xB408u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB40Au,0xB412u)) c++; rt->state.cpu.pc=0xB412u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB40Au; return dd3_static_complete(rt,2u);
        }
        case 0xB40Au: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB40Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB40Cu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB40Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB40Eu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB410u; return dd3_static_complete(rt,3u);
        }
        case 0xB410u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB412u,0xB416u)) c++; rt->state.cpu.pc=0xB416u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB412u; return dd3_static_complete(rt,2u);
        }
        case 0xB412u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB414u; return dd3_static_complete(rt,2u);
        }
        case 0xB414u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB416u; return dd3_static_complete(rt,3u);
        }
        case 0xB416u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB417u: {
            uint16_t ea=(uint16_t)(0x0487u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB41Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0487u,ea)?1u:0u));
        }
        case 0xB41Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB41Cu,0xB430u)) c++; rt->state.cpu.pc=0xB430u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB41Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB41Cu: {
            uint16_t ea=(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB41Eu; return dd3_static_complete(rt,4u);
        }
        case 0xB41Eu: {
            uint8_t v=0x70u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB420u; return dd3_static_complete(rt,2u);
        }
        case 0xB420u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB422u,0xB431u)) c++; rt->state.cpu.pc=0xB431u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB422u; return dd3_static_complete(rt,2u);
        }
        case 0xB422u: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB424u; return dd3_static_complete(rt,4u);
        }
        case 0xB424u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB426u; return dd3_static_complete(rt,2u);
        }
        case 0xB426u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB428u,0xB443u)) c++; rt->state.cpu.pc=0xB443u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB428u; return dd3_static_complete(rt,2u);
        }
        case 0xB428u: {
            uint8_t v=0x0Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB42Au; return dd3_static_complete(rt,2u);
        }
        case 0xB42Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB42Cu,0xB443u)) c++; rt->state.cpu.pc=0xB443u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB42Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB42Cu: {
            uint8_t v=0x0Du;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB42Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB42Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB430u,0xB443u)) c++; rt->state.cpu.pc=0xB443u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB430u; return dd3_static_complete(rt,2u);
        }
        case 0xB430u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB431u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB432u; return dd3_static_complete(rt,2u);
        }
        case 0xB432u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB433u; return dd3_static_complete(rt,2u);
        }
        case 0xB433u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB434u; return dd3_static_complete(rt,2u);
        }
        case 0xB434u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB435u; return dd3_static_complete(rt,2u);
        }
        case 0xB435u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB437u; return dd3_static_complete(rt,2u);
        }
        case 0xB437u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB439u,0xB4AEu)) c++; rt->state.cpu.pc=0xB4AEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB439u; return dd3_static_complete(rt,2u);
        }
        case 0xB439u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB43Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB43Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB43Du,0xB4AEu)) c++; rt->state.cpu.pc=0xB4AEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB43Du; return dd3_static_complete(rt,2u);
        }
        case 0xB43Du: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB43Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB43Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB441u,0xB4AEu)) c++; rt->state.cpu.pc=0xB4AEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB441u; return dd3_static_complete(rt,2u);
        }
        case 0xB441u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB443u; return dd3_static_complete(rt,3u);
        }
        case 0xB443u: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB445u; return dd3_static_complete(rt,2u);
        }
        case 0xB445u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.y);
            rt->state.cpu.pc=0xB447u; return dd3_static_complete(rt,3u);
        }
        case 0xB447u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB449u; return dd3_static_complete(rt,3u);
        }
        case 0xB449u: {
            uint16_t ea=(uint16_t)(0x003Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB44Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Cu,ea)?1u:0u));
        }
        case 0xB44Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB44Eu,0xB457u)) c++; rt->state.cpu.pc=0xB457u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB44Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB44Eu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB450u; return dd3_static_complete(rt,5u);
        }
        case 0xB450u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB452u; return dd3_static_complete(rt,3u);
        }
        case 0xB452u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB454u; return dd3_static_complete(rt,2u);
        }
        case 0xB454u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB456u,0xB447u)) c++; rt->state.cpu.pc=0xB447u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB456u; return dd3_static_complete(rt,2u);
        }
        case 0xB456u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB457u: {
            uint16_t ea=(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB459u; return dd3_static_complete(rt,4u);
        }
        case 0xB459u: {
            uint8_t v=0x70u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB45Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB45Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB45Du,0xB478u)) c++; rt->state.cpu.pc=0xB478u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB45Du; return dd3_static_complete(rt,2u);
        }
        case 0xB45Du: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB45Fu; return dd3_static_complete(rt,5u);
        }
        case 0xB45Fu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB461u; return dd3_static_complete(rt,3u);
        }
        case 0xB461u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB462u; return dd3_static_complete(rt,2u);
        }
        case 0xB462u: {
            uint16_t ea=(uint16_t)(0xB4AFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB465u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB4AFu,ea)?1u:0u));
        }
        case 0xB465u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB467u; return dd3_static_complete(rt,2u);
        }
        case 0xB467u: {
            dd3_static_write8(rt,(uint16_t)(0x0483u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB46Au; return dd3_static_complete(rt,5u);
        }
        case 0xB46Au: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB46Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB46Cu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB46Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB46Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0074u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB471u; return dd3_static_complete(rt,5u);
        }
        case 0xB471u: {
            uint8_t v=0x82u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB473u; return dd3_static_complete(rt,2u);
        }
        case 0xB473u: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB476u; return dd3_static_complete(rt,5u);
        }
        case 0xB476u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB478u,0xB48Bu)) c++; rt->state.cpu.pc=0xB48Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB478u; return dd3_static_complete(rt,2u);
        }
        case 0xB478u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB47Au; return dd3_static_complete(rt,3u);
        }
        case 0xB47Au: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB47Cu; return dd3_static_complete(rt,4u);
        }
        case 0xB47Cu: {
            uint8_t v=0x14u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB47Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB47Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0074u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB481u; return dd3_static_complete(rt,5u);
        }
        case 0xB481u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB483u; return dd3_static_complete(rt,2u);
        }
        case 0xB483u: {
            dd3_static_write8(rt,(uint16_t)(0x0483u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB486u; return dd3_static_complete(rt,5u);
        }
        case 0xB486u: {
            uint8_t v=0x82u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB488u; return dd3_static_complete(rt,2u);
        }
        case 0xB488u: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB48Bu; return dd3_static_complete(rt,5u);
        }
        case 0xB48Bu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB48Du; return dd3_static_complete(rt,3u);
        }
        case 0xB48Du: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB48Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB48Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0487u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB492u; return dd3_static_complete(rt,5u);
        }
        case 0xB492u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB494u; return dd3_static_complete(rt,2u);
        }
        case 0xB494u: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB497u; return dd3_static_complete(rt,5u);
        }
        case 0xB497u: {
            dd3_static_write8(rt,(uint16_t)(0x007Du+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB49Au; return dd3_static_complete(rt,5u);
        }
        case 0xB49Au: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB49Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0xB49Du: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB49Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB49Fu: {
            dd3_static_write8(rt,(uint16_t)(0x004Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB4A2u; return dd3_static_complete(rt,5u);
        }
        case 0xB4A2u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4A3u; return dd3_static_complete(rt,2u);
        }
        case 0xB4A3u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB4A4u; return dd3_static_complete(rt,2u);
        }
        case 0xB4A4u: {
            uint8_t v=0x02u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB4A6u; return dd3_static_complete(rt,2u);
        }
        case 0xB4A6u: {
            dd3_static_write8(rt,(uint16_t)(0x03F1u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB4A9u; return dd3_static_complete(rt,5u);
        }
        case 0xB4A9u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4ABu; return dd3_static_complete(rt,2u);
        }
        case 0xB4ABu: {
            dd3_static_write8(rt,(uint16_t)(0x03B8u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB4AEu; return dd3_static_complete(rt,5u);
        }
        case 0xB4AEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB4B5u: {
            uint16_t ea=(uint16_t)(0x0483u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4B8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0483u,ea)?1u:0u));
        }
        case 0xB4B8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB4BAu,0xB4BDu)) c++; rt->state.cpu.pc=0xB4BDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB4BAu; return dd3_static_complete(rt,2u);
        }
        case 0xB4BAu: {
            rt->state.cpu.pc=0xB549u; return dd3_static_complete(rt,3u);
        }
        case 0xB4BDu: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4BFu; return dd3_static_complete(rt,2u);
        }
        case 0xB4BFu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.y);
            rt->state.cpu.pc=0xB4C1u; return dd3_static_complete(rt,3u);
        }
        case 0xB4C1u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4C3u; return dd3_static_complete(rt,3u);
        }
        case 0xB4C3u: {
            uint16_t ea=(uint16_t)(0x003Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4C6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Cu,ea)?1u:0u));
        }
        case 0xB4C6u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB4C8u,0xB529u)) c++; rt->state.cpu.pc=0xB529u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB4C8u; return dd3_static_complete(rt,2u);
        }
        case 0xB4C8u: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4CBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0xB4CBu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4CDu; return dd3_static_complete(rt,2u);
        }
        case 0xB4CDu: {
            uint8_t v=0x65u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB4CFu; return dd3_static_complete(rt,2u);
        }
        case 0xB4CFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB4D1u,0xB529u)) c++; rt->state.cpu.pc=0xB529u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB4D1u; return dd3_static_complete(rt,2u);
        }
        case 0xB4D1u: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4D4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0xB4D4u: {
            uint16_t ea=(uint16_t)(0x0384u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB4D7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0384u,ea)?1u:0u));
        }
        case 0xB4D7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB4D9u,0xB529u)) c++; rt->state.cpu.pc=0xB529u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB4D9u; return dd3_static_complete(rt,2u);
        }
        case 0xB4D9u: {
            uint16_t ea=(uint16_t)((0xB9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4DBu; return dd3_static_complete(rt,4u);
        }
        case 0xB4DBu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB4DCu; return dd3_static_complete(rt,2u);
        }
        case 0xB4DCu: {
            uint16_t ea=(uint16_t)(0x00B7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB4DFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B7u,ea)?1u:0u));
        }
        case 0xB4DFu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4E1u; return dd3_static_complete(rt,3u);
        }
        case 0xB4E1u: {
            uint16_t ea=(uint16_t)((0xC3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4E3u; return dd3_static_complete(rt,4u);
        }
        case 0xB4E3u: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB4E6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0xB4E6u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4E8u; return dd3_static_complete(rt,3u);
        }
        case 0xB4E8u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB4EAu,0xB4EDu)) c++; rt->state.cpu.pc=0xB4EDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB4EAu; return dd3_static_complete(rt,2u);
        }
        case 0xB4EAu: {
            dd3_static_push8(rt,(uint8_t)(0xB4ECu>>8)); dd3_static_push8(rt,(uint8_t)0xB4ECu);
            rt->state.cpu.pc=0xB390u; return dd3_static_complete(rt,6u);
        }
        case 0xB4EDu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4EFu; return dd3_static_complete(rt,3u);
        }
        case 0xB4EFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB4F1u,0xB529u)) c++; rt->state.cpu.pc=0xB529u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB4F1u; return dd3_static_complete(rt,2u);
        }
        case 0xB4F1u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4F3u; return dd3_static_complete(rt,3u);
        }
        case 0xB4F3u: {
            uint8_t v=0x80u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB4F5u; return dd3_static_complete(rt,2u);
        }
        case 0xB4F5u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB4F7u,0xB529u)) c++; rt->state.cpu.pc=0xB529u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB4F7u; return dd3_static_complete(rt,2u);
        }
        case 0xB4F7u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4F9u; return dd3_static_complete(rt,2u);
        }
        case 0xB4F9u: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4FBu; return dd3_static_complete(rt,4u);
        }
        case 0xB4FBu: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB4FDu; return dd3_static_complete(rt,2u);
        }
        case 0xB4FDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB4FFu,0xB50Bu)) c++; rt->state.cpu.pc=0xB50Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB4FFu; return dd3_static_complete(rt,2u);
        }
        case 0xB4FFu: {
            uint8_t v=0x08u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB501u; return dd3_static_complete(rt,2u);
        }
        case 0xB501u: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB503u; return dd3_static_complete(rt,2u);
        }
        case 0xB503u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB505u,0xB50Bu)) c++; rt->state.cpu.pc=0xB50Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB505u; return dd3_static_complete(rt,2u);
        }
        case 0xB505u: {
            uint8_t v=0x10u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB507u; return dd3_static_complete(rt,2u);
        }
        case 0xB507u: {
            uint8_t v=0x0Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB509u; return dd3_static_complete(rt,2u);
        }
        case 0xB509u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB50Bu,0xB549u)) c++; rt->state.cpu.pc=0xB549u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB50Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB50Bu: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.y);
            rt->state.cpu.pc=0xB50Du; return dd3_static_complete(rt,3u);
        }
        case 0xB50Du: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB50Fu; return dd3_static_complete(rt,3u);
        }
        case 0xB50Fu: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB512u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0xB512u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB513u; return dd3_static_complete(rt,2u);
        }
        case 0xB513u: {
            uint8_t v=0x11u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB515u; return dd3_static_complete(rt,2u);
        }
        case 0xB515u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB517u; return dd3_static_complete(rt,3u);
        }
        case 0xB517u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB518u; return dd3_static_complete(rt,2u);
        }
        case 0xB518u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB51Au; return dd3_static_complete(rt,3u);
        }
        case 0xB51Au: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB51Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB51Bu: {
            uint16_t ea=(uint16_t)(0xB54Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB51Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB54Bu,ea)?1u:0u));
        }
        case 0xB51Eu: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB520u; return dd3_static_complete(rt,2u);
        }
        case 0xB520u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB522u,0xB529u)) c++; rt->state.cpu.pc=0xB529u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB522u; return dd3_static_complete(rt,2u);
        }
        case 0xB522u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB524u; return dd3_static_complete(rt,3u);
        }
        case 0xB524u: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB527u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0xB527u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB529u,0xB533u)) c++; rt->state.cpu.pc=0xB533u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB529u; return dd3_static_complete(rt,2u);
        }
        case 0xB529u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB52Bu; return dd3_static_complete(rt,5u);
        }
        case 0xB52Bu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB52Du; return dd3_static_complete(rt,3u);
        }
        case 0xB52Du: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB52Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB52Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB531u,0xB4C1u)) c++; rt->state.cpu.pc=0xB4C1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB531u; return dd3_static_complete(rt,2u);
        }
        case 0xB531u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB533u,0xB549u)) c++; rt->state.cpu.pc=0xB549u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB533u; return dd3_static_complete(rt,2u);
        }
        case 0xB533u: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB536u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xB536u: {
            uint16_t ea=(uint16_t)(0x004Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB539u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x004Cu,ea)?1u:0u));
        }
        case 0xB539u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB53Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB53Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB53Du,0xB542u)) c++; rt->state.cpu.pc=0xB542u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB53Du; return dd3_static_complete(rt,2u);
        }
        case 0xB53Du: {
            uint16_t ea=0x04F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB540u; return dd3_static_complete(rt,4u);
        }
        case 0xB540u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB542u; return dd3_static_complete(rt,2u);
        }
        case 0xB542u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB544u; return dd3_static_complete(rt,3u);
        }
        case 0xB544u: {
            dd3_static_write8(rt,(uint16_t)(0x04A0u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB547u; return dd3_static_complete(rt,5u);
        }
        case 0xB547u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB548u; return dd3_static_complete(rt,2u);
        }
        case 0xB548u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB549u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB54Au; return dd3_static_complete(rt,2u);
        }
        case 0xB54Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB563u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB564u; return dd3_static_complete(rt,2u);
        }
        case 0xB564u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB565u; return dd3_static_complete(rt,3u);
        }
        case 0xB565u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB566u; return dd3_static_complete(rt,2u);
        }
        case 0xB566u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB567u; return dd3_static_complete(rt,3u);
        }
        case 0xB567u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB569u; return dd3_static_complete(rt,4u);
        }
        case 0xB569u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB56Bu,0xB56Eu)) c++; rt->state.cpu.pc=0xB56Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB56Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB56Bu: {
            rt->state.cpu.pc=0xB5F3u; return dd3_static_complete(rt,3u);
        }
        case 0xB56Eu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB570u; return dd3_static_complete(rt,2u);
        }
        case 0xB570u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB572u; return dd3_static_complete(rt,2u);
        }
        case 0xB572u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB574u,0xB5F3u)) c++; rt->state.cpu.pc=0xB5F3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB574u; return dd3_static_complete(rt,2u);
        }
        case 0xB574u: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB576u; return dd3_static_complete(rt,4u);
        }
        case 0xB576u: {
            uint8_t v=0x0Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB578u; return dd3_static_complete(rt,2u);
        }
        case 0xB578u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB57Au,0xB5F3u)) c++; rt->state.cpu.pc=0xB5F3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB57Au; return dd3_static_complete(rt,2u);
        }
        case 0xB57Au: {
            uint16_t ea=(uint16_t)(0x04A2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB57Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04A2u,ea)?1u:0u));
        }
        case 0xB57Du: {
            uint16_t ea=(uint16_t)(0x0384u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB580u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0384u,ea)?1u:0u));
        }
        case 0xB580u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB582u; return dd3_static_complete(rt,3u);
        }
        case 0xB582u: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB585u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0xB585u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB587u,0xB5F3u)) c++; rt->state.cpu.pc=0xB5F3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB587u; return dd3_static_complete(rt,2u);
        }
        case 0xB587u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.y);
            rt->state.cpu.pc=0xB589u; return dd3_static_complete(rt,3u);
        }
        case 0xB589u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB58Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB58Bu: {
            uint16_t ea=(uint16_t)(0xB5F9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB58Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB5F9u,ea)?1u:0u));
        }
        case 0xB58Eu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB590u,0xB5F3u)) c++; rt->state.cpu.pc=0xB5F3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB590u; return dd3_static_complete(rt,2u);
        }
        case 0xB590u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB592u; return dd3_static_complete(rt,3u);
        }
        case 0xB592u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB594u,0xB5DAu)) c++; rt->state.cpu.pc=0xB5DAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB594u; return dd3_static_complete(rt,2u);
        }
        case 0xB594u: {
            uint16_t ea=(uint16_t)(0xB5FAu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB597u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB5FAu,ea)?1u:0u));
        }
        case 0xB597u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB599u; return dd3_static_complete(rt,2u);
        }
        case 0xB599u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB59Bu,0xB5A9u)) c++; rt->state.cpu.pc=0xB5A9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB59Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB59Bu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB59Du; return dd3_static_complete(rt,2u);
        }
        case 0xB59Du: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB59Fu; return dd3_static_complete(rt,3u);
        }
        case 0xB59Fu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB5A1u,0xB5DAu)) c++; rt->state.cpu.pc=0xB5DAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5A1u; return dd3_static_complete(rt,2u);
        }
        case 0xB5A1u: {
            uint8_t v=0x0Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5A3u; return dd3_static_complete(rt,2u);
        }
        case 0xB5A3u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB5A5u; return dd3_static_complete(rt,3u);
        }
        case 0xB5A5u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB5A7u,0xB5DAu)) c++; rt->state.cpu.pc=0xB5DAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5A7u; return dd3_static_complete(rt,2u);
        }
        case 0xB5A7u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB5A9u,0xB5ADu)) c++; rt->state.cpu.pc=0xB5ADu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5A9u; return dd3_static_complete(rt,2u);
        }
        case 0xB5A9u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB5ABu; return dd3_static_complete(rt,3u);
        }
        case 0xB5ABu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB5ADu,0xB5DAu)) c++; rt->state.cpu.pc=0xB5DAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5ADu; return dd3_static_complete(rt,2u);
        }
        case 0xB5ADu: {
            uint16_t ea=(uint16_t)(0xB5FBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5B0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB5FBu,ea)?1u:0u));
        }
        case 0xB5B0u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB5B1u; return dd3_static_complete(rt,2u);
        }
        case 0xB5B1u: {
            uint16_t ea=(uint16_t)((0xB9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB5B3u; return dd3_static_complete(rt,4u);
        }
        case 0xB5B3u: {
            uint16_t ea=(uint16_t)(0xB5FCu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5B6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB5FCu,ea)?1u:0u));
        }
        case 0xB5B6u: {
            uint16_t ea=(uint16_t)((0xC3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB5B8u; return dd3_static_complete(rt,4u);
        }
        case 0xB5B8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB5BAu,0xB5DAu)) c++; rt->state.cpu.pc=0xB5DAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5BAu; return dd3_static_complete(rt,2u);
        }
        case 0xB5BAu: {
            uint16_t ea=(uint16_t)(0xB5FDu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5BDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB5FDu,ea)?1u:0u));
        }
        case 0xB5BDu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB5BEu; return dd3_static_complete(rt,2u);
        }
        case 0xB5BEu: {
            uint16_t ea=(uint16_t)((0xB9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB5C0u; return dd3_static_complete(rt,4u);
        }
        case 0xB5C0u: {
            uint16_t ea=(uint16_t)(0xB5FEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5C3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB5FEu,ea)?1u:0u));
        }
        case 0xB5C3u: {
            uint16_t ea=(uint16_t)((0xC3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB5C5u; return dd3_static_complete(rt,4u);
        }
        case 0xB5C5u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB5C7u,0xB5DAu)) c++; rt->state.cpu.pc=0xB5DAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5C7u; return dd3_static_complete(rt,2u);
        }
        case 0xB5C7u: {
            uint16_t ea=(uint16_t)(0xB5FFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5CAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB5FFu,ea)?1u:0u));
        }
        case 0xB5CAu: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB5CCu; return dd3_static_complete(rt,2u);
        }
        case 0xB5CCu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB5CEu,0xB5E1u)) c++; rt->state.cpu.pc=0xB5E1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5CEu; return dd3_static_complete(rt,2u);
        }
        case 0xB5CEu: {
            uint16_t ea=(uint16_t)(0x04B8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5D1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04B8u,ea)?1u:0u));
        }
        case 0xB5D1u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB5D3u,0xB5DAu)) c++; rt->state.cpu.pc=0xB5DAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5D3u; return dd3_static_complete(rt,2u);
        }
        case 0xB5D3u: {
            uint16_t ea=(uint16_t)(0xB5FFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5D6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB5FFu,ea)?1u:0u));
        }
        case 0xB5D6u: {
            uint16_t ea=(uint16_t)((0x6Au+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5D8u; return dd3_static_complete(rt,4u);
        }
        case 0xB5D8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB5DAu,0xB5E1u)) c++; rt->state.cpu.pc=0xB5E1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5DAu; return dd3_static_complete(rt,2u);
        }
        case 0xB5DAu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5DBu; return dd3_static_complete(rt,2u);
        }
        case 0xB5DBu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB5DCu; return dd3_static_complete(rt,2u);
        }
        case 0xB5DCu: {
            uint8_t v=0x07u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB5DEu; return dd3_static_complete(rt,2u);
        }
        case 0xB5DEu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB5DFu; return dd3_static_complete(rt,2u);
        }
        case 0xB5DFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB5E1u,0xB58Bu)) c++; rt->state.cpu.pc=0xB58Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5E1u; return dd3_static_complete(rt,2u);
        }
        case 0xB5E1u: {
            uint8_t v=0x63u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5E3u; return dd3_static_complete(rt,2u);
        }
        case 0xB5E3u: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB5E5u; return dd3_static_complete(rt,4u);
        }
        case 0xB5E5u: {
            uint16_t ea=(uint16_t)(0xB5FFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5E8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB5FFu,ea)?1u:0u));
        }
        case 0xB5E8u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5EAu; return dd3_static_complete(rt,2u);
        }
        case 0xB5EAu: {
            dd3_static_write8(rt,(uint16_t)(0x0312u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB5EDu; return dd3_static_complete(rt,5u);
        }
        case 0xB5EDu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5EEu; return dd3_static_complete(rt,4u);
        }
        case 0xB5EEu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB5EFu; return dd3_static_complete(rt,2u);
        }
        case 0xB5EFu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5F0u; return dd3_static_complete(rt,4u);
        }
        case 0xB5F0u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB5F1u; return dd3_static_complete(rt,2u);
        }
        case 0xB5F1u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB5F2u; return dd3_static_complete(rt,2u);
        }
        case 0xB5F2u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB5F3u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5F4u; return dd3_static_complete(rt,4u);
        }
        case 0xB5F4u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB5F5u; return dd3_static_complete(rt,2u);
        }
        case 0xB5F5u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5F6u; return dd3_static_complete(rt,4u);
        }
        case 0xB5F6u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB5F7u; return dd3_static_complete(rt,2u);
        }
        case 0xB5F7u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB5F8u; return dd3_static_complete(rt,2u);
        }
        case 0xB5F8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB671u: {
            uint16_t ea=0x3Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB673u; return dd3_static_complete(rt,3u);
        }
        case 0xB673u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB675u,0xB676u)) c++; rt->state.cpu.pc=0xB676u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB675u; return dd3_static_complete(rt,2u);
        }
        case 0xB675u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB676u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB678u; return dd3_static_complete(rt,3u);
        }
        case 0xB678u: {
            uint8_t v=0x0Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB67Au; return dd3_static_complete(rt,2u);
        }
        case 0xB67Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB67Cu,0xB67Fu)) c++; rt->state.cpu.pc=0xB67Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB67Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB67Cu: {
            rt->state.cpu.pc=0xB734u; return dd3_static_complete(rt,3u);
        }
        case 0xB67Fu: {
            uint8_t v=0x0Du;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB681u; return dd3_static_complete(rt,2u);
        }
        case 0xB681u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB683u,0xB686u)) c++; rt->state.cpu.pc=0xB686u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB683u; return dd3_static_complete(rt,2u);
        }
        case 0xB683u: {
            rt->state.cpu.pc=0xB7F3u; return dd3_static_complete(rt,3u);
        }
        case 0xB686u: {
            uint16_t ea=0x049Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB689u; return dd3_static_complete(rt,4u);
        }
        case 0xB689u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB68Au; return dd3_static_complete(rt,3u);
        }
        case 0xB68Au: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB68Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB68Cu: {
            dd3_static_write8(rt,0x049Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB68Fu; return dd3_static_complete(rt,4u);
        }
        case 0xB68Fu: {
            dd3_static_push8(rt,(uint8_t)(0xB691u>>8)); dd3_static_push8(rt,(uint8_t)0xB691u);
            rt->state.cpu.pc=0xA301u; return dd3_static_complete(rt,6u);
        }
        case 0xB692u: {
            uint16_t ea=0x72u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB694u; return dd3_static_complete(rt,3u);
        }
        case 0xB694u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB696u,0xB6C4u)) c++; rt->state.cpu.pc=0xB6C4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB696u; return dd3_static_complete(rt,2u);
        }
        case 0xB696u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB698u; return dd3_static_complete(rt,2u);
        }
        case 0xB698u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB69Au,0xB6AFu)) c++; rt->state.cpu.pc=0xB6AFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB69Au; return dd3_static_complete(rt,2u);
        }
        case 0xB69Au: {
            uint16_t ea=0x04B8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB69Du; return dd3_static_complete(rt,4u);
        }
        case 0xB69Du: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB69Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB69Fu: {
            dd3_static_write8(rt,0x6Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6A1u; return dd3_static_complete(rt,3u);
        }
        case 0xB6A1u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6A3u; return dd3_static_complete(rt,2u);
        }
        case 0xB6A3u: {
            dd3_static_write8(rt,0x0312u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6A6u; return dd3_static_complete(rt,4u);
        }
        case 0xB6A6u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6A8u; return dd3_static_complete(rt,2u);
        }
        case 0xB6A8u: {
            dd3_static_write8(rt,0x04CAu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6ABu; return dd3_static_complete(rt,4u);
        }
        case 0xB6ABu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6ADu; return dd3_static_complete(rt,2u);
        }
        case 0xB6ADu: {
            dd3_static_write8(rt,0x72u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6AFu; return dd3_static_complete(rt,3u);
        }
        case 0xB6AFu: {
            uint16_t ea=0x04CAu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB6B2u; return dd3_static_complete(rt,6u);
        }
        case 0xB6B2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB6B4u,0xB6BFu)) c++; rt->state.cpu.pc=0xB6BFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB6B4u; return dd3_static_complete(rt,2u);
        }
        case 0xB6B4u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6B6u; return dd3_static_complete(rt,2u);
        }
        case 0xB6B6u: {
            dd3_static_write8(rt,0x72u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6B8u; return dd3_static_complete(rt,3u);
        }
        case 0xB6B8u: {
            uint16_t ea=0x04B8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6BBu; return dd3_static_complete(rt,4u);
        }
        case 0xB6BBu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6BDu; return dd3_static_complete(rt,2u);
        }
        case 0xB6BDu: {
            dd3_static_write8(rt,0x6Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6BFu; return dd3_static_complete(rt,3u);
        }
        case 0xB6BFu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6C0u; return dd3_static_complete(rt,4u);
        }
        case 0xB6C0u: {
            dd3_static_write8(rt,0x049Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6C3u; return dd3_static_complete(rt,4u);
        }
        case 0xB6C3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB6C4u: {
            uint16_t ea=0x04B8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6C7u; return dd3_static_complete(rt,4u);
        }
        case 0xB6C7u: {
            uint8_t v=0x81u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6C9u; return dd3_static_complete(rt,2u);
        }
        case 0xB6C9u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB6CBu,0xB6CFu)) c++; rt->state.cpu.pc=0xB6CFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB6CBu; return dd3_static_complete(rt,2u);
        }
        case 0xB6CBu: {
            uint8_t v=0x7Du;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6CDu; return dd3_static_complete(rt,2u);
        }
        case 0xB6CDu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6CFu; return dd3_static_complete(rt,2u);
        }
        case 0xB6CFu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB6D0u; return dd3_static_complete(rt,2u);
        }
        case 0xB6D0u: {
            uint16_t ea=(uint16_t)(0xAB61u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6D3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAB61u,ea)?1u:0u));
        }
        case 0xB6D3u: {
            dd3_static_write8(rt,0x0312u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6D6u; return dd3_static_complete(rt,4u);
        }
        case 0xB6D6u: {
            uint16_t ea=0x04A6u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6D9u; return dd3_static_complete(rt,4u);
        }
        case 0xB6D9u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB6DBu; return dd3_static_complete(rt,2u);
        }
        case 0xB6DBu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB6DDu,0xB72Fu)) c++; rt->state.cpu.pc=0xB72Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB6DDu; return dd3_static_complete(rt,2u);
        }
        case 0xB6DDu: {
            uint16_t ea=0x04B8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6E0u; return dd3_static_complete(rt,4u);
        }
        case 0xB6E0u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6E2u; return dd3_static_complete(rt,2u);
        }
        case 0xB6E2u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6E4u; return dd3_static_complete(rt,2u);
        }
        case 0xB6E4u: {
            dd3_static_write8(rt,0x0312u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6E7u; return dd3_static_complete(rt,4u);
        }
        case 0xB6E7u: {
            uint16_t ea=0x04A4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6EAu; return dd3_static_complete(rt,4u);
        }
        case 0xB6EAu: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB6ECu; return dd3_static_complete(rt,2u);
        }
        case 0xB6ECu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB6EEu,0xB72Fu)) c++; rt->state.cpu.pc=0xB72Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB6EEu; return dd3_static_complete(rt,2u);
        }
        case 0xB6EEu: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB6F0u; return dd3_static_complete(rt,2u);
        }
        case 0xB6F0u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB6F2u,0xB702u)) c++; rt->state.cpu.pc=0xB702u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB6F2u; return dd3_static_complete(rt,2u);
        }
        case 0xB6F2u: {
            uint16_t ea=0x04B8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6F5u; return dd3_static_complete(rt,4u);
        }
        case 0xB6F5u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6F7u; return dd3_static_complete(rt,2u);
        }
        case 0xB6F7u: {
            dd3_static_write8(rt,0x6Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6F9u; return dd3_static_complete(rt,3u);
        }
        case 0xB6F9u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6FBu; return dd3_static_complete(rt,2u);
        }
        case 0xB6FBu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6FDu; return dd3_static_complete(rt,2u);
        }
        case 0xB6FDu: {
            dd3_static_write8(rt,0x0312u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB700u; return dd3_static_complete(rt,4u);
        }
        case 0xB700u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB702u,0xB72Fu)) c++; rt->state.cpu.pc=0xB72Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB702u; return dd3_static_complete(rt,2u);
        }
        case 0xB702u: {
            uint16_t ea=0x04A2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB705u; return dd3_static_complete(rt,4u);
        }
        case 0xB705u: {
            uint16_t ea=0x6Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB707u; return dd3_static_complete(rt,3u);
        }
        case 0xB707u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB709u; return dd3_static_complete(rt,2u);
        }
        case 0xB709u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB70Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB70Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0068u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB70Eu; return dd3_static_complete(rt,5u);
        }
        case 0xB70Eu: {
            uint16_t ea=(uint16_t)(0x007Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB711u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x007Du,ea)?1u:0u));
        }
        case 0xB711u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB713u; return dd3_static_complete(rt,2u);
        }
        case 0xB713u: {
            uint16_t ea=(uint16_t)(0x0068u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB716u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0068u,ea)?1u:0u));
        }
        case 0xB716u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB718u; return dd3_static_complete(rt,2u);
        }
        case 0xB718u: {
            dd3_static_write8(rt,(uint16_t)(0x007Du+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB71Bu; return dd3_static_complete(rt,5u);
        }
        case 0xB71Bu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB71Du; return dd3_static_complete(rt,2u);
        }
        case 0xB71Du: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB720u; return dd3_static_complete(rt,5u);
        }
        case 0xB720u: {
            dd3_static_write8(rt,0x46u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB722u; return dd3_static_complete(rt,3u);
        }
        case 0xB722u: {
            uint16_t ea=0x6Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB724u; return dd3_static_complete(rt,3u);
        }
        case 0xB724u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB726u; return dd3_static_complete(rt,2u);
        }
        case 0xB726u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB728u; return dd3_static_complete(rt,2u);
        }
        case 0xB728u: {
            dd3_static_write8(rt,0x7Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB72Au; return dd3_static_complete(rt,3u);
        }
        case 0xB72Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB72Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB72Cu: {
            dd3_static_write8(rt,0x031Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB72Fu; return dd3_static_complete(rt,4u);
        }
        case 0xB72Fu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB730u; return dd3_static_complete(rt,4u);
        }
        case 0xB730u: {
            dd3_static_write8(rt,0x049Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB733u; return dd3_static_complete(rt,4u);
        }
        case 0xB733u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB734u: {
            uint16_t ea=0x72u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB736u; return dd3_static_complete(rt,3u);
        }
        case 0xB736u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB738u; return dd3_static_complete(rt,2u);
        }
        case 0xB738u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB73Au; return dd3_static_complete(rt,2u);
        }
        case 0xB73Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB73Cu,0xB796u)) c++; rt->state.cpu.pc=0xB796u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB73Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB73Cu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB73Du; return dd3_static_complete(rt,2u);
        }
        case 0xB73Du: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB73Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB73Eu: {
            uint16_t ea=(uint16_t)(0xB74Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB741u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB74Bu,ea)?1u:0u));
        }
        case 0xB741u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB743u; return dd3_static_complete(rt,3u);
        }
        case 0xB743u: {
            uint16_t ea=(uint16_t)(0xB74Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB746u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB74Cu,ea)?1u:0u));
        }
        case 0xB746u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB748u; return dd3_static_complete(rt,3u);
        }
        case 0xB748u: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x0029u); return dd3_static_complete(rt,5u);
        }
        case 0xB796u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB7F3u: {
            uint16_t ea=0x72u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB7F5u; return dd3_static_complete(rt,3u);
        }
        case 0xB7F5u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB7F7u; return dd3_static_complete(rt,2u);
        }
        case 0xB7F7u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB7F9u; return dd3_static_complete(rt,2u);
        }
        case 0xB7F9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB7FBu,0xB796u)) c++; rt->state.cpu.pc=0xB796u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB7FBu; return dd3_static_complete(rt,2u);
        }
        case 0xB7FBu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB7FCu; return dd3_static_complete(rt,2u);
        }
        case 0xB7FCu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB7FDu; return dd3_static_complete(rt,2u);
        }
        case 0xB7FDu: {
            uint16_t ea=(uint16_t)(0xB80Au+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB800u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB80Au,ea)?1u:0u));
        }
        case 0xB800u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB802u; return dd3_static_complete(rt,3u);
        }
        case 0xB802u: {
            uint16_t ea=(uint16_t)(0xB80Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB805u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB80Bu,ea)?1u:0u));
        }
        case 0xB805u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB807u; return dd3_static_complete(rt,3u);
        }
        case 0xB807u: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x0029u); return dd3_static_complete(rt,5u);
        }
        case 0xB8A6u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8A7u; return dd3_static_complete(rt,3u);
        }
        case 0xB8A7u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8A9u; return dd3_static_complete(rt,3u);
        }
        case 0xB8A9u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8AAu; return dd3_static_complete(rt,2u);
        }
        case 0xB8AAu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8ABu; return dd3_static_complete(rt,3u);
        }
        case 0xB8ABu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8ADu; return dd3_static_complete(rt,2u);
        }
        case 0xB8ADu: {
            uint16_t ea=(uint16_t)(0xB8CDu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8B0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB8CDu,ea)?1u:0u));
        }
        case 0xB8B0u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB8B2u,0xB8C3u)) c++; rt->state.cpu.pc=0xB8C3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB8B2u; return dd3_static_complete(rt,2u);
        }
        case 0xB8B2u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB8B4u; return dd3_static_complete(rt,3u);
        }
        case 0xB8B4u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB8B6u,0xB8B9u)) c++; rt->state.cpu.pc=0xB8B9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB8B6u; return dd3_static_complete(rt,2u);
        }
        case 0xB8B6u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB8B7u; return dd3_static_complete(rt,2u);
        }
        case 0xB8B7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB8B9u,0xB8ADu)) c++; rt->state.cpu.pc=0xB8ADu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB8B9u; return dd3_static_complete(rt,2u);
        }
        case 0xB8B9u: {
            uint16_t ea=(uint16_t)(0x0487u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8BCu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0487u,ea)?1u:0u));
        }
        case 0xB8BCu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB8BEu,0xB8C8u)) c++; rt->state.cpu.pc=0xB8C8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB8BEu; return dd3_static_complete(rt,2u);
        }
        case 0xB8BEu: {
            uint16_t ea=(uint16_t)(0x0483u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8C1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0483u,ea)?1u:0u));
        }
        case 0xB8C1u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB8C3u,0xB8C8u)) c++; rt->state.cpu.pc=0xB8C8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB8C3u; return dd3_static_complete(rt,2u);
        }
        case 0xB8C3u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8C4u; return dd3_static_complete(rt,4u);
        }
        case 0xB8C4u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB8C5u; return dd3_static_complete(rt,2u);
        }
        case 0xB8C5u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8C6u; return dd3_static_complete(rt,4u);
        }
        case 0xB8C6u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB8C7u; return dd3_static_complete(rt,2u);
        }
        case 0xB8C7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB8C8u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8C9u; return dd3_static_complete(rt,4u);
        }
        case 0xB8C9u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB8CAu; return dd3_static_complete(rt,2u);
        }
        case 0xB8CAu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8CBu; return dd3_static_complete(rt,4u);
        }
        case 0xB8CBu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB8CCu; return dd3_static_complete(rt,2u);
        }
        case 0xB8CCu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB8D0u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8D2u; return dd3_static_complete(rt,2u);
        }
        case 0xB8D2u: {
            uint16_t ea=0x72u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8D4u; return dd3_static_complete(rt,3u);
        }
        case 0xB8D4u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8D6u; return dd3_static_complete(rt,2u);
        }
        case 0xB8D6u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB8D8u; return dd3_static_complete(rt,2u);
        }
        case 0xB8D8u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB8DAu,0xB8DDu)) c++; rt->state.cpu.pc=0xB8DDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB8DAu; return dd3_static_complete(rt,2u);
        }
        case 0xB8DAu: {
            rt->state.cpu.pc=0xB97Au; return dd3_static_complete(rt,3u);
        }
        case 0xB8DDu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB8DFu; return dd3_static_complete(rt,2u);
        }
        case 0xB8DFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB8E1u,0xB919u)) c++; rt->state.cpu.pc=0xB919u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB8E1u; return dd3_static_complete(rt,2u);
        }
        case 0xB8E1u: {
            uint16_t ea=0x0312u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8E4u; return dd3_static_complete(rt,4u);
        }
        case 0xB8E4u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB8E6u,0xB8F3u)) c++; rt->state.cpu.pc=0xB8F3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB8E6u; return dd3_static_complete(rt,2u);
        }
        case 0xB8E6u: {
            uint16_t ea=0xB9u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8E8u; return dd3_static_complete(rt,3u);
        }
        case 0xB8E8u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB8E9u; return dd3_static_complete(rt,2u);
        }
        case 0xB8E9u: {
            uint8_t v=0x80u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB8EBu; return dd3_static_complete(rt,2u);
        }
        case 0xB8EBu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB8EDu,0xB940u)) c++; rt->state.cpu.pc=0xB940u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB8EDu; return dd3_static_complete(rt,2u);
        }
        case 0xB8EDu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB8EFu; return dd3_static_complete(rt,2u);
        }
        case 0xB8EFu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB8F1u,0xB940u)) c++; rt->state.cpu.pc=0xB940u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB8F1u; return dd3_static_complete(rt,2u);
        }
        case 0xB8F1u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB8F3u,0xB8FEu)) c++; rt->state.cpu.pc=0xB8FEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB8F3u; return dd3_static_complete(rt,2u);
        }
        case 0xB8F3u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8F5u; return dd3_static_complete(rt,2u);
        }
        case 0xB8F5u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB8F6u; return dd3_static_complete(rt,2u);
        }
        case 0xB8F6u: {
            uint16_t ea=0xB9u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB8F8u; return dd3_static_complete(rt,3u);
        }
        case 0xB8F8u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB8FAu,0xB95Cu)) c++; rt->state.cpu.pc=0xB95Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB8FAu; return dd3_static_complete(rt,2u);
        }
        case 0xB8FAu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB8FCu; return dd3_static_complete(rt,2u);
        }
        case 0xB8FCu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB8FEu,0xB95Cu)) c++; rt->state.cpu.pc=0xB95Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB8FEu; return dd3_static_complete(rt,2u);
        }
        case 0xB8FEu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB900u; return dd3_static_complete(rt,2u);
        }
        case 0xB900u: {
            dd3_static_write8(rt,0xB9u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB902u; return dd3_static_complete(rt,3u);
        }
        case 0xB902u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB904u; return dd3_static_complete(rt,2u);
        }
        case 0xB904u: {
            dd3_static_write8(rt,0x72u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB906u; return dd3_static_complete(rt,3u);
        }
        case 0xB906u: {
            uint8_t v=0x41u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB908u; return dd3_static_complete(rt,2u);
        }
        case 0xB908u: {
            dd3_static_push8(rt,(uint8_t)(0xB90Au>>8)); dd3_static_push8(rt,(uint8_t)0xB90Au);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0xB90Bu: {
            uint8_t v=0x09u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB90Du; return dd3_static_complete(rt,2u);
        }
        case 0xB90Du: {
            dd3_static_write8(rt,0x04FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB910u; return dd3_static_complete(rt,4u);
        }
        case 0xB910u: {
            uint8_t v=0x06u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB912u; return dd3_static_complete(rt,2u);
        }
        case 0xB912u: {
            dd3_static_write8(rt,0x0382u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB915u; return dd3_static_complete(rt,4u);
        }
        case 0xB915u: {
            dd3_static_write8(rt,0x0383u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB918u; return dd3_static_complete(rt,4u);
        }
        case 0xB918u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB919u: {
            uint16_t ea=0x049Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB91Cu; return dd3_static_complete(rt,4u);
        }
        case 0xB91Cu: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB91Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB91Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB920u,0xB93Bu)) c++; rt->state.cpu.pc=0xB93Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB920u; return dd3_static_complete(rt,2u);
        }
        case 0xB920u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB922u; return dd3_static_complete(rt,2u);
        }
        case 0xB922u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB924u,0xB930u)) c++; rt->state.cpu.pc=0xB930u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB924u; return dd3_static_complete(rt,2u);
        }
        case 0xB924u: {
            uint16_t ea=0x04C4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB927u; return dd3_static_complete(rt,4u);
        }
        case 0xB927u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB929u,0xB93Bu)) c++; rt->state.cpu.pc=0xB93Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB929u; return dd3_static_complete(rt,2u);
        }
        case 0xB929u: {
            uint16_t ea=0x04C5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB92Cu; return dd3_static_complete(rt,4u);
        }
        case 0xB92Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB92Eu,0xB93Bu)) c++; rt->state.cpu.pc=0xB93Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB92Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB92Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB930u,0xB937u)) c++; rt->state.cpu.pc=0xB937u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB930u; return dd3_static_complete(rt,2u);
        }
        case 0xB930u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB931u; return dd3_static_complete(rt,2u);
        }
        case 0xB931u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB932u; return dd3_static_complete(rt,2u);
        }
        case 0xB932u: {
            uint16_t ea=(uint16_t)(0x04C4u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB935u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04C4u,ea)?1u:0u));
        }
        case 0xB935u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB937u,0xB93Bu)) c++; rt->state.cpu.pc=0xB93Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB937u; return dd3_static_complete(rt,2u);
        }
        case 0xB937u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB939u; return dd3_static_complete(rt,2u);
        }
        case 0xB939u: {
            dd3_static_write8(rt,0x72u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB93Bu; return dd3_static_complete(rt,3u);
        }
        case 0xB93Bu: {
            uint16_t ea=0x0312u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB93Eu; return dd3_static_complete(rt,4u);
        }
        case 0xB93Eu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB940u,0xB95Cu)) c++; rt->state.cpu.pc=0xB95Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB940u; return dd3_static_complete(rt,2u);
        }
        case 0xB940u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB942u; return dd3_static_complete(rt,2u);
        }
        case 0xB942u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB943u; return dd3_static_complete(rt,2u);
        }
        case 0xB943u: {
            uint16_t ea=0xB9u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB945u; return dd3_static_complete(rt,3u);
        }
        case 0xB945u: {
            dd3_static_write8(rt,0xB9u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB947u; return dd3_static_complete(rt,3u);
        }
        case 0xB947u: {
            uint16_t ea=0xC3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB949u; return dd3_static_complete(rt,3u);
        }
        case 0xB949u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB94Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB94Bu: {
            dd3_static_write8(rt,0xC3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB94Du; return dd3_static_complete(rt,3u);
        }
        case 0xB94Du: {
            uint8_t v=0x88u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB94Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB94Fu: {
            uint16_t ea=0xB9u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB951u; return dd3_static_complete(rt,3u);
        }
        case 0xB951u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB953u,0xB976u)) c++; rt->state.cpu.pc=0xB976u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB953u; return dd3_static_complete(rt,2u);
        }
        case 0xB953u: {
            dd3_static_write8(rt,0xB9u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB955u; return dd3_static_complete(rt,3u);
        }
        case 0xB955u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB957u; return dd3_static_complete(rt,2u);
        }
        case 0xB957u: {
            dd3_static_write8(rt,0x0312u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB95Au; return dd3_static_complete(rt,4u);
        }
        case 0xB95Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB95Cu,0xB976u)) c++; rt->state.cpu.pc=0xB976u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB95Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB95Cu: {
            uint16_t ea=0xB9u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB95Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB95Eu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB95Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB95Fu: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB961u; return dd3_static_complete(rt,2u);
        }
        case 0xB961u: {
            dd3_static_write8(rt,0xB9u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB963u; return dd3_static_complete(rt,3u);
        }
        case 0xB963u: {
            uint16_t ea=0xC3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB965u; return dd3_static_complete(rt,3u);
        }
        case 0xB965u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB967u; return dd3_static_complete(rt,2u);
        }
        case 0xB967u: {
            dd3_static_write8(rt,0xC3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB969u; return dd3_static_complete(rt,3u);
        }
        case 0xB969u: {
            uint8_t v=0x5Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB96Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB96Bu: {
            uint16_t ea=0xB9u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB96Du; return dd3_static_complete(rt,3u);
        }
        case 0xB96Du: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB96Fu,0xB976u)) c++; rt->state.cpu.pc=0xB976u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB96Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB96Fu: {
            dd3_static_write8(rt,0xB9u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB971u; return dd3_static_complete(rt,3u);
        }
        case 0xB971u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB973u; return dd3_static_complete(rt,2u);
        }
        case 0xB973u: {
            dd3_static_write8(rt,0x0312u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB976u; return dd3_static_complete(rt,4u);
        }
        case 0xB976u: {
            dd3_static_push8(rt,(uint8_t)(0xB978u>>8)); dd3_static_push8(rt,(uint8_t)0xB978u);
            rt->state.cpu.pc=0xB9D6u; return dd3_static_complete(rt,6u);
        }
        case 0xB979u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB97Au: {
            uint16_t ea=0xEBu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB97Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB97Cu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB97Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB97Eu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB980u,0xB9C1u)) c++; rt->state.cpu.pc=0xB9C1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB980u; return dd3_static_complete(rt,2u);
        }
        case 0xB980u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB982u; return dd3_static_complete(rt,2u);
        }
        case 0xB982u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB984u,0xB976u)) c++; rt->state.cpu.pc=0xB976u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB984u; return dd3_static_complete(rt,2u);
        }
        case 0xB984u: {
            uint16_t ea=0x36u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB986u; return dd3_static_complete(rt,3u);
        }
        case 0xB986u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB988u; return dd3_static_complete(rt,2u);
        }
        case 0xB988u: {
            dd3_static_write8(rt,0x36u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB98Au; return dd3_static_complete(rt,3u);
        }
        case 0xB98Au: {
            uint16_t ea=0x37u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB98Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB98Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB98Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB98Eu: {
            dd3_static_write8(rt,0x37u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB990u; return dd3_static_complete(rt,3u);
        }
        case 0xB990u: {
            uint16_t ea=0x04C4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB993u; return dd3_static_complete(rt,4u);
        }
        case 0xB993u: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB995u; return dd3_static_complete(rt,2u);
        }
        case 0xB995u: {
            dd3_static_write8(rt,0x04C4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB998u; return dd3_static_complete(rt,4u);
        }
        case 0xB998u: {
            uint16_t ea=0x04C5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB99Bu; return dd3_static_complete(rt,4u);
        }
        case 0xB99Bu: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB99Du; return dd3_static_complete(rt,2u);
        }
        case 0xB99Du: {
            dd3_static_write8(rt,0x04C5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB9A0u; return dd3_static_complete(rt,4u);
        }
        case 0xB9A0u: {
            uint16_t ea=0xE1u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9A2u; return dd3_static_complete(rt,3u);
        }
        case 0xB9A2u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB9A4u; return dd3_static_complete(rt,2u);
        }
        case 0xB9A4u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB9A6u,0xB976u)) c++; rt->state.cpu.pc=0xB976u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB9A6u; return dd3_static_complete(rt,2u);
        }
        case 0xB9A6u: {
            uint8_t v=0x13u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9A8u; return dd3_static_complete(rt,2u);
        }
        case 0xB9A8u: {
            uint16_t ea=0x04C4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9ABu; return dd3_static_complete(rt,4u);
        }
        case 0xB9ABu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB9ADu,0xB9B4u)) c++; rt->state.cpu.pc=0xB9B4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB9ADu; return dd3_static_complete(rt,2u);
        }
        case 0xB9ADu: {
            dd3_static_write8(rt,0x44u,rt->state.cpu.y);
            rt->state.cpu.pc=0xB9AFu; return dd3_static_complete(rt,3u);
        }
        case 0xB9AFu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9B1u; return dd3_static_complete(rt,2u);
        }
        case 0xB9B1u: {
            dd3_static_write8(rt,0x04C4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB9B4u; return dd3_static_complete(rt,4u);
        }
        case 0xB9B4u: {
            uint16_t ea=0x04C5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9B7u; return dd3_static_complete(rt,4u);
        }
        case 0xB9B7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB9B9u,0xB9BEu)) c++; rt->state.cpu.pc=0xB9BEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB9B9u; return dd3_static_complete(rt,2u);
        }
        case 0xB9B9u: {
            dd3_static_write8(rt,0x45u,rt->state.cpu.y);
            rt->state.cpu.pc=0xB9BBu; return dd3_static_complete(rt,3u);
        }
        case 0xB9BBu: {
            dd3_static_write8(rt,0x04C5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB9BEu; return dd3_static_complete(rt,4u);
        }
        case 0xB9BEu: {
            rt->state.cpu.pc=0xB976u; return dd3_static_complete(rt,3u);
        }
        case 0xB9C1u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9C3u; return dd3_static_complete(rt,2u);
        }
        case 0xB9C3u: {
            dd3_static_write8(rt,0x3Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB9C5u; return dd3_static_complete(rt,3u);
        }
        case 0xB9C5u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9C7u; return dd3_static_complete(rt,2u);
        }
        case 0xB9C7u: {
            uint16_t ea=(uint16_t)(0x04C4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9CAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04C4u,ea)?1u:0u));
        }
        case 0xB9CAu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB9CCu,0xB9D0u)) c++; rt->state.cpu.pc=0xB9D0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB9CCu; return dd3_static_complete(rt,2u);
        }
        case 0xB9CCu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9CEu; return dd3_static_complete(rt,2u);
        }
        case 0xB9CEu: {
            dd3_static_write8(rt,(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB9D0u; return dd3_static_complete(rt,4u);
        }
        case 0xB9D0u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB9D1u; return dd3_static_complete(rt,2u);
        }
        case 0xB9D1u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xB9D3u; return dd3_static_complete(rt,2u);
        }
        case 0xB9D3u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB9D5u,0xB9C7u)) c++; rt->state.cpu.pc=0xB9C7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB9D5u; return dd3_static_complete(rt,2u);
        }
        case 0xB9D5u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB9D6u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9D8u; return dd3_static_complete(rt,2u);
        }
        case 0xB9D8u: {
            uint16_t ea=(uint16_t)(0x04C4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9DBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04C4u,ea)?1u:0u));
        }
        case 0xB9DBu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB9DDu,0xB9E9u)) c++; rt->state.cpu.pc=0xB9E9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB9DDu; return dd3_static_complete(rt,2u);
        }
        case 0xB9DDu: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9DFu; return dd3_static_complete(rt,4u);
        }
        case 0xB9DFu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB9E1u,0xB9E9u)) c++; rt->state.cpu.pc=0xB9E9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB9E1u; return dd3_static_complete(rt,2u);
        }
        case 0xB9E1u: {
            uint16_t ea=0xB9u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9E3u; return dd3_static_complete(rt,3u);
        }
        case 0xB9E3u: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB9E5u; return dd3_static_complete(rt,4u);
        }
        case 0xB9E5u: {
            uint16_t ea=0xC3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9E7u; return dd3_static_complete(rt,3u);
        }
        case 0xB9E7u: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB9E9u; return dd3_static_complete(rt,4u);
        }
        case 0xB9E9u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB9EAu; return dd3_static_complete(rt,2u);
        }
        case 0xB9EAu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xB9ECu; return dd3_static_complete(rt,2u);
        }
        case 0xB9ECu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB9EEu,0xB9D8u)) c++; rt->state.cpu.pc=0xB9D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB9EEu; return dd3_static_complete(rt,2u);
        }
        case 0xB9EEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB9EFu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9F1u; return dd3_static_complete(rt,2u);
        }
        case 0xB9F1u: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB9F3u; return dd3_static_complete(rt,4u);
        }
        case 0xB9F3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xBEC0u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBEC1u; return dd3_static_complete(rt,2u);
        }
        case 0xBEC1u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBEC2u; return dd3_static_complete(rt,3u);
        }
        case 0xBEC2u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBEC3u; return dd3_static_complete(rt,2u);
        }
        case 0xBEC3u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBEC4u; return dd3_static_complete(rt,3u);
        }
        case 0xBEC4u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBEC6u; return dd3_static_complete(rt,3u);
        }
        case 0xBEC6u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBEC7u; return dd3_static_complete(rt,3u);
        }
        case 0xBEC7u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBEC9u; return dd3_static_complete(rt,3u);
        }
        case 0xBEC9u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBECAu; return dd3_static_complete(rt,3u);
        }
        case 0xBECAu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBECCu; return dd3_static_complete(rt,2u);
        }
        case 0xBECCu: {
            uint16_t ea=(uint16_t)(0x003Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBECFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Cu,ea)?1u:0u));
        }
        case 0xBECFu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xBED1u,0xBEF0u)) c++; rt->state.cpu.pc=0xBEF0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBED1u; return dd3_static_complete(rt,2u);
        }
        case 0xBED1u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBED2u; return dd3_static_complete(rt,2u);
        }
        case 0xBED2u: {
            uint16_t ea=(uint16_t)(0x003Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBED5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x003Cu,ea)?1u:0u));
        }
        case 0xBED5u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xBED7u,0xBEF0u)) c++; rt->state.cpu.pc=0xBEF0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBED7u; return dd3_static_complete(rt,2u);
        }
        case 0xBED7u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xBED9u,0xBEDCu)) c++; rt->state.cpu.pc=0xBEDCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBED9u; return dd3_static_complete(rt,2u);
        }
        case 0xBED9u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBEDAu; return dd3_static_complete(rt,2u);
        }
        case 0xBEDAu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBEDCu,0xBED1u)) c++; rt->state.cpu.pc=0xBED1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBEDCu; return dd3_static_complete(rt,2u);
        }
        case 0xBEDCu: {
            uint16_t ea=0x03C4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBEDFu; return dd3_static_complete(rt,4u);
        }
        case 0xBEDFu: {
            dd3_static_write8(rt,(uint16_t)(0x00CDu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBEE2u; return dd3_static_complete(rt,5u);
        }
        case 0xBEE2u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBEE4u; return dd3_static_complete(rt,2u);
        }
        case 0xBEE4u: {
            dd3_static_write8(rt,(uint16_t)(0x00D7u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBEE7u; return dd3_static_complete(rt,5u);
        }
        case 0xBEE7u: {
            uint16_t ea=0x03C5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBEEAu; return dd3_static_complete(rt,4u);
        }
        case 0xBEEAu: {
            dd3_static_write8(rt,(uint16_t)(0x0384u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBEEDu; return dd3_static_complete(rt,5u);
        }
        case 0xBEEDu: {
            rt->state.cpu.pc=0xBF1Eu; return dd3_static_complete(rt,3u);
        }
        case 0xBEF0u: {
            uint16_t ea=(uint16_t)(0x038Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBEF3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x038Bu,ea)?1u:0u));
        }
        case 0xBEF3u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBEF5u; return dd3_static_complete(rt,2u);
        }
        case 0xBEF5u: {
            uint8_t v=0x07u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBEF7u; return dd3_static_complete(rt,2u);
        }
        case 0xBEF7u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBEF9u,0xBED9u)) c++; rt->state.cpu.pc=0xBED9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBEF9u; return dd3_static_complete(rt,2u);
        }
        case 0xBEF9u: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBEFBu; return dd3_static_complete(rt,2u);
        }
        case 0xBEFBu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBEFDu,0xBED9u)) c++; rt->state.cpu.pc=0xBED9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBEFDu; return dd3_static_complete(rt,2u);
        }
        case 0xBEFDu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBEFFu; return dd3_static_complete(rt,2u);
        }
        case 0xBEFFu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBF01u,0xBED9u)) c++; rt->state.cpu.pc=0xBED9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBF01u; return dd3_static_complete(rt,2u);
        }
        case 0xBF01u: {
            uint16_t ea=(uint16_t)(0x00CBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF04u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00CBu,ea)?1u:0u));
        }
        case 0xBF04u: {
            dd3_static_write8(rt,(uint16_t)(0x00CDu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBF07u; return dd3_static_complete(rt,5u);
        }
        case 0xBF07u: {
            uint16_t ea=(uint16_t)(0x00D5u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF0Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00D5u,ea)?1u:0u));
        }
        case 0xBF0Au: {
            dd3_static_write8(rt,(uint16_t)(0x00D7u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBF0Du; return dd3_static_complete(rt,5u);
        }
        case 0xBF0Du: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF10u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0xBF10u: {
            dd3_static_write8(rt,(uint16_t)(0x0384u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBF13u; return dd3_static_complete(rt,5u);
        }
        case 0xBF13u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF15u; return dd3_static_complete(rt,3u);
        }
        case 0xBF15u: {
            uint8_t v=0x0Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBF17u; return dd3_static_complete(rt,2u);
        }
        case 0xBF17u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xBF19u,0xBF1Eu)) c++; rt->state.cpu.pc=0xBF1Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBF19u; return dd3_static_complete(rt,2u);
        }
        case 0xBF19u: {
            uint8_t v=0x3Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF1Bu; return dd3_static_complete(rt,2u);
        }
        case 0xBF1Bu: {
            dd3_static_write8(rt,(uint16_t)(0x00CDu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBF1Eu; return dd3_static_complete(rt,5u);
        }
        case 0xBF1Eu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF20u; return dd3_static_complete(rt,2u);
        }
        case 0xBF20u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF22u; return dd3_static_complete(rt,3u);
        }
        case 0xBF22u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF23u; return dd3_static_complete(rt,2u);
        }
        case 0xBF23u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBF25u,0xBF29u)) c++; rt->state.cpu.pc=0xBF29u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBF25u; return dd3_static_complete(rt,2u);
        }
        case 0xBF25u: {
            uint8_t v=0x28u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF27u; return dd3_static_complete(rt,2u);
        }
        case 0xBF27u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF29u; return dd3_static_complete(rt,3u);
        }
        case 0xBF29u: {
            uint16_t ea=0x00F3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF2Cu; return dd3_static_complete(rt,4u);
        }
        case 0xBF2Cu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF2Du; return dd3_static_complete(rt,2u);
        }
        case 0xBF2Du: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBF2Eu; return dd3_static_complete(rt,2u);
        }
        case 0xBF2Eu: {
            uint16_t ea=(uint16_t)(0xBF9Fu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF31u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBF9Fu,ea)?1u:0u));
        }
        case 0xBF31u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF33u; return dd3_static_complete(rt,3u);
        }
        case 0xBF33u: {
            uint16_t ea=(uint16_t)(0xBFA0u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF36u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBFA0u,ea)?1u:0u));
        }
        case 0xBF36u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF38u; return dd3_static_complete(rt,3u);
        }
        case 0xBF38u: {
            uint16_t ea=(uint16_t)(0x0384u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF3Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0384u,ea)?1u:0u));
        }
        case 0xBF3Bu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF3Cu; return dd3_static_complete(rt,2u);
        }
        case 0xBF3Cu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF3Du; return dd3_static_complete(rt,2u);
        }
        case 0xBF3Du: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBF3Eu; return dd3_static_complete(rt,2u);
        }
        case 0xBF3Eu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF40u; return dd3_static_complete(rt,3u);
        }
        case 0xBF40u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xBF41u; return dd3_static_complete(rt,2u);
        }
        case 0xBF41u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xBF43u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xBF43u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBF44u; return dd3_static_complete(rt,2u);
        }
        case 0xBF44u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF46u; return dd3_static_complete(rt,3u);
        }
        case 0xBF46u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xBF48u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xBF48u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBF49u; return dd3_static_complete(rt,2u);
        }
        case 0xBF49u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xBF4Bu,0xBF5Au)) c++; rt->state.cpu.pc=0xBF5Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBF4Bu; return dd3_static_complete(rt,2u);
        }
        case 0xBF4Bu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF4Du; return dd3_static_complete(rt,3u);
        }
        case 0xBF4Du: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xBF4Eu; return dd3_static_complete(rt,2u);
        }
        case 0xBF4Eu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xBF50u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xBF50u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBF51u; return dd3_static_complete(rt,2u);
        }
        case 0xBF51u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF53u; return dd3_static_complete(rt,3u);
        }
        case 0xBF53u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xBF55u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xBF55u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xBF57u,0xBF6Cu)) c++; rt->state.cpu.pc=0xBF6Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBF57u; return dd3_static_complete(rt,2u);
        }
        case 0xBF57u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF58u; return dd3_static_complete(rt,2u);
        }
        case 0xBF58u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBF5Au,0xBF6Cu)) c++; rt->state.cpu.pc=0xBF6Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBF5Au; return dd3_static_complete(rt,2u);
        }
        case 0xBF5Au: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF5Cu; return dd3_static_complete(rt,3u);
        }
        case 0xBF5Cu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xBF5Du; return dd3_static_complete(rt,2u);
        }
        case 0xBF5Du: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBF5Fu; return dd3_static_complete(rt,3u);
        }
        case 0xBF5Fu: {
            dd3_static_write8(rt,(uint16_t)(0x00B9u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBF62u; return dd3_static_complete(rt,5u);
        }
        case 0xBF62u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF64u; return dd3_static_complete(rt,3u);
        }
        case 0xBF64u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBF66u; return dd3_static_complete(rt,2u);
        }
        case 0xBF66u: {
            dd3_static_write8(rt,(uint16_t)(0x00C3u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBF69u; return dd3_static_complete(rt,5u);
        }
        case 0xBF69u: {
            rt->state.cpu.pc=0xBF7Bu; return dd3_static_complete(rt,3u);
        }
        case 0xBF6Cu: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF6Eu; return dd3_static_complete(rt,3u);
        }
        case 0xBF6Eu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xBF6Fu; return dd3_static_complete(rt,2u);
        }
        case 0xBF6Fu: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xBF71u; return dd3_static_complete(rt,3u);
        }
        case 0xBF71u: {
            dd3_static_write8(rt,(uint16_t)(0x00B9u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBF74u; return dd3_static_complete(rt,5u);
        }
        case 0xBF74u: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF76u; return dd3_static_complete(rt,3u);
        }
        case 0xBF76u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xBF78u; return dd3_static_complete(rt,2u);
        }
        case 0xBF78u: {
            dd3_static_write8(rt,(uint16_t)(0x00C3u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBF7Bu; return dd3_static_complete(rt,5u);
        }
        case 0xBF7Bu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF7Cu; return dd3_static_complete(rt,2u);
        }
        case 0xBF7Cu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF7Du; return dd3_static_complete(rt,3u);
        }
        case 0xBF7Du: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xBF7Eu; return dd3_static_complete(rt,2u);
        }
        case 0xBF7Eu: {
            uint8_t v=0x02u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBF80u; return dd3_static_complete(rt,2u);
        }
        case 0xBF80u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBF81u; return dd3_static_complete(rt,2u);
        }
        case 0xBF81u: {
            dd3_static_push8(rt,(uint8_t)(0xBF83u>>8)); dd3_static_push8(rt,(uint8_t)0xBF83u);
            rt->state.cpu.pc=0x84FCu; return dd3_static_complete(rt,6u);
        }
        case 0xBF84u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF85u; return dd3_static_complete(rt,4u);
        }
        case 0xBF85u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBF86u; return dd3_static_complete(rt,2u);
        }
        case 0xBF86u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF88u; return dd3_static_complete(rt,3u);
        }
        case 0xBF88u: {
            dd3_static_write8(rt,(uint16_t)(0x00E1u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBF8Bu; return dd3_static_complete(rt,5u);
        }
        case 0xBF8Bu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF8Du; return dd3_static_complete(rt,3u);
        }
        case 0xBF8Du: {
            dd3_static_write8(rt,(uint16_t)(0x00EBu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBF90u; return dd3_static_complete(rt,5u);
        }
        case 0xBF90u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBF92u; return dd3_static_complete(rt,2u);
        }
        case 0xBF92u: {
            dd3_static_write8(rt,(uint16_t)((0x70u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xBF94u; return dd3_static_complete(rt,4u);
        }
        case 0xBF94u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF95u; return dd3_static_complete(rt,4u);
        }
        case 0xBF95u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF97u; return dd3_static_complete(rt,3u);
        }
        case 0xBF97u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF98u; return dd3_static_complete(rt,4u);
        }
        case 0xBF98u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF9Au; return dd3_static_complete(rt,3u);
        }
        case 0xBF9Au: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF9Bu; return dd3_static_complete(rt,4u);
        }
        case 0xBF9Bu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBF9Cu; return dd3_static_complete(rt,2u);
        }
        case 0xBF9Cu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBF9Du; return dd3_static_complete(rt,4u);
        }
        case 0xBF9Du: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBF9Eu; return dd3_static_complete(rt,2u);
        }
        case 0xBF9Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xBFEBu: {
            uint16_t ea=dd3_static_read16_zp(rt,(uint8_t)(0x00u+rt->state.cpu.x)); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBFEDu; return dd3_static_complete(rt,6u);
        }
        case 0xBFEDu: {
            (void)0x02u;
            rt->state.cpu.pc=0xBFEFu; return dd3_static_complete(rt,2u);
        }
        case 0xBFEFu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xBFF1u; return dd3_static_complete(rt,2u);
        }
        case 0xBFF1u: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt)); { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)((hi<<8)|lo); }
            return dd3_static_complete(rt,6u);
        }
        case 0xBFFBu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBFFDu,0xBFFFu)) c++; rt->state.cpu.pc=0xBFFFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBFFDu; return dd3_static_complete(rt,2u);
        }
        case 0xBFFDu: {
            uint16_t ea=(uint16_t)(0x04FFu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xC000u; return dd3_static_complete(rt,7u);
        }
        case 0xC000u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC002u,0xC00Au)) c++; rt->state.cpu.pc=0xC00Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC002u; return dd3_static_complete(rt,2u);
        }
        case 0xC002u: {
            uint16_t ea=0x46u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC004u; return dd3_static_complete(rt,3u);
        }
        case 0xC004u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,2u);
        }
        case 0xC006u: {
            uint8_t v=0x74u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC008u; return dd3_static_complete(rt,2u);
        }
        case 0xC008u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC00Au,0xBFFBu)) c++; rt->state.cpu.pc=0xBFFBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC00Au; return dd3_static_complete(rt,2u);
        }
        case 0xC00Au: {
            dd3_static_push8(rt,(uint8_t)(0xC00Cu>>8)); dd3_static_push8(rt,(uint8_t)0xC00Cu);
            rt->state.cpu.pc=0xA2BCu; return dd3_static_complete(rt,6u);
        }
        case 0xC00Du: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC00Fu,0xBFEBu)) c++; rt->state.cpu.pc=0xBFEBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC00Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC00Fu: {
            dd3_static_push8(rt,(uint8_t)(0xC011u>>8)); dd3_static_push8(rt,(uint8_t)0xC011u);
            rt->state.cpu.pc=0xA301u; return dd3_static_complete(rt,6u);
        }
        case 0xC012u: {
            dd3_static_push8(rt,(uint8_t)(0xC014u>>8)); dd3_static_push8(rt,(uint8_t)0xC014u);
            rt->state.cpu.pc=0xA462u; return dd3_static_complete(rt,6u);
        }
        case 0xC015u: {
            dd3_static_push8(rt,(uint8_t)(0xC017u>>8)); dd3_static_push8(rt,(uint8_t)0xC017u);
            rt->state.cpu.pc=0xA26Au; return dd3_static_complete(rt,6u);
        }
        case 0xC018u: {
            dd3_static_push8(rt,(uint8_t)(0xC01Au>>8)); dd3_static_push8(rt,(uint8_t)0xC01Au);
            rt->state.cpu.pc=0xA4A2u; return dd3_static_complete(rt,6u);
        }
        case 0xC01Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC01Du; return dd3_static_complete(rt,2u);
        }
        case 0xC01Du: {
            uint16_t ea=(uint16_t)((0x3Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC01Fu; return dd3_static_complete(rt,4u);
        }
        case 0xC01Fu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC021u,0xC024u)) c++; rt->state.cpu.pc=0xC024u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC021u; return dd3_static_complete(rt,2u);
        }
        case 0xC021u: {
            rt->state.cpu.pc=0xA16Au; return dd3_static_complete(rt,3u);
        }
        case 0xC024u: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC026u; return dd3_static_complete(rt,4u);
        }
        case 0xC026u: {
            uint8_t v=0x15u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC028u; return dd3_static_complete(rt,2u);
        }
        case 0xC028u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC02Au,0xC039u)) c++; rt->state.cpu.pc=0xC039u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC02Au; return dd3_static_complete(rt,2u);
        }
        case 0xC02Au: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC02Cu; return dd3_static_complete(rt,4u);
        }
        case 0xC02Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC02Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC02Eu: {
            uint8_t v=0x70u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC030u; return dd3_static_complete(rt,2u);
        }
        case 0xC030u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC032u,0xC021u)) c++; rt->state.cpu.pc=0xC021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC032u; return dd3_static_complete(rt,2u);
        }
        case 0xC032u: {
            dd3_static_push8(rt,(uint8_t)(0xC034u>>8)); dd3_static_push8(rt,(uint8_t)0xC034u);
            rt->state.cpu.pc=0xB8D0u; return dd3_static_complete(rt,6u);
        }
        case 0xC035u: {
            uint8_t v=0x02u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC037u; return dd3_static_complete(rt,2u);
        }
        case 0xC037u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC039u,0xC021u)) c++; rt->state.cpu.pc=0xC021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC039u; return dd3_static_complete(rt,2u);
        }
        case 0xC039u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC03Bu; return dd3_static_complete(rt,4u);
        }
        case 0xC03Bu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC03Du; return dd3_static_complete(rt,2u);
        }
        case 0xC03Du: {
            uint8_t v=0x61u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC03Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC03Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC041u,0xC021u)) c++; rt->state.cpu.pc=0xC021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC041u; return dd3_static_complete(rt,2u);
        }
        case 0xC041u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC043u; return dd3_static_complete(rt,2u);
        }
        case 0xC043u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC045u,0xC021u)) c++; rt->state.cpu.pc=0xC021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC045u; return dd3_static_complete(rt,2u);
        }
        case 0xC045u: {
            uint8_t v=0x1Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC047u; return dd3_static_complete(rt,2u);
        }
        case 0xC047u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC049u,0xC021u)) c++; rt->state.cpu.pc=0xC021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC049u; return dd3_static_complete(rt,2u);
        }
        case 0xC049u: {
            uint8_t v=0x71u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC04Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC04Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC04Du,0xC021u)) c++; rt->state.cpu.pc=0xC021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC04Du; return dd3_static_complete(rt,2u);
        }
        case 0xC04Du: {
            uint8_t v=0x77u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC04Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC04Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC051u,0xC021u)) c++; rt->state.cpu.pc=0xC021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC051u; return dd3_static_complete(rt,2u);
        }
        case 0xC051u: {
            uint8_t v=0x78u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC053u; return dd3_static_complete(rt,2u);
        }
        case 0xC053u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC055u,0xC021u)) c++; rt->state.cpu.pc=0xC021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC055u; return dd3_static_complete(rt,2u);
        }
        case 0xC055u: {
            uint8_t v=0x24u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC057u; return dd3_static_complete(rt,2u);
        }
        case 0xC057u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC059u,0xC021u)) c++; rt->state.cpu.pc=0xC021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC059u; return dd3_static_complete(rt,2u);
        }
        case 0xC059u: {
            dd3_static_push8(rt,(uint8_t)(0xC05Bu>>8)); dd3_static_push8(rt,(uint8_t)0xC05Bu);
            rt->state.cpu.pc=0xA540u; return dd3_static_complete(rt,6u);
        }
        case 0xC05Cu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC05Eu,0xC021u)) c++; rt->state.cpu.pc=0xC021u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC05Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC05Eu: {
            dd3_static_push8(rt,(uint8_t)(0xC060u>>8)); dd3_static_push8(rt,(uint8_t)0xC060u);
            rt->state.cpu.pc=0xB563u; return dd3_static_complete(rt,6u);
        }
        case 0xC061u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xC062u; return dd3_static_complete(rt,2u);
        }
        case 0xC062u: {
            dd3_static_push8(rt,(uint8_t)(0xC064u>>8)); dd3_static_push8(rt,(uint8_t)0xC064u);
            rt->state.cpu.pc=0x8018u; return dd3_static_complete(rt,6u);
        }
        case 0xC065u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC067u,0xC0B6u)) c++; rt->state.cpu.pc=0xC0B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC067u; return dd3_static_complete(rt,2u);
        }
        case 0xC067u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC069u; return dd3_static_complete(rt,4u);
        }
        case 0xC069u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC06Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC06Bu: {
            uint8_t v=0x1Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC06Du; return dd3_static_complete(rt,2u);
        }
        case 0xC06Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC06Fu,0xC0B6u)) c++; rt->state.cpu.pc=0xC0B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC06Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC06Fu: {
            uint8_t v=0x22u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC071u; return dd3_static_complete(rt,2u);
        }
        case 0xC071u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC073u,0xC0B6u)) c++; rt->state.cpu.pc=0xC0B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC073u; return dd3_static_complete(rt,2u);
        }
        case 0xC073u: {
            uint8_t v=0x1Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC075u; return dd3_static_complete(rt,2u);
        }
        case 0xC075u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC077u,0xC0B6u)) c++; rt->state.cpu.pc=0xC0B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC077u; return dd3_static_complete(rt,2u);
        }
        case 0xC077u: {
            uint8_t v=0x20u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC079u; return dd3_static_complete(rt,2u);
        }
        case 0xC079u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC07Bu,0xC0B6u)) c++; rt->state.cpu.pc=0xC0B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC07Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC07Bu: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC07Du; return dd3_static_complete(rt,4u);
        }
        case 0xC07Du: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC07Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC07Fu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC081u; return dd3_static_complete(rt,2u);
        }
        case 0xC081u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC083u,0xC08Au)) c++; rt->state.cpu.pc=0xC08Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC083u; return dd3_static_complete(rt,2u);
        }
        case 0xC083u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC085u; return dd3_static_complete(rt,2u);
        }
        case 0xC085u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC087u,0xC0A6u)) c++; rt->state.cpu.pc=0xC0A6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC087u; return dd3_static_complete(rt,2u);
        }
        case 0xC087u: {
            dd3_static_push8(rt,(uint8_t)(0xC089u>>8)); dd3_static_push8(rt,(uint8_t)0xC089u);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,6u);
        }
        case 0xC08Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC08Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC08Cu: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xC08Eu; return dd3_static_complete(rt,4u);
        }
        case 0xC08Eu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC091u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xC091u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC093u; return dd3_static_complete(rt,2u);
        }
        case 0xC093u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC095u,0xC0A3u)) c++; rt->state.cpu.pc=0xC0A3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC095u; return dd3_static_complete(rt,2u);
        }
        case 0xC095u: {
            uint16_t ea=(uint16_t)((0x4Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC097u; return dd3_static_complete(rt,4u);
        }
        case 0xC097u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC099u,0xC0A3u)) c++; rt->state.cpu.pc=0xC0A3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC099u; return dd3_static_complete(rt,2u);
        }
        case 0xC099u: {
            dd3_static_push8(rt,(uint8_t)(0xC09Bu>>8)); dd3_static_push8(rt,(uint8_t)0xC09Bu);
            rt->state.cpu.pc=0xA261u; return dd3_static_complete(rt,6u);
        }
        case 0xC09Cu: {
            dd3_static_push8(rt,(uint8_t)(0xC09Eu>>8)); dd3_static_push8(rt,(uint8_t)0xC09Eu);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,6u);
        }
        case 0xC09Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0A1u; return dd3_static_complete(rt,2u);
        }
        case 0xC0A1u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xC0A3u; return dd3_static_complete(rt,4u);
        }
        case 0xC0A3u: {
            rt->state.cpu.pc=0xA0B6u; return dd3_static_complete(rt,3u);
        }
        case 0xC0A6u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0A9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xC0A9u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0ABu; return dd3_static_complete(rt,2u);
        }
        case 0xC0ABu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC0ADu,0xC0B3u)) c++; rt->state.cpu.pc=0xC0B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0ADu; return dd3_static_complete(rt,2u);
        }
        case 0xC0ADu: {
            uint16_t ea=(uint16_t)((0x4Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0AFu; return dd3_static_complete(rt,4u);
        }
        case 0xC0AFu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC0B1u,0xC099u)) c++; rt->state.cpu.pc=0xC099u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0B1u; return dd3_static_complete(rt,2u);
        }
        case 0xC0B1u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC0B3u,0xC0B6u)) c++; rt->state.cpu.pc=0xC0B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0B3u; return dd3_static_complete(rt,2u);
        }
        case 0xC0B3u: {
            rt->state.cpu.pc=0xA021u; return dd3_static_complete(rt,3u);
        }
        case 0xC0B6u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0B8u; return dd3_static_complete(rt,4u);
        }
        case 0xC0B8u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xC0BAu,0xC0B3u)) c++; rt->state.cpu.pc=0xC0B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0BAu; return dd3_static_complete(rt,2u);
        }
        case 0xC0BAu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0BCu; return dd3_static_complete(rt,2u);
        }
        case 0xC0BCu: {
            uint8_t v=0x2Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC0BEu; return dd3_static_complete(rt,2u);
        }
        case 0xC0BEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC0C0u,0xC0B3u)) c++; rt->state.cpu.pc=0xC0B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0C0u; return dd3_static_complete(rt,2u);
        }
        case 0xC0C0u: {
            uint8_t v=0x4Bu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC0C2u; return dd3_static_complete(rt,2u);
        }
        case 0xC0C2u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC0C4u,0xC0F5u)) c++; rt->state.cpu.pc=0xC0F5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0C4u; return dd3_static_complete(rt,2u);
        }
        case 0xC0C4u: {
            uint8_t v=0x12u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC0C6u; return dd3_static_complete(rt,2u);
        }
        case 0xC0C6u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC0C8u,0xC0F5u)) c++; rt->state.cpu.pc=0xC0F5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0C8u; return dd3_static_complete(rt,2u);
        }
        case 0xC0C8u: {
            uint8_t v=0x5Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC0CAu; return dd3_static_complete(rt,2u);
        }
        case 0xC0CAu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC0CCu,0xC0F5u)) c++; rt->state.cpu.pc=0xC0F5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0CCu; return dd3_static_complete(rt,2u);
        }
        case 0xC0CCu: {
            uint8_t v=0x09u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC0CEu; return dd3_static_complete(rt,2u);
        }
        case 0xC0CEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC0D0u,0xC0F5u)) c++; rt->state.cpu.pc=0xC0F5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0D0u; return dd3_static_complete(rt,2u);
        }
        case 0xC0D0u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC0D2u; return dd3_static_complete(rt,2u);
        }
        case 0xC0D2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC0D4u,0xC0D7u)) c++; rt->state.cpu.pc=0xC0D7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0D4u; return dd3_static_complete(rt,2u);
        }
        case 0xC0D4u: {
            rt->state.cpu.pc=0xA15Fu; return dd3_static_complete(rt,3u);
        }
        case 0xC0D7u: {
            uint8_t v=0x29u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC0D9u; return dd3_static_complete(rt,2u);
        }
        case 0xC0D9u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC0DBu,0xC0EFu)) c++; rt->state.cpu.pc=0xC0EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0DBu; return dd3_static_complete(rt,2u);
        }
        case 0xC0DBu: {
            uint8_t v=0x2Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC0DDu; return dd3_static_complete(rt,2u);
        }
        case 0xC0DDu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC0DFu,0xC0EFu)) c++; rt->state.cpu.pc=0xC0EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0DFu; return dd3_static_complete(rt,2u);
        }
        case 0xC0DFu: {
            uint16_t ea=(uint16_t)((0xC3u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0E1u; return dd3_static_complete(rt,4u);
        }
        case 0xC0E1u: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC0E3u; return dd3_static_complete(rt,2u);
        }
        case 0xC0E3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC0E5u,0xC0ECu)) c++; rt->state.cpu.pc=0xC0ECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0E5u; return dd3_static_complete(rt,2u);
        }
        case 0xC0E5u: {
            uint16_t ea=(uint16_t)(0x06BEu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0E8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x06BEu,ea)?1u:0u));
        }
        case 0xC0E8u: {
            uint8_t v=0x80u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC0EAu; return dd3_static_complete(rt,2u);
        }
        case 0xC0EAu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC0ECu,0xC0EFu)) c++; rt->state.cpu.pc=0xC0EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0ECu; return dd3_static_complete(rt,2u);
        }
        case 0xC0ECu: {
            dd3_static_push8(rt,(uint8_t)(0xC0EEu>>8)); dd3_static_push8(rt,(uint8_t)0xC0EEu);
            rt->state.cpu.pc=0xA21Eu; return dd3_static_complete(rt,6u);
        }
        case 0xC0EFu: {
            uint16_t ea=(uint16_t)((0x4Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0F1u; return dd3_static_complete(rt,4u);
        }
        case 0xC0F1u: {
            uint8_t v=0x43u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC0F3u; return dd3_static_complete(rt,2u);
        }
        case 0xC0F3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC0F5u,0xC107u)) c++; rt->state.cpu.pc=0xC107u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC0F5u; return dd3_static_complete(rt,2u);
        }
        case 0xC0F5u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC0F7u; return dd3_static_complete(rt,2u);
        }
        case 0xC0F7u: {
            dd3_static_write8(rt,(uint16_t)((0x72u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xC0F9u; return dd3_static_complete(rt,4u);
        }
        case 0xC0F9u: {
            dd3_static_write8(rt,(uint16_t)(0x04ACu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC0FCu; return dd3_static_complete(rt,5u);
        }
        case 0xC0FCu: {
            dd3_static_write8(rt,(uint16_t)(0x04B0u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC0FFu; return dd3_static_complete(rt,5u);
        }
        case 0xC0FFu: {
            dd3_static_write8(rt,0x03C3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC102u; return dd3_static_complete(rt,4u);
        }
        case 0xC102u: {
            dd3_static_write8(rt,(uint16_t)(0x04C6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xC105u; return dd3_static_complete(rt,5u);
        }
        case 0xC105u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC107u,0xC16Au)) c++; rt->state.cpu.pc=0xC16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC107u; return dd3_static_complete(rt,2u);
        }
        case 0xC107u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC108u; return dd3_static_complete(rt,2u);
        }
        case 0xC108u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC10Au; return dd3_static_complete(rt,2u);
        }
        case 0xC10Au: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC10Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC10Bu: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC10Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xC10Eu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC110u; return dd3_static_complete(rt,2u);
        }
        case 0xC110u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC112u,0xC119u)) c++; rt->state.cpu.pc=0xC119u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC112u; return dd3_static_complete(rt,2u);
        }
        case 0xC112u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC115u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xC115u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC117u; return dd3_static_complete(rt,2u);
        }
        case 0xC117u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC119u,0xC167u)) c++; rt->state.cpu.pc=0xC167u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC119u; return dd3_static_complete(rt,2u);
        }
        case 0xC119u: {
            uint16_t ea=(uint16_t)((0x56u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC11Bu; return dd3_static_complete(rt,4u);
        }
        case 0xC11Bu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC11Du; return dd3_static_complete(rt,2u);
        }
        case 0xC11Du: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC11Fu,0xC16Au)) c++; rt->state.cpu.pc=0xC16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC11Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC11Fu: {
            uint16_t ea=(uint16_t)((0x4Eu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC121u; return dd3_static_complete(rt,4u);
        }
        case 0xC121u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC123u; return dd3_static_complete(rt,2u);
        }
        case 0xC123u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC125u,0xC16Au)) c++; rt->state.cpu.pc=0xC16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC125u; return dd3_static_complete(rt,2u);
        }
        case 0xC125u: {
            uint16_t ea=0x049Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC128u; return dd3_static_complete(rt,4u);
        }
        case 0xC128u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC12Au,0xC130u)) c++; rt->state.cpu.pc=0xC130u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC12Au; return dd3_static_complete(rt,2u);
        }
        case 0xC12Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC12Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC12Cu: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xC12Eu; return dd3_static_complete(rt,4u);
        }
        case 0xC12Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC130u,0xC16Au)) c++; rt->state.cpu.pc=0xC16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC130u; return dd3_static_complete(rt,2u);
        }
        case 0xC130u: {
            uint16_t ea=(uint16_t)(0x04ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC133u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04ACu,ea)?1u:0u));
        }
        case 0xC133u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC135u; return dd3_static_complete(rt,2u);
        }
        case 0xC135u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC137u,0xC142u)) c++; rt->state.cpu.pc=0xC142u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC137u; return dd3_static_complete(rt,2u);
        }
        case 0xC137u: {
            dd3_static_push8(rt,(uint8_t)(0xC139u>>8)); dd3_static_push8(rt,(uint8_t)0xC139u);
            rt->state.cpu.pc=0xAB90u; return dd3_static_complete(rt,6u);
        }
        case 0xC13Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC13Cu,0xC142u)) c++; rt->state.cpu.pc=0xC142u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC13Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC13Cu: {
            uint8_t v=0x4Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC13Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC13Eu: {
            dd3_static_write8(rt,(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xC140u; return dd3_static_complete(rt,4u);
        }
        case 0xC140u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC142u,0xC16Au)) c++; rt->state.cpu.pc=0xC16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC142u; return dd3_static_complete(rt,2u);
        }
        case 0xC142u: {
            dd3_static_push8(rt,(uint8_t)(0xC144u>>8)); dd3_static_push8(rt,(uint8_t)0xC144u);
            rt->state.cpu.pc=0xA658u; return dd3_static_complete(rt,6u);
        }
        case 0xC145u: {
            uint16_t ea=(uint16_t)((0x46u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC147u; return dd3_static_complete(rt,4u);
        }
        case 0xC147u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC149u; return dd3_static_complete(rt,2u);
        }
        case 0xC149u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC14Bu; return dd3_static_complete(rt,2u);
        }
        case 0xC14Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC14Du,0xC15Fu)) c++; rt->state.cpu.pc=0xC15Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC14Du; return dd3_static_complete(rt,2u);
        }
        case 0xC14Du: {
            dd3_static_push8(rt,(uint8_t)(0xC14Fu>>8)); dd3_static_push8(rt,(uint8_t)0xC14Fu);
            rt->state.cpu.pc=0xA196u; return dd3_static_complete(rt,6u);
        }
        case 0xC150u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC152u,0xC16Au)) c++; rt->state.cpu.pc=0xC16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC152u; return dd3_static_complete(rt,2u);
        }
        case 0xC152u: {
            dd3_static_push8(rt,(uint8_t)(0xC154u>>8)); dd3_static_push8(rt,(uint8_t)0xC154u);
            rt->state.cpu.pc=0xAA41u; return dd3_static_complete(rt,6u);
        }
        case 0xC155u: {
            dd3_static_push8(rt,(uint8_t)(0xC157u>>8)); dd3_static_push8(rt,(uint8_t)0xC157u);
            rt->state.cpu.pc=0xA196u; return dd3_static_complete(rt,6u);
        }
        case 0xC158u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC15Au,0xC16Au)) c++; rt->state.cpu.pc=0xC16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC15Au; return dd3_static_complete(rt,2u);
        }
        case 0xC15Au: {
            dd3_static_push8(rt,(uint8_t)(0xC15Cu>>8)); dd3_static_push8(rt,(uint8_t)0xC15Cu);
            rt->state.cpu.pc=0xA4D9u; return dd3_static_complete(rt,6u);
        }
        case 0xC15Du: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC15Fu,0xC16Au)) c++; rt->state.cpu.pc=0xC16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC15Fu; return dd3_static_complete(rt,2u);
        }
        case 0xC15Fu: {
            dd3_static_push8(rt,(uint8_t)(0xC161u>>8)); dd3_static_push8(rt,(uint8_t)0xC161u);
            rt->state.cpu.pc=0xAC69u; return dd3_static_complete(rt,6u);
        }
        case 0xC162u: {
            dd3_static_push8(rt,(uint8_t)(0xC164u>>8)); dd3_static_push8(rt,(uint8_t)0xC164u);
            rt->state.cpu.pc=0xAD5Eu; return dd3_static_complete(rt,6u);
        }
        case 0xC165u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC167u,0xC16Au)) c++; rt->state.cpu.pc=0xC16Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC167u; return dd3_static_complete(rt,2u);
        }
        case 0xC167u: {
            dd3_static_push8(rt,(uint8_t)(0xC169u>>8)); dd3_static_push8(rt,(uint8_t)0xC169u);
            rt->state.cpu.pc=0xA1A5u; return dd3_static_complete(rt,6u);
        }
        case 0xC16Au: {
            uint16_t ea=(uint16_t)((0x76u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC16Cu; return dd3_static_complete(rt,4u);
        }
        case 0xC16Cu: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC16Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC16Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC170u,0xC184u)) c++; rt->state.cpu.pc=0xC184u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC170u; return dd3_static_complete(rt,2u);
        }
        case 0xC170u: {
            uint16_t ea=0x47u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC172u; return dd3_static_complete(rt,3u);
        }
        case 0xC172u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC174u; return dd3_static_complete(rt,2u);
        }
        case 0xC174u: {
            uint8_t v=0x61u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC176u; return dd3_static_complete(rt,2u);
        }
        case 0xC176u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC178u,0xC184u)) c++; rt->state.cpu.pc=0xC184u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC178u; return dd3_static_complete(rt,2u);
        }
        case 0xC178u: {
            uint16_t ea=0x46u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC17Au; return dd3_static_complete(rt,3u);
        }
        case 0xC17Au: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC17Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC17Cu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC17Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC17Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC180u,0xC184u)) c++; rt->state.cpu.pc=0xC184u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC180u; return dd3_static_complete(rt,2u);
        }
        case 0xC180u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC182u; return dd3_static_complete(rt,2u);
        }
        case 0xC182u: {
            dd3_static_write8(rt,0x46u,rt->state.cpu.a);
            rt->state.cpu.pc=0xC184u; return dd3_static_complete(rt,3u);
        }
        case 0xC184u: {
            dd3_static_push8(rt,(uint8_t)(0xC186u>>8)); dd3_static_push8(rt,(uint8_t)0xC186u);
            rt->state.cpu.pc=0xB079u; return dd3_static_complete(rt,6u);
        }
        case 0xC187u: {
            uint16_t ea=0x3Bu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xC189u; return dd3_static_complete(rt,5u);
        }
        case 0xC189u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC18Au; return dd3_static_complete(rt,2u);
        }
        case 0xC18Au: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xC18Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC18Cu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xC18Eu,0xC191u)) c++; rt->state.cpu.pc=0xC191u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC18Eu; return dd3_static_complete(rt,2u);
        }
        case 0xC18Eu: {
            rt->state.cpu.pc=0xA01Du; return dd3_static_complete(rt,3u);
        }
        case 0xC191u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC192u; return dd3_static_complete(rt,4u);
        }
        case 0xC192u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC193u; return dd3_static_complete(rt,2u);
        }
        case 0xC193u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC194u; return dd3_static_complete(rt,4u);
        }
        case 0xC194u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xC195u; return dd3_static_complete(rt,2u);
        }
        case 0xC195u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        default: return dd3_static_fail_unproven(rt,9,rt->state.cpu.pc);
    }
}
