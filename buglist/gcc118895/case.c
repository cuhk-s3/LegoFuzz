/* -----Global Variables----- */
 int g_B4USED = 84;
static int g_M65HXT = 43;
 int g_AB9GOX[5] = {4, -114, -12, -69, 8};
static int g_IU97RO[3] = {-90, -111, -114};
 int g_031K19 = -65;
 int g_RWTYM9 = -69;
static int g_MW3YJP[6] = {-65, -77, -8, 21, -86, 46};
 int g_R4L6DT = 124;
static int g_BNNLY0[4] = {124, -96, 85, -61};
 int g_29FPQX = -16;

/* -----Synthesized Function----- */
#include <csmith.h>
#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_2tE4dcsL2s(x) (x)
#define Tag2_realsmith_2tE4dcsL2s(x) (x)
#define Tag3_realsmith_2tE4dcsL2s(x) (x)
#define Tag4_realsmith_2tE4dcsL2s(x) (x)
#include "stdlib.h"
struct vfe_line_lR2vQZ {
    int dummy_realsmith_2tE4dcsL2s;
};
struct vfe_device_lR2vQZ {
    int id_realsmith_2tE4dcsL2s;
};
struct v4l2_subdev_lR2vQZ {
    int dummy_realsmith_2tE4dcsL2s;
};
struct media_entity_lR2vQZ {
    int dummy_realsmith_2tE4dcsL2s;
};
int realsmith_2tE4dcsL2s(int entity_dummy_realsmith_2tE4dcsL2s) {
    struct media_entity_lR2vQZ entity_realsmith_2tE4dcsL2s;
    /*bef_stmt:17253*/
entity_realsmith_2tE4dcsL2s.dummy_realsmith_2tE4dcsL2s = Tag1_realsmith_2tE4dcsL2s(/*int:17467:17467:17253:e*/entity_dummy_realsmith_2tE4dcsL2s);
/*aft_stmt:17253*/
    struct v4l2_subdev_lR2vQZ sd_realsmith_2tE4dcsL2s;
    struct vfe_line_lR2vQZ line_realsmith_2tE4dcsL2s;
    struct vfe_device_lR2vQZ vfe_realsmith_2tE4dcsL2s;
    /*bef_stmt:17369*/
sd_realsmith_2tE4dcsL2s.dummy_realsmith_2tE4dcsL2s = Tag2_realsmith_2tE4dcsL2s(/*int:17467:17467:17369:e*/entity_realsmith_2tE4dcsL2s.dummy_realsmith_2tE4dcsL2s);
/*aft_stmt:17369*/
    /*bef_stmt:17408*/
line_realsmith_2tE4dcsL2s.dummy_realsmith_2tE4dcsL2s = Tag3_realsmith_2tE4dcsL2s(/*int:17467:17467:17408:e*/sd_realsmith_2tE4dcsL2s.dummy_realsmith_2tE4dcsL2s);
/*aft_stmt:17408*/
    vfe_realsmith_2tE4dcsL2s.id_realsmith_2tE4dcsL2s = 42;
    /*bef_stmt:17465*/
return Tag4_realsmith_2tE4dcsL2s(/*int:17467:17467:17465:e*/vfe_realsmith_2tE4dcsL2s.id_realsmith_2tE4dcsL2s);
/*aft_stmt:17465*/
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


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_YrWTcBSBuT(x) (x)
#define Tag2_realsmith_YrWTcBSBuT(x) (x)
#define Tag3_realsmith_YrWTcBSBuT(x) (x)
#define Tag4_realsmith_YrWTcBSBuT(x) (x)
#define Tag5_realsmith_YrWTcBSBuT(x) (x)
#define Tag6_realsmith_YrWTcBSBuT(x) (x)
#define Tag7_realsmith_YrWTcBSBuT(x) (x)
#define Tag8_realsmith_YrWTcBSBuT(x) (x)
#include "stdbool.h"
int realsmith_YrWTcBSBuT(int is_labpc1200_realsmith_YrWTcBSBuT, int mode_realsmith_YrWTcBSBuT, int xfer_realsmith_YrWTcBSBuT, unsigned int range_realsmith_YrWTcBSBuT, unsigned int aref_realsmith_YrWTcBSBuT, _Bool ena_intr_realsmith_YrWTcBSBuT) {
    int cmd6_realsmith_YrWTcBSBuT = 0;
    /*bef_stmt:703*/
/*bef_stmt:703*/
if (!Tag1_realsmith_YrWTcBSBuT(/*int:974:974:703:e*/is_labpc1200_realsmith_YrWTcBSBuT))
        return Tag2_realsmith_YrWTcBSBuT(/*int:974:974:703:e*/cmd6_realsmith_YrWTcBSBuT);
/*aft_stmt:703*/
/*aft_stmt:703*/
    /*bef_stmt:756*/
if (Tag3_realsmith_YrWTcBSBuT(/*unsigned int:974:974:756:e*/aref_realsmith_YrWTcBSBuT) != 0)
        cmd6_realsmith_YrWTcBSBuT |= 0x08;
    else
        cmd6_realsmith_YrWTcBSBuT &= ~0x08;
/*aft_stmt:756*/
    /*bef_stmt:811*/
if (Tag4_realsmith_YrWTcBSBuT(/*unsigned int:974:974:811:e*/range_realsmith_YrWTcBSBuT) == 1)
        cmd6_realsmith_YrWTcBSBuT |= 0x01;
    else
        cmd6_realsmith_YrWTcBSBuT &= ~0x01;
/*aft_stmt:811*/
    /*bef_stmt:863*/
if (Tag5_realsmith_YrWTcBSBuT(/*int:974:974:863:e*/xfer_realsmith_YrWTcBSBuT) == 1)
        cmd6_realsmith_YrWTcBSBuT |= 0x04;
    else
        cmd6_realsmith_YrWTcBSBuT &= ~0x04;
/*aft_stmt:863*/
    /*bef_stmt:907*/
if (Tag6_realsmith_YrWTcBSBuT(/*_Bool:974:974:907:e*/ena_intr_realsmith_YrWTcBSBuT))
        cmd6_realsmith_YrWTcBSBuT |= 0x02;
    else
        cmd6_realsmith_YrWTcBSBuT &= ~0x02;
/*aft_stmt:907*/
    /*bef_stmt:959*/
if (Tag7_realsmith_YrWTcBSBuT(/*int:974:974:959:e*/mode_realsmith_YrWTcBSBuT) == 1)
        cmd6_realsmith_YrWTcBSBuT |= 0x20;
    else
        cmd6_realsmith_YrWTcBSBuT &= ~0x20;
/*aft_stmt:959*/
    /*bef_stmt:972*/
return Tag8_realsmith_YrWTcBSBuT(/*int:974:974:972:e*/cmd6_realsmith_YrWTcBSBuT);
/*aft_stmt:972*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_lTnzpqJ7IP(x) (x)
#define Tag2_realsmith_lTnzpqJ7IP(x) (x)
#include "stdint.h"
int realsmith_lTnzpqJ7IP(int src_char_realsmith_lTnzpqJ7IP) {
    int dest_char_realsmith_lTnzpqJ7IP;
    /*bef_stmt:1990*/
switch (Tag1_realsmith_lTnzpqJ7IP(/*int:2181:2181:1990:e*/src_char_realsmith_lTnzpqJ7IP)) {
    case ':':
        dest_char_realsmith_lTnzpqJ7IP = 1;
        break;
    case '*':
        dest_char_realsmith_lTnzpqJ7IP = 2;
        break;
    case '?':
        dest_char_realsmith_lTnzpqJ7IP = 3;
        break;
    case '<':
        dest_char_realsmith_lTnzpqJ7IP = 4;
        break;
    case '>':
        dest_char_realsmith_lTnzpqJ7IP = 5;
        break;
    case '|':
        dest_char_realsmith_lTnzpqJ7IP = 6;
        break;
    default:
        dest_char_realsmith_lTnzpqJ7IP = 0;
    }
/*aft_stmt:1990*/
    /*bef_stmt:2179*/
return Tag2_realsmith_lTnzpqJ7IP(/*int:2181:2181:2179:e*/dest_char_realsmith_lTnzpqJ7IP);
/*aft_stmt:2179*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_AWDuYvfUKW(x) (x)
#define Tag2_realsmith_AWDuYvfUKW(x) (x)
#define Tag3_realsmith_AWDuYvfUKW(x) (x)
#define Tag4_realsmith_AWDuYvfUKW(x) (x)
#define Tag5_realsmith_AWDuYvfUKW(x) (x)
#define Tag6_realsmith_AWDuYvfUKW(x) (x)
#define Tag7_realsmith_AWDuYvfUKW(x) (x)
#define Tag8_realsmith_AWDuYvfUKW(x) (x)
#include "stdlib.h"
int realsmith_AWDuYvfUKW(int hw_cmd_cfg_realsmith_AWDuYvfUKW, int if_mode_realsmith_AWDuYvfUKW, int global_rd_value_realsmith_AWDuYvfUKW) {
    int pm0_maxfrm_realsmith_AWDuYvfUKW = 1518;
    int ptcmsdur_realsmith_AWDuYvfUKW = 1518;
    int ptxmbar_realsmith_AWDuYvfUKW = 2 * 1518;
    int cmd_cfg_realsmith_AWDuYvfUKW = 0x1 | 0x2 | 0x4 | 0x8 | 0x10;
    /*bef_stmt:17274*/
int pm0_if_mode_realsmith_AWDuYvfUKW = Tag1_realsmith_AWDuYvfUKW(/*int:17398:17398:17274:e*/if_mode_realsmith_AWDuYvfUKW);
/*aft_stmt:17274*/
    /*bef_stmt:17307*/
if (Tag2_realsmith_AWDuYvfUKW(/*int:17398:17398:17307:e*/pm0_if_mode_realsmith_AWDuYvfUKW) & 0x20) {
        pm0_if_mode_realsmith_AWDuYvfUKW = 0x40;
    }
/*aft_stmt:17307*/
    /*bef_stmt:17341*/
if (Tag3_realsmith_AWDuYvfUKW(/*int:17398:17398:17341:e*/global_rd_value_realsmith_AWDuYvfUKW) == 0x200) {
        pm0_if_mode_realsmith_AWDuYvfUKW = 0x80;
    }
/*aft_stmt:17341*/
    /*bef_stmt:17396*/
/*bef_stmt:17396*/
/*bef_stmt:17396*/
/*bef_stmt:17396*/
/*bef_stmt:17396*/
return Tag4_realsmith_AWDuYvfUKW(/*int:17398:17398:17396:e*/pm0_maxfrm_realsmith_AWDuYvfUKW) + Tag5_realsmith_AWDuYvfUKW(/*int:17398:17398:17396:e*/ptcmsdur_realsmith_AWDuYvfUKW) + Tag6_realsmith_AWDuYvfUKW(/*int:17398:17398:17396:e*/ptxmbar_realsmith_AWDuYvfUKW) + Tag7_realsmith_AWDuYvfUKW(/*int:17398:17398:17396:e*/cmd_cfg_realsmith_AWDuYvfUKW) + Tag8_realsmith_AWDuYvfUKW(/*int:17398:17398:17396:e*/pm0_if_mode_realsmith_AWDuYvfUKW);
/*aft_stmt:17396*/
/*aft_stmt:17396*/
/*aft_stmt:17396*/
/*aft_stmt:17396*/
/*aft_stmt:17396*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_hdkZIV3S4I(x) (x)
#define Tag2_realsmith_hdkZIV3S4I(x) (x)
#define Tag3_realsmith_hdkZIV3S4I(x) (x)
#define Tag4_realsmith_hdkZIV3S4I(x) (x)
#define Tag5_realsmith_hdkZIV3S4I(x) (x)
#define Tag6_realsmith_hdkZIV3S4I(x) (x)
#define Tag7_realsmith_hdkZIV3S4I(x) (x)
#include "stdlib.h"
int realsmith_hdkZIV3S4I(int saved_r0_realsmith_hdkZIV3S4I, int saved_r2_realsmith_hdkZIV3S4I) {
    /*bef_stmt:17123*/
int w0_val_realsmith_hdkZIV3S4I = Tag1_realsmith_hdkZIV3S4I(/*int:17305:17305:17123:e*/saved_r0_realsmith_hdkZIV3S4I);
/*aft_stmt:17123*/
    int w2_val1_realsmith_hdkZIV3S4I = 0xb;
    int w2_val2_realsmith_hdkZIV3S4I = 0xa;
    int w0_val2_realsmith_hdkZIV3S4I = 0xa0;
    int w2_val3_realsmith_hdkZIV3S4I = 3;
    int w2_val4_realsmith_hdkZIV3S4I = 4;
    /*bef_stmt:17303*/
/*bef_stmt:17303*/
/*bef_stmt:17303*/
/*bef_stmt:17303*/
/*bef_stmt:17303*/
/*bef_stmt:17303*/
return Tag2_realsmith_hdkZIV3S4I(/*int:17305:17305:17303:e*/w0_val_realsmith_hdkZIV3S4I) + Tag3_realsmith_hdkZIV3S4I(/*int:17305:17305:17303:e*/w2_val1_realsmith_hdkZIV3S4I) + Tag4_realsmith_hdkZIV3S4I(/*int:17305:17305:17303:e*/w2_val2_realsmith_hdkZIV3S4I) + Tag5_realsmith_hdkZIV3S4I(/*int:17305:17305:17303:e*/w0_val2_realsmith_hdkZIV3S4I) + Tag6_realsmith_hdkZIV3S4I(/*int:17305:17305:17303:e*/w2_val3_realsmith_hdkZIV3S4I) + Tag7_realsmith_hdkZIV3S4I(/*int:17305:17305:17303:e*/w2_val4_realsmith_hdkZIV3S4I);
/*aft_stmt:17303*/
/*aft_stmt:17303*/
/*aft_stmt:17303*/
/*aft_stmt:17303*/
/*aft_stmt:17303*/
/*aft_stmt:17303*/
}



#include "stdlib.h"
int realsmith_HboREYOdPp(int gpio_realsmith_HboREYOdPp, int value_realsmith_HboREYOdPp, int *data_reg_realsmith_HboREYOdPp, int sb_pdev_realsmith_HboREYOdPp, int reg1_data_base_realsmith_HboREYOdPp, int reg2_data_base_realsmith_HboREYOdPp) {
    int reg_realsmith_HboREYOdPp = (gpio_realsmith_HboREYOdPp < 32) ? 0 : 1;
    if (value_realsmith_HboREYOdPp) {
        data_reg_realsmith_HboREYOdPp[reg_realsmith_HboREYOdPp] |= 1 << (gpio_realsmith_HboREYOdPp & 0x1f);
    } else {
        data_reg_realsmith_HboREYOdPp[reg_realsmith_HboREYOdPp] &= ~(1 << (gpio_realsmith_HboREYOdPp & 0x1f));
    }
    return data_reg_realsmith_HboREYOdPp[reg_realsmith_HboREYOdPp];
}
int realsmith_proxy_GJyjbb8c10(int p_0_GJ9aafkj44, int p_1_2C37dzrZRF, int p_2_JSleW6hvRY, int p_3_XwL49fLazK, int p_4_aDfEhv6qVY, int p_5_bw0AuDmH7g) {
int proxy_DAgZwD0r2y[13] = { 75, p_2_JSleW6hvRY, 82, p_2_JSleW6hvRY, p_2_JSleW6hvRY, 9, p_2_JSleW6hvRY, p_2_JSleW6hvRY, 36, 36, 60, p_2_JSleW6hvRY, 7 };
int proxy_ret_SLVoeyZCpR = realsmith_HboREYOdPp(p_0_GJ9aafkj44, p_1_2C37dzrZRF, proxy_DAgZwD0r2y, p_3_XwL49fLazK, p_4_aDfEhv6qVY, p_5_bw0AuDmH7g);
return proxy_ret_SLVoeyZCpR;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_fqrZZvuAm1(x) (x)
#define Tag2_realsmith_fqrZZvuAm1(x) (x)
#define Tag3_realsmith_fqrZZvuAm1(x) (x)
#include "stddef.h"
int realsmith_fqrZZvuAm1(int type_realsmith_fqrZZvuAm1) {
    /*bef_stmt:759*/
/*bef_stmt:759*/
if (Tag1_realsmith_fqrZZvuAm1(/*int:772:772:759:e*/type_realsmith_fqrZZvuAm1) < 0 || Tag2_realsmith_fqrZZvuAm1(/*int:772:772:759:e*/type_realsmith_fqrZZvuAm1) > 1)
        return -1;
/*aft_stmt:759*/
/*aft_stmt:759*/
    /*bef_stmt:770*/
return Tag3_realsmith_fqrZZvuAm1(/*int:772:772:770:e*/type_realsmith_fqrZZvuAm1);
/*aft_stmt:770*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_7KCn3xIMzJ(x) (x)
#define Tag2_realsmith_proxy_7KCn3xIMzJ(x) (x)
#define Tag3_realsmith_proxy_7KCn3xIMzJ(x) (x)
#define Tag4_realsmith_proxy_7KCn3xIMzJ(x) (x)
#define Tag5_realsmith_proxy_7KCn3xIMzJ(x) (x)
#include "stdlib.h"
struct pktcdvd_device_GacGBq {
    int pkt_free_list_realsmith_dzK8MZg8eR;
};
struct packet_data_GacGBq {
    int cache_valid_realsmith_dzK8MZg8eR;
};
int realsmith_dzK8MZg8eR(int cache_valid_realsmith_dzK8MZg8eR, int *pkt_free_list_realsmith_dzK8MZg8eR) {
    struct packet_data_GacGBq pkt_realsmith_dzK8MZg8eR;
    /*bef_stmt:17211*/
pkt_realsmith_dzK8MZg8eR.cache_valid_realsmith_dzK8MZg8eR = Tag1_realsmith_proxy_7KCn3xIMzJ(/*int:17306:17306:17211:e*/cache_valid_realsmith_dzK8MZg8eR);
/*aft_stmt:17211*/
    /*bef_stmt:17285*/
if (Tag2_realsmith_proxy_7KCn3xIMzJ(/*int:17306:17306:17285:e*/pkt_realsmith_dzK8MZg8eR.cache_valid_realsmith_dzK8MZg8eR)) {
        *pkt_free_list_realsmith_dzK8MZg8eR += 1;
    } else {
        *pkt_free_list_realsmith_dzK8MZg8eR += 1;
    }
/*aft_stmt:17285*/
    /*bef_stmt:17304*/
return Tag3_realsmith_proxy_7KCn3xIMzJ(/*int:17306:17306:17304:e*/*pkt_free_list_realsmith_dzK8MZg8eR);
/*aft_stmt:17304*/
}
int realsmith_proxy_7KCn3xIMzJ(int p_0_VeX9UyaMfB, int p_1_pYN48gV7NC) {
/*bef_stmt:17433*/
int proxy_ret_2QUmWpZPfM = realsmith_dzK8MZg8eR(Tag4_realsmith_proxy_7KCn3xIMzJ(/*int:17445:17445:17433:e*/p_0_VeX9UyaMfB), &(p_1_pYN48gV7NC));
/*aft_stmt:17433*/
/*bef_stmt:17443*/
return Tag5_realsmith_proxy_7KCn3xIMzJ(/*int:17445:17445:17443:e*/proxy_ret_2QUmWpZPfM);
/*aft_stmt:17443*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_AmI3Xn0nP4(x) (x)
#define Tag2_realsmith_AmI3Xn0nP4(x) (x)
#define Tag3_realsmith_AmI3Xn0nP4(x) (x)
#include "stdlib.h"
struct btrfs_root_b85T3A {
    int commit_root_realsmith_AmI3Xn0nP4;
    int node_realsmith_AmI3Xn0nP4;
    int dirty_list_realsmith_AmI3Xn0nP4;
    int root_key_realsmith_AmI3Xn0nP4;
};
struct btrfs_fs_info_b85T3A {
    struct btrfs_root_b85T3A *free_space_root_realsmith_AmI3Xn0nP4;
    struct btrfs_root_b85T3A *tree_root_realsmith_AmI3Xn0nP4;
};
int realsmith_AmI3Xn0nP4(int tree_root_key_realsmith_AmI3Xn0nP4, int free_space_root_key_realsmith_AmI3Xn0nP4) {
    struct btrfs_fs_info_b85T3A fs_info_realsmith_AmI3Xn0nP4;
    struct btrfs_root_b85T3A tree_root_realsmith_AmI3Xn0nP4;
    struct btrfs_root_b85T3A free_space_root_realsmith_AmI3Xn0nP4;
    int ret_realsmith_AmI3Xn0nP4 = 0;
    fs_info_realsmith_AmI3Xn0nP4.tree_root_realsmith_AmI3Xn0nP4 = &tree_root_realsmith_AmI3Xn0nP4;
    fs_info_realsmith_AmI3Xn0nP4.free_space_root_realsmith_AmI3Xn0nP4 = &free_space_root_realsmith_AmI3Xn0nP4;
    int trans_realsmith_AmI3Xn0nP4 = 1;
    fs_info_realsmith_AmI3Xn0nP4.free_space_root_realsmith_AmI3Xn0nP4 = ((void*)0);
    ret_realsmith_AmI3Xn0nP4 = 0;
    /*bef_stmt:17462*/
if (Tag1_realsmith_AmI3Xn0nP4(/*int:17514:17514:17462:e*/ret_realsmith_AmI3Xn0nP4)) {
        goto abort;
    }
/*aft_stmt:17462*/
    ret_realsmith_AmI3Xn0nP4 = 0;
    /*bef_stmt:17491*/
if (Tag2_realsmith_AmI3Xn0nP4(/*int:17514:17514:17491:e*/ret_realsmith_AmI3Xn0nP4)) {
        goto abort;
    }
/*aft_stmt:17491*/
    return 0;
/*bef_stmt:17510*/
abort:
    return Tag3_realsmith_AmI3Xn0nP4(/*int:17514:17514:17510:e*/ret_realsmith_AmI3Xn0nP4);
/*aft_stmt:17510*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_5B7YlFNCXa(x) (x)
#define Tag2_realsmith_5B7YlFNCXa(x) (x)
#define Tag3_realsmith_5B7YlFNCXa(x) (x)
#include "stdlib.h"
struct platform_device_P6XHKz {
    int dev_realsmith_5B7YlFNCXa;
};
int realsmith_5B7YlFNCXa(int dev_id_realsmith_5B7YlFNCXa) {
    struct platform_device_P6XHKz pdev_realsmith_5B7YlFNCXa;
    /*bef_stmt:17151*/
pdev_realsmith_5B7YlFNCXa.dev_realsmith_5B7YlFNCXa = Tag1_realsmith_5B7YlFNCXa(/*int:17256:17256:17151:e*/dev_id_realsmith_5B7YlFNCXa);
/*aft_stmt:17151*/
    int wake_irq_cleared_realsmith_5B7YlFNCXa = 1;
    int wakeup_initialized_realsmith_5B7YlFNCXa = 0;
    /*bef_stmt:17254*/
/*bef_stmt:17254*/
return (Tag2_realsmith_5B7YlFNCXa(/*int:17256:17256:17254:e*/wake_irq_cleared_realsmith_5B7YlFNCXa) && !Tag3_realsmith_5B7YlFNCXa(/*int:17256:17256:17254:e*/wakeup_initialized_realsmith_5B7YlFNCXa)) ? 0 : -1;
/*aft_stmt:17254*/
/*aft_stmt:17254*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_FTDiAIaMNM(x) (x)
#define Tag2_realsmith_FTDiAIaMNM(x) (x)
#define Tag3_realsmith_FTDiAIaMNM(x) (x)
#define Tag4_realsmith_FTDiAIaMNM(x) (x)
#define Tag5_realsmith_FTDiAIaMNM(x) (x)
#define Tag6_realsmith_FTDiAIaMNM(x) (x)
#define Tag7_realsmith_FTDiAIaMNM(x) (x)
#define Tag8_realsmith_FTDiAIaMNM(x) (x)
#define Tag9_realsmith_FTDiAIaMNM(x) (x)
#define Tag10_realsmith_FTDiAIaMNM(x) (x)
#define Tag11_realsmith_FTDiAIaMNM(x) (x)
#define Tag12_realsmith_FTDiAIaMNM(x) (x)
#include "stdlib.h"
struct nlm_args_Zp8Ixb {
    int block_realsmith_FTDiAIaMNM;
    int reclaim_realsmith_FTDiAIaMNM;
    int state_realsmith_FTDiAIaMNM;
    unsigned long cookie_realsmith_FTDiAIaMNM;
    struct {
        long fl_type_realsmith_FTDiAIaMNM;
    } lock_realsmith_FTDiAIaMNM;
};
int realsmith_FTDiAIaMNM(int block_realsmith_FTDiAIaMNM, int reclaim_realsmith_FTDiAIaMNM, int state_realsmith_FTDiAIaMNM, unsigned long cookie_realsmith_FTDiAIaMNM, long fl_type_realsmith_FTDiAIaMNM) {
    struct nlm_args_Zp8Ixb args_realsmith_FTDiAIaMNM;
    /*bef_stmt:17329*/
args_realsmith_FTDiAIaMNM.block_realsmith_FTDiAIaMNM = Tag1_realsmith_FTDiAIaMNM(/*int:17663:17663:17329:e*/block_realsmith_FTDiAIaMNM);
/*aft_stmt:17329*/
    /*bef_stmt:17376*/
args_realsmith_FTDiAIaMNM.reclaim_realsmith_FTDiAIaMNM = Tag2_realsmith_FTDiAIaMNM(/*int:17663:17663:17376:e*/reclaim_realsmith_FTDiAIaMNM);
/*aft_stmt:17376*/
    /*bef_stmt:17397*/
args_realsmith_FTDiAIaMNM.state_realsmith_FTDiAIaMNM = Tag3_realsmith_FTDiAIaMNM(/*int:17663:17663:17397:e*/state_realsmith_FTDiAIaMNM);
/*aft_stmt:17397*/
    /*bef_stmt:17421*/
args_realsmith_FTDiAIaMNM.cookie_realsmith_FTDiAIaMNM = Tag4_realsmith_FTDiAIaMNM(/*unsigned long:17663:17663:17421:e*/cookie_realsmith_FTDiAIaMNM);
/*aft_stmt:17421*/
    /*bef_stmt:17448*/
args_realsmith_FTDiAIaMNM.lock_realsmith_FTDiAIaMNM.fl_type_realsmith_FTDiAIaMNM = Tag5_realsmith_FTDiAIaMNM(/*long:17663:17663:17448:e*/fl_type_realsmith_FTDiAIaMNM);
/*aft_stmt:17448*/
    int result_realsmith_FTDiAIaMNM = 0;
    /*bef_stmt:17492*/
result_realsmith_FTDiAIaMNM += Tag6_realsmith_FTDiAIaMNM(/*unsigned long:17663:17663:17492:e*/args_realsmith_FTDiAIaMNM.cookie_realsmith_FTDiAIaMNM);
/*aft_stmt:17492*/
    /*bef_stmt:17515*/
result_realsmith_FTDiAIaMNM += Tag7_realsmith_FTDiAIaMNM(/*int:17663:17663:17515:e*/args_realsmith_FTDiAIaMNM.block_realsmith_FTDiAIaMNM);
/*aft_stmt:17515*/
    /*bef_stmt:17573*/
result_realsmith_FTDiAIaMNM += (Tag8_realsmith_FTDiAIaMNM(/*long:17663:17663:17573:e*/args_realsmith_FTDiAIaMNM.lock_realsmith_FTDiAIaMNM.fl_type_realsmith_FTDiAIaMNM) == 1) ? 1 : 0;
/*aft_stmt:17573*/
    /*bef_stmt:17602*/
result_realsmith_FTDiAIaMNM += Tag9_realsmith_FTDiAIaMNM(/*long:17663:17663:17602:e*/args_realsmith_FTDiAIaMNM.lock_realsmith_FTDiAIaMNM.fl_type_realsmith_FTDiAIaMNM);
/*aft_stmt:17602*/
    /*bef_stmt:17625*/
result_realsmith_FTDiAIaMNM += Tag10_realsmith_FTDiAIaMNM(/*int:17663:17663:17625:e*/args_realsmith_FTDiAIaMNM.reclaim_realsmith_FTDiAIaMNM);
/*aft_stmt:17625*/
    /*bef_stmt:17648*/
result_realsmith_FTDiAIaMNM += Tag11_realsmith_FTDiAIaMNM(/*int:17663:17663:17648:e*/args_realsmith_FTDiAIaMNM.state_realsmith_FTDiAIaMNM);
/*aft_stmt:17648*/
    /*bef_stmt:17661*/
return Tag12_realsmith_FTDiAIaMNM(/*int:17663:17663:17661:e*/result_realsmith_FTDiAIaMNM);
/*aft_stmt:17661*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_JqXiOkDlJ0(x) (x)
#define Tag2_realsmith_JqXiOkDlJ0(x) (x)
#define Tag3_realsmith_JqXiOkDlJ0(x) (x)
#define Tag4_realsmith_JqXiOkDlJ0(x) (x)
#define Tag5_realsmith_JqXiOkDlJ0(x) (x)
#define Tag6_realsmith_JqXiOkDlJ0(x) (x)
#include "stdlib.h"
int realsmith_JqXiOkDlJ0(int pBtCoexist_realsmith_JqXiOkDlJ0, int bForceExec_realsmith_JqXiOkDlJ0, unsigned char type_realsmith_JqXiOkDlJ0) {
    /*bef_stmt:17145*/
unsigned long nCoexTableType_realsmith_JqXiOkDlJ0 = Tag1_realsmith_JqXiOkDlJ0(/*unsigned char:17648:17648:17145:e*/type_realsmith_JqXiOkDlJ0);
/*aft_stmt:17145*/
    unsigned long param1_realsmith_JqXiOkDlJ0, param2_realsmith_JqXiOkDlJ0;
    /*bef_stmt:17196*/
switch (Tag2_realsmith_JqXiOkDlJ0(/*unsigned char:17648:17648:17196:e*/type_realsmith_JqXiOkDlJ0)) {
    case 0:
        param1_realsmith_JqXiOkDlJ0 = 0x55555555;
        param2_realsmith_JqXiOkDlJ0 = 0x55555555;
        break;
    case 1:
        param1_realsmith_JqXiOkDlJ0 = 0x55555555;
        param2_realsmith_JqXiOkDlJ0 = 0x5a5a5a5a;
        break;
    case 2:
        param1_realsmith_JqXiOkDlJ0 = 0x5a5a5a5a;
        param2_realsmith_JqXiOkDlJ0 = 0x5a5a5a5a;
        break;
    case 3:
        param1_realsmith_JqXiOkDlJ0 = 0xaaaa5555;
        param2_realsmith_JqXiOkDlJ0 = 0xaaaa5a5a;
        break;
    case 4:
        param1_realsmith_JqXiOkDlJ0 = 0x55555555;
        param2_realsmith_JqXiOkDlJ0 = 0xaaaa5a5a;
        break;
    case 5:
        param1_realsmith_JqXiOkDlJ0 = 0x5a5a5a5a;
        param2_realsmith_JqXiOkDlJ0 = 0xaaaa5a5a;
        break;
    case 6:
        param1_realsmith_JqXiOkDlJ0 = 0x55555555;
        param2_realsmith_JqXiOkDlJ0 = 0xaaaaaaaa;
        break;
    case 7:
        param1_realsmith_JqXiOkDlJ0 = 0xaaaaaaaa;
        param2_realsmith_JqXiOkDlJ0 = 0xaaaaaaaa;
        break;
    default:
        return -1;
    }
/*aft_stmt:17196*/
    /*bef_stmt:17646*/
/*bef_stmt:17646*/
/*bef_stmt:17646*/
/*bef_stmt:17646*/
return (Tag3_realsmith_JqXiOkDlJ0(/*int:17648:17648:17646:e*/pBtCoexist_realsmith_JqXiOkDlJ0) + Tag4_realsmith_JqXiOkDlJ0(/*int:17648:17648:17646:e*/bForceExec_realsmith_JqXiOkDlJ0) + Tag5_realsmith_JqXiOkDlJ0(/*unsigned long:17648:17648:17646:e*/param1_realsmith_JqXiOkDlJ0) + Tag6_realsmith_JqXiOkDlJ0(/*unsigned long:17648:17648:17646:e*/param2_realsmith_JqXiOkDlJ0)) % 100000;
/*aft_stmt:17646*/
/*aft_stmt:17646*/
/*aft_stmt:17646*/
/*aft_stmt:17646*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_nNRrTKZRz6(x) (x)
#define Tag2_realsmith_nNRrTKZRz6(x) (x)
#define Tag3_realsmith_nNRrTKZRz6(x) (x)
#define Tag4_realsmith_nNRrTKZRz6(x) (x)
#include "stdlib.h"
int realsmith_nNRrTKZRz6(int PortOffset_realsmith_nNRrTKZRz6, int bEnablePSMode_realsmith_nNRrTKZRz6, int bPWBitOn_realsmith_nNRrTKZRz6) {
    int PSCFG_AUTOSLEEP_realsmith_nNRrTKZRz6 = 1;
    int PSCTL_ALBCN_realsmith_nNRrTKZRz6 = 2;
    int TFTCTL_HWUTSF_realsmith_nNRrTKZRz6 = 4;
    int MAC_REG_PSCFG_realsmith_nNRrTKZRz6 = 0;
    int MAC_REG_PSCTL_realsmith_nNRrTKZRz6 = 0;
    int MAC_REG_TFTCTL_realsmith_nNRrTKZRz6 = 0;
    /*bef_stmt:17271*/
MAC_REG_PSCFG_realsmith_nNRrTKZRz6 &= ~Tag1_realsmith_nNRrTKZRz6(/*int:17347:17347:17271:e*/PSCFG_AUTOSLEEP_realsmith_nNRrTKZRz6);
/*aft_stmt:17271*/
    /*bef_stmt:17291*/
MAC_REG_TFTCTL_realsmith_nNRrTKZRz6 &= ~Tag2_realsmith_nNRrTKZRz6(/*int:17347:17347:17291:e*/TFTCTL_HWUTSF_realsmith_nNRrTKZRz6);
/*aft_stmt:17291*/
    /*bef_stmt:17308*/
MAC_REG_PSCTL_realsmith_nNRrTKZRz6 |= Tag3_realsmith_nNRrTKZRz6(/*int:17347:17347:17308:e*/PSCTL_ALBCN_realsmith_nNRrTKZRz6);
/*aft_stmt:17308*/
    bEnablePSMode_realsmith_nNRrTKZRz6 = 0;
    bPWBitOn_realsmith_nNRrTKZRz6 = 0;
    /*bef_stmt:17345*/
return Tag4_realsmith_nNRrTKZRz6(/*int:17347:17347:17345:e*/bEnablePSMode_realsmith_nNRrTKZRz6);
/*aft_stmt:17345*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_bWGSph7yVA(x) (x)
#define Tag2_realsmith_bWGSph7yVA(x) (x)
#define Tag3_realsmith_bWGSph7yVA(x) (x)
#define Tag4_realsmith_bWGSph7yVA(x) (x)
#define Tag5_realsmith_bWGSph7yVA(x) (x)
#define Tag6_realsmith_bWGSph7yVA(x) (x)
#define Tag7_realsmith_bWGSph7yVA(x) (x)
#define Tag8_realsmith_bWGSph7yVA(x) (x)
#define Tag9_realsmith_bWGSph7yVA(x) (x)
#define Tag10_realsmith_bWGSph7yVA(x) (x)
#include "stdlib.h"
struct solo_dev_VQTBBP {
    unsigned long nr_chans_realsmith_bWGSph7yVA;
    unsigned long nr_ext_realsmith_bWGSph7yVA;
    unsigned long video_hsize_realsmith_bWGSph7yVA;
};
int realsmith_bWGSph7yVA(int nr_chans_realsmith_bWGSph7yVA, int nr_ext_realsmith_bWGSph7yVA, int video_hsize_realsmith_bWGSph7yVA, int ch_realsmith_bWGSph7yVA, int on_realsmith_bWGSph7yVA) {
    unsigned long ext_ch_realsmith_bWGSph7yVA;
    /*bef_stmt:17263*/
/*bef_stmt:17263*/
if (Tag1_realsmith_bWGSph7yVA(/*int:17384:17384:17263:e*/ch_realsmith_bWGSph7yVA) < Tag2_realsmith_bWGSph7yVA(/*int:17384:17384:17263:e*/nr_chans_realsmith_bWGSph7yVA)) {
        return 0;
    }
/*aft_stmt:17263*/
/*aft_stmt:17263*/
    /*bef_stmt:17308*/
/*bef_stmt:17308*/
/*bef_stmt:17308*/
if (Tag3_realsmith_bWGSph7yVA(/*int:17384:17384:17308:e*/ch_realsmith_bWGSph7yVA) >= Tag4_realsmith_bWGSph7yVA(/*int:17384:17384:17308:e*/nr_chans_realsmith_bWGSph7yVA) + Tag5_realsmith_bWGSph7yVA(/*int:17384:17384:17308:e*/nr_ext_realsmith_bWGSph7yVA)) {
        return -22;
    }
/*aft_stmt:17308*/
/*aft_stmt:17308*/
/*aft_stmt:17308*/
    /*bef_stmt:17337*/
/*bef_stmt:17337*/
ext_ch_realsmith_bWGSph7yVA = Tag6_realsmith_bWGSph7yVA(/*int:17384:17384:17337:e*/ch_realsmith_bWGSph7yVA) - Tag7_realsmith_bWGSph7yVA(/*int:17384:17384:17337:e*/nr_chans_realsmith_bWGSph7yVA);
/*aft_stmt:17337*/
/*aft_stmt:17337*/
    /*bef_stmt:17371*/
if (Tag8_realsmith_bWGSph7yVA(/*unsigned long:17384:17384:17371:e*/ext_ch_realsmith_bWGSph7yVA) < 4) {
        /*bef_stmt:17366*/
return Tag9_realsmith_bWGSph7yVA(/*int:17384:17384:17366:e*/on_realsmith_bWGSph7yVA);
/*aft_stmt:17366*/
    }
/*aft_stmt:17371*/
    /*bef_stmt:17382*/
return Tag10_realsmith_bWGSph7yVA(/*int:17384:17384:17382:e*/on_realsmith_bWGSph7yVA);
/*aft_stmt:17382*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_92obvKKTCt(x) (x)
#define Tag2_realsmith_92obvKKTCt(x) (x)
#include "stdint.h"
int realsmith_92obvKKTCt(int vlan_present_realsmith_92obvKKTCt, int vlan_tag_realsmith_92obvKKTCt) {
    const int TxVlanTag_realsmith_92obvKKTCt = 0x1000;
    /*bef_stmt:2054*/
/*bef_stmt:2054*/
return (Tag1_realsmith_92obvKKTCt(/*int:2056:2056:2054:e*/vlan_present_realsmith_92obvKKTCt)) ? (Tag2_realsmith_92obvKKTCt(/*const int:2056:2056:2054:e*/TxVlanTag_realsmith_92obvKKTCt) | (1)) : 0x00;
/*aft_stmt:2054*/
/*aft_stmt:2054*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_kseoDYdQwH(x) (x)
#define Tag2_realsmith_kseoDYdQwH(x) (x)
#define Tag3_realsmith_kseoDYdQwH(x) (x)
#define Tag4_realsmith_kseoDYdQwH(x) (x)
#define Tag5_realsmith_kseoDYdQwH(x) (x)
#define Tag6_realsmith_kseoDYdQwH(x) (x)
#define Tag7_realsmith_kseoDYdQwH(x) (x)
#define Tag8_realsmith_kseoDYdQwH(x) (x)
#define Tag9_realsmith_kseoDYdQwH(x) (x)
#define Tag10_realsmith_kseoDYdQwH(x) (x)
#define Tag11_realsmith_kseoDYdQwH(x) (x)
#define Tag12_realsmith_kseoDYdQwH(x) (x)
#define Tag13_realsmith_kseoDYdQwH(x) (x)
#define Tag14_realsmith_kseoDYdQwH(x) (x)
#define Tag15_realsmith_kseoDYdQwH(x) (x)
#define Tag16_realsmith_kseoDYdQwH(x) (x)
#define Tag17_realsmith_kseoDYdQwH(x) (x)
#define Tag18_realsmith_kseoDYdQwH(x) (x)
#define Tag19_realsmith_kseoDYdQwH(x) (x)
#include "stdlib.h"
int realsmith_kseoDYdQwH(int pid_realsmith_kseoDYdQwH, int fd_realsmith_kseoDYdQwH, int nsid_realsmith_kseoDYdQwH, int target_nsid_realsmith_kseoDYdQwH) {
    int err_realsmith_kseoDYdQwH = 0;
    int peer_realsmith_kseoDYdQwH, target_realsmith_kseoDYdQwH = 0;
    int nla_realsmith_kseoDYdQwH = 0;
    /*bef_stmt:17408*/
/*bef_stmt:17408*/
/*bef_stmt:17408*/
if (Tag1_realsmith_kseoDYdQwH(/*int:17716:17716:17408:e*/pid_realsmith_kseoDYdQwH)) {
        /*bef_stmt:17244*/
peer_realsmith_kseoDYdQwH = Tag2_realsmith_kseoDYdQwH(/*int:17716:17716:17244:e*/pid_realsmith_kseoDYdQwH);
/*aft_stmt:17244*/
        /*bef_stmt:17259*/
nla_realsmith_kseoDYdQwH = Tag3_realsmith_kseoDYdQwH(/*int:17716:17716:17259:e*/pid_realsmith_kseoDYdQwH);
/*aft_stmt:17259*/
    } else if (Tag4_realsmith_kseoDYdQwH(/*int:17716:17716:17408:e*/fd_realsmith_kseoDYdQwH)) {
        /*bef_stmt:17285*/
peer_realsmith_kseoDYdQwH = Tag5_realsmith_kseoDYdQwH(/*int:17716:17716:17285:e*/fd_realsmith_kseoDYdQwH);
/*aft_stmt:17285*/
        /*bef_stmt:17300*/
nla_realsmith_kseoDYdQwH = Tag6_realsmith_kseoDYdQwH(/*int:17716:17716:17300:e*/fd_realsmith_kseoDYdQwH);
/*aft_stmt:17300*/
    } else if (Tag7_realsmith_kseoDYdQwH(/*int:17716:17716:17408:e*/nsid_realsmith_kseoDYdQwH)) {
        /*bef_stmt:17326*/
peer_realsmith_kseoDYdQwH = Tag8_realsmith_kseoDYdQwH(/*int:17716:17716:17326:e*/nsid_realsmith_kseoDYdQwH);
/*aft_stmt:17326*/
        /*bef_stmt:17357*/
if (Tag9_realsmith_kseoDYdQwH(/*int:17716:17716:17357:e*/peer_realsmith_kseoDYdQwH) <= 0) {
            return -1;
        }
/*aft_stmt:17357*/
        /*bef_stmt:17372*/
nla_realsmith_kseoDYdQwH = Tag10_realsmith_kseoDYdQwH(/*int:17716:17716:17372:e*/nsid_realsmith_kseoDYdQwH);
/*aft_stmt:17372*/
    } else {
        return -1;
    }
/*aft_stmt:17408*/
/*aft_stmt:17408*/
/*aft_stmt:17408*/
    /*bef_stmt:17441*/
if (Tag11_realsmith_kseoDYdQwH(/*int:17716:17716:17441:e*/peer_realsmith_kseoDYdQwH) <= 0) {
        return -1;
    }
/*aft_stmt:17441*/
    /*bef_stmt:17502*/
if (Tag12_realsmith_kseoDYdQwH(/*int:17716:17716:17502:e*/target_nsid_realsmith_kseoDYdQwH)) {
        /*bef_stmt:17463*/
target_realsmith_kseoDYdQwH = Tag13_realsmith_kseoDYdQwH(/*int:17716:17716:17463:e*/target_nsid_realsmith_kseoDYdQwH);
/*aft_stmt:17463*/
        /*bef_stmt:17494*/
if (Tag14_realsmith_kseoDYdQwH(/*int:17716:17716:17494:e*/target_realsmith_kseoDYdQwH) <= 0) {
            return -1;
        }
/*aft_stmt:17494*/
    }
/*aft_stmt:17502*/
    int msg_size_realsmith_kseoDYdQwH = 128;
    /*bef_stmt:17591*/
char *msg_realsmith_kseoDYdQwH = (char *)(malloc(Tag15_realsmith_kseoDYdQwH(/*int:17716:17716:17591:e*/msg_size_realsmith_kseoDYdQwH)));
/*aft_stmt:17591*/
    if (!msg_realsmith_kseoDYdQwH) {
        return -1;
    }
    /*bef_stmt:17654*/
/*bef_stmt:17654*/
int nsid_result_realsmith_kseoDYdQwH = Tag16_realsmith_kseoDYdQwH(/*int:17716:17716:17654:e*/target_realsmith_kseoDYdQwH) + Tag17_realsmith_kseoDYdQwH(/*int:17716:17716:17654:e*/peer_realsmith_kseoDYdQwH);
/*aft_stmt:17654*/
/*aft_stmt:17654*/
    /*bef_stmt:17668*/
err_realsmith_kseoDYdQwH = Tag18_realsmith_kseoDYdQwH(/*int:17716:17716:17668:e*/nsid_result_realsmith_kseoDYdQwH);
/*aft_stmt:17668*/
    (free(msg_realsmith_kseoDYdQwH));
    /*bef_stmt:17714*/
return Tag19_realsmith_kseoDYdQwH(/*int:17716:17716:17714:e*/err_realsmith_kseoDYdQwH);
/*aft_stmt:17714*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_6e07fJZpz8(x) (x)
#include "stdio.h"
int realsmith_6e07fJZpz8(int clockid_realsmith_6e07fJZpz8) {
    /*bef_stmt:11136*/
switch (Tag1_realsmith_6e07fJZpz8(/*int:11364:11364:11136:e*/clockid_realsmith_6e07fJZpz8)) {
        case 132: return 0;
        case 136: return 1;
        case 133: return 2;
        case 128: return 3;
        case 134: return 4;
        case 130: return 5;
        case 135: return 6;
        case 138: return 7;
        case 131: return 8;
        case 137: return 9;
        case 129: return 10;
    }
/*aft_stmt:11136*/
    return -1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Gopidht7hu(x) (x)
#define Tag2_realsmith_Gopidht7hu(x) (x)
#define Tag3_realsmith_Gopidht7hu(x) (x)
#define Tag4_realsmith_Gopidht7hu(x) (x)
#define Tag5_realsmith_Gopidht7hu(x) (x)
#define Tag6_realsmith_Gopidht7hu(x) (x)
#define Tag7_realsmith_Gopidht7hu(x) (x)
#define Tag8_realsmith_Gopidht7hu(x) (x)
#define Tag9_realsmith_Gopidht7hu(x) (x)
#define Tag10_realsmith_Gopidht7hu(x) (x)
#include "stdlib.h"
int realsmith_Gopidht7hu(int buck_users_realsmith_Gopidht7hu, int mode_realsmith_Gopidht7hu, int enable_realsmith_Gopidht7hu) {
    /*bef_stmt:17190*/
/*bef_stmt:17190*/
/*bef_stmt:17190*/
int updated_buck_users_realsmith_Gopidht7hu = (Tag1_realsmith_Gopidht7hu(/*int:17328:17328:17190:e*/enable_realsmith_Gopidht7hu)) ? (Tag2_realsmith_Gopidht7hu(/*int:17328:17328:17190:e*/buck_users_realsmith_Gopidht7hu) + 1) : (Tag3_realsmith_Gopidht7hu(/*int:17328:17328:17190:e*/buck_users_realsmith_Gopidht7hu) - 1);
/*aft_stmt:17190*/
/*aft_stmt:17190*/
/*aft_stmt:17190*/
    /*bef_stmt:17315*/
/*bef_stmt:17315*/
/*bef_stmt:17315*/
/*bef_stmt:17315*/
if ((Tag4_realsmith_Gopidht7hu(/*int:17328:17328:17315:e*/enable_realsmith_Gopidht7hu) && (Tag5_realsmith_Gopidht7hu(/*int:17328:17328:17315:e*/updated_buck_users_realsmith_Gopidht7hu) == 1)) ||
        (!Tag6_realsmith_Gopidht7hu(/*int:17328:17328:17315:e*/enable_realsmith_Gopidht7hu) && (Tag7_realsmith_Gopidht7hu(/*int:17328:17328:17315:e*/updated_buck_users_realsmith_Gopidht7hu) == 0))) {
        /*bef_stmt:17299*/
int update_bits_realsmith_Gopidht7hu = Tag8_realsmith_Gopidht7hu(/*int:17328:17328:17299:e*/enable_realsmith_Gopidht7hu) << 0;
/*aft_stmt:17299*/
        /*bef_stmt:17309*/
return Tag9_realsmith_Gopidht7hu(/*int:17311:17328:17309:e*/update_bits_realsmith_Gopidht7hu);
/*aft_stmt:17309*/
    }
/*aft_stmt:17315*/
/*aft_stmt:17315*/
/*aft_stmt:17315*/
/*aft_stmt:17315*/
    /*bef_stmt:17326*/
return Tag10_realsmith_Gopidht7hu(/*int:17328:17328:17326:e*/updated_buck_users_realsmith_Gopidht7hu);
/*aft_stmt:17326*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_O5MT6JlnjU(x) (x)
#define Tag2_realsmith_O5MT6JlnjU(x) (x)
#define Tag3_realsmith_O5MT6JlnjU(x) (x)
#define Tag4_realsmith_O5MT6JlnjU(x) (x)
#define Tag5_realsmith_O5MT6JlnjU(x) (x)
#define Tag6_realsmith_O5MT6JlnjU(x) (x)
#define Tag7_realsmith_O5MT6JlnjU(x) (x)
#define Tag8_realsmith_O5MT6JlnjU(x) (x)
#define Tag9_realsmith_O5MT6JlnjU(x) (x)
#define Tag10_realsmith_O5MT6JlnjU(x) (x)
#define Tag11_realsmith_O5MT6JlnjU(x) (x)
#define Tag12_realsmith_O5MT6JlnjU(x) (x)
#define Tag13_realsmith_O5MT6JlnjU(x) (x)
#define Tag14_realsmith_O5MT6JlnjU(x) (x)
#define Tag15_realsmith_O5MT6JlnjU(x) (x)
#define Tag16_realsmith_O5MT6JlnjU(x) (x)
#define Tag17_realsmith_O5MT6JlnjU(x) (x)
#define Tag18_realsmith_O5MT6JlnjU(x) (x)
#define Tag19_realsmith_O5MT6JlnjU(x) (x)
#define Tag20_realsmith_O5MT6JlnjU(x) (x)
#include "stdlib.h"
int realsmith_O5MT6JlnjU(int cs_on_realsmith_O5MT6JlnjU, int cs_rd_off_realsmith_O5MT6JlnjU, int cs_wr_off_realsmith_O5MT6JlnjU, int adv_on_realsmith_O5MT6JlnjU, int adv_rd_off_realsmith_O5MT6JlnjU, int adv_wr_off_realsmith_O5MT6JlnjU,
                          int we_on_realsmith_O5MT6JlnjU, int we_off_realsmith_O5MT6JlnjU, int oe_on_realsmith_O5MT6JlnjU, int oe_off_realsmith_O5MT6JlnjU, int page_burst_access_realsmith_O5MT6JlnjU,
                          int access_realsmith_O5MT6JlnjU, int rd_cycle_realsmith_O5MT6JlnjU, int wr_cycle_realsmith_O5MT6JlnjU, int bus_turnaround_realsmith_O5MT6JlnjU,
                          int cycle2cycle_delay_realsmith_O5MT6JlnjU, int wait_monitoring_realsmith_O5MT6JlnjU, int clk_activation_realsmith_O5MT6JlnjU,
                          int wr_access_realsmith_O5MT6JlnjU, int wr_data_mux_bus_realsmith_O5MT6JlnjU) {
    cs_on_realsmith_O5MT6JlnjU /= 1000;
    cs_rd_off_realsmith_O5MT6JlnjU /= 1000;
    cs_wr_off_realsmith_O5MT6JlnjU /= 1000;
    adv_on_realsmith_O5MT6JlnjU /= 1000;
    adv_rd_off_realsmith_O5MT6JlnjU /= 1000;
    adv_wr_off_realsmith_O5MT6JlnjU /= 1000;
    we_on_realsmith_O5MT6JlnjU /= 1000;
    we_off_realsmith_O5MT6JlnjU /= 1000;
    oe_on_realsmith_O5MT6JlnjU /= 1000;
    oe_off_realsmith_O5MT6JlnjU /= 1000;
    page_burst_access_realsmith_O5MT6JlnjU /= 1000;
    access_realsmith_O5MT6JlnjU /= 1000;
    rd_cycle_realsmith_O5MT6JlnjU /= 1000;
    wr_cycle_realsmith_O5MT6JlnjU /= 1000;
    bus_turnaround_realsmith_O5MT6JlnjU /= 1000;
    cycle2cycle_delay_realsmith_O5MT6JlnjU /= 1000;
    wait_monitoring_realsmith_O5MT6JlnjU /= 1000;
    clk_activation_realsmith_O5MT6JlnjU /= 1000;
    wr_access_realsmith_O5MT6JlnjU /= 1000;
    wr_data_mux_bus_realsmith_O5MT6JlnjU /= 1000;
    /*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
/*bef_stmt:17946*/
return Tag1_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/cs_on_realsmith_O5MT6JlnjU) + Tag2_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/cs_rd_off_realsmith_O5MT6JlnjU) + Tag3_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/cs_wr_off_realsmith_O5MT6JlnjU) + Tag4_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/adv_on_realsmith_O5MT6JlnjU) + Tag5_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/adv_rd_off_realsmith_O5MT6JlnjU) + Tag6_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/adv_wr_off_realsmith_O5MT6JlnjU) +
           Tag7_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/we_on_realsmith_O5MT6JlnjU) + Tag8_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/we_off_realsmith_O5MT6JlnjU) + Tag9_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/oe_on_realsmith_O5MT6JlnjU) + Tag10_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/oe_off_realsmith_O5MT6JlnjU) + Tag11_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/page_burst_access_realsmith_O5MT6JlnjU) + Tag12_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/access_realsmith_O5MT6JlnjU) +
           Tag13_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/rd_cycle_realsmith_O5MT6JlnjU) + Tag14_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/wr_cycle_realsmith_O5MT6JlnjU) + Tag15_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/bus_turnaround_realsmith_O5MT6JlnjU) + Tag16_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/cycle2cycle_delay_realsmith_O5MT6JlnjU) +
           Tag17_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/wait_monitoring_realsmith_O5MT6JlnjU) + Tag18_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/clk_activation_realsmith_O5MT6JlnjU) + Tag19_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/wr_access_realsmith_O5MT6JlnjU) + Tag20_realsmith_O5MT6JlnjU(/*int:17948:17948:17946:e*/wr_data_mux_bus_realsmith_O5MT6JlnjU);
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
/*aft_stmt:17946*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_uxBE2UJCSF(x) (x)
#define Tag2_realsmith_uxBE2UJCSF(x) (x)
#define Tag3_realsmith_uxBE2UJCSF(x) (x)
#define Tag4_realsmith_uxBE2UJCSF(x) (x)
#define Tag5_realsmith_uxBE2UJCSF(x) (x)
#define Tag6_realsmith_uxBE2UJCSF(x) (x)
#define Tag7_realsmith_uxBE2UJCSF(x) (x)
#include "stdlib.h"
int realsmith_uxBE2UJCSF(int nrbufs_realsmith_uxBE2UJCSF, int buffers_realsmith_uxBE2UJCSF, int readers_realsmith_uxBE2UJCSF, unsigned int flags_realsmith_uxBE2UJCSF) {
    int ret_realsmith_uxBE2UJCSF;
    /*bef_stmt:17181*/
/*bef_stmt:17181*/
if (Tag1_realsmith_uxBE2UJCSF(/*int:17381:17381:17181:e*/nrbufs_realsmith_uxBE2UJCSF) < Tag2_realsmith_uxBE2UJCSF(/*int:17381:17381:17181:e*/buffers_realsmith_uxBE2UJCSF))
        return 0;
/*aft_stmt:17181*/
/*aft_stmt:17181*/
    ret_realsmith_uxBE2UJCSF = 0;
    int waiting_writers_realsmith_uxBE2UJCSF = 0;
    /*bef_stmt:17368*/
/*bef_stmt:17368*/
while (Tag3_realsmith_uxBE2UJCSF(/*int:17381:17381:17368:e*/nrbufs_realsmith_uxBE2UJCSF) >= Tag4_realsmith_uxBE2UJCSF(/*int:17381:17381:17368:e*/buffers_realsmith_uxBE2UJCSF)) {
        /*bef_stmt:17273*/
if (Tag5_realsmith_uxBE2UJCSF(/*int:17381:17381:17273:e*/readers_realsmith_uxBE2UJCSF) == 0) {
            ret_realsmith_uxBE2UJCSF = -32;
            break;
        }
/*aft_stmt:17273*/
        /*bef_stmt:17315*/
if (Tag6_realsmith_uxBE2UJCSF(/*unsigned int:17381:17381:17315:e*/flags_realsmith_uxBE2UJCSF) & 1) {
            ret_realsmith_uxBE2UJCSF = -11;
            break;
        }
/*aft_stmt:17315*/
        if (0) {
            ret_realsmith_uxBE2UJCSF = -514;
            break;
        }
        waiting_writers_realsmith_uxBE2UJCSF++;
        waiting_writers_realsmith_uxBE2UJCSF--;
    }
/*aft_stmt:17368*/
/*aft_stmt:17368*/
    /*bef_stmt:17379*/
return Tag7_realsmith_uxBE2UJCSF(/*int:17381:17381:17379:e*/ret_realsmith_uxBE2UJCSF);
/*aft_stmt:17379*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_iiZXBcrQ5T(x) (x)
#define Tag2_realsmith_iiZXBcrQ5T(x) (x)
#define Tag3_realsmith_iiZXBcrQ5T(x) (x)
#define Tag4_realsmith_iiZXBcrQ5T(x) (x)
#define Tag5_realsmith_iiZXBcrQ5T(x) (x)
#define Tag6_realsmith_iiZXBcrQ5T(x) (x)
#include "stdlib.h"
int realsmith_iiZXBcrQ5T(int port_realsmith_iiZXBcrQ5T, int addr_realsmith_iiZXBcrQ5T, unsigned short data_realsmith_iiZXBcrQ5T) {
    unsigned short MV88E6352_G2_AVB_CMD_BLOCK_PTP_realsmith_iiZXBcrQ5T = 1;
    unsigned short MV88E6390_G2_AVB_CMD_OP_WRITE_realsmith_iiZXBcrQ5T = 2;
    /*bef_stmt:17260*/
/*bef_stmt:17260*/
/*bef_stmt:17260*/
/*bef_stmt:17260*/
unsigned long writeop_realsmith_iiZXBcrQ5T = Tag1_realsmith_iiZXBcrQ5T(/*unsigned short:17302:17302:17260:e*/MV88E6390_G2_AVB_CMD_OP_WRITE_realsmith_iiZXBcrQ5T) | (Tag2_realsmith_iiZXBcrQ5T(/*int:17302:17302:17260:e*/port_realsmith_iiZXBcrQ5T) << 8) |
                            (Tag3_realsmith_iiZXBcrQ5T(/*unsigned short:17302:17302:17260:e*/MV88E6352_G2_AVB_CMD_BLOCK_PTP_realsmith_iiZXBcrQ5T) << 5) | Tag4_realsmith_iiZXBcrQ5T(/*int:17302:17302:17260:e*/addr_realsmith_iiZXBcrQ5T);
/*aft_stmt:17260*/
/*aft_stmt:17260*/
/*aft_stmt:17260*/
/*aft_stmt:17260*/
    /*bef_stmt:17300*/
/*bef_stmt:17300*/
return (int)(Tag5_realsmith_iiZXBcrQ5T(/*unsigned long:17302:17302:17300:e*/writeop_realsmith_iiZXBcrQ5T) + Tag6_realsmith_iiZXBcrQ5T(/*unsigned short:17302:17302:17300:e*/data_realsmith_iiZXBcrQ5T));
/*aft_stmt:17300*/
/*aft_stmt:17300*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_Ycbz69Odph(x) (x)
#define Tag2_realsmith_proxy_Ycbz69Odph(x) (x)
#define Tag3_realsmith_proxy_Ycbz69Odph(x) (x)
#define Tag4_realsmith_proxy_Ycbz69Odph(x) (x)
#include "stdint.h"
#include "string.h"
struct nft_object_GpUROi {
    char name_realsmith_Ap1DM852yN[256];
    unsigned int type_realsmith_Ap1DM852yN;
};
int realsmith_Ap1DM852yN(unsigned int obj_type_realsmith_Ap1DM852yN, const char *obj_name_realsmith_Ap1DM852yN) {
    struct nft_object_GpUROi obj_realsmith_Ap1DM852yN;
    ("0");
    obj_realsmith_Ap1DM852yN.name_realsmith_Ap1DM852yN[sizeof(obj_realsmith_Ap1DM852yN.name_realsmith_Ap1DM852yN) - 1] = '\0';
    /*bef_stmt:9999*/
obj_realsmith_Ap1DM852yN.type_realsmith_Ap1DM852yN = Tag1_realsmith_proxy_Ycbz69Odph(/*unsigned int:10069:10069:9999:e*/obj_type_realsmith_Ap1DM852yN);
/*aft_stmt:9999*/
    /*bef_stmt:10059*/
if ((1) == 0 || Tag2_realsmith_proxy_Ycbz69Odph(/*unsigned int:10069:10069:10059:e*/obj_realsmith_Ap1DM852yN.type_realsmith_Ap1DM852yN) == 0) {
        return -1;
    }
/*aft_stmt:10059*/
    return 0;
}
int realsmith_proxy_Ycbz69Odph(unsigned int p_0_KW2hUvn8yA, char p_1_uTK4XqGsOy) {
/*bef_stmt:10200*/
int proxy_ret_eU5XfiCa4B = realsmith_Ap1DM852yN(Tag3_realsmith_proxy_Ycbz69Odph(/*unsigned int:10212:10212:10200:e*/p_0_KW2hUvn8yA), &(p_1_uTK4XqGsOy));
/*aft_stmt:10200*/
/*bef_stmt:10210*/
return Tag4_realsmith_proxy_Ycbz69Odph(/*int:10212:10212:10210:e*/proxy_ret_eU5XfiCa4B);
/*aft_stmt:10210*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_LUkJLkA80j(x) (x)
#define Tag2_realsmith_LUkJLkA80j(x) (x)
#define Tag3_realsmith_LUkJLkA80j(x) (x)
#define Tag4_realsmith_LUkJLkA80j(x) (x)
#define Tag5_realsmith_LUkJLkA80j(x) (x)
#include "stdint.h"
int realsmith_LUkJLkA80j(int dwRegAddr_realsmith_LUkJLkA80j, int dwBitMask_realsmith_LUkJLkA80j, int originalValue_realsmith_LUkJLkA80j) {
    int bitShift_realsmith_LUkJLkA80j = 0;
    /*bef_stmt:2066*/
/*bef_stmt:2066*/
while ((Tag1_realsmith_LUkJLkA80j(/*int:2105:2105:2066:e*/dwBitMask_realsmith_LUkJLkA80j) >> Tag2_realsmith_LUkJLkA80j(/*int:2105:2105:2066:e*/bitShift_realsmith_LUkJLkA80j)) > 1) {
        bitShift_realsmith_LUkJLkA80j++;
    }
/*aft_stmt:2066*/
/*aft_stmt:2066*/
    /*bef_stmt:2103*/
/*bef_stmt:2103*/
/*bef_stmt:2103*/
return (Tag3_realsmith_LUkJLkA80j(/*int:2105:2105:2103:e*/originalValue_realsmith_LUkJLkA80j) & Tag4_realsmith_LUkJLkA80j(/*int:2105:2105:2103:e*/dwBitMask_realsmith_LUkJLkA80j)) >> Tag5_realsmith_LUkJLkA80j(/*int:2105:2105:2103:e*/bitShift_realsmith_LUkJLkA80j);
/*aft_stmt:2103*/
/*aft_stmt:2103*/
/*aft_stmt:2103*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_wdSKqCX4Cd(x) (x)
#define Tag2_realsmith_proxy_wdSKqCX4Cd(x) (x)
#define Tag3_realsmith_proxy_wdSKqCX4Cd(x) (x)
#define Tag4_realsmith_proxy_wdSKqCX4Cd(x) (x)
#define Tag5_realsmith_proxy_wdSKqCX4Cd(x) (x)
#define Tag6_realsmith_proxy_wdSKqCX4Cd(x) (x)
#include "stdlib.h"
#include "signal.h"
#include "sys/types.h"
#include "sys/wait.h"
int realsmith_Y5QktbTU6X(int tracer_realsmith_Y5QktbTU6X, int *passed_realsmith_Y5QktbTU6X) {
    /*bef_stmt:25509*/
if (Tag1_realsmith_proxy_wdSKqCX4Cd(/*int:25528:25528:25509:e*/tracer_realsmith_Y5QktbTU6X)) {
        int status_realsmith_Y5QktbTU6X;
        if ((1) == 0) {
            /*bef_stmt:25494*/
if ((1) == Tag2_realsmith_proxy_wdSKqCX4Cd(/*int:25528:25528:25494:e*/tracer_realsmith_Y5QktbTU6X)) {
                /*bef_stmt:25487*/
if ((((Tag3_realsmith_proxy_wdSKqCX4Cd(/*int:25505:25528:25487:e*/status_realsmith_Y5QktbTU6X)) & 0xff00) >> 8)) {
                    *passed_realsmith_Y5QktbTU6X = 0;
                }
/*aft_stmt:25487*/
            }
/*aft_stmt:25494*/
        }
    }
/*aft_stmt:25509*/
    /*bef_stmt:25526*/
return Tag4_realsmith_proxy_wdSKqCX4Cd(/*int:25528:25528:25526:e*/*passed_realsmith_Y5QktbTU6X);
/*aft_stmt:25526*/
}
int realsmith_proxy_wdSKqCX4Cd(int p_0_hs5GYc0P1a, int p_1_TSIYDhY9ah) {
/*bef_stmt:25649*/
int proxy_ret_eYRix2At2F = realsmith_Y5QktbTU6X(Tag5_realsmith_proxy_wdSKqCX4Cd(/*int:25661:25661:25649:e*/p_0_hs5GYc0P1a), &(p_1_TSIYDhY9ah));
/*aft_stmt:25649*/
/*bef_stmt:25659*/
return Tag6_realsmith_proxy_wdSKqCX4Cd(/*int:25661:25661:25659:e*/proxy_ret_eYRix2At2F);
/*aft_stmt:25659*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ih57TRDSrc(x) (x)
#define Tag2_realsmith_ih57TRDSrc(x) (x)
#define Tag3_realsmith_ih57TRDSrc(x) (x)
#define Tag4_realsmith_ih57TRDSrc(x) (x)
#define Tag5_realsmith_ih57TRDSrc(x) (x)
#define Tag6_realsmith_ih57TRDSrc(x) (x)
#include "stdlib.h"
int realsmith_ih57TRDSrc(int mode_realsmith_ih57TRDSrc) {
    int REGAMMA_CONTROL_realsmith_ih57TRDSrc = 0;
    int GRPH_REGAMMA_MODE_realsmith_ih57TRDSrc = 0;
    /*bef_stmt:17143*/
int result_realsmith_ih57TRDSrc = Tag1_realsmith_ih57TRDSrc(/*int:17214:17214:17143:e*/REGAMMA_CONTROL_realsmith_ih57TRDSrc);
/*aft_stmt:17143*/
    /*bef_stmt:17201*/
/*bef_stmt:17201*/
/*bef_stmt:17201*/
/*bef_stmt:17201*/
result_realsmith_ih57TRDSrc = (Tag2_realsmith_ih57TRDSrc(/*int:17214:17214:17201:e*/result_realsmith_ih57TRDSrc) & ~Tag3_realsmith_ih57TRDSrc(/*int:17214:17214:17201:e*/GRPH_REGAMMA_MODE_realsmith_ih57TRDSrc)) | (Tag4_realsmith_ih57TRDSrc(/*int:17214:17214:17201:e*/mode_realsmith_ih57TRDSrc) & Tag5_realsmith_ih57TRDSrc(/*int:17214:17214:17201:e*/GRPH_REGAMMA_MODE_realsmith_ih57TRDSrc));
/*aft_stmt:17201*/
/*aft_stmt:17201*/
/*aft_stmt:17201*/
/*aft_stmt:17201*/
    /*bef_stmt:17212*/
return Tag6_realsmith_ih57TRDSrc(/*int:17214:17214:17212:e*/result_realsmith_ih57TRDSrc);
/*aft_stmt:17212*/
}



#include "stdlib.h"
struct ethtool_ringparam_oZIlzX {
    int tx_pending_realsmith_VWr97iw1TU;
    int rx_pending_realsmith_VWr97iw1TU;
};
struct bcm_enet_priv_oZIlzX {
    int tx_ring_size_realsmith_VWr97iw1TU;
    int rx_ring_size_realsmith_VWr97iw1TU;
};
int realsmith_VWr97iw1TU(int is_running_realsmith_VWr97iw1TU, int *priv_rx_ring_size_realsmith_VWr97iw1TU, int *priv_tx_ring_size_realsmith_VWr97iw1TU, int rx_pending_realsmith_VWr97iw1TU, int tx_pending_realsmith_VWr97iw1TU) {
    int was_running_realsmith_VWr97iw1TU = 0;
    if (is_running_realsmith_VWr97iw1TU) {
        was_running_realsmith_VWr97iw1TU = 1;
    }
    *priv_rx_ring_size_realsmith_VWr97iw1TU = rx_pending_realsmith_VWr97iw1TU;
    *priv_tx_ring_size_realsmith_VWr97iw1TU = tx_pending_realsmith_VWr97iw1TU;
    if (was_running_realsmith_VWr97iw1TU) {
        int err_realsmith_VWr97iw1TU = 0;
        if (err_realsmith_VWr97iw1TU) {
            return -1;
        }
    }
    return 0;
}
int realsmith_proxy_T5rkpHvy9D(int p_0_yzX9ONpSCo, int p_1_QvjePxjaqo, int p_2_GQryp2O6ut, int p_3_luTQacXdTz, int p_4_cuXZdN0TOD) {
int proxy_ClLgoR8Xaf[16] = { 84, 75, 31, p_2_GQryp2O6ut, p_2_GQryp2O6ut, 16, 86, 22, p_2_GQryp2O6ut, p_2_GQryp2O6ut, p_2_GQryp2O6ut, 82, 16, 75, p_2_GQryp2O6ut, 20 };
int proxy_ret_QuCoFcYS4N = realsmith_VWr97iw1TU(p_0_yzX9ONpSCo, &(p_1_QvjePxjaqo), proxy_ClLgoR8Xaf, p_3_luTQacXdTz, p_4_cuXZdN0TOD);
return proxy_ret_QuCoFcYS4N;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_tKK6lqPPJD(x) (x)
#define Tag2_realsmith_tKK6lqPPJD(x) (x)
#define Tag3_realsmith_tKK6lqPPJD(x) (x)
#define Tag4_realsmith_tKK6lqPPJD(x) (x)
#define Tag5_realsmith_tKK6lqPPJD(x) (x)
#define Tag6_realsmith_tKK6lqPPJD(x) (x)
#include "stdlib.h"
int realsmith_tKK6lqPPJD(int pmd_val_realsmith_tKK6lqPPJD, int gmap_mm_realsmith_tKK6lqPPJD, unsigned long gaddr_realsmith_tKK6lqPPJD, int prot_realsmith_tKK6lqPPJD, unsigned long bits_realsmith_tKK6lqPPJD) {
    int rc_realsmith_tKK6lqPPJD;
    unsigned long pbits_realsmith_tKK6lqPPJD = 0;
    /*bef_stmt:17229*/
if (Tag1_realsmith_tKK6lqPPJD(/*int:17489:17489:17229:e*/pmd_val_realsmith_tKK6lqPPJD) & 0xFFFFFFFF)
        return -11;
/*aft_stmt:17229*/
    void *ptep_realsmith_tKK6lqPPJD = (malloc(sizeof(int)));
    if (!ptep_realsmith_tKK6lqPPJD)
        return -12;
    /*bef_stmt:17346*/
pbits_realsmith_tKK6lqPPJD |= (Tag2_realsmith_tKK6lqPPJD(/*unsigned long:17489:17489:17346:e*/bits_realsmith_tKK6lqPPJD) & 0x1) ? 1 : 0;
/*aft_stmt:17346*/
    /*bef_stmt:17395*/
pbits_realsmith_tKK6lqPPJD |= (Tag3_realsmith_tKK6lqPPJD(/*unsigned long:17489:17489:17395:e*/bits_realsmith_tKK6lqPPJD) & 0x2) ? 2 : 0;
/*aft_stmt:17395*/
    /*bef_stmt:17444*/
/*bef_stmt:17444*/
rc_realsmith_tKK6lqPPJD = (Tag4_realsmith_tKK6lqPPJD(/*int:17489:17489:17444:e*/prot_realsmith_tKK6lqPPJD) & 0xFF) | Tag5_realsmith_tKK6lqPPJD(/*unsigned long:17489:17489:17444:e*/pbits_realsmith_tKK6lqPPJD);
/*aft_stmt:17444*/
/*aft_stmt:17444*/
    (free(ptep_realsmith_tKK6lqPPJD));
    /*bef_stmt:17487*/
return Tag6_realsmith_tKK6lqPPJD(/*int:17489:17489:17487:e*/rc_realsmith_tKK6lqPPJD);
/*aft_stmt:17487*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_bhGstComE4(x) (x)
#define Tag2_realsmith_bhGstComE4(x) (x)
#define Tag3_realsmith_bhGstComE4(x) (x)
#include "stdint.h"
int realsmith_bhGstComE4(unsigned int v_realsmith_bhGstComE4) {
    /*bef_stmt:1991*/
if (Tag1_realsmith_bhGstComE4(/*unsigned int:2093:2093:1991:e*/v_realsmith_bhGstComE4) == 0) return -1;
/*aft_stmt:1991*/
    int position_realsmith_bhGstComE4 = 0;
    /*bef_stmt:2080*/
while ((Tag2_realsmith_bhGstComE4(/*unsigned int:2093:2093:2080:e*/v_realsmith_bhGstComE4) & 1) == 0) {
        v_realsmith_bhGstComE4 >>= 1;
        position_realsmith_bhGstComE4++;
    }
/*aft_stmt:2080*/
    /*bef_stmt:2091*/
return Tag3_realsmith_bhGstComE4(/*int:2093:2093:2091:e*/position_realsmith_bhGstComE4);
/*aft_stmt:2091*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_RB27OpQv7M(x) (x)
#define Tag2_realsmith_RB27OpQv7M(x) (x)
#define Tag3_realsmith_RB27OpQv7M(x) (x)
#define Tag4_realsmith_RB27OpQv7M(x) (x)
#define Tag5_realsmith_RB27OpQv7M(x) (x)
#define Tag6_realsmith_RB27OpQv7M(x) (x)
#define Tag7_realsmith_RB27OpQv7M(x) (x)
#define Tag8_realsmith_RB27OpQv7M(x) (x)
#define Tag9_realsmith_RB27OpQv7M(x) (x)
#define Tag10_realsmith_RB27OpQv7M(x) (x)
#define Tag11_realsmith_RB27OpQv7M(x) (x)
#define Tag12_realsmith_RB27OpQv7M(x) (x)
#include "stdint.h"
int realsmith_RB27OpQv7M(int gain_realsmith_RB27OpQv7M) {
    /*bef_stmt:1995*/
int trsw_realsmith_RB27OpQv7M = Tag1_realsmith_RB27OpQv7M(/*int:2359:2359:1995:e*/gain_realsmith_RB27OpQv7M) & 0x1;
/*aft_stmt:1995*/
    /*bef_stmt:2068*/
/*bef_stmt:2068*/
int lna_realsmith_RB27OpQv7M = (Tag2_realsmith_RB27OpQv7M(/*int:2359:2359:2068:e*/gain_realsmith_RB27OpQv7M) & 0xFFFC) | ((Tag3_realsmith_RB27OpQv7M(/*int:2359:2359:2068:e*/gain_realsmith_RB27OpQv7M) & 0xC) >> 2);
/*aft_stmt:2068*/
/*aft_stmt:2068*/
    /*bef_stmt:2114*/
int ext_lna_realsmith_RB27OpQv7M = (Tag4_realsmith_RB27OpQv7M(/*int:2359:2359:2114:e*/gain_realsmith_RB27OpQv7M) & 2) >> 1;
/*aft_stmt:2114*/
    /*bef_stmt:2152*/
int maskset_0_realsmith_RB27OpQv7M = (0xFFFE & Tag5_realsmith_RB27OpQv7M(/*int:2359:2359:2152:e*/trsw_realsmith_RB27OpQv7M));
/*aft_stmt:2152*/
    /*bef_stmt:2202*/
int maskset_2_1_realsmith_RB27OpQv7M = (0xFBFF & (Tag6_realsmith_RB27OpQv7M(/*int:2359:2359:2202:e*/ext_lna_realsmith_RB27OpQv7M) << 10));
/*aft_stmt:2202*/
    /*bef_stmt:2252*/
int maskset_2_2_realsmith_RB27OpQv7M = (0xF7FF & (Tag7_realsmith_RB27OpQv7M(/*int:2359:2359:2252:e*/ext_lna_realsmith_RB27OpQv7M) << 11));
/*aft_stmt:2252*/
    /*bef_stmt:2347*/
/*bef_stmt:2347*/
/*bef_stmt:2347*/
/*bef_stmt:2347*/
int result_realsmith_RB27OpQv7M = (Tag8_realsmith_RB27OpQv7M(/*int:2359:2359:2347:e*/maskset_0_realsmith_RB27OpQv7M) << 16) | (Tag9_realsmith_RB27OpQv7M(/*int:2359:2359:2347:e*/maskset_2_1_realsmith_RB27OpQv7M) << 8) | (Tag10_realsmith_RB27OpQv7M(/*int:2359:2359:2347:e*/maskset_2_2_realsmith_RB27OpQv7M) << 4) | Tag11_realsmith_RB27OpQv7M(/*int:2359:2359:2347:e*/lna_realsmith_RB27OpQv7M);
/*aft_stmt:2347*/
/*aft_stmt:2347*/
/*aft_stmt:2347*/
/*aft_stmt:2347*/
    /*bef_stmt:2357*/
return Tag12_realsmith_RB27OpQv7M(/*int:2359:2359:2357:e*/result_realsmith_RB27OpQv7M);
/*aft_stmt:2357*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_HcIczKgusg(x) (x)
#define Tag2_realsmith_HcIczKgusg(x) (x)
#define Tag3_realsmith_HcIczKgusg(x) (x)
#define Tag4_realsmith_HcIczKgusg(x) (x)
#define Tag5_realsmith_HcIczKgusg(x) (x)
#include "stdlib.h"
int realsmith_HcIczKgusg(int log_base_realsmith_HcIczKgusg, int log_l2bsize_realsmith_HcIczKgusg, int bp_lpn_realsmith_HcIczKgusg, int flag_realsmith_HcIczKgusg) {
    /*bef_stmt:17169*/
int bp_flag_realsmith_HcIczKgusg = Tag1_realsmith_HcIczKgusg(/*int:17251:17251:17169:e*/flag_realsmith_HcIczKgusg) | 0x1;
/*aft_stmt:17169*/
    /*bef_stmt:17236*/
/*bef_stmt:17236*/
/*bef_stmt:17236*/
long bp_blkno_realsmith_HcIczKgusg = Tag2_realsmith_HcIczKgusg(/*int:17251:17251:17236:e*/log_base_realsmith_HcIczKgusg) + (Tag3_realsmith_HcIczKgusg(/*int:17251:17251:17236:e*/bp_lpn_realsmith_HcIczKgusg) << (12 - Tag4_realsmith_HcIczKgusg(/*int:17251:17251:17236:e*/log_l2bsize_realsmith_HcIczKgusg)));
/*aft_stmt:17236*/
/*aft_stmt:17236*/
/*aft_stmt:17236*/
    /*bef_stmt:17249*/
return Tag5_realsmith_HcIczKgusg(/*long:17251:17251:17249:e*/bp_blkno_realsmith_HcIczKgusg);
/*aft_stmt:17249*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_K2e4MIsU5m(x) (x)
#define Tag2_realsmith_K2e4MIsU5m(x) (x)
#define Tag3_realsmith_K2e4MIsU5m(x) (x)
#define Tag4_realsmith_K2e4MIsU5m(x) (x)
#define Tag5_realsmith_K2e4MIsU5m(x) (x)
#define Tag6_realsmith_K2e4MIsU5m(x) (x)
#define Tag7_realsmith_K2e4MIsU5m(x) (x)
#define Tag8_realsmith_K2e4MIsU5m(x) (x)
#include "stdint.h"
#include "stdlib.h"
unsigned realsmith_K2e4MIsU5m(unsigned real_vram_size_realsmith_K2e4MIsU5m, unsigned d1vga_control_realsmith_K2e4MIsU5m, unsigned viewport_realsmith_K2e4MIsU5m, unsigned pitch_realsmith_K2e4MIsU5m) {
    unsigned size_realsmith_K2e4MIsU5m;
    /*bef_stmt:17742*/
if ((Tag1_realsmith_K2e4MIsU5m(/*unsigned int:17826:17826:17742:e*/d1vga_control_realsmith_K2e4MIsU5m) & 0x1) != 0) {
        size_realsmith_K2e4MIsU5m = 9 * 1024 * 1024;
    } else {
        /*bef_stmt:17660*/
unsigned height_realsmith_K2e4MIsU5m = (Tag2_realsmith_K2e4MIsU5m(/*unsigned int:17826:17826:17660:e*/viewport_realsmith_K2e4MIsU5m) >> 16) & 0xFFFF;
/*aft_stmt:17660*/
        /*bef_stmt:17697*/
unsigned pitch_value_realsmith_K2e4MIsU5m = Tag3_realsmith_K2e4MIsU5m(/*unsigned int:17826:17826:17697:e*/pitch_realsmith_K2e4MIsU5m) & 0xFFFF;
/*aft_stmt:17697*/
        /*bef_stmt:17733*/
/*bef_stmt:17733*/
size_realsmith_K2e4MIsU5m = Tag4_realsmith_K2e4MIsU5m(/*unsigned int:17737:17826:17733:e*/height_realsmith_K2e4MIsU5m) * Tag5_realsmith_K2e4MIsU5m(/*unsigned int:17737:17826:17733:e*/pitch_value_realsmith_K2e4MIsU5m) * 4;
/*aft_stmt:17733*/
/*aft_stmt:17733*/
    }
/*aft_stmt:17742*/
    /*bef_stmt:17813*/
/*bef_stmt:17813*/
if ((Tag6_realsmith_K2e4MIsU5m(/*unsigned int:17826:17826:17813:e*/real_vram_size_realsmith_K2e4MIsU5m) - Tag7_realsmith_K2e4MIsU5m(/*unsigned int:17826:17826:17813:e*/size_realsmith_K2e4MIsU5m)) < (8 * 1024 * 1024)) {
        return 0;
    }
/*aft_stmt:17813*/
/*aft_stmt:17813*/
    /*bef_stmt:17824*/
return Tag8_realsmith_K2e4MIsU5m(/*unsigned int:17826:17826:17824:e*/size_realsmith_K2e4MIsU5m);
/*aft_stmt:17824*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_zJmySpcrqB(x) (x)
#define Tag2_realsmith_zJmySpcrqB(x) (x)
#define Tag3_realsmith_zJmySpcrqB(x) (x)
#include "stdint.h"
unsigned int realsmith_zJmySpcrqB(unsigned int mask_realsmith_zJmySpcrqB, unsigned int bits_realsmith_zJmySpcrqB, signed short int inst_realsmith_zJmySpcrqB, signed short int reg_realsmith_zJmySpcrqB) {
    unsigned int v_realsmith_zJmySpcrqB = 0;
    /*bef_stmt:2062*/
v_realsmith_zJmySpcrqB &= ~Tag1_realsmith_zJmySpcrqB(/*unsigned int:2094:2094:2062:e*/mask_realsmith_zJmySpcrqB);
/*aft_stmt:2062*/
    /*bef_stmt:2079*/
v_realsmith_zJmySpcrqB |= Tag2_realsmith_zJmySpcrqB(/*unsigned int:2094:2094:2079:e*/bits_realsmith_zJmySpcrqB);
/*aft_stmt:2079*/
    /*bef_stmt:2092*/
return Tag3_realsmith_zJmySpcrqB(/*unsigned int:2094:2094:2092:e*/v_realsmith_zJmySpcrqB);
/*aft_stmt:2092*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_K0fqHX8iFn(x) (x)
#define Tag2_realsmith_K0fqHX8iFn(x) (x)
#define Tag3_realsmith_K0fqHX8iFn(x) (x)
#define Tag4_realsmith_K0fqHX8iFn(x) (x)
#define Tag5_realsmith_K0fqHX8iFn(x) (x)
#define Tag6_realsmith_K0fqHX8iFn(x) (x)
#define Tag7_realsmith_K0fqHX8iFn(x) (x)
#define Tag8_realsmith_K0fqHX8iFn(x) (x)
#define Tag9_realsmith_K0fqHX8iFn(x) (x)
#define Tag10_realsmith_K0fqHX8iFn(x) (x)
#define Tag11_realsmith_K0fqHX8iFn(x) (x)
#define Tag12_realsmith_K0fqHX8iFn(x) (x)
#define Tag13_realsmith_K0fqHX8iFn(x) (x)
#define Tag14_realsmith_K0fqHX8iFn(x) (x)
#define Tag15_realsmith_K0fqHX8iFn(x) (x)
#define Tag16_realsmith_K0fqHX8iFn(x) (x)
#define Tag17_realsmith_K0fqHX8iFn(x) (x)
#define Tag18_realsmith_K0fqHX8iFn(x) (x)
#define Tag19_realsmith_K0fqHX8iFn(x) (x)
#define Tag20_realsmith_K0fqHX8iFn(x) (x)
#define Tag21_realsmith_K0fqHX8iFn(x) (x)
#define Tag22_realsmith_K0fqHX8iFn(x) (x)
#define Tag23_realsmith_K0fqHX8iFn(x) (x)
#define Tag24_realsmith_K0fqHX8iFn(x) (x)
#include "stdlib.h"
#include "stdbool.h"
int realsmith_K0fqHX8iFn(int initial_size_realsmith_K0fqHX8iFn, int initial_wr_realsmith_K0fqHX8iFn, int initial_wp_realsmith_K0fqHX8iFn) {
    int size_realsmith_K0fqHX8iFn, wr_realsmith_K0fqHX8iFn, wp_realsmith_K0fqHX8iFn;
    _Bool succeeded_realsmith_K0fqHX8iFn = 1;
    /*bef_stmt:17530*/
/*bef_stmt:17530*/
for (size_realsmith_K0fqHX8iFn = Tag1_realsmith_K0fqHX8iFn(/*int:17693:17693:17530:e*/initial_size_realsmith_K0fqHX8iFn); Tag2_realsmith_K0fqHX8iFn(/*int:17693:17693:17530:e*/size_realsmith_K0fqHX8iFn) <= 32; size_realsmith_K0fqHX8iFn *= 2) {
        /*bef_stmt:17520*/
/*bef_stmt:17520*/
for (wr_realsmith_K0fqHX8iFn = 0; Tag3_realsmith_K0fqHX8iFn(/*int:17693:17693:17520:e*/wr_realsmith_K0fqHX8iFn) <= 32; wr_realsmith_K0fqHX8iFn += Tag4_realsmith_K0fqHX8iFn(/*int:17693:17693:17520:e*/size_realsmith_K0fqHX8iFn)) {
            /*bef_stmt:17510*/
/*bef_stmt:17510*/
/*bef_stmt:17510*/
/*bef_stmt:17510*/
/*bef_stmt:17510*/
/*bef_stmt:17510*/
for (wp_realsmith_K0fqHX8iFn = Tag5_realsmith_K0fqHX8iFn(/*int:17693:17693:17510:e*/wr_realsmith_K0fqHX8iFn) - Tag6_realsmith_K0fqHX8iFn(/*int:17693:17693:17510:e*/size_realsmith_K0fqHX8iFn); Tag7_realsmith_K0fqHX8iFn(/*int:17693:17693:17510:e*/wp_realsmith_K0fqHX8iFn) <= Tag8_realsmith_K0fqHX8iFn(/*int:17693:17693:17510:e*/wr_realsmith_K0fqHX8iFn) + Tag9_realsmith_K0fqHX8iFn(/*int:17693:17693:17510:e*/size_realsmith_K0fqHX8iFn); wp_realsmith_K0fqHX8iFn += Tag10_realsmith_K0fqHX8iFn(/*int:17693:17693:17510:e*/size_realsmith_K0fqHX8iFn)) {
                /*bef_stmt:17399*/
/*bef_stmt:17399*/
_Bool result_realsmith_K0fqHX8iFn = (Tag11_realsmith_K0fqHX8iFn(/*int:17693:17693:17399:e*/wr_realsmith_K0fqHX8iFn) == Tag12_realsmith_K0fqHX8iFn(/*int:17693:17693:17399:e*/wp_realsmith_K0fqHX8iFn));
/*aft_stmt:17399*/
/*aft_stmt:17399*/
                /*bef_stmt:17500*/
/*bef_stmt:17500*/
/*bef_stmt:17500*/
/*bef_stmt:17500*/
/*bef_stmt:17500*/
/*bef_stmt:17500*/
if ((Tag13_realsmith_K0fqHX8iFn(/*_Bool:17506:17517:17500:e*/result_realsmith_K0fqHX8iFn) && Tag14_realsmith_K0fqHX8iFn(/*int:17693:17693:17500:e*/wr_realsmith_K0fqHX8iFn) == Tag15_realsmith_K0fqHX8iFn(/*int:17693:17693:17500:e*/wp_realsmith_K0fqHX8iFn)) || (!Tag16_realsmith_K0fqHX8iFn(/*_Bool:17506:17517:17500:e*/result_realsmith_K0fqHX8iFn) && Tag17_realsmith_K0fqHX8iFn(/*int:17693:17693:17500:e*/wr_realsmith_K0fqHX8iFn) != Tag18_realsmith_K0fqHX8iFn(/*int:17693:17693:17500:e*/wp_realsmith_K0fqHX8iFn))) {
                } else {
                    succeeded_realsmith_K0fqHX8iFn = 0;
                }
/*aft_stmt:17500*/
/*aft_stmt:17500*/
/*aft_stmt:17500*/
/*aft_stmt:17500*/
/*aft_stmt:17500*/
/*aft_stmt:17500*/
            }
/*aft_stmt:17510*/
/*aft_stmt:17510*/
/*aft_stmt:17510*/
/*aft_stmt:17510*/
/*aft_stmt:17510*/
/*aft_stmt:17510*/
        }
/*aft_stmt:17520*/
/*aft_stmt:17520*/
    }
/*aft_stmt:17530*/
/*aft_stmt:17530*/
    /*bef_stmt:17660*/
/*bef_stmt:17660*/
for (size_realsmith_K0fqHX8iFn = Tag19_realsmith_K0fqHX8iFn(/*int:17693:17693:17660:e*/initial_size_realsmith_K0fqHX8iFn); Tag20_realsmith_K0fqHX8iFn(/*int:17693:17693:17660:e*/size_realsmith_K0fqHX8iFn) <= 32; size_realsmith_K0fqHX8iFn *= 2) {
        /*bef_stmt:17621*/
/*bef_stmt:17621*/
_Bool result_realsmith_K0fqHX8iFn = (Tag21_realsmith_K0fqHX8iFn(/*int:17693:17693:17621:e*/initial_wr_realsmith_K0fqHX8iFn) == Tag22_realsmith_K0fqHX8iFn(/*int:17693:17693:17621:e*/initial_wp_realsmith_K0fqHX8iFn));
/*aft_stmt:17621*/
/*aft_stmt:17621*/
        /*bef_stmt:17652*/
if (!Tag23_realsmith_K0fqHX8iFn(/*_Bool:17656:17693:17652:e*/result_realsmith_K0fqHX8iFn)) {
            succeeded_realsmith_K0fqHX8iFn = 0;
        }
/*aft_stmt:17652*/
    }
/*aft_stmt:17660*/
/*aft_stmt:17660*/
    /*bef_stmt:17691*/
return Tag24_realsmith_K0fqHX8iFn(/*_Bool:17693:17693:17691:e*/succeeded_realsmith_K0fqHX8iFn) ? 1 : 0;
/*aft_stmt:17691*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_aUkVdn6Oo8(x) (x)
#define Tag2_realsmith_aUkVdn6Oo8(x) (x)
#define Tag3_realsmith_aUkVdn6Oo8(x) (x)
#define Tag4_realsmith_aUkVdn6Oo8(x) (x)
#include "stdlib.h"
int realsmith_aUkVdn6Oo8(int halt_realsmith_aUkVdn6Oo8, int free_irq_realsmith_aUkVdn6Oo8, int free_rings_realsmith_aUkVdn6Oo8, int free_napis_realsmith_aUkVdn6Oo8) {
    /*bef_stmt:17147*/
if (Tag1_realsmith_aUkVdn6Oo8(/*int:17196:17196:17147:e*/halt_realsmith_aUkVdn6Oo8)) {
    }
/*aft_stmt:17147*/
    /*bef_stmt:17160*/
if (Tag2_realsmith_aUkVdn6Oo8(/*int:17196:17196:17160:e*/free_irq_realsmith_aUkVdn6Oo8)) {
    }
/*aft_stmt:17160*/
    /*bef_stmt:17173*/
if (Tag3_realsmith_aUkVdn6Oo8(/*int:17196:17196:17173:e*/free_rings_realsmith_aUkVdn6Oo8)) {
    }
/*aft_stmt:17173*/
    /*bef_stmt:17186*/
if (Tag4_realsmith_aUkVdn6Oo8(/*int:17196:17196:17186:e*/free_napis_realsmith_aUkVdn6Oo8)) {
    }
/*aft_stmt:17186*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Taz9gdxUwv(x) (x)
#define Tag2_realsmith_Taz9gdxUwv(x) (x)
#define Tag3_realsmith_Taz9gdxUwv(x) (x)
#define Tag4_realsmith_Taz9gdxUwv(x) (x)
#define Tag5_realsmith_Taz9gdxUwv(x) (x)
#define Tag6_realsmith_Taz9gdxUwv(x) (x)
#include "stdint.h"
int realsmith_Taz9gdxUwv(int addr_realsmith_Taz9gdxUwv, int reg1_realsmith_Taz9gdxUwv, int reg2_realsmith_Taz9gdxUwv) {
    unsigned char tmp_realsmith_Taz9gdxUwv[2];
    unsigned short int res_realsmith_Taz9gdxUwv;
    /*bef_stmt:2094*/
tmp_realsmith_Taz9gdxUwv[1] = Tag1_realsmith_Taz9gdxUwv(/*int:2260:2260:2094:e*/reg1_realsmith_Taz9gdxUwv);
/*aft_stmt:2094*/
    /*bef_stmt:2123*/
tmp_realsmith_Taz9gdxUwv[0] = Tag2_realsmith_Taz9gdxUwv(/*int:2260:2260:2123:e*/reg2_realsmith_Taz9gdxUwv);
/*aft_stmt:2123*/
    /*bef_stmt:2192*/
/*bef_stmt:2192*/
res_realsmith_Taz9gdxUwv = Tag3_realsmith_Taz9gdxUwv(/*unsigned char:2260:2260:2192:e*/tmp_realsmith_Taz9gdxUwv[1]) + (Tag4_realsmith_Taz9gdxUwv(/*unsigned char:2260:2260:2192:e*/tmp_realsmith_Taz9gdxUwv[0]) << 8);
/*aft_stmt:2192*/
/*aft_stmt:2192*/
    /*bef_stmt:2258*/
/*bef_stmt:2258*/
return (Tag5_realsmith_Taz9gdxUwv(/*unsigned short:2260:2260:2258:e*/res_realsmith_Taz9gdxUwv) == 0xffff ? 0 : (90000 * 60) / Tag6_realsmith_Taz9gdxUwv(/*unsigned short:2260:2260:2258:e*/res_realsmith_Taz9gdxUwv));
/*aft_stmt:2258*/
/*aft_stmt:2258*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_XVxX76yQDU(x) (x)
#define Tag2_realsmith_XVxX76yQDU(x) (x)
#include "stdlib.h"
int realsmith_XVxX76yQDU(int val_realsmith_XVxX76yQDU) {
    /*bef_stmt:17140*/
/*bef_stmt:17140*/
if (Tag1_realsmith_XVxX76yQDU(/*int:17146:17146:17140:e*/val_realsmith_XVxX76yQDU) == 1) {
        return -1;
    } else if (Tag2_realsmith_XVxX76yQDU(/*int:17146:17146:17140:e*/val_realsmith_XVxX76yQDU) == 2) {
        return 1;
    } else {
        return 0;
    }
/*aft_stmt:17140*/
/*aft_stmt:17140*/
}



#include "stdlib.h"
struct ivtv_queue_wiVSiV {
    unsigned long bytesused_realsmith_iN6F7n9qxz;
    unsigned long length_realsmith_iN6F7n9qxz;
    unsigned long buffers_realsmith_iN6F7n9qxz;
};
int realsmith_iN6F7n9qxz(int *bytesused_realsmith_iN6F7n9qxz, int *length_realsmith_iN6F7n9qxz, int *buffers_realsmith_iN6F7n9qxz) {
    *buffers_realsmith_iN6F7n9qxz = 0;
    *length_realsmith_iN6F7n9qxz = 0;
    *bytesused_realsmith_iN6F7n9qxz = 0;
    return 0;
}
int realsmith_proxy_LBlh8ovlMw(int p_0_ul8HV2L0Ru, int p_1_1WP321pwdA, int p_2_vFab2tBUAc) {
int proxy_OuC7iOEhLB[18] = { p_0_ul8HV2L0Ru, p_0_ul8HV2L0Ru, 53, p_0_ul8HV2L0Ru, 86, 56, p_0_ul8HV2L0Ru, 90, 36, p_0_ul8HV2L0Ru, 52, p_0_ul8HV2L0Ru, 72, p_0_ul8HV2L0Ru, 67, 16, 23, p_0_ul8HV2L0Ru };
int proxy_ret_UvX69iUPoF = realsmith_iN6F7n9qxz(proxy_OuC7iOEhLB, &(p_1_1WP321pwdA), &(p_2_vFab2tBUAc));
return proxy_ret_UvX69iUPoF;
}


#include "stdint.h"
#include "stdlib.h"
int realsmith_Stunbtplm9(int position_realsmith_Stunbtplm9, unsigned char *pOctets_realsmith_Stunbtplm9, int len_realsmith_Stunbtplm9) {
    int coeff_position_realsmith_Stunbtplm9, byte_position_realsmith_Stunbtplm9;
    unsigned int d32_realsmith_Stunbtplm9 = 0;
    unsigned char d8_realsmith_Stunbtplm9[4] = {0};
    if (len_realsmith_Stunbtplm9 == 0) return position_realsmith_Stunbtplm9;
    coeff_position_realsmith_Stunbtplm9 = position_realsmith_Stunbtplm9 >> 2;
    byte_position_realsmith_Stunbtplm9 = position_realsmith_Stunbtplm9 & 3;
    if (byte_position_realsmith_Stunbtplm9) {
        do {
            if (len_realsmith_Stunbtplm9 == 0) return position_realsmith_Stunbtplm9;
            d8_realsmith_Stunbtplm9[byte_position_realsmith_Stunbtplm9++] = *pOctets_realsmith_Stunbtplm9++;
            position_realsmith_Stunbtplm9++;
            len_realsmith_Stunbtplm9--;
        } while (byte_position_realsmith_Stunbtplm9 < 4);
        d32_realsmith_Stunbtplm9 = ((d8_realsmith_Stunbtplm9[0] << 24) | (d8_realsmith_Stunbtplm9[1] << 16) | (d8_realsmith_Stunbtplm9[2] << 8) | d8_realsmith_Stunbtplm9[3]);
        position_realsmith_Stunbtplm9 += 4;
    }
    while (len_realsmith_Stunbtplm9 >= 4) {
        d32_realsmith_Stunbtplm9 = *((unsigned int *)pOctets_realsmith_Stunbtplm9);
        position_realsmith_Stunbtplm9 += 4;
        pOctets_realsmith_Stunbtplm9 += 4;
        len_realsmith_Stunbtplm9 -= 4;
    }
    byte_position_realsmith_Stunbtplm9 = 0;
    while (len_realsmith_Stunbtplm9 > 0) {
        d8_realsmith_Stunbtplm9[byte_position_realsmith_Stunbtplm9++] = *pOctets_realsmith_Stunbtplm9++;
        position_realsmith_Stunbtplm9++;
        len_realsmith_Stunbtplm9--;
    }
    return position_realsmith_Stunbtplm9;
}
int realsmith_proxy_tBz6uRwqo2(int p_0_U3DmgMNhK2, unsigned char p_1_Q7M5Zh1MmQ, int p_2_wRA2iBHpvD) {
unsigned char proxy_k4AscusCMU[19] = { 94, p_1_Q7M5Zh1MmQ, 61, p_1_Q7M5Zh1MmQ, 77, 52, 21, p_1_Q7M5Zh1MmQ, p_1_Q7M5Zh1MmQ, p_1_Q7M5Zh1MmQ, 71, p_1_Q7M5Zh1MmQ, p_1_Q7M5Zh1MmQ, p_1_Q7M5Zh1MmQ, 98, 92, p_1_Q7M5Zh1MmQ, 39, p_1_Q7M5Zh1MmQ };
int proxy_ret_3ba7cvdc6X = realsmith_Stunbtplm9(p_0_U3DmgMNhK2, proxy_k4AscusCMU, p_2_wRA2iBHpvD);
return proxy_ret_3ba7cvdc6X;
}


#include "stdlib.h"
struct gasket_dev_i9wUX6 {
    int dev_realsmith_cV4y2gjrVi;
    struct {
        int type_realsmith_cV4y2gjrVi;
    } *interrupt_data_realsmith_cV4y2gjrVi;
};
int realsmith_cV4y2gjrVi(int interrupt_type_realsmith_cV4y2gjrVi, int *interrupt_data_present_realsmith_cV4y2gjrVi) {
    int ret_realsmith_cV4y2gjrVi = 0;
    if (!(*interrupt_data_present_realsmith_cV4y2gjrVi)) {
        return -1;
    }
    switch (interrupt_type_realsmith_cV4y2gjrVi) {
        case 128:
            ret_realsmith_cV4y2gjrVi = 0;
            if (ret_realsmith_cV4y2gjrVi) break;
            break;
        default:
            ret_realsmith_cV4y2gjrVi = -1;
    }
    if (ret_realsmith_cV4y2gjrVi) {
        return 0;
    }
    return 0;
}
int realsmith_proxy_hpA977jbXx(int p_0_L57HE8LQiT, int p_1_uA76qZbbiE) {
int proxy_qqCJW2p0mk[10] = { p_1_uA76qZbbiE, p_1_uA76qZbbiE, 55, p_1_uA76qZbbiE, p_1_uA76qZbbiE, 9, 65, 44, p_1_uA76qZbbiE, 17 };
int proxy_ret_7XykC8YoBU = realsmith_cV4y2gjrVi(p_0_L57HE8LQiT, proxy_qqCJW2p0mk);
return proxy_ret_7XykC8YoBU;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Tqnm6kM0rx(x) (x)
#define Tag2_realsmith_Tqnm6kM0rx(x) (x)
#define Tag3_realsmith_Tqnm6kM0rx(x) (x)
#define Tag4_realsmith_Tqnm6kM0rx(x) (x)
#define Tag5_realsmith_Tqnm6kM0rx(x) (x)
#define Tag6_realsmith_Tqnm6kM0rx(x) (x)
#define Tag7_realsmith_Tqnm6kM0rx(x) (x)
#define Tag8_realsmith_Tqnm6kM0rx(x) (x)
#define Tag9_realsmith_Tqnm6kM0rx(x) (x)
#include "stdlib.h"
int realsmith_Tqnm6kM0rx(unsigned long virt_addr_realsmith_Tqnm6kM0rx, unsigned int phys_realsmith_Tqnm6kM0rx, unsigned int len_realsmith_Tqnm6kM0rx) {
    unsigned long pfn_start_realsmith_Tqnm6kM0rx, pfn_end_realsmith_Tqnm6kM0rx, pfn_realsmith_Tqnm6kM0rx;
    /*bef_stmt:17198*/
if (Tag1_realsmith_Tqnm6kM0rx(/*unsigned long:17391:17391:17198:e*/virt_addr_realsmith_Tqnm6kM0rx) != 0)
        return 0;
/*aft_stmt:17198*/
    /*bef_stmt:17224*/
pfn_start_realsmith_Tqnm6kM0rx = Tag2_realsmith_Tqnm6kM0rx(/*unsigned int:17391:17391:17224:e*/phys_realsmith_Tqnm6kM0rx) >> 12;
/*aft_stmt:17224*/
    /*bef_stmt:17265*/
/*bef_stmt:17265*/
pfn_end_realsmith_Tqnm6kM0rx = Tag3_realsmith_Tqnm6kM0rx(/*unsigned long:17391:17391:17265:e*/pfn_start_realsmith_Tqnm6kM0rx) + (Tag4_realsmith_Tqnm6kM0rx(/*unsigned int:17391:17391:17265:e*/len_realsmith_Tqnm6kM0rx) >> 12);
/*aft_stmt:17265*/
/*aft_stmt:17265*/
    /*bef_stmt:17378*/
/*bef_stmt:17378*/
/*bef_stmt:17378*/
for (pfn_realsmith_Tqnm6kM0rx = Tag5_realsmith_Tqnm6kM0rx(/*unsigned long:17391:17391:17378:e*/pfn_start_realsmith_Tqnm6kM0rx); Tag6_realsmith_Tqnm6kM0rx(/*unsigned long:17391:17391:17378:e*/pfn_realsmith_Tqnm6kM0rx) < Tag7_realsmith_Tqnm6kM0rx(/*unsigned long:17391:17391:17378:e*/pfn_end_realsmith_Tqnm6kM0rx); pfn_realsmith_Tqnm6kM0rx++) {
        /*bef_stmt:17358*/
int page_is_poisoned_realsmith_Tqnm6kM0rx = (Tag8_realsmith_Tqnm6kM0rx(/*unsigned long:17391:17391:17358:e*/pfn_realsmith_Tqnm6kM0rx) % 2 == 0);
/*aft_stmt:17358*/
        /*bef_stmt:17370*/
if (Tag9_realsmith_Tqnm6kM0rx(/*int:17374:17391:17370:e*/page_is_poisoned_realsmith_Tqnm6kM0rx)) {
        }
/*aft_stmt:17370*/
    }
/*aft_stmt:17378*/
/*aft_stmt:17378*/
/*aft_stmt:17378*/
    return 1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_dZgAPwIGxD(x) (x)
#define Tag2_realsmith_dZgAPwIGxD(x) (x)
#define Tag3_realsmith_dZgAPwIGxD(x) (x)
#include "stdlib.h"
struct tty_struct_Tf7QS2 {
    int driver_data_realsmith_dZgAPwIGxD;
};
int realsmith_dZgAPwIGxD(int driver_data_realsmith_dZgAPwIGxD) {
    /*bef_stmt:17129*/
if (Tag1_realsmith_dZgAPwIGxD(/*int:17199:17199:17129:e*/driver_data_realsmith_dZgAPwIGxD) == 0)
        return 0;
/*aft_stmt:17129*/
    int reset_result_realsmith_dZgAPwIGxD = 1;
    int initialized_realsmith_dZgAPwIGxD = 0;
    /*bef_stmt:17197*/
/*bef_stmt:17197*/
return Tag2_realsmith_dZgAPwIGxD(/*int:17199:17199:17197:e*/reset_result_realsmith_dZgAPwIGxD) + Tag3_realsmith_dZgAPwIGxD(/*int:17199:17199:17197:e*/initialized_realsmith_dZgAPwIGxD);
/*aft_stmt:17197*/
/*aft_stmt:17197*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_7XnasITtFK(x) (x)
#include "stdlib.h"
int realsmith_7XnasITtFK(int has_headphone_switch_realsmith_7XnasITtFK) {
    /*bef_stmt:17098*/
if (/*TAG1:STA*/((has_headphone_switch_realsmith_7XnasITtFK) + (g_29FPQX) - -16)/*TAG1:END:has_headphone_switch_realsmith_7XnasITtFK*/ == 0)
        return -1;
g_29FPQX = -16 + (has_headphone_switch_realsmith_7XnasITtFK - (23));
/*aft_stmt:17098*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_AMjLkc4fSg(x) (x)
#define Tag2_realsmith_AMjLkc4fSg(x) (x)
#define Tag3_realsmith_AMjLkc4fSg(x) (x)
#define Tag4_realsmith_AMjLkc4fSg(x) (x)
#define Tag5_realsmith_AMjLkc4fSg(x) (x)
#define Tag6_realsmith_AMjLkc4fSg(x) (x)
#define Tag7_realsmith_AMjLkc4fSg(x) (x)
#define Tag8_realsmith_AMjLkc4fSg(x) (x)
#include "stdlib.h"
int realsmith_AMjLkc4fSg(int is_centry_realsmith_AMjLkc4fSg, int cregion_realsmith_AMjLkc4fSg, int centry_realsmith_AMjLkc4fSg, int rulei_realsmith_AMjLkc4fSg) {
    int err_realsmith_AMjLkc4fSg;
    /*bef_stmt:17244*/
if (Tag1_realsmith_AMjLkc4fSg(/*int:17259:17259:17244:e*/is_centry_realsmith_AMjLkc4fSg)) {
        /*bef_stmt:17197*/
/*bef_stmt:17197*/
/*bef_stmt:17197*/
err_realsmith_AMjLkc4fSg = Tag2_realsmith_AMjLkc4fSg(/*int:17259:17259:17197:e*/cregion_realsmith_AMjLkc4fSg) + Tag3_realsmith_AMjLkc4fSg(/*int:17259:17259:17197:e*/centry_realsmith_AMjLkc4fSg) + Tag4_realsmith_AMjLkc4fSg(/*int:17259:17259:17197:e*/rulei_realsmith_AMjLkc4fSg);
/*aft_stmt:17197*/
/*aft_stmt:17197*/
/*aft_stmt:17197*/
    } else {
        /*bef_stmt:17237*/
/*bef_stmt:17237*/
/*bef_stmt:17237*/
err_realsmith_AMjLkc4fSg = Tag5_realsmith_AMjLkc4fSg(/*int:17259:17259:17237:e*/cregion_realsmith_AMjLkc4fSg) - Tag6_realsmith_AMjLkc4fSg(/*int:17259:17259:17237:e*/centry_realsmith_AMjLkc4fSg) + Tag7_realsmith_AMjLkc4fSg(/*int:17259:17259:17237:e*/rulei_realsmith_AMjLkc4fSg);
/*aft_stmt:17237*/
/*aft_stmt:17237*/
/*aft_stmt:17237*/
    }
/*aft_stmt:17244*/
    /*bef_stmt:17257*/
return Tag8_realsmith_AMjLkc4fSg(/*int:17259:17259:17257:e*/err_realsmith_AMjLkc4fSg);
/*aft_stmt:17257*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_5EqKfM2Kts(x) (x)
#define Tag2_realsmith_5EqKfM2Kts(x) (x)
#define Tag3_realsmith_5EqKfM2Kts(x) (x)
#define Tag4_realsmith_5EqKfM2Kts(x) (x)
#define Tag5_realsmith_5EqKfM2Kts(x) (x)
#include "stdlib.h"
int realsmith_5EqKfM2Kts(int is_thread_imc_pmu_realsmith_5EqKfM2Kts, int event_attr_config_realsmith_5EqKfM2Kts, unsigned long event_hw_event_base_realsmith_5EqKfM2Kts, int cpu_thread_imc_mem_realsmith_5EqKfM2Kts) {
    unsigned long addr_realsmith_5EqKfM2Kts;
    /*bef_stmt:17250*/
if (Tag1_realsmith_5EqKfM2Kts(/*int:17271:17271:17250:e*/is_thread_imc_pmu_realsmith_5EqKfM2Kts)) {
        /*bef_stmt:17191*/
addr_realsmith_5EqKfM2Kts = (unsigned long)(Tag2_realsmith_5EqKfM2Kts(/*int:17271:17271:17191:e*/cpu_thread_imc_mem_realsmith_5EqKfM2Kts));
/*aft_stmt:17191*/
        /*bef_stmt:17244*/
/*bef_stmt:17244*/
return (int)(Tag3_realsmith_5EqKfM2Kts(/*unsigned long:17271:17271:17244:e*/addr_realsmith_5EqKfM2Kts) + (Tag4_realsmith_5EqKfM2Kts(/*int:17271:17271:17244:e*/event_attr_config_realsmith_5EqKfM2Kts) & 0xFFFF));
/*aft_stmt:17244*/
/*aft_stmt:17244*/
    }
/*aft_stmt:17250*/
    /*bef_stmt:17269*/
return (int)Tag5_realsmith_5EqKfM2Kts(/*unsigned long:17271:17271:17269:e*/event_hw_event_base_realsmith_5EqKfM2Kts);
/*aft_stmt:17269*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_y1xdlNZNmw(x) (x)
#define Tag2_realsmith_y1xdlNZNmw(x) (x)
#define Tag3_realsmith_y1xdlNZNmw(x) (x)
#include "stdlib.h"
typedef struct {
    unsigned int poll_interval_realsmith_y1xdlNZNmw;
} Poller_dXJ3dL;
int realsmith_y1xdlNZNmw(int ensure_poller_realsmith_y1xdlNZNmw, unsigned int interval_realsmith_y1xdlNZNmw) {
    Poller_dXJ3dL poller_realsmith_y1xdlNZNmw;
    /*bef_stmt:17243*/
if (Tag1_realsmith_y1xdlNZNmw(/*int:17253:17253:17243:e*/ensure_poller_realsmith_y1xdlNZNmw)) {
        /*bef_stmt:17206*/
poller_realsmith_y1xdlNZNmw.poll_interval_realsmith_y1xdlNZNmw = Tag2_realsmith_y1xdlNZNmw(/*unsigned int:17253:17253:17206:e*/interval_realsmith_y1xdlNZNmw);
/*aft_stmt:17206*/
        /*bef_stmt:17237*/
return Tag3_realsmith_y1xdlNZNmw(/*unsigned int:17253:17253:17237:e*/poller_realsmith_y1xdlNZNmw.poll_interval_realsmith_y1xdlNZNmw);
/*aft_stmt:17237*/
    }
/*aft_stmt:17243*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_xCKXWEmZUl(x) (x)
#include "stdlib.h"
int realsmith_xCKXWEmZUl(int port_data_realsmith_xCKXWEmZUl) {
    /*bef_stmt:17097*/
int q40kbd_realsmith_xCKXWEmZUl = Tag1_realsmith_xCKXWEmZUl(/*int:17106:17106:17097:e*/port_data_realsmith_xCKXWEmZUl);
/*aft_stmt:17097*/
    return 0;
}



#include "stdlib.h"
int realsmith_baYcv7OaHm(int private_value_realsmith_baYcv7OaHm, int *max_realsmith_baYcv7OaHm, int *min_realsmith_baYcv7OaHm, int *count_realsmith_baYcv7OaHm) {
    *count_realsmith_baYcv7OaHm = 2;
    *min_realsmith_baYcv7OaHm = 0;
    switch (private_value_realsmith_baYcv7OaHm) {
    case 128:
        *max_realsmith_baYcv7OaHm = 31;
        break;
    case 129:
        *max_realsmith_baYcv7OaHm = 15;
        break;
    default:
        *max_realsmith_baYcv7OaHm = 0;
        break;
    }
    return 0;
}
int realsmith_proxy_XDHhQBqQp7(int p_0_GmClw1nngp, int p_1_eIqsj8kj3X, int p_2_rtXumAUeaT, int p_3_jqvU1xskKo) {
int proxy_shyG51OGb2[14] = { 93, p_1_eIqsj8kj3X, 36, 83, p_1_eIqsj8kj3X, p_1_eIqsj8kj3X, 52, p_1_eIqsj8kj3X, 86, 80, 32, p_1_eIqsj8kj3X, 41, p_1_eIqsj8kj3X };
int proxy_7jwdHKM3p5[19] = { 94, 96, 34, p_2_rtXumAUeaT, p_2_rtXumAUeaT, 54, p_2_rtXumAUeaT, 83, 35, p_2_rtXumAUeaT, p_2_rtXumAUeaT, p_2_rtXumAUeaT, p_2_rtXumAUeaT, 23, p_2_rtXumAUeaT, 45, p_2_rtXumAUeaT, 76, 33 };
int proxy_N1BVQnvdkb[14] = { 98, 43, p_3_jqvU1xskKo, 12, 61, p_3_jqvU1xskKo, p_3_jqvU1xskKo, p_3_jqvU1xskKo, 74, 17, 31, p_3_jqvU1xskKo, 81, 69 };
int proxy_ret_bBVK9n1JT7 = realsmith_baYcv7OaHm(p_0_GmClw1nngp, proxy_shyG51OGb2, proxy_7jwdHKM3p5, proxy_N1BVQnvdkb);
return proxy_ret_bBVK9n1JT7;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_zEPS17J2NS(x) (x)
#define Tag2_realsmith_zEPS17J2NS(x) (x)
#include "stdlib.h"
int realsmith_zEPS17J2NS(int has_cpu_slab_realsmith_zEPS17J2NS, int flush_cpu_slab_realsmith_zEPS17J2NS, int s_realsmith_zEPS17J2NS) {
    /*bef_stmt:17151*/
if (Tag1_realsmith_zEPS17J2NS(/*int:17161:17161:17151:e*/has_cpu_slab_realsmith_zEPS17J2NS)) {
        /*bef_stmt:17137*/
flush_cpu_slab_realsmith_zEPS17J2NS = Tag2_realsmith_zEPS17J2NS(/*int:17161:17161:17137:e*/s_realsmith_zEPS17J2NS);
/*aft_stmt:17137*/
        return 1;
    }
/*aft_stmt:17151*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Ye5g0WuJsf(x) (x)
#include "stdlib.h"
struct notifier_block_z0n0Ij {
    int dummy_realsmith_Ye5g0WuJsf;
};
int realsmith_Ye5g0WuJsf(int nb_dummy_realsmith_Ye5g0WuJsf) {
    struct notifier_block_z0n0Ij nb_realsmith_Ye5g0WuJsf;
    /*bef_stmt:17151*/
nb_realsmith_Ye5g0WuJsf.dummy_realsmith_Ye5g0WuJsf = Tag1_realsmith_Ye5g0WuJsf(/*int:17172:17172:17151:e*/nb_dummy_realsmith_Ye5g0WuJsf);
/*aft_stmt:17151*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_0IXmECUkJP(x) (x)
#define Tag2_realsmith_0IXmECUkJP(x) (x)
#define Tag3_realsmith_0IXmECUkJP(x) (x)
#define Tag4_realsmith_0IXmECUkJP(x) (x)
#define Tag5_realsmith_0IXmECUkJP(x) (x)
#define Tag6_realsmith_0IXmECUkJP(x) (x)
#define Tag7_realsmith_0IXmECUkJP(x) (x)
#define Tag8_realsmith_0IXmECUkJP(x) (x)
#include "stdint.h"
int realsmith_0IXmECUkJP(int id_realsmith_0IXmECUkJP, int state_id_realsmith_0IXmECUkJP, unsigned int ctrl_value_realsmith_0IXmECUkJP) {
    int proto_evo_realsmith_0IXmECUkJP;
    int proto_realsmith_0IXmECUkJP;
    int head_realsmith_0IXmECUkJP;
    /*bef_stmt:2129*/
/*bef_stmt:2129*/
const unsigned int coff_realsmith_0IXmECUkJP = (Tag1_realsmith_0IXmECUkJP(/*int:2332:2332:2129:e*/state_id_realsmith_0IXmECUkJP) == 0) * 0x20000 + Tag2_realsmith_0IXmECUkJP(/*int:2332:2332:2129:e*/id_realsmith_0IXmECUkJP) * 0x20;
/*aft_stmt:2129*/
/*aft_stmt:2129*/
    /*bef_stmt:2155*/
unsigned int ctrl_realsmith_0IXmECUkJP = Tag3_realsmith_0IXmECUkJP(/*unsigned int:2332:2332:2155:e*/ctrl_value_realsmith_0IXmECUkJP);
/*aft_stmt:2155*/
    /*bef_stmt:2195*/
proto_evo_realsmith_0IXmECUkJP = (Tag4_realsmith_0IXmECUkJP(/*unsigned int:2332:2332:2195:e*/ctrl_realsmith_0IXmECUkJP) & 0x00000f00) >> 8;
/*aft_stmt:2195*/
    /*bef_stmt:2206*/
switch (Tag5_realsmith_0IXmECUkJP(/*int:2332:2332:2206:e*/proto_evo_realsmith_0IXmECUkJP)) {
        case 0: proto_realsmith_0IXmECUkJP = 0; break;
        default: proto_realsmith_0IXmECUkJP = 1; break;
    }
/*aft_stmt:2206*/
    /*bef_stmt:2284*/
head_realsmith_0IXmECUkJP = Tag6_realsmith_0IXmECUkJP(/*unsigned int:2332:2332:2284:e*/ctrl_realsmith_0IXmECUkJP) & 0x0000000f;
/*aft_stmt:2284*/
    /*bef_stmt:2330*/
/*bef_stmt:2330*/
return (Tag7_realsmith_0IXmECUkJP(/*int:2332:2332:2330:e*/proto_realsmith_0IXmECUkJP) << 16) | (Tag8_realsmith_0IXmECUkJP(/*int:2332:2332:2330:e*/head_realsmith_0IXmECUkJP) & 0xFFFF);
/*aft_stmt:2330*/
/*aft_stmt:2330*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_aLQ0EOkT1f(x) (x)
#define Tag2_realsmith_aLQ0EOkT1f(x) (x)
#include "stdlib.h"
struct tegra_xusb_lane_iWhbLX {
    int padctl_realsmith_aLQ0EOkT1f;
};
int realsmith_aLQ0EOkT1f(int padctl_realsmith_aLQ0EOkT1f) {
    struct tegra_xusb_lane_iWhbLX lane_realsmith_aLQ0EOkT1f;
    /*bef_stmt:17151*/
lane_realsmith_aLQ0EOkT1f.padctl_realsmith_aLQ0EOkT1f = Tag1_realsmith_aLQ0EOkT1f(/*int:17210:17210:17151:e*/padctl_realsmith_aLQ0EOkT1f);
/*aft_stmt:17151*/
    /*bef_stmt:17208*/
return (Tag2_realsmith_aLQ0EOkT1f(/*int:17210:17210:17208:e*/lane_realsmith_aLQ0EOkT1f.padctl_realsmith_aLQ0EOkT1f) == 0) ? -1 : 0;
/*aft_stmt:17208*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_HoQkIuNGJo(x) (x)
#define Tag2_realsmith_HoQkIuNGJo(x) (x)
#include "stdlib.h"
int realsmith_HoQkIuNGJo(int refc_mxr0_realsmith_HoQkIuNGJo, int agblocks_realsmith_HoQkIuNGJo) {
    /*bef_stmt:17121*/
if (Tag1_realsmith_HoQkIuNGJo(/*int:17142:17142:17121:e*/refc_mxr0_realsmith_HoQkIuNGJo) == 0)
        return 0;
/*aft_stmt:17121*/
    /*bef_stmt:17140*/
return Tag2_realsmith_HoQkIuNGJo(/*int:17142:17142:17140:e*/agblocks_realsmith_HoQkIuNGJo) * 2;
/*aft_stmt:17140*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Lgdspr4h8o(x) (x)
#define Tag2_realsmith_Lgdspr4h8o(x) (x)
#define Tag3_realsmith_Lgdspr4h8o(x) (x)
#include "stdlib.h"
int realsmith_Lgdspr4h8o(int nalloc_realsmith_Lgdspr4h8o, int len_realsmith_Lgdspr4h8o) {
    int VHOST_TEST_VQ_realsmith_Lgdspr4h8o = 1;
    int result_realsmith_Lgdspr4h8o = 0;
    /*bef_stmt:17191*/
/*bef_stmt:17191*/
if (Tag1_realsmith_Lgdspr4h8o(/*int:17204:17204:17191:e*/nalloc_realsmith_Lgdspr4h8o) == (Tag2_realsmith_Lgdspr4h8o(/*int:17204:17204:17191:e*/len_realsmith_Lgdspr4h8o) + 1)) {
        result_realsmith_Lgdspr4h8o = 1;
    }
/*aft_stmt:17191*/
/*aft_stmt:17191*/
    /*bef_stmt:17202*/
return Tag3_realsmith_Lgdspr4h8o(/*int:17204:17204:17202:e*/result_realsmith_Lgdspr4h8o);
/*aft_stmt:17202*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_yk65PcPvDb(x) (x)
#include "stdint.h"
int realsmith_yk65PcPvDb(int val_realsmith_yk65PcPvDb) {
    /*bef_stmt:1995*/
return ((Tag1_realsmith_yk65PcPvDb(/*int:1997:1997:1995:e*/val_realsmith_yk65PcPvDb)) << 8) & 0x000000FF;
/*aft_stmt:1995*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_smzxAPz5rd(x) (x)
#define Tag2_realsmith_smzxAPz5rd(x) (x)
#define Tag3_realsmith_smzxAPz5rd(x) (x)
#define Tag4_realsmith_smzxAPz5rd(x) (x)
#define Tag5_realsmith_smzxAPz5rd(x) (x)
#define Tag6_realsmith_smzxAPz5rd(x) (x)
#define Tag7_realsmith_smzxAPz5rd(x) (x)
#define Tag8_realsmith_smzxAPz5rd(x) (x)
#define Tag9_realsmith_smzxAPz5rd(x) (x)
#include "stdint.h"
int realsmith_smzxAPz5rd(int offset_realsmith_smzxAPz5rd, int mask_realsmith_smzxAPz5rd, int value_realsmith_smzxAPz5rd, int old_value_realsmith_smzxAPz5rd) {
    /*bef_stmt:2092*/
/*bef_stmt:2092*/
/*bef_stmt:2092*/
/*bef_stmt:2092*/
int new_value_realsmith_smzxAPz5rd = (Tag1_realsmith_smzxAPz5rd(/*int:2165:2165:2092:e*/old_value_realsmith_smzxAPz5rd) & (~Tag2_realsmith_smzxAPz5rd(/*int:2165:2165:2092:e*/mask_realsmith_smzxAPz5rd))) | (Tag3_realsmith_smzxAPz5rd(/*int:2165:2165:2092:e*/value_realsmith_smzxAPz5rd) & Tag4_realsmith_smzxAPz5rd(/*int:2165:2165:2092:e*/mask_realsmith_smzxAPz5rd));
/*aft_stmt:2092*/
/*aft_stmt:2092*/
/*aft_stmt:2092*/
/*aft_stmt:2092*/
    /*bef_stmt:2133*/
/*bef_stmt:2133*/
int change_realsmith_smzxAPz5rd = (Tag5_realsmith_smzxAPz5rd(/*int:2165:2165:2133:e*/old_value_realsmith_smzxAPz5rd) != Tag6_realsmith_smzxAPz5rd(/*int:2165:2165:2133:e*/new_value_realsmith_smzxAPz5rd));
/*aft_stmt:2133*/
/*aft_stmt:2133*/
    /*bef_stmt:2163*/
/*bef_stmt:2163*/
/*bef_stmt:2163*/
return Tag7_realsmith_smzxAPz5rd(/*int:2165:2165:2163:e*/change_realsmith_smzxAPz5rd) ? Tag8_realsmith_smzxAPz5rd(/*int:2165:2165:2163:e*/new_value_realsmith_smzxAPz5rd) : Tag9_realsmith_smzxAPz5rd(/*int:2165:2165:2163:e*/old_value_realsmith_smzxAPz5rd);
/*aft_stmt:2163*/
/*aft_stmt:2163*/
/*aft_stmt:2163*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_AzYh2mCYkn(x) (x)
#define Tag2_realsmith_AzYh2mCYkn(x) (x)
#include "stdlib.h"
struct snd_gus_card_YKJ5NK {
    unsigned long gf1_uart_cmd_realsmith_AzYh2mCYkn;
};
int realsmith_AzYh2mCYkn(int uart_cmd_realsmith_AzYh2mCYkn) {
    struct snd_gus_card_YKJ5NK gus_realsmith_AzYh2mCYkn;
    /*bef_stmt:17154*/
gus_realsmith_AzYh2mCYkn.gf1_uart_cmd_realsmith_AzYh2mCYkn = Tag1_realsmith_AzYh2mCYkn(/*int:17213:17213:17154:e*/uart_cmd_realsmith_AzYh2mCYkn);
/*aft_stmt:17154*/
    gus_realsmith_AzYh2mCYkn.gf1_uart_cmd_realsmith_AzYh2mCYkn &= ~0x20;
    /*bef_stmt:17211*/
return Tag2_realsmith_AzYh2mCYkn(/*unsigned long:17213:17213:17211:e*/gus_realsmith_AzYh2mCYkn.gf1_uart_cmd_realsmith_AzYh2mCYkn);
/*aft_stmt:17211*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_sLkbilXhfh(x) (x)
#define Tag2_realsmith_sLkbilXhfh(x) (x)
#define Tag3_realsmith_sLkbilXhfh(x) (x)
#define Tag4_realsmith_sLkbilXhfh(x) (x)
#include "stdint.h"
int realsmith_sLkbilXhfh(int reg_voltage_realsmith_sLkbilXhfh) {
    /*bef_stmt:1999*/
int ret_realsmith_sLkbilXhfh = (Tag1_realsmith_sLkbilXhfh(/*int:2069:2069:1999:e*/reg_voltage_realsmith_sLkbilXhfh) & 0x0F);
/*aft_stmt:1999*/
    /*bef_stmt:2026*/
/*bef_stmt:2026*/
if (Tag2_realsmith_sLkbilXhfh(/*int:2069:2069:2026:e*/ret_realsmith_sLkbilXhfh) < 0)
        return Tag3_realsmith_sLkbilXhfh(/*int:2069:2069:2026:e*/ret_realsmith_sLkbilXhfh);
/*aft_stmt:2026*/
/*aft_stmt:2026*/
    /*bef_stmt:2067*/
return 10 * (350 + 2 * Tag4_realsmith_sLkbilXhfh(/*int:2069:2069:2067:e*/ret_realsmith_sLkbilXhfh));
/*aft_stmt:2067*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_VmjC4jeYmL(x) (x)
#define Tag2_realsmith_VmjC4jeYmL(x) (x)
#define Tag3_realsmith_VmjC4jeYmL(x) (x)
#define Tag4_realsmith_VmjC4jeYmL(x) (x)
#define Tag5_realsmith_VmjC4jeYmL(x) (x)
#define Tag6_realsmith_VmjC4jeYmL(x) (x)
#define Tag7_realsmith_VmjC4jeYmL(x) (x)
#include "stdlib.h"
int realsmith_VmjC4jeYmL(int sock_flags_realsmith_VmjC4jeYmL, int seek_realsmith_VmjC4jeYmL) {
    long unsigned int msg_iter_realsmith_VmjC4jeYmL = 0;
    long int ret_realsmith_VmjC4jeYmL = 0;
    /*bef_stmt:17190*/
if (Tag1_realsmith_VmjC4jeYmL(/*int:17298:17298:17190:e*/seek_realsmith_VmjC4jeYmL) != 0) {
        /*bef_stmt:17181*/
msg_iter_realsmith_VmjC4jeYmL += Tag2_realsmith_VmjC4jeYmL(/*int:17298:17298:17181:e*/seek_realsmith_VmjC4jeYmL);
/*aft_stmt:17181*/
    }
/*aft_stmt:17190*/
    /*bef_stmt:17237*/
ret_realsmith_VmjC4jeYmL = (Tag3_realsmith_VmjC4jeYmL(/*int:17298:17298:17237:e*/sock_flags_realsmith_VmjC4jeYmL) > 0) ? 1 : -1;
/*aft_stmt:17237*/
    /*bef_stmt:17296*/
/*bef_stmt:17296*/
/*bef_stmt:17296*/
/*bef_stmt:17296*/
return Tag4_realsmith_VmjC4jeYmL(/*long:17298:17298:17296:e*/ret_realsmith_VmjC4jeYmL) > 0 ? Tag5_realsmith_VmjC4jeYmL(/*long:17298:17298:17296:e*/ret_realsmith_VmjC4jeYmL) + Tag6_realsmith_VmjC4jeYmL(/*int:17298:17298:17296:e*/seek_realsmith_VmjC4jeYmL) : Tag7_realsmith_VmjC4jeYmL(/*long:17298:17298:17296:e*/ret_realsmith_VmjC4jeYmL);
/*aft_stmt:17296*/
/*aft_stmt:17296*/
/*aft_stmt:17296*/
/*aft_stmt:17296*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_nxGGmmQSct(x) (x)
#define Tag2_realsmith_nxGGmmQSct(x) (x)
#define Tag3_realsmith_nxGGmmQSct(x) (x)
#define Tag4_realsmith_nxGGmmQSct(x) (x)
#include "stdint.h"
#include "stdbool.h"
int realsmith_nxGGmmQSct(int i2s_port_realsmith_nxGGmmQSct, unsigned int format_realsmith_nxGGmmQSct, unsigned int rate_realsmith_nxGGmmQSct, unsigned int mclk_freq_realsmith_nxGGmmQSct) {
    struct {
        unsigned short int type_realsmith_nxGGmmQSct;
        unsigned short int i2s_port_realsmith_nxGGmmQSct;
        unsigned int format_realsmith_nxGGmmQSct;
        unsigned int rate_realsmith_nxGGmmQSct;
        unsigned int mclk_freq_realsmith_nxGGmmQSct;
    } req_realsmith_nxGGmmQSct;
    req_realsmith_nxGGmmQSct.type_realsmith_nxGGmmQSct = 0x0001;
    /*bef_stmt:2201*/
req_realsmith_nxGGmmQSct.i2s_port_realsmith_nxGGmmQSct = (unsigned short int)Tag1_realsmith_nxGGmmQSct(/*int:2274:2274:2201:e*/i2s_port_realsmith_nxGGmmQSct);
/*aft_stmt:2201*/
    /*bef_stmt:2222*/
req_realsmith_nxGGmmQSct.format_realsmith_nxGGmmQSct = Tag2_realsmith_nxGGmmQSct(/*unsigned int:2274:2274:2222:e*/format_realsmith_nxGGmmQSct);
/*aft_stmt:2222*/
    /*bef_stmt:2243*/
req_realsmith_nxGGmmQSct.rate_realsmith_nxGGmmQSct = Tag3_realsmith_nxGGmmQSct(/*unsigned int:2274:2274:2243:e*/rate_realsmith_nxGGmmQSct);
/*aft_stmt:2243*/
    /*bef_stmt:2264*/
req_realsmith_nxGGmmQSct.mclk_freq_realsmith_nxGGmmQSct = Tag4_realsmith_nxGGmmQSct(/*unsigned int:2274:2274:2264:e*/mclk_freq_realsmith_nxGGmmQSct);
/*aft_stmt:2264*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_wI4dVhZ08s(x) (x)
#define Tag2_realsmith_wI4dVhZ08s(x) (x)
#define Tag3_realsmith_wI4dVhZ08s(x) (x)
#define Tag4_realsmith_wI4dVhZ08s(x) (x)
#include "stdint.h"
struct fcpio_tag_E77vZH {
    unsigned short int rx_id_realsmith_wI4dVhZ08s;
    unsigned short int ox_id_realsmith_wI4dVhZ08s;
};
int realsmith_wI4dVhZ08s(unsigned short int rx_id_realsmith_wI4dVhZ08s, unsigned short int ox_id_realsmith_wI4dVhZ08s) {
    struct fcpio_tag_E77vZH tag_realsmith_wI4dVhZ08s;
    /*bef_stmt:2081*/
tag_realsmith_wI4dVhZ08s.rx_id_realsmith_wI4dVhZ08s = /*TAG1:STA*/((unsigned short)(realsmith_aUkVdn6Oo8((int)(rx_id_realsmith_wI4dVhZ08s)+(-71), (int)(rx_id_realsmith_wI4dVhZ08s)+(-37), (int)(rx_id_realsmith_wI4dVhZ08s)+(-66), (int)(rx_id_realsmith_wI4dVhZ08s)+(-70))+(int)(rx_id_realsmith_wI4dVhZ08s)-(94))+rx_id_realsmith_wI4dVhZ08s)/*TAG1:END:rx_id_realsmith_wI4dVhZ08s*/;
/*aft_stmt:2081*/
    /*bef_stmt:2114*/
tag_realsmith_wI4dVhZ08s.ox_id_realsmith_wI4dVhZ08s = Tag2_realsmith_wI4dVhZ08s(/*unsigned short:2168:2168:2114:e*/ox_id_realsmith_wI4dVhZ08s);
/*aft_stmt:2114*/
    /*bef_stmt:2166*/
/*bef_stmt:2166*/
return (/*TAG3:STA*/((unsigned short)(realsmith_Taz9gdxUwv((int)(tag_realsmith_wI4dVhZ08s.rx_id_realsmith_wI4dVhZ08s)+(-47), (int)(tag_realsmith_wI4dVhZ08s.rx_id_realsmith_wI4dVhZ08s)+(-69), (int)(tag_realsmith_wI4dVhZ08s.rx_id_realsmith_wI4dVhZ08s)+(-47))+(int)(tag_realsmith_wI4dVhZ08s.rx_id_realsmith_wI4dVhZ08s)-(541))+tag_realsmith_wI4dVhZ08s.rx_id_realsmith_wI4dVhZ08s)/*TAG3:END:tag_realsmith_wI4dVhZ08s.rx_id_realsmith_wI4dVhZ08s*/ << 16) | Tag4_realsmith_wI4dVhZ08s(/*unsigned short:2168:2168:2166:e*/tag_realsmith_wI4dVhZ08s.ox_id_realsmith_wI4dVhZ08s);
/*aft_stmt:2166*/
/*aft_stmt:2166*/
}



#include "stdint.h"
#include "stdlib.h"
int realsmith_r1Tm6fXswo(int pf_bd_num_realsmith_r1Tm6fXswo, int *desc_data_realsmith_r1Tm6fXswo, unsigned long *reset_requests_realsmith_r1Tm6fXswo) {
    int ret_realsmith_r1Tm6fXswo;
    unsigned int status_realsmith_r1Tm6fXswo;
    ret_realsmith_r1Tm6fXswo = 0;
    if (ret_realsmith_r1Tm6fXswo) {
        return ret_realsmith_r1Tm6fXswo;
    }
    status_realsmith_r1Tm6fXswo = desc_data_realsmith_r1Tm6fXswo[0] & 0x000000FF;
    if (status_realsmith_r1Tm6fXswo) {
    }
    status_realsmith_r1Tm6fXswo = desc_data_realsmith_r1Tm6fXswo[2];
    if (status_realsmith_r1Tm6fXswo) {
    }
    status_realsmith_r1Tm6fXswo = desc_data_realsmith_r1Tm6fXswo[3] & 0x0000FF00;
    if (status_realsmith_r1Tm6fXswo) {
    }
    status_realsmith_r1Tm6fXswo = desc_data_realsmith_r1Tm6fXswo[3] & 0x00FF0000;
    if (status_realsmith_r1Tm6fXswo) {
    }
    ret_realsmith_r1Tm6fXswo = 0;
    if (ret_realsmith_r1Tm6fXswo) {
        return ret_realsmith_r1Tm6fXswo;
    }
    return ret_realsmith_r1Tm6fXswo;
}
int realsmith_proxy_QE9Tywpew4(int p_0_PaoM8U7CTD, int p_1_9RLfjsRS4m, unsigned long p_2_HUj9jR7ajP) {
int proxy_XO5o9tCA8z[15] = { 42, p_1_9RLfjsRS4m, 22, 100, 13, 75, p_1_9RLfjsRS4m, 100, p_1_9RLfjsRS4m, p_1_9RLfjsRS4m, p_1_9RLfjsRS4m, 62, p_1_9RLfjsRS4m, p_1_9RLfjsRS4m, p_1_9RLfjsRS4m };
int proxy_ret_Y4ly5cl08H = realsmith_r1Tm6fXswo(p_0_PaoM8U7CTD, proxy_XO5o9tCA8z, &(p_2_HUj9jR7ajP));
return proxy_ret_Y4ly5cl08H;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_4szdR3NBQq(x) (x)
#define Tag2_realsmith_4szdR3NBQq(x) (x)
#define Tag3_realsmith_4szdR3NBQq(x) (x)
#define Tag4_realsmith_4szdR3NBQq(x) (x)
#include "stdlib.h"
int realsmith_4szdR3NBQq(int rfr_station_realsmith_4szdR3NBQq, unsigned long addr_realsmith_4szdR3NBQq) {
    int ret_realsmith_4szdR3NBQq = 0, num_try_realsmith_4szdR3NBQq = 0;
    /*bef_stmt:17183*/
unsigned long paddr_realsmith_4szdR3NBQq = Tag1_realsmith_4szdR3NBQq(/*unsigned long:17325:17325:17183:e*/addr_realsmith_4szdR3NBQq) & 0xffffffffe0ULL;
/*aft_stmt:17183*/
    unsigned long mflags_realsmith_4szdR3NBQq;
    do {
        mflags_realsmith_4szdR3NBQq = 0;
        /*bef_stmt:17263*/
ret_realsmith_4szdR3NBQq = (Tag2_realsmith_4szdR3NBQq(/*unsigned long:17325:17325:17263:e*/paddr_realsmith_4szdR3NBQq) != 0) ? 0 : -1;
/*aft_stmt:17263*/
        /*bef_stmt:17288*/
if (Tag3_realsmith_4szdR3NBQq(/*int:17325:17325:17288:e*/ret_realsmith_4szdR3NBQq) == 0)
            return 0;
/*aft_stmt:17288*/
    } while (++num_try_realsmith_4szdR3NBQq < 10000);
    /*bef_stmt:17323*/
return Tag4_realsmith_4szdR3NBQq(/*int:17325:17325:17323:e*/ret_realsmith_4szdR3NBQq);
/*aft_stmt:17323*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_LAIsiYaGzL(x) (x)
#define Tag2_realsmith_LAIsiYaGzL(x) (x)
#define Tag3_realsmith_LAIsiYaGzL(x) (x)
#define Tag4_realsmith_LAIsiYaGzL(x) (x)
#define Tag5_realsmith_LAIsiYaGzL(x) (x)
#define Tag6_realsmith_LAIsiYaGzL(x) (x)
#define Tag7_realsmith_LAIsiYaGzL(x) (x)
#define Tag8_realsmith_LAIsiYaGzL(x) (x)
#define Tag9_realsmith_LAIsiYaGzL(x) (x)
#define Tag10_realsmith_LAIsiYaGzL(x) (x)
#define Tag11_realsmith_LAIsiYaGzL(x) (x)
#include "stdlib.h"
struct {
    unsigned char cmd_off_realsmith_LAIsiYaGzL;
    unsigned char cmd_auto_realsmith_LAIsiYaGzL;
} cmd_realsmith_LAIsiYaGzL;
struct {
    unsigned char moff_realsmith_LAIsiYaGzL;
} mcmd_realsmith_LAIsiYaGzL;
struct {
    int mcmd_enable_realsmith_LAIsiYaGzL;
    int fanreg_realsmith_LAIsiYaGzL;
} ctrl_cfg_realsmith_LAIsiYaGzL;
int fanstate_realsmith_LAIsiYaGzL = 11;
int realsmith_LAIsiYaGzL(int state_realsmith_LAIsiYaGzL) {
    unsigned char cmd_value_realsmith_LAIsiYaGzL;
    /*bef_stmt:17380*/
/*bef_stmt:17380*/
if ((Tag1_realsmith_LAIsiYaGzL(/*int:17604:17604:17380:e*/state_realsmith_LAIsiYaGzL) != 0) && (Tag2_realsmith_LAIsiYaGzL(/*int:17604:17604:17380:e*/state_realsmith_LAIsiYaGzL) != 1)) {
        state_realsmith_LAIsiYaGzL = 1;
    }
/*aft_stmt:17380*/
/*aft_stmt:17380*/
    /*bef_stmt:17449*/
/*bef_stmt:17449*/
/*bef_stmt:17449*/
cmd_value_realsmith_LAIsiYaGzL = (Tag3_realsmith_LAIsiYaGzL(/*int:17604:17604:17449:e*/state_realsmith_LAIsiYaGzL) == 0) ? Tag4_realsmith_LAIsiYaGzL(/*unsigned char:0:0:17449:e*/cmd_realsmith_LAIsiYaGzL.cmd_off_realsmith_LAIsiYaGzL) : Tag5_realsmith_LAIsiYaGzL(/*unsigned char:0:0:17449:e*/cmd_realsmith_LAIsiYaGzL.cmd_auto_realsmith_LAIsiYaGzL);
/*aft_stmt:17449*/
/*aft_stmt:17449*/
/*aft_stmt:17449*/
    /*bef_stmt:17476*/
fanstate_realsmith_LAIsiYaGzL = Tag6_realsmith_LAIsiYaGzL(/*int:17604:17604:17476:e*/state_realsmith_LAIsiYaGzL);
/*aft_stmt:17476*/
    /*bef_stmt:17506*/
int ec_write_result_realsmith_LAIsiYaGzL = Tag7_realsmith_LAIsiYaGzL(/*unsigned char:17604:17604:17506:e*/cmd_value_realsmith_LAIsiYaGzL);
/*aft_stmt:17506*/
    /*bef_stmt:17591*/
/*bef_stmt:17591*/
if (Tag8_realsmith_LAIsiYaGzL(/*int:0:0:17591:e*/ctrl_cfg_realsmith_LAIsiYaGzL.mcmd_enable_realsmith_LAIsiYaGzL) && Tag9_realsmith_LAIsiYaGzL(/*int:17604:17604:17591:e*/state_realsmith_LAIsiYaGzL) == 0) {
        /*bef_stmt:17573*/
ec_write_result_realsmith_LAIsiYaGzL = Tag10_realsmith_LAIsiYaGzL(/*unsigned char:0:0:17573:e*/mcmd_realsmith_LAIsiYaGzL.moff_realsmith_LAIsiYaGzL);
/*aft_stmt:17573*/
    }
/*aft_stmt:17591*/
/*aft_stmt:17591*/
    /*bef_stmt:17602*/
return Tag11_realsmith_LAIsiYaGzL(/*int:0:0:17602:e*/fanstate_realsmith_LAIsiYaGzL);
/*aft_stmt:17602*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_OYdPGXTHNo(x) (x)
#define Tag2_realsmith_OYdPGXTHNo(x) (x)
#define Tag3_realsmith_OYdPGXTHNo(x) (x)
#define Tag4_realsmith_OYdPGXTHNo(x) (x)
#include "stdlib.h"
int realsmith_OYdPGXTHNo(int fifosize_realsmith_OYdPGXTHNo, int irq_realsmith_OYdPGXTHNo) {
    unsigned int val_realsmith_OYdPGXTHNo;
    int ret_realsmith_OYdPGXTHNo = 0;
    val_realsmith_OYdPGXTHNo = 0;
    val_realsmith_OYdPGXTHNo &= ~(0xFF | 0xFF);
    /*bef_stmt:17223*/
val_realsmith_OYdPGXTHNo |= (Tag1_realsmith_OYdPGXTHNo(/*int:17417:17417:17223:e*/fifosize_realsmith_OYdPGXTHNo) / 2) << 8;
/*aft_stmt:17223*/
    /*bef_stmt:17263*/
val_realsmith_OYdPGXTHNo |= (Tag2_realsmith_OYdPGXTHNo(/*int:17417:17417:17263:e*/fifosize_realsmith_OYdPGXTHNo) / 2) << 16;
/*aft_stmt:17263*/
    val_realsmith_OYdPGXTHNo = 0;
    val_realsmith_OYdPGXTHNo &= ~0xFF;
    val_realsmith_OYdPGXTHNo |= 1 << 0;
    val_realsmith_OYdPGXTHNo = 0xFF;
    val_realsmith_OYdPGXTHNo |= 0x01;
    val_realsmith_OYdPGXTHNo |= 0x02;
    /*bef_stmt:17402*/
if (Tag3_realsmith_OYdPGXTHNo(/*int:17417:17417:17402:e*/irq_realsmith_OYdPGXTHNo) < 0) return -1;
/*aft_stmt:17402*/
    /*bef_stmt:17415*/
return Tag4_realsmith_OYdPGXTHNo(/*int:17417:17417:17415:e*/ret_realsmith_OYdPGXTHNo);
/*aft_stmt:17415*/
}



#include "stdlib.h"
int realsmith_hQnmd8dSRT(int ack_realsmith_hQnmd8dSRT, int *header_realsmith_hQnmd8dSRT, int request_length_realsmith_hQnmd8dSRT) {
    unsigned long long offset_realsmith_hQnmd8dSRT;
    if (ack_realsmith_hQnmd8dSRT != 1 && ack_realsmith_hQnmd8dSRT != 2)
        return -1;
    if ((header_realsmith_hQnmd8dSRT[0] & 0xF0000000) == 0x80000000)
        return 0;
    if (request_length_realsmith_hQnmd8dSRT <= 0) {
        return -1;
    }
    offset_realsmith_hQnmd8dSRT = ((unsigned long long)(header_realsmith_hQnmd8dSRT[1] & 0xFFFFFFFF) << 32) | (header_realsmith_hQnmd8dSRT[2] & 0xFFFFFFFF);
    if (offset_realsmith_hQnmd8dSRT >= request_length_realsmith_hQnmd8dSRT) {
        return 1;
    } else {
        return 2;
    }
}
int realsmith_proxy_GNRJKa0MGK(int p_0_SeyqJQrBnt, int p_1_uNxVfbRcsO, int p_2_H7aZrOXuEp) {
int proxy_adTNGwpb1d[17] = { p_1_uNxVfbRcsO, p_1_uNxVfbRcsO, 14, 89, 12, 4, p_1_uNxVfbRcsO, p_1_uNxVfbRcsO, 20, p_1_uNxVfbRcsO, 3, p_1_uNxVfbRcsO, 89, p_1_uNxVfbRcsO, p_1_uNxVfbRcsO, 45, 19 };
int proxy_ret_eQJ5SSOrLv = realsmith_hQnmd8dSRT(p_0_SeyqJQrBnt, proxy_adTNGwpb1d, p_2_H7aZrOXuEp);
return proxy_ret_eQJ5SSOrLv;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_LM4sKibaKy(x) (x)
#define Tag2_realsmith_LM4sKibaKy(x) (x)
#define Tag3_realsmith_LM4sKibaKy(x) (x)
#define Tag4_realsmith_LM4sKibaKy(x) (x)
#include "stdlib.h"
int realsmith_LM4sKibaKy(int frame_format_realsmith_LM4sKibaKy) {
    unsigned int intr_realsmith_LM4sKibaKy = 0;
    const int CCDC_FRMFMT_PROGRESSIVE_realsmith_LM4sKibaKy = 1;
    const unsigned int VPFE_VDINT1_realsmith_LM4sKibaKy = 1;
    const unsigned int VPFE_IRQ_EN_CLR_realsmith_LM4sKibaKy = 0;
    /*bef_stmt:17235*/
/*bef_stmt:17235*/
if (Tag1_realsmith_LM4sKibaKy(/*int:17251:17251:17235:e*/frame_format_realsmith_LM4sKibaKy) == Tag2_realsmith_LM4sKibaKy(/*const int:17251:17251:17235:e*/CCDC_FRMFMT_PROGRESSIVE_realsmith_LM4sKibaKy)) {
        /*bef_stmt:17215*/
intr_realsmith_LM4sKibaKy |= Tag3_realsmith_LM4sKibaKy(/*const unsigned int:17251:17251:17215:e*/VPFE_VDINT1_realsmith_LM4sKibaKy);
/*aft_stmt:17215*/
    }
/*aft_stmt:17235*/
/*aft_stmt:17235*/
    /*bef_stmt:17249*/
return Tag4_realsmith_LM4sKibaKy(/*unsigned int:17251:17251:17249:e*/intr_realsmith_LM4sKibaKy);
/*aft_stmt:17249*/
}



#include "stdlib.h"
#include "stdint.h"
struct iscsi_nopout_4YT6IU {
    unsigned int ttt_realsmith_smKNkNB2jC;
    unsigned int cmdsn_realsmith_smKNkNB2jC;
};
struct cxgbit_lro_pdu_cb_4YT6IU {
    int dlen_realsmith_smKNkNB2jC;
    int flags_realsmith_smKNkNB2jC;
    int doffset_realsmith_smKNkNB2jC;
    void *hdr_realsmith_smKNkNB2jC;
};
int realsmith_smKNkNB2jC(int payload_length_realsmith_smKNkNB2jC, int flags_realsmith_smKNkNB2jC, int error_recovery_level_realsmith_smKNkNB2jC, unsigned int ttt_realsmith_smKNkNB2jC, unsigned int cmdsn_realsmith_smKNkNB2jC) {
    unsigned char *ping_data_realsmith_smKNkNB2jC = ((void*)0);
    int ret_realsmith_smKNkNB2jC = 0;
    if (payload_length_realsmith_smKNkNB2jC < 0) {
        return -1;
    }
    if (flags_realsmith_smKNkNB2jC & 1) {
        if (error_recovery_level_realsmith_smKNkNB2jC == 0) {
            return -1;
        } else {
            return 0;
        }
    }
    if (payload_length_realsmith_smKNkNB2jC && ttt_realsmith_smKNkNB2jC == 0xFFFFFFFF) {
        ping_data_realsmith_smKNkNB2jC = (unsigned char *)(malloc(payload_length_realsmith_smKNkNB2jC + 1));
        if (!ping_data_realsmith_smKNkNB2jC) {
            return -1;
        }
        for (int i_realsmith_smKNkNB2jC = 0; i_realsmith_smKNkNB2jC < payload_length_realsmith_smKNkNB2jC; i_realsmith_smKNkNB2jC++) {
            ping_data_realsmith_smKNkNB2jC[i_realsmith_smKNkNB2jC] = 'A';
        }
        ping_data_realsmith_smKNkNB2jC[payload_length_realsmith_smKNkNB2jC] = '\0';
        (free(ping_data_realsmith_smKNkNB2jC));
    }
    return ret_realsmith_smKNkNB2jC;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_yoKrur0jmi(x) (x)
#define Tag2_realsmith_yoKrur0jmi(x) (x)
#define Tag3_realsmith_yoKrur0jmi(x) (x)
#define Tag4_realsmith_yoKrur0jmi(x) (x)
#define Tag5_realsmith_yoKrur0jmi(x) (x)
#include "stdlib.h"
struct emac_board_info_OKg8jS {
    int duplex_realsmith_yoKrur0jmi;
    long speed_realsmith_yoKrur0jmi;
    long link_realsmith_yoKrur0jmi;
    int ndev_realsmith_yoKrur0jmi;
    int phy_interface_realsmith_yoKrur0jmi;
    int phy_node_realsmith_yoKrur0jmi;
};
int realsmith_yoKrur0jmi(int ndev_realsmith_yoKrur0jmi, int phy_node_realsmith_yoKrur0jmi, int phy_interface_realsmith_yoKrur0jmi) {
    struct emac_board_info_OKg8jS db_realsmith_yoKrur0jmi;
    /*bef_stmt:17261*/
db_realsmith_yoKrur0jmi.ndev_realsmith_yoKrur0jmi = Tag1_realsmith_yoKrur0jmi(/*int:17500:17500:17261:e*/ndev_realsmith_yoKrur0jmi);
/*aft_stmt:17261*/
    /*bef_stmt:17298*/
db_realsmith_yoKrur0jmi.phy_node_realsmith_yoKrur0jmi = Tag2_realsmith_yoKrur0jmi(/*int:17500:17500:17298:e*/phy_node_realsmith_yoKrur0jmi);
/*aft_stmt:17298*/
    /*bef_stmt:17319*/
db_realsmith_yoKrur0jmi.phy_interface_realsmith_yoKrur0jmi = Tag3_realsmith_yoKrur0jmi(/*int:17500:17500:17319:e*/phy_interface_realsmith_yoKrur0jmi);
/*aft_stmt:17319*/
    /*bef_stmt:17378*/
int phydev_realsmith_yoKrur0jmi = (Tag4_realsmith_yoKrur0jmi(/*int:17500:17500:17378:e*/db_realsmith_yoKrur0jmi.phy_node_realsmith_yoKrur0jmi) != 0) ? 1 : 0;
/*aft_stmt:17378*/
    /*bef_stmt:17403*/
if (!Tag5_realsmith_yoKrur0jmi(/*int:17500:17500:17403:e*/phydev_realsmith_yoKrur0jmi)) {
        return -1;
    }
/*aft_stmt:17403*/
    int SPEED_100_realsmith_yoKrur0jmi = 100;
    db_realsmith_yoKrur0jmi.link_realsmith_yoKrur0jmi = 0;
    db_realsmith_yoKrur0jmi.speed_realsmith_yoKrur0jmi = 0;
    db_realsmith_yoKrur0jmi.duplex_realsmith_yoKrur0jmi = -1;
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_WHp2E1XwVt(x) (x)
#include "stdlib.h"
struct hclge_dev_PgFbGV {
    unsigned long vector_irq_realsmith_WHp2E1XwVt;
};
int realsmith_WHp2E1XwVt(unsigned long vector_irq_realsmith_WHp2E1XwVt) {
    struct hclge_dev_PgFbGV hdev_realsmith_WHp2E1XwVt;
    /*bef_stmt:17159*/
hdev_realsmith_WHp2E1XwVt.vector_irq_realsmith_WHp2E1XwVt = /*TAG1:STA*/((unsigned long)(realsmith_fqrZZvuAm1((int)(vector_irq_realsmith_WHp2E1XwVt)+(-16))+(int)(vector_irq_realsmith_WHp2E1XwVt)-(99))+vector_irq_realsmith_WHp2E1XwVt)/*TAG1:END:vector_irq_realsmith_WHp2E1XwVt*/;
/*aft_stmt:17159*/
    return 0;
}



#include "stdlib.h"
struct gfargrp_clrer2 {
    unsigned long regs_realsmith_Wz0279nQWx;
};
int realsmith_Wz0279nQWx(int *regs_array_realsmith_Wz0279nQWx) {
    int i_realsmith_Wz0279nQWx;
    int unmap_count_realsmith_Wz0279nQWx = 0;
    for (i_realsmith_Wz0279nQWx = 0; i_realsmith_Wz0279nQWx < 10; i_realsmith_Wz0279nQWx++) {
        if (regs_array_realsmith_Wz0279nQWx[i_realsmith_Wz0279nQWx]) {
            unmap_count_realsmith_Wz0279nQWx++;
        }
    }
    return unmap_count_realsmith_Wz0279nQWx;
}
int realsmith_proxy_hvO3P8dggb(int p_0_lBFMiqqv59) {
int proxy_r9K1MnDm62[16] = { 3, 52, p_0_lBFMiqqv59, p_0_lBFMiqqv59, 88, 26, 13, 4, 52, p_0_lBFMiqqv59, 99, 57, 30, 75, 52, p_0_lBFMiqqv59 };
int proxy_ret_sNQmZKRZ9t = realsmith_Wz0279nQWx(proxy_r9K1MnDm62);
return proxy_ret_sNQmZKRZ9t;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_9aqS5BdYOn(x) (x)
#define Tag2_realsmith_9aqS5BdYOn(x) (x)
#define Tag3_realsmith_9aqS5BdYOn(x) (x)
#define Tag4_realsmith_9aqS5BdYOn(x) (x)
#define Tag5_realsmith_9aqS5BdYOn(x) (x)
#define Tag6_realsmith_9aqS5BdYOn(x) (x)
#include "stddef.h"
int realsmith_9aqS5BdYOn(int pid_realsmith_9aqS5BdYOn, int next_to_try_realsmith_9aqS5BdYOn, int nr_cpus_realsmith_9aqS5BdYOn) {
    int cpuset_realsmith_9aqS5BdYOn[1024] = {0};
    /*bef_stmt:843*/
/*bef_stmt:843*/
if (Tag1_realsmith_9aqS5BdYOn(/*int:931:931:843:e*/next_to_try_realsmith_9aqS5BdYOn) == Tag2_realsmith_9aqS5BdYOn(/*int:931:931:843:e*/nr_cpus_realsmith_9aqS5BdYOn))
        return -1;
/*aft_stmt:843*/
/*aft_stmt:843*/
    /*bef_stmt:918*/
/*bef_stmt:918*/
while (Tag3_realsmith_9aqS5BdYOn(/*int:931:931:918:e*/next_to_try_realsmith_9aqS5BdYOn) < Tag4_realsmith_9aqS5BdYOn(/*int:931:931:918:e*/nr_cpus_realsmith_9aqS5BdYOn)) {
        /*bef_stmt:893*/
cpuset_realsmith_9aqS5BdYOn[Tag5_realsmith_9aqS5BdYOn(/*int:931:931:893:e*/next_to_try_realsmith_9aqS5BdYOn)] = 1;
/*aft_stmt:893*/
        if (1)
            break;
        next_to_try_realsmith_9aqS5BdYOn++;
    }
/*aft_stmt:918*/
/*aft_stmt:918*/
    /*bef_stmt:929*/
return Tag6_realsmith_9aqS5BdYOn(/*int:931:931:929:e*/next_to_try_realsmith_9aqS5BdYOn);
/*aft_stmt:929*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_i9lTLf4LIt(x) (x)
#define Tag2_realsmith_i9lTLf4LIt(x) (x)
#define Tag3_realsmith_i9lTLf4LIt(x) (x)
#define Tag4_realsmith_i9lTLf4LIt(x) (x)
#define Tag5_realsmith_i9lTLf4LIt(x) (x)
#include "stdlib.h"
int realsmith_i9lTLf4LIt(int resp_len_realsmith_i9lTLf4LIt, unsigned long resp_data_realsmith_i9lTLf4LIt, int target_mbli_did_realsmith_i9lTLf4LIt) {
    int rc_realsmith_i9lTLf4LIt = 0;
    /*bef_stmt:17197*/
if (Tag1_realsmith_i9lTLf4LIt(/*int:17330:17330:17197:e*/resp_len_realsmith_i9lTLf4LIt) < sizeof(unsigned long)) {
                              ;
        rc_realsmith_i9lTLf4LIt = -5;
        goto exit;
    }
/*aft_stmt:17197*/
    /*bef_stmt:17224*/
unsigned long attrib_res_realsmith_i9lTLf4LIt = Tag2_realsmith_i9lTLf4LIt(/*unsigned long:17330:17330:17224:e*/resp_data_realsmith_i9lTLf4LIt);
/*aft_stmt:17224*/
    /*bef_stmt:17269*/
if (Tag3_realsmith_i9lTLf4LIt(/*unsigned long:17330:17330:17269:e*/attrib_res_realsmith_i9lTLf4LIt) & 0x0f) {
                                ;
        rc_realsmith_i9lTLf4LIt = -5;
        goto exit;
    }
/*aft_stmt:17269*/
    /*bef_stmt:17313*/
rc_realsmith_i9lTLf4LIt = (Tag4_realsmith_i9lTLf4LIt(/*int:17330:17330:17313:e*/target_mbli_did_realsmith_i9lTLf4LIt) == 1) ? 0 : -1;
/*aft_stmt:17313*/
/*bef_stmt:17326*/
exit:
    return Tag5_realsmith_i9lTLf4LIt(/*int:17330:17330:17326:e*/rc_realsmith_i9lTLf4LIt);
/*aft_stmt:17326*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_GFU6okTE8p(x) (x)
#define Tag2_realsmith_proxy_GFU6okTE8p(x) (x)
#define Tag3_realsmith_proxy_GFU6okTE8p(x) (x)
#define Tag4_realsmith_proxy_GFU6okTE8p(x) (x)
#define Tag5_realsmith_proxy_GFU6okTE8p(x) (x)
#define Tag6_realsmith_proxy_GFU6okTE8p(x) (x)
#define Tag7_realsmith_proxy_GFU6okTE8p(x) (x)
#define Tag8_realsmith_proxy_GFU6okTE8p(x) (x)
#include "stdlib.h"
int realsmith_v2kEHhzsWm(int ep_stat_reqs_realsmith_v2kEHhzsWm, int req_done_status_realsmith_v2kEHhzsWm, unsigned long *pflags_realsmith_v2kEHhzsWm) {
    int USB_DIR_IN_realsmith_v2kEHhzsWm = 1;
    /*bef_stmt:17200*/
/*bef_stmt:17200*/
int increment_realsmith_v2kEHhzsWm = (Tag1_realsmith_proxy_GFU6okTE8p(/*int:17267:17267:17200:e*/ep_stat_reqs_realsmith_v2kEHhzsWm) != Tag2_realsmith_proxy_GFU6okTE8p(/*int:17267:17267:17200:e*/USB_DIR_IN_realsmith_v2kEHhzsWm)) ? 1 : 0;
/*aft_stmt:17200*/
/*aft_stmt:17200*/
    /*bef_stmt:17214*/
ep_stat_reqs_realsmith_v2kEHhzsWm += Tag3_realsmith_proxy_GFU6okTE8p(/*int:17267:17267:17214:e*/increment_realsmith_v2kEHhzsWm);
/*aft_stmt:17214*/
    /*bef_stmt:17265*/
/*bef_stmt:17265*/
return Tag4_realsmith_proxy_GFU6okTE8p(/*int:17267:17267:17265:e*/req_done_status_realsmith_v2kEHhzsWm) + (0 + Tag5_realsmith_proxy_GFU6okTE8p(/*unsigned long:17267:17267:17265:e*/*pflags_realsmith_v2kEHhzsWm));
/*aft_stmt:17265*/
/*aft_stmt:17265*/
}
int realsmith_proxy_GFU6okTE8p(int p_0_OLTwhU9ZgF, int p_1_jdqslqtb9U, unsigned long p_2_8YBwD5AvwL) {
/*bef_stmt:17421*/
/*bef_stmt:17421*/
int proxy_ret_Nu7ufO11Gi = realsmith_v2kEHhzsWm(Tag6_realsmith_proxy_GFU6okTE8p(/*int:17433:17433:17421:e*/p_0_OLTwhU9ZgF), Tag7_realsmith_proxy_GFU6okTE8p(/*int:17433:17433:17421:e*/p_1_jdqslqtb9U), &(p_2_8YBwD5AvwL));
/*aft_stmt:17421*/
/*aft_stmt:17421*/
/*bef_stmt:17431*/
return Tag8_realsmith_proxy_GFU6okTE8p(/*int:17433:17433:17431:e*/proxy_ret_Nu7ufO11Gi);
/*aft_stmt:17431*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_S5SF8pFI0o(x) (x)
#define Tag2_realsmith_S5SF8pFI0o(x) (x)
#define Tag3_realsmith_S5SF8pFI0o(x) (x)
#define Tag4_realsmith_S5SF8pFI0o(x) (x)
#define Tag5_realsmith_S5SF8pFI0o(x) (x)
#define Tag6_realsmith_S5SF8pFI0o(x) (x)
#include "stdbool.h"
struct amdgpu_device_A2l0ot {
    bool atif_valid_realsmith_S5SF8pFI0o;
    int backlight_caps_valid_realsmith_S5SF8pFI0o;
    int min_input_signal_realsmith_S5SF8pFI0o;
    int max_input_signal_realsmith_S5SF8pFI0o;
};
int realsmith_S5SF8pFI0o(int atif_valid_realsmith_S5SF8pFI0o, int backlight_caps_valid_realsmith_S5SF8pFI0o, int min_input_signal_realsmith_S5SF8pFI0o, int max_input_signal_realsmith_S5SF8pFI0o) {
    struct amdgpu_device_A2l0ot adev_realsmith_S5SF8pFI0o;
    /*bef_stmt:746*/
adev_realsmith_S5SF8pFI0o.atif_valid_realsmith_S5SF8pFI0o = /*TAG1:STA*/((int)(realsmith_proxy_GJyjbb8c10((int)(atif_valid_realsmith_S5SF8pFI0o)+(-2), (int)(atif_valid_realsmith_S5SF8pFI0o)+(53), (int)(atif_valid_realsmith_S5SF8pFI0o)+(1), (int)(atif_valid_realsmith_S5SF8pFI0o)+(-9), (int)(atif_valid_realsmith_S5SF8pFI0o)+(-30), (int)(atif_valid_realsmith_S5SF8pFI0o)+(-33))+(int)(atif_valid_realsmith_S5SF8pFI0o)-(8287))+atif_valid_realsmith_S5SF8pFI0o)/*TAG1:END:atif_valid_realsmith_S5SF8pFI0o*/;
/*aft_stmt:746*/
    /*bef_stmt:781*/
adev_realsmith_S5SF8pFI0o.backlight_caps_valid_realsmith_S5SF8pFI0o = Tag2_realsmith_S5SF8pFI0o(/*int:871:871:781:e*/backlight_caps_valid_realsmith_S5SF8pFI0o);
/*aft_stmt:781*/
    /*bef_stmt:802*/
adev_realsmith_S5SF8pFI0o.min_input_signal_realsmith_S5SF8pFI0o = Tag3_realsmith_S5SF8pFI0o(/*int:871:871:802:e*/min_input_signal_realsmith_S5SF8pFI0o);
/*aft_stmt:802*/
    /*bef_stmt:823*/
adev_realsmith_S5SF8pFI0o.max_input_signal_realsmith_S5SF8pFI0o = Tag4_realsmith_S5SF8pFI0o(/*int:871:871:823:e*/max_input_signal_realsmith_S5SF8pFI0o);
/*aft_stmt:823*/
    /*bef_stmt:852*/
if (!Tag5_realsmith_S5SF8pFI0o(/*_Bool:871:871:852:e*/adev_realsmith_S5SF8pFI0o.atif_valid_realsmith_S5SF8pFI0o)) {
        return 0;
    }
/*aft_stmt:852*/
    /*bef_stmt:869*/
return /*TAG6:STA*/((adev_realsmith_S5SF8pFI0o.backlight_caps_valid_realsmith_S5SF8pFI0o) + (g_29FPQX) - -16)/*TAG6:END:adev_realsmith_S5SF8pFI0o.backlight_caps_valid_realsmith_S5SF8pFI0o*/;
g_29FPQX = -16 + (adev_realsmith_S5SF8pFI0o.backlight_caps_valid_realsmith_S5SF8pFI0o - (98));
/*aft_stmt:869*/
}



#include "stdlib.h"
int realsmith_bBynZHrezQ(int regmap_realsmith_bBynZHrezQ, int adp5061_chg_curr_realsmith_bBynZHrezQ, unsigned int *adp5061_const_ichg_realsmith_bBynZHrezQ, int array_size_realsmith_bBynZHrezQ) {
    unsigned int regval_realsmith_bBynZHrezQ;
    int ret_realsmith_bBynZHrezQ = 0;
    regval_realsmith_bBynZHrezQ = (adp5061_chg_curr_realsmith_bBynZHrezQ);
    regval_realsmith_bBynZHrezQ = ((regval_realsmith_bBynZHrezQ & 0x3C) >> 2);
    if (regval_realsmith_bBynZHrezQ >= array_size_realsmith_bBynZHrezQ)
        regval_realsmith_bBynZHrezQ = array_size_realsmith_bBynZHrezQ - 1;
    return adp5061_const_ichg_realsmith_bBynZHrezQ[regval_realsmith_bBynZHrezQ] * 1000;
}
int realsmith_proxy_vUEo4RGLCf(int p_0_CPYzEGPbKq, int p_1_T6epiMtu6K, unsigned int p_2_M7qZ3XEdNZ, int p_3_ah0ig2wAFi) {
unsigned int proxy_OoIHUCldvz[16] = { 49, p_2_M7qZ3XEdNZ, 21, 36, p_2_M7qZ3XEdNZ, 84, 30, p_2_M7qZ3XEdNZ, p_2_M7qZ3XEdNZ, 57, 77, p_2_M7qZ3XEdNZ, p_2_M7qZ3XEdNZ, p_2_M7qZ3XEdNZ, p_2_M7qZ3XEdNZ, 39 };
int proxy_ret_4J5vViirYX = realsmith_bBynZHrezQ(p_0_CPYzEGPbKq, p_1_T6epiMtu6K, proxy_OoIHUCldvz, p_3_ah0ig2wAFi);
return proxy_ret_4J5vViirYX;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_IAkxwQNleP(x) (x)
#define Tag2_realsmith_IAkxwQNleP(x) (x)
#define Tag3_realsmith_IAkxwQNleP(x) (x)
#define Tag4_realsmith_IAkxwQNleP(x) (x)
#define Tag5_realsmith_IAkxwQNleP(x) (x)
#include "stdint.h"
int realsmith_IAkxwQNleP(int mta_reg_count_realsmith_IAkxwQNleP, int hash_value_realsmith_IAkxwQNleP) {
    int hash_bit_realsmith_IAkxwQNleP, hash_reg_realsmith_IAkxwQNleP, mta_realsmith_IAkxwQNleP;
    /*bef_stmt:2086*/
/*bef_stmt:2086*/
hash_reg_realsmith_IAkxwQNleP = (Tag1_realsmith_IAkxwQNleP(/*int:2163:2163:2086:e*/hash_value_realsmith_IAkxwQNleP) >> 5) & (Tag2_realsmith_IAkxwQNleP(/*int:2163:2163:2086:e*/mta_reg_count_realsmith_IAkxwQNleP) - 1);
/*aft_stmt:2086*/
/*aft_stmt:2086*/
    /*bef_stmt:2109*/
hash_bit_realsmith_IAkxwQNleP = Tag3_realsmith_IAkxwQNleP(/*int:2163:2163:2109:e*/hash_value_realsmith_IAkxwQNleP) & 0x1F;
/*aft_stmt:2109*/
    mta_realsmith_IAkxwQNleP = 0;
    /*bef_stmt:2148*/
mta_realsmith_IAkxwQNleP |= (1 << Tag4_realsmith_IAkxwQNleP(/*int:2163:2163:2148:e*/hash_bit_realsmith_IAkxwQNleP));
/*aft_stmt:2148*/
    /*bef_stmt:2161*/
return Tag5_realsmith_IAkxwQNleP(/*int:2163:2163:2161:e*/mta_realsmith_IAkxwQNleP);
/*aft_stmt:2161*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_gZVuZ47XnD(x) (x)
#define Tag2_realsmith_gZVuZ47XnD(x) (x)
#define Tag3_realsmith_gZVuZ47XnD(x) (x)
#define Tag4_realsmith_gZVuZ47XnD(x) (x)
#define Tag5_realsmith_gZVuZ47XnD(x) (x)
#define Tag6_realsmith_gZVuZ47XnD(x) (x)
#define Tag7_realsmith_gZVuZ47XnD(x) (x)
#include "stdint.h"
int realsmith_gZVuZ47XnD(unsigned int class_1_dsisr_realsmith_gZVuZ47XnD, unsigned int class_0_pending_realsmith_gZVuZ47XnD, unsigned int sched_flags_realsmith_gZVuZ47XnD, unsigned int status_realsmith_gZVuZ47XnD) {
    unsigned long int dsisr_realsmith_gZVuZ47XnD;
    unsigned int stopped_realsmith_gZVuZ47XnD;
    stopped_realsmith_gZVuZ47XnD = 0x00000001 | 0x00000002 | 0x00000004 | 0x00000008;
/*bef_stmt:2170*/
/*bef_stmt:2170*/
top:
    if (Tag1_realsmith_gZVuZ47XnD(/*unsigned int:2283:2283:2170:e*/status_realsmith_gZVuZ47XnD) & Tag2_realsmith_gZVuZ47XnD(/*unsigned int:2283:2283:2170:e*/stopped_realsmith_gZVuZ47XnD)) {
        /*bef_stmt:2152*/
if (Tag3_realsmith_gZVuZ47XnD(/*unsigned int:2283:2283:2152:e*/status_realsmith_gZVuZ47XnD) & 0x00000010)
            goto top;
/*aft_stmt:2152*/
        return 1;
    }
/*aft_stmt:2170*/
/*aft_stmt:2170*/
    /*bef_stmt:2198*/
if (Tag4_realsmith_gZVuZ47XnD(/*unsigned int:2283:2283:2198:e*/sched_flags_realsmith_gZVuZ47XnD) & 0x00000020)
        return 1;
/*aft_stmt:2198*/
    /*bef_stmt:2216*/
dsisr_realsmith_gZVuZ47XnD = Tag5_realsmith_gZVuZ47XnD(/*unsigned int:2283:2283:2216:e*/class_1_dsisr_realsmith_gZVuZ47XnD);
/*aft_stmt:2216*/
    /*bef_stmt:2256*/
if (Tag6_realsmith_gZVuZ47XnD(/*unsigned long:2283:2283:2256:e*/dsisr_realsmith_gZVuZ47XnD) & (0x00000040 | 0x00000080))
        return 1;
/*aft_stmt:2256*/
    /*bef_stmt:2273*/
if (Tag7_realsmith_gZVuZ47XnD(/*unsigned int:2283:2283:2273:e*/class_0_pending_realsmith_gZVuZ47XnD))
        return 1;
/*aft_stmt:2273*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_cGdANih05R(x) (x)
#define Tag2_realsmith_proxy_cGdANih05R(x) (x)
#define Tag3_realsmith_proxy_cGdANih05R(x) (x)
#define Tag4_realsmith_proxy_cGdANih05R(x) (x)
#include "stdlib.h"
int realsmith_3jlJpXEo8r(unsigned long regmap_realsmith_3jlJpXEo8r, int channel_realsmith_3jlJpXEo8r, unsigned long *fifo_realsmith_3jlJpXEo8r, unsigned long *miscdev_realsmith_3jlJpXEo8r) {
    int HICR5_realsmith_3jlJpXEo8r = 0;
    /*bef_stmt:17174*/
switch (Tag1_realsmith_proxy_cGdANih05R(/*int:17331:17331:17174:e*/channel_realsmith_3jlJpXEo8r)) {
    case 0:
        HICR5_realsmith_3jlJpXEo8r &= ~(0x4 | 0x1);
        break;
    case 1:
        HICR5_realsmith_3jlJpXEo8r &= ~(0x8 | 0x2);
        break;
    default:
        return -1;
    }
/*aft_stmt:17174*/
    *fifo_realsmith_3jlJpXEo8r = 0;
    *miscdev_realsmith_3jlJpXEo8r = 0;
    return 0;
}
int realsmith_proxy_cGdANih05R(unsigned long p_0_o3jiOH2jhF, int p_1_5JReQeHHdf, unsigned long p_2_c9eMQccD7e, unsigned long p_3_vQPrOlZFYa) {
/*bef_stmt:17522*/
/*bef_stmt:17522*/
int proxy_ret_3til6CRlX6 = realsmith_3jlJpXEo8r(Tag2_realsmith_proxy_cGdANih05R(/*unsigned long:17534:17534:17522:e*/p_0_o3jiOH2jhF), Tag3_realsmith_proxy_cGdANih05R(/*int:17534:17534:17522:e*/p_1_5JReQeHHdf), &(p_2_c9eMQccD7e), &(p_3_vQPrOlZFYa));
/*aft_stmt:17522*/
/*aft_stmt:17522*/
/*bef_stmt:17532*/
return Tag4_realsmith_proxy_cGdANih05R(/*int:17534:17534:17532:e*/proxy_ret_3til6CRlX6);
/*aft_stmt:17532*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_nLSLSb0gIt(x) (x)
#define Tag2_realsmith_nLSLSb0gIt(x) (x)
#define Tag3_realsmith_nLSLSb0gIt(x) (x)
#define Tag4_realsmith_nLSLSb0gIt(x) (x)
#include "stdlib.h"
int realsmith_nLSLSb0gIt(int fb_blank_realsmith_nLSLSb0gIt, int power_realsmith_nLSLSb0gIt, unsigned int actual_brightness_realsmith_nLSLSb0gIt) {
    unsigned int intensity_realsmith_nLSLSb0gIt;
    /*bef_stmt:17202*/
/*bef_stmt:17202*/
/*bef_stmt:17202*/
if (Tag1_realsmith_nLSLSb0gIt(/*int:17220:17220:17202:e*/fb_blank_realsmith_nLSLSb0gIt) == 1 && Tag2_realsmith_nLSLSb0gIt(/*int:17220:17220:17202:e*/power_realsmith_nLSLSb0gIt) == 1)
        intensity_realsmith_nLSLSb0gIt = Tag3_realsmith_nLSLSb0gIt(/*unsigned int:17220:17220:17202:e*/actual_brightness_realsmith_nLSLSb0gIt);
    else
        intensity_realsmith_nLSLSb0gIt = 0;
/*aft_stmt:17202*/
/*aft_stmt:17202*/
/*aft_stmt:17202*/
    /*bef_stmt:17218*/
return Tag4_realsmith_nLSLSb0gIt(/*unsigned int:17220:17220:17218:e*/intensity_realsmith_nLSLSb0gIt);
/*aft_stmt:17218*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_d4RtYIuBnI(x) (x)
#define Tag2_realsmith_d4RtYIuBnI(x) (x)
#define Tag3_realsmith_d4RtYIuBnI(x) (x)
#define Tag4_realsmith_d4RtYIuBnI(x) (x)
#define Tag5_realsmith_d4RtYIuBnI(x) (x)
#define Tag6_realsmith_d4RtYIuBnI(x) (x)
#define Tag7_realsmith_d4RtYIuBnI(x) (x)
#include "stdlib.h"
struct {
    unsigned long dma_lo_realsmith_d4RtYIuBnI;
    int dma_md_realsmith_d4RtYIuBnI;
    int dma_hi_realsmith_d4RtYIuBnI;
} st_dma_realsmith_d4RtYIuBnI;
unsigned long realsmith_d4RtYIuBnI(int dma_lo_realsmith_d4RtYIuBnI, int dma_md_realsmith_d4RtYIuBnI, int dma_hi_realsmith_d4RtYIuBnI) {
    unsigned long adr_realsmith_d4RtYIuBnI;
    /*bef_stmt:17246*/
st_dma_realsmith_d4RtYIuBnI.dma_lo_realsmith_d4RtYIuBnI = Tag1_realsmith_d4RtYIuBnI(/*int:17430:17430:17246:e*/dma_lo_realsmith_d4RtYIuBnI);
/*aft_stmt:17246*/
    /*bef_stmt:17280*/
st_dma_realsmith_d4RtYIuBnI.dma_md_realsmith_d4RtYIuBnI = Tag2_realsmith_d4RtYIuBnI(/*int:17430:17430:17280:e*/dma_md_realsmith_d4RtYIuBnI);
/*aft_stmt:17280*/
    /*bef_stmt:17301*/
st_dma_realsmith_d4RtYIuBnI.dma_hi_realsmith_d4RtYIuBnI = Tag3_realsmith_d4RtYIuBnI(/*int:17430:17430:17301:e*/dma_hi_realsmith_d4RtYIuBnI);
/*aft_stmt:17301*/
    /*bef_stmt:17322*/
adr_realsmith_d4RtYIuBnI = Tag4_realsmith_d4RtYIuBnI(/*unsigned long:0:0:17322:e*/st_dma_realsmith_d4RtYIuBnI.dma_lo_realsmith_d4RtYIuBnI);
/*aft_stmt:17322*/
    /*bef_stmt:17366*/
adr_realsmith_d4RtYIuBnI |= (Tag5_realsmith_d4RtYIuBnI(/*int:0:0:17366:e*/st_dma_realsmith_d4RtYIuBnI.dma_md_realsmith_d4RtYIuBnI) & 0xff) << 8;
/*aft_stmt:17366*/
    /*bef_stmt:17415*/
adr_realsmith_d4RtYIuBnI |= (Tag6_realsmith_d4RtYIuBnI(/*int:0:0:17415:e*/st_dma_realsmith_d4RtYIuBnI.dma_hi_realsmith_d4RtYIuBnI) & 0xff) << 16;
/*aft_stmt:17415*/
    /*bef_stmt:17428*/
return Tag7_realsmith_d4RtYIuBnI(/*unsigned long:17430:17430:17428:e*/adr_realsmith_d4RtYIuBnI);
/*aft_stmt:17428*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Ik3C7j9nTi(x) (x)
#define Tag2_realsmith_Ik3C7j9nTi(x) (x)
#define Tag3_realsmith_Ik3C7j9nTi(x) (x)
#define Tag4_realsmith_Ik3C7j9nTi(x) (x)
#define Tag5_realsmith_Ik3C7j9nTi(x) (x)
#define Tag6_realsmith_Ik3C7j9nTi(x) (x)
#define Tag7_realsmith_Ik3C7j9nTi(x) (x)
#define Tag8_realsmith_Ik3C7j9nTi(x) (x)
#define Tag9_realsmith_Ik3C7j9nTi(x) (x)
#define Tag10_realsmith_Ik3C7j9nTi(x) (x)
#define Tag11_realsmith_Ik3C7j9nTi(x) (x)
#define Tag12_realsmith_Ik3C7j9nTi(x) (x)
#include "stdlib.h"
int realsmith_Ik3C7j9nTi(int left_realsmith_Ik3C7j9nTi, int right_realsmith_Ik3C7j9nTi) {
    int v_realsmith_Ik3C7j9nTi, b_realsmith_Ik3C7j9nTi;
    /*bef_stmt:17328*/
/*bef_stmt:17328*/
if (Tag1_realsmith_Ik3C7j9nTi(/*int:17378:17378:17328:e*/left_realsmith_Ik3C7j9nTi) >= Tag2_realsmith_Ik3C7j9nTi(/*int:17378:17378:17328:e*/right_realsmith_Ik3C7j9nTi)) {
        /*bef_stmt:17175*/
v_realsmith_Ik3C7j9nTi = Tag3_realsmith_Ik3C7j9nTi(/*int:17378:17378:17175:e*/left_realsmith_Ik3C7j9nTi) << 10;
/*aft_stmt:17175*/
        /*bef_stmt:17230*/
/*bef_stmt:17230*/
/*bef_stmt:17230*/
b_realsmith_Ik3C7j9nTi = Tag4_realsmith_Ik3C7j9nTi(/*int:17378:17378:17230:e*/left_realsmith_Ik3C7j9nTi) ? (0x8000 * Tag5_realsmith_Ik3C7j9nTi(/*int:17378:17378:17230:e*/right_realsmith_Ik3C7j9nTi)) / Tag6_realsmith_Ik3C7j9nTi(/*int:17378:17378:17230:e*/left_realsmith_Ik3C7j9nTi) : 0x8000;
/*aft_stmt:17230*/
/*aft_stmt:17230*/
/*aft_stmt:17230*/
    } else {
        /*bef_stmt:17257*/
v_realsmith_Ik3C7j9nTi = Tag7_realsmith_Ik3C7j9nTi(/*int:17378:17378:17257:e*/right_realsmith_Ik3C7j9nTi) << 10;
/*aft_stmt:17257*/
        /*bef_stmt:17320*/
/*bef_stmt:17320*/
/*bef_stmt:17320*/
b_realsmith_Ik3C7j9nTi = Tag8_realsmith_Ik3C7j9nTi(/*int:17378:17378:17320:e*/right_realsmith_Ik3C7j9nTi) ? 0xffff - (0x8000 * Tag9_realsmith_Ik3C7j9nTi(/*int:17378:17378:17320:e*/left_realsmith_Ik3C7j9nTi)) / Tag10_realsmith_Ik3C7j9nTi(/*int:17378:17378:17320:e*/right_realsmith_Ik3C7j9nTi) : 0x8000;
/*aft_stmt:17320*/
/*aft_stmt:17320*/
/*aft_stmt:17320*/
    }
/*aft_stmt:17328*/
/*aft_stmt:17328*/
    /*bef_stmt:17376*/
/*bef_stmt:17376*/
return (Tag11_realsmith_Ik3C7j9nTi(/*int:17378:17378:17376:e*/v_realsmith_Ik3C7j9nTi) << 16) | (Tag12_realsmith_Ik3C7j9nTi(/*int:17378:17378:17376:e*/b_realsmith_Ik3C7j9nTi) & 0xFFFF);
/*aft_stmt:17376*/
/*aft_stmt:17376*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_LEZwrGUMPg(x) (x)
#define Tag2_realsmith_LEZwrGUMPg(x) (x)
#include "stdlib.h"
int realsmith_LEZwrGUMPg(int phy_mode_realsmith_LEZwrGUMPg) {
    /*bef_stmt:17105*/
int tx_disabled_realsmith_LEZwrGUMPg = /*TAG1:STA*/((phy_mode_realsmith_LEZwrGUMPg) + (g_AB9GOX[0]) - 4)/*TAG1:END:phy_mode_realsmith_LEZwrGUMPg*/ & 4;
g_AB9GOX[0] = 4 + (phy_mode_realsmith_LEZwrGUMPg - (85));
g_031K19 = -65 + (phy_mode_realsmith_LEZwrGUMPg - (85));
/*aft_stmt:17105*/
    /*bef_stmt:17115*/
return /*TAG2:STA*/((int)(realsmith_Ye5g0WuJsf((int)(tx_disabled_realsmith_LEZwrGUMPg)+(89))+(int)(tx_disabled_realsmith_LEZwrGUMPg)-(4))+tx_disabled_realsmith_LEZwrGUMPg)/*TAG2:END:tx_disabled_realsmith_LEZwrGUMPg*/;
/*aft_stmt:17115*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_hipH08VMCq(x) (x)
#define Tag2_realsmith_hipH08VMCq(x) (x)
#define Tag3_realsmith_hipH08VMCq(x) (x)
#define Tag4_realsmith_hipH08VMCq(x) (x)
#include "stdlib.h"
int realsmith_hipH08VMCq(int pdev_value_realsmith_hipH08VMCq) {
    int result_realsmith_hipH08VMCq = 0;
    int imx28_pinctrl_data_realsmith_hipH08VMCq = 0;
    /*bef_stmt:17182*/
if (Tag1_realsmith_hipH08VMCq(/*int:17197:17197:17182:e*/pdev_value_realsmith_hipH08VMCq) > 0) {
        /*bef_stmt:17157*/
/*bef_stmt:17157*/
result_realsmith_hipH08VMCq = Tag2_realsmith_hipH08VMCq(/*int:17197:17197:17157:e*/pdev_value_realsmith_hipH08VMCq) + Tag3_realsmith_hipH08VMCq(/*int:17197:17197:17157:e*/imx28_pinctrl_data_realsmith_hipH08VMCq);
/*aft_stmt:17157*/
/*aft_stmt:17157*/
    } else {
        result_realsmith_hipH08VMCq = -1;
    }
/*aft_stmt:17182*/
    /*bef_stmt:17195*/
return Tag4_realsmith_hipH08VMCq(/*int:17197:17197:17195:e*/result_realsmith_hipH08VMCq);
/*aft_stmt:17195*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_eLcxpdZZcR(x) (x)
#define Tag2_realsmith_eLcxpdZZcR(x) (x)
#include "stdlib.h"
int realsmith_eLcxpdZZcR(int hwcap2_realsmith_eLcxpdZZcR, int cacheline_buf_realsmith_eLcxpdZZcR) {
    /*bef_stmt:17119*/
if (!Tag1_realsmith_eLcxpdZZcR(/*int:17163:17163:17119:e*/hwcap2_realsmith_eLcxpdZZcR)) {
        return 0;
    }
/*aft_stmt:17119*/
    /*bef_stmt:17154*/
int result_realsmith_eLcxpdZZcR = Tag2_realsmith_eLcxpdZZcR(/*int:17163:17163:17154:e*/cacheline_buf_realsmith_eLcxpdZZcR) + 1;
/*aft_stmt:17154*/
    return 1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag2_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag3_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag4_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag5_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag6_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag7_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag8_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag9_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag10_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag11_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag12_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag13_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag14_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag15_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag16_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag17_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag18_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag19_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag20_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag21_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag22_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag23_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag24_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag25_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag26_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag27_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag28_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag29_realsmith_proxy_536zPMgUzU(x) (x)
#define Tag30_realsmith_proxy_536zPMgUzU(x) (x)
#include "limits.h"
int realsmith_s1YgY3TjdW(int whence_realsmith_s1YgY3TjdW, long l_start_realsmith_s1YgY3TjdW, int l_len_realsmith_s1YgY3TjdW, long f_pos_realsmith_s1YgY3TjdW, long *fl_start_realsmith_s1YgY3TjdW, long *fl_end_realsmith_s1YgY3TjdW) {
    const long OFFSET_MAX_realsmith_s1YgY3TjdW = 9223372036854775807L;
    const int EINVAL_realsmith_s1YgY3TjdW = -1;
    const int EOVERFLOW_realsmith_s1YgY3TjdW = -2;
    /*bef_stmt:751*/
switch (Tag1_realsmith_proxy_536zPMgUzU(/*int:1308:1308:751:e*/whence_realsmith_s1YgY3TjdW)) {
        case 0:
            *fl_start_realsmith_s1YgY3TjdW = 0;
            break;
        /*bef_stmt:797*/
case 1:
            *fl_start_realsmith_s1YgY3TjdW = Tag2_realsmith_proxy_536zPMgUzU(/*long:1308:1308:797:e*/f_pos_realsmith_s1YgY3TjdW);
/*aft_stmt:797*/
            break;
        /*bef_stmt:831*/
case 2:
            *fl_start_realsmith_s1YgY3TjdW = Tag3_realsmith_proxy_536zPMgUzU(/*const long:1308:1308:831:e*/OFFSET_MAX_realsmith_s1YgY3TjdW);
/*aft_stmt:831*/
            break;
        /*bef_stmt:878*/
default:
            return /*TAG4:STA*/((EINVAL_realsmith_s1YgY3TjdW) + (g_MW3YJP[4]) - -86)/*TAG4:END:EINVAL_realsmith_s1YgY3TjdW*/;
g_MW3YJP[4] = -86 + (EINVAL_realsmith_s1YgY3TjdW - (-1));
/*aft_stmt:878*/
    }
/*aft_stmt:751*/
    /*bef_stmt:935*/
/*bef_stmt:935*/
/*bef_stmt:935*/
/*bef_stmt:935*/
if (Tag5_realsmith_proxy_536zPMgUzU(/*long:1308:1308:935:e*/l_start_realsmith_s1YgY3TjdW) > Tag6_realsmith_proxy_536zPMgUzU(/*const long:1308:1308:935:e*/OFFSET_MAX_realsmith_s1YgY3TjdW) - Tag7_realsmith_proxy_536zPMgUzU(/*long:1308:1308:935:e*/*fl_start_realsmith_s1YgY3TjdW))
        return Tag8_realsmith_proxy_536zPMgUzU(/*const int:1308:1308:935:e*/EOVERFLOW_realsmith_s1YgY3TjdW);
/*aft_stmt:935*/
/*aft_stmt:935*/
/*aft_stmt:935*/
/*aft_stmt:935*/
    /*bef_stmt:956*/
*fl_start_realsmith_s1YgY3TjdW += Tag9_realsmith_proxy_536zPMgUzU(/*long:1308:1308:956:e*/l_start_realsmith_s1YgY3TjdW);
/*aft_stmt:956*/
    /*bef_stmt:995*/
/*bef_stmt:995*/
if (Tag10_realsmith_proxy_536zPMgUzU(/*long:1308:1308:995:e*/*fl_start_realsmith_s1YgY3TjdW) < 0)
        return Tag11_realsmith_proxy_536zPMgUzU(/*const int:1308:1308:995:e*/EINVAL_realsmith_s1YgY3TjdW);
/*aft_stmt:995*/
/*aft_stmt:995*/
    /*bef_stmt:1296*/
/*bef_stmt:1296*/
if (Tag12_realsmith_proxy_536zPMgUzU(/*int:1308:1308:1296:e*/l_len_realsmith_s1YgY3TjdW) > 0) {
        /*bef_stmt:1071*/
/*bef_stmt:1071*/
/*bef_stmt:1071*/
/*bef_stmt:1071*/
if (Tag13_realsmith_proxy_536zPMgUzU(/*int:1308:1308:1071:e*/l_len_realsmith_s1YgY3TjdW) - 1 > Tag14_realsmith_proxy_536zPMgUzU(/*const long:1308:1308:1071:e*/OFFSET_MAX_realsmith_s1YgY3TjdW) - Tag15_realsmith_proxy_536zPMgUzU(/*long:1308:1308:1071:e*/*fl_start_realsmith_s1YgY3TjdW))
            return Tag16_realsmith_proxy_536zPMgUzU(/*const int:1308:1308:1071:e*/EOVERFLOW_realsmith_s1YgY3TjdW);
/*aft_stmt:1071*/
/*aft_stmt:1071*/
/*aft_stmt:1071*/
/*aft_stmt:1071*/
        /*bef_stmt:1123*/
/*bef_stmt:1123*/
*fl_end_realsmith_s1YgY3TjdW = Tag17_realsmith_proxy_536zPMgUzU(/*long:1308:1308:1123:e*/*fl_start_realsmith_s1YgY3TjdW) + Tag18_realsmith_proxy_536zPMgUzU(/*int:1308:1308:1123:e*/l_len_realsmith_s1YgY3TjdW) - 1;
/*aft_stmt:1123*/
/*aft_stmt:1123*/
    } else if (Tag19_realsmith_proxy_536zPMgUzU(/*int:1308:1308:1296:e*/l_len_realsmith_s1YgY3TjdW) < 0) {
        /*bef_stmt:1193*/
/*bef_stmt:1193*/
/*bef_stmt:1193*/
if (Tag20_realsmith_proxy_536zPMgUzU(/*long:1308:1308:1193:e*/*fl_start_realsmith_s1YgY3TjdW) + Tag21_realsmith_proxy_536zPMgUzU(/*int:1308:1308:1193:e*/l_len_realsmith_s1YgY3TjdW) < 0)
            return Tag22_realsmith_proxy_536zPMgUzU(/*const int:1308:1308:1193:e*/EINVAL_realsmith_s1YgY3TjdW);
/*aft_stmt:1193*/
/*aft_stmt:1193*/
/*aft_stmt:1193*/
        /*bef_stmt:1231*/
*fl_end_realsmith_s1YgY3TjdW = Tag23_realsmith_proxy_536zPMgUzU(/*long:1308:1308:1231:e*/*fl_start_realsmith_s1YgY3TjdW) - 1;
/*aft_stmt:1231*/
        /*bef_stmt:1255*/
*fl_start_realsmith_s1YgY3TjdW += Tag24_realsmith_proxy_536zPMgUzU(/*int:1308:1308:1255:e*/l_len_realsmith_s1YgY3TjdW);
/*aft_stmt:1255*/
    } else {
        /*bef_stmt:1283*/
*fl_end_realsmith_s1YgY3TjdW = Tag25_realsmith_proxy_536zPMgUzU(/*const long:1308:1308:1283:e*/OFFSET_MAX_realsmith_s1YgY3TjdW);
/*aft_stmt:1283*/
    }
/*aft_stmt:1296*/
/*aft_stmt:1296*/
    return 0;
}
int realsmith_proxy_536zPMgUzU(int p_0_88K8arFg1K, long p_1_8rWcacWWYA, int p_2_mFnfso9Tqp, long p_3_t8EqKOz2OV, long p_4_SqRd2fHRvt, long p_5_710wwcbds0) {
/*bef_stmt:1558*/
/*bef_stmt:1558*/
/*bef_stmt:1558*/
/*bef_stmt:1558*/
int proxy_ret_8x5Iy9Pf6t = realsmith_s1YgY3TjdW(/*TAG26:STA*/((int)(realsmith_i9lTLf4LIt((int)(p_0_88K8arFg1K)+(13), (unsigned long)(p_0_88K8arFg1K)+(40), (int)(p_0_88K8arFg1K)+(-6))+(int)(p_0_88K8arFg1K)-(13))+p_0_88K8arFg1K)/*TAG26:END:p_0_88K8arFg1K*/, /*TAG27:STA*/((p_1_8rWcacWWYA) + (g_R4L6DT) - 124)/*TAG27:END:p_1_8rWcacWWYA*/, Tag28_realsmith_proxy_536zPMgUzU(/*int:1570:1570:1558:e*/p_2_mFnfso9Tqp), Tag29_realsmith_proxy_536zPMgUzU(/*long:1570:1570:1558:e*/p_3_t8EqKOz2OV), &(p_4_SqRd2fHRvt), &(p_5_710wwcbds0));
g_R4L6DT = 124 + (p_1_8rWcacWWYA - (41));
/*aft_stmt:1558*/
/*aft_stmt:1558*/
/*aft_stmt:1558*/
/*aft_stmt:1558*/
/*bef_stmt:1568*/
return /*TAG30:STA*/((int)(realsmith_proxy_GFU6okTE8p((int)(proxy_ret_8x5Iy9Pf6t)+(49), (int)(proxy_ret_8x5Iy9Pf6t)+(66), -65)+(int)(proxy_ret_8x5Iy9Pf6t)-(-1))+proxy_ret_8x5Iy9Pf6t)/*TAG30:END:proxy_ret_8x5Iy9Pf6t*/;
/*aft_stmt:1568*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_gSkT4JcL8o(x) (x)
#define Tag2_realsmith_gSkT4JcL8o(x) (x)
#define Tag3_realsmith_gSkT4JcL8o(x) (x)
#define Tag4_realsmith_gSkT4JcL8o(x) (x)
#include "stdlib.h"
struct rt2x00_dev_qDITql {
    void *cache_realsmith_gSkT4JcL8o;
    void *eeprom_realsmith_gSkT4JcL8o;
    void *rf_realsmith_gSkT4JcL8o;
    long unsigned int eeprom_size_realsmith_gSkT4JcL8o;
    long unsigned int rf_size_realsmith_gSkT4JcL8o;
};
int realsmith_gSkT4JcL8o(int eeprom_size_realsmith_gSkT4JcL8o, int rf_size_realsmith_gSkT4JcL8o) {
    struct rt2x00_dev_qDITql rt2x00dev_realsmith_gSkT4JcL8o;
    /*bef_stmt:17232*/
rt2x00dev_realsmith_gSkT4JcL8o.eeprom_size_realsmith_gSkT4JcL8o = Tag1_realsmith_gSkT4JcL8o(/*int:17619:17619:17232:e*/eeprom_size_realsmith_gSkT4JcL8o);
/*aft_stmt:17232*/
    /*bef_stmt:17271*/
rt2x00dev_realsmith_gSkT4JcL8o.rf_size_realsmith_gSkT4JcL8o = Tag2_realsmith_gSkT4JcL8o(/*int:17619:17619:17271:e*/rf_size_realsmith_gSkT4JcL8o);
/*aft_stmt:17271*/
    rt2x00dev_realsmith_gSkT4JcL8o.cache_realsmith_gSkT4JcL8o = (malloc(1024));
    if (!rt2x00dev_realsmith_gSkT4JcL8o.cache_realsmith_gSkT4JcL8o) {
        return -1;
    }
    /*bef_stmt:17392*/
rt2x00dev_realsmith_gSkT4JcL8o.eeprom_realsmith_gSkT4JcL8o = (malloc(Tag3_realsmith_gSkT4JcL8o(/*unsigned long:17619:17619:17392:e*/rt2x00dev_realsmith_gSkT4JcL8o.eeprom_size_realsmith_gSkT4JcL8o)));
/*aft_stmt:17392*/
    if (!rt2x00dev_realsmith_gSkT4JcL8o.eeprom_realsmith_gSkT4JcL8o) {
        (free(rt2x00dev_realsmith_gSkT4JcL8o.cache_realsmith_gSkT4JcL8o));
        return -1;
    }
    /*bef_stmt:17511*/
rt2x00dev_realsmith_gSkT4JcL8o.rf_realsmith_gSkT4JcL8o = (malloc(Tag4_realsmith_gSkT4JcL8o(/*unsigned long:17619:17619:17511:e*/rt2x00dev_realsmith_gSkT4JcL8o.rf_size_realsmith_gSkT4JcL8o)));
/*aft_stmt:17511*/
    if (!rt2x00dev_realsmith_gSkT4JcL8o.rf_realsmith_gSkT4JcL8o) {
        (free(rt2x00dev_realsmith_gSkT4JcL8o.cache_realsmith_gSkT4JcL8o));
        (free(rt2x00dev_realsmith_gSkT4JcL8o.eeprom_realsmith_gSkT4JcL8o));
        return -1;
    }
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_lXZlQ6aPVR(x) (x)
#define Tag2_realsmith_lXZlQ6aPVR(x) (x)
#include "stdint.h"
int realsmith_lXZlQ6aPVR(unsigned int ctrl_realsmith_lXZlQ6aPVR, unsigned int eoi_realsmith_lXZlQ6aPVR) {
    /*bef_stmt:2006*/
unsigned int pending_realsmith_lXZlQ6aPVR = Tag1_realsmith_lXZlQ6aPVR(/*unsigned int:2041:2041:2006:e*/eoi_realsmith_lXZlQ6aPVR);
/*aft_stmt:2006*/
    ctrl_realsmith_lXZlQ6aPVR &= ~1;
    /*bef_stmt:2039*/
return Tag2_realsmith_lXZlQ6aPVR(/*unsigned int:2041:2041:2039:e*/ctrl_realsmith_lXZlQ6aPVR);
/*aft_stmt:2039*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_mUM0Uy14Ct(x) (x)
#define Tag2_realsmith_mUM0Uy14Ct(x) (x)
#define Tag3_realsmith_mUM0Uy14Ct(x) (x)
#define Tag4_realsmith_mUM0Uy14Ct(x) (x)
#include "stdlib.h"
struct abx500_chargalg_lqlBIW {
    int maintenance_timer_expired_realsmith_mUM0Uy14Ct;
    int maintenance_timer_realsmith_mUM0Uy14Ct; // Dummy placeholder for the timer
};
int realsmith_mUM0Uy14Ct(int maintenance_timer_status_realsmith_mUM0Uy14Ct) {
    struct abx500_chargalg_lqlBIW di_realsmith_mUM0Uy14Ct;
    /*bef_stmt:17165*/
di_realsmith_mUM0Uy14Ct.maintenance_timer_realsmith_mUM0Uy14Ct = /*TAG1:STA*/((int)(realsmith_proxy_536zPMgUzU((int)(maintenance_timer_status_realsmith_mUM0Uy14Ct)+(3), (long)(maintenance_timer_status_realsmith_mUM0Uy14Ct)+(26), (int)(maintenance_timer_status_realsmith_mUM0Uy14Ct)+(53), (long)(maintenance_timer_status_realsmith_mUM0Uy14Ct)+(29), (long)(maintenance_timer_status_realsmith_mUM0Uy14Ct)+(-40), (long)(maintenance_timer_status_realsmith_mUM0Uy14Ct)+(-75))+(int)(maintenance_timer_status_realsmith_mUM0Uy14Ct)-(14))+maintenance_timer_status_realsmith_mUM0Uy14Ct)/*TAG1:END:maintenance_timer_status_realsmith_mUM0Uy14Ct*/;
/*aft_stmt:17165*/
    /*bef_stmt:17236*/
int timer_cancelled_realsmith_mUM0Uy14Ct = (/*TAG2:STA*/((int)(realsmith_gSkT4JcL8o((int)(di_realsmith_mUM0Uy14Ct.maintenance_timer_realsmith_mUM0Uy14Ct)+(38), (int)(di_realsmith_mUM0Uy14Ct.maintenance_timer_realsmith_mUM0Uy14Ct)+(40))+(int)(di_realsmith_mUM0Uy14Ct.maintenance_timer_realsmith_mUM0Uy14Ct)-(15))+di_realsmith_mUM0Uy14Ct.maintenance_timer_realsmith_mUM0Uy14Ct)/*TAG2:END:di_realsmith_mUM0Uy14Ct.maintenance_timer_realsmith_mUM0Uy14Ct*/ >= 0) ? 1 : 0;
/*aft_stmt:17236*/
    /*bef_stmt:17267*/
if (/*TAG3:STA*/((int)(realsmith_proxy_vUEo4RGLCf((int)(timer_cancelled_realsmith_mUM0Uy14Ct)+(77), (int)(timer_cancelled_realsmith_mUM0Uy14Ct)+(74), (unsigned int)(timer_cancelled_realsmith_mUM0Uy14Ct)+(27), (int)(timer_cancelled_realsmith_mUM0Uy14Ct)+(33))+(int)(timer_cancelled_realsmith_mUM0Uy14Ct)-(21001))+timer_cancelled_realsmith_mUM0Uy14Ct)/*TAG3:END:timer_cancelled_realsmith_mUM0Uy14Ct*/) {
        di_realsmith_mUM0Uy14Ct.maintenance_timer_expired_realsmith_mUM0Uy14Ct = 0;
    }
/*aft_stmt:17267*/
    /*bef_stmt:17284*/
return /*TAG4:STA*/((int)(realsmith_lXZlQ6aPVR((unsigned int)(di_realsmith_mUM0Uy14Ct.maintenance_timer_expired_realsmith_mUM0Uy14Ct)+(51), (unsigned int)(di_realsmith_mUM0Uy14Ct.maintenance_timer_expired_realsmith_mUM0Uy14Ct)+(60))+(int)(di_realsmith_mUM0Uy14Ct.maintenance_timer_expired_realsmith_mUM0Uy14Ct)-(50))+di_realsmith_mUM0Uy14Ct.maintenance_timer_expired_realsmith_mUM0Uy14Ct)/*TAG4:END:di_realsmith_mUM0Uy14Ct.maintenance_timer_expired_realsmith_mUM0Uy14Ct*/;
/*aft_stmt:17284*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_yqAjswVc5S(x) (x)
#define Tag2_realsmith_yqAjswVc5S(x) (x)
#define Tag3_realsmith_yqAjswVc5S(x) (x)
#define Tag4_realsmith_yqAjswVc5S(x) (x)
#define Tag5_realsmith_yqAjswVc5S(x) (x)
#include "stdlib.h"
int realsmith_yqAjswVc5S(int flags_realsmith_yqAjswVc5S) {
    int REQ_F_FAIL_LINK_realsmith_yqAjswVc5S = 1 << 0;
    int REQ_F_LINK_realsmith_yqAjswVc5S = 1 << 1;
    int result_realsmith_yqAjswVc5S = 0;
    /*bef_stmt:17237*/
/*bef_stmt:17237*/
if (/*TAG1:STA*/((int)(realsmith_tKK6lqPPJD((int)(flags_realsmith_yqAjswVc5S)+(35), (int)(flags_realsmith_yqAjswVc5S)+(61), (unsigned long)(flags_realsmith_yqAjswVc5S)+(71), (int)(flags_realsmith_yqAjswVc5S)+(42), (unsigned long)(flags_realsmith_yqAjswVc5S)+(71))+(int)(flags_realsmith_yqAjswVc5S)-(-11))+flags_realsmith_yqAjswVc5S)/*TAG1:END:flags_realsmith_yqAjswVc5S*/ & /*TAG2:STA*/((int)(realsmith_bhGstComE4((unsigned int)(REQ_F_LINK_realsmith_yqAjswVc5S)+(36))+(int)(REQ_F_LINK_realsmith_yqAjswVc5S)-(3))+REQ_F_LINK_realsmith_yqAjswVc5S)/*TAG2:END:REQ_F_LINK_realsmith_yqAjswVc5S*/) {
        /*bef_stmt:17228*/
/*bef_stmt:17228*/
if (Tag3_realsmith_yqAjswVc5S(/*int:17250:17250:17228:e*/flags_realsmith_yqAjswVc5S) & Tag4_realsmith_yqAjswVc5S(/*int:17250:17250:17228:e*/REQ_F_FAIL_LINK_realsmith_yqAjswVc5S)) {
            result_realsmith_yqAjswVc5S = -1;
        } else {
            result_realsmith_yqAjswVc5S = 1;
        }
/*aft_stmt:17228*/
/*aft_stmt:17228*/
    }
/*aft_stmt:17237*/
/*aft_stmt:17237*/
    /*bef_stmt:17248*/
return /*TAG5:STA*/((result_realsmith_yqAjswVc5S) + (g_M65HXT) - 43)/*TAG5:END:result_realsmith_yqAjswVc5S*/;
g_M65HXT = 43 + (result_realsmith_yqAjswVc5S - (0));
/*aft_stmt:17248*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_izEaNJI5Ja(x) (x)
#define Tag2_realsmith_proxy_izEaNJI5Ja(x) (x)
#define Tag3_realsmith_proxy_izEaNJI5Ja(x) (x)
#define Tag4_realsmith_proxy_izEaNJI5Ja(x) (x)
#define Tag5_realsmith_proxy_izEaNJI5Ja(x) (x)
#define Tag6_realsmith_proxy_izEaNJI5Ja(x) (x)
#define Tag7_realsmith_proxy_izEaNJI5Ja(x) (x)
#include "stdlib.h"
int realsmith_Mx4KMEvZai(int pos_realsmith_Mx4KMEvZai, int *obj_realsmith_Mx4KMEvZai) {
    unsigned int ret_realsmith_Mx4KMEvZai;
    /*bef_stmt:17162*/
/*bef_stmt:17162*/
ret_realsmith_Mx4KMEvZai = (Tag1_realsmith_proxy_izEaNJI5Ja(/*int:17241:17241:17162:e*/pos_realsmith_Mx4KMEvZai) < 100) ? Tag2_realsmith_proxy_izEaNJI5Ja(/*int:17241:17241:17162:e*/pos_realsmith_Mx4KMEvZai) : 0;
/*aft_stmt:17162*/
/*aft_stmt:17162*/
    /*bef_stmt:17201*/
if (Tag3_realsmith_proxy_izEaNJI5Ja(/*unsigned int:17241:17241:17201:e*/ret_realsmith_Mx4KMEvZai) == 0) {
        pos_realsmith_Mx4KMEvZai += 26;
    }
/*aft_stmt:17201*/
    /*bef_stmt:17225*/
*obj_realsmith_Mx4KMEvZai = Tag4_realsmith_proxy_izEaNJI5Ja(/*unsigned int:17241:17241:17225:e*/ret_realsmith_Mx4KMEvZai);
/*aft_stmt:17225*/
    /*bef_stmt:17239*/
return Tag5_realsmith_proxy_izEaNJI5Ja(/*unsigned int:17241:17241:17239:e*/ret_realsmith_Mx4KMEvZai);
/*aft_stmt:17239*/
}
int realsmith_proxy_izEaNJI5Ja(int p_0_jFvhsXsG4V, int p_1_nyZ4TZi23X) {
/*bef_stmt:17369*/
int proxy_ret_d5il6kLGcE = realsmith_Mx4KMEvZai(Tag6_realsmith_proxy_izEaNJI5Ja(/*int:17381:17381:17369:e*/p_0_jFvhsXsG4V), &(p_1_nyZ4TZi23X));
/*aft_stmt:17369*/
/*bef_stmt:17379*/
return Tag7_realsmith_proxy_izEaNJI5Ja(/*int:17381:17381:17379:e*/proxy_ret_d5il6kLGcE);
/*aft_stmt:17379*/
}




#include "stdlib.h"
struct format_OPV4X1 {
    unsigned long pixelformat_realsmith_Cfx6426LlT;
    int buffersize_realsmith_Cfx6426LlT;
};
int realsmith_Cfx6426LlT(int num_formats_realsmith_Cfx6426LlT, unsigned long pixelformat_input_realsmith_Cfx6426LlT, int *buffersize_output_realsmith_Cfx6426LlT) {
    struct format_OPV4X1 formats_realsmith_Cfx6426LlT[] = {
        {0x32315659, 1024},
        {0x47504A4D, 2048},
        {0x59565955, 4096}
    };
    unsigned long pixelformat_realsmith_Cfx6426LlT = 0;
    int buffersize_realsmith_Cfx6426LlT = 0;
    for (int i_realsmith_Cfx6426LlT = 0; i_realsmith_Cfx6426LlT < num_formats_realsmith_Cfx6426LlT; i_realsmith_Cfx6426LlT++) {
        if (formats_realsmith_Cfx6426LlT[i_realsmith_Cfx6426LlT].pixelformat_realsmith_Cfx6426LlT == pixelformat_input_realsmith_Cfx6426LlT) {
            pixelformat_realsmith_Cfx6426LlT = formats_realsmith_Cfx6426LlT[i_realsmith_Cfx6426LlT].pixelformat_realsmith_Cfx6426LlT;
            buffersize_realsmith_Cfx6426LlT = formats_realsmith_Cfx6426LlT[i_realsmith_Cfx6426LlT].buffersize_realsmith_Cfx6426LlT;
            *buffersize_output_realsmith_Cfx6426LlT = buffersize_realsmith_Cfx6426LlT;
            return 0;
        }
    }
    pixelformat_realsmith_Cfx6426LlT = formats_realsmith_Cfx6426LlT[0].pixelformat_realsmith_Cfx6426LlT;
    buffersize_realsmith_Cfx6426LlT = formats_realsmith_Cfx6426LlT[0].buffersize_realsmith_Cfx6426LlT;
    *buffersize_output_realsmith_Cfx6426LlT = buffersize_realsmith_Cfx6426LlT;
    return 0;
}
int realsmith_proxy_0USCysWnbr(int p_0_PDuXex6UCY, unsigned long p_1_pv85fcEpgE, int p_2_rN3kahC2tY) {
int proxy_ret_3eewS5z1dI = realsmith_Cfx6426LlT(p_0_PDuXex6UCY, p_1_pv85fcEpgE, &(p_2_rN3kahC2tY));
return proxy_ret_3eewS5z1dI;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_tQrAN14TGP(x) (x)
#define Tag2_realsmith_tQrAN14TGP(x) (x)
#define Tag3_realsmith_tQrAN14TGP(x) (x)
#define Tag4_realsmith_tQrAN14TGP(x) (x)
#include "stdlib.h"
int realsmith_tQrAN14TGP(int reg_write_ret1_realsmith_tQrAN14TGP, int reg_write_ret2_realsmith_tQrAN14TGP) {
    /*bef_stmt:17123*/
int ret_realsmith_tQrAN14TGP = Tag1_realsmith_tQrAN14TGP(/*int:17172:17172:17123:e*/reg_write_ret1_realsmith_tQrAN14TGP);
/*aft_stmt:17123*/
    /*bef_stmt:17159*/
if (Tag2_realsmith_tQrAN14TGP(/*int:17172:17172:17159:e*/ret_realsmith_tQrAN14TGP) == 0) {
        /*bef_stmt:17152*/
ret_realsmith_tQrAN14TGP = Tag3_realsmith_tQrAN14TGP(/*int:17172:17172:17152:e*/reg_write_ret2_realsmith_tQrAN14TGP);
/*aft_stmt:17152*/
    }
/*aft_stmt:17159*/
    /*bef_stmt:17170*/
return Tag4_realsmith_tQrAN14TGP(/*int:17172:17172:17170:e*/ret_realsmith_tQrAN14TGP);
/*aft_stmt:17170*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_qstUiUzSlR(x) (x)
#define Tag2_realsmith_qstUiUzSlR(x) (x)
#define Tag3_realsmith_qstUiUzSlR(x) (x)
#define Tag4_realsmith_qstUiUzSlR(x) (x)
#include "stdlib.h"
struct sirfsoc_spi_X6nW18 {
    int tx_chan_realsmith_qstUiUzSlR;
    int rx_chan_realsmith_qstUiUzSlR;
    int clk_realsmith_qstUiUzSlR;
    int bitbang_realsmith_qstUiUzSlR;
};
int realsmith_qstUiUzSlR(int tx_chan_realsmith_qstUiUzSlR, int rx_chan_realsmith_qstUiUzSlR, int clk_realsmith_qstUiUzSlR, int bitbang_realsmith_qstUiUzSlR) {
    struct sirfsoc_spi_X6nW18 sspi_realsmith_qstUiUzSlR;
    /*bef_stmt:17253*/
sspi_realsmith_qstUiUzSlR.tx_chan_realsmith_qstUiUzSlR = Tag1_realsmith_qstUiUzSlR(/*int:17418:17418:17253:e*/tx_chan_realsmith_qstUiUzSlR);
/*aft_stmt:17253*/
    /*bef_stmt:17288*/
sspi_realsmith_qstUiUzSlR.rx_chan_realsmith_qstUiUzSlR = Tag2_realsmith_qstUiUzSlR(/*int:17418:17418:17288:e*/rx_chan_realsmith_qstUiUzSlR);
/*aft_stmt:17288*/
    /*bef_stmt:17309*/
sspi_realsmith_qstUiUzSlR.clk_realsmith_qstUiUzSlR = Tag3_realsmith_qstUiUzSlR(/*int:17418:17418:17309:e*/clk_realsmith_qstUiUzSlR);
/*aft_stmt:17309*/
    /*bef_stmt:17330*/
sspi_realsmith_qstUiUzSlR.bitbang_realsmith_qstUiUzSlR = Tag4_realsmith_qstUiUzSlR(/*int:17418:17418:17330:e*/bitbang_realsmith_qstUiUzSlR);
/*aft_stmt:17330*/
    sspi_realsmith_qstUiUzSlR.bitbang_realsmith_qstUiUzSlR = 0;
    sspi_realsmith_qstUiUzSlR.clk_realsmith_qstUiUzSlR = 0;
    sspi_realsmith_qstUiUzSlR.rx_chan_realsmith_qstUiUzSlR = -1;
    sspi_realsmith_qstUiUzSlR.tx_chan_realsmith_qstUiUzSlR = -1;
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_L8Ok8dXtds(x) (x)
#define Tag2_realsmith_L8Ok8dXtds(x) (x)
#define Tag3_realsmith_L8Ok8dXtds(x) (x)
#include "stdlib.h"
int realsmith_L8Ok8dXtds(int pdev_dev_realsmith_L8Ok8dXtds, int ddata_realsmith_L8Ok8dXtds) {
    int result_realsmith_L8Ok8dXtds = 0;
    /*bef_stmt:17145*/
if (Tag1_realsmith_L8Ok8dXtds(/*int:17186:17186:17145:e*/pdev_dev_realsmith_L8Ok8dXtds)) {
        result_realsmith_L8Ok8dXtds = 1;
    }
/*aft_stmt:17145*/
    /*bef_stmt:17173*/
if (/*TAG2:STA*/((ddata_realsmith_L8Ok8dXtds) + (g_BNNLY0[0]) - 124)/*TAG2:END:ddata_realsmith_L8Ok8dXtds*/) {
        result_realsmith_L8Ok8dXtds += 1;
    }
g_BNNLY0[0] = 124 + (ddata_realsmith_L8Ok8dXtds - (58));
/*aft_stmt:17173*/
    /*bef_stmt:17184*/
return /*TAG3:STA*/((int)(realsmith_RB27OpQv7M((int)(result_realsmith_L8Ok8dXtds)+(2))+(int)(result_realsmith_L8Ok8dXtds)-(7))+result_realsmith_L8Ok8dXtds)/*TAG3:END:result_realsmith_L8Ok8dXtds*/;
/*aft_stmt:17184*/
}



#include "stdlib.h"
int realsmith_aNMi2Xr0tC(int can_access_hw_realsmith_aNMi2Xr0tC, int write_success_realsmith_aNMi2Xr0tC, int *tx_hw_pending_realsmith_aNMi2Xr0tC) {
    if (can_access_hw_realsmith_aNMi2Xr0tC) {
        if (write_success_realsmith_aNMi2Xr0tC) {
            return -1;
        }
    }
    *tx_hw_pending_realsmith_aNMi2Xr0tC = 0;
    return 0;
}
int realsmith_proxy_iF2jybNOOj(int p_0_oJ7KsmT6a8, int p_1_gUr9xfrAFG, int p_2_Kyu8fE52Tl) {
int proxy_T7BlCYwQnu[16] = { 87, 46, p_2_Kyu8fE52Tl, p_2_Kyu8fE52Tl, p_2_Kyu8fE52Tl, 13, 64, p_2_Kyu8fE52Tl, p_2_Kyu8fE52Tl, 46, 90, 80, p_2_Kyu8fE52Tl, 68, p_2_Kyu8fE52Tl, 78 };
int proxy_ret_Qdv4MLbFya = realsmith_aNMi2Xr0tC(p_0_oJ7KsmT6a8, p_1_gUr9xfrAFG, proxy_T7BlCYwQnu);
return proxy_ret_Qdv4MLbFya;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ZEAqHMoAbs(x) (x)
#define Tag2_realsmith_ZEAqHMoAbs(x) (x)
#define Tag3_realsmith_ZEAqHMoAbs(x) (x)
#include "stdbool.h"
int realsmith_ZEAqHMoAbs(int op_mode_realsmith_ZEAqHMoAbs) {
    /*bef_stmt:633*/
/*bef_stmt:633*/
/*bef_stmt:633*/
return (/*TAG1:STA*/((int)(realsmith_lTnzpqJ7IP((int)(op_mode_realsmith_ZEAqHMoAbs)+(-26))+(int)(op_mode_realsmith_ZEAqHMoAbs)-(55))+op_mode_realsmith_ZEAqHMoAbs)/*TAG1:END:op_mode_realsmith_ZEAqHMoAbs*/ == 1) ||
           (/*TAG2:STA*/((int)(realsmith_AWDuYvfUKW((int)(op_mode_realsmith_ZEAqHMoAbs)+(41), (int)(op_mode_realsmith_ZEAqHMoAbs)+(-53), (int)(op_mode_realsmith_ZEAqHMoAbs)+(-54))+(int)(op_mode_realsmith_ZEAqHMoAbs)-(6160))+op_mode_realsmith_ZEAqHMoAbs)/*TAG2:END:op_mode_realsmith_ZEAqHMoAbs*/ == 3) ||
           (/*TAG3:STA*/((int)(realsmith_hdkZIV3S4I((int)(op_mode_realsmith_ZEAqHMoAbs)+(28), (int)(op_mode_realsmith_ZEAqHMoAbs)+(19))+(int)(op_mode_realsmith_ZEAqHMoAbs)-(326))+op_mode_realsmith_ZEAqHMoAbs)/*TAG3:END:op_mode_realsmith_ZEAqHMoAbs*/ == 2);
/*aft_stmt:633*/
/*aft_stmt:633*/
/*aft_stmt:633*/
}



#include "stdlib.h"
struct ib_device_ijW0UQ {
    int *port_data_realsmith_k0F14EeNd5;
};
int realsmith_k0F14EeNd5(int *port_data_realsmith_k0F14EeNd5, int ndev_realsmith_k0F14EeNd5, unsigned int port_realsmith_k0F14EeNd5) {
    if (port_data_realsmith_k0F14EeNd5 == ((void*)0) || port_realsmith_k0F14EeNd5 >= 2)
        return -1;
    int old_ndev_realsmith_k0F14EeNd5 = port_data_realsmith_k0F14EeNd5[port_realsmith_k0F14EeNd5];
    if (old_ndev_realsmith_k0F14EeNd5 == ndev_realsmith_k0F14EeNd5) {
        return 0;
    }
    port_data_realsmith_k0F14EeNd5[port_realsmith_k0F14EeNd5] = ndev_realsmith_k0F14EeNd5;
    return 0;
}
int realsmith_proxy_WBZOqydLEf(int p_0_eVJqXRsYJf, int p_1_RuJFdVChA4, unsigned int p_2_ALa4o0oh0h) {
int proxy_r4Uv9HlB6M[18] = { p_0_eVJqXRsYJf, p_0_eVJqXRsYJf, 17, 58, p_0_eVJqXRsYJf, p_0_eVJqXRsYJf, 83, 100, 92, 67, p_0_eVJqXRsYJf, 69, p_0_eVJqXRsYJf, 62, 51, 10, p_0_eVJqXRsYJf, p_0_eVJqXRsYJf };
int proxy_ret_WlcZmCyy5w = realsmith_k0F14EeNd5(proxy_r4Uv9HlB6M, p_1_RuJFdVChA4, p_2_ALa4o0oh0h);
return proxy_ret_WlcZmCyy5w;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Ckvj2McFwy(x) (x)
#define Tag2_realsmith_Ckvj2McFwy(x) (x)
#define Tag3_realsmith_Ckvj2McFwy(x) (x)
#include "stdint.h"
#include "stdlib.h"
int realsmith_Ckvj2McFwy(int playback_shift_realsmith_Ckvj2McFwy, int capture_shift_realsmith_Ckvj2McFwy) {
    unsigned int data_realsmith_Ckvj2McFwy = 0;
    unsigned int int_st_realsmith_Ckvj2McFwy = 0;
    unsigned int master_realsmith_Ckvj2McFwy = 0;
    /*bef_stmt:17594*/
data_realsmith_Ckvj2McFwy |= (1 << Tag1_realsmith_Ckvj2McFwy(/*int:17644:17644:17594:e*/playback_shift_realsmith_Ckvj2McFwy));
/*aft_stmt:17594*/
    /*bef_stmt:17626*/
data_realsmith_Ckvj2McFwy |= (1 << Tag2_realsmith_Ckvj2McFwy(/*int:17644:17644:17626:e*/capture_shift_realsmith_Ckvj2McFwy));
/*aft_stmt:17626*/
    /*bef_stmt:17642*/
return Tag3_realsmith_Ckvj2McFwy(/*unsigned int:17644:17644:17642:e*/data_realsmith_Ckvj2McFwy);
/*aft_stmt:17642*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_NU14rFxYmV(x) (x)
#define Tag2_realsmith_NU14rFxYmV(x) (x)
#define Tag3_realsmith_NU14rFxYmV(x) (x)
#define Tag4_realsmith_NU14rFxYmV(x) (x)
#define Tag5_realsmith_NU14rFxYmV(x) (x)
#define Tag6_realsmith_NU14rFxYmV(x) (x)
#define Tag7_realsmith_NU14rFxYmV(x) (x)
#define Tag8_realsmith_NU14rFxYmV(x) (x)
#define Tag9_realsmith_NU14rFxYmV(x) (x)
#define Tag10_realsmith_NU14rFxYmV(x) (x)
#define Tag11_realsmith_NU14rFxYmV(x) (x)
#define Tag12_realsmith_NU14rFxYmV(x) (x)
#define Tag13_realsmith_NU14rFxYmV(x) (x)
#define Tag14_realsmith_NU14rFxYmV(x) (x)
#define Tag15_realsmith_NU14rFxYmV(x) (x)
#define Tag16_realsmith_NU14rFxYmV(x) (x)
#define Tag17_realsmith_NU14rFxYmV(x) (x)
#define Tag18_realsmith_NU14rFxYmV(x) (x)
#define Tag19_realsmith_NU14rFxYmV(x) (x)
#define Tag20_realsmith_NU14rFxYmV(x) (x)
#define Tag21_realsmith_NU14rFxYmV(x) (x)
#include "stdint.h"
#include "stddef.h"
int realsmith_NU14rFxYmV(int spi_realsmith_NU14rFxYmV, unsigned int read_size_realsmith_NU14rFxYmV, int status_bit_realsmith_NU14rFxYmV, int address_realsmith_NU14rFxYmV, int shift_realsmith_NU14rFxYmV, int realbits_realsmith_NU14rFxYmV) {
    /*bef_stmt:2242*/
unsigned int storage_bytes_realsmith_NU14rFxYmV = Tag1_realsmith_NU14rFxYmV(/*unsigned int:2762:2762:2242:e*/read_size_realsmith_NU14rFxYmV);
/*aft_stmt:2242*/
    /*bef_stmt:2294*/
/*bef_stmt:2294*/
unsigned int shift_value_realsmith_NU14rFxYmV = Tag2_realsmith_NU14rFxYmV(/*int:2762:2762:2294:e*/shift_realsmith_NU14rFxYmV) + (Tag3_realsmith_NU14rFxYmV(/*int:2762:2762:2294:e*/address_realsmith_NU14rFxYmV) * 8);
/*aft_stmt:2294*/
/*aft_stmt:2294*/
    unsigned short int buf16_realsmith_NU14rFxYmV;
    unsigned int buf32_realsmith_NU14rFxYmV;
    int ret_realsmith_NU14rFxYmV;
    /*bef_stmt:2361*/
switch (Tag4_realsmith_NU14rFxYmV(/*unsigned int:2762:2762:2361:e*/storage_bytes_realsmith_NU14rFxYmV)) {
    /*bef_stmt:2376*/
case 2:
        ret_realsmith_NU14rFxYmV = Tag5_realsmith_NU14rFxYmV(/*int:2762:2762:2376:e*/spi_realsmith_NU14rFxYmV);
/*aft_stmt:2376*/
        /*bef_stmt:2415*/
buf16_realsmith_NU14rFxYmV = (unsigned short int)Tag6_realsmith_NU14rFxYmV(/*int:2762:2762:2415:e*/ret_realsmith_NU14rFxYmV);
/*aft_stmt:2415*/
        /*bef_stmt:2433*/
ret_realsmith_NU14rFxYmV = Tag7_realsmith_NU14rFxYmV(/*unsigned short:2762:2762:2433:e*/buf16_realsmith_NU14rFxYmV);
/*aft_stmt:2433*/
        break;
    /*bef_stmt:2448*/
case 4:
        ret_realsmith_NU14rFxYmV = Tag8_realsmith_NU14rFxYmV(/*int:2762:2762:2448:e*/spi_realsmith_NU14rFxYmV);
/*aft_stmt:2448*/
        /*bef_stmt:2487*/
buf32_realsmith_NU14rFxYmV = (unsigned int)Tag9_realsmith_NU14rFxYmV(/*int:2762:2762:2487:e*/ret_realsmith_NU14rFxYmV);
/*aft_stmt:2487*/
        /*bef_stmt:2505*/
ret_realsmith_NU14rFxYmV = Tag10_realsmith_NU14rFxYmV(/*unsigned int:2762:2762:2505:e*/buf32_realsmith_NU14rFxYmV);
/*aft_stmt:2505*/
        break;
    default:
        return -22;
    }
/*aft_stmt:2361*/
    /*bef_stmt:2560*/
/*bef_stmt:2560*/
if (Tag11_realsmith_NU14rFxYmV(/*int:2762:2762:2560:e*/ret_realsmith_NU14rFxYmV) < 0)
        return Tag12_realsmith_NU14rFxYmV(/*int:2762:2762:2560:e*/ret_realsmith_NU14rFxYmV);
/*aft_stmt:2560*/
/*aft_stmt:2560*/
    /*bef_stmt:2591*/
/*bef_stmt:2591*/
if (Tag13_realsmith_NU14rFxYmV(/*int:2762:2762:2591:e*/ret_realsmith_NU14rFxYmV) & Tag14_realsmith_NU14rFxYmV(/*int:2762:2762:2591:e*/status_bit_realsmith_NU14rFxYmV))
        return -22;
/*aft_stmt:2591*/
/*aft_stmt:2591*/
    /*bef_stmt:2656*/
/*bef_stmt:2656*/
/*bef_stmt:2656*/
ret_realsmith_NU14rFxYmV = (Tag15_realsmith_NU14rFxYmV(/*int:2762:2762:2656:e*/ret_realsmith_NU14rFxYmV) >> Tag16_realsmith_NU14rFxYmV(/*unsigned int:2762:2762:2656:e*/shift_value_realsmith_NU14rFxYmV)) & ((1 << Tag17_realsmith_NU14rFxYmV(/*int:2762:2762:2656:e*/realbits_realsmith_NU14rFxYmV)) - 1);
/*aft_stmt:2656*/
/*aft_stmt:2656*/
/*aft_stmt:2656*/
    /*bef_stmt:2749*/
/*bef_stmt:2749*/
if (Tag18_realsmith_NU14rFxYmV(/*int:2762:2762:2749:e*/ret_realsmith_NU14rFxYmV) & (1 << (Tag19_realsmith_NU14rFxYmV(/*int:2762:2762:2749:e*/realbits_realsmith_NU14rFxYmV) - 1))) {
        /*bef_stmt:2740*/
ret_realsmith_NU14rFxYmV |= ~((1 << Tag20_realsmith_NU14rFxYmV(/*int:2762:2762:2740:e*/realbits_realsmith_NU14rFxYmV)) - 1);
/*aft_stmt:2740*/
    }
/*aft_stmt:2749*/
/*aft_stmt:2749*/
    /*bef_stmt:2760*/
return Tag21_realsmith_NU14rFxYmV(/*int:2762:2762:2760:e*/ret_realsmith_NU14rFxYmV);
/*aft_stmt:2760*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_gNgjRoXB4n(x) (x)
#define Tag2_realsmith_gNgjRoXB4n(x) (x)
#define Tag3_realsmith_gNgjRoXB4n(x) (x)
#define Tag4_realsmith_gNgjRoXB4n(x) (x)
#define Tag5_realsmith_gNgjRoXB4n(x) (x)
#define Tag6_realsmith_gNgjRoXB4n(x) (x)
#define Tag7_realsmith_gNgjRoXB4n(x) (x)
#define Tag8_realsmith_gNgjRoXB4n(x) (x)
#define Tag9_realsmith_gNgjRoXB4n(x) (x)
#define Tag10_realsmith_gNgjRoXB4n(x) (x)
#define Tag11_realsmith_gNgjRoXB4n(x) (x)
#define Tag12_realsmith_gNgjRoXB4n(x) (x)
#define Tag13_realsmith_gNgjRoXB4n(x) (x)
#define Tag14_realsmith_gNgjRoXB4n(x) (x)
#define Tag15_realsmith_gNgjRoXB4n(x) (x)
#define Tag16_realsmith_gNgjRoXB4n(x) (x)
#define Tag17_realsmith_gNgjRoXB4n(x) (x)
#define Tag18_realsmith_gNgjRoXB4n(x) (x)
#include "stdlib.h"
int realsmith_gNgjRoXB4n(int agf_bp_realsmith_gNgjRoXB4n, int agi_bp_realsmith_gNgjRoXB4n, int pag_realsmith_gNgjRoXB4n, int tp_realsmith_gNgjRoXB4n, int agno_realsmith_gNgjRoXB4n) {
    int bno_cur_realsmith_gNgjRoXB4n = 0, cnt_cur_realsmith_gNgjRoXB4n = 0, ino_cur_realsmith_gNgjRoXB4n = 0, fino_cur_realsmith_gNgjRoXB4n = 0, rmap_cur_realsmith_gNgjRoXB4n = 0, refc_cur_realsmith_gNgjRoXB4n = 0;
    /*bef_stmt:17320*/
/*bef_stmt:17320*/
if (/*TAG1:STA*/((int)(realsmith_4szdR3NBQq((int)(agf_bp_realsmith_gNgjRoXB4n)+(-58), (unsigned long)(agf_bp_realsmith_gNgjRoXB4n)+(15))+(int)(agf_bp_realsmith_gNgjRoXB4n)-(66))+agf_bp_realsmith_gNgjRoXB4n)/*TAG1:END:agf_bp_realsmith_gNgjRoXB4n*/ && /*TAG2:STA*/((pag_realsmith_gNgjRoXB4n) + (g_031K19) - -65)/*TAG2:END:pag_realsmith_gNgjRoXB4n*/) {
        bno_cur_realsmith_gNgjRoXB4n = 1;
    }
g_031K19 = -65 + (pag_realsmith_gNgjRoXB4n - (48));
/*aft_stmt:17320*/
/*aft_stmt:17320*/
    /*bef_stmt:17357*/
/*bef_stmt:17357*/
if (/*TAG3:STA*/((int)(realsmith_LAIsiYaGzL((int)(agf_bp_realsmith_gNgjRoXB4n)+(34))+(int)(agf_bp_realsmith_gNgjRoXB4n)-(67))+agf_bp_realsmith_gNgjRoXB4n)/*TAG3:END:agf_bp_realsmith_gNgjRoXB4n*/ && /*TAG4:STA*/((pag_realsmith_gNgjRoXB4n) + (g_MW3YJP[0]) - -65)/*TAG4:END:pag_realsmith_gNgjRoXB4n*/) {
        cnt_cur_realsmith_gNgjRoXB4n = 1;
    }
g_MW3YJP[0] = -65 + (pag_realsmith_gNgjRoXB4n - (48));
/*aft_stmt:17357*/
/*aft_stmt:17357*/
    /*bef_stmt:17394*/
/*bef_stmt:17394*/
if (/*TAG5:STA*/((agi_bp_realsmith_gNgjRoXB4n) + (g_M65HXT) - 43)/*TAG5:END:agi_bp_realsmith_gNgjRoXB4n*/ && /*TAG6:STA*/((pag_realsmith_gNgjRoXB4n) + (g_031K19) - -65)/*TAG6:END:pag_realsmith_gNgjRoXB4n*/) {
        ino_cur_realsmith_gNgjRoXB4n = 1;
    }
g_M65HXT = 43 + (agi_bp_realsmith_gNgjRoXB4n - (36));
g_031K19 = -65 + (pag_realsmith_gNgjRoXB4n - (48));
/*aft_stmt:17394*/
/*aft_stmt:17394*/
    /*bef_stmt:17433*/
/*bef_stmt:17433*/
if (/*TAG7:STA*/((int)(realsmith_proxy_QE9Tywpew4((int)(agi_bp_realsmith_gNgjRoXB4n)+(-22), (int)(agi_bp_realsmith_gNgjRoXB4n)+(-69), (unsigned long)(agi_bp_realsmith_gNgjRoXB4n)+(22))+(int)(agi_bp_realsmith_gNgjRoXB4n)-(36))+agi_bp_realsmith_gNgjRoXB4n)/*TAG7:END:agi_bp_realsmith_gNgjRoXB4n*/ && /*TAG8:STA*/((pag_realsmith_gNgjRoXB4n) + (g_29FPQX) - -16)/*TAG8:END:pag_realsmith_gNgjRoXB4n*/) {
        fino_cur_realsmith_gNgjRoXB4n = 1;
    }
g_29FPQX = -16 + (pag_realsmith_gNgjRoXB4n - (48));
/*aft_stmt:17433*/
/*aft_stmt:17433*/
    /*bef_stmt:17470*/
/*bef_stmt:17470*/
if (/*TAG9:STA*/((int)(realsmith_OYdPGXTHNo((int)(agf_bp_realsmith_gNgjRoXB4n)+(33), (int)(agf_bp_realsmith_gNgjRoXB4n)+(0))+(int)(agf_bp_realsmith_gNgjRoXB4n)-(66))+agf_bp_realsmith_gNgjRoXB4n)/*TAG9:END:agf_bp_realsmith_gNgjRoXB4n*/ && Tag10_realsmith_gNgjRoXB4n(/*int:17613:17613:17470:e*/pag_realsmith_gNgjRoXB4n)) {
        rmap_cur_realsmith_gNgjRoXB4n = 1;
    }
/*aft_stmt:17470*/
/*aft_stmt:17470*/
    /*bef_stmt:17507*/
/*bef_stmt:17507*/
if (/*TAG11:STA*/((int)(realsmith_proxy_GNRJKa0MGK((int)(agf_bp_realsmith_gNgjRoXB4n)+(16), (int)(agf_bp_realsmith_gNgjRoXB4n)+(-86), (int)(agf_bp_realsmith_gNgjRoXB4n)+(-10))+(int)(agf_bp_realsmith_gNgjRoXB4n)-(65))+agf_bp_realsmith_gNgjRoXB4n)/*TAG11:END:agf_bp_realsmith_gNgjRoXB4n*/ && Tag12_realsmith_gNgjRoXB4n(/*int:17613:17613:17507:e*/pag_realsmith_gNgjRoXB4n)) {
        refc_cur_realsmith_gNgjRoXB4n = 1;
    }
/*aft_stmt:17507*/
/*aft_stmt:17507*/
    /*bef_stmt:17603*/
/*bef_stmt:17603*/
/*bef_stmt:17603*/
/*bef_stmt:17603*/
/*bef_stmt:17603*/
/*bef_stmt:17603*/
if (!/*TAG13:STA*/((bno_cur_realsmith_gNgjRoXB4n) + (g_IU97RO[0]) - -90)/*TAG13:END:bno_cur_realsmith_gNgjRoXB4n*/ || !/*TAG14:STA*/((cnt_cur_realsmith_gNgjRoXB4n) + (g_MW3YJP[0]) - -65)/*TAG14:END:cnt_cur_realsmith_gNgjRoXB4n*/ || !/*TAG15:STA*/((int)(realsmith_wI4dVhZ08s((int)(ino_cur_realsmith_gNgjRoXB4n)+(93), (int)(ino_cur_realsmith_gNgjRoXB4n)+(9))+(int)(ino_cur_realsmith_gNgjRoXB4n)-(6160395))+ino_cur_realsmith_gNgjRoXB4n)/*TAG15:END:ino_cur_realsmith_gNgjRoXB4n*/ || !Tag16_realsmith_gNgjRoXB4n(/*int:17613:17613:17603:e*/fino_cur_realsmith_gNgjRoXB4n) || !/*TAG17:STA*/((rmap_cur_realsmith_gNgjRoXB4n) + (g_R4L6DT) - 124)/*TAG17:END:rmap_cur_realsmith_gNgjRoXB4n*/ || !Tag18_realsmith_gNgjRoXB4n(/*int:17613:17613:17603:e*/refc_cur_realsmith_gNgjRoXB4n)) {
        return -12;
    }
g_IU97RO[0] = -90 + (bno_cur_realsmith_gNgjRoXB4n - (1));
g_MW3YJP[0] = -65 + (cnt_cur_realsmith_gNgjRoXB4n - (1));
g_R4L6DT = 124 + (rmap_cur_realsmith_gNgjRoXB4n - (1));
/*aft_stmt:17603*/
/*aft_stmt:17603*/
/*aft_stmt:17603*/
/*aft_stmt:17603*/
/*aft_stmt:17603*/
/*aft_stmt:17603*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_T5EhAnED5D(x) (x)
#include "stdlib.h"
int realsmith_T5EhAnED5D(int client_dev_size_realsmith_T5EhAnED5D) {
    /*bef_stmt:17125*/
void *client_dev_realsmith_T5EhAnED5D = (malloc(Tag1_realsmith_T5EhAnED5D(/*int:17199:17199:17125:e*/client_dev_size_realsmith_T5EhAnED5D)));
/*aft_stmt:17125*/
    if (client_dev_realsmith_T5EhAnED5D != ((void*)0)) {
        (free(client_dev_realsmith_T5EhAnED5D));
    }
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_cpXBRcohrm(x) (x)
#define Tag2_realsmith_cpXBRcohrm(x) (x)
#define Tag3_realsmith_cpXBRcohrm(x) (x)
#define Tag4_realsmith_cpXBRcohrm(x) (x)
#define Tag5_realsmith_cpXBRcohrm(x) (x)
#define Tag6_realsmith_cpXBRcohrm(x) (x)
#include "stdlib.h"
int realsmith_cpXBRcohrm(int dev_state_realsmith_cpXBRcohrm, int backend_state_realsmith_cpXBRcohrm) {
    /*bef_stmt:17107*/
switch (Tag1_realsmith_cpXBRcohrm(/*int:17294:17294:17107:e*/backend_state_realsmith_cpXBRcohrm)) {
    /*bef_stmt:17119*/
case 129:
    case 130:
    case 131:
    case 132:
    case 128:
        return Tag2_realsmith_cpXBRcohrm(/*int:17294:17294:17119:e*/dev_state_realsmith_cpXBRcohrm);
/*aft_stmt:17119*/
    /*bef_stmt:17188*/
case 133:
        return Tag3_realsmith_cpXBRcohrm(/*int:17294:17294:17188:e*/dev_state_realsmith_cpXBRcohrm);
/*aft_stmt:17188*/
    case 134:
        return 134;
    /*bef_stmt:17227*/
/*bef_stmt:17227*/
case 136:
        if (Tag4_realsmith_cpXBRcohrm(/*int:17294:17294:17227:e*/dev_state_realsmith_cpXBRcohrm) == 136)
            return Tag5_realsmith_cpXBRcohrm(/*int:17294:17294:17227:e*/dev_state_realsmith_cpXBRcohrm);
/*aft_stmt:17227*/
/*aft_stmt:17227*/
    case 135:
        return 136;
    }
/*aft_stmt:17107*/
    /*bef_stmt:17292*/
return /*TAG6:STA*/((int)(realsmith_0IXmECUkJP((int)(dev_state_realsmith_cpXBRcohrm)+(34), (int)(dev_state_realsmith_cpXBRcohrm)+(78), (unsigned int)(dev_state_realsmith_cpXBRcohrm)+(16))+(int)(dev_state_realsmith_cpXBRcohrm)-(30))+dev_state_realsmith_cpXBRcohrm)/*TAG6:END:dev_state_realsmith_cpXBRcohrm*/;
/*aft_stmt:17292*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_aES9KBDxYW(x) (x)
#define Tag2_realsmith_aES9KBDxYW(x) (x)
#define Tag3_realsmith_aES9KBDxYW(x) (x)
#define Tag4_realsmith_aES9KBDxYW(x) (x)
#define Tag5_realsmith_aES9KBDxYW(x) (x)
#define Tag6_realsmith_aES9KBDxYW(x) (x)
#define Tag7_realsmith_aES9KBDxYW(x) (x)
#define Tag8_realsmith_aES9KBDxYW(x) (x)
#define Tag9_realsmith_aES9KBDxYW(x) (x)
#include "stdint.h"
int realsmith_aES9KBDxYW(int tx_timer_ctrl_realsmith_aES9KBDxYW, unsigned int tx_timer_ini_realsmith_aES9KBDxYW, unsigned short int tx_idx_th_realsmith_aES9KBDxYW,
                      int lev_timer_ctrl_realsmith_aES9KBDxYW, unsigned int lev_timer_ini_realsmith_aES9KBDxYW, unsigned char fifo_wm_realsmith_aES9KBDxYW,
                      int isr_timer_ctrl_realsmith_aES9KBDxYW, unsigned int isr_timer_ini_realsmith_aES9KBDxYW, unsigned char fifo_isr_wm_realsmith_aES9KBDxYW) {
    unsigned int tx_coalesce_usecs_realsmith_aES9KBDxYW, rx_coalesce_usecs_realsmith_aES9KBDxYW, rx_coalesce_usecs_irq_realsmith_aES9KBDxYW;
    /*bef_stmt:2228*/
/*bef_stmt:2228*/
if (Tag1_realsmith_aES9KBDxYW(/*int:2420:2420:2228:e*/tx_timer_ctrl_realsmith_aES9KBDxYW) == 0)
        tx_coalesce_usecs_realsmith_aES9KBDxYW = 0;
    else
        tx_coalesce_usecs_realsmith_aES9KBDxYW = /*TAG2:STA*/((tx_timer_ini_realsmith_aES9KBDxYW) + (g_BNNLY0[2]) - 85)/*TAG2:END:tx_timer_ini_realsmith_aES9KBDxYW*/;
g_BNNLY0[2] = 85 + (tx_timer_ini_realsmith_aES9KBDxYW - (36));
/*aft_stmt:2228*/
/*aft_stmt:2228*/
    /*bef_stmt:2257*/
unsigned short int tx_max_coalesced_frames_realsmith_aES9KBDxYW = /*TAG3:STA*/((unsigned short)(realsmith_d4RtYIuBnI((int)(tx_idx_th_realsmith_aES9KBDxYW)+(-6), (int)(tx_idx_th_realsmith_aES9KBDxYW)+(16), (int)(tx_idx_th_realsmith_aES9KBDxYW)+(51))+(unsigned long)(tx_idx_th_realsmith_aES9KBDxYW)-(4596512))+tx_idx_th_realsmith_aES9KBDxYW)/*TAG3:END:tx_idx_th_realsmith_aES9KBDxYW*/;
/*aft_stmt:2257*/
    /*bef_stmt:2305*/
/*bef_stmt:2305*/
if (/*TAG4:STA*/((int)(realsmith_proxy_cGdANih05R((unsigned long)(lev_timer_ctrl_realsmith_aES9KBDxYW)+(82), (int)(lev_timer_ctrl_realsmith_aES9KBDxYW)+(63), (unsigned long)(lev_timer_ctrl_realsmith_aES9KBDxYW)+(36), (unsigned long)(lev_timer_ctrl_realsmith_aES9KBDxYW)+(-38))+(int)(lev_timer_ctrl_realsmith_aES9KBDxYW)-(13))+lev_timer_ctrl_realsmith_aES9KBDxYW)/*TAG4:END:lev_timer_ctrl_realsmith_aES9KBDxYW*/ == 0)
        rx_coalesce_usecs_realsmith_aES9KBDxYW = 0;
    else
        rx_coalesce_usecs_realsmith_aES9KBDxYW = /*TAG5:STA*/((unsigned int)(realsmith_LEZwrGUMPg((int)(lev_timer_ini_realsmith_aES9KBDxYW)+(30))+(int)(lev_timer_ini_realsmith_aES9KBDxYW)-(59))+lev_timer_ini_realsmith_aES9KBDxYW)/*TAG5:END:lev_timer_ini_realsmith_aES9KBDxYW*/;
/*aft_stmt:2305*/
/*aft_stmt:2305*/
    /*bef_stmt:2334*/
unsigned char rx_max_coalesced_frames_realsmith_aES9KBDxYW = Tag6_realsmith_aES9KBDxYW(/*unsigned char:2420:2420:2334:e*/fifo_wm_realsmith_aES9KBDxYW);
/*aft_stmt:2334*/
    /*bef_stmt:2382*/
/*bef_stmt:2382*/
if (/*TAG7:STA*/((int)(realsmith_Ik3C7j9nTi((int)(isr_timer_ctrl_realsmith_aES9KBDxYW)+(-54), (int)(isr_timer_ctrl_realsmith_aES9KBDxYW)+(-57))+(int)(isr_timer_ctrl_realsmith_aES9KBDxYW)-(268443706))+isr_timer_ctrl_realsmith_aES9KBDxYW)/*TAG7:END:isr_timer_ctrl_realsmith_aES9KBDxYW*/ == 0)
        rx_coalesce_usecs_irq_realsmith_aES9KBDxYW = 0;
    else
        rx_coalesce_usecs_irq_realsmith_aES9KBDxYW = Tag8_realsmith_aES9KBDxYW(/*unsigned int:2420:2420:2382:e*/isr_timer_ini_realsmith_aES9KBDxYW);
/*aft_stmt:2382*/
/*aft_stmt:2382*/
    /*bef_stmt:2411*/
unsigned char rx_max_coalesced_frames_irq_realsmith_aES9KBDxYW = /*TAG9:STA*/((unsigned char)(realsmith_nLSLSb0gIt((int)(fifo_isr_wm_realsmith_aES9KBDxYW)+(20), (int)(fifo_isr_wm_realsmith_aES9KBDxYW)+(27), (unsigned int)(fifo_isr_wm_realsmith_aES9KBDxYW)+(72))+(int)(fifo_isr_wm_realsmith_aES9KBDxYW)-(8))+fifo_isr_wm_realsmith_aES9KBDxYW)/*TAG9:END:fifo_isr_wm_realsmith_aES9KBDxYW*/;
/*aft_stmt:2411*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_9BJXay42F8(x) (x)
#define Tag2_realsmith_9BJXay42F8(x) (x)
#define Tag3_realsmith_9BJXay42F8(x) (x)
#define Tag4_realsmith_9BJXay42F8(x) (x)
#define Tag5_realsmith_9BJXay42F8(x) (x)
#define Tag6_realsmith_9BJXay42F8(x) (x)
#include "stdlib.h"
int realsmith_9BJXay42F8(int cache_size_realsmith_9BJXay42F8, int mount_type_realsmith_9BJXay42F8) {
    int rc_realsmith_9BJXay42F8 = 0;
    int dax_cache_realsmith_9BJXay42F8 = 0;
    int dax_mnt_realsmith_9BJXay42F8 = 0;
    /*bef_stmt:17180*/
dax_cache_realsmith_9BJXay42F8 = Tag1_realsmith_9BJXay42F8(/*int:17296:17296:17180:e*/cache_size_realsmith_9BJXay42F8);
/*aft_stmt:17180*/
    /*bef_stmt:17211*/
if (Tag2_realsmith_9BJXay42F8(/*int:17296:17296:17211:e*/dax_cache_realsmith_9BJXay42F8) <= 0) {
        return -12;
    }
/*aft_stmt:17211*/
    /*bef_stmt:17226*/
dax_mnt_realsmith_9BJXay42F8 = Tag3_realsmith_9BJXay42F8(/*int:17296:17296:17226:e*/mount_type_realsmith_9BJXay42F8);
/*aft_stmt:17226*/
    /*bef_stmt:17286*/
if (Tag4_realsmith_9BJXay42F8(/*int:17296:17296:17286:e*/dax_mnt_realsmith_9BJXay42F8) < 0) {
        /*bef_stmt:17256*/
rc_realsmith_9BJXay42F8 = Tag5_realsmith_9BJXay42F8(/*int:17296:17296:17256:e*/dax_mnt_realsmith_9BJXay42F8);
/*aft_stmt:17256*/
        dax_cache_realsmith_9BJXay42F8 = 0;
        /*bef_stmt:17279*/
return Tag6_realsmith_9BJXay42F8(/*int:17296:17296:17279:e*/rc_realsmith_9BJXay42F8);
/*aft_stmt:17279*/
    }
/*aft_stmt:17286*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_lkzCqFLRCE(x) (x)
#define Tag2_realsmith_lkzCqFLRCE(x) (x)
#define Tag3_realsmith_lkzCqFLRCE(x) (x)
#define Tag4_realsmith_lkzCqFLRCE(x) (x)
#define Tag5_realsmith_lkzCqFLRCE(x) (x)
#define Tag6_realsmith_lkzCqFLRCE(x) (x)
#define Tag7_realsmith_lkzCqFLRCE(x) (x)
#define Tag8_realsmith_lkzCqFLRCE(x) (x)
#define Tag9_realsmith_lkzCqFLRCE(x) (x)
#define Tag10_realsmith_lkzCqFLRCE(x) (x)
#include "stdlib.h"
int realsmith_lkzCqFLRCE(unsigned long fpul_realsmith_lkzCqFLRCE, int n_realsmith_lkzCqFLRCE) {
    unsigned long du_realsmith_lkzCqFLRCE, dl_realsmith_lkzCqFLRCE;
    /*bef_stmt:17161*/
unsigned long x_realsmith_lkzCqFLRCE = /*TAG1:STA*/((unsigned long)(realsmith_tQrAN14TGP((int)(fpul_realsmith_lkzCqFLRCE)+(-31), (int)(fpul_realsmith_lkzCqFLRCE)+(26))+(int)(fpul_realsmith_lkzCqFLRCE)-(73))+fpul_realsmith_lkzCqFLRCE)/*TAG1:END:fpul_realsmith_lkzCqFLRCE*/;
/*aft_stmt:17161*/
    int exp_realsmith_lkzCqFLRCE = 1023 - 126;
    /*bef_stmt:17499*/
/*bef_stmt:17499*/
if (/*TAG2:STA*/((unsigned long)(realsmith_ih57TRDSrc((int)(x_realsmith_lkzCqFLRCE)+(-2))+(int)(x_realsmith_lkzCqFLRCE)-(52))+x_realsmith_lkzCqFLRCE)/*TAG2:END:x_realsmith_lkzCqFLRCE*/ != 0 && (/*TAG3:STA*/((unsigned long)(realsmith_proxy_izEaNJI5Ja((int)(x_realsmith_lkzCqFLRCE)+(0), (int)(x_realsmith_lkzCqFLRCE)+(-5))+(int)(x_realsmith_lkzCqFLRCE)-(104))+x_realsmith_lkzCqFLRCE)/*TAG3:END:x_realsmith_lkzCqFLRCE*/ & 0x7f800000) == 0) {
        /*bef_stmt:17276*/
du_realsmith_lkzCqFLRCE = (/*TAG4:STA*/((unsigned long)(realsmith_proxy_0USCysWnbr((int)(x_realsmith_lkzCqFLRCE)+(-50), (unsigned long)(x_realsmith_lkzCqFLRCE)+(-51), (int)(x_realsmith_lkzCqFLRCE)+(-53))+(int)(x_realsmith_lkzCqFLRCE)-(52))+x_realsmith_lkzCqFLRCE)/*TAG4:END:x_realsmith_lkzCqFLRCE*/ & 0x80000000);
/*aft_stmt:17276*/
        /*bef_stmt:17341*/
while ((/*TAG5:STA*/((x_realsmith_lkzCqFLRCE) + (g_R4L6DT) - 124)/*TAG5:END:x_realsmith_lkzCqFLRCE*/ & 0x00800000) == 0) {
            x_realsmith_lkzCqFLRCE <<= 1;
            exp_realsmith_lkzCqFLRCE--;
        }
g_R4L6DT = 124 + (fpul_realsmith_lkzCqFLRCE - (52));
/*aft_stmt:17341*/
        x_realsmith_lkzCqFLRCE &= 0x007fffff;
        /*bef_stmt:17412*/
/*bef_stmt:17412*/
du_realsmith_lkzCqFLRCE |= (/*TAG6:STA*/((int)(realsmith_ZEAqHMoAbs((int)(exp_realsmith_lkzCqFLRCE)+(-824))+(int)(exp_realsmith_lkzCqFLRCE)-(879))+exp_realsmith_lkzCqFLRCE)/*TAG6:END:exp_realsmith_lkzCqFLRCE*/ << 20) | (/*TAG7:STA*/((unsigned long)(realsmith_L8Ok8dXtds((int)(x_realsmith_lkzCqFLRCE)+(-5242825), (int)(x_realsmith_lkzCqFLRCE)+(-5242822))+(int)(x_realsmith_lkzCqFLRCE)-(5242882))+x_realsmith_lkzCqFLRCE)/*TAG7:END:x_realsmith_lkzCqFLRCE*/ >> 3);
/*aft_stmt:17412*/
/*aft_stmt:17412*/
        /*bef_stmt:17437*/
dl_realsmith_lkzCqFLRCE = /*TAG8:STA*/((unsigned long)(realsmith_qstUiUzSlR((int)(x_realsmith_lkzCqFLRCE)+(-5242782), (int)(x_realsmith_lkzCqFLRCE)+(-5242873), (int)(x_realsmith_lkzCqFLRCE)+(-5242807), (int)(x_realsmith_lkzCqFLRCE)+(-5242878))+(int)(x_realsmith_lkzCqFLRCE)-(5242880))+x_realsmith_lkzCqFLRCE)/*TAG8:END:x_realsmith_lkzCqFLRCE*/ << 29;
/*aft_stmt:17437*/
        /*bef_stmt:17489*/
/*bef_stmt:17489*/
return (/*TAG9:STA*/((unsigned long)(realsmith_proxy_iF2jybNOOj((int)(du_realsmith_lkzCqFLRCE)+(-922353598), (int)(du_realsmith_lkzCqFLRCE)+(-922353619), (int)(du_realsmith_lkzCqFLRCE)+(-922353617))+(int)(du_realsmith_lkzCqFLRCE)-(922353663))+du_realsmith_lkzCqFLRCE)/*TAG9:END:du_realsmith_lkzCqFLRCE*/ << 32) | (/*TAG10:STA*/((unsigned long)(realsmith_yqAjswVc5S((int)(dl_realsmith_lkzCqFLRCE)+(0))+(int)(dl_realsmith_lkzCqFLRCE)-(0))+dl_realsmith_lkzCqFLRCE)/*TAG10:END:dl_realsmith_lkzCqFLRCE*/ & 0xFFFFFFFF);
/*aft_stmt:17489*/
/*aft_stmt:17489*/
    }
/*aft_stmt:17499*/
/*aft_stmt:17499*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_mIWjFtSEMQ(x) (x)
#define Tag2_realsmith_mIWjFtSEMQ(x) (x)
#define Tag3_realsmith_mIWjFtSEMQ(x) (x)
#define Tag4_realsmith_mIWjFtSEMQ(x) (x)
#define Tag5_realsmith_mIWjFtSEMQ(x) (x)
#include "stdlib.h"
struct csi2tx_priv_HiPT8z {
    int lock_realsmith_mIWjFtSEMQ;
    int count_realsmith_mIWjFtSEMQ;
};
int realsmith_mIWjFtSEMQ(int enable_realsmith_mIWjFtSEMQ, int count_realsmith_mIWjFtSEMQ) {
    struct csi2tx_priv_HiPT8z csi2tx_realsmith_mIWjFtSEMQ;
    csi2tx_realsmith_mIWjFtSEMQ.lock_realsmith_mIWjFtSEMQ = 0;
    /*bef_stmt:17219*/
csi2tx_realsmith_mIWjFtSEMQ.count_realsmith_mIWjFtSEMQ = Tag1_realsmith_mIWjFtSEMQ(/*int:17369:17369:17219:e*/count_realsmith_mIWjFtSEMQ);
/*aft_stmt:17219*/
    int ret_realsmith_mIWjFtSEMQ = 0;
    /*bef_stmt:17354*/
if (Tag2_realsmith_mIWjFtSEMQ(/*int:17369:17369:17354:e*/enable_realsmith_mIWjFtSEMQ)) {
        /*bef_stmt:17289*/
if (Tag3_realsmith_mIWjFtSEMQ(/*int:17369:17369:17289:e*/csi2tx_realsmith_mIWjFtSEMQ.count_realsmith_mIWjFtSEMQ) == 0) {
            ret_realsmith_mIWjFtSEMQ = 1;
        }
/*aft_stmt:17289*/
        csi2tx_realsmith_mIWjFtSEMQ.count_realsmith_mIWjFtSEMQ++;
    } else {
        csi2tx_realsmith_mIWjFtSEMQ.count_realsmith_mIWjFtSEMQ--;
        /*bef_stmt:17346*/
if (Tag4_realsmith_mIWjFtSEMQ(/*int:17369:17369:17346:e*/csi2tx_realsmith_mIWjFtSEMQ.count_realsmith_mIWjFtSEMQ) == 0) {
        }
/*aft_stmt:17346*/
    }
/*aft_stmt:17354*/
    /*bef_stmt:17367*/
return Tag5_realsmith_mIWjFtSEMQ(/*int:17369:17369:17367:e*/ret_realsmith_mIWjFtSEMQ);
/*aft_stmt:17367*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Sy2gx9OyRC(x) (x)
#define Tag2_realsmith_Sy2gx9OyRC(x) (x)
#define Tag3_realsmith_Sy2gx9OyRC(x) (x)
#define Tag4_realsmith_Sy2gx9OyRC(x) (x)
#define Tag5_realsmith_Sy2gx9OyRC(x) (x)
#include "stdlib.h"
struct virtio_device_vNdA5I {
    void *priv_realsmith_Sy2gx9OyRC;
    struct {
        void (*reset_realsmith_Sy2gx9OyRC)(struct virtio_device_vNdA5I*);
    } *config_realsmith_Sy2gx9OyRC;
};
struct virtio_fs_vNdA5I {
    int refcount_realsmith_Sy2gx9OyRC;
};
int realsmith_Sy2gx9OyRC(int reset_flag_realsmith_Sy2gx9OyRC) {
    struct virtio_fs_vNdA5I *fs_realsmith_Sy2gx9OyRC;
    int ret_realsmith_Sy2gx9OyRC = 0;
    fs_realsmith_Sy2gx9OyRC = (struct virtio_fs_vNdA5I*)(malloc(sizeof(struct virtio_fs_vNdA5I)));
    if (!fs_realsmith_Sy2gx9OyRC)
        return -1;
    fs_realsmith_Sy2gx9OyRC->refcount_realsmith_Sy2gx9OyRC = 1;
    ret_realsmith_Sy2gx9OyRC = 0;
    /*bef_stmt:17475*/
if (/*TAG1:STA*/((int)(realsmith_9aqS5BdYOn((int)(ret_realsmith_Sy2gx9OyRC)+(93), (int)(ret_realsmith_Sy2gx9OyRC)+(16), (int)(ret_realsmith_Sy2gx9OyRC)+(23))+(int)(ret_realsmith_Sy2gx9OyRC)-(16))+ret_realsmith_Sy2gx9OyRC)/*TAG1:END:ret_realsmith_Sy2gx9OyRC*/ < 0)
        goto out;
/*aft_stmt:17475*/
    ret_realsmith_Sy2gx9OyRC = 0;
    /*bef_stmt:17509*/
if (/*TAG2:STA*/((int)(realsmith_proxy_hvO3P8dggb((int)(ret_realsmith_Sy2gx9OyRC)+(3))+(int)(ret_realsmith_Sy2gx9OyRC)-(10))+ret_realsmith_Sy2gx9OyRC)/*TAG2:END:ret_realsmith_Sy2gx9OyRC*/ < 0)
        goto out;
/*aft_stmt:17509*/
    ret_realsmith_Sy2gx9OyRC = 0;
    /*bef_stmt:17553*/
if (/*TAG3:STA*/((int)(realsmith_WHp2E1XwVt((unsigned long)(ret_realsmith_Sy2gx9OyRC)+(100))+(int)(ret_realsmith_Sy2gx9OyRC)-(0))+ret_realsmith_Sy2gx9OyRC)/*TAG3:END:ret_realsmith_Sy2gx9OyRC*/ < 0)
        goto out_vqs;
/*aft_stmt:17553*/
    return 0;
/*bef_stmt:17576*/
out_vqs:
    if (Tag4_realsmith_Sy2gx9OyRC(/*int:17628:17628:17576:e*/reset_flag_realsmith_Sy2gx9OyRC)) {
    }
/*aft_stmt:17576*/
out:
    (free(fs_realsmith_Sy2gx9OyRC));
    /*bef_stmt:17626*/
return Tag5_realsmith_Sy2gx9OyRC(/*int:17628:17628:17626:e*/ret_realsmith_Sy2gx9OyRC);
/*aft_stmt:17626*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_9HFyauslgm(x) (x)
#define Tag2_realsmith_9HFyauslgm(x) (x)
#define Tag3_realsmith_9HFyauslgm(x) (x)
#define Tag4_realsmith_9HFyauslgm(x) (x)
#define Tag5_realsmith_9HFyauslgm(x) (x)
#define Tag6_realsmith_9HFyauslgm(x) (x)
#include "stdlib.h"
int realsmith_9HFyauslgm(int dcvdd_voltage_realsmith_9HFyauslgm, int regmap_val_realsmith_9HFyauslgm) {
    int ret_realsmith_9HFyauslgm;
    /*bef_stmt:17159*/
ret_realsmith_9HFyauslgm = (/*TAG1:STA*/((int)(realsmith_LM4sKibaKy((int)(dcvdd_voltage_realsmith_9HFyauslgm)+(-75))+(int)(dcvdd_voltage_realsmith_9HFyauslgm)-(90))+dcvdd_voltage_realsmith_9HFyauslgm)/*TAG1:END:dcvdd_voltage_realsmith_9HFyauslgm*/ >= 1800000) ? 0 : -1;
/*aft_stmt:17159*/
    /*bef_stmt:17182*/
if (/*TAG2:STA*/((ret_realsmith_9HFyauslgm) + (g_29FPQX) - -16)/*TAG2:END:ret_realsmith_9HFyauslgm*/) {
        /*bef_stmt:17177*/
return /*TAG3:STA*/((int)(realsmith_smKNkNB2jC((int)(ret_realsmith_9HFyauslgm)+(87), (int)(ret_realsmith_9HFyauslgm)+(13), (int)(ret_realsmith_9HFyauslgm)+(101), (unsigned int)(ret_realsmith_9HFyauslgm)+(-4294967261), (unsigned int)(ret_realsmith_9HFyauslgm)+(-4294967257))+(int)(ret_realsmith_9HFyauslgm)-(-1))+ret_realsmith_9HFyauslgm)/*TAG3:END:ret_realsmith_9HFyauslgm*/;
/*aft_stmt:17177*/
    }
g_29FPQX = -16 + (ret_realsmith_9HFyauslgm - (-1));
/*aft_stmt:17182*/
    /*bef_stmt:17226*/
ret_realsmith_9HFyauslgm = (Tag4_realsmith_9HFyauslgm(/*int:17259:17259:17226:e*/regmap_val_realsmith_9HFyauslgm) == 1) ? 0 : -1;
/*aft_stmt:17226*/
    /*bef_stmt:17249*/
if (Tag5_realsmith_9HFyauslgm(/*int:17259:17259:17249:e*/ret_realsmith_9HFyauslgm)) {
        /*bef_stmt:17244*/
return Tag6_realsmith_9HFyauslgm(/*int:17259:17259:17244:e*/ret_realsmith_9HFyauslgm);
/*aft_stmt:17244*/
    }
/*aft_stmt:17249*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_tjdUDJe0Jv(x) (x)
#include "stdint.h"
int realsmith_tjdUDJe0Jv(int val_realsmith_tjdUDJe0Jv) {
    /*bef_stmt:1995*/
return ((Tag1_realsmith_tjdUDJe0Jv(/*int:1997:1997:1995:e*/val_realsmith_tjdUDJe0Jv)) << 3) & 0x00000007;
/*aft_stmt:1995*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_5OxSsmQtWj(x) (x)
#define Tag2_realsmith_5OxSsmQtWj(x) (x)
#include "stdlib.h"
int realsmith_5OxSsmQtWj(int ant_num_realsmith_5OxSsmQtWj) {
    int num_realsmith_5OxSsmQtWj;
    /*bef_stmt:17132*/
if (/*TAG1:STA*/((int)(realsmith_aES9KBDxYW((int)(ant_num_realsmith_5OxSsmQtWj)+(-8), (unsigned int)(ant_num_realsmith_5OxSsmQtWj)+(17), (int)(ant_num_realsmith_5OxSsmQtWj)+(0), (int)(ant_num_realsmith_5OxSsmQtWj)+(-5), (unsigned int)(ant_num_realsmith_5OxSsmQtWj)+(36), (unsigned char)(ant_num_realsmith_5OxSsmQtWj)+(33), (int)(ant_num_realsmith_5OxSsmQtWj)+(39), (unsigned int)(ant_num_realsmith_5OxSsmQtWj)+(79), (unsigned char)(ant_num_realsmith_5OxSsmQtWj)+(-11))+(int)(ant_num_realsmith_5OxSsmQtWj)-(19))+ant_num_realsmith_5OxSsmQtWj)/*TAG1:END:ant_num_realsmith_5OxSsmQtWj*/ == 2)
        num_realsmith_5OxSsmQtWj = 2;
    else
        num_realsmith_5OxSsmQtWj = 1;
/*aft_stmt:17132*/
    /*bef_stmt:17145*/
return /*TAG2:STA*/((num_realsmith_5OxSsmQtWj) + (g_AB9GOX[1]) - -114)/*TAG2:END:num_realsmith_5OxSsmQtWj*/;
g_AB9GOX[1] = -114 + (num_realsmith_5OxSsmQtWj - (1));
/*aft_stmt:17145*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_a259zkbsjW(x) (x)
#define Tag2_realsmith_a259zkbsjW(x) (x)
#include "stdlib.h"
struct dlm_ctxt_kjGadV {
    int dummy_realsmith_a259zkbsjW;
};
int realsmith_a259zkbsjW(int dummy_value_realsmith_a259zkbsjW) {
    struct dlm_ctxt_kjGadV dlm_realsmith_a259zkbsjW;
    /*bef_stmt:17151*/
dlm_realsmith_a259zkbsjW.dummy_realsmith_a259zkbsjW = /*TAG1:STA*/((int)(realsmith_yoKrur0jmi((int)(dummy_value_realsmith_a259zkbsjW)+(32), (int)(dummy_value_realsmith_a259zkbsjW)+(13), (int)(dummy_value_realsmith_a259zkbsjW)+(-10))+(int)(dummy_value_realsmith_a259zkbsjW)-(58))+dummy_value_realsmith_a259zkbsjW)/*TAG1:END:dummy_value_realsmith_a259zkbsjW*/;
/*aft_stmt:17151*/
    /*bef_stmt:17179*/
return /*TAG2:STA*/((dlm_realsmith_a259zkbsjW.dummy_realsmith_a259zkbsjW) + (g_031K19) - -65)/*TAG2:END:dlm_realsmith_a259zkbsjW.dummy_realsmith_a259zkbsjW*/;
g_031K19 = -65 + (dlm_realsmith_a259zkbsjW.dummy_realsmith_a259zkbsjW - (58));
/*aft_stmt:17179*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_GA08X0OvNK(x) (x)
#define Tag2_realsmith_GA08X0OvNK(x) (x)
#define Tag3_realsmith_GA08X0OvNK(x) (x)
#include "stdint.h"
#include "stdlib.h"
unsigned int realsmith_GA08X0OvNK(int fbp_realsmith_GA08X0OvNK, int pltcs_realsmith_GA08X0OvNK) {
    unsigned int fbpao_realsmith_GA08X0OvNK = 0;
    fbpao_realsmith_GA08X0OvNK = 0x12345678;
    /*bef_stmt:17566*/
/*bef_stmt:17566*/
/*bef_stmt:17566*/
return /*TAG1:STA*/((unsigned int)(realsmith_T5EhAnED5D((int)(fbpao_realsmith_GA08X0OvNK)+(-305419816))+(int)(fbpao_realsmith_GA08X0OvNK)-(305419896))+fbpao_realsmith_GA08X0OvNK)/*TAG1:END:fbpao_realsmith_GA08X0OvNK*/ + /*TAG2:STA*/((int)(realsmith_cpXBRcohrm((int)(fbp_realsmith_GA08X0OvNK)+(0), (int)(fbp_realsmith_GA08X0OvNK)+(50))+(int)(fbp_realsmith_GA08X0OvNK)-(30))+fbp_realsmith_GA08X0OvNK)/*TAG2:END:fbp_realsmith_GA08X0OvNK*/ + /*TAG3:STA*/((pltcs_realsmith_GA08X0OvNK) + (g_R4L6DT) - 124)/*TAG3:END:pltcs_realsmith_GA08X0OvNK*/;
g_R4L6DT = 124 + (pltcs_realsmith_GA08X0OvNK - (75));
/*aft_stmt:17566*/
/*aft_stmt:17566*/
/*aft_stmt:17566*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_hcQLqcTCWi(x) (x)
#define Tag2_realsmith_hcQLqcTCWi(x) (x)
#define Tag3_realsmith_hcQLqcTCWi(x) (x)
#include "stdint.h"
int realsmith_hcQLqcTCWi(int dp_module_realsmith_hcQLqcTCWi, int dp_level_realsmith_hcQLqcTCWi) {
    const int QED_LOG_LEVEL_SHIFT_realsmith_hcQLqcTCWi = 16;
    /*bef_stmt:2065*/
/*bef_stmt:2065*/
/*bef_stmt:2065*/
return ((unsigned int)/*TAG1:STA*/((int)(realsmith_5OxSsmQtWj((int)(dp_level_realsmith_hcQLqcTCWi)+(-44))+(int)(dp_level_realsmith_hcQLqcTCWi)-(64))+dp_level_realsmith_hcQLqcTCWi)/*TAG1:END:dp_level_realsmith_hcQLqcTCWi*/ << /*TAG2:STA*/((int)(realsmith_tjdUDJe0Jv((int)(QED_LOG_LEVEL_SHIFT_realsmith_hcQLqcTCWi)+(33))+(int)(QED_LOG_LEVEL_SHIFT_realsmith_hcQLqcTCWi)-(16))+QED_LOG_LEVEL_SHIFT_realsmith_hcQLqcTCWi)/*TAG2:END:QED_LOG_LEVEL_SHIFT_realsmith_hcQLqcTCWi*/) | /*TAG3:STA*/((int)(realsmith_9HFyauslgm((int)(dp_module_realsmith_hcQLqcTCWi)+(48), (int)(dp_module_realsmith_hcQLqcTCWi)+(38))+(int)(dp_module_realsmith_hcQLqcTCWi)-(41))+dp_module_realsmith_hcQLqcTCWi)/*TAG3:END:dp_module_realsmith_hcQLqcTCWi*/;
/*aft_stmt:2065*/
/*aft_stmt:2065*/
/*aft_stmt:2065*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_N0WF4C7OUM(x) (x)
#define Tag2_realsmith_N0WF4C7OUM(x) (x)
#include "stdlib.h"
int realsmith_N0WF4C7OUM(int error_code_realsmith_N0WF4C7OUM, int info1_realsmith_N0WF4C7OUM) {
    /*bef_stmt:17107*/
switch (/*TAG1:STA*/((int)(realsmith_IAkxwQNleP((int)(error_code_realsmith_N0WF4C7OUM)+(-7), (int)(error_code_realsmith_N0WF4C7OUM)+(60))+(int)(error_code_realsmith_N0WF4C7OUM)-(39))+error_code_realsmith_N0WF4C7OUM)/*TAG1:END:error_code_realsmith_N0WF4C7OUM*/) {
    case 128:
        return 0;
    /*bef_stmt:17137*/
case 129:
        return (unsigned short)Tag2_realsmith_N0WF4C7OUM(/*int:17180:17180:17137:e*/info1_realsmith_N0WF4C7OUM);
/*aft_stmt:17137*/
    default:
        return -1;
    }
/*aft_stmt:17107*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_TwXoeJQg9K(x) (x)
#include "stdbool.h"
int realsmith_TwXoeJQg9K(int res_realsmith_TwXoeJQg9K, int readback_realsmith_TwXoeJQg9K, int val_buf_realsmith_TwXoeJQg9K) {
    /*bef_stmt:622*/
if (Tag1_realsmith_TwXoeJQg9K(/*int:632:632:622:e*/readback_realsmith_TwXoeJQg9K)) {
        return 0;
    }
/*aft_stmt:622*/
    return 0;
}



#include "stdlib.h"
int realsmith_iHE0Y2iJla(int *p_realsmith_iHE0Y2iJla, int end_realsmith_iHE0Y2iJla, int pg_upmap_items_realsmith_iHE0Y2iJla) {
    int count_realsmith_iHE0Y2iJla = 0;
    while (p_realsmith_iHE0Y2iJla[count_realsmith_iHE0Y2iJla] != end_realsmith_iHE0Y2iJla) {
        pg_upmap_items_realsmith_iHE0Y2iJla += p_realsmith_iHE0Y2iJla[count_realsmith_iHE0Y2iJla];
        count_realsmith_iHE0Y2iJla++;
    }
    return pg_upmap_items_realsmith_iHE0Y2iJla;
}
int realsmith_proxy_TbKYLYVJNg(int p_0_HrU73bLOlK, int p_1_zMgqlQ5fpN, int p_2_O7gLc4EbDW) {
int proxy_rh9Dv540PY[17] = { 36, p_0_HrU73bLOlK, p_0_HrU73bLOlK, 42, p_0_HrU73bLOlK, p_0_HrU73bLOlK, p_0_HrU73bLOlK, p_0_HrU73bLOlK, p_0_HrU73bLOlK, p_0_HrU73bLOlK, 74, p_0_HrU73bLOlK, 80, p_0_HrU73bLOlK, p_0_HrU73bLOlK, p_0_HrU73bLOlK, p_0_HrU73bLOlK };
int proxy_ret_Ehqk1pPGGl = realsmith_iHE0Y2iJla(proxy_rh9Dv540PY, p_1_zMgqlQ5fpN, p_2_O7gLc4EbDW);
return proxy_ret_Ehqk1pPGGl;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_YfmIwP1ViK(x) (x)
#define Tag2_realsmith_YfmIwP1ViK(x) (x)
#define Tag3_realsmith_YfmIwP1ViK(x) (x)
#define Tag4_realsmith_YfmIwP1ViK(x) (x)
#define Tag5_realsmith_YfmIwP1ViK(x) (x)
#define Tag6_realsmith_YfmIwP1ViK(x) (x)
#define Tag7_realsmith_YfmIwP1ViK(x) (x)
#include "stdlib.h"
int realsmith_YfmIwP1ViK(int vm_flags_realsmith_YfmIwP1ViK, int vm_end_realsmith_YfmIwP1ViK, int vm_start_realsmith_YfmIwP1ViK, int size_realsmith_YfmIwP1ViK, int pfn_realsmith_YfmIwP1ViK, int prot_realsmith_YfmIwP1ViK) {
    /*bef_stmt:17207*/
if (!(/*TAG1:STA*/((vm_flags_realsmith_YfmIwP1ViK) + (g_AB9GOX[0]) - 4)/*TAG1:END:vm_flags_realsmith_YfmIwP1ViK*/ & 1))
        return -22;
g_AB9GOX[0] = 4 + (vm_flags_realsmith_YfmIwP1ViK - (9));
/*aft_stmt:17207*/
    /*bef_stmt:17249*/
/*bef_stmt:17249*/
/*bef_stmt:17249*/
if (Tag2_realsmith_YfmIwP1ViK(/*int:17519:17519:17249:e*/vm_end_realsmith_YfmIwP1ViK) - /*TAG3:STA*/((int)(realsmith_aLQ0EOkT1f((int)(vm_start_realsmith_YfmIwP1ViK)+(-26))+(int)(vm_start_realsmith_YfmIwP1ViK)-(87))+vm_start_realsmith_YfmIwP1ViK)/*TAG3:END:vm_start_realsmith_YfmIwP1ViK*/ != Tag4_realsmith_YfmIwP1ViK(/*int:17519:17519:17249:e*/size_realsmith_YfmIwP1ViK))
        return -22;
/*aft_stmt:17249*/
/*aft_stmt:17249*/
/*aft_stmt:17249*/
    int lock_asserted_realsmith_YfmIwP1ViK = 1;
    /*bef_stmt:17295*/
if (!Tag5_realsmith_YfmIwP1ViK(/*int:17519:17519:17295:e*/lock_asserted_realsmith_YfmIwP1ViK))
        return -22;
/*aft_stmt:17295*/
    void *priv_realsmith_YfmIwP1ViK = (malloc(sizeof(int)));
    if (!priv_realsmith_YfmIwP1ViK)
        return -12;
    /*bef_stmt:17392*/
int vm_page_prot_realsmith_YfmIwP1ViK = Tag6_realsmith_YfmIwP1ViK(/*int:17519:17519:17392:e*/prot_realsmith_YfmIwP1ViK);
/*aft_stmt:17392*/
    int remap_success_realsmith_YfmIwP1ViK = 1;
    /*bef_stmt:17483*/
if (!Tag7_realsmith_YfmIwP1ViK(/*int:17519:17519:17483:e*/remap_success_realsmith_YfmIwP1ViK)) {
        (free(priv_realsmith_YfmIwP1ViK));
        return -11;
    }
/*aft_stmt:17483*/
    (free(priv_realsmith_YfmIwP1ViK));
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_MA2Y8BsfhE(x) (x)
#include "stdlib.h"
int realsmith_MA2Y8BsfhE(int priv_realsmith_MA2Y8BsfhE, int cpu_ep_realsmith_MA2Y8BsfhE, int codec_ep_realsmith_MA2Y8BsfhE, int dup_codec_realsmith_MA2Y8BsfhE) {
    int link_realsmith_MA2Y8BsfhE = 0;
    int dais_realsmith_MA2Y8BsfhE = 0;
    int conf_realsmith_MA2Y8BsfhE = 0;
    link_realsmith_MA2Y8BsfhE++;
    dais_realsmith_MA2Y8BsfhE++;
    /*bef_stmt:17257*/
if (!Tag1_realsmith_MA2Y8BsfhE(/*int:17267:17267:17257:e*/dup_codec_realsmith_MA2Y8BsfhE)) {
        link_realsmith_MA2Y8BsfhE++;
        conf_realsmith_MA2Y8BsfhE++;
        dais_realsmith_MA2Y8BsfhE++;
    }
/*aft_stmt:17257*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_YLhaFLXg4p(x) (x)
#define Tag2_realsmith_proxy_YLhaFLXg4p(x) (x)
#define Tag3_realsmith_proxy_YLhaFLXg4p(x) (x)
#define Tag4_realsmith_proxy_YLhaFLXg4p(x) (x)
#define Tag5_realsmith_proxy_YLhaFLXg4p(x) (x)
#include "stdbool.h"
int realsmith_H5DbuM4hoJ(const unsigned char *db_realsmith_H5DbuM4hoJ) {
    /*bef_stmt:603*/
if (Tag1_realsmith_proxy_YLhaFLXg4p(/*const unsigned char:717:717:603:e*/db_realsmith_H5DbuM4hoJ[0]) != 0x02)
        return 0;
/*aft_stmt:603*/
    /*bef_stmt:642*/
if (Tag2_realsmith_proxy_YLhaFLXg4p(/*const unsigned char:717:717:642:e*/db_realsmith_H5DbuM4hoJ[1]) != 0x01)
        return 0;
/*aft_stmt:642*/
    /*bef_stmt:683*/
int payload_length_realsmith_H5DbuM4hoJ = Tag3_realsmith_proxy_YLhaFLXg4p(/*const unsigned char:717:717:683:e*/db_realsmith_H5DbuM4hoJ[2]);
/*aft_stmt:683*/
    /*bef_stmt:707*/
if (Tag4_realsmith_proxy_YLhaFLXg4p(/*int:717:717:707:e*/payload_length_realsmith_H5DbuM4hoJ) < 3)
        return 0;
/*aft_stmt:707*/
    return 1;
}
int realsmith_proxy_YLhaFLXg4p(unsigned char p_0_qqVhMHbfnU) {
int proxy_ret_wLEm1BBrMK = realsmith_H5DbuM4hoJ(&(p_0_qqVhMHbfnU));
/*bef_stmt:836*/
return Tag5_realsmith_proxy_YLhaFLXg4p(/*int:838:838:836:e*/proxy_ret_wLEm1BBrMK);
/*aft_stmt:836*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_vN63U1CviP(x) (x)
#define Tag2_realsmith_vN63U1CviP(x) (x)
#include "stdlib.h"
struct apds9300_data_Ba9csk {
    int intr_en_realsmith_vN63U1CviP;
};
int realsmith_vN63U1CviP(int intr_en_realsmith_vN63U1CviP) {
    struct apds9300_data_Ba9csk data_realsmith_vN63U1CviP;
    /*bef_stmt:17151*/
data_realsmith_vN63U1CviP.intr_en_realsmith_vN63U1CviP = Tag1_realsmith_vN63U1CviP(/*int:17181:17181:17151:e*/intr_en_realsmith_vN63U1CviP);
/*aft_stmt:17151*/
    /*bef_stmt:17179*/
return Tag2_realsmith_vN63U1CviP(/*int:17181:17181:17179:e*/data_realsmith_vN63U1CviP.intr_en_realsmith_vN63U1CviP);
/*aft_stmt:17179*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_VtFhFSruEJ(x) (x)
#define Tag2_realsmith_VtFhFSruEJ(x) (x)
#define Tag3_realsmith_VtFhFSruEJ(x) (x)
#include "stdlib.h"
int realsmith_VtFhFSruEJ(int crtc_state_realsmith_VtFhFSruEJ) {
    /*bef_stmt:17101*/
if (Tag1_realsmith_VtFhFSruEJ(/*int:17248:17248:17101:e*/crtc_state_realsmith_VtFhFSruEJ) == 0) {
        return -1;
    }
/*aft_stmt:17101*/
    struct {
        int base_realsmith_VtFhFSruEJ;
        int composer_work_realsmith_VtFhFSruEJ;
    } vkms_state_realsmith_VtFhFSruEJ;
    /*bef_stmt:17199*/
vkms_state_realsmith_VtFhFSruEJ.base_realsmith_VtFhFSruEJ = Tag2_realsmith_VtFhFSruEJ(/*int:17248:17248:17199:e*/crtc_state_realsmith_VtFhFSruEJ);
/*aft_stmt:17199*/
    vkms_state_realsmith_VtFhFSruEJ.composer_work_realsmith_VtFhFSruEJ = 0;
    /*bef_stmt:17246*/
return Tag3_realsmith_VtFhFSruEJ(/*int:17248:17248:17246:e*/vkms_state_realsmith_VtFhFSruEJ.base_realsmith_VtFhFSruEJ);
/*aft_stmt:17246*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_DqmUZQegR6(x) (x)
#define Tag2_realsmith_DqmUZQegR6(x) (x)
#define Tag3_realsmith_DqmUZQegR6(x) (x)
#include "stdlib.h"
int realsmith_DqmUZQegR6(int event_type_realsmith_DqmUZQegR6) {
    /*bef_stmt:17151*/
/*bef_stmt:17151*/
if (Tag1_realsmith_DqmUZQegR6(/*int:17157:17157:17151:e*/event_type_realsmith_DqmUZQegR6) < 0) {
        return -1;
    } else if (Tag2_realsmith_DqmUZQegR6(/*int:17157:17157:17151:e*/event_type_realsmith_DqmUZQegR6) == 0) {
        return 0;
    } else {
        /*bef_stmt:17140*/
return Tag3_realsmith_DqmUZQegR6(/*int:17157:17157:17140:e*/event_type_realsmith_DqmUZQegR6) * 2;
/*aft_stmt:17140*/
    }
/*aft_stmt:17151*/
/*aft_stmt:17151*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_VLspaOIS7v(x) (x)
#define Tag2_realsmith_VLspaOIS7v(x) (x)
#define Tag3_realsmith_VLspaOIS7v(x) (x)
#define Tag4_realsmith_VLspaOIS7v(x) (x)
#include "stdbool.h"
struct drm_plane_ybn0RN {
    int state_realsmith_VLspaOIS7v;
};
struct dpu_plane_ybn0RN {
    int pipe_hw_realsmith_VLspaOIS7v;
};
struct dpu_plane_state_ybn0RN {
    bool pending_realsmith_VLspaOIS7v;
    int multirect_mode_realsmith_VLspaOIS7v;
};
int realsmith_VLspaOIS7v(int plane_state_realsmith_VLspaOIS7v, int pipe_hw_realsmith_VLspaOIS7v, _Bool is_virtual_realsmith_VLspaOIS7v) {
    struct dpu_plane_state_ybn0RN pstate_realsmith_VLspaOIS7v;
    pstate_realsmith_VLspaOIS7v.pending_realsmith_VLspaOIS7v = 0;
    pstate_realsmith_VLspaOIS7v.pending_realsmith_VLspaOIS7v = 1;
    /*bef_stmt:892*/
/*bef_stmt:892*/
if (Tag1_realsmith_VLspaOIS7v(/*_Bool:902:902:892:e*/is_virtual_realsmith_VLspaOIS7v) && /*TAG2:STA*/((int)(realsmith_eLcxpdZZcR((int)(pipe_hw_realsmith_VLspaOIS7v)+(30), (int)(pipe_hw_realsmith_VLspaOIS7v)+(43))+(int)(pipe_hw_realsmith_VLspaOIS7v)-(44))+pipe_hw_realsmith_VLspaOIS7v)/*TAG2:END:pipe_hw_realsmith_VLspaOIS7v*/) {
        int DPU_SSPP_RECT_SOLO_realsmith_VLspaOIS7v = 1;
        int DPU_SSPP_MULTIRECT_NONE_realsmith_VLspaOIS7v = 0;
        /*bef_stmt:885*/
/*bef_stmt:885*/
return /*TAG3:STA*/((int)(realsmith_hipH08VMCq((int)(DPU_SSPP_RECT_SOLO_realsmith_VLspaOIS7v)+(74))+(int)(DPU_SSPP_RECT_SOLO_realsmith_VLspaOIS7v)-(76))+DPU_SSPP_RECT_SOLO_realsmith_VLspaOIS7v)/*TAG3:END:DPU_SSPP_RECT_SOLO_realsmith_VLspaOIS7v*/ + /*TAG4:STA*/((DPU_SSPP_MULTIRECT_NONE_realsmith_VLspaOIS7v) + (g_RWTYM9) - -69)/*TAG4:END:DPU_SSPP_MULTIRECT_NONE_realsmith_VLspaOIS7v*/;
g_RWTYM9 = -69 + (DPU_SSPP_MULTIRECT_NONE_realsmith_VLspaOIS7v - (0));
/*aft_stmt:885*/
/*aft_stmt:885*/
    }
/*aft_stmt:892*/
/*aft_stmt:892*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_aNipKFcvjh(x) (x)
#define Tag2_realsmith_aNipKFcvjh(x) (x)
#define Tag3_realsmith_aNipKFcvjh(x) (x)
#define Tag4_realsmith_aNipKFcvjh(x) (x)
#define Tag5_realsmith_aNipKFcvjh(x) (x)
#include "stdlib.h"
struct fm10k_intfc_Rf4Hxp {
    int rx_pause_realsmith_aNipKFcvjh;
};
int realsmith_aNipKFcvjh(int rx_pause_realsmith_aNipKFcvjh) {
    struct fm10k_intfc_Rf4Hxp interface_realsmith_aNipKFcvjh;
    /*bef_stmt:17151*/
interface_realsmith_aNipKFcvjh.rx_pause_realsmith_aNipKFcvjh = Tag1_realsmith_aNipKFcvjh(/*int:17313:17313:17151:e*/rx_pause_realsmith_aNipKFcvjh);
/*aft_stmt:17151*/
    int autoneg_realsmith_aNipKFcvjh = 0;
    int tx_pause_realsmith_aNipKFcvjh = 1;
    /*bef_stmt:17255*/
int rx_pause_result_realsmith_aNipKFcvjh = Tag2_realsmith_aNipKFcvjh(/*int:17313:17313:17255:e*/interface_realsmith_aNipKFcvjh.rx_pause_realsmith_aNipKFcvjh) ? 1 : 0;
/*aft_stmt:17255*/
    /*bef_stmt:17311*/
/*bef_stmt:17311*/
/*bef_stmt:17311*/
return (Tag3_realsmith_aNipKFcvjh(/*int:17313:17313:17311:e*/autoneg_realsmith_aNipKFcvjh) << 16) | (Tag4_realsmith_aNipKFcvjh(/*int:17313:17313:17311:e*/tx_pause_realsmith_aNipKFcvjh) << 8) | Tag5_realsmith_aNipKFcvjh(/*int:17313:17313:17311:e*/rx_pause_result_realsmith_aNipKFcvjh);
/*aft_stmt:17311*/
/*aft_stmt:17311*/
/*aft_stmt:17311*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_6qOOPAoNY6(x) (x)
#define Tag2_realsmith_6qOOPAoNY6(x) (x)
#include "stdbool.h"
int realsmith_6qOOPAoNY6(int alsa_pb_channel_realsmith_6qOOPAoNY6, int cmd_realsmith_6qOOPAoNY6) {
    /*bef_stmt:594*/
switch (Tag1_realsmith_6qOOPAoNY6(/*int:700:700:594:e*/cmd_realsmith_6qOOPAoNY6)) {
    /*bef_stmt:606*/
case 129:
        if (Tag2_realsmith_6qOOPAoNY6(/*int:700:700:606:e*/alsa_pb_channel_realsmith_6qOOPAoNY6))
            return -16;
/*aft_stmt:606*/
        alsa_pb_channel_realsmith_6qOOPAoNY6 = 1;
        return 0;
    case 128:
        alsa_pb_channel_realsmith_6qOOPAoNY6 = 0;
        return 0;
    default:
        return -22;
    }
/*aft_stmt:594*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_4R910UCi0B(x) (x)
#define Tag2_realsmith_4R910UCi0B(x) (x)
#define Tag3_realsmith_4R910UCi0B(x) (x)
#include "stdint.h"
int realsmith_4R910UCi0B(int pp_realsmith_4R910UCi0B, int rxq_id_realsmith_4R910UCi0B, int ndescs_realsmith_4R910UCi0B) {
    int total_written_realsmith_4R910UCi0B = 0;
    /*bef_stmt:2072*/
while (Tag1_realsmith_4R910UCi0B(/*int:2110:2110:2072:e*/ndescs_realsmith_4R910UCi0B) > 255) {
        total_written_realsmith_4R910UCi0B += 255;
        ndescs_realsmith_4R910UCi0B -= 255;
    }
/*aft_stmt:2072*/
    /*bef_stmt:2087*/
total_written_realsmith_4R910UCi0B += /*TAG2:STA*/((int)(realsmith_AmI3Xn0nP4((int)(ndescs_realsmith_4R910UCi0B)+(0), (int)(ndescs_realsmith_4R910UCi0B)+(6))+(int)(ndescs_realsmith_4R910UCi0B)-(26))+ndescs_realsmith_4R910UCi0B)/*TAG2:END:ndescs_realsmith_4R910UCi0B*/;
/*aft_stmt:2087*/
    /*bef_stmt:2108*/
return Tag3_realsmith_4R910UCi0B(/*int:2110:2110:2108:e*/total_written_realsmith_4R910UCi0B) << 8;
/*aft_stmt:2108*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_gx2zLD7xy6(x) (x)
#define Tag2_realsmith_gx2zLD7xy6(x) (x)
#include "stdlib.h"
int realsmith_gx2zLD7xy6(int radio_ver_realsmith_gx2zLD7xy6, int radio_rev_realsmith_gx2zLD7xy6) {
    /*bef_stmt:17140*/
/*bef_stmt:17140*/
if (/*TAG1:STA*/((int)(realsmith_gZVuZ47XnD((unsigned int)(radio_ver_realsmith_gx2zLD7xy6)+(28), (unsigned int)(radio_ver_realsmith_gx2zLD7xy6)+(14), (unsigned int)(radio_ver_realsmith_gx2zLD7xy6)+(42), (unsigned int)(radio_ver_realsmith_gx2zLD7xy6)+(53))+(int)(radio_ver_realsmith_gx2zLD7xy6)-(13))+radio_ver_realsmith_gx2zLD7xy6)/*TAG1:END:radio_ver_realsmith_gx2zLD7xy6*/ == 0x2050 && /*TAG2:STA*/((int)(realsmith_6qOOPAoNY6((int)(radio_rev_realsmith_gx2zLD7xy6)+(48), (int)(radio_rev_realsmith_gx2zLD7xy6)+(47))+(int)(radio_rev_realsmith_gx2zLD7xy6)-(-20))+radio_rev_realsmith_gx2zLD7xy6)/*TAG2:END:radio_rev_realsmith_gx2zLD7xy6*/ < 6)
        return 0;
/*aft_stmt:17140*/
/*aft_stmt:17140*/
    return 2;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_8pJBwANRdi(x) (x)
#define Tag2_realsmith_8pJBwANRdi(x) (x)
#define Tag3_realsmith_8pJBwANRdi(x) (x)
#define Tag4_realsmith_8pJBwANRdi(x) (x)
#include "stdlib.h"
int realsmith_8pJBwANRdi(int table_len_realsmith_8pJBwANRdi, int vsel_realsmith_8pJBwANRdi) {
    /*bef_stmt:17124*/
/*bef_stmt:17124*/
if (Tag1_realsmith_8pJBwANRdi(/*int:17162:17162:17124:e*/vsel_realsmith_8pJBwANRdi) < 0)
        return Tag2_realsmith_8pJBwANRdi(/*int:17162:17162:17124:e*/vsel_realsmith_8pJBwANRdi);
/*aft_stmt:17124*/
/*aft_stmt:17124*/
    /*bef_stmt:17147*/
vsel_realsmith_8pJBwANRdi &= Tag3_realsmith_8pJBwANRdi(/*int:17162:17162:17147:e*/table_len_realsmith_8pJBwANRdi) - 1;
/*aft_stmt:17147*/
    /*bef_stmt:17160*/
return Tag4_realsmith_8pJBwANRdi(/*int:17162:17162:17160:e*/vsel_realsmith_8pJBwANRdi);
/*aft_stmt:17160*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_COXtWmptrW(x) (x)
#define Tag2_realsmith_COXtWmptrW(x) (x)
#define Tag3_realsmith_COXtWmptrW(x) (x)
#define Tag4_realsmith_COXtWmptrW(x) (x)
#define Tag5_realsmith_COXtWmptrW(x) (x)
#define Tag6_realsmith_COXtWmptrW(x) (x)
#define Tag7_realsmith_COXtWmptrW(x) (x)
#define Tag8_realsmith_COXtWmptrW(x) (x)
#include "stdlib.h"
int realsmith_COXtWmptrW(int p_hwfn_realsmith_COXtWmptrW, int p_ptt_realsmith_COXtWmptrW) {
    unsigned long mcp_resp_realsmith_COXtWmptrW, mcp_param_realsmith_COXtWmptrW;
    unsigned long DRV_MSG_CODE_INITIATE_PF_FLR_realsmith_COXtWmptrW = 0;
    /*bef_stmt:17210*/
/*bef_stmt:17210*/
if (Tag1_realsmith_COXtWmptrW(/*int:17308:17308:17210:e*/p_hwfn_realsmith_COXtWmptrW) < 0 || Tag2_realsmith_COXtWmptrW(/*int:17308:17308:17210:e*/p_ptt_realsmith_COXtWmptrW) < 0) {
        return -1;
    }
/*aft_stmt:17210*/
/*aft_stmt:17210*/
    /*bef_stmt:17239*/
/*bef_stmt:17239*/
mcp_resp_realsmith_COXtWmptrW = Tag3_realsmith_COXtWmptrW(/*int:17308:17308:17239:e*/p_hwfn_realsmith_COXtWmptrW) + Tag4_realsmith_COXtWmptrW(/*int:17308:17308:17239:e*/p_ptt_realsmith_COXtWmptrW);
/*aft_stmt:17239*/
/*aft_stmt:17239*/
    /*bef_stmt:17268*/
/*bef_stmt:17268*/
mcp_param_realsmith_COXtWmptrW = Tag5_realsmith_COXtWmptrW(/*int:17308:17308:17268:e*/p_hwfn_realsmith_COXtWmptrW) - Tag6_realsmith_COXtWmptrW(/*int:17308:17308:17268:e*/p_ptt_realsmith_COXtWmptrW);
/*aft_stmt:17268*/
/*aft_stmt:17268*/
    /*bef_stmt:17306*/
/*bef_stmt:17306*/
return (int)(Tag7_realsmith_COXtWmptrW(/*unsigned long:17308:17308:17306:e*/mcp_resp_realsmith_COXtWmptrW) + Tag8_realsmith_COXtWmptrW(/*unsigned long:17308:17308:17306:e*/mcp_param_realsmith_COXtWmptrW));
/*aft_stmt:17306*/
/*aft_stmt:17306*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ukh6zMJC1t(x) (x)
#define Tag2_realsmith_ukh6zMJC1t(x) (x)
#include "stdint.h"
struct nbpf_channel_DQ0tzN {
    int chan_realsmith_ukh6zMJC1t;
};
int realsmith_ukh6zMJC1t(int status_realsmith_ukh6zMJC1t, int chan_realsmith_ukh6zMJC1t) {
    /*bef_stmt:2060*/
/*bef_stmt:2060*/
return (Tag1_realsmith_ukh6zMJC1t(/*int:2062:2062:2060:e*/status_realsmith_ukh6zMJC1t) & (1 << Tag2_realsmith_ukh6zMJC1t(/*int:2062:2062:2060:e*/chan_realsmith_ukh6zMJC1t))) != 0;
/*aft_stmt:2060*/
/*aft_stmt:2060*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_8uOA8X3toQ(x) (x)
#define Tag2_realsmith_8uOA8X3toQ(x) (x)
#define Tag3_realsmith_8uOA8X3toQ(x) (x)
#define Tag4_realsmith_8uOA8X3toQ(x) (x)
#define Tag5_realsmith_8uOA8X3toQ(x) (x)
#define Tag6_realsmith_8uOA8X3toQ(x) (x)
#include "stdlib.h"
int realsmith_8uOA8X3toQ(int dev_dummy_realsmith_8uOA8X3toQ, int s_io_bits_realsmith_8uOA8X3toQ, int insn_n_realsmith_8uOA8X3toQ, unsigned int data_realsmith_8uOA8X3toQ) {
    int ret_realsmith_8uOA8X3toQ = 0;
    /*bef_stmt:17226*/
/*bef_stmt:17226*/
/*bef_stmt:17226*/
if (Tag1_realsmith_8uOA8X3toQ(/*int:17302:17302:17226:e*/dev_dummy_realsmith_8uOA8X3toQ) < 0 || Tag2_realsmith_8uOA8X3toQ(/*int:17302:17302:17226:e*/s_io_bits_realsmith_8uOA8X3toQ) < 0 || Tag3_realsmith_8uOA8X3toQ(/*int:17302:17302:17226:e*/insn_n_realsmith_8uOA8X3toQ) < 0) {
        return -1;
    }
/*aft_stmt:17226*/
/*aft_stmt:17226*/
/*aft_stmt:17226*/
    /*bef_stmt:17263*/
if (Tag4_realsmith_8uOA8X3toQ(/*unsigned int:17302:17302:17263:e*/data_realsmith_8uOA8X3toQ) > 0) {
        ret_realsmith_8uOA8X3toQ = 1;
    }
/*aft_stmt:17263*/
    /*bef_stmt:17289*/
if (Tag5_realsmith_8uOA8X3toQ(/*int:17302:17302:17289:e*/ret_realsmith_8uOA8X3toQ)) {
        s_io_bits_realsmith_8uOA8X3toQ = 0x00ff;
    }
/*aft_stmt:17289*/
    /*bef_stmt:17300*/
return Tag6_realsmith_8uOA8X3toQ(/*int:17302:17302:17300:e*/insn_n_realsmith_8uOA8X3toQ);
/*aft_stmt:17300*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_3QeAVSBbsv(x) (x)
#define Tag2_realsmith_3QeAVSBbsv(x) (x)
#define Tag3_realsmith_3QeAVSBbsv(x) (x)
#define Tag4_realsmith_3QeAVSBbsv(x) (x)
#define Tag5_realsmith_3QeAVSBbsv(x) (x)
#include "stdlib.h"
int realsmith_3QeAVSBbsv(int update_2g5g_realsmith_3QeAVSBbsv, int bt_state_realsmith_3QeAVSBbsv, int is_2g_realsmith_3QeAVSBbsv, int wait_done_realsmith_3QeAVSBbsv) {
    unsigned int to_set_realsmith_3QeAVSBbsv, to_clear_realsmith_3QeAVSBbsv;
    /*bef_stmt:17215*/
/*bef_stmt:17215*/
if (!Tag1_realsmith_3QeAVSBbsv(/*int:17332:17332:17215:e*/update_2g5g_realsmith_3QeAVSBbsv) || (Tag2_realsmith_3QeAVSBbsv(/*int:17332:17332:17215:e*/bt_state_realsmith_3QeAVSBbsv) == 0x10))
        return 0;
/*aft_stmt:17215*/
/*aft_stmt:17215*/
    /*bef_stmt:17294*/
if (Tag3_realsmith_3QeAVSBbsv(/*int:17332:17332:17294:e*/is_2g_realsmith_3QeAVSBbsv)) {
        to_clear_realsmith_3QeAVSBbsv = 0x1;
        to_set_realsmith_3QeAVSBbsv = 0x2;
    } else {
        to_clear_realsmith_3QeAVSBbsv = 0x4;
        to_set_realsmith_3QeAVSBbsv = 0x8;
    }
/*aft_stmt:17294*/
    /*bef_stmt:17309*/
if (Tag4_realsmith_3QeAVSBbsv(/*unsigned int:17332:17332:17309:e*/to_clear_realsmith_3QeAVSBbsv)) {
    }
/*aft_stmt:17309*/
    /*bef_stmt:17322*/
if (Tag5_realsmith_3QeAVSBbsv(/*unsigned int:17332:17332:17322:e*/to_set_realsmith_3QeAVSBbsv)) {
    }
/*aft_stmt:17322*/
    return 1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_2DNFs2yXPC(x) (x)
#define Tag2_realsmith_2DNFs2yXPC(x) (x)
#define Tag3_realsmith_2DNFs2yXPC(x) (x)
#define Tag4_realsmith_2DNFs2yXPC(x) (x)
#define Tag5_realsmith_2DNFs2yXPC(x) (x)
#define Tag6_realsmith_2DNFs2yXPC(x) (x)
#define Tag7_realsmith_2DNFs2yXPC(x) (x)
#define Tag8_realsmith_2DNFs2yXPC(x) (x)
#define Tag9_realsmith_2DNFs2yXPC(x) (x)
#define Tag10_realsmith_2DNFs2yXPC(x) (x)
#include "stddef.h"
unsigned long realsmith_2DNFs2yXPC(unsigned long capture_realsmith_2DNFs2yXPC, unsigned long hangcheck_timestamp1_realsmith_2DNFs2yXPC, unsigned long hangcheck_timestamp2_realsmith_2DNFs2yXPC) {
    /*bef_stmt:777*/
unsigned long epoch_realsmith_2DNFs2yXPC = Tag1_realsmith_2DNFs2yXPC(/*unsigned long:885:885:777:e*/capture_realsmith_2DNFs2yXPC);
/*aft_stmt:777*/
    /*bef_stmt:824*/
/*bef_stmt:824*/
/*bef_stmt:824*/
/*bef_stmt:824*/
if (/*TAG2:STA*/((unsigned long)(realsmith_yk65PcPvDb((int)(hangcheck_timestamp1_realsmith_2DNFs2yXPC)+(-46))+(int)(hangcheck_timestamp1_realsmith_2DNFs2yXPC)-(100))+hangcheck_timestamp1_realsmith_2DNFs2yXPC)/*TAG2:END:hangcheck_timestamp1_realsmith_2DNFs2yXPC*/ && Tag3_realsmith_2DNFs2yXPC(/*unsigned long:885:885:824:e*/hangcheck_timestamp1_realsmith_2DNFs2yXPC) < /*TAG4:STA*/((unsigned long)(realsmith_smzxAPz5rd((int)(epoch_realsmith_2DNFs2yXPC)+(-79), (int)(epoch_realsmith_2DNFs2yXPC)+(-81), (int)(epoch_realsmith_2DNFs2yXPC)+(-33), (int)(epoch_realsmith_2DNFs2yXPC)+(1))+(int)(epoch_realsmith_2DNFs2yXPC)-(201))+epoch_realsmith_2DNFs2yXPC)/*TAG4:END:epoch_realsmith_2DNFs2yXPC*/)
        epoch_realsmith_2DNFs2yXPC = Tag5_realsmith_2DNFs2yXPC(/*unsigned long:885:885:824:e*/hangcheck_timestamp1_realsmith_2DNFs2yXPC);
g_RWTYM9 = -69 + (hangcheck_timestamp1_realsmith_2DNFs2yXPC - (100));
/*aft_stmt:824*/
/*aft_stmt:824*/
/*aft_stmt:824*/
/*aft_stmt:824*/
    /*bef_stmt:872*/
/*bef_stmt:872*/
/*bef_stmt:872*/
/*bef_stmt:872*/
if (/*TAG6:STA*/((unsigned long)(realsmith_AzYh2mCYkn((int)(hangcheck_timestamp1_realsmith_2DNFs2yXPC)+(-85))+(int)(hangcheck_timestamp2_realsmith_2DNFs2yXPC)+(int)(hangcheck_timestamp1_realsmith_2DNFs2yXPC)+(int)(capture_realsmith_2DNFs2yXPC)-(289))+hangcheck_timestamp2_realsmith_2DNFs2yXPC)/*TAG6:END:hangcheck_timestamp2_realsmith_2DNFs2yXPC*/ && /*TAG7:STA*/((unsigned long)(realsmith_sLkbilXhfh((int)(hangcheck_timestamp1_realsmith_2DNFs2yXPC)+(-70))+(int)(hangcheck_timestamp2_realsmith_2DNFs2yXPC)+(int)(hangcheck_timestamp1_realsmith_2DNFs2yXPC)+(int)(capture_realsmith_2DNFs2yXPC)-(4054))+hangcheck_timestamp2_realsmith_2DNFs2yXPC)/*TAG7:END:hangcheck_timestamp2_realsmith_2DNFs2yXPC*/ < /*TAG8:STA*/((unsigned long)(realsmith_Lgdspr4h8o((int)(capture_realsmith_2DNFs2yXPC)+(-36), (int)(hangcheck_timestamp2_realsmith_2DNFs2yXPC)+(-33))+(int)(capture_realsmith_2DNFs2yXPC)+(int)(hangcheck_timestamp1_realsmith_2DNFs2yXPC)+(int)(hangcheck_timestamp2_realsmith_2DNFs2yXPC)-(274))+epoch_realsmith_2DNFs2yXPC)/*TAG8:END:epoch_realsmith_2DNFs2yXPC*/)
        epoch_realsmith_2DNFs2yXPC = /*TAG9:STA*/((unsigned long)(realsmith_HoQkIuNGJo((int)(hangcheck_timestamp1_realsmith_2DNFs2yXPC)+(-57), (int)(hangcheck_timestamp2_realsmith_2DNFs2yXPC)+(-35))+(int)(hangcheck_timestamp2_realsmith_2DNFs2yXPC)+(int)(capture_realsmith_2DNFs2yXPC)+(int)(hangcheck_timestamp1_realsmith_2DNFs2yXPC)-(354))+hangcheck_timestamp2_realsmith_2DNFs2yXPC)/*TAG9:END:hangcheck_timestamp2_realsmith_2DNFs2yXPC*/;
/*aft_stmt:872*/
/*aft_stmt:872*/
/*aft_stmt:872*/
/*aft_stmt:872*/
    /*bef_stmt:883*/
return /*TAG10:STA*/((epoch_realsmith_2DNFs2yXPC) + (g_AB9GOX[0]) - 4)/*TAG10:END:epoch_realsmith_2DNFs2yXPC*/;
g_AB9GOX[0] = 4 + (epoch_realsmith_2DNFs2yXPC - (75));
/*aft_stmt:883*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_oFPaFA3sw0(x) (x)
#define Tag2_realsmith_oFPaFA3sw0(x) (x)
#define Tag3_realsmith_oFPaFA3sw0(x) (x)
#define Tag4_realsmith_oFPaFA3sw0(x) (x)
#define Tag5_realsmith_oFPaFA3sw0(x) (x)
#define Tag6_realsmith_oFPaFA3sw0(x) (x)
#define Tag7_realsmith_oFPaFA3sw0(x) (x)
#define Tag8_realsmith_oFPaFA3sw0(x) (x)
#define Tag9_realsmith_oFPaFA3sw0(x) (x)
#define Tag10_realsmith_oFPaFA3sw0(x) (x)
#define Tag11_realsmith_oFPaFA3sw0(x) (x)
#include "stdlib.h"
unsigned long realsmith_oFPaFA3sw0(int idx_realsmith_oFPaFA3sw0, unsigned long event_base_rdpmc_realsmith_oFPaFA3sw0, unsigned long prev_count_realsmith_oFPaFA3sw0, unsigned long period_left_realsmith_oFPaFA3sw0, int cntval_bits_realsmith_oFPaFA3sw0) {
    /*bef_stmt:17188*/
int shift_realsmith_oFPaFA3sw0 = 64 - Tag1_realsmith_oFPaFA3sw0(/*int:17408:17408:17188:e*/cntval_bits_realsmith_oFPaFA3sw0);
/*aft_stmt:17188*/
    unsigned long new_raw_count_realsmith_oFPaFA3sw0;
    unsigned long delta_realsmith_oFPaFA3sw0;
    /*bef_stmt:17253*/
if (Tag2_realsmith_oFPaFA3sw0(/*int:17408:17408:17253:e*/idx_realsmith_oFPaFA3sw0) == 1)
        return 0;
/*aft_stmt:17253*/
    /*bef_stmt:17279*/
new_raw_count_realsmith_oFPaFA3sw0 = Tag3_realsmith_oFPaFA3sw0(/*unsigned long:17408:17408:17279:e*/prev_count_realsmith_oFPaFA3sw0) + 1;
/*aft_stmt:17279*/
    /*bef_stmt:17335*/
/*bef_stmt:17335*/
/*bef_stmt:17335*/
/*bef_stmt:17335*/
delta_realsmith_oFPaFA3sw0 = (Tag4_realsmith_oFPaFA3sw0(/*unsigned long:17408:17408:17335:e*/new_raw_count_realsmith_oFPaFA3sw0) << Tag5_realsmith_oFPaFA3sw0(/*int:17408:17408:17335:e*/shift_realsmith_oFPaFA3sw0)) - (Tag6_realsmith_oFPaFA3sw0(/*unsigned long:17408:17408:17335:e*/prev_count_realsmith_oFPaFA3sw0) << Tag7_realsmith_oFPaFA3sw0(/*int:17408:17408:17335:e*/shift_realsmith_oFPaFA3sw0));
/*aft_stmt:17335*/
/*aft_stmt:17335*/
/*aft_stmt:17335*/
/*aft_stmt:17335*/
    /*bef_stmt:17353*/
delta_realsmith_oFPaFA3sw0 >>= Tag8_realsmith_oFPaFA3sw0(/*int:17408:17408:17353:e*/shift_realsmith_oFPaFA3sw0);
/*aft_stmt:17353*/
    /*bef_stmt:17370*/
event_base_rdpmc_realsmith_oFPaFA3sw0 += Tag9_realsmith_oFPaFA3sw0(/*unsigned long:17408:17408:17370:e*/delta_realsmith_oFPaFA3sw0);
/*aft_stmt:17370*/
    /*bef_stmt:17387*/
period_left_realsmith_oFPaFA3sw0 -= Tag10_realsmith_oFPaFA3sw0(/*unsigned long:17408:17408:17387:e*/delta_realsmith_oFPaFA3sw0);
/*aft_stmt:17387*/
    /*bef_stmt:17400*/
return Tag11_realsmith_oFPaFA3sw0(/*unsigned long:17408:17408:17400:e*/new_raw_count_realsmith_oFPaFA3sw0);
/*aft_stmt:17400*/
}



#include "stdlib.h"
int realsmith_u2TgsnGN6i(int cvt_nid_realsmith_u2TgsnGN6i, int nid_realsmith_u2TgsnGN6i, int codec_power_state_realsmith_u2TgsnGN6i) {
    int pwr_realsmith_u2TgsnGN6i;
    if ((codec_power_state_realsmith_u2TgsnGN6i & (1 << cvt_nid_realsmith_u2TgsnGN6i)) == 0) {
        codec_power_state_realsmith_u2TgsnGN6i |= (1 << cvt_nid_realsmith_u2TgsnGN6i);
    }
    if ((codec_power_state_realsmith_u2TgsnGN6i & (1 << nid_realsmith_u2TgsnGN6i)) == 0) {
        codec_power_state_realsmith_u2TgsnGN6i |= (1 << nid_realsmith_u2TgsnGN6i);
        for (volatile int i_realsmith_u2TgsnGN6i = 0; i_realsmith_u2TgsnGN6i < 400000; i_realsmith_u2TgsnGN6i++);
        pwr_realsmith_u2TgsnGN6i = (codec_power_state_realsmith_u2TgsnGN6i >> 0) & 0x0F;
    } else {
        pwr_realsmith_u2TgsnGN6i = (codec_power_state_realsmith_u2TgsnGN6i >> 0) & 0x0F;
    }
    return pwr_realsmith_u2TgsnGN6i;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_rmSBd9S3Ti(x) (x)
#define Tag2_realsmith_rmSBd9S3Ti(x) (x)
#define Tag3_realsmith_rmSBd9S3Ti(x) (x)
#define Tag4_realsmith_rmSBd9S3Ti(x) (x)
#include "stdbool.h"
int realsmith_rmSBd9S3Ti(unsigned long posn_realsmith_rmSBd9S3Ti) {
    unsigned long TX_LINKDOWN_realsmith_rmSBd9S3Ti = 0;
    unsigned long TX_INCORRECT_LINK_STATE_realsmith_rmSBd9S3Ti = 1;
    /*bef_stmt:678*/
/*bef_stmt:678*/
/*bef_stmt:678*/
/*bef_stmt:678*/
return (Tag1_realsmith_rmSBd9S3Ti(/*unsigned long:680:680:678:e*/posn_realsmith_rmSBd9S3Ti) >= Tag2_realsmith_rmSBd9S3Ti(/*unsigned long:680:680:678:e*/TX_LINKDOWN_realsmith_rmSBd9S3Ti) && Tag3_realsmith_rmSBd9S3Ti(/*unsigned long:680:680:678:e*/posn_realsmith_rmSBd9S3Ti) <= Tag4_realsmith_rmSBd9S3Ti(/*unsigned long:680:680:678:e*/TX_INCORRECT_LINK_STATE_realsmith_rmSBd9S3Ti)) ? 1 : 0;
/*aft_stmt:678*/
/*aft_stmt:678*/
/*aft_stmt:678*/
/*aft_stmt:678*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_kN6Y9hVsKV(x) (x)
#define Tag2_realsmith_kN6Y9hVsKV(x) (x)
#define Tag3_realsmith_kN6Y9hVsKV(x) (x)
#include "stdlib.h"
int realsmith_kN6Y9hVsKV(int arvif_dummy_realsmith_kN6Y9hVsKV, int def_dummy_realsmith_kN6Y9hVsKV) {
    int restart_realsmith_kN6Y9hVsKV = 0;
    /*bef_stmt:17156*/
/*bef_stmt:17156*/
/*bef_stmt:17156*/
return (Tag1_realsmith_kN6Y9hVsKV(/*int:17158:17158:17156:e*/arvif_dummy_realsmith_kN6Y9hVsKV) + Tag2_realsmith_kN6Y9hVsKV(/*int:17158:17158:17156:e*/def_dummy_realsmith_kN6Y9hVsKV) + Tag3_realsmith_kN6Y9hVsKV(/*int:17158:17158:17156:e*/restart_realsmith_kN6Y9hVsKV));
/*aft_stmt:17156*/
/*aft_stmt:17156*/
/*aft_stmt:17156*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_x0UJZRlSUs(x) (x)
#define Tag2_realsmith_x0UJZRlSUs(x) (x)
#define Tag3_realsmith_x0UJZRlSUs(x) (x)
#define Tag4_realsmith_x0UJZRlSUs(x) (x)
#define Tag5_realsmith_x0UJZRlSUs(x) (x)
#define Tag6_realsmith_x0UJZRlSUs(x) (x)
#define Tag7_realsmith_x0UJZRlSUs(x) (x)
#define Tag8_realsmith_x0UJZRlSUs(x) (x)
#define Tag9_realsmith_x0UJZRlSUs(x) (x)
#define Tag10_realsmith_x0UJZRlSUs(x) (x)
#define Tag11_realsmith_x0UJZRlSUs(x) (x)
#include "stdlib.h"
int realsmith_x0UJZRlSUs(int t_realsmith_x0UJZRlSUs, int max_timeout_sec_realsmith_x0UJZRlSUs, int divisor_realsmith_x0UJZRlSUs) {
    unsigned int periods_realsmith_x0UJZRlSUs;
    /*bef_stmt:17161*/
int timeout_sec_realsmith_x0UJZRlSUs = /*TAG1:STA*/((int)(realsmith_u2TgsnGN6i((int)(max_timeout_sec_realsmith_x0UJZRlSUs)+(-40), (int)(max_timeout_sec_realsmith_x0UJZRlSUs)+(-45), (int)(max_timeout_sec_realsmith_x0UJZRlSUs)+(-27))+(int)(max_timeout_sec_realsmith_x0UJZRlSUs)-(77))+max_timeout_sec_realsmith_x0UJZRlSUs)/*TAG1:END:max_timeout_sec_realsmith_x0UJZRlSUs*/;
/*aft_stmt:17161*/
    int heartbeat_realsmith_x0UJZRlSUs;
    unsigned int countdown_reset_realsmith_x0UJZRlSUs;
    int timeout_cnt_realsmith_x0UJZRlSUs;
    /*bef_stmt:17258*/
/*bef_stmt:17258*/
while ((/*TAG2:STA*/((t_realsmith_x0UJZRlSUs) + (g_AB9GOX[4]) - 8)/*TAG2:END:t_realsmith_x0UJZRlSUs*/ % /*TAG3:STA*/((int)(realsmith_3QeAVSBbsv((int)(t_realsmith_x0UJZRlSUs)+(36), (int)(t_realsmith_x0UJZRlSUs)+(54), (int)(t_realsmith_x0UJZRlSUs)+(69), (int)(max_timeout_sec_realsmith_x0UJZRlSUs)+(-33))+(int)(max_timeout_sec_realsmith_x0UJZRlSUs)+(int)(t_realsmith_x0UJZRlSUs)-(82))+timeout_sec_realsmith_x0UJZRlSUs)/*TAG3:END:timeout_sec_realsmith_x0UJZRlSUs*/) != 0)
        timeout_sec_realsmith_x0UJZRlSUs--;
g_AB9GOX[4] = 8 + (t_realsmith_x0UJZRlSUs - (13));
/*aft_stmt:17258*/
/*aft_stmt:17258*/
    /*bef_stmt:17287*/
/*bef_stmt:17287*/
periods_realsmith_x0UJZRlSUs = Tag4_realsmith_x0UJZRlSUs(/*int:17425:17425:17287:e*/t_realsmith_x0UJZRlSUs) / Tag5_realsmith_x0UJZRlSUs(/*int:17425:17425:17287:e*/timeout_sec_realsmith_x0UJZRlSUs);
/*aft_stmt:17287*/
/*aft_stmt:17287*/
    /*bef_stmt:17344*/
/*bef_stmt:17344*/
countdown_reset_realsmith_x0UJZRlSUs = Tag6_realsmith_x0UJZRlSUs(/*unsigned int:17425:17425:17344:e*/periods_realsmith_x0UJZRlSUs) > 2 ? /*TAG7:STA*/((unsigned int)(realsmith_2DNFs2yXPC((unsigned long)(periods_realsmith_x0UJZRlSUs)+(98), (unsigned long)(periods_realsmith_x0UJZRlSUs)+(99), (unsigned long)(periods_realsmith_x0UJZRlSUs)+(74))+(unsigned long)(periods_realsmith_x0UJZRlSUs)-(76))+periods_realsmith_x0UJZRlSUs)/*TAG7:END:periods_realsmith_x0UJZRlSUs*/ - 2 : 0;
/*aft_stmt:17344*/
/*aft_stmt:17344*/
    /*bef_stmt:17359*/
heartbeat_realsmith_x0UJZRlSUs = /*TAG8:STA*/((int)(realsmith_oFPaFA3sw0((int)(t_realsmith_x0UJZRlSUs)+(66), (unsigned long)(t_realsmith_x0UJZRlSUs)+(85), (unsigned long)(t_realsmith_x0UJZRlSUs)+(19), (unsigned long)(t_realsmith_x0UJZRlSUs)+(28), (int)(t_realsmith_x0UJZRlSUs)+(3))+(unsigned long)(t_realsmith_x0UJZRlSUs)-(46))+t_realsmith_x0UJZRlSUs)/*TAG8:END:t_realsmith_x0UJZRlSUs*/;
/*aft_stmt:17359*/
    /*bef_stmt:17412*/
/*bef_stmt:17412*/
timeout_cnt_realsmith_x0UJZRlSUs = ((1000000000 / /*TAG9:STA*/((divisor_realsmith_x0UJZRlSUs) + (g_IU97RO[2]) - -114)/*TAG9:END:divisor_realsmith_x0UJZRlSUs*/) * /*TAG10:STA*/((timeout_sec_realsmith_x0UJZRlSUs) + (g_M65HXT) - 43)/*TAG10:END:timeout_sec_realsmith_x0UJZRlSUs*/) >> 8;
g_IU97RO[2] = -114 + (divisor_realsmith_x0UJZRlSUs - (12));
g_M65HXT = 43 + (timeout_sec_realsmith_x0UJZRlSUs - (13));
/*aft_stmt:17412*/
/*aft_stmt:17412*/
    /*bef_stmt:17423*/
return /*TAG11:STA*/((timeout_cnt_realsmith_x0UJZRlSUs) + (g_MW3YJP[4]) - -86)/*TAG11:END:timeout_cnt_realsmith_x0UJZRlSUs*/;
g_MW3YJP[4] = -86 + (timeout_cnt_realsmith_x0UJZRlSUs - (4231770));
/*aft_stmt:17423*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_tQMw8j10qH(x) (x)
#define Tag2_realsmith_tQMw8j10qH(x) (x)
#define Tag3_realsmith_tQMw8j10qH(x) (x)
#define Tag4_realsmith_tQMw8j10qH(x) (x)
#include "stdint.h"
int realsmith_tQMw8j10qH(unsigned int bitmask_realsmith_tQMw8j10qH) {
    unsigned int i_realsmith_tQMw8j10qH;
    /*bef_stmt:2082*/
for (i_realsmith_tQMw8j10qH = 0; /*TAG1:STA*/((unsigned int)(realsmith_COXtWmptrW(49, 90)-(98))+i_realsmith_tQMw8j10qH)/*TAG1:END:i_realsmith_tQMw8j10qH*/ <= 31; i_realsmith_tQMw8j10qH++) {
        /*bef_stmt:2075*/
/*bef_stmt:2075*/
if (((/*TAG2:STA*/((bitmask_realsmith_tQMw8j10qH) + (g_BNNLY0[2]) - 85)/*TAG2:END:bitmask_realsmith_tQMw8j10qH*/ >> /*TAG3:STA*/((unsigned int)(realsmith_8pJBwANRdi((int)(bitmask_realsmith_tQMw8j10qH)+(20), (int)(bitmask_realsmith_tQMw8j10qH)+(-38))+(int)(bitmask_realsmith_tQMw8j10qH)-(82))+i_realsmith_tQMw8j10qH)/*TAG3:END:i_realsmith_tQMw8j10qH*/) & 0x1) == 1)
            break;
g_BNNLY0[2] = 85 + (bitmask_realsmith_tQMw8j10qH - (64));
/*aft_stmt:2075*/
/*aft_stmt:2075*/
    }
/*aft_stmt:2082*/
    /*bef_stmt:2099*/
return /*TAG4:STA*/((unsigned int)(realsmith_gx2zLD7xy6((int)(i_realsmith_tQMw8j10qH)+(6), (int)(i_realsmith_tQMw8j10qH)+(-4))+(int)(i_realsmith_tQMw8j10qH)-(8))+i_realsmith_tQMw8j10qH)/*TAG4:END:i_realsmith_tQMw8j10qH*/;
/*aft_stmt:2099*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_1VEAq1qOhK(x) (x)
#define Tag2_realsmith_1VEAq1qOhK(x) (x)
#define Tag3_realsmith_1VEAq1qOhK(x) (x)
#define Tag4_realsmith_1VEAq1qOhK(x) (x)
#define Tag5_realsmith_1VEAq1qOhK(x) (x)
#define Tag6_realsmith_1VEAq1qOhK(x) (x)
#define Tag7_realsmith_1VEAq1qOhK(x) (x)
#define Tag8_realsmith_1VEAq1qOhK(x) (x)
#define Tag9_realsmith_1VEAq1qOhK(x) (x)
#define Tag10_realsmith_1VEAq1qOhK(x) (x)
#include "stdlib.h"
int realsmith_1VEAq1qOhK(int n_requested_mmu_pages_realsmith_1VEAq1qOhK, int old_flags_realsmith_1VEAq1qOhK, int new_flags_realsmith_1VEAq1qOhK, int change_realsmith_1VEAq1qOhK) {
    int KVM_MEM_LOG_DIRTY_PAGES_realsmith_1VEAq1qOhK = 1;
    int KVM_MR_DELETE_realsmith_1VEAq1qOhK = 2;
    int KVM_MR_FLAGS_ONLY_realsmith_1VEAq1qOhK = 3;
    /*bef_stmt:17232*/
if (!Tag1_realsmith_1VEAq1qOhK(/*int:17348:17348:17232:e*/n_requested_mmu_pages_realsmith_1VEAq1qOhK)) {
        n_requested_mmu_pages_realsmith_1VEAq1qOhK = 1;
    }
/*aft_stmt:17232*/
    /*bef_stmt:17311*/
/*bef_stmt:17311*/
/*bef_stmt:17311*/
/*bef_stmt:17311*/
/*bef_stmt:17311*/
/*bef_stmt:17311*/
if (Tag2_realsmith_1VEAq1qOhK(/*int:17348:17348:17311:e*/change_realsmith_1VEAq1qOhK) == Tag3_realsmith_1VEAq1qOhK(/*int:17348:17348:17311:e*/KVM_MR_FLAGS_ONLY_realsmith_1VEAq1qOhK) && (Tag4_realsmith_1VEAq1qOhK(/*int:17348:17348:17311:e*/old_flags_realsmith_1VEAq1qOhK) & Tag5_realsmith_1VEAq1qOhK(/*int:17348:17348:17311:e*/KVM_MEM_LOG_DIRTY_PAGES_realsmith_1VEAq1qOhK)) && !(Tag6_realsmith_1VEAq1qOhK(/*int:17348:17348:17311:e*/new_flags_realsmith_1VEAq1qOhK) & Tag7_realsmith_1VEAq1qOhK(/*int:17348:17348:17311:e*/KVM_MEM_LOG_DIRTY_PAGES_realsmith_1VEAq1qOhK))) {
    }
/*aft_stmt:17311*/
/*aft_stmt:17311*/
/*aft_stmt:17311*/
/*aft_stmt:17311*/
/*aft_stmt:17311*/
/*aft_stmt:17311*/
    /*bef_stmt:17335*/
/*bef_stmt:17335*/
if (Tag8_realsmith_1VEAq1qOhK(/*int:17348:17348:17335:e*/change_realsmith_1VEAq1qOhK) != Tag9_realsmith_1VEAq1qOhK(/*int:17348:17348:17335:e*/KVM_MR_DELETE_realsmith_1VEAq1qOhK)) {
    }
/*aft_stmt:17335*/
/*aft_stmt:17335*/
    /*bef_stmt:17346*/
return Tag10_realsmith_1VEAq1qOhK(/*int:17348:17348:17346:e*/n_requested_mmu_pages_realsmith_1VEAq1qOhK);
/*aft_stmt:17346*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_FMxbLidJb2(x) (x)
#define Tag2_realsmith_FMxbLidJb2(x) (x)
#define Tag3_realsmith_FMxbLidJb2(x) (x)
#include "stdlib.h"
int realsmith_FMxbLidJb2(int dev_res_release_realsmith_FMxbLidJb2, int devm_nvmem_cell_release_realsmith_FMxbLidJb2, int devm_nvmem_cell_match_realsmith_FMxbLidJb2, int cell_realsmith_FMxbLidJb2) {
    int ret_realsmith_FMxbLidJb2;
    /*bef_stmt:17168*/
ret_realsmith_FMxbLidJb2 = Tag1_realsmith_FMxbLidJb2(/*int:17229:17229:17168:e*/dev_res_release_realsmith_FMxbLidJb2);
/*aft_stmt:17168*/
    /*bef_stmt:17216*/
if (Tag2_realsmith_FMxbLidJb2(/*int:17229:17229:17216:e*/ret_realsmith_FMxbLidJb2) != 0) {
        (exit(1));
    }
/*aft_stmt:17216*/
    /*bef_stmt:17227*/
return Tag3_realsmith_FMxbLidJb2(/*int:17229:17229:17227:e*/ret_realsmith_FMxbLidJb2);
/*aft_stmt:17227*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_9I0rlwOh2x(x) (x)
#define Tag2_realsmith_9I0rlwOh2x(x) (x)
#define Tag3_realsmith_9I0rlwOh2x(x) (x)
#define Tag4_realsmith_9I0rlwOh2x(x) (x)
#define Tag5_realsmith_9I0rlwOh2x(x) (x)
#define Tag6_realsmith_9I0rlwOh2x(x) (x)
#include "stdlib.h"
struct vring_rx_desc_fv8vV3 {
    int security_value_realsmith_9I0rlwOh2x; // Simulating security retrieval
};
struct sk_buff_fv8vV3 {
    int cid_realsmith_9I0rlwOh2x; // Simulating CID retrieval
    struct vring_rx_desc_fv8vV3 *desc_realsmith_9I0rlwOh2x; // Pointer to descriptor
};
int realsmith_9I0rlwOh2x(int cid_realsmith_9I0rlwOh2x, int security_realsmith_9I0rlwOh2x) {
    struct sk_buff_fv8vV3 skb_realsmith_9I0rlwOh2x;
    /*bef_stmt:17243*/
skb_realsmith_9I0rlwOh2x.cid_realsmith_9I0rlwOh2x = /*TAG1:STA*/((int)(realsmith_YfmIwP1ViK((int)(cid_realsmith_9I0rlwOh2x)+(-37), (int)(cid_realsmith_9I0rlwOh2x)+(8), (int)(cid_realsmith_9I0rlwOh2x)+(41), (int)(cid_realsmith_9I0rlwOh2x)+(-19), (int)(cid_realsmith_9I0rlwOh2x)+(37), (int)(cid_realsmith_9I0rlwOh2x)+(-44))+(int)(cid_realsmith_9I0rlwOh2x)-(24))+cid_realsmith_9I0rlwOh2x)/*TAG1:END:cid_realsmith_9I0rlwOh2x*/;
/*aft_stmt:17243*/
    struct vring_rx_desc_fv8vV3 desc_realsmith_9I0rlwOh2x;
    /*bef_stmt:17296*/
desc_realsmith_9I0rlwOh2x.security_value_realsmith_9I0rlwOh2x = Tag2_realsmith_9I0rlwOh2x(/*int:17428:17428:17296:e*/security_realsmith_9I0rlwOh2x);
/*aft_stmt:17296*/
    skb_realsmith_9I0rlwOh2x.desc_realsmith_9I0rlwOh2x = &desc_realsmith_9I0rlwOh2x;
    /*bef_stmt:17361*/
int retrieved_cid_realsmith_9I0rlwOh2x = /*TAG3:STA*/((int)(realsmith_proxy_YLhaFLXg4p((unsigned char)(skb_realsmith_9I0rlwOh2x.cid_realsmith_9I0rlwOh2x)+(4))+(int)(skb_realsmith_9I0rlwOh2x.cid_realsmith_9I0rlwOh2x)-(46))+skb_realsmith_9I0rlwOh2x.cid_realsmith_9I0rlwOh2x)/*TAG3:END:skb_realsmith_9I0rlwOh2x.cid_realsmith_9I0rlwOh2x*/;
/*aft_stmt:17361*/
    /*bef_stmt:17402*/
int retrieved_security_realsmith_9I0rlwOh2x = Tag4_realsmith_9I0rlwOh2x(/*int:17428:17428:17402:e*/skb_realsmith_9I0rlwOh2x.desc_realsmith_9I0rlwOh2x->security_value_realsmith_9I0rlwOh2x);
/*aft_stmt:17402*/
    /*bef_stmt:17426*/
/*bef_stmt:17426*/
return /*TAG5:STA*/((int)(realsmith_MA2Y8BsfhE((int)(retrieved_cid_realsmith_9I0rlwOh2x)+(-31), (int)(retrieved_cid_realsmith_9I0rlwOh2x)+(11), (int)(retrieved_cid_realsmith_9I0rlwOh2x)+(30), (int)(retrieved_cid_realsmith_9I0rlwOh2x)+(33))+(int)(retrieved_cid_realsmith_9I0rlwOh2x)-(46))+retrieved_cid_realsmith_9I0rlwOh2x)/*TAG5:END:retrieved_cid_realsmith_9I0rlwOh2x*/ + /*TAG6:STA*/((int)(realsmith_proxy_TbKYLYVJNg((int)(retrieved_security_realsmith_9I0rlwOh2x)+(-68), (int)(retrieved_security_realsmith_9I0rlwOh2x)+(-68), (int)(retrieved_security_realsmith_9I0rlwOh2x)+(-71))+(int)(retrieved_security_realsmith_9I0rlwOh2x)-(111))+retrieved_security_realsmith_9I0rlwOh2x)/*TAG6:END:retrieved_security_realsmith_9I0rlwOh2x*/;
/*aft_stmt:17426*/
/*aft_stmt:17426*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_wzlX2JOZMB(x) (x)
#include "stdint.h"
int realsmith_wzlX2JOZMB(int val_realsmith_wzlX2JOZMB) {
    /*bef_stmt:1995*/
return ((/*TAG1:STA*/((val_realsmith_wzlX2JOZMB) + (g_M65HXT) - 43)/*TAG1:END:val_realsmith_wzlX2JOZMB*/) << 8) & 0xFF;
g_M65HXT = 43 + (val_realsmith_wzlX2JOZMB - (90));
/*aft_stmt:1995*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_8GdZcGbAnn(x) (x)
#define Tag2_realsmith_8GdZcGbAnn(x) (x)
#define Tag3_realsmith_8GdZcGbAnn(x) (x)
#define Tag4_realsmith_8GdZcGbAnn(x) (x)
#define Tag5_realsmith_8GdZcGbAnn(x) (x)
#define Tag6_realsmith_8GdZcGbAnn(x) (x)
#define Tag7_realsmith_8GdZcGbAnn(x) (x)
#define Tag8_realsmith_8GdZcGbAnn(x) (x)
#include "stdlib.h"
typedef struct {
    int func_realsmith_8GdZcGbAnn;
    int irq_wq_realsmith_8GdZcGbAnn;
    int irq_handling_realsmith_8GdZcGbAnn;
} ath6kl_sdio_9JvJSd;
int realsmith_8GdZcGbAnn(int irq_handling_realsmith_8GdZcGbAnn, int func_realsmith_8GdZcGbAnn, int irq_wq_realsmith_8GdZcGbAnn) {
    ath6kl_sdio_9JvJSd ar_sdio_realsmith_8GdZcGbAnn;
    /*bef_stmt:17245*/
ar_sdio_realsmith_8GdZcGbAnn.func_realsmith_8GdZcGbAnn = Tag1_realsmith_8GdZcGbAnn(/*int:17421:17421:17245:e*/func_realsmith_8GdZcGbAnn);
/*aft_stmt:17245*/
    /*bef_stmt:17279*/
ar_sdio_realsmith_8GdZcGbAnn.irq_handling_realsmith_8GdZcGbAnn = Tag2_realsmith_8GdZcGbAnn(/*int:17421:17421:17279:e*/irq_handling_realsmith_8GdZcGbAnn);
/*aft_stmt:17279*/
    /*bef_stmt:17300*/
ar_sdio_realsmith_8GdZcGbAnn.irq_wq_realsmith_8GdZcGbAnn = Tag3_realsmith_8GdZcGbAnn(/*int:17421:17421:17300:e*/irq_wq_realsmith_8GdZcGbAnn);
/*aft_stmt:17300*/
    int ret_realsmith_8GdZcGbAnn;
    /*bef_stmt:17375*/
if (Tag4_realsmith_8GdZcGbAnn(/*int:17421:17421:17375:e*/ar_sdio_realsmith_8GdZcGbAnn.irq_handling_realsmith_8GdZcGbAnn)) {
        ret_realsmith_8GdZcGbAnn = 0;
        /*bef_stmt:17367*/
if (Tag5_realsmith_8GdZcGbAnn(/*int:17421:17421:17367:e*/ret_realsmith_8GdZcGbAnn)) {
            /*bef_stmt:17362*/
return Tag6_realsmith_8GdZcGbAnn(/*int:17421:17421:17362:e*/ret_realsmith_8GdZcGbAnn);
/*aft_stmt:17362*/
        }
/*aft_stmt:17367*/
    }
/*aft_stmt:17375*/
    ret_realsmith_8GdZcGbAnn = 0;
    /*bef_stmt:17411*/
if (Tag7_realsmith_8GdZcGbAnn(/*int:17421:17421:17411:e*/ret_realsmith_8GdZcGbAnn)) {
        /*bef_stmt:17405*/
return Tag8_realsmith_8GdZcGbAnn(/*int:17421:17421:17405:e*/ret_realsmith_8GdZcGbAnn);
/*aft_stmt:17405*/
    }
/*aft_stmt:17411*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_hwRdfbxV8r(x) (x)
#define Tag2_realsmith_hwRdfbxV8r(x) (x)
#define Tag3_realsmith_hwRdfbxV8r(x) (x)
#include "stdlib.h"
int realsmith_hwRdfbxV8r(int sw_enable_realsmith_hwRdfbxV8r, int reg_update_realsmith_hwRdfbxV8r) {
    /*bef_stmt:17134*/
/*bef_stmt:17134*/
int control_realsmith_hwRdfbxV8r = /*TAG1:STA*/((sw_enable_realsmith_hwRdfbxV8r) + (g_RWTYM9) - -69)/*TAG1:END:sw_enable_realsmith_hwRdfbxV8r*/ | /*TAG2:STA*/((reg_update_realsmith_hwRdfbxV8r) + (g_B4USED) - 84)/*TAG2:END:reg_update_realsmith_hwRdfbxV8r*/;
g_RWTYM9 = -69 + (sw_enable_realsmith_hwRdfbxV8r - (56));
g_B4USED = 84 + (reg_update_realsmith_hwRdfbxV8r - (77));
/*aft_stmt:17134*/
/*aft_stmt:17134*/
    /*bef_stmt:17144*/
return /*TAG3:STA*/((int)(realsmith_S5SF8pFI0o((int)(control_realsmith_hwRdfbxV8r)+(-78), (int)(control_realsmith_hwRdfbxV8r)+(-27), (int)(control_realsmith_hwRdfbxV8r)+(-40), (int)(control_realsmith_hwRdfbxV8r)+(-83))+(int)(control_realsmith_hwRdfbxV8r)-(223))+control_realsmith_hwRdfbxV8r)/*TAG3:END:control_realsmith_hwRdfbxV8r*/;
/*aft_stmt:17144*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_SNj7c60ezP(x) (x)
#define Tag2_realsmith_SNj7c60ezP(x) (x)
#define Tag3_realsmith_SNj7c60ezP(x) (x)
#define Tag4_realsmith_SNj7c60ezP(x) (x)
#define Tag5_realsmith_SNj7c60ezP(x) (x)
#define Tag6_realsmith_SNj7c60ezP(x) (x)
#define Tag7_realsmith_SNj7c60ezP(x) (x)
#include "stdlib.h"
int realsmith_SNj7c60ezP(int chip_op_mode_realsmith_SNj7c60ezP, int chip_config_realsmith_SNj7c60ezP, int is_extclk_used_realsmith_SNj7c60ezP) {
    int ret_realsmith_SNj7c60ezP;
    unsigned char cfg_realsmith_SNj7c60ezP = 0;
    /*bef_stmt:17175*/
ret_realsmith_SNj7c60ezP = /*TAG1:STA*/((chip_op_mode_realsmith_SNj7c60ezP) + (g_MW3YJP[5]) - 46)/*TAG1:END:chip_op_mode_realsmith_SNj7c60ezP*/;
g_MW3YJP[5] = 46 + (chip_op_mode_realsmith_SNj7c60ezP - (46));
/*aft_stmt:17175*/
    /*bef_stmt:17195*/
/*bef_stmt:17195*/
if (/*TAG2:STA*/((int)(realsmith_nxGGmmQSct((int)(ret_realsmith_SNj7c60ezP)+(-15), (unsigned int)(ret_realsmith_SNj7c60ezP)+(-32), (unsigned int)(ret_realsmith_SNj7c60ezP)+(7), (unsigned int)(ret_realsmith_SNj7c60ezP)+(0))+(int)(ret_realsmith_SNj7c60ezP)-(46))+ret_realsmith_SNj7c60ezP)/*TAG2:END:ret_realsmith_SNj7c60ezP*/)
        return /*TAG3:STA*/((ret_realsmith_SNj7c60ezP) + (g_031K19) - -65)/*TAG3:END:ret_realsmith_SNj7c60ezP*/;
g_031K19 = -65 + (ret_realsmith_SNj7c60ezP - (46));
/*aft_stmt:17195*/
/*aft_stmt:17195*/
    /*bef_stmt:17223*/
if (!Tag4_realsmith_SNj7c60ezP(/*int:17268:17268:17223:e*/is_extclk_used_realsmith_SNj7c60ezP))
        cfg_realsmith_SNj7c60ezP |= 1;
/*aft_stmt:17223*/
    /*bef_stmt:17238*/
ret_realsmith_SNj7c60ezP = Tag5_realsmith_SNj7c60ezP(/*int:17268:17268:17238:e*/chip_config_realsmith_SNj7c60ezP);
/*aft_stmt:17238*/
    /*bef_stmt:17258*/
/*bef_stmt:17258*/
if (Tag6_realsmith_SNj7c60ezP(/*int:17268:17268:17258:e*/ret_realsmith_SNj7c60ezP))
        return Tag7_realsmith_SNj7c60ezP(/*int:17268:17268:17258:e*/ret_realsmith_SNj7c60ezP);
/*aft_stmt:17258*/
/*aft_stmt:17258*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_kpoDErHANy(x) (x)
#define Tag2_realsmith_kpoDErHANy(x) (x)
#define Tag3_realsmith_kpoDErHANy(x) (x)
#define Tag4_realsmith_kpoDErHANy(x) (x)
#define Tag5_realsmith_kpoDErHANy(x) (x)
#define Tag6_realsmith_kpoDErHANy(x) (x)
#define Tag7_realsmith_kpoDErHANy(x) (x)
#define Tag8_realsmith_kpoDErHANy(x) (x)
#define Tag9_realsmith_kpoDErHANy(x) (x)
#define Tag10_realsmith_kpoDErHANy(x) (x)
#include "stdlib.h"
struct vnt_private_DLnmI2 {
    int irq_realsmith_kpoDErHANy;
    int dev_realsmith_kpoDErHANy;
    int PortOffset_realsmith_kpoDErHANy;
    int rx_buf_sz_realsmith_kpoDErHANy;
};
int realsmith_kpoDErHANy(int irq_realsmith_kpoDErHANy, int dev_realsmith_kpoDErHANy, int PortOffset_realsmith_kpoDErHANy) {
    struct vnt_private_DLnmI2 priv_realsmith_kpoDErHANy;
    /*bef_stmt:17235*/
priv_realsmith_kpoDErHANy.irq_realsmith_kpoDErHANy = /*TAG1:STA*/((int)(realsmith_YrWTcBSBuT((int)(irq_realsmith_kpoDErHANy)+(-64), (int)(irq_realsmith_kpoDErHANy)+(-45), (int)(irq_realsmith_kpoDErHANy)+(-72), (unsigned int)(irq_realsmith_kpoDErHANy)+(-6), (unsigned int)(irq_realsmith_kpoDErHANy)+(-4), (int)(irq_realsmith_kpoDErHANy)+(6))+(int)(irq_realsmith_kpoDErHANy)-(88))+irq_realsmith_kpoDErHANy)/*TAG1:END:irq_realsmith_kpoDErHANy*/;
/*aft_stmt:17235*/
    /*bef_stmt:17270*/
priv_realsmith_kpoDErHANy.dev_realsmith_kpoDErHANy = /*TAG2:STA*/((dev_realsmith_kpoDErHANy) + (g_AB9GOX[3]) - -69)/*TAG2:END:dev_realsmith_kpoDErHANy*/;
g_AB9GOX[3] = -69 + (dev_realsmith_kpoDErHANy - (15));
/*aft_stmt:17270*/
    /*bef_stmt:17291*/
priv_realsmith_kpoDErHANy.PortOffset_realsmith_kpoDErHANy = /*TAG3:STA*/((int)(realsmith_2tE4dcsL2s((int)(PortOffset_realsmith_kpoDErHANy)+(46))+(int)(PortOffset_realsmith_kpoDErHANy)-(65))+PortOffset_realsmith_kpoDErHANy)/*TAG3:END:PortOffset_realsmith_kpoDErHANy*/;
/*aft_stmt:17291*/
    priv_realsmith_kpoDErHANy.rx_buf_sz_realsmith_kpoDErHANy = 1024;
    int ret_realsmith_kpoDErHANy;
    int rings_initialized_realsmith_kpoDErHANy = 1;
    /*bef_stmt:17374*/
if (!/*TAG4:STA*/((rings_initialized_realsmith_kpoDErHANy) + (g_R4L6DT) - 124)/*TAG4:END:rings_initialized_realsmith_kpoDErHANy*/)
        return -12;
g_R4L6DT = 124 + (rings_initialized_realsmith_kpoDErHANy - (1));
/*aft_stmt:17374*/
    ret_realsmith_kpoDErHANy = 0;
    /*bef_stmt:17411*/
if (/*TAG5:STA*/((ret_realsmith_kpoDErHANy) + (g_R4L6DT) - 124)/*TAG5:END:ret_realsmith_kpoDErHANy*/) {
        return -1;
    }
g_R4L6DT = 124 + (ret_realsmith_kpoDErHANy - (0));
/*aft_stmt:17411*/
    ret_realsmith_kpoDErHANy = 0;
    /*bef_stmt:17447*/
if (Tag6_realsmith_kpoDErHANy(/*int:17590:17590:17447:e*/ret_realsmith_kpoDErHANy))
        goto err_free_irq;
/*aft_stmt:17447*/
    ret_realsmith_kpoDErHANy = 0;
    /*bef_stmt:17483*/
if (/*TAG7:STA*/((ret_realsmith_kpoDErHANy) + (g_AB9GOX[1]) - -114)/*TAG7:END:ret_realsmith_kpoDErHANy*/)
        goto err_free_rd0_ring;
g_AB9GOX[1] = -114 + (ret_realsmith_kpoDErHANy - (0));
/*aft_stmt:17483*/
    ret_realsmith_kpoDErHANy = 0;
    /*bef_stmt:17519*/
if (Tag8_realsmith_kpoDErHANy(/*int:17590:17590:17519:e*/ret_realsmith_kpoDErHANy))
        goto err_free_rd1_ring;
/*aft_stmt:17519*/
    ret_realsmith_kpoDErHANy = 0;
    /*bef_stmt:17555*/
if (/*TAG9:STA*/((int)(realsmith_proxy_jLiGP7wAe7((int)(ret_realsmith_kpoDErHANy)+(1), (int)(ret_realsmith_kpoDErHANy)+(47), (unsigned int)(ret_realsmith_kpoDErHANy)+(56))+(int)(ret_realsmith_kpoDErHANy)-(0))+ret_realsmith_kpoDErHANy)/*TAG9:END:ret_realsmith_kpoDErHANy*/)
        goto err_free_td0_ring;
/*aft_stmt:17555*/
    return 0;
/*bef_stmt:17586*/
err_free_td0_ring:
err_free_rd1_ring:
err_free_rd0_ring:
err_free_irq:
    return Tag10_realsmith_kpoDErHANy(/*int:17590:17590:17586:e*/ret_realsmith_kpoDErHANy);
/*aft_stmt:17586*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_ceIJJ8HUAq(x) (x)
#define Tag2_realsmith_proxy_ceIJJ8HUAq(x) (x)
#define Tag3_realsmith_proxy_ceIJJ8HUAq(x) (x)
#define Tag4_realsmith_proxy_ceIJJ8HUAq(x) (x)
#define Tag5_realsmith_proxy_ceIJJ8HUAq(x) (x)
#define Tag6_realsmith_proxy_ceIJJ8HUAq(x) (x)
#define Tag7_realsmith_proxy_ceIJJ8HUAq(x) (x)
#include "stdlib.h"
int realsmith_JUcKDm005G(int control_word_realsmith_JUcKDm005G, int *partial_status_realsmith_JUcKDm005G) {
    const int CW_Precision_realsmith_JUcKDm005G = 1;
    const int SW_C1_realsmith_JUcKDm005G = 2;
    const int SW_Precision_realsmith_JUcKDm005G = 4;
    const int EX_Precision_realsmith_JUcKDm005G = -1;
    /*bef_stmt:17318*/
/*bef_stmt:17318*/
if (/*TAG1:STA*/((control_word_realsmith_JUcKDm005G) + (g_BNNLY0[0]) - 124)/*TAG1:END:control_word_realsmith_JUcKDm005G*/ & /*TAG2:STA*/((int)(realsmith_K0fqHX8iFn((int)(CW_Precision_realsmith_JUcKDm005G)+(21), (int)(CW_Precision_realsmith_JUcKDm005G)+(90), (int)(CW_Precision_realsmith_JUcKDm005G)+(24))+(int)(CW_Precision_realsmith_JUcKDm005G)-(1))+CW_Precision_realsmith_JUcKDm005G)/*TAG2:END:CW_Precision_realsmith_JUcKDm005G*/) {
        /*bef_stmt:17244*/
*partial_status_realsmith_JUcKDm005G &= ~Tag3_realsmith_proxy_ceIJJ8HUAq(/*const int:17324:17324:17244:e*/SW_C1_realsmith_JUcKDm005G);
/*aft_stmt:17244*/
        /*bef_stmt:17278*/
*partial_status_realsmith_JUcKDm005G |= Tag4_realsmith_proxy_ceIJJ8HUAq(/*const int:17324:17324:17278:e*/SW_Precision_realsmith_JUcKDm005G);
/*aft_stmt:17278*/
        return 0;
    } else {
        /*bef_stmt:17313*/
return /*TAG5:STA*/((EX_Precision_realsmith_JUcKDm005G) + (g_IU97RO[2]) - -114)/*TAG5:END:EX_Precision_realsmith_JUcKDm005G*/;
g_IU97RO[2] = -114 + (EX_Precision_realsmith_JUcKDm005G - (-1));
/*aft_stmt:17313*/
    }
g_BNNLY0[0] = 124 + (control_word_realsmith_JUcKDm005G - (24));
/*aft_stmt:17318*/
/*aft_stmt:17318*/
}
int realsmith_proxy_ceIJJ8HUAq(int p_0_R3WwPNH9C6, int p_1_eL3tUEB1IZ) {
/*bef_stmt:17457*/
int proxy_ret_NGtJJfjjeB = realsmith_JUcKDm005G(/*TAG6:STA*/((int)(realsmith_K2e4MIsU5m((unsigned int)(p_0_R3WwPNH9C6)+(64), (unsigned int)(p_0_R3WwPNH9C6)+(24), (unsigned int)(p_0_R3WwPNH9C6)+(-3), (unsigned int)(p_0_R3WwPNH9C6)+(62))+(unsigned int)(p_0_R3WwPNH9C6)-(24))+p_0_R3WwPNH9C6)/*TAG6:END:p_0_R3WwPNH9C6*/, &(p_1_eL3tUEB1IZ));
/*aft_stmt:17457*/
/*bef_stmt:17467*/
return /*TAG7:STA*/((int)(realsmith_zJmySpcrqB((unsigned int)(proxy_ret_NGtJJfjjeB)+(-4294967262), (unsigned int)(proxy_ret_NGtJJfjjeB)+(-4294967219), (int)(proxy_ret_NGtJJfjjeB)+(10), (int)(proxy_ret_NGtJJfjjeB)+(66))+((unsigned int)(proxy_ret_NGtJJfjjeB)-(4294967295))-(76))+proxy_ret_NGtJJfjjeB)/*TAG7:END:proxy_ret_NGtJJfjjeB*/;
/*aft_stmt:17467*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_j0xc67x4IZ(x) (x)
#define Tag2_realsmith_j0xc67x4IZ(x) (x)
#include "stdlib.h"
int realsmith_j0xc67x4IZ(int phy_type_realsmith_j0xc67x4IZ, int phy_rev_realsmith_j0xc67x4IZ) {
    /*bef_stmt:17140*/
/*bef_stmt:17140*/
if (Tag1_realsmith_j0xc67x4IZ(/*int:17150:17150:17140:e*/phy_type_realsmith_j0xc67x4IZ) != 1 || Tag2_realsmith_j0xc67x4IZ(/*int:17150:17150:17140:e*/phy_rev_realsmith_j0xc67x4IZ) < 2)
        return 0;
/*aft_stmt:17140*/
/*aft_stmt:17140*/
    return 1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_mxKhDtOSqA(x) (x)
#define Tag2_realsmith_mxKhDtOSqA(x) (x)
#define Tag3_realsmith_mxKhDtOSqA(x) (x)
#define Tag4_realsmith_mxKhDtOSqA(x) (x)
#define Tag5_realsmith_mxKhDtOSqA(x) (x)
#define Tag6_realsmith_mxKhDtOSqA(x) (x)
#include "stdlib.h"
struct mgmt_ev_device_added_FkDbnw {
    unsigned long bdaddr_realsmith_mxKhDtOSqA; // Simulating bdaddr_t as unsigned long for numeric representation
    unsigned char type_realsmith_mxKhDtOSqA;
    unsigned char action_realsmith_mxKhDtOSqA;
};
int realsmith_mxKhDtOSqA(unsigned long bdaddr_realsmith_mxKhDtOSqA, unsigned char type_realsmith_mxKhDtOSqA, unsigned char action_realsmith_mxKhDtOSqA) {
    struct mgmt_ev_device_added_FkDbnw ev_realsmith_mxKhDtOSqA;
    /*bef_stmt:17223*/
ev_realsmith_mxKhDtOSqA.bdaddr_realsmith_mxKhDtOSqA = Tag1_realsmith_mxKhDtOSqA(/*unsigned long:17353:17353:17223:e*/bdaddr_realsmith_mxKhDtOSqA);
/*aft_stmt:17223*/
    /*bef_stmt:17257*/
ev_realsmith_mxKhDtOSqA.type_realsmith_mxKhDtOSqA = Tag2_realsmith_mxKhDtOSqA(/*unsigned char:17353:17353:17257:e*/type_realsmith_mxKhDtOSqA);
/*aft_stmt:17257*/
    /*bef_stmt:17278*/
ev_realsmith_mxKhDtOSqA.action_realsmith_mxKhDtOSqA = Tag3_realsmith_mxKhDtOSqA(/*unsigned char:17353:17353:17278:e*/action_realsmith_mxKhDtOSqA);
/*aft_stmt:17278*/
    /*bef_stmt:17351*/
/*bef_stmt:17351*/
/*bef_stmt:17351*/
return (int)(Tag4_realsmith_mxKhDtOSqA(/*unsigned long:17353:17353:17351:e*/ev_realsmith_mxKhDtOSqA.bdaddr_realsmith_mxKhDtOSqA) + Tag5_realsmith_mxKhDtOSqA(/*unsigned char:17353:17353:17351:e*/ev_realsmith_mxKhDtOSqA.type_realsmith_mxKhDtOSqA) + Tag6_realsmith_mxKhDtOSqA(/*unsigned char:17353:17353:17351:e*/ev_realsmith_mxKhDtOSqA.action_realsmith_mxKhDtOSqA));
/*aft_stmt:17351*/
/*aft_stmt:17351*/
/*aft_stmt:17351*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ck2G2n01g7(x) (x)
#define Tag2_realsmith_ck2G2n01g7(x) (x)
#define Tag3_realsmith_ck2G2n01g7(x) (x)
#define Tag4_realsmith_ck2G2n01g7(x) (x)
#include "stdlib.h"
int realsmith_ck2G2n01g7(int def_ant_realsmith_ck2G2n01g7, int diversity_realsmith_ck2G2n01g7) {
    int TX_ANTENNA_realsmith_ck2G2n01g7 = 0;
    int cck_0C_realsmith_ck2G2n01g7 = 0x09;
    int cck_11_realsmith_ck2G2n01g7, cck_01_realsmith_ck2G2n01g7, ofdm_0D_realsmith_ck2G2n01g7, ofdm_18_realsmith_ck2G2n01g7;
    /*bef_stmt:17543*/
if (Tag1_realsmith_ck2G2n01g7(/*int:17558:17558:17543:e*/diversity_realsmith_ck2G2n01g7)) {
        /*bef_stmt:17374*/
if (Tag2_realsmith_ck2G2n01g7(/*int:17558:17558:17374:e*/def_ant_realsmith_ck2G2n01g7) == 1) {
            TX_ANTENNA_realsmith_ck2G2n01g7 = 0x00;
            cck_11_realsmith_ck2G2n01g7 = 0xBB;
            cck_01_realsmith_ck2G2n01g7 = 0xC7;
            ofdm_0D_realsmith_ck2G2n01g7 = 0x54;
            ofdm_18_realsmith_ck2G2n01g7 = 0xB2;
        } else {
            TX_ANTENNA_realsmith_ck2G2n01g7 = 0x03;
            cck_11_realsmith_ck2G2n01g7 = 0x9B;
            cck_01_realsmith_ck2G2n01g7 = 0xC7;
            ofdm_0D_realsmith_ck2G2n01g7 = 0x5C;
            ofdm_18_realsmith_ck2G2n01g7 = 0xB2;
        }
/*aft_stmt:17374*/
    } else {
        /*bef_stmt:17534*/
if (Tag3_realsmith_ck2G2n01g7(/*int:17558:17558:17534:e*/def_ant_realsmith_ck2G2n01g7) == 1) {
            TX_ANTENNA_realsmith_ck2G2n01g7 = 0x00;
            cck_11_realsmith_ck2G2n01g7 = 0xBB;
            cck_01_realsmith_ck2G2n01g7 = 0x47;
            ofdm_0D_realsmith_ck2G2n01g7 = 0x54;
            ofdm_18_realsmith_ck2G2n01g7 = 0x32;
        } else {
            TX_ANTENNA_realsmith_ck2G2n01g7 = 0x03;
            cck_11_realsmith_ck2G2n01g7 = 0x9B;
            cck_01_realsmith_ck2G2n01g7 = 0x47;
            ofdm_0D_realsmith_ck2G2n01g7 = 0x5C;
            ofdm_18_realsmith_ck2G2n01g7 = 0x32;
        }
/*aft_stmt:17534*/
    }
/*aft_stmt:17543*/
    /*bef_stmt:17556*/
return Tag4_realsmith_ck2G2n01g7(/*int:17558:17558:17556:e*/TX_ANTENNA_realsmith_ck2G2n01g7);
/*aft_stmt:17556*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_G0YfymIU2K(x) (x)
#define Tag2_realsmith_G0YfymIU2K(x) (x)
#define Tag3_realsmith_G0YfymIU2K(x) (x)
#define Tag4_realsmith_G0YfymIU2K(x) (x)
#include "stdlib.h"
int realsmith_G0YfymIU2K(unsigned int status_realsmith_G0YfymIU2K, unsigned int chno_realsmith_G0YfymIU2K) {
    unsigned int reg_realsmith_G0YfymIU2K, pcnt_realsmith_G0YfymIU2K;
    /*bef_stmt:17160*/
pcnt_realsmith_G0YfymIU2K = Tag1_realsmith_G0YfymIU2K(/*unsigned int:17257:17257:17160:e*/status_realsmith_G0YfymIU2K) & 0xFFFF;
/*aft_stmt:17160*/
    /*bef_stmt:17202*/
reg_realsmith_G0YfymIU2K = ((Tag2_realsmith_G0YfymIU2K(/*unsigned int:17257:17257:17202:e*/pcnt_realsmith_G0YfymIU2K)) << 16) | 0x2;
/*aft_stmt:17202*/
    /*bef_stmt:17241*/
if (Tag3_realsmith_G0YfymIU2K(/*unsigned int:17257:17257:17241:e*/status_realsmith_G0YfymIU2K) & 0x1)
        reg_realsmith_G0YfymIU2K |= 0x4;
/*aft_stmt:17241*/
    /*bef_stmt:17255*/
return Tag4_realsmith_G0YfymIU2K(/*unsigned int:17257:17257:17255:e*/reg_realsmith_G0YfymIU2K);
/*aft_stmt:17255*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_VySxaUYb3o(x) (x)
#define Tag2_realsmith_VySxaUYb3o(x) (x)
#define Tag3_realsmith_VySxaUYb3o(x) (x)
#define Tag4_realsmith_VySxaUYb3o(x) (x)
#define Tag5_realsmith_VySxaUYb3o(x) (x)
#include "stdlib.h"
unsigned int realsmith_VySxaUYb3o(unsigned int timer_quantum_ns_realsmith_VySxaUYb3o, unsigned int usecs_realsmith_VySxaUYb3o) {
    /*bef_stmt:17127*/
if (/*TAG1:STA*/((unsigned int)(realsmith_hcQLqcTCWi((int)(usecs_realsmith_VySxaUYb3o)+(11), (int)(usecs_realsmith_VySxaUYb3o)+(32))+(int)(usecs_realsmith_VySxaUYb3o)-(4128841))+usecs_realsmith_VySxaUYb3o)/*TAG1:END:usecs_realsmith_VySxaUYb3o*/ == 0)
        return 0;
/*aft_stmt:17127*/
    /*bef_stmt:17169*/
/*bef_stmt:17169*/
if (Tag2_realsmith_VySxaUYb3o(/*unsigned int:17204:17204:17169:e*/usecs_realsmith_VySxaUYb3o) * 1000 < Tag3_realsmith_VySxaUYb3o(/*unsigned int:17204:17204:17169:e*/timer_quantum_ns_realsmith_VySxaUYb3o))
        return 1;
/*aft_stmt:17169*/
/*aft_stmt:17169*/
    /*bef_stmt:17202*/
/*bef_stmt:17202*/
return /*TAG4:STA*/((unsigned int)(realsmith_GA08X0OvNK((int)(usecs_realsmith_VySxaUYb3o)+(-16), (int)(usecs_realsmith_VySxaUYb3o)+(44))+(unsigned int)(usecs_realsmith_VySxaUYb3o)-(305420017))+usecs_realsmith_VySxaUYb3o)/*TAG4:END:usecs_realsmith_VySxaUYb3o*/ * 1000 / Tag5_realsmith_VySxaUYb3o(/*unsigned int:17204:17204:17202:e*/timer_quantum_ns_realsmith_VySxaUYb3o);
/*aft_stmt:17202*/
/*aft_stmt:17202*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_TFu3SGb5A5(x) (x)
#define Tag2_realsmith_TFu3SGb5A5(x) (x)
#define Tag3_realsmith_TFu3SGb5A5(x) (x)
#define Tag4_realsmith_TFu3SGb5A5(x) (x)
#define Tag5_realsmith_TFu3SGb5A5(x) (x)
#define Tag6_realsmith_TFu3SGb5A5(x) (x)
#define Tag7_realsmith_TFu3SGb5A5(x) (x)
#define Tag8_realsmith_TFu3SGb5A5(x) (x)
#define Tag9_realsmith_TFu3SGb5A5(x) (x)
#define Tag10_realsmith_TFu3SGb5A5(x) (x)
#define Tag11_realsmith_TFu3SGb5A5(x) (x)
#define Tag12_realsmith_TFu3SGb5A5(x) (x)
#define Tag13_realsmith_TFu3SGb5A5(x) (x)
#define Tag14_realsmith_TFu3SGb5A5(x) (x)
#define Tag15_realsmith_TFu3SGb5A5(x) (x)
#define Tag16_realsmith_TFu3SGb5A5(x) (x)
#define Tag17_realsmith_TFu3SGb5A5(x) (x)
#define Tag18_realsmith_TFu3SGb5A5(x) (x)
#define Tag19_realsmith_TFu3SGb5A5(x) (x)
#define Tag20_realsmith_TFu3SGb5A5(x) (x)
#define Tag21_realsmith_TFu3SGb5A5(x) (x)
#define Tag22_realsmith_TFu3SGb5A5(x) (x)
#define Tag23_realsmith_TFu3SGb5A5(x) (x)
#define Tag24_realsmith_TFu3SGb5A5(x) (x)
#define Tag25_realsmith_TFu3SGb5A5(x) (x)
#define Tag26_realsmith_TFu3SGb5A5(x) (x)
#include "stddef.h"
int realsmith_TFu3SGb5A5(int pgd_order_realsmith_TFu3SGb5A5, int pmd_order_realsmith_TFu3SGb5A5, int pte_order_realsmith_TFu3SGb5A5) {
    int struct_page_size_realsmith_TFu3SGb5A5 = sizeof(int);
    int mm_users_offset_realsmith_TFu3SGb5A5 = sizeof(int) * 0;
    int mm_pgd_offset_realsmith_TFu3SGb5A5 = sizeof(int) * 1;
    int mm_context_offset_realsmith_TFu3SGb5A5 = sizeof(int) * 2;
    int pgd_t_size_realsmith_TFu3SGb5A5 = sizeof(int);
    int pmd_t_size_realsmith_TFu3SGb5A5 = sizeof(int);
    int pte_t_size_realsmith_TFu3SGb5A5 = sizeof(int);
    /*bef_stmt:1013*/
int pgd_t_log2_realsmith_TFu3SGb5A5 = /*TAG1:STA*/((int)(realsmith_LUkJLkA80j((int)(pgd_order_realsmith_TFu3SGb5A5)+(72), (int)(pgd_order_realsmith_TFu3SGb5A5)+(70), (int)(pgd_order_realsmith_TFu3SGb5A5)+(89))+(int)(pgd_order_realsmith_TFu3SGb5A5)-(1))+pgd_order_realsmith_TFu3SGb5A5)/*TAG1:END:pgd_order_realsmith_TFu3SGb5A5*/;
/*aft_stmt:1013*/
    /*bef_stmt:1044*/
int pmd_t_log2_realsmith_TFu3SGb5A5 = /*TAG2:STA*/((pmd_order_realsmith_TFu3SGb5A5) + (g_RWTYM9) - -69)/*TAG2:END:pmd_order_realsmith_TFu3SGb5A5*/;
g_RWTYM9 = -69 + (pmd_order_realsmith_TFu3SGb5A5 - (4));
/*aft_stmt:1044*/
    /*bef_stmt:1070*/
int pte_t_log2_realsmith_TFu3SGb5A5 = /*TAG3:STA*/((int)(realsmith_O5MT6JlnjU((int)(pte_order_realsmith_TFu3SGb5A5)+(64), (int)(pte_order_realsmith_TFu3SGb5A5)+(83), (int)(pte_order_realsmith_TFu3SGb5A5)+(50), (int)(pte_order_realsmith_TFu3SGb5A5)+(86), (int)(pte_order_realsmith_TFu3SGb5A5)+(88), (int)(pte_order_realsmith_TFu3SGb5A5)+(44), (int)(pte_order_realsmith_TFu3SGb5A5)+(89), (int)(pte_order_realsmith_TFu3SGb5A5)+(85), (int)(pte_order_realsmith_TFu3SGb5A5)+(78), (int)(pte_order_realsmith_TFu3SGb5A5)+(4), (int)(pte_order_realsmith_TFu3SGb5A5)+(36), (int)(pte_order_realsmith_TFu3SGb5A5)+(71), (int)(pte_order_realsmith_TFu3SGb5A5)+(73), (int)(pte_order_realsmith_TFu3SGb5A5)+(68), (int)(pte_order_realsmith_TFu3SGb5A5)+(-1), (int)(pte_order_realsmith_TFu3SGb5A5)+(16), (int)(pte_order_realsmith_TFu3SGb5A5)+(-3), (int)(pte_order_realsmith_TFu3SGb5A5)+(78), (int)(pte_order_realsmith_TFu3SGb5A5)+(14), (int)(pte_order_realsmith_TFu3SGb5A5)+(7))+(int)(pte_order_realsmith_TFu3SGb5A5)-(3))+pte_order_realsmith_TFu3SGb5A5)/*TAG3:END:pte_order_realsmith_TFu3SGb5A5*/;
/*aft_stmt:1070*/
    /*bef_stmt:1096*/
int pmd_shift_realsmith_TFu3SGb5A5 = /*TAG4:STA*/((int)(realsmith_proxy_wdSKqCX4Cd((int)(pmd_order_realsmith_TFu3SGb5A5)+(0), (int)(pmd_order_realsmith_TFu3SGb5A5)+(88))+(int)(pmd_order_realsmith_TFu3SGb5A5)-(96))+pmd_order_realsmith_TFu3SGb5A5)/*TAG4:END:pmd_order_realsmith_TFu3SGb5A5*/;
/*aft_stmt:1096*/
    /*bef_stmt:1122*/
int pgdir_shift_realsmith_TFu3SGb5A5 = /*TAG5:STA*/((int)(realsmith_uxBE2UJCSF((int)(pgd_order_realsmith_TFu3SGb5A5)+(92), (int)(pgd_order_realsmith_TFu3SGb5A5)+(97), (int)(pgd_order_realsmith_TFu3SGb5A5)+(36), (unsigned int)(pgd_order_realsmith_TFu3SGb5A5)+(51))+(int)(pgd_order_realsmith_TFu3SGb5A5)-(0))+pgd_order_realsmith_TFu3SGb5A5)/*TAG5:END:pgd_order_realsmith_TFu3SGb5A5*/;
/*aft_stmt:1122*/
    /*bef_stmt:1156*/
int ptrs_per_pgd_realsmith_TFu3SGb5A5 = 1 << /*TAG6:STA*/((pgd_order_realsmith_TFu3SGb5A5) + (g_R4L6DT) - 124)/*TAG6:END:pgd_order_realsmith_TFu3SGb5A5*/;
g_R4L6DT = 124 + (pgd_order_realsmith_TFu3SGb5A5 - (0));
/*aft_stmt:1156*/
    /*bef_stmt:1190*/
int ptrs_per_pmd_realsmith_TFu3SGb5A5 = 1 << /*TAG7:STA*/((int)(realsmith_kseoDYdQwH((int)(pmd_order_realsmith_TFu3SGb5A5)+(30), (int)(pmd_order_realsmith_TFu3SGb5A5)+(83), (int)(pmd_order_realsmith_TFu3SGb5A5)+(69), (int)(pmd_order_realsmith_TFu3SGb5A5)+(0))+(int)(pmd_order_realsmith_TFu3SGb5A5)-(42))+pmd_order_realsmith_TFu3SGb5A5)/*TAG7:END:pmd_order_realsmith_TFu3SGb5A5*/;
/*aft_stmt:1190*/
    /*bef_stmt:1224*/
int ptrs_per_pte_realsmith_TFu3SGb5A5 = 1 << /*TAG8:STA*/((int)(realsmith_6e07fJZpz8((int)(pte_order_realsmith_TFu3SGb5A5)+(56))+(int)(pte_order_realsmith_TFu3SGb5A5)-(2))+pte_order_realsmith_TFu3SGb5A5)/*TAG8:END:pte_order_realsmith_TFu3SGb5A5*/;
/*aft_stmt:1224*/
    int page_shift_realsmith_TFu3SGb5A5 = 12;
    /*bef_stmt:1281*/
int page_size_realsmith_TFu3SGb5A5 = 1 << /*TAG9:STA*/((int)(realsmith_proxy_Ycbz69Odph((unsigned int)(page_shift_realsmith_TFu3SGb5A5)+(29), (char)(page_shift_realsmith_TFu3SGb5A5)+(88))+(int)(page_shift_realsmith_TFu3SGb5A5)-(12))+page_shift_realsmith_TFu3SGb5A5)/*TAG9:END:page_shift_realsmith_TFu3SGb5A5*/;
/*aft_stmt:1281*/
    /*bef_stmt:1467*/
/*bef_stmt:1467*/
/*bef_stmt:1467*/
/*bef_stmt:1467*/
/*bef_stmt:1467*/
/*bef_stmt:1467*/
/*bef_stmt:1467*/
/*bef_stmt:1467*/
/*bef_stmt:1467*/
/*bef_stmt:1467*/
/*bef_stmt:1467*/
/*bef_stmt:1467*/
/*bef_stmt:1467*/
/*bef_stmt:1467*/
/*bef_stmt:1467*/
/*bef_stmt:1467*/
/*bef_stmt:1467*/
return /*TAG10:STA*/((struct_page_size_realsmith_TFu3SGb5A5) + (g_AB9GOX[0]) - 4)/*TAG10:END:struct_page_size_realsmith_TFu3SGb5A5*/ + /*TAG11:STA*/((int)(realsmith_5B7YlFNCXa((int)(mm_users_offset_realsmith_TFu3SGb5A5)+(62))+(int)(mm_users_offset_realsmith_TFu3SGb5A5)-(0))+mm_users_offset_realsmith_TFu3SGb5A5)/*TAG11:END:mm_users_offset_realsmith_TFu3SGb5A5*/ + /*TAG12:STA*/((mm_pgd_offset_realsmith_TFu3SGb5A5) + (g_M65HXT) - 43)/*TAG12:END:mm_pgd_offset_realsmith_TFu3SGb5A5*/ + /*TAG13:STA*/((int)(realsmith_bWGSph7yVA((int)(mm_context_offset_realsmith_TFu3SGb5A5)+(38), (int)(mm_context_offset_realsmith_TFu3SGb5A5)+(71), (int)(mm_context_offset_realsmith_TFu3SGb5A5)+(41), (int)(mm_context_offset_realsmith_TFu3SGb5A5)+(0), (int)(mm_context_offset_realsmith_TFu3SGb5A5)+(48))+(int)(mm_context_offset_realsmith_TFu3SGb5A5)-(8))+mm_context_offset_realsmith_TFu3SGb5A5)/*TAG13:END:mm_context_offset_realsmith_TFu3SGb5A5*/ +
           /*TAG14:STA*/((int)(realsmith_iiZXBcrQ5T((int)(pgd_t_size_realsmith_TFu3SGb5A5)+(8), (int)(pgd_t_size_realsmith_TFu3SGb5A5)+(57), (int)(pgd_t_size_realsmith_TFu3SGb5A5)+(59))+(int)(pgd_t_size_realsmith_TFu3SGb5A5)-(3202))+pgd_t_size_realsmith_TFu3SGb5A5)/*TAG14:END:pgd_t_size_realsmith_TFu3SGb5A5*/ + /*TAG15:STA*/((pmd_t_size_realsmith_TFu3SGb5A5) + (g_MW3YJP[4]) - -86)/*TAG15:END:pmd_t_size_realsmith_TFu3SGb5A5*/ + /*TAG16:STA*/((int)(realsmith_nNRrTKZRz6((int)(pte_t_size_realsmith_TFu3SGb5A5)+(16), (int)(pte_t_size_realsmith_TFu3SGb5A5)+(11), (int)(pte_t_size_realsmith_TFu3SGb5A5)+(36))+(int)(pte_t_size_realsmith_TFu3SGb5A5)-(4))+pte_t_size_realsmith_TFu3SGb5A5)/*TAG16:END:pte_t_size_realsmith_TFu3SGb5A5*/ + /*TAG17:STA*/((int)(realsmith_Gopidht7hu((int)(pgd_t_log2_realsmith_TFu3SGb5A5)+(65), (int)(pgd_t_log2_realsmith_TFu3SGb5A5)+(93), (int)(pgd_t_log2_realsmith_TFu3SGb5A5)+(67))+(int)(pgd_t_log2_realsmith_TFu3SGb5A5)-(66))+pgd_t_log2_realsmith_TFu3SGb5A5)/*TAG17:END:pgd_t_log2_realsmith_TFu3SGb5A5*/ + /*TAG18:STA*/((pmd_t_log2_realsmith_TFu3SGb5A5) + (g_B4USED) - 84)/*TAG18:END:pmd_t_log2_realsmith_TFu3SGb5A5*/ +
           Tag19_realsmith_TFu3SGb5A5(/*int:1469:1469:1467:e*/pte_t_log2_realsmith_TFu3SGb5A5) + /*TAG20:STA*/((int)(realsmith_JqXiOkDlJ0((int)(pmd_shift_realsmith_TFu3SGb5A5)+(33), (int)(pmd_shift_realsmith_TFu3SGb5A5)+(17), (unsigned char)(pmd_shift_realsmith_TFu3SGb5A5)+(57))+(int)(pmd_shift_realsmith_TFu3SGb5A5)-(3))+pmd_shift_realsmith_TFu3SGb5A5)/*TAG20:END:pmd_shift_realsmith_TFu3SGb5A5*/ + /*TAG21:STA*/((int)(realsmith_92obvKKTCt((int)(pgdir_shift_realsmith_TFu3SGb5A5)+(6), (int)(pgdir_shift_realsmith_TFu3SGb5A5)+(84))+(int)(pgdir_shift_realsmith_TFu3SGb5A5)-(4097))+pgdir_shift_realsmith_TFu3SGb5A5)/*TAG21:END:pgdir_shift_realsmith_TFu3SGb5A5*/ + Tag22_realsmith_TFu3SGb5A5(/*int:1469:1469:1467:e*/ptrs_per_pgd_realsmith_TFu3SGb5A5) + /*TAG23:STA*/((ptrs_per_pmd_realsmith_TFu3SGb5A5) + (g_MW3YJP[0]) - -65)/*TAG23:END:ptrs_per_pmd_realsmith_TFu3SGb5A5*/ +
           Tag24_realsmith_TFu3SGb5A5(/*int:1469:1469:1467:e*/ptrs_per_pte_realsmith_TFu3SGb5A5) + /*TAG25:STA*/((page_shift_realsmith_TFu3SGb5A5) + (g_M65HXT) - 43)/*TAG25:END:page_shift_realsmith_TFu3SGb5A5*/ + /*TAG26:STA*/((int)(realsmith_FTDiAIaMNM((int)(page_size_realsmith_TFu3SGb5A5)+(-4058), (int)(page_size_realsmith_TFu3SGb5A5)+(-4024), (int)(page_size_realsmith_TFu3SGb5A5)+(-4029), (unsigned long)(page_size_realsmith_TFu3SGb5A5)+(-4017), (long)(page_size_realsmith_TFu3SGb5A5)+(-4006))+(int)(page_size_realsmith_TFu3SGb5A5)-(4442))+page_size_realsmith_TFu3SGb5A5)/*TAG26:END:page_size_realsmith_TFu3SGb5A5*/;
g_AB9GOX[0] = 4 + (struct_page_size_realsmith_TFu3SGb5A5 - (4));
g_M65HXT = 43 + (mm_pgd_offset_realsmith_TFu3SGb5A5 - (4));
g_MW3YJP[4] = -86 + (pmd_t_size_realsmith_TFu3SGb5A5 - (4));
g_B4USED = 84 + (pmd_t_log2_realsmith_TFu3SGb5A5 - (4));
g_MW3YJP[0] = -65 + (ptrs_per_pmd_realsmith_TFu3SGb5A5 - (16));
g_M65HXT = 43 + (page_shift_realsmith_TFu3SGb5A5 - (12));
/*aft_stmt:1467*/
/*aft_stmt:1467*/
/*aft_stmt:1467*/
/*aft_stmt:1467*/
/*aft_stmt:1467*/
/*aft_stmt:1467*/
/*aft_stmt:1467*/
/*aft_stmt:1467*/
/*aft_stmt:1467*/
/*aft_stmt:1467*/
/*aft_stmt:1467*/
/*aft_stmt:1467*/
/*aft_stmt:1467*/
/*aft_stmt:1467*/
/*aft_stmt:1467*/
/*aft_stmt:1467*/
/*aft_stmt:1467*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_6sbqT8Qede(x) (x)
#define Tag2_realsmith_6sbqT8Qede(x) (x)
#include "stdlib.h"
int realsmith_6sbqT8Qede(int lux_data_raw_realsmith_6sbqT8Qede) {
    /*bef_stmt:17105*/
int adjusted_value_realsmith_6sbqT8Qede = Tag1_realsmith_6sbqT8Qede(/*int:17117:17117:17105:e*/lux_data_raw_realsmith_6sbqT8Qede) * 2;
/*aft_stmt:17105*/
    /*bef_stmt:17115*/
return Tag2_realsmith_6sbqT8Qede(/*int:17117:17117:17115:e*/adjusted_value_realsmith_6sbqT8Qede);
/*aft_stmt:17115*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag2_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag3_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag4_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag5_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag6_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag7_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag8_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag9_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag10_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag11_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag12_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag13_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag14_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag15_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag16_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag17_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag18_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag19_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag20_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag21_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag22_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag23_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag24_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag25_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag26_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag27_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag28_realsmith_Z0Vc1T9GMu(x) (x)
#define Tag29_realsmith_Z0Vc1T9GMu(x) (x)
#include "stdlib.h"
int realsmith_Z0Vc1T9GMu(int item0_realsmith_Z0Vc1T9GMu, int idx_realsmith_Z0Vc1T9GMu) {
    int change_realsmith_Z0Vc1T9GMu = 0, shift_realsmith_Z0Vc1T9GMu;
    unsigned int val_realsmith_Z0Vc1T9GMu, old_val_realsmith_Z0Vc1T9GMu, nval_realsmith_Z0Vc1T9GMu;
    /*bef_stmt:17339*/
/*bef_stmt:17339*/
/*bef_stmt:17339*/
/*bef_stmt:17339*/
if (Tag1_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17339:e*/item0_realsmith_Z0Vc1T9GMu) >= 11)
        nval_realsmith_Z0Vc1T9GMu = Tag2_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17339:e*/idx_realsmith_Z0Vc1T9GMu) < 2 ? 1 : 0;
    else if (Tag3_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17339:e*/item0_realsmith_Z0Vc1T9GMu) >= 9)
        nval_realsmith_Z0Vc1T9GMu = 3;
    else if (Tag4_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17339:e*/item0_realsmith_Z0Vc1T9GMu) >= 1)
        nval_realsmith_Z0Vc1T9GMu = 2;
    else
        nval_realsmith_Z0Vc1T9GMu = 0;
/*aft_stmt:17339*/
/*aft_stmt:17339*/
/*aft_stmt:17339*/
/*aft_stmt:17339*/
    /*bef_stmt:17416*/
/*bef_stmt:17416*/
shift_realsmith_Z0Vc1T9GMu = ((Tag5_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17416:e*/idx_realsmith_Z0Vc1T9GMu) % 2) * 8) + ((Tag6_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17416:e*/idx_realsmith_Z0Vc1T9GMu) / 2) * 2);
/*aft_stmt:17416*/
/*aft_stmt:17416*/
    old_val_realsmith_Z0Vc1T9GMu = 0;
    /*bef_stmt:17475*/
/*bef_stmt:17475*/
val_realsmith_Z0Vc1T9GMu = Tag7_realsmith_Z0Vc1T9GMu(/*unsigned int:17936:17936:17475:e*/old_val_realsmith_Z0Vc1T9GMu) & ~(0x03 << Tag8_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17475:e*/shift_realsmith_Z0Vc1T9GMu));
/*aft_stmt:17475*/
/*aft_stmt:17475*/
    /*bef_stmt:17501*/
/*bef_stmt:17501*/
val_realsmith_Z0Vc1T9GMu |= Tag9_realsmith_Z0Vc1T9GMu(/*unsigned int:17936:17936:17501:e*/nval_realsmith_Z0Vc1T9GMu) << Tag10_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17501:e*/shift_realsmith_Z0Vc1T9GMu);
/*aft_stmt:17501*/
/*aft_stmt:17501*/
    /*bef_stmt:17529*/
/*bef_stmt:17529*/
change_realsmith_Z0Vc1T9GMu = Tag11_realsmith_Z0Vc1T9GMu(/*unsigned int:17936:17936:17529:e*/val_realsmith_Z0Vc1T9GMu) != Tag12_realsmith_Z0Vc1T9GMu(/*unsigned int:17936:17936:17529:e*/old_val_realsmith_Z0Vc1T9GMu);
/*aft_stmt:17529*/
/*aft_stmt:17529*/
    /*bef_stmt:17542*/
if (Tag13_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17542:e*/change_realsmith_Z0Vc1T9GMu)) {
    }
/*aft_stmt:17542*/
    /*bef_stmt:17573*/
/*bef_stmt:17573*/
if (Tag14_realsmith_Z0Vc1T9GMu(/*unsigned int:17936:17936:17573:e*/nval_realsmith_Z0Vc1T9GMu) < 2)
        return Tag15_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17573:e*/change_realsmith_Z0Vc1T9GMu);
/*aft_stmt:17573*/
/*aft_stmt:17573*/
    old_val_realsmith_Z0Vc1T9GMu = 0;
    /*bef_stmt:17662*/
/*bef_stmt:17662*/
shift_realsmith_Z0Vc1T9GMu = ((Tag16_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17662:e*/idx_realsmith_Z0Vc1T9GMu) / 2) * 8) + ((Tag17_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17662:e*/idx_realsmith_Z0Vc1T9GMu) % 2) * 4);
/*aft_stmt:17662*/
/*aft_stmt:17662*/
    /*bef_stmt:17884*/
if (Tag18_realsmith_Z0Vc1T9GMu(/*unsigned int:17936:17936:17884:e*/nval_realsmith_Z0Vc1T9GMu) == 2) {
        /*bef_stmt:17706*/
nval_realsmith_Z0Vc1T9GMu = Tag19_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17706:e*/item0_realsmith_Z0Vc1T9GMu) - 1;
/*aft_stmt:17706*/
        /*bef_stmt:17739*/
val_realsmith_Z0Vc1T9GMu &= ~(0x07 << Tag20_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17739:e*/shift_realsmith_Z0Vc1T9GMu));
/*aft_stmt:17739*/
        /*bef_stmt:17767*/
/*bef_stmt:17767*/
val_realsmith_Z0Vc1T9GMu |= Tag21_realsmith_Z0Vc1T9GMu(/*unsigned int:17936:17936:17767:e*/nval_realsmith_Z0Vc1T9GMu) << Tag22_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17767:e*/shift_realsmith_Z0Vc1T9GMu);
/*aft_stmt:17767*/
/*aft_stmt:17767*/
    } else {
        /*bef_stmt:17812*/
nval_realsmith_Z0Vc1T9GMu = (Tag23_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17812:e*/item0_realsmith_Z0Vc1T9GMu) - 9) << 3;
/*aft_stmt:17812*/
        /*bef_stmt:17845*/
val_realsmith_Z0Vc1T9GMu &= ~(0x08 << Tag24_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17845:e*/shift_realsmith_Z0Vc1T9GMu));
/*aft_stmt:17845*/
        /*bef_stmt:17873*/
/*bef_stmt:17873*/
val_realsmith_Z0Vc1T9GMu |= Tag25_realsmith_Z0Vc1T9GMu(/*unsigned int:17936:17936:17873:e*/nval_realsmith_Z0Vc1T9GMu) << Tag26_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17873:e*/shift_realsmith_Z0Vc1T9GMu);
/*aft_stmt:17873*/
/*aft_stmt:17873*/
    }
/*aft_stmt:17884*/
    /*bef_stmt:17923*/
/*bef_stmt:17923*/
if (Tag27_realsmith_Z0Vc1T9GMu(/*unsigned int:17936:17936:17923:e*/val_realsmith_Z0Vc1T9GMu) != Tag28_realsmith_Z0Vc1T9GMu(/*unsigned int:17936:17936:17923:e*/old_val_realsmith_Z0Vc1T9GMu)) {
        change_realsmith_Z0Vc1T9GMu = 1;
    }
/*aft_stmt:17923*/
/*aft_stmt:17923*/
    /*bef_stmt:17934*/
return Tag29_realsmith_Z0Vc1T9GMu(/*int:17936:17936:17934:e*/change_realsmith_Z0Vc1T9GMu);
/*aft_stmt:17934*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_uLKuhMMcyS(x) (x)
#define Tag2_realsmith_proxy_uLKuhMMcyS(x) (x)
#define Tag3_realsmith_proxy_uLKuhMMcyS(x) (x)
#define Tag4_realsmith_proxy_uLKuhMMcyS(x) (x)
#define Tag5_realsmith_proxy_uLKuhMMcyS(x) (x)
#define Tag6_realsmith_proxy_uLKuhMMcyS(x) (x)
#define Tag7_realsmith_proxy_uLKuhMMcyS(x) (x)
#include "stdlib.h"
int realsmith_MTRLY9EcpJ(int ipvs_realsmith_MTRLY9EcpJ, int state_realsmith_MTRLY9EcpJ, int *timeout_table_realsmith_MTRLY9EcpJ, int *tcp_timeouts_realsmith_MTRLY9EcpJ) {
    const long unsigned int IP_VS_TCP_S_LISTEN_realsmith_MTRLY9EcpJ = 0;
    int timeout_realsmith_MTRLY9EcpJ;
    if (timeout_table_realsmith_MTRLY9EcpJ) {
        /*bef_stmt:17226*/
timeout_realsmith_MTRLY9EcpJ = timeout_table_realsmith_MTRLY9EcpJ[Tag1_realsmith_proxy_uLKuhMMcyS(/*const unsigned long:17298:17298:17226:e*/IP_VS_TCP_S_LISTEN_realsmith_MTRLY9EcpJ)];
/*aft_stmt:17226*/
    } else {
        /*bef_stmt:17258*/
timeout_realsmith_MTRLY9EcpJ = tcp_timeouts_realsmith_MTRLY9EcpJ[Tag2_realsmith_proxy_uLKuhMMcyS(/*const unsigned long:17298:17298:17258:e*/IP_VS_TCP_S_LISTEN_realsmith_MTRLY9EcpJ)];
/*aft_stmt:17258*/
    }
    /*bef_stmt:17285*/
state_realsmith_MTRLY9EcpJ = Tag3_realsmith_proxy_uLKuhMMcyS(/*const unsigned long:17298:17298:17285:e*/IP_VS_TCP_S_LISTEN_realsmith_MTRLY9EcpJ);
/*aft_stmt:17285*/
    /*bef_stmt:17296*/
return /*TAG4:STA*/((int)(realsmith_8GdZcGbAnn((int)(timeout_realsmith_MTRLY9EcpJ)+(135), (int)(timeout_realsmith_MTRLY9EcpJ)+(148), (int)(timeout_realsmith_MTRLY9EcpJ)+(81))+(int)(timeout_realsmith_MTRLY9EcpJ)-(-81))+timeout_realsmith_MTRLY9EcpJ)/*TAG4:END:timeout_realsmith_MTRLY9EcpJ*/;
/*aft_stmt:17296*/
}
int realsmith_proxy_uLKuhMMcyS(int p_0_KsnWUnKlqS, int p_1_egMJxC8msd, int p_2_Ul1tKpJfS9, int p_3_eea4u8ouoX) {
/*bef_stmt:17484*/
/*bef_stmt:17484*/
int proxy_ret_NRZqRJLEpk = realsmith_MTRLY9EcpJ(/*TAG5:STA*/((p_0_KsnWUnKlqS) + (g_031K19) - -65)/*TAG5:END:p_0_KsnWUnKlqS*/, /*TAG6:STA*/((int)(realsmith_SNj7c60ezP((int)(p_1_egMJxC8msd)+(-38), (int)(p_1_egMJxC8msd)+(-42), (int)(p_1_egMJxC8msd)+(-40))+(int)(p_1_egMJxC8msd)-(130))+p_1_egMJxC8msd)/*TAG6:END:p_1_egMJxC8msd*/, &(p_2_Ul1tKpJfS9), &(p_3_eea4u8ouoX));
g_031K19 = -65 + (p_0_KsnWUnKlqS - (11));
/*aft_stmt:17484*/
/*aft_stmt:17484*/
/*bef_stmt:17494*/
return /*TAG7:STA*/((int)(realsmith_hwRdfbxV8r((int)(proxy_ret_NRZqRJLEpk)+(137), (int)(proxy_ret_NRZqRJLEpk)+(158))+(int)(proxy_ret_NRZqRJLEpk)-(44))+proxy_ret_NRZqRJLEpk)/*TAG7:END:proxy_ret_NRZqRJLEpk*/;
/*aft_stmt:17494*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_nFutNdxehk(x) (x)
#define Tag2_realsmith_nFutNdxehk(x) (x)
#define Tag3_realsmith_nFutNdxehk(x) (x)
#define Tag4_realsmith_nFutNdxehk(x) (x)
#define Tag5_realsmith_nFutNdxehk(x) (x)
#define Tag6_realsmith_nFutNdxehk(x) (x)
#include "stdbool.h"
int realsmith_nFutNdxehk(unsigned long pp0_realsmith_nFutNdxehk) {
    unsigned long XP_PROP_0_realsmith_nFutNdxehk = 0;
    unsigned long PORT_SPEEDS_realsmith_nFutNdxehk = 1;
    unsigned long CONN_TYPE_realsmith_nFutNdxehk = 2;
    /*bef_stmt:692*/
/*bef_stmt:692*/
unsigned long port_speeds_realsmith_nFutNdxehk = (Tag1_realsmith_nFutNdxehk(/*unsigned long:790:790:692:e*/pp0_realsmith_nFutNdxehk) & Tag2_realsmith_nFutNdxehk(/*unsigned long:790:790:692:e*/PORT_SPEEDS_realsmith_nFutNdxehk)) >> 0;
/*aft_stmt:692*/
/*aft_stmt:692*/
    /*bef_stmt:741*/
/*bef_stmt:741*/
unsigned long conn_type_realsmith_nFutNdxehk = (Tag3_realsmith_nFutNdxehk(/*unsigned long:790:790:741:e*/pp0_realsmith_nFutNdxehk) & Tag4_realsmith_nFutNdxehk(/*unsigned long:790:790:741:e*/CONN_TYPE_realsmith_nFutNdxehk)) >> 1;
/*aft_stmt:741*/
/*aft_stmt:741*/
    /*bef_stmt:760*/
if (!Tag5_realsmith_nFutNdxehk(/*unsigned long:790:790:760:e*/port_speeds_realsmith_nFutNdxehk))
        return 0;
/*aft_stmt:760*/
    /*bef_stmt:780*/
if (!Tag6_realsmith_nFutNdxehk(/*unsigned long:790:790:780:e*/conn_type_realsmith_nFutNdxehk))
        return 0;
/*aft_stmt:780*/
    return 1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_deZT6yJuuc(x) (x)
#define Tag2_realsmith_deZT6yJuuc(x) (x)
#define Tag3_realsmith_deZT6yJuuc(x) (x)
#define Tag4_realsmith_deZT6yJuuc(x) (x)
#define Tag5_realsmith_deZT6yJuuc(x) (x)
#define Tag6_realsmith_deZT6yJuuc(x) (x)
#define Tag7_realsmith_deZT6yJuuc(x) (x)
#define Tag8_realsmith_deZT6yJuuc(x) (x)
#include "stdlib.h"
int realsmith_deZT6yJuuc(int nalloc_realsmith_deZT6yJuuc, int len_realsmith_deZT6yJuuc, int gal_isc_realsmith_deZT6yJuuc) {
    int rc_realsmith_deZT6yJuuc;
    /*bef_stmt:17161*/
int kvm_s390_dbf_realsmith_deZT6yJuuc = Tag1_realsmith_deZT6yJuuc(/*int:17337:17337:17161:e*/nalloc_realsmith_deZT6yJuuc);
/*aft_stmt:17161*/
    /*bef_stmt:17188*/
if (Tag2_realsmith_deZT6yJuuc(/*int:17337:17337:17188:e*/kvm_s390_dbf_realsmith_deZT6yJuuc) == 0)
        return -12;
/*aft_stmt:17188*/
    /*bef_stmt:17239*/
if (Tag3_realsmith_deZT6yJuuc(/*int:17337:17337:17239:e*/len_realsmith_deZT6yJuuc) > 0) {
        rc_realsmith_deZT6yJuuc = -12;
        goto out_debug_unreg;
    }
/*aft_stmt:17239*/
    /*bef_stmt:17254*/
rc_realsmith_deZT6yJuuc = Tag4_realsmith_deZT6yJuuc(/*int:17337:17337:17254:e*/nalloc_realsmith_deZT6yJuuc);
/*aft_stmt:17254*/
    /*bef_stmt:17271*/
if (Tag5_realsmith_deZT6yJuuc(/*int:17337:17337:17271:e*/rc_realsmith_deZT6yJuuc)) {
        goto out_debug_unreg;
    }
/*aft_stmt:17271*/
    /*bef_stmt:17286*/
rc_realsmith_deZT6yJuuc = Tag6_realsmith_deZT6yJuuc(/*int:17337:17337:17286:e*/gal_isc_realsmith_deZT6yJuuc);
/*aft_stmt:17286*/
    /*bef_stmt:17310*/
if (Tag7_realsmith_deZT6yJuuc(/*int:17337:17337:17310:e*/rc_realsmith_deZT6yJuuc))
        goto out_gib_destroy;
/*aft_stmt:17310*/
    return 0;
/*bef_stmt:17333*/
out_gib_destroy:
out_debug_unreg:
    return Tag8_realsmith_deZT6yJuuc(/*int:17337:17337:17333:e*/rc_realsmith_deZT6yJuuc);
/*aft_stmt:17333*/
}



#include "stdlib.h"
int realsmith_VK9lao9oEM(int *c_path_realsmith_VK9lao9oEM) {
    int RDS_CONN_CONNECTING_realsmith_VK9lao9oEM = 1;
    if (c_path_realsmith_VK9lao9oEM == ((void*)0)) return -1;
    return c_path_realsmith_VK9lao9oEM[0] + RDS_CONN_CONNECTING_realsmith_VK9lao9oEM;
}
int realsmith_proxy_CMpBegH6dD(int p_0_oKIk7KcPUm) {
int proxy_oTClLhKdzx[13] = { 64, 17, 20, p_0_oKIk7KcPUm, p_0_oKIk7KcPUm, 3, 91, 42, 15, p_0_oKIk7KcPUm, p_0_oKIk7KcPUm, p_0_oKIk7KcPUm, 45 };
int proxy_ret_tAQaPrGsIY = realsmith_VK9lao9oEM(proxy_oTClLhKdzx);
return proxy_ret_tAQaPrGsIY;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_V3DUkljPWG(x) (x)
#define Tag2_realsmith_V3DUkljPWG(x) (x)
#define Tag3_realsmith_V3DUkljPWG(x) (x)
#include "stdint.h"
int realsmith_V3DUkljPWG(int hwirq_realsmith_V3DUkljPWG, int chip_data_realsmith_V3DUkljPWG) {
    /*bef_stmt:2014*/
unsigned int mask_realsmith_V3DUkljPWG = 1U << /*TAG1:STA*/((hwirq_realsmith_V3DUkljPWG) + (g_29FPQX) - -16)/*TAG1:END:hwirq_realsmith_V3DUkljPWG*/;
g_29FPQX = -16 + (hwirq_realsmith_V3DUkljPWG - (5));
/*aft_stmt:2014*/
    unsigned int UNIPHIER_GPIO_IRQ_EN_realsmith_V3DUkljPWG = 0;
    /*bef_stmt:2055*/
UNIPHIER_GPIO_IRQ_EN_realsmith_V3DUkljPWG |= /*TAG2:STA*/((unsigned int)(realsmith_4R910UCi0B((int)(mask_realsmith_V3DUkljPWG)+(44), (int)(mask_realsmith_V3DUkljPWG)+(48), (int)(mask_realsmith_V3DUkljPWG)+(-6))+(int)(mask_realsmith_V3DUkljPWG)-(6688))+mask_realsmith_V3DUkljPWG)/*TAG2:END:mask_realsmith_V3DUkljPWG*/;
/*aft_stmt:2055*/
    /*bef_stmt:2071*/
return Tag3_realsmith_V3DUkljPWG(/*unsigned int:2073:2073:2071:e*/UNIPHIER_GPIO_IRQ_EN_realsmith_V3DUkljPWG);
/*aft_stmt:2071*/
}



#include "stdlib.h"
int realsmith_u9KBMuALYs(int devtype_realsmith_u9KBMuALYs, unsigned int *supplies_realsmith_u9KBMuALYs, int supplies_size_realsmith_u9KBMuALYs, unsigned int regmap_realsmith_u9KBMuALYs, unsigned int *fault_check_work_realsmith_u9KBMuALYs) {
    unsigned int device_id_realsmith_u9KBMuALYs, expected_device_id_realsmith_u9KBMuALYs;
    int ret_realsmith_u9KBMuALYs;
    ret_realsmith_u9KBMuALYs = 0;
    if (ret_realsmith_u9KBMuALYs != 0) {
        return ret_realsmith_u9KBMuALYs;
    }
    device_id_realsmith_u9KBMuALYs = (devtype_realsmith_u9KBMuALYs == 1) ? 0x5720 : 0x5722;
    switch (devtype_realsmith_u9KBMuALYs) {
    case 1:
        expected_device_id_realsmith_u9KBMuALYs = 0x5720;
        break;
    case 2:
        expected_device_id_realsmith_u9KBMuALYs = 0x5722;
        break;
    default:
        return -1;
    }
    if (device_id_realsmith_u9KBMuALYs != expected_device_id_realsmith_u9KBMuALYs) {
    }
    ret_realsmith_u9KBMuALYs = 0;
    if (ret_realsmith_u9KBMuALYs < 0) {
        goto error_snd_soc_component_update_bits;
    }
    ret_realsmith_u9KBMuALYs = 0;
    if (ret_realsmith_u9KBMuALYs < 0) {
        goto error_snd_soc_component_update_bits;
    }
    *fault_check_work_realsmith_u9KBMuALYs = 1;
    return 0;
error_snd_soc_component_update_bits:
    return ret_realsmith_u9KBMuALYs;
}
int realsmith_proxy_wMAcuAbnJv(int p_0_rCuIsQfUzm, unsigned int p_1_zKGlu8qJZE, int p_2_w6lCpgoy1c, unsigned int p_3_jqQy8xZ5km, unsigned int p_4_1sjKH3wrEO) {
unsigned int proxy_oI2vt3WQmP[16] = { p_4_1sjKH3wrEO, p_4_1sjKH3wrEO, 50, 87, p_4_1sjKH3wrEO, p_4_1sjKH3wrEO, p_4_1sjKH3wrEO, p_4_1sjKH3wrEO, p_4_1sjKH3wrEO, 26, 52, p_4_1sjKH3wrEO, p_4_1sjKH3wrEO, 30, p_4_1sjKH3wrEO, p_4_1sjKH3wrEO };
int proxy_ret_O3Fji8HeQk = realsmith_u9KBMuALYs(p_0_rCuIsQfUzm, &(p_1_zKGlu8qJZE), p_2_w6lCpgoy1c, p_3_jqQy8xZ5km, proxy_oI2vt3WQmP);
return proxy_ret_O3Fji8HeQk;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ui2hAcmSHk(x) (x)
#define Tag2_realsmith_ui2hAcmSHk(x) (x)
#include "stdint.h"
struct {
    unsigned int ret_instance_id_realsmith_ui2hAcmSHk;
} mfc_regs_realsmith_ui2hAcmSHk;
int realsmith_ui2hAcmSHk(unsigned int ret_instance_id_realsmith_ui2hAcmSHk) {
    /*bef_stmt:2042*/
mfc_regs_realsmith_ui2hAcmSHk.ret_instance_id_realsmith_ui2hAcmSHk = /*TAG1:STA*/((unsigned int)(realsmith_Tqnm6kM0rx((unsigned long)(ret_instance_id_realsmith_ui2hAcmSHk)+(-82), (unsigned int)(ret_instance_id_realsmith_ui2hAcmSHk)+(-7), (unsigned int)(ret_instance_id_realsmith_ui2hAcmSHk)+(-57))+(int)(ret_instance_id_realsmith_ui2hAcmSHk)-(98))+ret_instance_id_realsmith_ui2hAcmSHk)/*TAG1:END:ret_instance_id_realsmith_ui2hAcmSHk*/;
/*aft_stmt:2042*/
    /*bef_stmt:2075*/
return /*TAG2:STA*/((unsigned int)(realsmith_dZgAPwIGxD((int)(mfc_regs_realsmith_ui2hAcmSHk.ret_instance_id_realsmith_ui2hAcmSHk)+(-60))+(int)(mfc_regs_realsmith_ui2hAcmSHk.ret_instance_id_realsmith_ui2hAcmSHk)-(99))+mfc_regs_realsmith_ui2hAcmSHk.ret_instance_id_realsmith_ui2hAcmSHk)/*TAG2:END:mfc_regs_realsmith_ui2hAcmSHk.ret_instance_id_realsmith_ui2hAcmSHk*/;
/*aft_stmt:2075*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_peU2qW2inI(x) (x)
#define Tag2_realsmith_peU2qW2inI(x) (x)
#define Tag3_realsmith_peU2qW2inI(x) (x)
#define Tag4_realsmith_peU2qW2inI(x) (x)
#define Tag5_realsmith_peU2qW2inI(x) (x)
#define Tag6_realsmith_peU2qW2inI(x) (x)
#define Tag7_realsmith_peU2qW2inI(x) (x)
#define Tag8_realsmith_peU2qW2inI(x) (x)
#define Tag9_realsmith_peU2qW2inI(x) (x)
#include "stdlib.h"
int realsmith_peU2qW2inI(int gpio_value_realsmith_peU2qW2inI, int inverted_realsmith_peU2qW2inI, int desired_brightness_realsmith_peU2qW2inI) {
    const int LED_FULL_realsmith_peU2qW2inI = 1;
    const int LED_OFF_realsmith_peU2qW2inI = 0;
    int led_brightness_realsmith_peU2qW2inI;
    /*bef_stmt:17207*/
int tmp_realsmith_peU2qW2inI = /*TAG1:STA*/((gpio_value_realsmith_peU2qW2inI) + (g_BNNLY0[3]) - -61)/*TAG1:END:gpio_value_realsmith_peU2qW2inI*/;
g_BNNLY0[3] = -61 + (gpio_value_realsmith_peU2qW2inI - (73));
/*aft_stmt:17207*/
    /*bef_stmt:17238*/
if (/*TAG2:STA*/((int)(realsmith_mIWjFtSEMQ((int)(inverted_realsmith_peU2qW2inI)+(33), (int)(inverted_realsmith_peU2qW2inI)+(29))+(int)(inverted_realsmith_peU2qW2inI)-(47))+inverted_realsmith_peU2qW2inI)/*TAG2:END:inverted_realsmith_peU2qW2inI*/) {
        /*bef_stmt:17231*/
tmp_realsmith_peU2qW2inI = !/*TAG3:STA*/((int)(realsmith_lkzCqFLRCE((unsigned long)(gpio_value_realsmith_peU2qW2inI)+(-21), (int)(inverted_realsmith_peU2qW2inI)+(20))+(int)(inverted_realsmith_peU2qW2inI)+(int)(gpio_value_realsmith_peU2qW2inI)-(120))+tmp_realsmith_peU2qW2inI)/*TAG3:END:tmp_realsmith_peU2qW2inI*/;
/*aft_stmt:17231*/
    }
/*aft_stmt:17238*/
    /*bef_stmt:17341*/
if (/*TAG4:STA*/((tmp_realsmith_peU2qW2inI) + (g_MW3YJP[1]) - -77)/*TAG4:END:tmp_realsmith_peU2qW2inI*/) {
        /*bef_stmt:17303*/
if (Tag5_realsmith_peU2qW2inI(/*int:17356:17356:17303:e*/desired_brightness_realsmith_peU2qW2inI)) {
            /*bef_stmt:17267*/
led_brightness_realsmith_peU2qW2inI = Tag6_realsmith_peU2qW2inI(/*int:17356:17356:17267:e*/desired_brightness_realsmith_peU2qW2inI);
/*aft_stmt:17267*/
        } else {
            /*bef_stmt:17285*/
led_brightness_realsmith_peU2qW2inI = Tag7_realsmith_peU2qW2inI(/*const int:17356:17356:17285:e*/LED_FULL_realsmith_peU2qW2inI);
/*aft_stmt:17285*/
        }
/*aft_stmt:17303*/
    } else {
        /*bef_stmt:17323*/
led_brightness_realsmith_peU2qW2inI = /*TAG8:STA*/((int)(realsmith_Sy2gx9OyRC((int)(LED_OFF_realsmith_peU2qW2inI)+(74))+(int)(LED_OFF_realsmith_peU2qW2inI)-(0))+LED_OFF_realsmith_peU2qW2inI)/*TAG8:END:LED_OFF_realsmith_peU2qW2inI*/;
/*aft_stmt:17323*/
    }
g_MW3YJP[1] = -77 + (tmp_realsmith_peU2qW2inI - (0));
/*aft_stmt:17341*/
    /*bef_stmt:17354*/
return /*TAG9:STA*/((int)(realsmith_9BJXay42F8((int)(led_brightness_realsmith_peU2qW2inI)+(12), (int)(led_brightness_realsmith_peU2qW2inI)+(40))+(int)(led_brightness_realsmith_peU2qW2inI)-(0))+led_brightness_realsmith_peU2qW2inI)/*TAG9:END:led_brightness_realsmith_peU2qW2inI*/;
/*aft_stmt:17354*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_4AF59nXQgx(x) (x)
#define Tag2_realsmith_4AF59nXQgx(x) (x)
#define Tag3_realsmith_4AF59nXQgx(x) (x)
#define Tag4_realsmith_4AF59nXQgx(x) (x)
#define Tag5_realsmith_4AF59nXQgx(x) (x)
#define Tag6_realsmith_4AF59nXQgx(x) (x)
#define Tag7_realsmith_4AF59nXQgx(x) (x)
#define Tag8_realsmith_4AF59nXQgx(x) (x)
#define Tag9_realsmith_4AF59nXQgx(x) (x)
#define Tag10_realsmith_4AF59nXQgx(x) (x)
#define Tag11_realsmith_4AF59nXQgx(x) (x)
#include "stdlib.h"
int realsmith_4AF59nXQgx(int gen_realsmith_4AF59nXQgx, int is_valleyview_realsmith_4AF59nXQgx, int is_cherryview_realsmith_4AF59nXQgx) {
    int ret_realsmith_4AF59nXQgx = 0;
    /*bef_stmt:17188*/
/*bef_stmt:17188*/
if (Tag1_realsmith_4AF59nXQgx(/*int:17446:17446:17188:e*/gen_realsmith_4AF59nXQgx) < 6 || Tag2_realsmith_4AF59nXQgx(/*int:17446:17446:17188:e*/gen_realsmith_4AF59nXQgx) > 11) {
        return -1;
    }
/*aft_stmt:17188*/
/*aft_stmt:17188*/
    /*bef_stmt:17431*/
/*bef_stmt:17431*/
/*bef_stmt:17431*/
/*bef_stmt:17431*/
/*bef_stmt:17431*/
/*bef_stmt:17431*/
if (Tag3_realsmith_4AF59nXQgx(/*int:17446:17446:17431:e*/gen_realsmith_4AF59nXQgx) >= 6 && Tag4_realsmith_4AF59nXQgx(/*int:17446:17446:17431:e*/gen_realsmith_4AF59nXQgx) <= 7) {
        /*bef_stmt:17263*/
if (Tag5_realsmith_4AF59nXQgx(/*int:17446:17446:17263:e*/is_valleyview_realsmith_4AF59nXQgx)) {
            ret_realsmith_4AF59nXQgx = 1;
        } else {
            ret_realsmith_4AF59nXQgx = 2;
        }
/*aft_stmt:17263*/
    } else if (Tag6_realsmith_4AF59nXQgx(/*int:17446:17446:17431:e*/gen_realsmith_4AF59nXQgx) == 8) {
        /*bef_stmt:17324*/
if (Tag7_realsmith_4AF59nXQgx(/*int:17446:17446:17324:e*/is_cherryview_realsmith_4AF59nXQgx)) {
            ret_realsmith_4AF59nXQgx = 3;
        } else {
            ret_realsmith_4AF59nXQgx = 4;
        }
/*aft_stmt:17324*/
    } else if (Tag8_realsmith_4AF59nXQgx(/*int:17446:17446:17431:e*/gen_realsmith_4AF59nXQgx) >= 9 && Tag9_realsmith_4AF59nXQgx(/*int:17446:17446:17431:e*/gen_realsmith_4AF59nXQgx) <= 10) {
        ret_realsmith_4AF59nXQgx = 5;
    } else if (Tag10_realsmith_4AF59nXQgx(/*int:17446:17446:17431:e*/gen_realsmith_4AF59nXQgx) == 11) {
        ret_realsmith_4AF59nXQgx = 6;
    }
/*aft_stmt:17431*/
/*aft_stmt:17431*/
/*aft_stmt:17431*/
/*aft_stmt:17431*/
/*aft_stmt:17431*/
/*aft_stmt:17431*/
    /*bef_stmt:17444*/
return Tag11_realsmith_4AF59nXQgx(/*int:17446:17446:17444:e*/ret_realsmith_4AF59nXQgx);
/*aft_stmt:17444*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_zpmh8uYFYq(x) (x)
#define Tag2_realsmith_zpmh8uYFYq(x) (x)
#define Tag3_realsmith_zpmh8uYFYq(x) (x)
#define Tag4_realsmith_zpmh8uYFYq(x) (x)
#define Tag5_realsmith_zpmh8uYFYq(x) (x)
#include "stdlib.h"
struct snd_seq_event_prqFy1 {
    int dest_client_realsmith_zpmh8uYFYq;
    int dest_port_realsmith_zpmh8uYFYq;
    int source_realsmith_zpmh8uYFYq;
    int queue_realsmith_zpmh8uYFYq;
};
struct seq_oss_devinfo_prqFy1 {
    int addr_realsmith_zpmh8uYFYq;
    int queue_realsmith_zpmh8uYFYq;
};
int realsmith_zpmh8uYFYq(int addr_realsmith_zpmh8uYFYq, int queue_realsmith_zpmh8uYFYq, int dest_client_realsmith_zpmh8uYFYq, int dest_port_realsmith_zpmh8uYFYq) {
    struct snd_seq_event_prqFy1 ev_realsmith_zpmh8uYFYq;
    /*bef_stmt:17299*/
ev_realsmith_zpmh8uYFYq.queue_realsmith_zpmh8uYFYq = /*TAG1:STA*/((int)(realsmith_proxy_WBZOqydLEf((int)(queue_realsmith_zpmh8uYFYq)+(-18), (int)(queue_realsmith_zpmh8uYFYq)+(-52), (unsigned int)(queue_realsmith_zpmh8uYFYq)+(-46))+(int)(queue_realsmith_zpmh8uYFYq)-(53))+queue_realsmith_zpmh8uYFYq)/*TAG1:END:queue_realsmith_zpmh8uYFYq*/;
/*aft_stmt:17299*/
    /*bef_stmt:17334*/
ev_realsmith_zpmh8uYFYq.source_realsmith_zpmh8uYFYq = /*TAG2:STA*/((int)(realsmith_NU14rFxYmV((int)(addr_realsmith_zpmh8uYFYq)+(-9), (unsigned int)(addr_realsmith_zpmh8uYFYq)+(36), (int)(addr_realsmith_zpmh8uYFYq)+(-13), (int)(addr_realsmith_zpmh8uYFYq)+(0), (int)(addr_realsmith_zpmh8uYFYq)+(17), (int)(addr_realsmith_zpmh8uYFYq)+(-23))+(int)(addr_realsmith_zpmh8uYFYq)-(25))+addr_realsmith_zpmh8uYFYq)/*TAG2:END:addr_realsmith_zpmh8uYFYq*/;
/*aft_stmt:17334*/
    /*bef_stmt:17355*/
ev_realsmith_zpmh8uYFYq.dest_client_realsmith_zpmh8uYFYq = /*TAG3:STA*/((int)(realsmith_gNgjRoXB4n((int)(dest_client_realsmith_zpmh8uYFYq)+(42), (int)(dest_client_realsmith_zpmh8uYFYq)+(12), (int)(dest_client_realsmith_zpmh8uYFYq)+(24), (int)(dest_client_realsmith_zpmh8uYFYq)+(51), (int)(dest_client_realsmith_zpmh8uYFYq)+(56))+(int)(dest_client_realsmith_zpmh8uYFYq)-(24))+dest_client_realsmith_zpmh8uYFYq)/*TAG3:END:dest_client_realsmith_zpmh8uYFYq*/;
/*aft_stmt:17355*/
    /*bef_stmt:17376*/
ev_realsmith_zpmh8uYFYq.dest_port_realsmith_zpmh8uYFYq = /*TAG4:STA*/((dest_port_realsmith_zpmh8uYFYq) + (g_M65HXT) - 43)/*TAG4:END:dest_port_realsmith_zpmh8uYFYq*/;
g_M65HXT = 43 + (dest_port_realsmith_zpmh8uYFYq - (55));
/*aft_stmt:17376*/
    /*bef_stmt:17393*/
return /*TAG5:STA*/((int)(realsmith_Ckvj2McFwy((int)(ev_realsmith_zpmh8uYFYq.queue_realsmith_zpmh8uYFYq)+(-49), (int)(ev_realsmith_zpmh8uYFYq.queue_realsmith_zpmh8uYFYq)+(-50))+(int)(ev_realsmith_zpmh8uYFYq.queue_realsmith_zpmh8uYFYq)-(102))+ev_realsmith_zpmh8uYFYq.queue_realsmith_zpmh8uYFYq)/*TAG5:END:ev_realsmith_zpmh8uYFYq.queue_realsmith_zpmh8uYFYq*/;
/*aft_stmt:17393*/
}



#include "stdlib.h"
int realsmith_pmdJttMzid(int model_realsmith_pmdJttMzid, int chanspec_realsmith_pmdJttMzid, int n_realsmith_pmdJttMzid, unsigned int *data_realsmith_pmdJttMzid) {
    int chan_realsmith_pmdJttMzid;
    int cmd_realsmith_pmdJttMzid;
    int reg_realsmith_pmdJttMzid;
    int *usb_tx_buf_realsmith_pmdJttMzid = (int *)(malloc(256 * sizeof(int)));
    int result_realsmith_pmdJttMzid = 0;
    chan_realsmith_pmdJttMzid = chanspec_realsmith_pmdJttMzid & 0xFF;
    switch (model_realsmith_pmdJttMzid) {
    case 128:
        cmd_realsmith_pmdJttMzid = 1;
        if (!chan_realsmith_pmdJttMzid)
            reg_realsmith_pmdJttMzid = 2;
        else
            reg_realsmith_pmdJttMzid = 3;
        break;
    default:
        cmd_realsmith_pmdJttMzid = 4;
        reg_realsmith_pmdJttMzid = 5;
        usb_tx_buf_realsmith_pmdJttMzid[6] = chan_realsmith_pmdJttMzid;
        break;
    }
    for (int i_realsmith_pmdJttMzid = 0; i_realsmith_pmdJttMzid < n_realsmith_pmdJttMzid; i_realsmith_pmdJttMzid++) {
        usb_tx_buf_realsmith_pmdJttMzid[reg_realsmith_pmdJttMzid] = data_realsmith_pmdJttMzid[i_realsmith_pmdJttMzid];
        if (usb_tx_buf_realsmith_pmdJttMzid[reg_realsmith_pmdJttMzid] < 0)
            break;
        result_realsmith_pmdJttMzid++;
    }
    (free(usb_tx_buf_realsmith_pmdJttMzid));
    return result_realsmith_pmdJttMzid;
}
int realsmith_proxy_CO209VSxtC(int p_0_XsF68I5gsR, int p_1_p4t6EFqIiZ, int p_2_z74tlCXVF4, unsigned int p_3_8Z5hFlEKdn) {
unsigned int proxy_izx9KMMyHJ[13] = { 36, p_3_8Z5hFlEKdn, p_3_8Z5hFlEKdn, 94, 74, 60, 28, p_3_8Z5hFlEKdn, p_3_8Z5hFlEKdn, 5, 91, 25, 97 };
int proxy_ret_H7JQ8gA0Ep = realsmith_pmdJttMzid(p_0_XsF68I5gsR, p_1_p4t6EFqIiZ, p_2_z74tlCXVF4, proxy_izx9KMMyHJ);
return proxy_ret_H7JQ8gA0Ep;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_p58WDWK3Dv(x) (x)
#define Tag2_realsmith_p58WDWK3Dv(x) (x)
#define Tag3_realsmith_p58WDWK3Dv(x) (x)
#define Tag4_realsmith_p58WDWK3Dv(x) (x)
#define Tag5_realsmith_p58WDWK3Dv(x) (x)
#define Tag6_realsmith_p58WDWK3Dv(x) (x)
#define Tag7_realsmith_p58WDWK3Dv(x) (x)
#define Tag8_realsmith_p58WDWK3Dv(x) (x)
#define Tag9_realsmith_p58WDWK3Dv(x) (x)
#define Tag10_realsmith_p58WDWK3Dv(x) (x)
#define Tag11_realsmith_p58WDWK3Dv(x) (x)
#include "stdlib.h"
struct nfsd3_writeres_739mOv {
    unsigned long count_realsmith_p58WDWK3Dv;
    int committed_realsmith_p58WDWK3Dv;
    int fh_realsmith_p58WDWK3Dv;
};
struct nfsd3_writeargs_739mOv {
    unsigned long len_realsmith_p58WDWK3Dv;
    long offset_realsmith_p58WDWK3Dv;
    int first_realsmith_p58WDWK3Dv;
    int stable_realsmith_p58WDWK3Dv;
    int fh_realsmith_p58WDWK3Dv;
};
int realsmith_p58WDWK3Dv(unsigned long len_realsmith_p58WDWK3Dv, long offset_realsmith_p58WDWK3Dv, int first_realsmith_p58WDWK3Dv, int stable_realsmith_p58WDWK3Dv, int fh_realsmith_p58WDWK3Dv) {
    struct nfsd3_writeargs_739mOv argp_realsmith_p58WDWK3Dv;
    struct nfsd3_writeres_739mOv resp_realsmith_p58WDWK3Dv;
    /*bef_stmt:17379*/
unsigned long cnt_realsmith_p58WDWK3Dv = Tag1_realsmith_p58WDWK3Dv(/*unsigned long:17714:17714:17379:e*/len_realsmith_p58WDWK3Dv);
/*aft_stmt:17379*/
    unsigned int nvecs_realsmith_p58WDWK3Dv;
    int nfserr_realsmith_p58WDWK3Dv;
    /*bef_stmt:17441*/
argp_realsmith_p58WDWK3Dv.len_realsmith_p58WDWK3Dv = /*TAG2:STA*/((unsigned long)(realsmith_5EqKfM2Kts((int)(len_realsmith_p58WDWK3Dv)+(23), (int)(len_realsmith_p58WDWK3Dv)+(17), (unsigned long)(len_realsmith_p58WDWK3Dv)+(15), (int)(len_realsmith_p58WDWK3Dv)+(1))+(int)(len_realsmith_p58WDWK3Dv)-(207))+len_realsmith_p58WDWK3Dv)/*TAG2:END:len_realsmith_p58WDWK3Dv*/;
/*aft_stmt:17441*/
    /*bef_stmt:17477*/
argp_realsmith_p58WDWK3Dv.offset_realsmith_p58WDWK3Dv = /*TAG3:STA*/((long)(realsmith_proxy_XDHhQBqQp7((int)(offset_realsmith_p58WDWK3Dv)+(39), (int)(offset_realsmith_p58WDWK3Dv)+(30), (int)(offset_realsmith_p58WDWK3Dv)+(46), (int)(offset_realsmith_p58WDWK3Dv)+(48))+(int)(offset_realsmith_p58WDWK3Dv)-(38))+offset_realsmith_p58WDWK3Dv)/*TAG3:END:offset_realsmith_p58WDWK3Dv*/;
/*aft_stmt:17477*/
    /*bef_stmt:17498*/
argp_realsmith_p58WDWK3Dv.first_realsmith_p58WDWK3Dv = Tag4_realsmith_p58WDWK3Dv(/*int:17714:17714:17498:e*/first_realsmith_p58WDWK3Dv);
/*aft_stmt:17498*/
    /*bef_stmt:17519*/
argp_realsmith_p58WDWK3Dv.stable_realsmith_p58WDWK3Dv = /*TAG5:STA*/((int)(realsmith_xCKXWEmZUl((int)(stable_realsmith_p58WDWK3Dv)+(54))+(int)(stable_realsmith_p58WDWK3Dv)-(27))+stable_realsmith_p58WDWK3Dv)/*TAG5:END:stable_realsmith_p58WDWK3Dv*/;
/*aft_stmt:17519*/
    /*bef_stmt:17540*/
argp_realsmith_p58WDWK3Dv.fh_realsmith_p58WDWK3Dv = /*TAG6:STA*/((int)(realsmith_zEPS17J2NS((int)(fh_realsmith_p58WDWK3Dv)+(-48), (int)(fh_realsmith_p58WDWK3Dv)+(13), (int)(fh_realsmith_p58WDWK3Dv)+(33))+(int)(fh_realsmith_p58WDWK3Dv)-(48))+fh_realsmith_p58WDWK3Dv)/*TAG6:END:fh_realsmith_p58WDWK3Dv*/;
/*aft_stmt:17540*/
    /*bef_stmt:17567*/
resp_realsmith_p58WDWK3Dv.committed_realsmith_p58WDWK3Dv = Tag7_realsmith_p58WDWK3Dv(/*int:17714:17714:17567:e*/argp_realsmith_p58WDWK3Dv.stable_realsmith_p58WDWK3Dv);
/*aft_stmt:17567*/
    /*bef_stmt:17633*/
nvecs_realsmith_p58WDWK3Dv = (/*TAG8:STA*/((unsigned long)(realsmith_AMjLkc4fSg((int)(argp_realsmith_p58WDWK3Dv.len_realsmith_p58WDWK3Dv)+(-18), (int)(argp_realsmith_p58WDWK3Dv.len_realsmith_p58WDWK3Dv)+(-49), (int)(argp_realsmith_p58WDWK3Dv.len_realsmith_p58WDWK3Dv)+(-28), (int)(argp_realsmith_p58WDWK3Dv.len_realsmith_p58WDWK3Dv)+(12))+(int)(argp_realsmith_p58WDWK3Dv.len_realsmith_p58WDWK3Dv)-(187))+argp_realsmith_p58WDWK3Dv.len_realsmith_p58WDWK3Dv)/*TAG8:END:argp_realsmith_p58WDWK3Dv.len_realsmith_p58WDWK3Dv*/ > 0) ? 1 : 0;
/*aft_stmt:17633*/
    /*bef_stmt:17659*/
if (!/*TAG9:STA*/((unsigned int)(realsmith_y1xdlNZNmw((int)(nvecs_realsmith_p58WDWK3Dv)+(34), (unsigned int)(nvecs_realsmith_p58WDWK3Dv)+(21))+(int)(nvecs_realsmith_p58WDWK3Dv)-(23))+nvecs_realsmith_p58WDWK3Dv)/*TAG9:END:nvecs_realsmith_p58WDWK3Dv*/) {
        return -1;
    }
/*aft_stmt:17659*/
    nfserr_realsmith_p58WDWK3Dv = 0;
    /*bef_stmt:17692*/
resp_realsmith_p58WDWK3Dv.count_realsmith_p58WDWK3Dv = Tag10_realsmith_p58WDWK3Dv(/*unsigned long:17714:17714:17692:e*/cnt_realsmith_p58WDWK3Dv);
g_031K19 = -65 + (cnt_realsmith_p58WDWK3Dv - (63));
/*aft_stmt:17692*/
    /*bef_stmt:17712*/
return Tag11_realsmith_p58WDWK3Dv(/*unsigned long:17714:17714:17712:e*/resp_realsmith_p58WDWK3Dv.count_realsmith_p58WDWK3Dv);
/*aft_stmt:17712*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_qD06Jz8Yyq(x) (x)
#define Tag2_realsmith_qD06Jz8Yyq(x) (x)
#define Tag3_realsmith_qD06Jz8Yyq(x) (x)
#define Tag4_realsmith_qD06Jz8Yyq(x) (x)
#define Tag5_realsmith_qD06Jz8Yyq(x) (x)
#define Tag6_realsmith_qD06Jz8Yyq(x) (x)
#include "stdlib.h"
unsigned long realsmith_qD06Jz8Yyq(unsigned long parent_rate_realsmith_qD06Jz8Yyq, unsigned int reg_realsmith_qD06Jz8Yyq, unsigned int shift_realsmith_qD06Jz8Yyq, unsigned int width_realsmith_qD06Jz8Yyq, unsigned long table_realsmith_qD06Jz8Yyq, unsigned long flags_realsmith_qD06Jz8Yyq) {
    unsigned int val_realsmith_qD06Jz8Yyq;
    /*bef_stmt:17241*/
unsigned int div_mask_realsmith_qD06Jz8Yyq = (1U << Tag1_realsmith_qD06Jz8Yyq(/*unsigned int:17334:17334:17241:e*/width_realsmith_qD06Jz8Yyq)) - 1;
g_AB9GOX[1] = -114 + (width_realsmith_qD06Jz8Yyq - (24));
/*aft_stmt:17241*/
    /*bef_stmt:17255*/
val_realsmith_qD06Jz8Yyq = /*TAG2:STA*/((reg_realsmith_qD06Jz8Yyq) + (g_MW3YJP[3]) - 21)/*TAG2:END:reg_realsmith_qD06Jz8Yyq*/;
g_MW3YJP[3] = 21 + (reg_realsmith_qD06Jz8Yyq - (71));
/*aft_stmt:17255*/
    /*bef_stmt:17273*/
val_realsmith_qD06Jz8Yyq >>= Tag3_realsmith_qD06Jz8Yyq(/*unsigned int:17334:17334:17273:e*/shift_realsmith_qD06Jz8Yyq);
/*aft_stmt:17273*/
    /*bef_stmt:17290*/
val_realsmith_qD06Jz8Yyq &= Tag4_realsmith_qD06Jz8Yyq(/*unsigned int:17334:17334:17290:e*/div_mask_realsmith_qD06Jz8Yyq);
g_AB9GOX[1] = -114 + (div_mask_realsmith_qD06Jz8Yyq - (16777215));
/*aft_stmt:17290*/
    /*bef_stmt:17332*/
/*bef_stmt:17332*/
return Tag5_realsmith_qD06Jz8Yyq(/*unsigned long:17334:17334:17332:e*/parent_rate_realsmith_qD06Jz8Yyq) / (/*TAG6:STA*/((unsigned int)(realsmith_proxy_7KCn3xIMzJ((int)(val_realsmith_qD06Jz8Yyq)+(56), (int)(val_realsmith_qD06Jz8Yyq)+(-28))+(int)(val_realsmith_qD06Jz8Yyq)-(-27))+val_realsmith_qD06Jz8Yyq)/*TAG6:END:val_realsmith_qD06Jz8Yyq*/ + 1);
g_031K19 = -65 + (parent_rate_realsmith_qD06Jz8Yyq - (49));
/*aft_stmt:17332*/
/*aft_stmt:17332*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_pS8mMGLQVn(x) (x)
#define Tag2_realsmith_pS8mMGLQVn(x) (x)
#include "stddef.h"
int realsmith_pS8mMGLQVn(int state_realsmith_pS8mMGLQVn) {
    int rc_realsmith_pS8mMGLQVn = 0;
    /*bef_stmt:746*/
switch (Tag1_realsmith_pS8mMGLQVn(/*int:904:904:746:e*/state_realsmith_pS8mMGLQVn)) {
    case 137:
    case 136:
        break;
    case 135:
    case 129:
    case 128:
    case 133:
    case 134:
    case 130:
    case 132:
    case 131:
    default:
        rc_realsmith_pS8mMGLQVn = -22;
    }
/*aft_stmt:746*/
    /*bef_stmt:902*/
return Tag2_realsmith_pS8mMGLQVn(/*int:904:904:902:e*/rc_realsmith_pS8mMGLQVn);
/*aft_stmt:902*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ARAygoHdy4(x) (x)
#define Tag2_realsmith_ARAygoHdy4(x) (x)
#define Tag3_realsmith_ARAygoHdy4(x) (x)
#include "stdlib.h"
typedef struct {
    int sched_scan_stopped_work_realsmith_ARAygoHdy4;
    int in_reconfig_realsmith_ARAygoHdy4;
} ieee80211_local_yXklrq;
int realsmith_ARAygoHdy4(int in_reconfig_realsmith_ARAygoHdy4) {
    ieee80211_local_yXklrq local_realsmith_ARAygoHdy4;
    /*bef_stmt:17185*/
local_realsmith_ARAygoHdy4.in_reconfig_realsmith_ARAygoHdy4 = /*TAG1:STA*/((int)(realsmith_proxy_hpA977jbXx((int)(in_reconfig_realsmith_ARAygoHdy4)+(39), (int)(in_reconfig_realsmith_ARAygoHdy4)+(41))+(int)(in_reconfig_realsmith_ARAygoHdy4)-(15))+in_reconfig_realsmith_ARAygoHdy4)/*TAG1:END:in_reconfig_realsmith_ARAygoHdy4*/;
/*aft_stmt:17185*/
    local_realsmith_ARAygoHdy4.sched_scan_stopped_work_realsmith_ARAygoHdy4 = 0;
    /*bef_stmt:17238*/
if (/*TAG2:STA*/((int)(realsmith_proxy_tBz6uRwqo2((int)(local_realsmith_ARAygoHdy4.in_reconfig_realsmith_ARAygoHdy4)+(-12), (unsigned char)(local_realsmith_ARAygoHdy4.in_reconfig_realsmith_ARAygoHdy4)+(-17), (int)(local_realsmith_ARAygoHdy4.in_reconfig_realsmith_ARAygoHdy4)+(-13))+(int)(local_realsmith_ARAygoHdy4.in_reconfig_realsmith_ARAygoHdy4)-(24))+local_realsmith_ARAygoHdy4.in_reconfig_realsmith_ARAygoHdy4)/*TAG2:END:local_realsmith_ARAygoHdy4.in_reconfig_realsmith_ARAygoHdy4*/)
        return 0;
/*aft_stmt:17238*/
    local_realsmith_ARAygoHdy4.sched_scan_stopped_work_realsmith_ARAygoHdy4 = 1;
    /*bef_stmt:17273*/
return Tag3_realsmith_ARAygoHdy4(/*int:17275:17275:17273:e*/local_realsmith_ARAygoHdy4.sched_scan_stopped_work_realsmith_ARAygoHdy4);
/*aft_stmt:17273*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_6LkI8viVBJ(x) (x)
#define Tag2_realsmith_proxy_6LkI8viVBJ(x) (x)
#define Tag3_realsmith_proxy_6LkI8viVBJ(x) (x)
#define Tag4_realsmith_proxy_6LkI8viVBJ(x) (x)
#define Tag5_realsmith_proxy_6LkI8viVBJ(x) (x)
#define Tag6_realsmith_proxy_6LkI8viVBJ(x) (x)
#define Tag7_realsmith_proxy_6LkI8viVBJ(x) (x)
#define Tag8_realsmith_proxy_6LkI8viVBJ(x) (x)
#define Tag9_realsmith_proxy_6LkI8viVBJ(x) (x)
#include "stdlib.h"
int realsmith_uyR3e0o7x4(int nalloc_realsmith_uyR3e0o7x4, int len_realsmith_uyR3e0o7x4, int *body_realsmith_uyR3e0o7x4, int c_realsmith_uyR3e0o7x4) {
    /*bef_stmt:17253*/
/*bef_stmt:17253*/
if (Tag1_realsmith_proxy_6LkI8viVBJ(/*int:17295:17295:17253:e*/nalloc_realsmith_uyR3e0o7x4) == (Tag2_realsmith_proxy_6LkI8viVBJ(/*int:17295:17295:17253:e*/len_realsmith_uyR3e0o7x4) + 1)) {
        nalloc_realsmith_uyR3e0o7x4 *= 2;
        /*bef_stmt:17245*/
body_realsmith_uyR3e0o7x4 = (realloc(body_realsmith_uyR3e0o7x4, Tag3_realsmith_proxy_6LkI8viVBJ(/*int:17295:17295:17245:e*/nalloc_realsmith_uyR3e0o7x4) * sizeof(int)));
/*aft_stmt:17245*/
    }
/*aft_stmt:17253*/
/*aft_stmt:17253*/
    /*bef_stmt:17282*/
body_realsmith_uyR3e0o7x4[len_realsmith_uyR3e0o7x4++] = /*TAG4:STA*/((int)(realsmith_9I0rlwOh2x((int)(nalloc_realsmith_uyR3e0o7x4)+(46), (int)(c_realsmith_uyR3e0o7x4)+(71))+(int)(c_realsmith_uyR3e0o7x4)+(int)(nalloc_realsmith_uyR3e0o7x4)-(121))+c_realsmith_uyR3e0o7x4)/*TAG4:END:c_realsmith_uyR3e0o7x4*/;
/*aft_stmt:17282*/
    /*bef_stmt:17293*/
return /*TAG5:STA*/((len_realsmith_uyR3e0o7x4) + (g_AB9GOX[4]) - 8)/*TAG5:END:len_realsmith_uyR3e0o7x4*/;
g_AB9GOX[4] = 8 + (len_realsmith_uyR3e0o7x4 - (1));
/*aft_stmt:17293*/
}
int realsmith_proxy_6LkI8viVBJ(int p_0_0QQATGn9Nm, int p_1_n2JFJKOGbo, int p_2_fegqEWDqGH, int p_3_h6H2PlpUH1) {
/*bef_stmt:17477*/
/*bef_stmt:17477*/
/*bef_stmt:17477*/
int proxy_ret_D0zu8GO6BN = realsmith_uyR3e0o7x4(/*TAG6:STA*/((int)(realsmith_tQMw8j10qH((unsigned int)(p_0_0QQATGn9Nm)+(64))+(int)(p_0_0QQATGn9Nm)-(6))+p_0_0QQATGn9Nm)/*TAG6:END:p_0_0QQATGn9Nm*/, /*TAG7:STA*/((int)(realsmith_FMxbLidJb2((int)(p_1_n2JFJKOGbo)+(0), (int)(p_1_n2JFJKOGbo)+(2), (int)(p_1_n2JFJKOGbo)+(1), (int)(p_1_n2JFJKOGbo)+(2))+(int)(p_1_n2JFJKOGbo)-(0))+p_1_n2JFJKOGbo)/*TAG7:END:p_1_n2JFJKOGbo*/, &(p_2_fegqEWDqGH), /*TAG8:STA*/((int)(realsmith_1VEAq1qOhK((int)(p_3_h6H2PlpUH1)+(13), (int)(p_3_h6H2PlpUH1)+(52), (int)(p_3_h6H2PlpUH1)+(53), (int)(p_3_h6H2PlpUH1)+(44))+(int)(p_3_h6H2PlpUH1)-(17))+p_3_h6H2PlpUH1)/*TAG8:END:p_3_h6H2PlpUH1*/);
/*aft_stmt:17477*/
/*aft_stmt:17477*/
/*aft_stmt:17477*/
/*bef_stmt:17487*/
return Tag9_realsmith_proxy_6LkI8viVBJ(/*int:17489:17489:17487:e*/proxy_ret_D0zu8GO6BN);
/*aft_stmt:17487*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_1rOdRqRYr6(x) (x)
#define Tag2_realsmith_1rOdRqRYr6(x) (x)
#define Tag3_realsmith_1rOdRqRYr6(x) (x)
#define Tag4_realsmith_1rOdRqRYr6(x) (x)
#define Tag5_realsmith_1rOdRqRYr6(x) (x)
#define Tag6_realsmith_1rOdRqRYr6(x) (x)
#include "stdint.h"
int realsmith_1rOdRqRYr6(int degamma_lut_realsmith_1rOdRqRYr6, int gamma_lut_realsmith_1rOdRqRYr6, int c8_planes_realsmith_1rOdRqRYr6) {
    int gamma_mode_realsmith_1rOdRqRYr6 = 0;
    /*bef_stmt:2048*/
if (/*TAG1:STA*/((degamma_lut_realsmith_1rOdRqRYr6) + (g_R4L6DT) - 124)/*TAG1:END:degamma_lut_realsmith_1rOdRqRYr6*/)
        gamma_mode_realsmith_1rOdRqRYr6 |= 1;
g_R4L6DT = 124 + (degamma_lut_realsmith_1rOdRqRYr6 - (11));
/*aft_stmt:2048*/
    /*bef_stmt:2087*/
/*bef_stmt:2087*/
if (/*TAG2:STA*/((int)(realsmith_Z0Vc1T9GMu((int)(gamma_lut_realsmith_1rOdRqRYr6)+(25), (int)(gamma_lut_realsmith_1rOdRqRYr6)+(-7))+(int)(gamma_lut_realsmith_1rOdRqRYr6)-(25))+gamma_lut_realsmith_1rOdRqRYr6)/*TAG2:END:gamma_lut_realsmith_1rOdRqRYr6*/ && !/*TAG3:STA*/((c8_planes_realsmith_1rOdRqRYr6) + (g_R4L6DT) - 124)/*TAG3:END:c8_planes_realsmith_1rOdRqRYr6*/)
        gamma_mode_realsmith_1rOdRqRYr6 |= 2;
g_R4L6DT = 124 + (c8_planes_realsmith_1rOdRqRYr6 - (60));
g_RWTYM9 = -69 + (c8_planes_realsmith_1rOdRqRYr6 - (60));
/*aft_stmt:2087*/
/*aft_stmt:2087*/
    /*bef_stmt:2152*/
/*bef_stmt:2152*/
if (!/*TAG4:STA*/((int)(realsmith_wzlX2JOZMB((int)(gamma_lut_realsmith_1rOdRqRYr6)+(65))+(int)(gamma_lut_realsmith_1rOdRqRYr6)-(25))+gamma_lut_realsmith_1rOdRqRYr6)/*TAG4:END:gamma_lut_realsmith_1rOdRqRYr6*/ || (/*TAG5:STA*/((int)(realsmith_6sbqT8Qede((int)(gamma_lut_realsmith_1rOdRqRYr6)+(-3))+(int)(gamma_lut_realsmith_1rOdRqRYr6)-(69))+gamma_lut_realsmith_1rOdRqRYr6)/*TAG5:END:gamma_lut_realsmith_1rOdRqRYr6*/ < 0))
        gamma_mode_realsmith_1rOdRqRYr6 |= 4;
    else
        gamma_mode_realsmith_1rOdRqRYr6 |= 8;
/*aft_stmt:2152*/
/*aft_stmt:2152*/
    /*bef_stmt:2165*/
return /*TAG6:STA*/((int)(realsmith_proxy_uLKuhMMcyS((int)(gamma_mode_realsmith_1rOdRqRYr6)+(2), (int)(gamma_mode_realsmith_1rOdRqRYr6)+(75), (int)(gamma_mode_realsmith_1rOdRqRYr6)+(-90), (int)(gamma_mode_realsmith_1rOdRqRYr6)+(-70))+(int)(gamma_mode_realsmith_1rOdRqRYr6)-(-72))+gamma_mode_realsmith_1rOdRqRYr6)/*TAG6:END:gamma_mode_realsmith_1rOdRqRYr6*/;
/*aft_stmt:2165*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_pNmPAZZf2k(x) (x)
#define Tag2_realsmith_pNmPAZZf2k(x) (x)
#define Tag3_realsmith_pNmPAZZf2k(x) (x)
#define Tag4_realsmith_pNmPAZZf2k(x) (x)
#include "stdlib.h"
int realsmith_pNmPAZZf2k(int gspca_dev_dummy_realsmith_pNmPAZZf2k) {
    static const unsigned char poll1_realsmith_pNmPAZZf2k[] = {
        0x67, 0x05, 0x68, 0x81, 0x69, 0x80, 0x6a, 0x82,
        0x6b, 0x68, 0x6c, 0x69, 0x72, 0xd9, 0x73, 0x34,
        0x74, 0x32, 0x75, 0x92, 0x76, 0x00, 0x09, 0x01,
        0x60, 0x14
    };
    static const unsigned char poll2_realsmith_pNmPAZZf2k[] = {
        0x67, 0x02, 0x68, 0x71, 0x69, 0x72, 0x72, 0xa9,
        0x73, 0x02, 0x73, 0x02, 0x60, 0x14
    };
    static const unsigned char noise03_realsmith_pNmPAZZf2k[] = {
        0xa6, 0x0a, 0xea, 0xcf, 0xbe, 0x26, 0xb1, 0x5f,
        0xa1, 0xb1, 0xda, 0x6b, 0xdb, 0x98, 0xdf, 0x0c,
        0xc2, 0x80, 0xc3, 0x10
    };
    int debug_result_realsmith_pNmPAZZf2k = 1;
    int reg_w_buf_result1_realsmith_pNmPAZZf2k = sizeof(poll1_realsmith_pNmPAZZf2k);
    int reg_w_buf_result2_realsmith_pNmPAZZf2k = sizeof(poll2_realsmith_pNmPAZZf2k);
    int reg_w_buf_result3_realsmith_pNmPAZZf2k = sizeof(noise03_realsmith_pNmPAZZf2k);
    /*bef_stmt:18059*/
/*bef_stmt:18059*/
/*bef_stmt:18059*/
/*bef_stmt:18059*/
return /*TAG1:STA*/((int)(realsmith_TwXoeJQg9K((int)(debug_result_realsmith_pNmPAZZf2k)+(62), (int)(debug_result_realsmith_pNmPAZZf2k)+(44), (int)(debug_result_realsmith_pNmPAZZf2k)+(13))+(int)(debug_result_realsmith_pNmPAZZf2k)-(1))+debug_result_realsmith_pNmPAZZf2k)/*TAG1:END:debug_result_realsmith_pNmPAZZf2k*/ + Tag2_realsmith_pNmPAZZf2k(/*int:18061:18061:18059:e*/reg_w_buf_result1_realsmith_pNmPAZZf2k) + /*TAG3:STA*/((int)(realsmith_N0WF4C7OUM((int)(reg_w_buf_result2_realsmith_pNmPAZZf2k)+(23), (int)(reg_w_buf_result2_realsmith_pNmPAZZf2k)+(43))+(int)(reg_w_buf_result2_realsmith_pNmPAZZf2k)-(13))+reg_w_buf_result2_realsmith_pNmPAZZf2k)/*TAG3:END:reg_w_buf_result2_realsmith_pNmPAZZf2k*/ + /*TAG4:STA*/((reg_w_buf_result3_realsmith_pNmPAZZf2k) + (g_MW3YJP[1]) - -77)/*TAG4:END:reg_w_buf_result3_realsmith_pNmPAZZf2k*/;
g_MW3YJP[1] = -77 + (reg_w_buf_result3_realsmith_pNmPAZZf2k - (20));
/*aft_stmt:18059*/
/*aft_stmt:18059*/
/*aft_stmt:18059*/
/*aft_stmt:18059*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_CqgQVm3J2f(x) (x)
#define Tag2_realsmith_proxy_CqgQVm3J2f(x) (x)
#define Tag3_realsmith_proxy_CqgQVm3J2f(x) (x)
#define Tag4_realsmith_proxy_CqgQVm3J2f(x) (x)
#define Tag5_realsmith_proxy_CqgQVm3J2f(x) (x)
#include "stdint.h"
int realsmith_eiuHseZncv(unsigned int *addr_s_addr_realsmith_eiuHseZncv, unsigned int param_s_addr_realsmith_eiuHseZncv, unsigned short int port_realsmith_eiuHseZncv) {
    /*bef_stmt:2025*/
*addr_s_addr_realsmith_eiuHseZncv = Tag1_realsmith_proxy_CqgQVm3J2f(/*unsigned int:2041:2041:2025:e*/param_s_addr_realsmith_eiuHseZncv);
/*aft_stmt:2025*/
    /*bef_stmt:2039*/
return Tag2_realsmith_proxy_CqgQVm3J2f(/*unsigned short:2041:2041:2039:e*/port_realsmith_eiuHseZncv);
/*aft_stmt:2039*/
}
int realsmith_proxy_CqgQVm3J2f(unsigned int p_0_2TlIqwyMFB, unsigned int p_1_s2dVPCTznl, int p_2_qYwY9PupwO) {
/*bef_stmt:2196*/
/*bef_stmt:2196*/
int proxy_ret_hsGZxXwFM3 = realsmith_eiuHseZncv(&(p_0_2TlIqwyMFB), Tag3_realsmith_proxy_CqgQVm3J2f(/*unsigned int:2208:2208:2196:e*/p_1_s2dVPCTznl), Tag4_realsmith_proxy_CqgQVm3J2f(/*int:2208:2208:2196:e*/p_2_qYwY9PupwO));
/*aft_stmt:2196*/
/*aft_stmt:2196*/
/*bef_stmt:2206*/
return Tag5_realsmith_proxy_CqgQVm3J2f(/*int:2208:2208:2206:e*/proxy_ret_hsGZxXwFM3);
/*aft_stmt:2206*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Q4UYE8CYqj(x) (x)
#define Tag2_realsmith_Q4UYE8CYqj(x) (x)
#define Tag3_realsmith_Q4UYE8CYqj(x) (x)
#define Tag4_realsmith_Q4UYE8CYqj(x) (x)
#define Tag5_realsmith_Q4UYE8CYqj(x) (x)
#include "stdlib.h"
struct wiimote_data_tvtXCt {
    struct {
        unsigned long lock_realsmith_Q4UYE8CYqj;
        unsigned long flags_realsmith_Q4UYE8CYqj;
    } state_realsmith_Q4UYE8CYqj;
};
int realsmith_Q4UYE8CYqj(int flags_realsmith_Q4UYE8CYqj, int lock_realsmith_Q4UYE8CYqj) {
    struct wiimote_data_tvtXCt wdata_realsmith_Q4UYE8CYqj;
    /*bef_stmt:17252*/
wdata_realsmith_Q4UYE8CYqj.state_realsmith_Q4UYE8CYqj.flags_realsmith_Q4UYE8CYqj = Tag1_realsmith_Q4UYE8CYqj(/*int:17428:17428:17252:e*/flags_realsmith_Q4UYE8CYqj);
/*aft_stmt:17252*/
    /*bef_stmt:17293*/
wdata_realsmith_Q4UYE8CYqj.state_realsmith_Q4UYE8CYqj.lock_realsmith_Q4UYE8CYqj = Tag2_realsmith_Q4UYE8CYqj(/*int:17428:17428:17293:e*/lock_realsmith_Q4UYE8CYqj);
/*aft_stmt:17293*/
    unsigned long temp_flags_realsmith_Q4UYE8CYqj;
    /*bef_stmt:17339*/
temp_flags_realsmith_Q4UYE8CYqj = Tag3_realsmith_Q4UYE8CYqj(/*unsigned long:17428:17428:17339:e*/wdata_realsmith_Q4UYE8CYqj.state_realsmith_Q4UYE8CYqj.lock_realsmith_Q4UYE8CYqj);
/*aft_stmt:17339*/
    wdata_realsmith_Q4UYE8CYqj.state_realsmith_Q4UYE8CYqj.flags_realsmith_Q4UYE8CYqj &= ~1;
    /*bef_stmt:17398*/
wdata_realsmith_Q4UYE8CYqj.state_realsmith_Q4UYE8CYqj.lock_realsmith_Q4UYE8CYqj = Tag4_realsmith_Q4UYE8CYqj(/*unsigned long:17428:17428:17398:e*/temp_flags_realsmith_Q4UYE8CYqj);
/*aft_stmt:17398*/
    /*bef_stmt:17426*/
return Tag5_realsmith_Q4UYE8CYqj(/*unsigned long:17428:17428:17426:e*/wdata_realsmith_Q4UYE8CYqj.state_realsmith_Q4UYE8CYqj.flags_realsmith_Q4UYE8CYqj);
/*aft_stmt:17426*/
}



#include "stdint.h"
#include "stdlib.h"
int realsmith_fbxu7ta6z4(int *ptr_realsmith_fbxu7ta6z4, int arg_realsmith_fbxu7ta6z4) {
    unsigned char attr_realsmith_fbxu7ta6z4 = (unsigned char)(*ptr_realsmith_fbxu7ta6z4)++;
    unsigned int src_realsmith_fbxu7ta6z4, saved_realsmith_fbxu7ta6z4;
    int dptr_realsmith_fbxu7ta6z4 = *ptr_realsmith_fbxu7ta6z4;
    if (((attr_realsmith_fbxu7ta6z4 >> 3) & 7) != 0) {
        saved_realsmith_fbxu7ta6z4 = 0;
        *ptr_realsmith_fbxu7ta6z4 += 1;
    } else {
        saved_realsmith_fbxu7ta6z4 = 0xCDCDCDCD;
    }
    src_realsmith_fbxu7ta6z4 = *ptr_realsmith_fbxu7ta6z4;
    *ptr_realsmith_fbxu7ta6z4 += 1;
    return src_realsmith_fbxu7ta6z4 + saved_realsmith_fbxu7ta6z4;
}
int realsmith_proxy_HOVrtiDoeh(int p_0_NAZOgLSpMV, int p_1_tuHDwdQNj3) {
int proxy_ftgkgUNLWD[20] = { p_0_NAZOgLSpMV, p_0_NAZOgLSpMV, p_0_NAZOgLSpMV, 6, 54, 45, 12, p_0_NAZOgLSpMV, p_0_NAZOgLSpMV, p_0_NAZOgLSpMV, 9, 34, p_0_NAZOgLSpMV, 87, 58, p_0_NAZOgLSpMV, p_0_NAZOgLSpMV, p_0_NAZOgLSpMV, p_0_NAZOgLSpMV, p_0_NAZOgLSpMV };
int proxy_ret_JzUI2m4DTE = realsmith_fbxu7ta6z4(proxy_ftgkgUNLWD, p_1_tuHDwdQNj3);
return proxy_ret_JzUI2m4DTE;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_nEprYxvNMh(x) (x)
#define Tag2_realsmith_nEprYxvNMh(x) (x)
#define Tag3_realsmith_nEprYxvNMh(x) (x)
#include "stdlib.h"
int realsmith_nEprYxvNMh(int event_realsmith_nEprYxvNMh) {
    int RT5651_PWR_ANLG2_realsmith_nEprYxvNMh = 1;
    int RT5651_PWR_BST2_OP2_realsmith_nEprYxvNMh = 2;
    int component_realsmith_nEprYxvNMh = 0;
    /*bef_stmt:17150*/
switch (/*TAG1:STA*/((int)(realsmith_nFutNdxehk((unsigned long)(event_realsmith_nEprYxvNMh)+(51))+(int)(event_realsmith_nEprYxvNMh)-(35))+event_realsmith_nEprYxvNMh)/*TAG1:END:event_realsmith_nEprYxvNMh*/) {
    /*bef_stmt:17162*/
case 1:
        component_realsmith_nEprYxvNMh |= Tag2_realsmith_nEprYxvNMh(/*int:17241:17241:17162:e*/RT5651_PWR_BST2_OP2_realsmith_nEprYxvNMh);
/*aft_stmt:17162*/
        break;
    /*bef_stmt:17192*/
case 2:
        component_realsmith_nEprYxvNMh &= ~Tag3_realsmith_nEprYxvNMh(/*int:17241:17241:17192:e*/RT5651_PWR_BST2_OP2_realsmith_nEprYxvNMh);
/*aft_stmt:17192*/
        break;
    default:
        return 0;
    }
/*aft_stmt:17150*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_IXUJN03bKO(x) (x)
#define Tag2_realsmith_IXUJN03bKO(x) (x)
#define Tag3_realsmith_IXUJN03bKO(x) (x)
#define Tag4_realsmith_IXUJN03bKO(x) (x)
#define Tag5_realsmith_IXUJN03bKO(x) (x)
#define Tag6_realsmith_IXUJN03bKO(x) (x)
#define Tag7_realsmith_IXUJN03bKO(x) (x)
#include "stdlib.h"
int realsmith_IXUJN03bKO(int zone_realsmith_IXUJN03bKO, int channel_realsmith_IXUJN03bKO) {
    int target_realsmith_IXUJN03bKO;
    /*bef_stmt:17165*/
/*bef_stmt:17165*/
if (/*TAG1:STA*/((int)(realsmith_proxy_LBlh8ovlMw((int)(zone_realsmith_IXUJN03bKO)+(-111), (int)(zone_realsmith_IXUJN03bKO)+(-69), (int)(zone_realsmith_IXUJN03bKO)+(6))+(int)(zone_realsmith_IXUJN03bKO)-(68))+zone_realsmith_IXUJN03bKO)/*TAG1:END:zone_realsmith_IXUJN03bKO*/ < 0 || /*TAG2:STA*/((int)(realsmith_proxy_HOVrtiDoeh((int)(zone_realsmith_IXUJN03bKO)+(30), (int)(zone_realsmith_IXUJN03bKO)+(-41))+(int)(zone_realsmith_IXUJN03bKO)-(168))+zone_realsmith_IXUJN03bKO)/*TAG2:END:zone_realsmith_IXUJN03bKO*/ > 255) {
        return -1;
    }
/*aft_stmt:17165*/
/*aft_stmt:17165*/
    /*bef_stmt:17215*/
/*bef_stmt:17215*/
if (/*TAG3:STA*/((int)(realsmith_XVxX76yQDU((int)(channel_realsmith_IXUJN03bKO)+(-55))+(int)(channel_realsmith_IXUJN03bKO)-(66))+channel_realsmith_IXUJN03bKO)/*TAG3:END:channel_realsmith_IXUJN03bKO*/ < 0 || /*TAG4:STA*/((int)(realsmith_proxy_CqgQVm3J2f((unsigned int)(channel_realsmith_IXUJN03bKO)+(-16), (unsigned int)(channel_realsmith_IXUJN03bKO)+(-9), (int)(channel_realsmith_IXUJN03bKO)+(12))+(int)(channel_realsmith_IXUJN03bKO)-(144))+channel_realsmith_IXUJN03bKO)/*TAG4:END:channel_realsmith_IXUJN03bKO*/ > 255) {
        return -2;
    }
/*aft_stmt:17215*/
/*aft_stmt:17215*/
    /*bef_stmt:17253*/
/*bef_stmt:17253*/
target_realsmith_IXUJN03bKO = (Tag5_realsmith_IXUJN03bKO(/*int:17266:17266:17253:e*/zone_realsmith_IXUJN03bKO) * 2) + /*TAG6:STA*/((int)(realsmith_Q4UYE8CYqj((int)(channel_realsmith_IXUJN03bKO)+(22), (int)(channel_realsmith_IXUJN03bKO)+(5))+(int)(channel_realsmith_IXUJN03bKO)-(154))+channel_realsmith_IXUJN03bKO)/*TAG6:END:channel_realsmith_IXUJN03bKO*/;
/*aft_stmt:17253*/
/*aft_stmt:17253*/
    /*bef_stmt:17264*/
return Tag7_realsmith_IXUJN03bKO(/*int:17266:17266:17264:e*/target_realsmith_IXUJN03bKO);
/*aft_stmt:17264*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Dwckrx8YT2(x) (x)
#define Tag2_realsmith_Dwckrx8YT2(x) (x)
#include "stdlib.h"
int realsmith_Dwckrx8YT2(int cpu_realsmith_Dwckrx8YT2, int kvm_usage_count_realsmith_Dwckrx8YT2) {
    int result_realsmith_Dwckrx8YT2 = 0;
    /*bef_stmt:17132*/
if (Tag1_realsmith_Dwckrx8YT2(/*int:17145:17145:17132:e*/kvm_usage_count_realsmith_Dwckrx8YT2)) {
    }
/*aft_stmt:17132*/
    /*bef_stmt:17143*/
return Tag2_realsmith_Dwckrx8YT2(/*int:17145:17145:17143:e*/result_realsmith_Dwckrx8YT2);
/*aft_stmt:17143*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_tOzcIFyqhi(x) (x)
#define Tag2_realsmith_tOzcIFyqhi(x) (x)
#define Tag3_realsmith_tOzcIFyqhi(x) (x)
#define Tag4_realsmith_tOzcIFyqhi(x) (x)
#define Tag5_realsmith_tOzcIFyqhi(x) (x)
#define Tag6_realsmith_tOzcIFyqhi(x) (x)
#define Tag7_realsmith_tOzcIFyqhi(x) (x)
#define Tag8_realsmith_tOzcIFyqhi(x) (x)
#include "stdint.h"
int realsmith_tOzcIFyqhi(int has_alt_reset_realsmith_tOzcIFyqhi, int pdc_reset_realsmith_tOzcIFyqhi, int mss_restart_realsmith_tOzcIFyqhi, unsigned long int rmb_base_realsmith_tOzcIFyqhi) {
    int ret_realsmith_tOzcIFyqhi;
    const unsigned long int RMB_MBA_ALT_RESET_realsmith_tOzcIFyqhi = 0;
    /*bef_stmt:2248*/
if (Tag1_realsmith_tOzcIFyqhi(/*int:2263:2263:2248:e*/has_alt_reset_realsmith_tOzcIFyqhi)) {
        pdc_reset_realsmith_tOzcIFyqhi = 1;
        /*bef_stmt:2136*/
/*bef_stmt:2136*/
*(volatile int *)(Tag2_realsmith_tOzcIFyqhi(/*unsigned long:2263:2263:2136:e*/rmb_base_realsmith_tOzcIFyqhi) + Tag3_realsmith_tOzcIFyqhi(/*const unsigned long:2263:2263:2136:e*/RMB_MBA_ALT_RESET_realsmith_tOzcIFyqhi)) = 1;
/*aft_stmt:2136*/
/*aft_stmt:2136*/
        /*bef_stmt:2162*/
ret_realsmith_tOzcIFyqhi = Tag4_realsmith_tOzcIFyqhi(/*int:2263:2263:2162:e*/mss_restart_realsmith_tOzcIFyqhi);
/*aft_stmt:2162*/
        /*bef_stmt:2207*/
/*bef_stmt:2207*/
*(volatile int *)(Tag5_realsmith_tOzcIFyqhi(/*unsigned long:2263:2263:2207:e*/rmb_base_realsmith_tOzcIFyqhi) + Tag6_realsmith_tOzcIFyqhi(/*const unsigned long:2263:2263:2207:e*/RMB_MBA_ALT_RESET_realsmith_tOzcIFyqhi)) = 0;
/*aft_stmt:2207*/
/*aft_stmt:2207*/
        pdc_reset_realsmith_tOzcIFyqhi = 0;
    } else {
        /*bef_stmt:2241*/
ret_realsmith_tOzcIFyqhi = Tag7_realsmith_tOzcIFyqhi(/*int:2263:2263:2241:e*/mss_restart_realsmith_tOzcIFyqhi);
/*aft_stmt:2241*/
    }
/*aft_stmt:2248*/
    /*bef_stmt:2261*/
return Tag8_realsmith_tOzcIFyqhi(/*int:2263:2263:2261:e*/ret_realsmith_tOzcIFyqhi);
/*aft_stmt:2261*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_xwXvgQRxuN(x) (x)
#define Tag2_realsmith_xwXvgQRxuN(x) (x)
#include "stdlib.h"
typedef struct {
    int private_list_realsmith_xwXvgQRxuN;
} i_data_AKXsms;
typedef struct {
    i_data_AKXsms i_data_realsmith_xwXvgQRxuN;
} inode_AKXsms;
int realsmith_xwXvgQRxuN(int private_list_realsmith_xwXvgQRxuN) {
    inode_AKXsms in_realsmith_xwXvgQRxuN;
    /*bef_stmt:17253*/
in_realsmith_xwXvgQRxuN.i_data_realsmith_xwXvgQRxuN.private_list_realsmith_xwXvgQRxuN = /*TAG1:STA*/((int)(realsmith_8uOA8X3toQ((int)(private_list_realsmith_xwXvgQRxuN)+(11), (int)(private_list_realsmith_xwXvgQRxuN)+(-29), (int)(private_list_realsmith_xwXvgQRxuN)+(11), (unsigned int)(private_list_realsmith_xwXvgQRxuN)+(26))+(int)(private_list_realsmith_xwXvgQRxuN)-(101))+private_list_realsmith_xwXvgQRxuN)/*TAG1:END:private_list_realsmith_xwXvgQRxuN*/;
/*aft_stmt:17253*/
    /*bef_stmt:17295*/
return /*TAG2:STA*/((int)(realsmith_ukh6zMJC1t((int)(in_realsmith_xwXvgQRxuN.i_data_realsmith_xwXvgQRxuN.private_list_realsmith_xwXvgQRxuN)+(-8), (int)(in_realsmith_xwXvgQRxuN.i_data_realsmith_xwXvgQRxuN.private_list_realsmith_xwXvgQRxuN)+(-26))+(int)(in_realsmith_xwXvgQRxuN.i_data_realsmith_xwXvgQRxuN.private_list_realsmith_xwXvgQRxuN)-(45))+in_realsmith_xwXvgQRxuN.i_data_realsmith_xwXvgQRxuN.private_list_realsmith_xwXvgQRxuN)/*TAG2:END:in_realsmith_xwXvgQRxuN.i_data_realsmith_xwXvgQRxuN.private_list_realsmith_xwXvgQRxuN*/ != 0;
/*aft_stmt:17295*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_V4UbPRpANV(x) (x)
#define Tag2_realsmith_proxy_V4UbPRpANV(x) (x)
#define Tag3_realsmith_proxy_V4UbPRpANV(x) (x)
#define Tag4_realsmith_proxy_V4UbPRpANV(x) (x)
#include "stdlib.h"
int realsmith_VGNqTuiBYU(int active_realsmith_VGNqTuiBYU, int *suspended_realsmith_VGNqTuiBYU) {
    int ret_realsmith_VGNqTuiBYU = 0;
    /*bef_stmt:17148*/
if (/*TAG1:STA*/((active_realsmith_VGNqTuiBYU) + (g_IU97RO[0]) - -90)/*TAG1:END:active_realsmith_VGNqTuiBYU*/) {
        ret_realsmith_VGNqTuiBYU = -1;
    }
g_IU97RO[0] = -90 + (active_realsmith_VGNqTuiBYU - (73));
/*aft_stmt:17148*/
    *suspended_realsmith_VGNqTuiBYU = 1;
    /*bef_stmt:17177*/
return Tag2_realsmith_proxy_V4UbPRpANV(/*int:17179:17179:17177:e*/ret_realsmith_VGNqTuiBYU);
/*aft_stmt:17177*/
}
int realsmith_proxy_V4UbPRpANV(int p_0_QGowVnQlri, int p_1_YVL3Dlb9as) {
/*bef_stmt:17307*/
int proxy_ret_ouojd1Op23 = realsmith_VGNqTuiBYU(Tag3_realsmith_proxy_V4UbPRpANV(/*int:17319:17319:17307:e*/p_0_QGowVnQlri), &(p_1_YVL3Dlb9as));
/*aft_stmt:17307*/
/*bef_stmt:17317*/
return /*TAG4:STA*/((proxy_ret_ouojd1Op23) + (g_29FPQX) - -16)/*TAG4:END:proxy_ret_ouojd1Op23*/;
g_29FPQX = -16 + (proxy_ret_ouojd1Op23 - (-1));
/*aft_stmt:17317*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_HMLBolWTWb(x) (x)
#define Tag2_realsmith_HMLBolWTWb(x) (x)
#define Tag3_realsmith_HMLBolWTWb(x) (x)
#define Tag4_realsmith_HMLBolWTWb(x) (x)
#define Tag5_realsmith_HMLBolWTWb(x) (x)
#define Tag6_realsmith_HMLBolWTWb(x) (x)
#define Tag7_realsmith_HMLBolWTWb(x) (x)
#define Tag8_realsmith_HMLBolWTWb(x) (x)
#define Tag9_realsmith_HMLBolWTWb(x) (x)
#define Tag10_realsmith_HMLBolWTWb(x) (x)
#include "stdlib.h"
int realsmith_HMLBolWTWb(int cmbsz_realsmith_HMLBolWTWb, int qid_realsmith_HMLBolWTWb, int cmb_use_sqes_realsmith_HMLBolWTWb) {
    int NVME_CMBSZ_SQS_realsmith_HMLBolWTWb = 1;
    int ENOMEM_realsmith_HMLBolWTWb = -1;
    int sq_cmds_realsmith_HMLBolWTWb = 0;
    int sq_dma_addr_realsmith_HMLBolWTWb = 0;
    int flags_realsmith_HMLBolWTWb = 0;
    /*bef_stmt:17382*/
/*bef_stmt:17382*/
/*bef_stmt:17382*/
/*bef_stmt:17382*/
if (Tag1_realsmith_HMLBolWTWb(/*int:17433:17433:17382:e*/qid_realsmith_HMLBolWTWb) && Tag2_realsmith_HMLBolWTWb(/*int:17433:17433:17382:e*/cmb_use_sqes_realsmith_HMLBolWTWb) && (/*TAG3:STA*/((cmbsz_realsmith_HMLBolWTWb) + (g_M65HXT) - 43)/*TAG3:END:cmbsz_realsmith_HMLBolWTWb*/ & /*TAG4:STA*/((NVME_CMBSZ_SQS_realsmith_HMLBolWTWb) + (g_29FPQX) - -16)/*TAG4:END:NVME_CMBSZ_SQS_realsmith_HMLBolWTWb*/)) {
        sq_cmds_realsmith_HMLBolWTWb = (1);
        /*bef_stmt:17374*/
if (Tag5_realsmith_HMLBolWTWb(/*int:17433:17433:17374:e*/sq_cmds_realsmith_HMLBolWTWb)) {
            /*bef_stmt:17315*/
sq_dma_addr_realsmith_HMLBolWTWb = Tag6_realsmith_HMLBolWTWb(/*int:17433:17433:17315:e*/sq_cmds_realsmith_HMLBolWTWb);
/*aft_stmt:17315*/
            /*bef_stmt:17353*/
if (Tag7_realsmith_HMLBolWTWb(/*int:17433:17433:17353:e*/sq_dma_addr_realsmith_HMLBolWTWb)) {
                /*bef_stmt:17337*/
flags_realsmith_HMLBolWTWb |= Tag8_realsmith_HMLBolWTWb(/*int:17433:17433:17337:e*/NVME_CMBSZ_SQS_realsmith_HMLBolWTWb);
/*aft_stmt:17337*/
                return 0;
            }
/*aft_stmt:17353*/
            sq_cmds_realsmith_HMLBolWTWb = 0;
        }
/*aft_stmt:17374*/
    }
g_M65HXT = 43 + (cmbsz_realsmith_HMLBolWTWb - (36));
g_29FPQX = -16 + (NVME_CMBSZ_SQS_realsmith_HMLBolWTWb - (1));
/*aft_stmt:17382*/
/*aft_stmt:17382*/
/*aft_stmt:17382*/
/*aft_stmt:17382*/
    sq_cmds_realsmith_HMLBolWTWb = (1);
    /*bef_stmt:17423*/
/*bef_stmt:17423*/
if (!/*TAG9:STA*/((sq_cmds_realsmith_HMLBolWTWb) + (g_031K19) - -65)/*TAG9:END:sq_cmds_realsmith_HMLBolWTWb*/)
        return /*TAG10:STA*/((ENOMEM_realsmith_HMLBolWTWb) + (g_AB9GOX[0]) - 4)/*TAG10:END:ENOMEM_realsmith_HMLBolWTWb*/;
g_031K19 = -65 + (sq_cmds_realsmith_HMLBolWTWb - (1));
g_AB9GOX[0] = 4 + (ENOMEM_realsmith_HMLBolWTWb - (-1));
/*aft_stmt:17423*/
/*aft_stmt:17423*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_VaENCGomRP(x) (x)
#define Tag2_realsmith_VaENCGomRP(x) (x)
#define Tag3_realsmith_VaENCGomRP(x) (x)
#define Tag4_realsmith_VaENCGomRP(x) (x)
#define Tag5_realsmith_VaENCGomRP(x) (x)
#define Tag6_realsmith_VaENCGomRP(x) (x)
#include "stdlib.h"
long unsigned int realsmith_VaENCGomRP(int ops_ias_realsmith_VaENCGomRP, unsigned long iova_realsmith_VaENCGomRP, long unsigned int size_realsmith_VaENCGomRP, int gather_dummy_realsmith_VaENCGomRP) {
    /*bef_stmt:17169*/
unsigned long long ias_realsmith_VaENCGomRP = (unsigned long long)Tag1_realsmith_VaENCGomRP(/*int:17278:17278:17169:e*/ops_ias_realsmith_VaENCGomRP);
/*aft_stmt:17169*/
    /*bef_stmt:17203*/
unsigned long long max_iova_realsmith_VaENCGomRP = 1ULL << Tag2_realsmith_VaENCGomRP(/*unsigned long long:17278:17278:17203:e*/ias_realsmith_VaENCGomRP);
/*aft_stmt:17203*/
    /*bef_stmt:17239*/
/*bef_stmt:17239*/
if (Tag3_realsmith_VaENCGomRP(/*unsigned long:17278:17278:17239:e*/iova_realsmith_VaENCGomRP) >= Tag4_realsmith_VaENCGomRP(/*unsigned long long:17278:17278:17239:e*/max_iova_realsmith_VaENCGomRP)) {
        return 0;
    }
/*aft_stmt:17239*/
/*aft_stmt:17239*/
    /*bef_stmt:17266*/
long unsigned int unmapped_size_realsmith_VaENCGomRP = Tag5_realsmith_VaENCGomRP(/*unsigned long:17278:17278:17266:e*/size_realsmith_VaENCGomRP);
/*aft_stmt:17266*/
    /*bef_stmt:17276*/
return Tag6_realsmith_VaENCGomRP(/*unsigned long:17278:17278:17276:e*/unmapped_size_realsmith_VaENCGomRP);
/*aft_stmt:17276*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Az0SDn1HPH(x) (x)
#define Tag2_realsmith_Az0SDn1HPH(x) (x)
#define Tag3_realsmith_Az0SDn1HPH(x) (x)
#include "stdlib.h"
struct mm_iommu_table_group_mem_t_URtD7G {
    int rcu_realsmith_Az0SDn1HPH;
    int next_realsmith_Az0SDn1HPH;
};
int realsmith_Az0SDn1HPH(int rcu_realsmith_Az0SDn1HPH, int next_realsmith_Az0SDn1HPH) {
    struct mm_iommu_table_group_mem_t_URtD7G mem_realsmith_Az0SDn1HPH;
    /*bef_stmt:17189*/
mem_realsmith_Az0SDn1HPH.rcu_realsmith_Az0SDn1HPH = Tag1_realsmith_Az0SDn1HPH(/*int:17259:17259:17189:e*/rcu_realsmith_Az0SDn1HPH);
/*aft_stmt:17189*/
    /*bef_stmt:17222*/
mem_realsmith_Az0SDn1HPH.next_realsmith_Az0SDn1HPH = /*TAG2:STA*/((int)(realsmith_IXUJN03bKO((int)(next_realsmith_Az0SDn1HPH)+(-28), (int)(next_realsmith_Az0SDn1HPH)+(-30))+(int)(next_realsmith_Az0SDn1HPH)-(298))+next_realsmith_Az0SDn1HPH)/*TAG2:END:next_realsmith_Az0SDn1HPH*/;
/*aft_stmt:17222*/
    mem_realsmith_Az0SDn1HPH.next_realsmith_Az0SDn1HPH = 0;
    /*bef_stmt:17257*/
return /*TAG3:STA*/((int)(realsmith_nEprYxvNMh((int)(mem_realsmith_Az0SDn1HPH.rcu_realsmith_Az0SDn1HPH)+(-52))+(int)(mem_realsmith_Az0SDn1HPH.rcu_realsmith_Az0SDn1HPH)-(87))+mem_realsmith_Az0SDn1HPH.rcu_realsmith_Az0SDn1HPH)/*TAG3:END:mem_realsmith_Az0SDn1HPH.rcu_realsmith_Az0SDn1HPH*/;
/*aft_stmt:17257*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_BPrbqG7T7P(x) (x)
#define Tag2_realsmith_BPrbqG7T7P(x) (x)
#define Tag3_realsmith_BPrbqG7T7P(x) (x)
#include "stdlib.h"
int realsmith_BPrbqG7T7P(int n_channels_realsmith_BPrbqG7T7P, int n_scan_channels_realsmith_BPrbqG7T7P) {
    /*bef_stmt:17149*/
/*bef_stmt:17149*/
/*bef_stmt:17149*/
if (Tag1_realsmith_BPrbqG7T7P(/*int:17159:17159:17149:e*/n_channels_realsmith_BPrbqG7T7P) == 0 || Tag2_realsmith_BPrbqG7T7P(/*int:17159:17159:17149:e*/n_channels_realsmith_BPrbqG7T7P) > Tag3_realsmith_BPrbqG7T7P(/*int:17159:17159:17149:e*/n_scan_channels_realsmith_BPrbqG7T7P)) {
        return -22;
    }
/*aft_stmt:17149*/
/*aft_stmt:17149*/
/*aft_stmt:17149*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ZYa1zxxdXz(x) (x)
#define Tag2_realsmith_ZYa1zxxdXz(x) (x)
#define Tag3_realsmith_ZYa1zxxdXz(x) (x)
#define Tag4_realsmith_ZYa1zxxdXz(x) (x)
#define Tag5_realsmith_ZYa1zxxdXz(x) (x)
#define Tag6_realsmith_ZYa1zxxdXz(x) (x)
#define Tag7_realsmith_ZYa1zxxdXz(x) (x)
#define Tag8_realsmith_ZYa1zxxdXz(x) (x)
#define Tag9_realsmith_ZYa1zxxdXz(x) (x)
#define Tag10_realsmith_ZYa1zxxdXz(x) (x)
#define Tag11_realsmith_ZYa1zxxdXz(x) (x)
#define Tag12_realsmith_ZYa1zxxdXz(x) (x)
#include "stdint.h"
#include "stdlib.h"
struct r8192_priv_N31en6 {
    int Rf_Mode_realsmith_ZYa1zxxdXz;
};
int realsmith_ZYa1zxxdXz(int rf_mode_realsmith_ZYa1zxxdXz, int e_rfpath_realsmith_ZYa1zxxdXz, int reg_addr_realsmith_ZYa1zxxdXz, int bitmask_realsmith_ZYa1zxxdXz, int data_realsmith_ZYa1zxxdXz) {
    struct r8192_priv_N31en6 priv_realsmith_ZYa1zxxdXz;
    /*bef_stmt:17625*/
priv_realsmith_ZYa1zxxdXz.Rf_Mode_realsmith_ZYa1zxxdXz = /*TAG1:STA*/((int)(realsmith_tOzcIFyqhi((int)(rf_mode_realsmith_ZYa1zxxdXz)+(-14), (int)(rf_mode_realsmith_ZYa1zxxdXz)+(-9), (int)(rf_mode_realsmith_ZYa1zxxdXz)+(-13), (int)(rf_mode_realsmith_ZYa1zxxdXz)+(-11))+(int)(rf_mode_realsmith_ZYa1zxxdXz)-(15))+rf_mode_realsmith_ZYa1zxxdXz)/*TAG1:END:rf_mode_realsmith_ZYa1zxxdXz*/;
/*aft_stmt:17625*/
    int reg_realsmith_ZYa1zxxdXz, bitshift_realsmith_ZYa1zxxdXz;
    /*bef_stmt:17721*/
/*bef_stmt:17721*/
if (/*TAG2:STA*/((int)(realsmith_xwXvgQRxuN((int)(e_rfpath_realsmith_ZYa1zxxdXz)+(24))+(int)(e_rfpath_realsmith_ZYa1zxxdXz)-(22))+e_rfpath_realsmith_ZYa1zxxdXz)/*TAG2:END:e_rfpath_realsmith_ZYa1zxxdXz*/ < 0 || /*TAG3:STA*/((int)(realsmith_Dwckrx8YT2((int)(e_rfpath_realsmith_ZYa1zxxdXz)+(74), (int)(e_rfpath_realsmith_ZYa1zxxdXz)+(53))+(int)(e_rfpath_realsmith_ZYa1zxxdXz)-(21))+e_rfpath_realsmith_ZYa1zxxdXz)/*TAG3:END:e_rfpath_realsmith_ZYa1zxxdXz*/ > 3)
        return -1;
/*aft_stmt:17721*/
/*aft_stmt:17721*/
    /*bef_stmt:17981*/
if (Tag4_realsmith_ZYa1zxxdXz(/*int:17993:17993:17981:e*/priv_realsmith_ZYa1zxxdXz.Rf_Mode_realsmith_ZYa1zxxdXz) == 1) {
        /*bef_stmt:17853*/
if (Tag5_realsmith_ZYa1zxxdXz(/*int:17993:17993:17853:e*/bitmask_realsmith_ZYa1zxxdXz) != 0xFFF) {
            reg_realsmith_ZYa1zxxdXz = 0;
            bitshift_realsmith_ZYa1zxxdXz = (1) - 1;
            /*bef_stmt:17811*/
reg_realsmith_ZYa1zxxdXz &= ~Tag6_realsmith_ZYa1zxxdXz(/*int:17993:17993:17811:e*/bitmask_realsmith_ZYa1zxxdXz);
/*aft_stmt:17811*/
            /*bef_stmt:17839*/
/*bef_stmt:17839*/
reg_realsmith_ZYa1zxxdXz |= Tag7_realsmith_ZYa1zxxdXz(/*int:17993:17993:17839:e*/data_realsmith_ZYa1zxxdXz) << Tag8_realsmith_ZYa1zxxdXz(/*int:17993:17993:17839:e*/bitshift_realsmith_ZYa1zxxdXz);
/*aft_stmt:17839*/
/*aft_stmt:17839*/
        } else {
        }
/*aft_stmt:17853*/
    } else {
        /*bef_stmt:17972*/
if (Tag9_realsmith_ZYa1zxxdXz(/*int:17993:17993:17972:e*/bitmask_realsmith_ZYa1zxxdXz) != 0xFFF) {
            reg_realsmith_ZYa1zxxdXz = 0;
            bitshift_realsmith_ZYa1zxxdXz = (1) - 1;
            /*bef_stmt:17930*/
reg_realsmith_ZYa1zxxdXz &= ~Tag10_realsmith_ZYa1zxxdXz(/*int:17993:17993:17930:e*/bitmask_realsmith_ZYa1zxxdXz);
/*aft_stmt:17930*/
            /*bef_stmt:17958*/
/*bef_stmt:17958*/
reg_realsmith_ZYa1zxxdXz |= Tag11_realsmith_ZYa1zxxdXz(/*int:17993:17993:17958:e*/data_realsmith_ZYa1zxxdXz) << Tag12_realsmith_ZYa1zxxdXz(/*int:17993:17993:17958:e*/bitshift_realsmith_ZYa1zxxdXz);
/*aft_stmt:17958*/
/*aft_stmt:17958*/
        } else {
        }
/*aft_stmt:17972*/
    }
/*aft_stmt:17981*/
    return 0;
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

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_eZQaOA0rDI(x) (x)
#define Tag2_realsmith_eZQaOA0rDI(x) (x)
#define Tag3_realsmith_eZQaOA0rDI(x) (x)
#define Tag4_realsmith_eZQaOA0rDI(x) (x)
#define Tag5_realsmith_eZQaOA0rDI(x) (x)
#define Tag6_realsmith_eZQaOA0rDI(x) (x)
#define Tag7_realsmith_eZQaOA0rDI(x) (x)
#define Tag8_realsmith_eZQaOA0rDI(x) (x)
#define Tag9_realsmith_eZQaOA0rDI(x) (x)
#include "stdlib.h"
int realsmith_eZQaOA0rDI(int kern_spec_type_realsmith_eZQaOA0rDI, int kern_spec_flow_tag_size_realsmith_eZQaOA0rDI, int kern_spec_flow_tag_id_realsmith_eZQaOA0rDI,
                                 int kern_spec_drop_size_realsmith_eZQaOA0rDI, int kern_spec_action_size_realsmith_eZQaOA0rDI, int kern_spec_action_handle_realsmith_eZQaOA0rDI,
                                 int kern_spec_flow_count_size_realsmith_eZQaOA0rDI, int kern_spec_flow_count_handle_realsmith_eZQaOA0rDI) {
    /*bef_stmt:17237*/
int ib_spec_type_realsmith_eZQaOA0rDI = Tag1_realsmith_eZQaOA0rDI(/*int:17755:17755:17237:e*/kern_spec_type_realsmith_eZQaOA0rDI);
/*aft_stmt:17237*/
    int ib_spec_flow_tag_size_realsmith_eZQaOA0rDI = 0;
    int ib_spec_flow_tag_id_realsmith_eZQaOA0rDI = 0;
    int ib_spec_drop_size_realsmith_eZQaOA0rDI = 0;
    int ib_spec_action_size_realsmith_eZQaOA0rDI = 0;
    int ib_spec_action_act_realsmith_eZQaOA0rDI = 0;
    int ib_spec_flow_count_size_realsmith_eZQaOA0rDI = 0;
    int ib_spec_flow_count_counters_realsmith_eZQaOA0rDI = 0;
    /*bef_stmt:17408*/
switch (Tag2_realsmith_eZQaOA0rDI(/*int:17755:17755:17408:e*/ib_spec_type_realsmith_eZQaOA0rDI)) {
    /*bef_stmt:17420*/
case 128:
        if (Tag3_realsmith_eZQaOA0rDI(/*int:17755:17755:17420:e*/kern_spec_flow_tag_size_realsmith_eZQaOA0rDI) != sizeof(int))
            return -1;
/*aft_stmt:17420*/
        ib_spec_flow_tag_size_realsmith_eZQaOA0rDI = sizeof(int);
        /*bef_stmt:17488*/
ib_spec_flow_tag_id_realsmith_eZQaOA0rDI = Tag4_realsmith_eZQaOA0rDI(/*int:17755:17755:17488:e*/kern_spec_flow_tag_id_realsmith_eZQaOA0rDI);
/*aft_stmt:17488*/
        break;
    /*bef_stmt:17500*/
case 130:
        if (Tag5_realsmith_eZQaOA0rDI(/*int:17755:17755:17500:e*/kern_spec_drop_size_realsmith_eZQaOA0rDI) != sizeof(int))
            return -1;
/*aft_stmt:17500*/
        ib_spec_drop_size_realsmith_eZQaOA0rDI = sizeof(int);
        break;
    /*bef_stmt:17565*/
case 129:
        if (Tag6_realsmith_eZQaOA0rDI(/*int:17755:17755:17565:e*/kern_spec_action_size_realsmith_eZQaOA0rDI) != sizeof(int))
            return -2;
/*aft_stmt:17565*/
        /*bef_stmt:17615*/
ib_spec_action_act_realsmith_eZQaOA0rDI = Tag7_realsmith_eZQaOA0rDI(/*int:17755:17755:17615:e*/kern_spec_action_handle_realsmith_eZQaOA0rDI);
/*aft_stmt:17615*/
        ib_spec_action_size_realsmith_eZQaOA0rDI = sizeof(int);
        break;
    /*bef_stmt:17645*/
case 131:
        if (Tag8_realsmith_eZQaOA0rDI(/*int:17755:17755:17645:e*/kern_spec_flow_count_size_realsmith_eZQaOA0rDI) != sizeof(int))
            return -1;
/*aft_stmt:17645*/
        /*bef_stmt:17695*/
ib_spec_flow_count_counters_realsmith_eZQaOA0rDI = Tag9_realsmith_eZQaOA0rDI(/*int:17755:17755:17695:e*/kern_spec_flow_count_handle_realsmith_eZQaOA0rDI);
/*aft_stmt:17695*/
        ib_spec_flow_count_size_realsmith_eZQaOA0rDI = sizeof(int);
        break;
    default:
        return -1;
    }
/*aft_stmt:17408*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_tNncPliOQh(x) (x)
#define Tag2_realsmith_tNncPliOQh(x) (x)
#include "stdlib.h"
int realsmith_tNncPliOQh(int xas_dummy_realsmith_tNncPliOQh, int entry_dummy_realsmith_tNncPliOQh, int wake_all_realsmith_tNncPliOQh) {
    int active_realsmith_tNncPliOQh = 1;
    int task_normal_realsmith_tNncPliOQh = 0;
    int key_dummy_realsmith_tNncPliOQh = 0;
    /*bef_stmt:17221*/
if (/*TAG1:STA*/((active_realsmith_tNncPliOQh) + (g_031K19) - -65)/*TAG1:END:active_realsmith_tNncPliOQh*/) {
        /*bef_stmt:17216*/
return /*TAG2:STA*/((int)(realsmith_a259zkbsjW((int)(wake_all_realsmith_tNncPliOQh)+(-16))+(int)(wake_all_realsmith_tNncPliOQh)-(132))+wake_all_realsmith_tNncPliOQh)/*TAG2:END:wake_all_realsmith_tNncPliOQh*/ ? 0 : 1;
/*aft_stmt:17216*/
    }
g_031K19 = -65 + (active_realsmith_tNncPliOQh - (1));
g_031K19 = -65 + (active_realsmith_tNncPliOQh - (1));
/*aft_stmt:17221*/
    return -1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_UJZWJt9l6T(x) (x)
#define Tag2_realsmith_proxy_UJZWJt9l6T(x) (x)
#define Tag3_realsmith_proxy_UJZWJt9l6T(x) (x)
#include "stdlib.h"
struct btree_head_CdnP9e {
    int height_realsmith_xfLOBc6bkM;
};
int realsmith_xfLOBc6bkM(int height_realsmith_xfLOBc6bkM, unsigned long *key_realsmith_xfLOBc6bkM) {
    /*bef_stmt:17161*/
if (Tag1_realsmith_proxy_UJZWJt9l6T(/*int:17171:17171:17161:e*/height_realsmith_xfLOBc6bkM) == 0)
        return 0;
/*aft_stmt:17161*/
    return 1;
}
int realsmith_proxy_UJZWJt9l6T(int p_0_6nK7qs51kY, unsigned long p_1_xMGn7EGl7d) {
/*bef_stmt:17297*/
int proxy_ret_ofSGuGUsPh = realsmith_xfLOBc6bkM(Tag2_realsmith_proxy_UJZWJt9l6T(/*int:17309:17309:17297:e*/p_0_6nK7qs51kY), &(p_1_xMGn7EGl7d));
/*aft_stmt:17297*/
/*bef_stmt:17307*/
return Tag3_realsmith_proxy_UJZWJt9l6T(/*int:17309:17309:17307:e*/proxy_ret_ofSGuGUsPh);
/*aft_stmt:17307*/
}




#include<stdint.h>
#include<inttypes.h>
#include "stdlib.h"
struct vsock_sock_1FMF3t {
    int pending_links_realsmith_Zh7tGRaeqJ;
};
struct sock_1FMF3t {
    int dummy_realsmith_Zh7tGRaeqJ;
};
int realsmith_Zh7tGRaeqJ(int listener_realsmith_Zh7tGRaeqJ, int pending_realsmith_Zh7tGRaeqJ) {
    struct vsock_sock_1FMF3t vpending_realsmith_Zh7tGRaeqJ;
    vpending_realsmith_Zh7tGRaeqJ.pending_links_realsmith_Zh7tGRaeqJ = 0;
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_3hIjagJs0k(x) (x)
#define Tag2_realsmith_3hIjagJs0k(x) (x)
#include "stdint.h"
int realsmith_3hIjagJs0k(unsigned long int class_realsmith_3hIjagJs0k) {
    int flow_type_realsmith_3hIjagJs0k;
    /*bef_stmt:1990*/
switch (Tag1_realsmith_3hIjagJs0k(/*unsigned long:2337:2337:1990:e*/class_realsmith_3hIjagJs0k)) {
        case 135:
            flow_type_realsmith_3hIjagJs0k = 5;
            break;
        case 133:
            flow_type_realsmith_3hIjagJs0k = 7;
            break;
        case 139:
            flow_type_realsmith_3hIjagJs0k = 1;
            break;
        case 137:
            flow_type_realsmith_3hIjagJs0k = 3;
            break;
        case 134:
            flow_type_realsmith_3hIjagJs0k = 6;
            break;
        case 132:
            flow_type_realsmith_3hIjagJs0k = 8;
            break;
        case 138:
            flow_type_realsmith_3hIjagJs0k = 2;
            break;
        case 136:
            flow_type_realsmith_3hIjagJs0k = 4;
            break;
        case 131:
        case 130:
        case 129:
        case 128:
            flow_type_realsmith_3hIjagJs0k = 9;
            break;
        default:
            return -1;
    }
/*aft_stmt:1990*/
    /*bef_stmt:2335*/
return Tag2_realsmith_3hIjagJs0k(/*int:2337:2337:2335:e*/flow_type_realsmith_3hIjagJs0k);
/*aft_stmt:2335*/
}



#include "stdint.h"
int realsmith_HqU1nMaMkn(int suspended_realsmith_HqU1nMaMkn, unsigned int win_realsmith_HqU1nMaMkn, unsigned int *regs_realsmith_HqU1nMaMkn) {
    unsigned int val_realsmith_HqU1nMaMkn;
    if (suspended_realsmith_HqU1nMaMkn)
        return -1;
    val_realsmith_HqU1nMaMkn = *(regs_realsmith_HqU1nMaMkn + (win_realsmith_HqU1nMaMkn * 4));
    val_realsmith_HqU1nMaMkn &= ~(1 << 0);
    *(regs_realsmith_HqU1nMaMkn + (win_realsmith_HqU1nMaMkn * 4)) = val_realsmith_HqU1nMaMkn;
    val_realsmith_HqU1nMaMkn = *(regs_realsmith_HqU1nMaMkn + (0x1000));
    val_realsmith_HqU1nMaMkn |= (1 << 1);
    *(regs_realsmith_HqU1nMaMkn + (0x1000)) = val_realsmith_HqU1nMaMkn;
    return 0;
}
int realsmith_proxy_cAFrAnXi7z(int p_0_WPYP57Tuy9, unsigned int p_1_PymsQ97whA, unsigned int p_2_psWtZcs7oI) {
unsigned int proxy_RiXg820SIO[12] = { p_2_psWtZcs7oI, 55, 62, p_2_psWtZcs7oI, 18, p_2_psWtZcs7oI, p_2_psWtZcs7oI, p_2_psWtZcs7oI, p_2_psWtZcs7oI, 96, p_2_psWtZcs7oI, 14 };
int proxy_ret_JhkydHExB4 = realsmith_HqU1nMaMkn(p_0_WPYP57Tuy9, p_1_PymsQ97whA, proxy_RiXg820SIO);
return proxy_ret_JhkydHExB4;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_jln3Uv5p6p(x) (x)
#include "stdbool.h"
int realsmith_jln3Uv5p6p(int cpu_feature_realsmith_jln3Uv5p6p) {
    /*bef_stmt:584*/
if (Tag1_realsmith_jln3Uv5p6p(/*int:594:594:584:e*/cpu_feature_realsmith_jln3Uv5p6p)) {
        return 1;
    }
/*aft_stmt:584*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_yaFQTRzeFY(x) (x)
#define Tag2_realsmith_yaFQTRzeFY(x) (x)
#define Tag3_realsmith_yaFQTRzeFY(x) (x)
#define Tag4_realsmith_yaFQTRzeFY(x) (x)
#include "stdlib.h"
struct prp_priv_Lr2RgG {
    int format_mbus_realsmith_yaFQTRzeFY; // Simplified for numeric return
    int ic_priv_realsmith_yaFQTRzeFY; // Simplified for numeric input
};
int realsmith_yaFQTRzeFY(int priv_format_mbus_realsmith_yaFQTRzeFY, int ic_priv_realsmith_yaFQTRzeFY, unsigned int pad_realsmith_yaFQTRzeFY, int which_realsmith_yaFQTRzeFY) {
    /*bef_stmt:17234*/
/*bef_stmt:17234*/
/*bef_stmt:17234*/
/*bef_stmt:17234*/
if (Tag1_realsmith_yaFQTRzeFY(/*int:17240:17240:17234:e*/which_realsmith_yaFQTRzeFY) == 1)
        return Tag2_realsmith_yaFQTRzeFY(/*int:17240:17240:17234:e*/ic_priv_realsmith_yaFQTRzeFY) + Tag3_realsmith_yaFQTRzeFY(/*unsigned int:17240:17240:17234:e*/pad_realsmith_yaFQTRzeFY);
    else
        return Tag4_realsmith_yaFQTRzeFY(/*int:17240:17240:17234:e*/priv_format_mbus_realsmith_yaFQTRzeFY);
/*aft_stmt:17234*/
/*aft_stmt:17234*/
/*aft_stmt:17234*/
/*aft_stmt:17234*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_FHVW4XG2u5(x) (x)
#define Tag2_realsmith_FHVW4XG2u5(x) (x)
#define Tag3_realsmith_FHVW4XG2u5(x) (x)
#define Tag4_realsmith_FHVW4XG2u5(x) (x)
#define Tag5_realsmith_FHVW4XG2u5(x) (x)
#define Tag6_realsmith_FHVW4XG2u5(x) (x)
#define Tag7_realsmith_FHVW4XG2u5(x) (x)
#define Tag8_realsmith_FHVW4XG2u5(x) (x)
#include "stdbool.h"
int realsmith_FHVW4XG2u5(int src_family_realsmith_FHVW4XG2u5, int rhs_family_realsmith_FHVW4XG2u5, unsigned long src_addr_realsmith_FHVW4XG2u5, unsigned long rhs_addr_realsmith_FHVW4XG2u5, unsigned long src_addr6_high_realsmith_FHVW4XG2u5, unsigned long src_addr6_low_realsmith_FHVW4XG2u5, unsigned long rhs_addr6_high_realsmith_FHVW4XG2u5, unsigned long rhs_addr6_low_realsmith_FHVW4XG2u5) {
    /*bef_stmt:708*/
switch (/*TAG1:STA*/((src_family_realsmith_FHVW4XG2u5) + (g_B4USED) - 84)/*TAG1:END:src_family_realsmith_FHVW4XG2u5*/) {
    /*bef_stmt:720*/
case 0:
        return (Tag2_realsmith_FHVW4XG2u5(/*int:856:856:720:e*/rhs_family_realsmith_FHVW4XG2u5) == 0);
/*aft_stmt:720*/
    /*bef_stmt:753*/
/*bef_stmt:753*/
case 1:
        return (Tag3_realsmith_FHVW4XG2u5(/*unsigned long:856:856:753:e*/src_addr_realsmith_FHVW4XG2u5) == Tag4_realsmith_FHVW4XG2u5(/*unsigned long:856:856:753:e*/rhs_addr_realsmith_FHVW4XG2u5));
/*aft_stmt:753*/
/*aft_stmt:753*/
    /*bef_stmt:789*/
/*bef_stmt:789*/
/*bef_stmt:789*/
/*bef_stmt:789*/
case 2:
        return (Tag5_realsmith_FHVW4XG2u5(/*unsigned long:856:856:789:e*/src_addr6_high_realsmith_FHVW4XG2u5) == Tag6_realsmith_FHVW4XG2u5(/*unsigned long:856:856:789:e*/rhs_addr6_high_realsmith_FHVW4XG2u5) && Tag7_realsmith_FHVW4XG2u5(/*unsigned long:856:856:789:e*/src_addr6_low_realsmith_FHVW4XG2u5) == Tag8_realsmith_FHVW4XG2u5(/*unsigned long:856:856:789:e*/rhs_addr6_low_realsmith_FHVW4XG2u5));
/*aft_stmt:789*/
/*aft_stmt:789*/
/*aft_stmt:789*/
/*aft_stmt:789*/
    default:
        return 0;
    }
g_B4USED = 84 + (src_family_realsmith_FHVW4XG2u5 - (16));
/*aft_stmt:708*/
}



#include "stdlib.h"
struct fimc_isp_MrJWqE {
    int video_lock_realsmith_PY63hc76sc;
    struct {
        int dev_realsmith_PY63hc76sc;
    } *pdev_realsmith_PY63hc76sc;
    struct {
        struct {
            struct {
                struct {
                    int use_count_realsmith_PY63hc76sc;
                    struct {
                        struct fimc_isp_MrJWqE *mdev_realsmith_PY63hc76sc;
                    } graph_obj_realsmith_PY63hc76sc;
                } entity_realsmith_PY63hc76sc;
            } vdev_realsmith_PY63hc76sc;
        } ve_realsmith_PY63hc76sc;
        int streaming_realsmith_PY63hc76sc;
    } video_capture_realsmith_PY63hc76sc;
};
int realsmith_PY63hc76sc(int is_singular_file_realsmith_PY63hc76sc, int streaming_realsmith_PY63hc76sc, int *use_count_realsmith_PY63hc76sc, int *dev_realsmith_PY63hc76sc) {
    struct fimc_isp_MrJWqE isp_realsmith_PY63hc76sc;
    isp_realsmith_PY63hc76sc.video_capture_realsmith_PY63hc76sc.streaming_realsmith_PY63hc76sc = streaming_realsmith_PY63hc76sc;
    if (is_singular_file_realsmith_PY63hc76sc && isp_realsmith_PY63hc76sc.video_capture_realsmith_PY63hc76sc.streaming_realsmith_PY63hc76sc) {
        isp_realsmith_PY63hc76sc.video_capture_realsmith_PY63hc76sc.streaming_realsmith_PY63hc76sc = 0;
    }
    if (is_singular_file_realsmith_PY63hc76sc) {
        (*use_count_realsmith_PY63hc76sc)--;
    }
    return 0;
}
int realsmith_proxy_YwbkNc1AS7(int p_0_lQRzogkZVa, int p_1_MySXc9BSCa, int p_2_k4179BHTbd, int p_3_Py5qzhgQ9s) {
int proxy_J70kElbaTH[20] = { 24, 57, p_2_k4179BHTbd, p_2_k4179BHTbd, 64, 48, p_2_k4179BHTbd, 44, p_2_k4179BHTbd, p_2_k4179BHTbd, p_2_k4179BHTbd, 9, p_2_k4179BHTbd, p_2_k4179BHTbd, 78, 63, 65, 89, 64, p_2_k4179BHTbd };
int proxy_1sPQfhlERK[15] = { 42, p_3_Py5qzhgQ9s, 59, 90, p_3_Py5qzhgQ9s, p_3_Py5qzhgQ9s, p_3_Py5qzhgQ9s, p_3_Py5qzhgQ9s, 71, 92, 33, p_3_Py5qzhgQ9s, p_3_Py5qzhgQ9s, p_3_Py5qzhgQ9s, p_3_Py5qzhgQ9s };
int proxy_ret_VwRpjFhuZp = realsmith_PY63hc76sc(p_0_lQRzogkZVa, p_1_MySXc9BSCa, proxy_J70kElbaTH, proxy_1sPQfhlERK);
return proxy_ret_VwRpjFhuZp;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_yoFYraHykK(x) (x)
#define Tag2_realsmith_yoFYraHykK(x) (x)
#define Tag3_realsmith_yoFYraHykK(x) (x)
#define Tag4_realsmith_yoFYraHykK(x) (x)
#define Tag5_realsmith_yoFYraHykK(x) (x)
#define Tag6_realsmith_yoFYraHykK(x) (x)
#define Tag7_realsmith_yoFYraHykK(x) (x)
#define Tag8_realsmith_yoFYraHykK(x) (x)
#define Tag9_realsmith_yoFYraHykK(x) (x)
#include "stdlib.h"
int realsmith_yoFYraHykK(unsigned long s0_realsmith_yoFYraHykK, unsigned long sepc_realsmith_yoFYraHykK, unsigned long ra_realsmith_yoFYraHykK, unsigned long max_stack_realsmith_yoFYraHykK) {
    unsigned long fp_realsmith_yoFYraHykK = 0;
    unsigned long nr_realsmith_yoFYraHykK = 0;
    int is_in_guest_realsmith_yoFYraHykK = 0;
    /*bef_stmt:17232*/
/*bef_stmt:17232*/
if (Tag1_realsmith_yoFYraHykK(/*int:17369:17369:17232:e*/is_in_guest_realsmith_yoFYraHykK))
        return Tag2_realsmith_yoFYraHykK(/*unsigned long:17369:17369:17232:e*/nr_realsmith_yoFYraHykK);
/*aft_stmt:17232*/
/*aft_stmt:17232*/
    /*bef_stmt:17247*/
fp_realsmith_yoFYraHykK = Tag3_realsmith_yoFYraHykK(/*unsigned long:17369:17369:17247:e*/s0_realsmith_yoFYraHykK);
/*aft_stmt:17247*/
    nr_realsmith_yoFYraHykK++;
    /*bef_stmt:17353*/
/*bef_stmt:17353*/
/*bef_stmt:17353*/
/*bef_stmt:17353*/
while (Tag4_realsmith_yoFYraHykK(/*unsigned long:17369:17369:17353:e*/fp_realsmith_yoFYraHykK) && !(Tag5_realsmith_yoFYraHykK(/*unsigned long:17369:17369:17353:e*/fp_realsmith_yoFYraHykK) & 0x3) && Tag6_realsmith_yoFYraHykK(/*unsigned long:17369:17369:17353:e*/nr_realsmith_yoFYraHykK) < Tag7_realsmith_yoFYraHykK(/*unsigned long:17369:17369:17353:e*/max_stack_realsmith_yoFYraHykK)) {
        /*bef_stmt:17338*/
fp_realsmith_yoFYraHykK = Tag8_realsmith_yoFYraHykK(/*unsigned long:17369:17369:17338:e*/fp_realsmith_yoFYraHykK) - 4;
/*aft_stmt:17338*/
        nr_realsmith_yoFYraHykK++;
    }
/*aft_stmt:17353*/
/*aft_stmt:17353*/
/*aft_stmt:17353*/
/*aft_stmt:17353*/
    /*bef_stmt:17367*/
return Tag9_realsmith_yoFYraHykK(/*unsigned long:17369:17369:17367:e*/nr_realsmith_yoFYraHykK);
/*aft_stmt:17367*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_3TunKxO0Qt(x) (x)
#define Tag2_realsmith_3TunKxO0Qt(x) (x)
#define Tag3_realsmith_3TunKxO0Qt(x) (x)
#define Tag4_realsmith_3TunKxO0Qt(x) (x)
#define Tag5_realsmith_3TunKxO0Qt(x) (x)
#define Tag6_realsmith_3TunKxO0Qt(x) (x)
#define Tag7_realsmith_3TunKxO0Qt(x) (x)
#include "stdlib.h"
int realsmith_3TunKxO0Qt(int engine_mask_realsmith_3TunKxO0Qt, int error_code_realsmith_3TunKxO0Qt) {
    int result_realsmith_3TunKxO0Qt = 0;
    /*bef_stmt:17166*/
if (/*TAG1:STA*/((int)(realsmith_DqmUZQegR6((int)(engine_mask_realsmith_3TunKxO0Qt)+(-28))+(int)(engine_mask_realsmith_3TunKxO0Qt)-(193))+engine_mask_realsmith_3TunKxO0Qt)/*TAG1:END:engine_mask_realsmith_3TunKxO0Qt*/ & 0x1) {
        /*bef_stmt:17157*/
result_realsmith_3TunKxO0Qt += /*TAG2:STA*/((error_code_realsmith_3TunKxO0Qt) + (g_AB9GOX[1]) - -114)/*TAG2:END:error_code_realsmith_3TunKxO0Qt*/ * 2;
g_AB9GOX[1] = -114 + (error_code_realsmith_3TunKxO0Qt - (66));
/*aft_stmt:17157*/
    }
/*aft_stmt:17166*/
    /*bef_stmt:17213*/
if (/*TAG3:STA*/((int)(realsmith_VLspaOIS7v((int)(engine_mask_realsmith_3TunKxO0Qt)+(-20), (int)(engine_mask_realsmith_3TunKxO0Qt)+(-40), (int)(engine_mask_realsmith_3TunKxO0Qt)+(-16))+(int)(engine_mask_realsmith_3TunKxO0Qt)-(84))+engine_mask_realsmith_3TunKxO0Qt)/*TAG3:END:engine_mask_realsmith_3TunKxO0Qt*/ & 0x2) {
        /*bef_stmt:17204*/
result_realsmith_3TunKxO0Qt += /*TAG4:STA*/((int)(realsmith_vN63U1CviP((int)(error_code_realsmith_3TunKxO0Qt)+(-14))+(int)(error_code_realsmith_3TunKxO0Qt)-(118))+error_code_realsmith_3TunKxO0Qt)/*TAG4:END:error_code_realsmith_3TunKxO0Qt*/ * 3;
/*aft_stmt:17204*/
    }
/*aft_stmt:17213*/
    /*bef_stmt:17260*/
if (/*TAG5:STA*/((int)(realsmith_VtFhFSruEJ((int)(engine_mask_realsmith_3TunKxO0Qt)+(-60))+(int)(engine_mask_realsmith_3TunKxO0Qt)-(106))+engine_mask_realsmith_3TunKxO0Qt)/*TAG5:END:engine_mask_realsmith_3TunKxO0Qt*/ & 0x4) {
        /*bef_stmt:17251*/
result_realsmith_3TunKxO0Qt += Tag6_realsmith_3TunKxO0Qt(/*int:17273:17273:17251:e*/error_code_realsmith_3TunKxO0Qt) * 4;
/*aft_stmt:17251*/
    }
/*aft_stmt:17260*/
    /*bef_stmt:17271*/
return /*TAG7:STA*/((int)(realsmith_aNipKFcvjh((int)(result_realsmith_3TunKxO0Qt)+(-304))+(int)(result_realsmith_3TunKxO0Qt)-(587))+result_realsmith_3TunKxO0Qt)/*TAG7:END:result_realsmith_3TunKxO0Qt*/;
/*aft_stmt:17271*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_XB9nH87CZo(x) (x)
#define Tag2_realsmith_XB9nH87CZo(x) (x)
#define Tag3_realsmith_XB9nH87CZo(x) (x)
#define Tag4_realsmith_XB9nH87CZo(x) (x)
#define Tag5_realsmith_XB9nH87CZo(x) (x)
#define Tag6_realsmith_XB9nH87CZo(x) (x)
#include "stdbool.h"
int realsmith_XB9nH87CZo(unsigned int flags_realsmith_XB9nH87CZo, int nid_realsmith_XB9nH87CZo, unsigned long nodemask_realsmith_XB9nH87CZo) {
    unsigned int SHOW_MEM_FILTER_NODES_realsmith_XB9nH87CZo = 1;
    unsigned long cpuset_current_mems_allowed_realsmith_XB9nH87CZo = 0xFFFFFFFF;
    /*bef_stmt:689*/
/*bef_stmt:689*/
if (!(Tag1_realsmith_XB9nH87CZo(/*unsigned int:769:769:689:e*/flags_realsmith_XB9nH87CZo) & Tag2_realsmith_XB9nH87CZo(/*unsigned int:769:769:689:e*/SHOW_MEM_FILTER_NODES_realsmith_XB9nH87CZo)))
        return 0;
/*aft_stmt:689*/
/*aft_stmt:689*/
    /*bef_stmt:726*/
/*bef_stmt:726*/
if (Tag3_realsmith_XB9nH87CZo(/*unsigned long:769:769:726:e*/nodemask_realsmith_XB9nH87CZo) == 0)
        nodemask_realsmith_XB9nH87CZo = Tag4_realsmith_XB9nH87CZo(/*unsigned long:769:769:726:e*/cpuset_current_mems_allowed_realsmith_XB9nH87CZo);
/*aft_stmt:726*/
/*aft_stmt:726*/
    /*bef_stmt:767*/
/*bef_stmt:767*/
return !(Tag5_realsmith_XB9nH87CZo(/*unsigned long:769:769:767:e*/nodemask_realsmith_XB9nH87CZo) & (1UL << Tag6_realsmith_XB9nH87CZo(/*int:769:769:767:e*/nid_realsmith_XB9nH87CZo)));
/*aft_stmt:767*/
/*aft_stmt:767*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_8M14yp7yEn(x) (x)
#define Tag2_realsmith_8M14yp7yEn(x) (x)
#define Tag3_realsmith_8M14yp7yEn(x) (x)
#define Tag4_realsmith_8M14yp7yEn(x) (x)
#include "stdint.h"
int realsmith_8M14yp7yEn(int config_realsmith_8M14yp7yEn, int client_realsmith_8M14yp7yEn) {
    int TMP007_CONFIG_realsmith_8M14yp7yEn = 0;
    int TMP007_CONFIG_CONV_EN_realsmith_8M14yp7yEn = 1;
    /*bef_stmt:2092*/
/*bef_stmt:2092*/
/*bef_stmt:2092*/
/*bef_stmt:2092*/
return (/*TAG1:STA*/((client_realsmith_8M14yp7yEn) + (g_AB9GOX[0]) - 4)/*TAG1:END:client_realsmith_8M14yp7yEn*/ << 16) | (/*TAG2:STA*/((int)(realsmith_yaFQTRzeFY((int)(TMP007_CONFIG_realsmith_8M14yp7yEn)+(52), (int)(TMP007_CONFIG_realsmith_8M14yp7yEn)+(41), (unsigned int)(TMP007_CONFIG_realsmith_8M14yp7yEn)+(18), (int)(TMP007_CONFIG_realsmith_8M14yp7yEn)+(55))+(int)(TMP007_CONFIG_realsmith_8M14yp7yEn)-(52))+TMP007_CONFIG_realsmith_8M14yp7yEn)/*TAG2:END:TMP007_CONFIG_realsmith_8M14yp7yEn*/ & ~(/*TAG3:STA*/((int)(realsmith_FHVW4XG2u5((int)(config_realsmith_8M14yp7yEn)+(-1), (int)(config_realsmith_8M14yp7yEn)+(61), (unsigned long)(config_realsmith_8M14yp7yEn)+(83), (unsigned long)(config_realsmith_8M14yp7yEn)+(-17), (unsigned long)(config_realsmith_8M14yp7yEn)+(-12), (unsigned long)(config_realsmith_8M14yp7yEn)+(53), (unsigned long)(config_realsmith_8M14yp7yEn)+(34), (unsigned long)(config_realsmith_8M14yp7yEn)+(43))+(int)(config_realsmith_8M14yp7yEn)-(17))+config_realsmith_8M14yp7yEn)/*TAG3:END:config_realsmith_8M14yp7yEn*/ & /*TAG4:STA*/((TMP007_CONFIG_CONV_EN_realsmith_8M14yp7yEn) + (g_031K19) - -65)/*TAG4:END:TMP007_CONFIG_CONV_EN_realsmith_8M14yp7yEn*/));
g_AB9GOX[0] = 4 + (client_realsmith_8M14yp7yEn - (66));
g_031K19 = -65 + (TMP007_CONFIG_CONV_EN_realsmith_8M14yp7yEn - (1));
g_B4USED = 84 + (TMP007_CONFIG_CONV_EN_realsmith_8M14yp7yEn - (1));
/*aft_stmt:2092*/
/*aft_stmt:2092*/
/*aft_stmt:2092*/
/*aft_stmt:2092*/
}



#include "stdlib.h"
struct video_mux_kJX8fP {
    int *format_mbus_realsmith_rNge0db1cc;
};
int realsmith_rNge0db1cc(int *format_mbus_realsmith_rNge0db1cc, int pad_realsmith_rNge0db1cc, int which_realsmith_rNge0db1cc) {
    struct video_mux_kJX8fP vmux_realsmith_rNge0db1cc;
    vmux_realsmith_rNge0db1cc.format_mbus_realsmith_rNge0db1cc = format_mbus_realsmith_rNge0db1cc;
    switch (which_realsmith_rNge0db1cc) {
        case 128:
            return -1;
        case 129:
            return vmux_realsmith_rNge0db1cc.format_mbus_realsmith_rNge0db1cc[pad_realsmith_rNge0db1cc];
        default:
            return -1;
    }
}
int realsmith_proxy_uDKUW6FcUx(int p_0_OlSp9ZKw2J, int p_1_7uYqrsxb6Q, int p_2_M5HGjmZcf1) {
int proxy_qyVQQoikO1[13] = { p_0_OlSp9ZKw2J, p_0_OlSp9ZKw2J, p_0_OlSp9ZKw2J, 54, 20, 39, 70, 12, 33, 67, 68, p_0_OlSp9ZKw2J, p_0_OlSp9ZKw2J };
int proxy_ret_wQPPYvh9mH = realsmith_rNge0db1cc(proxy_qyVQQoikO1, p_1_7uYqrsxb6Q, p_2_M5HGjmZcf1);
return proxy_ret_wQPPYvh9mH;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_982PhpKp6S(x) (x)
#define Tag2_realsmith_982PhpKp6S(x) (x)
#define Tag3_realsmith_982PhpKp6S(x) (x)
#include "stdlib.h"
struct us_data_crh0oh {
    int max_lun_realsmith_982PhpKp6S;
};
int realsmith_982PhpKp6S(int usb_stor_probe1_result_realsmith_982PhpKp6S, int unusual_dev_list_offset_realsmith_982PhpKp6S) {
    struct us_data_crh0oh *us_realsmith_982PhpKp6S = (struct us_data_crh0oh *)(malloc(sizeof(struct us_data_crh0oh)));
    if (us_realsmith_982PhpKp6S == ((void*)0)) {
        return -1;
    }
    us_realsmith_982PhpKp6S->max_lun_realsmith_982PhpKp6S = 0;
    /*bef_stmt:17338*/
if (/*TAG1:STA*/((usb_stor_probe1_result_realsmith_982PhpKp6S) + (g_B4USED) - 84)/*TAG1:END:usb_stor_probe1_result_realsmith_982PhpKp6S*/) {
        (free(us_realsmith_982PhpKp6S));
        /*bef_stmt:17332*/
return /*TAG2:STA*/((usb_stor_probe1_result_realsmith_982PhpKp6S) + (g_B4USED) - 84)/*TAG2:END:usb_stor_probe1_result_realsmith_982PhpKp6S*/;
g_B4USED = 84 + (usb_stor_probe1_result_realsmith_982PhpKp6S - (95));
/*aft_stmt:17332*/
    }
g_B4USED = 84 + (usb_stor_probe1_result_realsmith_982PhpKp6S - (95));
g_B4USED = 84 + (usb_stor_probe1_result_realsmith_982PhpKp6S - (95));
/*aft_stmt:17338*/
    int result_realsmith_982PhpKp6S = 0;
    (free(us_realsmith_982PhpKp6S));
    /*bef_stmt:17401*/
return Tag3_realsmith_982PhpKp6S(/*int:17408:17408:17401:e*/result_realsmith_982PhpKp6S);
/*aft_stmt:17401*/
}



#include "stddef.h"
#include "stdint.h"
struct sha1_state_wd8zmp {
    unsigned int state_realsmith_iG6hl0RLyZ[5];
    unsigned int count_realsmith_iG6hl0RLyZ[2];
    unsigned char buffer_realsmith_iG6hl0RLyZ[64];
};
int realsmith_iG6hl0RLyZ(int state_realsmith_iG6hl0RLyZ[5]) {
    for (long unsigned int i_realsmith_iG6hl0RLyZ = 0; i_realsmith_iG6hl0RLyZ < 5; i_realsmith_iG6hl0RLyZ++) {
        state_realsmith_iG6hl0RLyZ[i_realsmith_iG6hl0RLyZ] = 0;
    }
    return 0;
}
int realsmith_proxy_79ElsLZnAZ(int p_0_ICykAsmega) {
int proxy_i8EC8wH6ld[19] = { 36, 16, p_0_ICykAsmega, 74, p_0_ICykAsmega, 9, p_0_ICykAsmega, p_0_ICykAsmega, 48, p_0_ICykAsmega, 99, 23, p_0_ICykAsmega, 38, 86, 5, 50, 91, 55 };
int proxy_ret_5cTdPgFTy7 = realsmith_iG6hl0RLyZ(proxy_i8EC8wH6ld);
return proxy_ret_5cTdPgFTy7;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_lhAqjGtzZr(x) (x)
#define Tag2_realsmith_lhAqjGtzZr(x) (x)
#define Tag3_realsmith_lhAqjGtzZr(x) (x)
#include "stdint.h"
int realsmith_lhAqjGtzZr(unsigned int rbuf_realsmith_lhAqjGtzZr) {
    const int QLOGIC_IB_RHF_RCVTYPE_MASK_realsmith_lhAqjGtzZr = 0xF;
    const int QLOGIC_IB_RHF_RCVTYPE_SHIFT_realsmith_lhAqjGtzZr = 8;
    /*bef_stmt:2072*/
/*bef_stmt:2072*/
/*bef_stmt:2072*/
return (Tag1_realsmith_lhAqjGtzZr(/*unsigned int:2074:2074:2072:e*/rbuf_realsmith_lhAqjGtzZr) >> Tag2_realsmith_lhAqjGtzZr(/*const int:2074:2074:2072:e*/QLOGIC_IB_RHF_RCVTYPE_SHIFT_realsmith_lhAqjGtzZr)) & Tag3_realsmith_lhAqjGtzZr(/*const int:2074:2074:2072:e*/QLOGIC_IB_RHF_RCVTYPE_MASK_realsmith_lhAqjGtzZr);
/*aft_stmt:2072*/
/*aft_stmt:2072*/
/*aft_stmt:2072*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_S3zcgMwsJY(x) (x)
#define Tag2_realsmith_S3zcgMwsJY(x) (x)
#define Tag3_realsmith_S3zcgMwsJY(x) (x)
#define Tag4_realsmith_S3zcgMwsJY(x) (x)
#define Tag5_realsmith_S3zcgMwsJY(x) (x)
#include "stdbool.h"
struct w5300_priv_Vu7gc7 {
    int link_irq_realsmith_S3zcgMwsJY;
    int link_gpio_realsmith_S3zcgMwsJY;
    int irq_realsmith_S3zcgMwsJY;
};
int realsmith_S3zcgMwsJY(int link_irq_realsmith_S3zcgMwsJY, int link_gpio_realsmith_S3zcgMwsJY, int irq_realsmith_S3zcgMwsJY) {
    struct w5300_priv_Vu7gc7 priv_realsmith_S3zcgMwsJY;
    /*bef_stmt:711*/
priv_realsmith_S3zcgMwsJY.link_irq_realsmith_S3zcgMwsJY = /*TAG1:STA*/((link_irq_realsmith_S3zcgMwsJY) + (g_RWTYM9) - -69)/*TAG1:END:link_irq_realsmith_S3zcgMwsJY*/;
g_RWTYM9 = -69 + (link_irq_realsmith_S3zcgMwsJY - (59));
/*aft_stmt:711*/
    /*bef_stmt:745*/
priv_realsmith_S3zcgMwsJY.link_gpio_realsmith_S3zcgMwsJY = Tag2_realsmith_S3zcgMwsJY(/*int:835:835:745:e*/link_gpio_realsmith_S3zcgMwsJY);
/*aft_stmt:745*/
    /*bef_stmt:766*/
priv_realsmith_S3zcgMwsJY.irq_realsmith_S3zcgMwsJY = Tag3_realsmith_S3zcgMwsJY(/*int:835:835:766:e*/irq_realsmith_S3zcgMwsJY);
/*aft_stmt:766*/
    /*bef_stmt:813*/
_Bool gpio_valid_realsmith_S3zcgMwsJY = (/*TAG4:STA*/((priv_realsmith_S3zcgMwsJY.link_gpio_realsmith_S3zcgMwsJY) + (g_RWTYM9) - -69)/*TAG4:END:priv_realsmith_S3zcgMwsJY.link_gpio_realsmith_S3zcgMwsJY*/ >= 0);
g_RWTYM9 = -69 + (priv_realsmith_S3zcgMwsJY.link_gpio_realsmith_S3zcgMwsJY - (95));
/*aft_stmt:813*/
    /*bef_stmt:825*/
if (/*TAG5:STA*/((gpio_valid_realsmith_S3zcgMwsJY) + (g_R4L6DT) - 124)/*TAG5:END:gpio_valid_realsmith_S3zcgMwsJY*/) {
    }
g_R4L6DT = 124 + (gpio_valid_realsmith_S3zcgMwsJY - (1));
/*aft_stmt:825*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_dttm6DVIwy(x) (x)
#define Tag2_realsmith_dttm6DVIwy(x) (x)
#define Tag3_realsmith_dttm6DVIwy(x) (x)
#define Tag4_realsmith_dttm6DVIwy(x) (x)
#define Tag5_realsmith_dttm6DVIwy(x) (x)
#define Tag6_realsmith_dttm6DVIwy(x) (x)
#define Tag7_realsmith_dttm6DVIwy(x) (x)
#define Tag8_realsmith_dttm6DVIwy(x) (x)
#define Tag9_realsmith_dttm6DVIwy(x) (x)
#define Tag10_realsmith_dttm6DVIwy(x) (x)
#define Tag11_realsmith_dttm6DVIwy(x) (x)
#include "stdint.h"
#include "stdlib.h"
int realsmith_dttm6DVIwy(int rtt_us_realsmith_dttm6DVIwy, int baseRTT_realsmith_dttm6DVIwy, int minRTT_realsmith_dttm6DVIwy, int cntRTT_realsmith_dttm6DVIwy) {
    unsigned int vrtt_realsmith_dttm6DVIwy;
    /*bef_stmt:17571*/
if (/*TAG1:STA*/((int)(realsmith_peU2qW2inI((int)(rtt_us_realsmith_dttm6DVIwy)+(29), (int)(rtt_us_realsmith_dttm6DVIwy)+(3), (int)(rtt_us_realsmith_dttm6DVIwy)+(36))+(int)(rtt_us_realsmith_dttm6DVIwy)-(44))+rtt_us_realsmith_dttm6DVIwy)/*TAG1:END:rtt_us_realsmith_dttm6DVIwy*/ < 0)
        return -1;
/*aft_stmt:17571*/
    /*bef_stmt:17597*/
vrtt_realsmith_dttm6DVIwy = /*TAG2:STA*/((int)(realsmith_proxy_wMAcuAbnJv((int)(rtt_us_realsmith_dttm6DVIwy)+(-19), (unsigned int)(rtt_us_realsmith_dttm6DVIwy)+(-52), (int)(rtt_us_realsmith_dttm6DVIwy)+(-29), (unsigned int)(rtt_us_realsmith_dttm6DVIwy)+(28), (unsigned int)(rtt_us_realsmith_dttm6DVIwy)+(26))+(int)(rtt_us_realsmith_dttm6DVIwy)-(43))+rtt_us_realsmith_dttm6DVIwy)/*TAG2:END:rtt_us_realsmith_dttm6DVIwy*/ + 1;
/*aft_stmt:17597*/
    /*bef_stmt:17640*/
/*bef_stmt:17640*/
/*bef_stmt:17640*/
if (/*TAG3:STA*/((unsigned int)(realsmith_proxy_CO209VSxtC((int)(vrtt_realsmith_dttm6DVIwy)+(-7), (int)(vrtt_realsmith_dttm6DVIwy)+(11), (int)(vrtt_realsmith_dttm6DVIwy)+(55), (unsigned int)(vrtt_realsmith_dttm6DVIwy)+(-52))+(int)(vrtt_realsmith_dttm6DVIwy)-(46))+vrtt_realsmith_dttm6DVIwy)/*TAG3:END:vrtt_realsmith_dttm6DVIwy*/ < /*TAG4:STA*/((baseRTT_realsmith_dttm6DVIwy) + (g_29FPQX) - -16)/*TAG4:END:baseRTT_realsmith_dttm6DVIwy*/)
        baseRTT_realsmith_dttm6DVIwy = Tag5_realsmith_dttm6DVIwy(/*unsigned int:17749:17749:17640:e*/vrtt_realsmith_dttm6DVIwy);
g_29FPQX = -16 + (rtt_us_realsmith_dttm6DVIwy - (44)) + (vrtt_realsmith_dttm6DVIwy - (45));
/*aft_stmt:17640*/
/*aft_stmt:17640*/
/*aft_stmt:17640*/
    /*bef_stmt:17683*/
/*bef_stmt:17683*/
/*bef_stmt:17683*/
if (/*TAG6:STA*/((int)(realsmith_zpmh8uYFYq((int)(vrtt_realsmith_dttm6DVIwy)+(2), (int)(rtt_us_realsmith_dttm6DVIwy)+(10), (int)(baseRTT_realsmith_dttm6DVIwy)+(-21), (int)(baseRTT_realsmith_dttm6DVIwy)+(10))+(int)(vrtt_realsmith_dttm6DVIwy)+(int)(baseRTT_realsmith_dttm6DVIwy)+(int)(rtt_us_realsmith_dttm6DVIwy)-(188))+minRTT_realsmith_dttm6DVIwy)/*TAG6:END:minRTT_realsmith_dttm6DVIwy*/ > /*TAG7:STA*/((unsigned int)(realsmith_pS8mMGLQVn((int)(rtt_us_realsmith_dttm6DVIwy)+(-15))+(int)(vrtt_realsmith_dttm6DVIwy)+(int)(baseRTT_realsmith_dttm6DVIwy)+(int)(rtt_us_realsmith_dttm6DVIwy)-(112))+vrtt_realsmith_dttm6DVIwy)/*TAG7:END:vrtt_realsmith_dttm6DVIwy*/)
        minRTT_realsmith_dttm6DVIwy = /*TAG8:STA*/((unsigned int)(realsmith_p58WDWK3Dv((unsigned long)(vrtt_realsmith_dttm6DVIwy)+(18), (long)(rtt_us_realsmith_dttm6DVIwy)+(-6), (int)(rtt_us_realsmith_dttm6DVIwy)+(50), (int)(rtt_us_realsmith_dttm6DVIwy)+(-17), (int)(rtt_us_realsmith_dttm6DVIwy)+(4))+(int)(vrtt_realsmith_dttm6DVIwy)+(int)(rtt_us_realsmith_dttm6DVIwy)+(int)(baseRTT_realsmith_dttm6DVIwy)-(197))+vrtt_realsmith_dttm6DVIwy)/*TAG8:END:vrtt_realsmith_dttm6DVIwy*/;
/*aft_stmt:17683*/
/*aft_stmt:17683*/
/*aft_stmt:17683*/
    cntRTT_realsmith_dttm6DVIwy++;
    /*bef_stmt:17747*/
/*bef_stmt:17747*/
/*bef_stmt:17747*/
return (/*TAG9:STA*/((int)(realsmith_4AF59nXQgx((int)(baseRTT_realsmith_dttm6DVIwy)+(-38), (int)(baseRTT_realsmith_dttm6DVIwy)+(-29), (int)(baseRTT_realsmith_dttm6DVIwy)+(51))+(int)(baseRTT_realsmith_dttm6DVIwy)-(46))+baseRTT_realsmith_dttm6DVIwy)/*TAG9:END:baseRTT_realsmith_dttm6DVIwy*/ << 16) | (/*TAG10:STA*/((int)(realsmith_ui2hAcmSHk((unsigned int)(minRTT_realsmith_dttm6DVIwy)+(53))+(int)(minRTT_realsmith_dttm6DVIwy)-(143))+minRTT_realsmith_dttm6DVIwy)/*TAG10:END:minRTT_realsmith_dttm6DVIwy*/ << 8) | /*TAG11:STA*/((int)(realsmith_qD06Jz8Yyq((unsigned long)(cntRTT_realsmith_dttm6DVIwy)+(-43), (unsigned int)(cntRTT_realsmith_dttm6DVIwy)+(-21), (unsigned int)(cntRTT_realsmith_dttm6DVIwy)+(-65), (unsigned int)(cntRTT_realsmith_dttm6DVIwy)+(-68), (unsigned long)(cntRTT_realsmith_dttm6DVIwy)+(-88), (unsigned long)(cntRTT_realsmith_dttm6DVIwy)+(-87))+(unsigned long)(cntRTT_realsmith_dttm6DVIwy)-(141))+cntRTT_realsmith_dttm6DVIwy)/*TAG11:END:cntRTT_realsmith_dttm6DVIwy*/;
/*aft_stmt:17747*/
/*aft_stmt:17747*/
/*aft_stmt:17747*/
}



#include "stdlib.h"
int realsmith_wJMepAQ11n(int smpte_switch_realsmith_wJMepAQ11n, int val_realsmith_wJMepAQ11n, int *time_realsmith_wJMepAQ11n, int fps_realsmith_wJMepAQ11n) {
    int changed_realsmith_wJMepAQ11n = 0;
    val_realsmith_wJMepAQ11n = !!val_realsmith_wJMepAQ11n;
    if (smpte_switch_realsmith_wJMepAQ11n == val_realsmith_wJMepAQ11n)
        return changed_realsmith_wJMepAQ11n;
    changed_realsmith_wJMepAQ11n = 1;
    smpte_switch_realsmith_wJMepAQ11n = val_realsmith_wJMepAQ11n;
    if (smpte_switch_realsmith_wJMepAQ11n) {
    } else {
    }
    return changed_realsmith_wJMepAQ11n;
}
int realsmith_proxy_hS3p4netiZ(int p_0_WaEdOzQNxF, int p_1_RVY470NJCk, int p_2_pk21oC4AJy, int p_3_u3YFs0XMeY) {
int proxy_c779UPyMuu[14] = { 4, 93, p_2_pk21oC4AJy, p_2_pk21oC4AJy, p_2_pk21oC4AJy, p_2_pk21oC4AJy, p_2_pk21oC4AJy, p_2_pk21oC4AJy, p_2_pk21oC4AJy, p_2_pk21oC4AJy, 16, p_2_pk21oC4AJy, p_2_pk21oC4AJy, p_2_pk21oC4AJy };
int proxy_ret_QuymHzvO9x = realsmith_wJMepAQ11n(p_0_WaEdOzQNxF, p_1_RVY470NJCk, proxy_c779UPyMuu, p_3_u3YFs0XMeY);
return proxy_ret_QuymHzvO9x;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_lsStlIV4U0(x) (x)
#define Tag2_realsmith_proxy_lsStlIV4U0(x) (x)
#define Tag3_realsmith_proxy_lsStlIV4U0(x) (x)
#define Tag4_realsmith_proxy_lsStlIV4U0(x) (x)
#define Tag5_realsmith_proxy_lsStlIV4U0(x) (x)
#define Tag6_realsmith_proxy_lsStlIV4U0(x) (x)
#define Tag7_realsmith_proxy_lsStlIV4U0(x) (x)
#define Tag8_realsmith_proxy_lsStlIV4U0(x) (x)
#define Tag9_realsmith_proxy_lsStlIV4U0(x) (x)
#define Tag10_realsmith_proxy_lsStlIV4U0(x) (x)
#define Tag11_realsmith_proxy_lsStlIV4U0(x) (x)
#define Tag12_realsmith_proxy_lsStlIV4U0(x) (x)
#define Tag13_realsmith_proxy_lsStlIV4U0(x) (x)
#define Tag14_realsmith_proxy_lsStlIV4U0(x) (x)
#define Tag15_realsmith_proxy_lsStlIV4U0(x) (x)
#include "stdlib.h"
int realsmith_fpAT5l1oM5(unsigned int min_realsmith_fpAT5l1oM5, int openmin_realsmith_fpAT5l1oM5, unsigned int *current_min_realsmith_fpAT5l1oM5, int *current_openmin_realsmith_fpAT5l1oM5, int *integer_realsmith_fpAT5l1oM5) {
    int changed_realsmith_fpAT5l1oM5 = 0;
    /*bef_stmt:17360*/
/*bef_stmt:17360*/
/*bef_stmt:17360*/
/*bef_stmt:17360*/
/*bef_stmt:17360*/
/*bef_stmt:17360*/
if (Tag1_realsmith_proxy_lsStlIV4U0(/*unsigned int:17534:17534:17360:e*/*current_min_realsmith_fpAT5l1oM5) < /*TAG2:STA*/((min_realsmith_fpAT5l1oM5) + (g_R4L6DT) - 124)/*TAG2:END:min_realsmith_fpAT5l1oM5*/) {
        /*bef_stmt:17221*/
*current_min_realsmith_fpAT5l1oM5 = Tag3_realsmith_proxy_lsStlIV4U0(/*unsigned int:17534:17534:17221:e*/min_realsmith_fpAT5l1oM5);
/*aft_stmt:17221*/
        /*bef_stmt:17242*/
*current_openmin_realsmith_fpAT5l1oM5 = Tag4_realsmith_proxy_lsStlIV4U0(/*int:17534:17534:17242:e*/openmin_realsmith_fpAT5l1oM5);
/*aft_stmt:17242*/
        changed_realsmith_fpAT5l1oM5 = 1;
    } else if (/*TAG5:STA*/((unsigned int)(realsmith_jln3Uv5p6p((int)(*current_min_realsmith_fpAT5l1oM5)+(83))+(int)(*current_min_realsmith_fpAT5l1oM5)-(-32))+*current_min_realsmith_fpAT5l1oM5)/*TAG5:END:*current_min_realsmith_fpAT5l1oM5*/ == Tag6_realsmith_proxy_lsStlIV4U0(/*unsigned int:17534:17534:17360:e*/min_realsmith_fpAT5l1oM5) && !(/*TAG7:STA*/((*current_openmin_realsmith_fpAT5l1oM5) + (g_031K19) - -65)/*TAG7:END:*current_openmin_realsmith_fpAT5l1oM5*/) && /*TAG8:STA*/((int)(realsmith_proxy_UJZWJt9l6T((int)(openmin_realsmith_fpAT5l1oM5)+(-40), (unsigned long)(openmin_realsmith_fpAT5l1oM5)+(-116))+(int)(openmin_realsmith_fpAT5l1oM5)-(86))+openmin_realsmith_fpAT5l1oM5)/*TAG8:END:openmin_realsmith_fpAT5l1oM5*/) {
        *current_openmin_realsmith_fpAT5l1oM5 = 1;
        changed_realsmith_fpAT5l1oM5 = 1;
    }
g_R4L6DT = 124 + (min_realsmith_fpAT5l1oM5 - (97));
g_031K19 = -65 + (*current_openmin_realsmith_fpAT5l1oM5 - (-35));
/*aft_stmt:17360*/
/*aft_stmt:17360*/
/*aft_stmt:17360*/
/*aft_stmt:17360*/
/*aft_stmt:17360*/
/*aft_stmt:17360*/
    /*bef_stmt:17440*/
if (/*TAG9:STA*/((int)(realsmith_3hIjagJs0k((int)(min_realsmith_fpAT5l1oM5)+(-83))+(int)(*integer_realsmith_fpAT5l1oM5)+(int)(min_realsmith_fpAT5l1oM5)+(int)(openmin_realsmith_fpAT5l1oM5)-(175))+*integer_realsmith_fpAT5l1oM5)/*TAG9:END:*integer_realsmith_fpAT5l1oM5*/) {
        /*bef_stmt:17433*/
if (/*TAG10:STA*/((int)(realsmith_proxy_cAFrAnXi7z((int)(*integer_realsmith_fpAT5l1oM5)+(100), (unsigned int)(*integer_realsmith_fpAT5l1oM5)+(-4294967211), (unsigned int)(*integer_realsmith_fpAT5l1oM5)+(-4294967224))+(int)(min_realsmith_fpAT5l1oM5)+(int)(openmin_realsmith_fpAT5l1oM5)+(int)(*integer_realsmith_fpAT5l1oM5)-(175))+*current_openmin_realsmith_fpAT5l1oM5)/*TAG10:END:*current_openmin_realsmith_fpAT5l1oM5*/) {
            (*current_min_realsmith_fpAT5l1oM5)++;
            *current_openmin_realsmith_fpAT5l1oM5 = 0;
        }
/*aft_stmt:17433*/
    }
/*aft_stmt:17440*/
    /*bef_stmt:17521*/
if (/*TAG11:STA*/((unsigned int)(realsmith_eZQaOA0rDI((int)(*current_min_realsmith_fpAT5l1oM5)+(85), (int)(*current_min_realsmith_fpAT5l1oM5)+(41), (int)(*current_min_realsmith_fpAT5l1oM5)+(129), (int)(*current_min_realsmith_fpAT5l1oM5)+(120), (int)(*current_min_realsmith_fpAT5l1oM5)+(40), (int)(*current_min_realsmith_fpAT5l1oM5)+(119), (int)(*current_min_realsmith_fpAT5l1oM5)+(118), (int)(*current_min_realsmith_fpAT5l1oM5)+(84))+(int)(*current_min_realsmith_fpAT5l1oM5)-(-33))+*current_min_realsmith_fpAT5l1oM5)/*TAG11:END:*current_min_realsmith_fpAT5l1oM5*/ > 100) {
        *current_min_realsmith_fpAT5l1oM5 = 0;
        *current_openmin_realsmith_fpAT5l1oM5 = 0;
        return -1;
    }
/*aft_stmt:17521*/
    /*bef_stmt:17532*/
return Tag12_realsmith_proxy_lsStlIV4U0(/*int:17534:17534:17532:e*/changed_realsmith_fpAT5l1oM5);
/*aft_stmt:17532*/
}
int realsmith_proxy_lsStlIV4U0(unsigned int p_0_55Aawh1DIR, int p_1_UOXnEPksbt, unsigned int p_2_b30zipUT3R, int p_3_O5GrECF5gn, int p_4_puAanV5m9r) {
/*bef_stmt:17751*/
/*bef_stmt:17751*/
int proxy_ret_hwU8L134rB = realsmith_fpAT5l1oM5(/*TAG13:STA*/((p_0_55Aawh1DIR) + (g_MW3YJP[3]) - 21)/*TAG13:END:p_0_55Aawh1DIR*/, /*TAG14:STA*/((p_1_UOXnEPksbt) + (g_AB9GOX[0]) - 4)/*TAG14:END:p_1_UOXnEPksbt*/, &(p_2_b30zipUT3R), &(p_3_O5GrECF5gn), &(p_4_puAanV5m9r));
g_MW3YJP[4] = -86 + (p_0_55Aawh1DIR - (97));
g_AB9GOX[0] = 4 + (p_1_UOXnEPksbt - (85));
g_MW3YJP[3] = 21 + (p_0_55Aawh1DIR - (97));
/*aft_stmt:17751*/
/*aft_stmt:17751*/
/*bef_stmt:17761*/
return /*TAG15:STA*/((int)(realsmith_Zh7tGRaeqJ((int)(proxy_ret_hwU8L134rB)+(2), (int)(proxy_ret_hwU8L134rB)+(95))+(int)(proxy_ret_hwU8L134rB)-(-1))+proxy_ret_hwU8L134rB)/*TAG15:END:proxy_ret_hwU8L134rB*/;
/*aft_stmt:17761*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag2_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag3_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag4_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag5_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag6_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag7_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag8_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag9_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag10_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag11_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag12_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag13_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag14_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag15_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag16_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag17_realsmith_proxy_mrmj0K4zHh(x) (x)
#define Tag18_realsmith_proxy_mrmj0K4zHh(x) (x)
#include "stdint.h"
#include "stdlib.h"
int realsmith_SUptycqvt9(unsigned int sgpio_ctrl_realsmith_SUptycqvt9, unsigned int state_realsmith_SUptycqvt9, unsigned int port_no_realsmith_SUptycqvt9, unsigned int *led_state_realsmith_SUptycqvt9) {
    int pmp_realsmith_SUptycqvt9;
    unsigned int val_realsmith_SUptycqvt9;
    /*bef_stmt:17603*/
pmp_realsmith_SUptycqvt9 = (Tag1_realsmith_proxy_mrmj0K4zHh(/*unsigned int:18024:18024:17603:e*/state_realsmith_SUptycqvt9) & 0xFF00) >> 8;
/*aft_stmt:17603*/
    /*bef_stmt:17631*/
if (/*TAG2:STA*/((pmp_realsmith_SUptycqvt9) + (g_IU97RO[2]) - -114)/*TAG2:END:pmp_realsmith_SUptycqvt9*/ >= 32)
        return -1;
g_IU97RO[2] = -114 + (pmp_realsmith_SUptycqvt9 - (0));
/*aft_stmt:17631*/
    /*bef_stmt:17646*/
val_realsmith_SUptycqvt9 = /*TAG3:STA*/((unsigned int)(realsmith_S3zcgMwsJY((int)(sgpio_ctrl_realsmith_SUptycqvt9)+(58), (int)(sgpio_ctrl_realsmith_SUptycqvt9)+(94), (int)(sgpio_ctrl_realsmith_SUptycqvt9)+(77))+(int)(sgpio_ctrl_realsmith_SUptycqvt9)-(1))+sgpio_ctrl_realsmith_SUptycqvt9)/*TAG3:END:sgpio_ctrl_realsmith_SUptycqvt9*/;
/*aft_stmt:17646*/
    /*bef_stmt:17739*/
/*bef_stmt:17739*/
/*bef_stmt:17739*/
if (/*TAG4:STA*/((state_realsmith_SUptycqvt9) + (g_BNNLY0[2]) - 85)/*TAG4:END:state_realsmith_SUptycqvt9*/ & 0x1)
        val_realsmith_SUptycqvt9 |= 1 << (/*TAG5:STA*/((unsigned int)(realsmith_3TunKxO0Qt((int)(port_no_realsmith_SUptycqvt9)+(59), (int)(port_no_realsmith_SUptycqvt9)+(42))+(int)(port_no_realsmith_SUptycqvt9)-(354))+port_no_realsmith_SUptycqvt9)/*TAG5:END:port_no_realsmith_SUptycqvt9*/);
    else
        val_realsmith_SUptycqvt9 &= ~(1 << (/*TAG6:STA*/((port_no_realsmith_SUptycqvt9) + (g_B4USED) - 84)/*TAG6:END:port_no_realsmith_SUptycqvt9*/));
g_BNNLY0[2] = 85 + (state_realsmith_SUptycqvt9 - (28));
g_B4USED = 84 + (port_no_realsmith_SUptycqvt9 - (24));
/*aft_stmt:17739*/
/*aft_stmt:17739*/
/*aft_stmt:17739*/
    /*bef_stmt:17856*/
/*bef_stmt:17856*/
/*bef_stmt:17856*/
if (/*TAG7:STA*/((unsigned int)(realsmith_dttm6DVIwy((int)(state_realsmith_SUptycqvt9)+(16), (int)(state_realsmith_SUptycqvt9)+(46), (int)(state_realsmith_SUptycqvt9)+(47), (int)(state_realsmith_SUptycqvt9)+(63))+(int)(state_realsmith_SUptycqvt9)-(2960760))+state_realsmith_SUptycqvt9)/*TAG7:END:state_realsmith_SUptycqvt9*/ & 0x2)
        val_realsmith_SUptycqvt9 |= 1 << (/*TAG8:STA*/((unsigned int)(realsmith_8M14yp7yEn((int)(port_no_realsmith_SUptycqvt9)+(-7), (int)(port_no_realsmith_SUptycqvt9)+(42))+(int)(port_no_realsmith_SUptycqvt9)-(4325400))+port_no_realsmith_SUptycqvt9)/*TAG8:END:port_no_realsmith_SUptycqvt9*/ + 1);
    else
        val_realsmith_SUptycqvt9 &= ~(1 << (/*TAG9:STA*/((unsigned int)(realsmith_proxy_79ElsLZnAZ((int)(port_no_realsmith_SUptycqvt9)+(-40))+(int)(port_no_realsmith_SUptycqvt9)-(24))+port_no_realsmith_SUptycqvt9)/*TAG9:END:port_no_realsmith_SUptycqvt9*/ + 1));
/*aft_stmt:17856*/
/*aft_stmt:17856*/
/*aft_stmt:17856*/
    /*bef_stmt:17976*/
/*bef_stmt:17976*/
/*bef_stmt:17976*/
if (/*TAG10:STA*/((unsigned int)(realsmith_proxy_uDKUW6FcUx((int)(state_realsmith_SUptycqvt9)+(14), (int)(state_realsmith_SUptycqvt9)+(-22), (int)(state_realsmith_SUptycqvt9)+(49))+(int)(state_realsmith_SUptycqvt9)-(27))+state_realsmith_SUptycqvt9)/*TAG10:END:state_realsmith_SUptycqvt9*/ & 0x4)
        val_realsmith_SUptycqvt9 |= 1 << (/*TAG11:STA*/((unsigned int)(realsmith_ARAygoHdy4((int)(port_no_realsmith_SUptycqvt9)+(-9))+(int)(port_no_realsmith_SUptycqvt9)-(24))+port_no_realsmith_SUptycqvt9)/*TAG11:END:port_no_realsmith_SUptycqvt9*/ + 2);
    else
        val_realsmith_SUptycqvt9 &= ~(1 << (/*TAG12:STA*/((unsigned int)(realsmith_982PhpKp6S((int)(port_no_realsmith_SUptycqvt9)+(71), (int)(port_no_realsmith_SUptycqvt9)+(9))+(int)(port_no_realsmith_SUptycqvt9)-(119))+port_no_realsmith_SUptycqvt9)/*TAG12:END:port_no_realsmith_SUptycqvt9*/ + 2));
g_29FPQX = -16 + (port_no_realsmith_SUptycqvt9 - (24));
/*aft_stmt:17976*/
/*aft_stmt:17976*/
/*aft_stmt:17976*/
    /*bef_stmt:17993*/
sgpio_ctrl_realsmith_SUptycqvt9 = /*TAG13:STA*/((unsigned int)(realsmith_XB9nH87CZo((unsigned int)(pmp_realsmith_SUptycqvt9)+(95), (int)(val_realsmith_SUptycqvt9)+(-67108839), (unsigned long)(pmp_realsmith_SUptycqvt9)+(19))+(int)(val_realsmith_SUptycqvt9)+(int)(port_no_realsmith_SUptycqvt9)+(int)(state_realsmith_SUptycqvt9)+(int)(pmp_realsmith_SUptycqvt9)-(67108918))+val_realsmith_SUptycqvt9)/*TAG13:END:val_realsmith_SUptycqvt9*/;
/*aft_stmt:17993*/
    /*bef_stmt:18014*/
*led_state_realsmith_SUptycqvt9 = /*TAG14:STA*/((state_realsmith_SUptycqvt9) + (g_M65HXT) - 43)/*TAG14:END:state_realsmith_SUptycqvt9*/;
g_M65HXT = 43 + (state_realsmith_SUptycqvt9 - (28));
/*aft_stmt:18014*/
    return 0;
}
int realsmith_proxy_mrmj0K4zHh(unsigned int p_0_uBBGsfLXsi, unsigned int p_1_30yR1GMsyr, unsigned int p_2_kBcokTnO0a, unsigned int p_3_hm9kUPBKrM) {
/*bef_stmt:18213*/
/*bef_stmt:18213*/
/*bef_stmt:18213*/
int proxy_ret_TIRrcDSBkZ = realsmith_SUptycqvt9(/*TAG15:STA*/((p_0_uBBGsfLXsi) + (g_MW3YJP[5]) - 46)/*TAG15:END:p_0_uBBGsfLXsi*/, Tag16_realsmith_proxy_mrmj0K4zHh(/*unsigned int:18225:18225:18213:e*/p_1_30yR1GMsyr), /*TAG17:STA*/((unsigned int)(realsmith_1rOdRqRYr6((int)(p_2_kBcokTnO0a)+(-13), (int)(p_2_kBcokTnO0a)+(1), (int)(p_2_kBcokTnO0a)+(36))+(int)(p_2_kBcokTnO0a)-(33))+p_2_kBcokTnO0a)/*TAG17:END:p_2_kBcokTnO0a*/, &(p_3_hm9kUPBKrM));
g_MW3YJP[5] = 46 + (p_0_uBBGsfLXsi - (1));
g_RWTYM9 = -69 + (p_0_uBBGsfLXsi - (1));
g_MW3YJP[4] = -86 + (p_1_30yR1GMsyr - (28));
/*aft_stmt:18213*/
/*aft_stmt:18213*/
/*aft_stmt:18213*/
/*bef_stmt:18223*/
return /*TAG18:STA*/((int)(realsmith_lhAqjGtzZr((unsigned int)(proxy_ret_TIRrcDSBkZ)+(8))+(int)(proxy_ret_TIRrcDSBkZ)-(0))+proxy_ret_TIRrcDSBkZ)/*TAG18:END:proxy_ret_TIRrcDSBkZ*/;
/*aft_stmt:18223*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_h6c6rl9ZuP(x) (x)
#define Tag2_realsmith_h6c6rl9ZuP(x) (x)
#define Tag3_realsmith_h6c6rl9ZuP(x) (x)
#include "stdlib.h"
int realsmith_h6c6rl9ZuP(unsigned long regmap_realsmith_h6c6rl9ZuP, unsigned int nr_realsmith_h6c6rl9ZuP, unsigned int index_realsmith_h6c6rl9ZuP) {
    unsigned int val_realsmith_h6c6rl9ZuP = 0;
    /*bef_stmt:17156*/
val_realsmith_h6c6rl9ZuP = Tag1_realsmith_h6c6rl9ZuP(/*unsigned int:17190:17190:17156:e*/nr_realsmith_h6c6rl9ZuP);
g_031K19 = -65 + (nr_realsmith_h6c6rl9ZuP - (16));
/*aft_stmt:17156*/
    /*bef_stmt:17188*/
/*bef_stmt:17188*/
return !!(/*TAG2:STA*/((unsigned int)(realsmith_TFu3SGb5A5((int)(val_realsmith_h6c6rl9ZuP)+(-16), (int)(val_realsmith_h6c6rl9ZuP)+(-12), (int)(val_realsmith_h6c6rl9ZuP)+(-13))+(int)(val_realsmith_h6c6rl9ZuP)-(4188))+val_realsmith_h6c6rl9ZuP)/*TAG2:END:val_realsmith_h6c6rl9ZuP*/ & /*TAG3:STA*/((unsigned int)(realsmith_VySxaUYb3o((unsigned int)(index_realsmith_h6c6rl9ZuP)+(-26), (unsigned int)(index_realsmith_h6c6rl9ZuP)+(0))+(unsigned int)(index_realsmith_h6c6rl9ZuP)-(6231))+index_realsmith_h6c6rl9ZuP)/*TAG3:END:index_realsmith_h6c6rl9ZuP*/);
/*aft_stmt:17188*/
/*aft_stmt:17188*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_EIkhbRjY6h(x) (x)
#define Tag2_realsmith_EIkhbRjY6h(x) (x)
#include "stdlib.h"
unsigned long realsmith_EIkhbRjY6h(unsigned long e_realsmith_EIkhbRjY6h) {
    const unsigned long BTRFS_FILE_EXTENT_INLINE_DATA_START_realsmith_EIkhbRjY6h = 0x1000;
    /*bef_stmt:17129*/
/*bef_stmt:17129*/
return /*TAG1:STA*/((unsigned long)(realsmith_deZT6yJuuc((int)(e_realsmith_EIkhbRjY6h)+(-4), (int)(e_realsmith_EIkhbRjY6h)+(14), (int)(e_realsmith_EIkhbRjY6h)+(15))+(int)(e_realsmith_EIkhbRjY6h)-(18))+e_realsmith_EIkhbRjY6h)/*TAG1:END:e_realsmith_EIkhbRjY6h*/ + /*TAG2:STA*/((unsigned long)(realsmith_7XnasITtFK((int)(BTRFS_FILE_EXTENT_INLINE_DATA_START_realsmith_EIkhbRjY6h)+(-4073))+(int)(BTRFS_FILE_EXTENT_INLINE_DATA_START_realsmith_EIkhbRjY6h)-(4096))+BTRFS_FILE_EXTENT_INLINE_DATA_START_realsmith_EIkhbRjY6h)/*TAG2:END:BTRFS_FILE_EXTENT_INLINE_DATA_START_realsmith_EIkhbRjY6h*/;
g_29FPQX = -16 + (BTRFS_FILE_EXTENT_INLINE_DATA_START_realsmith_EIkhbRjY6h - (4096));
/*aft_stmt:17129*/
/*aft_stmt:17129*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_sB8hmRytQ2(x) (x)
#include "stdint.h"
int realsmith_sB8hmRytQ2(int val_realsmith_sB8hmRytQ2) {
    /*bef_stmt:2001*/
return ((Tag1_realsmith_sB8hmRytQ2(/*int:2003:2003:2001:e*/val_realsmith_sB8hmRytQ2)) << 2) & 0xFFFFFFFF;
/*aft_stmt:2001*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_zshlwVOOgA(x) (x)
#define Tag2_realsmith_zshlwVOOgA(x) (x)
#define Tag3_realsmith_zshlwVOOgA(x) (x)
#define Tag4_realsmith_zshlwVOOgA(x) (x)
#define Tag5_realsmith_zshlwVOOgA(x) (x)
#include "stdlib.h"
struct domain_device_Iz2jSf {
    int dummy_realsmith_zshlwVOOgA; // Placeholder for the original struct fields
};
struct ata_port_Iz2jSf {
    int dummy_realsmith_zshlwVOOgA; // Placeholder for the original struct fields
};
struct sas_ha_struct_Iz2jSf {
    int shost_realsmith_zshlwVOOgA; // Placeholder for the original struct fields
};
int realsmith_zshlwVOOgA(int dev_dummy_realsmith_zshlwVOOgA, int ap_dummy_realsmith_zshlwVOOgA, int ha_shost_realsmith_zshlwVOOgA) {
    struct domain_device_Iz2jSf dev_realsmith_zshlwVOOgA;
    struct ata_port_Iz2jSf ap_realsmith_zshlwVOOgA;
    struct sas_ha_struct_Iz2jSf ha_realsmith_zshlwVOOgA;
    /*bef_stmt:17317*/
dev_realsmith_zshlwVOOgA.dummy_realsmith_zshlwVOOgA = /*TAG1:STA*/((int)(realsmith_V3DUkljPWG((int)(dev_dummy_realsmith_zshlwVOOgA)+(-52), (int)(dev_dummy_realsmith_zshlwVOOgA)+(-53))+(int)(dev_dummy_realsmith_zshlwVOOgA)-(89))+dev_dummy_realsmith_zshlwVOOgA)/*TAG1:END:dev_dummy_realsmith_zshlwVOOgA*/;
/*aft_stmt:17317*/
    /*bef_stmt:17349*/
ap_realsmith_zshlwVOOgA.dummy_realsmith_zshlwVOOgA = /*TAG2:STA*/((int)(realsmith_kN6Y9hVsKV((int)(ap_dummy_realsmith_zshlwVOOgA)+(0), (int)(ap_dummy_realsmith_zshlwVOOgA)+(62))+(int)(ap_dummy_realsmith_zshlwVOOgA)-(71))+ap_dummy_realsmith_zshlwVOOgA)/*TAG2:END:ap_dummy_realsmith_zshlwVOOgA*/;
/*aft_stmt:17349*/
    /*bef_stmt:17381*/
ha_realsmith_zshlwVOOgA.shost_realsmith_zshlwVOOgA = /*TAG3:STA*/((int)(realsmith_rmSBd9S3Ti((unsigned long)(ha_shost_realsmith_zshlwVOOgA)+(10))+(int)(ha_shost_realsmith_zshlwVOOgA)-(2))+ha_shost_realsmith_zshlwVOOgA)/*TAG3:END:ha_shost_realsmith_zshlwVOOgA*/;
/*aft_stmt:17381*/
    int log_result_realsmith_zshlwVOOgA = 0;
    /*bef_stmt:17467*/
if (/*TAG4:STA*/((int)(realsmith_x0UJZRlSUs((int)(ha_realsmith_zshlwVOOgA.shost_realsmith_zshlwVOOgA)+(11), (int)(ha_realsmith_zshlwVOOgA.shost_realsmith_zshlwVOOgA)+(66), (int)(ha_realsmith_zshlwVOOgA.shost_realsmith_zshlwVOOgA)+(10))+(int)(ha_realsmith_zshlwVOOgA.shost_realsmith_zshlwVOOgA)-(4231772))+ha_realsmith_zshlwVOOgA.shost_realsmith_zshlwVOOgA)/*TAG4:END:ha_realsmith_zshlwVOOgA.shost_realsmith_zshlwVOOgA*/ == 0) {
        log_result_realsmith_zshlwVOOgA = -1;
    }
/*aft_stmt:17467*/
    /*bef_stmt:17478*/
return /*TAG5:STA*/((int)(realsmith_proxy_CMpBegH6dD((int)(log_result_realsmith_zshlwVOOgA)+(60))+(int)(log_result_realsmith_zshlwVOOgA)-(65))+log_result_realsmith_zshlwVOOgA)/*TAG5:END:log_result_realsmith_zshlwVOOgA*/;
/*aft_stmt:17478*/
}



#include<stdint.h>
#include<inttypes.h>
#include "stdlib.h"
struct sonic_local_laVyM0 {
    unsigned long dma_bitmode_realsmith_qO1XPLlptV;
    unsigned long cda_realsmith_qO1XPLlptV;
};
int realsmith_qO1XPLlptV(unsigned long cda_realsmith_qO1XPLlptV, unsigned long dma_bitmode_realsmith_qO1XPLlptV, unsigned short val_realsmith_qO1XPLlptV) {
    unsigned long SONIC_CDA_CAM_ENABLE_realsmith_qO1XPLlptV = 1;
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_FdftomAEVd(x) (x)
#define Tag2_realsmith_FdftomAEVd(x) (x)
#define Tag3_realsmith_FdftomAEVd(x) (x)
#define Tag4_realsmith_FdftomAEVd(x) (x)
#define Tag5_realsmith_FdftomAEVd(x) (x)
#define Tag6_realsmith_FdftomAEVd(x) (x)
#define Tag7_realsmith_FdftomAEVd(x) (x)
#define Tag8_realsmith_FdftomAEVd(x) (x)
#define Tag9_realsmith_FdftomAEVd(x) (x)
#define Tag10_realsmith_FdftomAEVd(x) (x)
#include "stdlib.h"
int realsmith_FdftomAEVd(int t_flags_realsmith_FdftomAEVd, int ipv6_dsfield_realsmith_FdftomAEVd, int skb_dsfield_realsmith_FdftomAEVd) {
    const int INET_ECN_MASK_realsmith_FdftomAEVd = 0x03;
    const int IP6_TNL_F_RCV_DSCP_COPY_realsmith_FdftomAEVd = 0x01;
    /*bef_stmt:17213*/
/*bef_stmt:17213*/
int dsfield_realsmith_FdftomAEVd = /*TAG1:STA*/((ipv6_dsfield_realsmith_FdftomAEVd) + (g_MW3YJP[2]) - -8)/*TAG1:END:ipv6_dsfield_realsmith_FdftomAEVd*/ & ~/*TAG2:STA*/((int)(realsmith_h6c6rl9ZuP((unsigned long)(INET_ECN_MASK_realsmith_FdftomAEVd)+(82), (unsigned int)(INET_ECN_MASK_realsmith_FdftomAEVd)+(13), (unsigned int)(INET_ECN_MASK_realsmith_FdftomAEVd)+(28))+(int)(INET_ECN_MASK_realsmith_FdftomAEVd)-(4))+INET_ECN_MASK_realsmith_FdftomAEVd)/*TAG2:END:INET_ECN_MASK_realsmith_FdftomAEVd*/;
g_MW3YJP[2] = -8 + (ipv6_dsfield_realsmith_FdftomAEVd - (0));
/*aft_stmt:17213*/
/*aft_stmt:17213*/
    /*bef_stmt:17292*/
/*bef_stmt:17292*/
if (/*TAG3:STA*/((int)(realsmith_proxy_mrmj0K4zHh((unsigned int)(t_flags_realsmith_FdftomAEVd)+(-43), (unsigned int)(t_flags_realsmith_FdftomAEVd)+(-16), (unsigned int)(t_flags_realsmith_FdftomAEVd)+(-20), (unsigned int)(t_flags_realsmith_FdftomAEVd)+(-66))+(int)(t_flags_realsmith_FdftomAEVd)-(44))+t_flags_realsmith_FdftomAEVd)/*TAG3:END:t_flags_realsmith_FdftomAEVd*/ & /*TAG4:STA*/((IP6_TNL_F_RCV_DSCP_COPY_realsmith_FdftomAEVd) + (g_BNNLY0[3]) - -61)/*TAG4:END:IP6_TNL_F_RCV_DSCP_COPY_realsmith_FdftomAEVd*/) {
        /*bef_stmt:17285*/
/*bef_stmt:17285*/
/*bef_stmt:17285*/
skb_dsfield_realsmith_FdftomAEVd = (Tag5_realsmith_FdftomAEVd(/*int:17331:17331:17285:e*/skb_dsfield_realsmith_FdftomAEVd) & ~Tag6_realsmith_FdftomAEVd(/*const int:17331:17331:17285:e*/INET_ECN_MASK_realsmith_FdftomAEVd)) | Tag7_realsmith_FdftomAEVd(/*int:17331:17331:17285:e*/dsfield_realsmith_FdftomAEVd);
/*aft_stmt:17285*/
/*aft_stmt:17285*/
/*aft_stmt:17285*/
    }
g_BNNLY0[3] = -61 + (IP6_TNL_F_RCV_DSCP_COPY_realsmith_FdftomAEVd - (1));
g_R4L6DT = 124 + (IP6_TNL_F_RCV_DSCP_COPY_realsmith_FdftomAEVd - (1));
/*aft_stmt:17292*/
/*aft_stmt:17292*/
    /*bef_stmt:17329*/
/*bef_stmt:17329*/
/*bef_stmt:17329*/
return (/*TAG8:STA*/((int)(realsmith_ZYa1zxxdXz((int)(ipv6_dsfield_realsmith_FdftomAEVd)+(14), (int)(ipv6_dsfield_realsmith_FdftomAEVd)+(21), (int)(ipv6_dsfield_realsmith_FdftomAEVd)+(77), (int)(ipv6_dsfield_realsmith_FdftomAEVd)+(93), (int)(ipv6_dsfield_realsmith_FdftomAEVd)+(94))+(int)(ipv6_dsfield_realsmith_FdftomAEVd)-(-1))+ipv6_dsfield_realsmith_FdftomAEVd)/*TAG8:END:ipv6_dsfield_realsmith_FdftomAEVd*/ & /*TAG9:STA*/((INET_ECN_MASK_realsmith_FdftomAEVd) + (g_IU97RO[1]) - -111)/*TAG9:END:INET_ECN_MASK_realsmith_FdftomAEVd*/) | /*TAG10:STA*/((skb_dsfield_realsmith_FdftomAEVd) + (g_29FPQX) - -16)/*TAG10:END:skb_dsfield_realsmith_FdftomAEVd*/;
g_IU97RO[1] = -111 + (INET_ECN_MASK_realsmith_FdftomAEVd - (3));
g_29FPQX = -16 + (skb_dsfield_realsmith_FdftomAEVd - (15));
g_BNNLY0[3] = -61 + (INET_ECN_MASK_realsmith_FdftomAEVd - (3));
/*aft_stmt:17329*/
/*aft_stmt:17329*/
/*aft_stmt:17329*/
}



#include "stdlib.h"
int realsmith_jTb88IiazJ(int chip_id_realsmith_jTb88IiazJ, int first_reg_realsmith_jTb88IiazJ, int *regvals_realsmith_jTb88IiazJ, int numregs_realsmith_jTb88IiazJ) {
    int err_realsmith_jTb88IiazJ;
    if (chip_id_realsmith_jTb88IiazJ == 0xa0 || chip_id_realsmith_jTb88IiazJ == 0xa1) {
        return -1;
    }
    if (first_reg_realsmith_jTb88IiazJ < 0 || first_reg_realsmith_jTb88IiazJ > 255) {
        return -1;
    }
    for (int i_realsmith_jTb88IiazJ = 0; i_realsmith_jTb88IiazJ < numregs_realsmith_jTb88IiazJ; i_realsmith_jTb88IiazJ++) {
        if (i_realsmith_jTb88IiazJ >= 256) {
            return -1;
        }
        regvals_realsmith_jTb88IiazJ[i_realsmith_jTb88IiazJ] = first_reg_realsmith_jTb88IiazJ + i_realsmith_jTb88IiazJ;
    }
    return 0;
}
int realsmith_proxy_DeUDQtH47T(int p_0_Gm3BqQF1PU, int p_1_IHW1eVF7HQ, int p_2_gmxGQLEHEX, int p_3_E1RpKuCWDz) {
int proxy_s3bpwhPHdD[14] = { 58, p_2_gmxGQLEHEX, 52, p_2_gmxGQLEHEX, 67, 66, p_2_gmxGQLEHEX, 54, p_2_gmxGQLEHEX, 57, 5, 64, 50, 25 };
int proxy_ret_ChKSU2yqpe = realsmith_jTb88IiazJ(p_0_Gm3BqQF1PU, p_1_IHW1eVF7HQ, proxy_s3bpwhPHdD, p_3_E1RpKuCWDz);
return proxy_ret_ChKSU2yqpe;
}


#include "stdlib.h"
struct scmi_opp_yhzrl6 {
    unsigned long perf_realsmith_r4yt737p1s;
};
struct perf_dom_info_yhzrl6 {
    int opp_count_realsmith_r4yt737p1s;
    unsigned long mult_factor_realsmith_r4yt737p1s;
    struct scmi_opp_yhzrl6 *opp_realsmith_r4yt737p1s;
};
struct scmi_perf_info_yhzrl6 {
    struct perf_dom_info_yhzrl6 *dom_info_realsmith_r4yt737p1s;
};
int realsmith_r4yt737p1s(int domain_realsmith_r4yt737p1s, int opp_count_realsmith_r4yt737p1s, unsigned long mult_factor_realsmith_r4yt737p1s, unsigned long *opps_realsmith_r4yt737p1s) {
    int idx_realsmith_r4yt737p1s, ret_realsmith_r4yt737p1s;
    unsigned long freq_realsmith_r4yt737p1s;
    for (idx_realsmith_r4yt737p1s = 0; idx_realsmith_r4yt737p1s < opp_count_realsmith_r4yt737p1s; idx_realsmith_r4yt737p1s++) {
        freq_realsmith_r4yt737p1s = opps_realsmith_r4yt737p1s[idx_realsmith_r4yt737p1s] * mult_factor_realsmith_r4yt737p1s;
        ret_realsmith_r4yt737p1s = (freq_realsmith_r4yt737p1s % 2 == 0) ? 0 : -1;
        if (ret_realsmith_r4yt737p1s) {
            while (idx_realsmith_r4yt737p1s-- > 0) {
                freq_realsmith_r4yt737p1s = (opps_realsmith_r4yt737p1s[idx_realsmith_r4yt737p1s] * mult_factor_realsmith_r4yt737p1s);
            }
            return ret_realsmith_r4yt737p1s;
        }
    }
    return 0;
}
int realsmith_proxy_4woXoOSMSb(int p_0_lfG0Az6lVx, int p_1_Vdi5M2PB5h, unsigned long p_2_eyk9mkXRXm, unsigned long p_3_guApagh0Cs) {
unsigned long proxy_GOxPjfMb9n[13] = { p_3_guApagh0Cs, p_3_guApagh0Cs, p_3_guApagh0Cs, p_3_guApagh0Cs, 11, p_3_guApagh0Cs, 9, p_3_guApagh0Cs, 87, 81, p_3_guApagh0Cs, 14, p_3_guApagh0Cs };
int proxy_ret_wFcCgAlnJT = realsmith_r4yt737p1s(p_0_lfG0Az6lVx, p_1_Vdi5M2PB5h, p_2_eyk9mkXRXm, proxy_GOxPjfMb9n);
return proxy_ret_wFcCgAlnJT;
}


#include "stdint.h"
int realsmith_MGJYas9DiX(int pcnt_bits_realsmith_MGJYas9DiX, unsigned char *buf_realsmith_MGJYas9DiX, int *node_num_realsmith_MGJYas9DiX) {
    const int UBIFS_LPT_CRC_BYTES_realsmith_MGJYas9DiX = 4;
    const int UBIFS_LPT_TYPE_BITS_realsmith_MGJYas9DiX = 8;
    unsigned char *addr_realsmith_MGJYas9DiX = buf_realsmith_MGJYas9DiX + UBIFS_LPT_CRC_BYTES_realsmith_MGJYas9DiX;
    int pos_realsmith_MGJYas9DiX = 0, node_type_realsmith_MGJYas9DiX = 0;
    for (int i_realsmith_MGJYas9DiX = 0; i_realsmith_MGJYas9DiX < UBIFS_LPT_TYPE_BITS_realsmith_MGJYas9DiX; i_realsmith_MGJYas9DiX++) {
        node_type_realsmith_MGJYas9DiX = (node_type_realsmith_MGJYas9DiX << 1) | ((addr_realsmith_MGJYas9DiX[pos_realsmith_MGJYas9DiX / 8] >> (7 - (pos_realsmith_MGJYas9DiX % 8))) & 1);
        pos_realsmith_MGJYas9DiX++;
    }
    *node_num_realsmith_MGJYas9DiX = 0;
    for (int i_realsmith_MGJYas9DiX = 0; i_realsmith_MGJYas9DiX < pcnt_bits_realsmith_MGJYas9DiX; i_realsmith_MGJYas9DiX++) {
        *node_num_realsmith_MGJYas9DiX = (*node_num_realsmith_MGJYas9DiX << 1) | ((addr_realsmith_MGJYas9DiX[pos_realsmith_MGJYas9DiX / 8] >> (7 - (pos_realsmith_MGJYas9DiX % 8))) & 1);
        pos_realsmith_MGJYas9DiX++;
    }
    return node_type_realsmith_MGJYas9DiX;
}
int realsmith_proxy_7V9ysKTRT9(int p_0_B4GW3P2s9Y, unsigned char p_1_kYU39uYQtO, int p_2_l70JS6VD98) {
unsigned char proxy_T9qhtNLRqn[18] = { p_1_kYU39uYQtO, 0, 57, p_1_kYU39uYQtO, 86, 88, p_1_kYU39uYQtO, 80, 4, 59, p_1_kYU39uYQtO, p_1_kYU39uYQtO, p_1_kYU39uYQtO, p_1_kYU39uYQtO, 32, 59, p_1_kYU39uYQtO, p_1_kYU39uYQtO };
int proxy_ret_JSdC8CpRyM = realsmith_MGJYas9DiX(p_0_B4GW3P2s9Y, proxy_T9qhtNLRqn, &(p_2_l70JS6VD98));
return proxy_ret_JSdC8CpRyM;
}


#include "stdlib.h"
struct mt9t112_priv_bEPr7H {
    unsigned long width_realsmith_RDpowAETN8;
    unsigned long height_realsmith_RDpowAETN8;
    unsigned long colorspace_realsmith_RDpowAETN8;
    unsigned long code_realsmith_RDpowAETN8;
};
int realsmith_RDpowAETN8(int pad_realsmith_RDpowAETN8, unsigned long *width_realsmith_RDpowAETN8, unsigned long *height_realsmith_RDpowAETN8, unsigned long *colorspace_realsmith_RDpowAETN8, unsigned long *code_realsmith_RDpowAETN8) {
    struct mt9t112_priv_bEPr7H priv_realsmith_RDpowAETN8;
    priv_realsmith_RDpowAETN8.width_realsmith_RDpowAETN8 = 640;
    priv_realsmith_RDpowAETN8.height_realsmith_RDpowAETN8 = 480;
    priv_realsmith_RDpowAETN8.colorspace_realsmith_RDpowAETN8 = 1;
    priv_realsmith_RDpowAETN8.code_realsmith_RDpowAETN8 = 2;
    if (pad_realsmith_RDpowAETN8) {
        return -1;
    }
    *width_realsmith_RDpowAETN8 = priv_realsmith_RDpowAETN8.width_realsmith_RDpowAETN8;
    *height_realsmith_RDpowAETN8 = priv_realsmith_RDpowAETN8.height_realsmith_RDpowAETN8;
    *colorspace_realsmith_RDpowAETN8 = priv_realsmith_RDpowAETN8.colorspace_realsmith_RDpowAETN8;
    *code_realsmith_RDpowAETN8 = priv_realsmith_RDpowAETN8.code_realsmith_RDpowAETN8;
    return 0;
}
int realsmith_proxy_JlZWDq22M2(int p_0_gpZsOQPemi, unsigned long p_1_MtwBnUCLuu, unsigned long p_2_iMF78cdZKL, unsigned long p_3_ghHpbaWSUF, unsigned long p_4_eOrvqMk3Ja) {
unsigned long proxy_JNXRZrFjNW[10] = { 82, 6, p_2_iMF78cdZKL, p_2_iMF78cdZKL, 61, 23, p_2_iMF78cdZKL, p_2_iMF78cdZKL, 77, 90 };
unsigned long proxy_dEkliU2MUt[10] = { p_4_eOrvqMk3Ja, 21, 49, 28, 88, 15, p_4_eOrvqMk3Ja, 93, p_4_eOrvqMk3Ja, 79 };
int proxy_ret_H0OBvkiTmm = realsmith_RDpowAETN8(p_0_gpZsOQPemi, &(p_1_MtwBnUCLuu), proxy_JNXRZrFjNW, &(p_3_ghHpbaWSUF), proxy_dEkliU2MUt);
return proxy_ret_H0OBvkiTmm;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_jRcco0OwVW(x) (x)
#define Tag2_realsmith_jRcco0OwVW(x) (x)
#define Tag3_realsmith_jRcco0OwVW(x) (x)
#define Tag4_realsmith_jRcco0OwVW(x) (x)
#define Tag5_realsmith_jRcco0OwVW(x) (x)
#define Tag6_realsmith_jRcco0OwVW(x) (x)
#include "stdlib.h"
int realsmith_jRcco0OwVW(int substream_ptr_realsmith_jRcco0OwVW, int pcm_rec_realsmith_jRcco0OwVW, int cp_trans_copy_realsmith_jRcco0OwVW) {
    int result_realsmith_jRcco0OwVW;
    /*bef_stmt:17203*/
/*bef_stmt:17203*/
/*bef_stmt:17203*/
if (/*TAG1:STA*/((int)(realsmith_j0xc67x4IZ((int)(substream_ptr_realsmith_jRcco0OwVW)+(-34), (int)(substream_ptr_realsmith_jRcco0OwVW)+(63))+(int)(substream_ptr_realsmith_jRcco0OwVW)-(36))+substream_ptr_realsmith_jRcco0OwVW)/*TAG1:END:substream_ptr_realsmith_jRcco0OwVW*/ == 0 || /*TAG2:STA*/((int)(realsmith_kpoDErHANy((int)(pcm_rec_realsmith_jRcco0OwVW)+(4), (int)(pcm_rec_realsmith_jRcco0OwVW)+(-59), (int)(pcm_rec_realsmith_jRcco0OwVW)+(-51))+(int)(pcm_rec_realsmith_jRcco0OwVW)-(74))+pcm_rec_realsmith_jRcco0OwVW)/*TAG2:END:pcm_rec_realsmith_jRcco0OwVW*/ == 0 || /*TAG3:STA*/((cp_trans_copy_realsmith_jRcco0OwVW) + (g_M65HXT) - 43)/*TAG3:END:cp_trans_copy_realsmith_jRcco0OwVW*/ == 0) {
        return -1;
    }
g_M65HXT = 43 + (cp_trans_copy_realsmith_jRcco0OwVW - (73));
/*aft_stmt:17203*/
/*aft_stmt:17203*/
/*aft_stmt:17203*/
    /*bef_stmt:17229*/
/*bef_stmt:17229*/
result_realsmith_jRcco0OwVW = /*TAG4:STA*/((int)(realsmith_proxy_ceIJJ8HUAq((int)(pcm_rec_realsmith_jRcco0OwVW)+(-50), (int)(pcm_rec_realsmith_jRcco0OwVW)+(-35))+(int)(pcm_rec_realsmith_jRcco0OwVW)-(73))+pcm_rec_realsmith_jRcco0OwVW)/*TAG4:END:pcm_rec_realsmith_jRcco0OwVW*/ / /*TAG5:STA*/((int)(realsmith_mxKhDtOSqA((unsigned long)(cp_trans_copy_realsmith_jRcco0OwVW)+(-56), (unsigned char)(cp_trans_copy_realsmith_jRcco0OwVW)+(1), (unsigned char)(cp_trans_copy_realsmith_jRcco0OwVW)+(-7))+(int)(cp_trans_copy_realsmith_jRcco0OwVW)-(230))+cp_trans_copy_realsmith_jRcco0OwVW)/*TAG5:END:cp_trans_copy_realsmith_jRcco0OwVW*/;
/*aft_stmt:17229*/
/*aft_stmt:17229*/
    /*bef_stmt:17240*/
return /*TAG6:STA*/((int)(realsmith_ck2G2n01g7((int)(result_realsmith_jRcco0OwVW)+(35), (int)(result_realsmith_jRcco0OwVW)+(59))+(int)(result_realsmith_jRcco0OwVW)-(4))+result_realsmith_jRcco0OwVW)/*TAG6:END:result_realsmith_jRcco0OwVW*/;
/*aft_stmt:17240*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_BFOuNa5Wko(x) (x)
#define Tag2_realsmith_BFOuNa5Wko(x) (x)
#include "stdlib.h"
int realsmith_BFOuNa5Wko(int val_realsmith_BFOuNa5Wko) {
    unsigned short reg_to_write_realsmith_BFOuNa5Wko;
    /*bef_stmt:17123*/
reg_to_write_realsmith_BFOuNa5Wko = 0x80bb + /*TAG1:STA*/((val_realsmith_BFOuNa5Wko) + (g_BNNLY0[0]) - 124)/*TAG1:END:val_realsmith_BFOuNa5Wko*/ * 0x100;
g_BNNLY0[0] = 124 + (val_realsmith_BFOuNa5Wko - (87));
/*aft_stmt:17123*/
    /*bef_stmt:17137*/
return /*TAG2:STA*/((unsigned short)(realsmith_proxy_DeUDQtH47T((int)(reg_to_write_realsmith_BFOuNa5Wko)+(-55225), (int)(reg_to_write_realsmith_BFOuNa5Wko)+(-55225), (int)(reg_to_write_realsmith_BFOuNa5Wko)+(-55224), (int)(reg_to_write_realsmith_BFOuNa5Wko)+(-55225))+(int)(reg_to_write_realsmith_BFOuNa5Wko)-(55227))+reg_to_write_realsmith_BFOuNa5Wko)/*TAG2:END:reg_to_write_realsmith_BFOuNa5Wko*/;
/*aft_stmt:17137*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_4mo7Fs3gRO(x) (x)
#define Tag2_realsmith_4mo7Fs3gRO(x) (x)
#include "stdint.h"
struct rvin_dev_0ZJ8v6 {
    // Dummy member for demonstration
    int dummy_realsmith_4mo7Fs3gRO;
};
unsigned int realsmith_4mo7Fs3gRO(int dummy_input_realsmith_4mo7Fs3gRO) {
    struct rvin_dev_0ZJ8v6 vin_realsmith_4mo7Fs3gRO;
    /*bef_stmt:2041*/
vin_realsmith_4mo7Fs3gRO.dummy_realsmith_4mo7Fs3gRO = Tag1_realsmith_4mo7Fs3gRO(/*int:2098:2098:2041:e*/dummy_input_realsmith_4mo7Fs3gRO);
/*aft_stmt:2041*/
    /*bef_stmt:2096*/
return (unsigned int)(Tag2_realsmith_4mo7Fs3gRO(/*int:2098:2098:2096:e*/vin_realsmith_4mo7Fs3gRO.dummy_realsmith_4mo7Fs3gRO) * 42);
/*aft_stmt:2096*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_kgz1t13FoT(x) (x)
#define Tag2_realsmith_kgz1t13FoT(x) (x)
#define Tag3_realsmith_kgz1t13FoT(x) (x)
#define Tag4_realsmith_kgz1t13FoT(x) (x)
#define Tag5_realsmith_kgz1t13FoT(x) (x)
#define Tag6_realsmith_kgz1t13FoT(x) (x)
#define Tag7_realsmith_kgz1t13FoT(x) (x)
#define Tag8_realsmith_kgz1t13FoT(x) (x)
#define Tag9_realsmith_kgz1t13FoT(x) (x)
#include "stdlib.h"
int realsmith_kgz1t13FoT(int priv_realsmith_kgz1t13FoT, int on_realsmith_kgz1t13FoT) {
    int ret_realsmith_kgz1t13FoT;
    /*bef_stmt:17298*/
if (/*TAG1:STA*/((int)(realsmith_proxy_hS3p4netiZ((int)(on_realsmith_kgz1t13FoT)+(-52), (int)(on_realsmith_kgz1t13FoT)+(31), (int)(on_realsmith_kgz1t13FoT)+(-67), (int)(on_realsmith_kgz1t13FoT)+(-44))+(int)(on_realsmith_kgz1t13FoT)-(65))+on_realsmith_kgz1t13FoT)/*TAG1:END:on_realsmith_kgz1t13FoT*/) {
        ret_realsmith_kgz1t13FoT = 1;
        /*bef_stmt:17162*/
/*bef_stmt:17162*/
if (Tag2_realsmith_kgz1t13FoT(/*int:17310:17310:17162:e*/ret_realsmith_kgz1t13FoT) < 0)
            return /*TAG3:STA*/((int)(realsmith_proxy_lsStlIV4U0((unsigned int)(ret_realsmith_kgz1t13FoT)+(96), (int)(ret_realsmith_kgz1t13FoT)+(84), (unsigned int)(ret_realsmith_kgz1t13FoT)+(-34), (int)(ret_realsmith_kgz1t13FoT)+(-36), (int)(ret_realsmith_kgz1t13FoT)+(-7))+(int)(ret_realsmith_kgz1t13FoT)-(0))+ret_realsmith_kgz1t13FoT)/*TAG3:END:ret_realsmith_kgz1t13FoT*/;
/*aft_stmt:17162*/
/*aft_stmt:17162*/
        ret_realsmith_kgz1t13FoT = 1;
        /*bef_stmt:17202*/
/*bef_stmt:17202*/
if (Tag4_realsmith_kgz1t13FoT(/*int:17310:17310:17202:e*/ret_realsmith_kgz1t13FoT) < 0)
            return /*TAG5:STA*/((ret_realsmith_kgz1t13FoT) + (g_M65HXT) - 43)/*TAG5:END:ret_realsmith_kgz1t13FoT*/;
g_M65HXT = 43 + (ret_realsmith_kgz1t13FoT - (1));
/*aft_stmt:17202*/
/*aft_stmt:17202*/
    } else {
        ret_realsmith_kgz1t13FoT = 0;
        /*bef_stmt:17248*/
/*bef_stmt:17248*/
if (Tag6_realsmith_kgz1t13FoT(/*int:17310:17310:17248:e*/ret_realsmith_kgz1t13FoT) < 0)
            return Tag7_realsmith_kgz1t13FoT(/*int:17310:17310:17248:e*/ret_realsmith_kgz1t13FoT);
/*aft_stmt:17248*/
/*aft_stmt:17248*/
        ret_realsmith_kgz1t13FoT = 0;
        /*bef_stmt:17288*/
/*bef_stmt:17288*/
if (Tag8_realsmith_kgz1t13FoT(/*int:17310:17310:17288:e*/ret_realsmith_kgz1t13FoT) < 0)
            return Tag9_realsmith_kgz1t13FoT(/*int:17310:17310:17288:e*/ret_realsmith_kgz1t13FoT);
/*aft_stmt:17288*/
/*aft_stmt:17288*/
    }
/*aft_stmt:17298*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_PYSHxEcZDl(x) (x)
#define Tag2_realsmith_PYSHxEcZDl(x) (x)
#define Tag3_realsmith_PYSHxEcZDl(x) (x)
#define Tag4_realsmith_PYSHxEcZDl(x) (x)
#define Tag5_realsmith_PYSHxEcZDl(x) (x)
#include "stdlib.h"
int realsmith_PYSHxEcZDl(int device_index_realsmith_PYSHxEcZDl, int engine_index_realsmith_PYSHxEcZDl) {
    int result_realsmith_PYSHxEcZDl;
    /*bef_stmt:17165*/
/*bef_stmt:17165*/
if (/*TAG1:STA*/((device_index_realsmith_PYSHxEcZDl) + (g_R4L6DT) - 124)/*TAG1:END:device_index_realsmith_PYSHxEcZDl*/ < 0 || /*TAG2:STA*/((int)(realsmith_sB8hmRytQ2((int)(engine_index_realsmith_PYSHxEcZDl)+(14))+(int)(engine_index_realsmith_PYSHxEcZDl)-(191))+engine_index_realsmith_PYSHxEcZDl)/*TAG2:END:engine_index_realsmith_PYSHxEcZDl*/ < 0) {
        return -1;
    }
g_R4L6DT = 124 + (device_index_realsmith_PYSHxEcZDl - (57));
/*aft_stmt:17165*/
/*aft_stmt:17165*/
    /*bef_stmt:17215*/
/*bef_stmt:17215*/
result_realsmith_PYSHxEcZDl = (/*TAG3:STA*/((int)(realsmith_yoFYraHykK((unsigned long)(device_index_realsmith_PYSHxEcZDl)+(-42), (unsigned long)(device_index_realsmith_PYSHxEcZDl)+(-39), (unsigned long)(device_index_realsmith_PYSHxEcZDl)+(23), (unsigned long)(device_index_realsmith_PYSHxEcZDl)+(32))+(int)(device_index_realsmith_PYSHxEcZDl)-(58))+device_index_realsmith_PYSHxEcZDl)/*TAG3:END:device_index_realsmith_PYSHxEcZDl*/ * 100) + (/*TAG4:STA*/((int)(realsmith_zshlwVOOgA((int)(engine_index_realsmith_PYSHxEcZDl)+(30), (int)(engine_index_realsmith_PYSHxEcZDl)+(-24), (int)(engine_index_realsmith_PYSHxEcZDl)+(-25))+(int)(engine_index_realsmith_PYSHxEcZDl)-(27))+engine_index_realsmith_PYSHxEcZDl)/*TAG4:END:engine_index_realsmith_PYSHxEcZDl*/ * 10);
/*aft_stmt:17215*/
/*aft_stmt:17215*/
    /*bef_stmt:17226*/
return /*TAG5:STA*/((int)(realsmith_qO1XPLlptV((unsigned long)(result_realsmith_PYSHxEcZDl)+(-5945), (unsigned long)(result_realsmith_PYSHxEcZDl)+(-5924), (int)(result_realsmith_PYSHxEcZDl)+(-5912))+(int)(result_realsmith_PYSHxEcZDl)-(5970))+result_realsmith_PYSHxEcZDl)/*TAG5:END:result_realsmith_PYSHxEcZDl*/;
/*aft_stmt:17226*/
}



#include "stdlib.h"
#include "stdbool.h"
int realsmith_0qacmLvIhP(int buffer_length_realsmith_0qacmLvIhP, int *vbva_buffer_realsmith_0qacmLvIhP, int screen_realsmith_0qacmLvIhP) {
    _Bool ret_realsmith_0qacmLvIhP = 0;
    int partial_write_tresh_realsmith_0qacmLvIhP = 256;
    int data_len_realsmith_0qacmLvIhP = buffer_length_realsmith_0qacmLvIhP - sizeof(int) * 2;
    vbva_buffer_realsmith_0qacmLvIhP[0] = partial_write_tresh_realsmith_0qacmLvIhP;
    vbva_buffer_realsmith_0qacmLvIhP[1] = data_len_realsmith_0qacmLvIhP;
    ret_realsmith_0qacmLvIhP = (screen_realsmith_0qacmLvIhP > 0);
    if (!ret_realsmith_0qacmLvIhP) {
    }
    return ret_realsmith_0qacmLvIhP ? 1 : 0;
}
int realsmith_proxy_lj3jBQAEck(int p_0_53FdhUAC6Z, int p_1_mGfp6NTHob, int p_2_6grB1lDgnV) {
int proxy_UVoVgkhUR9[20] = { p_1_mGfp6NTHob, p_1_mGfp6NTHob, 38, p_1_mGfp6NTHob, p_1_mGfp6NTHob, 92, p_1_mGfp6NTHob, 49, 3, 85, 1, p_1_mGfp6NTHob, 24, p_1_mGfp6NTHob, 73, p_1_mGfp6NTHob, 28, 39, p_1_mGfp6NTHob, p_1_mGfp6NTHob };
int proxy_ret_VicHwdBOAW = realsmith_0qacmLvIhP(p_0_53FdhUAC6Z, proxy_UVoVgkhUR9, p_2_6grB1lDgnV);
return proxy_ret_VicHwdBOAW;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_kEPCOwTyUP(x) (x)
#define Tag2_realsmith_kEPCOwTyUP(x) (x)
#define Tag3_realsmith_kEPCOwTyUP(x) (x)
#define Tag4_realsmith_kEPCOwTyUP(x) (x)
#define Tag5_realsmith_kEPCOwTyUP(x) (x)
#define Tag6_realsmith_kEPCOwTyUP(x) (x)
#include "stdlib.h"
int realsmith_kEPCOwTyUP(int lps_val_realsmith_kEPCOwTyUP, int rpwm_val_realsmith_kEPCOwTyUP) {
    /*bef_stmt:17123*/
int lps_realsmith_kEPCOwTyUP = /*TAG1:STA*/((int)(realsmith_BFOuNa5Wko((int)(lps_val_realsmith_kEPCOwTyUP)+(-4))+(int)(lps_val_realsmith_kEPCOwTyUP)-(55318))+lps_val_realsmith_kEPCOwTyUP)/*TAG1:END:lps_val_realsmith_kEPCOwTyUP*/;
/*aft_stmt:17123*/
    /*bef_stmt:17149*/
int rpwm_realsmith_kEPCOwTyUP = /*TAG2:STA*/((int)(realsmith_proxy_JlZWDq22M2((int)(rpwm_val_realsmith_kEPCOwTyUP)+(-35), (unsigned long)(rpwm_val_realsmith_kEPCOwTyUP)+(33), (unsigned long)(rpwm_val_realsmith_kEPCOwTyUP)+(-29), (unsigned long)(rpwm_val_realsmith_kEPCOwTyUP)+(-16), (unsigned long)(rpwm_val_realsmith_kEPCOwTyUP)+(-124))+(int)(rpwm_val_realsmith_kEPCOwTyUP)-(45))+rpwm_val_realsmith_kEPCOwTyUP)/*TAG2:END:rpwm_val_realsmith_kEPCOwTyUP*/;
/*aft_stmt:17149*/
    /*bef_stmt:17201*/
int result_lps_realsmith_kEPCOwTyUP = (/*TAG3:STA*/((int)(realsmith_jRcco0OwVW((int)(lps_realsmith_kEPCOwTyUP)+(-55), (int)(lps_realsmith_kEPCOwTyUP)+(-17), (int)(lps_realsmith_kEPCOwTyUP)+(-18))+(int)(lps_realsmith_kEPCOwTyUP)-(92))+lps_realsmith_kEPCOwTyUP)/*TAG3:END:lps_realsmith_kEPCOwTyUP*/ == 0) ? 0 : 1;
/*aft_stmt:17201*/
    /*bef_stmt:17253*/
int result_rpwm_realsmith_kEPCOwTyUP = (/*TAG4:STA*/((rpwm_realsmith_kEPCOwTyUP) + (g_R4L6DT) - 124)/*TAG4:END:rpwm_realsmith_kEPCOwTyUP*/ == 0) ? 0 : 1;
g_R4L6DT = 124 + (rpwm_realsmith_kEPCOwTyUP - (46));
/*aft_stmt:17253*/
    /*bef_stmt:17274*/
/*bef_stmt:17274*/
return /*TAG5:STA*/((result_lps_realsmith_kEPCOwTyUP) + (g_29FPQX) - -16)/*TAG5:END:result_lps_realsmith_kEPCOwTyUP*/ + /*TAG6:STA*/((int)(realsmith_proxy_7V9ysKTRT9((int)(result_rpwm_realsmith_kEPCOwTyUP)+(23), (unsigned char)(result_rpwm_realsmith_kEPCOwTyUP)+(89), (int)(result_rpwm_realsmith_kEPCOwTyUP)+(-25))+(int)(result_rpwm_realsmith_kEPCOwTyUP)-(87))+result_rpwm_realsmith_kEPCOwTyUP)/*TAG6:END:result_rpwm_realsmith_kEPCOwTyUP*/;
g_29FPQX = -16 + (result_lps_realsmith_kEPCOwTyUP - (1));
g_M65HXT = 43 + (result_lps_realsmith_kEPCOwTyUP - (1));
g_031K19 = -65 + (result_lps_realsmith_kEPCOwTyUP - (1));
/*aft_stmt:17274*/
/*aft_stmt:17274*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_0ggrROlPDv(x) (x)
#define Tag2_realsmith_proxy_0ggrROlPDv(x) (x)
#define Tag3_realsmith_proxy_0ggrROlPDv(x) (x)
#define Tag4_realsmith_proxy_0ggrROlPDv(x) (x)
#define Tag5_realsmith_proxy_0ggrROlPDv(x) (x)
#define Tag6_realsmith_proxy_0ggrROlPDv(x) (x)
#define Tag7_realsmith_proxy_0ggrROlPDv(x) (x)
#include "stdlib.h"
struct vb2_buffer_n6FrzL {
    int done_entry_realsmith_lHjbR1Crz5;
    int vb2_queue_realsmith_lHjbR1Crz5;
};
struct dt3155_priv_n6FrzL {
    int lock_realsmith_lHjbR1Crz5;
    struct vb2_buffer_n6FrzL *curr_buf_realsmith_lHjbR1Crz5;
    int dmaq_realsmith_lHjbR1Crz5;
};
int realsmith_lHjbR1Crz5(int vb_done_entry_realsmith_lHjbR1Crz5, int vb_vb2_queue_realsmith_lHjbR1Crz5, int *curr_buf_realsmith_lHjbR1Crz5, int *lock_realsmith_lHjbR1Crz5, int *dmaq_realsmith_lHjbR1Crz5) {
    struct vb2_buffer_n6FrzL vb_realsmith_lHjbR1Crz5;
    /*bef_stmt:17320*/
vb_realsmith_lHjbR1Crz5.done_entry_realsmith_lHjbR1Crz5 = /*TAG1:STA*/((int)(realsmith_pNmPAZZf2k((int)(vb_done_entry_realsmith_lHjbR1Crz5)+(71))+(int)(vb_done_entry_realsmith_lHjbR1Crz5)-(63))+vb_done_entry_realsmith_lHjbR1Crz5)/*TAG1:END:vb_done_entry_realsmith_lHjbR1Crz5*/;
/*aft_stmt:17320*/
    /*bef_stmt:17353*/
vb_realsmith_lHjbR1Crz5.vb2_queue_realsmith_lHjbR1Crz5 = /*TAG2:STA*/((int)(realsmith_kEPCOwTyUP((int)(vb_vb2_queue_realsmith_lHjbR1Crz5)+(47), (int)(vb_vb2_queue_realsmith_lHjbR1Crz5)+(2))+(int)(vb_vb2_queue_realsmith_lHjbR1Crz5)-(46))+vb_vb2_queue_realsmith_lHjbR1Crz5)/*TAG2:END:vb_vb2_queue_realsmith_lHjbR1Crz5*/;
/*aft_stmt:17353*/
    struct dt3155_priv_n6FrzL pd_realsmith_lHjbR1Crz5;
    pd_realsmith_lHjbR1Crz5.curr_buf_realsmith_lHjbR1Crz5 = (struct vb2_buffer_n6FrzL *)curr_buf_realsmith_lHjbR1Crz5;
    /*bef_stmt:17440*/
pd_realsmith_lHjbR1Crz5.lock_realsmith_lHjbR1Crz5 = /*TAG3:STA*/((int)(realsmith_proxy_lj3jBQAEck((int)(*lock_realsmith_lHjbR1Crz5)+(-18), (int)(*lock_realsmith_lHjbR1Crz5)+(-26), (int)(*lock_realsmith_lHjbR1Crz5)+(44))+(int)(*lock_realsmith_lHjbR1Crz5)-(27))+*lock_realsmith_lHjbR1Crz5)/*TAG3:END:*lock_realsmith_lHjbR1Crz5*/;
/*aft_stmt:17440*/
    /*bef_stmt:17480*/
pd_realsmith_lHjbR1Crz5.dmaq_realsmith_lHjbR1Crz5 = /*TAG4:STA*/((int)(realsmith_PYSHxEcZDl((int)(*dmaq_realsmith_lHjbR1Crz5)+(-12), (int)(*dmaq_realsmith_lHjbR1Crz5)+(-42))+(int)(*dmaq_realsmith_lHjbR1Crz5)-(6039))+*dmaq_realsmith_lHjbR1Crz5)/*TAG4:END:*dmaq_realsmith_lHjbR1Crz5*/;
/*aft_stmt:17480*/
    pd_realsmith_lHjbR1Crz5.lock_realsmith_lHjbR1Crz5 = 1;
    if (pd_realsmith_lHjbR1Crz5.curr_buf_realsmith_lHjbR1Crz5) {
    } else {
        pd_realsmith_lHjbR1Crz5.curr_buf_realsmith_lHjbR1Crz5 = &vb_realsmith_lHjbR1Crz5;
    }
    pd_realsmith_lHjbR1Crz5.lock_realsmith_lHjbR1Crz5 = 0;
    return pd_realsmith_lHjbR1Crz5.curr_buf_realsmith_lHjbR1Crz5 ? 1 : 0;
}
int realsmith_proxy_0ggrROlPDv(int p_0_v9LyR3A9r7, int p_1_R4GaLuP0q9, int p_2_WZOJAVmG2K, int p_3_oWMRz3hetg, int p_4_QeAD3eCSLt) {
/*bef_stmt:17817*/
/*bef_stmt:17817*/
int proxy_ret_u6D6ero4yQ = realsmith_lHjbR1Crz5(/*TAG5:STA*/((int)(realsmith_kgz1t13FoT((int)(p_0_v9LyR3A9r7)+(34), (int)(p_0_v9LyR3A9r7)+(62))+(int)(p_0_v9LyR3A9r7)-(2))+p_0_v9LyR3A9r7)/*TAG5:END:p_0_v9LyR3A9r7*/, /*TAG6:STA*/((p_1_R4GaLuP0q9) + (g_RWTYM9) - -69)/*TAG6:END:p_1_R4GaLuP0q9*/, &(p_2_WZOJAVmG2K), &(p_3_oWMRz3hetg), &(p_4_QeAD3eCSLt));
g_RWTYM9 = -69 + (p_1_R4GaLuP0q9 - (44));
g_RWTYM9 = -69 + (p_1_R4GaLuP0q9 - (44));
/*aft_stmt:17817*/
/*aft_stmt:17817*/
/*bef_stmt:17827*/
return /*TAG7:STA*/((proxy_ret_u6D6ero4yQ) + (g_AB9GOX[4]) - 8)/*TAG7:END:proxy_ret_u6D6ero4yQ*/;
g_AB9GOX[4] = 8 + (proxy_ret_u6D6ero4yQ - (1));
/*aft_stmt:17827*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_AGAAtveTHw(x) (x)
#define Tag2_realsmith_AGAAtveTHw(x) (x)
#include "stdlib.h"
struct fakelb_phy_HwvaF6 {
    int channel_realsmith_AGAAtveTHw;
    int page_realsmith_AGAAtveTHw;
};
struct ieee802154_hw_HwvaF6 {
    struct fakelb_phy_HwvaF6 *priv_realsmith_AGAAtveTHw;
};
int realsmith_AGAAtveTHw(int page_realsmith_AGAAtveTHw, int channel_realsmith_AGAAtveTHw) {
    struct fakelb_phy_HwvaF6 phy_realsmith_AGAAtveTHw;
    /*bef_stmt:17235*/
phy_realsmith_AGAAtveTHw.page_realsmith_AGAAtveTHw = /*TAG1:STA*/((int)(realsmith_proxy_4woXoOSMSb((int)(page_realsmith_AGAAtveTHw)+(66), (int)(page_realsmith_AGAAtveTHw)+(84), (unsigned long)(page_realsmith_AGAAtveTHw)+(55), (unsigned long)(page_realsmith_AGAAtveTHw)+(-29))+(int)(page_realsmith_AGAAtveTHw)-(9))+page_realsmith_AGAAtveTHw)/*TAG1:END:page_realsmith_AGAAtveTHw*/;
/*aft_stmt:17235*/
    /*bef_stmt:17268*/
phy_realsmith_AGAAtveTHw.channel_realsmith_AGAAtveTHw = /*TAG2:STA*/((int)(realsmith_proxy_0ggrROlPDv((int)(channel_realsmith_AGAAtveTHw)+(-68), (int)(channel_realsmith_AGAAtveTHw)+(-26), (int)(channel_realsmith_AGAAtveTHw)+(-30), (int)(channel_realsmith_AGAAtveTHw)+(-44), (int)(channel_realsmith_AGAAtveTHw)+(-1))+(int)(channel_realsmith_AGAAtveTHw)-(71))+channel_realsmith_AGAAtveTHw)/*TAG2:END:channel_realsmith_AGAAtveTHw*/;
/*aft_stmt:17268*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_BKqR4i4aAm(x) (x)
#define Tag2_realsmith_proxy_BKqR4i4aAm(x) (x)
#define Tag3_realsmith_proxy_BKqR4i4aAm(x) (x)
#define Tag4_realsmith_proxy_BKqR4i4aAm(x) (x)
#include "stdlib.h"
struct dev_archdata_00oNt2 {
    int numa_node_realsmith_4NMwBwtFjo;
    int *op_realsmith_4NMwBwtFjo;
    int *host_controller_realsmith_4NMwBwtFjo;
    int *stc_realsmith_4NMwBwtFjo;
    int *iommu_realsmith_4NMwBwtFjo;
};
int realsmith_4NMwBwtFjo(int *iommu_realsmith_4NMwBwtFjo, int *stc_realsmith_4NMwBwtFjo, int *host_controller_realsmith_4NMwBwtFjo, int *op_realsmith_4NMwBwtFjo, int numa_node_realsmith_4NMwBwtFjo) {
    struct dev_archdata_00oNt2 sd_realsmith_4NMwBwtFjo;
    sd_realsmith_4NMwBwtFjo.iommu_realsmith_4NMwBwtFjo = iommu_realsmith_4NMwBwtFjo;
    sd_realsmith_4NMwBwtFjo.stc_realsmith_4NMwBwtFjo = stc_realsmith_4NMwBwtFjo;
    sd_realsmith_4NMwBwtFjo.host_controller_realsmith_4NMwBwtFjo = host_controller_realsmith_4NMwBwtFjo;
    sd_realsmith_4NMwBwtFjo.op_realsmith_4NMwBwtFjo = op_realsmith_4NMwBwtFjo;
    /*bef_stmt:17371*/
sd_realsmith_4NMwBwtFjo.numa_node_realsmith_4NMwBwtFjo = /*TAG1:STA*/((int)(realsmith_4mo7Fs3gRO((int)(numa_node_realsmith_4NMwBwtFjo)+(-48))+(unsigned int)(numa_node_realsmith_4NMwBwtFjo)-(177))+numa_node_realsmith_4NMwBwtFjo)/*TAG1:END:numa_node_realsmith_4NMwBwtFjo*/;
/*aft_stmt:17371*/
    /*bef_stmt:17403*/
return /*TAG2:STA*/((sd_realsmith_4NMwBwtFjo.numa_node_realsmith_4NMwBwtFjo) + (g_29FPQX) - -16)/*TAG2:END:sd_realsmith_4NMwBwtFjo.numa_node_realsmith_4NMwBwtFjo*/;
g_29FPQX = -16 + (sd_realsmith_4NMwBwtFjo.numa_node_realsmith_4NMwBwtFjo - (51));
/*aft_stmt:17403*/
}
int realsmith_proxy_BKqR4i4aAm(int p_0_Gn02JXEbJL, int p_1_8y3md76o7b, int p_2_1MAwItbHwm, int p_3_nGHJKegviQ, int p_4_TSNpgShbgg) {
/*bef_stmt:17632*/
int proxy_ret_hSJv8Pl1SY = realsmith_4NMwBwtFjo(&(p_0_Gn02JXEbJL), &(p_1_8y3md76o7b), &(p_2_1MAwItbHwm), &(p_3_nGHJKegviQ), /*TAG3:STA*/((p_4_TSNpgShbgg) + (g_IU97RO[1]) - -111)/*TAG3:END:p_4_TSNpgShbgg*/);
g_IU97RO[1] = -111 + (p_4_TSNpgShbgg - (51));
/*aft_stmt:17632*/
/*bef_stmt:17642*/
return Tag4_realsmith_proxy_BKqR4i4aAm(/*int:17644:17644:17642:e*/proxy_ret_hSJv8Pl1SY);
/*aft_stmt:17642*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_EDpB2amwMQ(x) (x)
#define Tag2_realsmith_EDpB2amwMQ(x) (x)
#define Tag3_realsmith_EDpB2amwMQ(x) (x)
#define Tag4_realsmith_EDpB2amwMQ(x) (x)
#define Tag5_realsmith_EDpB2amwMQ(x) (x)
#define Tag6_realsmith_EDpB2amwMQ(x) (x)
#define Tag7_realsmith_EDpB2amwMQ(x) (x)
#include "stdlib.h"
int realsmith_EDpB2amwMQ(unsigned long _arg_realsmith_EDpB2amwMQ, unsigned long current_thread_info_realsmith_EDpB2amwMQ, unsigned long L1_CACHE_BYTES_realsmith_EDpB2amwMQ, unsigned long STACK_SIZE_realsmith_EDpB2amwMQ) {
    unsigned int mpidr_realsmith_EDpB2amwMQ = 0;
    /*bef_stmt:17210*/
unsigned int clusterid_realsmith_EDpB2amwMQ = (/*TAG1:STA*/((mpidr_realsmith_EDpB2amwMQ) + (g_M65HXT) - 43)/*TAG1:END:mpidr_realsmith_EDpB2amwMQ*/ >> 8) & 0xFF;
g_M65HXT = 43 + (mpidr_realsmith_EDpB2amwMQ - (0));
/*aft_stmt:17210*/
    /*bef_stmt:17263*/
void *stack_realsmith_EDpB2amwMQ = (void *)(Tag2_realsmith_EDpB2amwMQ(/*unsigned long:17441:17441:17263:e*/current_thread_info_realsmith_EDpB2amwMQ) + 1);
/*aft_stmt:17263*/
    /*bef_stmt:17356*/
/*bef_stmt:17356*/
stack_realsmith_EDpB2amwMQ = (void *)(((unsigned long)stack_realsmith_EDpB2amwMQ + /*TAG3:STA*/((unsigned long)(realsmith_HMLBolWTWb((int)(L1_CACHE_BYTES_realsmith_EDpB2amwMQ)+(31), (int)(L1_CACHE_BYTES_realsmith_EDpB2amwMQ)+(67), (int)(L1_CACHE_BYTES_realsmith_EDpB2amwMQ)+(86))+(int)(L1_CACHE_BYTES_realsmith_EDpB2amwMQ)-(5))+L1_CACHE_BYTES_realsmith_EDpB2amwMQ)/*TAG3:END:L1_CACHE_BYTES_realsmith_EDpB2amwMQ*/ - 1) & ~(/*TAG4:STA*/((unsigned long)(realsmith_BPrbqG7T7P((int)(L1_CACHE_BYTES_realsmith_EDpB2amwMQ)+(49), (int)(L1_CACHE_BYTES_realsmith_EDpB2amwMQ)+(-1))+(int)(L1_CACHE_BYTES_realsmith_EDpB2amwMQ)-(-17))+L1_CACHE_BYTES_realsmith_EDpB2amwMQ)/*TAG4:END:L1_CACHE_BYTES_realsmith_EDpB2amwMQ*/ - 1));
/*aft_stmt:17356*/
/*aft_stmt:17356*/
    /*bef_stmt:17431*/
/*bef_stmt:17431*/
/*bef_stmt:17431*/
stack_realsmith_EDpB2amwMQ = (void *)((unsigned long)stack_realsmith_EDpB2amwMQ + Tag5_realsmith_EDpB2amwMQ(/*unsigned int:17441:17441:17431:e*/clusterid_realsmith_EDpB2amwMQ) * /*TAG6:STA*/((unsigned long)(realsmith_Az0SDn1HPH((int)(STACK_SIZE_realsmith_EDpB2amwMQ)+(30), (int)(STACK_SIZE_realsmith_EDpB2amwMQ)+(39))+(int)(STACK_SIZE_realsmith_EDpB2amwMQ)-(144))+STACK_SIZE_realsmith_EDpB2amwMQ)/*TAG6:END:STACK_SIZE_realsmith_EDpB2amwMQ*/ + /*TAG7:STA*/((unsigned long)(realsmith_VaENCGomRP((int)(STACK_SIZE_realsmith_EDpB2amwMQ)+(-30), (unsigned long)(STACK_SIZE_realsmith_EDpB2amwMQ)+(13), (int)(STACK_SIZE_realsmith_EDpB2amwMQ)+(-40), (int)(STACK_SIZE_realsmith_EDpB2amwMQ)+(33))+(int)(STACK_SIZE_realsmith_EDpB2amwMQ)-(74))+STACK_SIZE_realsmith_EDpB2amwMQ)/*TAG7:END:STACK_SIZE_realsmith_EDpB2amwMQ*/);
g_BNNLY0[3] = -61 + (clusterid_realsmith_EDpB2amwMQ - (0));
/*aft_stmt:17431*/
/*aft_stmt:17431*/
/*aft_stmt:17431*/
    return 0;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_WY0rFfZ9oo(x) (x)
#define Tag2_realsmith_WY0rFfZ9oo(x) (x)
#define Tag3_realsmith_WY0rFfZ9oo(x) (x)
#define Tag4_realsmith_WY0rFfZ9oo(x) (x)
#define Tag5_realsmith_WY0rFfZ9oo(x) (x)
#include "stdlib.h"
struct gpio_hpd_config_FrVJ8P {
    long delay_on_disconnect_realsmith_WY0rFfZ9oo;
    long delay_on_connect_realsmith_WY0rFfZ9oo;
};
struct gpio_FrVJ8P {
    int dummy_realsmith_WY0rFfZ9oo;
};
struct dc_link_FrVJ8P {
    int is_hpd_filter_disabled_realsmith_WY0rFfZ9oo;
    int ctx_realsmith_WY0rFfZ9oo; // simplified for numeric representation
    int link_id_realsmith_WY0rFfZ9oo; // simplified for numeric representation
};
int realsmith_WY0rFfZ9oo(int link_ctx_realsmith_WY0rFfZ9oo, int link_id_realsmith_WY0rFfZ9oo, int enable_realsmith_WY0rFfZ9oo) {
    struct dc_link_FrVJ8P link_realsmith_WY0rFfZ9oo;
    link_realsmith_WY0rFfZ9oo.is_hpd_filter_disabled_realsmith_WY0rFfZ9oo = 0;
    /*bef_stmt:17334*/
link_realsmith_WY0rFfZ9oo.ctx_realsmith_WY0rFfZ9oo = /*TAG1:STA*/((int)(realsmith_AGAAtveTHw((int)(link_ctx_realsmith_WY0rFfZ9oo)+(-71), (int)(link_ctx_realsmith_WY0rFfZ9oo)+(-11))+(int)(link_ctx_realsmith_WY0rFfZ9oo)-(81))+link_ctx_realsmith_WY0rFfZ9oo)/*TAG1:END:link_ctx_realsmith_WY0rFfZ9oo*/;
/*aft_stmt:17334*/
    /*bef_stmt:17355*/
link_realsmith_WY0rFfZ9oo.link_id_realsmith_WY0rFfZ9oo = /*TAG2:STA*/((int)(realsmith_EDpB2amwMQ((unsigned long)(link_id_realsmith_WY0rFfZ9oo)+(26), (unsigned long)(link_id_realsmith_WY0rFfZ9oo)+(-10), (unsigned long)(link_id_realsmith_WY0rFfZ9oo)+(-18), (unsigned long)(link_id_realsmith_WY0rFfZ9oo)+(34))+(int)(link_id_realsmith_WY0rFfZ9oo)-(23))+link_id_realsmith_WY0rFfZ9oo)/*TAG2:END:link_id_realsmith_WY0rFfZ9oo*/;
/*aft_stmt:17355*/
    struct gpio_FrVJ8P *hpd_realsmith_WY0rFfZ9oo = (struct gpio_FrVJ8P*)(malloc(sizeof(struct gpio_FrVJ8P)));
    /*bef_stmt:17705*/
if (/*TAG3:STA*/((int)(realsmith_proxy_BKqR4i4aAm((int)(enable_realsmith_WY0rFfZ9oo)+(64), (int)(enable_realsmith_WY0rFfZ9oo)+(26), (int)(enable_realsmith_WY0rFfZ9oo)+(-12), (int)(enable_realsmith_WY0rFfZ9oo)+(-47), (int)(enable_realsmith_WY0rFfZ9oo)+(16))+(int)(enable_realsmith_WY0rFfZ9oo)-(86))+enable_realsmith_WY0rFfZ9oo)/*TAG3:END:enable_realsmith_WY0rFfZ9oo*/) {
        link_realsmith_WY0rFfZ9oo.is_hpd_filter_disabled_realsmith_WY0rFfZ9oo = 0;
    } else {
        link_realsmith_WY0rFfZ9oo.is_hpd_filter_disabled_realsmith_WY0rFfZ9oo = 1;
        if (hpd_realsmith_WY0rFfZ9oo) {
            int gpio_open_result_realsmith_WY0rFfZ9oo = 1;
            /*bef_stmt:17657*/
if (Tag4_realsmith_WY0rFfZ9oo(/*int:17692:17701:17657:e*/gpio_open_result_realsmith_WY0rFfZ9oo) == 1) {
                struct gpio_hpd_config_FrVJ8P config_realsmith_WY0rFfZ9oo;
                config_realsmith_WY0rFfZ9oo.delay_on_connect_realsmith_WY0rFfZ9oo = 0;
                config_realsmith_WY0rFfZ9oo.delay_on_disconnect_realsmith_WY0rFfZ9oo = 0;
                (free(hpd_realsmith_WY0rFfZ9oo));
            } else {
            }
/*aft_stmt:17657*/
            (free(hpd_realsmith_WY0rFfZ9oo));
        }
    }
/*aft_stmt:17705*/
    /*bef_stmt:17724*/
return /*TAG5:STA*/((link_realsmith_WY0rFfZ9oo.is_hpd_filter_disabled_realsmith_WY0rFfZ9oo) + (g_031K19) - -65)/*TAG5:END:link_realsmith_WY0rFfZ9oo.is_hpd_filter_disabled_realsmith_WY0rFfZ9oo*/;
g_031K19 = -65 + (link_realsmith_WY0rFfZ9oo.is_hpd_filter_disabled_realsmith_WY0rFfZ9oo - (0));
/*aft_stmt:17724*/
}


#include <stdio.h>
#include <inttypes.h>
int main() {
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    transparent_crc(realsmith_kpoDErHANy(78,15,23), "realsmith_kpoDErHANy(78,15,23)", print_hash_value);
    transparent_crc(realsmith_ZEAqHMoAbs(55), "realsmith_ZEAqHMoAbs(55)", print_hash_value);
    transparent_crc(realsmith_S5SF8pFI0o(47,98,85,42), "realsmith_S5SF8pFI0o(47,98,85,42)", print_hash_value);
    transparent_crc(realsmith_WHp2E1XwVt(100), "realsmith_WHp2E1XwVt(100)", print_hash_value);
    transparent_crc(realsmith_qD06Jz8Yyq(49,71,27,24,4,5), "realsmith_qD06Jz8Yyq(49,71,27,24,4,5)", print_hash_value);
    transparent_crc(realsmith_4R910UCi0B(76,80,26), "realsmith_4R910UCi0B(76,80,26)", print_hash_value);
    transparent_crc(realsmith_TFu3SGb5A5(0,4,3), "realsmith_TFu3SGb5A5(0,4,3)", print_hash_value);
    transparent_crc(realsmith_lkzCqFLRCE(52,67), "realsmith_lkzCqFLRCE(52,67)", print_hash_value);
    transparent_crc(realsmith_yqAjswVc5S(0), "realsmith_yqAjswVc5S(0)", print_hash_value);
    transparent_crc(realsmith_L8Ok8dXtds(55,58), "realsmith_L8Ok8dXtds(55,58)", print_hash_value);
    transparent_crc(realsmith_proxy_ceIJJ8HUAq(24,39), "realsmith_proxy_ceIJJ8HUAq(24,39)", print_hash_value);
    transparent_crc(realsmith_wI4dVhZ08s(94,10), "realsmith_wI4dVhZ08s(94,10)", print_hash_value);
    transparent_crc(realsmith_IXUJN03bKO(68,66), "realsmith_IXUJN03bKO(68,66)", print_hash_value);
    transparent_crc(realsmith_ARAygoHdy4(15), "realsmith_ARAygoHdy4(15)", print_hash_value);
    transparent_crc(realsmith_ui2hAcmSHk(98), "realsmith_ui2hAcmSHk(98)", print_hash_value);
    transparent_crc(realsmith_EIkhbRjY6h(30), "realsmith_EIkhbRjY6h(30)", print_hash_value);
    transparent_crc(realsmith_p58WDWK3Dv(63,38,94,27,48), "realsmith_p58WDWK3Dv(63,38,94,27,48)", print_hash_value);
    transparent_crc(realsmith_LEZwrGUMPg(85), "realsmith_LEZwrGUMPg(85)", print_hash_value);
    transparent_crc(realsmith_cpXBRcohrm(15,65), "realsmith_cpXBRcohrm(15,65)", print_hash_value);
    transparent_crc(realsmith_YfmIwP1ViK(9,54,87,27,83,2), "realsmith_YfmIwP1ViK(9,54,87,27,83,2)", print_hash_value);
    transparent_crc(realsmith_2DNFs2yXPC(99,100,75), "realsmith_2DNFs2yXPC(99,100,75)", print_hash_value);
    transparent_crc(realsmith_FHVW4XG2u5(16,78,100,0,5,70,51,60), "realsmith_FHVW4XG2u5(16,78,100,0,5,70,51,60)", print_hash_value);
    transparent_crc(realsmith_SNj7c60ezP(46,42,44), "realsmith_SNj7c60ezP(46,42,44)", print_hash_value);
    transparent_crc(realsmith_gNgjRoXB4n(66,36,48,75,80), "realsmith_gNgjRoXB4n(66,36,48,75,80)", print_hash_value);
    transparent_crc(realsmith_9HFyauslgm(90,80), "realsmith_9HFyauslgm(90,80)", print_hash_value);
    transparent_crc(realsmith_a259zkbsjW(58), "realsmith_a259zkbsjW(58)", print_hash_value);
    transparent_crc(realsmith_Sy2gx9OyRC(74), "realsmith_Sy2gx9OyRC(74)", print_hash_value);
    transparent_crc(realsmith_proxy_536zPMgUzU(18,41,68,44,-25,-60), "realsmith_proxy_536zPMgUzU(18,41,68,44,-25,-60)", print_hash_value);
    transparent_crc(realsmith_hwRdfbxV8r(56,77), "realsmith_hwRdfbxV8r(56,77)", print_hash_value);
    transparent_crc(realsmith_mUM0Uy14Ct(15), "realsmith_mUM0Uy14Ct(15)", print_hash_value);
    transparent_crc(realsmith_N0WF4C7OUM(37,57), "realsmith_N0WF4C7OUM(37,57)", print_hash_value);
    transparent_crc(realsmith_gx2zLD7xy6(12,2), "realsmith_gx2zLD7xy6(12,2)", print_hash_value);
    transparent_crc(realsmith_aES9KBDxYW(11,36,19,14,55,52,58,98,8), "realsmith_aES9KBDxYW(11,36,19,14,55,52,58,98,8)", print_hash_value);
    transparent_crc(realsmith_VLspaOIS7v(63,43,67), "realsmith_VLspaOIS7v(63,43,67)", print_hash_value);
    transparent_crc(realsmith_mUM0Uy14Ct(15), "realsmith_mUM0Uy14Ct(15)", print_hash_value);
    transparent_crc(realsmith_kEPCOwTyUP(91,46), "realsmith_kEPCOwTyUP(91,46)", print_hash_value);
    transparent_crc(realsmith_lkzCqFLRCE(52,67), "realsmith_lkzCqFLRCE(52,67)", print_hash_value);
    transparent_crc(realsmith_zpmh8uYFYq(47,54,24,55), "realsmith_zpmh8uYFYq(47,54,24,55)", print_hash_value);
    transparent_crc(realsmith_GA08X0OvNK(15,75), "realsmith_GA08X0OvNK(15,75)", print_hash_value);
    transparent_crc(realsmith_5OxSsmQtWj(19), "realsmith_5OxSsmQtWj(19)", print_hash_value);
    transparent_crc(realsmith_peU2qW2inI(73,47,80), "realsmith_peU2qW2inI(73,47,80)", print_hash_value);
    transparent_crc(realsmith_hcQLqcTCWi(42,63), "realsmith_hcQLqcTCWi(42,63)", print_hash_value);
    transparent_crc(realsmith_tNncPliOQh(67,82,74), "realsmith_tNncPliOQh(67,82,74)", print_hash_value);
    transparent_crc(realsmith_VySxaUYb3o(5,31), "realsmith_VySxaUYb3o(5,31)", print_hash_value);
    transparent_crc(realsmith_pNmPAZZf2k(73), "realsmith_pNmPAZZf2k(73)", print_hash_value);
    transparent_crc(realsmith_9I0rlwOh2x(46,73), "realsmith_9I0rlwOh2x(46,73)", print_hash_value);
    transparent_crc(realsmith_3TunKxO0Qt(83,66), "realsmith_3TunKxO0Qt(83,66)", print_hash_value);
    transparent_crc(realsmith_gx2zLD7xy6(12,2), "realsmith_gx2zLD7xy6(12,2)", print_hash_value);
    transparent_crc(realsmith_V3DUkljPWG(5,4), "realsmith_V3DUkljPWG(5,4)", print_hash_value);
    transparent_crc(realsmith_tQMw8j10qH(64), "realsmith_tQMw8j10qH(64)", print_hash_value);
    transparent_crc(realsmith_xwXvgQRxuN(45), "realsmith_xwXvgQRxuN(45)", print_hash_value);
    transparent_crc(realsmith_x0UJZRlSUs(13,68,12), "realsmith_x0UJZRlSUs(13,68,12)", print_hash_value);
    transparent_crc(realsmith_zshlwVOOgA(57,3,2), "realsmith_zshlwVOOgA(57,3,2)", print_hash_value);
    transparent_crc(realsmith_proxy_6LkI8viVBJ(0,0,-5,2), "realsmith_proxy_6LkI8viVBJ(0,0,-5,2)", print_hash_value);
    transparent_crc(realsmith_1rOdRqRYr6(11,25,60), "realsmith_1rOdRqRYr6(11,25,60)", print_hash_value);
    transparent_crc(realsmith_proxy_uLKuhMMcyS(11,84,-81,-61), "realsmith_proxy_uLKuhMMcyS(11,84,-81,-61)", print_hash_value);
    transparent_crc(realsmith_jRcco0OwVW(36,74,73), "realsmith_jRcco0OwVW(36,74,73)", print_hash_value);
    transparent_crc(realsmith_1rOdRqRYr6(11,25,60), "realsmith_1rOdRqRYr6(11,25,60)", print_hash_value);
    transparent_crc(realsmith_h6c6rl9ZuP(85,16,31), "realsmith_h6c6rl9ZuP(85,16,31)", print_hash_value);
    transparent_crc(realsmith_1rOdRqRYr6(11,25,60), "realsmith_1rOdRqRYr6(11,25,60)", print_hash_value);
    transparent_crc(realsmith_nEprYxvNMh(35), "realsmith_nEprYxvNMh(35)", print_hash_value);
    transparent_crc(realsmith_EIkhbRjY6h(30), "realsmith_EIkhbRjY6h(30)", print_hash_value);
    transparent_crc(realsmith_zshlwVOOgA(57,3,2), "realsmith_zshlwVOOgA(57,3,2)", print_hash_value);
    transparent_crc(realsmith_dttm6DVIwy(44,74,75,91), "realsmith_dttm6DVIwy(44,74,75,91)", print_hash_value);
    transparent_crc(realsmith_proxy_mrmj0K4zHh(1,28,24,-22), "realsmith_proxy_mrmj0K4zHh(1,28,24,-22)", print_hash_value);
    transparent_crc(realsmith_proxy_0ggrROlPDv(2,44,40,26,69), "realsmith_proxy_0ggrROlPDv(2,44,40,26,69)", print_hash_value);
    transparent_crc(realsmith_IXUJN03bKO(68,66), "realsmith_IXUJN03bKO(68,66)", print_hash_value);
    transparent_crc(realsmith_Az0SDn1HPH(87,96), "realsmith_Az0SDn1HPH(87,96)", print_hash_value);
    transparent_crc(realsmith_ZYa1zxxdXz(14,21,77,93,94), "realsmith_ZYa1zxxdXz(14,21,77,93,94)", print_hash_value);
    transparent_crc(realsmith_proxy_BKqR4i4aAm(99,61,23,-12,51), "realsmith_proxy_BKqR4i4aAm(99,61,23,-12,51)", print_hash_value);
    transparent_crc(realsmith_EDpB2amwMQ(49,13,5,57), "realsmith_EDpB2amwMQ(49,13,5,57)", print_hash_value);
    transparent_crc(realsmith_FdftomAEVd(44,0,15), "realsmith_FdftomAEVd(44,0,15)", print_hash_value);
    transparent_crc(realsmith_proxy_lsStlIV4U0(97,85,-33,-35,-6), "realsmith_proxy_lsStlIV4U0(97,85,-33,-35,-6)", print_hash_value);
    transparent_crc(realsmith_proxy_lsStlIV4U0(97,85,-33,-35,-6), "realsmith_proxy_lsStlIV4U0(97,85,-33,-35,-6)", print_hash_value);
    transparent_crc(realsmith_8M14yp7yEn(17,66), "realsmith_8M14yp7yEn(17,66)", print_hash_value);
    transparent_crc(realsmith_PYSHxEcZDl(57,27), "realsmith_PYSHxEcZDl(57,27)", print_hash_value);
    transparent_crc(realsmith_proxy_mrmj0K4zHh(1,28,24,-22), "realsmith_proxy_mrmj0K4zHh(1,28,24,-22)", print_hash_value);
    transparent_crc(realsmith_kgz1t13FoT(36,64), "realsmith_kgz1t13FoT(36,64)", print_hash_value);
    transparent_crc(realsmith_FdftomAEVd(44,0,15), "realsmith_FdftomAEVd(44,0,15)", print_hash_value);
    transparent_crc(realsmith_kEPCOwTyUP(91,46), "realsmith_kEPCOwTyUP(91,46)", print_hash_value);
    transparent_crc(realsmith_PYSHxEcZDl(57,27), "realsmith_PYSHxEcZDl(57,27)", print_hash_value);
    transparent_crc(realsmith_BFOuNa5Wko(87), "realsmith_BFOuNa5Wko(87)", print_hash_value);
    transparent_crc(realsmith_AGAAtveTHw(10,70), "realsmith_AGAAtveTHw(10,70)", print_hash_value);
    transparent_crc(realsmith_kEPCOwTyUP(91,46), "realsmith_kEPCOwTyUP(91,46)", print_hash_value);
    transparent_crc(realsmith_kEPCOwTyUP(91,46), "realsmith_kEPCOwTyUP(91,46)", print_hash_value);
    transparent_crc(realsmith_proxy_BKqR4i4aAm(99,61,23,-12,51), "realsmith_proxy_BKqR4i4aAm(99,61,23,-12,51)", print_hash_value);
    transparent_crc(realsmith_proxy_0ggrROlPDv(2,44,40,26,69), "realsmith_proxy_0ggrROlPDv(2,44,40,26,69)", print_hash_value);
    transparent_crc(realsmith_AGAAtveTHw(10,70), "realsmith_AGAAtveTHw(10,70)", print_hash_value);
    transparent_crc(realsmith_WY0rFfZ9oo(81,23,35), "realsmith_WY0rFfZ9oo(81,23,35)", print_hash_value);
    transparent_crc(g_29FPQX, "g_29FPQX", print_hash_value);
    for (int i = 0; i < 4; i++) transparent_crc(g_BNNLY0[i], "g_BNNLY0[i]", print_hash_value);
    transparent_crc(g_R4L6DT, "g_R4L6DT", print_hash_value);
    for (int i = 0; i < 6; i++) transparent_crc(g_MW3YJP[i], "g_MW3YJP[i]", print_hash_value);
    transparent_crc(g_RWTYM9, "g_RWTYM9", print_hash_value);
    transparent_crc(g_031K19, "g_031K19", print_hash_value);
    for (int i = 0; i < 3; i++) transparent_crc(g_IU97RO[i], "g_IU97RO[i]", print_hash_value);
    for (int i = 0; i < 5; i++) transparent_crc(g_AB9GOX[i], "g_AB9GOX[i]", print_hash_value);
    transparent_crc(g_M65HXT, "g_M65HXT", print_hash_value);
    transparent_crc(g_B4USED, "g_B4USED", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-11902be7a57c0ccf03786aa0255fffaf0f54dbf9/bin/gcc -O0 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-11902be7a57c0ccf03786aa0255fffaf0f54dbf9/bin/gcc -O0 -fno-strict-aliasing : B0A3DAFA */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-11902be7a57c0ccf03786aa0255fffaf0f54dbf9/bin/gcc -O1 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-11902be7a57c0ccf03786aa0255fffaf0f54dbf9/bin/gcc -O1 -fno-strict-aliasing : B0A3DAFA */
/* Compiler crash! Can't compile with /zdata/shaoli/compilers/ccbuilder-compilers/gcc-11902be7a57c0ccf03786aa0255fffaf0f54dbf9/bin/gcc -O2 -fno-strict-aliasing  */
