/* Generated: no runtime opcode fetch or decode. */
#include "dd3_static_semantics.h"
int dd3_static_execute_bank_13(DD3StaticRuntime *rt) {
    switch (rt->state.cpu.pc) {
        case 0x9FF8u: {
            uint16_t ea=0x0D0Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FFBu; return dd3_static_complete(rt,4u);
        }
        case 0x9FFBu: {
            uint16_t ea=0x0D0Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0x9FFEu; return dd3_static_complete(rt,4u);
        }
        case 0xA000u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA002u,0xA014u)) c++; rt->state.cpu.pc=0xA014u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA002u; return dd3_static_complete(rt,2u);
        }
        case 0xA002u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA004u; return dd3_static_complete(rt,2u);
        }
        case 0xA004u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA006u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xA006u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA008u; return dd3_static_complete(rt,2u);
        }
        case 0xA008u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xA00Au; return dd3_static_complete(rt,2u);
        }
        case 0xA00Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA00Cu,0xA014u)) c++; rt->state.cpu.pc=0xA014u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA00Cu; return dd3_static_complete(rt,2u);
        }
        case 0xA00Cu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xA00Du; return dd3_static_complete(rt,2u);
        }
        case 0xA00Du: {
            uint16_t ea=(uint16_t)((0x99u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA00Fu; return dd3_static_complete(rt,4u);
        }
        case 0xA00Fu: {
            uint16_t ea=(uint16_t)(0xA018u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA012u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA018u,ea)?1u:0u));
        }
        case 0xA012u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA014u,0x9FF8u)) c++; rt->state.cpu.pc=0x9FF8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA014u; return dd3_static_complete(rt,2u);
        }
        case 0xA014u: {
            dd3_static_push8(rt,(uint8_t)(0xA016u>>8)); dd3_static_push8(rt,(uint8_t)0xA016u);
            rt->state.cpu.pc=0xA024u; return dd3_static_complete(rt,6u);
        }
        case 0xA017u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA01Cu: {
            uint16_t ea=(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA01Eu; return dd3_static_complete(rt,4u);
        }
        case 0xA01Eu: {
            uint8_t v=0xF7u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA020u; return dd3_static_complete(rt,2u);
        }
        case 0xA020u: {
            dd3_static_write8(rt,(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA022u; return dd3_static_complete(rt,4u);
        }
        case 0xA022u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xA023u; return dd3_static_complete(rt,2u);
        }
        case 0xA023u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA024u: {
            uint16_t ea=(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA026u; return dd3_static_complete(rt,4u);
        }
        case 0xA026u: {
            uint8_t v=0x08u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA028u; return dd3_static_complete(rt,2u);
        }
        case 0xA028u: {
            dd3_static_write8(rt,(uint16_t)((0x36u+rt->state.cpu.x)&0xFFu),rt->state.cpu.a);
            rt->state.cpu.pc=0xA02Au; return dd3_static_complete(rt,4u);
        }
        case 0xA02Au: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xA02Bu; return dd3_static_complete(rt,2u);
        }
        case 0xA02Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA0E9u: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA0EBu; return dd3_static_complete(rt,3u);
        }
        case 0xA0EBu: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA0EDu; return dd3_static_complete(rt,3u);
        }
        case 0xA0EDu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA0EFu,0xA103u)) c++; rt->state.cpu.pc=0xA103u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0EFu; return dd3_static_complete(rt,2u);
        }
        case 0xA0EFu: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA0F1u; return dd3_static_complete(rt,3u);
        }
        case 0xA0F1u: {
            uint16_t ea=0x3Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA0F3u; return dd3_static_complete(rt,3u);
        }
        case 0xA0F3u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xA0F5u,0xA100u)) c++; rt->state.cpu.pc=0xA100u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0F5u; return dd3_static_complete(rt,2u);
        }
        case 0xA0F5u: {
            uint16_t ea=0x00FEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA0F8u; return dd3_static_complete(rt,4u);
        }
        case 0xA0F8u: {
            uint16_t ea=0x00FFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xA0FBu; return dd3_static_complete(rt,4u);
        }
        case 0xA0FBu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xA0FDu,0xA100u)) c++; rt->state.cpu.pc=0xA100u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xA0FDu; return dd3_static_complete(rt,2u);
        }
        case 0xA0FDu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA0FFu; return dd3_static_complete(rt,2u);
        }
        case 0xA0FFu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA100u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA102u; return dd3_static_complete(rt,2u);
        }
        case 0xA102u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xA103u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xA105u; return dd3_static_complete(rt,2u);
        }
        case 0xA105u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB0E3u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0E5u; return dd3_static_complete(rt,2u);
        }
        case 0xB0E5u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB0E6u; return dd3_static_complete(rt,3u);
        }
        case 0xB0E6u: {
            uint16_t ea=0x04CCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0E9u; return dd3_static_complete(rt,4u);
        }
        case 0xB0E9u: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB0EBu,0xB10Fu)) c++; rt->state.cpu.pc=0xB10Fu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0EBu; return dd3_static_complete(rt,2u);
        }
        case 0xB0EBu: {
            uint16_t ea=0x04CEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0EEu; return dd3_static_complete(rt,4u);
        }
        case 0xB0EEu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB0F0u,0xB10Du)) c++; rt->state.cpu.pc=0xB10Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0F0u; return dd3_static_complete(rt,2u);
        }
        case 0xB0F0u: {
            uint16_t ea=0x04CFu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB0F3u; return dd3_static_complete(rt,6u);
        }
        case 0xB0F3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB0F5u,0xB10Du)) c++; rt->state.cpu.pc=0xB10Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB0F5u; return dd3_static_complete(rt,2u);
        }
        case 0xB0F5u: {
            uint16_t ea=0x04CEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB0F8u; return dd3_static_complete(rt,4u);
        }
        case 0xB0F8u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB0FAu; return dd3_static_complete(rt,2u);
        }
        case 0xB0FAu: {
            dd3_static_write8(rt,0x04CEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB0FDu; return dd3_static_complete(rt,4u);
        }
        case 0xB0FDu: {
            uint16_t ea=0x04CDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB100u; return dd3_static_complete(rt,4u);
        }
        case 0xB100u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB102u; return dd3_static_complete(rt,2u);
        }
        case 0xB102u: {
            dd3_static_write8(rt,0x04CDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB105u; return dd3_static_complete(rt,4u);
        }
        case 0xB105u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB107u; return dd3_static_complete(rt,2u);
        }
        case 0xB107u: {
            uint16_t ea=0x04CCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB10Au; return dd3_static_complete(rt,4u);
        }
        case 0xB10Au: {
            dd3_static_write8(rt,0x04CCu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB10Du; return dd3_static_complete(rt,4u);
        }
        case 0xB10Du: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB10Eu; return dd3_static_complete(rt,4u);
        }
        case 0xB10Eu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB10Fu: {
            uint8_t v=0x60u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB111u; return dd3_static_complete(rt,2u);
        }
        case 0xB111u: {
            dd3_static_push8(rt,(uint8_t)(0xB113u>>8)); dd3_static_push8(rt,(uint8_t)0xB113u);
            rt->state.cpu.pc=0xC000u; return dd3_static_complete(rt,6u);
        }
        case 0xB114u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB116u,0xB10Du)) c++; rt->state.cpu.pc=0xB10Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB116u; return dd3_static_complete(rt,2u);
        }
        case 0xB116u: {
            uint16_t ea=0x04CFu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB119u; return dd3_static_complete(rt,4u);
        }
        case 0xB119u: {
            uint8_t v=0x00u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB11Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB11Bu: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB11Du,0xB122u)) c++; rt->state.cpu.pc=0xB122u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB11Du; return dd3_static_complete(rt,2u);
        }
        case 0xB11Du: {
            uint16_t ea=0x04CFu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB120u; return dd3_static_complete(rt,6u);
        }
        case 0xB120u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB121u; return dd3_static_complete(rt,4u);
        }
        case 0xB121u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB122u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB124u; return dd3_static_complete(rt,2u);
        }
        case 0xB124u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB126u; return dd3_static_complete(rt,3u);
        }
        case 0xB126u: {
            uint16_t ea=0x04CCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB129u; return dd3_static_complete(rt,4u);
        }
        case 0xB129u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB12Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB12Bu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB12Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB12Cu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB12Eu; return dd3_static_complete(rt,5u);
        }
        case 0xB12Eu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB12Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB12Fu: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB131u; return dd3_static_complete(rt,5u);
        }
        case 0xB131u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB132u; return dd3_static_complete(rt,2u);
        }
        case 0xB132u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            { uint8_t c=rt->state.cpu.c; rt->state.cpu.c=(v>>7)&1u; v=(uint8_t)((v<<1)|c); dd3_static_set_nz(rt,v); }
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB134u; return dd3_static_complete(rt,5u);
        }
        case 0xB134u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB135u; return dd3_static_complete(rt,2u);
        }
        case 0xB135u: {
            uint16_t ea=0xB24Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB138u; return dd3_static_complete(rt,4u);
        }
        case 0xB138u: {
            dd3_static_write8(rt,0x1Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xB13Au; return dd3_static_complete(rt,3u);
        }
        case 0xB13Au: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB13Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB13Cu: {
            uint16_t ea=0xB24Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB13Fu; return dd3_static_complete(rt,4u);
        }
        case 0xB13Fu: {
            dd3_static_write8(rt,0x1Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB141u; return dd3_static_complete(rt,3u);
        }
        case 0xB141u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB143u; return dd3_static_complete(rt,2u);
        }
        case 0xB143u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x1Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB145u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x1Du),ea)?1u:0u));
        }
        case 0xB145u: {
            dd3_static_write8(rt,0x29u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB147u; return dd3_static_complete(rt,3u);
        }
        case 0xB147u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB148u; return dd3_static_complete(rt,2u);
        }
        case 0xB148u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x1Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB14Au; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x1Du),ea)?1u:0u));
        }
        case 0xB14Au: {
            dd3_static_write8(rt,0x2Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB14Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB14Cu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB14Du; return dd3_static_complete(rt,2u);
        }
        case 0xB14Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x1Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB14Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x1Du),ea)?1u:0u));
        }
        case 0xB14Fu: {
            dd3_static_write8(rt,0x2Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB151u; return dd3_static_complete(rt,3u);
        }
        case 0xB151u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB152u; return dd3_static_complete(rt,2u);
        }
        case 0xB152u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x1Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB154u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x1Du),ea)?1u:0u));
        }
        case 0xB154u: {
            dd3_static_write8(rt,0x2Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB156u; return dd3_static_complete(rt,3u);
        }
        case 0xB156u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB157u; return dd3_static_complete(rt,2u);
        }
        case 0xB157u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x1Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB159u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x1Du),ea)?1u:0u));
        }
        case 0xB159u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB15Bu; return dd3_static_complete(rt,3u);
        }
        case 0xB15Bu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB15Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB15Cu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x1Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB15Eu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x1Du),ea)?1u:0u));
        }
        case 0xB15Eu: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB160u; return dd3_static_complete(rt,3u);
        }
        case 0xB160u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB161u; return dd3_static_complete(rt,2u);
        }
        case 0xB161u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x1Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB163u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x1Du),ea)?1u:0u));
        }
        case 0xB163u: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB165u; return dd3_static_complete(rt,3u);
        }
        case 0xB165u: {
            uint16_t ea=0x04CDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB168u; return dd3_static_complete(rt,4u);
        }
        case 0xB168u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB169u; return dd3_static_complete(rt,2u);
        }
        case 0xB169u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB16Au; return dd3_static_complete(rt,2u);
        }
        case 0xB16Au: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB16Cu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB16Cu: {
            dd3_static_write8(rt,0x2Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xB16Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB16Eu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB16Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB16Fu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x29u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB171u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x29u),ea)?1u:0u));
        }
        case 0xB171u: {
            dd3_static_write8(rt,0x2Eu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB173u; return dd3_static_complete(rt,3u);
        }
        case 0xB173u: {
            uint16_t ea=0x04CEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB176u; return dd3_static_complete(rt,4u);
        }
        case 0xB176u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB177u; return dd3_static_complete(rt,2u);
        }
        case 0xB177u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB178u; return dd3_static_complete(rt,2u);
        }
        case 0xB178u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB17Au; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Du),ea)?1u:0u));
        }
        case 0xB17Au: {
            dd3_static_write8(rt,0x2Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB17Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB17Cu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB17Du; return dd3_static_complete(rt,2u);
        }
        case 0xB17Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Du)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB17Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Du),ea)?1u:0u));
        }
        case 0xB17Fu: {
            dd3_static_write8(rt,0x30u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB181u; return dd3_static_complete(rt,3u);
        }
        case 0xB181u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB184u; return dd3_static_complete(rt,4u);
        }
        case 0xB184u: {
            uint16_t ea=0x04CEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB187u; return dd3_static_complete(rt,4u);
        }
        case 0xB187u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB188u; return dd3_static_complete(rt,2u);
        }
        case 0xB188u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB189u; return dd3_static_complete(rt,2u);
        }
        case 0xB189u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB18Bu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xB18Bu: {
            dd3_static_push8(rt,dd3_static_pack_p(rt,1));
            rt->state.cpu.pc=0xB18Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB18Cu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB18Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB18Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB191u; return dd3_static_complete(rt,5u);
        }
        case 0xB191u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB192u; return dd3_static_complete(rt,2u);
        }
        case 0xB192u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB193u; return dd3_static_complete(rt,2u);
        }
        case 0xB193u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB195u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xB195u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB198u; return dd3_static_complete(rt,5u);
        }
        case 0xB198u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB199u; return dd3_static_complete(rt,2u);
        }
        case 0xB199u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB19Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB19Bu: {
            dd3_static_unpack_p(rt,dd3_static_pop8(rt));
            rt->state.cpu.pc=0xB19Cu; return dd3_static_complete(rt,4u);
        }
        case 0xB19Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB19Eu,0xB1A0u)) c++; rt->state.cpu.pc=0xB1A0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB19Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB19Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1A0u; return dd3_static_complete(rt,2u);
        }
        case 0xB1A0u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB1A3u; return dd3_static_complete(rt,5u);
        }
        case 0xB1A3u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB1A4u; return dd3_static_complete(rt,2u);
        }
        case 0xB1A4u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1A6u; return dd3_static_complete(rt,3u);
        }
        case 0xB1A6u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB1A9u; return dd3_static_complete(rt,5u);
        }
        case 0xB1A9u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB1AAu; return dd3_static_complete(rt,2u);
        }
        case 0xB1AAu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1ACu; return dd3_static_complete(rt,2u);
        }
        case 0xB1ACu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Fu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1AEu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Fu),ea)?1u:0u));
        }
        case 0xB1AEu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB1AFu; return dd3_static_complete(rt,2u);
        }
        case 0xB1AFu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB1B2u; return dd3_static_complete(rt,5u);
        }
        case 0xB1B2u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB1B3u; return dd3_static_complete(rt,2u);
        }
        case 0xB1B3u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB1B5u; return dd3_static_complete(rt,5u);
        }
        case 0xB1B5u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB1B7u,0xB1ACu)) c++; rt->state.cpu.pc=0xB1ACu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1B7u; return dd3_static_complete(rt,2u);
        }
        case 0xB1B7u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xB1BAu; return dd3_static_complete(rt,4u);
        }
        case 0xB1BAu: {
            uint16_t ea=0x04CEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1BDu; return dd3_static_complete(rt,4u);
        }
        case 0xB1BDu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB1BFu; return dd3_static_complete(rt,2u);
        }
        case 0xB1BFu: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB1C1u; return dd3_static_complete(rt,3u);
        }
        case 0xB1C1u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB1C3u,0xB1DAu)) c++; rt->state.cpu.pc=0xB1DAu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1C3u; return dd3_static_complete(rt,2u);
        }
        case 0xB1C3u: {
            uint16_t ea=0x04CEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1C6u; return dd3_static_complete(rt,4u);
        }
        case 0xB1C6u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB1C8u; return dd3_static_complete(rt,2u);
        }
        case 0xB1C8u: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB1CAu; return dd3_static_complete(rt,3u);
        }
        case 0xB1CAu: {
            uint16_t ea=0x04CEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1CDu; return dd3_static_complete(rt,4u);
        }
        case 0xB1CDu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB1CFu; return dd3_static_complete(rt,2u);
        }
        case 0xB1CFu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB1D0u; return dd3_static_complete(rt,2u);
        }
        case 0xB1D0u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB1D2u; return dd3_static_complete(rt,2u);
        }
        case 0xB1D2u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB1D4u; return dd3_static_complete(rt,3u);
        }
        case 0xB1D4u: {
            dd3_static_write8(rt,0x04CEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB1D7u; return dd3_static_complete(rt,4u);
        }
        case 0xB1D7u: {
            rt->state.cpu.pc=0xB241u; return dd3_static_complete(rt,3u);
        }
        case 0xB1DAu: {
            uint16_t ea=0x04CEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1DDu; return dd3_static_complete(rt,4u);
        }
        case 0xB1DDu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB1DFu; return dd3_static_complete(rt,2u);
        }
        case 0xB1DFu: {
            dd3_static_write8(rt,0x04CEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB1E2u; return dd3_static_complete(rt,4u);
        }
        case 0xB1E2u: {
            uint16_t ea=0x04CDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1E5u; return dd3_static_complete(rt,4u);
        }
        case 0xB1E5u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB1E7u,0xB21Bu)) c++; rt->state.cpu.pc=0xB21Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1E7u; return dd3_static_complete(rt,2u);
        }
        case 0xB1E7u: {
            uint16_t ea=0x04CDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1EAu; return dd3_static_complete(rt,4u);
        }
        case 0xB1EAu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB1ECu; return dd3_static_complete(rt,2u);
        }
        case 0xB1ECu: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB1EEu; return dd3_static_complete(rt,3u);
        }
        case 0xB1EEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB1F0u,0xB204u)) c++; rt->state.cpu.pc=0xB204u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1F0u; return dd3_static_complete(rt,2u);
        }
        case 0xB1F0u: {
            uint16_t ea=0x04CCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1F3u; return dd3_static_complete(rt,4u);
        }
        case 0xB1F3u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB1F5u; return dd3_static_complete(rt,2u);
        }
        case 0xB1F5u: {
            dd3_static_write8(rt,0x04CCu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB1F8u; return dd3_static_complete(rt,4u);
        }
        case 0xB1F8u: {
            uint16_t ea=0x04CEu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1FBu; return dd3_static_complete(rt,4u);
        }
        case 0xB1FBu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB1FDu,0xB202u)) c++; rt->state.cpu.pc=0xB202u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB1FDu; return dd3_static_complete(rt,2u);
        }
        case 0xB1FDu: {
            uint8_t v=0x18u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB1FFu; return dd3_static_complete(rt,2u);
        }
        case 0xB1FFu: {
            dd3_static_write8(rt,0x04CFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB202u; return dd3_static_complete(rt,4u);
        }
        case 0xB202u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB203u; return dd3_static_complete(rt,4u);
        }
        case 0xB203u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB204u: {
            uint16_t ea=0x04CDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB207u; return dd3_static_complete(rt,4u);
        }
        case 0xB207u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB209u; return dd3_static_complete(rt,2u);
        }
        case 0xB209u: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB20Bu; return dd3_static_complete(rt,3u);
        }
        case 0xB20Bu: {
            uint16_t ea=0x04CDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB20Eu; return dd3_static_complete(rt,4u);
        }
        case 0xB20Eu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB210u; return dd3_static_complete(rt,2u);
        }
        case 0xB210u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB211u; return dd3_static_complete(rt,2u);
        }
        case 0xB211u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB213u; return dd3_static_complete(rt,2u);
        }
        case 0xB213u: {
            uint16_t ea=0x1Fu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB215u; return dd3_static_complete(rt,3u);
        }
        case 0xB215u: {
            dd3_static_write8(rt,0x04CDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB218u; return dd3_static_complete(rt,4u);
        }
        case 0xB218u: {
            rt->state.cpu.pc=0xB23Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB21Bu: {
            uint16_t ea=0x04CDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB21Eu; return dd3_static_complete(rt,4u);
        }
        case 0xB21Eu: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB220u; return dd3_static_complete(rt,2u);
        }
        case 0xB220u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB222u,0xB22Cu)) c++; rt->state.cpu.pc=0xB22Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB222u; return dd3_static_complete(rt,2u);
        }
        case 0xB222u: {
            uint16_t ea=0x04CCu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB225u; return dd3_static_complete(rt,4u);
        }
        case 0xB225u: {
            uint8_t v=0x7Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB227u; return dd3_static_complete(rt,2u);
        }
        case 0xB227u: {
            dd3_static_write8(rt,0x04CCu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB22Au; return dd3_static_complete(rt,4u);
        }
        case 0xB22Au: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB22Bu; return dd3_static_complete(rt,4u);
        }
        case 0xB22Bu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB22Cu: {
            uint16_t ea=0x04CDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB22Fu; return dd3_static_complete(rt,4u);
        }
        case 0xB22Fu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB231u; return dd3_static_complete(rt,2u);
        }
        case 0xB231u: {
            dd3_static_write8(rt,0x1Fu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB233u; return dd3_static_complete(rt,3u);
        }
        case 0xB233u: {
            uint16_t ea=0x04CDu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB236u; return dd3_static_complete(rt,4u);
        }
        case 0xB236u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB237u; return dd3_static_complete(rt,2u);
        }
        case 0xB237u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB239u; return dd3_static_complete(rt,2u);
        }
        case 0xB239u: {
            dd3_static_write8(rt,0x04CDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB23Cu; return dd3_static_complete(rt,4u);
        }
        case 0xB23Cu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB23Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB23Eu: {
            dd3_static_write8(rt,0x04CFu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB241u; return dd3_static_complete(rt,4u);
        }
        case 0xB241u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB242u; return dd3_static_complete(rt,4u);
        }
        case 0xB242u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB243u; return dd3_static_complete(rt,2u);
        }
        case 0xB243u: {
            uint8_t v=0x01u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xB245u; return dd3_static_complete(rt,2u);
        }
        case 0xB245u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB247u,0xB24Au)) c++; rt->state.cpu.pc=0xB24Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB247u; return dd3_static_complete(rt,2u);
        }
        case 0xB247u: {
            rt->state.cpu.pc=0xB0E5u; return dd3_static_complete(rt,3u);
        }
        case 0xB24Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB882u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB884u; return dd3_static_complete(rt,3u);
        }
        case 0xB884u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB886u; return dd3_static_complete(rt,2u);
        }
        case 0xB886u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB888u,0xB88Du)) c++; rt->state.cpu.pc=0xB88Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB888u; return dd3_static_complete(rt,2u);
        }
        case 0xB888u: {
            uint8_t v=0x0Cu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB88Au; return dd3_static_complete(rt,2u);
        }
        case 0xB88Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB88Cu,0xB88Du)) c++; rt->state.cpu.pc=0xB88Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB88Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB88Cu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB88Du: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB88Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB88Fu: {
            dd3_static_push8(rt,(uint8_t)(0xB891u>>8)); dd3_static_push8(rt,(uint8_t)0xB891u);
            rt->state.cpu.pc=0xC000u; return dd3_static_complete(rt,6u);
        }
        case 0xB892u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB894u,0xB8D7u)) c++; rt->state.cpu.pc=0xB8D7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB894u; return dd3_static_complete(rt,2u);
        }
        case 0xB894u: {
            uint16_t ea=0x069Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB897u; return dd3_static_complete(rt,4u);
        }
        case 0xB897u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB899u; return dd3_static_complete(rt,2u);
        }
        case 0xB899u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB89Bu,0xB8D4u)) c++; rt->state.cpu.pc=0xB8D4u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB89Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB89Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB89Du; return dd3_static_complete(rt,2u);
        }
        case 0xB89Du: {
            dd3_static_write8(rt,0x069Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8A0u; return dd3_static_complete(rt,4u);
        }
        case 0xB8A0u: {
            uint16_t ea=0x0693u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8A3u; return dd3_static_complete(rt,4u);
        }
        case 0xB8A3u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB8A4u; return dd3_static_complete(rt,2u);
        }
        case 0xB8A4u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB8A6u,0xB8A8u)) c++; rt->state.cpu.pc=0xB8A8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB8A6u; return dd3_static_complete(rt,2u);
        }
        case 0xB8A6u: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8A8u; return dd3_static_complete(rt,2u);
        }
        case 0xB8A8u: {
            dd3_static_write8(rt,0x0693u,rt->state.cpu.y);
            rt->state.cpu.pc=0xB8ABu; return dd3_static_complete(rt,4u);
        }
        case 0xB8ABu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8ACu; return dd3_static_complete(rt,2u);
        }
        case 0xB8ACu: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8ADu; return dd3_static_complete(rt,2u);
        }
        case 0xB8ADu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB8AEu; return dd3_static_complete(rt,2u);
        }
        case 0xB8AEu: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8B0u; return dd3_static_complete(rt,3u);
        }
        case 0xB8B0u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB8B2u; return dd3_static_complete(rt,2u);
        }
        case 0xB8B2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB8B4u,0xB8D8u)) c++; rt->state.cpu.pc=0xB8D8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB8B4u; return dd3_static_complete(rt,2u);
        }
        case 0xB8B4u: {
            uint16_t ea=(uint16_t)(0xBB1Eu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8B7u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBB1Eu,ea)?1u:0u));
        }
        case 0xB8B7u: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8B9u; return dd3_static_complete(rt,3u);
        }
        case 0xB8B9u: {
            uint16_t ea=(uint16_t)(0xBB1Fu+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8BCu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBB1Fu,ea)?1u:0u));
        }
        case 0xB8BCu: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8BEu; return dd3_static_complete(rt,3u);
        }
        case 0xB8BEu: {
            uint8_t v=0xD6u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8C0u; return dd3_static_complete(rt,2u);
        }
        case 0xB8C0u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8C2u; return dd3_static_complete(rt,3u);
        }
        case 0xB8C2u: {
            uint8_t v=0x29u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8C4u; return dd3_static_complete(rt,2u);
        }
        case 0xB8C4u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8C6u; return dd3_static_complete(rt,3u);
        }
        case 0xB8C6u: {
            dd3_static_push8(rt,(uint8_t)(0xB8C8u>>8)); dd3_static_push8(rt,(uint8_t)0xB8C8u);
            rt->state.cpu.pc=0xB90Au; return dd3_static_complete(rt,6u);
        }
        case 0xB8C9u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB8CBu; return dd3_static_complete(rt,5u);
        }
        case 0xB8CBu: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB8CDu; return dd3_static_complete(rt,5u);
        }
        case 0xB8CDu: {
            uint8_t v=0xF6u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8CFu; return dd3_static_complete(rt,2u);
        }
        case 0xB8CFu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8D1u; return dd3_static_complete(rt,3u);
        }
        case 0xB8D1u: {
            dd3_static_push8(rt,(uint8_t)(0xB8D3u>>8)); dd3_static_push8(rt,(uint8_t)0xB8D3u);
            rt->state.cpu.pc=0xB90Au; return dd3_static_complete(rt,6u);
        }
        case 0xB8D4u: {
            uint16_t ea=0x069Du; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB8D7u; return dd3_static_complete(rt,6u);
        }
        case 0xB8D7u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB8D8u: {
            uint16_t ea=(uint16_t)(0xBB24u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8DBu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBB24u,ea)?1u:0u));
        }
        case 0xB8DBu: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8DDu; return dd3_static_complete(rt,3u);
        }
        case 0xB8DDu: {
            uint16_t ea=(uint16_t)(0xBB25u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8E0u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBB25u,ea)?1u:0u));
        }
        case 0xB8E0u: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8E2u; return dd3_static_complete(rt,3u);
        }
        case 0xB8E2u: {
            uint8_t v=0x4Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8E4u; return dd3_static_complete(rt,2u);
        }
        case 0xB8E4u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8E6u; return dd3_static_complete(rt,3u);
        }
        case 0xB8E6u: {
            uint8_t v=0x28u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8E8u; return dd3_static_complete(rt,2u);
        }
        case 0xB8E8u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8EAu; return dd3_static_complete(rt,3u);
        }
        case 0xB8EAu: {
            dd3_static_push8(rt,(uint8_t)(0xB8ECu>>8)); dd3_static_push8(rt,(uint8_t)0xB8ECu);
            rt->state.cpu.pc=0xB90Au; return dd3_static_complete(rt,6u);
        }
        case 0xB8EDu: {
            uint8_t v=0x54u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8EFu; return dd3_static_complete(rt,2u);
        }
        case 0xB8EFu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8F1u; return dd3_static_complete(rt,3u);
        }
        case 0xB8F1u: {
            dd3_static_push8(rt,(uint8_t)(0xB8F3u>>8)); dd3_static_push8(rt,(uint8_t)0xB8F3u);
            rt->state.cpu.pc=0xB90Au; return dd3_static_complete(rt,6u);
        }
        case 0xB8F4u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB8F6u; return dd3_static_complete(rt,5u);
        }
        case 0xB8F6u: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB8F8u; return dd3_static_complete(rt,5u);
        }
        case 0xB8F8u: {
            uint8_t v=0x6Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB8FAu; return dd3_static_complete(rt,2u);
        }
        case 0xB8FAu: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB8FCu; return dd3_static_complete(rt,3u);
        }
        case 0xB8FCu: {
            dd3_static_push8(rt,(uint8_t)(0xB8FEu>>8)); dd3_static_push8(rt,(uint8_t)0xB8FEu);
            rt->state.cpu.pc=0xB90Au; return dd3_static_complete(rt,6u);
        }
        case 0xB8FFu: {
            uint8_t v=0x74u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB901u; return dd3_static_complete(rt,2u);
        }
        case 0xB901u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB903u; return dd3_static_complete(rt,3u);
        }
        case 0xB903u: {
            dd3_static_push8(rt,(uint8_t)(0xB905u>>8)); dd3_static_push8(rt,(uint8_t)0xB905u);
            rt->state.cpu.pc=0xB90Au; return dd3_static_complete(rt,6u);
        }
        case 0xB906u: {
            uint16_t ea=0x069Du; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB909u; return dd3_static_complete(rt,6u);
        }
        case 0xB909u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB90Au: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB90Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB90Cu: {
            uint8_t v=0x02u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB90Eu; return dd3_static_complete(rt,2u);
        }
        case 0xB90Eu: {
            rt->state.cpu.pc=0xB911u; return dd3_static_complete(rt,3u);
        }
        case 0xB911u: {
            rt->state.cpu.a=rt->state.cpu.x; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB912u; return dd3_static_complete(rt,2u);
        }
        case 0xB912u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB913u; return dd3_static_complete(rt,3u);
        }
        case 0xB913u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB916u; return dd3_static_complete(rt,4u);
        }
        case 0xB916u: {
            uint16_t ea=0x1Au; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB918u; return dd3_static_complete(rt,3u);
        }
        case 0xB918u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB91Bu; return dd3_static_complete(rt,5u);
        }
        case 0xB91Bu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB91Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB91Cu: {
            uint16_t ea=0x19u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB91Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB91Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB921u; return dd3_static_complete(rt,5u);
        }
        case 0xB921u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB922u; return dd3_static_complete(rt,2u);
        }
        case 0xB922u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB923u; return dd3_static_complete(rt,4u);
        }
        case 0xB923u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB926u; return dd3_static_complete(rt,5u);
        }
        case 0xB926u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB927u; return dd3_static_complete(rt,2u);
        }
        case 0xB927u: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB928u; return dd3_static_complete(rt,2u);
        }
        case 0xB928u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB92Bu; return dd3_static_complete(rt,5u);
        }
        case 0xB92Bu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB92Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB92Cu: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB92Du; return dd3_static_complete(rt,2u);
        }
        case 0xB92Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x1Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB92Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x1Bu),ea)?1u:0u));
        }
        case 0xB92Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xB932u; return dd3_static_complete(rt,5u);
        }
        case 0xB932u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB933u; return dd3_static_complete(rt,2u);
        }
        case 0xB933u: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB934u; return dd3_static_complete(rt,2u);
        }
        case 0xB934u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB936u,0xB92Du)) c++; rt->state.cpu.pc=0xB92Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB936u; return dd3_static_complete(rt,2u);
        }
        case 0xB936u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xB939u; return dd3_static_complete(rt,4u);
        }
        case 0xB939u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB93Au: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB93Bu: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB93Du; return dd3_static_complete(rt,2u);
        }
        case 0xB93Du: {
            dd3_static_push8(rt,(uint8_t)(0xB93Fu>>8)); dd3_static_push8(rt,(uint8_t)0xB93Fu);
            rt->state.cpu.pc=0xC000u; return dd3_static_complete(rt,6u);
        }
        case 0xB940u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB942u,0xB93Au)) c++; rt->state.cpu.pc=0xB93Au; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB942u; return dd3_static_complete(rt,2u);
        }
        case 0xB942u: {
            uint16_t ea=0x069Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB945u; return dd3_static_complete(rt,4u);
        }
        case 0xB945u: {
            uint8_t v=0x02u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB947u; return dd3_static_complete(rt,2u);
        }
        case 0xB947u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB949u,0xB9BBu)) c++; rt->state.cpu.pc=0xB9BBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB949u; return dd3_static_complete(rt,2u);
        }
        case 0xB949u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB94Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB94Bu: {
            dd3_static_write8(rt,0x069Du,rt->state.cpu.a);
            rt->state.cpu.pc=0xB94Eu; return dd3_static_complete(rt,4u);
        }
        case 0xB94Eu: {
            uint16_t ea=0x0693u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB951u; return dd3_static_complete(rt,4u);
        }
        case 0xB951u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB953u,0xB960u)) c++; rt->state.cpu.pc=0xB960u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB953u; return dd3_static_complete(rt,2u);
        }
        case 0xB953u: {
            uint8_t v=0x04u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB955u; return dd3_static_complete(rt,2u);
        }
        case 0xB955u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB957u,0xB9BBu)) c++; rt->state.cpu.pc=0xB9BBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB957u; return dd3_static_complete(rt,2u);
        }
        case 0xB957u: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB959u; return dd3_static_complete(rt,2u);
        }
        case 0xB959u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB95Bu,0xB966u)) c++; rt->state.cpu.pc=0xB966u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB95Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB95Bu: {
            uint16_t ea=0x3Eu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB95Du; return dd3_static_complete(rt,3u);
        }
        case 0xB95Du: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB95Fu,0xB966u)) c++; rt->state.cpu.pc=0xB966u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB95Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB95Fu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB960u: {
            dd3_static_push8(rt,(uint8_t)(0xB962u>>8)); dd3_static_push8(rt,(uint8_t)0xB962u);
            rt->state.cpu.pc=0xB9EBu; return dd3_static_complete(rt,6u);
        }
        case 0xB963u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB965u,0xB966u)) c++; rt->state.cpu.pc=0xB966u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB965u; return dd3_static_complete(rt,2u);
        }
        case 0xB965u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB966u: {
            uint8_t v=0x2Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB968u; return dd3_static_complete(rt,2u);
        }
        case 0xB968u: {
            dd3_static_write8(rt,0x1Au,rt->state.cpu.a);
            rt->state.cpu.pc=0xB96Au; return dd3_static_complete(rt,3u);
        }
        case 0xB96Au: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB96Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB96Cu: {
            rt->state.cpu.a=rt->state.cpu.y; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB96Du; return dd3_static_complete(rt,2u);
        }
        case 0xB96Du: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB96Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB96Eu: {
            uint16_t ea=(uint16_t)(0x00B9u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB971u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00B9u,ea)?1u:0u));
        }
        case 0xB971u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB972u; return dd3_static_complete(rt,2u);
        }
        case 0xB972u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB973u; return dd3_static_complete(rt,2u);
        }
        case 0xB973u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB974u; return dd3_static_complete(rt,2u);
        }
        case 0xB974u: {
            uint8_t v=0x1Fu;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB976u; return dd3_static_complete(rt,2u);
        }
        case 0xB976u: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB978u; return dd3_static_complete(rt,3u);
        }
        case 0xB978u: {
            uint16_t ea=(uint16_t)(0x0698u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB97Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0698u,ea)?1u:0u));
        }
        case 0xB97Bu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB97Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB97Cu: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB97Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB97Eu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB97Fu; return dd3_static_complete(rt,2u);
        }
        case 0xB97Fu: {
            uint16_t ea=(uint16_t)(0xB9BFu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB982u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB9BFu,ea)?1u:0u));
        }
        case 0xB982u: {
            dd3_static_write8(rt,0x19u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB984u; return dd3_static_complete(rt,3u);
        }
        case 0xB984u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB985u; return dd3_static_complete(rt,4u);
        }
        case 0xB985u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB986u; return dd3_static_complete(rt,2u);
        }
        case 0xB986u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB987u; return dd3_static_complete(rt,3u);
        }
        case 0xB987u: {
            uint16_t ea=(uint16_t)(0x0698u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB98Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x0698u,ea)?1u:0u));
        }
        case 0xB98Au: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB98Bu; return dd3_static_complete(rt,2u);
        }
        case 0xB98Bu: {
            rt->state.cpu.x=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xB98Cu; return dd3_static_complete(rt,2u);
        }
        case 0xB98Cu: {
            uint16_t ea=(uint16_t)(0xB9C3u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB98Fu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB9C3u,ea)?1u:0u));
        }
        case 0xB98Fu: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB991u; return dd3_static_complete(rt,3u);
        }
        case 0xB991u: {
            uint16_t ea=(uint16_t)(0xB9C4u+rt->state.cpu.x); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB994u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xB9C4u,ea)?1u:0u));
        }
        case 0xB994u: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB996u; return dd3_static_complete(rt,3u);
        }
        case 0xB996u: {
            uint16_t ea=0x0693u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB999u; return dd3_static_complete(rt,4u);
        }
        case 0xB999u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xB99Au; return dd3_static_complete(rt,2u);
        }
        case 0xB99Au: {
            uint16_t ea=0x1Bu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB99Cu; return dd3_static_complete(rt,3u);
        }
        case 0xB99Cu: {
            dd3_static_write8(rt,0x1Bu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB99Eu; return dd3_static_complete(rt,3u);
        }
        case 0xB99Eu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9A0u; return dd3_static_complete(rt,2u);
        }
        case 0xB9A0u: {
            uint16_t ea=0x1Cu; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xB9A2u; return dd3_static_complete(rt,3u);
        }
        case 0xB9A2u: {
            dd3_static_write8(rt,0x1Cu,rt->state.cpu.a);
            rt->state.cpu.pc=0xB9A4u; return dd3_static_complete(rt,3u);
        }
        case 0xB9A4u: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9A6u; return dd3_static_complete(rt,2u);
        }
        case 0xB9A6u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9A8u; return dd3_static_complete(rt,2u);
        }
        case 0xB9A8u: {
            dd3_static_push8(rt,(uint8_t)(0xB9AAu>>8)); dd3_static_push8(rt,(uint8_t)0xB9AAu);
            rt->state.cpu.pc=0xB911u; return dd3_static_complete(rt,6u);
        }
        case 0xB9ABu: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB9ACu; return dd3_static_complete(rt,4u);
        }
        case 0xB9ACu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB9ADu; return dd3_static_complete(rt,2u);
        }
        case 0xB9ADu: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xB9AEu; return dd3_static_complete(rt,2u);
        }
        case 0xB9AEu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB9B0u,0xB96Cu)) c++; rt->state.cpu.pc=0xB96Cu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB9B0u; return dd3_static_complete(rt,2u);
        }
        case 0xB9B0u: {
            uint16_t ea=0x0693u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB9B3u; return dd3_static_complete(rt,6u);
        }
        case 0xB9B3u: {
            uint16_t ea=0x0693u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9B6u; return dd3_static_complete(rt,4u);
        }
        case 0xB9B6u: {
            uint8_t v=0x07u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xB9B8u; return dd3_static_complete(rt,2u);
        }
        case 0xB9B8u: {
            dd3_static_write8(rt,0x0693u,rt->state.cpu.a);
            rt->state.cpu.pc=0xB9BBu; return dd3_static_complete(rt,4u);
        }
        case 0xB9BBu: {
            uint16_t ea=0x069Du; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xB9BEu; return dd3_static_complete(rt,6u);
        }
        case 0xB9BEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB9EBu: {
            uint8_t v=0x00u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9EDu; return dd3_static_complete(rt,2u);
        }
        case 0xB9EDu: {
            uint16_t ea=0x3Cu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9EFu; return dd3_static_complete(rt,3u);
        }
        case 0xB9EFu: {
            if (rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xB9F1u,0xB9F3u)) c++; rt->state.cpu.pc=0xB9F3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB9F1u; return dd3_static_complete(rt,2u);
        }
        case 0xB9F1u: {
            uint8_t v=0x01u;
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9F3u; return dd3_static_complete(rt,2u);
        }
        case 0xB9F3u: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9F5u; return dd3_static_complete(rt,4u);
        }
        case 0xB9F5u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xB9F7u,0xB9FDu)) c++; rt->state.cpu.pc=0xB9FDu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB9F7u; return dd3_static_complete(rt,2u);
        }
        case 0xB9F7u: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xB9F9u; return dd3_static_complete(rt,4u);
        }
        case 0xB9F9u: {
            uint8_t v=0xC1u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xB9FBu; return dd3_static_complete(rt,2u);
        }
        case 0xB9FBu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xB9FDu,0xB9FFu)) c++; rt->state.cpu.pc=0xB9FFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xB9FDu; return dd3_static_complete(rt,2u);
        }
        case 0xB9FDu: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xB9FEu; return dd3_static_complete(rt,2u);
        }
        case 0xB9FEu: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xB9FFu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA01u; return dd3_static_complete(rt,2u);
        }
        case 0xBA01u: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA03u; return dd3_static_complete(rt,4u);
        }
        case 0xBA03u: {
            uint8_t v=0x28u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBA05u; return dd3_static_complete(rt,2u);
        }
        case 0xBA05u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xBA07u,0xBA09u)) c++; rt->state.cpu.pc=0xBA09u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBA07u; return dd3_static_complete(rt,2u);
        }
        case 0xBA07u: {
            uint8_t v=0x08u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA09u; return dd3_static_complete(rt,2u);
        }
        case 0xBA09u: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.y);
            rt->state.cpu.pc=0xBA0Bu; return dd3_static_complete(rt,3u);
        }
        case 0xBA0Bu: {
            uint16_t ea=0x17u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA0Du; return dd3_static_complete(rt,3u);
        }
        case 0xBA0Du: {
            uint8_t v=0x07u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA0Fu; return dd3_static_complete(rt,2u);
        }
        case 0xBA0Fu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xBA10u; return dd3_static_complete(rt,2u);
        }
        case 0xBA10u: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBA12u; return dd3_static_complete(rt,3u);
        }
        case 0xBA12u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBA13u; return dd3_static_complete(rt,2u);
        }
        case 0xBA13u: {
            uint16_t ea=(uint16_t)(0xBAE2u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA16u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBAE2u,ea)?1u:0u));
        }
        case 0xBA16u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA17u; return dd3_static_complete(rt,2u);
        }
        case 0xBA17u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA18u; return dd3_static_complete(rt,2u);
        }
        case 0xBA18u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBA19u; return dd3_static_complete(rt,2u);
        }
        case 0xBA19u: {
            uint16_t ea=(uint16_t)(0xBAF2u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA1Cu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBAF2u,ea)?1u:0u));
        }
        case 0xBA1Cu: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA1Eu; return dd3_static_complete(rt,3u);
        }
        case 0xBA1Eu: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA20u; return dd3_static_complete(rt,4u);
        }
        case 0xBA20u: {
            uint8_t v=0xF8u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA22u; return dd3_static_complete(rt,2u);
        }
        case 0xBA22u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xBA23u; return dd3_static_complete(rt,2u);
        }
        case 0xBA23u: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBA25u; return dd3_static_complete(rt,3u);
        }
        case 0xBA25u: {
            dd3_static_write8(rt,0xB9u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA27u; return dd3_static_complete(rt,3u);
        }
        case 0xBA27u: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA29u; return dd3_static_complete(rt,4u);
        }
        case 0xBA29u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBA2Bu; return dd3_static_complete(rt,2u);
        }
        case 0xBA2Bu: {
            dd3_static_write8(rt,0xC3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA2Du; return dd3_static_complete(rt,3u);
        }
        case 0xBA2Du: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA2Fu; return dd3_static_complete(rt,3u);
        }
        case 0xBA2Fu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xBA31u,0xBA38u)) c++; rt->state.cpu.pc=0xBA38u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBA31u; return dd3_static_complete(rt,2u);
        }
        case 0xBA31u: {
            uint16_t ea=0xC3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA33u; return dd3_static_complete(rt,3u);
        }
        case 0xBA33u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xBA34u; return dd3_static_complete(rt,2u);
        }
        case 0xBA34u: {
            uint8_t v=0xFFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBA36u; return dd3_static_complete(rt,2u);
        }
        case 0xBA36u: {
            dd3_static_write8(rt,0xC3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA38u; return dd3_static_complete(rt,3u);
        }
        case 0xBA38u: {
            uint16_t ea=(uint16_t)(0xBAF3u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA3Bu; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBAF3u,ea)?1u:0u));
        }
        case 0xBA3Bu: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA3Du; return dd3_static_complete(rt,3u);
        }
        case 0xBA3Du: {
            uint16_t ea=(uint16_t)((0xB7u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA3Fu; return dd3_static_complete(rt,4u);
        }
        case 0xBA3Fu: {
            uint8_t v=0xF8u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA41u; return dd3_static_complete(rt,2u);
        }
        case 0xBA41u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xBA42u; return dd3_static_complete(rt,2u);
        }
        case 0xBA42u: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBA44u; return dd3_static_complete(rt,3u);
        }
        case 0xBA44u: {
            dd3_static_write8(rt,0xBAu,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA46u; return dd3_static_complete(rt,3u);
        }
        case 0xBA46u: {
            uint16_t ea=(uint16_t)((0xC1u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA48u; return dd3_static_complete(rt,4u);
        }
        case 0xBA48u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBA4Au; return dd3_static_complete(rt,2u);
        }
        case 0xBA4Au: {
            dd3_static_write8(rt,0xC4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA4Cu; return dd3_static_complete(rt,3u);
        }
        case 0xBA4Cu: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA4Eu; return dd3_static_complete(rt,3u);
        }
        case 0xBA4Eu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xBA50u,0xBA57u)) c++; rt->state.cpu.pc=0xBA57u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBA50u; return dd3_static_complete(rt,2u);
        }
        case 0xBA50u: {
            uint16_t ea=0xC4u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA52u; return dd3_static_complete(rt,3u);
        }
        case 0xBA52u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xBA53u; return dd3_static_complete(rt,2u);
        }
        case 0xBA53u: {
            uint8_t v=0xFFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBA55u; return dd3_static_complete(rt,2u);
        }
        case 0xBA55u: {
            dd3_static_write8(rt,0xC4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA57u; return dd3_static_complete(rt,3u);
        }
        case 0xBA57u: {
            uint16_t ea=(uint16_t)(0xBAF4u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA5Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBAF4u,ea)?1u:0u));
        }
        case 0xBA5Au: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA5Cu; return dd3_static_complete(rt,3u);
        }
        case 0xBA5Cu: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA5Eu; return dd3_static_complete(rt,4u);
        }
        case 0xBA5Eu: {
            uint8_t v=0xF8u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA60u; return dd3_static_complete(rt,2u);
        }
        case 0xBA60u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xBA61u; return dd3_static_complete(rt,2u);
        }
        case 0xBA61u: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBA63u; return dd3_static_complete(rt,3u);
        }
        case 0xBA63u: {
            dd3_static_write8(rt,0xCDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA65u; return dd3_static_complete(rt,3u);
        }
        case 0xBA65u: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA67u; return dd3_static_complete(rt,4u);
        }
        case 0xBA67u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBA69u; return dd3_static_complete(rt,2u);
        }
        case 0xBA69u: {
            dd3_static_write8(rt,0xD7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA6Bu; return dd3_static_complete(rt,3u);
        }
        case 0xBA6Bu: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA6Du; return dd3_static_complete(rt,3u);
        }
        case 0xBA6Du: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xBA6Fu,0xBA76u)) c++; rt->state.cpu.pc=0xBA76u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBA6Fu; return dd3_static_complete(rt,2u);
        }
        case 0xBA6Fu: {
            uint16_t ea=0xD7u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA71u; return dd3_static_complete(rt,3u);
        }
        case 0xBA71u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xBA72u; return dd3_static_complete(rt,2u);
        }
        case 0xBA72u: {
            uint8_t v=0xFFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBA74u; return dd3_static_complete(rt,2u);
        }
        case 0xBA74u: {
            dd3_static_write8(rt,0xD7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA76u; return dd3_static_complete(rt,3u);
        }
        case 0xBA76u: {
            uint16_t ea=(uint16_t)(0xBAF5u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA79u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBAF5u,ea)?1u:0u));
        }
        case 0xBA79u: {
            dd3_static_write8(rt,0x28u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA7Bu; return dd3_static_complete(rt,3u);
        }
        case 0xBA7Bu: {
            uint16_t ea=(uint16_t)((0xCBu+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA7Du; return dd3_static_complete(rt,4u);
        }
        case 0xBA7Du: {
            uint8_t v=0xF8u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA7Fu; return dd3_static_complete(rt,2u);
        }
        case 0xBA7Fu: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xBA80u; return dd3_static_complete(rt,2u);
        }
        case 0xBA80u: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBA82u; return dd3_static_complete(rt,3u);
        }
        case 0xBA82u: {
            dd3_static_write8(rt,0xCEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA84u; return dd3_static_complete(rt,3u);
        }
        case 0xBA84u: {
            uint16_t ea=(uint16_t)((0xD5u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA86u; return dd3_static_complete(rt,4u);
        }
        case 0xBA86u: {
            uint8_t v=0x00u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBA88u; return dd3_static_complete(rt,2u);
        }
        case 0xBA88u: {
            dd3_static_write8(rt,0xD8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA8Au; return dd3_static_complete(rt,3u);
        }
        case 0xBA8Au: {
            uint16_t ea=0x28u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA8Cu; return dd3_static_complete(rt,3u);
        }
        case 0xBA8Cu: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xBA8Eu,0xBA95u)) c++; rt->state.cpu.pc=0xBA95u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBA8Eu; return dd3_static_complete(rt,2u);
        }
        case 0xBA8Eu: {
            uint16_t ea=0xD8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA90u; return dd3_static_complete(rt,3u);
        }
        case 0xBA90u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xBA91u; return dd3_static_complete(rt,2u);
        }
        case 0xBA91u: {
            uint8_t v=0xFFu;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBA93u; return dd3_static_complete(rt,2u);
        }
        case 0xBA93u: {
            dd3_static_write8(rt,0xD8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBA95u; return dd3_static_complete(rt,3u);
        }
        case 0xBA95u: {
            uint8_t v=0x01u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA97u; return dd3_static_complete(rt,2u);
        }
        case 0xBA97u: {
            uint16_t ea=(uint16_t)(0x00CDu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBA9Au; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00CDu,ea)?1u:0u));
        }
        case 0xBA9Au: {
            uint8_t v=0x4Fu;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBA9Cu; return dd3_static_complete(rt,2u);
        }
        case 0xBA9Cu: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xBA9Eu,0xBAA3u)) c++; rt->state.cpu.pc=0xBAA3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBA9Eu; return dd3_static_complete(rt,2u);
        }
        case 0xBA9Eu: {
            uint8_t v=0x4Cu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBAA0u; return dd3_static_complete(rt,2u);
        }
        case 0xBAA0u: {
            dd3_static_write8(rt,(uint16_t)(0x00CDu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xBAA3u; return dd3_static_complete(rt,5u);
        }
        case 0xBAA3u: {
            uint16_t ea=(uint16_t)(0x00CDu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBAA6u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00CDu,ea)?1u:0u));
        }
        case 0xBAA6u: {
            uint8_t v=0x34u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBAA8u; return dd3_static_complete(rt,2u);
        }
        case 0xBAA8u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xBAAAu,0xBAAFu)) c++; rt->state.cpu.pc=0xBAAFu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBAAAu; return dd3_static_complete(rt,2u);
        }
        case 0xBAAAu: {
            uint8_t v=0x34u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBAACu; return dd3_static_complete(rt,2u);
        }
        case 0xBAACu: {
            dd3_static_write8(rt,(uint16_t)(0x00CDu+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xBAAFu; return dd3_static_complete(rt,5u);
        }
        case 0xBAAFu: {
            uint16_t ea=(uint16_t)(0x00C3u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBAB2u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00C3u,ea)?1u:0u));
        }
        case 0xBAB2u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xBAB4u,0xBABEu)) c++; rt->state.cpu.pc=0xBABEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBAB4u; return dd3_static_complete(rt,2u);
        }
        case 0xBAB4u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBAB6u; return dd3_static_complete(rt,2u);
        }
        case 0xBAB6u: {
            dd3_static_write8(rt,(uint16_t)(0x00C3u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xBAB9u; return dd3_static_complete(rt,5u);
        }
        case 0xBAB9u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBABBu; return dd3_static_complete(rt,2u);
        }
        case 0xBABBu: {
            dd3_static_write8(rt,(uint16_t)(0x00B9u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xBABEu; return dd3_static_complete(rt,5u);
        }
        case 0xBABEu: {
            uint16_t ea=(uint16_t)(0x00CDu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBAC1u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0x00CDu,ea)?1u:0u));
        }
        case 0xBAC1u: {
            uint8_t v=0xF8u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBAC3u; return dd3_static_complete(rt,2u);
        }
        case 0xBAC3u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xBAC4u; return dd3_static_complete(rt,2u);
        }
        case 0xBAC4u: {
            uint8_t v=0x04u;
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBAC6u; return dd3_static_complete(rt,2u);
        }
        case 0xBAC6u: {
            rt->state.cpu.c=1;
            rt->state.cpu.pc=0xBAC7u; return dd3_static_complete(rt,2u);
        }
        case 0xBAC7u: {
            uint8_t v=0x30u;
            { uint16_t a=rt->state.cpu.a; int16_t diff=(int16_t)a-(int16_t)v-(rt->state.cpu.c?0:1); uint8_t out=(uint8_t)diff; rt->state.cpu.c=diff>=0; rt->state.cpu.v=(((a^v)&(a^out)&0x80u)!=0u); rt->state.cpu.a=out; dd3_static_set_nz(rt,out); }
            rt->state.cpu.pc=0xBAC9u; return dd3_static_complete(rt,2u);
        }
        case 0xBAC9u: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBACAu; return dd3_static_complete(rt,2u);
        }
        case 0xBACAu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBACBu; return dd3_static_complete(rt,2u);
        }
        case 0xBACBu: {
            rt->state.cpu.c=rt->state.cpu.a&1u; rt->state.cpu.a>>=1; dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBACCu; return dd3_static_complete(rt,2u);
        }
        case 0xBACCu: {
            dd3_static_write8(rt,(uint16_t)(0x0698u+rt->state.cpu.y),rt->state.cpu.a);
            rt->state.cpu.pc=0xBACFu; return dd3_static_complete(rt,5u);
        }
        case 0xBACFu: {
            rt->state.cpu.y--; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBAD0u; return dd3_static_complete(rt,2u);
        }
        case 0xBAD0u: {
            if (!rt->state.cpu.n) { unsigned c=3u; if (dd3_static_page_crossed(0xBAD2u,0xBA97u)) c++; rt->state.cpu.pc=0xBA97u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBAD2u; return dd3_static_complete(rt,2u);
        }
        case 0xBAD2u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBAD4u; return dd3_static_complete(rt,2u);
        }
        case 0xBAD4u: {
            dd3_static_write8(rt,0xD7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBAD6u; return dd3_static_complete(rt,3u);
        }
        case 0xBAD6u: {
            dd3_static_write8(rt,0xD8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBAD8u; return dd3_static_complete(rt,3u);
        }
        case 0xBAD8u: {
            dd3_static_write8(rt,0xE1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBADAu; return dd3_static_complete(rt,3u);
        }
        case 0xBADAu: {
            dd3_static_write8(rt,0xE2u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBADCu; return dd3_static_complete(rt,3u);
        }
        case 0xBADCu: {
            dd3_static_write8(rt,0xEBu,rt->state.cpu.a);
            rt->state.cpu.pc=0xBADEu; return dd3_static_complete(rt,3u);
        }
        case 0xBADEu: {
            dd3_static_write8(rt,0xECu,rt->state.cpu.a);
            rt->state.cpu.pc=0xBAE0u; return dd3_static_complete(rt,3u);
        }
        case 0xBAE0u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xBAE1u; return dd3_static_complete(rt,2u);
        }
        case 0xBAE1u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xBB42u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBB44u; return dd3_static_complete(rt,3u);
        }
        case 0xBB44u: {
            uint8_t v=0x0Eu;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xBB46u; return dd3_static_complete(rt,2u);
        }
        case 0xBB46u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBB48u,0xBBC0u)) c++; rt->state.cpu.pc=0xBBC0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBB48u; return dd3_static_complete(rt,2u);
        }
        case 0xBB48u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBB4Bu; return dd3_static_complete(rt,4u);
        }
        case 0xBB4Bu: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBB4Du; return dd3_static_complete(rt,2u);
        }
        case 0xBB4Du: {
            uint8_t v=0x22u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBB4Fu; return dd3_static_complete(rt,2u);
        }
        case 0xBB4Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBB52u; return dd3_static_complete(rt,5u);
        }
        case 0xBB52u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBB53u; return dd3_static_complete(rt,2u);
        }
        case 0xBB53u: {
            uint8_t v=0xB4u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBB55u; return dd3_static_complete(rt,2u);
        }
        case 0xBB55u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBB58u; return dd3_static_complete(rt,5u);
        }
        case 0xBB58u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBB59u; return dd3_static_complete(rt,2u);
        }
        case 0xBB59u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBB5Bu; return dd3_static_complete(rt,2u);
        }
        case 0xBB5Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBB5Eu; return dd3_static_complete(rt,5u);
        }
        case 0xBB5Eu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBB5Fu; return dd3_static_complete(rt,2u);
        }
        case 0xBB5Fu: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBB61u; return dd3_static_complete(rt,2u);
        }
        case 0xBB61u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBB64u; return dd3_static_complete(rt,5u);
        }
        case 0xBB64u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBB65u; return dd3_static_complete(rt,2u);
        }
        case 0xBB65u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0xB3u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBB67u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0xB3u),ea)?1u:0u));
        }
        case 0xBB67u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBB6Au; return dd3_static_complete(rt,5u);
        }
        case 0xBB6Au: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBB6Bu; return dd3_static_complete(rt,2u);
        }
        case 0xBB6Bu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBB6Cu; return dd3_static_complete(rt,2u);
        }
        case 0xBB6Cu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0xB3u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBB6Eu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0xB3u),ea)?1u:0u));
        }
        case 0xBB6Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBB71u; return dd3_static_complete(rt,5u);
        }
        case 0xBB71u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBB72u; return dd3_static_complete(rt,2u);
        }
        case 0xBB72u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBB73u; return dd3_static_complete(rt,2u);
        }
        case 0xBB73u: {
            uint8_t v=0x23u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBB75u; return dd3_static_complete(rt,2u);
        }
        case 0xBB75u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBB78u; return dd3_static_complete(rt,5u);
        }
        case 0xBB78u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBB79u; return dd3_static_complete(rt,2u);
        }
        case 0xBB79u: {
            uint8_t v=0x2Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBB7Bu; return dd3_static_complete(rt,2u);
        }
        case 0xBB7Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBB7Eu; return dd3_static_complete(rt,5u);
        }
        case 0xBB7Eu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBB7Fu; return dd3_static_complete(rt,2u);
        }
        case 0xBB7Fu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBB81u; return dd3_static_complete(rt,2u);
        }
        case 0xBB81u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBB84u; return dd3_static_complete(rt,5u);
        }
        case 0xBB84u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBB85u; return dd3_static_complete(rt,2u);
        }
        case 0xBB85u: {
            uint8_t v=0x0Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBB87u; return dd3_static_complete(rt,2u);
        }
        case 0xBB87u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBB8Au; return dd3_static_complete(rt,5u);
        }
        case 0xBB8Au: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBB8Cu; return dd3_static_complete(rt,3u);
        }
        case 0xBB8Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBB8Du; return dd3_static_complete(rt,2u);
        }
        case 0xBB8Du: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0xB3u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBB8Fu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0xB3u),ea)?1u:0u));
        }
        case 0xBB8Fu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBB92u; return dd3_static_complete(rt,5u);
        }
        case 0xBB92u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBB93u; return dd3_static_complete(rt,2u);
        }
        case 0xBB93u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBB94u; return dd3_static_complete(rt,2u);
        }
        case 0xBB94u: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xBB96u; return dd3_static_complete(rt,5u);
        }
        case 0xBB96u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBB98u,0xBB8Du)) c++; rt->state.cpu.pc=0xBB8Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBB98u; return dd3_static_complete(rt,2u);
        }
        case 0xBB98u: {
            uint8_t v=0x23u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBB9Au; return dd3_static_complete(rt,2u);
        }
        case 0xBB9Au: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBB9Du; return dd3_static_complete(rt,5u);
        }
        case 0xBB9Du: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBB9Eu; return dd3_static_complete(rt,2u);
        }
        case 0xBB9Eu: {
            uint8_t v=0x4Bu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBBA0u; return dd3_static_complete(rt,2u);
        }
        case 0xBBA0u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBBA3u; return dd3_static_complete(rt,5u);
        }
        case 0xBBA3u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBBA4u; return dd3_static_complete(rt,2u);
        }
        case 0xBBA4u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBBA6u; return dd3_static_complete(rt,2u);
        }
        case 0xBBA6u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBBA9u; return dd3_static_complete(rt,5u);
        }
        case 0xBBA9u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBBAAu; return dd3_static_complete(rt,2u);
        }
        case 0xBBAAu: {
            uint8_t v=0x0Au;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBBACu; return dd3_static_complete(rt,2u);
        }
        case 0xBBACu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBBAFu; return dd3_static_complete(rt,5u);
        }
        case 0xBBAFu: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBBB1u; return dd3_static_complete(rt,3u);
        }
        case 0xBBB1u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBBB2u; return dd3_static_complete(rt,2u);
        }
        case 0xBBB2u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0xB3u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBBB4u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0xB3u),ea)?1u:0u));
        }
        case 0xBBB4u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBBB7u; return dd3_static_complete(rt,5u);
        }
        case 0xBBB7u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBBB8u; return dd3_static_complete(rt,2u);
        }
        case 0xBBB8u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBBB9u; return dd3_static_complete(rt,2u);
        }
        case 0xBBB9u: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v-1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xBBBBu; return dd3_static_complete(rt,5u);
        }
        case 0xBBBBu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBBBDu,0xBBB2u)) c++; rt->state.cpu.pc=0xBBB2u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBBBDu; return dd3_static_complete(rt,2u);
        }
        case 0xBBBDu: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xBBC0u; return dd3_static_complete(rt,4u);
        }
        case 0xBBC0u: {
            uint8_t v=0x40u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBBC2u; return dd3_static_complete(rt,2u);
        }
        case 0xBBC2u: {
            dd3_static_write8(rt,0xA3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBBC4u; return dd3_static_complete(rt,3u);
        }
        case 0xBBC4u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBBC6u; return dd3_static_complete(rt,2u);
        }
        case 0xBBC6u: {
            dd3_static_write8(rt,0xA7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBBC8u; return dd3_static_complete(rt,3u);
        }
        case 0xBBC8u: {
            dd3_static_push8(rt,(uint8_t)(0xBBCAu>>8)); dd3_static_push8(rt,(uint8_t)0xBBCAu);
            rt->state.cpu.pc=0xFEBFu; return dd3_static_complete(rt,6u);
        }
        case 0xBBCBu: {
            dd3_static_push8(rt,(uint8_t)(0xBBCDu>>8)); dd3_static_push8(rt,(uint8_t)0xBBCDu);
            rt->state.cpu.pc=0xF27Fu; return dd3_static_complete(rt,6u);
        }
        case 0xBBCEu: {
            dd3_static_push8(rt,(uint8_t)(0xBBD0u>>8)); dd3_static_push8(rt,(uint8_t)0xBBD0u);
            rt->state.cpu.pc=0xEF36u; return dd3_static_complete(rt,6u);
        }
        case 0xBBD1u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBBD3u; return dd3_static_complete(rt,3u);
        }
        case 0xBBD3u: {
            uint8_t v=0x0Eu;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xBBD5u; return dd3_static_complete(rt,2u);
        }
        case 0xBBD5u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBBD7u,0xBBE0u)) c++; rt->state.cpu.pc=0xBBE0u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBBD7u; return dd3_static_complete(rt,2u);
        }
        case 0xBBD7u: {
            uint8_t v=0x02u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBBD9u; return dd3_static_complete(rt,2u);
        }
        case 0xBBD9u: {
            dd3_static_write8(rt,0xABu,rt->state.cpu.a);
            rt->state.cpu.pc=0xBBDBu; return dd3_static_complete(rt,3u);
        }
        case 0xBBDBu: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBBDDu; return dd3_static_complete(rt,2u);
        }
        case 0xBBDDu: {
            dd3_static_write8(rt,0xA1u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBBDFu; return dd3_static_complete(rt,3u);
        }
        case 0xBBDFu: {
            rt->state.cpu.i=0;
            rt->state.cpu.pc=0xBBE0u; return dd3_static_complete(rt,2u);
        }
        case 0xBBE0u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBBE2u; return dd3_static_complete(rt,2u);
        }
        case 0xBBE2u: {
            dd3_static_write8(rt,0xB6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBBE4u; return dd3_static_complete(rt,3u);
        }
        case 0xBBE4u: {
            uint8_t v=0x12u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBBE6u; return dd3_static_complete(rt,2u);
        }
        case 0xBBE6u: {
            dd3_static_push8(rt,(uint8_t)(0xBBE8u>>8)); dd3_static_push8(rt,(uint8_t)0xBBE8u);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xBBE9u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBBEBu; return dd3_static_complete(rt,2u);
        }
        case 0xBBEBu: {
            dd3_static_push8(rt,(uint8_t)(0xBBEDu>>8)); dd3_static_push8(rt,(uint8_t)0xBBEDu);
            rt->state.cpu.pc=0xF5BDu; return dd3_static_complete(rt,6u);
        }
        case 0xBBEEu: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBBF0u; return dd3_static_complete(rt,3u);
        }
        case 0xBBF0u: {
            uint8_t v=0x0Eu;
            dd3_static_compare8(rt,rt->state.cpu.x,v);
            rt->state.cpu.pc=0xBBF2u; return dd3_static_complete(rt,2u);
        }
        case 0xBBF2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBBF4u,0xBBF7u)) c++; rt->state.cpu.pc=0xBBF7u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBBF4u; return dd3_static_complete(rt,2u);
        }
        case 0xBBF4u: {
            rt->state.cpu.pc=0xBC99u; return dd3_static_complete(rt,3u);
        }
        case 0xBBF7u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBBF9u; return dd3_static_complete(rt,2u);
        }
        case 0xBBF9u: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBBFBu; return dd3_static_complete(rt,3u);
        }
        case 0xBBFBu: {
            uint8_t v=0x60u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBBFDu; return dd3_static_complete(rt,2u);
        }
        case 0xBBFDu: {
            dd3_static_push8(rt,(uint8_t)(0xBBFFu>>8)); dd3_static_push8(rt,(uint8_t)0xBBFFu);
            rt->state.cpu.pc=0xD97Cu; return dd3_static_complete(rt,6u);
        }
        case 0xBC00u: {
            if (rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xBC02u,0xBC42u)) c++; rt->state.cpu.pc=0xBC42u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBC02u; return dd3_static_complete(rt,2u);
        }
        case 0xBC02u: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC04u; return dd3_static_complete(rt,3u);
        }
        case 0xBC04u: {
            uint8_t v=0x1Au;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBC06u; return dd3_static_complete(rt,2u);
        }
        case 0xBC06u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBC08u,0xBC4Bu)) c++; rt->state.cpu.pc=0xBC4Bu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBC08u; return dd3_static_complete(rt,2u);
        }
        case 0xBC08u: {
            rt->state.cpu.c=(rt->state.cpu.a>>7)&1u; rt->state.cpu.a=(uint8_t)(rt->state.cpu.a<<1); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBC09u; return dd3_static_complete(rt,2u);
        }
        case 0xBC09u: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBC0Au; return dd3_static_complete(rt,2u);
        }
        case 0xBC0Au: {
            uint16_t ea=(uint16_t)(0xBDC1u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC0Du; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBDC1u,ea)?1u:0u));
        }
        case 0xBC0Du: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBC0Fu; return dd3_static_complete(rt,3u);
        }
        case 0xBC0Fu: {
            uint16_t ea=(uint16_t)(0xBDC2u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC12u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBDC2u,ea)?1u:0u));
        }
        case 0xBC12u: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBC14u; return dd3_static_complete(rt,3u);
        }
        case 0xBC14u: {
            uint8_t v=0x42u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC16u; return dd3_static_complete(rt,2u);
        }
        case 0xBC16u: {
            dd3_static_push8(rt,(uint8_t)(0xBC18u>>8)); dd3_static_push8(rt,(uint8_t)0xBC18u);
            rt->state.cpu.pc=0xBCF7u; return dd3_static_complete(rt,6u);
        }
        case 0xBC19u: {
            uint8_t v=0xC9u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC1Bu; return dd3_static_complete(rt,2u);
        }
        case 0xBC1Bu: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBC1Du; return dd3_static_complete(rt,3u);
        }
        case 0xBC1Du: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC1Fu; return dd3_static_complete(rt,2u);
        }
        case 0xBC1Fu: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBC21u; return dd3_static_complete(rt,3u);
        }
        case 0xBC21u: {
            uint8_t v=0x43u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC23u; return dd3_static_complete(rt,2u);
        }
        case 0xBC23u: {
            dd3_static_push8(rt,(uint8_t)(0xBC25u>>8)); dd3_static_push8(rt,(uint8_t)0xBC25u);
            rt->state.cpu.pc=0xBCF7u; return dd3_static_complete(rt,6u);
        }
        case 0xBC26u: {
            uint8_t v=0xDBu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC28u; return dd3_static_complete(rt,2u);
        }
        case 0xBC28u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBC2Au; return dd3_static_complete(rt,3u);
        }
        case 0xBC2Au: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC2Cu; return dd3_static_complete(rt,2u);
        }
        case 0xBC2Cu: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBC2Eu; return dd3_static_complete(rt,3u);
        }
        case 0xBC2Eu: {
            uint8_t v=0x44u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC30u; return dd3_static_complete(rt,2u);
        }
        case 0xBC30u: {
            dd3_static_push8(rt,(uint8_t)(0xBC32u>>8)); dd3_static_push8(rt,(uint8_t)0xBC32u);
            rt->state.cpu.pc=0xBCF7u; return dd3_static_complete(rt,6u);
        }
        case 0xBC33u: {
            uint8_t v=0xEDu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC35u; return dd3_static_complete(rt,2u);
        }
        case 0xBC35u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBC37u; return dd3_static_complete(rt,3u);
        }
        case 0xBC37u: {
            uint8_t v=0xBFu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC39u; return dd3_static_complete(rt,2u);
        }
        case 0xBC39u: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBC3Bu; return dd3_static_complete(rt,3u);
        }
        case 0xBC3Bu: {
            uint8_t v=0x45u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC3Du; return dd3_static_complete(rt,2u);
        }
        case 0xBC3Du: {
            dd3_static_push8(rt,(uint8_t)(0xBC3Fu>>8)); dd3_static_push8(rt,(uint8_t)0xBC3Fu);
            rt->state.cpu.pc=0xBCF7u; return dd3_static_complete(rt,6u);
        }
        case 0xBC40u: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            v=(uint8_t)(v+1u); dd3_static_set_nz(rt,v);
            dd3_static_write8(rt,ea,v);
            rt->state.cpu.pc=0xBC42u; return dd3_static_complete(rt,5u);
        }
        case 0xBC42u: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC44u; return dd3_static_complete(rt,3u);
        }
        case 0xBC44u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBC46u; return dd3_static_complete(rt,2u);
        }
        case 0xBC46u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xBC48u,0xBBFBu)) c++; rt->state.cpu.pc=0xBBFBu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBC48u; return dd3_static_complete(rt,2u);
        }
        case 0xBC48u: {
            rt->state.cpu.pc=0xBBF7u; return dd3_static_complete(rt,3u);
        }
        case 0xBC4Bu: {
            uint16_t ea=0xB5u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC4Du; return dd3_static_complete(rt,3u);
        }
        case 0xBC4Du: {
            uint16_t ea=(uint16_t)(0xBD9Eu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC50u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBD9Eu,ea)?1u:0u));
        }
        case 0xBC50u: {
            dd3_static_write8(rt,0xB3u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBC52u; return dd3_static_complete(rt,3u);
        }
        case 0xBC52u: {
            uint16_t ea=(uint16_t)(0xBD9Fu+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC55u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xBD9Fu,ea)?1u:0u));
        }
        case 0xBC55u: {
            dd3_static_write8(rt,0xB4u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBC57u; return dd3_static_complete(rt,3u);
        }
        case 0xBC57u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC5Au; return dd3_static_complete(rt,4u);
        }
        case 0xBC5Au: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC5Cu; return dd3_static_complete(rt,2u);
        }
        case 0xBC5Cu: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0xB3u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC5Eu; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0xB3u),ea)?1u:0u));
        }
        case 0xBC5Eu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBC61u; return dd3_static_complete(rt,5u);
        }
        case 0xBC61u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBC62u; return dd3_static_complete(rt,2u);
        }
        case 0xBC62u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBC63u; return dd3_static_complete(rt,2u);
        }
        case 0xBC63u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0xB3u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC65u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0xB3u),ea)?1u:0u));
        }
        case 0xBC65u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBC68u; return dd3_static_complete(rt,5u);
        }
        case 0xBC68u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBC69u; return dd3_static_complete(rt,2u);
        }
        case 0xBC69u: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBC6Au; return dd3_static_complete(rt,2u);
        }
        case 0xBC6Au: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC6Cu; return dd3_static_complete(rt,2u);
        }
        case 0xBC6Cu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBC6Fu; return dd3_static_complete(rt,5u);
        }
        case 0xBC6Fu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBC70u; return dd3_static_complete(rt,2u);
        }
        case 0xBC70u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC72u; return dd3_static_complete(rt,2u);
        }
        case 0xBC72u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBC75u; return dd3_static_complete(rt,5u);
        }
        case 0xBC75u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBC76u; return dd3_static_complete(rt,2u);
        }
        case 0xBC76u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0xB3u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC78u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0xB3u),ea)?1u:0u));
        }
        case 0xBC78u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBC7Bu; return dd3_static_complete(rt,5u);
        }
        case 0xBC7Bu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBC7Cu; return dd3_static_complete(rt,2u);
        }
        case 0xBC7Cu: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBC7Du; return dd3_static_complete(rt,2u);
        }
        case 0xBC7Du: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xBC7Fu; return dd3_static_complete(rt,2u);
        }
        case 0xBC7Fu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBC81u,0xBC76u)) c++; rt->state.cpu.pc=0xBC76u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBC81u; return dd3_static_complete(rt,2u);
        }
        case 0xBC81u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xBC84u; return dd3_static_complete(rt,4u);
        }
        case 0xBC84u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC87u; return dd3_static_complete(rt,4u);
        }
        case 0xBC87u: {
            uint16_t ea=0x060Au; uint8_t v=dd3_static_read8(rt,ea);
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBC8Au; return dd3_static_complete(rt,4u);
        }
        case 0xBC8Au: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBC8Cu,0xBC84u)) c++; rt->state.cpu.pc=0xBC84u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBC8Cu; return dd3_static_complete(rt,2u);
        }
        case 0xBC8Cu: {
            uint8_t v=0x0Eu;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC8Eu; return dd3_static_complete(rt,2u);
        }
        case 0xBC8Eu: {
            dd3_static_write8(rt,0x04DDu,rt->state.cpu.a);
            rt->state.cpu.pc=0xBC91u; return dd3_static_complete(rt,4u);
        }
        case 0xBC91u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC93u; return dd3_static_complete(rt,2u);
        }
        case 0xBC93u: {
            dd3_static_write8(rt,0x04DEu,rt->state.cpu.a);
            rt->state.cpu.pc=0xBC96u; return dd3_static_complete(rt,4u);
        }
        case 0xBC96u: {
            dd3_static_push8(rt,(uint8_t)(0xBC98u>>8)); dd3_static_push8(rt,(uint8_t)0xBC98u);
            rt->state.cpu.pc=0xF279u; return dd3_static_complete(rt,6u);
        }
        case 0xBC99u: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC9Bu; return dd3_static_complete(rt,2u);
        }
        case 0xBC9Bu: {
            dd3_static_write8(rt,0xA8u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBC9Du; return dd3_static_complete(rt,3u);
        }
        case 0xBC9Du: {
            uint16_t ea=0x97u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBC9Fu; return dd3_static_complete(rt,3u);
        }
        case 0xBC9Fu: {
            uint16_t ea=0x98u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBCA1u; return dd3_static_complete(rt,3u);
        }
        case 0xBCA1u: {
            uint8_t v=0xD0u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBCA3u; return dd3_static_complete(rt,2u);
        }
        case 0xBCA3u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBCA5u,0xBCAEu)) c++; rt->state.cpu.pc=0xBCAEu; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBCA5u; return dd3_static_complete(rt,2u);
        }
        case 0xBCA5u: {
            uint16_t ea=0xA8u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBCA7u; return dd3_static_complete(rt,3u);
        }
        case 0xBCA7u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBCA9u; return dd3_static_complete(rt,2u);
        }
        case 0xBCA9u: {
            if (!rt->state.cpu.c) { unsigned c=3u; if (dd3_static_page_crossed(0xBCABu,0xBC9Du)) c++; rt->state.cpu.pc=0xBC9Du; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBCABu; return dd3_static_complete(rt,2u);
        }
        case 0xBCABu: {
            rt->state.cpu.pc=0xBC99u; return dd3_static_complete(rt,3u);
        }
        case 0xBCAEu: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBCB0u; return dd3_static_complete(rt,3u);
        }
        case 0xBCB0u: {
            uint8_t v=0x05u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBCB2u; return dd3_static_complete(rt,2u);
        }
        case 0xBCB2u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBCB4u,0xBCC3u)) c++; rt->state.cpu.pc=0xBCC3u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBCB4u; return dd3_static_complete(rt,2u);
        }
        case 0xBCB4u: {
            uint16_t ea=0x04D2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBCB7u; return dd3_static_complete(rt,4u);
        }
        case 0xBCB7u: {
            uint8_t v=0x28u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBCB9u; return dd3_static_complete(rt,2u);
        }
        case 0xBCB9u: {
            dd3_static_write8(rt,0x04D2u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBCBCu; return dd3_static_complete(rt,4u);
        }
        case 0xBCBCu: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBCBEu; return dd3_static_complete(rt,2u);
        }
        case 0xBCBEu: {
            dd3_static_write8(rt,0x04D6u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBCC1u; return dd3_static_complete(rt,4u);
        }
        case 0xBCC1u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBCC3u,0xBCE5u)) c++; rt->state.cpu.pc=0xBCE5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBCC3u; return dd3_static_complete(rt,2u);
        }
        case 0xBCC3u: {
            uint16_t ea=0xF3u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBCC5u; return dd3_static_complete(rt,3u);
        }
        case 0xBCC5u: {
            uint8_t v=0x08u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xBCC7u; return dd3_static_complete(rt,2u);
        }
        case 0xBCC7u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBCC9u,0xBCE5u)) c++; rt->state.cpu.pc=0xBCE5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBCC9u; return dd3_static_complete(rt,2u);
        }
        case 0xBCC9u: {
            uint16_t ea=0x04D2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBCCCu; return dd3_static_complete(rt,4u);
        }
        case 0xBCCCu: {
            uint8_t v=0x04u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBCCEu; return dd3_static_complete(rt,2u);
        }
        case 0xBCCEu: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBCD0u,0xBCE5u)) c++; rt->state.cpu.pc=0xBCE5u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBCD0u; return dd3_static_complete(rt,2u);
        }
        case 0xBCD0u: {
            uint16_t ea=0x04D2u; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBCD3u; return dd3_static_complete(rt,4u);
        }
        case 0xBCD3u: {
            uint8_t v=0xD4u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBCD5u; return dd3_static_complete(rt,2u);
        }
        case 0xBCD5u: {
            dd3_static_write8(rt,0x04D2u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBCD8u; return dd3_static_complete(rt,4u);
        }
        case 0xBCD8u: {
            uint8_t v=0x80u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBCDAu; return dd3_static_complete(rt,2u);
        }
        case 0xBCDAu: {
            dd3_static_write8(rt,0x04D5u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBCDDu; return dd3_static_complete(rt,4u);
        }
        case 0xBCDDu: {
            dd3_static_write8(rt,0x04D7u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBCE0u; return dd3_static_complete(rt,4u);
        }
        case 0xBCE0u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBCE2u; return dd3_static_complete(rt,2u);
        }
        case 0xBCE2u: {
            dd3_static_write8(rt,0x0470u,rt->state.cpu.a);
            rt->state.cpu.pc=0xBCE5u; return dd3_static_complete(rt,4u);
        }
        case 0xBCE5u: {
            uint8_t v=0x01u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBCE7u; return dd3_static_complete(rt,2u);
        }
        case 0xBCE7u: {
            dd3_static_push8(rt,(uint8_t)(0xBCE9u>>8)); dd3_static_push8(rt,(uint8_t)0xBCE9u);
            rt->state.cpu.pc=0xF5BDu; return dd3_static_complete(rt,6u);
        }
        case 0xBCEAu: {
            uint8_t v=0x00u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBCECu; return dd3_static_complete(rt,2u);
        }
        case 0xBCECu: {
            dd3_static_push8(rt,(uint8_t)(0xBCEEu>>8)); dd3_static_push8(rt,(uint8_t)0xBCEEu);
            rt->state.cpu.pc=0xFC3Fu; return dd3_static_complete(rt,6u);
        }
        case 0xBCEFu: {
            dd3_static_push8(rt,(uint8_t)(0xBCF1u>>8)); dd3_static_push8(rt,(uint8_t)0xBCF1u);
            rt->state.cpu.pc=0xFECBu; return dd3_static_complete(rt,6u);
        }
        case 0xBCF2u: {
            rt->state.cpu.i=1;
            rt->state.cpu.pc=0xBCF3u; return dd3_static_complete(rt,2u);
        }
        case 0xBCF3u: {
            dd3_static_push8(rt,(uint8_t)(0xBCF5u>>8)); dd3_static_push8(rt,(uint8_t)0xBCF5u);
            rt->state.cpu.pc=0xD089u; return dd3_static_complete(rt,6u);
        }
        case 0xBCF6u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xBCF7u: {
            dd3_static_push8(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBCF8u; return dd3_static_complete(rt,3u);
        }
        case 0xBCF8u: {
            uint16_t ea=0x060Bu; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.x=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBCFBu; return dd3_static_complete(rt,4u);
        }
        case 0xBCFBu: {
            uint8_t v=0x20u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBCFDu; return dd3_static_complete(rt,2u);
        }
        case 0xBCFDu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBD00u; return dd3_static_complete(rt,5u);
        }
        case 0xBD00u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBD01u; return dd3_static_complete(rt,2u);
        }
        case 0xBD01u: {
            rt->state.cpu.a=dd3_static_pop8(rt); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBD02u; return dd3_static_complete(rt,4u);
        }
        case 0xBD02u: {
            rt->state.cpu.c=0;
            rt->state.cpu.pc=0xBD03u; return dd3_static_complete(rt,2u);
        }
        case 0xBD03u: {
            uint16_t ea=0xB6u; uint8_t v=dd3_static_read8(rt,ea);
            { uint16_t a=rt->state.cpu.a,sum=(uint16_t)(a+v+rt->state.cpu.c); rt->state.cpu.c=sum>0xFFu; rt->state.cpu.v=((~(a^v)&(a^sum)&0x80u)!=0u); rt->state.cpu.a=(uint8_t)sum; dd3_static_set_nz(rt,rt->state.cpu.a); }
            rt->state.cpu.pc=0xBD05u; return dd3_static_complete(rt,3u);
        }
        case 0xBD05u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBD08u; return dd3_static_complete(rt,5u);
        }
        case 0xBD08u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBD09u; return dd3_static_complete(rt,2u);
        }
        case 0xBD09u: {
            uint8_t v=0x04u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBD0Bu; return dd3_static_complete(rt,2u);
        }
        case 0xBD0Bu: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBD0Eu; return dd3_static_complete(rt,5u);
        }
        case 0xBD0Eu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBD0Fu; return dd3_static_complete(rt,2u);
        }
        case 0xBD0Fu: {
            uint8_t v=0x12u;
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBD11u; return dd3_static_complete(rt,2u);
        }
        case 0xBD11u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBD14u; return dd3_static_complete(rt,5u);
        }
        case 0xBD14u: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBD15u; return dd3_static_complete(rt,2u);
        }
        case 0xBD15u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBD17u; return dd3_static_complete(rt,2u);
        }
        case 0xBD17u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0xB3u)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xBD19u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0xB3u),ea)?1u:0u));
        }
        case 0xBD19u: {
            dd3_static_write8(rt,(uint16_t)(0x0500u+rt->state.cpu.x),rt->state.cpu.a);
            rt->state.cpu.pc=0xBD1Cu; return dd3_static_complete(rt,5u);
        }
        case 0xBD1Cu: {
            rt->state.cpu.x++; dd3_static_set_nz(rt,rt->state.cpu.x);
            rt->state.cpu.pc=0xBD1Du; return dd3_static_complete(rt,2u);
        }
        case 0xBD1Du: {
            rt->state.cpu.y++; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xBD1Eu; return dd3_static_complete(rt,2u);
        }
        case 0xBD1Eu: {
            uint8_t v=0x12u;
            dd3_static_compare8(rt,rt->state.cpu.y,v);
            rt->state.cpu.pc=0xBD20u; return dd3_static_complete(rt,2u);
        }
        case 0xBD20u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xBD22u,0xBD17u)) c++; rt->state.cpu.pc=0xBD17u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xBD22u; return dd3_static_complete(rt,2u);
        }
        case 0xBD22u: {
            dd3_static_write8(rt,0x060Bu,rt->state.cpu.x);
            rt->state.cpu.pc=0xBD25u; return dd3_static_complete(rt,4u);
        }
        case 0xBD25u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        case 0xBFF8u: {
            uint16_t ea=0x0D0Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBFFBu; return dd3_static_complete(rt,4u);
        }
        case 0xBFFBu: {
            uint16_t ea=0x0D0Du; uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a|v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xBFFEu; return dd3_static_complete(rt,4u);
        }
        case 0xC000u: {
            if (!rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC002u,0xC014u)) c++; rt->state.cpu.pc=0xC014u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC002u; return dd3_static_complete(rt,2u);
        }
        case 0xC002u: {
            uint8_t v=0x00u;
            rt->state.cpu.y=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC004u; return dd3_static_complete(rt,2u);
        }
        case 0xC004u: {
            uint16_t ea=(uint16_t)(dd3_static_read16_zp(rt,0x2Bu)+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC006u; return dd3_static_complete(rt,5u + (dd3_static_page_crossed(dd3_static_read16_zp(rt,0x2Bu),ea)?1u:0u));
        }
        case 0xC006u: {
            uint8_t v=0x03u;
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC008u; return dd3_static_complete(rt,2u);
        }
        case 0xC008u: {
            uint8_t v=0x03u;
            dd3_static_compare8(rt,rt->state.cpu.a,v);
            rt->state.cpu.pc=0xC00Au; return dd3_static_complete(rt,2u);
        }
        case 0xC00Au: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC00Cu,0xC014u)) c++; rt->state.cpu.pc=0xC014u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC00Cu; return dd3_static_complete(rt,2u);
        }
        case 0xC00Cu: {
            rt->state.cpu.y=rt->state.cpu.a; dd3_static_set_nz(rt,rt->state.cpu.y);
            rt->state.cpu.pc=0xC00Du; return dd3_static_complete(rt,2u);
        }
        case 0xC00Du: {
            uint16_t ea=(uint16_t)((0x99u+rt->state.cpu.x)&0xFFu); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=v; dd3_static_set_nz(rt,v);
            rt->state.cpu.pc=0xC00Fu; return dd3_static_complete(rt,4u);
        }
        case 0xC00Fu: {
            uint16_t ea=(uint16_t)(0xA018u+rt->state.cpu.y); uint8_t v=dd3_static_read8(rt,ea);
            rt->state.cpu.a=(uint8_t)(rt->state.cpu.a&v); dd3_static_set_nz(rt,rt->state.cpu.a);
            rt->state.cpu.pc=0xC012u; return dd3_static_complete(rt,4u + (dd3_static_page_crossed(0xA018u,ea)?1u:0u));
        }
        case 0xC012u: {
            if (rt->state.cpu.z) { unsigned c=3u; if (dd3_static_page_crossed(0xC014u,0xBFF8u)) c++; rt->state.cpu.pc=0xBFF8u; return dd3_static_complete(rt,c); }
            rt->state.cpu.pc=0xC014u; return dd3_static_complete(rt,2u);
        }
        case 0xC014u: {
            dd3_static_push8(rt,(uint8_t)(0xC016u>>8)); dd3_static_push8(rt,(uint8_t)0xC016u);
            rt->state.cpu.pc=0xA024u; return dd3_static_complete(rt,6u);
        }
        case 0xC017u: {
            { uint16_t lo=dd3_static_pop8(rt),hi=dd3_static_pop8(rt); rt->state.cpu.pc=(uint16_t)(((hi<<8)|lo)+1u); }
            return dd3_static_complete(rt,6u);
        }
        default: return dd3_static_fail_unproven(rt,13,rt->state.cpu.pc);
    }
}
