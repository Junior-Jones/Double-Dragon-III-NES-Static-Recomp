/* Generated: no runtime opcode fetch or decode. */
#include "dd3_static_semantics.h"
int dd3_static_execute_bank_10(DD3StaticRuntime *rt) {
    switch (rt->state.cpu.pc) {
        case 0x8000u: {
            rt->state.cpu.pc=0x8006u; return dd3_static_complete(rt,3u);
        }
        case 0x8003u: {
            rt->state.cpu.pc=0x8176u; return dd3_static_complete(rt,3u);
        }
        case 0x8006u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8007u; return dd3_static_complete(rt,2u);
        }
        case 0x8007u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8008u; return dd3_static_complete(rt,3u);
        }
        case 0x8008u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8009u; return dd3_static_complete(rt,2u);
        }
        case 0x8009u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x800Au; return dd3_static_complete(rt,3u);
        }
        case 0x800Au: {
            uint16_t ea=0x07FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x800Du; return dd3_static_complete(rt,4u);
        }
        case 0x800Du: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x800Fu; return dd3_static_complete(rt,2u);
        }
        case 0x800Fu: {
            dd3_static_write8(rt,0x07FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8012u; return dd3_static_complete(rt,4u);
        }
        case 0x8012u: {
            uint16_t ea=0x07FFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8015u; return dd3_static_complete(rt,4u);
        }
        case 0x8015u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8017u,0x8043u)) c++; rt->state.cpu.pc=0x8043u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8017u; return dd3_static_complete(rt,2u);
        }
        case 0x8017u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8019u,0x8088u)) c++; rt->state.cpu.pc=0x8088u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8019u; return dd3_static_complete(rt,2u);
        }
        case 0x8019u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x801Au; return dd3_static_complete(rt,2u);
        }
        case 0x801Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x801Cu,0x805Fu)) c++; rt->state.cpu.pc=0x805Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x801Cu; return dd3_static_complete(rt,2u);
        }
        case 0x801Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x801Du; return dd3_static_complete(rt,2u);
        }
        case 0x801Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x801Fu,0x8051u)) c++; rt->state.cpu.pc=0x8051u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x801Fu; return dd3_static_complete(rt,2u);
        }
        case 0x801Fu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8020u; return dd3_static_complete(rt,2u);
        }
        case 0x8020u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8022u,0x8049u)) c++; rt->state.cpu.pc=0x8049u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8022u; return dd3_static_complete(rt,2u);
        }
        case 0x8022u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8023u; return dd3_static_complete(rt,2u);
        }
        case 0x8023u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8025u,0x8035u)) c++; rt->state.cpu.pc=0x8035u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8025u; return dd3_static_complete(rt,2u);
        }
        case 0x8025u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8026u; return dd3_static_complete(rt,2u);
        }
        case 0x8026u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8028u,0x802Au)) c++; rt->state.cpu.pc=0x802Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8028u; return dd3_static_complete(rt,2u);
        }
        case 0x8028u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x802Au,0x8043u)) c++; rt->state.cpu.pc=0x8043u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x802Au; return dd3_static_complete(rt,2u);
        }
        case 0x802Au: {
            uint16_t ea=0x07FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x802Du; return dd3_static_complete(rt,4u);
        }
        case 0x802Du: {
            uint8_t v=0xDFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x802Fu; return dd3_static_complete(rt,2u);
        }
        case 0x802Fu: {
            dd3_static_write8(rt,0x07FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8032u; return dd3_static_complete(rt,4u);
        }
        case 0x8032u: {
            rt->state.cpu.pc=0x814Cu; return dd3_static_complete(rt,3u);
        }
        case 0x8035u: {
            uint16_t ea=0x0721u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8038u; return dd3_static_complete(rt,4u);
        }
        case 0x8038u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8039u; return dd3_static_complete(rt,3u);
        }
        case 0x8039u: {
            dd3_static_push8(rt,(uint8_t)(0x803Bu>>8)); dd3_static_push8(rt,(uint8_t)0x803Bu);
            rt->state.cpu.pc=0x8159u; return dd3_static_complete(rt,6u);
        }
        case 0x803Cu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x803Du; return dd3_static_complete(rt,4u);
        }
        case 0x803Du: {
            dd3_static_write8(rt,0x0721u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8040u; return dd3_static_complete(rt,4u);
        }
        case 0x8040u: {
            rt->state.cpu.pc=0x8147u; return dd3_static_complete(rt,3u);
        }
        case 0x8043u: {
            dd3_static_push8(rt,(uint8_t)(0x8045u>>8)); dd3_static_push8(rt,(uint8_t)0x8045u);
            rt->state.cpu.pc=0x8159u; return dd3_static_complete(rt,6u);
        }
        case 0x8046u: {
            rt->state.cpu.pc=0x8147u; return dd3_static_complete(rt,3u);
        }
        case 0x8049u: {
            uint16_t ea=0x07FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x804Cu; return dd3_static_complete(rt,4u);
        }
        case 0x804Cu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x804Eu; return dd3_static_complete(rt,2u);
        }
        case 0x804Eu: {
            dd3_static_write8(rt,0x07FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8051u; return dd3_static_complete(rt,4u);
        }
        case 0x8051u: {
            uint16_t ea=0x0720u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8054u; return dd3_static_complete(rt,4u);
        }
        case 0x8054u: {
            dd3_static_write8(rt,0x0721u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8057u; return dd3_static_complete(rt,4u);
        }
        case 0x8057u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8059u; return dd3_static_complete(rt,2u);
        }
        case 0x8059u: {
            dd3_static_write8(rt,0x4015u,rt->state.cpu.a);
            rt->state.cpu.pc=0x805Cu; return dd3_static_complete(rt,4u);
        }
        case 0x805Cu: {
            rt->state.cpu.pc=0x814Cu; return dd3_static_complete(rt,3u);
        }
        case 0x805Fu: {
            uint16_t ea=0x07FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8062u; return dd3_static_complete(rt,4u);
        }
        case 0x8062u: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8064u; return dd3_static_complete(rt,2u);
        }
        case 0x8064u: {
            dd3_static_write8(rt,0x07FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8067u; return dd3_static_complete(rt,4u);
        }
        case 0x8067u: {
            uint16_t ea=0x0721u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x806Au; return dd3_static_complete(rt,4u);
        }
        case 0x806Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x806Cu,0x8075u)) c++; rt->state.cpu.pc=0x8075u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x806Cu; return dd3_static_complete(rt,2u);
        }
        case 0x806Cu: {
            uint16_t ea=0x0720u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x806Fu; return dd3_static_complete(rt,4u);
        }
        case 0x806Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8071u,0x8075u)) c++; rt->state.cpu.pc=0x8075u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8071u; return dd3_static_complete(rt,2u);
        }
        case 0x8071u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8072u; return dd3_static_complete(rt,2u);
        }
        case 0x8072u: {
            rt->state.cpu.pc=0x8088u; return dd3_static_complete(rt,3u);
        }
        case 0x8075u: {
            uint8_t v=0x07u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8077u; return dd3_static_complete(rt,2u);
        }
        case 0x8077u: {
            dd3_static_write8(rt,0x0738u,rt->state.cpu.x);
            rt->state.cpu.pc=0x807Au; return dd3_static_complete(rt,4u);
        }
        case 0x807Au: {
            dd3_static_push8(rt,(uint8_t)(0x807Cu>>8)); dd3_static_push8(rt,(uint8_t)0x807Cu);
            rt->state.cpu.pc=0x84F3u; return dd3_static_complete(rt,6u);
        }
        case 0x807Du: {
            uint16_t ea=0x0738u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8080u; return dd3_static_complete(rt,4u);
        }
        case 0x8080u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8081u; return dd3_static_complete(rt,2u);
        }
        case 0x8081u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8083u; return dd3_static_complete(rt,2u);
        }
        case 0x8083u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8085u,0x8077u)) c++; rt->state.cpu.pc=0x8077u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8085u; return dd3_static_complete(rt,2u);
        }
        case 0x8085u: {
            rt->state.cpu.pc=0x8147u; return dd3_static_complete(rt,3u);
        }
        case 0x8088u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8089u; return dd3_static_complete(rt,2u);
        }
        case 0x8089u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x808Au; return dd3_static_complete(rt,2u);
        }
        case 0x808Au: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x808Bu; return dd3_static_complete(rt,2u);
        }
        case 0x808Bu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x808Cu; return dd3_static_complete(rt,2u);
        }
        case 0x808Cu: {
            uint16_t ea=(uint16_t)(0x896Au+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x808Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x896Au,ea)?1u:0u));
        }
        case 0x808Fu: {
            dd3_static_write8(rt,0x00u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8091u; return dd3_static_complete(rt,3u);
        }
        case 0x8091u: {
            uint16_t ea=(uint16_t)(0x896Bu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8094u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x896Bu,ea)?1u:0u));
        }
        case 0x8094u: {
            dd3_static_write8(rt,0x01u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8096u; return dd3_static_complete(rt,3u);
        }
        case 0x8096u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8098u; return dd3_static_complete(rt,2u);
        }
        case 0x8098u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x809Au; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x809Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x809Cu,0x80CBu)) c++; rt->state.cpu.pc=0x80CBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x809Cu; return dd3_static_complete(rt,2u);
        }
        case 0x809Cu: {
            dd3_static_write8(rt,0x02u,rt->state.cpu.a);
            rt->state.cpu.pc=0x809Eu; return dd3_static_complete(rt,3u);
        }
        case 0x809Eu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x809Fu; return dd3_static_complete(rt,2u);
        }
        case 0x809Fu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80A1u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x80A1u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x80A3u,0x80BCu)) c++; rt->state.cpu.pc=0x80BCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80A3u; return dd3_static_complete(rt,2u);
        }
        case 0x80A3u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x80A4u; return dd3_static_complete(rt,2u);
        }
        case 0x80A4u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80A6u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x80A6u: {
            dd3_static_write8(rt,0x0722u,rt->state.cpu.a);
            rt->state.cpu.pc=0x80A9u; return dd3_static_complete(rt,4u);
        }
        case 0x80A9u: {
            uint16_t ea=0x07FFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80ACu; return dd3_static_complete(rt,4u);
        }
        case 0x80ACu: {
            dd3_static_write8(rt,0x0723u,rt->state.cpu.a);
            rt->state.cpu.pc=0x80AFu; return dd3_static_complete(rt,4u);
        }
        case 0x80AFu: {
            uint16_t ea=0x07FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80B2u; return dd3_static_complete(rt,4u);
        }
        case 0x80B2u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80B4u; return dd3_static_complete(rt,2u);
        }
        case 0x80B4u: {
            dd3_static_write8(rt,0x07FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x80B7u; return dd3_static_complete(rt,4u);
        }
        case 0x80B7u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x80B8u; return dd3_static_complete(rt,2u);
        }
        case 0x80B8u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80BAu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x80BAu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x80BCu,0x80EEu)) c++; rt->state.cpu.pc=0x80EEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80BCu; return dd3_static_complete(rt,2u);
        }
        case 0x80BCu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x80BDu; return dd3_static_complete(rt,2u);
        }
        case 0x80BDu: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80BFu; return dd3_static_complete(rt,3u);
        }
        case 0x80BFu: {
            uint16_t ea=(uint16_t)(0x0720u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80C2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0720u,ea)?1u:0u));
        }
        case 0x80C2u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x80C4u,0x80C8u)) c++; rt->state.cpu.pc=0x80C8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80C4u; return dd3_static_complete(rt,2u);
        }
        case 0x80C4u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x80C5u; return dd3_static_complete(rt,2u);
        }
        case 0x80C5u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x80C6u; return dd3_static_complete(rt,2u);
        }
        case 0x80C6u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80C8u,0x80B7u)) c++; rt->state.cpu.pc=0x80B7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80C8u; return dd3_static_complete(rt,2u);
        }
        case 0x80C8u: {
            rt->state.cpu.pc=0x814Cu; return dd3_static_complete(rt,3u);
        }
        case 0x80CBu: {
            uint16_t ea=0x07FFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80CEu; return dd3_static_complete(rt,4u);
        }
        case 0x80CEu: {
            uint16_t ea=0x0720u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x80D1u; return dd3_static_complete(rt,4u);
        }
        case 0x80D1u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x80D3u,0x80D6u)) c++; rt->state.cpu.pc=0x80D6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80D3u; return dd3_static_complete(rt,2u);
        }
        case 0x80D3u: {
            rt->state.cpu.pc=0x8147u; return dd3_static_complete(rt,3u);
        }
        case 0x80D6u: {
            dd3_static_write8(rt,0x0720u,rt->state.cpu.a);
            rt->state.cpu.pc=0x80D9u; return dd3_static_complete(rt,4u);
        }
        case 0x80D9u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80DBu; return dd3_static_complete(rt,2u);
        }
        case 0x80DBu: {
            dd3_static_write8(rt,0x073Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x80DEu; return dd3_static_complete(rt,4u);
        }
        case 0x80DEu: {
            dd3_static_write8(rt,0x0739u,rt->state.cpu.a);
            rt->state.cpu.pc=0x80E1u; return dd3_static_complete(rt,4u);
        }
        case 0x80E1u: {
            dd3_static_write8(rt,0x073Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x80E4u; return dd3_static_complete(rt,4u);
        }
        case 0x80E4u: {
            uint16_t ea=0x07FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80E7u; return dd3_static_complete(rt,4u);
        }
        case 0x80E7u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80E9u; return dd3_static_complete(rt,2u);
        }
        case 0x80E9u: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x80EBu; return dd3_static_complete(rt,2u);
        }
        case 0x80EBu: {
            dd3_static_write8(rt,0x07FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x80EEu; return dd3_static_complete(rt,4u);
        }
        case 0x80EEu: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80F0u; return dd3_static_complete(rt,2u);
        }
        case 0x80F0u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80F2u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x80F2u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x80F4u,0x80F6u)) c++; rt->state.cpu.pc=0x80F6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80F4u; return dd3_static_complete(rt,2u);
        }
        case 0x80F4u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x80F5u; return dd3_static_complete(rt,2u);
        }
        case 0x80F5u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x80F6u; return dd3_static_complete(rt,2u);
        }
        case 0x80F6u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x80F8u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x80F8u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x80FAu,0x8147u)) c++; rt->state.cpu.pc=0x8147u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80FAu; return dd3_static_complete(rt,2u);
        }
        case 0x80FAu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x80FBu; return dd3_static_complete(rt,2u);
        }
        case 0x80FBu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x80FDu; return dd3_static_complete(rt,2u);
        }
        case 0x80FDu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x80FFu,0x8106u)) c++; rt->state.cpu.pc=0x8106u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x80FFu; return dd3_static_complete(rt,2u);
        }
        case 0x80FFu: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8101u; return dd3_static_complete(rt,3u);
        }
        case 0x8101u: {
            dd3_static_write8(rt,(uint16_t)(0x0720u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8104u; return dd3_static_complete(rt,5u);
        }
        case 0x8104u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8106u,0x811Eu)) c++; rt->state.cpu.pc=0x811Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8106u; return dd3_static_complete(rt,2u);
        }
        case 0x8106u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8108u; return dd3_static_complete(rt,2u);
        }
        case 0x8108u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x810Au,0x8114u)) c++; rt->state.cpu.pc=0x8114u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x810Au; return dd3_static_complete(rt,2u);
        }
        case 0x810Au: {
            uint8_t v=0x1Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x810Cu; return dd3_static_complete(rt,2u);
        }
        case 0x810Cu: {
            dd3_static_write8(rt,(uint16_t)(0x07C2u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x810Fu; return dd3_static_complete(rt,5u);
        }
        case 0x810Fu: {
            uint8_t v=0x96u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8111u; return dd3_static_complete(rt,2u);
        }
        case 0x8111u: {
            dd3_static_write8(rt,(uint16_t)(0x07CBu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8114u; return dd3_static_complete(rt,5u);
        }
        case 0x8114u: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8116u; return dd3_static_complete(rt,2u);
        }
        case 0x8116u: {
            dd3_static_write8(rt,(uint16_t)(0x07A4u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8119u; return dd3_static_complete(rt,5u);
        }
        case 0x8119u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x811Bu; return dd3_static_complete(rt,2u);
        }
        case 0x811Bu: {
            dd3_static_write8(rt,(uint16_t)(0x07ACu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x811Eu; return dd3_static_complete(rt,5u);
        }
        case 0x811Eu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x811Fu; return dd3_static_complete(rt,2u);
        }
        case 0x811Fu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8121u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8121u: {
            dd3_static_write8(rt,(uint16_t)(0x073Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8124u; return dd3_static_complete(rt,5u);
        }
        case 0x8124u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8125u; return dd3_static_complete(rt,2u);
        }
        case 0x8125u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8127u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8127u: {
            dd3_static_write8(rt,(uint16_t)(0x0744u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x812Au; return dd3_static_complete(rt,5u);
        }
        case 0x812Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x812Cu; return dd3_static_complete(rt,2u);
        }
        case 0x812Cu: {
            dd3_static_write8(rt,(uint16_t)(0x076Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x812Fu; return dd3_static_complete(rt,5u);
        }
        case 0x812Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0774u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8132u; return dd3_static_complete(rt,5u);
        }
        case 0x8132u: {
            dd3_static_write8(rt,(uint16_t)(0x075Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8135u; return dd3_static_complete(rt,5u);
        }
        case 0x8135u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8137u; return dd3_static_complete(rt,2u);
        }
        case 0x8137u: {
            dd3_static_write8(rt,(uint16_t)(0x074Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x813Au; return dd3_static_complete(rt,5u);
        }
        case 0x813Au: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x813Cu; return dd3_static_complete(rt,2u);
        }
        case 0x813Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0728u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x813Fu; return dd3_static_complete(rt,5u);
        }
        case 0x813Fu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8141u; return dd3_static_complete(rt,2u);
        }
        case 0x8141u: {
            dd3_static_write8(rt,(uint16_t)(0x0730u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8144u; return dd3_static_complete(rt,5u);
        }
        case 0x8144u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8145u; return dd3_static_complete(rt,2u);
        }
        case 0x8145u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8147u,0x80F6u)) c++; rt->state.cpu.pc=0x80F6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8147u; return dd3_static_complete(rt,2u);
        }
        case 0x8147u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8149u; return dd3_static_complete(rt,2u);
        }
        case 0x8149u: {
            dd3_static_write8(rt,0x4015u,rt->state.cpu.a);
            rt->state.cpu.pc=0x814Cu; return dd3_static_complete(rt,4u);
        }
        case 0x814Cu: {
            uint16_t ea=0x07FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x814Fu; return dd3_static_complete(rt,4u);
        }
        case 0x814Fu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8151u; return dd3_static_complete(rt,2u);
        }
        case 0x8151u: {
            dd3_static_write8(rt,0x07FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8154u; return dd3_static_complete(rt,4u);
        }
        case 0x8154u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8155u; return dd3_static_complete(rt,4u);
        }
        case 0x8155u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8156u; return dd3_static_complete(rt,2u);
        }
        case 0x8156u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8157u; return dd3_static_complete(rt,4u);
        }
        case 0x8157u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8158u; return dd3_static_complete(rt,2u);
        }
        case 0x8158u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8159u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x815Bu; return dd3_static_complete(rt,2u);
        }
        case 0x815Bu: {
            dd3_static_write8(rt,0x4015u,rt->state.cpu.a);
            rt->state.cpu.pc=0x815Eu; return dd3_static_complete(rt,4u);
        }
        case 0x815Eu: {
            uint8_t v=0xE0u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8160u; return dd3_static_complete(rt,2u);
        }
        case 0x8160u: {
            dd3_static_write8(rt,(uint16_t)(0x071Fu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8163u; return dd3_static_complete(rt,5u);
        }
        case 0x8163u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8164u; return dd3_static_complete(rt,2u);
        }
        case 0x8164u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8166u,0x8160u)) c++; rt->state.cpu.pc=0x8160u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8166u; return dd3_static_complete(rt,2u);
        }
        case 0x8166u: {
            uint8_t v=0x8Du;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8168u; return dd3_static_complete(rt,2u);
        }
        case 0x8168u: {
            dd3_static_write8(rt,0x07F0u,rt->state.cpu.a);
            rt->state.cpu.pc=0x816Bu; return dd3_static_complete(rt,4u);
        }
        case 0x816Bu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x816Du; return dd3_static_complete(rt,2u);
        }
        case 0x816Du: {
            dd3_static_write8(rt,0x07F2u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8170u; return dd3_static_complete(rt,4u);
        }
        case 0x8170u: {
            uint8_t v=0x60u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8172u; return dd3_static_complete(rt,2u);
        }
        case 0x8172u: {
            dd3_static_write8(rt,0x07F3u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8175u; return dd3_static_complete(rt,4u);
        }
        case 0x8175u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8176u: {
            uint16_t ea=0x07FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0x8179u; return dd3_static_complete(rt,4u);
        }
        case 0x8179u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x817Bu,0x81E4u)) c++; rt->state.cpu.pc=0x81E4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x817Bu; return dd3_static_complete(rt,2u);
        }
        case 0x817Bu: {
            uint16_t ea=0x07FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x817Eu; return dd3_static_complete(rt,4u);
        }
        case 0x817Eu: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8180u; return dd3_static_complete(rt,2u);
        }
        case 0x8180u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8182u,0x8197u)) c++; rt->state.cpu.pc=0x8197u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8182u; return dd3_static_complete(rt,2u);
        }
        case 0x8182u: {
            uint16_t ea=0x07FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8185u; return dd3_static_complete(rt,4u);
        }
        case 0x8185u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8187u; return dd3_static_complete(rt,2u);
        }
        case 0x8187u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8189u,0x8197u)) c++; rt->state.cpu.pc=0x8197u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8189u; return dd3_static_complete(rt,2u);
        }
        case 0x8189u: {
            uint16_t ea=0x0722u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x818Cu; return dd3_static_complete(rt,6u);
        }
        case 0x818Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x818Eu,0x8197u)) c++; rt->state.cpu.pc=0x8197u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x818Eu; return dd3_static_complete(rt,2u);
        }
        case 0x818Eu: {
            uint16_t ea=0x0723u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8191u; return dd3_static_complete(rt,4u);
        }
        case 0x8191u: {
            dd3_static_write8(rt,0x07FFu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8194u; return dd3_static_complete(rt,4u);
        }
        case 0x8194u: {
            dd3_static_push8(rt,(uint8_t)(0x8196u>>8)); dd3_static_push8(rt,(uint8_t)0x8196u);
            rt->state.cpu.pc=0x8006u; return dd3_static_complete(rt,6u);
        }
        case 0x8197u: {
            uint8_t v=0x07u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8199u; return dd3_static_complete(rt,2u);
        }
        case 0x8199u: {
            dd3_static_write8(rt,0x0738u,rt->state.cpu.x);
            rt->state.cpu.pc=0x819Cu; return dd3_static_complete(rt,4u);
        }
        case 0x819Cu: {
            uint16_t ea=(uint16_t)(0x0730u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x819Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0730u,ea)?1u:0u));
        }
        case 0x819Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81A1u,0x81A4u)) c++; rt->state.cpu.pc=0x81A4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81A1u; return dd3_static_complete(rt,2u);
        }
        case 0x81A1u: {
            dd3_static_push8(rt,(uint8_t)(0x81A3u>>8)); dd3_static_push8(rt,(uint8_t)0x81A3u);
            rt->state.cpu.pc=0x81E5u; return dd3_static_complete(rt,6u);
        }
        case 0x81A4u: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81A7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x81A7u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81A9u,0x81ACu)) c++; rt->state.cpu.pc=0x81ACu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81A9u; return dd3_static_complete(rt,2u);
        }
        case 0x81A9u: {
            dd3_static_push8(rt,(uint8_t)(0x81ABu>>8)); dd3_static_push8(rt,(uint8_t)0x81ABu);
            rt->state.cpu.pc=0x8596u; return dd3_static_complete(rt,6u);
        }
        case 0x81ACu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x81ADu; return dd3_static_complete(rt,2u);
        }
        case 0x81ADu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x81AFu; return dd3_static_complete(rt,2u);
        }
        case 0x81AFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81B1u,0x8199u)) c++; rt->state.cpu.pc=0x8199u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81B1u; return dd3_static_complete(rt,2u);
        }
        case 0x81B1u: {
            uint16_t ea=0x07FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0x81B4u; return dd3_static_complete(rt,4u);
        }
        case 0x81B4u: {
            if (rt->state.cpu.v) { unsigned c=3u; if (dd3_static_page_crossed(0x81B6u,0x81E4u)) c++; rt->state.cpu.pc=0x81E4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81B6u; return dd3_static_complete(rt,2u);
        }
        case 0x81B6u: {
            dd3_static_write8(rt,0x0738u,rt->state.cpu.x);
            rt->state.cpu.pc=0x81B9u; return dd3_static_complete(rt,4u);
        }
        case 0x81B9u: {
            dd3_static_push8(rt,(uint8_t)(0x81BBu>>8)); dd3_static_push8(rt,(uint8_t)0x81BBu);
            rt->state.cpu.pc=0x8842u; return dd3_static_complete(rt,6u);
        }
        case 0x81BCu: {
            dd3_static_push8(rt,(uint8_t)(0x81BEu>>8)); dd3_static_push8(rt,(uint8_t)0x81BEu);
            rt->state.cpu.pc=0x8596u; return dd3_static_complete(rt,6u);
        }
        case 0x81BFu: {
            dd3_static_push8(rt,(uint8_t)(0x81C1u>>8)); dd3_static_push8(rt,(uint8_t)0x81C1u);
            rt->state.cpu.pc=0x85D8u; return dd3_static_complete(rt,6u);
        }
        case 0x81C2u: {
            uint16_t ea=0x0738u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81C5u; return dd3_static_complete(rt,4u);
        }
        case 0x81C5u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x81C6u; return dd3_static_complete(rt,2u);
        }
        case 0x81C6u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x81C8u,0x81B6u)) c++; rt->state.cpu.pc=0x81B6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81C8u; return dd3_static_complete(rt,2u);
        }
        case 0x81C8u: {
            uint16_t ea=0x0739u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81CBu; return dd3_static_complete(rt,4u);
        }
        case 0x81CBu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x81CCu; return dd3_static_complete(rt,2u);
        }
        case 0x81CCu: {
            uint16_t ea=0x073Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x81CFu; return dd3_static_complete(rt,4u);
        }
        case 0x81CFu: {
            dd3_static_write8(rt,0x073Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0x81D2u; return dd3_static_complete(rt,4u);
        }
        case 0x81D2u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x81D4u,0x81E4u)) c++; rt->state.cpu.pc=0x81E4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81D4u; return dd3_static_complete(rt,2u);
        }
        case 0x81D4u: {
            uint8_t v=0x03u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81D6u; return dd3_static_complete(rt,2u);
        }
        case 0x81D6u: {
            uint16_t ea=(uint16_t)(0x0730u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81D9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0730u,ea)?1u:0u));
        }
        case 0x81D9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81DBu,0x81E1u)) c++; rt->state.cpu.pc=0x81E1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81DBu; return dd3_static_complete(rt,2u);
        }
        case 0x81DBu: {
            dd3_static_write8(rt,0x0738u,rt->state.cpu.x);
            rt->state.cpu.pc=0x81DEu; return dd3_static_complete(rt,4u);
        }
        case 0x81DEu: {
            dd3_static_push8(rt,(uint8_t)(0x81E0u>>8)); dd3_static_push8(rt,(uint8_t)0x81E0u);
            rt->state.cpu.pc=0x81EBu; return dd3_static_complete(rt,6u);
        }
        case 0x81E1u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x81E2u; return dd3_static_complete(rt,2u);
        }
        case 0x81E2u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x81E4u,0x81D6u)) c++; rt->state.cpu.pc=0x81D6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81E4u; return dd3_static_complete(rt,2u);
        }
        case 0x81E4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x81E5u: {
            uint16_t ea=(uint16_t)(0x074Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x81E8u; return dd3_static_complete(rt,7u);
        }
        case 0x81E8u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81EAu,0x8206u)) c++; rt->state.cpu.pc=0x8206u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81EAu; return dd3_static_complete(rt,2u);
        }
        case 0x81EAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x81EBu: {
            uint16_t ea=(uint16_t)(0x079Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x81EEu; return dd3_static_complete(rt,7u);
        }
        case 0x81EEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81F0u,0x81F8u)) c++; rt->state.cpu.pc=0x81F8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81F0u; return dd3_static_complete(rt,2u);
        }
        case 0x81F0u: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x81F3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x81F3u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x81F5u; return dd3_static_complete(rt,2u);
        }
        case 0x81F5u: {
            dd3_static_write8(rt,(uint16_t)(0x0728u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x81F8u; return dd3_static_complete(rt,5u);
        }
        case 0x81F8u: {
            uint16_t ea=(uint16_t)(0x074Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x81FBu; return dd3_static_complete(rt,7u);
        }
        case 0x81FBu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x81FDu,0x81FEu)) c++; rt->state.cpu.pc=0x81FEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x81FDu; return dd3_static_complete(rt,2u);
        }
        case 0x81FDu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x81FEu: {
            uint16_t ea=(uint16_t)(0x0730u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8201u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0730u,ea)?1u:0u));
        }
        case 0x8201u: {
            uint8_t v=0xFBu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8203u; return dd3_static_complete(rt,2u);
        }
        case 0x8203u: {
            dd3_static_write8(rt,(uint16_t)(0x0730u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8206u; return dd3_static_complete(rt,5u);
        }
        case 0x8206u: {
            uint16_t ea=(uint16_t)(0x073Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8209u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x073Cu,ea)?1u:0u));
        }
        case 0x8209u: {
            dd3_static_write8(rt,0x00u,rt->state.cpu.a);
            rt->state.cpu.pc=0x820Bu; return dd3_static_complete(rt,3u);
        }
        case 0x820Bu: {
            uint16_t ea=(uint16_t)(0x0744u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x820Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0744u,ea)?1u:0u));
        }
        case 0x820Eu: {
            dd3_static_write8(rt,0x01u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8210u; return dd3_static_complete(rt,3u);
        }
        case 0x8210u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8212u; return dd3_static_complete(rt,2u);
        }
        case 0x8212u: {
            dd3_static_push8(rt,(uint8_t)(0x8214u>>8)); dd3_static_push8(rt,(uint8_t)0x8214u);
            rt->state.cpu.pc=0x8225u; return dd3_static_complete(rt,6u);
        }
        case 0x8215u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8217u,0x8212u)) c++; rt->state.cpu.pc=0x8212u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8217u; return dd3_static_complete(rt,2u);
        }
        case 0x8217u: {
            dd3_static_push8(rt,(uint8_t)(0x8219u>>8)); dd3_static_push8(rt,(uint8_t)0x8219u);
            rt->state.cpu.pc=0x88C0u; return dd3_static_complete(rt,6u);
        }
        case 0x821Au: {
            uint16_t ea=0x00u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x821Cu; return dd3_static_complete(rt,3u);
        }
        case 0x821Cu: {
            dd3_static_write8(rt,(uint16_t)(0x073Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x821Fu; return dd3_static_complete(rt,5u);
        }
        case 0x821Fu: {
            uint16_t ea=0x01u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8221u; return dd3_static_complete(rt,3u);
        }
        case 0x8221u: {
            dd3_static_write8(rt,(uint16_t)(0x0744u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8224u; return dd3_static_complete(rt,5u);
        }
        case 0x8224u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8225u: {
            uint16_t ea=(uint16_t)(0x0730u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8228u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0730u,ea)?1u:0u));
        }
        case 0x8228u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x822Au; return dd3_static_complete(rt,2u);
        }
        case 0x822Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x822Cu,0x8243u)) c++; rt->state.cpu.pc=0x8243u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x822Cu; return dd3_static_complete(rt,2u);
        }
        case 0x822Cu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x822Du; return dd3_static_complete(rt,2u);
        }
        case 0x822Du: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x822Eu; return dd3_static_complete(rt,3u);
        }
        case 0x822Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8230u>>8)); dd3_static_push8(rt,(uint8_t)0x8230u);
            rt->state.cpu.pc=0x8243u; return dd3_static_complete(rt,6u);
        }
        case 0x8231u: {
            uint16_t ea=(uint16_t)(0x078Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8234u; return dd3_static_complete(rt,7u);
        }
        case 0x8234u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8236u,0x8239u)) c++; rt->state.cpu.pc=0x8239u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8236u; return dd3_static_complete(rt,2u);
        }
        case 0x8236u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8237u; return dd3_static_complete(rt,4u);
        }
        case 0x8237u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8238u; return dd3_static_complete(rt,2u);
        }
        case 0x8238u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8239u: {
            uint16_t ea=(uint16_t)(0x0730u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x823Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0730u,ea)?1u:0u));
        }
        case 0x823Cu: {
            uint8_t v=0xFDu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x823Eu; return dd3_static_complete(rt,2u);
        }
        case 0x823Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0730u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8241u; return dd3_static_complete(rt,5u);
        }
        case 0x8241u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8242u; return dd3_static_complete(rt,4u);
        }
        case 0x8242u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8243u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8245u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8245u: {
            uint8_t v=0x40u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8247u; return dd3_static_complete(rt,2u);
        }
        case 0x8247u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8249u,0x8256u)) c++; rt->state.cpu.pc=0x8256u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8249u; return dd3_static_complete(rt,2u);
        }
        case 0x8249u: {
            uint8_t v=0xC0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x824Bu; return dd3_static_complete(rt,2u);
        }
        case 0x824Bu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x824Du,0x8250u)) c++; rt->state.cpu.pc=0x8250u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x824Du; return dd3_static_complete(rt,2u);
        }
        case 0x824Du: {
            rt->state.cpu.pc=0x82F7u; return dd3_static_complete(rt,3u);
        }
        case 0x8250u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8252u; return dd3_static_complete(rt,2u);
        }
        case 0x8252u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8254u,0x827Bu)) c++; rt->state.cpu.pc=0x827Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8254u; return dd3_static_complete(rt,2u);
        }
        case 0x8254u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8256u,0x8289u)) c++; rt->state.cpu.pc=0x8289u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8256u; return dd3_static_complete(rt,2u);
        }
        case 0x8256u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8258u; return dd3_static_complete(rt,2u);
        }
        case 0x8258u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x825Au,0x8275u)) c++; rt->state.cpu.pc=0x8275u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x825Au; return dd3_static_complete(rt,2u);
        }
        case 0x825Au: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x825Cu,0x825Cu)) c++; rt->state.cpu.pc=0x825Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x825Cu; return dd3_static_complete(rt,2u);
        }
        case 0x825Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0794u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x825Fu; return dd3_static_complete(rt,5u);
        }
        case 0x825Fu: {
            dd3_static_write8(rt,0x02u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8261u; return dd3_static_complete(rt,3u);
        }
        case 0x8261u: {
            uint16_t ea=(uint16_t)(0x07A4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8264u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07A4u,ea)?1u:0u));
        }
        case 0x8264u: {
            dd3_static_write8(rt,0x03u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8266u; return dd3_static_complete(rt,3u);
        }
        case 0x8266u: {
            dd3_static_push8(rt,(uint8_t)(0x8268u>>8)); dd3_static_push8(rt,(uint8_t)0x8268u);
            rt->state.cpu.pc=0x88CDu; return dd3_static_complete(rt,6u);
        }
        case 0x8269u: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x826Bu; return dd3_static_complete(rt,3u);
        }
        case 0x826Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x826Du,0x826Fu)) c++; rt->state.cpu.pc=0x826Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x826Du; return dd3_static_complete(rt,2u);
        }
        case 0x826Du: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x826Fu; return dd3_static_complete(rt,2u);
        }
        case 0x826Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0798u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8272u; return dd3_static_complete(rt,5u);
        }
        case 0x8272u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8273u; return dd3_static_complete(rt,2u);
        }
        case 0x8273u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8274u; return dd3_static_complete(rt,2u);
        }
        case 0x8274u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8275u: {
            dd3_static_write8(rt,(uint16_t)(0x074Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8278u; return dd3_static_complete(rt,5u);
        }
        case 0x8278u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8279u; return dd3_static_complete(rt,2u);
        }
        case 0x8279u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x827Au; return dd3_static_complete(rt,2u);
        }
        case 0x827Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x827Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0754u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x827Eu; return dd3_static_complete(rt,5u);
        }
        case 0x827Eu: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8281u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x8281u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8283u; return dd3_static_complete(rt,2u);
        }
        case 0x8283u: {
            dd3_static_write8(rt,(uint16_t)(0x0728u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8286u; return dd3_static_complete(rt,5u);
        }
        case 0x8286u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8287u; return dd3_static_complete(rt,2u);
        }
        case 0x8287u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8288u; return dd3_static_complete(rt,2u);
        }
        case 0x8288u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8289u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x828Au; return dd3_static_complete(rt,3u);
        }
        case 0x828Au: {
            uint16_t ea=(uint16_t)(0x07ACu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x828Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07ACu,ea)?1u:0u));
        }
        case 0x828Du: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x828Fu; return dd3_static_complete(rt,2u);
        }
        case 0x828Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0754u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8292u; return dd3_static_complete(rt,5u);
        }
        case 0x8292u: {
            uint16_t ea=(uint16_t)(0x0730u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8295u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0730u,ea)?1u:0u));
        }
        case 0x8295u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8297u; return dd3_static_complete(rt,2u);
        }
        case 0x8297u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8299u,0x829Du)) c++; rt->state.cpu.pc=0x829Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8299u; return dd3_static_complete(rt,2u);
        }
        case 0x8299u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x829Bu; return dd3_static_complete(rt,2u);
        }
        case 0x829Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x829Du,0x82A0u)) c++; rt->state.cpu.pc=0x82A0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x829Du; return dd3_static_complete(rt,2u);
        }
        case 0x829Du: {
            uint16_t ea=(uint16_t)(0x0798u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82A0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0798u,ea)?1u:0u));
        }
        case 0x82A0u: {
            dd3_static_write8(rt,(uint16_t)(0x079Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x82A3u; return dd3_static_complete(rt,5u);
        }
        case 0x82A3u: {
            uint16_t ea=(uint16_t)(0x0794u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82A6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0794u,ea)?1u:0u));
        }
        case 0x82A6u: {
            dd3_static_write8(rt,(uint16_t)(0x074Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x82A9u; return dd3_static_complete(rt,5u);
        }
        case 0x82A9u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x82AAu; return dd3_static_complete(rt,4u);
        }
        case 0x82AAu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x82ACu,0x82DEu)) c++; rt->state.cpu.pc=0x82DEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82ACu; return dd3_static_complete(rt,2u);
        }
        case 0x82ACu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x82ADu; return dd3_static_complete(rt,2u);
        }
        case 0x82ADu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82AFu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x82AFu: {
            dd3_static_write8(rt,0x02u,rt->state.cpu.a);
            rt->state.cpu.pc=0x82B1u; return dd3_static_complete(rt,3u);
        }
        case 0x82B1u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82B3u; return dd3_static_complete(rt,2u);
        }
        case 0x82B3u: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0x82B5u; return dd3_static_complete(rt,3u);
        }
        case 0x82B5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82B7u,0x82C5u)) c++; rt->state.cpu.pc=0x82C5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82B7u; return dd3_static_complete(rt,2u);
        }
        case 0x82B7u: {
            uint16_t ea=(uint16_t)(0x0794u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82BAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0794u,ea)?1u:0u));
        }
        case 0x82BAu: {
            uint16_t ea=(uint16_t)(0x07A0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x82BDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07A0u,ea)?1u:0u));
        }
        case 0x82BDu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x82BFu,0x82C2u)) c++; rt->state.cpu.pc=0x82C2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82BFu; return dd3_static_complete(rt,2u);
        }
        case 0x82BFu: {
            uint16_t ea=(uint16_t)(0x07A0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82C2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07A0u,ea)?1u:0u));
        }
        case 0x82C2u: {
            dd3_static_write8(rt,(uint16_t)(0x079Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x82C5u; return dd3_static_complete(rt,5u);
        }
        case 0x82C5u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82C7u; return dd3_static_complete(rt,2u);
        }
        case 0x82C7u: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0x82C9u; return dd3_static_complete(rt,3u);
        }
        case 0x82C9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82CBu,0x82D0u)) c++; rt->state.cpu.pc=0x82D0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82CBu; return dd3_static_complete(rt,2u);
        }
        case 0x82CBu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82CDu; return dd3_static_complete(rt,2u);
        }
        case 0x82CDu: {
            dd3_static_write8(rt,(uint16_t)(0x079Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x82D0u; return dd3_static_complete(rt,5u);
        }
        case 0x82D0u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82D2u; return dd3_static_complete(rt,2u);
        }
        case 0x82D2u: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0x82D4u; return dd3_static_complete(rt,3u);
        }
        case 0x82D4u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82D6u,0x82DEu)) c++; rt->state.cpu.pc=0x82DEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82D6u; return dd3_static_complete(rt,2u);
        }
        case 0x82D6u: {
            uint16_t ea=(uint16_t)(0x0730u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82D9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0730u,ea)?1u:0u));
        }
        case 0x82D9u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x82DBu; return dd3_static_complete(rt,2u);
        }
        case 0x82DBu: {
            dd3_static_write8(rt,(uint16_t)(0x0730u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x82DEu; return dd3_static_complete(rt,5u);
        }
        case 0x82DEu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x82E0u; return dd3_static_complete(rt,2u);
        }
        case 0x82E0u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x82E2u,0x82ECu)) c++; rt->state.cpu.pc=0x82ECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82E2u; return dd3_static_complete(rt,2u);
        }
        case 0x82E2u: {
            uint16_t ea=(uint16_t)(0x0730u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82E5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0730u,ea)?1u:0u));
        }
        case 0x82E5u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x82E7u; return dd3_static_complete(rt,2u);
        }
        case 0x82E7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x82E9u,0x82ECu)) c++; rt->state.cpu.pc=0x82ECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x82E9u; return dd3_static_complete(rt,2u);
        }
        case 0x82E9u: {
            dd3_static_push8(rt,(uint8_t)(0x82EBu>>8)); dd3_static_push8(rt,(uint8_t)0x82EBu);
            rt->state.cpu.pc=0x889Eu; return dd3_static_complete(rt,6u);
        }
        case 0x82ECu: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82EFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x82EFu: {
            uint8_t v=0x30u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x82F1u; return dd3_static_complete(rt,2u);
        }
        case 0x82F1u: {
            dd3_static_write8(rt,(uint16_t)(0x0728u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x82F4u; return dd3_static_complete(rt,5u);
        }
        case 0x82F4u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x82F5u; return dd3_static_complete(rt,2u);
        }
        case 0x82F5u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x82F6u; return dd3_static_complete(rt,2u);
        }
        case 0x82F6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x82F7u: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x82F9u; return dd3_static_complete(rt,2u);
        }
        case 0x82F9u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x82FAu; return dd3_static_complete(rt,2u);
        }
        case 0x82FAu: {
            uint16_t ea=(uint16_t)(0x830Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x82FDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x830Cu,ea)?1u:0u));
        }
        case 0x82FDu: {
            dd3_static_write8(rt,0x02u,rt->state.cpu.a);
            rt->state.cpu.pc=0x82FFu; return dd3_static_complete(rt,3u);
        }
        case 0x82FFu: {
            uint16_t ea=(uint16_t)(0x832Au+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8302u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x832Au,ea)?1u:0u));
        }
        case 0x8302u: {
            dd3_static_write8(rt,0x03u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8304u; return dd3_static_complete(rt,3u);
        }
        case 0x8304u: {
            uint16_t ea=0x0738u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8307u; return dd3_static_complete(rt,4u);
        }
        case 0x8307u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8308u; return dd3_static_complete(rt,2u);
        }
        case 0x8308u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8309u; return dd3_static_complete(rt,2u);
        }
        case 0x8309u: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x0002u); return dd3_static_complete(rt,5u);
        }
        case 0x8348u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x834Au; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x834Au: {
            rt->state.cpu.pc=0x827Bu; return dd3_static_complete(rt,3u);
        }
        case 0x834Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x834Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x834Fu: {
            uint16_t ea=(uint16_t)(0x0754u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8352u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0754u,ea)?1u:0u));
        }
        case 0x8352u: {
            rt->state.cpu.pc=0x827Bu; return dd3_static_complete(rt,3u);
        }
        case 0x8355u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8357u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8357u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8359u,0x836Fu)) c++; rt->state.cpu.pc=0x836Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8359u; return dd3_static_complete(rt,2u);
        }
        case 0x8359u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x835Bu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x835Bu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x835Du,0x8367u)) c++; rt->state.cpu.pc=0x8367u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x835Du; return dd3_static_complete(rt,2u);
        }
        case 0x835Du: {
            uint16_t ea=(uint16_t)(0x075Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8360u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x075Cu,ea)?1u:0u));
        }
        case 0x8360u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8362u,0x836Fu)) c++; rt->state.cpu.pc=0x836Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8362u; return dd3_static_complete(rt,2u);
        }
        case 0x8362u: {
            uint16_t ea=(uint16_t)(0x0754u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8365u; return dd3_static_complete(rt,7u);
        }
        case 0x8365u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8367u,0x836Fu)) c++; rt->state.cpu.pc=0x836Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8367u; return dd3_static_complete(rt,2u);
        }
        case 0x8367u: {
            uint16_t ea=(uint16_t)(0x075Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x836Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x075Cu,ea)?1u:0u));
        }
        case 0x836Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x836Cu,0x836Fu)) c++; rt->state.cpu.pc=0x836Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x836Cu; return dd3_static_complete(rt,2u);
        }
        case 0x836Cu: {
            uint16_t ea=(uint16_t)(0x0754u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x836Fu; return dd3_static_complete(rt,7u);
        }
        case 0x836Fu: {
            dd3_static_write8(rt,(uint16_t)(0x075Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8372u; return dd3_static_complete(rt,5u);
        }
        case 0x8372u: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8375u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x8375u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8377u; return dd3_static_complete(rt,2u);
        }
        case 0x8377u: {
            dd3_static_write8(rt,(uint16_t)(0x0728u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x837Au; return dd3_static_complete(rt,5u);
        }
        case 0x837Au: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x837Bu; return dd3_static_complete(rt,2u);
        }
        case 0x837Bu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x837Cu; return dd3_static_complete(rt,2u);
        }
        case 0x837Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x837Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x837Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x837Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8381u,0x8386u)) c++; rt->state.cpu.pc=0x8386u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8381u; return dd3_static_complete(rt,2u);
        }
        case 0x8381u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8383u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8383u: {
            uint16_t ea=(uint16_t)(0x0764u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8386u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0764u,ea)?1u:0u));
        }
        case 0x8386u: {
            dd3_static_write8(rt,(uint16_t)(0x0764u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8389u; return dd3_static_complete(rt,5u);
        }
        case 0x8389u: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x838Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x838Cu: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x838Eu; return dd3_static_complete(rt,2u);
        }
        case 0x838Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0728u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8391u; return dd3_static_complete(rt,5u);
        }
        case 0x8391u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8392u; return dd3_static_complete(rt,2u);
        }
        case 0x8392u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8393u; return dd3_static_complete(rt,2u);
        }
        case 0x8393u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8394u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8396u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8396u: {
            dd3_static_write8(rt,(uint16_t)(0x07A8u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8399u; return dd3_static_complete(rt,5u);
        }
        case 0x8399u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x839Au; return dd3_static_complete(rt,2u);
        }
        case 0x839Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x839Bu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x839Du; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x839Du: {
            dd3_static_write8(rt,(uint16_t)(0x07A4u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x83A0u; return dd3_static_complete(rt,5u);
        }
        case 0x83A0u: {
            uint16_t ea=(uint16_t)(0x0794u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83A3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0794u,ea)?1u:0u));
        }
        case 0x83A3u: {
            rt->state.cpu.pc=0x825Fu; return dd3_static_complete(rt,3u);
        }
        case 0x83ADu: {
            uint16_t ea=(uint16_t)(0x0794u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83B0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0794u,ea)?1u:0u));
        }
        case 0x83B0u: {
            dd3_static_write8(rt,(uint16_t)(0x074Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x83B3u; return dd3_static_complete(rt,5u);
        }
        case 0x83B3u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x83B4u; return dd3_static_complete(rt,2u);
        }
        case 0x83B4u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x83B6u,0x83BFu)) c++; rt->state.cpu.pc=0x83BFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83B6u; return dd3_static_complete(rt,2u);
        }
        case 0x83B6u: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83B9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x83B9u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x83BBu; return dd3_static_complete(rt,2u);
        }
        case 0x83BBu: {
            dd3_static_write8(rt,(uint16_t)(0x0728u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x83BEu; return dd3_static_complete(rt,5u);
        }
        case 0x83BEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x83BFu: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83C2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x83C2u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x83C4u; return dd3_static_complete(rt,2u);
        }
        case 0x83C4u: {
            dd3_static_write8(rt,(uint16_t)(0x0728u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x83C7u; return dd3_static_complete(rt,5u);
        }
        case 0x83C7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x83DCu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83DEu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x83DEu: {
            dd3_static_write8(rt,0x0739u,rt->state.cpu.a);
            rt->state.cpu.pc=0x83E1u; return dd3_static_complete(rt,4u);
        }
        case 0x83E1u: {
            dd3_static_write8(rt,0x073Au,rt->state.cpu.a);
            rt->state.cpu.pc=0x83E4u; return dd3_static_complete(rt,4u);
        }
        case 0x83E4u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x83E5u; return dd3_static_complete(rt,2u);
        }
        case 0x83E5u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x83E6u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x83E8u; return dd3_static_complete(rt,2u);
        }
        case 0x83E8u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x83EAu,0x83F5u)) c++; rt->state.cpu.pc=0x83F5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83EAu; return dd3_static_complete(rt,2u);
        }
        case 0x83EAu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x83EBu; return dd3_static_complete(rt,2u);
        }
        case 0x83EBu: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x83EDu; return dd3_static_complete(rt,2u);
        }
        case 0x83EDu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x83EFu; return dd3_static_complete(rt,2u);
        }
        case 0x83EFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x83F1u,0x840Bu)) c++; rt->state.cpu.pc=0x840Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x83F1u; return dd3_static_complete(rt,2u);
        }
        case 0x83F1u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x83F2u; return dd3_static_complete(rt,2u);
        }
        case 0x83F2u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x83F3u; return dd3_static_complete(rt,2u);
        }
        case 0x83F3u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x83F4u; return dd3_static_complete(rt,2u);
        }
        case 0x83F4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x83F5u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83F7u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x83F7u: {
            dd3_static_write8(rt,0x07EEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x83FAu; return dd3_static_complete(rt,4u);
        }
        case 0x83FAu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x83FBu; return dd3_static_complete(rt,2u);
        }
        case 0x83FBu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x83FDu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x83FDu: {
            dd3_static_write8(rt,0x07EFu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8400u; return dd3_static_complete(rt,4u);
        }
        case 0x8400u: {
            uint16_t ea=0x07DAu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8403u; return dd3_static_complete(rt,4u);
        }
        case 0x8403u: {
            uint8_t v=0x30u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8405u; return dd3_static_complete(rt,2u);
        }
        case 0x8405u: {
            dd3_static_write8(rt,0x07DAu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8408u; return dd3_static_complete(rt,4u);
        }
        case 0x8408u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8409u; return dd3_static_complete(rt,2u);
        }
        case 0x8409u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x840Au; return dd3_static_complete(rt,2u);
        }
        case 0x840Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x840Bu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x840Du; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x840Du: {
            dd3_static_write8(rt,0x02u,rt->state.cpu.a);
            rt->state.cpu.pc=0x840Fu; return dd3_static_complete(rt,3u);
        }
        case 0x840Fu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8410u; return dd3_static_complete(rt,2u);
        }
        case 0x8410u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8412u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8412u: {
            dd3_static_write8(rt,0x03u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8414u; return dd3_static_complete(rt,3u);
        }
        case 0x8414u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8415u; return dd3_static_complete(rt,2u);
        }
        case 0x8415u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8416u; return dd3_static_complete(rt,2u);
        }
        case 0x8416u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8417u; return dd3_static_complete(rt,3u);
        }
        case 0x8417u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8419u; return dd3_static_complete(rt,2u);
        }
        case 0x8419u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x841Bu,0x842Bu)) c++; rt->state.cpu.pc=0x842Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x841Bu; return dd3_static_complete(rt,2u);
        }
        case 0x841Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x841Du; return dd3_static_complete(rt,2u);
        }
        case 0x841Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x02u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x841Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x02u),ea)?1u:0u));
        }
        case 0x841Fu: {
            dd3_static_write8(rt,(uint16_t)(0x07B3u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8422u; return dd3_static_complete(rt,5u);
        }
        case 0x8422u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8423u; return dd3_static_complete(rt,2u);
        }
        case 0x8423u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x02u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8425u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x02u),ea)?1u:0u));
        }
        case 0x8425u: {
            dd3_static_write8(rt,(uint16_t)(0x07B6u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8428u; return dd3_static_complete(rt,5u);
        }
        case 0x8428u: {
            uint16_t ea=0x0738u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x842Bu; return dd3_static_complete(rt,4u);
        }
        case 0x842Bu: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x842Du; return dd3_static_complete(rt,2u);
        }
        case 0x842Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x02u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x842Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x02u),ea)?1u:0u));
        }
        case 0x842Fu: {
            uint8_t v=0x30u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8431u; return dd3_static_complete(rt,2u);
        }
        case 0x8431u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8432u; return dd3_static_complete(rt,3u);
        }
        case 0x8432u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8433u; return dd3_static_complete(rt,2u);
        }
        case 0x8433u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x02u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8435u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x02u),ea)?1u:0u));
        }
        case 0x8435u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8436u; return dd3_static_complete(rt,3u);
        }
        case 0x8436u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8437u; return dd3_static_complete(rt,2u);
        }
        case 0x8437u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8438u; return dd3_static_complete(rt,2u);
        }
        case 0x8438u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8439u; return dd3_static_complete(rt,2u);
        }
        case 0x8439u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x843Au; return dd3_static_complete(rt,2u);
        }
        case 0x843Au: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x843Bu; return dd3_static_complete(rt,4u);
        }
        case 0x843Bu: {
            dd3_static_write8(rt,(uint16_t)(0x07CFu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x843Eu; return dd3_static_complete(rt,5u);
        }
        case 0x843Eu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x843Fu; return dd3_static_complete(rt,4u);
        }
        case 0x843Fu: {
            dd3_static_write8(rt,(uint16_t)(0x07CEu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8442u; return dd3_static_complete(rt,5u);
        }
        case 0x8442u: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8445u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x8445u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8447u; return dd3_static_complete(rt,2u);
        }
        case 0x8447u: {
            dd3_static_write8(rt,(uint16_t)(0x0728u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x844Au; return dd3_static_complete(rt,5u);
        }
        case 0x844Au: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x844Bu; return dd3_static_complete(rt,4u);
        }
        case 0x844Bu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x844Cu; return dd3_static_complete(rt,2u);
        }
        case 0x844Cu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x844Du; return dd3_static_complete(rt,2u);
        }
        case 0x844Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x844Eu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8450u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8450u: {
            dd3_static_write8(rt,0x07FFu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8453u; return dd3_static_complete(rt,4u);
        }
        case 0x8453u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8454u; return dd3_static_complete(rt,2u);
        }
        case 0x8454u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8455u; return dd3_static_complete(rt,3u);
        }
        case 0x8455u: {
            uint16_t ea=0x00u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8457u; return dd3_static_complete(rt,3u);
        }
        case 0x8457u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8458u; return dd3_static_complete(rt,3u);
        }
        case 0x8458u: {
            uint16_t ea=0x01u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x845Au; return dd3_static_complete(rt,3u);
        }
        case 0x845Au: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x845Bu; return dd3_static_complete(rt,3u);
        }
        case 0x845Bu: {
            dd3_static_push8(rt,(uint8_t)(0x845Du>>8)); dd3_static_push8(rt,(uint8_t)0x845Du);
            rt->state.cpu.pc=0x8006u; return dd3_static_complete(rt,6u);
        }
        case 0x845Eu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x845Fu; return dd3_static_complete(rt,4u);
        }
        case 0x845Fu: {
            dd3_static_write8(rt,0x01u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8461u; return dd3_static_complete(rt,3u);
        }
        case 0x8461u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8462u; return dd3_static_complete(rt,4u);
        }
        case 0x8462u: {
            dd3_static_write8(rt,0x00u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8464u; return dd3_static_complete(rt,3u);
        }
        case 0x8464u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8465u; return dd3_static_complete(rt,4u);
        }
        case 0x8465u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8466u; return dd3_static_complete(rt,2u);
        }
        case 0x8466u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8467u; return dd3_static_complete(rt,2u);
        }
        case 0x8467u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8468u; return dd3_static_complete(rt,2u);
        }
        case 0x8468u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8469u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x846Bu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x846Bu: {
            dd3_static_write8(rt,(uint16_t)(0x07ACu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x846Eu; return dd3_static_complete(rt,5u);
        }
        case 0x846Eu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x846Fu; return dd3_static_complete(rt,2u);
        }
        case 0x846Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x847Eu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x847Fu; return dd3_static_complete(rt,2u);
        }
        case 0x847Fu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8480u; return dd3_static_complete(rt,2u);
        }
        case 0x8480u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8481u; return dd3_static_complete(rt,2u);
        }
        case 0x8481u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8482u; return dd3_static_complete(rt,2u);
        }
        case 0x8482u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8483u; return dd3_static_complete(rt,2u);
        }
        case 0x8483u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8485u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8485u: {
            dd3_static_write8(rt,(uint16_t)(0x07CEu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8488u; return dd3_static_complete(rt,5u);
        }
        case 0x8488u: {
            uint16_t ea=0x0738u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x848Bu; return dd3_static_complete(rt,4u);
        }
        case 0x848Bu: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x848Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x848Eu: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8490u; return dd3_static_complete(rt,2u);
        }
        case 0x8490u: {
            dd3_static_write8(rt,(uint16_t)(0x0728u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8493u; return dd3_static_complete(rt,5u);
        }
        case 0x8493u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8494u; return dd3_static_complete(rt,2u);
        }
        case 0x8494u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8495u: {
            uint16_t ea=(uint16_t)(0x076Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8498u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x076Cu,ea)?1u:0u));
        }
        case 0x8498u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x849Au,0x849Fu)) c++; rt->state.cpu.pc=0x849Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x849Au; return dd3_static_complete(rt,2u);
        }
        case 0x849Au: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x849Cu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x849Cu: {
            dd3_static_write8(rt,(uint16_t)(0x076Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x849Fu; return dd3_static_complete(rt,5u);
        }
        case 0x849Fu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x84A0u; return dd3_static_complete(rt,2u);
        }
        case 0x84A0u: {
            uint16_t ea=(uint16_t)(0x076Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x84A3u; return dd3_static_complete(rt,7u);
        }
        case 0x84A3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84A5u,0x84BBu)) c++; rt->state.cpu.pc=0x84BBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84A5u; return dd3_static_complete(rt,2u);
        }
        case 0x84A5u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x84A6u; return dd3_static_complete(rt,2u);
        }
        case 0x84A6u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x84A7u; return dd3_static_complete(rt,2u);
        }
        case 0x84A7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x84A8u: {
            uint16_t ea=(uint16_t)(0x0774u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84ABu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0774u,ea)?1u:0u));
        }
        case 0x84ABu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84ADu,0x84B2u)) c++; rt->state.cpu.pc=0x84B2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84ADu; return dd3_static_complete(rt,2u);
        }
        case 0x84ADu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84AFu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x84AFu: {
            dd3_static_write8(rt,(uint16_t)(0x0774u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x84B2u; return dd3_static_complete(rt,5u);
        }
        case 0x84B2u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x84B3u; return dd3_static_complete(rt,2u);
        }
        case 0x84B3u: {
            uint16_t ea=(uint16_t)(0x0774u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x84B6u; return dd3_static_complete(rt,7u);
        }
        case 0x84B6u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x84B8u,0x84BBu)) c++; rt->state.cpu.pc=0x84BBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x84B8u; return dd3_static_complete(rt,2u);
        }
        case 0x84B8u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x84B9u; return dd3_static_complete(rt,2u);
        }
        case 0x84B9u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x84BAu; return dd3_static_complete(rt,2u);
        }
        case 0x84BAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x84BBu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84BDu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x84BDu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84BEu; return dd3_static_complete(rt,3u);
        }
        case 0x84BEu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x84BFu; return dd3_static_complete(rt,2u);
        }
        case 0x84BFu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84C1u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x84C1u: {
            dd3_static_write8(rt,0x01u,rt->state.cpu.a);
            rt->state.cpu.pc=0x84C3u; return dd3_static_complete(rt,3u);
        }
        case 0x84C3u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84C4u; return dd3_static_complete(rt,4u);
        }
        case 0x84C4u: {
            dd3_static_write8(rt,0x00u,rt->state.cpu.a);
            rt->state.cpu.pc=0x84C6u; return dd3_static_complete(rt,3u);
        }
        case 0x84C6u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84C8u; return dd3_static_complete(rt,2u);
        }
        case 0x84C8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x84C9u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84CBu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x84CBu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84CCu; return dd3_static_complete(rt,3u);
        }
        case 0x84CCu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x84CDu; return dd3_static_complete(rt,2u);
        }
        case 0x84CDu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84CFu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x84CFu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84D0u; return dd3_static_complete(rt,3u);
        }
        case 0x84D0u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x84D1u; return dd3_static_complete(rt,2u);
        }
        case 0x84D1u: {
            dd3_static_push8(rt,(uint8_t)(0x84D3u>>8)); dd3_static_push8(rt,(uint8_t)0x84D3u);
            rt->state.cpu.pc=0x88C0u; return dd3_static_complete(rt,6u);
        }
        case 0x84D4u: {
            uint16_t ea=0x00u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84D6u; return dd3_static_complete(rt,3u);
        }
        case 0x84D6u: {
            dd3_static_write8(rt,(uint16_t)(0x077Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x84D9u; return dd3_static_complete(rt,5u);
        }
        case 0x84D9u: {
            uint16_t ea=0x01u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84DBu; return dd3_static_complete(rt,3u);
        }
        case 0x84DBu: {
            dd3_static_write8(rt,(uint16_t)(0x0784u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x84DEu; return dd3_static_complete(rt,5u);
        }
        case 0x84DEu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84DFu; return dd3_static_complete(rt,4u);
        }
        case 0x84DFu: {
            dd3_static_write8(rt,0x01u,rt->state.cpu.a);
            rt->state.cpu.pc=0x84E1u; return dd3_static_complete(rt,3u);
        }
        case 0x84E1u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x84E2u; return dd3_static_complete(rt,4u);
        }
        case 0x84E2u: {
            dd3_static_write8(rt,0x00u,rt->state.cpu.a);
            rt->state.cpu.pc=0x84E4u; return dd3_static_complete(rt,3u);
        }
        case 0x84E4u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x84E5u; return dd3_static_complete(rt,2u);
        }
        case 0x84E5u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x84E6u: {
            uint16_t ea=(uint16_t)(0x077Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84E9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x077Cu,ea)?1u:0u));
        }
        case 0x84E9u: {
            dd3_static_write8(rt,0x00u,rt->state.cpu.a);
            rt->state.cpu.pc=0x84EBu; return dd3_static_complete(rt,3u);
        }
        case 0x84EBu: {
            uint16_t ea=(uint16_t)(0x0784u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84EEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0784u,ea)?1u:0u));
        }
        case 0x84EEu: {
            dd3_static_write8(rt,0x01u,rt->state.cpu.a);
            rt->state.cpu.pc=0x84F0u; return dd3_static_complete(rt,3u);
        }
        case 0x84F0u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84F2u; return dd3_static_complete(rt,2u);
        }
        case 0x84F2u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x84F3u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84F5u; return dd3_static_complete(rt,2u);
        }
        case 0x84F5u: {
            dd3_static_write8(rt,(uint16_t)(0x0728u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x84F8u; return dd3_static_complete(rt,5u);
        }
        case 0x84F8u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x84FAu; return dd3_static_complete(rt,2u);
        }
        case 0x84FAu: {
            dd3_static_write8(rt,(uint16_t)(0x0730u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x84FDu; return dd3_static_complete(rt,5u);
        }
        case 0x84FDu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x84FFu; return dd3_static_complete(rt,2u);
        }
        case 0x84FFu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8501u,0x8519u)) c++; rt->state.cpu.pc=0x8519u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8501u; return dd3_static_complete(rt,2u);
        }
        case 0x8501u: {
            uint16_t ea=0x0730u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8504u; return dd3_static_complete(rt,4u);
        }
        case 0x8504u: {
            uint16_t ea=0x0731u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8507u; return dd3_static_complete(rt,4u);
        }
        case 0x8507u: {
            uint16_t ea=0x0732u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x850Au; return dd3_static_complete(rt,4u);
        }
        case 0x850Au: {
            uint16_t ea=0x0733u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x850Du; return dd3_static_complete(rt,4u);
        }
        case 0x850Du: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x850Fu,0x8517u)) c++; rt->state.cpu.pc=0x8517u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x850Fu; return dd3_static_complete(rt,2u);
        }
        case 0x850Fu: {
            uint16_t ea=0x07FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8512u; return dd3_static_complete(rt,4u);
        }
        case 0x8512u: {
            uint8_t v=0xFDu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8514u; return dd3_static_complete(rt,2u);
        }
        case 0x8514u: {
            dd3_static_write8(rt,0x07FEu,rt->state.cpu.a);
            rt->state.cpu.pc=0x8517u; return dd3_static_complete(rt,4u);
        }
        case 0x8517u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8518u; return dd3_static_complete(rt,2u);
        }
        case 0x8518u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8519u: {
            uint16_t ea=0x07FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0x851Cu; return dd3_static_complete(rt,4u);
        }
        case 0x851Cu: {
            if (rt->state.cpu.v) { unsigned c=3u; if (dd3_static_page_crossed(0x851Eu,0x854Eu)) c++; rt->state.cpu.pc=0x854Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x851Eu; return dd3_static_complete(rt,2u);
        }
        case 0x851Eu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x851Fu; return dd3_static_complete(rt,2u);
        }
        case 0x851Fu: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8521u; return dd3_static_complete(rt,2u);
        }
        case 0x8521u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x8522u; return dd3_static_complete(rt,2u);
        }
        case 0x8522u: {
            uint16_t ea=(uint16_t)(0x0730u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8525u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0730u,ea)?1u:0u));
        }
        case 0x8525u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8527u,0x854Eu)) c++; rt->state.cpu.pc=0x854Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8527u; return dd3_static_complete(rt,2u);
        }
        case 0x8527u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8528u; return dd3_static_complete(rt,2u);
        }
        case 0x8528u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8529u; return dd3_static_complete(rt,2u);
        }
        case 0x8529u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x852Au; return dd3_static_complete(rt,2u);
        }
        case 0x852Au: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x852Bu; return dd3_static_complete(rt,2u);
        }
        case 0x852Bu: {
            uint16_t ea=(uint16_t)(0x07CEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x852Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CEu,ea)?1u:0u));
        }
        case 0x852Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8530u>>8)); dd3_static_push8(rt,(uint8_t)0x8530u);
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,6u);
        }
        case 0x8531u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8532u; return dd3_static_complete(rt,2u);
        }
        case 0x8532u: {
            uint16_t ea=(uint16_t)(0x07CEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8535u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CEu,ea)?1u:0u));
        }
        case 0x8535u: {
            dd3_static_push8(rt,(uint8_t)(0x8537u>>8)); dd3_static_push8(rt,(uint8_t)0x8537u);
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,6u);
        }
        case 0x8538u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8539u; return dd3_static_complete(rt,2u);
        }
        case 0x8539u: {
            uint16_t ea=(uint16_t)(0x07CEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x853Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CEu,ea)?1u:0u));
        }
        case 0x853Cu: {
            dd3_static_push8(rt,(uint8_t)(0x853Eu>>8)); dd3_static_push8(rt,(uint8_t)0x853Eu);
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,6u);
        }
        case 0x853Fu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8540u; return dd3_static_complete(rt,2u);
        }
        case 0x8540u: {
            uint16_t ea=(uint16_t)(0x07CEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8543u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CEu,ea)?1u:0u));
        }
        case 0x8543u: {
            dd3_static_push8(rt,(uint8_t)(0x8545u>>8)); dd3_static_push8(rt,(uint8_t)0x8545u);
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,6u);
        }
        case 0x8546u: {
            uint16_t ea=0x0738u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8549u; return dd3_static_complete(rt,4u);
        }
        case 0x8549u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x854Bu; return dd3_static_complete(rt,2u);
        }
        case 0x854Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0728u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x854Eu; return dd3_static_complete(rt,5u);
        }
        case 0x854Eu: {
            uint16_t ea=0x0738u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8551u; return dd3_static_complete(rt,4u);
        }
        case 0x8551u: {
            dd3_static_write8(rt,(uint16_t)(0x0720u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8554u; return dd3_static_complete(rt,5u);
        }
        case 0x8554u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8555u; return dd3_static_complete(rt,2u);
        }
        case 0x8555u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8556u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8558u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8558u: {
            dd3_static_write8(rt,(uint16_t)(0x078Cu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x855Bu; return dd3_static_complete(rt,5u);
        }
        case 0x855Bu: {
            uint16_t ea=(uint16_t)(0x0730u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x855Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0730u,ea)?1u:0u));
        }
        case 0x855Eu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8560u; return dd3_static_complete(rt,2u);
        }
        case 0x8560u: {
            dd3_static_write8(rt,(uint16_t)(0x0730u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8563u; return dd3_static_complete(rt,5u);
        }
        case 0x8563u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8564u; return dd3_static_complete(rt,2u);
        }
        case 0x8564u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8565u; return dd3_static_complete(rt,2u);
        }
        case 0x8565u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8566u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8568u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8568u: {
            dd3_static_write8(rt,(uint16_t)(0x07C5u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x856Bu; return dd3_static_complete(rt,5u);
        }
        case 0x856Bu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x856Cu; return dd3_static_complete(rt,2u);
        }
        case 0x856Cu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x856Eu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x856Eu: {
            dd3_static_write8(rt,(uint16_t)(0x07C2u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8571u; return dd3_static_complete(rt,5u);
        }
        case 0x8571u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8572u; return dd3_static_complete(rt,2u);
        }
        case 0x8572u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8574u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8574u: {
            dd3_static_write8(rt,(uint16_t)(0x07CBu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8577u; return dd3_static_complete(rt,5u);
        }
        case 0x8577u: {
            uint16_t ea=(uint16_t)(0x0730u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x857Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0730u,ea)?1u:0u));
        }
        case 0x857Au: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x857Cu; return dd3_static_complete(rt,2u);
        }
        case 0x857Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0730u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x857Fu; return dd3_static_complete(rt,5u);
        }
        case 0x857Fu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8580u; return dd3_static_complete(rt,2u);
        }
        case 0x8580u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8581u; return dd3_static_complete(rt,2u);
        }
        case 0x8581u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8596u: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8599u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x8599u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x859Bu; return dd3_static_complete(rt,2u);
        }
        case 0x859Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x859Du,0x85A0u)) c++; rt->state.cpu.pc=0x85A0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x859Du; return dd3_static_complete(rt,2u);
        }
        case 0x859Du: {
            dd3_static_push8(rt,(uint8_t)(0x859Fu>>8)); dd3_static_push8(rt,(uint8_t)0x859Fu);
            rt->state.cpu.pc=0x86C0u; return dd3_static_complete(rt,6u);
        }
        case 0x85A0u: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85A3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x85A3u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85A5u; return dd3_static_complete(rt,2u);
        }
        case 0x85A5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x85A7u,0x85AAu)) c++; rt->state.cpu.pc=0x85AAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85A7u; return dd3_static_complete(rt,2u);
        }
        case 0x85A7u: {
            dd3_static_push8(rt,(uint8_t)(0x85A9u>>8)); dd3_static_push8(rt,(uint8_t)0x85A9u);
            rt->state.cpu.pc=0x8739u; return dd3_static_complete(rt,6u);
        }
        case 0x85AAu: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85ADu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x85ADu: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85AFu; return dd3_static_complete(rt,2u);
        }
        case 0x85AFu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x85B1u,0x85B4u)) c++; rt->state.cpu.pc=0x85B4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85B1u; return dd3_static_complete(rt,2u);
        }
        case 0x85B1u: {
            dd3_static_push8(rt,(uint8_t)(0x85B3u>>8)); dd3_static_push8(rt,(uint8_t)0x85B3u);
            rt->state.cpu.pc=0x8779u; return dd3_static_complete(rt,6u);
        }
        case 0x85B4u: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85B7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x85B7u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85B9u; return dd3_static_complete(rt,2u);
        }
        case 0x85B9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x85BBu,0x85BEu)) c++; rt->state.cpu.pc=0x85BEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85BBu; return dd3_static_complete(rt,2u);
        }
        case 0x85BBu: {
            dd3_static_push8(rt,(uint8_t)(0x85BDu>>8)); dd3_static_push8(rt,(uint8_t)0x85BDu);
            rt->state.cpu.pc=0x874Au; return dd3_static_complete(rt,6u);
        }
        case 0x85BEu: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85C1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x85C1u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85C3u; return dd3_static_complete(rt,2u);
        }
        case 0x85C3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x85C5u,0x85C8u)) c++; rt->state.cpu.pc=0x85C8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85C5u; return dd3_static_complete(rt,2u);
        }
        case 0x85C5u: {
            dd3_static_push8(rt,(uint8_t)(0x85C7u>>8)); dd3_static_push8(rt,(uint8_t)0x85C7u);
            rt->state.cpu.pc=0x86B5u; return dd3_static_complete(rt,6u);
        }
        case 0x85C8u: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85CBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x85CBu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85CDu; return dd3_static_complete(rt,2u);
        }
        case 0x85CDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x85CFu,0x85D2u)) c++; rt->state.cpu.pc=0x85D2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85CFu; return dd3_static_complete(rt,2u);
        }
        case 0x85CFu: {
            dd3_static_push8(rt,(uint8_t)(0x85D1u>>8)); dd3_static_push8(rt,(uint8_t)0x85D1u);
            rt->state.cpu.pc=0x8702u; return dd3_static_complete(rt,6u);
        }
        case 0x85D2u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85D4u; return dd3_static_complete(rt,2u);
        }
        case 0x85D4u: {
            dd3_static_write8(rt,(uint16_t)(0x0728u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x85D7u; return dd3_static_complete(rt,5u);
        }
        case 0x85D7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x85D8u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x85DAu; return dd3_static_complete(rt,2u);
        }
        case 0x85DAu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x85DCu,0x85E2u)) c++; rt->state.cpu.pc=0x85E2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85DCu; return dd3_static_complete(rt,2u);
        }
        case 0x85DCu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x85DEu; return dd3_static_complete(rt,2u);
        }
        case 0x85DEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x85E0u,0x85E1u)) c++; rt->state.cpu.pc=0x85E1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85E0u; return dd3_static_complete(rt,2u);
        }
        case 0x85E0u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x85E1u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x85E2u; return dd3_static_complete(rt,2u);
        }
        case 0x85E2u: {
            uint16_t ea=(uint16_t)(0x07B9u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85E5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07B9u,ea)?1u:0u));
        }
        case 0x85E5u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x85E7u,0x85E8u)) c++; rt->state.cpu.pc=0x85E8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85E7u; return dd3_static_complete(rt,2u);
        }
        case 0x85E7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x85E8u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x85E9u; return dd3_static_complete(rt,2u);
        }
        case 0x85E9u: {
            uint16_t ea=(uint16_t)(0x07B3u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85ECu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07B3u,ea)?1u:0u));
        }
        case 0x85ECu: {
            dd3_static_write8(rt,0x00u,rt->state.cpu.a);
            rt->state.cpu.pc=0x85EEu; return dd3_static_complete(rt,3u);
        }
        case 0x85EEu: {
            uint16_t ea=(uint16_t)(0x07B6u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x85F1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07B6u,ea)?1u:0u));
        }
        case 0x85F1u: {
            dd3_static_write8(rt,0x01u,rt->state.cpu.a);
            rt->state.cpu.pc=0x85F3u; return dd3_static_complete(rt,3u);
        }
        case 0x85F3u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x85F4u; return dd3_static_complete(rt,2u);
        }
        case 0x85F4u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x85F6u,0x862Eu)) c++; rt->state.cpu.pc=0x862Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85F6u; return dd3_static_complete(rt,2u);
        }
        case 0x85F6u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x85F8u; return dd3_static_complete(rt,2u);
        }
        case 0x85F8u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x85FAu,0x8610u)) c++; rt->state.cpu.pc=0x8610u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85FAu; return dd3_static_complete(rt,2u);
        }
        case 0x85FAu: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x85FCu; return dd3_static_complete(rt,2u);
        }
        case 0x85FCu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x85FEu,0x8624u)) c++; rt->state.cpu.pc=0x8624u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x85FEu; return dd3_static_complete(rt,2u);
        }
        case 0x85FEu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8600u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8600u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8601u; return dd3_static_complete(rt,2u);
        }
        case 0x8601u: {
            uint16_t ea=(uint16_t)(0x07B0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8604u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07B0u,ea)?1u:0u));
        }
        case 0x8604u: {
            dd3_static_write8(rt,(uint16_t)(0x07B0u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8607u; return dd3_static_complete(rt,5u);
        }
        case 0x8607u: {
            uint16_t ea=(uint16_t)(0x07BCu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x860Au; return dd3_static_complete(rt,7u);
        }
        case 0x860Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x860Cu,0x8672u)) c++; rt->state.cpu.pc=0x8672u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x860Cu; return dd3_static_complete(rt,2u);
        }
        case 0x860Cu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x860Du; return dd3_static_complete(rt,2u);
        }
        case 0x860Du: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x860Eu; return dd3_static_complete(rt,2u);
        }
        case 0x860Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8610u,0x8654u)) c++; rt->state.cpu.pc=0x8654u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8610u; return dd3_static_complete(rt,2u);
        }
        case 0x8610u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8611u; return dd3_static_complete(rt,2u);
        }
        case 0x8611u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8613u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8613u: {
            uint16_t ea=(uint16_t)(0x07B0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8616u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07B0u,ea)?1u:0u));
        }
        case 0x8616u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8618u,0x861Bu)) c++; rt->state.cpu.pc=0x861Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8618u; return dd3_static_complete(rt,2u);
        }
        case 0x8618u: {
            dd3_static_write8(rt,(uint16_t)(0x07B0u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x861Bu; return dd3_static_complete(rt,5u);
        }
        case 0x861Bu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x861Cu; return dd3_static_complete(rt,2u);
        }
        case 0x861Cu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x861Du; return dd3_static_complete(rt,2u);
        }
        case 0x861Du: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x861Fu; return dd3_static_complete(rt,2u);
        }
        case 0x861Fu: {
            dd3_static_write8(rt,(uint16_t)(0x07B9u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8622u; return dd3_static_complete(rt,5u);
        }
        case 0x8622u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8624u,0x8672u)) c++; rt->state.cpu.pc=0x8672u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8624u; return dd3_static_complete(rt,2u);
        }
        case 0x8624u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8625u; return dd3_static_complete(rt,2u);
        }
        case 0x8625u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8627u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8627u: {
            dd3_static_write8(rt,(uint16_t)(0x07B0u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x862Au; return dd3_static_complete(rt,5u);
        }
        case 0x862Au: {
            uint8_t v=0x03u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x862Cu; return dd3_static_complete(rt,2u);
        }
        case 0x862Cu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x862Eu,0x8654u)) c++; rt->state.cpu.pc=0x8654u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x862Eu; return dd3_static_complete(rt,2u);
        }
        case 0x862Eu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8630u; return dd3_static_complete(rt,2u);
        }
        case 0x8630u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8631u; return dd3_static_complete(rt,2u);
        }
        case 0x8631u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8633u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8633u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8635u,0x863Eu)) c++; rt->state.cpu.pc=0x863Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8635u; return dd3_static_complete(rt,2u);
        }
        case 0x8635u: {
            uint16_t ea=(uint16_t)(0x07B0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8638u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07B0u,ea)?1u:0u));
        }
        case 0x8638u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x863Au,0x864Fu)) c++; rt->state.cpu.pc=0x864Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x863Au; return dd3_static_complete(rt,2u);
        }
        case 0x863Au: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x863Cu; return dd3_static_complete(rt,2u);
        }
        case 0x863Cu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x863Eu,0x8645u)) c++; rt->state.cpu.pc=0x8645u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x863Eu; return dd3_static_complete(rt,2u);
        }
        case 0x863Eu: {
            uint16_t ea=(uint16_t)(0x07B0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8641u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07B0u,ea)?1u:0u));
        }
        case 0x8641u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8643u,0x864Fu)) c++; rt->state.cpu.pc=0x864Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8643u; return dd3_static_complete(rt,2u);
        }
        case 0x8643u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8645u; return dd3_static_complete(rt,2u);
        }
        case 0x8645u: {
            dd3_static_write8(rt,(uint16_t)(0x07B0u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8648u; return dd3_static_complete(rt,5u);
        }
        case 0x8648u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x864Au; return dd3_static_complete(rt,2u);
        }
        case 0x864Au: {
            dd3_static_write8(rt,(uint16_t)(0x07B9u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x864Du; return dd3_static_complete(rt,5u);
        }
        case 0x864Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x864Fu,0x8672u)) c++; rt->state.cpu.pc=0x8672u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x864Fu; return dd3_static_complete(rt,2u);
        }
        case 0x864Fu: {
            dd3_static_write8(rt,(uint16_t)(0x07B0u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8652u; return dd3_static_complete(rt,5u);
        }
        case 0x8652u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8654u,0x8672u)) c++; rt->state.cpu.pc=0x8672u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8654u; return dd3_static_complete(rt,2u);
        }
        case 0x8654u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8655u; return dd3_static_complete(rt,2u);
        }
        case 0x8655u: {
            dd3_static_write8(rt,(uint16_t)(0x07B9u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8658u; return dd3_static_complete(rt,5u);
        }
        case 0x8658u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8659u; return dd3_static_complete(rt,2u);
        }
        case 0x8659u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x865Bu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x865Bu: {
            dd3_static_write8(rt,(uint16_t)(0x07BCu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x865Eu; return dd3_static_complete(rt,5u);
        }
        case 0x865Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8660u,0x8672u)) c++; rt->state.cpu.pc=0x8672u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8660u; return dd3_static_complete(rt,2u);
        }
        case 0x8660u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8661u; return dd3_static_complete(rt,2u);
        }
        case 0x8661u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x00u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8663u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x00u),ea)?1u:0u));
        }
        case 0x8663u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8665u,0x866Au)) c++; rt->state.cpu.pc=0x866Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8665u; return dd3_static_complete(rt,2u);
        }
        case 0x8665u: {
            dd3_static_write8(rt,(uint16_t)(0x07B9u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8668u; return dd3_static_complete(rt,5u);
        }
        case 0x8668u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x866Au,0x8672u)) c++; rt->state.cpu.pc=0x8672u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x866Au; return dd3_static_complete(rt,2u);
        }
        case 0x866Au: {
            uint16_t ea=(uint16_t)(0x07B9u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x866Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07B9u,ea)?1u:0u));
        }
        case 0x866Du: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x866Fu; return dd3_static_complete(rt,2u);
        }
        case 0x866Fu: {
            dd3_static_write8(rt,(uint16_t)(0x07B9u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8672u; return dd3_static_complete(rt,5u);
        }
        case 0x8672u: {
            dd3_static_write8(rt,0x00u,rt->state.cpu.x);
            rt->state.cpu.pc=0x8674u; return dd3_static_complete(rt,3u);
        }
        case 0x8674u: {
            uint16_t ea=0x0738u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8677u; return dd3_static_complete(rt,4u);
        }
        case 0x8677u: {
            uint16_t ea=(uint16_t)(0x0730u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x867Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0730u,ea)?1u:0u));
        }
        case 0x867Au: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x867Cu; return dd3_static_complete(rt,2u);
        }
        case 0x867Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x867Eu,0x8681u)) c++; rt->state.cpu.pc=0x8681u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x867Eu; return dd3_static_complete(rt,2u);
        }
        case 0x867Eu: {
            uint16_t ea=(uint16_t)(0x07A8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8681u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07A8u,ea)?1u:0u));
        }
        case 0x8681u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8682u; return dd3_static_complete(rt,2u);
        }
        case 0x8682u: {
            uint16_t ea=(uint16_t)(0x0764u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8685u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0764u,ea)?1u:0u));
        }
        case 0x8685u: {
            dd3_static_write8(rt,0x03u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8687u; return dd3_static_complete(rt,3u);
        }
        case 0x8687u: {
            uint16_t ea=0x00u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8689u; return dd3_static_complete(rt,3u);
        }
        case 0x8689u: {
            uint16_t ea=(uint16_t)(0x07B0u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x868Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07B0u,ea)?1u:0u));
        }
        case 0x868Cu: {
            dd3_static_write8(rt,0x02u,rt->state.cpu.a);
            rt->state.cpu.pc=0x868Eu; return dd3_static_complete(rt,3u);
        }
        case 0x868Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8690u>>8)); dd3_static_push8(rt,(uint8_t)0x8690u);
            rt->state.cpu.pc=0x88CDu; return dd3_static_complete(rt,6u);
        }
        case 0x8691u: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8693u; return dd3_static_complete(rt,5u);
        }
        case 0x8693u: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8695u; return dd3_static_complete(rt,5u);
        }
        case 0x8695u: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8697u; return dd3_static_complete(rt,5u);
        }
        case 0x8697u: {
            uint16_t ea=0x0738u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x869Au; return dd3_static_complete(rt,4u);
        }
        case 0x869Au: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x869Bu; return dd3_static_complete(rt,2u);
        }
        case 0x869Bu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x869Cu; return dd3_static_complete(rt,2u);
        }
        case 0x869Cu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x869Du; return dd3_static_complete(rt,2u);
        }
        case 0x869Du: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x869Eu; return dd3_static_complete(rt,2u);
        }
        case 0x869Eu: {
            uint16_t ea=(uint16_t)(0x07CEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86A1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CEu,ea)?1u:0u));
        }
        case 0x86A1u: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86A3u; return dd3_static_complete(rt,2u);
        }
        case 0x86A3u: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86A5u; return dd3_static_complete(rt,3u);
        }
        case 0x86A5u: {
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,3u);
        }
        case 0x86A8u: {
            dd3_static_write8(rt,0x02u,rt->state.cpu.x);
            rt->state.cpu.pc=0x86AAu; return dd3_static_complete(rt,3u);
        }
        case 0x86AAu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x86ACu; return dd3_static_complete(rt,2u);
        }
        case 0x86ACu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x86AEu,0x86AFu)) c++; rt->state.cpu.pc=0x86AFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86AEu; return dd3_static_complete(rt,2u);
        }
        case 0x86AEu: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x86AFu; return dd3_static_complete(rt,2u);
        }
        case 0x86AFu: {
            dd3_static_write8(rt,(uint16_t)(0x07B9u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x86B2u; return dd3_static_complete(rt,5u);
        }
        case 0x86B2u: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86B4u; return dd3_static_complete(rt,3u);
        }
        case 0x86B4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x86B5u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86B6u; return dd3_static_complete(rt,2u);
        }
        case 0x86B6u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86B7u; return dd3_static_complete(rt,2u);
        }
        case 0x86B7u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86B8u; return dd3_static_complete(rt,2u);
        }
        case 0x86B8u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86B9u; return dd3_static_complete(rt,2u);
        }
        case 0x86B9u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86BAu; return dd3_static_complete(rt,2u);
        }
        case 0x86BAu: {
            uint16_t ea=(uint16_t)(0x07CEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86BDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CEu,ea)?1u:0u));
        }
        case 0x86BDu: {
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,3u);
        }
        case 0x86C0u: {
            uint16_t ea=(uint16_t)(0x0730u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86C3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0730u,ea)?1u:0u));
        }
        case 0x86C3u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86C5u; return dd3_static_complete(rt,2u);
        }
        case 0x86C5u: {
            dd3_static_write8(rt,(uint16_t)(0x0730u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x86C8u; return dd3_static_complete(rt,5u);
        }
        case 0x86C8u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86C9u; return dd3_static_complete(rt,2u);
        }
        case 0x86C9u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86CBu; return dd3_static_complete(rt,2u);
        }
        case 0x86CBu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x86CDu; return dd3_static_complete(rt,2u);
        }
        case 0x86CDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x86CFu,0x86F9u)) c++; rt->state.cpu.pc=0x86F9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86CFu; return dd3_static_complete(rt,2u);
        }
        case 0x86CFu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x86D1u; return dd3_static_complete(rt,2u);
        }
        case 0x86D1u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x86D3u,0x86D8u)) c++; rt->state.cpu.pc=0x86D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x86D3u; return dd3_static_complete(rt,2u);
        }
        case 0x86D3u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86D5u; return dd3_static_complete(rt,2u);
        }
        case 0x86D5u: {
            rt->state.cpu.pc=0x86A8u; return dd3_static_complete(rt,3u);
        }
        case 0x86D8u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86D9u; return dd3_static_complete(rt,2u);
        }
        case 0x86D9u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86DAu; return dd3_static_complete(rt,2u);
        }
        case 0x86DAu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86DBu; return dd3_static_complete(rt,2u);
        }
        case 0x86DBu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86DCu; return dd3_static_complete(rt,2u);
        }
        case 0x86DCu: {
            uint16_t ea=(uint16_t)(0x07CEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86DFu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CEu,ea)?1u:0u));
        }
        case 0x86DFu: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86E1u; return dd3_static_complete(rt,2u);
        }
        case 0x86E1u: {
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,3u);
        }
        case 0x86EDu: {
            dd3_static_push8(rt,(uint8_t)(0x86EFu>>8)); dd3_static_push8(rt,(uint8_t)0x86EFu);
            rt->state.cpu.pc=0x8726u; return dd3_static_complete(rt,6u);
        }
        case 0x86F0u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86F1u; return dd3_static_complete(rt,2u);
        }
        case 0x86F1u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86F2u; return dd3_static_complete(rt,2u);
        }
        case 0x86F2u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86F3u; return dd3_static_complete(rt,2u);
        }
        case 0x86F3u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86F4u; return dd3_static_complete(rt,2u);
        }
        case 0x86F4u: {
            uint8_t v=0x81u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86F6u; return dd3_static_complete(rt,2u);
        }
        case 0x86F6u: {
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,3u);
        }
        case 0x86F9u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86FAu; return dd3_static_complete(rt,2u);
        }
        case 0x86FAu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86FBu; return dd3_static_complete(rt,2u);
        }
        case 0x86FBu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x86FCu; return dd3_static_complete(rt,2u);
        }
        case 0x86FCu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x86FDu; return dd3_static_complete(rt,2u);
        }
        case 0x86FDu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x86FFu; return dd3_static_complete(rt,2u);
        }
        case 0x86FFu: {
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,3u);
        }
        case 0x8702u: {
            uint16_t ea=(uint16_t)(0x0730u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8705u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0730u,ea)?1u:0u));
        }
        case 0x8705u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8707u,0x8708u)) c++; rt->state.cpu.pc=0x8708u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8707u; return dd3_static_complete(rt,2u);
        }
        case 0x8707u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8708u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x870Au; return dd3_static_complete(rt,2u);
        }
        case 0x870Au: {
            dd3_static_write8(rt,(uint16_t)(0x0730u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x870Du; return dd3_static_complete(rt,5u);
        }
        case 0x870Du: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x870Eu; return dd3_static_complete(rt,2u);
        }
        case 0x870Eu: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8710u; return dd3_static_complete(rt,2u);
        }
        case 0x8710u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x8712u; return dd3_static_complete(rt,2u);
        }
        case 0x8712u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8714u,0x86EDu)) c++; rt->state.cpu.pc=0x86EDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8714u; return dd3_static_complete(rt,2u);
        }
        case 0x8714u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8716u; return dd3_static_complete(rt,2u);
        }
        case 0x8716u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8718u,0x871Eu)) c++; rt->state.cpu.pc=0x871Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8718u; return dd3_static_complete(rt,2u);
        }
        case 0x8718u: {
            dd3_static_push8(rt,(uint8_t)(0x871Au>>8)); dd3_static_push8(rt,(uint8_t)0x871Au);
            rt->state.cpu.pc=0x8726u; return dd3_static_complete(rt,6u);
        }
        case 0x871Bu: {
            rt->state.cpu.pc=0x875Bu; return dd3_static_complete(rt,3u);
        }
        case 0x871Eu: {
            dd3_static_push8(rt,(uint8_t)(0x8720u>>8)); dd3_static_push8(rt,(uint8_t)0x8720u);
            rt->state.cpu.pc=0x8726u; return dd3_static_complete(rt,6u);
        }
        case 0x8721u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8723u; return dd3_static_complete(rt,2u);
        }
        case 0x8723u: {
            rt->state.cpu.pc=0x86A8u; return dd3_static_complete(rt,3u);
        }
        case 0x8726u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8727u; return dd3_static_complete(rt,2u);
        }
        case 0x8727u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8728u; return dd3_static_complete(rt,2u);
        }
        case 0x8728u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8729u; return dd3_static_complete(rt,2u);
        }
        case 0x8729u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x872Au; return dd3_static_complete(rt,2u);
        }
        case 0x872Au: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x872Bu; return dd3_static_complete(rt,2u);
        }
        case 0x872Bu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x872Cu; return dd3_static_complete(rt,2u);
        }
        case 0x872Cu: {
            uint16_t ea=(uint16_t)(0x07CEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x872Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CEu,ea)?1u:0u));
        }
        case 0x872Fu: {
            dd3_static_push8(rt,(uint8_t)(0x8731u>>8)); dd3_static_push8(rt,(uint8_t)0x8731u);
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,6u);
        }
        case 0x8732u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8733u; return dd3_static_complete(rt,2u);
        }
        case 0x8733u: {
            uint16_t ea=(uint16_t)(0x07CEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8736u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CEu,ea)?1u:0u));
        }
        case 0x8736u: {
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,3u);
        }
        case 0x8739u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x873Au; return dd3_static_complete(rt,2u);
        }
        case 0x873Au: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x873Bu; return dd3_static_complete(rt,2u);
        }
        case 0x873Bu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x873Cu; return dd3_static_complete(rt,2u);
        }
        case 0x873Cu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x873Du; return dd3_static_complete(rt,2u);
        }
        case 0x873Du: {
            uint16_t ea=(uint16_t)(0x07CEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8740u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CEu,ea)?1u:0u));
        }
        case 0x8740u: {
            dd3_static_push8(rt,(uint8_t)(0x8742u>>8)); dd3_static_push8(rt,(uint8_t)0x8742u);
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,6u);
        }
        case 0x8743u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8744u; return dd3_static_complete(rt,2u);
        }
        case 0x8744u: {
            uint16_t ea=(uint16_t)(0x07CEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8747u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CEu,ea)?1u:0u));
        }
        case 0x8747u: {
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,3u);
        }
        case 0x874Au: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x874Bu; return dd3_static_complete(rt,2u);
        }
        case 0x874Bu: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x874Du; return dd3_static_complete(rt,2u);
        }
        case 0x874Du: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x874Fu; return dd3_static_complete(rt,2u);
        }
        case 0x874Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8751u,0x875Au)) c++; rt->state.cpu.pc=0x875Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8751u; return dd3_static_complete(rt,2u);
        }
        case 0x8751u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8753u; return dd3_static_complete(rt,2u);
        }
        case 0x8753u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8755u,0x875Au)) c++; rt->state.cpu.pc=0x875Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8755u; return dd3_static_complete(rt,2u);
        }
        case 0x8755u: {
            uint16_t ea=(uint16_t)(0x0730u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8758u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0730u,ea)?1u:0u));
        }
        case 0x8758u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x875Au,0x875Bu)) c++; rt->state.cpu.pc=0x875Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x875Au; return dd3_static_complete(rt,2u);
        }
        case 0x875Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x875Bu: {
            uint16_t ea=(uint16_t)(0x0764u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x875Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0764u,ea)?1u:0u));
        }
        case 0x875Eu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x875Fu; return dd3_static_complete(rt,2u);
        }
        case 0x875Fu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8760u; return dd3_static_complete(rt,2u);
        }
        case 0x8760u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8761u; return dd3_static_complete(rt,2u);
        }
        case 0x8761u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8763u; return dd3_static_complete(rt,2u);
        }
        case 0x8763u: {
            uint8_t v=0x30u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8765u; return dd3_static_complete(rt,2u);
        }
        case 0x8765u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8766u; return dd3_static_complete(rt,3u);
        }
        case 0x8766u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8767u; return dd3_static_complete(rt,2u);
        }
        case 0x8767u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8768u; return dd3_static_complete(rt,2u);
        }
        case 0x8768u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8769u; return dd3_static_complete(rt,2u);
        }
        case 0x8769u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x876Au; return dd3_static_complete(rt,2u);
        }
        case 0x876Au: {
            uint16_t ea=(uint16_t)(0x07CEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x876Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CEu,ea)?1u:0u));
        }
        case 0x876Du: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x876Fu; return dd3_static_complete(rt,2u);
        }
        case 0x876Fu: {
            dd3_static_write8(rt,(uint16_t)(0x07CEu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8772u; return dd3_static_complete(rt,5u);
        }
        case 0x8772u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8773u; return dd3_static_complete(rt,4u);
        }
        case 0x8773u: {
            uint16_t ea=(uint16_t)(0x07CEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8776u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CEu,ea)?1u:0u));
        }
        case 0x8776u: {
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,3u);
        }
        case 0x8779u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x877Au; return dd3_static_complete(rt,2u);
        }
        case 0x877Au: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x877Cu; return dd3_static_complete(rt,2u);
        }
        case 0x877Cu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x877Eu; return dd3_static_complete(rt,2u);
        }
        case 0x877Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8780u,0x87B3u)) c++; rt->state.cpu.pc=0x87B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8780u; return dd3_static_complete(rt,2u);
        }
        case 0x8780u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8782u; return dd3_static_complete(rt,2u);
        }
        case 0x8782u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8784u,0x8792u)) c++; rt->state.cpu.pc=0x8792u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8784u; return dd3_static_complete(rt,2u);
        }
        case 0x8784u: {
            uint16_t ea=(uint16_t)(0x0754u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8787u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0754u,ea)?1u:0u));
        }
        case 0x8787u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8788u; return dd3_static_complete(rt,3u);
        }
        case 0x8788u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8789u; return dd3_static_complete(rt,2u);
        }
        case 0x8789u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x878Au; return dd3_static_complete(rt,2u);
        }
        case 0x878Au: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x878Bu; return dd3_static_complete(rt,2u);
        }
        case 0x878Bu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x878Cu; return dd3_static_complete(rt,2u);
        }
        case 0x878Cu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x878Du; return dd3_static_complete(rt,2u);
        }
        case 0x878Du: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x878Eu; return dd3_static_complete(rt,2u);
        }
        case 0x878Eu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x878Fu; return dd3_static_complete(rt,4u);
        }
        case 0x878Fu: {
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,3u);
        }
        case 0x8792u: {
            uint16_t ea=0x07EEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8795u; return dd3_static_complete(rt,4u);
        }
        case 0x8795u: {
            dd3_static_write8(rt,0x02u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8797u; return dd3_static_complete(rt,3u);
        }
        case 0x8797u: {
            uint16_t ea=0x07EFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x879Au; return dd3_static_complete(rt,4u);
        }
        case 0x879Au: {
            dd3_static_write8(rt,0x03u,rt->state.cpu.a);
            rt->state.cpu.pc=0x879Cu; return dd3_static_complete(rt,3u);
        }
        case 0x879Cu: {
            uint16_t ea=(uint16_t)(0x0754u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x879Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0754u,ea)?1u:0u));
        }
        case 0x879Fu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87A0u; return dd3_static_complete(rt,2u);
        }
        case 0x87A0u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87A1u; return dd3_static_complete(rt,2u);
        }
        case 0x87A1u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x87A2u; return dd3_static_complete(rt,2u);
        }
        case 0x87A2u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x02u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87A4u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x02u),ea)?1u:0u));
        }
        case 0x87A4u: {
            dd3_static_write8(rt,0x07B5u,rt->state.cpu.a);
            rt->state.cpu.pc=0x87A7u; return dd3_static_complete(rt,4u);
        }
        case 0x87A7u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x87A8u; return dd3_static_complete(rt,2u);
        }
        case 0x87A8u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x02u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87AAu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x02u),ea)?1u:0u));
        }
        case 0x87AAu: {
            dd3_static_write8(rt,0x07B8u,rt->state.cpu.a);
            rt->state.cpu.pc=0x87ADu; return dd3_static_complete(rt,4u);
        }
        case 0x87ADu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x87AEu; return dd3_static_complete(rt,2u);
        }
        case 0x87AEu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x02u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87B0u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x02u),ea)?1u:0u));
        }
        case 0x87B0u: {
            rt->state.cpu.pc=0x8787u; return dd3_static_complete(rt,3u);
        }
        case 0x87B3u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x87B5u; return dd3_static_complete(rt,2u);
        }
        case 0x87B5u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x87B7u,0x87D8u)) c++; rt->state.cpu.pc=0x87D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87B7u; return dd3_static_complete(rt,2u);
        }
        case 0x87B7u: {
            uint16_t ea=(uint16_t)(0x07BFu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87BAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07BFu,ea)?1u:0u));
        }
        case 0x87BAu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x87BCu,0x87CAu)) c++; rt->state.cpu.pc=0x87CAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87BCu; return dd3_static_complete(rt,2u);
        }
        case 0x87BCu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x87BDu; return dd3_static_complete(rt,2u);
        }
        case 0x87BDu: {
            uint16_t ea=(uint16_t)(0x075Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x87C0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x075Cu,ea)?1u:0u));
        }
        case 0x87C0u: {
            dd3_static_write8(rt,0x02u,rt->state.cpu.a);
            rt->state.cpu.pc=0x87C2u; return dd3_static_complete(rt,3u);
        }
        case 0x87C2u: {
            uint16_t ea=(uint16_t)(0x0754u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87C5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0754u,ea)?1u:0u));
        }
        case 0x87C5u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x87C7u; return dd3_static_complete(rt,2u);
        }
        case 0x87C7u: {
            rt->state.cpu.pc=0x87E0u; return dd3_static_complete(rt,3u);
        }
        case 0x87CAu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x87CBu; return dd3_static_complete(rt,2u);
        }
        case 0x87CBu: {
            uint16_t ea=(uint16_t)(0x075Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x87CEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x075Cu,ea)?1u:0u));
        }
        case 0x87CEu: {
            dd3_static_write8(rt,0x02u,rt->state.cpu.a);
            rt->state.cpu.pc=0x87D0u; return dd3_static_complete(rt,3u);
        }
        case 0x87D0u: {
            uint16_t ea=(uint16_t)(0x0754u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87D3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0754u,ea)?1u:0u));
        }
        case 0x87D3u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x87D5u; return dd3_static_complete(rt,2u);
        }
        case 0x87D5u: {
            rt->state.cpu.pc=0x87E0u; return dd3_static_complete(rt,3u);
        }
        case 0x87D8u: {
            uint16_t ea=(uint16_t)(0x075Cu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87DBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x075Cu,ea)?1u:0u));
        }
        case 0x87DBu: {
            dd3_static_write8(rt,0x02u,rt->state.cpu.a);
            rt->state.cpu.pc=0x87DDu; return dd3_static_complete(rt,3u);
        }
        case 0x87DDu: {
            uint16_t ea=(uint16_t)(0x0754u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87E0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0754u,ea)?1u:0u));
        }
        case 0x87E0u: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x87E2u; return dd3_static_complete(rt,2u);
        }
        case 0x87E2u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x87E3u; return dd3_static_complete(rt,2u);
        }
        case 0x87E3u: {
            uint16_t ea=(uint16_t)(0x88E8u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87E6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x88E8u,ea)?1u:0u));
        }
        case 0x87E6u: {
            dd3_static_write8(rt,0x00u,rt->state.cpu.a);
            rt->state.cpu.pc=0x87E8u; return dd3_static_complete(rt,3u);
        }
        case 0x87E8u: {
            uint16_t ea=(uint16_t)(0x8929u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87EBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x8929u,ea)?1u:0u));
        }
        case 0x87EBu: {
            dd3_static_write8(rt,0x01u,rt->state.cpu.a);
            rt->state.cpu.pc=0x87EDu; return dd3_static_complete(rt,3u);
        }
        case 0x87EDu: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87EFu; return dd3_static_complete(rt,3u);
        }
        case 0x87EFu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x87F1u,0x8809u)) c++; rt->state.cpu.pc=0x8809u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x87F1u; return dd3_static_complete(rt,2u);
        }
        case 0x87F1u: {
            uint16_t ea=0x00u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87F3u; return dd3_static_complete(rt,3u);
        }
        case 0x87F3u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x87F4u; return dd3_static_complete(rt,2u);
        }
        case 0x87F4u: {
            uint16_t ea=(uint16_t)(0x88E9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x87F7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x88E9u,ea)?1u:0u));
        }
        case 0x87F7u: {
            dd3_static_write8(rt,0x03u,rt->state.cpu.a);
            rt->state.cpu.pc=0x87F9u; return dd3_static_complete(rt,3u);
        }
        case 0x87F9u: {
            dd3_static_push8(rt,(uint8_t)(0x87FBu>>8)); dd3_static_push8(rt,(uint8_t)0x87FBu);
            rt->state.cpu.pc=0x88CDu; return dd3_static_complete(rt,6u);
        }
        case 0x87FCu: {
            uint16_t ea=0x00u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x87FEu; return dd3_static_complete(rt,3u);
        }
        case 0x87FEu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x87FFu; return dd3_static_complete(rt,2u);
        }
        case 0x87FFu: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8801u; return dd3_static_complete(rt,3u);
        }
        case 0x8801u: {
            dd3_static_write8(rt,0x00u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8803u; return dd3_static_complete(rt,3u);
        }
        case 0x8803u: {
            uint16_t ea=0x01u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8805u; return dd3_static_complete(rt,3u);
        }
        case 0x8805u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8807u; return dd3_static_complete(rt,2u);
        }
        case 0x8807u: {
            dd3_static_write8(rt,0x01u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8809u; return dd3_static_complete(rt,3u);
        }
        case 0x8809u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x880Au; return dd3_static_complete(rt,2u);
        }
        case 0x880Au: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x880Bu; return dd3_static_complete(rt,2u);
        }
        case 0x880Bu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x880Cu; return dd3_static_complete(rt,2u);
        }
        case 0x880Cu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x880Du; return dd3_static_complete(rt,2u);
        }
        case 0x880Du: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x880Eu; return dd3_static_complete(rt,2u);
        }
        case 0x880Eu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x880Fu; return dd3_static_complete(rt,2u);
        }
        case 0x880Fu: {
            uint16_t ea=0x00u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8811u; return dd3_static_complete(rt,3u);
        }
        case 0x8811u: {
            dd3_static_push8(rt,(uint8_t)(0x8813u>>8)); dd3_static_push8(rt,(uint8_t)0x8813u);
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,6u);
        }
        case 0x8814u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0x8815u; return dd3_static_complete(rt,2u);
        }
        case 0x8815u: {
            uint16_t ea=(uint16_t)(0x07CCu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8818u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CCu,ea)?1u:0u));
        }
        case 0x8818u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x881Au,0x8822u)) c++; rt->state.cpu.pc=0x8822u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x881Au; return dd3_static_complete(rt,2u);
        }
        case 0x881Au: {
            uint16_t ea=0x01u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x881Cu; return dd3_static_complete(rt,3u);
        }
        case 0x881Cu: {
            uint16_t ea=(uint16_t)(0x07CEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x881Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CEu,ea)?1u:0u));
        }
        case 0x881Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8821u,0x8822u)) c++; rt->state.cpu.pc=0x8822u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8821u; return dd3_static_complete(rt,2u);
        }
        case 0x8821u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8822u: {
            uint16_t ea=0x01u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8824u; return dd3_static_complete(rt,3u);
        }
        case 0x8824u: {
            dd3_static_write8(rt,(uint16_t)(0x07CEu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0x8827u; return dd3_static_complete(rt,5u);
        }
        case 0x8827u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8829u; return dd3_static_complete(rt,2u);
        }
        case 0x8829u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x882Bu,0x8835u)) c++; rt->state.cpu.pc=0x8835u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x882Bu; return dd3_static_complete(rt,2u);
        }
        case 0x882Bu: {
            uint16_t ea=(uint16_t)(0x0734u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x882Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0734u,ea)?1u:0u));
        }
        case 0x882Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8830u,0x8841u)) c++; rt->state.cpu.pc=0x8841u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8830u; return dd3_static_complete(rt,2u);
        }
        case 0x8830u: {
            dd3_static_write8(rt,0x07F1u,rt->state.cpu.y);
            rt->state.cpu.pc=0x8833u; return dd3_static_complete(rt,4u);
        }
        case 0x8833u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8835u,0x883Bu)) c++; rt->state.cpu.pc=0x883Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8835u; return dd3_static_complete(rt,2u);
        }
        case 0x8835u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8836u; return dd3_static_complete(rt,2u);
        }
        case 0x8836u: {
            uint8_t v=0x0Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x8838u; return dd3_static_complete(rt,2u);
        }
        case 0x8838u: {
            dd3_static_write8(rt,0x07F1u,rt->state.cpu.a);
            rt->state.cpu.pc=0x883Bu; return dd3_static_complete(rt,4u);
        }
        case 0x883Bu: {
            uint16_t ea=(uint16_t)(0x07CEu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x883Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CEu,ea)?1u:0u));
        }
        case 0x883Eu: {
            rt->state.cpu.pc=0x07F0u; return dd3_static_complete(rt,3u);
        }
        case 0x8841u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x8842u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0x8844u; return dd3_static_complete(rt,2u);
        }
        case 0x8844u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x8846u,0x889Du)) c++; rt->state.cpu.pc=0x889Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8846u; return dd3_static_complete(rt,2u);
        }
        case 0x8846u: {
            uint16_t ea=(uint16_t)(0x0730u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8849u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0730u,ea)?1u:0u));
        }
        case 0x8849u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x884Bu; return dd3_static_complete(rt,2u);
        }
        case 0x884Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x884Du,0x889Du)) c++; rt->state.cpu.pc=0x889Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x884Du; return dd3_static_complete(rt,2u);
        }
        case 0x884Du: {
            uint16_t ea=(uint16_t)(0x07C8u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x8850u; return dd3_static_complete(rt,7u);
        }
        case 0x8850u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8852u,0x889Du)) c++; rt->state.cpu.pc=0x889Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8852u; return dd3_static_complete(rt,2u);
        }
        case 0x8852u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8854u; return dd3_static_complete(rt,2u);
        }
        case 0x8854u: {
            dd3_static_write8(rt,(uint16_t)(0x07C8u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8857u; return dd3_static_complete(rt,5u);
        }
        case 0x8857u: {
            uint16_t ea=(uint16_t)(0x07CBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x885Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CBu,ea)?1u:0u));
        }
        case 0x885Au: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x885Bu; return dd3_static_complete(rt,2u);
        }
        case 0x885Bu: {
            dd3_static_write8(rt,0x03u,rt->state.cpu.a);
            rt->state.cpu.pc=0x885Du; return dd3_static_complete(rt,3u);
        }
        case 0x885Du: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x885Eu; return dd3_static_complete(rt,2u);
        }
        case 0x885Eu: {
            uint16_t ea=(uint16_t)(0x07BFu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8861u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07BFu,ea)?1u:0u));
        }
        case 0x8861u: {
            dd3_static_write8(rt,0x02u,rt->state.cpu.a);
            rt->state.cpu.pc=0x8863u; return dd3_static_complete(rt,3u);
        }
        case 0x8863u: {
            uint16_t ea=(uint16_t)(0x07C2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8866u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07C2u,ea)?1u:0u));
        }
        case 0x8866u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x8868u,0x887Fu)) c++; rt->state.cpu.pc=0x887Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8868u; return dd3_static_complete(rt,2u);
        }
        case 0x8868u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8869u; return dd3_static_complete(rt,2u);
        }
        case 0x8869u: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x886Bu; return dd3_static_complete(rt,3u);
        }
        case 0x886Bu: {
            uint16_t ea=(uint16_t)(0x07CBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0x886Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CBu,ea)?1u:0u));
        }
        case 0x886Eu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8870u,0x888Fu)) c++; rt->state.cpu.pc=0x888Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8870u; return dd3_static_complete(rt,2u);
        }
        case 0x8870u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8872u; return dd3_static_complete(rt,2u);
        }
        case 0x8872u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8873u; return dd3_static_complete(rt,2u);
        }
        case 0x8873u: {
            uint16_t ea=(uint16_t)(0x07C2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8876u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07C2u,ea)?1u:0u));
        }
        case 0x8876u: {
            dd3_static_write8(rt,(uint16_t)(0x07C2u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8879u; return dd3_static_complete(rt,5u);
        }
        case 0x8879u: {
            uint16_t ea=(uint16_t)(0x07CBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x887Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07CBu,ea)?1u:0u));
        }
        case 0x887Cu: {
            rt->state.cpu.pc=0x888Fu; return dd3_static_complete(rt,3u);
        }
        case 0x887Fu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x8880u; return dd3_static_complete(rt,2u);
        }
        case 0x8880u: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x8882u; return dd3_static_complete(rt,3u);
        }
        case 0x8882u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x8884u,0x888Fu)) c++; rt->state.cpu.pc=0x888Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x8884u; return dd3_static_complete(rt,2u);
        }
        case 0x8884u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8886u; return dd3_static_complete(rt,2u);
        }
        case 0x8886u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8887u; return dd3_static_complete(rt,2u);
        }
        case 0x8887u: {
            uint16_t ea=(uint16_t)(0x07C2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x888Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07C2u,ea)?1u:0u));
        }
        case 0x888Au: {
            dd3_static_write8(rt,(uint16_t)(0x07C2u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x888Du; return dd3_static_complete(rt,5u);
        }
        case 0x888Du: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x888Fu; return dd3_static_complete(rt,2u);
        }
        case 0x888Fu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x8890u; return dd3_static_complete(rt,2u);
        }
        case 0x8890u: {
            uint16_t ea=0x03u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x8892u; return dd3_static_complete(rt,3u);
        }
        case 0x8892u: {
            dd3_static_write8(rt,(uint16_t)(0x07BFu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x8895u; return dd3_static_complete(rt,5u);
        }
        case 0x8895u: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x8898u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x8898u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x889Au; return dd3_static_complete(rt,2u);
        }
        case 0x889Au: {
            dd3_static_write8(rt,(uint16_t)(0x0728u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x889Du; return dd3_static_complete(rt,5u);
        }
        case 0x889Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x889Eu: {
            uint16_t ea=(uint16_t)(0x07C5u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88A1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07C5u,ea)?1u:0u));
        }
        case 0x88A1u: {
            dd3_static_write8(rt,(uint16_t)(0x07C8u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x88A4u; return dd3_static_complete(rt,5u);
        }
        case 0x88A4u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88A6u; return dd3_static_complete(rt,2u);
        }
        case 0x88A6u: {
            dd3_static_write8(rt,(uint16_t)(0x07BFu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x88A9u; return dd3_static_complete(rt,5u);
        }
        case 0x88A9u: {
            uint16_t ea=(uint16_t)(0x07C2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88ACu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07C2u,ea)?1u:0u));
        }
        case 0x88ACu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0x88AEu,0x88BFu)) c++; rt->state.cpu.pc=0x88BFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88AEu; return dd3_static_complete(rt,2u);
        }
        case 0x88AEu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88B0u; return dd3_static_complete(rt,2u);
        }
        case 0x88B0u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0x88B1u; return dd3_static_complete(rt,2u);
        }
        case 0x88B1u: {
            uint16_t ea=(uint16_t)(0x07C2u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0x88B4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x07C2u,ea)?1u:0u));
        }
        case 0x88B4u: {
            dd3_static_write8(rt,(uint16_t)(0x07C2u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x88B7u; return dd3_static_complete(rt,5u);
        }
        case 0x88B7u: {
            uint16_t ea=(uint16_t)(0x0728u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88BAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0728u,ea)?1u:0u));
        }
        case 0x88BAu: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x88BCu; return dd3_static_complete(rt,2u);
        }
        case 0x88BCu: {
            dd3_static_write8(rt,(uint16_t)(0x0728u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0x88BFu; return dd3_static_complete(rt,5u);
        }
        case 0x88BFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x88C0u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x88C1u; return dd3_static_complete(rt,2u);
        }
        case 0x88C1u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x88C2u; return dd3_static_complete(rt,2u);
        }
        case 0x88C2u: {
            uint16_t ea=0x00u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x88C4u; return dd3_static_complete(rt,3u);
        }
        case 0x88C4u: {
            dd3_static_write8(rt,0x00u,rt->state.cpu.a);
            rt->state.cpu.pc=0x88C6u; return dd3_static_complete(rt,3u);
        }
        case 0x88C6u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x88C8u,0x88CAu)) c++; rt->state.cpu.pc=0x88CAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88C8u; return dd3_static_complete(rt,2u);
        }
        case 0x88C8u: {
            uint16_t ea=0x01u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x88CAu; return dd3_static_complete(rt,5u);
        }
        case 0x88CAu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88CCu; return dd3_static_complete(rt,2u);
        }
        case 0x88CCu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x88CDu: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88CFu; return dd3_static_complete(rt,3u);
        }
        case 0x88CFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x88D1u,0x88D2u)) c++; rt->state.cpu.pc=0x88D2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88D1u; return dd3_static_complete(rt,2u);
        }
        case 0x88D1u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0x88D2u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x88D3u; return dd3_static_complete(rt,2u);
        }
        case 0x88D3u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x88D4u; return dd3_static_complete(rt,3u);
        }
        case 0x88D4u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88D6u; return dd3_static_complete(rt,2u);
        }
        case 0x88D6u: {
            uint8_t v=0x08u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0x88D8u; return dd3_static_complete(rt,2u);
        }
        case 0x88D8u: {
            uint16_t ea=0x02u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0x88DAu; return dd3_static_complete(rt,5u);
        }
        case 0x88DAu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0x88DCu,0x88DFu)) c++; rt->state.cpu.pc=0x88DFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88DCu; return dd3_static_complete(rt,2u);
        }
        case 0x88DCu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0x88DDu; return dd3_static_complete(rt,2u);
        }
        case 0x88DDu: {
            uint16_t ea=0x03u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x88DFu; return dd3_static_complete(rt,3u);
        }
        case 0x88DFu: {
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a=(uint8_t)((rt->state.cpu.a>>1)|(c<<7)); dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0x88E0u; return dd3_static_complete(rt,2u);
        }
        case 0x88E0u: {
            rt->state.cpu.x--; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x88E1u; return dd3_static_complete(rt,2u);
        }
        case 0x88E1u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0x88E3u,0x88D8u)) c++; rt->state.cpu.pc=0x88D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0x88E3u; return dd3_static_complete(rt,2u);
        }
        case 0x88E3u: {
            dd3_static_write8(rt,0x02u,rt->state.cpu.a);
            rt->state.cpu.pc=0x88E5u; return dd3_static_complete(rt,3u);
        }
        case 0x88E5u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x88E6u; return dd3_static_complete(rt,4u);
        }
        case 0x88E6u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0x88E7u; return dd3_static_complete(rt,2u);
        }
        case 0x88E7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        default: return dd3_static_fail_unproven(rt,10,rt->state.cpu.pc);
    }
}
