#include <csmith.h>
#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_oGYy7XizbG(x) (x)
#define Tag2_realsmith_oGYy7XizbG(x) (x)
#define Tag3_realsmith_oGYy7XizbG(x) (x)
#define Tag4_realsmith_oGYy7XizbG(x) (x)
#define Tag5_realsmith_oGYy7XizbG(x) (x)
#define Tag6_realsmith_oGYy7XizbG(x) (x)
#define Tag7_realsmith_oGYy7XizbG(x) (x)
#include "stdlib.h"
struct nfp_port_wURasg {
    int cpp_realsmith_oGYy7XizbG;
};
struct ethtool_link_ksettings_wURasg {
    struct {
        int autoneg_realsmith_oGYy7XizbG;
        int speed_realsmith_oGYy7XizbG;
    } base_realsmith_oGYy7XizbG;
};
int realsmith_oGYy7XizbG(int cpp_realsmith_oGYy7XizbG, int lanes_realsmith_oGYy7XizbG, int autoneg_realsmith_oGYy7XizbG, int speed_realsmith_oGYy7XizbG, int is_running_realsmith_oGYy7XizbG) {
    /*bef_stmt:17313*/
if (Tag1_realsmith_oGYy7XizbG(/*int:17489:17489:17313:e*/is_running_realsmith_oGYy7XizbG)) {
        return - -16;
    }
/*aft_stmt:17313*/
    int err_realsmith_oGYy7XizbG = 0;
    int nsp_realsmith_oGYy7XizbG = 0;
    /*bef_stmt:17382*/
if (Tag2_realsmith_oGYy7XizbG(/*int:17489:17489:17382:e*/autoneg_realsmith_oGYy7XizbG) == 1) {
    } else {
    }
/*aft_stmt:17382*/
    /*bef_stmt:17448*/
if (Tag3_realsmith_oGYy7XizbG(/*int:17489:17489:17448:e*/speed_realsmith_oGYy7XizbG) != -1) {
        /*bef_stmt:17442*/
/*bef_stmt:17442*/
int adjusted_speed_realsmith_oGYy7XizbG = Tag4_realsmith_oGYy7XizbG(/*int:17489:17489:17442:e*/speed_realsmith_oGYy7XizbG) / Tag5_realsmith_oGYy7XizbG(/*int:17489:17489:17442:e*/lanes_realsmith_oGYy7XizbG);
/*aft_stmt:17442*/
/*aft_stmt:17442*/
    }
/*aft_stmt:17448*/
    /*bef_stmt:17476*/
if (Tag6_realsmith_oGYy7XizbG(/*int:17489:17489:17476:e*/err_realsmith_oGYy7XizbG) > 0) {
        return 0;
    }
/*aft_stmt:17476*/
    /*bef_stmt:17487*/
return Tag7_realsmith_oGYy7XizbG(/*int:17489:17489:17487:e*/err_realsmith_oGYy7XizbG);
/*aft_stmt:17487*/
}



#include "stdlib.h"
int realsmith_z3yUY5Sa8U(int offset_realsmith_z3yUY5Sa8U, int bytes_realsmith_z3yUY5Sa8U, char *dest_realsmith_z3yUY5Sa8U) {
    const unsigned int EC_MEMMAP_SIZE_realsmith_z3yUY5Sa8U = 256;
    const unsigned long EC_LPC_ADDR_MEMMAP_realsmith_z3yUY5Sa8U = 0x1000;
    int i_realsmith_z3yUY5Sa8U = offset_realsmith_z3yUY5Sa8U;
    int cnt_realsmith_z3yUY5Sa8U = 0;
    if (offset_realsmith_z3yUY5Sa8U >= EC_MEMMAP_SIZE_realsmith_z3yUY5Sa8U - bytes_realsmith_z3yUY5Sa8U)
        return -1;
    if (bytes_realsmith_z3yUY5Sa8U) {
        for (int j_realsmith_z3yUY5Sa8U = 0; j_realsmith_z3yUY5Sa8U < bytes_realsmith_z3yUY5Sa8U; j_realsmith_z3yUY5Sa8U++) {
            dest_realsmith_z3yUY5Sa8U[j_realsmith_z3yUY5Sa8U] = (char)(EC_LPC_ADDR_MEMMAP_realsmith_z3yUY5Sa8U + offset_realsmith_z3yUY5Sa8U + j_realsmith_z3yUY5Sa8U);
        }
        return bytes_realsmith_z3yUY5Sa8U;
    }
    for (; i_realsmith_z3yUY5Sa8U < EC_MEMMAP_SIZE_realsmith_z3yUY5Sa8U; i_realsmith_z3yUY5Sa8U++, dest_realsmith_z3yUY5Sa8U++) {
        *dest_realsmith_z3yUY5Sa8U = (char)(EC_LPC_ADDR_MEMMAP_realsmith_z3yUY5Sa8U + i_realsmith_z3yUY5Sa8U);
        cnt_realsmith_z3yUY5Sa8U++;
        if (!*dest_realsmith_z3yUY5Sa8U)
            break;
    }
    return cnt_realsmith_z3yUY5Sa8U;
}
int realsmith_proxy_5Q0Flglee7(int p_0_WagJvSKvmT, int p_1_nWXUkUD1Vi, char p_2_oC0zKJFuiK) {
char proxy_moDsevt3KK[17] = { p_2_oC0zKJFuiK, 0, 55, p_2_oC0zKJFuiK, 92, 39, p_2_oC0zKJFuiK, 5, p_2_oC0zKJFuiK, p_2_oC0zKJFuiK, 73, p_2_oC0zKJFuiK, 1, 33, p_2_oC0zKJFuiK, 9, 11 };
int proxy_ret_Uw0UvLnka0 = realsmith_z3yUY5Sa8U(p_0_WagJvSKvmT, p_1_nWXUkUD1Vi, proxy_moDsevt3KK);
return proxy_ret_Uw0UvLnka0;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_J5RDoQsb4Z(x) (x)
#define Tag2_realsmith_J5RDoQsb4Z(x) (x)
#define Tag3_realsmith_J5RDoQsb4Z(x) (x)
#define Tag4_realsmith_J5RDoQsb4Z(x) (x)
#define Tag5_realsmith_J5RDoQsb4Z(x) (x)
#include "stdlib.h"
int realsmith_J5RDoQsb4Z(int start_ch_realsmith_J5RDoQsb4Z) {
    int i_realsmith_J5RDoQsb4Z;
    int result_realsmith_J5RDoQsb4Z = 0;
    /*bef_stmt:17184*/
/*bef_stmt:17184*/
/*bef_stmt:17184*/
for (i_realsmith_J5RDoQsb4Z = Tag1_realsmith_J5RDoQsb4Z(/*int:17200:17200:17184:e*/start_ch_realsmith_J5RDoQsb4Z); Tag2_realsmith_J5RDoQsb4Z(/*int:17200:17200:17184:e*/i_realsmith_J5RDoQsb4Z) < Tag3_realsmith_J5RDoQsb4Z(/*int:17200:17200:17184:e*/start_ch_realsmith_J5RDoQsb4Z) + 8; i_realsmith_J5RDoQsb4Z++) {
        /*bef_stmt:17175*/
result_realsmith_J5RDoQsb4Z += Tag4_realsmith_J5RDoQsb4Z(/*int:17200:17200:17175:e*/i_realsmith_J5RDoQsb4Z);
/*aft_stmt:17175*/
    }
/*aft_stmt:17184*/
/*aft_stmt:17184*/
/*aft_stmt:17184*/
    /*bef_stmt:17198*/
return Tag5_realsmith_J5RDoQsb4Z(/*int:17200:17200:17198:e*/result_realsmith_J5RDoQsb4Z);
/*aft_stmt:17198*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_W8XWBF8u4V(x) (x)
#define Tag2_realsmith_W8XWBF8u4V(x) (x)
#define Tag3_realsmith_W8XWBF8u4V(x) (x)
#include "stdlib.h"
int realsmith_W8XWBF8u4V(int smi_realsmith_W8XWBF8u4V, unsigned int addr_realsmith_W8XWBF8u4V, unsigned int data_realsmith_W8XWBF8u4V) {
    /*bef_stmt:17184*/
/*bef_stmt:17184*/
/*bef_stmt:17184*/
if (Tag1_realsmith_W8XWBF8u4V(/*int:17194:17194:17184:e*/smi_realsmith_W8XWBF8u4V) < 0 || Tag2_realsmith_W8XWBF8u4V(/*unsigned int:17194:17194:17184:e*/addr_realsmith_W8XWBF8u4V) > 0xFFFFFFFF || Tag3_realsmith_W8XWBF8u4V(/*unsigned int:17194:17194:17184:e*/data_realsmith_W8XWBF8u4V) > 0xFFFFFFFF) {
        return -1;
    }
/*aft_stmt:17184*/
/*aft_stmt:17184*/
/*aft_stmt:17184*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_4gUcrt0eZS(x) (x)
#define Tag2_realsmith_4gUcrt0eZS(x) (x)
#define Tag3_realsmith_4gUcrt0eZS(x) (x)
#define Tag4_realsmith_4gUcrt0eZS(x) (x)
#include "stdint.h"
int realsmith_4gUcrt0eZS(int data_realsmith_4gUcrt0eZS) {
    unsigned short mask_realsmith_4gUcrt0eZS = 0x8000;
    unsigned short result_realsmith_4gUcrt0eZS = 0;
    /*bef_stmt:2096*/
while (Tag1_realsmith_4gUcrt0eZS(/*unsigned short:2112:2112:2096:e*/mask_realsmith_4gUcrt0eZS)) {
        /*bef_stmt:2066*/
/*bef_stmt:2066*/
result_realsmith_4gUcrt0eZS |= (Tag2_realsmith_4gUcrt0eZS(/*int:2112:2112:2066:e*/data_realsmith_4gUcrt0eZS) & Tag3_realsmith_4gUcrt0eZS(/*unsigned short:2112:2112:2066:e*/mask_realsmith_4gUcrt0eZS)) ? 1 : 0;
/*aft_stmt:2066*/
/*aft_stmt:2066*/
        mask_realsmith_4gUcrt0eZS >>= 1;
    }
/*aft_stmt:2096*/
    /*bef_stmt:2110*/
return Tag4_realsmith_4gUcrt0eZS(/*unsigned short:2112:2112:2110:e*/result_realsmith_4gUcrt0eZS);
/*aft_stmt:2110*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_cjSnJG1rWK(x) (x)
#define Tag2_realsmith_cjSnJG1rWK(x) (x)
#define Tag3_realsmith_cjSnJG1rWK(x) (x)
#define Tag4_realsmith_cjSnJG1rWK(x) (x)
#define Tag5_realsmith_cjSnJG1rWK(x) (x)
#include "stdlib.h"
int realsmith_cjSnJG1rWK(int svc_realsmith_cjSnJG1rWK, int cmd_realsmith_cjSnJG1rWK, int addr_realsmith_cjSnJG1rWK) {
    int ret_realsmith_cjSnJG1rWK = 0;
    /*bef_stmt:17194*/
/*bef_stmt:17194*/
if (Tag1_realsmith_cjSnJG1rWK(/*int:17232:17232:17194:e*/svc_realsmith_cjSnJG1rWK) == 1 && Tag2_realsmith_cjSnJG1rWK(/*int:17232:17232:17194:e*/cmd_realsmith_cjSnJG1rWK) == 2) {
        /*bef_stmt:17187*/
ret_realsmith_cjSnJG1rWK = Tag3_realsmith_cjSnJG1rWK(/*int:17232:17232:17187:e*/addr_realsmith_cjSnJG1rWK);
/*aft_stmt:17187*/
    }
/*aft_stmt:17194*/
/*aft_stmt:17194*/
    /*bef_stmt:17230*/
/*bef_stmt:17230*/
return Tag4_realsmith_cjSnJG1rWK(/*int:17232:17232:17230:e*/ret_realsmith_cjSnJG1rWK) < 0 ? Tag5_realsmith_cjSnJG1rWK(/*int:17232:17232:17230:e*/ret_realsmith_cjSnJG1rWK) : 0;
/*aft_stmt:17230*/
/*aft_stmt:17230*/
}



#include "stdlib.h"
struct nfp_mip_Nd1Bwv {
        char name_realsmith_UhacbLx1Ie[256];
    };
int realsmith_UhacbLx1Ie(int cpp_value_realsmith_UhacbLx1Ie) {
    struct nfp_mip_Nd1Bwv {
        char name_realsmith_UhacbLx1Ie[256];
    };
    struct nfp_mip_Nd1Bwv *mip_realsmith_UhacbLx1Ie;
    int err_realsmith_UhacbLx1Ie = 0;
    mip_realsmith_UhacbLx1Ie = (struct nfp_mip_Nd1Bwv *)(malloc(sizeof(struct nfp_mip_Nd1Bwv)));
    if (!mip_realsmith_UhacbLx1Ie)
        return -1;
    if (cpp_value_realsmith_UhacbLx1Ie < 0) {
        (free(mip_realsmith_UhacbLx1Ie));
        return -1;
    }
    for (int i_realsmith_UhacbLx1Ie = 0; i_realsmith_UhacbLx1Ie < sizeof(mip_realsmith_UhacbLx1Ie->name_realsmith_UhacbLx1Ie) - 1; i_realsmith_UhacbLx1Ie++) {
        mip_realsmith_UhacbLx1Ie->name_realsmith_UhacbLx1Ie[i_realsmith_UhacbLx1Ie] = 'A' + (i_realsmith_UhacbLx1Ie % 26);
    }
    mip_realsmith_UhacbLx1Ie->name_realsmith_UhacbLx1Ie[sizeof(mip_realsmith_UhacbLx1Ie->name_realsmith_UhacbLx1Ie) - 1] = '\0';
    (free(mip_realsmith_UhacbLx1Ie));
    return 0;
}

#include "stdint.h"
#include "stdlib.h"
int realsmith_rbaUGVt2rd(signed int *pdesc_realsmith_rbaUGVt2rd, unsigned int val_realsmith_rbaUGVt2rd) {
    unsigned int mask_realsmith_rbaUGVt2rd = (1 << 4) - 1;
    pdesc_realsmith_rbaUGVt2rd[5] = (pdesc_realsmith_rbaUGVt2rd[5] & ~mask_realsmith_rbaUGVt2rd) | ((val_realsmith_rbaUGVt2rd & mask_realsmith_rbaUGVt2rd) << 24);
    return pdesc_realsmith_rbaUGVt2rd[5];
}
int realsmith_proxy_OWheRrtEH5(int p_0_Y3ebkhPICZ, unsigned int p_1_ObMZt8od60) {
int proxy_KacLqazdVe[20] = { 16, 11, 96, p_0_Y3ebkhPICZ, p_0_Y3ebkhPICZ, 17, p_0_Y3ebkhPICZ, 62, p_0_Y3ebkhPICZ, 8, 49, 21, 48, 68, 23, 56, p_0_Y3ebkhPICZ, p_0_Y3ebkhPICZ, 98, 16 };
int proxy_ret_FFGClFPzl1 = realsmith_rbaUGVt2rd(proxy_KacLqazdVe, p_1_ObMZt8od60);
return proxy_ret_FFGClFPzl1;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_jbjbW77Vko(x) (x)
#define Tag2_realsmith_jbjbW77Vko(x) (x)
#define Tag3_realsmith_jbjbW77Vko(x) (x)
#define Tag4_realsmith_jbjbW77Vko(x) (x)
#include "stdlib.h"
int realsmith_jbjbW77Vko(int first_realsmith_jbjbW77Vko, int cmd_realsmith_jbjbW77Vko) {
    /*bef_stmt:17123*/
int crq_first_realsmith_jbjbW77Vko = Tag1_realsmith_jbjbW77Vko(/*int:17205:17205:17123:e*/first_realsmith_jbjbW77Vko);
/*aft_stmt:17123*/
    /*bef_stmt:17149*/
int crq_cmd_realsmith_jbjbW77Vko = Tag2_realsmith_jbjbW77Vko(/*int:17205:17205:17149:e*/cmd_realsmith_jbjbW77Vko);
/*aft_stmt:17149*/
    /*bef_stmt:17195*/
/*bef_stmt:17195*/
if (Tag3_realsmith_jbjbW77Vko(/*int:17205:17205:17195:e*/crq_first_realsmith_jbjbW77Vko) == 0 && Tag4_realsmith_jbjbW77Vko(/*int:17205:17205:17195:e*/crq_cmd_realsmith_jbjbW77Vko) == 0) {
        return 1;
    }
/*aft_stmt:17195*/
/*aft_stmt:17195*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_M4MFsP5BY2(x) (x)
#define Tag2_realsmith_M4MFsP5BY2(x) (x)
#define Tag3_realsmith_M4MFsP5BY2(x) (x)
#define Tag4_realsmith_M4MFsP5BY2(x) (x)
#define Tag5_realsmith_M4MFsP5BY2(x) (x)
#define Tag6_realsmith_M4MFsP5BY2(x) (x)
#define Tag7_realsmith_M4MFsP5BY2(x) (x)
#define Tag8_realsmith_M4MFsP5BY2(x) (x)
#define Tag9_realsmith_M4MFsP5BY2(x) (x)
#define Tag10_realsmith_M4MFsP5BY2(x) (x)
#define Tag11_realsmith_M4MFsP5BY2(x) (x)
#define Tag12_realsmith_M4MFsP5BY2(x) (x)
#define Tag13_realsmith_M4MFsP5BY2(x) (x)
#define Tag14_realsmith_M4MFsP5BY2(x) (x)
#define Tag15_realsmith_M4MFsP5BY2(x) (x)
#define Tag16_realsmith_M4MFsP5BY2(x) (x)
#define Tag17_realsmith_M4MFsP5BY2(x) (x)
#define Tag18_realsmith_M4MFsP5BY2(x) (x)
#define Tag19_realsmith_M4MFsP5BY2(x) (x)
#define Tag20_realsmith_M4MFsP5BY2(x) (x)
#define Tag21_realsmith_M4MFsP5BY2(x) (x)
#define Tag22_realsmith_M4MFsP5BY2(x) (x)
#define Tag23_realsmith_M4MFsP5BY2(x) (x)
#define Tag24_realsmith_M4MFsP5BY2(x) (x)
#define Tag25_realsmith_M4MFsP5BY2(x) (x)
#define Tag26_realsmith_M4MFsP5BY2(x) (x)
#define Tag27_realsmith_M4MFsP5BY2(x) (x)
#define Tag28_realsmith_M4MFsP5BY2(x) (x)
#define Tag29_realsmith_M4MFsP5BY2(x) (x)
#define Tag30_realsmith_M4MFsP5BY2(x) (x)
#define Tag31_realsmith_M4MFsP5BY2(x) (x)
#define Tag32_realsmith_M4MFsP5BY2(x) (x)
#define Tag33_realsmith_M4MFsP5BY2(x) (x)
#define Tag34_realsmith_M4MFsP5BY2(x) (x)
#define Tag35_realsmith_M4MFsP5BY2(x) (x)
#define Tag36_realsmith_M4MFsP5BY2(x) (x)
#define Tag37_realsmith_M4MFsP5BY2(x) (x)
#define Tag38_realsmith_M4MFsP5BY2(x) (x)
#define Tag39_realsmith_M4MFsP5BY2(x) (x)
#define Tag40_realsmith_M4MFsP5BY2(x) (x)
#define Tag41_realsmith_M4MFsP5BY2(x) (x)
#define Tag42_realsmith_M4MFsP5BY2(x) (x)
#include "stdlib.h"
int realsmith_M4MFsP5BY2(int vars_count_realsmith_M4MFsP5BY2, int vars_ecn_marked_realsmith_M4MFsP5BY2, int vars_dropping_realsmith_M4MFsP5BY2, unsigned long vars_p_drop_realsmith_M4MFsP5BY2, unsigned long vars_drop_next_realsmith_M4MFsP5BY2, unsigned long rec_inv_sqrt_realsmith_M4MFsP5BY2, int p_target_realsmith_M4MFsP5BY2, int p_mtu_time_realsmith_M4MFsP5BY2, unsigned long p_interval_realsmith_M4MFsP5BY2, unsigned long now_realsmith_M4MFsP5BY2, unsigned long enqueue_time_realsmith_M4MFsP5BY2, unsigned int bulk_flows_realsmith_M4MFsP5BY2) {
    int drop_realsmith_M4MFsP5BY2 = 0;
    /*bef_stmt:17347*/
/*bef_stmt:17347*/
unsigned long sojourn_realsmith_M4MFsP5BY2 = Tag1_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17347:e*/now_realsmith_M4MFsP5BY2) - Tag2_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17347:e*/enqueue_time_realsmith_M4MFsP5BY2);
/*aft_stmt:17347*/
/*aft_stmt:17347*/
    /*bef_stmt:17384*/
/*bef_stmt:17384*/
unsigned long schedule_realsmith_M4MFsP5BY2 = Tag3_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17384:e*/now_realsmith_M4MFsP5BY2) - Tag4_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17384:e*/vars_drop_next_realsmith_M4MFsP5BY2);
/*aft_stmt:17384*/
/*aft_stmt:17384*/
    /*bef_stmt:17508*/
/*bef_stmt:17508*/
/*bef_stmt:17508*/
/*bef_stmt:17508*/
/*bef_stmt:17508*/
/*bef_stmt:17508*/
/*bef_stmt:17508*/
int over_target_realsmith_M4MFsP5BY2 = Tag5_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17508:e*/sojourn_realsmith_M4MFsP5BY2) > Tag6_realsmith_M4MFsP5BY2(/*int:18125:18125:17508:e*/p_target_realsmith_M4MFsP5BY2) && Tag7_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17508:e*/sojourn_realsmith_M4MFsP5BY2) > Tag8_realsmith_M4MFsP5BY2(/*int:18125:18125:17508:e*/p_mtu_time_realsmith_M4MFsP5BY2) * Tag9_realsmith_M4MFsP5BY2(/*unsigned int:18125:18125:17508:e*/bulk_flows_realsmith_M4MFsP5BY2) * 2 && Tag10_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17508:e*/sojourn_realsmith_M4MFsP5BY2) > Tag11_realsmith_M4MFsP5BY2(/*int:18125:18125:17508:e*/p_mtu_time_realsmith_M4MFsP5BY2) * 4;
/*aft_stmt:17508*/
/*aft_stmt:17508*/
/*aft_stmt:17508*/
/*aft_stmt:17508*/
/*aft_stmt:17508*/
/*aft_stmt:17508*/
/*aft_stmt:17508*/
    /*bef_stmt:17556*/
/*bef_stmt:17556*/
int next_due_realsmith_M4MFsP5BY2 = Tag12_realsmith_M4MFsP5BY2(/*int:18125:18125:17556:e*/vars_count_realsmith_M4MFsP5BY2) && Tag13_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17556:e*/schedule_realsmith_M4MFsP5BY2) >= 0;
/*aft_stmt:17556*/
/*aft_stmt:17556*/
    vars_ecn_marked_realsmith_M4MFsP5BY2 = 0;
    /*bef_stmt:17690*/
/*bef_stmt:17690*/
if (Tag14_realsmith_M4MFsP5BY2(/*int:18125:18125:17690:e*/over_target_realsmith_M4MFsP5BY2)) {
        /*bef_stmt:17630*/
if (!Tag15_realsmith_M4MFsP5BY2(/*int:18125:18125:17630:e*/vars_dropping_realsmith_M4MFsP5BY2)) {
            vars_dropping_realsmith_M4MFsP5BY2 = 1;
            /*bef_stmt:17622*/
/*bef_stmt:17622*/
vars_drop_next_realsmith_M4MFsP5BY2 = Tag16_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17622:e*/now_realsmith_M4MFsP5BY2) + Tag17_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17622:e*/p_interval_realsmith_M4MFsP5BY2);
/*aft_stmt:17622*/
/*aft_stmt:17622*/
        }
/*aft_stmt:17630*/
        /*bef_stmt:17656*/
if (!Tag18_realsmith_M4MFsP5BY2(/*int:18125:18125:17656:e*/vars_count_realsmith_M4MFsP5BY2))
            vars_count_realsmith_M4MFsP5BY2 = 1;
/*aft_stmt:17656*/
    } else if (Tag19_realsmith_M4MFsP5BY2(/*int:18125:18125:17690:e*/vars_dropping_realsmith_M4MFsP5BY2)) {
        vars_dropping_realsmith_M4MFsP5BY2 = 0;
    }
/*aft_stmt:17690*/
/*aft_stmt:17690*/
    /*bef_stmt:17962*/
/*bef_stmt:17962*/
if (Tag20_realsmith_M4MFsP5BY2(/*int:18125:18125:17962:e*/next_due_realsmith_M4MFsP5BY2) && Tag21_realsmith_M4MFsP5BY2(/*int:18125:18125:17962:e*/vars_dropping_realsmith_M4MFsP5BY2)) {
        drop_realsmith_M4MFsP5BY2 = !(vars_ecn_marked_realsmith_M4MFsP5BY2 = ((1) % 2));
        vars_count_realsmith_M4MFsP5BY2++;
        /*bef_stmt:17781*/
if (!Tag22_realsmith_M4MFsP5BY2(/*int:18125:18125:17781:e*/vars_count_realsmith_M4MFsP5BY2))
            vars_count_realsmith_M4MFsP5BY2--;
/*aft_stmt:17781*/
        /*bef_stmt:17807*/
/*bef_stmt:17807*/
vars_drop_next_realsmith_M4MFsP5BY2 = Tag23_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17807:e*/now_realsmith_M4MFsP5BY2) + Tag24_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17807:e*/p_interval_realsmith_M4MFsP5BY2);
/*aft_stmt:17807*/
/*aft_stmt:17807*/
        /*bef_stmt:17833*/
/*bef_stmt:17833*/
schedule_realsmith_M4MFsP5BY2 = Tag25_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17833:e*/now_realsmith_M4MFsP5BY2) - Tag26_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17833:e*/vars_drop_next_realsmith_M4MFsP5BY2);
/*aft_stmt:17833*/
/*aft_stmt:17833*/
    } else {
        /*bef_stmt:17955*/
while (Tag27_realsmith_M4MFsP5BY2(/*int:18125:18125:17955:e*/next_due_realsmith_M4MFsP5BY2)) {
            vars_count_realsmith_M4MFsP5BY2--;
            /*bef_stmt:17880*/
/*bef_stmt:17880*/
vars_drop_next_realsmith_M4MFsP5BY2 = Tag28_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17880:e*/now_realsmith_M4MFsP5BY2) + Tag29_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17880:e*/p_interval_realsmith_M4MFsP5BY2);
/*aft_stmt:17880*/
/*aft_stmt:17880*/
            /*bef_stmt:17906*/
/*bef_stmt:17906*/
schedule_realsmith_M4MFsP5BY2 = Tag30_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17906:e*/now_realsmith_M4MFsP5BY2) - Tag31_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17906:e*/vars_drop_next_realsmith_M4MFsP5BY2);
/*aft_stmt:17906*/
/*aft_stmt:17906*/
            /*bef_stmt:17945*/
/*bef_stmt:17945*/
next_due_realsmith_M4MFsP5BY2 = Tag32_realsmith_M4MFsP5BY2(/*int:18125:18125:17945:e*/vars_count_realsmith_M4MFsP5BY2) && Tag33_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:17945:e*/schedule_realsmith_M4MFsP5BY2) >= 0;
/*aft_stmt:17945*/
/*aft_stmt:17945*/
        }
/*aft_stmt:17955*/
    }
/*aft_stmt:17962*/
/*aft_stmt:17962*/
    /*bef_stmt:18019*/
/*bef_stmt:18019*/
if (Tag34_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:18019:e*/vars_p_drop_realsmith_M4MFsP5BY2))
        drop_realsmith_M4MFsP5BY2 |= ((1) % 100 < Tag35_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:18019:e*/vars_p_drop_realsmith_M4MFsP5BY2));
/*aft_stmt:18019*/
/*aft_stmt:18019*/
    /*bef_stmt:18110*/
/*bef_stmt:18110*/
/*bef_stmt:18110*/
/*bef_stmt:18110*/
/*bef_stmt:18110*/
/*bef_stmt:18110*/
if (!Tag36_realsmith_M4MFsP5BY2(/*int:18125:18125:18110:e*/vars_count_realsmith_M4MFsP5BY2))
        vars_drop_next_realsmith_M4MFsP5BY2 = Tag37_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:18110:e*/now_realsmith_M4MFsP5BY2) + Tag38_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:18110:e*/p_interval_realsmith_M4MFsP5BY2);
    else if (Tag39_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:18110:e*/schedule_realsmith_M4MFsP5BY2) > 0 && !Tag40_realsmith_M4MFsP5BY2(/*int:18125:18125:18110:e*/drop_realsmith_M4MFsP5BY2))
        vars_drop_next_realsmith_M4MFsP5BY2 = Tag41_realsmith_M4MFsP5BY2(/*unsigned long:18125:18125:18110:e*/now_realsmith_M4MFsP5BY2);
/*aft_stmt:18110*/
/*aft_stmt:18110*/
/*aft_stmt:18110*/
/*aft_stmt:18110*/
/*aft_stmt:18110*/
/*aft_stmt:18110*/
    /*bef_stmt:18123*/
return Tag42_realsmith_M4MFsP5BY2(/*int:18125:18125:18123:e*/drop_realsmith_M4MFsP5BY2);
/*aft_stmt:18123*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag2_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag3_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag4_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag5_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag6_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag7_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag8_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag9_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag10_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag11_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag12_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag13_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag14_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag15_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag16_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag17_realsmith_proxy_WlW3JyF0Mo(x) (x)
#define Tag18_realsmith_proxy_WlW3JyF0Mo(x) (x)
#include "stdlib.h"
int realsmith_3youSs3IBT(int env_name_realsmith_3youSs3IBT, int env_value_realsmith_3youSs3IBT, int envc_realsmith_3youSs3IBT, int *envp_names_realsmith_3youSs3IBT, int *envp_values_realsmith_3youSs3IBT, int *envp_is_not_realsmith_3youSs3IBT, unsigned char *checked_realsmith_3youSs3IBT) {
    int i_realsmith_3youSs3IBT;
    int result_realsmith_3youSs3IBT;
    int name_matches_realsmith_3youSs3IBT;
    int value_matches_realsmith_3youSs3IBT;
    /*bef_stmt:17604*/
/*bef_stmt:17604*/
for (i_realsmith_3youSs3IBT = 0; Tag1_realsmith_proxy_WlW3JyF0Mo(/*int:17617:17617:17604:e*/i_realsmith_3youSs3IBT) < Tag2_realsmith_proxy_WlW3JyF0Mo(/*int:17617:17617:17604:e*/envc_realsmith_3youSs3IBT); i_realsmith_3youSs3IBT++) {
        /*bef_stmt:17354*/
/*bef_stmt:17354*/
name_matches_realsmith_3youSs3IBT = (Tag3_realsmith_proxy_WlW3JyF0Mo(/*int:17617:17617:17354:e*/env_name_realsmith_3youSs3IBT) == envp_names_realsmith_3youSs3IBT[Tag4_realsmith_proxy_WlW3JyF0Mo(/*int:17617:17617:17354:e*/i_realsmith_3youSs3IBT)]);
/*aft_stmt:17354*/
/*aft_stmt:17354*/
        /*bef_stmt:17369*/
if (!Tag5_realsmith_proxy_WlW3JyF0Mo(/*int:17617:17617:17369:e*/name_matches_realsmith_3youSs3IBT))
            continue;
/*aft_stmt:17369*/
        /*bef_stmt:17398*/
checked_realsmith_3youSs3IBT[Tag6_realsmith_proxy_WlW3JyF0Mo(/*int:17617:17617:17398:e*/i_realsmith_3youSs3IBT)] = 1;
/*aft_stmt:17398*/
        /*bef_stmt:17571*/
if (envp_values_realsmith_3youSs3IBT[Tag7_realsmith_proxy_WlW3JyF0Mo(/*int:17617:17617:17571:e*/i_realsmith_3youSs3IBT)]) {
            /*bef_stmt:17465*/
/*bef_stmt:17465*/
value_matches_realsmith_3youSs3IBT = (Tag8_realsmith_proxy_WlW3JyF0Mo(/*int:17617:17617:17465:e*/env_value_realsmith_3youSs3IBT) == envp_values_realsmith_3youSs3IBT[Tag9_realsmith_proxy_WlW3JyF0Mo(/*int:17617:17617:17465:e*/i_realsmith_3youSs3IBT)]);
/*aft_stmt:17465*/
/*aft_stmt:17465*/
            /*bef_stmt:17517*/
/*bef_stmt:17517*/
/*bef_stmt:17517*/
result_realsmith_3youSs3IBT = envp_is_not_realsmith_3youSs3IBT[Tag10_realsmith_proxy_WlW3JyF0Mo(/*int:17617:17617:17517:e*/i_realsmith_3youSs3IBT)] ? !Tag11_realsmith_proxy_WlW3JyF0Mo(/*int:17617:17617:17517:e*/value_matches_realsmith_3youSs3IBT) : Tag12_realsmith_proxy_WlW3JyF0Mo(/*int:17617:17617:17517:e*/value_matches_realsmith_3youSs3IBT);
/*aft_stmt:17517*/
/*aft_stmt:17517*/
/*aft_stmt:17517*/
        } else {
            /*bef_stmt:17564*/
result_realsmith_3youSs3IBT = envp_is_not_realsmith_3youSs3IBT[Tag13_realsmith_proxy_WlW3JyF0Mo(/*int:17617:17617:17564:e*/i_realsmith_3youSs3IBT)] ? 1 : 0;
/*aft_stmt:17564*/
        }
/*aft_stmt:17571*/
        /*bef_stmt:17593*/
if (!Tag14_realsmith_proxy_WlW3JyF0Mo(/*int:17617:17617:17593:e*/result_realsmith_3youSs3IBT))
            return 0;
/*aft_stmt:17593*/
    }
/*aft_stmt:17604*/
/*aft_stmt:17604*/
    return 1;
}
int realsmith_proxy_WlW3JyF0Mo(int p_0_oXa7UHijNp, int p_1_a5tRU5Fsee, int p_2_EOkl5OEJH8, int p_3_y5gqGbC6sH, int p_4_N6mVLSFHFS, int p_5_PO2avBQmMH, unsigned char p_6_JajElKyNiA) {
/*bef_stmt:17894*/
/*bef_stmt:17894*/
/*bef_stmt:17894*/
int proxy_ret_qBqcBixxss = realsmith_3youSs3IBT(Tag15_realsmith_proxy_WlW3JyF0Mo(/*int:17906:17906:17894:e*/p_0_oXa7UHijNp), Tag16_realsmith_proxy_WlW3JyF0Mo(/*int:17906:17906:17894:e*/p_1_a5tRU5Fsee), Tag17_realsmith_proxy_WlW3JyF0Mo(/*int:17906:17906:17894:e*/p_2_EOkl5OEJH8), &(p_3_y5gqGbC6sH), &(p_4_N6mVLSFHFS), &(p_5_PO2avBQmMH), &(p_6_JajElKyNiA));
/*aft_stmt:17894*/
/*aft_stmt:17894*/
/*aft_stmt:17894*/
/*bef_stmt:17904*/
return Tag18_realsmith_proxy_WlW3JyF0Mo(/*int:17906:17906:17904:e*/proxy_ret_qBqcBixxss);
/*aft_stmt:17904*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_pmyZc5BdOF(x) (x)
#define Tag2_realsmith_pmyZc5BdOF(x) (x)
#define Tag3_realsmith_pmyZc5BdOF(x) (x)
#define Tag4_realsmith_pmyZc5BdOF(x) (x)
#include "stdint.h"
int realsmith_pmyZc5BdOF(int oldval_realsmith_pmyZc5BdOF, int led_num_realsmith_pmyZc5BdOF, int state_realsmith_pmyZc5BdOF) {
    /*bef_stmt:2106*/
/*bef_stmt:2106*/
/*bef_stmt:2106*/
/*bef_stmt:2106*/
return (Tag1_realsmith_pmyZc5BdOF(/*int:2108:2108:2106:e*/oldval_realsmith_pmyZc5BdOF) & (~(0x3 << (Tag2_realsmith_pmyZc5BdOF(/*int:2108:2108:2106:e*/led_num_realsmith_pmyZc5BdOF) << 1)))) |
           ((Tag3_realsmith_pmyZc5BdOF(/*int:2108:2108:2106:e*/state_realsmith_pmyZc5BdOF) & 0x3) << (Tag4_realsmith_pmyZc5BdOF(/*int:2108:2108:2106:e*/led_num_realsmith_pmyZc5BdOF) << 1));
/*aft_stmt:2106*/
/*aft_stmt:2106*/
/*aft_stmt:2106*/
/*aft_stmt:2106*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_S86uDGfMpY(x) (x)
#define Tag2_realsmith_S86uDGfMpY(x) (x)
#define Tag3_realsmith_S86uDGfMpY(x) (x)
#define Tag4_realsmith_S86uDGfMpY(x) (x)
#define Tag5_realsmith_S86uDGfMpY(x) (x)
#define Tag6_realsmith_S86uDGfMpY(x) (x)
#define Tag7_realsmith_S86uDGfMpY(x) (x)
#define Tag8_realsmith_S86uDGfMpY(x) (x)
#include "stdbool.h"
struct nsproxy_hH1yUj {
    int ipc_ns_realsmith_S86uDGfMpY;
};
struct ns_common_hH1yUj {
    int dummy_realsmith_S86uDGfMpY;
};
struct ipc_namespace_hH1yUj {
    int user_ns_realsmith_S86uDGfMpY;
};
int realsmith_S86uDGfMpY(int nsproxy_ipc_ns_realsmith_S86uDGfMpY, int new_user_ns_realsmith_S86uDGfMpY, int current_user_ns_realsmith_S86uDGfMpY) {
    struct nsproxy_hH1yUj nsproxy_realsmith_S86uDGfMpY;
    /*bef_stmt:753*/
nsproxy_realsmith_S86uDGfMpY.ipc_ns_realsmith_S86uDGfMpY = Tag1_realsmith_S86uDGfMpY(/*int:1024:1024:753:e*/nsproxy_ipc_ns_realsmith_S86uDGfMpY);
/*aft_stmt:753*/
    struct ipc_namespace_hH1yUj ns_realsmith_S86uDGfMpY;
    /*bef_stmt:811*/
ns_realsmith_S86uDGfMpY.user_ns_realsmith_S86uDGfMpY = Tag2_realsmith_S86uDGfMpY(/*int:1024:1024:811:e*/new_user_ns_realsmith_S86uDGfMpY);
/*aft_stmt:811*/
    /*bef_stmt:869*/
_Bool ns_capable_user_ns_realsmith_S86uDGfMpY = (Tag3_realsmith_S86uDGfMpY(/*int:1024:1024:869:e*/ns_realsmith_S86uDGfMpY.user_ns_realsmith_S86uDGfMpY) == 1);
/*aft_stmt:869*/
    /*bef_stmt:909*/
_Bool current_capable_realsmith_S86uDGfMpY = (Tag4_realsmith_S86uDGfMpY(/*int:1024:1024:909:e*/current_user_ns_realsmith_S86uDGfMpY) == 1);
/*aft_stmt:909*/
    /*bef_stmt:948*/
/*bef_stmt:948*/
if (!Tag5_realsmith_S86uDGfMpY(/*_Bool:1024:1024:948:e*/ns_capable_user_ns_realsmith_S86uDGfMpY) || !Tag6_realsmith_S86uDGfMpY(/*_Bool:1024:1024:948:e*/current_capable_realsmith_S86uDGfMpY)) {
        return -1;
    }
/*aft_stmt:948*/
/*aft_stmt:948*/
    /*bef_stmt:975*/
nsproxy_realsmith_S86uDGfMpY.ipc_ns_realsmith_S86uDGfMpY = Tag7_realsmith_S86uDGfMpY(/*int:1024:1024:975:e*/nsproxy_realsmith_S86uDGfMpY.ipc_ns_realsmith_S86uDGfMpY);
/*aft_stmt:975*/
    /*bef_stmt:1010*/
nsproxy_realsmith_S86uDGfMpY.ipc_ns_realsmith_S86uDGfMpY = Tag8_realsmith_S86uDGfMpY(/*int:1024:1024:1010:e*/nsproxy_realsmith_S86uDGfMpY.ipc_ns_realsmith_S86uDGfMpY) + 1;
/*aft_stmt:1010*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_j5N6efx5lt(x) (x)
#include "stdlib.h"
int realsmith_j5N6efx5lt(long unsigned int size_realsmith_j5N6efx5lt) {
    long unsigned int offset_realsmith_j5N6efx5lt = 0;
    /*bef_stmt:17117*/
return Tag1_realsmith_j5N6efx5lt(/*unsigned long:17119:17119:17117:e*/size_realsmith_j5N6efx5lt);
/*aft_stmt:17117*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_QnWfQsjN36(x) (x)
#define Tag2_realsmith_QnWfQsjN36(x) (x)
#define Tag3_realsmith_QnWfQsjN36(x) (x)
#define Tag4_realsmith_QnWfQsjN36(x) (x)
#define Tag5_realsmith_QnWfQsjN36(x) (x)
#define Tag6_realsmith_QnWfQsjN36(x) (x)
#define Tag7_realsmith_QnWfQsjN36(x) (x)
#define Tag8_realsmith_QnWfQsjN36(x) (x)
#define Tag9_realsmith_QnWfQsjN36(x) (x)
#include "stdint.h"
int realsmith_QnWfQsjN36(unsigned int tRFC_realsmith_QnWfQsjN36) {
    unsigned int reg_04_realsmith_QnWfQsjN36 = 0;
    unsigned int reg_14_realsmith_QnWfQsjN36 = 0;
    unsigned int value_1_realsmith_QnWfQsjN36 = 0x41424344;
    unsigned int value_2_realsmith_QnWfQsjN36 = 0x35363738;
    unsigned int value_3_realsmith_QnWfQsjN36 = 0x292A2B2C;
    /*bef_stmt:2377*/
/*bef_stmt:2377*/
/*bef_stmt:2377*/
if (Tag1_realsmith_QnWfQsjN36(/*unsigned int:2418:2418:2377:e*/value_1_realsmith_QnWfQsjN36) == 0x41424344) {
        reg_04_realsmith_QnWfQsjN36 |= 0x03;
        /*bef_stmt:2166*/
reg_14_realsmith_QnWfQsjN36 |= (Tag2_realsmith_QnWfQsjN36(/*unsigned int:2418:2418:2166:e*/tRFC_realsmith_QnWfQsjN36) >> 24) & 0xFF;
/*aft_stmt:2166*/
    } else if (Tag3_realsmith_QnWfQsjN36(/*unsigned int:2418:2418:2377:e*/value_2_realsmith_QnWfQsjN36) == 0x35363738) {
        reg_04_realsmith_QnWfQsjN36 |= 0x02;
        /*bef_stmt:2245*/
reg_14_realsmith_QnWfQsjN36 |= (Tag4_realsmith_QnWfQsjN36(/*unsigned int:2418:2418:2245:e*/tRFC_realsmith_QnWfQsjN36) >> 16) & 0xFF;
/*aft_stmt:2245*/
    } else if (Tag5_realsmith_QnWfQsjN36(/*unsigned int:2418:2418:2377:e*/value_3_realsmith_QnWfQsjN36) == 0x292A2B2C) {
        reg_04_realsmith_QnWfQsjN36 |= 0x01;
        /*bef_stmt:2324*/
reg_14_realsmith_QnWfQsjN36 |= (Tag6_realsmith_QnWfQsjN36(/*unsigned int:2418:2418:2324:e*/tRFC_realsmith_QnWfQsjN36) >> 8) & 0xFF;
/*aft_stmt:2324*/
    } else {
        /*bef_stmt:2356*/
reg_14_realsmith_QnWfQsjN36 |= Tag7_realsmith_QnWfQsjN36(/*unsigned int:2418:2418:2356:e*/tRFC_realsmith_QnWfQsjN36) & 0xFF;
/*aft_stmt:2356*/
    }
/*aft_stmt:2377*/
/*aft_stmt:2377*/
/*aft_stmt:2377*/
    /*bef_stmt:2416*/
/*bef_stmt:2416*/
return Tag8_realsmith_QnWfQsjN36(/*unsigned int:2418:2418:2416:e*/reg_04_realsmith_QnWfQsjN36) | (Tag9_realsmith_QnWfQsjN36(/*unsigned int:2418:2418:2416:e*/reg_14_realsmith_QnWfQsjN36) << 8);
/*aft_stmt:2416*/
/*aft_stmt:2416*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_H00CfBBMhx(x) (x)
#define Tag2_realsmith_H00CfBBMhx(x) (x)
#define Tag3_realsmith_H00CfBBMhx(x) (x)
#define Tag4_realsmith_H00CfBBMhx(x) (x)
#include "stdlib.h"
unsigned int realsmith_H00CfBBMhx(unsigned int blocksize_realsmith_H00CfBBMhx, unsigned int infosize_realsmith_H00CfBBMhx, int has_metadata_csum_realsmith_H00CfBBMhx) {
    /*bef_stmt:17176*/
/*bef_stmt:17176*/
unsigned int entry_space_realsmith_H00CfBBMhx = Tag1_realsmith_H00CfBBMhx(/*unsigned int:17233:17233:17176:e*/blocksize_realsmith_H00CfBBMhx) - (4 + 8) - Tag2_realsmith_H00CfBBMhx(/*unsigned int:17233:17233:17176:e*/infosize_realsmith_H00CfBBMhx);
/*aft_stmt:17176*/
/*aft_stmt:17176*/
    /*bef_stmt:17203*/
if (Tag3_realsmith_H00CfBBMhx(/*int:17233:17233:17203:e*/has_metadata_csum_realsmith_H00CfBBMhx))
        entry_space_realsmith_H00CfBBMhx -= sizeof(unsigned long);
/*aft_stmt:17203*/
    /*bef_stmt:17231*/
return Tag4_realsmith_H00CfBBMhx(/*unsigned int:17233:17233:17231:e*/entry_space_realsmith_H00CfBBMhx) / sizeof(unsigned long);
/*aft_stmt:17231*/
}



#include "stdlib.h"
typedef struct {
    int protect_frames_realsmith_SGroeTYWjr;
    int operational_realsmith_SGroeTYWjr;
} macsec_secy_jc8s0T;
typedef struct {
    macsec_secy_jc8s0T secy_realsmith_SGroeTYWjr;
    int tx_dropped_realsmith_SGroeTYWjr;
} net_device_jc8s0T;
typedef struct {
    int len_realsmith_SGroeTYWjr;
} sk_buff_jc8s0T;
int realsmith_SGroeTYWjr(int skb_len_realsmith_SGroeTYWjr, int dev_protect_frames_realsmith_SGroeTYWjr, int dev_operational_realsmith_SGroeTYWjr, int *dev_tx_dropped_realsmith_SGroeTYWjr) {
    sk_buff_jc8s0T skb_realsmith_SGroeTYWjr;
    net_device_jc8s0T dev_realsmith_SGroeTYWjr;
    int ret_realsmith_SGroeTYWjr, len_realsmith_SGroeTYWjr;
    skb_realsmith_SGroeTYWjr.len_realsmith_SGroeTYWjr = skb_len_realsmith_SGroeTYWjr;
    dev_realsmith_SGroeTYWjr.secy_realsmith_SGroeTYWjr.protect_frames_realsmith_SGroeTYWjr = dev_protect_frames_realsmith_SGroeTYWjr;
    dev_realsmith_SGroeTYWjr.secy_realsmith_SGroeTYWjr.operational_realsmith_SGroeTYWjr = dev_operational_realsmith_SGroeTYWjr;
    dev_realsmith_SGroeTYWjr.tx_dropped_realsmith_SGroeTYWjr = 0;
    if (!dev_realsmith_SGroeTYWjr.secy_realsmith_SGroeTYWjr.protect_frames_realsmith_SGroeTYWjr) {
        len_realsmith_SGroeTYWjr = skb_realsmith_SGroeTYWjr.len_realsmith_SGroeTYWjr;
        ret_realsmith_SGroeTYWjr = 0;
        return ret_realsmith_SGroeTYWjr;
    }
    if (!dev_realsmith_SGroeTYWjr.secy_realsmith_SGroeTYWjr.operational_realsmith_SGroeTYWjr) {
        dev_realsmith_SGroeTYWjr.tx_dropped_realsmith_SGroeTYWjr++;
        return 0;
    }
    if (skb_realsmith_SGroeTYWjr.len_realsmith_SGroeTYWjr < 0) {
        dev_realsmith_SGroeTYWjr.tx_dropped_realsmith_SGroeTYWjr++;
        return 0;
    }
    len_realsmith_SGroeTYWjr = skb_realsmith_SGroeTYWjr.len_realsmith_SGroeTYWjr;
    ret_realsmith_SGroeTYWjr = 0;
    return ret_realsmith_SGroeTYWjr;
}
int realsmith_proxy_lfoYOmsidE(int p_0_FrV5y5Qmxw, int p_1_0XS4Qn5z3H, int p_2_mDnrCEtiQN, int p_3_A0BVIKgxao) {
int proxy_eev4WJrsMX[19] = { p_3_A0BVIKgxao, p_3_A0BVIKgxao, 27, p_3_A0BVIKgxao, 87, p_3_A0BVIKgxao, 80, p_3_A0BVIKgxao, p_3_A0BVIKgxao, 19, 67, p_3_A0BVIKgxao, 27, 84, 61, p_3_A0BVIKgxao, p_3_A0BVIKgxao, 64, 88 };
int proxy_ret_Tn2pdqp0Ml = realsmith_SGroeTYWjr(p_0_FrV5y5Qmxw, p_1_0XS4Qn5z3H, p_2_mDnrCEtiQN, proxy_eev4WJrsMX);
return proxy_ret_Tn2pdqp0Ml;
}


#include "stdlib.h"
int realsmith_PRD7ZpVilY(int *keymap_realsmith_PRD7ZpVilY, int kp_enabled_realsmith_PRD7ZpVilY, int active_time_realsmith_PRD7ZpVilY, int *keys_down_realsmith_PRD7ZpVilY, int *key_fifo_realsmith_PRD7ZpVilY, int ret_realsmith_PRD7ZpVilY) {
    int old_keys_down_realsmith_PRD7ZpVilY = *keys_down_realsmith_PRD7ZpVilY;
    int i_realsmith_PRD7ZpVilY = 0;
    if (ret_realsmith_PRD7ZpVilY < 0) {
        return -1;
    }
    key_fifo_realsmith_PRD7ZpVilY[ret_realsmith_PRD7ZpVilY] = 0;
    while (key_fifo_realsmith_PRD7ZpVilY[i_realsmith_PRD7ZpVilY]) {
        int event_realsmith_PRD7ZpVilY = key_fifo_realsmith_PRD7ZpVilY[i_realsmith_PRD7ZpVilY++];
        int key_realsmith_PRD7ZpVilY = event_realsmith_PRD7ZpVilY & 0x0F;
        int isdown_realsmith_PRD7ZpVilY = (event_realsmith_PRD7ZpVilY & 0x80) ? 1 : 0;
        unsigned short keycode_realsmith_PRD7ZpVilY = keymap_realsmith_PRD7ZpVilY[key_realsmith_PRD7ZpVilY];
        if (kp_enabled_realsmith_PRD7ZpVilY) {
        }
        if (isdown_realsmith_PRD7ZpVilY)
            (*keys_down_realsmith_PRD7ZpVilY)++;
        else
            (*keys_down_realsmith_PRD7ZpVilY)--;
        if (!old_keys_down_realsmith_PRD7ZpVilY && *keys_down_realsmith_PRD7ZpVilY)
            active_time_realsmith_PRD7ZpVilY = 0;
        if (old_keys_down_realsmith_PRD7ZpVilY && !*keys_down_realsmith_PRD7ZpVilY)
            active_time_realsmith_PRD7ZpVilY = active_time_realsmith_PRD7ZpVilY;
    }
    return *keys_down_realsmith_PRD7ZpVilY;
}
int realsmith_proxy_3UI3d4GJU2(int p_0_qOQlP73hiQ, int p_1_iNJXKedtxl, int p_2_NLvowpdZJG, int p_3_m52zisTRD1, int p_4_Wemaun8Wo0, int p_5_9YKMDcMVTa) {
int proxy_Icd3xYmK0R[11] = { 35, 16, p_0_qOQlP73hiQ, 50, p_0_qOQlP73hiQ, 69, p_0_qOQlP73hiQ, 17, 27, p_0_qOQlP73hiQ, 72 };
int proxy_ret_d6eNeFPO08 = realsmith_PRD7ZpVilY(proxy_Icd3xYmK0R, p_1_iNJXKedtxl, p_2_NLvowpdZJG, &(p_3_m52zisTRD1), &(p_4_Wemaun8Wo0), p_5_9YKMDcMVTa);
return proxy_ret_d6eNeFPO08;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_1qwTITyzx3(x) (x)
#define Tag2_realsmith_1qwTITyzx3(x) (x)
#include "stdbool.h"
struct connection_vg8mgP {
    int agreed_pro_version_realsmith_1qwTITyzx3;
};
struct peer_device_vg8mgP {
    struct connection_vg8mgP *connection_realsmith_1qwTITyzx3;
};
struct drbd_device_vg8mgP {
    struct peer_device_vg8mgP *peer_realsmith_1qwTITyzx3;
};
int realsmith_1qwTITyzx3(int agreed_pro_version_realsmith_1qwTITyzx3) {
    /*bef_stmt:760*/
/*bef_stmt:760*/
return (Tag1_realsmith_1qwTITyzx3(/*int:762:762:760:e*/agreed_pro_version_realsmith_1qwTITyzx3) >= 97 && Tag2_realsmith_1qwTITyzx3(/*int:762:762:760:e*/agreed_pro_version_realsmith_1qwTITyzx3) != 100) ? 1 : 0;
/*aft_stmt:760*/
/*aft_stmt:760*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_h1gjviBSSv(x) (x)
#define Tag2_realsmith_h1gjviBSSv(x) (x)
#define Tag3_realsmith_h1gjviBSSv(x) (x)
#define Tag4_realsmith_h1gjviBSSv(x) (x)
#define Tag5_realsmith_h1gjviBSSv(x) (x)
#include "stdint.h"
int realsmith_h1gjviBSSv(unsigned int dev_realsmith_h1gjviBSSv, unsigned int imask_realsmith_h1gjviBSSv, unsigned short int phy_realsmith_h1gjviBSSv, unsigned int PSM_CONFIG_REG4_realsmith_h1gjviBSSv, unsigned int B0_IMSK_realsmith_h1gjviBSSv, unsigned int B2_TST_CTRL1_realsmith_h1gjviBSSv, unsigned int TST_CFG_WRITE_ON_realsmith_h1gjviBSSv, unsigned int TST_CFG_WRITE_OFF_realsmith_h1gjviBSSv, unsigned int Y2_IS_PHY_QLNK_realsmith_h1gjviBSSv) {
    /*bef_stmt:2142*/
imask_realsmith_h1gjviBSSv &= ~Tag1_realsmith_h1gjviBSSv(/*unsigned int:2272:2272:2142:e*/Y2_IS_PHY_QLNK_realsmith_h1gjviBSSv);
/*aft_stmt:2142*/
    phy_realsmith_h1gjviBSSv |= 1;
    /*bef_stmt:2185*/
unsigned int written_imask_realsmith_h1gjviBSSv = Tag2_realsmith_h1gjviBSSv(/*unsigned int:2272:2272:2185:e*/imask_realsmith_h1gjviBSSv);
/*aft_stmt:2185*/
    /*bef_stmt:2211*/
unsigned short int written_phy_realsmith_h1gjviBSSv = Tag3_realsmith_h1gjviBSSv(/*unsigned short:2272:2272:2211:e*/phy_realsmith_h1gjviBSSv);
/*aft_stmt:2211*/
    /*bef_stmt:2237*/
unsigned int written_tst_ctrl1_on_realsmith_h1gjviBSSv = Tag4_realsmith_h1gjviBSSv(/*unsigned int:2272:2272:2237:e*/TST_CFG_WRITE_ON_realsmith_h1gjviBSSv);
/*aft_stmt:2237*/
    /*bef_stmt:2263*/
unsigned int written_tst_ctrl1_off_realsmith_h1gjviBSSv = Tag5_realsmith_h1gjviBSSv(/*unsigned int:2272:2272:2263:e*/TST_CFG_WRITE_OFF_realsmith_h1gjviBSSv);
/*aft_stmt:2263*/
    return 1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_07Cm296nY0(x) (x)
#define Tag2_realsmith_07Cm296nY0(x) (x)
#include "stdbool.h"
struct sriov_info_d6jsRU {
    int num_VFs_realsmith_07Cm296nY0;
};
int realsmith_07Cm296nY0(int is_physfn_realsmith_07Cm296nY0, int num_VFs_realsmith_07Cm296nY0) {
    /*bef_stmt:639*/
if (!Tag1_realsmith_07Cm296nY0(/*int:652:652:639:e*/is_physfn_realsmith_07Cm296nY0))
        return 0;
/*aft_stmt:639*/
    /*bef_stmt:650*/
return Tag2_realsmith_07Cm296nY0(/*int:652:652:650:e*/num_VFs_realsmith_07Cm296nY0);
/*aft_stmt:650*/
}



#include "stdlib.h"
int realsmith_AhBAOeMGRJ(int lch_realsmith_AhBAOeMGRJ, int dma_mode_realsmith_AhBAOeMGRJ, int *dma_write_func_realsmith_AhBAOeMGRJ, int *dma_read_func_realsmith_AhBAOeMGRJ) {
    int CICR_realsmith_AhBAOeMGRJ = 0;
    int CSR_realsmith_AhBAOeMGRJ = 1;
    int OMAP2_DMA_CSR_CLEAR_MASK_realsmith_AhBAOeMGRJ = 2;
    dma_write_func_realsmith_AhBAOeMGRJ[CICR_realsmith_AhBAOeMGRJ] = lch_realsmith_AhBAOeMGRJ;
    if (dma_mode_realsmith_AhBAOeMGRJ) {
        dma_read_func_realsmith_AhBAOeMGRJ[CSR_realsmith_AhBAOeMGRJ] = lch_realsmith_AhBAOeMGRJ;
    } else {
        dma_write_func_realsmith_AhBAOeMGRJ[OMAP2_DMA_CSR_CLEAR_MASK_realsmith_AhBAOeMGRJ] = lch_realsmith_AhBAOeMGRJ;
    }
    return 0;
}
int realsmith_proxy_lu5nIToCdD(int p_0_ZhRIar4zDN, int p_1_Mb8oL7oLDy, int p_2_kRhb4npL5C, int p_3_eB90CblNdM) {
int proxy_OimM4qd8ZF[17] = { p_2_kRhb4npL5C, p_2_kRhb4npL5C, p_2_kRhb4npL5C, p_2_kRhb4npL5C, p_2_kRhb4npL5C, p_2_kRhb4npL5C, p_2_kRhb4npL5C, 29, p_2_kRhb4npL5C, p_2_kRhb4npL5C, 55, 46, p_2_kRhb4npL5C, p_2_kRhb4npL5C, p_2_kRhb4npL5C, p_2_kRhb4npL5C, p_2_kRhb4npL5C };
int proxy_7L97AfyTCB[12] = { 59, p_3_eB90CblNdM, 91, p_3_eB90CblNdM, 34, p_3_eB90CblNdM, p_3_eB90CblNdM, p_3_eB90CblNdM, p_3_eB90CblNdM, 13, p_3_eB90CblNdM, 20 };
int proxy_ret_XDBGadlEUa = realsmith_AhBAOeMGRJ(p_0_ZhRIar4zDN, p_1_Mb8oL7oLDy, proxy_OimM4qd8ZF, proxy_7L97AfyTCB);
return proxy_ret_XDBGadlEUa;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_qszvgpXsvn(x) (x)
#define Tag2_realsmith_qszvgpXsvn(x) (x)
#include "stdlib.h"
struct perf_event_jDBBCX {
    int dummy_realsmith_qszvgpXsvn;
};
struct perf_event_context_jDBBCX {
    int dummy_realsmith_qszvgpXsvn;
};
int realsmith_qszvgpXsvn(int event_dummy_realsmith_qszvgpXsvn) {
    struct perf_event_jDBBCX event_realsmith_qszvgpXsvn;
    /*bef_stmt:17185*/
event_realsmith_qszvgpXsvn.dummy_realsmith_qszvgpXsvn = Tag1_realsmith_qszvgpXsvn(/*int:17287:17287:17185:e*/event_dummy_realsmith_qszvgpXsvn);
/*aft_stmt:17185*/
    struct perf_event_context_jDBBCX ctx_realsmith_qszvgpXsvn;
    ctx_realsmith_qszvgpXsvn.dummy_realsmith_qszvgpXsvn = 0;
    int result_realsmith_qszvgpXsvn = 1;
    /*bef_stmt:17285*/
return Tag2_realsmith_qszvgpXsvn(/*int:17287:17287:17285:e*/result_realsmith_qszvgpXsvn);
/*aft_stmt:17285*/
}



#include "stdlib.h"
struct slim_controller_gqlAfF {
    int dev_realsmith_IcE5UVSvwb;
};
struct slim_device_gqlAfF {
    int dummy_realsmith_IcE5UVSvwb;
};
int realsmith_IcE5UVSvwb(int ctrl_dev_realsmith_IcE5UVSvwb, int eaddr_realsmith_IcE5UVSvwb) {
    struct slim_device_gqlAfF *sbdev_realsmith_IcE5UVSvwb = ((void*)0);
    if (ctrl_dev_realsmith_IcE5UVSvwb == eaddr_realsmith_IcE5UVSvwb) {
        sbdev_realsmith_IcE5UVSvwb = (struct slim_device_gqlAfF *)(malloc(sizeof(struct slim_device_gqlAfF)));
        sbdev_realsmith_IcE5UVSvwb->dummy_realsmith_IcE5UVSvwb = 1;
    }
    return sbdev_realsmith_IcE5UVSvwb ? sbdev_realsmith_IcE5UVSvwb->dummy_realsmith_IcE5UVSvwb : 0;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_ycGSZLx2a4(x) (x)
#define Tag2_realsmith_proxy_ycGSZLx2a4(x) (x)
#define Tag3_realsmith_proxy_ycGSZLx2a4(x) (x)
#define Tag4_realsmith_proxy_ycGSZLx2a4(x) (x)
#define Tag5_realsmith_proxy_ycGSZLx2a4(x) (x)
#define Tag6_realsmith_proxy_ycGSZLx2a4(x) (x)
#define Tag7_realsmith_proxy_ycGSZLx2a4(x) (x)
#include "stdlib.h"
int realsmith_MUzH6EXF2Q(int curr_nfc_dep_pni_realsmith_MUzH6EXF2Q, int did_realsmith_MUzH6EXF2Q, int *data_exch_realsmith_MUzH6EXF2Q) {
    struct {
        int pfb_realsmith_MUzH6EXF2Q;
        int cmd_realsmith_MUzH6EXF2Q;
        int dir_realsmith_MUzH6EXF2Q;
    } dep_res_realsmith_MUzH6EXF2Q;
    int rc_realsmith_MUzH6EXF2Q = 0;
    dep_res_realsmith_MUzH6EXF2Q.dir_realsmith_MUzH6EXF2Q = 0x02;
    dep_res_realsmith_MUzH6EXF2Q.cmd_realsmith_MUzH6EXF2Q = 0x01;
    /*bef_stmt:17307*/
dep_res_realsmith_MUzH6EXF2Q.pfb_realsmith_MUzH6EXF2Q = 0x04 | Tag1_realsmith_proxy_ycGSZLx2a4(/*int:17408:17408:17307:e*/curr_nfc_dep_pni_realsmith_MUzH6EXF2Q);
/*aft_stmt:17307*/
    /*bef_stmt:17341*/
if (Tag2_realsmith_proxy_ycGSZLx2a4(/*int:17408:17408:17341:e*/did_realsmith_MUzH6EXF2Q)) {
        dep_res_realsmith_MUzH6EXF2Q.pfb_realsmith_MUzH6EXF2Q |= 0x08;
    }
/*aft_stmt:17341*/
    /*bef_stmt:17380*/
curr_nfc_dep_pni_realsmith_MUzH6EXF2Q = ((Tag3_realsmith_proxy_ycGSZLx2a4(/*int:17408:17408:17380:e*/curr_nfc_dep_pni_realsmith_MUzH6EXF2Q) + 1) & 0x0F);
/*aft_stmt:17380*/
    rc_realsmith_MUzH6EXF2Q = 0;
    /*bef_stmt:17403*/
return Tag4_realsmith_proxy_ycGSZLx2a4(/*int:17408:17408:17403:e*/rc_realsmith_MUzH6EXF2Q);
/*aft_stmt:17403*/
}
int realsmith_proxy_ycGSZLx2a4(int p_0_PQeSkLWiXl, int p_1_w9jUIeNv3K, int p_2_YkyHpPhKkn) {
/*bef_stmt:17573*/
/*bef_stmt:17573*/
int proxy_ret_ElLaXg2ZVj = realsmith_MUzH6EXF2Q(Tag5_realsmith_proxy_ycGSZLx2a4(/*int:17585:17585:17573:e*/p_0_PQeSkLWiXl), Tag6_realsmith_proxy_ycGSZLx2a4(/*int:17585:17585:17573:e*/p_1_w9jUIeNv3K), &(p_2_YkyHpPhKkn));
/*aft_stmt:17573*/
/*aft_stmt:17573*/
/*bef_stmt:17583*/
return Tag7_realsmith_proxy_ycGSZLx2a4(/*int:17585:17585:17583:e*/proxy_ret_ElLaXg2ZVj);
/*aft_stmt:17583*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_fotmvfPdDV(x) (x)
#define Tag2_realsmith_fotmvfPdDV(x) (x)
#define Tag3_realsmith_fotmvfPdDV(x) (x)
#define Tag4_realsmith_fotmvfPdDV(x) (x)
#define Tag5_realsmith_fotmvfPdDV(x) (x)
#define Tag6_realsmith_fotmvfPdDV(x) (x)
#define Tag7_realsmith_fotmvfPdDV(x) (x)
#define Tag8_realsmith_fotmvfPdDV(x) (x)
#define Tag9_realsmith_fotmvfPdDV(x) (x)
#define Tag10_realsmith_fotmvfPdDV(x) (x)
#define Tag11_realsmith_fotmvfPdDV(x) (x)
#define Tag12_realsmith_fotmvfPdDV(x) (x)
#define Tag13_realsmith_fotmvfPdDV(x) (x)
#include "stdlib.h"
struct iproc_pll_ctrl_56CmnZ {
    int flags_realsmith_fotmvfPdDV;
};
struct iproc_clk_ctrl_56CmnZ {
    int flags_realsmith_fotmvfPdDV;
};
int realsmith_fotmvfPdDV(int pll_ctrl_flags_realsmith_fotmvfPdDV, int clk_ctrl_flags_realsmith_fotmvfPdDV, unsigned int num_clks_realsmith_fotmvfPdDV) {
    /*bef_stmt:17233*/
/*bef_stmt:17233*/
if (Tag1_realsmith_fotmvfPdDV(/*int:17660:17660:17233:e*/pll_ctrl_flags_realsmith_fotmvfPdDV) == 0 || Tag2_realsmith_fotmvfPdDV(/*int:17660:17660:17233:e*/clk_ctrl_flags_realsmith_fotmvfPdDV) == 0) {
        return -1;
    }
/*aft_stmt:17233*/
/*aft_stmt:17233*/
    unsigned int i_realsmith_fotmvfPdDV;
    int ret_realsmith_fotmvfPdDV;
    /*bef_stmt:17345*/
unsigned int *clk_data_hws_realsmith_fotmvfPdDV = (unsigned int *)(malloc(Tag3_realsmith_fotmvfPdDV(/*unsigned int:17660:17660:17345:e*/num_clks_realsmith_fotmvfPdDV) * sizeof(unsigned int)));
/*aft_stmt:17345*/
    if (!clk_data_hws_realsmith_fotmvfPdDV) {
        return -1;
    }
    /*bef_stmt:17447*/
/*bef_stmt:17447*/
for (i_realsmith_fotmvfPdDV = 0; Tag4_realsmith_fotmvfPdDV(/*unsigned int:17660:17660:17447:e*/i_realsmith_fotmvfPdDV) < Tag5_realsmith_fotmvfPdDV(/*unsigned int:17660:17660:17447:e*/num_clks_realsmith_fotmvfPdDV); i_realsmith_fotmvfPdDV++) {
        /*bef_stmt:17440*/
/*bef_stmt:17440*/
clk_data_hws_realsmith_fotmvfPdDV[Tag6_realsmith_fotmvfPdDV(/*unsigned int:17660:17660:17440:e*/i_realsmith_fotmvfPdDV)] = Tag7_realsmith_fotmvfPdDV(/*unsigned int:17660:17660:17440:e*/i_realsmith_fotmvfPdDV);
/*aft_stmt:17440*/
/*aft_stmt:17440*/
    }
/*aft_stmt:17447*/
/*aft_stmt:17447*/
    /*bef_stmt:17471*/
if (Tag8_realsmith_fotmvfPdDV(/*int:17660:17660:17471:e*/pll_ctrl_flags_realsmith_fotmvfPdDV) & 1) {
    }
/*aft_stmt:17471*/
    /*bef_stmt:17618*/
/*bef_stmt:17618*/
for (i_realsmith_fotmvfPdDV = 0; Tag9_realsmith_fotmvfPdDV(/*unsigned int:17660:17660:17618:e*/i_realsmith_fotmvfPdDV) < Tag10_realsmith_fotmvfPdDV(/*unsigned int:17660:17660:17618:e*/num_clks_realsmith_fotmvfPdDV); i_realsmith_fotmvfPdDV++) {
        /*bef_stmt:17543*/
ret_realsmith_fotmvfPdDV = clk_data_hws_realsmith_fotmvfPdDV[Tag11_realsmith_fotmvfPdDV(/*unsigned int:17660:17660:17543:e*/i_realsmith_fotmvfPdDV)];
/*aft_stmt:17543*/
        /*bef_stmt:17610*/
if (Tag12_realsmith_fotmvfPdDV(/*int:17660:17660:17610:e*/ret_realsmith_fotmvfPdDV) < 0) {
            (free(clk_data_hws_realsmith_fotmvfPdDV));
            /*bef_stmt:17604*/
return Tag13_realsmith_fotmvfPdDV(/*int:17660:17660:17604:e*/ret_realsmith_fotmvfPdDV);
/*aft_stmt:17604*/
        }
/*aft_stmt:17610*/
    }
/*aft_stmt:17618*/
/*aft_stmt:17618*/
    (free(clk_data_hws_realsmith_fotmvfPdDV));
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_6QlB7gPs8J(x) (x)
#define Tag2_realsmith_6QlB7gPs8J(x) (x)
#include "stdlib.h"
int realsmith_6QlB7gPs8J(int flags_realsmith_6QlB7gPs8J) {
    const int DOCK_DOCKING_realsmith_6QlB7gPs8J = 1;
    /*bef_stmt:17108*/
flags_realsmith_6QlB7gPs8J |= Tag1_realsmith_6QlB7gPs8J(/*const int:17134:17134:17108:e*/DOCK_DOCKING_realsmith_6QlB7gPs8J);
/*aft_stmt:17108*/
    /*bef_stmt:17132*/
return Tag2_realsmith_6QlB7gPs8J(/*int:17134:17134:17132:e*/flags_realsmith_6QlB7gPs8J);
/*aft_stmt:17132*/
}



#include "stdlib.h"
int realsmith_lt3qnZltCu(int nalloc_realsmith_lt3qnZltCu, int len_realsmith_lt3qnZltCu, int *body_realsmith_lt3qnZltCu) {
    int discipline_realsmith_lt3qnZltCu = 0;
    if (nalloc_realsmith_lt3qnZltCu == (len_realsmith_lt3qnZltCu + 1)) {
        nalloc_realsmith_lt3qnZltCu *= 2;
        body_realsmith_lt3qnZltCu = (realloc(body_realsmith_lt3qnZltCu, nalloc_realsmith_lt3qnZltCu * sizeof(int)));
    }
    body_realsmith_lt3qnZltCu[len_realsmith_lt3qnZltCu++] = discipline_realsmith_lt3qnZltCu;
    return len_realsmith_lt3qnZltCu;
}
int realsmith_proxy_97irjrdWks(int p_0_bSoWpbARtA, int p_1_6sucBORyV7, int p_2_LiKU5yoVVC) {
int proxy_3f3Yv18Pbu[20] = { 94, 63, p_2_LiKU5yoVVC, p_2_LiKU5yoVVC, p_2_LiKU5yoVVC, 84, 1, 17, p_2_LiKU5yoVVC, 5, p_2_LiKU5yoVVC, 51, 86, p_2_LiKU5yoVVC, 8, p_2_LiKU5yoVVC, 31, p_2_LiKU5yoVVC, 69, 87 };
int proxy_ret_CXpNYQM2a8 = realsmith_lt3qnZltCu(p_0_bSoWpbARtA, p_1_6sucBORyV7, proxy_3f3Yv18Pbu);
return proxy_ret_CXpNYQM2a8;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_DvtUAdkfw3(x) (x)
#define Tag2_realsmith_DvtUAdkfw3(x) (x)
#define Tag3_realsmith_DvtUAdkfw3(x) (x)
#include "stdlib.h"
int realsmith_DvtUAdkfw3(int instance_mutex_realsmith_DvtUAdkfw3, int component_enabled_realsmith_DvtUAdkfw3) {
    int ret_realsmith_DvtUAdkfw3 = 0;
    /*bef_stmt:17184*/
if (Tag1_realsmith_DvtUAdkfw3(/*int:17199:17199:17184:e*/instance_mutex_realsmith_DvtUAdkfw3)) {
        /*bef_stmt:17152*/
if (Tag2_realsmith_DvtUAdkfw3(/*int:17199:17199:17152:e*/component_enabled_realsmith_DvtUAdkfw3)) {
            ret_realsmith_DvtUAdkfw3 = 0;
        }
/*aft_stmt:17152*/
        ret_realsmith_DvtUAdkfw3 = 0;
    } else {
        return -1;
    }
/*aft_stmt:17184*/
    /*bef_stmt:17197*/
return Tag3_realsmith_DvtUAdkfw3(/*int:17199:17199:17197:e*/ret_realsmith_DvtUAdkfw3);
/*aft_stmt:17197*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_iN53Jothnw(x) (x)
#define Tag2_realsmith_iN53Jothnw(x) (x)
#define Tag3_realsmith_iN53Jothnw(x) (x)
#include "stdlib.h"
typedef struct {
    int invalid_descs_realsmith_iN53Jothnw;
} xsk_queue_01MRis;
int realsmith_iN53Jothnw(int has_queue_realsmith_iN53Jothnw, int invalid_descs_realsmith_iN53Jothnw) {
    xsk_queue_01MRis q_realsmith_iN53Jothnw;
    /*bef_stmt:17199*/
q_realsmith_iN53Jothnw.invalid_descs_realsmith_iN53Jothnw = Tag1_realsmith_iN53Jothnw(/*int:17246:17246:17199:e*/invalid_descs_realsmith_iN53Jothnw);
/*aft_stmt:17199*/
    /*bef_stmt:17244*/
/*bef_stmt:17244*/
return Tag2_realsmith_iN53Jothnw(/*int:17246:17246:17244:e*/has_queue_realsmith_iN53Jothnw) ? Tag3_realsmith_iN53Jothnw(/*int:17246:17246:17244:e*/q_realsmith_iN53Jothnw.invalid_descs_realsmith_iN53Jothnw) : 0;
/*aft_stmt:17244*/
/*aft_stmt:17244*/
}



#include "stdlib.h"
int realsmith_Rg5WZxPwuC(int desired_khz_realsmith_Rg5WZxPwuC, int *sclk_realsmith_Rg5WZxPwuC) {
    int idx_realsmith_Rg5WZxPwuC = -1;
    int div_realsmith_Rg5WZxPwuC = 0;
    int clk_realsmith_Rg5WZxPwuC = 1;
    int ret_realsmith_Rg5WZxPwuC = 0;
    if (desired_khz_realsmith_Rg5WZxPwuC > 0) {
        idx_realsmith_Rg5WZxPwuC = 0;
    }
    if (idx_realsmith_Rg5WZxPwuC < 0)
        return idx_realsmith_Rg5WZxPwuC;
    if (clk_realsmith_Rg5WZxPwuC) {
        int desired_clk_hz_realsmith_Rg5WZxPwuC = desired_khz_realsmith_Rg5WZxPwuC * 1000;
        if (sclk_realsmith_Rg5WZxPwuC) {
            *sclk_realsmith_Rg5WZxPwuC = div_realsmith_Rg5WZxPwuC | (1 << idx_realsmith_Rg5WZxPwuC);
        }
    }
    return ret_realsmith_Rg5WZxPwuC;
}
int realsmith_proxy_O95ZHrvdxd(int p_0_RZAZ4FqxiD, int p_1_Knd9zNLXu5) {
int proxy_b2s5FXtbDK[10] = { 64, 78, 52, 0, p_1_Knd9zNLXu5, p_1_Knd9zNLXu5, 92, p_1_Knd9zNLXu5, 87, p_1_Knd9zNLXu5 };
int proxy_ret_IyY1LNX41K = realsmith_Rg5WZxPwuC(p_0_RZAZ4FqxiD, proxy_b2s5FXtbDK);
return proxy_ret_IyY1LNX41K;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_zVuNp7aKpM(x) (x)
#define Tag2_realsmith_zVuNp7aKpM(x) (x)
#include "stdlib.h"
int realsmith_zVuNp7aKpM(int regmap_realsmith_zVuNp7aKpM, int pll1_enable_realsmith_zVuNp7aKpM, int pll2_enable_realsmith_zVuNp7aKpM) {
    int ADAV80X_PLL_OUTE_realsmith_zVuNp7aKpM = 0x20;
    int ADAV80X_DAC_CTRL3_realsmith_zVuNp7aKpM = 0x6;
    /*bef_stmt:17174*/
if (Tag1_realsmith_zVuNp7aKpM(/*int:17197:17197:17174:e*/pll1_enable_realsmith_zVuNp7aKpM)) {
    }
/*aft_stmt:17174*/
    /*bef_stmt:17187*/
if (Tag2_realsmith_zVuNp7aKpM(/*int:17197:17197:17187:e*/pll2_enable_realsmith_zVuNp7aKpM)) {
    }
/*aft_stmt:17187*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_axKNrOVaYj(x) (x)
#define Tag2_realsmith_axKNrOVaYj(x) (x)
#define Tag3_realsmith_axKNrOVaYj(x) (x)
#define Tag4_realsmith_axKNrOVaYj(x) (x)
#include "stdlib.h"
struct memcg_shrinker_map_es8q5b {
    unsigned long map_realsmith_axKNrOVaYj;
};
int realsmith_axKNrOVaYj(int memcg_valid_realsmith_axKNrOVaYj, int is_root_realsmith_axKNrOVaYj, int nid_realsmith_axKNrOVaYj, int shrinker_id_realsmith_axKNrOVaYj) {
    /*bef_stmt:17317*/
/*bef_stmt:17317*/
/*bef_stmt:17317*/
if (Tag1_realsmith_axKNrOVaYj(/*int:17327:17327:17317:e*/shrinker_id_realsmith_axKNrOVaYj) >= 0 && Tag2_realsmith_axKNrOVaYj(/*int:17327:17327:17317:e*/memcg_valid_realsmith_axKNrOVaYj) && !Tag3_realsmith_axKNrOVaYj(/*int:17327:17327:17317:e*/is_root_realsmith_axKNrOVaYj)) {
        struct memcg_shrinker_map_es8q5b map_realsmith_axKNrOVaYj;
        map_realsmith_axKNrOVaYj.map_realsmith_axKNrOVaYj = 0;
        /*bef_stmt:17299*/
map_realsmith_axKNrOVaYj.map_realsmith_axKNrOVaYj |= (1UL << Tag4_realsmith_axKNrOVaYj(/*int:17327:17327:17299:e*/shrinker_id_realsmith_axKNrOVaYj));
/*aft_stmt:17299*/
        return 1;
    }
/*aft_stmt:17317*/
/*aft_stmt:17317*/
/*aft_stmt:17317*/
    return 0;
}



#include "stdlib.h"
int realsmith_SV1kqp2j1l(int value_realsmith_SV1kqp2j1l, int index_realsmith_SV1kqp2j1l, int l_realsmith_SV1kqp2j1l) {
    for (int i_realsmith_SV1kqp2j1l = 0; i_realsmith_SV1kqp2j1l < l_realsmith_SV1kqp2j1l; i_realsmith_SV1kqp2j1l++) {
    }
    return value_realsmith_SV1kqp2j1l;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_pnSxbLi4Fz(x) (x)
#define Tag2_realsmith_pnSxbLi4Fz(x) (x)
#define Tag3_realsmith_pnSxbLi4Fz(x) (x)
#define Tag4_realsmith_pnSxbLi4Fz(x) (x)
#define Tag5_realsmith_pnSxbLi4Fz(x) (x)
#define Tag6_realsmith_pnSxbLi4Fz(x) (x)
#define Tag7_realsmith_pnSxbLi4Fz(x) (x)
#define Tag8_realsmith_pnSxbLi4Fz(x) (x)
#define Tag9_realsmith_pnSxbLi4Fz(x) (x)
#define Tag10_realsmith_pnSxbLi4Fz(x) (x)
#define Tag11_realsmith_pnSxbLi4Fz(x) (x)
#define Tag12_realsmith_pnSxbLi4Fz(x) (x)
#define Tag13_realsmith_pnSxbLi4Fz(x) (x)
#include "stdlib.h"
int realsmith_pnSxbLi4Fz(int sb_owner_mask_realsmith_pnSxbLi4Fz, int sb_other_mask_realsmith_pnSxbLi4Fz, int inode_mode_realsmith_pnSxbLi4Fz) {
    int attr_realsmith_pnSxbLi4Fz = 0;
    /*bef_stmt:17178*/
/*bef_stmt:17178*/
if ((Tag1_realsmith_pnSxbLi4Fz(/*int:17450:17450:17178:e*/inode_mode_realsmith_pnSxbLi4Fz) & 0xA000) == 0xA000)
        return Tag2_realsmith_pnSxbLi4Fz(/*int:17450:17450:17178:e*/attr_realsmith_pnSxbLi4Fz);
/*aft_stmt:17178*/
/*aft_stmt:17178*/
    /*bef_stmt:17221*/
if ((Tag3_realsmith_pnSxbLi4Fz(/*int:17450:17450:17221:e*/inode_mode_realsmith_pnSxbLi4Fz) & 0x4000) == 0x4000)
        attr_realsmith_pnSxbLi4Fz = 0x0001;
/*aft_stmt:17221*/
    /*bef_stmt:17259*/
/*bef_stmt:17259*/
int mode_realsmith_pnSxbLi4Fz = Tag4_realsmith_pnSxbLi4Fz(/*int:17450:17450:17259:e*/inode_mode_realsmith_pnSxbLi4Fz) & Tag5_realsmith_pnSxbLi4Fz(/*int:17450:17450:17259:e*/sb_owner_mask_realsmith_pnSxbLi4Fz);
/*aft_stmt:17259*/
/*aft_stmt:17259*/
    /*bef_stmt:17291*/
if (Tag6_realsmith_pnSxbLi4Fz(/*int:17450:17450:17291:e*/mode_realsmith_pnSxbLi4Fz) & 0x0040)
        attr_realsmith_pnSxbLi4Fz |= 0x0002;
/*aft_stmt:17291*/
    /*bef_stmt:17324*/
if (Tag7_realsmith_pnSxbLi4Fz(/*int:17450:17450:17324:e*/mode_realsmith_pnSxbLi4Fz) & 0x0020)
        attr_realsmith_pnSxbLi4Fz |= 0x0004;
/*aft_stmt:17324*/
    /*bef_stmt:17350*/
/*bef_stmt:17350*/
mode_realsmith_pnSxbLi4Fz = Tag8_realsmith_pnSxbLi4Fz(/*int:17450:17450:17350:e*/inode_mode_realsmith_pnSxbLi4Fz) & Tag9_realsmith_pnSxbLi4Fz(/*int:17450:17450:17350:e*/sb_other_mask_realsmith_pnSxbLi4Fz);
/*aft_stmt:17350*/
/*aft_stmt:17350*/
    /*bef_stmt:17368*/
mode_realsmith_pnSxbLi4Fz &= ~Tag10_realsmith_pnSxbLi4Fz(/*int:17450:17450:17368:e*/sb_owner_mask_realsmith_pnSxbLi4Fz);
/*aft_stmt:17368*/
    /*bef_stmt:17403*/
if (Tag11_realsmith_pnSxbLi4Fz(/*int:17450:17450:17403:e*/mode_realsmith_pnSxbLi4Fz) & 0x0040)
        attr_realsmith_pnSxbLi4Fz |= 0x0008;
/*aft_stmt:17403*/
    /*bef_stmt:17437*/
if (Tag12_realsmith_pnSxbLi4Fz(/*int:17450:17450:17437:e*/mode_realsmith_pnSxbLi4Fz) & 0x0020)
        attr_realsmith_pnSxbLi4Fz |= 0x0010;
/*aft_stmt:17437*/
    /*bef_stmt:17448*/
return Tag13_realsmith_pnSxbLi4Fz(/*int:17450:17450:17448:e*/attr_realsmith_pnSxbLi4Fz);
/*aft_stmt:17448*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_mMdzzqBlxc(x) (x)
#define Tag2_realsmith_proxy_mMdzzqBlxc(x) (x)
#define Tag3_realsmith_proxy_mMdzzqBlxc(x) (x)
#include "stdlib.h"
int realsmith_OKn1LoQPX3(int vm_flags_realsmith_OKn1LoQPX3, int *vm_ops_realsmith_OKn1LoQPX3) {
    const int VM_DONTEXPAND_realsmith_OKn1LoQPX3 = 1;
    *vm_ops_realsmith_OKn1LoQPX3 = 2;
    /*bef_stmt:17152*/
vm_flags_realsmith_OKn1LoQPX3 |= Tag1_realsmith_proxy_mMdzzqBlxc(/*const int:17175:17175:17152:e*/VM_DONTEXPAND_realsmith_OKn1LoQPX3);
/*aft_stmt:17152*/
    return 0;
}
int realsmith_proxy_mMdzzqBlxc(int p_0_vreSHS6zPX, int p_1_5gImlJKqqR) {
/*bef_stmt:17303*/
int proxy_ret_OjYx9A2WUD = realsmith_OKn1LoQPX3(Tag2_realsmith_proxy_mMdzzqBlxc(/*int:17315:17315:17303:e*/p_0_vreSHS6zPX), &(p_1_5gImlJKqqR));
/*aft_stmt:17303*/
/*bef_stmt:17313*/
return Tag3_realsmith_proxy_mMdzzqBlxc(/*int:17315:17315:17313:e*/proxy_ret_OjYx9A2WUD);
/*aft_stmt:17313*/
}




#include "stdlib.h"
int realsmith_4Zl5ssDrzd(int list_size_realsmith_4Zl5ssDrzd, const int *list_realsmith_4Zl5ssDrzd, int cells_name_realsmith_4Zl5ssDrzd) {
    int cur_index_realsmith_4Zl5ssDrzd = 0;
    if (cells_name_realsmith_4Zl5ssDrzd == 0) {
        return list_size_realsmith_4Zl5ssDrzd / sizeof(int);
    }
    for (int i_realsmith_4Zl5ssDrzd = 0; i_realsmith_4Zl5ssDrzd < list_size_realsmith_4Zl5ssDrzd / sizeof(int); i_realsmith_4Zl5ssDrzd++) {
        cur_index_realsmith_4Zl5ssDrzd += 1;
    }
    return cur_index_realsmith_4Zl5ssDrzd;
}
int realsmith_proxy_nGxxpB91yI(int p_0_vv7YBvSTOQ, int p_1_BhkdY0CZl9, int p_2_35twZu3aZe) {
int proxy_ret_d8FlgmBMuw = realsmith_4Zl5ssDrzd(p_0_vv7YBvSTOQ, &(p_1_BhkdY0CZl9), p_2_35twZu3aZe);
return proxy_ret_d8FlgmBMuw;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_XyDxsvIAhZ(x) (x)
#define Tag2_realsmith_XyDxsvIAhZ(x) (x)
#include "stdlib.h"
int realsmith_XyDxsvIAhZ(unsigned long data_realsmith_XyDxsvIAhZ) {
    /*bef_stmt:17104*/
unsigned long chan_realsmith_XyDxsvIAhZ = Tag1_realsmith_XyDxsvIAhZ(/*unsigned long:17119:17119:17104:e*/data_realsmith_XyDxsvIAhZ);
/*aft_stmt:17104*/
    /*bef_stmt:17117*/
return Tag2_realsmith_XyDxsvIAhZ(/*unsigned long:17119:17119:17117:e*/chan_realsmith_XyDxsvIAhZ);
/*aft_stmt:17117*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_VypwRu4kxl(x) (x)
#define Tag2_realsmith_VypwRu4kxl(x) (x)
#define Tag3_realsmith_VypwRu4kxl(x) (x)
#include "stdlib.h"
struct mlxsw_core_RcFGw1 {
    int dummy_realsmith_VypwRu4kxl;
};
int realsmith_VypwRu4kxl(int dummy_value_realsmith_VypwRu4kxl) {
    struct mlxsw_core_RcFGw1 mlxsw_core_instance_realsmith_VypwRu4kxl;
    /*bef_stmt:17151*/
mlxsw_core_instance_realsmith_VypwRu4kxl.dummy_realsmith_VypwRu4kxl = Tag1_realsmith_VypwRu4kxl(/*int:17215:17215:17151:e*/dummy_value_realsmith_VypwRu4kxl);
/*aft_stmt:17151*/
    int MLXSW_PORT_CPU_PORT_realsmith_VypwRu4kxl = 0;
    /*bef_stmt:17213*/
/*bef_stmt:17213*/
return Tag2_realsmith_VypwRu4kxl(/*int:17215:17215:17213:e*/mlxsw_core_instance_realsmith_VypwRu4kxl.dummy_realsmith_VypwRu4kxl) + Tag3_realsmith_VypwRu4kxl(/*int:17215:17215:17213:e*/MLXSW_PORT_CPU_PORT_realsmith_VypwRu4kxl);
/*aft_stmt:17213*/
/*aft_stmt:17213*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_v4xhGstNEU(x) (x)
#define Tag2_realsmith_v4xhGstNEU(x) (x)
#include "stdlib.h"
struct netxen_adapter_p7a6BX {
    void *md_template_realsmith_v4xhGstNEU;
    void *md_capture_buff_realsmith_v4xhGstNEU;
};
int realsmith_v4xhGstNEU(int has_template_realsmith_v4xhGstNEU, int has_capture_buff_realsmith_v4xhGstNEU) {
    struct netxen_adapter_p7a6BX adapter_realsmith_v4xhGstNEU;
    /*bef_stmt:17239*/
adapter_realsmith_v4xhGstNEU.md_template_realsmith_v4xhGstNEU = Tag1_realsmith_v4xhGstNEU(/*int:17487:17487:17239:e*/has_template_realsmith_v4xhGstNEU) ? (malloc(1)) : ((void*)0);
/*aft_stmt:17239*/
    /*bef_stmt:17305*/
adapter_realsmith_v4xhGstNEU.md_capture_buff_realsmith_v4xhGstNEU = Tag2_realsmith_v4xhGstNEU(/*int:17487:17487:17305:e*/has_capture_buff_realsmith_v4xhGstNEU) ? (malloc(1)) : ((void*)0);
/*aft_stmt:17305*/
    if (adapter_realsmith_v4xhGstNEU.md_template_realsmith_v4xhGstNEU) {
        (free(adapter_realsmith_v4xhGstNEU.md_template_realsmith_v4xhGstNEU));
        adapter_realsmith_v4xhGstNEU.md_template_realsmith_v4xhGstNEU = ((void*)0);
    }
    if (adapter_realsmith_v4xhGstNEU.md_capture_buff_realsmith_v4xhGstNEU) {
        (free(adapter_realsmith_v4xhGstNEU.md_capture_buff_realsmith_v4xhGstNEU));
        adapter_realsmith_v4xhGstNEU.md_capture_buff_realsmith_v4xhGstNEU = ((void*)0);
    }
    return 0;
}



#include "stdlib.h"
struct fscache_cookie_1X2bHF {
    int flags_realsmith_lAnkqLvCO6;
    int stores_lock_realsmith_lAnkqLvCO6;
    int stores_realsmith_lAnkqLvCO6;
};
struct page_1X2bHF {
    int index_realsmith_lAnkqLvCO6;
};
int realsmith_lAnkqLvCO6(int *cookie_flags_realsmith_lAnkqLvCO6, int *cookie_stores_lock_realsmith_lAnkqLvCO6, int *cookie_stores_realsmith_lAnkqLvCO6, int *results_realsmith_lAnkqLvCO6, int results_size_realsmith_lAnkqLvCO6) {
    struct fscache_cookie_1X2bHF cookie_realsmith_lAnkqLvCO6;
    cookie_realsmith_lAnkqLvCO6.flags_realsmith_lAnkqLvCO6 = *cookie_flags_realsmith_lAnkqLvCO6;
    cookie_realsmith_lAnkqLvCO6.stores_lock_realsmith_lAnkqLvCO6 = *cookie_stores_lock_realsmith_lAnkqLvCO6;
    cookie_realsmith_lAnkqLvCO6.stores_realsmith_lAnkqLvCO6 = *cookie_stores_realsmith_lAnkqLvCO6;
    struct page_1X2bHF *page_realsmith_lAnkqLvCO6;
    int n_realsmith_lAnkqLvCO6, i_realsmith_lAnkqLvCO6;
    for (;;) {
        n_realsmith_lAnkqLvCO6 = 0;
        for (i_realsmith_lAnkqLvCO6 = 0; i_realsmith_lAnkqLvCO6 < results_size_realsmith_lAnkqLvCO6; i_realsmith_lAnkqLvCO6++) {
            if (results_realsmith_lAnkqLvCO6[i_realsmith_lAnkqLvCO6] != 0) {
                n_realsmith_lAnkqLvCO6++;
            }
        }
        if (n_realsmith_lAnkqLvCO6 == 0) {
            break;
        }
        for (i_realsmith_lAnkqLvCO6 = n_realsmith_lAnkqLvCO6 - 1; i_realsmith_lAnkqLvCO6 >= 0; i_realsmith_lAnkqLvCO6--) {
            page_realsmith_lAnkqLvCO6 = (struct page_1X2bHF *)&results_realsmith_lAnkqLvCO6[i_realsmith_lAnkqLvCO6];
        }
        for (i_realsmith_lAnkqLvCO6 = n_realsmith_lAnkqLvCO6 - 1; i_realsmith_lAnkqLvCO6 >= 0; i_realsmith_lAnkqLvCO6--) {
            results_realsmith_lAnkqLvCO6[i_realsmith_lAnkqLvCO6] = 0;
        }
    }
    cookie_realsmith_lAnkqLvCO6.flags_realsmith_lAnkqLvCO6 = 1;
    return cookie_realsmith_lAnkqLvCO6.flags_realsmith_lAnkqLvCO6;
}
int realsmith_proxy_tWfyk5UG0B(int p_0_0kBqZFx4hE, int p_1_jlOCf0kHgX, int p_2_yBkHQ3nAH9, int p_3_ywF9B2wbMC, int p_4_AuzvQyev5r) {
int proxy_liCKaIWGvA[13] = { p_2_yBkHQ3nAH9, p_2_yBkHQ3nAH9, p_2_yBkHQ3nAH9, 66, 59, p_2_yBkHQ3nAH9, 58, 80, 90, 31, p_2_yBkHQ3nAH9, p_2_yBkHQ3nAH9, p_2_yBkHQ3nAH9 };
int proxy_ret_4eygbNFRNh = realsmith_lAnkqLvCO6(&(p_0_0kBqZFx4hE), &(p_1_jlOCf0kHgX), proxy_liCKaIWGvA, &(p_3_ywF9B2wbMC), p_4_AuzvQyev5r);
return proxy_ret_4eygbNFRNh;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_nTAq1e3ZPM(x) (x)
#define Tag2_realsmith_nTAq1e3ZPM(x) (x)
#define Tag3_realsmith_nTAq1e3ZPM(x) (x)
#define Tag4_realsmith_nTAq1e3ZPM(x) (x)
#include "stdlib.h"
int realsmith_nTAq1e3ZPM(int enable_zero_detect_realsmith_nTAq1e3ZPM, int enable_slew_rate_realsmith_nTAq1e3ZPM, int slew_rate_realsmith_nTAq1e3ZPM) {
    int MAX9850_GENERAL_PURPOSE_realsmith_nTAq1e3ZPM = 0;
    int MAX9850_VOLUME_realsmith_nTAq1e3ZPM = 1;
    int MAX9850_CHARGE_PUMP_realsmith_nTAq1e3ZPM = 2;
    int general_purpose_reg_realsmith_nTAq1e3ZPM = 0;
    int volume_reg_realsmith_nTAq1e3ZPM = 0;
    int charge_pump_reg_realsmith_nTAq1e3ZPM = 0;
    /*bef_stmt:17281*/
if (Tag1_realsmith_nTAq1e3ZPM(/*int:17372:17372:17281:e*/enable_zero_detect_realsmith_nTAq1e3ZPM)) {
        general_purpose_reg_realsmith_nTAq1e3ZPM |= 1;
    }
/*aft_stmt:17281*/
    /*bef_stmt:17309*/
if (Tag2_realsmith_nTAq1e3ZPM(/*int:17372:17372:17309:e*/enable_slew_rate_realsmith_nTAq1e3ZPM)) {
        volume_reg_realsmith_nTAq1e3ZPM |= 0x40;
    }
/*aft_stmt:17309*/
    /*bef_stmt:17362*/
/*bef_stmt:17362*/
charge_pump_reg_realsmith_nTAq1e3ZPM = (Tag3_realsmith_nTAq1e3ZPM(/*int:17372:17372:17362:e*/charge_pump_reg_realsmith_nTAq1e3ZPM) & ~0xff) | (Tag4_realsmith_nTAq1e3ZPM(/*int:17372:17372:17362:e*/slew_rate_realsmith_nTAq1e3ZPM) & 0xc0);
/*aft_stmt:17362*/
/*aft_stmt:17362*/
    return 0;
}



#include "stdlib.h"
int realsmith_SWFwgHJnmz(int tx_bd_tail_realsmith_SWFwgHJnmz, int tx_bd_num_realsmith_SWFwgHJnmz, int *tx_bd_v_realsmith_SWFwgHJnmz, int num_frag_realsmith_SWFwgHJnmz) {
    int cur_index_realsmith_SWFwgHJnmz = (tx_bd_tail_realsmith_SWFwgHJnmz + num_frag_realsmith_SWFwgHJnmz) % tx_bd_num_realsmith_SWFwgHJnmz;
    int cur_status_realsmith_SWFwgHJnmz = tx_bd_v_realsmith_SWFwgHJnmz[cur_index_realsmith_SWFwgHJnmz] & 0xFFFFFFFF;
    return (cur_status_realsmith_SWFwgHJnmz) ? 1 : 0;
}
int realsmith_proxy_OI6qI14oYR(int p_0_cgIeCfKLcr, int p_1_bTCBZluC0Q, int p_2_eTW38zrlCp, int p_3_4L2gl5P2Qg) {
int proxy_YMqxdB1Efw[17] = { p_2_eTW38zrlCp, 37, p_2_eTW38zrlCp, 89, 99, 63, p_2_eTW38zrlCp, 86, 67, p_2_eTW38zrlCp, p_2_eTW38zrlCp, 16, p_2_eTW38zrlCp, p_2_eTW38zrlCp, 44, 74, 23 };
int proxy_ret_gBXZ2lnkgD = realsmith_SWFwgHJnmz(p_0_cgIeCfKLcr, p_1_bTCBZluC0Q, proxy_YMqxdB1Efw, p_3_4L2gl5P2Qg);
return proxy_ret_gBXZ2lnkgD;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_WdG2v7r1f9(x) (x)
#define Tag2_realsmith_WdG2v7r1f9(x) (x)
#include "stdlib.h"
int realsmith_WdG2v7r1f9(int bpc_realsmith_WdG2v7r1f9) {
    /*bef_stmt:17112*/
/*bef_stmt:17112*/
if (Tag1_realsmith_WdG2v7r1f9(/*int:17118:17118:17112:e*/bpc_realsmith_WdG2v7r1f9) == 0)
        return 24;
    else
        return Tag2_realsmith_WdG2v7r1f9(/*int:17118:17118:17112:e*/bpc_realsmith_WdG2v7r1f9) * 3;
/*aft_stmt:17112*/
/*aft_stmt:17112*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_r4M4k5Y3KN(x) (x)
#define Tag2_realsmith_r4M4k5Y3KN(x) (x)
#define Tag3_realsmith_r4M4k5Y3KN(x) (x)
#define Tag4_realsmith_r4M4k5Y3KN(x) (x)
#define Tag5_realsmith_r4M4k5Y3KN(x) (x)
#include "stdlib.h"
int realsmith_r4M4k5Y3KN(unsigned long ulp_realsmith_r4M4k5Y3KN, int skb_size_realsmith_r4M4k5Y3KN, int l2e_size_realsmith_r4M4k5Y3KN) {
    int error_realsmith_r4M4k5Y3KN = 0;
    int rdev_fatal_error_realsmith_r4M4k5Y3KN = 0;
    /*bef_stmt:17195*/
if (/*TAG1:STA*/((unsigned long)(realsmith_proxy_5Q0Flglee7((int)(ulp_realsmith_r4M4k5Y3KN)+(42), (int)(ulp_realsmith_r4M4k5Y3KN)+(-12), (char)(ulp_realsmith_r4M4k5Y3KN)+(-21))+(int)(ulp_realsmith_r4M4k5Y3KN)-(38))+ulp_realsmith_r4M4k5Y3KN)/*TAG1:END:ulp_realsmith_r4M4k5Y3KN*/ == 0) {
        return -5;
    }
/*aft_stmt:17195*/
    /*bef_stmt:17251*/
/*bef_stmt:17251*/
if (/*TAG2:STA*/((int)(realsmith_J5RDoQsb4Z((int)(skb_size_realsmith_r4M4k5Y3KN)+(-25))+(int)(skb_size_realsmith_r4M4k5Y3KN)-(188))+skb_size_realsmith_r4M4k5Y3KN)/*TAG2:END:skb_size_realsmith_r4M4k5Y3KN*/ <= 0 || /*TAG3:STA*/((int)(realsmith_oGYy7XizbG((int)(l2e_size_realsmith_r4M4k5Y3KN)+(13), (int)(l2e_size_realsmith_r4M4k5Y3KN)+(-18), (int)(l2e_size_realsmith_r4M4k5Y3KN)+(9), (int)(l2e_size_realsmith_r4M4k5Y3KN)+(-76), (int)(l2e_size_realsmith_r4M4k5Y3KN)+(-54))+(int)(l2e_size_realsmith_r4M4k5Y3KN)-(100))+l2e_size_realsmith_r4M4k5Y3KN)/*TAG3:END:l2e_size_realsmith_r4M4k5Y3KN*/ <= 0) {
        error_realsmith_r4M4k5Y3KN = -1;
    }
/*aft_stmt:17251*/
/*aft_stmt:17251*/
    /*bef_stmt:17282*/
if (/*TAG4:STA*/((int)(realsmith_W8XWBF8u4V((int)(error_realsmith_r4M4k5Y3KN)+(94), (unsigned int)(error_realsmith_r4M4k5Y3KN)+(24), (unsigned int)(error_realsmith_r4M4k5Y3KN)+(97))+(int)(error_realsmith_r4M4k5Y3KN)-(0))+error_realsmith_r4M4k5Y3KN)/*TAG4:END:error_realsmith_r4M4k5Y3KN*/ < 0) {
        /*bef_stmt:17277*/
return Tag5_realsmith_r4M4k5Y3KN(/*int:17292:17292:17277:e*/error_realsmith_r4M4k5Y3KN);
/*aft_stmt:17277*/
    }
/*aft_stmt:17282*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_6PoWdxLqMD(x) (x)
#define Tag2_realsmith_6PoWdxLqMD(x) (x)
#define Tag3_realsmith_6PoWdxLqMD(x) (x)
#define Tag4_realsmith_6PoWdxLqMD(x) (x)
#define Tag5_realsmith_6PoWdxLqMD(x) (x)
#define Tag6_realsmith_6PoWdxLqMD(x) (x)
#define Tag7_realsmith_6PoWdxLqMD(x) (x)
#define Tag8_realsmith_6PoWdxLqMD(x) (x)
#define Tag9_realsmith_6PoWdxLqMD(x) (x)
#define Tag10_realsmith_6PoWdxLqMD(x) (x)
#define Tag11_realsmith_6PoWdxLqMD(x) (x)
#define Tag12_realsmith_6PoWdxLqMD(x) (x)
#define Tag13_realsmith_6PoWdxLqMD(x) (x)
#define Tag14_realsmith_6PoWdxLqMD(x) (x)
#define Tag15_realsmith_6PoWdxLqMD(x) (x)
#define Tag16_realsmith_6PoWdxLqMD(x) (x)
#define Tag17_realsmith_6PoWdxLqMD(x) (x)
#define Tag18_realsmith_6PoWdxLqMD(x) (x)
#define Tag19_realsmith_6PoWdxLqMD(x) (x)
#include "stdlib.h"
#include "stdint.h"
struct alx_priv_VdtWtW {
    unsigned int pdev_realsmith_6PoWdxLqMD;
    unsigned int num_rxq_realsmith_6PoWdxLqMD;
    unsigned int num_txq_realsmith_6PoWdxLqMD;
    unsigned int dev_realsmith_6PoWdxLqMD;
};
int realsmith_6PoWdxLqMD(int pdev_realsmith_6PoWdxLqMD, int num_rxq_realsmith_6PoWdxLqMD, int num_txq_realsmith_6PoWdxLqMD, int resume_realsmith_6PoWdxLqMD) {
    struct alx_priv_VdtWtW alx_realsmith_6PoWdxLqMD;
    /*bef_stmt:17632*/
alx_realsmith_6PoWdxLqMD.pdev_realsmith_6PoWdxLqMD = Tag1_realsmith_6PoWdxLqMD(/*int:18092:18092:17632:e*/pdev_realsmith_6PoWdxLqMD);
/*aft_stmt:17632*/
    /*bef_stmt:17670*/
alx_realsmith_6PoWdxLqMD.num_rxq_realsmith_6PoWdxLqMD = Tag2_realsmith_6PoWdxLqMD(/*int:18092:18092:17670:e*/num_rxq_realsmith_6PoWdxLqMD);
/*aft_stmt:17670*/
    /*bef_stmt:17694*/
alx_realsmith_6PoWdxLqMD.num_txq_realsmith_6PoWdxLqMD = Tag3_realsmith_6PoWdxLqMD(/*int:18092:18092:17694:e*/num_txq_realsmith_6PoWdxLqMD);
/*aft_stmt:17694*/
    int err_realsmith_6PoWdxLqMD = 0;
    /*bef_stmt:17759*/
if (Tag4_realsmith_6PoWdxLqMD(/*int:18092:18092:17759:e*/err_realsmith_6PoWdxLqMD) < 0) {
        /*bef_stmt:17752*/
/*bef_stmt:17752*/
if (Tag5_realsmith_6PoWdxLqMD(/*int:18092:18092:17752:e*/err_realsmith_6PoWdxLqMD))
            return Tag6_realsmith_6PoWdxLqMD(/*int:18092:18092:17752:e*/err_realsmith_6PoWdxLqMD);
/*aft_stmt:17752*/
/*aft_stmt:17752*/
    }
/*aft_stmt:17759*/
    /*bef_stmt:17794*/
if (!Tag7_realsmith_6PoWdxLqMD(/*int:18092:18092:17794:e*/resume_realsmith_6PoWdxLqMD))
        alx_realsmith_6PoWdxLqMD.dev_realsmith_6PoWdxLqMD = 0;
/*aft_stmt:17794*/
    /*bef_stmt:17832*/
/*bef_stmt:17832*/
err_realsmith_6PoWdxLqMD = (Tag8_realsmith_6PoWdxLqMD(/*int:18092:18092:17832:e*/num_rxq_realsmith_6PoWdxLqMD) + Tag9_realsmith_6PoWdxLqMD(/*int:18092:18092:17832:e*/num_txq_realsmith_6PoWdxLqMD)) % 2;
/*aft_stmt:17832*/
/*aft_stmt:17832*/
    /*bef_stmt:17856*/
if (Tag10_realsmith_6PoWdxLqMD(/*int:18092:18092:17856:e*/err_realsmith_6PoWdxLqMD))
        goto out_disable_adv_intr;
/*aft_stmt:17856*/
    /*bef_stmt:17894*/
/*bef_stmt:17894*/
err_realsmith_6PoWdxLqMD = (Tag11_realsmith_6PoWdxLqMD(/*int:18092:18092:17894:e*/num_rxq_realsmith_6PoWdxLqMD) + Tag12_realsmith_6PoWdxLqMD(/*int:18092:18092:17894:e*/num_txq_realsmith_6PoWdxLqMD)) % 3;
/*aft_stmt:17894*/
/*aft_stmt:17894*/
    /*bef_stmt:17920*/
if (Tag13_realsmith_6PoWdxLqMD(/*int:18092:18092:17920:e*/err_realsmith_6PoWdxLqMD))
        goto out_free_rings;
/*aft_stmt:17920*/
    /*bef_stmt:17958*/
/*bef_stmt:17958*/
err_realsmith_6PoWdxLqMD = (Tag14_realsmith_6PoWdxLqMD(/*int:18092:18092:17958:e*/num_rxq_realsmith_6PoWdxLqMD) + Tag15_realsmith_6PoWdxLqMD(/*int:18092:18092:17958:e*/num_txq_realsmith_6PoWdxLqMD)) % 4;
/*aft_stmt:17958*/
/*aft_stmt:17958*/
    /*bef_stmt:17972*/
if (Tag16_realsmith_6PoWdxLqMD(/*int:18092:18092:17972:e*/err_realsmith_6PoWdxLqMD))
        goto out_free_rings;
/*aft_stmt:17972*/
    /*bef_stmt:17996*/
alx_realsmith_6PoWdxLqMD.dev_realsmith_6PoWdxLqMD = Tag17_realsmith_6PoWdxLqMD(/*int:18092:18092:17996:e*/num_txq_realsmith_6PoWdxLqMD);
/*aft_stmt:17996*/
    unsigned int isr_realsmith_6PoWdxLqMD = ~(unsigned int)0xFFFFFFFF;
    /*bef_stmt:18065*/
if (!Tag18_realsmith_6PoWdxLqMD(/*int:18092:18092:18065:e*/resume_realsmith_6PoWdxLqMD))
        alx_realsmith_6PoWdxLqMD.dev_realsmith_6PoWdxLqMD = 1;
/*aft_stmt:18065*/
    return 0;
/*bef_stmt:18088*/
out_free_rings:
out_disable_adv_intr:
    return Tag19_realsmith_6PoWdxLqMD(/*int:18092:18092:18088:e*/err_realsmith_6PoWdxLqMD);
/*aft_stmt:18088*/
}



#include<stdint.h>
#include<inttypes.h>
#include "stdlib.h"
int realsmith_KpI8AZysh9(int is_punctured_realsmith_KpI8AZysh9) {
    int ts_gen_cntrl_realsmith_KpI8AZysh9 = 4;
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_EX5dCcgucR(x) (x)
#define Tag2_realsmith_EX5dCcgucR(x) (x)
#define Tag3_realsmith_EX5dCcgucR(x) (x)
#define Tag4_realsmith_EX5dCcgucR(x) (x)
#define Tag5_realsmith_EX5dCcgucR(x) (x)
#define Tag6_realsmith_EX5dCcgucR(x) (x)
#define Tag7_realsmith_EX5dCcgucR(x) (x)
#include "stdlib.h"
int realsmith_EX5dCcgucR(int unit_time_realsmith_EX5dCcgucR, int thr_otherlink_realsmith_EX5dCcgucR, int thr_directlink_realsmith_EX5dCcgucR) {
    int cmd_realsmith_EX5dCcgucR = 1;
    int action_realsmith_EX5dCcgucR = 2;
    int result_realsmith_EX5dCcgucR = 0;
    /*bef_stmt:17253*/
/*bef_stmt:17253*/
/*bef_stmt:17253*/
if (Tag1_realsmith_EX5dCcgucR(/*int:17303:17303:17253:e*/unit_time_realsmith_EX5dCcgucR) < 0 || Tag2_realsmith_EX5dCcgucR(/*int:17303:17303:17253:e*/thr_otherlink_realsmith_EX5dCcgucR) < 0 || Tag3_realsmith_EX5dCcgucR(/*int:17303:17303:17253:e*/thr_directlink_realsmith_EX5dCcgucR) < 0) {
        return -1;
    }
/*aft_stmt:17253*/
/*aft_stmt:17253*/
/*aft_stmt:17253*/
    /*bef_stmt:17290*/
/*bef_stmt:17290*/
/*bef_stmt:17290*/
result_realsmith_EX5dCcgucR = Tag4_realsmith_EX5dCcgucR(/*int:17303:17303:17290:e*/unit_time_realsmith_EX5dCcgucR) + Tag5_realsmith_EX5dCcgucR(/*int:17303:17303:17290:e*/thr_otherlink_realsmith_EX5dCcgucR) + Tag6_realsmith_EX5dCcgucR(/*int:17303:17303:17290:e*/thr_directlink_realsmith_EX5dCcgucR);
/*aft_stmt:17290*/
/*aft_stmt:17290*/
/*aft_stmt:17290*/
    /*bef_stmt:17301*/
return Tag7_realsmith_EX5dCcgucR(/*int:17303:17303:17301:e*/result_realsmith_EX5dCcgucR);
/*aft_stmt:17301*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_XGi3vziJRD(x) (x)
#define Tag2_realsmith_XGi3vziJRD(x) (x)
#define Tag3_realsmith_XGi3vziJRD(x) (x)
#define Tag4_realsmith_XGi3vziJRD(x) (x)
#define Tag5_realsmith_XGi3vziJRD(x) (x)
#define Tag6_realsmith_XGi3vziJRD(x) (x)
#define Tag7_realsmith_XGi3vziJRD(x) (x)
#define Tag8_realsmith_XGi3vziJRD(x) (x)
#include "stdlib.h"
int realsmith_XGi3vziJRD(int nalloc_realsmith_XGi3vziJRD, int len_realsmith_XGi3vziJRD, int address_realsmith_XGi3vziJRD, int pte_realsmith_XGi3vziJRD) {
    struct {
        int nalloc_realsmith_XGi3vziJRD;
        int len_realsmith_XGi3vziJRD;
        int address_realsmith_XGi3vziJRD;
        int pte_realsmith_XGi3vziJRD;
    } vm_area_realsmith_XGi3vziJRD;
    /*bef_stmt:17257*/
vm_area_realsmith_XGi3vziJRD.nalloc_realsmith_XGi3vziJRD = Tag1_realsmith_XGi3vziJRD(/*int:17408:17408:17257:e*/nalloc_realsmith_XGi3vziJRD);
/*aft_stmt:17257*/
    /*bef_stmt:17292*/
vm_area_realsmith_XGi3vziJRD.len_realsmith_XGi3vziJRD = Tag2_realsmith_XGi3vziJRD(/*int:17408:17408:17292:e*/len_realsmith_XGi3vziJRD);
/*aft_stmt:17292*/
    /*bef_stmt:17313*/
vm_area_realsmith_XGi3vziJRD.address_realsmith_XGi3vziJRD = Tag3_realsmith_XGi3vziJRD(/*int:17408:17408:17313:e*/address_realsmith_XGi3vziJRD);
/*aft_stmt:17313*/
    /*bef_stmt:17334*/
vm_area_realsmith_XGi3vziJRD.pte_realsmith_XGi3vziJRD = Tag4_realsmith_XGi3vziJRD(/*int:17408:17408:17334:e*/pte_realsmith_XGi3vziJRD);
/*aft_stmt:17334*/
    /*bef_stmt:17402*/
/*bef_stmt:17402*/
/*bef_stmt:17402*/
/*bef_stmt:17402*/
return Tag5_realsmith_XGi3vziJRD(/*int:17408:17408:17402:e*/vm_area_realsmith_XGi3vziJRD.nalloc_realsmith_XGi3vziJRD) + Tag6_realsmith_XGi3vziJRD(/*int:17408:17408:17402:e*/vm_area_realsmith_XGi3vziJRD.len_realsmith_XGi3vziJRD) + Tag7_realsmith_XGi3vziJRD(/*int:17408:17408:17402:e*/vm_area_realsmith_XGi3vziJRD.address_realsmith_XGi3vziJRD) + Tag8_realsmith_XGi3vziJRD(/*int:17408:17408:17402:e*/vm_area_realsmith_XGi3vziJRD.pte_realsmith_XGi3vziJRD);
/*aft_stmt:17402*/
/*aft_stmt:17402*/
/*aft_stmt:17402*/
/*aft_stmt:17402*/
}



#include "stdlib.h"
typedef struct {
    int active_realsmith_N5EhWDHiNY;
} dma_t_IzcwHD;
int realsmith_N5EhWDHiNY(unsigned int chan_realsmith_N5EhWDHiNY) {
    dma_t_IzcwHD dma_channels_realsmith_N5EhWDHiNY[256];
    for (unsigned int i_realsmith_N5EhWDHiNY = 0; i_realsmith_N5EhWDHiNY < 256; i_realsmith_N5EhWDHiNY++) {
        dma_channels_realsmith_N5EhWDHiNY[i_realsmith_N5EhWDHiNY].active_realsmith_N5EhWDHiNY = (i_realsmith_N5EhWDHiNY % 2);
    }
    return dma_channels_realsmith_N5EhWDHiNY[chan_realsmith_N5EhWDHiNY].active_realsmith_N5EhWDHiNY;
}

#include "stdlib.h"
int realsmith_ExIDNVyRv5(int nalloc_realsmith_ExIDNVyRv5, int len_realsmith_ExIDNVyRv5, int *body_realsmith_ExIDNVyRv5, int v_realsmith_ExIDNVyRv5) {
    if (nalloc_realsmith_ExIDNVyRv5 == (len_realsmith_ExIDNVyRv5 + 1)) {
        nalloc_realsmith_ExIDNVyRv5 *= 2;
        body_realsmith_ExIDNVyRv5 = (realloc(body_realsmith_ExIDNVyRv5, nalloc_realsmith_ExIDNVyRv5 * sizeof(int)));
    }
    body_realsmith_ExIDNVyRv5[len_realsmith_ExIDNVyRv5++] = v_realsmith_ExIDNVyRv5;
    return len_realsmith_ExIDNVyRv5;
}
int realsmith_proxy_1WHPHSzekC(int p_0_kMoKxzG9Dj, int p_1_adR5uoniFS, int p_2_w05aJMuevQ, int p_3_AjG3XanLaN) {
int proxy_4Bbcv28inq[16] = { 21, 26, p_2_w05aJMuevQ, 5, p_2_w05aJMuevQ, 40, p_2_w05aJMuevQ, p_2_w05aJMuevQ, 91, p_2_w05aJMuevQ, 86, 22, p_2_w05aJMuevQ, p_2_w05aJMuevQ, p_2_w05aJMuevQ, p_2_w05aJMuevQ };
int proxy_ret_Bh3iuL3M8z = realsmith_ExIDNVyRv5(p_0_kMoKxzG9Dj, p_1_adR5uoniFS, proxy_4Bbcv28inq, p_3_AjG3XanLaN);
return proxy_ret_Bh3iuL3M8z;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_SdOt6xRMvt(x) (x)
#include "stdlib.h"
int realsmith_SdOt6xRMvt(int revision_realsmith_SdOt6xRMvt) {
    int *enable_crtc_realsmith_SdOt6xRMvt = ((void*)0);
    /*bef_stmt:17119*/
switch (/*TAG1:STA*/((int)(realsmith_XyDxsvIAhZ((unsigned long)(revision_realsmith_SdOt6xRMvt)+(-67))+(int)(revision_realsmith_SdOt6xRMvt)-(113))+revision_realsmith_SdOt6xRMvt)/*TAG1:END:revision_realsmith_SdOt6xRMvt*/) {
    case 1:
        enable_crtc_realsmith_SdOt6xRMvt = (int *)(malloc(sizeof(int) * 1));
        if (enable_crtc_realsmith_SdOt6xRMvt != ((void*)0)) {
            enable_crtc_realsmith_SdOt6xRMvt[0] = 1;
        }
        break;
    default:
        return -1;
    }
/*aft_stmt:17119*/
    return enable_crtc_realsmith_SdOt6xRMvt != ((void*)0) ? 0 : -1;
}



#include "stdlib.h"
int realsmith_jsqocQqi1C(int bUpdateBBVGA_realsmith_jsqocQqi1C, int hw_conf_flags_realsmith_jsqocQqi1C, int vif_bss_conf_assoc_realsmith_jsqocQqi1C, int uCurrRSSI_realsmith_jsqocQqi1C, long *ldBmThreshold_realsmith_jsqocQqi1C, int *abyBBVGA_realsmith_jsqocQqi1C, int byBBVGACurrent_realsmith_jsqocQqi1C) {
    long dbm_realsmith_jsqocQqi1C;
    int i_realsmith_jsqocQqi1C;
    int uBBVGADiffCount_realsmith_jsqocQqi1C = 0;
    int byBBVGANew_realsmith_jsqocQqi1C = byBBVGACurrent_realsmith_jsqocQqi1C;
    if (!bUpdateBBVGA_realsmith_jsqocQqi1C)
        return 0;
    if (hw_conf_flags_realsmith_jsqocQqi1C & 1)
        return 0;
    if (!(vif_bss_conf_assoc_realsmith_jsqocQqi1C && uCurrRSSI_realsmith_jsqocQqi1C))
        return 0;
    dbm_realsmith_jsqocQqi1C = (long)uCurrRSSI_realsmith_jsqocQqi1C;
    for (i_realsmith_jsqocQqi1C = 0; i_realsmith_jsqocQqi1C < 10; i_realsmith_jsqocQqi1C++) {
        if (dbm_realsmith_jsqocQqi1C < ldBmThreshold_realsmith_jsqocQqi1C[i_realsmith_jsqocQqi1C]) {
            byBBVGANew_realsmith_jsqocQqi1C = abyBBVGA_realsmith_jsqocQqi1C[i_realsmith_jsqocQqi1C];
            break;
        }
    }
    if (byBBVGANew_realsmith_jsqocQqi1C == byBBVGACurrent_realsmith_jsqocQqi1C) {
        uBBVGADiffCount_realsmith_jsqocQqi1C = 1;
        return 0;
    }
    uBBVGADiffCount_realsmith_jsqocQqi1C++;
    if (uBBVGADiffCount_realsmith_jsqocQqi1C == 1) {
    }
    if (uBBVGADiffCount_realsmith_jsqocQqi1C >= 5) {
    }
    return byBBVGANew_realsmith_jsqocQqi1C;
}
int realsmith_proxy_V8Zc7ZRwFg(int p_0_f5uLwATr4b, int p_1_6OQ56y4AMs, int p_2_TI5q9PR7Tp, int p_3_HhLLWsquYW, long p_4_MRMI8AKJRB, int p_5_s4YGeGkCvS, int p_6_2n21ZCQNFU) {
long proxy_6dx5nspsSs[17] = { p_4_MRMI8AKJRB, 63, p_4_MRMI8AKJRB, 78, 58, p_4_MRMI8AKJRB, 50, 6, 97, 86, p_4_MRMI8AKJRB, p_4_MRMI8AKJRB, 77, p_4_MRMI8AKJRB, p_4_MRMI8AKJRB, p_4_MRMI8AKJRB, p_4_MRMI8AKJRB };
int proxy_FSaVQVzrIR[19] = { p_5_s4YGeGkCvS, 100, 80, p_5_s4YGeGkCvS, 56, 57, p_5_s4YGeGkCvS, p_5_s4YGeGkCvS, p_5_s4YGeGkCvS, 59, 20, p_5_s4YGeGkCvS, p_5_s4YGeGkCvS, 71, 15, 83, p_5_s4YGeGkCvS, 73, p_5_s4YGeGkCvS };
int proxy_ret_u92HizpAFi = realsmith_jsqocQqi1C(p_0_f5uLwATr4b, p_1_6OQ56y4AMs, p_2_TI5q9PR7Tp, p_3_HhLLWsquYW, proxy_6dx5nspsSs, proxy_FSaVQVzrIR, p_6_2n21ZCQNFU);
return proxy_ret_u92HizpAFi;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_75YSgf0Wpy(x) (x)
#define Tag2_realsmith_75YSgf0Wpy(x) (x)
#define Tag3_realsmith_75YSgf0Wpy(x) (x)
#include "stdlib.h"
int realsmith_75YSgf0Wpy(int skb_realsmith_75YSgf0Wpy, int obj_data_realsmith_75YSgf0Wpy) {
    /*bef_stmt:17123*/
int priv_realsmith_75YSgf0Wpy = Tag1_realsmith_75YSgf0Wpy(/*int:17146:17146:17123:e*/obj_data_realsmith_75YSgf0Wpy);
/*aft_stmt:17123*/
    /*bef_stmt:17144*/
/*bef_stmt:17144*/
return Tag2_realsmith_75YSgf0Wpy(/*int:17146:17146:17144:e*/skb_realsmith_75YSgf0Wpy) + Tag3_realsmith_75YSgf0Wpy(/*int:17146:17146:17144:e*/priv_realsmith_75YSgf0Wpy);
/*aft_stmt:17144*/
/*aft_stmt:17144*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_jBlF1UGKFI(x) (x)
#define Tag2_realsmith_jBlF1UGKFI(x) (x)
#define Tag3_realsmith_jBlF1UGKFI(x) (x)
#define Tag4_realsmith_jBlF1UGKFI(x) (x)
#include "stdlib.h"
#include "stdint.h"
int realsmith_jBlF1UGKFI(int mutex_locked_realsmith_jBlF1UGKFI, unsigned int cr_reg1_value_realsmith_jBlF1UGKFI) {
    int r_realsmith_jBlF1UGKFI;
    unsigned int tmp_realsmith_jBlF1UGKFI;
    /*bef_stmt:17534*/
if (!Tag1_realsmith_jBlF1UGKFI(/*int:17609:17609:17534:e*/mutex_locked_realsmith_jBlF1UGKFI)) {
        return -1;
    }
/*aft_stmt:17534*/
    /*bef_stmt:17549*/
tmp_realsmith_jBlF1UGKFI = Tag2_realsmith_jBlF1UGKFI(/*unsigned int:17609:17609:17549:e*/cr_reg1_value_realsmith_jBlF1UGKFI);
/*aft_stmt:17549*/
    tmp_realsmith_jBlF1UGKFI &= ~0x1;
    r_realsmith_jBlF1UGKFI = 0;
    /*bef_stmt:17596*/
cr_reg1_value_realsmith_jBlF1UGKFI = Tag3_realsmith_jBlF1UGKFI(/*unsigned int:17609:17609:17596:e*/tmp_realsmith_jBlF1UGKFI);
/*aft_stmt:17596*/
    /*bef_stmt:17607*/
return Tag4_realsmith_jBlF1UGKFI(/*int:17609:17609:17607:e*/r_realsmith_jBlF1UGKFI);
/*aft_stmt:17607*/
}



#include "stdlib.h"
int realsmith_svkto3W1jb(int num_supplies_realsmith_svkto3W1jb, int *supplies_realsmith_svkto3W1jb) {
    if (num_supplies_realsmith_svkto3W1jb <= 0 || supplies_realsmith_svkto3W1jb == ((void*)0)) {
        return -1;
    }
    for (int i_realsmith_svkto3W1jb = 0; i_realsmith_svkto3W1jb < num_supplies_realsmith_svkto3W1jb; i_realsmith_svkto3W1jb++) {
        supplies_realsmith_svkto3W1jb[i_realsmith_svkto3W1jb] = 0;
    }
    return 0;
}
int realsmith_proxy_hXqQcqC8Ur(int p_0_pAkfSwDs2C, int p_1_Rl0ZjqYrVB) {
int proxy_CourVkU8ee[17] = { p_1_Rl0ZjqYrVB, p_1_Rl0ZjqYrVB, 35, p_1_Rl0ZjqYrVB, 19, 39, p_1_Rl0ZjqYrVB, 47, 41, p_1_Rl0ZjqYrVB, p_1_Rl0ZjqYrVB, p_1_Rl0ZjqYrVB, p_1_Rl0ZjqYrVB, 92, 41, p_1_Rl0ZjqYrVB, 1 };
int proxy_ret_JrfpsXNLnc = realsmith_svkto3W1jb(p_0_pAkfSwDs2C, proxy_CourVkU8ee);
return proxy_ret_JrfpsXNLnc;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_pLFWq1IG4F(x) (x)
#include "stdlib.h"
int realsmith_pLFWq1IG4F(int reset_result_realsmith_pLFWq1IG4F, int reset_name_realsmith_pLFWq1IG4F) {
    /*bef_stmt:17119*/
if (Tag1_realsmith_pLFWq1IG4F(/*int:17129:17129:17119:e*/reset_result_realsmith_pLFWq1IG4F)) {
        return -1;
    }
/*aft_stmt:17119*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_b608Nx2Ys1(x) (x)
#define Tag2_realsmith_b608Nx2Ys1(x) (x)
#define Tag3_realsmith_b608Nx2Ys1(x) (x)
#define Tag4_realsmith_b608Nx2Ys1(x) (x)
#define Tag5_realsmith_b608Nx2Ys1(x) (x)
#define Tag6_realsmith_b608Nx2Ys1(x) (x)
#define Tag7_realsmith_b608Nx2Ys1(x) (x)
#include "stdint.h"
int realsmith_b608Nx2Ys1(int reg_value_realsmith_b608Nx2Ys1, int value_realsmith_b608Nx2Ys1, int mask_realsmith_b608Nx2Ys1, int shift_realsmith_b608Nx2Ys1) {
    /*bef_stmt:2048*/
if (Tag1_realsmith_b608Nx2Ys1(/*int:2120:2120:2048:e*/mask_realsmith_b608Nx2Ys1) == 0) {
        /*bef_stmt:2043*/
return Tag2_realsmith_b608Nx2Ys1(/*int:2120:2120:2043:e*/reg_value_realsmith_b608Nx2Ys1);
/*aft_stmt:2043*/
    }
/*aft_stmt:2048*/
    /*bef_stmt:2118*/
/*bef_stmt:2118*/
/*bef_stmt:2118*/
/*bef_stmt:2118*/
/*bef_stmt:2118*/
return (Tag3_realsmith_b608Nx2Ys1(/*int:2120:2120:2118:e*/reg_value_realsmith_b608Nx2Ys1) & ~Tag4_realsmith_b608Nx2Ys1(/*int:2120:2120:2118:e*/mask_realsmith_b608Nx2Ys1)) | (Tag5_realsmith_b608Nx2Ys1(/*int:2120:2120:2118:e*/mask_realsmith_b608Nx2Ys1) & (Tag6_realsmith_b608Nx2Ys1(/*int:2120:2120:2118:e*/value_realsmith_b608Nx2Ys1) << Tag7_realsmith_b608Nx2Ys1(/*int:2120:2120:2118:e*/shift_realsmith_b608Nx2Ys1)));
/*aft_stmt:2118*/
/*aft_stmt:2118*/
/*aft_stmt:2118*/
/*aft_stmt:2118*/
/*aft_stmt:2118*/
}



#include "stdlib.h"
int realsmith_BastJ0zqkR(int vendor_id_realsmith_BastJ0zqkR, int product_id_realsmith_BastJ0zqkR, int fe_adap_init_realsmith_BastJ0zqkR, int lnbp22_init_realsmith_BastJ0zqkR, int tt3650_init_realsmith_BastJ0zqkR) {
    int fe_realsmith_BastJ0zqkR = fe_adap_init_realsmith_BastJ0zqkR;
    if (fe_realsmith_BastJ0zqkR == 0)
        return -19;
    if (lnbp22_init_realsmith_BastJ0zqkR == 0)
        return -1;
    if (vendor_id_realsmith_BastJ0zqkR == 0x0B48 && product_id_realsmith_BastJ0zqkR == 0x1005) {
        tt3650_init_realsmith_BastJ0zqkR;
    }
    return 0;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_YPYcmYbW4j(x) (x)
#define Tag2_realsmith_YPYcmYbW4j(x) (x)
#define Tag3_realsmith_YPYcmYbW4j(x) (x)
#define Tag4_realsmith_YPYcmYbW4j(x) (x)
#define Tag5_realsmith_YPYcmYbW4j(x) (x)
#define Tag6_realsmith_YPYcmYbW4j(x) (x)
#define Tag7_realsmith_YPYcmYbW4j(x) (x)
#include "stdlib.h"
struct kprobe_ERRElC {
    int flags_realsmith_YPYcmYbW4j;
    int hlist_realsmith_YPYcmYbW4j;
    int list_realsmith_YPYcmYbW4j;
    int post_handler_realsmith_YPYcmYbW4j;
    int fault_handler_realsmith_YPYcmYbW4j;
    int pre_handler_realsmith_YPYcmYbW4j;
    int addr_realsmith_YPYcmYbW4j;
};
int realsmith_YPYcmYbW4j(int p_flags_realsmith_YPYcmYbW4j, int p_addr_realsmith_YPYcmYbW4j, int p_post_handler_realsmith_YPYcmYbW4j, int p_list_realsmith_YPYcmYbW4j, int p_hlist_realsmith_YPYcmYbW4j) {
    struct kprobe_ERRElC ap_realsmith_YPYcmYbW4j;
    /*bef_stmt:17313*/
ap_realsmith_YPYcmYbW4j.addr_realsmith_YPYcmYbW4j = Tag1_realsmith_YPYcmYbW4j(/*int:17523:17523:17313:e*/p_addr_realsmith_YPYcmYbW4j);
/*aft_stmt:17313*/
    /*bef_stmt:17362*/
ap_realsmith_YPYcmYbW4j.flags_realsmith_YPYcmYbW4j = Tag2_realsmith_YPYcmYbW4j(/*int:17523:17523:17362:e*/p_flags_realsmith_YPYcmYbW4j) & ~1;
/*aft_stmt:17362*/
    ap_realsmith_YPYcmYbW4j.pre_handler_realsmith_YPYcmYbW4j = 1;
    ap_realsmith_YPYcmYbW4j.fault_handler_realsmith_YPYcmYbW4j = 2;
    /*bef_stmt:17462*/
/*bef_stmt:17462*/
ap_realsmith_YPYcmYbW4j.post_handler_realsmith_YPYcmYbW4j = (Tag3_realsmith_YPYcmYbW4j(/*int:17523:17523:17462:e*/p_post_handler_realsmith_YPYcmYbW4j) && (Tag4_realsmith_YPYcmYbW4j(/*int:17523:17523:17462:e*/p_flags_realsmith_YPYcmYbW4j) != 0)) ? 3 : 0;
/*aft_stmt:17462*/
/*aft_stmt:17462*/
    /*bef_stmt:17483*/
ap_realsmith_YPYcmYbW4j.list_realsmith_YPYcmYbW4j = Tag5_realsmith_YPYcmYbW4j(/*int:17523:17523:17483:e*/p_list_realsmith_YPYcmYbW4j);
/*aft_stmt:17483*/
    /*bef_stmt:17504*/
ap_realsmith_YPYcmYbW4j.hlist_realsmith_YPYcmYbW4j = Tag6_realsmith_YPYcmYbW4j(/*int:17523:17523:17504:e*/p_hlist_realsmith_YPYcmYbW4j);
/*aft_stmt:17504*/
    /*bef_stmt:17521*/
return Tag7_realsmith_YPYcmYbW4j(/*int:17523:17523:17521:e*/ap_realsmith_YPYcmYbW4j.flags_realsmith_YPYcmYbW4j);
/*aft_stmt:17521*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_1dUC8nsdHU(x) (x)
#define Tag2_realsmith_1dUC8nsdHU(x) (x)
#define Tag3_realsmith_1dUC8nsdHU(x) (x)
#include "stdlib.h"
struct encrypted_key_payload_zza5oL {
    int data_realsmith_1dUC8nsdHU; // Assuming some integer data for demonstration
};
int realsmith_1dUC8nsdHU(int input_realsmith_1dUC8nsdHU) {
    struct encrypted_key_payload_zza5oL epayload_realsmith_1dUC8nsdHU;
    /*bef_stmt:17151*/
epayload_realsmith_1dUC8nsdHU.data_realsmith_1dUC8nsdHU = /*TAG1:STA*/((int)(realsmith_proxy_tWfyk5UG0B((int)(input_realsmith_1dUC8nsdHU)+(-46), (int)(input_realsmith_1dUC8nsdHU)+(-49), (int)(input_realsmith_1dUC8nsdHU)+(-52), (int)(input_realsmith_1dUC8nsdHU)+(-51), (int)(input_realsmith_1dUC8nsdHU)+(-47))+(int)(input_realsmith_1dUC8nsdHU)-(49))+input_realsmith_1dUC8nsdHU)/*TAG1:END:input_realsmith_1dUC8nsdHU*/;
/*aft_stmt:17151*/
    /*bef_stmt:17203*/
int decrypted_data_realsmith_1dUC8nsdHU = /*TAG2:STA*/((int)(realsmith_VypwRu4kxl((int)(epayload_realsmith_1dUC8nsdHU.data_realsmith_1dUC8nsdHU)+(36))+(int)(epayload_realsmith_1dUC8nsdHU.data_realsmith_1dUC8nsdHU)-(132))+epayload_realsmith_1dUC8nsdHU.data_realsmith_1dUC8nsdHU)/*TAG2:END:epayload_realsmith_1dUC8nsdHU.data_realsmith_1dUC8nsdHU*/ ^ 0xABCD;
/*aft_stmt:17203*/
    /*bef_stmt:17213*/
return /*TAG3:STA*/((int)(realsmith_v4xhGstNEU((int)(decrypted_data_realsmith_1dUC8nsdHU)+(-43998), (int)(decrypted_data_realsmith_1dUC8nsdHU)+(-43941))+(int)(decrypted_data_realsmith_1dUC8nsdHU)-(44029))+decrypted_data_realsmith_1dUC8nsdHU)/*TAG3:END:decrypted_data_realsmith_1dUC8nsdHU*/;
/*aft_stmt:17213*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_yl09SDIRGA(x) (x)
#define Tag2_realsmith_yl09SDIRGA(x) (x)
#include "stdlib.h"
struct input_dev_poller_XswdqJ {
    int work_realsmith_yl09SDIRGA; // Placeholder for the work variable
};
int realsmith_yl09SDIRGA(int work_realsmith_yl09SDIRGA) {
    struct input_dev_poller_XswdqJ poller_realsmith_yl09SDIRGA;
    /*bef_stmt:17151*/
poller_realsmith_yl09SDIRGA.work_realsmith_yl09SDIRGA = Tag1_realsmith_yl09SDIRGA(/*int:17199:17199:17151:e*/work_realsmith_yl09SDIRGA);
/*aft_stmt:17151*/
    poller_realsmith_yl09SDIRGA.work_realsmith_yl09SDIRGA = 0;
    /*bef_stmt:17197*/
return Tag2_realsmith_yl09SDIRGA(/*int:17199:17199:17197:e*/poller_realsmith_yl09SDIRGA.work_realsmith_yl09SDIRGA);
/*aft_stmt:17197*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_nnH3U1L7hW(x) (x)
#define Tag2_realsmith_nnH3U1L7hW(x) (x)
#define Tag3_realsmith_nnH3U1L7hW(x) (x)
#define Tag4_realsmith_nnH3U1L7hW(x) (x)
#include "stdbool.h"
#include "stdint.h"
int realsmith_nnH3U1L7hW(unsigned long int bssid_high_realsmith_nnH3U1L7hW, unsigned long int bssid_low_realsmith_nnH3U1L7hW, unsigned long int mac_high_realsmith_nnH3U1L7hW, unsigned long int mac_low_realsmith_nnH3U1L7hW) {
    /*bef_stmt:2074*/
/*bef_stmt:2074*/
/*bef_stmt:2074*/
/*bef_stmt:2074*/
if (Tag1_realsmith_nnH3U1L7hW(/*unsigned long:2084:2084:2074:e*/bssid_high_realsmith_nnH3U1L7hW) != Tag2_realsmith_nnH3U1L7hW(/*unsigned long:2084:2084:2074:e*/mac_high_realsmith_nnH3U1L7hW) || Tag3_realsmith_nnH3U1L7hW(/*unsigned long:2084:2084:2074:e*/bssid_low_realsmith_nnH3U1L7hW) != Tag4_realsmith_nnH3U1L7hW(/*unsigned long:2084:2084:2074:e*/mac_low_realsmith_nnH3U1L7hW)) {
        return -1;
    }
/*aft_stmt:2074*/
/*aft_stmt:2074*/
/*aft_stmt:2074*/
/*aft_stmt:2074*/
    return 0;
}



#include "stdlib.h"
struct iwl_mvm_phy_ctxt_AZWY7z {
    int ref_realsmith_pmyYZn0udP;
};
int realsmith_pmyYZn0udP(int *phy_ctxts_realsmith_pmyYZn0udP, int mutex_realsmith_pmyYZn0udP) {
    for (long unsigned int i_realsmith_pmyYZn0udP = 0; i_realsmith_pmyYZn0udP < 10; i_realsmith_pmyYZn0udP++) {
        if (phy_ctxts_realsmith_pmyYZn0udP[i_realsmith_pmyYZn0udP] == 0) {
            return i_realsmith_pmyYZn0udP;
        }
    }
    return -1;
}
int realsmith_proxy_NmgBMIkXxP(int p_0_PGxJppMFDN, int p_1_sDipjlXE2T) {
int proxy_9tgh5drW28[10] = { 6, 74, 83, 2, p_0_PGxJppMFDN, 90, 33, p_0_PGxJppMFDN, 60, 78 };
int proxy_ret_AiGDyamGMM = realsmith_pmyYZn0udP(proxy_9tgh5drW28, p_1_sDipjlXE2T);
return proxy_ret_AiGDyamGMM;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_x2EsgkBJFQ(x) (x)
#define Tag2_realsmith_x2EsgkBJFQ(x) (x)
#include "stdlib.h"
int realsmith_x2EsgkBJFQ(int tuning_tx_result_realsmith_x2EsgkBJFQ, int tuning_rx_result_realsmith_x2EsgkBJFQ) {
    /*bef_stmt:17127*/
if (Tag1_realsmith_x2EsgkBJFQ(/*int:17168:17168:17127:e*/tuning_tx_result_realsmith_x2EsgkBJFQ) != 0) {
        return -1;
    }
/*aft_stmt:17127*/
    /*bef_stmt:17158*/
if (Tag2_realsmith_x2EsgkBJFQ(/*int:17168:17168:17158:e*/tuning_rx_result_realsmith_x2EsgkBJFQ) != 0) {
        return -1;
    }
/*aft_stmt:17158*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_9A7SFbLwFV(x) (x)
#define Tag2_realsmith_9A7SFbLwFV(x) (x)
#define Tag3_realsmith_9A7SFbLwFV(x) (x)
#define Tag4_realsmith_9A7SFbLwFV(x) (x)
#include "stdint.h"
#include "stdio.h"
int realsmith_9A7SFbLwFV(int reg_value_realsmith_9A7SFbLwFV) {
    int ret_realsmith_9A7SFbLwFV = 0;
    int result_realsmith_9A7SFbLwFV;
    /*bef_stmt:11676*/
if (Tag1_realsmith_9A7SFbLwFV(/*int:11691:11691:11676:e*/reg_value_realsmith_9A7SFbLwFV) < 0) {
        ret_realsmith_9A7SFbLwFV = -1;
    } else {
        /*bef_stmt:11659*/
result_realsmith_9A7SFbLwFV = (Tag2_realsmith_9A7SFbLwFV(/*int:11691:11691:11659:e*/reg_value_realsmith_9A7SFbLwFV) & 0x7F);
/*aft_stmt:11659*/
        /*bef_stmt:11670*/
return Tag3_realsmith_9A7SFbLwFV(/*int:11691:11691:11670:e*/result_realsmith_9A7SFbLwFV);
/*aft_stmt:11670*/
    }
/*aft_stmt:11676*/
    /*bef_stmt:11689*/
return Tag4_realsmith_9A7SFbLwFV(/*int:11691:11691:11689:e*/ret_realsmith_9A7SFbLwFV);
/*aft_stmt:11689*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_eL1v7jx7kV(x) (x)
#define Tag2_realsmith_eL1v7jx7kV(x) (x)
#define Tag3_realsmith_eL1v7jx7kV(x) (x)
#define Tag4_realsmith_eL1v7jx7kV(x) (x)
#define Tag5_realsmith_eL1v7jx7kV(x) (x)
#define Tag6_realsmith_eL1v7jx7kV(x) (x)
#define Tag7_realsmith_eL1v7jx7kV(x) (x)
#define Tag8_realsmith_eL1v7jx7kV(x) (x)
#define Tag9_realsmith_eL1v7jx7kV(x) (x)
#include "stdlib.h"
int realsmith_eL1v7jx7kV(int mmu_ptr_realsmith_eL1v7jx7kV, unsigned long iova_realsmith_eL1v7jx7kV, unsigned long paddr_realsmith_eL1v7jx7kV) {
    long unsigned int dummy_page_pteval_realsmith_eL1v7jx7kV = 0;
    long unsigned int l1pt_idx_realsmith_eL1v7jx7kV, l2pt_idx_realsmith_eL1v7jx7kV;
    unsigned long flags_realsmith_eL1v7jx7kV;
    long unsigned int *l2pt_realsmith_eL1v7jx7kV;
    /*bef_stmt:17250*/
if (Tag1_realsmith_eL1v7jx7kV(/*int:17537:17537:17250:e*/mmu_ptr_realsmith_eL1v7jx7kV) == 0)
        return -1;
/*aft_stmt:17250*/
    /*bef_stmt:17288*/
l1pt_idx_realsmith_eL1v7jx7kV = (Tag2_realsmith_eL1v7jx7kV(/*unsigned long:17537:17537:17288:e*/iova_realsmith_eL1v7jx7kV) >> 20) & 0xFFF;
/*aft_stmt:17288*/
    /*bef_stmt:17326*/
l2pt_idx_realsmith_eL1v7jx7kV = (Tag3_realsmith_eL1v7jx7kV(/*unsigned long:17537:17537:17326:e*/iova_realsmith_eL1v7jx7kV) >> 12) & 0xFF;
/*aft_stmt:17326*/
    /*bef_stmt:17382*/
/*bef_stmt:17382*/
l2pt_realsmith_eL1v7jx7kV = (long unsigned int *)(Tag4_realsmith_eL1v7jx7kV(/*int:17537:17537:17382:e*/mmu_ptr_realsmith_eL1v7jx7kV) + Tag5_realsmith_eL1v7jx7kV(/*unsigned long:17537:17537:17382:e*/l1pt_idx_realsmith_eL1v7jx7kV) * sizeof(long unsigned int));
/*aft_stmt:17382*/
/*aft_stmt:17382*/
    if (l2pt_realsmith_eL1v7jx7kV == ((void*)0))
        return -12;
    flags_realsmith_eL1v7jx7kV = 0;
    /*bef_stmt:17490*/
/*bef_stmt:17490*/
if (l2pt_realsmith_eL1v7jx7kV[Tag6_realsmith_eL1v7jx7kV(/*unsigned long:17537:17537:17490:e*/l2pt_idx_realsmith_eL1v7jx7kV)] != Tag7_realsmith_eL1v7jx7kV(/*unsigned long:17537:17537:17490:e*/dummy_page_pteval_realsmith_eL1v7jx7kV)) {
        return -16;
    }
/*aft_stmt:17490*/
/*aft_stmt:17490*/
    /*bef_stmt:17527*/
/*bef_stmt:17527*/
l2pt_realsmith_eL1v7jx7kV[Tag8_realsmith_eL1v7jx7kV(/*unsigned long:17537:17537:17527:e*/l2pt_idx_realsmith_eL1v7jx7kV)] = (long unsigned int)Tag9_realsmith_eL1v7jx7kV(/*unsigned long:17537:17537:17527:e*/paddr_realsmith_eL1v7jx7kV);
/*aft_stmt:17527*/
/*aft_stmt:17527*/
    return 0;
}



#include "stdlib.h"
int realsmith_Vq3SbJrxi9(int group_realsmith_Vq3SbJrxi9, unsigned long *configs_realsmith_Vq3SbJrxi9, unsigned num_configs_realsmith_Vq3SbJrxi9) {
    const unsigned pins_realsmith_Vq3SbJrxi9[] = {0, 1, 2};
    unsigned npins_realsmith_Vq3SbJrxi9 = sizeof(pins_realsmith_Vq3SbJrxi9) / sizeof(pins_realsmith_Vq3SbJrxi9[0]);
    int ret_realsmith_Vq3SbJrxi9 = 0;
    for (int i_realsmith_Vq3SbJrxi9 = 0; i_realsmith_Vq3SbJrxi9 < npins_realsmith_Vq3SbJrxi9; i_realsmith_Vq3SbJrxi9++) {
        if (configs_realsmith_Vq3SbJrxi9[0] == 0) {
            return -1;
        }
    }
    return ret_realsmith_Vq3SbJrxi9;
}
int realsmith_proxy_ZLFFwIKFW0(int p_0_4jf6w7679z, unsigned long p_1_PAycv3GmsF, unsigned int p_2_YojY5OBepO) {
int proxy_ret_ykCNs753Ot = realsmith_Vq3SbJrxi9(p_0_4jf6w7679z, &(p_1_PAycv3GmsF), p_2_YojY5OBepO);
return proxy_ret_ykCNs753Ot;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_LXZMAaG7r3(x) (x)
#define Tag2_realsmith_LXZMAaG7r3(x) (x)
#include "stdbool.h"
struct urdev_TVSxRx {
    int open_flag_realsmith_LXZMAaG7r3; 
};
struct ccw_device_TVSxRx {
    int dev_realsmith_LXZMAaG7r3; 
};
int realsmith_LXZMAaG7r3(int open_flag_realsmith_LXZMAaG7r3) {
    struct urdev_TVSxRx urd_realsmith_LXZMAaG7r3;
    /*bef_stmt:681*/
urd_realsmith_LXZMAaG7r3.open_flag_realsmith_LXZMAaG7r3 = Tag1_realsmith_LXZMAaG7r3(/*int:731:731:681:e*/open_flag_realsmith_LXZMAaG7r3);
/*aft_stmt:681*/
    /*bef_stmt:721*/
if (Tag2_realsmith_LXZMAaG7r3(/*int:731:731:721:e*/urd_realsmith_LXZMAaG7r3.open_flag_realsmith_LXZMAaG7r3)) {
        return -1;
    }
/*aft_stmt:721*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_syMvnnAjt3(x) (x)
#define Tag2_realsmith_syMvnnAjt3(x) (x)
#define Tag3_realsmith_syMvnnAjt3(x) (x)
#include "stdlib.h"
struct ifmcaddr6_WNMkZ4 {
    struct ifmcaddr6_WNMkZ4* next_realsmith_syMvnnAjt3;
    int mca_users_realsmith_syMvnnAjt3;
};
struct inet6_dev_WNMkZ4 {
    int dead_realsmith_syMvnnAjt3;
    struct ifmcaddr6_WNMkZ4* mc_list_realsmith_syMvnnAjt3;
};
struct net_device_WNMkZ4 {};
int realsmith_syMvnnAjt3(int dev_id_realsmith_syMvnnAjt3, int addr_id_realsmith_syMvnnAjt3, unsigned int mode_realsmith_syMvnnAjt3) {
    struct inet6_dev_WNMkZ4 idev_realsmith_syMvnnAjt3;
    struct ifmcaddr6_WNMkZ4* mc_realsmith_syMvnnAjt3;
    idev_realsmith_syMvnnAjt3.dead_realsmith_syMvnnAjt3 = 0;
    idev_realsmith_syMvnnAjt3.mc_list_realsmith_syMvnnAjt3 = ((void*)0);
    /*bef_stmt:17391*/
if (Tag1_realsmith_syMvnnAjt3(/*int:17675:17675:17391:e*/dev_id_realsmith_syMvnnAjt3) < 0) {
        return -1;
    }
/*aft_stmt:17391*/
    for (mc_realsmith_syMvnnAjt3 = idev_realsmith_syMvnnAjt3.mc_list_realsmith_syMvnnAjt3; mc_realsmith_syMvnnAjt3; mc_realsmith_syMvnnAjt3 = mc_realsmith_syMvnnAjt3->next_realsmith_syMvnnAjt3) {
        /*bef_stmt:17505*/
/*bef_stmt:17505*/
if (Tag2_realsmith_syMvnnAjt3(/*int:17675:17675:17505:e*/mc_realsmith_syMvnnAjt3->mca_users_realsmith_syMvnnAjt3) == Tag3_realsmith_syMvnnAjt3(/*int:17675:17675:17505:e*/addr_id_realsmith_syMvnnAjt3)) {
            mc_realsmith_syMvnnAjt3->mca_users_realsmith_syMvnnAjt3++;
            return 0;
        }
/*aft_stmt:17505*/
/*aft_stmt:17505*/
    }
    mc_realsmith_syMvnnAjt3 = (struct ifmcaddr6_WNMkZ4*)(malloc(sizeof(struct ifmcaddr6_WNMkZ4)));
    if (!mc_realsmith_syMvnnAjt3) {
        return -2;
    }
    mc_realsmith_syMvnnAjt3->next_realsmith_syMvnnAjt3 = idev_realsmith_syMvnnAjt3.mc_list_realsmith_syMvnnAjt3;
    idev_realsmith_syMvnnAjt3.mc_list_realsmith_syMvnnAjt3 = mc_realsmith_syMvnnAjt3;
    mc_realsmith_syMvnnAjt3->mca_users_realsmith_syMvnnAjt3 = 1;
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_M9S0eJTIF7(x) (x)
#define Tag2_realsmith_M9S0eJTIF7(x) (x)
#define Tag3_realsmith_M9S0eJTIF7(x) (x)
#include "stdbool.h"
int realsmith_M9S0eJTIF7(int bias_level_realsmith_M9S0eJTIF7, int current_bias_level_realsmith_M9S0eJTIF7) {
    int ret_realsmith_M9S0eJTIF7 = 0;
    /*bef_stmt:617*/
switch (Tag1_realsmith_M9S0eJTIF7(/*int:734:734:617:e*/bias_level_realsmith_M9S0eJTIF7)) {
    case 1:
        break;
    case 2:
        break;
    /*bef_stmt:655*/
case 3:
        if (Tag2_realsmith_M9S0eJTIF7(/*int:734:734:655:e*/current_bias_level_realsmith_M9S0eJTIF7) == 0)
            ret_realsmith_M9S0eJTIF7 = 1;
/*aft_stmt:655*/
        break;
    case 0:
        ret_realsmith_M9S0eJTIF7 = 0;
        break;
    }
/*aft_stmt:617*/
    /*bef_stmt:732*/
return Tag3_realsmith_M9S0eJTIF7(/*int:734:734:732:e*/ret_realsmith_M9S0eJTIF7);
/*aft_stmt:732*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_wNzlskDcxg(x) (x)
#define Tag2_realsmith_wNzlskDcxg(x) (x)
#define Tag3_realsmith_wNzlskDcxg(x) (x)
#define Tag4_realsmith_wNzlskDcxg(x) (x)
#define Tag5_realsmith_wNzlskDcxg(x) (x)
#define Tag6_realsmith_wNzlskDcxg(x) (x)
#define Tag7_realsmith_wNzlskDcxg(x) (x)
#define Tag8_realsmith_wNzlskDcxg(x) (x)
#define Tag9_realsmith_wNzlskDcxg(x) (x)
#define Tag10_realsmith_wNzlskDcxg(x) (x)
#include "stdlib.h"
struct ocfs2_lock_res_Li3cih {
    int l_flags_realsmith_wNzlskDcxg;
    int l_lock_realsmith_wNzlskDcxg;
};
struct ocfs2_dentry_lock_Li3cih {
    int dl_count_realsmith_wNzlskDcxg;
    int dl_inode_mode_realsmith_wNzlskDcxg;
    int dl_parent_blkno_realsmith_wNzlskDcxg;
};
int realsmith_wNzlskDcxg(int lock_flags_realsmith_wNzlskDcxg, int dl_count_realsmith_wNzlskDcxg, int inode_mode_realsmith_wNzlskDcxg, int blocking_realsmith_wNzlskDcxg) {
    struct ocfs2_lock_res_Li3cih lockres_realsmith_wNzlskDcxg;
    struct ocfs2_dentry_lock_Li3cih dl_realsmith_wNzlskDcxg;
    /*bef_stmt:17313*/
lockres_realsmith_wNzlskDcxg.l_flags_realsmith_wNzlskDcxg = /*TAG1:STA*/((int)(realsmith_nTAq1e3ZPM((int)(lock_flags_realsmith_wNzlskDcxg)+(33), (int)(lock_flags_realsmith_wNzlskDcxg)+(2), (int)(lock_flags_realsmith_wNzlskDcxg)+(-58))+(int)(lock_flags_realsmith_wNzlskDcxg)-(65))+lock_flags_realsmith_wNzlskDcxg)/*TAG1:END:lock_flags_realsmith_wNzlskDcxg*/;
/*aft_stmt:17313*/
    /*bef_stmt:17346*/
dl_realsmith_wNzlskDcxg.dl_count_realsmith_wNzlskDcxg = /*TAG2:STA*/((int)(realsmith_proxy_OI6qI14oYR((int)(dl_count_realsmith_wNzlskDcxg)+(91), (int)(dl_count_realsmith_wNzlskDcxg)+(4), (int)(dl_count_realsmith_wNzlskDcxg)+(5), (int)(dl_count_realsmith_wNzlskDcxg)+(90))+(int)(dl_count_realsmith_wNzlskDcxg)-(10))+dl_count_realsmith_wNzlskDcxg)/*TAG2:END:dl_count_realsmith_wNzlskDcxg*/;
/*aft_stmt:17346*/
    /*bef_stmt:17380*/
dl_realsmith_wNzlskDcxg.dl_inode_mode_realsmith_wNzlskDcxg = /*TAG3:STA*/((int)(realsmith_6PoWdxLqMD((int)(inode_mode_realsmith_wNzlskDcxg)+(-28), (int)(inode_mode_realsmith_wNzlskDcxg)+(-60), (int)(inode_mode_realsmith_wNzlskDcxg)+(-82), (int)(inode_mode_realsmith_wNzlskDcxg)+(-68))+(int)(inode_mode_realsmith_wNzlskDcxg)-(89))+inode_mode_realsmith_wNzlskDcxg)/*TAG3:END:inode_mode_realsmith_wNzlskDcxg*/;
/*aft_stmt:17380*/
    /*bef_stmt:17408*/
if (/*TAG4:STA*/((int)(realsmith_N5EhWDHiNY((unsigned int)(blocking_realsmith_wNzlskDcxg)+(-34))+(int)(blocking_realsmith_wNzlskDcxg)-(64))+blocking_realsmith_wNzlskDcxg)/*TAG4:END:blocking_realsmith_wNzlskDcxg*/ == 1)
        return 0;
/*aft_stmt:17408*/
    int ip_flags_realsmith_wNzlskDcxg = 4;
    int extra_ref_realsmith_wNzlskDcxg = 0;
    /*bef_stmt:17532*/
/*bef_stmt:17532*/
if (!(/*TAG5:STA*/((int)(realsmith_EX5dCcgucR((int)(lockres_realsmith_wNzlskDcxg.l_flags_realsmith_wNzlskDcxg)+(12), (int)(lockres_realsmith_wNzlskDcxg.l_flags_realsmith_wNzlskDcxg)+(-52), (int)(lockres_realsmith_wNzlskDcxg.l_flags_realsmith_wNzlskDcxg)+(-45))+(int)(lockres_realsmith_wNzlskDcxg.l_flags_realsmith_wNzlskDcxg)-(175))+lockres_realsmith_wNzlskDcxg.l_flags_realsmith_wNzlskDcxg)/*TAG5:END:lockres_realsmith_wNzlskDcxg.l_flags_realsmith_wNzlskDcxg*/ & 2) && /*TAG6:STA*/((int)(realsmith_proxy_1WHPHSzekC((int)(blocking_realsmith_wNzlskDcxg)+(-62), (int)(inode_mode_realsmith_wNzlskDcxg)+(-86), (int)(dl_count_realsmith_wNzlskDcxg)+(-6), (int)(dl_count_realsmith_wNzlskDcxg)+(-5))+(int)(lockres_realsmith_wNzlskDcxg.l_flags_realsmith_wNzlskDcxg)+(int)(dl_count_realsmith_wNzlskDcxg)+(int)(lock_flags_realsmith_wNzlskDcxg)+(int)(inode_mode_realsmith_wNzlskDcxg)+(int)(blocking_realsmith_wNzlskDcxg)-(291))+dl_realsmith_wNzlskDcxg.dl_count_realsmith_wNzlskDcxg)/*TAG6:END:dl_realsmith_wNzlskDcxg.dl_count_realsmith_wNzlskDcxg*/) {
        dl_realsmith_wNzlskDcxg.dl_count_realsmith_wNzlskDcxg++;
        extra_ref_realsmith_wNzlskDcxg = 1;
    }
/*aft_stmt:17532*/
/*aft_stmt:17532*/
    /*bef_stmt:17552*/
if (!/*TAG7:STA*/((int)(realsmith_r4M4k5Y3KN((unsigned long)(extra_ref_realsmith_wNzlskDcxg)+(24), (int)(extra_ref_realsmith_wNzlskDcxg)+(39), (int)(extra_ref_realsmith_wNzlskDcxg)+(83))+(int)(extra_ref_realsmith_wNzlskDcxg)-(1))+extra_ref_realsmith_wNzlskDcxg)/*TAG7:END:extra_ref_realsmith_wNzlskDcxg*/)
        return 0;
/*aft_stmt:17552*/
    while (1) {
        /*bef_stmt:17636*/
if (/*TAG8:STA*/((int)(realsmith_KpI8AZysh9((int)(lock_flags_realsmith_wNzlskDcxg)+(1))+(int)(dl_count_realsmith_wNzlskDcxg)+(int)(blocking_realsmith_wNzlskDcxg)+(int)(lockres_realsmith_wNzlskDcxg.l_flags_realsmith_wNzlskDcxg)+(int)(lock_flags_realsmith_wNzlskDcxg)+(int)(inode_mode_realsmith_wNzlskDcxg)-(289))+dl_realsmith_wNzlskDcxg.dl_count_realsmith_wNzlskDcxg)/*TAG8:END:dl_realsmith_wNzlskDcxg.dl_count_realsmith_wNzlskDcxg*/ > 0) {
            /*bef_stmt:17611*/
if (((/*TAG9:STA*/((int)(realsmith_WdG2v7r1f9((int)(dl_realsmith_wNzlskDcxg.dl_inode_mode_realsmith_wNzlskDcxg)+(-76))+(int)(dl_realsmith_wNzlskDcxg.dl_inode_mode_realsmith_wNzlskDcxg)-(120))+dl_realsmith_wNzlskDcxg.dl_inode_mode_realsmith_wNzlskDcxg)/*TAG9:END:dl_realsmith_wNzlskDcxg.dl_inode_mode_realsmith_wNzlskDcxg*/) & 0x4000))
                ;
/*aft_stmt:17611*/
            dl_realsmith_wNzlskDcxg.dl_count_realsmith_wNzlskDcxg--;
        } else {
            break;
        }
/*aft_stmt:17636*/
    }
    /*bef_stmt:17676*/
if (/*TAG10:STA*/((int)(realsmith_XGi3vziJRD((int)(dl_realsmith_wNzlskDcxg.dl_count_realsmith_wNzlskDcxg)+(5), (int)(dl_realsmith_wNzlskDcxg.dl_count_realsmith_wNzlskDcxg)+(75), (int)(dl_realsmith_wNzlskDcxg.dl_count_realsmith_wNzlskDcxg)+(44), (int)(dl_realsmith_wNzlskDcxg.dl_count_realsmith_wNzlskDcxg)+(26))+(int)(dl_realsmith_wNzlskDcxg.dl_count_realsmith_wNzlskDcxg)-(150))+dl_realsmith_wNzlskDcxg.dl_count_realsmith_wNzlskDcxg)/*TAG10:END:dl_realsmith_wNzlskDcxg.dl_count_realsmith_wNzlskDcxg*/ == 1)
        return 2;
/*aft_stmt:17676*/
    return 1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_HthzxvTVEt(x) (x)
#define Tag2_realsmith_HthzxvTVEt(x) (x)
#define Tag3_realsmith_HthzxvTVEt(x) (x)
#define Tag4_realsmith_HthzxvTVEt(x) (x)
#define Tag5_realsmith_HthzxvTVEt(x) (x)
#define Tag6_realsmith_HthzxvTVEt(x) (x)
#define Tag7_realsmith_HthzxvTVEt(x) (x)
#define Tag8_realsmith_HthzxvTVEt(x) (x)
#define Tag9_realsmith_HthzxvTVEt(x) (x)
#define Tag10_realsmith_HthzxvTVEt(x) (x)
#include "stdbool.h"
int realsmith_HthzxvTVEt(int chip_type_realsmith_HthzxvTVEt, int chips_realsmith_HthzxvTVEt) {
    /*bef_stmt:837*/
/*bef_stmt:837*/
/*bef_stmt:837*/
/*bef_stmt:837*/
/*bef_stmt:837*/
/*bef_stmt:837*/
/*bef_stmt:837*/
/*bef_stmt:837*/
/*bef_stmt:837*/
/*bef_stmt:837*/
if (Tag1_realsmith_HthzxvTVEt(/*int:843:843:837:e*/chip_type_realsmith_HthzxvTVEt) == 1)
        return (Tag2_realsmith_HthzxvTVEt(/*int:843:843:837:e*/chips_realsmith_HthzxvTVEt) & 0x1) != 0;
    else if (Tag3_realsmith_HthzxvTVEt(/*int:843:843:837:e*/chip_type_realsmith_HthzxvTVEt) == 2)
        return (Tag4_realsmith_HthzxvTVEt(/*int:843:843:837:e*/chips_realsmith_HthzxvTVEt) & 0x2) != 0;
    else if (Tag5_realsmith_HthzxvTVEt(/*int:843:843:837:e*/chip_type_realsmith_HthzxvTVEt) == 3)
        return (Tag6_realsmith_HthzxvTVEt(/*int:843:843:837:e*/chips_realsmith_HthzxvTVEt) & 0x4) != 0;
    else if (Tag7_realsmith_HthzxvTVEt(/*int:843:843:837:e*/chip_type_realsmith_HthzxvTVEt) == 4)
        return (Tag8_realsmith_HthzxvTVEt(/*int:843:843:837:e*/chips_realsmith_HthzxvTVEt) & 0x8) != 0;
    else if (Tag9_realsmith_HthzxvTVEt(/*int:843:843:837:e*/chip_type_realsmith_HthzxvTVEt) == 5)
        return (Tag10_realsmith_HthzxvTVEt(/*int:843:843:837:e*/chips_realsmith_HthzxvTVEt) & 0x10) != 0;
    else
        return 0;
/*aft_stmt:837*/
/*aft_stmt:837*/
/*aft_stmt:837*/
/*aft_stmt:837*/
/*aft_stmt:837*/
/*aft_stmt:837*/
/*aft_stmt:837*/
/*aft_stmt:837*/
/*aft_stmt:837*/
/*aft_stmt:837*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_lVgA98UQ6N(x) (x)
#define Tag2_realsmith_lVgA98UQ6N(x) (x)
#include "stdlib.h"
struct regmap_PTpvFS {
    unsigned long hwlock_realsmith_lVgA98UQ6N;
    unsigned long spinlock_flags_realsmith_lVgA98UQ6N;
};
int realsmith_lVgA98UQ6N(unsigned long hwlock_realsmith_lVgA98UQ6N, unsigned long spinlock_flags_realsmith_lVgA98UQ6N) {
    /*bef_stmt:17182*/
/*bef_stmt:17182*/
return (/*TAG1:STA*/((unsigned long)(realsmith_proxy_nGxxpB91yI((int)(hwlock_realsmith_lVgA98UQ6N)+(-71), (int)(hwlock_realsmith_lVgA98UQ6N)+(-90), (int)(hwlock_realsmith_lVgA98UQ6N)+(-62))+(int)(hwlock_realsmith_lVgA98UQ6N)-(98))+hwlock_realsmith_lVgA98UQ6N)/*TAG1:END:hwlock_realsmith_lVgA98UQ6N*/ + /*TAG2:STA*/((unsigned long)(realsmith_proxy_mMdzzqBlxc((int)(spinlock_flags_realsmith_lVgA98UQ6N)+(-44), (int)(spinlock_flags_realsmith_lVgA98UQ6N)+(-89))+(int)(spinlock_flags_realsmith_lVgA98UQ6N)-(97))+spinlock_flags_realsmith_lVgA98UQ6N)/*TAG2:END:spinlock_flags_realsmith_lVgA98UQ6N*/) % 2;
/*aft_stmt:17182*/
/*aft_stmt:17182*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_5mKBnGz5Qi(x) (x)
#define Tag2_realsmith_5mKBnGz5Qi(x) (x)
#define Tag3_realsmith_5mKBnGz5Qi(x) (x)
#define Tag4_realsmith_5mKBnGz5Qi(x) (x)
#define Tag5_realsmith_5mKBnGz5Qi(x) (x)
#include "stdlib.h"
int realsmith_5mKBnGz5Qi(int dmi_check_realsmith_5mKBnGz5Qi, int current_state_realsmith_5mKBnGz5Qi, int cache_line_size_realsmith_5mKBnGz5Qi) {
    int toshiba_line_size_realsmith_5mKBnGz5Qi = 0;
    int PCI_D3cold_realsmith_5mKBnGz5Qi = 3;
    /*bef_stmt:17184*/
/*bef_stmt:17184*/
if (!Tag1_realsmith_5mKBnGz5Qi(/*int:17227:17227:17184:e*/dmi_check_realsmith_5mKBnGz5Qi))
        return Tag2_realsmith_5mKBnGz5Qi(/*int:17227:17227:17184:e*/current_state_realsmith_5mKBnGz5Qi);
/*aft_stmt:17184*/
/*aft_stmt:17184*/
    /*bef_stmt:17199*/
current_state_realsmith_5mKBnGz5Qi = Tag3_realsmith_5mKBnGz5Qi(/*int:17227:17227:17199:e*/PCI_D3cold_realsmith_5mKBnGz5Qi);
/*aft_stmt:17199*/
    /*bef_stmt:17214*/
toshiba_line_size_realsmith_5mKBnGz5Qi = Tag4_realsmith_5mKBnGz5Qi(/*int:17227:17227:17214:e*/cache_line_size_realsmith_5mKBnGz5Qi);
/*aft_stmt:17214*/
    /*bef_stmt:17225*/
return Tag5_realsmith_5mKBnGz5Qi(/*int:17227:17227:17225:e*/current_state_realsmith_5mKBnGz5Qi);
/*aft_stmt:17225*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_faw8QK5nn2(x) (x)
#define Tag2_realsmith_faw8QK5nn2(x) (x)
#include "stdlib.h"
struct msg_security_struct_tMh12z {
    int sid_realsmith_faw8QK5nn2;
};
struct msg_msg_tMh12z {
    int dummy_realsmith_faw8QK5nn2;
};
int realsmith_faw8QK5nn2(int dummy_realsmith_faw8QK5nn2) {
    struct msg_msg_tMh12z msg_realsmith_faw8QK5nn2;
    /*bef_stmt:17185*/
msg_realsmith_faw8QK5nn2.dummy_realsmith_faw8QK5nn2 = Tag1_realsmith_faw8QK5nn2(/*int:17270:17270:17185:e*/dummy_realsmith_faw8QK5nn2);
/*aft_stmt:17185*/
    struct msg_security_struct_tMh12z msec_realsmith_faw8QK5nn2;
    msec_realsmith_faw8QK5nn2.sid_realsmith_faw8QK5nn2 = 0;
    /*bef_stmt:17268*/
return Tag2_realsmith_faw8QK5nn2(/*int:17270:17270:17268:e*/msec_realsmith_faw8QK5nn2.sid_realsmith_faw8QK5nn2);
/*aft_stmt:17268*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_X0WPu3MIk4(x) (x)
#include "stdint.h"
int realsmith_X0WPu3MIk4(int val_realsmith_X0WPu3MIk4) {
    /*bef_stmt:2001*/
return ((Tag1_realsmith_X0WPu3MIk4(/*int:2003:2003:2001:e*/val_realsmith_X0WPu3MIk4)) << 0) & 0xFFFFFFFF;
/*aft_stmt:2001*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_TTNupLmM9X(x) (x)
#define Tag2_realsmith_TTNupLmM9X(x) (x)
#define Tag3_realsmith_TTNupLmM9X(x) (x)
#include "stdlib.h"
struct scif_peer_dev_zfD4Yg {
    int dnode_realsmith_TTNupLmM9X;
};
struct scif_dev_zfD4Yg {
    struct scif_peer_dev_zfD4Yg *spdev_realsmith_TTNupLmM9X;
};
int realsmith_TTNupLmM9X(int has_spdev_realsmith_TTNupLmM9X, int dnode_realsmith_TTNupLmM9X) {
    struct scif_dev_zfD4Yg scifdev_realsmith_TTNupLmM9X;
    struct scif_peer_dev_zfD4Yg spdev_realsmith_TTNupLmM9X;
    /*bef_stmt:17332*/
if (Tag1_realsmith_TTNupLmM9X(/*int:17408:17408:17332:e*/has_spdev_realsmith_TTNupLmM9X)) {
        /*bef_stmt:17256*/
spdev_realsmith_TTNupLmM9X.dnode_realsmith_TTNupLmM9X = Tag2_realsmith_TTNupLmM9X(/*int:17408:17408:17256:e*/dnode_realsmith_TTNupLmM9X);
/*aft_stmt:17256*/
        scifdev_realsmith_TTNupLmM9X.spdev_realsmith_TTNupLmM9X = &spdev_realsmith_TTNupLmM9X;
    } else {
        scifdev_realsmith_TTNupLmM9X.spdev_realsmith_TTNupLmM9X = ((void*)0);
    }
/*aft_stmt:17332*/
    if (!scifdev_realsmith_TTNupLmM9X.spdev_realsmith_TTNupLmM9X) {
        return -1;
    }
    int result_realsmith_TTNupLmM9X = 0;
    /*bef_stmt:17400*/
return Tag3_realsmith_TTNupLmM9X(/*int:17408:17408:17400:e*/result_realsmith_TTNupLmM9X);
/*aft_stmt:17400*/
}



#include "stdlib.h"
int realsmith_fCoTrCp46p(int is_support_sw_smu_realsmith_fCoTrCp46p, int pm_state_realsmith_fCoTrCp46p, int *states_realsmith_fCoTrCp46p, int nums_realsmith_fCoTrCp46p) {
    int pm_realsmith_fCoTrCp46p = 0;
    int i_realsmith_fCoTrCp46p = 0, ret_realsmith_fCoTrCp46p = 0;
    if (is_support_sw_smu_realsmith_fCoTrCp46p) {
        pm_realsmith_fCoTrCp46p = pm_state_realsmith_fCoTrCp46p;
        ret_realsmith_fCoTrCp46p = nums_realsmith_fCoTrCp46p;
    } else {
        pm_realsmith_fCoTrCp46p = pm_state_realsmith_fCoTrCp46p;
        ret_realsmith_fCoTrCp46p = nums_realsmith_fCoTrCp46p;
    }
    for (i_realsmith_fCoTrCp46p = 0; i_realsmith_fCoTrCp46p < ret_realsmith_fCoTrCp46p; i_realsmith_fCoTrCp46p++) {
        if (pm_realsmith_fCoTrCp46p == states_realsmith_fCoTrCp46p[i_realsmith_fCoTrCp46p])
            break;
    }
    if (i_realsmith_fCoTrCp46p == ret_realsmith_fCoTrCp46p)
        i_realsmith_fCoTrCp46p = -1;
    return i_realsmith_fCoTrCp46p;
}
int realsmith_proxy_yKNynAG0yr(int p_0_F7fk5wEllE, int p_1_rW0DdJIXfk, int p_2_SEqkyAHJVc, int p_3_hpR7jqbcJF) {
int proxy_wNctO0ct5X[13] = { p_2_SEqkyAHJVc, p_2_SEqkyAHJVc, p_2_SEqkyAHJVc, p_2_SEqkyAHJVc, p_2_SEqkyAHJVc, p_2_SEqkyAHJVc, 92, p_2_SEqkyAHJVc, 0, 40, 87, 32, p_2_SEqkyAHJVc };
int proxy_ret_wYXVIeOgA9 = realsmith_fCoTrCp46p(p_0_F7fk5wEllE, p_1_rW0DdJIXfk, proxy_wNctO0ct5X, p_3_hpR7jqbcJF);
return proxy_ret_wYXVIeOgA9;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_6s7BM1E3Hy(x) (x)
#include "stdlib.h"
struct zcrypt_card_1wYhTp {
        int dummy_realsmith_6s7BM1E3Hy;
    };
int realsmith_6s7BM1E3Hy(int dummy_realsmith_6s7BM1E3Hy) {
    struct zcrypt_card_1wYhTp {
        int dummy_realsmith_6s7BM1E3Hy;
    };
    struct zcrypt_card_1wYhTp *zc_realsmith_6s7BM1E3Hy = (malloc(sizeof(struct zcrypt_card_1wYhTp)));
    if (zc_realsmith_6s7BM1E3Hy == ((void*)0)) {
        return -1;
    }
    /*bef_stmt:17281*/
zc_realsmith_6s7BM1E3Hy->dummy_realsmith_6s7BM1E3Hy = /*TAG1:STA*/((int)(realsmith_proxy_O95ZHrvdxd((int)(dummy_realsmith_6s7BM1E3Hy)+(-49), (int)(dummy_realsmith_6s7BM1E3Hy)+(-29))+(int)(dummy_realsmith_6s7BM1E3Hy)-(82))+dummy_realsmith_6s7BM1E3Hy)/*TAG1:END:dummy_realsmith_6s7BM1E3Hy*/;
/*aft_stmt:17281*/
    (free(zc_realsmith_6s7BM1E3Hy));
    return 0;
}



#include "stdlib.h"
int realsmith_D8A3NoH8Qu(int go_realsmith_D8A3NoH8Qu, int stop_realsmith_D8A3NoH8Qu, int fun_realsmith_D8A3NoH8Qu, int msg_realsmith_D8A3NoH8Qu) {
    int j_realsmith_D8A3NoH8Qu = 0, r_realsmith_D8A3NoH8Qu, e_realsmith_D8A3NoH8Qu, s_realsmith_D8A3NoH8Qu, p_realsmith_D8A3NoH8Qu;
    while ((((r_realsmith_D8A3NoH8Qu = ((1) % 256)) & go_realsmith_D8A3NoH8Qu) || (stop_realsmith_D8A3NoH8Qu && (!(r_realsmith_D8A3NoH8Qu & stop_realsmith_D8A3NoH8Qu)))) && (j_realsmith_D8A3NoH8Qu++ < 1000)) {
        for (volatile int delay_realsmith_D8A3NoH8Qu = 0; delay_realsmith_D8A3NoH8Qu < 1000; delay_realsmith_D8A3NoH8Qu++);
    }
    if ((r_realsmith_D8A3NoH8Qu & (1 & stop_realsmith_D8A3NoH8Qu)) || (j_realsmith_D8A3NoH8Qu > 1000)) {
        s_realsmith_D8A3NoH8Qu = ((1) % 256);
        e_realsmith_D8A3NoH8Qu = ((1) % 256);
        p_realsmith_D8A3NoH8Qu = ((1) % 256);
        if (j_realsmith_D8A3NoH8Qu > 1000)
            e_realsmith_D8A3NoH8Qu |= 0x100;
        return (s_realsmith_D8A3NoH8Qu << 8) + r_realsmith_D8A3NoH8Qu;
    }
    return 0;
}

#include "stdlib.h"
int realsmith_dT31R6vSG9(int *addr_realsmith_dT31R6vSG9, int *data_realsmith_dT31R6vSG9, int array_size_realsmith_dT31R6vSG9) {
    int ret_realsmith_dT31R6vSG9;
    for (int i_realsmith_dT31R6vSG9 = 0; i_realsmith_dT31R6vSG9 < array_size_realsmith_dT31R6vSG9; i_realsmith_dT31R6vSG9++) {
        ret_realsmith_dT31R6vSG9 = (addr_realsmith_dT31R6vSG9[i_realsmith_dT31R6vSG9] == 0) ? -1 : 0;
        if (ret_realsmith_dT31R6vSG9 < 0)
            return ret_realsmith_dT31R6vSG9;
    }
    return 0;
}
int realsmith_proxy_XIX2Oamy45(int p_0_ur8J0cnUq9, int p_1_TvBjBJxyXY, int p_2_MqT1UmixUX) {
int proxy_JBQedNd4ui[18] = { p_0_ur8J0cnUq9, p_0_ur8J0cnUq9, 31, 72, 2, p_0_ur8J0cnUq9, 68, 57, 48, 43, 91, p_0_ur8J0cnUq9, p_0_ur8J0cnUq9, 25, p_0_ur8J0cnUq9, 55, p_0_ur8J0cnUq9, p_0_ur8J0cnUq9 };
int proxy_ret_Hmv4U0okgW = realsmith_dT31R6vSG9(proxy_JBQedNd4ui, &(p_1_TvBjBJxyXY), p_2_MqT1UmixUX);
return proxy_ret_Hmv4U0okgW;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_5Y8G5npnOw(x) (x)
#define Tag2_realsmith_5Y8G5npnOw(x) (x)
#define Tag3_realsmith_5Y8G5npnOw(x) (x)
#define Tag4_realsmith_5Y8G5npnOw(x) (x)
#define Tag5_realsmith_5Y8G5npnOw(x) (x)
#define Tag6_realsmith_5Y8G5npnOw(x) (x)
#include "stdlib.h"
struct iommu_table_R5C5YJ {
    unsigned long it_page_shift_realsmith_5Y8G5npnOw;
    unsigned long it_size_realsmith_5Y8G5npnOw;
    unsigned long it_offset_realsmith_5Y8G5npnOw;
    int it_blocksize_realsmith_5Y8G5npnOw;
    int it_type_realsmith_5Y8G5npnOw;
    unsigned long it_busno_realsmith_5Y8G5npnOw;
    unsigned long it_index_realsmith_5Y8G5npnOw;
};
int realsmith_5Y8G5npnOw(int dma_window_exists_realsmith_5Y8G5npnOw, unsigned long offset_realsmith_5Y8G5npnOw, unsigned long size_realsmith_5Y8G5npnOw) {
    struct iommu_table_R5C5YJ tbl_realsmith_5Y8G5npnOw;
    /*bef_stmt:17277*/
if (!Tag1_realsmith_5Y8G5npnOw(/*int:17473:17473:17277:e*/dma_window_exists_realsmith_5Y8G5npnOw))
        return -1;
/*aft_stmt:17277*/
    tbl_realsmith_5Y8G5npnOw.it_page_shift_realsmith_5Y8G5npnOw = 12;
    /*bef_stmt:17353*/
/*bef_stmt:17353*/
tbl_realsmith_5Y8G5npnOw.it_size_realsmith_5Y8G5npnOw = Tag2_realsmith_5Y8G5npnOw(/*unsigned long:17473:17473:17353:e*/size_realsmith_5Y8G5npnOw) >> Tag3_realsmith_5Y8G5npnOw(/*unsigned long:17473:17473:17353:e*/tbl_realsmith_5Y8G5npnOw.it_page_shift_realsmith_5Y8G5npnOw);
/*aft_stmt:17353*/
/*aft_stmt:17353*/
    /*bef_stmt:17391*/
/*bef_stmt:17391*/
tbl_realsmith_5Y8G5npnOw.it_offset_realsmith_5Y8G5npnOw = Tag4_realsmith_5Y8G5npnOw(/*unsigned long:17473:17473:17391:e*/offset_realsmith_5Y8G5npnOw) >> Tag5_realsmith_5Y8G5npnOw(/*unsigned long:17473:17473:17391:e*/tbl_realsmith_5Y8G5npnOw.it_page_shift_realsmith_5Y8G5npnOw);
/*aft_stmt:17391*/
/*aft_stmt:17391*/
    tbl_realsmith_5Y8G5npnOw.it_busno_realsmith_5Y8G5npnOw = 0;
    tbl_realsmith_5Y8G5npnOw.it_type_realsmith_5Y8G5npnOw = 0;
    tbl_realsmith_5Y8G5npnOw.it_blocksize_realsmith_5Y8G5npnOw = 16;
    /*bef_stmt:17471*/
return Tag6_realsmith_5Y8G5npnOw(/*unsigned long:17473:17473:17471:e*/tbl_realsmith_5Y8G5npnOw.it_size_realsmith_5Y8G5npnOw);
/*aft_stmt:17471*/
}



#include "stdlib.h"
int realsmith_eIuir0tovL(int width_realsmith_eIuir0tovL, int height_realsmith_eIuir0tovL, int fourcc_realsmith_eIuir0tovL, unsigned int *nbuffers_realsmith_eIuir0tovL, unsigned int *nplanes_realsmith_eIuir0tovL, unsigned int sizes_realsmith_eIuir0tovL[]) {
    unsigned int size_realsmith_eIuir0tovL;
    unsigned int count_realsmith_eIuir0tovL = *nbuffers_realsmith_eIuir0tovL;
    switch (fourcc_realsmith_eIuir0tovL) {
    case 129:
        size_realsmith_eIuir0tovL = width_realsmith_eIuir0tovL * height_realsmith_eIuir0tovL * 3 / 2;
        break;
    case 128:
    default:
        size_realsmith_eIuir0tovL = width_realsmith_eIuir0tovL * height_realsmith_eIuir0tovL * 2;
    }
    *nplanes_realsmith_eIuir0tovL = 1;
    *nbuffers_realsmith_eIuir0tovL = count_realsmith_eIuir0tovL;
    sizes_realsmith_eIuir0tovL[0] = size_realsmith_eIuir0tovL;
    return 0;
}
int realsmith_proxy_gaR4O6U9Y5(int p_0_TFEhop01Sh, int p_1_vvcZN7371D, int p_2_Xn3VWHQExI, unsigned int p_3_8iPINHoShF, unsigned int p_4_1Dbnoq38aT, unsigned int p_5_s0WBX1Wsev) {
unsigned int proxy_YmbmdK3xjx[10] = { p_3_8iPINHoShF, p_3_8iPINHoShF, p_3_8iPINHoShF, p_3_8iPINHoShF, p_3_8iPINHoShF, 15, p_3_8iPINHoShF, p_3_8iPINHoShF, p_3_8iPINHoShF, 64 };
int proxy_ret_GcM9m3lIcL = realsmith_eIuir0tovL(p_0_TFEhop01Sh, p_1_vvcZN7371D, p_2_Xn3VWHQExI, proxy_YmbmdK3xjx, &(p_4_1Dbnoq38aT), &(p_5_s0WBX1Wsev));
return proxy_ret_GcM9m3lIcL;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_3tGWZLzfMk(x) (x)
#define Tag2_realsmith_3tGWZLzfMk(x) (x)
#define Tag3_realsmith_3tGWZLzfMk(x) (x)
#define Tag4_realsmith_3tGWZLzfMk(x) (x)
#define Tag5_realsmith_3tGWZLzfMk(x) (x)
#define Tag6_realsmith_3tGWZLzfMk(x) (x)
#define Tag7_realsmith_3tGWZLzfMk(x) (x)
#define Tag8_realsmith_3tGWZLzfMk(x) (x)
#define Tag9_realsmith_3tGWZLzfMk(x) (x)
#define Tag10_realsmith_3tGWZLzfMk(x) (x)
#define Tag11_realsmith_3tGWZLzfMk(x) (x)
#include "stdbool.h"
int realsmith_3tGWZLzfMk(int fourcc_realsmith_3tGWZLzfMk, int rotation_realsmith_3tGWZLzfMk, int rotation_type_realsmith_3tGWZLzfMk) {
    _Bool row_repeat_realsmith_3tGWZLzfMk = 0;
    int vidrot_realsmith_3tGWZLzfMk = 0;
    /*bef_stmt:1028*/
/*bef_stmt:1028*/
if (Tag1_realsmith_3tGWZLzfMk(/*int:1138:1138:1028:e*/fourcc_realsmith_3tGWZLzfMk) == 3 || Tag2_realsmith_3tGWZLzfMk(/*int:1138:1138:1028:e*/fourcc_realsmith_3tGWZLzfMk) == 2) {
        /*bef_stmt:969*/
if (Tag3_realsmith_3tGWZLzfMk(/*int:1138:1138:969:e*/rotation_realsmith_3tGWZLzfMk) & 0x1) {
            /*bef_stmt:718*/
switch (Tag4_realsmith_3tGWZLzfMk(/*int:1138:1138:718:e*/rotation_realsmith_3tGWZLzfMk) & 0x3) {
                case 0: vidrot_realsmith_3tGWZLzfMk = 2; break;
                case 1: vidrot_realsmith_3tGWZLzfMk = 1; break;
                case 2: vidrot_realsmith_3tGWZLzfMk = 0; break;
                case 3: vidrot_realsmith_3tGWZLzfMk = 3; break;
            }
/*aft_stmt:718*/
        } else {
            /*bef_stmt:851*/
switch (Tag5_realsmith_3tGWZLzfMk(/*int:1138:1138:851:e*/rotation_realsmith_3tGWZLzfMk) & 0x3) {
                case 0: vidrot_realsmith_3tGWZLzfMk = 0; break;
                case 1: vidrot_realsmith_3tGWZLzfMk = 3; break;
                case 2: vidrot_realsmith_3tGWZLzfMk = 2; break;
                case 3: vidrot_realsmith_3tGWZLzfMk = 1; break;
            }
/*aft_stmt:851*/
        }
/*aft_stmt:969*/
        /*bef_stmt:1020*/
/*bef_stmt:1020*/
row_repeat_realsmith_3tGWZLzfMk = (Tag6_realsmith_3tGWZLzfMk(/*int:1138:1138:1020:e*/rotation_realsmith_3tGWZLzfMk) == 1 || Tag7_realsmith_3tGWZLzfMk(/*int:1138:1138:1020:e*/rotation_realsmith_3tGWZLzfMk) == 3);
/*aft_stmt:1020*/
/*aft_stmt:1020*/
    }
/*aft_stmt:1028*/
/*aft_stmt:1028*/
    /*bef_stmt:1081*/
/*bef_stmt:1081*/
if (Tag8_realsmith_3tGWZLzfMk(/*int:1138:1138:1081:e*/fourcc_realsmith_3tGWZLzfMk) == 1 && Tag9_realsmith_3tGWZLzfMk(/*int:1138:1138:1081:e*/rotation_type_realsmith_3tGWZLzfMk) != 0) {
        vidrot_realsmith_3tGWZLzfMk = 1;
    }
/*aft_stmt:1081*/
/*aft_stmt:1081*/
    /*bef_stmt:1136*/
/*bef_stmt:1136*/
return (Tag10_realsmith_3tGWZLzfMk(/*int:1138:1138:1136:e*/vidrot_realsmith_3tGWZLzfMk) << 1) | (Tag11_realsmith_3tGWZLzfMk(/*_Bool:1138:1138:1136:e*/row_repeat_realsmith_3tGWZLzfMk) ? 1 : 0);
/*aft_stmt:1136*/
/*aft_stmt:1136*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_KR6uLY0jXo(x) (x)
#define Tag2_realsmith_KR6uLY0jXo(x) (x)
#include "stdbool.h"
int realsmith_KR6uLY0jXo(int soc_realsmith_KR6uLY0jXo) {
    const int MPC512x_SOC_MPC5121_realsmith_KR6uLY0jXo = 1;
    /*bef_stmt:627*/
/*bef_stmt:627*/
return (Tag1_realsmith_KR6uLY0jXo(/*int:629:629:627:e*/soc_realsmith_KR6uLY0jXo) == Tag2_realsmith_KR6uLY0jXo(/*const int:629:629:627:e*/MPC512x_SOC_MPC5121_realsmith_KR6uLY0jXo)) ? 1 : 0;
/*aft_stmt:627*/
/*aft_stmt:627*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_wKdhZrDnc7(x) (x)
#define Tag2_realsmith_proxy_wKdhZrDnc7(x) (x)
#define Tag3_realsmith_proxy_wKdhZrDnc7(x) (x)
#define Tag4_realsmith_proxy_wKdhZrDnc7(x) (x)
#define Tag5_realsmith_proxy_wKdhZrDnc7(x) (x)
#define Tag6_realsmith_proxy_wKdhZrDnc7(x) (x)
#define Tag7_realsmith_proxy_wKdhZrDnc7(x) (x)
#define Tag8_realsmith_proxy_wKdhZrDnc7(x) (x)
#define Tag9_realsmith_proxy_wKdhZrDnc7(x) (x)
#define Tag10_realsmith_proxy_wKdhZrDnc7(x) (x)
#define Tag11_realsmith_proxy_wKdhZrDnc7(x) (x)
#define Tag12_realsmith_proxy_wKdhZrDnc7(x) (x)
#define Tag13_realsmith_proxy_wKdhZrDnc7(x) (x)
#include "stdbool.h"
int realsmith_x3pFinMVMQ(int rq_flags_realsmith_x3pFinMVMQ, unsigned long deadline_realsmith_x3pFinMVMQ, unsigned long jiffies_realsmith_x3pFinMVMQ, unsigned long *next_realsmith_x3pFinMVMQ) {
    /*bef_stmt:679*/
/*bef_stmt:679*/
if ((Tag1_realsmith_proxy_wKdhZrDnc7(/*int:817:817:679:e*/rq_flags_realsmith_x3pFinMVMQ) & 1) || (Tag2_realsmith_proxy_wKdhZrDnc7(/*int:817:817:679:e*/rq_flags_realsmith_x3pFinMVMQ) & 2))
        return 0;
/*aft_stmt:679*/
/*aft_stmt:679*/
    /*bef_stmt:707*/
/*bef_stmt:707*/
if (Tag3_realsmith_proxy_wKdhZrDnc7(/*unsigned long:817:817:707:e*/jiffies_realsmith_x3pFinMVMQ) >= Tag4_realsmith_proxy_wKdhZrDnc7(/*unsigned long:817:817:707:e*/deadline_realsmith_x3pFinMVMQ))
        return 1;
/*aft_stmt:707*/
/*aft_stmt:707*/
    /*bef_stmt:805*/
/*bef_stmt:805*/
/*bef_stmt:805*/
/*bef_stmt:805*/
/*bef_stmt:805*/
if (Tag5_realsmith_proxy_wKdhZrDnc7(/*unsigned long:817:817:805:e*/*next_realsmith_x3pFinMVMQ) == 0)
        *next_realsmith_x3pFinMVMQ = Tag6_realsmith_proxy_wKdhZrDnc7(/*unsigned long:817:817:805:e*/deadline_realsmith_x3pFinMVMQ);
    else if (Tag7_realsmith_proxy_wKdhZrDnc7(/*unsigned long:817:817:805:e*/*next_realsmith_x3pFinMVMQ) > Tag8_realsmith_proxy_wKdhZrDnc7(/*unsigned long:817:817:805:e*/deadline_realsmith_x3pFinMVMQ))
        *next_realsmith_x3pFinMVMQ = Tag9_realsmith_proxy_wKdhZrDnc7(/*unsigned long:817:817:805:e*/deadline_realsmith_x3pFinMVMQ);
/*aft_stmt:805*/
/*aft_stmt:805*/
/*aft_stmt:805*/
/*aft_stmt:805*/
/*aft_stmt:805*/
    return 0;
}
int realsmith_proxy_wKdhZrDnc7(int p_0_sVOvMNATwe, unsigned long p_1_onul88DiFt, unsigned long p_2_RRKzXjY2G4, unsigned long p_3_yyv8RurP9j) {
/*bef_stmt:999*/
/*bef_stmt:999*/
/*bef_stmt:999*/
int proxy_ret_23B6PTBtps = realsmith_x3pFinMVMQ(Tag10_realsmith_proxy_wKdhZrDnc7(/*int:1011:1011:999:e*/p_0_sVOvMNATwe), Tag11_realsmith_proxy_wKdhZrDnc7(/*unsigned long:1011:1011:999:e*/p_1_onul88DiFt), Tag12_realsmith_proxy_wKdhZrDnc7(/*unsigned long:1011:1011:999:e*/p_2_RRKzXjY2G4), &(p_3_yyv8RurP9j));
/*aft_stmt:999*/
/*aft_stmt:999*/
/*aft_stmt:999*/
/*bef_stmt:1009*/
return Tag13_realsmith_proxy_wKdhZrDnc7(/*int:1011:1011:1009:e*/proxy_ret_23B6PTBtps);
/*aft_stmt:1009*/
}




#include "stdlib.h"
struct mcam_format_struct_CrYeWp {
    int pixelformat_realsmith_5Ir2tdZQfI;
    int bpp_realsmith_5Ir2tdZQfI;
    int mbus_code_realsmith_5Ir2tdZQfI;
};
struct v4l2_pix_format_CrYeWp {
    int pixelformat_realsmith_5Ir2tdZQfI;
    int bytesperline_realsmith_5Ir2tdZQfI;
    int width_realsmith_5Ir2tdZQfI;
    int sizeimage_realsmith_5Ir2tdZQfI;
    int height_realsmith_5Ir2tdZQfI;
    int colorspace_realsmith_5Ir2tdZQfI;
};
int realsmith_5Ir2tdZQfI(int pixelformat_realsmith_5Ir2tdZQfI, int width_realsmith_5Ir2tdZQfI, int height_realsmith_5Ir2tdZQfI) {
    struct mcam_format_struct_CrYeWp formats_realsmith_5Ir2tdZQfI[] = {
        {1, 2, 0},
        {2, 2, 0}
    };
    struct v4l2_pix_format_CrYeWp pix_realsmith_5Ir2tdZQfI;
    struct mcam_format_struct_CrYeWp *f_realsmith_5Ir2tdZQfI = ((void*)0);
    for (int i_realsmith_5Ir2tdZQfI = 0; i_realsmith_5Ir2tdZQfI < sizeof(formats_realsmith_5Ir2tdZQfI) / sizeof(formats_realsmith_5Ir2tdZQfI[0]); i_realsmith_5Ir2tdZQfI++) {
        if (formats_realsmith_5Ir2tdZQfI[i_realsmith_5Ir2tdZQfI].pixelformat_realsmith_5Ir2tdZQfI == pixelformat_realsmith_5Ir2tdZQfI) {
            f_realsmith_5Ir2tdZQfI = &formats_realsmith_5Ir2tdZQfI[i_realsmith_5Ir2tdZQfI];
            break;
        }
    }
    if (!f_realsmith_5Ir2tdZQfI) {
        return -1;
    }
    pix_realsmith_5Ir2tdZQfI.pixelformat_realsmith_5Ir2tdZQfI = f_realsmith_5Ir2tdZQfI->pixelformat_realsmith_5Ir2tdZQfI;
    pix_realsmith_5Ir2tdZQfI.width_realsmith_5Ir2tdZQfI = width_realsmith_5Ir2tdZQfI;
    pix_realsmith_5Ir2tdZQfI.height_realsmith_5Ir2tdZQfI = height_realsmith_5Ir2tdZQfI;
    pix_realsmith_5Ir2tdZQfI.bytesperline_realsmith_5Ir2tdZQfI = width_realsmith_5Ir2tdZQfI * f_realsmith_5Ir2tdZQfI->bpp_realsmith_5Ir2tdZQfI;
    switch (f_realsmith_5Ir2tdZQfI->pixelformat_realsmith_5Ir2tdZQfI) {
        case 1:
        case 2:
            pix_realsmith_5Ir2tdZQfI.sizeimage_realsmith_5Ir2tdZQfI = height_realsmith_5Ir2tdZQfI * pix_realsmith_5Ir2tdZQfI.bytesperline_realsmith_5Ir2tdZQfI * 3 / 2;
            break;
        default:
            pix_realsmith_5Ir2tdZQfI.sizeimage_realsmith_5Ir2tdZQfI = height_realsmith_5Ir2tdZQfI * pix_realsmith_5Ir2tdZQfI.bytesperline_realsmith_5Ir2tdZQfI;
            break;
    }
    pix_realsmith_5Ir2tdZQfI.colorspace_realsmith_5Ir2tdZQfI = 0;
    return pix_realsmith_5Ir2tdZQfI.sizeimage_realsmith_5Ir2tdZQfI;
}

#include "stdlib.h"
struct icp_qat_uclo_objhandle_aKeO8p {
    unsigned int uimage_num_realsmith_5dQeFinnT6;
    unsigned long *ae_uimage_img_ptr_realsmith_5dQeFinnT6; // Assuming pointers are represented as unsigned long
};
int realsmith_5dQeFinnT6(unsigned int uimage_num_realsmith_5dQeFinnT6, unsigned long *ae_uimage_img_ptr_realsmith_5dQeFinnT6) {
    struct icp_qat_uclo_objhandle_aKeO8p obj_handle_realsmith_5dQeFinnT6;
    obj_handle_realsmith_5dQeFinnT6.uimage_num_realsmith_5dQeFinnT6 = uimage_num_realsmith_5dQeFinnT6;
    obj_handle_realsmith_5dQeFinnT6.ae_uimage_img_ptr_realsmith_5dQeFinnT6 = ae_uimage_img_ptr_realsmith_5dQeFinnT6;
    unsigned int i_realsmith_5dQeFinnT6;
    if (uimage_num_realsmith_5dQeFinnT6 == 0)
        return -22;
    for (i_realsmith_5dQeFinnT6 = 0; i_realsmith_5dQeFinnT6 < obj_handle_realsmith_5dQeFinnT6.uimage_num_realsmith_5dQeFinnT6; i_realsmith_5dQeFinnT6++) {
        if (obj_handle_realsmith_5dQeFinnT6.ae_uimage_img_ptr_realsmith_5dQeFinnT6[i_realsmith_5dQeFinnT6] == 0)
            return -22;
    }
    return 0;
}
int realsmith_proxy_J6BBLECN7u(unsigned int p_0_epHQNvugd1, unsigned long p_1_6C3nNMnLMU) {
unsigned long proxy_gOKaWxlW4q[20] = { p_1_6C3nNMnLMU, p_1_6C3nNMnLMU, 62, 0, p_1_6C3nNMnLMU, 47, p_1_6C3nNMnLMU, p_1_6C3nNMnLMU, p_1_6C3nNMnLMU, p_1_6C3nNMnLMU, p_1_6C3nNMnLMU, 85, 1, 8, p_1_6C3nNMnLMU, 71, p_1_6C3nNMnLMU, 81, 85, 22 };
int proxy_ret_vrEBrEZdct = realsmith_5dQeFinnT6(p_0_epHQNvugd1, proxy_gOKaWxlW4q);
return proxy_ret_vrEBrEZdct;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_CbryUp4IIr(x) (x)
#define Tag2_realsmith_CbryUp4IIr(x) (x)
#define Tag3_realsmith_CbryUp4IIr(x) (x)
#include "stdint.h"
int realsmith_CbryUp4IIr(int pciecfg_realsmith_CbryUp4IIr, int ltssm_enable_realsmith_CbryUp4IIr) {
    unsigned int val_realsmith_CbryUp4IIr;
    /*bef_stmt:2016*/
val_realsmith_CbryUp4IIr = Tag1_realsmith_CbryUp4IIr(/*int:2056:2056:2016:e*/pciecfg_realsmith_CbryUp4IIr);
/*aft_stmt:2016*/
    /*bef_stmt:2037*/
val_realsmith_CbryUp4IIr &= ~Tag2_realsmith_CbryUp4IIr(/*int:2056:2056:2037:e*/ltssm_enable_realsmith_CbryUp4IIr);
/*aft_stmt:2037*/
    /*bef_stmt:2054*/
return Tag3_realsmith_CbryUp4IIr(/*unsigned int:2056:2056:2054:e*/val_realsmith_CbryUp4IIr);
/*aft_stmt:2054*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_yPtgsWpP1N(x) (x)
#define Tag2_realsmith_yPtgsWpP1N(x) (x)
#define Tag3_realsmith_yPtgsWpP1N(x) (x)
#define Tag4_realsmith_yPtgsWpP1N(x) (x)
#define Tag5_realsmith_yPtgsWpP1N(x) (x)
#define Tag6_realsmith_yPtgsWpP1N(x) (x)
#include "stdlib.h"
int realsmith_yPtgsWpP1N(int ml_priv_realsmith_yPtgsWpP1N, int kernel_thread_starter_realsmith_yPtgsWpP1N) {
    int LCS_SET_MC_THREAD_realsmith_yPtgsWpP1N = 1;
    int trace_realsmith_yPtgsWpP1N = 4;
    int result_realsmith_yPtgsWpP1N = 0;
    /*bef_stmt:17186*/
if (Tag1_realsmith_yPtgsWpP1N(/*int:17309:17309:17186:e*/trace_realsmith_yPtgsWpP1N) == 4) {
    }
/*aft_stmt:17186*/
    /*bef_stmt:17213*/
int card_ml_priv_realsmith_yPtgsWpP1N = Tag2_realsmith_yPtgsWpP1N(/*int:17309:17309:17213:e*/ml_priv_realsmith_yPtgsWpP1N);
/*aft_stmt:17213*/
    /*bef_stmt:17265*/
int thread_start_bit_realsmith_yPtgsWpP1N = (Tag3_realsmith_yPtgsWpP1N(/*int:17309:17309:17265:e*/card_ml_priv_realsmith_yPtgsWpP1N) != 0) ? 1 : 0;
/*aft_stmt:17265*/
    /*bef_stmt:17296*/
if (!Tag4_realsmith_yPtgsWpP1N(/*int:17309:17309:17296:e*/thread_start_bit_realsmith_yPtgsWpP1N)) {
        /*bef_stmt:17289*/
result_realsmith_yPtgsWpP1N = Tag5_realsmith_yPtgsWpP1N(/*int:17309:17309:17289:e*/kernel_thread_starter_realsmith_yPtgsWpP1N);
/*aft_stmt:17289*/
    }
/*aft_stmt:17296*/
    /*bef_stmt:17307*/
return Tag6_realsmith_yPtgsWpP1N(/*int:17309:17309:17307:e*/result_realsmith_yPtgsWpP1N);
/*aft_stmt:17307*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_49Q6oUynnb(x) (x)
#define Tag2_realsmith_49Q6oUynnb(x) (x)
#define Tag3_realsmith_49Q6oUynnb(x) (x)
#define Tag4_realsmith_49Q6oUynnb(x) (x)
#define Tag5_realsmith_49Q6oUynnb(x) (x)
#define Tag6_realsmith_49Q6oUynnb(x) (x)
#define Tag7_realsmith_49Q6oUynnb(x) (x)
#define Tag8_realsmith_49Q6oUynnb(x) (x)
#define Tag9_realsmith_49Q6oUynnb(x) (x)
#define Tag10_realsmith_49Q6oUynnb(x) (x)
#define Tag11_realsmith_49Q6oUynnb(x) (x)
#define Tag12_realsmith_49Q6oUynnb(x) (x)
#include "stdlib.h"
int realsmith_49Q6oUynnb(int fsl_dev_init_realsmith_49Q6oUynnb, int num_crtc_realsmith_49Q6oUynnb, int irq_realsmith_49Q6oUynnb, int legacyfb_depth_realsmith_49Q6oUynnb) {
    int ret_realsmith_49Q6oUynnb;
    /*bef_stmt:17168*/
ret_realsmith_49Q6oUynnb = Tag1_realsmith_49Q6oUynnb(/*int:17433:17433:17168:e*/fsl_dev_init_realsmith_49Q6oUynnb);
/*aft_stmt:17168*/
    /*bef_stmt:17199*/
if (Tag2_realsmith_49Q6oUynnb(/*int:17433:17433:17199:e*/ret_realsmith_49Q6oUynnb) < 0) {
        /*bef_stmt:17194*/
return Tag3_realsmith_49Q6oUynnb(/*int:17433:17433:17194:e*/ret_realsmith_49Q6oUynnb);
/*aft_stmt:17194*/
    }
/*aft_stmt:17199*/
    /*bef_stmt:17243*/
ret_realsmith_49Q6oUynnb = (Tag4_realsmith_49Q6oUynnb(/*int:17433:17433:17243:e*/num_crtc_realsmith_49Q6oUynnb) > 0) ? 0 : -1;
/*aft_stmt:17243*/
    /*bef_stmt:17274*/
if (Tag5_realsmith_49Q6oUynnb(/*int:17433:17433:17274:e*/ret_realsmith_49Q6oUynnb) < 0) {
        /*bef_stmt:17269*/
return Tag6_realsmith_49Q6oUynnb(/*int:17433:17433:17269:e*/ret_realsmith_49Q6oUynnb);
/*aft_stmt:17269*/
    }
/*aft_stmt:17274*/
    /*bef_stmt:17318*/
ret_realsmith_49Q6oUynnb = (Tag7_realsmith_49Q6oUynnb(/*int:17433:17433:17318:e*/irq_realsmith_49Q6oUynnb) >= 0) ? 0 : -1;
/*aft_stmt:17318*/
    /*bef_stmt:17349*/
if (Tag8_realsmith_49Q6oUynnb(/*int:17433:17433:17349:e*/ret_realsmith_49Q6oUynnb) < 0) {
        /*bef_stmt:17344*/
return Tag9_realsmith_49Q6oUynnb(/*int:17433:17433:17344:e*/ret_realsmith_49Q6oUynnb);
/*aft_stmt:17344*/
    }
/*aft_stmt:17349*/
    /*bef_stmt:17423*/
/*bef_stmt:17423*/
/*bef_stmt:17423*/
if (Tag10_realsmith_49Q6oUynnb(/*int:17433:17433:17423:e*/legacyfb_depth_realsmith_49Q6oUynnb) != 16 && Tag11_realsmith_49Q6oUynnb(/*int:17433:17433:17423:e*/legacyfb_depth_realsmith_49Q6oUynnb) != 24 && Tag12_realsmith_49Q6oUynnb(/*int:17433:17433:17423:e*/legacyfb_depth_realsmith_49Q6oUynnb) != 32) {
        legacyfb_depth_realsmith_49Q6oUynnb = 24;
    }
/*aft_stmt:17423*/
/*aft_stmt:17423*/
/*aft_stmt:17423*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_3OEYVgS7IV(x) (x)
#include "stdint.h"
int realsmith_3OEYVgS7IV(int val_realsmith_3OEYVgS7IV) {
    /*bef_stmt:1995*/
return ((Tag1_realsmith_3OEYVgS7IV(/*int:1997:1997:1995:e*/val_realsmith_3OEYVgS7IV)) << 0) & 0x000000FF;
/*aft_stmt:1995*/
}



#include "stdlib.h"
#include "stdint.h"
int realsmith_0Y8FzVYLiG(int regno_realsmith_0Y8FzVYLiG) {
    if (regno_realsmith_0Y8FzVYLiG >= 256) {
        for (int i_realsmith_0Y8FzVYLiG = 0; i_realsmith_0Y8FzVYLiG < 256; i_realsmith_0Y8FzVYLiG++) {
        }
        return -1;
    }
    return 0;
}

#include<stdint.h>
#include<inttypes.h>
#include "stdlib.h"
struct reset_control_JYPQ6X {
        int dummy_realsmith_AdH8MIC2Mw;
    };
int realsmith_AdH8MIC2Mw(int of_node_realsmith_AdH8MIC2Mw, int shared_realsmith_AdH8MIC2Mw, int optional_realsmith_AdH8MIC2Mw) {
    struct reset_control_JYPQ6X {
        int dummy_realsmith_AdH8MIC2Mw;
    };
    struct reset_control_JYPQ6X **devres_realsmith_AdH8MIC2Mw;
    struct reset_control_JYPQ6X *rstc_realsmith_AdH8MIC2Mw;
    devres_realsmith_AdH8MIC2Mw = (struct reset_control_JYPQ6X **)(malloc(sizeof(struct reset_control_JYPQ6X *)));
    if (!devres_realsmith_AdH8MIC2Mw)
        return -1;
    rstc_realsmith_AdH8MIC2Mw = (struct reset_control_JYPQ6X *)(malloc(sizeof(struct reset_control_JYPQ6X)));
    if (!rstc_realsmith_AdH8MIC2Mw) {
        (free(devres_realsmith_AdH8MIC2Mw));
        return -1;
    }
    *devres_realsmith_AdH8MIC2Mw = rstc_realsmith_AdH8MIC2Mw;
    (free(devres_realsmith_AdH8MIC2Mw));
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_f2eTSPeAi7(x) (x)
#define Tag2_realsmith_f2eTSPeAi7(x) (x)
#define Tag3_realsmith_f2eTSPeAi7(x) (x)
#define Tag4_realsmith_f2eTSPeAi7(x) (x)
#define Tag5_realsmith_f2eTSPeAi7(x) (x)
#include "stdlib.h"
int realsmith_f2eTSPeAi7(int dgain_realsmith_f2eTSPeAi7, int limited_pga_realsmith_f2eTSPeAi7) {
    int result_realsmith_f2eTSPeAi7 = 0;
    /*bef_stmt:17218*/
/*bef_stmt:17218*/
/*bef_stmt:17218*/
/*bef_stmt:17218*/
/*bef_stmt:17218*/
if (/*TAG1:STA*/((int)(realsmith_proxy_gaR4O6U9Y5((int)(dgain_realsmith_f2eTSPeAi7)+(-25), (int)(dgain_realsmith_f2eTSPeAi7)+(59), (int)(dgain_realsmith_f2eTSPeAi7)+(28), (unsigned int)(dgain_realsmith_f2eTSPeAi7)+(-87), (unsigned int)(dgain_realsmith_f2eTSPeAi7)+(24), (unsigned int)(dgain_realsmith_f2eTSPeAi7)+(-51))+(int)(dgain_realsmith_f2eTSPeAi7)-(31))+dgain_realsmith_f2eTSPeAi7)/*TAG1:END:dgain_realsmith_f2eTSPeAi7*/ > 1535 && /*TAG2:STA*/((int)(realsmith_5Y8G5npnOw((int)(limited_pga_realsmith_f2eTSPeAi7)+(-62), (unsigned long)(limited_pga_realsmith_f2eTSPeAi7)+(-9), (unsigned long)(limited_pga_realsmith_f2eTSPeAi7)+(21))+(int)(limited_pga_realsmith_f2eTSPeAi7)-(70))+limited_pga_realsmith_f2eTSPeAi7)/*TAG2:END:limited_pga_realsmith_f2eTSPeAi7*/ == 0)
        return 1;
    else if (/*TAG3:STA*/((int)(realsmith_KR6uLY0jXo((int)(dgain_realsmith_f2eTSPeAi7)+(10))+(int)(dgain_realsmith_f2eTSPeAi7)-(31))+dgain_realsmith_f2eTSPeAi7)/*TAG3:END:dgain_realsmith_f2eTSPeAi7*/ < 768 && /*TAG4:STA*/((int)(realsmith_proxy_XIX2Oamy45((int)(limited_pga_realsmith_f2eTSPeAi7)+(-68), (int)(limited_pga_realsmith_f2eTSPeAi7)+(-71), (int)(limited_pga_realsmith_f2eTSPeAi7)+(-68))+(int)(limited_pga_realsmith_f2eTSPeAi7)-(70))+limited_pga_realsmith_f2eTSPeAi7)/*TAG4:END:limited_pga_realsmith_f2eTSPeAi7*/ == 0)
        return 2;
    else
        return /*TAG5:STA*/((int)(realsmith_3tGWZLzfMk((int)(result_realsmith_f2eTSPeAi7)+(28), (int)(result_realsmith_f2eTSPeAi7)+(65), (int)(result_realsmith_f2eTSPeAi7)+(73))+(int)(result_realsmith_f2eTSPeAi7)-(0))+result_realsmith_f2eTSPeAi7)/*TAG5:END:result_realsmith_f2eTSPeAi7*/;
/*aft_stmt:17218*/
/*aft_stmt:17218*/
/*aft_stmt:17218*/
/*aft_stmt:17218*/
/*aft_stmt:17218*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_6ujlgeoBfF(x) (x)
#define Tag2_realsmith_6ujlgeoBfF(x) (x)
#define Tag3_realsmith_6ujlgeoBfF(x) (x)
#define Tag4_realsmith_6ujlgeoBfF(x) (x)
#define Tag5_realsmith_6ujlgeoBfF(x) (x)
#define Tag6_realsmith_6ujlgeoBfF(x) (x)
#define Tag7_realsmith_6ujlgeoBfF(x) (x)
#define Tag8_realsmith_6ujlgeoBfF(x) (x)
#define Tag9_realsmith_6ujlgeoBfF(x) (x)
#include "stdint.h"
int realsmith_6ujlgeoBfF(unsigned int sample_rate_tracker_status_realsmith_6ujlgeoBfF, unsigned int spdif_input_status_realsmith_6ujlgeoBfF) {
    /*bef_stmt:2006*/
unsigned int value_realsmith_6ujlgeoBfF = Tag1_realsmith_6ujlgeoBfF(/*unsigned int:2306:2306:2006:e*/sample_rate_tracker_status_realsmith_6ujlgeoBfF);
/*aft_stmt:2006*/
    int result_realsmith_6ujlgeoBfF = 0;
    /*bef_stmt:2073*/
result_realsmith_6ujlgeoBfF += (Tag2_realsmith_6ujlgeoBfF(/*unsigned int:2306:2306:2073:e*/value_realsmith_6ujlgeoBfF) & 0x100000) ? 1 : 0;
/*aft_stmt:2073*/
    /*bef_stmt:2119*/
result_realsmith_6ujlgeoBfF += (Tag3_realsmith_6ujlgeoBfF(/*unsigned int:2306:2306:2119:e*/value_realsmith_6ujlgeoBfF) & 0x200000) ? 2 : 0;
/*aft_stmt:2119*/
    /*bef_stmt:2165*/
result_realsmith_6ujlgeoBfF += (Tag4_realsmith_6ujlgeoBfF(/*unsigned int:2306:2306:2165:e*/value_realsmith_6ujlgeoBfF) & 0x400000) ? 4 : 0;
/*aft_stmt:2165*/
    /*bef_stmt:2235*/
unsigned int estimated_sample_rate_realsmith_6ujlgeoBfF = ((Tag5_realsmith_6ujlgeoBfF(/*unsigned int:2306:2306:2235:e*/value_realsmith_6ujlgeoBfF) & 0xfffff) * 48000) / 0x8000;
/*aft_stmt:2235*/
    /*bef_stmt:2249*/
result_realsmith_6ujlgeoBfF += Tag6_realsmith_6ujlgeoBfF(/*unsigned int:2306:2306:2249:e*/estimated_sample_rate_realsmith_6ujlgeoBfF);
/*aft_stmt:2249*/
    /*bef_stmt:2293*/
if (Tag7_realsmith_6ujlgeoBfF(/*unsigned int:2306:2306:2293:e*/value_realsmith_6ujlgeoBfF) & 0x200000) {
        /*bef_stmt:2284*/
result_realsmith_6ujlgeoBfF += Tag8_realsmith_6ujlgeoBfF(/*unsigned int:2306:2306:2284:e*/spdif_input_status_realsmith_6ujlgeoBfF);
/*aft_stmt:2284*/
    }
/*aft_stmt:2293*/
    /*bef_stmt:2304*/
return Tag9_realsmith_6ujlgeoBfF(/*int:2306:2306:2304:e*/result_realsmith_6ujlgeoBfF);
/*aft_stmt:2304*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_HgNPdKdSm9(x) (x)
#define Tag2_realsmith_proxy_HgNPdKdSm9(x) (x)
#define Tag3_realsmith_proxy_HgNPdKdSm9(x) (x)
#define Tag4_realsmith_proxy_HgNPdKdSm9(x) (x)
#define Tag5_realsmith_proxy_HgNPdKdSm9(x) (x)
#define Tag6_realsmith_proxy_HgNPdKdSm9(x) (x)
#define Tag7_realsmith_proxy_HgNPdKdSm9(x) (x)
#define Tag8_realsmith_proxy_HgNPdKdSm9(x) (x)
#define Tag9_realsmith_proxy_HgNPdKdSm9(x) (x)
#define Tag10_realsmith_proxy_HgNPdKdSm9(x) (x)
#include "stddef.h"
#include "string.h"
int realsmith_kC1FrMzJpT(int raw_trace_realsmith_kC1FrMzJpT, char *trace_output_realsmith_kC1FrMzJpT, char *field_name_realsmith_kC1FrMzJpT) {
    long unsigned int dynamic_len_realsmith_kC1FrMzJpT = 0;
    long unsigned int namelen_realsmith_kC1FrMzJpT = (1);
    char *str_realsmith_kC1FrMzJpT = trace_output_realsmith_kC1FrMzJpT;
    char *pos_realsmith_kC1FrMzJpT;
    int last_realsmith_kC1FrMzJpT = 0;
    /*bef_stmt:8791*/
if (Tag1_realsmith_proxy_HgNPdKdSm9(/*int:9140:9140:8791:e*/raw_trace_realsmith_kC1FrMzJpT)) {
        /*bef_stmt:8786*/
return Tag2_realsmith_proxy_HgNPdKdSm9(/*unsigned long:9140:9140:8786:e*/dynamic_len_realsmith_kC1FrMzJpT);
/*aft_stmt:8786*/
    }
/*aft_stmt:8791*/
    while (str_realsmith_kC1FrMzJpT) {
        pos_realsmith_kC1FrMzJpT = ("0");
        if (pos_realsmith_kC1FrMzJpT == ((void*)0)) {
            last_realsmith_kC1FrMzJpT = 1;
            pos_realsmith_kC1FrMzJpT = str_realsmith_kC1FrMzJpT + (1);
        }
        if ((1) == 0) {
            long unsigned int len_realsmith_kC1FrMzJpT;
            /*bef_stmt:8962*/
str_realsmith_kC1FrMzJpT += Tag3_realsmith_proxy_HgNPdKdSm9(/*unsigned long:9140:9140:8962:e*/namelen_realsmith_kC1FrMzJpT) + 1;
/*aft_stmt:8962*/
            len_realsmith_kC1FrMzJpT = pos_realsmith_kC1FrMzJpT - str_realsmith_kC1FrMzJpT;
            /*bef_stmt:9033*/
/*bef_stmt:9033*/
if (Tag4_realsmith_proxy_HgNPdKdSm9(/*unsigned long:9038:9118:9033:e*/len_realsmith_kC1FrMzJpT) > Tag5_realsmith_proxy_HgNPdKdSm9(/*unsigned long:9140:9140:9033:e*/dynamic_len_realsmith_kC1FrMzJpT)) {
                /*bef_stmt:9026*/
dynamic_len_realsmith_kC1FrMzJpT = Tag6_realsmith_proxy_HgNPdKdSm9(/*unsigned long:9038:9118:9026:e*/len_realsmith_kC1FrMzJpT);
/*aft_stmt:9026*/
            }
/*aft_stmt:9033*/
/*aft_stmt:9033*/
            break;
        }
        /*bef_stmt:9112*/
if (Tag7_realsmith_proxy_HgNPdKdSm9(/*int:9140:9140:9112:e*/last_realsmith_kC1FrMzJpT)) {
            str_realsmith_kC1FrMzJpT = ((void*)0);
        } else {
            str_realsmith_kC1FrMzJpT = pos_realsmith_kC1FrMzJpT + 1;
        }
/*aft_stmt:9112*/
    }
    /*bef_stmt:9138*/
return Tag8_realsmith_proxy_HgNPdKdSm9(/*unsigned long:9140:9140:9138:e*/dynamic_len_realsmith_kC1FrMzJpT);
/*aft_stmt:9138*/
}
int realsmith_proxy_HgNPdKdSm9(int p_0_vLEdYzdhvE, char p_1_21F0GoeGWW, char p_2_Tzs5fYJe9Z) {
/*bef_stmt:9304*/
int proxy_ret_IxKs3PBaGj = realsmith_kC1FrMzJpT(Tag9_realsmith_proxy_HgNPdKdSm9(/*int:9316:9316:9304:e*/p_0_vLEdYzdhvE), &(p_1_21F0GoeGWW), &(p_2_Tzs5fYJe9Z));
/*aft_stmt:9304*/
/*bef_stmt:9314*/
return Tag10_realsmith_proxy_HgNPdKdSm9(/*int:9316:9316:9314:e*/proxy_ret_IxKs3PBaGj);
/*aft_stmt:9314*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_GYmv5mJBkT(x) (x)
#define Tag2_realsmith_GYmv5mJBkT(x) (x)
#define Tag3_realsmith_GYmv5mJBkT(x) (x)
#define Tag4_realsmith_GYmv5mJBkT(x) (x)
#define Tag5_realsmith_GYmv5mJBkT(x) (x)
#define Tag6_realsmith_GYmv5mJBkT(x) (x)
#define Tag7_realsmith_GYmv5mJBkT(x) (x)
#define Tag8_realsmith_GYmv5mJBkT(x) (x)
#define Tag9_realsmith_GYmv5mJBkT(x) (x)
#include "stdlib.h"
int realsmith_GYmv5mJBkT(int vif_dummy_realsmith_GYmv5mJBkT, int iftype_realsmith_GYmv5mJBkT, int use4addr_realsmith_GYmv5mJBkT, int mac_addr_realsmith_GYmv5mJBkT) {
    int qlink_cmd_add_intf_realsmith_GYmv5mJBkT = 0;
    int result_realsmith_GYmv5mJBkT = 0;
    /*bef_stmt:17299*/
/*bef_stmt:17299*/
/*bef_stmt:17299*/
if (Tag1_realsmith_GYmv5mJBkT(/*int:17312:17312:17299:e*/vif_dummy_realsmith_GYmv5mJBkT) >= 0 && Tag2_realsmith_GYmv5mJBkT(/*int:17312:17312:17299:e*/iftype_realsmith_GYmv5mJBkT) >= 0 && Tag3_realsmith_GYmv5mJBkT(/*int:17312:17312:17299:e*/use4addr_realsmith_GYmv5mJBkT) >= 0) {
        /*bef_stmt:17292*/
/*bef_stmt:17292*/
/*bef_stmt:17292*/
/*bef_stmt:17292*/
/*bef_stmt:17292*/
result_realsmith_GYmv5mJBkT = Tag4_realsmith_GYmv5mJBkT(/*int:17312:17312:17292:e*/vif_dummy_realsmith_GYmv5mJBkT) + Tag5_realsmith_GYmv5mJBkT(/*int:17312:17312:17292:e*/iftype_realsmith_GYmv5mJBkT) + Tag6_realsmith_GYmv5mJBkT(/*int:17312:17312:17292:e*/use4addr_realsmith_GYmv5mJBkT) + Tag7_realsmith_GYmv5mJBkT(/*int:17312:17312:17292:e*/mac_addr_realsmith_GYmv5mJBkT) + Tag8_realsmith_GYmv5mJBkT(/*int:17312:17312:17292:e*/qlink_cmd_add_intf_realsmith_GYmv5mJBkT);
/*aft_stmt:17292*/
/*aft_stmt:17292*/
/*aft_stmt:17292*/
/*aft_stmt:17292*/
/*aft_stmt:17292*/
    }
/*aft_stmt:17299*/
/*aft_stmt:17299*/
/*aft_stmt:17299*/
    /*bef_stmt:17310*/
return Tag9_realsmith_GYmv5mJBkT(/*int:17312:17312:17310:e*/result_realsmith_GYmv5mJBkT);
/*aft_stmt:17310*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ghgpGzrwll(x) (x)
#define Tag2_realsmith_ghgpGzrwll(x) (x)
#include "stdlib.h"
int realsmith_ghgpGzrwll(int hw_dev_realsmith_ghgpGzrwll) {
    int result_realsmith_ghgpGzrwll = 0;
    result_realsmith_ghgpGzrwll += 1;
    result_realsmith_ghgpGzrwll += 1;
    /*bef_stmt:17149*/
if (Tag1_realsmith_ghgpGzrwll(/*int:17162:17162:17149:e*/hw_dev_realsmith_ghgpGzrwll)) {
        result_realsmith_ghgpGzrwll += 1;
    }
/*aft_stmt:17149*/
    /*bef_stmt:17160*/
return Tag2_realsmith_ghgpGzrwll(/*int:17162:17162:17160:e*/result_realsmith_ghgpGzrwll);
/*aft_stmt:17160*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_TqVtsPmUH4(x) (x)
#define Tag2_realsmith_proxy_TqVtsPmUH4(x) (x)
#define Tag3_realsmith_proxy_TqVtsPmUH4(x) (x)
#define Tag4_realsmith_proxy_TqVtsPmUH4(x) (x)
#define Tag5_realsmith_proxy_TqVtsPmUH4(x) (x)
#define Tag6_realsmith_proxy_TqVtsPmUH4(x) (x)
#define Tag7_realsmith_proxy_TqVtsPmUH4(x) (x)
#define Tag8_realsmith_proxy_TqVtsPmUH4(x) (x)
#define Tag9_realsmith_proxy_TqVtsPmUH4(x) (x)
#define Tag10_realsmith_proxy_TqVtsPmUH4(x) (x)
#define Tag11_realsmith_proxy_TqVtsPmUH4(x) (x)
#include "stdlib.h"
struct arvo_device_M0ZlsJ {
    int chrdev_minor_realsmith_wJJBpF0S4r;
    int roccat_claimed_realsmith_wJJBpF0S4r;
};
int realsmith_wJJBpF0S4r(int interface_protocol_realsmith_wJJBpF0S4r, int usb_dev_init_realsmith_wJJBpF0S4r, int *chrdev_minor_realsmith_wJJBpF0S4r) {
    struct arvo_device_M0ZlsJ *arvo_realsmith_wJJBpF0S4r;
    int retval_realsmith_wJJBpF0S4r;
    /*bef_stmt:17247*/
if (Tag1_realsmith_proxy_TqVtsPmUH4(/*int:17594:17594:17247:e*/interface_protocol_realsmith_wJJBpF0S4r) == 1) {
        return 0;
    }
/*aft_stmt:17247*/
    arvo_realsmith_wJJBpF0S4r = (struct arvo_device_M0ZlsJ *)(malloc(sizeof(struct arvo_device_M0ZlsJ)));
    if (!arvo_realsmith_wJJBpF0S4r) {
        return -12;
    }
    /*bef_stmt:17340*/
retval_realsmith_wJJBpF0S4r = Tag2_realsmith_proxy_TqVtsPmUH4(/*int:17594:17594:17340:e*/usb_dev_init_realsmith_wJJBpF0S4r);
/*aft_stmt:17340*/
    /*bef_stmt:17398*/
if (Tag3_realsmith_proxy_TqVtsPmUH4(/*int:17594:17594:17398:e*/retval_realsmith_wJJBpF0S4r)) {
        (free(arvo_realsmith_wJJBpF0S4r));
        /*bef_stmt:17392*/
return Tag4_realsmith_proxy_TqVtsPmUH4(/*int:17594:17594:17392:e*/retval_realsmith_wJJBpF0S4r);
/*aft_stmt:17392*/
    }
/*aft_stmt:17398*/
    retval_realsmith_wJJBpF0S4r = 1;
    /*bef_stmt:17553*/
if (Tag5_realsmith_proxy_TqVtsPmUH4(/*int:17594:17594:17553:e*/retval_realsmith_wJJBpF0S4r) < 0) {
        (free(arvo_realsmith_wJJBpF0S4r));
        /*bef_stmt:17467*/
return Tag6_realsmith_proxy_TqVtsPmUH4(/*int:17594:17594:17467:e*/retval_realsmith_wJJBpF0S4r);
/*aft_stmt:17467*/
    } else {
        /*bef_stmt:17493*/
arvo_realsmith_wJJBpF0S4r->chrdev_minor_realsmith_wJJBpF0S4r = Tag7_realsmith_proxy_TqVtsPmUH4(/*int:17594:17594:17493:e*/retval_realsmith_wJJBpF0S4r);
/*aft_stmt:17493*/
        arvo_realsmith_wJJBpF0S4r->roccat_claimed_realsmith_wJJBpF0S4r = 1;
        /*bef_stmt:17544*/
*chrdev_minor_realsmith_wJJBpF0S4r = Tag8_realsmith_proxy_TqVtsPmUH4(/*int:17594:17594:17544:e*/arvo_realsmith_wJJBpF0S4r->chrdev_minor_realsmith_wJJBpF0S4r);
/*aft_stmt:17544*/
    }
/*aft_stmt:17553*/
    (free(arvo_realsmith_wJJBpF0S4r));
    return 0;
}
int realsmith_proxy_TqVtsPmUH4(int p_0_toIk9w0Nn0, int p_1_YnEkqRRuXh, int p_2_BtIUsWQ8S8) {
/*bef_stmt:17755*/
/*bef_stmt:17755*/
int proxy_ret_UbDpsMH6mi = realsmith_wJJBpF0S4r(Tag9_realsmith_proxy_TqVtsPmUH4(/*int:17767:17767:17755:e*/p_0_toIk9w0Nn0), Tag10_realsmith_proxy_TqVtsPmUH4(/*int:17767:17767:17755:e*/p_1_YnEkqRRuXh), &(p_2_BtIUsWQ8S8));
/*aft_stmt:17755*/
/*aft_stmt:17755*/
/*bef_stmt:17765*/
return Tag11_realsmith_proxy_TqVtsPmUH4(/*int:17767:17767:17765:e*/proxy_ret_UbDpsMH6mi);
/*aft_stmt:17765*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ZTq4l78cxc(x) (x)
#include "stdint.h"
int realsmith_ZTq4l78cxc(int value_realsmith_ZTq4l78cxc) {
    /*bef_stmt:1971*/
switch (Tag1_realsmith_ZTq4l78cxc(/*int:2163:2163:1971:e*/value_realsmith_ZTq4l78cxc)) {
        case 135:
            return 135;
        case 133:
            return 133;
        case 134:
            return 134;
        case 136:
            return 136;
        case 131:
            return 131;
        case 129:
            return 129;
        case 130:
            return 130;
        case 132:
            return 132;
        case 128:
            return 1 | 2;
    }
/*aft_stmt:1971*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_8RZZBBJlrC(x) (x)
#define Tag2_realsmith_8RZZBBJlrC(x) (x)
#define Tag3_realsmith_8RZZBBJlrC(x) (x)
#include "stdlib.h"
int realsmith_8RZZBBJlrC(int fc_dev_count_realsmith_8RZZBBJlrC, int new_private_data_realsmith_8RZZBBJlrC) {
    int fud_realsmith_8RZZBBJlrC = 0;
    /*bef_stmt:17142*/
if (Tag1_realsmith_8RZZBBJlrC(/*int:17212:17212:17142:e*/new_private_data_realsmith_8RZZBBJlrC)) {
        return -22;
    }
/*aft_stmt:17142*/
    fud_realsmith_8RZZBBJlrC = 1;
    /*bef_stmt:17180*/
if (!Tag2_realsmith_8RZZBBJlrC(/*int:17212:17212:17180:e*/fud_realsmith_8RZZBBJlrC)) {
        return -12;
    }
/*aft_stmt:17180*/
    /*bef_stmt:17195*/
new_private_data_realsmith_8RZZBBJlrC = Tag3_realsmith_8RZZBBJlrC(/*int:17212:17212:17195:e*/fud_realsmith_8RZZBBJlrC);
/*aft_stmt:17195*/
    fc_dev_count_realsmith_8RZZBBJlrC++;
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_jLbUyBIuKF(x) (x)
#define Tag2_realsmith_jLbUyBIuKF(x) (x)
#include "string.h"
int realsmith_jLbUyBIuKF(int key_index_realsmith_jLbUyBIuKF) {
    const char *keys_realsmith_jLbUyBIuKF[] = {
        "CHAP_A", "CHAP_I", "CHAP_C", "CHAP_N", "CHAP_R",
        "SRP_U", "SRP_N", "SRP_g", "SRP_s", "SRP_A",
        "SRP_B", "SRP_M", "SRP_HM"
    };
    /*bef_stmt:8677*/
/*bef_stmt:8677*/
if (Tag1_realsmith_jLbUyBIuKF(/*int:8720:8720:8677:e*/key_index_realsmith_jLbUyBIuKF) < 0 || Tag2_realsmith_jLbUyBIuKF(/*int:8720:8720:8677:e*/key_index_realsmith_jLbUyBIuKF) >= 13) {
        return 0;
    }
/*aft_stmt:8677*/
/*aft_stmt:8677*/
    return ((1) == 0) ? 1 : 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_IOyhcccL1V(x) (x)
#define Tag2_realsmith_IOyhcccL1V(x) (x)
#define Tag3_realsmith_IOyhcccL1V(x) (x)
#define Tag4_realsmith_IOyhcccL1V(x) (x)
#define Tag5_realsmith_IOyhcccL1V(x) (x)
#define Tag6_realsmith_IOyhcccL1V(x) (x)
#include "stdlib.h"
struct mthca_dev_UXUExw {
    int rdb_shift_realsmith_IOyhcccL1V;
    int rdb_table_realsmith_IOyhcccL1V;
    int eqp_table_realsmith_IOyhcccL1V;
    int qp_table_realsmith_IOyhcccL1V;
};
int realsmith_IOyhcccL1V(int rdb_shift_realsmith_IOyhcccL1V, int rdb_table_realsmith_IOyhcccL1V, int eqp_table_realsmith_IOyhcccL1V, int qp_table_realsmith_IOyhcccL1V, int qpn_realsmith_IOyhcccL1V) {
    /*bef_stmt:17263*/
/*bef_stmt:17263*/
int rdb_index_realsmith_IOyhcccL1V = /*TAG1:STA*/((int)(realsmith_0Y8FzVYLiG((int)(qpn_realsmith_IOyhcccL1V)+(-23))+(int)(qpn_realsmith_IOyhcccL1V)-(73))+qpn_realsmith_IOyhcccL1V)/*TAG1:END:qpn_realsmith_IOyhcccL1V*/ << /*TAG2:STA*/((int)(realsmith_3OEYVgS7IV((int)(rdb_shift_realsmith_IOyhcccL1V)+(63))+(int)(rdb_shift_realsmith_IOyhcccL1V)-(87))+rdb_shift_realsmith_IOyhcccL1V)/*TAG2:END:rdb_shift_realsmith_IOyhcccL1V*/;
/*aft_stmt:17263*/
/*aft_stmt:17263*/
    /*bef_stmt:17306*/
/*bef_stmt:17306*/
/*bef_stmt:17306*/
/*bef_stmt:17306*/
return /*TAG3:STA*/((int)(realsmith_yPtgsWpP1N((int)(rdb_index_realsmith_IOyhcccL1V)+(-298975), (int)(rdb_index_realsmith_IOyhcccL1V)+(-298986))+(int)(rdb_index_realsmith_IOyhcccL1V)-(299008))+rdb_index_realsmith_IOyhcccL1V)/*TAG3:END:rdb_index_realsmith_IOyhcccL1V*/ + /*TAG4:STA*/((int)(realsmith_49Q6oUynnb((int)(eqp_table_realsmith_IOyhcccL1V)+(-67), (int)(eqp_table_realsmith_IOyhcccL1V)+(-12), (int)(eqp_table_realsmith_IOyhcccL1V)+(-73), (int)(eqp_table_realsmith_IOyhcccL1V)+(5))+(int)(eqp_table_realsmith_IOyhcccL1V)-(94))+eqp_table_realsmith_IOyhcccL1V)/*TAG4:END:eqp_table_realsmith_IOyhcccL1V*/ + /*TAG5:STA*/((int)(realsmith_CbryUp4IIr((int)(qp_table_realsmith_IOyhcccL1V)+(16), (int)(qp_table_realsmith_IOyhcccL1V)+(4))+(int)(qp_table_realsmith_IOyhcccL1V)-(91))+qp_table_realsmith_IOyhcccL1V)/*TAG5:END:qp_table_realsmith_IOyhcccL1V*/ + /*TAG6:STA*/((int)(realsmith_proxy_J6BBLECN7u((unsigned int)(qpn_realsmith_IOyhcccL1V)+(24), (unsigned long)(qpn_realsmith_IOyhcccL1V)+(17))+(int)(qpn_realsmith_IOyhcccL1V)-(51))+qpn_realsmith_IOyhcccL1V)/*TAG6:END:qpn_realsmith_IOyhcccL1V*/;
/*aft_stmt:17306*/
/*aft_stmt:17306*/
/*aft_stmt:17306*/
/*aft_stmt:17306*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_7SM1ZwV3Sr(x) (x)
#define Tag2_realsmith_7SM1ZwV3Sr(x) (x)
#include "stdlib.h"
struct wbsd_host_OvpNCT {
    int irq_realsmith_7SM1ZwV3Sr;
};
int realsmith_7SM1ZwV3Sr(int irq_realsmith_7SM1ZwV3Sr) {
    struct wbsd_host_OvpNCT host_realsmith_7SM1ZwV3Sr;
    int ret_realsmith_7SM1ZwV3Sr;
    /*bef_stmt:17180*/
if (/*TAG1:STA*/((int)(realsmith_5Ir2tdZQfI((int)(irq_realsmith_7SM1ZwV3Sr)+(-15), (int)(irq_realsmith_7SM1ZwV3Sr)+(-28), (int)(irq_realsmith_7SM1ZwV3Sr)+(19))+(int)(irq_realsmith_7SM1ZwV3Sr)-(37))+irq_realsmith_7SM1ZwV3Sr)/*TAG1:END:irq_realsmith_7SM1ZwV3Sr*/ < 0) {
        return -1;
    }
/*aft_stmt:17180*/
    /*bef_stmt:17201*/
host_realsmith_7SM1ZwV3Sr.irq_realsmith_7SM1ZwV3Sr = /*TAG2:STA*/((int)(realsmith_proxy_wKdhZrDnc7((int)(irq_realsmith_7SM1ZwV3Sr)+(-33), (unsigned long)(irq_realsmith_7SM1ZwV3Sr)+(-22), (unsigned long)(irq_realsmith_7SM1ZwV3Sr)+(32), (unsigned long)(irq_realsmith_7SM1ZwV3Sr)+(-30))+(int)(irq_realsmith_7SM1ZwV3Sr)-(38))+irq_realsmith_7SM1ZwV3Sr)/*TAG2:END:irq_realsmith_7SM1ZwV3Sr*/;
/*aft_stmt:17201*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_V1TkoyUPDs(x) (x)
#define Tag2_realsmith_V1TkoyUPDs(x) (x)
#define Tag3_realsmith_V1TkoyUPDs(x) (x)
#define Tag4_realsmith_V1TkoyUPDs(x) (x)
#define Tag5_realsmith_V1TkoyUPDs(x) (x)
#define Tag6_realsmith_V1TkoyUPDs(x) (x)
#define Tag7_realsmith_V1TkoyUPDs(x) (x)
#define Tag8_realsmith_V1TkoyUPDs(x) (x)
#define Tag9_realsmith_V1TkoyUPDs(x) (x)
#define Tag10_realsmith_V1TkoyUPDs(x) (x)
#define Tag11_realsmith_V1TkoyUPDs(x) (x)
#define Tag12_realsmith_V1TkoyUPDs(x) (x)
#define Tag13_realsmith_V1TkoyUPDs(x) (x)
#define Tag14_realsmith_V1TkoyUPDs(x) (x)
#define Tag15_realsmith_V1TkoyUPDs(x) (x)
#define Tag16_realsmith_V1TkoyUPDs(x) (x)
#define Tag17_realsmith_V1TkoyUPDs(x) (x)
#define Tag18_realsmith_V1TkoyUPDs(x) (x)
#define Tag19_realsmith_V1TkoyUPDs(x) (x)
#define Tag20_realsmith_V1TkoyUPDs(x) (x)
#define Tag21_realsmith_V1TkoyUPDs(x) (x)
#define Tag22_realsmith_V1TkoyUPDs(x) (x)
#define Tag23_realsmith_V1TkoyUPDs(x) (x)
#define Tag24_realsmith_V1TkoyUPDs(x) (x)
#define Tag25_realsmith_V1TkoyUPDs(x) (x)
#define Tag26_realsmith_V1TkoyUPDs(x) (x)
#define Tag27_realsmith_V1TkoyUPDs(x) (x)
#define Tag28_realsmith_V1TkoyUPDs(x) (x)
#define Tag29_realsmith_V1TkoyUPDs(x) (x)
#define Tag30_realsmith_V1TkoyUPDs(x) (x)
#define Tag31_realsmith_V1TkoyUPDs(x) (x)
#define Tag32_realsmith_V1TkoyUPDs(x) (x)
#define Tag33_realsmith_V1TkoyUPDs(x) (x)
#define Tag34_realsmith_V1TkoyUPDs(x) (x)
#define Tag35_realsmith_V1TkoyUPDs(x) (x)
#include "stdlib.h"
struct super_block_ATwVY7 {
    int s_blocksize_bits_realsmith_V1TkoyUPDs;
    int s_blocksize_realsmith_V1TkoyUPDs;
};
struct inode_ATwVY7 {
    struct super_block_ATwVY7 *i_sb_realsmith_V1TkoyUPDs;
};
int realsmith_V1TkoyUPDs(int dir_size_realsmith_V1TkoyUPDs, int blocksize_bits_realsmith_V1TkoyUPDs, int start_lookup_realsmith_V1TkoyUPDs) {
    struct super_block_ATwVY7 sb_realsmith_V1TkoyUPDs;
    struct inode_ATwVY7 dir_realsmith_V1TkoyUPDs;
    int nblocks_realsmith_V1TkoyUPDs, block_realsmith_V1TkoyUPDs, ra_max_realsmith_V1TkoyUPDs = 0, ra_ptr_realsmith_V1TkoyUPDs = 0, num_realsmith_V1TkoyUPDs = 0, i_realsmith_V1TkoyUPDs, err_realsmith_V1TkoyUPDs;
    unsigned long start_realsmith_V1TkoyUPDs;
    /*bef_stmt:17441*/
sb_realsmith_V1TkoyUPDs.s_blocksize_bits_realsmith_V1TkoyUPDs = Tag1_realsmith_V1TkoyUPDs(/*int:18209:18209:17441:e*/blocksize_bits_realsmith_V1TkoyUPDs);
/*aft_stmt:17441*/
    /*bef_stmt:17482*/
sb_realsmith_V1TkoyUPDs.s_blocksize_realsmith_V1TkoyUPDs = 1 << Tag2_realsmith_V1TkoyUPDs(/*int:18209:18209:17482:e*/blocksize_bits_realsmith_V1TkoyUPDs);
/*aft_stmt:17482*/
    dir_realsmith_V1TkoyUPDs.i_sb_realsmith_V1TkoyUPDs = &sb_realsmith_V1TkoyUPDs;
    /*bef_stmt:17535*/
/*bef_stmt:17535*/
nblocks_realsmith_V1TkoyUPDs = Tag3_realsmith_V1TkoyUPDs(/*int:18209:18209:17535:e*/dir_size_realsmith_V1TkoyUPDs) >> Tag4_realsmith_V1TkoyUPDs(/*int:18209:18209:17535:e*/sb_realsmith_V1TkoyUPDs.s_blocksize_bits_realsmith_V1TkoyUPDs);
/*aft_stmt:17535*/
/*aft_stmt:17535*/
    /*bef_stmt:17553*/
start_realsmith_V1TkoyUPDs = Tag5_realsmith_V1TkoyUPDs(/*int:18209:18209:17553:e*/start_lookup_realsmith_V1TkoyUPDs);
/*aft_stmt:17553*/
    /*bef_stmt:17593*/
/*bef_stmt:17593*/
if (Tag6_realsmith_V1TkoyUPDs(/*unsigned long:18209:18209:17593:e*/start_realsmith_V1TkoyUPDs) >= Tag7_realsmith_V1TkoyUPDs(/*int:18209:18209:17593:e*/nblocks_realsmith_V1TkoyUPDs))
        start_realsmith_V1TkoyUPDs = 0;
/*aft_stmt:17593*/
/*aft_stmt:17593*/
    /*bef_stmt:17611*/
block_realsmith_V1TkoyUPDs = Tag8_realsmith_V1TkoyUPDs(/*unsigned long:18209:18209:17611:e*/start_realsmith_V1TkoyUPDs);
/*aft_stmt:17611*/
/*bef_stmt:18105*/
/*bef_stmt:18105*/
restart:
    do {
        /*bef_stmt:17808*/
/*bef_stmt:17808*/
if (Tag9_realsmith_V1TkoyUPDs(/*int:18209:18209:17808:e*/ra_ptr_realsmith_V1TkoyUPDs) >= Tag10_realsmith_V1TkoyUPDs(/*int:18209:18209:17808:e*/ra_max_realsmith_V1TkoyUPDs)) {
            ra_ptr_realsmith_V1TkoyUPDs = 0;
            /*bef_stmt:17671*/
unsigned long b_realsmith_V1TkoyUPDs = Tag11_realsmith_V1TkoyUPDs(/*int:18209:18209:17671:e*/block_realsmith_V1TkoyUPDs);
/*aft_stmt:17671*/
            /*bef_stmt:17796*/
for (ra_max_realsmith_V1TkoyUPDs = 0; Tag12_realsmith_V1TkoyUPDs(/*int:18209:18209:17796:e*/ra_max_realsmith_V1TkoyUPDs) < 16; ra_max_realsmith_V1TkoyUPDs++) {
                /*bef_stmt:17773*/
/*bef_stmt:17773*/
/*bef_stmt:17773*/
/*bef_stmt:17773*/
/*bef_stmt:17773*/
if (Tag13_realsmith_V1TkoyUPDs(/*unsigned long:17803:18061:17773:e*/b_realsmith_V1TkoyUPDs) >= Tag14_realsmith_V1TkoyUPDs(/*int:18209:18209:17773:e*/nblocks_realsmith_V1TkoyUPDs) || (Tag15_realsmith_V1TkoyUPDs(/*int:18209:18209:17773:e*/num_realsmith_V1TkoyUPDs) && Tag16_realsmith_V1TkoyUPDs(/*int:18209:18209:17773:e*/block_realsmith_V1TkoyUPDs) == Tag17_realsmith_V1TkoyUPDs(/*unsigned long:18209:18209:17773:e*/start_realsmith_V1TkoyUPDs))) {
                    break;
                }
/*aft_stmt:17773*/
/*aft_stmt:17773*/
/*aft_stmt:17773*/
/*aft_stmt:17773*/
/*aft_stmt:17773*/
                num_realsmith_V1TkoyUPDs++;
                b_realsmith_V1TkoyUPDs++;
            }
/*aft_stmt:17796*/
        }
/*aft_stmt:17808*/
/*aft_stmt:17808*/
        /*bef_stmt:17843*/
/*bef_stmt:17843*/
if (Tag18_realsmith_V1TkoyUPDs(/*int:18209:18209:17843:e*/ra_ptr_realsmith_V1TkoyUPDs) >= Tag19_realsmith_V1TkoyUPDs(/*int:18209:18209:17843:e*/ra_max_realsmith_V1TkoyUPDs))
            goto next;
/*aft_stmt:17843*/
/*aft_stmt:17843*/
        /*bef_stmt:17890*/
/*bef_stmt:17890*/
err_realsmith_V1TkoyUPDs = (Tag20_realsmith_V1TkoyUPDs(/*int:18209:18209:17890:e*/block_realsmith_V1TkoyUPDs) < Tag21_realsmith_V1TkoyUPDs(/*int:18209:18209:17890:e*/nblocks_realsmith_V1TkoyUPDs)) ? 0 : -1;
/*aft_stmt:17890*/
/*aft_stmt:17890*/
        /*bef_stmt:17907*/
if (Tag22_realsmith_V1TkoyUPDs(/*int:18209:18209:17907:e*/err_realsmith_V1TkoyUPDs)) {
            goto next;
        }
/*aft_stmt:17907*/
        /*bef_stmt:17955*/
/*bef_stmt:17955*/
i_realsmith_V1TkoyUPDs = (Tag23_realsmith_V1TkoyUPDs(/*int:18209:18209:17955:e*/block_realsmith_V1TkoyUPDs) == Tag24_realsmith_V1TkoyUPDs(/*unsigned long:18209:18209:17955:e*/start_realsmith_V1TkoyUPDs)) ? 1 : 0;
/*aft_stmt:17955*/
/*aft_stmt:17955*/
        /*bef_stmt:18017*/
if (Tag25_realsmith_V1TkoyUPDs(/*int:18209:18209:18017:e*/i_realsmith_V1TkoyUPDs) == 1) {
            /*bef_stmt:17981*/
return Tag26_realsmith_V1TkoyUPDs(/*int:18209:18209:17981:e*/block_realsmith_V1TkoyUPDs);
/*aft_stmt:17981*/
        } else {
            /*bef_stmt:18010*/
if (Tag27_realsmith_V1TkoyUPDs(/*int:18209:18209:18010:e*/i_realsmith_V1TkoyUPDs) < 0)
                return -1;
/*aft_stmt:18010*/
        }
/*aft_stmt:18017*/
/*bef_stmt:18057*/
next:
        if (++block_realsmith_V1TkoyUPDs >= Tag28_realsmith_V1TkoyUPDs(/*int:18209:18209:18057:e*/nblocks_realsmith_V1TkoyUPDs))
            block_realsmith_V1TkoyUPDs = 0;
/*aft_stmt:18057*/
    } while (Tag29_realsmith_V1TkoyUPDs(/*int:18209:18209:18105:e*/block_realsmith_V1TkoyUPDs) != Tag30_realsmith_V1TkoyUPDs(/*unsigned long:18209:18209:18105:e*/start_realsmith_V1TkoyUPDs));
/*aft_stmt:18105*/
/*aft_stmt:18105*/
    /*bef_stmt:18120*/
block_realsmith_V1TkoyUPDs = Tag31_realsmith_V1TkoyUPDs(/*int:18209:18209:18120:e*/nblocks_realsmith_V1TkoyUPDs);
/*aft_stmt:18120*/
    /*bef_stmt:18152*/
/*bef_stmt:18152*/
nblocks_realsmith_V1TkoyUPDs = Tag32_realsmith_V1TkoyUPDs(/*int:18209:18209:18152:e*/dir_size_realsmith_V1TkoyUPDs) >> Tag33_realsmith_V1TkoyUPDs(/*int:18209:18209:18152:e*/sb_realsmith_V1TkoyUPDs.s_blocksize_bits_realsmith_V1TkoyUPDs);
/*aft_stmt:18152*/
/*aft_stmt:18152*/
    /*bef_stmt:18196*/
/*bef_stmt:18196*/
if (Tag34_realsmith_V1TkoyUPDs(/*int:18209:18209:18196:e*/block_realsmith_V1TkoyUPDs) < Tag35_realsmith_V1TkoyUPDs(/*int:18209:18209:18196:e*/nblocks_realsmith_V1TkoyUPDs)) {
        start_realsmith_V1TkoyUPDs = 0;
        goto restart;
    }
/*aft_stmt:18196*/
/*aft_stmt:18196*/
    return -1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_U2WTzxhBPo(x) (x)
#define Tag2_realsmith_U2WTzxhBPo(x) (x)
#define Tag3_realsmith_U2WTzxhBPo(x) (x)
#define Tag4_realsmith_U2WTzxhBPo(x) (x)
#define Tag5_realsmith_U2WTzxhBPo(x) (x)
#define Tag6_realsmith_U2WTzxhBPo(x) (x)
#define Tag7_realsmith_U2WTzxhBPo(x) (x)
#define Tag8_realsmith_U2WTzxhBPo(x) (x)
#define Tag9_realsmith_U2WTzxhBPo(x) (x)
#define Tag10_realsmith_U2WTzxhBPo(x) (x)
#define Tag11_realsmith_U2WTzxhBPo(x) (x)
#define Tag12_realsmith_U2WTzxhBPo(x) (x)
#define Tag13_realsmith_U2WTzxhBPo(x) (x)
#define Tag14_realsmith_U2WTzxhBPo(x) (x)
#define Tag15_realsmith_U2WTzxhBPo(x) (x)
#define Tag16_realsmith_U2WTzxhBPo(x) (x)
#define Tag17_realsmith_U2WTzxhBPo(x) (x)
#include "stdlib.h"
struct modal_eep_4k_header_ZMnfIw {
    int rxTxMarginCh_realsmith_U2WTzxhBPo[1];
    int xatten2Db_realsmith_U2WTzxhBPo[1];
    int xatten2Margin_realsmith_U2WTzxhBPo[1];
    int bswAtten_realsmith_U2WTzxhBPo[1];
    int bswMargin_realsmith_U2WTzxhBPo[1];
    int txRxAttenCh_realsmith_U2WTzxhBPo[1];
    int iqCalQCh_realsmith_U2WTzxhBPo[1];
    int iqCalICh_realsmith_U2WTzxhBPo[1];
    int antCtrlChain_realsmith_U2WTzxhBPo[1];
};
int realsmith_U2WTzxhBPo(int antCtrlChain_realsmith_U2WTzxhBPo, int iqCalICh_realsmith_U2WTzxhBPo, int iqCalQCh_realsmith_U2WTzxhBPo, int txRxAttenCh_realsmith_U2WTzxhBPo, int bswMargin_realsmith_U2WTzxhBPo, int bswAtten_realsmith_U2WTzxhBPo, int xatten2Margin_realsmith_U2WTzxhBPo, int xatten2Db_realsmith_U2WTzxhBPo, int rxTxMarginCh_realsmith_U2WTzxhBPo, int eepromRev_realsmith_U2WTzxhBPo) {
    /*bef_stmt:17521*/
int txRxAttenLocal_realsmith_U2WTzxhBPo = Tag1_realsmith_U2WTzxhBPo(/*int:17920:17920:17521:e*/txRxAttenCh_realsmith_U2WTzxhBPo);
/*aft_stmt:17521*/
    /*bef_stmt:17547*/
int phySwitchChain_realsmith_U2WTzxhBPo = Tag2_realsmith_U2WTzxhBPo(/*int:17920:17920:17547:e*/antCtrlChain_realsmith_U2WTzxhBPo);
/*aft_stmt:17547*/
    /*bef_stmt:17596*/
/*bef_stmt:17596*/
int phyTimingCtrl4_realsmith_U2WTzxhBPo = (Tag3_realsmith_U2WTzxhBPo(/*int:17920:17920:17596:e*/iqCalICh_realsmith_U2WTzxhBPo) << 16) | Tag4_realsmith_U2WTzxhBPo(/*int:17920:17920:17596:e*/iqCalQCh_realsmith_U2WTzxhBPo);
/*aft_stmt:17596*/
/*aft_stmt:17596*/
    /*bef_stmt:17848*/
if (Tag5_realsmith_U2WTzxhBPo(/*int:17920:17920:17848:e*/eepromRev_realsmith_U2WTzxhBPo) >= 3) {
        /*bef_stmt:17625*/
txRxAttenLocal_realsmith_U2WTzxhBPo = Tag6_realsmith_U2WTzxhBPo(/*int:17920:17920:17625:e*/txRxAttenCh_realsmith_U2WTzxhBPo);
/*aft_stmt:17625*/
        /*bef_stmt:17652*/
int gain2ghzXatten1Margin_realsmith_U2WTzxhBPo = Tag7_realsmith_U2WTzxhBPo(/*int:17920:17920:17652:e*/bswMargin_realsmith_U2WTzxhBPo);
/*aft_stmt:17652*/
        /*bef_stmt:17678*/
int gain2ghzXatten1Db_realsmith_U2WTzxhBPo = Tag8_realsmith_U2WTzxhBPo(/*int:17920:17920:17678:e*/bswAtten_realsmith_U2WTzxhBPo);
/*aft_stmt:17678*/
        /*bef_stmt:17704*/
int gain2ghzXatten2Margin_realsmith_U2WTzxhBPo = Tag9_realsmith_U2WTzxhBPo(/*int:17920:17920:17704:e*/xatten2Margin_realsmith_U2WTzxhBPo);
/*aft_stmt:17704*/
        /*bef_stmt:17730*/
int gain2ghzXatten2Db_realsmith_U2WTzxhBPo = Tag10_realsmith_U2WTzxhBPo(/*int:17920:17920:17730:e*/xatten2Db_realsmith_U2WTzxhBPo);
/*aft_stmt:17730*/
        /*bef_stmt:17756*/
int gain2ghzBlock1Xatten1Margin_realsmith_U2WTzxhBPo = Tag11_realsmith_U2WTzxhBPo(/*int:17920:17920:17756:e*/bswMargin_realsmith_U2WTzxhBPo);
/*aft_stmt:17756*/
        /*bef_stmt:17782*/
int gain2ghzBlock1Xatten1Db_realsmith_U2WTzxhBPo = Tag12_realsmith_U2WTzxhBPo(/*int:17920:17920:17782:e*/bswAtten_realsmith_U2WTzxhBPo);
/*aft_stmt:17782*/
        /*bef_stmt:17808*/
int gain2ghzBlock1Xatten2Margin_realsmith_U2WTzxhBPo = Tag13_realsmith_U2WTzxhBPo(/*int:17920:17920:17808:e*/xatten2Margin_realsmith_U2WTzxhBPo);
/*aft_stmt:17808*/
        /*bef_stmt:17834*/
int gain2ghzBlock1Xatten2Db_realsmith_U2WTzxhBPo = Tag14_realsmith_U2WTzxhBPo(/*int:17920:17920:17834:e*/xatten2Db_realsmith_U2WTzxhBPo);
/*aft_stmt:17834*/
    }
/*aft_stmt:17848*/
    /*bef_stmt:17875*/
int phyRxGainTxRxAtten_realsmith_U2WTzxhBPo = Tag15_realsmith_U2WTzxhBPo(/*int:17920:17920:17875:e*/txRxAttenLocal_realsmith_U2WTzxhBPo);
/*aft_stmt:17875*/
    /*bef_stmt:17901*/
int phyRxGainTxRxMargin_realsmith_U2WTzxhBPo = Tag16_realsmith_U2WTzxhBPo(/*int:17920:17920:17901:e*/rxTxMarginCh_realsmith_U2WTzxhBPo);
/*aft_stmt:17901*/
    /*bef_stmt:17911*/
return Tag17_realsmith_U2WTzxhBPo(/*int:17920:17920:17911:e*/phyRxGainTxRxMargin_realsmith_U2WTzxhBPo);
/*aft_stmt:17911*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_nQpbSTle6b(x) (x)
#define Tag2_realsmith_nQpbSTle6b(x) (x)
#define Tag3_realsmith_nQpbSTle6b(x) (x)
#define Tag4_realsmith_nQpbSTle6b(x) (x)
#define Tag5_realsmith_nQpbSTle6b(x) (x)
#define Tag6_realsmith_nQpbSTle6b(x) (x)
#define Tag7_realsmith_nQpbSTle6b(x) (x)
#define Tag8_realsmith_nQpbSTle6b(x) (x)
#define Tag9_realsmith_nQpbSTle6b(x) (x)
#define Tag10_realsmith_nQpbSTle6b(x) (x)
#define Tag11_realsmith_nQpbSTle6b(x) (x)
#define Tag12_realsmith_nQpbSTle6b(x) (x)
#include "stdlib.h"
int realsmith_nQpbSTle6b(int msg_format_realsmith_nQpbSTle6b, int instat_endpoint_realsmith_nQpbSTle6b, int indat_endpoint_realsmith_nQpbSTle6b, int glocont_endpoint_realsmith_nQpbSTle6b) {
    int instat_buf_realsmith_nQpbSTle6b[256];
    int indat_buf_realsmith_nQpbSTle6b[256];
    int glocont_buf_realsmith_nQpbSTle6b[256];
    int INSTAT_BUFLEN_realsmith_nQpbSTle6b = sizeof(instat_buf_realsmith_nQpbSTle6b);
    int INDAT49W_BUFLEN_realsmith_nQpbSTle6b = sizeof(indat_buf_realsmith_nQpbSTle6b);
    int GLOCONT_BUFLEN_realsmith_nQpbSTle6b = sizeof(glocont_buf_realsmith_nQpbSTle6b);
    int instat_urb_realsmith_nQpbSTle6b = 0;
    int indat_urb_realsmith_nQpbSTle6b = 0;
    int glocont_urb_realsmith_nQpbSTle6b = 0;
    /*bef_stmt:17437*/
/*bef_stmt:17437*/
/*bef_stmt:17437*/
instat_urb_realsmith_nQpbSTle6b = Tag1_realsmith_nQpbSTle6b(/*int:17546:17546:17437:e*/instat_endpoint_realsmith_nQpbSTle6b) + Tag2_realsmith_nQpbSTle6b(/*int:17546:17546:17437:e*/INSTAT_BUFLEN_realsmith_nQpbSTle6b) + Tag3_realsmith_nQpbSTle6b(/*int:17546:17546:17437:e*/msg_format_realsmith_nQpbSTle6b);
/*aft_stmt:17437*/
/*aft_stmt:17437*/
/*aft_stmt:17437*/
    /*bef_stmt:17474*/
/*bef_stmt:17474*/
/*bef_stmt:17474*/
indat_urb_realsmith_nQpbSTle6b = Tag4_realsmith_nQpbSTle6b(/*int:17546:17546:17474:e*/indat_endpoint_realsmith_nQpbSTle6b) + Tag5_realsmith_nQpbSTle6b(/*int:17546:17546:17474:e*/INDAT49W_BUFLEN_realsmith_nQpbSTle6b) + Tag6_realsmith_nQpbSTle6b(/*int:17546:17546:17474:e*/msg_format_realsmith_nQpbSTle6b);
/*aft_stmt:17474*/
/*aft_stmt:17474*/
/*aft_stmt:17474*/
    /*bef_stmt:17511*/
/*bef_stmt:17511*/
/*bef_stmt:17511*/
glocont_urb_realsmith_nQpbSTle6b = Tag7_realsmith_nQpbSTle6b(/*int:17546:17546:17511:e*/glocont_endpoint_realsmith_nQpbSTle6b) + Tag8_realsmith_nQpbSTle6b(/*int:17546:17546:17511:e*/GLOCONT_BUFLEN_realsmith_nQpbSTle6b) + Tag9_realsmith_nQpbSTle6b(/*int:17546:17546:17511:e*/msg_format_realsmith_nQpbSTle6b);
/*aft_stmt:17511*/
/*aft_stmt:17511*/
/*aft_stmt:17511*/
    /*bef_stmt:17544*/
/*bef_stmt:17544*/
/*bef_stmt:17544*/
return Tag10_realsmith_nQpbSTle6b(/*int:17546:17546:17544:e*/instat_urb_realsmith_nQpbSTle6b) + Tag11_realsmith_nQpbSTle6b(/*int:17546:17546:17544:e*/indat_urb_realsmith_nQpbSTle6b) + Tag12_realsmith_nQpbSTle6b(/*int:17546:17546:17544:e*/glocont_urb_realsmith_nQpbSTle6b);
/*aft_stmt:17544*/
/*aft_stmt:17544*/
/*aft_stmt:17544*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_wuqOXZ4TdM(x) (x)
#define Tag2_realsmith_wuqOXZ4TdM(x) (x)
#define Tag3_realsmith_wuqOXZ4TdM(x) (x)
#define Tag4_realsmith_wuqOXZ4TdM(x) (x)
#define Tag5_realsmith_wuqOXZ4TdM(x) (x)
#define Tag6_realsmith_wuqOXZ4TdM(x) (x)
#include "stdlib.h"
int realsmith_wuqOXZ4TdM(int disk_key1_realsmith_wuqOXZ4TdM, int disk_key2_realsmith_wuqOXZ4TdM) {
    /*bef_stmt:17123*/
int k1_realsmith_wuqOXZ4TdM = Tag1_realsmith_wuqOXZ4TdM(/*int:17217:17217:17123:e*/disk_key1_realsmith_wuqOXZ4TdM);
/*aft_stmt:17123*/
    /*bef_stmt:17149*/
int k2_realsmith_wuqOXZ4TdM = Tag2_realsmith_wuqOXZ4TdM(/*int:17217:17217:17149:e*/disk_key2_realsmith_wuqOXZ4TdM);
/*aft_stmt:17149*/
    /*bef_stmt:17179*/
/*bef_stmt:17179*/
if (Tag3_realsmith_wuqOXZ4TdM(/*int:17217:17217:17179:e*/k1_realsmith_wuqOXZ4TdM) < Tag4_realsmith_wuqOXZ4TdM(/*int:17217:17217:17179:e*/k2_realsmith_wuqOXZ4TdM)) return -1;
/*aft_stmt:17179*/
/*aft_stmt:17179*/
    /*bef_stmt:17207*/
/*bef_stmt:17207*/
if (Tag5_realsmith_wuqOXZ4TdM(/*int:17217:17217:17207:e*/k1_realsmith_wuqOXZ4TdM) > Tag6_realsmith_wuqOXZ4TdM(/*int:17217:17217:17207:e*/k2_realsmith_wuqOXZ4TdM)) return 1;
/*aft_stmt:17207*/
/*aft_stmt:17207*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_JkLyWAn9UH(x) (x)
#define Tag2_realsmith_JkLyWAn9UH(x) (x)
#define Tag3_realsmith_JkLyWAn9UH(x) (x)
#define Tag4_realsmith_JkLyWAn9UH(x) (x)
#define Tag5_realsmith_JkLyWAn9UH(x) (x)
#define Tag6_realsmith_JkLyWAn9UH(x) (x)
#include "stdint.h"
int realsmith_JkLyWAn9UH(int slave_id_realsmith_JkLyWAn9UH) {
    unsigned char bits_realsmith_JkLyWAn9UH = 0;
    unsigned char msg_realsmith_JkLyWAn9UH = 0;
    /*bef_stmt:2039*/
msg_realsmith_JkLyWAn9UH |= (/*TAG1:STA*/((int)(realsmith_D8A3NoH8Qu((int)(slave_id_realsmith_JkLyWAn9UH)+(-35), (int)(slave_id_realsmith_JkLyWAn9UH)+(35), (int)(slave_id_realsmith_JkLyWAn9UH)+(-29), (int)(slave_id_realsmith_JkLyWAn9UH)+(10))+(int)(slave_id_realsmith_JkLyWAn9UH)-(306))+slave_id_realsmith_JkLyWAn9UH)/*TAG1:END:slave_id_realsmith_JkLyWAn9UH*/ & 0x3);
/*aft_stmt:2039*/
    msg_realsmith_JkLyWAn9UH |= (0x1 & 0x7) << 2;
    /*bef_stmt:2137*/
/*bef_stmt:2137*/
unsigned char crc_realsmith_JkLyWAn9UH = (/*TAG2:STA*/((unsigned char)(realsmith_TTNupLmM9X((int)(msg_realsmith_JkLyWAn9UH)+(1), (int)(msg_realsmith_JkLyWAn9UH)+(7))+(int)(msg_realsmith_JkLyWAn9UH)-(5))+msg_realsmith_JkLyWAn9UH)/*TAG2:END:msg_realsmith_JkLyWAn9UH*/ ^ /*TAG3:STA*/((unsigned char)(realsmith_X0WPu3MIk4((int)(bits_realsmith_JkLyWAn9UH)+(43))+(int)(bits_realsmith_JkLyWAn9UH)-(43))+bits_realsmith_JkLyWAn9UH)/*TAG3:END:bits_realsmith_JkLyWAn9UH*/) & 0xFF;
/*aft_stmt:2137*/
/*aft_stmt:2137*/
    /*bef_stmt:2202*/
/*bef_stmt:2202*/
/*bef_stmt:2202*/
return (/*TAG4:STA*/((unsigned char)(realsmith_faw8QK5nn2((int)(msg_realsmith_JkLyWAn9UH)+(70))+(int)(msg_realsmith_JkLyWAn9UH)-(5))+msg_realsmith_JkLyWAn9UH)/*TAG4:END:msg_realsmith_JkLyWAn9UH*/ << 8) | (/*TAG5:STA*/((unsigned char)(realsmith_proxy_yKNynAG0yr((int)(bits_realsmith_JkLyWAn9UH)+(1), (int)(bits_realsmith_JkLyWAn9UH)+(1), (int)(bits_realsmith_JkLyWAn9UH)+(-2), (int)(bits_realsmith_JkLyWAn9UH)+(2))+(int)(bits_realsmith_JkLyWAn9UH)-(-1))+bits_realsmith_JkLyWAn9UH)/*TAG5:END:bits_realsmith_JkLyWAn9UH*/ << 4) | /*TAG6:STA*/((unsigned char)(realsmith_6s7BM1E3Hy((int)(crc_realsmith_JkLyWAn9UH)+(77))+(int)(crc_realsmith_JkLyWAn9UH)-(5))+crc_realsmith_JkLyWAn9UH)/*TAG6:END:crc_realsmith_JkLyWAn9UH*/;
/*aft_stmt:2202*/
/*aft_stmt:2202*/
/*aft_stmt:2202*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_T93DTaOePu(x) (x)
#define Tag2_realsmith_T93DTaOePu(x) (x)
#define Tag3_realsmith_T93DTaOePu(x) (x)
#define Tag4_realsmith_T93DTaOePu(x) (x)
#define Tag5_realsmith_T93DTaOePu(x) (x)
#define Tag6_realsmith_T93DTaOePu(x) (x)
#define Tag7_realsmith_T93DTaOePu(x) (x)
#define Tag8_realsmith_T93DTaOePu(x) (x)
#define Tag9_realsmith_T93DTaOePu(x) (x)
#define Tag10_realsmith_T93DTaOePu(x) (x)
#include "stdlib.h"
#include "string.h"
struct ena_com_llq_pkt_ctrl_XkhMDN {
    int descs_left_in_line_realsmith_T93DTaOePu;
    int idx_realsmith_T93DTaOePu;
    int curr_bounce_buf_realsmith_T93DTaOePu;
};
struct ena_com_llq_info_XkhMDN {
    int descs_num_before_header_realsmith_T93DTaOePu;
    int desc_list_entry_size_realsmith_T93DTaOePu;
};
struct ena_com_io_sq_XkhMDN {
    int mem_queue_type_realsmith_T93DTaOePu;
    struct ena_com_llq_pkt_ctrl_XkhMDN llq_buf_ctrl_realsmith_T93DTaOePu;
    int bounce_buf_ctrl_realsmith_T93DTaOePu;
    struct ena_com_llq_info_XkhMDN llq_info_realsmith_T93DTaOePu;
};
int realsmith_T93DTaOePu(int mem_queue_type_realsmith_T93DTaOePu, int idx_realsmith_T93DTaOePu, int curr_bounce_buf_realsmith_T93DTaOePu,
                                 int descs_num_before_header_realsmith_T93DTaOePu, int desc_list_entry_size_realsmith_T93DTaOePu) {
    struct ena_com_llq_pkt_ctrl_XkhMDN pkt_ctrl_realsmith_T93DTaOePu;
    struct ena_com_llq_info_XkhMDN llq_info_realsmith_T93DTaOePu;
    int rc_realsmith_T93DTaOePu = 0;
    /*bef_stmt:25229*/
pkt_ctrl_realsmith_T93DTaOePu.idx_realsmith_T93DTaOePu = /*TAG1:STA*/((int)(realsmith_nnH3U1L7hW((int)(idx_realsmith_T93DTaOePu)+(41), (int)(idx_realsmith_T93DTaOePu)+(75), (int)(idx_realsmith_T93DTaOePu)+(34), (int)(idx_realsmith_T93DTaOePu)+(93))+(int)(idx_realsmith_T93DTaOePu)-(-1))+idx_realsmith_T93DTaOePu)/*TAG1:END:idx_realsmith_T93DTaOePu*/;
/*aft_stmt:25229*/
    /*bef_stmt:25263*/
pkt_ctrl_realsmith_T93DTaOePu.curr_bounce_buf_realsmith_T93DTaOePu = /*TAG2:STA*/((int)(realsmith_proxy_NmgBMIkXxP((int)(curr_bounce_buf_realsmith_T93DTaOePu)+(93), (int)(curr_bounce_buf_realsmith_T93DTaOePu)+(23))+(int)(curr_bounce_buf_realsmith_T93DTaOePu)-(-1))+curr_bounce_buf_realsmith_T93DTaOePu)/*TAG2:END:curr_bounce_buf_realsmith_T93DTaOePu*/;
/*aft_stmt:25263*/
    /*bef_stmt:25284*/
llq_info_realsmith_T93DTaOePu.descs_num_before_header_realsmith_T93DTaOePu = /*TAG3:STA*/((int)(realsmith_YPYcmYbW4j((int)(descs_num_before_header_realsmith_T93DTaOePu)+(81), (int)(descs_num_before_header_realsmith_T93DTaOePu)+(9), (int)(descs_num_before_header_realsmith_T93DTaOePu)+(35), (int)(descs_num_before_header_realsmith_T93DTaOePu)+(3), (int)(descs_num_before_header_realsmith_T93DTaOePu)+(54))+(int)(descs_num_before_header_realsmith_T93DTaOePu)-(88))+descs_num_before_header_realsmith_T93DTaOePu)/*TAG3:END:descs_num_before_header_realsmith_T93DTaOePu*/;
/*aft_stmt:25284*/
    /*bef_stmt:25317*/
llq_info_realsmith_T93DTaOePu.desc_list_entry_size_realsmith_T93DTaOePu = /*TAG4:STA*/((int)(realsmith_1dUC8nsdHU((int)(desc_list_entry_size_realsmith_T93DTaOePu)+(48))+(int)(desc_list_entry_size_realsmith_T93DTaOePu)-(44029))+desc_list_entry_size_realsmith_T93DTaOePu)/*TAG4:END:desc_list_entry_size_realsmith_T93DTaOePu*/;
/*aft_stmt:25317*/
    /*bef_stmt:25342*/
if (/*TAG5:STA*/((int)(realsmith_x2EsgkBJFQ((int)(mem_queue_type_realsmith_T93DTaOePu)+(86), (int)(mem_queue_type_realsmith_T93DTaOePu)+(15))+(int)(mem_queue_type_realsmith_T93DTaOePu)-(0))+mem_queue_type_realsmith_T93DTaOePu)/*TAG5:END:mem_queue_type_realsmith_T93DTaOePu*/ == 0)
        return 0;
/*aft_stmt:25342*/
    /*bef_stmt:25478*/
if (/*TAG6:STA*/((int)(realsmith_yl09SDIRGA((int)(pkt_ctrl_realsmith_T93DTaOePu.idx_realsmith_T93DTaOePu)+(76))+(int)(pkt_ctrl_realsmith_T93DTaOePu.idx_realsmith_T93DTaOePu)-(0))+pkt_ctrl_realsmith_T93DTaOePu.idx_realsmith_T93DTaOePu)/*TAG6:END:pkt_ctrl_realsmith_T93DTaOePu.idx_realsmith_T93DTaOePu*/) {
        rc_realsmith_T93DTaOePu = 0;
        /*bef_stmt:25387*/
/*bef_stmt:25387*/
if (Tag7_realsmith_T93DTaOePu(/*int:25533:25533:25387:e*/rc_realsmith_T93DTaOePu))
            return Tag8_realsmith_T93DTaOePu(/*int:25533:25533:25387:e*/rc_realsmith_T93DTaOePu);
/*aft_stmt:25387*/
/*aft_stmt:25387*/
        pkt_ctrl_realsmith_T93DTaOePu.curr_bounce_buf_realsmith_T93DTaOePu = 0;
        /*bef_stmt:25468*/
(memset(&pkt_ctrl_realsmith_T93DTaOePu.curr_bounce_buf_realsmith_T93DTaOePu, 0x0, Tag9_realsmith_T93DTaOePu(/*int:25533:25533:25468:e*/llq_info_realsmith_T93DTaOePu.desc_list_entry_size_realsmith_T93DTaOePu)));
/*aft_stmt:25468*/
    }
/*aft_stmt:25478*/
    pkt_ctrl_realsmith_T93DTaOePu.idx_realsmith_T93DTaOePu = 0;
    /*bef_stmt:25523*/
pkt_ctrl_realsmith_T93DTaOePu.descs_left_in_line_realsmith_T93DTaOePu = /*TAG10:STA*/((int)(realsmith_9A7SFbLwFV((int)(llq_info_realsmith_T93DTaOePu.descs_num_before_header_realsmith_T93DTaOePu)+(-1))+(int)(llq_info_realsmith_T93DTaOePu.descs_num_before_header_realsmith_T93DTaOePu)-(7))+llq_info_realsmith_T93DTaOePu.descs_num_before_header_realsmith_T93DTaOePu)/*TAG10:END:llq_info_realsmith_T93DTaOePu.descs_num_before_header_realsmith_T93DTaOePu*/;
/*aft_stmt:25523*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#include "stdlib.h"
int realsmith_2Yysma3qAq(int SiS_P3c4_realsmith_2Yysma3qAq, unsigned int delaytime_realsmith_2Yysma3qAq) {
    while (delaytime_realsmith_2Yysma3qAq-- > 0) {
    }
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_E8FLoj0wuA(x) (x)
#define Tag2_realsmith_E8FLoj0wuA(x) (x)
#include "stdbool.h"
int realsmith_E8FLoj0wuA(int module_status_realsmith_E8FLoj0wuA) {
    const int ENOENT_realsmith_E8FLoj0wuA = -1;
    /*bef_stmt:618*/
/*bef_stmt:618*/
if (Tag1_realsmith_E8FLoj0wuA(/*int:628:628:618:e*/module_status_realsmith_E8FLoj0wuA) == 0)
        return Tag2_realsmith_E8FLoj0wuA(/*const int:628:628:618:e*/ENOENT_realsmith_E8FLoj0wuA);
/*aft_stmt:618*/
/*aft_stmt:618*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_0L7IEwla0c(x) (x)
#define Tag2_realsmith_0L7IEwla0c(x) (x)
#define Tag3_realsmith_0L7IEwla0c(x) (x)
#define Tag4_realsmith_0L7IEwla0c(x) (x)
#define Tag5_realsmith_0L7IEwla0c(x) (x)
#define Tag6_realsmith_0L7IEwla0c(x) (x)
#define Tag7_realsmith_0L7IEwla0c(x) (x)
#include "stdlib.h"
int realsmith_0L7IEwla0c(int last_stable_realsmith_0L7IEwla0c, int state_realsmith_0L7IEwla0c) {
    int dir_realsmith_0L7IEwla0c = 0;
    /*bef_stmt:17242*/
if (/*TAG1:STA*/((int)(realsmith_M9S0eJTIF7((int)(state_realsmith_0L7IEwla0c)+(-86), (int)(state_realsmith_0L7IEwla0c)+(-14))+(int)(state_realsmith_0L7IEwla0c)-(93))+state_realsmith_0L7IEwla0c)/*TAG1:END:state_realsmith_0L7IEwla0c*/ & 1) {
        /*bef_stmt:17192*/
/*bef_stmt:17192*/
dir_realsmith_0L7IEwla0c = ((/*TAG2:STA*/((int)(realsmith_wNzlskDcxg((int)(last_stable_realsmith_0L7IEwla0c)+(26), (int)(last_stable_realsmith_0L7IEwla0c)+(-30), (int)(last_stable_realsmith_0L7IEwla0c)+(48), (int)(last_stable_realsmith_0L7IEwla0c)+(24))+(int)(last_stable_realsmith_0L7IEwla0c)-(40))+last_stable_realsmith_0L7IEwla0c)/*TAG2:END:last_stable_realsmith_0L7IEwla0c*/ - /*TAG3:STA*/((int)(realsmith_LXZMAaG7r3((int)(state_realsmith_0L7IEwla0c)+(1))+(int)(state_realsmith_0L7IEwla0c)-(92))+state_realsmith_0L7IEwla0c)/*TAG3:END:state_realsmith_0L7IEwla0c*/ + 1) % 4) - 1;
/*aft_stmt:17192*/
/*aft_stmt:17192*/
    } else {
        /*bef_stmt:17235*/
/*bef_stmt:17235*/
if (Tag4_realsmith_0L7IEwla0c(/*int:17257:17257:17235:e*/state_realsmith_0L7IEwla0c) != Tag5_realsmith_0L7IEwla0c(/*int:17257:17257:17235:e*/last_stable_realsmith_0L7IEwla0c)) {
            /*bef_stmt:17228*/
last_stable_realsmith_0L7IEwla0c = Tag6_realsmith_0L7IEwla0c(/*int:17257:17257:17228:e*/state_realsmith_0L7IEwla0c);
/*aft_stmt:17228*/
        }
/*aft_stmt:17235*/
/*aft_stmt:17235*/
    }
/*aft_stmt:17242*/
    /*bef_stmt:17255*/
return /*TAG7:STA*/((int)(realsmith_syMvnnAjt3((int)(dir_realsmith_0L7IEwla0c)+(31), (int)(dir_realsmith_0L7IEwla0c)+(27), (unsigned int)(dir_realsmith_0L7IEwla0c)+(-4294967280))+(int)(dir_realsmith_0L7IEwla0c)-(-2))+dir_realsmith_0L7IEwla0c)/*TAG7:END:dir_realsmith_0L7IEwla0c*/;
/*aft_stmt:17255*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_fkgvFG8jWL(x) (x)
#define Tag2_realsmith_fkgvFG8jWL(x) (x)
#include "stdlib.h"
int realsmith_fkgvFG8jWL(int is_logical_device_realsmith_fkgvFG8jWL, int scsi_host_realsmith_fkgvFG8jWL, int bus_realsmith_fkgvFG8jWL, int target_realsmith_fkgvFG8jWL, int lun_realsmith_fkgvFG8jWL, int sas_host_realsmith_fkgvFG8jWL) {
    int rc_realsmith_fkgvFG8jWL;
    /*bef_stmt:17232*/
if (Tag1_realsmith_fkgvFG8jWL(/*int:17247:17247:17232:e*/is_logical_device_realsmith_fkgvFG8jWL)) {
        rc_realsmith_fkgvFG8jWL = 0;
    } else {
        rc_realsmith_fkgvFG8jWL = 1;
    }
/*aft_stmt:17232*/
    /*bef_stmt:17245*/
return Tag2_realsmith_fkgvFG8jWL(/*int:17247:17247:17245:e*/rc_realsmith_fkgvFG8jWL);
/*aft_stmt:17245*/
}



#include "stdlib.h"
int realsmith_YZbCWJbSRR(int norm_realsmith_YZbCWJbSRR) {
    int is_60hz_realsmith_YZbCWJbSRR = norm_realsmith_YZbCWJbSRR & 1;
    static const unsigned char config_60hz_realsmith_YZbCWJbSRR[] = {
        0x05, 0x81,
        0x07, 0x02,
        0x08, 0x14,
        0x09, 0xf0,
        0, 0,
    };
    static const unsigned char config_50hz_realsmith_YZbCWJbSRR[] = {
        0x05, 0x01,
        0x07, 0x12,
        0x08, 0x18,
        0x09, 0x20,
        0, 0,
    };
    const unsigned char *config_realsmith_YZbCWJbSRR = is_60hz_realsmith_YZbCWJbSRR ? config_60hz_realsmith_YZbCWJbSRR : config_50hz_realsmith_YZbCWJbSRR;
    for (int i_realsmith_YZbCWJbSRR = 0; config_realsmith_YZbCWJbSRR[i_realsmith_YZbCWJbSRR] != 0 || config_realsmith_YZbCWJbSRR[i_realsmith_YZbCWJbSRR + 1] != 0; i_realsmith_YZbCWJbSRR += 2) {
    }
    return 0;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_m3CgJjvoMb(x) (x)
#define Tag2_realsmith_m3CgJjvoMb(x) (x)
#include "stdbool.h"
int realsmith_m3CgJjvoMb(int has_uvd_realsmith_m3CgJjvoMb) {
    int rdev_realsmith_m3CgJjvoMb = 0;
    /*bef_stmt:615*/
if (Tag1_realsmith_m3CgJjvoMb(/*int:678:678:615:e*/has_uvd_realsmith_m3CgJjvoMb)) {
        rdev_realsmith_m3CgJjvoMb |= 32;
    }
/*aft_stmt:615*/
    rdev_realsmith_m3CgJjvoMb |= (2 |
             8 |
             16 |
             1 |
             4);
    /*bef_stmt:676*/
return Tag2_realsmith_m3CgJjvoMb(/*int:678:678:676:e*/rdev_realsmith_m3CgJjvoMb);
/*aft_stmt:676*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_PYsBZU7uOR(x) (x)
#define Tag2_realsmith_PYsBZU7uOR(x) (x)
#define Tag3_realsmith_PYsBZU7uOR(x) (x)
#define Tag4_realsmith_PYsBZU7uOR(x) (x)
#define Tag5_realsmith_PYsBZU7uOR(x) (x)
#define Tag6_realsmith_PYsBZU7uOR(x) (x)
#define Tag7_realsmith_PYsBZU7uOR(x) (x)
#include "stdbool.h"
int realsmith_PYsBZU7uOR(int req_pos_realsmith_PYsBZU7uOR, int req_sectors_realsmith_PYsBZU7uOR, int next_pos_realsmith_PYsBZU7uOR, _Bool discard_mergable_realsmith_PYsBZU7uOR) {
    const int ELEVATOR_BACK_MERGE_realsmith_PYsBZU7uOR = 1;
    const int ELEVATOR_DISCARD_MERGE_realsmith_PYsBZU7uOR = 2;
    const int ELEVATOR_NO_MERGE_realsmith_PYsBZU7uOR = 0;
    /*bef_stmt:756*/
/*bef_stmt:756*/
/*bef_stmt:756*/
/*bef_stmt:756*/
if (/*TAG1:STA*/((_Bool)(realsmith_b608Nx2Ys1((int)(discard_mergable_realsmith_PYsBZU7uOR)+(4), (int)(discard_mergable_realsmith_PYsBZU7uOR)+(1), (int)(discard_mergable_realsmith_PYsBZU7uOR)+(1), (int)(discard_mergable_realsmith_PYsBZU7uOR)+(2))+(int)(discard_mergable_realsmith_PYsBZU7uOR)-(6))+discard_mergable_realsmith_PYsBZU7uOR)/*TAG1:END:discard_mergable_realsmith_PYsBZU7uOR*/) {
        /*bef_stmt:706*/
return /*TAG2:STA*/((int)(realsmith_jBlF1UGKFI((int)(ELEVATOR_DISCARD_MERGE_realsmith_PYsBZU7uOR)+(41), (unsigned int)(ELEVATOR_DISCARD_MERGE_realsmith_PYsBZU7uOR)+(90))+(int)(ELEVATOR_DISCARD_MERGE_realsmith_PYsBZU7uOR)-(2))+ELEVATOR_DISCARD_MERGE_realsmith_PYsBZU7uOR)/*TAG2:END:ELEVATOR_DISCARD_MERGE_realsmith_PYsBZU7uOR*/;
/*aft_stmt:706*/
    } else if (/*TAG3:STA*/((int)(realsmith_proxy_hXqQcqC8Ur((int)(req_pos_realsmith_PYsBZU7uOR)+(-79), (int)(req_pos_realsmith_PYsBZU7uOR)+(-22))+(int)(req_pos_realsmith_PYsBZU7uOR)-(84))+req_pos_realsmith_PYsBZU7uOR)/*TAG3:END:req_pos_realsmith_PYsBZU7uOR*/ + /*TAG4:STA*/((int)(realsmith_BastJ0zqkR((int)(req_sectors_realsmith_PYsBZU7uOR)+(34), (int)(req_sectors_realsmith_PYsBZU7uOR)+(13), (int)(req_sectors_realsmith_PYsBZU7uOR)+(-5), (int)(req_sectors_realsmith_PYsBZU7uOR)+(-1), (int)(req_sectors_realsmith_PYsBZU7uOR)+(31))+(int)(req_sectors_realsmith_PYsBZU7uOR)-(-14))+req_sectors_realsmith_PYsBZU7uOR)/*TAG4:END:req_sectors_realsmith_PYsBZU7uOR*/ == /*TAG5:STA*/((int)(realsmith_pLFWq1IG4F((int)(next_pos_realsmith_PYsBZU7uOR)+(-40), (int)(next_pos_realsmith_PYsBZU7uOR)+(-16))+(int)(next_pos_realsmith_PYsBZU7uOR)-(75))+next_pos_realsmith_PYsBZU7uOR)/*TAG5:END:next_pos_realsmith_PYsBZU7uOR*/) {
        /*bef_stmt:747*/
return Tag6_realsmith_PYsBZU7uOR(/*const int:771:771:747:e*/ELEVATOR_BACK_MERGE_realsmith_PYsBZU7uOR);
/*aft_stmt:747*/
    }
/*aft_stmt:756*/
/*aft_stmt:756*/
/*aft_stmt:756*/
/*aft_stmt:756*/
    /*bef_stmt:769*/
return Tag7_realsmith_PYsBZU7uOR(/*const int:771:771:769:e*/ELEVATOR_NO_MERGE_realsmith_PYsBZU7uOR);
/*aft_stmt:769*/
}



#include "stdlib.h"
int realsmith_vq9OQ8m6uk(int sm_nr_realsmith_vq9OQ8m6uk, int gpc_nr_realsmith_vq9OQ8m6uk, int *tpc_nr_realsmith_vq9OQ8m6uk) {
    int gpc_realsmith_vq9OQ8m6uk, sm_realsmith_vq9OQ8m6uk, i_realsmith_vq9OQ8m6uk, j_realsmith_vq9OQ8m6uk;
    unsigned int data_realsmith_vq9OQ8m6uk;
    unsigned int device_realsmith_vq9OQ8m6uk[10] = {0};
    for (sm_realsmith_vq9OQ8m6uk = 0; sm_realsmith_vq9OQ8m6uk < sm_nr_realsmith_vq9OQ8m6uk; sm_realsmith_vq9OQ8m6uk++) {
        if (sm_realsmith_vq9OQ8m6uk < gpc_nr_realsmith_vq9OQ8m6uk) {
            if (tpc_nr_realsmith_vq9OQ8m6uk) {
            }
        }
    }
    for (gpc_realsmith_vq9OQ8m6uk = 0, i_realsmith_vq9OQ8m6uk = 0; i_realsmith_vq9OQ8m6uk < 4; i_realsmith_vq9OQ8m6uk++) {
        for (data_realsmith_vq9OQ8m6uk = 0, j_realsmith_vq9OQ8m6uk = 0; j_realsmith_vq9OQ8m6uk < 8 && gpc_realsmith_vq9OQ8m6uk < gpc_nr_realsmith_vq9OQ8m6uk; j_realsmith_vq9OQ8m6uk++, gpc_realsmith_vq9OQ8m6uk++) {
            data_realsmith_vq9OQ8m6uk |= tpc_nr_realsmith_vq9OQ8m6uk[gpc_realsmith_vq9OQ8m6uk] << (j_realsmith_vq9OQ8m6uk * 4);
        }
        device_realsmith_vq9OQ8m6uk[0 + (i_realsmith_vq9OQ8m6uk * 1)] = data_realsmith_vq9OQ8m6uk;
        device_realsmith_vq9OQ8m6uk[1 + (i_realsmith_vq9OQ8m6uk * 1)] = data_realsmith_vq9OQ8m6uk;
    }
    return 0;
}
int realsmith_proxy_9zfhbk5VMn(int p_0_EhhOri0Uo9, int p_1_0ePzWZQKW7, int p_2_Cq4Yg9lbmF) {
int proxy_sMmj9HzvVr[20] = { 86, 51, p_2_Cq4Yg9lbmF, 30, 80, p_2_Cq4Yg9lbmF, p_2_Cq4Yg9lbmF, p_2_Cq4Yg9lbmF, p_2_Cq4Yg9lbmF, 71, p_2_Cq4Yg9lbmF, p_2_Cq4Yg9lbmF, p_2_Cq4Yg9lbmF, 79, 87, 46, p_2_Cq4Yg9lbmF, p_2_Cq4Yg9lbmF, 78, 50 };
int proxy_ret_GLv9QzhUfC = realsmith_vq9OQ8m6uk(p_0_EhhOri0Uo9, p_1_0ePzWZQKW7, proxy_sMmj9HzvVr);
return proxy_ret_GLv9QzhUfC;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_p40Cs2GxbW(x) (x)
#define Tag2_realsmith_p40Cs2GxbW(x) (x)
#define Tag3_realsmith_p40Cs2GxbW(x) (x)
#include "stdlib.h"
struct scoop_pcmcia_dev_Uz3oGw {
    long keep_rd_realsmith_p40Cs2GxbW;
    int keep_vs_realsmith_p40Cs2GxbW;
    int dev_realsmith_p40Cs2GxbW;
};
struct soc_pcmcia_socket_Uz3oGw {
    long unsigned int nr_realsmith_p40Cs2GxbW;
};
int realsmith_p40Cs2GxbW(int nr_realsmith_p40Cs2GxbW, int dev_realsmith_p40Cs2GxbW, int power_ctrl_exists_realsmith_p40Cs2GxbW, int power_ctrl_realsmith_p40Cs2GxbW, int keep_vs_realsmith_p40Cs2GxbW) {
    struct scoop_pcmcia_dev_Uz3oGw scoopdev_realsmith_p40Cs2GxbW;
    /*bef_stmt:17295*/
scoopdev_realsmith_p40Cs2GxbW.dev_realsmith_p40Cs2GxbW = Tag1_realsmith_p40Cs2GxbW(/*int:17377:17377:17295:e*/dev_realsmith_p40Cs2GxbW);
/*aft_stmt:17295*/
    /*bef_stmt:17323*/
if (Tag2_realsmith_p40Cs2GxbW(/*int:17377:17377:17323:e*/power_ctrl_exists_realsmith_p40Cs2GxbW)) {
    } else {
    }
/*aft_stmt:17323*/
    /*bef_stmt:17346*/
scoopdev_realsmith_p40Cs2GxbW.keep_vs_realsmith_p40Cs2GxbW = Tag3_realsmith_p40Cs2GxbW(/*int:17377:17377:17346:e*/keep_vs_realsmith_p40Cs2GxbW);
/*aft_stmt:17346*/
    scoopdev_realsmith_p40Cs2GxbW.keep_rd_realsmith_p40Cs2GxbW = 0;
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_uxFDhsnxf0(x) (x)
#include "stdlib.h"
int realsmith_uxFDhsnxf0(int kms_ptr_realsmith_uxFDhsnxf0) {
    /*bef_stmt:17101*/
if (Tag1_realsmith_uxFDhsnxf0(/*int:17111:17111:17101:e*/kms_ptr_realsmith_uxFDhsnxf0) == 0) {
        return -1;
    }
/*aft_stmt:17101*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_CzFekJ6lYg(x) (x)
#define Tag2_realsmith_CzFekJ6lYg(x) (x)
#define Tag3_realsmith_CzFekJ6lYg(x) (x)
#define Tag4_realsmith_CzFekJ6lYg(x) (x)
#define Tag5_realsmith_CzFekJ6lYg(x) (x)
#define Tag6_realsmith_CzFekJ6lYg(x) (x)
#define Tag7_realsmith_CzFekJ6lYg(x) (x)
#define Tag8_realsmith_CzFekJ6lYg(x) (x)
#define Tag9_realsmith_CzFekJ6lYg(x) (x)
#define Tag10_realsmith_CzFekJ6lYg(x) (x)
#define Tag11_realsmith_CzFekJ6lYg(x) (x)
#define Tag12_realsmith_CzFekJ6lYg(x) (x)
#define Tag13_realsmith_CzFekJ6lYg(x) (x)
#include "stdlib.h"
int realsmith_CzFekJ6lYg(int video_std_realsmith_CzFekJ6lYg, int video_input_realsmith_CzFekJ6lYg, int audio_input_realsmith_CzFekJ6lYg, int audio_codec_realsmith_CzFekJ6lYg, int bitrate_mode_realsmith_CzFekJ6lYg, int gop_mode_realsmith_CzFekJ6lYg, int brightness_realsmith_CzFekJ6lYg, int contrast_realsmith_CzFekJ6lYg, int hue_realsmith_CzFekJ6lYg, int saturation_realsmith_CzFekJ6lYg, int sharpness_realsmith_CzFekJ6lYg) {
    int ret_realsmith_CzFekJ6lYg = 0;
    /*bef_stmt:17325*/
int video_input_value_realsmith_CzFekJ6lYg = Tag1_realsmith_CzFekJ6lYg(/*int:17631:17631:17325:e*/video_input_realsmith_CzFekJ6lYg) + 1;
/*aft_stmt:17325*/
    /*bef_stmt:17359*/
int audio_input_value_realsmith_CzFekJ6lYg = Tag2_realsmith_CzFekJ6lYg(/*int:17631:17631:17359:e*/audio_input_realsmith_CzFekJ6lYg) + 1;
/*aft_stmt:17359*/
    /*bef_stmt:17385*/
int config_video_std_realsmith_CzFekJ6lYg = Tag3_realsmith_CzFekJ6lYg(/*int:17631:17631:17385:e*/video_std_realsmith_CzFekJ6lYg);
/*aft_stmt:17385*/
    /*bef_stmt:17411*/
int config_video_input_realsmith_CzFekJ6lYg = Tag4_realsmith_CzFekJ6lYg(/*int:17631:17631:17411:e*/video_input_value_realsmith_CzFekJ6lYg);
/*aft_stmt:17411*/
    /*bef_stmt:17437*/
int config_audio_input_realsmith_CzFekJ6lYg = Tag5_realsmith_CzFekJ6lYg(/*int:17631:17631:17437:e*/audio_input_value_realsmith_CzFekJ6lYg);
/*aft_stmt:17437*/
    /*bef_stmt:17463*/
int config_bitrate_mode_realsmith_CzFekJ6lYg = Tag6_realsmith_CzFekJ6lYg(/*int:17631:17631:17463:e*/bitrate_mode_realsmith_CzFekJ6lYg);
/*aft_stmt:17463*/
    /*bef_stmt:17489*/
int config_gop_mode_realsmith_CzFekJ6lYg = Tag7_realsmith_CzFekJ6lYg(/*int:17631:17631:17489:e*/gop_mode_realsmith_CzFekJ6lYg);
/*aft_stmt:17489*/
    /*bef_stmt:17515*/
int config_brightness_realsmith_CzFekJ6lYg = Tag8_realsmith_CzFekJ6lYg(/*int:17631:17631:17515:e*/brightness_realsmith_CzFekJ6lYg);
/*aft_stmt:17515*/
    /*bef_stmt:17541*/
int config_contrast_realsmith_CzFekJ6lYg = Tag9_realsmith_CzFekJ6lYg(/*int:17631:17631:17541:e*/contrast_realsmith_CzFekJ6lYg);
/*aft_stmt:17541*/
    /*bef_stmt:17567*/
int config_hue_realsmith_CzFekJ6lYg = Tag10_realsmith_CzFekJ6lYg(/*int:17631:17631:17567:e*/hue_realsmith_CzFekJ6lYg);
/*aft_stmt:17567*/
    /*bef_stmt:17593*/
int config_saturation_realsmith_CzFekJ6lYg = Tag11_realsmith_CzFekJ6lYg(/*int:17631:17631:17593:e*/saturation_realsmith_CzFekJ6lYg);
/*aft_stmt:17593*/
    /*bef_stmt:17619*/
int config_sharpness_realsmith_CzFekJ6lYg = Tag12_realsmith_CzFekJ6lYg(/*int:17631:17631:17619:e*/sharpness_realsmith_CzFekJ6lYg);
/*aft_stmt:17619*/
    /*bef_stmt:17629*/
return Tag13_realsmith_CzFekJ6lYg(/*int:17631:17631:17629:e*/ret_realsmith_CzFekJ6lYg);
/*aft_stmt:17629*/
}



#include "stdlib.h"
typedef struct {
    int link_speed_realsmith_LsXz6t4qF0;
    int work_event_realsmith_LsXz6t4qF0;
    int mdio_lock_realsmith_LsXz6t4qF0;
    int hw_realsmith_LsXz6t4qF0;
} atl1c_adapter_MtiPUI;
int realsmith_LsXz6t4qF0(int phy_data_realsmith_LsXz6t4qF0, int netif_carrier_ok_realsmith_LsXz6t4qF0, int netif_carrier_off_realsmith_LsXz6t4qF0, int netif_msg_link_realsmith_LsXz6t4qF0) {
    int link_up_realsmith_LsXz6t4qF0;
    int result_realsmith_LsXz6t4qF0 = 0;
    phy_data_realsmith_LsXz6t4qF0 = (phy_data_realsmith_LsXz6t4qF0 << 1) | 0x0004;
    link_up_realsmith_LsXz6t4qF0 = phy_data_realsmith_LsXz6t4qF0 & 0x0004;
    if (!link_up_realsmith_LsXz6t4qF0) {
        if (netif_carrier_ok_realsmith_LsXz6t4qF0) {
            netif_carrier_off_realsmith_LsXz6t4qF0;
            if (netif_msg_link_realsmith_LsXz6t4qF0) {
                result_realsmith_LsXz6t4qF0 = 1;
            }
            result_realsmith_LsXz6t4qF0 = 0;
        }
    }
    result_realsmith_LsXz6t4qF0 += 1;
    return result_realsmith_LsXz6t4qF0;
}

#include "stdlib.h"
int realsmith_iZECoFEQPz(int *resource_end_realsmith_iZECoFEQPz, int *resource_start_realsmith_iZECoFEQPz, int *resource_len_realsmith_iZECoFEQPz) {
    int released_resources_realsmith_iZECoFEQPz = 0;
    for (int i_realsmith_iZECoFEQPz = 0; i_realsmith_iZECoFEQPz < 10; i_realsmith_iZECoFEQPz++) {
        if (resource_end_realsmith_iZECoFEQPz[i_realsmith_iZECoFEQPz]) {
            released_resources_realsmith_iZECoFEQPz++;
        }
    }
    return released_resources_realsmith_iZECoFEQPz;
}
int realsmith_proxy_EbdcUpgrtD(int p_0_Gy20FFUewM, int p_1_PrKbmDj7ty, int p_2_79w0hm1WMA) {
int proxy_Z4A0yY3VzP[20] = { p_0_Gy20FFUewM, 70, p_0_Gy20FFUewM, 16, 41, 9, 48, 87, 52, p_0_Gy20FFUewM, p_0_Gy20FFUewM, 50, p_0_Gy20FFUewM, p_0_Gy20FFUewM, p_0_Gy20FFUewM, p_0_Gy20FFUewM, p_0_Gy20FFUewM, p_0_Gy20FFUewM, 79, 42 };
int proxy_ret_MnYVc8XdDi = realsmith_iZECoFEQPz(proxy_Z4A0yY3VzP, &(p_1_PrKbmDj7ty), &(p_2_79w0hm1WMA));
return proxy_ret_MnYVc8XdDi;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_kZ99RiFwhK(x) (x)
#define Tag2_realsmith_kZ99RiFwhK(x) (x)
#define Tag3_realsmith_kZ99RiFwhK(x) (x)
#define Tag4_realsmith_kZ99RiFwhK(x) (x)
#include "string.h"
int realsmith_kZ99RiFwhK(int type_realsmith_kZ99RiFwhK, int token_realsmith_kZ99RiFwhK, int expect_realsmith_kZ99RiFwhK, int expect_tok_realsmith_kZ99RiFwhK) {
    /*bef_stmt:8492*/
/*bef_stmt:8492*/
if (Tag1_realsmith_kZ99RiFwhK(/*int:8536:8536:8492:e*/type_realsmith_kZ99RiFwhK) != Tag2_realsmith_kZ99RiFwhK(/*int:8536:8536:8492:e*/expect_realsmith_kZ99RiFwhK)) {
        return -1;
    }
/*aft_stmt:8492*/
/*aft_stmt:8492*/
    /*bef_stmt:8526*/
/*bef_stmt:8526*/
if (Tag3_realsmith_kZ99RiFwhK(/*int:8536:8536:8526:e*/token_realsmith_kZ99RiFwhK) != Tag4_realsmith_kZ99RiFwhK(/*int:8536:8536:8526:e*/expect_tok_realsmith_kZ99RiFwhK)) {
        return -1;
    }
/*aft_stmt:8526*/
/*aft_stmt:8526*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Kt8muOSp10(x) (x)
#define Tag2_realsmith_Kt8muOSp10(x) (x)
#include "stdlib.h"
struct tegra_i2c_dev_IOhspB {
    int dma_complete_realsmith_Kt8muOSp10;
};
int realsmith_Kt8muOSp10(int dma_complete_realsmith_Kt8muOSp10) {
    struct tegra_i2c_dev_IOhspB i2c_dev_realsmith_Kt8muOSp10;
    /*bef_stmt:17151*/
i2c_dev_realsmith_Kt8muOSp10.dma_complete_realsmith_Kt8muOSp10 = Tag1_realsmith_Kt8muOSp10(/*int:17189:17189:17151:e*/dma_complete_realsmith_Kt8muOSp10);
/*aft_stmt:17151*/
    /*bef_stmt:17187*/
return Tag2_realsmith_Kt8muOSp10(/*int:17189:17189:17187:e*/i2c_dev_realsmith_Kt8muOSp10.dma_complete_realsmith_Kt8muOSp10) + 1;
/*aft_stmt:17187*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_kV0TOhr7pg(x) (x)
#define Tag2_realsmith_kV0TOhr7pg(x) (x)
#define Tag3_realsmith_kV0TOhr7pg(x) (x)
#define Tag4_realsmith_kV0TOhr7pg(x) (x)
#include "stdlib.h"
int realsmith_kV0TOhr7pg(int mem_dev_L_realsmith_kV0TOhr7pg, int mem_dev_R_realsmith_kV0TOhr7pg) {
    /*bef_stmt:17117*/
if (Tag1_realsmith_kV0TOhr7pg(/*int:17190:17190:17117:e*/mem_dev_L_realsmith_kV0TOhr7pg) != 0) {
    }
/*aft_stmt:17117*/
    /*bef_stmt:17138*/
if (Tag2_realsmith_kV0TOhr7pg(/*int:17190:17190:17138:e*/mem_dev_R_realsmith_kV0TOhr7pg) != 0) {
    }
/*aft_stmt:17138*/
    /*bef_stmt:17159*/
if (Tag3_realsmith_kV0TOhr7pg(/*int:17190:17190:17159:e*/mem_dev_L_realsmith_kV0TOhr7pg) != 0) {
    }
/*aft_stmt:17159*/
    /*bef_stmt:17180*/
if (Tag4_realsmith_kV0TOhr7pg(/*int:17190:17190:17180:e*/mem_dev_R_realsmith_kV0TOhr7pg) != 0) {
    }
/*aft_stmt:17180*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_DZUC8AdmI8(x) (x)
#define Tag2_realsmith_DZUC8AdmI8(x) (x)
#include "stdint.h"
int realsmith_DZUC8AdmI8(int format_realsmith_DZUC8AdmI8) {
    unsigned int val_realsmith_DZUC8AdmI8;
    /*bef_stmt:1990*/
switch (Tag1_realsmith_DZUC8AdmI8(/*int:2066:2066:1990:e*/format_realsmith_DZUC8AdmI8)) {
    case 128:
        val_realsmith_DZUC8AdmI8 = 0x00000001;
        break;
    default:
        val_realsmith_DZUC8AdmI8 = 0x00000001;
        break;
    }
/*aft_stmt:1990*/
    /*bef_stmt:2064*/
return Tag2_realsmith_DZUC8AdmI8(/*unsigned int:2066:2066:2064:e*/val_realsmith_DZUC8AdmI8);
/*aft_stmt:2064*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_4XNXsVHH9o(x) (x)
#define Tag2_realsmith_4XNXsVHH9o(x) (x)
#define Tag3_realsmith_4XNXsVHH9o(x) (x)
#define Tag4_realsmith_4XNXsVHH9o(x) (x)
#include "stdlib.h"
int realsmith_4XNXsVHH9o(int devnum_realsmith_4XNXsVHH9o, int regnum_realsmith_4XNXsVHH9o, int val_realsmith_4XNXsVHH9o) {
    int ret_realsmith_4XNXsVHH9o;
    /*bef_stmt:17208*/
/*bef_stmt:17208*/
if (Tag1_realsmith_4XNXsVHH9o(/*int:17223:17223:17208:e*/devnum_realsmith_4XNXsVHH9o) == 0x0 && Tag2_realsmith_4XNXsVHH9o(/*int:17223:17223:17208:e*/regnum_realsmith_4XNXsVHH9o) == 0x1) {
        /*bef_stmt:17183*/
ret_realsmith_4XNXsVHH9o = Tag3_realsmith_4XNXsVHH9o(/*int:17223:17223:17183:e*/val_realsmith_4XNXsVHH9o);
/*aft_stmt:17183*/
    } else {
        ret_realsmith_4XNXsVHH9o = -1;
    }
/*aft_stmt:17208*/
/*aft_stmt:17208*/
    /*bef_stmt:17221*/
return Tag4_realsmith_4XNXsVHH9o(/*int:17223:17223:17221:e*/ret_realsmith_4XNXsVHH9o);
/*aft_stmt:17221*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_22ejOte4L1(x) (x)
#define Tag2_realsmith_22ejOte4L1(x) (x)
#define Tag3_realsmith_22ejOte4L1(x) (x)
#define Tag4_realsmith_22ejOte4L1(x) (x)
#define Tag5_realsmith_22ejOte4L1(x) (x)
#define Tag6_realsmith_22ejOte4L1(x) (x)
#include "stdlib.h"
int realsmith_22ejOte4L1(int adapter_chip_type_realsmith_22ejOte4L1, int nonemb_cmd_size_realsmith_22ejOte4L1) {
    int status_realsmith_22ejOte4L1 = 0;
    int stats_cmd_sent_realsmith_22ejOte4L1 = 0;
    int version_realsmith_22ejOte4L1;
    /*bef_stmt:17265*/
/*bef_stmt:17265*/
/*bef_stmt:17265*/
if (Tag1_realsmith_22ejOte4L1(/*int:17376:17376:17265:e*/adapter_chip_type_realsmith_22ejOte4L1) == 2) {
        version_realsmith_22ejOte4L1 = 0;
    } else if (Tag2_realsmith_22ejOte4L1(/*int:17376:17376:17265:e*/adapter_chip_type_realsmith_22ejOte4L1) == 3 || Tag3_realsmith_22ejOte4L1(/*int:17376:17376:17265:e*/adapter_chip_type_realsmith_22ejOte4L1) == 4) {
        version_realsmith_22ejOte4L1 = 1;
    } else {
        version_realsmith_22ejOte4L1 = 2;
    }
/*aft_stmt:17265*/
/*aft_stmt:17265*/
/*aft_stmt:17265*/
    /*bef_stmt:17318*/
if (Tag4_realsmith_22ejOte4L1(/*int:17376:17376:17318:e*/nonemb_cmd_size_realsmith_22ejOte4L1) <= 0) {
        status_realsmith_22ejOte4L1 = -1;
        goto err;
    }
/*aft_stmt:17318*/
    status_realsmith_22ejOte4L1 = 0;
    /*bef_stmt:17347*/
if (Tag5_realsmith_22ejOte4L1(/*int:17376:17376:17347:e*/status_realsmith_22ejOte4L1)) {
        goto err;
    }
/*aft_stmt:17347*/
    stats_cmd_sent_realsmith_22ejOte4L1 = 1;
/*bef_stmt:17372*/
err:
    return Tag6_realsmith_22ejOte4L1(/*int:17376:17376:17372:e*/status_realsmith_22ejOte4L1);
/*aft_stmt:17372*/
}



#include "stdlib.h"
int realsmith_NlKrfs59Ye(int tx_mode_realsmith_NlKrfs59Ye, int *info_realsmith_NlKrfs59Ye, int *target_power_realsmith_NlKrfs59Ye, int *target_pa_power_realsmith_NlKrfs59Ye, int cur_power_realsmith_NlKrfs59Ye, int *cck_realsmith_NlKrfs59Ye, int *ofdm_realsmith_NlKrfs59Ye, int *vht_realsmith_NlKrfs59Ye, int *ht_realsmith_NlKrfs59Ye) {
    int tx_rate_realsmith_NlKrfs59Ye;
    switch (tx_mode_realsmith_NlKrfs59Ye) {
    case 0:
        tx_rate_realsmith_NlKrfs59Ye = (info_realsmith_NlKrfs59Ye[0] & 0x60) >> 5;
        if (tx_rate_realsmith_NlKrfs59Ye > 3)
            return -1;
        *target_power_realsmith_NlKrfs59Ye = cur_power_realsmith_NlKrfs59Ye + cck_realsmith_NlKrfs59Ye[tx_rate_realsmith_NlKrfs59Ye];
        *target_pa_power_realsmith_NlKrfs59Ye = 0;
        break;
    case 1: {
        int index_realsmith_NlKrfs59Ye;
        tx_rate_realsmith_NlKrfs59Ye = (info_realsmith_NlKrfs59Ye[0] & 0xf0) >> 4;
        switch (tx_rate_realsmith_NlKrfs59Ye) {
        case 0xb:
            index_realsmith_NlKrfs59Ye = 0;
            break;
        case 0xf:
            index_realsmith_NlKrfs59Ye = 1;
            break;
        case 0xa:
            index_realsmith_NlKrfs59Ye = 2;
            break;
        case 0xe:
            index_realsmith_NlKrfs59Ye = 3;
            break;
        case 0x9:
            index_realsmith_NlKrfs59Ye = 4;
            break;
        case 0xd:
            index_realsmith_NlKrfs59Ye = 5;
            break;
        case 0x8:
            index_realsmith_NlKrfs59Ye = 6;
            break;
        case 0xc:
            index_realsmith_NlKrfs59Ye = 7;
            break;
        default:
            return -1;
        }
        *target_power_realsmith_NlKrfs59Ye = cur_power_realsmith_NlKrfs59Ye + ofdm_realsmith_NlKrfs59Ye[index_realsmith_NlKrfs59Ye];
        *target_pa_power_realsmith_NlKrfs59Ye = 0;
        break;
    }
    case 4:
        tx_rate_realsmith_NlKrfs59Ye = info_realsmith_NlKrfs59Ye[1] & 0xf;
        if (tx_rate_realsmith_NlKrfs59Ye > 9)
            return -1;
        *target_power_realsmith_NlKrfs59Ye = cur_power_realsmith_NlKrfs59Ye + vht_realsmith_NlKrfs59Ye[tx_rate_realsmith_NlKrfs59Ye];
        *target_pa_power_realsmith_NlKrfs59Ye = 0;
        break;
    default:
        tx_rate_realsmith_NlKrfs59Ye = info_realsmith_NlKrfs59Ye[1] & 0x7f;
        if (tx_rate_realsmith_NlKrfs59Ye > 9)
            return -1;
        *target_power_realsmith_NlKrfs59Ye = cur_power_realsmith_NlKrfs59Ye + ht_realsmith_NlKrfs59Ye[tx_rate_realsmith_NlKrfs59Ye];
        *target_pa_power_realsmith_NlKrfs59Ye = 0;
        break;
    }
    return 0;
}
int realsmith_proxy_T1uatMD4ty(int p_0_CP2cOt5ByK, int p_1_jIAB0gE0u2, int p_2_y8GHhq6kyY, int p_3_uBcJbbdfbP, int p_4_mW7nJj8Mwf, int p_5_WCylL0JzJI, int p_6_mRudsVaPuW, int p_7_vmo33KDAly, int p_8_RD4JtMVLKJ) {
int proxy_qaqp6WCoWr[12] = { 4, p_1_jIAB0gE0u2, 45, 41, 82, 54, 18, 70, 20, 53, 14, 19 };
int proxy_O5gMVazX3z[15] = { p_3_uBcJbbdfbP, 84, p_3_uBcJbbdfbP, 57, p_3_uBcJbbdfbP, p_3_uBcJbbdfbP, 67, 27, p_3_uBcJbbdfbP, p_3_uBcJbbdfbP, 36, 70, p_3_uBcJbbdfbP, 73, 32 };
int proxy_cErwdBMloJ[10] = { p_6_mRudsVaPuW, 29, p_6_mRudsVaPuW, p_6_mRudsVaPuW, 68, p_6_mRudsVaPuW, 44, 14, 55, p_6_mRudsVaPuW };
int proxy_ret_NrtzkNvmr7 = realsmith_NlKrfs59Ye(p_0_CP2cOt5ByK, proxy_qaqp6WCoWr, &(p_2_y8GHhq6kyY), proxy_O5gMVazX3z, p_4_mW7nJj8Mwf, &(p_5_WCylL0JzJI), proxy_cErwdBMloJ, &(p_7_vmo33KDAly), &(p_8_RD4JtMVLKJ));
return proxy_ret_NrtzkNvmr7;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_M36ceajKQ8(x) (x)
#define Tag2_realsmith_M36ceajKQ8(x) (x)
#define Tag3_realsmith_M36ceajKQ8(x) (x)
#define Tag4_realsmith_M36ceajKQ8(x) (x)
#include "stdlib.h"
struct nfp_flower_priv_wdlnzu {
    int cmsg_work_realsmith_M36ceajKQ8; 
    long unsigned int cmsg_skbs_low_realsmith_M36ceajKQ8;
    long unsigned int cmsg_skbs_high_realsmith_M36ceajKQ8;
};
struct nfp_app_wdlnzu {
    struct nfp_flower_priv_wdlnzu* priv_realsmith_M36ceajKQ8;
};
int realsmith_M36ceajKQ8(int app_priv_low_realsmith_M36ceajKQ8, int app_priv_high_realsmith_M36ceajKQ8, int type_realsmith_M36ceajKQ8, int queue_len_realsmith_M36ceajKQ8) {
    struct nfp_flower_priv_wdlnzu priv_realsmith_M36ceajKQ8;
    /*bef_stmt:17290*/
priv_realsmith_M36ceajKQ8.cmsg_skbs_low_realsmith_M36ceajKQ8 = Tag1_realsmith_M36ceajKQ8(/*int:17475:17475:17290:e*/app_priv_low_realsmith_M36ceajKQ8);
/*aft_stmt:17290*/
    /*bef_stmt:17327*/
priv_realsmith_M36ceajKQ8.cmsg_skbs_high_realsmith_M36ceajKQ8 = Tag2_realsmith_M36ceajKQ8(/*int:17475:17475:17327:e*/app_priv_high_realsmith_M36ceajKQ8);
/*aft_stmt:17327*/
    long unsigned int* skb_head_realsmith_M36ceajKQ8;
    /*bef_stmt:17415*/
if (Tag3_realsmith_M36ceajKQ8(/*int:17475:17475:17415:e*/type_realsmith_M36ceajKQ8) == 1)
        skb_head_realsmith_M36ceajKQ8 = &priv_realsmith_M36ceajKQ8.cmsg_skbs_high_realsmith_M36ceajKQ8;
    else
        skb_head_realsmith_M36ceajKQ8 = &priv_realsmith_M36ceajKQ8.cmsg_skbs_low_realsmith_M36ceajKQ8;
/*aft_stmt:17415*/
    /*bef_stmt:17448*/
if (Tag4_realsmith_M36ceajKQ8(/*int:17475:17475:17448:e*/queue_len_realsmith_M36ceajKQ8) >= 100) {
        return -1;
    }
/*aft_stmt:17448*/
    (*skb_head_realsmith_M36ceajKQ8)++;
    return 0;
}



#include "stdlib.h"
struct {
    int clk_realsmith_du1NYKYU3M;
} at93c_realsmith_du1NYKYU3M;
int realsmith_du1NYKYU3M(int data_realsmith_du1NYKYU3M) {
    int clk_value_realsmith_du1NYKYU3M = at93c_realsmith_du1NYKYU3M.clk_realsmith_du1NYKYU3M;
    int result1_realsmith_du1NYKYU3M = data_realsmith_du1NYKYU3M | clk_value_realsmith_du1NYKYU3M;
    int result2_realsmith_du1NYKYU3M = data_realsmith_du1NYKYU3M & ~clk_value_realsmith_du1NYKYU3M;
    for (volatile int i_realsmith_du1NYKYU3M = 0; i_realsmith_du1NYKYU3M < 250; i_realsmith_du1NYKYU3M++);
    int write1_realsmith_du1NYKYU3M = result1_realsmith_du1NYKYU3M;
    for (volatile int i_realsmith_du1NYKYU3M = 0; i_realsmith_du1NYKYU3M < 250; i_realsmith_du1NYKYU3M++);
    int write2_realsmith_du1NYKYU3M = result2_realsmith_du1NYKYU3M;
    return write1_realsmith_du1NYKYU3M + write2_realsmith_du1NYKYU3M;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_lqtemPtOt0(x) (x)
#define Tag2_realsmith_lqtemPtOt0(x) (x)
#define Tag3_realsmith_lqtemPtOt0(x) (x)
#define Tag4_realsmith_lqtemPtOt0(x) (x)
#define Tag5_realsmith_lqtemPtOt0(x) (x)
#define Tag6_realsmith_lqtemPtOt0(x) (x)
#define Tag7_realsmith_lqtemPtOt0(x) (x)
#define Tag8_realsmith_lqtemPtOt0(x) (x)
#define Tag9_realsmith_lqtemPtOt0(x) (x)
#define Tag10_realsmith_lqtemPtOt0(x) (x)
#define Tag11_realsmith_lqtemPtOt0(x) (x)
#define Tag12_realsmith_lqtemPtOt0(x) (x)
#define Tag13_realsmith_lqtemPtOt0(x) (x)
#include "stdint.h"
int realsmith_lqtemPtOt0(int rate_min_realsmith_lqtemPtOt0, int rate_max_realsmith_lqtemPtOt0, int channels_min_realsmith_lqtemPtOt0, int channels_max_realsmith_lqtemPtOt0, int fmt_realsmith_lqtemPtOt0) {
    int rate_set_realsmith_lqtemPtOt0 = 48000;
    int channels_set_realsmith_lqtemPtOt0 = 2;
    int fmt_set_realsmith_lqtemPtOt0 = 24;
    /*bef_stmt:2188*/
/*bef_stmt:2188*/
/*bef_stmt:2188*/
/*bef_stmt:2188*/
if (Tag1_realsmith_lqtemPtOt0(/*int:2291:2291:2188:e*/rate_min_realsmith_lqtemPtOt0) > Tag2_realsmith_lqtemPtOt0(/*int:2291:2291:2188:e*/rate_set_realsmith_lqtemPtOt0) || Tag3_realsmith_lqtemPtOt0(/*int:2291:2291:2188:e*/rate_max_realsmith_lqtemPtOt0) < Tag4_realsmith_lqtemPtOt0(/*int:2291:2291:2188:e*/rate_set_realsmith_lqtemPtOt0)) {
        /*bef_stmt:2165*/
rate_min_realsmith_lqtemPtOt0 = Tag5_realsmith_lqtemPtOt0(/*int:2291:2291:2165:e*/rate_set_realsmith_lqtemPtOt0);
/*aft_stmt:2165*/
        /*bef_stmt:2180*/
rate_max_realsmith_lqtemPtOt0 = Tag6_realsmith_lqtemPtOt0(/*int:2291:2291:2180:e*/rate_set_realsmith_lqtemPtOt0);
/*aft_stmt:2180*/
    }
/*aft_stmt:2188*/
/*aft_stmt:2188*/
/*aft_stmt:2188*/
/*aft_stmt:2188*/
    /*bef_stmt:2266*/
/*bef_stmt:2266*/
/*bef_stmt:2266*/
/*bef_stmt:2266*/
if (Tag7_realsmith_lqtemPtOt0(/*int:2291:2291:2266:e*/channels_min_realsmith_lqtemPtOt0) > Tag8_realsmith_lqtemPtOt0(/*int:2291:2291:2266:e*/channels_set_realsmith_lqtemPtOt0) || Tag9_realsmith_lqtemPtOt0(/*int:2291:2291:2266:e*/channels_max_realsmith_lqtemPtOt0) < Tag10_realsmith_lqtemPtOt0(/*int:2291:2291:2266:e*/channels_set_realsmith_lqtemPtOt0)) {
        /*bef_stmt:2243*/
channels_min_realsmith_lqtemPtOt0 = Tag11_realsmith_lqtemPtOt0(/*int:2291:2291:2243:e*/channels_set_realsmith_lqtemPtOt0);
/*aft_stmt:2243*/
        /*bef_stmt:2258*/
channels_max_realsmith_lqtemPtOt0 = Tag12_realsmith_lqtemPtOt0(/*int:2291:2291:2258:e*/channels_set_realsmith_lqtemPtOt0);
/*aft_stmt:2258*/
    }
/*aft_stmt:2266*/
/*aft_stmt:2266*/
/*aft_stmt:2266*/
/*aft_stmt:2266*/
    /*bef_stmt:2281*/
fmt_realsmith_lqtemPtOt0 = Tag13_realsmith_lqtemPtOt0(/*int:2291:2291:2281:e*/fmt_set_realsmith_lqtemPtOt0);
/*aft_stmt:2281*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_IN4gRaIB1H(x) (x)
#define Tag2_realsmith_IN4gRaIB1H(x) (x)
#define Tag3_realsmith_IN4gRaIB1H(x) (x)
#define Tag4_realsmith_IN4gRaIB1H(x) (x)
#include "stdlib.h"
int realsmith_IN4gRaIB1H(int path_value_realsmith_IN4gRaIB1H) {
    int result_realsmith_IN4gRaIB1H;
    /*bef_stmt:17145*/
int err_realsmith_IN4gRaIB1H = (Tag1_realsmith_IN4gRaIB1H(/*int:17196:17196:17145:e*/path_value_realsmith_IN4gRaIB1H) == 1) ? 0 : -1;
/*aft_stmt:17145*/
    /*bef_stmt:17183*/
/*bef_stmt:17183*/
result_realsmith_IN4gRaIB1H = (Tag2_realsmith_IN4gRaIB1H(/*int:17196:17196:17183:e*/err_realsmith_IN4gRaIB1H)) ? -1 : Tag3_realsmith_IN4gRaIB1H(/*int:17196:17196:17183:e*/path_value_realsmith_IN4gRaIB1H);
/*aft_stmt:17183*/
/*aft_stmt:17183*/
    /*bef_stmt:17194*/
return Tag4_realsmith_IN4gRaIB1H(/*int:17196:17196:17194:e*/result_realsmith_IN4gRaIB1H);
/*aft_stmt:17194*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_pOLLl6lbdq(x) (x)
#define Tag2_realsmith_pOLLl6lbdq(x) (x)
#define Tag3_realsmith_pOLLl6lbdq(x) (x)
#define Tag4_realsmith_pOLLl6lbdq(x) (x)
#define Tag5_realsmith_pOLLl6lbdq(x) (x)
#define Tag6_realsmith_pOLLl6lbdq(x) (x)
#define Tag7_realsmith_pOLLl6lbdq(x) (x)
#include "stdlib.h"
struct swap_cluster_list_XRlTnD {
    unsigned int head_next_realsmith_pOLLl6lbdq;
    unsigned int tail_next_realsmith_pOLLl6lbdq;
};
unsigned int realsmith_pOLLl6lbdq(unsigned int head_next_realsmith_pOLLl6lbdq, unsigned int tail_next_realsmith_pOLLl6lbdq) {
    struct swap_cluster_list_XRlTnD list_realsmith_pOLLl6lbdq;
    /*bef_stmt:17189*/
list_realsmith_pOLLl6lbdq.head_next_realsmith_pOLLl6lbdq = Tag1_realsmith_pOLLl6lbdq(/*unsigned int:17384:17384:17189:e*/head_next_realsmith_pOLLl6lbdq);
/*aft_stmt:17189*/
    /*bef_stmt:17222*/
list_realsmith_pOLLl6lbdq.tail_next_realsmith_pOLLl6lbdq = Tag2_realsmith_pOLLl6lbdq(/*unsigned int:17384:17384:17222:e*/tail_next_realsmith_pOLLl6lbdq);
/*aft_stmt:17222*/
    /*bef_stmt:17255*/
unsigned int idx_realsmith_pOLLl6lbdq = Tag3_realsmith_pOLLl6lbdq(/*unsigned int:17384:17384:17255:e*/list_realsmith_pOLLl6lbdq.head_next_realsmith_pOLLl6lbdq);
/*aft_stmt:17255*/
    /*bef_stmt:17369*/
/*bef_stmt:17369*/
if (Tag4_realsmith_pOLLl6lbdq(/*unsigned int:17384:17384:17369:e*/list_realsmith_pOLLl6lbdq.tail_next_realsmith_pOLLl6lbdq) == Tag5_realsmith_pOLLl6lbdq(/*unsigned int:17384:17384:17369:e*/idx_realsmith_pOLLl6lbdq)) {
        list_realsmith_pOLLl6lbdq.head_next_realsmith_pOLLl6lbdq = 0;
        list_realsmith_pOLLl6lbdq.tail_next_realsmith_pOLLl6lbdq = 0;
    } else {
        /*bef_stmt:17362*/
list_realsmith_pOLLl6lbdq.head_next_realsmith_pOLLl6lbdq = Tag6_realsmith_pOLLl6lbdq(/*unsigned int:17384:17384:17362:e*/list_realsmith_pOLLl6lbdq.head_next_realsmith_pOLLl6lbdq) + 1;
/*aft_stmt:17362*/
    }
/*aft_stmt:17369*/
/*aft_stmt:17369*/
    /*bef_stmt:17382*/
return Tag7_realsmith_pOLLl6lbdq(/*unsigned int:17384:17384:17382:e*/idx_realsmith_pOLLl6lbdq);
/*aft_stmt:17382*/
}



#include "stdlib.h"
struct snd_pcm_substream_BnFX9g {
    struct snd_pcm_runtime_BnFX9g *runtime_realsmith_iG43LoRxqO;
};
struct snd_pcm_runtime_BnFX9g {
    int hw_realsmith_iG43LoRxqO;
};
struct snd_korg1212_BnFX9g {
    long unsigned int cardState_realsmith_iG43LoRxqO;
    unsigned long lock_realsmith_iG43LoRxqO;
    long errorcnt_realsmith_iG43LoRxqO;
    int channels_realsmith_iG43LoRxqO;
    int periods_realsmith_iG43LoRxqO;
    int playback_pid_realsmith_iG43LoRxqO;
    struct snd_pcm_substream_BnFX9g *playback_substream_realsmith_iG43LoRxqO;
    int dma_play_realsmith_iG43LoRxqO;
};
int realsmith_iG43LoRxqO(int cardState_realsmith_iG43LoRxqO, int *playback_pid_realsmith_iG43LoRxqO, int *periodsize_realsmith_iG43LoRxqO, int *channels_realsmith_iG43LoRxqO, long *errorcnt_realsmith_iG43LoRxqO) {
    struct snd_korg1212_BnFX9g korg1212_realsmith_iG43LoRxqO;
    struct snd_pcm_runtime_BnFX9g runtime_realsmith_iG43LoRxqO;
    unsigned long flags_realsmith_iG43LoRxqO;
    korg1212_realsmith_iG43LoRxqO.cardState_realsmith_iG43LoRxqO = cardState_realsmith_iG43LoRxqO;
    runtime_realsmith_iG43LoRxqO.hw_realsmith_iG43LoRxqO = 0;
    korg1212_realsmith_iG43LoRxqO.playback_substream_realsmith_iG43LoRxqO = ((void*)0);
    korg1212_realsmith_iG43LoRxqO.dma_play_realsmith_iG43LoRxqO = 0;
    flags_realsmith_iG43LoRxqO = 0;
    korg1212_realsmith_iG43LoRxqO.playback_substream_realsmith_iG43LoRxqO = (struct snd_pcm_substream_BnFX9g*)1;
    *playback_pid_realsmith_iG43LoRxqO = 1234;
    korg1212_realsmith_iG43LoRxqO.periods_realsmith_iG43LoRxqO = 4;
    korg1212_realsmith_iG43LoRxqO.channels_realsmith_iG43LoRxqO = 2;
    korg1212_realsmith_iG43LoRxqO.errorcnt_realsmith_iG43LoRxqO = 0;
    flags_realsmith_iG43LoRxqO = 0;
    *periodsize_realsmith_iG43LoRxqO = korg1212_realsmith_iG43LoRxqO.periods_realsmith_iG43LoRxqO;
    *channels_realsmith_iG43LoRxqO = korg1212_realsmith_iG43LoRxqO.channels_realsmith_iG43LoRxqO;
    *errorcnt_realsmith_iG43LoRxqO = korg1212_realsmith_iG43LoRxqO.errorcnt_realsmith_iG43LoRxqO;
    return 0;
}
int realsmith_proxy_kW3oe0BvTI(int p_0_qrAiCix7H5, int p_1_5vBzKbHFLt, int p_2_3UugRlYODG, int p_3_fGefQLJhQA, long p_4_pzNQfaZCFQ) {
int proxy_fjqLUthVNI[16] = { 95, p_3_fGefQLJhQA, p_3_fGefQLJhQA, 50, p_3_fGefQLJhQA, p_3_fGefQLJhQA, p_3_fGefQLJhQA, p_3_fGefQLJhQA, 100, 94, 87, p_3_fGefQLJhQA, p_3_fGefQLJhQA, 56, 11, 19 };
long proxy_OdwTPqIyG4[17] = { p_4_pzNQfaZCFQ, p_4_pzNQfaZCFQ, 23, 31, 12, p_4_pzNQfaZCFQ, p_4_pzNQfaZCFQ, p_4_pzNQfaZCFQ, 35, 53, 83, 22, 11, 81, p_4_pzNQfaZCFQ, 34, p_4_pzNQfaZCFQ };
int proxy_ret_kf4rOdclOl = realsmith_iG43LoRxqO(p_0_qrAiCix7H5, &(p_1_5vBzKbHFLt), &(p_2_3UugRlYODG), proxy_fjqLUthVNI, proxy_OdwTPqIyG4);
return proxy_ret_kf4rOdclOl;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_0HaUahJVBo(x) (x)
#define Tag2_realsmith_0HaUahJVBo(x) (x)
#define Tag3_realsmith_0HaUahJVBo(x) (x)
#define Tag4_realsmith_0HaUahJVBo(x) (x)
#define Tag5_realsmith_0HaUahJVBo(x) (x)
#define Tag6_realsmith_0HaUahJVBo(x) (x)
#define Tag7_realsmith_0HaUahJVBo(x) (x)
#define Tag8_realsmith_0HaUahJVBo(x) (x)
#define Tag9_realsmith_0HaUahJVBo(x) (x)
#define Tag10_realsmith_0HaUahJVBo(x) (x)
#define Tag11_realsmith_0HaUahJVBo(x) (x)
#define Tag12_realsmith_0HaUahJVBo(x) (x)
#define Tag13_realsmith_0HaUahJVBo(x) (x)
#include "stdlib.h"
int realsmith_0HaUahJVBo(int regmap_value_realsmith_0HaUahJVBo, int client_value_realsmith_0HaUahJVBo) {
    int reg_int_als_realsmith_0HaUahJVBo = 0;
    int reg_int_ges_realsmith_0HaUahJVBo = 0;
    int reg_int_pxs_realsmith_0HaUahJVBo = 0;
    int reg_enable_als_realsmith_0HaUahJVBo = 0;
    int reg_enable_ges_realsmith_0HaUahJVBo = 0;
    int reg_enable_pxs_realsmith_0HaUahJVBo = 0;
    /*bef_stmt:17265*/
if (Tag1_realsmith_0HaUahJVBo(/*int:17599:17599:17265:e*/regmap_value_realsmith_0HaUahJVBo) < 0) {
        return -1;
    }
/*aft_stmt:17265*/
    /*bef_stmt:17288*/
reg_int_als_realsmith_0HaUahJVBo = Tag2_realsmith_0HaUahJVBo(/*int:17599:17599:17288:e*/regmap_value_realsmith_0HaUahJVBo) + 1;
/*aft_stmt:17288*/
    /*bef_stmt:17319*/
if (Tag3_realsmith_0HaUahJVBo(/*int:17599:17599:17319:e*/reg_int_als_realsmith_0HaUahJVBo) < 0) {
        return -2;
    }
/*aft_stmt:17319*/
    /*bef_stmt:17342*/
reg_int_ges_realsmith_0HaUahJVBo = Tag4_realsmith_0HaUahJVBo(/*int:17599:17599:17342:e*/regmap_value_realsmith_0HaUahJVBo) + 2;
/*aft_stmt:17342*/
    /*bef_stmt:17373*/
if (Tag5_realsmith_0HaUahJVBo(/*int:17599:17599:17373:e*/reg_int_ges_realsmith_0HaUahJVBo) < 0) {
        return -3;
    }
/*aft_stmt:17373*/
    /*bef_stmt:17396*/
reg_int_pxs_realsmith_0HaUahJVBo = Tag6_realsmith_0HaUahJVBo(/*int:17599:17599:17396:e*/regmap_value_realsmith_0HaUahJVBo) + 3;
/*aft_stmt:17396*/
    /*bef_stmt:17427*/
if (Tag7_realsmith_0HaUahJVBo(/*int:17599:17599:17427:e*/reg_int_pxs_realsmith_0HaUahJVBo) < 0) {
        return -4;
    }
/*aft_stmt:17427*/
    /*bef_stmt:17450*/
reg_enable_als_realsmith_0HaUahJVBo = Tag8_realsmith_0HaUahJVBo(/*int:17599:17599:17450:e*/regmap_value_realsmith_0HaUahJVBo) + 4;
/*aft_stmt:17450*/
    /*bef_stmt:17481*/
if (Tag9_realsmith_0HaUahJVBo(/*int:17599:17599:17481:e*/reg_enable_als_realsmith_0HaUahJVBo) < 0) {
        return -5;
    }
/*aft_stmt:17481*/
    /*bef_stmt:17504*/
reg_enable_ges_realsmith_0HaUahJVBo = Tag10_realsmith_0HaUahJVBo(/*int:17599:17599:17504:e*/regmap_value_realsmith_0HaUahJVBo) + 5;
/*aft_stmt:17504*/
    /*bef_stmt:17535*/
if (Tag11_realsmith_0HaUahJVBo(/*int:17599:17599:17535:e*/reg_enable_ges_realsmith_0HaUahJVBo) < 0) {
        return -6;
    }
/*aft_stmt:17535*/
    /*bef_stmt:17558*/
reg_enable_pxs_realsmith_0HaUahJVBo = Tag12_realsmith_0HaUahJVBo(/*int:17599:17599:17558:e*/regmap_value_realsmith_0HaUahJVBo) + 6;
/*aft_stmt:17558*/
    /*bef_stmt:17589*/
if (Tag13_realsmith_0HaUahJVBo(/*int:17599:17599:17589:e*/reg_enable_pxs_realsmith_0HaUahJVBo) < 0) {
        return -7;
    }
/*aft_stmt:17589*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_0j5xxof25E(x) (x)
#define Tag2_realsmith_0j5xxof25E(x) (x)
#define Tag3_realsmith_0j5xxof25E(x) (x)
#include "stdlib.h"
int realsmith_0j5xxof25E(int event_realsmith_0j5xxof25E) {
    int result_realsmith_0j5xxof25E = 0;
    int component_enabled_realsmith_0j5xxof25E = 0;
    /*bef_stmt:17127*/
switch (/*TAG1:STA*/((int)(realsmith_S86uDGfMpY((int)(event_realsmith_0j5xxof25E)+(-5), (int)(event_realsmith_0j5xxof25E)+(-16), (int)(event_realsmith_0j5xxof25E)+(-79))+(int)(event_realsmith_0j5xxof25E)-(84))+event_realsmith_0j5xxof25E)/*TAG1:END:event_realsmith_0j5xxof25E*/) {
    case 1:
        component_enabled_realsmith_0j5xxof25E = 1;
        break;
    case 2:
        component_enabled_realsmith_0j5xxof25E = 0;
        break;
    }
/*aft_stmt:17127*/
    /*bef_stmt:17199*/
result_realsmith_0j5xxof25E = /*TAG2:STA*/((int)(realsmith_j5N6efx5lt((int)(component_enabled_realsmith_0j5xxof25E)+(93))+(int)(component_enabled_realsmith_0j5xxof25E)-(93))+component_enabled_realsmith_0j5xxof25E)/*TAG2:END:component_enabled_realsmith_0j5xxof25E*/;
/*aft_stmt:17199*/
    /*bef_stmt:17210*/
return /*TAG3:STA*/((int)(realsmith_QnWfQsjN36((unsigned int)(result_realsmith_0j5xxof25E)+(35))+(int)(result_realsmith_0j5xxof25E)-(3))+result_realsmith_0j5xxof25E)/*TAG3:END:result_realsmith_0j5xxof25E*/;
/*aft_stmt:17210*/
}



#include "stdlib.h"
int realsmith_EbWOrqHRBa(int btree_height_realsmith_EbWOrqHRBa, int level_realsmith_EbWOrqHRBa, int *ncmaxp_realsmith_EbWOrqHRBa) {
    int node_realsmith_EbWOrqHRBa;
    if (level_realsmith_EbWOrqHRBa == btree_height_realsmith_EbWOrqHRBa - 1) {
        node_realsmith_EbWOrqHRBa = 1;
        *ncmaxp_realsmith_EbWOrqHRBa = 4;
    } else {
        node_realsmith_EbWOrqHRBa = 2;
        *ncmaxp_realsmith_EbWOrqHRBa = 3;
    }
    return node_realsmith_EbWOrqHRBa;
}
int realsmith_proxy_gDgKQUDZT0(int p_0_zEFBvkPstV, int p_1_4ygDJ92udL, int p_2_sx4dHg6FVb) {
int proxy_lf2uVlXfHi[14] = { 31, p_2_sx4dHg6FVb, 1, p_2_sx4dHg6FVb, 29, 42, 40, p_2_sx4dHg6FVb, 28, p_2_sx4dHg6FVb, p_2_sx4dHg6FVb, p_2_sx4dHg6FVb, p_2_sx4dHg6FVb, 38 };
int proxy_ret_b1d5CFptms = realsmith_EbWOrqHRBa(p_0_zEFBvkPstV, p_1_4ygDJ92udL, proxy_lf2uVlXfHi);
return proxy_ret_b1d5CFptms;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_MIHRz1qOMS(x) (x)
#define Tag2_realsmith_MIHRz1qOMS(x) (x)
#define Tag3_realsmith_MIHRz1qOMS(x) (x)
#include "stdlib.h"
int realsmith_MIHRz1qOMS(int sect_realsmith_MIHRz1qOMS) {
    /*bef_stmt:17097*/
int nsect_realsmith_MIHRz1qOMS = /*TAG1:STA*/((int)(realsmith_2Yysma3qAq((int)(sect_realsmith_MIHRz1qOMS)+(-72), (unsigned int)(sect_realsmith_MIHRz1qOMS)+(20))+(int)(sect_realsmith_MIHRz1qOMS)-(75))+sect_realsmith_MIHRz1qOMS)/*TAG1:END:sect_realsmith_MIHRz1qOMS*/;
/*aft_stmt:17097*/
    int command_realsmith_MIHRz1qOMS = 0x10;
    /*bef_stmt:17153*/
/*bef_stmt:17153*/
return (/*TAG2:STA*/((int)(realsmith_T93DTaOePu((int)(nsect_realsmith_MIHRz1qOMS)+(-74), (int)(nsect_realsmith_MIHRz1qOMS)+(-75), (int)(nsect_realsmith_MIHRz1qOMS)+(-75), (int)(nsect_realsmith_MIHRz1qOMS)+(-71), (int)(nsect_realsmith_MIHRz1qOMS)+(-75))+(int)(nsect_realsmith_MIHRz1qOMS)-(75))+nsect_realsmith_MIHRz1qOMS)/*TAG2:END:nsect_realsmith_MIHRz1qOMS*/ << 16) | /*TAG3:STA*/((int)(realsmith_E8FLoj0wuA((int)(command_realsmith_MIHRz1qOMS)+(69))+(int)(command_realsmith_MIHRz1qOMS)-(16))+command_realsmith_MIHRz1qOMS)/*TAG3:END:command_realsmith_MIHRz1qOMS*/;
/*aft_stmt:17153*/
/*aft_stmt:17153*/
}



#include "stdlib.h"
int realsmith_SflJ91y9sB(int buffer_size_realsmith_SflJ91y9sB, int *substream_realsmith_SflJ91y9sB) {
    if (buffer_size_realsmith_SflJ91y9sB <= 0) {
        return -1;
    }
    int *buffer_realsmith_SflJ91y9sB = (int *)(malloc(buffer_size_realsmith_SflJ91y9sB * sizeof(int)));
    if (buffer_realsmith_SflJ91y9sB == ((void*)0)) {
        return -1;
    }
    (free(buffer_realsmith_SflJ91y9sB));
    return 0;
}
int realsmith_proxy_56w5LSbdFb(int p_0_zURlWljLDD, int p_1_A6mKU4Yttp) {
int proxy_Uc4iLcj32d[16] = { p_1_A6mKU4Yttp, p_1_A6mKU4Yttp, 58, 16, p_1_A6mKU4Yttp, 55, p_1_A6mKU4Yttp, p_1_A6mKU4Yttp, p_1_A6mKU4Yttp, 71, 49, p_1_A6mKU4Yttp, p_1_A6mKU4Yttp, 7, p_1_A6mKU4Yttp, p_1_A6mKU4Yttp };
int proxy_ret_LwXEoVWi2u = realsmith_SflJ91y9sB(p_0_zURlWljLDD, proxy_Uc4iLcj32d);
return proxy_ret_LwXEoVWi2u;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ouwud6IuS9(x) (x)
#define Tag2_realsmith_ouwud6IuS9(x) (x)
#define Tag3_realsmith_ouwud6IuS9(x) (x)
#define Tag4_realsmith_ouwud6IuS9(x) (x)
#define Tag5_realsmith_ouwud6IuS9(x) (x)
#define Tag6_realsmith_ouwud6IuS9(x) (x)
#define Tag7_realsmith_ouwud6IuS9(x) (x)
#include "stdlib.h"
struct dm_clone_metadata_iB1Y9J {
    int read_only_realsmith_ouwud6IuS9;
    int fail_io_realsmith_ouwud6IuS9;
    int bm_realsmith_ouwud6IuS9;
    int lock_realsmith_ouwud6IuS9;
    int bitmap_lock_realsmith_ouwud6IuS9;
};
int realsmith_ouwud6IuS9(int read_only_realsmith_ouwud6IuS9, int fail_io_realsmith_ouwud6IuS9, int bm_realsmith_ouwud6IuS9, int lock_realsmith_ouwud6IuS9, int bitmap_lock_realsmith_ouwud6IuS9) {
    struct dm_clone_metadata_iB1Y9J cmd_realsmith_ouwud6IuS9;
    /*bef_stmt:17287*/
cmd_realsmith_ouwud6IuS9.read_only_realsmith_ouwud6IuS9 = /*TAG1:STA*/((int)(realsmith_22ejOte4L1((int)(read_only_realsmith_ouwud6IuS9)+(-19), (int)(read_only_realsmith_ouwud6IuS9)+(-5))+(int)(read_only_realsmith_ouwud6IuS9)-(82))+read_only_realsmith_ouwud6IuS9)/*TAG1:END:read_only_realsmith_ouwud6IuS9*/;
/*aft_stmt:17287*/
    /*bef_stmt:17323*/
cmd_realsmith_ouwud6IuS9.fail_io_realsmith_ouwud6IuS9 = /*TAG2:STA*/((int)(realsmith_4XNXsVHH9o((int)(fail_io_realsmith_ouwud6IuS9)+(-8), (int)(fail_io_realsmith_ouwud6IuS9)+(-35), (int)(fail_io_realsmith_ouwud6IuS9)+(-66))+(int)(fail_io_realsmith_ouwud6IuS9)-(96))+fail_io_realsmith_ouwud6IuS9)/*TAG2:END:fail_io_realsmith_ouwud6IuS9*/;
/*aft_stmt:17323*/
    /*bef_stmt:17344*/
cmd_realsmith_ouwud6IuS9.bm_realsmith_ouwud6IuS9 = /*TAG3:STA*/((int)(realsmith_DZUC8AdmI8((int)(bm_realsmith_ouwud6IuS9)+(9))+(int)(bm_realsmith_ouwud6IuS9)-(38))+bm_realsmith_ouwud6IuS9)/*TAG3:END:bm_realsmith_ouwud6IuS9*/;
/*aft_stmt:17344*/
    /*bef_stmt:17365*/
cmd_realsmith_ouwud6IuS9.lock_realsmith_ouwud6IuS9 = /*TAG4:STA*/((int)(realsmith_du1NYKYU3M((int)(lock_realsmith_ouwud6IuS9)+(37))+(int)(lock_realsmith_ouwud6IuS9)-(149))+lock_realsmith_ouwud6IuS9)/*TAG4:END:lock_realsmith_ouwud6IuS9*/;
/*aft_stmt:17365*/
    /*bef_stmt:17386*/
cmd_realsmith_ouwud6IuS9.bitmap_lock_realsmith_ouwud6IuS9 = /*TAG5:STA*/((int)(realsmith_lqtemPtOt0((int)(bitmap_lock_realsmith_ouwud6IuS9)+(6), (int)(bitmap_lock_realsmith_ouwud6IuS9)+(1), (int)(bitmap_lock_realsmith_ouwud6IuS9)+(65), (int)(bitmap_lock_realsmith_ouwud6IuS9)+(-5), (int)(bitmap_lock_realsmith_ouwud6IuS9)+(11))+(int)(bitmap_lock_realsmith_ouwud6IuS9)-(20))+bitmap_lock_realsmith_ouwud6IuS9)/*TAG5:END:bitmap_lock_realsmith_ouwud6IuS9*/;
/*aft_stmt:17386*/
    unsigned long flags_realsmith_ouwud6IuS9;
    flags_realsmith_ouwud6IuS9 = 0;
    cmd_realsmith_ouwud6IuS9.read_only_realsmith_ouwud6IuS9 = 1;
    /*bef_stmt:17481*/
if (!/*TAG6:STA*/((int)(realsmith_M36ceajKQ8((int)(cmd_realsmith_ouwud6IuS9.fail_io_realsmith_ouwud6IuS9)+(-97), (int)(cmd_realsmith_ouwud6IuS9.fail_io_realsmith_ouwud6IuS9)+(2), (int)(cmd_realsmith_ouwud6IuS9.fail_io_realsmith_ouwud6IuS9)+(-38), (int)(cmd_realsmith_ouwud6IuS9.fail_io_realsmith_ouwud6IuS9)+(-57))+(int)(cmd_realsmith_ouwud6IuS9.fail_io_realsmith_ouwud6IuS9)-(97))+cmd_realsmith_ouwud6IuS9.fail_io_realsmith_ouwud6IuS9)/*TAG6:END:cmd_realsmith_ouwud6IuS9.fail_io_realsmith_ouwud6IuS9*/) {
        cmd_realsmith_ouwud6IuS9.bm_realsmith_ouwud6IuS9 = 1;
    }
/*aft_stmt:17481*/
    /*bef_stmt:17498*/
return /*TAG7:STA*/((int)(realsmith_proxy_T1uatMD4ty((int)(cmd_realsmith_ouwud6IuS9.read_only_realsmith_ouwud6IuS9)+(63), (int)(cmd_realsmith_ouwud6IuS9.read_only_realsmith_ouwud6IuS9)+(-101), (int)(cmd_realsmith_ouwud6IuS9.read_only_realsmith_ouwud6IuS9)+(-65), (int)(cmd_realsmith_ouwud6IuS9.read_only_realsmith_ouwud6IuS9)+(20), (int)(cmd_realsmith_ouwud6IuS9.read_only_realsmith_ouwud6IuS9)+(54), (int)(cmd_realsmith_ouwud6IuS9.read_only_realsmith_ouwud6IuS9)+(90), (int)(cmd_realsmith_ouwud6IuS9.read_only_realsmith_ouwud6IuS9)+(-95), (int)(cmd_realsmith_ouwud6IuS9.read_only_realsmith_ouwud6IuS9)+(-93), (int)(cmd_realsmith_ouwud6IuS9.read_only_realsmith_ouwud6IuS9)+(25))+(int)(cmd_realsmith_ouwud6IuS9.read_only_realsmith_ouwud6IuS9)-(0))+cmd_realsmith_ouwud6IuS9.read_only_realsmith_ouwud6IuS9)/*TAG7:END:cmd_realsmith_ouwud6IuS9.read_only_realsmith_ouwud6IuS9*/;
/*aft_stmt:17498*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_TxxZGUW6UB(x) (x)
#define Tag2_realsmith_TxxZGUW6UB(x) (x)
#define Tag3_realsmith_TxxZGUW6UB(x) (x)
#define Tag4_realsmith_TxxZGUW6UB(x) (x)
#define Tag5_realsmith_TxxZGUW6UB(x) (x)
#define Tag6_realsmith_TxxZGUW6UB(x) (x)
#include "stdlib.h"
struct mt76x02_dev_KPY8pz {
    unsigned long tx_hang_reset_realsmith_TxxZGUW6UB;
    unsigned char temp_realsmith_TxxZGUW6UB;
    unsigned char enable_tpc_realsmith_TxxZGUW6UB;
};
int realsmith_TxxZGUW6UB(int tx_hang_reset_realsmith_TxxZGUW6UB, int temp_realsmith_TxxZGUW6UB, int enable_tpc_realsmith_TxxZGUW6UB) {
    struct mt76x02_dev_KPY8pz dev_realsmith_TxxZGUW6UB;
    /*bef_stmt:17226*/
dev_realsmith_TxxZGUW6UB.tx_hang_reset_realsmith_TxxZGUW6UB = Tag1_realsmith_TxxZGUW6UB(/*int:17359:17359:17226:e*/tx_hang_reset_realsmith_TxxZGUW6UB);
/*aft_stmt:17226*/
    /*bef_stmt:17268*/
dev_realsmith_TxxZGUW6UB.temp_realsmith_TxxZGUW6UB = (unsigned char)Tag2_realsmith_TxxZGUW6UB(/*int:17359:17359:17268:e*/temp_realsmith_TxxZGUW6UB);
/*aft_stmt:17268*/
    /*bef_stmt:17297*/
dev_realsmith_TxxZGUW6UB.enable_tpc_realsmith_TxxZGUW6UB = (unsigned char)Tag3_realsmith_TxxZGUW6UB(/*int:17359:17359:17297:e*/enable_tpc_realsmith_TxxZGUW6UB);
/*aft_stmt:17297*/
    /*bef_stmt:17357*/
/*bef_stmt:17357*/
/*bef_stmt:17357*/
return Tag4_realsmith_TxxZGUW6UB(/*unsigned long:17359:17359:17357:e*/dev_realsmith_TxxZGUW6UB.tx_hang_reset_realsmith_TxxZGUW6UB) + Tag5_realsmith_TxxZGUW6UB(/*unsigned char:17359:17359:17357:e*/dev_realsmith_TxxZGUW6UB.temp_realsmith_TxxZGUW6UB) + Tag6_realsmith_TxxZGUW6UB(/*unsigned char:17359:17359:17357:e*/dev_realsmith_TxxZGUW6UB.enable_tpc_realsmith_TxxZGUW6UB);
/*aft_stmt:17357*/
/*aft_stmt:17357*/
/*aft_stmt:17357*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Fr6L4EwKPq(x) (x)
#define Tag2_realsmith_Fr6L4EwKPq(x) (x)
#define Tag3_realsmith_Fr6L4EwKPq(x) (x)
#define Tag4_realsmith_Fr6L4EwKPq(x) (x)
#define Tag5_realsmith_Fr6L4EwKPq(x) (x)
#define Tag6_realsmith_Fr6L4EwKPq(x) (x)
#include "stdint.h"
int realsmith_Fr6L4EwKPq(int encoder_dev_realsmith_Fr6L4EwKPq, int old_crtc_state_realsmith_Fr6L4EwKPq, int old_conn_state_realsmith_Fr6L4EwKPq) {
    unsigned int eldv_realsmith_Fr6L4EwKPq, tmp_realsmith_Fr6L4EwKPq;
    /*bef_stmt:2054*/
tmp_realsmith_Fr6L4EwKPq = /*TAG1:STA*/((int)(realsmith_ghgpGzrwll((int)(encoder_dev_realsmith_Fr6L4EwKPq)+(-59))+(int)(encoder_dev_realsmith_Fr6L4EwKPq)-(100))+encoder_dev_realsmith_Fr6L4EwKPq)/*TAG1:END:encoder_dev_realsmith_Fr6L4EwKPq*/;
/*aft_stmt:2054*/
    /*bef_stmt:2128*/
/*bef_stmt:2128*/
if (/*TAG2:STA*/((unsigned int)(realsmith_f2eTSPeAi7((int)(tmp_realsmith_Fr6L4EwKPq)+(-66), (int)(tmp_realsmith_Fr6L4EwKPq)+(-27))+(int)(tmp_realsmith_Fr6L4EwKPq)-(97))+tmp_realsmith_Fr6L4EwKPq)/*TAG2:END:tmp_realsmith_Fr6L4EwKPq*/ == 1 || /*TAG3:STA*/((unsigned int)(realsmith_proxy_HgNPdKdSm9((int)(tmp_realsmith_Fr6L4EwKPq)+(-21), (char)(tmp_realsmith_Fr6L4EwKPq)+(-27), (char)(tmp_realsmith_Fr6L4EwKPq)+(-109))+(int)(tmp_realsmith_Fr6L4EwKPq)-(97))+tmp_realsmith_Fr6L4EwKPq)/*TAG3:END:tmp_realsmith_Fr6L4EwKPq*/ == 2)
        eldv_realsmith_Fr6L4EwKPq = 3;
    else
        eldv_realsmith_Fr6L4EwKPq = 4;
/*aft_stmt:2128*/
/*aft_stmt:2128*/
    /*bef_stmt:2148*/
tmp_realsmith_Fr6L4EwKPq = /*TAG4:STA*/((int)(realsmith_GYmv5mJBkT((int)(encoder_dev_realsmith_Fr6L4EwKPq)+(-20), (int)(encoder_dev_realsmith_Fr6L4EwKPq)+(-39), (int)(encoder_dev_realsmith_Fr6L4EwKPq)+(-59), (int)(encoder_dev_realsmith_Fr6L4EwKPq)+(-43))+(int)(encoder_dev_realsmith_Fr6L4EwKPq)-(324))+encoder_dev_realsmith_Fr6L4EwKPq)/*TAG4:END:encoder_dev_realsmith_Fr6L4EwKPq*/;
/*aft_stmt:2148*/
    /*bef_stmt:2166*/
tmp_realsmith_Fr6L4EwKPq &= ~/*TAG5:STA*/((unsigned int)(realsmith_AdH8MIC2Mw((int)(eldv_realsmith_Fr6L4EwKPq)+(22), (int)(eldv_realsmith_Fr6L4EwKPq)+(14), (int)(eldv_realsmith_Fr6L4EwKPq)+(50))+(int)(eldv_realsmith_Fr6L4EwKPq)-(4))+eldv_realsmith_Fr6L4EwKPq)/*TAG5:END:eldv_realsmith_Fr6L4EwKPq*/;
/*aft_stmt:2166*/
    /*bef_stmt:2182*/
return /*TAG6:STA*/((unsigned int)(realsmith_6ujlgeoBfF((unsigned int)(tmp_realsmith_Fr6L4EwKPq)+(-15), (unsigned int)(tmp_realsmith_Fr6L4EwKPq)+(-76))+(int)(tmp_realsmith_Fr6L4EwKPq)-(217))+tmp_realsmith_Fr6L4EwKPq)/*TAG6:END:tmp_realsmith_Fr6L4EwKPq*/;
/*aft_stmt:2182*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_hrHdCOnWow(x) (x)
#define Tag2_realsmith_hrHdCOnWow(x) (x)
#define Tag3_realsmith_hrHdCOnWow(x) (x)
#define Tag4_realsmith_hrHdCOnWow(x) (x)
#define Tag5_realsmith_hrHdCOnWow(x) (x)
#define Tag6_realsmith_hrHdCOnWow(x) (x)
#include "stdlib.h"
int realsmith_hrHdCOnWow(int opt_realsmith_hrHdCOnWow, int rate2quantum_realsmith_hrHdCOnWow, int defcls_realsmith_hrHdCOnWow, int tx_queue_len_realsmith_hrHdCOnWow) {
    int err_realsmith_hrHdCOnWow;
    int direct_qlen_realsmith_hrHdCOnWow;
    int version_realsmith_hrHdCOnWow = (0x00010000 >> 16);
    /*bef_stmt:17235*/
if (Tag1_realsmith_hrHdCOnWow(/*int:17391:17391:17235:e*/opt_realsmith_hrHdCOnWow) == 0)
        return -22;
/*aft_stmt:17235*/
    /*bef_stmt:17275*/
if (Tag2_realsmith_hrHdCOnWow(/*int:17391:17391:17275:e*/version_realsmith_hrHdCOnWow) != (0x00010000 >> 16))
        return -22;
/*aft_stmt:17275*/
    /*bef_stmt:17346*/
/*bef_stmt:17346*/
/*bef_stmt:17346*/
direct_qlen_realsmith_hrHdCOnWow = (Tag3_realsmith_hrHdCOnWow(/*int:17391:17391:17346:e*/opt_realsmith_hrHdCOnWow) & (1 << 1)) ? (Tag4_realsmith_hrHdCOnWow(/*int:17391:17391:17346:e*/opt_realsmith_hrHdCOnWow) >> 1) : Tag5_realsmith_hrHdCOnWow(/*int:17391:17391:17346:e*/tx_queue_len_realsmith_hrHdCOnWow);
/*aft_stmt:17346*/
/*aft_stmt:17346*/
/*aft_stmt:17346*/
    /*bef_stmt:17381*/
if ((Tag6_realsmith_hrHdCOnWow(/*int:17391:17391:17381:e*/rate2quantum_realsmith_hrHdCOnWow) < 1))
        rate2quantum_realsmith_hrHdCOnWow = 1;
/*aft_stmt:17381*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_iIlfwjQr2k(x) (x)
#define Tag2_realsmith_iIlfwjQr2k(x) (x)
#include "stdlib.h"
int realsmith_iIlfwjQr2k(int index_realsmith_iIlfwjQr2k, int data_realsmith_iIlfwjQr2k) {
    volatile unsigned char *io_realsmith_iIlfwjQr2k = (volatile unsigned char *)(malloc(2));
    if (io_realsmith_iIlfwjQr2k == ((void*)0)) return -1;
    /*bef_stmt:17238*/
io_realsmith_iIlfwjQr2k[0] = (unsigned char)Tag1_realsmith_iIlfwjQr2k(/*int:17319:17319:17238:e*/index_realsmith_iIlfwjQr2k);
/*aft_stmt:17238*/
    /*bef_stmt:17272*/
io_realsmith_iIlfwjQr2k[1] = (unsigned char)Tag2_realsmith_iIlfwjQr2k(/*int:17319:17319:17272:e*/data_realsmith_iIlfwjQr2k);
/*aft_stmt:17272*/
    (free((void *)io_realsmith_iIlfwjQr2k));
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_2Wt51LdlN3(x) (x)
#define Tag2_realsmith_2Wt51LdlN3(x) (x)
#define Tag3_realsmith_2Wt51LdlN3(x) (x)
#define Tag4_realsmith_2Wt51LdlN3(x) (x)
#define Tag5_realsmith_2Wt51LdlN3(x) (x)
#define Tag6_realsmith_2Wt51LdlN3(x) (x)
#define Tag7_realsmith_2Wt51LdlN3(x) (x)
#define Tag8_realsmith_2Wt51LdlN3(x) (x)
#define Tag9_realsmith_2Wt51LdlN3(x) (x)
#define Tag10_realsmith_2Wt51LdlN3(x) (x)
#define Tag11_realsmith_2Wt51LdlN3(x) (x)
#define Tag12_realsmith_2Wt51LdlN3(x) (x)
#include "stdlib.h"
int realsmith_2Wt51LdlN3(int leftCoefs_realsmith_2Wt51LdlN3, int rightCoefs_realsmith_2Wt51LdlN3, int leftGains_realsmith_2Wt51LdlN3, int rightGains_realsmith_2Wt51LdlN3) {
    int timeConst1_realsmith_2Wt51LdlN3 = 0xc;
    int timeConst2_realsmith_2Wt51LdlN3 = 0x7fe0;
    /*bef_stmt:17218*/
/*bef_stmt:17218*/
int result1_realsmith_2Wt51LdlN3 = Tag1_realsmith_2Wt51LdlN3(/*int:17374:17374:17218:e*/timeConst1_realsmith_2Wt51LdlN3) + Tag2_realsmith_2Wt51LdlN3(/*int:17374:17374:17218:e*/timeConst2_realsmith_2Wt51LdlN3);
/*aft_stmt:17218*/
/*aft_stmt:17218*/
    /*bef_stmt:17255*/
/*bef_stmt:17255*/
int result2_realsmith_2Wt51LdlN3 = Tag3_realsmith_2Wt51LdlN3(/*int:17374:17374:17255:e*/leftCoefs_realsmith_2Wt51LdlN3) + Tag4_realsmith_2Wt51LdlN3(/*int:17374:17374:17255:e*/rightCoefs_realsmith_2Wt51LdlN3);
/*aft_stmt:17255*/
/*aft_stmt:17255*/
    /*bef_stmt:17292*/
/*bef_stmt:17292*/
int result3_realsmith_2Wt51LdlN3 = Tag5_realsmith_2Wt51LdlN3(/*int:17374:17374:17292:e*/leftGains_realsmith_2Wt51LdlN3) + Tag6_realsmith_2Wt51LdlN3(/*int:17374:17374:17292:e*/rightGains_realsmith_2Wt51LdlN3);
/*aft_stmt:17292*/
/*aft_stmt:17292*/
    /*bef_stmt:17329*/
/*bef_stmt:17329*/
int result4_realsmith_2Wt51LdlN3 = Tag7_realsmith_2Wt51LdlN3(/*int:17374:17374:17329:e*/leftGains_realsmith_2Wt51LdlN3) + Tag8_realsmith_2Wt51LdlN3(/*int:17374:17374:17329:e*/rightGains_realsmith_2Wt51LdlN3);
/*aft_stmt:17329*/
/*aft_stmt:17329*/
    /*bef_stmt:17372*/
/*bef_stmt:17372*/
/*bef_stmt:17372*/
/*bef_stmt:17372*/
return Tag9_realsmith_2Wt51LdlN3(/*int:17374:17374:17372:e*/result1_realsmith_2Wt51LdlN3) + Tag10_realsmith_2Wt51LdlN3(/*int:17374:17374:17372:e*/result2_realsmith_2Wt51LdlN3) + Tag11_realsmith_2Wt51LdlN3(/*int:17374:17374:17372:e*/result3_realsmith_2Wt51LdlN3) + Tag12_realsmith_2Wt51LdlN3(/*int:17374:17374:17372:e*/result4_realsmith_2Wt51LdlN3);
/*aft_stmt:17372*/
/*aft_stmt:17372*/
/*aft_stmt:17372*/
/*aft_stmt:17372*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_GaJ34jaV7F(x) (x)
#define Tag2_realsmith_GaJ34jaV7F(x) (x)
#define Tag3_realsmith_GaJ34jaV7F(x) (x)
#define Tag4_realsmith_GaJ34jaV7F(x) (x)
#define Tag5_realsmith_GaJ34jaV7F(x) (x)
#define Tag6_realsmith_GaJ34jaV7F(x) (x)
#define Tag7_realsmith_GaJ34jaV7F(x) (x)
#define Tag8_realsmith_GaJ34jaV7F(x) (x)
#define Tag9_realsmith_GaJ34jaV7F(x) (x)
#define Tag10_realsmith_GaJ34jaV7F(x) (x)
#define Tag11_realsmith_GaJ34jaV7F(x) (x)
#define Tag12_realsmith_GaJ34jaV7F(x) (x)
#define Tag13_realsmith_GaJ34jaV7F(x) (x)
#define Tag14_realsmith_GaJ34jaV7F(x) (x)
#define Tag15_realsmith_GaJ34jaV7F(x) (x)
#define Tag16_realsmith_GaJ34jaV7F(x) (x)
#define Tag17_realsmith_GaJ34jaV7F(x) (x)
#define Tag18_realsmith_GaJ34jaV7F(x) (x)
#define Tag19_realsmith_GaJ34jaV7F(x) (x)
#include "stdlib.h"
int realsmith_GaJ34jaV7F(int tlb_realsmith_GaJ34jaV7F, int vma_start_realsmith_GaJ34jaV7F, int vma_end_realsmith_GaJ34jaV7F, int start_addr_realsmith_GaJ34jaV7F, int end_addr_realsmith_GaJ34jaV7F) {
    /*bef_stmt:17215*/
/*bef_stmt:17215*/
/*bef_stmt:17215*/
/*bef_stmt:17215*/
int start_realsmith_GaJ34jaV7F = (Tag1_realsmith_GaJ34jaV7F(/*int:17442:17442:17215:e*/vma_start_realsmith_GaJ34jaV7F) > Tag2_realsmith_GaJ34jaV7F(/*int:17442:17442:17215:e*/start_addr_realsmith_GaJ34jaV7F)) ? Tag3_realsmith_GaJ34jaV7F(/*int:17442:17442:17215:e*/vma_start_realsmith_GaJ34jaV7F) : Tag4_realsmith_GaJ34jaV7F(/*int:17442:17442:17215:e*/start_addr_realsmith_GaJ34jaV7F);
/*aft_stmt:17215*/
/*aft_stmt:17215*/
/*aft_stmt:17215*/
/*aft_stmt:17215*/
    int end_realsmith_GaJ34jaV7F;
    /*bef_stmt:17261*/
/*bef_stmt:17261*/
if (Tag5_realsmith_GaJ34jaV7F(/*int:17442:17442:17261:e*/start_realsmith_GaJ34jaV7F) >= Tag6_realsmith_GaJ34jaV7F(/*int:17442:17442:17261:e*/vma_end_realsmith_GaJ34jaV7F))
        return 0;
/*aft_stmt:17261*/
/*aft_stmt:17261*/
    /*bef_stmt:17311*/
/*bef_stmt:17311*/
/*bef_stmt:17311*/
/*bef_stmt:17311*/
end_realsmith_GaJ34jaV7F = (Tag7_realsmith_GaJ34jaV7F(/*int:17442:17442:17311:e*/vma_end_realsmith_GaJ34jaV7F) < Tag8_realsmith_GaJ34jaV7F(/*int:17442:17442:17311:e*/end_addr_realsmith_GaJ34jaV7F)) ? Tag9_realsmith_GaJ34jaV7F(/*int:17442:17442:17311:e*/vma_end_realsmith_GaJ34jaV7F) : Tag10_realsmith_GaJ34jaV7F(/*int:17442:17442:17311:e*/end_addr_realsmith_GaJ34jaV7F);
/*aft_stmt:17311*/
/*aft_stmt:17311*/
/*aft_stmt:17311*/
/*aft_stmt:17311*/
    /*bef_stmt:17339*/
/*bef_stmt:17339*/
if (Tag11_realsmith_GaJ34jaV7F(/*int:17442:17442:17339:e*/end_realsmith_GaJ34jaV7F) <= Tag12_realsmith_GaJ34jaV7F(/*int:17442:17442:17339:e*/vma_start_realsmith_GaJ34jaV7F))
        return 0;
/*aft_stmt:17339*/
/*aft_stmt:17339*/
    /*bef_stmt:17432*/
/*bef_stmt:17432*/
if (Tag13_realsmith_GaJ34jaV7F(/*int:17442:17442:17432:e*/start_realsmith_GaJ34jaV7F) != Tag14_realsmith_GaJ34jaV7F(/*int:17442:17442:17432:e*/end_realsmith_GaJ34jaV7F)) {
        /*bef_stmt:17423*/
if (Tag15_realsmith_GaJ34jaV7F(/*int:17442:17442:17423:e*/vma_start_realsmith_GaJ34jaV7F) == 1) {
            /*bef_stmt:17394*/
/*bef_stmt:17394*/
return Tag16_realsmith_GaJ34jaV7F(/*int:17442:17442:17394:e*/end_realsmith_GaJ34jaV7F) - Tag17_realsmith_GaJ34jaV7F(/*int:17442:17442:17394:e*/start_realsmith_GaJ34jaV7F);
/*aft_stmt:17394*/
/*aft_stmt:17394*/
        } else {
            /*bef_stmt:17418*/
/*bef_stmt:17418*/
return Tag18_realsmith_GaJ34jaV7F(/*int:17442:17442:17418:e*/end_realsmith_GaJ34jaV7F) - Tag19_realsmith_GaJ34jaV7F(/*int:17442:17442:17418:e*/start_realsmith_GaJ34jaV7F);
/*aft_stmt:17418*/
/*aft_stmt:17418*/
        }
/*aft_stmt:17423*/
    }
/*aft_stmt:17432*/
/*aft_stmt:17432*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_dT0SWRkl0w(x) (x)
#define Tag2_realsmith_dT0SWRkl0w(x) (x)
#define Tag3_realsmith_dT0SWRkl0w(x) (x)
#define Tag4_realsmith_dT0SWRkl0w(x) (x)
#include "stdlib.h"
int realsmith_dT0SWRkl0w(int alg_realsmith_dT0SWRkl0w, int fips_enabled_realsmith_dT0SWRkl0w) {
    int ret_realsmith_dT0SWRkl0w;
    /*bef_stmt:17159*/
ret_realsmith_dT0SWRkl0w = (/*TAG1:STA*/((int)(realsmith_axKNrOVaYj((int)(alg_realsmith_dT0SWRkl0w)+(40), (int)(alg_realsmith_dT0SWRkl0w)+(50), (int)(alg_realsmith_dT0SWRkl0w)+(-4), (int)(alg_realsmith_dT0SWRkl0w)+(57))+(int)(alg_realsmith_dT0SWRkl0w)-(40))+alg_realsmith_dT0SWRkl0w)/*TAG1:END:alg_realsmith_dT0SWRkl0w*/ == 1) ? 0 : -22;
/*aft_stmt:17159*/
    /*bef_stmt:17204*/
/*bef_stmt:17204*/
if (/*TAG2:STA*/((int)(realsmith_zVuNp7aKpM((int)(fips_enabled_realsmith_dT0SWRkl0w)+(39), (int)(fips_enabled_realsmith_dT0SWRkl0w)+(68), (int)(fips_enabled_realsmith_dT0SWRkl0w)+(14))+(int)(fips_enabled_realsmith_dT0SWRkl0w)-(13))+fips_enabled_realsmith_dT0SWRkl0w)/*TAG2:END:fips_enabled_realsmith_dT0SWRkl0w*/ && /*TAG3:STA*/((int)(realsmith_pnSxbLi4Fz((int)(alg_realsmith_dT0SWRkl0w)+(-8), (int)(fips_enabled_realsmith_dT0SWRkl0w)+(65), (int)(fips_enabled_realsmith_dT0SWRkl0w)+(58))+(int)(fips_enabled_realsmith_dT0SWRkl0w)+(int)(alg_realsmith_dT0SWRkl0w)-(61))+ret_realsmith_dT0SWRkl0w)/*TAG3:END:ret_realsmith_dT0SWRkl0w*/ == -22)
        ret_realsmith_dT0SWRkl0w = 0;
/*aft_stmt:17204*/
/*aft_stmt:17204*/
    /*bef_stmt:17215*/
return /*TAG4:STA*/((int)(realsmith_SV1kqp2j1l((int)(ret_realsmith_dT0SWRkl0w)+(88), (int)(ret_realsmith_dT0SWRkl0w)+(32), (int)(ret_realsmith_dT0SWRkl0w)+(100))+(int)(ret_realsmith_dT0SWRkl0w)-(88))+ret_realsmith_dT0SWRkl0w)/*TAG4:END:ret_realsmith_dT0SWRkl0w*/;
/*aft_stmt:17215*/
}



#include "sys/ptrace.h"
#include "errno.h"
int realsmith_XQJAk2oOAa(int pid_realsmith_XQJAk2oOAa, unsigned long *regs_out_realsmith_XQJAk2oOAa) {
    if ((1) < 0)
        return -(*(__errno_location ()));
    return 0;
}
int realsmith_proxy_DftMEKMdNj(int p_0_tJMhe7OflH, unsigned long p_1_DmbqvbmNwe) {
unsigned long proxy_59JNpk5llW[15] = { 13, 44, 31, p_1_DmbqvbmNwe, 9, p_1_DmbqvbmNwe, p_1_DmbqvbmNwe, 51, p_1_DmbqvbmNwe, p_1_DmbqvbmNwe, 34, 18, 78, 4, 24 };
int proxy_ret_55S2pzfFXE = realsmith_XQJAk2oOAa(p_0_tJMhe7OflH, proxy_59JNpk5llW);
return proxy_ret_55S2pzfFXE;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_aIIIZgG7Tr(x) (x)
#define Tag2_realsmith_aIIIZgG7Tr(x) (x)
#define Tag3_realsmith_aIIIZgG7Tr(x) (x)
#define Tag4_realsmith_aIIIZgG7Tr(x) (x)
#include "stdlib.h"
int realsmith_aIIIZgG7Tr(int adc_chan_realsmith_aIIIZgG7Tr, int mask_realsmith_aIIIZgG7Tr) {
    int ret_realsmith_aIIIZgG7Tr = 0;
    /*bef_stmt:17147*/
if (Tag1_realsmith_aIIIZgG7Tr(/*int:17225:17225:17147:e*/adc_chan_realsmith_aIIIZgG7Tr) > 7)
        return -1;
/*aft_stmt:17147*/
    /*bef_stmt:17162*/
ret_realsmith_aIIIZgG7Tr = Tag2_realsmith_aIIIZgG7Tr(/*int:17225:17225:17162:e*/adc_chan_realsmith_aIIIZgG7Tr);
/*aft_stmt:17162*/
    ret_realsmith_aIIIZgG7Tr += 10;
    /*bef_stmt:17212*/
if (Tag3_realsmith_aIIIZgG7Tr(/*int:17225:17225:17212:e*/mask_realsmith_aIIIZgG7Tr) == 1) {
        ret_realsmith_aIIIZgG7Tr *= 2;
    }
/*aft_stmt:17212*/
    /*bef_stmt:17223*/
return Tag4_realsmith_aIIIZgG7Tr(/*int:17225:17225:17223:e*/ret_realsmith_aIIIZgG7Tr);
/*aft_stmt:17223*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_bPwuEC7Tom(x) (x)
#define Tag2_realsmith_bPwuEC7Tom(x) (x)
#define Tag3_realsmith_bPwuEC7Tom(x) (x)
#define Tag4_realsmith_bPwuEC7Tom(x) (x)
#define Tag5_realsmith_bPwuEC7Tom(x) (x)
#define Tag6_realsmith_bPwuEC7Tom(x) (x)
#define Tag7_realsmith_bPwuEC7Tom(x) (x)
#define Tag8_realsmith_bPwuEC7Tom(x) (x)
#define Tag9_realsmith_bPwuEC7Tom(x) (x)
#define Tag10_realsmith_bPwuEC7Tom(x) (x)
#define Tag11_realsmith_bPwuEC7Tom(x) (x)
#define Tag12_realsmith_bPwuEC7Tom(x) (x)
#include "stdlib.h"
int realsmith_bPwuEC7Tom(int link_state_realsmith_bPwuEC7Tom, int opmode_realsmith_bPwuEC7Tom, long entry_max_undec_sm_pwdb_realsmith_bPwuEC7Tom, long entry_min_undec_sm_pwdb_realsmith_bPwuEC7Tom) {
    long tmpentry_max_pwdb_realsmith_bPwuEC7Tom = 0, tmpentry_min_pwdb_realsmith_bPwuEC7Tom = 0xff;
    int MAC80211_LINKED_realsmith_bPwuEC7Tom = 1;
    int NL80211_IFTYPE_ADHOC_realsmith_bPwuEC7Tom = 2;
    int NL80211_IFTYPE_AP_realsmith_bPwuEC7Tom = 3;
    /*bef_stmt:17283*/
/*bef_stmt:17283*/
if (Tag1_realsmith_bPwuEC7Tom(/*int:17467:17467:17283:e*/link_state_realsmith_bPwuEC7Tom) != Tag2_realsmith_bPwuEC7Tom(/*int:17467:17467:17283:e*/MAC80211_LINKED_realsmith_bPwuEC7Tom))
        return 0;
/*aft_stmt:17283*/
/*aft_stmt:17283*/
    /*bef_stmt:17329*/
/*bef_stmt:17329*/
/*bef_stmt:17329*/
/*bef_stmt:17329*/
if (Tag3_realsmith_bPwuEC7Tom(/*int:17467:17467:17329:e*/opmode_realsmith_bPwuEC7Tom) == Tag4_realsmith_bPwuEC7Tom(/*int:17467:17467:17329:e*/NL80211_IFTYPE_ADHOC_realsmith_bPwuEC7Tom) || Tag5_realsmith_bPwuEC7Tom(/*int:17467:17467:17329:e*/opmode_realsmith_bPwuEC7Tom) == Tag6_realsmith_bPwuEC7Tom(/*int:17467:17467:17329:e*/NL80211_IFTYPE_AP_realsmith_bPwuEC7Tom)) {
    }
/*aft_stmt:17329*/
/*aft_stmt:17329*/
/*aft_stmt:17329*/
/*aft_stmt:17329*/
    /*bef_stmt:17381*/
/*bef_stmt:17381*/
if (Tag7_realsmith_bPwuEC7Tom(/*long:17467:17467:17381:e*/tmpentry_max_pwdb_realsmith_bPwuEC7Tom) != 0)
        entry_max_undec_sm_pwdb_realsmith_bPwuEC7Tom = Tag8_realsmith_bPwuEC7Tom(/*long:17467:17467:17381:e*/tmpentry_max_pwdb_realsmith_bPwuEC7Tom);
    else
        entry_max_undec_sm_pwdb_realsmith_bPwuEC7Tom = 0;
/*aft_stmt:17381*/
/*aft_stmt:17381*/
    /*bef_stmt:17438*/
/*bef_stmt:17438*/
if (Tag9_realsmith_bPwuEC7Tom(/*long:17467:17467:17438:e*/tmpentry_min_pwdb_realsmith_bPwuEC7Tom) != 0xff)
        entry_min_undec_sm_pwdb_realsmith_bPwuEC7Tom = Tag10_realsmith_bPwuEC7Tom(/*long:17467:17467:17438:e*/tmpentry_min_pwdb_realsmith_bPwuEC7Tom);
    else
        entry_min_undec_sm_pwdb_realsmith_bPwuEC7Tom = 0;
/*aft_stmt:17438*/
/*aft_stmt:17438*/
    /*bef_stmt:17465*/
/*bef_stmt:17465*/
return Tag11_realsmith_bPwuEC7Tom(/*long:17467:17467:17465:e*/entry_max_undec_sm_pwdb_realsmith_bPwuEC7Tom) + Tag12_realsmith_bPwuEC7Tom(/*long:17467:17467:17465:e*/entry_min_undec_sm_pwdb_realsmith_bPwuEC7Tom);
/*aft_stmt:17465*/
/*aft_stmt:17465*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_gY5yzvH1tw(x) (x)
#define Tag2_realsmith_gY5yzvH1tw(x) (x)
#define Tag3_realsmith_gY5yzvH1tw(x) (x)
#define Tag4_realsmith_gY5yzvH1tw(x) (x)
#include "stdlib.h"
int realsmith_gY5yzvH1tw(int qid_realsmith_gY5yzvH1tw, int rt2x00dev_flags_realsmith_gY5yzvH1tw, int queue_flags_realsmith_gY5yzvH1tw) {
    /*bef_stmt:17199*/
/*bef_stmt:17199*/
/*bef_stmt:17199*/
if (!(/*TAG1:STA*/((int)(realsmith_HthzxvTVEt((int)(rt2x00dev_flags_realsmith_gY5yzvH1tw)+(22), (int)(rt2x00dev_flags_realsmith_gY5yzvH1tw)+(36))+(int)(rt2x00dev_flags_realsmith_gY5yzvH1tw)-(38))+rt2x00dev_flags_realsmith_gY5yzvH1tw)/*TAG1:END:rt2x00dev_flags_realsmith_gY5yzvH1tw*/ & 1) ||
        !(/*TAG2:STA*/((int)(realsmith_5mKBnGz5Qi((int)(queue_flags_realsmith_gY5yzvH1tw)+(-26), (int)(queue_flags_realsmith_gY5yzvH1tw)+(24), (int)(queue_flags_realsmith_gY5yzvH1tw)+(20))+(int)(queue_flags_realsmith_gY5yzvH1tw)-(47))+queue_flags_realsmith_gY5yzvH1tw)/*TAG2:END:queue_flags_realsmith_gY5yzvH1tw*/ & 2) ||
        (/*TAG3:STA*/((int)(realsmith_lVgA98UQ6N((unsigned long)(queue_flags_realsmith_gY5yzvH1tw)+(49), (unsigned long)(queue_flags_realsmith_gY5yzvH1tw)+(53))+(int)(queue_flags_realsmith_gY5yzvH1tw)-(44))+queue_flags_realsmith_gY5yzvH1tw)/*TAG3:END:queue_flags_realsmith_gY5yzvH1tw*/ & 3)) {
        return 0;
    }
/*aft_stmt:17199*/
/*aft_stmt:17199*/
/*aft_stmt:17199*/
    /*bef_stmt:17210*/
switch (Tag4_realsmith_gY5yzvH1tw(/*int:17302:17302:17210:e*/qid_realsmith_gY5yzvH1tw)) {
    case 0:
    case 1:
    case 2:
    case 3:
        return 1;
    case 4:
        return 2;
    default:
        return 0;
    }
/*aft_stmt:17210*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_rNaOw7Aovr(x) (x)
#define Tag2_realsmith_rNaOw7Aovr(x) (x)
#define Tag3_realsmith_rNaOw7Aovr(x) (x)
#include "stdlib.h"
struct bsg_device_l4O8O1 {
    int ref_count_realsmith_rNaOw7Aovr;
    int queue_realsmith_rNaOw7Aovr;
    int dev_list_realsmith_rNaOw7Aovr;
};
int realsmith_rNaOw7Aovr(int ref_count_realsmith_rNaOw7Aovr, int queue_realsmith_rNaOw7Aovr, int dev_list_realsmith_rNaOw7Aovr) {
    struct bsg_device_l4O8O1 bd_realsmith_rNaOw7Aovr;
    /*bef_stmt:17223*/
bd_realsmith_rNaOw7Aovr.ref_count_realsmith_rNaOw7Aovr = /*TAG1:STA*/((int)(realsmith_proxy_9zfhbk5VMn((int)(ref_count_realsmith_rNaOw7Aovr)+(-37), (int)(ref_count_realsmith_rNaOw7Aovr)+(-40), (int)(ref_count_realsmith_rNaOw7Aovr)+(-45))+(int)(ref_count_realsmith_rNaOw7Aovr)-(41))+ref_count_realsmith_rNaOw7Aovr)/*TAG1:END:ref_count_realsmith_rNaOw7Aovr*/;
/*aft_stmt:17223*/
    /*bef_stmt:17257*/
bd_realsmith_rNaOw7Aovr.queue_realsmith_rNaOw7Aovr = /*TAG2:STA*/((int)(realsmith_uxFDhsnxf0((int)(queue_realsmith_rNaOw7Aovr)+(-12))+(int)(queue_realsmith_rNaOw7Aovr)-(63))+queue_realsmith_rNaOw7Aovr)/*TAG2:END:queue_realsmith_rNaOw7Aovr*/;
/*aft_stmt:17257*/
    /*bef_stmt:17278*/
bd_realsmith_rNaOw7Aovr.dev_list_realsmith_rNaOw7Aovr = /*TAG3:STA*/((int)(realsmith_p40Cs2GxbW((int)(dev_list_realsmith_rNaOw7Aovr)+(42), (int)(dev_list_realsmith_rNaOw7Aovr)+(49), (int)(dev_list_realsmith_rNaOw7Aovr)+(36), (int)(dev_list_realsmith_rNaOw7Aovr)+(-14), (int)(dev_list_realsmith_rNaOw7Aovr)+(-21))+(int)(dev_list_realsmith_rNaOw7Aovr)-(24))+dev_list_realsmith_rNaOw7Aovr)/*TAG3:END:dev_list_realsmith_rNaOw7Aovr*/;
/*aft_stmt:17278*/
    if (--bd_realsmith_rNaOw7Aovr.ref_count_realsmith_rNaOw7Aovr > 0) {
        return 0;
    }
    bd_realsmith_rNaOw7Aovr.dev_list_realsmith_rNaOw7Aovr = 0;
    bd_realsmith_rNaOw7Aovr.queue_realsmith_rNaOw7Aovr = 0;
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_H4pXWZCYad(x) (x)
#define Tag2_realsmith_H4pXWZCYad(x) (x)
#define Tag3_realsmith_H4pXWZCYad(x) (x)
#define Tag4_realsmith_H4pXWZCYad(x) (x)
#define Tag5_realsmith_H4pXWZCYad(x) (x)
#define Tag6_realsmith_H4pXWZCYad(x) (x)
#include "stdlib.h"
int realsmith_H4pXWZCYad(int ahw_realsmith_H4pXWZCYad, int mbx_rsp_status_realsmith_H4pXWZCYad) {
    unsigned long flags_realsmith_H4pXWZCYad;
    int resp_realsmith_H4pXWZCYad, event_realsmith_H4pXWZCYad, rsp_status_realsmith_H4pXWZCYad = 3;
    /*bef_stmt:17201*/
resp_realsmith_H4pXWZCYad = (Tag1_realsmith_H4pXWZCYad(/*int:17313:17313:17201:e*/ahw_realsmith_H4pXWZCYad) + 0);
/*aft_stmt:17201*/
    /*bef_stmt:17303*/
if (Tag2_realsmith_H4pXWZCYad(/*int:17313:17313:17303:e*/resp_realsmith_H4pXWZCYad) & 2) {
        /*bef_stmt:17231*/
event_realsmith_H4pXWZCYad = Tag3_realsmith_H4pXWZCYad(/*int:17313:17313:17231:e*/ahw_realsmith_H4pXWZCYad);
/*aft_stmt:17231*/
        /*bef_stmt:17293*/
if (Tag4_realsmith_H4pXWZCYad(/*int:17313:17313:17293:e*/event_realsmith_H4pXWZCYad) & 1) {
            return 1;
        } else {
            /*bef_stmt:17286*/
/*bef_stmt:17286*/
if (Tag5_realsmith_H4pXWZCYad(/*int:17313:17313:17286:e*/mbx_rsp_status_realsmith_H4pXWZCYad) != Tag6_realsmith_H4pXWZCYad(/*int:17313:17313:17286:e*/rsp_status_realsmith_H4pXWZCYad)) {
                return 2;
            }
/*aft_stmt:17286*/
/*aft_stmt:17286*/
        }
/*aft_stmt:17293*/
    }
/*aft_stmt:17303*/
    return 0;
}



#include "stdbool.h"
struct dc_state_FfAwqP {
    int stream_count_realsmith_P3G3dCei9m;
    int stream_status_realsmith_P3G3dCei9m[2]; // assuming max 2 planes per stream
    int streams_realsmith_P3G3dCei9m[2]; // assuming max 2 streams
};
int realsmith_P3G3dCei9m(int stream_count_realsmith_P3G3dCei9m, int plane_count_0_realsmith_P3G3dCei9m, int plane_count_1_realsmith_P3G3dCei9m,
                                  int format_0_realsmith_P3G3dCei9m, int width_0_realsmith_P3G3dCei9m, int height_0_realsmith_P3G3dCei9m,
                                  int format_1_realsmith_P3G3dCei9m, int width_1_realsmith_P3G3dCei9m, int height_1_realsmith_P3G3dCei9m,
                                  int pixel_encoding_0_realsmith_P3G3dCei9m, int pixel_encoding_1_realsmith_P3G3dCei9m) {
    struct dc_state_FfAwqP context_realsmith_P3G3dCei9m;
    context_realsmith_P3G3dCei9m.stream_count_realsmith_P3G3dCei9m = stream_count_realsmith_P3G3dCei9m;
    context_realsmith_P3G3dCei9m.stream_status_realsmith_P3G3dCei9m[0] = plane_count_0_realsmith_P3G3dCei9m;
    context_realsmith_P3G3dCei9m.stream_status_realsmith_P3G3dCei9m[1] = plane_count_1_realsmith_P3G3dCei9m;
    for (int i_realsmith_P3G3dCei9m = 0; i_realsmith_P3G3dCei9m < context_realsmith_P3G3dCei9m.stream_count_realsmith_P3G3dCei9m; i_realsmith_P3G3dCei9m++) {
        int plane_count_realsmith_P3G3dCei9m = context_realsmith_P3G3dCei9m.stream_status_realsmith_P3G3dCei9m[i_realsmith_P3G3dCei9m];
        if (plane_count_realsmith_P3G3dCei9m == 0)
            continue;
        if (plane_count_realsmith_P3G3dCei9m > 2)
            return 0;
        for (int j_realsmith_P3G3dCei9m = 0; j_realsmith_P3G3dCei9m < plane_count_realsmith_P3G3dCei9m; j_realsmith_P3G3dCei9m++) {
            int format_realsmith_P3G3dCei9m = (i_realsmith_P3G3dCei9m == 0) ? format_0_realsmith_P3G3dCei9m : format_1_realsmith_P3G3dCei9m;
            int width_realsmith_P3G3dCei9m = (i_realsmith_P3G3dCei9m == 0) ? width_0_realsmith_P3G3dCei9m : width_1_realsmith_P3G3dCei9m;
            int height_realsmith_P3G3dCei9m = (i_realsmith_P3G3dCei9m == 0) ? height_0_realsmith_P3G3dCei9m : height_1_realsmith_P3G3dCei9m;
            int pixel_encoding_realsmith_P3G3dCei9m = (i_realsmith_P3G3dCei9m == 0) ? pixel_encoding_0_realsmith_P3G3dCei9m : pixel_encoding_1_realsmith_P3G3dCei9m;
            if (format_realsmith_P3G3dCei9m >= 1) {
                if (width_realsmith_P3G3dCei9m > 1920 || height_realsmith_P3G3dCei9m > 1080)
                    return 0;
                if (j_realsmith_P3G3dCei9m == 0)
                    return 0;
                if (pixel_encoding_realsmith_P3G3dCei9m != 0)
                    return 0;
            }
        }
    }
    return 1;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ZMJHJH9Uo7(x) (x)
#define Tag2_realsmith_ZMJHJH9Uo7(x) (x)
#define Tag3_realsmith_ZMJHJH9Uo7(x) (x)
#define Tag4_realsmith_ZMJHJH9Uo7(x) (x)
#define Tag5_realsmith_ZMJHJH9Uo7(x) (x)
#define Tag6_realsmith_ZMJHJH9Uo7(x) (x)
#define Tag7_realsmith_ZMJHJH9Uo7(x) (x)
#define Tag8_realsmith_ZMJHJH9Uo7(x) (x)
#include "stdint.h"
int realsmith_ZMJHJH9Uo7(int beacon_int_realsmith_ZMJHJH9Uo7, int listen_interval_realsmith_ZMJHJH9Uo7, int flags_realsmith_ZMJHJH9Uo7) {
    /*bef_stmt:2054*/
int state_realsmith_ZMJHJH9Uo7 = (Tag1_realsmith_ZMJHJH9Uo7(/*int:2441:2441:2054:e*/flags_realsmith_ZMJHJH9Uo7) & 1) ? 1 : 0;
/*aft_stmt:2054*/
    unsigned int reg_realsmith_ZMJHJH9Uo7;
    /*bef_stmt:2426*/
if (Tag2_realsmith_ZMJHJH9Uo7(/*int:2441:2441:2426:e*/state_realsmith_ZMJHJH9Uo7) == 1) {
        reg_realsmith_ZMJHJH9Uo7 = 0;
        /*bef_stmt:2161*/
/*bef_stmt:2161*/
reg_realsmith_ZMJHJH9Uo7 = (Tag3_realsmith_ZMJHJH9Uo7(/*unsigned int:2441:2441:2161:e*/reg_realsmith_ZMJHJH9Uo7) & ~0xFF) | (Tag4_realsmith_ZMJHJH9Uo7(/*int:2441:2441:2161:e*/beacon_int_realsmith_ZMJHJH9Uo7) - 10);
/*aft_stmt:2161*/
/*aft_stmt:2161*/
        /*bef_stmt:2228*/
/*bef_stmt:2228*/
reg_realsmith_ZMJHJH9Uo7 = (Tag5_realsmith_ZMJHJH9Uo7(/*unsigned int:2441:2441:2228:e*/reg_realsmith_ZMJHJH9Uo7) & ~0xFF00) | (Tag6_realsmith_ZMJHJH9Uo7(/*int:2441:2441:2228:e*/listen_interval_realsmith_ZMJHJH9Uo7) - 1 << 8);
/*aft_stmt:2228*/
/*aft_stmt:2228*/
        /*bef_stmt:2284*/
reg_realsmith_ZMJHJH9Uo7 = (Tag7_realsmith_ZMJHJH9Uo7(/*unsigned int:2441:2441:2284:e*/reg_realsmith_ZMJHJH9Uo7) & ~0xFF0000) | (5 << 16);
/*aft_stmt:2284*/
        reg_realsmith_ZMJHJH9Uo7 &= ~0xFF000000;
        reg_realsmith_ZMJHJH9Uo7 |= 0xFF000000;
    } else {
        reg_realsmith_ZMJHJH9Uo7 = 0;
        reg_realsmith_ZMJHJH9Uo7 &= ~0xFF;
        reg_realsmith_ZMJHJH9Uo7 &= ~0xFF00;
        reg_realsmith_ZMJHJH9Uo7 &= ~0xFF000000;
        reg_realsmith_ZMJHJH9Uo7 &= ~0xFF0000;
    }
/*aft_stmt:2426*/
    /*bef_stmt:2439*/
return Tag8_realsmith_ZMJHJH9Uo7(/*int:2441:2441:2439:e*/state_realsmith_ZMJHJH9Uo7);
/*aft_stmt:2439*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_U7YAEztEPM(x) (x)
#define Tag2_realsmith_U7YAEztEPM(x) (x)
#define Tag3_realsmith_U7YAEztEPM(x) (x)
#include "stdlib.h"
struct irqc_priv_mZFByn {
    int wakeup_path_realsmith_U7YAEztEPM;
    struct {
        int requested_irq_realsmith_U7YAEztEPM;
    } irq_realsmith_U7YAEztEPM[256]; // Assuming a maximum of 256 IRQs for this example
};
int realsmith_U7YAEztEPM(int wakeup_path_realsmith_U7YAEztEPM, int requested_irq_realsmith_U7YAEztEPM, int hw_irq_realsmith_U7YAEztEPM, unsigned int on_realsmith_U7YAEztEPM) {
    struct irqc_priv_mZFByn p_realsmith_U7YAEztEPM;
    /*bef_stmt:17307*/
p_realsmith_U7YAEztEPM.wakeup_path_realsmith_U7YAEztEPM = Tag1_realsmith_U7YAEztEPM(/*int:17432:17432:17307:e*/wakeup_path_realsmith_U7YAEztEPM);
/*aft_stmt:17307*/
    /*bef_stmt:17372*/
p_realsmith_U7YAEztEPM.irq_realsmith_U7YAEztEPM[hw_irq_realsmith_U7YAEztEPM].requested_irq_realsmith_U7YAEztEPM = Tag2_realsmith_U7YAEztEPM(/*int:17432:17432:17372:e*/requested_irq_realsmith_U7YAEztEPM);
/*aft_stmt:17372*/
    /*bef_stmt:17420*/
if (Tag3_realsmith_U7YAEztEPM(/*unsigned int:17432:17432:17420:e*/on_realsmith_U7YAEztEPM)) {
        p_realsmith_U7YAEztEPM.wakeup_path_realsmith_U7YAEztEPM++;
    } else {
        p_realsmith_U7YAEztEPM.wakeup_path_realsmith_U7YAEztEPM--;
    }
/*aft_stmt:17420*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_AlB2hOCN0w(x) (x)
#define Tag2_realsmith_AlB2hOCN0w(x) (x)
#define Tag3_realsmith_AlB2hOCN0w(x) (x)
#define Tag4_realsmith_AlB2hOCN0w(x) (x)
#define Tag5_realsmith_AlB2hOCN0w(x) (x)
#define Tag6_realsmith_AlB2hOCN0w(x) (x)
#define Tag7_realsmith_AlB2hOCN0w(x) (x)
#define Tag8_realsmith_AlB2hOCN0w(x) (x)
#define Tag9_realsmith_AlB2hOCN0w(x) (x)
#define Tag10_realsmith_AlB2hOCN0w(x) (x)
#define Tag11_realsmith_AlB2hOCN0w(x) (x)
#define Tag12_realsmith_AlB2hOCN0w(x) (x)
#define Tag13_realsmith_AlB2hOCN0w(x) (x)
#define Tag14_realsmith_AlB2hOCN0w(x) (x)
#define Tag15_realsmith_AlB2hOCN0w(x) (x)
#define Tag16_realsmith_AlB2hOCN0w(x) (x)
#define Tag17_realsmith_AlB2hOCN0w(x) (x)
#include "stdlib.h"
int realsmith_AlB2hOCN0w(int rdev_realsmith_AlB2hOCN0w, int class_realsmith_AlB2hOCN0w, int class2_realsmith_AlB2hOCN0w, int smu_uvd_hs_realsmith_AlB2hOCN0w, int ats_rlp_0_realsmith_AlB2hOCN0w, int ats_rmp_0_realsmith_AlB2hOCN0w, int ats_lhp_0_realsmith_AlB2hOCN0w, int ats_lmp_0_realsmith_AlB2hOCN0w, int ats_rlp_1_realsmith_AlB2hOCN0w, int ats_rmp_1_realsmith_AlB2hOCN0w, int ats_lhp_1_realsmith_AlB2hOCN0w, int ats_lmp_1_realsmith_AlB2hOCN0w) {
    int rlp_realsmith_AlB2hOCN0w, rmp_realsmith_AlB2hOCN0w, lhp_realsmith_AlB2hOCN0w, lmp_realsmith_AlB2hOCN0w;
    int idx_realsmith_AlB2hOCN0w = 0;
    /*bef_stmt:17431*/
/*bef_stmt:17431*/
if (/*TAG1:STA*/((int)(realsmith_h1gjviBSSv((unsigned int)(class_realsmith_AlB2hOCN0w)+(82), (unsigned int)(class_realsmith_AlB2hOCN0w)+(19), (int)(class_realsmith_AlB2hOCN0w)+(11), (unsigned int)(class_realsmith_AlB2hOCN0w)+(16), (unsigned int)(class_realsmith_AlB2hOCN0w)+(40), (unsigned int)(class_realsmith_AlB2hOCN0w)+(85), (unsigned int)(class_realsmith_AlB2hOCN0w)+(60), (unsigned int)(class_realsmith_AlB2hOCN0w)+(56), (unsigned int)(class_realsmith_AlB2hOCN0w)+(-4))+(int)(class_realsmith_AlB2hOCN0w)-(13))+class_realsmith_AlB2hOCN0w)/*TAG1:END:class_realsmith_AlB2hOCN0w*/ == 1 && /*TAG2:STA*/((int)(realsmith_proxy_ycGSZLx2a4((int)(class2_realsmith_AlB2hOCN0w)+(-61), (int)(class2_realsmith_AlB2hOCN0w)+(-33), (int)(class2_realsmith_AlB2hOCN0w)+(-180))+(int)(class2_realsmith_AlB2hOCN0w)-(91))+class2_realsmith_AlB2hOCN0w)/*TAG2:END:class2_realsmith_AlB2hOCN0w*/ == 1)
        idx_realsmith_AlB2hOCN0w = 1;
/*aft_stmt:17431*/
/*aft_stmt:17431*/
    /*bef_stmt:17678*/
/*bef_stmt:17678*/
if ((/*TAG3:STA*/((int)(realsmith_proxy_lfoYOmsidE((int)(idx_realsmith_AlB2hOCN0w)+(81), (int)(idx_realsmith_AlB2hOCN0w)+(51), (int)(idx_realsmith_AlB2hOCN0w)+(60), (int)(idx_realsmith_AlB2hOCN0w)+(32))+(int)(idx_realsmith_AlB2hOCN0w)-(0))+idx_realsmith_AlB2hOCN0w)/*TAG3:END:idx_realsmith_AlB2hOCN0w*/ == 1) && !/*TAG4:STA*/((int)(realsmith_07Cm296nY0((int)(smu_uvd_hs_realsmith_AlB2hOCN0w)+(42), (int)(smu_uvd_hs_realsmith_AlB2hOCN0w)+(54))+(int)(smu_uvd_hs_realsmith_AlB2hOCN0w)-(146))+smu_uvd_hs_realsmith_AlB2hOCN0w)/*TAG4:END:smu_uvd_hs_realsmith_AlB2hOCN0w*/) {
        rlp_realsmith_AlB2hOCN0w = 10;
        rmp_realsmith_AlB2hOCN0w = 100;
        lhp_realsmith_AlB2hOCN0w = 100;
        lmp_realsmith_AlB2hOCN0w = 10;
    } else {
        /*bef_stmt:17669*/
if (/*TAG5:STA*/((int)(realsmith_fotmvfPdDV((int)(idx_realsmith_AlB2hOCN0w)+(19), (int)(idx_realsmith_AlB2hOCN0w)+(88), (unsigned int)(idx_realsmith_AlB2hOCN0w)+(100))+(int)(idx_realsmith_AlB2hOCN0w)-(0))+idx_realsmith_AlB2hOCN0w)/*TAG5:END:idx_realsmith_AlB2hOCN0w*/ == 0) {
            /*bef_stmt:17548*/
rlp_realsmith_AlB2hOCN0w = /*TAG6:STA*/((int)(realsmith_IcE5UVSvwb((int)(ats_rlp_0_realsmith_AlB2hOCN0w)+(1), (int)(ats_rlp_0_realsmith_AlB2hOCN0w)+(48))+(int)(ats_rlp_0_realsmith_AlB2hOCN0w)-(44))+ats_rlp_0_realsmith_AlB2hOCN0w)/*TAG6:END:ats_rlp_0_realsmith_AlB2hOCN0w*/;
/*aft_stmt:17548*/
            /*bef_stmt:17563*/
rmp_realsmith_AlB2hOCN0w = /*TAG7:STA*/((int)(realsmith_1qwTITyzx3((int)(ats_rmp_0_realsmith_AlB2hOCN0w)+(-48))+(int)(ats_rmp_0_realsmith_AlB2hOCN0w)-(94))+ats_rmp_0_realsmith_AlB2hOCN0w)/*TAG7:END:ats_rmp_0_realsmith_AlB2hOCN0w*/;
/*aft_stmt:17563*/
            /*bef_stmt:17578*/
lhp_realsmith_AlB2hOCN0w = /*TAG8:STA*/((int)(realsmith_H00CfBBMhx((unsigned int)(ats_lhp_0_realsmith_AlB2hOCN0w)+(-29), (unsigned int)(ats_lhp_0_realsmith_AlB2hOCN0w)+(8), (int)(ats_lhp_0_realsmith_AlB2hOCN0w)+(-11))+(unsigned int)(ats_lhp_0_realsmith_AlB2hOCN0w)-(536870990))+ats_lhp_0_realsmith_AlB2hOCN0w)/*TAG8:END:ats_lhp_0_realsmith_AlB2hOCN0w*/;
/*aft_stmt:17578*/
            /*bef_stmt:17593*/
lmp_realsmith_AlB2hOCN0w = /*TAG9:STA*/((int)(realsmith_proxy_lu5nIToCdD((int)(ats_lmp_0_realsmith_AlB2hOCN0w)+(-32), (int)(ats_lmp_0_realsmith_AlB2hOCN0w)+(-54), (int)(ats_lmp_0_realsmith_AlB2hOCN0w)+(-96), (int)(ats_lmp_0_realsmith_AlB2hOCN0w)+(-72))+(int)(ats_lmp_0_realsmith_AlB2hOCN0w)-(96))+ats_lmp_0_realsmith_AlB2hOCN0w)/*TAG9:END:ats_lmp_0_realsmith_AlB2hOCN0w*/;
/*aft_stmt:17593*/
        } else {
            /*bef_stmt:17614*/
rlp_realsmith_AlB2hOCN0w = Tag10_realsmith_AlB2hOCN0w(/*int:17726:17726:17614:e*/ats_rlp_1_realsmith_AlB2hOCN0w);
/*aft_stmt:17614*/
            /*bef_stmt:17629*/
rmp_realsmith_AlB2hOCN0w = Tag11_realsmith_AlB2hOCN0w(/*int:17726:17726:17629:e*/ats_rmp_1_realsmith_AlB2hOCN0w);
/*aft_stmt:17629*/
            /*bef_stmt:17644*/
lhp_realsmith_AlB2hOCN0w = Tag12_realsmith_AlB2hOCN0w(/*int:17726:17726:17644:e*/ats_lhp_1_realsmith_AlB2hOCN0w);
/*aft_stmt:17644*/
            /*bef_stmt:17659*/
lmp_realsmith_AlB2hOCN0w = Tag13_realsmith_AlB2hOCN0w(/*int:17726:17726:17659:e*/ats_lmp_1_realsmith_AlB2hOCN0w);
/*aft_stmt:17659*/
        }
/*aft_stmt:17669*/
    }
/*aft_stmt:17678*/
/*aft_stmt:17678*/
    /*bef_stmt:17724*/
/*bef_stmt:17724*/
/*bef_stmt:17724*/
/*bef_stmt:17724*/
return /*TAG14:STA*/((int)(realsmith_proxy_97irjrdWks((int)(rlp_realsmith_AlB2hOCN0w)+(-42), (int)(rlp_realsmith_AlB2hOCN0w)+(-41), (int)(rlp_realsmith_AlB2hOCN0w)+(-46))+(int)(rlp_realsmith_AlB2hOCN0w)-(48))+rlp_realsmith_AlB2hOCN0w)/*TAG14:END:rlp_realsmith_AlB2hOCN0w*/ + /*TAG15:STA*/((int)(realsmith_6QlB7gPs8J((int)(rmp_realsmith_AlB2hOCN0w)+(-93))+(int)(rmp_realsmith_AlB2hOCN0w)-(95))+rmp_realsmith_AlB2hOCN0w)/*TAG15:END:rmp_realsmith_AlB2hOCN0w*/ + /*TAG16:STA*/((int)(realsmith_proxy_3UI3d4GJU2((int)(lhp_realsmith_AlB2hOCN0w)+(-90), (int)(lhp_realsmith_AlB2hOCN0w)+(-83), (int)(lhp_realsmith_AlB2hOCN0w)+(-86), (int)(lhp_realsmith_AlB2hOCN0w)+(-84), (int)(lhp_realsmith_AlB2hOCN0w)+(-87), (int)(lhp_realsmith_AlB2hOCN0w)+(-86))+(int)(lhp_realsmith_AlB2hOCN0w)-(88))+lhp_realsmith_AlB2hOCN0w)/*TAG16:END:lhp_realsmith_AlB2hOCN0w*/ + /*TAG17:STA*/((int)(realsmith_qszvgpXsvn((int)(lmp_realsmith_AlB2hOCN0w)+(-43))+(int)(lmp_realsmith_AlB2hOCN0w)-(97))+lmp_realsmith_AlB2hOCN0w)/*TAG17:END:lmp_realsmith_AlB2hOCN0w*/;
/*aft_stmt:17724*/
/*aft_stmt:17724*/
/*aft_stmt:17724*/
/*aft_stmt:17724*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_egI1crMkgS(x) (x)
#define Tag2_realsmith_egI1crMkgS(x) (x)
#define Tag3_realsmith_egI1crMkgS(x) (x)
#define Tag4_realsmith_egI1crMkgS(x) (x)
#include "stdint.h"
signed long int realsmith_egI1crMkgS(signed long int x_realsmith_egI1crMkgS) {
    int i_realsmith_egI1crMkgS;
    /*bef_stmt:2010*/
if (Tag1_realsmith_egI1crMkgS(/*long:2095:2095:2010:e*/x_realsmith_egI1crMkgS) <= 0) return 0;
/*aft_stmt:2010*/
    /*bef_stmt:2068*/
for (i_realsmith_egI1crMkgS = 0; Tag2_realsmith_egI1crMkgS(/*long:2095:2095:2068:e*/x_realsmith_egI1crMkgS) != 1; i_realsmith_egI1crMkgS++)
        x_realsmith_egI1crMkgS >>= 1;
/*aft_stmt:2068*/
    /*bef_stmt:2093*/
/*bef_stmt:2093*/
return Tag3_realsmith_egI1crMkgS(/*long:2095:2095:2093:e*/x_realsmith_egI1crMkgS) << Tag4_realsmith_egI1crMkgS(/*int:2095:2095:2093:e*/i_realsmith_egI1crMkgS);
/*aft_stmt:2093*/
/*aft_stmt:2093*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_wp9c4P5UmD(x) (x)
#define Tag2_realsmith_wp9c4P5UmD(x) (x)
#include "stdlib.h"
int realsmith_wp9c4P5UmD(unsigned short mode_realsmith_wp9c4P5UmD) {
    /*bef_stmt:17104*/
unsigned short xt_mode_realsmith_wp9c4P5UmD = /*TAG1:STA*/((unsigned short)(realsmith_kV0TOhr7pg((int)(mode_realsmith_wp9c4P5UmD)+(-59), (int)(mode_realsmith_wp9c4P5UmD)+(-74))+(int)(mode_realsmith_wp9c4P5UmD)-(97))+mode_realsmith_wp9c4P5UmD)/*TAG1:END:mode_realsmith_wp9c4P5UmD*/;
/*aft_stmt:17104*/
    /*bef_stmt:17117*/
switch (/*TAG2:STA*/((unsigned short)(realsmith_Kt8muOSp10((int)(xt_mode_realsmith_wp9c4P5UmD)+(-95))+(int)(xt_mode_realsmith_wp9c4P5UmD)-(100))+xt_mode_realsmith_wp9c4P5UmD)/*TAG2:END:xt_mode_realsmith_wp9c4P5UmD*/) {
        case 129:
            break;
        case 128:
            break;
        default:
        case 130:
            break;
        case 131:
            break;
    }
/*aft_stmt:17117*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_9Vm7HSSkk4(x) (x)
#include "stdlib.h"
struct {
    struct {
        int config_params_realsmith_9Vm7HSSkk4;
    } bayer_realsmith_9Vm7HSSkk4;
} isif_cfg_realsmith_9Vm7HSSkk4;
int realsmith_9Vm7HSSkk4(int config_params_realsmith_9Vm7HSSkk4) {
    /*bef_stmt:17211*/
isif_cfg_realsmith_9Vm7HSSkk4.bayer_realsmith_9Vm7HSSkk4.config_params_realsmith_9Vm7HSSkk4 = /*TAG1:STA*/((int)(realsmith_IN4gRaIB1H((int)(config_params_realsmith_9Vm7HSSkk4)+(28))+(int)(config_params_realsmith_9Vm7HSSkk4)-(43))+config_params_realsmith_9Vm7HSSkk4)/*TAG1:END:config_params_realsmith_9Vm7HSSkk4*/;
/*aft_stmt:17211*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_CgnsBFq1xm(x) (x)
#define Tag2_realsmith_CgnsBFq1xm(x) (x)
#define Tag3_realsmith_CgnsBFq1xm(x) (x)
#include "stdint.h"
int realsmith_CgnsBFq1xm(int mixer_val_realsmith_CgnsBFq1xm, int enable_realsmith_CgnsBFq1xm) {
    /*bef_stmt:2009*/
unsigned int val_realsmith_CgnsBFq1xm = Tag1_realsmith_CgnsBFq1xm(/*int:2066:2066:2009:e*/mixer_val_realsmith_CgnsBFq1xm);
/*aft_stmt:2009*/
    val_realsmith_CgnsBFq1xm &= ~1;
    /*bef_stmt:2048*/
val_realsmith_CgnsBFq1xm |= Tag2_realsmith_CgnsBFq1xm(/*int:2066:2066:2048:e*/enable_realsmith_CgnsBFq1xm);
/*aft_stmt:2048*/
    /*bef_stmt:2064*/
return Tag3_realsmith_CgnsBFq1xm(/*unsigned int:2066:2066:2064:e*/val_realsmith_CgnsBFq1xm);
/*aft_stmt:2064*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_eabivdzatq(x) (x)
#define Tag2_realsmith_eabivdzatq(x) (x)
#define Tag3_realsmith_eabivdzatq(x) (x)
#define Tag4_realsmith_eabivdzatq(x) (x)
#define Tag5_realsmith_eabivdzatq(x) (x)
#define Tag6_realsmith_eabivdzatq(x) (x)
#include "stdlib.h"
int realsmith_eabivdzatq(int inputSize_realsmith_eabivdzatq, int maxOutputSize_realsmith_eabivdzatq) {
    /*bef_stmt:17135*/
int LZ4_compressBound_realsmith_eabivdzatq = (Tag1_realsmith_eabivdzatq(/*int:17226:17226:17135:e*/inputSize_realsmith_eabivdzatq) + 16);
/*aft_stmt:17135*/
    int result_realsmith_eabivdzatq;
    /*bef_stmt:17211*/
/*bef_stmt:17211*/
if (Tag2_realsmith_eabivdzatq(/*int:17226:17226:17211:e*/maxOutputSize_realsmith_eabivdzatq) < Tag3_realsmith_eabivdzatq(/*int:17226:17226:17211:e*/LZ4_compressBound_realsmith_eabivdzatq)) {
        /*bef_stmt:17186*/
result_realsmith_eabivdzatq = Tag4_realsmith_eabivdzatq(/*int:17226:17226:17186:e*/maxOutputSize_realsmith_eabivdzatq);
/*aft_stmt:17186*/
    } else {
        /*bef_stmt:17204*/
result_realsmith_eabivdzatq = Tag5_realsmith_eabivdzatq(/*int:17226:17226:17204:e*/inputSize_realsmith_eabivdzatq);
/*aft_stmt:17204*/
    }
/*aft_stmt:17211*/
/*aft_stmt:17211*/
    /*bef_stmt:17224*/
return Tag6_realsmith_eabivdzatq(/*int:17226:17226:17224:e*/result_realsmith_eabivdzatq);
/*aft_stmt:17224*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Gn2GFO2yyw(x) (x)
#define Tag2_realsmith_Gn2GFO2yyw(x) (x)
#define Tag3_realsmith_Gn2GFO2yyw(x) (x)
#define Tag4_realsmith_Gn2GFO2yyw(x) (x)
#define Tag5_realsmith_Gn2GFO2yyw(x) (x)
#include "stdint.h"
int realsmith_Gn2GFO2yyw(unsigned int iobase_realsmith_Gn2GFO2yyw, unsigned int irq_realsmith_Gn2GFO2yyw, unsigned int reason_realsmith_Gn2GFO2yyw) {
    /*bef_stmt:2025*/
unsigned int status_realsmith_Gn2GFO2yyw = Tag1_realsmith_Gn2GFO2yyw(/*unsigned int:2127:2127:2025:e*/reason_realsmith_Gn2GFO2yyw);
/*aft_stmt:2025*/
    /*bef_stmt:2051*/
unsigned int write_value_realsmith_Gn2GFO2yyw = Tag2_realsmith_Gn2GFO2yyw(/*unsigned int:2127:2127:2051:e*/status_realsmith_Gn2GFO2yyw);
/*aft_stmt:2051*/
    /*bef_stmt:2085*/
if (!(Tag3_realsmith_Gn2GFO2yyw(/*unsigned int:2127:2127:2085:e*/status_realsmith_Gn2GFO2yyw) & 0x1))
        return 0;
/*aft_stmt:2085*/
    /*bef_stmt:2112*/
unsigned int last_result_realsmith_Gn2GFO2yyw = Tag4_realsmith_Gn2GFO2yyw(/*unsigned int:2127:2127:2112:e*/status_realsmith_Gn2GFO2yyw);
/*aft_stmt:2112*/
    /*bef_stmt:2125*/
return Tag5_realsmith_Gn2GFO2yyw(/*unsigned int:2127:2127:2125:e*/last_result_realsmith_Gn2GFO2yyw);
/*aft_stmt:2125*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_I3zvodZftY(x) (x)
#define Tag2_realsmith_I3zvodZftY(x) (x)
#define Tag3_realsmith_I3zvodZftY(x) (x)
#define Tag4_realsmith_I3zvodZftY(x) (x)
#define Tag5_realsmith_I3zvodZftY(x) (x)
#define Tag6_realsmith_I3zvodZftY(x) (x)
#define Tag7_realsmith_I3zvodZftY(x) (x)
#include "stdlib.h"
struct intel_sst_drv_qAMfsj {
    int pci_realsmith_I3zvodZftY;
};
int realsmith_I3zvodZftY(int pci_realsmith_I3zvodZftY, int sst_drv_ctx_pci_realsmith_I3zvodZftY) {
    struct intel_sst_drv_qAMfsj sst_drv_ctx_realsmith_I3zvodZftY;
    /*bef_stmt:17177*/
sst_drv_ctx_realsmith_I3zvodZftY.pci_realsmith_I3zvodZftY = Tag1_realsmith_I3zvodZftY(/*int:17338:17338:17177:e*/sst_drv_ctx_pci_realsmith_I3zvodZftY);
/*aft_stmt:17177*/
    int cleanup_status_realsmith_I3zvodZftY = 0;
    /*bef_stmt:17244*/
int dev_put_status_realsmith_I3zvodZftY = Tag2_realsmith_I3zvodZftY(/*int:17338:17338:17244:e*/sst_drv_ctx_realsmith_I3zvodZftY.pci_realsmith_I3zvodZftY);
/*aft_stmt:17244*/
    /*bef_stmt:17270*/
int release_status_realsmith_I3zvodZftY = Tag3_realsmith_I3zvodZftY(/*int:17338:17338:17270:e*/pci_realsmith_I3zvodZftY);
/*aft_stmt:17270*/
    int set_drvdata_status_realsmith_I3zvodZftY = 0;
    /*bef_stmt:17336*/
/*bef_stmt:17336*/
/*bef_stmt:17336*/
/*bef_stmt:17336*/
return Tag4_realsmith_I3zvodZftY(/*int:17338:17338:17336:e*/cleanup_status_realsmith_I3zvodZftY) + Tag5_realsmith_I3zvodZftY(/*int:17338:17338:17336:e*/dev_put_status_realsmith_I3zvodZftY) + Tag6_realsmith_I3zvodZftY(/*int:17338:17338:17336:e*/release_status_realsmith_I3zvodZftY) + Tag7_realsmith_I3zvodZftY(/*int:17338:17338:17336:e*/set_drvdata_status_realsmith_I3zvodZftY);
/*aft_stmt:17336*/
/*aft_stmt:17336*/
/*aft_stmt:17336*/
/*aft_stmt:17336*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_dFb1S2i1H2(x) (x)
#define Tag2_realsmith_dFb1S2i1H2(x) (x)
#define Tag3_realsmith_dFb1S2i1H2(x) (x)
#define Tag4_realsmith_dFb1S2i1H2(x) (x)
#define Tag5_realsmith_dFb1S2i1H2(x) (x)
#define Tag6_realsmith_dFb1S2i1H2(x) (x)
#define Tag7_realsmith_dFb1S2i1H2(x) (x)
#define Tag8_realsmith_dFb1S2i1H2(x) (x)
#include "stdbool.h"
unsigned realsmith_dFb1S2i1H2(unsigned hs_max_dtr_realsmith_dFb1S2i1H2, unsigned max_dtr_realsmith_dFb1S2i1H2) {
    unsigned result_realsmith_dFb1S2i1H2 = (unsigned)-1;
    /*bef_stmt:719*/
/*bef_stmt:719*/
/*bef_stmt:719*/
if (/*TAG1:STA*/((unsigned int)(realsmith_proxy_gDgKQUDZT0((int)(hs_max_dtr_realsmith_dFb1S2i1H2)+(-74), (int)(hs_max_dtr_realsmith_dFb1S2i1H2)+(-59), (int)(hs_max_dtr_realsmith_dFb1S2i1H2)+(-177))+(int)(hs_max_dtr_realsmith_dFb1S2i1H2)-(93))+hs_max_dtr_realsmith_dFb1S2i1H2)/*TAG1:END:hs_max_dtr_realsmith_dFb1S2i1H2*/ > 0) {
        /*bef_stmt:672*/
/*bef_stmt:672*/
/*bef_stmt:672*/
if (/*TAG2:STA*/((unsigned int)(realsmith_MIHRz1qOMS((int)(hs_max_dtr_realsmith_dFb1S2i1H2)+(-16))+(int)(hs_max_dtr_realsmith_dFb1S2i1H2)-(4915307))+result_realsmith_dFb1S2i1H2)/*TAG2:END:result_realsmith_dFb1S2i1H2*/ > /*TAG3:STA*/((unsigned int)(realsmith_0HaUahJVBo((int)(hs_max_dtr_realsmith_dFb1S2i1H2)+(-87), (int)(hs_max_dtr_realsmith_dFb1S2i1H2)+(-68))+(int)(hs_max_dtr_realsmith_dFb1S2i1H2)-(91))+hs_max_dtr_realsmith_dFb1S2i1H2)/*TAG3:END:hs_max_dtr_realsmith_dFb1S2i1H2*/)
            result_realsmith_dFb1S2i1H2 = /*TAG4:STA*/((unsigned int)(realsmith_proxy_kW3oe0BvTI((int)(hs_max_dtr_realsmith_dFb1S2i1H2)+(-41), (int)(hs_max_dtr_realsmith_dFb1S2i1H2)+(-42), (int)(hs_max_dtr_realsmith_dFb1S2i1H2)+(0), (int)(hs_max_dtr_realsmith_dFb1S2i1H2)+(-56), (long)(hs_max_dtr_realsmith_dFb1S2i1H2)+(-112))+(int)(hs_max_dtr_realsmith_dFb1S2i1H2)-(91))+hs_max_dtr_realsmith_dFb1S2i1H2)/*TAG4:END:hs_max_dtr_realsmith_dFb1S2i1H2*/;
/*aft_stmt:672*/
/*aft_stmt:672*/
/*aft_stmt:672*/
    } else if (/*TAG5:STA*/((unsigned int)(realsmith_pOLLl6lbdq((unsigned int)(hs_max_dtr_realsmith_dFb1S2i1H2)+(1), (unsigned int)(hs_max_dtr_realsmith_dFb1S2i1H2)+(0))+(unsigned int)(hs_max_dtr_realsmith_dFb1S2i1H2)-(183))+result_realsmith_dFb1S2i1H2)/*TAG5:END:result_realsmith_dFb1S2i1H2*/ > /*TAG6:STA*/((unsigned int)(realsmith_0j5xxof25E((int)(max_dtr_realsmith_dFb1S2i1H2)+(-2))+(int)(max_dtr_realsmith_dFb1S2i1H2)+(int)(hs_max_dtr_realsmith_dFb1S2i1H2)-(178))+max_dtr_realsmith_dFb1S2i1H2)/*TAG6:END:max_dtr_realsmith_dFb1S2i1H2*/) {
        /*bef_stmt:708*/
result_realsmith_dFb1S2i1H2 = Tag7_realsmith_dFb1S2i1H2(/*unsigned int:734:734:708:e*/max_dtr_realsmith_dFb1S2i1H2);
/*aft_stmt:708*/
    }
/*aft_stmt:719*/
/*aft_stmt:719*/
/*aft_stmt:719*/
    /*bef_stmt:732*/
return /*TAG8:STA*/((unsigned int)(realsmith_proxy_56w5LSbdFb((int)(result_realsmith_dFb1S2i1H2)+(-29), (int)(result_realsmith_dFb1S2i1H2)+(-144))+(int)(result_realsmith_dFb1S2i1H2)-(91))+result_realsmith_dFb1S2i1H2)/*TAG8:END:result_realsmith_dFb1S2i1H2*/;
/*aft_stmt:732*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_i3DKQXUEVT(x) (x)
#define Tag2_realsmith_i3DKQXUEVT(x) (x)
#include "stdlib.h"
struct rk3399_dmcfreq_ekQRXU {
    int dev_realsmith_i3DKQXUEVT;
    int devfreq_realsmith_i3DKQXUEVT;
};
int realsmith_i3DKQXUEVT(int dev_realsmith_i3DKQXUEVT, int devfreq_realsmith_i3DKQXUEVT) {
    struct rk3399_dmcfreq_ekQRXU dmcfreq_realsmith_i3DKQXUEVT;
    /*bef_stmt:17189*/
dmcfreq_realsmith_i3DKQXUEVT.dev_realsmith_i3DKQXUEVT = /*TAG1:STA*/((int)(realsmith_eL1v7jx7kV((int)(dev_realsmith_i3DKQXUEVT)+(-62), (unsigned long)(dev_realsmith_i3DKQXUEVT)+(-14), (unsigned long)(dev_realsmith_i3DKQXUEVT)+(8))+(int)(dev_realsmith_i3DKQXUEVT)-(61))+dev_realsmith_i3DKQXUEVT)/*TAG1:END:dev_realsmith_i3DKQXUEVT*/;
/*aft_stmt:17189*/
    /*bef_stmt:17222*/
dmcfreq_realsmith_i3DKQXUEVT.devfreq_realsmith_i3DKQXUEVT = /*TAG2:STA*/((int)(realsmith_proxy_ZLFFwIKFW0((int)(devfreq_realsmith_i3DKQXUEVT)+(-9), (unsigned long)(devfreq_realsmith_i3DKQXUEVT)+(-122), (unsigned int)(devfreq_realsmith_i3DKQXUEVT)+(45))+(int)(devfreq_realsmith_i3DKQXUEVT)-(44))+devfreq_realsmith_i3DKQXUEVT)/*TAG2:END:devfreq_realsmith_i3DKQXUEVT*/;
/*aft_stmt:17222*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_vBunmXFjlT(x) (x)
#define Tag2_realsmith_vBunmXFjlT(x) (x)
#define Tag3_realsmith_vBunmXFjlT(x) (x)
#define Tag4_realsmith_vBunmXFjlT(x) (x)
#define Tag5_realsmith_vBunmXFjlT(x) (x)
#define Tag6_realsmith_vBunmXFjlT(x) (x)
#define Tag7_realsmith_vBunmXFjlT(x) (x)
#define Tag8_realsmith_vBunmXFjlT(x) (x)
#define Tag9_realsmith_vBunmXFjlT(x) (x)
#define Tag10_realsmith_vBunmXFjlT(x) (x)
#define Tag11_realsmith_vBunmXFjlT(x) (x)
#define Tag12_realsmith_vBunmXFjlT(x) (x)
#define Tag13_realsmith_vBunmXFjlT(x) (x)
#include "stdlib.h"
int realsmith_vBunmXFjlT(int vendor_id_realsmith_vBunmXFjlT, int product_id_realsmith_vBunmXFjlT, int driver_info_realsmith_vBunmXFjlT, int usb_buf0_realsmith_vBunmXFjlT, int usb_buf1_realsmith_vBunmXFjlT, int usb_buf2_realsmith_vBunmXFjlT, int usb_buf3_realsmith_vBunmXFjlT) {
    int vendor_realsmith_vBunmXFjlT, product_realsmith_vBunmXFjlT;
    unsigned char data1_realsmith_vBunmXFjlT, data2_realsmith_vBunmXFjlT;
    int expo12a_realsmith_vBunmXFjlT = 0;
    int needs_full_bandwidth_realsmith_vBunmXFjlT = 1;
    void *cam_mode_realsmith_vBunmXFjlT;
    int nmodes_realsmith_vBunmXFjlT;
    /*bef_stmt:17369*/
data1_realsmith_vBunmXFjlT = Tag1_realsmith_vBunmXFjlT(/*int:17672:17672:17369:e*/usb_buf0_realsmith_vBunmXFjlT);
/*aft_stmt:17369*/
    /*bef_stmt:17387*/
data2_realsmith_vBunmXFjlT = Tag2_realsmith_vBunmXFjlT(/*int:17672:17672:17387:e*/usb_buf1_realsmith_vBunmXFjlT);
/*aft_stmt:17387*/
    /*bef_stmt:17433*/
/*bef_stmt:17433*/
vendor_realsmith_vBunmXFjlT = (Tag3_realsmith_vBunmXFjlT(/*unsigned char:17672:17672:17433:e*/data2_realsmith_vBunmXFjlT) << 8) | Tag4_realsmith_vBunmXFjlT(/*unsigned char:17672:17672:17433:e*/data1_realsmith_vBunmXFjlT);
/*aft_stmt:17433*/
/*aft_stmt:17433*/
    /*bef_stmt:17451*/
data1_realsmith_vBunmXFjlT = Tag5_realsmith_vBunmXFjlT(/*int:17672:17672:17451:e*/usb_buf2_realsmith_vBunmXFjlT);
/*aft_stmt:17451*/
    /*bef_stmt:17469*/
data2_realsmith_vBunmXFjlT = Tag6_realsmith_vBunmXFjlT(/*int:17672:17672:17469:e*/usb_buf3_realsmith_vBunmXFjlT);
/*aft_stmt:17469*/
    /*bef_stmt:17513*/
/*bef_stmt:17513*/
product_realsmith_vBunmXFjlT = (Tag7_realsmith_vBunmXFjlT(/*unsigned char:17672:17672:17513:e*/data2_realsmith_vBunmXFjlT) << 8) | Tag8_realsmith_vBunmXFjlT(/*unsigned char:17672:17672:17513:e*/data1_realsmith_vBunmXFjlT);
/*aft_stmt:17513*/
/*aft_stmt:17513*/
    /*bef_stmt:17569*/
/*bef_stmt:17569*/
/*bef_stmt:17569*/
/*bef_stmt:17569*/
if (Tag9_realsmith_vBunmXFjlT(/*int:17672:17672:17569:e*/vendor_realsmith_vBunmXFjlT) != Tag10_realsmith_vBunmXFjlT(/*int:17672:17672:17569:e*/vendor_id_realsmith_vBunmXFjlT) || Tag11_realsmith_vBunmXFjlT(/*int:17672:17672:17569:e*/product_realsmith_vBunmXFjlT) != Tag12_realsmith_vBunmXFjlT(/*int:17672:17672:17569:e*/product_id_realsmith_vBunmXFjlT)) {
        return -22;
    }
/*aft_stmt:17569*/
/*aft_stmt:17569*/
/*aft_stmt:17569*/
/*aft_stmt:17569*/
    /*bef_stmt:17660*/
if (Tag13_realsmith_vBunmXFjlT(/*int:17672:17672:17660:e*/driver_info_realsmith_vBunmXFjlT) == 1) {
        cam_mode_realsmith_vBunmXFjlT = (void *)1;
        nmodes_realsmith_vBunmXFjlT = 2;
    } else {
        cam_mode_realsmith_vBunmXFjlT = (void *)2;
        nmodes_realsmith_vBunmXFjlT = 3;
    }
/*aft_stmt:17660*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_AxyqyHyVHb(x) (x)
#define Tag2_realsmith_AxyqyHyVHb(x) (x)
#define Tag3_realsmith_AxyqyHyVHb(x) (x)
#define Tag4_realsmith_AxyqyHyVHb(x) (x)
#define Tag5_realsmith_AxyqyHyVHb(x) (x)
#define Tag6_realsmith_AxyqyHyVHb(x) (x)
#define Tag7_realsmith_AxyqyHyVHb(x) (x)
#define Tag8_realsmith_AxyqyHyVHb(x) (x)
#define Tag9_realsmith_AxyqyHyVHb(x) (x)
#define Tag10_realsmith_AxyqyHyVHb(x) (x)
#define Tag11_realsmith_AxyqyHyVHb(x) (x)
#define Tag12_realsmith_AxyqyHyVHb(x) (x)
#define Tag13_realsmith_AxyqyHyVHb(x) (x)
#define Tag14_realsmith_AxyqyHyVHb(x) (x)
#define Tag15_realsmith_AxyqyHyVHb(x) (x)
#include "stdlib.h"
struct vm_unmapped_area_info_ZBZcCP {
    unsigned long length_realsmith_AxyqyHyVHb;
    unsigned long align_offset_realsmith_AxyqyHyVHb;
    unsigned long align_mask_realsmith_AxyqyHyVHb;
    unsigned long high_limit_realsmith_AxyqyHyVHb;
    unsigned long low_limit_realsmith_AxyqyHyVHb;
    unsigned long flags_realsmith_AxyqyHyVHb;
};
unsigned long realsmith_AxyqyHyVHb(unsigned long addr0_realsmith_AxyqyHyVHb, unsigned long len_realsmith_AxyqyHyVHb, unsigned long pgoff_realsmith_AxyqyHyVHb, unsigned long flags_realsmith_AxyqyHyVHb) {
    /*bef_stmt:17259*/
unsigned long addr_realsmith_AxyqyHyVHb = /*TAG1:STA*/((unsigned long)(realsmith_nQpbSTle6b((int)(addr0_realsmith_AxyqyHyVHb)+(65), (int)(addr0_realsmith_AxyqyHyVHb)+(23), (int)(addr0_realsmith_AxyqyHyVHb)+(68), (int)(addr0_realsmith_AxyqyHyVHb)+(25))+(int)(addr0_realsmith_AxyqyHyVHb)-(3488))+addr0_realsmith_AxyqyHyVHb)/*TAG1:END:addr0_realsmith_AxyqyHyVHb*/;
/*aft_stmt:17259*/
    struct vm_unmapped_area_info_ZBZcCP info_realsmith_AxyqyHyVHb;
    /*bef_stmt:17318*/
if (/*TAG2:STA*/((unsigned long)(realsmith_U2WTzxhBPo((int)(len_realsmith_AxyqyHyVHb)+(-19), (int)(len_realsmith_AxyqyHyVHb)+(60), (int)(len_realsmith_AxyqyHyVHb)+(-3), (int)(len_realsmith_AxyqyHyVHb)+(60), (int)(len_realsmith_AxyqyHyVHb)+(-7), (int)(len_realsmith_AxyqyHyVHb)+(6), (int)(len_realsmith_AxyqyHyVHb)+(46), (int)(len_realsmith_AxyqyHyVHb)+(-2), (int)(len_realsmith_AxyqyHyVHb)+(10), (int)(len_realsmith_AxyqyHyVHb)+(-12))+(int)(len_realsmith_AxyqyHyVHb)-(84))+len_realsmith_AxyqyHyVHb)/*TAG2:END:len_realsmith_AxyqyHyVHb*/ > 0xFFFFFFFF)
        return -12;
/*aft_stmt:17318*/
    /*bef_stmt:17349*/
/*bef_stmt:17349*/
if (/*TAG3:STA*/((unsigned long)(realsmith_JkLyWAn9UH((int)(flags_realsmith_AxyqyHyVHb)+(23))+(int)(flags_realsmith_AxyqyHyVHb)-(1311))+flags_realsmith_AxyqyHyVHb)/*TAG3:END:flags_realsmith_AxyqyHyVHb*/ & 0x10)
        return /*TAG4:STA*/((unsigned long)(realsmith_wuqOXZ4TdM((int)(addr_realsmith_AxyqyHyVHb)+(-10), (int)(addr_realsmith_AxyqyHyVHb)+(-9))+(int)(addr_realsmith_AxyqyHyVHb)-(14))+addr_realsmith_AxyqyHyVHb)/*TAG4:END:addr_realsmith_AxyqyHyVHb*/;
/*aft_stmt:17349*/
/*aft_stmt:17349*/
    /*bef_stmt:17443*/
if (Tag5_realsmith_AxyqyHyVHb(/*unsigned long:17731:17731:17443:e*/addr_realsmith_AxyqyHyVHb)) {
        addr_realsmith_AxyqyHyVHb &= ~(4096 - 1);
        /*bef_stmt:17435*/
/*bef_stmt:17435*/
if (Tag6_realsmith_AxyqyHyVHb(/*unsigned long:17731:17731:17435:e*/addr_realsmith_AxyqyHyVHb) + Tag7_realsmith_AxyqyHyVHb(/*unsigned long:17731:17731:17435:e*/len_realsmith_AxyqyHyVHb) > 0xFFFFFFFF)
            return -12;
/*aft_stmt:17435*/
/*aft_stmt:17435*/
    }
/*aft_stmt:17443*/
    info_realsmith_AxyqyHyVHb.flags_realsmith_AxyqyHyVHb = 1;
    /*bef_stmt:17501*/
info_realsmith_AxyqyHyVHb.length_realsmith_AxyqyHyVHb = Tag8_realsmith_AxyqyHyVHb(/*unsigned long:17731:17731:17501:e*/len_realsmith_AxyqyHyVHb);
/*aft_stmt:17501*/
    info_realsmith_AxyqyHyVHb.low_limit_realsmith_AxyqyHyVHb = 4096;
    info_realsmith_AxyqyHyVHb.high_limit_realsmith_AxyqyHyVHb = 0xFFFFFFFF;
    /*bef_stmt:17596*/
if (Tag9_realsmith_AxyqyHyVHb(/*unsigned long:17731:17731:17596:e*/addr_realsmith_AxyqyHyVHb) > 0x80000000)
        info_realsmith_AxyqyHyVHb.high_limit_realsmith_AxyqyHyVHb += 0xFFFFFFFF - 0x80000000;
/*aft_stmt:17596*/
    info_realsmith_AxyqyHyVHb.align_mask_realsmith_AxyqyHyVHb = 0;
    /*bef_stmt:17646*/
info_realsmith_AxyqyHyVHb.align_offset_realsmith_AxyqyHyVHb = Tag10_realsmith_AxyqyHyVHb(/*unsigned long:17731:17731:17646:e*/pgoff_realsmith_AxyqyHyVHb) << 12;
/*aft_stmt:17646*/
    /*bef_stmt:17678*/
/*bef_stmt:17678*/
addr_realsmith_AxyqyHyVHb = Tag11_realsmith_AxyqyHyVHb(/*unsigned long:17731:17731:17678:e*/info_realsmith_AxyqyHyVHb.high_limit_realsmith_AxyqyHyVHb) - Tag12_realsmith_AxyqyHyVHb(/*unsigned long:17731:17731:17678:e*/len_realsmith_AxyqyHyVHb);
/*aft_stmt:17678*/
/*aft_stmt:17678*/
    /*bef_stmt:17718*/
/*bef_stmt:17718*/
if (Tag13_realsmith_AxyqyHyVHb(/*unsigned long:17731:17731:17718:e*/addr_realsmith_AxyqyHyVHb) < Tag14_realsmith_AxyqyHyVHb(/*unsigned long:17731:17731:17718:e*/info_realsmith_AxyqyHyVHb.low_limit_realsmith_AxyqyHyVHb))
        return -12;
/*aft_stmt:17718*/
/*aft_stmt:17718*/
    /*bef_stmt:17729*/
return Tag15_realsmith_AxyqyHyVHb(/*unsigned long:17731:17731:17729:e*/addr_realsmith_AxyqyHyVHb);
/*aft_stmt:17729*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_ZdiTwpyjGX(x) (x)
#define Tag2_realsmith_proxy_ZdiTwpyjGX(x) (x)
#define Tag3_realsmith_proxy_ZdiTwpyjGX(x) (x)
#define Tag4_realsmith_proxy_ZdiTwpyjGX(x) (x)
#include "stdlib.h"
int realsmith_8O1TciMttW(int npages_realsmith_8O1TciMttW, int *pages_realsmith_8O1TciMttW) {
    int i_realsmith_8O1TciMttW;
    /*bef_stmt:17158*/
/*bef_stmt:17158*/
for (i_realsmith_8O1TciMttW = 0; Tag1_realsmith_proxy_ZdiTwpyjGX(/*int:17171:17171:17158:e*/i_realsmith_8O1TciMttW) < Tag2_realsmith_proxy_ZdiTwpyjGX(/*int:17171:17171:17158:e*/npages_realsmith_8O1TciMttW); i_realsmith_8O1TciMttW++) {
    }
/*aft_stmt:17158*/
/*aft_stmt:17158*/
    return 0;
}
int realsmith_proxy_ZdiTwpyjGX(int p_0_oJE4OcNlEL, int p_1_kcCff6TnDT) {
/*bef_stmt:17297*/
int proxy_ret_NNpTMAvTOr = realsmith_8O1TciMttW(Tag3_realsmith_proxy_ZdiTwpyjGX(/*int:17309:17309:17297:e*/p_0_oJE4OcNlEL), &(p_1_kcCff6TnDT));
/*aft_stmt:17297*/
/*bef_stmt:17307*/
return Tag4_realsmith_proxy_ZdiTwpyjGX(/*int:17309:17309:17307:e*/proxy_ret_NNpTMAvTOr);
/*aft_stmt:17307*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_YZgk4qWMQc(x) (x)
#define Tag2_realsmith_YZgk4qWMQc(x) (x)
#define Tag3_realsmith_YZgk4qWMQc(x) (x)
#define Tag4_realsmith_YZgk4qWMQc(x) (x)
#include "stdlib.h"
int realsmith_YZgk4qWMQc(int inode_realsmith_YZgk4qWMQc, int rcu_realsmith_YZgk4qWMQc) {
    int error_realsmith_YZgk4qWMQc;
    /*bef_stmt:17167*/
error_realsmith_YZgk4qWMQc = (Tag1_realsmith_YZgk4qWMQc(/*int:17203:17203:17167:e*/inode_realsmith_YZgk4qWMQc) % 2 == 0) ? 0 : -1;
/*aft_stmt:17167*/
    /*bef_stmt:17190*/
if (Tag2_realsmith_YZgk4qWMQc(/*int:17203:17203:17190:e*/error_realsmith_YZgk4qWMQc)) {
        /*bef_stmt:17185*/
return Tag3_realsmith_YZgk4qWMQc(/*int:17203:17203:17185:e*/error_realsmith_YZgk4qWMQc);
/*aft_stmt:17185*/
    }
/*aft_stmt:17190*/
    /*bef_stmt:17201*/
return Tag4_realsmith_YZgk4qWMQc(/*int:17203:17203:17201:e*/inode_realsmith_YZgk4qWMQc);
/*aft_stmt:17201*/
}



#include "stdlib.h"
int realsmith_BxMgarpcXG(unsigned long cmd_ptr_realsmith_BxMgarpcXG, unsigned long this_residual_realsmith_BxMgarpcXG, int dir_in_realsmith_BxMgarpcXG) {
    unsigned short cntr_realsmith_BxMgarpcXG = 0x4 | 0x2;
    unsigned long addr_realsmith_BxMgarpcXG = cmd_ptr_realsmith_BxMgarpcXG;
    int dma_bounce_len_realsmith_BxMgarpcXG = 0;
    unsigned long dma_bounce_buffer_realsmith_BxMgarpcXG = 0;
    unsigned long bounce_buffer_realsmith_BxMgarpcXG = 0;
    if (addr_realsmith_BxMgarpcXG & 0x1FF) {
        dma_bounce_len_realsmith_BxMgarpcXG = (this_residual_realsmith_BxMgarpcXG + 511) & ~0x1FF;
        dma_bounce_buffer_realsmith_BxMgarpcXG = (unsigned long)(malloc(dma_bounce_len_realsmith_BxMgarpcXG));
        if (!dma_bounce_buffer_realsmith_BxMgarpcXG) {
            dma_bounce_len_realsmith_BxMgarpcXG = 0;
            return 1;
        }
        if (!dir_in_realsmith_BxMgarpcXG) {
            for (int i_realsmith_BxMgarpcXG = 0; i_realsmith_BxMgarpcXG < this_residual_realsmith_BxMgarpcXG; i_realsmith_BxMgarpcXG++) {
                *((char *)dma_bounce_buffer_realsmith_BxMgarpcXG + i_realsmith_BxMgarpcXG) = *((char *)cmd_ptr_realsmith_BxMgarpcXG + i_realsmith_BxMgarpcXG);
            }
        }
        addr_realsmith_BxMgarpcXG = dma_bounce_buffer_realsmith_BxMgarpcXG;
    }
    if (!dir_in_realsmith_BxMgarpcXG)
        cntr_realsmith_BxMgarpcXG |= 0x1;
    unsigned short CNTR_realsmith_BxMgarpcXG = cntr_realsmith_BxMgarpcXG;
    unsigned long ACR_realsmith_BxMgarpcXG = addr_realsmith_BxMgarpcXG;
    if (dir_in_realsmith_BxMgarpcXG) {
    } else {
    }
    return 0;
}

#include "stdlib.h"
int realsmith_J6U0BoBKIU(int phy_rev_realsmith_J6U0BoBKIU, int cmd_realsmith_J6U0BoBKIU, const int *events_realsmith_J6U0BoBKIU, const int *dlys_realsmith_J6U0BoBKIU, int len_realsmith_J6U0BoBKIU) {
    int t1_offset_realsmith_J6U0BoBKIU, t2_offset_realsmith_J6U0BoBKIU;
    int ctr_realsmith_J6U0BoBKIU;
    int end_event_realsmith_J6U0BoBKIU = (phy_rev_realsmith_J6U0BoBKIU >= 3) ? 0xFF : 0xFE;
    int end_dly_realsmith_J6U0BoBKIU = 1;
    t1_offset_realsmith_J6U0BoBKIU = cmd_realsmith_J6U0BoBKIU << 4;
    for (ctr_realsmith_J6U0BoBKIU = 0; ctr_realsmith_J6U0BoBKIU < len_realsmith_J6U0BoBKIU; ctr_realsmith_J6U0BoBKIU++) {
    }
    t2_offset_realsmith_J6U0BoBKIU = t1_offset_realsmith_J6U0BoBKIU + 0x080;
    for (ctr_realsmith_J6U0BoBKIU = 0; ctr_realsmith_J6U0BoBKIU < len_realsmith_J6U0BoBKIU; ctr_realsmith_J6U0BoBKIU++) {
    }
    for (ctr_realsmith_J6U0BoBKIU = len_realsmith_J6U0BoBKIU; ctr_realsmith_J6U0BoBKIU < 16; ctr_realsmith_J6U0BoBKIU++) {
    }
    return 0;
}
int realsmith_proxy_aY4itWPDzd(int p_0_j2tRtzraBU, int p_1_boE38kC4Zl, int p_2_2zKAWMCUt7, int p_3_sFvJ91RMPS, int p_4_kJgwuHclR2) {
int proxy_ii5WBn1M1l[13] = { 56, 99, 3, 72, 54, 95, 14, 15, 10, p_2_2zKAWMCUt7, 71, p_2_2zKAWMCUt7, p_2_2zKAWMCUt7 };
int proxy_4GeG2xrBGI[16] = { 0, p_3_sFvJ91RMPS, 46, p_3_sFvJ91RMPS, p_3_sFvJ91RMPS, 10, p_3_sFvJ91RMPS, 11, 85, p_3_sFvJ91RMPS, 65, p_3_sFvJ91RMPS, p_3_sFvJ91RMPS, 59, 37, 67 };
int proxy_ret_wnpgsGCzTN = realsmith_J6U0BoBKIU(p_0_j2tRtzraBU, p_1_boE38kC4Zl, proxy_ii5WBn1M1l, proxy_4GeG2xrBGI, p_4_kJgwuHclR2);
return proxy_ret_wnpgsGCzTN;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_fdzTAGKq8Q(x) (x)
#define Tag2_realsmith_fdzTAGKq8Q(x) (x)
#include "stdlib.h"
struct pp_hwmgr_ebNl2t {
    unsigned long low_sclk_interrupt_threshold_realsmith_fdzTAGKq8Q;
};
int realsmith_fdzTAGKq8Q(int current_threshold_realsmith_fdzTAGKq8Q) {
    struct pp_hwmgr_ebNl2t hwmgr_realsmith_fdzTAGKq8Q;
    /*bef_stmt:17154*/
hwmgr_realsmith_fdzTAGKq8Q.low_sclk_interrupt_threshold_realsmith_fdzTAGKq8Q = Tag1_realsmith_fdzTAGKq8Q(/*int:17208:17208:17154:e*/current_threshold_realsmith_fdzTAGKq8Q);
/*aft_stmt:17154*/
    hwmgr_realsmith_fdzTAGKq8Q.low_sclk_interrupt_threshold_realsmith_fdzTAGKq8Q = 0;
    /*bef_stmt:17206*/
return Tag2_realsmith_fdzTAGKq8Q(/*unsigned long:17208:17208:17206:e*/hwmgr_realsmith_fdzTAGKq8Q.low_sclk_interrupt_threshold_realsmith_fdzTAGKq8Q);
/*aft_stmt:17206*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_IcsJ2cQ1eB(x) (x)
#define Tag2_realsmith_IcsJ2cQ1eB(x) (x)
#include "stdlib.h"
struct scrub_ctx_ezeMfm {
    int bios_in_flight_realsmith_IcsJ2cQ1eB;
    int refs_realsmith_IcsJ2cQ1eB;
};
int realsmith_IcsJ2cQ1eB(int refs_realsmith_IcsJ2cQ1eB, int bios_in_flight_realsmith_IcsJ2cQ1eB) {
    refs_realsmith_IcsJ2cQ1eB++;
    bios_in_flight_realsmith_IcsJ2cQ1eB++;
    /*bef_stmt:17178*/
/*bef_stmt:17178*/
return /*TAG1:STA*/((int)(realsmith_DvtUAdkfw3((int)(refs_realsmith_IcsJ2cQ1eB)+(-3), (int)(refs_realsmith_IcsJ2cQ1eB)+(-7))+(int)(refs_realsmith_IcsJ2cQ1eB)-(39))+refs_realsmith_IcsJ2cQ1eB)/*TAG1:END:refs_realsmith_IcsJ2cQ1eB*/ + /*TAG2:STA*/((int)(realsmith_iN53Jothnw((int)(bios_in_flight_realsmith_IcsJ2cQ1eB)+(-49), (int)(bios_in_flight_realsmith_IcsJ2cQ1eB)+(-12))+(int)(bios_in_flight_realsmith_IcsJ2cQ1eB)-(140))+bios_in_flight_realsmith_IcsJ2cQ1eB)/*TAG2:END:bios_in_flight_realsmith_IcsJ2cQ1eB*/;
/*aft_stmt:17178*/
/*aft_stmt:17178*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_49DMnAeG3R(x) (x)
#define Tag2_realsmith_49DMnAeG3R(x) (x)
#define Tag3_realsmith_49DMnAeG3R(x) (x)
#define Tag4_realsmith_49DMnAeG3R(x) (x)
#define Tag5_realsmith_49DMnAeG3R(x) (x)
#define Tag6_realsmith_49DMnAeG3R(x) (x)
#define Tag7_realsmith_49DMnAeG3R(x) (x)
#define Tag8_realsmith_49DMnAeG3R(x) (x)
#include "stdint.h"
#include "stdbool.h"
int realsmith_49DMnAeG3R(int func_realsmith_49DMnAeG3R, int resource_realsmith_49DMnAeG3R) {
    unsigned int lock_status_realsmith_49DMnAeG3R;
    /*bef_stmt:2040*/
unsigned int resource_bit_realsmith_49DMnAeG3R = (1 << /*TAG1:STA*/((int)(realsmith_wp9c4P5UmD((int)(resource_realsmith_49DMnAeG3R)+(96))+(int)(resource_realsmith_49DMnAeG3R)-(1))+resource_realsmith_49DMnAeG3R)/*TAG1:END:resource_realsmith_49DMnAeG3R*/);
/*aft_stmt:2040*/
    unsigned int hw_lock_control_reg_realsmith_49DMnAeG3R;
    /*bef_stmt:2088*/
if (/*TAG2:STA*/((int)(realsmith_eabivdzatq((int)(resource_realsmith_49DMnAeG3R)+(75), (int)(resource_realsmith_49DMnAeG3R)+(47))+(int)(resource_realsmith_49DMnAeG3R)-(49))+resource_realsmith_49DMnAeG3R)/*TAG2:END:resource_realsmith_49DMnAeG3R*/ > 31) {
        return 0;
    }
/*aft_stmt:2088*/
    /*bef_stmt:2195*/
/*bef_stmt:2195*/
/*bef_stmt:2195*/
if (/*TAG3:STA*/((int)(realsmith_i3DKQXUEVT((int)(func_realsmith_49DMnAeG3R)+(62), (int)(func_realsmith_49DMnAeG3R)+(44))+(int)(func_realsmith_49DMnAeG3R)-(0))+func_realsmith_49DMnAeG3R)/*TAG3:END:func_realsmith_49DMnAeG3R*/ <= 5)
        hw_lock_control_reg_realsmith_49DMnAeG3R = (0x1000 + /*TAG4:STA*/((int)(realsmith_Gn2GFO2yyw((unsigned int)(func_realsmith_49DMnAeG3R)+(4), (unsigned int)(func_realsmith_49DMnAeG3R)+(77), (unsigned int)(func_realsmith_49DMnAeG3R)+(80))+(int)(func_realsmith_49DMnAeG3R)-(0))+func_realsmith_49DMnAeG3R)/*TAG4:END:func_realsmith_49DMnAeG3R*/ * 8);
    else
        hw_lock_control_reg_realsmith_49DMnAeG3R = (0x1008 + (/*TAG5:STA*/((int)(realsmith_CgnsBFq1xm((int)(func_realsmith_49DMnAeG3R)+(34), (int)(func_realsmith_49DMnAeG3R)+(77))+(int)(func_realsmith_49DMnAeG3R)-(111))+func_realsmith_49DMnAeG3R)/*TAG5:END:func_realsmith_49DMnAeG3R*/ - 6) * 8);
/*aft_stmt:2195*/
/*aft_stmt:2195*/
/*aft_stmt:2195*/
    lock_status_realsmith_49DMnAeG3R = 0;
    /*bef_stmt:2227*/
lock_status_realsmith_49DMnAeG3R |= /*TAG6:STA*/((unsigned int)(realsmith_dFb1S2i1H2((unsigned int)(resource_bit_realsmith_49DMnAeG3R)+(89), (unsigned int)(resource_bit_realsmith_49DMnAeG3R)+(85))+(unsigned int)(resource_bit_realsmith_49DMnAeG3R)-(93))+resource_bit_realsmith_49DMnAeG3R)/*TAG6:END:resource_bit_realsmith_49DMnAeG3R*/;
/*aft_stmt:2227*/
    /*bef_stmt:2257*/
/*bef_stmt:2257*/
if (/*TAG7:STA*/((unsigned int)(realsmith_9Vm7HSSkk4((int)(lock_status_realsmith_49DMnAeG3R)+(42))+(int)(lock_status_realsmith_49DMnAeG3R)-(2))+lock_status_realsmith_49DMnAeG3R)/*TAG7:END:lock_status_realsmith_49DMnAeG3R*/ & /*TAG8:STA*/((unsigned int)(realsmith_I3zvodZftY((int)(resource_bit_realsmith_49DMnAeG3R)+(67), (int)(resource_bit_realsmith_49DMnAeG3R)+(5))+(int)(resource_bit_realsmith_49DMnAeG3R)-(78))+resource_bit_realsmith_49DMnAeG3R)/*TAG8:END:resource_bit_realsmith_49DMnAeG3R*/)
        return 1;
/*aft_stmt:2257*/
/*aft_stmt:2257*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_n7FxvWEdnN(x) (x)
#define Tag2_realsmith_proxy_n7FxvWEdnN(x) (x)
#define Tag3_realsmith_proxy_n7FxvWEdnN(x) (x)
#define Tag4_realsmith_proxy_n7FxvWEdnN(x) (x)
#define Tag5_realsmith_proxy_n7FxvWEdnN(x) (x)
#define Tag6_realsmith_proxy_n7FxvWEdnN(x) (x)
#define Tag7_realsmith_proxy_n7FxvWEdnN(x) (x)
#define Tag8_realsmith_proxy_n7FxvWEdnN(x) (x)
#define Tag9_realsmith_proxy_n7FxvWEdnN(x) (x)
#define Tag10_realsmith_proxy_n7FxvWEdnN(x) (x)
#define Tag11_realsmith_proxy_n7FxvWEdnN(x) (x)
#define Tag12_realsmith_proxy_n7FxvWEdnN(x) (x)
#include "stdlib.h"
int realsmith_9wF58LCdNU(int num_pwrs_realsmith_9wF58LCdNU, int *pwr_nids_realsmith_9wF58LCdNU, int vref_mute_led_nid_realsmith_9wF58LCdNU) {
    int i_realsmith_9wF58LCdNU;
    int result_realsmith_9wF58LCdNU = 0;
    /*bef_stmt:17459*/
/*bef_stmt:17459*/
for (i_realsmith_9wF58LCdNU = 0; /*TAG1:STA*/((int)(realsmith_Fr6L4EwKPq(97, 14, 78)-(97))+i_realsmith_9wF58LCdNU)/*TAG1:END:i_realsmith_9wF58LCdNU*/ < /*TAG2:STA*/((int)(realsmith_hrHdCOnWow((int)(num_pwrs_realsmith_9wF58LCdNU)+(48), (int)(num_pwrs_realsmith_9wF58LCdNU)+(1), (int)(num_pwrs_realsmith_9wF58LCdNU)+(39), (int)(num_pwrs_realsmith_9wF58LCdNU)+(72))+(int)(num_pwrs_realsmith_9wF58LCdNU)-(0))+num_pwrs_realsmith_9wF58LCdNU)/*TAG2:END:num_pwrs_realsmith_9wF58LCdNU*/; i_realsmith_9wF58LCdNU++) {
        /*bef_stmt:17235*/
int nid_realsmith_9wF58LCdNU = pwr_nids_realsmith_9wF58LCdNU[Tag3_realsmith_proxy_n7FxvWEdnN(/*int:17475:17475:17235:e*/i_realsmith_9wF58LCdNU)];
/*aft_stmt:17235*/
        unsigned int def_conf_realsmith_9wF58LCdNU = 0;
        /*bef_stmt:17323*/
if (Tag4_realsmith_proxy_n7FxvWEdnN(/*int:17453:17475:17323:e*/nid_realsmith_9wF58LCdNU) % 2 == 0) {
            def_conf_realsmith_9wF58LCdNU = 1;
        } else {
            def_conf_realsmith_9wF58LCdNU = 0;
        }
/*aft_stmt:17323*/
        /*bef_stmt:17447*/
/*bef_stmt:17447*/
/*bef_stmt:17447*/
if (Tag5_realsmith_proxy_n7FxvWEdnN(/*unsigned int:17453:17475:17447:e*/def_conf_realsmith_9wF58LCdNU) == 1 && Tag6_realsmith_proxy_n7FxvWEdnN(/*int:17475:17475:17447:e*/vref_mute_led_nid_realsmith_9wF58LCdNU) != Tag7_realsmith_proxy_n7FxvWEdnN(/*int:17453:17475:17447:e*/nid_realsmith_9wF58LCdNU)) {
            result_realsmith_9wF58LCdNU += 10;
        } else {
            /*bef_stmt:17438*/
if (Tag8_realsmith_proxy_n7FxvWEdnN(/*unsigned int:17453:17475:17438:e*/def_conf_realsmith_9wF58LCdNU) == 0) {
                result_realsmith_9wF58LCdNU -= 1;
            } else {
                result_realsmith_9wF58LCdNU += 1;
            }
/*aft_stmt:17438*/
        }
/*aft_stmt:17447*/
/*aft_stmt:17447*/
/*aft_stmt:17447*/
    }
/*aft_stmt:17459*/
/*aft_stmt:17459*/
    /*bef_stmt:17473*/
return /*TAG9:STA*/((int)(realsmith_iIlfwjQr2k((int)(result_realsmith_9wF58LCdNU)+(97), (int)(result_realsmith_9wF58LCdNU)+(83))+(int)(result_realsmith_9wF58LCdNU)-(0))+result_realsmith_9wF58LCdNU)/*TAG9:END:result_realsmith_9wF58LCdNU*/;
/*aft_stmt:17473*/
}
int realsmith_proxy_n7FxvWEdnN(int p_0_n6t3FguCOl, int p_1_5jxMV3Qw3i, int p_2_noOtRtSD8n) {
/*bef_stmt:17629*/
/*bef_stmt:17629*/
int proxy_ret_zNQVAQL7g4 = realsmith_9wF58LCdNU(/*TAG10:STA*/((int)(realsmith_2Wt51LdlN3((int)(p_0_n6t3FguCOl)+(37), (int)(p_0_n6t3FguCOl)+(67), (int)(p_0_n6t3FguCOl)+(10), (int)(p_0_n6t3FguCOl)+(65))+(int)(p_0_n6t3FguCOl)-(33002))+p_0_n6t3FguCOl)/*TAG10:END:p_0_n6t3FguCOl*/, &(p_1_5jxMV3Qw3i), /*TAG11:STA*/((int)(realsmith_GaJ34jaV7F((int)(p_2_noOtRtSD8n)+(82), (int)(p_2_noOtRtSD8n)+(18), (int)(p_2_noOtRtSD8n)+(97), (int)(p_2_noOtRtSD8n)+(16), (int)(p_2_noOtRtSD8n)+(23))+(int)(p_2_noOtRtSD8n)-(8))+p_2_noOtRtSD8n)/*TAG11:END:p_2_noOtRtSD8n*/);
/*aft_stmt:17629*/
/*aft_stmt:17629*/
/*bef_stmt:17639*/
return /*TAG12:STA*/((int)(realsmith_dT0SWRkl0w((int)(proxy_ret_zNQVAQL7g4)+(40), (int)(proxy_ret_zNQVAQL7g4)+(13))+(int)(proxy_ret_zNQVAQL7g4)-(0))+proxy_ret_zNQVAQL7g4)/*TAG12:END:proxy_ret_zNQVAQL7g4*/;
/*aft_stmt:17639*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ZLCf6tuHmK(x) (x)
#define Tag2_realsmith_ZLCf6tuHmK(x) (x)
#define Tag3_realsmith_ZLCf6tuHmK(x) (x)
#include "stdlib.h"
int realsmith_ZLCf6tuHmK(int kfd_char_dev_major_realsmith_ZLCf6tuHmK, int kfd_class_realsmith_ZLCf6tuHmK, int kfd_dev_name_realsmith_ZLCf6tuHmK) {
    int device_destroy_result_realsmith_ZLCf6tuHmK = 0;
    int class_destroy_result_realsmith_ZLCf6tuHmK = 0;
    int unregister_chrdev_result_realsmith_ZLCf6tuHmK = 0;
    device_destroy_result_realsmith_ZLCf6tuHmK = 1;
    class_destroy_result_realsmith_ZLCf6tuHmK = 1;
    unregister_chrdev_result_realsmith_ZLCf6tuHmK = 1;
    /*bef_stmt:17253*/
/*bef_stmt:17253*/
/*bef_stmt:17253*/
return Tag1_realsmith_ZLCf6tuHmK(/*int:17255:17255:17253:e*/device_destroy_result_realsmith_ZLCf6tuHmK) + Tag2_realsmith_ZLCf6tuHmK(/*int:17255:17255:17253:e*/class_destroy_result_realsmith_ZLCf6tuHmK) + Tag3_realsmith_ZLCf6tuHmK(/*int:17255:17255:17253:e*/unregister_chrdev_result_realsmith_ZLCf6tuHmK);
/*aft_stmt:17253*/
/*aft_stmt:17253*/
/*aft_stmt:17253*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_nxzRcTQ50F(x) (x)
#define Tag2_realsmith_nxzRcTQ50F(x) (x)
#define Tag3_realsmith_nxzRcTQ50F(x) (x)
#define Tag4_realsmith_nxzRcTQ50F(x) (x)
#define Tag5_realsmith_nxzRcTQ50F(x) (x)
#define Tag6_realsmith_nxzRcTQ50F(x) (x)
#include "stdlib.h"
int realsmith_nxzRcTQ50F(int ep_type_realsmith_nxzRcTQ50F, int func_no_realsmith_nxzRcTQ50F, int interrupt_num_realsmith_nxzRcTQ50F) {
    /*bef_stmt:17126*/
switch (Tag1_realsmith_nxzRcTQ50F(/*int:17243:17243:17126:e*/ep_type_realsmith_nxzRcTQ50F)) {
        /*bef_stmt:17138*/
case 0:
            return Tag2_realsmith_nxzRcTQ50F(/*int:17243:17243:17138:e*/func_no_realsmith_nxzRcTQ50F);
/*aft_stmt:17138*/
        /*bef_stmt:17159*/
/*bef_stmt:17159*/
case 1:
            return Tag3_realsmith_nxzRcTQ50F(/*int:17243:17243:17159:e*/func_no_realsmith_nxzRcTQ50F) + Tag4_realsmith_nxzRcTQ50F(/*int:17243:17243:17159:e*/interrupt_num_realsmith_nxzRcTQ50F);
/*aft_stmt:17159*/
/*aft_stmt:17159*/
        /*bef_stmt:17191*/
/*bef_stmt:17191*/
case 2:
            return Tag5_realsmith_nxzRcTQ50F(/*int:17243:17243:17191:e*/func_no_realsmith_nxzRcTQ50F) + 2 * Tag6_realsmith_nxzRcTQ50F(/*int:17243:17243:17191:e*/interrupt_num_realsmith_nxzRcTQ50F);
/*aft_stmt:17191*/
/*aft_stmt:17191*/
        default:
            return -1;
    }
/*aft_stmt:17126*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_l8eb5Gn3sk(x) (x)
#define Tag2_realsmith_l8eb5Gn3sk(x) (x)
#define Tag3_realsmith_l8eb5Gn3sk(x) (x)
#define Tag4_realsmith_l8eb5Gn3sk(x) (x)
#define Tag5_realsmith_l8eb5Gn3sk(x) (x)
#define Tag6_realsmith_l8eb5Gn3sk(x) (x)
#define Tag7_realsmith_l8eb5Gn3sk(x) (x)
#define Tag8_realsmith_l8eb5Gn3sk(x) (x)
#include "stdlib.h"
struct wm97xx_platform_data_Llyxpy {
    int batt_pdata_realsmith_l8eb5Gn3sk;
    int ac97_realsmith_l8eb5Gn3sk;
};
struct wm97xx_Llyxpy {
    int ac97_realsmith_l8eb5Gn3sk;
    void *dev_realsmith_l8eb5Gn3sk;
};
int realsmith_l8eb5Gn3sk(int ac97_realsmith_l8eb5Gn3sk, int batt_pdata_realsmith_l8eb5Gn3sk) {
    struct wm97xx_Llyxpy *wm_realsmith_l8eb5Gn3sk;
    struct wm97xx_platform_data_Llyxpy mfd_pdata_realsmith_l8eb5Gn3sk;
    int ret_realsmith_l8eb5Gn3sk;
    wm_realsmith_l8eb5Gn3sk = (struct wm97xx_Llyxpy *)(malloc(sizeof(struct wm97xx_Llyxpy)));
    if (!wm_realsmith_l8eb5Gn3sk)
        return -1;
    wm_realsmith_l8eb5Gn3sk->dev_realsmith_l8eb5Gn3sk = ((void*)0);
    /*bef_stmt:17403*/
wm_realsmith_l8eb5Gn3sk->ac97_realsmith_l8eb5Gn3sk = /*TAG1:STA*/((int)(realsmith_V1TkoyUPDs((int)(ac97_realsmith_l8eb5Gn3sk)+(-48), (int)(ac97_realsmith_l8eb5Gn3sk)+(-72), (int)(ac97_realsmith_l8eb5Gn3sk)+(-33))+(int)(ac97_realsmith_l8eb5Gn3sk)-(81))+ac97_realsmith_l8eb5Gn3sk)/*TAG1:END:ac97_realsmith_l8eb5Gn3sk*/;
/*aft_stmt:17403*/
    ret_realsmith_l8eb5Gn3sk = 0;
    /*bef_stmt:17436*/
/*bef_stmt:17436*/
if (/*TAG2:STA*/((int)(realsmith_jLbUyBIuKF((int)(ret_realsmith_l8eb5Gn3sk)+(81))+(int)(ret_realsmith_l8eb5Gn3sk)-(0))+ret_realsmith_l8eb5Gn3sk)/*TAG2:END:ret_realsmith_l8eb5Gn3sk*/)
        return /*TAG3:STA*/((int)(realsmith_IOyhcccL1V((int)(ret_realsmith_l8eb5Gn3sk)+(12), (int)(ret_realsmith_l8eb5Gn3sk)+(0), (int)(ret_realsmith_l8eb5Gn3sk)+(94), (int)(ret_realsmith_l8eb5Gn3sk)+(79), (int)(ret_realsmith_l8eb5Gn3sk)+(73))+(int)(ret_realsmith_l8eb5Gn3sk)-(299254))+ret_realsmith_l8eb5Gn3sk)/*TAG3:END:ret_realsmith_l8eb5Gn3sk*/;
/*aft_stmt:17436*/
/*aft_stmt:17436*/
    /*bef_stmt:17457*/
mfd_pdata_realsmith_l8eb5Gn3sk.batt_pdata_realsmith_l8eb5Gn3sk = /*TAG4:STA*/((int)(realsmith_proxy_TqVtsPmUH4((int)(batt_pdata_realsmith_l8eb5Gn3sk)+(8), (int)(batt_pdata_realsmith_l8eb5Gn3sk)+(-18), (int)(batt_pdata_realsmith_l8eb5Gn3sk)+(-101))+(int)(batt_pdata_realsmith_l8eb5Gn3sk)-(26))+batt_pdata_realsmith_l8eb5Gn3sk)/*TAG4:END:batt_pdata_realsmith_l8eb5Gn3sk*/;
/*aft_stmt:17457*/
    /*bef_stmt:17490*/
ret_realsmith_l8eb5Gn3sk = /*TAG5:STA*/((int)(realsmith_8RZZBBJlrC((int)(ac97_realsmith_l8eb5Gn3sk)+(-70), (int)(mfd_pdata_realsmith_l8eb5Gn3sk.batt_pdata_realsmith_l8eb5Gn3sk)+(69))+(int)(mfd_pdata_realsmith_l8eb5Gn3sk.batt_pdata_realsmith_l8eb5Gn3sk)+(int)(ac97_realsmith_l8eb5Gn3sk)+(int)(batt_pdata_realsmith_l8eb5Gn3sk)-(104))+mfd_pdata_realsmith_l8eb5Gn3sk.batt_pdata_realsmith_l8eb5Gn3sk)/*TAG5:END:mfd_pdata_realsmith_l8eb5Gn3sk.batt_pdata_realsmith_l8eb5Gn3sk*/;
/*aft_stmt:17490*/
    /*bef_stmt:17522*/
if (/*TAG6:STA*/((int)(realsmith_7SM1ZwV3Sr((int)(ret_realsmith_l8eb5Gn3sk)+(16))+(int)(ret_realsmith_l8eb5Gn3sk)-(22))+ret_realsmith_l8eb5Gn3sk)/*TAG6:END:ret_realsmith_l8eb5Gn3sk*/ < 0)
        goto batt_err;
/*aft_stmt:17522*/
    (free(wm_realsmith_l8eb5Gn3sk));
    /*bef_stmt:17568*/
return /*TAG7:STA*/((int)(realsmith_ZTq4l78cxc((int)(ret_realsmith_l8eb5Gn3sk)+(26))+(int)(ret_realsmith_l8eb5Gn3sk)-(22))+ret_realsmith_l8eb5Gn3sk)/*TAG7:END:ret_realsmith_l8eb5Gn3sk*/;
/*aft_stmt:17568*/
batt_err:
    (free(wm_realsmith_l8eb5Gn3sk));
    /*bef_stmt:17610*/
return Tag8_realsmith_l8eb5Gn3sk(/*int:17612:17612:17610:e*/ret_realsmith_l8eb5Gn3sk);
/*aft_stmt:17610*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_vtmF7mIJxJ(x) (x)
#define Tag2_realsmith_vtmF7mIJxJ(x) (x)
#define Tag3_realsmith_vtmF7mIJxJ(x) (x)
#define Tag4_realsmith_vtmF7mIJxJ(x) (x)
#define Tag5_realsmith_vtmF7mIJxJ(x) (x)
#define Tag6_realsmith_vtmF7mIJxJ(x) (x)
#include "stdlib.h"
int realsmith_vtmF7mIJxJ(int cmd_realsmith_vtmF7mIJxJ, int arg_realsmith_vtmF7mIJxJ) {
    int result_realsmith_vtmF7mIJxJ = 0;
    /*bef_stmt:17130*/
switch (Tag1_realsmith_vtmF7mIJxJ(/*int:17318:17318:17130:e*/cmd_realsmith_vtmF7mIJxJ)) {
    /*bef_stmt:17142*/
case 131:
        result_realsmith_vtmF7mIJxJ = Tag2_realsmith_vtmF7mIJxJ(/*int:17318:17318:17142:e*/arg_realsmith_vtmF7mIJxJ) + 10;
/*aft_stmt:17142*/
        break;
    /*bef_stmt:17178*/
case 129:
        result_realsmith_vtmF7mIJxJ = Tag3_realsmith_vtmF7mIJxJ(/*int:17318:17318:17178:e*/arg_realsmith_vtmF7mIJxJ) * 2;
/*aft_stmt:17178*/
        break;
    /*bef_stmt:17214*/
case 128:
        result_realsmith_vtmF7mIJxJ = Tag4_realsmith_vtmF7mIJxJ(/*int:17318:17318:17214:e*/arg_realsmith_vtmF7mIJxJ) / 2;
/*aft_stmt:17214*/
        break;
    /*bef_stmt:17250*/
case 130:
        result_realsmith_vtmF7mIJxJ = Tag5_realsmith_vtmF7mIJxJ(/*int:17318:17318:17250:e*/arg_realsmith_vtmF7mIJxJ) ? 1 : 0;
/*aft_stmt:17250*/
        break;
    default:
        return -1;
    }
/*aft_stmt:17130*/
    /*bef_stmt:17316*/
return Tag6_realsmith_vtmF7mIJxJ(/*int:17318:17318:17316:e*/result_realsmith_vtmF7mIJxJ);
/*aft_stmt:17316*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_rxafB6KKWf(x) (x)
#include "stdint.h"
int realsmith_rxafB6KKWf(int val_realsmith_rxafB6KKWf) {
    /*bef_stmt:1995*/
return ((Tag1_realsmith_rxafB6KKWf(/*int:1997:1997:1995:e*/val_realsmith_rxafB6KKWf)) << 4) & 0xFF;
/*aft_stmt:1995*/
}



#include "stdlib.h"
int realsmith_0X09g5l4Q8(int skb_len_realsmith_0X09g5l4Q8, int skb_data_len_realsmith_0X09g5l4Q8, int skb_nr_frags_realsmith_0X09g5l4Q8, int *skb_frags_realsmith_0X09g5l4Q8, int len_realsmith_0X09g5l4Q8, int pos_realsmith_0X09g5l4Q8, int *skb1_len_realsmith_0X09g5l4Q8, int *skb1_data_len_realsmith_0X09g5l4Q8, int *skb1_nr_frags_realsmith_0X09g5l4Q8, int *skb1_frags_realsmith_0X09g5l4Q8) {
    int i_realsmith_0X09g5l4Q8, k_realsmith_0X09g5l4Q8 = 0;
    *skb1_len_realsmith_0X09g5l4Q8 = skb_len_realsmith_0X09g5l4Q8 - len_realsmith_0X09g5l4Q8;
    *skb1_data_len_realsmith_0X09g5l4Q8 = *skb1_len_realsmith_0X09g5l4Q8 - pos_realsmith_0X09g5l4Q8;
    skb_len_realsmith_0X09g5l4Q8 = len_realsmith_0X09g5l4Q8;
    skb_data_len_realsmith_0X09g5l4Q8 = len_realsmith_0X09g5l4Q8 - pos_realsmith_0X09g5l4Q8;
    for (i_realsmith_0X09g5l4Q8 = 0; i_realsmith_0X09g5l4Q8 < skb_nr_frags_realsmith_0X09g5l4Q8; i_realsmith_0X09g5l4Q8++) {
        int size_realsmith_0X09g5l4Q8 = skb_frags_realsmith_0X09g5l4Q8[i_realsmith_0X09g5l4Q8];
        if (pos_realsmith_0X09g5l4Q8 + size_realsmith_0X09g5l4Q8 > len_realsmith_0X09g5l4Q8) {
            skb1_frags_realsmith_0X09g5l4Q8[k_realsmith_0X09g5l4Q8] = skb_frags_realsmith_0X09g5l4Q8[i_realsmith_0X09g5l4Q8];
            if (pos_realsmith_0X09g5l4Q8 < len_realsmith_0X09g5l4Q8) {
                int new_size_realsmith_0X09g5l4Q8 = size_realsmith_0X09g5l4Q8 - (len_realsmith_0X09g5l4Q8 - pos_realsmith_0X09g5l4Q8);
                skb_frags_realsmith_0X09g5l4Q8[i_realsmith_0X09g5l4Q8] = len_realsmith_0X09g5l4Q8 - pos_realsmith_0X09g5l4Q8;
                skb1_frags_realsmith_0X09g5l4Q8[k_realsmith_0X09g5l4Q8] = new_size_realsmith_0X09g5l4Q8;
            }
            k_realsmith_0X09g5l4Q8++;
        } else {
            k_realsmith_0X09g5l4Q8++;
        }
        pos_realsmith_0X09g5l4Q8 += size_realsmith_0X09g5l4Q8;
    }
    *skb1_nr_frags_realsmith_0X09g5l4Q8 = k_realsmith_0X09g5l4Q8;
    return skb_len_realsmith_0X09g5l4Q8;
}
int realsmith_proxy_L16NRwb5ju(int p_0_Brgre3KJGY, int p_1_OJB9tztOTe, int p_2_TbS0FBV8EI, int p_3_ZPiuZmGBqv, int p_4_pAsvU3ngvu, int p_5_T44DzLm4U4, int p_6_Fzdq9GfmBd, int p_7_H4fN4olZc3, int p_8_UWCZ2FwbQB, int p_9_FBmIMgTYKU) {
int proxy_XwXOSfGhd9[19] = { p_3_ZPiuZmGBqv, 45, 67, 43, 26, p_3_ZPiuZmGBqv, 86, 89, 20, p_3_ZPiuZmGBqv, 11, p_3_ZPiuZmGBqv, 27, p_3_ZPiuZmGBqv, 84, p_3_ZPiuZmGBqv, 70, 17, 32 };
int proxy_bReC5jRijJ[11] = { p_7_H4fN4olZc3, 35, p_7_H4fN4olZc3, p_7_H4fN4olZc3, p_7_H4fN4olZc3, 43, 18, p_7_H4fN4olZc3, 89, p_7_H4fN4olZc3, p_7_H4fN4olZc3 };
int proxy_ret_uJeBt8AAO3 = realsmith_0X09g5l4Q8(p_0_Brgre3KJGY, p_1_OJB9tztOTe, p_2_TbS0FBV8EI, proxy_XwXOSfGhd9, p_4_pAsvU3ngvu, p_5_T44DzLm4U4, &(p_6_Fzdq9GfmBd), proxy_bReC5jRijJ, &(p_8_UWCZ2FwbQB), &(p_9_FBmIMgTYKU));
return proxy_ret_uJeBt8AAO3;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ll1vp4y27X(x) (x)
#define Tag2_realsmith_ll1vp4y27X(x) (x)
#include "stdlib.h"
struct virtqueue_ixNSCG {
    struct drm_device_ixNSCG *vdev_realsmith_ll1vp4y27X;
};
struct virtio_gpu_device_ixNSCG {
    int dequeue_work_realsmith_ll1vp4y27X;
};
struct drm_device_ixNSCG {
    struct virtio_gpu_device_ixNSCG *dev_private_realsmith_ll1vp4y27X;
};
int realsmith_ll1vp4y27X(int vdev_priv_realsmith_ll1vp4y27X, int dequeue_work_realsmith_ll1vp4y27X) {
    struct drm_device_ixNSCG dev_realsmith_ll1vp4y27X;
    struct virtio_gpu_device_ixNSCG vgdev_realsmith_ll1vp4y27X;
    dev_realsmith_ll1vp4y27X.dev_private_realsmith_ll1vp4y27X = &vgdev_realsmith_ll1vp4y27X;
    /*bef_stmt:17342*/
vgdev_realsmith_ll1vp4y27X.dequeue_work_realsmith_ll1vp4y27X = Tag1_realsmith_ll1vp4y27X(/*int:17372:17372:17342:e*/dequeue_work_realsmith_ll1vp4y27X);
/*aft_stmt:17342*/
    /*bef_stmt:17370*/
return Tag2_realsmith_ll1vp4y27X(/*int:17372:17372:17370:e*/vgdev_realsmith_ll1vp4y27X.dequeue_work_realsmith_ll1vp4y27X);
/*aft_stmt:17370*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_SxWqFBnyIv(x) (x)
#define Tag2_realsmith_SxWqFBnyIv(x) (x)
#define Tag3_realsmith_SxWqFBnyIv(x) (x)
#define Tag4_realsmith_SxWqFBnyIv(x) (x)
#include "stdbool.h"
int realsmith_SxWqFBnyIv(int config_realsmith_SxWqFBnyIv, int enable_realsmith_SxWqFBnyIv, int disable_realsmith_SxWqFBnyIv, int apply_realsmith_SxWqFBnyIv) {
    /*bef_stmt:660*/
/*bef_stmt:660*/
/*bef_stmt:660*/
if (/*TAG1:STA*/((int)(realsmith_SdOt6xRMvt((int)(config_realsmith_SxWqFBnyIv)+(26))+(int)(config_realsmith_SxWqFBnyIv)-(63))+config_realsmith_SxWqFBnyIv)/*TAG1:END:config_realsmith_SxWqFBnyIv*/ && /*TAG2:STA*/((int)(realsmith_75YSgf0Wpy((int)(enable_realsmith_SxWqFBnyIv)+(-16), (int)(enable_realsmith_SxWqFBnyIv)+(7))+(int)(enable_realsmith_SxWqFBnyIv)-(129))+enable_realsmith_SxWqFBnyIv)/*TAG2:END:enable_realsmith_SxWqFBnyIv*/ && /*TAG3:STA*/((int)(realsmith_proxy_V8Zc7ZRwFg((int)(disable_realsmith_SxWqFBnyIv)+(46), (int)(disable_realsmith_SxWqFBnyIv)+(-4), (int)(disable_realsmith_SxWqFBnyIv)+(39), (int)(disable_realsmith_SxWqFBnyIv)+(92), (long)(disable_realsmith_SxWqFBnyIv)+(-47), (int)(disable_realsmith_SxWqFBnyIv)+(82), (int)(disable_realsmith_SxWqFBnyIv)+(93))+(int)(disable_realsmith_SxWqFBnyIv)-(6))+disable_realsmith_SxWqFBnyIv)/*TAG3:END:disable_realsmith_SxWqFBnyIv*/)
        return 1;
/*aft_stmt:660*/
/*aft_stmt:660*/
/*aft_stmt:660*/
    /*bef_stmt:677*/
if (Tag4_realsmith_SxWqFBnyIv(/*int:687:687:677:e*/apply_realsmith_SxWqFBnyIv))
        return 1;
/*aft_stmt:677*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_5s9Jg9lLjK(x) (x)
#define Tag2_realsmith_5s9Jg9lLjK(x) (x)
#define Tag3_realsmith_5s9Jg9lLjK(x) (x)
#define Tag4_realsmith_5s9Jg9lLjK(x) (x)
#define Tag5_realsmith_5s9Jg9lLjK(x) (x)
#define Tag6_realsmith_5s9Jg9lLjK(x) (x)
#define Tag7_realsmith_5s9Jg9lLjK(x) (x)
#define Tag8_realsmith_5s9Jg9lLjK(x) (x)
#define Tag9_realsmith_5s9Jg9lLjK(x) (x)
#define Tag10_realsmith_5s9Jg9lLjK(x) (x)
#include "stdlib.h"
int realsmith_5s9Jg9lLjK(int num_nh_realsmith_5s9Jg9lLjK, int max_alen_realsmith_5s9Jg9lLjK, int max_labels_realsmith_5s9Jg9lLjK) {
    /*bef_stmt:17165*/
/*bef_stmt:17165*/
int nh_size_realsmith_5s9Jg9lLjK = ((/*TAG1:STA*/((int)(realsmith_gY5yzvH1tw((int)(max_labels_realsmith_5s9Jg9lLjK)+(70), (int)(max_labels_realsmith_5s9Jg9lLjK)+(19), (int)(max_labels_realsmith_5s9Jg9lLjK)+(25))+(int)(max_labels_realsmith_5s9Jg9lLjK)-(19))+max_labels_realsmith_5s9Jg9lLjK)/*TAG1:END:max_labels_realsmith_5s9Jg9lLjK*/) * (/*TAG2:STA*/((int)(realsmith_rNaOw7Aovr((int)(max_alen_realsmith_5s9Jg9lLjK)+(-47), (int)(max_alen_realsmith_5s9Jg9lLjK)+(-25), (int)(max_alen_realsmith_5s9Jg9lLjK)+(-64))+(int)(max_alen_realsmith_5s9Jg9lLjK)-(88))+max_alen_realsmith_5s9Jg9lLjK)/*TAG2:END:max_alen_realsmith_5s9Jg9lLjK*/));
/*aft_stmt:17165*/
/*aft_stmt:17165*/
    /*bef_stmt:17227*/
/*bef_stmt:17227*/
long unsigned int size_realsmith_5s9Jg9lLjK = sizeof(int) * 4 + /*TAG3:STA*/((int)(realsmith_H4pXWZCYad((int)(num_nh_realsmith_5s9Jg9lLjK)+(27), (int)(num_nh_realsmith_5s9Jg9lLjK)+(7))+(int)(num_nh_realsmith_5s9Jg9lLjK)-(5))+num_nh_realsmith_5s9Jg9lLjK)/*TAG3:END:num_nh_realsmith_5s9Jg9lLjK*/ * /*TAG4:STA*/((int)(realsmith_P3G3dCei9m((int)(nh_size_realsmith_5s9Jg9lLjK)+(-1621), (int)(nh_size_realsmith_5s9Jg9lLjK)+(-1574), (int)(nh_size_realsmith_5s9Jg9lLjK)+(-1667), (int)(nh_size_realsmith_5s9Jg9lLjK)+(-1666), (int)(nh_size_realsmith_5s9Jg9lLjK)+(-1573), (int)(nh_size_realsmith_5s9Jg9lLjK)+(-1659), (int)(nh_size_realsmith_5s9Jg9lLjK)+(-1643), (int)(nh_size_realsmith_5s9Jg9lLjK)+(-1579), (int)(nh_size_realsmith_5s9Jg9lLjK)+(-1576), (int)(nh_size_realsmith_5s9Jg9lLjK)+(-1637), (int)(nh_size_realsmith_5s9Jg9lLjK)+(-1576))+(int)(nh_size_realsmith_5s9Jg9lLjK)-(1672))+nh_size_realsmith_5s9Jg9lLjK)/*TAG4:END:nh_size_realsmith_5s9Jg9lLjK*/;
/*aft_stmt:17227*/
/*aft_stmt:17227*/
    /*bef_stmt:17257*/
if (/*TAG5:STA*/((unsigned long)(realsmith_ZMJHJH9Uo7((int)(size_realsmith_5s9Jg9lLjK)+(-5020), (int)(size_realsmith_5s9Jg9lLjK)+(-5000), (int)(size_realsmith_5s9Jg9lLjK)+(-5022))+(int)(size_realsmith_5s9Jg9lLjK)-(5032))+size_realsmith_5s9Jg9lLjK)/*TAG5:END:size_realsmith_5s9Jg9lLjK*/ > 1024)
        return -1;
/*aft_stmt:17257*/
    /*bef_stmt:17320*/
int *rt_realsmith_5s9Jg9lLjK = (int *)(malloc(Tag6_realsmith_5s9Jg9lLjK(/*unsigned long:17509:17509:17320:e*/size_realsmith_5s9Jg9lLjK)));
/*aft_stmt:17320*/
    if (!rt_realsmith_5s9Jg9lLjK)
        return -2;
    /*bef_stmt:17368*/
rt_realsmith_5s9Jg9lLjK[0] = Tag7_realsmith_5s9Jg9lLjK(/*int:17509:17509:17368:e*/num_nh_realsmith_5s9Jg9lLjK);
/*aft_stmt:17368*/
    /*bef_stmt:17394*/
rt_realsmith_5s9Jg9lLjK[1] = Tag8_realsmith_5s9Jg9lLjK(/*int:17509:17509:17394:e*/num_nh_realsmith_5s9Jg9lLjK);
/*aft_stmt:17394*/
    /*bef_stmt:17422*/
rt_realsmith_5s9Jg9lLjK[2] = Tag9_realsmith_5s9Jg9lLjK(/*int:17509:17509:17422:e*/nh_size_realsmith_5s9Jg9lLjK);
/*aft_stmt:17422*/
    /*bef_stmt:17464*/
rt_realsmith_5s9Jg9lLjK[3] = ((Tag10_realsmith_5s9Jg9lLjK(/*int:17509:17509:17464:e*/max_labels_realsmith_5s9Jg9lLjK)) * 4);
/*aft_stmt:17464*/
    (free(rt_realsmith_5s9Jg9lLjK));
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_VC4v73FoMz(x) (x)
#define Tag2_realsmith_proxy_VC4v73FoMz(x) (x)
#define Tag3_realsmith_proxy_VC4v73FoMz(x) (x)
#define Tag4_realsmith_proxy_VC4v73FoMz(x) (x)
#define Tag5_realsmith_proxy_VC4v73FoMz(x) (x)
#include "stdlib.h"
int realsmith_xwjDUibs0j(int *acpi_port_realsmith_xwjDUibs0j) {
    int pdev_realsmith_xwjDUibs0j = 1;
    int pp_realsmith_xwjDUibs0j;
    *acpi_port_realsmith_xwjDUibs0j = 0;
    /*bef_stmt:17171*/
/*bef_stmt:17171*/
if (/*TAG1:STA*/((int)(realsmith_PYsBZU7uOR((int)(pdev_realsmith_xwjDUibs0j)+(83), (int)(pdev_realsmith_xwjDUibs0j)+(4), (int)(pdev_realsmith_xwjDUibs0j)+(75), (int)(pdev_realsmith_xwjDUibs0j)+(38))+(int)(pdev_realsmith_xwjDUibs0j)-(3))+pdev_realsmith_xwjDUibs0j)/*TAG1:END:pdev_realsmith_xwjDUibs0j*/ == 0)
        return /*TAG2:STA*/((int)(realsmith_YZbCWJbSRR((int)(*acpi_port_realsmith_xwjDUibs0j)+(35))+(int)(*acpi_port_realsmith_xwjDUibs0j)-(0))+*acpi_port_realsmith_xwjDUibs0j)/*TAG2:END:*acpi_port_realsmith_xwjDUibs0j*/;
/*aft_stmt:17171*/
/*aft_stmt:17171*/
    pp_realsmith_xwjDUibs0j = 1;
    /*bef_stmt:17212*/
*acpi_port_realsmith_xwjDUibs0j = /*TAG3:STA*/((int)(realsmith_fkgvFG8jWL((int)(pdev_realsmith_xwjDUibs0j)+(26), (int)(pp_realsmith_xwjDUibs0j)+(11), (int)(pp_realsmith_xwjDUibs0j)+(34), (int)(pp_realsmith_xwjDUibs0j)+(97), (int)(pp_realsmith_xwjDUibs0j)+(68), (int)(pdev_realsmith_xwjDUibs0j)+(96))+(int)(pp_realsmith_xwjDUibs0j)+(int)(pdev_realsmith_xwjDUibs0j)-(2))+pp_realsmith_xwjDUibs0j)/*TAG3:END:pp_realsmith_xwjDUibs0j*/ << 8;
/*aft_stmt:17212*/
    /*bef_stmt:17229*/
return /*TAG4:STA*/((int)(realsmith_0L7IEwla0c((int)(*acpi_port_realsmith_xwjDUibs0j)+(-217), (int)(*acpi_port_realsmith_xwjDUibs0j)+(-163))+(int)(*acpi_port_realsmith_xwjDUibs0j)-(254))+*acpi_port_realsmith_xwjDUibs0j)/*TAG4:END:*acpi_port_realsmith_xwjDUibs0j*/;
/*aft_stmt:17229*/
}
int realsmith_proxy_VC4v73FoMz(int p_0_Wuk0QWUD3u) {
int proxy_ret_fzYyZyEasG = realsmith_xwjDUibs0j(&(p_0_Wuk0QWUD3u));
/*bef_stmt:17337*/
return /*TAG5:STA*/((int)(realsmith_m3CgJjvoMb((int)(proxy_ret_fzYyZyEasG)+(-215))+(int)(proxy_ret_fzYyZyEasG)-(319))+proxy_ret_fzYyZyEasG)/*TAG5:END:proxy_ret_fzYyZyEasG*/;
/*aft_stmt:17337*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_8VaS4kUJe5(x) (x)
#define Tag2_realsmith_8VaS4kUJe5(x) (x)
#include "stdint.h"
int realsmith_8VaS4kUJe5(int trans_type_realsmith_8VaS4kUJe5) {
    /*bef_stmt:2007*/
/*bef_stmt:2007*/
if (/*TAG1:STA*/((int)(realsmith_TxxZGUW6UB((int)(trans_type_realsmith_8VaS4kUJe5)+(-56), (int)(trans_type_realsmith_8VaS4kUJe5)+(-51), (int)(trans_type_realsmith_8VaS4kUJe5)+(-37))+(int)(trans_type_realsmith_8VaS4kUJe5)-(136))+trans_type_realsmith_8VaS4kUJe5)/*TAG1:END:trans_type_realsmith_8VaS4kUJe5*/ <= 0 || /*TAG2:STA*/((int)(realsmith_ouwud6IuS9((int)(trans_type_realsmith_8VaS4kUJe5)+(12), (int)(trans_type_realsmith_8VaS4kUJe5)+(27), (int)(trans_type_realsmith_8VaS4kUJe5)+(-33), (int)(trans_type_realsmith_8VaS4kUJe5)+(-45), (int)(trans_type_realsmith_8VaS4kUJe5)+(-50))+(int)(trans_type_realsmith_8VaS4kUJe5)-(71))+trans_type_realsmith_8VaS4kUJe5)/*TAG2:END:trans_type_realsmith_8VaS4kUJe5*/ >= 10)
        return -22;
/*aft_stmt:2007*/
/*aft_stmt:2007*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_a2qMjyRS6b(x) (x)
#define Tag2_realsmith_a2qMjyRS6b(x) (x)
#define Tag3_realsmith_a2qMjyRS6b(x) (x)
#define Tag4_realsmith_a2qMjyRS6b(x) (x)
#define Tag5_realsmith_a2qMjyRS6b(x) (x)
#define Tag6_realsmith_a2qMjyRS6b(x) (x)
#define Tag7_realsmith_a2qMjyRS6b(x) (x)
#define Tag8_realsmith_a2qMjyRS6b(x) (x)
#define Tag9_realsmith_a2qMjyRS6b(x) (x)
#define Tag10_realsmith_a2qMjyRS6b(x) (x)
#define Tag11_realsmith_a2qMjyRS6b(x) (x)
#define Tag12_realsmith_a2qMjyRS6b(x) (x)
#include "stdlib.h"
int realsmith_a2qMjyRS6b(int paprd_target_power_realsmith_a2qMjyRS6b, int cur_chan_realsmith_a2qMjyRS6b, int hw_version_realsmith_a2qMjyRS6b) {
    unsigned int power_realsmith_a2qMjyRS6b, scale_realsmith_a2qMjyRS6b, delta_realsmith_a2qMjyRS6b;
    /*bef_stmt:17208*/
scale_realsmith_a2qMjyRS6b = (/*TAG1:STA*/((int)(realsmith_proxy_aY4itWPDzd((int)(cur_chan_realsmith_a2qMjyRS6b)+(5), (int)(cur_chan_realsmith_a2qMjyRS6b)+(-62), (int)(cur_chan_realsmith_a2qMjyRS6b)+(-156), (int)(cur_chan_realsmith_a2qMjyRS6b)+(-31), (int)(cur_chan_realsmith_a2qMjyRS6b)+(9))+(int)(cur_chan_realsmith_a2qMjyRS6b)-(74))+cur_chan_realsmith_a2qMjyRS6b)/*TAG1:END:cur_chan_realsmith_a2qMjyRS6b*/ % 10) + 1;
/*aft_stmt:17208*/
    /*bef_stmt:17474*/
/*bef_stmt:17474*/
/*bef_stmt:17474*/
/*bef_stmt:17474*/
/*bef_stmt:17474*/
if (/*TAG2:STA*/((int)(realsmith_vBunmXFjlT((int)(hw_version_realsmith_a2qMjyRS6b)+(-5), (int)(hw_version_realsmith_a2qMjyRS6b)+(-51), (int)(hw_version_realsmith_a2qMjyRS6b)+(-45), (int)(hw_version_realsmith_a2qMjyRS6b)+(-2), (int)(hw_version_realsmith_a2qMjyRS6b)+(-90), (int)(hw_version_realsmith_a2qMjyRS6b)+(-5), (int)(hw_version_realsmith_a2qMjyRS6b)+(-59))+(int)(hw_version_realsmith_a2qMjyRS6b)-(69))+hw_version_realsmith_a2qMjyRS6b)/*TAG2:END:hw_version_realsmith_a2qMjyRS6b*/ == 9330 || /*TAG3:STA*/((int)(realsmith_AxyqyHyVHb((unsigned long)(hw_version_realsmith_a2qMjyRS6b)+(-76), (unsigned long)(hw_version_realsmith_a2qMjyRS6b)+(-54), (unsigned long)(hw_version_realsmith_a2qMjyRS6b)+(-52), (unsigned long)(hw_version_realsmith_a2qMjyRS6b)+(-65))+(unsigned long)(hw_version_realsmith_a2qMjyRS6b)-(106))+hw_version_realsmith_a2qMjyRS6b)/*TAG3:END:hw_version_realsmith_a2qMjyRS6b*/ == 9340 || /*TAG4:STA*/((int)(realsmith_49DMnAeG3R((int)(hw_version_realsmith_a2qMjyRS6b)+(-91), (int)(hw_version_realsmith_a2qMjyRS6b)+(-90))+(int)(hw_version_realsmith_a2qMjyRS6b)-(92))+hw_version_realsmith_a2qMjyRS6b)/*TAG4:END:hw_version_realsmith_a2qMjyRS6b*/ == 9462 || /*TAG5:STA*/((int)(realsmith_fdzTAGKq8Q((int)(hw_version_realsmith_a2qMjyRS6b)+(-56))+(int)(hw_version_realsmith_a2qMjyRS6b)-(91))+hw_version_realsmith_a2qMjyRS6b)/*TAG5:END:hw_version_realsmith_a2qMjyRS6b*/ == 9565) {
        /*bef_stmt:17306*/
power_realsmith_a2qMjyRS6b = Tag6_realsmith_a2qMjyRS6b(/*int:17492:17492:17306:e*/paprd_target_power_realsmith_a2qMjyRS6b) + 2;
/*aft_stmt:17306*/
    } else if (/*TAG7:STA*/((int)(realsmith_proxy_ZdiTwpyjGX((int)(hw_version_realsmith_a2qMjyRS6b)+(-44), (int)(hw_version_realsmith_a2qMjyRS6b)+(-98))+(int)(hw_version_realsmith_a2qMjyRS6b)-(91))+hw_version_realsmith_a2qMjyRS6b)/*TAG7:END:hw_version_realsmith_a2qMjyRS6b*/ == 9485) {
        power_realsmith_a2qMjyRS6b = 25;
    } else {
        power_realsmith_a2qMjyRS6b = 20;
        delta_realsmith_a2qMjyRS6b = (1);
        /*bef_stmt:17408*/
/*bef_stmt:17408*/
if (/*TAG8:STA*/((unsigned int)(realsmith_IcsJ2cQ1eB((int)(delta_realsmith_a2qMjyRS6b)+(37), (int)(delta_realsmith_a2qMjyRS6b)+(74))+(int)(delta_realsmith_a2qMjyRS6b)-(116))+delta_realsmith_a2qMjyRS6b)/*TAG8:END:delta_realsmith_a2qMjyRS6b*/ > /*TAG9:STA*/((unsigned int)(realsmith_proxy_n7FxvWEdnN((int)(scale_realsmith_a2qMjyRS6b)+(-5), (int)(scale_realsmith_a2qMjyRS6b)+(-6), (int)(scale_realsmith_a2qMjyRS6b)+(-2))+(int)(scale_realsmith_a2qMjyRS6b)-(5))+scale_realsmith_a2qMjyRS6b)/*TAG9:END:scale_realsmith_a2qMjyRS6b*/)
            return -1;
/*aft_stmt:17408*/
/*aft_stmt:17408*/
        /*bef_stmt:17458*/
/*bef_stmt:17458*/
if (/*TAG10:STA*/((unsigned int)(realsmith_BxMgarpcXG((unsigned long)(delta_realsmith_a2qMjyRS6b)+(83), (unsigned long)(delta_realsmith_a2qMjyRS6b)+(35), (int)(delta_realsmith_a2qMjyRS6b)+(79))+(int)(delta_realsmith_a2qMjyRS6b)-(1))+delta_realsmith_a2qMjyRS6b)/*TAG10:END:delta_realsmith_a2qMjyRS6b*/ < 4)
            power_realsmith_a2qMjyRS6b -= 4 - /*TAG11:STA*/((unsigned int)(realsmith_ZLCf6tuHmK((int)(delta_realsmith_a2qMjyRS6b)+(17), (int)(delta_realsmith_a2qMjyRS6b)+(31), (int)(delta_realsmith_a2qMjyRS6b)+(30))+(int)(delta_realsmith_a2qMjyRS6b)-(4))+delta_realsmith_a2qMjyRS6b)/*TAG11:END:delta_realsmith_a2qMjyRS6b*/;
/*aft_stmt:17458*/
/*aft_stmt:17458*/
    }
/*aft_stmt:17474*/
/*aft_stmt:17474*/
/*aft_stmt:17474*/
/*aft_stmt:17474*/
/*aft_stmt:17474*/
    /*bef_stmt:17490*/
return /*TAG12:STA*/((unsigned int)(realsmith_YZgk4qWMQc((int)(power_realsmith_a2qMjyRS6b)+(-7), (int)(power_realsmith_a2qMjyRS6b)+(54))+(int)(power_realsmith_a2qMjyRS6b)-(27))+power_realsmith_a2qMjyRS6b)/*TAG12:END:power_realsmith_a2qMjyRS6b*/;
/*aft_stmt:17490*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_UkQIvKdo2m(x) (x)
#define Tag2_realsmith_UkQIvKdo2m(x) (x)
#define Tag3_realsmith_UkQIvKdo2m(x) (x)
#define Tag4_realsmith_UkQIvKdo2m(x) (x)
#include "stdlib.h"
int realsmith_UkQIvKdo2m(int dir_realsmith_UkQIvKdo2m, unsigned int index_realsmith_UkQIvKdo2m, unsigned long unit_realsmith_UkQIvKdo2m) {
    struct {
        int channels_mask_realsmith_UkQIvKdo2m;
    } resources_realsmith_UkQIvKdo2m;
    struct {
        int dummy_realsmith_UkQIvKdo2m;
    } stream_realsmith_UkQIvKdo2m;
    int err_realsmith_UkQIvKdo2m;
    /*bef_stmt:17286*/
if (/*TAG1:STA*/((int)(realsmith_CzFekJ6lYg((int)(dir_realsmith_UkQIvKdo2m)+(-13), (int)(dir_realsmith_UkQIvKdo2m)+(-26), (int)(dir_realsmith_UkQIvKdo2m)+(-21), (int)(dir_realsmith_UkQIvKdo2m)+(-14), (int)(dir_realsmith_UkQIvKdo2m)+(-24), (int)(dir_realsmith_UkQIvKdo2m)+(-74), (int)(dir_realsmith_UkQIvKdo2m)+(-65), (int)(dir_realsmith_UkQIvKdo2m)+(-91), (int)(dir_realsmith_UkQIvKdo2m)+(-51), (int)(dir_realsmith_UkQIvKdo2m)+(-26), (int)(dir_realsmith_UkQIvKdo2m)+(-39))+(int)(dir_realsmith_UkQIvKdo2m)-(97))+dir_realsmith_UkQIvKdo2m)/*TAG1:END:dir_realsmith_UkQIvKdo2m*/ == 0) {
    } else {
    }
/*aft_stmt:17286*/
    resources_realsmith_UkQIvKdo2m.channels_mask_realsmith_UkQIvKdo2m = 0;
    err_realsmith_UkQIvKdo2m = 0;
    /*bef_stmt:17361*/
if (/*TAG2:STA*/((int)(realsmith_LsXz6t4qF0((int)(err_realsmith_UkQIvKdo2m)+(79), (int)(err_realsmith_UkQIvKdo2m)+(10), (int)(err_realsmith_UkQIvKdo2m)+(14), (int)(err_realsmith_UkQIvKdo2m)+(98))+(int)(err_realsmith_UkQIvKdo2m)-(1))+err_realsmith_UkQIvKdo2m)/*TAG2:END:err_realsmith_UkQIvKdo2m*/ < 0)
        goto end;
/*aft_stmt:17361*/
    resources_realsmith_UkQIvKdo2m.channels_mask_realsmith_UkQIvKdo2m = 0x00000000ffffffffuLL;
    err_realsmith_UkQIvKdo2m = 0;
    /*bef_stmt:17417*/
if (/*TAG3:STA*/((int)(realsmith_proxy_EbdcUpgrtD((int)(err_realsmith_UkQIvKdo2m)+(54), (int)(err_realsmith_UkQIvKdo2m)+(-64), (int)(err_realsmith_UkQIvKdo2m)+(-46))+(int)(err_realsmith_UkQIvKdo2m)-(10))+err_realsmith_UkQIvKdo2m)/*TAG3:END:err_realsmith_UkQIvKdo2m*/ < 0) {
    }
/*aft_stmt:17417*/
/*bef_stmt:17430*/
end:
    return /*TAG4:STA*/((int)(realsmith_kZ99RiFwhK((int)(err_realsmith_UkQIvKdo2m)+(77), (int)(err_realsmith_UkQIvKdo2m)+(92), (int)(err_realsmith_UkQIvKdo2m)+(12), (int)(err_realsmith_UkQIvKdo2m)+(40))+(int)(err_realsmith_UkQIvKdo2m)-(-1))+err_realsmith_UkQIvKdo2m)/*TAG4:END:err_realsmith_UkQIvKdo2m*/;
/*aft_stmt:17430*/
}



#include "stdlib.h"
int realsmith_KK3EXJ8e7f(int nalloc_realsmith_KK3EXJ8e7f, int len_realsmith_KK3EXJ8e7f, int *list_realsmith_KK3EXJ8e7f) {
    if (nalloc_realsmith_KK3EXJ8e7f <= 0 || len_realsmith_KK3EXJ8e7f < 0) {
        return -1;
    }
    if (len_realsmith_KK3EXJ8e7f >= nalloc_realsmith_KK3EXJ8e7f) {
        nalloc_realsmith_KK3EXJ8e7f *= 2;
    }
    for (int i_realsmith_KK3EXJ8e7f = 0; i_realsmith_KK3EXJ8e7f < len_realsmith_KK3EXJ8e7f; i_realsmith_KK3EXJ8e7f++) {
        list_realsmith_KK3EXJ8e7f[i_realsmith_KK3EXJ8e7f] = i_realsmith_KK3EXJ8e7f;
    }
    return len_realsmith_KK3EXJ8e7f;
}
int realsmith_proxy_wr27VdfIsJ(int p_0_uJRNmWV6IU, int p_1_654LQQkyRa, int p_2_BeaPPDfZ6u) {
int proxy_Saq6gxVmR3[20] = { p_2_BeaPPDfZ6u, p_2_BeaPPDfZ6u, p_2_BeaPPDfZ6u, 1, 38, p_2_BeaPPDfZ6u, 56, p_2_BeaPPDfZ6u, 52, p_2_BeaPPDfZ6u, 82, p_2_BeaPPDfZ6u, p_2_BeaPPDfZ6u, 95, p_2_BeaPPDfZ6u, p_2_BeaPPDfZ6u, 42, 14, p_2_BeaPPDfZ6u, p_2_BeaPPDfZ6u };
int proxy_ret_TjHtBeBr5f = realsmith_KK3EXJ8e7f(p_0_uJRNmWV6IU, p_1_654LQQkyRa, proxy_Saq6gxVmR3);
return proxy_ret_TjHtBeBr5f;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_IPmuHJ1vQ7(x) (x)
#define Tag2_realsmith_IPmuHJ1vQ7(x) (x)
#include "stdlib.h"
struct {
    struct {
        int timestmp_enable_realsmith_IPmuHJ1vQ7;
    } tx_rd_des23_realsmith_IPmuHJ1vQ7;
} tdes23_realsmith_IPmuHJ1vQ7;
int realsmith_IPmuHJ1vQ7(int timestmp_enable_realsmith_IPmuHJ1vQ7) {
    /*bef_stmt:17211*/
tdes23_realsmith_IPmuHJ1vQ7.tx_rd_des23_realsmith_IPmuHJ1vQ7.timestmp_enable_realsmith_IPmuHJ1vQ7 = Tag1_realsmith_IPmuHJ1vQ7(/*int:17247:17247:17211:e*/timestmp_enable_realsmith_IPmuHJ1vQ7);
/*aft_stmt:17211*/
    /*bef_stmt:17245*/
return Tag2_realsmith_IPmuHJ1vQ7(/*int:0:0:17245:e*/tdes23_realsmith_IPmuHJ1vQ7.tx_rd_des23_realsmith_IPmuHJ1vQ7.timestmp_enable_realsmith_IPmuHJ1vQ7);
/*aft_stmt:17245*/
}



#include "stdint.h"
int realsmith_p90eQoi3ZC(int type_realsmith_p90eQoi3ZC, int *max_spc_limit_realsmith_p90eQoi3ZC, int *max_ino_limit_realsmith_p90eQoi3ZC, int *igrace_realsmith_p90eQoi3ZC, int *bgrace_realsmith_p90eQoi3ZC) {
    int ret_realsmith_p90eQoi3ZC = sizeof(int) * 2;
    if (ret_realsmith_p90eQoi3ZC != sizeof(int) * 2) {
        if (ret_realsmith_p90eQoi3ZC >= 0)
            ret_realsmith_p90eQoi3ZC = -5;
        return ret_realsmith_p90eQoi3ZC;
    }
    *max_spc_limit_realsmith_p90eQoi3ZC = 0xffffffffULL << 10;
    *max_ino_limit_realsmith_p90eQoi3ZC = 0xffffffff;
    *igrace_realsmith_p90eQoi3ZC = 4294967295;
    *bgrace_realsmith_p90eQoi3ZC = 4294967295;
    return 0;
}
int realsmith_proxy_AVvwgvtza9(int p_0_HgshoD4LH1, int p_1_RYRreToue9, int p_2_AARme9f1Je, int p_3_bQGzFOul73, int p_4_xQFmtEPYFc) {
int proxy_FLkjDisPZi[19] = { 87, 78, 67, p_2_AARme9f1Je, 99, 38, p_2_AARme9f1Je, 19, 82, p_2_AARme9f1Je, 4, p_2_AARme9f1Je, p_2_AARme9f1Je, p_2_AARme9f1Je, 24, 37, p_2_AARme9f1Je, p_2_AARme9f1Je, 11 };
int proxy_9CF0hazfQs[11] = { p_3_bQGzFOul73, p_3_bQGzFOul73, 99, 84, p_3_bQGzFOul73, p_3_bQGzFOul73, 96, 15, 96, 74, p_3_bQGzFOul73 };
int proxy_Uc5oUinhwn[17] = { 45, p_4_xQFmtEPYFc, 40, 5, p_4_xQFmtEPYFc, p_4_xQFmtEPYFc, p_4_xQFmtEPYFc, 44, 65, 37, 99, p_4_xQFmtEPYFc, 21, p_4_xQFmtEPYFc, p_4_xQFmtEPYFc, 9, 54 };
int proxy_ret_BUoejG2Q0Y = realsmith_p90eQoi3ZC(p_0_HgshoD4LH1, &(p_1_RYRreToue9), proxy_FLkjDisPZi, proxy_9CF0hazfQs, proxy_Uc5oUinhwn);
return proxy_ret_BUoejG2Q0Y;
}


#include "stdlib.h"
int realsmith_JypayUCkzC(unsigned int offset_realsmith_JypayUCkzC, unsigned int bytes_realsmith_JypayUCkzC) {
    unsigned int *data_realsmith_JypayUCkzC = (unsigned int *)(malloc(bytes_realsmith_JypayUCkzC));
    if (data_realsmith_JypayUCkzC == ((void*)0)) {
        return -1;
    }
    for (unsigned int i_realsmith_JypayUCkzC = 0; i_realsmith_JypayUCkzC < bytes_realsmith_JypayUCkzC / sizeof(unsigned int); i_realsmith_JypayUCkzC++) {
        data_realsmith_JypayUCkzC[i_realsmith_JypayUCkzC] = offset_realsmith_JypayUCkzC + i_realsmith_JypayUCkzC;
    }
    (free(data_realsmith_JypayUCkzC));
    return 0;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_H2IH3zyQR0(x) (x)
#define Tag2_realsmith_H2IH3zyQR0(x) (x)
#define Tag3_realsmith_H2IH3zyQR0(x) (x)
#include "stdlib.h"
unsigned long realsmith_H2IH3zyQR0(int ifindex_realsmith_H2IH3zyQR0) {
    /*bef_stmt:17108*/
if (/*TAG1:STA*/((int)(realsmith_aIIIZgG7Tr((int)(ifindex_realsmith_H2IH3zyQR0)+(44), (int)(ifindex_realsmith_H2IH3zyQR0)+(11))+(int)(ifindex_realsmith_H2IH3zyQR0)-(7))+ifindex_realsmith_H2IH3zyQR0)/*TAG1:END:ifindex_realsmith_H2IH3zyQR0*/ == 0) {
        return 0;
    }
/*aft_stmt:17108*/
    unsigned long tb_id_realsmith_H2IH3zyQR0 = 0;
    /*bef_stmt:17168*/
tb_id_realsmith_H2IH3zyQR0 = (unsigned long)/*TAG2:STA*/((int)(realsmith_proxy_DftMEKMdNj((int)(ifindex_realsmith_H2IH3zyQR0)+(0), (unsigned long)(ifindex_realsmith_H2IH3zyQR0)+(7))+(int)(ifindex_realsmith_H2IH3zyQR0)-(8))+ifindex_realsmith_H2IH3zyQR0)/*TAG2:END:ifindex_realsmith_H2IH3zyQR0*/ * 10;
/*aft_stmt:17168*/
    /*bef_stmt:17179*/
return /*TAG3:STA*/((unsigned long)(realsmith_bPwuEC7Tom((int)(tb_id_realsmith_H2IH3zyQR0)+(-64), (int)(tb_id_realsmith_H2IH3zyQR0)+(-17), (long)(tb_id_realsmith_H2IH3zyQR0)+(-69), (long)(tb_id_realsmith_H2IH3zyQR0)+(18))+(int)(tb_id_realsmith_H2IH3zyQR0)-(80))+tb_id_realsmith_H2IH3zyQR0)/*TAG3:END:tb_id_realsmith_H2IH3zyQR0*/;
/*aft_stmt:17179*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_oGaTm2QWh7(x) (x)
#define Tag2_realsmith_oGaTm2QWh7(x) (x)
#define Tag3_realsmith_oGaTm2QWh7(x) (x)
#include "stdbool.h"
struct gpio_chip_NDMvKz {
    int base_realsmith_oGaTm2QWh7;
    bool can_sleep_realsmith_oGaTm2QWh7;
    int ngpio_realsmith_oGaTm2QWh7;
};
int realsmith_oGaTm2QWh7(int gpio_base_realsmith_oGaTm2QWh7) {
    struct gpio_chip_NDMvKz gpio_realsmith_oGaTm2QWh7;
    /*bef_stmt:671*/
gpio_realsmith_oGaTm2QWh7.base_realsmith_oGaTm2QWh7 = /*TAG1:STA*/((int)(realsmith_U7YAEztEPM((int)(gpio_base_realsmith_oGaTm2QWh7)+(2), (int)(gpio_base_realsmith_oGaTm2QWh7)+(23), (int)(gpio_base_realsmith_oGaTm2QWh7)+(-50), (unsigned int)(gpio_base_realsmith_oGaTm2QWh7)+(15))+(int)(gpio_base_realsmith_oGaTm2QWh7)-(59))+gpio_base_realsmith_oGaTm2QWh7)/*TAG1:END:gpio_base_realsmith_oGaTm2QWh7*/;
/*aft_stmt:671*/
    gpio_realsmith_oGaTm2QWh7.ngpio_realsmith_oGaTm2QWh7 = 128;
    gpio_realsmith_oGaTm2QWh7.can_sleep_realsmith_oGaTm2QWh7 = 0;
    /*bef_stmt:760*/
if (/*TAG2:STA*/((int)(realsmith_egI1crMkgS((int)(gpio_base_realsmith_oGaTm2QWh7)+(19))+(int)(gpio_base_realsmith_oGaTm2QWh7)-(123))+gpio_base_realsmith_oGaTm2QWh7)/*TAG2:END:gpio_base_realsmith_oGaTm2QWh7*/ == 0) {
        gpio_base_realsmith_oGaTm2QWh7 = -1;
    }
/*aft_stmt:760*/
    /*bef_stmt:777*/
return /*TAG3:STA*/((int)(realsmith_AlB2hOCN0w((int)(gpio_realsmith_oGaTm2QWh7.base_realsmith_oGaTm2QWh7)+(17), (int)(gpio_realsmith_oGaTm2QWh7.base_realsmith_oGaTm2QWh7)+(-47), (int)(gpio_realsmith_oGaTm2QWh7.base_realsmith_oGaTm2QWh7)+(32), (int)(gpio_realsmith_oGaTm2QWh7.base_realsmith_oGaTm2QWh7)+(-13), (int)(gpio_realsmith_oGaTm2QWh7.base_realsmith_oGaTm2QWh7)+(-15), (int)(gpio_realsmith_oGaTm2QWh7.base_realsmith_oGaTm2QWh7)+(35), (int)(gpio_realsmith_oGaTm2QWh7.base_realsmith_oGaTm2QWh7)+(27), (int)(gpio_realsmith_oGaTm2QWh7.base_realsmith_oGaTm2QWh7)+(37), (int)(gpio_realsmith_oGaTm2QWh7.base_realsmith_oGaTm2QWh7)+(-27), (int)(gpio_realsmith_oGaTm2QWh7.base_realsmith_oGaTm2QWh7)+(39), (int)(gpio_realsmith_oGaTm2QWh7.base_realsmith_oGaTm2QWh7)+(18), (int)(gpio_realsmith_oGaTm2QWh7.base_realsmith_oGaTm2QWh7)+(-40))+(int)(gpio_realsmith_oGaTm2QWh7.base_realsmith_oGaTm2QWh7)-(379))+gpio_realsmith_oGaTm2QWh7.base_realsmith_oGaTm2QWh7)/*TAG3:END:gpio_realsmith_oGaTm2QWh7.base_realsmith_oGaTm2QWh7*/;
/*aft_stmt:777*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_RnjVI65H4J(x) (x)
#define Tag2_realsmith_RnjVI65H4J(x) (x)
#define Tag3_realsmith_RnjVI65H4J(x) (x)
#define Tag4_realsmith_RnjVI65H4J(x) (x)
#include "stdlib.h"
int realsmith_RnjVI65H4J(int phy_addr_realsmith_RnjVI65H4J, int reg_addr_realsmith_RnjVI65H4J, int freq_realsmith_RnjVI65H4J) {
    unsigned long data_realsmith_RnjVI65H4J;
    int ret_realsmith_RnjVI65H4J;
    /*bef_stmt:17246*/
/*bef_stmt:17246*/
/*bef_stmt:17246*/
int gar_value_realsmith_RnjVI65H4J = 4 |
                    (/*TAG1:STA*/((int)(realsmith_nxzRcTQ50F((int)(phy_addr_realsmith_RnjVI65H4J)+(80), (int)(phy_addr_realsmith_RnjVI65H4J)+(23), (int)(phy_addr_realsmith_RnjVI65H4J)+(81))+(int)(phy_addr_realsmith_RnjVI65H4J)-(6))+phy_addr_realsmith_RnjVI65H4J)/*TAG1:END:phy_addr_realsmith_RnjVI65H4J*/ << 16) |
                    (/*TAG2:STA*/((int)(realsmith_l8eb5Gn3sk((int)(reg_addr_realsmith_RnjVI65H4J)+(51), (int)(reg_addr_realsmith_RnjVI65H4J)+(-9))+(int)(reg_addr_realsmith_RnjVI65H4J)-(53))+reg_addr_realsmith_RnjVI65H4J)/*TAG2:END:reg_addr_realsmith_RnjVI65H4J*/ << 8) |
                    (/*TAG3:STA*/((int)(realsmith_vtmF7mIJxJ((int)(freq_realsmith_RnjVI65H4J)+(-18), (int)(freq_realsmith_RnjVI65H4J)+(14))+(int)(freq_realsmith_RnjVI65H4J)-(34))+freq_realsmith_RnjVI65H4J)/*TAG3:END:freq_realsmith_RnjVI65H4J*/ << 2);
/*aft_stmt:17246*/
/*aft_stmt:17246*/
/*aft_stmt:17246*/
    data_realsmith_RnjVI65H4J = 1234;
    /*bef_stmt:17274*/
return /*TAG4:STA*/((unsigned long)(realsmith_rxafB6KKWf((int)(data_realsmith_RnjVI65H4J)+(-1189))+(int)(data_realsmith_RnjVI65H4J)-(1442))+data_realsmith_RnjVI65H4J)/*TAG4:END:data_realsmith_RnjVI65H4J*/;
/*aft_stmt:17274*/
}



#include "stdint.h"
int realsmith_a6YOZU3DB3(int client_realsmith_a6YOZU3DB3, int address_realsmith_a6YOZU3DB3, int mask_realsmith_a6YOZU3DB3, int *val_realsmith_a6YOZU3DB3, int *val2_realsmith_a6YOZU3DB3) {
    int ret_realsmith_a6YOZU3DB3;
    switch (mask_realsmith_a6YOZU3DB3) {
    case 1:
        ret_realsmith_a6YOZU3DB3 = (client_realsmith_a6YOZU3DB3 + address_realsmith_a6YOZU3DB3) % 65536;
        if (ret_realsmith_a6YOZU3DB3 < 0)
            return ret_realsmith_a6YOZU3DB3;
        *val_realsmith_a6YOZU3DB3 = (short)ret_realsmith_a6YOZU3DB3 >> 2;
        return 0;
    case 2:
        *val_realsmith_a6YOZU3DB3 = 0;
        *val2_realsmith_a6YOZU3DB3 = 1000;
        return 1;
    default:
        return -22;
    }
}
int realsmith_proxy_piPwA8xvLD(int p_0_79TtQYEboU, int p_1_zp5IY8x7CN, int p_2_36nMRWME6F, int p_3_zqj9GNaog9, int p_4_Y0sgZg2L8A) {
int proxy_rwCqTXzldt[10] = { 47, p_3_zqj9GNaog9, 22, 20, 11, 42, 18, p_3_zqj9GNaog9, p_3_zqj9GNaog9, 76 };
int proxy_ret_eCUGYUrBbl = realsmith_a6YOZU3DB3(p_0_79TtQYEboU, p_1_zp5IY8x7CN, p_2_36nMRWME6F, proxy_rwCqTXzldt, &(p_4_Y0sgZg2L8A));
return proxy_ret_eCUGYUrBbl;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_F1DdMizcKp(x) (x)
#define Tag2_realsmith_F1DdMizcKp(x) (x)
#define Tag3_realsmith_F1DdMizcKp(x) (x)
#define Tag4_realsmith_F1DdMizcKp(x) (x)
#define Tag5_realsmith_F1DdMizcKp(x) (x)
#define Tag6_realsmith_F1DdMizcKp(x) (x)
#define Tag7_realsmith_F1DdMizcKp(x) (x)
#define Tag8_realsmith_F1DdMizcKp(x) (x)
#define Tag9_realsmith_F1DdMizcKp(x) (x)
#define Tag10_realsmith_F1DdMizcKp(x) (x)
#define Tag11_realsmith_F1DdMizcKp(x) (x)
#define Tag12_realsmith_F1DdMizcKp(x) (x)
#include "stdlib.h"
struct btrfs_block_group_cache_HwfgF8 {
    int lock_realsmith_F1DdMizcKp;
    unsigned long delalloc_bytes_realsmith_F1DdMizcKp;
    unsigned long fs_info_realsmith_F1DdMizcKp;
    unsigned long reserved_realsmith_F1DdMizcKp;
    int ro_realsmith_F1DdMizcKp;
    unsigned long space_info_realsmith_F1DdMizcKp;
};
struct btrfs_space_info_HwfgF8 {
    int lock_realsmith_F1DdMizcKp;
    unsigned long flags_realsmith_F1DdMizcKp;
    unsigned long bytes_reserved_realsmith_F1DdMizcKp;
};
int realsmith_F1DdMizcKp(int cache_lock_realsmith_F1DdMizcKp, unsigned long cache_reserved_realsmith_F1DdMizcKp, unsigned long cache_delalloc_bytes_realsmith_F1DdMizcKp,
                             int cache_ro_realsmith_F1DdMizcKp, unsigned long space_info_lock_realsmith_F1DdMizcKp, unsigned long space_info_bytes_reserved_realsmith_F1DdMizcKp,
                             unsigned long ram_bytes_realsmith_F1DdMizcKp, unsigned long num_bytes_realsmith_F1DdMizcKp, int delalloc_realsmith_F1DdMizcKp) {
    struct btrfs_space_info_HwfgF8 space_info_realsmith_F1DdMizcKp;
    struct btrfs_block_group_cache_HwfgF8 cache_realsmith_F1DdMizcKp;
    /*bef_stmt:17467*/
cache_realsmith_F1DdMizcKp.lock_realsmith_F1DdMizcKp = /*TAG1:STA*/((int)(realsmith_cjSnJG1rWK((int)(cache_lock_realsmith_F1DdMizcKp)+(-44), (int)(cache_lock_realsmith_F1DdMizcKp)+(-95), (int)(cache_lock_realsmith_F1DdMizcKp)+(-19))+(int)(cache_lock_realsmith_F1DdMizcKp)-(99))+cache_lock_realsmith_F1DdMizcKp)/*TAG1:END:cache_lock_realsmith_F1DdMizcKp*/;
/*aft_stmt:17467*/
    /*bef_stmt:17504*/
cache_realsmith_F1DdMizcKp.reserved_realsmith_F1DdMizcKp = /*TAG2:STA*/((unsigned long)(realsmith_proxy_OWheRrtEH5((int)(cache_reserved_realsmith_F1DdMizcKp)+(-14), (unsigned int)(cache_reserved_realsmith_F1DdMizcKp)+(-7))+(int)(cache_reserved_realsmith_F1DdMizcKp)-(218103892))+cache_reserved_realsmith_F1DdMizcKp)/*TAG2:END:cache_reserved_realsmith_F1DdMizcKp*/;
/*aft_stmt:17504*/
    /*bef_stmt:17525*/
cache_realsmith_F1DdMizcKp.delalloc_bytes_realsmith_F1DdMizcKp = /*TAG3:STA*/((unsigned long)(realsmith_4gUcrt0eZS((int)(cache_delalloc_bytes_realsmith_F1DdMizcKp)+(-1))+(int)(cache_delalloc_bytes_realsmith_F1DdMizcKp)-(56))+cache_delalloc_bytes_realsmith_F1DdMizcKp)/*TAG3:END:cache_delalloc_bytes_realsmith_F1DdMizcKp*/;
/*aft_stmt:17525*/
    /*bef_stmt:17546*/
cache_realsmith_F1DdMizcKp.ro_realsmith_F1DdMizcKp = /*TAG4:STA*/((int)(realsmith_M4MFsP5BY2((int)(cache_ro_realsmith_F1DdMizcKp)+(-25), (int)(cache_ro_realsmith_F1DdMizcKp)+(18), (int)(cache_ro_realsmith_F1DdMizcKp)+(-64), (unsigned long)(cache_ro_realsmith_F1DdMizcKp)+(-7), (unsigned long)(cache_ro_realsmith_F1DdMizcKp)+(2), (unsigned long)(cache_ro_realsmith_F1DdMizcKp)+(6), (int)(cache_ro_realsmith_F1DdMizcKp)+(-40), (int)(cache_ro_realsmith_F1DdMizcKp)+(27), (unsigned long)(cache_ro_realsmith_F1DdMizcKp)+(6), (unsigned long)(cache_ro_realsmith_F1DdMizcKp)+(-54), (unsigned long)(cache_ro_realsmith_F1DdMizcKp)+(-5), (unsigned int)(cache_ro_realsmith_F1DdMizcKp)+(-26))+(int)(cache_ro_realsmith_F1DdMizcKp)-(66))+cache_ro_realsmith_F1DdMizcKp)/*TAG4:END:cache_ro_realsmith_F1DdMizcKp*/;
/*aft_stmt:17546*/
    /*bef_stmt:17570*/
space_info_realsmith_F1DdMizcKp.lock_realsmith_F1DdMizcKp = /*TAG5:STA*/((unsigned long)(realsmith_UhacbLx1Ie((int)(space_info_lock_realsmith_F1DdMizcKp)+(46))+(int)(space_info_lock_realsmith_F1DdMizcKp)-(10))+space_info_lock_realsmith_F1DdMizcKp)/*TAG5:END:space_info_lock_realsmith_F1DdMizcKp*/;
/*aft_stmt:17570*/
    /*bef_stmt:17604*/
space_info_realsmith_F1DdMizcKp.bytes_reserved_realsmith_F1DdMizcKp = /*TAG6:STA*/((unsigned long)(realsmith_proxy_WlW3JyF0Mo((int)(space_info_bytes_reserved_realsmith_F1DdMizcKp)+(-25), (int)(space_info_bytes_reserved_realsmith_F1DdMizcKp)+(-24), (int)(space_info_bytes_reserved_realsmith_F1DdMizcKp)+(-26), (int)(space_info_bytes_reserved_realsmith_F1DdMizcKp)+(-31), (int)(space_info_bytes_reserved_realsmith_F1DdMizcKp)+(-27), (int)(space_info_bytes_reserved_realsmith_F1DdMizcKp)+(-24), (unsigned char)(space_info_bytes_reserved_realsmith_F1DdMizcKp)+(-30))+(int)(space_info_bytes_reserved_realsmith_F1DdMizcKp)-(27))+space_info_bytes_reserved_realsmith_F1DdMizcKp)/*TAG6:END:space_info_bytes_reserved_realsmith_F1DdMizcKp*/;
/*aft_stmt:17604*/
    int ret_realsmith_F1DdMizcKp = 0;
    /*bef_stmt:17750*/
if (/*TAG7:STA*/((int)(realsmith_pmyZc5BdOF((int)(cache_realsmith_F1DdMizcKp.ro_realsmith_F1DdMizcKp)+(-60), (int)(cache_realsmith_F1DdMizcKp.ro_realsmith_F1DdMizcKp)+(-62), (int)(cache_realsmith_F1DdMizcKp.ro_realsmith_F1DdMizcKp)+(-60))+(int)(cache_realsmith_F1DdMizcKp.ro_realsmith_F1DdMizcKp)-(134))+cache_realsmith_F1DdMizcKp.ro_realsmith_F1DdMizcKp)/*TAG7:END:cache_realsmith_F1DdMizcKp.ro_realsmith_F1DdMizcKp*/) {
        ret_realsmith_F1DdMizcKp = -1;
    } else {
        /*bef_stmt:17679*/
cache_realsmith_F1DdMizcKp.reserved_realsmith_F1DdMizcKp += Tag8_realsmith_F1DdMizcKp(/*unsigned long:17765:17765:17679:e*/num_bytes_realsmith_F1DdMizcKp);
/*aft_stmt:17679*/
        /*bef_stmt:17702*/
space_info_realsmith_F1DdMizcKp.bytes_reserved_realsmith_F1DdMizcKp += Tag9_realsmith_F1DdMizcKp(/*unsigned long:17765:17765:17702:e*/num_bytes_realsmith_F1DdMizcKp);
/*aft_stmt:17702*/
        /*bef_stmt:17741*/
if (Tag10_realsmith_F1DdMizcKp(/*int:17765:17765:17741:e*/delalloc_realsmith_F1DdMizcKp)) {
            /*bef_stmt:17732*/
cache_realsmith_F1DdMizcKp.delalloc_bytes_realsmith_F1DdMizcKp += Tag11_realsmith_F1DdMizcKp(/*unsigned long:17765:17765:17732:e*/num_bytes_realsmith_F1DdMizcKp);
/*aft_stmt:17732*/
        }
/*aft_stmt:17741*/
    }
/*aft_stmt:17750*/
    /*bef_stmt:17763*/
return /*TAG12:STA*/((int)(realsmith_jbjbW77Vko((int)(ret_realsmith_F1DdMizcKp)+(25), (int)(ret_realsmith_F1DdMizcKp)+(25))+(int)(ret_realsmith_F1DdMizcKp)-(-1))+ret_realsmith_F1DdMizcKp)/*TAG12:END:ret_realsmith_F1DdMizcKp*/;
/*aft_stmt:17763*/
}



#include "stdlib.h"
int realsmith_Lwi1ry3zox(int i2c_intf_realsmith_Lwi1ry3zox, int i2c_addr_realsmith_Lwi1ry3zox, int reg_realsmith_Lwi1ry3zox, int val_realsmith_Lwi1ry3zox) {
    unsigned char row_realsmith_Lwi1ry3zox[8];
    row_realsmith_Lwi1ry3zox[0] = i2c_intf_realsmith_Lwi1ry3zox | (2 << 4);
    row_realsmith_Lwi1ry3zox[1] = (unsigned char)i2c_addr_realsmith_Lwi1ry3zox;
    row_realsmith_Lwi1ry3zox[2] = (unsigned char)reg_realsmith_Lwi1ry3zox;
    row_realsmith_Lwi1ry3zox[3] = (unsigned char)val_realsmith_Lwi1ry3zox;
    row_realsmith_Lwi1ry3zox[4] = 0x00;
    row_realsmith_Lwi1ry3zox[5] = 0x00;
    row_realsmith_Lwi1ry3zox[6] = 0x00;
    row_realsmith_Lwi1ry3zox[7] = 0x10;
    int checksum_realsmith_Lwi1ry3zox = 0;
    for (int i_realsmith_Lwi1ry3zox = 0; i_realsmith_Lwi1ry3zox < 8; i_realsmith_Lwi1ry3zox++) {
        checksum_realsmith_Lwi1ry3zox += row_realsmith_Lwi1ry3zox[i_realsmith_Lwi1ry3zox];
    }
    return checksum_realsmith_Lwi1ry3zox;
}
#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_5UxDx5j43E(x) (x)
#define Tag2_realsmith_5UxDx5j43E(x) (x)
#define Tag3_realsmith_5UxDx5j43E(x) (x)
#define Tag4_realsmith_5UxDx5j43E(x) (x)
#define Tag5_realsmith_5UxDx5j43E(x) (x)
#define Tag6_realsmith_5UxDx5j43E(x) (x)
#define Tag7_realsmith_5UxDx5j43E(x) (x)
#define Tag8_realsmith_5UxDx5j43E(x) (x)
#define Tag9_realsmith_5UxDx5j43E(x) (x)
#define Tag10_realsmith_5UxDx5j43E(x) (x)
#define Tag11_realsmith_5UxDx5j43E(x) (x)
#define Tag12_realsmith_5UxDx5j43E(x) (x)
#define Tag13_realsmith_5UxDx5j43E(x) (x)
#define Tag14_realsmith_5UxDx5j43E(x) (x)
#define Tag15_realsmith_5UxDx5j43E(x) (x)
#define Tag16_realsmith_5UxDx5j43E(x) (x)
#define Tag17_realsmith_5UxDx5j43E(x) (x)
#define Tag18_realsmith_5UxDx5j43E(x) (x)
#define Tag19_realsmith_5UxDx5j43E(x) (x)
#define Tag20_realsmith_5UxDx5j43E(x) (x)
#define Tag21_realsmith_5UxDx5j43E(x) (x)
#define Tag22_realsmith_5UxDx5j43E(x) (x)
#define Tag23_realsmith_5UxDx5j43E(x) (x)
#define Tag24_realsmith_5UxDx5j43E(x) (x)
#define Tag25_realsmith_5UxDx5j43E(x) (x)
#define Tag26_realsmith_5UxDx5j43E(x) (x)
#define Tag27_realsmith_5UxDx5j43E(x) (x)
#include "stdlib.h"
int realsmith_5UxDx5j43E(int baud_us_realsmith_5UxDx5j43E, int ts_nsec_realsmith_5UxDx5j43E, unsigned char curs_realsmith_5UxDx5j43E, int pll_time_realsmith_5UxDx5j43E, int shreg_realsmith_5UxDx5j43E, int dcd_time_realsmith_5UxDx5j43E, int dcd_sum0_realsmith_5UxDx5j43E, int dcd_sum1_realsmith_5UxDx5j43E, int dcd_sum2_realsmith_5UxDx5j43E, unsigned char last_rxbit_realsmith_5UxDx5j43E, int opt_dcd_realsmith_5UxDx5j43E) {
    int timediff_realsmith_5UxDx5j43E;
    /*bef_stmt:17321*/
int bdus8_realsmith_5UxDx5j43E = /*TAG1:STA*/((int)(realsmith_RnjVI65H4J((int)(baud_us_realsmith_5UxDx5j43E)+(-77), (int)(baud_us_realsmith_5UxDx5j43E)+(-53), (int)(baud_us_realsmith_5UxDx5j43E)+(-49))+(int)(baud_us_realsmith_5UxDx5j43E)-(1318))+baud_us_realsmith_5UxDx5j43E)/*TAG1:END:baud_us_realsmith_5UxDx5j43E*/ >> 3;
/*aft_stmt:17321*/
    /*bef_stmt:17355*/
int bdus4_realsmith_5UxDx5j43E = /*TAG2:STA*/((int)(realsmith_proxy_piPwA8xvLD((int)(baud_us_realsmith_5UxDx5j43E)+(-15), (int)(baud_us_realsmith_5UxDx5j43E)+(7), (int)(baud_us_realsmith_5UxDx5j43E)+(-40), (int)(baud_us_realsmith_5UxDx5j43E)+(-176), (int)(baud_us_realsmith_5UxDx5j43E)+(-113))+(int)(baud_us_realsmith_5UxDx5j43E)-(62))+baud_us_realsmith_5UxDx5j43E)/*TAG2:END:baud_us_realsmith_5UxDx5j43E*/ >> 2;
/*aft_stmt:17355*/
    /*bef_stmt:17389*/
int bdus2_realsmith_5UxDx5j43E = /*TAG3:STA*/((int)(realsmith_ll1vp4y27X((int)(baud_us_realsmith_5UxDx5j43E)+(-16), (int)(baud_us_realsmith_5UxDx5j43E)+(6))+(int)(baud_us_realsmith_5UxDx5j43E)-(174))+baud_us_realsmith_5UxDx5j43E)/*TAG3:END:baud_us_realsmith_5UxDx5j43E*/ >> 1;
/*aft_stmt:17389*/
    /*bef_stmt:17430*/
/*bef_stmt:17430*/
timediff_realsmith_5UxDx5j43E = 1000000 + /*TAG4:STA*/((int)(realsmith_UkQIvKdo2m((int)(ts_nsec_realsmith_5UxDx5j43E)+(29), (unsigned int)(ts_nsec_realsmith_5UxDx5j43E)+(-31), (unsigned long)(ts_nsec_realsmith_5UxDx5j43E)+(-17))+(int)(ts_nsec_realsmith_5UxDx5j43E)-(68))+ts_nsec_realsmith_5UxDx5j43E)/*TAG4:END:ts_nsec_realsmith_5UxDx5j43E*/ / 1000 - /*TAG5:STA*/((int)(realsmith_F1DdMizcKp((int)(pll_time_realsmith_5UxDx5j43E)+(65), (unsigned long)(pll_time_realsmith_5UxDx5j43E)+(34), (unsigned long)(pll_time_realsmith_5UxDx5j43E)+(21), (int)(pll_time_realsmith_5UxDx5j43E)+(31), (unsigned long)(pll_time_realsmith_5UxDx5j43E)+(-24), (unsigned long)(pll_time_realsmith_5UxDx5j43E)+(-8), (unsigned long)(pll_time_realsmith_5UxDx5j43E)+(-25), (unsigned long)(pll_time_realsmith_5UxDx5j43E)+(-5), (int)(pll_time_realsmith_5UxDx5j43E)+(-3))+(int)(pll_time_realsmith_5UxDx5j43E)-(33))+pll_time_realsmith_5UxDx5j43E)/*TAG5:END:pll_time_realsmith_5UxDx5j43E*/;
/*aft_stmt:17430*/
/*aft_stmt:17430*/
    /*bef_stmt:17463*/
while (/*TAG6:STA*/((int)(realsmith_SxWqFBnyIv((int)(pll_time_realsmith_5UxDx5j43E)+(30), (int)(pll_time_realsmith_5UxDx5j43E)+(12), (int)(pll_time_realsmith_5UxDx5j43E)+(-28), (int)(baud_us_realsmith_5UxDx5j43E)+(-67))+(int)(pll_time_realsmith_5UxDx5j43E)+(int)(baud_us_realsmith_5UxDx5j43E)+(int)(ts_nsec_realsmith_5UxDx5j43E)-(187))+timediff_realsmith_5UxDx5j43E)/*TAG6:END:timediff_realsmith_5UxDx5j43E*/ >= 500000)
        timediff_realsmith_5UxDx5j43E -= 1000000;
/*aft_stmt:17463*/
    /*bef_stmt:17584*/
/*bef_stmt:17584*/
while (/*TAG7:STA*/((int)(realsmith_JypayUCkzC((unsigned int)(timediff_realsmith_5UxDx5j43E)+(-4294967200), (unsigned int)(timediff_realsmith_5UxDx5j43E)+(-4294967177))+(int)(timediff_realsmith_5UxDx5j43E)-(-34))+timediff_realsmith_5UxDx5j43E)/*TAG7:END:timediff_realsmith_5UxDx5j43E*/ >= /*TAG8:STA*/((int)(realsmith_8VaS4kUJe5((int)(bdus2_realsmith_5UxDx5j43E)+(28))+(int)(bdus2_realsmith_5UxDx5j43E)-(20))+bdus2_realsmith_5UxDx5j43E)/*TAG8:END:bdus2_realsmith_5UxDx5j43E*/) {
        /*bef_stmt:17496*/
timediff_realsmith_5UxDx5j43E -= Tag9_realsmith_5UxDx5j43E(/*int:17951:17951:17496:e*/baud_us_realsmith_5UxDx5j43E);
/*aft_stmt:17496*/
        /*bef_stmt:17513*/
pll_time_realsmith_5UxDx5j43E += Tag10_realsmith_5UxDx5j43E(/*int:17951:17951:17513:e*/baud_us_realsmith_5UxDx5j43E);
/*aft_stmt:17513*/
        dcd_time_realsmith_5UxDx5j43E--;
        /*bef_stmt:17556*/
if (Tag11_realsmith_5UxDx5j43E(/*int:17951:17951:17556:e*/shreg_realsmith_5UxDx5j43E) & 1) {
            shreg_realsmith_5UxDx5j43E = 0x10000;
        }
/*aft_stmt:17556*/
        shreg_realsmith_5UxDx5j43E >>= 1;
    }
/*aft_stmt:17584*/
/*aft_stmt:17584*/
    /*bef_stmt:17731*/
if (/*TAG12:STA*/((int)(realsmith_5s9Jg9lLjK((int)(dcd_time_realsmith_5UxDx5j43E)+(-28), (int)(dcd_time_realsmith_5UxDx5j43E)+(57), (int)(dcd_time_realsmith_5UxDx5j43E)+(-12))+(int)(dcd_time_realsmith_5UxDx5j43E)-(30))+dcd_time_realsmith_5UxDx5j43E)/*TAG12:END:dcd_time_realsmith_5UxDx5j43E*/ <= 0) {
        /*bef_stmt:17664*/
/*bef_stmt:17664*/
/*bef_stmt:17664*/
/*bef_stmt:17664*/
if (!Tag13_realsmith_5UxDx5j43E(/*int:17951:17951:17664:e*/opt_dcd_realsmith_5UxDx5j43E))
            dcd_sum0_realsmith_5UxDx5j43E += (Tag14_realsmith_5UxDx5j43E(/*int:17951:17951:17664:e*/dcd_sum0_realsmith_5UxDx5j43E) + Tag15_realsmith_5UxDx5j43E(/*int:17951:17951:17664:e*/dcd_sum1_realsmith_5UxDx5j43E) + Tag16_realsmith_5UxDx5j43E(/*int:17951:17951:17664:e*/dcd_sum2_realsmith_5UxDx5j43E)) < 0;
/*aft_stmt:17664*/
/*aft_stmt:17664*/
/*aft_stmt:17664*/
/*aft_stmt:17664*/
        /*bef_stmt:17679*/
dcd_sum2_realsmith_5UxDx5j43E = Tag17_realsmith_5UxDx5j43E(/*int:17951:17951:17679:e*/dcd_sum1_realsmith_5UxDx5j43E);
/*aft_stmt:17679*/
        /*bef_stmt:17694*/
dcd_sum1_realsmith_5UxDx5j43E = Tag18_realsmith_5UxDx5j43E(/*int:17951:17951:17694:e*/dcd_sum0_realsmith_5UxDx5j43E);
/*aft_stmt:17694*/
        dcd_sum0_realsmith_5UxDx5j43E = 2;
        dcd_time_realsmith_5UxDx5j43E += 120;
    }
/*aft_stmt:17731*/
    /*bef_stmt:17903*/
/*bef_stmt:17903*/
if (/*TAG19:STA*/((unsigned char)(realsmith_proxy_L16NRwb5ju((int)(bdus2_realsmith_5UxDx5j43E)+(-40), (int)(dcd_time_realsmith_5UxDx5j43E)+(-27), (int)(bdus2_realsmith_5UxDx5j43E)+(-42), (int)(dcd_sum2_realsmith_5UxDx5j43E)+(-47), (int)(bdus2_realsmith_5UxDx5j43E)+(-37), (int)(bdus2_realsmith_5UxDx5j43E)+(-37), (int)(dcd_sum2_realsmith_5UxDx5j43E)+(-41), (int)(dcd_time_realsmith_5UxDx5j43E)+(-31), (int)(bdus2_realsmith_5UxDx5j43E)+(-43), (int)(dcd_sum2_realsmith_5UxDx5j43E)+(-45))+(int)(dcd_time_realsmith_5UxDx5j43E)+(int)(dcd_sum2_realsmith_5UxDx5j43E)+(int)(bdus2_realsmith_5UxDx5j43E)-(120))+last_rxbit_realsmith_5UxDx5j43E)/*TAG19:END:last_rxbit_realsmith_5UxDx5j43E*/ != /*TAG20:STA*/((unsigned char)(realsmith_oGaTm2QWh7((int)(curs_realsmith_5UxDx5j43E)+(43))+(int)(curs_realsmith_5UxDx5j43E)-(75))+curs_realsmith_5UxDx5j43E)/*TAG20:END:curs_realsmith_5UxDx5j43E*/) {
        /*bef_stmt:17770*/
last_rxbit_realsmith_5UxDx5j43E = /*TAG21:STA*/((unsigned char)(realsmith_H2IH3zyQR0((int)(curs_realsmith_5UxDx5j43E)+(-8))+(unsigned long)(curs_realsmith_5UxDx5j43E)-(96))+curs_realsmith_5UxDx5j43E)/*TAG21:END:curs_realsmith_5UxDx5j43E*/;
/*aft_stmt:17770*/
        shreg_realsmith_5UxDx5j43E |= 0x10000;
        /*bef_stmt:17845*/
/*bef_stmt:17845*/
/*bef_stmt:17845*/
if (/*TAG22:STA*/((int)(realsmith_IPmuHJ1vQ7((int)(timediff_realsmith_5UxDx5j43E)+(49))+(int)(timediff_realsmith_5UxDx5j43E)+(int)(dcd_time_realsmith_5UxDx5j43E)+(int)(shreg_realsmith_5UxDx5j43E)+(int)(baud_us_realsmith_5UxDx5j43E)+(int)(dcd_sum1_realsmith_5UxDx5j43E)-(65755))+timediff_realsmith_5UxDx5j43E)/*TAG22:END:timediff_realsmith_5UxDx5j43E*/ > 0)
            pll_time_realsmith_5UxDx5j43E += /*TAG23:STA*/((int)(realsmith_proxy_AVvwgvtza9((int)(bdus8_realsmith_5UxDx5j43E)+(-3), (int)(bdus8_realsmith_5UxDx5j43E)+(-4), (int)(bdus8_realsmith_5UxDx5j43E)+(-14), (int)(bdus8_realsmith_5UxDx5j43E)+(-77), (int)(bdus8_realsmith_5UxDx5j43E)+(60))+(int)(bdus8_realsmith_5UxDx5j43E)-(10))+bdus8_realsmith_5UxDx5j43E)/*TAG23:END:bdus8_realsmith_5UxDx5j43E*/;
        else
            pll_time_realsmith_5UxDx5j43E += 1000000 - /*TAG24:STA*/((int)(realsmith_proxy_wr27VdfIsJ((int)(bdus8_realsmith_5UxDx5j43E)+(-8), (int)(bdus8_realsmith_5UxDx5j43E)+(-5), (int)(bdus8_realsmith_5UxDx5j43E)+(-15))+(int)(bdus8_realsmith_5UxDx5j43E)-(15))+bdus8_realsmith_5UxDx5j43E)/*TAG24:END:bdus8_realsmith_5UxDx5j43E*/;
/*aft_stmt:17845*/
/*aft_stmt:17845*/
/*aft_stmt:17845*/
        /*bef_stmt:17891*/
if ((1) > /*TAG25:STA*/((int)(realsmith_Lwi1ry3zox((int)(bdus4_realsmith_5UxDx5j43E)+(-16), (int)(bdus4_realsmith_5UxDx5j43E)+(33), (int)(bdus4_realsmith_5UxDx5j43E)+(21), (int)(bdus4_realsmith_5UxDx5j43E)+(2))+(int)(bdus4_realsmith_5UxDx5j43E)-(193))+bdus4_realsmith_5UxDx5j43E)/*TAG25:END:bdus4_realsmith_5UxDx5j43E*/)
            dcd_sum0_realsmith_5UxDx5j43E += 4;
        else
            dcd_sum0_realsmith_5UxDx5j43E--;
/*aft_stmt:17891*/
    }
/*aft_stmt:17903*/
/*aft_stmt:17903*/
    /*bef_stmt:17938*/
while (/*TAG26:STA*/((int)(realsmith_a2qMjyRS6b((int)(dcd_sum1_realsmith_5UxDx5j43E)+(-32), (int)(bdus2_realsmith_5UxDx5j43E)+(32), (int)(dcd_sum2_realsmith_5UxDx5j43E)+(49))+(int)(shreg_realsmith_5UxDx5j43E)+(int)(dcd_sum2_realsmith_5UxDx5j43E)+(int)(bdus2_realsmith_5UxDx5j43E)+(int)(bdus8_realsmith_5UxDx5j43E)+(int)(dcd_sum1_realsmith_5UxDx5j43E)-(65770))+pll_time_realsmith_5UxDx5j43E)/*TAG26:END:pll_time_realsmith_5UxDx5j43E*/ >= 1000000)
        pll_time_realsmith_5UxDx5j43E -= 1000000;
/*aft_stmt:17938*/
    /*bef_stmt:17949*/
return /*TAG27:STA*/((int)(realsmith_proxy_VC4v73FoMz((int)(pll_time_realsmith_5UxDx5j43E)+(45))+(int)(pll_time_realsmith_5UxDx5j43E)-(280))+pll_time_realsmith_5UxDx5j43E)/*TAG27:END:pll_time_realsmith_5UxDx5j43E*/;
/*aft_stmt:17949*/
}


#include <stdio.h>
#include <inttypes.h>
int main() {
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    transparent_crc(realsmith_5UxDx5j43E(84,68,16,34,28,31,3,95,42,71,59), "realsmith_5UxDx5j43E(84,68,16,34,28,31,3,95,42,71,59)", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
/* EXITof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -O0 -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -O0 -fno-strict-aliasing: CA7CF5F7 */
/* EXITof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -O1 -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -O1 -fno-strict-aliasing: CA7CF5F7 */
/* EXITof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -O2 -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -O2 -fno-strict-aliasing: CA7CF5F7 */
/* EXITof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -O3 -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -O3 -fno-strict-aliasing: CA7CF5F7 */
/* EXITof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -Os -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -Os -fno-strict-aliasing: CA7CF5F7 */
/* EXITof /home/yunbo/eval/compilers/llvm_latest/bin/clang -O0 -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/llvm_latest/bin/clang -O0 -fno-strict-aliasing: CA7CF5F7 */
/* EXITof /home/yunbo/eval/compilers/llvm_latest/bin/clang -O1 -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/llvm_latest/bin/clang -O1 -fno-strict-aliasing: CA7CF5F7 */
/* EXITof /home/yunbo/eval/compilers/llvm_latest/bin/clang -O2 -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/llvm_latest/bin/clang -O2 -fno-strict-aliasing: A988DFF7 */
/* EXITof /home/yunbo/eval/compilers/llvm_latest/bin/clang -O3 -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/llvm_latest/bin/clang -O3 -fno-strict-aliasing: CA7CF5F7 */
/* EXITof /home/yunbo/eval/compilers/llvm_latest/bin/clang -Os -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/llvm_latest/bin/clang -Os -fno-strict-aliasing: A988DFF7 */
