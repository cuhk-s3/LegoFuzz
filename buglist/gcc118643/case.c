#include <csmith.h>
#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_aEqH7g3czZ(x) (x)
#define Tag2_realsmith_aEqH7g3czZ(x) (x)
#define Tag3_realsmith_aEqH7g3czZ(x) (x)
#define Tag4_realsmith_aEqH7g3czZ(x) (x)
#define Tag5_realsmith_aEqH7g3czZ(x) (x)
#define Tag6_realsmith_aEqH7g3czZ(x) (x)
#define Tag7_realsmith_aEqH7g3czZ(x) (x)
#define Tag8_realsmith_aEqH7g3czZ(x) (x)
#define Tag9_realsmith_aEqH7g3czZ(x) (x)
#define Tag10_realsmith_aEqH7g3czZ(x) (x)
#define Tag11_realsmith_aEqH7g3czZ(x) (x)
#define Tag12_realsmith_aEqH7g3czZ(x) (x)
#define Tag13_realsmith_aEqH7g3czZ(x) (x)
#define Tag14_realsmith_aEqH7g3czZ(x) (x)
#include "stdint.h"
signed long int realsmith_aEqH7g3czZ(signed int a_realsmith_aEqH7g3czZ) {
    /*bef_stmt:1999*/
signed int aSig_realsmith_aEqH7g3czZ = (Tag1_realsmith_aEqH7g3czZ(/*int:2529:2529:1999:e*/a_realsmith_aEqH7g3czZ) & 0x007FFFFF);
/*aft_stmt:1999*/
    /*bef_stmt:2048*/
signed short int aExp_realsmith_aEqH7g3czZ = (Tag2_realsmith_aEqH7g3czZ(/*int:2529:2529:2048:e*/a_realsmith_aEqH7g3czZ) >> 23) & 0xFF;
/*aft_stmt:2048*/
    /*bef_stmt:2094*/
signed int aSign_realsmith_aEqH7g3czZ = (Tag3_realsmith_aEqH7g3czZ(/*int:2529:2529:2094:e*/a_realsmith_aEqH7g3czZ) >> 31) & 0x01;
/*aft_stmt:2094*/
    /*bef_stmt:2242*/
if (Tag4_realsmith_aEqH7g3czZ(/*short:2529:2529:2242:e*/aExp_realsmith_aEqH7g3czZ) == 0xFF) {
        /*bef_stmt:2178*/
/*bef_stmt:2178*/
if (Tag5_realsmith_aEqH7g3czZ(/*int:2529:2529:2178:e*/aSig_realsmith_aEqH7g3czZ)) return (signed long int)(0x7FF0000000000000ULL | ((unsigned long int)Tag6_realsmith_aEqH7g3czZ(/*int:2529:2529:2178:e*/aSign_realsmith_aEqH7g3czZ) << 63));
/*aft_stmt:2178*/
/*aft_stmt:2178*/
        /*bef_stmt:2236*/
return (signed long int)(0x7FF0000000000000ULL | ((unsigned long int)Tag7_realsmith_aEqH7g3czZ(/*int:2529:2529:2236:e*/aSign_realsmith_aEqH7g3czZ) << 63));
/*aft_stmt:2236*/
    }
/*aft_stmt:2242*/
    /*bef_stmt:2395*/
if (Tag8_realsmith_aEqH7g3czZ(/*short:2529:2529:2395:e*/aExp_realsmith_aEqH7g3czZ) == 0) {
        /*bef_stmt:2320*/
/*bef_stmt:2320*/
if (Tag9_realsmith_aEqH7g3czZ(/*int:2529:2529:2320:e*/aSig_realsmith_aEqH7g3czZ) == 0) return (signed long int)((unsigned long int)Tag10_realsmith_aEqH7g3czZ(/*int:2529:2529:2320:e*/aSign_realsmith_aEqH7g3czZ) << 63);
/*aft_stmt:2320*/
/*aft_stmt:2320*/
        /*bef_stmt:2379*/
while ((Tag11_realsmith_aEqH7g3czZ(/*int:2529:2529:2379:e*/aSig_realsmith_aEqH7g3czZ) & 0x00800000) == 0) {
            aSig_realsmith_aEqH7g3czZ <<= 1;
            aExp_realsmith_aEqH7g3czZ--;
        }
/*aft_stmt:2379*/
        aExp_realsmith_aEqH7g3czZ++;
    }
/*aft_stmt:2395*/
    /*bef_stmt:2527*/
/*bef_stmt:2527*/
/*bef_stmt:2527*/
return (signed long int)((((unsigned long int)Tag12_realsmith_aEqH7g3czZ(/*int:2529:2529:2527:e*/aSign_realsmith_aEqH7g3czZ) << 63) | ((unsigned long int)(Tag13_realsmith_aEqH7g3czZ(/*short:2529:2529:2527:e*/aExp_realsmith_aEqH7g3czZ) + 0x380) << 52) | ((unsigned long int)Tag14_realsmith_aEqH7g3czZ(/*int:2529:2529:2527:e*/aSig_realsmith_aEqH7g3czZ) << 29)));
/*aft_stmt:2527*/
/*aft_stmt:2527*/
/*aft_stmt:2527*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_xfm7okMc5i(x) (x)
#define Tag2_realsmith_xfm7okMc5i(x) (x)
#define Tag3_realsmith_xfm7okMc5i(x) (x)
#define Tag4_realsmith_xfm7okMc5i(x) (x)
#include "stdlib.h"
struct sdw_stream_runtime_BTP2U6 { int dummy_realsmith_xfm7okMc5i; };
struct sdw_slave_BTP2U6 { struct { int bus_lock_realsmith_xfm7okMc5i; } *bus_realsmith_xfm7okMc5i; };
int realsmith_xfm7okMc5i(int slave_bus_lock_realsmith_xfm7okMc5i, int stream_dummy_realsmith_xfm7okMc5i) {
    struct sdw_slave_BTP2U6 slave_realsmith_xfm7okMc5i;
    struct sdw_stream_runtime_BTP2U6 stream_realsmith_xfm7okMc5i;
    slave_realsmith_xfm7okMc5i.bus_realsmith_xfm7okMc5i = (malloc(sizeof(*(slave_realsmith_xfm7okMc5i.bus_realsmith_xfm7okMc5i))));
    /*bef_stmt:17366*/
slave_realsmith_xfm7okMc5i.bus_realsmith_xfm7okMc5i->bus_lock_realsmith_xfm7okMc5i = Tag1_realsmith_xfm7okMc5i(/*int:17537:17537:17366:e*/slave_bus_lock_realsmith_xfm7okMc5i);
/*aft_stmt:17366*/
    /*bef_stmt:17398*/
stream_realsmith_xfm7okMc5i.dummy_realsmith_xfm7okMc5i = Tag2_realsmith_xfm7okMc5i(/*int:17537:17537:17398:e*/stream_dummy_realsmith_xfm7okMc5i);
/*aft_stmt:17398*/
    /*bef_stmt:17457*/
int temp_lock_realsmith_xfm7okMc5i = Tag3_realsmith_xfm7okMc5i(/*int:17537:17537:17457:e*/slave_realsmith_xfm7okMc5i.bus_realsmith_xfm7okMc5i->bus_lock_realsmith_xfm7okMc5i);
/*aft_stmt:17457*/
    /*bef_stmt:17486*/
slave_realsmith_xfm7okMc5i.bus_realsmith_xfm7okMc5i->bus_lock_realsmith_xfm7okMc5i = Tag4_realsmith_xfm7okMc5i(/*int:17537:17537:17486:e*/temp_lock_realsmith_xfm7okMc5i);
/*aft_stmt:17486*/
    (free(slave_realsmith_xfm7okMc5i.bus_realsmith_xfm7okMc5i));
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_2F5dl1yXCr(x) (x)
#include "stdlib.h"
struct pm8916_wcd_analog_priv_1ZcxUu {
    int jack_realsmith_2F5dl1yXCr;
};
int realsmith_2F5dl1yXCr(int component_jack_realsmith_2F5dl1yXCr, int jack_realsmith_2F5dl1yXCr) {
    struct pm8916_wcd_analog_priv_1ZcxUu wcd_realsmith_2F5dl1yXCr;
    /*bef_stmt:17177*/
wcd_realsmith_2F5dl1yXCr.jack_realsmith_2F5dl1yXCr = Tag1_realsmith_2F5dl1yXCr(/*int:17198:17198:17177:e*/jack_realsmith_2F5dl1yXCr);
/*aft_stmt:17177*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ie262nqDQT(x) (x)
#define Tag2_realsmith_ie262nqDQT(x) (x)
#include "stdbool.h"
int realsmith_ie262nqDQT(int iotype_realsmith_ie262nqDQT) {
    /*bef_stmt:620*/
/*bef_stmt:620*/
return (Tag1_realsmith_ie262nqDQT(/*int:622:622:620:e*/iotype_realsmith_ie262nqDQT) == 1 || Tag2_realsmith_ie262nqDQT(/*int:622:622:620:e*/iotype_realsmith_ie262nqDQT) == 2) ? 1 : 0;
/*aft_stmt:620*/
/*aft_stmt:620*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_HNjzeQAUdr(x) (x)
#define Tag2_realsmith_HNjzeQAUdr(x) (x)
#define Tag3_realsmith_HNjzeQAUdr(x) (x)
#include "stdlib.h"
int realsmith_HNjzeQAUdr(int efuseType_realsmith_HNjzeQAUdr, int pAddr_realsmith_HNjzeQAUdr, int pTargetPktOffset_realsmith_HNjzeQAUdr, int bPseudoTest_realsmith_HNjzeQAUdr) {
    int bRet_realsmith_HNjzeQAUdr = 0;
    const int EFUSE_MAX_SECTION_BASE_realsmith_HNjzeQAUdr = 256;
    /*bef_stmt:17243*/
/*bef_stmt:17243*/
if (Tag1_realsmith_HNjzeQAUdr(/*int:17258:17258:17243:e*/pTargetPktOffset_realsmith_HNjzeQAUdr) >= Tag2_realsmith_HNjzeQAUdr(/*const int:17258:17258:17243:e*/EFUSE_MAX_SECTION_BASE_realsmith_HNjzeQAUdr)) {
        bRet_realsmith_HNjzeQAUdr = 1;
    } else {
        bRet_realsmith_HNjzeQAUdr = 1;
    }
/*aft_stmt:17243*/
/*aft_stmt:17243*/
    /*bef_stmt:17256*/
return Tag3_realsmith_HNjzeQAUdr(/*int:17258:17258:17256:e*/bRet_realsmith_HNjzeQAUdr);
/*aft_stmt:17256*/
}



#include "stdlib.h"
int realsmith_5ZPDaXwICS(int command_realsmith_5ZPDaXwICS, int *nonce_realsmith_5ZPDaXwICS) {
    int response_realsmith_5ZPDaXwICS = 0;
    nonce_realsmith_5ZPDaXwICS[0] = 0xA5;
    nonce_realsmith_5ZPDaXwICS[1] = 0x5A;
    if (command_realsmith_5ZPDaXwICS == 1) {
        response_realsmith_5ZPDaXwICS = 1;
    }
    return response_realsmith_5ZPDaXwICS;
}
int realsmith_proxy_kSkRyaYE18(int p_0_8vYZmvUcQa, int p_1_Is2xZEz9KP) {
int proxy_oQ4ku1a1np[19] = { 70, 9, 62, p_1_Is2xZEz9KP, 99, p_1_Is2xZEz9KP, p_1_Is2xZEz9KP, p_1_Is2xZEz9KP, p_1_Is2xZEz9KP, 87, 14, 8, p_1_Is2xZEz9KP, p_1_Is2xZEz9KP, p_1_Is2xZEz9KP, 21, 46, 59, p_1_Is2xZEz9KP };
int proxy_ret_bjnVHSEUqF = realsmith_5ZPDaXwICS(p_0_8vYZmvUcQa, proxy_oQ4ku1a1np);
return proxy_ret_bjnVHSEUqF;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_omFC20IlKn(x) (x)
#define Tag2_realsmith_proxy_omFC20IlKn(x) (x)
#define Tag3_realsmith_proxy_omFC20IlKn(x) (x)
#define Tag4_realsmith_proxy_omFC20IlKn(x) (x)
#define Tag5_realsmith_proxy_omFC20IlKn(x) (x)
#define Tag6_realsmith_proxy_omFC20IlKn(x) (x)
#define Tag7_realsmith_proxy_omFC20IlKn(x) (x)
#define Tag8_realsmith_proxy_omFC20IlKn(x) (x)
#include "stdint.h"
#include "string.h"
int realsmith_yX9lYGCPRd(unsigned long int reg_realsmith_yX9lYGCPRd, const unsigned char *key_realsmith_yX9lYGCPRd, unsigned int keylen_realsmith_yX9lYGCPRd) {
    /*bef_stmt:9907*/
/*bef_stmt:9907*/
/*bef_stmt:9907*/
if (Tag1_realsmith_proxy_omFC20IlKn(/*unsigned int:9981:9981:9907:e*/keylen_realsmith_yX9lYGCPRd) != 16 && Tag2_realsmith_proxy_omFC20IlKn(/*unsigned int:9981:9981:9907:e*/keylen_realsmith_yX9lYGCPRd) != 24 &&
        Tag3_realsmith_proxy_omFC20IlKn(/*unsigned int:9981:9981:9907:e*/keylen_realsmith_yX9lYGCPRd) != 32) {
        return -1;
    }
/*aft_stmt:9907*/
/*aft_stmt:9907*/
/*aft_stmt:9907*/
    /*bef_stmt:9971*/
/*bef_stmt:9971*/
(memcpy((void *)Tag4_realsmith_proxy_omFC20IlKn(/*unsigned long:9981:9981:9971:e*/reg_realsmith_yX9lYGCPRd), key_realsmith_yX9lYGCPRd, Tag5_realsmith_proxy_omFC20IlKn(/*unsigned int:9981:9981:9971:e*/keylen_realsmith_yX9lYGCPRd)));
/*aft_stmt:9971*/
/*aft_stmt:9971*/
    return 0;
}
int realsmith_proxy_omFC20IlKn(int p_0_bYAnIkH38t, unsigned char p_1_vSBNiuSv5o, unsigned int p_2_L3SVhYaVMG) {
/*bef_stmt:10145*/
/*bef_stmt:10145*/
int proxy_ret_PHVwiVmj1z = realsmith_yX9lYGCPRd(Tag6_realsmith_proxy_omFC20IlKn(/*int:10157:10157:10145:e*/p_0_bYAnIkH38t), &(p_1_vSBNiuSv5o), Tag7_realsmith_proxy_omFC20IlKn(/*unsigned int:10157:10157:10145:e*/p_2_L3SVhYaVMG));
/*aft_stmt:10145*/
/*aft_stmt:10145*/
/*bef_stmt:10155*/
return Tag8_realsmith_proxy_omFC20IlKn(/*int:10157:10157:10155:e*/proxy_ret_PHVwiVmj1z);
/*aft_stmt:10155*/
}




#include "stdlib.h"
int realsmith_M69OBVxgS5(int urbs_initialized_realsmith_M69OBVxgS5, int *urb_list_realsmith_M69OBVxgS5, int *urbs_submitted_realsmith_M69OBVxgS5) {
    int i_realsmith_M69OBVxgS5, ret_realsmith_M69OBVxgS5;
    for (i_realsmith_M69OBVxgS5 = 0; i_realsmith_M69OBVxgS5 < urbs_initialized_realsmith_M69OBVxgS5; i_realsmith_M69OBVxgS5++) {
        ret_realsmith_M69OBVxgS5 = (urb_list_realsmith_M69OBVxgS5[i_realsmith_M69OBVxgS5] % 2 == 0) ? 0 : -1;
        if (ret_realsmith_M69OBVxgS5) {
            for (int j_realsmith_M69OBVxgS5 = 0; j_realsmith_M69OBVxgS5 < i_realsmith_M69OBVxgS5; j_realsmith_M69OBVxgS5++) {
            }
            return ret_realsmith_M69OBVxgS5;
        }
        (*urbs_submitted_realsmith_M69OBVxgS5)++;
    }
    return 0;
}
int realsmith_proxy_YTk8Rdbhf9(int p_0_fOgI6G7hnG, int p_1_Jv48EH5NPf, int p_2_Sm2AYSjn6M) {
int proxy_ret_3YAR3qVP5j = realsmith_M69OBVxgS5(p_0_fOgI6G7hnG, &(p_1_Jv48EH5NPf), &(p_2_Sm2AYSjn6M));
return proxy_ret_3YAR3qVP5j;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_NJdWlYBj0o(x) (x)
#define Tag2_realsmith_NJdWlYBj0o(x) (x)
#include "stdint.h"
int realsmith_NJdWlYBj0o(int ptrace_realsmith_NJdWlYBj0o) {
    const int PT_SINGLESTEP_realsmith_NJdWlYBj0o = 1;
    /*bef_stmt:2019*/
/*bef_stmt:2019*/
return Tag1_realsmith_NJdWlYBj0o(/*int:2021:2021:2019:e*/ptrace_realsmith_NJdWlYBj0o) & ~/*TAG2:STA*/((int)(realsmith_proxy_YTk8Rdbhf9((int)(PT_SINGLESTEP_realsmith_NJdWlYBj0o)+(18), (int)(PT_SINGLESTEP_realsmith_NJdWlYBj0o)+(94), (int)(PT_SINGLESTEP_realsmith_NJdWlYBj0o)+(-67))+(int)(PT_SINGLESTEP_realsmith_NJdWlYBj0o)-(0))+PT_SINGLESTEP_realsmith_NJdWlYBj0o)/*TAG2:END:PT_SINGLESTEP_realsmith_NJdWlYBj0o*/;
/*aft_stmt:2019*/
/*aft_stmt:2019*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_CkjCkhl1e7(x) (x)
#define Tag2_realsmith_CkjCkhl1e7(x) (x)
#define Tag3_realsmith_CkjCkhl1e7(x) (x)
#include "stdlib.h"
int realsmith_CkjCkhl1e7(int rf_locked_realsmith_CkjCkhl1e7, int ref_locked_realsmith_CkjCkhl1e7) {
    int status_realsmith_CkjCkhl1e7 = 0;
    /*bef_stmt:17158*/
/*bef_stmt:17158*/
if (Tag1_realsmith_CkjCkhl1e7(/*int:17171:17171:17158:e*/rf_locked_realsmith_CkjCkhl1e7) || /*TAG2:STA*/((int)(realsmith_NJdWlYBj0o((int)(ref_locked_realsmith_CkjCkhl1e7)+(-23))+(int)(ref_locked_realsmith_CkjCkhl1e7)-(120))+ref_locked_realsmith_CkjCkhl1e7)/*TAG2:END:ref_locked_realsmith_CkjCkhl1e7*/) {
        status_realsmith_CkjCkhl1e7 |= 1;
    }
/*aft_stmt:17158*/
/*aft_stmt:17158*/
    /*bef_stmt:17169*/
return Tag3_realsmith_CkjCkhl1e7(/*int:17171:17171:17169:e*/status_realsmith_CkjCkhl1e7);
/*aft_stmt:17169*/
}



#include "stdlib.h"
int realsmith_3OxTm498i6(int *ev_realsmith_3OxTm498i6, unsigned int max_realsmith_3OxTm498i6, unsigned int leader_pulse_realsmith_3OxTm498i6, unsigned int leader_space_realsmith_3OxTm498i6, unsigned int clock_realsmith_3OxTm498i6, unsigned int trailer_space_realsmith_3OxTm498i6, unsigned int invert_realsmith_3OxTm498i6, unsigned int n_realsmith_3OxTm498i6, unsigned long long data_realsmith_3OxTm498i6) {
    int need_pulse_realsmith_3OxTm498i6;
    unsigned long long i_realsmith_3OxTm498i6;
    int ret_realsmith_3OxTm498i6 = -1;
    i_realsmith_3OxTm498i6 = 1ULL << (n_realsmith_3OxTm498i6 - 1);
    if (leader_pulse_realsmith_3OxTm498i6) {
        if (!max_realsmith_3OxTm498i6--)
            return ret_realsmith_3OxTm498i6;
        ev_realsmith_3OxTm498i6[0] = leader_pulse_realsmith_3OxTm498i6;
        if (leader_space_realsmith_3OxTm498i6) {
            if (!max_realsmith_3OxTm498i6--)
                return ret_realsmith_3OxTm498i6;
            ev_realsmith_3OxTm498i6[1] = 0;
        }
    } else {
        ev_realsmith_3OxTm498i6--;
    }
    while (n_realsmith_3OxTm498i6 && i_realsmith_3OxTm498i6 > 0) {
        need_pulse_realsmith_3OxTm498i6 = !(data_realsmith_3OxTm498i6 & i_realsmith_3OxTm498i6);
        if (invert_realsmith_3OxTm498i6)
            need_pulse_realsmith_3OxTm498i6 = !need_pulse_realsmith_3OxTm498i6;
        if (need_pulse_realsmith_3OxTm498i6 == (ev_realsmith_3OxTm498i6[0] > 0)) {
            ev_realsmith_3OxTm498i6[0] += clock_realsmith_3OxTm498i6;
        } else {
            if (!max_realsmith_3OxTm498i6--)
                goto nobufs;
            ev_realsmith_3OxTm498i6[1] = need_pulse_realsmith_3OxTm498i6 ? clock_realsmith_3OxTm498i6 : 0;
        }
        if (!max_realsmith_3OxTm498i6--)
            goto nobufs;
        ev_realsmith_3OxTm498i6[2] = !need_pulse_realsmith_3OxTm498i6 ? clock_realsmith_3OxTm498i6 : 0;
        i_realsmith_3OxTm498i6 >>= 1;
    }
    if (trailer_space_realsmith_3OxTm498i6) {
        if (ev_realsmith_3OxTm498i6[0] == 0)
            ev_realsmith_3OxTm498i6[0] += trailer_space_realsmith_3OxTm498i6;
        else if (!max_realsmith_3OxTm498i6--)
            goto nobufs;
        else
            ev_realsmith_3OxTm498i6[1] = 0;
    }
    ret_realsmith_3OxTm498i6 = 0;
nobufs:
    return ret_realsmith_3OxTm498i6;
}
int realsmith_proxy_z3ecVABbJA(int p_0_4SU3U3WP9y, unsigned int p_1_Dw0JVuq3xy, unsigned int p_2_h0MXPiHRZw, unsigned int p_3_bh7wtYOkdR, unsigned int p_4_BPA7vMQ968, unsigned int p_5_hO7hzHjfvW, unsigned int p_6_13osKagLOl, unsigned int p_7_iz829rRb77, int p_8_NyvyN1I9W5) {
int proxy_X3O4KlBJqT[11] = { p_0_4SU3U3WP9y, 58, p_0_4SU3U3WP9y, 99, p_0_4SU3U3WP9y, p_0_4SU3U3WP9y, p_0_4SU3U3WP9y, p_0_4SU3U3WP9y, p_0_4SU3U3WP9y, 99, p_0_4SU3U3WP9y };
int proxy_ret_rqwIRZGt9a = realsmith_3OxTm498i6(proxy_X3O4KlBJqT, p_1_Dw0JVuq3xy, p_2_h0MXPiHRZw, p_3_bh7wtYOkdR, p_4_BPA7vMQ968, p_5_hO7hzHjfvW, p_6_13osKagLOl, p_7_iz829rRb77, p_8_NyvyN1I9W5);
return proxy_ret_rqwIRZGt9a;
}


#include<stdint.h>
#include<inttypes.h>
#include "stdlib.h"
int realsmith_mMC9OmZqUi(int clk_i2s_realsmith_mMC9OmZqUi) {
    clk_i2s_realsmith_mMC9OmZqUi = -1;
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_WKDzvGaxVr(x) (x)
#define Tag2_realsmith_WKDzvGaxVr(x) (x)
#include "stdlib.h"
struct snd_line6_midi_l34nfL {
    int midibuf_out_realsmith_WKDzvGaxVr;
    int midibuf_in_realsmith_WKDzvGaxVr;
};
int realsmith_WKDzvGaxVr(int midibuf_in_realsmith_WKDzvGaxVr, int midibuf_out_realsmith_WKDzvGaxVr) {
    struct snd_line6_midi_l34nfL *line6midi_realsmith_WKDzvGaxVr = (malloc(sizeof(struct snd_line6_midi_l34nfL)));
    if (!line6midi_realsmith_WKDzvGaxVr) return -1;
    /*bef_stmt:17260*/
line6midi_realsmith_WKDzvGaxVr->midibuf_in_realsmith_WKDzvGaxVr = Tag1_realsmith_WKDzvGaxVr(/*int:17371:17371:17260:e*/midibuf_in_realsmith_WKDzvGaxVr);
/*aft_stmt:17260*/
    /*bef_stmt:17284*/
line6midi_realsmith_WKDzvGaxVr->midibuf_out_realsmith_WKDzvGaxVr = Tag2_realsmith_WKDzvGaxVr(/*int:17371:17371:17284:e*/midibuf_out_realsmith_WKDzvGaxVr);
/*aft_stmt:17284*/
    line6midi_realsmith_WKDzvGaxVr->midibuf_in_realsmith_WKDzvGaxVr = 0;
    line6midi_realsmith_WKDzvGaxVr->midibuf_out_realsmith_WKDzvGaxVr = 0;
    (free(line6midi_realsmith_WKDzvGaxVr));
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Nf4s05FTFG(x) (x)
#define Tag2_realsmith_Nf4s05FTFG(x) (x)
#include "stdlib.h"
int realsmith_Nf4s05FTFG(int shadow_realsmith_Nf4s05FTFG) {
    int MII_BCM54XX_SHD_realsmith_Nf4s05FTFG = 0;
    /*bef_stmt:17132*/
int data_realsmith_Nf4s05FTFG = (/*TAG1:STA*/((int)(realsmith_proxy_omFC20IlKn((int)(shadow_realsmith_Nf4s05FTFG)+(-9), (unsigned char)(shadow_realsmith_Nf4s05FTFG)+(48), (unsigned int)(shadow_realsmith_Nf4s05FTFG)+(51))+(int)(shadow_realsmith_Nf4s05FTFG)-(27))+shadow_realsmith_Nf4s05FTFG)/*TAG1:END:shadow_realsmith_Nf4s05FTFG*/ & 0xFFFF);
/*aft_stmt:17132*/
    /*bef_stmt:17142*/
return /*TAG2:STA*/((int)(realsmith_aEqH7g3czZ((int)(data_realsmith_Nf4s05FTFG)+(61))-(3969430490317848576)+(int)(data_realsmith_Nf4s05FTFG)-(28))+data_realsmith_Nf4s05FTFG)/*TAG2:END:data_realsmith_Nf4s05FTFG*/;
/*aft_stmt:17142*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_h099QxhKek(x) (x)
#define Tag2_realsmith_h099QxhKek(x) (x)
#define Tag3_realsmith_h099QxhKek(x) (x)
#define Tag4_realsmith_h099QxhKek(x) (x)
#define Tag5_realsmith_h099QxhKek(x) (x)
#include "stdlib.h"
int realsmith_h099QxhKek(int rpcclnt_realsmith_h099QxhKek, int nextrebind_realsmith_h099QxhKek, unsigned long jiffies_realsmith_h099QxhKek) {
    /*bef_stmt:17193*/
/*bef_stmt:17193*/
/*bef_stmt:17193*/
if (Tag1_realsmith_h099QxhKek(/*int:17203:17203:17193:e*/rpcclnt_realsmith_h099QxhKek) && Tag2_realsmith_h099QxhKek(/*unsigned long:17203:17203:17193:e*/jiffies_realsmith_h099QxhKek) >= Tag3_realsmith_h099QxhKek(/*int:17203:17203:17193:e*/nextrebind_realsmith_h099QxhKek)) {
        /*bef_stmt:17176*/
nextrebind_realsmith_h099QxhKek = Tag4_realsmith_h099QxhKek(/*unsigned long:17203:17203:17176:e*/jiffies_realsmith_h099QxhKek) + 1000;
/*aft_stmt:17176*/
        /*bef_stmt:17187*/
return Tag5_realsmith_h099QxhKek(/*int:17203:17203:17187:e*/rpcclnt_realsmith_h099QxhKek);
/*aft_stmt:17187*/
    }
/*aft_stmt:17193*/
/*aft_stmt:17193*/
/*aft_stmt:17193*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_wuRHG3CW8L(x) (x)
#define Tag2_realsmith_wuRHG3CW8L(x) (x)
#include "stdlib.h"
int realsmith_wuRHG3CW8L(int nlink_realsmith_wuRHG3CW8L) {
    /*bef_stmt:17099*/
if (Tag1_realsmith_wuRHG3CW8L(/*int:17112:17112:17099:e*/nlink_realsmith_wuRHG3CW8L) > 0) {
        nlink_realsmith_wuRHG3CW8L--;
    }
/*aft_stmt:17099*/
    /*bef_stmt:17110*/
return Tag2_realsmith_wuRHG3CW8L(/*int:17112:17112:17110:e*/nlink_realsmith_wuRHG3CW8L);
/*aft_stmt:17110*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_npPk5cf1Ks(x) (x)
#define Tag2_realsmith_proxy_npPk5cf1Ks(x) (x)
#define Tag3_realsmith_proxy_npPk5cf1Ks(x) (x)
#define Tag4_realsmith_proxy_npPk5cf1Ks(x) (x)
#include "stdlib.h"
typedef struct {
    int sk_state_realsmith_8BuqpiZYTO;
} sock_sBKbcA;
int realsmith_8BuqpiZYTO(int sk_state_realsmith_8BuqpiZYTO, int *sk_state_change_called_realsmith_8BuqpiZYTO) {
    sock_sBKbcA sk_realsmith_8BuqpiZYTO;
    /*bef_stmt:17199*/
sk_realsmith_8BuqpiZYTO.sk_state_realsmith_8BuqpiZYTO = Tag1_realsmith_proxy_npPk5cf1Ks(/*int:17290:17290:17199:e*/sk_state_realsmith_8BuqpiZYTO);
/*aft_stmt:17199*/
    /*bef_stmt:17244*/
if (Tag2_realsmith_proxy_npPk5cf1Ks(/*int:17290:17290:17244:e*/sk_realsmith_8BuqpiZYTO.sk_state_realsmith_8BuqpiZYTO) != 1) {
        return 0;
    }
/*aft_stmt:17244*/
    sk_realsmith_8BuqpiZYTO.sk_state_realsmith_8BuqpiZYTO = 2;
    *sk_state_change_called_realsmith_8BuqpiZYTO = 1;
    return 0;
}
int realsmith_proxy_npPk5cf1Ks(int p_0_J0nm8Xlv6v, int p_1_6dDbGrO1WO) {
/*bef_stmt:17420*/
int proxy_ret_VbMLJyHtE9 = realsmith_8BuqpiZYTO(Tag3_realsmith_proxy_npPk5cf1Ks(/*int:17432:17432:17420:e*/p_0_J0nm8Xlv6v), &(p_1_6dDbGrO1WO));
/*aft_stmt:17420*/
/*bef_stmt:17430*/
return Tag4_realsmith_proxy_npPk5cf1Ks(/*int:17432:17432:17430:e*/proxy_ret_VbMLJyHtE9);
/*aft_stmt:17430*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_3PubJdq2sA(x) (x)
#define Tag2_realsmith_3PubJdq2sA(x) (x)
#define Tag3_realsmith_3PubJdq2sA(x) (x)
#define Tag4_realsmith_3PubJdq2sA(x) (x)
#define Tag5_realsmith_3PubJdq2sA(x) (x)
#include "stdlib.h"
int realsmith_3PubJdq2sA(int changed_realsmith_3PubJdq2sA, int flags_realsmith_3PubJdq2sA, int monitor_realsmith_3PubJdq2sA) {
    int ret_realsmith_3PubJdq2sA = 0;
    /*bef_stmt:17159*/
if (Tag1_realsmith_3PubJdq2sA(/*int:17247:17247:17159:e*/changed_realsmith_3PubJdq2sA) & 2) {
    }
/*aft_stmt:17159*/
    /*bef_stmt:17234*/
if (Tag2_realsmith_3PubJdq2sA(/*int:17247:17247:17234:e*/changed_realsmith_3PubJdq2sA) & 1) {
        /*bef_stmt:17197*/
monitor_realsmith_3PubJdq2sA = Tag3_realsmith_3PubJdq2sA(/*int:17247:17247:17197:e*/flags_realsmith_3PubJdq2sA) & 4;
/*aft_stmt:17197*/
        /*bef_stmt:17226*/
if (Tag4_realsmith_3PubJdq2sA(/*int:17247:17247:17226:e*/monitor_realsmith_3PubJdq2sA)) {
            ret_realsmith_3PubJdq2sA = -1;
        }
/*aft_stmt:17226*/
    }
/*aft_stmt:17234*/
    /*bef_stmt:17245*/
return Tag5_realsmith_3PubJdq2sA(/*int:17247:17247:17245:e*/ret_realsmith_3PubJdq2sA);
/*aft_stmt:17245*/
}



#include "stdint.h"
#include "stdlib.h"
int realsmith_rpr7AiJlpj(int first_realsmith_rpr7AiJlpj, int last_realsmith_rpr7AiJlpj, unsigned int *map_realsmith_rpr7AiJlpj) {
    unsigned int first_bit_realsmith_rpr7AiJlpj = first_realsmith_rpr7AiJlpj >> 3;
    unsigned int last_bit_realsmith_rpr7AiJlpj = last_realsmith_rpr7AiJlpj >> 3;
    unsigned int bits_to_set_realsmith_rpr7AiJlpj = last_bit_realsmith_rpr7AiJlpj - first_bit_realsmith_rpr7AiJlpj + 1;
    unsigned int word_num_realsmith_rpr7AiJlpj = first_bit_realsmith_rpr7AiJlpj >> 5;
    unsigned int *wordp_realsmith_rpr7AiJlpj = &map_realsmith_rpr7AiJlpj[word_num_realsmith_rpr7AiJlpj];
    unsigned int bit_realsmith_rpr7AiJlpj = first_bit_realsmith_rpr7AiJlpj & (32 - 1);
    unsigned int bits_set_realsmith_rpr7AiJlpj = 0;
    unsigned int end_bit_realsmith_rpr7AiJlpj, mask_realsmith_rpr7AiJlpj;
    if (bit_realsmith_rpr7AiJlpj) {
        end_bit_realsmith_rpr7AiJlpj = (bit_realsmith_rpr7AiJlpj + bits_to_set_realsmith_rpr7AiJlpj < 32) ? bit_realsmith_rpr7AiJlpj + bits_to_set_realsmith_rpr7AiJlpj : 32;
        mask_realsmith_rpr7AiJlpj = ((1U << (end_bit_realsmith_rpr7AiJlpj - bit_realsmith_rpr7AiJlpj)) - 1) << bit_realsmith_rpr7AiJlpj;
        *wordp_realsmith_rpr7AiJlpj |= mask_realsmith_rpr7AiJlpj;
        wordp_realsmith_rpr7AiJlpj++;
        bits_set_realsmith_rpr7AiJlpj = end_bit_realsmith_rpr7AiJlpj - bit_realsmith_rpr7AiJlpj;
    }
    while ((bits_to_set_realsmith_rpr7AiJlpj - bits_set_realsmith_rpr7AiJlpj) >= 32) {
        *wordp_realsmith_rpr7AiJlpj |= 0xffffffff;
        bits_set_realsmith_rpr7AiJlpj += 32;
        wordp_realsmith_rpr7AiJlpj++;
    }
    end_bit_realsmith_rpr7AiJlpj = bits_to_set_realsmith_rpr7AiJlpj - bits_set_realsmith_rpr7AiJlpj;
    if (end_bit_realsmith_rpr7AiJlpj) {
        mask_realsmith_rpr7AiJlpj = (1U << end_bit_realsmith_rpr7AiJlpj) - 1;
        *wordp_realsmith_rpr7AiJlpj |= mask_realsmith_rpr7AiJlpj;
    }
    return 0;
}
int realsmith_proxy_jLiGP7wAe7(int p_0_gmdvcoPkPu, int p_1_XQXckT2rdf, unsigned int p_2_Ok4elmxx2C) {
unsigned int proxy_U0fLWvHHxd[11] = { p_2_Ok4elmxx2C, p_2_Ok4elmxx2C, 66, p_2_Ok4elmxx2C, 49, p_2_Ok4elmxx2C, p_2_Ok4elmxx2C, p_2_Ok4elmxx2C, p_2_Ok4elmxx2C, 91, 51 };
int proxy_ret_f6kt7bj1PX = realsmith_rpr7AiJlpj(p_0_gmdvcoPkPu, p_1_XQXckT2rdf, proxy_U0fLWvHHxd);
return proxy_ret_f6kt7bj1PX;
}


#include "stdint.h"
#include "stddef.h"
int realsmith_ugefBJpjDm(int substream_offset_realsmith_ugefBJpjDm, int str_frags_realsmith_ugefBJpjDm, int *bdl_realsmith_ugefBJpjDm, int ofs_realsmith_ugefBJpjDm, int size_realsmith_ugefBJpjDm) {
    while (size_realsmith_ugefBJpjDm > 0) {
        if (str_frags_realsmith_ugefBJpjDm >= 1024)
            return -1;
        unsigned int addr_realsmith_ugefBJpjDm = substream_offset_realsmith_ugefBJpjDm + ofs_realsmith_ugefBJpjDm;
        bdl_realsmith_ugefBJpjDm[0] = addr_realsmith_ugefBJpjDm;
        bdl_realsmith_ugefBJpjDm[1] = (addr_realsmith_ugefBJpjDm >> 32);
        int chunk_realsmith_ugefBJpjDm = (size_realsmith_ugefBJpjDm > 128) ? 128 : size_realsmith_ugefBJpjDm;
        bdl_realsmith_ugefBJpjDm[2] = chunk_realsmith_ugefBJpjDm;
        size_realsmith_ugefBJpjDm -= chunk_realsmith_ugefBJpjDm;
        bdl_realsmith_ugefBJpjDm[3] = size_realsmith_ugefBJpjDm ? 0 : 1;
        bdl_realsmith_ugefBJpjDm += 4;
        str_frags_realsmith_ugefBJpjDm++;
        ofs_realsmith_ugefBJpjDm += chunk_realsmith_ugefBJpjDm;
    }
    return ofs_realsmith_ugefBJpjDm;
}
int realsmith_proxy_A4UpTckE5m(int p_0_wqSq84wpCc, int p_1_4a6U6CQLtv, int p_2_x3hWJZA48S, int p_3_mfytLDF8pQ, int p_4_Sx3pTYKlSU) {
int proxy_RQiZ5bNDRa[10] = { p_2_x3hWJZA48S, p_2_x3hWJZA48S, p_2_x3hWJZA48S, p_2_x3hWJZA48S, 12, 45, p_2_x3hWJZA48S, 93, 69, 34 };
int proxy_ret_96gx27AlSr = realsmith_ugefBJpjDm(p_0_wqSq84wpCc, p_1_4a6U6CQLtv, proxy_RQiZ5bNDRa, p_3_mfytLDF8pQ, p_4_Sx3pTYKlSU);
return proxy_ret_96gx27AlSr;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_jyzq0kqYSL(x) (x)
#include "stdlib.h"
int realsmith_jyzq0kqYSL(int mode_realsmith_jyzq0kqYSL) {
    /*bef_stmt:17081*/
switch (Tag1_realsmith_jyzq0kqYSL(/*int:17428:17428:17081:e*/mode_realsmith_jyzq0kqYSL)) {
        case 144: return 1;
        case 134: return 2;
        case 135: return 3;
        case 133: return 4;
        case 132: return 5;
        case 130: return 6;
        case 131: return 7;
        case 129: return 8;
        case 142: return 9;
        case 140: return 10;
        case 138: return 11;
        case 143: return 12;
        case 136: return 13;
        case 141: return 14;
        case 139: return 15;
        case 137: return 16;
        case 128: return 17;
        default: return 0;
    }
/*aft_stmt:17081*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_FVYWKgAQIF(x) (x)
#define Tag2_realsmith_FVYWKgAQIF(x) (x)
#define Tag3_realsmith_FVYWKgAQIF(x) (x)
#define Tag4_realsmith_FVYWKgAQIF(x) (x)
#define Tag5_realsmith_FVYWKgAQIF(x) (x)
#define Tag6_realsmith_FVYWKgAQIF(x) (x)
#define Tag7_realsmith_FVYWKgAQIF(x) (x)
#define Tag8_realsmith_FVYWKgAQIF(x) (x)
#define Tag9_realsmith_FVYWKgAQIF(x) (x)
#define Tag10_realsmith_FVYWKgAQIF(x) (x)
#define Tag11_realsmith_FVYWKgAQIF(x) (x)
#define Tag12_realsmith_FVYWKgAQIF(x) (x)
#include "stdint.h"
int realsmith_FVYWKgAQIF(unsigned short int phys_addr_realsmith_FVYWKgAQIF) {
    int i_realsmith_FVYWKgAQIF;
    unsigned short int parent_realsmith_FVYWKgAQIF = 0;
    unsigned short int port_realsmith_FVYWKgAQIF = 0;
    /*bef_stmt:2061*/
if (Tag1_realsmith_FVYWKgAQIF(/*unsigned short:2378:2378:2061:e*/phys_addr_realsmith_FVYWKgAQIF) == 0xffff)
        return 0;
/*aft_stmt:2061*/
    /*bef_stmt:2144*/
/*bef_stmt:2144*/
/*bef_stmt:2144*/
for (i_realsmith_FVYWKgAQIF = 0; Tag2_realsmith_FVYWKgAQIF(/*int:2378:2378:2144:e*/i_realsmith_FVYWKgAQIF) < 16; i_realsmith_FVYWKgAQIF += 4)
        if (Tag3_realsmith_FVYWKgAQIF(/*unsigned short:2378:2378:2144:e*/phys_addr_realsmith_FVYWKgAQIF) & (0xf << Tag4_realsmith_FVYWKgAQIF(/*int:2378:2378:2144:e*/i_realsmith_FVYWKgAQIF)))
            break;
/*aft_stmt:2144*/
/*aft_stmt:2144*/
/*aft_stmt:2144*/
    /*bef_stmt:2172*/
if (Tag5_realsmith_FVYWKgAQIF(/*int:2378:2378:2172:e*/i_realsmith_FVYWKgAQIF) == 16)
        return 0;
/*aft_stmt:2172*/
    /*bef_stmt:2216*/
/*bef_stmt:2216*/
parent_realsmith_FVYWKgAQIF = Tag6_realsmith_FVYWKgAQIF(/*unsigned short:2378:2378:2216:e*/phys_addr_realsmith_FVYWKgAQIF) & (0xfff0 << Tag7_realsmith_FVYWKgAQIF(/*int:2378:2378:2216:e*/i_realsmith_FVYWKgAQIF));
/*aft_stmt:2216*/
/*aft_stmt:2216*/
    /*bef_stmt:2260*/
/*bef_stmt:2260*/
port_realsmith_FVYWKgAQIF = (Tag8_realsmith_FVYWKgAQIF(/*unsigned short:2378:2378:2260:e*/phys_addr_realsmith_FVYWKgAQIF) >> Tag9_realsmith_FVYWKgAQIF(/*int:2378:2378:2260:e*/i_realsmith_FVYWKgAQIF)) & 0xf;
/*aft_stmt:2260*/
/*aft_stmt:2260*/
    /*bef_stmt:2365*/
/*bef_stmt:2365*/
/*bef_stmt:2365*/
for (i_realsmith_FVYWKgAQIF += 4; Tag10_realsmith_FVYWKgAQIF(/*int:2378:2378:2365:e*/i_realsmith_FVYWKgAQIF) < 16; i_realsmith_FVYWKgAQIF += 4)
        if ((Tag11_realsmith_FVYWKgAQIF(/*unsigned short:2378:2378:2365:e*/phys_addr_realsmith_FVYWKgAQIF) & (0xf << Tag12_realsmith_FVYWKgAQIF(/*int:2378:2378:2365:e*/i_realsmith_FVYWKgAQIF))) == 0)
            return -22;
/*aft_stmt:2365*/
/*aft_stmt:2365*/
/*aft_stmt:2365*/
    return 0;
}



#include "stdlib.h"
int realsmith_mOjXDbM1WD(int msdstate_realsmith_mOjXDbM1WD, int addr_realsmith_mOjXDbM1WD, int len_realsmith_mOjXDbM1WD, unsigned char *data_realsmith_mOjXDbM1WD) {
    unsigned char resultcode_realsmith_mOjXDbM1WD;
    unsigned char status_realsmith_mOjXDbM1WD;
    if (msdstate_realsmith_mOjXDbM1WD != 1) {
        resultcode_realsmith_mOjXDbM1WD = 2;
        status_realsmith_mOjXDbM1WD = 1;
        return 0;
    }
    status_realsmith_mOjXDbM1WD = 1;
    if (len_realsmith_mOjXDbM1WD > sizeof(data_realsmith_mOjXDbM1WD)) {
        status_realsmith_mOjXDbM1WD = 3;
        return 0;
    }
    if (addr_realsmith_mOjXDbM1WD < 0 || len_realsmith_mOjXDbM1WD < 0) {
        resultcode_realsmith_mOjXDbM1WD = 4;
    } else {
        resultcode_realsmith_mOjXDbM1WD = 5;
    }
    return resultcode_realsmith_mOjXDbM1WD;
}
int realsmith_proxy_hvxiLny8je(int p_0_X5w4i6VDDG, int p_1_tKKKIy9QHv, int p_2_WFs2o1NeSa, unsigned char p_3_G828wfpw10) {
unsigned char proxy_RrcuwzeQ4x[13] = { p_3_G828wfpw10, p_3_G828wfpw10, p_3_G828wfpw10, p_3_G828wfpw10, p_3_G828wfpw10, 46, p_3_G828wfpw10, p_3_G828wfpw10, 71, 17, p_3_G828wfpw10, 94, p_3_G828wfpw10 };
int proxy_ret_VHvzjk27Mw = realsmith_mOjXDbM1WD(p_0_X5w4i6VDDG, p_1_tKKKIy9QHv, p_2_WFs2o1NeSa, proxy_RrcuwzeQ4x);
return proxy_ret_VHvzjk27Mw;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_LNzpSPGkW5(x) (x)
#define Tag2_realsmith_LNzpSPGkW5(x) (x)
#define Tag3_realsmith_LNzpSPGkW5(x) (x)
#include "stdlib.h"
int realsmith_LNzpSPGkW5(int skb_realsmith_LNzpSPGkW5, int key_mac_proto_realsmith_LNzpSPGkW5, int nh_realsmith_LNzpSPGkW5) {
    int err_realsmith_LNzpSPGkW5 = 0;
    /*bef_stmt:17188*/
/*bef_stmt:17188*/
if (Tag1_realsmith_LNzpSPGkW5(/*int:17213:17213:17188:e*/skb_realsmith_LNzpSPGkW5) < 0 || Tag2_realsmith_LNzpSPGkW5(/*int:17213:17213:17188:e*/nh_realsmith_LNzpSPGkW5) < 0) {
        return -1;
    }
/*aft_stmt:17188*/
/*aft_stmt:17188*/
    key_mac_proto_realsmith_LNzpSPGkW5 = 0;
    /*bef_stmt:17211*/
return Tag3_realsmith_LNzpSPGkW5(/*int:17213:17213:17211:e*/err_realsmith_LNzpSPGkW5);
/*aft_stmt:17211*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_TMHqeUmPCO(x) (x)
#define Tag2_realsmith_TMHqeUmPCO(x) (x)
#define Tag3_realsmith_TMHqeUmPCO(x) (x)
#define Tag4_realsmith_TMHqeUmPCO(x) (x)
#define Tag5_realsmith_TMHqeUmPCO(x) (x)
#include "stdlib.h"
int realsmith_TMHqeUmPCO(int event_realsmith_TMHqeUmPCO) {
    int NOTIFY_DONE_realsmith_TMHqeUmPCO = 0;
    int PM_HIBERNATION_PREPARE_realsmith_TMHqeUmPCO = 1;
    int PM_POST_HIBERNATION_realsmith_TMHqeUmPCO = 2;
    /*bef_stmt:17215*/
/*bef_stmt:17215*/
/*bef_stmt:17215*/
/*bef_stmt:17215*/
if (Tag1_realsmith_TMHqeUmPCO(/*int:17221:17221:17215:e*/event_realsmith_TMHqeUmPCO) == Tag2_realsmith_TMHqeUmPCO(/*int:17221:17221:17215:e*/PM_POST_HIBERNATION_realsmith_TMHqeUmPCO)) {
        return 1;
    } else if (Tag3_realsmith_TMHqeUmPCO(/*int:17221:17221:17215:e*/event_realsmith_TMHqeUmPCO) == Tag4_realsmith_TMHqeUmPCO(/*int:17221:17221:17215:e*/PM_HIBERNATION_PREPARE_realsmith_TMHqeUmPCO)) {
        return 2;
    } else {
        /*bef_stmt:17204*/
return Tag5_realsmith_TMHqeUmPCO(/*int:17221:17221:17204:e*/NOTIFY_DONE_realsmith_TMHqeUmPCO);
/*aft_stmt:17204*/
    }
/*aft_stmt:17215*/
/*aft_stmt:17215*/
/*aft_stmt:17215*/
/*aft_stmt:17215*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_mGszSrPNbo(x) (x)
#define Tag2_realsmith_mGszSrPNbo(x) (x)
#define Tag3_realsmith_mGszSrPNbo(x) (x)
#define Tag4_realsmith_mGszSrPNbo(x) (x)
#define Tag5_realsmith_mGszSrPNbo(x) (x)
#include "stdlib.h"
int realsmith_mGszSrPNbo(int pseudo_lock_major_realsmith_mGszSrPNbo, int pseudo_lock_class_is_err_realsmith_mGszSrPNbo, int pseudo_lock_dev_fops_realsmith_mGszSrPNbo) {
    int ret_realsmith_mGszSrPNbo;
    /*bef_stmt:17149*/
ret_realsmith_mGszSrPNbo = Tag1_realsmith_mGszSrPNbo(/*int:17226:17226:17149:e*/pseudo_lock_major_realsmith_mGszSrPNbo);
/*aft_stmt:17149*/
    /*bef_stmt:17177*/
/*bef_stmt:17177*/
if (Tag2_realsmith_mGszSrPNbo(/*int:17226:17226:17177:e*/ret_realsmith_mGszSrPNbo) < 0)
        return Tag3_realsmith_mGszSrPNbo(/*int:17226:17226:17177:e*/ret_realsmith_mGszSrPNbo);
/*aft_stmt:17177*/
/*aft_stmt:17177*/
    /*bef_stmt:17216*/
if (Tag4_realsmith_mGszSrPNbo(/*int:17226:17226:17216:e*/pseudo_lock_class_is_err_realsmith_mGszSrPNbo)) {
        ret_realsmith_mGszSrPNbo = -1;
        /*bef_stmt:17210*/
return Tag5_realsmith_mGszSrPNbo(/*int:17226:17226:17210:e*/ret_realsmith_mGszSrPNbo);
/*aft_stmt:17210*/
    }
/*aft_stmt:17216*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_iysfaYLTYN(x) (x)
#define Tag2_realsmith_iysfaYLTYN(x) (x)
#define Tag3_realsmith_iysfaYLTYN(x) (x)
#define Tag4_realsmith_iysfaYLTYN(x) (x)
#include "stdlib.h"
struct stk8ba50_data_Ypmeyx {
    int dready_trig_realsmith_iysfaYLTYN;
    int dready_trigger_on_realsmith_iysfaYLTYN;
};
int realsmith_iysfaYLTYN(int dready_trigger_on_realsmith_iysfaYLTYN, int dready_trig_realsmith_iysfaYLTYN) {
    struct stk8ba50_data_Ypmeyx data_realsmith_iysfaYLTYN;
    /*bef_stmt:17189*/
data_realsmith_iysfaYLTYN.dready_trigger_on_realsmith_iysfaYLTYN = Tag1_realsmith_iysfaYLTYN(/*int:17267:17267:17189:e*/dready_trigger_on_realsmith_iysfaYLTYN);
/*aft_stmt:17189*/
    /*bef_stmt:17222*/
data_realsmith_iysfaYLTYN.dready_trig_realsmith_iysfaYLTYN = Tag2_realsmith_iysfaYLTYN(/*int:17267:17267:17222:e*/dready_trig_realsmith_iysfaYLTYN);
/*aft_stmt:17222*/
    /*bef_stmt:17257*/
if (Tag3_realsmith_iysfaYLTYN(/*int:17267:17267:17257:e*/data_realsmith_iysfaYLTYN.dready_trigger_on_realsmith_iysfaYLTYN)) {
        /*bef_stmt:17252*/
return Tag4_realsmith_iysfaYLTYN(/*int:17267:17267:17252:e*/data_realsmith_iysfaYLTYN.dready_trig_realsmith_iysfaYLTYN);
/*aft_stmt:17252*/
    }
/*aft_stmt:17257*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_CF51cY7c77(x) (x)
#define Tag2_realsmith_CF51cY7c77(x) (x)
#define Tag3_realsmith_CF51cY7c77(x) (x)
#define Tag4_realsmith_CF51cY7c77(x) (x)
#define Tag5_realsmith_CF51cY7c77(x) (x)
#define Tag6_realsmith_CF51cY7c77(x) (x)
#include "stdint.h"
#include "stdlib.h"
struct mgmt_ev_passkey_notify_7XJMeD {
    unsigned int passkey_realsmith_CF51cY7c77;
    unsigned char entered_realsmith_CF51cY7c77;
    unsigned char addr_type_realsmith_CF51cY7c77;
    unsigned char link_type_realsmith_CF51cY7c77;
};
int realsmith_CF51cY7c77(int link_type_realsmith_CF51cY7c77, int addr_type_realsmith_CF51cY7c77, unsigned int passkey_realsmith_CF51cY7c77, unsigned char entered_realsmith_CF51cY7c77) {
    struct mgmt_ev_passkey_notify_7XJMeD ev_realsmith_CF51cY7c77;
    /*bef_stmt:17651*/
ev_realsmith_CF51cY7c77.link_type_realsmith_CF51cY7c77 = (unsigned char)Tag1_realsmith_CF51cY7c77(/*int:17791:17791:17651:e*/link_type_realsmith_CF51cY7c77);
/*aft_stmt:17651*/
    /*bef_stmt:17694*/
ev_realsmith_CF51cY7c77.addr_type_realsmith_CF51cY7c77 = (unsigned char)Tag2_realsmith_CF51cY7c77(/*int:17791:17791:17694:e*/addr_type_realsmith_CF51cY7c77);
/*aft_stmt:17694*/
    /*bef_stmt:17715*/
ev_realsmith_CF51cY7c77.passkey_realsmith_CF51cY7c77 = Tag3_realsmith_CF51cY7c77(/*unsigned int:17791:17791:17715:e*/passkey_realsmith_CF51cY7c77);
/*aft_stmt:17715*/
    /*bef_stmt:17736*/
ev_realsmith_CF51cY7c77.entered_realsmith_CF51cY7c77 = Tag4_realsmith_CF51cY7c77(/*unsigned char:17791:17791:17736:e*/entered_realsmith_CF51cY7c77);
/*aft_stmt:17736*/
    /*bef_stmt:17789*/
/*bef_stmt:17789*/
return (int)(Tag5_realsmith_CF51cY7c77(/*unsigned int:17791:17791:17789:e*/ev_realsmith_CF51cY7c77.passkey_realsmith_CF51cY7c77) + Tag6_realsmith_CF51cY7c77(/*unsigned char:17791:17791:17789:e*/ev_realsmith_CF51cY7c77.entered_realsmith_CF51cY7c77));
/*aft_stmt:17789*/
/*aft_stmt:17789*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_B79y3vQji7(x) (x)
#define Tag2_realsmith_B79y3vQji7(x) (x)
#include "stdint.h"
int realsmith_B79y3vQji7(int divisor_realsmith_B79y3vQji7) {
    int mccr0_realsmith_B79y3vQji7 = 0;
    divisor_realsmith_B79y3vQji7 /= 32;
    mccr0_realsmith_B79y3vQji7 &= ~0x00007f00;
    /*bef_stmt:2037*/
mccr0_realsmith_B79y3vQji7 |= Tag1_realsmith_B79y3vQji7(/*int:2053:2053:2037:e*/divisor_realsmith_B79y3vQji7) << 8;
/*aft_stmt:2037*/
    /*bef_stmt:2051*/
return Tag2_realsmith_B79y3vQji7(/*int:2053:2053:2051:e*/mccr0_realsmith_B79y3vQji7);
/*aft_stmt:2051*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_DnYfAwICrx(x) (x)
#define Tag2_realsmith_DnYfAwICrx(x) (x)
#define Tag3_realsmith_DnYfAwICrx(x) (x)
#define Tag4_realsmith_DnYfAwICrx(x) (x)
#define Tag5_realsmith_DnYfAwICrx(x) (x)
#define Tag6_realsmith_DnYfAwICrx(x) (x)
#define Tag7_realsmith_DnYfAwICrx(x) (x)
#define Tag8_realsmith_DnYfAwICrx(x) (x)
#include "stdint.h"
int realsmith_DnYfAwICrx(int use_extra_gpios_realsmith_DnYfAwICrx, int type_realsmith_DnYfAwICrx, int attr_realsmith_DnYfAwICrx, int channel_realsmith_DnYfAwICrx) {
    /*bef_stmt:2028*/
switch (Tag1_realsmith_DnYfAwICrx(/*int:2343:2343:2028:e*/type_realsmith_DnYfAwICrx)) {
    /*bef_stmt:2040*/
case 132:
        if (Tag2_realsmith_DnYfAwICrx(/*int:2343:2343:2040:e*/channel_realsmith_DnYfAwICrx) == 0)
            return 0;
/*aft_stmt:2040*/
        /*bef_stmt:2080*/
switch (Tag3_realsmith_DnYfAwICrx(/*int:2343:2343:2080:e*/attr_realsmith_DnYfAwICrx)) {
        /*bef_stmt:2092*/
/*bef_stmt:2092*/
case 131:
            if (Tag4_realsmith_DnYfAwICrx(/*int:2343:2343:2092:e*/channel_realsmith_DnYfAwICrx) > 9 && !Tag5_realsmith_DnYfAwICrx(/*int:2343:2343:2092:e*/use_extra_gpios_realsmith_DnYfAwICrx))
                return 0;
/*aft_stmt:2092*/
/*aft_stmt:2092*/
            return 0444;
        /*bef_stmt:2149*/
case 130:
            if (Tag6_realsmith_DnYfAwICrx(/*int:2343:2343:2149:e*/channel_realsmith_DnYfAwICrx) > 8)
                return 0;
/*aft_stmt:2149*/
            return 0444;
        default:
            return 0;
        }
/*aft_stmt:2080*/
    /*bef_stmt:2209*/
case 135:
        switch (Tag7_realsmith_DnYfAwICrx(/*int:2343:2343:2209:e*/attr_realsmith_DnYfAwICrx)) {
        case 134:
        case 133:
            return 0444;
        default:
            return 0;
        }
/*aft_stmt:2209*/
    /*bef_stmt:2277*/
case 129:
        switch (Tag8_realsmith_DnYfAwICrx(/*int:2343:2343:2277:e*/attr_realsmith_DnYfAwICrx)) {
        case 128:
            return 0444;
        default:
            return 0;
        }
/*aft_stmt:2277*/
    default:
        return 0;
    }
/*aft_stmt:2028*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_VWC9hnluIa(x) (x)
#define Tag2_realsmith_VWC9hnluIa(x) (x)
#define Tag3_realsmith_VWC9hnluIa(x) (x)
#define Tag4_realsmith_VWC9hnluIa(x) (x)
#define Tag5_realsmith_VWC9hnluIa(x) (x)
#define Tag6_realsmith_VWC9hnluIa(x) (x)
#define Tag7_realsmith_VWC9hnluIa(x) (x)
#include "stdlib.h"
int realsmith_VWC9hnluIa(int wolopts_realsmith_VWC9hnluIa) {
    int wol_criteria_realsmith_VWC9hnluIa = 0;
    /*bef_stmt:17152*/
if (Tag1_realsmith_VWC9hnluIa(/*int:17330:17330:17152:e*/wolopts_realsmith_VWC9hnluIa) & ~(8 | 2 | 1 | 4))
        return -1;
/*aft_stmt:17152*/
    /*bef_stmt:17185*/
if (Tag2_realsmith_VWC9hnluIa(/*int:17330:17330:17185:e*/wolopts_realsmith_VWC9hnluIa) & 8)
        wol_criteria_realsmith_VWC9hnluIa |= 8;
/*aft_stmt:17185*/
    /*bef_stmt:17218*/
if (Tag3_realsmith_VWC9hnluIa(/*int:17330:17330:17218:e*/wolopts_realsmith_VWC9hnluIa) & 2)
        wol_criteria_realsmith_VWC9hnluIa |= 4;
/*aft_stmt:17218*/
    /*bef_stmt:17251*/
if (Tag4_realsmith_VWC9hnluIa(/*int:17330:17330:17251:e*/wolopts_realsmith_VWC9hnluIa) & 1)
        wol_criteria_realsmith_VWC9hnluIa |= 1;
/*aft_stmt:17251*/
    /*bef_stmt:17284*/
if (Tag5_realsmith_VWC9hnluIa(/*int:17330:17330:17284:e*/wolopts_realsmith_VWC9hnluIa) & 4)
        wol_criteria_realsmith_VWC9hnluIa |= 2;
/*aft_stmt:17284*/
    /*bef_stmt:17317*/
if (Tag6_realsmith_VWC9hnluIa(/*int:17330:17330:17317:e*/wolopts_realsmith_VWC9hnluIa) == 0)
        wol_criteria_realsmith_VWC9hnluIa |= 0;
/*aft_stmt:17317*/
    /*bef_stmt:17328*/
return Tag7_realsmith_VWC9hnluIa(/*int:17330:17330:17328:e*/wol_criteria_realsmith_VWC9hnluIa);
/*aft_stmt:17328*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_uuL7BUovyW(x) (x)
#define Tag2_realsmith_uuL7BUovyW(x) (x)
#define Tag3_realsmith_uuL7BUovyW(x) (x)
#define Tag4_realsmith_uuL7BUovyW(x) (x)
#define Tag5_realsmith_uuL7BUovyW(x) (x)
#define Tag6_realsmith_uuL7BUovyW(x) (x)
#define Tag7_realsmith_uuL7BUovyW(x) (x)
#define Tag8_realsmith_uuL7BUovyW(x) (x)
#define Tag9_realsmith_uuL7BUovyW(x) (x)
#include "stdlib.h"
struct otg_device_WcPKWf {
    unsigned long base_realsmith_uuL7BUovyW;
    int id_realsmith_uuL7BUovyW;
    int vbus_realsmith_uuL7BUovyW;
};
int realsmith_uuL7BUovyW(int config_extcon_realsmith_uuL7BUovyW, unsigned long resource_addr_realsmith_uuL7BUovyW) {
    struct otg_device_WcPKWf otg_dev_realsmith_uuL7BUovyW;
    int ret_realsmith_uuL7BUovyW;
    unsigned long rev_realsmith_uuL7BUovyW;
    /*bef_stmt:17248*/
if (Tag1_realsmith_uuL7BUovyW(/*int:17533:17533:17248:e*/config_extcon_realsmith_uuL7BUovyW) == 0)
        return -1;
/*aft_stmt:17248*/
    /*bef_stmt:17269*/
otg_dev_realsmith_uuL7BUovyW.base_realsmith_uuL7BUovyW = /*TAG2:STA*/((unsigned long)(realsmith_jyzq0kqYSL((int)(resource_addr_realsmith_uuL7BUovyW)+(13))+(int)(resource_addr_realsmith_uuL7BUovyW)-(84))+resource_addr_realsmith_uuL7BUovyW)/*TAG2:END:resource_addr_realsmith_uuL7BUovyW*/;
/*aft_stmt:17269*/
    /*bef_stmt:17319*/
if (Tag3_realsmith_uuL7BUovyW(/*unsigned long:17533:17533:17319:e*/otg_dev_realsmith_uuL7BUovyW.base_realsmith_uuL7BUovyW) == 0)
        return -1;
/*aft_stmt:17319*/
    /*bef_stmt:17366*/
otg_dev_realsmith_uuL7BUovyW.id_realsmith_uuL7BUovyW = (Tag4_realsmith_uuL7BUovyW(/*int:17533:17533:17366:e*/config_extcon_realsmith_uuL7BUovyW) == 1) ? 1 : 0;
/*aft_stmt:17366*/
    /*bef_stmt:17414*/
otg_dev_realsmith_uuL7BUovyW.vbus_realsmith_uuL7BUovyW = (Tag5_realsmith_uuL7BUovyW(/*int:17533:17533:17414:e*/config_extcon_realsmith_uuL7BUovyW) == 2) ? 1 : 0;
/*aft_stmt:17414*/
    /*bef_stmt:17458*/
rev_realsmith_uuL7BUovyW = (Tag6_realsmith_uuL7BUovyW(/*unsigned long:17533:17533:17458:e*/otg_dev_realsmith_uuL7BUovyW.base_realsmith_uuL7BUovyW) >> 4) & 0xf;
/*aft_stmt:17458*/
    /*bef_stmt:17520*/
/*bef_stmt:17520*/
ret_realsmith_uuL7BUovyW = (Tag7_realsmith_uuL7BUovyW(/*unsigned long:17533:17533:17520:e*/rev_realsmith_uuL7BUovyW) << 4) | (/*TAG8:STA*/((unsigned long)(realsmith_proxy_jLiGP7wAe7((int)(otg_dev_realsmith_uuL7BUovyW.base_realsmith_uuL7BUovyW)+(-83), (int)(otg_dev_realsmith_uuL7BUovyW.base_realsmith_uuL7BUovyW)+(-37), (unsigned int)(otg_dev_realsmith_uuL7BUovyW.base_realsmith_uuL7BUovyW)+(-28))+(int)(otg_dev_realsmith_uuL7BUovyW.base_realsmith_uuL7BUovyW)-(84))+otg_dev_realsmith_uuL7BUovyW.base_realsmith_uuL7BUovyW)/*TAG8:END:otg_dev_realsmith_uuL7BUovyW.base_realsmith_uuL7BUovyW*/ & 0xf);
/*aft_stmt:17520*/
/*aft_stmt:17520*/
    /*bef_stmt:17531*/
return /*TAG9:STA*/((int)(realsmith_proxy_A4UpTckE5m((int)(ret_realsmith_uuL7BUovyW)+(-83), (int)(ret_realsmith_uuL7BUovyW)+(-79), (int)(ret_realsmith_uuL7BUovyW)+(-84), (int)(ret_realsmith_uuL7BUovyW)+(-83), (int)(ret_realsmith_uuL7BUovyW)+(-84))+(int)(ret_realsmith_uuL7BUovyW)-(85))+ret_realsmith_uuL7BUovyW)/*TAG9:END:ret_realsmith_uuL7BUovyW*/;
/*aft_stmt:17531*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_2iDTO7c6aB(x) (x)
#define Tag2_realsmith_proxy_2iDTO7c6aB(x) (x)
#define Tag3_realsmith_proxy_2iDTO7c6aB(x) (x)
#define Tag4_realsmith_proxy_2iDTO7c6aB(x) (x)
#define Tag5_realsmith_proxy_2iDTO7c6aB(x) (x)
#include "stdint.h"
int realsmith_lGZ3AphBgq(int adapter_realsmith_lGZ3AphBgq, unsigned int *vers_realsmith_lGZ3AphBgq) {
    int ret_realsmith_lGZ3AphBgq;
    unsigned int A_TP_EMBED_OP_FIELD0_realsmith_lGZ3AphBgq = 0;
    unsigned int A_TP_EMBED_OP_FIELD1_realsmith_lGZ3AphBgq = 1;
    A_TP_EMBED_OP_FIELD0_realsmith_lGZ3AphBgq = 0;
    ret_realsmith_lGZ3AphBgq = 0;
    /*bef_stmt:2117*/
if (Tag1_realsmith_proxy_2iDTO7c6aB(/*int:2148:2148:2117:e*/ret_realsmith_lGZ3AphBgq)) {
        /*bef_stmt:2112*/
return Tag2_realsmith_proxy_2iDTO7c6aB(/*int:2148:2148:2112:e*/ret_realsmith_lGZ3AphBgq);
/*aft_stmt:2112*/
    }
/*aft_stmt:2117*/
    /*bef_stmt:2138*/
*vers_realsmith_lGZ3AphBgq = Tag3_realsmith_proxy_2iDTO7c6aB(/*unsigned int:2148:2148:2138:e*/A_TP_EMBED_OP_FIELD1_realsmith_lGZ3AphBgq);
/*aft_stmt:2138*/
    return 0;
}
int realsmith_proxy_2iDTO7c6aB(int p_0_pNNZQWacoz, unsigned int p_1_uhPWjpMso1) {
/*bef_stmt:2279*/
int proxy_ret_l4VSfzlTSE = realsmith_lGZ3AphBgq(Tag4_realsmith_proxy_2iDTO7c6aB(/*int:2291:2291:2279:e*/p_0_pNNZQWacoz), &(p_1_uhPWjpMso1));
/*aft_stmt:2279*/
/*bef_stmt:2289*/
return Tag5_realsmith_proxy_2iDTO7c6aB(/*int:2291:2291:2289:e*/proxy_ret_l4VSfzlTSE);
/*aft_stmt:2289*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_emI8mKu1t4(x) (x)
#define Tag2_realsmith_emI8mKu1t4(x) (x)
#define Tag3_realsmith_emI8mKu1t4(x) (x)
#include "stdlib.h"
int realsmith_emI8mKu1t4(int usb11_clk_realsmith_emI8mKu1t4, int regmap_realsmith_emI8mKu1t4) {
    int ret_realsmith_emI8mKu1t4;
    /*bef_stmt:17159*/
ret_realsmith_emI8mKu1t4 = (Tag1_realsmith_emI8mKu1t4(/*int:17238:17238:17159:e*/usb11_clk_realsmith_emI8mKu1t4) > 0) ? 0 : -1;
/*aft_stmt:17159*/
    /*bef_stmt:17182*/
if (Tag2_realsmith_emI8mKu1t4(/*int:17238:17238:17182:e*/ret_realsmith_emI8mKu1t4)) {
        /*bef_stmt:17177*/
return Tag3_realsmith_emI8mKu1t4(/*int:17238:17238:17177:e*/ret_realsmith_emI8mKu1t4);
/*aft_stmt:17177*/
    }
/*aft_stmt:17182*/
    int CFGCHIP2_USB1SUSPENDM_realsmith_emI8mKu1t4 = 1;
    int CFGCHIP_2_realsmith_emI8mKu1t4 = 2;
    return 0;
}



#include "stdlib.h"
int realsmith_LcASN5RJJV(int sreg_dev_realsmith_LcASN5RJJV, int *skb_realsmith_LcASN5RJJV) {
    int result_realsmith_LcASN5RJJV = 0;
    if (skb_realsmith_LcASN5RJJV == ((void*)0)) {
        return -1;
    }
    if (sreg_dev_realsmith_LcASN5RJJV < 0) {
        result_realsmith_LcASN5RJJV = -1;
    }
    return result_realsmith_LcASN5RJJV;
}
int realsmith_proxy_jJXHvjeGpO(int p_0_MHe5rvaKh5, int p_1_vVWC3bbNCA) {
int proxy_C5nrqaOriE[18] = { p_1_vVWC3bbNCA, 58, p_1_vVWC3bbNCA, 53, 57, p_1_vVWC3bbNCA, p_1_vVWC3bbNCA, p_1_vVWC3bbNCA, p_1_vVWC3bbNCA, 48, p_1_vVWC3bbNCA, 73, p_1_vVWC3bbNCA, 66, p_1_vVWC3bbNCA, p_1_vVWC3bbNCA, 11, p_1_vVWC3bbNCA };
int proxy_ret_SAIcvST3um = realsmith_LcASN5RJJV(p_0_MHe5rvaKh5, proxy_C5nrqaOriE);
return proxy_ret_SAIcvST3um;
}


#include "stdlib.h"
#include "stdint.h"
int realsmith_TTbXIDrZZc(int pages_in_block_realsmith_TTbXIDrZZc, int page_size_realsmith_TTbXIDrZZc, int block_size_realsmith_TTbXIDrZZc, unsigned short int pba_realsmith_TTbXIDrZZc, int *orig_sg_realsmith_TTbXIDrZZc, int offset_realsmith_TTbXIDrZZc, int *block_buffer_realsmith_TTbXIDrZZc) {
    int page_realsmith_TTbXIDrZZc = 0, error_realsmith_TTbXIDrZZc = 0;
    int *sg_realsmith_TTbXIDrZZc = (int *)(malloc(block_size_realsmith_TTbXIDrZZc));
    while (page_realsmith_TTbXIDrZZc < pages_in_block_realsmith_TTbXIDrZZc) {
        for (int i_realsmith_TTbXIDrZZc = 0; i_realsmith_TTbXIDrZZc < page_size_realsmith_TTbXIDrZZc; i_realsmith_TTbXIDrZZc++) {
            sg_realsmith_TTbXIDrZZc[page_realsmith_TTbXIDrZZc * page_size_realsmith_TTbXIDrZZc + i_realsmith_TTbXIDrZZc] = block_buffer_realsmith_TTbXIDrZZc[page_realsmith_TTbXIDrZZc * page_size_realsmith_TTbXIDrZZc + i_realsmith_TTbXIDrZZc];
        }
        page_realsmith_TTbXIDrZZc++;
    }
    for (int i_realsmith_TTbXIDrZZc = 0; i_realsmith_TTbXIDrZZc < block_size_realsmith_TTbXIDrZZc / sizeof(int); i_realsmith_TTbXIDrZZc++) {
        if (orig_sg_realsmith_TTbXIDrZZc[i_realsmith_TTbXIDrZZc + offset_realsmith_TTbXIDrZZc] != sg_realsmith_TTbXIDrZZc[i_realsmith_TTbXIDrZZc]) {
            (free(sg_realsmith_TTbXIDrZZc));
            return -5;
        }
    }
    (free(sg_realsmith_TTbXIDrZZc));
    return 0;
}
int realsmith_proxy_4DwXm6GVaD(int p_0_8SIvpwLsnI, int p_1_MidVyGvwT2, int p_2_uuC0k4JjsB, int p_3_dnWKl8tsaQ, int p_4_FEbwGp0mQc, int p_5_dShe7eFZLr, int p_6_XWOETfgfoC) {
int proxy_AxmjPmB4Z3[10] = { 40, p_4_FEbwGp0mQc, p_4_FEbwGp0mQc, p_4_FEbwGp0mQc, p_4_FEbwGp0mQc, 84, 17, p_4_FEbwGp0mQc, p_4_FEbwGp0mQc, p_4_FEbwGp0mQc };
int proxy_ret_3OFLqRfhGO = realsmith_TTbXIDrZZc(p_0_8SIvpwLsnI, p_1_MidVyGvwT2, p_2_uuC0k4JjsB, p_3_dnWKl8tsaQ, proxy_AxmjPmB4Z3, p_5_dShe7eFZLr, &(p_6_XWOETfgfoC));
return proxy_ret_3OFLqRfhGO;
}


#include "stdlib.h"
int realsmith_7PeKp8GWdc(int nalloc_realsmith_7PeKp8GWdc, int len_realsmith_7PeKp8GWdc, int *data_realsmith_7PeKp8GWdc, int n_realsmith_7PeKp8GWdc) {
    unsigned long flags_realsmith_7PeKp8GWdc;
    int *softnet_data_realsmith_7PeKp8GWdc = data_realsmith_7PeKp8GWdc;
    flags_realsmith_7PeKp8GWdc = 0;
    if (nalloc_realsmith_7PeKp8GWdc == (len_realsmith_7PeKp8GWdc + 1)) {
        nalloc_realsmith_7PeKp8GWdc *= 2;
        softnet_data_realsmith_7PeKp8GWdc = (realloc(softnet_data_realsmith_7PeKp8GWdc, nalloc_realsmith_7PeKp8GWdc * sizeof(int)));
    }
    softnet_data_realsmith_7PeKp8GWdc[len_realsmith_7PeKp8GWdc++] = n_realsmith_7PeKp8GWdc;
    flags_realsmith_7PeKp8GWdc = 1;
    return len_realsmith_7PeKp8GWdc;
}
int realsmith_proxy_qOUQWVOrWT(int p_0_xoktl7VZfq, int p_1_LRutGRpKIi, int p_2_BVUWCN1Ehk, int p_3_ndWrejYCdN) {
int proxy_FS5q4GTOEE[10] = { 76, 9, p_2_BVUWCN1Ehk, 46, 51, 76, 37, p_2_BVUWCN1Ehk, p_2_BVUWCN1Ehk, 8 };
int proxy_ret_blrNix7xwG = realsmith_7PeKp8GWdc(p_0_xoktl7VZfq, p_1_LRutGRpKIi, proxy_FS5q4GTOEE, p_3_ndWrejYCdN);
return proxy_ret_blrNix7xwG;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_txqYHNplsB(x) (x)
#define Tag2_realsmith_txqYHNplsB(x) (x)
#define Tag3_realsmith_txqYHNplsB(x) (x)
#define Tag4_realsmith_txqYHNplsB(x) (x)
#define Tag5_realsmith_txqYHNplsB(x) (x)
#define Tag6_realsmith_txqYHNplsB(x) (x)
#define Tag7_realsmith_txqYHNplsB(x) (x)
#include "stdlib.h"
int realsmith_txqYHNplsB(int store_chunk_mask_realsmith_txqYHNplsB, int cow_bdev_realsmith_txqYHNplsB, int old_chunk_realsmith_txqYHNplsB, int new_chunk_realsmith_txqYHNplsB, int bio_bi_sector_realsmith_txqYHNplsB, int chunk_realsmith_txqYHNplsB) {
    /*bef_stmt:17199*/
int chunk_number_realsmith_txqYHNplsB = Tag1_realsmith_txqYHNplsB(/*int:17305:17305:17199:e*/new_chunk_realsmith_txqYHNplsB);
/*aft_stmt:17199*/
    /*bef_stmt:17263*/
/*bef_stmt:17263*/
/*bef_stmt:17263*/
int sector_realsmith_txqYHNplsB = (Tag2_realsmith_txqYHNplsB(/*int:17305:17305:17263:e*/chunk_number_realsmith_txqYHNplsB) + (Tag3_realsmith_txqYHNplsB(/*int:17305:17305:17263:e*/chunk_realsmith_txqYHNplsB) - Tag4_realsmith_txqYHNplsB(/*int:17305:17305:17263:e*/old_chunk_realsmith_txqYHNplsB))) * 512;
/*aft_stmt:17263*/
/*aft_stmt:17263*/
/*aft_stmt:17263*/
    /*bef_stmt:17303*/
/*bef_stmt:17303*/
/*bef_stmt:17303*/
return (Tag5_realsmith_txqYHNplsB(/*int:17305:17305:17303:e*/sector_realsmith_txqYHNplsB) + (Tag6_realsmith_txqYHNplsB(/*int:17305:17305:17303:e*/bio_bi_sector_realsmith_txqYHNplsB) & Tag7_realsmith_txqYHNplsB(/*int:17305:17305:17303:e*/store_chunk_mask_realsmith_txqYHNplsB)));
/*aft_stmt:17303*/
/*aft_stmt:17303*/
/*aft_stmt:17303*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_DbtvzeVWtm(x) (x)
#define Tag2_realsmith_DbtvzeVWtm(x) (x)
#define Tag3_realsmith_DbtvzeVWtm(x) (x)
#define Tag4_realsmith_DbtvzeVWtm(x) (x)
#define Tag5_realsmith_DbtvzeVWtm(x) (x)
#include "stdlib.h"
int realsmith_DbtvzeVWtm(int alg_realsmith_DbtvzeVWtm, int mode_realsmith_DbtvzeVWtm) {
    /*bef_stmt:17123*/
int SAFEXCEL_AES_realsmith_DbtvzeVWtm = Tag1_realsmith_DbtvzeVWtm(/*int:17236:17236:17123:e*/alg_realsmith_DbtvzeVWtm);
/*aft_stmt:17123*/
    /*bef_stmt:17149*/
int CONTEXT_CONTROL_CRYPTO_MODE_OFB_realsmith_DbtvzeVWtm = Tag2_realsmith_DbtvzeVWtm(/*int:17236:17236:17149:e*/mode_realsmith_DbtvzeVWtm);
/*aft_stmt:17149*/
    int result_realsmith_DbtvzeVWtm = 0;
    /*bef_stmt:17198*/
int ctx_alg_realsmith_DbtvzeVWtm = Tag3_realsmith_DbtvzeVWtm(/*int:17236:17236:17198:e*/SAFEXCEL_AES_realsmith_DbtvzeVWtm);
/*aft_stmt:17198*/
    /*bef_stmt:17224*/
int ctx_mode_realsmith_DbtvzeVWtm = Tag4_realsmith_DbtvzeVWtm(/*int:17236:17236:17224:e*/CONTEXT_CONTROL_CRYPTO_MODE_OFB_realsmith_DbtvzeVWtm);
/*aft_stmt:17224*/
    /*bef_stmt:17234*/
return Tag5_realsmith_DbtvzeVWtm(/*int:17236:17236:17234:e*/result_realsmith_DbtvzeVWtm);
/*aft_stmt:17234*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_HzpxukHxk4(x) (x)
#define Tag2_realsmith_HzpxukHxk4(x) (x)
#include "stdlib.h"
struct pblk_rb_OdbYrw {
    long unsigned int entries_realsmith_HzpxukHxk4;
};
int realsmith_HzpxukHxk4(long unsigned int entries_realsmith_HzpxukHxk4) {
    struct pblk_rb_OdbYrw rb_realsmith_HzpxukHxk4;
    /*bef_stmt:17159*/
rb_realsmith_HzpxukHxk4.entries_realsmith_HzpxukHxk4 = Tag1_realsmith_HzpxukHxk4(/*unsigned long:17221:17221:17159:e*/entries_realsmith_HzpxukHxk4);
/*aft_stmt:17159*/
    /*bef_stmt:17219*/
return (Tag2_realsmith_HzpxukHxk4(/*unsigned long:17221:17221:17219:e*/rb_realsmith_HzpxukHxk4.entries_realsmith_HzpxukHxk4) > 0) ? 0 : -1;
/*aft_stmt:17219*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_K4ZvzvDHvV(x) (x)
#define Tag2_realsmith_K4ZvzvDHvV(x) (x)
#define Tag3_realsmith_K4ZvzvDHvV(x) (x)
#define Tag4_realsmith_K4ZvzvDHvV(x) (x)
#define Tag5_realsmith_K4ZvzvDHvV(x) (x)
#include "stdlib.h"
int realsmith_K4ZvzvDHvV(int base_realsmith_K4ZvzvDHvV) {
    const int CFG_BASE_realsmith_K4ZvzvDHvV = 0;
    const int PROT_BITS_OFFS_realsmith_K4ZvzvDHvV = 0;
    /*bef_stmt:17187*/
/*bef_stmt:17187*/
/*bef_stmt:17187*/
int pb_addr_realsmith_K4ZvzvDHvV = /*TAG1:STA*/((int)(realsmith_ie262nqDQT((int)(base_realsmith_K4ZvzvDHvV)+(33))+(int)(base_realsmith_K4ZvzvDHvV)-(56))+base_realsmith_K4ZvzvDHvV)/*TAG1:END:base_realsmith_K4ZvzvDHvV*/ - /*TAG2:STA*/((int)(realsmith_2F5dl1yXCr((int)(CFG_BASE_realsmith_K4ZvzvDHvV)+(86), (int)(CFG_BASE_realsmith_K4ZvzvDHvV)+(22))+(int)(CFG_BASE_realsmith_K4ZvzvDHvV)-(0))+CFG_BASE_realsmith_K4ZvzvDHvV)/*TAG2:END:CFG_BASE_realsmith_K4ZvzvDHvV*/ + /*TAG3:STA*/((int)(realsmith_xfm7okMc5i((int)(PROT_BITS_OFFS_realsmith_K4ZvzvDHvV)+(6), (int)(PROT_BITS_OFFS_realsmith_K4ZvzvDHvV)+(36))+(int)(PROT_BITS_OFFS_realsmith_K4ZvzvDHvV)-(0))+PROT_BITS_OFFS_realsmith_K4ZvzvDHvV)/*TAG3:END:PROT_BITS_OFFS_realsmith_K4ZvzvDHvV*/;
/*aft_stmt:17187*/
/*aft_stmt:17187*/
/*aft_stmt:17187*/
    int count_realsmith_K4ZvzvDHvV = 0;
    /*bef_stmt:17253*/
while (Tag4_realsmith_K4ZvzvDHvV(/*int:17266:17266:17253:e*/pb_addr_realsmith_K4ZvzvDHvV) & 0xFFF) {
        count_realsmith_K4ZvzvDHvV++;
        pb_addr_realsmith_K4ZvzvDHvV += 4;
    }
/*aft_stmt:17253*/
    /*bef_stmt:17264*/
return Tag5_realsmith_K4ZvzvDHvV(/*int:17266:17266:17264:e*/count_realsmith_K4ZvzvDHvV);
/*aft_stmt:17264*/
}



#include "stdlib.h"
int realsmith_x3LHOcsQS8(unsigned long *result_realsmith_x3LHOcsQS8, const unsigned long *left_realsmith_x3LHOcsQS8, unsigned int ndigits_realsmith_x3LHOcsQS8) {
    unsigned long r01_low_realsmith_x3LHOcsQS8 = 0, r01_high_realsmith_x3LHOcsQS8 = 0;
    unsigned long r2_realsmith_x3LHOcsQS8 = 0;
    int i_realsmith_x3LHOcsQS8, k_realsmith_x3LHOcsQS8;
    for (k_realsmith_x3LHOcsQS8 = 0; k_realsmith_x3LHOcsQS8 < ndigits_realsmith_x3LHOcsQS8 * 2 - 1; k_realsmith_x3LHOcsQS8++) {
        unsigned int min_realsmith_x3LHOcsQS8;
        if (k_realsmith_x3LHOcsQS8 < ndigits_realsmith_x3LHOcsQS8)
            min_realsmith_x3LHOcsQS8 = 0;
        else
            min_realsmith_x3LHOcsQS8 = (k_realsmith_x3LHOcsQS8 + 1) - ndigits_realsmith_x3LHOcsQS8;
        for (i_realsmith_x3LHOcsQS8 = min_realsmith_x3LHOcsQS8; i_realsmith_x3LHOcsQS8 <= k_realsmith_x3LHOcsQS8 && i_realsmith_x3LHOcsQS8 <= k_realsmith_x3LHOcsQS8 - i_realsmith_x3LHOcsQS8; i_realsmith_x3LHOcsQS8++) {
            unsigned long product_low_realsmith_x3LHOcsQS8 = left_realsmith_x3LHOcsQS8[i_realsmith_x3LHOcsQS8] * left_realsmith_x3LHOcsQS8[k_realsmith_x3LHOcsQS8 - i_realsmith_x3LHOcsQS8];
            unsigned long product_high_realsmith_x3LHOcsQS8 = 0;
            if (i_realsmith_x3LHOcsQS8 < k_realsmith_x3LHOcsQS8 - i_realsmith_x3LHOcsQS8) {
                r2_realsmith_x3LHOcsQS8 += product_low_realsmith_x3LHOcsQS8 >> 63;
                product_high_realsmith_x3LHOcsQS8 = (product_low_realsmith_x3LHOcsQS8 << 1) | (product_low_realsmith_x3LHOcsQS8 >> 63);
                product_low_realsmith_x3LHOcsQS8 <<= 1;
            }
            r01_low_realsmith_x3LHOcsQS8 += product_low_realsmith_x3LHOcsQS8;
            if (r01_low_realsmith_x3LHOcsQS8 < product_low_realsmith_x3LHOcsQS8) {
                r2_realsmith_x3LHOcsQS8++;
            }
            r01_high_realsmith_x3LHOcsQS8 += product_high_realsmith_x3LHOcsQS8;
            if (r01_high_realsmith_x3LHOcsQS8 < product_high_realsmith_x3LHOcsQS8) {
                r2_realsmith_x3LHOcsQS8++;
            }
        }
        result_realsmith_x3LHOcsQS8[k_realsmith_x3LHOcsQS8] = r01_low_realsmith_x3LHOcsQS8;
        r01_low_realsmith_x3LHOcsQS8 = r01_high_realsmith_x3LHOcsQS8;
        r01_high_realsmith_x3LHOcsQS8 = r2_realsmith_x3LHOcsQS8;
        r2_realsmith_x3LHOcsQS8 = 0;
    }
    result_realsmith_x3LHOcsQS8[ndigits_realsmith_x3LHOcsQS8 * 2 - 1] = r01_low_realsmith_x3LHOcsQS8;
    return 0;
}
int realsmith_proxy_066QSvCK3n(unsigned long p_0_7Im2t3dsUD, unsigned long p_1_TAhdlUAPjD, unsigned int p_2_L53Oz1WRXZ) {
unsigned long proxy_IFOSCuW0zp[16] = { p_0_7Im2t3dsUD, 34, p_0_7Im2t3dsUD, 64, p_0_7Im2t3dsUD, p_0_7Im2t3dsUD, p_0_7Im2t3dsUD, 30, 63, 39, p_0_7Im2t3dsUD, p_0_7Im2t3dsUD, 22, 28, 98, p_0_7Im2t3dsUD };
unsigned long proxy_kGuXyIL5VV[13] = { 28, 38, p_1_TAhdlUAPjD, 82, p_1_TAhdlUAPjD, p_1_TAhdlUAPjD, 92, 78, 26, 36, p_1_TAhdlUAPjD, 79, 62 };
int proxy_ret_CBqMwz37RR = realsmith_x3LHOcsQS8(proxy_IFOSCuW0zp, proxy_kGuXyIL5VV, p_2_L53Oz1WRXZ);
return proxy_ret_CBqMwz37RR;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_BJC93hreWi(x) (x)
#include "stdlib.h"
int realsmith_BJC93hreWi(int state_realsmith_BJC93hreWi, int event_realsmith_BJC93hreWi) {
    /*bef_stmt:17107*/
switch (Tag1_realsmith_BJC93hreWi(/*int:17185:17185:17107:e*/event_realsmith_BJC93hreWi)) {
    case 128:
        return 1;
    case 129:
        return 2;
    case 130:
        return 3;
    default:
        return -1;
    }
/*aft_stmt:17107*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_iAE1zPdx9n(x) (x)
#define Tag2_realsmith_proxy_iAE1zPdx9n(x) (x)
#define Tag3_realsmith_proxy_iAE1zPdx9n(x) (x)
#define Tag4_realsmith_proxy_iAE1zPdx9n(x) (x)
#define Tag5_realsmith_proxy_iAE1zPdx9n(x) (x)
#define Tag6_realsmith_proxy_iAE1zPdx9n(x) (x)
#define Tag7_realsmith_proxy_iAE1zPdx9n(x) (x)
#define Tag8_realsmith_proxy_iAE1zPdx9n(x) (x)
#define Tag9_realsmith_proxy_iAE1zPdx9n(x) (x)
#define Tag10_realsmith_proxy_iAE1zPdx9n(x) (x)
#include "stdlib.h"
int realsmith_JZYpWr5zDg(int vfl_type_realsmith_JZYpWr5zDg, int *type_realsmith_JZYpWr5zDg) {
    int ret_realsmith_JZYpWr5zDg = 0;
    int VFL_TYPE_RADIO_realsmith_JZYpWr5zDg = 1;
    int V4L2_TUNER_RADIO_realsmith_JZYpWr5zDg = 1;
    int V4L2_TUNER_ANALOG_TV_realsmith_JZYpWr5zDg = 0;
    /*bef_stmt:17235*/
/*bef_stmt:17235*/
ret_realsmith_JZYpWr5zDg = (Tag1_realsmith_proxy_iAE1zPdx9n(/*int:17321:17321:17235:e*/vfl_type_realsmith_JZYpWr5zDg) == Tag2_realsmith_proxy_iAE1zPdx9n(/*int:17321:17321:17235:e*/VFL_TYPE_RADIO_realsmith_JZYpWr5zDg)) ? 0 : -1;
/*aft_stmt:17235*/
/*aft_stmt:17235*/
    /*bef_stmt:17255*/
/*bef_stmt:17255*/
if (Tag3_realsmith_proxy_iAE1zPdx9n(/*int:17321:17321:17255:e*/ret_realsmith_JZYpWr5zDg))
        return Tag4_realsmith_proxy_iAE1zPdx9n(/*int:17321:17321:17255:e*/ret_realsmith_JZYpWr5zDg);
/*aft_stmt:17255*/
/*aft_stmt:17255*/
    /*bef_stmt:17311*/
/*bef_stmt:17311*/
/*bef_stmt:17311*/
/*bef_stmt:17311*/
*type_realsmith_JZYpWr5zDg = (Tag5_realsmith_proxy_iAE1zPdx9n(/*int:17321:17321:17311:e*/vfl_type_realsmith_JZYpWr5zDg) == Tag6_realsmith_proxy_iAE1zPdx9n(/*int:17321:17321:17311:e*/VFL_TYPE_RADIO_realsmith_JZYpWr5zDg)) ? Tag7_realsmith_proxy_iAE1zPdx9n(/*int:17321:17321:17311:e*/V4L2_TUNER_RADIO_realsmith_JZYpWr5zDg) : Tag8_realsmith_proxy_iAE1zPdx9n(/*int:17321:17321:17311:e*/V4L2_TUNER_ANALOG_TV_realsmith_JZYpWr5zDg);
/*aft_stmt:17311*/
/*aft_stmt:17311*/
/*aft_stmt:17311*/
/*aft_stmt:17311*/
    return 0;
}
int realsmith_proxy_iAE1zPdx9n(int p_0_u41rnFuorr, int p_1_Wln3T474YS) {
/*bef_stmt:17457*/
int proxy_ret_zppJytkUIt = realsmith_JZYpWr5zDg(Tag9_realsmith_proxy_iAE1zPdx9n(/*int:17469:17469:17457:e*/p_0_u41rnFuorr), &(p_1_Wln3T474YS));
/*aft_stmt:17457*/
/*bef_stmt:17467*/
return Tag10_realsmith_proxy_iAE1zPdx9n(/*int:17469:17469:17467:e*/proxy_ret_zppJytkUIt);
/*aft_stmt:17467*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_GC2DiAphoC(x) (x)
#define Tag2_realsmith_GC2DiAphoC(x) (x)
#define Tag3_realsmith_GC2DiAphoC(x) (x)
#define Tag4_realsmith_GC2DiAphoC(x) (x)
#define Tag5_realsmith_GC2DiAphoC(x) (x)
#include "stdlib.h"
int realsmith_GC2DiAphoC(int usb_dev_realsmith_GC2DiAphoC, int usb_intf_realsmith_GC2DiAphoC, int hostdata_realsmith_GC2DiAphoC) {
    int result_realsmith_GC2DiAphoC;
    /*bef_stmt:17197*/
/*bef_stmt:17197*/
result_realsmith_GC2DiAphoC = (Tag1_realsmith_GC2DiAphoC(/*int:17293:17293:17197:e*/usb_dev_realsmith_GC2DiAphoC) != 0 && Tag2_realsmith_GC2DiAphoC(/*int:17293:17293:17197:e*/usb_intf_realsmith_GC2DiAphoC) != 0) ? 0 : -1;
/*aft_stmt:17197*/
/*aft_stmt:17197*/
    /*bef_stmt:17263*/
if (Tag3_realsmith_GC2DiAphoC(/*int:17293:17293:17263:e*/result_realsmith_GC2DiAphoC) == 0) {
        /*bef_stmt:17256*/
result_realsmith_GC2DiAphoC = (Tag4_realsmith_GC2DiAphoC(/*int:17293:17293:17256:e*/usb_dev_realsmith_GC2DiAphoC) != 0) ? 0 : -1;
/*aft_stmt:17256*/
    }
/*aft_stmt:17263*/
    /*bef_stmt:17291*/
return Tag5_realsmith_GC2DiAphoC(/*int:17293:17293:17291:e*/result_realsmith_GC2DiAphoC) ? -1 : 0;
/*aft_stmt:17291*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_94xYKGRjVY(x) (x)
#define Tag2_realsmith_proxy_94xYKGRjVY(x) (x)
#define Tag3_realsmith_proxy_94xYKGRjVY(x) (x)
#include "stdlib.h"
struct mc13xxx_fXK5SE {
    int dummy_realsmith_1KcrO5wgGD;
};
int realsmith_1KcrO5wgGD(int dummy_value_realsmith_1KcrO5wgGD, const char *format_realsmith_1KcrO5wgGD) {
    struct mc13xxx_fXK5SE mc13xxx_instance_realsmith_1KcrO5wgGD;
    /*bef_stmt:17177*/
mc13xxx_instance_realsmith_1KcrO5wgGD.dummy_realsmith_1KcrO5wgGD = Tag1_realsmith_proxy_94xYKGRjVY(/*int:17198:17198:17177:e*/dummy_value_realsmith_1KcrO5wgGD);
/*aft_stmt:17177*/
    return 0;
}
int realsmith_proxy_94xYKGRjVY(int p_0_GZESTrdyXG, char p_1_T5QugBBouN) {
/*bef_stmt:17326*/
int proxy_ret_n8iNYO7Xuo = realsmith_1KcrO5wgGD(/*TAG2:STA*/((int)(realsmith_GC2DiAphoC((int)(p_0_GZESTrdyXG)+(-48), (int)(p_0_GZESTrdyXG)+(-23), (int)(p_0_GZESTrdyXG)+(14))+(int)(p_0_GZESTrdyXG)-(84))+p_0_GZESTrdyXG)/*TAG2:END:p_0_GZESTrdyXG*/, &(p_1_T5QugBBouN));
/*aft_stmt:17326*/
/*bef_stmt:17336*/
return Tag3_realsmith_proxy_94xYKGRjVY(/*int:17338:17338:17336:e*/proxy_ret_n8iNYO7Xuo);
/*aft_stmt:17336*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_jZWNeeIc9A(x) (x)
#define Tag2_realsmith_jZWNeeIc9A(x) (x)
#include "stdlib.h"
int realsmith_jZWNeeIc9A(int state_realsmith_jZWNeeIc9A) {
    /*bef_stmt:17227*/
int result_realsmith_jZWNeeIc9A = (Tag1_realsmith_jZWNeeIc9A(/*int:17239:17239:17227:e*/state_realsmith_jZWNeeIc9A) ? (1 << 0) : 0) | (1 << 1) | (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5);
/*aft_stmt:17227*/
    /*bef_stmt:17237*/
return Tag2_realsmith_jZWNeeIc9A(/*int:17239:17239:17237:e*/result_realsmith_jZWNeeIc9A);
/*aft_stmt:17237*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_KvabIjuwxS(x) (x)
#define Tag2_realsmith_KvabIjuwxS(x) (x)
#define Tag3_realsmith_KvabIjuwxS(x) (x)
#define Tag4_realsmith_KvabIjuwxS(x) (x)
#define Tag5_realsmith_KvabIjuwxS(x) (x)
#define Tag6_realsmith_KvabIjuwxS(x) (x)
#include "stdbool.h"
int realsmith_KvabIjuwxS(int count_realsmith_KvabIjuwxS) {
    int result_realsmith_KvabIjuwxS = 0;
    /*bef_stmt:622*/
result_realsmith_KvabIjuwxS |= (Tag1_realsmith_KvabIjuwxS(/*int:785:785:622:e*/count_realsmith_KvabIjuwxS) == 1) << 0;
/*aft_stmt:622*/
    /*bef_stmt:659*/
result_realsmith_KvabIjuwxS |= (Tag2_realsmith_KvabIjuwxS(/*int:785:785:659:e*/count_realsmith_KvabIjuwxS) == 2) << 1;
/*aft_stmt:659*/
    /*bef_stmt:696*/
result_realsmith_KvabIjuwxS |= (Tag3_realsmith_KvabIjuwxS(/*int:785:785:696:e*/count_realsmith_KvabIjuwxS) == 3) << 2;
/*aft_stmt:696*/
    /*bef_stmt:733*/
result_realsmith_KvabIjuwxS |= (Tag4_realsmith_KvabIjuwxS(/*int:785:785:733:e*/count_realsmith_KvabIjuwxS) == 4) << 3;
/*aft_stmt:733*/
    /*bef_stmt:770*/
result_realsmith_KvabIjuwxS |= (Tag5_realsmith_KvabIjuwxS(/*int:785:785:770:e*/count_realsmith_KvabIjuwxS) == 5) << 4;
/*aft_stmt:770*/
    /*bef_stmt:783*/
return Tag6_realsmith_KvabIjuwxS(/*int:785:785:783:e*/result_realsmith_KvabIjuwxS);
/*aft_stmt:783*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_qrDE9QdMcq(x) (x)
#define Tag2_realsmith_qrDE9QdMcq(x) (x)
#define Tag3_realsmith_qrDE9QdMcq(x) (x)
#define Tag4_realsmith_qrDE9QdMcq(x) (x)
#define Tag5_realsmith_qrDE9QdMcq(x) (x)
#define Tag6_realsmith_qrDE9QdMcq(x) (x)
#define Tag7_realsmith_qrDE9QdMcq(x) (x)
#define Tag8_realsmith_qrDE9QdMcq(x) (x)
#define Tag9_realsmith_qrDE9QdMcq(x) (x)
#define Tag10_realsmith_qrDE9QdMcq(x) (x)
#include "stdlib.h"
struct iio_dma_buffer_block_OxuiA9 {
    int head_realsmith_qrDE9QdMcq;
    long unsigned int bytes_used_realsmith_qrDE9QdMcq;
    long unsigned int phys_addr_realsmith_qrDE9QdMcq;
    long unsigned int size_realsmith_qrDE9QdMcq;
};
struct dmaengine_buffer_OxuiA9 {
    int chan_realsmith_qrDE9QdMcq;
    long unsigned int max_size_realsmith_qrDE9QdMcq;
    long unsigned int align_realsmith_qrDE9QdMcq;
    int active_realsmith_qrDE9QdMcq;
    struct {
        int list_lock_realsmith_qrDE9QdMcq;
    } queue_realsmith_qrDE9QdMcq;
};
int realsmith_qrDE9QdMcq(int queue_buffer_realsmith_qrDE9QdMcq, long unsigned int block_phys_addr_realsmith_qrDE9QdMcq, long unsigned int block_size_realsmith_qrDE9QdMcq) {
    struct dmaengine_buffer_OxuiA9 dmaengine_buffer_realsmith_qrDE9QdMcq;
    struct iio_dma_buffer_block_OxuiA9 block_realsmith_qrDE9QdMcq;
    long unsigned int min_size_realsmith_qrDE9QdMcq;
    dmaengine_buffer_realsmith_qrDE9QdMcq.max_size_realsmith_qrDE9QdMcq = 1024;
    dmaengine_buffer_realsmith_qrDE9QdMcq.align_realsmith_qrDE9QdMcq = 4;
    /*bef_stmt:17476*/
block_realsmith_qrDE9QdMcq.size_realsmith_qrDE9QdMcq = Tag1_realsmith_qrDE9QdMcq(/*unsigned long:17702:17702:17476:e*/block_size_realsmith_qrDE9QdMcq);
/*aft_stmt:17476*/
    /*bef_stmt:17564*/
/*bef_stmt:17564*/
/*bef_stmt:17564*/
/*bef_stmt:17564*/
min_size_realsmith_qrDE9QdMcq = (Tag2_realsmith_qrDE9QdMcq(/*unsigned long:17702:17702:17564:e*/block_realsmith_qrDE9QdMcq.size_realsmith_qrDE9QdMcq) < Tag3_realsmith_qrDE9QdMcq(/*unsigned long:17702:17702:17564:e*/dmaengine_buffer_realsmith_qrDE9QdMcq.max_size_realsmith_qrDE9QdMcq)) ? Tag4_realsmith_qrDE9QdMcq(/*unsigned long:17702:17702:17564:e*/block_realsmith_qrDE9QdMcq.size_realsmith_qrDE9QdMcq) : Tag5_realsmith_qrDE9QdMcq(/*unsigned long:17702:17702:17564:e*/dmaengine_buffer_realsmith_qrDE9QdMcq.max_size_realsmith_qrDE9QdMcq);
/*aft_stmt:17564*/
/*aft_stmt:17564*/
/*aft_stmt:17564*/
/*aft_stmt:17564*/
    /*bef_stmt:17623*/
/*bef_stmt:17623*/
/*bef_stmt:17623*/
block_realsmith_qrDE9QdMcq.bytes_used_realsmith_qrDE9QdMcq = (Tag6_realsmith_qrDE9QdMcq(/*unsigned long:17702:17702:17623:e*/min_size_realsmith_qrDE9QdMcq) / Tag7_realsmith_qrDE9QdMcq(/*unsigned long:17702:17702:17623:e*/dmaengine_buffer_realsmith_qrDE9QdMcq.align_realsmith_qrDE9QdMcq)) * Tag8_realsmith_qrDE9QdMcq(/*unsigned long:17702:17702:17623:e*/dmaengine_buffer_realsmith_qrDE9QdMcq.align_realsmith_qrDE9QdMcq);
/*aft_stmt:17623*/
/*aft_stmt:17623*/
/*aft_stmt:17623*/
    /*bef_stmt:17663*/
if (Tag9_realsmith_qrDE9QdMcq(/*unsigned long:17702:17702:17663:e*/block_realsmith_qrDE9QdMcq.bytes_used_realsmith_qrDE9QdMcq) == 0) {
        return -1;
    }
/*aft_stmt:17663*/
    /*bef_stmt:17690*/
dmaengine_buffer_realsmith_qrDE9QdMcq.active_realsmith_qrDE9QdMcq += Tag10_realsmith_qrDE9QdMcq(/*int:17702:17702:17690:e*/block_realsmith_qrDE9QdMcq.head_realsmith_qrDE9QdMcq);
/*aft_stmt:17690*/
    return 0;
}



#include "stdlib.h"
int realsmith_0hQDCycAgk(int pp_handle_realsmith_0hQDCycAgk, int pp_funcs_set_realsmith_0hQDCycAgk, int pp_funcs_get_realsmith_0hQDCycAgk, int *in_baco_reset_realsmith_0hQDCycAgk) {
    if (pp_funcs_get_realsmith_0hQDCycAgk == 0 || pp_funcs_set_realsmith_0hQDCycAgk == 0)
        return -1;
    if (pp_funcs_set_realsmith_0hQDCycAgk != 1)
        return -5;
    if (pp_funcs_set_realsmith_0hQDCycAgk != 0)
        return -5;
    *in_baco_reset_realsmith_0hQDCycAgk = 1;
    return 0;
}
int realsmith_proxy_ktyzMoZDrZ(int p_0_nXdv97q36d, int p_1_9TasOFQuK8, int p_2_DHTujap27d, int p_3_BiPqtTmpyD) {
int proxy_jxeQZn4dls[11] = { 72, 24, 73, p_3_BiPqtTmpyD, p_3_BiPqtTmpyD, p_3_BiPqtTmpyD, p_3_BiPqtTmpyD, 19, p_3_BiPqtTmpyD, p_3_BiPqtTmpyD, p_3_BiPqtTmpyD };
int proxy_ret_t9LoAqmcHT = realsmith_0hQDCycAgk(p_0_nXdv97q36d, p_1_9TasOFQuK8, p_2_DHTujap27d, proxy_jxeQZn4dls);
return proxy_ret_t9LoAqmcHT;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_WZ26z6PJMk(x) (x)
#define Tag2_realsmith_WZ26z6PJMk(x) (x)
#include "stdlib.h"
struct detailed_timing_TmKOSv {
    unsigned long other_data_type_realsmith_WZ26z6PJMk;
};
int realsmith_WZ26z6PJMk(unsigned long other_data_type_realsmith_WZ26z6PJMk, unsigned long connector_realsmith_WZ26z6PJMk) {
    /*bef_stmt:17178*/
if (Tag1_realsmith_WZ26z6PJMk(/*unsigned long:17188:17188:17178:e*/other_data_type_realsmith_WZ26z6PJMk) == 1) {
        /*bef_stmt:17173*/
return Tag2_realsmith_WZ26z6PJMk(/*unsigned long:17188:17188:17173:e*/connector_realsmith_WZ26z6PJMk) * 2;
/*aft_stmt:17173*/
    }
/*aft_stmt:17178*/
    return 0;
}



#include "stdlib.h"
int realsmith_6lIkvTkNDg(int sendflags_realsmith_6lIkvTkNDg, int sendcode_realsmith_6lIkvTkNDg, int *packet_realsmith_6lIkvTkNDg) {
    int status_realsmith_6lIkvTkNDg;
    unsigned long flags_realsmith_6lIkvTkNDg;
    flags_realsmith_6lIkvTkNDg = 1;
    if (flags_realsmith_6lIkvTkNDg) {
        flags_realsmith_6lIkvTkNDg = 0;
    }
    if (sendflags_realsmith_6lIkvTkNDg == 1 && sendcode_realsmith_6lIkvTkNDg == 1) {
        status_realsmith_6lIkvTkNDg = 0;
        if (packet_realsmith_6lIkvTkNDg != ((void*)0)) {
            *packet_realsmith_6lIkvTkNDg = 42;
        }
    } else {
        status_realsmith_6lIkvTkNDg = -1;
    }
    flags_realsmith_6lIkvTkNDg = 1;
    return status_realsmith_6lIkvTkNDg;
}
int realsmith_proxy_ZznnL7DDPa(int p_0_cxA614CRTn, int p_1_BK0ePYx4zN, int p_2_xJ8gI7V60Q) {
int proxy_qPlglcLFXw[18] = { 82, 86, 87, p_2_xJ8gI7V60Q, 82, p_2_xJ8gI7V60Q, 49, 90, 12, 99, 57, 65, p_2_xJ8gI7V60Q, 19, 68, p_2_xJ8gI7V60Q, p_2_xJ8gI7V60Q, 79 };
int proxy_ret_hu6PVcCHQP = realsmith_6lIkvTkNDg(p_0_cxA614CRTn, p_1_BK0ePYx4zN, proxy_qPlglcLFXw);
return proxy_ret_hu6PVcCHQP;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_K83ZdwAyZV(x) (x)
#include "stdlib.h"
struct spi_device_xrmdzl {
    int dev_realsmith_K83ZdwAyZV;
};
struct olpc_xo175_ec_xrmdzl {
    int gpio_cmd_realsmith_K83ZdwAyZV;
    struct spi_device_xrmdzl* spi_realsmith_K83ZdwAyZV;
    int cmd_state_realsmith_K83ZdwAyZV;
    int cmd_done_realsmith_K83ZdwAyZV;
    int logbuf_len_realsmith_K83ZdwAyZV;
    char* tx_buf_realsmith_K83ZdwAyZV;
    char* rx_buf_realsmith_K83ZdwAyZV;
};
int realsmith_K83ZdwAyZV(int spi_dev_id_realsmith_K83ZdwAyZV) {
    struct spi_device_xrmdzl spi_realsmith_K83ZdwAyZV;
    /*bef_stmt:17277*/
spi_realsmith_K83ZdwAyZV.dev_realsmith_K83ZdwAyZV = Tag1_realsmith_K83ZdwAyZV(/*int:17920:17920:17277:e*/spi_dev_id_realsmith_K83ZdwAyZV);
/*aft_stmt:17277*/
    struct olpc_xo175_ec_xrmdzl *priv_realsmith_K83ZdwAyZV;
    priv_realsmith_K83ZdwAyZV = (malloc(sizeof(*priv_realsmith_K83ZdwAyZV)));
    if (!priv_realsmith_K83ZdwAyZV)
        return -1;
    priv_realsmith_K83ZdwAyZV->gpio_cmd_realsmith_K83ZdwAyZV = 0;
    priv_realsmith_K83ZdwAyZV->spi_realsmith_K83ZdwAyZV = &spi_realsmith_K83ZdwAyZV;
    priv_realsmith_K83ZdwAyZV->cmd_state_realsmith_K83ZdwAyZV = 0;
    priv_realsmith_K83ZdwAyZV->cmd_done_realsmith_K83ZdwAyZV = 0;
    priv_realsmith_K83ZdwAyZV->logbuf_len_realsmith_K83ZdwAyZV = 0;
    priv_realsmith_K83ZdwAyZV->tx_buf_realsmith_K83ZdwAyZV = (malloc(256));
    priv_realsmith_K83ZdwAyZV->rx_buf_realsmith_K83ZdwAyZV = (malloc(256));
    if (!priv_realsmith_K83ZdwAyZV->tx_buf_realsmith_K83ZdwAyZV || !priv_realsmith_K83ZdwAyZV->rx_buf_realsmith_K83ZdwAyZV) {
        (free(priv_realsmith_K83ZdwAyZV->tx_buf_realsmith_K83ZdwAyZV));
        (free(priv_realsmith_K83ZdwAyZV->rx_buf_realsmith_K83ZdwAyZV));
        (free(priv_realsmith_K83ZdwAyZV));
        return -1;
    }
    priv_realsmith_K83ZdwAyZV->rx_buf_realsmith_K83ZdwAyZV[0] = 0;
    (free(priv_realsmith_K83ZdwAyZV->tx_buf_realsmith_K83ZdwAyZV));
    (free(priv_realsmith_K83ZdwAyZV->rx_buf_realsmith_K83ZdwAyZV));
    (free(priv_realsmith_K83ZdwAyZV));
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_58QlrOPD8w(x) (x)
#define Tag2_realsmith_58QlrOPD8w(x) (x)
#include "stdint.h"
int realsmith_58QlrOPD8w(unsigned int table_realsmith_58QlrOPD8w) {
    unsigned int skb_realsmith_58QlrOPD8w = 0;
    /*bef_stmt:2017*/
if (Tag1_realsmith_58QlrOPD8w(/*unsigned int:2042:2042:2017:e*/skb_realsmith_58QlrOPD8w) == 0)
        return -1;
/*aft_stmt:2017*/
    /*bef_stmt:2032*/
skb_realsmith_58QlrOPD8w = Tag2_realsmith_58QlrOPD8w(/*unsigned int:2042:2042:2032:e*/table_realsmith_58QlrOPD8w);
/*aft_stmt:2032*/
    return 0;
}



#include "stddef.h"
int realsmith_Ykw5P5fRKt(int vcpu_bo_realsmith_Ykw5P5fRKt, int handles_realsmith_Ykw5P5fRKt[16], int idle_work_realsmith_Ykw5P5fRKt) {
    int i_realsmith_Ykw5P5fRKt;
    idle_work_realsmith_Ykw5P5fRKt = 0;
    if (vcpu_bo_realsmith_Ykw5P5fRKt == 0)
        return 0;
    for (i_realsmith_Ykw5P5fRKt = 0; i_realsmith_Ykw5P5fRKt < 16; ++i_realsmith_Ykw5P5fRKt)
        if (handles_realsmith_Ykw5P5fRKt[i_realsmith_Ykw5P5fRKt] > 0)
            break;
    if (i_realsmith_Ykw5P5fRKt == 16)
        return 0;
    return -22;
}
int realsmith_proxy_TZBsbXd0jf(int p_0_5ihRRN9Ru6, int p_1_jxicGEgRFM, int p_2_v66PuWZ5a1) {
int proxy_lkJDrxXxrV[14] = { 85, 5, 6, p_1_jxicGEgRFM, 26, p_1_jxicGEgRFM, p_1_jxicGEgRFM, p_1_jxicGEgRFM, 100, p_1_jxicGEgRFM, p_1_jxicGEgRFM, p_1_jxicGEgRFM, p_1_jxicGEgRFM, p_1_jxicGEgRFM };
int proxy_ret_NZeaACqXEN = realsmith_Ykw5P5fRKt(p_0_5ihRRN9Ru6, proxy_lkJDrxXxrV, p_2_v66PuWZ5a1);
return proxy_ret_NZeaACqXEN;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_xM4XUBA1jZ(x) (x)
#define Tag2_realsmith_xM4XUBA1jZ(x) (x)
#define Tag3_realsmith_xM4XUBA1jZ(x) (x)
#include "stdint.h"
int realsmith_xM4XUBA1jZ(int ddp_rdmap_ctrl_realsmith_xM4XUBA1jZ) {
    int RDMAP_MASK_VERSION_realsmith_xM4XUBA1jZ = 0x3F;
    /*bef_stmt:2021*/
/*bef_stmt:2021*/
int ver_realsmith_xM4XUBA1jZ = Tag1_realsmith_xM4XUBA1jZ(/*int:2048:2048:2021:e*/ddp_rdmap_ctrl_realsmith_xM4XUBA1jZ) & /*TAG2:STA*/((int)(realsmith_proxy_066QSvCK3n((unsigned long)(RDMAP_MASK_VERSION_realsmith_xM4XUBA1jZ)+(-65), (unsigned long)(RDMAP_MASK_VERSION_realsmith_xM4XUBA1jZ)+(-62), (unsigned int)(RDMAP_MASK_VERSION_realsmith_xM4XUBA1jZ)+(-59))+(int)(RDMAP_MASK_VERSION_realsmith_xM4XUBA1jZ)-(63))+RDMAP_MASK_VERSION_realsmith_xM4XUBA1jZ)/*TAG2:END:RDMAP_MASK_VERSION_realsmith_xM4XUBA1jZ*/;
/*aft_stmt:2021*/
/*aft_stmt:2021*/
    /*bef_stmt:2043*/
return (Tag3_realsmith_xM4XUBA1jZ(/*int:2048:2048:2043:e*/ver_realsmith_xM4XUBA1jZ) >> 6);
/*aft_stmt:2043*/
}



#include "stdlib.h"
int realsmith_C4gTPxLklF(int is_cn6xxx_realsmith_C4gTPxLklF, int *cmd_realsmith_C4gTPxLklF, int *setup_realsmith_C4gTPxLklF, unsigned int tag_realsmith_C4gTPxLklF) {
    if (is_cn6xxx_realsmith_C4gTPxLklF) {
        return (tag_realsmith_C4gTPxLklF + *cmd_realsmith_C4gTPxLklF + *setup_realsmith_C4gTPxLklF) % 256;
    } else {
        return (tag_realsmith_C4gTPxLklF * *cmd_realsmith_C4gTPxLklF * *setup_realsmith_C4gTPxLklF) % 256;
    }
}
int realsmith_proxy_zGPgBDrOlX(int p_0_K0lctqt7g0, int p_1_h0KGA7sJbb, int p_2_mjtNGxwoFw, unsigned int p_3_fa2xQiAom2) {
int proxy_yj0iwFc55N[18] = { p_1_h0KGA7sJbb, p_1_h0KGA7sJbb, 41, p_1_h0KGA7sJbb, p_1_h0KGA7sJbb, 14, 40, 40, p_1_h0KGA7sJbb, p_1_h0KGA7sJbb, 67, 26, p_1_h0KGA7sJbb, 95, p_1_h0KGA7sJbb, 78, 94, 41 };
int proxy_9BZtFpcJRX[10] = { 99, 7, p_2_mjtNGxwoFw, p_2_mjtNGxwoFw, 77, 19, 29, 38, 6, 24 };
int proxy_ret_pM459pr8og = realsmith_C4gTPxLklF(p_0_K0lctqt7g0, proxy_yj0iwFc55N, proxy_9BZtFpcJRX, p_3_fa2xQiAom2);
return proxy_ret_pM459pr8og;
}


#include "stdlib.h"
int realsmith_1ciKugJXFk(int h_taps_realsmith_1ciKugJXFk, int v_taps_realsmith_1ciKugJXFk, int horz_ratio_realsmith_1ciKugJXFk, int vert_ratio_realsmith_1ciKugJXFk, int *h_int_scale_ratio_realsmith_1ciKugJXFk, int *v_int_scale_ratio_realsmith_1ciKugJXFk, int *h_init_integer_realsmith_1ciKugJXFk, int *h_init_fraction_realsmith_1ciKugJXFk, int *v_init_integer_realsmith_1ciKugJXFk, int *v_init_fraction_realsmith_1ciKugJXFk) {
    int h_init_realsmith_1ciKugJXFk, v_init_realsmith_1ciKugJXFk;
    *h_int_scale_ratio_realsmith_1ciKugJXFk = (horz_ratio_realsmith_1ciKugJXFk << 5);
    *v_int_scale_ratio_realsmith_1ciKugJXFk = (vert_ratio_realsmith_1ciKugJXFk << 5);
    h_init_realsmith_1ciKugJXFk = (horz_ratio_realsmith_1ciKugJXFk + (h_taps_realsmith_1ciKugJXFk + 1)) / 2;
    *h_init_integer_realsmith_1ciKugJXFk = h_init_realsmith_1ciKugJXFk / (1 << 5);
    *h_init_fraction_realsmith_1ciKugJXFk = (h_init_realsmith_1ciKugJXFk % (1 << 5)) << 5;
    v_init_realsmith_1ciKugJXFk = (vert_ratio_realsmith_1ciKugJXFk + (v_taps_realsmith_1ciKugJXFk + 1)) / 2;
    *v_init_integer_realsmith_1ciKugJXFk = v_init_realsmith_1ciKugJXFk / (1 << 5);
    *v_init_fraction_realsmith_1ciKugJXFk = (v_init_realsmith_1ciKugJXFk % (1 << 5)) << 5;
    return 0;
}
int realsmith_proxy_NxDchHExAy(int p_0_LtuiZbvuAS, int p_1_NLjxgrGRyU, int p_2_iqZBW0tIcd, int p_3_6iADk4WhiI, int p_4_sBYy2KJ72R, int p_5_o50iPn6KSp, int p_6_iefE5P1Ygp, int p_7_53cKMNBXfl, int p_8_5QNgVFtn9t, int p_9_p6C8qR3Hzx) {
int proxy_ZBRhiqqBkD[20] = { p_4_sBYy2KJ72R, 99, p_4_sBYy2KJ72R, 72, 24, p_4_sBYy2KJ72R, p_4_sBYy2KJ72R, 73, p_4_sBYy2KJ72R, 70, p_4_sBYy2KJ72R, 72, 5, 36, p_4_sBYy2KJ72R, p_4_sBYy2KJ72R, 8, 92, p_4_sBYy2KJ72R, 14 };
int proxy_sqXrLtM0Nf[16] = { 91, p_5_o50iPn6KSp, 56, 65, 89, p_5_o50iPn6KSp, 62, p_5_o50iPn6KSp, 85, 25, 7, 91, 65, 56, 75, 39 };
int proxy_HrrPV01hXZ[13] = { p_6_iefE5P1Ygp, 58, p_6_iefE5P1Ygp, p_6_iefE5P1Ygp, p_6_iefE5P1Ygp, 82, p_6_iefE5P1Ygp, 53, 77, p_6_iefE5P1Ygp, p_6_iefE5P1Ygp, p_6_iefE5P1Ygp, p_6_iefE5P1Ygp };
int proxy_ret_voYSI502qp = realsmith_1ciKugJXFk(p_0_LtuiZbvuAS, p_1_NLjxgrGRyU, p_2_iqZBW0tIcd, p_3_6iADk4WhiI, proxy_ZBRhiqqBkD, proxy_sqXrLtM0Nf, proxy_HrrPV01hXZ, &(p_7_53cKMNBXfl), &(p_8_5QNgVFtn9t), &(p_9_p6C8qR3Hzx));
return proxy_ret_voYSI502qp;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_HTA8lYR5wJ(x) (x)
#define Tag2_realsmith_HTA8lYR5wJ(x) (x)
#include "stdint.h"
int realsmith_HTA8lYR5wJ(int bitrate_mode_input_realsmith_HTA8lYR5wJ) {
    unsigned int bitrate_mode_realsmith_HTA8lYR5wJ;
    /*bef_stmt:1990*/
switch (Tag1_realsmith_HTA8lYR5wJ(/*int:2074:2074:1990:e*/bitrate_mode_input_realsmith_HTA8lYR5wJ)) {
    default:
    case 128:
        bitrate_mode_realsmith_HTA8lYR5wJ = 1;
        break;
    case 129:
        bitrate_mode_realsmith_HTA8lYR5wJ = 0;
        break;
    }
/*aft_stmt:1990*/
    /*bef_stmt:2072*/
return Tag2_realsmith_HTA8lYR5wJ(/*unsigned int:2074:2074:2072:e*/bitrate_mode_realsmith_HTA8lYR5wJ);
/*aft_stmt:2072*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Jr4HJ6ojUS(x) (x)
#include "stdlib.h"
struct kprobe_vhFxxe {
    int dummy_realsmith_Jr4HJ6ojUS;
};
int realsmith_Jr4HJ6ojUS(int p_realsmith_Jr4HJ6ojUS) {
    struct kprobe_vhFxxe *kprobes_realsmith_Jr4HJ6ojUS = (struct kprobe_vhFxxe *)(malloc(sizeof(struct kprobe_vhFxxe)));
    if (kprobes_realsmith_Jr4HJ6ojUS == ((void*)0)) return -1;
    /*bef_stmt:17272*/
kprobes_realsmith_Jr4HJ6ojUS[0].dummy_realsmith_Jr4HJ6ojUS = Tag1_realsmith_Jr4HJ6ojUS(/*int:17317:17317:17272:e*/p_realsmith_Jr4HJ6ojUS);
/*aft_stmt:17272*/
    (free(kprobes_realsmith_Jr4HJ6ojUS));
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Hn81Jk8L3I(x) (x)
#include "stdlib.h"
int realsmith_Hn81Jk8L3I(int dispType_realsmith_Hn81Jk8L3I) {
    /*bef_stmt:17081*/
switch (/*TAG1:STA*/((int)(realsmith_proxy_4DwXm6GVaD((int)(dispType_realsmith_Hn81Jk8L3I)+(-66), (int)(dispType_realsmith_Hn81Jk8L3I)+(-71), (int)(dispType_realsmith_Hn81Jk8L3I)+(-71), (int)(dispType_realsmith_Hn81Jk8L3I)+(-71), (int)(dispType_realsmith_Hn81Jk8L3I)+(-72), (int)(dispType_realsmith_Hn81Jk8L3I)+(-70), (int)(dispType_realsmith_Hn81Jk8L3I)+(-73))+(int)(dispType_realsmith_Hn81Jk8L3I)-(71))+dispType_realsmith_Hn81Jk8L3I)/*TAG1:END:dispType_realsmith_Hn81Jk8L3I*/) {
    case 129:
        return 0;
    case 130:
        return 0;
    case 128:
        return 1;
    default:
        return -1;
    }
/*aft_stmt:17081*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_2Hhr5xOMDt(x) (x)
#define Tag2_realsmith_2Hhr5xOMDt(x) (x)
#define Tag3_realsmith_2Hhr5xOMDt(x) (x)
#include "stdint.h"
struct radeon_ring_XRPBNI {
    signed int last_activity_realsmith_2Hhr5xOMDt;
    signed int last_rptr_realsmith_2Hhr5xOMDt;
};
signed int realsmith_2Hhr5xOMDt(signed int rptr_realsmith_2Hhr5xOMDt, signed int jiffies_realsmith_2Hhr5xOMDt) {
    struct radeon_ring_XRPBNI ring_realsmith_2Hhr5xOMDt;
    /*bef_stmt:2081*/
ring_realsmith_2Hhr5xOMDt.last_rptr_realsmith_2Hhr5xOMDt = /*TAG1:STA*/((int)(realsmith_proxy_TZBsbXd0jf((int)(rptr_realsmith_2Hhr5xOMDt)+(-11), (int)(rptr_realsmith_2Hhr5xOMDt)+(-41), (int)(rptr_realsmith_2Hhr5xOMDt)+(13))+(int)(rptr_realsmith_2Hhr5xOMDt)-(10))+rptr_realsmith_2Hhr5xOMDt)/*TAG1:END:rptr_realsmith_2Hhr5xOMDt*/;
/*aft_stmt:2081*/
    /*bef_stmt:2114*/
ring_realsmith_2Hhr5xOMDt.last_activity_realsmith_2Hhr5xOMDt = Tag2_realsmith_2Hhr5xOMDt(/*int:2133:2133:2114:e*/jiffies_realsmith_2Hhr5xOMDt);
/*aft_stmt:2114*/
    /*bef_stmt:2131*/
return /*TAG3:STA*/((int)(realsmith_xM4XUBA1jZ((int)(ring_realsmith_2Hhr5xOMDt.last_activity_realsmith_2Hhr5xOMDt)+(91))+(int)(ring_realsmith_2Hhr5xOMDt.last_activity_realsmith_2Hhr5xOMDt)-(5))+ring_realsmith_2Hhr5xOMDt.last_activity_realsmith_2Hhr5xOMDt)/*TAG3:END:ring_realsmith_2Hhr5xOMDt.last_activity_realsmith_2Hhr5xOMDt*/;
/*aft_stmt:2131*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_0ANrTO3h5W(x) (x)
#define Tag2_realsmith_0ANrTO3h5W(x) (x)
#include "stdlib.h"
struct bttv_fh_sh0Tlp {
    unsigned int input_realsmith_0ANrTO3h5W;
};
int realsmith_0ANrTO3h5W(unsigned int input_realsmith_0ANrTO3h5W) {
    struct bttv_fh_sh0Tlp fh_realsmith_0ANrTO3h5W;
    /*bef_stmt:17159*/
fh_realsmith_0ANrTO3h5W.input_realsmith_0ANrTO3h5W = Tag1_realsmith_0ANrTO3h5W(/*unsigned int:17192:17192:17159:e*/input_realsmith_0ANrTO3h5W);
/*aft_stmt:17159*/
    /*bef_stmt:17190*/
return Tag2_realsmith_0ANrTO3h5W(/*unsigned int:17192:17192:17190:e*/fh_realsmith_0ANrTO3h5W.input_realsmith_0ANrTO3h5W);
/*aft_stmt:17190*/
}



#include "stdlib.h"
int realsmith_jR7cxZ51cH(int usb_err_realsmith_jR7cxZ51cH, const unsigned char *page_realsmith_jR7cxZ51cH, int len_realsmith_jR7cxZ51cH) {
    int index_realsmith_jR7cxZ51cH;
    int ret_realsmith_jR7cxZ51cH = 0;
    unsigned char usb_buf_realsmith_jR7cxZ51cH[1];
    if (usb_err_realsmith_jR7cxZ51cH < 0)
        return usb_err_realsmith_jR7cxZ51cH;
    for (index_realsmith_jR7cxZ51cH = 0; index_realsmith_jR7cxZ51cH < len_realsmith_jR7cxZ51cH; index_realsmith_jR7cxZ51cH++) {
        if (page_realsmith_jR7cxZ51cH[index_realsmith_jR7cxZ51cH] == 0xFF)
            continue;
        usb_buf_realsmith_jR7cxZ51cH[0] = page_realsmith_jR7cxZ51cH[index_realsmith_jR7cxZ51cH];
        ret_realsmith_jR7cxZ51cH = 0;
        if (ret_realsmith_jR7cxZ51cH < 0) {
            return ret_realsmith_jR7cxZ51cH;
        }
    }
    return 0;
}
int realsmith_proxy_BpuoJmJADC(int p_0_aIIaRcnKfD, unsigned char p_1_ZIkA4jgvCL, int p_2_EVa6TkhuF1) {
unsigned char proxy_PJGNOirIfk[19] = { p_1_ZIkA4jgvCL, p_1_ZIkA4jgvCL, p_1_ZIkA4jgvCL, 97, p_1_ZIkA4jgvCL, p_1_ZIkA4jgvCL, 86, p_1_ZIkA4jgvCL, p_1_ZIkA4jgvCL, 63, 100, 21, p_1_ZIkA4jgvCL, p_1_ZIkA4jgvCL, p_1_ZIkA4jgvCL, p_1_ZIkA4jgvCL, 8, p_1_ZIkA4jgvCL, p_1_ZIkA4jgvCL };
int proxy_ret_Ftf94Z9LIK = realsmith_jR7cxZ51cH(p_0_aIIaRcnKfD, proxy_PJGNOirIfk, p_2_EVa6TkhuF1);
return proxy_ret_Ftf94Z9LIK;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_9aOFZQrLGo(x) (x)
#define Tag2_realsmith_9aOFZQrLGo(x) (x)
#include "stdint.h"
int realsmith_9aOFZQrLGo(unsigned int rx_dma_desc_base_addrlsw_realsmith_9aOFZQrLGo, unsigned int descriptor_realsmith_9aOFZQrLGo) {
    /*bef_stmt:2006*/
unsigned int address_realsmith_9aOFZQrLGo = Tag1_realsmith_9aOFZQrLGo(/*unsigned int:2021:2021:2006:e*/descriptor_realsmith_9aOFZQrLGo);
/*aft_stmt:2006*/
    /*bef_stmt:2019*/
return Tag2_realsmith_9aOFZQrLGo(/*unsigned int:2021:2021:2019:e*/rx_dma_desc_base_addrlsw_realsmith_9aOFZQrLGo);
/*aft_stmt:2019*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_QL8qHWvpZF(x) (x)
#define Tag2_realsmith_QL8qHWvpZF(x) (x)
#define Tag3_realsmith_QL8qHWvpZF(x) (x)
#define Tag4_realsmith_QL8qHWvpZF(x) (x)
#define Tag5_realsmith_QL8qHWvpZF(x) (x)
#define Tag6_realsmith_QL8qHWvpZF(x) (x)
#include "stdlib.h"
typedef struct {
    int irq_realsmith_QL8qHWvpZF;
    int name_realsmith_QL8qHWvpZF;
    struct airo_info_M5IQtc *ml_priv_realsmith_QL8qHWvpZF;
} net_device_M5IQtc;
typedef struct {
    int flags_realsmith_QL8qHWvpZF;
    int airo_thread_task_realsmith_QL8qHWvpZF;
    int jobs_realsmith_QL8qHWvpZF;
    net_device_M5IQtc *wifidev_realsmith_QL8qHWvpZF;
} airo_info_M5IQtc;
int realsmith_QL8qHWvpZF(int dev_irq_realsmith_QL8qHWvpZF, int dev_name_realsmith_QL8qHWvpZF, int ai_flags_realsmith_QL8qHWvpZF, int ai_jobs_realsmith_QL8qHWvpZF, int ai_wifidev_name_realsmith_QL8qHWvpZF) {
    airo_info_M5IQtc ai_realsmith_QL8qHWvpZF;
    /*bef_stmt:17441*/
ai_realsmith_QL8qHWvpZF.flags_realsmith_QL8qHWvpZF = /*TAG1:STA*/((int)(realsmith_BJC93hreWi((int)(ai_flags_realsmith_QL8qHWvpZF)+(-3), (int)(ai_flags_realsmith_QL8qHWvpZF)+(12))+(int)(ai_flags_realsmith_QL8qHWvpZF)-(63))+ai_flags_realsmith_QL8qHWvpZF)/*TAG1:END:ai_flags_realsmith_QL8qHWvpZF*/;
/*aft_stmt:17441*/
    /*bef_stmt:17476*/
ai_realsmith_QL8qHWvpZF.jobs_realsmith_QL8qHWvpZF = /*TAG2:STA*/((int)(realsmith_proxy_iAE1zPdx9n((int)(ai_jobs_realsmith_QL8qHWvpZF)+(-8), (int)(ai_jobs_realsmith_QL8qHWvpZF)+(-23))+(int)(ai_jobs_realsmith_QL8qHWvpZF)-(22))+ai_jobs_realsmith_QL8qHWvpZF)/*TAG2:END:ai_jobs_realsmith_QL8qHWvpZF*/;
/*aft_stmt:17476*/
    ai_realsmith_QL8qHWvpZF.wifidev_realsmith_QL8qHWvpZF = ((void*)0);
    int rc_realsmith_QL8qHWvpZF = 0;
    /*bef_stmt:17566*/
if (Tag3_realsmith_QL8qHWvpZF(/*int:17770:17770:17566:e*/ai_realsmith_QL8qHWvpZF.flags_realsmith_QL8qHWvpZF) & 2)
        return -5;
/*aft_stmt:17566*/
    /*bef_stmt:17593*/
if (Tag4_realsmith_QL8qHWvpZF(/*int:17770:17770:17593:e*/ai_realsmith_QL8qHWvpZF.flags_realsmith_QL8qHWvpZF) & 1) {
    }
/*aft_stmt:17593*/
    if (ai_realsmith_QL8qHWvpZF.wifidev_realsmith_QL8qHWvpZF != ((void*)0)) {
        ai_realsmith_QL8qHWvpZF.jobs_realsmith_QL8qHWvpZF &= ~4;
        ai_realsmith_QL8qHWvpZF.airo_thread_task_realsmith_QL8qHWvpZF = 1;
        rc_realsmith_QL8qHWvpZF = 0;
        /*bef_stmt:17726*/
if (Tag5_realsmith_QL8qHWvpZF(/*int:17770:17770:17726:e*/rc_realsmith_QL8qHWvpZF)) {
            ai_realsmith_QL8qHWvpZF.jobs_realsmith_QL8qHWvpZF |= 4;
            /*bef_stmt:17720*/
return Tag6_realsmith_QL8qHWvpZF(/*int:17770:17770:17720:e*/rc_realsmith_QL8qHWvpZF);
/*aft_stmt:17720*/
        }
/*aft_stmt:17726*/
        ai_realsmith_QL8qHWvpZF.flags_realsmith_QL8qHWvpZF &= ~3;
    }
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_PlUpbyqkNS(x) (x)
#define Tag2_realsmith_proxy_PlUpbyqkNS(x) (x)
#define Tag3_realsmith_proxy_PlUpbyqkNS(x) (x)
#define Tag4_realsmith_proxy_PlUpbyqkNS(x) (x)
#define Tag5_realsmith_proxy_PlUpbyqkNS(x) (x)
#define Tag6_realsmith_proxy_PlUpbyqkNS(x) (x)
#define Tag7_realsmith_proxy_PlUpbyqkNS(x) (x)
#define Tag8_realsmith_proxy_PlUpbyqkNS(x) (x)
#define Tag9_realsmith_proxy_PlUpbyqkNS(x) (x)
#define Tag10_realsmith_proxy_PlUpbyqkNS(x) (x)
#define Tag11_realsmith_proxy_PlUpbyqkNS(x) (x)
#define Tag12_realsmith_proxy_PlUpbyqkNS(x) (x)
#define Tag13_realsmith_proxy_PlUpbyqkNS(x) (x)
#define Tag14_realsmith_proxy_PlUpbyqkNS(x) (x)
#define Tag15_realsmith_proxy_PlUpbyqkNS(x) (x)
#define Tag16_realsmith_proxy_PlUpbyqkNS(x) (x)
#include "stdlib.h"
int realsmith_M4nriINPcR(int flags_realsmith_M4nriINPcR, int n_mac_vlan_filters_realsmith_M4nriINPcR, int n_multicast_realsmith_M4nriINPcR, int rx_mask_realsmith_M4nriINPcR, int *filters_realsmith_M4nriINPcR, int *multicast_realsmith_M4nriINPcR) {
    int i_realsmith_M4nriINPcR;
    int result_realsmith_M4nriINPcR = 0;
    /*bef_stmt:17308*/
/*bef_stmt:17308*/
/*bef_stmt:17308*/
/*bef_stmt:17308*/
if (/*TAG1:STA*/((int)(realsmith_iysfaYLTYN((int)(flags_realsmith_M4nriINPcR)+(17), (int)(flags_realsmith_M4nriINPcR)+(-41))+(int)(flags_realsmith_M4nriINPcR)-(119))+flags_realsmith_M4nriINPcR)/*TAG1:END:flags_realsmith_M4nriINPcR*/ & 1)
        for (i_realsmith_M4nriINPcR = 0; /*TAG2:STA*/((int)(realsmith_proxy_hvxiLny8je((int)(i_realsmith_M4nriINPcR)+(-1688949994), (int)(i_realsmith_M4nriINPcR)+(-1688949987), (int)(i_realsmith_M4nriINPcR)+(-1688950059), (unsigned char)(i_realsmith_M4nriINPcR)+(-110))+(int)(i_realsmith_M4nriINPcR)-(1688950082))+i_realsmith_M4nriINPcR)/*TAG2:END:i_realsmith_M4nriINPcR*/ < /*TAG3:STA*/((int)(realsmith_FVYWKgAQIF((int)(n_mac_vlan_filters_realsmith_M4nriINPcR)+(42))+(int)(n_mac_vlan_filters_realsmith_M4nriINPcR)-(3))+n_mac_vlan_filters_realsmith_M4nriINPcR)/*TAG3:END:n_mac_vlan_filters_realsmith_M4nriINPcR*/; i_realsmith_M4nriINPcR++)
            result_realsmith_M4nriINPcR += filters_realsmith_M4nriINPcR[/*TAG4:STA*/((int)(realsmith_CF51cY7c77((int)(i_realsmith_M4nriINPcR)+(-1688950001), (int)(i_realsmith_M4nriINPcR)+(-1688950056), (unsigned int)(i_realsmith_M4nriINPcR)+(-1688950071), (unsigned char)(i_realsmith_M4nriINPcR)+(-16))+(int)(i_realsmith_M4nriINPcR)-(1688950143))+i_realsmith_M4nriINPcR)/*TAG4:END:i_realsmith_M4nriINPcR*/];
/*aft_stmt:17308*/
/*aft_stmt:17308*/
/*aft_stmt:17308*/
/*aft_stmt:17308*/
    /*bef_stmt:17344*/
/*bef_stmt:17344*/
if (/*TAG5:STA*/((int)(realsmith_B79y3vQji7((int)(flags_realsmith_M4nriINPcR)+(-35))+(int)(flags_realsmith_M4nriINPcR)-(336))+flags_realsmith_M4nriINPcR)/*TAG5:END:flags_realsmith_M4nriINPcR*/ & 4)
        result_realsmith_M4nriINPcR += Tag6_realsmith_proxy_PlUpbyqkNS(/*int:17451:17451:17344:e*/rx_mask_realsmith_M4nriINPcR);
/*aft_stmt:17344*/
/*aft_stmt:17344*/
    /*bef_stmt:17438*/
/*bef_stmt:17438*/
/*bef_stmt:17438*/
/*bef_stmt:17438*/
if (/*TAG7:STA*/((int)(realsmith_LNzpSPGkW5((int)(flags_realsmith_M4nriINPcR)+(-34), (int)(flags_realsmith_M4nriINPcR)+(16), (int)(flags_realsmith_M4nriINPcR)+(19))+(int)(flags_realsmith_M4nriINPcR)-(80))+flags_realsmith_M4nriINPcR)/*TAG7:END:flags_realsmith_M4nriINPcR*/ & 2)
        for (i_realsmith_M4nriINPcR = 0; Tag8_realsmith_proxy_PlUpbyqkNS(/*int:17451:17451:17438:e*/i_realsmith_M4nriINPcR) < Tag9_realsmith_proxy_PlUpbyqkNS(/*int:17451:17451:17438:e*/n_multicast_realsmith_M4nriINPcR); i_realsmith_M4nriINPcR++)
            result_realsmith_M4nriINPcR += multicast_realsmith_M4nriINPcR[/*TAG10:STA*/((int)(realsmith_DnYfAwICrx((int)(i_realsmith_M4nriINPcR)+(-1688950012), (int)(i_realsmith_M4nriINPcR)+(-1688950082), (int)(i_realsmith_M4nriINPcR)+(-1688950000), (int)(i_realsmith_M4nriINPcR)+(-1688950050))+(int)(i_realsmith_M4nriINPcR)-(1688950082))+i_realsmith_M4nriINPcR)/*TAG10:END:i_realsmith_M4nriINPcR*/];
/*aft_stmt:17438*/
/*aft_stmt:17438*/
/*aft_stmt:17438*/
/*aft_stmt:17438*/
    /*bef_stmt:17449*/
return Tag11_realsmith_proxy_PlUpbyqkNS(/*int:17451:17451:17449:e*/result_realsmith_M4nriINPcR);
/*aft_stmt:17449*/
}
int realsmith_proxy_PlUpbyqkNS(int p_0_TC3QIHyVnW, int p_1_2OQ7vTWLXl, int p_2_TCQuS7jHja, int p_3_ZMv1h6hI9H, int p_4_l3U2GzOipr, int p_5_3D8ULEuHtm) {
/*bef_stmt:17692*/
/*bef_stmt:17692*/
/*bef_stmt:17692*/
/*bef_stmt:17692*/
int proxy_ret_ws8uqJpaQE = realsmith_M4nriINPcR(Tag12_realsmith_proxy_PlUpbyqkNS(/*int:17704:17704:17692:e*/p_0_TC3QIHyVnW), /*TAG13:STA*/((int)(realsmith_mGszSrPNbo((int)(p_1_2OQ7vTWLXl)+(41), (int)(p_1_2OQ7vTWLXl)+(65), (int)(p_1_2OQ7vTWLXl)+(15))+(int)(p_1_2OQ7vTWLXl)-(24))+p_1_2OQ7vTWLXl)/*TAG13:END:p_1_2OQ7vTWLXl*/, Tag14_realsmith_proxy_PlUpbyqkNS(/*int:17704:17704:17692:e*/p_2_TCQuS7jHja), Tag15_realsmith_proxy_PlUpbyqkNS(/*int:17704:17704:17692:e*/p_3_ZMv1h6hI9H), &(p_4_l3U2GzOipr), &(p_5_3D8ULEuHtm));
/*aft_stmt:17692*/
/*aft_stmt:17692*/
/*aft_stmt:17692*/
/*aft_stmt:17692*/
/*bef_stmt:17702*/
return /*TAG16:STA*/((int)(realsmith_TMHqeUmPCO((int)(proxy_ret_ws8uqJpaQE)+(22))+(int)(proxy_ret_ws8uqJpaQE)-(0))+proxy_ret_ws8uqJpaQE)/*TAG16:END:proxy_ret_ws8uqJpaQE*/;
/*aft_stmt:17702*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_pFB671HV8e(x) (x)
#define Tag2_realsmith_proxy_pFB671HV8e(x) (x)
#define Tag3_realsmith_proxy_pFB671HV8e(x) (x)
#define Tag4_realsmith_proxy_pFB671HV8e(x) (x)
#define Tag5_realsmith_proxy_pFB671HV8e(x) (x)
#include "stdlib.h"
#include "string.h"
int realsmith_fjai2nride(const char *optstr_realsmith_fjai2nride) {
    char *options_realsmith_fjai2nride;
    int baud_realsmith_fjai2nride = 9600;
    int port_realsmith_fjai2nride = 0;
    if (!optstr_realsmith_fjai2nride || (1) != 0)
        return -1;
    options_realsmith_fjai2nride = (char *)optstr_realsmith_fjai2nride + 20;
    if ((1) == 0) {
        port_realsmith_fjai2nride = (1);
    } else if ((1) == 0) {
        port_realsmith_fjai2nride = (1);
    } else {
        return -1;
    }
    /*bef_stmt:25210*/
if (options_realsmith_fjai2nride && Tag1_realsmith_proxy_pFB671HV8e(/*char:25245:25245:25210:e*/options_realsmith_fjai2nride[0]) == ',') {
        baud_realsmith_fjai2nride = (1);
    } else {
        /*bef_stmt:25203*/
baud_realsmith_fjai2nride = (Tag2_realsmith_proxy_pFB671HV8e(/*int:25245:25245:25203:e*/port_realsmith_fjai2nride) == 0x3f8) ? 115200 : 9600;
/*aft_stmt:25203*/
    }
/*aft_stmt:25210*/
    /*bef_stmt:25232*/
/*bef_stmt:25232*/
if (Tag3_realsmith_proxy_pFB671HV8e(/*int:25245:25245:25232:e*/port_realsmith_fjai2nride))
        return Tag4_realsmith_proxy_pFB671HV8e(/*int:25245:25245:25232:e*/port_realsmith_fjai2nride);
/*aft_stmt:25232*/
/*aft_stmt:25232*/
    return -1;
}
int realsmith_proxy_pFB671HV8e(char p_0_bJCamcgtof) {
int proxy_ret_ZAUoQp32YT = realsmith_fjai2nride(&(p_0_bJCamcgtof));
/*bef_stmt:25362*/
return /*TAG5:STA*/((int)(realsmith_VWC9hnluIa((int)(proxy_ret_ZAUoQp32YT)+(63))+(int)(proxy_ret_ZAUoQp32YT)-(-2))+proxy_ret_ZAUoQp32YT)/*TAG5:END:proxy_ret_ZAUoQp32YT*/;
/*aft_stmt:25362*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_G1uyJEyAW8(x) (x)
#define Tag2_realsmith_G1uyJEyAW8(x) (x)
#define Tag3_realsmith_G1uyJEyAW8(x) (x)
#define Tag4_realsmith_G1uyJEyAW8(x) (x)
#include "stdbool.h"
int realsmith_G1uyJEyAW8(int ar_flag_realsmith_G1uyJEyAW8, int vif_flags_realsmith_G1uyJEyAW8) {
    /*bef_stmt:644*/
_Bool wmi_ready_realsmith_G1uyJEyAW8 = (/*TAG1:STA*/((int)(realsmith_HzpxukHxk4((int)(ar_flag_realsmith_G1uyJEyAW8)+(11))+(int)(ar_flag_realsmith_G1uyJEyAW8)-(47))+ar_flag_realsmith_G1uyJEyAW8)/*TAG1:END:ar_flag_realsmith_G1uyJEyAW8*/ & (1 << 0)) != 0;
/*aft_stmt:644*/
    /*bef_stmt:704*/
_Bool wlan_enabled_realsmith_G1uyJEyAW8 = (/*TAG2:STA*/((int)(realsmith_txqYHNplsB((int)(vif_flags_realsmith_G1uyJEyAW8)+(33), (int)(vif_flags_realsmith_G1uyJEyAW8)+(21), (int)(vif_flags_realsmith_G1uyJEyAW8)+(-19), (int)(vif_flags_realsmith_G1uyJEyAW8)+(-4), (int)(vif_flags_realsmith_G1uyJEyAW8)+(-23), (int)(vif_flags_realsmith_G1uyJEyAW8)+(39))+(int)(vif_flags_realsmith_G1uyJEyAW8)-(56891))+vif_flags_realsmith_G1uyJEyAW8)/*TAG2:END:vif_flags_realsmith_G1uyJEyAW8*/ & (1 << 1)) != 0;
/*aft_stmt:704*/
    /*bef_stmt:726*/
if (!/*TAG3:STA*/((_Bool)(realsmith_K4ZvzvDHvV((int)(wmi_ready_realsmith_G1uyJEyAW8)+(55))+(int)(wmi_ready_realsmith_G1uyJEyAW8)-(1011))+wmi_ready_realsmith_G1uyJEyAW8)/*TAG3:END:wmi_ready_realsmith_G1uyJEyAW8*/) {
        return 0;
    }
/*aft_stmt:726*/
    /*bef_stmt:749*/
if (!/*TAG4:STA*/((_Bool)(realsmith_DbtvzeVWtm((int)(wlan_enabled_realsmith_G1uyJEyAW8)+(51), (int)(wlan_enabled_realsmith_G1uyJEyAW8)+(58))+(int)(wlan_enabled_realsmith_G1uyJEyAW8)-(0))+wlan_enabled_realsmith_G1uyJEyAW8)/*TAG4:END:wlan_enabled_realsmith_G1uyJEyAW8*/) {
        return 0;
    }
/*aft_stmt:749*/
    return 1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_eNlU5DicN5(x) (x)
#define Tag2_realsmith_eNlU5DicN5(x) (x)
#define Tag3_realsmith_eNlU5DicN5(x) (x)
#define Tag4_realsmith_eNlU5DicN5(x) (x)
#include "stdint.h"
unsigned int realsmith_eNlU5DicN5(int encoder_port_realsmith_eNlU5DicN5, int crtc_pipe_realsmith_eNlU5DicN5, unsigned int reg_value_realsmith_eNlU5DicN5) {
    /*bef_stmt:2044*/
if ((/*TAG1:STA*/((unsigned int)(realsmith_9aOFZQrLGo((unsigned int)(reg_value_realsmith_eNlU5DicN5)+(68), (unsigned int)(reg_value_realsmith_eNlU5DicN5)+(-10))+(int)(reg_value_realsmith_eNlU5DicN5)-(108))+reg_value_realsmith_eNlU5DicN5)/*TAG1:END:reg_value_realsmith_eNlU5DicN5*/ & 0x1) == 0)
        return 0;
/*aft_stmt:2044*/
    /*bef_stmt:2105*/
/*bef_stmt:2105*/
if ((Tag2_realsmith_eNlU5DicN5(/*unsigned int:2165:2165:2105:e*/reg_value_realsmith_eNlU5DicN5) & 0x2) != (Tag3_realsmith_eNlU5DicN5(/*int:2165:2165:2105:e*/encoder_port_realsmith_eNlU5DicN5) & 0x2))
        return 0;
/*aft_stmt:2105*/
/*aft_stmt:2105*/
    /*bef_stmt:2163*/
return Tag4_realsmith_eNlU5DicN5(/*unsigned int:2165:2165:2163:e*/reg_value_realsmith_eNlU5DicN5) & (0x4 |
                        0x8 |
                        0x10 |
                        0x20 |
                        0x40);
/*aft_stmt:2163*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_THYGq8CeR4(x) (x)
#define Tag2_realsmith_THYGq8CeR4(x) (x)
#define Tag3_realsmith_THYGq8CeR4(x) (x)
#define Tag4_realsmith_THYGq8CeR4(x) (x)
#define Tag5_realsmith_THYGq8CeR4(x) (x)
#define Tag6_realsmith_THYGq8CeR4(x) (x)
#define Tag7_realsmith_THYGq8CeR4(x) (x)
#define Tag8_realsmith_THYGq8CeR4(x) (x)
#include "stdlib.h"
int realsmith_THYGq8CeR4(int nalloc_realsmith_THYGq8CeR4, int len_realsmith_THYGq8CeR4, int dev_realsmith_THYGq8CeR4, int ret_realsmith_THYGq8CeR4) {
    struct {
        int nalloc_realsmith_THYGq8CeR4;
        int len_realsmith_THYGq8CeR4;
        int *body_realsmith_THYGq8CeR4;
    } card_realsmith_THYGq8CeR4;
    struct {
        int clk_lock_realsmith_THYGq8CeR4;
    } priv_realsmith_THYGq8CeR4;
    priv_realsmith_THYGq8CeR4.clk_lock_realsmith_THYGq8CeR4 = 0;
    /*bef_stmt:17348*/
if (/*TAG1:STA*/((int)(realsmith_proxy_NxDchHExAy((int)(nalloc_realsmith_THYGq8CeR4)+(15), (int)(nalloc_realsmith_THYGq8CeR4)+(33), (int)(nalloc_realsmith_THYGq8CeR4)+(96), (int)(nalloc_realsmith_THYGq8CeR4)+(7), (int)(nalloc_realsmith_THYGq8CeR4)+(-85), (int)(nalloc_realsmith_THYGq8CeR4)+(60), (int)(nalloc_realsmith_THYGq8CeR4)+(-43), (int)(nalloc_realsmith_THYGq8CeR4)+(-51), (int)(nalloc_realsmith_THYGq8CeR4)+(-97), (int)(nalloc_realsmith_THYGq8CeR4)+(-81))+(int)(nalloc_realsmith_THYGq8CeR4)-(0))+nalloc_realsmith_THYGq8CeR4)/*TAG1:END:nalloc_realsmith_THYGq8CeR4*/ <= 0) {
        return -12;
    }
/*aft_stmt:17348*/
    /*bef_stmt:17369*/
card_realsmith_THYGq8CeR4.nalloc_realsmith_THYGq8CeR4 = Tag2_realsmith_THYGq8CeR4(/*int:17635:17635:17369:e*/nalloc_realsmith_THYGq8CeR4);
/*aft_stmt:17369*/
    /*bef_stmt:17403*/
card_realsmith_THYGq8CeR4.len_realsmith_THYGq8CeR4 = Tag3_realsmith_THYGq8CeR4(/*int:17635:17635:17403:e*/len_realsmith_THYGq8CeR4);
/*aft_stmt:17403*/
    /*bef_stmt:17473*/
card_realsmith_THYGq8CeR4.body_realsmith_THYGq8CeR4 = (int *)(malloc(Tag4_realsmith_THYGq8CeR4(/*int:17635:17635:17473:e*/nalloc_realsmith_THYGq8CeR4) * sizeof(int)));
/*aft_stmt:17473*/
    if (!card_realsmith_THYGq8CeR4.body_realsmith_THYGq8CeR4) {
        return -12;
    }
    /*bef_stmt:17546*/
card_realsmith_THYGq8CeR4.body_realsmith_THYGq8CeR4[card_realsmith_THYGq8CeR4.len_realsmith_THYGq8CeR4++] = Tag5_realsmith_THYGq8CeR4(/*int:17635:17635:17546:e*/dev_realsmith_THYGq8CeR4);
/*aft_stmt:17546*/
    ret_realsmith_THYGq8CeR4 = 0;
    /*bef_stmt:17622*/
if (Tag6_realsmith_THYGq8CeR4(/*int:17635:17635:17622:e*/ret_realsmith_THYGq8CeR4)) {
        (free(card_realsmith_THYGq8CeR4.body_realsmith_THYGq8CeR4));
        /*bef_stmt:17616*/
return Tag7_realsmith_THYGq8CeR4(/*int:17635:17635:17616:e*/ret_realsmith_THYGq8CeR4);
/*aft_stmt:17616*/
    }
/*aft_stmt:17622*/
    /*bef_stmt:17633*/
return Tag8_realsmith_THYGq8CeR4(/*int:17635:17635:17633:e*/ret_realsmith_THYGq8CeR4);
/*aft_stmt:17633*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_7ZZNWyMdb6(x) (x)
#define Tag2_realsmith_7ZZNWyMdb6(x) (x)
#define Tag3_realsmith_7ZZNWyMdb6(x) (x)
#define Tag4_realsmith_7ZZNWyMdb6(x) (x)
#define Tag5_realsmith_7ZZNWyMdb6(x) (x)
#define Tag6_realsmith_7ZZNWyMdb6(x) (x)
#include "stdlib.h"
int realsmith_7ZZNWyMdb6(int type_realsmith_7ZZNWyMdb6, unsigned int base_realsmith_7ZZNWyMdb6, unsigned int offset_realsmith_7ZZNWyMdb6) {
    /*bef_stmt:17126*/
switch (/*TAG1:STA*/((int)(realsmith_0ANrTO3h5W((unsigned int)(type_realsmith_7ZZNWyMdb6)+(12))+(int)(type_realsmith_7ZZNWyMdb6)-(186))+type_realsmith_7ZZNWyMdb6)/*TAG1:END:type_realsmith_7ZZNWyMdb6*/) {
    /*bef_stmt:17138*/
/*bef_stmt:17138*/
case 131:
        return Tag2_realsmith_7ZZNWyMdb6(/*unsigned int:17288:17288:17138:e*/base_realsmith_7ZZNWyMdb6) + (Tag3_realsmith_7ZZNWyMdb6(/*unsigned int:17288:17288:17138:e*/offset_realsmith_7ZZNWyMdb6) * 3);
/*aft_stmt:17138*/
/*aft_stmt:17138*/
    /*bef_stmt:17188*/
/*bef_stmt:17188*/
case 132:
    case 129:
    case 128:
    case 130:
        return Tag4_realsmith_7ZZNWyMdb6(/*unsigned int:17288:17288:17188:e*/base_realsmith_7ZZNWyMdb6) + (Tag5_realsmith_7ZZNWyMdb6(/*unsigned int:17288:17288:17188:e*/offset_realsmith_7ZZNWyMdb6) * 2);
/*aft_stmt:17188*/
/*aft_stmt:17188*/
    /*bef_stmt:17279*/
default:
        return /*TAG6:STA*/((unsigned int)(realsmith_proxy_qOUQWVOrWT((int)(offset_realsmith_7ZZNWyMdb6)+(-77), (int)(offset_realsmith_7ZZNWyMdb6)+(-74), (int)(offset_realsmith_7ZZNWyMdb6)+(-79), (int)(offset_realsmith_7ZZNWyMdb6)+(-74))+(int)(offset_realsmith_7ZZNWyMdb6)-(85))+offset_realsmith_7ZZNWyMdb6)/*TAG6:END:offset_realsmith_7ZZNWyMdb6*/;
/*aft_stmt:17279*/
    }
/*aft_stmt:17126*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_MxfIh20IAP(x) (x)
#include "stdint.h"
int realsmith_MxfIh20IAP(int val_realsmith_MxfIh20IAP) {
    /*bef_stmt:2001*/
return ((/*TAG1:STA*/((int)(realsmith_proxy_zGPgBDrOlX((int)(val_realsmith_MxfIh20IAP)+(17), (int)(val_realsmith_MxfIh20IAP)+(-83), (int)(val_realsmith_MxfIh20IAP)+(28), (unsigned int)(val_realsmith_MxfIh20IAP)+(22))+(int)(val_realsmith_MxfIh20IAP)-(77))+val_realsmith_MxfIh20IAP)/*TAG1:END:val_realsmith_MxfIh20IAP*/) << 2) & 0xFFFFFFFF;
/*aft_stmt:2001*/
}



#include "stdlib.h"
int realsmith_oEsb3WHaB9(int path_length_realsmith_oEsb3WHaB9, const char *name_realsmith_oEsb3WHaB9, int name_length_realsmith_oEsb3WHaB9) {
    int total_length_realsmith_oEsb3WHaB9 = path_length_realsmith_oEsb3WHaB9 + name_length_realsmith_oEsb3WHaB9 + 1;
    char *file_realsmith_oEsb3WHaB9 = (char *)(malloc(total_length_realsmith_oEsb3WHaB9 * sizeof(char)));
    if (file_realsmith_oEsb3WHaB9 == ((void*)0)) return -1;
    for (int i_realsmith_oEsb3WHaB9 = 0; i_realsmith_oEsb3WHaB9 < path_length_realsmith_oEsb3WHaB9; i_realsmith_oEsb3WHaB9++) {
        file_realsmith_oEsb3WHaB9[i_realsmith_oEsb3WHaB9] = 'P';
    }
    file_realsmith_oEsb3WHaB9[path_length_realsmith_oEsb3WHaB9] = '/';
    for (int j_realsmith_oEsb3WHaB9 = 0; j_realsmith_oEsb3WHaB9 < name_length_realsmith_oEsb3WHaB9; j_realsmith_oEsb3WHaB9++) {
        file_realsmith_oEsb3WHaB9[path_length_realsmith_oEsb3WHaB9 + 1 + j_realsmith_oEsb3WHaB9] = name_realsmith_oEsb3WHaB9[j_realsmith_oEsb3WHaB9];
    }
    file_realsmith_oEsb3WHaB9[total_length_realsmith_oEsb3WHaB9 - 1] = '\0';
    int result_length_realsmith_oEsb3WHaB9 = total_length_realsmith_oEsb3WHaB9 - 1;
    (free(file_realsmith_oEsb3WHaB9));
    return result_length_realsmith_oEsb3WHaB9;
}
int realsmith_proxy_YT0b86b26L(int p_0_eubwKkbJC9, char p_1_UTTCEKmEtz, int p_2_gwz1JCqi9S) {
char proxy_uzJuu2o0GT[15] = { 83, p_1_UTTCEKmEtz, 55, 3, 74, 4, 23, 4, p_1_UTTCEKmEtz, p_1_UTTCEKmEtz, 92, p_1_UTTCEKmEtz, 4, p_1_UTTCEKmEtz, 31 };
int proxy_ret_xoUkDAp2el = realsmith_oEsb3WHaB9(p_0_eubwKkbJC9, proxy_uzJuu2o0GT, p_2_gwz1JCqi9S);
return proxy_ret_xoUkDAp2el;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ddpru7X1Pr(x) (x)
#define Tag2_realsmith_ddpru7X1Pr(x) (x)
#define Tag3_realsmith_ddpru7X1Pr(x) (x)
#define Tag4_realsmith_ddpru7X1Pr(x) (x)
#define Tag5_realsmith_ddpru7X1Pr(x) (x)
#include "stdint.h"
int realsmith_ddpru7X1Pr(unsigned int reg_realsmith_ddpru7X1Pr, int enable_realsmith_ddpru7X1Pr) {
    unsigned int val_realsmith_ddpru7X1Pr;
    /*bef_stmt:2013*/
val_realsmith_ddpru7X1Pr = /*TAG1:STA*/((unsigned int)(realsmith_proxy_94xYKGRjVY((int)(reg_realsmith_ddpru7X1Pr)+(-13), (char)(reg_realsmith_ddpru7X1Pr)+(-129))+(int)(reg_realsmith_ddpru7X1Pr)-(97))+reg_realsmith_ddpru7X1Pr)/*TAG1:END:reg_realsmith_ddpru7X1Pr*/;
/*aft_stmt:2013*/
    /*bef_stmt:2054*/
if (Tag2_realsmith_ddpru7X1Pr(/*unsigned int:2169:2169:2054:e*/val_realsmith_ddpru7X1Pr) & 0x4)
        val_realsmith_ddpru7X1Pr |= 0x2;
/*aft_stmt:2054*/
    /*bef_stmt:2142*/
if (Tag3_realsmith_ddpru7X1Pr(/*int:2169:2169:2142:e*/enable_realsmith_ddpru7X1Pr)) {
        val_realsmith_ddpru7X1Pr |= 0x8;
    } else {
        val_realsmith_ddpru7X1Pr |= 0x1;
        /*bef_stmt:2113*/
reg_realsmith_ddpru7X1Pr = Tag4_realsmith_ddpru7X1Pr(/*unsigned int:2169:2169:2113:e*/val_realsmith_ddpru7X1Pr);
/*aft_stmt:2113*/
        val_realsmith_ddpru7X1Pr &= ~0x8;
    }
/*aft_stmt:2142*/
    /*bef_stmt:2159*/
reg_realsmith_ddpru7X1Pr = Tag5_realsmith_ddpru7X1Pr(/*unsigned int:2169:2169:2159:e*/val_realsmith_ddpru7X1Pr);
/*aft_stmt:2159*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Mj31xGzMih(x) (x)
#define Tag2_realsmith_Mj31xGzMih(x) (x)
#define Tag3_realsmith_Mj31xGzMih(x) (x)
#define Tag4_realsmith_Mj31xGzMih(x) (x)
#define Tag5_realsmith_Mj31xGzMih(x) (x)
#define Tag6_realsmith_Mj31xGzMih(x) (x)
#include "stdlib.h"
int realsmith_Mj31xGzMih(int speed_realsmith_Mj31xGzMih, int duplex_realsmith_Mj31xGzMih, int autoneg_realsmith_Mj31xGzMih, int advertising_realsmith_Mj31xGzMih) {
    int result_realsmith_Mj31xGzMih;
    struct {
        int autoneg_realsmith_Mj31xGzMih;
        int duplex_realsmith_Mj31xGzMih;
        int speed_realsmith_Mj31xGzMih;
        int advertising_realsmith_Mj31xGzMih;
    } lp_realsmith_Mj31xGzMih;
    /*bef_stmt:17277*/
lp_realsmith_Mj31xGzMih.advertising_realsmith_Mj31xGzMih = /*TAG1:STA*/((int)(realsmith_3PubJdq2sA((int)(advertising_realsmith_Mj31xGzMih)+(61), (int)(advertising_realsmith_Mj31xGzMih)+(59), (int)(advertising_realsmith_Mj31xGzMih)+(-30))+(int)(advertising_realsmith_Mj31xGzMih)-(35))+advertising_realsmith_Mj31xGzMih)/*TAG1:END:advertising_realsmith_Mj31xGzMih*/;
/*aft_stmt:17277*/
    /*bef_stmt:17312*/
lp_realsmith_Mj31xGzMih.speed_realsmith_Mj31xGzMih = /*TAG2:STA*/((int)(realsmith_proxy_npPk5cf1Ks((int)(speed_realsmith_Mj31xGzMih)+(-11), (int)(speed_realsmith_Mj31xGzMih)+(-120))+(int)(speed_realsmith_Mj31xGzMih)-(82))+speed_realsmith_Mj31xGzMih)/*TAG2:END:speed_realsmith_Mj31xGzMih*/;
/*aft_stmt:17312*/
    /*bef_stmt:17333*/
lp_realsmith_Mj31xGzMih.duplex_realsmith_Mj31xGzMih = /*TAG3:STA*/((int)(realsmith_HNjzeQAUdr((int)(duplex_realsmith_Mj31xGzMih)+(1), (int)(duplex_realsmith_Mj31xGzMih)+(28), (int)(duplex_realsmith_Mj31xGzMih)+(-21), (int)(duplex_realsmith_Mj31xGzMih)+(7))+(int)(duplex_realsmith_Mj31xGzMih)-(23))+duplex_realsmith_Mj31xGzMih)/*TAG3:END:duplex_realsmith_Mj31xGzMih*/;
/*aft_stmt:17333*/
    /*bef_stmt:17354*/
lp_realsmith_Mj31xGzMih.autoneg_realsmith_Mj31xGzMih = /*TAG4:STA*/((int)(realsmith_wuRHG3CW8L((int)(autoneg_realsmith_Mj31xGzMih)+(-52))+(int)(autoneg_realsmith_Mj31xGzMih)-(141))+autoneg_realsmith_Mj31xGzMih)/*TAG4:END:autoneg_realsmith_Mj31xGzMih*/;
/*aft_stmt:17354*/
    /*bef_stmt:17404*/
result_realsmith_Mj31xGzMih = (/*TAG5:STA*/((int)(realsmith_proxy_kSkRyaYE18((int)(lp_realsmith_Mj31xGzMih.speed_realsmith_Mj31xGzMih)+(-26), (int)(lp_realsmith_Mj31xGzMih.speed_realsmith_Mj31xGzMih)+(-38))+(int)(lp_realsmith_Mj31xGzMih.speed_realsmith_Mj31xGzMih)-(82))+lp_realsmith_Mj31xGzMih.speed_realsmith_Mj31xGzMih)/*TAG5:END:lp_realsmith_Mj31xGzMih.speed_realsmith_Mj31xGzMih*/ > 0) ? 0 : -1;
/*aft_stmt:17404*/
    /*bef_stmt:17415*/
return /*TAG6:STA*/((int)(realsmith_h099QxhKek((int)(result_realsmith_Mj31xGzMih)+(89), (int)(result_realsmith_Mj31xGzMih)+(27), (unsigned long)(result_realsmith_Mj31xGzMih)+(79))+(int)(result_realsmith_Mj31xGzMih)-(89))+result_realsmith_Mj31xGzMih)/*TAG6:END:result_realsmith_Mj31xGzMih*/;
/*aft_stmt:17415*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_H516vmbKOb(x) (x)
#define Tag2_realsmith_H516vmbKOb(x) (x)
#define Tag3_realsmith_H516vmbKOb(x) (x)
#define Tag4_realsmith_H516vmbKOb(x) (x)
#define Tag5_realsmith_H516vmbKOb(x) (x)
#include "stdint.h"
int realsmith_H516vmbKOb(int me_realsmith_H516vmbKOb, int pipe_realsmith_H516vmbKOb, int queue_realsmith_H516vmbKOb, int vmid_realsmith_H516vmbKOb) {
    /*bef_stmt:2161*/
/*bef_stmt:2161*/
/*bef_stmt:2161*/
/*bef_stmt:2161*/
int srbm_gfx_cntl_realsmith_H516vmbKOb = (Tag1_realsmith_H516vmbKOb(/*int:2173:2173:2161:e*/pipe_realsmith_H516vmbKOb) & 0x3) |
                        ((Tag2_realsmith_H516vmbKOb(/*int:2173:2173:2161:e*/me_realsmith_H516vmbKOb) & 0x3) << 2) |
                        ((Tag3_realsmith_H516vmbKOb(/*int:2173:2173:2161:e*/vmid_realsmith_H516vmbKOb) & 0xf) << 4) |
                        ((Tag4_realsmith_H516vmbKOb(/*int:2173:2173:2161:e*/queue_realsmith_H516vmbKOb) & 0x7) << 8);
/*aft_stmt:2161*/
/*aft_stmt:2161*/
/*aft_stmt:2161*/
/*aft_stmt:2161*/
    /*bef_stmt:2171*/
return Tag5_realsmith_H516vmbKOb(/*int:2173:2173:2171:e*/srbm_gfx_cntl_realsmith_H516vmbKOb);
/*aft_stmt:2171*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag2_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag3_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag4_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag5_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag6_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag7_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag8_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag9_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag10_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag11_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag12_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag13_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag14_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag15_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag16_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag17_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag18_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag19_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag20_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag21_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag22_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag23_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag24_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag25_realsmith_Bn1xQ09zxZ(x) (x)
#define Tag26_realsmith_Bn1xQ09zxZ(x) (x)
#include "stdlib.h"
unsigned int realsmith_Bn1xQ09zxZ(int fifo_mask_realsmith_Bn1xQ09zxZ, unsigned int fifo_esize_realsmith_Bn1xQ09zxZ, unsigned int fifo_data_offset_realsmith_Bn1xQ09zxZ,
                       unsigned int sgl_offset_realsmith_Bn1xQ09zxZ, int nents_realsmith_Bn1xQ09zxZ, unsigned int len_realsmith_Bn1xQ09zxZ) {
    /*bef_stmt:17210*/
unsigned int size_realsmith_Bn1xQ09zxZ = Tag1_realsmith_Bn1xQ09zxZ(/*int:17634:17634:17210:e*/fifo_mask_realsmith_Bn1xQ09zxZ) + 1;
/*aft_stmt:17210*/
    /*bef_stmt:17236*/
unsigned int esize_realsmith_Bn1xQ09zxZ = Tag2_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17236:e*/fifo_esize_realsmith_Bn1xQ09zxZ);
/*aft_stmt:17236*/
    unsigned int l_realsmith_Bn1xQ09zxZ;
    unsigned int n_realsmith_Bn1xQ09zxZ;
    /*bef_stmt:17291*/
sgl_offset_realsmith_Bn1xQ09zxZ &= Tag3_realsmith_Bn1xQ09zxZ(/*int:17634:17634:17291:e*/fifo_mask_realsmith_Bn1xQ09zxZ);
/*aft_stmt:17291*/
    /*bef_stmt:17371*/
if (Tag4_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17371:e*/esize_realsmith_Bn1xQ09zxZ) != 1) {
        /*bef_stmt:17326*/
sgl_offset_realsmith_Bn1xQ09zxZ *= Tag5_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17326:e*/esize_realsmith_Bn1xQ09zxZ);
/*aft_stmt:17326*/
        /*bef_stmt:17343*/
size_realsmith_Bn1xQ09zxZ *= Tag6_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17343:e*/esize_realsmith_Bn1xQ09zxZ);
/*aft_stmt:17343*/
        /*bef_stmt:17360*/
len_realsmith_Bn1xQ09zxZ *= Tag7_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17360:e*/esize_realsmith_Bn1xQ09zxZ);
/*aft_stmt:17360*/
    }
/*aft_stmt:17371*/
    /*bef_stmt:17451*/
/*bef_stmt:17451*/
/*bef_stmt:17451*/
/*bef_stmt:17451*/
/*bef_stmt:17451*/
/*bef_stmt:17451*/
l_realsmith_Bn1xQ09zxZ = (Tag8_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17451:e*/len_realsmith_Bn1xQ09zxZ) < (Tag9_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17451:e*/size_realsmith_Bn1xQ09zxZ) - Tag10_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17451:e*/sgl_offset_realsmith_Bn1xQ09zxZ))) ? Tag11_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17451:e*/len_realsmith_Bn1xQ09zxZ) : (Tag12_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17451:e*/size_realsmith_Bn1xQ09zxZ) - Tag13_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17451:e*/sgl_offset_realsmith_Bn1xQ09zxZ));
/*aft_stmt:17451*/
/*aft_stmt:17451*/
/*aft_stmt:17451*/
/*aft_stmt:17451*/
/*aft_stmt:17451*/
/*aft_stmt:17451*/
    /*bef_stmt:17507*/
/*bef_stmt:17507*/
/*bef_stmt:17507*/
/*bef_stmt:17507*/
n_realsmith_Bn1xQ09zxZ = (Tag14_realsmith_Bn1xQ09zxZ(/*int:17634:17634:17507:e*/nents_realsmith_Bn1xQ09zxZ) < Tag15_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17507:e*/l_realsmith_Bn1xQ09zxZ)) ? Tag16_realsmith_Bn1xQ09zxZ(/*int:17634:17634:17507:e*/nents_realsmith_Bn1xQ09zxZ) : Tag17_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17507:e*/l_realsmith_Bn1xQ09zxZ);
/*aft_stmt:17507*/
/*aft_stmt:17507*/
/*aft_stmt:17507*/
/*aft_stmt:17507*/
    /*bef_stmt:17619*/
/*bef_stmt:17619*/
/*bef_stmt:17619*/
/*bef_stmt:17619*/
/*bef_stmt:17619*/
/*bef_stmt:17619*/
/*bef_stmt:17619*/
/*bef_stmt:17619*/
n_realsmith_Bn1xQ09zxZ += (Tag18_realsmith_Bn1xQ09zxZ(/*int:17634:17634:17619:e*/nents_realsmith_Bn1xQ09zxZ) - Tag19_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17619:e*/n_realsmith_Bn1xQ09zxZ) < (Tag20_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17619:e*/len_realsmith_Bn1xQ09zxZ) - Tag21_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17619:e*/l_realsmith_Bn1xQ09zxZ))) ? (Tag22_realsmith_Bn1xQ09zxZ(/*int:17634:17634:17619:e*/nents_realsmith_Bn1xQ09zxZ) - Tag23_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17619:e*/n_realsmith_Bn1xQ09zxZ)) : (Tag24_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17619:e*/len_realsmith_Bn1xQ09zxZ) - Tag25_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17619:e*/l_realsmith_Bn1xQ09zxZ));
/*aft_stmt:17619*/
/*aft_stmt:17619*/
/*aft_stmt:17619*/
/*aft_stmt:17619*/
/*aft_stmt:17619*/
/*aft_stmt:17619*/
/*aft_stmt:17619*/
/*aft_stmt:17619*/
    /*bef_stmt:17632*/
return Tag26_realsmith_Bn1xQ09zxZ(/*unsigned int:17634:17634:17632:e*/n_realsmith_Bn1xQ09zxZ);
/*aft_stmt:17632*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_MtZTMl1Db3(x) (x)
#define Tag2_realsmith_MtZTMl1Db3(x) (x)
#define Tag3_realsmith_MtZTMl1Db3(x) (x)
#define Tag4_realsmith_MtZTMl1Db3(x) (x)
#define Tag5_realsmith_MtZTMl1Db3(x) (x)
#define Tag6_realsmith_MtZTMl1Db3(x) (x)
#define Tag7_realsmith_MtZTMl1Db3(x) (x)
#define Tag8_realsmith_MtZTMl1Db3(x) (x)
#define Tag9_realsmith_MtZTMl1Db3(x) (x)
#define Tag10_realsmith_MtZTMl1Db3(x) (x)
#define Tag11_realsmith_MtZTMl1Db3(x) (x)
#define Tag12_realsmith_MtZTMl1Db3(x) (x)
#define Tag13_realsmith_MtZTMl1Db3(x) (x)
#define Tag14_realsmith_MtZTMl1Db3(x) (x)
#define Tag15_realsmith_MtZTMl1Db3(x) (x)
#define Tag16_realsmith_MtZTMl1Db3(x) (x)
#define Tag17_realsmith_MtZTMl1Db3(x) (x)
#define Tag18_realsmith_MtZTMl1Db3(x) (x)
#define Tag19_realsmith_MtZTMl1Db3(x) (x)
#include "stdint.h"
#include "stdlib.h"
int realsmith_MtZTMl1Db3(int bs_nexttbtt_realsmith_MtZTMl1Db3, int bs_intval_realsmith_MtZTMl1Db3, int bs_sleepduration_realsmith_MtZTMl1Db3,
                                    int bs_dtimperiod_realsmith_MtZTMl1Db3, int bs_nextdtim_realsmith_MtZTMl1Db3, int bs_bmissthreshold_realsmith_MtZTMl1Db3,
                                    int hw_caps_realsmith_MtZTMl1Db3) {
    unsigned int nextTbtt_realsmith_MtZTMl1Db3, beaconintval_realsmith_MtZTMl1Db3, dtimperiod_realsmith_MtZTMl1Db3, beacontimeout_realsmith_MtZTMl1Db3;
    /*bef_stmt:17671*/
beaconintval_realsmith_MtZTMl1Db3 = Tag1_realsmith_MtZTMl1Db3(/*int:18152:18152:17671:e*/bs_intval_realsmith_MtZTMl1Db3);
/*aft_stmt:17671*/
    /*bef_stmt:17714*/
/*bef_stmt:17714*/
/*bef_stmt:17714*/
if (Tag2_realsmith_MtZTMl1Db3(/*int:18152:18152:17714:e*/bs_sleepduration_realsmith_MtZTMl1Db3) > Tag3_realsmith_MtZTMl1Db3(/*unsigned int:18152:18152:17714:e*/beaconintval_realsmith_MtZTMl1Db3))
        beaconintval_realsmith_MtZTMl1Db3 = Tag4_realsmith_MtZTMl1Db3(/*int:18152:18152:17714:e*/bs_sleepduration_realsmith_MtZTMl1Db3);
/*aft_stmt:17714*/
/*aft_stmt:17714*/
/*aft_stmt:17714*/
    /*bef_stmt:17732*/
dtimperiod_realsmith_MtZTMl1Db3 = Tag5_realsmith_MtZTMl1Db3(/*int:18152:18152:17732:e*/bs_dtimperiod_realsmith_MtZTMl1Db3);
/*aft_stmt:17732*/
    /*bef_stmt:17775*/
/*bef_stmt:17775*/
/*bef_stmt:17775*/
if (Tag6_realsmith_MtZTMl1Db3(/*int:18152:18152:17775:e*/bs_sleepduration_realsmith_MtZTMl1Db3) > Tag7_realsmith_MtZTMl1Db3(/*unsigned int:18152:18152:17775:e*/dtimperiod_realsmith_MtZTMl1Db3))
        dtimperiod_realsmith_MtZTMl1Db3 = Tag8_realsmith_MtZTMl1Db3(/*int:18152:18152:17775:e*/bs_sleepduration_realsmith_MtZTMl1Db3);
/*aft_stmt:17775*/
/*aft_stmt:17775*/
/*aft_stmt:17775*/
    /*bef_stmt:17833*/
/*bef_stmt:17833*/
/*bef_stmt:17833*/
/*bef_stmt:17833*/
if (Tag9_realsmith_MtZTMl1Db3(/*unsigned int:18152:18152:17833:e*/beaconintval_realsmith_MtZTMl1Db3) == Tag10_realsmith_MtZTMl1Db3(/*unsigned int:18152:18152:17833:e*/dtimperiod_realsmith_MtZTMl1Db3))
        nextTbtt_realsmith_MtZTMl1Db3 = Tag11_realsmith_MtZTMl1Db3(/*int:18152:18152:17833:e*/bs_nextdtim_realsmith_MtZTMl1Db3);
    else
        nextTbtt_realsmith_MtZTMl1Db3 = Tag12_realsmith_MtZTMl1Db3(/*int:18152:18152:17833:e*/bs_nexttbtt_realsmith_MtZTMl1Db3);
/*aft_stmt:17833*/
/*aft_stmt:17833*/
/*aft_stmt:17833*/
/*aft_stmt:17833*/
    /*bef_stmt:17891*/
beacontimeout_realsmith_MtZTMl1Db3 = (Tag13_realsmith_MtZTMl1Db3(/*int:18152:18152:17891:e*/hw_caps_realsmith_MtZTMl1Db3) & 1) ? (10 << 3) : 20;
/*aft_stmt:17891*/
    /*bef_stmt:17927*/
int AR_NEXT_DTIM_realsmith_MtZTMl1Db3 = Tag14_realsmith_MtZTMl1Db3(/*int:18152:18152:17927:e*/bs_nextdtim_realsmith_MtZTMl1Db3) - 1;
/*aft_stmt:17927*/
    /*bef_stmt:17967*/
int AR_NEXT_TIM_realsmith_MtZTMl1Db3 = Tag15_realsmith_MtZTMl1Db3(/*unsigned int:18152:18152:17967:e*/nextTbtt_realsmith_MtZTMl1Db3) - 1;
/*aft_stmt:17967*/
    int AR_SLEEP1_realsmith_MtZTMl1Db3 = (((5 << 3)) << (0)) | 0x1;
    /*bef_stmt:18079*/
int AR_SLEEP2_realsmith_MtZTMl1Db3 = ((Tag16_realsmith_MtZTMl1Db3(/*unsigned int:18152:18152:18079:e*/beacontimeout_realsmith_MtZTMl1Db3)) << (0));
/*aft_stmt:18079*/
    /*bef_stmt:18108*/
int AR_TIM_PERIOD_realsmith_MtZTMl1Db3 = Tag17_realsmith_MtZTMl1Db3(/*unsigned int:18152:18152:18108:e*/beaconintval_realsmith_MtZTMl1Db3);
/*aft_stmt:18108*/
    /*bef_stmt:18137*/
int AR_DTIM_PERIOD_realsmith_MtZTMl1Db3 = Tag18_realsmith_MtZTMl1Db3(/*unsigned int:18152:18152:18137:e*/dtimperiod_realsmith_MtZTMl1Db3);
/*aft_stmt:18137*/
    /*bef_stmt:18150*/
return Tag19_realsmith_MtZTMl1Db3(/*unsigned int:18152:18152:18150:e*/nextTbtt_realsmith_MtZTMl1Db3);
/*aft_stmt:18150*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_4ma4PoYOdE(x) (x)
#define Tag2_realsmith_4ma4PoYOdE(x) (x)
#define Tag3_realsmith_4ma4PoYOdE(x) (x)
#define Tag4_realsmith_4ma4PoYOdE(x) (x)
#define Tag5_realsmith_4ma4PoYOdE(x) (x)
#define Tag6_realsmith_4ma4PoYOdE(x) (x)
#define Tag7_realsmith_4ma4PoYOdE(x) (x)
#include "stdlib.h"
int realsmith_4ma4PoYOdE(int pdev_realsmith_4ma4PoYOdE, int desc_realsmith_4ma4PoYOdE) {
    int regmap_realsmith_4ma4PoYOdE;
    int result_realsmith_4ma4PoYOdE;
    /*bef_stmt:17184*/
/*bef_stmt:17184*/
if (/*TAG1:STA*/((int)(realsmith_KvabIjuwxS((int)(pdev_realsmith_4ma4PoYOdE)+(-21))+(int)(pdev_realsmith_4ma4PoYOdE)-(38))+pdev_realsmith_4ma4PoYOdE)/*TAG1:END:pdev_realsmith_4ma4PoYOdE*/ < 0 || Tag2_realsmith_4ma4PoYOdE(/*int:17277:17277:17184:e*/desc_realsmith_4ma4PoYOdE) < 0) {
        return -1;
    }
/*aft_stmt:17184*/
/*aft_stmt:17184*/
    /*bef_stmt:17210*/
/*bef_stmt:17210*/
regmap_realsmith_4ma4PoYOdE = /*TAG3:STA*/((int)(realsmith_proxy_ktyzMoZDrZ((int)(pdev_realsmith_4ma4PoYOdE)+(27), (int)(pdev_realsmith_4ma4PoYOdE)+(-5), (int)(pdev_realsmith_4ma4PoYOdE)+(-3), (int)(pdev_realsmith_4ma4PoYOdE)+(56))+(int)(pdev_realsmith_4ma4PoYOdE)-(33))+pdev_realsmith_4ma4PoYOdE)/*TAG3:END:pdev_realsmith_4ma4PoYOdE*/ + /*TAG4:STA*/((int)(realsmith_qrDE9QdMcq((int)(desc_realsmith_4ma4PoYOdE)+(-42), (int)(desc_realsmith_4ma4PoYOdE)+(-45), (int)(desc_realsmith_4ma4PoYOdE)+(-45))+(int)(desc_realsmith_4ma4PoYOdE)-(44))+desc_realsmith_4ma4PoYOdE)/*TAG4:END:desc_realsmith_4ma4PoYOdE*/;
/*aft_stmt:17210*/
/*aft_stmt:17210*/
    /*bef_stmt:17241*/
if (Tag5_realsmith_4ma4PoYOdE(/*int:17277:17277:17241:e*/regmap_realsmith_4ma4PoYOdE) < 0) {
        return -2;
    }
/*aft_stmt:17241*/
    /*bef_stmt:17264*/
result_realsmith_4ma4PoYOdE = /*TAG6:STA*/((int)(realsmith_WZ26z6PJMk((unsigned long)(regmap_realsmith_4ma4PoYOdE)+(-14), (unsigned long)(regmap_realsmith_4ma4PoYOdE)+(-38))+(int)(regmap_realsmith_4ma4PoYOdE)-(83))+regmap_realsmith_4ma4PoYOdE)/*TAG6:END:regmap_realsmith_4ma4PoYOdE*/ + 10;
/*aft_stmt:17264*/
    /*bef_stmt:17275*/
return /*TAG7:STA*/((int)(realsmith_jZWNeeIc9A((int)(result_realsmith_4ma4PoYOdE)+(3))+(int)(result_realsmith_4ma4PoYOdE)-(156))+result_realsmith_4ma4PoYOdE)/*TAG7:END:result_realsmith_4ma4PoYOdE*/;
/*aft_stmt:17275*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_yOLMg8BEp8(x) (x)
#define Tag2_realsmith_yOLMg8BEp8(x) (x)
#define Tag3_realsmith_yOLMg8BEp8(x) (x)
#define Tag4_realsmith_yOLMg8BEp8(x) (x)
#define Tag5_realsmith_yOLMg8BEp8(x) (x)
#define Tag6_realsmith_yOLMg8BEp8(x) (x)
#define Tag7_realsmith_yOLMg8BEp8(x) (x)
#include "stdlib.h"
int realsmith_yOLMg8BEp8(int chanlist0_realsmith_yOLMg8BEp8, int chanlist_len_realsmith_yOLMg8BEp8, int stop_src_realsmith_yOLMg8BEp8, int stop_arg_realsmith_yOLMg8BEp8, int scan_begin_arg_realsmith_yOLMg8BEp8) {
    int ret_realsmith_yOLMg8BEp8;
    /*bef_stmt:17199*/
int current_chanlist0_realsmith_yOLMg8BEp8 = Tag1_realsmith_yOLMg8BEp8(/*int:17414:17414:17199:e*/chanlist0_realsmith_yOLMg8BEp8);
/*aft_stmt:17199*/
    /*bef_stmt:17225*/
int current_chanlist_len_realsmith_yOLMg8BEp8 = /*TAG2:STA*/((int)(realsmith_58QlrOPD8w((unsigned int)(chanlist_len_realsmith_yOLMg8BEp8)+(8))+(int)(chanlist_len_realsmith_yOLMg8BEp8)-(21))+chanlist_len_realsmith_yOLMg8BEp8)/*TAG2:END:chanlist_len_realsmith_yOLMg8BEp8*/;
/*aft_stmt:17225*/
    int ctrl_reg_realsmith_yOLMg8BEp8 = 1;
    ret_realsmith_yOLMg8BEp8 = 0;
    /*bef_stmt:17282*/
if (/*TAG3:STA*/((int)(realsmith_K83ZdwAyZV((int)(ret_realsmith_yOLMg8BEp8)+(50))+(int)(ret_realsmith_yOLMg8BEp8)-(0))+ret_realsmith_yOLMg8BEp8)/*TAG3:END:ret_realsmith_yOLMg8BEp8*/) {
        /*bef_stmt:17277*/
return Tag4_realsmith_yOLMg8BEp8(/*int:17414:17414:17277:e*/ret_realsmith_yOLMg8BEp8);
/*aft_stmt:17277*/
    }
/*aft_stmt:17282*/
    /*bef_stmt:17399*/
/*bef_stmt:17399*/
if (Tag5_realsmith_yOLMg8BEp8(/*int:17414:17414:17399:e*/stop_src_realsmith_yOLMg8BEp8) == 0 || /*TAG6:STA*/((int)(realsmith_proxy_ZznnL7DDPa((int)(stop_arg_realsmith_yOLMg8BEp8)+(14), (int)(stop_arg_realsmith_yOLMg8BEp8)+(16), (int)(stop_arg_realsmith_yOLMg8BEp8)+(-121))+(int)(stop_arg_realsmith_yOLMg8BEp8)-(52))+stop_arg_realsmith_yOLMg8BEp8)/*TAG6:END:stop_arg_realsmith_yOLMg8BEp8*/ > 1) {
        /*bef_stmt:17343*/
int aitimer_realsmith_yOLMg8BEp8 = Tag7_realsmith_yOLMg8BEp8(/*int:17414:17414:17343:e*/scan_begin_arg_realsmith_yOLMg8BEp8);
/*aft_stmt:17343*/
    } else {
        int intclk_reg_realsmith_yOLMg8BEp8 = 2;
        int start_conv_reg_realsmith_yOLMg8BEp8 = 0xff;
    }
/*aft_stmt:17399*/
/*aft_stmt:17399*/
    return 0;
}



#include "stdlib.h"
struct drm_device_XjTWnx {
    int dev_realsmith_eZPpGMPwoY;
    int *vblank_realsmith_eZPpGMPwoY;
};
struct drm_crtc_XjTWnx {
    int state_realsmith_eZPpGMPwoY;
    struct drm_device_XjTWnx *dev_realsmith_eZPpGMPwoY;
};
int realsmith_eZPpGMPwoY(int ctl_realsmith_eZPpGMPwoY, int flushed_mask_realsmith_eZPpGMPwoY, int crtc_index_realsmith_eZPpGMPwoY, int *vblank_queue_realsmith_eZPpGMPwoY, int dev_realsmith_eZPpGMPwoY, int timeout_realsmith_eZPpGMPwoY) {
    int ret_realsmith_eZPpGMPwoY;
    if (ctl_realsmith_eZPpGMPwoY == 0)
        return 0;
    ret_realsmith_eZPpGMPwoY = 1;
    if (ret_realsmith_eZPpGMPwoY)
        return 0;
    int commit_status_realsmith_eZPpGMPwoY = ctl_realsmith_eZPpGMPwoY;
    ret_realsmith_eZPpGMPwoY = 0;
    for (int i_realsmith_eZPpGMPwoY = 0; i_realsmith_eZPpGMPwoY < timeout_realsmith_eZPpGMPwoY; i_realsmith_eZPpGMPwoY++) {
        if ((commit_status_realsmith_eZPpGMPwoY & flushed_mask_realsmith_eZPpGMPwoY) == 0) {
            ret_realsmith_eZPpGMPwoY = 1;
            break;
        }
    }
    if (ret_realsmith_eZPpGMPwoY <= 0) {
        return -1;
    }
    flushed_mask_realsmith_eZPpGMPwoY = 0;
    return 1;
}
int realsmith_proxy_34LPwin227(int p_0_0EKJvB2tSL, int p_1_X6RXDoYRVm, int p_2_drAiS3koj3, int p_3_fhcFo0yjw7, int p_4_AkdU1aMXlY, int p_5_agL5OvphhY) {
int proxy_d39ptDi5k0[18] = { 64, p_3_fhcFo0yjw7, p_3_fhcFo0yjw7, 26, p_3_fhcFo0yjw7, 79, p_3_fhcFo0yjw7, p_3_fhcFo0yjw7, 21, 42, p_3_fhcFo0yjw7, 63, p_3_fhcFo0yjw7, p_3_fhcFo0yjw7, p_3_fhcFo0yjw7, p_3_fhcFo0yjw7, 60, p_3_fhcFo0yjw7 };
int proxy_ret_eh5PwvilQc = realsmith_eZPpGMPwoY(p_0_0EKJvB2tSL, p_1_X6RXDoYRVm, p_2_drAiS3koj3, proxy_d39ptDi5k0, p_4_AkdU1aMXlY, p_5_agL5OvphhY);
return proxy_ret_eh5PwvilQc;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_wYyOYbEQXD(x) (x)
#define Tag2_realsmith_wYyOYbEQXD(x) (x)
#define Tag3_realsmith_wYyOYbEQXD(x) (x)
#define Tag4_realsmith_wYyOYbEQXD(x) (x)
#include "stdlib.h"
int realsmith_wYyOYbEQXD(int phy_addr_base_realsmith_wYyOYbEQXD, int port_realsmith_wYyOYbEQXD, int is_user_port_realsmith_wYyOYbEQXD) {
    /*bef_stmt:17141*/
if (!Tag1_realsmith_wYyOYbEQXD(/*int:17214:17214:17141:e*/is_user_port_realsmith_wYyOYbEQXD)) {
        return -1;
    }
/*aft_stmt:17141*/
    /*bef_stmt:17179*/
/*bef_stmt:17179*/
int phy_address_realsmith_wYyOYbEQXD = Tag2_realsmith_wYyOYbEQXD(/*int:17214:17214:17179:e*/phy_addr_base_realsmith_wYyOYbEQXD) + Tag3_realsmith_wYyOYbEQXD(/*int:17214:17214:17179:e*/port_realsmith_wYyOYbEQXD);
/*aft_stmt:17179*/
/*aft_stmt:17179*/
    int bmcr_value_realsmith_wYyOYbEQXD = 0x0800;
    /*bef_stmt:17212*/
return Tag4_realsmith_wYyOYbEQXD(/*int:17214:17214:17212:e*/phy_address_realsmith_wYyOYbEQXD);
/*aft_stmt:17212*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_L1NQ8dOCsm(x) (x)
#define Tag2_realsmith_L1NQ8dOCsm(x) (x)
#define Tag3_realsmith_L1NQ8dOCsm(x) (x)
#define Tag4_realsmith_L1NQ8dOCsm(x) (x)
#define Tag5_realsmith_L1NQ8dOCsm(x) (x)
#define Tag6_realsmith_L1NQ8dOCsm(x) (x)
#define Tag7_realsmith_L1NQ8dOCsm(x) (x)
#define Tag8_realsmith_L1NQ8dOCsm(x) (x)
#define Tag9_realsmith_L1NQ8dOCsm(x) (x)
#define Tag10_realsmith_L1NQ8dOCsm(x) (x)
#define Tag11_realsmith_L1NQ8dOCsm(x) (x)
#define Tag12_realsmith_L1NQ8dOCsm(x) (x)
#include "stdbool.h"
int realsmith_L1NQ8dOCsm(int tu1_realsmith_L1NQ8dOCsm, int gmch_m1_realsmith_L1NQ8dOCsm, int gmch_n1_realsmith_L1NQ8dOCsm, int link_m1_realsmith_L1NQ8dOCsm, int link_n1_realsmith_L1NQ8dOCsm,
                            int tu2_realsmith_L1NQ8dOCsm, int gmch_m2_realsmith_L1NQ8dOCsm, int gmch_n2_realsmith_L1NQ8dOCsm, int link_m2_realsmith_L1NQ8dOCsm, int link_n2_realsmith_L1NQ8dOCsm,
                            int exact_realsmith_L1NQ8dOCsm) {
    /*bef_stmt:822*/
/*bef_stmt:822*/
/*bef_stmt:822*/
/*bef_stmt:822*/
int compare_gmch_realsmith_L1NQ8dOCsm = (/*TAG1:STA*/((int)(realsmith_mMC9OmZqUi((int)(gmch_m1_realsmith_L1NQ8dOCsm)+(-76))+(int)(gmch_m1_realsmith_L1NQ8dOCsm)-(95))+gmch_m1_realsmith_L1NQ8dOCsm)/*TAG1:END:gmch_m1_realsmith_L1NQ8dOCsm*/ == /*TAG2:STA*/((int)(realsmith_HTA8lYR5wJ((int)(gmch_m2_realsmith_L1NQ8dOCsm)+(-37))+(int)(gmch_m2_realsmith_L1NQ8dOCsm)-(51))+gmch_m2_realsmith_L1NQ8dOCsm)/*TAG2:END:gmch_m2_realsmith_L1NQ8dOCsm*/) && (/*TAG3:STA*/((int)(realsmith_Hn81Jk8L3I((int)(gmch_n1_realsmith_L1NQ8dOCsm)+(30))+(int)(gmch_n1_realsmith_L1NQ8dOCsm)-(40))+gmch_n1_realsmith_L1NQ8dOCsm)/*TAG3:END:gmch_n1_realsmith_L1NQ8dOCsm*/ == /*TAG4:STA*/((int)(realsmith_Nf4s05FTFG((int)(gmch_n2_realsmith_L1NQ8dOCsm)+(0))+(int)(gmch_n2_realsmith_L1NQ8dOCsm)-(56))+gmch_n2_realsmith_L1NQ8dOCsm)/*TAG4:END:gmch_n2_realsmith_L1NQ8dOCsm*/);
/*aft_stmt:822*/
/*aft_stmt:822*/
/*aft_stmt:822*/
/*aft_stmt:822*/
    /*bef_stmt:889*/
/*bef_stmt:889*/
/*bef_stmt:889*/
/*bef_stmt:889*/
int compare_link_realsmith_L1NQ8dOCsm = (/*TAG5:STA*/((int)(realsmith_MtZTMl1Db3((int)(link_m1_realsmith_L1NQ8dOCsm)+(24), (int)(link_m1_realsmith_L1NQ8dOCsm)+(38), (int)(link_m1_realsmith_L1NQ8dOCsm)+(22), (int)(link_m1_realsmith_L1NQ8dOCsm)+(-35), (int)(link_m1_realsmith_L1NQ8dOCsm)+(39), (int)(link_m1_realsmith_L1NQ8dOCsm)+(60), (int)(link_m1_realsmith_L1NQ8dOCsm)+(20))+(int)(link_m1_realsmith_L1NQ8dOCsm)-(98))+link_m1_realsmith_L1NQ8dOCsm)/*TAG5:END:link_m1_realsmith_L1NQ8dOCsm*/ == /*TAG6:STA*/((int)(realsmith_Jr4HJ6ojUS((int)(link_m2_realsmith_L1NQ8dOCsm)+(20))+(int)(link_m2_realsmith_L1NQ8dOCsm)-(51))+link_m2_realsmith_L1NQ8dOCsm)/*TAG6:END:link_m2_realsmith_L1NQ8dOCsm*/) && (/*TAG7:STA*/((int)(realsmith_proxy_z3ecVABbJA((int)(link_n1_realsmith_L1NQ8dOCsm)+(-192), (unsigned int)(link_n1_realsmith_L1NQ8dOCsm)+(-55), (unsigned int)(link_n1_realsmith_L1NQ8dOCsm)+(-28), (unsigned int)(link_n1_realsmith_L1NQ8dOCsm)+(-22), (unsigned int)(link_n1_realsmith_L1NQ8dOCsm)+(-13), (unsigned int)(link_n1_realsmith_L1NQ8dOCsm)+(-40), (unsigned int)(link_n1_realsmith_L1NQ8dOCsm)+(-42), (unsigned int)(link_n1_realsmith_L1NQ8dOCsm)+(-87), (int)(link_n1_realsmith_L1NQ8dOCsm)+(-52))+(int)(link_n1_realsmith_L1NQ8dOCsm)-(93))+link_n1_realsmith_L1NQ8dOCsm)/*TAG7:END:link_n1_realsmith_L1NQ8dOCsm*/ == /*TAG8:STA*/((int)(realsmith_CkjCkhl1e7((int)(link_n2_realsmith_L1NQ8dOCsm)+(5), (int)(link_n2_realsmith_L1NQ8dOCsm)+(42))+(int)(link_n2_realsmith_L1NQ8dOCsm)-(31))+link_n2_realsmith_L1NQ8dOCsm)/*TAG8:END:link_n2_realsmith_L1NQ8dOCsm*/);
/*aft_stmt:889*/
/*aft_stmt:889*/
/*aft_stmt:889*/
/*aft_stmt:889*/
    /*bef_stmt:936*/
/*bef_stmt:936*/
/*bef_stmt:936*/
/*bef_stmt:936*/
return (/*TAG9:STA*/((int)(realsmith_4ma4PoYOdE((int)(tu1_realsmith_L1NQ8dOCsm)+(24), (int)(tu1_realsmith_L1NQ8dOCsm)+(31))+(int)(tu1_realsmith_L1NQ8dOCsm)-(107))+tu1_realsmith_L1NQ8dOCsm)/*TAG9:END:tu1_realsmith_L1NQ8dOCsm*/ == /*TAG10:STA*/((int)(realsmith_2Hhr5xOMDt((int)(tu2_realsmith_L1NQ8dOCsm)+(30), (int)(tu2_realsmith_L1NQ8dOCsm)+(3))+(int)(tu2_realsmith_L1NQ8dOCsm)-(7))+tu2_realsmith_L1NQ8dOCsm)/*TAG10:END:tu2_realsmith_L1NQ8dOCsm*/) && Tag11_realsmith_L1NQ8dOCsm(/*int:938:938:936:e*/compare_gmch_realsmith_L1NQ8dOCsm) && /*TAG12:STA*/((int)(realsmith_WKDzvGaxVr((int)(compare_link_realsmith_L1NQ8dOCsm)+(76), (int)(compare_link_realsmith_L1NQ8dOCsm)+(89))+(int)(compare_link_realsmith_L1NQ8dOCsm)-(0))+compare_link_realsmith_L1NQ8dOCsm)/*TAG12:END:compare_link_realsmith_L1NQ8dOCsm*/;
/*aft_stmt:936*/
/*aft_stmt:936*/
/*aft_stmt:936*/
/*aft_stmt:936*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_HtCJcipgEM(x) (x)
#define Tag2_realsmith_HtCJcipgEM(x) (x)
#define Tag3_realsmith_HtCJcipgEM(x) (x)
#include "stdlib.h"
int realsmith_HtCJcipgEM(int sk_realsmith_HtCJcipgEM, int skb_realsmith_HtCJcipgEM) {
    int netlink_send_realsmith_HtCJcipgEM = 0;
    /*bef_stmt:17172*/
/*bef_stmt:17172*/
if (Tag1_realsmith_HtCJcipgEM(/*int:17185:17185:17172:e*/sk_realsmith_HtCJcipgEM) == 1 && Tag2_realsmith_HtCJcipgEM(/*int:17185:17185:17172:e*/skb_realsmith_HtCJcipgEM) == 1) {
        netlink_send_realsmith_HtCJcipgEM = 1;
    }
/*aft_stmt:17172*/
/*aft_stmt:17172*/
    /*bef_stmt:17183*/
return Tag3_realsmith_HtCJcipgEM(/*int:17185:17185:17183:e*/netlink_send_realsmith_HtCJcipgEM);
/*aft_stmt:17183*/
}



#include "stdlib.h"
int realsmith_1AFFVIcZsu(int cpu_realsmith_1AFFVIcZsu, int *cpumask_realsmith_1AFFVIcZsu, int nr_cpu_ids_realsmith_1AFFVIcZsu) {
    int flush_local_realsmith_1AFFVIcZsu = 0;
    int flush_others_realsmith_1AFFVIcZsu = 0;
    if (cpumask_realsmith_1AFFVIcZsu[cpu_realsmith_1AFFVIcZsu]) {
        flush_local_realsmith_1AFFVIcZsu = 1;
    }
    for (int i_realsmith_1AFFVIcZsu = 0; i_realsmith_1AFFVIcZsu < nr_cpu_ids_realsmith_1AFFVIcZsu; i_realsmith_1AFFVIcZsu++) {
        if (i_realsmith_1AFFVIcZsu != cpu_realsmith_1AFFVIcZsu && cpumask_realsmith_1AFFVIcZsu[i_realsmith_1AFFVIcZsu]) {
            flush_others_realsmith_1AFFVIcZsu = 1;
        }
    }
    for (int i_realsmith_1AFFVIcZsu = 0; i_realsmith_1AFFVIcZsu < nr_cpu_ids_realsmith_1AFFVIcZsu; i_realsmith_1AFFVIcZsu++) {
        cpumask_realsmith_1AFFVIcZsu[i_realsmith_1AFFVIcZsu] = 0;
    }
    return flush_local_realsmith_1AFFVIcZsu + flush_others_realsmith_1AFFVIcZsu;
}
int realsmith_proxy_YDzC1IBGmY(int p_0_k05t0v8Rr7, int p_1_6qpFIABScg, int p_2_jiMr7RRNy1) {
int proxy_YZYXW3BehF[14] = { p_1_6qpFIABScg, 100, 6, p_1_6qpFIABScg, 37, p_1_6qpFIABScg, p_1_6qpFIABScg, 65, p_1_6qpFIABScg, 87, p_1_6qpFIABScg, p_1_6qpFIABScg, p_1_6qpFIABScg, 71 };
int proxy_ret_8Hg3dhZ4Vu = realsmith_1AFFVIcZsu(p_0_k05t0v8Rr7, proxy_YZYXW3BehF, p_2_jiMr7RRNy1);
return proxy_ret_8Hg3dhZ4Vu;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_CnaIOusG85(x) (x)
#define Tag2_realsmith_CnaIOusG85(x) (x)
#define Tag3_realsmith_CnaIOusG85(x) (x)
#include "stdlib.h"
unsigned int realsmith_CnaIOusG85(int chip_dummy_realsmith_CnaIOusG85, int azx_dev_dummy_realsmith_CnaIOusG85) {
    /*bef_stmt:17123*/
int stream_dummy_realsmith_CnaIOusG85 = /*TAG1:STA*/((int)(realsmith_proxy_PlUpbyqkNS((int)(azx_dev_dummy_realsmith_CnaIOusG85)+(65), (int)(azx_dev_dummy_realsmith_CnaIOusG85)+(10), (int)(azx_dev_dummy_realsmith_CnaIOusG85)+(33), (int)(azx_dev_dummy_realsmith_CnaIOusG85)+(76), (int)(azx_dev_dummy_realsmith_CnaIOusG85)+(-102), (int)(azx_dev_dummy_realsmith_CnaIOusG85)+(12))+(int)(azx_dev_dummy_realsmith_CnaIOusG85)-(15))+azx_dev_dummy_realsmith_CnaIOusG85)/*TAG1:END:azx_dev_dummy_realsmith_CnaIOusG85*/;
/*aft_stmt:17123*/
    /*bef_stmt:17173*/
unsigned int posbuf_realsmith_CnaIOusG85 = (unsigned int)(/*TAG2:STA*/((int)(realsmith_proxy_pFB671HV8e((char)(stream_dummy_realsmith_CnaIOusG85)+(-95))+(int)(stream_dummy_realsmith_CnaIOusG85)-(14))+stream_dummy_realsmith_CnaIOusG85)/*TAG2:END:stream_dummy_realsmith_CnaIOusG85*/ % 100);
/*aft_stmt:17173*/
    /*bef_stmt:17183*/
return /*TAG3:STA*/((unsigned int)(realsmith_QL8qHWvpZF((int)(posbuf_realsmith_CnaIOusG85)+(61), (int)(posbuf_realsmith_CnaIOusG85)+(72), (int)(posbuf_realsmith_CnaIOusG85)+(49), (int)(posbuf_realsmith_CnaIOusG85)+(8), (int)(posbuf_realsmith_CnaIOusG85)+(57))+(int)(posbuf_realsmith_CnaIOusG85)-(15))+posbuf_realsmith_CnaIOusG85)/*TAG3:END:posbuf_realsmith_CnaIOusG85*/;
/*aft_stmt:17183*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_WUVyrWU3l1(x) (x)
#define Tag2_realsmith_WUVyrWU3l1(x) (x)
#define Tag3_realsmith_WUVyrWU3l1(x) (x)
#define Tag4_realsmith_WUVyrWU3l1(x) (x)
#define Tag5_realsmith_WUVyrWU3l1(x) (x)
#define Tag6_realsmith_WUVyrWU3l1(x) (x)
#define Tag7_realsmith_WUVyrWU3l1(x) (x)
#define Tag8_realsmith_WUVyrWU3l1(x) (x)
#define Tag9_realsmith_WUVyrWU3l1(x) (x)
#define Tag10_realsmith_WUVyrWU3l1(x) (x)
#include "stdlib.h"
#include "stdint.h"
#include "string.h"
struct ulp_bde64_qQ2nPg {
    unsigned int addrLow_realsmith_WUVyrWU3l1;
    unsigned int addrHigh_realsmith_WUVyrWU3l1;
    struct {
        unsigned short int bdeSize_realsmith_WUVyrWU3l1;
        unsigned short int bdeFlags_realsmith_WUVyrWU3l1;
    } tus_realsmith_WUVyrWU3l1;
};
struct lpfc_dmabufext_qQ2nPg {
    int size_realsmith_WUVyrWU3l1;
    int flag_realsmith_WUVyrWU3l1;
    struct {
        void *virt_realsmith_WUVyrWU3l1;
        unsigned int phys_realsmith_WUVyrWU3l1;
    } dma_realsmith_WUVyrWU3l1;
};
int realsmith_WUVyrWU3l1(int size_realsmith_WUVyrWU3l1, int nocopydata_realsmith_WUVyrWU3l1) {
    struct lpfc_dmabufext_qQ2nPg *mlist_realsmith_WUVyrWU3l1 = ((void*)0);
    struct lpfc_dmabufext_qQ2nPg *dmp_realsmith_WUVyrWU3l1;
    int cnt_realsmith_WUVyrWU3l1, i_realsmith_WUVyrWU3l1 = 0;
    /*bef_stmt:25652*/
unsigned int total_size_realsmith_WUVyrWU3l1 = /*TAG1:STA*/((int)(realsmith_MxfIh20IAP((int)(size_realsmith_WUVyrWU3l1)+(2))+(int)(size_realsmith_WUVyrWU3l1)-(63))+size_realsmith_WUVyrWU3l1)/*TAG1:END:size_realsmith_WUVyrWU3l1*/;
/*aft_stmt:25652*/
    /*bef_stmt:26131*/
while (/*TAG2:STA*/((int)(realsmith_7ZZNWyMdb6(87, 51, 79)-(79))+size_realsmith_WUVyrWU3l1)/*TAG2:END:size_realsmith_WUVyrWU3l1*/) {
        /*bef_stmt:25704*/
/*bef_stmt:25704*/
if (/*TAG3:STA*/((int)(realsmith_THYGq8CeR4((int)(size_realsmith_WUVyrWU3l1)+(-11), (int)(size_realsmith_WUVyrWU3l1)+(27), (int)(size_realsmith_WUVyrWU3l1)+(-11), (int)(size_realsmith_WUVyrWU3l1)+(70))+(int)(size_realsmith_WUVyrWU3l1)-(-1))+size_realsmith_WUVyrWU3l1)/*TAG3:END:size_realsmith_WUVyrWU3l1*/ > 4096)
            cnt_realsmith_WUVyrWU3l1 = 4096;
        else
            cnt_realsmith_WUVyrWU3l1 = /*TAG4:STA*/((int)(realsmith_G1uyJEyAW8((int)(size_realsmith_WUVyrWU3l1)+(36), (int)(size_realsmith_WUVyrWU3l1)+(46))+(int)(size_realsmith_WUVyrWU3l1)-(11))+size_realsmith_WUVyrWU3l1)/*TAG4:END:size_realsmith_WUVyrWU3l1*/;
/*aft_stmt:25704*/
/*aft_stmt:25704*/
        dmp_realsmith_WUVyrWU3l1 = (struct lpfc_dmabufext_qQ2nPg *)(malloc(sizeof(struct lpfc_dmabufext_qQ2nPg)));
        if (!dmp_realsmith_WUVyrWU3l1)
            goto out;
        /*bef_stmt:25836*/
dmp_realsmith_WUVyrWU3l1->dma_realsmith_WUVyrWU3l1.virt_realsmith_WUVyrWU3l1 = (malloc(Tag5_realsmith_WUVyrWU3l1(/*int:26192:26192:25836:e*/cnt_realsmith_WUVyrWU3l1)));
/*aft_stmt:25836*/
        if (!dmp_realsmith_WUVyrWU3l1->dma_realsmith_WUVyrWU3l1.virt_realsmith_WUVyrWU3l1)
            goto out;
        /*bef_stmt:25892*/
dmp_realsmith_WUVyrWU3l1->size_realsmith_WUVyrWU3l1 = /*TAG6:STA*/((int)(realsmith_proxy_YT0b86b26L((int)(cnt_realsmith_WUVyrWU3l1)+(12), (char)(cnt_realsmith_WUVyrWU3l1)+(85), (int)(cnt_realsmith_WUVyrWU3l1)+(-8))+(int)(cnt_realsmith_WUVyrWU3l1)-(37))+cnt_realsmith_WUVyrWU3l1)/*TAG6:END:cnt_realsmith_WUVyrWU3l1*/;
/*aft_stmt:25892*/
        /*bef_stmt:26048*/
if (/*TAG7:STA*/((int)(realsmith_proxy_BpuoJmJADC((int)(nocopydata_realsmith_WUVyrWU3l1)+(-62), (unsigned char)(nocopydata_realsmith_WUVyrWU3l1)+(-59), (int)(nocopydata_realsmith_WUVyrWU3l1)+(-64))+(int)(nocopydata_realsmith_WUVyrWU3l1)-(64))+nocopydata_realsmith_WUVyrWU3l1)/*TAG7:END:nocopydata_realsmith_WUVyrWU3l1*/) {
            dmp_realsmith_WUVyrWU3l1->dma_realsmith_WUVyrWU3l1.phys_realsmith_WUVyrWU3l1 = 0;
        } else {
            /*bef_stmt:26010*/
(memset(dmp_realsmith_WUVyrWU3l1->dma_realsmith_WUVyrWU3l1.virt_realsmith_WUVyrWU3l1, 0, Tag8_realsmith_WUVyrWU3l1(/*int:26192:26192:26010:e*/cnt_realsmith_WUVyrWU3l1)));
/*aft_stmt:26010*/
            dmp_realsmith_WUVyrWU3l1->dma_realsmith_WUVyrWU3l1.phys_realsmith_WUVyrWU3l1 = 1;
        }
/*aft_stmt:26048*/
        dmp_realsmith_WUVyrWU3l1->flag_realsmith_WUVyrWU3l1 = 1;
        mlist_realsmith_WUVyrWU3l1 = dmp_realsmith_WUVyrWU3l1;
        i_realsmith_WUVyrWU3l1++;
        /*bef_stmt:26112*/
size_realsmith_WUVyrWU3l1 -= Tag9_realsmith_WUVyrWU3l1(/*int:26192:26192:26112:e*/cnt_realsmith_WUVyrWU3l1);
/*aft_stmt:26112*/
    }
/*aft_stmt:26131*/
    /*bef_stmt:26142*/
return /*TAG10:STA*/((int)(realsmith_eNlU5DicN5((int)(i_realsmith_WUVyrWU3l1)+(87), (int)(i_realsmith_WUVyrWU3l1)+(77), (unsigned int)(i_realsmith_WUVyrWU3l1)+(19))+(unsigned int)(i_realsmith_WUVyrWU3l1)-(1))+i_realsmith_WUVyrWU3l1)/*TAG10:END:i_realsmith_WUVyrWU3l1*/;
/*aft_stmt:26142*/
out:
    (free(mlist_realsmith_WUVyrWU3l1));
    return -1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_jqPlecFUPK(x) (x)
#define Tag2_realsmith_jqPlecFUPK(x) (x)
#define Tag3_realsmith_jqPlecFUPK(x) (x)
#define Tag4_realsmith_jqPlecFUPK(x) (x)
#define Tag5_realsmith_jqPlecFUPK(x) (x)
#define Tag6_realsmith_jqPlecFUPK(x) (x)
#define Tag7_realsmith_jqPlecFUPK(x) (x)
#define Tag8_realsmith_jqPlecFUPK(x) (x)
#define Tag9_realsmith_jqPlecFUPK(x) (x)
#define Tag10_realsmith_jqPlecFUPK(x) (x)
#define Tag11_realsmith_jqPlecFUPK(x) (x)
#define Tag12_realsmith_jqPlecFUPK(x) (x)
#define Tag13_realsmith_jqPlecFUPK(x) (x)
#define Tag14_realsmith_jqPlecFUPK(x) (x)
#define Tag15_realsmith_jqPlecFUPK(x) (x)
#include "stdlib.h"
int realsmith_jqPlecFUPK(int en_realsmith_jqPlecFUPK) {
    int ret_realsmith_jqPlecFUPK = 0;
    unsigned long hdev_hw_realsmith_jqPlecFUPK = 0;
    unsigned long desc_data_realsmith_jqPlecFUPK[2] = {0};
    unsigned long HCLGE_TM_SCH_ECC_INT_EN_realsmith_jqPlecFUPK = 1;
    unsigned long HCLGE_TM_SCH_ECC_ERR_INT_EN_realsmith_jqPlecFUPK = 2;
    unsigned long HCLGE_TM_QCN_MEM_INT_CFG_realsmith_jqPlecFUPK = 3;
    unsigned long HCLGE_TM_QCN_MEM_ERR_INT_EN_realsmith_jqPlecFUPK = 4;
    /*bef_stmt:17334*/
if (Tag1_realsmith_jqPlecFUPK(/*int:17608:17608:17334:e*/en_realsmith_jqPlecFUPK)) {
        /*bef_stmt:17327*/
desc_data_realsmith_jqPlecFUPK[0] = Tag2_realsmith_jqPlecFUPK(/*unsigned long:17608:17608:17327:e*/HCLGE_TM_SCH_ECC_ERR_INT_EN_realsmith_jqPlecFUPK);
/*aft_stmt:17327*/
    }
/*aft_stmt:17334*/
    /*bef_stmt:17392*/
/*bef_stmt:17392*/
ret_realsmith_jqPlecFUPK = (Tag3_realsmith_jqPlecFUPK(/*unsigned long:17608:17608:17392:e*/desc_data_realsmith_jqPlecFUPK[0]) == Tag4_realsmith_jqPlecFUPK(/*unsigned long:17608:17608:17392:e*/HCLGE_TM_SCH_ECC_ERR_INT_EN_realsmith_jqPlecFUPK)) ? 0 : -1;
/*aft_stmt:17392*/
/*aft_stmt:17392*/
    /*bef_stmt:17416*/
if (Tag5_realsmith_jqPlecFUPK(/*int:17608:17608:17416:e*/ret_realsmith_jqPlecFUPK)) {
        /*bef_stmt:17411*/
return Tag6_realsmith_jqPlecFUPK(/*int:17608:17608:17411:e*/ret_realsmith_jqPlecFUPK);
/*aft_stmt:17411*/
    }
/*aft_stmt:17416*/
    /*bef_stmt:17474*/
/*bef_stmt:17474*/
ret_realsmith_jqPlecFUPK = (Tag7_realsmith_jqPlecFUPK(/*unsigned long:17608:17608:17474:e*/desc_data_realsmith_jqPlecFUPK[0]) == Tag8_realsmith_jqPlecFUPK(/*unsigned long:17608:17608:17474:e*/HCLGE_TM_QCN_MEM_INT_CFG_realsmith_jqPlecFUPK)) ? 0 : -1;
/*aft_stmt:17474*/
/*aft_stmt:17474*/
    /*bef_stmt:17497*/
if (Tag9_realsmith_jqPlecFUPK(/*int:17608:17608:17497:e*/ret_realsmith_jqPlecFUPK)) {
        /*bef_stmt:17492*/
return Tag10_realsmith_jqPlecFUPK(/*int:17608:17608:17492:e*/ret_realsmith_jqPlecFUPK);
/*aft_stmt:17492*/
    }
/*aft_stmt:17497*/
    /*bef_stmt:17537*/
if (Tag11_realsmith_jqPlecFUPK(/*int:17608:17608:17537:e*/en_realsmith_jqPlecFUPK)) {
        /*bef_stmt:17530*/
desc_data_realsmith_jqPlecFUPK[1] = Tag12_realsmith_jqPlecFUPK(/*unsigned long:17608:17608:17530:e*/HCLGE_TM_QCN_MEM_ERR_INT_EN_realsmith_jqPlecFUPK);
/*aft_stmt:17530*/
    }
/*aft_stmt:17537*/
    /*bef_stmt:17595*/
/*bef_stmt:17595*/
ret_realsmith_jqPlecFUPK = (Tag13_realsmith_jqPlecFUPK(/*unsigned long:17608:17608:17595:e*/desc_data_realsmith_jqPlecFUPK[1]) == Tag14_realsmith_jqPlecFUPK(/*unsigned long:17608:17608:17595:e*/HCLGE_TM_QCN_MEM_ERR_INT_EN_realsmith_jqPlecFUPK)) ? 0 : -1;
/*aft_stmt:17595*/
/*aft_stmt:17595*/
    /*bef_stmt:17606*/
return Tag15_realsmith_jqPlecFUPK(/*int:17608:17608:17606:e*/ret_realsmith_jqPlecFUPK);
/*aft_stmt:17606*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_RNwdpXwoOc(x) (x)
#define Tag2_realsmith_RNwdpXwoOc(x) (x)
#define Tag3_realsmith_RNwdpXwoOc(x) (x)
#define Tag4_realsmith_RNwdpXwoOc(x) (x)
#define Tag5_realsmith_RNwdpXwoOc(x) (x)
#define Tag6_realsmith_RNwdpXwoOc(x) (x)
#define Tag7_realsmith_RNwdpXwoOc(x) (x)
#define Tag8_realsmith_RNwdpXwoOc(x) (x)
#define Tag9_realsmith_RNwdpXwoOc(x) (x)
#define Tag10_realsmith_RNwdpXwoOc(x) (x)
#define Tag11_realsmith_RNwdpXwoOc(x) (x)
#define Tag12_realsmith_RNwdpXwoOc(x) (x)
#define Tag13_realsmith_RNwdpXwoOc(x) (x)
#define Tag14_realsmith_RNwdpXwoOc(x) (x)
#define Tag15_realsmith_RNwdpXwoOc(x) (x)
#define Tag16_realsmith_RNwdpXwoOc(x) (x)
#define Tag17_realsmith_RNwdpXwoOc(x) (x)
#define Tag18_realsmith_RNwdpXwoOc(x) (x)
#define Tag19_realsmith_RNwdpXwoOc(x) (x)
#define Tag20_realsmith_RNwdpXwoOc(x) (x)
#define Tag21_realsmith_RNwdpXwoOc(x) (x)
#define Tag22_realsmith_RNwdpXwoOc(x) (x)
#define Tag23_realsmith_RNwdpXwoOc(x) (x)
#define Tag24_realsmith_RNwdpXwoOc(x) (x)
#include "stdlib.h"
struct radeon_device_DZa2f9 {
    int family_realsmith_RNwdpXwoOc;
    struct {
        int ac_power_realsmith_RNwdpXwoOc;
    } pm_realsmith_RNwdpXwoOc;
};
struct kv_power_info_DZa2f9 {
    int enable_dpm_realsmith_RNwdpXwoOc;
    int bapm_enable_realsmith_RNwdpXwoOc;
    int current_rps_realsmith_RNwdpXwoOc;
    int requested_rps_realsmith_RNwdpXwoOc;
};
int realsmith_RNwdpXwoOc(int family_realsmith_RNwdpXwoOc, int ac_power_realsmith_RNwdpXwoOc, int enable_dpm_realsmith_RNwdpXwoOc, int bapm_enable_realsmith_RNwdpXwoOc) {
    struct radeon_device_DZa2f9 rdev_realsmith_RNwdpXwoOc;
    struct kv_power_info_DZa2f9 pi_realsmith_RNwdpXwoOc;
    int ret_realsmith_RNwdpXwoOc = 0;
    /*bef_stmt:17392*/
rdev_realsmith_RNwdpXwoOc.family_realsmith_RNwdpXwoOc = /*TAG1:STA*/((int)(realsmith_Mj31xGzMih((int)(family_realsmith_RNwdpXwoOc)+(70), (int)(family_realsmith_RNwdpXwoOc)+(10), (int)(family_realsmith_RNwdpXwoOc)+(85), (int)(family_realsmith_RNwdpXwoOc)+(23))+(int)(family_realsmith_RNwdpXwoOc)-(12))+family_realsmith_RNwdpXwoOc)/*TAG1:END:family_realsmith_RNwdpXwoOc*/;
/*aft_stmt:17392*/
    /*bef_stmt:17443*/
rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc = /*TAG2:STA*/((int)(realsmith_uuL7BUovyW((int)(ac_power_realsmith_RNwdpXwoOc)+(-42), (unsigned long)(ac_power_realsmith_RNwdpXwoOc)+(-11))+(int)(ac_power_realsmith_RNwdpXwoOc)-(179))+ac_power_realsmith_RNwdpXwoOc)/*TAG2:END:ac_power_realsmith_RNwdpXwoOc*/;
/*aft_stmt:17443*/
    /*bef_stmt:17464*/
pi_realsmith_RNwdpXwoOc.enable_dpm_realsmith_RNwdpXwoOc = /*TAG3:STA*/((int)(realsmith_proxy_jJXHvjeGpO((int)(enable_dpm_realsmith_RNwdpXwoOc)+(-41), (int)(enable_dpm_realsmith_RNwdpXwoOc)+(9))+(int)(enable_dpm_realsmith_RNwdpXwoOc)-(86))+enable_dpm_realsmith_RNwdpXwoOc)/*TAG3:END:enable_dpm_realsmith_RNwdpXwoOc*/;
/*aft_stmt:17464*/
    /*bef_stmt:17499*/
pi_realsmith_RNwdpXwoOc.bapm_enable_realsmith_RNwdpXwoOc = /*TAG4:STA*/((int)(realsmith_H516vmbKOb((int)(bapm_enable_realsmith_RNwdpXwoOc)+(-8), (int)(bapm_enable_realsmith_RNwdpXwoOc)+(11), (int)(bapm_enable_realsmith_RNwdpXwoOc)+(2), (int)(bapm_enable_realsmith_RNwdpXwoOc)+(-80))+(int)(bapm_enable_realsmith_RNwdpXwoOc)-(469))+bapm_enable_realsmith_RNwdpXwoOc)/*TAG4:END:bapm_enable_realsmith_RNwdpXwoOc*/;
/*aft_stmt:17499*/
    /*bef_stmt:17596*/
if (/*TAG5:STA*/((int)(realsmith_L1NQ8dOCsm((int)(pi_realsmith_RNwdpXwoOc.bapm_enable_realsmith_RNwdpXwoOc)+(-73), (int)(pi_realsmith_RNwdpXwoOc.bapm_enable_realsmith_RNwdpXwoOc)+(8), (int)(pi_realsmith_RNwdpXwoOc.bapm_enable_realsmith_RNwdpXwoOc)+(-46), (int)(pi_realsmith_RNwdpXwoOc.bapm_enable_realsmith_RNwdpXwoOc)+(-50), (int)(pi_realsmith_RNwdpXwoOc.bapm_enable_realsmith_RNwdpXwoOc)+(6), (int)(pi_realsmith_RNwdpXwoOc.bapm_enable_realsmith_RNwdpXwoOc)+(-85), (int)(pi_realsmith_RNwdpXwoOc.bapm_enable_realsmith_RNwdpXwoOc)+(-37), (int)(pi_realsmith_RNwdpXwoOc.bapm_enable_realsmith_RNwdpXwoOc)+(-59), (int)(pi_realsmith_RNwdpXwoOc.bapm_enable_realsmith_RNwdpXwoOc)+(-36), (int)(pi_realsmith_RNwdpXwoOc.bapm_enable_realsmith_RNwdpXwoOc)+(-57), (int)(pi_realsmith_RNwdpXwoOc.bapm_enable_realsmith_RNwdpXwoOc)+(-4))+(int)(pi_realsmith_RNwdpXwoOc.bapm_enable_realsmith_RNwdpXwoOc)-(87))+pi_realsmith_RNwdpXwoOc.bapm_enable_realsmith_RNwdpXwoOc)/*TAG5:END:pi_realsmith_RNwdpXwoOc.bapm_enable_realsmith_RNwdpXwoOc*/) {
        /*bef_stmt:17568*/
ret_realsmith_RNwdpXwoOc = (/*TAG6:STA*/((int)(realsmith_HtCJcipgEM((int)(rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc)+(-79), (int)(rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc)+(2))+(int)(rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc)-(95))+rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc)/*TAG6:END:rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc*/ > 0) ? 0 : -1;
/*aft_stmt:17568*/
        /*bef_stmt:17588*/
/*bef_stmt:17588*/
if (/*TAG7:STA*/((int)(realsmith_WUVyrWU3l1((int)(ret_realsmith_RNwdpXwoOc)+(11), (int)(ret_realsmith_RNwdpXwoOc)+(64))+(int)(ret_realsmith_RNwdpXwoOc)-(1))+ret_realsmith_RNwdpXwoOc)/*TAG7:END:ret_realsmith_RNwdpXwoOc*/) return /*TAG8:STA*/((int)(realsmith_proxy_2iDTO7c6aB((int)(ret_realsmith_RNwdpXwoOc)+(17), (unsigned int)(ret_realsmith_RNwdpXwoOc)+(10))+(int)(ret_realsmith_RNwdpXwoOc)-(0))+ret_realsmith_RNwdpXwoOc)/*TAG8:END:ret_realsmith_RNwdpXwoOc*/;
/*aft_stmt:17588*/
/*aft_stmt:17588*/
    }
/*aft_stmt:17596*/
    /*bef_stmt:18005*/
/*bef_stmt:18005*/
if (/*TAG9:STA*/((int)(realsmith_Bn1xQ09zxZ((int)(rdev_realsmith_RNwdpXwoOc.family_realsmith_RNwdpXwoOc)+(59), (unsigned int)(rdev_realsmith_RNwdpXwoOc.family_realsmith_RNwdpXwoOc)+(42), (unsigned int)(rdev_realsmith_RNwdpXwoOc.family_realsmith_RNwdpXwoOc)+(-9), (unsigned int)(rdev_realsmith_RNwdpXwoOc.family_realsmith_RNwdpXwoOc)+(35), (int)(rdev_realsmith_RNwdpXwoOc.family_realsmith_RNwdpXwoOc)+(26), (unsigned int)(rdev_realsmith_RNwdpXwoOc.family_realsmith_RNwdpXwoOc)+(12))+(unsigned int)(rdev_realsmith_RNwdpXwoOc.family_realsmith_RNwdpXwoOc)-(50))+rdev_realsmith_RNwdpXwoOc.family_realsmith_RNwdpXwoOc)/*TAG9:END:rdev_realsmith_RNwdpXwoOc.family_realsmith_RNwdpXwoOc*/ == 1 || /*TAG10:STA*/((int)(realsmith_ddpru7X1Pr((unsigned int)(rdev_realsmith_RNwdpXwoOc.family_realsmith_RNwdpXwoOc)+(85), (int)(rdev_realsmith_RNwdpXwoOc.family_realsmith_RNwdpXwoOc)+(5))+(int)(rdev_realsmith_RNwdpXwoOc.family_realsmith_RNwdpXwoOc)-(12))+rdev_realsmith_RNwdpXwoOc.family_realsmith_RNwdpXwoOc)/*TAG10:END:rdev_realsmith_RNwdpXwoOc.family_realsmith_RNwdpXwoOc*/ == 2) {
        /*bef_stmt:17817*/
if (Tag11_realsmith_RNwdpXwoOc(/*int:18017:18017:17817:e*/pi_realsmith_RNwdpXwoOc.enable_dpm_realsmith_RNwdpXwoOc)) {
            /*bef_stmt:17711*/
ret_realsmith_RNwdpXwoOc = (Tag12_realsmith_RNwdpXwoOc(/*int:18017:18017:17711:e*/rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc) > 0) ? 0 : -1;
/*aft_stmt:17711*/
            /*bef_stmt:17731*/
/*bef_stmt:17731*/
if (Tag13_realsmith_RNwdpXwoOc(/*int:18017:18017:17731:e*/ret_realsmith_RNwdpXwoOc)) return Tag14_realsmith_RNwdpXwoOc(/*int:18017:18017:17731:e*/ret_realsmith_RNwdpXwoOc);
/*aft_stmt:17731*/
/*aft_stmt:17731*/
            /*bef_stmt:17787*/
ret_realsmith_RNwdpXwoOc = (Tag15_realsmith_RNwdpXwoOc(/*int:18017:18017:17787:e*/rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc) > 0) ? 0 : -1;
/*aft_stmt:17787*/
            /*bef_stmt:17807*/
/*bef_stmt:17807*/
if (Tag16_realsmith_RNwdpXwoOc(/*int:18017:18017:17807:e*/ret_realsmith_RNwdpXwoOc)) return Tag17_realsmith_RNwdpXwoOc(/*int:18017:18017:17807:e*/ret_realsmith_RNwdpXwoOc);
/*aft_stmt:17807*/
/*aft_stmt:17807*/
        }
/*aft_stmt:17817*/
    } else {
        /*bef_stmt:17998*/
if (Tag18_realsmith_RNwdpXwoOc(/*int:18017:18017:17998:e*/pi_realsmith_RNwdpXwoOc.enable_dpm_realsmith_RNwdpXwoOc)) {
            /*bef_stmt:17889*/
ret_realsmith_RNwdpXwoOc = (/*TAG19:STA*/((int)(realsmith_emI8mKu1t4((int)(rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc)+(-68), (int)(rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc)+(-75))+(int)(rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc)-(95))+rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc)/*TAG19:END:rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc*/ > 0) ? 0 : -1;
/*aft_stmt:17889*/
            /*bef_stmt:17909*/
/*bef_stmt:17909*/
if (/*TAG20:STA*/((int)(realsmith_wYyOYbEQXD((int)(ret_realsmith_RNwdpXwoOc)+(8), (int)(ret_realsmith_RNwdpXwoOc)+(35), (int)(ret_realsmith_RNwdpXwoOc)+(7))+(int)(ret_realsmith_RNwdpXwoOc)-(43))+ret_realsmith_RNwdpXwoOc)/*TAG20:END:ret_realsmith_RNwdpXwoOc*/) return /*TAG21:STA*/((int)(realsmith_proxy_YDzC1IBGmY((int)(ret_realsmith_RNwdpXwoOc)+(5), (int)(ret_realsmith_RNwdpXwoOc)+(2), (int)(ret_realsmith_RNwdpXwoOc)+(2))+(int)(ret_realsmith_RNwdpXwoOc)-(2))+ret_realsmith_RNwdpXwoOc)/*TAG21:END:ret_realsmith_RNwdpXwoOc*/;
/*aft_stmt:17909*/
/*aft_stmt:17909*/
            /*bef_stmt:17968*/
ret_realsmith_RNwdpXwoOc = (/*TAG22:STA*/((int)(realsmith_yOLMg8BEp8((int)(rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc)+(-15), (int)(rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc)+(-73), (int)(rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc)+(-68), (int)(rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc)+(-42), (int)(rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc)+(-15))+(int)(rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc)-(95))+rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc)/*TAG22:END:rdev_realsmith_RNwdpXwoOc.pm_realsmith_RNwdpXwoOc.ac_power_realsmith_RNwdpXwoOc*/ > 0) ? 0 : -1;
/*aft_stmt:17968*/
            /*bef_stmt:17988*/
/*bef_stmt:17988*/
if (/*TAG23:STA*/((int)(realsmith_proxy_34LPwin227((int)(ret_realsmith_RNwdpXwoOc)+(1), (int)(ret_realsmith_RNwdpXwoOc)+(70), (int)(ret_realsmith_RNwdpXwoOc)+(20), (int)(ret_realsmith_RNwdpXwoOc)+(36), (int)(ret_realsmith_RNwdpXwoOc)+(35), (int)(ret_realsmith_RNwdpXwoOc)+(43))+(int)(ret_realsmith_RNwdpXwoOc)-(0))+ret_realsmith_RNwdpXwoOc)/*TAG23:END:ret_realsmith_RNwdpXwoOc*/) return /*TAG24:STA*/((int)(realsmith_CnaIOusG85((int)(ret_realsmith_RNwdpXwoOc)+(18), (int)(ret_realsmith_RNwdpXwoOc)+(15))+(unsigned int)(ret_realsmith_RNwdpXwoOc)-(15))+ret_realsmith_RNwdpXwoOc)/*TAG24:END:ret_realsmith_RNwdpXwoOc*/;
/*aft_stmt:17988*/
/*aft_stmt:17988*/
        }
/*aft_stmt:17998*/
    }
/*aft_stmt:18005*/
/*aft_stmt:18005*/
    return 0;
}



#include "stdlib.h"
struct pwm_state_BztPs7 {
    int enabled_realsmith_Ekh7QshLrV;
    unsigned long duty_cycle_realsmith_Ekh7QshLrV;
};
struct pwm_fan_ctx_BztPs7 {
    int irq_realsmith_Ekh7QshLrV;
    int pulses_per_revolution_realsmith_Ekh7QshLrV;
    struct pwm_state_BztPs7 *pwm_realsmith_Ekh7QshLrV;
    unsigned long pwm_value_realsmith_Ekh7QshLrV;
    unsigned long sample_start_realsmith_Ekh7QshLrV;
    unsigned long rpm_timer_realsmith_Ekh7QshLrV;
    void *reg_en_realsmith_Ekh7QshLrV;
    void *lock_realsmith_Ekh7QshLrV;
};
int realsmith_Ekh7QshLrV(int irq_realsmith_Ekh7QshLrV, int ppr_realsmith_Ekh7QshLrV, int *pwm_enabled_realsmith_Ekh7QshLrV, unsigned long *duty_cycle_realsmith_Ekh7QshLrV) {
    struct pwm_fan_ctx_BztPs7 *ctx_realsmith_Ekh7QshLrV;
    int ret_realsmith_Ekh7QshLrV = 0;
    ctx_realsmith_Ekh7QshLrV = (malloc(sizeof(*ctx_realsmith_Ekh7QshLrV)));
    if (!ctx_realsmith_Ekh7QshLrV)
        return -1;
    ctx_realsmith_Ekh7QshLrV->lock_realsmith_Ekh7QshLrV = ((void*)0);
    ctx_realsmith_Ekh7QshLrV->pwm_realsmith_Ekh7QshLrV = (malloc(sizeof(struct pwm_state_BztPs7)));
    if (!ctx_realsmith_Ekh7QshLrV->pwm_realsmith_Ekh7QshLrV) {
        (free(ctx_realsmith_Ekh7QshLrV));
        return -1;
    }
    ctx_realsmith_Ekh7QshLrV->irq_realsmith_Ekh7QshLrV = irq_realsmith_Ekh7QshLrV;
    ctx_realsmith_Ekh7QshLrV->pulses_per_revolution_realsmith_Ekh7QshLrV = ppr_realsmith_Ekh7QshLrV;
    if (ctx_realsmith_Ekh7QshLrV->pulses_per_revolution_realsmith_Ekh7QshLrV <= 0) {
        (free(ctx_realsmith_Ekh7QshLrV->pwm_realsmith_Ekh7QshLrV));
        (free(ctx_realsmith_Ekh7QshLrV));
        return -2;
    }
    ctx_realsmith_Ekh7QshLrV->pwm_value_realsmith_Ekh7QshLrV = 255;
    ctx_realsmith_Ekh7QshLrV->pwm_realsmith_Ekh7QshLrV->duty_cycle_realsmith_Ekh7QshLrV = 254;
    ctx_realsmith_Ekh7QshLrV->pwm_realsmith_Ekh7QshLrV->enabled_realsmith_Ekh7QshLrV = 1;
    if (pwm_enabled_realsmith_Ekh7QshLrV)
        *pwm_enabled_realsmith_Ekh7QshLrV = ctx_realsmith_Ekh7QshLrV->pwm_realsmith_Ekh7QshLrV->enabled_realsmith_Ekh7QshLrV;
    if (duty_cycle_realsmith_Ekh7QshLrV)
        *duty_cycle_realsmith_Ekh7QshLrV = ctx_realsmith_Ekh7QshLrV->pwm_realsmith_Ekh7QshLrV->duty_cycle_realsmith_Ekh7QshLrV;
    (free(ctx_realsmith_Ekh7QshLrV->pwm_realsmith_Ekh7QshLrV));
    (free(ctx_realsmith_Ekh7QshLrV));
    return ret_realsmith_Ekh7QshLrV;
}
int realsmith_proxy_PS8jy2y6EZ(int p_0_xgmpPfnYRr, int p_1_DcZV3HIAMm, int p_2_hqrV89Awg9, unsigned long p_3_iNuV5H3ilT) {
int proxy_zck8jZFMft[14] = { 14, p_2_hqrV89Awg9, 46, p_2_hqrV89Awg9, p_2_hqrV89Awg9, 77, p_2_hqrV89Awg9, 9, 9, p_2_hqrV89Awg9, 35, p_2_hqrV89Awg9, 35, p_2_hqrV89Awg9 };
unsigned long proxy_Xki4Y5zjn1[10] = { 9, 10, 46, p_3_iNuV5H3ilT, 99, p_3_iNuV5H3ilT, p_3_iNuV5H3ilT, 44, p_3_iNuV5H3ilT, p_3_iNuV5H3ilT };
int proxy_ret_pOqMLsnfCC = realsmith_Ekh7QshLrV(p_0_xgmpPfnYRr, p_1_DcZV3HIAMm, proxy_zck8jZFMft, proxy_Xki4Y5zjn1);
return proxy_ret_pOqMLsnfCC;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_w1L2HqcxZK(x) (x)
#define Tag2_realsmith_w1L2HqcxZK(x) (x)
#define Tag3_realsmith_w1L2HqcxZK(x) (x)
#include "stdlib.h"
int realsmith_w1L2HqcxZK(int type_realsmith_w1L2HqcxZK, int hw_context_realsmith_w1L2HqcxZK, int dd_realsmith_w1L2HqcxZK) {
    unsigned long reg_realsmith_w1L2HqcxZK;
    /*bef_stmt:17190*/
unsigned char set_realsmith_w1L2HqcxZK = (/*TAG1:STA*/((int)(realsmith_jqPlecFUPK((int)(type_realsmith_w1L2HqcxZK)+(4))+(int)(type_realsmith_w1L2HqcxZK)-(4))+type_realsmith_w1L2HqcxZK)/*TAG1:END:type_realsmith_w1L2HqcxZK*/ == 1 ? 1 : 0);
/*aft_stmt:17190*/
    reg_realsmith_w1L2HqcxZK = 0;
    /*bef_stmt:17258*/
if (/*TAG2:STA*/((unsigned char)(realsmith_proxy_PS8jy2y6EZ((int)(set_realsmith_w1L2HqcxZK)+(35), (int)(set_realsmith_w1L2HqcxZK)+(36), (int)(set_realsmith_w1L2HqcxZK)+(-58), (unsigned long)(set_realsmith_w1L2HqcxZK)+(-24))+(int)(set_realsmith_w1L2HqcxZK)-(0))+set_realsmith_w1L2HqcxZK)/*TAG2:END:set_realsmith_w1L2HqcxZK*/) {
        reg_realsmith_w1L2HqcxZK &= ~0x1;
    } else {
        reg_realsmith_w1L2HqcxZK |= 0x1;
    }
/*aft_stmt:17258*/
    /*bef_stmt:17274*/
return /*TAG3:STA*/((unsigned long)(realsmith_RNwdpXwoOc((int)(reg_realsmith_w1L2HqcxZK)+(11), (int)(reg_realsmith_w1L2HqcxZK)+(94), (int)(reg_realsmith_w1L2HqcxZK)+(85), (int)(reg_realsmith_w1L2HqcxZK)+(86))+(int)(reg_realsmith_w1L2HqcxZK)-(1))+reg_realsmith_w1L2HqcxZK)/*TAG3:END:reg_realsmith_w1L2HqcxZK*/;
/*aft_stmt:17274*/
}


#include <stdio.h>
#include <inttypes.h>
int main() {
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    transparent_crc(realsmith_w1L2HqcxZK(5,64,79), "realsmith_w1L2HqcxZK(5,64,79)", print_hash_value);
    transparent_crc(realsmith_w1L2HqcxZK(5,64,79), "realsmith_w1L2HqcxZK(5,64,79)", print_hash_value);
    transparent_crc(realsmith_RNwdpXwoOc(12,95,86,87), "realsmith_RNwdpXwoOc(12,95,86,87)", print_hash_value);
    transparent_crc(realsmith_L1NQ8dOCsm(14,95,41,37,93,2,50,28,51,30,83), "realsmith_L1NQ8dOCsm(14,95,41,37,93,2,50,28,51,30,83)", print_hash_value);
    transparent_crc(realsmith_RNwdpXwoOc(12,95,86,87), "realsmith_RNwdpXwoOc(12,95,86,87)", print_hash_value);
    transparent_crc(realsmith_WUVyrWU3l1(11,64), "realsmith_WUVyrWU3l1(11,64)", print_hash_value);
    transparent_crc(realsmith_CnaIOusG85(18,15), "realsmith_CnaIOusG85(18,15)", print_hash_value);
    transparent_crc(realsmith_eNlU5DicN5(88,78,20), "realsmith_eNlU5DicN5(88,78,20)", print_hash_value);
    transparent_crc(realsmith_WUVyrWU3l1(11,64), "realsmith_WUVyrWU3l1(11,64)", print_hash_value);
    transparent_crc(realsmith_7ZZNWyMdb6(87,51,79), "realsmith_7ZZNWyMdb6(87,51,79)", print_hash_value);
    transparent_crc(realsmith_L1NQ8dOCsm(14,95,41,37,93,2,50,28,51,30,83), "realsmith_L1NQ8dOCsm(14,95,41,37,93,2,50,28,51,30,83)", print_hash_value);
    transparent_crc(realsmith_THYGq8CeR4(0,38,0,81), "realsmith_THYGq8CeR4(0,38,0,81)", print_hash_value);
    transparent_crc(realsmith_MxfIh20IAP(13), "realsmith_MxfIh20IAP(13)", print_hash_value);
    transparent_crc(realsmith_2Hhr5xOMDt(32,5), "realsmith_2Hhr5xOMDt(32,5)", print_hash_value);
    transparent_crc(realsmith_yOLMg8BEp8(80,22,27,53,80), "realsmith_yOLMg8BEp8(80,22,27,53,80)", print_hash_value);
    transparent_crc(realsmith_4ma4PoYOdE(38,45), "realsmith_4ma4PoYOdE(38,45)", print_hash_value);
    transparent_crc(realsmith_ddpru7X1Pr(97,17), "realsmith_ddpru7X1Pr(97,17)", print_hash_value);
    transparent_crc(realsmith_proxy_94xYKGRjVY(84,-32), "realsmith_proxy_94xYKGRjVY(84,-32)", print_hash_value);
    transparent_crc(realsmith_QL8qHWvpZF(76,87,64,23,72), "realsmith_QL8qHWvpZF(76,87,64,23,72)", print_hash_value);
    transparent_crc(realsmith_xM4XUBA1jZ(96), "realsmith_xM4XUBA1jZ(96)", print_hash_value);
    transparent_crc(realsmith_G1uyJEyAW8(47,57), "realsmith_G1uyJEyAW8(47,57)", print_hash_value);
    transparent_crc(realsmith_7ZZNWyMdb6(87,51,79), "realsmith_7ZZNWyMdb6(87,51,79)", print_hash_value);
    transparent_crc(realsmith_Hn81Jk8L3I(71), "realsmith_Hn81Jk8L3I(71)", print_hash_value);
    transparent_crc(realsmith_RNwdpXwoOc(12,95,86,87), "realsmith_RNwdpXwoOc(12,95,86,87)", print_hash_value);
    transparent_crc(realsmith_proxy_pFB671HV8e(-80), "realsmith_proxy_pFB671HV8e(-80)", print_hash_value);
    transparent_crc(realsmith_proxy_PlUpbyqkNS(80,25,48,91,-87,27), "realsmith_proxy_PlUpbyqkNS(80,25,48,91,-87,27)", print_hash_value);
    transparent_crc(realsmith_uuL7BUovyW(53,84), "realsmith_uuL7BUovyW(53,84)", print_hash_value);
    transparent_crc(realsmith_Mj31xGzMih(82,22,97,35), "realsmith_Mj31xGzMih(82,22,97,35)", print_hash_value);
    transparent_crc(realsmith_L1NQ8dOCsm(14,95,41,37,93,2,50,28,51,30,83), "realsmith_L1NQ8dOCsm(14,95,41,37,93,2,50,28,51,30,83)", print_hash_value);
    transparent_crc(realsmith_CkjCkhl1e7(35,72), "realsmith_CkjCkhl1e7(35,72)", print_hash_value);
    transparent_crc(realsmith_NJdWlYBj0o(49), "realsmith_NJdWlYBj0o(49)", print_hash_value);
    transparent_crc(realsmith_Nf4s05FTFG(28), "realsmith_Nf4s05FTFG(28)", print_hash_value);
    transparent_crc(realsmith_Mj31xGzMih(82,22,97,35), "realsmith_Mj31xGzMih(82,22,97,35)", print_hash_value);
    transparent_crc(realsmith_K4ZvzvDHvV(56), "realsmith_K4ZvzvDHvV(56)", print_hash_value);
    transparent_crc(realsmith_Nf4s05FTFG(28), "realsmith_Nf4s05FTFG(28)", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-91fa9c15cc4fb9947e7e2f7990f7d5a58845d5cf/bin/gcc -O0 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-91fa9c15cc4fb9947e7e2f7990f7d5a58845d5cf/bin/gcc -O0 -fno-strict-aliasing : 62F073E8 */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-91fa9c15cc4fb9947e7e2f7990f7d5a58845d5cf/bin/gcc -O1 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-91fa9c15cc4fb9947e7e2f7990f7d5a58845d5cf/bin/gcc -O1 -fno-strict-aliasing : 62F073E8 */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-91fa9c15cc4fb9947e7e2f7990f7d5a58845d5cf/bin/gcc -O2 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-91fa9c15cc4fb9947e7e2f7990f7d5a58845d5cf/bin/gcc -O2 -fno-strict-aliasing : 62F073E8 */
/* Compiler crash! Can't compile with /zdata/shaoli/compilers/ccbuilder-compilers/gcc-91fa9c15cc4fb9947e7e2f7990f7d5a58845d5cf/bin/gcc -O3 -fno-strict-aliasing  */

/* Bisection: 3f05d70389f523cf53f9b8fdf56570e8a6ecdb8b */
