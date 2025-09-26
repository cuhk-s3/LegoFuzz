/* -----Global Variables----- */
 int g_0GK84F[5] = {108, 5, -51, 30, 31};
static int g_9EV3Y7 = -67;
static int g_NIS3MK[6] = {-51, -90, -46, -125, -128, 107};
 int g_9Y8MHE = 3;
 int g_BISWN8 = 69;
static int g_LEKDNV = 41;
 int g_QM9VDC[1] = {-95};
static int g_L83BDN[5] = {-55, -48, 63, -91, 80};
static int g_HO6910[7] = {-8, 112, 97, -100, 92, -81, 13};
 int g_MO1T8D = -80;

/* -----Synthesized Function----- */
#include <csmith.h>
#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_1kOdqhOBQv(x) (x)
#define Tag2_realsmith_1kOdqhOBQv(x) (x)
#include "stdlib.h"
int realsmith_1kOdqhOBQv(int rcu_normal_after_boot_realsmith_1kOdqhOBQv) {
    int rcu_normal_realsmith_1kOdqhOBQv = 0;
    /*bef_stmt:17119*/
if (Tag1_realsmith_1kOdqhOBQv(/*int:17132:17132:17119:e*/rcu_normal_after_boot_realsmith_1kOdqhOBQv)) {
        rcu_normal_realsmith_1kOdqhOBQv = 1;
    }
/*aft_stmt:17119*/
    /*bef_stmt:17130*/
return Tag2_realsmith_1kOdqhOBQv(/*int:17132:17132:17130:e*/rcu_normal_realsmith_1kOdqhOBQv);
/*aft_stmt:17130*/
}



#include "stdlib.h"
int realsmith_n7H7qSVJ5d(int num_vqs_realsmith_n7H7qSVJ5d, int *acked_features_realsmith_n7H7qSVJ5d, unsigned long features_realsmith_n7H7qSVJ5d) {
    if (features_realsmith_n7H7qSVJ5d & ~0xFFFFFFFF) {
        return -1;
    }
    for (int i_realsmith_n7H7qSVJ5d = 0; i_realsmith_n7H7qSVJ5d < num_vqs_realsmith_n7H7qSVJ5d; i_realsmith_n7H7qSVJ5d++) {
        acked_features_realsmith_n7H7qSVJ5d[i_realsmith_n7H7qSVJ5d] = features_realsmith_n7H7qSVJ5d;
    }
    return 0;
}
int realsmith_proxy_JuAP1tEo7G(int p_0_NfafJ6G2pt, int p_1_qMo1eW2pom, unsigned long p_2_iXaI5IN2OJ) {
int proxy_ret_rHLhoinItS = realsmith_n7H7qSVJ5d(p_0_NfafJ6G2pt, &(p_1_qMo1eW2pom), p_2_iXaI5IN2OJ);
return proxy_ret_rHLhoinItS;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_UFDREAneLC(x) (x)
#define Tag2_realsmith_UFDREAneLC(x) (x)
#define Tag3_realsmith_UFDREAneLC(x) (x)
#include "stdlib.h"
int realsmith_UFDREAneLC(int format_physical_width_realsmith_UFDREAneLC) {
    const unsigned int TDM_WLEN_16_BIT_realsmith_UFDREAneLC = 16;
    const unsigned int TDM_WLEN_32_BIT_realsmith_UFDREAneLC = 32;
    /*bef_stmt:17186*/
/*bef_stmt:17186*/
/*bef_stmt:17186*/
return Tag1_realsmith_UFDREAneLC(/*int:17188:17188:17186:e*/format_physical_width_realsmith_UFDREAneLC) <= 16 ? Tag2_realsmith_UFDREAneLC(/*const unsigned int:17188:17188:17186:e*/TDM_WLEN_16_BIT_realsmith_UFDREAneLC) : Tag3_realsmith_UFDREAneLC(/*const unsigned int:17188:17188:17186:e*/TDM_WLEN_32_BIT_realsmith_UFDREAneLC);
/*aft_stmt:17186*/
/*aft_stmt:17186*/
/*aft_stmt:17186*/
}



#include "stdlib.h"
typedef struct {
    int dummy_realsmith_z9KMVI1t2I;
} TxStatus_0TDOfE;
int realsmith_z9KMVI1t2I(int txstatus_fifo_size_realsmith_z9KMVI1t2I, int *txstatus_fifo_realsmith_z9KMVI1t2I, int *txstatus_count_realsmith_z9KMVI1t2I) {
    TxStatus_0TDOfE stat_realsmith_z9KMVI1t2I;
    int update_realsmith_z9KMVI1t2I = 1;
    int processed_count_realsmith_z9KMVI1t2I = 0;
    while (txstatus_fifo_size_realsmith_z9KMVI1t2I > 0) {
        stat_realsmith_z9KMVI1t2I.dummy_realsmith_z9KMVI1t2I = txstatus_fifo_realsmith_z9KMVI1t2I[0];
        for (int i_realsmith_z9KMVI1t2I = 0; i_realsmith_z9KMVI1t2I < txstatus_fifo_size_realsmith_z9KMVI1t2I - 1; i_realsmith_z9KMVI1t2I++) {
            txstatus_fifo_realsmith_z9KMVI1t2I[i_realsmith_z9KMVI1t2I] = txstatus_fifo_realsmith_z9KMVI1t2I[i_realsmith_z9KMVI1t2I + 1];
        }
        txstatus_fifo_size_realsmith_z9KMVI1t2I--;
        processed_count_realsmith_z9KMVI1t2I++;
        update_realsmith_z9KMVI1t2I += stat_realsmith_z9KMVI1t2I.dummy_realsmith_z9KMVI1t2I;
    }
    *txstatus_count_realsmith_z9KMVI1t2I = processed_count_realsmith_z9KMVI1t2I;
    return update_realsmith_z9KMVI1t2I;
}
int realsmith_proxy_1PT1Sm7seb(int p_0_oIDyzUf1cW, int p_1_FGaUbQg9Sh, int p_2_2flzMPoVuL) {
int proxy_DFgqRUyfU9[18] = { 3, p_1_FGaUbQg9Sh, 90, p_1_FGaUbQg9Sh, p_1_FGaUbQg9Sh, 52, 5, p_1_FGaUbQg9Sh, 38, 35, p_1_FGaUbQg9Sh, 79, p_1_FGaUbQg9Sh, p_1_FGaUbQg9Sh, 23, 27, p_1_FGaUbQg9Sh, p_1_FGaUbQg9Sh };
int proxy_PWJNOpDwrX[10] = { p_2_2flzMPoVuL, p_2_2flzMPoVuL, p_2_2flzMPoVuL, 33, p_2_2flzMPoVuL, 91, 65, p_2_2flzMPoVuL, 26, p_2_2flzMPoVuL };
int proxy_ret_lEGMPVokTw = realsmith_z9KMVI1t2I(p_0_oIDyzUf1cW, proxy_DFgqRUyfU9, proxy_PWJNOpDwrX);
return proxy_ret_lEGMPVokTw;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_uqdulYrud8(x) (x)
#define Tag2_realsmith_uqdulYrud8(x) (x)
#define Tag3_realsmith_uqdulYrud8(x) (x)
#define Tag4_realsmith_uqdulYrud8(x) (x)
#include "stdlib.h"
struct ofdpa_group_tbl_entry_iKP8nq {
    int group_id_realsmith_uqdulYrud8;
    int entry_realsmith_uqdulYrud8;
    int cmd_realsmith_uqdulYrud8;
};
int realsmith_uqdulYrud8(int flags_realsmith_uqdulYrud8, int match_group_id_realsmith_uqdulYrud8) {
    struct ofdpa_group_tbl_entry_iKP8nq *found_realsmith_uqdulYrud8 = ((void*)0);
    struct ofdpa_group_tbl_entry_iKP8nq match_realsmith_uqdulYrud8;
    /*bef_stmt:17254*/
match_realsmith_uqdulYrud8.group_id_realsmith_uqdulYrud8 = Tag1_realsmith_uqdulYrud8(/*int:17490:17490:17254:e*/match_group_id_realsmith_uqdulYrud8);
/*aft_stmt:17254*/
    /*bef_stmt:17314*/
match_realsmith_uqdulYrud8.cmd_realsmith_uqdulYrud8 = (Tag2_realsmith_uqdulYrud8(/*int:17490:17490:17314:e*/flags_realsmith_uqdulYrud8) & 1) ? 1 : 0;
/*aft_stmt:17314*/
    /*bef_stmt:17365*/
if (Tag3_realsmith_uqdulYrud8(/*int:17490:17490:17365:e*/match_realsmith_uqdulYrud8.group_id_realsmith_uqdulYrud8) % 2 == 0) {
        found_realsmith_uqdulYrud8 = &match_realsmith_uqdulYrud8;
    }
/*aft_stmt:17365*/
    if (found_realsmith_uqdulYrud8) {
        found_realsmith_uqdulYrud8->entry_realsmith_uqdulYrud8 = 0;
        found_realsmith_uqdulYrud8->cmd_realsmith_uqdulYrud8 = 1;
    } else {
        found_realsmith_uqdulYrud8 = &match_realsmith_uqdulYrud8;
        found_realsmith_uqdulYrud8->cmd_realsmith_uqdulYrud8 = 0;
    }
    /*bef_stmt:17488*/
return Tag4_realsmith_uqdulYrud8(/*int:17490:17490:17488:e*/found_realsmith_uqdulYrud8->cmd_realsmith_uqdulYrud8);
/*aft_stmt:17488*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ThbvA3pqts(x) (x)
#define Tag2_realsmith_ThbvA3pqts(x) (x)
#define Tag3_realsmith_ThbvA3pqts(x) (x)
#define Tag4_realsmith_ThbvA3pqts(x) (x)
#include "stdint.h"
int realsmith_ThbvA3pqts(int reg_realsmith_ThbvA3pqts, int v_realsmith_ThbvA3pqts) {
    /*bef_stmt:2014*/
int EVERGREEN_PIF_PHY1_INDEX_realsmith_ThbvA3pqts = Tag1_realsmith_ThbvA3pqts(/*int:2088:2088:2014:e*/reg_realsmith_ThbvA3pqts) & 0xffff;
/*aft_stmt:2014*/
    /*bef_stmt:2040*/
int EVERGREEN_PIF_PHY1_DATA_realsmith_ThbvA3pqts = Tag2_realsmith_ThbvA3pqts(/*int:2088:2088:2040:e*/v_realsmith_ThbvA3pqts);
/*aft_stmt:2040*/
    /*bef_stmt:2086*/
/*bef_stmt:2086*/
return (Tag3_realsmith_ThbvA3pqts(/*int:2088:2088:2086:e*/EVERGREEN_PIF_PHY1_INDEX_realsmith_ThbvA3pqts) << 16) | (Tag4_realsmith_ThbvA3pqts(/*int:2088:2088:2086:e*/EVERGREEN_PIF_PHY1_DATA_realsmith_ThbvA3pqts) & 0xffff);
/*aft_stmt:2086*/
/*aft_stmt:2086*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_5xa7kCxhi4(x) (x)
#define Tag2_realsmith_5xa7kCxhi4(x) (x)
#define Tag3_realsmith_5xa7kCxhi4(x) (x)
#define Tag4_realsmith_5xa7kCxhi4(x) (x)
#define Tag5_realsmith_5xa7kCxhi4(x) (x)
#include "stdlib.h"
struct scc_channel_duhORS {
    int nospace_realsmith_5xa7kCxhi4;
    int fulldup_realsmith_5xa7kCxhi4;
};
int realsmith_5xa7kCxhi4(int fulldup_realsmith_5xa7kCxhi4, int event_realsmith_5xa7kCxhi4) {
    struct scc_channel_duhORS scc_realsmith_5xa7kCxhi4;
    scc_realsmith_5xa7kCxhi4.nospace_realsmith_5xa7kCxhi4 = 0;
    /*bef_stmt:17219*/
scc_realsmith_5xa7kCxhi4.fulldup_realsmith_5xa7kCxhi4 = Tag1_realsmith_5xa7kCxhi4(/*int:17497:17497:17219:e*/fulldup_realsmith_5xa7kCxhi4);
/*aft_stmt:17219*/
    /*bef_stmt:17262*/
if (Tag2_realsmith_5xa7kCxhi4(/*int:17497:17497:17262:e*/scc_realsmith_5xa7kCxhi4.fulldup_realsmith_5xa7kCxhi4) != 1) {
        /*bef_stmt:17257*/
return Tag3_realsmith_5xa7kCxhi4(/*int:17497:17497:17257:e*/scc_realsmith_5xa7kCxhi4.nospace_realsmith_5xa7kCxhi4);
/*aft_stmt:17257*/
    }
/*aft_stmt:17262*/
    char *skb_realsmith_5xa7kCxhi4 = (char *)(malloc(2));
    if (skb_realsmith_5xa7kCxhi4 != ((void*)0)) {
        skb_realsmith_5xa7kCxhi4[0] = 0;
        /*bef_stmt:17408*/
skb_realsmith_5xa7kCxhi4[1] = Tag4_realsmith_5xa7kCxhi4(/*int:17497:17497:17408:e*/event_realsmith_5xa7kCxhi4);
/*aft_stmt:17408*/
        (free(skb_realsmith_5xa7kCxhi4));
        return 0;
    } else {
        scc_realsmith_5xa7kCxhi4.nospace_realsmith_5xa7kCxhi4++;
        /*bef_stmt:17485*/
return Tag5_realsmith_5xa7kCxhi4(/*int:17497:17497:17485:e*/scc_realsmith_5xa7kCxhi4.nospace_realsmith_5xa7kCxhi4);
/*aft_stmt:17485*/
    }
}



#include "stdlib.h"
int realsmith_CYNdln1rcz(int *node_realsmith_CYNdln1rcz) {
    int swap_realsmith_CYNdln1rcz = 0;
    int scctl_realsmith_CYNdln1rcz = 0;
    int dcctl_realsmith_CYNdln1rcz = 0;
    int tx_submit_realsmith_CYNdln1rcz = 1;
    node_realsmith_CYNdln1rcz[0] = swap_realsmith_CYNdln1rcz;
    node_realsmith_CYNdln1rcz[1] = scctl_realsmith_CYNdln1rcz;
    node_realsmith_CYNdln1rcz[2] = dcctl_realsmith_CYNdln1rcz;
    node_realsmith_CYNdln1rcz[3] = tx_submit_realsmith_CYNdln1rcz;
    return 0;
}
int realsmith_proxy_i00qyBECEA(int p_0_X0ZfSy4Nxv) {
int proxy_GKxWJM0Bmf[17] = { p_0_X0ZfSy4Nxv, 77, 77, p_0_X0ZfSy4Nxv, 58, p_0_X0ZfSy4Nxv, p_0_X0ZfSy4Nxv, p_0_X0ZfSy4Nxv, p_0_X0ZfSy4Nxv, p_0_X0ZfSy4Nxv, 38, p_0_X0ZfSy4Nxv, 55, p_0_X0ZfSy4Nxv, 23, p_0_X0ZfSy4Nxv, 35 };
int proxy_ret_Y8Xrq8ueui = realsmith_CYNdln1rcz(proxy_GKxWJM0Bmf);
return proxy_ret_Y8Xrq8ueui;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_V7Jon4wQID(x) (x)
#define Tag2_realsmith_V7Jon4wQID(x) (x)
#define Tag3_realsmith_V7Jon4wQID(x) (x)
#define Tag4_realsmith_V7Jon4wQID(x) (x)
#include "stdbool.h"
int realsmith_V7Jon4wQID(int prep_irq_for_idle_realsmith_V7Jon4wQID, int mfmsr_realsmith_V7Jon4wQID, int MSR_EE_realsmith_V7Jon4wQID) {
    /*bef_stmt:635*/
_Bool irq_state_realsmith_V7Jon4wQID = (_Bool)Tag1_realsmith_V7Jon4wQID(/*int:702:702:635:e*/prep_irq_for_idle_realsmith_V7Jon4wQID);
/*aft_stmt:635*/
    /*bef_stmt:654*/
if (Tag2_realsmith_V7Jon4wQID(/*_Bool:702:702:654:e*/irq_state_realsmith_V7Jon4wQID)) {
        return 1;
    }
/*aft_stmt:654*/
    /*bef_stmt:692*/
/*bef_stmt:692*/
if (!(Tag3_realsmith_V7Jon4wQID(/*int:702:702:692:e*/mfmsr_realsmith_V7Jon4wQID) & Tag4_realsmith_V7Jon4wQID(/*int:702:702:692:e*/MSR_EE_realsmith_V7Jon4wQID))) {
        return 0;
    }
/*aft_stmt:692*/
/*aft_stmt:692*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_5Z1OmsIP6H(x) (x)
#define Tag2_realsmith_5Z1OmsIP6H(x) (x)
#define Tag3_realsmith_5Z1OmsIP6H(x) (x)
#define Tag4_realsmith_5Z1OmsIP6H(x) (x)
#define Tag5_realsmith_5Z1OmsIP6H(x) (x)
#define Tag6_realsmith_5Z1OmsIP6H(x) (x)
#define Tag7_realsmith_5Z1OmsIP6H(x) (x)
#define Tag8_realsmith_5Z1OmsIP6H(x) (x)
#include "stdlib.h"
int realsmith_5Z1OmsIP6H(int gpio0_realsmith_5Z1OmsIP6H, int gpio1_realsmith_5Z1OmsIP6H, unsigned short val_realsmith_5Z1OmsIP6H, unsigned short mask_realsmith_5Z1OmsIP6H) {
    /*bef_stmt:17245*/
if (Tag1_realsmith_5Z1OmsIP6H(/*unsigned short:17395:17395:17245:e*/mask_realsmith_5Z1OmsIP6H) & 0x00ff) {
        /*bef_stmt:17173*/
gpio0_realsmith_5Z1OmsIP6H &= ~Tag2_realsmith_5Z1OmsIP6H(/*unsigned short:17395:17395:17173:e*/mask_realsmith_5Z1OmsIP6H);
/*aft_stmt:17173*/
        /*bef_stmt:17193*/
gpio0_realsmith_5Z1OmsIP6H |= Tag3_realsmith_5Z1OmsIP6H(/*unsigned short:17395:17395:17193:e*/val_realsmith_5Z1OmsIP6H);
/*aft_stmt:17193*/
        /*bef_stmt:17237*/
int reg_value_realsmith_5Z1OmsIP6H = ~(Tag4_realsmith_5Z1OmsIP6H(/*int:17395:17395:17237:e*/gpio0_realsmith_5Z1OmsIP6H)) << 8;
/*aft_stmt:17237*/
    }
/*aft_stmt:17245*/
    mask_realsmith_5Z1OmsIP6H >>= 8;
    val_realsmith_5Z1OmsIP6H >>= 8;
    /*bef_stmt:17385*/
if (Tag5_realsmith_5Z1OmsIP6H(/*unsigned short:17395:17395:17385:e*/mask_realsmith_5Z1OmsIP6H)) {
        /*bef_stmt:17313*/
gpio1_realsmith_5Z1OmsIP6H &= ~Tag6_realsmith_5Z1OmsIP6H(/*unsigned short:17395:17395:17313:e*/mask_realsmith_5Z1OmsIP6H);
/*aft_stmt:17313*/
        /*bef_stmt:17333*/
gpio1_realsmith_5Z1OmsIP6H |= Tag7_realsmith_5Z1OmsIP6H(/*unsigned short:17395:17395:17333:e*/val_realsmith_5Z1OmsIP6H);
/*aft_stmt:17333*/
        /*bef_stmt:17377*/
int reg_value_realsmith_5Z1OmsIP6H = ~(Tag8_realsmith_5Z1OmsIP6H(/*int:17395:17395:17377:e*/gpio1_realsmith_5Z1OmsIP6H)) << 8;
/*aft_stmt:17377*/
    }
/*aft_stmt:17385*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag2_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag3_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag4_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag5_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag6_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag7_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag8_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag9_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag10_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag11_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag12_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag13_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag14_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag15_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag16_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag17_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag18_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag19_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag20_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag21_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag22_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag23_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag24_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag25_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag26_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag27_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag28_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag29_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag30_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag31_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag32_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag33_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag34_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag35_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag36_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag37_realsmith_proxy_0bptUvgjAL(x) (x)
#define Tag38_realsmith_proxy_0bptUvgjAL(x) (x)
#include "stdlib.h"
int realsmith_TKwfyfqUTW(const char *source_realsmith_TKwfyfqUTW) {
    unsigned int i_realsmith_TKwfyfqUTW = 0;
    /*bef_stmt:17262*/
/*bef_stmt:17262*/
/*bef_stmt:17262*/
/*bef_stmt:17262*/
/*bef_stmt:17262*/
if (Tag1_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17262:e*/source_realsmith_TKwfyfqUTW[0]) == 'n' && Tag2_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17262:e*/source_realsmith_TKwfyfqUTW[1]) == 'o' && Tag3_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17262:e*/source_realsmith_TKwfyfqUTW[2]) == 'n' && Tag4_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17262:e*/source_realsmith_TKwfyfqUTW[3]) == 'e' && Tag5_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17262:e*/source_realsmith_TKwfyfqUTW[4]) == '\0')
        return 0;
/*aft_stmt:17262*/
/*aft_stmt:17262*/
/*aft_stmt:17262*/
/*aft_stmt:17262*/
/*aft_stmt:17262*/
    /*bef_stmt:17588*/
/*bef_stmt:17588*/
/*bef_stmt:17588*/
/*bef_stmt:17588*/
/*bef_stmt:17588*/
/*bef_stmt:17588*/
/*bef_stmt:17588*/
/*bef_stmt:17588*/
/*bef_stmt:17588*/
/*bef_stmt:17588*/
if (Tag6_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17588:e*/source_realsmith_TKwfyfqUTW[0]) == 't' && Tag7_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17588:e*/source_realsmith_TKwfyfqUTW[1]) == 's' && Tag8_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17588:e*/source_realsmith_TKwfyfqUTW[2]) == 'y' && Tag9_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17588:e*/source_realsmith_TKwfyfqUTW[3]) == 'n' && Tag10_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17588:e*/source_realsmith_TKwfyfqUTW[4]) == 'c' && Tag11_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17588:e*/source_realsmith_TKwfyfqUTW[5]) == '_' && Tag12_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17588:e*/source_realsmith_TKwfyfqUTW[6]) == 'p' && Tag13_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17588:e*/source_realsmith_TKwfyfqUTW[7]) == 'i' && Tag14_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17588:e*/source_realsmith_TKwfyfqUTW[8]) == 'n' && Tag15_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17588:e*/source_realsmith_TKwfyfqUTW[9]) == '\0')
        return 4;
/*aft_stmt:17588*/
/*aft_stmt:17588*/
/*aft_stmt:17588*/
/*aft_stmt:17588*/
/*aft_stmt:17588*/
/*aft_stmt:17588*/
/*aft_stmt:17588*/
/*aft_stmt:17588*/
/*aft_stmt:17588*/
/*aft_stmt:17588*/
    /*bef_stmt:17914*/
/*bef_stmt:17914*/
/*bef_stmt:17914*/
/*bef_stmt:17914*/
/*bef_stmt:17914*/
/*bef_stmt:17914*/
/*bef_stmt:17914*/
/*bef_stmt:17914*/
/*bef_stmt:17914*/
/*bef_stmt:17914*/
if (Tag16_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17914:e*/source_realsmith_TKwfyfqUTW[0]) == 'r' && Tag17_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17914:e*/source_realsmith_TKwfyfqUTW[1]) == 's' && Tag18_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17914:e*/source_realsmith_TKwfyfqUTW[2]) == 'y' && Tag19_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17914:e*/source_realsmith_TKwfyfqUTW[3]) == 'n' && Tag20_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17914:e*/source_realsmith_TKwfyfqUTW[4]) == 'c' && Tag21_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17914:e*/source_realsmith_TKwfyfqUTW[5]) == '_' && Tag22_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17914:e*/source_realsmith_TKwfyfqUTW[6]) == 'p' && Tag23_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17914:e*/source_realsmith_TKwfyfqUTW[7]) == 'i' && Tag24_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17914:e*/source_realsmith_TKwfyfqUTW[8]) == 'n' && Tag25_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:17914:e*/source_realsmith_TKwfyfqUTW[9]) == '\0')
        return 3;
/*aft_stmt:17914*/
/*aft_stmt:17914*/
/*aft_stmt:17914*/
/*aft_stmt:17914*/
/*aft_stmt:17914*/
/*aft_stmt:17914*/
/*aft_stmt:17914*/
/*aft_stmt:17914*/
/*aft_stmt:17914*/
/*aft_stmt:17914*/
    /*bef_stmt:18133*/
/*bef_stmt:18133*/
/*bef_stmt:18133*/
if (Tag26_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:18133:e*/source_realsmith_TKwfyfqUTW[0]) == 'b' && Tag27_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:18133:e*/source_realsmith_TKwfyfqUTW[1]) == 'r' && Tag28_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:18133:e*/source_realsmith_TKwfyfqUTW[2]) == 'g') {
        i_realsmith_TKwfyfqUTW = (1);
        /*bef_stmt:18123*/
/*bef_stmt:18123*/
/*bef_stmt:18123*/
if ((Tag29_realsmith_proxy_0bptUvgjAL(/*unsigned int:18363:18363:18123:e*/i_realsmith_TKwfyfqUTW) >= 1) && (Tag30_realsmith_proxy_0bptUvgjAL(/*unsigned int:18363:18363:18123:e*/i_realsmith_TKwfyfqUTW) <= 16))
            return (1 - 1) + Tag31_realsmith_proxy_0bptUvgjAL(/*unsigned int:18363:18363:18123:e*/i_realsmith_TKwfyfqUTW);
        else
            return -1;
/*aft_stmt:18123*/
/*aft_stmt:18123*/
/*aft_stmt:18123*/
    }
/*aft_stmt:18133*/
/*aft_stmt:18133*/
/*aft_stmt:18133*/
    /*bef_stmt:18350*/
/*bef_stmt:18350*/
/*bef_stmt:18350*/
if (Tag32_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:18350:e*/source_realsmith_TKwfyfqUTW[0]) == 'c' && Tag33_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:18350:e*/source_realsmith_TKwfyfqUTW[1]) == 'l' && Tag34_realsmith_proxy_0bptUvgjAL(/*const char:18363:18363:18350:e*/source_realsmith_TKwfyfqUTW[2]) == 'k') {
        i_realsmith_TKwfyfqUTW = (1);
        /*bef_stmt:18340*/
/*bef_stmt:18340*/
/*bef_stmt:18340*/
if ((Tag35_realsmith_proxy_0bptUvgjAL(/*unsigned int:18363:18363:18340:e*/i_realsmith_TKwfyfqUTW) >= 1) && (Tag36_realsmith_proxy_0bptUvgjAL(/*unsigned int:18363:18363:18340:e*/i_realsmith_TKwfyfqUTW) <= 24))
            return (2 - 1) + Tag37_realsmith_proxy_0bptUvgjAL(/*unsigned int:18363:18363:18340:e*/i_realsmith_TKwfyfqUTW);
        else
            return -1;
/*aft_stmt:18340*/
/*aft_stmt:18340*/
/*aft_stmt:18340*/
    }
/*aft_stmt:18350*/
/*aft_stmt:18350*/
/*aft_stmt:18350*/
    return -1;
}
int realsmith_proxy_0bptUvgjAL(char p_0_xkrYATjiwj) {
int proxy_ret_VaiqvOyplx = realsmith_TKwfyfqUTW(&(p_0_xkrYATjiwj));
/*bef_stmt:18486*/
return Tag38_realsmith_proxy_0bptUvgjAL(/*int:18488:18488:18486:e*/proxy_ret_VaiqvOyplx);
/*aft_stmt:18486*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ydUwUg1XOw(x) (x)
#define Tag2_realsmith_ydUwUg1XOw(x) (x)
#define Tag3_realsmith_ydUwUg1XOw(x) (x)
#define Tag4_realsmith_ydUwUg1XOw(x) (x)
#define Tag5_realsmith_ydUwUg1XOw(x) (x)
#include "stdlib.h"
struct ide_disk_obj_VLNYzA {
    int openers_realsmith_ydUwUg1XOw;
};
int realsmith_ydUwUg1XOw(int openers_realsmith_ydUwUg1XOw, int arg_realsmith_ydUwUg1XOw, unsigned int cmd_realsmith_ydUwUg1XOw) {
    struct ide_disk_obj_VLNYzA floppy_realsmith_ydUwUg1XOw;
    /*bef_stmt:17197*/
floppy_realsmith_ydUwUg1XOw.openers_realsmith_ydUwUg1XOw = Tag1_realsmith_ydUwUg1XOw(/*int:17341:17341:17197:e*/openers_realsmith_ydUwUg1XOw);
/*aft_stmt:17197*/
    /*bef_stmt:17275*/
/*bef_stmt:17275*/
int prevent_realsmith_ydUwUg1XOw = (Tag2_realsmith_ydUwUg1XOw(/*int:17341:17341:17275:e*/arg_realsmith_ydUwUg1XOw) && Tag3_realsmith_ydUwUg1XOw(/*unsigned int:17341:17341:17275:e*/cmd_realsmith_ydUwUg1XOw) != 1) ? 1 : 0;
/*aft_stmt:17275*/
/*aft_stmt:17275*/
    /*bef_stmt:17308*/
if (Tag4_realsmith_ydUwUg1XOw(/*int:17341:17341:17308:e*/floppy_realsmith_ydUwUg1XOw.openers_realsmith_ydUwUg1XOw) > 1)
        return -16;
/*aft_stmt:17308*/
    /*bef_stmt:17331*/
if (Tag5_realsmith_ydUwUg1XOw(/*unsigned int:17341:17341:17331:e*/cmd_realsmith_ydUwUg1XOw) == 1)
        ;
/*aft_stmt:17331*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_oadE0dAKkQ(x) (x)
#define Tag2_realsmith_oadE0dAKkQ(x) (x)
#include "stdlib.h"
int realsmith_oadE0dAKkQ(int free_inodes_realsmith_oadE0dAKkQ) {
    /*bef_stmt:17128*/
if (Tag1_realsmith_oadE0dAKkQ(/*int:17138:17138:17128:e*/free_inodes_realsmith_oadE0dAKkQ) >= 0) {
        /*bef_stmt:17113*/
if (Tag2_realsmith_oadE0dAKkQ(/*int:17138:17138:17113:e*/free_inodes_realsmith_oadE0dAKkQ) == 0) {
            return 0;
        }
/*aft_stmt:17113*/
        free_inodes_realsmith_oadE0dAKkQ--;
    }
/*aft_stmt:17128*/
    return 1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_lxGuPOk9Yq(x) (x)
#include "stdlib.h"
int realsmith_lxGuPOk9Yq(int qcode_realsmith_lxGuPOk9Yq) {
    /*bef_stmt:17081*/
switch (Tag1_realsmith_lxGuPOk9Yq(/*int:17275:17275:17081:e*/qcode_realsmith_lxGuPOk9Yq)) {
        case 128:
            return 0;
        case 129:
            return -22;
        case 130:
            return -95;
        case 131:
            return -2;
        case 133:
            return -114;
        case 135:
            return -98;
        case 134:
            return -99;
        case 132:
            return -16;
        default:
            return -14;
    }
/*aft_stmt:17081*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_aJHW7fzmfF(x) (x)
#include "stdlib.h"
struct rt5659_priv_IMpvrN {
    unsigned long regmap_realsmith_aJHW7fzmfF;
};
int realsmith_aJHW7fzmfF(unsigned long regmap_realsmith_aJHW7fzmfF) {
    struct rt5659_priv_IMpvrN rt5659_realsmith_aJHW7fzmfF;
    /*bef_stmt:17159*/
rt5659_realsmith_aJHW7fzmfF.regmap_realsmith_aJHW7fzmfF = Tag1_realsmith_aJHW7fzmfF(/*unsigned long:17180:17180:17159:e*/regmap_realsmith_aJHW7fzmfF);
/*aft_stmt:17159*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_k0UXcCXKnt(x) (x)
#define Tag2_realsmith_k0UXcCXKnt(x) (x)
#define Tag3_realsmith_k0UXcCXKnt(x) (x)
#define Tag4_realsmith_k0UXcCXKnt(x) (x)
#include "stddef.h"
int realsmith_k0UXcCXKnt(unsigned int current_mask_realsmith_k0UXcCXKnt, unsigned int new_mask_realsmith_k0UXcCXKnt) {
    /*bef_stmt:768*/
/*bef_stmt:768*/
if (/*TAG1:STA*/((unsigned int)(realsmith_1kOdqhOBQv((int)(new_mask_realsmith_k0UXcCXKnt)+(-39))+(int)(new_mask_realsmith_k0UXcCXKnt)-(76))+new_mask_realsmith_k0UXcCXKnt)/*TAG1:END:new_mask_realsmith_k0UXcCXKnt*/ > /*TAG2:STA*/((unsigned int)(realsmith_proxy_JuAP1tEo7G((int)(current_mask_realsmith_k0UXcCXKnt)+(-5), (int)(current_mask_realsmith_k0UXcCXKnt)+(-9), (unsigned long)(current_mask_realsmith_k0UXcCXKnt)+(-6))+(int)(current_mask_realsmith_k0UXcCXKnt)-(6))+current_mask_realsmith_k0UXcCXKnt)/*TAG2:END:current_mask_realsmith_k0UXcCXKnt*/) {
        /*bef_stmt:763*/
return Tag3_realsmith_k0UXcCXKnt(/*unsigned int:784:784:763:e*/new_mask_realsmith_k0UXcCXKnt);
/*aft_stmt:763*/
    }
/*aft_stmt:768*/
/*aft_stmt:768*/
    /*bef_stmt:782*/
return Tag4_realsmith_k0UXcCXKnt(/*unsigned int:784:784:782:e*/current_mask_realsmith_k0UXcCXKnt);
/*aft_stmt:782*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_LhdHMIpKHI(x) (x)
#include "stdlib.h"
struct lm3530_data_QitasJ {
    int led_dev_realsmith_LhdHMIpKHI;
};
int realsmith_LhdHMIpKHI(int led_dev_realsmith_LhdHMIpKHI, int client_data_realsmith_LhdHMIpKHI) {
    struct lm3530_data_QitasJ drvdata_realsmith_LhdHMIpKHI;
    /*bef_stmt:17177*/
drvdata_realsmith_LhdHMIpKHI.led_dev_realsmith_LhdHMIpKHI = Tag1_realsmith_LhdHMIpKHI(/*int:17244:17244:17177:e*/led_dev_realsmith_LhdHMIpKHI);
/*aft_stmt:17177*/
    int led_disabled_realsmith_LhdHMIpKHI = 1;
    int led_unregistered_realsmith_LhdHMIpKHI = 1;
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_gPexkysx7Z(x) (x)
#include "stdbool.h"
int realsmith_gPexkysx7Z(int reg_realsmith_gPexkysx7Z) {
    /*bef_stmt:575*/
switch (Tag1_realsmith_gPexkysx7Z(/*int:612:612:575:e*/reg_realsmith_gPexkysx7Z)) {
        case 128:
            return 1;
        default:
            return 0;
    }
/*aft_stmt:575*/
}



#include "stdlib.h"
typedef struct {
    int len_realsmith_wwOjuiJQoj;
} i2c_msg_73YL0g;
int realsmith_wwOjuiJQoj(int num_realsmith_wwOjuiJQoj, int *msg_lens_realsmith_wwOjuiJQoj) {
    int comm_len_realsmith_wwOjuiJQoj = 0;
    int i_realsmith_wwOjuiJQoj, err_realsmith_wwOjuiJQoj = 0;
    for (i_realsmith_wwOjuiJQoj = 0; i_realsmith_wwOjuiJQoj < num_realsmith_wwOjuiJQoj; ++i_realsmith_wwOjuiJQoj)
        comm_len_realsmith_wwOjuiJQoj += msg_lens_realsmith_wwOjuiJQoj[i_realsmith_wwOjuiJQoj];
    if (num_realsmith_wwOjuiJQoj > 10) {
        return -1;
    }
    return err_realsmith_wwOjuiJQoj < 0 ? err_realsmith_wwOjuiJQoj : num_realsmith_wwOjuiJQoj;
}
int realsmith_proxy_KIzYYrLpnh(int p_0_FB1Iw8G15D, int p_1_62sW2Eh9Lk) {
int proxy_2imFfwuQna[19] = { 70, 41, p_1_62sW2Eh9Lk, 71, p_1_62sW2Eh9Lk, 71, p_1_62sW2Eh9Lk, 35, p_1_62sW2Eh9Lk, p_1_62sW2Eh9Lk, 46, 9, 5, 24, p_1_62sW2Eh9Lk, p_1_62sW2Eh9Lk, 6, 35, p_1_62sW2Eh9Lk };
int proxy_ret_OyT8Nu9Is2 = realsmith_wwOjuiJQoj(p_0_FB1Iw8G15D, proxy_2imFfwuQna);
return proxy_ret_OyT8Nu9Is2;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_f08OQuQYMQ(x) (x)
#define Tag2_realsmith_f08OQuQYMQ(x) (x)
#define Tag3_realsmith_f08OQuQYMQ(x) (x)
#define Tag4_realsmith_f08OQuQYMQ(x) (x)
#include "stdlib.h"
int realsmith_f08OQuQYMQ(int sel_realsmith_f08OQuQYMQ) {
    int GPIO_MIC_RELAY_realsmith_f08OQuQYMQ = 1;
    int changed_realsmith_f08OQuQYMQ;
    int ice_realsmith_f08OQuQYMQ = 0;
    /*bef_stmt:17183*/
/*bef_stmt:17183*/
changed_realsmith_f08OQuQYMQ = (Tag1_realsmith_f08OQuQYMQ(/*int:17213:17213:17183:e*/sel_realsmith_f08OQuQYMQ) ? (1 << Tag2_realsmith_f08OQuQYMQ(/*int:17213:17213:17183:e*/GPIO_MIC_RELAY_realsmith_f08OQuQYMQ)) : 0);
/*aft_stmt:17183*/
/*aft_stmt:17183*/
    /*bef_stmt:17198*/
if (Tag3_realsmith_f08OQuQYMQ(/*int:17213:17213:17198:e*/sel_realsmith_f08OQuQYMQ)) {
    } else {
    }
/*aft_stmt:17198*/
    /*bef_stmt:17211*/
return Tag4_realsmith_f08OQuQYMQ(/*int:17213:17213:17211:e*/changed_realsmith_f08OQuQYMQ);
/*aft_stmt:17211*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_cuqEruySOu(x) (x)
#define Tag2_realsmith_cuqEruySOu(x) (x)
#define Tag3_realsmith_cuqEruySOu(x) (x)
#define Tag4_realsmith_cuqEruySOu(x) (x)
#define Tag5_realsmith_cuqEruySOu(x) (x)
#define Tag6_realsmith_cuqEruySOu(x) (x)
#define Tag7_realsmith_cuqEruySOu(x) (x)
#include "stdlib.h"
int realsmith_cuqEruySOu(int display_name_len_realsmith_cuqEruySOu, int name_type_len_realsmith_cuqEruySOu, int exported_name_len_realsmith_cuqEruySOu, int exported_composite_name_len_realsmith_cuqEruySOu, int name_attributes_count_realsmith_cuqEruySOu, int extensions_count_realsmith_cuqEruySOu) {
    int err_realsmith_cuqEruySOu = 0;
    /*bef_stmt:17223*/
if (Tag1_realsmith_cuqEruySOu(/*int:17376:17376:17223:e*/display_name_len_realsmith_cuqEruySOu) < 0) return -1;
/*aft_stmt:17223*/
    /*bef_stmt:17251*/
if (Tag2_realsmith_cuqEruySOu(/*int:17376:17376:17251:e*/name_type_len_realsmith_cuqEruySOu) < 0) return -1;
/*aft_stmt:17251*/
    /*bef_stmt:17279*/
if (Tag3_realsmith_cuqEruySOu(/*int:17376:17376:17279:e*/exported_name_len_realsmith_cuqEruySOu) < 0) return -1;
/*aft_stmt:17279*/
    /*bef_stmt:17307*/
if (Tag4_realsmith_cuqEruySOu(/*int:17376:17376:17307:e*/exported_composite_name_len_realsmith_cuqEruySOu) < 0) return -1;
/*aft_stmt:17307*/
    /*bef_stmt:17335*/
if (Tag5_realsmith_cuqEruySOu(/*int:17376:17376:17335:e*/name_attributes_count_realsmith_cuqEruySOu) < 0) return -1;
/*aft_stmt:17335*/
    /*bef_stmt:17363*/
if (Tag6_realsmith_cuqEruySOu(/*int:17376:17376:17363:e*/extensions_count_realsmith_cuqEruySOu) < 0) return -1;
/*aft_stmt:17363*/
    /*bef_stmt:17374*/
return Tag7_realsmith_cuqEruySOu(/*int:17376:17376:17374:e*/err_realsmith_cuqEruySOu);
/*aft_stmt:17374*/
}



#include "stdlib.h"
int realsmith_c9AXz86Vzx(int func_mdev_realsmith_c9AXz86Vzx, int *indir_tirn_realsmith_c9AXz86Vzx) {
    int tt_realsmith_c9AXz86Vzx;
    for (tt_realsmith_c9AXz86Vzx = 0; tt_realsmith_c9AXz86Vzx < 10; tt_realsmith_c9AXz86Vzx++) {
        if (indir_tirn_realsmith_c9AXz86Vzx[tt_realsmith_c9AXz86Vzx] != 0) {
            indir_tirn_realsmith_c9AXz86Vzx[tt_realsmith_c9AXz86Vzx] = 0;
        }
    }
    return 0;
}
int realsmith_proxy_P0Dy4lgKBz(int p_0_5asSomU4Aq, int p_1_0iNt25F5u4) {
int proxy_SzeHmjJp8G[15] = { 85, 16, p_1_0iNt25F5u4, 62, 96, 51, p_1_0iNt25F5u4, 89, 30, p_1_0iNt25F5u4, 30, 16, p_1_0iNt25F5u4, 84, p_1_0iNt25F5u4 };
int proxy_ret_AqLZkIwzl6 = realsmith_c9AXz86Vzx(p_0_5asSomU4Aq, proxy_SzeHmjJp8G);
return proxy_ret_AqLZkIwzl6;
}


#include "stdlib.h"
int realsmith_LXKPfFxx5n(int control_lines_realsmith_LXKPfFxx5n[], int priority_realsmith_LXKPfFxx5n, unsigned int channel_idx_realsmith_LXKPfFxx5n, int state_realsmith_LXKPfFxx5n) {
    int COMCTRL_DTR_realsmith_LXKPfFxx5n = 1;
    int IPW_CONTROL_LINE_DTR_realsmith_LXKPfFxx5n = 1;
    if (state_realsmith_LXKPfFxx5n != 0)
        control_lines_realsmith_LXKPfFxx5n[channel_idx_realsmith_LXKPfFxx5n] |= IPW_CONTROL_LINE_DTR_realsmith_LXKPfFxx5n;
    else
        control_lines_realsmith_LXKPfFxx5n[channel_idx_realsmith_LXKPfFxx5n] &= ~IPW_CONTROL_LINE_DTR_realsmith_LXKPfFxx5n;
    return (control_lines_realsmith_LXKPfFxx5n[channel_idx_realsmith_LXKPfFxx5n] & COMCTRL_DTR_realsmith_LXKPfFxx5n) ? state_realsmith_LXKPfFxx5n : 0;
}
int realsmith_proxy_1cB3VmXjBd(int p_0_gEzHmwjofx, int p_1_sevBzmndiI, unsigned int p_2_b3CvmzZvAn, int p_3_AegMJrcgDJ) {
int proxy_MkpAwSBY4w[11] = { p_0_gEzHmwjofx, p_0_gEzHmwjofx, p_0_gEzHmwjofx, 16, 15, p_0_gEzHmwjofx, 37, 20, p_0_gEzHmwjofx, p_0_gEzHmwjofx, p_0_gEzHmwjofx };
int proxy_ret_8FN52VipIf = realsmith_LXKPfFxx5n(proxy_MkpAwSBY4w, p_1_sevBzmndiI, p_2_b3CvmzZvAn, p_3_AegMJrcgDJ);
return proxy_ret_8FN52VipIf;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_WV5Q6GKhHV(x) (x)
#define Tag2_realsmith_WV5Q6GKhHV(x) (x)
#define Tag3_realsmith_WV5Q6GKhHV(x) (x)
#define Tag4_realsmith_WV5Q6GKhHV(x) (x)
#define Tag5_realsmith_WV5Q6GKhHV(x) (x)
#define Tag6_realsmith_WV5Q6GKhHV(x) (x)
#define Tag7_realsmith_WV5Q6GKhHV(x) (x)
#define Tag8_realsmith_WV5Q6GKhHV(x) (x)
#define Tag9_realsmith_WV5Q6GKhHV(x) (x)
#define Tag10_realsmith_WV5Q6GKhHV(x) (x)
#define Tag11_realsmith_WV5Q6GKhHV(x) (x)
#define Tag12_realsmith_WV5Q6GKhHV(x) (x)
#define Tag13_realsmith_WV5Q6GKhHV(x) (x)
#define Tag14_realsmith_WV5Q6GKhHV(x) (x)
#define Tag15_realsmith_WV5Q6GKhHV(x) (x)
#define Tag16_realsmith_WV5Q6GKhHV(x) (x)
#define Tag17_realsmith_WV5Q6GKhHV(x) (x)
#define Tag18_realsmith_WV5Q6GKhHV(x) (x)
#define Tag19_realsmith_WV5Q6GKhHV(x) (x)
#define Tag20_realsmith_WV5Q6GKhHV(x) (x)
#define Tag21_realsmith_WV5Q6GKhHV(x) (x)
#define Tag22_realsmith_WV5Q6GKhHV(x) (x)
#define Tag23_realsmith_WV5Q6GKhHV(x) (x)
#define Tag24_realsmith_WV5Q6GKhHV(x) (x)
#define Tag25_realsmith_WV5Q6GKhHV(x) (x)
#define Tag26_realsmith_WV5Q6GKhHV(x) (x)
#define Tag27_realsmith_WV5Q6GKhHV(x) (x)
#define Tag28_realsmith_WV5Q6GKhHV(x) (x)
#define Tag29_realsmith_WV5Q6GKhHV(x) (x)
#define Tag30_realsmith_WV5Q6GKhHV(x) (x)
#define Tag31_realsmith_WV5Q6GKhHV(x) (x)
#define Tag32_realsmith_WV5Q6GKhHV(x) (x)
#include "stdbool.h"
int realsmith_WV5Q6GKhHV(unsigned int reg_realsmith_WV5Q6GKhHV) {
    /*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
/*bef_stmt:1352*/
if ((Tag1_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) >= 0x100000 && Tag2_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) < 0x103000) ||
        (Tag3_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) >= 0x180000 && Tag4_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) < 0x181000) ||
        (Tag5_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) >= 0x190000 && Tag6_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) < 0x192000) ||
        (Tag7_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) >= 0x1a8000 && Tag8_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) < 0x1a9000) ||
        (Tag9_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) >= 0x200000 && Tag10_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) < 0x209000) ||
        (Tag11_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) >= 0x280000 && Tag12_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) < 0x281000) ||
        (Tag13_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) >= 0x290000 && Tag14_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) < 0x29a000) ||
        (Tag15_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) >= 0x2a8000 && Tag16_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) < 0x2aa000) ||
        (Tag17_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) >= 0x300000 && Tag18_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) < 0x30f000) ||
        (Tag19_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) >= 0x380000 && Tag20_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) < 0x382000) ||
        (Tag21_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) >= 0x390000 && Tag22_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) < 0x39e000) ||
        (Tag23_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) >= 0x3a8000 && Tag24_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) < 0x3b6000) ||
        (Tag25_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) >= 0x400000 && Tag26_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) < 0x403000) ||
        (Tag27_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) >= 0x480000 && Tag28_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) < 0x481000) ||
        (Tag29_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) >= 0x490000 && Tag30_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) < 0x492000) ||
        (Tag31_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) >= 0x4a8000 && Tag32_realsmith_WV5Q6GKhHV(/*unsigned int:1358:1358:1352:e*/reg_realsmith_WV5Q6GKhHV) < 0x4a9000)) {
        return 1;
    } else {
        return 0;
    }
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
/*aft_stmt:1352*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_GLb9eWMxvT(x) (x)
#include "stdlib.h"
int realsmith_iSUkIDVDHD(int *type_realsmith_iSUkIDVDHD) {
    *type_realsmith_iSUkIDVDHD = 1;
    return 2;
}
int realsmith_proxy_GLb9eWMxvT(int p_0_8hghNtT9zd) {
int proxy_ret_th9WRJieIp = realsmith_iSUkIDVDHD(&(p_0_8hghNtT9zd));
/*bef_stmt:17207*/
return Tag1_realsmith_proxy_GLb9eWMxvT(/*int:17209:17209:17207:e*/proxy_ret_th9WRJieIp);
/*aft_stmt:17207*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_wVFSwzpwkR(x) (x)
#define Tag2_realsmith_wVFSwzpwkR(x) (x)
#include "stdlib.h"
int realsmith_wVFSwzpwkR(int id_realsmith_wVFSwzpwkR) {
    int req_dummy_realsmith_wVFSwzpwkR;
    /*bef_stmt:17116*/
int flush_id_realsmith_wVFSwzpwkR = Tag1_realsmith_wVFSwzpwkR(/*int:17442:17442:17116:e*/id_realsmith_wVFSwzpwkR);
/*aft_stmt:17116*/
    req_dummy_realsmith_wVFSwzpwkR = 1;
    /*bef_stmt:17142*/
req_dummy_realsmith_wVFSwzpwkR = Tag2_realsmith_wVFSwzpwkR(/*int:17442:17442:17142:e*/flush_id_realsmith_wVFSwzpwkR);
/*aft_stmt:17142*/
    req_dummy_realsmith_wVFSwzpwkR = 1;
    req_dummy_realsmith_wVFSwzpwkR = 3;
    req_dummy_realsmith_wVFSwzpwkR = 9;
    req_dummy_realsmith_wVFSwzpwkR = 3;
    req_dummy_realsmith_wVFSwzpwkR = 0xe7;
    req_dummy_realsmith_wVFSwzpwkR = 0x8c;
    req_dummy_realsmith_wVFSwzpwkR = 0;
    req_dummy_realsmith_wVFSwzpwkR = 0;
    req_dummy_realsmith_wVFSwzpwkR = 0;
    req_dummy_realsmith_wVFSwzpwkR = 0xff;
    req_dummy_realsmith_wVFSwzpwkR = 0xff;
    req_dummy_realsmith_wVFSwzpwkR = 0x94;
    req_dummy_realsmith_wVFSwzpwkR = 1;
    req_dummy_realsmith_wVFSwzpwkR = 3;
    req_dummy_realsmith_wVFSwzpwkR = 9;
    req_dummy_realsmith_wVFSwzpwkR = 3;
    req_dummy_realsmith_wVFSwzpwkR = 0xa5;
    req_dummy_realsmith_wVFSwzpwkR = 0x14;
    req_dummy_realsmith_wVFSwzpwkR = 0;
    req_dummy_realsmith_wVFSwzpwkR = 0;
    req_dummy_realsmith_wVFSwzpwkR = 0x69;
    req_dummy_realsmith_wVFSwzpwkR = 0xff;
    req_dummy_realsmith_wVFSwzpwkR = 0xff;
    req_dummy_realsmith_wVFSwzpwkR = 0x27;
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_WSnpQm5NAa(x) (x)
#include "stdlib.h"
struct usb_request_U7jyyo { int dummy_realsmith_WSnpQm5NAa; };
struct dwc2_hsotg_req_U7jyyo { int dummy_realsmith_WSnpQm5NAa; };
int realsmith_WSnpQm5NAa(int ep_dummy_realsmith_WSnpQm5NAa, int req_dummy_realsmith_WSnpQm5NAa) {
    struct usb_request_U7jyyo req_realsmith_WSnpQm5NAa;
    /*bef_stmt:17211*/
req_realsmith_WSnpQm5NAa.dummy_realsmith_WSnpQm5NAa = Tag1_realsmith_WSnpQm5NAa(/*int:17395:17395:17211:e*/req_dummy_realsmith_WSnpQm5NAa);
/*aft_stmt:17211*/
    struct dwc2_hsotg_req_U7jyyo *hs_req_realsmith_WSnpQm5NAa = (struct dwc2_hsotg_req_U7jyyo*)(malloc(sizeof(struct dwc2_hsotg_req_U7jyyo)));
    if (hs_req_realsmith_WSnpQm5NAa == ((void*)0)) {
        return -1;
    }
    (free(hs_req_realsmith_WSnpQm5NAa));
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_593qSe1je1(x) (x)
#define Tag2_realsmith_593qSe1je1(x) (x)
#define Tag3_realsmith_593qSe1je1(x) (x)
#define Tag4_realsmith_593qSe1je1(x) (x)
#define Tag5_realsmith_593qSe1je1(x) (x)
#define Tag6_realsmith_593qSe1je1(x) (x)
#include "stdlib.h"
int realsmith_593qSe1je1(int vsi_busy_conf_realsmith_593qSe1je1, int queue_pair_realsmith_593qSe1je1) {
    /*bef_stmt:17123*/
int err_realsmith_593qSe1je1 = Tag1_realsmith_593qSe1je1(/*int:17228:17228:17123:e*/vsi_busy_conf_realsmith_593qSe1je1);
/*aft_stmt:17123*/
    /*bef_stmt:17145*/
if (Tag2_realsmith_593qSe1je1(/*int:17228:17228:17145:e*/err_realsmith_593qSe1je1)) {
        /*bef_stmt:17140*/
return Tag3_realsmith_593qSe1je1(/*int:17228:17228:17140:e*/err_realsmith_593qSe1je1);
/*aft_stmt:17140*/
    }
/*aft_stmt:17145*/
    /*bef_stmt:17201*/
int toggle_rings_result_realsmith_593qSe1je1 = (Tag4_realsmith_593qSe1je1(/*int:17228:17228:17201:e*/queue_pair_realsmith_593qSe1je1) > 0) ? 0 : -1;
/*aft_stmt:17201*/
    /*bef_stmt:17215*/
err_realsmith_593qSe1je1 = Tag5_realsmith_593qSe1je1(/*int:17228:17228:17215:e*/toggle_rings_result_realsmith_593qSe1je1);
/*aft_stmt:17215*/
    /*bef_stmt:17226*/
return Tag6_realsmith_593qSe1je1(/*int:17228:17228:17226:e*/err_realsmith_593qSe1je1);
/*aft_stmt:17226*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ukx04Exe9x(x) (x)
#define Tag2_realsmith_ukx04Exe9x(x) (x)
#define Tag3_realsmith_ukx04Exe9x(x) (x)
#define Tag4_realsmith_ukx04Exe9x(x) (x)
#define Tag5_realsmith_ukx04Exe9x(x) (x)
#define Tag6_realsmith_ukx04Exe9x(x) (x)
#define Tag7_realsmith_ukx04Exe9x(x) (x)
#define Tag8_realsmith_ukx04Exe9x(x) (x)
#define Tag9_realsmith_ukx04Exe9x(x) (x)
#define Tag10_realsmith_ukx04Exe9x(x) (x)
#define Tag11_realsmith_ukx04Exe9x(x) (x)
#include "stdlib.h"
struct pwrkey_drv_data_dkZi8U {
    unsigned long snvs_realsmith_ukx04Exe9x;
    unsigned long keycode_realsmith_ukx04Exe9x;
    unsigned long irq_realsmith_ukx04Exe9x;
    int wakeup_realsmith_ukx04Exe9x;
};
int realsmith_ukx04Exe9x(int snvs_phandle_realsmith_ukx04Exe9x, int keycode_input_realsmith_ukx04Exe9x, int irq_input_realsmith_ukx04Exe9x, int wakeup_input_realsmith_ukx04Exe9x) {
    struct pwrkey_drv_data_dkZi8U pdata_realsmith_ukx04Exe9x;
    /*bef_stmt:17256*/
pdata_realsmith_ukx04Exe9x.snvs_realsmith_ukx04Exe9x = Tag1_realsmith_ukx04Exe9x(/*int:17673:17673:17256:e*/snvs_phandle_realsmith_ukx04Exe9x);
/*aft_stmt:17256*/
    /*bef_stmt:17294*/
pdata_realsmith_ukx04Exe9x.keycode_realsmith_ukx04Exe9x = Tag2_realsmith_ukx04Exe9x(/*int:17673:17673:17294:e*/keycode_input_realsmith_ukx04Exe9x);
/*aft_stmt:17294*/
    /*bef_stmt:17318*/
pdata_realsmith_ukx04Exe9x.irq_realsmith_ukx04Exe9x = Tag3_realsmith_ukx04Exe9x(/*int:17673:17673:17318:e*/irq_input_realsmith_ukx04Exe9x);
/*aft_stmt:17318*/
    /*bef_stmt:17339*/
pdata_realsmith_ukx04Exe9x.wakeup_realsmith_ukx04Exe9x = Tag4_realsmith_ukx04Exe9x(/*int:17673:17673:17339:e*/wakeup_input_realsmith_ukx04Exe9x);
/*aft_stmt:17339*/
    /*bef_stmt:17376*/
if (Tag5_realsmith_ukx04Exe9x(/*unsigned long:17673:17673:17376:e*/pdata_realsmith_ukx04Exe9x.snvs_realsmith_ukx04Exe9x) < 0) return -1;
/*aft_stmt:17376*/
    /*bef_stmt:17425*/
if (Tag6_realsmith_ukx04Exe9x(/*unsigned long:17673:17673:17425:e*/pdata_realsmith_ukx04Exe9x.keycode_realsmith_ukx04Exe9x) == 0) pdata_realsmith_ukx04Exe9x.keycode_realsmith_ukx04Exe9x = 1;
/*aft_stmt:17425*/
    /*bef_stmt:17462*/
if (Tag7_realsmith_ukx04Exe9x(/*unsigned long:17673:17673:17462:e*/pdata_realsmith_ukx04Exe9x.irq_realsmith_ukx04Exe9x) < 0) return -2;
/*aft_stmt:17462*/
    unsigned long SNVS_LPCR_REG_realsmith_ukx04Exe9x = 0;
    unsigned long SNVS_LPCR_DEP_EN_realsmith_ukx04Exe9x = 1;
    /*bef_stmt:17529*/
SNVS_LPCR_REG_realsmith_ukx04Exe9x |= Tag8_realsmith_ukx04Exe9x(/*unsigned long:17673:17673:17529:e*/SNVS_LPCR_DEP_EN_realsmith_ukx04Exe9x);
/*aft_stmt:17529*/
    unsigned long SNVS_LPSR_REG_realsmith_ukx04Exe9x = 0;
    unsigned long SNVS_LPSR_SPO_realsmith_ukx04Exe9x = 1;
    /*bef_stmt:17598*/
SNVS_LPSR_REG_realsmith_ukx04Exe9x = Tag9_realsmith_ukx04Exe9x(/*unsigned long:17673:17673:17598:e*/SNVS_LPSR_SPO_realsmith_ukx04Exe9x);
/*aft_stmt:17598*/
    int input_registered_realsmith_ukx04Exe9x = 1;
    /*bef_stmt:17644*/
if (!Tag10_realsmith_ukx04Exe9x(/*int:17673:17673:17644:e*/input_registered_realsmith_ukx04Exe9x)) return -3;
/*aft_stmt:17644*/
    /*bef_stmt:17663*/
if (Tag11_realsmith_ukx04Exe9x(/*int:17673:17673:17663:e*/pdata_realsmith_ukx04Exe9x.wakeup_realsmith_ukx04Exe9x)) {
    }
/*aft_stmt:17663*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_4e4jP52WT8(x) (x)
#define Tag2_realsmith_4e4jP52WT8(x) (x)
#define Tag3_realsmith_4e4jP52WT8(x) (x)
#include "stdlib.h"
struct fjes_device_shared_info_9hPtEu {
    int epnum_realsmith_4e4jP52WT8;
};
int realsmith_4e4jP52WT8(int max_epid_realsmith_4e4jP52WT8) {
    long unsigned int size_realsmith_4e4jP52WT8;
    struct fjes_device_shared_info_9hPtEu *share_realsmith_4e4jP52WT8;
    /*bef_stmt:17207*/
size_realsmith_4e4jP52WT8 = sizeof(struct fjes_device_shared_info_9hPtEu) + (sizeof(unsigned char) * /*TAG1:STA*/((max_epid_realsmith_4e4jP52WT8) + (g_9EV3Y7) - -67)/*TAG1:END:max_epid_realsmith_4e4jP52WT8*/);
g_9EV3Y7 = -67 + (max_epid_realsmith_4e4jP52WT8 - (50));
/*aft_stmt:17207*/
    /*bef_stmt:17272*/
share_realsmith_4e4jP52WT8 = (struct fjes_device_shared_info_9hPtEu *)(malloc(Tag2_realsmith_4e4jP52WT8(/*unsigned long:17363:17363:17272:e*/size_realsmith_4e4jP52WT8)));
/*aft_stmt:17272*/
    if (!share_realsmith_4e4jP52WT8)
        return -1;
    /*bef_stmt:17319*/
share_realsmith_4e4jP52WT8->epnum_realsmith_4e4jP52WT8 = Tag3_realsmith_4e4jP52WT8(/*int:17363:17363:17319:e*/max_epid_realsmith_4e4jP52WT8);
/*aft_stmt:17319*/
    (free(share_realsmith_4e4jP52WT8));
    return 0;
}



#include "stdlib.h"
int realsmith_wu2hNJHZdE(int nvec_realsmith_wu2hNJHZdE, int bat_init_len_realsmith_wu2hNJHZdE, int *bat_init_realsmith_wu2hNJHZdE) {
    int i_realsmith_wu2hNJHZdE;
    char buf_realsmith_wu2hNJHZdE[2];
    char NVEC_BAT_realsmith_wu2hNJHZdE = 1;
    char SLOT_STATUS_realsmith_wu2hNJHZdE = 2;
    buf_realsmith_wu2hNJHZdE[0] = NVEC_BAT_realsmith_wu2hNJHZdE;
    for (i_realsmith_wu2hNJHZdE = 0; i_realsmith_wu2hNJHZdE < bat_init_len_realsmith_wu2hNJHZdE; i_realsmith_wu2hNJHZdE++) {
        buf_realsmith_wu2hNJHZdE[1] = bat_init_realsmith_wu2hNJHZdE[i_realsmith_wu2hNJHZdE];
    }
    return 0;
}
int realsmith_proxy_TxiFC4d8lc(int p_0_AARxlq3Hqv, int p_1_gjFvmblBgI, int p_2_ZUpQ4LCi5t) {
int proxy_wJQ8bAVsn0[12] = { 14, p_2_ZUpQ4LCi5t, p_2_ZUpQ4LCi5t, p_2_ZUpQ4LCi5t, 26, 91, p_2_ZUpQ4LCi5t, 72, 73, 41, p_2_ZUpQ4LCi5t, 46 };
int proxy_ret_vOIqS9yCaq = realsmith_wu2hNJHZdE(p_0_AARxlq3Hqv, p_1_gjFvmblBgI, proxy_wJQ8bAVsn0);
return proxy_ret_vOIqS9yCaq;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_duG1KXNHU9(x) (x)
#include "stdint.h"
int realsmith_duG1KXNHU9(int daifmt_realsmith_duG1KXNHU9) {
    /*bef_stmt:1979*/
switch (Tag1_realsmith_duG1KXNHU9(/*int:2023:2023:1979:e*/daifmt_realsmith_duG1KXNHU9) & 0x3) {
    case 129:
    case 128:
        return 1;
    }
/*aft_stmt:1979*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_amRFdU1C7Y(x) (x)
#define Tag2_realsmith_amRFdU1C7Y(x) (x)
#define Tag3_realsmith_amRFdU1C7Y(x) (x)
#define Tag4_realsmith_amRFdU1C7Y(x) (x)
#define Tag5_realsmith_amRFdU1C7Y(x) (x)
#include "stdlib.h"
int realsmith_amRFdU1C7Y(int flags_realsmith_amRFdU1C7Y) {
    int rc_realsmith_amRFdU1C7Y;
    int result_realsmith_amRFdU1C7Y[1];
    /*bef_stmt:17158*/
if (!(Tag1_realsmith_amRFdU1C7Y(/*int:17266:17266:17158:e*/flags_realsmith_amRFdU1C7Y) & 1))
        return 0;
/*aft_stmt:17158*/
    rc_realsmith_amRFdU1C7Y = 0;
    /*bef_stmt:17198*/
/*bef_stmt:17198*/
if (Tag2_realsmith_amRFdU1C7Y(/*int:17266:17266:17198:e*/rc_realsmith_amRFdU1C7Y) < 0)
        return Tag3_realsmith_amRFdU1C7Y(/*int:17266:17266:17198:e*/rc_realsmith_amRFdU1C7Y);
/*aft_stmt:17198*/
/*aft_stmt:17198*/
    rc_realsmith_amRFdU1C7Y = 1;
    /*bef_stmt:17253*/
result_realsmith_amRFdU1C7Y[0] = Tag4_realsmith_amRFdU1C7Y(/*int:17266:17266:17253:e*/rc_realsmith_amRFdU1C7Y) ? -1 : 1;
/*aft_stmt:17253*/
    /*bef_stmt:17264*/
return Tag5_realsmith_amRFdU1C7Y(/*int:17266:17266:17264:e*/rc_realsmith_amRFdU1C7Y);
/*aft_stmt:17264*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_AHQUDnLWDm(x) (x)
#define Tag2_realsmith_proxy_AHQUDnLWDm(x) (x)
#define Tag3_realsmith_proxy_AHQUDnLWDm(x) (x)
#define Tag4_realsmith_proxy_AHQUDnLWDm(x) (x)
#define Tag5_realsmith_proxy_AHQUDnLWDm(x) (x)
#define Tag6_realsmith_proxy_AHQUDnLWDm(x) (x)
#define Tag7_realsmith_proxy_AHQUDnLWDm(x) (x)
#define Tag8_realsmith_proxy_AHQUDnLWDm(x) (x)
#define Tag9_realsmith_proxy_AHQUDnLWDm(x) (x)
#include "stdint.h"
int realsmith_ynqIyeXRoz(int use_doorbell_realsmith_ynqIyeXRoz, int doorbell_index_realsmith_ynqIyeXRoz, int rptr_realsmith_ynqIyeXRoz, int *rptr_cpu_realsmith_ynqIyeXRoz) {
    /*bef_stmt:2091*/
if (Tag1_realsmith_proxy_AHQUDnLWDm(/*int:2097:2097:2091:e*/use_doorbell_realsmith_ynqIyeXRoz)) {
        /*bef_stmt:2051*/
*rptr_cpu_realsmith_ynqIyeXRoz = Tag2_realsmith_proxy_AHQUDnLWDm(/*int:2097:2097:2051:e*/rptr_realsmith_ynqIyeXRoz);
/*aft_stmt:2051*/
        /*bef_stmt:2073*/
/*bef_stmt:2073*/
return Tag3_realsmith_proxy_AHQUDnLWDm(/*int:2097:2097:2073:e*/doorbell_index_realsmith_ynqIyeXRoz) + Tag4_realsmith_proxy_AHQUDnLWDm(/*int:2097:2097:2073:e*/rptr_realsmith_ynqIyeXRoz);
/*aft_stmt:2073*/
/*aft_stmt:2073*/
    } else {
        /*bef_stmt:2086*/
return Tag5_realsmith_proxy_AHQUDnLWDm(/*int:2097:2097:2086:e*/rptr_realsmith_ynqIyeXRoz);
/*aft_stmt:2086*/
    }
/*aft_stmt:2091*/
}
int realsmith_proxy_AHQUDnLWDm(int p_0_gCOdoY8vSM, int p_1_qm80PqhxDr, int p_2_6wU2NKpyo5, int p_3_NIPQaPaUdQ) {
/*bef_stmt:2275*/
/*bef_stmt:2275*/
/*bef_stmt:2275*/
int proxy_ret_du8Mib629W = realsmith_ynqIyeXRoz(Tag6_realsmith_proxy_AHQUDnLWDm(/*int:2287:2287:2275:e*/p_0_gCOdoY8vSM), Tag7_realsmith_proxy_AHQUDnLWDm(/*int:2287:2287:2275:e*/p_1_qm80PqhxDr), Tag8_realsmith_proxy_AHQUDnLWDm(/*int:2287:2287:2275:e*/p_2_6wU2NKpyo5), &(p_3_NIPQaPaUdQ));
/*aft_stmt:2275*/
/*aft_stmt:2275*/
/*aft_stmt:2275*/
/*bef_stmt:2285*/
return Tag9_realsmith_proxy_AHQUDnLWDm(/*int:2287:2287:2285:e*/proxy_ret_du8Mib629W);
/*aft_stmt:2285*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_gcHKkNQvBb(x) (x)
#define Tag2_realsmith_gcHKkNQvBb(x) (x)
#define Tag3_realsmith_gcHKkNQvBb(x) (x)
#define Tag4_realsmith_gcHKkNQvBb(x) (x)
#include "stdlib.h"
struct svc_serv_XgLtlM {
    int dummy_realsmith_gcHKkNQvBb;
};
struct net_XgLtlM {
    int dummy_realsmith_gcHKkNQvBb;
};
int realsmith_gcHKkNQvBb(int serv_dummy_realsmith_gcHKkNQvBb, int net_dummy_realsmith_gcHKkNQvBb) {
    struct svc_serv_XgLtlM serv_realsmith_gcHKkNQvBb;
    struct net_XgLtlM net_realsmith_gcHKkNQvBb;
    /*bef_stmt:17237*/
serv_realsmith_gcHKkNQvBb.dummy_realsmith_gcHKkNQvBb = Tag1_realsmith_gcHKkNQvBb(/*int:17316:17316:17237:e*/serv_dummy_realsmith_gcHKkNQvBb);
/*aft_stmt:17237*/
    /*bef_stmt:17269*/
net_realsmith_gcHKkNQvBb.dummy_realsmith_gcHKkNQvBb = Tag2_realsmith_gcHKkNQvBb(/*int:17316:17316:17269:e*/net_dummy_realsmith_gcHKkNQvBb);
/*aft_stmt:17269*/
    /*bef_stmt:17314*/
/*bef_stmt:17314*/
return Tag3_realsmith_gcHKkNQvBb(/*int:17316:17316:17314:e*/serv_realsmith_gcHKkNQvBb.dummy_realsmith_gcHKkNQvBb) + Tag4_realsmith_gcHKkNQvBb(/*int:17316:17316:17314:e*/net_realsmith_gcHKkNQvBb.dummy_realsmith_gcHKkNQvBb);
/*aft_stmt:17314*/
/*aft_stmt:17314*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_coxeBYODSD(x) (x)
#include "stdlib.h"
int realsmith_coxeBYODSD(int va_start_realsmith_coxeBYODSD, int va_end_realsmith_coxeBYODSD, int debug_enabled_realsmith_coxeBYODSD) {
    /*bef_stmt:17128*/
if (Tag1_realsmith_coxeBYODSD(/*int:17138:17138:17128:e*/debug_enabled_realsmith_coxeBYODSD)) {
    }
/*aft_stmt:17128*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Ks8O7DVAIl(x) (x)
#define Tag2_realsmith_Ks8O7DVAIl(x) (x)
#define Tag3_realsmith_Ks8O7DVAIl(x) (x)
#define Tag4_realsmith_Ks8O7DVAIl(x) (x)
#define Tag5_realsmith_Ks8O7DVAIl(x) (x)
#define Tag6_realsmith_Ks8O7DVAIl(x) (x)
#include "stdlib.h"
int realsmith_Ks8O7DVAIl(int blksz_realsmith_Ks8O7DVAIl, int blocks_realsmith_Ks8O7DVAIl, int timeout_ns_realsmith_Ks8O7DVAIl, int timeout_clks_realsmith_Ks8O7DVAIl) {
    int base_realsmith_Ks8O7DVAIl = 0;
    int BLK_realsmith_Ks8O7DVAIl = 0;
    /*bef_stmt:17234*/
/*bef_stmt:17234*/
int req_data_realsmith_Ks8O7DVAIl = (Tag1_realsmith_Ks8O7DVAIl(/*int:17344:17344:17234:e*/blksz_realsmith_Ks8O7DVAIl) | (Tag2_realsmith_Ks8O7DVAIl(/*int:17344:17344:17234:e*/blocks_realsmith_Ks8O7DVAIl) << 16));
/*aft_stmt:17234*/
/*aft_stmt:17234*/
    /*bef_stmt:17248*/
base_realsmith_Ks8O7DVAIl = Tag3_realsmith_Ks8O7DVAIl(/*int:17344:17344:17248:e*/req_data_realsmith_Ks8O7DVAIl);
/*aft_stmt:17248*/
    /*bef_stmt:17286*/
/*bef_stmt:17286*/
int data_timeout_realsmith_Ks8O7DVAIl = Tag4_realsmith_Ks8O7DVAIl(/*int:17344:17344:17286:e*/timeout_ns_realsmith_Ks8O7DVAIl) + Tag5_realsmith_Ks8O7DVAIl(/*int:17344:17344:17286:e*/timeout_clks_realsmith_Ks8O7DVAIl);
/*aft_stmt:17286*/
/*aft_stmt:17286*/
    int chan_realsmith_Ks8O7DVAIl = 1;
    int transfer_status_realsmith_Ks8O7DVAIl = 0;
    /*bef_stmt:17342*/
return Tag6_realsmith_Ks8O7DVAIl(/*int:17344:17344:17342:e*/transfer_status_realsmith_Ks8O7DVAIl);
/*aft_stmt:17342*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_uEmhvK48T7(x) (x)
#define Tag2_realsmith_uEmhvK48T7(x) (x)
#define Tag3_realsmith_uEmhvK48T7(x) (x)
#define Tag4_realsmith_uEmhvK48T7(x) (x)
#define Tag5_realsmith_uEmhvK48T7(x) (x)
#define Tag6_realsmith_uEmhvK48T7(x) (x)
#define Tag7_realsmith_uEmhvK48T7(x) (x)
#define Tag8_realsmith_uEmhvK48T7(x) (x)
#define Tag9_realsmith_uEmhvK48T7(x) (x)
#define Tag10_realsmith_uEmhvK48T7(x) (x)
#define Tag11_realsmith_uEmhvK48T7(x) (x)
#define Tag12_realsmith_uEmhvK48T7(x) (x)
#define Tag13_realsmith_uEmhvK48T7(x) (x)
#define Tag14_realsmith_uEmhvK48T7(x) (x)
#define Tag15_realsmith_uEmhvK48T7(x) (x)
#define Tag16_realsmith_uEmhvK48T7(x) (x)
#define Tag17_realsmith_uEmhvK48T7(x) (x)
#define Tag18_realsmith_uEmhvK48T7(x) (x)
#define Tag19_realsmith_uEmhvK48T7(x) (x)
#define Tag20_realsmith_uEmhvK48T7(x) (x)
#define Tag21_realsmith_uEmhvK48T7(x) (x)
#define Tag22_realsmith_uEmhvK48T7(x) (x)
#define Tag23_realsmith_uEmhvK48T7(x) (x)
#define Tag24_realsmith_uEmhvK48T7(x) (x)
#define Tag25_realsmith_uEmhvK48T7(x) (x)
#define Tag26_realsmith_uEmhvK48T7(x) (x)
#define Tag27_realsmith_uEmhvK48T7(x) (x)
#define Tag28_realsmith_uEmhvK48T7(x) (x)
#define Tag29_realsmith_uEmhvK48T7(x) (x)
#include "stdint.h"
int realsmith_uEmhvK48T7(int agp_start_realsmith_uEmhvK48T7, int agp_end_realsmith_uEmhvK48T7, int fb_end_realsmith_uEmhvK48T7, int vram_start_realsmith_uEmhvK48T7, int fb_start_realsmith_uEmhvK48T7, int gpu_addr_realsmith_uEmhvK48T7, int vram_base_offset_realsmith_uEmhvK48T7, int dummy_page_addr_realsmith_uEmhvK48T7, int asic_type_realsmith_uEmhvK48T7, int rev_id_realsmith_uEmhvK48T7) {
    unsigned long int value_realsmith_uEmhvK48T7;
    int system_aperture_low_addr_realsmith_uEmhvK48T7, system_aperture_high_addr_realsmith_uEmhvK48T7, system_aperture_default_addr_lsb_realsmith_uEmhvK48T7, system_aperture_default_addr_msb_realsmith_uEmhvK48T7, protection_fault_default_addr_lo32_realsmith_uEmhvK48T7, protection_fault_default_addr_hi32_realsmith_uEmhvK48T7;
    /*bef_stmt:2303*/
int agp_bot_realsmith_uEmhvK48T7 = /*TAG1:STA*/((int)(realsmith_593qSe1je1((int)(agp_start_realsmith_uEmhvK48T7)+(-3), (int)(agp_start_realsmith_uEmhvK48T7)+(-27))+(int)(agp_start_realsmith_uEmhvK48T7)-(191))+agp_start_realsmith_uEmhvK48T7)/*TAG1:END:agp_start_realsmith_uEmhvK48T7*/ >> 24;
/*aft_stmt:2303*/
    /*bef_stmt:2337*/
int agp_top_realsmith_uEmhvK48T7 = Tag2_realsmith_uEmhvK48T7(/*int:2899:2899:2337:e*/agp_end_realsmith_uEmhvK48T7) >> 24;
/*aft_stmt:2337*/
    /*bef_stmt:2394*/
/*bef_stmt:2394*/
/*bef_stmt:2394*/
/*bef_stmt:2394*/
system_aperture_low_addr_realsmith_uEmhvK48T7 = (/*TAG3:STA*/((int)(realsmith_amRFdU1C7Y((int)(fb_start_realsmith_uEmhvK48T7)+(7))+(int)(fb_start_realsmith_uEmhvK48T7)-(19))+fb_start_realsmith_uEmhvK48T7)/*TAG3:END:fb_start_realsmith_uEmhvK48T7*/ < /*TAG4:STA*/((int)(realsmith_wVFSwzpwkR((int)(agp_start_realsmith_uEmhvK48T7)+(-86))+(int)(agp_start_realsmith_uEmhvK48T7)-(97))+agp_start_realsmith_uEmhvK48T7)/*TAG4:END:agp_start_realsmith_uEmhvK48T7*/ ? /*TAG5:STA*/((fb_start_realsmith_uEmhvK48T7) + (g_LEKDNV) - 41)/*TAG5:END:fb_start_realsmith_uEmhvK48T7*/ : /*TAG6:STA*/((int)(realsmith_WV5Q6GKhHV((unsigned int)(agp_start_realsmith_uEmhvK48T7)+(-34))+(int)(agp_start_realsmith_uEmhvK48T7)-(97))+agp_start_realsmith_uEmhvK48T7)/*TAG6:END:agp_start_realsmith_uEmhvK48T7*/) >> 18;
g_LEKDNV = 41 + (fb_start_realsmith_uEmhvK48T7 - (18));
/*aft_stmt:2394*/
/*aft_stmt:2394*/
/*aft_stmt:2394*/
/*aft_stmt:2394*/
    /*bef_stmt:2613*/
/*bef_stmt:2613*/
if (Tag7_realsmith_uEmhvK48T7(/*int:2899:2899:2613:e*/asic_type_realsmith_uEmhvK48T7) == 1 && /*TAG8:STA*/((int)(realsmith_proxy_1cB3VmXjBd((int)(rev_id_realsmith_uEmhvK48T7)+(-72), (int)(rev_id_realsmith_uEmhvK48T7)+(-69), (unsigned int)(rev_id_realsmith_uEmhvK48T7)+(-72), (int)(rev_id_realsmith_uEmhvK48T7)+(-73))+(int)(rev_id_realsmith_uEmhvK48T7)-(73))+rev_id_realsmith_uEmhvK48T7)/*TAG8:END:rev_id_realsmith_uEmhvK48T7*/ >= 0x8) {
        /*bef_stmt:2542*/
/*bef_stmt:2542*/
/*bef_stmt:2542*/
/*bef_stmt:2542*/
system_aperture_high_addr_realsmith_uEmhvK48T7 = ((Tag9_realsmith_uEmhvK48T7(/*int:2899:2899:2542:e*/fb_end_realsmith_uEmhvK48T7) >> 18) + 0x1 > (Tag10_realsmith_uEmhvK48T7(/*int:2899:2899:2542:e*/agp_end_realsmith_uEmhvK48T7) >> 18) ? (Tag11_realsmith_uEmhvK48T7(/*int:2899:2899:2542:e*/fb_end_realsmith_uEmhvK48T7) >> 18) + 0x1 : (Tag12_realsmith_uEmhvK48T7(/*int:2899:2899:2542:e*/agp_end_realsmith_uEmhvK48T7) >> 18));
/*aft_stmt:2542*/
/*aft_stmt:2542*/
/*aft_stmt:2542*/
/*aft_stmt:2542*/
    } else {
        /*bef_stmt:2606*/
/*bef_stmt:2606*/
/*bef_stmt:2606*/
/*bef_stmt:2606*/
system_aperture_high_addr_realsmith_uEmhvK48T7 = (Tag13_realsmith_uEmhvK48T7(/*int:2899:2899:2606:e*/fb_end_realsmith_uEmhvK48T7) > /*TAG14:STA*/((int)(realsmith_proxy_TxiFC4d8lc((int)(agp_end_realsmith_uEmhvK48T7)+(-33), (int)(agp_end_realsmith_uEmhvK48T7)+(-37), (int)(agp_end_realsmith_uEmhvK48T7)+(-36))+(int)(agp_end_realsmith_uEmhvK48T7)-(38))+agp_end_realsmith_uEmhvK48T7)/*TAG14:END:agp_end_realsmith_uEmhvK48T7*/ ? Tag15_realsmith_uEmhvK48T7(/*int:2899:2899:2606:e*/fb_end_realsmith_uEmhvK48T7) : /*TAG16:STA*/((agp_end_realsmith_uEmhvK48T7) + (g_BISWN8) - 69)/*TAG16:END:agp_end_realsmith_uEmhvK48T7*/) >> 18;
g_BISWN8 = 69 + (agp_end_realsmith_uEmhvK48T7 - (38));
/*aft_stmt:2606*/
/*aft_stmt:2606*/
/*aft_stmt:2606*/
/*aft_stmt:2606*/
    }
/*aft_stmt:2613*/
/*aft_stmt:2613*/
    /*bef_stmt:2655*/
/*bef_stmt:2655*/
/*bef_stmt:2655*/
value_realsmith_uEmhvK48T7 = /*TAG17:STA*/((int)(realsmith_4e4jP52WT8((int)(gpu_addr_realsmith_uEmhvK48T7)+(-36))+(int)(gpu_addr_realsmith_uEmhvK48T7)-(86))+gpu_addr_realsmith_uEmhvK48T7)/*TAG17:END:gpu_addr_realsmith_uEmhvK48T7*/ - Tag18_realsmith_uEmhvK48T7(/*int:2899:2899:2655:e*/vram_start_realsmith_uEmhvK48T7) + Tag19_realsmith_uEmhvK48T7(/*int:2899:2899:2655:e*/vram_base_offset_realsmith_uEmhvK48T7);
/*aft_stmt:2655*/
/*aft_stmt:2655*/
/*aft_stmt:2655*/
    /*bef_stmt:2697*/
system_aperture_default_addr_lsb_realsmith_uEmhvK48T7 = (unsigned int)(Tag20_realsmith_uEmhvK48T7(/*unsigned long:2899:2899:2697:e*/value_realsmith_uEmhvK48T7) >> 12);
g_MO1T8D = -80 + (value_realsmith_uEmhvK48T7 - (48));
/*aft_stmt:2697*/
    /*bef_stmt:2739*/
system_aperture_default_addr_msb_realsmith_uEmhvK48T7 = (unsigned int)(Tag21_realsmith_uEmhvK48T7(/*unsigned long:2899:2899:2739:e*/value_realsmith_uEmhvK48T7) >> 44);
/*aft_stmt:2739*/
    /*bef_stmt:2781*/
protection_fault_default_addr_lo32_realsmith_uEmhvK48T7 = (unsigned int)(Tag22_realsmith_uEmhvK48T7(/*int:2899:2899:2781:e*/dummy_page_addr_realsmith_uEmhvK48T7) >> 12);
/*aft_stmt:2781*/
    /*bef_stmt:2831*/
protection_fault_default_addr_hi32_realsmith_uEmhvK48T7 = (unsigned int)((unsigned long int)/*TAG23:STA*/((dummy_page_addr_realsmith_uEmhvK48T7) + (g_LEKDNV) - 41)/*TAG23:END:dummy_page_addr_realsmith_uEmhvK48T7*/ >> 44);
g_LEKDNV = 41 + (dummy_page_addr_realsmith_uEmhvK48T7 - (60));
/*aft_stmt:2831*/
    /*bef_stmt:2897*/
/*bef_stmt:2897*/
/*bef_stmt:2897*/
/*bef_stmt:2897*/
/*bef_stmt:2897*/
/*bef_stmt:2897*/
return /*TAG24:STA*/((int)(realsmith_ukx04Exe9x((int)(system_aperture_low_addr_realsmith_uEmhvK48T7)+(60), (int)(system_aperture_low_addr_realsmith_uEmhvK48T7)+(80), (int)(system_aperture_low_addr_realsmith_uEmhvK48T7)+(17), (int)(system_aperture_low_addr_realsmith_uEmhvK48T7)+(100))+(int)(system_aperture_low_addr_realsmith_uEmhvK48T7)-(0))+system_aperture_low_addr_realsmith_uEmhvK48T7)/*TAG24:END:system_aperture_low_addr_realsmith_uEmhvK48T7*/ + /*TAG25:STA*/((int)(realsmith_duG1KXNHU9((int)(system_aperture_high_addr_realsmith_uEmhvK48T7)+(100))+(int)(system_aperture_high_addr_realsmith_uEmhvK48T7)-(0))+system_aperture_high_addr_realsmith_uEmhvK48T7)/*TAG25:END:system_aperture_high_addr_realsmith_uEmhvK48T7*/ + /*TAG26:STA*/((int)(realsmith_WSnpQm5NAa((int)(system_aperture_default_addr_lsb_realsmith_uEmhvK48T7)+(36), (int)(system_aperture_default_addr_lsb_realsmith_uEmhvK48T7)+(72))+(int)(system_aperture_default_addr_lsb_realsmith_uEmhvK48T7)-(0))+system_aperture_default_addr_lsb_realsmith_uEmhvK48T7)/*TAG26:END:system_aperture_default_addr_lsb_realsmith_uEmhvK48T7*/ + /*TAG27:STA*/((system_aperture_default_addr_msb_realsmith_uEmhvK48T7) + (g_HO6910[1]) - 112)/*TAG27:END:system_aperture_default_addr_msb_realsmith_uEmhvK48T7*/ + /*TAG28:STA*/((int)(realsmith_proxy_GLb9eWMxvT((int)(protection_fault_default_addr_lo32_realsmith_uEmhvK48T7)+(99))+(int)(protection_fault_default_addr_lo32_realsmith_uEmhvK48T7)-(2))+protection_fault_default_addr_lo32_realsmith_uEmhvK48T7)/*TAG28:END:protection_fault_default_addr_lo32_realsmith_uEmhvK48T7*/ + /*TAG29:STA*/((int)(realsmith_proxy_P0Dy4lgKBz((int)(protection_fault_default_addr_hi32_realsmith_uEmhvK48T7)+(68), (int)(protection_fault_default_addr_hi32_realsmith_uEmhvK48T7)+(55))+(int)(protection_fault_default_addr_hi32_realsmith_uEmhvK48T7)-(0))+protection_fault_default_addr_hi32_realsmith_uEmhvK48T7)/*TAG29:END:protection_fault_default_addr_hi32_realsmith_uEmhvK48T7*/;
g_HO6910[1] = 112 + (system_aperture_default_addr_msb_realsmith_uEmhvK48T7 - (0));
/*aft_stmt:2897*/
/*aft_stmt:2897*/
/*aft_stmt:2897*/
/*aft_stmt:2897*/
/*aft_stmt:2897*/
/*aft_stmt:2897*/
}



#include "stdint.h"
struct mu_KJ3PC3 {
    volatile unsigned int f0_doorbell_enable_realsmith_ZmZA04d40n;
    volatile unsigned int isr_enable_realsmith_ZmZA04d40n;
    volatile unsigned int pcie_f0_int_enable_realsmith_ZmZA04d40n;
};
struct mvfrey_KJ3PC3 {
    struct mu_KJ3PC3 *mu_realsmith_ZmZA04d40n;
};
struct hptiop_hba_KJ3PC3 {
    struct mvfrey_KJ3PC3 mvfrey_realsmith_ZmZA04d40n;
};
int realsmith_ZmZA04d40n(unsigned int *f0_doorbell_enable_realsmith_ZmZA04d40n, unsigned int *isr_enable_realsmith_ZmZA04d40n, unsigned int *pcie_f0_int_enable_realsmith_ZmZA04d40n) {
    *f0_doorbell_enable_realsmith_ZmZA04d40n = 0;
    (void)(*f0_doorbell_enable_realsmith_ZmZA04d40n);
    *isr_enable_realsmith_ZmZA04d40n = 0;
    (void)(*isr_enable_realsmith_ZmZA04d40n);
    *pcie_f0_int_enable_realsmith_ZmZA04d40n = 0;
    (void)(*pcie_f0_int_enable_realsmith_ZmZA04d40n);
    return 0;
}
int realsmith_proxy_EDcmCPi5kO(unsigned int p_0_0E4tEcyMz1, unsigned int p_1_JqnJ1BeJNp, unsigned int p_2_wLFPgShUzT) {
unsigned int proxy_Nh2LwbPkAT[13] = { p_2_wLFPgShUzT, 6, 88, p_2_wLFPgShUzT, 85, p_2_wLFPgShUzT, 71, 88, p_2_wLFPgShUzT, p_2_wLFPgShUzT, 76, 73, 10 };
int proxy_ret_TnihMnAFQC = realsmith_ZmZA04d40n(&(p_0_0E4tEcyMz1), &(p_1_JqnJ1BeJNp), proxy_Nh2LwbPkAT);
return proxy_ret_TnihMnAFQC;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_JuOylUMdzL(x) (x)
#define Tag2_realsmith_proxy_JuOylUMdzL(x) (x)
#define Tag3_realsmith_proxy_JuOylUMdzL(x) (x)
#define Tag4_realsmith_proxy_JuOylUMdzL(x) (x)
#define Tag5_realsmith_proxy_JuOylUMdzL(x) (x)
#define Tag6_realsmith_proxy_JuOylUMdzL(x) (x)
#define Tag7_realsmith_proxy_JuOylUMdzL(x) (x)
#define Tag8_realsmith_proxy_JuOylUMdzL(x) (x)
#define Tag9_realsmith_proxy_JuOylUMdzL(x) (x)
#define Tag10_realsmith_proxy_JuOylUMdzL(x) (x)
#define Tag11_realsmith_proxy_JuOylUMdzL(x) (x)
#define Tag12_realsmith_proxy_JuOylUMdzL(x) (x)
#define Tag13_realsmith_proxy_JuOylUMdzL(x) (x)
#define Tag14_realsmith_proxy_JuOylUMdzL(x) (x)
#define Tag15_realsmith_proxy_JuOylUMdzL(x) (x)
#define Tag16_realsmith_proxy_JuOylUMdzL(x) (x)
#define Tag17_realsmith_proxy_JuOylUMdzL(x) (x)
#include "string.h"
#include "stdint.h"
int realsmith_jscXI2h3pZ(int default_key_realsmith_jscXI2h3pZ, int wep_is_on_realsmith_jscXI2h3pZ, int encryption_level_realsmith_jscXI2h3pZ, int *wep_key_lens_realsmith_jscXI2h3pZ, int key_idx_realsmith_jscXI2h3pZ, int *wep_keys_realsmith_jscXI2h3pZ, int encoding_length_realsmith_jscXI2h3pZ) {
    int idx_realsmith_jscXI2h3pZ, max_key_len_realsmith_jscXI2h3pZ;
    int encoding_flags_realsmith_jscXI2h3pZ = 0;
    /*bef_stmt:10034*/
max_key_len_realsmith_jscXI2h3pZ = Tag1_realsmith_proxy_JuOylUMdzL(/*int:10342:10342:10034:e*/encoding_length_realsmith_jscXI2h3pZ) - sizeof(int);
/*aft_stmt:10034*/
    /*bef_stmt:10062*/
if (Tag2_realsmith_proxy_JuOylUMdzL(/*int:10342:10342:10062:e*/max_key_len_realsmith_jscXI2h3pZ) < 0)
        return -22;
/*aft_stmt:10062*/
    /*bef_stmt:10085*/
idx_realsmith_jscXI2h3pZ = Tag3_realsmith_proxy_JuOylUMdzL(/*int:10342:10342:10085:e*/key_idx_realsmith_jscXI2h3pZ) & 0xFF;
/*aft_stmt:10085*/
    /*bef_stmt:10172*/
if (Tag4_realsmith_proxy_JuOylUMdzL(/*int:10342:10342:10172:e*/idx_realsmith_jscXI2h3pZ)) {
        /*bef_stmt:10139*/
/*bef_stmt:10139*/
if (Tag5_realsmith_proxy_JuOylUMdzL(/*int:10342:10342:10139:e*/idx_realsmith_jscXI2h3pZ) < 1 || Tag6_realsmith_proxy_JuOylUMdzL(/*int:10342:10342:10139:e*/idx_realsmith_jscXI2h3pZ) > 4)
            return -22;
/*aft_stmt:10139*/
/*aft_stmt:10139*/
        idx_realsmith_jscXI2h3pZ--;
    } else {
        /*bef_stmt:10165*/
idx_realsmith_jscXI2h3pZ = Tag7_realsmith_proxy_JuOylUMdzL(/*int:10342:10342:10165:e*/default_key_realsmith_jscXI2h3pZ);
/*aft_stmt:10165*/
    }
/*aft_stmt:10172*/
    /*bef_stmt:10197*/
encoding_flags_realsmith_jscXI2h3pZ = Tag8_realsmith_proxy_JuOylUMdzL(/*int:10342:10342:10197:e*/idx_realsmith_jscXI2h3pZ) + 1;
/*aft_stmt:10197*/
    /*bef_stmt:10330*/
if (!Tag9_realsmith_proxy_JuOylUMdzL(/*int:10342:10342:10330:e*/wep_is_on_realsmith_jscXI2h3pZ)) {
        encoding_flags_realsmith_jscXI2h3pZ |= 0x100;
        return 0;
    } else {
        /*bef_stmt:10321*/
if (Tag10_realsmith_proxy_JuOylUMdzL(/*int:10342:10342:10321:e*/encryption_level_realsmith_jscXI2h3pZ) > 0) {
            /*bef_stmt:10288*/
int key_len_realsmith_jscXI2h3pZ = wep_key_lens_realsmith_jscXI2h3pZ[Tag11_realsmith_proxy_JuOylUMdzL(/*int:10342:10342:10288:e*/idx_realsmith_jscXI2h3pZ)];
/*aft_stmt:10288*/
            encoding_flags_realsmith_jscXI2h3pZ |= 0x200;
        } else {
            return -22;
        }
/*aft_stmt:10321*/
    }
/*aft_stmt:10330*/
    return 0;
}
int realsmith_proxy_JuOylUMdzL(int p_0_cpQPZ8vrd3, int p_1_MQ4R22G7Yn, int p_2_DHpKxd0qp4, int p_3_MMw4Ofy2WG, int p_4_iVH0m7ihYA, int p_5_sTiyPwlxKS, int p_6_bxH4xUmHUg) {
/*bef_stmt:10620*/
/*bef_stmt:10620*/
/*bef_stmt:10620*/
/*bef_stmt:10620*/
/*bef_stmt:10620*/
int proxy_ret_Xbl26WkeMF = realsmith_jscXI2h3pZ(Tag12_realsmith_proxy_JuOylUMdzL(/*int:10632:10632:10620:e*/p_0_cpQPZ8vrd3), Tag13_realsmith_proxy_JuOylUMdzL(/*int:10632:10632:10620:e*/p_1_MQ4R22G7Yn), Tag14_realsmith_proxy_JuOylUMdzL(/*int:10632:10632:10620:e*/p_2_DHpKxd0qp4), &(p_3_MMw4Ofy2WG), Tag15_realsmith_proxy_JuOylUMdzL(/*int:10632:10632:10620:e*/p_4_iVH0m7ihYA), &(p_5_sTiyPwlxKS), Tag16_realsmith_proxy_JuOylUMdzL(/*int:10632:10632:10620:e*/p_6_bxH4xUmHUg));
/*aft_stmt:10620*/
/*aft_stmt:10620*/
/*aft_stmt:10620*/
/*aft_stmt:10620*/
/*aft_stmt:10620*/
/*bef_stmt:10630*/
return Tag17_realsmith_proxy_JuOylUMdzL(/*int:10632:10632:10630:e*/proxy_ret_Xbl26WkeMF);
/*aft_stmt:10630*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_GYCYMhqYF8(x) (x)
#define Tag2_realsmith_GYCYMhqYF8(x) (x)
#define Tag3_realsmith_GYCYMhqYF8(x) (x)
#include "stdlib.h"
int realsmith_GYCYMhqYF8(int in_param_realsmith_GYCYMhqYF8, int out_param_realsmith_GYCYMhqYF8, unsigned long in_modifier_realsmith_GYCYMhqYF8,
                            unsigned char op_modifier_realsmith_GYCYMhqYF8, unsigned short op_realsmith_GYCYMhqYF8,
                            unsigned long timeout_realsmith_GYCYMhqYF8) {
    int ret_realsmith_GYCYMhqYF8 = 0;
    /*bef_stmt:17250*/
/*bef_stmt:17250*/
if (Tag1_realsmith_GYCYMhqYF8(/*int:17265:17265:17250:e*/in_param_realsmith_GYCYMhqYF8) == Tag2_realsmith_GYCYMhqYF8(/*int:17265:17265:17250:e*/out_param_realsmith_GYCYMhqYF8)) {
        ret_realsmith_GYCYMhqYF8 = 1;
    } else {
        ret_realsmith_GYCYMhqYF8 = -1;
    }
/*aft_stmt:17250*/
/*aft_stmt:17250*/
    /*bef_stmt:17263*/
return Tag3_realsmith_GYCYMhqYF8(/*int:17265:17265:17263:e*/ret_realsmith_GYCYMhqYF8);
/*aft_stmt:17263*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_CckoF7ZYDX(x) (x)
#include "stdlib.h"
struct stv6110x_state_SIprKA {
    int frontend_realsmith_CckoF7ZYDX;
};
int realsmith_CckoF7ZYDX(int frontend_realsmith_CckoF7ZYDX) {
    struct stv6110x_state_SIprKA stv6110x_realsmith_CckoF7ZYDX;
    /*bef_stmt:17151*/
stv6110x_realsmith_CckoF7ZYDX.frontend_realsmith_CckoF7ZYDX = Tag1_realsmith_CckoF7ZYDX(/*int:17190:17190:17151:e*/frontend_realsmith_CckoF7ZYDX);
/*aft_stmt:17151*/
    stv6110x_realsmith_CckoF7ZYDX.frontend_realsmith_CckoF7ZYDX = 0;
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_9SkOMOwI4Q(x) (x)
#define Tag2_realsmith_9SkOMOwI4Q(x) (x)
#define Tag3_realsmith_9SkOMOwI4Q(x) (x)
#define Tag4_realsmith_9SkOMOwI4Q(x) (x)
#define Tag5_realsmith_9SkOMOwI4Q(x) (x)
#define Tag6_realsmith_9SkOMOwI4Q(x) (x)
#define Tag7_realsmith_9SkOMOwI4Q(x) (x)
#define Tag8_realsmith_9SkOMOwI4Q(x) (x)
#define Tag9_realsmith_9SkOMOwI4Q(x) (x)
#define Tag10_realsmith_9SkOMOwI4Q(x) (x)
#define Tag11_realsmith_9SkOMOwI4Q(x) (x)
#define Tag12_realsmith_9SkOMOwI4Q(x) (x)
#define Tag13_realsmith_9SkOMOwI4Q(x) (x)
#define Tag14_realsmith_9SkOMOwI4Q(x) (x)
#define Tag15_realsmith_9SkOMOwI4Q(x) (x)
#define Tag16_realsmith_9SkOMOwI4Q(x) (x)
#include "limits.h"
unsigned long realsmith_9SkOMOwI4Q(unsigned long phys_addr_realsmith_9SkOMOwI4Q, unsigned long num_pages_realsmith_9SkOMOwI4Q, unsigned long size_realsmith_9SkOMOwI4Q, unsigned long align_shift_realsmith_9SkOMOwI4Q) {
    /*bef_stmt:656*/
unsigned long align_realsmith_9SkOMOwI4Q = 1UL << Tag1_realsmith_9SkOMOwI4Q(/*unsigned long:1097:1097:656:e*/align_shift_realsmith_9SkOMOwI4Q);
/*aft_stmt:656*/
    unsigned long first_slot_realsmith_9SkOMOwI4Q, last_slot_realsmith_9SkOMOwI4Q, region_end_realsmith_9SkOMOwI4Q;
    /*bef_stmt:870*/
/*bef_stmt:870*/
/*bef_stmt:870*/
/*bef_stmt:870*/
region_end_realsmith_9SkOMOwI4Q = (Tag2_realsmith_9SkOMOwI4Q(/*unsigned long:1097:1097:870:e*/phys_addr_realsmith_9SkOMOwI4Q) + Tag3_realsmith_9SkOMOwI4Q(/*unsigned long:1097:1097:870:e*/num_pages_realsmith_9SkOMOwI4Q) * 4096 - 1 < (9223372036854775807L *2UL+1UL)) ? (Tag4_realsmith_9SkOMOwI4Q(/*unsigned long:1097:1097:870:e*/phys_addr_realsmith_9SkOMOwI4Q) + Tag5_realsmith_9SkOMOwI4Q(/*unsigned long:1097:1097:870:e*/num_pages_realsmith_9SkOMOwI4Q) * 4096 - 1) : (9223372036854775807L *2UL+1UL);
/*aft_stmt:870*/
/*aft_stmt:870*/
/*aft_stmt:870*/
/*aft_stmt:870*/
    /*bef_stmt:940*/
/*bef_stmt:940*/
/*bef_stmt:940*/
first_slot_realsmith_9SkOMOwI4Q = (Tag6_realsmith_9SkOMOwI4Q(/*unsigned long:1097:1097:940:e*/phys_addr_realsmith_9SkOMOwI4Q) + Tag7_realsmith_9SkOMOwI4Q(/*unsigned long:1097:1097:940:e*/align_realsmith_9SkOMOwI4Q) - 1) & ~(Tag8_realsmith_9SkOMOwI4Q(/*unsigned long:1097:1097:940:e*/align_realsmith_9SkOMOwI4Q) - 1);
/*aft_stmt:940*/
/*aft_stmt:940*/
/*aft_stmt:940*/
    /*bef_stmt:1010*/
/*bef_stmt:1010*/
/*bef_stmt:1010*/
last_slot_realsmith_9SkOMOwI4Q = (Tag9_realsmith_9SkOMOwI4Q(/*unsigned long:1097:1097:1010:e*/region_end_realsmith_9SkOMOwI4Q) - Tag10_realsmith_9SkOMOwI4Q(/*unsigned long:1097:1097:1010:e*/size_realsmith_9SkOMOwI4Q) + 1) & ~(Tag11_realsmith_9SkOMOwI4Q(/*unsigned long:1097:1097:1010:e*/align_realsmith_9SkOMOwI4Q) - 1);
/*aft_stmt:1010*/
/*aft_stmt:1010*/
/*aft_stmt:1010*/
    /*bef_stmt:1043*/
/*bef_stmt:1043*/
if (Tag12_realsmith_9SkOMOwI4Q(/*unsigned long:1097:1097:1043:e*/first_slot_realsmith_9SkOMOwI4Q) > Tag13_realsmith_9SkOMOwI4Q(/*unsigned long:1097:1097:1043:e*/last_slot_realsmith_9SkOMOwI4Q))
        return 0;
/*aft_stmt:1043*/
/*aft_stmt:1043*/
    /*bef_stmt:1095*/
/*bef_stmt:1095*/
/*bef_stmt:1095*/
return ((Tag14_realsmith_9SkOMOwI4Q(/*unsigned long:1097:1097:1095:e*/last_slot_realsmith_9SkOMOwI4Q) - Tag15_realsmith_9SkOMOwI4Q(/*unsigned long:1097:1097:1095:e*/first_slot_realsmith_9SkOMOwI4Q)) >> Tag16_realsmith_9SkOMOwI4Q(/*unsigned long:1097:1097:1095:e*/align_shift_realsmith_9SkOMOwI4Q)) + 1;
/*aft_stmt:1095*/
/*aft_stmt:1095*/
/*aft_stmt:1095*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_0cpP80OOYi(x) (x)
#define Tag2_realsmith_0cpP80OOYi(x) (x)
#define Tag3_realsmith_0cpP80OOYi(x) (x)
#define Tag4_realsmith_0cpP80OOYi(x) (x)
#define Tag5_realsmith_0cpP80OOYi(x) (x)
#define Tag6_realsmith_0cpP80OOYi(x) (x)
#define Tag7_realsmith_0cpP80OOYi(x) (x)
#define Tag8_realsmith_0cpP80OOYi(x) (x)
#define Tag9_realsmith_0cpP80OOYi(x) (x)
#define Tag10_realsmith_0cpP80OOYi(x) (x)
#define Tag11_realsmith_0cpP80OOYi(x) (x)
#define Tag12_realsmith_0cpP80OOYi(x) (x)
#define Tag13_realsmith_0cpP80OOYi(x) (x)
#define Tag14_realsmith_0cpP80OOYi(x) (x)
#define Tag15_realsmith_0cpP80OOYi(x) (x)
#define Tag16_realsmith_0cpP80OOYi(x) (x)
#include "stdlib.h"
int realsmith_0cpP80OOYi(int misc_realsmith_0cpP80OOYi, int pcie_miphy_cfg_realsmith_0cpP80OOYi, int pcie_miphy_cfg_mask_realsmith_0cpP80OOYi, int sata_cfg_realsmith_0cpP80OOYi, int sata_cfg_mask_realsmith_0cpP80OOYi, int sata_miphy_cfg_pcie_realsmith_0cpP80OOYi, int cfg_val_realsmith_0cpP80OOYi) {
    /*bef_stmt:17305*/
/*bef_stmt:17305*/
/*bef_stmt:17305*/
/*bef_stmt:17305*/
if ((Tag1_realsmith_0cpP80OOYi(/*int:17429:17429:17305:e*/misc_realsmith_0cpP80OOYi) & Tag2_realsmith_0cpP80OOYi(/*int:17429:17429:17305:e*/pcie_miphy_cfg_mask_realsmith_0cpP80OOYi)) != (Tag3_realsmith_0cpP80OOYi(/*int:17429:17429:17305:e*/sata_miphy_cfg_pcie_realsmith_0cpP80OOYi) & Tag4_realsmith_0cpP80OOYi(/*int:17429:17429:17305:e*/pcie_miphy_cfg_mask_realsmith_0cpP80OOYi))) {
        /*bef_stmt:17298*/
/*bef_stmt:17298*/
/*bef_stmt:17298*/
/*bef_stmt:17298*/
misc_realsmith_0cpP80OOYi = (Tag5_realsmith_0cpP80OOYi(/*int:17429:17429:17298:e*/misc_realsmith_0cpP80OOYi) & ~Tag6_realsmith_0cpP80OOYi(/*int:17429:17429:17298:e*/pcie_miphy_cfg_mask_realsmith_0cpP80OOYi)) | (Tag7_realsmith_0cpP80OOYi(/*int:17429:17429:17298:e*/sata_miphy_cfg_pcie_realsmith_0cpP80OOYi) & Tag8_realsmith_0cpP80OOYi(/*int:17429:17429:17298:e*/pcie_miphy_cfg_mask_realsmith_0cpP80OOYi));
/*aft_stmt:17298*/
/*aft_stmt:17298*/
/*aft_stmt:17298*/
/*aft_stmt:17298*/
    }
/*aft_stmt:17305*/
/*aft_stmt:17305*/
/*aft_stmt:17305*/
/*aft_stmt:17305*/
    /*bef_stmt:17419*/
/*bef_stmt:17419*/
/*bef_stmt:17419*/
/*bef_stmt:17419*/
if ((Tag9_realsmith_0cpP80OOYi(/*int:17429:17429:17419:e*/misc_realsmith_0cpP80OOYi) & Tag10_realsmith_0cpP80OOYi(/*int:17429:17429:17419:e*/sata_cfg_mask_realsmith_0cpP80OOYi)) != (Tag11_realsmith_0cpP80OOYi(/*int:17429:17429:17419:e*/cfg_val_realsmith_0cpP80OOYi) & Tag12_realsmith_0cpP80OOYi(/*int:17429:17429:17419:e*/sata_cfg_mask_realsmith_0cpP80OOYi))) {
        /*bef_stmt:17412*/
/*bef_stmt:17412*/
/*bef_stmt:17412*/
/*bef_stmt:17412*/
misc_realsmith_0cpP80OOYi = (Tag13_realsmith_0cpP80OOYi(/*int:17429:17429:17412:e*/misc_realsmith_0cpP80OOYi) & ~Tag14_realsmith_0cpP80OOYi(/*int:17429:17429:17412:e*/sata_cfg_mask_realsmith_0cpP80OOYi)) | (Tag15_realsmith_0cpP80OOYi(/*int:17429:17429:17412:e*/cfg_val_realsmith_0cpP80OOYi) & Tag16_realsmith_0cpP80OOYi(/*int:17429:17429:17412:e*/sata_cfg_mask_realsmith_0cpP80OOYi));
/*aft_stmt:17412*/
/*aft_stmt:17412*/
/*aft_stmt:17412*/
/*aft_stmt:17412*/
    }
/*aft_stmt:17419*/
/*aft_stmt:17419*/
/*aft_stmt:17419*/
/*aft_stmt:17419*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_PstrgewHyr(x) (x)
#define Tag2_realsmith_PstrgewHyr(x) (x)
#define Tag3_realsmith_PstrgewHyr(x) (x)
#define Tag4_realsmith_PstrgewHyr(x) (x)
#define Tag5_realsmith_PstrgewHyr(x) (x)
#define Tag6_realsmith_PstrgewHyr(x) (x)
#define Tag7_realsmith_PstrgewHyr(x) (x)
#include "stdbool.h"
struct rc_dev_Qv9B9S {
    int driver_type_realsmith_PstrgewHyr;
    bool registered_realsmith_PstrgewHyr;
};
struct lirc_fh_Qv9B9S {
    int rec_mode_realsmith_PstrgewHyr;
    int rawir_empty_realsmith_PstrgewHyr;
    int scancodes_empty_realsmith_PstrgewHyr;
    struct rc_dev_Qv9B9S* rc_realsmith_PstrgewHyr;
};
int realsmith_PstrgewHyr(int registered_realsmith_PstrgewHyr, int driver_type_realsmith_PstrgewHyr, int rec_mode_realsmith_PstrgewHyr, int rawir_empty_realsmith_PstrgewHyr, int scancodes_empty_realsmith_PstrgewHyr) {
    int events_realsmith_PstrgewHyr = 0;
    /*bef_stmt:975*/
/*bef_stmt:975*/
if (!Tag1_realsmith_PstrgewHyr(/*int:990:990:975:e*/registered_realsmith_PstrgewHyr)) {
        events_realsmith_PstrgewHyr = 2 | 1;
    } else if (Tag2_realsmith_PstrgewHyr(/*int:990:990:975:e*/driver_type_realsmith_PstrgewHyr) != 3) {
        /*bef_stmt:907*/
/*bef_stmt:907*/
if (Tag3_realsmith_PstrgewHyr(/*int:990:990:907:e*/rec_mode_realsmith_PstrgewHyr) == 2 && !Tag4_realsmith_PstrgewHyr(/*int:990:990:907:e*/scancodes_empty_realsmith_PstrgewHyr)) {
            events_realsmith_PstrgewHyr = 4 | 8;
        }
/*aft_stmt:907*/
/*aft_stmt:907*/
        /*bef_stmt:963*/
/*bef_stmt:963*/
if (Tag5_realsmith_PstrgewHyr(/*int:990:990:963:e*/rec_mode_realsmith_PstrgewHyr) == 1 && !Tag6_realsmith_PstrgewHyr(/*int:990:990:963:e*/rawir_empty_realsmith_PstrgewHyr)) {
            events_realsmith_PstrgewHyr = 4 | 8;
        }
/*aft_stmt:963*/
/*aft_stmt:963*/
    }
/*aft_stmt:975*/
/*aft_stmt:975*/
    /*bef_stmt:988*/
return Tag7_realsmith_PstrgewHyr(/*int:990:990:988:e*/events_realsmith_PstrgewHyr);
/*aft_stmt:988*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_NIur3y30Pq(x) (x)
#define Tag2_realsmith_NIur3y30Pq(x) (x)
#define Tag3_realsmith_NIur3y30Pq(x) (x)
#define Tag4_realsmith_NIur3y30Pq(x) (x)
#define Tag5_realsmith_NIur3y30Pq(x) (x)
#include "stdlib.h"
int realsmith_NIur3y30Pq(int data_state_realsmith_NIur3y30Pq, int msg_dummy_realsmith_NIur3y30Pq) {
    int result_realsmith_NIur3y30Pq = 0;
    /*bef_stmt:17156*/
if (/*TAG1:STA*/((int)(realsmith_lxGuPOk9Yq((int)(data_state_realsmith_NIur3y30Pq)+(4))+(int)(data_state_realsmith_NIur3y30Pq)-(37))+data_state_realsmith_NIur3y30Pq)/*TAG1:END:data_state_realsmith_NIur3y30Pq*/ < 0) {
        result_realsmith_NIur3y30Pq = -1;
    }
/*aft_stmt:17156*/
    /*bef_stmt:17192*/
if (/*TAG2:STA*/((int)(realsmith_oadE0dAKkQ((int)(result_realsmith_NIur3y30Pq)+(100))+(int)(result_realsmith_NIur3y30Pq)-(1))+result_realsmith_NIur3y30Pq)/*TAG2:END:result_realsmith_NIur3y30Pq*/ == 0) {
        data_state_realsmith_NIur3y30Pq += 1;
    }
/*aft_stmt:17192*/
    /*bef_stmt:17229*/
if (/*TAG3:STA*/((int)(realsmith_k0UXcCXKnt((unsigned int)(data_state_realsmith_NIur3y30Pq)+(-46), (unsigned int)(data_state_realsmith_NIur3y30Pq)+(23))+(int)(data_state_realsmith_NIur3y30Pq)-(127))+result_realsmith_NIur3y30Pq)/*TAG3:END:result_realsmith_NIur3y30Pq*/ == 0) {
        /*bef_stmt:17222*/
result_realsmith_NIur3y30Pq = /*TAG4:STA*/((int)(realsmith_aJHW7fzmfF((unsigned long)(data_state_realsmith_NIur3y30Pq)+(10))+(int)(data_state_realsmith_NIur3y30Pq)-(52))+data_state_realsmith_NIur3y30Pq)/*TAG4:END:data_state_realsmith_NIur3y30Pq*/;
/*aft_stmt:17222*/
    }
/*aft_stmt:17229*/
    /*bef_stmt:17240*/
return /*TAG5:STA*/((result_realsmith_NIur3y30Pq) + (g_9EV3Y7) - -67)/*TAG5:END:result_realsmith_NIur3y30Pq*/;
g_9EV3Y7 = -67 + (result_realsmith_NIur3y30Pq - (52));
/*aft_stmt:17240*/
}



#include "stdlib.h"
int realsmith_SxFGIJwFO9(int nalloc_realsmith_SxFGIJwFO9, int len_realsmith_SxFGIJwFO9, int *body_realsmith_SxFGIJwFO9) {
    if (nalloc_realsmith_SxFGIJwFO9 == (len_realsmith_SxFGIJwFO9 + 1)) {
        nalloc_realsmith_SxFGIJwFO9 *= 2;
        body_realsmith_SxFGIJwFO9 = (realloc(body_realsmith_SxFGIJwFO9, nalloc_realsmith_SxFGIJwFO9 * sizeof(int)));
    }
    body_realsmith_SxFGIJwFO9[len_realsmith_SxFGIJwFO9++] = 0;
    return len_realsmith_SxFGIJwFO9;
}
int realsmith_proxy_y1A9LR0bCZ(int p_0_563sXTymhd, int p_1_3p2EjNKzHt, int p_2_aymqg3azR8) {
int proxy_BdNOntHrWk[14] = { 19, p_2_aymqg3azR8, p_2_aymqg3azR8, 77, 30, p_2_aymqg3azR8, p_2_aymqg3azR8, p_2_aymqg3azR8, p_2_aymqg3azR8, 54, p_2_aymqg3azR8, 53, p_2_aymqg3azR8, 6 };
int proxy_ret_f9nSn1Y9cq = realsmith_SxFGIJwFO9(p_0_563sXTymhd, p_1_3p2EjNKzHt, proxy_BdNOntHrWk);
return proxy_ret_f9nSn1Y9cq;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_6WYINlqSpN(x) (x)
#define Tag2_realsmith_6WYINlqSpN(x) (x)
#define Tag3_realsmith_6WYINlqSpN(x) (x)
#define Tag4_realsmith_6WYINlqSpN(x) (x)
#define Tag5_realsmith_6WYINlqSpN(x) (x)
#define Tag6_realsmith_6WYINlqSpN(x) (x)
#define Tag7_realsmith_6WYINlqSpN(x) (x)
#define Tag8_realsmith_6WYINlqSpN(x) (x)
#define Tag9_realsmith_6WYINlqSpN(x) (x)
#define Tag10_realsmith_6WYINlqSpN(x) (x)
#define Tag11_realsmith_6WYINlqSpN(x) (x)
#define Tag12_realsmith_6WYINlqSpN(x) (x)
#include "stdlib.h"
int realsmith_6WYINlqSpN(int exported_context_token_size_realsmith_6WYINlqSpN, int state_size_realsmith_6WYINlqSpN, int need_release_realsmith_6WYINlqSpN, int mech_size_realsmith_6WYINlqSpN, int src_name_size_realsmith_6WYINlqSpN, int targ_name_size_realsmith_6WYINlqSpN, long lifetime_realsmith_6WYINlqSpN, long ctx_flags_realsmith_6WYINlqSpN, int locally_initiated_realsmith_6WYINlqSpN, int open_realsmith_6WYINlqSpN, int options_size_realsmith_6WYINlqSpN) {
    int err_realsmith_6WYINlqSpN = 0;
    /*bef_stmt:17318*/
if (Tag1_realsmith_6WYINlqSpN(/*int:17601:17601:17318:e*/exported_context_token_size_realsmith_6WYINlqSpN) < 0) return -1;
/*aft_stmt:17318*/
    /*bef_stmt:17346*/
if (Tag2_realsmith_6WYINlqSpN(/*int:17601:17601:17346:e*/state_size_realsmith_6WYINlqSpN) < 0) return -1;
/*aft_stmt:17346*/
    /*bef_stmt:17374*/
if (Tag3_realsmith_6WYINlqSpN(/*int:17601:17601:17374:e*/need_release_realsmith_6WYINlqSpN) < 0) return -1;
/*aft_stmt:17374*/
    /*bef_stmt:17402*/
if (Tag4_realsmith_6WYINlqSpN(/*int:17601:17601:17402:e*/mech_size_realsmith_6WYINlqSpN) < 0) return -1;
/*aft_stmt:17402*/
    /*bef_stmt:17432*/
if (Tag5_realsmith_6WYINlqSpN(/*int:17601:17601:17432:e*/src_name_size_realsmith_6WYINlqSpN) < 0) return -1;
/*aft_stmt:17432*/
    /*bef_stmt:17460*/
if (Tag6_realsmith_6WYINlqSpN(/*int:17601:17601:17460:e*/targ_name_size_realsmith_6WYINlqSpN) < 0) return -1;
/*aft_stmt:17460*/
    /*bef_stmt:17513*/
/*bef_stmt:17513*/
if (Tag7_realsmith_6WYINlqSpN(/*long:17601:17601:17513:e*/lifetime_realsmith_6WYINlqSpN) < 0 || Tag8_realsmith_6WYINlqSpN(/*long:17601:17601:17513:e*/ctx_flags_realsmith_6WYINlqSpN) < 0) return -1;
/*aft_stmt:17513*/
/*aft_stmt:17513*/
    /*bef_stmt:17560*/
/*bef_stmt:17560*/
if (Tag9_realsmith_6WYINlqSpN(/*int:17601:17601:17560:e*/locally_initiated_realsmith_6WYINlqSpN) < 0 || Tag10_realsmith_6WYINlqSpN(/*int:17601:17601:17560:e*/open_realsmith_6WYINlqSpN) < 0) return -1;
/*aft_stmt:17560*/
/*aft_stmt:17560*/
    /*bef_stmt:17588*/
if (Tag11_realsmith_6WYINlqSpN(/*int:17601:17601:17588:e*/options_size_realsmith_6WYINlqSpN) < 0) return -1;
/*aft_stmt:17588*/
    /*bef_stmt:17599*/
return Tag12_realsmith_6WYINlqSpN(/*int:17601:17601:17599:e*/err_realsmith_6WYINlqSpN);
/*aft_stmt:17599*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_kvZjnwbsuc(x) (x)
#define Tag2_realsmith_kvZjnwbsuc(x) (x)
#define Tag3_realsmith_kvZjnwbsuc(x) (x)
#define Tag4_realsmith_kvZjnwbsuc(x) (x)
#define Tag5_realsmith_kvZjnwbsuc(x) (x)
#define Tag6_realsmith_kvZjnwbsuc(x) (x)
#define Tag7_realsmith_kvZjnwbsuc(x) (x)
#define Tag8_realsmith_kvZjnwbsuc(x) (x)
#include "stdint.h"
int realsmith_kvZjnwbsuc(int rfpath_realsmith_kvZjnwbsuc, int regaddr_realsmith_kvZjnwbsuc, int bitmask_realsmith_kvZjnwbsuc, int data_realsmith_kvZjnwbsuc) {
    int original_value_realsmith_kvZjnwbsuc, bitshift_realsmith_kvZjnwbsuc;
    /*bef_stmt:2203*/
if (Tag1_realsmith_kvZjnwbsuc(/*int:2216:2216:2203:e*/bitmask_realsmith_kvZjnwbsuc) != 0xFFFFFFFF) {
        /*bef_stmt:2111*/
/*bef_stmt:2111*/
original_value_realsmith_kvZjnwbsuc = (Tag2_realsmith_kvZjnwbsuc(/*int:2216:2216:2111:e*/regaddr_realsmith_kvZjnwbsuc) ^ Tag3_realsmith_kvZjnwbsuc(/*int:2216:2216:2111:e*/rfpath_realsmith_kvZjnwbsuc));
/*aft_stmt:2111*/
/*aft_stmt:2111*/
        bitshift_realsmith_kvZjnwbsuc = (1);
        /*bef_stmt:2194*/
/*bef_stmt:2194*/
/*bef_stmt:2194*/
/*bef_stmt:2194*/
data_realsmith_kvZjnwbsuc = ((Tag4_realsmith_kvZjnwbsuc(/*int:2216:2216:2194:e*/original_value_realsmith_kvZjnwbsuc) & (~Tag5_realsmith_kvZjnwbsuc(/*int:2216:2216:2194:e*/bitmask_realsmith_kvZjnwbsuc))) | (Tag6_realsmith_kvZjnwbsuc(/*int:2216:2216:2194:e*/data_realsmith_kvZjnwbsuc) << Tag7_realsmith_kvZjnwbsuc(/*int:2216:2216:2194:e*/bitshift_realsmith_kvZjnwbsuc)));
/*aft_stmt:2194*/
/*aft_stmt:2194*/
/*aft_stmt:2194*/
/*aft_stmt:2194*/
    }
/*aft_stmt:2203*/
    /*bef_stmt:2214*/
return Tag8_realsmith_kvZjnwbsuc(/*int:2216:2216:2214:e*/data_realsmith_kvZjnwbsuc);
/*aft_stmt:2214*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_2dEldBdJ7W(x) (x)
#define Tag2_realsmith_2dEldBdJ7W(x) (x)
#define Tag3_realsmith_2dEldBdJ7W(x) (x)
#include "stdlib.h"
int realsmith_2dEldBdJ7W(int arg1_realsmith_2dEldBdJ7W, int arg2_realsmith_2dEldBdJ7W) {
    int result_realsmith_2dEldBdJ7W = 0;
    /*bef_stmt:17155*/
if (Tag1_realsmith_2dEldBdJ7W(/*int:17204:17204:17155:e*/arg1_realsmith_2dEldBdJ7W) == 2) {
        result_realsmith_2dEldBdJ7W += 1;
    }
/*aft_stmt:17155*/
    /*bef_stmt:17191*/
if (Tag2_realsmith_2dEldBdJ7W(/*int:17204:17204:17191:e*/arg2_realsmith_2dEldBdJ7W) == 0) {
        result_realsmith_2dEldBdJ7W += 1;
    }
/*aft_stmt:17191*/
    /*bef_stmt:17202*/
return Tag3_realsmith_2dEldBdJ7W(/*int:17204:17204:17202:e*/result_realsmith_2dEldBdJ7W);
/*aft_stmt:17202*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ZQ0AoRALCR(x) (x)
#define Tag2_realsmith_ZQ0AoRALCR(x) (x)
#include "stdbool.h"
#include "stdlib.h"
struct {
    _Bool poll_enabled_realsmith_ZQ0AoRALCR;
    void *poll_init_work_realsmith_ZQ0AoRALCR;
} hotplug_realsmith_ZQ0AoRALCR;
int realsmith_ZQ0AoRALCR(int poll_enabled_realsmith_ZQ0AoRALCR) {
    /*bef_stmt:17172*/
hotplug_realsmith_ZQ0AoRALCR.poll_enabled_realsmith_ZQ0AoRALCR = (_Bool)Tag1_realsmith_ZQ0AoRALCR(/*int:17220:17220:17172:e*/poll_enabled_realsmith_ZQ0AoRALCR);
/*aft_stmt:17172*/
    /*bef_stmt:17218*/
return Tag2_realsmith_ZQ0AoRALCR(/*_Bool:0:0:17218:e*/hotplug_realsmith_ZQ0AoRALCR.poll_enabled_realsmith_ZQ0AoRALCR) ? 1 : 0;
/*aft_stmt:17218*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_RgWo5BHZRs(x) (x)
#include "stdlib.h"
int realsmith_RgWo5BHZRs(int connection_id_realsmith_RgWo5BHZRs) {
    const int CONNECTION_LOST_WHILE_PENDING_realsmith_RgWo5BHZRs = 1;
    /*bef_stmt:17104*/
return Tag1_realsmith_RgWo5BHZRs(/*const int:17106:17106:17104:e*/CONNECTION_LOST_WHILE_PENDING_realsmith_RgWo5BHZRs);
/*aft_stmt:17104*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_VyPCUkVyRN(x) (x)
#define Tag2_realsmith_VyPCUkVyRN(x) (x)
#define Tag3_realsmith_VyPCUkVyRN(x) (x)
#define Tag4_realsmith_VyPCUkVyRN(x) (x)
#define Tag5_realsmith_VyPCUkVyRN(x) (x)
#define Tag6_realsmith_VyPCUkVyRN(x) (x)
#include "stdlib.h"
int realsmith_VyPCUkVyRN(int origin_blocks_realsmith_VyPCUkVyRN, int block_realsmith_VyPCUkVyRN, int bio_flag_realsmith_VyPCUkVyRN) {
    int r_realsmith_VyPCUkVyRN;
    int commit_needed_realsmith_VyPCUkVyRN = 0;
    /*bef_stmt:17188*/
/*bef_stmt:17188*/
if (Tag1_realsmith_VyPCUkVyRN(/*int:17283:17283:17188:e*/block_realsmith_VyPCUkVyRN) >= Tag2_realsmith_VyPCUkVyRN(/*int:17283:17283:17188:e*/origin_blocks_realsmith_VyPCUkVyRN)) {
        return 1;
    }
/*aft_stmt:17188*/
/*aft_stmt:17188*/
    /*bef_stmt:17208*/
if (Tag3_realsmith_VyPCUkVyRN(/*int:17283:17283:17208:e*/bio_flag_realsmith_VyPCUkVyRN)) {
        return 2;
    }
/*aft_stmt:17208*/
    /*bef_stmt:17257*/
r_realsmith_VyPCUkVyRN = (Tag4_realsmith_VyPCUkVyRN(/*int:17283:17283:17257:e*/block_realsmith_VyPCUkVyRN) % 2 == 0) ? 0 : 1;
/*aft_stmt:17257*/
    /*bef_stmt:17270*/
if (Tag5_realsmith_VyPCUkVyRN(/*int:17283:17283:17270:e*/commit_needed_realsmith_VyPCUkVyRN)) {
    }
/*aft_stmt:17270*/
    /*bef_stmt:17281*/
return Tag6_realsmith_VyPCUkVyRN(/*int:17283:17283:17281:e*/r_realsmith_VyPCUkVyRN);
/*aft_stmt:17281*/
}



#include "stdlib.h"
int realsmith_ZV3GcDdb15(int keylen_realsmith_ZV3GcDdb15, const unsigned char *key_realsmith_ZV3GcDdb15, unsigned char *hash_realsmith_ZV3GcDdb15) {
    int ret_realsmith_ZV3GcDdb15 = 0;
    if (keylen_realsmith_ZV3GcDdb15 <= 0) return -1;
    unsigned char *temp_hash_realsmith_ZV3GcDdb15 = (unsigned char *)(malloc(32));
    if (!temp_hash_realsmith_ZV3GcDdb15) return -1;
    for (int i_realsmith_ZV3GcDdb15 = 0; i_realsmith_ZV3GcDdb15 < keylen_realsmith_ZV3GcDdb15 && i_realsmith_ZV3GcDdb15 < 32; i_realsmith_ZV3GcDdb15++) {
        temp_hash_realsmith_ZV3GcDdb15[i_realsmith_ZV3GcDdb15] = key_realsmith_ZV3GcDdb15[i_realsmith_ZV3GcDdb15] ^ 0xAA;
    }
    for (int i_realsmith_ZV3GcDdb15 = 0; i_realsmith_ZV3GcDdb15 < 32; i_realsmith_ZV3GcDdb15++) {
        hash_realsmith_ZV3GcDdb15[i_realsmith_ZV3GcDdb15] = temp_hash_realsmith_ZV3GcDdb15[i_realsmith_ZV3GcDdb15];
    }
    (free(temp_hash_realsmith_ZV3GcDdb15));
    return ret_realsmith_ZV3GcDdb15;
}
int realsmith_proxy_VJAWfvS3uJ(int p_0_qWTBs78GXg, unsigned char p_1_vRbB0Ib9Qx, unsigned char p_2_ZNA3HjLURt) {
unsigned char proxy_XWRlDoIC3J[16] = { 95, 59, 61, p_1_vRbB0Ib9Qx, p_1_vRbB0Ib9Qx, p_1_vRbB0Ib9Qx, 58, 49, 37, p_1_vRbB0Ib9Qx, p_1_vRbB0Ib9Qx, 70, 7, p_1_vRbB0Ib9Qx, 90, 33 };
int proxy_ret_NJRFVY5xyp = realsmith_ZV3GcDdb15(p_0_qWTBs78GXg, proxy_XWRlDoIC3J, &(p_2_ZNA3HjLURt));
return proxy_ret_NJRFVY5xyp;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_xfWmrv2P5f(x) (x)
#define Tag2_realsmith_xfWmrv2P5f(x) (x)
#define Tag3_realsmith_xfWmrv2P5f(x) (x)
#include "stdlib.h"
struct snd_pcm_substream_ODqfzT {
    struct {
        int delay_realsmith_xfWmrv2P5f;
    } *runtime_realsmith_xfWmrv2P5f;
};
struct azx_dev_ODqfzT {
    struct {
        struct snd_pcm_substream_ODqfzT *substream_realsmith_xfWmrv2P5f;
    } core_realsmith_xfWmrv2P5f;
};
int realsmith_xfWmrv2P5f(int delay_realsmith_xfWmrv2P5f) {
    struct snd_pcm_substream_ODqfzT substream_realsmith_xfWmrv2P5f;
    struct azx_dev_ODqfzT azx_dev_realsmith_xfWmrv2P5f;
    substream_realsmith_xfWmrv2P5f.runtime_realsmith_xfWmrv2P5f = (malloc(sizeof(*substream_realsmith_xfWmrv2P5f.runtime_realsmith_xfWmrv2P5f)));
    /*bef_stmt:17402*/
substream_realsmith_xfWmrv2P5f.runtime_realsmith_xfWmrv2P5f->delay_realsmith_xfWmrv2P5f = Tag1_realsmith_xfWmrv2P5f(/*int:17552:17552:17402:e*/delay_realsmith_xfWmrv2P5f);
/*aft_stmt:17402*/
    azx_dev_realsmith_xfWmrv2P5f.core_realsmith_xfWmrv2P5f.substream_realsmith_xfWmrv2P5f = &substream_realsmith_xfWmrv2P5f;
    /*bef_stmt:17499*/
int result_realsmith_xfWmrv2P5f = Tag2_realsmith_xfWmrv2P5f(/*int:17552:17552:17499:e*/azx_dev_realsmith_xfWmrv2P5f.core_realsmith_xfWmrv2P5f.substream_realsmith_xfWmrv2P5f->runtime_realsmith_xfWmrv2P5f->delay_realsmith_xfWmrv2P5f);
/*aft_stmt:17499*/
    (free(substream_realsmith_xfWmrv2P5f.runtime_realsmith_xfWmrv2P5f));
    /*bef_stmt:17550*/
return Tag3_realsmith_xfWmrv2P5f(/*int:17552:17552:17550:e*/result_realsmith_xfWmrv2P5f);
/*aft_stmt:17550*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_CAd3eDGi7I(x) (x)
#define Tag2_realsmith_CAd3eDGi7I(x) (x)
#define Tag3_realsmith_CAd3eDGi7I(x) (x)
#include "stdlib.h"
struct vc_data_pU9dZa {
    int tty_realsmith_CAd3eDGi7I;
};
int realsmith_CAd3eDGi7I(int tty_realsmith_CAd3eDGi7I, unsigned int cols_realsmith_CAd3eDGi7I, unsigned int rows_realsmith_CAd3eDGi7I) {
    /*bef_stmt:17224*/
/*bef_stmt:17224*/
/*bef_stmt:17224*/
if (Tag1_realsmith_CAd3eDGi7I(/*int:17234:17234:17224:e*/tty_realsmith_CAd3eDGi7I) < 0 || Tag2_realsmith_CAd3eDGi7I(/*unsigned int:17234:17234:17224:e*/cols_realsmith_CAd3eDGi7I) == 0 || Tag3_realsmith_CAd3eDGi7I(/*unsigned int:17234:17234:17224:e*/rows_realsmith_CAd3eDGi7I) == 0) {
        return -1;
    }
/*aft_stmt:17224*/
/*aft_stmt:17224*/
/*aft_stmt:17224*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_l5bJ8SKDTx(x) (x)
#define Tag2_realsmith_l5bJ8SKDTx(x) (x)
#include "stdlib.h"
struct mtd_info_xPdZu2 {
    int priv_realsmith_l5bJ8SKDTx;
};
int realsmith_l5bJ8SKDTx(int priv_realsmith_l5bJ8SKDTx) {
    struct mtd_info_xPdZu2 mtd_realsmith_l5bJ8SKDTx;
    /*bef_stmt:17151*/
mtd_realsmith_l5bJ8SKDTx.priv_realsmith_l5bJ8SKDTx = /*TAG1:STA*/((int)(realsmith_f08OQuQYMQ((int)(priv_realsmith_l5bJ8SKDTx)+(-14))+(int)(priv_realsmith_l5bJ8SKDTx)-(46))+priv_realsmith_l5bJ8SKDTx)/*TAG1:END:priv_realsmith_l5bJ8SKDTx*/;
/*aft_stmt:17151*/
    /*bef_stmt:17179*/
return /*TAG2:STA*/((int)(realsmith_proxy_KIzYYrLpnh((int)(mtd_realsmith_l5bJ8SKDTx.priv_realsmith_l5bJ8SKDTx)+(-41), (int)(mtd_realsmith_l5bJ8SKDTx.priv_realsmith_l5bJ8SKDTx)+(-48))+(int)(mtd_realsmith_l5bJ8SKDTx.priv_realsmith_l5bJ8SKDTx)-(47))+mtd_realsmith_l5bJ8SKDTx.priv_realsmith_l5bJ8SKDTx)/*TAG2:END:mtd_realsmith_l5bJ8SKDTx.priv_realsmith_l5bJ8SKDTx*/;
/*aft_stmt:17179*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_YeRFG4b7NT(x) (x)
#define Tag2_realsmith_YeRFG4b7NT(x) (x)
#include "stdlib.h"
struct f71805f_data_dFLNRV {
    unsigned long alarms_realsmith_YeRFG4b7NT;
};
unsigned long realsmith_YeRFG4b7NT(unsigned long alarms_realsmith_YeRFG4b7NT) {
    struct f71805f_data_dFLNRV data_realsmith_YeRFG4b7NT;
    /*bef_stmt:17151*/
data_realsmith_YeRFG4b7NT.alarms_realsmith_YeRFG4b7NT = Tag1_realsmith_YeRFG4b7NT(/*unsigned long:17192:17192:17151:e*/alarms_realsmith_YeRFG4b7NT);
/*aft_stmt:17151*/
    /*bef_stmt:17190*/
return Tag2_realsmith_YeRFG4b7NT(/*unsigned long:17192:17192:17190:e*/data_realsmith_YeRFG4b7NT.alarms_realsmith_YeRFG4b7NT) & 0x7ff;
/*aft_stmt:17190*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_zdr4PzzNTw(x) (x)
#define Tag2_realsmith_zdr4PzzNTw(x) (x)
#define Tag3_realsmith_zdr4PzzNTw(x) (x)
#define Tag4_realsmith_zdr4PzzNTw(x) (x)
#include "stdlib.h"
int realsmith_zdr4PzzNTw(int state_realsmith_zdr4PzzNTw) {
    /*bef_stmt:17097*/
int result_noirq_realsmith_zdr4PzzNTw = Tag1_realsmith_zdr4PzzNTw(/*int:17146:17146:17097:e*/state_realsmith_zdr4PzzNTw);
/*aft_stmt:17097*/
    /*bef_stmt:17123*/
int result_early_realsmith_zdr4PzzNTw = Tag2_realsmith_zdr4PzzNTw(/*int:17146:17146:17123:e*/state_realsmith_zdr4PzzNTw);
/*aft_stmt:17123*/
    /*bef_stmt:17144*/
/*bef_stmt:17144*/
return Tag3_realsmith_zdr4PzzNTw(/*int:17146:17146:17144:e*/result_noirq_realsmith_zdr4PzzNTw) + Tag4_realsmith_zdr4PzzNTw(/*int:17146:17146:17144:e*/result_early_realsmith_zdr4PzzNTw);
/*aft_stmt:17144*/
/*aft_stmt:17144*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_2dZQ4hNhgK(x) (x)
#define Tag2_realsmith_2dZQ4hNhgK(x) (x)
#define Tag3_realsmith_2dZQ4hNhgK(x) (x)
#define Tag4_realsmith_2dZQ4hNhgK(x) (x)
#define Tag5_realsmith_2dZQ4hNhgK(x) (x)
#define Tag6_realsmith_2dZQ4hNhgK(x) (x)
#define Tag7_realsmith_2dZQ4hNhgK(x) (x)
#include "stdlib.h"
int realsmith_2dZQ4hNhgK(int flags_realsmith_2dZQ4hNhgK, int portal_virt_addr_realsmith_2dZQ4hNhgK, int portal_phys_addr_realsmith_2dZQ4hNhgK, int cmd_token_realsmith_2dZQ4hNhgK, int cmd_id_realsmith_2dZQ4hNhgK) {
    int error_realsmith_2dZQ4hNhgK;
    int status_realsmith_2dZQ4hNhgK;
    unsigned long irq_flags_realsmith_2dZQ4hNhgK = 0;
    int in_irq_realsmith_2dZQ4hNhgK = 0;
    /*bef_stmt:17286*/
/*bef_stmt:17286*/
if (/*TAG1:STA*/((int)(realsmith_0cpP80OOYi((int)(in_irq_realsmith_2dZQ4hNhgK)+(63), (int)(in_irq_realsmith_2dZQ4hNhgK)+(66), (int)(in_irq_realsmith_2dZQ4hNhgK)+(30), (int)(in_irq_realsmith_2dZQ4hNhgK)+(76), (int)(in_irq_realsmith_2dZQ4hNhgK)+(39), (int)(in_irq_realsmith_2dZQ4hNhgK)+(48), (int)(in_irq_realsmith_2dZQ4hNhgK)+(87))+(int)(in_irq_realsmith_2dZQ4hNhgK)-(0))+in_irq_realsmith_2dZQ4hNhgK)/*TAG1:END:in_irq_realsmith_2dZQ4hNhgK*/ && !(/*TAG2:STA*/((flags_realsmith_2dZQ4hNhgK) + (g_L83BDN[3]) - -91)/*TAG2:END:flags_realsmith_2dZQ4hNhgK*/ & 1))
        return -22;
g_L83BDN[3] = -91 + (flags_realsmith_2dZQ4hNhgK - (78));
/*aft_stmt:17286*/
/*aft_stmt:17286*/
    /*bef_stmt:17309*/
if (/*TAG3:STA*/((int)(realsmith_PstrgewHyr((int)(flags_realsmith_2dZQ4hNhgK)+(21), (int)(flags_realsmith_2dZQ4hNhgK)+(-49), (int)(flags_realsmith_2dZQ4hNhgK)+(-7), (int)(flags_realsmith_2dZQ4hNhgK)+(-54), (int)(flags_realsmith_2dZQ4hNhgK)+(-51))+(int)(flags_realsmith_2dZQ4hNhgK)-(78))+flags_realsmith_2dZQ4hNhgK)/*TAG3:END:flags_realsmith_2dZQ4hNhgK*/ & 1) {
    } else {
    }
/*aft_stmt:17309*/
    /*bef_stmt:17367*/
if (!(/*TAG4:STA*/((int)(realsmith_9SkOMOwI4Q((unsigned long)(flags_realsmith_2dZQ4hNhgK)+(-57), (unsigned long)(flags_realsmith_2dZQ4hNhgK)+(-52), (unsigned long)(flags_realsmith_2dZQ4hNhgK)+(-4), (unsigned long)(flags_realsmith_2dZQ4hNhgK)+(-43))+(unsigned long)(flags_realsmith_2dZQ4hNhgK)-(78))+flags_realsmith_2dZQ4hNhgK)/*TAG4:END:flags_realsmith_2dZQ4hNhgK*/ & 1)) {
        status_realsmith_2dZQ4hNhgK = 0;
    } else {
        status_realsmith_2dZQ4hNhgK = 0;
    }
/*aft_stmt:17367*/
    /*bef_stmt:17425*/
if (/*TAG5:STA*/((status_realsmith_2dZQ4hNhgK) + (g_LEKDNV) - 41)/*TAG5:END:status_realsmith_2dZQ4hNhgK*/ != 0) {
        error_realsmith_2dZQ4hNhgK = -1;
        goto common_exit;
    }
g_LEKDNV = 41 + (status_realsmith_2dZQ4hNhgK - (0));
/*aft_stmt:17425*/
    error_realsmith_2dZQ4hNhgK = 0;
/*bef_stmt:17466*/
common_exit:
    if (Tag6_realsmith_2dZQ4hNhgK(/*int:17479:17479:17466:e*/flags_realsmith_2dZQ4hNhgK) & 1) {
    } else {
    }
/*aft_stmt:17466*/
    /*bef_stmt:17477*/
return /*TAG7:STA*/((int)(realsmith_NIur3y30Pq((int)(error_realsmith_2dZQ4hNhgK)+(51), (int)(error_realsmith_2dZQ4hNhgK)+(43))+(int)(error_realsmith_2dZQ4hNhgK)-(52))+error_realsmith_2dZQ4hNhgK)/*TAG7:END:error_realsmith_2dZQ4hNhgK*/;
/*aft_stmt:17477*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Iw00tTXDSe(x) (x)
#define Tag2_realsmith_Iw00tTXDSe(x) (x)
#define Tag3_realsmith_Iw00tTXDSe(x) (x)
#define Tag4_realsmith_Iw00tTXDSe(x) (x)
#define Tag5_realsmith_Iw00tTXDSe(x) (x)
#define Tag6_realsmith_Iw00tTXDSe(x) (x)
#include "stdlib.h"
int realsmith_Iw00tTXDSe(int boot_seq_done_realsmith_Iw00tTXDSe, int device_realsmith_Iw00tTXDSe, int ixFIRMWARE_FLAGS_realsmith_Iw00tTXDSe, int rst_reg_realsmith_Iw00tTXDSe, int ck_disable_realsmith_Iw00tTXDSe, int interrupts_enabled_realsmith_Iw00tTXDSe) {
    int result_realsmith_Iw00tTXDSe = 0;
    /*bef_stmt:17216*/
while (/*TAG1:STA*/((int)(realsmith_5xa7kCxhi4((int)(boot_seq_done_realsmith_Iw00tTXDSe)+(-6), (int)(boot_seq_done_realsmith_Iw00tTXDSe)+(-24))+(int)(boot_seq_done_realsmith_Iw00tTXDSe)-(79))+boot_seq_done_realsmith_Iw00tTXDSe)/*TAG1:END:boot_seq_done_realsmith_Iw00tTXDSe*/ == 0) {
    }
/*aft_stmt:17216*/
    ixFIRMWARE_FLAGS_realsmith_Iw00tTXDSe = 0;
    rst_reg_realsmith_Iw00tTXDSe = 1;
    /*bef_stmt:17292*/
result_realsmith_Iw00tTXDSe = (Tag2_realsmith_Iw00tTXDSe(/*int:17378:17378:17292:e*/device_realsmith_Iw00tTXDSe) % 2 == 0) ? 0 : -1;
/*aft_stmt:17292*/
    /*bef_stmt:17320*/
/*bef_stmt:17320*/
if (/*TAG3:STA*/((int)(realsmith_proxy_i00qyBECEA((int)(result_realsmith_Iw00tTXDSe)+(-3))+(int)(result_realsmith_Iw00tTXDSe)-(0))+result_realsmith_Iw00tTXDSe)/*TAG3:END:result_realsmith_Iw00tTXDSe*/ != 0)
        return Tag4_realsmith_Iw00tTXDSe(/*int:17378:17378:17320:e*/result_realsmith_Iw00tTXDSe);
/*aft_stmt:17320*/
/*aft_stmt:17320*/
    ck_disable_realsmith_Iw00tTXDSe = 0;
    rst_reg_realsmith_Iw00tTXDSe = 0;
    /*bef_stmt:17365*/
while (/*TAG5:STA*/((int)(realsmith_5Z1OmsIP6H((int)(interrupts_enabled_realsmith_Iw00tTXDSe)+(-40), (int)(interrupts_enabled_realsmith_Iw00tTXDSe)+(-41), (int)(interrupts_enabled_realsmith_Iw00tTXDSe)+(-37), (int)(interrupts_enabled_realsmith_Iw00tTXDSe)+(-41))+(int)(interrupts_enabled_realsmith_Iw00tTXDSe)-(41))+interrupts_enabled_realsmith_Iw00tTXDSe)/*TAG5:END:interrupts_enabled_realsmith_Iw00tTXDSe*/ == 0) {
    }
/*aft_stmt:17365*/
    /*bef_stmt:17376*/
return /*TAG6:STA*/((int)(realsmith_V7Jon4wQID((int)(result_realsmith_Iw00tTXDSe)+(36), (int)(result_realsmith_Iw00tTXDSe)+(85), (int)(result_realsmith_Iw00tTXDSe)+(24))+(int)(result_realsmith_Iw00tTXDSe)-(1))+result_realsmith_Iw00tTXDSe)/*TAG6:END:result_realsmith_Iw00tTXDSe*/;
/*aft_stmt:17376*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_wBJtEmxiWb(x) (x)
#define Tag2_realsmith_wBJtEmxiWb(x) (x)
#define Tag3_realsmith_wBJtEmxiWb(x) (x)
#include "stdbool.h"
int realsmith_wBJtEmxiWb(int blk_queue_dying_realsmith_wBJtEmxiWb, int scsi_host_in_recovery_realsmith_wBJtEmxiWb, int scsi_device_is_busy_realsmith_wBJtEmxiWb) {
    /*bef_stmt:622*/
if (/*TAG1:STA*/((int)(realsmith_coxeBYODSD((int)(blk_queue_dying_realsmith_wBJtEmxiWb)+(-16), (int)(blk_queue_dying_realsmith_wBJtEmxiWb)+(-38), (int)(blk_queue_dying_realsmith_wBJtEmxiWb)+(-56))+(int)(blk_queue_dying_realsmith_wBJtEmxiWb)-(91))+blk_queue_dying_realsmith_wBJtEmxiWb)/*TAG1:END:blk_queue_dying_realsmith_wBJtEmxiWb*/) {
        return 0;
    }
/*aft_stmt:622*/
    /*bef_stmt:653*/
/*bef_stmt:653*/
if (Tag2_realsmith_wBJtEmxiWb(/*int:663:663:653:e*/scsi_host_in_recovery_realsmith_wBJtEmxiWb) || Tag3_realsmith_wBJtEmxiWb(/*int:663:663:653:e*/scsi_device_is_busy_realsmith_wBJtEmxiWb)) {
        return 1;
    }
/*aft_stmt:653*/
/*aft_stmt:653*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_jTMQ5DzqHK(x) (x)
#define Tag2_realsmith_jTMQ5DzqHK(x) (x)
#include "stdlib.h"
int realsmith_jTMQ5DzqHK(int mapped_realsmith_jTMQ5DzqHK, unsigned long dma_addr_realsmith_jTMQ5DzqHK, unsigned long size_realsmith_jTMQ5DzqHK) {
    /*bef_stmt:17128*/
if (/*TAG1:STA*/((int)(realsmith_cuqEruySOu((int)(mapped_realsmith_jTMQ5DzqHK)+(7), (int)(mapped_realsmith_jTMQ5DzqHK)+(-18), (int)(mapped_realsmith_jTMQ5DzqHK)+(-10), (int)(mapped_realsmith_jTMQ5DzqHK)+(49), (int)(mapped_realsmith_jTMQ5DzqHK)+(-20), (int)(mapped_realsmith_jTMQ5DzqHK)+(23))+(int)(mapped_realsmith_jTMQ5DzqHK)-(38))+mapped_realsmith_jTMQ5DzqHK)/*TAG1:END:mapped_realsmith_jTMQ5DzqHK*/) {
    }
/*aft_stmt:17128*/
    mapped_realsmith_jTMQ5DzqHK = 0;
    /*bef_stmt:17151*/
return /*TAG2:STA*/((mapped_realsmith_jTMQ5DzqHK) + (g_9Y8MHE) - 3)/*TAG2:END:mapped_realsmith_jTMQ5DzqHK*/;
g_9Y8MHE = 3 + (mapped_realsmith_jTMQ5DzqHK - (0));
/*aft_stmt:17151*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_o9vzofK1Yw(x) (x)
#define Tag2_realsmith_o9vzofK1Yw(x) (x)
#define Tag3_realsmith_o9vzofK1Yw(x) (x)
#define Tag4_realsmith_o9vzofK1Yw(x) (x)
#include "stdbool.h"
int realsmith_o9vzofK1Yw(int frag_count_realsmith_o9vzofK1Yw, int dmacount_realsmith_o9vzofK1Yw) {
    unsigned long flags_realsmith_o9vzofK1Yw;
    _Bool warn_realsmith_o9vzofK1Yw = 0;
    /*bef_stmt:694*/
if (Tag1_realsmith_o9vzofK1Yw(/*int:733:733:694:e*/frag_count_realsmith_o9vzofK1Yw) >= 0) {
        dmacount_realsmith_o9vzofK1Yw--;
        /*bef_stmt:686*/
if (Tag2_realsmith_o9vzofK1Yw(/*int:733:733:686:e*/dmacount_realsmith_o9vzofK1Yw) < 0) {
            warn_realsmith_o9vzofK1Yw = 1;
        }
/*aft_stmt:686*/
    }
/*aft_stmt:694*/
    /*bef_stmt:720*/
if (!Tag3_realsmith_o9vzofK1Yw(/*_Bool:733:733:720:e*/warn_realsmith_o9vzofK1Yw)) {
        /*bef_stmt:715*/
return Tag4_realsmith_o9vzofK1Yw(/*int:733:733:715:e*/dmacount_realsmith_o9vzofK1Yw);
/*aft_stmt:715*/
    }
/*aft_stmt:720*/
    return -1;
}



#include "stdlib.h"
int realsmith_b8BlVfWeW4(int client_adapter_realsmith_b8BlVfWeW4, int client_dev_realsmith_b8BlVfWeW4, int *hdc100x_channels_realsmith_b8BlVfWeW4, int num_channels_realsmith_b8BlVfWeW4) {
    int ret_realsmith_b8BlVfWeW4;
    int data_lock_realsmith_b8BlVfWeW4 = 0;
    int *data_client_realsmith_b8BlVfWeW4 = &client_dev_realsmith_b8BlVfWeW4;
    if (!(client_adapter_realsmith_b8BlVfWeW4 & (1 | 2 | 4)))
        return -1;
    int indio_dev_size_realsmith_b8BlVfWeW4 = sizeof(int);
    int *indio_dev_realsmith_b8BlVfWeW4 = (int *)(malloc(indio_dev_size_realsmith_b8BlVfWeW4));
    if (!indio_dev_realsmith_b8BlVfWeW4)
        return -12;
    *data_client_realsmith_b8BlVfWeW4 = *indio_dev_realsmith_b8BlVfWeW4;
    data_lock_realsmith_b8BlVfWeW4 = 1;
    int dev_parent_realsmith_b8BlVfWeW4 = client_dev_realsmith_b8BlVfWeW4;
    int name_realsmith_b8BlVfWeW4 = client_dev_realsmith_b8BlVfWeW4;
    int modes_realsmith_b8BlVfWeW4 = 1;
    int info_realsmith_b8BlVfWeW4 = 1;
    int available_scan_masks_realsmith_b8BlVfWeW4 = 1;
    int hdc100x_int_time_realsmith_b8BlVfWeW4[2][1] = {{0}, {0}};
    int HDC100X_REG_CONFIG_ACQ_MODE_realsmith_b8BlVfWeW4 = 0;
    for (int i_realsmith_b8BlVfWeW4 = 0; i_realsmith_b8BlVfWeW4 < 2; i_realsmith_b8BlVfWeW4++) {
        if (hdc100x_int_time_realsmith_b8BlVfWeW4[i_realsmith_b8BlVfWeW4][0] == 0) {
        }
    }
    ret_realsmith_b8BlVfWeW4 = 0;
    if (ret_realsmith_b8BlVfWeW4 < 0) {
        (free(indio_dev_realsmith_b8BlVfWeW4));
        return ret_realsmith_b8BlVfWeW4;
    }
    (free(indio_dev_realsmith_b8BlVfWeW4));
    return 0;
}
int realsmith_proxy_A2M2IkbRjI(int p_0_M5MzIdRLtr, int p_1_O2huTEKzPn, int p_2_DPsc5kWKNq, int p_3_dZ2IYlgnAU) {
int proxy_yyNNEOzjw2[10] = { 71, 89, 51, p_2_DPsc5kWKNq, 59, 78, p_2_DPsc5kWKNq, 42, p_2_DPsc5kWKNq, p_2_DPsc5kWKNq };
int proxy_ret_isQI4EDrGm = realsmith_b8BlVfWeW4(p_0_M5MzIdRLtr, p_1_O2huTEKzPn, proxy_yyNNEOzjw2, p_3_dZ2IYlgnAU);
return proxy_ret_isQI4EDrGm;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_IQcmnxXBiw(x) (x)
#define Tag2_realsmith_IQcmnxXBiw(x) (x)
#define Tag3_realsmith_IQcmnxXBiw(x) (x)
#define Tag4_realsmith_IQcmnxXBiw(x) (x)
#define Tag5_realsmith_IQcmnxXBiw(x) (x)
#define Tag6_realsmith_IQcmnxXBiw(x) (x)
#include "stdlib.h"
int realsmith_IQcmnxXBiw(int req_realsmith_IQcmnxXBiw, int dst_realsmith_IQcmnxXBiw) {
    /*bef_stmt:17121*/
if (Tag1_realsmith_IQcmnxXBiw(/*int:17264:17264:17121:e*/dst_realsmith_IQcmnxXBiw) == 0)
        return 0;
/*aft_stmt:17121*/
    /*bef_stmt:17171*/
/*bef_stmt:17171*/
int tm_realsmith_IQcmnxXBiw = (Tag2_realsmith_IQcmnxXBiw(/*int:17264:17264:17171:e*/req_realsmith_IQcmnxXBiw) + Tag3_realsmith_IQcmnxXBiw(/*int:17264:17264:17171:e*/dst_realsmith_IQcmnxXBiw)) % 2;
/*aft_stmt:17171*/
/*aft_stmt:17171*/
    /*bef_stmt:17223*/
int rtt_realsmith_IQcmnxXBiw = (Tag4_realsmith_IQcmnxXBiw(/*int:17264:17264:17223:e*/tm_realsmith_IQcmnxXBiw) > 0) ? 1 : 0;
/*aft_stmt:17223*/
    /*bef_stmt:17262*/
/*bef_stmt:17262*/
return (Tag5_realsmith_IQcmnxXBiw(/*int:17264:17264:17262:e*/tm_realsmith_IQcmnxXBiw) && Tag6_realsmith_IQcmnxXBiw(/*int:17264:17264:17262:e*/rtt_realsmith_IQcmnxXBiw)) ? 1 : 0;
/*aft_stmt:17262*/
/*aft_stmt:17262*/
}



#include "stdlib.h"
int realsmith_QhYuDTZDUX(int ps_realsmith_QhYuDTZDUX, char s_realsmith_QhYuDTZDUX[]) {
    static const char units_realsmith_QhYuDTZDUX[] = "BKMGTPE";
    const char *unit_realsmith_QhYuDTZDUX = units_realsmith_QhYuDTZDUX;
    while (ps_realsmith_QhYuDTZDUX > 9 && unit_realsmith_QhYuDTZDUX[1]) {
        ps_realsmith_QhYuDTZDUX -= 10;
        unit_realsmith_QhYuDTZDUX++;
    }
    int pageSize_realsmith_QhYuDTZDUX = 1 << ps_realsmith_QhYuDTZDUX;
    return pageSize_realsmith_QhYuDTZDUX;
}
int realsmith_proxy_ap5llAMXZt(int p_0_Za5wEixH7S, char p_1_0eZm3nxvsK) {
char proxy_NgbZ4Af3JW[14] = { p_1_0eZm3nxvsK, 7, p_1_0eZm3nxvsK, p_1_0eZm3nxvsK, 96, 27, 60, p_1_0eZm3nxvsK, 73, p_1_0eZm3nxvsK, p_1_0eZm3nxvsK, p_1_0eZm3nxvsK, 71, 68 };
int proxy_ret_jqC0XN4EPj = realsmith_QhYuDTZDUX(p_0_Za5wEixH7S, proxy_NgbZ4Af3JW);
return proxy_ret_jqC0XN4EPj;
}


#include "stdlib.h"
#include "string.h"
int realsmith_AwyA8HgGci(int recvlength_realsmith_AwyA8HgGci, unsigned char *recvbuff_realsmith_AwyA8HgGci) {
    unsigned char cmd_resp_buff_realsmith_AwyA8HgGci[1024];
    if (recvlength_realsmith_AwyA8HgGci < 4 || recvlength_realsmith_AwyA8HgGci > 1024) {
        return -1;
    }
    (memcpy(cmd_resp_buff_realsmith_AwyA8HgGci, recvbuff_realsmith_AwyA8HgGci + 4, recvlength_realsmith_AwyA8HgGci - 4));
    return 0;
}
int realsmith_proxy_FalhXzpLFp(int p_0_xPtddyL6Pp, unsigned char p_1_eUJpFmo29T) {
unsigned char proxy_4iaZhyzZIH[17] = { 88, p_1_eUJpFmo29T, p_1_eUJpFmo29T, 35, 24, 43, 27, 38, p_1_eUJpFmo29T, p_1_eUJpFmo29T, p_1_eUJpFmo29T, p_1_eUJpFmo29T, 86, 31, 25, 0, p_1_eUJpFmo29T };
int proxy_ret_Ya1vnozVvc = realsmith_AwyA8HgGci(p_0_xPtddyL6Pp, proxy_4iaZhyzZIH);
return proxy_ret_Ya1vnozVvc;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Ra1Tv2NG9f(x) (x)
#define Tag2_realsmith_Ra1Tv2NG9f(x) (x)
#define Tag3_realsmith_Ra1Tv2NG9f(x) (x)
#define Tag4_realsmith_Ra1Tv2NG9f(x) (x)
#define Tag5_realsmith_Ra1Tv2NG9f(x) (x)
#define Tag6_realsmith_Ra1Tv2NG9f(x) (x)
#define Tag7_realsmith_Ra1Tv2NG9f(x) (x)
#define Tag8_realsmith_Ra1Tv2NG9f(x) (x)
#define Tag9_realsmith_Ra1Tv2NG9f(x) (x)
#define Tag10_realsmith_Ra1Tv2NG9f(x) (x)
#define Tag11_realsmith_Ra1Tv2NG9f(x) (x)
#define Tag12_realsmith_Ra1Tv2NG9f(x) (x)
#define Tag13_realsmith_Ra1Tv2NG9f(x) (x)
#define Tag14_realsmith_Ra1Tv2NG9f(x) (x)
#define Tag15_realsmith_Ra1Tv2NG9f(x) (x)
#define Tag16_realsmith_Ra1Tv2NG9f(x) (x)
#define Tag17_realsmith_Ra1Tv2NG9f(x) (x)
#include "stdint.h"
#include "stdlib.h"
int realsmith_Ra1Tv2NG9f(int current_modulation_realsmith_Ra1Tv2NG9f, int snr_realsmith_Ra1Tv2NG9f, int read_snr_return_realsmith_Ra1Tv2NG9f, int read_snr_value_realsmith_Ra1Tv2NG9f) {
    unsigned short int strength_realsmith_Ra1Tv2NG9f = 0;
    unsigned char val_realsmith_Ra1Tv2NG9f;
    unsigned short int snr_x10_realsmith_Ra1Tv2NG9f;
    /*bef_stmt:17615*/
int ret_realsmith_Ra1Tv2NG9f = Tag1_realsmith_Ra1Tv2NG9f(/*int:18182:18182:17615:e*/read_snr_return_realsmith_Ra1Tv2NG9f);
/*aft_stmt:17615*/
    unsigned int ref_snr_realsmith_Ra1Tv2NG9f;
    unsigned int str_realsmith_Ra1Tv2NG9f;
    /*bef_stmt:17663*/
switch (Tag2_realsmith_Ra1Tv2NG9f(/*int:18182:18182:17663:e*/current_modulation_realsmith_Ra1Tv2NG9f)) {
    case 0:
        ref_snr_realsmith_Ra1Tv2NG9f = 1600;
        break;
    /*bef_stmt:17703*/
case 1:
    case 2:
    case 3:
        val_realsmith_Ra1Tv2NG9f = Tag3_realsmith_Ra1Tv2NG9f(/*int:18182:18182:17703:e*/read_snr_value_realsmith_Ra1Tv2NG9f);
/*aft_stmt:17703*/
        /*bef_stmt:17798*/
if (Tag4_realsmith_Ra1Tv2NG9f(/*unsigned char:18182:18182:17798:e*/val_realsmith_Ra1Tv2NG9f) & 0x04)
            ref_snr_realsmith_Ra1Tv2NG9f = 2800;
        else
            ref_snr_realsmith_Ra1Tv2NG9f = 2200;
/*aft_stmt:17798*/
        break;
    default:
        return -1;
    }
/*aft_stmt:17663*/
    /*bef_stmt:17850*/
/*bef_stmt:17850*/
if (Tag5_realsmith_Ra1Tv2NG9f(/*int:18182:18182:17850:e*/ret_realsmith_Ra1Tv2NG9f) < 0)
        return Tag6_realsmith_Ra1Tv2NG9f(/*int:18182:18182:17850:e*/ret_realsmith_Ra1Tv2NG9f);
/*aft_stmt:17850*/
/*aft_stmt:17850*/
    /*bef_stmt:17873*/
snr_x10_realsmith_Ra1Tv2NG9f = (unsigned short int)Tag7_realsmith_Ra1Tv2NG9f(/*int:18182:18182:17873:e*/snr_realsmith_Ra1Tv2NG9f);
/*aft_stmt:17873*/
    /*bef_stmt:18141*/
/*bef_stmt:18141*/
/*bef_stmt:18141*/
/*bef_stmt:18141*/
if (Tag8_realsmith_Ra1Tv2NG9f(/*unsigned short:18182:18182:18141:e*/snr_x10_realsmith_Ra1Tv2NG9f) <= (Tag9_realsmith_Ra1Tv2NG9f(/*unsigned int:18182:18182:18141:e*/ref_snr_realsmith_Ra1Tv2NG9f) - 100))
        str_realsmith_Ra1Tv2NG9f = 0;
    else if (Tag10_realsmith_Ra1Tv2NG9f(/*unsigned short:18182:18182:18141:e*/snr_x10_realsmith_Ra1Tv2NG9f) <= Tag11_realsmith_Ra1Tv2NG9f(/*unsigned int:18182:18182:18141:e*/ref_snr_realsmith_Ra1Tv2NG9f))
        str_realsmith_Ra1Tv2NG9f = (0xffff * 65) / 100;
    else {
        /*bef_stmt:18012*/
/*bef_stmt:18012*/
str_realsmith_Ra1Tv2NG9f = Tag12_realsmith_Ra1Tv2NG9f(/*unsigned short:18182:18182:18012:e*/snr_x10_realsmith_Ra1Tv2NG9f) - Tag13_realsmith_Ra1Tv2NG9f(/*unsigned int:18182:18182:18012:e*/ref_snr_realsmith_Ra1Tv2NG9f);
/*aft_stmt:18012*/
/*aft_stmt:18012*/
        str_realsmith_Ra1Tv2NG9f /= 50;
        str_realsmith_Ra1Tv2NG9f += 78;
        /*bef_stmt:18083*/
if (Tag14_realsmith_Ra1Tv2NG9f(/*unsigned int:18182:18182:18083:e*/str_realsmith_Ra1Tv2NG9f) > 100)
            str_realsmith_Ra1Tv2NG9f = 100;
/*aft_stmt:18083*/
        /*bef_stmt:18124*/
str_realsmith_Ra1Tv2NG9f = (0xffff * Tag15_realsmith_Ra1Tv2NG9f(/*unsigned int:18182:18182:18124:e*/str_realsmith_Ra1Tv2NG9f)) / 100;
/*aft_stmt:18124*/
    }
/*aft_stmt:18141*/
/*aft_stmt:18141*/
/*aft_stmt:18141*/
/*aft_stmt:18141*/
    /*bef_stmt:18166*/
strength_realsmith_Ra1Tv2NG9f = (unsigned short int)Tag16_realsmith_Ra1Tv2NG9f(/*unsigned int:18182:18182:18166:e*/str_realsmith_Ra1Tv2NG9f);
/*aft_stmt:18166*/
    /*bef_stmt:18180*/
return Tag17_realsmith_Ra1Tv2NG9f(/*unsigned short:18182:18182:18180:e*/strength_realsmith_Ra1Tv2NG9f);
/*aft_stmt:18180*/
}



#include<stdint.h>
#include<inttypes.h>
#include "stdlib.h"
struct sunrpc_net_6Et7Km {
    void *proc_net_rpc_realsmith_vKHE3yTS5M;
};
struct net_6Et7Km {
    void *proc_net_realsmith_vKHE3yTS5M;
};
int realsmith_vKHE3yTS5M(int net_proc_net_realsmith_vKHE3yTS5M) {
    struct sunrpc_net_6Et7Km sn_realsmith_vKHE3yTS5M;
    sn_realsmith_vKHE3yTS5M.proc_net_rpc_realsmith_vKHE3yTS5M = ((void*)0);
    if (sn_realsmith_vKHE3yTS5M.proc_net_rpc_realsmith_vKHE3yTS5M == ((void*)0)) {
        sn_realsmith_vKHE3yTS5M.proc_net_rpc_realsmith_vKHE3yTS5M = (malloc(sizeof(void*)));
        if (sn_realsmith_vKHE3yTS5M.proc_net_rpc_realsmith_vKHE3yTS5M == ((void*)0))
            return -12;
    }
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_Y7sPIGiurf(x) (x)
#define Tag2_realsmith_proxy_Y7sPIGiurf(x) (x)
#define Tag3_realsmith_proxy_Y7sPIGiurf(x) (x)
#define Tag4_realsmith_proxy_Y7sPIGiurf(x) (x)
#define Tag5_realsmith_proxy_Y7sPIGiurf(x) (x)
#define Tag6_realsmith_proxy_Y7sPIGiurf(x) (x)
#define Tag7_realsmith_proxy_Y7sPIGiurf(x) (x)
#define Tag8_realsmith_proxy_Y7sPIGiurf(x) (x)
#include "stddef.h"
int realsmith_IGinMRfNjL(unsigned int io_offset_realsmith_IGinMRfNjL, unsigned int attr_realsmith_IGinMRfNjL, unsigned int *base_realsmith_IGinMRfNjL, unsigned int num_realsmith_IGinMRfNjL, unsigned int align_realsmith_IGinMRfNjL) {
    /*bef_stmt:817*/
if (!Tag1_realsmith_proxy_Y7sPIGiurf(/*unsigned int:880:880:817:e*/io_offset_realsmith_IGinMRfNjL))
        return -1;
/*aft_stmt:817*/
    /*bef_stmt:870*/
/*bef_stmt:870*/
*base_realsmith_IGinMRfNjL = Tag2_realsmith_proxy_Y7sPIGiurf(/*unsigned int:880:880:870:e*/io_offset_realsmith_IGinMRfNjL) | (Tag3_realsmith_proxy_Y7sPIGiurf(/*unsigned int:880:880:870:e*/*base_realsmith_IGinMRfNjL) & 0x0fff);
/*aft_stmt:870*/
/*aft_stmt:870*/
    return 0;
}
int realsmith_proxy_Y7sPIGiurf(unsigned int p_0_aXefRQ62nJ, unsigned int p_1_7OpVVaj2TM, unsigned int p_2_I62nVHzJrc, unsigned int p_3_7PAp1yhokf, unsigned int p_4_t5XIn5BXLV) {
/*bef_stmt:1097*/
/*bef_stmt:1097*/
/*bef_stmt:1097*/
/*bef_stmt:1097*/
int proxy_ret_ix3Sm8PVON = realsmith_IGinMRfNjL(Tag4_realsmith_proxy_Y7sPIGiurf(/*unsigned int:1109:1109:1097:e*/p_0_aXefRQ62nJ), Tag5_realsmith_proxy_Y7sPIGiurf(/*unsigned int:1109:1109:1097:e*/p_1_7OpVVaj2TM), &(p_2_I62nVHzJrc), Tag6_realsmith_proxy_Y7sPIGiurf(/*unsigned int:1109:1109:1097:e*/p_3_7PAp1yhokf), Tag7_realsmith_proxy_Y7sPIGiurf(/*unsigned int:1109:1109:1097:e*/p_4_t5XIn5BXLV));
/*aft_stmt:1097*/
/*aft_stmt:1097*/
/*aft_stmt:1097*/
/*aft_stmt:1097*/
/*bef_stmt:1107*/
return Tag8_realsmith_proxy_Y7sPIGiurf(/*int:1109:1109:1107:e*/proxy_ret_ix3Sm8PVON);
/*aft_stmt:1107*/
}




#include "stdlib.h"
int realsmith_s4UodD7Jci(const unsigned char *in_key_realsmith_s4UodD7Jci, unsigned int key_len_realsmith_s4UodD7Jci) {
    int rc_realsmith_s4UodD7Jci = 0;
    unsigned char *kb_realsmith_s4UodD7Jci = ((void*)0);
    if (kb_realsmith_s4UodD7Jci) {
        (free(kb_realsmith_s4UodD7Jci));
        kb_realsmith_s4UodD7Jci = ((void*)0);
    }
    kb_realsmith_s4UodD7Jci = (unsigned char *)(malloc(key_len_realsmith_s4UodD7Jci));
    if (!kb_realsmith_s4UodD7Jci) {
        return -1;
    }
    for (unsigned int i_realsmith_s4UodD7Jci = 0; i_realsmith_s4UodD7Jci < key_len_realsmith_s4UodD7Jci; i_realsmith_s4UodD7Jci++) {
        kb_realsmith_s4UodD7Jci[i_realsmith_s4UodD7Jci] = in_key_realsmith_s4UodD7Jci[i_realsmith_s4UodD7Jci];
    }
    if (key_len_realsmith_s4UodD7Jci < 16 || key_len_realsmith_s4UodD7Jci > 32) {
        rc_realsmith_s4UodD7Jci = -1;
    }
    (free(kb_realsmith_s4UodD7Jci));
    return rc_realsmith_s4UodD7Jci;
}
int realsmith_proxy_18CodtEsaq(unsigned char p_0_d7Os1JG0vN, unsigned int p_1_TUiXsWt254) {
unsigned char proxy_TLyUsX7a3M[20] = { 12, p_0_d7Os1JG0vN, 87, 64, p_0_d7Os1JG0vN, 53, p_0_d7Os1JG0vN, 64, p_0_d7Os1JG0vN, 53, p_0_d7Os1JG0vN, 2, p_0_d7Os1JG0vN, p_0_d7Os1JG0vN, p_0_d7Os1JG0vN, p_0_d7Os1JG0vN, 81, p_0_d7Os1JG0vN, 23, 99 };
int proxy_ret_NAzOKm3HMi = realsmith_s4UodD7Jci(proxy_TLyUsX7a3M, p_1_TUiXsWt254);
return proxy_ret_NAzOKm3HMi;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_hQeBSOk5Bp(x) (x)
#define Tag2_realsmith_hQeBSOk5Bp(x) (x)
#include "stdlib.h"
struct rpc_auth_Vuvxr4 {
    int au_count_realsmith_hQeBSOk5Bp;
};
struct rpc_auth_Vuvxr4 null_auth_realsmith_hQeBSOk5Bp = {0};
int realsmith_hQeBSOk5Bp(int increment_realsmith_hQeBSOk5Bp) {
    /*bef_stmt:17173*/
null_auth_realsmith_hQeBSOk5Bp.au_count_realsmith_hQeBSOk5Bp += Tag1_realsmith_hQeBSOk5Bp(/*int:17205:17205:17173:e*/increment_realsmith_hQeBSOk5Bp);
/*aft_stmt:17173*/
    /*bef_stmt:17203*/
return /*TAG2:STA*/((null_auth_realsmith_hQeBSOk5Bp.au_count_realsmith_hQeBSOk5Bp) + (g_QM9VDC[0]) - -95)/*TAG2:END:null_auth_realsmith_hQeBSOk5Bp.au_count_realsmith_hQeBSOk5Bp*/;
g_QM9VDC[0] = -95 + (null_auth_realsmith_hQeBSOk5Bp.au_count_realsmith_hQeBSOk5Bp - (52));
/*aft_stmt:17203*/
}



#include "stdint.h"
#include "stdlib.h"
int realsmith_DQJ9y8vQFO(int flags_realsmith_DQJ9y8vQFO, int hlen_realsmith_DQJ9y8vQFO, unsigned int rcv_hash_realsmith_DQJ9y8vQFO, unsigned int *pdu_realsmith_DQJ9y8vQFO, long unsigned int pdu_len_realsmith_DQJ9y8vQFO) {
    unsigned int recv_digest_realsmith_DQJ9y8vQFO;
    unsigned int exp_digest_realsmith_DQJ9y8vQFO;
    if (!(flags_realsmith_DQJ9y8vQFO & 1)) {
        return -71;
    }
    recv_digest_realsmith_DQJ9y8vQFO = *(pdu_realsmith_DQJ9y8vQFO + hlen_realsmith_DQJ9y8vQFO / 4);
    unsigned int hash_realsmith_DQJ9y8vQFO = 0;
    for (long unsigned int i_realsmith_DQJ9y8vQFO = 0; i_realsmith_DQJ9y8vQFO < pdu_len_realsmith_DQJ9y8vQFO / 4; i_realsmith_DQJ9y8vQFO++) {
        hash_realsmith_DQJ9y8vQFO ^= pdu_realsmith_DQJ9y8vQFO[i_realsmith_DQJ9y8vQFO];
    }
    exp_digest_realsmith_DQJ9y8vQFO = *(pdu_realsmith_DQJ9y8vQFO + hlen_realsmith_DQJ9y8vQFO / 4);
    if (recv_digest_realsmith_DQJ9y8vQFO != exp_digest_realsmith_DQJ9y8vQFO) {
        return -5;
    }
    return 0;
}
int realsmith_proxy_PbfoE1u6oi(int p_0_NGBDITtu3O, int p_1_ftKJLaGWcY, unsigned int p_2_jo01Or1cKZ, unsigned int p_3_xb9PcPsA97, int p_4_tzuIELBVOI) {
unsigned int proxy_wHFapmYNeY[16] = { p_3_xb9PcPsA97, p_3_xb9PcPsA97, p_3_xb9PcPsA97, 84, 48, 26, 35, 95, p_3_xb9PcPsA97, 94, 2, 38, 77, p_3_xb9PcPsA97, 81, 94 };
int proxy_ret_Yzr2E048HK = realsmith_DQJ9y8vQFO(p_0_NGBDITtu3O, p_1_ftKJLaGWcY, p_2_jo01Or1cKZ, proxy_wHFapmYNeY, p_4_tzuIELBVOI);
return proxy_ret_Yzr2E048HK;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_7F64KuNXRE(x) (x)
#define Tag2_realsmith_7F64KuNXRE(x) (x)
#define Tag3_realsmith_7F64KuNXRE(x) (x)
#define Tag4_realsmith_7F64KuNXRE(x) (x)
#include "stdbool.h"
int realsmith_7F64KuNXRE(unsigned long old_realsmith_7F64KuNXRE, unsigned long new_realsmith_7F64KuNXRE) {
    const unsigned long RCU_SEQ_STATE_MASK_realsmith_7F64KuNXRE = ~0UL;
    /*bef_stmt:677*/
/*bef_stmt:677*/
/*bef_stmt:677*/
/*bef_stmt:677*/
return (Tag1_realsmith_7F64KuNXRE(/*unsigned long:679:679:677:e*/old_realsmith_7F64KuNXRE) + Tag2_realsmith_7F64KuNXRE(/*const unsigned long:679:679:677:e*/RCU_SEQ_STATE_MASK_realsmith_7F64KuNXRE)) & ~Tag3_realsmith_7F64KuNXRE(/*const unsigned long:679:679:677:e*/RCU_SEQ_STATE_MASK_realsmith_7F64KuNXRE) < Tag4_realsmith_7F64KuNXRE(/*unsigned long:679:679:677:e*/new_realsmith_7F64KuNXRE);
/*aft_stmt:677*/
/*aft_stmt:677*/
/*aft_stmt:677*/
/*aft_stmt:677*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_6wzkENVfUT(x) (x)
#define Tag2_realsmith_6wzkENVfUT(x) (x)
#include "stdbool.h"
int realsmith_6wzkENVfUT(int flags_realsmith_6wzkENVfUT) {
    const int DMA_FENCE_FLAG_SIGNALED_BIT_realsmith_6wzkENVfUT = 0;
    /*bef_stmt:644*/
/*bef_stmt:644*/
return (Tag1_realsmith_6wzkENVfUT(/*int:646:646:644:e*/flags_realsmith_6wzkENVfUT) & (1 << Tag2_realsmith_6wzkENVfUT(/*const int:646:646:644:e*/DMA_FENCE_FLAG_SIGNALED_BIT_realsmith_6wzkENVfUT))) != 0;
/*aft_stmt:644*/
/*aft_stmt:644*/
}



#include "stdlib.h"
int realsmith_WbHiQSgkFr(int portal_virt_addr_realsmith_WbHiQSgkFr, int cmd_realsmith_WbHiQSgkFr, int *mc_status_realsmith_WbHiQSgkFr) {
    int status_realsmith_WbHiQSgkFr;
    unsigned long timeout_usecs_realsmith_WbHiQSgkFr = 1000 * 1000;
    for (;;) {
        status_realsmith_WbHiQSgkFr = (cmd_realsmith_WbHiQSgkFr % 2 == 0) ? 1 : 0;
        if (status_realsmith_WbHiQSgkFr != 1)
            break;
        for (volatile int i_realsmith_WbHiQSgkFr = 0; i_realsmith_WbHiQSgkFr < 1000; i_realsmith_WbHiQSgkFr++);
        timeout_usecs_realsmith_WbHiQSgkFr -= 1000;
        if (timeout_usecs_realsmith_WbHiQSgkFr == 0) {
            return -110;
        }
    }
    *mc_status_realsmith_WbHiQSgkFr = status_realsmith_WbHiQSgkFr;
    return 0;
}
int realsmith_proxy_X3fIvHt06g(int p_0_BEgQMxqTKy, int p_1_QbAinhTq7O, int p_2_eeYIMEsPyS) {
int proxy_ret_dkCT7nf2iV = realsmith_WbHiQSgkFr(p_0_BEgQMxqTKy, p_1_QbAinhTq7O, &(p_2_eeYIMEsPyS));
return proxy_ret_dkCT7nf2iV;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_WsFrtqU8gU(x) (x)
#define Tag2_realsmith_WsFrtqU8gU(x) (x)
#define Tag3_realsmith_WsFrtqU8gU(x) (x)
#define Tag4_realsmith_WsFrtqU8gU(x) (x)
#define Tag5_realsmith_WsFrtqU8gU(x) (x)
#define Tag6_realsmith_WsFrtqU8gU(x) (x)
#define Tag7_realsmith_WsFrtqU8gU(x) (x)
#define Tag8_realsmith_WsFrtqU8gU(x) (x)
#define Tag9_realsmith_WsFrtqU8gU(x) (x)
#define Tag10_realsmith_WsFrtqU8gU(x) (x)
#include "stdlib.h"
int realsmith_WsFrtqU8gU(int xres_realsmith_WsFrtqU8gU, int yres_realsmith_WsFrtqU8gU) {
    int specified_realsmith_WsFrtqU8gU = 1;
    int refresh_specified_realsmith_WsFrtqU8gU = 0;
    int bpp_specified_realsmith_WsFrtqU8gU = 0;
    int rb_realsmith_WsFrtqU8gU = 0;
    int cvt_realsmith_WsFrtqU8gU = 1;
    int interlace_realsmith_WsFrtqU8gU = 0;
    int margins_realsmith_WsFrtqU8gU = 1;
    int force_realsmith_WsFrtqU8gU = 0;
    /*bef_stmt:17303*/
if (!Tag1_realsmith_WsFrtqU8gU(/*int:17524:17524:17303:e*/specified_realsmith_WsFrtqU8gU)) return -1;
/*aft_stmt:17303*/
    /*bef_stmt:17331*/
if (Tag2_realsmith_WsFrtqU8gU(/*int:17524:17524:17331:e*/xres_realsmith_WsFrtqU8gU) != 720) return -1;
/*aft_stmt:17331*/
    /*bef_stmt:17359*/
if (Tag3_realsmith_WsFrtqU8gU(/*int:17524:17524:17359:e*/yres_realsmith_WsFrtqU8gU) != 480) return -1;
/*aft_stmt:17359*/
    /*bef_stmt:17379*/
if (Tag4_realsmith_WsFrtqU8gU(/*int:17524:17524:17379:e*/refresh_specified_realsmith_WsFrtqU8gU)) return -1;
/*aft_stmt:17379*/
    /*bef_stmt:17399*/
if (Tag5_realsmith_WsFrtqU8gU(/*int:17524:17524:17399:e*/bpp_specified_realsmith_WsFrtqU8gU)) return -1;
/*aft_stmt:17399*/
    /*bef_stmt:17420*/
if (Tag6_realsmith_WsFrtqU8gU(/*int:17524:17524:17420:e*/rb_realsmith_WsFrtqU8gU)) return -1;
/*aft_stmt:17420*/
    /*bef_stmt:17443*/
if (!Tag7_realsmith_WsFrtqU8gU(/*int:17524:17524:17443:e*/cvt_realsmith_WsFrtqU8gU)) return -1;
/*aft_stmt:17443*/
    /*bef_stmt:17463*/
if (Tag8_realsmith_WsFrtqU8gU(/*int:17524:17524:17463:e*/interlace_realsmith_WsFrtqU8gU)) return -1;
/*aft_stmt:17463*/
    /*bef_stmt:17486*/
if (!Tag9_realsmith_WsFrtqU8gU(/*int:17524:17524:17486:e*/margins_realsmith_WsFrtqU8gU)) return -1;
/*aft_stmt:17486*/
    /*bef_stmt:17514*/
if (Tag10_realsmith_WsFrtqU8gU(/*int:17524:17524:17514:e*/force_realsmith_WsFrtqU8gU) != 0) return -1;
/*aft_stmt:17514*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_0Bsokr0sdC(x) (x)
#define Tag2_realsmith_0Bsokr0sdC(x) (x)
#define Tag3_realsmith_0Bsokr0sdC(x) (x)
#define Tag4_realsmith_0Bsokr0sdC(x) (x)
#define Tag5_realsmith_0Bsokr0sdC(x) (x)
#define Tag6_realsmith_0Bsokr0sdC(x) (x)
#define Tag7_realsmith_0Bsokr0sdC(x) (x)
#include "stdlib.h"
int realsmith_0Bsokr0sdC(int unit_realsmith_0Bsokr0sdC, int spu_port_realsmith_0Bsokr0sdC, int num_pports_realsmith_0Bsokr0sdC) {
    int ENODEV_realsmith_0Bsokr0sdC = -1;
    int ret_realsmith_0Bsokr0sdC;
    /*bef_stmt:17260*/
/*bef_stmt:17260*/
/*bef_stmt:17260*/
/*bef_stmt:17260*/
if (/*TAG1:STA*/((num_pports_realsmith_0Bsokr0sdC) + (g_LEKDNV) - 41)/*TAG1:END:num_pports_realsmith_0Bsokr0sdC*/ <= 0 || (/*TAG2:STA*/((int)(realsmith_proxy_y1A9LR0bCZ((int)(spu_port_realsmith_0Bsokr0sdC)+(23), (int)(spu_port_realsmith_0Bsokr0sdC)+(-55), (int)(spu_port_realsmith_0Bsokr0sdC)+(3))+(int)(spu_port_realsmith_0Bsokr0sdC)-(72))+spu_port_realsmith_0Bsokr0sdC)/*TAG2:END:spu_port_realsmith_0Bsokr0sdC*/ > 0 && /*TAG3:STA*/((spu_port_realsmith_0Bsokr0sdC) + (g_HO6910[5]) - -81)/*TAG3:END:spu_port_realsmith_0Bsokr0sdC*/ > Tag4_realsmith_0Bsokr0sdC(/*int:17275:17275:17260:e*/num_pports_realsmith_0Bsokr0sdC))) {
        /*bef_stmt:17235*/
ret_realsmith_0Bsokr0sdC = /*TAG5:STA*/((ENODEV_realsmith_0Bsokr0sdC) + (g_QM9VDC[0]) - -95)/*TAG5:END:ENODEV_realsmith_0Bsokr0sdC*/;
g_QM9VDC[0] = -95 + (ENODEV_realsmith_0Bsokr0sdC - (-1));
/*aft_stmt:17235*/
    } else {
        /*bef_stmt:17253*/
ret_realsmith_0Bsokr0sdC = Tag6_realsmith_0Bsokr0sdC(/*int:17275:17275:17253:e*/spu_port_realsmith_0Bsokr0sdC);
/*aft_stmt:17253*/
    }
g_LEKDNV = 41 + (num_pports_realsmith_0Bsokr0sdC - (10));
g_HO6910[5] = -81 + (spu_port_realsmith_0Bsokr0sdC - (63));
/*aft_stmt:17260*/
/*aft_stmt:17260*/
/*aft_stmt:17260*/
/*aft_stmt:17260*/
    /*bef_stmt:17273*/
return Tag7_realsmith_0Bsokr0sdC(/*int:17275:17275:17273:e*/ret_realsmith_0Bsokr0sdC);
/*aft_stmt:17273*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_Po4mZem28h(x) (x)
#define Tag2_realsmith_proxy_Po4mZem28h(x) (x)
#define Tag3_realsmith_proxy_Po4mZem28h(x) (x)
#define Tag4_realsmith_proxy_Po4mZem28h(x) (x)
#define Tag5_realsmith_proxy_Po4mZem28h(x) (x)
#define Tag6_realsmith_proxy_Po4mZem28h(x) (x)
#define Tag7_realsmith_proxy_Po4mZem28h(x) (x)
#define Tag8_realsmith_proxy_Po4mZem28h(x) (x)
#define Tag9_realsmith_proxy_Po4mZem28h(x) (x)
#define Tag10_realsmith_proxy_Po4mZem28h(x) (x)
#include "stdlib.h"
int realsmith_yCMb6TSoSy(unsigned int byte_realsmith_yCMb6TSoSy, unsigned int writesize_realsmith_yCMb6TSoSy, unsigned char *wbuffer_realsmith_yCMb6TSoSy) {
    int bit_realsmith_yCMb6TSoSy;
    /*bef_stmt:17324*/
/*bef_stmt:17324*/
while (Tag1_realsmith_proxy_Po4mZem28h(/*unsigned int:17337:17337:17324:e*/byte_realsmith_yCMb6TSoSy) < Tag2_realsmith_proxy_Po4mZem28h(/*unsigned int:17337:17337:17324:e*/writesize_realsmith_yCMb6TSoSy)) {
        /*bef_stmt:17306*/
for (bit_realsmith_yCMb6TSoSy = 7; Tag3_realsmith_proxy_Po4mZem28h(/*int:17337:17337:17306:e*/bit_realsmith_yCMb6TSoSy) >= 0; bit_realsmith_yCMb6TSoSy--) {
            /*bef_stmt:17299*/
/*bef_stmt:17299*/
if (wbuffer_realsmith_yCMb6TSoSy[Tag4_realsmith_proxy_Po4mZem28h(/*unsigned int:17337:17337:17299:e*/byte_realsmith_yCMb6TSoSy)] & (1 << Tag5_realsmith_proxy_Po4mZem28h(/*int:17337:17337:17299:e*/bit_realsmith_yCMb6TSoSy))) {
                /*bef_stmt:17283*/
/*bef_stmt:17283*/
wbuffer_realsmith_yCMb6TSoSy[Tag6_realsmith_proxy_Po4mZem28h(/*unsigned int:17337:17337:17283:e*/byte_realsmith_yCMb6TSoSy)] &= ~(1 << Tag7_realsmith_proxy_Po4mZem28h(/*int:17337:17337:17283:e*/bit_realsmith_yCMb6TSoSy));
/*aft_stmt:17283*/
/*aft_stmt:17283*/
                return 0;
            }
/*aft_stmt:17299*/
/*aft_stmt:17299*/
        }
/*aft_stmt:17306*/
        byte_realsmith_yCMb6TSoSy++;
    }
/*aft_stmt:17324*/
/*aft_stmt:17324*/
    return -1;
}
int realsmith_proxy_Po4mZem28h(unsigned int p_0_SVgZjj1mAr, unsigned int p_1_9yU67RZ1K4, unsigned char p_2_WTOU9QcIMD) {
/*bef_stmt:17491*/
/*bef_stmt:17491*/
int proxy_ret_lMrT6VYPPa = realsmith_yCMb6TSoSy(Tag8_realsmith_proxy_Po4mZem28h(/*unsigned int:17503:17503:17491:e*/p_0_SVgZjj1mAr), Tag9_realsmith_proxy_Po4mZem28h(/*unsigned int:17503:17503:17491:e*/p_1_9yU67RZ1K4), &(p_2_WTOU9QcIMD));
/*aft_stmt:17491*/
/*aft_stmt:17491*/
/*bef_stmt:17501*/
return Tag10_realsmith_proxy_Po4mZem28h(/*int:17503:17503:17501:e*/proxy_ret_lMrT6VYPPa);
/*aft_stmt:17501*/
}




#include "stdlib.h"
int realsmith_9S6SIq3jgT(int emu_sflist_realsmith_9S6SIq3jgT, int *port_ctrls_realsmith_9S6SIq3jgT, int *notep_realsmith_9S6SIq3jgT, int vel_realsmith_9S6SIq3jgT, int midi_program_realsmith_9S6SIq3jgT, int port_bank_realsmith_9S6SIq3jgT) {
    int preset_realsmith_9S6SIq3jgT, bank_realsmith_9S6SIq3jgT, def_preset_realsmith_9S6SIq3jgT, def_bank_realsmith_9S6SIq3jgT;
    bank_realsmith_9S6SIq3jgT = port_bank_realsmith_9S6SIq3jgT;
    preset_realsmith_9S6SIq3jgT = midi_program_realsmith_9S6SIq3jgT;
    if (((bank_realsmith_9S6SIq3jgT) >= 128)) {
        def_preset_realsmith_9S6SIq3jgT = port_ctrls_realsmith_9S6SIq3jgT[1];
        def_bank_realsmith_9S6SIq3jgT = bank_realsmith_9S6SIq3jgT;
    } else {
        def_preset_realsmith_9S6SIq3jgT = preset_realsmith_9S6SIq3jgT;
        def_bank_realsmith_9S6SIq3jgT = port_ctrls_realsmith_9S6SIq3jgT[0];
    }
    return (emu_sflist_realsmith_9S6SIq3jgT + *notep_realsmith_9S6SIq3jgT + vel_realsmith_9S6SIq3jgT + preset_realsmith_9S6SIq3jgT + bank_realsmith_9S6SIq3jgT + def_preset_realsmith_9S6SIq3jgT + def_bank_realsmith_9S6SIq3jgT) % 16;
}
int realsmith_proxy_NqalBPfsah(int p_0_fb6RKFnaIj, int p_1_akxI91LzuM, int p_2_bkWeclLsan, int p_3_SVjiyghkBR, int p_4_WPYEGztzEr, int p_5_NgEeyNiDac) {
int proxy_ptlnRkGHkn[12] = { 35, 46, p_1_akxI91LzuM, 14, 8, p_1_akxI91LzuM, 82, 14, 85, 51, p_1_akxI91LzuM, p_1_akxI91LzuM };
int proxy_ret_HR0KjBndQW = realsmith_9S6SIq3jgT(p_0_fb6RKFnaIj, proxy_ptlnRkGHkn, &(p_2_bkWeclLsan), p_3_SVjiyghkBR, p_4_WPYEGztzEr, p_5_NgEeyNiDac);
return proxy_ret_HR0KjBndQW;
}


#include "stdlib.h"
int realsmith_O3aiJoMvhQ(int refs_realsmith_O3aiJoMvhQ, int page_count_realsmith_O3aiJoMvhQ, int sparity_realsmith_O3aiJoMvhQ, int *pagev_realsmith_O3aiJoMvhQ) {
    if (--refs_realsmith_O3aiJoMvhQ == 0) {
        if (sparity_realsmith_O3aiJoMvhQ) {
        }
        for (int i_realsmith_O3aiJoMvhQ = 0; i_realsmith_O3aiJoMvhQ < page_count_realsmith_O3aiJoMvhQ; i_realsmith_O3aiJoMvhQ++) {
        }
        return 1;
    }
    return 0;
}
int realsmith_proxy_xPkulhdn5C(int p_0_Fhr6ujgaE3, int p_1_hmBkzvzqKP, int p_2_t7ClECmb3N, int p_3_9jGkDBighL) {
int proxy_ret_SW5ctBol3H = realsmith_O3aiJoMvhQ(p_0_Fhr6ujgaE3, p_1_hmBkzvzqKP, p_2_t7ClECmb3N, &(p_3_9jGkDBighL));
return proxy_ret_SW5ctBol3H;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_nhanzSAdIP(x) (x)
#include "stdint.h"
int realsmith_nhanzSAdIP(int val_realsmith_nhanzSAdIP) {
    /*bef_stmt:2001*/
return ((Tag1_realsmith_nhanzSAdIP(/*int:2003:2003:2001:e*/val_realsmith_nhanzSAdIP)) << 2) & 0xFFFFFFFF;
/*aft_stmt:2001*/
}



#include "stdlib.h"
int realsmith_5E6JUgocGp(int *min_realsmith_5E6JUgocGp, int *max_realsmith_5E6JUgocGp, int *count_realsmith_5E6JUgocGp) {
    *min_realsmith_5E6JUgocGp = 0;
    *max_realsmith_5E6JUgocGp = 15;
    *count_realsmith_5E6JUgocGp = 2;
    return 0;
}
int realsmith_proxy_xI8ClIqtm3(int p_0_4tlfGrfhP5, int p_1_X4wvFE2YHm, int p_2_w5aLFbJF5I) {
int proxy_5uG7UXe888[17] = { p_0_4tlfGrfhP5, p_0_4tlfGrfhP5, 19, 76, p_0_4tlfGrfhP5, p_0_4tlfGrfhP5, 53, p_0_4tlfGrfhP5, p_0_4tlfGrfhP5, p_0_4tlfGrfhP5, p_0_4tlfGrfhP5, p_0_4tlfGrfhP5, p_0_4tlfGrfhP5, p_0_4tlfGrfhP5, 91, p_0_4tlfGrfhP5, 7 };
int proxy_ARdZDljE3U[15] = { p_1_X4wvFE2YHm, 37, p_1_X4wvFE2YHm, p_1_X4wvFE2YHm, p_1_X4wvFE2YHm, p_1_X4wvFE2YHm, 45, p_1_X4wvFE2YHm, 16, p_1_X4wvFE2YHm, p_1_X4wvFE2YHm, p_1_X4wvFE2YHm, p_1_X4wvFE2YHm, p_1_X4wvFE2YHm, 98 };
int proxy_ret_79wT94hkS2 = realsmith_5E6JUgocGp(proxy_5uG7UXe888, proxy_ARdZDljE3U, &(p_2_w5aLFbJF5I));
return proxy_ret_79wT94hkS2;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_rwqAMvFgEW(x) (x)
#define Tag2_realsmith_rwqAMvFgEW(x) (x)
#define Tag3_realsmith_rwqAMvFgEW(x) (x)
#define Tag4_realsmith_rwqAMvFgEW(x) (x)
#define Tag5_realsmith_rwqAMvFgEW(x) (x)
#define Tag6_realsmith_rwqAMvFgEW(x) (x)
#include "stdlib.h"
int realsmith_rwqAMvFgEW(int addr_realsmith_rwqAMvFgEW, int data_realsmith_rwqAMvFgEW) {
    unsigned char RS5C313_CNTBIT_AD_realsmith_rwqAMvFgEW = 0x01;
    unsigned char RS5C313_CNTBIT_DT_realsmith_rwqAMvFgEW = 0x02;
    data_realsmith_rwqAMvFgEW &= 0x0f;
    /*bef_stmt:17206*/
/*bef_stmt:17206*/
unsigned char write_data1_realsmith_rwqAMvFgEW = Tag1_realsmith_rwqAMvFgEW(/*int:17290:17290:17206:e*/addr_realsmith_rwqAMvFgEW) | /*TAG2:STA*/((unsigned char)(realsmith_kvZjnwbsuc((int)(RS5C313_CNTBIT_AD_realsmith_rwqAMvFgEW)+(62), (int)(RS5C313_CNTBIT_AD_realsmith_rwqAMvFgEW)+(73), (int)(RS5C313_CNTBIT_AD_realsmith_rwqAMvFgEW)+(14), (int)(RS5C313_CNTBIT_AD_realsmith_rwqAMvFgEW)+(85))+(int)(RS5C313_CNTBIT_AD_realsmith_rwqAMvFgEW)-(253))+RS5C313_CNTBIT_AD_realsmith_rwqAMvFgEW)/*TAG2:END:RS5C313_CNTBIT_AD_realsmith_rwqAMvFgEW*/;
/*aft_stmt:17206*/
/*aft_stmt:17206*/
    /*bef_stmt:17249*/
/*bef_stmt:17249*/
unsigned char write_data2_realsmith_rwqAMvFgEW = /*TAG3:STA*/((int)(realsmith_6WYINlqSpN((int)(data_realsmith_rwqAMvFgEW)+(3), (int)(data_realsmith_rwqAMvFgEW)+(29), (int)(data_realsmith_rwqAMvFgEW)+(-9), (int)(data_realsmith_rwqAMvFgEW)+(81), (int)(data_realsmith_rwqAMvFgEW)+(83), (int)(data_realsmith_rwqAMvFgEW)+(8), (long)(data_realsmith_rwqAMvFgEW)+(9), (long)(data_realsmith_rwqAMvFgEW)+(55), (int)(data_realsmith_rwqAMvFgEW)+(27), (int)(data_realsmith_rwqAMvFgEW)+(34), (int)(data_realsmith_rwqAMvFgEW)+(58))+(int)(data_realsmith_rwqAMvFgEW)-(14))+data_realsmith_rwqAMvFgEW)/*TAG3:END:data_realsmith_rwqAMvFgEW*/ | /*TAG4:STA*/((unsigned char)(realsmith_2dEldBdJ7W((int)(RS5C313_CNTBIT_DT_realsmith_rwqAMvFgEW)+(1), (int)(RS5C313_CNTBIT_DT_realsmith_rwqAMvFgEW)+(28))+(int)(RS5C313_CNTBIT_DT_realsmith_rwqAMvFgEW)-(2))+RS5C313_CNTBIT_DT_realsmith_rwqAMvFgEW)/*TAG4:END:RS5C313_CNTBIT_DT_realsmith_rwqAMvFgEW*/;
/*aft_stmt:17249*/
/*aft_stmt:17249*/
    /*bef_stmt:17288*/
/*bef_stmt:17288*/
return (Tag5_realsmith_rwqAMvFgEW(/*unsigned char:17290:17290:17288:e*/write_data1_realsmith_rwqAMvFgEW) << 8) | /*TAG6:STA*/((write_data2_realsmith_rwqAMvFgEW) + (g_9Y8MHE) - 3)/*TAG6:END:write_data2_realsmith_rwqAMvFgEW*/;
g_MO1T8D = -80 + (write_data1_realsmith_rwqAMvFgEW - (11));
g_9Y8MHE = 3 + (write_data2_realsmith_rwqAMvFgEW - (14));
/*aft_stmt:17288*/
/*aft_stmt:17288*/
}



#include "stdlib.h"
int realsmith_uRA408NVKB(int npages_realsmith_uRA408NVKB, int *sizes_realsmith_uRA408NVKB, int *addrs_realsmith_uRA408NVKB, int *dma_addrs_realsmith_uRA408NVKB) {
    for (int i_realsmith_uRA408NVKB = 0; i_realsmith_uRA408NVKB < npages_realsmith_uRA408NVKB; ++i_realsmith_uRA408NVKB) {
    }
    return 0;
}
int realsmith_proxy_coAWkug4mO(int p_0_q7kdpo96vl, int p_1_TIZTzrfgR5, int p_2_1c72aMcjnX, int p_3_JGHbLxjkF5) {
int proxy_xC9BIEziLo[16] = { p_1_TIZTzrfgR5, p_1_TIZTzrfgR5, 84, p_1_TIZTzrfgR5, 13, p_1_TIZTzrfgR5, 89, 78, 13, p_1_TIZTzrfgR5, p_1_TIZTzrfgR5, 75, p_1_TIZTzrfgR5, 38, p_1_TIZTzrfgR5, p_1_TIZTzrfgR5 };
int proxy_DdnNS0Ak4O[12] = { p_3_JGHbLxjkF5, p_3_JGHbLxjkF5, 38, p_3_JGHbLxjkF5, 69, 40, p_3_JGHbLxjkF5, 81, 49, 50, 92, p_3_JGHbLxjkF5 };
int proxy_ret_itPwIw4mVp = realsmith_uRA408NVKB(p_0_q7kdpo96vl, proxy_xC9BIEziLo, &(p_2_1c72aMcjnX), proxy_DdnNS0Ak4O);
return proxy_ret_itPwIw4mVp;
}


#include "stdlib.h"
int realsmith_PjjTcZrfB2(int io_qmask_realsmith_PjjTcZrfB2, int instr_pending_realsmith_PjjTcZrfB2[], int max_queues_realsmith_PjjTcZrfB2) {
    int i_realsmith_PjjTcZrfB2, retry_realsmith_PjjTcZrfB2 = 1000, pending_realsmith_PjjTcZrfB2, instr_cnt_realsmith_PjjTcZrfB2 = 0;
    do {
        instr_cnt_realsmith_PjjTcZrfB2 = 0;
        for (i_realsmith_PjjTcZrfB2 = 0; i_realsmith_PjjTcZrfB2 < max_queues_realsmith_PjjTcZrfB2; i_realsmith_PjjTcZrfB2++) {
            if (!(io_qmask_realsmith_PjjTcZrfB2 & (1ULL << i_realsmith_PjjTcZrfB2)))
                continue;
            pending_realsmith_PjjTcZrfB2 = instr_pending_realsmith_PjjTcZrfB2[i_realsmith_PjjTcZrfB2];
            if (pending_realsmith_PjjTcZrfB2)
                pending_realsmith_PjjTcZrfB2 = pending_realsmith_PjjTcZrfB2;
            instr_cnt_realsmith_PjjTcZrfB2 += pending_realsmith_PjjTcZrfB2;
        }
        if (instr_cnt_realsmith_PjjTcZrfB2 == 0)
            break;
        for (volatile int j_realsmith_PjjTcZrfB2 = 0; j_realsmith_PjjTcZrfB2 < 1000000; j_realsmith_PjjTcZrfB2++);
    } while (retry_realsmith_PjjTcZrfB2-- && instr_cnt_realsmith_PjjTcZrfB2);
    return instr_cnt_realsmith_PjjTcZrfB2;
}
int realsmith_proxy_IQ8y8HxA2G(int p_0_Jyspz96FcX, int p_1_ZeBevRsEXD, int p_2_vqER9kS52n) {
int proxy_ret_OMM6Ku1gYM = realsmith_PjjTcZrfB2(p_0_Jyspz96FcX, &(p_1_ZeBevRsEXD), p_2_vqER9kS52n);
return proxy_ret_OMM6Ku1gYM;
}


#include "stdlib.h"
typedef struct {
    int display_enabled_realsmith_hBzawluCdC;
    int lock_realsmith_hBzawluCdC;
    int audio_playing_lock_realsmith_hBzawluCdC;
} HDMI_bGYVEv;
int realsmith_hBzawluCdC(int display_enabled_realsmith_hBzawluCdC, int *lock_realsmith_hBzawluCdC, int *audio_playing_lock_realsmith_hBzawluCdC) {
    unsigned long flags_realsmith_hBzawluCdC;
    HDMI_bGYVEv hdmi_realsmith_hBzawluCdC;
    hdmi_realsmith_hBzawluCdC.display_enabled_realsmith_hBzawluCdC = display_enabled_realsmith_hBzawluCdC;
    *lock_realsmith_hBzawluCdC = 1;
    flags_realsmith_hBzawluCdC = 0;
    hdmi_realsmith_hBzawluCdC.display_enabled_realsmith_hBzawluCdC = 0;
    flags_realsmith_hBzawluCdC = 0;
    *lock_realsmith_hBzawluCdC = 0;
    return hdmi_realsmith_hBzawluCdC.display_enabled_realsmith_hBzawluCdC;
}
int realsmith_proxy_ANx3XuzMEY(int p_0_DBDdlhDqaW, int p_1_JxTNdZXwr6, int p_2_rLD97vDQ5m) {
int proxy_u3eFT2jzlr[11] = { p_1_JxTNdZXwr6, 87, p_1_JxTNdZXwr6, 57, p_1_JxTNdZXwr6, 88, p_1_JxTNdZXwr6, 8, 96, p_1_JxTNdZXwr6, 47 };
int proxy_cRIQDeeIFv[14] = { p_2_rLD97vDQ5m, p_2_rLD97vDQ5m, 67, p_2_rLD97vDQ5m, p_2_rLD97vDQ5m, p_2_rLD97vDQ5m, p_2_rLD97vDQ5m, 85, p_2_rLD97vDQ5m, p_2_rLD97vDQ5m, p_2_rLD97vDQ5m, 3, 94, 23 };
int proxy_ret_AAUHR1B4iS = realsmith_hBzawluCdC(p_0_DBDdlhDqaW, proxy_u3eFT2jzlr, proxy_cRIQDeeIFv);
return proxy_ret_AAUHR1B4iS;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_jw4f5ZZCQY(x) (x)
#define Tag2_realsmith_jw4f5ZZCQY(x) (x)
#define Tag3_realsmith_jw4f5ZZCQY(x) (x)
#define Tag4_realsmith_jw4f5ZZCQY(x) (x)
#include "stdlib.h"
int realsmith_jw4f5ZZCQY(int hw_init_result_realsmith_jw4f5ZZCQY, int hw_version_realsmith_jw4f5ZZCQY, int dev_info_result_realsmith_jw4f5ZZCQY, int iclk_realsmith_jw4f5ZZCQY) {
    /*bef_stmt:17161*/
int err_realsmith_jw4f5ZZCQY = /*TAG1:STA*/((int)(realsmith_proxy_18CodtEsaq((unsigned char)(hw_init_result_realsmith_jw4f5ZZCQY)+(-34), (unsigned int)(hw_init_result_realsmith_jw4f5ZZCQY)+(2))+(int)(hw_init_result_realsmith_jw4f5ZZCQY)-(1))+hw_init_result_realsmith_jw4f5ZZCQY)/*TAG1:END:hw_init_result_realsmith_jw4f5ZZCQY*/;
/*aft_stmt:17161*/
    /*bef_stmt:17183*/
if (/*TAG2:STA*/((int)(realsmith_hQeBSOk5Bp((int)(err_realsmith_jw4f5ZZCQY)+(50))+(int)(err_realsmith_jw4f5ZZCQY)-(54))+err_realsmith_jw4f5ZZCQY)/*TAG2:END:err_realsmith_jw4f5ZZCQY*/) {
        /*bef_stmt:17178*/
return /*TAG3:STA*/((int)(realsmith_proxy_PbfoE1u6oi((int)(err_realsmith_jw4f5ZZCQY)+(38), (int)(err_realsmith_jw4f5ZZCQY)+(67), (unsigned int)(err_realsmith_jw4f5ZZCQY)+(83), (unsigned int)(err_realsmith_jw4f5ZZCQY)+(-12), (int)(err_realsmith_jw4f5ZZCQY)+(22))+(int)(err_realsmith_jw4f5ZZCQY)-(-69))+err_realsmith_jw4f5ZZCQY)/*TAG3:END:err_realsmith_jw4f5ZZCQY*/;
/*aft_stmt:17178*/
    }
/*aft_stmt:17183*/
    hw_version_realsmith_jw4f5ZZCQY = 0x12345678;
    /*bef_stmt:17210*/
dev_info_result_realsmith_jw4f5ZZCQY = Tag4_realsmith_jw4f5ZZCQY(/*int:17232:17232:17210:e*/hw_version_realsmith_jw4f5ZZCQY);
/*aft_stmt:17210*/
    iclk_realsmith_jw4f5ZZCQY = 0;
    return 0;
}



#include "stdint.h"
#include "string.h"
int realsmith_AIk7jfj4KT(unsigned int regmap_realsmith_AIk7jfj4KT, const unsigned char *buf_realsmith_AIk7jfj4KT, int len_realsmith_AIk7jfj4KT) {
    unsigned int data_realsmith_AIk7jfj4KT;
    int i_realsmith_AIk7jfj4KT = 0;
    while (i_realsmith_AIk7jfj4KT < len_realsmith_AIk7jfj4KT) {
        if (len_realsmith_AIk7jfj4KT - i_realsmith_AIk7jfj4KT >= 4) {
            data_realsmith_AIk7jfj4KT = *(unsigned int *)buf_realsmith_AIk7jfj4KT;
        } else {
            (memcpy(&data_realsmith_AIk7jfj4KT, buf_realsmith_AIk7jfj4KT, len_realsmith_AIk7jfj4KT - i_realsmith_AIk7jfj4KT));
        }
        regmap_realsmith_AIk7jfj4KT += data_realsmith_AIk7jfj4KT;
        buf_realsmith_AIk7jfj4KT += 4;
        i_realsmith_AIk7jfj4KT += 4;
    }
    return i_realsmith_AIk7jfj4KT;
}
int realsmith_proxy_Foz4sBFnZr(unsigned int p_0_xrt8fPxAGT, unsigned char p_1_EkGemp0d8V, int p_2_27JlnFxxF9) {
unsigned char proxy_FooiZyA6pb[15] = { 57, p_1_EkGemp0d8V, 80, p_1_EkGemp0d8V, p_1_EkGemp0d8V, 45, 8, p_1_EkGemp0d8V, p_1_EkGemp0d8V, p_1_EkGemp0d8V, 86, 94, 28, 43, 38 };
int proxy_ret_kzeU6Zbzup = realsmith_AIk7jfj4KT(p_0_xrt8fPxAGT, proxy_FooiZyA6pb, p_2_27JlnFxxF9);
return proxy_ret_kzeU6Zbzup;
}


#include "stdlib.h"
int realsmith_vVPaubNbuT(int force_realsmith_vVPaubNbuT, const char *page_realsmith_vVPaubNbuT, long unsigned int len_realsmith_vVPaubNbuT) {
    long unsigned int c_len_realsmith_vVPaubNbuT;
    int result_realsmith_vVPaubNbuT;
    c_len_realsmith_vVPaubNbuT = 0;
    while (c_len_realsmith_vVPaubNbuT < len_realsmith_vVPaubNbuT && page_realsmith_vVPaubNbuT[c_len_realsmith_vVPaubNbuT] != '\n') {
        c_len_realsmith_vVPaubNbuT++;
    }
    if (c_len_realsmith_vVPaubNbuT >= len_realsmith_vVPaubNbuT) {
        return -22;
    }
    result_realsmith_vVPaubNbuT = (1);
    if (result_realsmith_vVPaubNbuT < 0) {
        return -22;
    }
    return len_realsmith_vVPaubNbuT;
}
int realsmith_proxy_kYKI8RakCD(int p_0_zOxzMzlaJC, char p_1_Jg8ighbKBx, int p_2_fLqbLJDRVX) {
char proxy_vXtGUWCg7t[14] = { p_1_Jg8ighbKBx, p_1_Jg8ighbKBx, 86, p_1_Jg8ighbKBx, 2, 39, 44, 63, p_1_Jg8ighbKBx, p_1_Jg8ighbKBx, p_1_Jg8ighbKBx, 6, 88, p_1_Jg8ighbKBx };
int proxy_ret_8VHr1Qobhy = realsmith_vVPaubNbuT(p_0_zOxzMzlaJC, proxy_vXtGUWCg7t, p_2_fLqbLJDRVX);
return proxy_ret_8VHr1Qobhy;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_sgnGG475AM(x) (x)
#define Tag2_realsmith_sgnGG475AM(x) (x)
#define Tag3_realsmith_sgnGG475AM(x) (x)
#define Tag4_realsmith_sgnGG475AM(x) (x)
#define Tag5_realsmith_sgnGG475AM(x) (x)
#define Tag6_realsmith_sgnGG475AM(x) (x)
#define Tag7_realsmith_sgnGG475AM(x) (x)
#define Tag8_realsmith_sgnGG475AM(x) (x)
#include "stdlib.h"
#include "stdint.h"
struct rds_sock_lBnuLa {
    int rs_snd_bytes_realsmith_sgnGG475AM;
};
struct rds_message_lBnuLa {
    struct {
        int h_len_realsmith_sgnGG475AM;
    } i_hdr_realsmith_sgnGG475AM;
};
int realsmith_sgnGG475AM(int rs_snd_bytes_realsmith_sgnGG475AM, int rm_len_realsmith_sgnGG475AM, int queued_realsmith_sgnGG475AM) {
    int snd_buf_size_realsmith_sgnGG475AM = 1024;
    /*bef_stmt:17654*/
/*bef_stmt:17654*/
if (Tag1_realsmith_sgnGG475AM(/*int:17765:17765:17654:e*/queued_realsmith_sgnGG475AM))
        return Tag2_realsmith_sgnGG475AM(/*int:17765:17765:17654:e*/queued_realsmith_sgnGG475AM);
/*aft_stmt:17654*/
/*aft_stmt:17654*/
    /*bef_stmt:17752*/
/*bef_stmt:17752*/
if (Tag3_realsmith_sgnGG475AM(/*int:17765:17765:17752:e*/rs_snd_bytes_realsmith_sgnGG475AM) < Tag4_realsmith_sgnGG475AM(/*int:17765:17765:17752:e*/snd_buf_size_realsmith_sgnGG475AM)) {
        /*bef_stmt:17687*/
rs_snd_bytes_realsmith_sgnGG475AM += Tag5_realsmith_sgnGG475AM(/*int:17765:17765:17687:e*/rm_len_realsmith_sgnGG475AM);
/*aft_stmt:17687*/
        /*bef_stmt:17731*/
/*bef_stmt:17731*/
if (Tag6_realsmith_sgnGG475AM(/*int:17765:17765:17731:e*/rs_snd_bytes_realsmith_sgnGG475AM) >= Tag7_realsmith_sgnGG475AM(/*int:17765:17765:17731:e*/snd_buf_size_realsmith_sgnGG475AM) / 2)
            queued_realsmith_sgnGG475AM = 1;
/*aft_stmt:17731*/
/*aft_stmt:17731*/
        queued_realsmith_sgnGG475AM = 1;
    }
/*aft_stmt:17752*/
/*aft_stmt:17752*/
    /*bef_stmt:17763*/
return Tag8_realsmith_sgnGG475AM(/*int:17765:17765:17763:e*/queued_realsmith_sgnGG475AM);
/*aft_stmt:17763*/
}



#include "stdlib.h"
struct sta32x_priv_RpcQ25 {
    int *regmap_realsmith_o7lfy6ky7W;
    int supplies_realsmith_o7lfy6ky7W[2]; // Assume a fixed size for simplification
    int *gpiod_nreset_realsmith_o7lfy6ky7W;
    int *xti_clk_realsmith_o7lfy6ky7W;
    int pdata_realsmith_o7lfy6ky7W;
    int coeff_lock_realsmith_o7lfy6ky7W;
};
int realsmith_o7lfy6ky7W(int *i2c_dev_realsmith_o7lfy6ky7W, int *id_realsmith_o7lfy6ky7W) {
    struct sta32x_priv_RpcQ25 *sta32x_realsmith_o7lfy6ky7W;
    int ret_realsmith_o7lfy6ky7W, i_realsmith_o7lfy6ky7W;
    sta32x_realsmith_o7lfy6ky7W = (struct sta32x_priv_RpcQ25 *)(malloc(sizeof(struct sta32x_priv_RpcQ25)));
    if (!sta32x_realsmith_o7lfy6ky7W)
        return -1;
    sta32x_realsmith_o7lfy6ky7W->pdata_realsmith_o7lfy6ky7W = *i2c_dev_realsmith_o7lfy6ky7W;
    if (*id_realsmith_o7lfy6ky7W) {
        ret_realsmith_o7lfy6ky7W = 0;
        if (ret_realsmith_o7lfy6ky7W < 0)
            return ret_realsmith_o7lfy6ky7W;
    }
    sta32x_realsmith_o7lfy6ky7W->xti_clk_realsmith_o7lfy6ky7W = (int *)(malloc(sizeof(int)));
    if (!sta32x_realsmith_o7lfy6ky7W->xti_clk_realsmith_o7lfy6ky7W) {
        ret_realsmith_o7lfy6ky7W = -1;
        if (ret_realsmith_o7lfy6ky7W == -2)
            return ret_realsmith_o7lfy6ky7W;
        sta32x_realsmith_o7lfy6ky7W->xti_clk_realsmith_o7lfy6ky7W = ((void*)0);
    }
    sta32x_realsmith_o7lfy6ky7W->gpiod_nreset_realsmith_o7lfy6ky7W = (int *)(malloc(sizeof(int)));
    if (!sta32x_realsmith_o7lfy6ky7W->gpiod_nreset_realsmith_o7lfy6ky7W)
        return -1;
    for (i_realsmith_o7lfy6ky7W = 0; i_realsmith_o7lfy6ky7W < 2; i_realsmith_o7lfy6ky7W++)
        sta32x_realsmith_o7lfy6ky7W->supplies_realsmith_o7lfy6ky7W[i_realsmith_o7lfy6ky7W] = i_realsmith_o7lfy6ky7W;
    ret_realsmith_o7lfy6ky7W = 0;
    if (ret_realsmith_o7lfy6ky7W != 0) {
        return ret_realsmith_o7lfy6ky7W;
    }
    sta32x_realsmith_o7lfy6ky7W->regmap_realsmith_o7lfy6ky7W = (int *)(malloc(sizeof(int)));
    if (!sta32x_realsmith_o7lfy6ky7W->regmap_realsmith_o7lfy6ky7W) {
        ret_realsmith_o7lfy6ky7W = -1;
        return ret_realsmith_o7lfy6ky7W;
    }
    ret_realsmith_o7lfy6ky7W = 0;
    if (ret_realsmith_o7lfy6ky7W < 0)
        return ret_realsmith_o7lfy6ky7W;
    return ret_realsmith_o7lfy6ky7W;
}
int realsmith_proxy_fwn5Cug1vE(int p_0_V76NZF8LC3, int p_1_nNcUmgnzZJ) {
int proxy_0FVtkHW0j1[10] = { p_0_V76NZF8LC3, p_0_V76NZF8LC3, p_0_V76NZF8LC3, 18, p_0_V76NZF8LC3, 29, 12, p_0_V76NZF8LC3, 97, 51 };
int proxy_MtH2aKTgjD[18] = { 10, 10, 7, p_1_nNcUmgnzZJ, 38, p_1_nNcUmgnzZJ, 10, 72, 72, p_1_nNcUmgnzZJ, p_1_nNcUmgnzZJ, p_1_nNcUmgnzZJ, 39, p_1_nNcUmgnzZJ, 28, 10, 3, 94 };
int proxy_ret_n3w28Zuzar = realsmith_o7lfy6ky7W(proxy_0FVtkHW0j1, proxy_MtH2aKTgjD);
return proxy_ret_n3w28Zuzar;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_9cgAbl4jc1(x) (x)
#define Tag2_realsmith_9cgAbl4jc1(x) (x)
#define Tag3_realsmith_9cgAbl4jc1(x) (x)
#define Tag4_realsmith_9cgAbl4jc1(x) (x)
#include "stdlib.h"
int realsmith_9cgAbl4jc1(int short_preamb_realsmith_9cgAbl4jc1) {
    int MT_AUTO_RSP_CFG_realsmith_9cgAbl4jc1 = 0;
    int MT_AUTO_RSP_PREAMB_SHORT_realsmith_9cgAbl4jc1 = 1;
    /*bef_stmt:17170*/
if (Tag1_realsmith_9cgAbl4jc1(/*int:17185:17185:17170:e*/short_preamb_realsmith_9cgAbl4jc1)) {
        /*bef_stmt:17138*/
MT_AUTO_RSP_CFG_realsmith_9cgAbl4jc1 |= Tag2_realsmith_9cgAbl4jc1(/*int:17185:17185:17138:e*/MT_AUTO_RSP_PREAMB_SHORT_realsmith_9cgAbl4jc1);
/*aft_stmt:17138*/
    } else {
        /*bef_stmt:17161*/
MT_AUTO_RSP_CFG_realsmith_9cgAbl4jc1 &= ~Tag3_realsmith_9cgAbl4jc1(/*int:17185:17185:17161:e*/MT_AUTO_RSP_PREAMB_SHORT_realsmith_9cgAbl4jc1);
/*aft_stmt:17161*/
    }
/*aft_stmt:17170*/
    /*bef_stmt:17183*/
return Tag4_realsmith_9cgAbl4jc1(/*int:17185:17185:17183:e*/MT_AUTO_RSP_CFG_realsmith_9cgAbl4jc1);
/*aft_stmt:17183*/
}



#include "stdlib.h"
struct ceph_msg_lhJrPm {
    unsigned long num_data_items_realsmith_Y04zhcM33n;
    unsigned long max_data_items_realsmith_Y04zhcM33n;
    unsigned long *data_realsmith_Y04zhcM33n; // Changed to unsigned long for simplicity
};
int realsmith_Y04zhcM33n(unsigned long *data_realsmith_Y04zhcM33n, unsigned long num_data_items_realsmith_Y04zhcM33n, unsigned long max_data_items_realsmith_Y04zhcM33n) {
    if (num_data_items_realsmith_Y04zhcM33n >= max_data_items_realsmith_Y04zhcM33n) {
        return -1;
    }
    data_realsmith_Y04zhcM33n[num_data_items_realsmith_Y04zhcM33n] = 0;
    return num_data_items_realsmith_Y04zhcM33n + 1;
}
int realsmith_proxy_YUW9D13uk5(unsigned long p_0_utilz6c8mR, unsigned long p_1_vJ11dYpP08, unsigned long p_2_FiQRI1P0uD) {
unsigned long proxy_35hPK1mBDV[17] = { 3, p_0_utilz6c8mR, 60, 66, p_0_utilz6c8mR, p_0_utilz6c8mR, 56, 96, p_0_utilz6c8mR, p_0_utilz6c8mR, p_0_utilz6c8mR, 88, p_0_utilz6c8mR, 43, 83, p_0_utilz6c8mR, p_0_utilz6c8mR };
int proxy_ret_hs92UFLQpN = realsmith_Y04zhcM33n(proxy_35hPK1mBDV, p_1_vJ11dYpP08, p_2_FiQRI1P0uD);
return proxy_ret_hs92UFLQpN;
}


#include "stdlib.h"
struct wiphy_dXJnoi {
    int regulatory_flags_realsmith_hbZvOXvRfm;
    int bands_realsmith_hbZvOXvRfm[2]; // Assuming 2 bands for simplicity
};
struct regulatory_request_dXJnoi {
    int dfs_region_realsmith_hbZvOXvRfm;
};
int realsmith_hbZvOXvRfm(int regulatory_flags_realsmith_hbZvOXvRfm, int initiator_realsmith_hbZvOXvRfm) {
    struct regulatory_request_dXJnoi lr_realsmith_hbZvOXvRfm;
    lr_realsmith_hbZvOXvRfm.dfs_region_realsmith_hbZvOXvRfm = 0;
    if (initiator_realsmith_hbZvOXvRfm == 0 && (regulatory_flags_realsmith_hbZvOXvRfm & 1) && !(regulatory_flags_realsmith_hbZvOXvRfm & 2)) {
        return lr_realsmith_hbZvOXvRfm.dfs_region_realsmith_hbZvOXvRfm;
    }
    for (int band_realsmith_hbZvOXvRfm = 0; band_realsmith_hbZvOXvRfm < 2; band_realsmith_hbZvOXvRfm++) {
        lr_realsmith_hbZvOXvRfm.dfs_region_realsmith_hbZvOXvRfm += regulatory_flags_realsmith_hbZvOXvRfm + band_realsmith_hbZvOXvRfm;
    }
    lr_realsmith_hbZvOXvRfm.dfs_region_realsmith_hbZvOXvRfm += 10;
    lr_realsmith_hbZvOXvRfm.dfs_region_realsmith_hbZvOXvRfm += 5;
    return lr_realsmith_hbZvOXvRfm.dfs_region_realsmith_hbZvOXvRfm;
}

#include "stdlib.h"
struct netfront_info_1TCYNl {
    unsigned int queues_realsmith_4jc2iRADQe;
    unsigned int max_queues_realsmith_4jc2iRADQe;
};
struct xenbus_device_1TCYNl {
    const char *nodename_realsmith_4jc2iRADQe;
};
int realsmith_4jc2iRADQe(int max_queues_realsmith_4jc2iRADQe, int feature_split_evtchn_realsmith_4jc2iRADQe, const char *nodename_realsmith_4jc2iRADQe) {
    struct netfront_info_1TCYNl info_realsmith_4jc2iRADQe;
    int err_realsmith_4jc2iRADQe;
    unsigned int num_queues_realsmith_4jc2iRADQe = 1;
    info_realsmith_4jc2iRADQe.max_queues_realsmith_4jc2iRADQe = max_queues_realsmith_4jc2iRADQe;
    num_queues_realsmith_4jc2iRADQe = (max_queues_realsmith_4jc2iRADQe < 8) ? max_queues_realsmith_4jc2iRADQe : 8;
    err_realsmith_4jc2iRADQe = 0;
    if (err_realsmith_4jc2iRADQe) {
        return err_realsmith_4jc2iRADQe;
    }
    info_realsmith_4jc2iRADQe.queues_realsmith_4jc2iRADQe = num_queues_realsmith_4jc2iRADQe;
    for (unsigned int i_realsmith_4jc2iRADQe = 0; i_realsmith_4jc2iRADQe < num_queues_realsmith_4jc2iRADQe; ++i_realsmith_4jc2iRADQe) {
        err_realsmith_4jc2iRADQe = 0;
        if (err_realsmith_4jc2iRADQe) {
            return err_realsmith_4jc2iRADQe;
        }
    }
    err_realsmith_4jc2iRADQe = 0;
    if (err_realsmith_4jc2iRADQe) {
        return err_realsmith_4jc2iRADQe;
    }
    err_realsmith_4jc2iRADQe = 0;
    if (err_realsmith_4jc2iRADQe) {
        return err_realsmith_4jc2iRADQe;
    }
    for (int i_realsmith_4jc2iRADQe = 0; i_realsmith_4jc2iRADQe < 6; ++i_realsmith_4jc2iRADQe) {
        err_realsmith_4jc2iRADQe = 0;
        if (err_realsmith_4jc2iRADQe) {
            return err_realsmith_4jc2iRADQe;
        }
    }
    err_realsmith_4jc2iRADQe = 0;
    if (err_realsmith_4jc2iRADQe) {
        return err_realsmith_4jc2iRADQe;
    }
    return 0;
}
int realsmith_proxy_HBM6SESHMj(int p_0_uPk5QhAKwr, int p_1_hokZSL19Bl, char p_2_0fKEiaDSNF) {
int proxy_ret_mo3ioAeZAn = realsmith_4jc2iRADQe(p_0_uPk5QhAKwr, p_1_hokZSL19Bl, &(p_2_0fKEiaDSNF));
return proxy_ret_mo3ioAeZAn;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_empRpoSGDt(x) (x)
#define Tag2_realsmith_empRpoSGDt(x) (x)
#include "stdbool.h"
struct {
    struct {
        _Bool disabled_realsmith_empRpoSGDt;
    } states_realsmith_empRpoSGDt[2];
} imx6q_cpuidle_driver_realsmith_empRpoSGDt;
int realsmith_empRpoSGDt(int state_index_realsmith_empRpoSGDt) {
    /*bef_stmt:815*/
/*bef_stmt:815*/
if (Tag1_realsmith_empRpoSGDt(/*int:828:828:815:e*/state_index_realsmith_empRpoSGDt) >= 0 && Tag2_realsmith_empRpoSGDt(/*int:828:828:815:e*/state_index_realsmith_empRpoSGDt) < 2) {
        imx6q_cpuidle_driver_realsmith_empRpoSGDt.states_realsmith_empRpoSGDt[state_index_realsmith_empRpoSGDt].disabled_realsmith_empRpoSGDt = 1;
        return 1;
    }
/*aft_stmt:815*/
/*aft_stmt:815*/
    return -1;
}



#include "stdlib.h"
struct ocfs2_super_EDVf5g {
    int slot_num_realsmith_ENmxk5iF6H;
};
struct ocfs2_journal_EDVf5g {
    int j_state_realsmith_ENmxk5iF6H;
    void *j_bh_realsmith_ENmxk5iF6H;
    void *j_inode_realsmith_ENmxk5iF6H;
    void *j_journal_realsmith_ENmxk5iF6H;
    struct ocfs2_super_EDVf5g *j_osb_realsmith_ENmxk5iF6H;
};
struct ocfs2_dinode_EDVf5g {
    struct {
        int ij_flags_realsmith_ENmxk5iF6H;
    } journal1_realsmith_ENmxk5iF6H;
};
struct inode_EDVf5g {
    long long i_blocks_realsmith_ENmxk5iF6H;
};
struct buffer_head_EDVf5g {
    void *b_data_realsmith_ENmxk5iF6H;
};
int realsmith_ENmxk5iF6H(int osb_slot_num_realsmith_ENmxk5iF6H, int *dirty_realsmith_ENmxk5iF6H) {
    int status_realsmith_ENmxk5iF6H = -1;
    struct inode_EDVf5g *inode_realsmith_ENmxk5iF6H = ((void*)0);
    struct ocfs2_super_EDVf5g osb_realsmith_ENmxk5iF6H;
    struct ocfs2_dinode_EDVf5g di_realsmith_ENmxk5iF6H;
    struct buffer_head_EDVf5g bh_realsmith_ENmxk5iF6H;
    int inode_lock_realsmith_ENmxk5iF6H = 0;
    osb_realsmith_ENmxk5iF6H.slot_num_realsmith_ENmxk5iF6H = osb_slot_num_realsmith_ENmxk5iF6H;
    inode_realsmith_ENmxk5iF6H = (struct inode_EDVf5g *)(malloc(sizeof(struct inode_EDVf5g)));
    if (inode_realsmith_ENmxk5iF6H == ((void*)0)) {
        return -1;
    }
    inode_realsmith_ENmxk5iF6H->i_blocks_realsmith_ENmxk5iF6H = 100;
    bh_realsmith_ENmxk5iF6H.b_data_realsmith_ENmxk5iF6H = &di_realsmith_ENmxk5iF6H;
    if (inode_realsmith_ENmxk5iF6H->i_blocks_realsmith_ENmxk5iF6H < 10) {
        status_realsmith_ENmxk5iF6H = -22;
        goto done;
    }
    di_realsmith_ENmxk5iF6H.journal1_realsmith_ENmxk5iF6H.ij_flags_realsmith_ENmxk5iF6H = 1;
    *dirty_realsmith_ENmxk5iF6H = (di_realsmith_ENmxk5iF6H.journal1_realsmith_ENmxk5iF6H.ij_flags_realsmith_ENmxk5iF6H & 1);
    status_realsmith_ENmxk5iF6H = 0;
done:
    (free(inode_realsmith_ENmxk5iF6H));
    return status_realsmith_ENmxk5iF6H;
}
int realsmith_proxy_U3zj5r5wCb(int p_0_xX0n2Kw6ge, int p_1_JXnvJuQinz) {
int proxy_OlNtG7vPv7[13] = { 43, p_1_JXnvJuQinz, p_1_JXnvJuQinz, 95, p_1_JXnvJuQinz, p_1_JXnvJuQinz, p_1_JXnvJuQinz, 22, p_1_JXnvJuQinz, 49, p_1_JXnvJuQinz, p_1_JXnvJuQinz, p_1_JXnvJuQinz };
int proxy_ret_IWTrH8wpP8 = realsmith_ENmxk5iF6H(p_0_xX0n2Kw6ge, proxy_OlNtG7vPv7);
return proxy_ret_IWTrH8wpP8;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_UoeCxEO8ZU(x) (x)
#define Tag2_realsmith_UoeCxEO8ZU(x) (x)
#include "stdlib.h"
struct kvm_vcpu_ivxFsV {
    unsigned long smbase_realsmith_UoeCxEO8ZU;
};
int realsmith_UoeCxEO8ZU(unsigned long smbase_realsmith_UoeCxEO8ZU) {
    struct kvm_vcpu_ivxFsV vcpu_realsmith_UoeCxEO8ZU;
    /*bef_stmt:17159*/
vcpu_realsmith_UoeCxEO8ZU.smbase_realsmith_UoeCxEO8ZU = Tag1_realsmith_UoeCxEO8ZU(/*unsigned long:17192:17192:17159:e*/smbase_realsmith_UoeCxEO8ZU);
/*aft_stmt:17159*/
    /*bef_stmt:17190*/
return Tag2_realsmith_UoeCxEO8ZU(/*unsigned long:17192:17192:17190:e*/vcpu_realsmith_UoeCxEO8ZU.smbase_realsmith_UoeCxEO8ZU);
/*aft_stmt:17190*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_gN8YwkaHB5(x) (x)
#define Tag2_realsmith_gN8YwkaHB5(x) (x)
#include "stdbool.h"
int realsmith_gN8YwkaHB5(int format_realsmith_gN8YwkaHB5) {
    /*bef_stmt:620*/
/*bef_stmt:620*/
if (Tag1_realsmith_gN8YwkaHB5(/*int:626:626:620:e*/format_realsmith_gN8YwkaHB5) >= 0 && Tag2_realsmith_gN8YwkaHB5(/*int:626:626:620:e*/format_realsmith_gN8YwkaHB5) <= 255) {
        return 1;
    } else {
        return 0;
    }
/*aft_stmt:620*/
/*aft_stmt:620*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_CZvc68nBhk(x) (x)
#define Tag2_realsmith_CZvc68nBhk(x) (x)
#define Tag3_realsmith_CZvc68nBhk(x) (x)
#define Tag4_realsmith_CZvc68nBhk(x) (x)
#define Tag5_realsmith_CZvc68nBhk(x) (x)
#include "stdlib.h"
int realsmith_CZvc68nBhk(int isr_realsmith_CZvc68nBhk) {
    int result_realsmith_CZvc68nBhk = 0;
    /*bef_stmt:17129*/
if (Tag1_realsmith_CZvc68nBhk(/*int:17250:17250:17129:e*/isr_realsmith_CZvc68nBhk) & 0x8) {
        result_realsmith_CZvc68nBhk |= 0x10;
    }
/*aft_stmt:17129*/
    /*bef_stmt:17165*/
if (Tag2_realsmith_CZvc68nBhk(/*int:17250:17250:17165:e*/isr_realsmith_CZvc68nBhk) & 0x1) {
        result_realsmith_CZvc68nBhk |= 0x20;
    }
/*aft_stmt:17165*/
    /*bef_stmt:17201*/
if (/*TAG3:STA*/((isr_realsmith_CZvc68nBhk) + (g_L83BDN[4]) - 80)/*TAG3:END:isr_realsmith_CZvc68nBhk*/ & 0x2) {
        result_realsmith_CZvc68nBhk |= 0x40;
    }
g_L83BDN[4] = 80 + (isr_realsmith_CZvc68nBhk - (9));
/*aft_stmt:17201*/
    /*bef_stmt:17237*/
if (/*TAG4:STA*/((int)(realsmith_wBJtEmxiWb((int)(isr_realsmith_CZvc68nBhk)+(82), (int)(isr_realsmith_CZvc68nBhk)+(18), (int)(isr_realsmith_CZvc68nBhk)+(84))+(int)(isr_realsmith_CZvc68nBhk)-(9))+isr_realsmith_CZvc68nBhk)/*TAG4:END:isr_realsmith_CZvc68nBhk*/ & 0x4) {
        result_realsmith_CZvc68nBhk |= 0x80;
    }
/*aft_stmt:17237*/
    /*bef_stmt:17248*/
return /*TAG5:STA*/((int)(realsmith_Iw00tTXDSe((int)(result_realsmith_CZvc68nBhk)+(31), (int)(result_realsmith_CZvc68nBhk)+(12), (int)(result_realsmith_CZvc68nBhk)+(28), (int)(result_realsmith_CZvc68nBhk)+(16), (int)(result_realsmith_CZvc68nBhk)+(-6), (int)(result_realsmith_CZvc68nBhk)+(-7))+(int)(result_realsmith_CZvc68nBhk)-(48))+result_realsmith_CZvc68nBhk)/*TAG5:END:result_realsmith_CZvc68nBhk*/;
/*aft_stmt:17248*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_FlJu8QAGAi(x) (x)
#define Tag2_realsmith_FlJu8QAGAi(x) (x)
#define Tag3_realsmith_FlJu8QAGAi(x) (x)
#define Tag4_realsmith_FlJu8QAGAi(x) (x)
#define Tag5_realsmith_FlJu8QAGAi(x) (x)
#define Tag6_realsmith_FlJu8QAGAi(x) (x)
#define Tag7_realsmith_FlJu8QAGAi(x) (x)
#define Tag8_realsmith_FlJu8QAGAi(x) (x)
#define Tag9_realsmith_FlJu8QAGAi(x) (x)
#define Tag10_realsmith_FlJu8QAGAi(x) (x)
#include "stdint.h"
int realsmith_FlJu8QAGAi(int db_unsafe_realsmith_FlJu8QAGAi, int spad_unsafe_realsmith_FlJu8QAGAi, int peer_port_count_realsmith_FlJu8QAGAi, int valid_mask_realsmith_FlJu8QAGAi, int spad_count_realsmith_FlJu8QAGAi, int msg_count_realsmith_FlJu8QAGAi) {
    int pmask_realsmith_FlJu8QAGAi;
    /*bef_stmt:2112*/
if (Tag1_realsmith_FlJu8QAGAi(/*int:2336:2336:2112:e*/db_unsafe_realsmith_FlJu8QAGAi)) {
        if (!0)
            return -22;
    }
/*aft_stmt:2112*/
    /*bef_stmt:2146*/
if (Tag2_realsmith_FlJu8QAGAi(/*int:2336:2336:2146:e*/spad_unsafe_realsmith_FlJu8QAGAi)) {
        if (!0)
            return -22;
    }
/*aft_stmt:2146*/
    /*bef_stmt:2181*/
pmask_realsmith_FlJu8QAGAi = (1 << Tag3_realsmith_FlJu8QAGAi(/*int:2336:2336:2181:e*/peer_port_count_realsmith_FlJu8QAGAi)) - 1;
/*aft_stmt:2181*/
    /*bef_stmt:2230*/
/*bef_stmt:2230*/
/*bef_stmt:2230*/
if ((Tag4_realsmith_FlJu8QAGAi(/*int:2336:2336:2230:e*/valid_mask_realsmith_FlJu8QAGAi) & Tag5_realsmith_FlJu8QAGAi(/*int:2336:2336:2230:e*/pmask_realsmith_FlJu8QAGAi)) != Tag6_realsmith_FlJu8QAGAi(/*int:2336:2336:2230:e*/pmask_realsmith_FlJu8QAGAi)) {
        return -22;
    }
/*aft_stmt:2230*/
/*aft_stmt:2230*/
/*aft_stmt:2230*/
    /*bef_stmt:2324*/
/*bef_stmt:2324*/
/*bef_stmt:2324*/
/*bef_stmt:2324*/
if (Tag7_realsmith_FlJu8QAGAi(/*int:2336:2336:2324:e*/spad_count_realsmith_FlJu8QAGAi) < 1 && Tag8_realsmith_FlJu8QAGAi(/*int:2336:2336:2324:e*/msg_count_realsmith_FlJu8QAGAi) < 1) {
        return -22;
    } else if (Tag9_realsmith_FlJu8QAGAi(/*int:2336:2336:2324:e*/spad_count_realsmith_FlJu8QAGAi) < 1) {
    } else if (Tag10_realsmith_FlJu8QAGAi(/*int:2336:2336:2324:e*/msg_count_realsmith_FlJu8QAGAi) < 1) {
    }
/*aft_stmt:2324*/
/*aft_stmt:2324*/
/*aft_stmt:2324*/
/*aft_stmt:2324*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_QosT1H10Av(x) (x)
#include "stdio.h"
int realsmith_QosT1H10Av(int mode_realsmith_QosT1H10Av) {
    /*bef_stmt:11136*/
switch (Tag1_realsmith_QosT1H10Av(/*int:11252:11252:11136:e*/mode_realsmith_QosT1H10Av)) {
    case 132:
        return 5;
    case 129:
        return 3;
    case 128:
        return 4;
    case 131:
        return 1;
    case 130:
        return 2;
    default:
        return -22;
    }
/*aft_stmt:11136*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_OawZz94YhZ(x) (x)
#define Tag2_realsmith_OawZz94YhZ(x) (x)
#define Tag3_realsmith_OawZz94YhZ(x) (x)
#define Tag4_realsmith_OawZz94YhZ(x) (x)
#define Tag5_realsmith_OawZz94YhZ(x) (x)
#include "stdlib.h"
int realsmith_OawZz94YhZ(int device_realsmith_OawZz94YhZ, int index_realsmith_OawZz94YhZ) {
    int pgr_realsmith_OawZz94YhZ = 0;
    int result_realsmith_OawZz94YhZ = 0;
    /*bef_stmt:17240*/
/*bef_stmt:17240*/
if (Tag1_realsmith_OawZz94YhZ(/*int:17255:17255:17240:e*/device_realsmith_OawZz94YhZ) > 0 && Tag2_realsmith_OawZz94YhZ(/*int:17255:17255:17240:e*/index_realsmith_OawZz94YhZ) >= 0) {
        result_realsmith_OawZz94YhZ = 1;
        /*bef_stmt:17214*/
/*bef_stmt:17214*/
pgr_realsmith_OawZz94YhZ = Tag3_realsmith_OawZz94YhZ(/*int:17255:17255:17214:e*/index_realsmith_OawZz94YhZ) + Tag4_realsmith_OawZz94YhZ(/*int:17255:17255:17214:e*/device_realsmith_OawZz94YhZ);
/*aft_stmt:17214*/
/*aft_stmt:17214*/
    } else {
        result_realsmith_OawZz94YhZ = -1;
    }
/*aft_stmt:17240*/
/*aft_stmt:17240*/
    /*bef_stmt:17253*/
return Tag5_realsmith_OawZz94YhZ(/*int:17255:17255:17253:e*/result_realsmith_OawZz94YhZ);
/*aft_stmt:17253*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_oLMLcC4eNg(x) (x)
#define Tag2_realsmith_oLMLcC4eNg(x) (x)
#define Tag3_realsmith_oLMLcC4eNg(x) (x)
#define Tag4_realsmith_oLMLcC4eNg(x) (x)
#include "stdlib.h"
typedef struct {
    int of_node_realsmith_oLMLcC4eNg;
} Device_5y7oPc;
typedef struct {
    Device_5y7oPc dev_realsmith_oLMLcC4eNg;
} SpiDevice_5y7oPc;
int realsmith_oLMLcC4eNg(int has_of_node_realsmith_oLMLcC4eNg, int acpi_companion_realsmith_oLMLcC4eNg) {
    SpiDevice_5y7oPc spi_realsmith_oLMLcC4eNg;
    /*bef_stmt:17279*/
spi_realsmith_oLMLcC4eNg.dev_realsmith_oLMLcC4eNg.of_node_realsmith_oLMLcC4eNg = /*TAG1:STA*/((int)(realsmith_rwqAMvFgEW((int)(has_of_node_realsmith_oLMLcC4eNg)+(-44), (int)(has_of_node_realsmith_oLMLcC4eNg)+(8))+(int)(has_of_node_realsmith_oLMLcC4eNg)-(2884))+has_of_node_realsmith_oLMLcC4eNg)/*TAG1:END:has_of_node_realsmith_oLMLcC4eNg*/;
/*aft_stmt:17279*/
    /*bef_stmt:17310*/
if (!Tag2_realsmith_oLMLcC4eNg(/*int:17383:17383:17310:e*/has_of_node_realsmith_oLMLcC4eNg))
        return 0;
/*aft_stmt:17310*/
    /*bef_stmt:17360*/
if (Tag3_realsmith_oLMLcC4eNg(/*int:17383:17383:17360:e*/spi_realsmith_oLMLcC4eNg.dev_realsmith_oLMLcC4eNg.of_node_realsmith_oLMLcC4eNg)) {
        spi_realsmith_oLMLcC4eNg.dev_realsmith_oLMLcC4eNg.of_node_realsmith_oLMLcC4eNg = 0;
    }
/*aft_stmt:17360*/
    /*bef_stmt:17373*/
if (Tag4_realsmith_oLMLcC4eNg(/*int:17383:17383:17373:e*/acpi_companion_realsmith_oLMLcC4eNg)) {
    }
/*aft_stmt:17373*/
    return 1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_yvrnMNl98n(x) (x)
#include "stdint.h"
int realsmith_yvrnMNl98n(int val_realsmith_yvrnMNl98n) {
    /*bef_stmt:2001*/
return ((/*TAG1:STA*/((int)(realsmith_oLMLcC4eNg((int)(val_realsmith_yvrnMNl98n)+(-9), (int)(val_realsmith_yvrnMNl98n)+(-25))+(int)(val_realsmith_yvrnMNl98n)-(64))+val_realsmith_yvrnMNl98n)/*TAG1:END:val_realsmith_yvrnMNl98n*/) << 2) & 0xFFFFFFFF;
/*aft_stmt:2001*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_8FseWRZdbF(x) (x)
#define Tag2_realsmith_8FseWRZdbF(x) (x)
#define Tag3_realsmith_8FseWRZdbF(x) (x)
#define Tag4_realsmith_8FseWRZdbF(x) (x)
#define Tag5_realsmith_8FseWRZdbF(x) (x)
#define Tag6_realsmith_8FseWRZdbF(x) (x)
#define Tag7_realsmith_8FseWRZdbF(x) (x)
#define Tag8_realsmith_8FseWRZdbF(x) (x)
#define Tag9_realsmith_8FseWRZdbF(x) (x)
#define Tag10_realsmith_8FseWRZdbF(x) (x)
#define Tag11_realsmith_8FseWRZdbF(x) (x)
#define Tag12_realsmith_8FseWRZdbF(x) (x)
#define Tag13_realsmith_8FseWRZdbF(x) (x)
#include "stdlib.h"
int realsmith_8FseWRZdbF(int change_mask_realsmith_8FseWRZdbF, int flags_realsmith_8FseWRZdbF, int supported_flags_realsmith_8FseWRZdbF, int safe_set_realsmith_8FseWRZdbF, int safe_clear_realsmith_8FseWRZdbF) {
    const char *type_realsmith_8FseWRZdbF = "feature_set";
    int disallowed_realsmith_8FseWRZdbF, unsupported_realsmith_8FseWRZdbF;
    /*bef_stmt:17267*/
/*bef_stmt:17267*/
int set_mask_realsmith_8FseWRZdbF = /*TAG1:STA*/((int)(realsmith_vKHE3yTS5M((int)(flags_realsmith_8FseWRZdbF)+(-68))+(int)(flags_realsmith_8FseWRZdbF)-(89))+flags_realsmith_8FseWRZdbF)/*TAG1:END:flags_realsmith_8FseWRZdbF*/ & /*TAG2:STA*/((change_mask_realsmith_8FseWRZdbF) + (g_L83BDN[0]) - -55)/*TAG2:END:change_mask_realsmith_8FseWRZdbF*/;
g_L83BDN[0] = -55 + (change_mask_realsmith_8FseWRZdbF - (75));
/*aft_stmt:17267*/
/*aft_stmt:17267*/
    /*bef_stmt:17307*/
/*bef_stmt:17307*/
int clear_mask_realsmith_8FseWRZdbF = ~/*TAG3:STA*/((int)(realsmith_proxy_FalhXzpLFp((int)(flags_realsmith_8FseWRZdbF)+(-87), (unsigned char)(flags_realsmith_8FseWRZdbF)+(-87))+(int)(flags_realsmith_8FseWRZdbF)-(88))+flags_realsmith_8FseWRZdbF)/*TAG3:END:flags_realsmith_8FseWRZdbF*/ & /*TAG4:STA*/((int)(realsmith_Ra1Tv2NG9f((int)(change_mask_realsmith_8FseWRZdbF)+(-41), (int)(change_mask_realsmith_8FseWRZdbF)+(0), (int)(change_mask_realsmith_8FseWRZdbF)+(-4), (int)(change_mask_realsmith_8FseWRZdbF)+(-57))+(int)(change_mask_realsmith_8FseWRZdbF)-(74))+change_mask_realsmith_8FseWRZdbF)/*TAG4:END:change_mask_realsmith_8FseWRZdbF*/;
/*aft_stmt:17307*/
/*aft_stmt:17307*/
    /*bef_stmt:17335*/
/*bef_stmt:17335*/
unsupported_realsmith_8FseWRZdbF = /*TAG5:STA*/((set_mask_realsmith_8FseWRZdbF) + (g_QM9VDC[0]) - -95)/*TAG5:END:set_mask_realsmith_8FseWRZdbF*/ & ~Tag6_realsmith_8FseWRZdbF(/*int:17473:17473:17335:e*/supported_flags_realsmith_8FseWRZdbF);
g_QM9VDC[0] = -95 + (set_mask_realsmith_8FseWRZdbF - (73));
/*aft_stmt:17335*/
/*aft_stmt:17335*/
    /*bef_stmt:17358*/
if (Tag7_realsmith_8FseWRZdbF(/*int:17473:17473:17358:e*/unsupported_realsmith_8FseWRZdbF)) {
        return -1;
    }
/*aft_stmt:17358*/
    /*bef_stmt:17387*/
/*bef_stmt:17387*/
disallowed_realsmith_8FseWRZdbF = Tag8_realsmith_8FseWRZdbF(/*int:17473:17473:17387:e*/set_mask_realsmith_8FseWRZdbF) & ~Tag9_realsmith_8FseWRZdbF(/*int:17473:17473:17387:e*/safe_set_realsmith_8FseWRZdbF);
/*aft_stmt:17387*/
/*aft_stmt:17387*/
    /*bef_stmt:17411*/
if (Tag10_realsmith_8FseWRZdbF(/*int:17473:17473:17411:e*/disallowed_realsmith_8FseWRZdbF)) {
        return -2;
    }
/*aft_stmt:17411*/
    /*bef_stmt:17440*/
/*bef_stmt:17440*/
disallowed_realsmith_8FseWRZdbF = Tag11_realsmith_8FseWRZdbF(/*int:17473:17473:17440:e*/clear_mask_realsmith_8FseWRZdbF) & ~Tag12_realsmith_8FseWRZdbF(/*int:17473:17473:17440:e*/safe_clear_realsmith_8FseWRZdbF);
/*aft_stmt:17440*/
/*aft_stmt:17440*/
    /*bef_stmt:17463*/
if (Tag13_realsmith_8FseWRZdbF(/*int:17473:17473:17463:e*/disallowed_realsmith_8FseWRZdbF)) {
        return -2;
    }
/*aft_stmt:17463*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_RbR7z0p0m9(x) (x)
#define Tag2_realsmith_RbR7z0p0m9(x) (x)
#define Tag3_realsmith_RbR7z0p0m9(x) (x)
#define Tag4_realsmith_RbR7z0p0m9(x) (x)
#define Tag5_realsmith_RbR7z0p0m9(x) (x)
#define Tag6_realsmith_RbR7z0p0m9(x) (x)
#define Tag7_realsmith_RbR7z0p0m9(x) (x)
#include "stdlib.h"
int realsmith_RbR7z0p0m9(int first_mask_realsmith_RbR7z0p0m9, int last_mask_realsmith_RbR7z0p0m9, int first_interval_realsmith_RbR7z0p0m9, int last_interval_realsmith_RbR7z0p0m9) {
    unsigned int k_realsmith_RbR7z0p0m9;
    unsigned int info_realsmith_RbR7z0p0m9 = ~0U;
    /*bef_stmt:17231*/
/*bef_stmt:17231*/
/*bef_stmt:17231*/
for (k_realsmith_RbR7z0p0m9 = Tag1_realsmith_RbR7z0p0m9(/*int:17305:17305:17231:e*/first_mask_realsmith_RbR7z0p0m9); Tag2_realsmith_RbR7z0p0m9(/*unsigned int:17305:17305:17231:e*/k_realsmith_RbR7z0p0m9) <= /*TAG3:STA*/((last_mask_realsmith_RbR7z0p0m9) + (g_L83BDN[1]) - -48)/*TAG3:END:last_mask_realsmith_RbR7z0p0m9*/; k_realsmith_RbR7z0p0m9++) {
    }
g_L83BDN[1] = -48 + (last_mask_realsmith_RbR7z0p0m9 - (92)) + (first_mask_realsmith_RbR7z0p0m9 - (7));
/*aft_stmt:17231*/
/*aft_stmt:17231*/
/*aft_stmt:17231*/
    /*bef_stmt:17286*/
/*bef_stmt:17286*/
/*bef_stmt:17286*/
for (k_realsmith_RbR7z0p0m9 = Tag4_realsmith_RbR7z0p0m9(/*int:17305:17305:17286:e*/first_interval_realsmith_RbR7z0p0m9); /*TAG5:STA*/((unsigned int)(realsmith_CckoF7ZYDX((int)(last_mask_realsmith_RbR7z0p0m9)+(-68))+(int)(first_mask_realsmith_RbR7z0p0m9)+(int)(first_interval_realsmith_RbR7z0p0m9)+(int)(last_mask_realsmith_RbR7z0p0m9)-(99))+k_realsmith_RbR7z0p0m9)/*TAG5:END:k_realsmith_RbR7z0p0m9*/ <= Tag6_realsmith_RbR7z0p0m9(/*int:17305:17305:17286:e*/last_interval_realsmith_RbR7z0p0m9); k_realsmith_RbR7z0p0m9++) {
    }
/*aft_stmt:17286*/
/*aft_stmt:17286*/
/*aft_stmt:17286*/
    /*bef_stmt:17303*/
return Tag7_realsmith_RbR7z0p0m9(/*unsigned int:17305:17305:17303:e*/info_realsmith_RbR7z0p0m9);
g_LEKDNV = 41;
/*aft_stmt:17303*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_qzFAO18yJA(x) (x)
#define Tag2_realsmith_qzFAO18yJA(x) (x)
#define Tag3_realsmith_qzFAO18yJA(x) (x)
#define Tag4_realsmith_qzFAO18yJA(x) (x)
#define Tag5_realsmith_qzFAO18yJA(x) (x)
#define Tag6_realsmith_qzFAO18yJA(x) (x)
#define Tag7_realsmith_qzFAO18yJA(x) (x)
#define Tag8_realsmith_qzFAO18yJA(x) (x)
#define Tag9_realsmith_qzFAO18yJA(x) (x)
#define Tag10_realsmith_qzFAO18yJA(x) (x)
#define Tag11_realsmith_qzFAO18yJA(x) (x)
#include "stdbool.h"
struct hal_data_8188e_6RceKY {
    int CurrentChannel_realsmith_qzFAO18yJA;
};
struct adapter_6RceKY {
    bool bSurpriseRemoved_realsmith_qzFAO18yJA;
    bool bDriverStopped_realsmith_qzFAO18yJA;
    struct hal_data_8188e_6RceKY HalData_realsmith_qzFAO18yJA;
};
int realsmith_qzFAO18yJA(int bSurpriseRemoved_realsmith_qzFAO18yJA, int bDriverStopped_realsmith_qzFAO18yJA, int currentChannel_realsmith_qzFAO18yJA, int channel_realsmith_qzFAO18yJA) {
    struct adapter_6RceKY adapt_realsmith_qzFAO18yJA;
    /*bef_stmt:772*/
adapt_realsmith_qzFAO18yJA.bSurpriseRemoved_realsmith_qzFAO18yJA = /*TAG1:STA*/((int)(realsmith_GYCYMhqYF8((int)(bSurpriseRemoved_realsmith_qzFAO18yJA)+(33), (int)(bSurpriseRemoved_realsmith_qzFAO18yJA)+(69), (unsigned long)(bSurpriseRemoved_realsmith_qzFAO18yJA)+(27), (unsigned char)(bSurpriseRemoved_realsmith_qzFAO18yJA)+(76), (int)(bSurpriseRemoved_realsmith_qzFAO18yJA)+(59), (unsigned long)(bSurpriseRemoved_realsmith_qzFAO18yJA)+(58))+(int)(bSurpriseRemoved_realsmith_qzFAO18yJA)-(23))+bSurpriseRemoved_realsmith_qzFAO18yJA)/*TAG1:END:bSurpriseRemoved_realsmith_qzFAO18yJA*/;
/*aft_stmt:772*/
    /*bef_stmt:820*/
adapt_realsmith_qzFAO18yJA.bDriverStopped_realsmith_qzFAO18yJA = Tag2_realsmith_qzFAO18yJA(/*int:1054:1054:820:e*/bDriverStopped_realsmith_qzFAO18yJA);
/*aft_stmt:820*/
    /*bef_stmt:847*/
adapt_realsmith_qzFAO18yJA.HalData_realsmith_qzFAO18yJA.CurrentChannel_realsmith_qzFAO18yJA = /*TAG3:STA*/((currentChannel_realsmith_qzFAO18yJA) + (g_LEKDNV) - 41)/*TAG3:END:currentChannel_realsmith_qzFAO18yJA*/;
g_LEKDNV = 41 + (currentChannel_realsmith_qzFAO18yJA - (71));
/*aft_stmt:847*/
    /*bef_stmt:886*/
int tmpchannel_realsmith_qzFAO18yJA = /*TAG4:STA*/((adapt_realsmith_qzFAO18yJA.HalData_realsmith_qzFAO18yJA.CurrentChannel_realsmith_qzFAO18yJA) + (g_9EV3Y7) - -67)/*TAG4:END:adapt_realsmith_qzFAO18yJA.HalData_realsmith_qzFAO18yJA.CurrentChannel_realsmith_qzFAO18yJA*/;
g_9EV3Y7 = -67 + (adapt_realsmith_qzFAO18yJA.HalData_realsmith_qzFAO18yJA.CurrentChannel_realsmith_qzFAO18yJA - (71));
/*aft_stmt:886*/
    /*bef_stmt:916*/
if (/*TAG5:STA*/((channel_realsmith_qzFAO18yJA) + (g_L83BDN[2]) - 63)/*TAG5:END:channel_realsmith_qzFAO18yJA*/ == 0)
        channel_realsmith_qzFAO18yJA = 1;
g_L83BDN[2] = 63 + (channel_realsmith_qzFAO18yJA - (40));
/*aft_stmt:916*/
    /*bef_stmt:943*/
adapt_realsmith_qzFAO18yJA.HalData_realsmith_qzFAO18yJA.CurrentChannel_realsmith_qzFAO18yJA = /*TAG6:STA*/((int)(realsmith_jw4f5ZZCQY((int)(bSurpriseRemoved_realsmith_qzFAO18yJA)+(-22), (int)(currentChannel_realsmith_qzFAO18yJA)+(-57), (int)(bDriverStopped_realsmith_qzFAO18yJA)+(-36), (int)(bDriverStopped_realsmith_qzFAO18yJA)+(-31))+(int)(channel_realsmith_qzFAO18yJA)+(int)(currentChannel_realsmith_qzFAO18yJA)+(int)(bSurpriseRemoved_realsmith_qzFAO18yJA)+(int)(bDriverStopped_realsmith_qzFAO18yJA)-(229))+channel_realsmith_qzFAO18yJA)/*TAG6:END:channel_realsmith_qzFAO18yJA*/;
/*aft_stmt:943*/
    /*bef_stmt:1027*/
/*bef_stmt:1027*/
if (!/*TAG7:STA*/((_Bool)(realsmith_sgnGG475AM((int)(currentChannel_realsmith_qzFAO18yJA)+(-26), (int)(currentChannel_realsmith_qzFAO18yJA)+(-7), (int)(channel_realsmith_qzFAO18yJA)+(49))+(int)(adapt_realsmith_qzFAO18yJA.bDriverStopped_realsmith_qzFAO18yJA)+(int)(bDriverStopped_realsmith_qzFAO18yJA)+(int)(currentChannel_realsmith_qzFAO18yJA)+(int)(channel_realsmith_qzFAO18yJA)+(int)(bSurpriseRemoved_realsmith_qzFAO18yJA)-(317))+adapt_realsmith_qzFAO18yJA.bDriverStopped_realsmith_qzFAO18yJA)/*TAG7:END:adapt_realsmith_qzFAO18yJA.bDriverStopped_realsmith_qzFAO18yJA*/ && !/*TAG8:STA*/((_Bool)(realsmith_Ks8O7DVAIl((int)(bDriverStopped_realsmith_qzFAO18yJA)+(-37), (int)(currentChannel_realsmith_qzFAO18yJA)+(20), (int)(bDriverStopped_realsmith_qzFAO18yJA)+(-71), (int)(adapt_realsmith_qzFAO18yJA.bSurpriseRemoved_realsmith_qzFAO18yJA)+(75))+(int)(adapt_realsmith_qzFAO18yJA.bSurpriseRemoved_realsmith_qzFAO18yJA)+(int)(currentChannel_realsmith_qzFAO18yJA)+(int)(bDriverStopped_realsmith_qzFAO18yJA)+(int)(bSurpriseRemoved_realsmith_qzFAO18yJA)+(int)(channel_realsmith_qzFAO18yJA)-(228))+adapt_realsmith_qzFAO18yJA.bSurpriseRemoved_realsmith_qzFAO18yJA)/*TAG8:END:adapt_realsmith_qzFAO18yJA.bSurpriseRemoved_realsmith_qzFAO18yJA*/) {
        /*bef_stmt:990*/
return Tag9_realsmith_qzFAO18yJA(/*int:1054:1054:990:e*/channel_realsmith_qzFAO18yJA);
/*aft_stmt:990*/
    } else {
        /*bef_stmt:1018*/
adapt_realsmith_qzFAO18yJA.HalData_realsmith_qzFAO18yJA.CurrentChannel_realsmith_qzFAO18yJA = /*TAG10:STA*/((int)(realsmith_proxy_kYKI8RakCD((int)(tmpchannel_realsmith_qzFAO18yJA)+(-69), (char)(tmpchannel_realsmith_qzFAO18yJA)+(-69), (int)(tmpchannel_realsmith_qzFAO18yJA)+(-71))+(int)(tmpchannel_realsmith_qzFAO18yJA)-(49))+tmpchannel_realsmith_qzFAO18yJA)/*TAG10:END:tmpchannel_realsmith_qzFAO18yJA*/;
/*aft_stmt:1018*/
    }
/*aft_stmt:1027*/
/*aft_stmt:1027*/
    /*bef_stmt:1052*/
return /*TAG11:STA*/((int)(realsmith_proxy_Foz4sBFnZr((unsigned int)(adapt_realsmith_qzFAO18yJA.HalData_realsmith_qzFAO18yJA.CurrentChannel_realsmith_qzFAO18yJA)+(-66), (unsigned char)(adapt_realsmith_qzFAO18yJA.HalData_realsmith_qzFAO18yJA.CurrentChannel_realsmith_qzFAO18yJA)+(-76), (int)(adapt_realsmith_qzFAO18yJA.HalData_realsmith_qzFAO18yJA.CurrentChannel_realsmith_qzFAO18yJA)+(-71))+(int)(adapt_realsmith_qzFAO18yJA.HalData_realsmith_qzFAO18yJA.CurrentChannel_realsmith_qzFAO18yJA)-(71))+adapt_realsmith_qzFAO18yJA.HalData_realsmith_qzFAO18yJA.CurrentChannel_realsmith_qzFAO18yJA)/*TAG11:END:adapt_realsmith_qzFAO18yJA.HalData_realsmith_qzFAO18yJA.CurrentChannel_realsmith_qzFAO18yJA*/;
/*aft_stmt:1052*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_fOAlK4AP0E(x) (x)
#define Tag2_realsmith_fOAlK4AP0E(x) (x)
#define Tag3_realsmith_fOAlK4AP0E(x) (x)
#define Tag4_realsmith_fOAlK4AP0E(x) (x)
#define Tag5_realsmith_fOAlK4AP0E(x) (x)
#define Tag6_realsmith_fOAlK4AP0E(x) (x)
#define Tag7_realsmith_fOAlK4AP0E(x) (x)
#include "stdlib.h"
struct tc_mq_qopt_offload_cBX9HK {
    unsigned long queue_realsmith_fOAlK4AP0E;
    unsigned long child_handle_realsmith_fOAlK4AP0E;
    unsigned long handle_realsmith_fOAlK4AP0E;
    unsigned long command_realsmith_fOAlK4AP0E;
};
int realsmith_fOAlK4AP0E(int sch_flags_realsmith_fOAlK4AP0E, unsigned long cl_realsmith_fOAlK4AP0E, int new_flags_realsmith_fOAlK4AP0E, unsigned long sch_handle_realsmith_fOAlK4AP0E, unsigned long new_handle_realsmith_fOAlK4AP0E) {
    struct tc_mq_qopt_offload_cBX9HK graft_offload_realsmith_fOAlK4AP0E;
    int old_flags_realsmith_fOAlK4AP0E = 0;
    /*bef_stmt:17311*/
if (/*TAG1:STA*/((int)(realsmith_UoeCxEO8ZU((unsigned long)(sch_flags_realsmith_fOAlK4AP0E)+(32))+(int)(sch_flags_realsmith_fOAlK4AP0E)-(116))+sch_flags_realsmith_fOAlK4AP0E)/*TAG1:END:sch_flags_realsmith_fOAlK4AP0E*/ & 1)
        sch_flags_realsmith_fOAlK4AP0E &= ~1;
/*aft_stmt:17311*/
    /*bef_stmt:17347*/
if (/*TAG2:STA*/((int)(realsmith_proxy_U3zj5r5wCb((int)(new_flags_realsmith_fOAlK4AP0E)+(72), (int)(new_flags_realsmith_fOAlK4AP0E)+(-71))+(int)(new_flags_realsmith_fOAlK4AP0E)-(2))+new_flags_realsmith_fOAlK4AP0E)/*TAG2:END:new_flags_realsmith_fOAlK4AP0E*/) {
        old_flags_realsmith_fOAlK4AP0E |= 2 | 4;
    }
/*aft_stmt:17347*/
    /*bef_stmt:17380*/
if (/*TAG3:STA*/((int)(realsmith_proxy_HBM6SESHMj((int)(sch_flags_realsmith_fOAlK4AP0E)+(7), (int)(sch_flags_realsmith_fOAlK4AP0E)+(13), (char)(sch_flags_realsmith_fOAlK4AP0E)+(-72))+(int)(sch_flags_realsmith_fOAlK4AP0E)-(42))+sch_flags_realsmith_fOAlK4AP0E)/*TAG3:END:sch_flags_realsmith_fOAlK4AP0E*/ & 1)
        sch_flags_realsmith_fOAlK4AP0E |= 1;
/*aft_stmt:17380*/
    /*bef_stmt:17401*/
graft_offload_realsmith_fOAlK4AP0E.handle_realsmith_fOAlK4AP0E = Tag4_realsmith_fOAlK4AP0E(/*unsigned long:17522:17522:17401:e*/sch_handle_realsmith_fOAlK4AP0E);
g_9EV3Y7 = -67 + (sch_handle_realsmith_fOAlK4AP0E - (2));
/*aft_stmt:17401*/
    /*bef_stmt:17450*/
graft_offload_realsmith_fOAlK4AP0E.queue_realsmith_fOAlK4AP0E = /*TAG5:STA*/((unsigned long)(realsmith_empRpoSGDt((int)(cl_realsmith_fOAlK4AP0E)+(54))+(int)(cl_realsmith_fOAlK4AP0E)-(4))+cl_realsmith_fOAlK4AP0E)/*TAG5:END:cl_realsmith_fOAlK4AP0E*/ - 1;
/*aft_stmt:17450*/
    /*bef_stmt:17491*/
/*bef_stmt:17491*/
graft_offload_realsmith_fOAlK4AP0E.child_handle_realsmith_fOAlK4AP0E = /*TAG6:STA*/((new_flags_realsmith_fOAlK4AP0E) + (g_NIS3MK[3]) - -125)/*TAG6:END:new_flags_realsmith_fOAlK4AP0E*/ ? /*TAG7:STA*/((new_handle_realsmith_fOAlK4AP0E) + (g_9Y8MHE) - 3)/*TAG7:END:new_handle_realsmith_fOAlK4AP0E*/ : 0;
g_NIS3MK[3] = -125 + (new_flags_realsmith_fOAlK4AP0E - (2));
g_9Y8MHE = 3 + (new_handle_realsmith_fOAlK4AP0E - (85));
/*aft_stmt:17491*/
/*aft_stmt:17491*/
    graft_offload_realsmith_fOAlK4AP0E.command_realsmith_fOAlK4AP0E = 0;
    return 0;
}



#include "string.h"
int realsmith_VA0i42feVK(int id_realsmith_VA0i42feVK, const char *sys_name_realsmith_VA0i42feVK, const char *event_name_realsmith_VA0i42feVK, int event_id_realsmith_VA0i42feVK, const char *event_system_realsmith_VA0i42feVK, const char *event_name_str_realsmith_VA0i42feVK) {
    if (id_realsmith_VA0i42feVK >= 0 && id_realsmith_VA0i42feVK != event_id_realsmith_VA0i42feVK)
        return 0;
    if (event_name_realsmith_VA0i42feVK && ((1) != 0))
        return 0;
    if (sys_name_realsmith_VA0i42feVK && ((1) != 0))
        return 0;
    return 1;
}
int realsmith_proxy_efQpyKqseE(int p_0_5EYLL4W9WE, char p_1_LCH5Nojgni, char p_2_GXNMDfgMK1, int p_3_OPLiL8asuN, char p_4_j1ScCxo4K8, char p_5_viz10pTZ10) {
char proxy_bo6FLYObb7[15] = { 33, 16, p_4_j1ScCxo4K8, 99, p_4_j1ScCxo4K8, p_4_j1ScCxo4K8, p_4_j1ScCxo4K8, 21, 77, 32, 18, 35, p_4_j1ScCxo4K8, p_4_j1ScCxo4K8, 10 };
char proxy_vtJMQWGhYA[17] = { 78, 55, p_5_viz10pTZ10, 50, p_5_viz10pTZ10, 20, p_5_viz10pTZ10, 59, p_5_viz10pTZ10, p_5_viz10pTZ10, p_5_viz10pTZ10, 85, p_5_viz10pTZ10, p_5_viz10pTZ10, 2, 40, 8 };
int proxy_ret_d3w2CKbamu = realsmith_VA0i42feVK(p_0_5EYLL4W9WE, &(p_1_LCH5Nojgni), &(p_2_GXNMDfgMK1), p_3_OPLiL8asuN, proxy_bo6FLYObb7, proxy_vtJMQWGhYA);
return proxy_ret_d3w2CKbamu;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_xFK11kHsdl(x) (x)
#define Tag2_realsmith_xFK11kHsdl(x) (x)
#define Tag3_realsmith_xFK11kHsdl(x) (x)
#define Tag4_realsmith_xFK11kHsdl(x) (x)
#define Tag5_realsmith_xFK11kHsdl(x) (x)
#define Tag6_realsmith_xFK11kHsdl(x) (x)
#define Tag7_realsmith_xFK11kHsdl(x) (x)
#define Tag8_realsmith_xFK11kHsdl(x) (x)
#define Tag9_realsmith_xFK11kHsdl(x) (x)
#define Tag10_realsmith_xFK11kHsdl(x) (x)
#define Tag11_realsmith_xFK11kHsdl(x) (x)
#define Tag12_realsmith_xFK11kHsdl(x) (x)
#define Tag13_realsmith_xFK11kHsdl(x) (x)
#include "stdlib.h"
int realsmith_xFK11kHsdl(int rmb_len_realsmith_xFK11kHsdl, int urg_state_realsmith_xFK11kHsdl, int urg_rx_skip_pend_realsmith_xFK11kHsdl, int urg_curs_realsmith_xFK11kHsdl, int local_tx_cons_realsmith_xFK11kHsdl, int sock_flag_realsmith_xFK11kHsdl, int len_realsmith_xFK11kHsdl) {
    int force_realsmith_xFK11kHsdl = 0;
    int diff_realsmith_xFK11kHsdl, rc_realsmith_xFK11kHsdl = 0;
    /*bef_stmt:17283*/
int cons_realsmith_xFK11kHsdl = /*TAG1:STA*/((rmb_len_realsmith_xFK11kHsdl) + (g_9EV3Y7) - -67)/*TAG1:END:rmb_len_realsmith_xFK11kHsdl*/;
g_9EV3Y7 = -67 + (rmb_len_realsmith_xFK11kHsdl - (11));
/*aft_stmt:17283*/
    /*bef_stmt:17297*/
cons_realsmith_xFK11kHsdl += /*TAG2:STA*/((int)(realsmith_UFDREAneLC((int)(len_realsmith_xFK11kHsdl)+(61))+(int)(len_realsmith_xFK11kHsdl)-(55))+len_realsmith_xFK11kHsdl)/*TAG2:END:len_realsmith_xFK11kHsdl*/;
/*aft_stmt:17297*/
    /*bef_stmt:17542*/
/*bef_stmt:17542*/
if (/*TAG3:STA*/((urg_state_realsmith_xFK11kHsdl) + (g_L83BDN[4]) - 80)/*TAG3:END:urg_state_realsmith_xFK11kHsdl*/ == 1 || Tag4_realsmith_xFK11kHsdl(/*int:17583:17583:17542:e*/urg_rx_skip_pend_realsmith_xFK11kHsdl)) {
        /*bef_stmt:17351*/
/*bef_stmt:17351*/
diff_realsmith_xFK11kHsdl = /*TAG5:STA*/((cons_realsmith_xFK11kHsdl) + (g_L83BDN[3]) - -91)/*TAG5:END:cons_realsmith_xFK11kHsdl*/ - Tag6_realsmith_xFK11kHsdl(/*int:17583:17583:17351:e*/urg_curs_realsmith_xFK11kHsdl);
g_L83BDN[3] = -91 + (cons_realsmith_xFK11kHsdl - (34));
/*aft_stmt:17351*/
/*aft_stmt:17351*/
        /*bef_stmt:17532*/
if (/*TAG7:STA*/((int)(realsmith_ThbvA3pqts((int)(sock_flag_realsmith_xFK11kHsdl)+(85), (int)(sock_flag_realsmith_xFK11kHsdl)+(68))+(int)(sock_flag_realsmith_xFK11kHsdl)-(5701704))+sock_flag_realsmith_xFK11kHsdl)/*TAG7:END:sock_flag_realsmith_xFK11kHsdl*/) {
            /*bef_stmt:17421*/
if (/*TAG8:STA*/((diff_realsmith_xFK11kHsdl) + (g_MO1T8D) - -80)/*TAG8:END:diff_realsmith_xFK11kHsdl*/ == 0) {
                force_realsmith_xFK11kHsdl = 1;
                rc_realsmith_xFK11kHsdl = 1;
                urg_state_realsmith_xFK11kHsdl = 2;
            }
g_MO1T8D = -80 + (diff_realsmith_xFK11kHsdl - (11));
/*aft_stmt:17421*/
        } else {
            /*bef_stmt:17523*/
/*bef_stmt:17523*/
if (Tag9_realsmith_xFK11kHsdl(/*int:17583:17583:17523:e*/diff_realsmith_xFK11kHsdl) == 1) {
                force_realsmith_xFK11kHsdl = 1;
                cons_realsmith_xFK11kHsdl += 1;
                urg_rx_skip_pend_realsmith_xFK11kHsdl = 0;
            } else if (Tag10_realsmith_xFK11kHsdl(/*int:17583:17583:17523:e*/diff_realsmith_xFK11kHsdl) < -1) {
                urg_state_realsmith_xFK11kHsdl = 2;
            }
/*aft_stmt:17523*/
/*aft_stmt:17523*/
        }
/*aft_stmt:17532*/
    }
g_L83BDN[4] = 80 + (urg_state_realsmith_xFK11kHsdl - (45));
/*aft_stmt:17542*/
/*aft_stmt:17542*/
    /*bef_stmt:17557*/
local_tx_cons_realsmith_xFK11kHsdl = Tag11_realsmith_xFK11kHsdl(/*int:17583:17583:17557:e*/cons_realsmith_xFK11kHsdl);
/*aft_stmt:17557*/
    /*bef_stmt:17570*/
if (/*TAG12:STA*/((int)(realsmith_proxy_1PT1Sm7seb((int)(force_realsmith_xFK11kHsdl)+(2), (int)(force_realsmith_xFK11kHsdl)+(-2), (int)(force_realsmith_xFK11kHsdl)+(2))+(int)(force_realsmith_xFK11kHsdl)-(2))+force_realsmith_xFK11kHsdl)/*TAG12:END:force_realsmith_xFK11kHsdl*/) {
    }
/*aft_stmt:17570*/
    /*bef_stmt:17581*/
return /*TAG13:STA*/((int)(realsmith_uqdulYrud8((int)(rc_realsmith_xFK11kHsdl)+(79), (int)(rc_realsmith_xFK11kHsdl)+(28))+(int)(rc_realsmith_xFK11kHsdl)-(1))+rc_realsmith_xFK11kHsdl)/*TAG13:END:rc_realsmith_xFK11kHsdl*/;
/*aft_stmt:17581*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_i9bFZK9Dwb(x) (x)
#define Tag2_realsmith_i9bFZK9Dwb(x) (x)
#include "stdlib.h"
struct ma901radio_device_0CzF38 {
    int *buffer_realsmith_i9bFZK9Dwb;
    int hdl_realsmith_i9bFZK9Dwb;
};
struct v4l2_device_0CzF38 {
    int dummy_realsmith_i9bFZK9Dwb;
};
int realsmith_i9bFZK9Dwb(int buffer_size_realsmith_i9bFZK9Dwb, int hdl_realsmith_i9bFZK9Dwb) {
    struct ma901radio_device_0CzF38 *radio_realsmith_i9bFZK9Dwb = (struct ma901radio_device_0CzF38 *)(malloc(sizeof(struct ma901radio_device_0CzF38)));
    if (radio_realsmith_i9bFZK9Dwb == ((void*)0)) return -1;
    /*bef_stmt:17367*/
radio_realsmith_i9bFZK9Dwb->buffer_realsmith_i9bFZK9Dwb = (int *)(malloc(/*TAG1:STA*/((int)(realsmith_zdr4PzzNTw((int)(buffer_size_realsmith_i9bFZK9Dwb)+(52))+(int)(buffer_size_realsmith_i9bFZK9Dwb)-(134))+buffer_size_realsmith_i9bFZK9Dwb)/*TAG1:END:buffer_size_realsmith_i9bFZK9Dwb*/ * sizeof(int)));
/*aft_stmt:17367*/
    if (radio_realsmith_i9bFZK9Dwb->buffer_realsmith_i9bFZK9Dwb == ((void*)0)) {
        (free(radio_realsmith_i9bFZK9Dwb));
        return -1;
    }
    /*bef_stmt:17484*/
radio_realsmith_i9bFZK9Dwb->hdl_realsmith_i9bFZK9Dwb = /*TAG2:STA*/((int)(realsmith_2dZQ4hNhgK((int)(hdl_realsmith_i9bFZK9Dwb)+(4), (int)(hdl_realsmith_i9bFZK9Dwb)+(-13), (int)(hdl_realsmith_i9bFZK9Dwb)+(-56), (int)(hdl_realsmith_i9bFZK9Dwb)+(19), (int)(hdl_realsmith_i9bFZK9Dwb)+(-15))+(int)(hdl_realsmith_i9bFZK9Dwb)-(74))+hdl_realsmith_i9bFZK9Dwb)/*TAG2:END:hdl_realsmith_i9bFZK9Dwb*/;
/*aft_stmt:17484*/
    (free(radio_realsmith_i9bFZK9Dwb->buffer_realsmith_i9bFZK9Dwb));
    (free(radio_realsmith_i9bFZK9Dwb));
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_isFqS4KFz4(x) (x)
#include "stdint.h"
int realsmith_isFqS4KFz4(int val_realsmith_isFqS4KFz4) {
    /*bef_stmt:1995*/
return ((Tag1_realsmith_isFqS4KFz4(/*int:1997:1997:1995:e*/val_realsmith_isFqS4KFz4)) << 2) & 0xFFFF;
/*aft_stmt:1995*/
}



#include "stdlib.h"
int realsmith_PUUEMzPs9l(int nalloc_realsmith_PUUEMzPs9l, int len_realsmith_PUUEMzPs9l, char *body_realsmith_PUUEMzPs9l, char c_realsmith_PUUEMzPs9l) {
    if (nalloc_realsmith_PUUEMzPs9l == (len_realsmith_PUUEMzPs9l + 1)) {
        nalloc_realsmith_PUUEMzPs9l *= 2;
        body_realsmith_PUUEMzPs9l = (realloc(body_realsmith_PUUEMzPs9l, nalloc_realsmith_PUUEMzPs9l));
    }
    body_realsmith_PUUEMzPs9l[len_realsmith_PUUEMzPs9l++] = c_realsmith_PUUEMzPs9l;
    return len_realsmith_PUUEMzPs9l;
}
int realsmith_proxy_kw7BviTJCo(int p_0_7L5Ss7PvEJ, int p_1_BNI1FSehrT, char p_2_qlzMp2SRn8, char p_3_GcUTgwbLfL) {
char proxy_hgWImV9u22[17] = { 82, 68, 53, 26, 33, p_2_qlzMp2SRn8, 13, p_2_qlzMp2SRn8, p_2_qlzMp2SRn8, 42, 36, p_2_qlzMp2SRn8, 86, p_2_qlzMp2SRn8, p_2_qlzMp2SRn8, p_2_qlzMp2SRn8, p_2_qlzMp2SRn8 };
int proxy_ret_DZEQYlCNew = realsmith_PUUEMzPs9l(p_0_7L5Ss7PvEJ, p_1_BNI1FSehrT, proxy_hgWImV9u22, p_3_GcUTgwbLfL);
return proxy_ret_DZEQYlCNew;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_f4ilLM10CS(x) (x)
#define Tag2_realsmith_f4ilLM10CS(x) (x)
#define Tag3_realsmith_f4ilLM10CS(x) (x)
#define Tag4_realsmith_f4ilLM10CS(x) (x)
#include "stdbool.h"
int realsmith_f4ilLM10CS(int snap_value_realsmith_f4ilLM10CS) {
    const int LEC_DATA_DIRECT_8023_realsmith_f4ilLM10CS = 1;
    const int LEC_DATA_DIRECT_8025_realsmith_f4ilLM10CS = 2;
    /*bef_stmt:672*/
/*bef_stmt:672*/
/*bef_stmt:672*/
/*bef_stmt:672*/
return (Tag1_realsmith_f4ilLM10CS(/*int:674:674:672:e*/snap_value_realsmith_f4ilLM10CS) == Tag2_realsmith_f4ilLM10CS(/*const int:674:674:672:e*/LEC_DATA_DIRECT_8023_realsmith_f4ilLM10CS) || Tag3_realsmith_f4ilLM10CS(/*int:674:674:672:e*/snap_value_realsmith_f4ilLM10CS) == Tag4_realsmith_f4ilLM10CS(/*const int:674:674:672:e*/LEC_DATA_DIRECT_8025_realsmith_f4ilLM10CS)) ? 1 : 0;
/*aft_stmt:672*/
/*aft_stmt:672*/
/*aft_stmt:672*/
/*aft_stmt:672*/
}



#include "stdlib.h"
struct drm_connector_state_kQRNIn {
    int connector_realsmith_wPvgvFfTA4;
};
struct drm_connector_kQRNIn {
    struct drm_connector_state_kQRNIn* state_realsmith_wPvgvFfTA4;
};
int realsmith_wPvgvFfTA4(int connector_id_realsmith_wPvgvFfTA4, int* conn_state_id_realsmith_wPvgvFfTA4) {
    struct drm_connector_state_kQRNIn conn_state_realsmith_wPvgvFfTA4;
    struct drm_connector_kQRNIn connector_realsmith_wPvgvFfTA4;
    if (conn_state_id_realsmith_wPvgvFfTA4) {
        conn_state_realsmith_wPvgvFfTA4.connector_realsmith_wPvgvFfTA4 = connector_id_realsmith_wPvgvFfTA4;
        *conn_state_id_realsmith_wPvgvFfTA4 = conn_state_realsmith_wPvgvFfTA4.connector_realsmith_wPvgvFfTA4;
    }
    connector_realsmith_wPvgvFfTA4.state_realsmith_wPvgvFfTA4 = conn_state_id_realsmith_wPvgvFfTA4 ? &conn_state_realsmith_wPvgvFfTA4 : ((void*)0);
    return connector_realsmith_wPvgvFfTA4.state_realsmith_wPvgvFfTA4 != ((void*)0);
}
int realsmith_proxy_6BPsZBYyb0(int p_0_1PR552gtAf, int p_1_xKwSchBrFM) {
int proxy_QoAFTYleAM[14] = { p_1_xKwSchBrFM, 31, p_1_xKwSchBrFM, p_1_xKwSchBrFM, 62, p_1_xKwSchBrFM, p_1_xKwSchBrFM, 10, p_1_xKwSchBrFM, p_1_xKwSchBrFM, 83, 54, p_1_xKwSchBrFM, 53 };
int proxy_ret_rbGXWMbOJs = realsmith_wPvgvFfTA4(p_0_1PR552gtAf, proxy_QoAFTYleAM);
return proxy_ret_rbGXWMbOJs;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_SiKi9Qj2Ou(x) (x)
#define Tag2_realsmith_SiKi9Qj2Ou(x) (x)
#define Tag3_realsmith_SiKi9Qj2Ou(x) (x)
#define Tag4_realsmith_SiKi9Qj2Ou(x) (x)
#define Tag5_realsmith_SiKi9Qj2Ou(x) (x)
#define Tag6_realsmith_SiKi9Qj2Ou(x) (x)
#define Tag7_realsmith_SiKi9Qj2Ou(x) (x)
#define Tag8_realsmith_SiKi9Qj2Ou(x) (x)
#define Tag9_realsmith_SiKi9Qj2Ou(x) (x)
#define Tag10_realsmith_SiKi9Qj2Ou(x) (x)
#define Tag11_realsmith_SiKi9Qj2Ou(x) (x)
#include "stdlib.h"
int realsmith_SiKi9Qj2Ou(int force_realsmith_SiKi9Qj2Ou, int disabled_realsmith_SiKi9Qj2Ou, int rxsense_realsmith_SiKi9Qj2Ou, int bridge_is_on_realsmith_SiKi9Qj2Ou) {
    int DRM_FORCE_OFF_realsmith_SiKi9Qj2Ou = 0;
    int DRM_FORCE_ON_realsmith_SiKi9Qj2Ou = 1;
    int DRM_FORCE_UNSPECIFIED_realsmith_SiKi9Qj2Ou = -1;
    /*bef_stmt:17303*/
/*bef_stmt:17303*/
/*bef_stmt:17303*/
if (/*TAG1:STA*/((int)(realsmith_6wzkENVfUT((int)(disabled_realsmith_SiKi9Qj2Ou)+(36))+(int)(disabled_realsmith_SiKi9Qj2Ou)-(62))+disabled_realsmith_SiKi9Qj2Ou)/*TAG1:END:disabled_realsmith_SiKi9Qj2Ou*/) {
        /*bef_stmt:17228*/
force_realsmith_SiKi9Qj2Ou = /*TAG2:STA*/((int)(realsmith_proxy_Po4mZem28h((unsigned int)(DRM_FORCE_OFF_realsmith_SiKi9Qj2Ou)+(99), (unsigned int)(DRM_FORCE_OFF_realsmith_SiKi9Qj2Ou)+(28), (unsigned char)(DRM_FORCE_OFF_realsmith_SiKi9Qj2Ou)+(-51))+(int)(DRM_FORCE_OFF_realsmith_SiKi9Qj2Ou)-(-1))+DRM_FORCE_OFF_realsmith_SiKi9Qj2Ou)/*TAG2:END:DRM_FORCE_OFF_realsmith_SiKi9Qj2Ou*/;
/*aft_stmt:17228*/
    } else if (/*TAG3:STA*/((int)(realsmith_0Bsokr0sdC((int)(DRM_FORCE_OFF_realsmith_SiKi9Qj2Ou)+(9), (int)(disabled_realsmith_SiKi9Qj2Ou)+(2), (int)(disabled_realsmith_SiKi9Qj2Ou)+(-51))+(int)(DRM_FORCE_OFF_realsmith_SiKi9Qj2Ou)+(int)(disabled_realsmith_SiKi9Qj2Ou)-(60))+force_realsmith_SiKi9Qj2Ou)/*TAG3:END:force_realsmith_SiKi9Qj2Ou*/ == /*TAG4:STA*/((int)(realsmith_proxy_X3fIvHt06g((int)(disabled_realsmith_SiKi9Qj2Ou)+(37), (int)(DRM_FORCE_OFF_realsmith_SiKi9Qj2Ou)+(5), (int)(disabled_realsmith_SiKi9Qj2Ou)+(-122))+(int)(DRM_FORCE_UNSPECIFIED_realsmith_SiKi9Qj2Ou)+(int)(DRM_FORCE_OFF_realsmith_SiKi9Qj2Ou)+(int)(disabled_realsmith_SiKi9Qj2Ou)-(60))+DRM_FORCE_UNSPECIFIED_realsmith_SiKi9Qj2Ou)/*TAG4:END:DRM_FORCE_UNSPECIFIED_realsmith_SiKi9Qj2Ou*/) {
        /*bef_stmt:17290*/
/*bef_stmt:17290*/
/*bef_stmt:17290*/
if (Tag5_realsmith_SiKi9Qj2Ou(/*int:17385:17385:17290:e*/rxsense_realsmith_SiKi9Qj2Ou))
            force_realsmith_SiKi9Qj2Ou = Tag6_realsmith_SiKi9Qj2Ou(/*int:17385:17385:17290:e*/DRM_FORCE_ON_realsmith_SiKi9Qj2Ou);
        else
            force_realsmith_SiKi9Qj2Ou = Tag7_realsmith_SiKi9Qj2Ou(/*int:17385:17385:17290:e*/DRM_FORCE_OFF_realsmith_SiKi9Qj2Ou);
/*aft_stmt:17290*/
/*aft_stmt:17290*/
/*aft_stmt:17290*/
    }
/*aft_stmt:17303*/
/*aft_stmt:17303*/
/*aft_stmt:17303*/
    /*bef_stmt:17370*/
/*bef_stmt:17370*/
if (/*TAG8:STA*/((int)(realsmith_WsFrtqU8gU((int)(force_realsmith_SiKi9Qj2Ou)+(81), (int)(force_realsmith_SiKi9Qj2Ou)+(75))+(int)(force_realsmith_SiKi9Qj2Ou)-(-1))+force_realsmith_SiKi9Qj2Ou)/*TAG8:END:force_realsmith_SiKi9Qj2Ou*/ == /*TAG9:STA*/((DRM_FORCE_OFF_realsmith_SiKi9Qj2Ou) + (g_QM9VDC[0]) - -95)/*TAG9:END:DRM_FORCE_OFF_realsmith_SiKi9Qj2Ou*/) {
        /*bef_stmt:17340*/
if (/*TAG10:STA*/((int)(realsmith_7F64KuNXRE((unsigned long)(bridge_is_on_realsmith_SiKi9Qj2Ou)+(-59), (unsigned long)(bridge_is_on_realsmith_SiKi9Qj2Ou)+(-64))+(int)(bridge_is_on_realsmith_SiKi9Qj2Ou)-(76))+bridge_is_on_realsmith_SiKi9Qj2Ou)/*TAG10:END:bridge_is_on_realsmith_SiKi9Qj2Ou*/)
            return 0;
/*aft_stmt:17340*/
    } else {
        /*bef_stmt:17363*/
if (!Tag11_realsmith_SiKi9Qj2Ou(/*int:17385:17385:17363:e*/bridge_is_on_realsmith_SiKi9Qj2Ou))
            return 1;
/*aft_stmt:17363*/
    }
g_QM9VDC[0] = -95 + (DRM_FORCE_OFF_realsmith_SiKi9Qj2Ou - (0));
/*aft_stmt:17370*/
/*aft_stmt:17370*/
    return -1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_p9zVhXXZDY(x) (x)
#define Tag2_realsmith_p9zVhXXZDY(x) (x)
#define Tag3_realsmith_p9zVhXXZDY(x) (x)
#define Tag4_realsmith_p9zVhXXZDY(x) (x)
#define Tag5_realsmith_p9zVhXXZDY(x) (x)
#define Tag6_realsmith_p9zVhXXZDY(x) (x)
#define Tag7_realsmith_p9zVhXXZDY(x) (x)
#include "stdlib.h"
int realsmith_p9zVhXXZDY(int hwirq_realsmith_p9zVhXXZDY, unsigned long mask_realsmith_p9zVhXXZDY, unsigned long map_realsmith_p9zVhXXZDY) {
    /*bef_stmt:17150*/
unsigned int intr_realsmith_p9zVhXXZDY = (unsigned int)Tag1_realsmith_p9zVhXXZDY(/*int:17282:17282:17150:e*/hwirq_realsmith_p9zVhXXZDY);
/*aft_stmt:17150*/
    /*bef_stmt:17179*/
unsigned long reg_realsmith_p9zVhXXZDY = Tag2_realsmith_p9zVhXXZDY(/*unsigned int:17282:17282:17179:e*/intr_realsmith_p9zVhXXZDY);
/*aft_stmt:17179*/
    /*bef_stmt:17241*/
/*bef_stmt:17241*/
unsigned long smask_realsmith_p9zVhXXZDY = (Tag3_realsmith_p9zVhXXZDY(/*unsigned long:17282:17282:17241:e*/mask_realsmith_p9zVhXXZDY) ? (1UL << Tag4_realsmith_p9zVhXXZDY(/*unsigned int:17282:17282:17241:e*/intr_realsmith_p9zVhXXZDY)) : 0);
/*aft_stmt:17241*/
/*aft_stmt:17241*/
    /*bef_stmt:17280*/
/*bef_stmt:17280*/
/*bef_stmt:17280*/
return (Tag5_realsmith_p9zVhXXZDY(/*unsigned long:17282:17282:17280:e*/reg_realsmith_p9zVhXXZDY) + Tag6_realsmith_p9zVhXXZDY(/*unsigned long:17282:17282:17280:e*/map_realsmith_p9zVhXXZDY) + Tag7_realsmith_p9zVhXXZDY(/*unsigned long:17282:17282:17280:e*/smask_realsmith_p9zVhXXZDY));
/*aft_stmt:17280*/
/*aft_stmt:17280*/
/*aft_stmt:17280*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_g9IMuOcECI(x) (x)
#define Tag2_realsmith_g9IMuOcECI(x) (x)
#define Tag3_realsmith_g9IMuOcECI(x) (x)
#include "stdlib.h"
struct kimage_15hsUo {
    int dummy_realsmith_g9IMuOcECI;
};
int realsmith_g9IMuOcECI(int kernel_len_realsmith_g9IMuOcECI, int initrd_len_realsmith_g9IMuOcECI, int cmdline_len_realsmith_g9IMuOcECI) {
    struct kimage_15hsUo image_realsmith_g9IMuOcECI;
    /*bef_stmt:17251*/
/*bef_stmt:17251*/
/*bef_stmt:17251*/
return (Tag1_realsmith_g9IMuOcECI(/*int:17253:17253:17251:e*/kernel_len_realsmith_g9IMuOcECI) > 0 && Tag2_realsmith_g9IMuOcECI(/*int:17253:17253:17251:e*/initrd_len_realsmith_g9IMuOcECI) > 0 && Tag3_realsmith_g9IMuOcECI(/*int:17253:17253:17251:e*/cmdline_len_realsmith_g9IMuOcECI) > 0) ? 1 : 0;
/*aft_stmt:17251*/
/*aft_stmt:17251*/
/*aft_stmt:17251*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_fprcCrTYpO(x) (x)
#define Tag2_realsmith_fprcCrTYpO(x) (x)
#define Tag3_realsmith_fprcCrTYpO(x) (x)
#define Tag4_realsmith_fprcCrTYpO(x) (x)
#define Tag5_realsmith_fprcCrTYpO(x) (x)
#include "stdbool.h"
struct as3722_rtc_bFnRiS {
    int irq_enable_realsmith_fprcCrTYpO;
    int alarm_irq_realsmith_fprcCrTYpO;
};
int realsmith_fprcCrTYpO(int irq_enable_realsmith_fprcCrTYpO, int alarm_irq_realsmith_fprcCrTYpO, unsigned int enabled_realsmith_fprcCrTYpO) {
    /*bef_stmt:730*/
/*bef_stmt:730*/
/*bef_stmt:730*/
/*bef_stmt:730*/
if (Tag1_realsmith_fprcCrTYpO(/*unsigned int:745:745:730:e*/enabled_realsmith_fprcCrTYpO) && !Tag2_realsmith_fprcCrTYpO(/*int:745:745:730:e*/irq_enable_realsmith_fprcCrTYpO)) {
        irq_enable_realsmith_fprcCrTYpO = 1;
    } else if (!Tag3_realsmith_fprcCrTYpO(/*unsigned int:745:745:730:e*/enabled_realsmith_fprcCrTYpO) && Tag4_realsmith_fprcCrTYpO(/*int:745:745:730:e*/irq_enable_realsmith_fprcCrTYpO)) {
        irq_enable_realsmith_fprcCrTYpO = 0;
    }
/*aft_stmt:730*/
/*aft_stmt:730*/
/*aft_stmt:730*/
/*aft_stmt:730*/
    /*bef_stmt:743*/
return Tag5_realsmith_fprcCrTYpO(/*int:745:745:743:e*/irq_enable_realsmith_fprcCrTYpO);
/*aft_stmt:743*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_BH2k0OYgxW(x) (x)
#define Tag2_realsmith_BH2k0OYgxW(x) (x)
#define Tag3_realsmith_BH2k0OYgxW(x) (x)
#include "stdlib.h"
struct snd_pcm_runtime_KDLkS0 {
    unsigned long hw_ptr_realsmith_BH2k0OYgxW;
    unsigned long appl_ptr_realsmith_BH2k0OYgxW;
};
int realsmith_BH2k0OYgxW(unsigned long hw_ptr_realsmith_BH2k0OYgxW) {
    struct snd_pcm_runtime_KDLkS0 runtime_realsmith_BH2k0OYgxW;
    /*bef_stmt:17171*/
runtime_realsmith_BH2k0OYgxW.hw_ptr_realsmith_BH2k0OYgxW = /*TAG1:STA*/((unsigned long)(realsmith_YeRFG4b7NT((unsigned long)(hw_ptr_realsmith_BH2k0OYgxW)+(6))+(unsigned long)(hw_ptr_realsmith_BH2k0OYgxW)-(60))+hw_ptr_realsmith_BH2k0OYgxW)/*TAG1:END:hw_ptr_realsmith_BH2k0OYgxW*/;
/*aft_stmt:17171*/
    /*bef_stmt:17210*/
runtime_realsmith_BH2k0OYgxW.appl_ptr_realsmith_BH2k0OYgxW = /*TAG2:STA*/((unsigned long)(realsmith_l5bJ8SKDTx((int)(runtime_realsmith_BH2k0OYgxW.hw_ptr_realsmith_BH2k0OYgxW)+(17))+(int)(runtime_realsmith_BH2k0OYgxW.hw_ptr_realsmith_BH2k0OYgxW)-(71))+runtime_realsmith_BH2k0OYgxW.hw_ptr_realsmith_BH2k0OYgxW)/*TAG2:END:runtime_realsmith_BH2k0OYgxW.hw_ptr_realsmith_BH2k0OYgxW*/;
/*aft_stmt:17210*/
    /*bef_stmt:17230*/
return /*TAG3:STA*/((runtime_realsmith_BH2k0OYgxW.appl_ptr_realsmith_BH2k0OYgxW) + (g_HO6910[1]) - 112)/*TAG3:END:runtime_realsmith_BH2k0OYgxW.appl_ptr_realsmith_BH2k0OYgxW*/;
g_HO6910[1] = 112 + (runtime_realsmith_BH2k0OYgxW.appl_ptr_realsmith_BH2k0OYgxW - (27));
/*aft_stmt:17230*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_fEbHEw0e3c(x) (x)
#define Tag2_realsmith_fEbHEw0e3c(x) (x)
#define Tag3_realsmith_fEbHEw0e3c(x) (x)
#define Tag4_realsmith_fEbHEw0e3c(x) (x)
#define Tag5_realsmith_fEbHEw0e3c(x) (x)
#include "stdint.h"
int realsmith_fEbHEw0e3c(int path_realsmith_fEbHEw0e3c) {
    int reg_nctl0_realsmith_fEbHEw0e3c = 0x0000000c;
    int reg_dpd_ctl0_realsmith_fEbHEw0e3c = 0;
    int reg_dpd_ctl0_s0_realsmith_fEbHEw0e3c = 0x30000080;
    int reg_dpd_ctl0_s1_realsmith_fEbHEw0e3c = 0x30000080;
    /*bef_stmt:2171*/
/*bef_stmt:2171*/
if (Tag1_realsmith_fEbHEw0e3c(/*int:2186:2186:2171:e*/path_realsmith_fEbHEw0e3c) == 0) {
        reg_dpd_ctl0_realsmith_fEbHEw0e3c &= ~0x01000000;
        /*bef_stmt:2111*/
reg_dpd_ctl0_realsmith_fEbHEw0e3c = Tag2_realsmith_fEbHEw0e3c(/*int:2186:2186:2111:e*/reg_dpd_ctl0_s0_realsmith_fEbHEw0e3c);
/*aft_stmt:2111*/
    } else if (Tag3_realsmith_fEbHEw0e3c(/*int:2186:2186:2171:e*/path_realsmith_fEbHEw0e3c) == 1) {
        reg_dpd_ctl0_realsmith_fEbHEw0e3c |= 0x01000000;
        /*bef_stmt:2159*/
reg_dpd_ctl0_realsmith_fEbHEw0e3c = Tag4_realsmith_fEbHEw0e3c(/*int:2186:2186:2159:e*/reg_dpd_ctl0_s1_realsmith_fEbHEw0e3c);
/*aft_stmt:2159*/
    }
/*aft_stmt:2171*/
/*aft_stmt:2171*/
    /*bef_stmt:2184*/
return Tag5_realsmith_fEbHEw0e3c(/*int:2186:2186:2184:e*/reg_dpd_ctl0_realsmith_fEbHEw0e3c);
/*aft_stmt:2184*/
}



#include "stdlib.h"
int realsmith_E6P8DV3MGv(int *tm_realsmith_E6P8DV3MGv, int *tc_realsmith_E6P8DV3MGv) {
    int status_realsmith_E6P8DV3MGv;
    int efi_runtime_lock_realsmith_E6P8DV3MGv = 1;
    if (efi_runtime_lock_realsmith_E6P8DV3MGv) {
        return -1;
    }
    efi_runtime_lock_realsmith_E6P8DV3MGv = 1;
    status_realsmith_E6P8DV3MGv = 0;
    if (tm_realsmith_E6P8DV3MGv != ((void*)0) && tc_realsmith_E6P8DV3MGv != ((void*)0)) {
        *tm_realsmith_E6P8DV3MGv = 123456;
        *tc_realsmith_E6P8DV3MGv = 789;
    } else {
        status_realsmith_E6P8DV3MGv = -1;
    }
    efi_runtime_lock_realsmith_E6P8DV3MGv = 0;
    return status_realsmith_E6P8DV3MGv;
}
int realsmith_proxy_rx54tVfpXd(int p_0_Hu2FgnF0XT, int p_1_CPIgMQsCDi) {
int proxy_5j3iayoheW[16] = { 20, 82, 22, p_0_Hu2FgnF0XT, 33, 4, p_0_Hu2FgnF0XT, p_0_Hu2FgnF0XT, p_0_Hu2FgnF0XT, 76, 8, 99, p_0_Hu2FgnF0XT, p_0_Hu2FgnF0XT, 26, 52 };
int proxy_ret_ZzGz8TQkcL = realsmith_E6P8DV3MGv(proxy_5j3iayoheW, &(p_1_CPIgMQsCDi));
return proxy_ret_ZzGz8TQkcL;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Bff1z0v8zy(x) (x)
#define Tag2_realsmith_Bff1z0v8zy(x) (x)
#include "stdlib.h"
int realsmith_Bff1z0v8zy(int err_realsmith_Bff1z0v8zy) {
    /*bef_stmt:17132*/
/*bef_stmt:17132*/
if (Tag1_realsmith_Bff1z0v8zy(/*int:17138:17138:17132:e*/err_realsmith_Bff1z0v8zy) < 0 && Tag2_realsmith_Bff1z0v8zy(/*int:17138:17138:17132:e*/err_realsmith_Bff1z0v8zy) != -13) {
        return -1;
    } else {
        return 0;
    }
/*aft_stmt:17132*/
/*aft_stmt:17132*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_fcP0y8xM8b(x) (x)
#define Tag2_realsmith_fcP0y8xM8b(x) (x)
#define Tag3_realsmith_fcP0y8xM8b(x) (x)
#include "stdlib.h"
struct bnad_rf7Ysa {
    int netdev_realsmith_fcP0y8xM8b;
    int enet_comp_realsmith_fcP0y8xM8b;
};
int realsmith_fcP0y8xM8b(int netdev_realsmith_fcP0y8xM8b, int enet_comp_realsmith_fcP0y8xM8b) {
    struct bnad_rf7Ysa bnad_instance_realsmith_fcP0y8xM8b;
    /*bef_stmt:17189*/
bnad_instance_realsmith_fcP0y8xM8b.netdev_realsmith_fcP0y8xM8b = Tag1_realsmith_fcP0y8xM8b(/*int:17279:17279:17189:e*/netdev_realsmith_fcP0y8xM8b);
/*aft_stmt:17189*/
    /*bef_stmt:17222*/
bnad_instance_realsmith_fcP0y8xM8b.enet_comp_realsmith_fcP0y8xM8b = /*TAG2:STA*/((int)(realsmith_proxy_ap5llAMXZt((int)(enet_comp_realsmith_fcP0y8xM8b)+(-94), (char)(enet_comp_realsmith_fcP0y8xM8b)+(-37))+(int)(enet_comp_realsmith_fcP0y8xM8b)-(114))+enet_comp_realsmith_fcP0y8xM8b)/*TAG2:END:enet_comp_realsmith_fcP0y8xM8b*/;
/*aft_stmt:17222*/
    bnad_instance_realsmith_fcP0y8xM8b.netdev_realsmith_fcP0y8xM8b = 0;
    bnad_instance_realsmith_fcP0y8xM8b.enet_comp_realsmith_fcP0y8xM8b += 1;
    /*bef_stmt:17277*/
return Tag3_realsmith_fcP0y8xM8b(/*int:17279:17279:17277:e*/bnad_instance_realsmith_fcP0y8xM8b.enet_comp_realsmith_fcP0y8xM8b);
/*aft_stmt:17277*/
}



#include "stdint.h"
int realsmith_JSQDP1yVAj(int irq_realsmith_JSQDP1yVAj, int vmode_realsmith_JSQDP1yVAj, int pan_display_realsmith_JSQDP1yVAj, int pan_offset_realsmith_JSQDP1yVAj, int count_realsmith_JSQDP1yVAj, int *wait_realsmith_JSQDP1yVAj) {
    unsigned short int tmp_realsmith_JSQDP1yVAj = 0;
    int retval_realsmith_JSQDP1yVAj = 0;
    tmp_realsmith_JSQDP1yVAj = (vmode_realsmith_JSQDP1yVAj & 1) ? 1 : 2;
    if (tmp_realsmith_JSQDP1yVAj == 0) {
        return (0);
    }
    if (pan_display_realsmith_JSQDP1yVAj) {
        pan_display_realsmith_JSQDP1yVAj = 0;
    }
    count_realsmith_JSQDP1yVAj++;
    (*wait_realsmith_JSQDP1yVAj)++;
    return (1);
}
int realsmith_proxy_K1n7uRCUYT(int p_0_mg0apmFZ55, int p_1_kDcyxSkWGU, int p_2_ONHflvyzMp, int p_3_kzGp7auKQD, int p_4_xkT8YXt7l5, int p_5_uB71cro3GA) {
int proxy_2QullKYxSf[15] = { 44, 97, p_5_uB71cro3GA, p_5_uB71cro3GA, p_5_uB71cro3GA, 15, 54, 40, 4, p_5_uB71cro3GA, p_5_uB71cro3GA, p_5_uB71cro3GA, p_5_uB71cro3GA, p_5_uB71cro3GA, 31 };
int proxy_ret_c6ISf8Kl3c = realsmith_JSQDP1yVAj(p_0_mg0apmFZ55, p_1_kDcyxSkWGU, p_2_ONHflvyzMp, p_3_kzGp7auKQD, p_4_xkT8YXt7l5, proxy_2QullKYxSf);
return proxy_ret_c6ISf8Kl3c;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_cGQoETEPjq(x) (x)
#define Tag2_realsmith_cGQoETEPjq(x) (x)
#define Tag3_realsmith_cGQoETEPjq(x) (x)
#include "stdlib.h"
int realsmith_cGQoETEPjq(int inode_flag_realsmith_cGQoETEPjq, int lblocks_realsmith_cGQoETEPjq, int pextents_realsmith_cGQoETEPjq) {
    /*bef_stmt:17165*/
if (!(Tag1_realsmith_cGQoETEPjq(/*int:17190:17190:17165:e*/inode_flag_realsmith_cGQoETEPjq) & 1)) {
        /*bef_stmt:17160*/
return (Tag2_realsmith_cGQoETEPjq(/*int:17190:17190:17160:e*/lblocks_realsmith_cGQoETEPjq) + 1);
/*aft_stmt:17160*/
    }
/*aft_stmt:17165*/
    /*bef_stmt:17188*/
return (/*TAG3:STA*/((int)(realsmith_OawZz94YhZ((int)(pextents_realsmith_cGQoETEPjq)+(14), (int)(pextents_realsmith_cGQoETEPjq)+(-30))+(int)(pextents_realsmith_cGQoETEPjq)-(54))+pextents_realsmith_cGQoETEPjq)/*TAG3:END:pextents_realsmith_cGQoETEPjq*/ + 1);
/*aft_stmt:17188*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_0ekBxEkzlx(x) (x)
#include "stdlib.h"
int realsmith_0ekBxEkzlx(int evtchn_realsmith_0ekBxEkzlx) {
    /*bef_stmt:17107*/
if (/*TAG1:STA*/((int)(realsmith_hbZvOXvRfm(81, 72)-(178))+evtchn_realsmith_0ekBxEkzlx)/*TAG1:END:evtchn_realsmith_0ekBxEkzlx*/ != 0) {
        evtchn_realsmith_0ekBxEkzlx = -1;
    }
/*aft_stmt:17107*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_dSbIVN692L(x) (x)
#define Tag2_realsmith_dSbIVN692L(x) (x)
#include "stdbool.h"
int realsmith_dSbIVN692L(int ucode_capa_realsmith_dSbIVN692L, int hw_csum_disable_realsmith_dSbIVN692L) {
    /*bef_stmt:620*/
/*bef_stmt:620*/
return (Tag1_realsmith_dSbIVN692L(/*int:622:622:620:e*/ucode_capa_realsmith_dSbIVN692L) & 1) && !Tag2_realsmith_dSbIVN692L(/*int:622:622:620:e*/hw_csum_disable_realsmith_dSbIVN692L);
/*aft_stmt:620*/
/*aft_stmt:620*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_4hKZUznqgV(x) (x)
#define Tag2_realsmith_4hKZUznqgV(x) (x)
#define Tag3_realsmith_4hKZUznqgV(x) (x)
#define Tag4_realsmith_4hKZUznqgV(x) (x)
#include "stdlib.h"
struct qede_ptp_g4I6L7 {
    int tx_skb_realsmith_4hKZUznqgV;
    unsigned long work_realsmith_4hKZUznqgV;
    unsigned long ptp_tx_start_realsmith_4hKZUznqgV;
};
struct qede_dev_g4I6L7 {
    int ptp_skip_txts_realsmith_4hKZUznqgV;
    int flags_realsmith_4hKZUznqgV;
    struct qede_ptp_g4I6L7 *ptp_realsmith_4hKZUznqgV;
};
int realsmith_4hKZUznqgV(int ptp_ptr_realsmith_4hKZUznqgV, int skb_tx_flags_realsmith_4hKZUznqgV, int flags_realsmith_4hKZUznqgV) {
    struct qede_ptp_g4I6L7 ptp_realsmith_4hKZUznqgV;
    ptp_realsmith_4hKZUznqgV.tx_skb_realsmith_4hKZUznqgV = 0;
    ptp_realsmith_4hKZUznqgV.work_realsmith_4hKZUznqgV = 0;
    ptp_realsmith_4hKZUznqgV.ptp_tx_start_realsmith_4hKZUznqgV = 0;
    struct qede_dev_g4I6L7 edev_realsmith_4hKZUznqgV;
    edev_realsmith_4hKZUznqgV.ptp_skip_txts_realsmith_4hKZUznqgV = 0;
    /*bef_stmt:17425*/
edev_realsmith_4hKZUznqgV.flags_realsmith_4hKZUznqgV = Tag1_realsmith_4hKZUznqgV(/*int:17770:17770:17425:e*/flags_realsmith_4hKZUznqgV);
/*aft_stmt:17425*/
    edev_realsmith_4hKZUznqgV.ptp_realsmith_4hKZUznqgV = &ptp_realsmith_4hKZUznqgV;
    if (!edev_realsmith_4hKZUznqgV.ptp_realsmith_4hKZUznqgV) {
        return -1;
    }
    /*bef_stmt:17529*/
if (Tag2_realsmith_4hKZUznqgV(/*int:17770:17770:17529:e*/edev_realsmith_4hKZUznqgV.flags_realsmith_4hKZUznqgV) & 1) {
        edev_realsmith_4hKZUznqgV.ptp_skip_txts_realsmith_4hKZUznqgV++;
        return -2;
    }
/*aft_stmt:17529*/
    edev_realsmith_4hKZUznqgV.flags_realsmith_4hKZUznqgV |= 1;
    /*bef_stmt:17758*/
/*bef_stmt:17758*/
if (!(Tag3_realsmith_4hKZUznqgV(/*int:17770:17770:17758:e*/edev_realsmith_4hKZUznqgV.flags_realsmith_4hKZUznqgV) & 2)) {
        edev_realsmith_4hKZUznqgV.ptp_skip_txts_realsmith_4hKZUznqgV++;
        edev_realsmith_4hKZUznqgV.flags_realsmith_4hKZUznqgV &= ~1;
        return -3;
    } else if (Tag4_realsmith_4hKZUznqgV(/*int:17770:17770:17758:e*/ptp_realsmith_4hKZUznqgV.tx_skb_realsmith_4hKZUznqgV)) {
        edev_realsmith_4hKZUznqgV.ptp_skip_txts_realsmith_4hKZUznqgV++;
        edev_realsmith_4hKZUznqgV.flags_realsmith_4hKZUznqgV &= ~1;
        return -4;
    } else {
        skb_tx_flags_realsmith_4hKZUznqgV |= 4;
        ptp_realsmith_4hKZUznqgV.tx_skb_realsmith_4hKZUznqgV = 1;
        ptp_realsmith_4hKZUznqgV.ptp_tx_start_realsmith_4hKZUznqgV = 0;
    }
/*aft_stmt:17758*/
/*aft_stmt:17758*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_PrMVeTVnkt(x) (x)
#define Tag2_realsmith_PrMVeTVnkt(x) (x)
#define Tag3_realsmith_PrMVeTVnkt(x) (x)
#define Tag4_realsmith_PrMVeTVnkt(x) (x)
#define Tag5_realsmith_PrMVeTVnkt(x) (x)
#define Tag6_realsmith_PrMVeTVnkt(x) (x)
#define Tag7_realsmith_PrMVeTVnkt(x) (x)
#define Tag8_realsmith_PrMVeTVnkt(x) (x)
#define Tag9_realsmith_PrMVeTVnkt(x) (x)
#define Tag10_realsmith_PrMVeTVnkt(x) (x)
#define Tag11_realsmith_PrMVeTVnkt(x) (x)
#define Tag12_realsmith_PrMVeTVnkt(x) (x)
#define Tag13_realsmith_PrMVeTVnkt(x) (x)
#define Tag14_realsmith_PrMVeTVnkt(x) (x)
#define Tag15_realsmith_PrMVeTVnkt(x) (x)
#define Tag16_realsmith_PrMVeTVnkt(x) (x)
#define Tag17_realsmith_PrMVeTVnkt(x) (x)
#include "stdlib.h"
#include "string.h"
struct rx_desc_NCPI43 {
    long next_desc_ptr_realsmith_PrMVeTVnkt;
};
int realsmith_PrMVeTVnkt(int rx_ring_size_realsmith_PrMVeTVnkt, int rx_desc_sram_size_realsmith_PrMVeTVnkt, long rx_desc_sram_addr_realsmith_PrMVeTVnkt, int index_realsmith_PrMVeTVnkt) {
    struct rx_desc_NCPI43 *rx_desc_area_realsmith_PrMVeTVnkt;
    long rx_desc_dma_realsmith_PrMVeTVnkt;
    int size_realsmith_PrMVeTVnkt;
    int i_realsmith_PrMVeTVnkt;
    /*bef_stmt:25095*/
size_realsmith_PrMVeTVnkt = Tag1_realsmith_PrMVeTVnkt(/*int:25628:25628:25095:e*/rx_ring_size_realsmith_PrMVeTVnkt) * sizeof(struct rx_desc_NCPI43);
/*aft_stmt:25095*/
    /*bef_stmt:25274*/
/*bef_stmt:25274*/
/*bef_stmt:25274*/
if (Tag2_realsmith_PrMVeTVnkt(/*int:25628:25628:25274:e*/index_realsmith_PrMVeTVnkt) == 0 && Tag3_realsmith_PrMVeTVnkt(/*int:25628:25628:25274:e*/size_realsmith_PrMVeTVnkt) <= Tag4_realsmith_PrMVeTVnkt(/*int:25628:25628:25274:e*/rx_desc_sram_size_realsmith_PrMVeTVnkt)) {
        /*bef_stmt:25168*/
rx_desc_area_realsmith_PrMVeTVnkt = (struct rx_desc_NCPI43 *)Tag5_realsmith_PrMVeTVnkt(/*long:25628:25628:25168:e*/rx_desc_sram_addr_realsmith_PrMVeTVnkt);
/*aft_stmt:25168*/
        /*bef_stmt:25183*/
rx_desc_dma_realsmith_PrMVeTVnkt = Tag6_realsmith_PrMVeTVnkt(/*long:25628:25628:25183:e*/rx_desc_sram_addr_realsmith_PrMVeTVnkt);
/*aft_stmt:25183*/
    } else {
        /*bef_stmt:25243*/
rx_desc_area_realsmith_PrMVeTVnkt = (struct rx_desc_NCPI43 *)(malloc(Tag7_realsmith_PrMVeTVnkt(/*int:25628:25628:25243:e*/size_realsmith_PrMVeTVnkt)));
/*aft_stmt:25243*/
        rx_desc_dma_realsmith_PrMVeTVnkt = (long)rx_desc_area_realsmith_PrMVeTVnkt;
    }
/*aft_stmt:25274*/
/*aft_stmt:25274*/
/*aft_stmt:25274*/
    if (rx_desc_area_realsmith_PrMVeTVnkt == ((void*)0)) {
        return -1;
    }
    /*bef_stmt:25375*/
(memset(rx_desc_area_realsmith_PrMVeTVnkt, 0, Tag8_realsmith_PrMVeTVnkt(/*int:25628:25628:25375:e*/size_realsmith_PrMVeTVnkt)));
/*aft_stmt:25375*/
    /*bef_stmt:25536*/
/*bef_stmt:25536*/
for (i_realsmith_PrMVeTVnkt = 0; Tag9_realsmith_PrMVeTVnkt(/*int:25628:25628:25536:e*/i_realsmith_PrMVeTVnkt) < Tag10_realsmith_PrMVeTVnkt(/*int:25628:25628:25536:e*/rx_ring_size_realsmith_PrMVeTVnkt); i_realsmith_PrMVeTVnkt++) {
        /*bef_stmt:25462*/
/*bef_stmt:25462*/
int nexti_realsmith_PrMVeTVnkt = (Tag11_realsmith_PrMVeTVnkt(/*int:25628:25628:25462:e*/i_realsmith_PrMVeTVnkt) + 1) % Tag12_realsmith_PrMVeTVnkt(/*int:25628:25628:25462:e*/rx_ring_size_realsmith_PrMVeTVnkt);
/*aft_stmt:25462*/
/*aft_stmt:25462*/
        /*bef_stmt:25528*/
/*bef_stmt:25528*/
rx_desc_area_realsmith_PrMVeTVnkt[i_realsmith_PrMVeTVnkt].next_desc_ptr_realsmith_PrMVeTVnkt = Tag13_realsmith_PrMVeTVnkt(/*long:25628:25628:25528:e*/rx_desc_dma_realsmith_PrMVeTVnkt) + Tag14_realsmith_PrMVeTVnkt(/*int:25532:25628:25528:e*/nexti_realsmith_PrMVeTVnkt) * sizeof(struct rx_desc_NCPI43);
/*aft_stmt:25528*/
/*aft_stmt:25528*/
    }
/*aft_stmt:25536*/
/*aft_stmt:25536*/
    /*bef_stmt:25618*/
/*bef_stmt:25618*/
/*bef_stmt:25618*/
if (Tag15_realsmith_PrMVeTVnkt(/*int:25628:25628:25618:e*/index_realsmith_PrMVeTVnkt) != 0 || Tag16_realsmith_PrMVeTVnkt(/*int:25628:25628:25618:e*/size_realsmith_PrMVeTVnkt) > Tag17_realsmith_PrMVeTVnkt(/*int:25628:25628:25618:e*/rx_desc_sram_size_realsmith_PrMVeTVnkt)) {
        (free(rx_desc_area_realsmith_PrMVeTVnkt));
    }
/*aft_stmt:25618*/
/*aft_stmt:25618*/
/*aft_stmt:25618*/
    return 0;
}



#include "stdint.h"
#include "stdlib.h"
int realsmith_W0xafQNtpx(int pdev_realsmith_W0xafQNtpx, int pci_command_realsmith_W0xafQNtpx, int alx_master_realsmith_W0xafQNtpx, int alx_wol0_realsmith_W0xafQNtpx, int alx_pdll_trans1_realsmith_W0xafQNtpx, int alx_ue_svrt_realsmith_W0xafQNtpx, int alx_master_waken_25m_realsmith_W0xafQNtpx, int alx_master_pclksel_srds_realsmith_W0xafQNtpx, int alx_pdll_trans1_d3pll_off_en_realsmith_W0xafQNtpx, int alx_ue_svrt_dlprot_err_realsmith_W0xafQNtpx, int alx_ue_svrt_fcprot_err_realsmith_W0xafQNtpx) {
    unsigned int val_realsmith_W0xafQNtpx;
    unsigned short int val16_realsmith_W0xafQNtpx;
    val16_realsmith_W0xafQNtpx = pci_command_realsmith_W0xafQNtpx;
    if (!(val16_realsmith_W0xafQNtpx & 1) || (val16_realsmith_W0xafQNtpx & 2)) {
        val16_realsmith_W0xafQNtpx = (val16_realsmith_W0xafQNtpx | 1) & ~2;
        pci_command_realsmith_W0xafQNtpx = val16_realsmith_W0xafQNtpx;
    }
    val_realsmith_W0xafQNtpx = alx_wol0_realsmith_W0xafQNtpx;
    alx_wol0_realsmith_W0xafQNtpx = 0;
    val_realsmith_W0xafQNtpx = alx_pdll_trans1_realsmith_W0xafQNtpx;
    alx_pdll_trans1_realsmith_W0xafQNtpx = val_realsmith_W0xafQNtpx & ~alx_pdll_trans1_d3pll_off_en_realsmith_W0xafQNtpx;
    val_realsmith_W0xafQNtpx = alx_ue_svrt_realsmith_W0xafQNtpx;
    val_realsmith_W0xafQNtpx &= ~(alx_ue_svrt_dlprot_err_realsmith_W0xafQNtpx | alx_ue_svrt_fcprot_err_realsmith_W0xafQNtpx);
    alx_ue_svrt_realsmith_W0xafQNtpx = val_realsmith_W0xafQNtpx;
    val_realsmith_W0xafQNtpx = alx_master_realsmith_W0xafQNtpx;
    if ((val_realsmith_W0xafQNtpx & alx_master_waken_25m_realsmith_W0xafQNtpx) == 0 || (val_realsmith_W0xafQNtpx & alx_master_pclksel_srds_realsmith_W0xafQNtpx) == 0) {
        alx_master_realsmith_W0xafQNtpx = val_realsmith_W0xafQNtpx | alx_master_pclksel_srds_realsmith_W0xafQNtpx | alx_master_waken_25m_realsmith_W0xafQNtpx;
    }
    for (volatile int i_realsmith_W0xafQNtpx = 0; i_realsmith_W0xafQNtpx < 10; i_realsmith_W0xafQNtpx++);
    return 0;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Q03lRTHoVF(x) (x)
#define Tag2_realsmith_Q03lRTHoVF(x) (x)
#include "stdlib.h"
struct panel_drv_data_KaOGgV {
    int channel_realsmith_Q03lRTHoVF;
};
struct omap_dss_device_KaOGgV {
    struct {
        struct {
            void (*release_vc_realsmith_Q03lRTHoVF)(struct omap_dss_device_KaOGgV*, int);
        } dsi_realsmith_Q03lRTHoVF;
    } ops_realsmith_Q03lRTHoVF;
};
int realsmith_Q03lRTHoVF(int src_channel_realsmith_Q03lRTHoVF, int dst_channel_realsmith_Q03lRTHoVF) {
    struct panel_drv_data_KaOGgV ddata_realsmith_Q03lRTHoVF;
    /*bef_stmt:17408*/
ddata_realsmith_Q03lRTHoVF.channel_realsmith_Q03lRTHoVF = /*TAG1:STA*/((int)(realsmith_jTMQ5DzqHK((int)(dst_channel_realsmith_Q03lRTHoVF)+(0), (unsigned long)(dst_channel_realsmith_Q03lRTHoVF)+(-32), (unsigned long)(dst_channel_realsmith_Q03lRTHoVF)+(38))+(int)(dst_channel_realsmith_Q03lRTHoVF)-(38))+dst_channel_realsmith_Q03lRTHoVF)/*TAG1:END:dst_channel_realsmith_Q03lRTHoVF*/;
/*aft_stmt:17408*/
    struct omap_dss_device_KaOGgV src_realsmith_Q03lRTHoVF;
    src_realsmith_Q03lRTHoVF.ops_realsmith_Q03lRTHoVF.dsi_realsmith_Q03lRTHoVF.release_vc_realsmith_Q03lRTHoVF = ((void*)0);
    if (src_realsmith_Q03lRTHoVF.ops_realsmith_Q03lRTHoVF.dsi_realsmith_Q03lRTHoVF.release_vc_realsmith_Q03lRTHoVF) {
        /*bef_stmt:17575*/
(src_realsmith_Q03lRTHoVF.ops_realsmith_Q03lRTHoVF.dsi_realsmith_Q03lRTHoVF.release_vc_realsmith_Q03lRTHoVF(&src_realsmith_Q03lRTHoVF, Tag2_realsmith_Q03lRTHoVF(/*int:17592:17592:17575:e*/ddata_realsmith_Q03lRTHoVF.channel_realsmith_Q03lRTHoVF)));
/*aft_stmt:17575*/
    }
    return 0;
}



#include "stdlib.h"
struct dsos_Bt8hDt {
    int lock_realsmith_Qc81Cfgr31; // Placeholder for lock, since we cannot use actual locks in a pure function
};
int realsmith_Qc81Cfgr31(int lock_realsmith_Qc81Cfgr31, const char *name_realsmith_Qc81Cfgr31) {
    int result_realsmith_Qc81Cfgr31 = 0;
    for (int i_realsmith_Qc81Cfgr31 = 0; name_realsmith_Qc81Cfgr31[i_realsmith_Qc81Cfgr31] != '\0'; i_realsmith_Qc81Cfgr31++) {
        result_realsmith_Qc81Cfgr31 += name_realsmith_Qc81Cfgr31[i_realsmith_Qc81Cfgr31] * (i_realsmith_Qc81Cfgr31 + 1);
    }
    return result_realsmith_Qc81Cfgr31 + lock_realsmith_Qc81Cfgr31;
}
int realsmith_proxy_DqsFLMoOJT(int p_0_sXtLPAaTVh, char p_1_e14Ih0tzBe) {
char proxy_IpoSc7brKt[17] = { p_1_e14Ih0tzBe, 0, 70, p_1_e14Ih0tzBe, 54, 55, 87, 61, 81, p_1_e14Ih0tzBe, 47, p_1_e14Ih0tzBe, p_1_e14Ih0tzBe, p_1_e14Ih0tzBe, p_1_e14Ih0tzBe, p_1_e14Ih0tzBe, 79 };
int proxy_ret_igdwXsz3C9 = realsmith_Qc81Cfgr31(p_0_sXtLPAaTVh, proxy_IpoSc7brKt);
return proxy_ret_igdwXsz3C9;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_99CFiazXGG(x) (x)
#define Tag2_realsmith_99CFiazXGG(x) (x)
#define Tag3_realsmith_99CFiazXGG(x) (x)
#define Tag4_realsmith_99CFiazXGG(x) (x)
#define Tag5_realsmith_99CFiazXGG(x) (x)
#define Tag6_realsmith_99CFiazXGG(x) (x)
#include "stdbool.h"
int realsmith_99CFiazXGG(int dev_realsmith_99CFiazXGG, int spimem_realsmith_99CFiazXGG, int read_realsmith_99CFiazXGG, int write_realsmith_99CFiazXGG, int read_reg_realsmith_99CFiazXGG, int write_reg_realsmith_99CFiazXGG) {
    /*bef_stmt:793*/
/*bef_stmt:793*/
/*bef_stmt:793*/
/*bef_stmt:793*/
/*bef_stmt:793*/
/*bef_stmt:793*/
if (Tag1_realsmith_99CFiazXGG(/*int:803:803:793:e*/dev_realsmith_99CFiazXGG) == 0 || (Tag2_realsmith_99CFiazXGG(/*int:803:803:793:e*/spimem_realsmith_99CFiazXGG) == 0 && (Tag3_realsmith_99CFiazXGG(/*int:803:803:793:e*/read_realsmith_99CFiazXGG) == 0 || Tag4_realsmith_99CFiazXGG(/*int:803:803:793:e*/write_realsmith_99CFiazXGG) == 0 || Tag5_realsmith_99CFiazXGG(/*int:803:803:793:e*/read_reg_realsmith_99CFiazXGG) == 0 || Tag6_realsmith_99CFiazXGG(/*int:803:803:793:e*/write_reg_realsmith_99CFiazXGG) == 0))) {
        return -22;
    }
/*aft_stmt:793*/
/*aft_stmt:793*/
/*aft_stmt:793*/
/*aft_stmt:793*/
/*aft_stmt:793*/
/*aft_stmt:793*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_fwULidfbs6(x) (x)
#define Tag2_realsmith_fwULidfbs6(x) (x)
#include "stdlib.h"
int realsmith_fwULidfbs6(int cmd_realsmith_fwULidfbs6, int value_realsmith_fwULidfbs6, int index_realsmith_fwULidfbs6, int len_realsmith_fwULidfbs6) {
    /*bef_stmt:17189*/
void *dmadata_realsmith_fwULidfbs6 = (malloc(Tag1_realsmith_fwULidfbs6(/*int:17293:17293:17189:e*/len_realsmith_fwULidfbs6)));
/*aft_stmt:17189*/
    int ret_realsmith_fwULidfbs6 = -1;
    if (!dmadata_realsmith_fwULidfbs6)
        return -1;
    ret_realsmith_fwULidfbs6 = 0;
    (free(dmadata_realsmith_fwULidfbs6));
    /*bef_stmt:17291*/
return Tag2_realsmith_fwULidfbs6(/*int:17293:17293:17291:e*/ret_realsmith_fwULidfbs6);
/*aft_stmt:17291*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_136Ac56RWR(x) (x)
#define Tag2_realsmith_136Ac56RWR(x) (x)
#include "stdint.h"
struct netdev_private_ww4mm3 {
    unsigned int msg_enable_realsmith_136Ac56RWR;
};
unsigned int realsmith_136Ac56RWR(unsigned int msg_enable_realsmith_136Ac56RWR) {
    struct netdev_private_ww4mm3 np_realsmith_136Ac56RWR;
    /*bef_stmt:2041*/
np_realsmith_136Ac56RWR.msg_enable_realsmith_136Ac56RWR = /*TAG1:STA*/((unsigned int)(realsmith_proxy_Y7sPIGiurf((unsigned int)(msg_enable_realsmith_136Ac56RWR)+(84), (unsigned int)(msg_enable_realsmith_136Ac56RWR)+(58), (unsigned int)(msg_enable_realsmith_136Ac56RWR)+(-6), (unsigned int)(msg_enable_realsmith_136Ac56RWR)+(7), (unsigned int)(msg_enable_realsmith_136Ac56RWR)+(54))+(int)(msg_enable_realsmith_136Ac56RWR)-(13))+msg_enable_realsmith_136Ac56RWR)/*TAG1:END:msg_enable_realsmith_136Ac56RWR*/;
/*aft_stmt:2041*/
    /*bef_stmt:2072*/
return /*TAG2:STA*/((unsigned int)(realsmith_proxy_0bptUvgjAL((char)(np_realsmith_136Ac56RWR.msg_enable_realsmith_136Ac56RWR)+(15))+(int)(np_realsmith_136Ac56RWR.msg_enable_realsmith_136Ac56RWR)-(12))+np_realsmith_136Ac56RWR.msg_enable_realsmith_136Ac56RWR)/*TAG2:END:np_realsmith_136Ac56RWR.msg_enable_realsmith_136Ac56RWR*/;
/*aft_stmt:2072*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_cAChPSU1uJ(x) (x)
#include "stdbool.h"
int realsmith_cAChPSU1uJ(int reset_mask_realsmith_cAChPSU1uJ) {
    /*bef_stmt:619*/
if (!(/*TAG1:STA*/((int)(realsmith_nhanzSAdIP((int)(reset_mask_realsmith_cAChPSU1uJ)+(42))+(int)(reset_mask_realsmith_cAChPSU1uJ)-(183))+reset_mask_realsmith_cAChPSU1uJ)/*TAG1:END:reset_mask_realsmith_cAChPSU1uJ*/ & (0x4 |
                        0x1 |
                        0x2))) {
        return 0;
    }
/*aft_stmt:619*/
    return 1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_klrR0e1wtl(x) (x)
#include "stdlib.h"
struct l2t_entry_7Evi81 {
    int refcnt_realsmith_klrR0e1wtl;
};
int realsmith_klrR0e1wtl(int refcnt_realsmith_klrR0e1wtl) {
    struct l2t_entry_7Evi81 e_realsmith_klrR0e1wtl;
    /*bef_stmt:17151*/
e_realsmith_klrR0e1wtl.refcnt_realsmith_klrR0e1wtl = Tag1_realsmith_klrR0e1wtl(/*int:17206:17206:17151:e*/refcnt_realsmith_klrR0e1wtl);
/*aft_stmt:17151*/
    if (--e_realsmith_klrR0e1wtl.refcnt_realsmith_klrR0e1wtl == 0) {
        return 1;
    }
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_dS0SzhtQmx(x) (x)
#define Tag2_realsmith_dS0SzhtQmx(x) (x)
#define Tag3_realsmith_dS0SzhtQmx(x) (x)
#define Tag4_realsmith_dS0SzhtQmx(x) (x)
#define Tag5_realsmith_dS0SzhtQmx(x) (x)
#include "stdlib.h"
int realsmith_dS0SzhtQmx(int fifo_irq_realsmith_dS0SzhtQmx, int fifo_pclk_realsmith_dS0SzhtQmx, int fifo_map_realsmith_dS0SzhtQmx, int fifo_arb_realsmith_dS0SzhtQmx, int runtime_buffer_bytes_realsmith_dS0SzhtQmx, int runtime_period_bytes_realsmith_dS0SzhtQmx) {
    int ret_realsmith_dS0SzhtQmx;
    /*bef_stmt:17230*/
if (Tag1_realsmith_dS0SzhtQmx(/*int:17430:17430:17230:e*/runtime_buffer_bytes_realsmith_dS0SzhtQmx) % 16 != 0) {
        return -1;
    }
/*aft_stmt:17230*/
    /*bef_stmt:17269*/
if (Tag2_realsmith_dS0SzhtQmx(/*int:17430:17430:17269:e*/runtime_period_bytes_realsmith_dS0SzhtQmx) % 16 != 0) {
        return -1;
    }
/*aft_stmt:17269*/
    /*bef_stmt:17300*/
if (Tag3_realsmith_dS0SzhtQmx(/*int:17430:17430:17300:e*/fifo_irq_realsmith_dS0SzhtQmx) < 0) {
        return -1;
    }
/*aft_stmt:17300*/
    /*bef_stmt:17331*/
if (Tag4_realsmith_dS0SzhtQmx(/*int:17430:17430:17331:e*/fifo_pclk_realsmith_dS0SzhtQmx) < 0) {
        return -1;
    }
/*aft_stmt:17331*/
    fifo_map_realsmith_dS0SzhtQmx |= (1 << 1);
    fifo_map_realsmith_dS0SzhtQmx &= ~(1 << 0);
    /*bef_stmt:17420*/
if (Tag5_realsmith_dS0SzhtQmx(/*int:17430:17430:17420:e*/fifo_arb_realsmith_dS0SzhtQmx) < 0) {
        return -1;
    }
/*aft_stmt:17420*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_bbmgzZrcwi(x) (x)
#define Tag2_realsmith_bbmgzZrcwi(x) (x)
#define Tag3_realsmith_bbmgzZrcwi(x) (x)
#define Tag4_realsmith_bbmgzZrcwi(x) (x)
#include "stdbool.h"
static inline int realsmith_bbmgzZrcwi(int msgtype_realsmith_bbmgzZrcwi) {
    /*bef_stmt:599*/
int msgindex_realsmith_bbmgzZrcwi = /*TAG1:STA*/((int)(realsmith_proxy_DqsFLMoOJT((int)(msgtype_realsmith_bbmgzZrcwi)+(-30), (char)(msgtype_realsmith_bbmgzZrcwi)+(60))+(int)(msgtype_realsmith_bbmgzZrcwi)-(126))+msgtype_realsmith_bbmgzZrcwi)/*TAG1:END:msgtype_realsmith_bbmgzZrcwi*/ - 0;
/*aft_stmt:599*/
    /*bef_stmt:648*/
/*bef_stmt:648*/
if (Tag2_realsmith_bbmgzZrcwi(/*int:661:661:648:e*/msgindex_realsmith_bbmgzZrcwi) < 0 || Tag3_realsmith_bbmgzZrcwi(/*int:661:661:648:e*/msgindex_realsmith_bbmgzZrcwi) >= 256) {
        return -1;
    }
/*aft_stmt:648*/
/*aft_stmt:648*/
    /*bef_stmt:659*/
return /*TAG4:STA*/((int)(realsmith_99CFiazXGG((int)(msgindex_realsmith_bbmgzZrcwi)+(-18), (int)(msgindex_realsmith_bbmgzZrcwi)+(47), (int)(msgindex_realsmith_bbmgzZrcwi)+(67), (int)(msgindex_realsmith_bbmgzZrcwi)+(15), (int)(msgindex_realsmith_bbmgzZrcwi)+(-28), (int)(msgindex_realsmith_bbmgzZrcwi)+(-24))+(int)(msgindex_realsmith_bbmgzZrcwi)-(32))+msgindex_realsmith_bbmgzZrcwi)/*TAG4:END:msgindex_realsmith_bbmgzZrcwi*/;
/*aft_stmt:659*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_lHLh6Fhhvp(x) (x)
#define Tag2_realsmith_lHLh6Fhhvp(x) (x)
#include "stdlib.h"
int realsmith_lHLh6Fhhvp(int reg_msc_value_realsmith_lHLh6Fhhvp) {
    /*bef_stmt:17095*/
if (Tag1_realsmith_lHLh6Fhhvp(/*int:17147:17147:17095:e*/reg_msc_value_realsmith_lHLh6Fhhvp) & 1)
        return 0;
/*aft_stmt:17095*/
    reg_msc_value_realsmith_lHLh6Fhhvp |= 1;
    /*bef_stmt:17134*/
if (Tag2_realsmith_lHLh6Fhhvp(/*int:17147:17147:17134:e*/reg_msc_value_realsmith_lHLh6Fhhvp) & 1)
        return 0;
/*aft_stmt:17134*/
    return -5;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_pisbV0mOo9(x) (x)
#define Tag2_realsmith_pisbV0mOo9(x) (x)
#define Tag3_realsmith_pisbV0mOo9(x) (x)
#define Tag4_realsmith_pisbV0mOo9(x) (x)
#define Tag5_realsmith_pisbV0mOo9(x) (x)
#define Tag6_realsmith_pisbV0mOo9(x) (x)
#define Tag7_realsmith_pisbV0mOo9(x) (x)
#include "stdlib.h"
int realsmith_pisbV0mOo9(int p4d_realsmith_pisbV0mOo9, unsigned long addr_realsmith_pisbV0mOo9, unsigned long end_realsmith_pisbV0mOo9, unsigned long pfn_realsmith_pisbV0mOo9, int prot_realsmith_pisbV0mOo9) {
    unsigned long next_realsmith_pisbV0mOo9;
    int err_realsmith_pisbV0mOo9;
    /*bef_stmt:17214*/
pfn_realsmith_pisbV0mOo9 -= /*TAG1:STA*/((unsigned long)(realsmith_0ekBxEkzlx((int)(addr_realsmith_pisbV0mOo9)+(72))+(int)(addr_realsmith_pisbV0mOo9)-(0))+addr_realsmith_pisbV0mOo9)/*TAG1:END:addr_realsmith_pisbV0mOo9*/ >> 12;
/*aft_stmt:17214*/
    unsigned long *pud_realsmith_pisbV0mOo9 = (unsigned long *)(malloc(sizeof(unsigned long)));
    if (!pud_realsmith_pisbV0mOo9)
        return -12;
    /*bef_stmt:17447*/
/*bef_stmt:17447*/
do {
        /*bef_stmt:17370*/
next_realsmith_pisbV0mOo9 = (/*TAG2:STA*/((addr_realsmith_pisbV0mOo9) + (g_HO6910[6]) - 13)/*TAG2:END:addr_realsmith_pisbV0mOo9*/ + 4096 - 1) & ~(4096 - 1);
g_HO6910[6] = 13 + (addr_realsmith_pisbV0mOo9 - (0));
g_BISWN8 = 69 + (addr_realsmith_pisbV0mOo9 - (0));
/*aft_stmt:17370*/
        err_realsmith_pisbV0mOo9 = 0;
        /*bef_stmt:17402*/
/*bef_stmt:17402*/
if (/*TAG3:STA*/((int)(realsmith_4hKZUznqgV((int)(err_realsmith_pisbV0mOo9)+(46), (int)(err_realsmith_pisbV0mOo9)+(33), (int)(err_realsmith_pisbV0mOo9)+(68))+(int)(err_realsmith_pisbV0mOo9)-(-3))+err_realsmith_pisbV0mOo9)/*TAG3:END:err_realsmith_pisbV0mOo9*/)
            return /*TAG4:STA*/((int)(realsmith_PrMVeTVnkt((int)(err_realsmith_pisbV0mOo9)+(0), (int)(err_realsmith_pisbV0mOo9)+(1), (long)(err_realsmith_pisbV0mOo9)+(0), (int)(err_realsmith_pisbV0mOo9)+(0))+(int)(err_realsmith_pisbV0mOo9)-(-1))+err_realsmith_pisbV0mOo9)/*TAG4:END:err_realsmith_pisbV0mOo9*/;
/*aft_stmt:17402*/
/*aft_stmt:17402*/
        /*bef_stmt:17419*/
addr_realsmith_pisbV0mOo9 = /*TAG5:STA*/((unsigned long)(realsmith_dSbIVN692L((int)(next_realsmith_pisbV0mOo9)+(60), (int)(next_realsmith_pisbV0mOo9)+(65))+(int)(next_realsmith_pisbV0mOo9)-(0))+next_realsmith_pisbV0mOo9)/*TAG5:END:next_realsmith_pisbV0mOo9*/;
/*aft_stmt:17419*/
    } while (/*TAG6:STA*/((unsigned long)(realsmith_W0xafQNtpx((int)(addr_realsmith_pisbV0mOo9)+(75), (int)(addr_realsmith_pisbV0mOo9)+(78), (int)(addr_realsmith_pisbV0mOo9)+(7), (int)(addr_realsmith_pisbV0mOo9)+(77), (int)(addr_realsmith_pisbV0mOo9)+(1), (int)(addr_realsmith_pisbV0mOo9)+(19), (int)(addr_realsmith_pisbV0mOo9)+(69), (int)(addr_realsmith_pisbV0mOo9)+(26), (int)(addr_realsmith_pisbV0mOo9)+(62), (int)(addr_realsmith_pisbV0mOo9)+(88), (int)(addr_realsmith_pisbV0mOo9)+(65))+(int)(addr_realsmith_pisbV0mOo9)-(0))+addr_realsmith_pisbV0mOo9)/*TAG6:END:addr_realsmith_pisbV0mOo9*/ != /*TAG7:STA*/((end_realsmith_pisbV0mOo9) + (g_BISWN8) - 69)/*TAG7:END:end_realsmith_pisbV0mOo9*/);
g_BISWN8 = 69 + (end_realsmith_pisbV0mOo9 - (0)) + (addr_realsmith_pisbV0mOo9 - (0));
/*aft_stmt:17447*/
/*aft_stmt:17447*/
    (free(pud_realsmith_pisbV0mOo9));
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_VRFvUflWcf(x) (x)
#define Tag2_realsmith_VRFvUflWcf(x) (x)
#define Tag3_realsmith_VRFvUflWcf(x) (x)
#define Tag4_realsmith_VRFvUflWcf(x) (x)
#include "stdbool.h"
int realsmith_VRFvUflWcf(unsigned long st_name_realsmith_VRFvUflWcf, unsigned long st_shndx_realsmith_VRFvUflWcf, unsigned long st_type_realsmith_VRFvUflWcf) {
    /*bef_stmt:694*/
/*bef_stmt:694*/
/*bef_stmt:694*/
/*bef_stmt:694*/
return (Tag1_realsmith_VRFvUflWcf(/*unsigned long:696:696:694:e*/st_type_realsmith_VRFvUflWcf) == 2 || Tag2_realsmith_VRFvUflWcf(/*unsigned long:696:696:694:e*/st_type_realsmith_VRFvUflWcf) == 10) &&
           Tag3_realsmith_VRFvUflWcf(/*unsigned long:696:696:694:e*/st_name_realsmith_VRFvUflWcf) != 0 &&
           Tag4_realsmith_VRFvUflWcf(/*unsigned long:696:696:694:e*/st_shndx_realsmith_VRFvUflWcf) != 0;
/*aft_stmt:694*/
/*aft_stmt:694*/
/*aft_stmt:694*/
/*aft_stmt:694*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_hQuckbyQYb(x) (x)
#define Tag2_realsmith_hQuckbyQYb(x) (x)
#define Tag3_realsmith_hQuckbyQYb(x) (x)
#define Tag4_realsmith_hQuckbyQYb(x) (x)
#define Tag5_realsmith_hQuckbyQYb(x) (x)
#define Tag6_realsmith_hQuckbyQYb(x) (x)
#define Tag7_realsmith_hQuckbyQYb(x) (x)
#include "stdlib.h"
int realsmith_hQuckbyQYb(int divisor_realsmith_hQuckbyQYb, int handle_realsmith_hQuckbyQYb, int prio_realsmith_hQuckbyQYb, int flags_realsmith_hQuckbyQYb) {
    /*bef_stmt:17173*/
int skip_sw_realsmith_hQuckbyQYb = (/*TAG1:STA*/((int)(realsmith_dS0SzhtQmx((int)(flags_realsmith_hQuckbyQYb)+(40), (int)(flags_realsmith_hQuckbyQYb)+(64), (int)(flags_realsmith_hQuckbyQYb)+(19), (int)(flags_realsmith_hQuckbyQYb)+(-14), (int)(flags_realsmith_hQuckbyQYb)+(41), (int)(flags_realsmith_hQuckbyQYb)+(8))+(int)(flags_realsmith_hQuckbyQYb)-(34))+flags_realsmith_hQuckbyQYb)/*TAG1:END:flags_realsmith_hQuckbyQYb*/ & 1);
/*aft_stmt:17173*/
    int offloaded_realsmith_hQuckbyQYb = 0;
    int err_realsmith_hQuckbyQYb = 0;
    /*bef_stmt:17262*/
if (/*TAG2:STA*/((int)(realsmith_136Ac56RWR((unsigned int)(skip_sw_realsmith_hQuckbyQYb)+(12))+(unsigned int)(skip_sw_realsmith_hQuckbyQYb)-(14))+skip_sw_realsmith_hQuckbyQYb)/*TAG2:END:skip_sw_realsmith_hQuckbyQYb*/) {
        err_realsmith_hQuckbyQYb = 0;
    } else {
        err_realsmith_hQuckbyQYb = -1;
    }
/*aft_stmt:17262*/
    /*bef_stmt:17329*/
/*bef_stmt:17329*/
if (Tag3_realsmith_hQuckbyQYb(/*int:17378:17378:17329:e*/err_realsmith_hQuckbyQYb) < 0) {
        /*bef_stmt:17290*/
return Tag4_realsmith_hQuckbyQYb(/*int:17378:17378:17290:e*/err_realsmith_hQuckbyQYb);
/*aft_stmt:17290*/
    } else if (/*TAG5:STA*/((int)(realsmith_cAChPSU1uJ((int)(err_realsmith_hQuckbyQYb)+(3))+(int)(err_realsmith_hQuckbyQYb)-(1))+err_realsmith_hQuckbyQYb)/*TAG5:END:err_realsmith_hQuckbyQYb*/ > 0) {
        offloaded_realsmith_hQuckbyQYb = 1;
    }
/*aft_stmt:17329*/
/*aft_stmt:17329*/
    /*bef_stmt:17368*/
/*bef_stmt:17368*/
if (/*TAG6:STA*/((int)(realsmith_fwULidfbs6((int)(skip_sw_realsmith_hQuckbyQYb)+(34), (int)(skip_sw_realsmith_hQuckbyQYb)+(59), (int)(skip_sw_realsmith_hQuckbyQYb)+(56), (int)(skip_sw_realsmith_hQuckbyQYb)+(36))+(int)(skip_sw_realsmith_hQuckbyQYb)-(1))+skip_sw_realsmith_hQuckbyQYb)/*TAG6:END:skip_sw_realsmith_hQuckbyQYb*/ && !/*TAG7:STA*/((int)(realsmith_klrR0e1wtl((int)(offloaded_realsmith_hQuckbyQYb)+(3))+(int)(offloaded_realsmith_hQuckbyQYb)-(0))+offloaded_realsmith_hQuckbyQYb)/*TAG7:END:offloaded_realsmith_hQuckbyQYb*/) {
        return -22;
    }
/*aft_stmt:17368*/
/*aft_stmt:17368*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_zY8quaGONg(x) (x)
#define Tag2_realsmith_zY8quaGONg(x) (x)
#define Tag3_realsmith_zY8quaGONg(x) (x)
#define Tag4_realsmith_zY8quaGONg(x) (x)
#define Tag5_realsmith_zY8quaGONg(x) (x)
#define Tag6_realsmith_zY8quaGONg(x) (x)
#define Tag7_realsmith_zY8quaGONg(x) (x)
#define Tag8_realsmith_zY8quaGONg(x) (x)
#define Tag9_realsmith_zY8quaGONg(x) (x)
#define Tag10_realsmith_zY8quaGONg(x) (x)
#define Tag11_realsmith_zY8quaGONg(x) (x)
#define Tag12_realsmith_zY8quaGONg(x) (x)
#define Tag13_realsmith_zY8quaGONg(x) (x)
#define Tag14_realsmith_zY8quaGONg(x) (x)
#include "stdlib.h"
int realsmith_zY8quaGONg(int crtc_state_wm_vlv_raw_0_realsmith_zY8quaGONg, int crtc_state_wm_vlv_raw_1_realsmith_zY8quaGONg, int crtc_state_wm_vlv_raw_2_realsmith_zY8quaGONg, int plane_state_base_plane_realsmith_zY8quaGONg, int plane_id_realsmith_zY8quaGONg, int num_levels_realsmith_zY8quaGONg) {
    int dirty_realsmith_zY8quaGONg = 0;
    int level_realsmith_zY8quaGONg;
    /*bef_stmt:17279*/
if (/*TAG1:STA*/((int)(realsmith_p9zVhXXZDY((int)(crtc_state_wm_vlv_raw_0_realsmith_zY8quaGONg)+(-42), (unsigned long)(crtc_state_wm_vlv_raw_0_realsmith_zY8quaGONg)+(-43), (unsigned long)(crtc_state_wm_vlv_raw_0_realsmith_zY8quaGONg)+(0))+(int)(crtc_state_wm_vlv_raw_0_realsmith_zY8quaGONg)-(186))+crtc_state_wm_vlv_raw_0_realsmith_zY8quaGONg)/*TAG1:END:crtc_state_wm_vlv_raw_0_realsmith_zY8quaGONg*/ == 0) {
        /*bef_stmt:17256*/
dirty_realsmith_zY8quaGONg |= (0 != Tag2_realsmith_zY8quaGONg(/*int:17546:17546:17256:e*/crtc_state_wm_vlv_raw_0_realsmith_zY8quaGONg));
/*aft_stmt:17256*/
        goto out;
    }
/*aft_stmt:17279*/
    /*bef_stmt:17494*/
/*bef_stmt:17494*/
for (level_realsmith_zY8quaGONg = 0; /*TAG3:STA*/((int)(realsmith_RbR7z0p0m9(7, 92, 0, 31)-(-1))+level_realsmith_zY8quaGONg)/*TAG3:END:level_realsmith_zY8quaGONg*/ < /*TAG4:STA*/((int)(realsmith_proxy_6BPsZBYyb0((int)(num_levels_realsmith_zY8quaGONg)+(28), (int)(num_levels_realsmith_zY8quaGONg)+(-133))+(int)(num_levels_realsmith_zY8quaGONg)-(55))+num_levels_realsmith_zY8quaGONg)/*TAG4:END:num_levels_realsmith_zY8quaGONg*/; level_realsmith_zY8quaGONg++) {
        /*bef_stmt:17363*/
int wm_realsmith_zY8quaGONg = (/*TAG5:STA*/((level_realsmith_zY8quaGONg) + (g_HO6910[6]) - 13)/*TAG5:END:level_realsmith_zY8quaGONg*/ + 1) * 10;
g_HO6910[6] = 13 + (num_levels_realsmith_zY8quaGONg - (54));
/*aft_stmt:17363*/
        /*bef_stmt:17414*/
int max_wm_realsmith_zY8quaGONg = /*TAG6:STA*/((plane_id_realsmith_zY8quaGONg) + (g_QM9VDC[0]) - -95)/*TAG6:END:plane_id_realsmith_zY8quaGONg*/ == 1 ? 63 : 511;
g_QM9VDC[0] = -95 + (plane_id_realsmith_zY8quaGONg - (84)) + (num_levels_realsmith_zY8quaGONg - (54));
/*aft_stmt:17414*/
        /*bef_stmt:17436*/
/*bef_stmt:17436*/
if (/*TAG7:STA*/((int)(realsmith_8FseWRZdbF((int)(num_levels_realsmith_zY8quaGONg)+(21), (int)(plane_id_realsmith_zY8quaGONg)+(5), (int)(num_levels_realsmith_zY8quaGONg)+(-30), (int)(plane_id_realsmith_zY8quaGONg)+(-44), (int)(plane_id_realsmith_zY8quaGONg)+(-38))+(int)(plane_id_realsmith_zY8quaGONg)+(int)(num_levels_realsmith_zY8quaGONg)-(137))+wm_realsmith_zY8quaGONg)/*TAG7:END:wm_realsmith_zY8quaGONg*/ > /*TAG8:STA*/((int)(realsmith_fprcCrTYpO((int)(plane_id_realsmith_zY8quaGONg)+(-84), (int)(plane_id_realsmith_zY8quaGONg)+(-81), (unsigned int)(plane_id_realsmith_zY8quaGONg)+(-48))+(int)(max_wm_realsmith_zY8quaGONg)+(int)(plane_id_realsmith_zY8quaGONg)+(int)(num_levels_realsmith_zY8quaGONg)-(650))+max_wm_realsmith_zY8quaGONg)/*TAG8:END:max_wm_realsmith_zY8quaGONg*/)
            break;
/*aft_stmt:17436*/
/*aft_stmt:17436*/
        /*bef_stmt:17466*/
/*bef_stmt:17466*/
dirty_realsmith_zY8quaGONg |= (/*TAG9:STA*/((crtc_state_wm_vlv_raw_0_realsmith_zY8quaGONg) + (g_9Y8MHE) - 3)/*TAG9:END:crtc_state_wm_vlv_raw_0_realsmith_zY8quaGONg*/ != /*TAG10:STA*/((wm_realsmith_zY8quaGONg) + (g_9EV3Y7) - -67)/*TAG10:END:wm_realsmith_zY8quaGONg*/);
g_9Y8MHE = 3 + (plane_id_realsmith_zY8quaGONg - (84)) + (num_levels_realsmith_zY8quaGONg - (54));
g_9EV3Y7 = -67 + (num_levels_realsmith_zY8quaGONg - (54)) + (max_wm_realsmith_zY8quaGONg - (511)) + (plane_id_realsmith_zY8quaGONg - (84));
/*aft_stmt:17466*/
/*aft_stmt:17466*/
        /*bef_stmt:17483*/
crtc_state_wm_vlv_raw_0_realsmith_zY8quaGONg = /*TAG11:STA*/((int)(realsmith_fEbHEw0e3c((int)(plane_id_realsmith_zY8quaGONg)+(-33))+(int)(plane_id_realsmith_zY8quaGONg)+(int)(num_levels_realsmith_zY8quaGONg)+(int)(max_wm_realsmith_zY8quaGONg)-(649))+wm_realsmith_zY8quaGONg)/*TAG11:END:wm_realsmith_zY8quaGONg*/;
/*aft_stmt:17483*/
    }
/*aft_stmt:17494*/
/*aft_stmt:17494*/
    /*bef_stmt:17527*/
/*bef_stmt:17527*/
dirty_realsmith_zY8quaGONg |= (/*TAG12:STA*/((int)(realsmith_SiKi9Qj2Ou((int)(level_realsmith_zY8quaGONg)+(32), (int)(level_realsmith_zY8quaGONg)+(10), (int)(level_realsmith_zY8quaGONg)+(31), (int)(level_realsmith_zY8quaGONg)+(25))+(int)(level_realsmith_zY8quaGONg)-(51))+level_realsmith_zY8quaGONg)/*TAG12:END:level_realsmith_zY8quaGONg*/ != /*TAG13:STA*/((int)(realsmith_BH2k0OYgxW((unsigned long)(crtc_state_wm_vlv_raw_0_realsmith_zY8quaGONg)+(-483))+(int)(crtc_state_wm_vlv_raw_0_realsmith_zY8quaGONg)-(537))+crtc_state_wm_vlv_raw_0_realsmith_zY8quaGONg)/*TAG13:END:crtc_state_wm_vlv_raw_0_realsmith_zY8quaGONg*/);
/*aft_stmt:17527*/
/*aft_stmt:17527*/
/*bef_stmt:17542*/
out:
    return /*TAG14:STA*/((int)(realsmith_g9IMuOcECI((int)(dirty_realsmith_zY8quaGONg)+(23), (int)(dirty_realsmith_zY8quaGONg)+(40), (int)(dirty_realsmith_zY8quaGONg)+(26))+(int)(dirty_realsmith_zY8quaGONg)-(2))+dirty_realsmith_zY8quaGONg)/*TAG14:END:dirty_realsmith_zY8quaGONg*/;
/*aft_stmt:17542*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_jz6MOKTrTk(x) (x)
#define Tag2_realsmith_jz6MOKTrTk(x) (x)
#define Tag3_realsmith_jz6MOKTrTk(x) (x)
#define Tag4_realsmith_jz6MOKTrTk(x) (x)
#include "stdlib.h"
int realsmith_jz6MOKTrTk(int eng_id_realsmith_jz6MOKTrTk, int hw_internal_rev_realsmith_jz6MOKTrTk) {
    int *enc1_realsmith_jz6MOKTrTk = (int *)(malloc(sizeof(int) * 10));
    if (!enc1_realsmith_jz6MOKTrTk) return -1;
    /*bef_stmt:17249*/
if ((/*TAG1:STA*/((int)(realsmith_isFqS4KFz4((int)(hw_internal_rev_realsmith_jz6MOKTrTk)+(-17))+(int)(hw_internal_rev_realsmith_jz6MOKTrTk)-(372))+hw_internal_rev_realsmith_jz6MOKTrTk)/*TAG1:END:hw_internal_rev_realsmith_jz6MOKTrTk*/ & 0xF) == 0x14) {
        /*bef_stmt:17242*/
if (Tag2_realsmith_jz6MOKTrTk(/*int:17322:17322:17242:e*/eng_id_realsmith_jz6MOKTrTk) >= 1)
            eng_id_realsmith_jz6MOKTrTk++;
/*aft_stmt:17242*/
    }
/*aft_stmt:17249*/
    /*bef_stmt:17275*/
enc1_realsmith_jz6MOKTrTk[0] = /*TAG3:STA*/((int)(realsmith_i9bFZK9Dwb((int)(hw_internal_rev_realsmith_jz6MOKTrTk)+(-78), (int)(hw_internal_rev_realsmith_jz6MOKTrTk)+(-14))+(int)(hw_internal_rev_realsmith_jz6MOKTrTk)-(88))+hw_internal_rev_realsmith_jz6MOKTrTk)/*TAG3:END:hw_internal_rev_realsmith_jz6MOKTrTk*/;
/*aft_stmt:17275*/
    (free(enc1_realsmith_jz6MOKTrTk));
    /*bef_stmt:17320*/
return /*TAG4:STA*/((int)(realsmith_xFK11kHsdl((int)(eng_id_realsmith_jz6MOKTrTk)+(5), (int)(eng_id_realsmith_jz6MOKTrTk)+(39), (int)(eng_id_realsmith_jz6MOKTrTk)+(75), (int)(eng_id_realsmith_jz6MOKTrTk)+(17), (int)(eng_id_realsmith_jz6MOKTrTk)+(21), (int)(eng_id_realsmith_jz6MOKTrTk)+(-4), (int)(eng_id_realsmith_jz6MOKTrTk)+(17))+(int)(eng_id_realsmith_jz6MOKTrTk)-(6))+eng_id_realsmith_jz6MOKTrTk)/*TAG4:END:eng_id_realsmith_jz6MOKTrTk*/;
/*aft_stmt:17320*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_xm8Yk8JW2z(x) (x)
#define Tag2_realsmith_xm8Yk8JW2z(x) (x)
#define Tag3_realsmith_xm8Yk8JW2z(x) (x)
#include "stdlib.h"
int realsmith_xm8Yk8JW2z(int cq_exists_realsmith_xm8Yk8JW2z, int epas_realsmith_xm8Yk8JW2z, int adapter_realsmith_xm8Yk8JW2z, int fw_handle_realsmith_xm8Yk8JW2z) {
    /*bef_stmt:17154*/
if (!/*TAG1:STA*/((int)(realsmith_fcP0y8xM8b((int)(cq_exists_realsmith_xm8Yk8JW2z)+(24), (int)(cq_exists_realsmith_xm8Yk8JW2z)+(25))+(int)(cq_exists_realsmith_xm8Yk8JW2z)-(172))+cq_exists_realsmith_xm8Yk8JW2z)/*TAG1:END:cq_exists_realsmith_xm8Yk8JW2z*/)
        return 0;
/*aft_stmt:17154*/
    epas_realsmith_xm8Yk8JW2z = 0;
    int hret_realsmith_xm8Yk8JW2z = 0;
    /*bef_stmt:17270*/
if (/*TAG2:STA*/((int)(realsmith_cGQoETEPjq((int)(hret_realsmith_xm8Yk8JW2z)+(49), (int)(hret_realsmith_xm8Yk8JW2z)+(92), (int)(hret_realsmith_xm8Yk8JW2z)+(53))+(int)(hret_realsmith_xm8Yk8JW2z)-(54))+hret_realsmith_xm8Yk8JW2z)/*TAG2:END:hret_realsmith_xm8Yk8JW2z*/ == 1) {
        int aer_realsmith_xm8Yk8JW2z = 0, aerr_realsmith_xm8Yk8JW2z = 0;
        hret_realsmith_xm8Yk8JW2z = 1;
    }
/*aft_stmt:17270*/
    /*bef_stmt:17301*/
if (/*TAG3:STA*/((int)(realsmith_proxy_K1n7uRCUYT((int)(hret_realsmith_xm8Yk8JW2z)+(61), (int)(hret_realsmith_xm8Yk8JW2z)+(11), (int)(hret_realsmith_xm8Yk8JW2z)+(80), (int)(hret_realsmith_xm8Yk8JW2z)+(85), (int)(hret_realsmith_xm8Yk8JW2z)+(11), (int)(hret_realsmith_xm8Yk8JW2z)+(-46))+(int)(hret_realsmith_xm8Yk8JW2z)-(1))+hret_realsmith_xm8Yk8JW2z)/*TAG3:END:hret_realsmith_xm8Yk8JW2z*/ != 0) {
        return -1;
    }
/*aft_stmt:17301*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_0AajXMU3en(x) (x)
#define Tag2_realsmith_0AajXMU3en(x) (x)
#define Tag3_realsmith_0AajXMU3en(x) (x)
#define Tag4_realsmith_0AajXMU3en(x) (x)
#define Tag5_realsmith_0AajXMU3en(x) (x)
#define Tag6_realsmith_0AajXMU3en(x) (x)
#include "stdlib.h"
int realsmith_0AajXMU3en(int irq_realsmith_0AajXMU3en, unsigned int offset_realsmith_0AajXMU3en) {
    const unsigned int MPC8XXX_GPIO_PINS_realsmith_0AajXMU3en = 32;
    const int ENXIO_realsmith_0AajXMU3en = -6;
    /*bef_stmt:17245*/
/*bef_stmt:17245*/
/*bef_stmt:17245*/
if (/*TAG1:STA*/((int)(realsmith_gPexkysx7Z((int)(irq_realsmith_0AajXMU3en)+(-62))+(int)(irq_realsmith_0AajXMU3en)-(66))+irq_realsmith_0AajXMU3en)/*TAG1:END:irq_realsmith_0AajXMU3en*/ && /*TAG2:STA*/((offset_realsmith_0AajXMU3en) + (g_BISWN8) - 69)/*TAG2:END:offset_realsmith_0AajXMU3en*/ < /*TAG3:STA*/((unsigned int)(realsmith_LhdHMIpKHI((int)(MPC8XXX_GPIO_PINS_realsmith_0AajXMU3en)+(57), (int)(MPC8XXX_GPIO_PINS_realsmith_0AajXMU3en)+(4))+(int)(MPC8XXX_GPIO_PINS_realsmith_0AajXMU3en)-(32))+MPC8XXX_GPIO_PINS_realsmith_0AajXMU3en)/*TAG3:END:MPC8XXX_GPIO_PINS_realsmith_0AajXMU3en*/) {
        /*bef_stmt:17228*/
/*bef_stmt:17228*/
return (/*TAG4:STA*/((irq_realsmith_0AajXMU3en) + (g_9EV3Y7) - -67)/*TAG4:END:irq_realsmith_0AajXMU3en*/ << 5) | Tag5_realsmith_0AajXMU3en(/*unsigned int:17251:17251:17228:e*/offset_realsmith_0AajXMU3en);
g_9EV3Y7 = -67 + (irq_realsmith_0AajXMU3en - (66));
g_L83BDN[0] = -55 + (offset_realsmith_0AajXMU3en - (25));
/*aft_stmt:17228*/
/*aft_stmt:17228*/
    } else {
        /*bef_stmt:17240*/
return Tag6_realsmith_0AajXMU3en(/*const int:17251:17251:17240:e*/ENXIO_realsmith_0AajXMU3en);
/*aft_stmt:17240*/
    }
g_BISWN8 = 69 + (offset_realsmith_0AajXMU3en - (25));
/*aft_stmt:17245*/
/*aft_stmt:17245*/
/*aft_stmt:17245*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_BJemanWlA5(x) (x)
#define Tag2_realsmith_BJemanWlA5(x) (x)
#define Tag3_realsmith_BJemanWlA5(x) (x)
#include "stdint.h"
int realsmith_BJemanWlA5(unsigned int status_reg_value_realsmith_BJemanWlA5) {
    int retval_realsmith_BJemanWlA5 = 1;
    /*bef_stmt:2033*/
if ((/*TAG1:STA*/((unsigned int)(realsmith_zY8quaGONg((int)(status_reg_value_realsmith_BJemanWlA5)+(27), (int)(status_reg_value_realsmith_BJemanWlA5)+(-40), (int)(status_reg_value_realsmith_BJemanWlA5)+(-43), (int)(status_reg_value_realsmith_BJemanWlA5)+(-11), (int)(status_reg_value_realsmith_BJemanWlA5)+(35), (int)(status_reg_value_realsmith_BJemanWlA5)+(5))+(int)(status_reg_value_realsmith_BJemanWlA5)-(50))+status_reg_value_realsmith_BJemanWlA5)/*TAG1:END:status_reg_value_realsmith_BJemanWlA5*/ & 0xFFFF) != 0xFFFF)
        goto out;
/*aft_stmt:2033*/
    /*bef_stmt:2073*/
if ((Tag2_realsmith_BJemanWlA5(/*unsigned int:2102:2102:2073:e*/status_reg_value_realsmith_BJemanWlA5) & 0x0000) != 0)
        goto out;
/*aft_stmt:2073*/
    retval_realsmith_BJemanWlA5 = 0;
/*bef_stmt:2098*/
out:
    return /*TAG3:STA*/((int)(realsmith_jz6MOKTrTk((int)(retval_realsmith_BJemanWlA5)+(5), (int)(retval_realsmith_BJemanWlA5)+(87))+(int)(retval_realsmith_BJemanWlA5)-(7))+retval_realsmith_BJemanWlA5)/*TAG3:END:retval_realsmith_BJemanWlA5*/;
/*aft_stmt:2098*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_R2kKhqLAQz(x) (x)
#include "stdint.h"
int realsmith_R2kKhqLAQz(int val_realsmith_R2kKhqLAQz) {
    /*bef_stmt:2001*/
return ((/*TAG1:STA*/((int)(realsmith_gN8YwkaHB5((int)(val_realsmith_R2kKhqLAQz)+(54))+(int)(val_realsmith_R2kKhqLAQz)-(2))+val_realsmith_R2kKhqLAQz)/*TAG1:END:val_realsmith_R2kKhqLAQz*/) << 2) & 0xFFFFFFFF;
/*aft_stmt:2001*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_w38HmhAbOv(x) (x)
#define Tag2_realsmith_w38HmhAbOv(x) (x)
#define Tag3_realsmith_w38HmhAbOv(x) (x)
#define Tag4_realsmith_w38HmhAbOv(x) (x)
#define Tag5_realsmith_w38HmhAbOv(x) (x)
#include "stdlib.h"
int realsmith_w38HmhAbOv(int card_response_realsmith_w38HmhAbOv, int channel_response_realsmith_w38HmhAbOv) {
    /*bef_stmt:17123*/
int rc_realsmith_w38HmhAbOv = /*TAG1:STA*/((int)(realsmith_CZvc68nBhk((int)(card_response_realsmith_w38HmhAbOv)+(-83))+(int)(card_response_realsmith_w38HmhAbOv)-(140))+card_response_realsmith_w38HmhAbOv)/*TAG1:END:card_response_realsmith_w38HmhAbOv*/;
/*aft_stmt:17123*/
    /*bef_stmt:17142*/
/*bef_stmt:17142*/
if (Tag2_realsmith_w38HmhAbOv(/*int:17255:17255:17142:e*/rc_realsmith_w38HmhAbOv))
        return /*TAG3:STA*/((int)(realsmith_FlJu8QAGAi((int)(rc_realsmith_w38HmhAbOv)+(-18), (int)(rc_realsmith_w38HmhAbOv)+(-45), (int)(rc_realsmith_w38HmhAbOv)+(-62), (int)(rc_realsmith_w38HmhAbOv)+(-52), (int)(rc_realsmith_w38HmhAbOv)+(-2), (int)(rc_realsmith_w38HmhAbOv)+(-34))+(int)(rc_realsmith_w38HmhAbOv)-(70))+rc_realsmith_w38HmhAbOv)/*TAG3:END:rc_realsmith_w38HmhAbOv*/;
/*aft_stmt:17142*/
/*aft_stmt:17142*/
    /*bef_stmt:17167*/
if (Tag4_realsmith_w38HmhAbOv(/*int:17255:17255:17167:e*/channel_response_realsmith_w38HmhAbOv) >= 0)
        return 0;
/*aft_stmt:17167*/
    /*bef_stmt:17178*/
switch (Tag5_realsmith_w38HmhAbOv(/*int:17255:17255:17178:e*/channel_response_realsmith_w38HmhAbOv)) {
    case 128:
        return -1;
    case 130:
    case 129:
        return -2;
    default:
        return -3;
    }
/*aft_stmt:17178*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_5GkkVRCGPR(x) (x)
#define Tag2_realsmith_5GkkVRCGPR(x) (x)
#define Tag3_realsmith_5GkkVRCGPR(x) (x)
#include "stdlib.h"
struct hl_fpriv_WAtcM5 {
    int refcount_realsmith_5GkkVRCGPR;
};
int realsmith_5GkkVRCGPR(int initial_refcount_realsmith_5GkkVRCGPR) {
    struct hl_fpriv_WAtcM5 hpriv_realsmith_5GkkVRCGPR;
    /*bef_stmt:17151*/
hpriv_realsmith_5GkkVRCGPR.refcount_realsmith_5GkkVRCGPR = Tag1_realsmith_5GkkVRCGPR(/*int:17222:17222:17151:e*/initial_refcount_realsmith_5GkkVRCGPR);
/*aft_stmt:17151*/
    /*bef_stmt:17203*/
if (Tag2_realsmith_5GkkVRCGPR(/*int:17222:17222:17203:e*/hpriv_realsmith_5GkkVRCGPR.refcount_realsmith_5GkkVRCGPR) > 0) {
        hpriv_realsmith_5GkkVRCGPR.refcount_realsmith_5GkkVRCGPR--;
    }
/*aft_stmt:17203*/
    /*bef_stmt:17220*/
return Tag3_realsmith_5GkkVRCGPR(/*int:17222:17222:17220:e*/hpriv_realsmith_5GkkVRCGPR.refcount_realsmith_5GkkVRCGPR);
/*aft_stmt:17220*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_KdCgiydVph(x) (x)
#define Tag2_realsmith_KdCgiydVph(x) (x)
#define Tag3_realsmith_KdCgiydVph(x) (x)
#define Tag4_realsmith_KdCgiydVph(x) (x)
#define Tag5_realsmith_KdCgiydVph(x) (x)
#define Tag6_realsmith_KdCgiydVph(x) (x)
#include "stdlib.h"
struct xdr_buf_ioDEwL {
    int page_len_realsmith_KdCgiydVph;
    struct { int iov_len_realsmith_KdCgiydVph; } head_realsmith_KdCgiydVph[1];
    struct { int iov_len_realsmith_KdCgiydVph; } tail_realsmith_KdCgiydVph[1];
};
int realsmith_KdCgiydVph(int head_len_realsmith_KdCgiydVph, int page_len_realsmith_KdCgiydVph, int tail_len_realsmith_KdCgiydVph) {
    struct xdr_buf_ioDEwL buf_realsmith_KdCgiydVph;
    /*bef_stmt:17381*/
buf_realsmith_KdCgiydVph.page_len_realsmith_KdCgiydVph = /*TAG1:STA*/((page_len_realsmith_KdCgiydVph) + (g_0GK84F[1]) - 5)/*TAG1:END:page_len_realsmith_KdCgiydVph*/;
g_0GK84F[1] = 5 + (page_len_realsmith_KdCgiydVph - (80));
/*aft_stmt:17381*/
    /*bef_stmt:17443*/
buf_realsmith_KdCgiydVph.head_realsmith_KdCgiydVph[0].iov_len_realsmith_KdCgiydVph = /*TAG2:STA*/((head_len_realsmith_KdCgiydVph) + (g_MO1T8D) - -80)/*TAG2:END:head_len_realsmith_KdCgiydVph*/;
g_MO1T8D = -80 + (head_len_realsmith_KdCgiydVph - (39));
/*aft_stmt:17443*/
    /*bef_stmt:17493*/
buf_realsmith_KdCgiydVph.tail_realsmith_KdCgiydVph[0].iov_len_realsmith_KdCgiydVph = Tag3_realsmith_KdCgiydVph(/*int:17580:17580:17493:e*/tail_len_realsmith_KdCgiydVph);
/*aft_stmt:17493*/
    /*bef_stmt:17578*/
/*bef_stmt:17578*/
/*bef_stmt:17578*/
return /*TAG4:STA*/((int)(realsmith_Q03lRTHoVF((int)(buf_realsmith_KdCgiydVph.head_realsmith_KdCgiydVph[0].iov_len_realsmith_KdCgiydVph)+(40), (int)(buf_realsmith_KdCgiydVph.head_realsmith_KdCgiydVph[0].iov_len_realsmith_KdCgiydVph)+(-1))+(int)(buf_realsmith_KdCgiydVph.head_realsmith_KdCgiydVph[0].iov_len_realsmith_KdCgiydVph)-(39))+buf_realsmith_KdCgiydVph.head_realsmith_KdCgiydVph[0].iov_len_realsmith_KdCgiydVph)/*TAG4:END:buf_realsmith_KdCgiydVph.head_realsmith_KdCgiydVph[0].iov_len_realsmith_KdCgiydVph*/ + Tag5_realsmith_KdCgiydVph(/*int:17580:17580:17578:e*/buf_realsmith_KdCgiydVph.page_len_realsmith_KdCgiydVph) + Tag6_realsmith_KdCgiydVph(/*int:17580:17580:17578:e*/buf_realsmith_KdCgiydVph.tail_realsmith_KdCgiydVph[0].iov_len_realsmith_KdCgiydVph);
/*aft_stmt:17578*/
/*aft_stmt:17578*/
/*aft_stmt:17578*/
}



#include "stdint.h"
int realsmith_Pga3nVsOMP(int pbus1218_realsmith_Pga3nVsOMP, int size_realsmith_Pga3nVsOMP, int *parts_realsmith_Pga3nVsOMP) {
    enum { NVKM_RAM_TYPE_UNKNOWN_realsmith_Pga3nVsOMP, NVKM_RAM_TYPE_SDRAM_realsmith_Pga3nVsOMP, NVKM_RAM_TYPE_DDR1_realsmith_Pga3nVsOMP, NVKM_RAM_TYPE_GDDR3_realsmith_Pga3nVsOMP, NVKM_RAM_TYPE_GDDR2_realsmith_Pga3nVsOMP };
    int type_realsmith_Pga3nVsOMP = NVKM_RAM_TYPE_UNKNOWN_realsmith_Pga3nVsOMP;
    int ret_realsmith_Pga3nVsOMP = 0;
    switch (pbus1218_realsmith_Pga3nVsOMP & 0x00000300) {
        case 0x00000000: type_realsmith_Pga3nVsOMP = NVKM_RAM_TYPE_SDRAM_realsmith_Pga3nVsOMP; break;
        case 0x00000100: type_realsmith_Pga3nVsOMP = NVKM_RAM_TYPE_DDR1_realsmith_Pga3nVsOMP; break;
        case 0x00000200: type_realsmith_Pga3nVsOMP = NVKM_RAM_TYPE_GDDR3_realsmith_Pga3nVsOMP; break;
        case 0x00000300: type_realsmith_Pga3nVsOMP = NVKM_RAM_TYPE_GDDR2_realsmith_Pga3nVsOMP; break;
    }
    if (type_realsmith_Pga3nVsOMP == NVKM_RAM_TYPE_UNKNOWN_realsmith_Pga3nVsOMP) {
        return -1;
    }
    *parts_realsmith_Pga3nVsOMP = (size_realsmith_Pga3nVsOMP & 0x00000003) + 1;
    return ret_realsmith_Pga3nVsOMP;
}
int realsmith_proxy_kGnL7bUpVs(int p_0_A7VFmPQQR6, int p_1_72NmkGnuYk, int p_2_sEXtrVN5Nl) {
int proxy_ACRmnhmHlg[14] = { p_2_sEXtrVN5Nl, p_2_sEXtrVN5Nl, p_2_sEXtrVN5Nl, p_2_sEXtrVN5Nl, 86, p_2_sEXtrVN5Nl, p_2_sEXtrVN5Nl, 20, 70, p_2_sEXtrVN5Nl, p_2_sEXtrVN5Nl, p_2_sEXtrVN5Nl, 16, 7 };
int proxy_ret_rWf6aaqKxW = realsmith_Pga3nVsOMP(p_0_A7VFmPQQR6, p_1_72NmkGnuYk, proxy_ACRmnhmHlg);
return proxy_ret_rWf6aaqKxW;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Zkn2X87OFa(x) (x)
#include "stdlib.h"
struct st_i2c_dev_De7EVK {
    int adap_realsmith_Zkn2X87OFa; // Placeholder for the adapter, using int for simplicity
};
int realsmith_Zkn2X87OFa(int adap_realsmith_Zkn2X87OFa) {
    struct st_i2c_dev_De7EVK i2c_dev_realsmith_Zkn2X87OFa;
    /*bef_stmt:17151*/
i2c_dev_realsmith_Zkn2X87OFa.adap_realsmith_Zkn2X87OFa = /*TAG1:STA*/((adap_realsmith_Zkn2X87OFa) + (g_9Y8MHE) - 3)/*TAG1:END:adap_realsmith_Zkn2X87OFa*/;
g_9Y8MHE = 3 + (adap_realsmith_Zkn2X87OFa - (30));
/*aft_stmt:17151*/
    i2c_dev_realsmith_Zkn2X87OFa.adap_realsmith_Zkn2X87OFa = 0;
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
unsigned int val_realsmith_CgnsBFq1xm = /*TAG1:STA*/((mixer_val_realsmith_CgnsBFq1xm) + (g_LEKDNV) - 41)/*TAG1:END:mixer_val_realsmith_CgnsBFq1xm*/;
g_LEKDNV = 41 + (mixer_val_realsmith_CgnsBFq1xm - (34));
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
#define Tag1_realsmith_mUMtZqJEH1(x) (x)
#define Tag2_realsmith_mUMtZqJEH1(x) (x)
#include "stdint.h"
int realsmith_mUMtZqJEH1(int sw_flags2_realsmith_mUMtZqJEH1, int valid_sections_realsmith_mUMtZqJEH1) {
    int vlan_flags_realsmith_mUMtZqJEH1 = 0 | 8;
    sw_flags2_realsmith_mUMtZqJEH1 &= ~4;
    /*bef_stmt:2076*/
valid_sections_realsmith_mUMtZqJEH1 = (Tag1_realsmith_mUMtZqJEH1(/*int:2089:2089:2076:e*/valid_sections_realsmith_mUMtZqJEH1) & 0xFFFF) | (2 | 1);
/*aft_stmt:2076*/
    /*bef_stmt:2087*/
return Tag2_realsmith_mUMtZqJEH1(/*int:2089:2089:2087:e*/valid_sections_realsmith_mUMtZqJEH1);
/*aft_stmt:2087*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_JsoADfceYN(x) (x)
#define Tag2_realsmith_JsoADfceYN(x) (x)
#define Tag3_realsmith_JsoADfceYN(x) (x)
#define Tag4_realsmith_JsoADfceYN(x) (x)
#define Tag5_realsmith_JsoADfceYN(x) (x)
#define Tag6_realsmith_JsoADfceYN(x) (x)
#define Tag7_realsmith_JsoADfceYN(x) (x)
#define Tag8_realsmith_JsoADfceYN(x) (x)
#define Tag9_realsmith_JsoADfceYN(x) (x)
#define Tag10_realsmith_JsoADfceYN(x) (x)
#include "stdlib.h"
int realsmith_JsoADfceYN(int p_hwfn_realsmith_JsoADfceYN, int p_vf_realsmith_JsoADfceYN, int p_ptt_realsmith_JsoADfceYN) {
    int rc_realsmith_JsoADfceYN;
    /*bef_stmt:17183*/
/*bef_stmt:17183*/
/*bef_stmt:17183*/
rc_realsmith_JsoADfceYN = (/*TAG1:STA*/((int)(realsmith_proxy_kGnL7bUpVs((int)(p_hwfn_realsmith_JsoADfceYN)+(-76), (int)(p_hwfn_realsmith_JsoADfceYN)+(-78), (int)(p_hwfn_realsmith_JsoADfceYN)+(-85))+(int)(p_hwfn_realsmith_JsoADfceYN)-(97))+p_hwfn_realsmith_JsoADfceYN)/*TAG1:END:p_hwfn_realsmith_JsoADfceYN*/ + /*TAG2:STA*/((p_vf_realsmith_JsoADfceYN) + (g_QM9VDC[0]) - -95)/*TAG2:END:p_vf_realsmith_JsoADfceYN*/ + /*TAG3:STA*/((int)(realsmith_Zkn2X87OFa((int)(p_ptt_realsmith_JsoADfceYN)+(-4))+(int)(p_ptt_realsmith_JsoADfceYN)-(34))+p_ptt_realsmith_JsoADfceYN)/*TAG3:END:p_ptt_realsmith_JsoADfceYN*/) % 2;
g_QM9VDC[0] = -95 + (p_vf_realsmith_JsoADfceYN - (58));
/*aft_stmt:17183*/
/*aft_stmt:17183*/
/*aft_stmt:17183*/
    /*bef_stmt:17203*/
/*bef_stmt:17203*/
if (/*TAG4:STA*/((int)(realsmith_CgnsBFq1xm((int)(rc_realsmith_JsoADfceYN)+(33), (int)(rc_realsmith_JsoADfceYN)+(76))+(int)(rc_realsmith_JsoADfceYN)-(112))+rc_realsmith_JsoADfceYN)/*TAG4:END:rc_realsmith_JsoADfceYN*/) return /*TAG5:STA*/((rc_realsmith_JsoADfceYN) + (g_9EV3Y7) - -67)/*TAG5:END:rc_realsmith_JsoADfceYN*/;
g_9EV3Y7 = -67 + (rc_realsmith_JsoADfceYN - (1));
g_QM9VDC[0] = -95 + (rc_realsmith_JsoADfceYN - (1));
/*aft_stmt:17203*/
/*aft_stmt:17203*/
    /*bef_stmt:17252*/
/*bef_stmt:17252*/
/*bef_stmt:17252*/
rc_realsmith_JsoADfceYN = (Tag6_realsmith_JsoADfceYN(/*int:17282:17282:17252:e*/p_hwfn_realsmith_JsoADfceYN) * Tag7_realsmith_JsoADfceYN(/*int:17282:17282:17252:e*/p_vf_realsmith_JsoADfceYN) + Tag8_realsmith_JsoADfceYN(/*int:17282:17282:17252:e*/p_ptt_realsmith_JsoADfceYN)) % 3;
/*aft_stmt:17252*/
/*aft_stmt:17252*/
/*aft_stmt:17252*/
    /*bef_stmt:17272*/
/*bef_stmt:17272*/
if (Tag9_realsmith_JsoADfceYN(/*int:17282:17282:17272:e*/rc_realsmith_JsoADfceYN)) return Tag10_realsmith_JsoADfceYN(/*int:17282:17282:17272:e*/rc_realsmith_JsoADfceYN);
/*aft_stmt:17272*/
/*aft_stmt:17272*/
    return 0;
}



#include "stdint.h"
int realsmith_JcDcu11rbR(int key_idx_realsmith_JcDcu11rbR, int key_set_realsmith_JcDcu11rbR,
                               unsigned char tx_pn_realsmith_JcDcu11rbR[6], unsigned char rx_pn_realsmith_JcDcu11rbR[6],
                               int format_errors_realsmith_JcDcu11rbR, int replays_realsmith_JcDcu11rbR,
                               int decrypt_errors_realsmith_JcDcu11rbR) {
    return key_idx_realsmith_JcDcu11rbR + key_set_realsmith_JcDcu11rbR +
           tx_pn_realsmith_JcDcu11rbR[0] + tx_pn_realsmith_JcDcu11rbR[1] + tx_pn_realsmith_JcDcu11rbR[2] + tx_pn_realsmith_JcDcu11rbR[3] + tx_pn_realsmith_JcDcu11rbR[4] + tx_pn_realsmith_JcDcu11rbR[5] +
           rx_pn_realsmith_JcDcu11rbR[0] + rx_pn_realsmith_JcDcu11rbR[1] + rx_pn_realsmith_JcDcu11rbR[2] + rx_pn_realsmith_JcDcu11rbR[3] + rx_pn_realsmith_JcDcu11rbR[4] + rx_pn_realsmith_JcDcu11rbR[5] +
           format_errors_realsmith_JcDcu11rbR + replays_realsmith_JcDcu11rbR + decrypt_errors_realsmith_JcDcu11rbR;
}
int realsmith_proxy_Y7DJ58WCrN(int p_0_nHTrMvY8RL, int p_1_shYWfaElgv, unsigned char p_2_LoYFI7Ael1, unsigned char p_3_WwzJvH47Ho, int p_4_YG4zVQycbB, int p_5_22fN7OI3Dv, int p_6_iIaJJixfuV) {
unsigned char proxy_kVOpMs1aXr[10] = { 77, 41, p_2_LoYFI7Ael1, 62, p_2_LoYFI7Ael1, p_2_LoYFI7Ael1, 14, 66, p_2_LoYFI7Ael1, 85 };
unsigned char proxy_aOfiKxnNoi[15] = { 13, 66, 40, p_3_WwzJvH47Ho, p_3_WwzJvH47Ho, p_3_WwzJvH47Ho, p_3_WwzJvH47Ho, 68, p_3_WwzJvH47Ho, 51, p_3_WwzJvH47Ho, 14, p_3_WwzJvH47Ho, p_3_WwzJvH47Ho, 38 };
int proxy_ret_5tcFBb6RNi = realsmith_JcDcu11rbR(p_0_nHTrMvY8RL, p_1_shYWfaElgv, proxy_kVOpMs1aXr, proxy_aOfiKxnNoi, p_4_YG4zVQycbB, p_5_22fN7OI3Dv, p_6_iIaJJixfuV);
return proxy_ret_5tcFBb6RNi;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_EtQHjCIuS9(x) (x)
#define Tag2_realsmith_EtQHjCIuS9(x) (x)
#define Tag3_realsmith_EtQHjCIuS9(x) (x)
#include "stdlib.h"
int realsmith_EtQHjCIuS9(int nhmCounter_realsmith_EtQHjCIuS9, int reset_realsmith_EtQHjCIuS9) {
    /*bef_stmt:17123*/
int report_realsmith_EtQHjCIuS9 = /*TAG1:STA*/((int)(realsmith_bbmgzZrcwi((int)(nhmCounter_realsmith_EtQHjCIuS9)+(-40))+(int)(nhmCounter_realsmith_EtQHjCIuS9)-(104))+nhmCounter_realsmith_EtQHjCIuS9)/*TAG1:END:nhmCounter_realsmith_EtQHjCIuS9*/;
/*aft_stmt:17123*/
    /*bef_stmt:17148*/
if (/*TAG2:STA*/((int)(realsmith_lHLh6Fhhvp((int)(reset_realsmith_EtQHjCIuS9)+(-55))+(int)(reset_realsmith_EtQHjCIuS9)-(66))+reset_realsmith_EtQHjCIuS9)/*TAG2:END:reset_realsmith_EtQHjCIuS9*/) {
        nhmCounter_realsmith_EtQHjCIuS9 = 0;
    }
/*aft_stmt:17148*/
    /*bef_stmt:17159*/
return Tag3_realsmith_EtQHjCIuS9(/*int:17161:17161:17159:e*/report_realsmith_EtQHjCIuS9);
/*aft_stmt:17159*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_6zMf7kMERO(x) (x)
#define Tag2_realsmith_6zMf7kMERO(x) (x)
#define Tag3_realsmith_6zMf7kMERO(x) (x)
#include "stdlib.h"
struct tw9910_priv_7MadUc {
    int power_state_realsmith_6zMf7kMERO; // 0 for off, 1 for on
};
int realsmith_6zMf7kMERO(int on_realsmith_6zMf7kMERO) {
    struct tw9910_priv_7MadUc priv_realsmith_6zMf7kMERO;
    /*bef_stmt:17226*/
if (/*TAG1:STA*/((int)(realsmith_ZQ0AoRALCR((int)(on_realsmith_6zMf7kMERO)+(-40))+(int)(on_realsmith_6zMf7kMERO)-(91))+on_realsmith_6zMf7kMERO)/*TAG1:END:on_realsmith_6zMf7kMERO*/) {
        priv_realsmith_6zMf7kMERO.power_state_realsmith_6zMf7kMERO = 1;
        /*bef_stmt:17183*/
return /*TAG2:STA*/((priv_realsmith_6zMf7kMERO.power_state_realsmith_6zMf7kMERO) + (g_9EV3Y7) - -67)/*TAG2:END:priv_realsmith_6zMf7kMERO.power_state_realsmith_6zMf7kMERO*/;
g_9EV3Y7 = -67 + (priv_realsmith_6zMf7kMERO.power_state_realsmith_6zMf7kMERO - (1));
/*aft_stmt:17183*/
    } else {
        priv_realsmith_6zMf7kMERO.power_state_realsmith_6zMf7kMERO = 0;
        /*bef_stmt:17220*/
return Tag3_realsmith_6zMf7kMERO(/*int:17232:17232:17220:e*/priv_realsmith_6zMf7kMERO.power_state_realsmith_6zMf7kMERO);
/*aft_stmt:17220*/
    }
/*aft_stmt:17226*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_OBa7vbuvsI(x) (x)
#define Tag2_realsmith_proxy_OBa7vbuvsI(x) (x)
#define Tag3_realsmith_proxy_OBa7vbuvsI(x) (x)
#define Tag4_realsmith_proxy_OBa7vbuvsI(x) (x)
#define Tag5_realsmith_proxy_OBa7vbuvsI(x) (x)
#define Tag6_realsmith_proxy_OBa7vbuvsI(x) (x)
#define Tag7_realsmith_proxy_OBa7vbuvsI(x) (x)
#define Tag8_realsmith_proxy_OBa7vbuvsI(x) (x)
#include "stdlib.h"
typedef struct {
    unsigned short type_realsmith_KmQprdNe57;
    unsigned short length_realsmith_KmQprdNe57;
    unsigned short version_realsmith_KmQprdNe57;
} Header_ExPk5g;
typedef struct {
    unsigned short type_realsmith_KmQprdNe57;
    unsigned short length_realsmith_KmQprdNe57;
} TLV_ExPk5g;
typedef struct {
    TLV_ExPk5g tlv_realsmith_KmQprdNe57;
    Header_ExPk5g hdr_realsmith_KmQprdNe57;
    unsigned int val_realsmith_KmQprdNe57;
} Command_ExPk5g;
int realsmith_KmQprdNe57(int *result_realsmith_KmQprdNe57) {
    Command_ExPk5g *cmd_realsmith_KmQprdNe57;
    int ack_skb_result_realsmith_KmQprdNe57 = 0;
    char strerr_realsmith_KmQprdNe57[32];
    cmd_realsmith_KmQprdNe57 = (Command_ExPk5g *)(malloc(sizeof(Command_ExPk5g)));
    if (cmd_realsmith_KmQprdNe57 == ((void*)0)) {
        *result_realsmith_KmQprdNe57 = -12;
        /*bef_stmt:17538*/
return Tag1_realsmith_proxy_OBa7vbuvsI(/*int:18047:18047:17538:e*/*result_realsmith_KmQprdNe57);
/*aft_stmt:17538*/
    }
    cmd_realsmith_KmQprdNe57->hdr_realsmith_KmQprdNe57.type_realsmith_KmQprdNe57 = (unsigned short)2;
    cmd_realsmith_KmQprdNe57->hdr_realsmith_KmQprdNe57.length_realsmith_KmQprdNe57 = (unsigned short)(sizeof(Command_ExPk5g) - sizeof(cmd_realsmith_KmQprdNe57->hdr_realsmith_KmQprdNe57));
    cmd_realsmith_KmQprdNe57->hdr_realsmith_KmQprdNe57.version_realsmith_KmQprdNe57 = (unsigned short)1;
    cmd_realsmith_KmQprdNe57->tlv_realsmith_KmQprdNe57.type_realsmith_KmQprdNe57 = (unsigned short)3;
    /*bef_stmt:17805*/
cmd_realsmith_KmQprdNe57->tlv_realsmith_KmQprdNe57.length_realsmith_KmQprdNe57 = (unsigned short)(sizeof(Tag2_realsmith_proxy_OBa7vbuvsI(/*unsigned int:18047:18047:17805:e*/cmd_realsmith_KmQprdNe57->val_realsmith_KmQprdNe57)));
g_9EV3Y7 = -67 + (cmd_realsmith_KmQprdNe57->val_realsmith_KmQprdNe57 - (0));
/*aft_stmt:17805*/
    cmd_realsmith_KmQprdNe57->val_realsmith_KmQprdNe57 = (unsigned int)4;
    /*bef_stmt:17930*/
if (/*TAG3:STA*/((ack_skb_result_realsmith_KmQprdNe57) + (g_NIS3MK[2]) - -46)/*TAG3:END:ack_skb_result_realsmith_KmQprdNe57*/ < 0) {
        /*bef_stmt:17870*/
*result_realsmith_KmQprdNe57 = Tag4_realsmith_proxy_OBa7vbuvsI(/*int:18047:18047:17870:e*/ack_skb_result_realsmith_KmQprdNe57);
/*aft_stmt:17870*/
        (free(cmd_realsmith_KmQprdNe57));
        /*bef_stmt:17923*/
return Tag5_realsmith_proxy_OBa7vbuvsI(/*int:18047:18047:17923:e*/*result_realsmith_KmQprdNe57);
/*aft_stmt:17923*/
    }
g_NIS3MK[2] = -46 + (ack_skb_result_realsmith_KmQprdNe57 - (0));
/*aft_stmt:17930*/
    /*bef_stmt:17997*/
if (/*TAG6:STA*/((int)(realsmith_proxy_fwn5Cug1vE((int)(cmd_realsmith_KmQprdNe57->val_realsmith_KmQprdNe57)+(-98), (int)(cmd_realsmith_KmQprdNe57->val_realsmith_KmQprdNe57)+(-60))+(int)(ack_skb_result_realsmith_KmQprdNe57)+(int)(cmd_realsmith_KmQprdNe57->val_realsmith_KmQprdNe57)-(4))+ack_skb_result_realsmith_KmQprdNe57)/*TAG6:END:ack_skb_result_realsmith_KmQprdNe57*/ == -13) {
        *result_realsmith_KmQprdNe57 = -13;
    } else {
        *result_realsmith_KmQprdNe57 = 0;
    }
/*aft_stmt:17997*/
    (free(cmd_realsmith_KmQprdNe57));
    /*bef_stmt:18045*/
return /*TAG7:STA*/((int)(realsmith_9cgAbl4jc1((int)(*result_realsmith_KmQprdNe57)+(57))+(int)(*result_realsmith_KmQprdNe57)-(1))+*result_realsmith_KmQprdNe57)/*TAG7:END:*result_realsmith_KmQprdNe57*/;
/*aft_stmt:18045*/
}
int realsmith_proxy_OBa7vbuvsI(int p_0_QkEKaaBrjY) {
int proxy_ret_GwKxYtJKEF = realsmith_KmQprdNe57(&(p_0_QkEKaaBrjY));
/*bef_stmt:18161*/
return /*TAG8:STA*/((int)(realsmith_proxy_YUW9D13uk5((unsigned long)(proxy_ret_GwKxYtJKEF)+(-27), (unsigned long)(proxy_ret_GwKxYtJKEF)+(72), (unsigned long)(proxy_ret_GwKxYtJKEF)+(6))+(int)(proxy_ret_GwKxYtJKEF)-(-1))+proxy_ret_GwKxYtJKEF)/*TAG8:END:proxy_ret_GwKxYtJKEF*/;
/*aft_stmt:18161*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_1fwOkZ1ikf(x) (x)
#define Tag2_realsmith_1fwOkZ1ikf(x) (x)
#include "stdlib.h"
int realsmith_1fwOkZ1ikf(int port_number_realsmith_1fwOkZ1ikf) {
    /*bef_stmt:17108*/
unsigned long close_command_port_realsmith_1fwOkZ1ikf = /*TAG1:STA*/((int)(realsmith_BJemanWlA5((unsigned int)(port_number_realsmith_1fwOkZ1ikf)+(-10))+(int)(port_number_realsmith_1fwOkZ1ikf)-(60))+port_number_realsmith_1fwOkZ1ikf)/*TAG1:END:port_number_realsmith_1fwOkZ1ikf*/ + 1;
/*aft_stmt:17108*/
    unsigned char WHITEHEAT_CLOSE_realsmith_1fwOkZ1ikf = 0;
    unsigned char *command_realsmith_1fwOkZ1ikf = (unsigned char *)&close_command_port_realsmith_1fwOkZ1ikf;
    /*bef_stmt:17222*/
return (/*TAG2:STA*/((unsigned long)(realsmith_0AajXMU3en((int)(close_command_port_realsmith_1fwOkZ1ikf)+(6), (unsigned int)(close_command_port_realsmith_1fwOkZ1ikf)+(-35))+(int)(close_command_port_realsmith_1fwOkZ1ikf)-(2197))+close_command_port_realsmith_1fwOkZ1ikf)/*TAG2:END:close_command_port_realsmith_1fwOkZ1ikf*/ > 0) ? 0 : -1;
/*aft_stmt:17222*/
}



#include "stdlib.h"
int realsmith_bvzrJd4SHQ(int channel_realsmith_bvzrJd4SHQ, int *cckpowerlevel_realsmith_bvzrJd4SHQ, int *ofdmpowerlevel_realsmith_bvzrJd4SHQ, int *bw20powerlevel_realsmith_bvzrJd4SHQ, int *bw40powerlevel_realsmith_bvzrJd4SHQ) {
    int txpwrlevel_cck_realsmith_bvzrJd4SHQ[2][14] = {{0}};
    int txpwrlevel_ht40_1s_realsmith_bvzrJd4SHQ[2][14] = {{0}};
    int txpwr_ht20diff_realsmith_bvzrJd4SHQ[2][14] = {{0}};
    int txpwr_legacyhtdiff_realsmith_bvzrJd4SHQ[2][14] = {{0}};
    int index_realsmith_bvzrJd4SHQ = (channel_realsmith_bvzrJd4SHQ - 1);
    int rf_path_realsmith_bvzrJd4SHQ;
    for (rf_path_realsmith_bvzrJd4SHQ = 0; rf_path_realsmith_bvzrJd4SHQ < 2; rf_path_realsmith_bvzrJd4SHQ++) {
        if (rf_path_realsmith_bvzrJd4SHQ == 0) {
            cckpowerlevel_realsmith_bvzrJd4SHQ[0] = txpwrlevel_cck_realsmith_bvzrJd4SHQ[0][index_realsmith_bvzrJd4SHQ];
            bw20powerlevel_realsmith_bvzrJd4SHQ[0] = txpwrlevel_ht40_1s_realsmith_bvzrJd4SHQ[0][index_realsmith_bvzrJd4SHQ] + txpwr_ht20diff_realsmith_bvzrJd4SHQ[0][index_realsmith_bvzrJd4SHQ];
            ofdmpowerlevel_realsmith_bvzrJd4SHQ[0] = txpwrlevel_ht40_1s_realsmith_bvzrJd4SHQ[0][index_realsmith_bvzrJd4SHQ] + txpwr_legacyhtdiff_realsmith_bvzrJd4SHQ[0][index_realsmith_bvzrJd4SHQ];
            bw40powerlevel_realsmith_bvzrJd4SHQ[0] = txpwrlevel_ht40_1s_realsmith_bvzrJd4SHQ[0][index_realsmith_bvzrJd4SHQ];
        } else if (rf_path_realsmith_bvzrJd4SHQ == 1) {
            cckpowerlevel_realsmith_bvzrJd4SHQ[1] = txpwrlevel_cck_realsmith_bvzrJd4SHQ[1][index_realsmith_bvzrJd4SHQ];
            bw20powerlevel_realsmith_bvzrJd4SHQ[1] = txpwrlevel_ht40_1s_realsmith_bvzrJd4SHQ[1][index_realsmith_bvzrJd4SHQ] + txpwr_ht20diff_realsmith_bvzrJd4SHQ[1][index_realsmith_bvzrJd4SHQ];
            ofdmpowerlevel_realsmith_bvzrJd4SHQ[1] = txpwrlevel_ht40_1s_realsmith_bvzrJd4SHQ[1][index_realsmith_bvzrJd4SHQ] + txpwr_legacyhtdiff_realsmith_bvzrJd4SHQ[1][index_realsmith_bvzrJd4SHQ];
            bw40powerlevel_realsmith_bvzrJd4SHQ[1] = txpwrlevel_ht40_1s_realsmith_bvzrJd4SHQ[1][index_realsmith_bvzrJd4SHQ];
        }
    }
    return 0;
}
int realsmith_proxy_9CyHLvpnR6(int p_0_g9392bhXlJ, int p_1_IL5CGB9RJB, int p_2_OJ8rBgKk5d, int p_3_Vv7QaylEOC, int p_4_7hKS4HULUU) {
int proxy_y7FObBC2jx[18] = { p_1_IL5CGB9RJB, 44, p_1_IL5CGB9RJB, 83, p_1_IL5CGB9RJB, 74, p_1_IL5CGB9RJB, 56, 13, p_1_IL5CGB9RJB, p_1_IL5CGB9RJB, p_1_IL5CGB9RJB, p_1_IL5CGB9RJB, p_1_IL5CGB9RJB, p_1_IL5CGB9RJB, 4, 44, p_1_IL5CGB9RJB };
int proxy_ErBOGqyWSJ[15] = { p_2_OJ8rBgKk5d, p_2_OJ8rBgKk5d, 4, p_2_OJ8rBgKk5d, p_2_OJ8rBgKk5d, 90, 66, 10, p_2_OJ8rBgKk5d, p_2_OJ8rBgKk5d, p_2_OJ8rBgKk5d, p_2_OJ8rBgKk5d, 54, 98, 52 };
int proxy_7lgO1gJdZB[17] = { 68, 33, p_3_Vv7QaylEOC, 16, p_3_Vv7QaylEOC, 35, p_3_Vv7QaylEOC, 99, 56, 41, 1, p_3_Vv7QaylEOC, 47, p_3_Vv7QaylEOC, 74, 49, 16 };
int proxy_LXIcHHkleW[11] = { 51, 20, p_4_7hKS4HULUU, 21, 51, p_4_7hKS4HULUU, p_4_7hKS4HULUU, 86, 14, 26, p_4_7hKS4HULUU };
int proxy_ret_j3gPnsGvOQ = realsmith_bvzrJd4SHQ(p_0_g9392bhXlJ, proxy_y7FObBC2jx, proxy_ErBOGqyWSJ, proxy_7lgO1gJdZB, proxy_LXIcHHkleW);
return proxy_ret_j3gPnsGvOQ;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_o3I0eiFqLN(x) (x)
#define Tag2_realsmith_o3I0eiFqLN(x) (x)
#define Tag3_realsmith_o3I0eiFqLN(x) (x)
#define Tag4_realsmith_o3I0eiFqLN(x) (x)
#define Tag5_realsmith_o3I0eiFqLN(x) (x)
#define Tag6_realsmith_o3I0eiFqLN(x) (x)
#define Tag7_realsmith_o3I0eiFqLN(x) (x)
#define Tag8_realsmith_o3I0eiFqLN(x) (x)
#define Tag9_realsmith_o3I0eiFqLN(x) (x)
#define Tag10_realsmith_o3I0eiFqLN(x) (x)
#define Tag11_realsmith_o3I0eiFqLN(x) (x)
#include "stdlib.h"
struct amdgpu_ring_JR9CFm {
    int type_realsmith_o3I0eiFqLN;
    int initialized_realsmith_o3I0eiFqLN;
    unsigned int num_fences_mask_realsmith_o3I0eiFqLN;
    void *fences_realsmith_o3I0eiFqLN;
    long timeout_realsmith_o3I0eiFqLN;
};
int realsmith_o3I0eiFqLN(int ring_type_realsmith_o3I0eiFqLN, unsigned int num_hw_submission_realsmith_o3I0eiFqLN, long gfx_timeout_realsmith_o3I0eiFqLN, long compute_timeout_realsmith_o3I0eiFqLN, long sdma_timeout_realsmith_o3I0eiFqLN, long video_timeout_realsmith_o3I0eiFqLN) {
    long timeout_realsmith_o3I0eiFqLN;
    /*bef_stmt:17338*/
/*bef_stmt:17338*/
if ((Tag1_realsmith_o3I0eiFqLN(/*unsigned int:17720:17720:17338:e*/num_hw_submission_realsmith_o3I0eiFqLN) & (Tag2_realsmith_o3I0eiFqLN(/*unsigned int:17720:17720:17338:e*/num_hw_submission_realsmith_o3I0eiFqLN) - 1)) != 0)
        return -1;
/*aft_stmt:17338*/
/*aft_stmt:17338*/
    struct amdgpu_ring_JR9CFm ring_realsmith_o3I0eiFqLN;
    ring_realsmith_o3I0eiFqLN.initialized_realsmith_o3I0eiFqLN = 0;
    /*bef_stmt:17443*/
ring_realsmith_o3I0eiFqLN.num_fences_mask_realsmith_o3I0eiFqLN = Tag3_realsmith_o3I0eiFqLN(/*unsigned int:17720:17720:17443:e*/num_hw_submission_realsmith_o3I0eiFqLN) * 2 - 1;
/*aft_stmt:17443*/
    /*bef_stmt:17511*/
ring_realsmith_o3I0eiFqLN.fences_realsmith_o3I0eiFqLN = (malloc(Tag4_realsmith_o3I0eiFqLN(/*unsigned int:17720:17720:17511:e*/num_hw_submission_realsmith_o3I0eiFqLN) * 2 * sizeof(void *)));
/*aft_stmt:17511*/
    if (!ring_realsmith_o3I0eiFqLN.fences_realsmith_o3I0eiFqLN)
        return -2;
    /*bef_stmt:17710*/
if (Tag5_realsmith_o3I0eiFqLN(/*int:17720:17720:17710:e*/ring_type_realsmith_o3I0eiFqLN) != 131) {
        /*bef_stmt:17566*/
switch (Tag6_realsmith_o3I0eiFqLN(/*int:17720:17720:17566:e*/ring_type_realsmith_o3I0eiFqLN)) {
            /*bef_stmt:17578*/
case 129:
                timeout_realsmith_o3I0eiFqLN = Tag7_realsmith_o3I0eiFqLN(/*long:17720:17720:17578:e*/gfx_timeout_realsmith_o3I0eiFqLN);
/*aft_stmt:17578*/
                break;
            /*bef_stmt:17606*/
case 130:
                timeout_realsmith_o3I0eiFqLN = Tag8_realsmith_o3I0eiFqLN(/*long:17720:17720:17606:e*/compute_timeout_realsmith_o3I0eiFqLN);
/*aft_stmt:17606*/
                break;
            /*bef_stmt:17634*/
case 128:
                timeout_realsmith_o3I0eiFqLN = Tag9_realsmith_o3I0eiFqLN(/*long:17720:17720:17634:e*/sdma_timeout_realsmith_o3I0eiFqLN);
/*aft_stmt:17634*/
                break;
            /*bef_stmt:17670*/
default:
                timeout_realsmith_o3I0eiFqLN = Tag10_realsmith_o3I0eiFqLN(/*long:17720:17720:17670:e*/video_timeout_realsmith_o3I0eiFqLN);
/*aft_stmt:17670*/
                break;
        }
/*aft_stmt:17566*/
        /*bef_stmt:17702*/
ring_realsmith_o3I0eiFqLN.timeout_realsmith_o3I0eiFqLN = Tag11_realsmith_o3I0eiFqLN(/*long:17720:17720:17702:e*/timeout_realsmith_o3I0eiFqLN);
/*aft_stmt:17702*/
    }
/*aft_stmt:17710*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_htaxq6Qz6y(x) (x)
#define Tag2_realsmith_htaxq6Qz6y(x) (x)
#define Tag3_realsmith_htaxq6Qz6y(x) (x)
#include "stdlib.h"
struct switchtec_user_ctdfvY {
    int kref_realsmith_htaxq6Qz6y;
};
int realsmith_htaxq6Qz6y(int kref_realsmith_htaxq6Qz6y) {
    struct switchtec_user_ctdfvY stuser_realsmith_htaxq6Qz6y;
    /*bef_stmt:17151*/
stuser_realsmith_htaxq6Qz6y.kref_realsmith_htaxq6Qz6y = /*TAG1:STA*/((kref_realsmith_htaxq6Qz6y) + (g_9EV3Y7) - -67)/*TAG1:END:kref_realsmith_htaxq6Qz6y*/;
g_9EV3Y7 = -67 + (kref_realsmith_htaxq6Qz6y - (45));
/*aft_stmt:17151*/
    /*bef_stmt:17203*/
if (Tag2_realsmith_htaxq6Qz6y(/*int:17222:17222:17203:e*/stuser_realsmith_htaxq6Qz6y.kref_realsmith_htaxq6Qz6y) > 0) {
        stuser_realsmith_htaxq6Qz6y.kref_realsmith_htaxq6Qz6y--;
    }
/*aft_stmt:17203*/
    /*bef_stmt:17220*/
return Tag3_realsmith_htaxq6Qz6y(/*int:17222:17222:17220:e*/stuser_realsmith_htaxq6Qz6y.kref_realsmith_htaxq6Qz6y);
/*aft_stmt:17220*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_TadhcYLdQW(x) (x)
#define Tag2_realsmith_TadhcYLdQW(x) (x)
#define Tag3_realsmith_TadhcYLdQW(x) (x)
#define Tag4_realsmith_TadhcYLdQW(x) (x)
#define Tag5_realsmith_TadhcYLdQW(x) (x)
#include "stdlib.h"
int realsmith_TadhcYLdQW(int nr_cpus_avail_realsmith_TadhcYLdQW) {
    int MAX_CPUS_realsmith_TadhcYLdQW = 128;
    /*bef_stmt:17152*/
/*bef_stmt:17152*/
/*bef_stmt:17152*/
int ncpus_realsmith_TadhcYLdQW = (/*TAG1:STA*/((int)(realsmith_proxy_kw7BviTJCo((int)(nr_cpus_avail_realsmith_TadhcYLdQW)+(-80), (int)(nr_cpus_avail_realsmith_TadhcYLdQW)+(-80), (char)(nr_cpus_avail_realsmith_TadhcYLdQW)+(-85), (char)(nr_cpus_avail_realsmith_TadhcYLdQW)+(-78))+(int)(nr_cpus_avail_realsmith_TadhcYLdQW)-(87))+nr_cpus_avail_realsmith_TadhcYLdQW)/*TAG1:END:nr_cpus_avail_realsmith_TadhcYLdQW*/ > 0) ? /*TAG2:STA*/((nr_cpus_avail_realsmith_TadhcYLdQW) + (g_0GK84F[2]) - -51)/*TAG2:END:nr_cpus_avail_realsmith_TadhcYLdQW*/ : Tag3_realsmith_TadhcYLdQW(/*int:17298:17298:17152:e*/MAX_CPUS_realsmith_TadhcYLdQW);
g_0GK84F[2] = -51 + (nr_cpus_avail_realsmith_TadhcYLdQW - (83));
/*aft_stmt:17152*/
/*aft_stmt:17152*/
/*aft_stmt:17152*/
    /*bef_stmt:17225*/
int *stream_realsmith_TadhcYLdQW = (int *)(malloc(sizeof(int) * /*TAG4:STA*/((int)(realsmith_f4ilLM10CS((int)(ncpus_realsmith_TadhcYLdQW)+(-41))+(int)(ncpus_realsmith_TadhcYLdQW)-(83))+ncpus_realsmith_TadhcYLdQW)/*TAG4:END:ncpus_realsmith_TadhcYLdQW*/));
/*aft_stmt:17225*/
    if (!stream_realsmith_TadhcYLdQW) {
        return -1;
    }
    (free(stream_realsmith_TadhcYLdQW));
    /*bef_stmt:17296*/
return Tag5_realsmith_TadhcYLdQW(/*int:17298:17298:17296:e*/ncpus_realsmith_TadhcYLdQW);
/*aft_stmt:17296*/
}



#include "stdlib.h"
struct usb_serial_port_vrg2YU {
    struct {
        struct {
            int (*get_serial_realsmith_BswS5uK7Nv)(int, int*);
        } *type_realsmith_BswS5uK7Nv;
    } *serial_realsmith_BswS5uK7Nv;
};
int realsmith_BswS5uK7Nv(int has_get_serial_realsmith_BswS5uK7Nv, int *ss_realsmith_BswS5uK7Nv) {
    if (has_get_serial_realsmith_BswS5uK7Nv) {
        return 0;
    }
    return -1;
}
int realsmith_proxy_BSgeyq11ut(int p_0_BxJCKk0zP0, int p_1_yaH085AKe6) {
int proxy_8wG5FEfJmU[13] = { 94, 85, p_1_yaH085AKe6, p_1_yaH085AKe6, 64, 85, p_1_yaH085AKe6, 3, 18, p_1_yaH085AKe6, p_1_yaH085AKe6, p_1_yaH085AKe6, p_1_yaH085AKe6 };
int proxy_ret_ccOmPBUvaT = realsmith_BswS5uK7Nv(p_0_BxJCKk0zP0, proxy_8wG5FEfJmU);
return proxy_ret_ccOmPBUvaT;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_O2kYbHIKTS(x) (x)
#define Tag2_realsmith_O2kYbHIKTS(x) (x)
#define Tag3_realsmith_O2kYbHIKTS(x) (x)
#define Tag4_realsmith_O2kYbHIKTS(x) (x)
#include "stdbool.h"
int realsmith_O2kYbHIKTS(int index_realsmith_O2kYbHIKTS, int is_memset_realsmith_O2kYbHIKTS) {
    /*bef_stmt:637*/
/*bef_stmt:637*/
/*bef_stmt:637*/
int inv_idx_realsmith_O2kYbHIKTS = (/*TAG1:STA*/((is_memset_realsmith_O2kYbHIKTS) + (g_9EV3Y7) - -67)/*TAG1:END:is_memset_realsmith_O2kYbHIKTS*/) ? ~/*TAG2:STA*/((index_realsmith_O2kYbHIKTS) + (g_L83BDN[1]) - -48)/*TAG2:END:index_realsmith_O2kYbHIKTS*/ : /*TAG3:STA*/((int)(realsmith_Bff1z0v8zy((int)(index_realsmith_O2kYbHIKTS)+(-1))+(int)(index_realsmith_O2kYbHIKTS)-(23))+index_realsmith_O2kYbHIKTS)/*TAG3:END:index_realsmith_O2kYbHIKTS*/;
g_L83BDN[1] = -48 + (index_realsmith_O2kYbHIKTS - (23));
g_9EV3Y7 = -67 + (is_memset_realsmith_O2kYbHIKTS - (58));
/*aft_stmt:637*/
/*aft_stmt:637*/
/*aft_stmt:637*/
    /*bef_stmt:655*/
return 0xFF | Tag4_realsmith_O2kYbHIKTS(/*int:657:657:655:e*/inv_idx_realsmith_O2kYbHIKTS);
/*aft_stmt:655*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_NrYlxcgvFT(x) (x)
#define Tag2_realsmith_NrYlxcgvFT(x) (x)
#define Tag3_realsmith_NrYlxcgvFT(x) (x)
#define Tag4_realsmith_NrYlxcgvFT(x) (x)
#define Tag5_realsmith_NrYlxcgvFT(x) (x)
#include "stdbool.h"
int realsmith_NrYlxcgvFT(int xa_flags_realsmith_NrYlxcgvFT, int mark_realsmith_NrYlxcgvFT) {
    /*bef_stmt:618*/
int mark_flag_realsmith_NrYlxcgvFT = 1 << /*TAG1:STA*/((int)(realsmith_o9vzofK1Yw((int)(mark_realsmith_NrYlxcgvFT)+(31), (int)(mark_realsmith_NrYlxcgvFT)+(40))+(int)(mark_realsmith_NrYlxcgvFT)-(57))+mark_realsmith_NrYlxcgvFT)/*TAG1:END:mark_realsmith_NrYlxcgvFT*/;
/*aft_stmt:618*/
    /*bef_stmt:666*/
/*bef_stmt:666*/
if (!(/*TAG2:STA*/((int)(realsmith_proxy_A2M2IkbRjI((int)(mark_realsmith_NrYlxcgvFT)+(7), (int)(mark_realsmith_NrYlxcgvFT)+(14), (int)(mark_realsmith_NrYlxcgvFT)+(-23), (int)(mark_realsmith_NrYlxcgvFT)+(11))+(int)(mark_realsmith_NrYlxcgvFT)-(8))+xa_flags_realsmith_NrYlxcgvFT)/*TAG2:END:xa_flags_realsmith_NrYlxcgvFT*/ & /*TAG3:STA*/((mark_flag_realsmith_NrYlxcgvFT) + (g_9Y8MHE) - 3)/*TAG3:END:mark_flag_realsmith_NrYlxcgvFT*/)) {
        /*bef_stmt:657*/
xa_flags_realsmith_NrYlxcgvFT |= /*TAG4:STA*/((mark_flag_realsmith_NrYlxcgvFT) + (g_NIS3MK[3]) - -125)/*TAG4:END:mark_flag_realsmith_NrYlxcgvFT*/;
g_NIS3MK[3] = -125 + (mark_flag_realsmith_NrYlxcgvFT - (512)) + (mark_realsmith_NrYlxcgvFT - (9));
/*aft_stmt:657*/
    }
g_9Y8MHE = 3 + (mark_flag_realsmith_NrYlxcgvFT - (512)) + (mark_realsmith_NrYlxcgvFT - (9));
/*aft_stmt:666*/
/*aft_stmt:666*/
    /*bef_stmt:677*/
return /*TAG5:STA*/((xa_flags_realsmith_NrYlxcgvFT) + (g_9Y8MHE) - 3)/*TAG5:END:xa_flags_realsmith_NrYlxcgvFT*/;
g_9Y8MHE = 3 + (xa_flags_realsmith_NrYlxcgvFT - (524));
/*aft_stmt:677*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_qRtEBxLExz(x) (x)
#define Tag2_realsmith_qRtEBxLExz(x) (x)
#define Tag3_realsmith_qRtEBxLExz(x) (x)
#define Tag4_realsmith_qRtEBxLExz(x) (x)
#include "stdlib.h"
int realsmith_qRtEBxLExz(int multiq_realsmith_qRtEBxLExz, int tx_fifo_num_realsmith_qRtEBxLExz) {
    int i_realsmith_qRtEBxLExz;
    int queue_state_realsmith_qRtEBxLExz = 0;
    /*bef_stmt:17214*/
if (!/*TAG1:STA*/((int)(realsmith_VRFvUflWcf((unsigned long)(multiq_realsmith_qRtEBxLExz)+(-82), (unsigned long)(multiq_realsmith_qRtEBxLExz)+(-58), (unsigned long)(multiq_realsmith_qRtEBxLExz)+(-88))+(int)(multiq_realsmith_qRtEBxLExz)-(97))+multiq_realsmith_qRtEBxLExz)/*TAG1:END:multiq_realsmith_qRtEBxLExz*/) {
        /*bef_stmt:17204*/
/*bef_stmt:17204*/
for (i_realsmith_qRtEBxLExz = 0; Tag2_realsmith_qRtEBxLExz(/*int:17227:17227:17204:e*/i_realsmith_qRtEBxLExz) < Tag3_realsmith_qRtEBxLExz(/*int:17227:17227:17204:e*/tx_fifo_num_realsmith_qRtEBxLExz); i_realsmith_qRtEBxLExz++) {
            queue_state_realsmith_qRtEBxLExz = 0;
        }
/*aft_stmt:17204*/
/*aft_stmt:17204*/
    }
/*aft_stmt:17214*/
    /*bef_stmt:17225*/
return /*TAG4:STA*/((int)(realsmith_hQuckbyQYb((int)(queue_state_realsmith_qRtEBxLExz)+(73), (int)(queue_state_realsmith_qRtEBxLExz)+(58), (int)(queue_state_realsmith_qRtEBxLExz)+(63), (int)(queue_state_realsmith_qRtEBxLExz)+(35))+(int)(queue_state_realsmith_qRtEBxLExz)-(-22))+queue_state_realsmith_qRtEBxLExz)/*TAG4:END:queue_state_realsmith_qRtEBxLExz*/;
/*aft_stmt:17225*/
}



#include "stdlib.h"
int realsmith_QLCLrTR4iO(int iface_realsmith_QLCLrTR4iO, int altsetting_realsmith_QLCLrTR4iO, int *extra_realsmith_QLCLrTR4iO, int extralen_realsmith_QLCLrTR4iO) {
    int bNumEndpoints_realsmith_QLCLrTR4iO = 1;
    int in_cables_realsmith_QLCLrTR4iO = 0;
    int out_cables_realsmith_QLCLrTR4iO = 0;
    int cs_desc_realsmith_QLCLrTR4iO;
    if (iface_realsmith_QLCLrTR4iO == 0)
        return -1;
    if (bNumEndpoints_realsmith_QLCLrTR4iO < 1)
        return -1;
    for (cs_desc_realsmith_QLCLrTR4iO = 0; cs_desc_realsmith_QLCLrTR4iO < extralen_realsmith_QLCLrTR4iO && extra_realsmith_QLCLrTR4iO[cs_desc_realsmith_QLCLrTR4iO] >= 2; cs_desc_realsmith_QLCLrTR4iO += extra_realsmith_QLCLrTR4iO[cs_desc_realsmith_QLCLrTR4iO]) {
        if (extra_realsmith_QLCLrTR4iO[cs_desc_realsmith_QLCLrTR4iO + 1] == 0x24) {
            if (extra_realsmith_QLCLrTR4iO[cs_desc_realsmith_QLCLrTR4iO + 2] == 0x02)
                in_cables_realsmith_QLCLrTR4iO = (in_cables_realsmith_QLCLrTR4iO << 1) | 1;
            else if (extra_realsmith_QLCLrTR4iO[cs_desc_realsmith_QLCLrTR4iO + 2] == 0x03)
                out_cables_realsmith_QLCLrTR4iO = (out_cables_realsmith_QLCLrTR4iO << 1) | 1;
        }
    }
    if (!in_cables_realsmith_QLCLrTR4iO && !out_cables_realsmith_QLCLrTR4iO)
        return -1;
    return in_cables_realsmith_QLCLrTR4iO + out_cables_realsmith_QLCLrTR4iO;
}
int realsmith_proxy_wy6ECgx8MQ(int p_0_uHLQ6rvhul, int p_1_u2msmGrV6B, int p_2_7AaQvIlWeL, int p_3_Y0EroKwoj6) {
int proxy_4DbQZDudkK[20] = { p_2_7AaQvIlWeL, p_2_7AaQvIlWeL, p_2_7AaQvIlWeL, 64, 48, 4, p_2_7AaQvIlWeL, p_2_7AaQvIlWeL, p_2_7AaQvIlWeL, 54, p_2_7AaQvIlWeL, 74, 93, p_2_7AaQvIlWeL, p_2_7AaQvIlWeL, 29, p_2_7AaQvIlWeL, 56, p_2_7AaQvIlWeL, 94 };
int proxy_ret_FfW3kX9yW4 = realsmith_QLCLrTR4iO(p_0_uHLQ6rvhul, p_1_u2msmGrV6B, proxy_4DbQZDudkK, p_3_Y0EroKwoj6);
return proxy_ret_FfW3kX9yW4;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_0QuhOv5zqz(x) (x)
#define Tag2_realsmith_0QuhOv5zqz(x) (x)
#include "stdbool.h"
struct v4l2_async_notifier_jQMXUC {
    struct {
        int (*bound_realsmith_0QuhOv5zqz)(struct v4l2_async_notifier_jQMXUC*, int, int);
    } *ops_realsmith_0QuhOv5zqz;
};
int realsmith_0QuhOv5zqz(int ops_bound_exists_realsmith_0QuhOv5zqz, int n_realsmith_0QuhOv5zqz, int subdev_realsmith_0QuhOv5zqz, int asd_realsmith_0QuhOv5zqz) {
    /*bef_stmt:842*/
if (!Tag1_realsmith_0QuhOv5zqz(/*int:855:855:842:e*/ops_bound_exists_realsmith_0QuhOv5zqz)) {
        return 0;
    }
/*aft_stmt:842*/
    /*bef_stmt:853*/
return Tag2_realsmith_0QuhOv5zqz(/*int:855:855:853:e*/n_realsmith_0QuhOv5zqz);
/*aft_stmt:853*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_VqcdLSdfeh(x) (x)
#define Tag2_realsmith_VqcdLSdfeh(x) (x)
#define Tag3_realsmith_VqcdLSdfeh(x) (x)
#define Tag4_realsmith_VqcdLSdfeh(x) (x)
#define Tag5_realsmith_VqcdLSdfeh(x) (x)
#include "stdlib.h"
int realsmith_VqcdLSdfeh(int seqid_realsmith_VqcdLSdfeh, int lsp_realsmith_VqcdLSdfeh, int l_ctx_realsmith_VqcdLSdfeh, int ctx_realsmith_VqcdLSdfeh) {
    /*bef_stmt:17194*/
/*bef_stmt:17194*/
/*bef_stmt:17194*/
/*bef_stmt:17194*/
int result_realsmith_VqcdLSdfeh = Tag1_realsmith_VqcdLSdfeh(/*int:17206:17206:17194:e*/seqid_realsmith_VqcdLSdfeh) + Tag2_realsmith_VqcdLSdfeh(/*int:17206:17206:17194:e*/lsp_realsmith_VqcdLSdfeh) + Tag3_realsmith_VqcdLSdfeh(/*int:17206:17206:17194:e*/l_ctx_realsmith_VqcdLSdfeh) + Tag4_realsmith_VqcdLSdfeh(/*int:17206:17206:17194:e*/ctx_realsmith_VqcdLSdfeh);
/*aft_stmt:17194*/
/*aft_stmt:17194*/
/*aft_stmt:17194*/
/*aft_stmt:17194*/
    /*bef_stmt:17204*/
return Tag5_realsmith_VqcdLSdfeh(/*int:17206:17206:17204:e*/result_realsmith_VqcdLSdfeh);
/*aft_stmt:17204*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_4FJm0SYeMx(x) (x)
#include "stdint.h"
int realsmith_4FJm0SYeMx(int val_realsmith_4FJm0SYeMx) {
    /*bef_stmt:1995*/
return ((Tag1_realsmith_4FJm0SYeMx(/*int:1997:1997:1995:e*/val_realsmith_4FJm0SYeMx)) << 2) & 0xFFFF;
/*aft_stmt:1995*/
}



#include "stdlib.h"
struct nfp6000_pcie_IEFGE0 {
    int *free_realsmith_fHI5I8g0RC;
};
struct nfp6000_explicit_priv_IEFGE0 {
    struct {
        long unsigned int group_realsmith_fHI5I8g0RC;
        long unsigned int area_realsmith_fHI5I8g0RC;
    } bar_realsmith_fHI5I8g0RC;
    struct nfp6000_pcie_IEFGE0 *nfp_realsmith_fHI5I8g0RC;
};
int realsmith_fHI5I8g0RC(int group_index_realsmith_fHI5I8g0RC, int area_index_realsmith_fHI5I8g0RC, int *free_array_realsmith_fHI5I8g0RC) {
    struct nfp6000_pcie_IEFGE0 nfp_realsmith_fHI5I8g0RC;
    nfp_realsmith_fHI5I8g0RC.free_realsmith_fHI5I8g0RC = free_array_realsmith_fHI5I8g0RC;
    struct nfp6000_explicit_priv_IEFGE0 priv_realsmith_fHI5I8g0RC;
    priv_realsmith_fHI5I8g0RC.bar_realsmith_fHI5I8g0RC.group_realsmith_fHI5I8g0RC = group_index_realsmith_fHI5I8g0RC;
    priv_realsmith_fHI5I8g0RC.bar_realsmith_fHI5I8g0RC.area_realsmith_fHI5I8g0RC = area_index_realsmith_fHI5I8g0RC;
    priv_realsmith_fHI5I8g0RC.nfp_realsmith_fHI5I8g0RC = &nfp_realsmith_fHI5I8g0RC;
    priv_realsmith_fHI5I8g0RC.nfp_realsmith_fHI5I8g0RC->free_realsmith_fHI5I8g0RC[priv_realsmith_fHI5I8g0RC.bar_realsmith_fHI5I8g0RC.group_realsmith_fHI5I8g0RC] = 1;
    return priv_realsmith_fHI5I8g0RC.nfp_realsmith_fHI5I8g0RC->free_realsmith_fHI5I8g0RC[priv_realsmith_fHI5I8g0RC.bar_realsmith_fHI5I8g0RC.group_realsmith_fHI5I8g0RC];
}
int realsmith_proxy_QTipe9rTEa(int p_0_74UDOITYLM, int p_1_LwwROXTivo, int p_2_hvjbEXMtPD) {
int proxy_5nlb6O5iyj[17] = { 20, 38, p_2_hvjbEXMtPD, 10, 55, 97, 39, p_2_hvjbEXMtPD, p_2_hvjbEXMtPD, 73, p_2_hvjbEXMtPD, p_2_hvjbEXMtPD, 50, 44, 0, 64, p_2_hvjbEXMtPD };
int proxy_ret_mdreumVb98 = realsmith_fHI5I8g0RC(p_0_74UDOITYLM, p_1_LwwROXTivo, proxy_5nlb6O5iyj);
return proxy_ret_mdreumVb98;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_e2di8pLdha(x) (x)
#define Tag2_realsmith_e2di8pLdha(x) (x)
#define Tag3_realsmith_e2di8pLdha(x) (x)
#define Tag4_realsmith_e2di8pLdha(x) (x)
#define Tag5_realsmith_e2di8pLdha(x) (x)
#define Tag6_realsmith_e2di8pLdha(x) (x)
#define Tag7_realsmith_e2di8pLdha(x) (x)
#define Tag8_realsmith_e2di8pLdha(x) (x)
#define Tag9_realsmith_e2di8pLdha(x) (x)
#include "stdlib.h"
struct soc_mixer_control_PzwUE1 {
    unsigned int reg_realsmith_e2di8pLdha;
    unsigned int shift_realsmith_e2di8pLdha;
    int invert_realsmith_e2di8pLdha;
};
int realsmith_e2di8pLdha(unsigned int reg_realsmith_e2di8pLdha, unsigned int shift_realsmith_e2di8pLdha, int invert_realsmith_e2di8pLdha, unsigned int val_realsmith_e2di8pLdha) {
    /*bef_stmt:17232*/
unsigned int mask_realsmith_e2di8pLdha = 1 << /*TAG1:STA*/((unsigned int)(realsmith_proxy_Y7DJ58WCrN((int)(shift_realsmith_e2di8pLdha)+(68), (int)(shift_realsmith_e2di8pLdha)+(32), (unsigned char)(shift_realsmith_e2di8pLdha)+(21), (unsigned char)(shift_realsmith_e2di8pLdha)+(-7), (int)(shift_realsmith_e2di8pLdha)+(63), (int)(shift_realsmith_e2di8pLdha)+(66), (int)(shift_realsmith_e2di8pLdha)+(50))+(int)(shift_realsmith_e2di8pLdha)-(788))+shift_realsmith_e2di8pLdha)/*TAG1:END:shift_realsmith_e2di8pLdha*/;
/*aft_stmt:17232*/
    unsigned int result_realsmith_e2di8pLdha;
    /*bef_stmt:17265*/
val_realsmith_e2di8pLdha &= /*TAG2:STA*/((unsigned int)(realsmith_6zMf7kMERO((int)(mask_realsmith_e2di8pLdha)+(-16294))+(int)(mask_realsmith_e2di8pLdha)-(16385))+mask_realsmith_e2di8pLdha)/*TAG2:END:mask_realsmith_e2di8pLdha*/;
/*aft_stmt:17265*/
    /*bef_stmt:17337*/
/*bef_stmt:17337*/
/*bef_stmt:17337*/
/*bef_stmt:17337*/
if (Tag3_realsmith_e2di8pLdha(/*unsigned int:17382:17382:17337:e*/shift_realsmith_e2di8pLdha) != 0 && /*TAG4:STA*/((unsigned int)(realsmith_EtQHjCIuS9((int)(val_realsmith_e2di8pLdha)+(72), (int)(val_realsmith_e2di8pLdha)+(66))+(int)(val_realsmith_e2di8pLdha)-(72))+val_realsmith_e2di8pLdha)/*TAG4:END:val_realsmith_e2di8pLdha*/ != 0)
        val_realsmith_e2di8pLdha = Tag5_realsmith_e2di8pLdha(/*unsigned int:17382:17382:17337:e*/val_realsmith_e2di8pLdha) >> Tag6_realsmith_e2di8pLdha(/*unsigned int:17382:17382:17337:e*/shift_realsmith_e2di8pLdha);
g_9EV3Y7 = -67 + (shift_realsmith_e2di8pLdha - (14));
/*aft_stmt:17337*/
/*aft_stmt:17337*/
/*aft_stmt:17337*/
/*aft_stmt:17337*/
    /*bef_stmt:17366*/
/*bef_stmt:17366*/
result_realsmith_e2di8pLdha = Tag7_realsmith_e2di8pLdha(/*unsigned int:17382:17382:17366:e*/val_realsmith_e2di8pLdha) ^ /*TAG8:STA*/((int)(realsmith_JsoADfceYN((int)(invert_realsmith_e2di8pLdha)+(16), (int)(invert_realsmith_e2di8pLdha)+(-23), (int)(invert_realsmith_e2di8pLdha)+(-47))+(int)(invert_realsmith_e2di8pLdha)-(82))+invert_realsmith_e2di8pLdha)/*TAG8:END:invert_realsmith_e2di8pLdha*/;
/*aft_stmt:17366*/
/*aft_stmt:17366*/
    /*bef_stmt:17380*/
return /*TAG9:STA*/((unsigned int)(realsmith_mUMtZqJEH1((int)(result_realsmith_e2di8pLdha)+(6), (int)(result_realsmith_e2di8pLdha)+(8))+(int)(result_realsmith_e2di8pLdha)-(172))+result_realsmith_e2di8pLdha)/*TAG9:END:result_realsmith_e2di8pLdha*/;
/*aft_stmt:17380*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_rNpCX4qdxx(x) (x)
#define Tag2_realsmith_rNpCX4qdxx(x) (x)
#define Tag3_realsmith_rNpCX4qdxx(x) (x)
#define Tag4_realsmith_rNpCX4qdxx(x) (x)
#define Tag5_realsmith_rNpCX4qdxx(x) (x)
#define Tag6_realsmith_rNpCX4qdxx(x) (x)
#define Tag7_realsmith_rNpCX4qdxx(x) (x)
#define Tag8_realsmith_rNpCX4qdxx(x) (x)
#define Tag9_realsmith_rNpCX4qdxx(x) (x)
#include "stdlib.h"
struct panfrost_gem_object_8kXvx4 {
    int start_realsmith_rNpCX4qdxx;
};
struct drm_panfrost_create_bo_8kXvx4 {
    int flags_realsmith_rNpCX4qdxx;
    int offset_realsmith_rNpCX4qdxx;
    int handle_realsmith_rNpCX4qdxx;
    int size_realsmith_rNpCX4qdxx;
    int pad_realsmith_rNpCX4qdxx;
};
int realsmith_rNpCX4qdxx(int size_realsmith_rNpCX4qdxx, int flags_realsmith_rNpCX4qdxx, int pad_realsmith_rNpCX4qdxx) {
    struct panfrost_gem_object_8kXvx4 *bo_realsmith_rNpCX4qdxx;
    struct drm_panfrost_create_bo_8kXvx4 args_realsmith_rNpCX4qdxx;
    /*bef_stmt:17321*/
args_realsmith_rNpCX4qdxx.size_realsmith_rNpCX4qdxx = Tag1_realsmith_rNpCX4qdxx(/*int:17715:17715:17321:e*/size_realsmith_rNpCX4qdxx);
/*aft_stmt:17321*/
    /*bef_stmt:17357*/
args_realsmith_rNpCX4qdxx.flags_realsmith_rNpCX4qdxx = /*TAG2:STA*/((int)(realsmith_QosT1H10Av((int)(flags_realsmith_rNpCX4qdxx)+(-58))+(int)(flags_realsmith_rNpCX4qdxx)-(60))+flags_realsmith_rNpCX4qdxx)/*TAG2:END:flags_realsmith_rNpCX4qdxx*/;
/*aft_stmt:17357*/
    /*bef_stmt:17378*/
args_realsmith_rNpCX4qdxx.pad_realsmith_rNpCX4qdxx = /*TAG3:STA*/((int)(realsmith_KdCgiydVph((int)(pad_realsmith_rNpCX4qdxx)+(3), (int)(pad_realsmith_rNpCX4qdxx)+(44), (int)(pad_realsmith_rNpCX4qdxx)+(-10))+(int)(pad_realsmith_rNpCX4qdxx)-(181))+pad_realsmith_rNpCX4qdxx)/*TAG3:END:pad_realsmith_rNpCX4qdxx*/;
/*aft_stmt:17378*/
    /*bef_stmt:17468*/
/*bef_stmt:17468*/
/*bef_stmt:17468*/
if (!/*TAG4:STA*/((args_realsmith_rNpCX4qdxx.size_realsmith_rNpCX4qdxx) + (g_HO6910[1]) - 112)/*TAG4:END:args_realsmith_rNpCX4qdxx.size_realsmith_rNpCX4qdxx*/ || /*TAG5:STA*/((int)(realsmith_w38HmhAbOv((int)(args_realsmith_rNpCX4qdxx.pad_realsmith_rNpCX4qdxx)+(56), (int)(args_realsmith_rNpCX4qdxx.pad_realsmith_rNpCX4qdxx)+(-7))+(int)(args_realsmith_rNpCX4qdxx.pad_realsmith_rNpCX4qdxx)-(128))+args_realsmith_rNpCX4qdxx.pad_realsmith_rNpCX4qdxx)/*TAG5:END:args_realsmith_rNpCX4qdxx.pad_realsmith_rNpCX4qdxx*/ || (/*TAG6:STA*/((int)(realsmith_5GkkVRCGPR((int)(args_realsmith_rNpCX4qdxx.flags_realsmith_rNpCX4qdxx)+(-57))+(int)(args_realsmith_rNpCX4qdxx.flags_realsmith_rNpCX4qdxx)-(106))+args_realsmith_rNpCX4qdxx.flags_realsmith_rNpCX4qdxx)/*TAG6:END:args_realsmith_rNpCX4qdxx.flags_realsmith_rNpCX4qdxx*/ & ~(2 | 1)))
        return -22;
g_HO6910[1] = 112 + (args_realsmith_rNpCX4qdxx.size_realsmith_rNpCX4qdxx - (92));
/*aft_stmt:17468*/
/*aft_stmt:17468*/
/*aft_stmt:17468*/
    /*bef_stmt:17538*/
/*bef_stmt:17538*/
if ((Tag7_realsmith_rNpCX4qdxx(/*int:17715:17715:17538:e*/args_realsmith_rNpCX4qdxx.flags_realsmith_rNpCX4qdxx) & 1) && !(Tag8_realsmith_rNpCX4qdxx(/*int:17715:17715:17538:e*/args_realsmith_rNpCX4qdxx.flags_realsmith_rNpCX4qdxx) & 2))
        return -22;
/*aft_stmt:17538*/
/*aft_stmt:17538*/
    bo_realsmith_rNpCX4qdxx = (struct panfrost_gem_object_8kXvx4 *)(malloc(sizeof(struct panfrost_gem_object_8kXvx4)));
    if (!bo_realsmith_rNpCX4qdxx)
        return -22;
    bo_realsmith_rNpCX4qdxx->start_realsmith_rNpCX4qdxx = 0;
    /*bef_stmt:17671*/
args_realsmith_rNpCX4qdxx.offset_realsmith_rNpCX4qdxx = Tag9_realsmith_rNpCX4qdxx(/*int:17715:17715:17671:e*/bo_realsmith_rNpCX4qdxx->start_realsmith_rNpCX4qdxx) << 12;
/*aft_stmt:17671*/
    (free(bo_realsmith_rNpCX4qdxx));
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_VINj6XiQ91(x) (x)
#define Tag2_realsmith_VINj6XiQ91(x) (x)
#define Tag3_realsmith_VINj6XiQ91(x) (x)
#define Tag4_realsmith_VINj6XiQ91(x) (x)
#include "stdlib.h"
int realsmith_VINj6XiQ91(int addr_realsmith_VINj6XiQ91, int size_realsmith_VINj6XiQ91) {
    struct {
        unsigned long refd_realsmith_VINj6XiQ91;
        unsigned long page_realsmith_VINj6XiQ91;
        unsigned long size_realsmith_VINj6XiQ91;
        unsigned long addr_realsmith_VINj6XiQ91;
    } vma_realsmith_VINj6XiQ91;
    /*bef_stmt:17222*/
vma_realsmith_VINj6XiQ91.addr_realsmith_VINj6XiQ91 = /*TAG1:STA*/((int)(realsmith_proxy_QTipe9rTEa((int)(addr_realsmith_VINj6XiQ91)+(-42), (int)(addr_realsmith_VINj6XiQ91)+(-5), (int)(addr_realsmith_VINj6XiQ91)+(-60))+(int)(addr_realsmith_VINj6XiQ91)-(53))+addr_realsmith_VINj6XiQ91)/*TAG1:END:addr_realsmith_VINj6XiQ91*/;
/*aft_stmt:17222*/
    /*bef_stmt:17260*/
vma_realsmith_VINj6XiQ91.size_realsmith_VINj6XiQ91 = /*TAG2:STA*/((size_realsmith_VINj6XiQ91) + (g_QM9VDC[0]) - -95)/*TAG2:END:size_realsmith_VINj6XiQ91*/;
g_QM9VDC[0] = -95 + (size_realsmith_VINj6XiQ91 - (33));
/*aft_stmt:17260*/
    vma_realsmith_VINj6XiQ91.page_realsmith_VINj6XiQ91 = 0;
    vma_realsmith_VINj6XiQ91.refd_realsmith_VINj6XiQ91 = 0;
    /*bef_stmt:17339*/
/*bef_stmt:17339*/
return Tag3_realsmith_VINj6XiQ91(/*unsigned long:17341:17341:17339:e*/vma_realsmith_VINj6XiQ91.addr_realsmith_VINj6XiQ91) + /*TAG4:STA*/((vma_realsmith_VINj6XiQ91.size_realsmith_VINj6XiQ91) + (g_BISWN8) - 69)/*TAG4:END:vma_realsmith_VINj6XiQ91.size_realsmith_VINj6XiQ91*/;
g_BISWN8 = 69 + (vma_realsmith_VINj6XiQ91.size_realsmith_VINj6XiQ91 - (33));
/*aft_stmt:17339*/
/*aft_stmt:17339*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_jMzxnkZOco(x) (x)
#define Tag2_realsmith_jMzxnkZOco(x) (x)
#define Tag3_realsmith_jMzxnkZOco(x) (x)
#define Tag4_realsmith_jMzxnkZOco(x) (x)
#define Tag5_realsmith_jMzxnkZOco(x) (x)
#define Tag6_realsmith_jMzxnkZOco(x) (x)
#define Tag7_realsmith_jMzxnkZOco(x) (x)
#define Tag8_realsmith_jMzxnkZOco(x) (x)
#define Tag9_realsmith_jMzxnkZOco(x) (x)
#define Tag10_realsmith_jMzxnkZOco(x) (x)
#define Tag11_realsmith_jMzxnkZOco(x) (x)
#include "stdlib.h"
int realsmith_jMzxnkZOco(int handle_realsmith_jMzxnkZOco, unsigned long long phys_addr_realsmith_jMzxnkZOco, unsigned int gsi_base_realsmith_jMzxnkZOco) {
    int ret_realsmith_jMzxnkZOco = -1;
    int ioapic_id_realsmith_jMzxnkZOco = -1;
    unsigned long long addr_realsmith_jMzxnkZOco;
    /*bef_stmt:17278*/
/*bef_stmt:17278*/
if (Tag1_realsmith_jMzxnkZOco(/*int:17440:17440:17278:e*/handle_realsmith_jMzxnkZOco) >= 0 && Tag2_realsmith_jMzxnkZOco(/*unsigned int:17440:17440:17278:e*/gsi_base_realsmith_jMzxnkZOco) >= 0) {
        /*bef_stmt:17255*/
/*bef_stmt:17255*/
ioapic_id_realsmith_jMzxnkZOco = Tag3_realsmith_jMzxnkZOco(/*int:17440:17440:17255:e*/handle_realsmith_jMzxnkZOco) + Tag4_realsmith_jMzxnkZOco(/*unsigned int:17440:17440:17255:e*/gsi_base_realsmith_jMzxnkZOco);
/*aft_stmt:17255*/
/*aft_stmt:17255*/
        /*bef_stmt:17270*/
addr_realsmith_jMzxnkZOco = Tag5_realsmith_jMzxnkZOco(/*unsigned long long:17440:17440:17270:e*/phys_addr_realsmith_jMzxnkZOco);
/*aft_stmt:17270*/
    }
/*aft_stmt:17278*/
/*aft_stmt:17278*/
    /*bef_stmt:17391*/
if (Tag6_realsmith_jMzxnkZOco(/*int:17440:17440:17391:e*/ioapic_id_realsmith_jMzxnkZOco) < 0) {
        unsigned long long uid_realsmith_jMzxnkZOco = 0;
        /*bef_stmt:17359*/
if (Tag7_realsmith_jMzxnkZOco(/*int:17440:17440:17359:e*/handle_realsmith_jMzxnkZOco) >= 0) {
            /*bef_stmt:17352*/
uid_realsmith_jMzxnkZOco = Tag8_realsmith_jMzxnkZOco(/*int:17440:17440:17352:e*/handle_realsmith_jMzxnkZOco);
/*aft_stmt:17352*/
        }
/*aft_stmt:17359*/
        /*bef_stmt:17382*/
ioapic_id_realsmith_jMzxnkZOco = (int)Tag9_realsmith_jMzxnkZOco(/*unsigned long long:17386:17440:17382:e*/uid_realsmith_jMzxnkZOco);
/*aft_stmt:17382*/
    }
/*aft_stmt:17391*/
    /*bef_stmt:17427*/
if (Tag10_realsmith_jMzxnkZOco(/*int:17440:17440:17427:e*/ioapic_id_realsmith_jMzxnkZOco) >= 0) {
        ret_realsmith_jMzxnkZOco = 0;
    }
/*aft_stmt:17427*/
    /*bef_stmt:17438*/
return Tag11_realsmith_jMzxnkZOco(/*int:17440:17440:17438:e*/ret_realsmith_jMzxnkZOco);
/*aft_stmt:17438*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_WsNHhFXW2G(x) (x)
#define Tag2_realsmith_WsNHhFXW2G(x) (x)
#define Tag3_realsmith_WsNHhFXW2G(x) (x)
#define Tag4_realsmith_WsNHhFXW2G(x) (x)
#define Tag5_realsmith_WsNHhFXW2G(x) (x)
#define Tag6_realsmith_WsNHhFXW2G(x) (x)
#include "stdint.h"
#include "stdbool.h"
int realsmith_WsNHhFXW2G(unsigned long int dx_ring_pa_realsmith_WsNHhFXW2G, unsigned int size_realsmith_WsNHhFXW2G, _Bool is_vlan_rx_strip_realsmith_WsNHhFXW2G, unsigned int vec_idx_realsmith_WsNHhFXW2G, unsigned int cpu_realsmith_WsNHhFXW2G) {
    /*bef_stmt:2076*/
unsigned int dma_desc_addr_lsw_realsmith_WsNHhFXW2G = (unsigned int)/*TAG1:STA*/((unsigned long)(realsmith_proxy_NqalBPfsah((int)(dx_ring_pa_realsmith_WsNHhFXW2G)+(0), (int)(dx_ring_pa_realsmith_WsNHhFXW2G)+(-42), (int)(dx_ring_pa_realsmith_WsNHhFXW2G)+(-194), (int)(dx_ring_pa_realsmith_WsNHhFXW2G)+(-65), (int)(dx_ring_pa_realsmith_WsNHhFXW2G)+(-88), (int)(dx_ring_pa_realsmith_WsNHhFXW2G)+(-76))+(int)(dx_ring_pa_realsmith_WsNHhFXW2G)-(112))+dx_ring_pa_realsmith_WsNHhFXW2G)/*TAG1:END:dx_ring_pa_realsmith_WsNHhFXW2G*/;
/*aft_stmt:2076*/
    /*bef_stmt:2126*/
unsigned int dma_desc_addr_msw_realsmith_WsNHhFXW2G = (unsigned int)(/*TAG2:STA*/((dx_ring_pa_realsmith_WsNHhFXW2G) + (g_BISWN8) - 69)/*TAG2:END:dx_ring_pa_realsmith_WsNHhFXW2G*/ >> 32);
g_BISWN8 = 69 + (dx_ring_pa_realsmith_WsNHhFXW2G - (100));
/*aft_stmt:2126*/
    /*bef_stmt:2151*/
_Bool vlan_rx_stripping_realsmith_WsNHhFXW2G = /*TAG3:STA*/((_Bool)(realsmith_proxy_xPkulhdn5C((int)(is_vlan_rx_strip_realsmith_WsNHhFXW2G)+(13), (int)(is_vlan_rx_strip_realsmith_WsNHhFXW2G)+(2), (int)(is_vlan_rx_strip_realsmith_WsNHhFXW2G)+(78), (int)(is_vlan_rx_strip_realsmith_WsNHhFXW2G)+(-57))+(int)(is_vlan_rx_strip_realsmith_WsNHhFXW2G)-(1))+is_vlan_rx_strip_realsmith_WsNHhFXW2G)/*TAG3:END:is_vlan_rx_strip_realsmith_WsNHhFXW2G*/;
/*aft_stmt:2151*/
    _Bool rx_desc_en_realsmith_WsNHhFXW2G = 0;
    unsigned int head_splitting_realsmith_WsNHhFXW2G = 0U;
    /*bef_stmt:2233*/
unsigned int desc_len_realsmith_WsNHhFXW2G = /*TAG4:STA*/((unsigned int)(realsmith_rNpCX4qdxx((int)(size_realsmith_WsNHhFXW2G)+(69), (int)(size_realsmith_WsNHhFXW2G)+(59), (int)(size_realsmith_WsNHhFXW2G)+(13))+(int)(size_realsmith_WsNHhFXW2G)-(1))+size_realsmith_WsNHhFXW2G)/*TAG4:END:size_realsmith_WsNHhFXW2G*/ / 8U;
/*aft_stmt:2233*/
    unsigned int data_buff_size_realsmith_WsNHhFXW2G = 1024U;
    unsigned int head_buff_size_realsmith_WsNHhFXW2G = 0U;
    rx_desc_en_realsmith_WsNHhFXW2G = 0;
    head_splitting_realsmith_WsNHhFXW2G = 0U;
    _Bool rx_mode_realsmith_WsNHhFXW2G = 1;
    /*bef_stmt:2357*/
unsigned int irq_map_realsmith_WsNHhFXW2G = /*TAG5:STA*/((unsigned int)(realsmith_VINj6XiQ91((int)(vec_idx_realsmith_WsNHhFXW2G)+(26), (int)(vec_idx_realsmith_WsNHhFXW2G)+(7))+(int)(vec_idx_realsmith_WsNHhFXW2G)-(111))+vec_idx_realsmith_WsNHhFXW2G)/*TAG5:END:vec_idx_realsmith_WsNHhFXW2G*/;
/*aft_stmt:2357*/
    _Bool irq_en_realsmith_WsNHhFXW2G = 1;
    /*bef_stmt:2408*/
unsigned int cpu_id_realsmith_WsNHhFXW2G = /*TAG6:STA*/((unsigned int)(realsmith_e2di8pLdha((unsigned int)(cpu_realsmith_WsNHhFXW2G)+(-5), (unsigned int)(cpu_realsmith_WsNHhFXW2G)+(-81), (int)(cpu_realsmith_WsNHhFXW2G)+(-14), (unsigned int)(cpu_realsmith_WsNHhFXW2G)+(-38))+(int)(cpu_realsmith_WsNHhFXW2G)-(176))+cpu_realsmith_WsNHhFXW2G)/*TAG6:END:cpu_realsmith_WsNHhFXW2G*/;
/*aft_stmt:2408*/
    unsigned int dca_en_realsmith_WsNHhFXW2G = 0U;
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_h6hk2qGsuT(x) (x)
#define Tag2_realsmith_h6hk2qGsuT(x) (x)
#define Tag3_realsmith_h6hk2qGsuT(x) (x)
#define Tag4_realsmith_h6hk2qGsuT(x) (x)
#include "stdlib.h"
struct nvif_mmu_7DkPYX {
    int mem_realsmith_h6hk2qGsuT;
};
struct nvif_mem_7DkPYX {
    int object_realsmith_h6hk2qGsuT;
};
int realsmith_h6hk2qGsuT(int mmu_mem_realsmith_h6hk2qGsuT, int type_realsmith_h6hk2qGsuT, unsigned long size_realsmith_h6hk2qGsuT) {
    struct nvif_mmu_7DkPYX mmu_realsmith_h6hk2qGsuT;
    /*bef_stmt:17231*/
mmu_realsmith_h6hk2qGsuT.mem_realsmith_h6hk2qGsuT = /*TAG1:STA*/((mmu_mem_realsmith_h6hk2qGsuT) + (g_9EV3Y7) - -67)/*TAG1:END:mmu_mem_realsmith_h6hk2qGsuT*/;
g_9EV3Y7 = -67 + (mmu_mem_realsmith_h6hk2qGsuT - (17));
/*aft_stmt:17231*/
    struct nvif_mem_7DkPYX mem_realsmith_h6hk2qGsuT;
    int NVIF_MEM_MAPPABLE_realsmith_h6hk2qGsuT = 1;
    int ret_realsmith_h6hk2qGsuT = 0;
    /*bef_stmt:17378*/
if (/*TAG2:STA*/((int)(realsmith_proxy_rx54tVfpXd((int)(ret_realsmith_h6hk2qGsuT)+(49), (int)(ret_realsmith_h6hk2qGsuT)+(-100))+(int)(ret_realsmith_h6hk2qGsuT)-(-1))+ret_realsmith_h6hk2qGsuT)/*TAG2:END:ret_realsmith_h6hk2qGsuT*/ == 0) {
        ret_realsmith_h6hk2qGsuT = 0;
        /*bef_stmt:17370*/
if (/*TAG3:STA*/((ret_realsmith_h6hk2qGsuT) + (g_LEKDNV) - 41)/*TAG3:END:ret_realsmith_h6hk2qGsuT*/) {
            ret_realsmith_h6hk2qGsuT = -1;
        }
g_LEKDNV = 41 + (ret_realsmith_h6hk2qGsuT - (0));
/*aft_stmt:17370*/
    }
/*aft_stmt:17378*/
    /*bef_stmt:17389*/
return /*TAG4:STA*/((ret_realsmith_h6hk2qGsuT) + (g_BISWN8) - 69)/*TAG4:END:ret_realsmith_h6hk2qGsuT*/;
g_BISWN8 = 69 + (ret_realsmith_h6hk2qGsuT - (0));
/*aft_stmt:17389*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_0Q0IKN6fFl(x) (x)
#define Tag2_realsmith_0Q0IKN6fFl(x) (x)
#define Tag3_realsmith_0Q0IKN6fFl(x) (x)
#define Tag4_realsmith_0Q0IKN6fFl(x) (x)
#define Tag5_realsmith_0Q0IKN6fFl(x) (x)
#define Tag6_realsmith_0Q0IKN6fFl(x) (x)
#define Tag7_realsmith_0Q0IKN6fFl(x) (x)
#define Tag8_realsmith_0Q0IKN6fFl(x) (x)
#define Tag9_realsmith_0Q0IKN6fFl(x) (x)
#define Tag10_realsmith_0Q0IKN6fFl(x) (x)
#define Tag11_realsmith_0Q0IKN6fFl(x) (x)
#include "stdlib.h"
struct file_lock_ctLj09 {
    long long fl_end_realsmith_0Q0IKN6fFl;
    long long fl_start_realsmith_0Q0IKN6fFl;
    int fl_type_realsmith_0Q0IKN6fFl;
    int fl_flags_realsmith_0Q0IKN6fFl;
};
struct cifs_tcon_ctLj09 {
    struct {
        long long Capability_realsmith_0Q0IKN6fFl;
    } fsUnixInfo_realsmith_0Q0IKN6fFl;
    struct {
        int server_realsmith_0Q0IKN6fFl;
    } *ses_realsmith_0Q0IKN6fFl;
};
struct cifs_sb_info_ctLj09 {
    int mnt_cifs_flags_realsmith_0Q0IKN6fFl;
};
struct cifsFileInfo_ctLj09 {
    int tlink_realsmith_0Q0IKN6fFl;
};
int realsmith_0Q0IKN6fFl(int cmd_realsmith_0Q0IKN6fFl, int flock_flags_realsmith_0Q0IKN6fFl, int flock_type_realsmith_0Q0IKN6fFl, long long flock_start_realsmith_0Q0IKN6fFl, long long flock_end_realsmith_0Q0IKN6fFl, int private_data_realsmith_0Q0IKN6fFl, int ses_server_realsmith_0Q0IKN6fFl, long long fsUnixInfo_Capability_realsmith_0Q0IKN6fFl, int mnt_cifs_flags_realsmith_0Q0IKN6fFl) {
    int rc_realsmith_0Q0IKN6fFl, xid_realsmith_0Q0IKN6fFl;
    int lock_realsmith_0Q0IKN6fFl = 0, unlock_realsmith_0Q0IKN6fFl = 0;
    int wait_flag_realsmith_0Q0IKN6fFl = 0;
    int posix_lck_realsmith_0Q0IKN6fFl = 0;
    struct cifs_sb_info_ctLj09 cifs_sb_realsmith_0Q0IKN6fFl;
    struct cifs_tcon_ctLj09 tcon_realsmith_0Q0IKN6fFl;
    struct cifsFileInfo_ctLj09 cfile_realsmith_0Q0IKN6fFl;
    long long type_realsmith_0Q0IKN6fFl;
    rc_realsmith_0Q0IKN6fFl = -13;
    xid_realsmith_0Q0IKN6fFl = (1);
    /*bef_stmt:17805*/
cfile_realsmith_0Q0IKN6fFl.tlink_realsmith_0Q0IKN6fFl = Tag1_realsmith_0Q0IKN6fFl(/*int:18432:18432:17805:e*/private_data_realsmith_0Q0IKN6fFl);
/*aft_stmt:17805*/
    tcon_realsmith_0Q0IKN6fFl.ses_realsmith_0Q0IKN6fFl = (malloc(sizeof(*tcon_realsmith_0Q0IKN6fFl.ses_realsmith_0Q0IKN6fFl)));
    /*bef_stmt:17908*/
tcon_realsmith_0Q0IKN6fFl.ses_realsmith_0Q0IKN6fFl->server_realsmith_0Q0IKN6fFl = Tag2_realsmith_0Q0IKN6fFl(/*int:18432:18432:17908:e*/ses_server_realsmith_0Q0IKN6fFl);
/*aft_stmt:17908*/
    /*bef_stmt:17955*/
tcon_realsmith_0Q0IKN6fFl.fsUnixInfo_realsmith_0Q0IKN6fFl.Capability_realsmith_0Q0IKN6fFl = Tag3_realsmith_0Q0IKN6fFl(/*long long:18432:18432:17955:e*/fsUnixInfo_Capability_realsmith_0Q0IKN6fFl);
/*aft_stmt:17955*/
    /*bef_stmt:17976*/
cifs_sb_realsmith_0Q0IKN6fFl.mnt_cifs_flags_realsmith_0Q0IKN6fFl = Tag4_realsmith_0Q0IKN6fFl(/*int:18432:18432:17976:e*/mnt_cifs_flags_realsmith_0Q0IKN6fFl);
/*aft_stmt:17976*/
    type_realsmith_0Q0IKN6fFl = 0;
    lock_realsmith_0Q0IKN6fFl = 0;
    unlock_realsmith_0Q0IKN6fFl = 0;
    wait_flag_realsmith_0Q0IKN6fFl = 0;
    /*bef_stmt:18185*/
/*bef_stmt:18185*/
if ((tcon_realsmith_0Q0IKN6fFl.ses_realsmith_0Q0IKN6fFl != ((void*)0)) && ((1LL << 0) & Tag5_realsmith_0Q0IKN6fFl(/*long long:18432:18432:18185:e*/tcon_realsmith_0Q0IKN6fFl.fsUnixInfo_realsmith_0Q0IKN6fFl.Capability_realsmith_0Q0IKN6fFl)) && ((Tag6_realsmith_0Q0IKN6fFl(/*int:18432:18432:18185:e*/cifs_sb_realsmith_0Q0IKN6fFl.mnt_cifs_flags_realsmith_0Q0IKN6fFl) & 1) == 0)) {
        posix_lck_realsmith_0Q0IKN6fFl = 1;
    }
/*aft_stmt:18185*/
/*aft_stmt:18185*/
    /*bef_stmt:18273*/
if (Tag7_realsmith_0Q0IKN6fFl(/*int:18432:18432:18273:e*/cmd_realsmith_0Q0IKN6fFl) == 0) {
        rc_realsmith_0Q0IKN6fFl = -1;
        (free(tcon_realsmith_0Q0IKN6fFl.ses_realsmith_0Q0IKN6fFl));
        /*bef_stmt:18266*/
return Tag8_realsmith_0Q0IKN6fFl(/*int:18432:18432:18266:e*/rc_realsmith_0Q0IKN6fFl);
/*aft_stmt:18266*/
    }
/*aft_stmt:18273*/
    /*bef_stmt:18349*/
/*bef_stmt:18349*/
if (!Tag9_realsmith_0Q0IKN6fFl(/*int:18432:18432:18349:e*/lock_realsmith_0Q0IKN6fFl) && !Tag10_realsmith_0Q0IKN6fFl(/*int:18432:18432:18349:e*/unlock_realsmith_0Q0IKN6fFl)) {
        (free(tcon_realsmith_0Q0IKN6fFl.ses_realsmith_0Q0IKN6fFl));
        return -95;
    }
/*aft_stmt:18349*/
/*aft_stmt:18349*/
    rc_realsmith_0Q0IKN6fFl = -1;
    (free(tcon_realsmith_0Q0IKN6fFl.ses_realsmith_0Q0IKN6fFl));
    /*bef_stmt:18410*/
return Tag11_realsmith_0Q0IKN6fFl(/*int:18432:18432:18410:e*/rc_realsmith_0Q0IKN6fFl);
/*aft_stmt:18410*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_tmQT7mjWh6(x) (x)
#define Tag2_realsmith_tmQT7mjWh6(x) (x)
#include "stdlib.h"
struct pci_controller_8FvX9R {
    void (*setup_bridge_realsmith_tmQT7mjWh6)(int, unsigned long);
};
int realsmith_tmQT7mjWh6(int bus_id_realsmith_tmQT7mjWh6, unsigned long type_realsmith_tmQT7mjWh6) {
    struct pci_controller_8FvX9R hose_realsmith_tmQT7mjWh6;
    hose_realsmith_tmQT7mjWh6.setup_bridge_realsmith_tmQT7mjWh6 = ((void*)0);
    if (hose_realsmith_tmQT7mjWh6.setup_bridge_realsmith_tmQT7mjWh6) {
        /*bef_stmt:17301*/
/*bef_stmt:17301*/
(hose_realsmith_tmQT7mjWh6.setup_bridge_realsmith_tmQT7mjWh6(Tag1_realsmith_tmQT7mjWh6(/*int:17318:17318:17301:e*/bus_id_realsmith_tmQT7mjWh6), Tag2_realsmith_tmQT7mjWh6(/*unsigned long:17318:17318:17301:e*/type_realsmith_tmQT7mjWh6)));
/*aft_stmt:17301*/
/*aft_stmt:17301*/
    }
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_tJH5FjcGq6(x) (x)
#define Tag2_realsmith_tJH5FjcGq6(x) (x)
#include "stdlib.h"
struct nfp6000_area_priv_Hzdodn {
    unsigned long phys_realsmith_tJH5FjcGq6;
};
unsigned long realsmith_tJH5FjcGq6(unsigned long area_priv_phys_realsmith_tJH5FjcGq6) {
    struct nfp6000_area_priv_Hzdodn priv_realsmith_tJH5FjcGq6;
    /*bef_stmt:17151*/
priv_realsmith_tJH5FjcGq6.phys_realsmith_tJH5FjcGq6 = /*TAG1:STA*/((unsigned long)(realsmith_xm8Yk8JW2z((int)(area_priv_phys_realsmith_tJH5FjcGq6)+(34), (int)(area_priv_phys_realsmith_tJH5FjcGq6)+(23), (int)(area_priv_phys_realsmith_tJH5FjcGq6)+(45), (int)(area_priv_phys_realsmith_tJH5FjcGq6)+(29))+(int)(area_priv_phys_realsmith_tJH5FjcGq6)-(39))+area_priv_phys_realsmith_tJH5FjcGq6)/*TAG1:END:area_priv_phys_realsmith_tJH5FjcGq6*/;
/*aft_stmt:17151*/
    /*bef_stmt:17179*/
return Tag2_realsmith_tJH5FjcGq6(/*unsigned long:17181:17181:17179:e*/priv_realsmith_tJH5FjcGq6.phys_realsmith_tJH5FjcGq6);
/*aft_stmt:17179*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_mHX9r3bZPo(x) (x)
#define Tag2_realsmith_mHX9r3bZPo(x) (x)
#define Tag3_realsmith_mHX9r3bZPo(x) (x)
#define Tag4_realsmith_mHX9r3bZPo(x) (x)
#define Tag5_realsmith_mHX9r3bZPo(x) (x)
#define Tag6_realsmith_mHX9r3bZPo(x) (x)
#include "stdint.h"
int realsmith_mHX9r3bZPo(int opcode1_realsmith_mHX9r3bZPo, int opcode2_realsmith_mHX9r3bZPo, int modrm_value_realsmith_mHX9r3bZPo, int modrm_nbytes_realsmith_mHX9r3bZPo) {
    /*bef_stmt:2048*/
if (Tag1_realsmith_mHX9r3bZPo(/*int:2307:2307:2048:e*/modrm_nbytes_realsmith_mHX9r3bZPo) == 0)
        return -22;
/*aft_stmt:2048*/
    /*bef_stmt:2076*/
if (/*TAG2:STA*/((int)(realsmith_R2kKhqLAQz((int)(opcode1_realsmith_mHX9r3bZPo)+(-61))+(int)(opcode1_realsmith_mHX9r3bZPo)-(66))+opcode1_realsmith_mHX9r3bZPo)/*TAG2:END:opcode1_realsmith_mHX9r3bZPo*/ != 0xf)
        return -22;
/*aft_stmt:2076*/
    /*bef_stmt:2301*/
/*bef_stmt:2301*/
if (Tag3_realsmith_mHX9r3bZPo(/*int:2307:2307:2301:e*/opcode2_realsmith_mHX9r3bZPo) == 0x1) {
        /*bef_stmt:2110*/
switch (Tag4_realsmith_mHX9r3bZPo(/*int:2307:2307:2110:e*/modrm_value_realsmith_mHX9r3bZPo) & 0x7) {
        case 0:
            return 1;
        case 1:
            return 2;
        case 4:
            return 3;
        default:
            return -22;
        }
/*aft_stmt:2110*/
    } else if (Tag5_realsmith_mHX9r3bZPo(/*int:2307:2307:2301:e*/opcode2_realsmith_mHX9r3bZPo) == 0x0) {
        /*bef_stmt:2221*/
switch (Tag6_realsmith_mHX9r3bZPo(/*int:2307:2307:2221:e*/modrm_value_realsmith_mHX9r3bZPo) & 0x7) {
        case 0:
            return 4;
        case 1:
            return 5;
        default:
            return -22;
        }
/*aft_stmt:2221*/
    } else {
        return -22;
    }
/*aft_stmt:2301*/
/*aft_stmt:2301*/
}



#include "stdlib.h"
int realsmith_D5pp9cav08(int clk_base_realsmith_D5pp9cav08, int *clks_realsmith_D5pp9cav08) {
    int CLK_SET_RATE_PARENT_realsmith_D5pp9cav08 = 1;
    int CLK_IS_CRITICAL_realsmith_D5pp9cav08 = 2;
    int TEGRA20_CLK_CCLK_realsmith_D5pp9cav08 = 0;
    int TEGRA20_CLK_SCLK_realsmith_D5pp9cav08 = 1;
    int TEGRA20_CLK_TWD_realsmith_D5pp9cav08 = 2;
    int CCLK_BURST_POLICY_realsmith_D5pp9cav08 = 0;
    int SCLK_BURST_POLICY_realsmith_D5pp9cav08 = 4;
    int cclk_parents_size_realsmith_D5pp9cav08 = 1;
    int sclk_parents_size_realsmith_D5pp9cav08 = 1;
    clks_realsmith_D5pp9cav08[TEGRA20_CLK_CCLK_realsmith_D5pp9cav08] = clk_base_realsmith_D5pp9cav08 + CCLK_BURST_POLICY_realsmith_D5pp9cav08;
    clks_realsmith_D5pp9cav08[TEGRA20_CLK_SCLK_realsmith_D5pp9cav08] = clk_base_realsmith_D5pp9cav08 + SCLK_BURST_POLICY_realsmith_D5pp9cav08;
    clks_realsmith_D5pp9cav08[TEGRA20_CLK_TWD_realsmith_D5pp9cav08] = clks_realsmith_D5pp9cav08[TEGRA20_CLK_CCLK_realsmith_D5pp9cav08] / 4;
    return 0;
}
int realsmith_proxy_LpGSPAeQ77(int p_0_nwFtM5E4pT, int p_1_NG9IT897NU) {
int proxy_Zgaqm3qaMG[15] = { p_1_NG9IT897NU, 38, 76, 97, p_1_NG9IT897NU, p_1_NG9IT897NU, p_1_NG9IT897NU, 24, p_1_NG9IT897NU, p_1_NG9IT897NU, p_1_NG9IT897NU, 25, p_1_NG9IT897NU, p_1_NG9IT897NU, p_1_NG9IT897NU };
int proxy_ret_beTX4jLHif = realsmith_D5pp9cav08(p_0_nwFtM5E4pT, proxy_Zgaqm3qaMG);
return proxy_ret_beTX4jLHif;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_aoN4HXDe5n(x) (x)
#define Tag2_realsmith_aoN4HXDe5n(x) (x)
#define Tag3_realsmith_aoN4HXDe5n(x) (x)
#define Tag4_realsmith_aoN4HXDe5n(x) (x)
#define Tag5_realsmith_aoN4HXDe5n(x) (x)
#include "stdlib.h"
int realsmith_aoN4HXDe5n(int queue_cm_id_realsmith_aoN4HXDe5n, int queue_cm_error_realsmith_aoN4HXDe5n, int ctrl_opts_tos_realsmith_aoN4HXDe5n, int ctrl_device_realsmith_aoN4HXDe5n) {
    int ret_realsmith_aoN4HXDe5n;
    ret_realsmith_aoN4HXDe5n = 0;
    /*bef_stmt:17188*/
if (Tag1_realsmith_aoN4HXDe5n(/*int:17254:17254:17188:e*/ret_realsmith_aoN4HXDe5n)) {
        /*bef_stmt:17183*/
return Tag2_realsmith_aoN4HXDe5n(/*int:17254:17254:17183:e*/ret_realsmith_aoN4HXDe5n);
/*aft_stmt:17183*/
    }
/*aft_stmt:17188*/
    /*bef_stmt:17209*/
if (Tag3_realsmith_aoN4HXDe5n(/*int:17254:17254:17209:e*/ctrl_opts_tos_realsmith_aoN4HXDe5n) >= 0) {
    }
/*aft_stmt:17209*/
    ret_realsmith_aoN4HXDe5n = 0;
    /*bef_stmt:17244*/
if (Tag4_realsmith_aoN4HXDe5n(/*int:17254:17254:17244:e*/ret_realsmith_aoN4HXDe5n)) {
        /*bef_stmt:17239*/
return Tag5_realsmith_aoN4HXDe5n(/*int:17254:17254:17239:e*/ret_realsmith_aoN4HXDe5n);
/*aft_stmt:17239*/
    }
/*aft_stmt:17244*/
    return 0;
}



#include "stdlib.h"
struct vivid_dev_IGWcOM {
    unsigned int num_outputs_realsmith_DwIeJuDOty;
    unsigned int output_realsmith_DwIeJuDOty;
    int *output_type_realsmith_DwIeJuDOty;
    int *display_present_realsmith_DwIeJuDOty;
    int ctrl_display_present_realsmith_DwIeJuDOty;
    int vid_out_dev_tvnorms_realsmith_DwIeJuDOty;
    int vbi_out_dev_tvnorms_realsmith_DwIeJuDOty;
    int tv_audio_output_realsmith_DwIeJuDOty;
    int vb_vid_out_q_busy_realsmith_DwIeJuDOty;
    int vb_vbi_out_q_busy_realsmith_DwIeJuDOty;
};
int realsmith_DwIeJuDOty(unsigned int num_outputs_realsmith_DwIeJuDOty, unsigned int current_output_realsmith_DwIeJuDOty, unsigned int new_output_realsmith_DwIeJuDOty,
                    int *output_type_realsmith_DwIeJuDOty, int *display_present_realsmith_DwIeJuDOty, int *vb_vid_out_q_busy_realsmith_DwIeJuDOty, int *vb_vbi_out_q_busy_realsmith_DwIeJuDOty) {
    struct vivid_dev_IGWcOM dev_realsmith_DwIeJuDOty;
    dev_realsmith_DwIeJuDOty.num_outputs_realsmith_DwIeJuDOty = num_outputs_realsmith_DwIeJuDOty;
    dev_realsmith_DwIeJuDOty.output_realsmith_DwIeJuDOty = current_output_realsmith_DwIeJuDOty;
    dev_realsmith_DwIeJuDOty.output_type_realsmith_DwIeJuDOty = output_type_realsmith_DwIeJuDOty;
    dev_realsmith_DwIeJuDOty.display_present_realsmith_DwIeJuDOty = display_present_realsmith_DwIeJuDOty;
    dev_realsmith_DwIeJuDOty.vb_vid_out_q_busy_realsmith_DwIeJuDOty = *vb_vid_out_q_busy_realsmith_DwIeJuDOty;
    dev_realsmith_DwIeJuDOty.vb_vbi_out_q_busy_realsmith_DwIeJuDOty = *vb_vbi_out_q_busy_realsmith_DwIeJuDOty;
    if (new_output_realsmith_DwIeJuDOty >= dev_realsmith_DwIeJuDOty.num_outputs_realsmith_DwIeJuDOty)
        return -22;
    if (new_output_realsmith_DwIeJuDOty == dev_realsmith_DwIeJuDOty.output_realsmith_DwIeJuDOty)
        return 0;
    if (dev_realsmith_DwIeJuDOty.vb_vid_out_q_busy_realsmith_DwIeJuDOty || dev_realsmith_DwIeJuDOty.vb_vbi_out_q_busy_realsmith_DwIeJuDOty)
        return -16;
    dev_realsmith_DwIeJuDOty.output_realsmith_DwIeJuDOty = new_output_realsmith_DwIeJuDOty;
    dev_realsmith_DwIeJuDOty.tv_audio_output_realsmith_DwIeJuDOty = 0;
    if (dev_realsmith_DwIeJuDOty.output_type_realsmith_DwIeJuDOty[new_output_realsmith_DwIeJuDOty] == 1)
        dev_realsmith_DwIeJuDOty.vid_out_dev_tvnorms_realsmith_DwIeJuDOty = 2;
    else
        dev_realsmith_DwIeJuDOty.vid_out_dev_tvnorms_realsmith_DwIeJuDOty = 0;
    dev_realsmith_DwIeJuDOty.vbi_out_dev_tvnorms_realsmith_DwIeJuDOty = dev_realsmith_DwIeJuDOty.vid_out_dev_tvnorms_realsmith_DwIeJuDOty;
    if (dev_realsmith_DwIeJuDOty.output_type_realsmith_DwIeJuDOty[new_output_realsmith_DwIeJuDOty] == 1)
        return display_present_realsmith_DwIeJuDOty[new_output_realsmith_DwIeJuDOty];
    return 0;
}
int realsmith_proxy_1F1CngYmry(unsigned int p_0_WdjaFPVTd9, unsigned int p_1_5LmYWhqvUC, unsigned int p_2_N3BxweOkJS, int p_3_QKl0i13zwj, int p_4_3LNP1Cu1t0, int p_5_qTk23gusVn, int p_6_Yw8pjJeXyI) {
int proxy_TAFuOnJfRf[20] = { 16, p_3_QKl0i13zwj, 86, 2, 56, p_3_QKl0i13zwj, 85, 98, 26, p_3_QKl0i13zwj, 74, 14, p_3_QKl0i13zwj, 66, 36, 94, p_3_QKl0i13zwj, 32, p_3_QKl0i13zwj, p_3_QKl0i13zwj };
int proxy_tC3rT7CDeQ[16] = { p_4_3LNP1Cu1t0, p_4_3LNP1Cu1t0, p_4_3LNP1Cu1t0, 30, 76, p_4_3LNP1Cu1t0, 61, 3, p_4_3LNP1Cu1t0, 67, 11, p_4_3LNP1Cu1t0, p_4_3LNP1Cu1t0, p_4_3LNP1Cu1t0, p_4_3LNP1Cu1t0, p_4_3LNP1Cu1t0 };
int proxy_9QrX9qAm6T[14] = { p_5_qTk23gusVn, 49, 96, p_5_qTk23gusVn, p_5_qTk23gusVn, p_5_qTk23gusVn, p_5_qTk23gusVn, 92, p_5_qTk23gusVn, p_5_qTk23gusVn, p_5_qTk23gusVn, 76, 100, 87 };
int proxy_ret_u8IWPtChFB = realsmith_DwIeJuDOty(p_0_WdjaFPVTd9, p_1_5LmYWhqvUC, p_2_N3BxweOkJS, proxy_TAFuOnJfRf, proxy_tC3rT7CDeQ, proxy_9QrX9qAm6T, &(p_6_Yw8pjJeXyI));
return proxy_ret_u8IWPtChFB;
}


#include "stdlib.h"
struct watchdog_device_KCZwA2 {
    int min_timeout_realsmith_mbliek7YzA;
    int timeout_realsmith_mbliek7YzA;
    int max_timeout_realsmith_mbliek7YzA;
};
int realsmith_mbliek7YzA(int clk_status_realsmith_mbliek7YzA, int *clk_ptr_realsmith_mbliek7YzA) {
    int ret_realsmith_mbliek7YzA = 0;
    struct watchdog_device_KCZwA2 wdd_realsmith_mbliek7YzA;
    if (clk_ptr_realsmith_mbliek7YzA == ((void*)0)) {
        return -517;
    }
    if (clk_status_realsmith_mbliek7YzA != 0) {
        return -1;
    }
    wdd_realsmith_mbliek7YzA.min_timeout_realsmith_mbliek7YzA = 1;
    wdd_realsmith_mbliek7YzA.max_timeout_realsmith_mbliek7YzA = 60;
    wdd_realsmith_mbliek7YzA.timeout_realsmith_mbliek7YzA = 30;
    return wdd_realsmith_mbliek7YzA.timeout_realsmith_mbliek7YzA;
}
int realsmith_proxy_mD69mndF5L(int p_0_bF8pVrTxcZ, int p_1_UBsCab16zY) {
int proxy_H266daiFW3[14] = { 3, 92, 31, 81, 7, p_1_UBsCab16zY, p_1_UBsCab16zY, p_1_UBsCab16zY, p_1_UBsCab16zY, p_1_UBsCab16zY, p_1_UBsCab16zY, 10, 36, 86 };
int proxy_ret_6GJxsXSnZJ = realsmith_mbliek7YzA(p_0_bF8pVrTxcZ, proxy_H266daiFW3);
return proxy_ret_6GJxsXSnZJ;
}


#include "stdlib.h"
int realsmith_VYannzr2pd(int disconnected_realsmith_VYannzr2pd, int usb_capture_running_realsmith_VYannzr2pd, int *urbs_realsmith_VYannzr2pd, int *states_realsmith_VYannzr2pd, int *rate_feedback_start_realsmith_VYannzr2pd, int *rate_feedback_count_realsmith_VYannzr2pd) {
    int err_realsmith_VYannzr2pd = 0;
    if (disconnected_realsmith_VYannzr2pd)
        return -1;
    if (usb_capture_running_realsmith_VYannzr2pd)
        return 0;
    for (int i_realsmith_VYannzr2pd = 0; i_realsmith_VYannzr2pd < 1; i_realsmith_VYannzr2pd++) {
        urbs_realsmith_VYannzr2pd[i_realsmith_VYannzr2pd] = 0;
    }
    err_realsmith_VYannzr2pd = 0;
    if (err_realsmith_VYannzr2pd < 0)
        return err_realsmith_VYannzr2pd;
    states_realsmith_VYannzr2pd[0] = 0;
    urbs_realsmith_VYannzr2pd[0] = 1;
    *rate_feedback_start_realsmith_VYannzr2pd = 0;
    *rate_feedback_count_realsmith_VYannzr2pd = 0;
    states_realsmith_VYannzr2pd[1] = 1;
    err_realsmith_VYannzr2pd = 0;
    if (err_realsmith_VYannzr2pd < 0) {
        return err_realsmith_VYannzr2pd;
    }
    return err_realsmith_VYannzr2pd;
}
int realsmith_proxy_ha33WQos5Q(int p_0_OB58fORMyl, int p_1_MLjD0IaZE0, int p_2_s8gRD9S04s, int p_3_mi9ANhlYEV, int p_4_iiiy3sNHr0, int p_5_UkkYzW2V3g) {
int proxy_P1HTUEyh8U[10] = { 19, p_4_iiiy3sNHr0, p_4_iiiy3sNHr0, p_4_iiiy3sNHr0, p_4_iiiy3sNHr0, p_4_iiiy3sNHr0, 2, p_4_iiiy3sNHr0, 83, 68 };
int proxy_vgr08WHmBH[13] = { 51, p_5_UkkYzW2V3g, p_5_UkkYzW2V3g, 47, p_5_UkkYzW2V3g, 61, 76, 11, 49, 18, 25, 12, 79 };
int proxy_ret_jR3rM45AEn = realsmith_VYannzr2pd(p_0_OB58fORMyl, p_1_MLjD0IaZE0, &(p_2_s8gRD9S04s), &(p_3_mi9ANhlYEV), proxy_P1HTUEyh8U, proxy_vgr08WHmBH);
return proxy_ret_jR3rM45AEn;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_RPl9wC0Qff(x) (x)
#define Tag2_realsmith_RPl9wC0Qff(x) (x)
#define Tag3_realsmith_RPl9wC0Qff(x) (x)
#define Tag4_realsmith_RPl9wC0Qff(x) (x)
#define Tag5_realsmith_RPl9wC0Qff(x) (x)
#define Tag6_realsmith_RPl9wC0Qff(x) (x)
#define Tag7_realsmith_RPl9wC0Qff(x) (x)
#define Tag8_realsmith_RPl9wC0Qff(x) (x)
#include "stdlib.h"
int realsmith_RPl9wC0Qff(int iso_channel_realsmith_RPl9wC0Qff, int max_speed_realsmith_RPl9wC0Qff) {
    struct {
        int context_realsmith_RPl9wC0Qff;
        int buffer_pages_realsmith_RPl9wC0Qff[16];
        int *pages_realsmith_RPl9wC0Qff[16];
        int current_packet_realsmith_RPl9wC0Qff;
        int interrupt_packet_realsmith_RPl9wC0Qff;
    } ctx_realsmith_RPl9wC0Qff;
    int device_card_realsmith_RPl9wC0Qff = 1;
    int err_realsmith_RPl9wC0Qff, i_realsmith_RPl9wC0Qff;
    ctx_realsmith_RPl9wC0Qff.context_realsmith_RPl9wC0Qff = 1;
    /*bef_stmt:17377*/
if (Tag1_realsmith_RPl9wC0Qff(/*int:17643:17643:17377:e*/ctx_realsmith_RPl9wC0Qff.context_realsmith_RPl9wC0Qff) <= 0) {
        return -1;
    }
/*aft_stmt:17377*/
    /*bef_stmt:17479*/
for (i_realsmith_RPl9wC0Qff = 0; Tag2_realsmith_RPl9wC0Qff(/*int:17643:17643:17479:e*/i_realsmith_RPl9wC0Qff) < 16; i_realsmith_RPl9wC0Qff++) {
        /*bef_stmt:17472*/
ctx_realsmith_RPl9wC0Qff.pages_realsmith_RPl9wC0Qff[Tag3_realsmith_RPl9wC0Qff(/*int:17643:17643:17472:e*/i_realsmith_RPl9wC0Qff)] = &ctx_realsmith_RPl9wC0Qff.buffer_pages_realsmith_RPl9wC0Qff[i_realsmith_RPl9wC0Qff];
/*aft_stmt:17472*/
    }
/*aft_stmt:17479*/
    ctx_realsmith_RPl9wC0Qff.interrupt_packet_realsmith_RPl9wC0Qff = 0;
    ctx_realsmith_RPl9wC0Qff.current_packet_realsmith_RPl9wC0Qff = 0;
    /*bef_stmt:17595*/
for (i_realsmith_RPl9wC0Qff = 0; Tag4_realsmith_RPl9wC0Qff(/*int:17643:17643:17595:e*/i_realsmith_RPl9wC0Qff) < 8; i_realsmith_RPl9wC0Qff++) {
        err_realsmith_RPl9wC0Qff = 0;
        /*bef_stmt:17587*/
if (Tag5_realsmith_RPl9wC0Qff(/*int:17643:17643:17587:e*/err_realsmith_RPl9wC0Qff)) {
            /*bef_stmt:17582*/
return Tag6_realsmith_RPl9wC0Qff(/*int:17643:17643:17582:e*/err_realsmith_RPl9wC0Qff);
/*aft_stmt:17582*/
        }
/*aft_stmt:17587*/
    }
/*aft_stmt:17595*/
    err_realsmith_RPl9wC0Qff = 0;
    /*bef_stmt:17633*/
if (Tag7_realsmith_RPl9wC0Qff(/*int:17643:17643:17633:e*/err_realsmith_RPl9wC0Qff)) {
        /*bef_stmt:17628*/
return Tag8_realsmith_RPl9wC0Qff(/*int:17643:17643:17628:e*/err_realsmith_RPl9wC0Qff);
/*aft_stmt:17628*/
    }
/*aft_stmt:17633*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ch0LkaDQ3p(x) (x)
#define Tag2_realsmith_ch0LkaDQ3p(x) (x)
#define Tag3_realsmith_ch0LkaDQ3p(x) (x)
#define Tag4_realsmith_ch0LkaDQ3p(x) (x)
#include "stdint.h"
#include "stdlib.h"
int realsmith_ch0LkaDQ3p(int res_id_realsmith_ch0LkaDQ3p, unsigned int resc_max_val_realsmith_ch0LkaDQ3p) {
    unsigned int mcp_resp_realsmith_ch0LkaDQ3p = 0;
    int rc_realsmith_ch0LkaDQ3p = 0;
    /*bef_stmt:17593*/
if (/*TAG1:STA*/((unsigned int)(realsmith_WsNHhFXW2G((int)(resc_max_val_realsmith_ch0LkaDQ3p)+(85), (unsigned int)(resc_max_val_realsmith_ch0LkaDQ3p)+(8), (int)(resc_max_val_realsmith_ch0LkaDQ3p)+(5), (unsigned int)(resc_max_val_realsmith_ch0LkaDQ3p)+(11), (unsigned int)(resc_max_val_realsmith_ch0LkaDQ3p)+(80))+(int)(resc_max_val_realsmith_ch0LkaDQ3p)-(15))+resc_max_val_realsmith_ch0LkaDQ3p)/*TAG1:END:resc_max_val_realsmith_ch0LkaDQ3p*/ > 100) {
        rc_realsmith_ch0LkaDQ3p = -1;
    } else {
        mcp_resp_realsmith_ch0LkaDQ3p = 0;
    }
/*aft_stmt:17593*/
    /*bef_stmt:17618*/
if (/*TAG2:STA*/((int)(realsmith_jMzxnkZOco((int)(rc_realsmith_ch0LkaDQ3p)+(44), (int)(rc_realsmith_ch0LkaDQ3p)+(7), (unsigned int)(rc_realsmith_ch0LkaDQ3p)+(12))+(int)(rc_realsmith_ch0LkaDQ3p)-(0))+rc_realsmith_ch0LkaDQ3p)/*TAG2:END:rc_realsmith_ch0LkaDQ3p*/) {
        /*bef_stmt:17613*/
return Tag3_realsmith_ch0LkaDQ3p(/*int:17662:17662:17613:e*/rc_realsmith_ch0LkaDQ3p);
/*aft_stmt:17613*/
    }
/*aft_stmt:17618*/
    /*bef_stmt:17652*/
if (Tag4_realsmith_ch0LkaDQ3p(/*unsigned int:17662:17662:17652:e*/mcp_resp_realsmith_ch0LkaDQ3p) != 0) {
        return -2;
    }
/*aft_stmt:17652*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_VI4UigSO81(x) (x)
#include "stdlib.h"
int realsmith_VI4UigSO81(int broken_parity_status_realsmith_VI4UigSO81) {
    broken_parity_status_realsmith_VI4UigSO81 = 1;
    /*bef_stmt:17093*/
return /*TAG1:STA*/((int)(realsmith_proxy_ha33WQos5Q((int)(broken_parity_status_realsmith_VI4UigSO81)+(80), (int)(broken_parity_status_realsmith_VI4UigSO81)+(51), (int)(broken_parity_status_realsmith_VI4UigSO81)+(-73), (int)(broken_parity_status_realsmith_VI4UigSO81)+(39), (int)(broken_parity_status_realsmith_VI4UigSO81)+(-77), (int)(broken_parity_status_realsmith_VI4UigSO81)+(-99))+(int)(broken_parity_status_realsmith_VI4UigSO81)-(0))+broken_parity_status_realsmith_VI4UigSO81)/*TAG1:END:broken_parity_status_realsmith_VI4UigSO81*/;
/*aft_stmt:17093*/
}



#include "stdlib.h"
struct nilfs_segment_buffer_ZkpjrP {
    unsigned long nblocks_realsmith_RLTNuGPcUf;
    unsigned long nsumblk_realsmith_RLTNuGPcUf;
};
struct buffer_head_ZkpjrP {
    unsigned long assoc_buffers_realsmith_RLTNuGPcUf;
};
int realsmith_RLTNuGPcUf(unsigned long *segbuf_nblocks_realsmith_RLTNuGPcUf, unsigned long *segbuf_nsumblk_realsmith_RLTNuGPcUf, unsigned long *bh_assoc_buffers_realsmith_RLTNuGPcUf) {
    *bh_assoc_buffers_realsmith_RLTNuGPcUf += 1;
    (*segbuf_nblocks_realsmith_RLTNuGPcUf)++;
    (*segbuf_nsumblk_realsmith_RLTNuGPcUf)++;
    return *segbuf_nblocks_realsmith_RLTNuGPcUf;
}
int realsmith_proxy_Im9Q9S6czN(unsigned long p_0_uzIV8VxoQb, unsigned long p_1_sTfUsSRVpt, unsigned long p_2_MEc7KD4mTf) {
unsigned long proxy_hXKvQa5FaM[18] = { 27, 30, 11, p_0_uzIV8VxoQb, 10, p_0_uzIV8VxoQb, 89, 67, 80, p_0_uzIV8VxoQb, 20, p_0_uzIV8VxoQb, 56, 34, 62, 18, 43, 85 };
unsigned long proxy_YJdeMishuE[10] = { p_2_MEc7KD4mTf, 32, 47, p_2_MEc7KD4mTf, p_2_MEc7KD4mTf, 6, 2, p_2_MEc7KD4mTf, 22, 44 };
int proxy_ret_nxQXKlIzK5 = realsmith_RLTNuGPcUf(proxy_hXKvQa5FaM, &(p_1_sTfUsSRVpt), proxy_YJdeMishuE);
return proxy_ret_nxQXKlIzK5;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_rrsdK28W9W(x) (x)
#define Tag2_realsmith_proxy_rrsdK28W9W(x) (x)
#define Tag3_realsmith_proxy_rrsdK28W9W(x) (x)
#define Tag4_realsmith_proxy_rrsdK28W9W(x) (x)
#include "stdlib.h"
int realsmith_AfslllBRk1(int event_type_realsmith_AfslllBRk1, int *pevlist_realsmith_AfslllBRk1) {
    int sample_realsmith_AfslllBRk1;
    /*bef_stmt:17176*/
if (/*TAG1:STA*/((int)(realsmith_tmQT7mjWh6((int)(event_type_realsmith_AfslllBRk1)+(-57), (unsigned long)(event_type_realsmith_AfslllBRk1)+(17))+(int)(event_type_realsmith_AfslllBRk1)-(73))+event_type_realsmith_AfslllBRk1)/*TAG1:END:event_type_realsmith_AfslllBRk1*/ == 1) {
        if ((1) % 2) {
            return -1;
        }
        return 0;
    }
/*aft_stmt:17176*/
    /*bef_stmt:17204*/
if (/*TAG2:STA*/((int)(realsmith_tJH5FjcGq6((unsigned long)(event_type_realsmith_AfslllBRk1)+(-34))+(unsigned long)(event_type_realsmith_AfslllBRk1)-(112))+event_type_realsmith_AfslllBRk1)/*TAG2:END:event_type_realsmith_AfslllBRk1*/ >= 2)
        return -1;
/*aft_stmt:17204*/
    if (!pevlist_realsmith_AfslllBRk1)
        return -1;
    if ((1) % 2) {
        return -1;
    }
    return 0;
}
int realsmith_proxy_rrsdK28W9W(int p_0_juPmlLwh1u, int p_1_RmV0sqrBTF) {
/*bef_stmt:17399*/
int proxy_ret_ewD5t01o2v = realsmith_AfslllBRk1(/*TAG3:STA*/((int)(realsmith_0Q0IKN6fFl((int)(p_0_juPmlLwh1u)+(8), (int)(p_0_juPmlLwh1u)+(-28), (int)(p_0_juPmlLwh1u)+(-16), (int)(p_0_juPmlLwh1u)+(-54), (int)(p_0_juPmlLwh1u)+(13), (int)(p_0_juPmlLwh1u)+(-23), (int)(p_0_juPmlLwh1u)+(-20), (int)(p_0_juPmlLwh1u)+(-33), (int)(p_0_juPmlLwh1u)+(18))+(int)(p_0_juPmlLwh1u)-(-22))+p_0_juPmlLwh1u)/*TAG3:END:p_0_juPmlLwh1u*/, &(p_1_RmV0sqrBTF));
/*aft_stmt:17399*/
/*bef_stmt:17411*/
return /*TAG4:STA*/((int)(realsmith_h6hk2qGsuT((int)(proxy_ret_ewD5t01o2v)+(18), (int)(proxy_ret_ewD5t01o2v)+(32), 66)+(int)(proxy_ret_ewD5t01o2v)-(-1))+proxy_ret_ewD5t01o2v)/*TAG4:END:proxy_ret_ewD5t01o2v*/;
/*aft_stmt:17411*/
}




#include "stdlib.h"
struct device_WyM9Zc {
    int of_node_realsmith_QUn5Y2ymuj;
};
struct platform_device_WyM9Zc {
    struct device_WyM9Zc dev_realsmith_QUn5Y2ymuj;
};
struct ahci_host_priv_WyM9Zc {
    int force_port_map_realsmith_QUn5Y2ymuj;
    int mmio_realsmith_QUn5Y2ymuj;
    void* plat_data_realsmith_QUn5Y2ymuj;
};
struct st_ahci_drv_data_WyM9Zc {
    int dummy_realsmith_QUn5Y2ymuj;
};
int realsmith_QUn5Y2ymuj(int of_node_realsmith_QUn5Y2ymuj, int* hpriv_force_port_map_realsmith_QUn5Y2ymuj, int* hpriv_mmio_realsmith_QUn5Y2ymuj) {
    struct st_ahci_drv_data_WyM9Zc *drv_data_realsmith_QUn5Y2ymuj;
    struct ahci_host_priv_WyM9Zc *hpriv_realsmith_QUn5Y2ymuj;
    int err_realsmith_QUn5Y2ymuj = 0;
    drv_data_realsmith_QUn5Y2ymuj = (struct st_ahci_drv_data_WyM9Zc*)(malloc(sizeof(struct st_ahci_drv_data_WyM9Zc)));
    if (!drv_data_realsmith_QUn5Y2ymuj)
        return -12;
    hpriv_realsmith_QUn5Y2ymuj = (struct ahci_host_priv_WyM9Zc*)(malloc(sizeof(struct ahci_host_priv_WyM9Zc)));
    if (!hpriv_realsmith_QUn5Y2ymuj) {
        (free(drv_data_realsmith_QUn5Y2ymuj));
        return -12;
    }
    hpriv_realsmith_QUn5Y2ymuj->plat_data_realsmith_QUn5Y2ymuj = drv_data_realsmith_QUn5Y2ymuj;
    err_realsmith_QUn5Y2ymuj = 0;
    if (err_realsmith_QUn5Y2ymuj) {
        (free(hpriv_realsmith_QUn5Y2ymuj));
        (free(drv_data_realsmith_QUn5Y2ymuj));
        return err_realsmith_QUn5Y2ymuj;
    }
    err_realsmith_QUn5Y2ymuj = 0;
    if (err_realsmith_QUn5Y2ymuj) {
        (free(hpriv_realsmith_QUn5Y2ymuj));
        (free(drv_data_realsmith_QUn5Y2ymuj));
        return err_realsmith_QUn5Y2ymuj;
    }
    hpriv_realsmith_QUn5Y2ymuj->mmio_realsmith_QUn5Y2ymuj = 1;
    hpriv_realsmith_QUn5Y2ymuj->force_port_map_realsmith_QUn5Y2ymuj = of_node_realsmith_QUn5Y2ymuj;
    err_realsmith_QUn5Y2ymuj = 0;
    if (err_realsmith_QUn5Y2ymuj) {
        (free(hpriv_realsmith_QUn5Y2ymuj));
        (free(drv_data_realsmith_QUn5Y2ymuj));
        return err_realsmith_QUn5Y2ymuj;
    }
    *hpriv_force_port_map_realsmith_QUn5Y2ymuj = hpriv_realsmith_QUn5Y2ymuj->force_port_map_realsmith_QUn5Y2ymuj;
    *hpriv_mmio_realsmith_QUn5Y2ymuj = hpriv_realsmith_QUn5Y2ymuj->mmio_realsmith_QUn5Y2ymuj;
    (free(hpriv_realsmith_QUn5Y2ymuj));
    (free(drv_data_realsmith_QUn5Y2ymuj));
    return 0;
}
int realsmith_proxy_e1oLbWVXas(int p_0_0yVcJHPHws, int p_1_CIGAQ2p5n0, int p_2_tCBhVKSZke) {
int proxy_FZQYOZRpxM[15] = { p_2_tCBhVKSZke, p_2_tCBhVKSZke, 8, p_2_tCBhVKSZke, 100, 84, p_2_tCBhVKSZke, 14, p_2_tCBhVKSZke, 14, p_2_tCBhVKSZke, p_2_tCBhVKSZke, p_2_tCBhVKSZke, p_2_tCBhVKSZke, p_2_tCBhVKSZke };
int proxy_ret_KG0GU1YwEI = realsmith_QUn5Y2ymuj(p_0_0yVcJHPHws, &(p_1_CIGAQ2p5n0), proxy_FZQYOZRpxM);
return proxy_ret_KG0GU1YwEI;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_2sJmdktiQX(x) (x)
#define Tag2_realsmith_2sJmdktiQX(x) (x)
#include "stdlib.h"
struct abx500_pinctrl_D2H8pn {
    struct {
        int nfunctions_realsmith_2sJmdktiQX;
    } soc_realsmith_2sJmdktiQX;
};
int realsmith_2sJmdktiQX(int nfunctions_realsmith_2sJmdktiQX) {
    struct abx500_pinctrl_D2H8pn pct_realsmith_2sJmdktiQX;
    /*bef_stmt:17211*/
pct_realsmith_2sJmdktiQX.soc_realsmith_2sJmdktiQX.nfunctions_realsmith_2sJmdktiQX = /*TAG1:STA*/((int)(realsmith_proxy_1F1CngYmry((unsigned int)(nfunctions_realsmith_2sJmdktiQX)+(-67), (unsigned int)(nfunctions_realsmith_2sJmdktiQX)+(-27), (unsigned int)(nfunctions_realsmith_2sJmdktiQX)+(-62), (int)(nfunctions_realsmith_2sJmdktiQX)+(-157), (int)(nfunctions_realsmith_2sJmdktiQX)+(-19), (int)(nfunctions_realsmith_2sJmdktiQX)+(-186), (int)(nfunctions_realsmith_2sJmdktiQX)+(-33))+(int)(nfunctions_realsmith_2sJmdktiQX)-(72))+nfunctions_realsmith_2sJmdktiQX)/*TAG1:END:nfunctions_realsmith_2sJmdktiQX*/;
/*aft_stmt:17211*/
    /*bef_stmt:17245*/
return /*TAG2:STA*/((int)(realsmith_proxy_mD69mndF5L((int)(pct_realsmith_2sJmdktiQX.soc_realsmith_2sJmdktiQX.nfunctions_realsmith_2sJmdktiQX)+(-76), (int)(pct_realsmith_2sJmdktiQX.soc_realsmith_2sJmdktiQX.nfunctions_realsmith_2sJmdktiQX)+(1))+(int)(pct_realsmith_2sJmdktiQX.soc_realsmith_2sJmdktiQX.nfunctions_realsmith_2sJmdktiQX)-(93))+pct_realsmith_2sJmdktiQX.soc_realsmith_2sJmdktiQX.nfunctions_realsmith_2sJmdktiQX)/*TAG2:END:pct_realsmith_2sJmdktiQX.soc_realsmith_2sJmdktiQX.nfunctions_realsmith_2sJmdktiQX*/;
/*aft_stmt:17245*/
}



#include "stdint.h"
int realsmith_MtcZ9YTM5o(int *max_period_realsmith_MtcZ9YTM5o) {
    int handle_irq_realsmith_MtcZ9YTM5o = 0;
    int enable_realsmith_MtcZ9YTM5o = 1;
    int disable_realsmith_MtcZ9YTM5o = 0;
    int read_counter_realsmith_MtcZ9YTM5o = 0;
    int write_counter_realsmith_MtcZ9YTM5o = 0;
    int get_event_idx_realsmith_MtcZ9YTM5o = 0;
    int start_realsmith_MtcZ9YTM5o = 1;
    int stop_realsmith_MtcZ9YTM5o = 0;
    *max_period_realsmith_MtcZ9YTM5o = 0xFFFFFFFF;
    return *max_period_realsmith_MtcZ9YTM5o;
}
int realsmith_proxy_R0liJfMzrW(int p_0_4WKwgcTIr4) {
int proxy_lHDq1zWgnY[12] = { p_0_4WKwgcTIr4, p_0_4WKwgcTIr4, p_0_4WKwgcTIr4, 91, 68, 50, 36, 29, 83, 91, 94, p_0_4WKwgcTIr4 };
int proxy_ret_qSd0qEYXks = realsmith_MtcZ9YTM5o(proxy_lHDq1zWgnY);
return proxy_ret_qSd0qEYXks;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_7fDb3wKEGn(x) (x)
#define Tag2_realsmith_7fDb3wKEGn(x) (x)
#define Tag3_realsmith_7fDb3wKEGn(x) (x)
#define Tag4_realsmith_7fDb3wKEGn(x) (x)
#include "stdlib.h"
struct ieee80211_rate_YOHHgL {
    unsigned short hw_value_realsmith_7fDb3wKEGn;
    unsigned short hw_value_short_realsmith_7fDb3wKEGn;
};
struct ath5k_buf_YOHHgL {
    struct {
        int flags_realsmith_7fDb3wKEGn;
    } rates_realsmith_7fDb3wKEGn[256]; // Assuming a maximum of 256 rates for simplicity
};
unsigned short realsmith_7fDb3wKEGn(int idx_realsmith_7fDb3wKEGn, int rc_flags_realsmith_7fDb3wKEGn, unsigned short hw_value_realsmith_7fDb3wKEGn, unsigned short hw_value_short_realsmith_7fDb3wKEGn) {
    unsigned short hw_rate_realsmith_7fDb3wKEGn;
    /*bef_stmt:17367*/
/*bef_stmt:17367*/
/*bef_stmt:17367*/
hw_rate_realsmith_7fDb3wKEGn = (Tag1_realsmith_7fDb3wKEGn(/*int:17380:17380:17367:e*/rc_flags_realsmith_7fDb3wKEGn) & 1) ? Tag2_realsmith_7fDb3wKEGn(/*unsigned short:17380:17380:17367:e*/hw_value_short_realsmith_7fDb3wKEGn) : Tag3_realsmith_7fDb3wKEGn(/*unsigned short:17380:17380:17367:e*/hw_value_realsmith_7fDb3wKEGn);
/*aft_stmt:17367*/
/*aft_stmt:17367*/
/*aft_stmt:17367*/
    /*bef_stmt:17378*/
return Tag4_realsmith_7fDb3wKEGn(/*unsigned short:17380:17380:17378:e*/hw_rate_realsmith_7fDb3wKEGn);
/*aft_stmt:17378*/
}



#include "stdlib.h"
struct crush_bucket_tree_JFJD3v {
    int num_nodes_realsmith_iVfQ5Hpr3O;
    int *node_weights_realsmith_iVfQ5Hpr3O;
    struct {
        int *items_realsmith_iVfQ5Hpr3O;
        int id_realsmith_iVfQ5Hpr3O;
        int hash_realsmith_iVfQ5Hpr3O;
    } h_realsmith_iVfQ5Hpr3O;
};
int realsmith_iVfQ5Hpr3O(int *node_weights_realsmith_iVfQ5Hpr3O, int num_nodes_realsmith_iVfQ5Hpr3O, int *items_realsmith_iVfQ5Hpr3O, int hash_realsmith_iVfQ5Hpr3O, int id_realsmith_iVfQ5Hpr3O, int x_realsmith_iVfQ5Hpr3O, int r_realsmith_iVfQ5Hpr3O) {
    int n_realsmith_iVfQ5Hpr3O;
    unsigned int w_realsmith_iVfQ5Hpr3O;
    unsigned long long t_realsmith_iVfQ5Hpr3O;
    struct crush_bucket_tree_JFJD3v bucket_realsmith_iVfQ5Hpr3O;
    bucket_realsmith_iVfQ5Hpr3O.num_nodes_realsmith_iVfQ5Hpr3O = num_nodes_realsmith_iVfQ5Hpr3O;
    bucket_realsmith_iVfQ5Hpr3O.node_weights_realsmith_iVfQ5Hpr3O = node_weights_realsmith_iVfQ5Hpr3O;
    bucket_realsmith_iVfQ5Hpr3O.h_realsmith_iVfQ5Hpr3O.items_realsmith_iVfQ5Hpr3O = items_realsmith_iVfQ5Hpr3O;
    bucket_realsmith_iVfQ5Hpr3O.h_realsmith_iVfQ5Hpr3O.hash_realsmith_iVfQ5Hpr3O = hash_realsmith_iVfQ5Hpr3O;
    bucket_realsmith_iVfQ5Hpr3O.h_realsmith_iVfQ5Hpr3O.id_realsmith_iVfQ5Hpr3O = id_realsmith_iVfQ5Hpr3O;
    n_realsmith_iVfQ5Hpr3O = bucket_realsmith_iVfQ5Hpr3O.num_nodes_realsmith_iVfQ5Hpr3O >> 1;
    while ((n_realsmith_iVfQ5Hpr3O & 1) == 0) {
        int l_realsmith_iVfQ5Hpr3O;
        w_realsmith_iVfQ5Hpr3O = bucket_realsmith_iVfQ5Hpr3O.node_weights_realsmith_iVfQ5Hpr3O[n_realsmith_iVfQ5Hpr3O];
        t_realsmith_iVfQ5Hpr3O = (unsigned long long)(hash_realsmith_iVfQ5Hpr3O ^ (x_realsmith_iVfQ5Hpr3O + n_realsmith_iVfQ5Hpr3O + r_realsmith_iVfQ5Hpr3O + bucket_realsmith_iVfQ5Hpr3O.h_realsmith_iVfQ5Hpr3O.id_realsmith_iVfQ5Hpr3O)) * (unsigned long long)w_realsmith_iVfQ5Hpr3O;
        t_realsmith_iVfQ5Hpr3O = t_realsmith_iVfQ5Hpr3O >> 32;
        l_realsmith_iVfQ5Hpr3O = (n_realsmith_iVfQ5Hpr3O << 1) + 1;
        if (t_realsmith_iVfQ5Hpr3O < bucket_realsmith_iVfQ5Hpr3O.node_weights_realsmith_iVfQ5Hpr3O[l_realsmith_iVfQ5Hpr3O])
            n_realsmith_iVfQ5Hpr3O = l_realsmith_iVfQ5Hpr3O;
        else
            n_realsmith_iVfQ5Hpr3O = (n_realsmith_iVfQ5Hpr3O << 1) + 2;
    }
    return bucket_realsmith_iVfQ5Hpr3O.h_realsmith_iVfQ5Hpr3O.items_realsmith_iVfQ5Hpr3O[n_realsmith_iVfQ5Hpr3O >> 1];
}
int realsmith_proxy_G1grHU71sv(int p_0_tlQ5zMpquS, int p_1_WMZzBmxyy0, int p_2_1TKTCLZrX0, int p_3_ItRPzTwn2U, int p_4_IEa3WIOoYf, int p_5_1MRoonEzHD, int p_6_r0RSQsmeY4) {
int proxy_I3yaNf5JPT[12] = { 67, p_0_tlQ5zMpquS, p_0_tlQ5zMpquS, 21, p_0_tlQ5zMpquS, 60, 60, 73, p_0_tlQ5zMpquS, p_0_tlQ5zMpquS, 94, 92 };
int proxy_KXzxlOvynp[20] = { 4, p_2_1TKTCLZrX0, p_2_1TKTCLZrX0, 87, 24, 61, p_2_1TKTCLZrX0, p_2_1TKTCLZrX0, p_2_1TKTCLZrX0, p_2_1TKTCLZrX0, p_2_1TKTCLZrX0, p_2_1TKTCLZrX0, p_2_1TKTCLZrX0, 53, p_2_1TKTCLZrX0, p_2_1TKTCLZrX0, 95, 59, 22, 69 };
int proxy_ret_fNLfDjyuf1 = realsmith_iVfQ5Hpr3O(proxy_I3yaNf5JPT, p_1_WMZzBmxyy0, proxy_KXzxlOvynp, p_3_ItRPzTwn2U, p_4_IEa3WIOoYf, p_5_1MRoonEzHD, p_6_r0RSQsmeY4);
return proxy_ret_fNLfDjyuf1;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_E2TqH7TqYU(x) (x)
#define Tag2_realsmith_E2TqH7TqYU(x) (x)
#define Tag3_realsmith_E2TqH7TqYU(x) (x)
#define Tag4_realsmith_E2TqH7TqYU(x) (x)
#define Tag5_realsmith_E2TqH7TqYU(x) (x)
#include "stdlib.h"
int realsmith_E2TqH7TqYU(int dev_realsmith_E2TqH7TqYU, int irq_realsmith_E2TqH7TqYU) {
    /*bef_stmt:17127*/
if (Tag1_realsmith_E2TqH7TqYU(/*int:17368:17368:17127:e*/irq_realsmith_E2TqH7TqYU) < 0) {
        return -22;
    }
/*aft_stmt:17127*/
    int *wirq_realsmith_E2TqH7TqYU = (int *)(malloc(2 * sizeof(int)));
    if (!wirq_realsmith_E2TqH7TqYU) {
        return -12;
    }
    /*bef_stmt:17250*/
wirq_realsmith_E2TqH7TqYU[0] = /*TAG2:STA*/((int)(realsmith_proxy_e1oLbWVXas((int)(dev_realsmith_E2TqH7TqYU)+(66), (int)(dev_realsmith_E2TqH7TqYU)+(5), (int)(dev_realsmith_E2TqH7TqYU)+(73))+(int)(dev_realsmith_E2TqH7TqYU)-(13))+dev_realsmith_E2TqH7TqYU)/*TAG2:END:dev_realsmith_E2TqH7TqYU*/;
/*aft_stmt:17250*/
    /*bef_stmt:17276*/
wirq_realsmith_E2TqH7TqYU[1] = /*TAG3:STA*/((int)(realsmith_proxy_R0liJfMzrW((int)(irq_realsmith_E2TqH7TqYU)+(-1))+(int)(irq_realsmith_E2TqH7TqYU)-(71))+irq_realsmith_E2TqH7TqYU)/*TAG3:END:irq_realsmith_E2TqH7TqYU*/;
/*aft_stmt:17276*/
    int err_realsmith_E2TqH7TqYU = 0;
    /*bef_stmt:17358*/
if (/*TAG4:STA*/((int)(realsmith_2sJmdktiQX((int)(err_realsmith_E2TqH7TqYU)+(94))+(int)(err_realsmith_E2TqH7TqYU)-(94))+err_realsmith_E2TqH7TqYU)/*TAG4:END:err_realsmith_E2TqH7TqYU*/) {
        (free(wirq_realsmith_E2TqH7TqYU));
        /*bef_stmt:17352*/
return Tag5_realsmith_E2TqH7TqYU(/*int:17368:17368:17352:e*/err_realsmith_E2TqH7TqYU);
/*aft_stmt:17352*/
    }
/*aft_stmt:17358*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_yl8Bxm4hxI(x) (x)
#define Tag2_realsmith_yl8Bxm4hxI(x) (x)
#include "stdlib.h"
int realsmith_yl8Bxm4hxI(int platdata_card_readonly_realsmith_yl8Bxm4hxI, int host_platdata_exists_realsmith_yl8Bxm4hxI) {
    /*bef_stmt:17127*/
/*bef_stmt:17127*/
if (/*TAG1:STA*/((host_platdata_exists_realsmith_yl8Bxm4hxI) + (g_9EV3Y7) - -67)/*TAG1:END:host_platdata_exists_realsmith_yl8Bxm4hxI*/ && /*TAG2:STA*/((int)(realsmith_7fDb3wKEGn((int)(platdata_card_readonly_realsmith_yl8Bxm4hxI)+(65), (int)(platdata_card_readonly_realsmith_yl8Bxm4hxI)+(53), (int)(platdata_card_readonly_realsmith_yl8Bxm4hxI)+(69), (int)(platdata_card_readonly_realsmith_yl8Bxm4hxI)+(30))+(int)(platdata_card_readonly_realsmith_yl8Bxm4hxI)-(107))+platdata_card_readonly_realsmith_yl8Bxm4hxI)/*TAG2:END:platdata_card_readonly_realsmith_yl8Bxm4hxI*/) {
        return 1;
    }
g_9EV3Y7 = -67 + (host_platdata_exists_realsmith_yl8Bxm4hxI - (74));
/*aft_stmt:17127*/
/*aft_stmt:17127*/
    return -1;
}



#include "stdlib.h"
struct ubifs_info_pyhGIq {
    int max_inode_sz_realsmith_aCjJjIV4fP;
    int ubi_num_realsmith_aCjJjIV4fP;
    int vol_id_realsmith_aCjJjIV4fP;
    int umount_mutex_realsmith_aCjJjIV4fP;
};
struct super_block_pyhGIq {
    int s_maxbytes_realsmith_aCjJjIV4fP;
    int s_root_realsmith_aCjJjIV4fP;
    int s_blocksize_bits_realsmith_aCjJjIV4fP;
    int s_blocksize_realsmith_aCjJjIV4fP;
    int s_magic_realsmith_aCjJjIV4fP;
    struct ubifs_info_pyhGIq *s_fs_info_realsmith_aCjJjIV4fP;
};
int realsmith_aCjJjIV4fP(int ubi_num_realsmith_aCjJjIV4fP, int vol_id_realsmith_aCjJjIV4fP, int *max_inode_sz_realsmith_aCjJjIV4fP) {
    struct ubifs_info_pyhGIq c_realsmith_aCjJjIV4fP;
    struct super_block_pyhGIq sb_realsmith_aCjJjIV4fP;
    int err_realsmith_aCjJjIV4fP = 0;
    c_realsmith_aCjJjIV4fP.ubi_num_realsmith_aCjJjIV4fP = ubi_num_realsmith_aCjJjIV4fP;
    c_realsmith_aCjJjIV4fP.vol_id_realsmith_aCjJjIV4fP = vol_id_realsmith_aCjJjIV4fP;
    c_realsmith_aCjJjIV4fP.max_inode_sz_realsmith_aCjJjIV4fP = *max_inode_sz_realsmith_aCjJjIV4fP;
    sb_realsmith_aCjJjIV4fP.s_fs_info_realsmith_aCjJjIV4fP = &c_realsmith_aCjJjIV4fP;
    sb_realsmith_aCjJjIV4fP.s_magic_realsmith_aCjJjIV4fP = 0xEF53;
    sb_realsmith_aCjJjIV4fP.s_blocksize_realsmith_aCjJjIV4fP = 4096;
    sb_realsmith_aCjJjIV4fP.s_blocksize_bits_realsmith_aCjJjIV4fP = 12;
    sb_realsmith_aCjJjIV4fP.s_maxbytes_realsmith_aCjJjIV4fP = c_realsmith_aCjJjIV4fP.max_inode_sz_realsmith_aCjJjIV4fP;
    if (c_realsmith_aCjJjIV4fP.max_inode_sz_realsmith_aCjJjIV4fP > 1048576)
        sb_realsmith_aCjJjIV4fP.s_maxbytes_realsmith_aCjJjIV4fP = c_realsmith_aCjJjIV4fP.max_inode_sz_realsmith_aCjJjIV4fP = 1048576;
    if (c_realsmith_aCjJjIV4fP.ubi_num_realsmith_aCjJjIV4fP < 0 || c_realsmith_aCjJjIV4fP.vol_id_realsmith_aCjJjIV4fP < 0) {
        err_realsmith_aCjJjIV4fP = -1;
        goto out;
    }
out:
    return err_realsmith_aCjJjIV4fP;
}
int realsmith_proxy_W1DJgHzguA(int p_0_8rq7qTHcWG, int p_1_YdHjOKYsrS, int p_2_SEYaPeaDmo) {
int proxy_DdaqWGXN77[20] = { p_2_SEYaPeaDmo, 89, p_2_SEYaPeaDmo, p_2_SEYaPeaDmo, p_2_SEYaPeaDmo, 82, 73, 65, p_2_SEYaPeaDmo, 64, p_2_SEYaPeaDmo, p_2_SEYaPeaDmo, 65, p_2_SEYaPeaDmo, 28, 20, 78, p_2_SEYaPeaDmo, 22, p_2_SEYaPeaDmo };
int proxy_ret_E6GI0LNmwz = realsmith_aCjJjIV4fP(p_0_8rq7qTHcWG, p_1_YdHjOKYsrS, proxy_DdaqWGXN77);
return proxy_ret_E6GI0LNmwz;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_s3U2rshZ16(x) (x)
#define Tag2_realsmith_s3U2rshZ16(x) (x)
#define Tag3_realsmith_s3U2rshZ16(x) (x)
#define Tag4_realsmith_s3U2rshZ16(x) (x)
#define Tag5_realsmith_s3U2rshZ16(x) (x)
#define Tag6_realsmith_s3U2rshZ16(x) (x)
#define Tag7_realsmith_s3U2rshZ16(x) (x)
#define Tag8_realsmith_s3U2rshZ16(x) (x)
#define Tag9_realsmith_s3U2rshZ16(x) (x)
#define Tag10_realsmith_s3U2rshZ16(x) (x)
#define Tag11_realsmith_s3U2rshZ16(x) (x)
#define Tag12_realsmith_s3U2rshZ16(x) (x)
#define Tag13_realsmith_s3U2rshZ16(x) (x)
#include "stdbool.h"
int realsmith_s3U2rshZ16(int on_realsmith_s3U2rshZ16, int main_realsmith_s3U2rshZ16, int ether_realsmith_s3U2rshZ16) {
    /*bef_stmt:643*/
_Bool main_carrier_ok_realsmith_s3U2rshZ16 = (/*TAG1:STA*/((main_realsmith_s3U2rshZ16) + (g_QM9VDC[0]) - -95)/*TAG1:END:main_realsmith_s3U2rshZ16*/ != 0);
g_QM9VDC[0] = -95 + (main_realsmith_s3U2rshZ16 - (49));
/*aft_stmt:643*/
    /*bef_stmt:683*/
_Bool ether_carrier_ok_realsmith_s3U2rshZ16 = (/*TAG2:STA*/((int)(realsmith_aoN4HXDe5n((int)(ether_realsmith_s3U2rshZ16)+(44), (int)(ether_realsmith_s3U2rshZ16)+(55), (int)(ether_realsmith_s3U2rshZ16)+(-19), (int)(ether_realsmith_s3U2rshZ16)+(37))+(int)(ether_realsmith_s3U2rshZ16)-(29))+ether_realsmith_s3U2rshZ16)/*TAG2:END:ether_realsmith_s3U2rshZ16*/ != 0);
/*aft_stmt:683*/
    /*bef_stmt:861*/
if (/*TAG3:STA*/((int)(realsmith_VI4UigSO81((int)(on_realsmith_s3U2rshZ16)+(-4))+(int)(on_realsmith_s3U2rshZ16)-(91))+on_realsmith_s3U2rshZ16)/*TAG3:END:on_realsmith_s3U2rshZ16*/) {
        /*bef_stmt:729*/
/*bef_stmt:729*/
if (/*TAG4:STA*/((main_realsmith_s3U2rshZ16) + (g_QM9VDC[0]) - -95)/*TAG4:END:main_realsmith_s3U2rshZ16*/ && !/*TAG5:STA*/((main_carrier_ok_realsmith_s3U2rshZ16) + (g_HO6910[1]) - 112)/*TAG5:END:main_carrier_ok_realsmith_s3U2rshZ16*/) {
            main_realsmith_s3U2rshZ16 = 1;
        }
g_QM9VDC[0] = -95 + (main_realsmith_s3U2rshZ16 - (49));
g_HO6910[1] = 112 + (main_carrier_ok_realsmith_s3U2rshZ16 - (1));
/*aft_stmt:729*/
/*aft_stmt:729*/
        /*bef_stmt:769*/
/*bef_stmt:769*/
if (/*TAG6:STA*/((int)(realsmith_proxy_Im9Q9S6czN((unsigned long)(ether_realsmith_s3U2rshZ16)+(32), (unsigned long)(ether_realsmith_s3U2rshZ16)+(-19), (unsigned long)(ether_realsmith_s3U2rshZ16)+(-49))+(int)(ether_realsmith_s3U2rshZ16)-(57))+ether_realsmith_s3U2rshZ16)/*TAG6:END:ether_realsmith_s3U2rshZ16*/ && !/*TAG7:STA*/((_Bool)(realsmith_ch0LkaDQ3p((int)(ether_carrier_ok_realsmith_s3U2rshZ16)+(33), (unsigned int)(ether_carrier_ok_realsmith_s3U2rshZ16)+(14))+(int)(ether_carrier_ok_realsmith_s3U2rshZ16)-(1))+ether_carrier_ok_realsmith_s3U2rshZ16)/*TAG7:END:ether_carrier_ok_realsmith_s3U2rshZ16*/) {
            ether_realsmith_s3U2rshZ16 = 1;
        }
/*aft_stmt:769*/
/*aft_stmt:769*/
    } else {
        /*bef_stmt:813*/
/*bef_stmt:813*/
if (Tag8_realsmith_s3U2rshZ16(/*int:899:899:813:e*/main_realsmith_s3U2rshZ16) && Tag9_realsmith_s3U2rshZ16(/*_Bool:899:899:813:e*/main_carrier_ok_realsmith_s3U2rshZ16)) {
            main_realsmith_s3U2rshZ16 = 0;
        }
/*aft_stmt:813*/
/*aft_stmt:813*/
        /*bef_stmt:853*/
/*bef_stmt:853*/
if (Tag10_realsmith_s3U2rshZ16(/*int:899:899:853:e*/ether_realsmith_s3U2rshZ16) && Tag11_realsmith_s3U2rshZ16(/*_Bool:899:899:853:e*/ether_carrier_ok_realsmith_s3U2rshZ16)) {
            ether_realsmith_s3U2rshZ16 = 0;
        }
/*aft_stmt:853*/
/*aft_stmt:853*/
    }
/*aft_stmt:861*/
    /*bef_stmt:897*/
/*bef_stmt:897*/
return (/*TAG12:STA*/((int)(realsmith_proxy_rrsdK28W9W((int)(main_realsmith_s3U2rshZ16)+(24), (int)(main_realsmith_s3U2rshZ16)+(-85))+(int)(main_realsmith_s3U2rshZ16)-(48))+main_realsmith_s3U2rshZ16)/*TAG12:END:main_realsmith_s3U2rshZ16*/ << 1) | /*TAG13:STA*/((int)(realsmith_RPl9wC0Qff((int)(ether_realsmith_s3U2rshZ16)+(37), (int)(ether_realsmith_s3U2rshZ16)+(38))+(int)(ether_realsmith_s3U2rshZ16)-(29))+ether_realsmith_s3U2rshZ16)/*TAG13:END:ether_realsmith_s3U2rshZ16*/;
/*aft_stmt:897*/
/*aft_stmt:897*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_YrWASB7vIy(x) (x)
#define Tag2_realsmith_YrWASB7vIy(x) (x)
#define Tag3_realsmith_YrWASB7vIy(x) (x)
#define Tag4_realsmith_YrWASB7vIy(x) (x)
#define Tag5_realsmith_YrWASB7vIy(x) (x)
#define Tag6_realsmith_YrWASB7vIy(x) (x)
#include "stdlib.h"
int realsmith_YrWASB7vIy(int cmd_realsmith_YrWASB7vIy) {
    int i_realsmith_YrWASB7vIy;
    int result_realsmith_YrWASB7vIy = 0;
    result_realsmith_YrWASB7vIy |= 4;
    result_realsmith_YrWASB7vIy |= 8;
    /*bef_stmt:17324*/
for (i_realsmith_YrWASB7vIy = 4 + 4; /*TAG1:STA*/((int)(realsmith_proxy_G1grHU71sv(77, 23, -52, 5, 8, 38, 3)-(61))+i_realsmith_YrWASB7vIy)/*TAG1:END:i_realsmith_YrWASB7vIy*/ >= 0; i_realsmith_YrWASB7vIy--) {
        /*bef_stmt:17250*/
/*bef_stmt:17250*/
int dataval_realsmith_YrWASB7vIy = (/*TAG2:STA*/((int)(realsmith_E2TqH7TqYU((int)(cmd_realsmith_YrWASB7vIy)+(-65), (int)(cmd_realsmith_YrWASB7vIy)+(-6))+(int)(cmd_realsmith_YrWASB7vIy)-(78))+cmd_realsmith_YrWASB7vIy)/*TAG2:END:cmd_realsmith_YrWASB7vIy*/ & (1 << /*TAG3:STA*/((int)(realsmith_yl8Bxm4hxI((int)(cmd_realsmith_YrWASB7vIy)+(-59), (int)(cmd_realsmith_YrWASB7vIy)+(-4))+(int)(cmd_realsmith_YrWASB7vIy)-(79))+i_realsmith_YrWASB7vIy)/*TAG3:END:i_realsmith_YrWASB7vIy*/)) ? 1 : 0;
/*aft_stmt:17250*/
/*aft_stmt:17250*/
        /*bef_stmt:17276*/
result_realsmith_YrWASB7vIy |= (8 | /*TAG4:STA*/((int)(realsmith_proxy_W1DJgHzguA((int)(cmd_realsmith_YrWASB7vIy)+(-57), (int)(cmd_realsmith_YrWASB7vIy)+(-21), (int)(cmd_realsmith_YrWASB7vIy)+(-5))+(int)(cmd_realsmith_YrWASB7vIy)-(78))+dataval_realsmith_YrWASB7vIy)/*TAG4:END:dataval_realsmith_YrWASB7vIy*/);
/*aft_stmt:17276*/
        /*bef_stmt:17313*/
result_realsmith_YrWASB7vIy |= (8 | 2 | /*TAG5:STA*/((int)(realsmith_ydUwUg1XOw((int)(cmd_realsmith_YrWASB7vIy)+(15), (int)(cmd_realsmith_YrWASB7vIy)+(-57), (unsigned int)(cmd_realsmith_YrWASB7vIy)+(-22))+(int)(cmd_realsmith_YrWASB7vIy)-(62))+dataval_realsmith_YrWASB7vIy)/*TAG5:END:dataval_realsmith_YrWASB7vIy*/);
/*aft_stmt:17313*/
    }
/*aft_stmt:17324*/
    result_realsmith_YrWASB7vIy |= 8;
    /*bef_stmt:17352*/
return /*TAG6:STA*/((result_realsmith_YrWASB7vIy) + (g_L83BDN[2]) - 63)/*TAG6:END:result_realsmith_YrWASB7vIy*/;
g_L83BDN[2] = 63 + (result_realsmith_YrWASB7vIy - (15));
/*aft_stmt:17352*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_EQ1M6mxr0A(x) (x)
#define Tag2_realsmith_EQ1M6mxr0A(x) (x)
#define Tag3_realsmith_EQ1M6mxr0A(x) (x)
#define Tag4_realsmith_EQ1M6mxr0A(x) (x)
#define Tag5_realsmith_EQ1M6mxr0A(x) (x)
#define Tag6_realsmith_EQ1M6mxr0A(x) (x)
#define Tag7_realsmith_EQ1M6mxr0A(x) (x)
#define Tag8_realsmith_EQ1M6mxr0A(x) (x)
#define Tag9_realsmith_EQ1M6mxr0A(x) (x)
#define Tag10_realsmith_EQ1M6mxr0A(x) (x)
#define Tag11_realsmith_EQ1M6mxr0A(x) (x)
#define Tag12_realsmith_EQ1M6mxr0A(x) (x)
#define Tag13_realsmith_EQ1M6mxr0A(x) (x)
#define Tag14_realsmith_EQ1M6mxr0A(x) (x)
#define Tag15_realsmith_EQ1M6mxr0A(x) (x)
#define Tag16_realsmith_EQ1M6mxr0A(x) (x)
#define Tag17_realsmith_EQ1M6mxr0A(x) (x)
#define Tag18_realsmith_EQ1M6mxr0A(x) (x)
#define Tag19_realsmith_EQ1M6mxr0A(x) (x)
#define Tag20_realsmith_EQ1M6mxr0A(x) (x)
#define Tag21_realsmith_EQ1M6mxr0A(x) (x)
#define Tag22_realsmith_EQ1M6mxr0A(x) (x)
#define Tag23_realsmith_EQ1M6mxr0A(x) (x)
#define Tag24_realsmith_EQ1M6mxr0A(x) (x)
#define Tag25_realsmith_EQ1M6mxr0A(x) (x)
#define Tag26_realsmith_EQ1M6mxr0A(x) (x)
#define Tag27_realsmith_EQ1M6mxr0A(x) (x)
#define Tag28_realsmith_EQ1M6mxr0A(x) (x)
#define Tag29_realsmith_EQ1M6mxr0A(x) (x)
#include "stdlib.h"
struct mtk_hw_stats_tnb2gm {
    unsigned long tx_skip_realsmith_EQ1M6mxr0A;
    unsigned long rx_checksum_errors_realsmith_EQ1M6mxr0A;
    unsigned long rx_fcs_errors_realsmith_EQ1M6mxr0A;
    unsigned long rx_overflow_realsmith_EQ1M6mxr0A;
    unsigned long rx_long_errors_realsmith_EQ1M6mxr0A;
    unsigned long rx_short_errors_realsmith_EQ1M6mxr0A;
    unsigned long tx_collisions_realsmith_EQ1M6mxr0A;
    unsigned long tx_bytes_realsmith_EQ1M6mxr0A;
    unsigned long rx_bytes_realsmith_EQ1M6mxr0A;
    unsigned long tx_packets_realsmith_EQ1M6mxr0A;
    unsigned long rx_packets_realsmith_EQ1M6mxr0A;
    unsigned long syncp_realsmith_EQ1M6mxr0A;
    unsigned long stats_lock_realsmith_EQ1M6mxr0A;
};
struct net_device_tnb2gm {
    unsigned long tx_errors_realsmith_EQ1M6mxr0A;
    unsigned long rx_dropped_realsmith_EQ1M6mxr0A;
    unsigned long tx_dropped_realsmith_EQ1M6mxr0A;
};
unsigned long realsmith_EQ1M6mxr0A(unsigned long tx_errors_realsmith_EQ1M6mxr0A, unsigned long rx_dropped_realsmith_EQ1M6mxr0A, unsigned long tx_dropped_realsmith_EQ1M6mxr0A,
                                unsigned long tx_skip_realsmith_EQ1M6mxr0A, unsigned long rx_checksum_errors_realsmith_EQ1M6mxr0A, unsigned long rx_fcs_errors_realsmith_EQ1M6mxr0A,
                                unsigned long rx_overflow_realsmith_EQ1M6mxr0A, unsigned long rx_long_errors_realsmith_EQ1M6mxr0A, unsigned long rx_short_errors_realsmith_EQ1M6mxr0A,
                                unsigned long tx_collisions_realsmith_EQ1M6mxr0A, unsigned long tx_bytes_realsmith_EQ1M6mxr0A, unsigned long rx_bytes_realsmith_EQ1M6mxr0A,
                                unsigned long tx_packets_realsmith_EQ1M6mxr0A, unsigned long rx_packets_realsmith_EQ1M6mxr0A) {
    struct net_device_tnb2gm dev_realsmith_EQ1M6mxr0A;
    struct mtk_hw_stats_tnb2gm hw_stats_realsmith_EQ1M6mxr0A;
    /*bef_stmt:17659*/
dev_realsmith_EQ1M6mxr0A.tx_errors_realsmith_EQ1M6mxr0A = Tag1_realsmith_EQ1M6mxr0A(/*unsigned long:18235:18235:17659:e*/tx_errors_realsmith_EQ1M6mxr0A);
/*aft_stmt:17659*/
    /*bef_stmt:17693*/
dev_realsmith_EQ1M6mxr0A.rx_dropped_realsmith_EQ1M6mxr0A = /*TAG2:STA*/((unsigned long)(realsmith_proxy_OBa7vbuvsI((int)(rx_dropped_realsmith_EQ1M6mxr0A)+(0))+(int)(rx_dropped_realsmith_EQ1M6mxr0A)-(17))+rx_dropped_realsmith_EQ1M6mxr0A)/*TAG2:END:rx_dropped_realsmith_EQ1M6mxr0A*/;
/*aft_stmt:17693*/
    /*bef_stmt:17714*/
dev_realsmith_EQ1M6mxr0A.tx_dropped_realsmith_EQ1M6mxr0A = Tag3_realsmith_EQ1M6mxr0A(/*unsigned long:18235:18235:17714:e*/tx_dropped_realsmith_EQ1M6mxr0A);
/*aft_stmt:17714*/
    /*bef_stmt:17735*/
hw_stats_realsmith_EQ1M6mxr0A.tx_skip_realsmith_EQ1M6mxr0A = /*TAG4:STA*/((unsigned long)(realsmith_TadhcYLdQW((int)(tx_skip_realsmith_EQ1M6mxr0A)+(71))+(int)(tx_skip_realsmith_EQ1M6mxr0A)-(95))+tx_skip_realsmith_EQ1M6mxr0A)/*TAG4:END:tx_skip_realsmith_EQ1M6mxr0A*/;
/*aft_stmt:17735*/
    /*bef_stmt:17779*/
hw_stats_realsmith_EQ1M6mxr0A.rx_checksum_errors_realsmith_EQ1M6mxr0A = /*TAG5:STA*/((rx_checksum_errors_realsmith_EQ1M6mxr0A) + (g_LEKDNV) - 41)/*TAG5:END:rx_checksum_errors_realsmith_EQ1M6mxr0A*/;
g_LEKDNV = 41 + (rx_checksum_errors_realsmith_EQ1M6mxr0A - (96));
/*aft_stmt:17779*/
    /*bef_stmt:17800*/
hw_stats_realsmith_EQ1M6mxr0A.rx_fcs_errors_realsmith_EQ1M6mxr0A = /*TAG6:STA*/((unsigned long)(realsmith_0QuhOv5zqz((int)(rx_fcs_errors_realsmith_EQ1M6mxr0A)+(58), (int)(rx_fcs_errors_realsmith_EQ1M6mxr0A)+(15), (int)(rx_fcs_errors_realsmith_EQ1M6mxr0A)+(51), (int)(rx_fcs_errors_realsmith_EQ1M6mxr0A)+(-13))+(int)(rx_fcs_errors_realsmith_EQ1M6mxr0A)-(83))+rx_fcs_errors_realsmith_EQ1M6mxr0A)/*TAG6:END:rx_fcs_errors_realsmith_EQ1M6mxr0A*/;
/*aft_stmt:17800*/
    /*bef_stmt:17821*/
hw_stats_realsmith_EQ1M6mxr0A.rx_overflow_realsmith_EQ1M6mxr0A = /*TAG7:STA*/((unsigned long)(realsmith_VyPCUkVyRN((int)(rx_overflow_realsmith_EQ1M6mxr0A)+(19), (int)(rx_overflow_realsmith_EQ1M6mxr0A)+(-30), (int)(rx_overflow_realsmith_EQ1M6mxr0A)+(-68))+(int)(rx_overflow_realsmith_EQ1M6mxr0A)-(80))+rx_overflow_realsmith_EQ1M6mxr0A)/*TAG7:END:rx_overflow_realsmith_EQ1M6mxr0A*/;
/*aft_stmt:17821*/
    /*bef_stmt:17842*/
hw_stats_realsmith_EQ1M6mxr0A.rx_long_errors_realsmith_EQ1M6mxr0A = /*TAG8:STA*/((unsigned long)(realsmith_RgWo5BHZRs((int)(rx_long_errors_realsmith_EQ1M6mxr0A)+(24))+(int)(rx_long_errors_realsmith_EQ1M6mxr0A)-(11))+rx_long_errors_realsmith_EQ1M6mxr0A)/*TAG8:END:rx_long_errors_realsmith_EQ1M6mxr0A*/;
/*aft_stmt:17842*/
    /*bef_stmt:17863*/
hw_stats_realsmith_EQ1M6mxr0A.rx_short_errors_realsmith_EQ1M6mxr0A = Tag9_realsmith_EQ1M6mxr0A(/*unsigned long:18235:18235:17863:e*/rx_short_errors_realsmith_EQ1M6mxr0A);
g_QM9VDC[0] = -95 + (rx_short_errors_realsmith_EQ1M6mxr0A - (69));
/*aft_stmt:17863*/
    /*bef_stmt:17884*/
hw_stats_realsmith_EQ1M6mxr0A.tx_collisions_realsmith_EQ1M6mxr0A = /*TAG10:STA*/((unsigned long)(realsmith_VqcdLSdfeh((int)(tx_collisions_realsmith_EQ1M6mxr0A)+(12), (int)(tx_collisions_realsmith_EQ1M6mxr0A)+(59), (int)(tx_collisions_realsmith_EQ1M6mxr0A)+(55), (int)(tx_collisions_realsmith_EQ1M6mxr0A)+(69))+(int)(tx_collisions_realsmith_EQ1M6mxr0A)-(285))+tx_collisions_realsmith_EQ1M6mxr0A)/*TAG10:END:tx_collisions_realsmith_EQ1M6mxr0A*/;
/*aft_stmt:17884*/
    /*bef_stmt:17905*/
hw_stats_realsmith_EQ1M6mxr0A.tx_bytes_realsmith_EQ1M6mxr0A = /*TAG11:STA*/((tx_bytes_realsmith_EQ1M6mxr0A) + (g_BISWN8) - 69)/*TAG11:END:tx_bytes_realsmith_EQ1M6mxr0A*/;
g_BISWN8 = 69 + (tx_bytes_realsmith_EQ1M6mxr0A - (12));
g_HO6910[5] = -81 + (tx_bytes_realsmith_EQ1M6mxr0A - (12));
/*aft_stmt:17905*/
    /*bef_stmt:17927*/
hw_stats_realsmith_EQ1M6mxr0A.rx_bytes_realsmith_EQ1M6mxr0A = /*TAG12:STA*/((unsigned long)(realsmith_1fwOkZ1ikf((int)(rx_bytes_realsmith_EQ1M6mxr0A)+(-36))+(int)(rx_bytes_realsmith_EQ1M6mxr0A)-(95))+rx_bytes_realsmith_EQ1M6mxr0A)/*TAG12:END:rx_bytes_realsmith_EQ1M6mxr0A*/;
/*aft_stmt:17927*/
    /*bef_stmt:17948*/
hw_stats_realsmith_EQ1M6mxr0A.tx_packets_realsmith_EQ1M6mxr0A = /*TAG13:STA*/((unsigned long)(realsmith_O2kYbHIKTS((int)(tx_packets_realsmith_EQ1M6mxr0A)+(23), (int)(tx_packets_realsmith_EQ1M6mxr0A)+(58))+(int)(tx_packets_realsmith_EQ1M6mxr0A)-(-1))+tx_packets_realsmith_EQ1M6mxr0A)/*TAG13:END:tx_packets_realsmith_EQ1M6mxr0A*/;
/*aft_stmt:17948*/
    /*bef_stmt:17969*/
hw_stats_realsmith_EQ1M6mxr0A.rx_packets_realsmith_EQ1M6mxr0A = /*TAG14:STA*/((unsigned long)(realsmith_proxy_wy6ECgx8MQ((int)(rx_packets_realsmith_EQ1M6mxr0A)+(34), (int)(rx_packets_realsmith_EQ1M6mxr0A)+(40), (int)(rx_packets_realsmith_EQ1M6mxr0A)+(19), (int)(rx_packets_realsmith_EQ1M6mxr0A)+(-16))+(int)(rx_packets_realsmith_EQ1M6mxr0A)-(51))+rx_packets_realsmith_EQ1M6mxr0A)/*TAG14:END:rx_packets_realsmith_EQ1M6mxr0A*/;
/*aft_stmt:17969*/
    /*bef_stmt:18019*/
/*bef_stmt:18019*/
unsigned long rx_length_errors_realsmith_EQ1M6mxr0A = /*TAG15:STA*/((unsigned long)(realsmith_xfWmrv2P5f((int)(hw_stats_realsmith_EQ1M6mxr0A.rx_short_errors_realsmith_EQ1M6mxr0A)+(-59))+(int)(hw_stats_realsmith_EQ1M6mxr0A.rx_short_errors_realsmith_EQ1M6mxr0A)-(79))+hw_stats_realsmith_EQ1M6mxr0A.rx_short_errors_realsmith_EQ1M6mxr0A)/*TAG15:END:hw_stats_realsmith_EQ1M6mxr0A.rx_short_errors_realsmith_EQ1M6mxr0A*/ + /*TAG16:STA*/((hw_stats_realsmith_EQ1M6mxr0A.rx_long_errors_realsmith_EQ1M6mxr0A) + (g_0GK84F[4]) - 31)/*TAG16:END:hw_stats_realsmith_EQ1M6mxr0A.rx_long_errors_realsmith_EQ1M6mxr0A*/;
g_9EV3Y7 = -67 + (hw_stats_realsmith_EQ1M6mxr0A.rx_short_errors_realsmith_EQ1M6mxr0A - (69));
g_0GK84F[4] = 31 + (hw_stats_realsmith_EQ1M6mxr0A.rx_long_errors_realsmith_EQ1M6mxr0A - (10));
/*aft_stmt:18019*/
/*aft_stmt:18019*/
    /*bef_stmt:18233*/
/*bef_stmt:18233*/
/*bef_stmt:18233*/
/*bef_stmt:18233*/
/*bef_stmt:18233*/
/*bef_stmt:18233*/
/*bef_stmt:18233*/
/*bef_stmt:18233*/
/*bef_stmt:18233*/
/*bef_stmt:18233*/
/*bef_stmt:18233*/
/*bef_stmt:18233*/
/*bef_stmt:18233*/
return /*TAG17:STA*/((unsigned long)(realsmith_proxy_9CyHLvpnR6((int)(hw_stats_realsmith_EQ1M6mxr0A.rx_packets_realsmith_EQ1M6mxr0A)+(-49), (int)(hw_stats_realsmith_EQ1M6mxr0A.rx_packets_realsmith_EQ1M6mxr0A)+(-54), (int)(hw_stats_realsmith_EQ1M6mxr0A.rx_packets_realsmith_EQ1M6mxr0A)+(-47), (int)(hw_stats_realsmith_EQ1M6mxr0A.rx_packets_realsmith_EQ1M6mxr0A)+(-56), (int)(hw_stats_realsmith_EQ1M6mxr0A.rx_packets_realsmith_EQ1M6mxr0A)+(-49))+(int)(hw_stats_realsmith_EQ1M6mxr0A.rx_packets_realsmith_EQ1M6mxr0A)-(52))+hw_stats_realsmith_EQ1M6mxr0A.rx_packets_realsmith_EQ1M6mxr0A)/*TAG17:END:hw_stats_realsmith_EQ1M6mxr0A.rx_packets_realsmith_EQ1M6mxr0A*/ + /*TAG18:STA*/((unsigned long)(realsmith_proxy_BSgeyq11ut((int)(hw_stats_realsmith_EQ1M6mxr0A.tx_packets_realsmith_EQ1M6mxr0A)+(9), (int)(hw_stats_realsmith_EQ1M6mxr0A.tx_packets_realsmith_EQ1M6mxr0A)+(-65))+(int)(hw_stats_realsmith_EQ1M6mxr0A.tx_packets_realsmith_EQ1M6mxr0A)-(0))+hw_stats_realsmith_EQ1M6mxr0A.tx_packets_realsmith_EQ1M6mxr0A)/*TAG18:END:hw_stats_realsmith_EQ1M6mxr0A.tx_packets_realsmith_EQ1M6mxr0A*/ + /*TAG19:STA*/((unsigned long)(realsmith_NrYlxcgvFT((int)(hw_stats_realsmith_EQ1M6mxr0A.rx_bytes_realsmith_EQ1M6mxr0A)+(-83), (int)(hw_stats_realsmith_EQ1M6mxr0A.rx_bytes_realsmith_EQ1M6mxr0A)+(-86))+(int)(hw_stats_realsmith_EQ1M6mxr0A.rx_bytes_realsmith_EQ1M6mxr0A)-(619))+hw_stats_realsmith_EQ1M6mxr0A.rx_bytes_realsmith_EQ1M6mxr0A)/*TAG19:END:hw_stats_realsmith_EQ1M6mxr0A.rx_bytes_realsmith_EQ1M6mxr0A*/ + Tag20_realsmith_EQ1M6mxr0A(/*unsigned long:18235:18235:18233:e*/hw_stats_realsmith_EQ1M6mxr0A.tx_bytes_realsmith_EQ1M6mxr0A) +
           Tag21_realsmith_EQ1M6mxr0A(/*unsigned long:18235:18235:18233:e*/hw_stats_realsmith_EQ1M6mxr0A.tx_collisions_realsmith_EQ1M6mxr0A) + /*TAG22:STA*/((unsigned long)(realsmith_htaxq6Qz6y((int)(rx_length_errors_realsmith_EQ1M6mxr0A)+(-34))+(int)(rx_length_errors_realsmith_EQ1M6mxr0A)-(123))+rx_length_errors_realsmith_EQ1M6mxr0A)/*TAG22:END:rx_length_errors_realsmith_EQ1M6mxr0A*/ + /*TAG23:STA*/((unsigned long)(realsmith_CAd3eDGi7I((int)(hw_stats_realsmith_EQ1M6mxr0A.rx_overflow_realsmith_EQ1M6mxr0A)+(-66), (unsigned int)(hw_stats_realsmith_EQ1M6mxr0A.rx_overflow_realsmith_EQ1M6mxr0A)+(-57), (unsigned int)(hw_stats_realsmith_EQ1M6mxr0A.rx_overflow_realsmith_EQ1M6mxr0A)+(-64))+(int)(hw_stats_realsmith_EQ1M6mxr0A.rx_overflow_realsmith_EQ1M6mxr0A)-(78))+hw_stats_realsmith_EQ1M6mxr0A.rx_overflow_realsmith_EQ1M6mxr0A)/*TAG23:END:hw_stats_realsmith_EQ1M6mxr0A.rx_overflow_realsmith_EQ1M6mxr0A*/ + /*TAG24:STA*/((unsigned long)(realsmith_o3I0eiFqLN((int)(hw_stats_realsmith_EQ1M6mxr0A.rx_fcs_errors_realsmith_EQ1M6mxr0A)+(11), (unsigned int)(hw_stats_realsmith_EQ1M6mxr0A.rx_fcs_errors_realsmith_EQ1M6mxr0A)+(-8), (long)(hw_stats_realsmith_EQ1M6mxr0A.rx_fcs_errors_realsmith_EQ1M6mxr0A)+(9), (long)(hw_stats_realsmith_EQ1M6mxr0A.rx_fcs_errors_realsmith_EQ1M6mxr0A)+(12), (long)(hw_stats_realsmith_EQ1M6mxr0A.rx_fcs_errors_realsmith_EQ1M6mxr0A)+(6), (long)(hw_stats_realsmith_EQ1M6mxr0A.rx_fcs_errors_realsmith_EQ1M6mxr0A)+(27))+(int)(hw_stats_realsmith_EQ1M6mxr0A.rx_fcs_errors_realsmith_EQ1M6mxr0A)-(33))+hw_stats_realsmith_EQ1M6mxr0A.rx_fcs_errors_realsmith_EQ1M6mxr0A)/*TAG24:END:hw_stats_realsmith_EQ1M6mxr0A.rx_fcs_errors_realsmith_EQ1M6mxr0A*/ +
           /*TAG25:STA*/((unsigned long)(realsmith_qRtEBxLExz((int)(hw_stats_realsmith_EQ1M6mxr0A.rx_checksum_errors_realsmith_EQ1M6mxr0A)+(1), (int)(hw_stats_realsmith_EQ1M6mxr0A.rx_checksum_errors_realsmith_EQ1M6mxr0A)+(-42))+(int)(hw_stats_realsmith_EQ1M6mxr0A.rx_checksum_errors_realsmith_EQ1M6mxr0A)-(96))+hw_stats_realsmith_EQ1M6mxr0A.rx_checksum_errors_realsmith_EQ1M6mxr0A)/*TAG25:END:hw_stats_realsmith_EQ1M6mxr0A.rx_checksum_errors_realsmith_EQ1M6mxr0A*/ + Tag26_realsmith_EQ1M6mxr0A(/*unsigned long:18235:18235:18233:e*/hw_stats_realsmith_EQ1M6mxr0A.tx_skip_realsmith_EQ1M6mxr0A) + Tag27_realsmith_EQ1M6mxr0A(/*unsigned long:18235:18235:18233:e*/dev_realsmith_EQ1M6mxr0A.tx_errors_realsmith_EQ1M6mxr0A) + Tag28_realsmith_EQ1M6mxr0A(/*unsigned long:18235:18235:18233:e*/dev_realsmith_EQ1M6mxr0A.rx_dropped_realsmith_EQ1M6mxr0A) + /*TAG29:STA*/((dev_realsmith_EQ1M6mxr0A.tx_dropped_realsmith_EQ1M6mxr0A) + (g_LEKDNV) - 41)/*TAG29:END:dev_realsmith_EQ1M6mxr0A.tx_dropped_realsmith_EQ1M6mxr0A*/;
g_QM9VDC[0] = -95 + (hw_stats_realsmith_EQ1M6mxr0A.tx_bytes_realsmith_EQ1M6mxr0A - (12));
g_NIS3MK[3] = -125 + (hw_stats_realsmith_EQ1M6mxr0A.tx_collisions_realsmith_EQ1M6mxr0A - (18));
g_MO1T8D = -80 + (hw_stats_realsmith_EQ1M6mxr0A.rx_overflow_realsmith_EQ1M6mxr0A - (78));
g_MO1T8D = -80 + (dev_realsmith_EQ1M6mxr0A.tx_errors_realsmith_EQ1M6mxr0A - (49));
g_LEKDNV = 41 + (dev_realsmith_EQ1M6mxr0A.tx_dropped_realsmith_EQ1M6mxr0A - (82));
g_9EV3Y7 = -67 + (dev_realsmith_EQ1M6mxr0A.tx_errors_realsmith_EQ1M6mxr0A - (49));
/*aft_stmt:18233*/
/*aft_stmt:18233*/
/*aft_stmt:18233*/
/*aft_stmt:18233*/
/*aft_stmt:18233*/
/*aft_stmt:18233*/
/*aft_stmt:18233*/
/*aft_stmt:18233*/
/*aft_stmt:18233*/
/*aft_stmt:18233*/
/*aft_stmt:18233*/
/*aft_stmt:18233*/
/*aft_stmt:18233*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_DIOAkuDGSx(x) (x)
#define Tag2_realsmith_DIOAkuDGSx(x) (x)
#define Tag3_realsmith_DIOAkuDGSx(x) (x)
#define Tag4_realsmith_DIOAkuDGSx(x) (x)
#include "stdlib.h"
typedef struct {
    int state_realsmith_DIOAkuDGSx;
} net_device_buIMbH;
int realsmith_DIOAkuDGSx(int state_realsmith_DIOAkuDGSx, int running_realsmith_DIOAkuDGSx) {
    net_device_buIMbH dev_realsmith_DIOAkuDGSx;
    /*bef_stmt:17199*/
dev_realsmith_DIOAkuDGSx.state_realsmith_DIOAkuDGSx = Tag1_realsmith_DIOAkuDGSx(/*int:17351:17351:17199:e*/state_realsmith_DIOAkuDGSx);
/*aft_stmt:17199*/
    /*bef_stmt:17275*/
int link_present_realsmith_DIOAkuDGSx = (Tag2_realsmith_DIOAkuDGSx(/*int:17351:17351:17275:e*/dev_realsmith_DIOAkuDGSx.state_realsmith_DIOAkuDGSx) & (1 << 0)) != 0;
/*aft_stmt:17275*/
    /*bef_stmt:17341*/
/*bef_stmt:17341*/
if (!Tag3_realsmith_DIOAkuDGSx(/*int:17351:17351:17341:e*/link_present_realsmith_DIOAkuDGSx) && Tag4_realsmith_DIOAkuDGSx(/*int:17351:17351:17341:e*/running_realsmith_DIOAkuDGSx)) {
        dev_realsmith_DIOAkuDGSx.state_realsmith_DIOAkuDGSx |= (1 << 0);
        return 1;
    }
/*aft_stmt:17341*/
/*aft_stmt:17341*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_fPZXyOr0ER(x) (x)
#define Tag2_realsmith_fPZXyOr0ER(x) (x)
#define Tag3_realsmith_fPZXyOr0ER(x) (x)
#include "stdint.h"
int realsmith_fPZXyOr0ER(unsigned int swsm_realsmith_fPZXyOr0ER) {
    const unsigned int IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER = 0x00000002;
    const unsigned int IXGBE_SWSM_SMBI_realsmith_fPZXyOr0ER = 0x00000001;
    /*bef_stmt:2048*/
/*bef_stmt:2048*/
swsm_realsmith_fPZXyOr0ER &= ~(/*TAG1:STA*/((unsigned int)(realsmith_EQ1M6mxr0A((unsigned long)(IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER)+(47), (unsigned long)(IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER)+(15), (unsigned long)(IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER)+(80), (unsigned long)(IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER)+(10), (unsigned long)(IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER)+(94), (unsigned long)(IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER)+(32), (unsigned long)(IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER)+(76), (unsigned long)(IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER)+(8), (unsigned long)(IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER)+(67), (unsigned long)(IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER)+(16), (unsigned long)(IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER)+(10), (unsigned long)(IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER)+(93), (unsigned long)(IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER)+(-2), (unsigned long)(IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER)+(50))+(unsigned long)(IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER)-(626))+IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER)/*TAG1:END:IXGBE_SWSM_SWESMBI_realsmith_fPZXyOr0ER*/ | /*TAG2:STA*/((unsigned int)(realsmith_YrWASB7vIy((int)(IXGBE_SWSM_SMBI_realsmith_fPZXyOr0ER)+(77))+(int)(IXGBE_SWSM_SMBI_realsmith_fPZXyOr0ER)-(16))+IXGBE_SWSM_SMBI_realsmith_fPZXyOr0ER)/*TAG2:END:IXGBE_SWSM_SMBI_realsmith_fPZXyOr0ER*/);
/*aft_stmt:2048*/
/*aft_stmt:2048*/
    /*bef_stmt:2086*/
return /*TAG3:STA*/((unsigned int)(realsmith_s3U2rshZ16((int)(swsm_realsmith_fPZXyOr0ER)+(-2), (int)(swsm_realsmith_fPZXyOr0ER)+(-43), (int)(swsm_realsmith_fPZXyOr0ER)+(-63))+(int)(swsm_realsmith_fPZXyOr0ER)-(219))+swsm_realsmith_fPZXyOr0ER)/*TAG3:END:swsm_realsmith_fPZXyOr0ER*/;
g_HO6910[5] = -81 + (swsm_realsmith_fPZXyOr0ER - (92));
/*aft_stmt:2086*/
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_H6q5E2v8HC(x) (x)
#define Tag2_realsmith_H6q5E2v8HC(x) (x)
#define Tag3_realsmith_H6q5E2v8HC(x) (x)
#define Tag4_realsmith_H6q5E2v8HC(x) (x)
#define Tag5_realsmith_H6q5E2v8HC(x) (x)
#define Tag6_realsmith_H6q5E2v8HC(x) (x)
#include "stdlib.h"
int realsmith_H6q5E2v8HC(int size_realsmith_H6q5E2v8HC, int vaddr_realsmith_H6q5E2v8HC, int dma_handle_realsmith_H6q5E2v8HC, int attrs_realsmith_H6q5E2v8HC) {
    /*bef_stmt:17196*/
unsigned long count_realsmith_H6q5E2v8HC = (/*TAG1:STA*/((int)(realsmith_fPZXyOr0ER((unsigned int)(size_realsmith_H6q5E2v8HC)+(56))+(int)(size_realsmith_H6q5E2v8HC)-(131))+size_realsmith_H6q5E2v8HC)/*TAG1:END:size_realsmith_H6q5E2v8HC*/ + (4096 - 1)) / 4096;
/*aft_stmt:17196*/
    unsigned long page_realsmith_H6q5E2v8HC;
    /*bef_stmt:17283*/
if (/*TAG2:STA*/((vaddr_realsmith_H6q5E2v8HC) + (g_0GK84F[4]) - 31)/*TAG2:END:vaddr_realsmith_H6q5E2v8HC*/ % 2 == 0) {
        /*bef_stmt:17255*/
page_realsmith_H6q5E2v8HC = Tag3_realsmith_H6q5E2v8HC(/*int:17369:17369:17255:e*/vaddr_realsmith_H6q5E2v8HC);
/*aft_stmt:17255*/
    } else {
        /*bef_stmt:17276*/
page_realsmith_H6q5E2v8HC = /*TAG4:STA*/((int)(realsmith_DIOAkuDGSx((int)(dma_handle_realsmith_H6q5E2v8HC)+(-36), (int)(dma_handle_realsmith_H6q5E2v8HC)+(-46))+(int)(dma_handle_realsmith_H6q5E2v8HC)-(75))+dma_handle_realsmith_H6q5E2v8HC)/*TAG4:END:dma_handle_realsmith_H6q5E2v8HC*/;
/*aft_stmt:17276*/
    }
g_0GK84F[4] = 31 + (vaddr_realsmith_H6q5E2v8HC - (83));
/*aft_stmt:17283*/
    /*bef_stmt:17363*/
if (/*TAG5:STA*/((page_realsmith_H6q5E2v8HC) + (g_LEKDNV) - 41)/*TAG5:END:page_realsmith_H6q5E2v8HC*/ % 2 == 0) {
        return 0;
    } else {
        /*bef_stmt:17358*/
return (int)(Tag6_realsmith_H6q5E2v8HC(/*int:17369:17369:17358:e*/size_realsmith_H6q5E2v8HC) / 4096);
/*aft_stmt:17358*/
    }
g_LEKDNV = 41 + (page_realsmith_H6q5E2v8HC - (74));
/*aft_stmt:17363*/
}


#include <stdio.h>
#include <inttypes.h>
int main() {
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    transparent_crc(realsmith_k0UXcCXKnt(6,75), "realsmith_k0UXcCXKnt(6,75)", print_hash_value);
    transparent_crc(realsmith_xFK11kHsdl(11,45,81,23,27,2,23), "realsmith_xFK11kHsdl(11,45,81,23,27,2,23)", print_hash_value);
    transparent_crc(realsmith_Iw00tTXDSe(79,60,76,64,42,41), "realsmith_Iw00tTXDSe(79,60,76,64,42,41)", print_hash_value);
    transparent_crc(realsmith_136Ac56RWR(13), "realsmith_136Ac56RWR(13)", print_hash_value);
    transparent_crc(realsmith_YrWASB7vIy(78), "realsmith_YrWASB7vIy(78)", print_hash_value);
    transparent_crc(realsmith_NIur3y30Pq(51,43), "realsmith_NIur3y30Pq(51,43)", print_hash_value);
    transparent_crc(realsmith_0AajXMU3en(66,25), "realsmith_0AajXMU3en(66,25)", print_hash_value);
    transparent_crc(realsmith_l5bJ8SKDTx(44), "realsmith_l5bJ8SKDTx(44)", print_hash_value);
    transparent_crc(realsmith_jTMQ5DzqHK(38,6,76), "realsmith_jTMQ5DzqHK(38,6,76)", print_hash_value);
    transparent_crc(realsmith_uEmhvK48T7(97,38,24,94,18,86,56,60,81,73), "realsmith_uEmhvK48T7(97,38,24,94,18,86,56,60,81,73)", print_hash_value);
    transparent_crc(realsmith_JsoADfceYN(97,58,34), "realsmith_JsoADfceYN(97,58,34)", print_hash_value);
    transparent_crc(realsmith_rwqAMvFgEW(10,62), "realsmith_rwqAMvFgEW(10,62)", print_hash_value);
    transparent_crc(realsmith_wBJtEmxiWb(91,27,93), "realsmith_wBJtEmxiWb(91,27,93)", print_hash_value);
    transparent_crc(realsmith_qzFAO18yJA(24,92,71,40), "realsmith_qzFAO18yJA(24,92,71,40)", print_hash_value);
    transparent_crc(realsmith_RbR7z0p0m9(7,92,0,31), "realsmith_RbR7z0p0m9(7,92,0,31)", print_hash_value);
    transparent_crc(realsmith_2dZQ4hNhgK(78,61,18,93,59), "realsmith_2dZQ4hNhgK(78,61,18,93,59)", print_hash_value);
    transparent_crc(realsmith_0Bsokr0sdC(9,63,10), "realsmith_0Bsokr0sdC(9,63,10)", print_hash_value);
    transparent_crc(realsmith_rwqAMvFgEW(10,62), "realsmith_rwqAMvFgEW(10,62)", print_hash_value);
    transparent_crc(realsmith_6zMf7kMERO(90), "realsmith_6zMf7kMERO(90)", print_hash_value);
    transparent_crc(realsmith_EQ1M6mxr0A(49,17,82,12,96,34,78,10,69,18,12,95,0,52), "realsmith_EQ1M6mxr0A(49,17,82,12,96,34,78,10,69,18,12,95,0,52)", print_hash_value);
    transparent_crc(realsmith_BH2k0OYgxW(27), "realsmith_BH2k0OYgxW(27)", print_hash_value);
    transparent_crc(realsmith_i9bFZK9Dwb(10,74), "realsmith_i9bFZK9Dwb(10,74)", print_hash_value);
    transparent_crc(realsmith_CZvc68nBhk(9), "realsmith_CZvc68nBhk(9)", print_hash_value);
    transparent_crc(realsmith_Q03lRTHoVF(79,38), "realsmith_Q03lRTHoVF(79,38)", print_hash_value);
    transparent_crc(realsmith_NrYlxcgvFT(12,9), "realsmith_NrYlxcgvFT(12,9)", print_hash_value);
    transparent_crc(realsmith_WsNHhFXW2G(100,23,20,26,95), "realsmith_WsNHhFXW2G(100,23,20,26,95)", print_hash_value);
    transparent_crc(realsmith_fcP0y8xM8b(97,98), "realsmith_fcP0y8xM8b(97,98)", print_hash_value);
    transparent_crc(realsmith_8FseWRZdbF(75,89,24,40,46), "realsmith_8FseWRZdbF(75,89,24,40,46)", print_hash_value);
    transparent_crc(realsmith_136Ac56RWR(13), "realsmith_136Ac56RWR(13)", print_hash_value);
    transparent_crc(realsmith_jw4f5ZZCQY(2,14,56,61), "realsmith_jw4f5ZZCQY(2,14,56,61)", print_hash_value);
    transparent_crc(realsmith_SiKi9Qj2Ou(83,61,82,76), "realsmith_SiKi9Qj2Ou(83,61,82,76)", print_hash_value);
    transparent_crc(realsmith_WsNHhFXW2G(100,23,20,26,95), "realsmith_WsNHhFXW2G(100,23,20,26,95)", print_hash_value);
    transparent_crc(realsmith_cAChPSU1uJ(3), "realsmith_cAChPSU1uJ(3)", print_hash_value);
    transparent_crc(realsmith_O2kYbHIKTS(23,58), "realsmith_O2kYbHIKTS(23,58)", print_hash_value);
    transparent_crc(realsmith_oLMLcC4eNg(54,38), "realsmith_oLMLcC4eNg(54,38)", print_hash_value);
    transparent_crc(realsmith_h6hk2qGsuT(17,31,66), "realsmith_h6hk2qGsuT(17,31,66)", print_hash_value);
    transparent_crc(realsmith_qzFAO18yJA(24,92,71,40), "realsmith_qzFAO18yJA(24,92,71,40)", print_hash_value);
    transparent_crc(realsmith_proxy_OBa7vbuvsI(17), "realsmith_proxy_OBa7vbuvsI(17)", print_hash_value);
    transparent_crc(realsmith_0ekBxEkzlx(72), "realsmith_0ekBxEkzlx(72)", print_hash_value);
    transparent_crc(realsmith_fOAlK4AP0E(42,5,2,2,85), "realsmith_fOAlK4AP0E(42,5,2,2,85)", print_hash_value);
    transparent_crc(realsmith_R2kKhqLAQz(1), "realsmith_R2kKhqLAQz(1)", print_hash_value);
    transparent_crc(realsmith_w38HmhAbOv(92,29), "realsmith_w38HmhAbOv(92,29)", print_hash_value);
    transparent_crc(realsmith_rNpCX4qdxx(92,82,36), "realsmith_rNpCX4qdxx(92,82,36)", print_hash_value);
    transparent_crc(realsmith_cGQoETEPjq(49,92,53), "realsmith_cGQoETEPjq(49,92,53)", print_hash_value);
    transparent_crc(realsmith_yvrnMNl98n(63), "realsmith_yvrnMNl98n(63)", print_hash_value);
    transparent_crc(realsmith_zY8quaGONg(76,9,6,38,84,54), "realsmith_zY8quaGONg(76,9,6,38,84,54)", print_hash_value);
    transparent_crc(realsmith_jz6MOKTrTk(6,88), "realsmith_jz6MOKTrTk(6,88)", print_hash_value);
    transparent_crc(realsmith_TadhcYLdQW(83), "realsmith_TadhcYLdQW(83)", print_hash_value);
    transparent_crc(realsmith_zY8quaGONg(76,9,6,38,84,54), "realsmith_zY8quaGONg(76,9,6,38,84,54)", print_hash_value);
    transparent_crc(realsmith_h6hk2qGsuT(17,31,66), "realsmith_h6hk2qGsuT(17,31,66)", print_hash_value);
    transparent_crc(realsmith_O2kYbHIKTS(23,58), "realsmith_O2kYbHIKTS(23,58)", print_hash_value);
    transparent_crc(realsmith_xm8Yk8JW2z(73,62,84,68), "realsmith_xm8Yk8JW2z(73,62,84,68)", print_hash_value);
    transparent_crc(realsmith_pisbV0mOo9(1,0,0,0,5), "realsmith_pisbV0mOo9(1,0,0,0,5)", print_hash_value);
    transparent_crc(realsmith_pisbV0mOo9(1,0,0,0,5), "realsmith_pisbV0mOo9(1,0,0,0,5)", print_hash_value);
    transparent_crc(realsmith_KdCgiydVph(39,80,26), "realsmith_KdCgiydVph(39,80,26)", print_hash_value);
    transparent_crc(realsmith_bbmgzZrcwi(32), "realsmith_bbmgzZrcwi(32)", print_hash_value);
    transparent_crc(realsmith_hQuckbyQYb(73,58,63,35), "realsmith_hQuckbyQYb(73,58,63,35)", print_hash_value);
    transparent_crc(realsmith_EtQHjCIuS9(72,66), "realsmith_EtQHjCIuS9(72,66)", print_hash_value);
    transparent_crc(realsmith_s3U2rshZ16(90,49,29), "realsmith_s3U2rshZ16(90,49,29)", print_hash_value);
    transparent_crc(realsmith_qRtEBxLExz(97,54), "realsmith_qRtEBxLExz(97,54)", print_hash_value);
    transparent_crc(realsmith_BJemanWlA5(49), "realsmith_BJemanWlA5(49)", print_hash_value);
    transparent_crc(realsmith_tJH5FjcGq6(39), "realsmith_tJH5FjcGq6(39)", print_hash_value);
    transparent_crc(realsmith_1fwOkZ1ikf(59), "realsmith_1fwOkZ1ikf(59)", print_hash_value);
    transparent_crc(realsmith_mHX9r3bZPo(62,80,54,21), "realsmith_mHX9r3bZPo(62,80,54,21)", print_hash_value);
    transparent_crc(realsmith_rNpCX4qdxx(92,82,36), "realsmith_rNpCX4qdxx(92,82,36)", print_hash_value);
    transparent_crc(realsmith_JsoADfceYN(97,58,34), "realsmith_JsoADfceYN(97,58,34)", print_hash_value);
    transparent_crc(realsmith_e2di8pLdha(90,14,81,57), "realsmith_e2di8pLdha(90,14,81,57)", print_hash_value);
    transparent_crc(realsmith_EQ1M6mxr0A(49,17,82,12,96,34,78,10,69,18,12,95,0,52), "realsmith_EQ1M6mxr0A(49,17,82,12,96,34,78,10,69,18,12,95,0,52)", print_hash_value);
    transparent_crc(realsmith_YrWASB7vIy(78), "realsmith_YrWASB7vIy(78)", print_hash_value);
    transparent_crc(realsmith_VINj6XiQ91(52,33), "realsmith_VINj6XiQ91(52,33)", print_hash_value);
    transparent_crc(realsmith_WsNHhFXW2G(100,23,20,26,95), "realsmith_WsNHhFXW2G(100,23,20,26,95)", print_hash_value);
    transparent_crc(realsmith_ch0LkaDQ3p(34,15), "realsmith_ch0LkaDQ3p(34,15)", print_hash_value);
    transparent_crc(realsmith_proxy_rrsdK28W9W(73,-36), "realsmith_proxy_rrsdK28W9W(73,-36)", print_hash_value);
    transparent_crc(realsmith_s3U2rshZ16(90,49,29), "realsmith_s3U2rshZ16(90,49,29)", print_hash_value);
    transparent_crc(realsmith_2sJmdktiQX(94), "realsmith_2sJmdktiQX(94)", print_hash_value);
    transparent_crc(realsmith_VI4UigSO81(86), "realsmith_VI4UigSO81(86)", print_hash_value);
    transparent_crc(realsmith_s3U2rshZ16(90,49,29), "realsmith_s3U2rshZ16(90,49,29)", print_hash_value);
    transparent_crc(realsmith_E2TqH7TqYU(13,72), "realsmith_E2TqH7TqYU(13,72)", print_hash_value);
    transparent_crc(realsmith_yl8Bxm4hxI(19,74), "realsmith_yl8Bxm4hxI(19,74)", print_hash_value);
    transparent_crc(realsmith_YrWASB7vIy(78), "realsmith_YrWASB7vIy(78)", print_hash_value);
    transparent_crc(realsmith_fPZXyOr0ER(95), "realsmith_fPZXyOr0ER(95)", print_hash_value);
    transparent_crc(realsmith_fPZXyOr0ER(95), "realsmith_fPZXyOr0ER(95)", print_hash_value);
    transparent_crc(realsmith_H6q5E2v8HC(39,83,74,58), "realsmith_H6q5E2v8HC(39,83,74,58)", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-4abac2ffdb071ca9337e4f31fa79cd38df1ac7c3/bin/gcc -O0 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-4abac2ffdb071ca9337e4f31fa79cd38df1ac7c3/bin/gcc -O0 -fno-strict-aliasing : 7648711B */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-4abac2ffdb071ca9337e4f31fa79cd38df1ac7c3/bin/gcc -O1 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-4abac2ffdb071ca9337e4f31fa79cd38df1ac7c3/bin/gcc -O1 -fno-strict-aliasing : 7648711B */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-4abac2ffdb071ca9337e4f31fa79cd38df1ac7c3/bin/gcc -O2 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-4abac2ffdb071ca9337e4f31fa79cd38df1ac7c3/bin/gcc -O2 -fno-strict-aliasing : 7648711B */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-4abac2ffdb071ca9337e4f31fa79cd38df1ac7c3/bin/gcc -O3 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-4abac2ffdb071ca9337e4f31fa79cd38df1ac7c3/bin/gcc -O3 -fno-strict-aliasing : 7648711B */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-4abac2ffdb071ca9337e4f31fa79cd38df1ac7c3/bin/gcc -Os -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-4abac2ffdb071ca9337e4f31fa79cd38df1ac7c3/bin/gcc -Os -fno-strict-aliasing : 7648711B */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/clang-2f54223247e8f9f0fc006b944de8351f376814af/bin/clang -O0 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/clang-2f54223247e8f9f0fc006b944de8351f376814af/bin/clang -O0 -fno-strict-aliasing : 7648711B */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/clang-2f54223247e8f9f0fc006b944de8351f376814af/bin/clang -O1 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/clang-2f54223247e8f9f0fc006b944de8351f376814af/bin/clang -O1 -fno-strict-aliasing : 7648711B */
/* Compiler crash! Can't compile with /zdata/shaoli/compilers/ccbuilder-compilers/clang-2f54223247e8f9f0fc006b944de8351f376814af/bin/clang -O2 -fno-strict-aliasing  */

/* Bisection: BugDoesNotExistAnymore */
