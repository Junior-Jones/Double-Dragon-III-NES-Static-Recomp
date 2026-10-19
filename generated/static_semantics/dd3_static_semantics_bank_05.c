/* Generated: no runtime opcode fetch or decode. */
#include "dd3_static_semantics.h"
int dd3_static_execute_bank_05(DD3StaticRuntime *rt) {
    switch (rt->state.cpu.pc) {
        case 0xA001u: {
            uint8_t v=0x14u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA003u; return dd3_static_complete(rt,2u);
        }
        case 0xA003u: {
            dd3_static_write8(rt,(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA005u; return dd3_static_complete(rt,4u);
        }
        case 0xA005u: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA007u; return dd3_static_complete(rt,2u);
        }
        case 0xA007u: {
            dd3_static_push8(rt,(uint8_t)(0xA009u>>8)); dd3_static_push8(rt,(uint8_t)0xA009u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0xA00Au: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA00Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA00Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA00Fu; return dd3_static_complete(rt,5u);
        }
        case 0xA00Fu: {
            dd3_static_push8(rt,(uint8_t)(0xA011u>>8)); dd3_static_push8(rt,(uint8_t)0xA011u);
            rt->state.cpu.pc=0xA62Eu; return dd3_static_complete(rt,6u);
        }
        case 0xA012u: {
            uint8_t v=0x28u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA014u; return dd3_static_complete(rt,2u);
        }
        case 0xA014u: {
            dd3_static_push8(rt,(uint8_t)(0xA016u>>8)); dd3_static_push8(rt,(uint8_t)0xA016u);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0xA017u: {
            dd3_static_push8(rt,(uint8_t)(0xA019u>>8)); dd3_static_push8(rt,(uint8_t)0xA019u);
            rt->state.cpu.pc=0xA6B9u; return dd3_static_complete(rt,6u);
        }
        case 0xA01Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA03Au: {
            dd3_static_push8(rt,(uint8_t)(0xA03Cu>>8)); dd3_static_push8(rt,(uint8_t)0xA03Cu);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0xA03Du: {
            dd3_static_push8(rt,(uint8_t)(0xA03Fu>>8)); dd3_static_push8(rt,(uint8_t)0xA03Fu);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0xA040u: {
            dd3_static_push8(rt,(uint8_t)(0xA042u>>8)); dd3_static_push8(rt,(uint8_t)0xA042u);
            rt->state.cpu.pc=0xA6B9u; return dd3_static_complete(rt,6u);
        }
        case 0xA043u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA048u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA04Au; return dd3_static_complete(rt,4u);
        }
        case 0xA04Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA04Cu,0xA059u)) c++; rt->state.cpu.pc=0xA059u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA04Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA04Cu: {
            uint8_t v=0x27u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA04Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA04Eu: {
            dd3_static_push8(rt,(uint8_t)(0xA050u>>8)); dd3_static_push8(rt,(uint8_t)0xA050u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0xA051u: {
            dd3_static_push8(rt,(uint8_t)(0xA053u>>8)); dd3_static_push8(rt,(uint8_t)0xA053u);
            rt->state.cpu.pc=0xA900u; return dd3_static_complete(rt,6u);
        }
        case 0xA054u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA056u; return dd3_static_complete(rt,2u);
        }
        case 0xA056u: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA059u; return dd3_static_complete(rt,5u);
        }
        case 0xA059u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA05Bu; return dd3_static_complete(rt,4u);
        }
        case 0xA05Bu: {
            uint8_t v=0x11u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA05Du; return dd3_static_complete(rt,2u);
        }
        case 0xA05Du: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA05Fu,0xA064u)) c++; rt->state.cpu.pc=0xA064u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA05Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA05Fu: {
            uint8_t v=0x25u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA061u; return dd3_static_complete(rt,2u);
        }
        case 0xA061u: {
            rt->state.cpu.pc=0xA82Du; return dd3_static_complete(rt,3u);
        }
        case 0xA064u: {
            uint8_t v=0x33u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA066u; return dd3_static_complete(rt,2u);
        }
        case 0xA066u: {
            rt->state.cpu.pc=0xA82Du; return dd3_static_complete(rt,3u);
        }
        case 0xA077u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA079u; return dd3_static_complete(rt,4u);
        }
        case 0xA079u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA07Bu,0xA092u)) c++; rt->state.cpu.pc=0xA092u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA07Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA07Bu: {
            uint16_t ea=(uint16_t)(0x039Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA07Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x039Du,ea)?1u:0u));
        }
        case 0xA07Eu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA080u,0xA085u)) c++; rt->state.cpu.pc=0xA085u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA080u; return dd3_static_complete(rt,2u);
        }
        case 0xA080u: {
            uint8_t v=0x2Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA082u; return dd3_static_complete(rt,2u);
        }
        case 0xA082u: {
            dd3_static_push8(rt,(uint8_t)(0xA084u>>8)); dd3_static_push8(rt,(uint8_t)0xA084u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0xA085u: {
            dd3_static_push8(rt,(uint8_t)(0xA087u>>8)); dd3_static_push8(rt,(uint8_t)0xA087u);
            rt->state.cpu.pc=0xA900u; return dd3_static_complete(rt,6u);
        }
        case 0xA088u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA08Au; return dd3_static_complete(rt,2u);
        }
        case 0xA08Au: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA08Du; return dd3_static_complete(rt,5u);
        }
        case 0xA08Du: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA08Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA08Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA092u; return dd3_static_complete(rt,5u);
        }
        case 0xA092u: {
            rt->state.cpu.pc=0xA059u; return dd3_static_complete(rt,3u);
        }
        case 0xA288u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA28Au; return dd3_static_complete(rt,4u);
        }
        case 0xA28Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA28Cu,0xA29Eu)) c++; rt->state.cpu.pc=0xA29Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA28Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA28Cu: {
            dd3_static_push8(rt,(uint8_t)(0xA28Eu>>8)); dd3_static_push8(rt,(uint8_t)0xA28Eu);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0xA28Fu: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA291u; return dd3_static_complete(rt,2u);
        }
        case 0xA291u: {
            dd3_static_push8(rt,(uint8_t)(0xA293u>>8)); dd3_static_push8(rt,(uint8_t)0xA293u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0xA294u: {
            uint8_t v=0x06u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA296u; return dd3_static_complete(rt,2u);
        }
        case 0xA296u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA299u; return dd3_static_complete(rt,5u);
        }
        case 0xA299u: {
            uint8_t v=0x06u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA29Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA29Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA29Eu; return dd3_static_complete(rt,5u);
        }
        case 0xA29Eu: {
            uint8_t v=0x28u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2A0u; return dd3_static_complete(rt,2u);
        }
        case 0xA2A0u: {
            dd3_static_push8(rt,(uint8_t)(0xA2A2u>>8)); dd3_static_push8(rt,(uint8_t)0xA2A2u);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0xA2A3u: {
            dd3_static_push8(rt,(uint8_t)(0xA2A5u>>8)); dd3_static_push8(rt,(uint8_t)0xA2A5u);
            rt->state.cpu.pc=0x931Du; return dd3_static_complete(rt,6u);
        }
        case 0xA2A6u: {
            uint16_t ea=(uint16_t)(0x0347u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2A9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0347u,ea)?1u:0u));
        }
        case 0xA2A9u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA2ABu,0xA2AFu)) c++; rt->state.cpu.pc=0xA2AFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA2ABu; return dd3_static_complete(rt,2u);
        }
        case 0xA2ABu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA2ADu; return dd3_static_complete(rt,2u);
        }
        case 0xA2ADu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA2AFu,0xA2B2u)) c++; rt->state.cpu.pc=0xA2B2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA2AFu; return dd3_static_complete(rt,2u);
        }
        case 0xA2AFu: {
            dd3_static_push8(rt,(uint8_t)(0xA2B1u>>8)); dd3_static_push8(rt,(uint8_t)0xA2B1u);
            rt->state.cpu.pc=0xA2B3u; return dd3_static_complete(rt,6u);
        }
        case 0xA2B2u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA2B3u: {
            uint16_t ea=(uint16_t)(0x03F1u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2B6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F1u,ea)?1u:0u));
        }
        case 0xA2B6u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA2B8u; return dd3_static_complete(rt,2u);
        }
        case 0xA2B8u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA2BAu,0xA2CDu)) c++; rt->state.cpu.pc=0xA2CDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA2BAu; return dd3_static_complete(rt,2u);
        }
        case 0xA2BAu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA2BBu; return dd3_static_complete(rt,2u);
        }
        case 0xA2BBu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2BDu; return dd3_static_complete(rt,4u);
        }
        case 0xA2BDu: {
            uint8_t v=0x14u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA2BFu; return dd3_static_complete(rt,2u);
        }
        case 0xA2BFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA2C1u,0xA2CDu)) c++; rt->state.cpu.pc=0xA2CDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA2C1u; return dd3_static_complete(rt,2u);
        }
        case 0xA2C1u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2C4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0xA2C4u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA2C6u,0xA2CDu)) c++; rt->state.cpu.pc=0xA2CDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA2C6u; return dd3_static_complete(rt,2u);
        }
        case 0xA2C6u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2C8u; return dd3_static_complete(rt,2u);
        }
        case 0xA2C8u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA2CAu; return dd3_static_complete(rt,4u);
        }
        case 0xA2CAu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA2CCu; return dd3_static_complete(rt,4u);
        }
        case 0xA2CCu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA2CDu: {
            dd3_static_push8(rt,(uint8_t)(0xA2CFu>>8)); dd3_static_push8(rt,(uint8_t)0xA2CFu);
            rt->state.cpu.pc=0xA605u; return dd3_static_complete(rt,6u);
        }
        case 0xA2D0u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA2D1u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2D3u; return dd3_static_complete(rt,4u);
        }
        case 0xA2D3u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA2D5u,0xA308u)) c++; rt->state.cpu.pc=0xA308u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA2D5u; return dd3_static_complete(rt,2u);
        }
        case 0xA2D5u: {
            dd3_static_push8(rt,(uint8_t)(0xA2D7u>>8)); dd3_static_push8(rt,(uint8_t)0xA2D7u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0xA2D8u: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2DAu; return dd3_static_complete(rt,2u);
        }
        case 0xA2DAu: {
            dd3_static_push8(rt,(uint8_t)(0xA2DCu>>8)); dd3_static_push8(rt,(uint8_t)0xA2DCu);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0xA2DDu: {
            uint16_t ea=(uint16_t)(0x03F1u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2E0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F1u,ea)?1u:0u));
        }
        case 0xA2E0u: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA2E3u; return dd3_static_complete(rt,5u);
        }
        case 0xA2E3u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2E5u; return dd3_static_complete(rt,4u);
        }
        case 0xA2E5u: {
            uint8_t v=0x1Bu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA2E7u; return dd3_static_complete(rt,2u);
        }
        case 0xA2E7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA2E9u,0xA2EFu)) c++; rt->state.cpu.pc=0xA2EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA2E9u; return dd3_static_complete(rt,2u);
        }
        case 0xA2E9u: {
            uint8_t v=0x09u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2EBu; return dd3_static_complete(rt,2u);
        }
        case 0xA2EBu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA2EDu; return dd3_static_complete(rt,4u);
        }
        case 0xA2EDu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA2EFu,0xA300u)) c++; rt->state.cpu.pc=0xA300u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA2EFu; return dd3_static_complete(rt,2u);
        }
        case 0xA2EFu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2F1u; return dd3_static_complete(rt,2u);
        }
        case 0xA2F1u: {
            dd3_static_write8(rt,(uint16_t)(0x03F1u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA2F4u; return dd3_static_complete(rt,5u);
        }
        case 0xA2F4u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2F6u; return dd3_static_complete(rt,4u);
        }
        case 0xA2F6u: {
            dd3_static_write8(rt,(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA2F8u; return dd3_static_complete(rt,4u);
        }
        case 0xA2F8u: {
            uint8_t v=0x11u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2FAu; return dd3_static_complete(rt,2u);
        }
        case 0xA2FAu: {
            dd3_static_write8(rt,(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA2FCu; return dd3_static_complete(rt,4u);
        }
        case 0xA2FCu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA2FEu; return dd3_static_complete(rt,2u);
        }
        case 0xA2FEu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA300u; return dd3_static_complete(rt,4u);
        }
        case 0xA300u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA302u; return dd3_static_complete(rt,2u);
        }
        case 0xA302u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA304u; return dd3_static_complete(rt,4u);
        }
        case 0xA304u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA306u; return dd3_static_complete(rt,2u);
        }
        case 0xA306u: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA308u; return dd3_static_complete(rt,4u);
        }
        case 0xA308u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA30Au; return dd3_static_complete(rt,6u);
        }
        case 0xA30Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA30Cu,0xA31Fu)) c++; rt->state.cpu.pc=0xA31Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA30Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA30Cu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA30Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA30Eu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA30Fu; return dd3_static_complete(rt,3u);
        }
        case 0xA30Fu: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA311u; return dd3_static_complete(rt,4u);
        }
        case 0xA311u: {
            dd3_static_write8(rt,(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA313u; return dd3_static_complete(rt,4u);
        }
        case 0xA313u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA316u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0xA316u: {
            dd3_static_write8(rt,(uint16_t)(0x03F1u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA319u; return dd3_static_complete(rt,5u);
        }
        case 0xA319u: {
            dd3_static_push8(rt,(uint8_t)(0xA31Bu>>8)); dd3_static_push8(rt,(uint8_t)0xA31Bu);
            rt->state.cpu.pc=0xA2B3u; return dd3_static_complete(rt,6u);
        }
        case 0xA31Cu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA31Du; return dd3_static_complete(rt,4u);
        }
        case 0xA31Du: {
            dd3_static_write8(rt,(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA31Fu; return dd3_static_complete(rt,4u);
        }
        case 0xA31Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA588u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA58Au; return dd3_static_complete(rt,4u);
        }
        case 0xA58Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA58Cu,0xA598u)) c++; rt->state.cpu.pc=0xA598u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA58Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA58Cu: {
            dd3_static_push8(rt,(uint8_t)(0xA58Eu>>8)); dd3_static_push8(rt,(uint8_t)0xA58Eu);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0xA58Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA591u; return dd3_static_complete(rt,2u);
        }
        case 0xA591u: {
            dd3_static_write8(rt,0x00FBu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA594u; return dd3_static_complete(rt,4u);
        }
        case 0xA594u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA596u; return dd3_static_complete(rt,2u);
        }
        case 0xA596u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA598u; return dd3_static_complete(rt,4u);
        }
        case 0xA598u: {
            uint16_t ea=0x00FBu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA59Bu; return dd3_static_complete(rt,4u);
        }
        case 0xA59Bu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA59Du; return dd3_static_complete(rt,2u);
        }
        case 0xA59Du: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA59Fu,0xA5ACu)) c++; rt->state.cpu.pc=0xA5ACu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA59Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA59Fu: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5A1u; return dd3_static_complete(rt,4u);
        }
        case 0xA5A1u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA5A2u; return dd3_static_complete(rt,2u);
        }
        case 0xA5A2u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA5A4u; return dd3_static_complete(rt,2u);
        }
        case 0xA5A4u: {
            uint8_t v=0x13u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA5A6u; return dd3_static_complete(rt,2u);
        }
        case 0xA5A6u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA5A8u,0xA5AAu)) c++; rt->state.cpu.pc=0xA5AAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA5A8u; return dd3_static_complete(rt,2u);
        }
        case 0xA5A8u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5AAu; return dd3_static_complete(rt,2u);
        }
        case 0xA5AAu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA5ACu; return dd3_static_complete(rt,4u);
        }
        case 0xA5ACu: {
            uint16_t ea=0x00FBu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA5AFu; return dd3_static_complete(rt,6u);
        }
        case 0xA5AFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA5B0u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5B2u; return dd3_static_complete(rt,4u);
        }
        case 0xA5B2u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA5B4u,0xA5D3u)) c++; rt->state.cpu.pc=0xA5D3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA5B4u; return dd3_static_complete(rt,2u);
        }
        case 0xA5B4u: {
            dd3_static_push8(rt,(uint8_t)(0xA5B6u>>8)); dd3_static_push8(rt,(uint8_t)0xA5B6u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0xA5B7u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5B9u; return dd3_static_complete(rt,2u);
        }
        case 0xA5B9u: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA5BCu; return dd3_static_complete(rt,5u);
        }
        case 0xA5BCu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5BEu; return dd3_static_complete(rt,2u);
        }
        case 0xA5BEu: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA5C1u; return dd3_static_complete(rt,5u);
        }
        case 0xA5C1u: {
            uint8_t v=0x13u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5C3u; return dd3_static_complete(rt,2u);
        }
        case 0xA5C3u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA5C5u; return dd3_static_complete(rt,4u);
        }
        case 0xA5C5u: {
            uint8_t v=0x14u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5C7u; return dd3_static_complete(rt,2u);
        }
        case 0xA5C7u: {
            dd3_static_write8(rt,(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA5C9u; return dd3_static_complete(rt,4u);
        }
        case 0xA5C9u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5CBu; return dd3_static_complete(rt,2u);
        }
        case 0xA5CBu: {
            dd3_static_write8(rt,(uint16_t)(0x0405u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA5CEu; return dd3_static_complete(rt,5u);
        }
        case 0xA5CEu: {
            uint8_t v=0x18u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5D0u; return dd3_static_complete(rt,2u);
        }
        case 0xA5D0u: {
            dd3_static_push8(rt,(uint8_t)(0xA5D2u>>8)); dd3_static_push8(rt,(uint8_t)0xA5D2u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0xA5D3u: {
            dd3_static_push8(rt,(uint8_t)(0xA5D5u>>8)); dd3_static_push8(rt,(uint8_t)0xA5D5u);
            rt->state.cpu.pc=0xA6B9u; return dd3_static_complete(rt,6u);
        }
        case 0xA5D6u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5D8u; return dd3_static_complete(rt,4u);
        }
        case 0xA5D8u: {
            uint8_t v=0xD8u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA5DAu; return dd3_static_complete(rt,2u);
        }
        case 0xA5DAu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA5DCu,0xA5E5u)) c++; rt->state.cpu.pc=0xA5E5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA5DCu; return dd3_static_complete(rt,2u);
        }
        case 0xA5DCu: {
            uint8_t v=0xD8u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5DEu; return dd3_static_complete(rt,2u);
        }
        case 0xA5DEu: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA5E0u; return dd3_static_complete(rt,4u);
        }
        case 0xA5E0u: {
            dd3_static_push8(rt,(uint8_t)(0xA5E2u>>8)); dd3_static_push8(rt,(uint8_t)0xA5E2u);
            rt->state.cpu.pc=0x8233u; return dd3_static_complete(rt,6u);
        }
        case 0xA5E3u: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA5E5u; return dd3_static_complete(rt,4u);
        }
        case 0xA5E5u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA5E6u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5E8u; return dd3_static_complete(rt,4u);
        }
        case 0xA5E8u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA5EAu,0xA601u)) c++; rt->state.cpu.pc=0xA601u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA5EAu; return dd3_static_complete(rt,2u);
        }
        case 0xA5EAu: {
            dd3_static_push8(rt,(uint8_t)(0xA5ECu>>8)); dd3_static_push8(rt,(uint8_t)0xA5ECu);
            rt->state.cpu.pc=0xA900u; return dd3_static_complete(rt,6u);
        }
        case 0xA5EDu: {
            uint8_t v=0x09u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5EFu; return dd3_static_complete(rt,2u);
        }
        case 0xA5EFu: {
            dd3_static_write8(rt,(uint16_t)(0x0318u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA5F2u; return dd3_static_complete(rt,5u);
        }
        case 0xA5F2u: {
            uint8_t v=0x19u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5F4u; return dd3_static_complete(rt,2u);
        }
        case 0xA5F4u: {
            dd3_static_push8(rt,(uint8_t)(0xA5F6u>>8)); dd3_static_push8(rt,(uint8_t)0xA5F6u);
            rt->state.cpu.pc=0xABB4u; return dd3_static_complete(rt,6u);
        }
        case 0xA5F7u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA5F9u; return dd3_static_complete(rt,4u);
        }
        case 0xA5F9u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA5FBu; return dd3_static_complete(rt,2u);
        }
        case 0xA5FBu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA5FDu; return dd3_static_complete(rt,2u);
        }
        case 0xA5FDu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA5FFu; return dd3_static_complete(rt,2u);
        }
        case 0xA5FFu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA601u; return dd3_static_complete(rt,4u);
        }
        case 0xA601u: {
            dd3_static_push8(rt,(uint8_t)(0xA603u>>8)); dd3_static_push8(rt,(uint8_t)0xA603u);
            rt->state.cpu.pc=0xA6B9u; return dd3_static_complete(rt,6u);
        }
        case 0xA604u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA605u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA607u; return dd3_static_complete(rt,2u);
        }
        case 0xA607u: {
            dd3_static_write8(rt,(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA609u; return dd3_static_complete(rt,4u);
        }
        case 0xA609u: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA60Bu; return dd3_static_complete(rt,4u);
        }
        case 0xA60Bu: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA60Du; return dd3_static_complete(rt,4u);
        }
        case 0xA60Du: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA60Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA60Fu: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA611u; return dd3_static_complete(rt,4u);
        }
        case 0xA611u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA612u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA613u; return dd3_static_complete(rt,2u);
        }
        case 0xA613u: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA615u; return dd3_static_complete(rt,4u);
        }
        case 0xA615u: {
            dd3_static_write8(rt,(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA617u; return dd3_static_complete(rt,4u);
        }
        case 0xA617u: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA619u; return dd3_static_complete(rt,4u);
        }
        case 0xA619u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA61Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA61Bu: {
            dd3_static_write8(rt,(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA61Du; return dd3_static_complete(rt,4u);
        }
        case 0xA61Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA62Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA630u; return dd3_static_complete(rt,2u);
        }
        case 0xA630u: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA632u; return dd3_static_complete(rt,4u);
        }
        case 0xA632u: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA635u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0xA635u: {
            uint8_t v=0x80u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA637u; return dd3_static_complete(rt,2u);
        }
        case 0xA637u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA639u,0xA63Du)) c++; rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA639u; return dd3_static_complete(rt,2u);
        }
        case 0xA639u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA63Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA63Bu: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,4u);
        }
        case 0xA63Du: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA63Fu; return dd3_static_complete(rt,4u);
        }
        case 0xA63Fu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA641u; return dd3_static_complete(rt,2u);
        }
        case 0xA641u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA643u; return dd3_static_complete(rt,4u);
        }
        case 0xA643u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA645u; return dd3_static_complete(rt,4u);
        }
        case 0xA645u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA647u; return dd3_static_complete(rt,2u);
        }
        case 0xA647u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA649u; return dd3_static_complete(rt,2u);
        }
        case 0xA649u: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA64Bu; return dd3_static_complete(rt,4u);
        }
        case 0xA64Bu: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA64Du; return dd3_static_complete(rt,4u);
        }
        case 0xA64Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA64Eu: {
            uint16_t ea=(uint16_t)(0x033Eu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA651u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x033Eu,ea)?1u:0u));
        }
        case 0xA651u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA652u; return dd3_static_complete(rt,2u);
        }
        case 0xA652u: {
            uint16_t ea=(uint16_t)(0x0334u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA655u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0334u,ea)?1u:0u));
        }
        case 0xA655u: {
            dd3_static_write8(rt,(uint16_t)(0x0334u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA658u; return dd3_static_complete(rt,5u);
        }
        case 0xA658u: {
            uint16_t ea=(uint16_t)(0x0347u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA65Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0347u,ea)?1u:0u));
        }
        case 0xA65Bu: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0xA65Cu; return dd3_static_complete(rt,3u);
        }
        case 0xA65Cu: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA65Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA65Eu: {
            dd3_static_write8(rt,(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA660u; return dd3_static_complete(rt,4u);
        }
        case 0xA660u: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA662u; return dd3_static_complete(rt,4u);
        }
        case 0xA662u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA664u; return dd3_static_complete(rt,2u);
        }
        case 0xA664u: {
            dd3_static_write8(rt,(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA666u; return dd3_static_complete(rt,4u);
        }
        case 0xA666u: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt));
            rt->state.cpu.pc=0xA667u; return dd3_static_complete(rt,4u);
        }
        case 0xA667u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA669u,0xA66Eu)) c++; rt->state.cpu.pc=0xA66Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA669u; return dd3_static_complete(rt,2u);
        }
        case 0xA669u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA66Au; return dd3_static_complete(rt,2u);
        }
        case 0xA66Au: {
            uint8_t v=0xFFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA66Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA66Cu: {
            dd3_static_write8(rt,(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA66Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA66Eu: {
            uint16_t ea=(uint16_t)(0x033Eu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA671u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x033Eu,ea)?1u:0u));
        }
        case 0xA671u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA672u; return dd3_static_complete(rt,2u);
        }
        case 0xA672u: {
            uint16_t ea=(uint16_t)(0x0350u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA675u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0350u,ea)?1u:0u));
        }
        case 0xA675u: {
            dd3_static_write8(rt,(uint16_t)(0x033Eu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA678u; return dd3_static_complete(rt,5u);
        }
        case 0xA678u: {
            uint16_t ea=(uint16_t)(0x0347u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA67Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0347u,ea)?1u:0u));
        }
        case 0xA67Bu: {
            uint16_t ea=(uint16_t)(0x0359u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA67Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0359u,ea)?1u:0u));
        }
        case 0xA67Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA681u; return dd3_static_complete(rt,5u);
        }
        case 0xA681u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA682u: {
            uint16_t ea=(uint16_t)(0x0334u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA685u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0334u,ea)?1u:0u));
        }
        case 0xA685u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA686u; return dd3_static_complete(rt,2u);
        }
        case 0xA686u: {
            uint16_t ea=(uint16_t)(0x033Eu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA689u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x033Eu,ea)?1u:0u));
        }
        case 0xA689u: {
            dd3_static_write8(rt,(uint16_t)(0x0334u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA68Cu; return dd3_static_complete(rt,5u);
        }
        case 0xA68Cu: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA68Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA68Eu: {
            uint16_t ea=(uint16_t)(0x0347u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA691u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0347u,ea)?1u:0u));
        }
        case 0xA691u: {
            dd3_static_write8(rt,(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA693u; return dd3_static_complete(rt,4u);
        }
        case 0xA693u: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA695u; return dd3_static_complete(rt,4u);
        }
        case 0xA695u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA697u; return dd3_static_complete(rt,2u);
        }
        case 0xA697u: {
            dd3_static_write8(rt,(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA699u; return dd3_static_complete(rt,4u);
        }
        case 0xA699u: {
            uint16_t ea=(uint16_t)(0x0347u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA69Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0347u,ea)?1u:0u));
        }
        case 0xA69Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA69Eu,0xA6A5u)) c++; rt->state.cpu.pc=0xA6A5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA69Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA69Eu: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6A0u; return dd3_static_complete(rt,4u);
        }
        case 0xA6A0u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA6A1u; return dd3_static_complete(rt,2u);
        }
        case 0xA6A1u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA6A3u; return dd3_static_complete(rt,2u);
        }
        case 0xA6A3u: {
            dd3_static_write8(rt,(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA6A5u; return dd3_static_complete(rt,4u);
        }
        case 0xA6A5u: {
            uint16_t ea=(uint16_t)(0x033Eu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6A8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x033Eu,ea)?1u:0u));
        }
        case 0xA6A8u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA6A9u; return dd3_static_complete(rt,2u);
        }
        case 0xA6A9u: {
            uint16_t ea=(uint16_t)(0x0350u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA6ACu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0350u,ea)?1u:0u));
        }
        case 0xA6ACu: {
            dd3_static_write8(rt,(uint16_t)(0x033Eu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA6AFu; return dd3_static_complete(rt,5u);
        }
        case 0xA6AFu: {
            uint16_t ea=(uint16_t)(0x0347u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6B2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0347u,ea)?1u:0u));
        }
        case 0xA6B2u: {
            uint16_t ea=(uint16_t)(0x0359u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA6B5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0359u,ea)?1u:0u));
        }
        case 0xA6B5u: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA6B8u; return dd3_static_complete(rt,5u);
        }
        case 0xA6B8u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA6B9u: {
            uint16_t ea=(uint16_t)(0x0318u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6BCu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0318u,ea)?1u:0u));
        }
        case 0xA6BCu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA6BEu,0xA6BFu)) c++; rt->state.cpu.pc=0xA6BFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6BEu; return dd3_static_complete(rt,2u);
        }
        case 0xA6BEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA6BFu: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6C2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0xA6C2u: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6C4u; return dd3_static_complete(rt,2u);
        }
        case 0xA6C4u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA6C5u; return dd3_static_complete(rt,2u);
        }
        case 0xA6C5u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.y);
            rt->state.cpu.pc=0xA6C7u; return dd3_static_complete(rt,3u);
        }
        case 0xA6C7u: {
            uint16_t ea=(uint16_t)(0xA76Eu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6CAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA76Eu,ea)?1u:0u));
        }
        case 0xA6CAu: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6CCu; return dd3_static_complete(rt,3u);
        }
        case 0xA6CCu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6CEu; return dd3_static_complete(rt,2u);
        }
        case 0xA6CEu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA6CFu; return dd3_static_complete(rt,2u);
        }
        case 0xA6CFu: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA6D1u; return dd3_static_complete(rt,3u);
        }
        case 0xA6D1u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA6D2u; return dd3_static_complete(rt,2u);
        }
        case 0xA6D2u: {
            uint16_t ea=(uint16_t)(0xA76Eu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6D5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA76Eu,ea)?1u:0u));
        }
        case 0xA6D5u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6D7u; return dd3_static_complete(rt,3u);
        }
        case 0xA6D7u: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6DAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0xA6DAu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6DCu; return dd3_static_complete(rt,2u);
        }
        case 0xA6DCu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA6DEu,0xA6E6u)) c++; rt->state.cpu.pc=0xA6E6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA6DEu; return dd3_static_complete(rt,2u);
        }
        case 0xA6DEu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6E0u; return dd3_static_complete(rt,3u);
        }
        case 0xA6E0u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6E2u; return dd3_static_complete(rt,3u);
        }
        case 0xA6E2u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6E4u; return dd3_static_complete(rt,3u);
        }
        case 0xA6E4u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.y);
            rt->state.cpu.pc=0xA6E6u; return dd3_static_complete(rt,3u);
        }
        case 0xA6E6u: {
            uint16_t ea=(uint16_t)(0x0318u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6E9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0318u,ea)?1u:0u));
        }
        case 0xA6E9u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6EBu; return dd3_static_complete(rt,3u);
        }
        case 0xA6EBu: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6EDu; return dd3_static_complete(rt,3u);
        }
        case 0xA6EDu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6EFu; return dd3_static_complete(rt,2u);
        }
        case 0xA6EFu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6F1u; return dd3_static_complete(rt,3u);
        }
        case 0xA6F1u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6F3u; return dd3_static_complete(rt,3u);
        }
        case 0xA6F3u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6F5u; return dd3_static_complete(rt,3u);
        }
        case 0xA6F5u: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6F7u; return dd3_static_complete(rt,3u);
        }
        case 0xA6F7u: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6F9u; return dd3_static_complete(rt,3u);
        }
        case 0xA6F9u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA6FBu; return dd3_static_complete(rt,3u);
        }
        case 0xA6FBu: {
            uint8_t v=0x08u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA6FDu; return dd3_static_complete(rt,2u);
        }
        case 0xA6FDu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA6FFu; return dd3_static_complete(rt,5u);
        }
        case 0xA6FFu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA701u,0xA70Eu)) c++; rt->state.cpu.pc=0xA70Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA701u; return dd3_static_complete(rt,2u);
        }
        case 0xA701u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA703u; return dd3_static_complete(rt,3u);
        }
        case 0xA703u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA704u; return dd3_static_complete(rt,2u);
        }
        case 0xA704u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA706u; return dd3_static_complete(rt,3u);
        }
        case 0xA706u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA708u; return dd3_static_complete(rt,3u);
        }
        case 0xA708u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA70Au; return dd3_static_complete(rt,3u);
        }
        case 0xA70Au: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA70Cu; return dd3_static_complete(rt,3u);
        }
        case 0xA70Cu: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA70Eu; return dd3_static_complete(rt,3u);
        }
        case 0xA70Eu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA710u; return dd3_static_complete(rt,5u);
        }
        case 0xA710u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA712u; return dd3_static_complete(rt,5u);
        }
        case 0xA712u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA714u; return dd3_static_complete(rt,5u);
        }
        case 0xA714u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA716u,0xA723u)) c++; rt->state.cpu.pc=0xA723u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA716u; return dd3_static_complete(rt,2u);
        }
        case 0xA716u: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA718u; return dd3_static_complete(rt,3u);
        }
        case 0xA718u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA719u; return dd3_static_complete(rt,2u);
        }
        case 0xA719u: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA71Bu; return dd3_static_complete(rt,3u);
        }
        case 0xA71Bu: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA71Du; return dd3_static_complete(rt,3u);
        }
        case 0xA71Du: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA71Fu; return dd3_static_complete(rt,3u);
        }
        case 0xA71Fu: {
            uint16_t ea=0x30u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA721u; return dd3_static_complete(rt,3u);
        }
        case 0xA721u: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA723u; return dd3_static_complete(rt,3u);
        }
        case 0xA723u: {
            uint16_t ea=0x2Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)(v<<1); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA725u; return dd3_static_complete(rt,5u);
        }
        case 0xA725u: {
            uint16_t ea=0x2Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA727u; return dd3_static_complete(rt,5u);
        }
        case 0xA727u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA728u; return dd3_static_complete(rt,2u);
        }
        case 0xA728u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA72Au,0xA6FDu)) c++; rt->state.cpu.pc=0xA6FDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA72Au; return dd3_static_complete(rt,2u);
        }
        case 0xA72Au: {
            uint16_t ea=0x30u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA72Cu; return dd3_static_complete(rt,5u);
        }
        case 0xA72Cu: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=v&1u; v=(uint8_t)((v>>1)|(c<<7)); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA72Eu; return dd3_static_complete(rt,5u);
        }
        case 0xA72Eu: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.c=v&1u; v>>=1; dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA730u; return dd3_static_complete(rt,5u);
        }
        case 0xA730u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=v&1u; v=(uint8_t)((v>>1)|(c<<7)); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA732u; return dd3_static_complete(rt,5u);
        }
        case 0xA732u: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA735u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0xA735u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA736u; return dd3_static_complete(rt,2u);
        }
        case 0xA736u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA737u; return dd3_static_complete(rt,2u);
        }
        case 0xA737u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA738u; return dd3_static_complete(rt,2u);
        }
        case 0xA738u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA739u; return dd3_static_complete(rt,2u);
        }
        case 0xA739u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA73Au; return dd3_static_complete(rt,2u);
        }
        case 0xA73Au: {
            uint8_t v=0x0Eu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA73Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA73Cu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA73Du; return dd3_static_complete(rt,2u);
        }
        case 0xA73Du: {
            uint16_t ea=(uint16_t)(0xA766u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA740u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA766u,ea)?1u:0u));
        }
        case 0xA740u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA742u; return dd3_static_complete(rt,3u);
        }
        case 0xA742u: {
            uint16_t ea=(uint16_t)(0xA767u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA745u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA767u,ea)?1u:0u));
        }
        case 0xA745u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA747u; return dd3_static_complete(rt,3u);
        }
        case 0xA747u: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x0029u); return dd3_static_complete(rt,5u);
        }
        case 0xA74Au: {
            dd3_static_push8(rt,(uint8_t)(0xA74Cu>>8)); dd3_static_push8(rt,(uint8_t)0xA74Cu);
            rt->state.cpu.pc=0xA7AFu; return dd3_static_complete(rt,6u);
        }
        case 0xA74Du: {
            dd3_static_push8(rt,(uint8_t)(0xA74Fu>>8)); dd3_static_push8(rt,(uint8_t)0xA74Fu);
            rt->state.cpu.pc=0xA7C5u; return dd3_static_complete(rt,6u);
        }
        case 0xA750u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA751u: {
            dd3_static_push8(rt,(uint8_t)(0xA753u>>8)); dd3_static_push8(rt,(uint8_t)0xA753u);
            rt->state.cpu.pc=0xA7AFu; return dd3_static_complete(rt,6u);
        }
        case 0xA754u: {
            dd3_static_push8(rt,(uint8_t)(0xA756u>>8)); dd3_static_push8(rt,(uint8_t)0xA756u);
            rt->state.cpu.pc=0xA7F1u; return dd3_static_complete(rt,6u);
        }
        case 0xA757u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA758u: {
            dd3_static_push8(rt,(uint8_t)(0xA75Au>>8)); dd3_static_push8(rt,(uint8_t)0xA75Au);
            rt->state.cpu.pc=0xA7DBu; return dd3_static_complete(rt,6u);
        }
        case 0xA75Bu: {
            dd3_static_push8(rt,(uint8_t)(0xA75Du>>8)); dd3_static_push8(rt,(uint8_t)0xA75Du);
            rt->state.cpu.pc=0xA7F1u; return dd3_static_complete(rt,6u);
        }
        case 0xA75Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA75Fu: {
            dd3_static_push8(rt,(uint8_t)(0xA761u>>8)); dd3_static_push8(rt,(uint8_t)0xA761u);
            rt->state.cpu.pc=0xA7DBu; return dd3_static_complete(rt,6u);
        }
        case 0xA762u: {
            dd3_static_push8(rt,(uint8_t)(0xA764u>>8)); dd3_static_push8(rt,(uint8_t)0xA764u);
            rt->state.cpu.pc=0xA7C5u; return dd3_static_complete(rt,6u);
        }
        case 0xA765u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA7AFu: {
            uint16_t ea=(uint16_t)(0x0334u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7B2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0334u,ea)?1u:0u));
        }
        case 0xA7B2u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA7B3u; return dd3_static_complete(rt,2u);
        }
        case 0xA7B3u: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA7B5u; return dd3_static_complete(rt,3u);
        }
        case 0xA7B5u: {
            dd3_static_write8(rt,(uint16_t)(0x0334u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA7B8u; return dd3_static_complete(rt,5u);
        }
        case 0xA7B8u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7BAu; return dd3_static_complete(rt,4u);
        }
        case 0xA7BAu: {
            uint16_t ea=0x30u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA7BCu; return dd3_static_complete(rt,3u);
        }
        case 0xA7BCu: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA7BEu; return dd3_static_complete(rt,4u);
        }
        case 0xA7BEu: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7C0u; return dd3_static_complete(rt,4u);
        }
        case 0xA7C0u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA7C2u; return dd3_static_complete(rt,2u);
        }
        case 0xA7C2u: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA7C4u; return dd3_static_complete(rt,4u);
        }
        case 0xA7C4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA7C5u: {
            uint16_t ea=(uint16_t)(0x032Au+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7C8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x032Au,ea)?1u:0u));
        }
        case 0xA7C8u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA7C9u; return dd3_static_complete(rt,2u);
        }
        case 0xA7C9u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA7CBu; return dd3_static_complete(rt,3u);
        }
        case 0xA7CBu: {
            dd3_static_write8(rt,(uint16_t)(0x032Au+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA7CEu; return dd3_static_complete(rt,5u);
        }
        case 0xA7CEu: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7D0u; return dd3_static_complete(rt,4u);
        }
        case 0xA7D0u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA7D2u; return dd3_static_complete(rt,3u);
        }
        case 0xA7D2u: {
            dd3_static_write8(rt,(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA7D4u; return dd3_static_complete(rt,4u);
        }
        case 0xA7D4u: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7D6u; return dd3_static_complete(rt,4u);
        }
        case 0xA7D6u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA7D8u; return dd3_static_complete(rt,2u);
        }
        case 0xA7D8u: {
            dd3_static_write8(rt,(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA7DAu; return dd3_static_complete(rt,4u);
        }
        case 0xA7DAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA7DBu: {
            uint16_t ea=(uint16_t)(0x0334u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7DEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0334u,ea)?1u:0u));
        }
        case 0xA7DEu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA7DFu; return dd3_static_complete(rt,2u);
        }
        case 0xA7DFu: {
            uint16_t ea=0x2Fu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA7E1u; return dd3_static_complete(rt,3u);
        }
        case 0xA7E1u: {
            dd3_static_write8(rt,(uint16_t)(0x0334u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA7E4u; return dd3_static_complete(rt,5u);
        }
        case 0xA7E4u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7E6u; return dd3_static_complete(rt,4u);
        }
        case 0xA7E6u: {
            uint16_t ea=0x30u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA7E8u; return dd3_static_complete(rt,3u);
        }
        case 0xA7E8u: {
            dd3_static_write8(rt,(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA7EAu; return dd3_static_complete(rt,4u);
        }
        case 0xA7EAu: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7ECu; return dd3_static_complete(rt,4u);
        }
        case 0xA7ECu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA7EEu; return dd3_static_complete(rt,2u);
        }
        case 0xA7EEu: {
            dd3_static_write8(rt,(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA7F0u; return dd3_static_complete(rt,4u);
        }
        case 0xA7F0u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA7F1u: {
            uint16_t ea=(uint16_t)(0x032Au+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7F4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x032Au,ea)?1u:0u));
        }
        case 0xA7F4u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA7F5u; return dd3_static_complete(rt,2u);
        }
        case 0xA7F5u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA7F7u; return dd3_static_complete(rt,3u);
        }
        case 0xA7F7u: {
            dd3_static_write8(rt,(uint16_t)(0x032Au+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA7FAu; return dd3_static_complete(rt,5u);
        }
        case 0xA7FAu: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA7FCu; return dd3_static_complete(rt,4u);
        }
        case 0xA7FCu: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA7FEu; return dd3_static_complete(rt,3u);
        }
        case 0xA7FEu: {
            dd3_static_write8(rt,(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA800u; return dd3_static_complete(rt,4u);
        }
        case 0xA800u: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA802u; return dd3_static_complete(rt,4u);
        }
        case 0xA802u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA804u; return dd3_static_complete(rt,2u);
        }
        case 0xA804u: {
            dd3_static_write8(rt,(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA806u; return dd3_static_complete(rt,4u);
        }
        case 0xA806u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA807u: {
            uint16_t ea=(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA809u; return dd3_static_complete(rt,6u);
        }
        case 0xA809u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA80Bu,0xA82Cu)) c++; rt->state.cpu.pc=0xA82Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA80Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA80Bu: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA80Du; return dd3_static_complete(rt,4u);
        }
        case 0xA80Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA80Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xA80Fu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA811u,0xA824u)) c++; rt->state.cpu.pc=0xA824u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA811u; return dd3_static_complete(rt,2u);
        }
        case 0xA811u: {
            uint8_t v=0xFEu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA813u; return dd3_static_complete(rt,2u);
        }
        case 0xA813u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA815u,0xA81Fu)) c++; rt->state.cpu.pc=0xA81Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA815u; return dd3_static_complete(rt,2u);
        }
        case 0xA815u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA817u; return dd3_static_complete(rt,2u);
        }
        case 0xA817u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA818u; return dd3_static_complete(rt,2u);
        }
        case 0xA818u: {
            dd3_static_write8(rt,(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA81Au; return dd3_static_complete(rt,4u);
        }
        case 0xA81Au: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA81Cu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xA81Cu: {
            rt->state.cpu.pc=0xA824u; return dd3_static_complete(rt,3u);
        }
        case 0xA81Fu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA821u; return dd3_static_complete(rt,2u);
        }
        case 0xA821u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA823u; return dd3_static_complete(rt,4u);
        }
        case 0xA823u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA824u: {
            dd3_static_write8(rt,(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA826u; return dd3_static_complete(rt,4u);
        }
        case 0xA826u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA828u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xA828u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA82Au; return dd3_static_complete(rt,4u);
        }
        case 0xA82Au: {
            uint16_t ea=(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xA82Cu; return dd3_static_complete(rt,6u);
        }
        case 0xA82Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA82Du: {
            dd3_static_push8(rt,(uint8_t)(0xA82Fu>>8)); dd3_static_push8(rt,(uint8_t)0xA82Fu);
            rt->state.cpu.pc=0xAA96u; return dd3_static_complete(rt,6u);
        }
        case 0xA830u: {
            dd3_static_push8(rt,(uint8_t)(0xA832u>>8)); dd3_static_push8(rt,(uint8_t)0xA832u);
            rt->state.cpu.pc=0xA64Eu; return dd3_static_complete(rt,6u);
        }
        case 0xA833u: {
            dd3_static_push8(rt,(uint8_t)(0xA835u>>8)); dd3_static_push8(rt,(uint8_t)0xA835u);
            rt->state.cpu.pc=0xA6B9u; return dd3_static_complete(rt,6u);
        }
        case 0xA836u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA837u: {
            dd3_static_write8(rt,0x1Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xA839u; return dd3_static_complete(rt,3u);
        }
        case 0xA839u: {
            uint16_t ea=(uint16_t)(0x045Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA83Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x045Du,ea)?1u:0u));
        }
        case 0xA83Cu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA83Du; return dd3_static_complete(rt,2u);
        }
        case 0xA83Du: {
            uint16_t ea=0x1Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA83Fu; return dd3_static_complete(rt,3u);
        }
        case 0xA83Fu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA841u,0xA843u)) c++; rt->state.cpu.pc=0xA843u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA841u; return dd3_static_complete(rt,2u);
        }
        case 0xA841u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA843u; return dd3_static_complete(rt,2u);
        }
        case 0xA843u: {
            dd3_static_write8(rt,(uint16_t)(0x045Du+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA846u; return dd3_static_complete(rt,5u);
        }
        case 0xA846u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA847u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA848u; return dd3_static_complete(rt,2u);
        }
        case 0xA848u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA849u; return dd3_static_complete(rt,3u);
        }
        case 0xA849u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA84Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0xA84Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA84Eu,0xA85Au)) c++; rt->state.cpu.pc=0xA85Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA84Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA84Eu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA850u; return dd3_static_complete(rt,2u);
        }
        case 0xA850u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA851u; return dd3_static_complete(rt,2u);
        }
        case 0xA851u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA853u; return dd3_static_complete(rt,2u);
        }
        case 0xA853u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA855u; return dd3_static_complete(rt,3u);
        }
        case 0xA855u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA857u; return dd3_static_complete(rt,3u);
        }
        case 0xA857u: {
            dd3_static_push8(rt,(uint8_t)(0xA859u>>8)); dd3_static_push8(rt,(uint8_t)0xA859u);
            rt->state.cpu.pc=0xA85Du; return dd3_static_complete(rt,6u);
        }
        case 0xA85Au: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA85Bu; return dd3_static_complete(rt,4u);
        }
        case 0xA85Bu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA85Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA85Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA85Du: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA85Fu; return dd3_static_complete(rt,3u);
        }
        case 0xA85Fu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA860u; return dd3_static_complete(rt,3u);
        }
        case 0xA860u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA862u; return dd3_static_complete(rt,4u);
        }
        case 0xA862u: {
            dd3_static_write8(rt,(uint16_t)(0x00CBu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA865u; return dd3_static_complete(rt,5u);
        }
        case 0xA865u: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA867u; return dd3_static_complete(rt,4u);
        }
        case 0xA867u: {
            dd3_static_write8(rt,(uint16_t)(0x00D5u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA86Au; return dd3_static_complete(rt,5u);
        }
        case 0xA86Au: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA86Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA86Cu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA86Eu; return dd3_static_complete(rt,3u);
        }
        case 0xA86Eu: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA870u; return dd3_static_complete(rt,4u);
        }
        case 0xA870u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA872u,0xA876u)) c++; rt->state.cpu.pc=0xA876u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA872u; return dd3_static_complete(rt,2u);
        }
        case 0xA872u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA874u; return dd3_static_complete(rt,2u);
        }
        case 0xA874u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA876u; return dd3_static_complete(rt,3u);
        }
        case 0xA876u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA878u; return dd3_static_complete(rt,3u);
        }
        case 0xA878u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA87Bu; return dd3_static_complete(rt,5u);
        }
        case 0xA87Bu: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA87Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0xA87Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0382u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA881u; return dd3_static_complete(rt,5u);
        }
        case 0xA881u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA882u; return dd3_static_complete(rt,4u);
        }
        case 0xA882u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA884u; return dd3_static_complete(rt,3u);
        }
        case 0xA884u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA886u; return dd3_static_complete(rt,4u);
        }
        case 0xA886u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA887u; return dd3_static_complete(rt,2u);
        }
        case 0xA887u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA889u; return dd3_static_complete(rt,3u);
        }
        case 0xA889u: {
            dd3_static_write8(rt,(uint16_t)(0x00B7u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA88Cu; return dd3_static_complete(rt,5u);
        }
        case 0xA88Cu: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA88Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA88Eu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA890u; return dd3_static_complete(rt,2u);
        }
        case 0xA890u: {
            dd3_static_write8(rt,(uint16_t)(0x00C1u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA893u; return dd3_static_complete(rt,5u);
        }
        case 0xA893u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA895u; return dd3_static_complete(rt,3u);
        }
        case 0xA895u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA897u,0xA8A0u)) c++; rt->state.cpu.pc=0xA8A0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA897u; return dd3_static_complete(rt,2u);
        }
        case 0xA897u: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA89Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0xA89Au: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA89Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA89Bu: {
            uint8_t v=0xFFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA89Du; return dd3_static_complete(rt,2u);
        }
        case 0xA89Du: {
            dd3_static_write8(rt,(uint16_t)(0x00C1u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA8A0u; return dd3_static_complete(rt,5u);
        }
        case 0xA8A0u: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8A2u; return dd3_static_complete(rt,4u);
        }
        case 0xA8A2u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA8A3u; return dd3_static_complete(rt,2u);
        }
        case 0xA8A3u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA8A5u; return dd3_static_complete(rt,3u);
        }
        case 0xA8A5u: {
            dd3_static_write8(rt,(uint16_t)(0x00DFu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA8A8u; return dd3_static_complete(rt,5u);
        }
        case 0xA8A8u: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8AAu; return dd3_static_complete(rt,4u);
        }
        case 0xA8AAu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA8ACu; return dd3_static_complete(rt,2u);
        }
        case 0xA8ACu: {
            dd3_static_write8(rt,(uint16_t)(0x00E9u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA8AFu; return dd3_static_complete(rt,5u);
        }
        case 0xA8AFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA8B0u: {
            uint16_t ea=(uint16_t)((0x54u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8B2u; return dd3_static_complete(rt,4u);
        }
        case 0xA8B2u: {
            uint8_t v=0x10u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8B4u; return dd3_static_complete(rt,2u);
        }
        case 0xA8B4u: {
            dd3_static_write8(rt,(uint16_t)((0x54u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA8B6u; return dd3_static_complete(rt,4u);
        }
        case 0xA8B6u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xA8B8u; return dd3_static_complete(rt,2u);
        }
        case 0xA8B8u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA8BAu,0xA8D8u)) c++; rt->state.cpu.pc=0xA8D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8BAu; return dd3_static_complete(rt,2u);
        }
        case 0xA8BAu: {
            uint16_t ea=0x03EBu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8BDu; return dd3_static_complete(rt,4u);
        }
        case 0xA8BDu: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8BFu; return dd3_static_complete(rt,2u);
        }
        case 0xA8BFu: {
            dd3_static_write8(rt,0x03EBu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8C2u; return dd3_static_complete(rt,4u);
        }
        case 0xA8C2u: {
            uint16_t ea=0x03ECu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8C5u; return dd3_static_complete(rt,4u);
        }
        case 0xA8C5u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8C7u; return dd3_static_complete(rt,2u);
        }
        case 0xA8C7u: {
            dd3_static_write8(rt,0x03ECu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8CAu; return dd3_static_complete(rt,4u);
        }
        case 0xA8CAu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA8CCu,0xA8D8u)) c++; rt->state.cpu.pc=0xA8D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,2u);
        }
        case 0xA8CCu: {
            uint16_t ea=(uint16_t)((0x54u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8CEu; return dd3_static_complete(rt,4u);
        }
        case 0xA8CEu: {
            uint8_t v=0xEFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8D0u; return dd3_static_complete(rt,2u);
        }
        case 0xA8D0u: {
            dd3_static_write8(rt,(uint16_t)((0x54u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA8D2u; return dd3_static_complete(rt,4u);
        }
        case 0xA8D2u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8D4u; return dd3_static_complete(rt,4u);
        }
        case 0xA8D4u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8D6u; return dd3_static_complete(rt,2u);
        }
        case 0xA8D6u: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA8D8u; return dd3_static_complete(rt,4u);
        }
        case 0xA8D8u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8DAu; return dd3_static_complete(rt,4u);
        }
        case 0xA8DAu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8DCu; return dd3_static_complete(rt,2u);
        }
        case 0xA8DCu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA8DEu; return dd3_static_complete(rt,4u);
        }
        case 0xA8DEu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8E0u; return dd3_static_complete(rt,2u);
        }
        case 0xA8E0u: {
            dd3_static_write8(rt,(uint16_t)((0x58u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA8E2u; return dd3_static_complete(rt,4u);
        }
        case 0xA8E2u: {
            dd3_static_write8(rt,(uint16_t)((0x60u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA8E4u; return dd3_static_complete(rt,4u);
        }
        case 0xA8E4u: {
            dd3_static_write8(rt,(uint16_t)(0x033Eu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA8E7u; return dd3_static_complete(rt,5u);
        }
        case 0xA8E7u: {
            dd3_static_write8(rt,(uint16_t)(0x0359u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA8EAu; return dd3_static_complete(rt,5u);
        }
        case 0xA8EAu: {
            uint16_t ea=0x03EBu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8EDu; return dd3_static_complete(rt,4u);
        }
        case 0xA8EDu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8EFu; return dd3_static_complete(rt,2u);
        }
        case 0xA8EFu: {
            dd3_static_write8(rt,0x03EBu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8F2u; return dd3_static_complete(rt,4u);
        }
        case 0xA8F2u: {
            uint16_t ea=0x03ECu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8F5u; return dd3_static_complete(rt,4u);
        }
        case 0xA8F5u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8F7u; return dd3_static_complete(rt,2u);
        }
        case 0xA8F7u: {
            dd3_static_write8(rt,0x03ECu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA8FAu; return dd3_static_complete(rt,4u);
        }
        case 0xA8FAu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA8FCu; return dd3_static_complete(rt,2u);
        }
        case 0xA8FCu: {
            dd3_static_write8(rt,(uint16_t)(0x0350u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA8FFu; return dd3_static_complete(rt,5u);
        }
        case 0xA8FFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA900u: {
            dd3_static_push8(rt,(uint8_t)(0xA902u>>8)); dd3_static_push8(rt,(uint8_t)0xA902u);
            rt->state.cpu.pc=0xA8CCu; return dd3_static_complete(rt,6u);
        }
        case 0xA903u: {
            rt->state.cpu.pc=0xA909u; return dd3_static_complete(rt,3u);
        }
        case 0xA906u: {
            dd3_static_push8(rt,(uint8_t)(0xA908u>>8)); dd3_static_push8(rt,(uint8_t)0xA908u);
            rt->state.cpu.pc=0xA8B0u; return dd3_static_complete(rt,6u);
        }
        case 0xA909u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA90Bu; return dd3_static_complete(rt,4u);
        }
        case 0xA90Bu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA90Du; return dd3_static_complete(rt,2u);
        }
        case 0xA90Du: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA90Fu; return dd3_static_complete(rt,4u);
        }
        case 0xA90Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA910u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA911u; return dd3_static_complete(rt,2u);
        }
        case 0xA911u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA912u; return dd3_static_complete(rt,3u);
        }
        case 0xA912u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA914u; return dd3_static_complete(rt,2u);
        }
        case 0xA914u: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA917u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0xA917u: {
            uint8_t v=0x80u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA919u; return dd3_static_complete(rt,2u);
        }
        case 0xA919u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA91Bu,0xA91Du)) c++; rt->state.cpu.pc=0xA91Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA91Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA91Bu: {
            uint8_t v=0x80u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA91Du; return dd3_static_complete(rt,2u);
        }
        case 0xA91Du: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.y);
            rt->state.cpu.pc=0xA91Fu; return dd3_static_complete(rt,4u);
        }
        case 0xA91Fu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA920u; return dd3_static_complete(rt,4u);
        }
        case 0xA920u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA921u; return dd3_static_complete(rt,2u);
        }
        case 0xA921u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA922u: {
            dd3_static_push8(rt,(uint8_t)(0xA924u>>8)); dd3_static_push8(rt,(uint8_t)0xA924u);
            rt->state.cpu.pc=0xA910u; return dd3_static_complete(rt,6u);
        }
        case 0xA925u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA927u; return dd3_static_complete(rt,4u);
        }
        case 0xA927u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA929u; return dd3_static_complete(rt,2u);
        }
        case 0xA929u: {
            dd3_static_write8(rt,(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA92Bu; return dd3_static_complete(rt,4u);
        }
        case 0xA92Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA92Cu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xA92Eu; return dd3_static_complete(rt,2u);
        }
        case 0xA92Eu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA930u,0xA935u)) c++; rt->state.cpu.pc=0xA935u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA930u; return dd3_static_complete(rt,2u);
        }
        case 0xA930u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA932u; return dd3_static_complete(rt,4u);
        }
        case 0xA932u: {
            dd3_static_write8(rt,0x03C4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA935u; return dd3_static_complete(rt,4u);
        }
        case 0xA935u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA936u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xA938u; return dd3_static_complete(rt,2u);
        }
        case 0xA938u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA93Au,0xA948u)) c++; rt->state.cpu.pc=0xA948u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA93Au; return dd3_static_complete(rt,2u);
        }
        case 0xA93Au: {
            uint16_t ea=(uint16_t)(0x0347u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA93Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0347u,ea)?1u:0u));
        }
        case 0xA93Du: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA93Fu,0xA948u)) c++; rt->state.cpu.pc=0xA948u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA93Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA93Fu: {
            uint8_t v=0xF9u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA941u; return dd3_static_complete(rt,2u);
        }
        case 0xA941u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA943u,0xA948u)) c++; rt->state.cpu.pc=0xA948u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA943u; return dd3_static_complete(rt,2u);
        }
        case 0xA943u: {
            uint8_t v=0xF9u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA945u; return dd3_static_complete(rt,2u);
        }
        case 0xA945u: {
            dd3_static_write8(rt,(uint16_t)(0x0347u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA948u; return dd3_static_complete(rt,5u);
        }
        case 0xA948u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA949u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA94Au; return dd3_static_complete(rt,2u);
        }
        case 0xA94Au: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA94Bu; return dd3_static_complete(rt,3u);
        }
        case 0xA94Bu: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA94Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0xA94Eu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA950u,0xA953u)) c++; rt->state.cpu.pc=0xA953u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA950u; return dd3_static_complete(rt,2u);
        }
        case 0xA950u: {
            rt->state.cpu.pc=0xA9BEu; return dd3_static_complete(rt,3u);
        }
        case 0xA953u: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA956u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0xA956u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA958u; return dd3_static_complete(rt,2u);
        }
        case 0xA958u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA95Au; return dd3_static_complete(rt,2u);
        }
        case 0xA95Au: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA95Cu,0xA9BEu)) c++; rt->state.cpu.pc=0xA9BEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA95Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA95Cu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA95Du; return dd3_static_complete(rt,2u);
        }
        case 0xA95Du: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA95Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA95Fu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA960u; return dd3_static_complete(rt,2u);
        }
        case 0xA960u: {
            uint16_t ea=(uint16_t)(0xA9C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA963u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA9C1u,ea)?1u:0u));
        }
        case 0xA963u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA965u,0xA9B1u)) c++; rt->state.cpu.pc=0xA9B1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA965u; return dd3_static_complete(rt,2u);
        }
        case 0xA965u: {
            dd3_static_push8(rt,(uint8_t)(0xA967u>>8)); dd3_static_push8(rt,(uint8_t)0xA967u);
            rt->state.cpu.pc=0xAA75u; return dd3_static_complete(rt,6u);
        }
        case 0xA968u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA969u; return dd3_static_complete(rt,2u);
        }
        case 0xA969u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA96Bu; return dd3_static_complete(rt,4u);
        }
        case 0xA96Bu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA96Du; return dd3_static_complete(rt,2u);
        }
        case 0xA96Du: {
            uint8_t v=0x58u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA96Fu; return dd3_static_complete(rt,2u);
        }
        case 0xA96Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA971u,0xA974u)) c++; rt->state.cpu.pc=0xA974u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA971u; return dd3_static_complete(rt,2u);
        }
        case 0xA971u: {
            dd3_static_push8(rt,(uint8_t)(0xA973u>>8)); dd3_static_push8(rt,(uint8_t)0xA973u);
            rt->state.cpu.pc=0xAA68u; return dd3_static_complete(rt,6u);
        }
        case 0xA974u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA976u; return dd3_static_complete(rt,2u);
        }
        case 0xA976u: {
            dd3_static_write8(rt,(uint16_t)(0x0481u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xA979u; return dd3_static_complete(rt,5u);
        }
        case 0xA979u: {
            dd3_static_write8(rt,(uint16_t)(0x03B8u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA97Cu; return dd3_static_complete(rt,5u);
        }
        case 0xA97Cu: {
            dd3_static_push8(rt,(uint8_t)(0xA97Eu>>8)); dd3_static_push8(rt,(uint8_t)0xA97Eu);
            rt->state.cpu.pc=0x9469u; return dd3_static_complete(rt,6u);
        }
        case 0xA97Fu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA981u; return dd3_static_complete(rt,2u);
        }
        case 0xA981u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA983u; return dd3_static_complete(rt,3u);
        }
        case 0xA983u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xA985u; return dd3_static_complete(rt,3u);
        }
        case 0xA985u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA987u; return dd3_static_complete(rt,4u);
        }
        case 0xA987u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA989u,0xA98Du)) c++; rt->state.cpu.pc=0xA98Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA989u; return dd3_static_complete(rt,2u);
        }
        case 0xA989u: {
            uint8_t v=0xF0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA98Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA98Bu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA98Du; return dd3_static_complete(rt,3u);
        }
        case 0xA98Du: {
            dd3_static_push8(rt,(uint8_t)(0xA98Fu>>8)); dd3_static_push8(rt,(uint8_t)0xA98Fu);
            rt->state.cpu.pc=0xA85Du; return dd3_static_complete(rt,6u);
        }
        case 0xA990u: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA993u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0xA993u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA994u; return dd3_static_complete(rt,2u);
        }
        case 0xA994u: {
            uint8_t v=0x80u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA996u; return dd3_static_complete(rt,2u);
        }
        case 0xA996u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA999u; return dd3_static_complete(rt,5u);
        }
        case 0xA999u: {
            uint8_t v=0x1Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA99Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA99Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA99Eu; return dd3_static_complete(rt,5u);
        }
        case 0xA99Eu: {
            uint16_t ea=(uint16_t)(0x0074u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9A1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0074u,ea)?1u:0u));
        }
        case 0xA9A1u: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA9A3u; return dd3_static_complete(rt,2u);
        }
        case 0xA9A3u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA9A5u,0xA9BEu)) c++; rt->state.cpu.pc=0xA9BEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9A5u; return dd3_static_complete(rt,2u);
        }
        case 0xA9A5u: {
            uint8_t v=0x6Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9A7u; return dd3_static_complete(rt,2u);
        }
        case 0xA9A7u: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA9AAu; return dd3_static_complete(rt,5u);
        }
        case 0xA9AAu: {
            uint8_t v=0x82u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9ACu; return dd3_static_complete(rt,2u);
        }
        case 0xA9ACu: {
            dd3_static_write8(rt,(uint16_t)(0x003Cu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xA9AFu; return dd3_static_complete(rt,5u);
        }
        case 0xA9AFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA9B1u,0xA9BEu)) c++; rt->state.cpu.pc=0xA9BEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9B1u; return dd3_static_complete(rt,2u);
        }
        case 0xA9B1u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xA9B3u; return dd3_static_complete(rt,2u);
        }
        case 0xA9B3u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xA9B5u,0xA9BEu)) c++; rt->state.cpu.pc=0xA9BEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9B5u; return dd3_static_complete(rt,2u);
        }
        case 0xA9B5u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9B8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0xA9B8u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA9BAu; return dd3_static_complete(rt,2u);
        }
        case 0xA9BAu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA9BBu; return dd3_static_complete(rt,2u);
        }
        case 0xA9BBu: {
            dd3_static_push8(rt,(uint8_t)(0xA9BDu>>8)); dd3_static_push8(rt,(uint8_t)0xA9BDu);
            rt->state.cpu.pc=0x8CCBu; return dd3_static_complete(rt,6u);
        }
        case 0xA9BEu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA9BFu; return dd3_static_complete(rt,4u);
        }
        case 0xA9BFu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA9C0u; return dd3_static_complete(rt,2u);
        }
        case 0xA9C0u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA9CAu: {
            uint8_t v=0x04u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9CCu; return dd3_static_complete(rt,2u);
        }
        case 0xA9CCu: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9CEu; return dd3_static_complete(rt,4u);
        }
        case 0xA9CEu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA9D0u,0xAA41u)) c++; rt->state.cpu.pc=0xAA41u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9D0u; return dd3_static_complete(rt,2u);
        }
        case 0xA9D0u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9D2u; return dd3_static_complete(rt,4u);
        }
        case 0xA9D2u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA9D4u; return dd3_static_complete(rt,2u);
        }
        case 0xA9D4u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA9D6u; return dd3_static_complete(rt,2u);
        }
        case 0xA9D6u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA9D8u,0xAA41u)) c++; rt->state.cpu.pc=0xAA41u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9D8u; return dd3_static_complete(rt,2u);
        }
        case 0xA9D8u: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9DAu; return dd3_static_complete(rt,4u);
        }
        case 0xA9DAu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA9DCu; return dd3_static_complete(rt,2u);
        }
        case 0xA9DCu: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA9DEu; return dd3_static_complete(rt,2u);
        }
        case 0xA9DEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA9E0u,0xAA41u)) c++; rt->state.cpu.pc=0xAA41u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9E0u; return dd3_static_complete(rt,2u);
        }
        case 0xA9E0u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9E2u; return dd3_static_complete(rt,4u);
        }
        case 0xA9E2u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA9E4u; return dd3_static_complete(rt,2u);
        }
        case 0xA9E4u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA9E6u,0xAA41u)) c++; rt->state.cpu.pc=0xAA41u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA9E6u; return dd3_static_complete(rt,2u);
        }
        case 0xA9E6u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9E8u; return dd3_static_complete(rt,4u);
        }
        case 0xA9E8u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA9E9u; return dd3_static_complete(rt,2u);
        }
        case 0xA9E9u: {
            uint16_t ea=(uint16_t)((0xDFu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA9EBu; return dd3_static_complete(rt,4u);
        }
        case 0xA9EBu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA9EDu; return dd3_static_complete(rt,3u);
        }
        case 0xA9EDu: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9EFu; return dd3_static_complete(rt,4u);
        }
        case 0xA9EFu: {
            uint16_t ea=(uint16_t)((0xE9u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xA9F1u; return dd3_static_complete(rt,4u);
        }
        case 0xA9F1u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xA9F3u; return dd3_static_complete(rt,3u);
        }
        case 0xA9F3u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9F5u; return dd3_static_complete(rt,3u);
        }
        case 0xA9F5u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA9F6u; return dd3_static_complete(rt,2u);
        }
        case 0xA9F6u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA9F8u; return dd3_static_complete(rt,4u);
        }
        case 0xA9F8u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xA9FAu; return dd3_static_complete(rt,3u);
        }
        case 0xA9FAu: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA9FCu; return dd3_static_complete(rt,3u);
        }
        case 0xA9FCu: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xA9FEu; return dd3_static_complete(rt,4u);
        }
        case 0xA9FEu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA00u; return dd3_static_complete(rt,3u);
        }
        case 0xAA00u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAA02u,0xAA05u)) c++; rt->state.cpu.pc=0xAA05u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA02u; return dd3_static_complete(rt,2u);
        }
        case 0xAA02u: {
            dd3_static_push8(rt,(uint8_t)(0xAA04u>>8)); dd3_static_push8(rt,(uint8_t)0xAA04u);
            rt->state.cpu.pc=0xAA4Au; return dd3_static_complete(rt,6u);
        }
        case 0xAA05u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA07u; return dd3_static_complete(rt,4u);
        }
        case 0xAA07u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xAA08u; return dd3_static_complete(rt,2u);
        }
        case 0xAA08u: {
            uint16_t ea=0x87u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xAA0Au; return dd3_static_complete(rt,3u);
        }
        case 0xAA0Au: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA0Cu; return dd3_static_complete(rt,3u);
        }
        case 0xAA0Cu: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA0Eu; return dd3_static_complete(rt,4u);
        }
        case 0xAA0Eu: {
            uint16_t ea=0x88u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xAA10u; return dd3_static_complete(rt,3u);
        }
        case 0xAA10u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA12u; return dd3_static_complete(rt,3u);
        }
        case 0xAA12u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAA14u,0xAA1Bu)) c++; rt->state.cpu.pc=0xAA1Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA14u; return dd3_static_complete(rt,2u);
        }
        case 0xAA14u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAA16u,0xAA1Bu)) c++; rt->state.cpu.pc=0xAA1Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA16u; return dd3_static_complete(rt,2u);
        }
        case 0xAA16u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xAA18u; return dd3_static_complete(rt,5u);
        }
        case 0xAA18u: {
            dd3_static_push8(rt,(uint8_t)(0xAA1Au>>8)); dd3_static_push8(rt,(uint8_t)0xAA1Au);
            rt->state.cpu.pc=0xAA4Au; return dd3_static_complete(rt,6u);
        }
        case 0xAA1Bu: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA1Du; return dd3_static_complete(rt,3u);
        }
        case 0xAA1Du: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xAA1Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAA1Eu: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xAA20u; return dd3_static_complete(rt,3u);
        }
        case 0xAA20u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA22u; return dd3_static_complete(rt,3u);
        }
        case 0xAA22u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA24u; return dd3_static_complete(rt,3u);
        }
        case 0xAA24u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xAA26u; return dd3_static_complete(rt,3u);
        }
        case 0xAA26u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA28u; return dd3_static_complete(rt,3u);
        }
        case 0xAA28u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAA2Au,0xAA2Du)) c++; rt->state.cpu.pc=0xAA2Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA2Au; return dd3_static_complete(rt,2u);
        }
        case 0xAA2Au: {
            dd3_static_push8(rt,(uint8_t)(0xAA2Cu>>8)); dd3_static_push8(rt,(uint8_t)0xAA2Cu);
            rt->state.cpu.pc=0xAA4Au; return dd3_static_complete(rt,6u);
        }
        case 0xAA2Du: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA2Fu; return dd3_static_complete(rt,3u);
        }
        case 0xAA2Fu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xAA30u; return dd3_static_complete(rt,2u);
        }
        case 0xAA30u: {
            uint16_t ea=0x89u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xAA32u; return dd3_static_complete(rt,3u);
        }
        case 0xAA32u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA34u; return dd3_static_complete(rt,3u);
        }
        case 0xAA34u: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA36u; return dd3_static_complete(rt,3u);
        }
        case 0xAA36u: {
            uint16_t ea=0x8Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xAA38u; return dd3_static_complete(rt,3u);
        }
        case 0xAA38u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA3Au; return dd3_static_complete(rt,3u);
        }
        case 0xAA3Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAA3Cu,0xAA41u)) c++; rt->state.cpu.pc=0xAA41u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA3Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAA3Cu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAA3Eu,0xAA41u)) c++; rt->state.cpu.pc=0xAA41u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA3Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAA3Eu: {
            dd3_static_push8(rt,(uint8_t)(0xAA40u>>8)); dd3_static_push8(rt,(uint8_t)0xAA40u);
            rt->state.cpu.pc=0xAA4Au; return dd3_static_complete(rt,6u);
        }
        case 0xAA41u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xAA42u; return dd3_static_complete(rt,2u);
        }
        case 0xAA42u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xAA44u; return dd3_static_complete(rt,2u);
        }
        case 0xAA44u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAA46u,0xAA49u)) c++; rt->state.cpu.pc=0xAA49u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA46u; return dd3_static_complete(rt,2u);
        }
        case 0xAA46u: {
            rt->state.cpu.pc=0xA9CCu; return dd3_static_complete(rt,3u);
        }
        case 0xAA49u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAA4Au: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA4Cu; return dd3_static_complete(rt,3u);
        }
        case 0xAA4Cu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xAA4Du; return dd3_static_complete(rt,2u);
        }
        case 0xAA4Du: {
            uint8_t v=0x60u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xAA4Fu; return dd3_static_complete(rt,2u);
        }
        case 0xAA4Fu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA51u; return dd3_static_complete(rt,3u);
        }
        case 0xAA51u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xAA53u; return dd3_static_complete(rt,2u);
        }
        case 0xAA53u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAA55u,0xAA58u)) c++; rt->state.cpu.pc=0xAA58u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA55u; return dd3_static_complete(rt,2u);
        }
        case 0xAA55u: {
            dd3_static_push8(rt,(uint8_t)(0xAA57u>>8)); dd3_static_push8(rt,(uint8_t)0xAA57u);
            rt->state.cpu.pc=0xA2B3u; return dd3_static_complete(rt,6u);
        }
        case 0xAA58u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAA59u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA5Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0xAA5Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAA5Eu,0xAA67u)) c++; rt->state.cpu.pc=0xAA67u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA5Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAA5Eu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA60u; return dd3_static_complete(rt,2u);
        }
        case 0xAA60u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAA62u; return dd3_static_complete(rt,2u);
        }
        case 0xAA62u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAA64u,0xAA67u)) c++; rt->state.cpu.pc=0xAA67u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA64u; return dd3_static_complete(rt,2u);
        }
        case 0xAA64u: {
            dd3_static_push8(rt,(uint8_t)(0xAA66u>>8)); dd3_static_push8(rt,(uint8_t)0xAA66u);
            rt->state.cpu.pc=0xA949u; return dd3_static_complete(rt,6u);
        }
        case 0xAA67u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAA68u: {
            uint16_t ea=(uint16_t)(0x0382u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA6Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0382u,ea)?1u:0u));
        }
        case 0xAA6Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0382u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xAA6Eu; return dd3_static_complete(rt,5u);
        }
        case 0xAA6Eu: {
            uint16_t ea=(uint16_t)(0x038Bu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA71u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x038Bu,ea)?1u:0u));
        }
        case 0xAA71u: {
            dd3_static_write8(rt,(uint16_t)(0x038Bu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xAA74u; return dd3_static_complete(rt,5u);
        }
        case 0xAA74u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAA75u: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA78u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0xAA78u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA7Au; return dd3_static_complete(rt,2u);
        }
        case 0xAA7Au: {
            dd3_static_write8(rt,(uint16_t)(0x0485u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAA7Du; return dd3_static_complete(rt,5u);
        }
        case 0xAA7Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAA85u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA87u; return dd3_static_complete(rt,4u);
        }
        case 0xAA87u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xAA88u; return dd3_static_complete(rt,2u);
        }
        case 0xAA88u: {
            uint16_t ea=(uint16_t)(0x00CBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xAA8Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00CBu,ea)?1u:0u));
        }
        case 0xAA8Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAA8Du,0xAA95u)) c++; rt->state.cpu.pc=0xAA95u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA8Du; return dd3_static_complete(rt,2u);
        }
        case 0xAA8Du: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xAA8Fu; return dd3_static_complete(rt,6u);
        }
        case 0xAA8Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAA91u,0xAA95u)) c++; rt->state.cpu.pc=0xAA95u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAA91u; return dd3_static_complete(rt,2u);
        }
        case 0xAA91u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xAA93u; return dd3_static_complete(rt,6u);
        }
        case 0xAA93u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xAA95u; return dd3_static_complete(rt,6u);
        }
        case 0xAA95u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAA96u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA97u; return dd3_static_complete(rt,2u);
        }
        case 0xAA97u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA98u; return dd3_static_complete(rt,2u);
        }
        case 0xAA98u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAA99u; return dd3_static_complete(rt,2u);
        }
        case 0xAA99u: {
            uint16_t ea=(uint16_t)(0xAAB4u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAA9Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAAB4u,ea)?1u:0u));
        }
        case 0xAA9Cu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAA9Eu; return dd3_static_complete(rt,3u);
        }
        case 0xAA9Eu: {
            uint16_t ea=(uint16_t)(0xAAB5u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAA1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAAB5u,ea)?1u:0u));
        }
        case 0xAAA1u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xAAA3u; return dd3_static_complete(rt,3u);
        }
        case 0xAAA3u: {
            uint16_t ea=(uint16_t)(0xAAB6u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAA6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAAB6u,ea)?1u:0u));
        }
        case 0xAAA6u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAAA8u; return dd3_static_complete(rt,3u);
        }
        case 0xAAA8u: {
            uint16_t ea=(uint16_t)(0xAAB7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAAABu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAAB7u,ea)?1u:0u));
        }
        case 0xAAABu: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAAADu; return dd3_static_complete(rt,3u);
        }
        case 0xAAADu: {
            dd3_static_push8(rt,(uint8_t)(0xAAAFu>>8)); dd3_static_push8(rt,(uint8_t)0xAAAFu);
            rt->state.cpu.pc=0xA807u; return dd3_static_complete(rt,6u);
        }
        case 0xAAB0u: {
            dd3_static_push8(rt,(uint8_t)(0xAAB2u>>8)); dd3_static_push8(rt,(uint8_t)0xAAB2u);
            rt->state.cpu.pc=0xA63Du; return dd3_static_complete(rt,6u);
        }
        case 0xAAB3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xABB4u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xABB6u; return dd3_static_complete(rt,3u);
        }
        case 0xABB6u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xABB7u; return dd3_static_complete(rt,2u);
        }
        case 0xABB7u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xABB8u; return dd3_static_complete(rt,3u);
        }
        case 0xABB8u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABBAu; return dd3_static_complete(rt,3u);
        }
        case 0xABBAu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xABBCu; return dd3_static_complete(rt,2u);
        }
        case 0xABBCu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xABBEu,0xAC1Au)) c++; rt->state.cpu.pc=0xAC1Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xABBEu; return dd3_static_complete(rt,2u);
        }
        case 0xABBEu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xABBFu; return dd3_static_complete(rt,2u);
        }
        case 0xABBFu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xABC0u; return dd3_static_complete(rt,2u);
        }
        case 0xABC0u: {
            uint16_t ea=(uint16_t)(0xAC22u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABC3u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAC22u,ea)?1u:0u));
        }
        case 0xABC3u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xABC5u; return dd3_static_complete(rt,3u);
        }
        case 0xABC5u: {
            uint16_t ea=(uint16_t)(0xAC23u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABC8u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAC23u,ea)?1u:0u));
        }
        case 0xABC8u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xABCAu; return dd3_static_complete(rt,3u);
        }
        case 0xABCAu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABCCu; return dd3_static_complete(rt,4u);
        }
        case 0xABCCu: {
            uint8_t v=0x10u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xABCEu; return dd3_static_complete(rt,2u);
        }
        case 0xABCEu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xABD0u,0xABE0u)) c++; rt->state.cpu.pc=0xABE0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xABD0u; return dd3_static_complete(rt,2u);
        }
        case 0xABD0u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xABD2u; return dd3_static_complete(rt,2u);
        }
        case 0xABD2u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xABD4u,0xABD8u)) c++; rt->state.cpu.pc=0xABD8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xABD4u; return dd3_static_complete(rt,2u);
        }
        case 0xABD4u: {
            uint8_t v=0x1Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xABD6u; return dd3_static_complete(rt,2u);
        }
        case 0xABD6u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xABD8u,0xABDDu)) c++; rt->state.cpu.pc=0xABDDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xABD8u; return dd3_static_complete(rt,2u);
        }
        case 0xABD8u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xABD9u; return dd3_static_complete(rt,2u);
        }
        case 0xABD9u: {
            uint8_t v=0x09u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xABDBu; return dd3_static_complete(rt,2u);
        }
        case 0xABDBu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xABDDu,0xABE0u)) c++; rt->state.cpu.pc=0xABE0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xABDDu; return dd3_static_complete(rt,2u);
        }
        case 0xABDDu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xABDEu; return dd3_static_complete(rt,2u);
        }
        case 0xABDEu: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xABE0u; return dd3_static_complete(rt,2u);
        }
        case 0xABE0u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xABE1u; return dd3_static_complete(rt,2u);
        }
        case 0xABE1u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABE3u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xABE3u: {
            dd3_static_write8(rt,(uint16_t)(0x06DBu+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xABE6u; return dd3_static_complete(rt,5u);
        }
        case 0xABE6u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABE8u; return dd3_static_complete(rt,4u);
        }
        case 0xABE8u: {
            uint8_t v=0x03u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABEAu; return dd3_static_complete(rt,2u);
        }
        case 0xABEAu: {
            uint8_t v=0x1Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xABECu; return dd3_static_complete(rt,2u);
        }
        case 0xABECu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xABEEu,0xAC00u)) c++; rt->state.cpu.pc=0xAC00u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xABEEu; return dd3_static_complete(rt,2u);
        }
        case 0xABEEu: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABF0u; return dd3_static_complete(rt,2u);
        }
        case 0xABF0u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xABF2u; return dd3_static_complete(rt,2u);
        }
        case 0xABF2u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xABF4u,0xAC00u)) c++; rt->state.cpu.pc=0xAC00u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xABF4u; return dd3_static_complete(rt,2u);
        }
        case 0xABF4u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABF6u; return dd3_static_complete(rt,2u);
        }
        case 0xABF6u: {
            uint8_t v=0x0Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xABF8u; return dd3_static_complete(rt,2u);
        }
        case 0xABF8u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xABFAu,0xAC00u)) c++; rt->state.cpu.pc=0xAC00u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xABFAu; return dd3_static_complete(rt,2u);
        }
        case 0xABFAu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xABFCu; return dd3_static_complete(rt,2u);
        }
        case 0xABFCu: {
            uint8_t v=0x07u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xABFEu; return dd3_static_complete(rt,2u);
        }
        case 0xABFEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAC00u,0xAC09u)) c++; rt->state.cpu.pc=0xAC09u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC00u; return dd3_static_complete(rt,2u);
        }
        case 0xAC00u: {
            uint16_t ea=(uint16_t)(0xADD3u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC03u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xADD3u,ea)?1u:0u));
        }
        case 0xAC03u: {
            dd3_static_write8(rt,0x06DEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC06u; return dd3_static_complete(rt,4u);
        }
        case 0xAC06u: {
            rt->state.cpu.pc=0xAC1Au; return dd3_static_complete(rt,3u);
        }
        case 0xAC09u: {
            uint8_t v=0x14u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAC0Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAC0Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAC0Du,0xAC1Au)) c++; rt->state.cpu.pc=0xAC1Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC0Du; return dd3_static_complete(rt,2u);
        }
        case 0xAC0Du: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC0Fu; return dd3_static_complete(rt,4u);
        }
        case 0xAC0Fu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC11u; return dd3_static_complete(rt,2u);
        }
        case 0xAC11u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAC13u; return dd3_static_complete(rt,2u);
        }
        case 0xAC13u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAC15u,0xAC1Au)) c++; rt->state.cpu.pc=0xAC1Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAC15u; return dd3_static_complete(rt,2u);
        }
        case 0xAC15u: {
            uint8_t v=0x7Du;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC17u; return dd3_static_complete(rt,2u);
        }
        case 0xAC17u: {
            dd3_static_write8(rt,0x06DCu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC1Au; return dd3_static_complete(rt,4u);
        }
        case 0xAC1Au: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAC1Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAC1Cu: {
            dd3_static_write8(rt,0x06DAu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC1Fu; return dd3_static_complete(rt,4u);
        }
        case 0xAC1Fu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAC20u; return dd3_static_complete(rt,4u);
        }
        case 0xAC20u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAC21u; return dd3_static_complete(rt,2u);
        }
        case 0xAC21u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xADE0u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xADE2u; return dd3_static_complete(rt,3u);
        }
        case 0xADE2u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xADE4u; return dd3_static_complete(rt,2u);
        }
        case 0xADE4u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xADE6u,0xADE7u)) c++; rt->state.cpu.pc=0xADE7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xADE6u; return dd3_static_complete(rt,2u);
        }
        case 0xADE6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xADE7u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xADE9u; return dd3_static_complete(rt,2u);
        }
        case 0xADE9u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.x);
            rt->state.cpu.pc=0xADEBu; return dd3_static_complete(rt,3u);
        }
        case 0xADEBu: {
            uint16_t ea=(uint16_t)(0x0401u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xADEEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0401u,ea)?1u:0u));
        }
        case 0xADEEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xADF0u,0xADFAu)) c++; rt->state.cpu.pc=0xADFAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xADF0u; return dd3_static_complete(rt,2u);
        }
        case 0xADF0u: {
            uint16_t ea=(uint16_t)(0x0401u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xADF3u; return dd3_static_complete(rt,7u);
        }
        case 0xADF3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xADF5u,0xADFAu)) c++; rt->state.cpu.pc=0xADFAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xADF5u; return dd3_static_complete(rt,2u);
        }
        case 0xADF5u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xADF7u; return dd3_static_complete(rt,2u);
        }
        case 0xADF7u: {
            dd3_static_write8(rt,(uint16_t)(0x0421u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xADFAu; return dd3_static_complete(rt,5u);
        }
        case 0xADFAu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xADFBu; return dd3_static_complete(rt,2u);
        }
        case 0xADFBu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xADFDu; return dd3_static_complete(rt,2u);
        }
        case 0xADFDu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xADFFu,0xADEBu)) c++; rt->state.cpu.pc=0xADEBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xADFFu; return dd3_static_complete(rt,2u);
        }
        case 0xADFFu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE01u; return dd3_static_complete(rt,3u);
        }
        case 0xAE01u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xAE03u; return dd3_static_complete(rt,3u);
        }
        case 0xAE03u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xAE04u; return dd3_static_complete(rt,2u);
        }
        case 0xAE04u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.x);
            rt->state.cpu.pc=0xAE06u; return dd3_static_complete(rt,3u);
        }
        case 0xAE06u: {
            dd3_static_push8(rt,(uint8_t)(0xAE08u>>8)); dd3_static_push8(rt,(uint8_t)0xAE08u);
            rt->state.cpu.pc=0xB663u; return dd3_static_complete(rt,6u);
        }
        case 0xAE09u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAE0Bu,0xAE69u)) c++; rt->state.cpu.pc=0xAE69u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE0Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAE0Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE0Du; return dd3_static_complete(rt,2u);
        }
        case 0xAE0Du: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAE0Fu; return dd3_static_complete(rt,3u);
        }
        case 0xAE0Fu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE11u; return dd3_static_complete(rt,3u);
        }
        case 0xAE11u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAE13u; return dd3_static_complete(rt,3u);
        }
        case 0xAE13u: {
            dd3_static_push8(rt,(uint8_t)(0xAE15u>>8)); dd3_static_push8(rt,(uint8_t)0xAE15u);
            rt->state.cpu.pc=0xB696u; return dd3_static_complete(rt,6u);
        }
        case 0xAE16u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAE18u,0xAE69u)) c++; rt->state.cpu.pc=0xAE69u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE18u; return dd3_static_complete(rt,2u);
        }
        case 0xAE18u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0xAE1Au; return dd3_static_complete(rt,3u);
        }
        case 0xAE1Au: {
            if (rt->state.cpu.v) { unsigned c=3u; if (dd3_static_page_crossed(0xAE1Cu,0xAE27u)) c++; rt->state.cpu.pc=0xAE27u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE1Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAE1Cu: {
            dd3_static_push8(rt,(uint8_t)(0xAE1Eu>>8)); dd3_static_push8(rt,(uint8_t)0xAE1Eu);
            rt->state.cpu.pc=0xBFAFu; return dd3_static_complete(rt,6u);
        }
        case 0xAE1Fu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAE21u,0xAE27u)) c++; rt->state.cpu.pc=0xAE27u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE21u; return dd3_static_complete(rt,2u);
        }
        case 0xAE21u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE23u; return dd3_static_complete(rt,3u);
        }
        case 0xAE23u: {
            uint8_t v=0x01u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAE25u; return dd3_static_complete(rt,2u);
        }
        case 0xAE25u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAE27u,0xAE61u)) c++; rt->state.cpu.pc=0xAE61u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE27u; return dd3_static_complete(rt,2u);
        }
        case 0xAE27u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE29u; return dd3_static_complete(rt,3u);
        }
        case 0xAE29u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE2Bu; return dd3_static_complete(rt,3u);
        }
        case 0xAE2Bu: {
            uint16_t ea=(uint16_t)(0xAE72u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE2Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAE72u,ea)?1u:0u));
        }
        case 0xAE2Eu: {
            uint16_t ea=(uint16_t)(0xAE72u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAE31u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAE72u,ea)?1u:0u));
        }
        case 0xAE31u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAE33u,0xAE61u)) c++; rt->state.cpu.pc=0xAE61u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE33u; return dd3_static_complete(rt,2u);
        }
        case 0xAE33u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE35u; return dd3_static_complete(rt,3u);
        }
        case 0xAE35u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAE37u; return dd3_static_complete(rt,3u);
        }
        case 0xAE37u: {
            dd3_static_push8(rt,(uint8_t)(0xAE39u>>8)); dd3_static_push8(rt,(uint8_t)0xAE39u);
            rt->state.cpu.pc=0xB663u; return dd3_static_complete(rt,6u);
        }
        case 0xAE3Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAE3Cu,0xAE61u)) c++; rt->state.cpu.pc=0xAE61u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE3Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAE3Cu: {
            dd3_static_push8(rt,(uint8_t)(0xAE3Eu>>8)); dd3_static_push8(rt,(uint8_t)0xAE3Eu);
            rt->state.cpu.pc=0xB629u; return dd3_static_complete(rt,6u);
        }
        case 0xAE3Fu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAE41u,0xAE61u)) c++; rt->state.cpu.pc=0xAE61u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE41u; return dd3_static_complete(rt,2u);
        }
        case 0xAE41u: {
            uint8_t v=0x06u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE43u; return dd3_static_complete(rt,2u);
        }
        case 0xAE43u: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAE45u; return dd3_static_complete(rt,3u);
        }
        case 0xAE45u: {
            dd3_static_push8(rt,(uint8_t)(0xAE47u>>8)); dd3_static_push8(rt,(uint8_t)0xAE47u);
            rt->state.cpu.pc=0xB696u; return dd3_static_complete(rt,6u);
        }
        case 0xAE48u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAE4Au,0xAE61u)) c++; rt->state.cpu.pc=0xAE61u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE4Au; return dd3_static_complete(rt,2u);
        }
        case 0xAE4Au: {
            dd3_static_push8(rt,(uint8_t)(0xAE4Cu>>8)); dd3_static_push8(rt,(uint8_t)0xAE4Cu);
            rt->state.cpu.pc=0xB36Du; return dd3_static_complete(rt,6u);
        }
        case 0xAE4Du: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAE4Fu,0xAE61u)) c++; rt->state.cpu.pc=0xAE61u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE4Fu; return dd3_static_complete(rt,2u);
        }
        case 0xAE4Fu: {
            dd3_static_push8(rt,(uint8_t)(0xAE51u>>8)); dd3_static_push8(rt,(uint8_t)0xAE51u);
            rt->state.cpu.pc=0xAE7Au; return dd3_static_complete(rt,6u);
        }
        case 0xAE52u: {
            dd3_static_push8(rt,(uint8_t)(0xAE54u>>8)); dd3_static_push8(rt,(uint8_t)0xAE54u);
            rt->state.cpu.pc=0xB4B1u; return dd3_static_complete(rt,6u);
        }
        case 0xAE55u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAE57u,0xAE61u)) c++; rt->state.cpu.pc=0xAE61u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE57u; return dd3_static_complete(rt,2u);
        }
        case 0xAE57u: {
            dd3_static_push8(rt,(uint8_t)(0xAE59u>>8)); dd3_static_push8(rt,(uint8_t)0xAE59u);
            rt->state.cpu.pc=0xAEB1u; return dd3_static_complete(rt,6u);
        }
        case 0xAE5Au: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE5Cu; return dd3_static_complete(rt,3u);
        }
        case 0xAE5Cu: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE5Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0xAE5Fu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAE61u,0xAE69u)) c++; rt->state.cpu.pc=0xAE69u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE61u; return dd3_static_complete(rt,2u);
        }
        case 0xAE61u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xAE63u; return dd3_static_complete(rt,5u);
        }
        case 0xAE63u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE65u; return dd3_static_complete(rt,3u);
        }
        case 0xAE65u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAE67u; return dd3_static_complete(rt,2u);
        }
        case 0xAE67u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAE69u,0xAE18u)) c++; rt->state.cpu.pc=0xAE18u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE69u; return dd3_static_complete(rt,2u);
        }
        case 0xAE69u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xAE6Bu; return dd3_static_complete(rt,5u);
        }
        case 0xAE6Bu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE6Du; return dd3_static_complete(rt,3u);
        }
        case 0xAE6Du: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAE6Fu; return dd3_static_complete(rt,2u);
        }
        case 0xAE6Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAE71u,0xADFFu)) c++; rt->state.cpu.pc=0xADFFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE71u; return dd3_static_complete(rt,2u);
        }
        case 0xAE71u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAE7Au: {
            uint16_t ea=0x46u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE7Cu; return dd3_static_complete(rt,3u);
        }
        case 0xAE7Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAE7Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAE7Eu: {
            uint8_t v=0x70u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAE80u; return dd3_static_complete(rt,2u);
        }
        case 0xAE80u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAE82u,0xAE86u)) c++; rt->state.cpu.pc=0xAE86u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE82u; return dd3_static_complete(rt,2u);
        }
        case 0xAE82u: {
            uint16_t ea=0xECu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE84u; return dd3_static_complete(rt,3u);
        }
        case 0xAE84u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAE86u,0xAEB0u)) c++; rt->state.cpu.pc=0xAEB0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE86u; return dd3_static_complete(rt,2u);
        }
        case 0xAE86u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE88u; return dd3_static_complete(rt,2u);
        }
        case 0xAE88u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAE8Au; return dd3_static_complete(rt,3u);
        }
        case 0xAE8Au: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAE8Cu,0xAE9Bu)) c++; rt->state.cpu.pc=0xAE9Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE8Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAE8Cu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE8Eu; return dd3_static_complete(rt,3u);
        }
        case 0xAE8Eu: {
            uint16_t ea=(uint16_t)(0x0405u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE91u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0405u,ea)?1u:0u));
        }
        case 0xAE91u: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAE93u; return dd3_static_complete(rt,2u);
        }
        case 0xAE93u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAE95u,0xAE9Bu)) c++; rt->state.cpu.pc=0xAE9Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAE95u; return dd3_static_complete(rt,2u);
        }
        case 0xAE95u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE97u; return dd3_static_complete(rt,3u);
        }
        case 0xAE97u: {
            uint8_t v=0x94u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAE99u; return dd3_static_complete(rt,2u);
        }
        case 0xAE99u: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAE9Bu; return dd3_static_complete(rt,3u);
        }
        case 0xAE9Bu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAE9Du; return dd3_static_complete(rt,2u);
        }
        case 0xAE9Du: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAE9Fu; return dd3_static_complete(rt,3u);
        }
        case 0xAE9Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAEA1u,0xAEB0u)) c++; rt->state.cpu.pc=0xAEB0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAEA1u; return dd3_static_complete(rt,2u);
        }
        case 0xAEA1u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEA3u; return dd3_static_complete(rt,3u);
        }
        case 0xAEA3u: {
            uint16_t ea=(uint16_t)(0x0405u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEA6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0405u,ea)?1u:0u));
        }
        case 0xAEA6u: {
            uint8_t v=0xFFu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAEA8u; return dd3_static_complete(rt,2u);
        }
        case 0xAEA8u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAEAAu,0xAEB0u)) c++; rt->state.cpu.pc=0xAEB0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAEAAu; return dd3_static_complete(rt,2u);
        }
        case 0xAEAAu: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEACu; return dd3_static_complete(rt,3u);
        }
        case 0xAEACu: {
            uint8_t v=0x62u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAEAEu; return dd3_static_complete(rt,2u);
        }
        case 0xAEAEu: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAEB0u; return dd3_static_complete(rt,3u);
        }
        case 0xAEB0u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAEB1u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEB3u; return dd3_static_complete(rt,3u);
        }
        case 0xAEB3u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEB5u; return dd3_static_complete(rt,4u);
        }
        case 0xAEB5u: {
            dd3_static_write8(rt,0x23u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAEB7u; return dd3_static_complete(rt,3u);
        }
        case 0xAEB7u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEB9u; return dd3_static_complete(rt,4u);
        }
        case 0xAEB9u: {
            dd3_static_write8(rt,0x24u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAEBBu; return dd3_static_complete(rt,3u);
        }
        case 0xAEBBu: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEBEu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0xAEBEu: {
            dd3_static_write8(rt,0x25u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAEC0u; return dd3_static_complete(rt,3u);
        }
        case 0xAEC0u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEC2u; return dd3_static_complete(rt,3u);
        }
        case 0xAEC2u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEC4u; return dd3_static_complete(rt,4u);
        }
        case 0xAEC4u: {
            dd3_static_write8(rt,0x26u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAEC6u; return dd3_static_complete(rt,3u);
        }
        case 0xAEC6u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEC8u; return dd3_static_complete(rt,4u);
        }
        case 0xAEC8u: {
            dd3_static_write8(rt,0x27u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAECAu; return dd3_static_complete(rt,3u);
        }
        case 0xAECAu: {
            uint16_t ea=(uint16_t)(0x0310u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAECDu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0310u,ea)?1u:0u));
        }
        case 0xAECDu: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAECFu; return dd3_static_complete(rt,3u);
        }
        case 0xAECFu: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAED1u; return dd3_static_complete(rt,3u);
        }
        case 0xAED1u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAED3u; return dd3_static_complete(rt,2u);
        }
        case 0xAED3u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAED5u,0xAF20u)) c++; rt->state.cpu.pc=0xAF20u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAED5u; return dd3_static_complete(rt,2u);
        }
        case 0xAED5u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAED7u; return dd3_static_complete(rt,3u);
        }
        case 0xAED7u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xAED9u; return dd3_static_complete(rt,2u);
        }
        case 0xAED9u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAEDBu,0xAF20u)) c++; rt->state.cpu.pc=0xAF20u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAEDBu; return dd3_static_complete(rt,2u);
        }
        case 0xAEDBu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEDDu; return dd3_static_complete(rt,3u);
        }
        case 0xAEDDu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xAEDFu; return dd3_static_complete(rt,2u);
        }
        case 0xAEDFu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAEE1u,0xAF20u)) c++; rt->state.cpu.pc=0xAF20u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAEE1u; return dd3_static_complete(rt,2u);
        }
        case 0xAEE1u: {
            uint16_t ea=0x23u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEE3u; return dd3_static_complete(rt,3u);
        }
        case 0xAEE3u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAEE5u; return dd3_static_complete(rt,2u);
        }
        case 0xAEE5u: {
            uint8_t v=0x3Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAEE7u; return dd3_static_complete(rt,2u);
        }
        case 0xAEE7u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAEE9u,0xAEF1u)) c++; rt->state.cpu.pc=0xAEF1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAEE9u; return dd3_static_complete(rt,2u);
        }
        case 0xAEE9u: {
            uint8_t v=0x30u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAEEBu; return dd3_static_complete(rt,2u);
        }
        case 0xAEEBu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAEEDu,0xAEF1u)) c++; rt->state.cpu.pc=0xAEF1u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAEEDu; return dd3_static_complete(rt,2u);
        }
        case 0xAEEDu: {
            uint8_t v=0x31u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAEEFu; return dd3_static_complete(rt,2u);
        }
        case 0xAEEFu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAEF1u,0xAF20u)) c++; rt->state.cpu.pc=0xAF20u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAEF1u; return dd3_static_complete(rt,2u);
        }
        case 0xAEF1u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAEF3u; return dd3_static_complete(rt,4u);
        }
        case 0xAEF3u: {
            uint8_t v=0x12u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAEF5u; return dd3_static_complete(rt,2u);
        }
        case 0xAEF5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAEF7u,0xAF03u)) c++; rt->state.cpu.pc=0xAF03u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAEF7u; return dd3_static_complete(rt,2u);
        }
        case 0xAEF7u: {
            uint8_t v=0x14u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAEF9u; return dd3_static_complete(rt,2u);
        }
        case 0xAEF9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAEFBu,0xAF03u)) c++; rt->state.cpu.pc=0xAF03u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAEFBu; return dd3_static_complete(rt,2u);
        }
        case 0xAEFBu: {
            uint8_t v=0x16u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAEFDu; return dd3_static_complete(rt,2u);
        }
        case 0xAEFDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAEFFu,0xAF03u)) c++; rt->state.cpu.pc=0xAF03u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAEFFu; return dd3_static_complete(rt,2u);
        }
        case 0xAEFFu: {
            uint8_t v=0x17u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAF01u; return dd3_static_complete(rt,2u);
        }
        case 0xAF01u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAF03u,0xAF20u)) c++; rt->state.cpu.pc=0xAF20u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF03u; return dd3_static_complete(rt,2u);
        }
        case 0xAF03u: {
            dd3_static_push8(rt,(uint8_t)(0xAF05u>>8)); dd3_static_push8(rt,(uint8_t)0xAF05u);
            rt->state.cpu.pc=0xAF4Au; return dd3_static_complete(rt,6u);
        }
        case 0xAF06u: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF08u; return dd3_static_complete(rt,3u);
        }
        case 0xAF08u: {
            uint16_t ea=0x0Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF0Au; return dd3_static_complete(rt,3u);
        }
        case 0xAF0Au: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF0Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAF0Cu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF0Du; return dd3_static_complete(rt,2u);
        }
        case 0xAF0Du: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAF0Eu; return dd3_static_complete(rt,2u);
        }
        case 0xAF0Eu: {
            uint16_t ea=(uint16_t)(0xBC0Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF11u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBC0Bu,ea)?1u:0u));
        }
        case 0xAF11u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF13u; return dd3_static_complete(rt,3u);
        }
        case 0xAF13u: {
            uint16_t ea=(uint16_t)(0xBC0Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF16u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBC0Cu,ea)?1u:0u));
        }
        case 0xAF16u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF18u; return dd3_static_complete(rt,3u);
        }
        case 0xAF18u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF1Au; return dd3_static_complete(rt,3u);
        }
        case 0xAF1Au: {
            dd3_static_push8(rt,(uint8_t)(0xAF1Cu>>8)); dd3_static_push8(rt,(uint8_t)0xAF1Cu);
            rt->state.cpu.pc=0xAFA4u; return dd3_static_complete(rt,6u);
        }
        case 0xAF1Du: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF1Fu; return dd3_static_complete(rt,3u);
        }
        case 0xAF1Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAF20u: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF22u; return dd3_static_complete(rt,3u);
        }
        case 0xAF22u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF24u; return dd3_static_complete(rt,2u);
        }
        case 0xAF24u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAF26u,0xAF3Du)) c++; rt->state.cpu.pc=0xAF3Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF26u; return dd3_static_complete(rt,2u);
        }
        case 0xAF26u: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF28u; return dd3_static_complete(rt,3u);
        }
        case 0xAF28u: {
            dd3_static_write8(rt,0x0Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF2Au; return dd3_static_complete(rt,3u);
        }
        case 0xAF2Au: {
            uint16_t ea=0x27u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF2Cu; return dd3_static_complete(rt,3u);
        }
        case 0xAF2Cu: {
            dd3_static_write8(rt,0x0Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF2Eu; return dd3_static_complete(rt,3u);
        }
        case 0xAF2Eu: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF30u; return dd3_static_complete(rt,3u);
        }
        case 0xAF30u: {
            dd3_static_write8(rt,0x10u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF32u; return dd3_static_complete(rt,3u);
        }
        case 0xAF32u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF34u; return dd3_static_complete(rt,3u);
        }
        case 0xAF34u: {
            dd3_static_write8(rt,0x11u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF36u; return dd3_static_complete(rt,3u);
        }
        case 0xAF36u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF38u; return dd3_static_complete(rt,3u);
        }
        case 0xAF38u: {
            dd3_static_write8(rt,0x12u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF3Au; return dd3_static_complete(rt,3u);
        }
        case 0xAF3Au: {
            dd3_static_push8(rt,(uint8_t)(0xAF3Cu>>8)); dd3_static_push8(rt,(uint8_t)0xAF3Cu);
            rt->state.cpu.pc=0xAF5Fu; return dd3_static_complete(rt,6u);
        }
        case 0xAF3Du: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF3Fu; return dd3_static_complete(rt,3u);
        }
        case 0xAF3Fu: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF41u; return dd3_static_complete(rt,2u);
        }
        case 0xAF41u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAF43u,0xAF49u)) c++; rt->state.cpu.pc=0xAF49u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF43u; return dd3_static_complete(rt,2u);
        }
        case 0xAF43u: {
            dd3_static_push8(rt,(uint8_t)(0xAF45u>>8)); dd3_static_push8(rt,(uint8_t)0xAF45u);
            rt->state.cpu.pc=0xAF4Au; return dd3_static_complete(rt,6u);
        }
        case 0xAF46u: {
            dd3_static_push8(rt,(uint8_t)(0xAF48u>>8)); dd3_static_push8(rt,(uint8_t)0xAF48u);
            rt->state.cpu.pc=0xAF5Fu; return dd3_static_complete(rt,6u);
        }
        case 0xAF49u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAF4Au: {
            uint16_t ea=0x23u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF4Cu; return dd3_static_complete(rt,3u);
        }
        case 0xAF4Cu: {
            dd3_static_write8(rt,0x0Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF4Eu; return dd3_static_complete(rt,3u);
        }
        case 0xAF4Eu: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF50u; return dd3_static_complete(rt,3u);
        }
        case 0xAF50u: {
            dd3_static_write8(rt,0x0Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF52u; return dd3_static_complete(rt,3u);
        }
        case 0xAF52u: {
            uint16_t ea=0x25u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF54u; return dd3_static_complete(rt,3u);
        }
        case 0xAF54u: {
            dd3_static_write8(rt,0x10u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF56u; return dd3_static_complete(rt,3u);
        }
        case 0xAF56u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF58u; return dd3_static_complete(rt,3u);
        }
        case 0xAF58u: {
            dd3_static_write8(rt,0x11u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF5Au; return dd3_static_complete(rt,3u);
        }
        case 0xAF5Au: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF5Cu; return dd3_static_complete(rt,3u);
        }
        case 0xAF5Cu: {
            dd3_static_write8(rt,0x12u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF5Eu; return dd3_static_complete(rt,3u);
        }
        case 0xAF5Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAF5Fu: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF61u; return dd3_static_complete(rt,3u);
        }
        case 0xAF61u: {
            uint16_t ea=0x0Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF63u; return dd3_static_complete(rt,3u);
        }
        case 0xAF63u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF65u; return dd3_static_complete(rt,2u);
        }
        case 0xAF65u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF66u; return dd3_static_complete(rt,2u);
        }
        case 0xAF66u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAF67u; return dd3_static_complete(rt,2u);
        }
        case 0xAF67u: {
            uint16_t ea=(uint16_t)(0xBC0Bu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF6Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBC0Bu,ea)?1u:0u));
        }
        case 0xAF6Au: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF6Cu; return dd3_static_complete(rt,3u);
        }
        case 0xAF6Cu: {
            uint16_t ea=(uint16_t)(0xBC0Cu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF6Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBC0Cu,ea)?1u:0u));
        }
        case 0xAF6Fu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF71u; return dd3_static_complete(rt,3u);
        }
        case 0xAF71u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF73u; return dd3_static_complete(rt,3u);
        }
        case 0xAF73u: {
            dd3_static_push8(rt,(uint8_t)(0xAF75u>>8)); dd3_static_push8(rt,(uint8_t)0xAF75u);
            rt->state.cpu.pc=0xAFA4u; return dd3_static_complete(rt,6u);
        }
        case 0xAF76u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF78u; return dd3_static_complete(rt,3u);
        }
        case 0xAF78u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF7Au; return dd3_static_complete(rt,4u);
        }
        case 0xAF7Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xAF7Cu,0xAFA3u)) c++; rt->state.cpu.pc=0xAFA3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF7Cu; return dd3_static_complete(rt,2u);
        }
        case 0xAF7Cu: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF7Eu; return dd3_static_complete(rt,3u);
        }
        case 0xAF7Eu: {
            uint16_t ea=(uint16_t)(0x0421u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xAF81u; return dd3_static_complete(rt,7u);
        }
        case 0xAF81u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF83u; return dd3_static_complete(rt,4u);
        }
        case 0xAF83u: {
            uint8_t v=0xFEu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF85u; return dd3_static_complete(rt,2u);
        }
        case 0xAF85u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF87u; return dd3_static_complete(rt,2u);
        }
        case 0xAF87u: {
            dd3_static_write8(rt,(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xAF89u; return dd3_static_complete(rt,4u);
        }
        case 0xAF89u: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF8Bu; return dd3_static_complete(rt,2u);
        }
        case 0xAF8Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0401u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xAF8Eu; return dd3_static_complete(rt,5u);
        }
        case 0xAF8Eu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF90u; return dd3_static_complete(rt,4u);
        }
        case 0xAF90u: {
            uint8_t v=0x14u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAF92u; return dd3_static_complete(rt,2u);
        }
        case 0xAF92u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAF94u,0xAFA3u)) c++; rt->state.cpu.pc=0xAFA3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF94u; return dd3_static_complete(rt,2u);
        }
        case 0xAF94u: {
            uint8_t v=0x17u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xAF96u; return dd3_static_complete(rt,2u);
        }
        case 0xAF96u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xAF98u,0xAFA3u)) c++; rt->state.cpu.pc=0xAFA3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAF98u; return dd3_static_complete(rt,2u);
        }
        case 0xAF98u: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF9Au; return dd3_static_complete(rt,3u);
        }
        case 0xAF9Au: {
            uint16_t ea=(uint16_t)(0x03F9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAF9Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F9u,ea)?1u:0u));
        }
        case 0xAF9Du: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAF9Fu; return dd3_static_complete(rt,2u);
        }
        case 0xAF9Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xAFA1u,0xAFA3u)) c++; rt->state.cpu.pc=0xAFA3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xAFA1u; return dd3_static_complete(rt,2u);
        }
        case 0xAFA1u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xAFA3u; return dd3_static_complete(rt,6u);
        }
        case 0xAFA3u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAFA4u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFA6u; return dd3_static_complete(rt,2u);
        }
        case 0xAFA6u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFA8u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xAFA8u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAFA9u; return dd3_static_complete(rt,2u);
        }
        case 0xAFA9u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAFAAu; return dd3_static_complete(rt,2u);
        }
        case 0xAFAAu: {
            uint16_t ea=(uint16_t)(0xAFB7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFADu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAFB7u,ea)?1u:0u));
        }
        case 0xAFADu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAFAFu; return dd3_static_complete(rt,3u);
        }
        case 0xAFAFu: {
            uint16_t ea=(uint16_t)(0xAFB8u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFB2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAFB8u,ea)?1u:0u));
        }
        case 0xAFB2u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xAFB4u; return dd3_static_complete(rt,3u);
        }
        case 0xAFB4u: {
            rt->state.cpu.pc=dd3_static_read16_jmp_bug(rt,0x002Bu); return dd3_static_complete(rt,5u);
        }
        case 0xAFE7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xAFE8u: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFEAu; return dd3_static_complete(rt,3u);
        }
        case 0xAFEAu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFECu; return dd3_static_complete(rt,4u);
        }
        case 0xAFECu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xAFEDu; return dd3_static_complete(rt,2u);
        }
        case 0xAFEDu: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xAFEFu; return dd3_static_complete(rt,2u);
        }
        case 0xAFEFu: {
            rt->state.cpu.pc=0xAFFCu; return dd3_static_complete(rt,3u);
        }
        case 0xAFF2u: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFF4u; return dd3_static_complete(rt,3u);
        }
        case 0xAFF4u: {
            uint16_t ea=(uint16_t)(0x0481u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xAFF7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0481u,ea)?1u:0u));
        }
        case 0xAFF7u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xAFF9u; return dd3_static_complete(rt,2u);
        }
        case 0xAFF9u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xAFFAu; return dd3_static_complete(rt,2u);
        }
        case 0xAFFAu: {
            uint8_t v=0x10u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xAFFCu; return dd3_static_complete(rt,2u);
        }
        case 0xAFFCu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAFFDu; return dd3_static_complete(rt,2u);
        }
        case 0xAFFDu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xAFFEu; return dd3_static_complete(rt,2u);
        }
        case 0xAFFEu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB000u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB000u: {
            dd3_static_push8(rt,(uint8_t)(0xB002u>>8)); dd3_static_push8(rt,(uint8_t)0xB002u);
            rt->state.cpu.pc=0xB008u; return dd3_static_complete(rt,6u);
        }
        case 0xB003u: {
            uint8_t v=0x0Du;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB005u; return dd3_static_complete(rt,2u);
        }
        case 0xB005u: {
            rt->state.cpu.pc=0xB2F6u; return dd3_static_complete(rt,3u);
        }
        case 0xB008u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB00Au; return dd3_static_complete(rt,3u);
        }
        case 0xB00Au: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB00Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB00Cu: {
            uint16_t ea=(uint16_t)(0x045Du+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB00Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x045Du,ea)?1u:0u));
        }
        case 0xB00Fu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB010u; return dd3_static_complete(rt,2u);
        }
        case 0xB010u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB012u; return dd3_static_complete(rt,3u);
        }
        case 0xB012u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB014u,0xB016u)) c++; rt->state.cpu.pc=0xB016u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB014u; return dd3_static_complete(rt,2u);
        }
        case 0xB014u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB016u; return dd3_static_complete(rt,2u);
        }
        case 0xB016u: {
            dd3_static_write8(rt,(uint16_t)(0x045Du+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB019u; return dd3_static_complete(rt,5u);
        }
        case 0xB019u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB030u: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB032u; return dd3_static_complete(rt,3u);
        }
        case 0xB032u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB034u; return dd3_static_complete(rt,4u);
        }
        case 0xB034u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB035u; return dd3_static_complete(rt,2u);
        }
        case 0xB035u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB036u; return dd3_static_complete(rt,2u);
        }
        case 0xB036u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB037u; return dd3_static_complete(rt,2u);
        }
        case 0xB037u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB039u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB039u: {
            dd3_static_push8(rt,(uint8_t)(0xB03Bu>>8)); dd3_static_push8(rt,(uint8_t)0xB03Bu);
            rt->state.cpu.pc=0xB008u; return dd3_static_complete(rt,6u);
        }
        case 0xB03Cu: {
            rt->state.cpu.pc=0xB2F2u; return dd3_static_complete(rt,3u);
        }
        case 0xB03Fu: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB041u; return dd3_static_complete(rt,3u);
        }
        case 0xB041u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB043u; return dd3_static_complete(rt,2u);
        }
        case 0xB043u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB045u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB045u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB047u; return dd3_static_complete(rt,3u);
        }
        case 0xB047u: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB049u; return dd3_static_complete(rt,3u);
        }
        case 0xB049u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB04Bu; return dd3_static_complete(rt,4u);
        }
        case 0xB04Bu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB04Du; return dd3_static_complete(rt,2u);
        }
        case 0xB04Du: {
            uint8_t v=0x2Du;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB04Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB04Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB051u,0xB064u)) c++; rt->state.cpu.pc=0xB064u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB051u; return dd3_static_complete(rt,2u);
        }
        case 0xB051u: {
            uint16_t ea=(uint16_t)(0x03F9u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB054u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F9u,ea)?1u:0u));
        }
        case 0xB054u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB056u; return dd3_static_complete(rt,2u);
        }
        case 0xB056u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB058u,0xB064u)) c++; rt->state.cpu.pc=0xB064u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB058u; return dd3_static_complete(rt,2u);
        }
        case 0xB058u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB05Au; return dd3_static_complete(rt,4u);
        }
        case 0xB05Au: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB05Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB05Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB05Eu,0xB062u)) c++; rt->state.cpu.pc=0xB062u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB05Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB05Eu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB060u; return dd3_static_complete(rt,2u);
        }
        case 0xB060u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB062u,0xB064u)) c++; rt->state.cpu.pc=0xB064u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB062u; return dd3_static_complete(rt,2u);
        }
        case 0xB062u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB064u; return dd3_static_complete(rt,5u);
        }
        case 0xB064u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB066u; return dd3_static_complete(rt,3u);
        }
        case 0xB066u: {
            dd3_static_push8(rt,(uint8_t)(0xB068u>>8)); dd3_static_push8(rt,(uint8_t)0xB068u);
            rt->state.cpu.pc=0xB008u; return dd3_static_complete(rt,6u);
        }
        case 0xB069u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB06Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB06Bu: {
            rt->state.cpu.pc=0xB2F6u; return dd3_static_complete(rt,3u);
        }
        case 0xB09Au: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB09Cu; return dd3_static_complete(rt,4u);
        }
        case 0xB09Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB09Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB09Eu: {
            uint8_t v=0x18u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB0A0u; return dd3_static_complete(rt,2u);
        }
        case 0xB0A0u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB0A2u,0xB0AAu)) c++; rt->state.cpu.pc=0xB0AAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0A2u; return dd3_static_complete(rt,2u);
        }
        case 0xB0A2u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB0A4u; return dd3_static_complete(rt,2u);
        }
        case 0xB0A4u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB0A6u,0xB0ACu)) c++; rt->state.cpu.pc=0xB0ACu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0A6u; return dd3_static_complete(rt,2u);
        }
        case 0xB0A6u: {
            uint8_t v=0x06u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB0A8u; return dd3_static_complete(rt,2u);
        }
        case 0xB0A8u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB0AAu,0xB0ACu)) c++; rt->state.cpu.pc=0xB0ACu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0AAu; return dd3_static_complete(rt,2u);
        }
        case 0xB0AAu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB0ABu; return dd3_static_complete(rt,2u);
        }
        case 0xB0ABu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB0ACu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB0ADu; return dd3_static_complete(rt,2u);
        }
        case 0xB0ADu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB0AEu: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0B0u; return dd3_static_complete(rt,3u);
        }
        case 0xB0B0u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0B2u; return dd3_static_complete(rt,4u);
        }
        case 0xB0B2u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB0B4u,0xB0D0u)) c++; rt->state.cpu.pc=0xB0D0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0B4u; return dd3_static_complete(rt,2u);
        }
        case 0xB0B4u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0xB0B6u; return dd3_static_complete(rt,3u);
        }
        case 0xB0B6u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB0B8u,0xB0C5u)) c++; rt->state.cpu.pc=0xB0C5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0B8u; return dd3_static_complete(rt,2u);
        }
        case 0xB0B8u: {
            if (rt->state.cpu.v) { unsigned c=3u; if (dd3_static_page_crossed(0xB0BAu,0xB0C5u)) c++; rt->state.cpu.pc=0xB0C5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0BAu; return dd3_static_complete(rt,2u);
        }
        case 0xB0BAu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xB0BCu; return dd3_static_complete(rt,2u);
        }
        case 0xB0BCu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB0BEu,0xB0C5u)) c++; rt->state.cpu.pc=0xB0C5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0BEu; return dd3_static_complete(rt,2u);
        }
        case 0xB0BEu: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0C0u; return dd3_static_complete(rt,3u);
        }
        case 0xB0C0u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xB0C2u; return dd3_static_complete(rt,2u);
        }
        case 0xB0C2u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB0C4u,0xB0C5u)) c++; rt->state.cpu.pc=0xB0C5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0C4u; return dd3_static_complete(rt,2u);
        }
        case 0xB0C4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB0C5u: {
            uint8_t v=0x07u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0C7u; return dd3_static_complete(rt,2u);
        }
        case 0xB0C7u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0C9u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB0C9u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB0CBu,0xB0CDu)) c++; rt->state.cpu.pc=0xB0CDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0CBu; return dd3_static_complete(rt,2u);
        }
        case 0xB0CBu: {
            uint8_t v=0x1Du;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0CDu; return dd3_static_complete(rt,2u);
        }
        case 0xB0CDu: {
            rt->state.cpu.pc=0xB19Bu; return dd3_static_complete(rt,3u);
        }
        case 0xB0D0u: {
            dd3_static_push8(rt,(uint8_t)(0xB0D2u>>8)); dd3_static_push8(rt,(uint8_t)0xB0D2u);
            rt->state.cpu.pc=0xB09Au; return dd3_static_complete(rt,6u);
        }
        case 0xB0D3u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB0D5u,0xB0EFu)) c++; rt->state.cpu.pc=0xB0EFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0D5u; return dd3_static_complete(rt,2u);
        }
        case 0xB0D5u: {
            uint8_t v=0x06u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0D7u; return dd3_static_complete(rt,2u);
        }
        case 0xB0D7u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0D9u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB0D9u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB0DBu,0xB134u)) c++; rt->state.cpu.pc=0xB134u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0DBu; return dd3_static_complete(rt,2u);
        }
        case 0xB0DBu: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0xB0DDu; return dd3_static_complete(rt,3u);
        }
        case 0xB0DDu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB0DFu,0xB0ECu)) c++; rt->state.cpu.pc=0xB0ECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0DFu; return dd3_static_complete(rt,2u);
        }
        case 0xB0DFu: {
            if (rt->state.cpu.v) { unsigned c=3u; if (dd3_static_page_crossed(0xB0E1u,0xB0ECu)) c++; rt->state.cpu.pc=0xB0ECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0E1u; return dd3_static_complete(rt,2u);
        }
        case 0xB0E1u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xB0E3u; return dd3_static_complete(rt,2u);
        }
        case 0xB0E3u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB0E5u,0xB0ECu)) c++; rt->state.cpu.pc=0xB0ECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0E5u; return dd3_static_complete(rt,2u);
        }
        case 0xB0E5u: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0E7u; return dd3_static_complete(rt,3u);
        }
        case 0xB0E7u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xB0E9u; return dd3_static_complete(rt,2u);
        }
        case 0xB0E9u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB0EBu,0xB0ECu)) c++; rt->state.cpu.pc=0xB0ECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0EBu; return dd3_static_complete(rt,2u);
        }
        case 0xB0EBu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB0ECu: {
            rt->state.cpu.pc=0xB18Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB0EFu: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0F1u; return dd3_static_complete(rt,2u);
        }
        case 0xB0F1u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0F3u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB0F3u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB0F5u; return dd3_static_complete(rt,3u);
        }
        case 0xB0F5u: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0F7u; return dd3_static_complete(rt,2u);
        }
        case 0xB0F7u: {
            uint16_t ea=(uint16_t)(0x0421u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0FAu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0421u,ea)?1u:0u));
        }
        case 0xB0FAu: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB0FCu; return dd3_static_complete(rt,3u);
        }
        case 0xB0FCu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB0FEu,0xB100u)) c++; rt->state.cpu.pc=0xB100u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0FEu; return dd3_static_complete(rt,2u);
        }
        case 0xB0FEu: {
            uint8_t v=0x04u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB100u; return dd3_static_complete(rt,2u);
        }
        case 0xB100u: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.y);
            rt->state.cpu.pc=0xB102u; return dd3_static_complete(rt,3u);
        }
        case 0xB102u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB104u; return dd3_static_complete(rt,2u);
        }
        case 0xB104u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB106u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB106u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB108u; return dd3_static_complete(rt,3u);
        }
        case 0xB108u: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB10Au; return dd3_static_complete(rt,4u);
        }
        case 0xB10Au: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB10Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB10Cu: {
            uint16_t ea=(uint16_t)((0x68u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB10Eu; return dd3_static_complete(rt,4u);
        }
        case 0xB10Eu: {
            uint16_t ea=0x2Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB110u; return dd3_static_complete(rt,3u);
        }
        case 0xB110u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB112u,0xB114u)) c++; rt->state.cpu.pc=0xB114u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB112u; return dd3_static_complete(rt,2u);
        }
        case 0xB112u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB114u; return dd3_static_complete(rt,5u);
        }
        case 0xB114u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB116u; return dd3_static_complete(rt,3u);
        }
        case 0xB116u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB118u; return dd3_static_complete(rt,3u);
        }
        case 0xB118u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB11Au; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB11Au: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB11Cu,0xB134u)) c++; rt->state.cpu.pc=0xB134u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB11Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB11Cu: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0xB11Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB11Eu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB120u,0xB12Fu)) c++; rt->state.cpu.pc=0xB12Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB120u; return dd3_static_complete(rt,2u);
        }
        case 0xB120u: {
            if (rt->state.cpu.v) { unsigned c=3u; if (dd3_static_page_crossed(0xB122u,0xB12Fu)) c++; rt->state.cpu.pc=0xB12Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB122u; return dd3_static_complete(rt,2u);
        }
        case 0xB122u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xB124u; return dd3_static_complete(rt,2u);
        }
        case 0xB124u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB126u,0xB12Fu)) c++; rt->state.cpu.pc=0xB12Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB126u; return dd3_static_complete(rt,2u);
        }
        case 0xB126u: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB128u; return dd3_static_complete(rt,3u);
        }
        case 0xB128u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xB12Au; return dd3_static_complete(rt,2u);
        }
        case 0xB12Au: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB12Cu,0xB12Du)) c++; rt->state.cpu.pc=0xB12Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB12Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB12Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB12Du: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB12Fu; return dd3_static_complete(rt,3u);
        }
        case 0xB12Fu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB131u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB131u: {
            rt->state.cpu.pc=0xB18Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB134u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xB136u; return dd3_static_complete(rt,2u);
        }
        case 0xB136u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB138u,0xB17Au)) c++; rt->state.cpu.pc=0xB17Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB138u; return dd3_static_complete(rt,2u);
        }
        case 0xB138u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB13Au; return dd3_static_complete(rt,4u);
        }
        case 0xB13Au: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB13Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB13Cu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB13Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB13Eu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB140u,0xB17Au)) c++; rt->state.cpu.pc=0xB17Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB140u; return dd3_static_complete(rt,2u);
        }
        case 0xB140u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB141u; return dd3_static_complete(rt,2u);
        }
        case 0xB141u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB142u; return dd3_static_complete(rt,3u);
        }
        case 0xB142u: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB144u; return dd3_static_complete(rt,3u);
        }
        case 0xB144u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xB146u; return dd3_static_complete(rt,2u);
        }
        case 0xB146u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB148u,0xB178u)) c++; rt->state.cpu.pc=0xB178u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB148u; return dd3_static_complete(rt,2u);
        }
        case 0xB148u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB14Au; return dd3_static_complete(rt,4u);
        }
        case 0xB14Au: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB14Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB14Cu: {
            uint8_t v=0x0Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB14Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB14Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB150u,0xB158u)) c++; rt->state.cpu.pc=0xB158u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB150u; return dd3_static_complete(rt,2u);
        }
        case 0xB150u: {
            uint8_t v=0x35u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB152u; return dd3_static_complete(rt,2u);
        }
        case 0xB152u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB154u,0xB158u)) c++; rt->state.cpu.pc=0xB158u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB154u; return dd3_static_complete(rt,2u);
        }
        case 0xB154u: {
            uint8_t v=0x32u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB156u; return dd3_static_complete(rt,2u);
        }
        case 0xB156u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB158u,0xB163u)) c++; rt->state.cpu.pc=0xB163u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB158u; return dd3_static_complete(rt,2u);
        }
        case 0xB158u: {
            uint8_t v=0x0Du;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB15Au; return dd3_static_complete(rt,2u);
        }
        case 0xB15Au: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB15Cu; return dd3_static_complete(rt,4u);
        }
        case 0xB15Cu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB15Du; return dd3_static_complete(rt,4u);
        }
        case 0xB15Du: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB15Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB15Eu: {
            uint8_t v=0x0Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB160u; return dd3_static_complete(rt,2u);
        }
        case 0xB160u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB162u; return dd3_static_complete(rt,4u);
        }
        case 0xB162u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB163u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB165u; return dd3_static_complete(rt,3u);
        }
        case 0xB165u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0xB167u; return dd3_static_complete(rt,3u);
        }
        case 0xB167u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB169u,0xB178u)) c++; rt->state.cpu.pc=0xB178u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB169u; return dd3_static_complete(rt,2u);
        }
        case 0xB169u: {
            if (rt->state.cpu.v) { unsigned c=3u; if (dd3_static_page_crossed(0xB16Bu,0xB178u)) c++; rt->state.cpu.pc=0xB178u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB16Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB16Bu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xB16Du; return dd3_static_complete(rt,2u);
        }
        case 0xB16Du: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB16Fu,0xB178u)) c++; rt->state.cpu.pc=0xB178u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB16Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB16Fu: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB171u; return dd3_static_complete(rt,3u);
        }
        case 0xB171u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xB173u; return dd3_static_complete(rt,2u);
        }
        case 0xB173u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB175u,0xB178u)) c++; rt->state.cpu.pc=0xB178u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB175u; return dd3_static_complete(rt,2u);
        }
        case 0xB175u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB176u; return dd3_static_complete(rt,4u);
        }
        case 0xB176u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB177u; return dd3_static_complete(rt,2u);
        }
        case 0xB177u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB178u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB179u; return dd3_static_complete(rt,4u);
        }
        case 0xB179u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB17Au; return dd3_static_complete(rt,2u);
        }
        case 0xB17Au: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB17Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB17Cu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB17Eu; return dd3_static_complete(rt,4u);
        }
        case 0xB17Eu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB180u; return dd3_static_complete(rt,2u);
        }
        case 0xB180u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB182u; return dd3_static_complete(rt,3u);
        }
        case 0xB182u: {
            uint8_t v=0x0Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB184u; return dd3_static_complete(rt,2u);
        }
        case 0xB184u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB186u,0xB18Au)) c++; rt->state.cpu.pc=0xB18Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB186u; return dd3_static_complete(rt,2u);
        }
        case 0xB186u: {
            uint8_t v=0x1Du;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB188u; return dd3_static_complete(rt,2u);
        }
        case 0xB188u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB18Au,0xB18Cu)) c++; rt->state.cpu.pc=0xB18Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB18Au; return dd3_static_complete(rt,2u);
        }
        case 0xB18Au: {
            uint8_t v=0x1Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB18Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB18Cu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB18Eu; return dd3_static_complete(rt,4u);
        }
        case 0xB18Eu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB190u; return dd3_static_complete(rt,4u);
        }
        case 0xB190u: {
            uint8_t v=0x07u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB192u; return dd3_static_complete(rt,2u);
        }
        case 0xB192u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB194u,0xB19Du)) c++; rt->state.cpu.pc=0xB19Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB194u; return dd3_static_complete(rt,2u);
        }
        case 0xB194u: {
            uint16_t ea=(uint16_t)(0x0421u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB197u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0421u,ea)?1u:0u));
        }
        case 0xB197u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB199u,0xB19Du)) c++; rt->state.cpu.pc=0xB19Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB199u; return dd3_static_complete(rt,2u);
        }
        case 0xB199u: {
            uint8_t v=0x18u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB19Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB19Bu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB19Du; return dd3_static_complete(rt,4u);
        }
        case 0xB19Du: {
            uint8_t v=0x08u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB19Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB19Fu: {
            rt->state.cpu.pc=0xB2F6u; return dd3_static_complete(rt,3u);
        }
        case 0xB1CAu: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1CCu; return dd3_static_complete(rt,2u);
        }
        case 0xB1CCu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1CEu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB1CEu: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1D0u; return dd3_static_complete(rt,3u);
        }
        case 0xB1D0u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB1D2u; return dd3_static_complete(rt,4u);
        }
        case 0xB1D2u: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1D4u; return dd3_static_complete(rt,4u);
        }
        case 0xB1D4u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB1D6u,0xB1DEu)) c++; rt->state.cpu.pc=0xB1DEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1D6u; return dd3_static_complete(rt,2u);
        }
        case 0xB1D6u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xB1D8u; return dd3_static_complete(rt,2u);
        }
        case 0xB1D8u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB1DAu,0xB1DEu)) c++; rt->state.cpu.pc=0xB1DEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1DAu; return dd3_static_complete(rt,2u);
        }
        case 0xB1DAu: {
            uint8_t v=0x1Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1DCu; return dd3_static_complete(rt,2u);
        }
        case 0xB1DCu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB1DEu; return dd3_static_complete(rt,4u);
        }
        case 0xB1DEu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1E0u; return dd3_static_complete(rt,2u);
        }
        case 0xB1E0u: {
            rt->state.cpu.pc=0xB2F6u; return dd3_static_complete(rt,3u);
        }
        case 0xB25Eu: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB260u; return dd3_static_complete(rt,2u);
        }
        case 0xB260u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB262u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB262u: {
            dd3_static_push8(rt,(uint8_t)(0xB264u>>8)); dd3_static_push8(rt,(uint8_t)0xB264u);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,6u);
        }
        case 0xB265u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB267u; return dd3_static_complete(rt,2u);
        }
        case 0xB267u: {
            rt->state.cpu.pc=0xB2F6u; return dd3_static_complete(rt,3u);
        }
        case 0xB26Au: {
            uint8_t v=0x40u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB26Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB26Cu: {
            uint16_t ea=0x0Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB26Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB26Eu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB270u,0xB272u)) c++; rt->state.cpu.pc=0xB272u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB270u; return dd3_static_complete(rt,2u);
        }
        case 0xB270u: {
            uint8_t v=0xC0u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB272u; return dd3_static_complete(rt,2u);
        }
        case 0xB272u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB273u; return dd3_static_complete(rt,2u);
        }
        case 0xB273u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB275u; return dd3_static_complete(rt,3u);
        }
        case 0xB275u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB278u; return dd3_static_complete(rt,5u);
        }
        case 0xB278u: {
            rt->state.cpu.pc=0xB2C3u; return dd3_static_complete(rt,3u);
        }
        case 0xB286u: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB288u; return dd3_static_complete(rt,3u);
        }
        case 0xB288u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB28Au; return dd3_static_complete(rt,3u);
        }
        case 0xB28Au: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB28Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB28Cu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB28Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB28Eu: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB290u; return dd3_static_complete(rt,4u);
        }
        case 0xB290u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB291u; return dd3_static_complete(rt,2u);
        }
        case 0xB291u: {
            uint16_t ea=(uint16_t)(0x00B7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB294u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B7u,ea)?1u:0u));
        }
        case 0xB294u: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB296u; return dd3_static_complete(rt,4u);
        }
        case 0xB296u: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB299u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0xB299u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB29Bu,0xB29Fu)) c++; rt->state.cpu.pc=0xB29Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB29Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB29Bu: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB29Du; return dd3_static_complete(rt,2u);
        }
        case 0xB29Du: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB29Fu; return dd3_static_complete(rt,3u);
        }
        case 0xB29Fu: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2A1u; return dd3_static_complete(rt,3u);
        }
        case 0xB2A1u: {
            dd3_static_write8(rt,(uint16_t)(0x0310u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB2A4u; return dd3_static_complete(rt,5u);
        }
        case 0xB2A4u: {
            rt->state.cpu.pc=0xB2C3u; return dd3_static_complete(rt,3u);
        }
        case 0xB2A7u: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2A9u; return dd3_static_complete(rt,3u);
        }
        case 0xB2A9u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2ABu; return dd3_static_complete(rt,4u);
        }
        case 0xB2ABu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB2ADu,0xB2B3u)) c++; rt->state.cpu.pc=0xB2B3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB2ADu; return dd3_static_complete(rt,2u);
        }
        case 0xB2ADu: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2AFu; return dd3_static_complete(rt,2u);
        }
        case 0xB2AFu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2B1u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB2B1u: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB2B3u; return dd3_static_complete(rt,4u);
        }
        case 0xB2B3u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2B5u; return dd3_static_complete(rt,2u);
        }
        case 0xB2B5u: {
            rt->state.cpu.pc=0xB2F6u; return dd3_static_complete(rt,3u);
        }
        case 0xB2C3u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2C5u; return dd3_static_complete(rt,2u);
        }
        case 0xB2C5u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB2C7u,0xB2F6u)) c++; rt->state.cpu.pc=0xB2F6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB2C7u; return dd3_static_complete(rt,2u);
        }
        case 0xB2C7u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2C9u; return dd3_static_complete(rt,3u);
        }
        case 0xB2C9u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2CAu; return dd3_static_complete(rt,3u);
        }
        case 0xB2CAu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2CCu; return dd3_static_complete(rt,3u);
        }
        case 0xB2CCu: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2CDu; return dd3_static_complete(rt,3u);
        }
        case 0xB2CDu: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2CFu; return dd3_static_complete(rt,3u);
        }
        case 0xB2CFu: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2D1u; return dd3_static_complete(rt,3u);
        }
        case 0xB2D1u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB2D3u; return dd3_static_complete(rt,2u);
        }
        case 0xB2D3u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB2D5u,0xB2D7u)) c++; rt->state.cpu.pc=0xB2D7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB2D5u; return dd3_static_complete(rt,2u);
        }
        case 0xB2D5u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2D7u; return dd3_static_complete(rt,3u);
        }
        case 0xB2D7u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2D9u; return dd3_static_complete(rt,4u);
        }
        case 0xB2D9u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2DAu; return dd3_static_complete(rt,2u);
        }
        case 0xB2DAu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB2DBu; return dd3_static_complete(rt,2u);
        }
        case 0xB2DBu: {
            uint8_t v=0x02u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB2DDu; return dd3_static_complete(rt,2u);
        }
        case 0xB2DDu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB2DEu; return dd3_static_complete(rt,2u);
        }
        case 0xB2DEu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2E0u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB2E0u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2E1u; return dd3_static_complete(rt,3u);
        }
        case 0xB2E1u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB2E2u; return dd3_static_complete(rt,2u);
        }
        case 0xB2E2u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2E4u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB2E4u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2E6u; return dd3_static_complete(rt,3u);
        }
        case 0xB2E6u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2E7u; return dd3_static_complete(rt,4u);
        }
        case 0xB2E7u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2E9u; return dd3_static_complete(rt,3u);
        }
        case 0xB2E9u: {
            dd3_static_push8(rt,(uint8_t)(0xB2EBu>>8)); dd3_static_push8(rt,(uint8_t)0xB2EBu);
            rt->state.cpu.pc=0xAFA4u; return dd3_static_complete(rt,6u);
        }
        case 0xB2ECu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2EDu; return dd3_static_complete(rt,4u);
        }
        case 0xB2EDu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2EFu; return dd3_static_complete(rt,3u);
        }
        case 0xB2EFu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2F0u; return dd3_static_complete(rt,4u);
        }
        case 0xB2F0u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2F2u; return dd3_static_complete(rt,3u);
        }
        case 0xB2F2u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2F4u; return dd3_static_complete(rt,2u);
        }
        case 0xB2F4u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2F6u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB2F6u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB2F7u; return dd3_static_complete(rt,2u);
        }
        case 0xB2F7u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB2F9u; return dd3_static_complete(rt,3u);
        }
        case 0xB2F9u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB2FBu; return dd3_static_complete(rt,3u);
        }
        case 0xB2FBu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB2FDu; return dd3_static_complete(rt,3u);
        }
        case 0xB2FDu: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB2FFu; return dd3_static_complete(rt,2u);
        }
        case 0xB2FFu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB301u; return dd3_static_complete(rt,3u);
        }
        case 0xB301u: {
            rt->state.cpu.pc=0xAFA4u; return dd3_static_complete(rt,3u);
        }
        case 0xB331u: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB333u; return dd3_static_complete(rt,3u);
        }
        case 0xB333u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB335u; return dd3_static_complete(rt,4u);
        }
        case 0xB335u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB337u; return dd3_static_complete(rt,2u);
        }
        case 0xB337u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB339u,0xB341u)) c++; rt->state.cpu.pc=0xB341u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB339u; return dd3_static_complete(rt,2u);
        }
        case 0xB339u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB33Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB33Bu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB33Du; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB33Du: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB33Fu; return dd3_static_complete(rt,3u);
        }
        case 0xB33Fu: {
            dd3_static_write8(rt,(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB341u; return dd3_static_complete(rt,4u);
        }
        case 0xB341u: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB343u; return dd3_static_complete(rt,3u);
        }
        case 0xB343u: {
            rt->state.cpu.pc=0xB1DEu; return dd3_static_complete(rt,3u);
        }
        case 0xB351u: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB353u; return dd3_static_complete(rt,2u);
        }
        case 0xB353u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB355u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB355u: {
            dd3_static_push8(rt,(uint8_t)(0xB357u>>8)); dd3_static_push8(rt,(uint8_t)0xB357u);
            rt->state.cpu.pc=0xB008u; return dd3_static_complete(rt,6u);
        }
        case 0xB358u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB35Au; return dd3_static_complete(rt,2u);
        }
        case 0xB35Au: {
            rt->state.cpu.pc=0xB2F6u; return dd3_static_complete(rt,3u);
        }
        case 0xB35Du: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB35Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB35Fu: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB361u; return dd3_static_complete(rt,3u);
        }
        case 0xB361u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB363u; return dd3_static_complete(rt,4u);
        }
        case 0xB363u: {
            uint8_t v=0x07u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB365u; return dd3_static_complete(rt,2u);
        }
        case 0xB365u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB367u,0xB353u)) c++; rt->state.cpu.pc=0xB353u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB367u; return dd3_static_complete(rt,2u);
        }
        case 0xB367u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB369u,0xB351u)) c++; rt->state.cpu.pc=0xB351u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB369u; return dd3_static_complete(rt,2u);
        }
        case 0xB369u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB36Au; return dd3_static_complete(rt,2u);
        }
        case 0xB36Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB36Bu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB36Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB36Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB36Du: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB36Fu; return dd3_static_complete(rt,3u);
        }
        case 0xB36Fu: {
            uint8_t v=0xF8u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB371u; return dd3_static_complete(rt,2u);
        }
        case 0xB371u: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB373u; return dd3_static_complete(rt,3u);
        }
        case 0xB373u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB375u; return dd3_static_complete(rt,3u);
        }
        case 0xB375u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xB377u; return dd3_static_complete(rt,2u);
        }
        case 0xB377u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB379u,0xB37Cu)) c++; rt->state.cpu.pc=0xB37Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB379u; return dd3_static_complete(rt,2u);
        }
        case 0xB379u: {
            rt->state.cpu.pc=0xB3E2u; return dd3_static_complete(rt,3u);
        }
        case 0xB37Cu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB37Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB37Eu: {
            uint16_t ea=(uint16_t)(0x0485u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB381u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0485u,ea)?1u:0u));
        }
        case 0xB381u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB383u; return dd3_static_complete(rt,2u);
        }
        case 0xB383u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB385u; return dd3_static_complete(rt,3u);
        }
        case 0xB385u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB387u,0xB36Bu)) c++; rt->state.cpu.pc=0xB36Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB387u; return dd3_static_complete(rt,2u);
        }
        case 0xB387u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB388u; return dd3_static_complete(rt,2u);
        }
        case 0xB388u: {
            uint16_t ea=(uint16_t)(0xAE72u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB38Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAE72u,ea)?1u:0u));
        }
        case 0xB38Bu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB38Du; return dd3_static_complete(rt,3u);
        }
        case 0xB38Du: {
            uint16_t ea=(uint16_t)(0xAE72u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB390u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xAE72u,ea)?1u:0u));
        }
        case 0xB390u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB392u,0xB396u)) c++; rt->state.cpu.pc=0xB396u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB392u; return dd3_static_complete(rt,2u);
        }
        case 0xB392u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB394u; return dd3_static_complete(rt,2u);
        }
        case 0xB394u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB396u,0xB36Bu)) c++; rt->state.cpu.pc=0xB36Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB396u; return dd3_static_complete(rt,2u);
        }
        case 0xB396u: {
            uint16_t ea=0x34u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.z=((rt->state.cpu.a&v)==0u); rt->state.cpu.n=(v>>7)&1u; rt->state.cpu.v=(v>>6)&1u;
            rt->state.cpu.pc=0xB398u; return dd3_static_complete(rt,3u);
        }
        case 0xB398u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB39Au,0xB3BAu)) c++; rt->state.cpu.pc=0xB3BAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB39Au; return dd3_static_complete(rt,2u);
        }
        case 0xB39Au: {
            if (rt->state.cpu.v) { unsigned c=3u; if (dd3_static_page_crossed(0xB39Cu,0xB3BAu)) c++; rt->state.cpu.pc=0xB3BAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB39Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB39Cu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xB39Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB39Eu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB3A0u,0xB3A4u)) c++; rt->state.cpu.pc=0xB3A4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB3A0u; return dd3_static_complete(rt,2u);
        }
        case 0xB3A0u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xB3A2u; return dd3_static_complete(rt,2u);
        }
        case 0xB3A2u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB3A4u,0xB36Bu)) c++; rt->state.cpu.pc=0xB36Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB3A4u; return dd3_static_complete(rt,2u);
        }
        case 0xB3A4u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3A6u; return dd3_static_complete(rt,3u);
        }
        case 0xB3A6u: {
            uint16_t ea=(uint16_t)(0x0419u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3A9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0419u,ea)?1u:0u));
        }
        case 0xB3A9u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB3ABu; return dd3_static_complete(rt,3u);
        }
        case 0xB3ABu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB3ADu,0xB3BAu)) c++; rt->state.cpu.pc=0xB3BAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB3ADu; return dd3_static_complete(rt,2u);
        }
        case 0xB3ADu: {
            uint16_t ea=(uint16_t)(0x0429u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3B0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0429u,ea)?1u:0u));
        }
        case 0xB3B0u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3B2u; return dd3_static_complete(rt,3u);
        }
        case 0xB3B2u: {
            uint16_t ea=(uint16_t)(0x03F9u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB3B5u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F9u,ea)?1u:0u));
        }
        case 0xB3B5u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB3B7u,0xB3BAu)) c++; rt->state.cpu.pc=0xB3BAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB3B7u; return dd3_static_complete(rt,2u);
        }
        case 0xB3B7u: {
            rt->state.cpu.pc=0xB470u; return dd3_static_complete(rt,3u);
        }
        case 0xB3BAu: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3BCu; return dd3_static_complete(rt,3u);
        }
        case 0xB3BCu: {
            uint8_t v=0xA0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3BEu; return dd3_static_complete(rt,2u);
        }
        case 0xB3BEu: {
            uint8_t v=0xA0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB3C0u; return dd3_static_complete(rt,2u);
        }
        case 0xB3C0u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB3C2u,0xB3C8u)) c++; rt->state.cpu.pc=0xB3C8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB3C2u; return dd3_static_complete(rt,2u);
        }
        case 0xB3C2u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3C4u; return dd3_static_complete(rt,2u);
        }
        case 0xB3C4u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3C6u; return dd3_static_complete(rt,3u);
        }
        case 0xB3C6u: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3C8u; return dd3_static_complete(rt,3u);
        }
        case 0xB3C8u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3CAu; return dd3_static_complete(rt,3u);
        }
        case 0xB3CAu: {
            uint8_t v=0x60u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3CCu; return dd3_static_complete(rt,2u);
        }
        case 0xB3CCu: {
            uint8_t v=0x60u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB3CEu; return dd3_static_complete(rt,2u);
        }
        case 0xB3CEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB3D0u,0xB3D6u)) c++; rt->state.cpu.pc=0xB3D6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB3D0u; return dd3_static_complete(rt,2u);
        }
        case 0xB3D0u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3D2u; return dd3_static_complete(rt,3u);
        }
        case 0xB3D2u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3D4u; return dd3_static_complete(rt,2u);
        }
        case 0xB3D4u: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3D6u; return dd3_static_complete(rt,3u);
        }
        case 0xB3D6u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3D8u; return dd3_static_complete(rt,3u);
        }
        case 0xB3D8u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3DAu; return dd3_static_complete(rt,2u);
        }
        case 0xB3DAu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB3DCu,0xB3DFu)) c++; rt->state.cpu.pc=0xB3DFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB3DCu; return dd3_static_complete(rt,2u);
        }
        case 0xB3DCu: {
            rt->state.cpu.pc=0xB470u; return dd3_static_complete(rt,3u);
        }
        case 0xB3DFu: {
            rt->state.cpu.pc=0xB46Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB3E2u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3E4u; return dd3_static_complete(rt,3u);
        }
        case 0xB3E4u: {
            uint8_t v=0x90u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3E6u; return dd3_static_complete(rt,2u);
        }
        case 0xB3E6u: {
            uint8_t v=0x90u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB3E8u; return dd3_static_complete(rt,2u);
        }
        case 0xB3E8u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB3EAu,0xB434u)) c++; rt->state.cpu.pc=0xB434u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB3EAu; return dd3_static_complete(rt,2u);
        }
        case 0xB3EAu: {
            uint16_t ea=0x76u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3ECu; return dd3_static_complete(rt,3u);
        }
        case 0xB3ECu: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB3EEu; return dd3_static_complete(rt,2u);
        }
        case 0xB3EEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB3F0u,0xB3FCu)) c++; rt->state.cpu.pc=0xB3FCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB3F0u; return dd3_static_complete(rt,2u);
        }
        case 0xB3F0u: {
            uint16_t ea=0x3Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3F2u; return dd3_static_complete(rt,3u);
        }
        case 0xB3F2u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB3F4u,0xB3FCu)) c++; rt->state.cpu.pc=0xB3FCu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB3F4u; return dd3_static_complete(rt,2u);
        }
        case 0xB3F4u: {
            uint16_t ea=0x47u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3F6u; return dd3_static_complete(rt,3u);
        }
        case 0xB3F6u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB3F8u; return dd3_static_complete(rt,2u);
        }
        case 0xB3F8u: {
            uint8_t v=0x61u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB3FAu; return dd3_static_complete(rt,2u);
        }
        case 0xB3FAu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB3FCu,0xB434u)) c++; rt->state.cpu.pc=0xB434u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB3FCu; return dd3_static_complete(rt,2u);
        }
        case 0xB3FCu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB3FEu; return dd3_static_complete(rt,3u);
        }
        case 0xB3FEu: {
            uint16_t ea=(uint16_t)(0x0419u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB401u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0419u,ea)?1u:0u));
        }
        case 0xB401u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB403u; return dd3_static_complete(rt,3u);
        }
        case 0xB403u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB405u,0xB42Eu)) c++; rt->state.cpu.pc=0xB42Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB405u; return dd3_static_complete(rt,2u);
        }
        case 0xB405u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB407u; return dd3_static_complete(rt,3u);
        }
        case 0xB407u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB409u; return dd3_static_complete(rt,4u);
        }
        case 0xB409u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB40Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB40Bu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB40Du,0xB414u)) c++; rt->state.cpu.pc=0xB414u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB40Du; return dd3_static_complete(rt,2u);
        }
        case 0xB40Du: {
            dd3_static_push8(rt,(uint8_t)(0xB40Fu>>8)); dd3_static_push8(rt,(uint8_t)0xB40Fu);
            rt->state.cpu.pc=0xB472u; return dd3_static_complete(rt,6u);
        }
        case 0xB410u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB412u,0xB424u)) c++; rt->state.cpu.pc=0xB424u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB412u; return dd3_static_complete(rt,2u);
        }
        case 0xB412u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB414u,0xB42Eu)) c++; rt->state.cpu.pc=0xB42Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB414u; return dd3_static_complete(rt,2u);
        }
        case 0xB414u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB416u; return dd3_static_complete(rt,4u);
        }
        case 0xB416u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB418u; return dd3_static_complete(rt,2u);
        }
        case 0xB418u: {
            uint8_t v=0x2Du;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB41Au; return dd3_static_complete(rt,2u);
        }
        case 0xB41Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB41Cu,0xB424u)) c++; rt->state.cpu.pc=0xB424u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB41Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB41Cu: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB41Eu; return dd3_static_complete(rt,4u);
        }
        case 0xB41Eu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB420u; return dd3_static_complete(rt,2u);
        }
        case 0xB420u: {
            uint8_t v=0x13u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB422u; return dd3_static_complete(rt,2u);
        }
        case 0xB422u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB424u,0xB42Eu)) c++; rt->state.cpu.pc=0xB42Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB424u; return dd3_static_complete(rt,2u);
        }
        case 0xB424u: {
            uint16_t ea=(uint16_t)(0x0429u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB427u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0429u,ea)?1u:0u));
        }
        case 0xB427u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB429u; return dd3_static_complete(rt,3u);
        }
        case 0xB429u: {
            uint16_t ea=(uint16_t)(0x03F9u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB42Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F9u,ea)?1u:0u));
        }
        case 0xB42Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB42Eu,0xB434u)) c++; rt->state.cpu.pc=0xB434u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB42Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB42Eu: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB430u; return dd3_static_complete(rt,2u);
        }
        case 0xB430u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB432u; return dd3_static_complete(rt,3u);
        }
        case 0xB432u: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB434u; return dd3_static_complete(rt,3u);
        }
        case 0xB434u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB436u; return dd3_static_complete(rt,3u);
        }
        case 0xB436u: {
            uint8_t v=0x60u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB438u; return dd3_static_complete(rt,2u);
        }
        case 0xB438u: {
            uint8_t v=0x60u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB43Au; return dd3_static_complete(rt,2u);
        }
        case 0xB43Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB43Cu,0xB468u)) c++; rt->state.cpu.pc=0xB468u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB43Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB43Cu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB43Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB43Eu: {
            uint16_t ea=(uint16_t)(0x0419u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB441u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0419u,ea)?1u:0u));
        }
        case 0xB441u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB443u; return dd3_static_complete(rt,3u);
        }
        case 0xB443u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB445u,0xB462u)) c++; rt->state.cpu.pc=0xB462u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB445u; return dd3_static_complete(rt,2u);
        }
        case 0xB445u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB447u; return dd3_static_complete(rt,3u);
        }
        case 0xB447u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB449u; return dd3_static_complete(rt,4u);
        }
        case 0xB449u: {
            uint8_t v=0x15u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB44Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB44Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB44Du,0xB453u)) c++; rt->state.cpu.pc=0xB453u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB44Du; return dd3_static_complete(rt,2u);
        }
        case 0xB44Du: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB44Fu; return dd3_static_complete(rt,4u);
        }
        case 0xB44Fu: {
            uint8_t v=0xF0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB451u; return dd3_static_complete(rt,2u);
        }
        case 0xB451u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB453u,0xB462u)) c++; rt->state.cpu.pc=0xB462u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB453u; return dd3_static_complete(rt,2u);
        }
        case 0xB453u: {
            dd3_static_push8(rt,(uint8_t)(0xB455u>>8)); dd3_static_push8(rt,(uint8_t)0xB455u);
            rt->state.cpu.pc=0xB472u; return dd3_static_complete(rt,6u);
        }
        case 0xB456u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB458u,0xB462u)) c++; rt->state.cpu.pc=0xB462u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB458u; return dd3_static_complete(rt,2u);
        }
        case 0xB458u: {
            uint16_t ea=(uint16_t)(0x0429u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB45Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0429u,ea)?1u:0u));
        }
        case 0xB45Bu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB45Du; return dd3_static_complete(rt,3u);
        }
        case 0xB45Du: {
            uint16_t ea=(uint16_t)(0x03F9u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB460u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F9u,ea)?1u:0u));
        }
        case 0xB460u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB462u,0xB468u)) c++; rt->state.cpu.pc=0xB468u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB462u; return dd3_static_complete(rt,2u);
        }
        case 0xB462u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB464u; return dd3_static_complete(rt,3u);
        }
        case 0xB464u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB466u; return dd3_static_complete(rt,2u);
        }
        case 0xB466u: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB468u; return dd3_static_complete(rt,3u);
        }
        case 0xB468u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB46Au; return dd3_static_complete(rt,3u);
        }
        case 0xB46Au: {
            uint8_t v=0x07u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB46Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB46Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB46Eu,0xB470u)) c++; rt->state.cpu.pc=0xB470u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB46Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB46Eu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB46Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB46Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB470u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB471u; return dd3_static_complete(rt,2u);
        }
        case 0xB471u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB472u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB474u; return dd3_static_complete(rt,4u);
        }
        case 0xB474u: {
            uint8_t v=0x19u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB476u; return dd3_static_complete(rt,2u);
        }
        case 0xB476u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB478u,0xB4A7u)) c++; rt->state.cpu.pc=0xB4A7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB478u; return dd3_static_complete(rt,2u);
        }
        case 0xB478u: {
            uint8_t v=0x0Eu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB47Au; return dd3_static_complete(rt,2u);
        }
        case 0xB47Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB47Cu,0xB49Du)) c++; rt->state.cpu.pc=0xB49Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB47Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB47Cu: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB47Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB47Eu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB480u,0xB484u)) c++; rt->state.cpu.pc=0xB484u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB480u; return dd3_static_complete(rt,2u);
        }
        case 0xB480u: {
            uint8_t v=0x09u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB482u; return dd3_static_complete(rt,2u);
        }
        case 0xB482u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB484u,0xB49Bu)) c++; rt->state.cpu.pc=0xB49Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB484u; return dd3_static_complete(rt,2u);
        }
        case 0xB484u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB486u; return dd3_static_complete(rt,4u);
        }
        case 0xB486u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB488u; return dd3_static_complete(rt,2u);
        }
        case 0xB488u: {
            uint8_t v=0x3Du;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB48Au; return dd3_static_complete(rt,2u);
        }
        case 0xB48Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB48Cu,0xB490u)) c++; rt->state.cpu.pc=0xB490u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB48Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB48Cu: {
            uint8_t v=0x59u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB48Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB48Eu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB490u,0xB49Bu)) c++; rt->state.cpu.pc=0xB49Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB490u; return dd3_static_complete(rt,2u);
        }
        case 0xB490u: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB492u; return dd3_static_complete(rt,4u);
        }
        case 0xB492u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB494u; return dd3_static_complete(rt,2u);
        }
        case 0xB494u: {
            uint8_t v=0x21u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB496u; return dd3_static_complete(rt,2u);
        }
        case 0xB496u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB498u,0xB49Bu)) c++; rt->state.cpu.pc=0xB49Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB498u; return dd3_static_complete(rt,2u);
        }
        case 0xB498u: {
            uint8_t v=0x27u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB49Au; return dd3_static_complete(rt,2u);
        }
        case 0xB49Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB49Bu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB49Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB49Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB49Du: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB49Fu; return dd3_static_complete(rt,4u);
        }
        case 0xB49Fu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4A1u; return dd3_static_complete(rt,2u);
        }
        case 0xB4A1u: {
            uint8_t v=0x2Du;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB4A3u; return dd3_static_complete(rt,2u);
        }
        case 0xB4A3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB4A5u,0xB49Bu)) c++; rt->state.cpu.pc=0xB49Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB4A5u; return dd3_static_complete(rt,2u);
        }
        case 0xB4A5u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB4A6u; return dd3_static_complete(rt,2u);
        }
        case 0xB4A6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB4A7u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4A9u; return dd3_static_complete(rt,4u);
        }
        case 0xB4A9u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4ABu; return dd3_static_complete(rt,2u);
        }
        case 0xB4ABu: {
            uint8_t v=0x7Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB4ADu; return dd3_static_complete(rt,2u);
        }
        case 0xB4ADu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB4AFu,0xB49Bu)) c++; rt->state.cpu.pc=0xB49Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB4AFu; return dd3_static_complete(rt,2u);
        }
        case 0xB4AFu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB4B0u; return dd3_static_complete(rt,2u);
        }
        case 0xB4B0u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB4B1u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4B3u; return dd3_static_complete(rt,2u);
        }
        case 0xB4B3u: {
            dd3_static_write8(rt,0x05u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4B5u; return dd3_static_complete(rt,3u);
        }
        case 0xB4B5u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4B7u; return dd3_static_complete(rt,3u);
        }
        case 0xB4B7u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4B9u; return dd3_static_complete(rt,2u);
        }
        case 0xB4B9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB4BBu,0xB517u)) c++; rt->state.cpu.pc=0xB517u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB4BBu; return dd3_static_complete(rt,2u);
        }
        case 0xB4BBu: {
            uint16_t ea=0x0Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4BDu; return dd3_static_complete(rt,3u);
        }
        case 0xB4BDu: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4BFu; return dd3_static_complete(rt,3u);
        }
        case 0xB4BFu: {
            uint16_t ea=0x0Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4C1u; return dd3_static_complete(rt,3u);
        }
        case 0xB4C1u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB4C2u; return dd3_static_complete(rt,2u);
        }
        case 0xB4C2u: {
            uint16_t ea=0x08u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB4C4u; return dd3_static_complete(rt,3u);
        }
        case 0xB4C4u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4C6u; return dd3_static_complete(rt,3u);
        }
        case 0xB4C6u: {
            uint16_t ea=0x0Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4C8u; return dd3_static_complete(rt,3u);
        }
        case 0xB4C8u: {
            uint16_t ea=0x09u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB4CAu; return dd3_static_complete(rt,3u);
        }
        case 0xB4CAu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4CCu; return dd3_static_complete(rt,3u);
        }
        case 0xB4CCu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB4CEu,0xB4D5u)) c++; rt->state.cpu.pc=0xB4D5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB4CEu; return dd3_static_complete(rt,2u);
        }
        case 0xB4CEu: {
            dd3_static_push8(rt,(uint8_t)(0xB4D0u>>8)); dd3_static_push8(rt,(uint8_t)0xB4D0u);
            rt->state.cpu.pc=0xB5F7u; return dd3_static_complete(rt,6u);
        }
        case 0xB4D1u: {
            uint16_t ea=0x10u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4D3u; return dd3_static_complete(rt,3u);
        }
        case 0xB4D3u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4D5u; return dd3_static_complete(rt,3u);
        }
        case 0xB4D5u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4D7u; return dd3_static_complete(rt,3u);
        }
        case 0xB4D7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB4D9u,0xB517u)) c++; rt->state.cpu.pc=0xB517u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB4D9u; return dd3_static_complete(rt,2u);
        }
        case 0xB4D9u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4DBu; return dd3_static_complete(rt,3u);
        }
        case 0xB4DBu: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB4DDu; return dd3_static_complete(rt,3u);
        }
        case 0xB4DDu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB4DFu,0xB517u)) c++; rt->state.cpu.pc=0xB517u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB4DFu; return dd3_static_complete(rt,2u);
        }
        case 0xB4DFu: {
            uint16_t ea=0x0Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4E1u; return dd3_static_complete(rt,3u);
        }
        case 0xB4E1u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4E3u; return dd3_static_complete(rt,3u);
        }
        case 0xB4E3u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4E5u; return dd3_static_complete(rt,3u);
        }
        case 0xB4E5u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB4E6u; return dd3_static_complete(rt,2u);
        }
        case 0xB4E6u: {
            uint16_t ea=0x0Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB4E8u; return dd3_static_complete(rt,3u);
        }
        case 0xB4E8u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4EAu; return dd3_static_complete(rt,3u);
        }
        case 0xB4EAu: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4ECu; return dd3_static_complete(rt,3u);
        }
        case 0xB4ECu: {
            uint16_t ea=0x0Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB4EEu; return dd3_static_complete(rt,3u);
        }
        case 0xB4EEu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4F0u; return dd3_static_complete(rt,3u);
        }
        case 0xB4F0u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB4F2u,0xB4F9u)) c++; rt->state.cpu.pc=0xB4F9u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB4F2u; return dd3_static_complete(rt,2u);
        }
        case 0xB4F2u: {
            dd3_static_push8(rt,(uint8_t)(0xB4F4u>>8)); dd3_static_push8(rt,(uint8_t)0xB4F4u);
            rt->state.cpu.pc=0xB5F7u; return dd3_static_complete(rt,6u);
        }
        case 0xB4F5u: {
            uint16_t ea=0x13u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4F7u; return dd3_static_complete(rt,3u);
        }
        case 0xB4F7u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB4F9u; return dd3_static_complete(rt,3u);
        }
        case 0xB4F9u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4FBu; return dd3_static_complete(rt,3u);
        }
        case 0xB4FBu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB4FDu,0xB517u)) c++; rt->state.cpu.pc=0xB517u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB4FDu; return dd3_static_complete(rt,2u);
        }
        case 0xB4FDu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB4FFu; return dd3_static_complete(rt,3u);
        }
        case 0xB4FFu: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB501u; return dd3_static_complete(rt,3u);
        }
        case 0xB501u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB503u,0xB517u)) c++; rt->state.cpu.pc=0xB517u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB503u; return dd3_static_complete(rt,2u);
        }
        case 0xB503u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB505u; return dd3_static_complete(rt,2u);
        }
        case 0xB505u: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB507u; return dd3_static_complete(rt,3u);
        }
        case 0xB507u: {
            dd3_static_write8(rt,0x05u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB509u; return dd3_static_complete(rt,3u);
        }
        case 0xB509u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB50Bu; return dd3_static_complete(rt,3u);
        }
        case 0xB50Bu: {
            uint16_t ea=(uint16_t)(0x03F9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB50Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F9u,ea)?1u:0u));
        }
        case 0xB50Eu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB510u; return dd3_static_complete(rt,3u);
        }
        case 0xB510u: {
            dd3_static_write8(rt,(uint16_t)(0x0429u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB513u; return dd3_static_complete(rt,5u);
        }
        case 0xB513u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB514u; return dd3_static_complete(rt,2u);
        }
        case 0xB514u: {
            dd3_static_write8(rt,(uint16_t)(0x0419u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB517u; return dd3_static_complete(rt,5u);
        }
        case 0xB517u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB519u; return dd3_static_complete(rt,3u);
        }
        case 0xB519u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB51Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB51Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB51Du,0xB58Bu)) c++; rt->state.cpu.pc=0xB58Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB51Du; return dd3_static_complete(rt,2u);
        }
        case 0xB51Du: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB51Fu; return dd3_static_complete(rt,3u);
        }
        case 0xB51Fu: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB521u; return dd3_static_complete(rt,3u);
        }
        case 0xB521u: {
            uint16_t ea=0x0Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB523u; return dd3_static_complete(rt,3u);
        }
        case 0xB523u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB524u; return dd3_static_complete(rt,2u);
        }
        case 0xB524u: {
            uint16_t ea=0x1Du; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB526u; return dd3_static_complete(rt,3u);
        }
        case 0xB526u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB528u; return dd3_static_complete(rt,3u);
        }
        case 0xB528u: {
            uint16_t ea=0x0Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB52Au; return dd3_static_complete(rt,3u);
        }
        case 0xB52Au: {
            uint16_t ea=0x1Eu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB52Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB52Cu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB52Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB52Eu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB530u,0xB537u)) c++; rt->state.cpu.pc=0xB537u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB530u; return dd3_static_complete(rt,2u);
        }
        case 0xB530u: {
            dd3_static_push8(rt,(uint8_t)(0xB532u>>8)); dd3_static_push8(rt,(uint8_t)0xB532u);
            rt->state.cpu.pc=0xB5F7u; return dd3_static_complete(rt,6u);
        }
        case 0xB533u: {
            uint16_t ea=0x10u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB535u; return dd3_static_complete(rt,3u);
        }
        case 0xB535u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB537u; return dd3_static_complete(rt,3u);
        }
        case 0xB537u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB539u; return dd3_static_complete(rt,3u);
        }
        case 0xB539u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB53Bu,0xB541u)) c++; rt->state.cpu.pc=0xB541u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB53Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB53Bu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB53Du; return dd3_static_complete(rt,3u);
        }
        case 0xB53Du: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB53Fu; return dd3_static_complete(rt,3u);
        }
        case 0xB53Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB541u,0xB54Du)) c++; rt->state.cpu.pc=0xB54Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB541u; return dd3_static_complete(rt,2u);
        }
        case 0xB541u: {
            dd3_static_push8(rt,(uint8_t)(0xB543u>>8)); dd3_static_push8(rt,(uint8_t)0xB543u);
            rt->state.cpu.pc=0xB60Du; return dd3_static_complete(rt,6u);
        }
        case 0xB544u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB546u,0xB58Bu)) c++; rt->state.cpu.pc=0xB58Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB546u; return dd3_static_complete(rt,2u);
        }
        case 0xB546u: {
            uint8_t v=0x13u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB548u; return dd3_static_complete(rt,2u);
        }
        case 0xB548u: {
            dd3_static_write8(rt,(uint16_t)(0x0044u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB54Bu; return dd3_static_complete(rt,5u);
        }
        case 0xB54Bu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB54Du,0xB58Bu)) c++; rt->state.cpu.pc=0xB58Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB54Du; return dd3_static_complete(rt,2u);
        }
        case 0xB54Du: {
            uint16_t ea=0x22u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB54Fu; return dd3_static_complete(rt,3u);
        }
        case 0xB54Fu: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB551u; return dd3_static_complete(rt,3u);
        }
        case 0xB551u: {
            uint16_t ea=0x11u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB553u; return dd3_static_complete(rt,3u);
        }
        case 0xB553u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB554u; return dd3_static_complete(rt,2u);
        }
        case 0xB554u: {
            uint16_t ea=0x20u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB556u; return dd3_static_complete(rt,3u);
        }
        case 0xB556u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB558u; return dd3_static_complete(rt,3u);
        }
        case 0xB558u: {
            uint16_t ea=0x12u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB55Au; return dd3_static_complete(rt,3u);
        }
        case 0xB55Au: {
            uint16_t ea=0x21u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB55Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB55Cu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB55Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB55Eu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB560u,0xB567u)) c++; rt->state.cpu.pc=0xB567u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB560u; return dd3_static_complete(rt,2u);
        }
        case 0xB560u: {
            dd3_static_push8(rt,(uint8_t)(0xB562u>>8)); dd3_static_push8(rt,(uint8_t)0xB562u);
            rt->state.cpu.pc=0xB5F7u; return dd3_static_complete(rt,6u);
        }
        case 0xB563u: {
            uint16_t ea=0x13u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB565u; return dd3_static_complete(rt,3u);
        }
        case 0xB565u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB567u; return dd3_static_complete(rt,3u);
        }
        case 0xB567u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB569u; return dd3_static_complete(rt,3u);
        }
        case 0xB569u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB56Bu,0xB571u)) c++; rt->state.cpu.pc=0xB571u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB56Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB56Bu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB56Du; return dd3_static_complete(rt,3u);
        }
        case 0xB56Du: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB56Fu; return dd3_static_complete(rt,3u);
        }
        case 0xB56Fu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB571u,0xB577u)) c++; rt->state.cpu.pc=0xB577u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB571u; return dd3_static_complete(rt,2u);
        }
        case 0xB571u: {
            dd3_static_push8(rt,(uint8_t)(0xB573u>>8)); dd3_static_push8(rt,(uint8_t)0xB573u);
            rt->state.cpu.pc=0xB60Du; return dd3_static_complete(rt,6u);
        }
        case 0xB574u: {
            rt->state.cpu.pc=0xB58Bu; return dd3_static_complete(rt,3u);
        }
        case 0xB577u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB579u; return dd3_static_complete(rt,2u);
        }
        case 0xB579u: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB57Bu; return dd3_static_complete(rt,3u);
        }
        case 0xB57Bu: {
            dd3_static_write8(rt,0x05u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB57Du; return dd3_static_complete(rt,3u);
        }
        case 0xB57Du: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB57Fu; return dd3_static_complete(rt,3u);
        }
        case 0xB57Fu: {
            uint16_t ea=(uint16_t)(0x03F9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB582u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F9u,ea)?1u:0u));
        }
        case 0xB582u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB584u; return dd3_static_complete(rt,3u);
        }
        case 0xB584u: {
            dd3_static_write8(rt,(uint16_t)(0x0429u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB587u; return dd3_static_complete(rt,5u);
        }
        case 0xB587u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB588u; return dd3_static_complete(rt,2u);
        }
        case 0xB588u: {
            dd3_static_write8(rt,(uint16_t)(0x0419u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB58Bu; return dd3_static_complete(rt,5u);
        }
        case 0xB58Bu: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB58Du; return dd3_static_complete(rt,3u);
        }
        case 0xB58Du: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB58Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB58Fu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB591u,0xB5EDu)) c++; rt->state.cpu.pc=0xB5EDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB591u; return dd3_static_complete(rt,2u);
        }
        case 0xB591u: {
            uint16_t ea=0x0Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB593u; return dd3_static_complete(rt,3u);
        }
        case 0xB593u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB595u; return dd3_static_complete(rt,3u);
        }
        case 0xB595u: {
            uint16_t ea=0x23u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB597u; return dd3_static_complete(rt,3u);
        }
        case 0xB597u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB598u; return dd3_static_complete(rt,2u);
        }
        case 0xB598u: {
            uint16_t ea=0x08u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB59Au; return dd3_static_complete(rt,3u);
        }
        case 0xB59Au: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB59Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB59Cu: {
            uint16_t ea=0x24u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB59Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB59Eu: {
            uint16_t ea=0x09u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB5A0u; return dd3_static_complete(rt,3u);
        }
        case 0xB5A0u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5A2u; return dd3_static_complete(rt,3u);
        }
        case 0xB5A2u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB5A4u,0xB5ABu)) c++; rt->state.cpu.pc=0xB5ABu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5A4u; return dd3_static_complete(rt,2u);
        }
        case 0xB5A4u: {
            dd3_static_push8(rt,(uint8_t)(0xB5A6u>>8)); dd3_static_push8(rt,(uint8_t)0xB5A6u);
            rt->state.cpu.pc=0xB5F7u; return dd3_static_complete(rt,6u);
        }
        case 0xB5A7u: {
            uint16_t ea=0x25u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5A9u; return dd3_static_complete(rt,3u);
        }
        case 0xB5A9u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5ABu; return dd3_static_complete(rt,3u);
        }
        case 0xB5ABu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5ADu; return dd3_static_complete(rt,3u);
        }
        case 0xB5ADu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB5AFu,0xB5EDu)) c++; rt->state.cpu.pc=0xB5EDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5AFu; return dd3_static_complete(rt,2u);
        }
        case 0xB5AFu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5B1u; return dd3_static_complete(rt,3u);
        }
        case 0xB5B1u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB5B3u; return dd3_static_complete(rt,3u);
        }
        case 0xB5B3u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB5B5u,0xB5EDu)) c++; rt->state.cpu.pc=0xB5EDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5B5u; return dd3_static_complete(rt,2u);
        }
        case 0xB5B5u: {
            uint16_t ea=0x0Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5B7u; return dd3_static_complete(rt,3u);
        }
        case 0xB5B7u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5B9u; return dd3_static_complete(rt,3u);
        }
        case 0xB5B9u: {
            uint16_t ea=0x26u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5BBu; return dd3_static_complete(rt,3u);
        }
        case 0xB5BBu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB5BCu; return dd3_static_complete(rt,2u);
        }
        case 0xB5BCu: {
            uint16_t ea=0x0Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB5BEu; return dd3_static_complete(rt,3u);
        }
        case 0xB5BEu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5C0u; return dd3_static_complete(rt,3u);
        }
        case 0xB5C0u: {
            uint16_t ea=0x27u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5C2u; return dd3_static_complete(rt,3u);
        }
        case 0xB5C2u: {
            uint16_t ea=0x0Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB5C4u; return dd3_static_complete(rt,3u);
        }
        case 0xB5C4u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5C6u; return dd3_static_complete(rt,3u);
        }
        case 0xB5C6u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB5C8u,0xB5CFu)) c++; rt->state.cpu.pc=0xB5CFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5C8u; return dd3_static_complete(rt,2u);
        }
        case 0xB5C8u: {
            dd3_static_push8(rt,(uint8_t)(0xB5CAu>>8)); dd3_static_push8(rt,(uint8_t)0xB5CAu);
            rt->state.cpu.pc=0xB5F7u; return dd3_static_complete(rt,6u);
        }
        case 0xB5CBu: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5CDu; return dd3_static_complete(rt,3u);
        }
        case 0xB5CDu: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5CFu; return dd3_static_complete(rt,3u);
        }
        case 0xB5CFu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5D1u; return dd3_static_complete(rt,3u);
        }
        case 0xB5D1u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB5D3u,0xB5EDu)) c++; rt->state.cpu.pc=0xB5EDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5D3u; return dd3_static_complete(rt,2u);
        }
        case 0xB5D3u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5D5u; return dd3_static_complete(rt,3u);
        }
        case 0xB5D5u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB5D7u; return dd3_static_complete(rt,3u);
        }
        case 0xB5D7u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB5D9u,0xB5EDu)) c++; rt->state.cpu.pc=0xB5EDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5D9u; return dd3_static_complete(rt,2u);
        }
        case 0xB5D9u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5DBu; return dd3_static_complete(rt,2u);
        }
        case 0xB5DBu: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5DDu; return dd3_static_complete(rt,3u);
        }
        case 0xB5DDu: {
            dd3_static_write8(rt,0x05u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5DFu; return dd3_static_complete(rt,3u);
        }
        case 0xB5DFu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5E1u; return dd3_static_complete(rt,3u);
        }
        case 0xB5E1u: {
            uint16_t ea=(uint16_t)(0x03F9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5E4u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x03F9u,ea)?1u:0u));
        }
        case 0xB5E4u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5E6u; return dd3_static_complete(rt,3u);
        }
        case 0xB5E6u: {
            dd3_static_write8(rt,(uint16_t)(0x0429u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB5E9u; return dd3_static_complete(rt,5u);
        }
        case 0xB5E9u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5EAu; return dd3_static_complete(rt,2u);
        }
        case 0xB5EAu: {
            dd3_static_write8(rt,(uint16_t)(0x0419u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB5EDu; return dd3_static_complete(rt,5u);
        }
        case 0xB5EDu: {
            uint16_t ea=0x05u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5EFu; return dd3_static_complete(rt,3u);
        }
        case 0xB5EFu: {
            uint8_t v=0x07u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5F1u; return dd3_static_complete(rt,2u);
        }
        case 0xB5F1u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB5F3u,0xB5F5u)) c++; rt->state.cpu.pc=0xB5F5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB5F3u; return dd3_static_complete(rt,2u);
        }
        case 0xB5F3u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB5F4u; return dd3_static_complete(rt,2u);
        }
        case 0xB5F4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB5F5u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB5F6u; return dd3_static_complete(rt,2u);
        }
        case 0xB5F6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB5F7u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5F9u; return dd3_static_complete(rt,3u);
        }
        case 0xB5F9u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5FBu; return dd3_static_complete(rt,2u);
        }
        case 0xB5FBu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB5FDu; return dd3_static_complete(rt,3u);
        }
        case 0xB5FDu: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB5FFu; return dd3_static_complete(rt,3u);
        }
        case 0xB5FFu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB601u; return dd3_static_complete(rt,2u);
        }
        case 0xB601u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB602u; return dd3_static_complete(rt,2u);
        }
        case 0xB602u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB604u; return dd3_static_complete(rt,2u);
        }
        case 0xB604u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB606u; return dd3_static_complete(rt,3u);
        }
        case 0xB606u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB608u; return dd3_static_complete(rt,3u);
        }
        case 0xB608u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB60Au; return dd3_static_complete(rt,2u);
        }
        case 0xB60Au: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB60Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB60Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB60Du: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB60Fu; return dd3_static_complete(rt,3u);
        }
        case 0xB60Fu: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB611u; return dd3_static_complete(rt,4u);
        }
        case 0xB611u: {
            uint8_t v=0x15u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB613u; return dd3_static_complete(rt,2u);
        }
        case 0xB613u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB615u,0xB627u)) c++; rt->state.cpu.pc=0xB627u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB615u; return dd3_static_complete(rt,2u);
        }
        case 0xB615u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB617u; return dd3_static_complete(rt,3u);
        }
        case 0xB617u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xB619u; return dd3_static_complete(rt,2u);
        }
        case 0xB619u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB61Bu,0xB627u)) c++; rt->state.cpu.pc=0xB627u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB61Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB61Bu: {
            uint16_t ea=(uint16_t)(0x04C4u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB61Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x04C4u,ea)?1u:0u));
        }
        case 0xB61Eu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB620u,0xB627u)) c++; rt->state.cpu.pc=0xB627u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB620u; return dd3_static_complete(rt,2u);
        }
        case 0xB620u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB622u; return dd3_static_complete(rt,2u);
        }
        case 0xB622u: {
            dd3_static_write8(rt,(uint16_t)(0x04C4u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xB625u; return dd3_static_complete(rt,5u);
        }
        case 0xB625u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB626u; return dd3_static_complete(rt,2u);
        }
        case 0xB626u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB627u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB628u; return dd3_static_complete(rt,2u);
        }
        case 0xB628u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB629u: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB62Bu; return dd3_static_complete(rt,3u);
        }
        case 0xB62Bu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB62Du; return dd3_static_complete(rt,3u);
        }
        case 0xB62Du: {
            uint16_t ea=(uint16_t)(0x00CBu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB630u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00CBu,ea)?1u:0u));
        }
        case 0xB630u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB631u; return dd3_static_complete(rt,2u);
        }
        case 0xB631u: {
            uint16_t ea=(uint16_t)(0x00CBu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB634u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00CBu,ea)?1u:0u));
        }
        case 0xB634u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB636u; return dd3_static_complete(rt,3u);
        }
        case 0xB636u: {
            uint16_t ea=(uint16_t)(0x00D5u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB639u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00D5u,ea)?1u:0u));
        }
        case 0xB639u: {
            uint16_t ea=(uint16_t)(0x00D5u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB63Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00D5u,ea)?1u:0u));
        }
        case 0xB63Cu: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB63Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB63Eu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB640u,0xB655u)) c++; rt->state.cpu.pc=0xB655u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB640u; return dd3_static_complete(rt,2u);
        }
        case 0xB640u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB642u; return dd3_static_complete(rt,2u);
        }
        case 0xB642u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB644u; return dd3_static_complete(rt,3u);
        }
        case 0xB644u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB646u; return dd3_static_complete(rt,3u);
        }
        case 0xB646u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB648u; return dd3_static_complete(rt,2u);
        }
        case 0xB648u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB64Au; return dd3_static_complete(rt,3u);
        }
        case 0xB64Au: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB64Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB64Bu: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB64Du; return dd3_static_complete(rt,2u);
        }
        case 0xB64Du: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB64Fu; return dd3_static_complete(rt,3u);
        }
        case 0xB64Fu: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB651u; return dd3_static_complete(rt,3u);
        }
        case 0xB651u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB653u; return dd3_static_complete(rt,2u);
        }
        case 0xB653u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB655u; return dd3_static_complete(rt,3u);
        }
        case 0xB655u: {
            uint16_t ea=0x2Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB657u; return dd3_static_complete(rt,3u);
        }
        case 0xB657u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB659u,0xB661u)) c++; rt->state.cpu.pc=0xB661u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB659u; return dd3_static_complete(rt,2u);
        }
        case 0xB659u: {
            uint16_t ea=0x29u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB65Bu; return dd3_static_complete(rt,3u);
        }
        case 0xB65Bu: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB65Du; return dd3_static_complete(rt,2u);
        }
        case 0xB65Du: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB65Fu,0xB661u)) c++; rt->state.cpu.pc=0xB661u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB65Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB65Fu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB660u; return dd3_static_complete(rt,2u);
        }
        case 0xB660u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB661u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB662u; return dd3_static_complete(rt,2u);
        }
        case 0xB662u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB663u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB664u; return dd3_static_complete(rt,2u);
        }
        case 0xB664u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB665u; return dd3_static_complete(rt,3u);
        }
        case 0xB665u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB667u; return dd3_static_complete(rt,3u);
        }
        case 0xB667u: {
            uint16_t ea=(uint16_t)((0x3Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB669u; return dd3_static_complete(rt,4u);
        }
        case 0xB669u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB66Bu,0xB692u)) c++; rt->state.cpu.pc=0xB692u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB66Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB66Bu: {
            uint16_t ea=(uint16_t)(0x0431u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB66Eu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0431u,ea)?1u:0u));
        }
        case 0xB66Eu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB670u,0xB692u)) c++; rt->state.cpu.pc=0xB692u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB670u; return dd3_static_complete(rt,2u);
        }
        case 0xB670u: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB672u; return dd3_static_complete(rt,4u);
        }
        case 0xB672u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB674u,0xB692u)) c++; rt->state.cpu.pc=0xB692u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB674u; return dd3_static_complete(rt,2u);
        }
        case 0xB674u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB676u; return dd3_static_complete(rt,2u);
        }
        case 0xB676u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB678u; return dd3_static_complete(rt,2u);
        }
        case 0xB678u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB67Au,0xB692u)) c++; rt->state.cpu.pc=0xB692u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB67Au; return dd3_static_complete(rt,2u);
        }
        case 0xB67Au: {
            uint8_t v=0x75u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB67Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB67Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB67Eu,0xB692u)) c++; rt->state.cpu.pc=0xB692u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB67Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB67Eu: {
            uint16_t ea=(uint16_t)((0x4Cu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB680u; return dd3_static_complete(rt,4u);
        }
        case 0xB680u: {
            uint8_t v=0xC0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB682u; return dd3_static_complete(rt,2u);
        }
        case 0xB682u: {
            uint8_t v=0xC0u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB684u; return dd3_static_complete(rt,2u);
        }
        case 0xB684u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB686u,0xB692u)) c++; rt->state.cpu.pc=0xB692u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB686u; return dd3_static_complete(rt,2u);
        }
        case 0xB686u: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB688u; return dd3_static_complete(rt,4u);
        }
        case 0xB688u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB68Au; return dd3_static_complete(rt,2u);
        }
        case 0xB68Au: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB68Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB68Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB68Eu,0xB692u)) c++; rt->state.cpu.pc=0xB692u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB68Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB68Eu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB68Fu; return dd3_static_complete(rt,4u);
        }
        case 0xB68Fu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB690u; return dd3_static_complete(rt,2u);
        }
        case 0xB690u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB691u; return dd3_static_complete(rt,2u);
        }
        case 0xB691u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB692u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB693u; return dd3_static_complete(rt,4u);
        }
        case 0xB693u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB694u; return dd3_static_complete(rt,2u);
        }
        case 0xB694u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB695u; return dd3_static_complete(rt,2u);
        }
        case 0xB695u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB696u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB698u; return dd3_static_complete(rt,3u);
        }
        case 0xB698u: {
            uint8_t v=0x3Fu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB69Au; return dd3_static_complete(rt,2u);
        }
        case 0xB69Au: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xB69Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB69Cu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB69Eu,0xB6A0u)) c++; rt->state.cpu.pc=0xB6A0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB69Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB69Eu: {
            uint8_t v=0xCFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6A0u; return dd3_static_complete(rt,2u);
        }
        case 0xB6A0u: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6A2u; return dd3_static_complete(rt,3u);
        }
        case 0xB6A2u: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6A4u; return dd3_static_complete(rt,3u);
        }
        case 0xB6A4u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6A6u; return dd3_static_complete(rt,3u);
        }
        case 0xB6A6u: {
            uint16_t ea=(uint16_t)((0x74u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6A8u; return dd3_static_complete(rt,4u);
        }
        case 0xB6A8u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6A9u; return dd3_static_complete(rt,2u);
        }
        case 0xB6A9u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB6AAu; return dd3_static_complete(rt,2u);
        }
        case 0xB6AAu: {
            uint16_t ea=(uint16_t)(0xB78Eu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6ADu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB78Eu,ea)?1u:0u));
        }
        case 0xB6ADu: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6AFu; return dd3_static_complete(rt,3u);
        }
        case 0xB6AFu: {
            uint16_t ea=(uint16_t)(0xB78Fu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6B2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB78Fu,ea)?1u:0u));
        }
        case 0xB6B2u: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6B4u; return dd3_static_complete(rt,3u);
        }
        case 0xB6B4u: {
            uint16_t ea=(uint16_t)((0x7Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6B6u; return dd3_static_complete(rt,4u);
        }
        case 0xB6B6u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6B7u; return dd3_static_complete(rt,2u);
        }
        case 0xB6B7u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB6B8u; return dd3_static_complete(rt,2u);
        }
        case 0xB6B8u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6BAu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB6BAu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6BCu; return dd3_static_complete(rt,3u);
        }
        case 0xB6BCu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB6BDu; return dd3_static_complete(rt,2u);
        }
        case 0xB6BDu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6BFu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB6BFu: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6C1u; return dd3_static_complete(rt,3u);
        }
        case 0xB6C1u: {
            uint16_t ea=0x2Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6C3u; return dd3_static_complete(rt,3u);
        }
        case 0xB6C3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB6C5u,0xB6C8u)) c++; rt->state.cpu.pc=0xB6C8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB6C5u; return dd3_static_complete(rt,2u);
        }
        case 0xB6C5u: {
            rt->state.cpu.pc=0xB78Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB6C8u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6CAu; return dd3_static_complete(rt,3u);
        }
        case 0xB6CAu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6CCu; return dd3_static_complete(rt,2u);
        }
        case 0xB6CCu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6CEu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xB6CEu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB6CFu; return dd3_static_complete(rt,2u);
        }
        case 0xB6CFu: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB6D1u; return dd3_static_complete(rt,2u);
        }
        case 0xB6D1u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB6D3u,0xB6F0u)) c++; rt->state.cpu.pc=0xB6F0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB6D3u; return dd3_static_complete(rt,2u);
        }
        case 0xB6D3u: {
            dd3_static_write8(rt,(uint16_t)((0x1Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB6D5u; return dd3_static_complete(rt,4u);
        }
        case 0xB6D5u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6D7u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xB6D7u: {
            dd3_static_write8(rt,(uint16_t)((0x1Fu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB6D9u; return dd3_static_complete(rt,4u);
        }
        case 0xB6D9u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB6DAu; return dd3_static_complete(rt,2u);
        }
        case 0xB6DAu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6DCu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xB6DCu: {
            dd3_static_write8(rt,(uint16_t)((0x20u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB6DEu; return dd3_static_complete(rt,4u);
        }
        case 0xB6DEu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB6DFu; return dd3_static_complete(rt,2u);
        }
        case 0xB6DFu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6E1u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xB6E1u: {
            dd3_static_write8(rt,(uint16_t)((0x22u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB6E3u; return dd3_static_complete(rt,4u);
        }
        case 0xB6E3u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB6E4u; return dd3_static_complete(rt,2u);
        }
        case 0xB6E4u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6E6u; return dd3_static_complete(rt,2u);
        }
        case 0xB6E6u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xB6E8u; return dd3_static_complete(rt,2u);
        }
        case 0xB6E8u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB6EAu,0xB6ECu)) c++; rt->state.cpu.pc=0xB6ECu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB6EAu; return dd3_static_complete(rt,2u);
        }
        case 0xB6EAu: {
            uint8_t v=0x10u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6ECu; return dd3_static_complete(rt,2u);
        }
        case 0xB6ECu: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6EEu; return dd3_static_complete(rt,3u);
        }
        case 0xB6EEu: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB6F0u; return dd3_static_complete(rt,3u);
        }
        case 0xB6F0u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6F2u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xB6F2u: {
            uint8_t v=0x7Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB6F4u; return dd3_static_complete(rt,2u);
        }
        case 0xB6F4u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB6F6u,0xB713u)) c++; rt->state.cpu.pc=0xB713u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB6F6u; return dd3_static_complete(rt,2u);
        }
        case 0xB6F6u: {
            dd3_static_write8(rt,(uint16_t)((0x08u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB6F8u; return dd3_static_complete(rt,4u);
        }
        case 0xB6F8u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB6F9u; return dd3_static_complete(rt,2u);
        }
        case 0xB6F9u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB6FBu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xB6FBu: {
            dd3_static_write8(rt,(uint16_t)((0x0Au+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB6FDu; return dd3_static_complete(rt,4u);
        }
        case 0xB6FDu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB6FEu; return dd3_static_complete(rt,2u);
        }
        case 0xB6FEu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB700u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xB700u: {
            dd3_static_write8(rt,(uint16_t)((0x0Bu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB702u; return dd3_static_complete(rt,4u);
        }
        case 0xB702u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB703u; return dd3_static_complete(rt,2u);
        }
        case 0xB703u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB705u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xB705u: {
            dd3_static_write8(rt,(uint16_t)((0x0Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB707u; return dd3_static_complete(rt,4u);
        }
        case 0xB707u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB709u; return dd3_static_complete(rt,2u);
        }
        case 0xB709u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xB70Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB70Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB70Du,0xB70Fu)) c++; rt->state.cpu.pc=0xB70Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB70Du; return dd3_static_complete(rt,2u);
        }
        case 0xB70Du: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB70Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB70Fu: {
            uint16_t ea=0x04u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB711u; return dd3_static_complete(rt,3u);
        }
        case 0xB711u: {
            dd3_static_write8(rt,0x04u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB713u; return dd3_static_complete(rt,3u);
        }
        case 0xB713u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB715u; return dd3_static_complete(rt,3u);
        }
        case 0xB715u: {
            uint16_t ea=(uint16_t)((0x20u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB717u; return dd3_static_complete(rt,4u);
        }
        case 0xB717u: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0xB718u; return dd3_static_complete(rt,3u);
        }
        case 0xB718u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB719u; return dd3_static_complete(rt,2u);
        }
        case 0xB719u: {
            uint16_t ea=(uint16_t)(0x00DFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB71Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00DFu,ea)?1u:0u));
        }
        case 0xB71Cu: {
            dd3_static_write8(rt,(uint16_t)((0x20u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB71Eu; return dd3_static_complete(rt,4u);
        }
        case 0xB71Eu: {
            uint16_t ea=(uint16_t)(0x00E9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB721u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00E9u,ea)?1u:0u));
        }
        case 0xB721u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB723u; return dd3_static_complete(rt,2u);
        }
        case 0xB723u: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt));
            rt->state.cpu.pc=0xB724u; return dd3_static_complete(rt,4u);
        }
        case 0xB724u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB726u,0xB729u)) c++; rt->state.cpu.pc=0xB729u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB726u; return dd3_static_complete(rt,2u);
        }
        case 0xB726u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB727u; return dd3_static_complete(rt,2u);
        }
        case 0xB727u: {
            uint8_t v=0xFFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB729u; return dd3_static_complete(rt,2u);
        }
        case 0xB729u: {
            dd3_static_write8(rt,(uint16_t)((0x21u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB72Bu; return dd3_static_complete(rt,4u);
        }
        case 0xB72Bu: {
            uint16_t ea=(uint16_t)((0x0Bu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB72Du; return dd3_static_complete(rt,4u);
        }
        case 0xB72Du: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0xB72Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB72Eu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB72Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB72Fu: {
            uint16_t ea=(uint16_t)(0x00DFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB732u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00DFu,ea)?1u:0u));
        }
        case 0xB732u: {
            dd3_static_write8(rt,(uint16_t)((0x0Bu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB734u; return dd3_static_complete(rt,4u);
        }
        case 0xB734u: {
            uint16_t ea=(uint16_t)(0x00E9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB737u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00E9u,ea)?1u:0u));
        }
        case 0xB737u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB739u; return dd3_static_complete(rt,2u);
        }
        case 0xB739u: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt));
            rt->state.cpu.pc=0xB73Au; return dd3_static_complete(rt,4u);
        }
        case 0xB73Au: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB73Cu,0xB73Fu)) c++; rt->state.cpu.pc=0xB73Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB73Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB73Cu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB73Du; return dd3_static_complete(rt,2u);
        }
        case 0xB73Du: {
            uint8_t v=0xFFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB73Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB73Fu: {
            dd3_static_write8(rt,(uint16_t)((0x0Cu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB741u; return dd3_static_complete(rt,4u);
        }
        case 0xB741u: {
            uint16_t ea=(uint16_t)(0x007Du+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB744u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x007Du,ea)?1u:0u));
        }
        case 0xB744u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB746u,0xB75Eu)) c++; rt->state.cpu.pc=0xB75Eu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB746u; return dd3_static_complete(rt,2u);
        }
        case 0xB746u: {
            uint16_t ea=(uint16_t)((0x1Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB748u; return dd3_static_complete(rt,4u);
        }
        case 0xB748u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB749u; return dd3_static_complete(rt,2u);
        }
        case 0xB749u: {
            uint16_t ea=(uint16_t)((0x1Fu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB74Bu; return dd3_static_complete(rt,4u);
        }
        case 0xB74Bu: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB74Du; return dd3_static_complete(rt,2u);
        }
        case 0xB74Du: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB74Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB74Eu: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB750u; return dd3_static_complete(rt,2u);
        }
        case 0xB750u: {
            dd3_static_write8(rt,(uint16_t)((0x1Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB752u; return dd3_static_complete(rt,4u);
        }
        case 0xB752u: {
            uint16_t ea=(uint16_t)((0x08u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB754u; return dd3_static_complete(rt,4u);
        }
        case 0xB754u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB755u; return dd3_static_complete(rt,2u);
        }
        case 0xB755u: {
            uint16_t ea=(uint16_t)((0x0Au+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB757u; return dd3_static_complete(rt,4u);
        }
        case 0xB757u: {
            uint8_t v=0xFFu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a^v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB759u; return dd3_static_complete(rt,2u);
        }
        case 0xB759u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB75Au; return dd3_static_complete(rt,2u);
        }
        case 0xB75Au: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB75Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB75Cu: {
            dd3_static_write8(rt,(uint16_t)((0x08u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB75Eu; return dd3_static_complete(rt,4u);
        }
        case 0xB75Eu: {
            uint16_t ea=(uint16_t)((0x1Du+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB760u; return dd3_static_complete(rt,4u);
        }
        case 0xB760u: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0xB761u; return dd3_static_complete(rt,3u);
        }
        case 0xB761u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB762u; return dd3_static_complete(rt,2u);
        }
        case 0xB762u: {
            uint16_t ea=(uint16_t)(0x00B7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB765u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B7u,ea)?1u:0u));
        }
        case 0xB765u: {
            dd3_static_write8(rt,(uint16_t)((0x1Du+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB767u; return dd3_static_complete(rt,4u);
        }
        case 0xB767u: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB76Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0xB76Au: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB76Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB76Cu: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt));
            rt->state.cpu.pc=0xB76Du; return dd3_static_complete(rt,4u);
        }
        case 0xB76Du: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB76Fu,0xB772u)) c++; rt->state.cpu.pc=0xB772u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB76Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB76Fu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB770u; return dd3_static_complete(rt,2u);
        }
        case 0xB770u: {
            uint8_t v=0xFFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB772u; return dd3_static_complete(rt,2u);
        }
        case 0xB772u: {
            dd3_static_write8(rt,(uint16_t)((0x1Eu+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB774u; return dd3_static_complete(rt,4u);
        }
        case 0xB774u: {
            uint16_t ea=(uint16_t)((0x08u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB776u; return dd3_static_complete(rt,4u);
        }
        case 0xB776u: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0xB777u; return dd3_static_complete(rt,3u);
        }
        case 0xB777u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB778u; return dd3_static_complete(rt,2u);
        }
        case 0xB778u: {
            uint16_t ea=(uint16_t)(0x00B7u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB77Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B7u,ea)?1u:0u));
        }
        case 0xB77Bu: {
            dd3_static_write8(rt,(uint16_t)((0x08u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB77Du; return dd3_static_complete(rt,4u);
        }
        case 0xB77Du: {
            uint16_t ea=(uint16_t)(0x00C1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB780u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C1u,ea)?1u:0u));
        }
        case 0xB780u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB782u; return dd3_static_complete(rt,2u);
        }
        case 0xB782u: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt));
            rt->state.cpu.pc=0xB783u; return dd3_static_complete(rt,4u);
        }
        case 0xB783u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB785u,0xB788u)) c++; rt->state.cpu.pc=0xB788u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB785u; return dd3_static_complete(rt,2u);
        }
        case 0xB785u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB786u; return dd3_static_complete(rt,2u);
        }
        case 0xB786u: {
            uint8_t v=0xFFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB788u; return dd3_static_complete(rt,2u);
        }
        case 0xB788u: {
            dd3_static_write8(rt,(uint16_t)((0x09u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xB78Au; return dd3_static_complete(rt,4u);
        }
        case 0xB78Au: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB78Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB78Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB78Cu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB78Du; return dd3_static_complete(rt,2u);
        }
        case 0xB78Du: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xBFAFu: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBFB0u; return dd3_static_complete(rt,2u);
        }
        case 0xBFB0u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBFB1u; return dd3_static_complete(rt,3u);
        }
        case 0xBFB1u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBFB2u; return dd3_static_complete(rt,2u);
        }
        case 0xBFB2u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBFB3u; return dd3_static_complete(rt,3u);
        }
        case 0xBFB3u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBFB5u; return dd3_static_complete(rt,3u);
        }
        case 0xBFB5u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xBFB7u; return dd3_static_complete(rt,2u);
        }
        case 0xBFB7u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xBFB9u,0xBFF5u)) c++; rt->state.cpu.pc=0xBFF5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBFB9u; return dd3_static_complete(rt,2u);
        }
        case 0xBFB9u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBFBBu; return dd3_static_complete(rt,3u);
        }
        case 0xBFBBu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xBFBDu; return dd3_static_complete(rt,2u);
        }
        case 0xBFBDu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xBFBFu,0xBFF5u)) c++; rt->state.cpu.pc=0xBFF5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBFBFu; return dd3_static_complete(rt,2u);
        }
        case 0xBFBFu: {
            uint16_t ea=(uint16_t)((0x44u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBFC1u; return dd3_static_complete(rt,4u);
        }
        case 0xBFC1u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBFC3u; return dd3_static_complete(rt,2u);
        }
        case 0xBFC3u: {
            uint8_t v=0x35u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBFC5u; return dd3_static_complete(rt,2u);
        }
        case 0xBFC5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBFC7u,0xBFE6u)) c++; rt->state.cpu.pc=0xBFE6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBFC7u; return dd3_static_complete(rt,2u);
        }
        case 0xBFC7u: {
            uint8_t v=0x0Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBFC9u; return dd3_static_complete(rt,2u);
        }
        case 0xBFC9u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBFCBu,0xBFE6u)) c++; rt->state.cpu.pc=0xBFE6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBFCBu; return dd3_static_complete(rt,2u);
        }
        case 0xBFCBu: {
            uint8_t v=0x32u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBFCDu; return dd3_static_complete(rt,2u);
        }
        case 0xBFCDu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBFCFu,0xBFE6u)) c++; rt->state.cpu.pc=0xBFE6u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBFCFu; return dd3_static_complete(rt,2u);
        }
        case 0xBFCFu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBFD1u; return dd3_static_complete(rt,2u);
        }
        case 0xBFD1u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xBFD3u,0xBFF5u)) c++; rt->state.cpu.pc=0xBFF5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBFD3u; return dd3_static_complete(rt,2u);
        }
        case 0xBFD3u: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBFD6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0xBFD6u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBFD8u; return dd3_static_complete(rt,2u);
        }
        case 0xBFD8u: {
            uint8_t v=0x0Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBFDAu; return dd3_static_complete(rt,2u);
        }
        case 0xBFDAu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBFDCu,0xBFEFu)) c++; rt->state.cpu.pc=0xBFEFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBFDCu; return dd3_static_complete(rt,2u);
        }
        case 0xBFDCu: {
            uint8_t v=0x35u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBFDEu; return dd3_static_complete(rt,2u);
        }
        case 0xBFDEu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBFE0u,0xBFEFu)) c++; rt->state.cpu.pc=0xBFEFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBFE0u; return dd3_static_complete(rt,2u);
        }
        case 0xBFE0u: {
            uint8_t v=0x32u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBFE2u; return dd3_static_complete(rt,2u);
        }
        case 0xBFE2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBFE4u,0xBFF5u)) c++; rt->state.cpu.pc=0xBFF5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBFE4u; return dd3_static_complete(rt,2u);
        }
        case 0xBFE4u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBFE6u,0xBFEFu)) c++; rt->state.cpu.pc=0xBFEFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBFE6u; return dd3_static_complete(rt,2u);
        }
        case 0xBFE6u: {
            uint16_t ea=(uint16_t)(0x0044u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBFE9u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0044u,ea)?1u:0u));
        }
        case 0xBFE9u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBFEBu; return dd3_static_complete(rt,2u);
        }
        case 0xBFEBu: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBFEDu; return dd3_static_complete(rt,2u);
        }
        case 0xBFEDu: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xBFEFu,0xBFF5u)) c++; rt->state.cpu.pc=0xBFF5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBFEFu; return dd3_static_complete(rt,2u);
        }
        case 0xBFEFu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBFF0u; return dd3_static_complete(rt,4u);
        }
        case 0xBFF0u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBFF1u; return dd3_static_complete(rt,2u);
        }
        case 0xBFF1u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBFF2u; return dd3_static_complete(rt,4u);
        }
        case 0xBFF2u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBFF3u; return dd3_static_complete(rt,2u);
        }
        case 0xBFF3u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xBFF4u; return dd3_static_complete(rt,2u);
        }
        case 0xBFF4u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xBFF5u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBFF6u; return dd3_static_complete(rt,4u);
        }
        case 0xBFF6u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBFF7u; return dd3_static_complete(rt,2u);
        }
        case 0xBFF7u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBFF8u; return dd3_static_complete(rt,4u);
        }
        case 0xBFF8u: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBFF9u; return dd3_static_complete(rt,2u);
        }
        case 0xBFF9u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xBFFAu; return dd3_static_complete(rt,2u);
        }
        case 0xBFFAu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        default: return dd3_static_fail_unproven(rt,5,rt->state.cpu.pc);
    }
}
