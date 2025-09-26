/* -----Global Variables----- */
 int g_VM98LIHMVN = -40;
 int g_RBJW6LVO3D[1] = {111};
static int g_L4QDEB2QT6[7] = {6, -36, -82, -54, -67, 115, 124};
 int g_B5TPP9ATAI[5] = {22, -7, 62, -77, -95};
static int g_D3IF6ZRPRU = -48;
static int g_E0LDIZLC4J[6] = {121, -88, -8, 49, -46, -87};
static int g_3V2EF7K0FR = -124;
static int g_YGD66QEDS3[8] = {-46, -92, -128, -123, -62, 79, -81, 11};
 int g_6UB1K6IRAF[6] = {-65, -107, 124, -120, 108, 101};
 int g_XDT309ENSG[6] = {16, -122, -78, 102, -111, -103};

/* -----Synthesized Function----- */
#include <csmith.h>
#include "stdlib.h"
int realsmith_vthKuKFr6m(const unsigned char *px_realsmith_vthKuKFr6m, int length_realsmith_vthKuKFr6m, char *buf_realsmith_vthKuKFr6m, int buf_len_realsmith_vthKuKFr6m) {
    int i_realsmith_vthKuKFr6m = 0;
    int offset_realsmith_vthKuKFr6m = 0;
    for (i_realsmith_vthKuKFr6m = 0; i_realsmith_vthKuKFr6m < length_realsmith_vthKuKFr6m; i_realsmith_vthKuKFr6m++) {
        unsigned char c_realsmith_vthKuKFr6m = px_realsmith_vthKuKFr6m[i_realsmith_vthKuKFr6m];
        if ((c_realsmith_vthKuKFr6m >= 32 && c_realsmith_vthKuKFr6m <= 126) && c_realsmith_vthKuKFr6m != '<' && c_realsmith_vthKuKFr6m != '>' && c_realsmith_vthKuKFr6m != '&' && c_realsmith_vthKuKFr6m != '\\' && c_realsmith_vthKuKFr6m != '\"' && c_realsmith_vthKuKFr6m != '\'') {
            if (offset_realsmith_vthKuKFr6m + 2 < buf_len_realsmith_vthKuKFr6m)
                buf_realsmith_vthKuKFr6m[offset_realsmith_vthKuKFr6m++] = px_realsmith_vthKuKFr6m[i_realsmith_vthKuKFr6m];
        } else {
            if (offset_realsmith_vthKuKFr6m + 5 < buf_len_realsmith_vthKuKFr6m) {
                buf_realsmith_vthKuKFr6m[offset_realsmith_vthKuKFr6m++] = '\\';
                buf_realsmith_vthKuKFr6m[offset_realsmith_vthKuKFr6m++] = 'x';
                buf_realsmith_vthKuKFr6m[offset_realsmith_vthKuKFr6m++] = "0123456789abcdef"[px_realsmith_vthKuKFr6m[i_realsmith_vthKuKFr6m] >> 4];
                buf_realsmith_vthKuKFr6m[offset_realsmith_vthKuKFr6m++] = "0123456789abcdef"[px_realsmith_vthKuKFr6m[i_realsmith_vthKuKFr6m] & 0xF];
            }
        }
    }
    buf_realsmith_vthKuKFr6m[offset_realsmith_vthKuKFr6m] = '\0';
    return offset_realsmith_vthKuKFr6m;
}
int realsmith_proxy_f5WUZo1sCx(unsigned char p_0_3XohZwoRYT, int p_1_GWwQPjQVGz, char p_2_gZtnlhSUxw, int p_3_hUhcjRLaO1) {
unsigned char proxy_ajZ0mDgi1u[19] = { p_0_3XohZwoRYT, 19, 22, 63, 30, p_0_3XohZwoRYT, p_0_3XohZwoRYT, 60, p_0_3XohZwoRYT, 3, p_0_3XohZwoRYT, 95, p_0_3XohZwoRYT, 56, 72, 54, p_0_3XohZwoRYT, 89, p_0_3XohZwoRYT };
char proxy_CnA8lxcaTg[15] = { p_2_gZtnlhSUxw, p_2_gZtnlhSUxw, p_2_gZtnlhSUxw, p_2_gZtnlhSUxw, p_2_gZtnlhSUxw, p_2_gZtnlhSUxw, p_2_gZtnlhSUxw, 14, 63, 9, 84, p_2_gZtnlhSUxw, 22, p_2_gZtnlhSUxw, p_2_gZtnlhSUxw };
int proxy_ret_UFoPqsAIkZ = realsmith_vthKuKFr6m(proxy_ajZ0mDgi1u, p_1_GWwQPjQVGz, proxy_CnA8lxcaTg, p_3_hUhcjRLaO1);
return proxy_ret_UFoPqsAIkZ;
}


#include "stdlib.h"
int realsmith_xQv4rHvWKY(int ch_mostat_realsmith_xQv4rHvWKY, int ch_flags_realsmith_xQv4rHvWKY, int *neo_uart_realsmith_xQv4rHvWKY) {
    unsigned char ier_realsmith_xQv4rHvWKY = 0;
    unsigned char efr_realsmith_xQv4rHvWKY = 0;
    unsigned char fcr_realsmith_xQv4rHvWKY = 0;
    unsigned char lsr_realsmith_xQv4rHvWKY, msr_realsmith_xQv4rHvWKY, txrx_realsmith_xQv4rHvWKY;
    neo_uart_realsmith_xQv4rHvWKY[0] = ier_realsmith_xQv4rHvWKY;
    neo_uart_realsmith_xQv4rHvWKY[1] = efr_realsmith_xQv4rHvWKY;
    efr_realsmith_xQv4rHvWKY |= 0x10;
    neo_uart_realsmith_xQv4rHvWKY[1] = efr_realsmith_xQv4rHvWKY;
    txrx_realsmith_xQv4rHvWKY = neo_uart_realsmith_xQv4rHvWKY[5];
    fcr_realsmith_xQv4rHvWKY = 0x07;
    neo_uart_realsmith_xQv4rHvWKY[3] = fcr_realsmith_xQv4rHvWKY;
    lsr_realsmith_xQv4rHvWKY = neo_uart_realsmith_xQv4rHvWKY[2];
    msr_realsmith_xQv4rHvWKY = neo_uart_realsmith_xQv4rHvWKY[4];
    ch_flags_realsmith_xQv4rHvWKY |= 0x01;
    neo_uart_realsmith_xQv4rHvWKY[6] = ch_mostat_realsmith_xQv4rHvWKY;
    return ch_flags_realsmith_xQv4rHvWKY;
}
int realsmith_proxy_GoBCfmQ6qC(int p_0_znWf6cuIWZ, int p_1_OozNVgPFcG, int p_2_vuz646CUUP) {
int proxy_hvWZWvJ1Ae[12] = { p_2_vuz646CUUP, p_2_vuz646CUUP, p_2_vuz646CUUP, 17, p_2_vuz646CUUP, p_2_vuz646CUUP, 68, p_2_vuz646CUUP, 86, 58, p_2_vuz646CUUP, p_2_vuz646CUUP };
int proxy_ret_UDrdd999dT = realsmith_xQv4rHvWKY(p_0_znWf6cuIWZ, p_1_OozNVgPFcG, proxy_hvWZWvJ1Ae);
return proxy_ret_UDrdd999dT;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_5U5FxQxF4N(x) (x)
#define Tag2_realsmith_5U5FxQxF4N(x) (x)
#define Tag3_realsmith_5U5FxQxF4N(x) (x)
#include "stdlib.h"
int realsmith_5U5FxQxF4N(int has_pml_realsmith_5U5FxQxF4N, int has_ept_realsmith_5U5FxQxF4N, unsigned long pml_address_realsmith_5U5FxQxF4N) {
    /*bef_stmt:17135*/
if (!Tag1_realsmith_5U5FxQxF4N(/*int:17190:17190:17135:e*/has_pml_realsmith_5U5FxQxF4N))
        return 0;
/*aft_stmt:17135*/
    /*bef_stmt:17180*/
/*bef_stmt:17180*/
if (!Tag2_realsmith_5U5FxQxF4N(/*int:17190:17190:17180:e*/has_ept_realsmith_5U5FxQxF4N) || Tag3_realsmith_5U5FxQxF4N(/*unsigned long:17190:17190:17180:e*/pml_address_realsmith_5U5FxQxF4N) == 0)
        return -22;
/*aft_stmt:17180*/
/*aft_stmt:17180*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_XFAy66QWpB(x) (x)
#include "stdlib.h"
int realsmith_XFAy66QWpB(int dir_type_realsmith_XFAy66QWpB) {
    /*bef_stmt:17081*/
switch (Tag1_realsmith_XFAy66QWpB(/*int:17209:17209:17081:e*/dir_type_realsmith_XFAy66QWpB)) {
        case 130:
        case 132:
        case 131:
        case 136:
        case 135:
        case 129:
        case 128:
        case 134:
        case 133:
            return 1;
    }
/*aft_stmt:17081*/
    return 0;
}



#include "stdlib.h"
int realsmith_U9y7wri3Kw(unsigned long *bitmap_realsmith_U9y7wri3Kw, unsigned int start_realsmith_U9y7wri3Kw, unsigned int end_realsmith_U9y7wri3Kw, unsigned int width_realsmith_U9y7wri3Kw) {
    unsigned int pos_realsmith_U9y7wri3Kw;
    int i_realsmith_U9y7wri3Kw;
    for (pos_realsmith_U9y7wri3Kw = start_realsmith_U9y7wri3Kw; pos_realsmith_U9y7wri3Kw < end_realsmith_U9y7wri3Kw + 1; pos_realsmith_U9y7wri3Kw = (pos_realsmith_U9y7wri3Kw + width_realsmith_U9y7wri3Kw - 1) / width_realsmith_U9y7wri3Kw * width_realsmith_U9y7wri3Kw) {
        unsigned int next_zero_realsmith_U9y7wri3Kw = pos_realsmith_U9y7wri3Kw;
        while (next_zero_realsmith_U9y7wri3Kw <= end_realsmith_U9y7wri3Kw && (bitmap_realsmith_U9y7wri3Kw[next_zero_realsmith_U9y7wri3Kw / (sizeof(unsigned long) * 8)] & (1UL << (next_zero_realsmith_U9y7wri3Kw % (sizeof(unsigned long) * 8))) ) ) {
            next_zero_realsmith_U9y7wri3Kw++;
        }
        pos_realsmith_U9y7wri3Kw = next_zero_realsmith_U9y7wri3Kw;
        if (pos_realsmith_U9y7wri3Kw + width_realsmith_U9y7wri3Kw > end_realsmith_U9y7wri3Kw + 1)
            break;
        if (pos_realsmith_U9y7wri3Kw & (width_realsmith_U9y7wri3Kw - 1))
            continue;
        for (i_realsmith_U9y7wri3Kw = 1; i_realsmith_U9y7wri3Kw < width_realsmith_U9y7wri3Kw && !(bitmap_realsmith_U9y7wri3Kw[(pos_realsmith_U9y7wri3Kw + i_realsmith_U9y7wri3Kw) / (sizeof(unsigned long) * 8)] & (1UL << ((pos_realsmith_U9y7wri3Kw + i_realsmith_U9y7wri3Kw) % (sizeof(unsigned long) * 8)))); i_realsmith_U9y7wri3Kw++)
            ;
        if (i_realsmith_U9y7wri3Kw == width_realsmith_U9y7wri3Kw)
            return pos_realsmith_U9y7wri3Kw;
        pos_realsmith_U9y7wri3Kw += i_realsmith_U9y7wri3Kw;
    }
    return -1;
}
int realsmith_proxy_wIbmKhoaaj(unsigned long p_0_g3FfylwsEM, unsigned int p_1_mPFVbRus6f, unsigned int p_2_pFQNWwnVMQ, unsigned int p_3_gDfAV862u3) {
unsigned long proxy_dw0ZMYoplc[14] = { p_0_g3FfylwsEM, p_0_g3FfylwsEM, p_0_g3FfylwsEM, p_0_g3FfylwsEM, 72, 100, p_0_g3FfylwsEM, p_0_g3FfylwsEM, p_0_g3FfylwsEM, 3, 72, p_0_g3FfylwsEM, 26, p_0_g3FfylwsEM };
int proxy_ret_iXvE7QnanT = realsmith_U9y7wri3Kw(proxy_dw0ZMYoplc, p_1_mPFVbRus6f, p_2_pFQNWwnVMQ, p_3_gDfAV862u3);
return proxy_ret_iXvE7QnanT;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Ifl4XEcClT(x) (x)
#define Tag2_realsmith_Ifl4XEcClT(x) (x)
#include "stdlib.h"
int realsmith_Ifl4XEcClT(int file_ptr_realsmith_Ifl4XEcClT, int fh_ptr_realsmith_Ifl4XEcClT, int fmt_pix_mp_realsmith_Ifl4XEcClT) {
    struct {
        int pix_mp_realsmith_Ifl4XEcClT;
    } f_realsmith_Ifl4XEcClT;
    /*bef_stmt:17201*/
f_realsmith_Ifl4XEcClT.pix_mp_realsmith_Ifl4XEcClT = Tag1_realsmith_Ifl4XEcClT(/*int:17324:17324:17201:e*/fmt_pix_mp_realsmith_Ifl4XEcClT);
/*aft_stmt:17201*/
    struct {
        int format_realsmith_Ifl4XEcClT;
    } q_realsmith_Ifl4XEcClT;
    /*bef_stmt:17303*/
q_realsmith_Ifl4XEcClT.format_realsmith_Ifl4XEcClT = Tag2_realsmith_Ifl4XEcClT(/*int:17324:17324:17303:e*/f_realsmith_Ifl4XEcClT.pix_mp_realsmith_Ifl4XEcClT);
/*aft_stmt:17303*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_C3PgSfdddH(x) (x)
#define Tag2_realsmith_C3PgSfdddH(x) (x)
#include "stdlib.h"
int realsmith_C3PgSfdddH(int str_length_realsmith_C3PgSfdddH) {
    const int BIGCHAR_WIDTH_realsmith_C3PgSfdddH = 8;
    /*bef_stmt:17126*/
/*bef_stmt:17126*/
return Tag1_realsmith_C3PgSfdddH(/*int:17128:17128:17126:e*/str_length_realsmith_C3PgSfdddH) * Tag2_realsmith_C3PgSfdddH(/*const int:17128:17128:17126:e*/BIGCHAR_WIDTH_realsmith_C3PgSfdddH);
/*aft_stmt:17126*/
/*aft_stmt:17126*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_jhj2KrYVBW(x) (x)
#define Tag2_realsmith_proxy_jhj2KrYVBW(x) (x)
#define Tag3_realsmith_proxy_jhj2KrYVBW(x) (x)
#define Tag4_realsmith_proxy_jhj2KrYVBW(x) (x)
#define Tag5_realsmith_proxy_jhj2KrYVBW(x) (x)
#define Tag6_realsmith_proxy_jhj2KrYVBW(x) (x)
#define Tag7_realsmith_proxy_jhj2KrYVBW(x) (x)
#define Tag8_realsmith_proxy_jhj2KrYVBW(x) (x)
#define Tag9_realsmith_proxy_jhj2KrYVBW(x) (x)
#define Tag10_realsmith_proxy_jhj2KrYVBW(x) (x)
#define Tag11_realsmith_proxy_jhj2KrYVBW(x) (x)
#define Tag12_realsmith_proxy_jhj2KrYVBW(x) (x)
#include "stdlib.h"
int realsmith_6g7SSsu8mR(int mode_realsmith_6g7SSsu8mR, int protocol_realsmith_6g7SSsu8mR, int lwtstate_realsmith_6g7SSsu8mR, int mac_len_realsmith_6g7SSsu8mR, int len_realsmith_6g7SSsu8mR, int *srh_realsmith_6g7SSsu8mR, int *payload_len_realsmith_6g7SSsu8mR) {
    int proto_realsmith_6g7SSsu8mR, err_realsmith_6g7SSsu8mR = 0;
    /*bef_stmt:17244*/
switch (Tag1_realsmith_proxy_jhj2KrYVBW(/*int:17465:17465:17244:e*/mode_realsmith_6g7SSsu8mR)) {
    /*bef_stmt:17256*/
case 1:
        if (Tag2_realsmith_proxy_jhj2KrYVBW(/*int:17465:17465:17256:e*/protocol_realsmith_6g7SSsu8mR) != 0x86DD)
            return -22;
/*aft_stmt:17256*/
        break;
    /*bef_stmt:17297*/
/*bef_stmt:17297*/
case 2:
        if (Tag3_realsmith_proxy_jhj2KrYVBW(/*int:17465:17465:17297:e*/protocol_realsmith_6g7SSsu8mR) == 0x86DD)
            proto_realsmith_6g7SSsu8mR = 41;
        else if (Tag4_realsmith_proxy_jhj2KrYVBW(/*int:17465:17465:17297:e*/protocol_realsmith_6g7SSsu8mR) == 0x0800)
            proto_realsmith_6g7SSsu8mR = 4;
        else
            return -22;
/*aft_stmt:17297*/
/*aft_stmt:17297*/
        break;
    /*bef_stmt:17385*/
case 3:
        if (Tag5_realsmith_proxy_jhj2KrYVBW(/*int:17465:17465:17385:e*/mac_len_realsmith_6g7SSsu8mR) <= 0)
            return -22;
/*aft_stmt:17385*/
        break;
    }
/*aft_stmt:17244*/
    /*bef_stmt:17455*/
*payload_len_realsmith_6g7SSsu8mR = Tag6_realsmith_proxy_jhj2KrYVBW(/*int:17465:17465:17455:e*/len_realsmith_6g7SSsu8mR) - 40;
/*aft_stmt:17455*/
    return 0;
}
int realsmith_proxy_jhj2KrYVBW(int p_0_Lgu1TpLLZo, int p_1_aUzbj07Y7q, int p_2_bJMVBdFRly, int p_3_MfAN65AC5G, int p_4_Dc6Kbx4e2B, int p_5_pdkpgr3Fie, int p_6_4p1V3iCxDZ) {
/*bef_stmt:17738*/
/*bef_stmt:17738*/
/*bef_stmt:17738*/
/*bef_stmt:17738*/
/*bef_stmt:17738*/
int proxy_ret_pf8bpopeGh = realsmith_6g7SSsu8mR(Tag7_realsmith_proxy_jhj2KrYVBW(/*int:17750:17750:17738:e*/p_0_Lgu1TpLLZo), Tag8_realsmith_proxy_jhj2KrYVBW(/*int:17750:17750:17738:e*/p_1_aUzbj07Y7q), Tag9_realsmith_proxy_jhj2KrYVBW(/*int:17750:17750:17738:e*/p_2_bJMVBdFRly), Tag10_realsmith_proxy_jhj2KrYVBW(/*int:17750:17750:17738:e*/p_3_MfAN65AC5G), Tag11_realsmith_proxy_jhj2KrYVBW(/*int:17750:17750:17738:e*/p_4_Dc6Kbx4e2B), &(p_5_pdkpgr3Fie), &(p_6_4p1V3iCxDZ));
/*aft_stmt:17738*/
/*aft_stmt:17738*/
/*aft_stmt:17738*/
/*aft_stmt:17738*/
/*aft_stmt:17738*/
/*bef_stmt:17748*/
return Tag12_realsmith_proxy_jhj2KrYVBW(/*int:17750:17750:17748:e*/proxy_ret_pf8bpopeGh);
/*aft_stmt:17748*/
}




#include "stdlib.h"
int realsmith_lEQ1ob4KQt(int tags_size_realsmith_lEQ1ob4KQt, unsigned long tag_realsmith_lEQ1ob4KQt) {
    unsigned long *bitmap_realsmith_lEQ1ob4KQt = (unsigned long *)(malloc(tags_size_realsmith_lEQ1ob4KQt * sizeof(unsigned long)));
    if (bitmap_realsmith_lEQ1ob4KQt == ((void*)0)) return -1;
    for (int i_realsmith_lEQ1ob4KQt = 0; i_realsmith_lEQ1ob4KQt < tags_size_realsmith_lEQ1ob4KQt; i_realsmith_lEQ1ob4KQt++) {
        bitmap_realsmith_lEQ1ob4KQt[i_realsmith_lEQ1ob4KQt] = 0;
    }
    if (tag_realsmith_lEQ1ob4KQt < tags_size_realsmith_lEQ1ob4KQt * 8) {
        bitmap_realsmith_lEQ1ob4KQt[tag_realsmith_lEQ1ob4KQt / 64] &= ~(1UL << (tag_realsmith_lEQ1ob4KQt % 64));
    }
    (free(bitmap_realsmith_lEQ1ob4KQt));
    return 0;
}

#include "stdlib.h"
int realsmith_wdL1ax6XTx(int dev_of_node_realsmith_wdL1ax6XTx, int *dma_window_realsmith_wdL1ax6XTx, int *tbl_size_realsmith_wdL1ax6XTx, int *tbl_offset_realsmith_wdL1ax6XTx, int *tbl_index_realsmith_wdL1ax6XTx) {
    unsigned long offset_realsmith_wdL1ax6XTx, size_realsmith_wdL1ax6XTx;
    struct {
        unsigned long it_page_shift_realsmith_wdL1ax6XTx;
        unsigned long it_size_realsmith_wdL1ax6XTx;
        unsigned long it_offset_realsmith_wdL1ax6XTx;
        int it_blocksize_realsmith_wdL1ax6XTx;
        int *it_ops_realsmith_wdL1ax6XTx;
        int it_type_realsmith_wdL1ax6XTx;
        unsigned long it_busno_realsmith_wdL1ax6XTx;
        int it_index_realsmith_wdL1ax6XTx;
    } tbl_realsmith_wdL1ax6XTx;
    if (!dma_window_realsmith_wdL1ax6XTx) return 0;
    tbl_size_realsmith_wdL1ax6XTx[0] = sizeof(tbl_realsmith_wdL1ax6XTx);
    tbl_size_realsmith_wdL1ax6XTx[0] = (tbl_size_realsmith_wdL1ax6XTx[0] < 0) ? 0 : tbl_size_realsmith_wdL1ax6XTx[0];
    offset_realsmith_wdL1ax6XTx = dma_window_realsmith_wdL1ax6XTx[0];
    size_realsmith_wdL1ax6XTx = dma_window_realsmith_wdL1ax6XTx[1];
    tbl_realsmith_wdL1ax6XTx.it_page_shift_realsmith_wdL1ax6XTx = 12;
    tbl_realsmith_wdL1ax6XTx.it_size_realsmith_wdL1ax6XTx = size_realsmith_wdL1ax6XTx >> tbl_realsmith_wdL1ax6XTx.it_page_shift_realsmith_wdL1ax6XTx;
    tbl_realsmith_wdL1ax6XTx.it_offset_realsmith_wdL1ax6XTx = offset_realsmith_wdL1ax6XTx >> tbl_realsmith_wdL1ax6XTx.it_page_shift_realsmith_wdL1ax6XTx;
    tbl_realsmith_wdL1ax6XTx.it_busno_realsmith_wdL1ax6XTx = 0;
    tbl_realsmith_wdL1ax6XTx.it_type_realsmith_wdL1ax6XTx = 1;
    tbl_realsmith_wdL1ax6XTx.it_blocksize_realsmith_wdL1ax6XTx = 16;
    tbl_index_realsmith_wdL1ax6XTx[0] = 0;
    if (dev_of_node_realsmith_wdL1ax6XTx % 2 == 0)
        tbl_realsmith_wdL1ax6XTx.it_ops_realsmith_wdL1ax6XTx = (int *)1;
    else
        tbl_realsmith_wdL1ax6XTx.it_ops_realsmith_wdL1ax6XTx = (int *)2;
    return tbl_realsmith_wdL1ax6XTx.it_size_realsmith_wdL1ax6XTx;
}
int realsmith_proxy_19s8LaoChf(int p_0_HZKvkcVeWj, int p_1_0ReKy9Rqfe, int p_2_D1OmR0QKjG, int p_3_Rv8QaHdofC, int p_4_Pn5vvrK6ec) {
int proxy_RtarOmaw9k[10] = { 85, 15, p_1_0ReKy9Rqfe, 6, 66, 33, 11, p_1_0ReKy9Rqfe, p_1_0ReKy9Rqfe, 48 };
int proxy_Nz2MBQ56j4[12] = { p_2_D1OmR0QKjG, 51, 67, 98, 20, p_2_D1OmR0QKjG, p_2_D1OmR0QKjG, 23, p_2_D1OmR0QKjG, p_2_D1OmR0QKjG, p_2_D1OmR0QKjG, p_2_D1OmR0QKjG };
int proxy_bFgmGNIDNg[13] = { p_3_Rv8QaHdofC, 66, 37, 77, p_3_Rv8QaHdofC, p_3_Rv8QaHdofC, p_3_Rv8QaHdofC, p_3_Rv8QaHdofC, p_3_Rv8QaHdofC, p_3_Rv8QaHdofC, p_3_Rv8QaHdofC, p_3_Rv8QaHdofC, 85 };
int proxy_ret_gKhxomQ7r5 = realsmith_wdL1ax6XTx(p_0_HZKvkcVeWj, proxy_RtarOmaw9k, proxy_Nz2MBQ56j4, proxy_bFgmGNIDNg, &(p_4_Pn5vvrK6ec));
return proxy_ret_gKhxomQ7r5;
}


#include "stdlib.h"
int realsmith_Yw455g7BP5(int host_realsmith_Yw455g7BP5, int hostdata_realsmith_Yw455g7BP5, int raid_level_realsmith_Yw455g7BP5, int *buffer_realsmith_Yw455g7BP5) {
    int is_logical_device_realsmith_Yw455g7BP5 = (hostdata_realsmith_Yw455g7BP5 == 1) ? 1 : 0;
    char *raid_level_str_realsmith_Yw455g7BP5;
    if (is_logical_device_realsmith_Yw455g7BP5) {
        switch (raid_level_realsmith_Yw455g7BP5) {
            case 0: raid_level_str_realsmith_Yw455g7BP5 = "RAID 0"; break;
            case 1: raid_level_str_realsmith_Yw455g7BP5 = "RAID 1"; break;
            case 5: raid_level_str_realsmith_Yw455g7BP5 = "RAID 5"; break;
            case 10: raid_level_str_realsmith_Yw455g7BP5 = "RAID 10"; break;
            default: raid_level_str_realsmith_Yw455g7BP5 = "Unknown RAID Level"; break;
        }
    } else {
        raid_level_str_realsmith_Yw455g7BP5 = "N/A";
    }
    return (1);
}
int realsmith_proxy_5VjZwnyOjp(int p_0_I2lrd9IEBA, int p_1_bMnZXasXcq, int p_2_C1fyC1bvHn, int p_3_rQFzpAPuFS) {
int proxy_k9tO9Q1xEI[20] = { 73, p_3_rQFzpAPuFS, 32, p_3_rQFzpAPuFS, 92, p_3_rQFzpAPuFS, p_3_rQFzpAPuFS, 21, p_3_rQFzpAPuFS, p_3_rQFzpAPuFS, p_3_rQFzpAPuFS, p_3_rQFzpAPuFS, 53, 67, p_3_rQFzpAPuFS, p_3_rQFzpAPuFS, 32, p_3_rQFzpAPuFS, p_3_rQFzpAPuFS, p_3_rQFzpAPuFS };
int proxy_ret_9KH9GynrI1 = realsmith_Yw455g7BP5(p_0_I2lrd9IEBA, p_1_bMnZXasXcq, p_2_C1fyC1bvHn, proxy_k9tO9Q1xEI);
return proxy_ret_9KH9GynrI1;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_VSU2Qo3tzG(x) (x)
#define Tag2_realsmith_VSU2Qo3tzG(x) (x)
#include "stdlib.h"
int realsmith_VSU2Qo3tzG(int revid_realsmith_VSU2Qo3tzG) {
    const long TWL6040_REV_ES1_3_realsmith_VSU2Qo3tzG = 3;
    /*bef_stmt:17144*/
/*bef_stmt:17144*/
if (Tag1_realsmith_VSU2Qo3tzG(/*int:17150:17150:17144:e*/revid_realsmith_VSU2Qo3tzG) < Tag2_realsmith_VSU2Qo3tzG(/*const long:17150:17150:17144:e*/TWL6040_REV_ES1_3_realsmith_VSU2Qo3tzG))
        return 2;
    else
        return 1;
/*aft_stmt:17144*/
/*aft_stmt:17144*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_QseSQDZ9da(x) (x)
#define Tag2_realsmith_QseSQDZ9da(x) (x)
#include "stdlib.h"
int realsmith_QseSQDZ9da(int icount_realsmith_QseSQDZ9da, int ifree_realsmith_QseSQDZ9da, int fdblocks_realsmith_QseSQDZ9da, int delalloc_blks_realsmith_QseSQDZ9da, int forced_shutdown_realsmith_QseSQDZ9da) {
    /*bef_stmt:17244*/
/*bef_stmt:17244*/
if (/*TAG1:STA*/((int)(realsmith_proxy_f5WUZo1sCx((unsigned char)(forced_shutdown_realsmith_QseSQDZ9da)+(-12), (int)(forced_shutdown_realsmith_QseSQDZ9da)+(-10), (char)(forced_shutdown_realsmith_QseSQDZ9da)+(-13), (int)(forced_shutdown_realsmith_QseSQDZ9da)+(-10))+(int)(forced_shutdown_realsmith_QseSQDZ9da)-(15))+forced_shutdown_realsmith_QseSQDZ9da)/*TAG1:END:forced_shutdown_realsmith_QseSQDZ9da*/ || Tag2_realsmith_QseSQDZ9da(/*int:17254:17254:17244:e*/delalloc_blks_realsmith_QseSQDZ9da) == 0) {
        icount_realsmith_QseSQDZ9da = 0;
        ifree_realsmith_QseSQDZ9da = 0;
        fdblocks_realsmith_QseSQDZ9da = 0;
        delalloc_blks_realsmith_QseSQDZ9da = 0;
        return 1;
    }
/*aft_stmt:17244*/
/*aft_stmt:17244*/
    return 0;
}



#include "stdlib.h"
int realsmith_14pGs9DTiX(int x_ex_flags_realsmith_14pGs9DTiX, int x_policy_cache_realsmith_14pGs9DTiX, int maps_num_realsmith_14pGs9DTiX, int *maps_subject_realsmith_14pGs9DTiX, int *maps_issuer_realsmith_14pGs9DTiX, int *cache_data_realsmith_14pGs9DTiX, int anyPolicy_flags_realsmith_14pGs9DTiX) {
    int ret_realsmith_14pGs9DTiX = 0;
    if (maps_num_realsmith_14pGs9DTiX == 0) {
        ret_realsmith_14pGs9DTiX = -1;
        goto bad_mapping;
    }
    for (int i_realsmith_14pGs9DTiX = 0; i_realsmith_14pGs9DTiX < maps_num_realsmith_14pGs9DTiX; i_realsmith_14pGs9DTiX++) {
        int subjectDomainPolicy_realsmith_14pGs9DTiX = maps_subject_realsmith_14pGs9DTiX[i_realsmith_14pGs9DTiX];
        int issuerDomainPolicy_realsmith_14pGs9DTiX = maps_issuer_realsmith_14pGs9DTiX[i_realsmith_14pGs9DTiX];
        if (subjectDomainPolicy_realsmith_14pGs9DTiX == 0 || issuerDomainPolicy_realsmith_14pGs9DTiX == 0) {
            ret_realsmith_14pGs9DTiX = -1;
            goto bad_mapping;
        }
        int data_realsmith_14pGs9DTiX = 0;
        if (data_realsmith_14pGs9DTiX == 0 && anyPolicy_flags_realsmith_14pGs9DTiX == 0)
            continue;
        if (data_realsmith_14pGs9DTiX == 0) {
            data_realsmith_14pGs9DTiX = (anyPolicy_flags_realsmith_14pGs9DTiX & 1) ? 1 : 0;
            if (data_realsmith_14pGs9DTiX == 0)
                goto bad_mapping;
            data_realsmith_14pGs9DTiX |= 2;
            data_realsmith_14pGs9DTiX |= 4;
            cache_data_realsmith_14pGs9DTiX[0]++;
        } else {
            data_realsmith_14pGs9DTiX |= 8;
        }
        cache_data_realsmith_14pGs9DTiX[data_realsmith_14pGs9DTiX] = subjectDomainPolicy_realsmith_14pGs9DTiX;
    }
    ret_realsmith_14pGs9DTiX = 1;
bad_mapping:
    if (ret_realsmith_14pGs9DTiX == -1)
        x_ex_flags_realsmith_14pGs9DTiX |= 16;
    return ret_realsmith_14pGs9DTiX;
}
int realsmith_proxy_kp9BlZdNlZ(int p_0_nL8hmLuM9E, int p_1_AES34nQvKY, int p_2_eZfhEa3hJD, int p_3_oa7NIHGOw5, int p_4_emu15m9fN8, int p_5_Xz0PZGN6qY, int p_6_aeJmkhdXpS) {
int proxy_ret_W0pH5TA3ld = realsmith_14pGs9DTiX(p_0_nL8hmLuM9E, p_1_AES34nQvKY, p_2_eZfhEa3hJD, &(p_3_oa7NIHGOw5), &(p_4_emu15m9fN8), &(p_5_Xz0PZGN6qY), p_6_aeJmkhdXpS);
return proxy_ret_W0pH5TA3ld;
}


#include "stdlib.h"
int realsmith_k2ewKnOSBs(const char *s_realsmith_k2ewKnOSBs, int maxlen_realsmith_k2ewKnOSBs) {
    int len_realsmith_k2ewKnOSBs;
    for (len_realsmith_k2ewKnOSBs = 0; len_realsmith_k2ewKnOSBs < maxlen_realsmith_k2ewKnOSBs; len_realsmith_k2ewKnOSBs++, s_realsmith_k2ewKnOSBs++) {
        if (!*s_realsmith_k2ewKnOSBs)
            break;
    }
    return len_realsmith_k2ewKnOSBs;
}
int realsmith_proxy_UXkU0D5TWi(char p_0_7XhVpmQknX, int p_1_BQotdhUUU3) {
char proxy_iPbgbRCzVs[15] = { p_0_7XhVpmQknX, p_0_7XhVpmQknX, p_0_7XhVpmQknX, 35, 97, 4, 92, 77, 5, 82, p_0_7XhVpmQknX, 4, p_0_7XhVpmQknX, p_0_7XhVpmQknX, 44 };
int proxy_ret_IaBiSfyQY6 = realsmith_k2ewKnOSBs(proxy_iPbgbRCzVs, p_1_BQotdhUUU3);
return proxy_ret_IaBiSfyQY6;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_chc5d7O6oq(x) (x)
#include "stdlib.h"
int realsmith_chc5d7O6oq(int ctrl_realsmith_chc5d7O6oq, int pf_realsmith_chc5d7O6oq, int skb_data_realsmith_chc5d7O6oq, int skb_len_realsmith_chc5d7O6oq) {
    /*bef_stmt:17171*/
return (Tag1_realsmith_chc5d7O6oq(/*int:17173:17173:17171:e*/skb_len_realsmith_chc5d7O6oq) > 0) ? 1 : 0;
/*aft_stmt:17171*/
}



#include "stdlib.h"
int realsmith_DM23Mznltz(int sclk_count_realsmith_DM23Mznltz, int *sclk_values_realsmith_DM23Mznltz, int mclk_count_realsmith_DM23Mznltz, int *mclk_values_realsmith_DM23Mznltz, int performance_level_count_realsmith_DM23Mznltz, int *performance_levels_realsmith_DM23Mznltz, int min_clock_in_sr_realsmith_DM23Mznltz, int num_existing_displays_realsmith_DM23Mznltz, int num_display_realsmith_DM23Mznltz) {
    int sclk_realsmith_DM23Mznltz = performance_levels_realsmith_DM23Mznltz[performance_level_count_realsmith_DM23Mznltz - 1];
    int mclk_realsmith_DM23Mznltz = performance_levels_realsmith_DM23Mznltz[performance_level_count_realsmith_DM23Mznltz - 1 + performance_level_count_realsmith_DM23Mznltz];
    int need_update_smu7_dpm_table_realsmith_DM23Mznltz = 0;
    int i_realsmith_DM23Mznltz;
    for (i_realsmith_DM23Mznltz = 0; i_realsmith_DM23Mznltz < sclk_count_realsmith_DM23Mznltz; i_realsmith_DM23Mznltz++) {
        if (sclk_realsmith_DM23Mznltz == sclk_values_realsmith_DM23Mznltz[i_realsmith_DM23Mznltz])
            break;
    }
    if (i_realsmith_DM23Mznltz >= sclk_count_realsmith_DM23Mznltz) {
        if (sclk_realsmith_DM23Mznltz > sclk_values_realsmith_DM23Mznltz[i_realsmith_DM23Mznltz - 1]) {
            need_update_smu7_dpm_table_realsmith_DM23Mznltz |= 1;
            sclk_values_realsmith_DM23Mznltz[i_realsmith_DM23Mznltz - 1] = sclk_realsmith_DM23Mznltz;
        }
    } else {
        if (min_clock_in_sr_realsmith_DM23Mznltz != sclk_realsmith_DM23Mznltz && (sclk_realsmith_DM23Mznltz >= 1000 || min_clock_in_sr_realsmith_DM23Mznltz >= 1000))
            need_update_smu7_dpm_table_realsmith_DM23Mznltz |= 2;
    }
    for (i_realsmith_DM23Mznltz = 0; i_realsmith_DM23Mznltz < mclk_count_realsmith_DM23Mznltz; i_realsmith_DM23Mznltz++) {
        if (mclk_realsmith_DM23Mznltz == mclk_values_realsmith_DM23Mznltz[i_realsmith_DM23Mznltz])
            break;
    }
    if (i_realsmith_DM23Mznltz >= mclk_count_realsmith_DM23Mznltz) {
        if (mclk_realsmith_DM23Mznltz > mclk_values_realsmith_DM23Mznltz[i_realsmith_DM23Mznltz - 1]) {
            need_update_smu7_dpm_table_realsmith_DM23Mznltz |= 4;
            mclk_values_realsmith_DM23Mznltz[i_realsmith_DM23Mznltz - 1] = mclk_realsmith_DM23Mznltz;
        }
    }
    if (num_existing_displays_realsmith_DM23Mznltz != num_display_realsmith_DM23Mznltz)
        need_update_smu7_dpm_table_realsmith_DM23Mznltz |= 8;
    return need_update_smu7_dpm_table_realsmith_DM23Mznltz;
}
int realsmith_proxy_PF810g7rLT(int p_0_QwcsRYC5DX, int p_1_rnEPeKmYo3, int p_2_tXMDibeWgI, int p_3_mLGBRVXpAW, int p_4_EPy4c1kuWo, int p_5_ZwlYR6th0i, int p_6_jLUNoMo06n, int p_7_cSWEgtEQsm, int p_8_SNjR5NHHeZ) {
int proxy_HRFNHrvq2u[14] = { p_1_rnEPeKmYo3, 36, p_1_rnEPeKmYo3, p_1_rnEPeKmYo3, 87, 20, p_1_rnEPeKmYo3, p_1_rnEPeKmYo3, 20, p_1_rnEPeKmYo3, 56, p_1_rnEPeKmYo3, p_1_rnEPeKmYo3, 32 };
int proxy_MaoS3fpdab[17] = { 18, p_3_mLGBRVXpAW, 29, p_3_mLGBRVXpAW, p_3_mLGBRVXpAW, 95, p_3_mLGBRVXpAW, p_3_mLGBRVXpAW, p_3_mLGBRVXpAW, p_3_mLGBRVXpAW, p_3_mLGBRVXpAW, 54, p_3_mLGBRVXpAW, 72, 4, 11, p_3_mLGBRVXpAW };
int proxy_T9bfKxLnoS[16] = { 78, 61, 75, 48, p_5_ZwlYR6th0i, p_5_ZwlYR6th0i, p_5_ZwlYR6th0i, p_5_ZwlYR6th0i, 10, p_5_ZwlYR6th0i, 5, p_5_ZwlYR6th0i, p_5_ZwlYR6th0i, p_5_ZwlYR6th0i, p_5_ZwlYR6th0i, p_5_ZwlYR6th0i };
int proxy_ret_uh2SCVDG5m = realsmith_DM23Mznltz(p_0_QwcsRYC5DX, proxy_HRFNHrvq2u, p_2_tXMDibeWgI, proxy_MaoS3fpdab, p_4_EPy4c1kuWo, proxy_T9bfKxLnoS, p_6_jLUNoMo06n, p_7_cSWEgtEQsm, p_8_SNjR5NHHeZ);
return proxy_ret_uh2SCVDG5m;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_pySy9uPUM3(x) (x)
#define Tag2_realsmith_pySy9uPUM3(x) (x)
#include "stdlib.h"
int realsmith_pySy9uPUM3(int fan_main_ctrl_realsmith_pySy9uPUM3, int index_realsmith_pySy9uPUM3) {
    /*bef_stmt:17148*/
/*bef_stmt:17148*/
return (Tag1_realsmith_pySy9uPUM3(/*int:17150:17150:17148:e*/fan_main_ctrl_realsmith_pySy9uPUM3) & (1 << Tag2_realsmith_pySy9uPUM3(/*int:17150:17150:17148:e*/index_realsmith_pySy9uPUM3))) ? 1 : 0;
/*aft_stmt:17148*/
/*aft_stmt:17148*/
}



#include "stdlib.h"
int realsmith_2Y8zlYk46q(const char *name_realsmith_2Y8zlYk46q) {
    int symbolP_realsmith_2Y8zlYk46q = 0;
    if (name_realsmith_2Y8zlYk46q == ((void*)0)) {
        symbolP_realsmith_2Y8zlYk46q = -1;
    }
    if (symbolP_realsmith_2Y8zlYk46q == 0) {
        symbolP_realsmith_2Y8zlYk46q = 1;
    }
    return symbolP_realsmith_2Y8zlYk46q;
}
int realsmith_proxy_kcLovt6QoD(char p_0_k1gkjHPLw3) {
char proxy_Z6LEJDtkwI[11] = { 82, 90, 36, p_0_k1gkjHPLw3, 84, 96, p_0_k1gkjHPLw3, p_0_k1gkjHPLw3, p_0_k1gkjHPLw3, p_0_k1gkjHPLw3, p_0_k1gkjHPLw3 };
int proxy_ret_bFPoe7GYFs = realsmith_2Y8zlYk46q(proxy_Z6LEJDtkwI);
return proxy_ret_bFPoe7GYFs;
}


#include "stdlib.h"
int realsmith_6ePO4QiJev(int ctx_realsmith_6ePO4QiJev, const char *path_realsmith_6ePO4QiJev) {
    int ret_realsmith_6ePO4QiJev = -1;
    unsigned char buf_realsmith_6ePO4QiJev[32];
    int f_realsmith_6ePO4QiJev = (1);
    if (f_realsmith_6ePO4QiJev < 0) return ret_realsmith_6ePO4QiJev;
    for (int i_realsmith_6ePO4QiJev = 0; i_realsmith_6ePO4QiJev < 32; i_realsmith_6ePO4QiJev++) {
        buf_realsmith_6ePO4QiJev[i_realsmith_6ePO4QiJev] = (unsigned char)((1) % 256);
    }
    if ((1) != 32) {
        ret_realsmith_6ePO4QiJev = -1;
        goto exit;
    }
    ret_realsmith_6ePO4QiJev = 0;
exit:
    (1);
    return ret_realsmith_6ePO4QiJev;
}
int realsmith_proxy_Q4wS7XUvM8(int p_0_33MlccMc6m, char p_1_CwbZ1pJYgT) {
int proxy_ret_oxV7zSWKYY = realsmith_6ePO4QiJev(p_0_33MlccMc6m, &(p_1_CwbZ1pJYgT));
return proxy_ret_oxV7zSWKYY;
}


#include "stdlib.h"
int realsmith_6SduXYiM6n(int fan_index_realsmith_6SduXYiM6n, unsigned long fan_value_realsmith_6SduXYiM6n, unsigned long *fan_min_realsmith_6SduXYiM6n, unsigned long *fan_div_realsmith_6SduXYiM6n, unsigned long *update_lock_realsmith_6SduXYiM6n) {
    unsigned long val_realsmith_6SduXYiM6n = fan_value_realsmith_6SduXYiM6n;
    *update_lock_realsmith_6SduXYiM6n = 1;
    fan_min_realsmith_6SduXYiM6n[fan_index_realsmith_6SduXYiM6n] = (val_realsmith_6SduXYiM6n * 2);
    *update_lock_realsmith_6SduXYiM6n = 0;
    return 0;
}
int realsmith_proxy_thqEpp32HE(int p_0_KIoKHuKOlO, unsigned long p_1_Zw12jOpGd7, unsigned long p_2_JAwHnmVMYI, unsigned long p_3_z4yOEr8ms4, unsigned long p_4_wP36XaR2fy) {
unsigned long proxy_t4z4aSO2Em[15] = { 10, p_2_JAwHnmVMYI, 77, 68, 9, 40, 74, p_2_JAwHnmVMYI, 78, p_2_JAwHnmVMYI, p_2_JAwHnmVMYI, 73, p_2_JAwHnmVMYI, p_2_JAwHnmVMYI, 33 };
unsigned long proxy_tjPqelBo4D[14] = { 76, p_3_z4yOEr8ms4, p_3_z4yOEr8ms4, 37, p_3_z4yOEr8ms4, 65, p_3_z4yOEr8ms4, 36, 26, p_3_z4yOEr8ms4, 76, p_3_z4yOEr8ms4, 63, p_3_z4yOEr8ms4 };
int proxy_ret_qo0iaLsIBj = realsmith_6SduXYiM6n(p_0_KIoKHuKOlO, p_1_Zw12jOpGd7, proxy_t4z4aSO2Em, proxy_tjPqelBo4D, &(p_4_wP36XaR2fy));
return proxy_ret_qo0iaLsIBj;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_1Xi1V8MMxj(x) (x)
#include "stdlib.h"
int realsmith_1Xi1V8MMxj(int suppress_output_realsmith_1Xi1V8MMxj, int type_realsmith_1Xi1V8MMxj, int level_realsmith_1Xi1V8MMxj, int id_realsmith_1Xi1V8MMxj) {
    /*bef_stmt:17151*/
if (Tag1_realsmith_1Xi1V8MMxj(/*int:17161:17161:17151:e*/suppress_output_realsmith_1Xi1V8MMxj))
        return 0;
/*aft_stmt:17151*/
    return 1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_aLkIsJO1gC(x) (x)
#include "stdlib.h"
int realsmith_aLkIsJO1gC(int generic_realsmith_aLkIsJO1gC) {
    /*bef_stmt:17099*/
if (/*TAG1:STA*/((int)(realsmith_proxy_UXkU0D5TWi((char)(generic_realsmith_aLkIsJO1gC)+(51), (int)(generic_realsmith_aLkIsJO1gC)+(2))+(int)(generic_realsmith_aLkIsJO1gC)-(14))+generic_realsmith_aLkIsJO1gC)/*TAG1:END:generic_realsmith_aLkIsJO1gC*/) {
        return 1;
    } else {
        return 0;
    }
/*aft_stmt:17099*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_4zOWu6kNgt(x) (x)
#include "stdlib.h"
int realsmith_4zOWu6kNgt(int mii_ptr_realsmith_4zOWu6kNgt) {
    /*bef_stmt:17107*/
return (Tag1_realsmith_4zOWu6kNgt(/*int:17109:17109:17107:e*/mii_ptr_realsmith_4zOWu6kNgt) != 0) ? 1 : 0;
/*aft_stmt:17107*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Ff2DL1UK4w(x) (x)
#define Tag2_realsmith_Ff2DL1UK4w(x) (x)
#define Tag3_realsmith_Ff2DL1UK4w(x) (x)
#define Tag4_realsmith_Ff2DL1UK4w(x) (x)
#define Tag5_realsmith_Ff2DL1UK4w(x) (x)
#include "stdlib.h"
int realsmith_Ff2DL1UK4w(int is_open_realsmith_Ff2DL1UK4w, int irq_always_realsmith_Ff2DL1UK4w, int irq_realsmith_Ff2DL1UK4w) {
    int result_realsmith_Ff2DL1UK4w = 0;
    int pm_mutex_realsmith_Ff2DL1UK4w = 1;
    /*bef_stmt:17215*/
if (/*TAG1:STA*/((int)(realsmith_1Xi1V8MMxj((int)(pm_mutex_realsmith_Ff2DL1UK4w)+(42), (int)(pm_mutex_realsmith_Ff2DL1UK4w)+(27), (int)(pm_mutex_realsmith_Ff2DL1UK4w)+(41), (int)(pm_mutex_realsmith_Ff2DL1UK4w)+(4))+(int)(pm_mutex_realsmith_Ff2DL1UK4w)-(1))+pm_mutex_realsmith_Ff2DL1UK4w)/*TAG1:END:pm_mutex_realsmith_Ff2DL1UK4w*/) {
        /*bef_stmt:17208*/
/*bef_stmt:17208*/
if (/*TAG2:STA*/((int)(realsmith_proxy_Q4wS7XUvM8((int)(is_open_realsmith_Ff2DL1UK4w)+(-32), (char)(is_open_realsmith_Ff2DL1UK4w)+(-136))+(int)(is_open_realsmith_Ff2DL1UK4w)-(45))+is_open_realsmith_Ff2DL1UK4w)/*TAG2:END:is_open_realsmith_Ff2DL1UK4w*/ || /*TAG3:STA*/((irq_always_realsmith_Ff2DL1UK4w) + (g_6UB1K6IRAF[2]) - 124)/*TAG3:END:irq_always_realsmith_Ff2DL1UK4w*/) {
            /*bef_stmt:17201*/
result_realsmith_Ff2DL1UK4w = /*TAG4:STA*/((int)(realsmith_proxy_thqEpp32HE((int)(irq_realsmith_Ff2DL1UK4w)+(2), (unsigned long)(irq_realsmith_Ff2DL1UK4w)+(-3), (unsigned long)(irq_realsmith_Ff2DL1UK4w)+(-7), (unsigned long)(irq_realsmith_Ff2DL1UK4w)+(-3), (unsigned long)(irq_realsmith_Ff2DL1UK4w)+(-8))+(int)(irq_realsmith_Ff2DL1UK4w)-(3))+irq_realsmith_Ff2DL1UK4w)/*TAG4:END:irq_realsmith_Ff2DL1UK4w*/;
/*aft_stmt:17201*/
        }
g_6UB1K6IRAF[2] = 124 + (irq_always_realsmith_Ff2DL1UK4w - (19));
/*aft_stmt:17208*/
/*aft_stmt:17208*/
    }
/*aft_stmt:17215*/
    /*bef_stmt:17226*/
return /*TAG5:STA*/((result_realsmith_Ff2DL1UK4w) + (g_6UB1K6IRAF[4]) - 108)/*TAG5:END:result_realsmith_Ff2DL1UK4w*/;
g_6UB1K6IRAF[4] = 108 + (result_realsmith_Ff2DL1UK4w - (3));
/*aft_stmt:17226*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_WsR5Xv9Rft(x) (x)
#define Tag2_realsmith_WsR5Xv9Rft(x) (x)
#define Tag3_realsmith_WsR5Xv9Rft(x) (x)
#define Tag4_realsmith_WsR5Xv9Rft(x) (x)
#include "stdlib.h"
int realsmith_WsR5Xv9Rft(int cur_cp_pack_realsmith_WsR5Xv9Rft, unsigned long blocks_per_seg_realsmith_WsR5Xv9Rft, unsigned long cp_blkaddr_realsmith_WsR5Xv9Rft) {
    /*bef_stmt:17142*/
unsigned long start_addr_realsmith_WsR5Xv9Rft = Tag1_realsmith_WsR5Xv9Rft(/*unsigned long:17196:17196:17142:e*/cp_blkaddr_realsmith_WsR5Xv9Rft);
/*aft_stmt:17142*/
    /*bef_stmt:17180*/
if (Tag2_realsmith_WsR5Xv9Rft(/*int:17196:17196:17180:e*/cur_cp_pack_realsmith_WsR5Xv9Rft) == 2) {
        /*bef_stmt:17171*/
start_addr_realsmith_WsR5Xv9Rft += Tag3_realsmith_WsR5Xv9Rft(/*unsigned long:17196:17196:17171:e*/blocks_per_seg_realsmith_WsR5Xv9Rft);
/*aft_stmt:17171*/
    }
/*aft_stmt:17180*/
    /*bef_stmt:17194*/
return Tag4_realsmith_WsR5Xv9Rft(/*unsigned long:17196:17196:17194:e*/start_addr_realsmith_WsR5Xv9Rft);
/*aft_stmt:17194*/
}



#include "stdlib.h"
int realsmith_2DcUx6TLpa(int *buf_realsmith_2DcUx6TLpa, int bssid_realsmith_2DcUx6TLpa, int own_addr_realsmith_2DcUx6TLpa, int band_realsmith_2DcUx6TLpa, int channel_realsmith_2DcUx6TLpa) {
    int len_realsmith_2DcUx6TLpa = 8;
    if (own_addr_realsmith_2DcUx6TLpa) len_realsmith_2DcUx6TLpa += 6;
    int *mbie_realsmith_2DcUx6TLpa = buf_realsmith_2DcUx6TLpa;
    mbie_realsmith_2DcUx6TLpa[0] = 0x01;
    mbie_realsmith_2DcUx6TLpa[1] = len_realsmith_2DcUx6TLpa - 2;
        mbie_realsmith_2DcUx6TLpa[2] = 0x03;
        mbie_realsmith_2DcUx6TLpa[3] = 0;
    if (bssid_realsmith_2DcUx6TLpa) {
        mbie_realsmith_2DcUx6TLpa[4] = bssid_realsmith_2DcUx6TLpa;
    }
    mbie_realsmith_2DcUx6TLpa[5] = band_realsmith_2DcUx6TLpa;
    mbie_realsmith_2DcUx6TLpa[6] = 0;
    mbie_realsmith_2DcUx6TLpa[7] = channel_realsmith_2DcUx6TLpa;
    mbie_realsmith_2DcUx6TLpa[8] = 0xFF;
    if (own_addr_realsmith_2DcUx6TLpa) {
        mbie_realsmith_2DcUx6TLpa[2] |= 0x04;
        mbie_realsmith_2DcUx6TLpa[9] = own_addr_realsmith_2DcUx6TLpa;
    }
    return len_realsmith_2DcUx6TLpa;
}
int realsmith_proxy_hPYiSu2xkO(int p_0_fXVJuOWAc3, int p_1_qFNqDLf9o7, int p_2_mq8ViQswha, int p_3_jZfHKjwzSf, int p_4_qDGoLbzjvP) {
int proxy_XU4r2RIdlH[18] = { 59, 1, 71, p_0_fXVJuOWAc3, 2, p_0_fXVJuOWAc3, p_0_fXVJuOWAc3, p_0_fXVJuOWAc3, p_0_fXVJuOWAc3, 43, p_0_fXVJuOWAc3, p_0_fXVJuOWAc3, 10, p_0_fXVJuOWAc3, 95, 29, p_0_fXVJuOWAc3, 52 };
int proxy_ret_4kWXAh65Q3 = realsmith_2DcUx6TLpa(proxy_XU4r2RIdlH, p_1_qFNqDLf9o7, p_2_mq8ViQswha, p_3_jZfHKjwzSf, p_4_qDGoLbzjvP);
return proxy_ret_4kWXAh65Q3;
}


#include "stdlib.h"
int realsmith_u3rNGrA9q1(int keycode_realsmith_u3rNGrA9q1, int pressed_realsmith_u3rNGrA9q1, int layer_realsmith_u3rNGrA9q1, int index_realsmith_u3rNGrA9q1, int press_counter_realsmith_u3rNGrA9q1, int ONESHOT_TIMEOUT_realsmith_u3rNGrA9q1, int* tap_start_infos_realsmith_u3rNGrA9q1) {
    int* tap_start_realsmith_u3rNGrA9q1 = tap_start_infos_realsmith_u3rNGrA9q1 + index_realsmith_u3rNGrA9q1;
    int timer_realsmith_u3rNGrA9q1 = 0;
    if (pressed_realsmith_u3rNGrA9q1) {
        (1);
        timer_realsmith_u3rNGrA9q1 = (1);
        tap_start_realsmith_u3rNGrA9q1[0] = press_counter_realsmith_u3rNGrA9q1;
    } else {
        (1);
        if (press_counter_realsmith_u3rNGrA9q1 == tap_start_realsmith_u3rNGrA9q1[0] && (1) < ONESHOT_TIMEOUT_realsmith_u3rNGrA9q1) {
            (1);
            (1);
        }
    }
    return 0;
}
int realsmith_proxy_41zwcF7B1Z(int p_0_98TNnUkTfU, int p_1_wPrR9TrAS6, int p_2_NVvIkovfMl, int p_3_MZ8ICdo9KW, int p_4_rL1guxgtyG, int p_5_utgUGcRRdn, int p_6_Ni1bJgzoDG) {
int proxy_uxGSrlCL1W[11] = { 76, p_6_Ni1bJgzoDG, 66, 33, 24, 79, 66, p_6_Ni1bJgzoDG, 86, 49, 85 };
int proxy_ret_LbEKS5jcrX = realsmith_u3rNGrA9q1(p_0_98TNnUkTfU, p_1_wPrR9TrAS6, p_2_NVvIkovfMl, p_3_MZ8ICdo9KW, p_4_rL1guxgtyG, p_5_utgUGcRRdn, proxy_uxGSrlCL1W);
return proxy_ret_LbEKS5jcrX;
}


#include "stdlib.h"
int realsmith_94r8uPXUwL(int vf_drv_loaded_mask_realsmith_94r8uPXUwL, int rings_per_vf_realsmith_94r8uPXUwL, int vfidx_realsmith_94r8uPXUwL, int *stats_realsmith_94r8uPXUwL) {
    unsigned long long timeout_realsmith_94r8uPXUwL = 1;
    int mbox_cmd_realsmith_94r8uPXUwL[6] = {0};
    int ctx_status_realsmith_94r8uPXUwL = 0;
    int count_realsmith_94r8uPXUwL = 0, ret_realsmith_94r8uPXUwL;
    if (!(vf_drv_loaded_mask_realsmith_94r8uPXUwL & (1ULL << vfidx_realsmith_94r8uPXUwL)))
        return -1;
    mbox_cmd_realsmith_94r8uPXUwL[0] = 1;
    mbox_cmd_realsmith_94r8uPXUwL[1] = 1;
    mbox_cmd_realsmith_94r8uPXUwL[2] = 0;
    mbox_cmd_realsmith_94r8uPXUwL[3] = 1;
    mbox_cmd_realsmith_94r8uPXUwL[4] = vfidx_realsmith_94r8uPXUwL * rings_per_vf_realsmith_94r8uPXUwL;
    mbox_cmd_realsmith_94r8uPXUwL[5] = 0;
    do {
        count_realsmith_94r8uPXUwL++;
    } while ((ctx_status_realsmith_94r8uPXUwL == 0) && (count_realsmith_94r8uPXUwL < timeout_realsmith_94r8uPXUwL));
    ret_realsmith_94r8uPXUwL = ctx_status_realsmith_94r8uPXUwL;
    if (ret_realsmith_94r8uPXUwL == 0) {
        return -1;
    }
    return 0;
}
int realsmith_proxy_7EEXCQHXMT(int p_0_hWnyRFZKJM, int p_1_FxWN1lH9rj, int p_2_PDmCfHb9N4, int p_3_h6QUJdEEyH) {
int proxy_HzGhHENfZI[12] = { p_3_h6QUJdEEyH, 57, 96, p_3_h6QUJdEEyH, 61, 8, p_3_h6QUJdEEyH, p_3_h6QUJdEEyH, p_3_h6QUJdEEyH, 45, 13, 79 };
int proxy_ret_SItsrYLFPJ = realsmith_94r8uPXUwL(p_0_hWnyRFZKJM, p_1_FxWN1lH9rj, p_2_PDmCfHb9N4, proxy_HzGhHENfZI);
return proxy_ret_SItsrYLFPJ;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_z9t3sZepa0(x) (x)
#define Tag2_realsmith_z9t3sZepa0(x) (x)
#include "stdlib.h"
int realsmith_z9t3sZepa0(int mode_realsmith_z9t3sZepa0) {
    /*bef_stmt:17097*/
int pad_mode_realsmith_z9t3sZepa0 = /*TAG1:STA*/((int)(realsmith_chc5d7O6oq((int)(mode_realsmith_z9t3sZepa0)+(58), (int)(mode_realsmith_z9t3sZepa0)+(58), (int)(mode_realsmith_z9t3sZepa0)+(47), (int)(mode_realsmith_z9t3sZepa0)+(65))+(int)(mode_realsmith_z9t3sZepa0)-(35))+mode_realsmith_z9t3sZepa0)/*TAG1:END:mode_realsmith_z9t3sZepa0*/;
/*aft_stmt:17097*/
    /*bef_stmt:17107*/
return /*TAG2:STA*/((pad_mode_realsmith_z9t3sZepa0) + (g_D3IF6ZRPRU) - -48)/*TAG2:END:pad_mode_realsmith_z9t3sZepa0*/;
g_D3IF6ZRPRU = -48 + (pad_mode_realsmith_z9t3sZepa0 - (34));
/*aft_stmt:17107*/
}



#include<stdint.h>
#include<inttypes.h>
#include "stdlib.h"
int realsmith_cplxOl6JT7(int dtrace_unregister_id_realsmith_cplxOl6JT7) {
    int* dtrace_nfscl_nfs234_start_probe_realsmith_cplxOl6JT7 = ((void*)0);
    int* dtrace_nfscl_nfs234_done_probe_realsmith_cplxOl6JT7 = ((void*)0);
    return (1);
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_QsmuuDo394(x) (x)
#define Tag2_realsmith_QsmuuDo394(x) (x)
#define Tag3_realsmith_QsmuuDo394(x) (x)
#define Tag4_realsmith_QsmuuDo394(x) (x)
#define Tag5_realsmith_QsmuuDo394(x) (x)
#define Tag6_realsmith_QsmuuDo394(x) (x)
#define Tag7_realsmith_QsmuuDo394(x) (x)
#define Tag8_realsmith_QsmuuDo394(x) (x)
#define Tag9_realsmith_QsmuuDo394(x) (x)
#define Tag10_realsmith_QsmuuDo394(x) (x)
#define Tag11_realsmith_QsmuuDo394(x) (x)
#define Tag12_realsmith_QsmuuDo394(x) (x)
#define Tag13_realsmith_QsmuuDo394(x) (x)
#define Tag14_realsmith_QsmuuDo394(x) (x)
#define Tag15_realsmith_QsmuuDo394(x) (x)
#define Tag16_realsmith_QsmuuDo394(x) (x)
#include "stdlib.h"
int realsmith_QsmuuDo394(int pix_width_realsmith_QsmuuDo394, int pix_height_realsmith_QsmuuDo394, int fbuf_width_realsmith_QsmuuDo394, int fbuf_height_realsmith_QsmuuDo394) {
    /*bef_stmt:17196*/
/*bef_stmt:17196*/
/*bef_stmt:17196*/
/*bef_stmt:17196*/
int crop_width_realsmith_QsmuuDo394 = (/*TAG1:STA*/((int)(realsmith_proxy_kp9BlZdNlZ((int)(pix_width_realsmith_QsmuuDo394)+(5), (int)(pix_width_realsmith_QsmuuDo394)+(-60), (int)(pix_width_realsmith_QsmuuDo394)+(-62), (int)(pix_width_realsmith_QsmuuDo394)+(-140), (int)(pix_width_realsmith_QsmuuDo394)+(-167), (int)(pix_width_realsmith_QsmuuDo394)+(-127), (int)(pix_width_realsmith_QsmuuDo394)+(-8))+(int)(pix_width_realsmith_QsmuuDo394)-(94))+pix_width_realsmith_QsmuuDo394)/*TAG1:END:pix_width_realsmith_QsmuuDo394*/ < Tag2_realsmith_QsmuuDo394(/*int:17500:17500:17196:e*/fbuf_width_realsmith_QsmuuDo394)) ? Tag3_realsmith_QsmuuDo394(/*int:17500:17500:17196:e*/pix_width_realsmith_QsmuuDo394) : /*TAG4:STA*/((int)(realsmith_proxy_jhj2KrYVBW((int)(fbuf_width_realsmith_QsmuuDo394)+(22), (int)(fbuf_width_realsmith_QsmuuDo394)+(14), (int)(fbuf_width_realsmith_QsmuuDo394)+(64), (int)(fbuf_width_realsmith_QsmuuDo394)+(8), (int)(fbuf_width_realsmith_QsmuuDo394)+(55), (int)(fbuf_width_realsmith_QsmuuDo394)+(-17), (int)(fbuf_width_realsmith_QsmuuDo394)+(35))+(int)(fbuf_width_realsmith_QsmuuDo394)-(0))+fbuf_width_realsmith_QsmuuDo394)/*TAG4:END:fbuf_width_realsmith_QsmuuDo394*/;
/*aft_stmt:17196*/
/*aft_stmt:17196*/
/*aft_stmt:17196*/
/*aft_stmt:17196*/
    /*bef_stmt:17257*/
/*bef_stmt:17257*/
/*bef_stmt:17257*/
/*bef_stmt:17257*/
int crop_height_realsmith_QsmuuDo394 = (/*TAG5:STA*/((int)(realsmith_VSU2Qo3tzG((int)(pix_height_realsmith_QsmuuDo394)+(-57))+(int)(pix_height_realsmith_QsmuuDo394)-(60))+pix_height_realsmith_QsmuuDo394)/*TAG5:END:pix_height_realsmith_QsmuuDo394*/ < /*TAG6:STA*/((int)(realsmith_Ifl4XEcClT((int)(fbuf_height_realsmith_QsmuuDo394)+(-25), (int)(fbuf_height_realsmith_QsmuuDo394)+(-47), (int)(fbuf_height_realsmith_QsmuuDo394)+(18))+(int)(fbuf_height_realsmith_QsmuuDo394)-(53))+fbuf_height_realsmith_QsmuuDo394)/*TAG6:END:fbuf_height_realsmith_QsmuuDo394*/) ? /*TAG7:STA*/((int)(realsmith_QseSQDZ9da((int)(pix_height_realsmith_QsmuuDo394)+(-38), (int)(pix_height_realsmith_QsmuuDo394)+(-31), (int)(pix_height_realsmith_QsmuuDo394)+(-33), (int)(pix_height_realsmith_QsmuuDo394)+(-44), (int)(pix_height_realsmith_QsmuuDo394)+(-44))+(int)(pix_height_realsmith_QsmuuDo394)-(59))+pix_height_realsmith_QsmuuDo394)/*TAG7:END:pix_height_realsmith_QsmuuDo394*/ : /*TAG8:STA*/((int)(realsmith_5U5FxQxF4N((int)(fbuf_height_realsmith_QsmuuDo394)+(46), (int)(fbuf_height_realsmith_QsmuuDo394)+(-18), (unsigned long)(fbuf_height_realsmith_QsmuuDo394)+(-51))+(int)(fbuf_height_realsmith_QsmuuDo394)-(53))+fbuf_height_realsmith_QsmuuDo394)/*TAG8:END:fbuf_height_realsmith_QsmuuDo394*/;
/*aft_stmt:17257*/
/*aft_stmt:17257*/
/*aft_stmt:17257*/
/*aft_stmt:17257*/
    crop_width_realsmith_QsmuuDo394 &= ~1;
    crop_height_realsmith_QsmuuDo394 &= ~1;
    /*bef_stmt:17355*/
/*bef_stmt:17355*/
int left_realsmith_QsmuuDo394 = ((Tag9_realsmith_QsmuuDo394(/*int:17500:17500:17355:e*/pix_width_realsmith_QsmuuDo394) - /*TAG10:STA*/((int)(realsmith_lEQ1ob4KQt((int)(crop_width_realsmith_QsmuuDo394)+(62), (unsigned long)(crop_width_realsmith_QsmuuDo394)+(76))+(int)(crop_width_realsmith_QsmuuDo394)-(0))+crop_width_realsmith_QsmuuDo394)/*TAG10:END:crop_width_realsmith_QsmuuDo394*/) >> 1) & ~1;
/*aft_stmt:17355*/
/*aft_stmt:17355*/
    /*bef_stmt:17419*/
/*bef_stmt:17419*/
int top_realsmith_QsmuuDo394 = ((/*TAG11:STA*/((int)(realsmith_proxy_GoBCfmQ6qC((int)(pix_height_realsmith_QsmuuDo394)+(-22), (int)(pix_height_realsmith_QsmuuDo394)+(32), (int)(pix_height_realsmith_QsmuuDo394)+(-116))+(int)(pix_height_realsmith_QsmuuDo394)-(149))+pix_height_realsmith_QsmuuDo394)/*TAG11:END:pix_height_realsmith_QsmuuDo394*/ - /*TAG12:STA*/((int)(realsmith_XFAy66QWpB((int)(crop_height_realsmith_QsmuuDo394)+(22))+(int)(crop_height_realsmith_QsmuuDo394)-(52))+crop_height_realsmith_QsmuuDo394)/*TAG12:END:crop_height_realsmith_QsmuuDo394*/) >> 1) & ~1;
/*aft_stmt:17419*/
/*aft_stmt:17419*/
    /*bef_stmt:17498*/
/*bef_stmt:17498*/
/*bef_stmt:17498*/
/*bef_stmt:17498*/
return (/*TAG13:STA*/((int)(realsmith_C3PgSfdddH((int)(left_realsmith_QsmuuDo394)+(-17))+(int)(left_realsmith_QsmuuDo394)-(278))+left_realsmith_QsmuuDo394)/*TAG13:END:left_realsmith_QsmuuDo394*/ << 16) | (/*TAG14:STA*/((int)(realsmith_proxy_19s8LaoChf((int)(top_realsmith_QsmuuDo394)+(6), (int)(top_realsmith_QsmuuDo394)+(-4), (int)(top_realsmith_QsmuuDo394)+(7), (int)(top_realsmith_QsmuuDo394)+(-91), (int)(top_realsmith_QsmuuDo394)+(41))+(int)(top_realsmith_QsmuuDo394)-(2))+top_realsmith_QsmuuDo394)/*TAG14:END:top_realsmith_QsmuuDo394*/ << 8) | /*TAG15:STA*/((int)(realsmith_proxy_wIbmKhoaaj((unsigned long)(crop_width_realsmith_QsmuuDo394)+(45), (unsigned int)(crop_width_realsmith_QsmuuDo394)+(29), (unsigned int)(crop_width_realsmith_QsmuuDo394)+(74), (unsigned int)(crop_width_realsmith_QsmuuDo394)+(57))+(int)(crop_width_realsmith_QsmuuDo394)-(-1))+crop_width_realsmith_QsmuuDo394)/*TAG15:END:crop_width_realsmith_QsmuuDo394*/ | (/*TAG16:STA*/((int)(realsmith_proxy_5VjZwnyOjp((int)(crop_height_realsmith_QsmuuDo394)+(-46), (int)(crop_height_realsmith_QsmuuDo394)+(-7), (int)(crop_height_realsmith_QsmuuDo394)+(33), (int)(crop_height_realsmith_QsmuuDo394)+(21))+(int)(crop_height_realsmith_QsmuuDo394)-(53))+crop_height_realsmith_QsmuuDo394)/*TAG16:END:crop_height_realsmith_QsmuuDo394*/ << 24);
/*aft_stmt:17498*/
/*aft_stmt:17498*/
/*aft_stmt:17498*/
/*aft_stmt:17498*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag2_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag3_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag4_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag5_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag6_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag7_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag8_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag9_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag10_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag11_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag12_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag13_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag14_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag15_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag16_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag17_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag18_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag19_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag20_realsmith_proxy_ULgVGSVB2i(x) (x)
#define Tag21_realsmith_proxy_ULgVGSVB2i(x) (x)
#include "stdlib.h"
int realsmith_I4Lhi4XKvD(int tag_realsmith_I4Lhi4XKvD, unsigned long align_realsmith_I4Lhi4XKvD, unsigned long bndry_realsmith_I4Lhi4XKvD,
    unsigned long maxaddr_realsmith_I4Lhi4XKvD, unsigned long maxsz_realsmith_I4Lhi4XKvD, unsigned int nsegs_realsmith_I4Lhi4XKvD,
    unsigned long maxsegsz_realsmith_I4Lhi4XKvD, unsigned int datarate_realsmith_I4Lhi4XKvD, unsigned int flags_realsmith_I4Lhi4XKvD,
    int *out_p_realsmith_I4Lhi4XKvD) {
    int res_realsmith_I4Lhi4XKvD;
    /*bef_stmt:17400*/
/*bef_stmt:17400*/
/*bef_stmt:17400*/
/*bef_stmt:17400*/
/*bef_stmt:17400*/
/*bef_stmt:17400*/
/*bef_stmt:17400*/
/*bef_stmt:17400*/
/*bef_stmt:17400*/
res_realsmith_I4Lhi4XKvD = (Tag1_realsmith_proxy_ULgVGSVB2i(/*int:17462:17462:17400:e*/tag_realsmith_I4Lhi4XKvD) + Tag2_realsmith_proxy_ULgVGSVB2i(/*unsigned long:17462:17462:17400:e*/align_realsmith_I4Lhi4XKvD) + Tag3_realsmith_proxy_ULgVGSVB2i(/*unsigned long:17462:17462:17400:e*/bndry_realsmith_I4Lhi4XKvD) + Tag4_realsmith_proxy_ULgVGSVB2i(/*unsigned long:17462:17462:17400:e*/maxaddr_realsmith_I4Lhi4XKvD) + Tag5_realsmith_proxy_ULgVGSVB2i(/*unsigned long:17462:17462:17400:e*/maxsz_realsmith_I4Lhi4XKvD) + Tag6_realsmith_proxy_ULgVGSVB2i(/*unsigned int:17462:17462:17400:e*/nsegs_realsmith_I4Lhi4XKvD) + Tag7_realsmith_proxy_ULgVGSVB2i(/*unsigned long:17462:17462:17400:e*/maxsegsz_realsmith_I4Lhi4XKvD) + Tag8_realsmith_proxy_ULgVGSVB2i(/*unsigned int:17462:17462:17400:e*/datarate_realsmith_I4Lhi4XKvD) + Tag9_realsmith_proxy_ULgVGSVB2i(/*unsigned int:17462:17462:17400:e*/flags_realsmith_I4Lhi4XKvD)) % 100;
/*aft_stmt:17400*/
/*aft_stmt:17400*/
/*aft_stmt:17400*/
/*aft_stmt:17400*/
/*aft_stmt:17400*/
/*aft_stmt:17400*/
/*aft_stmt:17400*/
/*aft_stmt:17400*/
/*aft_stmt:17400*/
    /*bef_stmt:17431*/
if (Tag10_realsmith_proxy_ULgVGSVB2i(/*int:17462:17462:17431:e*/res_realsmith_I4Lhi4XKvD) == -1)
        return -1;
/*aft_stmt:17431*/
    /*bef_stmt:17452*/
*out_p_realsmith_I4Lhi4XKvD = Tag11_realsmith_proxy_ULgVGSVB2i(/*int:17462:17462:17452:e*/res_realsmith_I4Lhi4XKvD);
/*aft_stmt:17452*/
    return 0;
}
int realsmith_proxy_ULgVGSVB2i(int p_0_s4Y54tuE3O, unsigned long p_1_eUK2WjhLpe, unsigned long p_2_rRyAJQLO3W, unsigned long p_3_XY1k5Kq4Tj, unsigned long p_4_omoG9NrTW5, unsigned int p_5_EFbqs8egDH, unsigned long p_6_HZmklBbl0p, unsigned int p_7_KAUX8wq6Y8, unsigned int p_8_RkUDYP1Lvh, int p_9_bGYaW0G5S7) {
/*bef_stmt:17807*/
/*bef_stmt:17807*/
/*bef_stmt:17807*/
/*bef_stmt:17807*/
/*bef_stmt:17807*/
/*bef_stmt:17807*/
/*bef_stmt:17807*/
/*bef_stmt:17807*/
/*bef_stmt:17807*/
int proxy_ret_3Vi5VswyV7 = realsmith_I4Lhi4XKvD(Tag12_realsmith_proxy_ULgVGSVB2i(/*int:17819:17819:17807:e*/p_0_s4Y54tuE3O), Tag13_realsmith_proxy_ULgVGSVB2i(/*unsigned long:17819:17819:17807:e*/p_1_eUK2WjhLpe), Tag14_realsmith_proxy_ULgVGSVB2i(/*unsigned long:17819:17819:17807:e*/p_2_rRyAJQLO3W), Tag15_realsmith_proxy_ULgVGSVB2i(/*unsigned long:17819:17819:17807:e*/p_3_XY1k5Kq4Tj), Tag16_realsmith_proxy_ULgVGSVB2i(/*unsigned long:17819:17819:17807:e*/p_4_omoG9NrTW5), Tag17_realsmith_proxy_ULgVGSVB2i(/*unsigned int:17819:17819:17807:e*/p_5_EFbqs8egDH), Tag18_realsmith_proxy_ULgVGSVB2i(/*unsigned long:17819:17819:17807:e*/p_6_HZmklBbl0p), Tag19_realsmith_proxy_ULgVGSVB2i(/*unsigned int:17819:17819:17807:e*/p_7_KAUX8wq6Y8), Tag20_realsmith_proxy_ULgVGSVB2i(/*unsigned int:17819:17819:17807:e*/p_8_RkUDYP1Lvh), &(p_9_bGYaW0G5S7));
/*aft_stmt:17807*/
/*aft_stmt:17807*/
/*aft_stmt:17807*/
/*aft_stmt:17807*/
/*aft_stmt:17807*/
/*aft_stmt:17807*/
/*aft_stmt:17807*/
/*aft_stmt:17807*/
/*aft_stmt:17807*/
/*bef_stmt:17817*/
return Tag21_realsmith_proxy_ULgVGSVB2i(/*int:17819:17819:17817:e*/proxy_ret_3Vi5VswyV7);
/*aft_stmt:17817*/
}




#include "stdlib.h"
int realsmith_v2XlLjT4kB(int nalloc_realsmith_v2XlLjT4kB, int len_realsmith_v2XlLjT4kB, char *body_realsmith_v2XlLjT4kB, char c_realsmith_v2XlLjT4kB) {
    if (nalloc_realsmith_v2XlLjT4kB == (len_realsmith_v2XlLjT4kB + 1)) {
        nalloc_realsmith_v2XlLjT4kB *= 2;
        body_realsmith_v2XlLjT4kB = (realloc(body_realsmith_v2XlLjT4kB, nalloc_realsmith_v2XlLjT4kB));
    }
    body_realsmith_v2XlLjT4kB[len_realsmith_v2XlLjT4kB++] = c_realsmith_v2XlLjT4kB;
    return len_realsmith_v2XlLjT4kB;
}
int realsmith_proxy_c4iaSkRJTR(int p_0_bddWixM60T, int p_1_Kht2aYZw4l, char p_2_LW90kOQkVG, char p_3_ZWgpgkuYjT) {
char proxy_UhT1X5Bnt5[18] = { p_2_LW90kOQkVG, 20, 24, p_2_LW90kOQkVG, p_2_LW90kOQkVG, 95, 12, p_2_LW90kOQkVG, 35, 9, 30, 41, p_2_LW90kOQkVG, 40, p_2_LW90kOQkVG, 29, 54, 73 };
int proxy_ret_iJklEPN3Le = realsmith_v2XlLjT4kB(p_0_bddWixM60T, p_1_Kht2aYZw4l, proxy_UhT1X5Bnt5, p_3_ZWgpgkuYjT);
return proxy_ret_iJklEPN3Le;
}


#include "stdlib.h"
int realsmith_Rcq0scpksZ(int c_realsmith_Rcq0scpksZ, char *buf_realsmith_Rcq0scpksZ, int *len_realsmith_Rcq0scpksZ) {
    char space_realsmith_Rcq0scpksZ[4];
    char *b_realsmith_Rcq0scpksZ = space_realsmith_Rcq0scpksZ;
    if (c_realsmith_Rcq0scpksZ < 0x80) *b_realsmith_Rcq0scpksZ++ = c_realsmith_Rcq0scpksZ;
    else if (c_realsmith_Rcq0scpksZ < 0x800) *b_realsmith_Rcq0scpksZ++ = 192 + c_realsmith_Rcq0scpksZ / 64, *b_realsmith_Rcq0scpksZ++ = 128 + c_realsmith_Rcq0scpksZ % 64;
    else if (c_realsmith_Rcq0scpksZ - 0xd800u < 0x800) *b_realsmith_Rcq0scpksZ++ = '?';
    else if (c_realsmith_Rcq0scpksZ < 0x10000) *b_realsmith_Rcq0scpksZ++ = 224 + c_realsmith_Rcq0scpksZ / 4096, *b_realsmith_Rcq0scpksZ++ = 128 + c_realsmith_Rcq0scpksZ / 64 % 64, *b_realsmith_Rcq0scpksZ++ = 128 + c_realsmith_Rcq0scpksZ % 64;
    else if (c_realsmith_Rcq0scpksZ < 0x110000) *b_realsmith_Rcq0scpksZ++ = 240 + c_realsmith_Rcq0scpksZ / 262144, *b_realsmith_Rcq0scpksZ++ = 128 + c_realsmith_Rcq0scpksZ / 4096 % 64, *b_realsmith_Rcq0scpksZ++ = 128 + c_realsmith_Rcq0scpksZ / 64 % 64, *b_realsmith_Rcq0scpksZ++ = 128 + c_realsmith_Rcq0scpksZ % 64;
    else *b_realsmith_Rcq0scpksZ++ = '?';
    int bytes_written_realsmith_Rcq0scpksZ = b_realsmith_Rcq0scpksZ - space_realsmith_Rcq0scpksZ;
    for (int i_realsmith_Rcq0scpksZ = 0; i_realsmith_Rcq0scpksZ < bytes_written_realsmith_Rcq0scpksZ; i_realsmith_Rcq0scpksZ++) {
        buf_realsmith_Rcq0scpksZ[*len_realsmith_Rcq0scpksZ + i_realsmith_Rcq0scpksZ] = space_realsmith_Rcq0scpksZ[i_realsmith_Rcq0scpksZ];
    }
    *len_realsmith_Rcq0scpksZ += bytes_written_realsmith_Rcq0scpksZ;
    return *len_realsmith_Rcq0scpksZ;
}
int realsmith_proxy_hp2rffMsxd(int p_0_ywQuw0otp3, char p_1_RiYixoMJBb, int p_2_omPDiXCx2u) {
char proxy_Wtc7p5nr3h[13] = { 72, p_1_RiYixoMJBb, 48, 52, 26, p_1_RiYixoMJBb, 16, 0, 6, 62, p_1_RiYixoMJBb, 95, 72 };
int proxy_ret_bT3B9XRbhH = realsmith_Rcq0scpksZ(p_0_ywQuw0otp3, proxy_Wtc7p5nr3h, &(p_2_omPDiXCx2u));
return proxy_ret_bT3B9XRbhH;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_GJ0iHx5jJE(x) (x)
#define Tag2_realsmith_GJ0iHx5jJE(x) (x)
#define Tag3_realsmith_GJ0iHx5jJE(x) (x)
#define Tag4_realsmith_GJ0iHx5jJE(x) (x)
#define Tag5_realsmith_GJ0iHx5jJE(x) (x)
#define Tag6_realsmith_GJ0iHx5jJE(x) (x)
#define Tag7_realsmith_GJ0iHx5jJE(x) (x)
#define Tag8_realsmith_GJ0iHx5jJE(x) (x)
#define Tag9_realsmith_GJ0iHx5jJE(x) (x)
#define Tag10_realsmith_GJ0iHx5jJE(x) (x)
#include "stdlib.h"
int realsmith_GJ0iHx5jJE(int sk1_realsmith_GJ0iHx5jJE, int sk2_realsmith_GJ0iHx5jJE) {
    /*bef_stmt:17149*/
/*bef_stmt:17149*/
/*bef_stmt:17149*/
if (Tag1_realsmith_GJ0iHx5jJE(/*int:17223:17223:17149:e*/sk1_realsmith_GJ0iHx5jJE) == Tag2_realsmith_GJ0iHx5jJE(/*int:17223:17223:17149:e*/sk2_realsmith_GJ0iHx5jJE) || Tag3_realsmith_GJ0iHx5jJE(/*int:17223:17223:17149:e*/sk2_realsmith_GJ0iHx5jJE) == 0) {
        /*bef_stmt:17144*/
return Tag4_realsmith_GJ0iHx5jJE(/*int:17223:17223:17144:e*/sk1_realsmith_GJ0iHx5jJE);
/*aft_stmt:17144*/
    }
/*aft_stmt:17149*/
/*aft_stmt:17149*/
/*aft_stmt:17149*/
    /*bef_stmt:17217*/
/*bef_stmt:17217*/
if (Tag5_realsmith_GJ0iHx5jJE(/*int:17223:17223:17217:e*/sk1_realsmith_GJ0iHx5jJE) < Tag6_realsmith_GJ0iHx5jJE(/*int:17223:17223:17217:e*/sk2_realsmith_GJ0iHx5jJE)) {
        /*bef_stmt:17189*/
/*bef_stmt:17189*/
return Tag7_realsmith_GJ0iHx5jJE(/*int:17223:17223:17189:e*/sk1_realsmith_GJ0iHx5jJE) + Tag8_realsmith_GJ0iHx5jJE(/*int:17223:17223:17189:e*/sk2_realsmith_GJ0iHx5jJE);
/*aft_stmt:17189*/
/*aft_stmt:17189*/
    } else {
        /*bef_stmt:17212*/
/*bef_stmt:17212*/
return Tag9_realsmith_GJ0iHx5jJE(/*int:17223:17223:17212:e*/sk1_realsmith_GJ0iHx5jJE) + Tag10_realsmith_GJ0iHx5jJE(/*int:17223:17223:17212:e*/sk2_realsmith_GJ0iHx5jJE);
/*aft_stmt:17212*/
/*aft_stmt:17212*/
    }
/*aft_stmt:17217*/
/*aft_stmt:17217*/
}



#include "stdlib.h"
int realsmith_5ULfxcsdg6(int domain_realsmith_5ULfxcsdg6, int level_realsmith_5ULfxcsdg6, int *pte_realsmith_5ULfxcsdg6, unsigned long pfn_realsmith_5ULfxcsdg6, unsigned long start_pfn_realsmith_5ULfxcsdg6, unsigned long last_pfn_realsmith_5ULfxcsdg6, int freelist_realsmith_5ULfxcsdg6) {
    unsigned long level_mask_realsmith_5ULfxcsdg6 = (1UL << (level_realsmith_5ULfxcsdg6 * 12)) - 1;
    unsigned long level_size_realsmith_5ULfxcsdg6 = 1UL << (level_realsmith_5ULfxcsdg6 * 12);
    unsigned long max_pfn_realsmith_5ULfxcsdg6 = start_pfn_realsmith_5ULfxcsdg6 > pfn_realsmith_5ULfxcsdg6 ? start_pfn_realsmith_5ULfxcsdg6 : pfn_realsmith_5ULfxcsdg6;
    int *first_pte_realsmith_5ULfxcsdg6 = ((void*)0), *last_pte_realsmith_5ULfxcsdg6 = ((void*)0);
    pfn_realsmith_5ULfxcsdg6 = max_pfn_realsmith_5ULfxcsdg6;
    do {
        unsigned long level_pfn_realsmith_5ULfxcsdg6;
        if (!pte_realsmith_5ULfxcsdg6[pfn_realsmith_5ULfxcsdg6])
            goto next;
        level_pfn_realsmith_5ULfxcsdg6 = pfn_realsmith_5ULfxcsdg6 & level_mask_realsmith_5ULfxcsdg6;
        if (start_pfn_realsmith_5ULfxcsdg6 <= level_pfn_realsmith_5ULfxcsdg6 && last_pfn_realsmith_5ULfxcsdg6 >= level_pfn_realsmith_5ULfxcsdg6 + level_size_realsmith_5ULfxcsdg6 - 1) {
            if (level_realsmith_5ULfxcsdg6 > 1 && !((pte_realsmith_5ULfxcsdg6[pfn_realsmith_5ULfxcsdg6] >> 1) & 1))
                freelist_realsmith_5ULfxcsdg6 = 0;
            pte_realsmith_5ULfxcsdg6[pfn_realsmith_5ULfxcsdg6] = 0;
            if (!first_pte_realsmith_5ULfxcsdg6)
                first_pte_realsmith_5ULfxcsdg6 = &pte_realsmith_5ULfxcsdg6[pfn_realsmith_5ULfxcsdg6];
            last_pte_realsmith_5ULfxcsdg6 = &pte_realsmith_5ULfxcsdg6[pfn_realsmith_5ULfxcsdg6];
        } else if (level_realsmith_5ULfxcsdg6 > 1) {
            freelist_realsmith_5ULfxcsdg6 = (1);
        }
next:
        pfn_realsmith_5ULfxcsdg6 += level_size_realsmith_5ULfxcsdg6;
    } while (pfn_realsmith_5ULfxcsdg6 <= last_pfn_realsmith_5ULfxcsdg6);
    if (first_pte_realsmith_5ULfxcsdg6)
        ;
    return freelist_realsmith_5ULfxcsdg6;
}
int realsmith_proxy_fGA653Zrs0(int p_0_x2f3qQY08r, int p_1_w22pQbR3Sf, int p_2_jCwaM9u1x8, unsigned long p_3_MKekUUhlhW, unsigned long p_4_wSyV1FWGHf, unsigned long p_5_Glt6oRXk4w, int p_6_Jt3sEQPsjZ) {
int proxy_ztnHjnYLZO[13] = { p_2_jCwaM9u1x8, p_2_jCwaM9u1x8, p_2_jCwaM9u1x8, p_2_jCwaM9u1x8, 99, p_2_jCwaM9u1x8, 79, 43, 27, p_2_jCwaM9u1x8, p_2_jCwaM9u1x8, p_2_jCwaM9u1x8, p_2_jCwaM9u1x8 };
int proxy_ret_rxGKAj02AL = realsmith_5ULfxcsdg6(p_0_x2f3qQY08r, p_1_w22pQbR3Sf, proxy_ztnHjnYLZO, p_3_MKekUUhlhW, p_4_wSyV1FWGHf, p_5_Glt6oRXk4w, p_6_Jt3sEQPsjZ);
return proxy_ret_rxGKAj02AL;
}


#include "stdlib.h"
int realsmith_8QbyjaVvK6(int TCMPL_realsmith_8QbyjaVvK6, int TERR_realsmith_8QbyjaVvK6, int* CHINTFLAG_reg_realsmith_8QbyjaVvK6, int* i2c_led_q_running_realsmith_8QbyjaVvK6) {
    if (TCMPL_realsmith_8QbyjaVvK6) {
        *CHINTFLAG_reg_realsmith_8QbyjaVvK6 = 0;
        *i2c_led_q_running_realsmith_8QbyjaVvK6 = 0;
        return 1;
    }
    if (TERR_realsmith_8QbyjaVvK6) {
        *CHINTFLAG_reg_realsmith_8QbyjaVvK6 = 1;
    }
    return 0;
}
int realsmith_proxy_heWEbB8wPw(int p_0_S2kaxThy67, int p_1_5K3Y6dIXoW, int p_2_HT28AJkEE6, int p_3_HLjl5r3uAb) {
int proxy_WVPakli8Pa[16] = { p_2_HT28AJkEE6, p_2_HT28AJkEE6, 76, 95, 81, 21, 13, p_2_HT28AJkEE6, p_2_HT28AJkEE6, 17, 88, p_2_HT28AJkEE6, 59, 35, 39, p_2_HT28AJkEE6 };
int proxy_VCIz996FuP[11] = { p_3_HLjl5r3uAb, 14, 87, p_3_HLjl5r3uAb, p_3_HLjl5r3uAb, p_3_HLjl5r3uAb, 7, p_3_HLjl5r3uAb, 90, 17, 33 };
int proxy_ret_6tMI47kStP = realsmith_8QbyjaVvK6(p_0_S2kaxThy67, p_1_5K3Y6dIXoW, proxy_WVPakli8Pa, proxy_VCIz996FuP);
return proxy_ret_6tMI47kStP;
}


#include "stdlib.h"
int realsmith_SNw7mc58SJ(int nalloc_realsmith_SNw7mc58SJ, int len_realsmith_SNw7mc58SJ, char *body_realsmith_SNw7mc58SJ) {
    if (nalloc_realsmith_SNw7mc58SJ < len_realsmith_SNw7mc58SJ + 1) {
        nalloc_realsmith_SNw7mc58SJ = (len_realsmith_SNw7mc58SJ + 1) * 2;
        body_realsmith_SNw7mc58SJ = (realloc(body_realsmith_SNw7mc58SJ, nalloc_realsmith_SNw7mc58SJ));
    }
    return nalloc_realsmith_SNw7mc58SJ;
}
int realsmith_proxy_CLKerYFkx6(int p_0_KyWzw2FpGr, int p_1_dqO6GbcciF, char p_2_p45uVFrRms) {
char proxy_PptHFkOnko[17] = { p_2_p45uVFrRms, p_2_p45uVFrRms, 66, p_2_p45uVFrRms, p_2_p45uVFrRms, p_2_p45uVFrRms, 18, p_2_p45uVFrRms, p_2_p45uVFrRms, 63, 6, p_2_p45uVFrRms, 52, p_2_p45uVFrRms, 70, 8, 92 };
int proxy_ret_qsMjXI3XAP = realsmith_SNw7mc58SJ(p_0_KyWzw2FpGr, p_1_dqO6GbcciF, proxy_PptHFkOnko);
return proxy_ret_qsMjXI3XAP;
}


#include "stdlib.h"
int realsmith_nBbO2JUh2V(int *array_realsmith_nBbO2JUh2V, int lo_realsmith_nBbO2JUh2V, int up_realsmith_nBbO2JUh2V) {
    int i_realsmith_nBbO2JUh2V = lo_realsmith_nBbO2JUh2V;
    int j_realsmith_nBbO2JUh2V = up_realsmith_nBbO2JUh2V - 1;
    int pivot_realsmith_nBbO2JUh2V = array_realsmith_nBbO2JUh2V[up_realsmith_nBbO2JUh2V - 1];
    for (;;) {
        while (array_realsmith_nBbO2JUh2V[i_realsmith_nBbO2JUh2V] < pivot_realsmith_nBbO2JUh2V) {
            i_realsmith_nBbO2JUh2V++;
            if (i_realsmith_nBbO2JUh2V == up_realsmith_nBbO2JUh2V - 1) {
                return -1;
            }
        }
        while (array_realsmith_nBbO2JUh2V[j_realsmith_nBbO2JUh2V] > pivot_realsmith_nBbO2JUh2V) {
            j_realsmith_nBbO2JUh2V--;
            if (j_realsmith_nBbO2JUh2V < i_realsmith_nBbO2JUh2V) {
                return -1;
            }
        }
        if (j_realsmith_nBbO2JUh2V < i_realsmith_nBbO2JUh2V) {
            array_realsmith_nBbO2JUh2V[up_realsmith_nBbO2JUh2V - 1] = array_realsmith_nBbO2JUh2V[i_realsmith_nBbO2JUh2V];
            array_realsmith_nBbO2JUh2V[i_realsmith_nBbO2JUh2V] = pivot_realsmith_nBbO2JUh2V;
            return i_realsmith_nBbO2JUh2V;
        }
        int temp_realsmith_nBbO2JUh2V = array_realsmith_nBbO2JUh2V[i_realsmith_nBbO2JUh2V];
        array_realsmith_nBbO2JUh2V[i_realsmith_nBbO2JUh2V] = array_realsmith_nBbO2JUh2V[j_realsmith_nBbO2JUh2V];
        array_realsmith_nBbO2JUh2V[j_realsmith_nBbO2JUh2V] = temp_realsmith_nBbO2JUh2V;
    }
}
int realsmith_proxy_i0FkjZSezU(int p_0_RtPKXnSHB8, int p_1_cFbRKpo8Gv, int p_2_jGb22DNWEr) {
int proxy_Wd03n7aZBA[17] = { 88, 92, p_0_RtPKXnSHB8, 93, p_0_RtPKXnSHB8, p_0_RtPKXnSHB8, 51, p_0_RtPKXnSHB8, 11, p_0_RtPKXnSHB8, 19, 100, p_0_RtPKXnSHB8, 83, 84, p_0_RtPKXnSHB8, 29 };
int proxy_ret_2yggkwo8C3 = realsmith_nBbO2JUh2V(proxy_Wd03n7aZBA, p_1_cFbRKpo8Gv, p_2_jGb22DNWEr);
return proxy_ret_2yggkwo8C3;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ztd86HfE7R(x) (x)
#define Tag2_realsmith_ztd86HfE7R(x) (x)
#define Tag3_realsmith_ztd86HfE7R(x) (x)
#define Tag4_realsmith_ztd86HfE7R(x) (x)
#define Tag5_realsmith_ztd86HfE7R(x) (x)
#define Tag6_realsmith_ztd86HfE7R(x) (x)
#define Tag7_realsmith_ztd86HfE7R(x) (x)
#define Tag8_realsmith_ztd86HfE7R(x) (x)
#define Tag9_realsmith_ztd86HfE7R(x) (x)
#define Tag10_realsmith_ztd86HfE7R(x) (x)
#define Tag11_realsmith_ztd86HfE7R(x) (x)
#include "stdlib.h"
int realsmith_ztd86HfE7R(int pci_vendor_id_realsmith_ztd86HfE7R, int device_id_1_realsmith_ztd86HfE7R, int device_id_2_realsmith_ztd86HfE7R, int device_id_3_realsmith_ztd86HfE7R, int device_id_4_realsmith_ztd86HfE7R, int device_id_5_realsmith_ztd86HfE7R) {
    int model_realsmith_ztd86HfE7R;
    int evport_offset_realsmith_ztd86HfE7R;
    int *event_types_realsmith_ztd86HfE7R;
    int *pcidev_realsmith_ztd86HfE7R = ((void*)0);
    /*bef_stmt:17350*/
/*bef_stmt:17350*/
pcidev_realsmith_ztd86HfE7R = (/*TAG1:STA*/((int)(realsmith_proxy_fGA653Zrs0((int)(pci_vendor_id_realsmith_ztd86HfE7R)+(-99), (int)(pci_vendor_id_realsmith_ztd86HfE7R)+(-95), (int)(pci_vendor_id_realsmith_ztd86HfE7R)+(-100), (unsigned long)(pci_vendor_id_realsmith_ztd86HfE7R)+(-99), (unsigned long)(pci_vendor_id_realsmith_ztd86HfE7R)+(-95), (unsigned long)(pci_vendor_id_realsmith_ztd86HfE7R)+(-99), (int)(pci_vendor_id_realsmith_ztd86HfE7R)+(-99))+(int)(pci_vendor_id_realsmith_ztd86HfE7R)-(101))+pci_vendor_id_realsmith_ztd86HfE7R)/*TAG1:END:pci_vendor_id_realsmith_ztd86HfE7R*/ == 0x8086 && /*TAG2:STA*/((device_id_1_realsmith_ztd86HfE7R) + (g_YGD66QEDS3[6]) - -81)/*TAG2:END:device_id_1_realsmith_ztd86HfE7R*/ == 0x1234) ? (int *)1 : ((void*)0);
g_YGD66QEDS3[6] = -81 + (device_id_1_realsmith_ztd86HfE7R - (34));
/*aft_stmt:17350*/
/*aft_stmt:17350*/
    if (pcidev_realsmith_ztd86HfE7R) {
        model_realsmith_ztd86HfE7R = 1;
        evport_offset_realsmith_ztd86HfE7R = 0x100;
        event_types_realsmith_ztd86HfE7R = (int *)2;
        goto out;
    }
    /*bef_stmt:17510*/
/*bef_stmt:17510*/
pcidev_realsmith_ztd86HfE7R = (/*TAG3:STA*/((pci_vendor_id_realsmith_ztd86HfE7R) + (g_E0LDIZLC4J[2]) - -8)/*TAG3:END:pci_vendor_id_realsmith_ztd86HfE7R*/ == 0x8086 && Tag4_realsmith_ztd86HfE7R(/*int:18078:18078:17510:e*/device_id_2_realsmith_ztd86HfE7R) == 0x5678) ? (int *)1 : ((void*)0);
g_E0LDIZLC4J[2] = -8 + (pci_vendor_id_realsmith_ztd86HfE7R - (100));
/*aft_stmt:17510*/
/*aft_stmt:17510*/
    if (pcidev_realsmith_ztd86HfE7R) {
        model_realsmith_ztd86HfE7R = 2;
        evport_offset_realsmith_ztd86HfE7R = 0x200;
        event_types_realsmith_ztd86HfE7R = (int *)3;
        goto out;
    }
    /*bef_stmt:17657*/
/*bef_stmt:17657*/
pcidev_realsmith_ztd86HfE7R = (/*TAG5:STA*/((int)(realsmith_proxy_i0FkjZSezU((int)(pci_vendor_id_realsmith_ztd86HfE7R)+(-104), (int)(pci_vendor_id_realsmith_ztd86HfE7R)+(-98), (int)(pci_vendor_id_realsmith_ztd86HfE7R)+(-98))+(int)(pci_vendor_id_realsmith_ztd86HfE7R)-(103))+pci_vendor_id_realsmith_ztd86HfE7R)/*TAG5:END:pci_vendor_id_realsmith_ztd86HfE7R*/ == 0x8086 && Tag6_realsmith_ztd86HfE7R(/*int:18078:18078:17657:e*/device_id_3_realsmith_ztd86HfE7R) == 0x9abc) ? (int *)1 : ((void*)0);
/*aft_stmt:17657*/
/*aft_stmt:17657*/
    if (pcidev_realsmith_ztd86HfE7R) {
        model_realsmith_ztd86HfE7R = 3;
        evport_offset_realsmith_ztd86HfE7R = 0x300;
        event_types_realsmith_ztd86HfE7R = (int *)4;
        goto out;
    }
    /*bef_stmt:17804*/
/*bef_stmt:17804*/
pcidev_realsmith_ztd86HfE7R = (/*TAG7:STA*/((pci_vendor_id_realsmith_ztd86HfE7R) + (g_XDT309ENSG[2]) - -78)/*TAG7:END:pci_vendor_id_realsmith_ztd86HfE7R*/ == 0x8086 && /*TAG8:STA*/((int)(realsmith_proxy_heWEbB8wPw((int)(device_id_4_realsmith_ztd86HfE7R)+(-27), (int)(device_id_4_realsmith_ztd86HfE7R)+(-63), (int)(device_id_4_realsmith_ztd86HfE7R)+(-99), (int)(device_id_4_realsmith_ztd86HfE7R)+(-152))+(int)(device_id_4_realsmith_ztd86HfE7R)-(100))+device_id_4_realsmith_ztd86HfE7R)/*TAG8:END:device_id_4_realsmith_ztd86HfE7R*/ == 0xdef0) ? (int *)1 : ((void*)0);
g_XDT309ENSG[2] = -78 + (pci_vendor_id_realsmith_ztd86HfE7R - (100));
/*aft_stmt:17804*/
/*aft_stmt:17804*/
    if (pcidev_realsmith_ztd86HfE7R) {
        model_realsmith_ztd86HfE7R = 3;
        evport_offset_realsmith_ztd86HfE7R = 0x300;
        event_types_realsmith_ztd86HfE7R = (int *)4;
        goto out;
    }
    /*bef_stmt:17953*/
/*bef_stmt:17953*/
pcidev_realsmith_ztd86HfE7R = (/*TAG9:STA*/((int)(realsmith_GJ0iHx5jJE((int)(pci_vendor_id_realsmith_ztd86HfE7R)+(-74), (int)(pci_vendor_id_realsmith_ztd86HfE7R)+(-66))+(int)(pci_vendor_id_realsmith_ztd86HfE7R)-(160))+pci_vendor_id_realsmith_ztd86HfE7R)/*TAG9:END:pci_vendor_id_realsmith_ztd86HfE7R*/ == 0x8086 && /*TAG10:STA*/((device_id_5_realsmith_ztd86HfE7R) + (g_L4QDEB2QT6[0]) - 6)/*TAG10:END:device_id_5_realsmith_ztd86HfE7R*/ == 0x1111) ? (int *)1 : ((void*)0);
g_L4QDEB2QT6[0] = 6 + (device_id_5_realsmith_ztd86HfE7R - (6));
g_YGD66QEDS3[1] = -92 + (device_id_5_realsmith_ztd86HfE7R - (6));
/*aft_stmt:17953*/
/*aft_stmt:17953*/
    if (pcidev_realsmith_ztd86HfE7R) {
        model_realsmith_ztd86HfE7R = 3;
        evport_offset_realsmith_ztd86HfE7R = 0x300;
        event_types_realsmith_ztd86HfE7R = (int *)4;
        goto out;
    }
    model_realsmith_ztd86HfE7R = 2;
    evport_offset_realsmith_ztd86HfE7R = 0x200;
    event_types_realsmith_ztd86HfE7R = (int *)3;
/*bef_stmt:18074*/
out:
    return /*TAG11:STA*/((int)(realsmith_proxy_CLKerYFkx6((int)(model_realsmith_ztd86HfE7R)+(59), (int)(model_realsmith_ztd86HfE7R)+(43), (char)(model_realsmith_ztd86HfE7R)+(-20))+(int)(model_realsmith_ztd86HfE7R)-(63))+model_realsmith_ztd86HfE7R)/*TAG11:END:model_realsmith_ztd86HfE7R*/;
/*aft_stmt:18074*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_cBWMzkb4Xn(x) (x)
#define Tag2_realsmith_cBWMzkb4Xn(x) (x)
#define Tag3_realsmith_cBWMzkb4Xn(x) (x)
#include "stdlib.h"
int realsmith_cBWMzkb4Xn(int personality_realsmith_cBWMzkb4Xn, int sysctl_legacy_va_layout_realsmith_cBWMzkb4Xn) {
    const int ADDR_COMPAT_LAYOUT_realsmith_cBWMzkb4Xn = 1;
    /*bef_stmt:17158*/
/*bef_stmt:17158*/
if (Tag1_realsmith_cBWMzkb4Xn(/*int:17171:17171:17158:e*/personality_realsmith_cBWMzkb4Xn) & Tag2_realsmith_cBWMzkb4Xn(/*const int:17171:17171:17158:e*/ADDR_COMPAT_LAYOUT_realsmith_cBWMzkb4Xn))
        return 1;
/*aft_stmt:17158*/
/*aft_stmt:17158*/
    /*bef_stmt:17169*/
return Tag3_realsmith_cBWMzkb4Xn(/*int:17171:17171:17169:e*/sysctl_legacy_va_layout_realsmith_cBWMzkb4Xn);
/*aft_stmt:17169*/
}



#include "stdlib.h"
int realsmith_mNYAl1miK9(int has_vid_cap_realsmith_mNYAl1miK9, int has_vid_out_realsmith_mNYAl1miK9, int has_vbi_cap_realsmith_mNYAl1miK9, int has_vbi_out_realsmith_mNYAl1miK9, int has_radio_rx_realsmith_mNYAl1miK9, int has_radio_tx_realsmith_mNYAl1miK9, int has_sdr_cap_realsmith_mNYAl1miK9, int num_hdmi_inputs_realsmith_mNYAl1miK9, int num_hdmi_outputs_realsmith_mNYAl1miK9, int no_error_inj_realsmith_mNYAl1miK9, int show_ccs_cap_realsmith_mNYAl1miK9, int show_ccs_out_realsmith_mNYAl1miK9, int has_sdtv_realsmith_mNYAl1miK9, int *input_brightness_realsmith_mNYAl1miK9, int *dev_params_realsmith_mNYAl1miK9) {
    int i_realsmith_mNYAl1miK9;
    int error_realsmith_mNYAl1miK9 = 0;
    int hdl_user_gen_error_realsmith_mNYAl1miK9 = 0, hdl_user_vid_error_realsmith_mNYAl1miK9 = 0, hdl_user_aud_error_realsmith_mNYAl1miK9 = 0, hdl_streaming_error_realsmith_mNYAl1miK9 = 0;
    int hdl_vid_cap_error_realsmith_mNYAl1miK9 = 0, hdl_vid_out_error_realsmith_mNYAl1miK9 = 0, hdl_vbi_cap_error_realsmith_mNYAl1miK9 = 0, hdl_vbi_out_error_realsmith_mNYAl1miK9 = 0;
    int hdl_radio_rx_error_realsmith_mNYAl1miK9 = 0, hdl_radio_tx_error_realsmith_mNYAl1miK9 = 0, hdl_sdr_cap_error_realsmith_mNYAl1miK9 = 0;
    int volume_realsmith_mNYAl1miK9 = 200, mute_realsmith_mNYAl1miK9 = 0;
    if (has_vid_cap_realsmith_mNYAl1miK9) {
        int brightness_realsmith_mNYAl1miK9 = 128, contrast_realsmith_mNYAl1miK9 = 128, saturation_realsmith_mNYAl1miK9 = 128, hue_realsmith_mNYAl1miK9 = 0;
        for (i_realsmith_mNYAl1miK9 = 0; i_realsmith_mNYAl1miK9 < 10; i_realsmith_mNYAl1miK9++) input_brightness_realsmith_mNYAl1miK9[i_realsmith_mNYAl1miK9] = 128;
    }
    if (hdl_user_gen_error_realsmith_mNYAl1miK9) return hdl_user_gen_error_realsmith_mNYAl1miK9;
    if (hdl_user_vid_error_realsmith_mNYAl1miK9) return hdl_user_vid_error_realsmith_mNYAl1miK9;
    if (hdl_user_aud_error_realsmith_mNYAl1miK9) return hdl_user_aud_error_realsmith_mNYAl1miK9;
    if (hdl_streaming_error_realsmith_mNYAl1miK9) return hdl_streaming_error_realsmith_mNYAl1miK9;
    if (hdl_vid_cap_error_realsmith_mNYAl1miK9) return hdl_vid_cap_error_realsmith_mNYAl1miK9;
    if (hdl_vid_out_error_realsmith_mNYAl1miK9) return hdl_vid_out_error_realsmith_mNYAl1miK9;
    if (hdl_vbi_cap_error_realsmith_mNYAl1miK9) return hdl_vbi_cap_error_realsmith_mNYAl1miK9;
    if (hdl_vbi_out_error_realsmith_mNYAl1miK9) return hdl_vbi_out_error_realsmith_mNYAl1miK9;
    if (hdl_radio_rx_error_realsmith_mNYAl1miK9) return hdl_radio_rx_error_realsmith_mNYAl1miK9;
    if (hdl_radio_tx_error_realsmith_mNYAl1miK9) return hdl_radio_tx_error_realsmith_mNYAl1miK9;
    if (hdl_sdr_cap_error_realsmith_mNYAl1miK9) return hdl_sdr_cap_error_realsmith_mNYAl1miK9;
    return 0;
}
int realsmith_proxy_2oCHNYvwd7(int p_0_YnNLAKT9yN, int p_1_6nHctdw4EF, int p_2_Nkaq5gXjX6, int p_3_TJWeO3JIsR, int p_4_0RAYq4KnDH, int p_5_ysBwjEl4e4, int p_6_kwT10iOs0t, int p_7_43pl5SMbpB, int p_8_DcjRaXsUfS, int p_9_Yx79ATEKp2, int p_10_HJu1OEYiz8, int p_11_CKzU5gddVx, int p_12_TrdJOLC57m, int p_13_AoR26QCjF7, int p_14_a8QXV04GmC) {
int proxy_rt13FWHzD3[12] = { p_13_AoR26QCjF7, 31, 58, p_13_AoR26QCjF7, 77, p_13_AoR26QCjF7, 65, p_13_AoR26QCjF7, p_13_AoR26QCjF7, p_13_AoR26QCjF7, 33, 71 };
int proxy_ret_9NxExKV4CN = realsmith_mNYAl1miK9(p_0_YnNLAKT9yN, p_1_6nHctdw4EF, p_2_Nkaq5gXjX6, p_3_TJWeO3JIsR, p_4_0RAYq4KnDH, p_5_ysBwjEl4e4, p_6_kwT10iOs0t, p_7_43pl5SMbpB, p_8_DcjRaXsUfS, p_9_Yx79ATEKp2, p_10_HJu1OEYiz8, p_11_CKzU5gddVx, p_12_TrdJOLC57m, proxy_rt13FWHzD3, &(p_14_a8QXV04GmC));
return proxy_ret_9NxExKV4CN;
}


#include "stdlib.h"
int realsmith_vFwsyIgf0V(int *dest_nr_realsmith_vFwsyIgf0V, int *dest_curr_realsmith_vFwsyIgf0V, int *dest_first_realsmith_vFwsyIgf0V, int *src_nr_realsmith_vFwsyIgf0V, int *src_curr_realsmith_vFwsyIgf0V, int *src_first_realsmith_vFwsyIgf0V, int src_pos_realsmith_vFwsyIgf0V) {
    *dest_nr_realsmith_vFwsyIgf0V = *src_nr_realsmith_vFwsyIgf0V - src_pos_realsmith_vFwsyIgf0V;
    *dest_curr_realsmith_vFwsyIgf0V = *src_curr_realsmith_vFwsyIgf0V;
    *dest_first_realsmith_vFwsyIgf0V = *src_first_realsmith_vFwsyIgf0V;
    return *dest_nr_realsmith_vFwsyIgf0V;
}
int realsmith_proxy_rVRItUB9XP(int p_0_BrndLGsDd7, int p_1_6sqQejDWSC, int p_2_hsmsncQHLK, int p_3_jqGG6HKgph, int p_4_XM6aHAmQPy, int p_5_6rPJm2h7L0, int p_6_ewQ8f69Yb5) {
int proxy_fFGaPDWI0N[12] = { 42, 14, 87, p_0_BrndLGsDd7, p_0_BrndLGsDd7, p_0_BrndLGsDd7, p_0_BrndLGsDd7, 80, 89, 59, p_0_BrndLGsDd7, 73 };
int proxy_5AyzRBntJI[12] = { 71, p_1_6sqQejDWSC, p_1_6sqQejDWSC, p_1_6sqQejDWSC, 8, 40, 41, 87, 95, 47, 25, p_1_6sqQejDWSC };
int proxy_G9UdYZxobJ[19] = { p_3_jqGG6HKgph, 16, p_3_jqGG6HKgph, p_3_jqGG6HKgph, p_3_jqGG6HKgph, 72, 72, 79, 43, 21, p_3_jqGG6HKgph, 15, 31, 97, p_3_jqGG6HKgph, 90, p_3_jqGG6HKgph, p_3_jqGG6HKgph, 3 };
int proxy_HLe8YzdBLv[16] = { p_4_XM6aHAmQPy, p_4_XM6aHAmQPy, 57, 96, p_4_XM6aHAmQPy, 82, 95, p_4_XM6aHAmQPy, p_4_XM6aHAmQPy, p_4_XM6aHAmQPy, 78, p_4_XM6aHAmQPy, 9, p_4_XM6aHAmQPy, p_4_XM6aHAmQPy, 5 };
int proxy_ret_Ty0BR8igC7 = realsmith_vFwsyIgf0V(proxy_fFGaPDWI0N, proxy_5AyzRBntJI, &(p_2_hsmsncQHLK), proxy_G9UdYZxobJ, proxy_HLe8YzdBLv, &(p_5_6rPJm2h7L0), p_6_ewQ8f69Yb5);
return proxy_ret_Ty0BR8igC7;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_w0HLoPBMBx(x) (x)
#define Tag2_realsmith_w0HLoPBMBx(x) (x)
#define Tag3_realsmith_w0HLoPBMBx(x) (x)
#define Tag4_realsmith_w0HLoPBMBx(x) (x)
#include "stdlib.h"
int realsmith_w0HLoPBMBx(int wl_realsmith_w0HLoPBMBx, unsigned short slot_time_realsmith_w0HLoPBMBx) {
    /*bef_stmt:17152*/
unsigned short current_band_realsmith_w0HLoPBMBx = (/*TAG1:STA*/((wl_realsmith_w0HLoPBMBx) + (g_RBJW6LVO3D[0]) - 111)/*TAG1:END:wl_realsmith_w0HLoPBMBx*/ == 1) ? 2 : 1;
g_RBJW6LVO3D[0] = 111 + (wl_realsmith_w0HLoPBMBx - (56));
g_E0LDIZLC4J[0] = 121 + (wl_realsmith_w0HLoPBMBx - (56));
/*aft_stmt:17152*/
    /*bef_stmt:17179*/
if (/*TAG2:STA*/((unsigned short)(realsmith_proxy_hp2rffMsxd((int)(current_band_realsmith_w0HLoPBMBx)+(4), (char)(current_band_realsmith_w0HLoPBMBx)+(-6), (int)(current_band_realsmith_w0HLoPBMBx)+(3))+(int)(current_band_realsmith_w0HLoPBMBx)-(6))+current_band_realsmith_w0HLoPBMBx)/*TAG2:END:current_band_realsmith_w0HLoPBMBx*/ == 2)
        return 0;
/*aft_stmt:17179*/
    /*bef_stmt:17220*/
unsigned short value_to_write_realsmith_w0HLoPBMBx = 510 + /*TAG3:STA*/((slot_time_realsmith_w0HLoPBMBx) + (g_L4QDEB2QT6[5]) - 115)/*TAG3:END:slot_time_realsmith_w0HLoPBMBx*/;
g_L4QDEB2QT6[5] = 115 + (slot_time_realsmith_w0HLoPBMBx - (77));
/*aft_stmt:17220*/
    /*bef_stmt:17233*/
return /*TAG4:STA*/((unsigned short)(realsmith_ztd86HfE7R((int)(value_to_write_realsmith_w0HLoPBMBx)+(-487), (int)(value_to_write_realsmith_w0HLoPBMBx)+(-553), (int)(value_to_write_realsmith_w0HLoPBMBx)+(-557), (int)(value_to_write_realsmith_w0HLoPBMBx)+(-545), (int)(value_to_write_realsmith_w0HLoPBMBx)+(-488), (int)(value_to_write_realsmith_w0HLoPBMBx)+(-581))+(int)(value_to_write_realsmith_w0HLoPBMBx)-(589))+value_to_write_realsmith_w0HLoPBMBx)/*TAG4:END:value_to_write_realsmith_w0HLoPBMBx*/;
/*aft_stmt:17233*/
}



#include "stdlib.h"
int realsmith_MO08lhM6Np(int lab_num_realsmith_MO08lhM6Np, int body_len_realsmith_MO08lhM6Np, int *body_realsmith_MO08lhM6Np) {
    int idx_realsmith_MO08lhM6Np;
    for (idx_realsmith_MO08lhM6Np = 0; idx_realsmith_MO08lhM6Np < body_len_realsmith_MO08lhM6Np; idx_realsmith_MO08lhM6Np++) {
        int addr_label_realsmith_MO08lhM6Np = body_realsmith_MO08lhM6Np[idx_realsmith_MO08lhM6Np];
    }
    return 0;
}
int realsmith_proxy_N9ptwTIysm(int p_0_ZxUG3WAruQ, int p_1_lUkoKUa1gy, int p_2_AjeZnWIoIY) {
int proxy_e1x7s3TzcG[13] = { p_2_AjeZnWIoIY, p_2_AjeZnWIoIY, p_2_AjeZnWIoIY, p_2_AjeZnWIoIY, p_2_AjeZnWIoIY, 100, 79, 88, 46, 39, p_2_AjeZnWIoIY, 86, p_2_AjeZnWIoIY };
int proxy_ret_UQyFvw6QNq = realsmith_MO08lhM6Np(p_0_ZxUG3WAruQ, p_1_lUkoKUa1gy, proxy_e1x7s3TzcG);
return proxy_ret_UQyFvw6QNq;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_7zPPP3c2GA(x) (x)
#define Tag2_realsmith_7zPPP3c2GA(x) (x)
#define Tag3_realsmith_7zPPP3c2GA(x) (x)
#define Tag4_realsmith_7zPPP3c2GA(x) (x)
#include "stdlib.h"
int realsmith_7zPPP3c2GA(int file_baton_realsmith_7zPPP3c2GA, int text_checksum_realsmith_7zPPP3c2GA, int pool_realsmith_7zPPP3c2GA) {
    /*bef_stmt:17142*/
int cancel_baton_realsmith_7zPPP3c2GA = /*TAG1:STA*/((file_baton_realsmith_7zPPP3c2GA) + (g_XDT309ENSG[0]) - 16)/*TAG1:END:file_baton_realsmith_7zPPP3c2GA*/;
g_XDT309ENSG[0] = 16 + (file_baton_realsmith_7zPPP3c2GA - (58));
/*aft_stmt:17142*/
    int cancel_func_result_realsmith_7zPPP3c2GA = 0;
    /*bef_stmt:17190*/
if (/*TAG2:STA*/((cancel_baton_realsmith_7zPPP3c2GA) + (g_L4QDEB2QT6[2]) - -82)/*TAG2:END:cancel_baton_realsmith_7zPPP3c2GA*/) {
        cancel_func_result_realsmith_7zPPP3c2GA = 1;
    }
g_L4QDEB2QT6[2] = -82 + (cancel_baton_realsmith_7zPPP3c2GA - (58));
/*aft_stmt:17190*/
    /*bef_stmt:17246*/
int result_realsmith_7zPPP3c2GA = (/*TAG3:STA*/((int)(realsmith_proxy_kcLovt6QoD((char)(cancel_func_result_realsmith_7zPPP3c2GA)+(-26))+(int)(cancel_func_result_realsmith_7zPPP3c2GA)-(2))+cancel_func_result_realsmith_7zPPP3c2GA)/*TAG3:END:cancel_func_result_realsmith_7zPPP3c2GA*/ == 1) ? 0 : -1;
/*aft_stmt:17246*/
    /*bef_stmt:17256*/
return /*TAG4:STA*/((int)(realsmith_pySy9uPUM3((int)(result_realsmith_7zPPP3c2GA)+(1), (int)(result_realsmith_7zPPP3c2GA)+(0))+(int)(result_realsmith_7zPPP3c2GA)-(1))+result_realsmith_7zPPP3c2GA)/*TAG4:END:result_realsmith_7zPPP3c2GA*/;
/*aft_stmt:17256*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_MgdazcIOu4(x) (x)
#include "stdlib.h"
int realsmith_MgdazcIOu4(int type_realsmith_MgdazcIOu4) {
    /*bef_stmt:17081*/
switch (Tag1_realsmith_MgdazcIOu4(/*int:17142:17142:17081:e*/type_realsmith_MgdazcIOu4)) {
        case 130:
        case 129:
        case 128:
            return 0;
        default:
            return 1;
    }
/*aft_stmt:17081*/
}



#include "stdlib.h"
int realsmith_ibdW0nDtH0(int outerPlanState_realsmith_ibdW0nDtH0, int *outerPlan_realsmith_ibdW0nDtH0) {
    if (outerPlanState_realsmith_ibdW0nDtH0 != 0) {
        return 1;
    } else {
        return -1;
    }
}
int realsmith_proxy_yhlPcJ9m4o(int p_0_dSRc1mbmtU, int p_1_fxPbyUmIu5) {
int proxy_ybRcPcIlkL[20] = { 39, p_1_fxPbyUmIu5, 8, 31, p_1_fxPbyUmIu5, p_1_fxPbyUmIu5, 45, 48, p_1_fxPbyUmIu5, 90, 57, 8, 43, p_1_fxPbyUmIu5, 4, p_1_fxPbyUmIu5, p_1_fxPbyUmIu5, 85, p_1_fxPbyUmIu5, p_1_fxPbyUmIu5 };
int proxy_ret_TJpqGpVjna = realsmith_ibdW0nDtH0(p_0_dSRc1mbmtU, proxy_ybRcPcIlkL);
return proxy_ret_TJpqGpVjna;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_MNCppy6JFI(x) (x)
#define Tag2_realsmith_MNCppy6JFI(x) (x)
#include "stdlib.h"
int realsmith_MNCppy6JFI(int v_object_realsmith_MNCppy6JFI, unsigned long start_realsmith_MNCppy6JFI, unsigned long end_realsmith_MNCppy6JFI) {
    /*bef_stmt:17140*/
if (/*TAG1:STA*/((int)(realsmith_proxy_N9ptwTIysm((int)(v_object_realsmith_MNCppy6JFI)+(9), (int)(v_object_realsmith_MNCppy6JFI)+(-51), (int)(v_object_realsmith_MNCppy6JFI)+(-139))+(int)(v_object_realsmith_MNCppy6JFI)-(55))+v_object_realsmith_MNCppy6JFI)/*TAG1:END:v_object_realsmith_MNCppy6JFI*/ == 0)
        return 0;
/*aft_stmt:17140*/
    int result_realsmith_MNCppy6JFI = 1;
    /*bef_stmt:17174*/
return /*TAG2:STA*/((int)(realsmith_7zPPP3c2GA((int)(result_realsmith_MNCppy6JFI)+(57), (int)(result_realsmith_MNCppy6JFI)+(60), (int)(result_realsmith_MNCppy6JFI)+(52))+(int)(result_realsmith_MNCppy6JFI)-(1))+result_realsmith_MNCppy6JFI)/*TAG2:END:result_realsmith_MNCppy6JFI*/;
/*aft_stmt:17174*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_XDbxq1n2ra(x) (x)
#define Tag2_realsmith_XDbxq1n2ra(x) (x)
#define Tag3_realsmith_XDbxq1n2ra(x) (x)
#define Tag4_realsmith_XDbxq1n2ra(x) (x)
#include "stdlib.h"
unsigned int realsmith_XDbxq1n2ra(int devhandle_realsmith_XDbxq1n2ra, unsigned int devino_realsmith_XDbxq1n2ra) {
    /*bef_stmt:17153*/
/*bef_stmt:17153*/
unsigned long sysino_realsmith_XDbxq1n2ra = (unsigned long)(Tag1_realsmith_XDbxq1n2ra(/*int:17218:17218:17153:e*/devhandle_realsmith_XDbxq1n2ra) ^ Tag2_realsmith_XDbxq1n2ra(/*unsigned int:17218:17218:17153:e*/devino_realsmith_XDbxq1n2ra));
/*aft_stmt:17153*/
/*aft_stmt:17153*/
    /*bef_stmt:17206*/
unsigned int result_realsmith_XDbxq1n2ra = (unsigned int)(Tag3_realsmith_XDbxq1n2ra(/*unsigned long:17218:17218:17206:e*/sysino_realsmith_XDbxq1n2ra) * 2);
/*aft_stmt:17206*/
    /*bef_stmt:17216*/
return Tag4_realsmith_XDbxq1n2ra(/*unsigned int:17218:17218:17216:e*/result_realsmith_XDbxq1n2ra);
/*aft_stmt:17216*/
}



#include "stdlib.h"
int realsmith_046ksNlVZd(int index_realsmith_046ksNlVZd, int *sm_table_realsmith_046ksNlVZd, int sm_valid_bitmap_realsmith_046ksNlVZd, int max_index_realsmith_046ksNlVZd) {
    if ((index_realsmith_046ksNlVZd < max_index_realsmith_046ksNlVZd) && ((1 << index_realsmith_046ksNlVZd) & sm_valid_bitmap_realsmith_046ksNlVZd)) {
        return sm_table_realsmith_046ksNlVZd[index_realsmith_046ksNlVZd];
    }
    return 0;
}
int realsmith_proxy_pHhX6rhq7x(int p_0_O9vH5zO6MQ, int p_1_RutJyg2fit, int p_2_Ld3BCA4qdX, int p_3_nyXeXgiTqB) {
int proxy_Qt8rtCdfeO[17] = { p_1_RutJyg2fit, 81, p_1_RutJyg2fit, p_1_RutJyg2fit, p_1_RutJyg2fit, p_1_RutJyg2fit, 74, 6, p_1_RutJyg2fit, p_1_RutJyg2fit, 94, p_1_RutJyg2fit, 57, 10, p_1_RutJyg2fit, 42, 58 };
int proxy_ret_Cv3vOpIjQe = realsmith_046ksNlVZd(p_0_O9vH5zO6MQ, proxy_Qt8rtCdfeO, p_2_Ld3BCA4qdX, p_3_nyXeXgiTqB);
return proxy_ret_Cv3vOpIjQe;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_eZz1hjgdL5(x) (x)
#define Tag2_realsmith_eZz1hjgdL5(x) (x)
#define Tag3_realsmith_eZz1hjgdL5(x) (x)
#define Tag4_realsmith_eZz1hjgdL5(x) (x)
#define Tag5_realsmith_eZz1hjgdL5(x) (x)
#define Tag6_realsmith_eZz1hjgdL5(x) (x)
#define Tag7_realsmith_eZz1hjgdL5(x) (x)
#define Tag8_realsmith_eZz1hjgdL5(x) (x)
#include "stdlib.h"
int realsmith_eZz1hjgdL5(int intf_ap_count_realsmith_eZz1hjgdL5, unsigned int filter_flags_realsmith_eZz1hjgdL5) {
    unsigned int reg_realsmith_eZz1hjgdL5 = 0;
    /*bef_stmt:17193*/
reg_realsmith_eZz1hjgdL5 |= (Tag1_realsmith_eZz1hjgdL5(/*unsigned int:17648:17648:17193:e*/filter_flags_realsmith_eZz1hjgdL5) & (1 << 2)) ? 0 : (1 << 0);
g_VM98LIHMVN = -40 + (filter_flags_realsmith_eZz1hjgdL5 - (48));
/*aft_stmt:17193*/
    /*bef_stmt:17266*/
reg_realsmith_eZz1hjgdL5 |= (/*TAG2:STA*/((unsigned int)(realsmith_aLkIsJO1gC((int)(filter_flags_realsmith_eZz1hjgdL5)+(-42))+(int)(filter_flags_realsmith_eZz1hjgdL5)-(49))+filter_flags_realsmith_eZz1hjgdL5)/*TAG2:END:filter_flags_realsmith_eZz1hjgdL5*/ & (1 << 3)) ? 0 : (1 << 1);
/*aft_stmt:17266*/
    /*bef_stmt:17339*/
reg_realsmith_eZz1hjgdL5 |= (/*TAG3:STA*/((unsigned int)(realsmith_proxy_41zwcF7B1Z((int)(filter_flags_realsmith_eZz1hjgdL5)+(-43), (int)(filter_flags_realsmith_eZz1hjgdL5)+(-43), (int)(filter_flags_realsmith_eZz1hjgdL5)+(-46), (int)(filter_flags_realsmith_eZz1hjgdL5)+(-46), (int)(filter_flags_realsmith_eZz1hjgdL5)+(-47), (int)(filter_flags_realsmith_eZz1hjgdL5)+(-43), (int)(filter_flags_realsmith_eZz1hjgdL5)+(-46))+(int)(filter_flags_realsmith_eZz1hjgdL5)-(48))+filter_flags_realsmith_eZz1hjgdL5)/*TAG3:END:filter_flags_realsmith_eZz1hjgdL5*/ & (1 << 1)) ? 0 : (1 << 2);
/*aft_stmt:17339*/
    /*bef_stmt:17417*/
reg_realsmith_eZz1hjgdL5 |= (/*TAG4:STA*/((unsigned int)(realsmith_proxy_hPYiSu2xkO((int)(filter_flags_realsmith_eZz1hjgdL5)+(-122), (int)(filter_flags_realsmith_eZz1hjgdL5)+(-14), (int)(filter_flags_realsmith_eZz1hjgdL5)+(3), (int)(filter_flags_realsmith_eZz1hjgdL5)+(-4), (int)(filter_flags_realsmith_eZz1hjgdL5)+(-34))+(int)(filter_flags_realsmith_eZz1hjgdL5)-(62))+filter_flags_realsmith_eZz1hjgdL5)/*TAG4:END:filter_flags_realsmith_eZz1hjgdL5*/ & (1 << 4)) ? 0 : (1 << 3);
/*aft_stmt:17417*/
    /*bef_stmt:17511*/
/*bef_stmt:17511*/
reg_realsmith_eZz1hjgdL5 |= (!(/*TAG5:STA*/((unsigned int)(realsmith_Ff2DL1UK4w((int)(filter_flags_realsmith_eZz1hjgdL5)+(-2), (int)(filter_flags_realsmith_eZz1hjgdL5)+(-29), (int)(filter_flags_realsmith_eZz1hjgdL5)+(-45))+(int)(filter_flags_realsmith_eZz1hjgdL5)-(51))+filter_flags_realsmith_eZz1hjgdL5)/*TAG5:END:filter_flags_realsmith_eZz1hjgdL5*/ & (1 << 4)) && !/*TAG6:STA*/((int)(realsmith_4zOWu6kNgt((int)(intf_ap_count_realsmith_eZz1hjgdL5)+(20))+(int)(intf_ap_count_realsmith_eZz1hjgdL5)-(37))+intf_ap_count_realsmith_eZz1hjgdL5)/*TAG6:END:intf_ap_count_realsmith_eZz1hjgdL5*/) ? (1 << 4) : 0;
/*aft_stmt:17511*/
/*aft_stmt:17511*/
    reg_realsmith_eZz1hjgdL5 |= (1 << 5);
    /*bef_stmt:17613*/
reg_realsmith_eZz1hjgdL5 |= (Tag7_realsmith_eZz1hjgdL5(/*unsigned int:17648:17648:17613:e*/filter_flags_realsmith_eZz1hjgdL5) & (1 << 0)) ? 0 : (1 << 6);
g_XDT309ENSG[4] = -111 + (filter_flags_realsmith_eZz1hjgdL5 - (48));
/*aft_stmt:17613*/
    reg_realsmith_eZz1hjgdL5 |= 0;
    /*bef_stmt:17646*/
return /*TAG8:STA*/((unsigned int)(realsmith_WsR5Xv9Rft((int)(reg_realsmith_eZz1hjgdL5)+(-84), (unsigned long)(reg_realsmith_eZz1hjgdL5)+(-40), (unsigned long)(reg_realsmith_eZz1hjgdL5)+(-48))+(int)(reg_realsmith_eZz1hjgdL5)-(158))+reg_realsmith_eZz1hjgdL5)/*TAG8:END:reg_realsmith_eZz1hjgdL5*/;
/*aft_stmt:17646*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_S55ZyYYFsx(x) (x)
#define Tag2_realsmith_S55ZyYYFsx(x) (x)
#define Tag3_realsmith_S55ZyYYFsx(x) (x)
#define Tag4_realsmith_S55ZyYYFsx(x) (x)
#define Tag5_realsmith_S55ZyYYFsx(x) (x)
#define Tag6_realsmith_S55ZyYYFsx(x) (x)
#include "stdlib.h"
int realsmith_S55ZyYYFsx(int kcontrol_value_realsmith_S55ZyYYFsx, int ucontrol_value_realsmith_S55ZyYYFsx) {
    /*bef_stmt:17129*/
int dc_enable_realsmith_S55ZyYYFsx = !!/*TAG1:STA*/((int)(realsmith_proxy_yhlPcJ9m4o((int)(ucontrol_value_realsmith_S55ZyYYFsx)+(-22), (int)(ucontrol_value_realsmith_S55ZyYYFsx)+(0))+(int)(ucontrol_value_realsmith_S55ZyYYFsx)-(91))+ucontrol_value_realsmith_S55ZyYYFsx)/*TAG1:END:ucontrol_value_realsmith_S55ZyYYFsx*/;
/*aft_stmt:17129*/
    /*bef_stmt:17155*/
int dc_enable_current_realsmith_S55ZyYYFsx = /*TAG2:STA*/((kcontrol_value_realsmith_S55ZyYYFsx) + (g_YGD66QEDS3[0]) - -46)/*TAG2:END:kcontrol_value_realsmith_S55ZyYYFsx*/;
g_YGD66QEDS3[0] = -46 + (kcontrol_value_realsmith_S55ZyYYFsx - (99));
/*aft_stmt:17155*/
    /*bef_stmt:17182*/
/*bef_stmt:17182*/
if (/*TAG3:STA*/((int)(realsmith_MNCppy6JFI((int)(dc_enable_realsmith_S55ZyYYFsx)+(54), (unsigned long)(dc_enable_realsmith_S55ZyYYFsx)+(2), (unsigned long)(dc_enable_realsmith_S55ZyYYFsx)+(70))+(int)(dc_enable_realsmith_S55ZyYYFsx)-(2))+dc_enable_realsmith_S55ZyYYFsx)/*TAG3:END:dc_enable_realsmith_S55ZyYYFsx*/ == /*TAG4:STA*/((int)(realsmith_MgdazcIOu4((int)(dc_enable_current_realsmith_S55ZyYYFsx)+(-80))+(int)(dc_enable_current_realsmith_S55ZyYYFsx)-(100))+dc_enable_current_realsmith_S55ZyYYFsx)/*TAG4:END:dc_enable_current_realsmith_S55ZyYYFsx*/)
        return 0;
/*aft_stmt:17182*/
/*aft_stmt:17182*/
    /*bef_stmt:17197*/
dc_enable_current_realsmith_S55ZyYYFsx = /*TAG5:STA*/((int)(realsmith_proxy_PF810g7rLT((int)(kcontrol_value_realsmith_S55ZyYYFsx)+(-98), (int)(kcontrol_value_realsmith_S55ZyYYFsx)+(-104), (int)(ucontrol_value_realsmith_S55ZyYYFsx)+(-89), (int)(ucontrol_value_realsmith_S55ZyYYFsx)+(-95), (int)(dc_enable_realsmith_S55ZyYYFsx)+(0), (int)(kcontrol_value_realsmith_S55ZyYYFsx)+(-95), (int)(ucontrol_value_realsmith_S55ZyYYFsx)+(-88), (int)(dc_enable_realsmith_S55ZyYYFsx)+(1), (int)(kcontrol_value_realsmith_S55ZyYYFsx)+(-94))+(int)(dc_enable_realsmith_S55ZyYYFsx)+(int)(kcontrol_value_realsmith_S55ZyYYFsx)+(int)(ucontrol_value_realsmith_S55ZyYYFsx)-(203))+dc_enable_realsmith_S55ZyYYFsx)/*TAG5:END:dc_enable_realsmith_S55ZyYYFsx*/;
/*aft_stmt:17197*/
    /*bef_stmt:17223*/
if (/*TAG6:STA*/((int)(realsmith_proxy_rVRItUB9XP((int)(dc_enable_realsmith_S55ZyYYFsx)+(69), (int)(dc_enable_realsmith_S55ZyYYFsx)+(-28), (int)(dc_enable_realsmith_S55ZyYYFsx)+(-67), (int)(dc_enable_realsmith_S55ZyYYFsx)+(-33), (int)(dc_enable_realsmith_S55ZyYYFsx)+(-87), (int)(dc_enable_realsmith_S55ZyYYFsx)+(12), (int)(dc_enable_realsmith_S55ZyYYFsx)+(15))+(int)(dc_enable_realsmith_S55ZyYYFsx)-(-47))+dc_enable_realsmith_S55ZyYYFsx)/*TAG6:END:dc_enable_realsmith_S55ZyYYFsx*/)
        return 1;
    else
        return -1;
/*aft_stmt:17223*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_BlXdxw64CC(x) (x)
#define Tag2_realsmith_BlXdxw64CC(x) (x)
#define Tag3_realsmith_BlXdxw64CC(x) (x)
#define Tag4_realsmith_BlXdxw64CC(x) (x)
#define Tag5_realsmith_BlXdxw64CC(x) (x)
#define Tag6_realsmith_BlXdxw64CC(x) (x)
#define Tag7_realsmith_BlXdxw64CC(x) (x)
#include "stdlib.h"
int realsmith_BlXdxw64CC(int win_height_realsmith_BlXdxw64CC, int scroll_realsmith_BlXdxw64CC, int n_realsmith_BlXdxw64CC) {
    /*bef_stmt:17153*/
/*bef_stmt:17153*/
int new_scroll_realsmith_BlXdxw64CC = /*TAG1:STA*/((int)(realsmith_QsmuuDo394((int)(scroll_realsmith_BlXdxw64CC)+(17), (int)(scroll_realsmith_BlXdxw64CC)+(-19), (int)(scroll_realsmith_BlXdxw64CC)+(-77), (int)(scroll_realsmith_BlXdxw64CC)+(-24))+(int)(scroll_realsmith_BlXdxw64CC)-(875430477))+scroll_realsmith_BlXdxw64CC)/*TAG1:END:scroll_realsmith_BlXdxw64CC*/ + /*TAG2:STA*/((int)(realsmith_XDbxq1n2ra((int)(n_realsmith_BlXdxw64CC)+(-37), (unsigned int)(n_realsmith_BlXdxw64CC)+(-52))+(unsigned int)(n_realsmith_BlXdxw64CC)-(96))+n_realsmith_BlXdxw64CC)/*TAG2:END:n_realsmith_BlXdxw64CC*/;
/*aft_stmt:17153*/
/*aft_stmt:17153*/
    /*bef_stmt:17226*/
/*bef_stmt:17226*/
/*bef_stmt:17226*/
if (/*TAG3:STA*/((new_scroll_realsmith_BlXdxw64CC) + (g_6UB1K6IRAF[5]) - 101)/*TAG3:END:new_scroll_realsmith_BlXdxw64CC*/ < 0) {
        new_scroll_realsmith_BlXdxw64CC = 0;
    } else if (/*TAG4:STA*/((int)(realsmith_z9t3sZepa0((int)(n_realsmith_BlXdxw64CC)+(-24))+(int)(scroll_realsmith_BlXdxw64CC)+(int)(n_realsmith_BlXdxw64CC)-(169))+new_scroll_realsmith_BlXdxw64CC)/*TAG4:END:new_scroll_realsmith_BlXdxw64CC*/ > Tag5_realsmith_BlXdxw64CC(/*int:17241:17241:17226:e*/win_height_realsmith_BlXdxw64CC)) {
        /*bef_stmt:17215*/
new_scroll_realsmith_BlXdxw64CC = /*TAG6:STA*/((int)(realsmith_proxy_pHhX6rhq7x((int)(win_height_realsmith_BlXdxw64CC)+(-10), (int)(win_height_realsmith_BlXdxw64CC)+(-81), (int)(win_height_realsmith_BlXdxw64CC)+(-86), (int)(n_realsmith_BlXdxw64CC)+(-5))+(int)(win_height_realsmith_BlXdxw64CC)+(int)(n_realsmith_BlXdxw64CC)+(int)(scroll_realsmith_BlXdxw64CC)-(226))+win_height_realsmith_BlXdxw64CC)/*TAG6:END:win_height_realsmith_BlXdxw64CC*/;
/*aft_stmt:17215*/
    }
g_6UB1K6IRAF[5] = 101 + (scroll_realsmith_BlXdxw64CC - (77)) + (n_realsmith_BlXdxw64CC - (58));
/*aft_stmt:17226*/
/*aft_stmt:17226*/
/*aft_stmt:17226*/
    /*bef_stmt:17239*/
return /*TAG7:STA*/((new_scroll_realsmith_BlXdxw64CC) + (g_E0LDIZLC4J[0]) - 121)/*TAG7:END:new_scroll_realsmith_BlXdxw64CC*/;
g_E0LDIZLC4J[0] = 121 + (new_scroll_realsmith_BlXdxw64CC - (91));
/*aft_stmt:17239*/
}



#include "stdlib.h"
int realsmith_BEddiRl3rY(int *fType_realsmith_BEddiRl3rY, int *fpsr_realsmith_BEddiRl3rY) {
    int i_realsmith_BEddiRl3rY;
    const int FP_EMULATOR_realsmith_BEddiRl3rY = 1;
    const int BIT_AC_realsmith_BEddiRl3rY = 2;
    const int typeNone_realsmith_BEddiRl3rY = 0;
    for (i_realsmith_BEddiRl3rY = 0; i_realsmith_BEddiRl3rY <= 7; i_realsmith_BEddiRl3rY++) {
        fType_realsmith_BEddiRl3rY[i_realsmith_BEddiRl3rY] = typeNone_realsmith_BEddiRl3rY;
    }
    *fpsr_realsmith_BEddiRl3rY = FP_EMULATOR_realsmith_BEddiRl3rY | BIT_AC_realsmith_BEddiRl3rY;
    return *fpsr_realsmith_BEddiRl3rY;
}
int realsmith_proxy_dy5wbnLs6f(int p_0_vz2kd2Mlxe, int p_1_z0NUZ3uHYn) {
int proxy_BkbWqC5kMQ[10] = { 27, p_0_vz2kd2Mlxe, p_0_vz2kd2Mlxe, 31, p_0_vz2kd2Mlxe, 68, p_0_vz2kd2Mlxe, p_0_vz2kd2Mlxe, p_0_vz2kd2Mlxe, 59 };
int proxy_Ow96VEhNAj[13] = { 90, 31, 50, 85, 96, p_1_z0NUZ3uHYn, 64, 60, 63, 92, p_1_z0NUZ3uHYn, 42, 61 };
int proxy_ret_pu41k2QkRw = realsmith_BEddiRl3rY(proxy_BkbWqC5kMQ, proxy_Ow96VEhNAj);
return proxy_ret_pu41k2QkRw;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_toswAIGWM9(x) (x)
#define Tag2_realsmith_proxy_toswAIGWM9(x) (x)
#include "stdlib.h"
int realsmith_RKf1Fr9hE9(int *m_realsmith_RKf1Fr9hE9, unsigned long usec_realsmith_RKf1Fr9hE9) {
    if (m_realsmith_RKf1Fr9hE9 == ((void*)0)) return -1;
    return 0;
}
int realsmith_proxy_toswAIGWM9(int p_0_6yInGqEobI, unsigned long p_1_2JYsTzPaJ7) {
/*bef_stmt:17275*/
int proxy_ret_jIuy2gYXNL = realsmith_RKf1Fr9hE9(&(p_0_6yInGqEobI), /*TAG1:STA*/((unsigned long)(realsmith_cBWMzkb4Xn((int)(p_1_2JYsTzPaJ7)+(29), (int)(p_1_2JYsTzPaJ7)+(41))+(int)(p_1_2JYsTzPaJ7)-(21))+p_1_2JYsTzPaJ7)/*TAG1:END:p_1_2JYsTzPaJ7*/);
g_D3IF6ZRPRU = -48 + (p_1_2JYsTzPaJ7 - (20));
/*aft_stmt:17275*/
/*bef_stmt:17285*/
return /*TAG2:STA*/((proxy_ret_jIuy2gYXNL) + (g_B5TPP9ATAI[4]) - -95)/*TAG2:END:proxy_ret_jIuy2gYXNL*/;
g_B5TPP9ATAI[4] = -95 + (proxy_ret_jIuy2gYXNL - (0));
/*aft_stmt:17285*/
}




#include "stdlib.h"
int realsmith_uJKpOwmqg0(int tgt_dev_realsmith_uJKpOwmqg0, int rqd_nr_ppas_realsmith_uJKpOwmqg0, int *rqd_ppas_realsmith_uJKpOwmqg0) {
    if (rqd_ppas_realsmith_uJKpOwmqg0 == ((void*)0)) return -1;
    for (int i_realsmith_uJKpOwmqg0 = 0; i_realsmith_uJKpOwmqg0 < rqd_nr_ppas_realsmith_uJKpOwmqg0; i_realsmith_uJKpOwmqg0++) {
        tgt_dev_realsmith_uJKpOwmqg0 += rqd_ppas_realsmith_uJKpOwmqg0[i_realsmith_uJKpOwmqg0];
    }
    return tgt_dev_realsmith_uJKpOwmqg0;
}
int realsmith_proxy_CvqAOIJZuA(int p_0_d5VevpX6Lg, int p_1_o6eiegMhMN, int p_2_6fKg82uzQC) {
int proxy_JCMaToxXKq[11] = { p_2_6fKg82uzQC, 95, 5, p_2_6fKg82uzQC, p_2_6fKg82uzQC, p_2_6fKg82uzQC, 23, 70, p_2_6fKg82uzQC, p_2_6fKg82uzQC, p_2_6fKg82uzQC };
int proxy_ret_jeavFMiGNN = realsmith_uJKpOwmqg0(p_0_d5VevpX6Lg, p_1_o6eiegMhMN, proxy_JCMaToxXKq);
return proxy_ret_jeavFMiGNN;
}


#include "stdlib.h"
int realsmith_MGcyM6ez9S(int block_follow_realsmith_MGcyM6ez9S, int token_realsmith_MGcyM6ez9S, int nactvar_realsmith_MGcyM6ez9S, int freereg_realsmith_MGcyM6ez9S, int* explist_values_realsmith_MGcyM6ez9S, int explist_size_realsmith_MGcyM6ez9S) {
    int first_realsmith_MGcyM6ez9S, nret_realsmith_MGcyM6ez9S;
    if (block_follow_realsmith_MGcyM6ez9S || token_realsmith_MGcyM6ez9S == ';') {
        first_realsmith_MGcyM6ez9S = nret_realsmith_MGcyM6ez9S = 0;
    } else {
        nret_realsmith_MGcyM6ez9S = explist_size_realsmith_MGcyM6ez9S;
        if (nret_realsmith_MGcyM6ez9S > 1) {
            first_realsmith_MGcyM6ez9S = nactvar_realsmith_MGcyM6ez9S;
            nret_realsmith_MGcyM6ez9S = -1;
        } else {
            if (nret_realsmith_MGcyM6ez9S == 1) {
                first_realsmith_MGcyM6ez9S = explist_values_realsmith_MGcyM6ez9S[0];
            } else {
                first_realsmith_MGcyM6ez9S = nactvar_realsmith_MGcyM6ez9S;
            }
        }
    }
    return first_realsmith_MGcyM6ez9S + nret_realsmith_MGcyM6ez9S;
}
int realsmith_proxy_GTSM0uECit(int p_0_u7MvA0cQ93, int p_1_zopQZRDPnP, int p_2_g6NMS7zoxY, int p_3_hCmtOJYnJH, int p_4_hdhXUEgnSl, int p_5_l3xPCarQfw) {
int proxy_B4sAeZt8vM[20] = { p_4_hdhXUEgnSl, 44, p_4_hdhXUEgnSl, p_4_hdhXUEgnSl, p_4_hdhXUEgnSl, 25, p_4_hdhXUEgnSl, 48, p_4_hdhXUEgnSl, 6, 65, p_4_hdhXUEgnSl, p_4_hdhXUEgnSl, 77, p_4_hdhXUEgnSl, 83, 20, p_4_hdhXUEgnSl, p_4_hdhXUEgnSl, 58 };
int proxy_ret_6kvKn2E1aj = realsmith_MGcyM6ez9S(p_0_u7MvA0cQ93, p_1_zopQZRDPnP, p_2_g6NMS7zoxY, p_3_hCmtOJYnJH, proxy_B4sAeZt8vM, p_5_l3xPCarQfw);
return proxy_ret_6kvKn2E1aj;
}


#include "stdlib.h"
typedef struct {
        int fourcc_realsmith_ZKAdo6Nj1g;
    } Format_ePWrZE;
int realsmith_ZKAdo6Nj1g(int index_realsmith_ZKAdo6Nj1g, int *pixelformat_realsmith_ZKAdo6Nj1g) {
    typedef struct {
        int fourcc_realsmith_ZKAdo6Nj1g;
    } Format_ePWrZE;
    Format_ePWrZE rvin_formats_realsmith_ZKAdo6Nj1g[] = {
        {1}, {2}, {3}, {4}
    };
    long unsigned int ARRAY_SIZE_realsmith_ZKAdo6Nj1g = sizeof(rvin_formats_realsmith_ZKAdo6Nj1g) / sizeof(rvin_formats_realsmith_ZKAdo6Nj1g[0]);
    if (index_realsmith_ZKAdo6Nj1g >= ARRAY_SIZE_realsmith_ZKAdo6Nj1g)
        return -1;
    *pixelformat_realsmith_ZKAdo6Nj1g = rvin_formats_realsmith_ZKAdo6Nj1g[index_realsmith_ZKAdo6Nj1g].fourcc_realsmith_ZKAdo6Nj1g;
    return 0;
}
int realsmith_proxy_rxH9EEMDKy(int p_0_EDQPFzsbuZ, int p_1_Pe96QrJosP) {
int proxy_5dJ57rO2an[14] = { p_1_Pe96QrJosP, 81, 40, p_1_Pe96QrJosP, 84, 57, p_1_Pe96QrJosP, 35, 55, 94, 68, 22, p_1_Pe96QrJosP, p_1_Pe96QrJosP };
int proxy_ret_gR9q4Jh8h6 = realsmith_ZKAdo6Nj1g(p_0_EDQPFzsbuZ, proxy_5dJ57rO2an);
return proxy_ret_gR9q4Jh8h6;
}


#include "stdlib.h"
int realsmith_SEFPHhAOcA(int *buffer_realsmith_SEFPHhAOcA, unsigned int length_realsmith_SEFPHhAOcA) {
    unsigned long NECP_POLICY_CONDITION_APPLICATION_realsmith_SEFPHhAOcA = 1;
    unsigned long type_realsmith_SEFPHhAOcA = 0;
    if (length_realsmith_SEFPHhAOcA > 0) {
        type_realsmith_SEFPHhAOcA = buffer_realsmith_SEFPHhAOcA[0];
    }
    return (type_realsmith_SEFPHhAOcA == NECP_POLICY_CONDITION_APPLICATION_realsmith_SEFPHhAOcA) ? 1 : 0;
}
int realsmith_proxy_EWdVtrRSR2(int p_0_5OranwU5w0, unsigned int p_1_s6csAnVl8V) {
int proxy_hbgWer2WRi[14] = { 8, p_0_5OranwU5w0, p_0_5OranwU5w0, p_0_5OranwU5w0, 81, p_0_5OranwU5w0, 71, 93, p_0_5OranwU5w0, p_0_5OranwU5w0, p_0_5OranwU5w0, 71, 3, p_0_5OranwU5w0 };
int proxy_ret_w4AcvTNs0P = realsmith_SEFPHhAOcA(proxy_hbgWer2WRi, p_1_s6csAnVl8V);
return proxy_ret_w4AcvTNs0P;
}


#include "stdlib.h"
int realsmith_KzZM82QlQO(int *f_pos_realsmith_KzZM82QlQO, int offset_realsmith_KzZM82QlQO, int orig_realsmith_KzZM82QlQO) {
    int ret_realsmith_KzZM82QlQO;
    switch (orig_realsmith_KzZM82QlQO) {
    case 0:
        *f_pos_realsmith_KzZM82QlQO = offset_realsmith_KzZM82QlQO;
        ret_realsmith_KzZM82QlQO = *f_pos_realsmith_KzZM82QlQO;
        break;
    case 1:
        *f_pos_realsmith_KzZM82QlQO += offset_realsmith_KzZM82QlQO;
        ret_realsmith_KzZM82QlQO = *f_pos_realsmith_KzZM82QlQO;
        break;
    case 2:
    default:
        ret_realsmith_KzZM82QlQO = -1;
    }
    return ret_realsmith_KzZM82QlQO;
}
int realsmith_proxy_ytL9SZQ0P9(int p_0_67uR7YPI6H, int p_1_6HyuhN4lZE, int p_2_va1M9xDxaz) {
int proxy_hITSAwOhFy[12] = { 77, 86, p_0_67uR7YPI6H, p_0_67uR7YPI6H, p_0_67uR7YPI6H, p_0_67uR7YPI6H, 92, p_0_67uR7YPI6H, 77, 6, p_0_67uR7YPI6H, 7 };
int proxy_ret_u7qd7cLO16 = realsmith_KzZM82QlQO(proxy_hITSAwOhFy, p_1_6HyuhN4lZE, p_2_va1M9xDxaz);
return proxy_ret_u7qd7cLO16;
}


#include "stdlib.h"
int realsmith_m9YAfc1aqf(int attached_realsmith_m9YAfc1aqf, int *dirblock_realsmith_m9YAfc1aqf, const char *filename_realsmith_m9YAfc1aqf, const char *gamecode_realsmith_m9YAfc1aqf, const char *company_realsmith_m9YAfc1aqf, int *fileno_realsmith_m9YAfc1aqf) {
    unsigned int i_realsmith_m9YAfc1aqf;
    int *entries_realsmith_m9YAfc1aqf = dirblock_realsmith_m9YAfc1aqf;
    if (!attached_realsmith_m9YAfc1aqf) return 1;
    for (i_realsmith_m9YAfc1aqf = 0; i_realsmith_m9YAfc1aqf < 128; i_realsmith_m9YAfc1aqf++) {
        if (entries_realsmith_m9YAfc1aqf[i_realsmith_m9YAfc1aqf * 6] != 0xff) {
            if ((1) == 0) {
                if ((gamecode_realsmith_m9YAfc1aqf && gamecode_realsmith_m9YAfc1aqf[0] != 0xff && (1) != 0)
                    || (company_realsmith_m9YAfc1aqf && company_realsmith_m9YAfc1aqf[0] != 0xff && (1) != 0)) continue;
                *fileno_realsmith_m9YAfc1aqf = i_realsmith_m9YAfc1aqf;
                return 0;
            }
        }
    }
    return 2;
}
int realsmith_proxy_jSFmlcjLeD(int p_0_IxsM4lIfjM, int p_1_vu7qLyeaX6, char p_2_kF6Gdng43H, char p_3_Eb4FqdTo4h, char p_4_5cRZJo84yf, int p_5_sOoh9UDRKK) {
int proxy_mFyaD0HByt[17] = { p_1_vu7qLyeaX6, p_1_vu7qLyeaX6, 14, 67, p_1_vu7qLyeaX6, 13, p_1_vu7qLyeaX6, p_1_vu7qLyeaX6, p_1_vu7qLyeaX6, 24, 60, p_1_vu7qLyeaX6, 80, p_1_vu7qLyeaX6, 52, 84, p_1_vu7qLyeaX6 };
char proxy_UjYvMYtRtW[19] = { 20, p_2_kF6Gdng43H, 96, p_2_kF6Gdng43H, 29, 91, p_2_kF6Gdng43H, p_2_kF6Gdng43H, p_2_kF6Gdng43H, 73, 32, 45, p_2_kF6Gdng43H, p_2_kF6Gdng43H, 75, 66, p_2_kF6Gdng43H, p_2_kF6Gdng43H, 9 };
char proxy_UkPqmaLq53[10] = { p_4_5cRZJo84yf, p_4_5cRZJo84yf, 92, p_4_5cRZJo84yf, p_4_5cRZJo84yf, 13, p_4_5cRZJo84yf, p_4_5cRZJo84yf, p_4_5cRZJo84yf, p_4_5cRZJo84yf };
int proxy_g19j5MkwK8[16] = { p_5_sOoh9UDRKK, p_5_sOoh9UDRKK, 87, p_5_sOoh9UDRKK, 60, 74, p_5_sOoh9UDRKK, 5, p_5_sOoh9UDRKK, p_5_sOoh9UDRKK, 11, p_5_sOoh9UDRKK, 80, p_5_sOoh9UDRKK, 96, 81 };
int proxy_ret_KGbs0JJVhY = realsmith_m9YAfc1aqf(p_0_IxsM4lIfjM, proxy_mFyaD0HByt, proxy_UjYvMYtRtW, &(p_3_Eb4FqdTo4h), proxy_UkPqmaLq53, proxy_g19j5MkwK8);
return proxy_ret_KGbs0JJVhY;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_6u2J0AYidS(x) (x)
#define Tag2_realsmith_proxy_6u2J0AYidS(x) (x)
#define Tag3_realsmith_proxy_6u2J0AYidS(x) (x)
#define Tag4_realsmith_proxy_6u2J0AYidS(x) (x)
#define Tag5_realsmith_proxy_6u2J0AYidS(x) (x)
#define Tag6_realsmith_proxy_6u2J0AYidS(x) (x)
#define Tag7_realsmith_proxy_6u2J0AYidS(x) (x)
#include "stdlib.h"
int realsmith_P6Od5E4Oeh(int regvalue_realsmith_P6Od5E4Oeh, int *cur_col_realsmith_P6Od5E4Oeh, int wrap_realsmith_P6Od5E4Oeh) {
    int result_realsmith_P6Od5E4Oeh;
    /*bef_stmt:17189*/
/*bef_stmt:17189*/
/*bef_stmt:17189*/
result_realsmith_P6Od5E4Oeh = (/*TAG1:STA*/((int)(realsmith_proxy_toswAIGWM9((int)(regvalue_realsmith_P6Od5E4Oeh)+(-108), (unsigned long)(regvalue_realsmith_P6Od5E4Oeh)+(-41))+(int)(regvalue_realsmith_P6Od5E4Oeh)-(61))+regvalue_realsmith_P6Od5E4Oeh)/*TAG1:END:regvalue_realsmith_P6Od5E4Oeh*/ + /*TAG2:STA*/((int)(realsmith_proxy_CvqAOIJZuA((int)(*cur_col_realsmith_P6Od5E4Oeh)+(25), (int)(*cur_col_realsmith_P6Od5E4Oeh)+(-49), (int)(*cur_col_realsmith_P6Od5E4Oeh)+(12))+(int)(*cur_col_realsmith_P6Od5E4Oeh)-(361))+*cur_col_realsmith_P6Od5E4Oeh)/*TAG2:END:*cur_col_realsmith_P6Od5E4Oeh*/ + /*TAG3:STA*/((int)(realsmith_BlXdxw64CC((int)(wrap_realsmith_P6Od5E4Oeh)+(7), (int)(wrap_realsmith_P6Od5E4Oeh)+(-7), (int)(wrap_realsmith_P6Od5E4Oeh)+(-26))+(int)(wrap_realsmith_P6Od5E4Oeh)-(175))+wrap_realsmith_P6Od5E4Oeh)/*TAG3:END:wrap_realsmith_P6Od5E4Oeh*/) % 256;
/*aft_stmt:17189*/
/*aft_stmt:17189*/
/*aft_stmt:17189*/
    *cur_col_realsmith_P6Od5E4Oeh += 1;
    /*bef_stmt:17220*/
return /*TAG4:STA*/((result_realsmith_P6Od5E4Oeh) + (g_D3IF6ZRPRU) - -48)/*TAG4:END:result_realsmith_P6Od5E4Oeh*/;
g_D3IF6ZRPRU = -48 + (result_realsmith_P6Od5E4Oeh - (198));
g_YGD66QEDS3[6] = -81 + (result_realsmith_P6Od5E4Oeh - (198));
/*aft_stmt:17220*/
}
int realsmith_proxy_6u2J0AYidS(int p_0_n5lXi17Bbx, int p_1_PCIdFzfLCU, int p_2_kZFr9AR0UU) {
/*bef_stmt:17375*/
/*bef_stmt:17375*/
int proxy_ret_BrB86hUFPw = realsmith_P6Od5E4Oeh(/*TAG5:STA*/((p_0_n5lXi17Bbx) + (g_D3IF6ZRPRU) - -48)/*TAG5:END:p_0_n5lXi17Bbx*/, &(p_1_PCIdFzfLCU), /*TAG6:STA*/((int)(realsmith_proxy_dy5wbnLs6f((int)(p_2_kZFr9AR0UU)+(1), (int)(p_2_kZFr9AR0UU)+(-144))+(int)(p_2_kZFr9AR0UU)-(87))+p_2_kZFr9AR0UU)/*TAG6:END:p_2_kZFr9AR0UU*/);
g_D3IF6ZRPRU = -48 + (p_0_n5lXi17Bbx - (61));
/*aft_stmt:17375*/
/*aft_stmt:17375*/
/*bef_stmt:17385*/
return /*TAG7:STA*/((proxy_ret_BrB86hUFPw) + (g_E0LDIZLC4J[2]) - -8)/*TAG7:END:proxy_ret_BrB86hUFPw*/;
g_E0LDIZLC4J[2] = -8 + (proxy_ret_BrB86hUFPw - (198));
/*aft_stmt:17385*/
}




#include "stdlib.h"
int realsmith_JEhyRQHRhZ(int port_count_realsmith_JEhyRQHRhZ, int *ports_max_hops_realsmith_JEhyRQHRhZ, int *ports_max_depth_realsmith_JEhyRQHRhZ) {
    int depths_realsmith_JEhyRQHRhZ[2] = { -1, -1 };
    int max_child_hops_realsmith_JEhyRQHRhZ = 0;
    for (int i_realsmith_JEhyRQHRhZ = 0; i_realsmith_JEhyRQHRhZ < port_count_realsmith_JEhyRQHRhZ; i_realsmith_JEhyRQHRhZ++) {
        if (ports_max_hops_realsmith_JEhyRQHRhZ[i_realsmith_JEhyRQHRhZ] < 0)
            continue;
        if (ports_max_hops_realsmith_JEhyRQHRhZ[i_realsmith_JEhyRQHRhZ] > max_child_hops_realsmith_JEhyRQHRhZ)
            max_child_hops_realsmith_JEhyRQHRhZ = ports_max_hops_realsmith_JEhyRQHRhZ[i_realsmith_JEhyRQHRhZ];
        if (ports_max_depth_realsmith_JEhyRQHRhZ[i_realsmith_JEhyRQHRhZ] > depths_realsmith_JEhyRQHRhZ[0]) {
            depths_realsmith_JEhyRQHRhZ[1] = depths_realsmith_JEhyRQHRhZ[0];
            depths_realsmith_JEhyRQHRhZ[0] = ports_max_depth_realsmith_JEhyRQHRhZ[i_realsmith_JEhyRQHRhZ];
        } else if (ports_max_depth_realsmith_JEhyRQHRhZ[i_realsmith_JEhyRQHRhZ] > depths_realsmith_JEhyRQHRhZ[1]) {
            depths_realsmith_JEhyRQHRhZ[1] = ports_max_depth_realsmith_JEhyRQHRhZ[i_realsmith_JEhyRQHRhZ];
        }
    }
    int max_depth_realsmith_JEhyRQHRhZ = depths_realsmith_JEhyRQHRhZ[0] + 1;
    int max_hops_realsmith_JEhyRQHRhZ = (max_child_hops_realsmith_JEhyRQHRhZ > (depths_realsmith_JEhyRQHRhZ[0] + depths_realsmith_JEhyRQHRhZ[1] + 2)) ? max_child_hops_realsmith_JEhyRQHRhZ : (depths_realsmith_JEhyRQHRhZ[0] + depths_realsmith_JEhyRQHRhZ[1] + 2);
    return max_depth_realsmith_JEhyRQHRhZ << 16 | max_hops_realsmith_JEhyRQHRhZ;
}
int realsmith_proxy_1Q4DG6FgIc(int p_0_ZJPzTjARLL, int p_1_S55Pj8mPwR, int p_2_DErL5kN32n) {
int proxy_ret_B0RVS3Jtyw = realsmith_JEhyRQHRhZ(p_0_ZJPzTjARLL, &(p_1_S55Pj8mPwR), &(p_2_DErL5kN32n));
return proxy_ret_B0RVS3Jtyw;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag2_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag3_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag4_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag5_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag6_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag7_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag8_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag9_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag10_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag11_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag12_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag13_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag14_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag15_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag16_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag17_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag18_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag19_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag20_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag21_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag22_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag23_realsmith_proxy_mQFlOXthyM(x) (x)
#define Tag24_realsmith_proxy_mQFlOXthyM(x) (x)
#include "stdlib.h"
int realsmith_yuuc5PEnwe(unsigned *p_realsmith_yuuc5PEnwe, int i0_realsmith_yuuc5PEnwe, int i1_realsmith_yuuc5PEnwe) {
    int i_realsmith_yuuc5PEnwe;
    /*bef_stmt:17249*/
/*bef_stmt:17249*/
if (/*TAG1:STA*/((int)(realsmith_proxy_jSFmlcjLeD((int)(i1_realsmith_yuuc5PEnwe)+(-46), (int)(i1_realsmith_yuuc5PEnwe)+(-51), (char)(i1_realsmith_yuuc5PEnwe)+(-49), (char)(i1_realsmith_yuuc5PEnwe)+(-50), (char)(i1_realsmith_yuuc5PEnwe)+(-42), (int)(i1_realsmith_yuuc5PEnwe)+(-50))+(int)(i1_realsmith_yuuc5PEnwe)-(47))+i1_realsmith_yuuc5PEnwe)/*TAG1:END:i1_realsmith_yuuc5PEnwe*/ <= /*TAG2:STA*/((int)(realsmith_proxy_ytL9SZQ0P9((int)(i0_realsmith_yuuc5PEnwe)+(44), (int)(i0_realsmith_yuuc5PEnwe)+(-38), (int)(i0_realsmith_yuuc5PEnwe)+(34))+(int)(i0_realsmith_yuuc5PEnwe)-(51))+i0_realsmith_yuuc5PEnwe)/*TAG2:END:i0_realsmith_yuuc5PEnwe*/ + 1) {
        /*bef_stmt:17235*/
/*bef_stmt:17235*/
if (/*TAG3:STA*/((int)(realsmith_proxy_1Q4DG6FgIc((int)(i0_realsmith_yuuc5PEnwe)+(-51), (int)(i0_realsmith_yuuc5PEnwe)+(-52), (int)(i0_realsmith_yuuc5PEnwe)+(-76))+(int)(i0_realsmith_yuuc5PEnwe)-(52))+i0_realsmith_yuuc5PEnwe)/*TAG3:END:i0_realsmith_yuuc5PEnwe*/ == 1)
            p_realsmith_yuuc5PEnwe[1] = (int)/*TAG4:STA*/((unsigned int)(realsmith_proxy_EWdVtrRSR2((int)(p_realsmith_yuuc5PEnwe[1])+(-16), (unsigned int)(p_realsmith_yuuc5PEnwe[1])+(72))+(int)(p_realsmith_yuuc5PEnwe[1])-(0))+p_realsmith_yuuc5PEnwe[1])/*TAG4:END:p_realsmith_yuuc5PEnwe[1]*/ >> 1;
/*aft_stmt:17235*/
/*aft_stmt:17235*/
        return 0;
    }
/*aft_stmt:17249*/
/*aft_stmt:17249*/
    /*bef_stmt:17339*/
/*bef_stmt:17339*/
/*bef_stmt:17339*/
for (i_realsmith_yuuc5PEnwe = Tag5_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17339:e*/i0_realsmith_yuuc5PEnwe); Tag6_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17339:e*/i_realsmith_yuuc5PEnwe) <= Tag7_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17339:e*/i1_realsmith_yuuc5PEnwe); i_realsmith_yuuc5PEnwe++) {
        /*bef_stmt:17332*/
/*bef_stmt:17332*/
p_realsmith_yuuc5PEnwe[Tag8_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17332:e*/i_realsmith_yuuc5PEnwe)] = p_realsmith_yuuc5PEnwe[Tag9_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17332:e*/i_realsmith_yuuc5PEnwe)];
/*aft_stmt:17332*/
/*aft_stmt:17332*/
    }
/*aft_stmt:17339*/
/*aft_stmt:17339*/
/*aft_stmt:17339*/
    /*bef_stmt:17567*/
/*bef_stmt:17567*/
/*bef_stmt:17567*/
/*bef_stmt:17567*/
/*bef_stmt:17567*/
/*bef_stmt:17567*/
for (i_realsmith_yuuc5PEnwe = (Tag10_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17567:e*/i0_realsmith_yuuc5PEnwe) >> 1); Tag11_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17567:e*/i_realsmith_yuuc5PEnwe) < (Tag12_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17567:e*/i1_realsmith_yuuc5PEnwe) >> 1) + 1; i_realsmith_yuuc5PEnwe++)
        p_realsmith_yuuc5PEnwe[2 * Tag13_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17567:e*/i_realsmith_yuuc5PEnwe)] -= (int)(p_realsmith_yuuc5PEnwe[2 * Tag14_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17567:e*/i_realsmith_yuuc5PEnwe) - 1] + p_realsmith_yuuc5PEnwe[2 * Tag15_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17567:e*/i_realsmith_yuuc5PEnwe) + 1] + 2) >> 2;
/*aft_stmt:17567*/
/*aft_stmt:17567*/
/*aft_stmt:17567*/
/*aft_stmt:17567*/
/*aft_stmt:17567*/
/*aft_stmt:17567*/
    /*bef_stmt:17775*/
/*bef_stmt:17775*/
/*bef_stmt:17775*/
/*bef_stmt:17775*/
/*bef_stmt:17775*/
/*bef_stmt:17775*/
for (i_realsmith_yuuc5PEnwe = (Tag16_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17775:e*/i0_realsmith_yuuc5PEnwe) >> 1); Tag17_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17775:e*/i_realsmith_yuuc5PEnwe) < (Tag18_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17775:e*/i1_realsmith_yuuc5PEnwe) >> 1); i_realsmith_yuuc5PEnwe++)
        p_realsmith_yuuc5PEnwe[2 * Tag19_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17775:e*/i_realsmith_yuuc5PEnwe) + 1] += (int)(p_realsmith_yuuc5PEnwe[2 * Tag20_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17775:e*/i_realsmith_yuuc5PEnwe)] + p_realsmith_yuuc5PEnwe[2 * Tag21_realsmith_proxy_mQFlOXthyM(/*int:17788:17788:17775:e*/i_realsmith_yuuc5PEnwe) + 2]) >> 1;
/*aft_stmt:17775*/
/*aft_stmt:17775*/
/*aft_stmt:17775*/
/*aft_stmt:17775*/
/*aft_stmt:17775*/
/*aft_stmt:17775*/
    return 0;
}
int realsmith_proxy_mQFlOXthyM(unsigned int p_0_ytSuWqjjD9, int p_1_5E9qltgZ0M, int p_2_dpZkbHfixg) {
/*bef_stmt:17945*/
/*bef_stmt:17945*/
int proxy_ret_NQHBbL1KNR = realsmith_yuuc5PEnwe(&(p_0_ytSuWqjjD9), /*TAG22:STA*/((int)(realsmith_proxy_6u2J0AYidS((int)(p_1_5E9qltgZ0M)+(9), (int)(p_1_5E9qltgZ0M)+(1), (int)(p_1_5E9qltgZ0M)+(32))+(int)(p_1_5E9qltgZ0M)-(250))+p_1_5E9qltgZ0M)/*TAG22:END:p_1_5E9qltgZ0M*/, /*TAG23:STA*/((int)(realsmith_proxy_rxH9EEMDKy((int)(p_2_dpZkbHfixg)+(-24), (int)(p_2_dpZkbHfixg)+(-38))+(int)(p_2_dpZkbHfixg)-(45))+p_2_dpZkbHfixg)/*TAG23:END:p_2_dpZkbHfixg*/);
/*aft_stmt:17945*/
/*aft_stmt:17945*/
/*bef_stmt:17955*/
return /*TAG24:STA*/((int)(realsmith_proxy_GTSM0uECit((int)(proxy_ret_NQHBbL1KNR)+(90), (int)(proxy_ret_NQHBbL1KNR)+(39), (int)(proxy_ret_NQHBbL1KNR)+(64), (int)(proxy_ret_NQHBbL1KNR)+(31), (int)(proxy_ret_NQHBbL1KNR)+(92), (int)(proxy_ret_NQHBbL1KNR)+(37))+(int)(proxy_ret_NQHBbL1KNR)-(0))+proxy_ret_NQHBbL1KNR)/*TAG24:END:proxy_ret_NQHBbL1KNR*/;
/*aft_stmt:17955*/
}



#include <stdio.h>
#include <inttypes.h>
int main() {
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    transparent_crc(realsmith_QseSQDZ9da(20,27,25,14,14), "realsmith_QseSQDZ9da(20,27,25,14,14)", print_hash_value);
    transparent_crc(realsmith_QsmuuDo394(94,58,0,53), "realsmith_QsmuuDo394(94,58,0,53)", print_hash_value);
    transparent_crc(realsmith_aLkIsJO1gC(6), "realsmith_aLkIsJO1gC(6)", print_hash_value);
    transparent_crc(realsmith_z9t3sZepa0(34), "realsmith_z9t3sZepa0(34)", print_hash_value);
    transparent_crc(realsmith_S55ZyYYFsx(99,90), "realsmith_S55ZyYYFsx(99,90)", print_hash_value);
    transparent_crc(realsmith_7zPPP3c2GA(58,61,53), "realsmith_7zPPP3c2GA(58,61,53)", print_hash_value);
    transparent_crc(realsmith_Ff2DL1UK4w(46,19,3), "realsmith_Ff2DL1UK4w(46,19,3)", print_hash_value);
    transparent_crc(realsmith_eZz1hjgdL5(36,48), "realsmith_eZz1hjgdL5(36,48)", print_hash_value);
    transparent_crc(realsmith_proxy_6u2J0AYidS(61,53,84), "realsmith_proxy_6u2J0AYidS(61,53,84)", print_hash_value);
    transparent_crc(realsmith_BlXdxw64CC(91,77,58), "realsmith_BlXdxw64CC(91,77,58)", print_hash_value);
    transparent_crc(realsmith_w0HLoPBMBx(56,77), "realsmith_w0HLoPBMBx(56,77)", print_hash_value);
    transparent_crc(realsmith_ztd86HfE7R(100,34,30,42,99,6), "realsmith_ztd86HfE7R(100,34,30,42,99,6)", print_hash_value);
    transparent_crc(realsmith_w0HLoPBMBx(56,77), "realsmith_w0HLoPBMBx(56,77)", print_hash_value);
    transparent_crc(realsmith_ztd86HfE7R(100,34,30,42,99,6), "realsmith_ztd86HfE7R(100,34,30,42,99,6)", print_hash_value);
    transparent_crc(realsmith_w0HLoPBMBx(56,77), "realsmith_w0HLoPBMBx(56,77)", print_hash_value);
    transparent_crc(realsmith_proxy_toswAIGWM9(-47,20), "realsmith_proxy_toswAIGWM9(-47,20)", print_hash_value);
    transparent_crc(realsmith_S55ZyYYFsx(99,90), "realsmith_S55ZyYYFsx(99,90)", print_hash_value);
    transparent_crc(realsmith_MNCppy6JFI(55,3,71), "realsmith_MNCppy6JFI(55,3,71)", print_hash_value);
    transparent_crc(realsmith_S55ZyYYFsx(99,90), "realsmith_S55ZyYYFsx(99,90)", print_hash_value);
    transparent_crc(realsmith_BlXdxw64CC(91,77,58), "realsmith_BlXdxw64CC(91,77,58)", print_hash_value);
    transparent_crc(realsmith_proxy_6u2J0AYidS(61,53,84), "realsmith_proxy_6u2J0AYidS(61,53,84)", print_hash_value);
    transparent_crc(realsmith_proxy_6u2J0AYidS(61,53,84), "realsmith_proxy_6u2J0AYidS(61,53,84)", print_hash_value);
    transparent_crc(realsmith_proxy_mQFlOXthyM(-24,52,46), "realsmith_proxy_mQFlOXthyM(-24,52,46)", print_hash_value);
    transparent_crc(realsmith_proxy_mQFlOXthyM(-24,52,46), "realsmith_proxy_mQFlOXthyM(-24,52,46)", print_hash_value);
    for (int i = 0; i < 6; i++) transparent_crc(g_XDT309ENSG[i], "g_XDT309ENSG[i]", print_hash_value);
    for (int i = 0; i < 6; i++) transparent_crc(g_6UB1K6IRAF[i], "g_6UB1K6IRAF[i]", print_hash_value);
    for (int i = 0; i < 8; i++) transparent_crc(g_YGD66QEDS3[i], "g_YGD66QEDS3[i]", print_hash_value);
    transparent_crc(g_3V2EF7K0FR, "g_3V2EF7K0FR", print_hash_value);
    for (int i = 0; i < 6; i++) transparent_crc(g_E0LDIZLC4J[i], "g_E0LDIZLC4J[i]", print_hash_value);
    transparent_crc(g_D3IF6ZRPRU, "g_D3IF6ZRPRU", print_hash_value);
    for (int i = 0; i < 5; i++) transparent_crc(g_B5TPP9ATAI[i], "g_B5TPP9ATAI[i]", print_hash_value);
    for (int i = 0; i < 7; i++) transparent_crc(g_L4QDEB2QT6[i], "g_L4QDEB2QT6[i]", print_hash_value);
    for (int i = 0; i < 1; i++) transparent_crc(g_RBJW6LVO3D[i], "g_RBJW6LVO3D[i]", print_hash_value);
    transparent_crc(g_VM98LIHMVN, "g_VM98LIHMVN", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-d880cb46202b3b51af2306924724b314dad875a8/bin/gcc -O0 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-d880cb46202b3b51af2306924724b314dad875a8/bin/gcc -O0 -fno-strict-aliasing : F2AF7E00 */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-d880cb46202b3b51af2306924724b314dad875a8/bin/gcc -O1 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-d880cb46202b3b51af2306924724b314dad875a8/bin/gcc -O1 -fno-strict-aliasing : F2AF7E00 */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-d880cb46202b3b51af2306924724b314dad875a8/bin/gcc -O2 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-d880cb46202b3b51af2306924724b314dad875a8/bin/gcc -O2 -fno-strict-aliasing : F2AF7E00 */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-d880cb46202b3b51af2306924724b314dad875a8/bin/gcc -O3 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-d880cb46202b3b51af2306924724b314dad875a8/bin/gcc -O3 -fno-strict-aliasing : F2AF7E00 */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-d880cb46202b3b51af2306924724b314dad875a8/bin/gcc -Os -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/gcc-d880cb46202b3b51af2306924724b314dad875a8/bin/gcc -Os -fno-strict-aliasing : FB58BD2A */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/clang-6e7f04266c5f729cf4bc5546e2bf29aad3e695f1/bin/clang -O0 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/clang-6e7f04266c5f729cf4bc5546e2bf29aad3e695f1/bin/clang -O0 -fno-strict-aliasing : F2AF7E00 */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/clang-6e7f04266c5f729cf4bc5546e2bf29aad3e695f1/bin/clang -O1 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/clang-6e7f04266c5f729cf4bc5546e2bf29aad3e695f1/bin/clang -O1 -fno-strict-aliasing : F2AF7E00 */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/clang-6e7f04266c5f729cf4bc5546e2bf29aad3e695f1/bin/clang -O2 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/clang-6e7f04266c5f729cf4bc5546e2bf29aad3e695f1/bin/clang -O2 -fno-strict-aliasing : F2AF7E00 */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/clang-6e7f04266c5f729cf4bc5546e2bf29aad3e695f1/bin/clang -O3 -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/clang-6e7f04266c5f729cf4bc5546e2bf29aad3e695f1/bin/clang -O3 -fno-strict-aliasing : F2AF7E00 */
/* EXITof /zdata/shaoli/compilers/ccbuilder-compilers/clang-6e7f04266c5f729cf4bc5546e2bf29aad3e695f1/bin/clang -Os -fno-strict-aliasing : 0 */
/* CKSMof /zdata/shaoli/compilers/ccbuilder-compilers/clang-6e7f04266c5f729cf4bc5546e2bf29aad3e695f1/bin/clang -Os -fno-strict-aliasing : F2AF7E00 */

/* Bisection: e62ea4fb8ffcab06ddd02f26db91b29b7270743f */
