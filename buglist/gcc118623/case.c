#include <csmith.h>
#include "stdlib.h"
int realsmith_z0Ji0ZvK9O(int num_altsetting_realsmith_z0Ji0ZvK9O, int interface_class_realsmith_z0Ji0ZvK9O, int device_speed_realsmith_z0Ji0ZvK9O, int *device_info_realsmith_z0Ji0ZvK9O, int *device_used_realsmith_z0Ji0ZvK9O) {
    int retval_realsmith_z0Ji0ZvK9O;
    int nr_realsmith_z0Ji0ZvK9O;
    for (nr_realsmith_z0Ji0ZvK9O = 0; nr_realsmith_z0Ji0ZvK9O < 16; nr_realsmith_z0Ji0ZvK9O++) {
        if (!(device_used_realsmith_z0Ji0ZvK9O[nr_realsmith_z0Ji0ZvK9O])) {
            device_used_realsmith_z0Ji0ZvK9O[nr_realsmith_z0Ji0ZvK9O] = 1;
            break;
        }
    }
    if (nr_realsmith_z0Ji0ZvK9O >= 16) {
        return - -12;
    }
    if (interface_class_realsmith_z0Ji0ZvK9O == 1) {
        return - -19;
    }
    int *dev_realsmith_z0Ji0ZvK9O = (int *)(malloc(sizeof(int) * num_altsetting_realsmith_z0Ji0ZvK9O));
    if (!dev_realsmith_z0Ji0ZvK9O) {
        return - -12;
    }
    if (device_speed_realsmith_z0Ji0ZvK9O != 0 && device_speed_realsmith_z0Ji0ZvK9O != 1) {
        (free(dev_realsmith_z0Ji0ZvK9O));
        return - -19;
    }
    for (int i_realsmith_z0Ji0ZvK9O = 0; i_realsmith_z0Ji0ZvK9O < num_altsetting_realsmith_z0Ji0ZvK9O; i_realsmith_z0Ji0ZvK9O++) {
        dev_realsmith_z0Ji0ZvK9O[i_realsmith_z0Ji0ZvK9O] = device_info_realsmith_z0Ji0ZvK9O[i_realsmith_z0Ji0ZvK9O];
    }
    if (num_altsetting_realsmith_z0Ji0ZvK9O == 0) {
        (free(dev_realsmith_z0Ji0ZvK9O));
        device_used_realsmith_z0Ji0ZvK9O[nr_realsmith_z0Ji0ZvK9O] = 0;
        return - -19;
    }
    (free(dev_realsmith_z0Ji0ZvK9O));
    return 0;
}
int realsmith_proxy_E8ocdS0ewS(int p_0_5ssqfNTljH, int p_1_oygqAJda2I, int p_2_MqCSKrCj3j, int p_3_BQyKeUMBU4, int p_4_pQ4dNiQmTH) {
int proxy_c8eAFbXGRB[16] = { 12, p_4_pQ4dNiQmTH, p_4_pQ4dNiQmTH, p_4_pQ4dNiQmTH, 21, 82, p_4_pQ4dNiQmTH, p_4_pQ4dNiQmTH, p_4_pQ4dNiQmTH, p_4_pQ4dNiQmTH, p_4_pQ4dNiQmTH, 7, 92, 77, p_4_pQ4dNiQmTH, 18 };
int proxy_ret_a1I9786cQ6 = realsmith_z0Ji0ZvK9O(p_0_5ssqfNTljH, p_1_oygqAJda2I, p_2_MqCSKrCj3j, &(p_3_BQyKeUMBU4), proxy_c8eAFbXGRB);
return proxy_ret_a1I9786cQ6;
}


#include "stdlib.h"
int realsmith_phoMMjrHYV(int dev_state_realsmith_phoMMjrHYV, int subdevice_state_realsmith_phoMMjrHYV, int insn_n_realsmith_phoMMjrHYV, unsigned int *data_realsmith_phoMMjrHYV) {
    int ret_realsmith_phoMMjrHYV = 0;
    if (subdevice_state_realsmith_phoMMjrHYV != data_realsmith_phoMMjrHYV[0]) {
        subdevice_state_realsmith_phoMMjrHYV = data_realsmith_phoMMjrHYV[0];
        ret_realsmith_phoMMjrHYV = (dev_state_realsmith_phoMMjrHYV == 1) ? 0 : -1;
    }
    data_realsmith_phoMMjrHYV[1] = subdevice_state_realsmith_phoMMjrHYV;
    return insn_n_realsmith_phoMMjrHYV;
}
int realsmith_proxy_1gYzQNn00H(int p_0_tfl1C3k8U5, int p_1_YUqQ5bdbes, int p_2_Z6xqBLW02X, unsigned int p_3_lwh2DM0Sf2) {
unsigned int proxy_Bw3ESFg574[10] = { p_3_lwh2DM0Sf2, 9, 86, p_3_lwh2DM0Sf2, p_3_lwh2DM0Sf2, 49, 61, p_3_lwh2DM0Sf2, 18, p_3_lwh2DM0Sf2 };
int proxy_ret_VIimYxFKla = realsmith_phoMMjrHYV(p_0_tfl1C3k8U5, p_1_YUqQ5bdbes, p_2_Z6xqBLW02X, proxy_Bw3ESFg574);
return proxy_ret_VIimYxFKla;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_0qEcPErLXm(x) (x)
#define Tag2_realsmith_0qEcPErLXm(x) (x)
#define Tag3_realsmith_0qEcPErLXm(x) (x)
#define Tag4_realsmith_0qEcPErLXm(x) (x)
#define Tag5_realsmith_0qEcPErLXm(x) (x)
#define Tag6_realsmith_0qEcPErLXm(x) (x)
#include "stdlib.h"
#include "string.h"
int realsmith_0qEcPErLXm(int channels_realsmith_0qEcPErLXm, int rate_realsmith_0qEcPErLXm, int buffer_dma_realsmith_0qEcPErLXm) {
    /*bef_stmt:24940*/
int voices_realsmith_0qEcPErLXm = Tag1_realsmith_0qEcPErLXm(/*int:25223:25223:24940:e*/channels_realsmith_0qEcPErLXm);
/*aft_stmt:24940*/
    /*bef_stmt:24966*/
int sample_rate_realsmith_0qEcPErLXm = Tag2_realsmith_0qEcPErLXm(/*int:25223:25223:24966:e*/rate_realsmith_0qEcPErLXm);
/*aft_stmt:24966*/
    int hw_buffer_size_realsmith_0qEcPErLXm = 1024;
    int hw_queue_size_realsmith_0qEcPErLXm = 1024 / 2;
    int sw_buffer_size_realsmith_0qEcPErLXm = 1024;
    int pcm_indirect_realsmith_0qEcPErLXm[4] = {0};
    /*bef_stmt:25135*/
pcm_indirect_realsmith_0qEcPErLXm[0] = Tag3_realsmith_0qEcPErLXm(/*int:25223:25223:25135:e*/hw_buffer_size_realsmith_0qEcPErLXm);
/*aft_stmt:25135*/
    /*bef_stmt:25161*/
pcm_indirect_realsmith_0qEcPErLXm[1] = Tag4_realsmith_0qEcPErLXm(/*int:25223:25223:25161:e*/hw_queue_size_realsmith_0qEcPErLXm);
/*aft_stmt:25161*/
    /*bef_stmt:25187*/
pcm_indirect_realsmith_0qEcPErLXm[2] = Tag5_realsmith_0qEcPErLXm(/*int:25223:25223:25187:e*/buffer_dma_realsmith_0qEcPErLXm);
/*aft_stmt:25187*/
    /*bef_stmt:25213*/
pcm_indirect_realsmith_0qEcPErLXm[3] = Tag6_realsmith_0qEcPErLXm(/*int:25223:25223:25213:e*/sw_buffer_size_realsmith_0qEcPErLXm);
/*aft_stmt:25213*/
    return 0;
}



#include "stdint.h"
int realsmith_ttyeaSdh12(int omac_idx_realsmith_ttyeaSdh12, unsigned int *data_realsmith_ttyeaSdh12) {
    int ext_bss_idx_realsmith_ttyeaSdh12, tsf_offset_realsmith_ttyeaSdh12;
    ext_bss_idx_realsmith_ttyeaSdh12 = omac_idx_realsmith_ttyeaSdh12 - 0x01;
    if (ext_bss_idx_realsmith_ttyeaSdh12 < 0)
        return -1;
    data_realsmith_ttyeaSdh12[0] = (unsigned int)0x00;
    data_realsmith_ttyeaSdh12[1] = (unsigned int)(sizeof(unsigned int) * 3);
    tsf_offset_realsmith_ttyeaSdh12 = ext_bss_idx_realsmith_ttyeaSdh12 * (4096 + 20);
    data_realsmith_ttyeaSdh12[2] = (unsigned int)tsf_offset_realsmith_ttyeaSdh12;
    return 0;
}
int realsmith_proxy_UuxPxJW9w3(int p_0_4UPxyeWYEf, unsigned int p_1_wwF8Yw88px) {
unsigned int proxy_s2NDf1yaFc[12] = { p_1_wwF8Yw88px, p_1_wwF8Yw88px, p_1_wwF8Yw88px, p_1_wwF8Yw88px, p_1_wwF8Yw88px, p_1_wwF8Yw88px, 17, 13, 89, 72, 28, 16 };
int proxy_ret_rkJAGKiDt4 = realsmith_ttyeaSdh12(p_0_4UPxyeWYEf, proxy_s2NDf1yaFc);
return proxy_ret_rkJAGKiDt4;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_admOgqIdWU(x) (x)
#define Tag2_realsmith_admOgqIdWU(x) (x)
#define Tag3_realsmith_admOgqIdWU(x) (x)
#include "stdlib.h"
int realsmith_admOgqIdWU(int link_status_realsmith_admOgqIdWU, int size_realsmith_admOgqIdWU) {
    int RNDIS_OID_GEN_MEDIA_CONNECT_STATUS_realsmith_admOgqIdWU = 0;
    int result_realsmith_admOgqIdWU = 0;
    /*bef_stmt:17231*/
if (Tag1_realsmith_admOgqIdWU(/*int:17246:17246:17231:e*/size_realsmith_admOgqIdWU) == sizeof(int)) {
        /*bef_stmt:17204*/
if (Tag2_realsmith_admOgqIdWU(/*int:17246:17246:17204:e*/link_status_realsmith_admOgqIdWU)) {
            result_realsmith_admOgqIdWU = 1;
        } else {
            result_realsmith_admOgqIdWU = 0;
        }
/*aft_stmt:17204*/
    } else {
        result_realsmith_admOgqIdWU = -1;
    }
/*aft_stmt:17231*/
    /*bef_stmt:17244*/
return Tag3_realsmith_admOgqIdWU(/*int:17246:17246:17244:e*/result_realsmith_admOgqIdWU);
/*aft_stmt:17244*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_BnL4SC516Q(x) (x)
#define Tag2_realsmith_BnL4SC516Q(x) (x)
#define Tag3_realsmith_BnL4SC516Q(x) (x)
#define Tag4_realsmith_BnL4SC516Q(x) (x)
#define Tag5_realsmith_BnL4SC516Q(x) (x)
#define Tag6_realsmith_BnL4SC516Q(x) (x)
#define Tag7_realsmith_BnL4SC516Q(x) (x)
#define Tag8_realsmith_BnL4SC516Q(x) (x)
#define Tag9_realsmith_BnL4SC516Q(x) (x)
#define Tag10_realsmith_BnL4SC516Q(x) (x)
#include "stdint.h"
int realsmith_BnL4SC516Q(unsigned int bthpsn_realsmith_BnL4SC516Q, int expct_realsmith_BnL4SC516Q, unsigned int frags_realsmith_BnL4SC516Q) {
    unsigned int mask_realsmith_BnL4SC516Q = (0 ? 0x7fffffffull : 0xffffffull);
    /*bef_stmt:2082*/
/*bef_stmt:2082*/
unsigned int psn_realsmith_BnL4SC516Q = Tag1_realsmith_BnL4SC516Q(/*unsigned int:2227:2227:2082:e*/bthpsn_realsmith_BnL4SC516Q) & Tag2_realsmith_BnL4SC516Q(/*unsigned int:2227:2227:2082:e*/mask_realsmith_BnL4SC516Q);
/*aft_stmt:2082*/
/*aft_stmt:2082*/
    /*bef_stmt:2198*/
if (Tag3_realsmith_BnL4SC516Q(/*int:2227:2227:2198:e*/expct_realsmith_BnL4SC516Q)) {
        /*bef_stmt:2162*/
/*bef_stmt:2162*/
/*bef_stmt:2162*/
psn_realsmith_BnL4SC516Q = (Tag4_realsmith_BnL4SC516Q(/*unsigned int:2227:2227:2162:e*/psn_realsmith_BnL4SC516Q) & ~0x7fffffff) | ((Tag5_realsmith_BnL4SC516Q(/*unsigned int:2227:2227:2162:e*/psn_realsmith_BnL4SC516Q) + Tag6_realsmith_BnL4SC516Q(/*unsigned int:2227:2227:2162:e*/frags_realsmith_BnL4SC516Q)) & 0x7fffffff);
/*aft_stmt:2162*/
/*aft_stmt:2162*/
/*aft_stmt:2162*/
    } else {
        /*bef_stmt:2191*/
/*bef_stmt:2191*/
psn_realsmith_BnL4SC516Q = Tag7_realsmith_BnL4SC516Q(/*unsigned int:2227:2227:2191:e*/psn_realsmith_BnL4SC516Q) + Tag8_realsmith_BnL4SC516Q(/*unsigned int:2227:2227:2191:e*/frags_realsmith_BnL4SC516Q);
/*aft_stmt:2191*/
/*aft_stmt:2191*/
    }
/*aft_stmt:2198*/
    /*bef_stmt:2225*/
/*bef_stmt:2225*/
return Tag9_realsmith_BnL4SC516Q(/*unsigned int:2227:2227:2225:e*/psn_realsmith_BnL4SC516Q) & Tag10_realsmith_BnL4SC516Q(/*unsigned int:2227:2227:2225:e*/mask_realsmith_BnL4SC516Q);
/*aft_stmt:2225*/
/*aft_stmt:2225*/
}



#include "stdlib.h"
int realsmith_F8jgF9wUwq(int bap_realsmith_F8jgF9wUwq, int d_off_realsmith_F8jgF9wUwq, int len_realsmith_F8jgF9wUwq) {
    int pos_realsmith_F8jgF9wUwq = 0;
    int result_realsmith_F8jgF9wUwq = 0;
    int d_off_val_realsmith_F8jgF9wUwq = (bap_realsmith_F8jgF9wUwq == 1) ? 1 : 0;
    if (len_realsmith_F8jgF9wUwq / 2) {
        for (int i_realsmith_F8jgF9wUwq = 0; i_realsmith_F8jgF9wUwq < len_realsmith_F8jgF9wUwq / 2; i_realsmith_F8jgF9wUwq++) {
            pos_realsmith_F8jgF9wUwq++;
        }
    }
    if (len_realsmith_F8jgF9wUwq & 1) {
        result_realsmith_F8jgF9wUwq++;
    }
    return result_realsmith_F8jgF9wUwq;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_UF3xlQvBbQ(x) (x)
#define Tag2_realsmith_UF3xlQvBbQ(x) (x)
#include "stdint.h"
int realsmith_UF3xlQvBbQ(int irqmask_realsmith_UF3xlQvBbQ, int midi_mask_realsmith_UF3xlQvBbQ) {
    /*bef_stmt:1994*/
irqmask_realsmith_UF3xlQvBbQ |= Tag1_realsmith_UF3xlQvBbQ(/*int:2009:2009:1994:e*/midi_mask_realsmith_UF3xlQvBbQ);
/*aft_stmt:1994*/
    /*bef_stmt:2007*/
return Tag2_realsmith_UF3xlQvBbQ(/*int:2009:2009:2007:e*/irqmask_realsmith_UF3xlQvBbQ);
/*aft_stmt:2007*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_N62qgmWJD2(x) (x)
#define Tag2_realsmith_N62qgmWJD2(x) (x)
#define Tag3_realsmith_N62qgmWJD2(x) (x)
#include "stdlib.h"
struct cxgbi_sock_MSOET7 {
    int write_queue_count_realsmith_N62qgmWJD2; // Simulating the queue count for demonstration
};
int realsmith_N62qgmWJD2(int write_queue_count_realsmith_N62qgmWJD2) {
    struct cxgbi_sock_MSOET7 csk_realsmith_N62qgmWJD2;
    /*bef_stmt:17151*/
csk_realsmith_N62qgmWJD2.write_queue_count_realsmith_N62qgmWJD2 = Tag1_realsmith_N62qgmWJD2(/*int:17247:17247:17151:e*/write_queue_count_realsmith_N62qgmWJD2);
/*aft_stmt:17151*/
    int freed_count_realsmith_N62qgmWJD2 = 0;
    /*bef_stmt:17234*/
while (Tag2_realsmith_N62qgmWJD2(/*int:17247:17247:17234:e*/csk_realsmith_N62qgmWJD2.write_queue_count_realsmith_N62qgmWJD2) > 0) {
        csk_realsmith_N62qgmWJD2.write_queue_count_realsmith_N62qgmWJD2--;
        freed_count_realsmith_N62qgmWJD2++;
    }
/*aft_stmt:17234*/
    /*bef_stmt:17245*/
return Tag3_realsmith_N62qgmWJD2(/*int:17247:17247:17245:e*/freed_count_realsmith_N62qgmWJD2);
/*aft_stmt:17245*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_dakgXYAXWc(x) (x)
#define Tag2_realsmith_dakgXYAXWc(x) (x)
#define Tag3_realsmith_dakgXYAXWc(x) (x)
#define Tag4_realsmith_dakgXYAXWc(x) (x)
#define Tag5_realsmith_dakgXYAXWc(x) (x)
#include "stdlib.h"
struct pvr2_stream_xjT5qw {
    unsigned int buffer_target_count_realsmith_dakgXYAXWc;
    int mutex_realsmith_dakgXYAXWc; // Placeholder for mutex, not used in pure function
};
int realsmith_dakgXYAXWc(unsigned int buffer_target_count_realsmith_dakgXYAXWc, unsigned int cnt_realsmith_dakgXYAXWc) {
    int ret_realsmith_dakgXYAXWc = 0;
    /*bef_stmt:17193*/
/*bef_stmt:17193*/
if (Tag1_realsmith_dakgXYAXWc(/*unsigned int:17268:17268:17193:e*/buffer_target_count_realsmith_dakgXYAXWc) == Tag2_realsmith_dakgXYAXWc(/*unsigned int:17268:17268:17193:e*/cnt_realsmith_dakgXYAXWc)) return 0;
/*aft_stmt:17193*/
/*aft_stmt:17193*/
    /*bef_stmt:17208*/
buffer_target_count_realsmith_dakgXYAXWc = Tag3_realsmith_dakgXYAXWc(/*unsigned int:17268:17268:17208:e*/cnt_realsmith_dakgXYAXWc);
/*aft_stmt:17208*/
    /*bef_stmt:17255*/
ret_realsmith_dakgXYAXWc = (Tag4_realsmith_dakgXYAXWc(/*unsigned int:17268:17268:17255:e*/cnt_realsmith_dakgXYAXWc) > 0) ? 1 : -1;
/*aft_stmt:17255*/
    /*bef_stmt:17266*/
return Tag5_realsmith_dakgXYAXWc(/*int:17268:17268:17266:e*/ret_realsmith_dakgXYAXWc);
/*aft_stmt:17266*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_M4n5sK8t4d(x) (x)
#define Tag2_realsmith_M4n5sK8t4d(x) (x)
#define Tag3_realsmith_M4n5sK8t4d(x) (x)
#define Tag4_realsmith_M4n5sK8t4d(x) (x)
#include "stdlib.h"
int realsmith_M4n5sK8t4d(int init_ret_realsmith_M4n5sK8t4d, int finup_ret_realsmith_M4n5sK8t4d) {
    /*bef_stmt:17123*/
int ret_realsmith_M4n5sK8t4d = Tag1_realsmith_M4n5sK8t4d(/*int:17155:17155:17123:e*/init_ret_realsmith_M4n5sK8t4d);
/*aft_stmt:17123*/
    /*bef_stmt:17142*/
/*bef_stmt:17142*/
if (Tag2_realsmith_M4n5sK8t4d(/*int:17155:17155:17142:e*/ret_realsmith_M4n5sK8t4d))
        return Tag3_realsmith_M4n5sK8t4d(/*int:17155:17155:17142:e*/ret_realsmith_M4n5sK8t4d);
/*aft_stmt:17142*/
/*aft_stmt:17142*/
    /*bef_stmt:17153*/
return Tag4_realsmith_M4n5sK8t4d(/*int:17155:17155:17153:e*/finup_ret_realsmith_M4n5sK8t4d);
/*aft_stmt:17153*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_rS4WH54Ry8(x) (x)
#define Tag2_realsmith_rS4WH54Ry8(x) (x)
#define Tag3_realsmith_rS4WH54Ry8(x) (x)
#define Tag4_realsmith_rS4WH54Ry8(x) (x)
#define Tag5_realsmith_rS4WH54Ry8(x) (x)
#define Tag6_realsmith_rS4WH54Ry8(x) (x)
#define Tag7_realsmith_rS4WH54Ry8(x) (x)
#define Tag8_realsmith_rS4WH54Ry8(x) (x)
#define Tag9_realsmith_rS4WH54Ry8(x) (x)
#define Tag10_realsmith_rS4WH54Ry8(x) (x)
#include "stdlib.h"
int realsmith_rS4WH54Ry8(int usage_code_realsmith_rS4WH54Ry8, int resolution_multiplier_realsmith_rS4WH54Ry8, int wheel_accumulated_realsmith_rS4WH54Ry8, int value_realsmith_rS4WH54Ry8) {
    int code_realsmith_rS4WH54Ry8;
    int hi_res_realsmith_rS4WH54Ry8, lo_res_realsmith_rS4WH54Ry8;
    /*bef_stmt:17219*/
/*bef_stmt:17219*/
if (Tag1_realsmith_rS4WH54Ry8(/*int:17387:17387:17219:e*/value_realsmith_rS4WH54Ry8) == 0)
        return Tag2_realsmith_rS4WH54Ry8(/*int:17387:17387:17219:e*/wheel_accumulated_realsmith_rS4WH54Ry8);
/*aft_stmt:17219*/
/*aft_stmt:17219*/
    /*bef_stmt:17262*/
if (Tag3_realsmith_rS4WH54Ry8(/*int:17387:17387:17262:e*/usage_code_realsmith_rS4WH54Ry8) == 2)
        code_realsmith_rS4WH54Ry8 = 1;
    else
        code_realsmith_rS4WH54Ry8 = 0;
/*aft_stmt:17262*/
    /*bef_stmt:17298*/
/*bef_stmt:17298*/
hi_res_realsmith_rS4WH54Ry8 = Tag4_realsmith_rS4WH54Ry8(/*int:17387:17387:17298:e*/value_realsmith_rS4WH54Ry8) * 120 / Tag5_realsmith_rS4WH54Ry8(/*int:17387:17387:17298:e*/resolution_multiplier_realsmith_rS4WH54Ry8);
/*aft_stmt:17298*/
/*aft_stmt:17298*/
    /*bef_stmt:17313*/
wheel_accumulated_realsmith_rS4WH54Ry8 += Tag6_realsmith_rS4WH54Ry8(/*int:17387:17387:17313:e*/hi_res_realsmith_rS4WH54Ry8);
/*aft_stmt:17313*/
    /*bef_stmt:17338*/
lo_res_realsmith_rS4WH54Ry8 = Tag7_realsmith_rS4WH54Ry8(/*int:17387:17387:17338:e*/wheel_accumulated_realsmith_rS4WH54Ry8) / 120;
/*aft_stmt:17338*/
    /*bef_stmt:17374*/
/*bef_stmt:17374*/
if (Tag8_realsmith_rS4WH54Ry8(/*int:17387:17387:17374:e*/lo_res_realsmith_rS4WH54Ry8))
        wheel_accumulated_realsmith_rS4WH54Ry8 -= Tag9_realsmith_rS4WH54Ry8(/*int:17387:17387:17374:e*/lo_res_realsmith_rS4WH54Ry8) * 120;
/*aft_stmt:17374*/
/*aft_stmt:17374*/
    /*bef_stmt:17385*/
return Tag10_realsmith_rS4WH54Ry8(/*int:17387:17387:17385:e*/wheel_accumulated_realsmith_rS4WH54Ry8);
/*aft_stmt:17385*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_DDgBR4Il19(x) (x)
#define Tag2_realsmith_DDgBR4Il19(x) (x)
#include "stdlib.h"
int realsmith_DDgBR4Il19(int hose_realsmith_DDgBR4Il19) {
    int result_realsmith_DDgBR4Il19 = 0;
    /*bef_stmt:17116*/
result_realsmith_DDgBR4Il19 = Tag1_realsmith_DDgBR4Il19(/*int:17129:17129:17116:e*/hose_realsmith_DDgBR4Il19) * 2;
/*aft_stmt:17116*/
    /*bef_stmt:17127*/
return Tag2_realsmith_DDgBR4Il19(/*int:17129:17129:17127:e*/result_realsmith_DDgBR4Il19);
/*aft_stmt:17127*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_WPSph9XeuV(x) (x)
#define Tag2_realsmith_WPSph9XeuV(x) (x)
#include "stdint.h"
struct clk_gate_l3CTgS {
    int flags_realsmith_WPSph9XeuV;
    unsigned int reg_realsmith_WPSph9XeuV;
};
unsigned int realsmith_WPSph9XeuV(int flags_realsmith_WPSph9XeuV, unsigned int reg_realsmith_WPSph9XeuV) {
    /*bef_stmt:2057*/
if (Tag1_realsmith_WPSph9XeuV(/*int:2070:2070:2057:e*/flags_realsmith_WPSph9XeuV) & 1)
        return (1);
/*aft_stmt:2057*/
    /*bef_stmt:2068*/
return Tag2_realsmith_WPSph9XeuV(/*unsigned int:2070:2070:2068:e*/reg_realsmith_WPSph9XeuV);
/*aft_stmt:2068*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_QVAPi7oDjb(x) (x)
#define Tag2_realsmith_QVAPi7oDjb(x) (x)
#define Tag3_realsmith_QVAPi7oDjb(x) (x)
#define Tag4_realsmith_QVAPi7oDjb(x) (x)
#define Tag5_realsmith_QVAPi7oDjb(x) (x)
#include "stdlib.h"
struct kvm_memory_slot_IhCoUw {
    // Assuming the structure has some essential fields.
    int field1_realsmith_QVAPi7oDjb;
    int field2_realsmith_QVAPi7oDjb;
};
int realsmith_QVAPi7oDjb(int field1_realsmith_QVAPi7oDjb, int field2_realsmith_QVAPi7oDjb, unsigned long gfn_realsmith_QVAPi7oDjb) {
    struct kvm_memory_slot_IhCoUw slot_realsmith_QVAPi7oDjb;
    /*bef_stmt:17209*/
slot_realsmith_QVAPi7oDjb.field1_realsmith_QVAPi7oDjb = Tag1_realsmith_QVAPi7oDjb(/*int:17311:17311:17209:e*/field1_realsmith_QVAPi7oDjb);
/*aft_stmt:17209*/
    /*bef_stmt:17242*/
slot_realsmith_QVAPi7oDjb.field2_realsmith_QVAPi7oDjb = Tag2_realsmith_QVAPi7oDjb(/*int:17311:17311:17242:e*/field2_realsmith_QVAPi7oDjb);
/*aft_stmt:17242*/
    /*bef_stmt:17309*/
/*bef_stmt:17309*/
/*bef_stmt:17309*/
return (int)(Tag3_realsmith_QVAPi7oDjb(/*unsigned long:17311:17311:17309:e*/gfn_realsmith_QVAPi7oDjb) + Tag4_realsmith_QVAPi7oDjb(/*int:17311:17311:17309:e*/slot_realsmith_QVAPi7oDjb.field1_realsmith_QVAPi7oDjb) + Tag5_realsmith_QVAPi7oDjb(/*int:17311:17311:17309:e*/slot_realsmith_QVAPi7oDjb.field2_realsmith_QVAPi7oDjb));
/*aft_stmt:17309*/
/*aft_stmt:17309*/
/*aft_stmt:17309*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_J8jfXTmblS(x) (x)
#include "stdlib.h"
int realsmith_J8jfXTmblS(int revision_realsmith_J8jfXTmblS) {
    /*bef_stmt:17107*/
if (Tag1_realsmith_J8jfXTmblS(/*int:17113:17113:17107:e*/revision_realsmith_J8jfXTmblS) < 0x88) {
        return 1;
    } else {
        return 2;
    }
/*aft_stmt:17107*/
}



#include "stdlib.h"
int realsmith_Tb7FnfP50L(int *regs_base_realsmith_Tb7FnfP50L, int *regs_offset_realsmith_Tb7FnfP50L) {
    int i_realsmith_Tb7FnfP50L;
    for (i_realsmith_Tb7FnfP50L = 0; i_realsmith_Tb7FnfP50L < 17; i_realsmith_Tb7FnfP50L++) {
        regs_base_realsmith_Tb7FnfP50L[i_realsmith_Tb7FnfP50L] = 0;
        regs_offset_realsmith_Tb7FnfP50L[i_realsmith_Tb7FnfP50L] = 0;
    }
    int cfa_base_realsmith_Tb7FnfP50L = 1;
    int cfa_offset_realsmith_Tb7FnfP50L = 8;
    regs_base_realsmith_Tb7FnfP50L[16] = 2;
    regs_offset_realsmith_Tb7FnfP50L[16] = -8;
    return cfa_offset_realsmith_Tb7FnfP50L;
}
int realsmith_proxy_wlXY3Glzw6(int p_0_KhnWXoRy9R, int p_1_dxBvieGe4i) {
int proxy_WA3A5l2dEd[18] = { p_0_KhnWXoRy9R, p_0_KhnWXoRy9R, p_0_KhnWXoRy9R, 94, 78, p_0_KhnWXoRy9R, 61, p_0_KhnWXoRy9R, 42, 100, 76, p_0_KhnWXoRy9R, p_0_KhnWXoRy9R, p_0_KhnWXoRy9R, 84, 67, 91, 6 };
int proxy_n2Bq1lHExQ[19] = { 100, 23, 18, 94, 94, p_1_dxBvieGe4i, p_1_dxBvieGe4i, p_1_dxBvieGe4i, 76, p_1_dxBvieGe4i, 36, p_1_dxBvieGe4i, p_1_dxBvieGe4i, p_1_dxBvieGe4i, 92, 72, 89, p_1_dxBvieGe4i, 80 };
int proxy_ret_R9tnaW9nq5 = realsmith_Tb7FnfP50L(proxy_WA3A5l2dEd, proxy_n2Bq1lHExQ);
return proxy_ret_R9tnaW9nq5;
}


#include "stddef.h"
int realsmith_xrsMFJqEOC(int dest_realsmith_xrsMFJqEOC, int src_realsmith_xrsMFJqEOC, long unsigned int n_realsmith_xrsMFJqEOC) {
    char *d_realsmith_xrsMFJqEOC = (char *)&dest_realsmith_xrsMFJqEOC;
    const char *s_realsmith_xrsMFJqEOC = (const char *)&src_realsmith_xrsMFJqEOC;
    for (long unsigned int i_realsmith_xrsMFJqEOC = 0; i_realsmith_xrsMFJqEOC < n_realsmith_xrsMFJqEOC; i_realsmith_xrsMFJqEOC++) {
        d_realsmith_xrsMFJqEOC[i_realsmith_xrsMFJqEOC] = s_realsmith_xrsMFJqEOC[i_realsmith_xrsMFJqEOC];
    }
    return dest_realsmith_xrsMFJqEOC;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_TKGjyduouS(x) (x)
#define Tag2_realsmith_TKGjyduouS(x) (x)
#define Tag3_realsmith_TKGjyduouS(x) (x)
#define Tag4_realsmith_TKGjyduouS(x) (x)
#define Tag5_realsmith_TKGjyduouS(x) (x)
#include "stdint.h"
int realsmith_TKGjyduouS(int flags_realsmith_TKGjyduouS) {
    unsigned int cmd_cfg_realsmith_TKGjyduouS = 0;
    /*bef_stmt:2166*/
if (Tag1_realsmith_TKGjyduouS(/*int:2184:2184:2166:e*/flags_realsmith_TKGjyduouS) & 0x100) {
        /*bef_stmt:2037*/
if (Tag2_realsmith_TKGjyduouS(/*int:2184:2184:2037:e*/flags_realsmith_TKGjyduouS) & 0x20)
            cmd_cfg_realsmith_TKGjyduouS |= 0x4;
/*aft_stmt:2037*/
        cmd_cfg_realsmith_TKGjyduouS |= 0x10;
        /*bef_stmt:2100*/
if (!(Tag3_realsmith_TKGjyduouS(/*int:2184:2184:2100:e*/flags_realsmith_TKGjyduouS) & 0x80))
            cmd_cfg_realsmith_TKGjyduouS |= 0x8;
/*aft_stmt:2100*/
        /*bef_stmt:2136*/
if (Tag4_realsmith_TKGjyduouS(/*int:2184:2184:2136:e*/flags_realsmith_TKGjyduouS) & 0x40)
            cmd_cfg_realsmith_TKGjyduouS |= 0x2;
/*aft_stmt:2136*/
    } else {
        cmd_cfg_realsmith_TKGjyduouS |= 0x1;
    }
/*aft_stmt:2166*/
    /*bef_stmt:2182*/
return Tag5_realsmith_TKGjyduouS(/*unsigned int:2184:2184:2182:e*/cmd_cfg_realsmith_TKGjyduouS);
/*aft_stmt:2182*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ZvskYHWN8c(x) (x)
#define Tag2_realsmith_ZvskYHWN8c(x) (x)
#define Tag3_realsmith_ZvskYHWN8c(x) (x)
#define Tag4_realsmith_ZvskYHWN8c(x) (x)
#define Tag5_realsmith_ZvskYHWN8c(x) (x)
#define Tag6_realsmith_ZvskYHWN8c(x) (x)
#define Tag7_realsmith_ZvskYHWN8c(x) (x)
#define Tag8_realsmith_ZvskYHWN8c(x) (x)
#define Tag9_realsmith_ZvskYHWN8c(x) (x)
#define Tag10_realsmith_ZvskYHWN8c(x) (x)
#define Tag11_realsmith_ZvskYHWN8c(x) (x)
#define Tag12_realsmith_ZvskYHWN8c(x) (x)
#define Tag13_realsmith_ZvskYHWN8c(x) (x)
#include "stdint.h"
int realsmith_ZvskYHWN8c(int saddr_realsmith_ZvskYHWN8c, int sshift_realsmith_ZvskYHWN8c, int smask_realsmith_ZvskYHWN8c, int index_realsmith_ZvskYHWN8c, int daddr_realsmith_ZvskYHWN8c, int dmask_realsmith_ZvskYHWN8c, int shift_realsmith_ZvskYHWN8c, int data_realsmith_ZvskYHWN8c) {
    int temp_data_realsmith_ZvskYHWN8c;
    /*bef_stmt:2256*/
if (Tag1_realsmith_ZvskYHWN8c(/*int:2367:2367:2256:e*/sshift_realsmith_ZvskYHWN8c) & 0x80) {
        /*bef_stmt:2193*/
/*bef_stmt:2193*/
/*bef_stmt:2193*/
temp_data_realsmith_ZvskYHWN8c = (Tag2_realsmith_ZvskYHWN8c(/*int:2367:2367:2193:e*/data_realsmith_ZvskYHWN8c) >> (0x100 - (Tag3_realsmith_ZvskYHWN8c(/*int:2367:2367:2193:e*/sshift_realsmith_ZvskYHWN8c) & 0x7F))) & Tag4_realsmith_ZvskYHWN8c(/*int:2367:2367:2193:e*/smask_realsmith_ZvskYHWN8c);
/*aft_stmt:2193*/
/*aft_stmt:2193*/
/*aft_stmt:2193*/
    } else {
        /*bef_stmt:2249*/
/*bef_stmt:2249*/
/*bef_stmt:2249*/
temp_data_realsmith_ZvskYHWN8c = (Tag5_realsmith_ZvskYHWN8c(/*int:2367:2367:2249:e*/data_realsmith_ZvskYHWN8c) << (Tag6_realsmith_ZvskYHWN8c(/*int:2367:2367:2249:e*/sshift_realsmith_ZvskYHWN8c) & 0x7F)) & Tag7_realsmith_ZvskYHWN8c(/*int:2367:2367:2249:e*/smask_realsmith_ZvskYHWN8c);
/*aft_stmt:2249*/
/*aft_stmt:2249*/
/*aft_stmt:2249*/
    }
/*aft_stmt:2256*/
    /*bef_stmt:2285*/
int translated_data_realsmith_ZvskYHWN8c = Tag8_realsmith_ZvskYHWN8c(/*int:2367:2367:2285:e*/temp_data_realsmith_ZvskYHWN8c);
/*aft_stmt:2285*/
    /*bef_stmt:2355*/
/*bef_stmt:2355*/
/*bef_stmt:2355*/
/*bef_stmt:2355*/
int final_data_realsmith_ZvskYHWN8c = (Tag9_realsmith_ZvskYHWN8c(/*int:2367:2367:2355:e*/data_realsmith_ZvskYHWN8c) & ~Tag10_realsmith_ZvskYHWN8c(/*int:2367:2367:2355:e*/dmask_realsmith_ZvskYHWN8c)) | (Tag11_realsmith_ZvskYHWN8c(/*int:2367:2367:2355:e*/translated_data_realsmith_ZvskYHWN8c) << Tag12_realsmith_ZvskYHWN8c(/*int:2367:2367:2355:e*/shift_realsmith_ZvskYHWN8c));
/*aft_stmt:2355*/
/*aft_stmt:2355*/
/*aft_stmt:2355*/
/*aft_stmt:2355*/
    /*bef_stmt:2365*/
return Tag13_realsmith_ZvskYHWN8c(/*int:2367:2367:2365:e*/final_data_realsmith_ZvskYHWN8c);
/*aft_stmt:2365*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_e7AzJzFVZ5(x) (x)
#define Tag2_realsmith_e7AzJzFVZ5(x) (x)
#include "stdlib.h"
int realsmith_e7AzJzFVZ5(int phydev_value_realsmith_e7AzJzFVZ5) {
    int VSC73XX_EXT_PAGE_ACCESS_realsmith_e7AzJzFVZ5 = 0x1;
    /*bef_stmt:17115*/
/*bef_stmt:17115*/
return Tag1_realsmith_e7AzJzFVZ5(/*int:17117:17117:17115:e*/phydev_value_realsmith_e7AzJzFVZ5) + Tag2_realsmith_e7AzJzFVZ5(/*int:17117:17117:17115:e*/VSC73XX_EXT_PAGE_ACCESS_realsmith_e7AzJzFVZ5);
/*aft_stmt:17115*/
/*aft_stmt:17115*/
}



#include "stdlib.h"
struct audit_tree_iV3XoH {
    int goner_realsmith_NfyjbOQTHC;
    int rules_realsmith_NfyjbOQTHC;
    int *root_realsmith_NfyjbOQTHC;
    int same_root_realsmith_NfyjbOQTHC;
    int list_realsmith_NfyjbOQTHC;
};
struct audit_krule_iV3XoH {
    struct audit_tree_iV3XoH *tree_realsmith_NfyjbOQTHC;
    int rlist_realsmith_NfyjbOQTHC;
};
int realsmith_NfyjbOQTHC(int tree_goner_realsmith_NfyjbOQTHC, int tree_rules_empty_realsmith_NfyjbOQTHC, int *tree_root_realsmith_NfyjbOQTHC, int *rule_tree_realsmith_NfyjbOQTHC) {
    struct audit_tree_iV3XoH tree_realsmith_NfyjbOQTHC;
    tree_realsmith_NfyjbOQTHC.goner_realsmith_NfyjbOQTHC = tree_goner_realsmith_NfyjbOQTHC;
    tree_realsmith_NfyjbOQTHC.rules_realsmith_NfyjbOQTHC = tree_rules_empty_realsmith_NfyjbOQTHC;
    tree_realsmith_NfyjbOQTHC.root_realsmith_NfyjbOQTHC = tree_root_realsmith_NfyjbOQTHC;
    if (rule_tree_realsmith_NfyjbOQTHC) {
        if (tree_realsmith_NfyjbOQTHC.rules_realsmith_NfyjbOQTHC == 0 && tree_realsmith_NfyjbOQTHC.goner_realsmith_NfyjbOQTHC == 0) {
            tree_realsmith_NfyjbOQTHC.root_realsmith_NfyjbOQTHC = ((void*)0);
            tree_realsmith_NfyjbOQTHC.goner_realsmith_NfyjbOQTHC = 1;
            rule_tree_realsmith_NfyjbOQTHC = ((void*)0);
            return 1;
        }
        rule_tree_realsmith_NfyjbOQTHC = ((void*)0);
        return 1;
    }
    return 0;
}
int realsmith_proxy_0KrKbCNLCa(int p_0_yLkYE7Pl6R, int p_1_6rfbwEjiPA, int p_2_WkkdwA2GzF, int p_3_cz9zTqsay8) {
int proxy_aHFcdnUQ5W[13] = { p_2_WkkdwA2GzF, p_2_WkkdwA2GzF, 14, 58, 80, 23, p_2_WkkdwA2GzF, p_2_WkkdwA2GzF, p_2_WkkdwA2GzF, 78, 93, 74, p_2_WkkdwA2GzF };
int proxy_ret_TuIjraNa2k = realsmith_NfyjbOQTHC(p_0_yLkYE7Pl6R, p_1_6rfbwEjiPA, proxy_aHFcdnUQ5W, &(p_3_cz9zTqsay8));
return proxy_ret_TuIjraNa2k;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_QiTYEUq1zI(x) (x)
#define Tag2_realsmith_QiTYEUq1zI(x) (x)
#define Tag3_realsmith_QiTYEUq1zI(x) (x)
#define Tag4_realsmith_QiTYEUq1zI(x) (x)
#define Tag5_realsmith_QiTYEUq1zI(x) (x)
#include "stdlib.h"
int realsmith_QiTYEUq1zI(int LCDDithering_realsmith_QiTYEUq1zI, int device_lcd_dualedge_realsmith_QiTYEUq1zI) {
    int reg_num_realsmith_QiTYEUq1zI, i_realsmith_QiTYEUq1zI;
    int common_init_data_realsmith_QiTYEUq1zI[10];
    int dual_channel_enable_data_realsmith_QiTYEUq1zI = 1;
    int single_channel_enable_data_realsmith_QiTYEUq1zI = 2;
    int dithering_enable_data_realsmith_QiTYEUq1zI = 3;
    int dithering_disable_data_realsmith_QiTYEUq1zI = 4;
    /*bef_stmt:17312*/
reg_num_realsmith_QiTYEUq1zI = sizeof(common_init_data_realsmith_QiTYEUq1zI) / sizeof(Tag1_realsmith_QiTYEUq1zI(/*int:17408:17408:17312:e*/common_init_data_realsmith_QiTYEUq1zI[0]));
/*aft_stmt:17312*/
    /*bef_stmt:17355*/
/*bef_stmt:17355*/
for (i_realsmith_QiTYEUq1zI = 0; Tag2_realsmith_QiTYEUq1zI(/*int:17408:17408:17355:e*/i_realsmith_QiTYEUq1zI) < Tag3_realsmith_QiTYEUq1zI(/*int:17408:17408:17355:e*/reg_num_realsmith_QiTYEUq1zI); i_realsmith_QiTYEUq1zI++) {
    }
/*aft_stmt:17355*/
/*aft_stmt:17355*/
    /*bef_stmt:17373*/
if (Tag4_realsmith_QiTYEUq1zI(/*int:17408:17408:17373:e*/device_lcd_dualedge_realsmith_QiTYEUq1zI)) {
    } else {
    }
/*aft_stmt:17373*/
    /*bef_stmt:17390*/
if (Tag5_realsmith_QiTYEUq1zI(/*int:17408:17408:17390:e*/LCDDithering_realsmith_QiTYEUq1zI)) {
    } else {
    }
/*aft_stmt:17390*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_uyrhzMWjLW(x) (x)
#define Tag2_realsmith_uyrhzMWjLW(x) (x)
#include "stdlib.h"
struct client_bz84bi {
    int irq_realsmith_uyrhzMWjLW;
};
struct zet6223_ts_bz84bi {
    struct client_bz84bi *client_realsmith_uyrhzMWjLW;
};
int realsmith_uyrhzMWjLW(int client_irq_realsmith_uyrhzMWjLW) {
    struct client_bz84bi c_realsmith_uyrhzMWjLW;
    /*bef_stmt:17198*/
c_realsmith_uyrhzMWjLW.irq_realsmith_uyrhzMWjLW = Tag1_realsmith_uyrhzMWjLW(/*int:17285:17285:17198:e*/client_irq_realsmith_uyrhzMWjLW);
/*aft_stmt:17198*/
    struct zet6223_ts_bz84bi ts_realsmith_uyrhzMWjLW;
    ts_realsmith_uyrhzMWjLW.client_realsmith_uyrhzMWjLW = &c_realsmith_uyrhzMWjLW;
    /*bef_stmt:17283*/
return Tag2_realsmith_uyrhzMWjLW(/*int:17285:17285:17283:e*/ts_realsmith_uyrhzMWjLW.client_realsmith_uyrhzMWjLW->irq_realsmith_uyrhzMWjLW);
/*aft_stmt:17283*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_XmErqZAvvE(x) (x)
#define Tag2_realsmith_XmErqZAvvE(x) (x)
#define Tag3_realsmith_XmErqZAvvE(x) (x)
#define Tag4_realsmith_XmErqZAvvE(x) (x)
#define Tag5_realsmith_XmErqZAvvE(x) (x)
#define Tag6_realsmith_XmErqZAvvE(x) (x)
#define Tag7_realsmith_XmErqZAvvE(x) (x)
#include "stdlib.h"
int realsmith_XmErqZAvvE(int duty_cycle_realsmith_XmErqZAvvE, int isOFDM_realsmith_XmErqZAvvE, int writeToShm_realsmith_XmErqZAvvE) {
    int idle_busy_ratio_x_16_realsmith_XmErqZAvvE = 0;
    /*bef_stmt:17179*/
int offset_realsmith_XmErqZAvvE = Tag1_realsmith_XmErqZAvvE(/*int:17301:17301:17179:e*/isOFDM_realsmith_XmErqZAvvE) ? 1 : 0;
/*aft_stmt:17179*/
    /*bef_stmt:17228*/
/*bef_stmt:17228*/
if (Tag2_realsmith_XmErqZAvvE(/*int:17301:17301:17228:e*/duty_cycle_realsmith_XmErqZAvvE) > 100 || Tag3_realsmith_XmErqZAvvE(/*int:17301:17301:17228:e*/duty_cycle_realsmith_XmErqZAvvE) < 0) {
        return -22;
    }
/*aft_stmt:17228*/
/*aft_stmt:17228*/
    /*bef_stmt:17288*/
if (Tag4_realsmith_XmErqZAvvE(/*int:17301:17301:17288:e*/duty_cycle_realsmith_XmErqZAvvE)) {
        /*bef_stmt:17281*/
/*bef_stmt:17281*/
idle_busy_ratio_x_16_realsmith_XmErqZAvvE = (100 - Tag5_realsmith_XmErqZAvvE(/*int:17301:17301:17281:e*/duty_cycle_realsmith_XmErqZAvvE)) * 16 / Tag6_realsmith_XmErqZAvvE(/*int:17301:17301:17281:e*/duty_cycle_realsmith_XmErqZAvvE);
/*aft_stmt:17281*/
/*aft_stmt:17281*/
    }
/*aft_stmt:17288*/
    /*bef_stmt:17299*/
return Tag7_realsmith_XmErqZAvvE(/*int:17301:17301:17299:e*/idle_busy_ratio_x_16_realsmith_XmErqZAvvE);
/*aft_stmt:17299*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_925WudSDcW(x) (x)
#define Tag2_realsmith_925WudSDcW(x) (x)
#include "stdlib.h"
struct {
    int ksft_error_realsmith_925WudSDcW;
} ksft_cnt_realsmith_925WudSDcW;
int realsmith_925WudSDcW(int error_realsmith_925WudSDcW) {
    /*bef_stmt:17153*/
ksft_cnt_realsmith_925WudSDcW.ksft_error_realsmith_925WudSDcW = Tag1_realsmith_925WudSDcW(/*int:17183:17183:17153:e*/error_realsmith_925WudSDcW);
/*aft_stmt:17153*/
    /*bef_stmt:17181*/
return Tag2_realsmith_925WudSDcW(/*int:0:0:17181:e*/ksft_cnt_realsmith_925WudSDcW.ksft_error_realsmith_925WudSDcW);
/*aft_stmt:17181*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_lC5SwJSIM8(x) (x)
#define Tag2_realsmith_lC5SwJSIM8(x) (x)
#define Tag3_realsmith_lC5SwJSIM8(x) (x)
#define Tag4_realsmith_lC5SwJSIM8(x) (x)
#include "stdlib.h"
struct drr_class_HOF7rS {
    int filter_cnt_realsmith_lC5SwJSIM8;
    int qdisc_realsmith_lC5SwJSIM8;
    int common_realsmith_lC5SwJSIM8;
};
struct drr_sched_HOF7rS {
    int clhash_realsmith_lC5SwJSIM8;
};
struct Qdisc_HOF7rS {
    int dummy_realsmith_lC5SwJSIM8;
};
int realsmith_lC5SwJSIM8(int filter_cnt_realsmith_lC5SwJSIM8, int qdisc_realsmith_lC5SwJSIM8, int common_realsmith_lC5SwJSIM8) {
    struct drr_sched_HOF7rS q_realsmith_lC5SwJSIM8;
    struct drr_class_HOF7rS cl_realsmith_lC5SwJSIM8;
    /*bef_stmt:17317*/
cl_realsmith_lC5SwJSIM8.filter_cnt_realsmith_lC5SwJSIM8 = Tag1_realsmith_lC5SwJSIM8(/*int:17418:17418:17317:e*/filter_cnt_realsmith_lC5SwJSIM8);
/*aft_stmt:17317*/
    /*bef_stmt:17351*/
cl_realsmith_lC5SwJSIM8.qdisc_realsmith_lC5SwJSIM8 = Tag2_realsmith_lC5SwJSIM8(/*int:17418:17418:17351:e*/qdisc_realsmith_lC5SwJSIM8);
/*aft_stmt:17351*/
    /*bef_stmt:17372*/
cl_realsmith_lC5SwJSIM8.common_realsmith_lC5SwJSIM8 = Tag3_realsmith_lC5SwJSIM8(/*int:17418:17418:17372:e*/common_realsmith_lC5SwJSIM8);
/*aft_stmt:17372*/
    /*bef_stmt:17408*/
if (Tag4_realsmith_lC5SwJSIM8(/*int:17418:17418:17408:e*/cl_realsmith_lC5SwJSIM8.filter_cnt_realsmith_lC5SwJSIM8) > 0)
        return -1;
/*aft_stmt:17408*/
    return 0;
}



#include "stdlib.h"
int realsmith_oNgMlpuDzK(int nalloc_realsmith_oNgMlpuDzK, int len_realsmith_oNgMlpuDzK, int *body_realsmith_oNgMlpuDzK) {
    int dummy_realsmith_oNgMlpuDzK = 0;
    int *buffer_realsmith_oNgMlpuDzK = (int *)(malloc(nalloc_realsmith_oNgMlpuDzK * sizeof(int)));
    if (buffer_realsmith_oNgMlpuDzK == ((void*)0)) {
        return -1;
    }
    if (nalloc_realsmith_oNgMlpuDzK == (len_realsmith_oNgMlpuDzK + 1)) {
        nalloc_realsmith_oNgMlpuDzK *= 2;
        buffer_realsmith_oNgMlpuDzK = (int *)(realloc(buffer_realsmith_oNgMlpuDzK, nalloc_realsmith_oNgMlpuDzK * sizeof(int)));
        if (buffer_realsmith_oNgMlpuDzK == ((void*)0)) {
            return -1;
        }
    }
    buffer_realsmith_oNgMlpuDzK[len_realsmith_oNgMlpuDzK++] = dummy_realsmith_oNgMlpuDzK;
    (free(buffer_realsmith_oNgMlpuDzK));
    return len_realsmith_oNgMlpuDzK;
}
int realsmith_proxy_NGgr1NOXMF(int p_0_y4VZHivTnK, int p_1_CM5BfCugvI, int p_2_ulM1qjPjjA) {
int proxy_DGMJTviEUI[16] = { 43, p_2_ulM1qjPjjA, 69, p_2_ulM1qjPjjA, p_2_ulM1qjPjjA, p_2_ulM1qjPjjA, 98, 80, 45, p_2_ulM1qjPjjA, 64, 95, 18, 73, 29, 46 };
int proxy_ret_2Ifv180Qq0 = realsmith_oNgMlpuDzK(p_0_y4VZHivTnK, p_1_CM5BfCugvI, proxy_DGMJTviEUI);
return proxy_ret_2Ifv180Qq0;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_2QlzOWp8Uu(x) (x)
#include "stdint.h"
int realsmith_2QlzOWp8Uu(int val_realsmith_2QlzOWp8Uu) {
    /*bef_stmt:1995*/
return ((Tag1_realsmith_2QlzOWp8Uu(/*int:1997:1997:1995:e*/val_realsmith_2QlzOWp8Uu)) << 8) & 0x000000FF;
/*aft_stmt:1995*/
}



#include "stdlib.h"
int realsmith_SLnSra4nJE(int client_realsmith_SLnSra4nJE, int *info_pages_realsmith_SLnSra4nJE, int *info_func_realsmith_SLnSra4nJE) {
    int ret_realsmith_SLnSra4nJE;
    int i_realsmith_SLnSra4nJE;
    for (i_realsmith_SLnSra4nJE = 0; i_realsmith_SLnSra4nJE < 2; i_realsmith_SLnSra4nJE++) {
        ret_realsmith_SLnSra4nJE = 0;
        if (ret_realsmith_SLnSra4nJE < 0)
            return ret_realsmith_SLnSra4nJE;
        ret_realsmith_SLnSra4nJE = (i_realsmith_SLnSra4nJE % 2 == 0) ? 1 : 0;
        if (ret_realsmith_SLnSra4nJE < 0)
            return ret_realsmith_SLnSra4nJE;
        if (ret_realsmith_SLnSra4nJE & 1) {
            int virtual_realsmith_SLnSra4nJE = 4 + i_realsmith_SLnSra4nJE;
            *info_pages_realsmith_SLnSra4nJE = virtual_realsmith_SLnSra4nJE + 1;
            info_func_realsmith_SLnSra4nJE[virtual_realsmith_SLnSra4nJE] |= 1;
            info_func_realsmith_SLnSra4nJE[virtual_realsmith_SLnSra4nJE] |= 2;
        }
    }
    return 0;
}
int realsmith_proxy_y8SSodyCk4(int p_0_1hYXcu2J8I, int p_1_1ZAeAE6N41, int p_2_mS33TvIWTa) {
int proxy_9Pze1SjIDk[14] = { 79, 31, p_2_mS33TvIWTa, p_2_mS33TvIWTa, 84, p_2_mS33TvIWTa, 22, p_2_mS33TvIWTa, 73, p_2_mS33TvIWTa, p_2_mS33TvIWTa, p_2_mS33TvIWTa, 1, 100 };
int proxy_ret_JTxFKsC9mT = realsmith_SLnSra4nJE(p_0_1hYXcu2J8I, &(p_1_1ZAeAE6N41), proxy_9Pze1SjIDk);
return proxy_ret_JTxFKsC9mT;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_0AqbWiqU00(x) (x)
#define Tag2_realsmith_0AqbWiqU00(x) (x)
#define Tag3_realsmith_0AqbWiqU00(x) (x)
#include "stdlib.h"
struct datalink_proto_dvWATl {
    int sap_realsmith_0AqbWiqU00;
};
int realsmith_0AqbWiqU00(int sap_realsmith_0AqbWiqU00) {
    struct datalink_proto_dvWATl *proto_realsmith_0AqbWiqU00 = (malloc(sizeof(struct datalink_proto_dvWATl)));
    if (proto_realsmith_0AqbWiqU00 == ((void*)0)) {
        return -1;
    }
    /*bef_stmt:17245*/
proto_realsmith_0AqbWiqU00->sap_realsmith_0AqbWiqU00 = Tag1_realsmith_0AqbWiqU00(/*int:17328:17328:17245:e*/sap_realsmith_0AqbWiqU00);
/*aft_stmt:17245*/
    /*bef_stmt:17281*/
int result_realsmith_0AqbWiqU00 = Tag2_realsmith_0AqbWiqU00(/*int:17328:17328:17281:e*/proto_realsmith_0AqbWiqU00->sap_realsmith_0AqbWiqU00);
/*aft_stmt:17281*/
    (free(proto_realsmith_0AqbWiqU00));
    /*bef_stmt:17326*/
return Tag3_realsmith_0AqbWiqU00(/*int:17328:17328:17326:e*/result_realsmith_0AqbWiqU00);
/*aft_stmt:17326*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_S3HJcBPKeG(x) (x)
#define Tag2_realsmith_S3HJcBPKeG(x) (x)
#define Tag3_realsmith_S3HJcBPKeG(x) (x)
#define Tag4_realsmith_S3HJcBPKeG(x) (x)
#define Tag5_realsmith_S3HJcBPKeG(x) (x)
#define Tag6_realsmith_S3HJcBPKeG(x) (x)
#include "stdlib.h"
int realsmith_S3HJcBPKeG(int dma_mode_realsmith_S3HJcBPKeG, int drive_pci_realsmith_S3HJcBPKeG) {
    /*bef_stmt:17131*/
int speed_realsmith_S3HJcBPKeG = Tag1_realsmith_S3HJcBPKeG(/*int:17501:17501:17131:e*/dma_mode_realsmith_S3HJcBPKeG) - 0;
/*aft_stmt:17131*/
    unsigned short timing_realsmith_S3HJcBPKeG;
    static const unsigned short mwdma_bits_realsmith_S3HJcBPKeG[] = { 0x008, 0x302, 0x301 };
    static const unsigned short udma_bits_realsmith_S3HJcBPKeG[] = { 0xE000, 0xC000, 0xA000 };
    timing_realsmith_S3HJcBPKeG = 0;
    /*bef_stmt:17483*/
if (Tag2_realsmith_S3HJcBPKeG(/*int:17501:17501:17483:e*/dma_mode_realsmith_S3HJcBPKeG) < 6) {
        timing_realsmith_S3HJcBPKeG &= ~0x870F;
        /*bef_stmt:17393*/
timing_realsmith_S3HJcBPKeG |= mwdma_bits_realsmith_S3HJcBPKeG[Tag3_realsmith_S3HJcBPKeG(/*int:17501:17501:17393:e*/speed_realsmith_S3HJcBPKeG)];
/*aft_stmt:17393*/
    } else {
        /*bef_stmt:17423*/
speed_realsmith_S3HJcBPKeG = Tag4_realsmith_S3HJcBPKeG(/*int:17501:17501:17423:e*/dma_mode_realsmith_S3HJcBPKeG) - 6;
/*aft_stmt:17423*/
        timing_realsmith_S3HJcBPKeG &= ~0x6000;
        /*bef_stmt:17472*/
timing_realsmith_S3HJcBPKeG |= udma_bits_realsmith_S3HJcBPKeG[Tag5_realsmith_S3HJcBPKeG(/*int:17501:17501:17472:e*/speed_realsmith_S3HJcBPKeG)];
/*aft_stmt:17472*/
    }
/*aft_stmt:17483*/
    /*bef_stmt:17499*/
return Tag6_realsmith_S3HJcBPKeG(/*unsigned short:17501:17501:17499:e*/timing_realsmith_S3HJcBPKeG);
/*aft_stmt:17499*/
}



#include "stdint.h"
unsigned short int realsmith_j3uzmWZSx7(unsigned int h_control_realsmith_j3uzmWZSx7, unsigned int *p_mac_msbs_realsmith_j3uzmWZSx7, unsigned int *p_mac_lsbs_realsmith_j3uzmWZSx7) {
    unsigned int byte_count_realsmith_j3uzmWZSx7;
    unsigned short int err_realsmith_j3uzmWZSx7;
    unsigned int mac_realsmith_j3uzmWZSx7;
    err_realsmith_j3uzmWZSx7 = (h_control_realsmith_j3uzmWZSx7 == 0) ? 1 : 0;
    if (!err_realsmith_j3uzmWZSx7) {
        mac_realsmith_j3uzmWZSx7 = 0xAABBCCDD;
        *p_mac_msbs_realsmith_j3uzmWZSx7 = ((mac_realsmith_j3uzmWZSx7 & 0xff000000) >> 8) | ((mac_realsmith_j3uzmWZSx7 & 0x00ff0000) << 8) |
                       ((mac_realsmith_j3uzmWZSx7 & 0x0000ff00) >> 8) | ((mac_realsmith_j3uzmWZSx7 & 0x000000ff) << 8);
        err_realsmith_j3uzmWZSx7 = (h_control_realsmith_j3uzmWZSx7 == 1) ? 1 : 0;
    }
    if (!err_realsmith_j3uzmWZSx7) {
        mac_realsmith_j3uzmWZSx7 = 0xEEFF0011;
        *p_mac_lsbs_realsmith_j3uzmWZSx7 = ((mac_realsmith_j3uzmWZSx7 & 0xff000000) >> 8) | ((mac_realsmith_j3uzmWZSx7 & 0x00ff0000) << 8) |
                       ((mac_realsmith_j3uzmWZSx7 & 0x0000ff00) >> 8) | ((mac_realsmith_j3uzmWZSx7 & 0x000000ff) << 8);
    } else {
        *p_mac_msbs_realsmith_j3uzmWZSx7 = 0;
        *p_mac_lsbs_realsmith_j3uzmWZSx7 = 0;
    }
    return err_realsmith_j3uzmWZSx7;
}
int realsmith_proxy_aQFplFGXvK(unsigned int p_0_X1lrtIXyUP, unsigned int p_1_n3nnLDN2fH, unsigned int p_2_REgH6df5FE) {
unsigned int proxy_cfzQu2aKb2[17] = { p_1_n3nnLDN2fH, 58, 35, p_1_n3nnLDN2fH, 4, p_1_n3nnLDN2fH, 30, p_1_n3nnLDN2fH, p_1_n3nnLDN2fH, p_1_n3nnLDN2fH, p_1_n3nnLDN2fH, p_1_n3nnLDN2fH, 37, 97, 19, p_1_n3nnLDN2fH, 43 };
unsigned int proxy_9EKJKJVaQK[18] = { 8, p_2_REgH6df5FE, p_2_REgH6df5FE, 84, p_2_REgH6df5FE, 100, 85, 9, 10, p_2_REgH6df5FE, p_2_REgH6df5FE, 65, 61, 88, p_2_REgH6df5FE, 82, p_2_REgH6df5FE, p_2_REgH6df5FE };
int proxy_ret_5kdacF0rop = realsmith_j3uzmWZSx7(p_0_X1lrtIXyUP, proxy_cfzQu2aKb2, proxy_9EKJKJVaQK);
return proxy_ret_5kdacF0rop;
}


#include "stdlib.h"
struct ssb_sprom_RLSUD4 {
    unsigned char et0mac_realsmith_7O19bqa5ug[6];
    unsigned char et1mac_realsmith_7O19bqa5ug[6];
    unsigned char et2mac_realsmith_7O19bqa5ug[6];
    unsigned char il0mac_realsmith_7O19bqa5ug[6];
    unsigned char et0mdcport_realsmith_7O19bqa5ug;
    unsigned char et0phyaddr_realsmith_7O19bqa5ug;
    unsigned char et1mdcport_realsmith_7O19bqa5ug;
    unsigned char et1phyaddr_realsmith_7O19bqa5ug;
    unsigned char et2mdcport_realsmith_7O19bqa5ug;
    unsigned char et2phyaddr_realsmith_7O19bqa5ug;
};
int realsmith_7O19bqa5ug(int fallback_realsmith_7O19bqa5ug) {
    struct ssb_sprom_RLSUD4 sprom_realsmith_7O19bqa5ug;
    unsigned char mac_realsmith_7O19bqa5ug[6] = {0};
    int mac_addr_used_realsmith_7O19bqa5ug = 0;
    for (int i_realsmith_7O19bqa5ug = 0; i_realsmith_7O19bqa5ug < 6; i_realsmith_7O19bqa5ug++) {
        sprom_realsmith_7O19bqa5ug.et0mac_realsmith_7O19bqa5ug[i_realsmith_7O19bqa5ug] = (unsigned char)(i_realsmith_7O19bqa5ug + 1);
        sprom_realsmith_7O19bqa5ug.et1mac_realsmith_7O19bqa5ug[i_realsmith_7O19bqa5ug] = (unsigned char)(i_realsmith_7O19bqa5ug + 2);
        sprom_realsmith_7O19bqa5ug.et2mac_realsmith_7O19bqa5ug[i_realsmith_7O19bqa5ug] = (unsigned char)(i_realsmith_7O19bqa5ug + 3);
        sprom_realsmith_7O19bqa5ug.il0mac_realsmith_7O19bqa5ug[i_realsmith_7O19bqa5ug] = (unsigned char)(i_realsmith_7O19bqa5ug + 4);
    }
    sprom_realsmith_7O19bqa5ug.et0mdcport_realsmith_7O19bqa5ug = 1;
    sprom_realsmith_7O19bqa5ug.et0phyaddr_realsmith_7O19bqa5ug = 1;
    sprom_realsmith_7O19bqa5ug.et1mdcport_realsmith_7O19bqa5ug = 2;
    sprom_realsmith_7O19bqa5ug.et1phyaddr_realsmith_7O19bqa5ug = 2;
    sprom_realsmith_7O19bqa5ug.et2mdcport_realsmith_7O19bqa5ug = 3;
    sprom_realsmith_7O19bqa5ug.et2phyaddr_realsmith_7O19bqa5ug = 3;
    if (sprom_realsmith_7O19bqa5ug.il0mac_realsmith_7O19bqa5ug[0] == 0 && sprom_realsmith_7O19bqa5ug.il0mac_realsmith_7O19bqa5ug[1] == 0 && sprom_realsmith_7O19bqa5ug.il0mac_realsmith_7O19bqa5ug[2] == 0) {
        for (int i_realsmith_7O19bqa5ug = 0; i_realsmith_7O19bqa5ug < 6; i_realsmith_7O19bqa5ug++) {
            mac_realsmith_7O19bqa5ug[i_realsmith_7O19bqa5ug] = sprom_realsmith_7O19bqa5ug.et0mac_realsmith_7O19bqa5ug[i_realsmith_7O19bqa5ug];
        }
        if (mac_realsmith_7O19bqa5ug[0] != 0 || mac_realsmith_7O19bqa5ug[1] != 0 || mac_realsmith_7O19bqa5ug[2] != 0) {
            mac_realsmith_7O19bqa5ug[5] += mac_addr_used_realsmith_7O19bqa5ug;
            for (int i_realsmith_7O19bqa5ug = 0; i_realsmith_7O19bqa5ug < 6; i_realsmith_7O19bqa5ug++) {
                sprom_realsmith_7O19bqa5ug.il0mac_realsmith_7O19bqa5ug[i_realsmith_7O19bqa5ug] = mac_realsmith_7O19bqa5ug[i_realsmith_7O19bqa5ug];
            }
            mac_addr_used_realsmith_7O19bqa5ug++;
        }
    }
    return 0;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ODL7fuHsFB(x) (x)
#define Tag2_realsmith_ODL7fuHsFB(x) (x)
#define Tag3_realsmith_ODL7fuHsFB(x) (x)
#include "stdio.h"
struct arch_p3IorV {
    unsigned int family_realsmith_ODL7fuHsFB;
    long model_realsmith_ODL7fuHsFB;
};
int realsmith_ODL7fuHsFB(unsigned int family_realsmith_ODL7fuHsFB, long model_realsmith_ODL7fuHsFB) {
    struct arch_p3IorV arch_realsmith_ODL7fuHsFB;
    /*bef_stmt:11243*/
arch_realsmith_ODL7fuHsFB.family_realsmith_ODL7fuHsFB = Tag1_realsmith_ODL7fuHsFB(/*unsigned int:11321:11321:11243:e*/family_realsmith_ODL7fuHsFB);
/*aft_stmt:11243*/
    /*bef_stmt:11277*/
arch_realsmith_ODL7fuHsFB.model_realsmith_ODL7fuHsFB = Tag2_realsmith_ODL7fuHsFB(/*long:11321:11321:11277:e*/model_realsmith_ODL7fuHsFB);
/*aft_stmt:11277*/
    /*bef_stmt:11308*/
if (Tag3_realsmith_ODL7fuHsFB(/*unsigned int:11321:11321:11308:e*/family_realsmith_ODL7fuHsFB) > 0) {
        return 0;
    }
/*aft_stmt:11308*/
    return -1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_fFniAcj60O(x) (x)
#define Tag2_realsmith_fFniAcj60O(x) (x)
#define Tag3_realsmith_fFniAcj60O(x) (x)
#include "stdint.h"
int realsmith_fFniAcj60O(int irq_realsmith_fFniAcj60O) {
    const int IRQ_WAKEUP0_realsmith_fFniAcj60O = 0;
    int PECR_realsmith_fFniAcj60O = 0;
    /*bef_stmt:2036*/
/*bef_stmt:2036*/
PECR_realsmith_fFniAcj60O |= (Tag1_realsmith_fFniAcj60O(/*int:2068:2068:2036:e*/irq_realsmith_fFniAcj60O) - Tag2_realsmith_fFniAcj60O(/*const int:2068:2068:2036:e*/IRQ_WAKEUP0_realsmith_fFniAcj60O));
/*aft_stmt:2036*/
/*aft_stmt:2036*/
    /*bef_stmt:2066*/
return Tag3_realsmith_fFniAcj60O(/*int:2068:2068:2066:e*/PECR_realsmith_fFniAcj60O);
/*aft_stmt:2066*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_eHZi7SBXPM(x) (x)
#define Tag2_realsmith_eHZi7SBXPM(x) (x)
#include "stdlib.h"
int realsmith_eHZi7SBXPM(int prop_value_realsmith_eHZi7SBXPM, int len_realsmith_eHZi7SBXPM) {
    /*bef_stmt:17127*/
if (Tag1_realsmith_eHZi7SBXPM(/*int:17140:17140:17127:e*/len_realsmith_eHZi7SBXPM) < sizeof(unsigned int))
        return 0;
/*aft_stmt:17127*/
    /*bef_stmt:17138*/
return Tag2_realsmith_eHZi7SBXPM(/*int:17140:17140:17138:e*/prop_value_realsmith_eHZi7SBXPM);
/*aft_stmt:17138*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ly4xHwYl2b(x) (x)
#define Tag2_realsmith_ly4xHwYl2b(x) (x)
#define Tag3_realsmith_ly4xHwYl2b(x) (x)
#define Tag4_realsmith_ly4xHwYl2b(x) (x)
#define Tag5_realsmith_ly4xHwYl2b(x) (x)
#include "stdlib.h"
struct dw_hdmi_9AblZ0 {
    unsigned int sample_rate_realsmith_ly4xHwYl2b;
    unsigned int mtmdsclock_realsmith_ly4xHwYl2b;
};
int realsmith_ly4xHwYl2b(unsigned int rate_realsmith_ly4xHwYl2b, unsigned int mtmdsclock_realsmith_ly4xHwYl2b) {
    struct dw_hdmi_9AblZ0 hdmi_realsmith_ly4xHwYl2b;
    /*bef_stmt:17189*/
hdmi_realsmith_ly4xHwYl2b.sample_rate_realsmith_ly4xHwYl2b = Tag1_realsmith_ly4xHwYl2b(/*unsigned int:17287:17287:17189:e*/rate_realsmith_ly4xHwYl2b);
/*aft_stmt:17189*/
    /*bef_stmt:17222*/
hdmi_realsmith_ly4xHwYl2b.mtmdsclock_realsmith_ly4xHwYl2b = Tag2_realsmith_ly4xHwYl2b(/*unsigned int:17287:17287:17222:e*/mtmdsclock_realsmith_ly4xHwYl2b);
/*aft_stmt:17222*/
    /*bef_stmt:17272*/
/*bef_stmt:17272*/
unsigned int regenerator_value_realsmith_ly4xHwYl2b = Tag3_realsmith_ly4xHwYl2b(/*unsigned int:17287:17287:17272:e*/hdmi_realsmith_ly4xHwYl2b.mtmdsclock_realsmith_ly4xHwYl2b) + Tag4_realsmith_ly4xHwYl2b(/*unsigned int:17287:17287:17272:e*/hdmi_realsmith_ly4xHwYl2b.sample_rate_realsmith_ly4xHwYl2b);
/*aft_stmt:17272*/
/*aft_stmt:17272*/
    /*bef_stmt:17285*/
return Tag5_realsmith_ly4xHwYl2b(/*unsigned int:17287:17287:17285:e*/regenerator_value_realsmith_ly4xHwYl2b);
/*aft_stmt:17285*/
}



#include "stdlib.h"
int realsmith_vki2CL3VHu(int ticks_realsmith_vki2CL3VHu, int *image_realsmith_vki2CL3VHu, int *reg_lock_realsmith_vki2CL3VHu) {
    unsigned long flags_realsmith_vki2CL3VHu;
    unsigned char timer_high_realsmith_vki2CL3VHu, timer_low_realsmith_vki2CL3VHu;
    const long unsigned int CS4231_ALT_FEATURE_1_realsmith_vki2CL3VHu = 0;
    const int CS4231_TIMER_ENABLE_realsmith_vki2CL3VHu = 1;
    const long unsigned int CS4231_TIMER_HIGH_realsmith_vki2CL3VHu = 2;
    const long unsigned int CS4231_TIMER_LOW_realsmith_vki2CL3VHu = 3;
    flags_realsmith_vki2CL3VHu = 0;
    timer_high_realsmith_vki2CL3VHu = (unsigned char)(ticks_realsmith_vki2CL3VHu >> 8);
    timer_low_realsmith_vki2CL3VHu = (unsigned char)ticks_realsmith_vki2CL3VHu;
    if ((image_realsmith_vki2CL3VHu[CS4231_ALT_FEATURE_1_realsmith_vki2CL3VHu] & CS4231_TIMER_ENABLE_realsmith_vki2CL3VHu) == 0 ||
        timer_high_realsmith_vki2CL3VHu != image_realsmith_vki2CL3VHu[CS4231_TIMER_HIGH_realsmith_vki2CL3VHu] ||
        timer_low_realsmith_vki2CL3VHu != image_realsmith_vki2CL3VHu[CS4231_TIMER_LOW_realsmith_vki2CL3VHu]) {
        image_realsmith_vki2CL3VHu[CS4231_TIMER_HIGH_realsmith_vki2CL3VHu] = timer_high_realsmith_vki2CL3VHu;
        image_realsmith_vki2CL3VHu[CS4231_TIMER_LOW_realsmith_vki2CL3VHu] = timer_low_realsmith_vki2CL3VHu;
        image_realsmith_vki2CL3VHu[CS4231_ALT_FEATURE_1_realsmith_vki2CL3VHu] |= CS4231_TIMER_ENABLE_realsmith_vki2CL3VHu;
    }
    return 0;
}
int realsmith_proxy_iAkERlXdUt(int p_0_oJvQ04Gps5, int p_1_0IlKMUwEOS, int p_2_gkgr5tMUup) {
int proxy_zycK0557gO[16] = { p_1_0IlKMUwEOS, 98, p_1_0IlKMUwEOS, p_1_0IlKMUwEOS, 23, 4, 84, 78, 11, 93, p_1_0IlKMUwEOS, 81, 92, 36, 7, p_1_0IlKMUwEOS };
int proxy_BXtHFonCdh[17] = { p_2_gkgr5tMUup, p_2_gkgr5tMUup, p_2_gkgr5tMUup, p_2_gkgr5tMUup, p_2_gkgr5tMUup, p_2_gkgr5tMUup, 91, 48, 58, 0, 77, 44, p_2_gkgr5tMUup, 7, 97, 41, 21 };
int proxy_ret_qNBOCjtCUe = realsmith_vki2CL3VHu(p_0_oJvQ04Gps5, proxy_zycK0557gO, proxy_BXtHFonCdh);
return proxy_ret_qNBOCjtCUe;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_cXRcbIHqJc(x) (x)
#define Tag2_realsmith_cXRcbIHqJc(x) (x)
#include "stdint.h"
int realsmith_cXRcbIHqJc(unsigned int reg_value_realsmith_cXRcbIHqJc) {
    unsigned int val32_realsmith_cXRcbIHqJc;
    /*bef_stmt:1994*/
val32_realsmith_cXRcbIHqJc = Tag1_realsmith_cXRcbIHqJc(/*unsigned int:2073:2073:1994:e*/reg_value_realsmith_cXRcbIHqJc);
/*aft_stmt:1994*/
    val32_realsmith_cXRcbIHqJc &= ~((1U << (22)) | (1U << (23)));
    /*bef_stmt:2071*/
return Tag2_realsmith_cXRcbIHqJc(/*unsigned int:2073:2073:2071:e*/val32_realsmith_cXRcbIHqJc);
/*aft_stmt:2071*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_pnvMJsnY6y(x) (x)
#define Tag2_realsmith_pnvMJsnY6y(x) (x)
#include "stdlib.h"
int realsmith_pnvMJsnY6y(int vcpu_value_realsmith_pnvMJsnY6y) {
    /*bef_stmt:17105*/
int updated_state_realsmith_pnvMJsnY6y = Tag1_realsmith_pnvMJsnY6y(/*int:17117:17117:17105:e*/vcpu_value_realsmith_pnvMJsnY6y) + 1;
/*aft_stmt:17105*/
    /*bef_stmt:17115*/
return Tag2_realsmith_pnvMJsnY6y(/*int:17117:17117:17115:e*/updated_state_realsmith_pnvMJsnY6y);
/*aft_stmt:17115*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_BBU0WoUms9(x) (x)
#define Tag2_realsmith_BBU0WoUms9(x) (x)
#define Tag3_realsmith_BBU0WoUms9(x) (x)
#include "stdlib.h"
int realsmith_BBU0WoUms9(int dev_resource_realsmith_BBU0WoUms9, int indio_dev_realsmith_BBU0WoUms9) {
    /*bef_stmt:17171*/
/*bef_stmt:17171*/
int rc_realsmith_BBU0WoUms9 = (Tag1_realsmith_BBU0WoUms9(/*int:17211:17211:17171:e*/dev_resource_realsmith_BBU0WoUms9) == 1 && Tag2_realsmith_BBU0WoUms9(/*int:17211:17211:17171:e*/indio_dev_realsmith_BBU0WoUms9) == 1) ? 0 : -1;
/*aft_stmt:17171*/
/*aft_stmt:17171*/
    /*bef_stmt:17201*/
if (Tag3_realsmith_BBU0WoUms9(/*int:17211:17211:17201:e*/rc_realsmith_BBU0WoUms9) != 0) {
        return -1;
    }
/*aft_stmt:17201*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_BneHjr132y(x) (x)
#include "stdint.h"
int realsmith_BneHjr132y(int val_realsmith_BneHjr132y) {
    /*bef_stmt:1995*/
return ((Tag1_realsmith_BneHjr132y(/*int:1997:1997:1995:e*/val_realsmith_BneHjr132y)) << 4) & 0xFFFF;
/*aft_stmt:1995*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_uiAiX822H3(x) (x)
#define Tag2_realsmith_uiAiX822H3(x) (x)
#define Tag3_realsmith_uiAiX822H3(x) (x)
#define Tag4_realsmith_uiAiX822H3(x) (x)
#define Tag5_realsmith_uiAiX822H3(x) (x)
#define Tag6_realsmith_uiAiX822H3(x) (x)
#define Tag7_realsmith_uiAiX822H3(x) (x)
#define Tag8_realsmith_uiAiX822H3(x) (x)
#include "stdlib.h"
#include "string.h"
int realsmith_uiAiX822H3(int inode_state_realsmith_uiAiX822H3, int no_flush_realsmith_uiAiX822H3, int fh_realsmith_uiAiX822H3, int id_realsmith_uiAiX822H3, int f_mapping_realsmith_uiAiX822H3) {
    int err_realsmith_uiAiX822H3 = 0;
    /*bef_stmt:25002*/
if (Tag1_realsmith_uiAiX822H3(/*int:25334:25334:25002:e*/inode_state_realsmith_uiAiX822H3) < 0)
        return -1;
/*aft_stmt:25002*/
    /*bef_stmt:25019*/
if (Tag2_realsmith_uiAiX822H3(/*int:25334:25334:25019:e*/no_flush_realsmith_uiAiX822H3))
        return 0;
/*aft_stmt:25019*/
    /*bef_stmt:25050*/
if (Tag3_realsmith_uiAiX822H3(/*int:25334:25334:25050:e*/inode_state_realsmith_uiAiX822H3) != 1) {
        return -1;
    }
/*aft_stmt:25050*/
    /*bef_stmt:25081*/
if (Tag4_realsmith_uiAiX822H3(/*int:25334:25334:25081:e*/f_mapping_realsmith_uiAiX822H3) < 0) {
        return -1;
    }
/*aft_stmt:25081*/
    struct {
        int fh_realsmith_uiAiX822H3;
        int lock_owner_realsmith_uiAiX822H3;
    } inarg_realsmith_uiAiX822H3;
    (memset(&inarg_realsmith_uiAiX822H3, 0, sizeof(inarg_realsmith_uiAiX822H3)));
    /*bef_stmt:25253*/
inarg_realsmith_uiAiX822H3.fh_realsmith_uiAiX822H3 = Tag5_realsmith_uiAiX822H3(/*int:25334:25334:25253:e*/fh_realsmith_uiAiX822H3);
/*aft_stmt:25253*/
    /*bef_stmt:25274*/
inarg_realsmith_uiAiX822H3.lock_owner_realsmith_uiAiX822H3 = Tag6_realsmith_uiAiX822H3(/*int:25334:25334:25274:e*/id_realsmith_uiAiX822H3);
/*aft_stmt:25274*/
    /*bef_stmt:25321*/
if (Tag7_realsmith_uiAiX822H3(/*int:25334:25334:25321:e*/inarg_realsmith_uiAiX822H3.fh_realsmith_uiAiX822H3) == 0) {
        no_flush_realsmith_uiAiX822H3 = 1;
        return 0;
    }
/*aft_stmt:25321*/
    /*bef_stmt:25332*/
return Tag8_realsmith_uiAiX822H3(/*int:25334:25334:25332:e*/err_realsmith_uiAiX822H3);
/*aft_stmt:25332*/
}



#include "stdlib.h"
int realsmith_r2t54vbhnb(int event_realsmith_r2t54vbhnb, int *ioceth_state_realsmith_r2t54vbhnb, int *ioc_disabled_realsmith_r2t54vbhnb) {
    switch (event_realsmith_r2t54vbhnb) {
    case 130:
        *ioceth_state_realsmith_r2t54vbhnb = 1;
        *ioc_disabled_realsmith_r2t54vbhnb = 1;
        break;
    case 128:
        *ioceth_state_realsmith_r2t54vbhnb = 2;
        break;
    case 129:
        break;
    default:
        return -1;
    }
    return 0;
}
int realsmith_proxy_VkfcB7bM0k(int p_0_yUOtLOASSI, int p_1_zRp1r2ePLe, int p_2_TolmjgQqNJ) {
int proxy_6qjGbu0f02[20] = { p_1_zRp1r2ePLe, 9, 34, p_1_zRp1r2ePLe, 10, 86, 67, 65, p_1_zRp1r2ePLe, 82, 49, p_1_zRp1r2ePLe, p_1_zRp1r2ePLe, 56, 64, 20, 6, 89, p_1_zRp1r2ePLe, 74 };
int proxy_gdzsk89fqU[19] = { p_2_TolmjgQqNJ, p_2_TolmjgQqNJ, 50, p_2_TolmjgQqNJ, p_2_TolmjgQqNJ, 8, 76, p_2_TolmjgQqNJ, p_2_TolmjgQqNJ, 11, p_2_TolmjgQqNJ, 56, 91, 82, p_2_TolmjgQqNJ, p_2_TolmjgQqNJ, 35, 51, p_2_TolmjgQqNJ };
int proxy_ret_l0fJBviXv6 = realsmith_r2t54vbhnb(p_0_yUOtLOASSI, proxy_6qjGbu0f02, proxy_gdzsk89fqU);
return proxy_ret_l0fJBviXv6;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_C8awrhAgRo(x) (x)
#define Tag2_realsmith_C8awrhAgRo(x) (x)
#include "stdint.h"
int realsmith_C8awrhAgRo(unsigned int u_realsmith_C8awrhAgRo) {
    /*bef_stmt:2014*/
unsigned int value_realsmith_C8awrhAgRo = ((Tag1_realsmith_C8awrhAgRo(/*unsigned int:2029:2029:2014:e*/u_realsmith_C8awrhAgRo)) << 16) & ~0xFFFF0000;
/*aft_stmt:2014*/
    /*bef_stmt:2027*/
return Tag2_realsmith_C8awrhAgRo(/*unsigned int:2029:2029:2027:e*/value_realsmith_C8awrhAgRo);
/*aft_stmt:2027*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_j8BM7RuXKQ(x) (x)
#define Tag2_realsmith_j8BM7RuXKQ(x) (x)
#define Tag3_realsmith_j8BM7RuXKQ(x) (x)
#include "stdlib.h"
struct sock_uKJZ5E {
    int cookie_realsmith_j8BM7RuXKQ;
};
int realsmith_j8BM7RuXKQ(int cookie_realsmith_j8BM7RuXKQ) {
    /*bef_stmt:17131*/
int id_realsmith_j8BM7RuXKQ = Tag1_realsmith_j8BM7RuXKQ(/*int:17179:17179:17131:e*/cookie_realsmith_j8BM7RuXKQ);
/*aft_stmt:17131*/
    /*bef_stmt:17169*/
if (Tag2_realsmith_j8BM7RuXKQ(/*int:17179:17179:17169:e*/id_realsmith_j8BM7RuXKQ)) {
        cookie_realsmith_j8BM7RuXKQ = 0xffffffff;
        /*bef_stmt:17163*/
return Tag3_realsmith_j8BM7RuXKQ(/*int:17179:17179:17163:e*/id_realsmith_j8BM7RuXKQ);
/*aft_stmt:17163*/
    }
/*aft_stmt:17169*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_uMQJkDfrOe(x) (x)
#define Tag2_realsmith_uMQJkDfrOe(x) (x)
#define Tag3_realsmith_uMQJkDfrOe(x) (x)
#define Tag4_realsmith_uMQJkDfrOe(x) (x)
#include "stdlib.h"
int realsmith_uMQJkDfrOe(int nonagle_realsmith_uMQJkDfrOe, int write_seq_realsmith_uMQJkDfrOe, int truesize_realsmith_uMQJkDfrOe) {
    int tcp_flags_realsmith_uMQJkDfrOe = 1;
    int sacked_realsmith_uMQJkDfrOe = 0;
    int csum_realsmith_uMQJkDfrOe = 0;
    /*bef_stmt:17211*/
int end_seq_realsmith_uMQJkDfrOe = Tag1_realsmith_uMQJkDfrOe(/*int:17288:17288:17211:e*/write_seq_realsmith_uMQJkDfrOe);
/*aft_stmt:17211*/
    /*bef_stmt:17237*/
int seq_realsmith_uMQJkDfrOe = Tag2_realsmith_uMQJkDfrOe(/*int:17288:17288:17237:e*/write_seq_realsmith_uMQJkDfrOe);
/*aft_stmt:17237*/
    /*bef_stmt:17275*/
if (Tag3_realsmith_uMQJkDfrOe(/*int:17288:17288:17275:e*/nonagle_realsmith_uMQJkDfrOe) & 2) {
        nonagle_realsmith_uMQJkDfrOe &= ~2;
    }
/*aft_stmt:17275*/
    /*bef_stmt:17286*/
return Tag4_realsmith_uMQJkDfrOe(/*int:17288:17288:17286:e*/seq_realsmith_uMQJkDfrOe);
/*aft_stmt:17286*/
}



#include "stdlib.h"
struct dc_Dy2vii {
    int link_count_realsmith_KdBa5wAlmj;
    int stream_enc_count_realsmith_KdBa5wAlmj;
    int *links_realsmith_KdBa5wAlmj; // Simplified for the function
};
int realsmith_KdBa5wAlmj(int link_count_realsmith_KdBa5wAlmj, int stream_enc_count_realsmith_KdBa5wAlmj, int *links_realsmith_KdBa5wAlmj, int *stream_enc_realsmith_KdBa5wAlmj) {
    int i_realsmith_KdBa5wAlmj;
    int signal_realsmith_KdBa5wAlmj = 0;
    for (i_realsmith_KdBa5wAlmj = 0; i_realsmith_KdBa5wAlmj < stream_enc_count_realsmith_KdBa5wAlmj; i_realsmith_KdBa5wAlmj++) {
    }
    for (i_realsmith_KdBa5wAlmj = 0; i_realsmith_KdBa5wAlmj < link_count_realsmith_KdBa5wAlmj; i_realsmith_KdBa5wAlmj++) {
        int connector_id_realsmith_KdBa5wAlmj = links_realsmith_KdBa5wAlmj[i_realsmith_KdBa5wAlmj];
        if (connector_id_realsmith_KdBa5wAlmj == 1 || connector_id_realsmith_KdBa5wAlmj == 2) {
            if (connector_id_realsmith_KdBa5wAlmj == 2) {
                signal_realsmith_KdBa5wAlmj = 1;
            }
        }
    }
    return signal_realsmith_KdBa5wAlmj;
}
int realsmith_proxy_hph7BuPbfC(int p_0_AH6sY3sNcD, int p_1_RCovzltsgn, int p_2_SH05LAQjP2, int p_3_IAtqYhIs8Y) {
int proxy_OCq5xfQxnM[20] = { 80, 57, 99, p_2_SH05LAQjP2, p_2_SH05LAQjP2, p_2_SH05LAQjP2, p_2_SH05LAQjP2, p_2_SH05LAQjP2, p_2_SH05LAQjP2, 36, p_2_SH05LAQjP2, 68, p_2_SH05LAQjP2, p_2_SH05LAQjP2, 96, 23, 15, 18, 49, p_2_SH05LAQjP2 };
int proxy_i9uNP8lekn[16] = { 25, 2, p_3_IAtqYhIs8Y, 81, 98, 59, p_3_IAtqYhIs8Y, p_3_IAtqYhIs8Y, 17, 62, 48, 67, p_3_IAtqYhIs8Y, 72, 45, 75 };
int proxy_ret_nDofM1Z1iB = realsmith_KdBa5wAlmj(p_0_AH6sY3sNcD, p_1_RCovzltsgn, proxy_OCq5xfQxnM, proxy_i9uNP8lekn);
return proxy_ret_nDofM1Z1iB;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_huxzSk8I6b(x) (x)
#define Tag2_realsmith_huxzSk8I6b(x) (x)
#define Tag3_realsmith_huxzSk8I6b(x) (x)
#define Tag4_realsmith_huxzSk8I6b(x) (x)
#include "stdlib.h"
struct el3_private_X75Hhp {
    int lock_realsmith_huxzSk8I6b; // Simulating lock as an integer for simplicity
};
int realsmith_huxzSk8I6b(int dev_priv_lock_realsmith_huxzSk8I6b, int dev_cmd_realsmith_huxzSk8I6b) {
    struct el3_private_X75Hhp lp_realsmith_huxzSk8I6b;
    /*bef_stmt:17177*/
lp_realsmith_huxzSk8I6b.lock_realsmith_huxzSk8I6b = Tag1_realsmith_huxzSk8I6b(/*int:17283:17283:17177:e*/dev_priv_lock_realsmith_huxzSk8I6b);
/*aft_stmt:17177*/
    int ret_realsmith_huxzSk8I6b;
    /*bef_stmt:17268*/
if (Tag2_realsmith_huxzSk8I6b(/*int:17283:17283:17268:e*/lp_realsmith_huxzSk8I6b.lock_realsmith_huxzSk8I6b)) {
        /*bef_stmt:17243*/
ret_realsmith_huxzSk8I6b = Tag3_realsmith_huxzSk8I6b(/*int:17283:17283:17243:e*/dev_cmd_realsmith_huxzSk8I6b) * 2;
/*aft_stmt:17243*/
    } else {
        ret_realsmith_huxzSk8I6b = -1;
    }
/*aft_stmt:17268*/
    /*bef_stmt:17281*/
return Tag4_realsmith_huxzSk8I6b(/*int:17283:17283:17281:e*/ret_realsmith_huxzSk8I6b);
/*aft_stmt:17281*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_3sieGNZGaP(x) (x)
#define Tag2_realsmith_3sieGNZGaP(x) (x)
#define Tag3_realsmith_3sieGNZGaP(x) (x)
#define Tag4_realsmith_3sieGNZGaP(x) (x)
#include "stdlib.h"
int realsmith_3sieGNZGaP(int counter_realsmith_3sieGNZGaP, unsigned int reg_realsmith_3sieGNZGaP, unsigned int bitmask_realsmith_3sieGNZGaP) {
    counter_realsmith_3sieGNZGaP++;
    /*bef_stmt:17150*/
if (Tag1_realsmith_3sieGNZGaP(/*int:17195:17195:17150:e*/counter_realsmith_3sieGNZGaP) != 1) {
        return 0;
    }
/*aft_stmt:17150*/
    /*bef_stmt:17193*/
/*bef_stmt:17193*/
/*bef_stmt:17193*/
return (Tag2_realsmith_3sieGNZGaP(/*unsigned int:17195:17195:17193:e*/reg_realsmith_3sieGNZGaP) & ~Tag3_realsmith_3sieGNZGaP(/*unsigned int:17195:17195:17193:e*/bitmask_realsmith_3sieGNZGaP)) | Tag4_realsmith_3sieGNZGaP(/*unsigned int:17195:17195:17193:e*/bitmask_realsmith_3sieGNZGaP);
/*aft_stmt:17193*/
/*aft_stmt:17193*/
/*aft_stmt:17193*/
}



#include "stdlib.h"
typedef struct {
    int state_realsmith_lMXcy62W6V;
} Socket_oXDbtF;
typedef struct {
    int sk_state_realsmith_lMXcy62W6V;
} Sock_oXDbtF;
int realsmith_lMXcy62W6V(int sk_state_realsmith_lMXcy62W6V, int *newsock_state_realsmith_lMXcy62W6V, int flags_realsmith_lMXcy62W6V) {
    Sock_oXDbtF sk_realsmith_lMXcy62W6V;
    sk_realsmith_lMXcy62W6V.sk_state_realsmith_lMXcy62W6V = sk_state_realsmith_lMXcy62W6V;
    int err_realsmith_lMXcy62W6V = 0;
    long timeo_realsmith_lMXcy62W6V = (flags_realsmith_lMXcy62W6V & 2048) ? 0 : 1000;
    int ch_realsmith_lMXcy62W6V = 0;
    while (1) {
        if (sk_realsmith_lMXcy62W6V.sk_state_realsmith_lMXcy62W6V != 2) {
            err_realsmith_lMXcy62W6V = -77;
            break;
        }
        if (ch_realsmith_lMXcy62W6V) {
            break;
        }
        if (!timeo_realsmith_lMXcy62W6V) {
            err_realsmith_lMXcy62W6V = -11;
            break;
        }
        timeo_realsmith_lMXcy62W6V -= 100;
    }
    if (err_realsmith_lMXcy62W6V) {
        return err_realsmith_lMXcy62W6V;
    }
    *newsock_state_realsmith_lMXcy62W6V = 1;
    return 0;
}
int realsmith_proxy_ZY3LMzkp5W(int p_0_xG7Ixx5Etx, int p_1_L8qQq1Lv0w, int p_2_UVJoqWPfoW) {
int proxy_928m60Ykwl[14] = { p_1_L8qQq1Lv0w, p_1_L8qQq1Lv0w, 34, 49, 55, p_1_L8qQq1Lv0w, 62, 4, p_1_L8qQq1Lv0w, 28, p_1_L8qQq1Lv0w, 14, 92, 56 };
int proxy_ret_8tpkF85S2K = realsmith_lMXcy62W6V(p_0_xG7Ixx5Etx, proxy_928m60Ykwl, p_2_UVJoqWPfoW);
return proxy_ret_8tpkF85S2K;
}


#include "stdlib.h"
struct mlx4_icm_chunk_rDOpac {
    int nsg_realsmith_v1fmPYR8Dy;
    int npages_realsmith_v1fmPYR8Dy;
    int *lengths_realsmith_v1fmPYR8Dy; // Using an array to simulate the sg array
};
int realsmith_v1fmPYR8Dy(int nsg_realsmith_v1fmPYR8Dy, int npages_realsmith_v1fmPYR8Dy, int *lengths_realsmith_v1fmPYR8Dy) {
    struct mlx4_icm_chunk_rDOpac chunk_realsmith_v1fmPYR8Dy;
    chunk_realsmith_v1fmPYR8Dy.nsg_realsmith_v1fmPYR8Dy = nsg_realsmith_v1fmPYR8Dy;
    chunk_realsmith_v1fmPYR8Dy.npages_realsmith_v1fmPYR8Dy = npages_realsmith_v1fmPYR8Dy;
    chunk_realsmith_v1fmPYR8Dy.lengths_realsmith_v1fmPYR8Dy = lengths_realsmith_v1fmPYR8Dy;
    int i_realsmith_v1fmPYR8Dy;
    int total_freed_realsmith_v1fmPYR8Dy = 0;
    if (chunk_realsmith_v1fmPYR8Dy.nsg_realsmith_v1fmPYR8Dy > 0) {
        total_freed_realsmith_v1fmPYR8Dy += chunk_realsmith_v1fmPYR8Dy.npages_realsmith_v1fmPYR8Dy;
    }
    for (i_realsmith_v1fmPYR8Dy = 0; i_realsmith_v1fmPYR8Dy < chunk_realsmith_v1fmPYR8Dy.npages_realsmith_v1fmPYR8Dy; ++i_realsmith_v1fmPYR8Dy) {
        total_freed_realsmith_v1fmPYR8Dy += 1;
    }
    return total_freed_realsmith_v1fmPYR8Dy;
}
int realsmith_proxy_Haoo9sFLMn(int p_0_eY261NJgE8, int p_1_Qn5HUqPwQj, int p_2_t6GkYW1CIA) {
int proxy_D7SisRz6vN[19] = { p_2_t6GkYW1CIA, 95, p_2_t6GkYW1CIA, 71, p_2_t6GkYW1CIA, 70, p_2_t6GkYW1CIA, 34, 36, p_2_t6GkYW1CIA, 58, p_2_t6GkYW1CIA, p_2_t6GkYW1CIA, p_2_t6GkYW1CIA, p_2_t6GkYW1CIA, p_2_t6GkYW1CIA, 65, 18, 35 };
int proxy_ret_aSm4DXsSvY = realsmith_v1fmPYR8Dy(p_0_eY261NJgE8, p_1_Qn5HUqPwQj, proxy_D7SisRz6vN);
return proxy_ret_aSm4DXsSvY;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_novjiEcu9Q(x) (x)
#define Tag2_realsmith_novjiEcu9Q(x) (x)
#define Tag3_realsmith_novjiEcu9Q(x) (x)
#define Tag4_realsmith_novjiEcu9Q(x) (x)
#define Tag5_realsmith_novjiEcu9Q(x) (x)
#define Tag6_realsmith_novjiEcu9Q(x) (x)
#include "stdlib.h"
int realsmith_novjiEcu9Q(int net_stat_realsmith_novjiEcu9Q, int skb_sk_realsmith_novjiEcu9Q) {
    /*bef_stmt:17123*/
int err_realsmith_novjiEcu9Q = Tag1_realsmith_novjiEcu9Q(/*int:17205:17205:17123:e*/skb_sk_realsmith_novjiEcu9Q);
/*aft_stmt:17123*/
    /*bef_stmt:17192*/
if (Tag2_realsmith_novjiEcu9Q(/*int:17205:17205:17192:e*/err_realsmith_novjiEcu9Q)) {
        /*bef_stmt:17166*/
/*bef_stmt:17166*/
if (Tag3_realsmith_novjiEcu9Q(/*int:17205:17205:17166:e*/err_realsmith_novjiEcu9Q) > 0)
            err_realsmith_novjiEcu9Q = -Tag4_realsmith_novjiEcu9Q(/*int:17205:17205:17166:e*/err_realsmith_novjiEcu9Q);
/*aft_stmt:17166*/
/*aft_stmt:17166*/
        /*bef_stmt:17184*/
if (Tag5_realsmith_novjiEcu9Q(/*int:17205:17205:17184:e*/err_realsmith_novjiEcu9Q))
            net_stat_realsmith_novjiEcu9Q++;
/*aft_stmt:17184*/
    }
/*aft_stmt:17192*/
    /*bef_stmt:17203*/
return Tag6_realsmith_novjiEcu9Q(/*int:17205:17205:17203:e*/err_realsmith_novjiEcu9Q);
/*aft_stmt:17203*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_MLfTLJKHCb(x) (x)
#define Tag2_realsmith_MLfTLJKHCb(x) (x)
#define Tag3_realsmith_MLfTLJKHCb(x) (x)
#include "stdlib.h"
struct sk_buff_Sp3J7T {
    int dummy_realsmith_MLfTLJKHCb;
};
int realsmith_MLfTLJKHCb(int sap_dummy_realsmith_MLfTLJKHCb, int skb_dummy_realsmith_MLfTLJKHCb) {
    struct sk_buff_Sp3J7T skb_realsmith_MLfTLJKHCb;
    /*bef_stmt:17177*/
skb_realsmith_MLfTLJKHCb.dummy_realsmith_MLfTLJKHCb = Tag1_realsmith_MLfTLJKHCb(/*int:17218:17218:17177:e*/skb_dummy_realsmith_MLfTLJKHCb);
/*aft_stmt:17177*/
    /*bef_stmt:17216*/
/*bef_stmt:17216*/
return Tag2_realsmith_MLfTLJKHCb(/*int:17218:17218:17216:e*/sap_dummy_realsmith_MLfTLJKHCb) + Tag3_realsmith_MLfTLJKHCb(/*int:17218:17218:17216:e*/skb_realsmith_MLfTLJKHCb.dummy_realsmith_MLfTLJKHCb);
/*aft_stmt:17216*/
/*aft_stmt:17216*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_KIOYOjEwAi(x) (x)
#define Tag2_realsmith_KIOYOjEwAi(x) (x)
#define Tag3_realsmith_KIOYOjEwAi(x) (x)
#define Tag4_realsmith_KIOYOjEwAi(x) (x)
#define Tag5_realsmith_KIOYOjEwAi(x) (x)
#define Tag6_realsmith_KIOYOjEwAi(x) (x)
#include "stdlib.h"
struct usb_ftdi_Wjv9SO {
    int kref_realsmith_KIOYOjEwAi;
    int status_work_realsmith_KIOYOjEwAi;
};
int realsmith_KIOYOjEwAi(int kref_realsmith_KIOYOjEwAi, int status_work_realsmith_KIOYOjEwAi, unsigned int delta_realsmith_KIOYOjEwAi) {
    struct usb_ftdi_Wjv9SO ftdi_realsmith_KIOYOjEwAi;
    /*bef_stmt:17209*/
ftdi_realsmith_KIOYOjEwAi.kref_realsmith_KIOYOjEwAi = Tag1_realsmith_KIOYOjEwAi(/*int:17392:17392:17209:e*/kref_realsmith_KIOYOjEwAi);
/*aft_stmt:17209*/
    /*bef_stmt:17242*/
ftdi_realsmith_KIOYOjEwAi.status_work_realsmith_KIOYOjEwAi = Tag2_realsmith_KIOYOjEwAi(/*int:17392:17392:17242:e*/status_work_realsmith_KIOYOjEwAi);
/*aft_stmt:17242*/
    int result_realsmith_KIOYOjEwAi = 0;
    /*bef_stmt:17305*/
if (Tag3_realsmith_KIOYOjEwAi(/*int:17392:17392:17305:e*/ftdi_realsmith_KIOYOjEwAi.status_work_realsmith_KIOYOjEwAi) == 0) {
        result_realsmith_KIOYOjEwAi = 1;
    }
/*aft_stmt:17305*/
    /*bef_stmt:17373*/
if (!Tag4_realsmith_KIOYOjEwAi(/*int:17392:17392:17373:e*/result_realsmith_KIOYOjEwAi)) {
        ftdi_realsmith_KIOYOjEwAi.kref_realsmith_KIOYOjEwAi--;
        /*bef_stmt:17365*/
if (Tag5_realsmith_KIOYOjEwAi(/*int:17392:17392:17365:e*/ftdi_realsmith_KIOYOjEwAi.kref_realsmith_KIOYOjEwAi) == 0) {
            return -1;
        }
/*aft_stmt:17365*/
    }
/*aft_stmt:17373*/
    /*bef_stmt:17390*/
return Tag6_realsmith_KIOYOjEwAi(/*int:17392:17392:17390:e*/ftdi_realsmith_KIOYOjEwAi.kref_realsmith_KIOYOjEwAi);
/*aft_stmt:17390*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_42kQZbWqe8(x) (x)
#define Tag2_realsmith_42kQZbWqe8(x) (x)
#define Tag3_realsmith_42kQZbWqe8(x) (x)
#define Tag4_realsmith_42kQZbWqe8(x) (x)
#define Tag5_realsmith_42kQZbWqe8(x) (x)
#include "stdbool.h"
int realsmith_42kQZbWqe8(int is_sriov_realsmith_42kQZbWqe8, int first_vf_cid_realsmith_42kQZbWqe8, int vf_cids_realsmith_42kQZbWqe8, int ilt_page_cids_realsmith_42kQZbWqe8, int l2_ilt_lines_realsmith_42kQZbWqe8) {
    /*bef_stmt:689*/
if (/*TAG1:STA*/((int)(realsmith_admOgqIdWU((int)(is_sriov_realsmith_42kQZbWqe8)+(-66), (int)(is_sriov_realsmith_42kQZbWqe8)+(-70))+(int)(is_sriov_realsmith_42kQZbWqe8)-(90))+is_sriov_realsmith_42kQZbWqe8)/*TAG1:END:is_sriov_realsmith_42kQZbWqe8*/) {
        /*bef_stmt:684*/
/*bef_stmt:684*/
/*bef_stmt:684*/
return (/*TAG2:STA*/((int)(realsmith_proxy_UuxPxJW9w3((int)(first_vf_cid_realsmith_42kQZbWqe8)+(63), (unsigned int)(first_vf_cid_realsmith_42kQZbWqe8)+(1))+(int)(first_vf_cid_realsmith_42kQZbWqe8)-(22))+first_vf_cid_realsmith_42kQZbWqe8)/*TAG2:END:first_vf_cid_realsmith_42kQZbWqe8*/ + /*TAG3:STA*/((int)(realsmith_BnL4SC516Q((unsigned int)(vf_cids_realsmith_42kQZbWqe8)+(-66), (int)(vf_cids_realsmith_42kQZbWqe8)+(-69), (unsigned int)(vf_cids_realsmith_42kQZbWqe8)+(-23))+(int)(vf_cids_realsmith_42kQZbWqe8)-(157))+vf_cids_realsmith_42kQZbWqe8)/*TAG3:END:vf_cids_realsmith_42kQZbWqe8*/) / /*TAG4:STA*/((int)(realsmith_F8jgF9wUwq((int)(ilt_page_cids_realsmith_42kQZbWqe8)+(-1), (int)(ilt_page_cids_realsmith_42kQZbWqe8)+(4), (int)(ilt_page_cids_realsmith_42kQZbWqe8)+(61))+(int)(ilt_page_cids_realsmith_42kQZbWqe8)-(5))+ilt_page_cids_realsmith_42kQZbWqe8)/*TAG4:END:ilt_page_cids_realsmith_42kQZbWqe8*/;
/*aft_stmt:684*/
/*aft_stmt:684*/
/*aft_stmt:684*/
    }
/*aft_stmt:689*/
    /*bef_stmt:700*/
return Tag5_realsmith_42kQZbWqe8(/*int:702:702:700:e*/l2_ilt_lines_realsmith_42kQZbWqe8);
/*aft_stmt:700*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_MP3L7ND7qD(x) (x)
#define Tag2_realsmith_MP3L7ND7qD(x) (x)
#define Tag3_realsmith_MP3L7ND7qD(x) (x)
#define Tag4_realsmith_MP3L7ND7qD(x) (x)
#include "stdbool.h"
int realsmith_MP3L7ND7qD(int data_to_read_realsmith_MP3L7ND7qD) {
    int mask_realsmith_MP3L7ND7qD = 0;
    const int EPOLLIN_realsmith_MP3L7ND7qD = 1;
    const int EPOLLRDNORM_realsmith_MP3L7ND7qD = 2;
    /*bef_stmt:701*/
if (Tag1_realsmith_MP3L7ND7qD(/*int:714:714:701:e*/data_to_read_realsmith_MP3L7ND7qD)) {
        /*bef_stmt:670*/
/*bef_stmt:670*/
mask_realsmith_MP3L7ND7qD |= (Tag2_realsmith_MP3L7ND7qD(/*const int:714:714:670:e*/EPOLLIN_realsmith_MP3L7ND7qD) | Tag3_realsmith_MP3L7ND7qD(/*const int:714:714:670:e*/EPOLLRDNORM_realsmith_MP3L7ND7qD));
/*aft_stmt:670*/
/*aft_stmt:670*/
    }
/*aft_stmt:701*/
    /*bef_stmt:712*/
return Tag4_realsmith_MP3L7ND7qD(/*int:714:714:712:e*/mask_realsmith_MP3L7ND7qD);
/*aft_stmt:712*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_UdVWBbqPnr(x) (x)
#define Tag2_realsmith_UdVWBbqPnr(x) (x)
#define Tag3_realsmith_UdVWBbqPnr(x) (x)
#define Tag4_realsmith_UdVWBbqPnr(x) (x)
#define Tag5_realsmith_UdVWBbqPnr(x) (x)
#define Tag6_realsmith_UdVWBbqPnr(x) (x)
#define Tag7_realsmith_UdVWBbqPnr(x) (x)
#define Tag8_realsmith_UdVWBbqPnr(x) (x)
#define Tag9_realsmith_UdVWBbqPnr(x) (x)
#define Tag10_realsmith_UdVWBbqPnr(x) (x)
#define Tag11_realsmith_UdVWBbqPnr(x) (x)
#define Tag12_realsmith_UdVWBbqPnr(x) (x)
#define Tag13_realsmith_UdVWBbqPnr(x) (x)
#define Tag14_realsmith_UdVWBbqPnr(x) (x)
#define Tag15_realsmith_UdVWBbqPnr(x) (x)
#define Tag16_realsmith_UdVWBbqPnr(x) (x)
#include "stdlib.h"
int realsmith_UdVWBbqPnr(int portid_realsmith_UdVWBbqPnr, int seq_realsmith_UdVWBbqPnr, int event_realsmith_UdVWBbqPnr, int flags_realsmith_UdVWBbqPnr, int netnsid_realsmith_UdVWBbqPnr,
                      int ifindex_realsmith_UdVWBbqPnr, int ifa_flags_realsmith_UdVWBbqPnr, int prefix_len_realsmith_UdVWBbqPnr,
                      unsigned long prefered_lft_realsmith_UdVWBbqPnr, unsigned long valid_lft_realsmith_UdVWBbqPnr,
                      long tstamp_realsmith_UdVWBbqPnr, int rt_priority_realsmith_UdVWBbqPnr,
                      unsigned long cstamp_realsmith_UdVWBbqPnr, unsigned long addr_realsmith_UdVWBbqPnr, unsigned long peer_addr_realsmith_UdVWBbqPnr) {
    unsigned long preferred_realsmith_UdVWBbqPnr, valid_realsmith_UdVWBbqPnr;
    long tval_realsmith_UdVWBbqPnr;
    /*bef_stmt:17421*/
if (Tag1_realsmith_UdVWBbqPnr(/*int:17805:17805:17421:e*/netnsid_realsmith_UdVWBbqPnr) >= 0) {
    }
/*aft_stmt:17421*/
    /*bef_stmt:17752*/
/*bef_stmt:17752*/
if (!((Tag2_realsmith_UdVWBbqPnr(/*int:17805:17805:17752:e*/ifa_flags_realsmith_UdVWBbqPnr) & 1) && (Tag3_realsmith_UdVWBbqPnr(/*unsigned long:17805:17805:17752:e*/prefered_lft_realsmith_UdVWBbqPnr) == 0xFFFFFFFF))) {
        /*bef_stmt:17488*/
preferred_realsmith_UdVWBbqPnr = Tag4_realsmith_UdVWBbqPnr(/*unsigned long:17805:17805:17488:e*/prefered_lft_realsmith_UdVWBbqPnr);
/*aft_stmt:17488*/
        /*bef_stmt:17503*/
valid_realsmith_UdVWBbqPnr = Tag5_realsmith_UdVWBbqPnr(/*unsigned long:17805:17805:17503:e*/valid_lft_realsmith_UdVWBbqPnr);
/*aft_stmt:17503*/
        /*bef_stmt:17709*/
if (Tag6_realsmith_UdVWBbqPnr(/*unsigned long:17805:17805:17709:e*/preferred_realsmith_UdVWBbqPnr) != 0xFFFFFFFF) {
            /*bef_stmt:17551*/
tval_realsmith_UdVWBbqPnr = (Tag7_realsmith_UdVWBbqPnr(/*long:17805:17805:17551:e*/tstamp_realsmith_UdVWBbqPnr) / 100);
/*aft_stmt:17551*/
            /*bef_stmt:17611*/
/*bef_stmt:17611*/
/*bef_stmt:17611*/
if (Tag8_realsmith_UdVWBbqPnr(/*unsigned long:17805:17805:17611:e*/preferred_realsmith_UdVWBbqPnr) > Tag9_realsmith_UdVWBbqPnr(/*long:17805:17805:17611:e*/tval_realsmith_UdVWBbqPnr))
                preferred_realsmith_UdVWBbqPnr -= Tag10_realsmith_UdVWBbqPnr(/*long:17805:17805:17611:e*/tval_realsmith_UdVWBbqPnr);
            else
                preferred_realsmith_UdVWBbqPnr = 0;
/*aft_stmt:17611*/
/*aft_stmt:17611*/
/*aft_stmt:17611*/
            /*bef_stmt:17700*/
if (Tag11_realsmith_UdVWBbqPnr(/*unsigned long:17805:17805:17700:e*/valid_realsmith_UdVWBbqPnr) != 0xFFFFFFFF) {
                /*bef_stmt:17691*/
/*bef_stmt:17691*/
/*bef_stmt:17691*/
if (Tag12_realsmith_UdVWBbqPnr(/*unsigned long:17805:17805:17691:e*/valid_realsmith_UdVWBbqPnr) > Tag13_realsmith_UdVWBbqPnr(/*long:17805:17805:17691:e*/tval_realsmith_UdVWBbqPnr))
                    valid_realsmith_UdVWBbqPnr -= Tag14_realsmith_UdVWBbqPnr(/*long:17805:17805:17691:e*/tval_realsmith_UdVWBbqPnr);
                else
                    valid_realsmith_UdVWBbqPnr = 0;
/*aft_stmt:17691*/
/*aft_stmt:17691*/
/*aft_stmt:17691*/
            }
/*aft_stmt:17700*/
        }
/*aft_stmt:17709*/
    } else {
        preferred_realsmith_UdVWBbqPnr = 0xFFFFFFFF;
        valid_realsmith_UdVWBbqPnr = 0xFFFFFFFF;
    }
/*aft_stmt:17752*/
/*aft_stmt:17752*/
    /*bef_stmt:17780*/
if (Tag15_realsmith_UdVWBbqPnr(/*unsigned long:17805:17805:17780:e*/peer_addr_realsmith_UdVWBbqPnr) != 0) {
    } else {
    }
/*aft_stmt:17780*/
    /*bef_stmt:17795*/
if (Tag16_realsmith_UdVWBbqPnr(/*int:17805:17805:17795:e*/rt_priority_realsmith_UdVWBbqPnr)) {
    }
/*aft_stmt:17795*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_9AueCTCvvS(x) (x)
#define Tag2_realsmith_9AueCTCvvS(x) (x)
#define Tag3_realsmith_9AueCTCvvS(x) (x)
#define Tag4_realsmith_9AueCTCvvS(x) (x)
#define Tag5_realsmith_9AueCTCvvS(x) (x)
#define Tag6_realsmith_9AueCTCvvS(x) (x)
#define Tag7_realsmith_9AueCTCvvS(x) (x)
#define Tag8_realsmith_9AueCTCvvS(x) (x)
#define Tag9_realsmith_9AueCTCvvS(x) (x)
#include "stdlib.h"
int realsmith_9AueCTCvvS(int dd_realsmith_9AueCTCvvS, int ctxt_realsmith_9AueCTCvvS) {
    int nr_realsmith_9AueCTCvvS;
    const int IS_RCVAVAIL_START_realsmith_9AueCTCvvS = 0;
    const int IRQ_RCVCTXT_realsmith_9AueCTCvvS = 0;
    unsigned long imask_realsmith_9AueCTCvvS;
    int ireg_realsmith_9AueCTCvvS;
    int msix_intr_realsmith_9AueCTCvvS;
    /*bef_stmt:17256*/
/*bef_stmt:17256*/
nr_realsmith_9AueCTCvvS = (Tag1_realsmith_9AueCTCvvS(/*int:17421:17421:17256:e*/dd_realsmith_9AueCTCvvS) + Tag2_realsmith_9AueCTCvvS(/*int:17421:17421:17256:e*/ctxt_realsmith_9AueCTCvvS)) % 256;
/*aft_stmt:17256*/
/*aft_stmt:17256*/
    /*bef_stmt:17284*/
/*bef_stmt:17284*/
if (Tag3_realsmith_9AueCTCvvS(/*int:17421:17421:17284:e*/nr_realsmith_9AueCTCvvS) < 0)
        return Tag4_realsmith_9AueCTCvvS(/*int:17421:17421:17284:e*/nr_realsmith_9AueCTCvvS);
/*aft_stmt:17284*/
/*aft_stmt:17284*/
    /*bef_stmt:17322*/
/*bef_stmt:17322*/
ireg_realsmith_9AueCTCvvS = (Tag5_realsmith_9AueCTCvvS(/*const int:17421:17421:17322:e*/IS_RCVAVAIL_START_realsmith_9AueCTCvvS) + Tag6_realsmith_9AueCTCvvS(/*int:17421:17421:17322:e*/ctxt_realsmith_9AueCTCvvS)) / 64;
/*aft_stmt:17322*/
/*aft_stmt:17322*/
    /*bef_stmt:17395*/
/*bef_stmt:17395*/
imask_realsmith_9AueCTCvvS = ((unsigned long)1) << ((Tag7_realsmith_9AueCTCvvS(/*const int:17421:17421:17395:e*/IS_RCVAVAIL_START_realsmith_9AueCTCvvS) + Tag8_realsmith_9AueCTCvvS(/*int:17421:17421:17395:e*/ctxt_realsmith_9AueCTCvvS)) % 64);
/*aft_stmt:17395*/
/*aft_stmt:17395*/
    /*bef_stmt:17411*/
msix_intr_realsmith_9AueCTCvvS = Tag9_realsmith_9AueCTCvvS(/*int:17421:17421:17411:e*/nr_realsmith_9AueCTCvvS);
/*aft_stmt:17411*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_rtvEPTYZXC(x) (x)
#define Tag2_realsmith_rtvEPTYZXC(x) (x)
#define Tag3_realsmith_rtvEPTYZXC(x) (x)
#include "stdlib.h"
int realsmith_rtvEPTYZXC(int enabled_realsmith_rtvEPTYZXC, unsigned int possible_framebuffer_bits_realsmith_rtvEPTYZXC, unsigned int frontbuffer_bit_realsmith_rtvEPTYZXC) {
    /*bef_stmt:17156*/
if (Tag1_realsmith_rtvEPTYZXC(/*int:17162:17162:17156:e*/enabled_realsmith_rtvEPTYZXC)) {
        /*bef_stmt:17136*/
return Tag2_realsmith_rtvEPTYZXC(/*unsigned int:17162:17162:17136:e*/frontbuffer_bit_realsmith_rtvEPTYZXC);
/*aft_stmt:17136*/
    } else {
        /*bef_stmt:17151*/
return Tag3_realsmith_rtvEPTYZXC(/*unsigned int:17162:17162:17151:e*/possible_framebuffer_bits_realsmith_rtvEPTYZXC);
/*aft_stmt:17151*/
    }
/*aft_stmt:17156*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ja9jxdiBxy(x) (x)
#define Tag2_realsmith_ja9jxdiBxy(x) (x)
#define Tag3_realsmith_ja9jxdiBxy(x) (x)
#define Tag4_realsmith_ja9jxdiBxy(x) (x)
#define Tag5_realsmith_ja9jxdiBxy(x) (x)
#define Tag6_realsmith_ja9jxdiBxy(x) (x)
#include "stdlib.h"
struct mtk_vcodec_dev_bewsoS {
    int v4l2_dev_realsmith_ja9jxdiBxy;
    int vfd_dec_realsmith_ja9jxdiBxy;
    int m2m_dev_dec_realsmith_ja9jxdiBxy;
    int decode_workqueue_realsmith_ja9jxdiBxy;
};
int realsmith_ja9jxdiBxy(int v4l2_dev_realsmith_ja9jxdiBxy, int vfd_dec_realsmith_ja9jxdiBxy, int m2m_dev_dec_realsmith_ja9jxdiBxy, int decode_workqueue_realsmith_ja9jxdiBxy) {
    struct mtk_vcodec_dev_bewsoS dev_realsmith_ja9jxdiBxy;
    /*bef_stmt:17253*/
dev_realsmith_ja9jxdiBxy.v4l2_dev_realsmith_ja9jxdiBxy = Tag1_realsmith_ja9jxdiBxy(/*int:17378:17378:17253:e*/v4l2_dev_realsmith_ja9jxdiBxy);
/*aft_stmt:17253*/
    /*bef_stmt:17288*/
dev_realsmith_ja9jxdiBxy.vfd_dec_realsmith_ja9jxdiBxy = Tag2_realsmith_ja9jxdiBxy(/*int:17378:17378:17288:e*/vfd_dec_realsmith_ja9jxdiBxy);
/*aft_stmt:17288*/
    /*bef_stmt:17309*/
dev_realsmith_ja9jxdiBxy.m2m_dev_dec_realsmith_ja9jxdiBxy = Tag3_realsmith_ja9jxdiBxy(/*int:17378:17378:17309:e*/m2m_dev_dec_realsmith_ja9jxdiBxy);
/*aft_stmt:17309*/
    /*bef_stmt:17330*/
dev_realsmith_ja9jxdiBxy.decode_workqueue_realsmith_ja9jxdiBxy = Tag4_realsmith_ja9jxdiBxy(/*int:17378:17378:17330:e*/decode_workqueue_realsmith_ja9jxdiBxy);
/*aft_stmt:17330*/
    /*bef_stmt:17349*/
if (Tag5_realsmith_ja9jxdiBxy(/*int:17378:17378:17349:e*/dev_realsmith_ja9jxdiBxy.m2m_dev_dec_realsmith_ja9jxdiBxy)) {
    }
/*aft_stmt:17349*/
    /*bef_stmt:17368*/
if (Tag6_realsmith_ja9jxdiBxy(/*int:17378:17378:17368:e*/dev_realsmith_ja9jxdiBxy.vfd_dec_realsmith_ja9jxdiBxy)) {
    }
/*aft_stmt:17368*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_w8UGHmXt9a(x) (x)
#define Tag2_realsmith_w8UGHmXt9a(x) (x)
#define Tag3_realsmith_w8UGHmXt9a(x) (x)
#define Tag4_realsmith_w8UGHmXt9a(x) (x)
#include "stdlib.h"
int realsmith_w8UGHmXt9a(int generate_symbols_realsmith_w8UGHmXt9a, int labels_realsmith_w8UGHmXt9a, int omit_if_unused_realsmith_w8UGHmXt9a, int is_referenced_realsmith_w8UGHmXt9a) {
    /*bef_stmt:17165*/
/*bef_stmt:17165*/
if (Tag1_realsmith_w8UGHmXt9a(/*int:17209:17209:17165:e*/generate_symbols_realsmith_w8UGHmXt9a) && Tag2_realsmith_w8UGHmXt9a(/*int:17209:17209:17165:e*/labels_realsmith_w8UGHmXt9a)) {
        return 0;
    }
/*aft_stmt:17165*/
/*aft_stmt:17165*/
    /*bef_stmt:17199*/
/*bef_stmt:17199*/
if (Tag3_realsmith_w8UGHmXt9a(/*int:17209:17209:17199:e*/omit_if_unused_realsmith_w8UGHmXt9a) && !Tag4_realsmith_w8UGHmXt9a(/*int:17209:17209:17199:e*/is_referenced_realsmith_w8UGHmXt9a)) {
        return 1;
    }
/*aft_stmt:17199*/
/*aft_stmt:17199*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_FiK4oqu3QU(x) (x)
#include "stdint.h"
int realsmith_FiK4oqu3QU(int val_realsmith_FiK4oqu3QU) {
    /*bef_stmt:2001*/
return ((Tag1_realsmith_FiK4oqu3QU(/*int:2003:2003:2001:e*/val_realsmith_FiK4oqu3QU)) << 5) & 0xFFFFFFFF;
/*aft_stmt:2001*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_LLorRVB3MC(x) (x)
#include "stdlib.h"
struct drm_i915_private_WA633k {
    void *platdev_realsmith_LLorRVB3MC;
};
int realsmith_LLorRVB3MC(int platdev_present_realsmith_LLorRVB3MC) {
    struct drm_i915_private_WA633k dev_priv_realsmith_LLorRVB3MC;
    /*bef_stmt:17185*/
dev_priv_realsmith_LLorRVB3MC.platdev_realsmith_LLorRVB3MC = Tag1_realsmith_LLorRVB3MC(/*int:17257:17257:17185:e*/platdev_present_realsmith_LLorRVB3MC) ? (void*)1 : ((void*)0);
/*aft_stmt:17185*/
    if (dev_priv_realsmith_LLorRVB3MC.platdev_realsmith_LLorRVB3MC != ((void*)0)) {
        return 1;
    } else {
        return 0;
    }
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_J5U0Zcwoot(x) (x)
#define Tag2_realsmith_J5U0Zcwoot(x) (x)
#define Tag3_realsmith_J5U0Zcwoot(x) (x)
#define Tag4_realsmith_J5U0Zcwoot(x) (x)
#include "stdlib.h"
int realsmith_J5U0Zcwoot(int supplies_size_realsmith_J5U0Zcwoot, int bias_level_realsmith_J5U0Zcwoot) {
    int ret_realsmith_J5U0Zcwoot = 0;
    /*bef_stmt:17130*/
switch (Tag1_realsmith_J5U0Zcwoot(/*int:17266:17266:17130:e*/bias_level_realsmith_J5U0Zcwoot)) {
    case 1:
        break;
    case 2:
        break;
    /*bef_stmt:17168*/
case 3:
        if (Tag2_realsmith_J5U0Zcwoot(/*int:17266:17266:17168:e*/bias_level_realsmith_J5U0Zcwoot) == 0) {
            ret_realsmith_J5U0Zcwoot = 0;
            /*bef_stmt:17227*/
if (Tag3_realsmith_J5U0Zcwoot(/*int:17266:17266:17227:e*/ret_realsmith_J5U0Zcwoot) != 0) {
                /*bef_stmt:17222*/
return Tag4_realsmith_J5U0Zcwoot(/*int:17266:17266:17222:e*/ret_realsmith_J5U0Zcwoot);
/*aft_stmt:17222*/
            }
/*aft_stmt:17227*/
        }
/*aft_stmt:17168*/
        break;
    case 0:
        break;
    }
/*aft_stmt:17130*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_jukaBsOk3H(x) (x)
#define Tag2_realsmith_jukaBsOk3H(x) (x)
#define Tag3_realsmith_jukaBsOk3H(x) (x)
#define Tag4_realsmith_jukaBsOk3H(x) (x)
#define Tag5_realsmith_jukaBsOk3H(x) (x)
#define Tag6_realsmith_jukaBsOk3H(x) (x)
#define Tag7_realsmith_jukaBsOk3H(x) (x)
#define Tag8_realsmith_jukaBsOk3H(x) (x)
#define Tag9_realsmith_jukaBsOk3H(x) (x)
#define Tag10_realsmith_jukaBsOk3H(x) (x)
#define Tag11_realsmith_jukaBsOk3H(x) (x)
#define Tag12_realsmith_jukaBsOk3H(x) (x)
#define Tag13_realsmith_jukaBsOk3H(x) (x)
#define Tag14_realsmith_jukaBsOk3H(x) (x)
#include "stdlib.h"
int realsmith_jukaBsOk3H(int cfreq_realsmith_jukaBsOk3H) {
    /*bef_stmt:17097*/
int fhz_realsmith_jukaBsOk3H = Tag1_realsmith_jukaBsOk3H(/*int:17549:17549:17097:e*/cfreq_realsmith_jukaBsOk3H);
/*aft_stmt:17097*/
    unsigned char ccf_realsmith_jukaBsOk3H;
    /*bef_stmt:17165*/
ccf_realsmith_jukaBsOk3H = ((Tag2_realsmith_jukaBsOk3H(/*int:17549:17549:17165:e*/fhz_realsmith_jukaBsOk3H) / 1000000) + 4) / 5;
/*aft_stmt:17165*/
    /*bef_stmt:17202*/
if (Tag3_realsmith_jukaBsOk3H(/*unsigned char:17549:17549:17202:e*/ccf_realsmith_jukaBsOk3H) == 1)
        ccf_realsmith_jukaBsOk3H = 2;
/*aft_stmt:17202*/
    /*bef_stmt:17296*/
/*bef_stmt:17296*/
/*bef_stmt:17296*/
if (Tag4_realsmith_jukaBsOk3H(/*int:17549:17549:17296:e*/fhz_realsmith_jukaBsOk3H) <= 5000000 || Tag5_realsmith_jukaBsOk3H(/*unsigned char:17549:17549:17296:e*/ccf_realsmith_jukaBsOk3H) < 1 || Tag6_realsmith_jukaBsOk3H(/*unsigned char:17549:17549:17296:e*/ccf_realsmith_jukaBsOk3H) > 8) {
        fhz_realsmith_jukaBsOk3H = 20000000;
        ccf_realsmith_jukaBsOk3H = 4;
    }
/*aft_stmt:17296*/
/*aft_stmt:17296*/
/*aft_stmt:17296*/
    /*bef_stmt:17358*/
/*bef_stmt:17358*/
int cfact_realsmith_jukaBsOk3H = (Tag7_realsmith_jukaBsOk3H(/*unsigned char:17549:17549:17358:e*/ccf_realsmith_jukaBsOk3H) == 8 ? 0 : Tag8_realsmith_jukaBsOk3H(/*unsigned char:17549:17549:17358:e*/ccf_realsmith_jukaBsOk3H));
/*aft_stmt:17358*/
/*aft_stmt:17358*/
    /*bef_stmt:17400*/
int ccycle_realsmith_jukaBsOk3H = ((Tag9_realsmith_jukaBsOk3H(/*int:17549:17549:17400:e*/fhz_realsmith_jukaBsOk3H)) / 1000);
/*aft_stmt:17400*/
    /*bef_stmt:17462*/
/*bef_stmt:17462*/
int ctick_realsmith_jukaBsOk3H = ((Tag10_realsmith_jukaBsOk3H(/*unsigned char:17549:17549:17462:e*/ccf_realsmith_jukaBsOk3H)) * (Tag11_realsmith_jukaBsOk3H(/*int:17549:17549:17462:e*/ccycle_realsmith_jukaBsOk3H)) / 1000);
/*aft_stmt:17462*/
/*aft_stmt:17462*/
    /*bef_stmt:17514*/
/*bef_stmt:17514*/
int neg_defp_realsmith_jukaBsOk3H = ((Tag12_realsmith_jukaBsOk3H(/*int:17549:17549:17514:e*/fhz_realsmith_jukaBsOk3H)) / (Tag13_realsmith_jukaBsOk3H(/*unsigned char:17549:17549:17514:e*/ccf_realsmith_jukaBsOk3H)));
/*aft_stmt:17514*/
/*aft_stmt:17514*/
    int sync_defp_realsmith_jukaBsOk3H = 0;
    /*bef_stmt:17547*/
return Tag14_realsmith_jukaBsOk3H(/*int:17549:17549:17547:e*/cfact_realsmith_jukaBsOk3H);
/*aft_stmt:17547*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_1pLk5eEvbj(x) (x)
#define Tag2_realsmith_1pLk5eEvbj(x) (x)
#define Tag3_realsmith_1pLk5eEvbj(x) (x)
#define Tag4_realsmith_1pLk5eEvbj(x) (x)
#include "limits.h"
int realsmith_1pLk5eEvbj(int initial_refcount_realsmith_1pLk5eEvbj) {
    int over_realsmith_1pLk5eEvbj = 2147483647 - 1;
    /*bef_stmt:645*/
/*bef_stmt:645*/
if (Tag1_realsmith_1pLk5eEvbj(/*int:726:726:645:e*/initial_refcount_realsmith_1pLk5eEvbj) < 0 || Tag2_realsmith_1pLk5eEvbj(/*int:726:726:645:e*/initial_refcount_realsmith_1pLk5eEvbj) > 2147483647) {
        return -1;
    }
/*aft_stmt:645*/
/*aft_stmt:645*/
    /*bef_stmt:660*/
over_realsmith_1pLk5eEvbj = Tag3_realsmith_1pLk5eEvbj(/*int:726:726:660:e*/initial_refcount_realsmith_1pLk5eEvbj);
/*aft_stmt:660*/
    over_realsmith_1pLk5eEvbj--;
    over_realsmith_1pLk5eEvbj++;
    over_realsmith_1pLk5eEvbj++;
    over_realsmith_1pLk5eEvbj++;
    /*bef_stmt:716*/
if (Tag4_realsmith_1pLk5eEvbj(/*int:726:726:716:e*/over_realsmith_1pLk5eEvbj) < 0) {
        return 1;
    }
/*aft_stmt:716*/
    return 0;
}



#include "stdlib.h"
int realsmith_KIz5pxMhO2(int fw_return_code_realsmith_KIz5pxMhO2, int ep_state_realsmith_KIz5pxMhO2, int *ep_list_entry_realsmith_KIz5pxMhO2, int *event_cb_context_realsmith_KIz5pxMhO2) {
    int params_status_realsmith_KIz5pxMhO2;
    if (fw_return_code_realsmith_KIz5pxMhO2 == 0) {
        params_status_realsmith_KIz5pxMhO2 = 0;
    } else {
        params_status_realsmith_KIz5pxMhO2 = -1;
    }
    ep_state_realsmith_KIz5pxMhO2 = 1;
    *ep_list_entry_realsmith_KIz5pxMhO2 = 0;
    return params_status_realsmith_KIz5pxMhO2;
}
int realsmith_proxy_7HHj4BVHYz(int p_0_oufyk7VQrb, int p_1_zCQp8eDADa, int p_2_lZqZUs1dVm, int p_3_az7244QHhe) {
int proxy_pqtOgox4np[20] = { p_2_lZqZUs1dVm, 73, p_2_lZqZUs1dVm, 58, p_2_lZqZUs1dVm, 100, p_2_lZqZUs1dVm, 63, 17, p_2_lZqZUs1dVm, 2, 100, p_2_lZqZUs1dVm, 9, p_2_lZqZUs1dVm, 56, 34, p_2_lZqZUs1dVm, p_2_lZqZUs1dVm, p_2_lZqZUs1dVm };
int proxy_LQpiO8bA3H[16] = { p_3_az7244QHhe, p_3_az7244QHhe, 58, 22, 40, 76, p_3_az7244QHhe, p_3_az7244QHhe, p_3_az7244QHhe, 52, 34, 32, 0, 21, 32, p_3_az7244QHhe };
int proxy_ret_qyHNnMQ8hp = realsmith_KIz5pxMhO2(p_0_oufyk7VQrb, p_1_zCQp8eDADa, proxy_pqtOgox4np, proxy_LQpiO8bA3H);
return proxy_ret_qyHNnMQ8hp;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_p9gRtdwfQA(x) (x)
#define Tag2_realsmith_p9gRtdwfQA(x) (x)
#define Tag3_realsmith_p9gRtdwfQA(x) (x)
#define Tag4_realsmith_p9gRtdwfQA(x) (x)
#define Tag5_realsmith_p9gRtdwfQA(x) (x)
#define Tag6_realsmith_p9gRtdwfQA(x) (x)
#define Tag7_realsmith_p9gRtdwfQA(x) (x)
#define Tag8_realsmith_p9gRtdwfQA(x) (x)
#include "stdlib.h"
struct pyra_settings_KTbPM7 {
    int startup_profile_realsmith_p9gRtdwfQA;
};
int realsmith_p9gRtdwfQA(int off_realsmith_p9gRtdwfQA, int count_realsmith_p9gRtdwfQA, int startup_profile_realsmith_p9gRtdwfQA) {
    struct pyra_settings_KTbPM7 settings_realsmith_p9gRtdwfQA;
    /*bef_stmt:17197*/
settings_realsmith_p9gRtdwfQA.startup_profile_realsmith_p9gRtdwfQA = /*TAG1:STA*/((int)(realsmith_0qEcPErLXm((int)(startup_profile_realsmith_p9gRtdwfQA)+(-14), (int)(startup_profile_realsmith_p9gRtdwfQA)+(50), (int)(startup_profile_realsmith_p9gRtdwfQA)+(-19))+(int)(startup_profile_realsmith_p9gRtdwfQA)-(35))+startup_profile_realsmith_p9gRtdwfQA)/*TAG1:END:startup_profile_realsmith_p9gRtdwfQA*/;
/*aft_stmt:17197*/
    /*bef_stmt:17255*/
/*bef_stmt:17255*/
if (/*TAG2:STA*/((int)(realsmith_proxy_1gYzQNn00H((int)(off_realsmith_p9gRtdwfQA)+(-23), (int)(off_realsmith_p9gRtdwfQA)+(46), (int)(off_realsmith_p9gRtdwfQA)+(18), (unsigned int)(off_realsmith_p9gRtdwfQA)+(-12))+(int)(off_realsmith_p9gRtdwfQA)-(112))+off_realsmith_p9gRtdwfQA)/*TAG2:END:off_realsmith_p9gRtdwfQA*/ != 0 || /*TAG3:STA*/((int)(realsmith_proxy_E8ocdS0ewS((int)(count_realsmith_p9gRtdwfQA)+(-45), (int)(count_realsmith_p9gRtdwfQA)+(-60), (int)(count_realsmith_p9gRtdwfQA)+(-36), (int)(count_realsmith_p9gRtdwfQA)+(-74), (int)(count_realsmith_p9gRtdwfQA)+(-14))+(int)(count_realsmith_p9gRtdwfQA)-(107))+count_realsmith_p9gRtdwfQA)/*TAG3:END:count_realsmith_p9gRtdwfQA*/ != 8)
        return -1;
/*aft_stmt:17255*/
/*aft_stmt:17255*/
    /*bef_stmt:17314*/
/*bef_stmt:17314*/
if (Tag4_realsmith_p9gRtdwfQA(/*int:17408:17408:17314:e*/settings_realsmith_p9gRtdwfQA.startup_profile_realsmith_p9gRtdwfQA) < 0 || Tag5_realsmith_p9gRtdwfQA(/*int:17408:17408:17314:e*/settings_realsmith_p9gRtdwfQA.startup_profile_realsmith_p9gRtdwfQA) >= 4)
        return -1;
/*aft_stmt:17314*/
/*aft_stmt:17314*/
    int retval_realsmith_p9gRtdwfQA = 0;
    /*bef_stmt:17357*/
/*bef_stmt:17357*/
if (Tag6_realsmith_p9gRtdwfQA(/*int:17408:17408:17357:e*/retval_realsmith_p9gRtdwfQA))
        return Tag7_realsmith_p9gRtdwfQA(/*int:17408:17408:17357:e*/retval_realsmith_p9gRtdwfQA);
/*aft_stmt:17357*/
/*aft_stmt:17357*/
    /*bef_stmt:17398*/
int roccat_report_value_realsmith_p9gRtdwfQA = Tag8_realsmith_p9gRtdwfQA(/*int:17408:17408:17398:e*/settings_realsmith_p9gRtdwfQA.startup_profile_realsmith_p9gRtdwfQA) + 1;
/*aft_stmt:17398*/
    return 8;
}



#include "stdlib.h"
int realsmith_7SP94DcDvO(int flags_realsmith_7SP94DcDvO, int *work_realsmith_7SP94DcDvO) {
    const int BE_FLAGS_WORKER_SCHEDULED_realsmith_7SP94DcDvO = 1;
    const int msecs_to_jiffies_realsmith_7SP94DcDvO = 1000;
    flags_realsmith_7SP94DcDvO |= BE_FLAGS_WORKER_SCHEDULED_realsmith_7SP94DcDvO;
    return flags_realsmith_7SP94DcDvO;
}
int realsmith_proxy_rShYctPT3U(int p_0_jhuVJ7wIb4, int p_1_UfTbWtVgFW) {
int proxy_cZSiW6Fxl8[13] = { 32, 67, p_1_UfTbWtVgFW, p_1_UfTbWtVgFW, 32, 23, p_1_UfTbWtVgFW, p_1_UfTbWtVgFW, 69, p_1_UfTbWtVgFW, p_1_UfTbWtVgFW, 53, p_1_UfTbWtVgFW };
int proxy_ret_xmclGca040 = realsmith_7SP94DcDvO(p_0_jhuVJ7wIb4, proxy_cZSiW6Fxl8);
return proxy_ret_xmclGca040;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_gE6IFq4bpQ(x) (x)
#define Tag2_realsmith_proxy_gE6IFq4bpQ(x) (x)
#define Tag3_realsmith_proxy_gE6IFq4bpQ(x) (x)
#define Tag4_realsmith_proxy_gE6IFq4bpQ(x) (x)
#define Tag5_realsmith_proxy_gE6IFq4bpQ(x) (x)
#include "stdlib.h"
int realsmith_hED4HrePaW(int id_realsmith_hED4HrePaW, const char *name_realsmith_hED4HrePaW) {
    static const char *hup_realsmith_hED4HrePaW[256] = {0};
    /*bef_stmt:17189*/
if (Tag1_realsmith_proxy_gE6IFq4bpQ(/*int:17268:17268:17189:e*/id_realsmith_hED4HrePaW) >= 256)
        return -2;
/*aft_stmt:17189*/
    /*bef_stmt:17229*/
if (hup_realsmith_hED4HrePaW[Tag2_realsmith_proxy_gE6IFq4bpQ(/*int:17268:17268:17229:e*/id_realsmith_hED4HrePaW)])
        return -1;
/*aft_stmt:17229*/
    /*bef_stmt:17258*/
hup_realsmith_hED4HrePaW[Tag3_realsmith_proxy_gE6IFq4bpQ(/*int:17268:17268:17258:e*/id_realsmith_hED4HrePaW)] = name_realsmith_hED4HrePaW;
/*aft_stmt:17258*/
    return 0;
}
int realsmith_proxy_gE6IFq4bpQ(int p_0_W0fRDkOSua, char p_1_lEuGl5mpEB) {
/*bef_stmt:17398*/
int proxy_ret_rowAuR5q6s = realsmith_hED4HrePaW(Tag4_realsmith_proxy_gE6IFq4bpQ(/*int:17410:17410:17398:e*/p_0_W0fRDkOSua), &(p_1_lEuGl5mpEB));
/*aft_stmt:17398*/
/*bef_stmt:17408*/
return Tag5_realsmith_proxy_gE6IFq4bpQ(/*int:17410:17410:17408:e*/proxy_ret_rowAuR5q6s);
/*aft_stmt:17408*/
}




#include "stdlib.h"
int realsmith_hOfES2xSgS(int desc_realsmith_hOfES2xSgS, int dst_realsmith_hOfES2xSgS, int src_realsmith_hOfES2xSgS, unsigned int nbytes_realsmith_hOfES2xSgS) {
    unsigned int walk_nbytes_realsmith_hOfES2xSgS = nbytes_realsmith_hOfES2xSgS;
    int result_realsmith_hOfES2xSgS = 0;
    if (dst_realsmith_hOfES2xSgS == 0 || src_realsmith_hOfES2xSgS == 0 || walk_nbytes_realsmith_hOfES2xSgS == 0) {
        return -1;
    }
    for (unsigned int i_realsmith_hOfES2xSgS = 0; i_realsmith_hOfES2xSgS < walk_nbytes_realsmith_hOfES2xSgS; i_realsmith_hOfES2xSgS++) {
        result_realsmith_hOfES2xSgS += (desc_realsmith_hOfES2xSgS + dst_realsmith_hOfES2xSgS + src_realsmith_hOfES2xSgS + i_realsmith_hOfES2xSgS);
    }
    return result_realsmith_hOfES2xSgS;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_QeS36vzsuH(x) (x)
#define Tag2_realsmith_QeS36vzsuH(x) (x)
#define Tag3_realsmith_QeS36vzsuH(x) (x)
#define Tag4_realsmith_QeS36vzsuH(x) (x)
#define Tag5_realsmith_QeS36vzsuH(x) (x)
#define Tag6_realsmith_QeS36vzsuH(x) (x)
#define Tag7_realsmith_QeS36vzsuH(x) (x)
#define Tag8_realsmith_QeS36vzsuH(x) (x)
#define Tag9_realsmith_QeS36vzsuH(x) (x)
#define Tag10_realsmith_QeS36vzsuH(x) (x)
#define Tag11_realsmith_QeS36vzsuH(x) (x)
#define Tag12_realsmith_QeS36vzsuH(x) (x)
#define Tag13_realsmith_QeS36vzsuH(x) (x)
#define Tag14_realsmith_QeS36vzsuH(x) (x)
#define Tag15_realsmith_QeS36vzsuH(x) (x)
#define Tag16_realsmith_QeS36vzsuH(x) (x)
#define Tag17_realsmith_QeS36vzsuH(x) (x)
#define Tag18_realsmith_QeS36vzsuH(x) (x)
#define Tag19_realsmith_QeS36vzsuH(x) (x)
#define Tag20_realsmith_QeS36vzsuH(x) (x)
#define Tag21_realsmith_QeS36vzsuH(x) (x)
#define Tag22_realsmith_QeS36vzsuH(x) (x)
#define Tag23_realsmith_QeS36vzsuH(x) (x)
#define Tag24_realsmith_QeS36vzsuH(x) (x)
#define Tag25_realsmith_QeS36vzsuH(x) (x)
#define Tag26_realsmith_QeS36vzsuH(x) (x)
#define Tag27_realsmith_QeS36vzsuH(x) (x)
#define Tag28_realsmith_QeS36vzsuH(x) (x)
#define Tag29_realsmith_QeS36vzsuH(x) (x)
#define Tag30_realsmith_QeS36vzsuH(x) (x)
#define Tag31_realsmith_QeS36vzsuH(x) (x)
#define Tag32_realsmith_QeS36vzsuH(x) (x)
#include "stdlib.h"
int realsmith_QeS36vzsuH(unsigned long address_realsmith_QeS36vzsuH, unsigned int sectors_realsmith_QeS36vzsuH, unsigned long blockshift_realsmith_QeS36vzsuH, unsigned long blockmask_realsmith_QeS36vzsuH, unsigned int capacity_realsmith_QeS36vzsuH, unsigned int pageshift_realsmith_QeS36vzsuH, unsigned int blocksize_realsmith_QeS36vzsuH, unsigned int pagesize_realsmith_QeS36vzsuH) {
    unsigned int lba_realsmith_QeS36vzsuH, maxlba_realsmith_QeS36vzsuH, page_realsmith_QeS36vzsuH, pages_realsmith_QeS36vzsuH;
    unsigned int pagelen_realsmith_QeS36vzsuH, blocklen_realsmith_QeS36vzsuH;
    unsigned char *blockbuffer_realsmith_QeS36vzsuH;
    unsigned char *buffer_realsmith_QeS36vzsuH;
    unsigned int len_realsmith_QeS36vzsuH, offset_realsmith_QeS36vzsuH;
    int result_realsmith_QeS36vzsuH;
    /*bef_stmt:17449*/
/*bef_stmt:17449*/
lba_realsmith_QeS36vzsuH = Tag1_realsmith_QeS36vzsuH(/*unsigned long:18208:18208:17449:e*/address_realsmith_QeS36vzsuH) >> Tag2_realsmith_QeS36vzsuH(/*unsigned long:18208:18208:17449:e*/blockshift_realsmith_QeS36vzsuH);
/*aft_stmt:17449*/
/*aft_stmt:17449*/
    /*bef_stmt:17482*/
/*bef_stmt:17482*/
page_realsmith_QeS36vzsuH = (Tag3_realsmith_QeS36vzsuH(/*unsigned long:18208:18208:17482:e*/address_realsmith_QeS36vzsuH) & Tag4_realsmith_QeS36vzsuH(/*unsigned long:18208:18208:17482:e*/blockmask_realsmith_QeS36vzsuH));
/*aft_stmt:17482*/
/*aft_stmt:17482*/
    /*bef_stmt:17526*/
/*bef_stmt:17526*/
/*bef_stmt:17526*/
maxlba_realsmith_QeS36vzsuH = Tag5_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:17526:e*/capacity_realsmith_QeS36vzsuH) >> (Tag6_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:17526:e*/pageshift_realsmith_QeS36vzsuH) + Tag7_realsmith_QeS36vzsuH(/*unsigned long:18208:18208:17526:e*/blockshift_realsmith_QeS36vzsuH));
/*aft_stmt:17526*/
/*aft_stmt:17526*/
/*aft_stmt:17526*/
    /*bef_stmt:17557*/
/*bef_stmt:17557*/
if (Tag8_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:17557:e*/lba_realsmith_QeS36vzsuH) >= Tag9_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:17557:e*/maxlba_realsmith_QeS36vzsuH))
        return -1;
/*aft_stmt:17557*/
/*aft_stmt:17557*/
    /*bef_stmt:17607*/
pagelen_realsmith_QeS36vzsuH = (1 << Tag10_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:17607:e*/pageshift_realsmith_QeS36vzsuH)) + (1 << 8);
/*aft_stmt:17607*/
    /*bef_stmt:17637*/
/*bef_stmt:17637*/
blocklen_realsmith_QeS36vzsuH = (Tag11_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:17637:e*/pagelen_realsmith_QeS36vzsuH) << Tag12_realsmith_QeS36vzsuH(/*unsigned long:18208:18208:17637:e*/blockshift_realsmith_QeS36vzsuH));
/*aft_stmt:17637*/
/*aft_stmt:17637*/
    /*bef_stmt:17691*/
blockbuffer_realsmith_QeS36vzsuH = (unsigned char *)(malloc(Tag13_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:17691:e*/blocklen_realsmith_QeS36vzsuH)));
/*aft_stmt:17691*/
    if (!blockbuffer_realsmith_QeS36vzsuH)
        return -2;
    /*bef_stmt:17775*/
/*bef_stmt:17775*/
/*bef_stmt:17775*/
/*bef_stmt:17775*/
/*bef_stmt:17775*/
len_realsmith_QeS36vzsuH = (Tag14_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:17775:e*/sectors_realsmith_QeS36vzsuH) < Tag15_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:17775:e*/blocksize_realsmith_QeS36vzsuH) ? Tag16_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:17775:e*/sectors_realsmith_QeS36vzsuH) : Tag17_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:17775:e*/blocksize_realsmith_QeS36vzsuH)) * Tag18_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:17775:e*/pagesize_realsmith_QeS36vzsuH);
/*aft_stmt:17775*/
/*aft_stmt:17775*/
/*aft_stmt:17775*/
/*aft_stmt:17775*/
/*aft_stmt:17775*/
    /*bef_stmt:17824*/
buffer_realsmith_QeS36vzsuH = (unsigned char *)(malloc(Tag19_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:17824:e*/len_realsmith_QeS36vzsuH)));
/*aft_stmt:17824*/
    if (!buffer_realsmith_QeS36vzsuH) {
        (free(blockbuffer_realsmith_QeS36vzsuH));
        return -2;
    }
    result_realsmith_QeS36vzsuH = 0;
    offset_realsmith_QeS36vzsuH = 0;
    /*bef_stmt:18137*/
while (Tag20_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:18137:e*/sectors_realsmith_QeS36vzsuH) > 0) {
        /*bef_stmt:18014*/
/*bef_stmt:18014*/
/*bef_stmt:18014*/
/*bef_stmt:18014*/
/*bef_stmt:18014*/
/*bef_stmt:18014*/
pages_realsmith_QeS36vzsuH = (Tag21_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:18014:e*/sectors_realsmith_QeS36vzsuH) < (Tag22_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:18014:e*/blocksize_realsmith_QeS36vzsuH) - Tag23_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:18014:e*/page_realsmith_QeS36vzsuH)) ? Tag24_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:18014:e*/sectors_realsmith_QeS36vzsuH) : (Tag25_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:18014:e*/blocksize_realsmith_QeS36vzsuH) - Tag26_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:18014:e*/page_realsmith_QeS36vzsuH)));
/*aft_stmt:18014*/
/*aft_stmt:18014*/
/*aft_stmt:18014*/
/*aft_stmt:18014*/
/*aft_stmt:18014*/
/*aft_stmt:18014*/
        /*bef_stmt:18044*/
/*bef_stmt:18044*/
len_realsmith_QeS36vzsuH = (Tag27_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:18044:e*/pages_realsmith_QeS36vzsuH) << Tag28_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:18044:e*/pageshift_realsmith_QeS36vzsuH));
/*aft_stmt:18044*/
/*aft_stmt:18044*/
        /*bef_stmt:18086*/
/*bef_stmt:18086*/
if (Tag29_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:18086:e*/lba_realsmith_QeS36vzsuH) >= Tag30_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:18086:e*/maxlba_realsmith_QeS36vzsuH)) {
            result_realsmith_QeS36vzsuH = -1;
            break;
        }
/*aft_stmt:18086*/
/*aft_stmt:18086*/
        page_realsmith_QeS36vzsuH = 0;
        lba_realsmith_QeS36vzsuH++;
        /*bef_stmt:18123*/
sectors_realsmith_QeS36vzsuH -= Tag31_realsmith_QeS36vzsuH(/*unsigned int:18208:18208:18123:e*/pages_realsmith_QeS36vzsuH);
/*aft_stmt:18123*/
    }
/*aft_stmt:18137*/
    (free(buffer_realsmith_QeS36vzsuH));
    (free(blockbuffer_realsmith_QeS36vzsuH));
    /*bef_stmt:18206*/
return Tag32_realsmith_QeS36vzsuH(/*int:18208:18208:18206:e*/result_realsmith_QeS36vzsuH);
/*aft_stmt:18206*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_hSN8HRQ4VW(x) (x)
#define Tag2_realsmith_hSN8HRQ4VW(x) (x)
#include "stdlib.h"
int realsmith_hSN8HRQ4VW(int pio_mode_realsmith_hSN8HRQ4VW, int port_base_realsmith_hSN8HRQ4VW) {
    /*bef_stmt:17131*/
int speed_realsmith_hSN8HRQ4VW = Tag1_realsmith_hSN8HRQ4VW(/*int:17285:17285:17131:e*/pio_mode_realsmith_hSN8HRQ4VW) - 0;
/*aft_stmt:17131*/
    static const unsigned char actrec_realsmith_hSN8HRQ4VW[] = { 0x00, 0x67, 0x44, 0x33, 0x31 };
    /*bef_stmt:17283*/
return actrec_realsmith_hSN8HRQ4VW[Tag2_realsmith_hSN8HRQ4VW(/*int:17285:17285:17283:e*/speed_realsmith_hSN8HRQ4VW)];
/*aft_stmt:17283*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_pcMuh4serU(x) (x)
#define Tag2_realsmith_pcMuh4serU(x) (x)
#define Tag3_realsmith_pcMuh4serU(x) (x)
#include "stdint.h"
int realsmith_pcMuh4serU(int b2_rtm_ini_realsmith_pcMuh4serU, int b2_rtm_ctrl_realsmith_pcMuh4serU, int tim_start_realsmith_pcMuh4serU) {
    int timer_realsmith_pcMuh4serU = 0;
    int irq_enabled_realsmith_pcMuh4serU = 0;
    timer_realsmith_pcMuh4serU = 0;
    /*bef_stmt:2071*/
irq_enabled_realsmith_pcMuh4serU = Tag1_realsmith_pcMuh4serU(/*int:2095:2095:2071:e*/tim_start_realsmith_pcMuh4serU);
/*aft_stmt:2071*/
    /*bef_stmt:2093*/
/*bef_stmt:2093*/
return Tag2_realsmith_pcMuh4serU(/*int:2095:2095:2093:e*/timer_realsmith_pcMuh4serU) + Tag3_realsmith_pcMuh4serU(/*int:2095:2095:2093:e*/irq_enabled_realsmith_pcMuh4serU);
/*aft_stmt:2093*/
/*aft_stmt:2093*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_QqzGVKFXg4(x) (x)
#define Tag2_realsmith_QqzGVKFXg4(x) (x)
#define Tag3_realsmith_QqzGVKFXg4(x) (x)
#define Tag4_realsmith_QqzGVKFXg4(x) (x)
#define Tag5_realsmith_QqzGVKFXg4(x) (x)
#define Tag6_realsmith_QqzGVKFXg4(x) (x)
#define Tag7_realsmith_QqzGVKFXg4(x) (x)
#define Tag8_realsmith_QqzGVKFXg4(x) (x)
#include "stdlib.h"
int realsmith_QqzGVKFXg4(int mdev_cap_realsmith_QqzGVKFXg4, int dcbx_mode_realsmith_QqzGVKFXg4) {
    const int MLX5E_DCBX_PARAM_VER_OPER_HOST_realsmith_QqzGVKFXg4 = 1;
    int err_realsmith_QqzGVKFXg4 = 0;
    /*bef_stmt:17162*/
if (!/*TAG1:STA*/((int)(realsmith_w8UGHmXt9a((int)(mdev_cap_realsmith_QqzGVKFXg4)+(-19), (int)(mdev_cap_realsmith_QqzGVKFXg4)+(30), (int)(mdev_cap_realsmith_QqzGVKFXg4)+(0), (int)(mdev_cap_realsmith_QqzGVKFXg4)+(-42))+(int)(mdev_cap_realsmith_QqzGVKFXg4)-(55))+mdev_cap_realsmith_QqzGVKFXg4)/*TAG1:END:mdev_cap_realsmith_QqzGVKFXg4*/)
        return 0;
/*aft_stmt:17162*/
    /*bef_stmt:17201*/
/*bef_stmt:17201*/
if (/*TAG2:STA*/((int)(realsmith_FiK4oqu3QU((int)(dcbx_mode_realsmith_QqzGVKFXg4)+(43))+(int)(dcbx_mode_realsmith_QqzGVKFXg4)-(2069))+dcbx_mode_realsmith_QqzGVKFXg4)/*TAG2:END:dcbx_mode_realsmith_QqzGVKFXg4*/ == /*TAG3:STA*/((int)(realsmith_LLorRVB3MC((int)(MLX5E_DCBX_PARAM_VER_OPER_HOST_realsmith_QqzGVKFXg4)+(92))+(int)(MLX5E_DCBX_PARAM_VER_OPER_HOST_realsmith_QqzGVKFXg4)-(2))+MLX5E_DCBX_PARAM_VER_OPER_HOST_realsmith_QqzGVKFXg4)/*TAG3:END:MLX5E_DCBX_PARAM_VER_OPER_HOST_realsmith_QqzGVKFXg4*/)
        return 0;
/*aft_stmt:17201*/
/*aft_stmt:17201*/
    /*bef_stmt:17248*/
/*bef_stmt:17248*/
err_realsmith_QqzGVKFXg4 = (/*TAG4:STA*/((int)(realsmith_jukaBsOk3H((int)(dcbx_mode_realsmith_QqzGVKFXg4)+(-19))+(int)(dcbx_mode_realsmith_QqzGVKFXg4)-(25))+dcbx_mode_realsmith_QqzGVKFXg4)/*TAG4:END:dcbx_mode_realsmith_QqzGVKFXg4*/ != /*TAG5:STA*/((int)(realsmith_ja9jxdiBxy((int)(MLX5E_DCBX_PARAM_VER_OPER_HOST_realsmith_QqzGVKFXg4)+(34), (int)(MLX5E_DCBX_PARAM_VER_OPER_HOST_realsmith_QqzGVKFXg4)+(47), (int)(MLX5E_DCBX_PARAM_VER_OPER_HOST_realsmith_QqzGVKFXg4)+(78), (int)(MLX5E_DCBX_PARAM_VER_OPER_HOST_realsmith_QqzGVKFXg4)+(75))+(int)(MLX5E_DCBX_PARAM_VER_OPER_HOST_realsmith_QqzGVKFXg4)-(1))+MLX5E_DCBX_PARAM_VER_OPER_HOST_realsmith_QqzGVKFXg4)/*TAG5:END:MLX5E_DCBX_PARAM_VER_OPER_HOST_realsmith_QqzGVKFXg4*/) ? 0 : -1;
/*aft_stmt:17248*/
/*aft_stmt:17248*/
    /*bef_stmt:17268*/
/*bef_stmt:17268*/
if (/*TAG6:STA*/((int)(realsmith_1pLk5eEvbj((int)(err_realsmith_QqzGVKFXg4)+(76))+(int)(err_realsmith_QqzGVKFXg4)-(0))+err_realsmith_QqzGVKFXg4)/*TAG6:END:err_realsmith_QqzGVKFXg4*/)
        return /*TAG7:STA*/((int)(realsmith_proxy_7HHj4BVHYz((int)(err_realsmith_QqzGVKFXg4)+(29), (int)(err_realsmith_QqzGVKFXg4)+(40), (int)(err_realsmith_QqzGVKFXg4)+(29), (int)(err_realsmith_QqzGVKFXg4)+(14))+(int)(err_realsmith_QqzGVKFXg4)-(-1))+err_realsmith_QqzGVKFXg4)/*TAG7:END:err_realsmith_QqzGVKFXg4*/;
/*aft_stmt:17268*/
/*aft_stmt:17268*/
    /*bef_stmt:17283*/
dcbx_mode_realsmith_QqzGVKFXg4 = /*TAG8:STA*/((int)(realsmith_J5U0Zcwoot((int)(mdev_cap_realsmith_QqzGVKFXg4)+(-2), (int)(MLX5E_DCBX_PARAM_VER_OPER_HOST_realsmith_QqzGVKFXg4)+(74))+(int)(MLX5E_DCBX_PARAM_VER_OPER_HOST_realsmith_QqzGVKFXg4)+(int)(mdev_cap_realsmith_QqzGVKFXg4)+(int)(err_realsmith_QqzGVKFXg4)-(56))+MLX5E_DCBX_PARAM_VER_OPER_HOST_realsmith_QqzGVKFXg4)/*TAG8:END:MLX5E_DCBX_PARAM_VER_OPER_HOST_realsmith_QqzGVKFXg4*/;
/*aft_stmt:17283*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_tCh4o3umbF(x) (x)
#include "stdint.h"
int realsmith_tCh4o3umbF(int control_realsmith_tCh4o3umbF) {
    control_realsmith_tCh4o3umbF |= 0x01;
    /*bef_stmt:1985*/
return Tag1_realsmith_tCh4o3umbF(/*int:1987:1987:1985:e*/control_realsmith_tCh4o3umbF);
/*aft_stmt:1985*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_8Sp4VlIyKL(x) (x)
#define Tag2_realsmith_8Sp4VlIyKL(x) (x)
#define Tag3_realsmith_8Sp4VlIyKL(x) (x)
#define Tag4_realsmith_8Sp4VlIyKL(x) (x)
#include "stdlib.h"
int realsmith_8Sp4VlIyKL(int clock_frequency_realsmith_8Sp4VlIyKL) {
    int clk_freq_realsmith_8Sp4VlIyKL;
    int sm_realsmith_8Sp4VlIyKL;
    int tft_realsmith_8Sp4VlIyKL;
    int rft_realsmith_8Sp4VlIyKL;
    int timeout_realsmith_8Sp4VlIyKL;
    /*bef_stmt:17217*/
if (Tag1_realsmith_8Sp4VlIyKL(/*int:17319:17319:17217:e*/clock_frequency_realsmith_8Sp4VlIyKL) <= 0) {
        clk_freq_realsmith_8Sp4VlIyKL = 100000;
    } else {
        /*bef_stmt:17210*/
clk_freq_realsmith_8Sp4VlIyKL = Tag2_realsmith_8Sp4VlIyKL(/*int:17319:17319:17210:e*/clock_frequency_realsmith_8Sp4VlIyKL);
/*aft_stmt:17210*/
    }
/*aft_stmt:17217*/
    /*bef_stmt:17268*/
if (Tag3_realsmith_8Sp4VlIyKL(/*int:17319:17319:17268:e*/clk_freq_realsmith_8Sp4VlIyKL) <= 100000) {
        sm_realsmith_8Sp4VlIyKL = 0;
    } else {
        sm_realsmith_8Sp4VlIyKL = 1;
    }
/*aft_stmt:17268*/
    tft_realsmith_8Sp4VlIyKL = 1;
    rft_realsmith_8Sp4VlIyKL = 8;
    timeout_realsmith_8Sp4VlIyKL = 200;
    /*bef_stmt:17317*/
return Tag4_realsmith_8Sp4VlIyKL(/*int:17319:17319:17317:e*/sm_realsmith_8Sp4VlIyKL);
/*aft_stmt:17317*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_A9udOlZYex(x) (x)
#define Tag2_realsmith_A9udOlZYex(x) (x)
#define Tag3_realsmith_A9udOlZYex(x) (x)
#include "stdint.h"
struct stm32_rtc_registers_oOy8z0 {
    unsigned int isr_realsmith_A9udOlZYex;
};
int realsmith_A9udOlZYex(unsigned int base_realsmith_A9udOlZYex, unsigned int isr_realsmith_A9udOlZYex) {
    const unsigned int STM32_RTC_ISR_INIT_realsmith_A9udOlZYex = 0x00000001;
    /*bef_stmt:2068*/
unsigned int current_isr_realsmith_A9udOlZYex = Tag1_realsmith_A9udOlZYex(/*unsigned int:2114:2114:2068:e*/isr_realsmith_A9udOlZYex);
/*aft_stmt:2068*/
    /*bef_stmt:2085*/
current_isr_realsmith_A9udOlZYex &= ~Tag2_realsmith_A9udOlZYex(/*const unsigned int:2114:2114:2085:e*/STM32_RTC_ISR_INIT_realsmith_A9udOlZYex);
/*aft_stmt:2085*/
    /*bef_stmt:2112*/
return Tag3_realsmith_A9udOlZYex(/*unsigned int:2114:2114:2112:e*/current_isr_realsmith_A9udOlZYex);
/*aft_stmt:2112*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_i3ixX4HxNf(x) (x)
#define Tag2_realsmith_i3ixX4HxNf(x) (x)
#define Tag3_realsmith_i3ixX4HxNf(x) (x)
#define Tag4_realsmith_i3ixX4HxNf(x) (x)
#include "stdlib.h"
int realsmith_i3ixX4HxNf(unsigned int rx_q_count_realsmith_i3ixX4HxNf, unsigned int val_realsmith_i3ixX4HxNf) {
    unsigned int i_realsmith_i3ixX4HxNf;
    unsigned int result_realsmith_i3ixX4HxNf = 0;
    /*bef_stmt:17205*/
/*bef_stmt:17205*/
for (i_realsmith_i3ixX4HxNf = 0; Tag1_realsmith_i3ixX4HxNf(/*unsigned int:17224:17224:17205:e*/i_realsmith_i3ixX4HxNf) < Tag2_realsmith_i3ixX4HxNf(/*unsigned int:17224:17224:17205:e*/rx_q_count_realsmith_i3ixX4HxNf); i_realsmith_i3ixX4HxNf++) {
        /*bef_stmt:17196*/
result_realsmith_i3ixX4HxNf += Tag3_realsmith_i3ixX4HxNf(/*unsigned int:17224:17224:17196:e*/val_realsmith_i3ixX4HxNf);
/*aft_stmt:17196*/
    }
/*aft_stmt:17205*/
/*aft_stmt:17205*/
    /*bef_stmt:17222*/
return Tag4_realsmith_i3ixX4HxNf(/*unsigned int:17224:17224:17222:e*/result_realsmith_i3ixX4HxNf);
/*aft_stmt:17222*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_8td8LNQrnM(x) (x)
#define Tag2_realsmith_8td8LNQrnM(x) (x)
#define Tag3_realsmith_8td8LNQrnM(x) (x)
#define Tag4_realsmith_8td8LNQrnM(x) (x)
#define Tag5_realsmith_8td8LNQrnM(x) (x)
#define Tag6_realsmith_8td8LNQrnM(x) (x)
#define Tag7_realsmith_8td8LNQrnM(x) (x)
#define Tag8_realsmith_8td8LNQrnM(x) (x)
#include "stdlib.h"
#include "stdint.h"
int realsmith_8td8LNQrnM(int cp_msi_bitmap_realsmith_8td8LNQrnM, int cp_range_size_realsmith_8td8LNQrnM, int first_realsmith_8td8LNQrnM, int virq_realsmith_8td8LNQrnM, int nr_irqs_realsmith_8td8LNQrnM) {
    unsigned long hwirq_realsmith_8td8LNQrnM;
    int ret_realsmith_8td8LNQrnM = 0;
    /*bef_stmt:17597*/
if (Tag1_realsmith_8td8LNQrnM(/*int:17769:17769:17597:e*/nr_irqs_realsmith_8td8LNQrnM) != 1)
        return -1;
/*aft_stmt:17597*/
    /*bef_stmt:17722*/
/*bef_stmt:17722*/
for (hwirq_realsmith_8td8LNQrnM = 0; Tag2_realsmith_8td8LNQrnM(/*unsigned long:17769:17769:17722:e*/hwirq_realsmith_8td8LNQrnM) < Tag3_realsmith_8td8LNQrnM(/*int:17769:17769:17722:e*/cp_range_size_realsmith_8td8LNQrnM); hwirq_realsmith_8td8LNQrnM++) {
        /*bef_stmt:17715*/
/*bef_stmt:17715*/
if (!(Tag4_realsmith_8td8LNQrnM(/*int:17769:17769:17715:e*/cp_msi_bitmap_realsmith_8td8LNQrnM) & (1 << Tag5_realsmith_8td8LNQrnM(/*unsigned long:17769:17769:17715:e*/hwirq_realsmith_8td8LNQrnM)))) {
            /*bef_stmt:17704*/
cp_msi_bitmap_realsmith_8td8LNQrnM |= (1 << Tag6_realsmith_8td8LNQrnM(/*unsigned long:17769:17769:17704:e*/hwirq_realsmith_8td8LNQrnM));
/*aft_stmt:17704*/
            break;
        }
/*aft_stmt:17715*/
/*aft_stmt:17715*/
    }
/*aft_stmt:17722*/
/*aft_stmt:17722*/
    /*bef_stmt:17759*/
/*bef_stmt:17759*/
if (Tag7_realsmith_8td8LNQrnM(/*unsigned long:17769:17769:17759:e*/hwirq_realsmith_8td8LNQrnM) == Tag8_realsmith_8td8LNQrnM(/*int:17769:17769:17759:e*/cp_range_size_realsmith_8td8LNQrnM))
        return -2;
/*aft_stmt:17759*/
/*aft_stmt:17759*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_JJgxvX0Fsl(x) (x)
#define Tag2_realsmith_JJgxvX0Fsl(x) (x)
#define Tag3_realsmith_JJgxvX0Fsl(x) (x)
#define Tag4_realsmith_JJgxvX0Fsl(x) (x)
#define Tag5_realsmith_JJgxvX0Fsl(x) (x)
#define Tag6_realsmith_JJgxvX0Fsl(x) (x)
#include "stdint.h"
int realsmith_JJgxvX0Fsl(int linkctrl_reg_realsmith_JJgxvX0Fsl, int tmp1_realsmith_JJgxvX0Fsl, int tmp2_realsmith_JJgxvX0Fsl) {
    /*bef_stmt:2025*/
int new_linkctrl_reg_realsmith_JJgxvX0Fsl = Tag1_realsmith_JJgxvX0Fsl(/*int:2196:2196:2025:e*/linkctrl_reg_realsmith_JJgxvX0Fsl);
/*aft_stmt:2025*/
    /*bef_stmt:2067*/
new_linkctrl_reg_realsmith_JJgxvX0Fsl = (unsigned char)(Tag2_realsmith_JJgxvX0Fsl(/*int:2196:2196:2067:e*/new_linkctrl_reg_realsmith_JJgxvX0Fsl) & 0xFF);
/*aft_stmt:2067*/
    /*bef_stmt:2094*/
int linkctrl_reg_output_realsmith_JJgxvX0Fsl = Tag3_realsmith_JJgxvX0Fsl(/*int:2196:2196:2094:e*/new_linkctrl_reg_realsmith_JJgxvX0Fsl);
/*aft_stmt:2094*/
    /*bef_stmt:2120*/
int pci_byte_98_realsmith_JJgxvX0Fsl = Tag4_realsmith_JJgxvX0Fsl(/*int:2196:2196:2120:e*/tmp1_realsmith_JJgxvX0Fsl);
/*aft_stmt:2120*/
    pci_byte_98_realsmith_JJgxvX0Fsl |= (1 << 4);
    /*bef_stmt:2172*/
int pci_byte_70f_realsmith_JJgxvX0Fsl = Tag5_realsmith_JJgxvX0Fsl(/*int:2196:2196:2172:e*/tmp2_realsmith_JJgxvX0Fsl);
/*aft_stmt:2172*/
    pci_byte_70f_realsmith_JJgxvX0Fsl = 0x17;
    /*bef_stmt:2194*/
return Tag6_realsmith_JJgxvX0Fsl(/*int:2196:2196:2194:e*/linkctrl_reg_output_realsmith_JJgxvX0Fsl);
/*aft_stmt:2194*/
}



#include "stdlib.h"
int realsmith_QpXT5T71a5(int state_realsmith_QpXT5T71a5, int *lock_realsmith_QpXT5T71a5, int dev_irq_realsmith_QpXT5T71a5) {
    int ST_OFF_realsmith_QpXT5T71a5 = 0;
    int irq_disabled_realsmith_QpXT5T71a5 = 0;
    *lock_realsmith_QpXT5T71a5 = 1;
    if (state_realsmith_QpXT5T71a5 == ST_OFF_realsmith_QpXT5T71a5) {
        *lock_realsmith_QpXT5T71a5 = 0;
        return state_realsmith_QpXT5T71a5;
    }
    irq_disabled_realsmith_QpXT5T71a5 = 1;
    state_realsmith_QpXT5T71a5 = ST_OFF_realsmith_QpXT5T71a5;
    *lock_realsmith_QpXT5T71a5 = 0;
    return state_realsmith_QpXT5T71a5;
}
int realsmith_proxy_Ql7oYwe9dc(int p_0_6CVg01tjPM, int p_1_iftunHk7aZ, int p_2_EwAVmRC1gA) {
int proxy_1IgbVR6OwH[14] = { p_1_iftunHk7aZ, 58, p_1_iftunHk7aZ, 5, p_1_iftunHk7aZ, p_1_iftunHk7aZ, p_1_iftunHk7aZ, p_1_iftunHk7aZ, 35, 89, p_1_iftunHk7aZ, 97, 45, 17 };
int proxy_ret_n6hK551n2X = realsmith_QpXT5T71a5(p_0_6CVg01tjPM, proxy_1IgbVR6OwH, p_2_EwAVmRC1gA);
return proxy_ret_n6hK551n2X;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_wnMj7YLQ5c(x) (x)
#define Tag2_realsmith_wnMj7YLQ5c(x) (x)
#define Tag3_realsmith_wnMj7YLQ5c(x) (x)
#include "stdlib.h"
struct intel_wakeref_hwgqfn {
    int rpm_realsmith_wnMj7YLQ5c;
    int wakeref_realsmith_wnMj7YLQ5c;
};
int realsmith_wnMj7YLQ5c(int rpm_realsmith_wnMj7YLQ5c, int wakeref_realsmith_wnMj7YLQ5c) {
    /*bef_stmt:17173*/
if (Tag1_realsmith_wnMj7YLQ5c(/*int:17224:17224:17173:e*/wakeref_realsmith_wnMj7YLQ5c) == 0) {
        return -1;
    }
/*aft_stmt:17173*/
    /*bef_stmt:17200*/
int temp_realsmith_wnMj7YLQ5c = Tag2_realsmith_wnMj7YLQ5c(/*int:17224:17224:17200:e*/wakeref_realsmith_wnMj7YLQ5c);
/*aft_stmt:17200*/
    wakeref_realsmith_wnMj7YLQ5c = 0;
    /*bef_stmt:17222*/
return Tag3_realsmith_wnMj7YLQ5c(/*int:17224:17224:17222:e*/temp_realsmith_wnMj7YLQ5c);
/*aft_stmt:17222*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_izMwi6XoZa(x) (x)
#define Tag2_realsmith_izMwi6XoZa(x) (x)
#define Tag3_realsmith_izMwi6XoZa(x) (x)
#define Tag4_realsmith_izMwi6XoZa(x) (x)
#include "stdlib.h"
int realsmith_izMwi6XoZa(int xmit_flags_realsmith_izMwi6XoZa) {
    const int IFORCE_XMIT_RUNNING_realsmith_izMwi6XoZa = 1;
    /*bef_stmt:17154*/
/*bef_stmt:17154*/
int was_running_realsmith_izMwi6XoZa = (Tag1_realsmith_izMwi6XoZa(/*int:17207:17207:17154:e*/xmit_flags_realsmith_izMwi6XoZa) & Tag2_realsmith_izMwi6XoZa(/*const int:17207:17207:17154:e*/IFORCE_XMIT_RUNNING_realsmith_izMwi6XoZa)) != 0;
/*aft_stmt:17154*/
/*aft_stmt:17154*/
    /*bef_stmt:17194*/
if (!Tag3_realsmith_izMwi6XoZa(/*int:17207:17207:17194:e*/was_running_realsmith_izMwi6XoZa)) {
        /*bef_stmt:17178*/
xmit_flags_realsmith_izMwi6XoZa |= Tag4_realsmith_izMwi6XoZa(/*const int:17207:17207:17178:e*/IFORCE_XMIT_RUNNING_realsmith_izMwi6XoZa);
/*aft_stmt:17178*/
        return 0;
    }
/*aft_stmt:17194*/
    return -1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_hGPS1K9Mnm(x) (x)
#define Tag2_realsmith_hGPS1K9Mnm(x) (x)
#include "stdlib.h"
int realsmith_hGPS1K9Mnm(int reg_value_realsmith_hGPS1K9Mnm) {
    int phy_realsmith_hGPS1K9Mnm = 0;
    /*bef_stmt:17128*/
int result_realsmith_hGPS1K9Mnm = Tag1_realsmith_hGPS1K9Mnm(/*int:17140:17140:17128:e*/reg_value_realsmith_hGPS1K9Mnm) & 0x7F;
/*aft_stmt:17128*/
    /*bef_stmt:17138*/
return Tag2_realsmith_hGPS1K9Mnm(/*int:17140:17140:17138:e*/result_realsmith_hGPS1K9Mnm);
/*aft_stmt:17138*/
}



#include "stdlib.h"
struct dce_transform_j4w334 {
    int *filter_v_realsmith_STQxuvwnPD;
    int *filter_h_realsmith_STQxuvwnPD;
};
int realsmith_STQxuvwnPD(int *filter_v_realsmith_STQxuvwnPD, int *filter_h_realsmith_STQxuvwnPD) {
    filter_h_realsmith_STQxuvwnPD = ((void*)0);
    filter_v_realsmith_STQxuvwnPD = ((void*)0);
    return 0;
}
int realsmith_proxy_bgeLYyc8Ks(int p_0_HxchQspAoR, int p_1_3ZBhiayrSg) {
int proxy_pHOd1K4lci[18] = { p_0_HxchQspAoR, 56, p_0_HxchQspAoR, 74, 36, 36, 43, p_0_HxchQspAoR, p_0_HxchQspAoR, 17, p_0_HxchQspAoR, p_0_HxchQspAoR, 12, p_0_HxchQspAoR, p_0_HxchQspAoR, p_0_HxchQspAoR, p_0_HxchQspAoR, 26 };
int proxy_GlvFhLsfnc[19] = { p_1_3ZBhiayrSg, p_1_3ZBhiayrSg, 61, 51, 36, 50, p_1_3ZBhiayrSg, 22, 71, 94, p_1_3ZBhiayrSg, p_1_3ZBhiayrSg, 92, p_1_3ZBhiayrSg, 54, 8, p_1_3ZBhiayrSg, p_1_3ZBhiayrSg, 82 };
int proxy_ret_bekgcuocXn = realsmith_STQxuvwnPD(proxy_pHOd1K4lci, proxy_GlvFhLsfnc);
return proxy_ret_bekgcuocXn;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_1QZCf0ys3g(x) (x)
#define Tag2_realsmith_1QZCf0ys3g(x) (x)
#define Tag3_realsmith_1QZCf0ys3g(x) (x)
#define Tag4_realsmith_1QZCf0ys3g(x) (x)
#include "stdlib.h"
int realsmith_1QZCf0ys3g(int ap_dummy_realsmith_1QZCf0ys3g, int dma_mode_realsmith_1QZCf0ys3g) {
    int timing_value_realsmith_1QZCf0ys3g = 0x40;
    int some_constant_realsmith_1QZCf0ys3g = 3;
    /*bef_stmt:17190*/
/*bef_stmt:17190*/
/*bef_stmt:17190*/
/*bef_stmt:17190*/
return (Tag1_realsmith_1QZCf0ys3g(/*int:17192:17192:17190:e*/ap_dummy_realsmith_1QZCf0ys3g) + Tag2_realsmith_1QZCf0ys3g(/*int:17192:17192:17190:e*/timing_value_realsmith_1QZCf0ys3g) + Tag3_realsmith_1QZCf0ys3g(/*int:17192:17192:17190:e*/dma_mode_realsmith_1QZCf0ys3g) + Tag4_realsmith_1QZCf0ys3g(/*int:17192:17192:17190:e*/some_constant_realsmith_1QZCf0ys3g));
/*aft_stmt:17190*/
/*aft_stmt:17190*/
/*aft_stmt:17190*/
/*aft_stmt:17190*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_YCZoDhef0c(x) (x)
#define Tag2_realsmith_YCZoDhef0c(x) (x)
#include "stdlib.h"
int realsmith_YCZoDhef0c(int irq_enabled_realsmith_YCZoDhef0c) {
    unsigned long flags_realsmith_YCZoDhef0c;
    /*bef_stmt:17107*/
flags_realsmith_YCZoDhef0c = /*TAG1:STA*/((int)(realsmith_7O19bqa5ug((int)(irq_enabled_realsmith_YCZoDhef0c)+(14))+(int)(irq_enabled_realsmith_YCZoDhef0c)-(72))+irq_enabled_realsmith_YCZoDhef0c)/*TAG1:END:irq_enabled_realsmith_YCZoDhef0c*/;
/*aft_stmt:17107*/
    /*bef_stmt:17121*/
return /*TAG2:STA*/((unsigned long)(realsmith_ODL7fuHsFB((unsigned int)(flags_realsmith_YCZoDhef0c)+(-9), (long)(flags_realsmith_YCZoDhef0c)+(-66))+(int)(flags_realsmith_YCZoDhef0c)-(72))+flags_realsmith_YCZoDhef0c)/*TAG2:END:flags_realsmith_YCZoDhef0c*/;
/*aft_stmt:17121*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_2kJlhtrWqu(x) (x)
#define Tag2_realsmith_2kJlhtrWqu(x) (x)
#define Tag3_realsmith_2kJlhtrWqu(x) (x)
#define Tag4_realsmith_2kJlhtrWqu(x) (x)
#include "stdlib.h"
int realsmith_2kJlhtrWqu(int q_counter_realsmith_2kJlhtrWqu, int drop_rq_q_counter_realsmith_2kJlhtrWqu) {
    unsigned int rx_out_of_buffer_realsmith_2kJlhtrWqu = 0;
    unsigned int rx_if_down_packets_realsmith_2kJlhtrWqu = 0;
    unsigned int out_realsmith_2kJlhtrWqu[16];
    /*bef_stmt:17213*/
if (Tag1_realsmith_2kJlhtrWqu(/*int:17269:17269:17213:e*/q_counter_realsmith_2kJlhtrWqu)) {
        rx_out_of_buffer_realsmith_2kJlhtrWqu = 42;
    }
/*aft_stmt:17213*/
    /*bef_stmt:17242*/
if (Tag2_realsmith_2kJlhtrWqu(/*int:17269:17269:17242:e*/drop_rq_q_counter_realsmith_2kJlhtrWqu)) {
        rx_if_down_packets_realsmith_2kJlhtrWqu = 24;
    }
/*aft_stmt:17242*/
    /*bef_stmt:17267*/
/*bef_stmt:17267*/
return Tag3_realsmith_2kJlhtrWqu(/*unsigned int:17269:17269:17267:e*/rx_out_of_buffer_realsmith_2kJlhtrWqu) + Tag4_realsmith_2kJlhtrWqu(/*unsigned int:17269:17269:17267:e*/rx_if_down_packets_realsmith_2kJlhtrWqu);
/*aft_stmt:17267*/
/*aft_stmt:17267*/
}



#include "stdint.h"
int realsmith_vAAVc8Xr84(int chan_id_realsmith_vAAVc8Xr84, unsigned int *membase_realsmith_vAAVc8Xr84) {
    unsigned int ier_realsmith_vAAVc8Xr84;
    ier_realsmith_vAAVc8Xr84 = *(membase_realsmith_vAAVc8Xr84 + 0x00 / sizeof(unsigned int));
    ier_realsmith_vAAVc8Xr84 |= 1 << chan_id_realsmith_vAAVc8Xr84;
    *(membase_realsmith_vAAVc8Xr84 + 0x00 / sizeof(unsigned int)) = ier_realsmith_vAAVc8Xr84;
    return ier_realsmith_vAAVc8Xr84;
}
int realsmith_proxy_SxTXleihUL(int p_0_oP3sNdxVW7, unsigned int p_1_ADmQPDCjDv) {
unsigned int proxy_ifhyqbJaUC[10] = { p_1_ADmQPDCjDv, 45, 34, p_1_ADmQPDCjDv, p_1_ADmQPDCjDv, 82, p_1_ADmQPDCjDv, 41, 33, p_1_ADmQPDCjDv };
int proxy_ret_D3T8t3Fu6O = realsmith_vAAVc8Xr84(p_0_oP3sNdxVW7, proxy_ifhyqbJaUC);
return proxy_ret_D3T8t3Fu6O;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_FE0pSq3pmW(x) (x)
#define Tag2_realsmith_FE0pSq3pmW(x) (x)
#define Tag3_realsmith_FE0pSq3pmW(x) (x)
#define Tag4_realsmith_FE0pSq3pmW(x) (x)
#define Tag5_realsmith_FE0pSq3pmW(x) (x)
#define Tag6_realsmith_FE0pSq3pmW(x) (x)
#define Tag7_realsmith_FE0pSq3pmW(x) (x)
#define Tag8_realsmith_FE0pSq3pmW(x) (x)
#define Tag9_realsmith_FE0pSq3pmW(x) (x)
#define Tag10_realsmith_FE0pSq3pmW(x) (x)
#define Tag11_realsmith_FE0pSq3pmW(x) (x)
#define Tag12_realsmith_FE0pSq3pmW(x) (x)
#define Tag13_realsmith_FE0pSq3pmW(x) (x)
#define Tag14_realsmith_FE0pSq3pmW(x) (x)
#define Tag15_realsmith_FE0pSq3pmW(x) (x)
#define Tag16_realsmith_FE0pSq3pmW(x) (x)
#include "stdlib.h"
int realsmith_FE0pSq3pmW(unsigned long width_realsmith_FE0pSq3pmW, unsigned long num_slots_realsmith_FE0pSq3pmW, unsigned long bitmap_realsmith_FE0pSq3pmW, unsigned long map_size_realsmith_FE0pSq3pmW) {
    unsigned long pos_realsmith_FE0pSq3pmW = 0;
    int ret_realsmith_FE0pSq3pmW = 0;
    /*bef_stmt:17217*/
/*bef_stmt:17217*/
if (/*TAG1:STA*/((unsigned long)(realsmith_xrsMFJqEOC((int)(num_slots_realsmith_FE0pSq3pmW)+(-9), (int)(num_slots_realsmith_FE0pSq3pmW)+(-10), (int)(num_slots_realsmith_FE0pSq3pmW)+(-9))+(int)(num_slots_realsmith_FE0pSq3pmW)-(16))+num_slots_realsmith_FE0pSq3pmW)/*TAG1:END:num_slots_realsmith_FE0pSq3pmW*/ > /*TAG2:STA*/((unsigned long)(realsmith_UF3xlQvBbQ((int)(map_size_realsmith_FE0pSq3pmW)+(-35), (int)(map_size_realsmith_FE0pSq3pmW)+(-10))+(int)(map_size_realsmith_FE0pSq3pmW)-(125))+map_size_realsmith_FE0pSq3pmW)/*TAG2:END:map_size_realsmith_FE0pSq3pmW*/) {
        return -1;
    }
/*aft_stmt:17217*/
/*aft_stmt:17217*/
    pos_realsmith_FE0pSq3pmW = 0;
    /*bef_stmt:17270*/
/*bef_stmt:17270*/
unsigned long p0_x_realsmith_FE0pSq3pmW = /*TAG3:STA*/((unsigned long)(realsmith_J8jfXTmblS((int)(pos_realsmith_FE0pSq3pmW)+(57))+(int)(pos_realsmith_FE0pSq3pmW)-(1))+pos_realsmith_FE0pSq3pmW)/*TAG3:END:pos_realsmith_FE0pSq3pmW*/ % /*TAG4:STA*/((unsigned long)(realsmith_rS4WH54Ry8((int)(width_realsmith_FE0pSq3pmW)+(-50), (int)(width_realsmith_FE0pSq3pmW)+(-54), (int)(width_realsmith_FE0pSq3pmW)+(-1), (int)(width_realsmith_FE0pSq3pmW)+(-59))+(int)(width_realsmith_FE0pSq3pmW)-(152))+width_realsmith_FE0pSq3pmW)/*TAG4:END:width_realsmith_FE0pSq3pmW*/;
/*aft_stmt:17270*/
/*aft_stmt:17270*/
    /*bef_stmt:17307*/
/*bef_stmt:17307*/
unsigned long p0_y_realsmith_FE0pSq3pmW = /*TAG5:STA*/((unsigned long)(realsmith_proxy_wlXY3Glzw6((int)(pos_realsmith_FE0pSq3pmW)+(3), (int)(pos_realsmith_FE0pSq3pmW)+(80))+(int)(pos_realsmith_FE0pSq3pmW)-(8))+pos_realsmith_FE0pSq3pmW)/*TAG5:END:pos_realsmith_FE0pSq3pmW*/ / /*TAG6:STA*/((unsigned long)(realsmith_ZvskYHWN8c((int)(width_realsmith_FE0pSq3pmW)+(-81), (int)(width_realsmith_FE0pSq3pmW)+(-83), (int)(width_realsmith_FE0pSq3pmW)+(-81), (int)(width_realsmith_FE0pSq3pmW)+(-82), (int)(width_realsmith_FE0pSq3pmW)+(-83), (int)(width_realsmith_FE0pSq3pmW)+(-83), (int)(width_realsmith_FE0pSq3pmW)+(-85), (int)(width_realsmith_FE0pSq3pmW)+(-81))+(int)(width_realsmith_FE0pSq3pmW)-(90))+width_realsmith_FE0pSq3pmW)/*TAG6:END:width_realsmith_FE0pSq3pmW*/;
/*aft_stmt:17307*/
/*aft_stmt:17307*/
    /*bef_stmt:17370*/
/*bef_stmt:17370*/
/*bef_stmt:17370*/
unsigned long p1_x_realsmith_FE0pSq3pmW = (/*TAG7:STA*/((unsigned long)(realsmith_TKGjyduouS((int)(pos_realsmith_FE0pSq3pmW)+(6))+(int)(pos_realsmith_FE0pSq3pmW)-(1))+pos_realsmith_FE0pSq3pmW)/*TAG7:END:pos_realsmith_FE0pSq3pmW*/ + /*TAG8:STA*/((unsigned long)(realsmith_QVAPi7oDjb((int)(num_slots_realsmith_FE0pSq3pmW)+(68), (int)(num_slots_realsmith_FE0pSq3pmW)+(11), (unsigned long)(num_slots_realsmith_FE0pSq3pmW)+(32))+(int)(num_slots_realsmith_FE0pSq3pmW)-(163))+num_slots_realsmith_FE0pSq3pmW)/*TAG8:END:num_slots_realsmith_FE0pSq3pmW*/ - 1) % /*TAG9:STA*/((unsigned long)(realsmith_N62qgmWJD2((int)(width_realsmith_FE0pSq3pmW)+(-62))+(int)(width_realsmith_FE0pSq3pmW)-(110))+width_realsmith_FE0pSq3pmW)/*TAG9:END:width_realsmith_FE0pSq3pmW*/;
/*aft_stmt:17370*/
/*aft_stmt:17370*/
/*aft_stmt:17370*/
    /*bef_stmt:17434*/
/*bef_stmt:17434*/
/*bef_stmt:17434*/
unsigned long p1_y_realsmith_FE0pSq3pmW = (/*TAG10:STA*/((unsigned long)(realsmith_e7AzJzFVZ5((int)(pos_realsmith_FE0pSq3pmW)+(43))+(int)(pos_realsmith_FE0pSq3pmW)-(44))+pos_realsmith_FE0pSq3pmW)/*TAG10:END:pos_realsmith_FE0pSq3pmW*/ + /*TAG11:STA*/((unsigned long)(realsmith_dakgXYAXWc((unsigned int)(num_slots_realsmith_FE0pSq3pmW)+(11), (unsigned int)(num_slots_realsmith_FE0pSq3pmW)+(1))+(int)(num_slots_realsmith_FE0pSq3pmW)-(14))+num_slots_realsmith_FE0pSq3pmW)/*TAG11:END:num_slots_realsmith_FE0pSq3pmW*/ - 1) / /*TAG12:STA*/((unsigned long)(realsmith_WPSph9XeuV((int)(width_realsmith_FE0pSq3pmW)+(-53), (unsigned int)(width_realsmith_FE0pSq3pmW)+(-11))+(unsigned int)(width_realsmith_FE0pSq3pmW)-(87))+width_realsmith_FE0pSq3pmW)/*TAG12:END:width_realsmith_FE0pSq3pmW*/;
/*aft_stmt:17434*/
/*aft_stmt:17434*/
/*aft_stmt:17434*/
    /*bef_stmt:17516*/
/*bef_stmt:17516*/
/*bef_stmt:17516*/
/*bef_stmt:17516*/
return (/*TAG13:STA*/((unsigned long)(realsmith_QiTYEUq1zI((int)(p0_x_realsmith_FE0pSq3pmW)+(35), (int)(p0_x_realsmith_FE0pSq3pmW)+(85))+(int)(p0_x_realsmith_FE0pSq3pmW)-(0))+p0_x_realsmith_FE0pSq3pmW)/*TAG13:END:p0_x_realsmith_FE0pSq3pmW*/ << 24) | (/*TAG14:STA*/((unsigned long)(realsmith_DDgBR4Il19((int)(p0_y_realsmith_FE0pSq3pmW)+(5))+(int)(p0_y_realsmith_FE0pSq3pmW)-(10))+p0_y_realsmith_FE0pSq3pmW)/*TAG14:END:p0_y_realsmith_FE0pSq3pmW*/ << 16) | (/*TAG15:STA*/((unsigned long)(realsmith_proxy_0KrKbCNLCa((int)(p1_x_realsmith_FE0pSq3pmW)+(55), (int)(p1_x_realsmith_FE0pSq3pmW)+(-3), (int)(p1_x_realsmith_FE0pSq3pmW)+(-4), (int)(p1_x_realsmith_FE0pSq3pmW)+(51))+(int)(p1_x_realsmith_FE0pSq3pmW)-(13))+p1_x_realsmith_FE0pSq3pmW)/*TAG15:END:p1_x_realsmith_FE0pSq3pmW*/ << 8) | /*TAG16:STA*/((unsigned long)(realsmith_M4n5sK8t4d((int)(p1_y_realsmith_FE0pSq3pmW)+(27), (int)(p1_y_realsmith_FE0pSq3pmW)+(70))+(int)(p1_y_realsmith_FE0pSq3pmW)-(27))+p1_y_realsmith_FE0pSq3pmW)/*TAG16:END:p1_y_realsmith_FE0pSq3pmW*/;
/*aft_stmt:17516*/
/*aft_stmt:17516*/
/*aft_stmt:17516*/
/*aft_stmt:17516*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_CgpV6QuCWp(x) (x)
#define Tag2_realsmith_CgpV6QuCWp(x) (x)
#define Tag3_realsmith_CgpV6QuCWp(x) (x)
#define Tag4_realsmith_CgpV6QuCWp(x) (x)
#define Tag5_realsmith_CgpV6QuCWp(x) (x)
#define Tag6_realsmith_CgpV6QuCWp(x) (x)
#define Tag7_realsmith_CgpV6QuCWp(x) (x)
#define Tag8_realsmith_CgpV6QuCWp(x) (x)
#define Tag9_realsmith_CgpV6QuCWp(x) (x)
#define Tag10_realsmith_CgpV6QuCWp(x) (x)
#define Tag11_realsmith_CgpV6QuCWp(x) (x)
#define Tag12_realsmith_CgpV6QuCWp(x) (x)
#define Tag13_realsmith_CgpV6QuCWp(x) (x)
#include "stdint.h"
#include "stdbool.h"
int realsmith_CgpV6QuCWp(int pf_id_realsmith_CgpV6QuCWp, _Bool is_pf_loading_realsmith_CgpV6QuCWp, unsigned int num_pf_cids_realsmith_CgpV6QuCWp, unsigned int num_tids_realsmith_CgpV6QuCWp, unsigned int base_mem_addr_4kb_realsmith_CgpV6QuCWp) {
    unsigned int pq_size_realsmith_CgpV6QuCWp, pq_mem_4kb_realsmith_CgpV6QuCWp, mem_addr_4kb_realsmith_CgpV6QuCWp;
    unsigned short int i_realsmith_CgpV6QuCWp, j_realsmith_CgpV6QuCWp, pq_id_realsmith_CgpV6QuCWp, pq_group_realsmith_CgpV6QuCWp;
    /*bef_stmt:2186*/
pq_group_realsmith_CgpV6QuCWp = Tag1_realsmith_CgpV6QuCWp(/*int:2560:2560:2186:e*/pf_id_realsmith_CgpV6QuCWp);
/*aft_stmt:2186*/
    /*bef_stmt:2212*/
/*bef_stmt:2212*/
pq_size_realsmith_CgpV6QuCWp = Tag2_realsmith_CgpV6QuCWp(/*unsigned int:2560:2560:2212:e*/num_pf_cids_realsmith_CgpV6QuCWp) + Tag3_realsmith_CgpV6QuCWp(/*unsigned int:2560:2560:2212:e*/num_tids_realsmith_CgpV6QuCWp);
/*aft_stmt:2212*/
/*aft_stmt:2212*/
    /*bef_stmt:2246*/
pq_mem_4kb_realsmith_CgpV6QuCWp = ((Tag4_realsmith_CgpV6QuCWp(/*unsigned int:2560:2560:2246:e*/pq_size_realsmith_CgpV6QuCWp)) / 1024);
/*aft_stmt:2246*/
    /*bef_stmt:2261*/
mem_addr_4kb_realsmith_CgpV6QuCWp = Tag5_realsmith_CgpV6QuCWp(/*unsigned int:2560:2560:2261:e*/base_mem_addr_4kb_realsmith_CgpV6QuCWp);
/*aft_stmt:2261*/
    /*bef_stmt:2304*/
unsigned int reg_value_realsmith_CgpV6QuCWp = (unsigned int)(Tag6_realsmith_CgpV6QuCWp(/*int:2560:2560:2304:e*/pf_id_realsmith_CgpV6QuCWp));
/*aft_stmt:2304*/
    /*bef_stmt:2337*/
reg_value_realsmith_CgpV6QuCWp = ((Tag7_realsmith_CgpV6QuCWp(/*unsigned int:2560:2560:2337:e*/pq_size_realsmith_CgpV6QuCWp)) * 256);
/*aft_stmt:2337*/
    /*bef_stmt:2538*/
/*bef_stmt:2538*/
for (i_realsmith_CgpV6QuCWp = 0, pq_id_realsmith_CgpV6QuCWp = Tag8_realsmith_CgpV6QuCWp(/*int:2560:2560:2538:e*/pf_id_realsmith_CgpV6QuCWp) * 4; Tag9_realsmith_CgpV6QuCWp(/*unsigned short:2560:2560:2538:e*/i_realsmith_CgpV6QuCWp) < 8; i_realsmith_CgpV6QuCWp++, pq_id_realsmith_CgpV6QuCWp++) {
        /*bef_stmt:2433*/
reg_value_realsmith_CgpV6QuCWp = Tag10_realsmith_CgpV6QuCWp(/*unsigned int:2560:2560:2433:e*/mem_addr_4kb_realsmith_CgpV6QuCWp);
/*aft_stmt:2433*/
        /*bef_stmt:2512*/
if (Tag11_realsmith_CgpV6QuCWp(/*_Bool:2560:2560:2512:e*/is_pf_loading_realsmith_CgpV6QuCWp)) {
            /*bef_stmt:2502*/
for (j_realsmith_CgpV6QuCWp = 0; Tag12_realsmith_CgpV6QuCWp(/*unsigned short:2560:2560:2502:e*/j_realsmith_CgpV6QuCWp) < 2; j_realsmith_CgpV6QuCWp++) {
                reg_value_realsmith_CgpV6QuCWp = 0;
            }
/*aft_stmt:2502*/
        }
/*aft_stmt:2512*/
        /*bef_stmt:2527*/
mem_addr_4kb_realsmith_CgpV6QuCWp += Tag13_realsmith_CgpV6QuCWp(/*unsigned int:2560:2560:2527:e*/pq_mem_4kb_realsmith_CgpV6QuCWp);
/*aft_stmt:2527*/
    }
/*aft_stmt:2538*/
/*aft_stmt:2538*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_W6puj2JhU4(x) (x)
#define Tag2_realsmith_W6puj2JhU4(x) (x)
#define Tag3_realsmith_W6puj2JhU4(x) (x)
#define Tag4_realsmith_W6puj2JhU4(x) (x)
#define Tag5_realsmith_W6puj2JhU4(x) (x)
#define Tag6_realsmith_W6puj2JhU4(x) (x)
#define Tag7_realsmith_W6puj2JhU4(x) (x)
#include "stdint.h"
int realsmith_W6puj2JhU4(unsigned int capture_source_realsmith_W6puj2JhU4, unsigned int current_mask_realsmith_W6puj2JhU4) {
    unsigned int source_realsmith_W6puj2JhU4, mask_realsmith_W6puj2JhU4;
    /*bef_stmt:2113*/
/*bef_stmt:2113*/
/*bef_stmt:2113*/
/*bef_stmt:2113*/
source_realsmith_W6puj2JhU4 = (Tag1_realsmith_W6puj2JhU4(/*unsigned int:2166:2166:2113:e*/capture_source_realsmith_W6puj2JhU4) << 28) | (Tag2_realsmith_W6puj2JhU4(/*unsigned int:2166:2166:2113:e*/capture_source_realsmith_W6puj2JhU4) << 24) | (Tag3_realsmith_W6puj2JhU4(/*unsigned int:2166:2166:2113:e*/capture_source_realsmith_W6puj2JhU4) << 20) | (Tag4_realsmith_W6puj2JhU4(/*unsigned int:2166:2166:2113:e*/capture_source_realsmith_W6puj2JhU4) << 16);
/*aft_stmt:2113*/
/*aft_stmt:2113*/
/*aft_stmt:2113*/
/*aft_stmt:2113*/
    /*bef_stmt:2139*/
mask_realsmith_W6puj2JhU4 = Tag5_realsmith_W6puj2JhU4(/*unsigned int:2166:2166:2139:e*/current_mask_realsmith_W6puj2JhU4) & 0xffff;
/*aft_stmt:2139*/
    /*bef_stmt:2164*/
/*bef_stmt:2164*/
return Tag6_realsmith_W6puj2JhU4(/*unsigned int:2166:2166:2164:e*/source_realsmith_W6puj2JhU4) | Tag7_realsmith_W6puj2JhU4(/*unsigned int:2166:2166:2164:e*/mask_realsmith_W6puj2JhU4);
/*aft_stmt:2164*/
/*aft_stmt:2164*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_j3LPNVR7fJ(x) (x)
#define Tag2_realsmith_j3LPNVR7fJ(x) (x)
#define Tag3_realsmith_j3LPNVR7fJ(x) (x)
#define Tag4_realsmith_j3LPNVR7fJ(x) (x)
#define Tag5_realsmith_j3LPNVR7fJ(x) (x)
#include "stdint.h"
int realsmith_j3LPNVR7fJ(int dapm_realsmith_j3LPNVR7fJ, int shift_realsmith_j3LPNVR7fJ, int event_realsmith_j3LPNVR7fJ, int dcs_pending_realsmith_j3LPNVR7fJ) {
    int WM8903_DC_SERVO_0_realsmith_j3LPNVR7fJ = 0;
    /*bef_stmt:2068*/
int result_realsmith_j3LPNVR7fJ = Tag1_realsmith_j3LPNVR7fJ(/*int:2181:2181:2068:e*/dcs_pending_realsmith_j3LPNVR7fJ);
/*aft_stmt:2068*/
    /*bef_stmt:2078*/
switch (Tag2_realsmith_j3LPNVR7fJ(/*int:2181:2181:2078:e*/event_realsmith_j3LPNVR7fJ)) {
    /*bef_stmt:2090*/
case 1:
        result_realsmith_j3LPNVR7fJ |= 1 << Tag3_realsmith_j3LPNVR7fJ(/*int:2181:2181:2090:e*/shift_realsmith_j3LPNVR7fJ);
/*aft_stmt:2090*/
        break;
    /*bef_stmt:2128*/
case 0:
        WM8903_DC_SERVO_0_realsmith_j3LPNVR7fJ &= ~(1 << Tag4_realsmith_j3LPNVR7fJ(/*int:2181:2181:2128:e*/shift_realsmith_j3LPNVR7fJ));
/*aft_stmt:2128*/
        break;
    }
/*aft_stmt:2078*/
    /*bef_stmt:2179*/
return Tag5_realsmith_j3LPNVR7fJ(/*int:2181:2181:2179:e*/result_realsmith_j3LPNVR7fJ);
/*aft_stmt:2179*/
}



#include "stddef.h"
int realsmith_VaIVqgjM5g(int dev_id_realsmith_VaIVqgjM5g, int master_id_realsmith_VaIVqgjM5g, int *larb_mmu_dev_ids_realsmith_VaIVqgjM5g, int *larb_mmu_mmues_realsmith_VaIVqgjM5g) {
    unsigned int larbid_realsmith_VaIVqgjM5g = 0;
    for (unsigned int i_realsmith_VaIVqgjM5g = 0; i_realsmith_VaIVqgjM5g < 16; i_realsmith_VaIVqgjM5g++) {
        if (dev_id_realsmith_VaIVqgjM5g == larb_mmu_dev_ids_realsmith_VaIVqgjM5g[i_realsmith_VaIVqgjM5g]) {
            larbid_realsmith_VaIVqgjM5g = i_realsmith_VaIVqgjM5g;
            return 0;
        }
    }
    return -19;
}
int realsmith_proxy_UJdOhWQqpg(int p_0_Hi6ItRPggO, int p_1_Ulr6Ig3lB9, int p_2_nbg1E8UTjU, int p_3_v9eV5BS9jr) {
int proxy_nhUUY86pO7[15] = { p_2_nbg1E8UTjU, 6, 39, 74, 60, 2, 12, p_2_nbg1E8UTjU, p_2_nbg1E8UTjU, p_2_nbg1E8UTjU, 87, 7, 22, 70, p_2_nbg1E8UTjU };
int proxy_ret_R1t4qLKEB5 = realsmith_VaIVqgjM5g(p_0_Hi6ItRPggO, p_1_Ulr6Ig3lB9, proxy_nhUUY86pO7, &(p_3_v9eV5BS9jr));
return proxy_ret_R1t4qLKEB5;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_T8e07tlrUz(x) (x)
#define Tag2_realsmith_T8e07tlrUz(x) (x)
#define Tag3_realsmith_T8e07tlrUz(x) (x)
#define Tag4_realsmith_T8e07tlrUz(x) (x)
#define Tag5_realsmith_T8e07tlrUz(x) (x)
#define Tag6_realsmith_T8e07tlrUz(x) (x)
#define Tag7_realsmith_T8e07tlrUz(x) (x)
#define Tag8_realsmith_T8e07tlrUz(x) (x)
#define Tag9_realsmith_T8e07tlrUz(x) (x)
#include "stdlib.h"
int realsmith_T8e07tlrUz(int wol_criteria_realsmith_T8e07tlrUz) {
    int supported_realsmith_T8e07tlrUz = 8 | 2 | 1 | 4;
    int wolopts_realsmith_T8e07tlrUz = 0;
    /*bef_stmt:17191*/
/*bef_stmt:17191*/
/*bef_stmt:17191*/
if (Tag1_realsmith_T8e07tlrUz(/*int:17359:17359:17191:e*/wol_criteria_realsmith_T8e07tlrUz) == 0)
        return (Tag2_realsmith_T8e07tlrUz(/*int:17359:17359:17191:e*/supported_realsmith_T8e07tlrUz) << 16) | Tag3_realsmith_T8e07tlrUz(/*int:17359:17359:17191:e*/wolopts_realsmith_T8e07tlrUz);
/*aft_stmt:17191*/
/*aft_stmt:17191*/
/*aft_stmt:17191*/
    /*bef_stmt:17224*/
if (Tag4_realsmith_T8e07tlrUz(/*int:17359:17359:17224:e*/wol_criteria_realsmith_T8e07tlrUz) & 8)
        wolopts_realsmith_T8e07tlrUz |= 8;
/*aft_stmt:17224*/
    /*bef_stmt:17257*/
if (Tag5_realsmith_T8e07tlrUz(/*int:17359:17359:17257:e*/wol_criteria_realsmith_T8e07tlrUz) & 4)
        wolopts_realsmith_T8e07tlrUz |= 2;
/*aft_stmt:17257*/
    /*bef_stmt:17290*/
if (Tag6_realsmith_T8e07tlrUz(/*int:17359:17359:17290:e*/wol_criteria_realsmith_T8e07tlrUz) & 1)
        wolopts_realsmith_T8e07tlrUz |= 1;
/*aft_stmt:17290*/
    /*bef_stmt:17323*/
if (Tag7_realsmith_T8e07tlrUz(/*int:17359:17359:17323:e*/wol_criteria_realsmith_T8e07tlrUz) & 2)
        wolopts_realsmith_T8e07tlrUz |= 4;
/*aft_stmt:17323*/
    /*bef_stmt:17357*/
/*bef_stmt:17357*/
return (Tag8_realsmith_T8e07tlrUz(/*int:17359:17359:17357:e*/supported_realsmith_T8e07tlrUz) << 16) | Tag9_realsmith_T8e07tlrUz(/*int:17359:17359:17357:e*/wolopts_realsmith_T8e07tlrUz);
/*aft_stmt:17357*/
/*aft_stmt:17357*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Sv1YC8ryev(x) (x)
#define Tag2_realsmith_Sv1YC8ryev(x) (x)
#define Tag3_realsmith_Sv1YC8ryev(x) (x)
#include "stdint.h"
struct rdr_tbl_ent_trpuc5 {
    long width_realsmith_Sv1YC8ryev;
    unsigned int num_words_realsmith_Sv1YC8ryev;
};
int realsmith_Sv1YC8ryev(unsigned int rdr_num_realsmith_Sv1YC8ryev, long width_realsmith_Sv1YC8ryev, unsigned int num_words_realsmith_Sv1YC8ryev, long perf_processor_interface_realsmith_Sv1YC8ryev) {
    /*bef_stmt:2111*/
if (/*TAG1:STA*/((long)(realsmith_ly4xHwYl2b((unsigned int)(width_realsmith_Sv1YC8ryev)+(22), (unsigned int)(width_realsmith_Sv1YC8ryev)+(56))+(int)(width_realsmith_Sv1YC8ryev)-(102))+width_realsmith_Sv1YC8ryev)/*TAG1:END:width_realsmith_Sv1YC8ryev*/ == 0) {
        return -1;
    }
/*aft_stmt:2111*/
    /*bef_stmt:2141*/
signed int i_realsmith_Sv1YC8ryev = /*TAG2:STA*/((unsigned int)(realsmith_eHZi7SBXPM((int)(num_words_realsmith_Sv1YC8ryev)+(-32), (int)(num_words_realsmith_Sv1YC8ryev)+(-10))+(int)(num_words_realsmith_Sv1YC8ryev)-(80))+num_words_realsmith_Sv1YC8ryev)/*TAG2:END:num_words_realsmith_Sv1YC8ryev*/;
/*aft_stmt:2141*/
    while (i_realsmith_Sv1YC8ryev--) {
        /*bef_stmt:2173*/
if (/*TAG3:STA*/((long)(realsmith_proxy_iAkERlXdUt((int)(perf_processor_interface_realsmith_Sv1YC8ryev)+(8), (int)(perf_processor_interface_realsmith_Sv1YC8ryev)+(-135), (int)(perf_processor_interface_realsmith_Sv1YC8ryev)+(-43))+(int)(perf_processor_interface_realsmith_Sv1YC8ryev)-(61))+perf_processor_interface_realsmith_Sv1YC8ryev)/*TAG3:END:perf_processor_interface_realsmith_Sv1YC8ryev*/ == 1) {
        } else {
        }
/*aft_stmt:2173*/
    }
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_KEgcHdf6SL(x) (x)
#define Tag2_realsmith_KEgcHdf6SL(x) (x)
#define Tag3_realsmith_KEgcHdf6SL(x) (x)
#define Tag4_realsmith_KEgcHdf6SL(x) (x)
#include "stdbool.h"
struct sdio_data_9f40qk {
    long sys_sdio_irq_thd_realsmith_KEgcHdf6SL;
};
struct dvobj_priv_9f40qk {
    struct sdio_data_9f40qk intf_data_realsmith_KEgcHdf6SL;
};
int realsmith_KEgcHdf6SL(long sdio_data_sys_sdio_irq_thd_realsmith_KEgcHdf6SL, long current_realsmith_KEgcHdf6SL) {
    struct dvobj_priv_9f40qk dvobj_realsmith_KEgcHdf6SL;
    /*bef_stmt:725*/
dvobj_realsmith_KEgcHdf6SL.intf_data_realsmith_KEgcHdf6SL.sys_sdio_irq_thd_realsmith_KEgcHdf6SL = Tag1_realsmith_KEgcHdf6SL(/*long:809:809:725:e*/sdio_data_sys_sdio_irq_thd_realsmith_KEgcHdf6SL);
/*aft_stmt:725*/
    /*bef_stmt:799*/
/*bef_stmt:799*/
/*bef_stmt:799*/
if (Tag2_realsmith_KEgcHdf6SL(/*long:809:809:799:e*/dvobj_realsmith_KEgcHdf6SL.intf_data_realsmith_KEgcHdf6SL.sys_sdio_irq_thd_realsmith_KEgcHdf6SL) && Tag3_realsmith_KEgcHdf6SL(/*long:809:809:799:e*/dvobj_realsmith_KEgcHdf6SL.intf_data_realsmith_KEgcHdf6SL.sys_sdio_irq_thd_realsmith_KEgcHdf6SL) == Tag4_realsmith_KEgcHdf6SL(/*long:809:809:799:e*/current_realsmith_KEgcHdf6SL))
        return 0;
/*aft_stmt:799*/
/*aft_stmt:799*/
/*aft_stmt:799*/
    return 1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_QVxHBQxHWm(x) (x)
#define Tag2_realsmith_QVxHBQxHWm(x) (x)
#define Tag3_realsmith_QVxHBQxHWm(x) (x)
#define Tag4_realsmith_QVxHBQxHWm(x) (x)
#define Tag5_realsmith_QVxHBQxHWm(x) (x)
#include "stdint.h"
unsigned short int realsmith_QVxHBQxHWm(int norm_realsmith_QVxHBQxHWm) {
    /*bef_stmt:1988*/
if (Tag1_realsmith_QVxHBQxHWm(/*int:2125:2125:1988:e*/norm_realsmith_QVxHBQxHWm) & 0x0001)
        return 0x00b8;
/*aft_stmt:1988*/
    /*bef_stmt:2016*/
if (Tag2_realsmith_QVxHBQxHWm(/*int:2125:2125:2016:e*/norm_realsmith_QVxHBQxHWm) & 0x0004)
        return 0x00ee;
/*aft_stmt:2016*/
    /*bef_stmt:2044*/
if (Tag3_realsmith_QVxHBQxHWm(/*int:2125:2125:2044:e*/norm_realsmith_QVxHBQxHWm) & 0x0020)
        return 0x00ff;
/*aft_stmt:2044*/
    /*bef_stmt:2072*/
if (Tag4_realsmith_QVxHBQxHWm(/*int:2125:2125:2072:e*/norm_realsmith_QVxHBQxHWm) & 0x0002)
        return 0x00a8;
/*aft_stmt:2072*/
    /*bef_stmt:2112*/
if (Tag5_realsmith_QVxHBQxHWm(/*int:2125:2125:2112:e*/norm_realsmith_QVxHBQxHWm) & (0x0010 | 0x0008))
        return 0x00bc;
/*aft_stmt:2112*/
    return 0x0000;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_NsP23Kmzj6(x) (x)
#define Tag2_realsmith_NsP23Kmzj6(x) (x)
#define Tag3_realsmith_NsP23Kmzj6(x) (x)
#define Tag4_realsmith_NsP23Kmzj6(x) (x)
#define Tag5_realsmith_NsP23Kmzj6(x) (x)
#define Tag6_realsmith_NsP23Kmzj6(x) (x)
#define Tag7_realsmith_NsP23Kmzj6(x) (x)
#define Tag8_realsmith_NsP23Kmzj6(x) (x)
#define Tag9_realsmith_NsP23Kmzj6(x) (x)
#define Tag10_realsmith_NsP23Kmzj6(x) (x)
#define Tag11_realsmith_NsP23Kmzj6(x) (x)
#define Tag12_realsmith_NsP23Kmzj6(x) (x)
#define Tag13_realsmith_NsP23Kmzj6(x) (x)
#include "stdlib.h"
#include "stdint.h"
int realsmith_NsP23Kmzj6(int count_ctl_realsmith_NsP23Kmzj6, int count_hz_realsmith_NsP23Kmzj6, int count_realsmith_NsP23Kmzj6, int compare_realsmith_NsP23Kmzj6, int cause_realsmith_NsP23Kmzj6) {
    /*bef_stmt:17562*/
int changed_realsmith_NsP23Kmzj6 = Tag1_realsmith_NsP23Kmzj6(/*int:17939:17939:17562:e*/count_ctl_realsmith_NsP23Kmzj6) ^ 1;
/*aft_stmt:17562*/
    int delta_realsmith_NsP23Kmzj6;
    int expire_realsmith_NsP23Kmzj6, now_realsmith_NsP23Kmzj6;
    /*bef_stmt:17649*/
if (Tag2_realsmith_NsP23Kmzj6(/*int:17939:17939:17649:e*/changed_realsmith_NsP23Kmzj6) & ~1)
        return -1;
/*aft_stmt:17649*/
    /*bef_stmt:17929*/
if (Tag3_realsmith_NsP23Kmzj6(/*int:17939:17939:17929:e*/changed_realsmith_NsP23Kmzj6) & 1) {
        /*bef_stmt:17920*/
/*bef_stmt:17920*/
if (Tag4_realsmith_NsP23Kmzj6(/*int:17939:17939:17920:e*/cause_realsmith_NsP23Kmzj6) & 1) {
            /*bef_stmt:17704*/
if (Tag5_realsmith_NsP23Kmzj6(/*int:17939:17939:17704:e*/count_ctl_realsmith_NsP23Kmzj6) & 1)
                return 0;
/*aft_stmt:17704*/
        } else if (Tag6_realsmith_NsP23Kmzj6(/*int:17939:17939:17920:e*/count_ctl_realsmith_NsP23Kmzj6) & 1) {
            return 0;
        } else {
            /*bef_stmt:17777*/
/*bef_stmt:17777*/
delta_realsmith_NsP23Kmzj6 = (Tag7_realsmith_NsP23Kmzj6(/*int:17939:17939:17777:e*/compare_realsmith_NsP23Kmzj6) - Tag8_realsmith_NsP23Kmzj6(/*int:17939:17939:17777:e*/count_realsmith_NsP23Kmzj6) - 1) + 1;
/*aft_stmt:17777*/
/*aft_stmt:17777*/
            /*bef_stmt:17841*/
/*bef_stmt:17841*/
delta_realsmith_NsP23Kmzj6 = (int)((unsigned long int)Tag9_realsmith_NsP23Kmzj6(/*int:17939:17939:17841:e*/delta_realsmith_NsP23Kmzj6) * 1000000000 / Tag10_realsmith_NsP23Kmzj6(/*int:17939:17939:17841:e*/count_hz_realsmith_NsP23Kmzj6));
/*aft_stmt:17841*/
/*aft_stmt:17841*/
            /*bef_stmt:17856*/
expire_realsmith_NsP23Kmzj6 = Tag11_realsmith_NsP23Kmzj6(/*int:17939:17939:17856:e*/delta_realsmith_NsP23Kmzj6);
/*aft_stmt:17856*/
            now_realsmith_NsP23Kmzj6 = 0;
            /*bef_stmt:17896*/
/*bef_stmt:17896*/
if (Tag12_realsmith_NsP23Kmzj6(/*int:17939:17939:17896:e*/now_realsmith_NsP23Kmzj6) >= Tag13_realsmith_NsP23Kmzj6(/*int:17939:17939:17896:e*/expire_realsmith_NsP23Kmzj6))
                return 1;
/*aft_stmt:17896*/
/*aft_stmt:17896*/
            return 0;
        }
/*aft_stmt:17920*/
/*aft_stmt:17920*/
    }
/*aft_stmt:17929*/
    return 0;
}



#include "stdlib.h"
int realsmith_kDC0e3Q1UX(int freq_to_set_realsmith_kDC0e3Q1UX, int *flag_realsmith_kDC0e3Q1UX, int *tx_frq_realsmith_kDC0e3Q1UX, int *pwr_lvl_realsmith_kDC0e3Q1UX, int *preemph_realsmith_kDC0e3Q1UX, int *audio_io_realsmith_kDC0e3Q1UX, int *aud_mode_realsmith_kDC0e3Q1UX, int *rds_flag_realsmith_kDC0e3Q1UX) {
    int FM_CORE_TX_XMITING_realsmith_kDC0e3Q1UX = 1;
    int FM_FR_EVENT_realsmith_kDC0e3Q1UX = 2;
    int FM_BL_EVENT_realsmith_kDC0e3Q1UX = 4;
    int INT_MASK_SET_realsmith_kDC0e3Q1UX = 5;
    int CHANL_SET_realsmith_kDC0e3Q1UX = 6;
    int REG_WR_realsmith_kDC0e3Q1UX = 7;
    int FM_STEREO_MODE_realsmith_kDC0e3Q1UX = 8;
    int FM_RDS_DISABLE_realsmith_kDC0e3Q1UX = 9;
    int payload_realsmith_kDC0e3Q1UX, chanl_index_realsmith_kDC0e3Q1UX;
    int ret_realsmith_kDC0e3Q1UX;
    if (*flag_realsmith_kDC0e3Q1UX & FM_CORE_TX_XMITING_realsmith_kDC0e3Q1UX) {
        *flag_realsmith_kDC0e3Q1UX &= ~FM_CORE_TX_XMITING_realsmith_kDC0e3Q1UX;
    }
    payload_realsmith_kDC0e3Q1UX = (FM_FR_EVENT_realsmith_kDC0e3Q1UX | FM_BL_EVENT_realsmith_kDC0e3Q1UX);
    ret_realsmith_kDC0e3Q1UX = 0;
    if (ret_realsmith_kDC0e3Q1UX < 0)
        return ret_realsmith_kDC0e3Q1UX;
    *tx_frq_realsmith_kDC0e3Q1UX = freq_to_set_realsmith_kDC0e3Q1UX;
    chanl_index_realsmith_kDC0e3Q1UX = freq_to_set_realsmith_kDC0e3Q1UX / 10;
    payload_realsmith_kDC0e3Q1UX = chanl_index_realsmith_kDC0e3Q1UX;
    ret_realsmith_kDC0e3Q1UX = 0;
    if (ret_realsmith_kDC0e3Q1UX < 0)
        return ret_realsmith_kDC0e3Q1UX;
    *pwr_lvl_realsmith_kDC0e3Q1UX = *pwr_lvl_realsmith_kDC0e3Q1UX;
    *preemph_realsmith_kDC0e3Q1UX = *preemph_realsmith_kDC0e3Q1UX;
    *audio_io_realsmith_kDC0e3Q1UX = 0x01;
    *flag_realsmith_kDC0e3Q1UX |= FM_CORE_TX_XMITING_realsmith_kDC0e3Q1UX;
    *aud_mode_realsmith_kDC0e3Q1UX = FM_STEREO_MODE_realsmith_kDC0e3Q1UX;
    *rds_flag_realsmith_kDC0e3Q1UX = FM_RDS_DISABLE_realsmith_kDC0e3Q1UX;
    return 0;
}
int realsmith_proxy_eDxVLhNhwS(int p_0_AhFKdFjbQG, int p_1_Hjy1BqYDzI, int p_2_WzsMQsrfqm, int p_3_brM4VxjjOh, int p_4_hkTLlJW730, int p_5_udQtEup1ys, int p_6_0EkUB5B6gk, int p_7_Sob7nw7CEI) {
int proxy_atQVXfSOLa[15] = { 76, p_2_WzsMQsrfqm, 19, 72, p_2_WzsMQsrfqm, p_2_WzsMQsrfqm, p_2_WzsMQsrfqm, p_2_WzsMQsrfqm, p_2_WzsMQsrfqm, 56, 92, p_2_WzsMQsrfqm, 83, 48, p_2_WzsMQsrfqm };
int proxy_3fEHDTLaJf[16] = { 43, 98, p_7_Sob7nw7CEI, p_7_Sob7nw7CEI, p_7_Sob7nw7CEI, p_7_Sob7nw7CEI, 20, p_7_Sob7nw7CEI, p_7_Sob7nw7CEI, p_7_Sob7nw7CEI, p_7_Sob7nw7CEI, 38, p_7_Sob7nw7CEI, 51, 15, 44 };
int proxy_ret_taZ8m10nRI = realsmith_kDC0e3Q1UX(p_0_AhFKdFjbQG, &(p_1_Hjy1BqYDzI), proxy_atQVXfSOLa, &(p_3_brM4VxjjOh), &(p_4_hkTLlJW730), &(p_5_udQtEup1ys), &(p_6_0EkUB5B6gk), proxy_3fEHDTLaJf);
return proxy_ret_taZ8m10nRI;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_RsmSsZc7DJ(x) (x)
#define Tag2_realsmith_RsmSsZc7DJ(x) (x)
#define Tag3_realsmith_RsmSsZc7DJ(x) (x)
#define Tag4_realsmith_RsmSsZc7DJ(x) (x)
#define Tag5_realsmith_RsmSsZc7DJ(x) (x)
#include "stdlib.h"
int realsmith_RsmSsZc7DJ(int resource_realsmith_RsmSsZc7DJ, int new_rlim_realsmith_RsmSsZc7DJ) {
    int result_realsmith_RsmSsZc7DJ = 0;
    /*bef_stmt:17209*/
/*bef_stmt:17209*/
if (Tag1_realsmith_RsmSsZc7DJ(/*int:17224:17224:17209:e*/resource_realsmith_RsmSsZc7DJ) == 1) {
        /*bef_stmt:17157*/
result_realsmith_RsmSsZc7DJ = Tag2_realsmith_RsmSsZc7DJ(/*int:17224:17224:17157:e*/new_rlim_realsmith_RsmSsZc7DJ) * 2;
/*aft_stmt:17157*/
    } else if (Tag3_realsmith_RsmSsZc7DJ(/*int:17224:17224:17209:e*/resource_realsmith_RsmSsZc7DJ) == 2) {
        /*bef_stmt:17198*/
result_realsmith_RsmSsZc7DJ = Tag4_realsmith_RsmSsZc7DJ(/*int:17224:17224:17198:e*/new_rlim_realsmith_RsmSsZc7DJ) / 2;
/*aft_stmt:17198*/
    }
/*aft_stmt:17209*/
/*aft_stmt:17209*/
    /*bef_stmt:17222*/
return Tag5_realsmith_RsmSsZc7DJ(/*int:17224:17224:17222:e*/result_realsmith_RsmSsZc7DJ);
/*aft_stmt:17222*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_zoThf4U29F(x) (x)
#define Tag2_realsmith_zoThf4U29F(x) (x)
#define Tag3_realsmith_zoThf4U29F(x) (x)
#define Tag4_realsmith_zoThf4U29F(x) (x)
#define Tag5_realsmith_zoThf4U29F(x) (x)
#define Tag6_realsmith_zoThf4U29F(x) (x)
#define Tag7_realsmith_zoThf4U29F(x) (x)
#define Tag8_realsmith_zoThf4U29F(x) (x)
#define Tag9_realsmith_zoThf4U29F(x) (x)
#define Tag10_realsmith_zoThf4U29F(x) (x)
#define Tag11_realsmith_zoThf4U29F(x) (x)
#define Tag12_realsmith_zoThf4U29F(x) (x)
#define Tag13_realsmith_zoThf4U29F(x) (x)
#define Tag14_realsmith_zoThf4U29F(x) (x)
#define Tag15_realsmith_zoThf4U29F(x) (x)
#define Tag16_realsmith_zoThf4U29F(x) (x)
#define Tag17_realsmith_zoThf4U29F(x) (x)
#include "stdint.h"
unsigned int realsmith_zoThf4U29F(int entry_type_realsmith_zoThf4U29F, int entry_attr_realsmith_zoThf4U29F) {
    /*bef_stmt:2463*/
/*bef_stmt:2463*/
/*bef_stmt:2463*/
/*bef_stmt:2463*/
/*bef_stmt:2463*/
/*bef_stmt:2463*/
if (Tag1_realsmith_zoThf4U29F(/*int:2475:2475:2463:e*/entry_type_realsmith_zoThf4U29F) == 0x0) {
        return 0xFFFFFFFF;
    } else if (Tag2_realsmith_zoThf4U29F(/*int:2475:2475:2463:e*/entry_type_realsmith_zoThf4U29F) < 0x80) {
        return 0xFFFFFFFE;
    } else if (Tag3_realsmith_zoThf4U29F(/*int:2475:2475:2463:e*/entry_type_realsmith_zoThf4U29F) == 0x80) {
        return 0xFFFFFFFD;
    } else if (Tag4_realsmith_zoThf4U29F(/*int:2475:2475:2463:e*/entry_type_realsmith_zoThf4U29F) < 0xA0) {
        /*bef_stmt:2211*/
/*bef_stmt:2211*/
/*bef_stmt:2211*/
/*bef_stmt:2211*/
if (Tag5_realsmith_zoThf4U29F(/*int:2475:2475:2211:e*/entry_type_realsmith_zoThf4U29F) == 0x81) {
            return 0xFFFFFFFC;
        } else if (Tag6_realsmith_zoThf4U29F(/*int:2475:2475:2211:e*/entry_type_realsmith_zoThf4U29F) == 0x82) {
            return 0xFFFFFFFB;
        } else if (Tag7_realsmith_zoThf4U29F(/*int:2475:2475:2211:e*/entry_type_realsmith_zoThf4U29F) == 0x83) {
            return 0xFFFFFFFA;
        } else if (Tag8_realsmith_zoThf4U29F(/*int:2475:2475:2211:e*/entry_type_realsmith_zoThf4U29F) == 0x85) {
            /*bef_stmt:2186*/
if (Tag9_realsmith_zoThf4U29F(/*int:2475:2475:2186:e*/entry_attr_realsmith_zoThf4U29F) & 0x10)
                return 0xFFFFFFF9;
            else
                return 0xFFFFFFF8;
/*aft_stmt:2186*/
        }
/*aft_stmt:2211*/
/*aft_stmt:2211*/
/*aft_stmt:2211*/
/*aft_stmt:2211*/
        return 0xFFFFFFF7;
    } else if (Tag10_realsmith_zoThf4U29F(/*int:2475:2475:2463:e*/entry_type_realsmith_zoThf4U29F) < 0xC0) {
        /*bef_stmt:2315*/
/*bef_stmt:2315*/
/*bef_stmt:2315*/
if (Tag11_realsmith_zoThf4U29F(/*int:2475:2475:2315:e*/entry_type_realsmith_zoThf4U29F) == 0xA0)
            return 0xFFFFFFF6;
        else if (Tag12_realsmith_zoThf4U29F(/*int:2475:2475:2315:e*/entry_type_realsmith_zoThf4U29F) == 0xA1)
            return 0xFFFFFFF5;
        else if (Tag13_realsmith_zoThf4U29F(/*int:2475:2475:2315:e*/entry_type_realsmith_zoThf4U29F) == 0xA2)
            return 0xFFFFFFF4;
/*aft_stmt:2315*/
/*aft_stmt:2315*/
/*aft_stmt:2315*/
        return 0xFFFFFFF3;
    } else if (Tag14_realsmith_zoThf4U29F(/*int:2475:2475:2463:e*/entry_type_realsmith_zoThf4U29F) < 0xE0) {
        /*bef_stmt:2419*/
/*bef_stmt:2419*/
/*bef_stmt:2419*/
if (Tag15_realsmith_zoThf4U29F(/*int:2475:2475:2419:e*/entry_type_realsmith_zoThf4U29F) == 0xC0)
            return 0xFFFFFFF2;
        else if (Tag16_realsmith_zoThf4U29F(/*int:2475:2475:2419:e*/entry_type_realsmith_zoThf4U29F) == 0xC1)
            return 0xFFFFFFF1;
        else if (Tag17_realsmith_zoThf4U29F(/*int:2475:2475:2419:e*/entry_type_realsmith_zoThf4U29F) == 0xC2)
            return 0xFFFFFFF0;
/*aft_stmt:2419*/
/*aft_stmt:2419*/
/*aft_stmt:2419*/
        return 0xFFFFFFEF;
    }
/*aft_stmt:2463*/
/*aft_stmt:2463*/
/*aft_stmt:2463*/
/*aft_stmt:2463*/
/*aft_stmt:2463*/
/*aft_stmt:2463*/
    return 0xFFFFFFEE;
}



#include "string.h"
int realsmith_eG7kFjF9E0(int *in_realsmith_eG7kFjF9E0, int *out_realsmith_eG7kFjF9E0, int sample_len_realsmith_eG7kFjF9E0, int sample_bytes_realsmith_eG7kFjF9E0) {
    switch (sample_bytes_realsmith_eG7kFjF9E0 - sample_len_realsmith_eG7kFjF9E0) {
    case -1:
        (memcpy(&out_realsmith_eG7kFjF9E0[1], in_realsmith_eG7kFjF9E0, (sample_len_realsmith_eG7kFjF9E0 - 1) * sizeof(int)));
        break;
    case 0:
        (memcpy(out_realsmith_eG7kFjF9E0, in_realsmith_eG7kFjF9E0, sample_len_realsmith_eG7kFjF9E0 * sizeof(int)));
        break;
    case 1:
        (memcpy(&out_realsmith_eG7kFjF9E0[1], in_realsmith_eG7kFjF9E0, 30 * sizeof(int)));
        out_realsmith_eG7kFjF9E0[31] = in_realsmith_eG7kFjF9E0[31];
        (memcpy(&out_realsmith_eG7kFjF9E0[32], &in_realsmith_eG7kFjF9E0[33], (sample_len_realsmith_eG7kFjF9E0 - 32) * sizeof(int)));
        break;
    case 2:
        (memcpy(out_realsmith_eG7kFjF9E0, in_realsmith_eG7kFjF9E0, 30 * sizeof(int)));
        out_realsmith_eG7kFjF9E0[30] = in_realsmith_eG7kFjF9E0[31];
        (memcpy(&out_realsmith_eG7kFjF9E0[31], &in_realsmith_eG7kFjF9E0[33], (sample_len_realsmith_eG7kFjF9E0 - 31) * sizeof(int)));
        break;
    default:
        break;
    }
    return 0;
}
int realsmith_proxy_G44TLMG6fI(int p_0_p9oAHnbFyB, int p_1_fSPSD7rpSH, int p_2_YEJmr1oPvp, int p_3_665w4GYfBe) {
int proxy_otWQRlYAsF[20] = { 90, 90, 9, 17, 95, 28, p_1_fSPSD7rpSH, p_1_fSPSD7rpSH, p_1_fSPSD7rpSH, p_1_fSPSD7rpSH, 97, 35, 95, p_1_fSPSD7rpSH, 79, 66, p_1_fSPSD7rpSH, p_1_fSPSD7rpSH, p_1_fSPSD7rpSH, 52 };
int proxy_ret_h6bpfyhQoJ = realsmith_eG7kFjF9E0(&(p_0_p9oAHnbFyB), proxy_otWQRlYAsF, p_2_YEJmr1oPvp, p_3_665w4GYfBe);
return proxy_ret_h6bpfyhQoJ;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_D6qZ4CHy7m(x) (x)
#define Tag2_realsmith_D6qZ4CHy7m(x) (x)
#define Tag3_realsmith_D6qZ4CHy7m(x) (x)
#define Tag4_realsmith_D6qZ4CHy7m(x) (x)
#include "stdint.h"
int realsmith_D6qZ4CHy7m(int index_realsmith_D6qZ4CHy7m, unsigned int data_realsmith_D6qZ4CHy7m) {
    /*bef_stmt:2014*/
unsigned short int low_realsmith_D6qZ4CHy7m = (unsigned short int)Tag1_realsmith_D6qZ4CHy7m(/*unsigned int:2105:2105:2014:e*/data_realsmith_D6qZ4CHy7m);
/*aft_stmt:2014*/
    /*bef_stmt:2064*/
unsigned short int high_realsmith_D6qZ4CHy7m = (unsigned short int)(Tag2_realsmith_D6qZ4CHy7m(/*unsigned int:2105:2105:2064:e*/data_realsmith_D6qZ4CHy7m) >> 16);
/*aft_stmt:2064*/
    /*bef_stmt:2103*/
/*bef_stmt:2103*/
return (Tag3_realsmith_D6qZ4CHy7m(/*unsigned short:2105:2105:2103:e*/low_realsmith_D6qZ4CHy7m) << 16) | Tag4_realsmith_D6qZ4CHy7m(/*unsigned short:2105:2105:2103:e*/high_realsmith_D6qZ4CHy7m);
/*aft_stmt:2103*/
/*aft_stmt:2103*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_BCNxF54gU1(x) (x)
#define Tag2_realsmith_BCNxF54gU1(x) (x)
#define Tag3_realsmith_BCNxF54gU1(x) (x)
#define Tag4_realsmith_BCNxF54gU1(x) (x)
#include "stddef.h"
int realsmith_BCNxF54gU1(int handler_index_realsmith_BCNxF54gU1, int handler_value_realsmith_BCNxF54gU1) {
    long unsigned int rx_handlers_realsmith_BCNxF54gU1[1] = {0};
    /*bef_stmt:854*/
if (Tag1_realsmith_BCNxF54gU1(/*int:884:884:854:e*/handler_index_realsmith_BCNxF54gU1) == 0) {
        /*bef_stmt:847*/
/*bef_stmt:847*/
rx_handlers_realsmith_BCNxF54gU1[Tag2_realsmith_BCNxF54gU1(/*int:884:884:847:e*/handler_index_realsmith_BCNxF54gU1)] = Tag3_realsmith_BCNxF54gU1(/*int:884:884:847:e*/handler_value_realsmith_BCNxF54gU1);
/*aft_stmt:847*/
/*aft_stmt:847*/
    }
/*aft_stmt:854*/
    /*bef_stmt:882*/
return rx_handlers_realsmith_BCNxF54gU1[Tag4_realsmith_BCNxF54gU1(/*int:884:884:882:e*/handler_index_realsmith_BCNxF54gU1)];
/*aft_stmt:882*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_nW6tm5BcF5(x) (x)
#include "stdbool.h"
int realsmith_nW6tm5BcF5(int is_write_realsmith_nW6tm5BcF5, int vcpu_realsmith_nW6tm5BcF5, int params_realsmith_nW6tm5BcF5) {
    /*bef_stmt:631*/
if (Tag1_realsmith_nW6tm5BcF5(/*int:637:637:631:e*/is_write_realsmith_nW6tm5BcF5)) {
        return 0;
    } else {
        return 0;
    }
/*aft_stmt:631*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_bmphng6sd1(x) (x)
#define Tag2_realsmith_proxy_bmphng6sd1(x) (x)
#define Tag3_realsmith_proxy_bmphng6sd1(x) (x)
#define Tag4_realsmith_proxy_bmphng6sd1(x) (x)
#include "stdlib.h"
struct scripting_ops_FFBNyv { int dummy_realsmith_Cw857Bo27s; };
struct script_spec_FFBNyv { int dummy_realsmith_Cw857Bo27s; };
int realsmith_Cw857Bo27s(int spec_len_realsmith_Cw857Bo27s, const char *spec_realsmith_Cw857Bo27s, int ops_dummy_realsmith_Cw857Bo27s) {
    struct script_spec_FFBNyv *s_realsmith_Cw857Bo27s = ((void*)0);
    /*bef_stmt:17272*/
if (Tag1_realsmith_proxy_bmphng6sd1(/*int:17383:17383:17272:e*/spec_len_realsmith_Cw857Bo27s) > 0) {
        return -1;
    }
/*aft_stmt:17272*/
    s_realsmith_Cw857Bo27s = (malloc(sizeof(struct script_spec_FFBNyv)));
    if (!s_realsmith_Cw857Bo27s) {
        return -1;
    }
    (free(s_realsmith_Cw857Bo27s));
    return 0;
}
int realsmith_proxy_bmphng6sd1(int p_0_fHycpSO2ip, char p_1_VhSJdMKa5b, int p_2_sdwiz09Jit) {
/*bef_stmt:17542*/
/*bef_stmt:17542*/
int proxy_ret_gIoafy3rjd = realsmith_Cw857Bo27s(Tag2_realsmith_proxy_bmphng6sd1(/*int:17554:17554:17542:e*/p_0_fHycpSO2ip), &(p_1_VhSJdMKa5b), Tag3_realsmith_proxy_bmphng6sd1(/*int:17554:17554:17542:e*/p_2_sdwiz09Jit));
/*aft_stmt:17542*/
/*aft_stmt:17542*/
/*bef_stmt:17552*/
return Tag4_realsmith_proxy_bmphng6sd1(/*int:17554:17554:17552:e*/proxy_ret_gIoafy3rjd);
/*aft_stmt:17552*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_RLPIrnJMl6(x) (x)
#define Tag2_realsmith_RLPIrnJMl6(x) (x)
#define Tag3_realsmith_RLPIrnJMl6(x) (x)
#define Tag4_realsmith_RLPIrnJMl6(x) (x)
#define Tag5_realsmith_RLPIrnJMl6(x) (x)
#define Tag6_realsmith_RLPIrnJMl6(x) (x)
#define Tag7_realsmith_RLPIrnJMl6(x) (x)
#define Tag8_realsmith_RLPIrnJMl6(x) (x)
#define Tag9_realsmith_RLPIrnJMl6(x) (x)
#define Tag10_realsmith_RLPIrnJMl6(x) (x)
#define Tag11_realsmith_RLPIrnJMl6(x) (x)
#define Tag12_realsmith_RLPIrnJMl6(x) (x)
#define Tag13_realsmith_RLPIrnJMl6(x) (x)
#define Tag14_realsmith_RLPIrnJMl6(x) (x)
#define Tag15_realsmith_RLPIrnJMl6(x) (x)
#define Tag16_realsmith_RLPIrnJMl6(x) (x)
#define Tag17_realsmith_RLPIrnJMl6(x) (x)
#include "stdbool.h"
_Bool realsmith_RLPIrnJMl6(unsigned long tp_realsmith_RLPIrnJMl6, unsigned long sp_realsmith_RLPIrnJMl6, unsigned long hardirq_stack_realsmith_RLPIrnJMl6, unsigned long softirq_stack_realsmith_RLPIrnJMl6, unsigned long cpu_realsmith_RLPIrnJMl6) {
    /*bef_stmt:666*/
unsigned long base_realsmith_RLPIrnJMl6 = Tag1_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:666:e*/tp_realsmith_RLPIrnJMl6);
/*aft_stmt:666*/
    /*bef_stmt:708*/
if (Tag2_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:708:e*/sp_realsmith_RLPIrnJMl6) & (16UL - 1))
        return 0;
/*aft_stmt:708*/
    /*bef_stmt:802*/
/*bef_stmt:802*/
/*bef_stmt:802*/
/*bef_stmt:802*/
if (Tag3_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:802:e*/sp_realsmith_RLPIrnJMl6) >= (Tag4_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:802:e*/base_realsmith_RLPIrnJMl6) + sizeof(unsigned long)) && Tag5_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:802:e*/sp_realsmith_RLPIrnJMl6) <= (Tag6_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:802:e*/base_realsmith_RLPIrnJMl6) + 8192 - sizeof(unsigned long)))
        return 1;
/*aft_stmt:802*/
/*aft_stmt:802*/
/*aft_stmt:802*/
/*aft_stmt:802*/
    /*bef_stmt:1007*/
if (Tag7_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:1007:e*/hardirq_stack_realsmith_RLPIrnJMl6)) {
        /*bef_stmt:824*/
base_realsmith_RLPIrnJMl6 = Tag8_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:824:e*/hardirq_stack_realsmith_RLPIrnJMl6);
/*aft_stmt:824*/
        /*bef_stmt:903*/
/*bef_stmt:903*/
/*bef_stmt:903*/
/*bef_stmt:903*/
if (Tag9_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:903:e*/sp_realsmith_RLPIrnJMl6) >= Tag10_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:903:e*/base_realsmith_RLPIrnJMl6) && Tag11_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:903:e*/sp_realsmith_RLPIrnJMl6) <= (Tag12_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:903:e*/base_realsmith_RLPIrnJMl6) + 8192 - sizeof(unsigned long)))
            return 1;
/*aft_stmt:903*/
/*aft_stmt:903*/
/*aft_stmt:903*/
/*aft_stmt:903*/
        /*bef_stmt:918*/
base_realsmith_RLPIrnJMl6 = Tag13_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:918:e*/softirq_stack_realsmith_RLPIrnJMl6);
/*aft_stmt:918*/
        /*bef_stmt:997*/
/*bef_stmt:997*/
/*bef_stmt:997*/
/*bef_stmt:997*/
if (Tag14_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:997:e*/sp_realsmith_RLPIrnJMl6) >= Tag15_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:997:e*/base_realsmith_RLPIrnJMl6) && Tag16_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:997:e*/sp_realsmith_RLPIrnJMl6) <= (Tag17_realsmith_RLPIrnJMl6(/*unsigned long:1024:1024:997:e*/base_realsmith_RLPIrnJMl6) + 8192 - sizeof(unsigned long)))
            return 1;
/*aft_stmt:997*/
/*aft_stmt:997*/
/*aft_stmt:997*/
/*aft_stmt:997*/
    }
/*aft_stmt:1007*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Mk3GyjU678(x) (x)
#define Tag2_realsmith_Mk3GyjU678(x) (x)
#define Tag3_realsmith_Mk3GyjU678(x) (x)
#define Tag4_realsmith_Mk3GyjU678(x) (x)
#define Tag5_realsmith_Mk3GyjU678(x) (x)
#define Tag6_realsmith_Mk3GyjU678(x) (x)
#define Tag7_realsmith_Mk3GyjU678(x) (x)
#define Tag8_realsmith_Mk3GyjU678(x) (x)
#define Tag9_realsmith_Mk3GyjU678(x) (x)
#define Tag10_realsmith_Mk3GyjU678(x) (x)
#define Tag11_realsmith_Mk3GyjU678(x) (x)
#define Tag12_realsmith_Mk3GyjU678(x) (x)
#define Tag13_realsmith_Mk3GyjU678(x) (x)
#define Tag14_realsmith_Mk3GyjU678(x) (x)
#define Tag15_realsmith_Mk3GyjU678(x) (x)
#include "stdlib.h"
int realsmith_Mk3GyjU678(int upload_ret_realsmith_Mk3GyjU678, int sclk_limit_ret_realsmith_Mk3GyjU678, int uvd_limit_ret_realsmith_Mk3GyjU678, int vce_limit_ret_realsmith_Mk3GyjU678, int acp_limit_ret_realsmith_Mk3GyjU678) {
    int ret_realsmith_Mk3GyjU678;
    /*bef_stmt:17187*/
ret_realsmith_Mk3GyjU678 = /*TAG1:STA*/((int)(realsmith_novjiEcu9Q((int)(upload_ret_realsmith_Mk3GyjU678)+(-52), (int)(upload_ret_realsmith_Mk3GyjU678)+(1))+(int)(upload_ret_realsmith_Mk3GyjU678)-(-1))+upload_ret_realsmith_Mk3GyjU678)/*TAG1:END:upload_ret_realsmith_Mk3GyjU678*/;
/*aft_stmt:17187*/
    /*bef_stmt:17207*/
/*bef_stmt:17207*/
if (/*TAG2:STA*/((int)(realsmith_MLfTLJKHCb((int)(ret_realsmith_Mk3GyjU678)+(-2), (int)(ret_realsmith_Mk3GyjU678)+(25))+(int)(ret_realsmith_Mk3GyjU678)-(233))+ret_realsmith_Mk3GyjU678)/*TAG2:END:ret_realsmith_Mk3GyjU678*/)
        return /*TAG3:STA*/((int)(realsmith_KIOYOjEwAi((int)(ret_realsmith_Mk3GyjU678)+(-67), (int)(ret_realsmith_Mk3GyjU678)+(-20), (unsigned int)(ret_realsmith_Mk3GyjU678)+(-58))+(int)(ret_realsmith_Mk3GyjU678)-(72))+ret_realsmith_Mk3GyjU678)/*TAG3:END:ret_realsmith_Mk3GyjU678*/;
/*aft_stmt:17207*/
/*aft_stmt:17207*/
    /*bef_stmt:17222*/
ret_realsmith_Mk3GyjU678 = Tag4_realsmith_Mk3GyjU678(/*int:17357:17357:17222:e*/sclk_limit_ret_realsmith_Mk3GyjU678);
/*aft_stmt:17222*/
    /*bef_stmt:17242*/
/*bef_stmt:17242*/
if (Tag5_realsmith_Mk3GyjU678(/*int:17357:17357:17242:e*/ret_realsmith_Mk3GyjU678))
        return Tag6_realsmith_Mk3GyjU678(/*int:17357:17357:17242:e*/ret_realsmith_Mk3GyjU678);
/*aft_stmt:17242*/
/*aft_stmt:17242*/
    /*bef_stmt:17257*/
ret_realsmith_Mk3GyjU678 = Tag7_realsmith_Mk3GyjU678(/*int:17357:17357:17257:e*/uvd_limit_ret_realsmith_Mk3GyjU678);
/*aft_stmt:17257*/
    /*bef_stmt:17277*/
/*bef_stmt:17277*/
if (Tag8_realsmith_Mk3GyjU678(/*int:17357:17357:17277:e*/ret_realsmith_Mk3GyjU678))
        return Tag9_realsmith_Mk3GyjU678(/*int:17357:17357:17277:e*/ret_realsmith_Mk3GyjU678);
/*aft_stmt:17277*/
/*aft_stmt:17277*/
    /*bef_stmt:17292*/
ret_realsmith_Mk3GyjU678 = Tag10_realsmith_Mk3GyjU678(/*int:17357:17357:17292:e*/vce_limit_ret_realsmith_Mk3GyjU678);
/*aft_stmt:17292*/
    /*bef_stmt:17312*/
/*bef_stmt:17312*/
if (Tag11_realsmith_Mk3GyjU678(/*int:17357:17357:17312:e*/ret_realsmith_Mk3GyjU678))
        return Tag12_realsmith_Mk3GyjU678(/*int:17357:17357:17312:e*/ret_realsmith_Mk3GyjU678);
/*aft_stmt:17312*/
/*aft_stmt:17312*/
    /*bef_stmt:17327*/
ret_realsmith_Mk3GyjU678 = Tag13_realsmith_Mk3GyjU678(/*int:17357:17357:17327:e*/acp_limit_ret_realsmith_Mk3GyjU678);
/*aft_stmt:17327*/
    /*bef_stmt:17347*/
/*bef_stmt:17347*/
if (Tag14_realsmith_Mk3GyjU678(/*int:17357:17357:17347:e*/ret_realsmith_Mk3GyjU678))
        return Tag15_realsmith_Mk3GyjU678(/*int:17357:17357:17347:e*/ret_realsmith_Mk3GyjU678);
/*aft_stmt:17347*/
/*aft_stmt:17347*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_NEjEIVFnHA(x) (x)
#define Tag2_realsmith_NEjEIVFnHA(x) (x)
#define Tag3_realsmith_NEjEIVFnHA(x) (x)
#define Tag4_realsmith_NEjEIVFnHA(x) (x)
#define Tag5_realsmith_NEjEIVFnHA(x) (x)
#define Tag6_realsmith_NEjEIVFnHA(x) (x)
#include "stdlib.h"
typedef struct {
    int ie_length_realsmith_NEjEIVFnHA;
    int ies_realsmith_NEjEIVFnHA;
} Network_39a2bV;
typedef struct {
    Network_39a2bV network_realsmith_NEjEIVFnHA;
} CurNetwork_39a2bV;
typedef struct {
    CurNetwork_39a2bV cur_network_realsmith_NEjEIVFnHA;
} MlmePriv_39a2bV;
int realsmith_NEjEIVFnHA(int fw_state_realsmith_NEjEIVFnHA, int pnetwork_realsmith_NEjEIVFnHA, int cur_network_ies_realsmith_NEjEIVFnHA, int cur_network_ie_length_realsmith_NEjEIVFnHA) {
    int _FW_LINKED_realsmith_NEjEIVFnHA = 1;
    /*bef_stmt:17449*/
/*bef_stmt:17449*/
/*bef_stmt:17449*/
/*bef_stmt:17449*/
if (Tag1_realsmith_NEjEIVFnHA(/*int:17462:17462:17449:e*/fw_state_realsmith_NEjEIVFnHA) == Tag2_realsmith_NEjEIVFnHA(/*int:17462:17462:17449:e*/_FW_LINKED_realsmith_NEjEIVFnHA) && Tag3_realsmith_NEjEIVFnHA(/*int:17462:17462:17449:e*/cur_network_ies_realsmith_NEjEIVFnHA) == Tag4_realsmith_NEjEIVFnHA(/*int:17462:17462:17449:e*/pnetwork_realsmith_NEjEIVFnHA)) {
        cur_network_ie_length_realsmith_NEjEIVFnHA += 1;
        /*bef_stmt:17443*/
return Tag5_realsmith_NEjEIVFnHA(/*int:17462:17462:17443:e*/cur_network_ie_length_realsmith_NEjEIVFnHA);
/*aft_stmt:17443*/
    }
/*aft_stmt:17449*/
/*aft_stmt:17449*/
/*aft_stmt:17449*/
/*aft_stmt:17449*/
    /*bef_stmt:17460*/
return Tag6_realsmith_NEjEIVFnHA(/*int:17462:17462:17460:e*/cur_network_ie_length_realsmith_NEjEIVFnHA);
/*aft_stmt:17460*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_RGjFxF8tfq(x) (x)
#define Tag2_realsmith_RGjFxF8tfq(x) (x)
#define Tag3_realsmith_RGjFxF8tfq(x) (x)
#define Tag4_realsmith_RGjFxF8tfq(x) (x)
#include "stdbool.h"
int realsmith_RGjFxF8tfq(int kvm_vcpu_apicv_active_realsmith_RGjFxF8tfq, int vgif_enabled_realsmith_RGjFxF8tfq, int gif_set_realsmith_RGjFxF8tfq, int nested_svm_intr_realsmith_RGjFxF8tfq) {
    /*bef_stmt:638*/
if (Tag1_realsmith_RGjFxF8tfq(/*int:694:694:638:e*/kvm_vcpu_apicv_active_realsmith_RGjFxF8tfq))
        return 0;
/*aft_stmt:638*/
    /*bef_stmt:684*/
/*bef_stmt:684*/
/*bef_stmt:684*/
if ((Tag2_realsmith_RGjFxF8tfq(/*int:694:694:684:e*/vgif_enabled_realsmith_RGjFxF8tfq) || Tag3_realsmith_RGjFxF8tfq(/*int:694:694:684:e*/gif_set_realsmith_RGjFxF8tfq)) && Tag4_realsmith_RGjFxF8tfq(/*int:694:694:684:e*/nested_svm_intr_realsmith_RGjFxF8tfq)) {
        return 1;
    }
/*aft_stmt:684*/
/*aft_stmt:684*/
/*aft_stmt:684*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_8LBRU60OZb(x) (x)
#define Tag2_realsmith_8LBRU60OZb(x) (x)
#define Tag3_realsmith_8LBRU60OZb(x) (x)
#include "stdlib.h"
int realsmith_8LBRU60OZb(int mbxCommand_realsmith_8LBRU60OZb, int mbxOwner_realsmith_8LBRU60OZb) {
    int pmb_realsmith_8LBRU60OZb[2];
    /*bef_stmt:17151*/
pmb_realsmith_8LBRU60OZb[0] = Tag1_realsmith_8LBRU60OZb(/*int:17247:17247:17151:e*/mbxCommand_realsmith_8LBRU60OZb);
/*aft_stmt:17151*/
    /*bef_stmt:17177*/
pmb_realsmith_8LBRU60OZb[1] = Tag2_realsmith_8LBRU60OZb(/*int:17247:17247:17177:e*/mbxOwner_realsmith_8LBRU60OZb);
/*aft_stmt:17177*/
    pmb_realsmith_8LBRU60OZb[0] = 1;
    pmb_realsmith_8LBRU60OZb[1] = 2;
    /*bef_stmt:17245*/
return Tag3_realsmith_8LBRU60OZb(/*int:17247:17247:17245:e*/pmb_realsmith_8LBRU60OZb[0]);
/*aft_stmt:17245*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_HBepMK3lFX(x) (x)
#define Tag2_realsmith_HBepMK3lFX(x) (x)
#define Tag3_realsmith_HBepMK3lFX(x) (x)
#include "stdlib.h"
int realsmith_HBepMK3lFX(int authenc_realsmith_HBepMK3lFX, unsigned int authsize_realsmith_HBepMK3lFX) {
    /*bef_stmt:17174*/
/*bef_stmt:17174*/
/*bef_stmt:17174*/
if (Tag1_realsmith_HBepMK3lFX(/*unsigned int:17184:17184:17174:e*/authsize_realsmith_HBepMK3lFX) != 8 && Tag2_realsmith_HBepMK3lFX(/*unsigned int:17184:17184:17174:e*/authsize_realsmith_HBepMK3lFX) != 12 && Tag3_realsmith_HBepMK3lFX(/*unsigned int:17184:17184:17174:e*/authsize_realsmith_HBepMK3lFX) != 16) {
        return -1;
    }
/*aft_stmt:17174*/
/*aft_stmt:17174*/
/*aft_stmt:17174*/
    return 0;
}



#include "stdint.h"
int realsmith_SzEUGuNbRT(int irqflag_realsmith_SzEUGuNbRT, int mdev_irq_mask_0_realsmith_SzEUGuNbRT, int mdev_irq_mask_1_realsmith_SzEUGuNbRT, int mdev_irq_mask_2_realsmith_SzEUGuNbRT, int mdev_irq_mask_3_realsmith_SzEUGuNbRT, int mdev_irq_mask_4_realsmith_SzEUGuNbRT) {
    if (irqflag_realsmith_SzEUGuNbRT == 0x3f)
        return 6;
    for (unsigned int irq_realsmith_SzEUGuNbRT = 0; irq_realsmith_SzEUGuNbRT <= 4; irq_realsmith_SzEUGuNbRT++) {
        int mask_realsmith_SzEUGuNbRT = (1 << irqflag_realsmith_SzEUGuNbRT);
        if ((mdev_irq_mask_0_realsmith_SzEUGuNbRT & mask_realsmith_SzEUGuNbRT) || (mdev_irq_mask_1_realsmith_SzEUGuNbRT & mask_realsmith_SzEUGuNbRT) ||
            (mdev_irq_mask_2_realsmith_SzEUGuNbRT & mask_realsmith_SzEUGuNbRT) || (mdev_irq_mask_3_realsmith_SzEUGuNbRT & mask_realsmith_SzEUGuNbRT) ||
            (mdev_irq_mask_4_realsmith_SzEUGuNbRT & mask_realsmith_SzEUGuNbRT)) {
            return irq_realsmith_SzEUGuNbRT;
        }
    }
    return 5;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_SF0m1sPRyP(x) (x)
#define Tag2_realsmith_SF0m1sPRyP(x) (x)
#include "stdlib.h"
int realsmith_SF0m1sPRyP(int soc_reg_value_realsmith_SF0m1sPRyP) {
    int soc_realsmith_SF0m1sPRyP;
    /*bef_stmt:17116*/
soc_realsmith_SF0m1sPRyP = (Tag1_realsmith_SF0m1sPRyP(/*int:17129:17129:17116:e*/soc_reg_value_realsmith_SF0m1sPRyP) >> 8);
/*aft_stmt:17116*/
    /*bef_stmt:17127*/
return Tag2_realsmith_SF0m1sPRyP(/*int:17129:17129:17127:e*/soc_realsmith_SF0m1sPRyP);
/*aft_stmt:17127*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_NMvlIxzEPi(x) (x)
#define Tag2_realsmith_NMvlIxzEPi(x) (x)
#define Tag3_realsmith_NMvlIxzEPi(x) (x)
#define Tag4_realsmith_NMvlIxzEPi(x) (x)
#define Tag5_realsmith_NMvlIxzEPi(x) (x)
#include "stdlib.h"
struct ip_tunnel_Z6rgJi {
    int ip_tnl_net_id_realsmith_NMvlIxzEPi;
    int net_realsmith_NMvlIxzEPi;
};
struct ip_tunnel_net_Z6rgJi {
    int fb_tunnel_dev_realsmith_NMvlIxzEPi;
};
struct list_head_Z6rgJi {
    int dummy_realsmith_NMvlIxzEPi;
};
int realsmith_NMvlIxzEPi(int dev_id_realsmith_NMvlIxzEPi, int head_dummy_realsmith_NMvlIxzEPi, int tunnel_net_id_realsmith_NMvlIxzEPi, int net_realsmith_NMvlIxzEPi) {
    struct ip_tunnel_Z6rgJi tunnel_realsmith_NMvlIxzEPi;
    /*bef_stmt:17295*/
tunnel_realsmith_NMvlIxzEPi.ip_tnl_net_id_realsmith_NMvlIxzEPi = /*TAG1:STA*/((int)(realsmith_cXRcbIHqJc((unsigned int)(tunnel_net_id_realsmith_NMvlIxzEPi)+(9))+(int)(tunnel_net_id_realsmith_NMvlIxzEPi)-(11))+tunnel_net_id_realsmith_NMvlIxzEPi)/*TAG1:END:tunnel_net_id_realsmith_NMvlIxzEPi*/;
/*aft_stmt:17295*/
    /*bef_stmt:17328*/
tunnel_realsmith_NMvlIxzEPi.net_realsmith_NMvlIxzEPi = /*TAG2:STA*/((int)(realsmith_uiAiX822H3((int)(net_realsmith_NMvlIxzEPi)+(18), (int)(net_realsmith_NMvlIxzEPi)+(5), (int)(net_realsmith_NMvlIxzEPi)+(34), (int)(net_realsmith_NMvlIxzEPi)+(4), (int)(net_realsmith_NMvlIxzEPi)+(16))+(int)(net_realsmith_NMvlIxzEPi)-(52))+net_realsmith_NMvlIxzEPi)/*TAG2:END:net_realsmith_NMvlIxzEPi*/;
/*aft_stmt:17328*/
    struct ip_tunnel_net_Z6rgJi itn_realsmith_NMvlIxzEPi;
    /*bef_stmt:17375*/
itn_realsmith_NMvlIxzEPi.fb_tunnel_dev_realsmith_NMvlIxzEPi = /*TAG3:STA*/((int)(realsmith_BneHjr132y((int)(dev_id_realsmith_NMvlIxzEPi)+(-10))+(int)(dev_id_realsmith_NMvlIxzEPi)-(27))+dev_id_realsmith_NMvlIxzEPi)/*TAG3:END:dev_id_realsmith_NMvlIxzEPi*/;
/*aft_stmt:17375*/
    /*bef_stmt:17424*/
/*bef_stmt:17424*/
if (/*TAG4:STA*/((int)(realsmith_BBU0WoUms9((int)(itn_realsmith_NMvlIxzEPi.fb_tunnel_dev_realsmith_NMvlIxzEPi)+(52), (int)(itn_realsmith_NMvlIxzEPi.fb_tunnel_dev_realsmith_NMvlIxzEPi)+(54))+(int)(itn_realsmith_NMvlIxzEPi.fb_tunnel_dev_realsmith_NMvlIxzEPi)-(10))+itn_realsmith_NMvlIxzEPi.fb_tunnel_dev_realsmith_NMvlIxzEPi)/*TAG4:END:itn_realsmith_NMvlIxzEPi.fb_tunnel_dev_realsmith_NMvlIxzEPi*/ != /*TAG5:STA*/((int)(realsmith_pnvMJsnY6y((int)(dev_id_realsmith_NMvlIxzEPi)+(62))+(int)(dev_id_realsmith_NMvlIxzEPi)-(85))+dev_id_realsmith_NMvlIxzEPi)/*TAG5:END:dev_id_realsmith_NMvlIxzEPi*/) {
        return 1;
    }
/*aft_stmt:17424*/
/*aft_stmt:17424*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_YI1GIl6fw8(x) (x)
#define Tag2_realsmith_YI1GIl6fw8(x) (x)
#define Tag3_realsmith_YI1GIl6fw8(x) (x)
#define Tag4_realsmith_YI1GIl6fw8(x) (x)
#define Tag5_realsmith_YI1GIl6fw8(x) (x)
#define Tag6_realsmith_YI1GIl6fw8(x) (x)
#include "stdlib.h"
int realsmith_YI1GIl6fw8(int curr_exists_realsmith_YI1GIl6fw8, int top_seen_realsmith_YI1GIl6fw8, unsigned long status_realsmith_YI1GIl6fw8) {
    int result_realsmith_YI1GIl6fw8 = 0;
    /*bef_stmt:17254*/
if (Tag1_realsmith_YI1GIl6fw8(/*int:17279:17279:17254:e*/curr_exists_realsmith_YI1GIl6fw8)) {
        /*bef_stmt:17207*/
if ((Tag2_realsmith_YI1GIl6fw8(/*unsigned long:17279:17279:17207:e*/status_realsmith_YI1GIl6fw8) & 0x10) == 0x00) {
            top_seen_realsmith_YI1GIl6fw8 = 1;
            /*bef_stmt:17201*/
return Tag3_realsmith_YI1GIl6fw8(/*int:17279:17279:17201:e*/result_realsmith_YI1GIl6fw8);
/*aft_stmt:17201*/
        }
/*aft_stmt:17207*/
        /*bef_stmt:17233*/
if (!Tag4_realsmith_YI1GIl6fw8(/*int:17279:17279:17233:e*/top_seen_realsmith_YI1GIl6fw8)) {
            /*bef_stmt:17228*/
return Tag5_realsmith_YI1GIl6fw8(/*int:17279:17279:17228:e*/result_realsmith_YI1GIl6fw8);
/*aft_stmt:17228*/
        }
/*aft_stmt:17233*/
        result_realsmith_YI1GIl6fw8 = 1;
    }
/*aft_stmt:17254*/
    result_realsmith_YI1GIl6fw8 = 2;
    /*bef_stmt:17277*/
return Tag6_realsmith_YI1GIl6fw8(/*int:17279:17279:17277:e*/result_realsmith_YI1GIl6fw8);
/*aft_stmt:17277*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_fRMafg8C2Q(x) (x)
#define Tag2_realsmith_fRMafg8C2Q(x) (x)
#define Tag3_realsmith_fRMafg8C2Q(x) (x)
#define Tag4_realsmith_fRMafg8C2Q(x) (x)
#include "stdint.h"
int realsmith_fRMafg8C2Q(int drp_control_realsmith_fRMafg8C2Q, int type_realsmith_fRMafg8C2Q) {
    /*bef_stmt:2014*/
unsigned short int drp_control_le_realsmith_fRMafg8C2Q = (unsigned short int)Tag1_realsmith_fRMafg8C2Q(/*int:2106:2106:2014:e*/drp_control_realsmith_fRMafg8C2Q);
/*aft_stmt:2014*/
    /*bef_stmt:2085*/
/*bef_stmt:2085*/
drp_control_le_realsmith_fRMafg8C2Q = (Tag2_realsmith_fRMafg8C2Q(/*unsigned short:2106:2106:2085:e*/drp_control_le_realsmith_fRMafg8C2Q) & ~(0x7 << 0)) | (Tag3_realsmith_fRMafg8C2Q(/*int:2106:2106:2085:e*/type_realsmith_fRMafg8C2Q) << 0);
/*aft_stmt:2085*/
/*aft_stmt:2085*/
    /*bef_stmt:2104*/
return (int)Tag4_realsmith_fRMafg8C2Q(/*unsigned short:2106:2106:2104:e*/drp_control_le_realsmith_fRMafg8C2Q);
/*aft_stmt:2104*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ZFvnMar7NR(x) (x)
#define Tag2_realsmith_ZFvnMar7NR(x) (x)
#define Tag3_realsmith_ZFvnMar7NR(x) (x)
#define Tag4_realsmith_ZFvnMar7NR(x) (x)
#define Tag5_realsmith_ZFvnMar7NR(x) (x)
#define Tag6_realsmith_ZFvnMar7NR(x) (x)
#define Tag7_realsmith_ZFvnMar7NR(x) (x)
#define Tag8_realsmith_ZFvnMar7NR(x) (x)
#define Tag9_realsmith_ZFvnMar7NR(x) (x)
#define Tag10_realsmith_ZFvnMar7NR(x) (x)
#include "stdlib.h"
int realsmith_ZFvnMar7NR(int cur_wireless_mode_realsmith_ZFvnMar7NR, int updateCap_realsmith_ZFvnMar7NR) {
    int preamble_mode_realsmith_ZFvnMar7NR = 0;
    int slotTime_realsmith_ZFvnMar7NR = 0;
    int ShortPreamble_realsmith_ZFvnMar7NR;
    /*bef_stmt:17280*/
if (/*TAG1:STA*/((int)(realsmith_HBepMK3lFX((int)(updateCap_realsmith_ZFvnMar7NR)+(8), (unsigned int)(updateCap_realsmith_ZFvnMar7NR)+(30))+(int)(updateCap_realsmith_ZFvnMar7NR)-(62))+updateCap_realsmith_ZFvnMar7NR)/*TAG1:END:updateCap_realsmith_ZFvnMar7NR*/ & 0x0002) {
        /*bef_stmt:17223*/
if (/*TAG2:STA*/((int)(realsmith_NMvlIxzEPi((int)(updateCap_realsmith_ZFvnMar7NR)+(-52), (int)(updateCap_realsmith_ZFvnMar7NR)+(27), (int)(updateCap_realsmith_ZFvnMar7NR)+(-62), (int)(updateCap_realsmith_ZFvnMar7NR)+(-11))+(int)(updateCap_realsmith_ZFvnMar7NR)-(63))+preamble_mode_realsmith_ZFvnMar7NR)/*TAG2:END:preamble_mode_realsmith_ZFvnMar7NR*/ != 1) {
            ShortPreamble_realsmith_ZFvnMar7NR = 1;
            preamble_mode_realsmith_ZFvnMar7NR = 1;
        }
/*aft_stmt:17223*/
    } else {
        /*bef_stmt:17273*/
if (Tag3_realsmith_ZFvnMar7NR(/*int:17523:17523:17273:e*/preamble_mode_realsmith_ZFvnMar7NR) != 0) {
            ShortPreamble_realsmith_ZFvnMar7NR = 0;
            preamble_mode_realsmith_ZFvnMar7NR = 0;
        }
/*aft_stmt:17273*/
    }
/*aft_stmt:17280*/
    /*bef_stmt:17508*/
if (/*TAG4:STA*/((int)(realsmith_SzEUGuNbRT((int)(updateCap_realsmith_ZFvnMar7NR)+(-50), (int)(updateCap_realsmith_ZFvnMar7NR)+(-45), (int)(updateCap_realsmith_ZFvnMar7NR)+(29), (int)(updateCap_realsmith_ZFvnMar7NR)+(9), (int)(updateCap_realsmith_ZFvnMar7NR)+(-28), (int)(updateCap_realsmith_ZFvnMar7NR)+(-36))+(int)(updateCap_realsmith_ZFvnMar7NR)-(68))+updateCap_realsmith_ZFvnMar7NR)/*TAG4:END:updateCap_realsmith_ZFvnMar7NR*/ & 0x0001) {
        slotTime_realsmith_ZFvnMar7NR = 0;
    } else {
        /*bef_stmt:17499*/
/*bef_stmt:17499*/
if (Tag5_realsmith_ZFvnMar7NR(/*int:17523:17523:17499:e*/cur_wireless_mode_realsmith_ZFvnMar7NR) & (0x0002 | 0x0004)) {
            /*bef_stmt:17427*/
if (Tag6_realsmith_ZFvnMar7NR(/*int:17523:17523:17427:e*/updateCap_realsmith_ZFvnMar7NR) & 0x0004) {
                /*bef_stmt:17385*/
if (Tag7_realsmith_ZFvnMar7NR(/*int:17523:17523:17385:e*/slotTime_realsmith_ZFvnMar7NR) != 1)
                    slotTime_realsmith_ZFvnMar7NR = 1;
/*aft_stmt:17385*/
            } else {
                /*bef_stmt:17420*/
if (Tag8_realsmith_ZFvnMar7NR(/*int:17523:17523:17420:e*/slotTime_realsmith_ZFvnMar7NR) != 0)
                    slotTime_realsmith_ZFvnMar7NR = 0;
/*aft_stmt:17420*/
            }
/*aft_stmt:17427*/
        } else if (Tag9_realsmith_ZFvnMar7NR(/*int:17523:17523:17499:e*/cur_wireless_mode_realsmith_ZFvnMar7NR) & (0x0001 | 0x0008)) {
            slotTime_realsmith_ZFvnMar7NR = 1;
        } else {
            slotTime_realsmith_ZFvnMar7NR = 0;
        }
/*aft_stmt:17499*/
/*aft_stmt:17499*/
    }
/*aft_stmt:17508*/
    /*bef_stmt:17521*/
return /*TAG10:STA*/((int)(realsmith_SF0m1sPRyP((int)(slotTime_realsmith_ZFvnMar7NR)+(27))+(int)(slotTime_realsmith_ZFvnMar7NR)-(0))+slotTime_realsmith_ZFvnMar7NR)/*TAG10:END:slotTime_realsmith_ZFvnMar7NR*/;
/*aft_stmt:17521*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_d11TUb8NaQ(x) (x)
#define Tag2_realsmith_d11TUb8NaQ(x) (x)
#define Tag3_realsmith_d11TUb8NaQ(x) (x)
#define Tag4_realsmith_d11TUb8NaQ(x) (x)
#define Tag5_realsmith_d11TUb8NaQ(x) (x)
#define Tag6_realsmith_d11TUb8NaQ(x) (x)
#define Tag7_realsmith_d11TUb8NaQ(x) (x)
#define Tag8_realsmith_d11TUb8NaQ(x) (x)
#define Tag9_realsmith_d11TUb8NaQ(x) (x)
#define Tag10_realsmith_d11TUb8NaQ(x) (x)
#define Tag11_realsmith_d11TUb8NaQ(x) (x)
#define Tag12_realsmith_d11TUb8NaQ(x) (x)
#define Tag13_realsmith_d11TUb8NaQ(x) (x)
#include "stdlib.h"
#include "stdint.h"
int realsmith_d11TUb8NaQ(int num_queues_realsmith_d11TUb8NaQ) {
    int rc_realsmith_d11TUb8NaQ, i_realsmith_d11TUb8NaQ;
    unsigned int val_realsmith_d11TUb8NaQ;
    unsigned int *ena_dev_realsmith_d11TUb8NaQ = (malloc(sizeof(unsigned int) * 128));
    rc_realsmith_d11TUb8NaQ = 0;
    /*bef_stmt:17634*/
if (Tag1_realsmith_d11TUb8NaQ(/*int:17959:17959:17634:e*/rc_realsmith_d11TUb8NaQ)) {
        (free(ena_dev_realsmith_d11TUb8NaQ));
        /*bef_stmt:17628*/
return Tag2_realsmith_d11TUb8NaQ(/*int:17959:17959:17628:e*/rc_realsmith_d11TUb8NaQ);
/*aft_stmt:17628*/
    }
/*aft_stmt:17634*/
    /*bef_stmt:17734*/
for (i_realsmith_d11TUb8NaQ = 0; Tag3_realsmith_d11TUb8NaQ(/*int:17959:17959:17734:e*/i_realsmith_d11TUb8NaQ) < 128; i_realsmith_d11TUb8NaQ++) {
        /*bef_stmt:17697*/
/*bef_stmt:17697*/
val_realsmith_d11TUb8NaQ = Tag4_realsmith_d11TUb8NaQ(/*int:17959:17959:17697:e*/i_realsmith_d11TUb8NaQ) % Tag5_realsmith_d11TUb8NaQ(/*int:17959:17959:17697:e*/num_queues_realsmith_d11TUb8NaQ);
/*aft_stmt:17697*/
/*aft_stmt:17697*/
        /*bef_stmt:17726*/
/*bef_stmt:17726*/
ena_dev_realsmith_d11TUb8NaQ[Tag6_realsmith_d11TUb8NaQ(/*int:17959:17959:17726:e*/i_realsmith_d11TUb8NaQ)] = Tag7_realsmith_d11TUb8NaQ(/*unsigned int:17959:17959:17726:e*/val_realsmith_d11TUb8NaQ);
/*aft_stmt:17726*/
/*aft_stmt:17726*/
    }
/*aft_stmt:17734*/
    rc_realsmith_d11TUb8NaQ = 0;
    /*bef_stmt:17827*/
/*bef_stmt:17827*/
if (Tag8_realsmith_d11TUb8NaQ(/*int:17959:17959:17827:e*/rc_realsmith_d11TUb8NaQ) && Tag9_realsmith_d11TUb8NaQ(/*int:17959:17959:17827:e*/rc_realsmith_d11TUb8NaQ) != - -1) {
        (free(ena_dev_realsmith_d11TUb8NaQ));
        /*bef_stmt:17821*/
return Tag10_realsmith_d11TUb8NaQ(/*int:17959:17959:17821:e*/rc_realsmith_d11TUb8NaQ);
/*aft_stmt:17821*/
    }
/*aft_stmt:17827*/
/*aft_stmt:17827*/
    rc_realsmith_d11TUb8NaQ = 0;
    /*bef_stmt:17920*/
/*bef_stmt:17920*/
if (Tag11_realsmith_d11TUb8NaQ(/*int:17959:17959:17920:e*/rc_realsmith_d11TUb8NaQ) && Tag12_realsmith_d11TUb8NaQ(/*int:17959:17959:17920:e*/rc_realsmith_d11TUb8NaQ) != - -1) {
        (free(ena_dev_realsmith_d11TUb8NaQ));
        /*bef_stmt:17911*/
return Tag13_realsmith_d11TUb8NaQ(/*int:17959:17959:17911:e*/rc_realsmith_d11TUb8NaQ);
/*aft_stmt:17911*/
    }
/*aft_stmt:17920*/
/*aft_stmt:17920*/
    (free(ena_dev_realsmith_d11TUb8NaQ));
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_rawxljeqIX(x) (x)
#include "stdlib.h"
int realsmith_rawxljeqIX(int wpa_enabled_realsmith_rawxljeqIX, int disassociated_realsmith_rawxljeqIX) {
    wpa_enabled_realsmith_rawxljeqIX = 1;
    disassociated_realsmith_rawxljeqIX = 0;
    /*bef_stmt:17131*/
return /*TAG1:STA*/((int)(realsmith_8LBRU60OZb((int)(disassociated_realsmith_rawxljeqIX)+(10), (int)(disassociated_realsmith_rawxljeqIX)+(9))+(int)(disassociated_realsmith_rawxljeqIX)-(1))+disassociated_realsmith_rawxljeqIX)/*TAG1:END:disassociated_realsmith_rawxljeqIX*/;
/*aft_stmt:17131*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_qQvJpg8m8W(x) (x)
#include "stdlib.h"
struct cs42xx8_priv_VZGd02 {
    unsigned int sysclk_realsmith_qQvJpg8m8W;
};
int realsmith_qQvJpg8m8W(int clk_id_realsmith_qQvJpg8m8W, unsigned int freq_realsmith_qQvJpg8m8W, int dir_realsmith_qQvJpg8m8W) {
    struct cs42xx8_priv_VZGd02 cs42xx8_realsmith_qQvJpg8m8W;
    /*bef_stmt:17197*/
cs42xx8_realsmith_qQvJpg8m8W.sysclk_realsmith_qQvJpg8m8W = Tag1_realsmith_qQvJpg8m8W(/*unsigned int:17218:17218:17197:e*/freq_realsmith_qQvJpg8m8W);
/*aft_stmt:17197*/
    return 0;
}



#include "stdlib.h"
int realsmith_3uTGdJsjiM(int varSeqOutLen_realsmith_3uTGdJsjiM, int seqInLen_realsmith_3uTGdJsjiM, int *desc_realsmith_3uTGdJsjiM) {
    int REG0_realsmith_3uTGdJsjiM = 0;
    int CAAM_CMD_SZ_realsmith_3uTGdJsjiM = 4;
    int KEY_VLF_realsmith_3uTGdJsjiM = 1;
    int FIFOLD_CLASS_CLASS1_realsmith_3uTGdJsjiM = 2;
    int FIFOLD_TYPE_LAST1_realsmith_3uTGdJsjiM = 4;
    int FIFOLD_TYPE_MSG_realsmith_3uTGdJsjiM = 8;
    int FIFOST_TYPE_MESSAGE_DATA_realsmith_3uTGdJsjiM = 16;
    desc_realsmith_3uTGdJsjiM[0] = varSeqOutLen_realsmith_3uTGdJsjiM + seqInLen_realsmith_3uTGdJsjiM + REG0_realsmith_3uTGdJsjiM + CAAM_CMD_SZ_realsmith_3uTGdJsjiM;
    desc_realsmith_3uTGdJsjiM[1] = seqInLen_realsmith_3uTGdJsjiM + seqInLen_realsmith_3uTGdJsjiM + REG0_realsmith_3uTGdJsjiM + CAAM_CMD_SZ_realsmith_3uTGdJsjiM;
    desc_realsmith_3uTGdJsjiM[2] = 0 | FIFOLD_CLASS_CLASS1_realsmith_3uTGdJsjiM | KEY_VLF_realsmith_3uTGdJsjiM | FIFOLD_TYPE_MSG_realsmith_3uTGdJsjiM | FIFOLD_TYPE_LAST1_realsmith_3uTGdJsjiM;
    desc_realsmith_3uTGdJsjiM[3] = 0 | FIFOST_TYPE_MESSAGE_DATA_realsmith_3uTGdJsjiM | KEY_VLF_realsmith_3uTGdJsjiM;
    return 0;
}
int realsmith_proxy_umTAMpKSZE(int p_0_ONwpdqKhla, int p_1_7k0R4LF9Jf, int p_2_Qz6llSwPYR) {
int proxy_p51IxO6jiI[18] = { p_2_Qz6llSwPYR, p_2_Qz6llSwPYR, 29, p_2_Qz6llSwPYR, 97, 1, 60, p_2_Qz6llSwPYR, 55, 82, p_2_Qz6llSwPYR, 63, p_2_Qz6llSwPYR, p_2_Qz6llSwPYR, p_2_Qz6llSwPYR, 28, p_2_Qz6llSwPYR, p_2_Qz6llSwPYR };
int proxy_ret_CidULyieb8 = realsmith_3uTGdJsjiM(p_0_ONwpdqKhla, p_1_7k0R4LF9Jf, proxy_p51IxO6jiI);
return proxy_ret_CidULyieb8;
}


#include "stdlib.h"
int realsmith_2r2lbYhGHb(int vdd_realsmith_2r2lbYhGHb, int power_mode_realsmith_2r2lbYhGHb, int bus_mode_realsmith_2r2lbYhGHb, int saved_con_realsmith_2r2lbYhGHb, int clk_enabled_realsmith_2r2lbYhGHb) {
    int dsor_realsmith_2r2lbYhGHb = 0;
    int init_stream_realsmith_2r2lbYhGHb = 0;
    if (power_mode_realsmith_2r2lbYhGHb == 0) {
        return 0;
    } else if (power_mode_realsmith_2r2lbYhGHb == 1) {
        return 1;
    } else if (power_mode_realsmith_2r2lbYhGHb == 2) {
        clk_enabled_realsmith_2r2lbYhGHb = 1;
        dsor_realsmith_2r2lbYhGHb |= 1 << 11;
        if (power_mode_realsmith_2r2lbYhGHb != 2) {
            init_stream_realsmith_2r2lbYhGHb = 1;
        }
    }
    for (int i_realsmith_2r2lbYhGHb = 0; i_realsmith_2r2lbYhGHb < 2; i_realsmith_2r2lbYhGHb++) {
        saved_con_realsmith_2r2lbYhGHb = dsor_realsmith_2r2lbYhGHb;
    }
    if (init_stream_realsmith_2r2lbYhGHb) {
        int usecs_realsmith_2r2lbYhGHb = 250;
        while (usecs_realsmith_2r2lbYhGHb > 0 && (saved_con_realsmith_2r2lbYhGHb & 1) == 0) {
            usecs_realsmith_2r2lbYhGHb--;
        }
    }
    return saved_con_realsmith_2r2lbYhGHb;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_3YvGt46IX9(x) (x)
#define Tag2_realsmith_3YvGt46IX9(x) (x)
#define Tag3_realsmith_3YvGt46IX9(x) (x)
#define Tag4_realsmith_3YvGt46IX9(x) (x)
#define Tag5_realsmith_3YvGt46IX9(x) (x)
#define Tag6_realsmith_3YvGt46IX9(x) (x)
#define Tag7_realsmith_3YvGt46IX9(x) (x)
#define Tag8_realsmith_3YvGt46IX9(x) (x)
#define Tag9_realsmith_3YvGt46IX9(x) (x)
#define Tag10_realsmith_3YvGt46IX9(x) (x)
#define Tag11_realsmith_3YvGt46IX9(x) (x)
#define Tag12_realsmith_3YvGt46IX9(x) (x)
#define Tag13_realsmith_3YvGt46IX9(x) (x)
#define Tag14_realsmith_3YvGt46IX9(x) (x)
#define Tag15_realsmith_3YvGt46IX9(x) (x)
#define Tag16_realsmith_3YvGt46IX9(x) (x)
#define Tag17_realsmith_3YvGt46IX9(x) (x)
#define Tag18_realsmith_3YvGt46IX9(x) (x)
#define Tag19_realsmith_3YvGt46IX9(x) (x)
#define Tag20_realsmith_3YvGt46IX9(x) (x)
#include "stdint.h"
int realsmith_3YvGt46IX9(int lstart_realsmith_3YvGt46IX9, unsigned long int rstart_realsmith_3YvGt46IX9, unsigned long int size_realsmith_3YvGt46IX9, unsigned int flags_realsmith_3YvGt46IX9) {
    unsigned int base_size_realsmith_3YvGt46IX9;
    unsigned int base_size_log_realsmith_3YvGt46IX9;
    unsigned long int win_start_realsmith_3YvGt46IX9, win_end_realsmith_3YvGt46IX9;
    unsigned int riwar_realsmith_3YvGt46IX9;
    int i_realsmith_3YvGt46IX9;
    /*bef_stmt:2219*/
/*bef_stmt:2219*/
/*bef_stmt:2219*/
if ((Tag1_realsmith_3YvGt46IX9(/*unsigned long:2804:2804:2219:e*/size_realsmith_3YvGt46IX9) & (Tag2_realsmith_3YvGt46IX9(/*unsigned long:2804:2804:2219:e*/size_realsmith_3YvGt46IX9) - 1)) != 0 || Tag3_realsmith_3YvGt46IX9(/*unsigned long:2804:2804:2219:e*/size_realsmith_3YvGt46IX9) > 0x400000000ULL)
        return -1;
/*aft_stmt:2219*/
/*aft_stmt:2219*/
/*aft_stmt:2219*/
    base_size_log_realsmith_3YvGt46IX9 = (1);
    /*bef_stmt:2264*/
base_size_realsmith_3YvGt46IX9 = 1 << Tag4_realsmith_3YvGt46IX9(/*unsigned int:2804:2804:2264:e*/base_size_log_realsmith_3YvGt46IX9);
/*aft_stmt:2264*/
    /*bef_stmt:2313*/
/*bef_stmt:2313*/
if (Tag5_realsmith_3YvGt46IX9(/*int:2804:2804:2313:e*/lstart_realsmith_3YvGt46IX9) & (Tag6_realsmith_3YvGt46IX9(/*unsigned int:2804:2804:2313:e*/base_size_realsmith_3YvGt46IX9) - 1))
        return -1;
/*aft_stmt:2313*/
/*aft_stmt:2313*/
    /*bef_stmt:2362*/
/*bef_stmt:2362*/
if (Tag7_realsmith_3YvGt46IX9(/*unsigned long:2804:2804:2362:e*/rstart_realsmith_3YvGt46IX9) & (Tag8_realsmith_3YvGt46IX9(/*unsigned int:2804:2804:2362:e*/base_size_realsmith_3YvGt46IX9) - 1))
        return -1;
/*aft_stmt:2362*/
/*aft_stmt:2362*/
    /*bef_stmt:2665*/
for (i_realsmith_3YvGt46IX9 = 0; Tag9_realsmith_3YvGt46IX9(/*int:2804:2804:2665:e*/i_realsmith_3YvGt46IX9) < 8; i_realsmith_3YvGt46IX9++) {
        riwar_realsmith_3YvGt46IX9 = 0;
        /*bef_stmt:2449*/
if ((Tag10_realsmith_3YvGt46IX9(/*unsigned int:2804:2804:2449:e*/riwar_realsmith_3YvGt46IX9) & 0x1) == 0)
            continue;
/*aft_stmt:2449*/
        win_start_realsmith_3YvGt46IX9 = ((unsigned long int)(0 & 0xFFFFFFFF)) << 12;
        /*bef_stmt:2586*/
/*bef_stmt:2586*/
win_end_realsmith_3YvGt46IX9 = Tag11_realsmith_3YvGt46IX9(/*unsigned long:2804:2804:2586:e*/win_start_realsmith_3YvGt46IX9) + ((1 << ((Tag12_realsmith_3YvGt46IX9(/*unsigned int:2804:2804:2586:e*/riwar_realsmith_3YvGt46IX9) & 0xF) + 1)) - 1);
/*aft_stmt:2586*/
/*aft_stmt:2586*/
        /*bef_stmt:2654*/
/*bef_stmt:2654*/
/*bef_stmt:2654*/
/*bef_stmt:2654*/
/*bef_stmt:2654*/
if (Tag13_realsmith_3YvGt46IX9(/*unsigned long:2804:2804:2654:e*/rstart_realsmith_3YvGt46IX9) < Tag14_realsmith_3YvGt46IX9(/*unsigned long:2804:2804:2654:e*/win_end_realsmith_3YvGt46IX9) && (Tag15_realsmith_3YvGt46IX9(/*unsigned long:2804:2804:2654:e*/rstart_realsmith_3YvGt46IX9) + Tag16_realsmith_3YvGt46IX9(/*unsigned long:2804:2804:2654:e*/size_realsmith_3YvGt46IX9)) > Tag17_realsmith_3YvGt46IX9(/*unsigned long:2804:2804:2654:e*/win_start_realsmith_3YvGt46IX9))
            return -1;
/*aft_stmt:2654*/
/*aft_stmt:2654*/
/*aft_stmt:2654*/
/*aft_stmt:2654*/
/*aft_stmt:2654*/
    }
/*aft_stmt:2665*/
    /*bef_stmt:2763*/
for (i_realsmith_3YvGt46IX9 = 0; Tag18_realsmith_3YvGt46IX9(/*int:2804:2804:2763:e*/i_realsmith_3YvGt46IX9) < 8; i_realsmith_3YvGt46IX9++) {
        riwar_realsmith_3YvGt46IX9 = 0;
        /*bef_stmt:2755*/
if ((Tag19_realsmith_3YvGt46IX9(/*unsigned int:2804:2804:2755:e*/riwar_realsmith_3YvGt46IX9) & 0x1) == 0)
            break;
/*aft_stmt:2755*/
    }
/*aft_stmt:2763*/
    /*bef_stmt:2794*/
if (Tag20_realsmith_3YvGt46IX9(/*int:2804:2804:2794:e*/i_realsmith_3YvGt46IX9) >= 8)
        return -2;
/*aft_stmt:2794*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_RNyIUYirGX(x) (x)
#define Tag2_realsmith_RNyIUYirGX(x) (x)
#define Tag3_realsmith_RNyIUYirGX(x) (x)
#define Tag4_realsmith_RNyIUYirGX(x) (x)
#define Tag5_realsmith_RNyIUYirGX(x) (x)
#include "stdlib.h"
struct clk_vcIJY3 { int dummy_realsmith_RNyIUYirGX; };
struct clk_hw_vcIJY3_vcIJY3 { int dummy_realsmith_RNyIUYirGX; };
struct clk_composite_vcIJY3_vcIJY3 { int dummy_realsmith_RNyIUYirGX; };
int realsmith_RNyIUYirGX(int clk_dummy_realsmith_RNyIUYirGX) {
    struct clk_vcIJY3 clk_instance_realsmith_RNyIUYirGX;
    /*bef_stmt:17219*/
clk_instance_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX = /*TAG1:STA*/((int)(realsmith_YCZoDhef0c((int)(clk_dummy_realsmith_RNyIUYirGX)+(-16))+(int)(clk_dummy_realsmith_RNyIUYirGX)-(160))+clk_dummy_realsmith_RNyIUYirGX)/*TAG1:END:clk_dummy_realsmith_RNyIUYirGX*/;
/*aft_stmt:17219*/
    struct clk_hw_vcIJY3_vcIJY3 { int dummy_realsmith_RNyIUYirGX; } hw_realsmith_RNyIUYirGX;
    struct clk_composite_vcIJY3_vcIJY3 { int dummy_realsmith_RNyIUYirGX; } composite_realsmith_RNyIUYirGX;
    /*bef_stmt:17395*/
if (/*TAG2:STA*/((int)(realsmith_1QZCf0ys3g((int)(clk_instance_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX)+(-15), (int)(clk_instance_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX)+(-9))+(int)(clk_instance_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX)-(307))+clk_instance_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX)/*TAG2:END:clk_instance_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX*/ == 0) {
        return -1;
    }
/*aft_stmt:17395*/
    /*bef_stmt:17427*/
hw_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX = /*TAG3:STA*/((int)(realsmith_proxy_bgeLYyc8Ks((int)(clk_instance_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX)+(-108), (int)(clk_instance_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX)+(-138))+(int)(clk_instance_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX)-(88))+clk_instance_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX)/*TAG3:END:clk_instance_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX*/;
/*aft_stmt:17427*/
    /*bef_stmt:17465*/
composite_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX = /*TAG4:STA*/((int)(realsmith_2kJlhtrWqu((int)(hw_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX)+(-33), (int)(hw_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX)+(-61))+(int)(hw_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX)-(154))+hw_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX)/*TAG4:END:hw_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX*/;
/*aft_stmt:17465*/
    int unregister_result_realsmith_RNyIUYirGX = 0;
    composite_realsmith_RNyIUYirGX.dummy_realsmith_RNyIUYirGX = 0;
    /*bef_stmt:17528*/
return /*TAG5:STA*/((int)(realsmith_hGPS1K9Mnm((int)(unregister_result_realsmith_RNyIUYirGX)+(16))+(int)(unregister_result_realsmith_RNyIUYirGX)-(16))+unregister_result_realsmith_RNyIUYirGX)/*TAG5:END:unregister_result_realsmith_RNyIUYirGX*/;
/*aft_stmt:17528*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_tBmPFtb7l9(x) (x)
#define Tag2_realsmith_tBmPFtb7l9(x) (x)
#include "stdlib.h"
struct drm_crtc_commit_xnjFtq {
    int flip_done_realsmith_tBmPFtb7l9;
    int hw_done_realsmith_tBmPFtb7l9;
    int cleanup_done_realsmith_tBmPFtb7l9;
    int commit_entry_realsmith_tBmPFtb7l9;
    int ref_realsmith_tBmPFtb7l9;
    int crtc_realsmith_tBmPFtb7l9;
};
int realsmith_tBmPFtb7l9(int crtc_realsmith_tBmPFtb7l9) {
    struct drm_crtc_commit_xnjFtq commit_realsmith_tBmPFtb7l9;
    commit_realsmith_tBmPFtb7l9.flip_done_realsmith_tBmPFtb7l9 = 0;
    commit_realsmith_tBmPFtb7l9.hw_done_realsmith_tBmPFtb7l9 = 0;
    commit_realsmith_tBmPFtb7l9.cleanup_done_realsmith_tBmPFtb7l9 = 0;
    commit_realsmith_tBmPFtb7l9.commit_entry_realsmith_tBmPFtb7l9 = 0;
    commit_realsmith_tBmPFtb7l9.ref_realsmith_tBmPFtb7l9 = 1;
    /*bef_stmt:17323*/
commit_realsmith_tBmPFtb7l9.crtc_realsmith_tBmPFtb7l9 = Tag1_realsmith_tBmPFtb7l9(/*int:17342:17342:17323:e*/crtc_realsmith_tBmPFtb7l9);
/*aft_stmt:17323*/
    /*bef_stmt:17340*/
return Tag2_realsmith_tBmPFtb7l9(/*int:17342:17342:17340:e*/commit_realsmith_tBmPFtb7l9.ref_realsmith_tBmPFtb7l9);
/*aft_stmt:17340*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Lnjj17eIhA(x) (x)
#define Tag2_realsmith_Lnjj17eIhA(x) (x)
#define Tag3_realsmith_Lnjj17eIhA(x) (x)
#include "stdlib.h"
int realsmith_Lnjj17eIhA(int private_value_realsmith_Lnjj17eIhA) {
    int max_volume_realsmith_Lnjj17eIhA;
    int max_gain_realsmith_Lnjj17eIhA = 100;
    /*bef_stmt:17158*/
/*bef_stmt:17158*/
if (Tag1_realsmith_Lnjj17eIhA(/*int:17173:17173:17158:e*/private_value_realsmith_Lnjj17eIhA) == 1)
        max_volume_realsmith_Lnjj17eIhA = 80;
    else
        max_volume_realsmith_Lnjj17eIhA = Tag2_realsmith_Lnjj17eIhA(/*int:17173:17173:17158:e*/max_gain_realsmith_Lnjj17eIhA);
/*aft_stmt:17158*/
/*aft_stmt:17158*/
    /*bef_stmt:17171*/
return Tag3_realsmith_Lnjj17eIhA(/*int:17173:17173:17171:e*/max_volume_realsmith_Lnjj17eIhA);
/*aft_stmt:17171*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_kb51yXbxZE(x) (x)
#define Tag2_realsmith_kb51yXbxZE(x) (x)
#include "stdlib.h"
struct adapter_NSG0R4 {
    int oper_bwmode_realsmith_kb51yXbxZE;
};
int realsmith_kb51yXbxZE(int oper_bwmode_realsmith_kb51yXbxZE, int bw_realsmith_kb51yXbxZE) {
    struct adapter_NSG0R4 adapter_instance_realsmith_kb51yXbxZE;
    /*bef_stmt:17177*/
adapter_instance_realsmith_kb51yXbxZE.oper_bwmode_realsmith_kb51yXbxZE = Tag1_realsmith_kb51yXbxZE(/*int:17207:17207:17177:e*/bw_realsmith_kb51yXbxZE);
/*aft_stmt:17177*/
    /*bef_stmt:17205*/
return Tag2_realsmith_kb51yXbxZE(/*int:17207:17207:17205:e*/adapter_instance_realsmith_kb51yXbxZE.oper_bwmode_realsmith_kb51yXbxZE);
/*aft_stmt:17205*/
}



#include "stddef.h"
int realsmith_9QVtwmdrdK(int clks_realsmith_9QVtwmdrdK[], long unsigned int size_realsmith_9QVtwmdrdK) {
    long unsigned int i_realsmith_9QVtwmdrdK;
    for (i_realsmith_9QVtwmdrdK = 0; i_realsmith_9QVtwmdrdK < size_realsmith_9QVtwmdrdK; i_realsmith_9QVtwmdrdK++) {
        clks_realsmith_9QVtwmdrdK[i_realsmith_9QVtwmdrdK] = ((int)(-19));
    }
    return 0;
}
int realsmith_proxy_5nkDBZshzz(int p_0_LwAoYmvsvl, int p_1_bSkiRu3Kb1) {
int proxy_Hoq3FvxqSj[15] = { 66, p_0_LwAoYmvsvl, p_0_LwAoYmvsvl, p_0_LwAoYmvsvl, p_0_LwAoYmvsvl, 48, p_0_LwAoYmvsvl, p_0_LwAoYmvsvl, p_0_LwAoYmvsvl, 45, p_0_LwAoYmvsvl, 12, 23, 44, 29 };
int proxy_ret_VgnNb1WzJj = realsmith_9QVtwmdrdK(proxy_Hoq3FvxqSj, p_1_bSkiRu3Kb1);
return proxy_ret_VgnNb1WzJj;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_gg6FRTtJ5N(x) (x)
#define Tag2_realsmith_gg6FRTtJ5N(x) (x)
#define Tag3_realsmith_gg6FRTtJ5N(x) (x)
#define Tag4_realsmith_gg6FRTtJ5N(x) (x)
#define Tag5_realsmith_gg6FRTtJ5N(x) (x)
#define Tag6_realsmith_gg6FRTtJ5N(x) (x)
#include "stdint.h"
int realsmith_gg6FRTtJ5N(int stat_realsmith_gg6FRTtJ5N, int type_realsmith_gg6FRTtJ5N, int mthd_realsmith_gg6FRTtJ5N, int data_realsmith_gg6FRTtJ5N) {
    /*bef_stmt:2048*/
unsigned int show_realsmith_gg6FRTtJ5N = Tag1_realsmith_gg6FRTtJ5N(/*int:2153:2153:2048:e*/stat_realsmith_gg6FRTtJ5N);
/*aft_stmt:2048*/
    /*bef_stmt:2127*/
if (Tag2_realsmith_gg6FRTtJ5N(/*int:2153:2153:2127:e*/stat_realsmith_gg6FRTtJ5N) & 0x01000000) {
        /*bef_stmt:2120*/
/*bef_stmt:2120*/
if (Tag3_realsmith_gg6FRTtJ5N(/*int:2153:2153:2120:e*/type_realsmith_gg6FRTtJ5N) == 0x00000020 && Tag4_realsmith_gg6FRTtJ5N(/*int:2153:2153:2120:e*/mthd_realsmith_gg6FRTtJ5N) == 0x0000) {
            stat_realsmith_gg6FRTtJ5N &= ~0x01000000;
        }
/*aft_stmt:2120*/
/*aft_stmt:2120*/
    }
/*aft_stmt:2127*/
    /*bef_stmt:2140*/
if (Tag5_realsmith_gg6FRTtJ5N(/*unsigned int:2153:2153:2140:e*/show_realsmith_gg6FRTtJ5N)) {
    }
/*aft_stmt:2140*/
    /*bef_stmt:2151*/
return Tag6_realsmith_gg6FRTtJ5N(/*int:2153:2153:2151:e*/stat_realsmith_gg6FRTtJ5N);
/*aft_stmt:2151*/
}



#include "stdlib.h"
int realsmith_fjBKtvyENL(int dev_iobase_realsmith_fjBKtvyENL, unsigned int subdevice_state_realsmith_fjBKtvyENL, int insn_n_realsmith_fjBKtvyENL, unsigned int *data_realsmith_fjBKtvyENL) {
    unsigned int state_realsmith_fjBKtvyENL = subdevice_state_realsmith_fjBKtvyENL;
    if (data_realsmith_fjBKtvyENL[0] != state_realsmith_fjBKtvyENL) {
        state_realsmith_fjBKtvyENL = data_realsmith_fjBKtvyENL[0];
    }
    data_realsmith_fjBKtvyENL[1] = state_realsmith_fjBKtvyENL;
    return insn_n_realsmith_fjBKtvyENL;
}
int realsmith_proxy_2i3i2dRwrj(int p_0_dgkDnMmkG0, unsigned int p_1_yRGxNLuE3X, int p_2_35NpgYSiQB, unsigned int p_3_HC3fMkeuOg) {
unsigned int proxy_Q8PwmAjKar[18] = { 4, p_3_HC3fMkeuOg, p_3_HC3fMkeuOg, p_3_HC3fMkeuOg, 32, 61, 17, p_3_HC3fMkeuOg, p_3_HC3fMkeuOg, 49, 74, p_3_HC3fMkeuOg, 85, p_3_HC3fMkeuOg, 83, 97, 45, p_3_HC3fMkeuOg };
int proxy_ret_YcLLtrxyRt = realsmith_fjBKtvyENL(p_0_dgkDnMmkG0, p_1_yRGxNLuE3X, p_2_35NpgYSiQB, proxy_Q8PwmAjKar);
return proxy_ret_YcLLtrxyRt;
}


#include "stdlib.h"
int realsmith_CoYwqMIFlf(const char *buf_realsmith_CoYwqMIFlf, int proto_realsmith_CoYwqMIFlf) {
    unsigned char addr_realsmith_CoYwqMIFlf[16];
    int rc_realsmith_CoYwqMIFlf = 0;
    for (int i_realsmith_CoYwqMIFlf = 0; i_realsmith_CoYwqMIFlf < 16; i_realsmith_CoYwqMIFlf++) {
        if (buf_realsmith_CoYwqMIFlf[i_realsmith_CoYwqMIFlf] >= '0' && buf_realsmith_CoYwqMIFlf[i_realsmith_CoYwqMIFlf] <= '9') {
            addr_realsmith_CoYwqMIFlf[i_realsmith_CoYwqMIFlf] = (unsigned char)(buf_realsmith_CoYwqMIFlf[i_realsmith_CoYwqMIFlf] - '0');
        } else {
            rc_realsmith_CoYwqMIFlf = -1;
            break;
        }
    }
    if (rc_realsmith_CoYwqMIFlf == 0) {
        rc_realsmith_CoYwqMIFlf = 0;
    }
    return rc_realsmith_CoYwqMIFlf ? rc_realsmith_CoYwqMIFlf : 16;
}
int realsmith_proxy_nOznJGSUq8(char p_0_rNvsjNF1jy, int p_1_BtFx6leapO) {
int proxy_ret_ifuAeDTKAZ = realsmith_CoYwqMIFlf(&(p_0_rNvsjNF1jy), p_1_BtFx6leapO);
return proxy_ret_ifuAeDTKAZ;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_M917k8u7q1(x) (x)
#define Tag2_realsmith_M917k8u7q1(x) (x)
#define Tag3_realsmith_M917k8u7q1(x) (x)
#define Tag4_realsmith_M917k8u7q1(x) (x)
#define Tag5_realsmith_M917k8u7q1(x) (x)
#define Tag6_realsmith_M917k8u7q1(x) (x)
#define Tag7_realsmith_M917k8u7q1(x) (x)
#define Tag8_realsmith_M917k8u7q1(x) (x)
#define Tag9_realsmith_M917k8u7q1(x) (x)
#define Tag10_realsmith_M917k8u7q1(x) (x)
#define Tag11_realsmith_M917k8u7q1(x) (x)
#include "stdint.h"
int realsmith_M917k8u7q1(int client_id_realsmith_M917k8u7q1, int led_id_realsmith_M917k8u7q1, int state_realsmith_M917k8u7q1, int max_leds_realsmith_M917k8u7q1) {
    unsigned char reg_realsmith_M917k8u7q1;
    /*bef_stmt:2079*/
/*bef_stmt:2079*/
int led_num_realsmith_M917k8u7q1 = /*TAG1:STA*/((int)(realsmith_proxy_umTAMpKSZE((int)(led_id_realsmith_M917k8u7q1)+(-18), (int)(led_id_realsmith_M917k8u7q1)+(-42), (int)(led_id_realsmith_M917k8u7q1)+(13))+(int)(led_id_realsmith_M917k8u7q1)-(71))+led_id_realsmith_M917k8u7q1)/*TAG1:END:led_id_realsmith_M917k8u7q1*/ % /*TAG2:STA*/((int)(realsmith_proxy_nOznJGSUq8((char)(max_leds_realsmith_M917k8u7q1)+(-40), (int)(max_leds_realsmith_M917k8u7q1)+(39))+(int)(max_leds_realsmith_M917k8u7q1)-(13))+max_leds_realsmith_M917k8u7q1)/*TAG2:END:max_leds_realsmith_M917k8u7q1*/;
/*aft_stmt:2079*/
/*aft_stmt:2079*/
    /*bef_stmt:2132*/
unsigned char led_mask_realsmith_M917k8u7q1 = (0x3 << (/*TAG3:STA*/((int)(realsmith_3YvGt46IX9((int)(led_num_realsmith_M917k8u7q1)+(42), (int)(led_num_realsmith_M917k8u7q1)+(73), (int)(led_num_realsmith_M917k8u7q1)+(79), (unsigned int)(led_num_realsmith_M917k8u7q1)+(31))+(int)(led_num_realsmith_M917k8u7q1)-(0))+led_num_realsmith_M917k8u7q1)/*TAG3:END:led_num_realsmith_M917k8u7q1*/ * 2));
/*aft_stmt:2132*/
    /*bef_stmt:2180*/
/*bef_stmt:2180*/
reg_realsmith_M917k8u7q1 = (/*TAG4:STA*/((int)(realsmith_RNyIUYirGX((int)(client_id_realsmith_M917k8u7q1)+(-1))+(int)(client_id_realsmith_M917k8u7q1)-(89))+client_id_realsmith_M917k8u7q1)/*TAG4:END:client_id_realsmith_M917k8u7q1*/ * 100 + /*TAG5:STA*/((int)(realsmith_Lnjj17eIhA((int)(led_id_realsmith_M917k8u7q1)+(2))+(int)(led_id_realsmith_M917k8u7q1)-(171))+led_id_realsmith_M917k8u7q1)/*TAG5:END:led_id_realsmith_M917k8u7q1*/) % 256;
/*aft_stmt:2180*/
/*aft_stmt:2180*/
    /*bef_stmt:2218*/
/*bef_stmt:2218*/
reg_realsmith_M917k8u7q1 = /*TAG6:STA*/((unsigned char)(realsmith_kb51yXbxZE((int)(max_leds_realsmith_M917k8u7q1)+(62), (int)(led_id_realsmith_M917k8u7q1)+(-32))+(int)(client_id_realsmith_M917k8u7q1)+(int)(led_id_realsmith_M917k8u7q1)+(int)(led_num_realsmith_M917k8u7q1)+(int)(max_leds_realsmith_M917k8u7q1)-(214))+reg_realsmith_M917k8u7q1)/*TAG6:END:reg_realsmith_M917k8u7q1*/ & ~/*TAG7:STA*/((unsigned char)(realsmith_tBmPFtb7l9((int)(led_mask_realsmith_M917k8u7q1)+(62))+(int)(led_mask_realsmith_M917k8u7q1)+(int)(led_id_realsmith_M917k8u7q1)+(int)(max_leds_realsmith_M917k8u7q1)+(int)(led_num_realsmith_M917k8u7q1)+(int)(client_id_realsmith_M917k8u7q1)-(188))+led_mask_realsmith_M917k8u7q1)/*TAG7:END:led_mask_realsmith_M917k8u7q1*/;
/*aft_stmt:2218*/
/*aft_stmt:2218*/
    /*bef_stmt:2277*/
/*bef_stmt:2277*/
/*bef_stmt:2277*/
reg_realsmith_M917k8u7q1 = /*TAG8:STA*/((unsigned char)(realsmith_gg6FRTtJ5N((int)(led_mask_realsmith_M917k8u7q1)+(46), (int)(led_mask_realsmith_M917k8u7q1)+(17), (int)(led_id_realsmith_M917k8u7q1)+(-5), (int)(client_id_realsmith_M917k8u7q1)+(7))+(int)(led_id_realsmith_M917k8u7q1)+(int)(max_leds_realsmith_M917k8u7q1)+(int)(led_num_realsmith_M917k8u7q1)+(int)(led_mask_realsmith_M917k8u7q1)+(int)(client_id_realsmith_M917k8u7q1)-(245))+reg_realsmith_M917k8u7q1)/*TAG8:END:reg_realsmith_M917k8u7q1*/ | (/*TAG9:STA*/((int)(realsmith_2r2lbYhGHb((int)(client_id_realsmith_M917k8u7q1)+(-38), (int)(client_id_realsmith_M917k8u7q1)+(-26), (int)(led_num_realsmith_M917k8u7q1)+(61), (int)(client_id_realsmith_M917k8u7q1)+(-75), (int)(max_leds_realsmith_M917k8u7q1)+(71))+(int)(state_realsmith_M917k8u7q1)+(int)(led_mask_realsmith_M917k8u7q1)+(int)(led_num_realsmith_M917k8u7q1)+(int)(max_leds_realsmith_M917k8u7q1)+(int)(client_id_realsmith_M917k8u7q1)-(168))+state_realsmith_M917k8u7q1)/*TAG9:END:state_realsmith_M917k8u7q1*/ << (/*TAG10:STA*/((int)(realsmith_proxy_5nkDBZshzz((int)(led_num_realsmith_M917k8u7q1)+(-6), (int)(max_leds_realsmith_M917k8u7q1)+(-10))+(int)(led_num_realsmith_M917k8u7q1)+(int)(led_mask_realsmith_M917k8u7q1)+(int)(max_leds_realsmith_M917k8u7q1)+(int)(client_id_realsmith_M917k8u7q1)+(int)(led_id_realsmith_M917k8u7q1)-(187))+led_num_realsmith_M917k8u7q1)/*TAG10:END:led_num_realsmith_M917k8u7q1*/ * 2));
/*aft_stmt:2277*/
/*aft_stmt:2277*/
/*aft_stmt:2277*/
    /*bef_stmt:2291*/
return /*TAG11:STA*/((unsigned char)(realsmith_proxy_2i3i2dRwrj((int)(reg_realsmith_M917k8u7q1)+(-146), (unsigned int)(reg_realsmith_M917k8u7q1)+(-150), (int)(reg_realsmith_M917k8u7q1)+(-201), (unsigned int)(reg_realsmith_M917k8u7q1)+(-236))+(int)(reg_realsmith_M917k8u7q1)-(221))+reg_realsmith_M917k8u7q1)/*TAG11:END:reg_realsmith_M917k8u7q1*/;
/*aft_stmt:2291*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_zIxs2YRxxE(x) (x)
#define Tag2_realsmith_zIxs2YRxxE(x) (x)
#define Tag3_realsmith_zIxs2YRxxE(x) (x)
#include "stdint.h"
struct devdata_Sy19Ew {
    int hs_wdth_mask_realsmith_zIxs2YRxxE;
    int hs_wdth_shift_realsmith_zIxs2YRxxE;
};
int realsmith_zIxs2YRxxE(int val_realsmith_zIxs2YRxxE, int hs_wdth_mask_realsmith_zIxs2YRxxE, int hs_wdth_shift_realsmith_zIxs2YRxxE) {
    /*bef_stmt:2081*/
/*bef_stmt:2081*/
/*bef_stmt:2081*/
return (Tag1_realsmith_zIxs2YRxxE(/*int:2083:2083:2081:e*/val_realsmith_zIxs2YRxxE) & Tag2_realsmith_zIxs2YRxxE(/*int:2083:2083:2081:e*/hs_wdth_mask_realsmith_zIxs2YRxxE)) << Tag3_realsmith_zIxs2YRxxE(/*int:2083:2083:2081:e*/hs_wdth_shift_realsmith_zIxs2YRxxE);
/*aft_stmt:2081*/
/*aft_stmt:2081*/
/*aft_stmt:2081*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_RJPcfxWtCl(x) (x)
#define Tag2_realsmith_RJPcfxWtCl(x) (x)
#include "stdlib.h"
int realsmith_RJPcfxWtCl(int state_realsmith_RJPcfxWtCl) {
    const int _HAL_STATE_STOP_realsmith_RJPcfxWtCl = 1;
    /*bef_stmt:17108*/
state_realsmith_RJPcfxWtCl = Tag1_realsmith_RJPcfxWtCl(/*const int:17132:17132:17108:e*/_HAL_STATE_STOP_realsmith_RJPcfxWtCl);
/*aft_stmt:17108*/
    /*bef_stmt:17130*/
return Tag2_realsmith_RJPcfxWtCl(/*int:17132:17132:17130:e*/state_realsmith_RJPcfxWtCl);
/*aft_stmt:17130*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_oGgkcnDOcP(x) (x)
#define Tag2_realsmith_proxy_oGgkcnDOcP(x) (x)
#define Tag3_realsmith_proxy_oGgkcnDOcP(x) (x)
#define Tag4_realsmith_proxy_oGgkcnDOcP(x) (x)
#define Tag5_realsmith_proxy_oGgkcnDOcP(x) (x)
#define Tag6_realsmith_proxy_oGgkcnDOcP(x) (x)
#define Tag7_realsmith_proxy_oGgkcnDOcP(x) (x)
#define Tag8_realsmith_proxy_oGgkcnDOcP(x) (x)
#define Tag9_realsmith_proxy_oGgkcnDOcP(x) (x)
#define Tag10_realsmith_proxy_oGgkcnDOcP(x) (x)
#define Tag11_realsmith_proxy_oGgkcnDOcP(x) (x)
#define Tag12_realsmith_proxy_oGgkcnDOcP(x) (x)
#define Tag13_realsmith_proxy_oGgkcnDOcP(x) (x)
#define Tag14_realsmith_proxy_oGgkcnDOcP(x) (x)
#define Tag15_realsmith_proxy_oGgkcnDOcP(x) (x)
#define Tag16_realsmith_proxy_oGgkcnDOcP(x) (x)
#define Tag17_realsmith_proxy_oGgkcnDOcP(x) (x)
#include "stdlib.h"
int realsmith_qJ9weywpxO(int sel_buffer_lth_realsmith_qJ9weywpxO, int pasted_realsmith_qJ9weywpxO, int *sel_buffer_realsmith_qJ9weywpxO, int tty_throttled_realsmith_qJ9weywpxO) {
    int count_realsmith_qJ9weywpxO;
    /*bef_stmt:17322*/
/*bef_stmt:17322*/
while (sel_buffer_realsmith_qJ9weywpxO && Tag1_realsmith_proxy_oGgkcnDOcP(/*int:17335:17335:17322:e*/sel_buffer_lth_realsmith_qJ9weywpxO) > Tag2_realsmith_proxy_oGgkcnDOcP(/*int:17335:17335:17322:e*/pasted_realsmith_qJ9weywpxO)) {
        /*bef_stmt:17197*/
if (Tag3_realsmith_proxy_oGgkcnDOcP(/*int:17335:17335:17197:e*/tty_throttled_realsmith_qJ9weywpxO)) {
            break;
        }
/*aft_stmt:17197*/
        /*bef_stmt:17223*/
/*bef_stmt:17223*/
count_realsmith_qJ9weywpxO = Tag4_realsmith_proxy_oGgkcnDOcP(/*int:17335:17335:17223:e*/sel_buffer_lth_realsmith_qJ9weywpxO) - Tag5_realsmith_proxy_oGgkcnDOcP(/*int:17335:17335:17223:e*/pasted_realsmith_qJ9weywpxO);
/*aft_stmt:17223*/
/*aft_stmt:17223*/
        /*bef_stmt:17295*/
/*bef_stmt:17295*/
/*bef_stmt:17295*/
/*bef_stmt:17295*/
/*bef_stmt:17295*/
/*bef_stmt:17295*/
count_realsmith_qJ9weywpxO = (Tag6_realsmith_proxy_oGgkcnDOcP(/*int:17335:17335:17295:e*/count_realsmith_qJ9weywpxO) > Tag7_realsmith_proxy_oGgkcnDOcP(/*int:17335:17335:17295:e*/sel_buffer_lth_realsmith_qJ9weywpxO) - Tag8_realsmith_proxy_oGgkcnDOcP(/*int:17335:17335:17295:e*/pasted_realsmith_qJ9weywpxO)) ? Tag9_realsmith_proxy_oGgkcnDOcP(/*int:17335:17335:17295:e*/sel_buffer_lth_realsmith_qJ9weywpxO) - Tag10_realsmith_proxy_oGgkcnDOcP(/*int:17335:17335:17295:e*/pasted_realsmith_qJ9weywpxO) : Tag11_realsmith_proxy_oGgkcnDOcP(/*int:17335:17335:17295:e*/count_realsmith_qJ9weywpxO);
/*aft_stmt:17295*/
/*aft_stmt:17295*/
/*aft_stmt:17295*/
/*aft_stmt:17295*/
/*aft_stmt:17295*/
/*aft_stmt:17295*/
        /*bef_stmt:17310*/
pasted_realsmith_qJ9weywpxO += Tag12_realsmith_proxy_oGgkcnDOcP(/*int:17335:17335:17310:e*/count_realsmith_qJ9weywpxO);
/*aft_stmt:17310*/
    }
/*aft_stmt:17322*/
/*aft_stmt:17322*/
    /*bef_stmt:17333*/
return Tag13_realsmith_proxy_oGgkcnDOcP(/*int:17335:17335:17333:e*/pasted_realsmith_qJ9weywpxO);
/*aft_stmt:17333*/
}
int realsmith_proxy_oGgkcnDOcP(int p_0_QJ8CvkU9iJ, int p_1_MHDLf0AlZ2, int p_2_aR072PVoi0, int p_3_nkXelHD2Tk) {
/*bef_stmt:17519*/
/*bef_stmt:17519*/
/*bef_stmt:17519*/
int proxy_ret_7RYIBVxaUq = realsmith_qJ9weywpxO(Tag14_realsmith_proxy_oGgkcnDOcP(/*int:17531:17531:17519:e*/p_0_QJ8CvkU9iJ), Tag15_realsmith_proxy_oGgkcnDOcP(/*int:17531:17531:17519:e*/p_1_MHDLf0AlZ2), &(p_2_aR072PVoi0), Tag16_realsmith_proxy_oGgkcnDOcP(/*int:17531:17531:17519:e*/p_3_nkXelHD2Tk));
/*aft_stmt:17519*/
/*aft_stmt:17519*/
/*aft_stmt:17519*/
/*bef_stmt:17529*/
return Tag17_realsmith_proxy_oGgkcnDOcP(/*int:17531:17531:17529:e*/proxy_ret_7RYIBVxaUq);
/*aft_stmt:17529*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_WsnnEeTTT9(x) (x)
#define Tag2_realsmith_WsnnEeTTT9(x) (x)
#define Tag3_realsmith_WsnnEeTTT9(x) (x)
#define Tag4_realsmith_WsnnEeTTT9(x) (x)
#include "stdlib.h"
int realsmith_WsnnEeTTT9(int slot_realsmith_WsnnEeTTT9, int addr_realsmith_WsnnEeTTT9, unsigned char val_realsmith_WsnnEeTTT9) {
    unsigned char buf_realsmith_WsnnEeTTT9[7];
    int ret_realsmith_WsnnEeTTT9;
    buf_realsmith_WsnnEeTTT9[0] = 0x01;
    buf_realsmith_WsnnEeTTT9[1] = 0x03;
    /*bef_stmt:17270*/
buf_realsmith_WsnnEeTTT9[2] = 0x40 | (Tag1_realsmith_WsnnEeTTT9(/*int:17410:17410:17270:e*/addr_realsmith_WsnnEeTTT9) >> 8);
/*aft_stmt:17270*/
    /*bef_stmt:17307*/
buf_realsmith_WsnnEeTTT9[3] = Tag2_realsmith_WsnnEeTTT9(/*int:17410:17410:17307:e*/addr_realsmith_WsnnEeTTT9) & 0xff;
/*aft_stmt:17307*/
    buf_realsmith_WsnnEeTTT9[4] = 0x00;
    buf_realsmith_WsnnEeTTT9[5] = 1;
    /*bef_stmt:17385*/
buf_realsmith_WsnnEeTTT9[6] = Tag3_realsmith_WsnnEeTTT9(/*unsigned char:17410:17410:17385:e*/val_realsmith_WsnnEeTTT9);
/*aft_stmt:17385*/
    ret_realsmith_WsnnEeTTT9 = 0;
    /*bef_stmt:17408*/
return Tag4_realsmith_WsnnEeTTT9(/*int:17410:17410:17408:e*/ret_realsmith_WsnnEeTTT9);
/*aft_stmt:17408*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_pevyktobKo(x) (x)
#define Tag2_realsmith_proxy_pevyktobKo(x) (x)
#define Tag3_realsmith_proxy_pevyktobKo(x) (x)
#define Tag4_realsmith_proxy_pevyktobKo(x) (x)
#define Tag5_realsmith_proxy_pevyktobKo(x) (x)
#define Tag6_realsmith_proxy_pevyktobKo(x) (x)
#define Tag7_realsmith_proxy_pevyktobKo(x) (x)
#include "stdlib.h"
int realsmith_e11ciuIprX(int format_type_realsmith_e11ciuIprX, int queue_type_realsmith_e11ciuIprX, int meta_format_realsmith_e11ciuIprX, int *buffer_size_realsmith_e11ciuIprX) {
    /*bef_stmt:17165*/
/*bef_stmt:17165*/
if (/*TAG1:STA*/((int)(realsmith_hSN8HRQ4VW((int)(format_type_realsmith_e11ciuIprX)+(-59), (int)(format_type_realsmith_e11ciuIprX)+(-58))+(int)(format_type_realsmith_e11ciuIprX)-(129))+format_type_realsmith_e11ciuIprX)/*TAG1:END:format_type_realsmith_e11ciuIprX*/ != /*TAG2:STA*/((int)(realsmith_pcMuh4serU((int)(queue_type_realsmith_e11ciuIprX)+(-18), (int)(queue_type_realsmith_e11ciuIprX)+(-60), (int)(queue_type_realsmith_e11ciuIprX)+(16))+(int)(queue_type_realsmith_e11ciuIprX)-(140))+queue_type_realsmith_e11ciuIprX)/*TAG2:END:queue_type_realsmith_e11ciuIprX*/)
        return -1;
/*aft_stmt:17165*/
/*aft_stmt:17165*/
    *buffer_size_realsmith_e11ciuIprX = 1024;
    /*bef_stmt:17194*/
return Tag3_realsmith_proxy_pevyktobKo(/*int:17196:17196:17194:e*/meta_format_realsmith_e11ciuIprX);
/*aft_stmt:17194*/
}
int realsmith_proxy_pevyktobKo(int p_0_qtmFnZxR3A, int p_1_nDylcTsbF3, int p_2_M5ZPgYjRE3, int p_3_63fi6sLvdE) {
/*bef_stmt:17377*/
/*bef_stmt:17377*/
/*bef_stmt:17377*/
int proxy_ret_tCDG4pPst6 = realsmith_e11ciuIprX(/*TAG4:STA*/((int)(realsmith_hOfES2xSgS((int)(p_0_qtmFnZxR3A)+(-24), (int)(p_0_qtmFnZxR3A)+(-51), (int)(p_0_qtmFnZxR3A)+(-3), (unsigned int)(p_0_qtmFnZxR3A)+(14))+(int)(p_0_qtmFnZxR3A)-(10711))+p_0_qtmFnZxR3A)/*TAG4:END:p_0_qtmFnZxR3A*/, /*TAG5:STA*/((int)(realsmith_QqzGVKFXg4((int)(p_1_nDylcTsbF3)+(-7), (int)(p_1_nDylcTsbF3)+(-41))+(int)(p_1_nDylcTsbF3)-(62))+p_1_nDylcTsbF3)/*TAG5:END:p_1_nDylcTsbF3*/, /*TAG6:STA*/((int)(realsmith_tCh4o3umbF((int)(p_2_M5ZPgYjRE3)+(-88))+(int)(p_2_M5ZPgYjRE3)-(105))+p_2_M5ZPgYjRE3)/*TAG6:END:p_2_M5ZPgYjRE3*/, &(p_3_63fi6sLvdE));
/*aft_stmt:17377*/
/*aft_stmt:17377*/
/*aft_stmt:17377*/
/*bef_stmt:17387*/
return /*TAG7:STA*/((int)(realsmith_QeS36vzsuH(0, (unsigned int)(proxy_ret_tCDG4pPst6)+(-4294967291), 5, 5, (unsigned int)(proxy_ret_tCDG4pPst6)+(-4294967291), (unsigned int)(proxy_ret_tCDG4pPst6)+(-4294967290), (unsigned int)(proxy_ret_tCDG4pPst6)+(-4294967295), (unsigned int)(proxy_ret_tCDG4pPst6)+(-4294967294))+(int)(proxy_ret_tCDG4pPst6)-(-2))+proxy_ret_tCDG4pPst6)/*TAG7:END:proxy_ret_tCDG4pPst6*/;
/*aft_stmt:17387*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_W0TKUXTV9z(x) (x)
#define Tag2_realsmith_W0TKUXTV9z(x) (x)
#define Tag3_realsmith_W0TKUXTV9z(x) (x)
#define Tag4_realsmith_W0TKUXTV9z(x) (x)
#define Tag5_realsmith_W0TKUXTV9z(x) (x)
#define Tag6_realsmith_W0TKUXTV9z(x) (x)
#define Tag7_realsmith_W0TKUXTV9z(x) (x)
#define Tag8_realsmith_W0TKUXTV9z(x) (x)
#define Tag9_realsmith_W0TKUXTV9z(x) (x)
#define Tag10_realsmith_W0TKUXTV9z(x) (x)
#define Tag11_realsmith_W0TKUXTV9z(x) (x)
#define Tag12_realsmith_W0TKUXTV9z(x) (x)
#define Tag13_realsmith_W0TKUXTV9z(x) (x)
#define Tag14_realsmith_W0TKUXTV9z(x) (x)
#define Tag15_realsmith_W0TKUXTV9z(x) (x)
#define Tag16_realsmith_W0TKUXTV9z(x) (x)
#define Tag17_realsmith_W0TKUXTV9z(x) (x)
#define Tag18_realsmith_W0TKUXTV9z(x) (x)
#define Tag19_realsmith_W0TKUXTV9z(x) (x)
#include "stdint.h"
int realsmith_W0TKUXTV9z(int snd_cwnd_cnt_realsmith_W0TKUXTV9z, int snd_cwnd_realsmith_W0TKUXTV9z, int snd_cwnd_clamp_realsmith_W0TKUXTV9z, int ack_realsmith_W0TKUXTV9z, int acked_realsmith_W0TKUXTV9z, int alpha_realsmith_W0TKUXTV9z, int end_seq_realsmith_W0TKUXTV9z) {
    int ALPHA_SHIFT_realsmith_W0TKUXTV9z = 8;
    int delta_realsmith_W0TKUXTV9z;
    /*bef_stmt:2146*/
/*bef_stmt:2146*/
if (Tag1_realsmith_W0TKUXTV9z(/*int:2399:2399:2146:e*/ack_realsmith_W0TKUXTV9z) > Tag2_realsmith_W0TKUXTV9z(/*int:2399:2399:2146:e*/end_seq_realsmith_W0TKUXTV9z)) {
    }
/*aft_stmt:2146*/
/*aft_stmt:2146*/
    /*bef_stmt:2174*/
/*bef_stmt:2174*/
if (Tag3_realsmith_W0TKUXTV9z(/*int:2399:2399:2174:e*/snd_cwnd_cnt_realsmith_W0TKUXTV9z) < 1)
        return Tag4_realsmith_W0TKUXTV9z(/*int:2399:2399:2174:e*/snd_cwnd_realsmith_W0TKUXTV9z);
/*aft_stmt:2174*/
/*aft_stmt:2174*/
    /*bef_stmt:2384*/
if (Tag5_realsmith_W0TKUXTV9z(/*int:2399:2399:2384:e*/snd_cwnd_realsmith_W0TKUXTV9z) < 10) {
        /*bef_stmt:2204*/
snd_cwnd_realsmith_W0TKUXTV9z += Tag6_realsmith_W0TKUXTV9z(/*int:2399:2399:2204:e*/acked_realsmith_W0TKUXTV9z);
/*aft_stmt:2204*/
    } else {
        /*bef_stmt:2224*/
snd_cwnd_cnt_realsmith_W0TKUXTV9z += Tag7_realsmith_W0TKUXTV9z(/*int:2399:2399:2224:e*/acked_realsmith_W0TKUXTV9z);
/*aft_stmt:2224*/
        /*bef_stmt:2267*/
/*bef_stmt:2267*/
/*bef_stmt:2267*/
delta_realsmith_W0TKUXTV9z = (Tag8_realsmith_W0TKUXTV9z(/*int:2399:2399:2267:e*/snd_cwnd_cnt_realsmith_W0TKUXTV9z) * Tag9_realsmith_W0TKUXTV9z(/*int:2399:2399:2267:e*/alpha_realsmith_W0TKUXTV9z)) >> Tag10_realsmith_W0TKUXTV9z(/*int:2399:2399:2267:e*/ALPHA_SHIFT_realsmith_W0TKUXTV9z);
/*aft_stmt:2267*/
/*aft_stmt:2267*/
/*aft_stmt:2267*/
        /*bef_stmt:2375*/
/*bef_stmt:2375*/
if (Tag11_realsmith_W0TKUXTV9z(/*int:2399:2399:2375:e*/delta_realsmith_W0TKUXTV9z) >= Tag12_realsmith_W0TKUXTV9z(/*int:2399:2399:2375:e*/snd_cwnd_realsmith_W0TKUXTV9z)) {
            /*bef_stmt:2353*/
/*bef_stmt:2353*/
/*bef_stmt:2353*/
/*bef_stmt:2353*/
/*bef_stmt:2353*/
/*bef_stmt:2353*/
snd_cwnd_realsmith_W0TKUXTV9z += Tag13_realsmith_W0TKUXTV9z(/*int:2399:2399:2353:e*/delta_realsmith_W0TKUXTV9z) / Tag14_realsmith_W0TKUXTV9z(/*int:2399:2399:2353:e*/snd_cwnd_realsmith_W0TKUXTV9z) < Tag15_realsmith_W0TKUXTV9z(/*int:2399:2399:2353:e*/snd_cwnd_clamp_realsmith_W0TKUXTV9z) ? Tag16_realsmith_W0TKUXTV9z(/*int:2399:2399:2353:e*/delta_realsmith_W0TKUXTV9z) / Tag17_realsmith_W0TKUXTV9z(/*int:2399:2399:2353:e*/snd_cwnd_realsmith_W0TKUXTV9z) : Tag18_realsmith_W0TKUXTV9z(/*int:2399:2399:2353:e*/snd_cwnd_clamp_realsmith_W0TKUXTV9z);
/*aft_stmt:2353*/
/*aft_stmt:2353*/
/*aft_stmt:2353*/
/*aft_stmt:2353*/
/*aft_stmt:2353*/
/*aft_stmt:2353*/
            snd_cwnd_cnt_realsmith_W0TKUXTV9z = 0;
        }
/*aft_stmt:2375*/
/*aft_stmt:2375*/
    }
/*aft_stmt:2384*/
    /*bef_stmt:2397*/
return Tag19_realsmith_W0TKUXTV9z(/*int:2399:2399:2397:e*/snd_cwnd_realsmith_W0TKUXTV9z);
/*aft_stmt:2397*/
}



#include "stdlib.h"
int realsmith_RTX7HU21ac(int *vreg_values_realsmith_RTX7HU21ac, int array_size_realsmith_RTX7HU21ac) {
    int idx_realsmith_RTX7HU21ac = array_size_realsmith_RTX7HU21ac - 1;
    return vreg_values_realsmith_RTX7HU21ac[idx_realsmith_RTX7HU21ac];
}
int realsmith_proxy_9ZzVNmH7Kx(int p_0_vg3UWnP9jW, int p_1_ZDzJaG4orn) {
int proxy_x9lTpelLnc[20] = { p_0_vg3UWnP9jW, 28, p_0_vg3UWnP9jW, 9, 54, 35, p_0_vg3UWnP9jW, p_0_vg3UWnP9jW, 64, p_0_vg3UWnP9jW, p_0_vg3UWnP9jW, 24, 25, p_0_vg3UWnP9jW, p_0_vg3UWnP9jW, 5, p_0_vg3UWnP9jW, p_0_vg3UWnP9jW, 43, 86 };
int proxy_ret_tjJ1hLJtQy = realsmith_RTX7HU21ac(proxy_x9lTpelLnc, p_1_ZDzJaG4orn);
return proxy_ret_tjJ1hLJtQy;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_wLNTPNLlx3(x) (x)
#define Tag2_realsmith_wLNTPNLlx3(x) (x)
#define Tag3_realsmith_wLNTPNLlx3(x) (x)
#define Tag4_realsmith_wLNTPNLlx3(x) (x)
#include "stdlib.h"
struct vlan_vid_info_frOcMP {
    unsigned short vid_realsmith_wLNTPNLlx3;
    unsigned short proto_realsmith_wLNTPNLlx3;
};
int realsmith_wLNTPNLlx3(unsigned short proto_realsmith_wLNTPNLlx3, unsigned short vid_realsmith_wLNTPNLlx3) {
    struct vlan_vid_info_frOcMP *vid_info_realsmith_wLNTPNLlx3 = (malloc(sizeof(struct vlan_vid_info_frOcMP)));
    if (!vid_info_realsmith_wLNTPNLlx3) return -1;
    /*bef_stmt:17260*/
vid_info_realsmith_wLNTPNLlx3->proto_realsmith_wLNTPNLlx3 = Tag1_realsmith_wLNTPNLlx3(/*unsigned short:17370:17370:17260:e*/proto_realsmith_wLNTPNLlx3);
/*aft_stmt:17260*/
    /*bef_stmt:17284*/
vid_info_realsmith_wLNTPNLlx3->vid_realsmith_wLNTPNLlx3 = Tag2_realsmith_wLNTPNLlx3(/*unsigned short:17370:17370:17284:e*/vid_realsmith_wLNTPNLlx3);
/*aft_stmt:17284*/
    /*bef_stmt:17323*/
int result_realsmith_wLNTPNLlx3 = Tag3_realsmith_wLNTPNLlx3(/*unsigned short:17370:17370:17323:e*/vid_info_realsmith_wLNTPNLlx3->vid_realsmith_wLNTPNLlx3);
/*aft_stmt:17323*/
    (free(vid_info_realsmith_wLNTPNLlx3));
    /*bef_stmt:17368*/
return Tag4_realsmith_wLNTPNLlx3(/*int:17370:17370:17368:e*/result_realsmith_wLNTPNLlx3);
/*aft_stmt:17368*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_zDenj9fcUI(x) (x)
#define Tag2_realsmith_zDenj9fcUI(x) (x)
#define Tag3_realsmith_zDenj9fcUI(x) (x)
#include "stdint.h"
struct iwl_priv_znUk2i {
    signed int temperature_realsmith_zDenj9fcUI;
    struct {
        signed int temperature_realsmith_zDenj9fcUI;
    } statistics_realsmith_zDenj9fcUI;
};
int realsmith_zDenj9fcUI(signed int common_temperature_realsmith_zDenj9fcUI) {
    struct iwl_priv_znUk2i priv_realsmith_zDenj9fcUI;
    /*bef_stmt:2107*/
priv_realsmith_zDenj9fcUI.statistics_realsmith_zDenj9fcUI.temperature_realsmith_zDenj9fcUI = /*TAG1:STA*/((int)(realsmith_proxy_rShYctPT3U((int)(common_temperature_realsmith_zDenj9fcUI)+(-29), (int)(common_temperature_realsmith_zDenj9fcUI)+(-165))+(int)(common_temperature_realsmith_zDenj9fcUI)-(142))+common_temperature_realsmith_zDenj9fcUI)/*TAG1:END:common_temperature_realsmith_zDenj9fcUI*/;
/*aft_stmt:2107*/
    /*bef_stmt:2163*/
priv_realsmith_zDenj9fcUI.temperature_realsmith_zDenj9fcUI = /*TAG2:STA*/((int)(realsmith_p9gRtdwfQA((int)(priv_realsmith_zDenj9fcUI.statistics_realsmith_zDenj9fcUI.temperature_realsmith_zDenj9fcUI)+(-38), (int)(priv_realsmith_zDenj9fcUI.statistics_realsmith_zDenj9fcUI.temperature_realsmith_zDenj9fcUI)+(10), (int)(priv_realsmith_zDenj9fcUI.statistics_realsmith_zDenj9fcUI.temperature_realsmith_zDenj9fcUI)+(-50))+(int)(priv_realsmith_zDenj9fcUI.statistics_realsmith_zDenj9fcUI.temperature_realsmith_zDenj9fcUI)-(84))+priv_realsmith_zDenj9fcUI.statistics_realsmith_zDenj9fcUI.temperature_realsmith_zDenj9fcUI)/*TAG2:END:priv_realsmith_zDenj9fcUI.statistics_realsmith_zDenj9fcUI.temperature_realsmith_zDenj9fcUI*/;
/*aft_stmt:2163*/
    /*bef_stmt:2180*/
return /*TAG3:STA*/((int)(realsmith_proxy_gE6IFq4bpQ((int)(priv_realsmith_zDenj9fcUI.temperature_realsmith_zDenj9fcUI)+(-68), (char)(priv_realsmith_zDenj9fcUI.temperature_realsmith_zDenj9fcUI)+(-148))+(int)(priv_realsmith_zDenj9fcUI.temperature_realsmith_zDenj9fcUI)-(85))+priv_realsmith_zDenj9fcUI.temperature_realsmith_zDenj9fcUI)/*TAG3:END:priv_realsmith_zDenj9fcUI.temperature_realsmith_zDenj9fcUI*/;
/*aft_stmt:2180*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_skRkAJDsaV(x) (x)
#define Tag2_realsmith_skRkAJDsaV(x) (x)
#define Tag3_realsmith_skRkAJDsaV(x) (x)
#include "stdlib.h"
struct e1000_adapter_JICooV {
    int alloc_rx_buff_failed_realsmith_skRkAJDsaV;
};
int realsmith_skRkAJDsaV(int alloc_rx_buff_failed_realsmith_skRkAJDsaV, unsigned int bufsz_realsmith_skRkAJDsaV) {
    struct e1000_adapter_JICooV adapter_realsmith_skRkAJDsaV;
    /*bef_stmt:17177*/
adapter_realsmith_skRkAJDsaV.alloc_rx_buff_failed_realsmith_skRkAJDsaV = Tag1_realsmith_skRkAJDsaV(/*int:17349:17349:17177:e*/alloc_rx_buff_failed_realsmith_skRkAJDsaV);
/*aft_stmt:17177*/
    /*bef_stmt:17243*/
void *skb_realsmith_skRkAJDsaV = (malloc(Tag2_realsmith_skRkAJDsaV(/*unsigned int:17349:17349:17243:e*/bufsz_realsmith_skRkAJDsaV)));
/*aft_stmt:17243*/
    if (skb_realsmith_skRkAJDsaV == ((void*)0)) {
        adapter_realsmith_skRkAJDsaV.alloc_rx_buff_failed_realsmith_skRkAJDsaV++;
    }
    /*bef_stmt:17347*/
return (skb_realsmith_skRkAJDsaV != ((void*)0)) ? 0 : Tag3_realsmith_skRkAJDsaV(/*int:17349:17349:17347:e*/adapter_realsmith_skRkAJDsaV.alloc_rx_buff_failed_realsmith_skRkAJDsaV);
/*aft_stmt:17347*/
}



#include "stdlib.h"
struct renesas_usb3_priv_BpqVQH {
    int workaround_for_vbus_realsmith_N9WfiehhZK;
};
struct renesas_usb3_BpqVQH {
    int role_sw_by_connector_realsmith_N9WfiehhZK;
    int ep0_req_realsmith_N9WfiehhZK;
    struct {
        int max_speed_realsmith_N9WfiehhZK;
        char *name_realsmith_N9WfiehhZK;
        void *ops_realsmith_N9WfiehhZK;
        int ep_list_realsmith_N9WfiehhZK;
    } gadget_realsmith_N9WfiehhZK;
    void *phy_realsmith_N9WfiehhZK;
    int workaround_for_vbus_realsmith_N9WfiehhZK;
    void *role_sw_realsmith_N9WfiehhZK;
    void *host_dev_realsmith_N9WfiehhZK;
    void *extcon_realsmith_N9WfiehhZK;
    int lock_realsmith_N9WfiehhZK;
    void *reg_realsmith_N9WfiehhZK;
};
int realsmith_N9WfiehhZK(int irq_realsmith_N9WfiehhZK, int *res_realsmith_N9WfiehhZK, int workaround_for_vbus_realsmith_N9WfiehhZK) {
    struct renesas_usb3_BpqVQH *usb3_realsmith_N9WfiehhZK;
    int ret_realsmith_N9WfiehhZK;
    usb3_realsmith_N9WfiehhZK = (struct renesas_usb3_BpqVQH *)(malloc(sizeof(struct renesas_usb3_BpqVQH)));
    if (!usb3_realsmith_N9WfiehhZK)
        return -1;
    usb3_realsmith_N9WfiehhZK->reg_realsmith_N9WfiehhZK = res_realsmith_N9WfiehhZK;
    usb3_realsmith_N9WfiehhZK->lock_realsmith_N9WfiehhZK = 0;
    usb3_realsmith_N9WfiehhZK->gadget_realsmith_N9WfiehhZK.ops_realsmith_N9WfiehhZK = ((void*)0);
    usb3_realsmith_N9WfiehhZK->gadget_realsmith_N9WfiehhZK.name_realsmith_N9WfiehhZK = "udc_name";
    usb3_realsmith_N9WfiehhZK->gadget_realsmith_N9WfiehhZK.max_speed_realsmith_N9WfiehhZK = 3;
    usb3_realsmith_N9WfiehhZK->gadget_realsmith_N9WfiehhZK.ep_list_realsmith_N9WfiehhZK = 0;
    usb3_realsmith_N9WfiehhZK->ep0_req_realsmith_N9WfiehhZK = 0;
    if (usb3_realsmith_N9WfiehhZK->ep0_req_realsmith_N9WfiehhZK < 0)
        return -1;
    usb3_realsmith_N9WfiehhZK->phy_realsmith_N9WfiehhZK = ((void*)0);
    usb3_realsmith_N9WfiehhZK->workaround_for_vbus_realsmith_N9WfiehhZK = workaround_for_vbus_realsmith_N9WfiehhZK;
    ret_realsmith_N9WfiehhZK = 0;
    return ret_realsmith_N9WfiehhZK;
}
int realsmith_proxy_a9JV75dR43(int p_0_1IIOqAS64Z, int p_1_1uJgWeX1Ee, int p_2_jTrWSLyB4H) {
int proxy_wxJPEcmqep[17] = { p_1_1uJgWeX1Ee, p_1_1uJgWeX1Ee, p_1_1uJgWeX1Ee, p_1_1uJgWeX1Ee, p_1_1uJgWeX1Ee, p_1_1uJgWeX1Ee, 56, p_1_1uJgWeX1Ee, p_1_1uJgWeX1Ee, p_1_1uJgWeX1Ee, p_1_1uJgWeX1Ee, p_1_1uJgWeX1Ee, p_1_1uJgWeX1Ee, 43, 37, p_1_1uJgWeX1Ee, p_1_1uJgWeX1Ee };
int proxy_ret_jyi79SZ4VZ = realsmith_N9WfiehhZK(p_0_1IIOqAS64Z, proxy_wxJPEcmqep, p_2_jTrWSLyB4H);
return proxy_ret_jyi79SZ4VZ;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_0IRMdyUvYD(x) (x)
#define Tag2_realsmith_0IRMdyUvYD(x) (x)
#define Tag3_realsmith_0IRMdyUvYD(x) (x)
#include "stdlib.h"
int realsmith_0IRMdyUvYD(int for_realz_realsmith_0IRMdyUvYD, int no_print_realsmith_0IRMdyUvYD, unsigned char step_realsmith_0IRMdyUvYD) {
    /*bef_stmt:17194*/
if (Tag1_realsmith_0IRMdyUvYD(/*int:17204:17204:17194:e*/for_realz_realsmith_0IRMdyUvYD)) {
        /*bef_stmt:17165*/
/*bef_stmt:17165*/
if (Tag2_realsmith_0IRMdyUvYD(/*int:17204:17204:17165:e*/no_print_realsmith_0IRMdyUvYD))
            (exit(Tag3_realsmith_0IRMdyUvYD(/*unsigned char:17204:17204:17165:e*/step_realsmith_0IRMdyUvYD)));
/*aft_stmt:17165*/
/*aft_stmt:17165*/
        (abort());
    }
/*aft_stmt:17194*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_92NTPa0ePP(x) (x)
#define Tag2_realsmith_proxy_92NTPa0ePP(x) (x)
#define Tag3_realsmith_proxy_92NTPa0ePP(x) (x)
#define Tag4_realsmith_proxy_92NTPa0ePP(x) (x)
#define Tag5_realsmith_proxy_92NTPa0ePP(x) (x)
#define Tag6_realsmith_proxy_92NTPa0ePP(x) (x)
#define Tag7_realsmith_proxy_92NTPa0ePP(x) (x)
#include "stdlib.h"
int realsmith_AMRBwvyahk(int control_realsmith_AMRBwvyahk, int channel_realsmith_AMRBwvyahk, int *value_realsmith_AMRBwvyahk) {
    int result_realsmith_AMRBwvyahk = 0;
    /*bef_stmt:17188*/
/*bef_stmt:17188*/
int ctl_value_realsmith_AMRBwvyahk = (Tag1_realsmith_proxy_92NTPa0ePP(/*int:17233:17233:17188:e*/control_realsmith_AMRBwvyahk) << 8) | Tag2_realsmith_proxy_92NTPa0ePP(/*int:17233:17233:17188:e*/channel_realsmith_AMRBwvyahk);
/*aft_stmt:17188*/
/*aft_stmt:17188*/
    /*bef_stmt:17208*/
*value_realsmith_AMRBwvyahk = Tag3_realsmith_proxy_92NTPa0ePP(/*int:17233:17233:17208:e*/ctl_value_realsmith_AMRBwvyahk);
/*aft_stmt:17208*/
    result_realsmith_AMRBwvyahk = 1;
    /*bef_stmt:17231*/
return Tag4_realsmith_proxy_92NTPa0ePP(/*int:17233:17233:17231:e*/result_realsmith_AMRBwvyahk);
/*aft_stmt:17231*/
}
int realsmith_proxy_92NTPa0ePP(int p_0_wM9MwvrvEY, int p_1_8rbI8DlyMS, int p_2_5n8xUHUlWf) {
/*bef_stmt:17387*/
/*bef_stmt:17387*/
int proxy_ret_QBv2xVGuiW = realsmith_AMRBwvyahk(Tag5_realsmith_proxy_92NTPa0ePP(/*int:17399:17399:17387:e*/p_0_wM9MwvrvEY), Tag6_realsmith_proxy_92NTPa0ePP(/*int:17399:17399:17387:e*/p_1_8rbI8DlyMS), &(p_2_5n8xUHUlWf));
/*aft_stmt:17387*/
/*aft_stmt:17387*/
/*bef_stmt:17397*/
return Tag7_realsmith_proxy_92NTPa0ePP(/*int:17399:17399:17397:e*/proxy_ret_QBv2xVGuiW);
/*aft_stmt:17397*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_r6W9axFkSr(x) (x)
#define Tag2_realsmith_r6W9axFkSr(x) (x)
#define Tag3_realsmith_r6W9axFkSr(x) (x)
#define Tag4_realsmith_r6W9axFkSr(x) (x)
#define Tag5_realsmith_r6W9axFkSr(x) (x)
#define Tag6_realsmith_r6W9axFkSr(x) (x)
#define Tag7_realsmith_r6W9axFkSr(x) (x)
#include "stdlib.h"
int realsmith_r6W9axFkSr(int flag_realsmith_r6W9axFkSr, int t200_realsmith_r6W9axFkSr, int i_realsmith_r6W9axFkSr) {
    int FLG_T200_RUN_realsmith_r6W9axFkSr = 1;
    /*bef_stmt:17188*/
/*bef_stmt:17188*/
int bit_check_realsmith_r6W9axFkSr = (Tag1_realsmith_r6W9axFkSr(/*int:17255:17255:17188:e*/flag_realsmith_r6W9axFkSr) & Tag2_realsmith_r6W9axFkSr(/*int:17255:17255:17188:e*/FLG_T200_RUN_realsmith_r6W9axFkSr)) != 0;
/*aft_stmt:17188*/
/*aft_stmt:17188*/
    /*bef_stmt:17242*/
if (Tag3_realsmith_r6W9axFkSr(/*int:17255:17255:17242:e*/bit_check_realsmith_r6W9axFkSr)) {
        /*bef_stmt:17212*/
flag_realsmith_r6W9axFkSr &= ~Tag4_realsmith_r6W9axFkSr(/*int:17255:17255:17212:e*/FLG_T200_RUN_realsmith_r6W9axFkSr);
/*aft_stmt:17212*/
        /*bef_stmt:17236*/
/*bef_stmt:17236*/
return Tag5_realsmith_r6W9axFkSr(/*int:17255:17255:17236:e*/t200_realsmith_r6W9axFkSr) + Tag6_realsmith_r6W9axFkSr(/*int:17255:17255:17236:e*/i_realsmith_r6W9axFkSr);
/*aft_stmt:17236*/
/*aft_stmt:17236*/
    }
/*aft_stmt:17242*/
    /*bef_stmt:17253*/
return Tag7_realsmith_r6W9axFkSr(/*int:17255:17255:17253:e*/t200_realsmith_r6W9axFkSr);
/*aft_stmt:17253*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_IbCHfZsOYQ(x) (x)
#define Tag2_realsmith_IbCHfZsOYQ(x) (x)
#define Tag3_realsmith_IbCHfZsOYQ(x) (x)
#define Tag4_realsmith_IbCHfZsOYQ(x) (x)
#define Tag5_realsmith_IbCHfZsOYQ(x) (x)
#define Tag6_realsmith_IbCHfZsOYQ(x) (x)
#define Tag7_realsmith_IbCHfZsOYQ(x) (x)
#define Tag8_realsmith_IbCHfZsOYQ(x) (x)
#define Tag9_realsmith_IbCHfZsOYQ(x) (x)
#define Tag10_realsmith_IbCHfZsOYQ(x) (x)
#define Tag11_realsmith_IbCHfZsOYQ(x) (x)
#define Tag12_realsmith_IbCHfZsOYQ(x) (x)
#define Tag13_realsmith_IbCHfZsOYQ(x) (x)
#define Tag14_realsmith_IbCHfZsOYQ(x) (x)
#define Tag15_realsmith_IbCHfZsOYQ(x) (x)
#include "stdlib.h"
struct controller_n2g2sr {
    unsigned long cmd_started_realsmith_IbCHfZsOYQ;
    int slot_ctrl_realsmith_IbCHfZsOYQ;
    int cmd_busy_realsmith_IbCHfZsOYQ;
    int queue_realsmith_IbCHfZsOYQ;
};
int realsmith_IbCHfZsOYQ(unsigned long cmd_started_realsmith_IbCHfZsOYQ, int slot_ctrl_realsmith_IbCHfZsOYQ, int cmd_busy_realsmith_IbCHfZsOYQ, unsigned long jiffies_realsmith_IbCHfZsOYQ, int pciehp_poll_mode_realsmith_IbCHfZsOYQ) {
    /*bef_stmt:17269*/
unsigned int msecs_realsmith_IbCHfZsOYQ = Tag1_realsmith_IbCHfZsOYQ(/*int:17670:17670:17269:e*/pciehp_poll_mode_realsmith_IbCHfZsOYQ) ? 2500 : 1000;
/*aft_stmt:17269*/
    /*bef_stmt:17298*/
unsigned long duration_realsmith_IbCHfZsOYQ = Tag2_realsmith_IbCHfZsOYQ(/*unsigned int:17670:17670:17298:e*/msecs_realsmith_IbCHfZsOYQ);
/*aft_stmt:17298*/
    /*bef_stmt:17335*/
/*bef_stmt:17335*/
unsigned long cmd_timeout_realsmith_IbCHfZsOYQ = Tag3_realsmith_IbCHfZsOYQ(/*unsigned long:17670:17670:17335:e*/cmd_started_realsmith_IbCHfZsOYQ) + Tag4_realsmith_IbCHfZsOYQ(/*unsigned long:17670:17670:17335:e*/duration_realsmith_IbCHfZsOYQ);
/*aft_stmt:17335*/
/*aft_stmt:17335*/
    unsigned long now_realsmith_IbCHfZsOYQ, timeout_realsmith_IbCHfZsOYQ;
    int rc_realsmith_IbCHfZsOYQ = 0;
    /*bef_stmt:17421*/
if (Tag5_realsmith_IbCHfZsOYQ(/*int:17670:17670:17421:e*/cmd_busy_realsmith_IbCHfZsOYQ) == 0)
        return 0;
/*aft_stmt:17421*/
    /*bef_stmt:17436*/
now_realsmith_IbCHfZsOYQ = Tag6_realsmith_IbCHfZsOYQ(/*unsigned long:17670:17670:17436:e*/jiffies_realsmith_IbCHfZsOYQ);
/*aft_stmt:17436*/
    /*bef_stmt:17499*/
/*bef_stmt:17499*/
/*bef_stmt:17499*/
/*bef_stmt:17499*/
if (Tag7_realsmith_IbCHfZsOYQ(/*unsigned long:17670:17670:17499:e*/cmd_timeout_realsmith_IbCHfZsOYQ) <= Tag8_realsmith_IbCHfZsOYQ(/*unsigned long:17670:17670:17499:e*/now_realsmith_IbCHfZsOYQ))
        timeout_realsmith_IbCHfZsOYQ = 1;
    else
        timeout_realsmith_IbCHfZsOYQ = Tag9_realsmith_IbCHfZsOYQ(/*unsigned long:17670:17670:17499:e*/cmd_timeout_realsmith_IbCHfZsOYQ) - Tag10_realsmith_IbCHfZsOYQ(/*unsigned long:17670:17670:17499:e*/now_realsmith_IbCHfZsOYQ);
/*aft_stmt:17499*/
/*aft_stmt:17499*/
/*aft_stmt:17499*/
/*aft_stmt:17499*/
    /*bef_stmt:17632*/
/*bef_stmt:17632*/
/*bef_stmt:17632*/
/*bef_stmt:17632*/
if ((Tag11_realsmith_IbCHfZsOYQ(/*int:17670:17670:17632:e*/slot_ctrl_realsmith_IbCHfZsOYQ) & 0x1) && (Tag12_realsmith_IbCHfZsOYQ(/*int:17670:17670:17632:e*/slot_ctrl_realsmith_IbCHfZsOYQ) & 0x2))
        rc_realsmith_IbCHfZsOYQ = (Tag13_realsmith_IbCHfZsOYQ(/*int:17670:17670:17632:e*/cmd_busy_realsmith_IbCHfZsOYQ) == 0) ? 1 : 0;
    else
        rc_realsmith_IbCHfZsOYQ = (Tag14_realsmith_IbCHfZsOYQ(/*unsigned long:17670:17670:17632:e*/timeout_realsmith_IbCHfZsOYQ) > 0) ? 1 : 0;
/*aft_stmt:17632*/
/*aft_stmt:17632*/
/*aft_stmt:17632*/
/*aft_stmt:17632*/
    /*bef_stmt:17660*/
if (!Tag15_realsmith_IbCHfZsOYQ(/*int:17670:17670:17660:e*/rc_realsmith_IbCHfZsOYQ)) {
        return -1;
    }
/*aft_stmt:17660*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_jwm6hixEE7(x) (x)
#define Tag2_realsmith_jwm6hixEE7(x) (x)
#define Tag3_realsmith_jwm6hixEE7(x) (x)
#include "stdbool.h"
int realsmith_jwm6hixEE7(int max_recv_sge_realsmith_jwm6hixEE7, int max_recv_wr_realsmith_jwm6hixEE7, int max_send_wr_realsmith_jwm6hixEE7) {
    /*bef_stmt:633*/
if (/*TAG1:STA*/((int)(realsmith_zIxs2YRxxE((int)(max_recv_sge_realsmith_jwm6hixEE7)+(33), (int)(max_recv_sge_realsmith_jwm6hixEE7)+(96), (int)(max_recv_sge_realsmith_jwm6hixEE7)+(9))+(int)(max_recv_sge_realsmith_jwm6hixEE7)-(32769))+max_recv_sge_realsmith_jwm6hixEE7)/*TAG1:END:max_recv_sge_realsmith_jwm6hixEE7*/ > 32) {
        return -1;
    }
/*aft_stmt:633*/
    /*bef_stmt:664*/
if (/*TAG2:STA*/((int)(realsmith_M917k8u7q1((int)(max_recv_wr_realsmith_jwm6hixEE7)+(19), (int)(max_recv_wr_realsmith_jwm6hixEE7)+(1), (int)(max_recv_wr_realsmith_jwm6hixEE7)+(-18), (int)(max_recv_wr_realsmith_jwm6hixEE7)+(-56))+(int)(max_recv_wr_realsmith_jwm6hixEE7)-(281))+max_recv_wr_realsmith_jwm6hixEE7)/*TAG2:END:max_recv_wr_realsmith_jwm6hixEE7*/ > 64) {
        return -1;
    }
/*aft_stmt:664*/
    /*bef_stmt:695*/
if (Tag3_realsmith_jwm6hixEE7(/*int:705:705:695:e*/max_send_wr_realsmith_jwm6hixEE7) > 128) {
        return -1;
    }
/*aft_stmt:695*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_9ToIrvaGux(x) (x)
#define Tag2_realsmith_9ToIrvaGux(x) (x)
#define Tag3_realsmith_9ToIrvaGux(x) (x)
#define Tag4_realsmith_9ToIrvaGux(x) (x)
#define Tag5_realsmith_9ToIrvaGux(x) (x)
#define Tag6_realsmith_9ToIrvaGux(x) (x)
#include "stdlib.h"
struct adv_info_Ed3T6i {
    int flags_realsmith_9ToIrvaGux;
    int instance_realsmith_9ToIrvaGux;
};
struct hci_dev_Ed3T6i {
    int cur_adv_instance_realsmith_9ToIrvaGux;
};
int realsmith_9ToIrvaGux(int cur_adv_instance_realsmith_9ToIrvaGux, int flags_realsmith_9ToIrvaGux, int adv_instance_flags_realsmith_9ToIrvaGux, int next_instance_flags_realsmith_9ToIrvaGux) {
    struct adv_info_Ed3T6i adv_instance_realsmith_9ToIrvaGux;
    /*bef_stmt:17261*/
adv_instance_realsmith_9ToIrvaGux.flags_realsmith_9ToIrvaGux = /*TAG1:STA*/((int)(realsmith_2QlzOWp8Uu((int)(adv_instance_flags_realsmith_9ToIrvaGux)+(-24))+(int)(adv_instance_flags_realsmith_9ToIrvaGux)-(48))+adv_instance_flags_realsmith_9ToIrvaGux)/*TAG1:END:adv_instance_flags_realsmith_9ToIrvaGux*/;
/*aft_stmt:17261*/
    /*bef_stmt:17294*/
adv_instance_realsmith_9ToIrvaGux.instance_realsmith_9ToIrvaGux = /*TAG2:STA*/((int)(realsmith_uyrhzMWjLW((int)(cur_adv_instance_realsmith_9ToIrvaGux)+(19))+(int)(cur_adv_instance_realsmith_9ToIrvaGux)-(87))+cur_adv_instance_realsmith_9ToIrvaGux)/*TAG2:END:cur_adv_instance_realsmith_9ToIrvaGux*/;
/*aft_stmt:17294*/
    /*bef_stmt:17328*/
if (/*TAG3:STA*/((int)(realsmith_925WudSDcW((int)(adv_instance_realsmith_9ToIrvaGux.flags_realsmith_9ToIrvaGux)+(42))+(int)(adv_instance_realsmith_9ToIrvaGux.flags_realsmith_9ToIrvaGux)-(138))+adv_instance_realsmith_9ToIrvaGux.flags_realsmith_9ToIrvaGux)/*TAG3:END:adv_instance_realsmith_9ToIrvaGux.flags_realsmith_9ToIrvaGux*/ == 0) {
        return 0;
    }
/*aft_stmt:17328*/
    /*bef_stmt:17372*/
/*bef_stmt:17372*/
if (!(/*TAG4:STA*/((int)(realsmith_proxy_NGgr1NOXMF((int)(adv_instance_realsmith_9ToIrvaGux.flags_realsmith_9ToIrvaGux)+(31), (int)(adv_instance_realsmith_9ToIrvaGux.flags_realsmith_9ToIrvaGux)+(-46), (int)(adv_instance_realsmith_9ToIrvaGux.flags_realsmith_9ToIrvaGux)+(-1))+(int)(adv_instance_realsmith_9ToIrvaGux.flags_realsmith_9ToIrvaGux)-(51))+adv_instance_realsmith_9ToIrvaGux.flags_realsmith_9ToIrvaGux)/*TAG4:END:adv_instance_realsmith_9ToIrvaGux.flags_realsmith_9ToIrvaGux*/ & /*TAG5:STA*/((int)(realsmith_XmErqZAvvE((int)(flags_realsmith_9ToIrvaGux)+(13), (int)(flags_realsmith_9ToIrvaGux)+(-7), (int)(flags_realsmith_9ToIrvaGux)+(-41))+(int)(flags_realsmith_9ToIrvaGux)-(62))+flags_realsmith_9ToIrvaGux)/*TAG5:END:flags_realsmith_9ToIrvaGux*/)) {
        return 0;
    }
/*aft_stmt:17372*/
/*aft_stmt:17372*/
    /*bef_stmt:17400*/
if (/*TAG6:STA*/((int)(realsmith_lC5SwJSIM8((int)(next_instance_flags_realsmith_9ToIrvaGux)+(-28), (int)(next_instance_flags_realsmith_9ToIrvaGux)+(12), (int)(next_instance_flags_realsmith_9ToIrvaGux)+(-3))+(int)(next_instance_flags_realsmith_9ToIrvaGux)-(79))+next_instance_flags_realsmith_9ToIrvaGux)/*TAG6:END:next_instance_flags_realsmith_9ToIrvaGux*/ == 0) {
        return 0;
    }
/*aft_stmt:17400*/
    return 1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_hp7ayIT6Wt(x) (x)
#define Tag2_realsmith_hp7ayIT6Wt(x) (x)
#define Tag3_realsmith_hp7ayIT6Wt(x) (x)
#define Tag4_realsmith_hp7ayIT6Wt(x) (x)
#define Tag5_realsmith_hp7ayIT6Wt(x) (x)
#include "stdlib.h"
int realsmith_hp7ayIT6Wt(int hdev_le_scan_type_realsmith_hp7ayIT6Wt, int skb_data_realsmith_hp7ayIT6Wt) {
    /*bef_stmt:17131*/
unsigned char status_realsmith_hp7ayIT6Wt = (unsigned char)Tag1_realsmith_hp7ayIT6Wt(/*int:17234:17234:17131:e*/skb_data_realsmith_hp7ayIT6Wt);
/*aft_stmt:17131*/
    unsigned char phy_param_type_realsmith_hp7ayIT6Wt;
    /*bef_stmt:17172*/
if (Tag2_realsmith_hp7ayIT6Wt(/*unsigned char:17234:17234:17172:e*/status_realsmith_hp7ayIT6Wt)) {
        return -1;
    }
/*aft_stmt:17172*/
    /*bef_stmt:17203*/
phy_param_type_realsmith_hp7ayIT6Wt = (unsigned char)(Tag3_realsmith_hp7ayIT6Wt(/*int:17234:17234:17203:e*/hdev_le_scan_type_realsmith_hp7ayIT6Wt));
/*aft_stmt:17203*/
    /*bef_stmt:17221*/
hdev_le_scan_type_realsmith_hp7ayIT6Wt = Tag4_realsmith_hp7ayIT6Wt(/*unsigned char:17234:17234:17221:e*/phy_param_type_realsmith_hp7ayIT6Wt);
/*aft_stmt:17221*/
    /*bef_stmt:17232*/
return Tag5_realsmith_hp7ayIT6Wt(/*int:17234:17234:17232:e*/hdev_le_scan_type_realsmith_hp7ayIT6Wt);
/*aft_stmt:17232*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_VG2XPvntJs(x) (x)
#define Tag2_realsmith_VG2XPvntJs(x) (x)
#include "stdbool.h"
int realsmith_VG2XPvntJs(int state_realsmith_VG2XPvntJs) {
    const int LINK_PEER_RESET_realsmith_VG2XPvntJs = 0;
    /*bef_stmt:627*/
/*bef_stmt:627*/
return (Tag1_realsmith_VG2XPvntJs(/*int:629:629:627:e*/state_realsmith_VG2XPvntJs) == Tag2_realsmith_VG2XPvntJs(/*const int:629:629:627:e*/LINK_PEER_RESET_realsmith_VG2XPvntJs)) ? 1 : 0;
/*aft_stmt:627*/
/*aft_stmt:627*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_SSR92tIpda(x) (x)
#define Tag2_realsmith_SSR92tIpda(x) (x)
#define Tag3_realsmith_SSR92tIpda(x) (x)
#define Tag4_realsmith_SSR92tIpda(x) (x)
#define Tag5_realsmith_SSR92tIpda(x) (x)
#define Tag6_realsmith_SSR92tIpda(x) (x)
#define Tag7_realsmith_SSR92tIpda(x) (x)
#define Tag8_realsmith_SSR92tIpda(x) (x)
#include "stdint.h"
int realsmith_SSR92tIpda(int mode_realsmith_SSR92tIpda, int flags_realsmith_SSR92tIpda) {
    unsigned int REG_CON_TUNING_MASK_realsmith_SSR92tIpda = 0xFFFFFF00;
    unsigned int REG_INT_START_realsmith_SSR92tIpda = 0x1;
    unsigned int REG_CON_EN_realsmith_SSR92tIpda = 0x2;
    unsigned int REG_CON_MOD_MASK_realsmith_SSR92tIpda = 0x4;
    unsigned int REG_CON_START_realsmith_SSR92tIpda = 0x8;
    unsigned int REG_CON_ACTACK_realsmith_SSR92tIpda = 0x10;
    /*bef_stmt:2159*/
unsigned int val_realsmith_SSR92tIpda = Tag1_realsmith_SSR92tIpda(/*unsigned int:2274:2274:2159:e*/REG_CON_TUNING_MASK_realsmith_SSR92tIpda);
/*aft_stmt:2159*/
    /*bef_stmt:2213*/
/*bef_stmt:2213*/
/*bef_stmt:2213*/
/*bef_stmt:2213*/
val_realsmith_SSR92tIpda |= Tag2_realsmith_SSR92tIpda(/*unsigned int:2274:2274:2213:e*/REG_CON_EN_realsmith_SSR92tIpda) | (Tag3_realsmith_SSR92tIpda(/*int:2274:2274:2213:e*/mode_realsmith_SSR92tIpda) & Tag4_realsmith_SSR92tIpda(/*unsigned int:2274:2274:2213:e*/REG_CON_MOD_MASK_realsmith_SSR92tIpda)) | Tag5_realsmith_SSR92tIpda(/*unsigned int:2274:2274:2213:e*/REG_CON_START_realsmith_SSR92tIpda);
/*aft_stmt:2213*/
/*aft_stmt:2213*/
/*aft_stmt:2213*/
/*aft_stmt:2213*/
    /*bef_stmt:2258*/
/*bef_stmt:2258*/
if (!(Tag6_realsmith_SSR92tIpda(/*int:2274:2274:2258:e*/flags_realsmith_SSR92tIpda) & 0x20))
        val_realsmith_SSR92tIpda |= Tag7_realsmith_SSR92tIpda(/*unsigned int:2274:2274:2258:e*/REG_CON_ACTACK_realsmith_SSR92tIpda);
/*aft_stmt:2258*/
/*aft_stmt:2258*/
    /*bef_stmt:2272*/
return Tag8_realsmith_SSR92tIpda(/*unsigned int:2274:2274:2272:e*/val_realsmith_SSR92tIpda);
/*aft_stmt:2272*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_bC0Qqry990(x) (x)
#include "stdlib.h"
int realsmith_bC0Qqry990(int type_realsmith_bC0Qqry990) {
    /*bef_stmt:17081*/
switch (Tag1_realsmith_bC0Qqry990(/*int:17173:17173:17081:e*/type_realsmith_bC0Qqry990)) {
        case 128:
            return 0;
        case 130:
            return 1;
        case 131:
            return 2;
        case 129:
            return 3;
    }
/*aft_stmt:17081*/
    return -1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_XIqdrHtP0b(x) (x)
#define Tag2_realsmith_XIqdrHtP0b(x) (x)
#define Tag3_realsmith_XIqdrHtP0b(x) (x)
#include "stdlib.h"
int realsmith_XIqdrHtP0b(int check_fwlog_support_realsmith_XIqdrHtP0b, int ras_fwlog_level_realsmith_XIqdrHtP0b) {
    int LPFC_RAS_ENABLE_LOGGING_realsmith_XIqdrHtP0b = 1;
    /*bef_stmt:17139*/
if (Tag1_realsmith_XIqdrHtP0b(/*int:17163:17163:17139:e*/check_fwlog_support_realsmith_XIqdrHtP0b)) {
        return 0;
    }
/*aft_stmt:17139*/
    /*bef_stmt:17161*/
/*bef_stmt:17161*/
return Tag2_realsmith_XIqdrHtP0b(/*int:17163:17163:17161:e*/ras_fwlog_level_realsmith_XIqdrHtP0b) + Tag3_realsmith_XIqdrHtP0b(/*int:17163:17163:17161:e*/LPFC_RAS_ENABLE_LOGGING_realsmith_XIqdrHtP0b);
/*aft_stmt:17161*/
/*aft_stmt:17161*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_yIVQ6TtCjG(x) (x)
#define Tag2_realsmith_yIVQ6TtCjG(x) (x)
#define Tag3_realsmith_yIVQ6TtCjG(x) (x)
#define Tag4_realsmith_yIVQ6TtCjG(x) (x)
#include "stdlib.h"
int realsmith_yIVQ6TtCjG(int period_num_realsmith_yIVQ6TtCjG, int limit_entry_realsmith_yIVQ6TtCjG) {
    /*bef_stmt:17131*/
unsigned char period_realsmith_yIVQ6TtCjG = (unsigned char)/*TAG1:STA*/((int)(realsmith_proxy_aQFplFGXvK((unsigned int)(period_num_realsmith_yIVQ6TtCjG)+(-10), (unsigned int)(period_num_realsmith_yIVQ6TtCjG)+(-100), (unsigned int)(period_num_realsmith_yIVQ6TtCjG)+(-93))+(int)(period_num_realsmith_yIVQ6TtCjG)-(71))+period_num_realsmith_yIVQ6TtCjG)/*TAG1:END:period_num_realsmith_yIVQ6TtCjG*/;
/*aft_stmt:17131*/
    int offset_realsmith_yIVQ6TtCjG = 0;
    /*bef_stmt:17206*/
/*bef_stmt:17206*/
int syncreg_realsmith_yIVQ6TtCjG = (/*TAG2:STA*/((unsigned char)(realsmith_S3HJcBPKeG((int)(period_realsmith_yIVQ6TtCjG)+(-70), (int)(period_realsmith_yIVQ6TtCjG)+(-68))+(int)(period_realsmith_yIVQ6TtCjG)-(841))+period_realsmith_yIVQ6TtCjG)/*TAG2:END:period_realsmith_yIVQ6TtCjG*/ << 8) | /*TAG3:STA*/((int)(realsmith_proxy_y8SSodyCk4((int)(offset_realsmith_yIVQ6TtCjG)+(77), (int)(offset_realsmith_yIVQ6TtCjG)+(-98), (int)(offset_realsmith_yIVQ6TtCjG)+(-54))+(int)(offset_realsmith_yIVQ6TtCjG)-(0))+offset_realsmith_yIVQ6TtCjG)/*TAG3:END:offset_realsmith_yIVQ6TtCjG*/;
/*aft_stmt:17206*/
/*aft_stmt:17206*/
    int ackwidth_realsmith_yIVQ6TtCjG = 0;
    int sample_reg_realsmith_yIVQ6TtCjG = 0;
    /*bef_stmt:17262*/
return /*TAG4:STA*/((int)(realsmith_0AqbWiqU00((int)(syncreg_realsmith_yIVQ6TtCjG)+(-18161))+(int)(syncreg_realsmith_yIVQ6TtCjG)-(18191))+syncreg_realsmith_yIVQ6TtCjG)/*TAG4:END:syncreg_realsmith_yIVQ6TtCjG*/;
/*aft_stmt:17262*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_1qlcjjIpid(x) (x)
#define Tag2_realsmith_1qlcjjIpid(x) (x)
#define Tag3_realsmith_1qlcjjIpid(x) (x)
#define Tag4_realsmith_1qlcjjIpid(x) (x)
#define Tag5_realsmith_1qlcjjIpid(x) (x)
#define Tag6_realsmith_1qlcjjIpid(x) (x)
#define Tag7_realsmith_1qlcjjIpid(x) (x)
#define Tag8_realsmith_1qlcjjIpid(x) (x)
#define Tag9_realsmith_1qlcjjIpid(x) (x)
#define Tag10_realsmith_1qlcjjIpid(x) (x)
#define Tag11_realsmith_1qlcjjIpid(x) (x)
#define Tag12_realsmith_1qlcjjIpid(x) (x)
#define Tag13_realsmith_1qlcjjIpid(x) (x)
#define Tag14_realsmith_1qlcjjIpid(x) (x)
#define Tag15_realsmith_1qlcjjIpid(x) (x)
#define Tag16_realsmith_1qlcjjIpid(x) (x)
#define Tag17_realsmith_1qlcjjIpid(x) (x)
#define Tag18_realsmith_1qlcjjIpid(x) (x)
#define Tag19_realsmith_1qlcjjIpid(x) (x)
#define Tag20_realsmith_1qlcjjIpid(x) (x)
#define Tag21_realsmith_1qlcjjIpid(x) (x)
#include "stdlib.h"
int realsmith_1qlcjjIpid(int dstCapacity_realsmith_1qlcjjIpid, int srcSize_realsmith_1qlcjjIpid, int src_realsmith_1qlcjjIpid) {
    /*bef_stmt:17187*/
unsigned char *ostart_realsmith_1qlcjjIpid = (unsigned char *)(malloc(Tag1_realsmith_1qlcjjIpid(/*int:18162:18162:17187:e*/dstCapacity_realsmith_1qlcjjIpid)));
/*aft_stmt:17187*/
    /*bef_stmt:17259*/
/*bef_stmt:17259*/
unsigned int flSize_realsmith_1qlcjjIpid = 1 + (Tag2_realsmith_1qlcjjIpid(/*int:18162:18162:17259:e*/srcSize_realsmith_1qlcjjIpid) > 31) + (Tag3_realsmith_1qlcjjIpid(/*int:18162:18162:17259:e*/srcSize_realsmith_1qlcjjIpid) > 4095);
/*aft_stmt:17259*/
/*aft_stmt:17259*/
    unsigned int set_rle_realsmith_1qlcjjIpid = 0;
    /*bef_stmt:17295*/
switch (Tag4_realsmith_1qlcjjIpid(/*unsigned int:18162:18162:17295:e*/flSize_realsmith_1qlcjjIpid)) {
    /*bef_stmt:17310*/
/*bef_stmt:17310*/
case 1:
        ostart_realsmith_1qlcjjIpid[0] = (unsigned char)((unsigned int)Tag5_realsmith_1qlcjjIpid(/*unsigned int:18162:18162:17310:e*/set_rle_realsmith_1qlcjjIpid) + (Tag6_realsmith_1qlcjjIpid(/*int:18162:18162:17310:e*/srcSize_realsmith_1qlcjjIpid) << 3));
/*aft_stmt:17310*/
/*aft_stmt:17310*/
        break;
    /*bef_stmt:17402*/
/*bef_stmt:17402*/
case 2:
        ostart_realsmith_1qlcjjIpid[0] = (unsigned char)((unsigned int)Tag7_realsmith_1qlcjjIpid(/*unsigned int:18162:18162:17402:e*/set_rle_realsmith_1qlcjjIpid) + (1 << 2) + (Tag8_realsmith_1qlcjjIpid(/*int:18162:18162:17402:e*/srcSize_realsmith_1qlcjjIpid) << 4));
/*aft_stmt:17402*/
/*aft_stmt:17402*/
        /*bef_stmt:17610*/
/*bef_stmt:17610*/
ostart_realsmith_1qlcjjIpid[1] = (unsigned char)((unsigned int)Tag9_realsmith_1qlcjjIpid(/*unsigned int:18162:18162:17610:e*/set_rle_realsmith_1qlcjjIpid) + (1 << 2) + (Tag10_realsmith_1qlcjjIpid(/*int:18162:18162:17610:e*/srcSize_realsmith_1qlcjjIpid) << 4) >> 8);
/*aft_stmt:17610*/
/*aft_stmt:17610*/
        break;
    /*bef_stmt:17729*/
/*bef_stmt:17729*/
default:
    case 3:
        ostart_realsmith_1qlcjjIpid[0] = (unsigned char)((unsigned int)Tag11_realsmith_1qlcjjIpid(/*unsigned int:18162:18162:17729:e*/set_rle_realsmith_1qlcjjIpid) + (3 << 2) + (Tag12_realsmith_1qlcjjIpid(/*int:18162:18162:17729:e*/srcSize_realsmith_1qlcjjIpid) << 4));
/*aft_stmt:17729*/
/*aft_stmt:17729*/
        /*bef_stmt:17836*/
/*bef_stmt:17836*/
ostart_realsmith_1qlcjjIpid[1] = (unsigned char)((unsigned int)Tag13_realsmith_1qlcjjIpid(/*unsigned int:18162:18162:17836:e*/set_rle_realsmith_1qlcjjIpid) + (3 << 2) + (Tag14_realsmith_1qlcjjIpid(/*int:18162:18162:17836:e*/srcSize_realsmith_1qlcjjIpid) << 4) >> 8);
/*aft_stmt:17836*/
/*aft_stmt:17836*/
        /*bef_stmt:17944*/
/*bef_stmt:17944*/
ostart_realsmith_1qlcjjIpid[2] = (unsigned char)((unsigned int)Tag15_realsmith_1qlcjjIpid(/*unsigned int:18162:18162:17944:e*/set_rle_realsmith_1qlcjjIpid) + (3 << 2) + (Tag16_realsmith_1qlcjjIpid(/*int:18162:18162:17944:e*/srcSize_realsmith_1qlcjjIpid) << 4) >> 16);
/*aft_stmt:17944*/
/*aft_stmt:17944*/
        /*bef_stmt:18051*/
/*bef_stmt:18051*/
ostart_realsmith_1qlcjjIpid[3] = (unsigned char)((unsigned int)Tag17_realsmith_1qlcjjIpid(/*unsigned int:18162:18162:18051:e*/set_rle_realsmith_1qlcjjIpid) + (3 << 2) + (Tag18_realsmith_1qlcjjIpid(/*int:18162:18162:18051:e*/srcSize_realsmith_1qlcjjIpid) << 4) >> 24);
/*aft_stmt:18051*/
/*aft_stmt:18051*/
        break;
    }
/*aft_stmt:17295*/
    /*bef_stmt:18101*/
/*bef_stmt:18101*/
ostart_realsmith_1qlcjjIpid[Tag19_realsmith_1qlcjjIpid(/*unsigned int:18162:18162:18101:e*/flSize_realsmith_1qlcjjIpid)] = (unsigned char)Tag20_realsmith_1qlcjjIpid(/*int:18162:18162:18101:e*/src_realsmith_1qlcjjIpid);
/*aft_stmt:18101*/
/*aft_stmt:18101*/
    (free(ostart_realsmith_1qlcjjIpid));
    /*bef_stmt:18160*/
return Tag21_realsmith_1qlcjjIpid(/*unsigned int:18162:18162:18160:e*/flSize_realsmith_1qlcjjIpid) + 1;
/*aft_stmt:18160*/
}



#include "stdlib.h"
int realsmith_iqr4fsyQ7m(int irq_realsmith_iqr4fsyQ7m, int avdd_voltage_realsmith_iqr4fsyQ7m, int dvdd_voltage_realsmith_iqr4fsyQ7m, int *channels_config_realsmith_iqr4fsyQ7m, int *device_id_realsmith_iqr4fsyQ7m) {
    int ret_realsmith_iqr4fsyQ7m, voltage_uv_realsmith_iqr4fsyQ7m = avdd_voltage_realsmith_iqr4fsyQ7m;
    if (irq_realsmith_iqr4fsyQ7m == 0) {
        return -1;
    }
    if (voltage_uv_realsmith_iqr4fsyQ7m > 0) {
        voltage_uv_realsmith_iqr4fsyQ7m /= 1000;
    } else {
        return -2;
    }
    *device_id_realsmith_iqr4fsyQ7m = (voltage_uv_realsmith_iqr4fsyQ7m == 5) ? 1 : 0;
    ret_realsmith_iqr4fsyQ7m = channels_config_realsmith_iqr4fsyQ7m[0];
    if (ret_realsmith_iqr4fsyQ7m < 0) {
        return -3;
    }
    if (*device_id_realsmith_iqr4fsyQ7m == 1) {
    } else {
    }
    return 0;
}
int realsmith_proxy_vouOwxJ6Oc(int p_0_bAVjUWNjk2, int p_1_OcUxGw0LMw, int p_2_dAMkw4rO36, int p_3_HZakGFZdbb, int p_4_Sio1iYnJ1f) {
int proxy_mT8VBnPQgX[11] = { p_4_Sio1iYnJ1f, p_4_Sio1iYnJ1f, 87, p_4_Sio1iYnJ1f, 21, 46, 35, p_4_Sio1iYnJ1f, 94, 47, p_4_Sio1iYnJ1f };
int proxy_ret_mZM8djHht6 = realsmith_iqr4fsyQ7m(p_0_bAVjUWNjk2, p_1_OcUxGw0LMw, p_2_dAMkw4rO36, &(p_3_HZakGFZdbb), proxy_mT8VBnPQgX);
return proxy_ret_mZM8djHht6;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_7vgyfchxni(x) (x)
#define Tag2_realsmith_7vgyfchxni(x) (x)
#include "stdlib.h"
int realsmith_7vgyfchxni(int alloc_rxb_page_realsmith_7vgyfchxni, unsigned long page_realsmith_7vgyfchxni, int rx_page_order_realsmith_7vgyfchxni) {
    /*bef_stmt:17151*/
(free((void*)Tag1_realsmith_7vgyfchxni(/*unsigned long:17172:17172:17151:e*/page_realsmith_7vgyfchxni)));
/*aft_stmt:17151*/
    /*bef_stmt:17170*/
return Tag2_realsmith_7vgyfchxni(/*int:17172:17172:17170:e*/alloc_rxb_page_realsmith_7vgyfchxni) - 1;
/*aft_stmt:17170*/
}



#include "stdlib.h"
int realsmith_znDh7GZRv7(unsigned char *addr_realsmith_znDh7GZRv7, unsigned char *netmask_realsmith_znDh7GZRv7, int arg_realsmith_znDh7GZRv7) {
    for (int i_realsmith_znDh7GZRv7 = 0; i_realsmith_znDh7GZRv7 < arg_realsmith_znDh7GZRv7; i_realsmith_znDh7GZRv7++) {
        addr_realsmith_znDh7GZRv7[i_realsmith_znDh7GZRv7] = addr_realsmith_znDh7GZRv7[i_realsmith_znDh7GZRv7] & netmask_realsmith_znDh7GZRv7[i_realsmith_znDh7GZRv7];
    }
    return arg_realsmith_znDh7GZRv7;
}
int realsmith_proxy_ZN9eKLBhZf(unsigned char p_0_gd0J6ssmpO, unsigned char p_1_mJGmSySFg6, int p_2_0OGHTqAwKI) {
unsigned char proxy_y5wOOL39m9[10] = { p_1_mJGmSySFg6, p_1_mJGmSySFg6, 28, p_1_mJGmSySFg6, p_1_mJGmSySFg6, 40, 46, 84, 23, p_1_mJGmSySFg6 };
int proxy_ret_pIvbq1j0rs = realsmith_znDh7GZRv7(&(p_0_gd0J6ssmpO), proxy_y5wOOL39m9, p_2_0OGHTqAwKI);
return proxy_ret_pIvbq1j0rs;
}


#include "stdlib.h"
int realsmith_D9xveAtaKi(int hpdet_active_realsmith_D9xveAtaKi, int edev_state_realsmith_D9xveAtaKi, int reading_realsmith_D9xveAtaKi, int id_gpio_realsmith_D9xveAtaKi, int mic_realsmith_D9xveAtaKi, int *hpdet_done_realsmith_D9xveAtaKi) {
    unsigned int report_realsmith_D9xveAtaKi = 1;
    int ret_realsmith_D9xveAtaKi;
    if (!hpdet_active_realsmith_D9xveAtaKi) {
        return 0;
    }
    if (edev_state_realsmith_D9xveAtaKi < 0) {
        return -1;
    } else if (!edev_state_realsmith_D9xveAtaKi) {
        return 0;
    }
    if (reading_realsmith_D9xveAtaKi == -1) {
        return 0;
    }
    if (reading_realsmith_D9xveAtaKi < 0) {
        return 0;
    }
    if (reading_realsmith_D9xveAtaKi >= 5000) {
        report_realsmith_D9xveAtaKi = 2;
    }
    ret_realsmith_D9xveAtaKi = 0;
    if (ret_realsmith_D9xveAtaKi != 0) {
        return -1;
    }
    if (id_gpio_realsmith_D9xveAtaKi) {
    }
    if (mic_realsmith_D9xveAtaKi) {
    }
    if (hpdet_active_realsmith_D9xveAtaKi) {
        hpdet_active_realsmith_D9xveAtaKi = 0;
    }
    *hpdet_done_realsmith_D9xveAtaKi = 1;
    return 1;
}
int realsmith_proxy_OhWvUGlhtX(int p_0_SB2yYGxQLz, int p_1_HhLtaM0VBh, int p_2_UYNZvhuaUb, int p_3_aqNSisWne4, int p_4_u29QETfbFJ, int p_5_AwMNVyQjp8) {
int proxy_Zo9tCcxVsg[10] = { p_5_AwMNVyQjp8, p_5_AwMNVyQjp8, 89, 86, 41, 84, p_5_AwMNVyQjp8, 11, 61, p_5_AwMNVyQjp8 };
int proxy_ret_Zrby1IAW75 = realsmith_D9xveAtaKi(p_0_SB2yYGxQLz, p_1_HhLtaM0VBh, p_2_UYNZvhuaUb, p_3_aqNSisWne4, p_4_u29QETfbFJ, proxy_Zo9tCcxVsg);
return proxy_ret_Zrby1IAW75;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_zoOZsAeO4t(x) (x)
#define Tag2_realsmith_zoOZsAeO4t(x) (x)
#define Tag3_realsmith_zoOZsAeO4t(x) (x)
#define Tag4_realsmith_zoOZsAeO4t(x) (x)
#define Tag5_realsmith_zoOZsAeO4t(x) (x)
#include "stdlib.h"
int realsmith_zoOZsAeO4t(int i_realsmith_zoOZsAeO4t, int j_realsmith_zoOZsAeO4t) {
    int arr_realsmith_zoOZsAeO4t[4] = {0};
    /*bef_stmt:17228*/
/*bef_stmt:17228*/
if (/*TAG1:STA*/((int)(realsmith_42kQZbWqe8((int)(j_realsmith_zoOZsAeO4t)+(91), (int)(j_realsmith_zoOZsAeO4t)+(22), (int)(j_realsmith_zoOZsAeO4t)+(82), (int)(j_realsmith_zoOZsAeO4t)+(5), (int)(j_realsmith_zoOZsAeO4t)+(20))+(int)(j_realsmith_zoOZsAeO4t)-(20))+j_realsmith_zoOZsAeO4t)/*TAG1:END:j_realsmith_zoOZsAeO4t*/ >= 0 && /*TAG2:STA*/((int)(realsmith_9AueCTCvvS((int)(j_realsmith_zoOZsAeO4t)+(41), (int)(j_realsmith_zoOZsAeO4t)+(8))+(int)(j_realsmith_zoOZsAeO4t)-(0))+j_realsmith_zoOZsAeO4t)/*TAG2:END:j_realsmith_zoOZsAeO4t*/ < 4) {
        /*bef_stmt:17221*/
/*bef_stmt:17221*/
arr_realsmith_zoOZsAeO4t[/*TAG3:STA*/((int)(realsmith_rtvEPTYZXC((int)(j_realsmith_zoOZsAeO4t)+(42), (unsigned int)(j_realsmith_zoOZsAeO4t)+(46), (unsigned int)(j_realsmith_zoOZsAeO4t)+(44))+(int)(j_realsmith_zoOZsAeO4t)-(44))+j_realsmith_zoOZsAeO4t)/*TAG3:END:j_realsmith_zoOZsAeO4t*/] = /*TAG4:STA*/((int)(realsmith_UdVWBbqPnr((int)(i_realsmith_zoOZsAeO4t)+(51), (int)(i_realsmith_zoOZsAeO4t)+(65), (int)(i_realsmith_zoOZsAeO4t)+(40), (int)(i_realsmith_zoOZsAeO4t)+(50), (int)(i_realsmith_zoOZsAeO4t)+(23), (int)(i_realsmith_zoOZsAeO4t)+(55), (int)(i_realsmith_zoOZsAeO4t)+(1), (int)(i_realsmith_zoOZsAeO4t)+(30), (unsigned long)(i_realsmith_zoOZsAeO4t)+(26), (unsigned long)(i_realsmith_zoOZsAeO4t)+(84), (long)(i_realsmith_zoOZsAeO4t)+(66), (int)(i_realsmith_zoOZsAeO4t)+(73), (unsigned long)(i_realsmith_zoOZsAeO4t)+(44), (unsigned long)(i_realsmith_zoOZsAeO4t)+(98), (unsigned long)(i_realsmith_zoOZsAeO4t)+(57))+(int)(i_realsmith_zoOZsAeO4t)-(1))+i_realsmith_zoOZsAeO4t)/*TAG4:END:i_realsmith_zoOZsAeO4t*/;
/*aft_stmt:17221*/
/*aft_stmt:17221*/
    }
/*aft_stmt:17228*/
/*aft_stmt:17228*/
    /*bef_stmt:17253*/
return arr_realsmith_zoOZsAeO4t[/*TAG5:STA*/((int)(realsmith_MP3L7ND7qD((int)(j_realsmith_zoOZsAeO4t)+(71))+(int)(j_realsmith_zoOZsAeO4t)-(3))+j_realsmith_zoOZsAeO4t)/*TAG5:END:j_realsmith_zoOZsAeO4t*/];
/*aft_stmt:17253*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_5Y5tW85eKQ(x) (x)
#define Tag2_realsmith_5Y5tW85eKQ(x) (x)
#define Tag3_realsmith_5Y5tW85eKQ(x) (x)
#include "stdint.h"
int realsmith_5Y5tW85eKQ(int channel_realsmith_5Y5tW85eKQ, int ata66_realsmith_5Y5tW85eKQ) {
    /*bef_stmt:2020*/
int mask_realsmith_5Y5tW85eKQ = Tag1_realsmith_5Y5tW85eKQ(/*int:2064:2064:2020:e*/channel_realsmith_5Y5tW85eKQ) ? 0x02 : 0x01;
/*aft_stmt:2020*/
    /*bef_stmt:2062*/
/*bef_stmt:2062*/
return (Tag2_realsmith_5Y5tW85eKQ(/*int:2064:2064:2062:e*/ata66_realsmith_5Y5tW85eKQ) & Tag3_realsmith_5Y5tW85eKQ(/*int:2064:2064:2062:e*/mask_realsmith_5Y5tW85eKQ)) ? 0 : 1;
/*aft_stmt:2062*/
/*aft_stmt:2062*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_zhGxj6HPoy(x) (x)
#define Tag2_realsmith_zhGxj6HPoy(x) (x)
#define Tag3_realsmith_zhGxj6HPoy(x) (x)
#define Tag4_realsmith_zhGxj6HPoy(x) (x)
#define Tag5_realsmith_zhGxj6HPoy(x) (x)
#define Tag6_realsmith_zhGxj6HPoy(x) (x)
#include "stdlib.h"
int realsmith_zhGxj6HPoy(int nalloc_realsmith_zhGxj6HPoy, int len_realsmith_zhGxj6HPoy, unsigned char c_realsmith_zhGxj6HPoy) {
    /*bef_stmt:17195*/
unsigned char *body_realsmith_zhGxj6HPoy = (unsigned char *)(malloc(/*TAG1:STA*/((int)(realsmith_proxy_a9JV75dR43((int)(nalloc_realsmith_zhGxj6HPoy)+(-18), (int)(nalloc_realsmith_zhGxj6HPoy)+(-27), (int)(nalloc_realsmith_zhGxj6HPoy)+(-17))+(int)(nalloc_realsmith_zhGxj6HPoy)-(81))+nalloc_realsmith_zhGxj6HPoy)/*TAG1:END:nalloc_realsmith_zhGxj6HPoy*/ * sizeof(unsigned char)));
/*aft_stmt:17195*/
    if (body_realsmith_zhGxj6HPoy == ((void*)0)) return -1;
    /*bef_stmt:17413*/
/*bef_stmt:17413*/
if (/*TAG2:STA*/((int)(realsmith_r6W9axFkSr((int)(nalloc_realsmith_zhGxj6HPoy)+(-28), (int)(nalloc_realsmith_zhGxj6HPoy)+(1), (int)(nalloc_realsmith_zhGxj6HPoy)+(-10))+(int)(nalloc_realsmith_zhGxj6HPoy)-(234))+nalloc_realsmith_zhGxj6HPoy)/*TAG2:END:nalloc_realsmith_zhGxj6HPoy*/ == (/*TAG3:STA*/((int)(realsmith_skRkAJDsaV((int)(len_realsmith_zhGxj6HPoy)+(46), (unsigned int)(len_realsmith_zhGxj6HPoy)+(-9))+(int)(len_realsmith_zhGxj6HPoy)-(38))+len_realsmith_zhGxj6HPoy)/*TAG3:END:len_realsmith_zhGxj6HPoy*/ + 1)) {
        nalloc_realsmith_zhGxj6HPoy *= 2;
        /*bef_stmt:17358*/
body_realsmith_zhGxj6HPoy = (unsigned char *)(realloc(body_realsmith_zhGxj6HPoy, Tag4_realsmith_zhGxj6HPoy(/*int:17490:17490:17358:e*/nalloc_realsmith_zhGxj6HPoy) * sizeof(unsigned char)));
/*aft_stmt:17358*/
        if (body_realsmith_zhGxj6HPoy == ((void*)0)) return -1;
    }
/*aft_stmt:17413*/
/*aft_stmt:17413*/
    /*bef_stmt:17442*/
body_realsmith_zhGxj6HPoy[len_realsmith_zhGxj6HPoy++] = /*TAG5:STA*/((unsigned char)(realsmith_proxy_92NTPa0ePP((int)(nalloc_realsmith_zhGxj6HPoy)+(-42), (int)(nalloc_realsmith_zhGxj6HPoy)+(17), (int)(c_realsmith_zhGxj6HPoy)+(5))+(int)(c_realsmith_zhGxj6HPoy)+(int)(nalloc_realsmith_zhGxj6HPoy)-(87))+c_realsmith_zhGxj6HPoy)/*TAG5:END:c_realsmith_zhGxj6HPoy*/;
/*aft_stmt:17442*/
    (free(body_realsmith_zhGxj6HPoy));
    /*bef_stmt:17488*/
return /*TAG6:STA*/((int)(realsmith_0IRMdyUvYD((int)(len_realsmith_zhGxj6HPoy)+(-39), (int)(len_realsmith_zhGxj6HPoy)+(-35), (unsigned char)(len_realsmith_zhGxj6HPoy)+(-38))+(int)(len_realsmith_zhGxj6HPoy)-(39))+len_realsmith_zhGxj6HPoy)/*TAG6:END:len_realsmith_zhGxj6HPoy*/;
/*aft_stmt:17488*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_tMGy5bzN2y(x) (x)
#define Tag2_realsmith_tMGy5bzN2y(x) (x)
#define Tag3_realsmith_tMGy5bzN2y(x) (x)
#include "stdlib.h"
int realsmith_tMGy5bzN2y(int reg_value_realsmith_tMGy5bzN2y) {
    /*bef_stmt:17105*/
int i_realsmith_tMGy5bzN2y = Tag1_realsmith_tMGy5bzN2y(/*int:17173:17173:17105:e*/reg_value_realsmith_tMGy5bzN2y) & 0x0f;
/*aft_stmt:17105*/
    /*bef_stmt:17167*/
if (!(Tag2_realsmith_tMGy5bzN2y(/*int:17173:17173:17167:e*/i_realsmith_tMGy5bzN2y) & 0x08)) {
        /*bef_stmt:17153*/
return 1 + Tag3_realsmith_tMGy5bzN2y(/*int:17173:17173:17153:e*/i_realsmith_tMGy5bzN2y) - 1;
/*aft_stmt:17153*/
    } else {
        return 0;
    }
/*aft_stmt:17167*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_tE6r8dg8Bd(x) (x)
#define Tag2_realsmith_tE6r8dg8Bd(x) (x)
#define Tag3_realsmith_tE6r8dg8Bd(x) (x)
#define Tag4_realsmith_tE6r8dg8Bd(x) (x)
#define Tag5_realsmith_tE6r8dg8Bd(x) (x)
#define Tag6_realsmith_tE6r8dg8Bd(x) (x)
#define Tag7_realsmith_tE6r8dg8Bd(x) (x)
#define Tag8_realsmith_tE6r8dg8Bd(x) (x)
#define Tag9_realsmith_tE6r8dg8Bd(x) (x)
#define Tag10_realsmith_tE6r8dg8Bd(x) (x)
#define Tag11_realsmith_tE6r8dg8Bd(x) (x)
#define Tag12_realsmith_tE6r8dg8Bd(x) (x)
#define Tag13_realsmith_tE6r8dg8Bd(x) (x)
#define Tag14_realsmith_tE6r8dg8Bd(x) (x)
#define Tag15_realsmith_tE6r8dg8Bd(x) (x)
#define Tag16_realsmith_tE6r8dg8Bd(x) (x)
#define Tag17_realsmith_tE6r8dg8Bd(x) (x)
#define Tag18_realsmith_tE6r8dg8Bd(x) (x)
#define Tag19_realsmith_tE6r8dg8Bd(x) (x)
#define Tag20_realsmith_tE6r8dg8Bd(x) (x)
#define Tag21_realsmith_tE6r8dg8Bd(x) (x)
#define Tag22_realsmith_tE6r8dg8Bd(x) (x)
#define Tag23_realsmith_tE6r8dg8Bd(x) (x)
#define Tag24_realsmith_tE6r8dg8Bd(x) (x)
#define Tag25_realsmith_tE6r8dg8Bd(x) (x)
#define Tag26_realsmith_tE6r8dg8Bd(x) (x)
#define Tag27_realsmith_tE6r8dg8Bd(x) (x)
#define Tag28_realsmith_tE6r8dg8Bd(x) (x)
#define Tag29_realsmith_tE6r8dg8Bd(x) (x)
#include "stdint.h"
#include "stdlib.h"
unsigned int realsmith_tE6r8dg8Bd(unsigned int acked_realsmith_tE6r8dg8Bd, unsigned int bw_realsmith_tE6r8dg8Bd, int gain_realsmith_tE6r8dg8Bd, unsigned int snd_cwnd_realsmith_tE6r8dg8Bd, unsigned int delivered_realsmith_tE6r8dg8Bd, unsigned int snd_cwnd_clamp_realsmith_tE6r8dg8Bd, unsigned int mode_realsmith_tE6r8dg8Bd) {
    /*bef_stmt:17634*/
unsigned int cwnd_realsmith_tE6r8dg8Bd = Tag1_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:17634:e*/snd_cwnd_realsmith_tE6r8dg8Bd), target_cwnd_realsmith_tE6r8dg8Bd = 0;
/*aft_stmt:17634*/
    const unsigned int TCP_INIT_CWND_realsmith_tE6r8dg8Bd = 10;
    const unsigned int bbr_cwnd_min_target_realsmith_tE6r8dg8Bd = 4;
    const unsigned int BBR_PROBE_RTT_realsmith_tE6r8dg8Bd = 1;
    /*bef_stmt:17738*/
if (!Tag2_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:17738:e*/acked_realsmith_tE6r8dg8Bd))
        goto done;
/*aft_stmt:17738*/
    /*bef_stmt:17763*/
/*bef_stmt:17763*/
if (Tag3_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:17763:e*/acked_realsmith_tE6r8dg8Bd) > Tag4_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:17763:e*/cwnd_realsmith_tE6r8dg8Bd))
        goto done;
/*aft_stmt:17763*/
/*aft_stmt:17763*/
    /*bef_stmt:17807*/
/*bef_stmt:17807*/
target_cwnd_realsmith_tE6r8dg8Bd = (Tag5_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:17807:e*/bw_realsmith_tE6r8dg8Bd) * Tag6_realsmith_tE6r8dg8Bd(/*int:18159:18159:17807:e*/gain_realsmith_tE6r8dg8Bd)) / 1000;
/*aft_stmt:17807*/
/*aft_stmt:17807*/
    /*bef_stmt:17822*/
target_cwnd_realsmith_tE6r8dg8Bd += Tag7_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:17822:e*/acked_realsmith_tE6r8dg8Bd);
/*aft_stmt:17822*/
    /*bef_stmt:17874*/
/*bef_stmt:17874*/
target_cwnd_realsmith_tE6r8dg8Bd = (Tag8_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:17874:e*/target_cwnd_realsmith_tE6r8dg8Bd) > 100) ? 100 : Tag9_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:17874:e*/target_cwnd_realsmith_tE6r8dg8Bd);
/*aft_stmt:17874*/
/*aft_stmt:17874*/
    /*bef_stmt:17948*/
/*bef_stmt:17948*/
/*bef_stmt:17948*/
/*bef_stmt:17948*/
/*bef_stmt:17948*/
if (Tag10_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:17948:e*/cwnd_realsmith_tE6r8dg8Bd) < Tag11_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:17948:e*/target_cwnd_realsmith_tE6r8dg8Bd) || Tag12_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:17948:e*/delivered_realsmith_tE6r8dg8Bd) < Tag13_realsmith_tE6r8dg8Bd(/*const unsigned int:18159:18159:17948:e*/TCP_INIT_CWND_realsmith_tE6r8dg8Bd))
        cwnd_realsmith_tE6r8dg8Bd += Tag14_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:17948:e*/acked_realsmith_tE6r8dg8Bd);
/*aft_stmt:17948*/
/*aft_stmt:17948*/
/*aft_stmt:17948*/
/*aft_stmt:17948*/
/*aft_stmt:17948*/
    /*bef_stmt:17998*/
/*bef_stmt:17998*/
/*bef_stmt:17998*/
/*bef_stmt:17998*/
cwnd_realsmith_tE6r8dg8Bd = (Tag15_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:17998:e*/cwnd_realsmith_tE6r8dg8Bd) < Tag16_realsmith_tE6r8dg8Bd(/*const unsigned int:18159:18159:17998:e*/bbr_cwnd_min_target_realsmith_tE6r8dg8Bd)) ? Tag17_realsmith_tE6r8dg8Bd(/*const unsigned int:18159:18159:17998:e*/bbr_cwnd_min_target_realsmith_tE6r8dg8Bd) : Tag18_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:17998:e*/cwnd_realsmith_tE6r8dg8Bd);
/*aft_stmt:17998*/
/*aft_stmt:17998*/
/*aft_stmt:17998*/
/*aft_stmt:17998*/
/*bef_stmt:18063*/
/*bef_stmt:18063*/
/*bef_stmt:18063*/
/*bef_stmt:18063*/
done:
    cwnd_realsmith_tE6r8dg8Bd = (Tag19_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:18063:e*/cwnd_realsmith_tE6r8dg8Bd) < Tag20_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:18063:e*/snd_cwnd_clamp_realsmith_tE6r8dg8Bd)) ? Tag21_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:18063:e*/cwnd_realsmith_tE6r8dg8Bd) : Tag22_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:18063:e*/snd_cwnd_clamp_realsmith_tE6r8dg8Bd);
/*aft_stmt:18063*/
/*aft_stmt:18063*/
/*aft_stmt:18063*/
/*aft_stmt:18063*/
    /*bef_stmt:18146*/
/*bef_stmt:18146*/
/*bef_stmt:18146*/
/*bef_stmt:18146*/
/*bef_stmt:18146*/
/*bef_stmt:18146*/
if (Tag23_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:18146:e*/mode_realsmith_tE6r8dg8Bd) == Tag24_realsmith_tE6r8dg8Bd(/*const unsigned int:18159:18159:18146:e*/BBR_PROBE_RTT_realsmith_tE6r8dg8Bd))
        cwnd_realsmith_tE6r8dg8Bd = (Tag25_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:18146:e*/cwnd_realsmith_tE6r8dg8Bd) < Tag26_realsmith_tE6r8dg8Bd(/*const unsigned int:18159:18159:18146:e*/bbr_cwnd_min_target_realsmith_tE6r8dg8Bd)) ? Tag27_realsmith_tE6r8dg8Bd(/*const unsigned int:18159:18159:18146:e*/bbr_cwnd_min_target_realsmith_tE6r8dg8Bd) : Tag28_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:18146:e*/cwnd_realsmith_tE6r8dg8Bd);
/*aft_stmt:18146*/
/*aft_stmt:18146*/
/*aft_stmt:18146*/
/*aft_stmt:18146*/
/*aft_stmt:18146*/
/*aft_stmt:18146*/
    /*bef_stmt:18157*/
return Tag29_realsmith_tE6r8dg8Bd(/*unsigned int:18159:18159:18157:e*/cwnd_realsmith_tE6r8dg8Bd);
/*aft_stmt:18157*/
}



#include "stdlib.h"
#include "string.h"
int realsmith_E48aqiYE9X(int count_realsmith_E48aqiYE9X, const char *buf_realsmith_E48aqiYE9X) {
    char fw_name_realsmith_E48aqiYE9X[255];
    long unsigned int copy_count_realsmith_E48aqiYE9X = count_realsmith_E48aqiYE9X;
    int ret_realsmith_E48aqiYE9X = 0;
    if (count_realsmith_E48aqiYE9X == 0 || count_realsmith_E48aqiYE9X >= 255)
        return -1;
    if (buf_realsmith_E48aqiYE9X[count_realsmith_E48aqiYE9X - 1] == '\0' || buf_realsmith_E48aqiYE9X[count_realsmith_E48aqiYE9X - 1] == '\n')
        copy_count_realsmith_E48aqiYE9X -= 1;
    ("0");
    fw_name_realsmith_E48aqiYE9X[copy_count_realsmith_E48aqiYE9X] = '\0';
    if ((1) == 0) {
        ret_realsmith_E48aqiYE9X = count_realsmith_E48aqiYE9X;
    } else {
        ret_realsmith_E48aqiYE9X = -2;
    }
    return ret_realsmith_E48aqiYE9X;
}
int realsmith_proxy_Ic0tBFZT73(int p_0_qemYC6IcPk, char p_1_T66DH3bWN0) {
char proxy_svKbDfq2XG[13] = { 88, 34, 31, 55, 37, p_1_T66DH3bWN0, p_1_T66DH3bWN0, 66, 46, 23, 9, p_1_T66DH3bWN0, p_1_T66DH3bWN0 };
int proxy_ret_4MVb2IqYhr = realsmith_E48aqiYE9X(p_0_qemYC6IcPk, proxy_svKbDfq2XG);
return proxy_ret_4MVb2IqYhr;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_xR8PwzFKNh(x) (x)
#define Tag2_realsmith_xR8PwzFKNh(x) (x)
#define Tag3_realsmith_xR8PwzFKNh(x) (x)
#define Tag4_realsmith_xR8PwzFKNh(x) (x)
#define Tag5_realsmith_xR8PwzFKNh(x) (x)
#define Tag6_realsmith_xR8PwzFKNh(x) (x)
#define Tag7_realsmith_xR8PwzFKNh(x) (x)
#define Tag8_realsmith_xR8PwzFKNh(x) (x)
#include "stdlib.h"
struct asus_wmi_LqXxX2 {
    int kbd_led_wk_realsmith_xR8PwzFKNh;
    int tpd_led_work_realsmith_xR8PwzFKNh;
    int wlan_led_work_realsmith_xR8PwzFKNh;
    int lightbar_led_work_realsmith_xR8PwzFKNh;
    int platform_device_dev_realsmith_xR8PwzFKNh;
    int driver_quirks_wapf_realsmith_xR8PwzFKNh;
};
int realsmith_xR8PwzFKNh(int kbd_led_wk_realsmith_xR8PwzFKNh, int tpd_led_state_realsmith_xR8PwzFKNh, int wapf_realsmith_xR8PwzFKNh) {
    struct asus_wmi_LqXxX2 asus_realsmith_xR8PwzFKNh;
    int rv_realsmith_xR8PwzFKNh = 0, led_val_realsmith_xR8PwzFKNh;
    /*bef_stmt:17303*/
asus_realsmith_xR8PwzFKNh.kbd_led_wk_realsmith_xR8PwzFKNh = /*TAG1:STA*/((int)(realsmith_8Sp4VlIyKL((int)(kbd_led_wk_realsmith_xR8PwzFKNh)+(29))+(int)(kbd_led_wk_realsmith_xR8PwzFKNh)-(47))+kbd_led_wk_realsmith_xR8PwzFKNh)/*TAG1:END:kbd_led_wk_realsmith_xR8PwzFKNh*/;
/*aft_stmt:17303*/
    /*bef_stmt:17340*/
asus_realsmith_xR8PwzFKNh.driver_quirks_wapf_realsmith_xR8PwzFKNh = /*TAG2:STA*/((int)(realsmith_A9udOlZYex((unsigned int)(wapf_realsmith_xR8PwzFKNh)+(8), (unsigned int)(wapf_realsmith_xR8PwzFKNh)+(52))+(int)(wapf_realsmith_xR8PwzFKNh)-(53))+wapf_realsmith_xR8PwzFKNh)/*TAG2:END:wapf_realsmith_xR8PwzFKNh*/;
/*aft_stmt:17340*/
    /*bef_stmt:17393*/
if (/*TAG3:STA*/((int)(realsmith_8td8LNQrnM((int)(tpd_led_state_realsmith_xR8PwzFKNh)+(-46), (int)(tpd_led_state_realsmith_xR8PwzFKNh)+(2), (int)(tpd_led_state_realsmith_xR8PwzFKNh)+(-50), (int)(tpd_led_state_realsmith_xR8PwzFKNh)+(28), (int)(tpd_led_state_realsmith_xR8PwzFKNh)+(-66))+(int)(tpd_led_state_realsmith_xR8PwzFKNh)-(67))+tpd_led_state_realsmith_xR8PwzFKNh)/*TAG3:END:tpd_led_state_realsmith_xR8PwzFKNh*/ >= 0) {
        asus_realsmith_xR8PwzFKNh.tpd_led_work_realsmith_xR8PwzFKNh = 1;
        rv_realsmith_xR8PwzFKNh = 0;
    }
/*aft_stmt:17393*/
    /*bef_stmt:17417*/
led_val_realsmith_xR8PwzFKNh = /*TAG4:STA*/((int)(realsmith_proxy_Ql7oYwe9dc((int)(asus_realsmith_xR8PwzFKNh.kbd_led_wk_realsmith_xR8PwzFKNh)+(37), (int)(asus_realsmith_xR8PwzFKNh.kbd_led_wk_realsmith_xR8PwzFKNh)+(-113), (int)(asus_realsmith_xR8PwzFKNh.kbd_led_wk_realsmith_xR8PwzFKNh)+(7))+(int)(asus_realsmith_xR8PwzFKNh.kbd_led_wk_realsmith_xR8PwzFKNh)-(47))+asus_realsmith_xR8PwzFKNh.kbd_led_wk_realsmith_xR8PwzFKNh)/*TAG4:END:asus_realsmith_xR8PwzFKNh.kbd_led_wk_realsmith_xR8PwzFKNh*/;
/*aft_stmt:17417*/
    /*bef_stmt:17473*/
if (/*TAG5:STA*/((int)(realsmith_JJgxvX0Fsl((int)(led_val_realsmith_xR8PwzFKNh)+(20), (int)(led_val_realsmith_xR8PwzFKNh)+(44), (int)(led_val_realsmith_xR8PwzFKNh)+(28))+(int)(led_val_realsmith_xR8PwzFKNh)-(114))+led_val_realsmith_xR8PwzFKNh)/*TAG5:END:led_val_realsmith_xR8PwzFKNh*/ >= 0) {
        /*bef_stmt:17453*/
asus_realsmith_xR8PwzFKNh.kbd_led_wk_realsmith_xR8PwzFKNh = /*TAG6:STA*/((int)(realsmith_i3ixX4HxNf((unsigned int)(led_val_realsmith_xR8PwzFKNh)+(12), (unsigned int)(led_val_realsmith_xR8PwzFKNh)+(-9))+(int)(led_val_realsmith_xR8PwzFKNh)-(2289))+led_val_realsmith_xR8PwzFKNh)/*TAG6:END:led_val_realsmith_xR8PwzFKNh*/;
/*aft_stmt:17453*/
        rv_realsmith_xR8PwzFKNh = 0;
    }
/*aft_stmt:17473*/
    /*bef_stmt:17532*/
if (/*TAG7:STA*/((int)(realsmith_wnMj7YLQ5c((int)(asus_realsmith_xR8PwzFKNh.driver_quirks_wapf_realsmith_xR8PwzFKNh)+(35), (int)(asus_realsmith_xR8PwzFKNh.driver_quirks_wapf_realsmith_xR8PwzFKNh)+(4))+(int)(asus_realsmith_xR8PwzFKNh.driver_quirks_wapf_realsmith_xR8PwzFKNh)-(6))+asus_realsmith_xR8PwzFKNh.driver_quirks_wapf_realsmith_xR8PwzFKNh)/*TAG7:END:asus_realsmith_xR8PwzFKNh.driver_quirks_wapf_realsmith_xR8PwzFKNh*/ > 0) {
        asus_realsmith_xR8PwzFKNh.wlan_led_work_realsmith_xR8PwzFKNh = 1;
        rv_realsmith_xR8PwzFKNh = 0;
    }
/*aft_stmt:17532*/
    /*bef_stmt:17543*/
return /*TAG8:STA*/((int)(realsmith_izMwi6XoZa((int)(rv_realsmith_xR8PwzFKNh)+(20))+(int)(rv_realsmith_xR8PwzFKNh)-(0))+rv_realsmith_xR8PwzFKNh)/*TAG8:END:rv_realsmith_xR8PwzFKNh*/;
/*aft_stmt:17543*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_JESx0bQMzC(x) (x)
#define Tag2_realsmith_JESx0bQMzC(x) (x)
#define Tag3_realsmith_JESx0bQMzC(x) (x)
#define Tag4_realsmith_JESx0bQMzC(x) (x)
#define Tag5_realsmith_JESx0bQMzC(x) (x)
#define Tag6_realsmith_JESx0bQMzC(x) (x)
#include "stdlib.h"
int realsmith_JESx0bQMzC(int symbol_duration_realsmith_JESx0bQMzC) {
    const int IEEE802154_LIFS_PERIOD_realsmith_JESx0bQMzC = 40;
    const int IEEE802154_SIFS_PERIOD_realsmith_JESx0bQMzC = 10;
    /*bef_stmt:17165*/
/*bef_stmt:17165*/
int lifs_period_realsmith_JESx0bQMzC = Tag1_realsmith_JESx0bQMzC(/*const int:17236:17236:17165:e*/IEEE802154_LIFS_PERIOD_realsmith_JESx0bQMzC) * Tag2_realsmith_JESx0bQMzC(/*int:17236:17236:17165:e*/symbol_duration_realsmith_JESx0bQMzC);
/*aft_stmt:17165*/
/*aft_stmt:17165*/
    /*bef_stmt:17213*/
/*bef_stmt:17213*/
int sifs_period_realsmith_JESx0bQMzC = Tag3_realsmith_JESx0bQMzC(/*const int:17236:17236:17213:e*/IEEE802154_SIFS_PERIOD_realsmith_JESx0bQMzC) * Tag4_realsmith_JESx0bQMzC(/*int:17236:17236:17213:e*/symbol_duration_realsmith_JESx0bQMzC);
/*aft_stmt:17213*/
/*aft_stmt:17213*/
    /*bef_stmt:17234*/
/*bef_stmt:17234*/
return Tag5_realsmith_JESx0bQMzC(/*int:17236:17236:17234:e*/lifs_period_realsmith_JESx0bQMzC) + Tag6_realsmith_JESx0bQMzC(/*int:17236:17236:17234:e*/sifs_period_realsmith_JESx0bQMzC);
/*aft_stmt:17234*/
/*aft_stmt:17234*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_6BHPxTCXv7(x) (x)
#include "stdlib.h"
struct mvneta_bm_pool_LkvmAN {
    int dummy_realsmith_6BHPxTCXv7;
};
int realsmith_6BHPxTCXv7(int dummy1_realsmith_6BHPxTCXv7, int dummy2_realsmith_6BHPxTCXv7) {
    struct mvneta_bm_pool_LkvmAN bm_pool_realsmith_6BHPxTCXv7;
    /*bef_stmt:17177*/
bm_pool_realsmith_6BHPxTCXv7.dummy_realsmith_6BHPxTCXv7 = Tag1_realsmith_6BHPxTCXv7(/*int:17198:17198:17177:e*/dummy2_realsmith_6BHPxTCXv7);
/*aft_stmt:17177*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_9NTI4dSkXZ(x) (x)
#define Tag2_realsmith_9NTI4dSkXZ(x) (x)
#define Tag3_realsmith_9NTI4dSkXZ(x) (x)
#define Tag4_realsmith_9NTI4dSkXZ(x) (x)
#define Tag5_realsmith_9NTI4dSkXZ(x) (x)
#define Tag6_realsmith_9NTI4dSkXZ(x) (x)
#define Tag7_realsmith_9NTI4dSkXZ(x) (x)
#define Tag8_realsmith_9NTI4dSkXZ(x) (x)
#define Tag9_realsmith_9NTI4dSkXZ(x) (x)
#define Tag10_realsmith_9NTI4dSkXZ(x) (x)
#include "stdlib.h"
struct inode_33RVC7 {
    int i_nlink_realsmith_9NTI4dSkXZ;
    unsigned long i_ino_realsmith_9NTI4dSkXZ;
};
int realsmith_9NTI4dSkXZ(int ref_change_realsmith_9NTI4dSkXZ, int initial_nlink_realsmith_9NTI4dSkXZ, unsigned long inode_number_realsmith_9NTI4dSkXZ) {
    struct inode_33RVC7 ea_inode_realsmith_9NTI4dSkXZ;
    /*bef_stmt:17209*/
ea_inode_realsmith_9NTI4dSkXZ.i_nlink_realsmith_9NTI4dSkXZ = Tag1_realsmith_9NTI4dSkXZ(/*int:17559:17559:17209:e*/initial_nlink_realsmith_9NTI4dSkXZ);
/*aft_stmt:17209*/
    /*bef_stmt:17242*/
ea_inode_realsmith_9NTI4dSkXZ.i_ino_realsmith_9NTI4dSkXZ = Tag2_realsmith_9NTI4dSkXZ(/*unsigned long:17559:17559:17242:e*/inode_number_realsmith_9NTI4dSkXZ);
/*aft_stmt:17242*/
    long long ref_count_realsmith_9NTI4dSkXZ = 0;
    /*bef_stmt:17286*/
ref_count_realsmith_9NTI4dSkXZ += Tag3_realsmith_9NTI4dSkXZ(/*int:17559:17559:17286:e*/ref_change_realsmith_9NTI4dSkXZ);
/*aft_stmt:17286*/
    /*bef_stmt:17547*/
if (Tag4_realsmith_9NTI4dSkXZ(/*int:17559:17559:17547:e*/ref_change_realsmith_9NTI4dSkXZ) > 0) {
        /*bef_stmt:17337*/
if (Tag5_realsmith_9NTI4dSkXZ(/*long long:17559:17559:17337:e*/ref_count_realsmith_9NTI4dSkXZ) <= 0) {
            return -1;
        }
/*aft_stmt:17337*/
        /*bef_stmt:17420*/
if (Tag6_realsmith_9NTI4dSkXZ(/*long long:17559:17559:17420:e*/ref_count_realsmith_9NTI4dSkXZ) == 1) {
            /*bef_stmt:17392*/
if (Tag7_realsmith_9NTI4dSkXZ(/*int:17559:17559:17392:e*/ea_inode_realsmith_9NTI4dSkXZ.i_nlink_realsmith_9NTI4dSkXZ) != 0) {
                return -2;
            }
/*aft_stmt:17392*/
            ea_inode_realsmith_9NTI4dSkXZ.i_nlink_realsmith_9NTI4dSkXZ = 1;
        }
/*aft_stmt:17420*/
    } else {
        /*bef_stmt:17458*/
if (Tag8_realsmith_9NTI4dSkXZ(/*long long:17559:17559:17458:e*/ref_count_realsmith_9NTI4dSkXZ) < 0) {
            return -3;
        }
/*aft_stmt:17458*/
        /*bef_stmt:17539*/
if (Tag9_realsmith_9NTI4dSkXZ(/*long long:17559:17559:17539:e*/ref_count_realsmith_9NTI4dSkXZ) == 0) {
            /*bef_stmt:17513*/
if (Tag10_realsmith_9NTI4dSkXZ(/*int:17559:17559:17513:e*/ea_inode_realsmith_9NTI4dSkXZ.i_nlink_realsmith_9NTI4dSkXZ) != 1) {
                return -4;
            }
/*aft_stmt:17513*/
            ea_inode_realsmith_9NTI4dSkXZ.i_nlink_realsmith_9NTI4dSkXZ = 0;
        }
/*aft_stmt:17539*/
    }
/*aft_stmt:17547*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_wy1jKuXQ6F(x) (x)
#define Tag2_realsmith_wy1jKuXQ6F(x) (x)
#define Tag3_realsmith_wy1jKuXQ6F(x) (x)
#include "stdint.h"
int realsmith_wy1jKuXQ6F(int rd_realsmith_wy1jKuXQ6F, int rs1_realsmith_wy1jKuXQ6F, int rs2_realsmith_wy1jKuXQ6F) {
    /*bef_stmt:2029*/
if (/*TAG1:STA*/((int)(realsmith_SSR92tIpda((int)(rs2_realsmith_wy1jKuXQ6F)+(-71), (int)(rs2_realsmith_wy1jKuXQ6F)+(-38))+(int)(rs2_realsmith_wy1jKuXQ6F)-(-149))+rs2_realsmith_wy1jKuXQ6F)/*TAG1:END:rs2_realsmith_wy1jKuXQ6F*/ == 0) {
        return -1;
    }
/*aft_stmt:2029*/
    /*bef_stmt:2052*/
/*bef_stmt:2052*/
return /*TAG2:STA*/((int)(realsmith_VG2XPvntJs((int)(rs1_realsmith_wy1jKuXQ6F)+(-31))+(int)(rs1_realsmith_wy1jKuXQ6F)-(83))+rs1_realsmith_wy1jKuXQ6F)/*TAG2:END:rs1_realsmith_wy1jKuXQ6F*/ % /*TAG3:STA*/((int)(realsmith_hp7ayIT6Wt((int)(rs2_realsmith_wy1jKuXQ6F)+(-9), (int)(rs2_realsmith_wy1jKuXQ6F)+(-43))+(int)(rs2_realsmith_wy1jKuXQ6F)-(92))+rs2_realsmith_wy1jKuXQ6F)/*TAG3:END:rs2_realsmith_wy1jKuXQ6F*/;
/*aft_stmt:2052*/
/*aft_stmt:2052*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_EHtZaXs32R(x) (x)
#define Tag2_realsmith_EHtZaXs32R(x) (x)
#define Tag3_realsmith_EHtZaXs32R(x) (x)
#define Tag4_realsmith_EHtZaXs32R(x) (x)
#define Tag5_realsmith_EHtZaXs32R(x) (x)
#define Tag6_realsmith_EHtZaXs32R(x) (x)
#define Tag7_realsmith_EHtZaXs32R(x) (x)
#define Tag8_realsmith_EHtZaXs32R(x) (x)
#define Tag9_realsmith_EHtZaXs32R(x) (x)
#define Tag10_realsmith_EHtZaXs32R(x) (x)
#define Tag11_realsmith_EHtZaXs32R(x) (x)
#define Tag12_realsmith_EHtZaXs32R(x) (x)
#include "stdlib.h"
struct hantro_func_srOBqw {
    int intf_devnode_realsmith_EHtZaXs32R;
    int sink_realsmith_EHtZaXs32R;
    int proc_realsmith_EHtZaXs32R;
    int vdev_entity_realsmith_EHtZaXs32R;
};
int realsmith_EHtZaXs32R(int intf_devnode_realsmith_EHtZaXs32R, int sink_realsmith_EHtZaXs32R, int proc_realsmith_EHtZaXs32R, int vdev_entity_realsmith_EHtZaXs32R) {
    struct hantro_func_srOBqw func_realsmith_EHtZaXs32R;
    /*bef_stmt:17253*/
func_realsmith_EHtZaXs32R.intf_devnode_realsmith_EHtZaXs32R = Tag1_realsmith_EHtZaXs32R(/*int:17528:17528:17253:e*/intf_devnode_realsmith_EHtZaXs32R);
/*aft_stmt:17253*/
    /*bef_stmt:17288*/
func_realsmith_EHtZaXs32R.sink_realsmith_EHtZaXs32R = Tag2_realsmith_EHtZaXs32R(/*int:17528:17528:17288:e*/sink_realsmith_EHtZaXs32R);
/*aft_stmt:17288*/
    /*bef_stmt:17309*/
func_realsmith_EHtZaXs32R.proc_realsmith_EHtZaXs32R = Tag3_realsmith_EHtZaXs32R(/*int:17528:17528:17309:e*/proc_realsmith_EHtZaXs32R);
/*aft_stmt:17309*/
    /*bef_stmt:17330*/
func_realsmith_EHtZaXs32R.vdev_entity_realsmith_EHtZaXs32R = Tag4_realsmith_EHtZaXs32R(/*int:17528:17528:17330:e*/vdev_entity_realsmith_EHtZaXs32R);
/*aft_stmt:17330*/
    int result_realsmith_EHtZaXs32R = 0;
    /*bef_stmt:17374*/
result_realsmith_EHtZaXs32R += Tag5_realsmith_EHtZaXs32R(/*int:17528:17528:17374:e*/func_realsmith_EHtZaXs32R.intf_devnode_realsmith_EHtZaXs32R);
/*aft_stmt:17374*/
    /*bef_stmt:17397*/
result_realsmith_EHtZaXs32R += Tag6_realsmith_EHtZaXs32R(/*int:17528:17528:17397:e*/func_realsmith_EHtZaXs32R.sink_realsmith_EHtZaXs32R);
/*aft_stmt:17397*/
    /*bef_stmt:17421*/
result_realsmith_EHtZaXs32R += Tag7_realsmith_EHtZaXs32R(/*int:17528:17528:17421:e*/func_realsmith_EHtZaXs32R.proc_realsmith_EHtZaXs32R);
/*aft_stmt:17421*/
    /*bef_stmt:17444*/
result_realsmith_EHtZaXs32R += Tag8_realsmith_EHtZaXs32R(/*int:17528:17528:17444:e*/func_realsmith_EHtZaXs32R.vdev_entity_realsmith_EHtZaXs32R);
/*aft_stmt:17444*/
    /*bef_stmt:17467*/
result_realsmith_EHtZaXs32R += Tag9_realsmith_EHtZaXs32R(/*int:17528:17528:17467:e*/func_realsmith_EHtZaXs32R.sink_realsmith_EHtZaXs32R);
/*aft_stmt:17467*/
    /*bef_stmt:17490*/
result_realsmith_EHtZaXs32R += Tag10_realsmith_EHtZaXs32R(/*int:17528:17528:17490:e*/func_realsmith_EHtZaXs32R.proc_realsmith_EHtZaXs32R);
/*aft_stmt:17490*/
    /*bef_stmt:17513*/
result_realsmith_EHtZaXs32R += Tag11_realsmith_EHtZaXs32R(/*int:17528:17528:17513:e*/func_realsmith_EHtZaXs32R.vdev_entity_realsmith_EHtZaXs32R);
/*aft_stmt:17513*/
    /*bef_stmt:17526*/
return Tag12_realsmith_EHtZaXs32R(/*int:17528:17528:17526:e*/result_realsmith_EHtZaXs32R);
/*aft_stmt:17526*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_j8cy4D0e3B(x) (x)
#define Tag2_realsmith_j8cy4D0e3B(x) (x)
#define Tag3_realsmith_j8cy4D0e3B(x) (x)
#include "stdlib.h"
int realsmith_j8cy4D0e3B(int irq_realsmith_j8cy4D0e3B, int features_realsmith_j8cy4D0e3B) {
    int IRQ_HANDLED_realsmith_j8cy4D0e3B = 1;
    int ARM_SMMU_FEAT_PRI_realsmith_j8cy4D0e3B = 1;
    int evtq_result_realsmith_j8cy4D0e3B = 0;
    /*bef_stmt:17213*/
/*bef_stmt:17213*/
if (Tag1_realsmith_j8cy4D0e3B(/*int:17226:17226:17213:e*/features_realsmith_j8cy4D0e3B) & Tag2_realsmith_j8cy4D0e3B(/*int:17226:17226:17213:e*/ARM_SMMU_FEAT_PRI_realsmith_j8cy4D0e3B)) {
        int priq_result_realsmith_j8cy4D0e3B = 0;
    }
/*aft_stmt:17213*/
/*aft_stmt:17213*/
    /*bef_stmt:17224*/
return Tag3_realsmith_j8cy4D0e3B(/*int:17226:17226:17224:e*/IRQ_HANDLED_realsmith_j8cy4D0e3B);
/*aft_stmt:17224*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_wVVVRLNQYR(x) (x)
#define Tag2_realsmith_wVVVRLNQYR(x) (x)
#define Tag3_realsmith_wVVVRLNQYR(x) (x)
#define Tag4_realsmith_wVVVRLNQYR(x) (x)
#define Tag5_realsmith_wVVVRLNQYR(x) (x)
#define Tag6_realsmith_wVVVRLNQYR(x) (x)
#define Tag7_realsmith_wVVVRLNQYR(x) (x)
#define Tag8_realsmith_wVVVRLNQYR(x) (x)
#include "stdlib.h"
int realsmith_wVVVRLNQYR(int device_supports_autoneg_fc_realsmith_wVVVRLNQYR, int disable_fc_autoneg_realsmith_wVVVRLNQYR, int current_mode_realsmith_wVVVRLNQYR) {
    int autoneg_realsmith_wVVVRLNQYR = 0;
    int rx_pause_realsmith_wVVVRLNQYR = 0;
    int tx_pause_realsmith_wVVVRLNQYR = 0;
    /*bef_stmt:17224*/
/*bef_stmt:17224*/
if (Tag1_realsmith_wVVVRLNQYR(/*int:17408:17408:17224:e*/device_supports_autoneg_fc_realsmith_wVVVRLNQYR) && !Tag2_realsmith_wVVVRLNQYR(/*int:17408:17408:17224:e*/disable_fc_autoneg_realsmith_wVVVRLNQYR)) {
        autoneg_realsmith_wVVVRLNQYR = 1;
    }
/*aft_stmt:17224*/
/*aft_stmt:17224*/
    /*bef_stmt:17341*/
/*bef_stmt:17341*/
/*bef_stmt:17341*/
if (Tag3_realsmith_wVVVRLNQYR(/*int:17408:17408:17341:e*/current_mode_realsmith_wVVVRLNQYR) == 1) {
        rx_pause_realsmith_wVVVRLNQYR = 1;
    } else if (Tag4_realsmith_wVVVRLNQYR(/*int:17408:17408:17341:e*/current_mode_realsmith_wVVVRLNQYR) == 2) {
        tx_pause_realsmith_wVVVRLNQYR = 1;
    } else if (Tag5_realsmith_wVVVRLNQYR(/*int:17408:17408:17341:e*/current_mode_realsmith_wVVVRLNQYR) == 3) {
        rx_pause_realsmith_wVVVRLNQYR = 1;
        tx_pause_realsmith_wVVVRLNQYR = 1;
    }
/*aft_stmt:17341*/
/*aft_stmt:17341*/
/*aft_stmt:17341*/
    /*bef_stmt:17400*/
/*bef_stmt:17400*/
/*bef_stmt:17400*/
return (Tag6_realsmith_wVVVRLNQYR(/*int:17408:17408:17400:e*/autoneg_realsmith_wVVVRLNQYR) << 2) | (Tag7_realsmith_wVVVRLNQYR(/*int:17408:17408:17400:e*/rx_pause_realsmith_wVVVRLNQYR) << 1) | Tag8_realsmith_wVVVRLNQYR(/*int:17408:17408:17400:e*/tx_pause_realsmith_wVVVRLNQYR);
/*aft_stmt:17400*/
/*aft_stmt:17400*/
/*aft_stmt:17400*/
}



#include "stdint.h"
struct pci_bits_Yg2o7o {
    int member_0_realsmith_EdELvbHUOC;
    int member_1_realsmith_EdELvbHUOC;
    int member_2_realsmith_EdELvbHUOC;
    int member_3_realsmith_EdELvbHUOC;
};
int realsmith_EdELvbHUOC(int port_no_realsmith_EdELvbHUOC, unsigned long deadline_realsmith_EdELvbHUOC) {
    static const struct pci_bits_Yg2o7o hpt37x_enable_bits_realsmith_EdELvbHUOC[] = {
        { 0x50, 1, 0x04, 0x04 },
        { 0x54, 1, 0x04, 0x04 }
    };
    if (port_no_realsmith_EdELvbHUOC < 0 || port_no_realsmith_EdELvbHUOC >= 2)
        return -1;
    if (hpt37x_enable_bits_realsmith_EdELvbHUOC[port_no_realsmith_EdELvbHUOC].member_1_realsmith_EdELvbHUOC != 1)
        return -1;
    int config_value_realsmith_EdELvbHUOC = 0x37;
    for (volatile int i_realsmith_EdELvbHUOC = 0; i_realsmith_EdELvbHUOC < 100000; i_realsmith_EdELvbHUOC++);
    return 0;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_UNUEp7xdvz(x) (x)
#include "stdint.h"
signed int realsmith_UNUEp7xdvz(signed int val_realsmith_UNUEp7xdvz) {
    /*bef_stmt:1995*/
return ((/*TAG1:STA*/((int)(realsmith_fFniAcj60O((int)(val_realsmith_UNUEp7xdvz)+(25))+(int)(val_realsmith_UNUEp7xdvz)-(93))+val_realsmith_UNUEp7xdvz)/*TAG1:END:val_realsmith_UNUEp7xdvz*/) << 16) & 0xFFFF;
/*aft_stmt:1995*/
}



#include "stdlib.h"
struct ext4_dir_entry_2_nbUOqh {
    int rec_len_realsmith_f4UXTJWK7C;
    long inode_realsmith_f4UXTJWK7C;
};
int realsmith_f4UXTJWK7C(int dir_size_realsmith_f4UXTJWK7C, int blocksize_realsmith_f4UXTJWK7C, int d_name_len_realsmith_f4UXTJWK7C, int inode_realsmith_f4UXTJWK7C, int *new_inode_state_realsmith_f4UXTJWK7C) {
    if (d_name_len_realsmith_f4UXTJWK7C == 0) {
        return -1;
    }
    int blocks_realsmith_f4UXTJWK7C = dir_size_realsmith_f4UXTJWK7C / blocksize_realsmith_f4UXTJWK7C;
    int retval_realsmith_f4UXTJWK7C = 0;
    int block_realsmith_f4UXTJWK7C;
    for (block_realsmith_f4UXTJWK7C = 0; block_realsmith_f4UXTJWK7C < blocks_realsmith_f4UXTJWK7C; block_realsmith_f4UXTJWK7C++) {
        int space_available_realsmith_f4UXTJWK7C = blocksize_realsmith_f4UXTJWK7C - sizeof(struct ext4_dir_entry_2_nbUOqh);
        if (space_available_realsmith_f4UXTJWK7C < sizeof(struct ext4_dir_entry_2_nbUOqh)) {
            retval_realsmith_f4UXTJWK7C = -28;
            break;
        }
        struct ext4_dir_entry_2_nbUOqh de_realsmith_f4UXTJWK7C;
        de_realsmith_f4UXTJWK7C.inode_realsmith_f4UXTJWK7C = inode_realsmith_f4UXTJWK7C;
        de_realsmith_f4UXTJWK7C.rec_len_realsmith_f4UXTJWK7C = blocksize_realsmith_f4UXTJWK7C;
        retval_realsmith_f4UXTJWK7C = 0;
        break;
    }
    if (retval_realsmith_f4UXTJWK7C == 0) {
        *new_inode_state_realsmith_f4UXTJWK7C = 1;
    }
    return retval_realsmith_f4UXTJWK7C;
}
int realsmith_proxy_RayFxwV2wl(int p_0_p2jcP8TTNp, int p_1_Z67eW7kTKe, int p_2_guK0Efnvrr, int p_3_dbqSOP8j1F, int p_4_J0sJxNSrGz) {
int proxy_XmFXRLsHJb[17] = { 81, p_4_J0sJxNSrGz, p_4_J0sJxNSrGz, p_4_J0sJxNSrGz, p_4_J0sJxNSrGz, 63, p_4_J0sJxNSrGz, 29, p_4_J0sJxNSrGz, p_4_J0sJxNSrGz, 12, p_4_J0sJxNSrGz, 37, 73, 18, 58, p_4_J0sJxNSrGz };
int proxy_ret_UoYouSPwXR = realsmith_f4UXTJWK7C(p_0_p2jcP8TTNp, p_1_Z67eW7kTKe, p_2_guK0Efnvrr, p_3_dbqSOP8j1F, proxy_XmFXRLsHJb);
return proxy_ret_UoYouSPwXR;
}


#include "stdlib.h"
int realsmith_gj2ODybd0V(int *wmap_realsmith_gj2ODybd0V) {
    int nleafs_realsmith_gj2ODybd0V = 16;
    int l2nleafs_realsmith_gj2ODybd0V = 4;
    int leafidx_realsmith_gj2ODybd0V = 0;
    int height_realsmith_gj2ODybd0V = 4;
    int stree_realsmith_gj2ODybd0V[16];
    for (int i_realsmith_gj2ODybd0V = 0; i_realsmith_gj2ODybd0V < 16; i_realsmith_gj2ODybd0V++) {
        int maxBud_realsmith_gj2ODybd0V = 0;
        for (int j_realsmith_gj2ODybd0V = 0; j_realsmith_gj2ODybd0V < 8; j_realsmith_gj2ODybd0V++) {
            if ((wmap_realsmith_gj2ODybd0V[i_realsmith_gj2ODybd0V] & (1 << j_realsmith_gj2ODybd0V)) == 0) {
                maxBud_realsmith_gj2ODybd0V = j_realsmith_gj2ODybd0V;
                break;
            }
        }
        stree_realsmith_gj2ODybd0V[leafidx_realsmith_gj2ODybd0V + i_realsmith_gj2ODybd0V] = maxBud_realsmith_gj2ODybd0V;
    }
    return 0;
}
int realsmith_proxy_mzCW6JkJUR(int p_0_fW9JIzf3VB) {
int proxy_CgQiSNA42K[17] = { 32, 64, p_0_fW9JIzf3VB, p_0_fW9JIzf3VB, 37, 7, 55, p_0_fW9JIzf3VB, p_0_fW9JIzf3VB, 46, p_0_fW9JIzf3VB, 11, 22, 21, p_0_fW9JIzf3VB, p_0_fW9JIzf3VB, 79 };
int proxy_ret_PE50eyX6UG = realsmith_gj2ODybd0V(proxy_CgQiSNA42K);
return proxy_ret_PE50eyX6UG;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_cxi8fEIHOZ(x) (x)
#define Tag2_realsmith_cxi8fEIHOZ(x) (x)
#define Tag3_realsmith_cxi8fEIHOZ(x) (x)
#include "stdlib.h"
struct tx_servq_r0VzCW {
    unsigned long qcnt_realsmith_cxi8fEIHOZ;
    int sta_pending_realsmith_cxi8fEIHOZ;
    int tx_pending_realsmith_cxi8fEIHOZ;
};
int realsmith_cxi8fEIHOZ(int sta_pending_realsmith_cxi8fEIHOZ, int tx_pending_realsmith_cxi8fEIHOZ) {
    struct tx_servq_r0VzCW ptxservq_realsmith_cxi8fEIHOZ;
    /*bef_stmt:17203*/
ptxservq_realsmith_cxi8fEIHOZ.tx_pending_realsmith_cxi8fEIHOZ = /*TAG1:STA*/((int)(realsmith_IbCHfZsOYQ((unsigned long)(tx_pending_realsmith_cxi8fEIHOZ)+(12), (int)(tx_pending_realsmith_cxi8fEIHOZ)+(-17), (int)(tx_pending_realsmith_cxi8fEIHOZ)+(56), (unsigned long)(tx_pending_realsmith_cxi8fEIHOZ)+(-14), (int)(tx_pending_realsmith_cxi8fEIHOZ)+(25))+(int)(tx_pending_realsmith_cxi8fEIHOZ)-(43))+tx_pending_realsmith_cxi8fEIHOZ)/*TAG1:END:tx_pending_realsmith_cxi8fEIHOZ*/;
/*aft_stmt:17203*/
    /*bef_stmt:17237*/
ptxservq_realsmith_cxi8fEIHOZ.sta_pending_realsmith_cxi8fEIHOZ = /*TAG2:STA*/((int)(realsmith_9ToIrvaGux((int)(sta_pending_realsmith_cxi8fEIHOZ)+(-6), (int)(sta_pending_realsmith_cxi8fEIHOZ)+(15), (int)(sta_pending_realsmith_cxi8fEIHOZ)+(8), (int)(sta_pending_realsmith_cxi8fEIHOZ)+(40))+(int)(sta_pending_realsmith_cxi8fEIHOZ)-(41))+sta_pending_realsmith_cxi8fEIHOZ)/*TAG2:END:sta_pending_realsmith_cxi8fEIHOZ*/;
/*aft_stmt:17237*/
    ptxservq_realsmith_cxi8fEIHOZ.qcnt_realsmith_cxi8fEIHOZ = 0;
    /*bef_stmt:17278*/
return /*TAG3:STA*/((unsigned long)(realsmith_jwm6hixEE7((int)(ptxservq_realsmith_cxi8fEIHOZ.qcnt_realsmith_cxi8fEIHOZ)+(1), (int)(ptxservq_realsmith_cxi8fEIHOZ.qcnt_realsmith_cxi8fEIHOZ)+(70), (int)(ptxservq_realsmith_cxi8fEIHOZ.qcnt_realsmith_cxi8fEIHOZ)+(14))+(int)(ptxservq_realsmith_cxi8fEIHOZ.qcnt_realsmith_cxi8fEIHOZ)-(-1))+ptxservq_realsmith_cxi8fEIHOZ.qcnt_realsmith_cxi8fEIHOZ)/*TAG3:END:ptxservq_realsmith_cxi8fEIHOZ.qcnt_realsmith_cxi8fEIHOZ*/;
/*aft_stmt:17278*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_Rob6vlvOi9(x) (x)
#define Tag2_realsmith_Rob6vlvOi9(x) (x)
#define Tag3_realsmith_Rob6vlvOi9(x) (x)
#define Tag4_realsmith_Rob6vlvOi9(x) (x)
#define Tag5_realsmith_Rob6vlvOi9(x) (x)
#define Tag6_realsmith_Rob6vlvOi9(x) (x)
#define Tag7_realsmith_Rob6vlvOi9(x) (x)
#define Tag8_realsmith_Rob6vlvOi9(x) (x)
#define Tag9_realsmith_Rob6vlvOi9(x) (x)
#define Tag10_realsmith_Rob6vlvOi9(x) (x)
#include "stdlib.h"
int realsmith_Rob6vlvOi9(int hwp_realsmith_Rob6vlvOi9, int sm_list_deleted_realsmith_Rob6vlvOi9, unsigned long time_realsmith_Rob6vlvOi9, unsigned long jiffies_realsmith_Rob6vlvOi9, int max_scan_tmo_realsmith_Rob6vlvOi9, int delta_scan_tmo_realsmith_Rob6vlvOi9) {
    int rv_realsmith_Rob6vlvOi9 = 1;
    /*bef_stmt:17229*/
/*bef_stmt:17229*/
/*bef_stmt:17229*/
if (!/*TAG1:STA*/((int)(realsmith_RJPcfxWtCl((int)(hwp_realsmith_Rob6vlvOi9)+(-23))+(int)(hwp_realsmith_Rob6vlvOi9)-(81))+hwp_realsmith_Rob6vlvOi9)/*TAG1:END:hwp_realsmith_Rob6vlvOi9*/ || /*TAG2:STA*/((int)(realsmith_proxy_oGgkcnDOcP((int)(sm_list_deleted_realsmith_Rob6vlvOi9)+(31), (int)(sm_list_deleted_realsmith_Rob6vlvOi9)+(-14), (int)(sm_list_deleted_realsmith_Rob6vlvOi9)+(35), (int)(sm_list_deleted_realsmith_Rob6vlvOi9)+(14))+(int)(sm_list_deleted_realsmith_Rob6vlvOi9)-(50))+sm_list_deleted_realsmith_Rob6vlvOi9)/*TAG2:END:sm_list_deleted_realsmith_Rob6vlvOi9*/)
        return /*TAG3:STA*/((int)(realsmith_WsnnEeTTT9((int)(rv_realsmith_Rob6vlvOi9)+(32), (int)(rv_realsmith_Rob6vlvOi9)+(85), (unsigned char)(rv_realsmith_Rob6vlvOi9)+(95))+(int)(rv_realsmith_Rob6vlvOi9)-(1))+rv_realsmith_Rob6vlvOi9)/*TAG3:END:rv_realsmith_Rob6vlvOi9*/;
/*aft_stmt:17229*/
/*aft_stmt:17229*/
/*aft_stmt:17229*/
    /*bef_stmt:17349*/
/*bef_stmt:17349*/
/*bef_stmt:17349*/
/*bef_stmt:17349*/
/*bef_stmt:17349*/
unsigned long scan_time_realsmith_Rob6vlvOi9 = (Tag4_realsmith_Rob6vlvOi9(/*int:17408:17408:17349:e*/max_scan_tmo_realsmith_Rob6vlvOi9) * 100) * (Tag5_realsmith_Rob6vlvOi9(/*unsigned long:17408:17408:17349:e*/time_realsmith_Rob6vlvOi9) > (Tag6_realsmith_Rob6vlvOi9(/*unsigned long:17408:17408:17349:e*/jiffies_realsmith_Rob6vlvOi9) - Tag7_realsmith_Rob6vlvOi9(/*unsigned long:17408:17408:17349:e*/time_realsmith_Rob6vlvOi9)) ? 1 : 0) + (Tag8_realsmith_Rob6vlvOi9(/*int:17408:17408:17349:e*/delta_scan_tmo_realsmith_Rob6vlvOi9) * 100);
/*aft_stmt:17349*/
/*aft_stmt:17349*/
/*aft_stmt:17349*/
/*aft_stmt:17349*/
/*aft_stmt:17349*/
    /*bef_stmt:17392*/
rv_realsmith_Rob6vlvOi9 = (Tag9_realsmith_Rob6vlvOi9(/*unsigned long:17408:17408:17392:e*/scan_time_realsmith_Rob6vlvOi9) > 0) ? 0 : 1;
/*aft_stmt:17392*/
    /*bef_stmt:17403*/
return Tag10_realsmith_Rob6vlvOi9(/*int:17408:17408:17403:e*/rv_realsmith_Rob6vlvOi9);
/*aft_stmt:17403*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_LQuSwdifg5(x) (x)
#define Tag2_realsmith_LQuSwdifg5(x) (x)
#define Tag3_realsmith_LQuSwdifg5(x) (x)
#define Tag4_realsmith_LQuSwdifg5(x) (x)
#define Tag5_realsmith_LQuSwdifg5(x) (x)
#define Tag6_realsmith_LQuSwdifg5(x) (x)
#define Tag7_realsmith_LQuSwdifg5(x) (x)
#define Tag8_realsmith_LQuSwdifg5(x) (x)
#define Tag9_realsmith_LQuSwdifg5(x) (x)
#define Tag10_realsmith_LQuSwdifg5(x) (x)
#define Tag11_realsmith_LQuSwdifg5(x) (x)
#define Tag12_realsmith_LQuSwdifg5(x) (x)
#define Tag13_realsmith_LQuSwdifg5(x) (x)
#define Tag14_realsmith_LQuSwdifg5(x) (x)
#define Tag15_realsmith_LQuSwdifg5(x) (x)
#define Tag16_realsmith_LQuSwdifg5(x) (x)
#define Tag17_realsmith_LQuSwdifg5(x) (x)
#define Tag18_realsmith_LQuSwdifg5(x) (x)
#define Tag19_realsmith_LQuSwdifg5(x) (x)
#define Tag20_realsmith_LQuSwdifg5(x) (x)
#define Tag21_realsmith_LQuSwdifg5(x) (x)
#define Tag22_realsmith_LQuSwdifg5(x) (x)
#define Tag23_realsmith_LQuSwdifg5(x) (x)
#include "stdlib.h"
int realsmith_LQuSwdifg5(int RF_pll_ref_realsmith_LQuSwdifg5, int RF_rf_pll_mod0_realsmith_LQuSwdifg5, int RF_rf_pll_mod1_realsmith_LQuSwdifg5, int RF_vco_cap_tail_realsmith_LQuSwdifg5,
                                      int RF_vco_cal1_realsmith_LQuSwdifg5, int RF_vco_cal2_realsmith_LQuSwdifg5, int RF_pll_lf_c1_realsmith_LQuSwdifg5, int RF_pll_lf_r1_realsmith_LQuSwdifg5,
                                      int RF_pll_lf_c2_realsmith_LQuSwdifg5, int RF_lgbuf_cen_buf_realsmith_LQuSwdifg5, int RF_lgen_tune1_realsmith_LQuSwdifg5, int RF_lgen_tune2_realsmith_LQuSwdifg5,
                                      int RF_core1_lgbuf_a_tune_realsmith_LQuSwdifg5, int RF_core1_lgbuf_g_tune_realsmith_LQuSwdifg5, int RF_core1_rxrf_reg1_realsmith_LQuSwdifg5,
                                      int RF_core1_tx_pga_pad_tn_realsmith_LQuSwdifg5, int RF_core1_tx_mx_bgtrim_realsmith_LQuSwdifg5,
                                      int RF_core2_lgbuf_a_tune_realsmith_LQuSwdifg5, int RF_core2_lgbuf_g_tune_realsmith_LQuSwdifg5, int RF_core2_rxrf_reg1_realsmith_LQuSwdifg5,
                                      int RF_core2_tx_pga_pad_tn_realsmith_LQuSwdifg5, int RF_core2_tx_mx_bgtrim_realsmith_LQuSwdifg5) {
    int result_realsmith_LQuSwdifg5 = 0;
    /*bef_stmt:17571*/
/*bef_stmt:17571*/
/*bef_stmt:17571*/
/*bef_stmt:17571*/
result_realsmith_LQuSwdifg5 += /*TAG1:STA*/((int)(realsmith_NEjEIVFnHA((int)(RF_pll_ref_realsmith_LQuSwdifg5)+(53), (int)(RF_pll_ref_realsmith_LQuSwdifg5)+(72), (int)(RF_pll_ref_realsmith_LQuSwdifg5)+(16), (int)(RF_pll_ref_realsmith_LQuSwdifg5)+(69))+(int)(RF_pll_ref_realsmith_LQuSwdifg5)-(117))+RF_pll_ref_realsmith_LQuSwdifg5)/*TAG1:END:RF_pll_ref_realsmith_LQuSwdifg5*/ + /*TAG2:STA*/((int)(realsmith_W6puj2JhU4((unsigned int)(RF_rf_pll_mod0_realsmith_LQuSwdifg5)+(-57), (unsigned int)(RF_rf_pll_mod0_realsmith_LQuSwdifg5)+(-82))+(int)(RF_rf_pll_mod0_realsmith_LQuSwdifg5)-(-1718026158))+RF_rf_pll_mod0_realsmith_LQuSwdifg5)/*TAG2:END:RF_rf_pll_mod0_realsmith_LQuSwdifg5*/ + /*TAG3:STA*/((int)(realsmith_D6qZ4CHy7m((int)(RF_rf_pll_mod1_realsmith_LQuSwdifg5)+(-46), (unsigned int)(RF_rf_pll_mod1_realsmith_LQuSwdifg5)+(-59))+(int)(RF_rf_pll_mod1_realsmith_LQuSwdifg5)-(59))+RF_rf_pll_mod1_realsmith_LQuSwdifg5)/*TAG3:END:RF_rf_pll_mod1_realsmith_LQuSwdifg5*/ + /*TAG4:STA*/((int)(realsmith_proxy_SxTXleihUL((int)(RF_vco_cap_tail_realsmith_LQuSwdifg5)+(-95), (unsigned int)(RF_vco_cap_tail_realsmith_LQuSwdifg5)+(-47))+(int)(RF_vco_cap_tail_realsmith_LQuSwdifg5)-(147))+RF_vco_cap_tail_realsmith_LQuSwdifg5)/*TAG4:END:RF_vco_cap_tail_realsmith_LQuSwdifg5*/;
/*aft_stmt:17571*/
/*aft_stmt:17571*/
/*aft_stmt:17571*/
/*aft_stmt:17571*/
    /*bef_stmt:17621*/
/*bef_stmt:17621*/
/*bef_stmt:17621*/
/*bef_stmt:17621*/
result_realsmith_LQuSwdifg5 += /*TAG5:STA*/((int)(realsmith_zoThf4U29F((int)(RF_vco_cal1_realsmith_LQuSwdifg5)+(62), (int)(RF_vco_cal1_realsmith_LQuSwdifg5)+(1))+((unsigned int)(RF_vco_cal1_realsmith_LQuSwdifg5)-(29))-(4294967294))+RF_vco_cal1_realsmith_LQuSwdifg5)/*TAG5:END:RF_vco_cal1_realsmith_LQuSwdifg5*/ + /*TAG6:STA*/((int)(realsmith_proxy_bmphng6sd1((int)(RF_vco_cal2_realsmith_LQuSwdifg5)+(72), (char)(RF_vco_cal2_realsmith_LQuSwdifg5)+(92), (int)(RF_vco_cal2_realsmith_LQuSwdifg5)+(92))+(int)(RF_vco_cal2_realsmith_LQuSwdifg5)-(1))+RF_vco_cal2_realsmith_LQuSwdifg5)/*TAG6:END:RF_vco_cal2_realsmith_LQuSwdifg5*/ + /*TAG7:STA*/((int)(realsmith_proxy_G44TLMG6fI((int)(RF_pll_lf_c1_realsmith_LQuSwdifg5)+(-172), (int)(RF_pll_lf_c1_realsmith_LQuSwdifg5)+(-11), (int)(RF_pll_lf_c1_realsmith_LQuSwdifg5)+(-16), (int)(RF_pll_lf_c1_realsmith_LQuSwdifg5)+(-99))+(int)(RF_pll_lf_c1_realsmith_LQuSwdifg5)-(99))+RF_pll_lf_c1_realsmith_LQuSwdifg5)/*TAG7:END:RF_pll_lf_c1_realsmith_LQuSwdifg5*/ + /*TAG8:STA*/((int)(realsmith_BCNxF54gU1((int)(RF_pll_lf_r1_realsmith_LQuSwdifg5)+(-9), (int)(RF_pll_lf_r1_realsmith_LQuSwdifg5)+(-4))+(int)(RF_pll_lf_r1_realsmith_LQuSwdifg5)-(14))+RF_pll_lf_r1_realsmith_LQuSwdifg5)/*TAG8:END:RF_pll_lf_r1_realsmith_LQuSwdifg5*/;
/*aft_stmt:17621*/
/*aft_stmt:17621*/
/*aft_stmt:17621*/
/*aft_stmt:17621*/
    /*bef_stmt:17671*/
/*bef_stmt:17671*/
/*bef_stmt:17671*/
/*bef_stmt:17671*/
result_realsmith_LQuSwdifg5 += /*TAG9:STA*/((int)(realsmith_T8e07tlrUz((int)(RF_pll_lf_c2_realsmith_LQuSwdifg5)+(24))+(int)(RF_pll_lf_c2_realsmith_LQuSwdifg5)-(983064))+RF_pll_lf_c2_realsmith_LQuSwdifg5)/*TAG9:END:RF_pll_lf_c2_realsmith_LQuSwdifg5*/ + /*TAG10:STA*/((int)(realsmith_NsP23Kmzj6((int)(RF_lgbuf_cen_buf_realsmith_LQuSwdifg5)+(60), (int)(RF_lgbuf_cen_buf_realsmith_LQuSwdifg5)+(0), (int)(RF_lgbuf_cen_buf_realsmith_LQuSwdifg5)+(30), (int)(RF_lgbuf_cen_buf_realsmith_LQuSwdifg5)+(80), (int)(RF_lgbuf_cen_buf_realsmith_LQuSwdifg5)+(61))+(int)(RF_lgbuf_cen_buf_realsmith_LQuSwdifg5)-(12))+RF_lgbuf_cen_buf_realsmith_LQuSwdifg5)/*TAG10:END:RF_lgbuf_cen_buf_realsmith_LQuSwdifg5*/ + /*TAG11:STA*/((int)(realsmith_CgpV6QuCWp((int)(RF_lgen_tune1_realsmith_LQuSwdifg5)+(78), (int)(RF_lgen_tune1_realsmith_LQuSwdifg5)+(0), (unsigned int)(RF_lgen_tune1_realsmith_LQuSwdifg5)+(70), (unsigned int)(RF_lgen_tune1_realsmith_LQuSwdifg5)+(0), (unsigned int)(RF_lgen_tune1_realsmith_LQuSwdifg5)+(20))+(int)(RF_lgen_tune1_realsmith_LQuSwdifg5)-(2))+RF_lgen_tune1_realsmith_LQuSwdifg5)/*TAG11:END:RF_lgen_tune1_realsmith_LQuSwdifg5*/ + /*TAG12:STA*/((int)(realsmith_RGjFxF8tfq((int)(RF_lgen_tune2_realsmith_LQuSwdifg5)+(-1), (int)(RF_lgen_tune2_realsmith_LQuSwdifg5)+(40), (int)(RF_lgen_tune2_realsmith_LQuSwdifg5)+(11), (int)(RF_lgen_tune2_realsmith_LQuSwdifg5)+(18))+(int)(RF_lgen_tune2_realsmith_LQuSwdifg5)-(41))+RF_lgen_tune2_realsmith_LQuSwdifg5)/*TAG12:END:RF_lgen_tune2_realsmith_LQuSwdifg5*/;
/*aft_stmt:17671*/
/*aft_stmt:17671*/
/*aft_stmt:17671*/
/*aft_stmt:17671*/
    /*bef_stmt:17721*/
/*bef_stmt:17721*/
/*bef_stmt:17721*/
/*bef_stmt:17721*/
result_realsmith_LQuSwdifg5 += /*TAG13:STA*/((int)(realsmith_Mk3GyjU678((int)(RF_core1_lgbuf_a_tune_realsmith_LQuSwdifg5)+(41), (int)(RF_core1_lgbuf_a_tune_realsmith_LQuSwdifg5)+(39), (int)(RF_core1_lgbuf_a_tune_realsmith_LQuSwdifg5)+(-25), (int)(RF_core1_lgbuf_a_tune_realsmith_LQuSwdifg5)+(71), (int)(RF_core1_lgbuf_a_tune_realsmith_LQuSwdifg5)+(-8))+(int)(RF_core1_lgbuf_a_tune_realsmith_LQuSwdifg5)-(99))+RF_core1_lgbuf_a_tune_realsmith_LQuSwdifg5)/*TAG13:END:RF_core1_lgbuf_a_tune_realsmith_LQuSwdifg5*/ + /*TAG14:STA*/((int)(realsmith_FE0pSq3pmW((unsigned long)(RF_core1_lgbuf_g_tune_realsmith_LQuSwdifg5)+(-10), (unsigned long)(RF_core1_lgbuf_g_tune_realsmith_LQuSwdifg5)+(-83), (unsigned long)(RF_core1_lgbuf_g_tune_realsmith_LQuSwdifg5)+(-69), (unsigned long)(RF_core1_lgbuf_g_tune_realsmith_LQuSwdifg5)+(-34))+(int)(RF_core1_lgbuf_g_tune_realsmith_LQuSwdifg5)-(3168))+RF_core1_lgbuf_g_tune_realsmith_LQuSwdifg5)/*TAG14:END:RF_core1_lgbuf_g_tune_realsmith_LQuSwdifg5*/ + /*TAG15:STA*/((int)(realsmith_RLPIrnJMl6((unsigned long)(RF_core1_rxrf_reg1_realsmith_LQuSwdifg5)+(9), (unsigned long)(RF_core1_rxrf_reg1_realsmith_LQuSwdifg5)+(-74), (unsigned long)(RF_core1_rxrf_reg1_realsmith_LQuSwdifg5)+(15), (unsigned long)(RF_core1_rxrf_reg1_realsmith_LQuSwdifg5)+(9), (unsigned long)(RF_core1_rxrf_reg1_realsmith_LQuSwdifg5)+(-20))+(int)(RF_core1_rxrf_reg1_realsmith_LQuSwdifg5)-(84))+RF_core1_rxrf_reg1_realsmith_LQuSwdifg5)/*TAG15:END:RF_core1_rxrf_reg1_realsmith_LQuSwdifg5*/ + /*TAG16:STA*/((int)(realsmith_KEgcHdf6SL((long)(RF_core1_tx_pga_pad_tn_realsmith_LQuSwdifg5)+(23), (long)(RF_core1_tx_pga_pad_tn_realsmith_LQuSwdifg5)+(-24))+(int)(RF_core1_tx_pga_pad_tn_realsmith_LQuSwdifg5)-(66))+RF_core1_tx_pga_pad_tn_realsmith_LQuSwdifg5)/*TAG16:END:RF_core1_tx_pga_pad_tn_realsmith_LQuSwdifg5*/;
/*aft_stmt:17721*/
/*aft_stmt:17721*/
/*aft_stmt:17721*/
/*aft_stmt:17721*/
    /*bef_stmt:17771*/
/*bef_stmt:17771*/
/*bef_stmt:17771*/
/*bef_stmt:17771*/
result_realsmith_LQuSwdifg5 += /*TAG17:STA*/((int)(realsmith_j3LPNVR7fJ((int)(RF_core1_tx_mx_bgtrim_realsmith_LQuSwdifg5)+(-8), (int)(RF_core1_tx_mx_bgtrim_realsmith_LQuSwdifg5)+(21), (int)(RF_core1_tx_mx_bgtrim_realsmith_LQuSwdifg5)+(-33), (int)(RF_core1_tx_mx_bgtrim_realsmith_LQuSwdifg5)+(-50))+(int)(RF_core1_tx_mx_bgtrim_realsmith_LQuSwdifg5)-(104))+RF_core1_tx_mx_bgtrim_realsmith_LQuSwdifg5)/*TAG17:END:RF_core1_tx_mx_bgtrim_realsmith_LQuSwdifg5*/ + /*TAG18:STA*/((int)(realsmith_QVxHBQxHWm((int)(RF_core2_lgbuf_a_tune_realsmith_LQuSwdifg5)+(23))+(int)(RF_core2_lgbuf_a_tune_realsmith_LQuSwdifg5)-(277))+RF_core2_lgbuf_a_tune_realsmith_LQuSwdifg5)/*TAG18:END:RF_core2_lgbuf_a_tune_realsmith_LQuSwdifg5*/ + /*TAG19:STA*/((int)(realsmith_nW6tm5BcF5((int)(RF_core2_lgbuf_g_tune_realsmith_LQuSwdifg5)+(37), (int)(RF_core2_lgbuf_g_tune_realsmith_LQuSwdifg5)+(76), (int)(RF_core2_lgbuf_g_tune_realsmith_LQuSwdifg5)+(64))+(int)(RF_core2_lgbuf_g_tune_realsmith_LQuSwdifg5)-(13))+RF_core2_lgbuf_g_tune_realsmith_LQuSwdifg5)/*TAG19:END:RF_core2_lgbuf_g_tune_realsmith_LQuSwdifg5*/ + /*TAG20:STA*/((int)(realsmith_proxy_UJdOhWQqpg((int)(RF_core2_rxrf_reg1_realsmith_LQuSwdifg5)+(43), (int)(RF_core2_rxrf_reg1_realsmith_LQuSwdifg5)+(16), (int)(RF_core2_rxrf_reg1_realsmith_LQuSwdifg5)+(-98), (int)(RF_core2_rxrf_reg1_realsmith_LQuSwdifg5)+(-35))+(int)(RF_core2_rxrf_reg1_realsmith_LQuSwdifg5)-(31))+RF_core2_rxrf_reg1_realsmith_LQuSwdifg5)/*TAG20:END:RF_core2_rxrf_reg1_realsmith_LQuSwdifg5*/;
/*aft_stmt:17771*/
/*aft_stmt:17771*/
/*aft_stmt:17771*/
/*aft_stmt:17771*/
    /*bef_stmt:17799*/
/*bef_stmt:17799*/
result_realsmith_LQuSwdifg5 += /*TAG21:STA*/((int)(realsmith_Sv1YC8ryev((unsigned int)(RF_core2_tx_pga_pad_tn_realsmith_LQuSwdifg5)+(59), (long)(RF_core2_tx_pga_pad_tn_realsmith_LQuSwdifg5)+(-31), (unsigned int)(RF_core2_tx_pga_pad_tn_realsmith_LQuSwdifg5)+(17), (long)(RF_core2_tx_pga_pad_tn_realsmith_LQuSwdifg5)+(22))+(int)(RF_core2_tx_pga_pad_tn_realsmith_LQuSwdifg5)-(39))+RF_core2_tx_pga_pad_tn_realsmith_LQuSwdifg5)/*TAG21:END:RF_core2_tx_pga_pad_tn_realsmith_LQuSwdifg5*/ + /*TAG22:STA*/((int)(realsmith_proxy_eDxVLhNhwS((int)(RF_core2_tx_mx_bgtrim_realsmith_LQuSwdifg5)+(-50), (int)(RF_core2_tx_mx_bgtrim_realsmith_LQuSwdifg5)+(-26), (int)(RF_core2_tx_mx_bgtrim_realsmith_LQuSwdifg5)+(-130), (int)(RF_core2_tx_mx_bgtrim_realsmith_LQuSwdifg5)+(-62), (int)(RF_core2_tx_mx_bgtrim_realsmith_LQuSwdifg5)+(-4), (int)(RF_core2_tx_mx_bgtrim_realsmith_LQuSwdifg5)+(-171), (int)(RF_core2_tx_mx_bgtrim_realsmith_LQuSwdifg5)+(-100), (int)(RF_core2_tx_mx_bgtrim_realsmith_LQuSwdifg5)+(-115))+(int)(RF_core2_tx_mx_bgtrim_realsmith_LQuSwdifg5)-(73))+RF_core2_tx_mx_bgtrim_realsmith_LQuSwdifg5)/*TAG22:END:RF_core2_tx_mx_bgtrim_realsmith_LQuSwdifg5*/;
/*aft_stmt:17799*/
/*aft_stmt:17799*/
    result_realsmith_LQuSwdifg5 += 50;
    result_realsmith_LQuSwdifg5 += 5 + 45 + 65;
    /*bef_stmt:17856*/
return /*TAG23:STA*/((int)(realsmith_RsmSsZc7DJ((int)(result_realsmith_LQuSwdifg5)+(-1151), (int)(result_realsmith_LQuSwdifg5)+(-1095))+(int)(result_realsmith_LQuSwdifg5)-(1191))+result_realsmith_LQuSwdifg5)/*TAG23:END:result_realsmith_LQuSwdifg5*/;
/*aft_stmt:17856*/
}



#include "stdlib.h"
int realsmith_AdJcKrisOL(int nalloc_realsmith_AdJcKrisOL, int len_realsmith_AdJcKrisOL, char *body_realsmith_AdJcKrisOL) {
    if (nalloc_realsmith_AdJcKrisOL == (len_realsmith_AdJcKrisOL + 1)) {
        nalloc_realsmith_AdJcKrisOL *= 2;
        body_realsmith_AdJcKrisOL = (realloc(body_realsmith_AdJcKrisOL, nalloc_realsmith_AdJcKrisOL));
    }
    body_realsmith_AdJcKrisOL[len_realsmith_AdJcKrisOL++] = 0;
    return len_realsmith_AdJcKrisOL;
}
int realsmith_proxy_MG2tbaRz5j(int p_0_QgoTzxQmqq, int p_1_7hcYGYolSt, char p_2_JWlmHFlRUQ) {
char proxy_ga9lRPCxz1[17] = { p_2_JWlmHFlRUQ, 17, p_2_JWlmHFlRUQ, 23, p_2_JWlmHFlRUQ, 87, 63, 98, 60, p_2_JWlmHFlRUQ, 39, p_2_JWlmHFlRUQ, 0, 70, 87, p_2_JWlmHFlRUQ, 41 };
int proxy_ret_aX6wx9Fttc = realsmith_AdJcKrisOL(p_0_QgoTzxQmqq, p_1_7hcYGYolSt, proxy_ga9lRPCxz1);
return proxy_ret_aX6wx9Fttc;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_5m8rpJcOh1(x) (x)
#define Tag2_realsmith_5m8rpJcOh1(x) (x)
#define Tag3_realsmith_5m8rpJcOh1(x) (x)
#define Tag4_realsmith_5m8rpJcOh1(x) (x)
#define Tag5_realsmith_5m8rpJcOh1(x) (x)
#include "stdlib.h"
int realsmith_5m8rpJcOh1(int req_dummy_realsmith_5m8rpJcOh1) {
    int FLG_DES_realsmith_5m8rpJcOh1 = 1;
    int FLG_ECB_realsmith_5m8rpJcOh1 = 2;
    int FLG_ENCRYPT_realsmith_5m8rpJcOh1 = 4;
    /*bef_stmt:17188*/
/*bef_stmt:17188*/
/*bef_stmt:17188*/
int flags_realsmith_5m8rpJcOh1 = /*TAG1:STA*/((int)(realsmith_6BHPxTCXv7((int)(FLG_DES_realsmith_5m8rpJcOh1)+(62), (int)(FLG_DES_realsmith_5m8rpJcOh1)+(-1))+(int)(FLG_DES_realsmith_5m8rpJcOh1)-(1))+FLG_DES_realsmith_5m8rpJcOh1)/*TAG1:END:FLG_DES_realsmith_5m8rpJcOh1*/ | /*TAG2:STA*/((int)(realsmith_xR8PwzFKNh((int)(FLG_ECB_realsmith_5m8rpJcOh1)+(45), (int)(FLG_ECB_realsmith_5m8rpJcOh1)+(66), (int)(FLG_ECB_realsmith_5m8rpJcOh1)+(-1))+(int)(FLG_ECB_realsmith_5m8rpJcOh1)-(2))+FLG_ECB_realsmith_5m8rpJcOh1)/*TAG2:END:FLG_ECB_realsmith_5m8rpJcOh1*/ | /*TAG3:STA*/((int)(realsmith_JESx0bQMzC((int)(FLG_ENCRYPT_realsmith_5m8rpJcOh1)+(52))+(int)(FLG_ENCRYPT_realsmith_5m8rpJcOh1)-(2804))+FLG_ENCRYPT_realsmith_5m8rpJcOh1)/*TAG3:END:FLG_ENCRYPT_realsmith_5m8rpJcOh1*/;
/*aft_stmt:17188*/
/*aft_stmt:17188*/
/*aft_stmt:17188*/
    /*bef_stmt:17209*/
/*bef_stmt:17209*/
return /*TAG4:STA*/((int)(realsmith_proxy_Ic0tBFZT73((int)(req_dummy_realsmith_5m8rpJcOh1)+(-72), (char)(req_dummy_realsmith_5m8rpJcOh1)+(-100))+(int)(req_dummy_realsmith_5m8rpJcOh1)-(81))+req_dummy_realsmith_5m8rpJcOh1)/*TAG4:END:req_dummy_realsmith_5m8rpJcOh1*/ + /*TAG5:STA*/((int)(realsmith_9NTI4dSkXZ((int)(flags_realsmith_5m8rpJcOh1)+(57), (int)(flags_realsmith_5m8rpJcOh1)+(35), (unsigned long)(flags_realsmith_5m8rpJcOh1)+(60))+(int)(flags_realsmith_5m8rpJcOh1)-(7))+flags_realsmith_5m8rpJcOh1)/*TAG5:END:flags_realsmith_5m8rpJcOh1*/;
/*aft_stmt:17209*/
/*aft_stmt:17209*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_g3rp3dCwFM(x) (x)
#define Tag2_realsmith_g3rp3dCwFM(x) (x)
#define Tag3_realsmith_g3rp3dCwFM(x) (x)
#define Tag4_realsmith_g3rp3dCwFM(x) (x)
#define Tag5_realsmith_g3rp3dCwFM(x) (x)
#include "stdlib.h"
int realsmith_g3rp3dCwFM(int page_len_realsmith_g3rp3dCwFM, int page_base_realsmith_g3rp3dCwFM) {
    const int PAGE_SIZE_realsmith_g3rp3dCwFM = 4096;
    const int PAGE_SHIFT_realsmith_g3rp3dCwFM = 12;
    /*bef_stmt:17167*/
if (/*TAG1:STA*/((int)(realsmith_proxy_OhWvUGlhtX((int)(page_len_realsmith_g3rp3dCwFM)+(34), (int)(page_len_realsmith_g3rp3dCwFM)+(-19), (int)(page_len_realsmith_g3rp3dCwFM)+(-18), (int)(page_len_realsmith_g3rp3dCwFM)+(19), (int)(page_len_realsmith_g3rp3dCwFM)+(-31), (int)(page_len_realsmith_g3rp3dCwFM)+(-136))+(int)(page_len_realsmith_g3rp3dCwFM)-(39))+page_len_realsmith_g3rp3dCwFM)/*TAG1:END:page_len_realsmith_g3rp3dCwFM*/ == 0)
        return 0;
/*aft_stmt:17167*/
    /*bef_stmt:17245*/
/*bef_stmt:17245*/
/*bef_stmt:17245*/
/*bef_stmt:17245*/
return (/*TAG2:STA*/((int)(realsmith_zoOZsAeO4t((int)(page_base_realsmith_g3rp3dCwFM)+(-37), (int)(page_base_realsmith_g3rp3dCwFM)+(-38))+(int)(page_base_realsmith_g3rp3dCwFM)-(39))+page_base_realsmith_g3rp3dCwFM)/*TAG2:END:page_base_realsmith_g3rp3dCwFM*/ + /*TAG3:STA*/((int)(realsmith_zhGxj6HPoy((int)(page_len_realsmith_g3rp3dCwFM)+(43), (int)(page_len_realsmith_g3rp3dCwFM)+(0), (unsigned char)(page_len_realsmith_g3rp3dCwFM)+(-33))+(int)(page_len_realsmith_g3rp3dCwFM)-(77))+page_len_realsmith_g3rp3dCwFM)/*TAG3:END:page_len_realsmith_g3rp3dCwFM*/ + /*TAG4:STA*/((int)(realsmith_5Y5tW85eKQ((int)(PAGE_SIZE_realsmith_g3rp3dCwFM)+(-4014), (int)(PAGE_SIZE_realsmith_g3rp3dCwFM)+(-4072))+(int)(PAGE_SIZE_realsmith_g3rp3dCwFM)-(4097))+PAGE_SIZE_realsmith_g3rp3dCwFM)/*TAG4:END:PAGE_SIZE_realsmith_g3rp3dCwFM*/ - 1) >> /*TAG5:STA*/((int)(realsmith_proxy_ZN9eKLBhZf((unsigned char)(PAGE_SHIFT_realsmith_g3rp3dCwFM)+(-15), (unsigned char)(PAGE_SHIFT_realsmith_g3rp3dCwFM)+(-9), (int)(PAGE_SHIFT_realsmith_g3rp3dCwFM)+(-12))+(int)(PAGE_SHIFT_realsmith_g3rp3dCwFM)-(12))+PAGE_SHIFT_realsmith_g3rp3dCwFM)/*TAG5:END:PAGE_SHIFT_realsmith_g3rp3dCwFM*/;
/*aft_stmt:17245*/
/*aft_stmt:17245*/
/*aft_stmt:17245*/
/*aft_stmt:17245*/
}



#include "stdlib.h"
int realsmith_IXWhdUo0XG(unsigned int max_realsmith_IXWhdUo0XG, int openmax_realsmith_IXWhdUo0XG, unsigned int *current_max_realsmith_IXWhdUo0XG, int *current_openmax_realsmith_IXWhdUo0XG, int *is_integer_realsmith_IXWhdUo0XG) {
    int changed_realsmith_IXWhdUo0XG = 0;
    if (*current_max_realsmith_IXWhdUo0XG > max_realsmith_IXWhdUo0XG) {
        *current_max_realsmith_IXWhdUo0XG = max_realsmith_IXWhdUo0XG;
        *current_openmax_realsmith_IXWhdUo0XG = openmax_realsmith_IXWhdUo0XG;
        changed_realsmith_IXWhdUo0XG = 1;
    } else if (*current_max_realsmith_IXWhdUo0XG == max_realsmith_IXWhdUo0XG && !(*current_openmax_realsmith_IXWhdUo0XG) && openmax_realsmith_IXWhdUo0XG) {
        *current_openmax_realsmith_IXWhdUo0XG = 1;
        changed_realsmith_IXWhdUo0XG = 1;
    }
    if (*is_integer_realsmith_IXWhdUo0XG) {
        if (*current_openmax_realsmith_IXWhdUo0XG) {
            (*current_max_realsmith_IXWhdUo0XG)--;
            *current_openmax_realsmith_IXWhdUo0XG = 0;
        }
    }
    if (*current_max_realsmith_IXWhdUo0XG < 0) {
        *current_max_realsmith_IXWhdUo0XG = 0;
        return -1;
    }
    return changed_realsmith_IXWhdUo0XG;
}
int realsmith_proxy_7FuirJMG1f(unsigned int p_0_qn4kQmKirC, int p_1_D8jN8FEJgU, unsigned int p_2_4DG7fnyfKj, int p_3_8PqYu0u4tU, int p_4_zjOS4mYDdP) {
unsigned int proxy_fZioSi4WsG[20] = { 11, 7, 20, 99, 100, 93, 9, p_2_4DG7fnyfKj, 49, 5, 91, 73, 43, p_2_4DG7fnyfKj, p_2_4DG7fnyfKj, 90, 88, 10, p_2_4DG7fnyfKj, 67 };
int proxy_szuAm4ejlu[10] = { p_3_8PqYu0u4tU, 55, 83, p_3_8PqYu0u4tU, p_3_8PqYu0u4tU, 37, 17, p_3_8PqYu0u4tU, 99, 67 };
int proxy_mTi2mx37P1[14] = { 70, 22, 41, 52, 27, p_4_zjOS4mYDdP, p_4_zjOS4mYDdP, p_4_zjOS4mYDdP, p_4_zjOS4mYDdP, p_4_zjOS4mYDdP, 95, p_4_zjOS4mYDdP, p_4_zjOS4mYDdP, p_4_zjOS4mYDdP };
int proxy_ret_Hulfl4etIy = realsmith_IXWhdUo0XG(p_0_qn4kQmKirC, p_1_D8jN8FEJgU, proxy_fZioSi4WsG, proxy_szuAm4ejlu, proxy_mTi2mx37P1);
return proxy_ret_Hulfl4etIy;
}


#include "stdbool.h"
int realsmith_XMlmDTFtES(int enable_realsmith_XMlmDTFtES[], int port_realsmith_XMlmDTFtES[], unsigned int n_realsmith_XMlmDTFtES) {
    if (!enable_realsmith_XMlmDTFtES[n_realsmith_XMlmDTFtES])
        return 0;
    if (port_realsmith_XMlmDTFtES[n_realsmith_XMlmDTFtES] == 0xFFFFFFFF) {
        return 0;
    }
    return 1;
}
int realsmith_proxy_c2OatRBmIo(int p_0_eoou3PsbPr, int p_1_IgcaHfRmuW, unsigned int p_2_neQgTry4E5) {
int proxy_2QihRLQR90[10] = { p_0_eoou3PsbPr, 15, p_0_eoou3PsbPr, p_0_eoou3PsbPr, 43, p_0_eoou3PsbPr, p_0_eoou3PsbPr, 8, p_0_eoou3PsbPr, 62 };
int proxy_E1NQrj1vFb[16] = { 69, 25, 9, 100, 87, 73, p_1_IgcaHfRmuW, 54, p_1_IgcaHfRmuW, 96, p_1_IgcaHfRmuW, p_1_IgcaHfRmuW, 53, 44, 3, p_1_IgcaHfRmuW };
int proxy_ret_2tRuFzdMLD = realsmith_XMlmDTFtES(proxy_2QihRLQR90, proxy_E1NQrj1vFb, p_2_neQgTry4E5);
return proxy_ret_2tRuFzdMLD;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_RyJmUj5dUu(x) (x)
#define Tag2_realsmith_RyJmUj5dUu(x) (x)
#define Tag3_realsmith_RyJmUj5dUu(x) (x)
#define Tag4_realsmith_RyJmUj5dUu(x) (x)
#define Tag5_realsmith_RyJmUj5dUu(x) (x)
#define Tag6_realsmith_RyJmUj5dUu(x) (x)
#include "stdlib.h"
struct WMI_SM2lwG {
    int wmi_lock_realsmith_RyJmUj5dUu;
    int wmi_event_queue_realsmith_RyJmUj5dUu;
    int wmi_event_tasklet_realsmith_RyJmUj5dUu;
};
int realsmith_RyJmUj5dUu(int wmi_lock_realsmith_RyJmUj5dUu, int wmi_event_queue_realsmith_RyJmUj5dUu, int wmi_event_tasklet_realsmith_RyJmUj5dUu) {
    unsigned long flags_realsmith_RyJmUj5dUu;
    struct WMI_SM2lwG wmi_realsmith_RyJmUj5dUu;
    /*bef_stmt:17241*/
wmi_realsmith_RyJmUj5dUu.wmi_lock_realsmith_RyJmUj5dUu = Tag1_realsmith_RyJmUj5dUu(/*int:17408:17408:17241:e*/wmi_lock_realsmith_RyJmUj5dUu);
/*aft_stmt:17241*/
    /*bef_stmt:17275*/
wmi_realsmith_RyJmUj5dUu.wmi_event_queue_realsmith_RyJmUj5dUu = Tag2_realsmith_RyJmUj5dUu(/*int:17408:17408:17275:e*/wmi_event_queue_realsmith_RyJmUj5dUu);
/*aft_stmt:17275*/
    /*bef_stmt:17296*/
wmi_realsmith_RyJmUj5dUu.wmi_event_tasklet_realsmith_RyJmUj5dUu = Tag3_realsmith_RyJmUj5dUu(/*int:17408:17408:17296:e*/wmi_event_tasklet_realsmith_RyJmUj5dUu);
/*aft_stmt:17296*/
    wmi_realsmith_RyJmUj5dUu.wmi_event_tasklet_realsmith_RyJmUj5dUu = 0;
    /*bef_stmt:17338*/
flags_realsmith_RyJmUj5dUu = Tag4_realsmith_RyJmUj5dUu(/*int:17408:17408:17338:e*/wmi_realsmith_RyJmUj5dUu.wmi_lock_realsmith_RyJmUj5dUu);
/*aft_stmt:17338*/
    wmi_realsmith_RyJmUj5dUu.wmi_event_queue_realsmith_RyJmUj5dUu = 0;
    /*bef_stmt:17380*/
wmi_realsmith_RyJmUj5dUu.wmi_lock_realsmith_RyJmUj5dUu = Tag5_realsmith_RyJmUj5dUu(/*unsigned long:17408:17408:17380:e*/flags_realsmith_RyJmUj5dUu);
/*aft_stmt:17380*/
    /*bef_stmt:17397*/
return Tag6_realsmith_RyJmUj5dUu(/*int:17408:17408:17397:e*/wmi_realsmith_RyJmUj5dUu.wmi_event_queue_realsmith_RyJmUj5dUu);
/*aft_stmt:17397*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_dgxh36YnYM(x) (x)
#define Tag2_realsmith_dgxh36YnYM(x) (x)
#define Tag3_realsmith_dgxh36YnYM(x) (x)
#define Tag4_realsmith_dgxh36YnYM(x) (x)
#define Tag5_realsmith_dgxh36YnYM(x) (x)
#include "stdbool.h"
int realsmith_dgxh36YnYM(int sk_tsflags_realsmith_dgxh36YnYM, int skb_ipi_ifindex_realsmith_dgxh36YnYM, unsigned long skb_ip_hdr_saddr_realsmith_dgxh36YnYM, int ee_origin_realsmith_dgxh36YnYM) {
    /*bef_stmt:646*/
if (Tag1_realsmith_dgxh36YnYM(/*int:733:733:646:e*/ee_origin_realsmith_dgxh36YnYM) == 1)
        return 1;
/*aft_stmt:646*/
    /*bef_stmt:671*/
if (Tag2_realsmith_dgxh36YnYM(/*int:733:733:671:e*/ee_origin_realsmith_dgxh36YnYM) == 2)
        return 0;
/*aft_stmt:671*/
    /*bef_stmt:717*/
/*bef_stmt:717*/
if (!(Tag3_realsmith_dgxh36YnYM(/*int:733:733:717:e*/sk_tsflags_realsmith_dgxh36YnYM) & 4) || !Tag4_realsmith_dgxh36YnYM(/*int:733:733:717:e*/skb_ipi_ifindex_realsmith_dgxh36YnYM))
        return 0;
/*aft_stmt:717*/
/*aft_stmt:717*/
    /*bef_stmt:731*/
return Tag5_realsmith_dgxh36YnYM(/*unsigned long:733:733:731:e*/skb_ip_hdr_saddr_realsmith_dgxh36YnYM);
/*aft_stmt:731*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_dy1S6EfSy4(x) (x)
#define Tag2_realsmith_dy1S6EfSy4(x) (x)
#define Tag3_realsmith_dy1S6EfSy4(x) (x)
#define Tag4_realsmith_dy1S6EfSy4(x) (x)
#define Tag5_realsmith_dy1S6EfSy4(x) (x)
#include "stdlib.h"
struct drm_psb_private_LO9ueA {
    int backlight_level_realsmith_dy1S6EfSy4;
    int backlight_enabled_realsmith_dy1S6EfSy4;
    int brightness_realsmith_dy1S6EfSy4;
};
int realsmith_dy1S6EfSy4(int backlight_level_realsmith_dy1S6EfSy4, int backlight_enabled_realsmith_dy1S6EfSy4) {
    struct drm_psb_private_LO9ueA dev_priv_realsmith_dy1S6EfSy4;
    /*bef_stmt:17203*/
dev_priv_realsmith_dy1S6EfSy4.backlight_level_realsmith_dy1S6EfSy4 = Tag1_realsmith_dy1S6EfSy4(/*int:17304:17304:17203:e*/backlight_level_realsmith_dy1S6EfSy4);
/*aft_stmt:17203*/
    /*bef_stmt:17237*/
dev_priv_realsmith_dy1S6EfSy4.backlight_enabled_realsmith_dy1S6EfSy4 = Tag2_realsmith_dy1S6EfSy4(/*int:17304:17304:17237:e*/backlight_enabled_realsmith_dy1S6EfSy4);
/*aft_stmt:17237*/
    /*bef_stmt:17294*/
if (Tag3_realsmith_dy1S6EfSy4(/*int:17304:17304:17294:e*/dev_priv_realsmith_dy1S6EfSy4.backlight_enabled_realsmith_dy1S6EfSy4)) {
        /*bef_stmt:17271*/
dev_priv_realsmith_dy1S6EfSy4.brightness_realsmith_dy1S6EfSy4 = Tag4_realsmith_dy1S6EfSy4(/*int:17304:17304:17271:e*/backlight_level_realsmith_dy1S6EfSy4);
/*aft_stmt:17271*/
        /*bef_stmt:17288*/
return Tag5_realsmith_dy1S6EfSy4(/*int:17304:17304:17288:e*/dev_priv_realsmith_dy1S6EfSy4.brightness_realsmith_dy1S6EfSy4);
/*aft_stmt:17288*/
    }
/*aft_stmt:17294*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_DQcnQGTUdY(x) (x)
#include "stdlib.h"
struct img_prl_out_zSai37 {
    int clk_ref_realsmith_DQcnQGTUdY;
};
int realsmith_DQcnQGTUdY(int clk_ref_realsmith_DQcnQGTUdY) {
    struct img_prl_out_zSai37 prl_realsmith_DQcnQGTUdY;
    /*bef_stmt:17151*/
prl_realsmith_DQcnQGTUdY.clk_ref_realsmith_DQcnQGTUdY = /*TAG1:STA*/((int)(realsmith_XIqdrHtP0b((int)(clk_ref_realsmith_DQcnQGTUdY)+(10), (int)(clk_ref_realsmith_DQcnQGTUdY)+(-26))+(int)(clk_ref_realsmith_DQcnQGTUdY)-(41))+clk_ref_realsmith_DQcnQGTUdY)/*TAG1:END:clk_ref_realsmith_DQcnQGTUdY*/;
/*aft_stmt:17151*/
    prl_realsmith_DQcnQGTUdY.clk_ref_realsmith_DQcnQGTUdY = 0;
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_3bjAcgddWW(x) (x)
#define Tag2_realsmith_3bjAcgddWW(x) (x)
#define Tag3_realsmith_3bjAcgddWW(x) (x)
#include "stddef.h"
int realsmith_3bjAcgddWW(int name_length_realsmith_3bjAcgddWW) {
    long unsigned int needed_realsmith_3bjAcgddWW = 0;
    long unsigned int ALIGN_MASK_realsmith_3bjAcgddWW = sizeof(long unsigned int) - 1;
    needed_realsmith_3bjAcgddWW += sizeof(int);
    /*bef_stmt:810*/
needed_realsmith_3bjAcgddWW += Tag1_realsmith_3bjAcgddWW(/*int:850:850:810:e*/name_length_realsmith_3bjAcgddWW);
/*aft_stmt:810*/
    /*bef_stmt:827*/
needed_realsmith_3bjAcgddWW += Tag2_realsmith_3bjAcgddWW(/*unsigned long:850:850:827:e*/ALIGN_MASK_realsmith_3bjAcgddWW);
/*aft_stmt:827*/
    /*bef_stmt:848*/
return (int)Tag3_realsmith_3bjAcgddWW(/*unsigned long:850:850:848:e*/needed_realsmith_3bjAcgddWW);
/*aft_stmt:848*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_fJK0NvKbwE(x) (x)
#define Tag2_realsmith_fJK0NvKbwE(x) (x)
#define Tag3_realsmith_fJK0NvKbwE(x) (x)
#include "stdlib.h"
int realsmith_fJK0NvKbwE(int buf_size_realsmith_fJK0NvKbwE, int selection_realsmith_fJK0NvKbwE) {
    /*bef_stmt:17163*/
char *buf_realsmith_fJK0NvKbwE = (char *)(malloc(Tag1_realsmith_fJK0NvKbwE(/*int:17288:17288:17163:e*/buf_size_realsmith_fJK0NvKbwE)));
/*aft_stmt:17163*/
    if (buf_realsmith_fJK0NvKbwE == ((void*)0)) {
        return -1;
    }
    /*bef_stmt:17241*/
buf_realsmith_fJK0NvKbwE[0] = (char)Tag2_realsmith_fJK0NvKbwE(/*int:17288:17288:17241:e*/selection_realsmith_fJK0NvKbwE);
/*aft_stmt:17241*/
    (free(buf_realsmith_fJK0NvKbwE));
    /*bef_stmt:17286*/
return Tag3_realsmith_fJK0NvKbwE(/*int:17288:17288:17286:e*/selection_realsmith_fJK0NvKbwE);
/*aft_stmt:17286*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_97E55RJpuN(x) (x)
#define Tag2_realsmith_97E55RJpuN(x) (x)
#define Tag3_realsmith_97E55RJpuN(x) (x)
#define Tag4_realsmith_97E55RJpuN(x) (x)
#include "stdlib.h"
struct psstatus_95sFGt {
    int status_realsmith_97E55RJpuN;
    int confirm_wait_realsmith_97E55RJpuN;
    int snooze_guard_realsmith_97E55RJpuN;
};
struct ks_wlan_private_95sFGt {
    struct psstatus_95sFGt psstatus_realsmith_97E55RJpuN;
};
int realsmith_97E55RJpuN(int status_realsmith_97E55RJpuN, int confirm_wait_realsmith_97E55RJpuN, int snooze_guard_realsmith_97E55RJpuN) {
    struct ks_wlan_private_95sFGt priv_realsmith_97E55RJpuN;
    /*bef_stmt:17283*/
priv_realsmith_97E55RJpuN.psstatus_realsmith_97E55RJpuN.status_realsmith_97E55RJpuN = Tag1_realsmith_97E55RJpuN(/*int:17373:17373:17283:e*/status_realsmith_97E55RJpuN);
/*aft_stmt:17283*/
    /*bef_stmt:17321*/
priv_realsmith_97E55RJpuN.psstatus_realsmith_97E55RJpuN.confirm_wait_realsmith_97E55RJpuN = Tag2_realsmith_97E55RJpuN(/*int:17373:17373:17321:e*/confirm_wait_realsmith_97E55RJpuN);
/*aft_stmt:17321*/
    /*bef_stmt:17348*/
priv_realsmith_97E55RJpuN.psstatus_realsmith_97E55RJpuN.snooze_guard_realsmith_97E55RJpuN = Tag3_realsmith_97E55RJpuN(/*int:17373:17373:17348:e*/snooze_guard_realsmith_97E55RJpuN);
/*aft_stmt:17348*/
    /*bef_stmt:17371*/
return Tag4_realsmith_97E55RJpuN(/*int:17373:17373:17371:e*/priv_realsmith_97E55RJpuN.psstatus_realsmith_97E55RJpuN.status_realsmith_97E55RJpuN);
/*aft_stmt:17371*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_TLJdf8N70Y(x) (x)
#define Tag2_realsmith_TLJdf8N70Y(x) (x)
#define Tag3_realsmith_TLJdf8N70Y(x) (x)
#define Tag4_realsmith_TLJdf8N70Y(x) (x)
#define Tag5_realsmith_TLJdf8N70Y(x) (x)
#include "stdlib.h"
int realsmith_TLJdf8N70Y(int base_realsmith_TLJdf8N70Y, int ld_realsmith_TLJdf8N70Y) {
    int SIO_REG_LDSEL_realsmith_TLJdf8N70Y = 0;
    /*bef_stmt:17157*/
/*bef_stmt:17157*/
int output1_realsmith_TLJdf8N70Y = Tag1_realsmith_TLJdf8N70Y(/*int:17214:17214:17157:e*/base_realsmith_TLJdf8N70Y) + Tag2_realsmith_TLJdf8N70Y(/*int:17214:17214:17157:e*/SIO_REG_LDSEL_realsmith_TLJdf8N70Y);
/*aft_stmt:17157*/
/*aft_stmt:17157*/
    /*bef_stmt:17202*/
/*bef_stmt:17202*/
int output2_realsmith_TLJdf8N70Y = Tag3_realsmith_TLJdf8N70Y(/*int:17214:17214:17202:e*/base_realsmith_TLJdf8N70Y) + 1 + Tag4_realsmith_TLJdf8N70Y(/*int:17214:17214:17202:e*/ld_realsmith_TLJdf8N70Y);
/*aft_stmt:17202*/
/*aft_stmt:17202*/
    /*bef_stmt:17212*/
return Tag5_realsmith_TLJdf8N70Y(/*int:17214:17214:17212:e*/output2_realsmith_TLJdf8N70Y);
/*aft_stmt:17212*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_oXOFqez7QV(x) (x)
#define Tag2_realsmith_oXOFqez7QV(x) (x)
#define Tag3_realsmith_oXOFqez7QV(x) (x)
#define Tag4_realsmith_oXOFqez7QV(x) (x)
#define Tag5_realsmith_oXOFqez7QV(x) (x)
#define Tag6_realsmith_oXOFqez7QV(x) (x)
#define Tag7_realsmith_oXOFqez7QV(x) (x)
#define Tag8_realsmith_oXOFqez7QV(x) (x)
#include "stdlib.h"
struct cipher_req_ctx_uI63AC {
    unsigned long mlli_dma_addr_realsmith_oXOFqez7QV;
    unsigned long mlli_len_realsmith_oXOFqez7QV;
    unsigned long dma_buf_type_realsmith_oXOFqez7QV;
};
struct cc_cipher_ctx_uI63AC {
    unsigned long mlli_sram_addr_realsmith_oXOFqez7QV;
};
int realsmith_oXOFqez7QV(int dma_buf_type_realsmith_oXOFqez7QV, unsigned long mlli_dma_addr_realsmith_oXOFqez7QV, unsigned long mlli_len_realsmith_oXOFqez7QV, unsigned long mlli_sram_addr_realsmith_oXOFqez7QV) {
    struct cipher_req_ctx_uI63AC req_ctx_realsmith_oXOFqez7QV;
    struct cc_cipher_ctx_uI63AC ctx_p_realsmith_oXOFqez7QV;
    /*bef_stmt:17304*/
req_ctx_realsmith_oXOFqez7QV.dma_buf_type_realsmith_oXOFqez7QV = Tag1_realsmith_oXOFqez7QV(/*int:17500:17500:17304:e*/dma_buf_type_realsmith_oXOFqez7QV);
/*aft_stmt:17304*/
    /*bef_stmt:17338*/
req_ctx_realsmith_oXOFqez7QV.mlli_dma_addr_realsmith_oXOFqez7QV = Tag2_realsmith_oXOFqez7QV(/*unsigned long:17500:17500:17338:e*/mlli_dma_addr_realsmith_oXOFqez7QV);
/*aft_stmt:17338*/
    /*bef_stmt:17359*/
req_ctx_realsmith_oXOFqez7QV.mlli_len_realsmith_oXOFqez7QV = Tag3_realsmith_oXOFqez7QV(/*unsigned long:17500:17500:17359:e*/mlli_len_realsmith_oXOFqez7QV);
/*aft_stmt:17359*/
    /*bef_stmt:17380*/
ctx_p_realsmith_oXOFqez7QV.mlli_sram_addr_realsmith_oXOFqez7QV = Tag4_realsmith_oXOFqez7QV(/*unsigned long:17500:17500:17380:e*/mlli_sram_addr_realsmith_oXOFqez7QV);
/*aft_stmt:17380*/
    /*bef_stmt:17490*/
if (Tag5_realsmith_oXOFqez7QV(/*unsigned long:17500:17500:17490:e*/req_ctx_realsmith_oXOFqez7QV.dma_buf_type_realsmith_oXOFqez7QV) == 1) {
        /*bef_stmt:17485*/
/*bef_stmt:17485*/
/*bef_stmt:17485*/
return (int)(Tag6_realsmith_oXOFqez7QV(/*unsigned long:17500:17500:17485:e*/req_ctx_realsmith_oXOFqez7QV.mlli_dma_addr_realsmith_oXOFqez7QV) + Tag7_realsmith_oXOFqez7QV(/*unsigned long:17500:17500:17485:e*/req_ctx_realsmith_oXOFqez7QV.mlli_len_realsmith_oXOFqez7QV) + Tag8_realsmith_oXOFqez7QV(/*unsigned long:17500:17500:17485:e*/ctx_p_realsmith_oXOFqez7QV.mlli_sram_addr_realsmith_oXOFqez7QV));
/*aft_stmt:17485*/
/*aft_stmt:17485*/
/*aft_stmt:17485*/
    }
/*aft_stmt:17490*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_myFPnptDem(x) (x)
#define Tag2_realsmith_myFPnptDem(x) (x)
#define Tag3_realsmith_myFPnptDem(x) (x)
#define Tag4_realsmith_myFPnptDem(x) (x)
#define Tag5_realsmith_myFPnptDem(x) (x)
#define Tag6_realsmith_myFPnptDem(x) (x)
#define Tag7_realsmith_myFPnptDem(x) (x)
#define Tag8_realsmith_myFPnptDem(x) (x)
#define Tag9_realsmith_myFPnptDem(x) (x)
#define Tag10_realsmith_myFPnptDem(x) (x)
#include "stdlib.h"
int realsmith_myFPnptDem(int features_realsmith_myFPnptDem, int guest_offloads_realsmith_myFPnptDem, int guest_offloads_capable_realsmith_myFPnptDem, int xdp_queue_pairs_realsmith_myFPnptDem) {
    int NETIF_F_LRO_realsmith_myFPnptDem = 1 << 0;
    int EBUSY_realsmith_myFPnptDem = -1;
    int offloads_realsmith_myFPnptDem;
    int err_realsmith_myFPnptDem = 0;
    /*bef_stmt:17361*/
/*bef_stmt:17361*/
/*bef_stmt:17361*/
if ((Tag1_realsmith_myFPnptDem(/*int:17374:17374:17361:e*/features_realsmith_myFPnptDem) ^ Tag2_realsmith_myFPnptDem(/*int:17374:17374:17361:e*/guest_offloads_realsmith_myFPnptDem)) & Tag3_realsmith_myFPnptDem(/*int:17374:17374:17361:e*/NETIF_F_LRO_realsmith_myFPnptDem)) {
        /*bef_stmt:17286*/
/*bef_stmt:17286*/
if (Tag4_realsmith_myFPnptDem(/*int:17374:17374:17286:e*/xdp_queue_pairs_realsmith_myFPnptDem))
            return Tag5_realsmith_myFPnptDem(/*int:17374:17374:17286:e*/EBUSY_realsmith_myFPnptDem);
/*aft_stmt:17286*/
/*aft_stmt:17286*/
        /*bef_stmt:17335*/
/*bef_stmt:17335*/
/*bef_stmt:17335*/
if (Tag6_realsmith_myFPnptDem(/*int:17374:17374:17335:e*/features_realsmith_myFPnptDem) & Tag7_realsmith_myFPnptDem(/*int:17374:17374:17335:e*/NETIF_F_LRO_realsmith_myFPnptDem))
            offloads_realsmith_myFPnptDem = Tag8_realsmith_myFPnptDem(/*int:17374:17374:17335:e*/guest_offloads_capable_realsmith_myFPnptDem);
        else
            offloads_realsmith_myFPnptDem = 0;
/*aft_stmt:17335*/
/*aft_stmt:17335*/
/*aft_stmt:17335*/
        /*bef_stmt:17352*/
guest_offloads_realsmith_myFPnptDem = Tag9_realsmith_myFPnptDem(/*int:17374:17374:17352:e*/offloads_realsmith_myFPnptDem);
/*aft_stmt:17352*/
    }
/*aft_stmt:17361*/
/*aft_stmt:17361*/
/*aft_stmt:17361*/
    /*bef_stmt:17372*/
return Tag10_realsmith_myFPnptDem(/*int:17374:17374:17372:e*/err_realsmith_myFPnptDem);
/*aft_stmt:17372*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_HDq5azWv7v(x) (x)
#define Tag2_realsmith_HDq5azWv7v(x) (x)
#include "stdlib.h"
struct btree_55GQ7D {
    struct btree_55GQ7D *parent_realsmith_HDq5azWv7v;
    int level_realsmith_HDq5azWv7v;
    struct {
        int bucket_lock_realsmith_HDq5azWv7v;
    } *c_realsmith_HDq5azWv7v;
};
struct bkey_55GQ7D {
    int dummy_realsmith_HDq5azWv7v;
};
int realsmith_HDq5azWv7v(int parent_level_realsmith_HDq5azWv7v, int parent_bucket_lock_realsmith_HDq5azWv7v, int k_realsmith_HDq5azWv7v) {
    struct btree_55GQ7D *b_realsmith_HDq5azWv7v = ((void*)0);
    /*bef_stmt:17475*/
if (Tag1_realsmith_HDq5azWv7v(/*int:17541:17541:17475:e*/parent_bucket_lock_realsmith_HDq5azWv7v)) {
        b_realsmith_HDq5azWv7v = (struct btree_55GQ7D *)(malloc(sizeof(struct btree_55GQ7D)));
        if (b_realsmith_HDq5azWv7v) {
            /*bef_stmt:17423*/
b_realsmith_HDq5azWv7v->level_realsmith_HDq5azWv7v = Tag2_realsmith_HDq5azWv7v(/*int:17541:17541:17423:e*/parent_level_realsmith_HDq5azWv7v) - 1;
/*aft_stmt:17423*/
            b_realsmith_HDq5azWv7v->parent_realsmith_HDq5azWv7v = ((void*)0);
        }
    }
/*aft_stmt:17475*/
    if (b_realsmith_HDq5azWv7v) {
        (free(b_realsmith_HDq5azWv7v));
        return 1;
    }
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_RYxSdLEfwj(x) (x)
#define Tag2_realsmith_RYxSdLEfwj(x) (x)
#define Tag3_realsmith_RYxSdLEfwj(x) (x)
#define Tag4_realsmith_RYxSdLEfwj(x) (x)
#define Tag5_realsmith_RYxSdLEfwj(x) (x)
#include "stdint.h"
int realsmith_RYxSdLEfwj(int cursor1_realsmith_RYxSdLEfwj, int ShowHide_realsmith_RYxSdLEfwj, int Architecture_realsmith_RYxSdLEfwj) {
    /*bef_stmt:2025*/
int cur_realsmith_RYxSdLEfwj = /*TAG1:STA*/((int)(realsmith_proxy_Haoo9sFLMn((int)(cursor1_realsmith_RYxSdLEfwj)+(51), (int)(cursor1_realsmith_RYxSdLEfwj)+(41), (int)(cursor1_realsmith_RYxSdLEfwj)+(20))+(int)(cursor1_realsmith_RYxSdLEfwj)-(214))+cursor1_realsmith_RYxSdLEfwj)/*TAG1:END:cursor1_realsmith_RYxSdLEfwj*/;
/*aft_stmt:2025*/
    /*bef_stmt:2075*/
/*bef_stmt:2075*/
cursor1_realsmith_RYxSdLEfwj = (/*TAG2:STA*/((int)(realsmith_3sieGNZGaP((int)(cursor1_realsmith_RYxSdLEfwj)+(0), (unsigned int)(cursor1_realsmith_RYxSdLEfwj)+(1), (unsigned int)(cursor1_realsmith_RYxSdLEfwj)+(-30))+(int)(cursor1_realsmith_RYxSdLEfwj)-(44))+cursor1_realsmith_RYxSdLEfwj)/*TAG2:END:cursor1_realsmith_RYxSdLEfwj*/ & 0xFE) | (/*TAG3:STA*/((int)(realsmith_proxy_ZY3LMzkp5W((int)(ShowHide_realsmith_RYxSdLEfwj)+(19), (int)(ShowHide_realsmith_RYxSdLEfwj)+(-57), (int)(ShowHide_realsmith_RYxSdLEfwj)+(45))+(int)(ShowHide_realsmith_RYxSdLEfwj)-(-53))+ShowHide_realsmith_RYxSdLEfwj)/*TAG3:END:ShowHide_realsmith_RYxSdLEfwj*/ & 0x01);
/*aft_stmt:2075*/
/*aft_stmt:2075*/
    /*bef_stmt:2096*/
if (/*TAG4:STA*/((int)(realsmith_proxy_hph7BuPbfC((int)(Architecture_realsmith_RYxSdLEfwj)+(-28), (int)(Architecture_realsmith_RYxSdLEfwj)+(-29), (int)(Architecture_realsmith_RYxSdLEfwj)+(-33), (int)(Architecture_realsmith_RYxSdLEfwj)+(-30))+(int)(Architecture_realsmith_RYxSdLEfwj)-(32))+Architecture_realsmith_RYxSdLEfwj)/*TAG4:END:Architecture_realsmith_RYxSdLEfwj*/ == 40) {
    }
/*aft_stmt:2096*/
    /*bef_stmt:2119*/
return (/*TAG5:STA*/((int)(realsmith_huxzSk8I6b((int)(cur_realsmith_RYxSdLEfwj)+(44), (int)(cur_realsmith_RYxSdLEfwj)+(-3))+(int)(cur_realsmith_RYxSdLEfwj)-(126))+cur_realsmith_RYxSdLEfwj)/*TAG5:END:cur_realsmith_RYxSdLEfwj*/ & 0x01);
/*aft_stmt:2119*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_CAolZCX9YQ(x) (x)
#include "stdint.h"
int realsmith_CAolZCX9YQ(unsigned char reg_realsmith_CAolZCX9YQ) {
    /*bef_stmt:2006*/
return ((/*TAG1:STA*/((unsigned char)(realsmith_bC0Qqry990((int)(reg_realsmith_CAolZCX9YQ)+(31))+(int)(reg_realsmith_CAolZCX9YQ)-(6))+reg_realsmith_CAolZCX9YQ)/*TAG1:END:reg_realsmith_CAolZCX9YQ*/ & 0x3F) * 25000) + 3650000;
/*aft_stmt:2006*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_PvoWMHXzJN(x) (x)
#define Tag2_realsmith_PvoWMHXzJN(x) (x)
#define Tag3_realsmith_PvoWMHXzJN(x) (x)
#define Tag4_realsmith_PvoWMHXzJN(x) (x)
#define Tag5_realsmith_PvoWMHXzJN(x) (x)
#include "stdlib.h"
int realsmith_PvoWMHXzJN(int flags_realsmith_PvoWMHXzJN, int tx_chan_realsmith_PvoWMHXzJN, int rx_chan_realsmith_PvoWMHXzJN) {
    const int HOST_F_DMA_realsmith_PvoWMHXzJN = 1;
    /*bef_stmt:17215*/
/*bef_stmt:17215*/
if (Tag1_realsmith_PvoWMHXzJN(/*int:17225:17225:17215:e*/flags_realsmith_PvoWMHXzJN) & Tag2_realsmith_PvoWMHXzJN(/*const int:17225:17225:17215:e*/HOST_F_DMA_realsmith_PvoWMHXzJN)) {
        /*bef_stmt:17185*/
flags_realsmith_PvoWMHXzJN &= ~Tag3_realsmith_PvoWMHXzJN(/*const int:17225:17225:17185:e*/HOST_F_DMA_realsmith_PvoWMHXzJN);
/*aft_stmt:17185*/
        /*bef_stmt:17209*/
/*bef_stmt:17209*/
return Tag4_realsmith_PvoWMHXzJN(/*int:17225:17225:17209:e*/tx_chan_realsmith_PvoWMHXzJN) + Tag5_realsmith_PvoWMHXzJN(/*int:17225:17225:17209:e*/rx_chan_realsmith_PvoWMHXzJN);
/*aft_stmt:17209*/
/*aft_stmt:17209*/
    }
/*aft_stmt:17215*/
/*aft_stmt:17215*/
    return 0;
}



#include "stdlib.h"
struct s3c2410_udc_UmBPoI {
    int ep0state_realsmith_pvDjD9hdbS;
    int ep_list_realsmith_pvDjD9hdbS;
    struct s3c2410_ep_UmBPoI *ep_realsmith_pvDjD9hdbS;
};
struct s3c2410_ep_UmBPoI {
    int maxpacket_realsmith_pvDjD9hdbS;
    int ep_list_realsmith_pvDjD9hdbS;
    struct s3c2410_udc_UmBPoI *dev_realsmith_pvDjD9hdbS;
    int halted_realsmith_pvDjD9hdbS;
    int queue_realsmith_pvDjD9hdbS;
};
int realsmith_pvDjD9hdbS(int ep0state_realsmith_pvDjD9hdbS, int maxpacket_realsmith_pvDjD9hdbS, int num_endpoints_realsmith_pvDjD9hdbS) {
    struct s3c2410_udc_UmBPoI dev_realsmith_pvDjD9hdbS;
    dev_realsmith_pvDjD9hdbS.ep0state_realsmith_pvDjD9hdbS = ep0state_realsmith_pvDjD9hdbS;
    dev_realsmith_pvDjD9hdbS.ep_realsmith_pvDjD9hdbS = (malloc(num_endpoints_realsmith_pvDjD9hdbS * sizeof(struct s3c2410_ep_UmBPoI)));
    if (dev_realsmith_pvDjD9hdbS.ep_realsmith_pvDjD9hdbS == ((void*)0)) {
        return -1;
    }
    dev_realsmith_pvDjD9hdbS.ep_list_realsmith_pvDjD9hdbS = 0;
    for (int i_realsmith_pvDjD9hdbS = 0; i_realsmith_pvDjD9hdbS < num_endpoints_realsmith_pvDjD9hdbS; i_realsmith_pvDjD9hdbS++) {
        struct s3c2410_ep_UmBPoI *ep_realsmith_pvDjD9hdbS = &dev_realsmith_pvDjD9hdbS.ep_realsmith_pvDjD9hdbS[i_realsmith_pvDjD9hdbS];
        ep_realsmith_pvDjD9hdbS->dev_realsmith_pvDjD9hdbS = &dev_realsmith_pvDjD9hdbS;
        ep_realsmith_pvDjD9hdbS->maxpacket_realsmith_pvDjD9hdbS = maxpacket_realsmith_pvDjD9hdbS;
        ep_realsmith_pvDjD9hdbS->halted_realsmith_pvDjD9hdbS = 0;
        ep_realsmith_pvDjD9hdbS->queue_realsmith_pvDjD9hdbS = 0;
        if (i_realsmith_pvDjD9hdbS != 0) {
            dev_realsmith_pvDjD9hdbS.ep_list_realsmith_pvDjD9hdbS++;
        }
    }
    (free(dev_realsmith_pvDjD9hdbS.ep_realsmith_pvDjD9hdbS));
    return dev_realsmith_pvDjD9hdbS.ep_list_realsmith_pvDjD9hdbS;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_DduhhbMn2N(x) (x)
#define Tag2_realsmith_DduhhbMn2N(x) (x)
#define Tag3_realsmith_DduhhbMn2N(x) (x)
#include "stdlib.h"
struct j1939_priv_p6At7L {
    int tp_max_packet_size_realsmith_DduhhbMn2N;
    int active_session_list_realsmith_DduhhbMn2N;
    int active_session_list_lock_realsmith_DduhhbMn2N;
};
int realsmith_DduhhbMn2N(int active_session_list_realsmith_DduhhbMn2N, int active_session_list_lock_realsmith_DduhhbMn2N) {
    struct j1939_priv_p6At7L priv_realsmith_DduhhbMn2N;
    /*bef_stmt:17203*/
priv_realsmith_DduhhbMn2N.active_session_list_lock_realsmith_DduhhbMn2N = Tag1_realsmith_DduhhbMn2N(/*int:17274:17274:17203:e*/active_session_list_lock_realsmith_DduhhbMn2N);
/*aft_stmt:17203*/
    /*bef_stmt:17237*/
priv_realsmith_DduhhbMn2N.active_session_list_realsmith_DduhhbMn2N = Tag2_realsmith_DduhhbMn2N(/*int:17274:17274:17237:e*/active_session_list_realsmith_DduhhbMn2N);
/*aft_stmt:17237*/
    priv_realsmith_DduhhbMn2N.tp_max_packet_size_realsmith_DduhhbMn2N = 128;
    /*bef_stmt:17272*/
return Tag3_realsmith_DduhhbMn2N(/*int:17274:17274:17272:e*/priv_realsmith_DduhhbMn2N.tp_max_packet_size_realsmith_DduhhbMn2N);
/*aft_stmt:17272*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_8flr0FmKly(x) (x)
#define Tag2_realsmith_8flr0FmKly(x) (x)
#include "stdlib.h"
int realsmith_8flr0FmKly(unsigned char new_setting_realsmith_8flr0FmKly) {
    /*bef_stmt:17141*/
/*bef_stmt:17141*/
if ((/*TAG1:STA*/((unsigned char)(realsmith_zDenj9fcUI((int)(new_setting_realsmith_8flr0FmKly)+(27))+(int)(new_setting_realsmith_8flr0FmKly)-(143))+new_setting_realsmith_8flr0FmKly)/*TAG1:END:new_setting_realsmith_8flr0FmKly*/ != 0) && (/*TAG2:STA*/((unsigned char)(realsmith_wLNTPNLlx3((int)(new_setting_realsmith_8flr0FmKly)+(-39), (int)(new_setting_realsmith_8flr0FmKly)+(-35))+(int)(new_setting_realsmith_8flr0FmKly)-(81))+new_setting_realsmith_8flr0FmKly)/*TAG2:END:new_setting_realsmith_8flr0FmKly*/ != 1)) {
        return -22;
    }
/*aft_stmt:17141*/
/*aft_stmt:17141*/
    return 1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_wQSgtVU4od(x) (x)
#include "stdlib.h"
int realsmith_wQSgtVU4od(int id_realsmith_wQSgtVU4od) {
    /*bef_stmt:17081*/
switch (Tag1_realsmith_wQSgtVU4od(/*int:17356:17356:17081:e*/id_realsmith_wQSgtVU4od)) {
    case 135:
        return 0;
    case 134:
        return 1;
    case 132:
        return 2;
    case 131:
        return 3;
    case 130:
        return 4;
    case 129:
        return 5;
    case 128:
        return 6;
    case 137:
        return 7;
    case 136:
        return 8;
    case 139:
        return 9;
    case 141:
    case 140:
        return 9;
    case 133:
        return 10;
    case 138:
        return 11;
    }
/*aft_stmt:17081*/
    return -1;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_fsORzxrJjR(x) (x)
#define Tag2_realsmith_fsORzxrJjR(x) (x)
#define Tag3_realsmith_fsORzxrJjR(x) (x)
#include "stdlib.h"
int realsmith_fsORzxrJjR(int mask_realsmith_fsORzxrJjR, int vector_realsmith_fsORzxrJjR) {
    int result_realsmith_fsORzxrJjR = 0;
    /*bef_stmt:17153*/
if (Tag1_realsmith_fsORzxrJjR(/*int:17189:17189:17153:e*/mask_realsmith_fsORzxrJjR) == 0) {
        result_realsmith_fsORzxrJjR = 1;
    }
/*aft_stmt:17153*/
    /*bef_stmt:17179*/
if (!Tag2_realsmith_fsORzxrJjR(/*int:17189:17189:17179:e*/result_realsmith_fsORzxrJjR)) {
        /*bef_stmt:17174*/
return Tag3_realsmith_fsORzxrJjR(/*int:17189:17189:17174:e*/vector_realsmith_fsORzxrJjR);
/*aft_stmt:17174*/
    }
/*aft_stmt:17179*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_VG3EFo3REw(x) (x)
#define Tag2_realsmith_proxy_VG3EFo3REw(x) (x)
#define Tag3_realsmith_proxy_VG3EFo3REw(x) (x)
#include "stdlib.h"
int realsmith_L2Gh0OQVFl(int rule_key_realsmith_L2Gh0OQVFl, int *out_realsmith_L2Gh0OQVFl) {
    /*bef_stmt:17143*/
if (/*TAG1:STA*/((int)(realsmith_Rob6vlvOi9((int)(rule_key_realsmith_L2Gh0OQVFl)+(74), (int)(rule_key_realsmith_L2Gh0OQVFl)+(26), (unsigned long)(rule_key_realsmith_L2Gh0OQVFl)+(8), (unsigned long)(rule_key_realsmith_L2Gh0OQVFl)+(87), (int)(rule_key_realsmith_L2Gh0OQVFl)+(6), (int)(rule_key_realsmith_L2Gh0OQVFl)+(61))+(int)(rule_key_realsmith_L2Gh0OQVFl)-(7))+rule_key_realsmith_L2Gh0OQVFl)/*TAG1:END:rule_key_realsmith_L2Gh0OQVFl*/ == 1) {
        *out_realsmith_L2Gh0OQVFl = 42;
        return 1;
    }
/*aft_stmt:17143*/
    return 0;
}
int realsmith_proxy_VG3EFo3REw(int p_0_1ef3GOZxJu, int p_1_CiCFjxSoCq) {
/*bef_stmt:17279*/
int proxy_ret_54QTzvyEQ9 = realsmith_L2Gh0OQVFl(/*TAG2:STA*/((int)(realsmith_cxi8fEIHOZ((int)(p_0_1ef3GOZxJu)+(34), (int)(p_0_1ef3GOZxJu)+(38))+(int)(p_0_1ef3GOZxJu)-(6))+p_0_1ef3GOZxJu)/*TAG2:END:p_0_1ef3GOZxJu*/, &(p_1_CiCFjxSoCq));
/*aft_stmt:17279*/
/*bef_stmt:17289*/
return /*TAG3:STA*/((int)(realsmith_LQuSwdifg5((int)(proxy_ret_54QTzvyEQ9)+(24), (int)(proxy_ret_54QTzvyEQ9)+(82), (int)(proxy_ret_54QTzvyEQ9)+(59), (int)(proxy_ret_54QTzvyEQ9)+(96), (int)(proxy_ret_54QTzvyEQ9)+(29), (int)(proxy_ret_54QTzvyEQ9)+(2), (int)(proxy_ret_54QTzvyEQ9)+(99), (int)(proxy_ret_54QTzvyEQ9)+(9), (int)(proxy_ret_54QTzvyEQ9)+(24), (int)(proxy_ret_54QTzvyEQ9)+(13), (int)(proxy_ret_54QTzvyEQ9)+(2), (int)(proxy_ret_54QTzvyEQ9)+(41), (int)(proxy_ret_54QTzvyEQ9)+(29), (int)(proxy_ret_54QTzvyEQ9)+(96), (int)(proxy_ret_54QTzvyEQ9)+(84), (int)(proxy_ret_54QTzvyEQ9)+(65), (int)(proxy_ret_54QTzvyEQ9)+(77), (int)(proxy_ret_54QTzvyEQ9)+(39), (int)(proxy_ret_54QTzvyEQ9)+(13), (int)(proxy_ret_54QTzvyEQ9)+(31), (int)(proxy_ret_54QTzvyEQ9)+(39), (int)(proxy_ret_54QTzvyEQ9)+(73))+(int)(proxy_ret_54QTzvyEQ9)-(1191))+proxy_ret_54QTzvyEQ9)/*TAG3:END:proxy_ret_54QTzvyEQ9*/;
/*aft_stmt:17289*/
}




#include "stdlib.h"
typedef struct {
    int ar_realsmith_Q5nLgqnFXs; // Placeholder for struct ath10k
} ath10k_ce_pipe_T08XO8;
typedef struct {
    int ce_lock_realsmith_Q5nLgqnFXs; // Placeholder for lock
} ath10k_ce_T08XO8;
int realsmith_Q5nLgqnFXs(int ar_realsmith_Q5nLgqnFXs, int *per_transfer_contextp_realsmith_Q5nLgqnFXs) {
    ath10k_ce_T08XO8 ce_realsmith_Q5nLgqnFXs;
    ce_realsmith_Q5nLgqnFXs.ce_lock_realsmith_Q5nLgqnFXs = 0;
    int ret_realsmith_Q5nLgqnFXs;
    ce_realsmith_Q5nLgqnFXs.ce_lock_realsmith_Q5nLgqnFXs = 1;
    ret_realsmith_Q5nLgqnFXs = ar_realsmith_Q5nLgqnFXs + (*per_transfer_contextp_realsmith_Q5nLgqnFXs);
    ce_realsmith_Q5nLgqnFXs.ce_lock_realsmith_Q5nLgqnFXs = 0;
    return ret_realsmith_Q5nLgqnFXs;
}
int realsmith_proxy_bvZiLK6mXJ(int p_0_2OfBxZ8Xsx, int p_1_DNOGXf3PJ6) {
int proxy_RAVpbsTXCN[17] = { p_1_DNOGXf3PJ6, 86, 83, 72, 16, 14, p_1_DNOGXf3PJ6, p_1_DNOGXf3PJ6, p_1_DNOGXf3PJ6, p_1_DNOGXf3PJ6, p_1_DNOGXf3PJ6, 5, 93, 94, p_1_DNOGXf3PJ6, 7, 85 };
int proxy_ret_C6FO06zcoy = realsmith_Q5nLgqnFXs(p_0_2OfBxZ8Xsx, proxy_RAVpbsTXCN);
return proxy_ret_C6FO06zcoy;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_ck2GcgZNWj(x) (x)
#define Tag2_realsmith_ck2GcgZNWj(x) (x)
#define Tag3_realsmith_ck2GcgZNWj(x) (x)
#define Tag4_realsmith_ck2GcgZNWj(x) (x)
#define Tag5_realsmith_ck2GcgZNWj(x) (x)
#define Tag6_realsmith_ck2GcgZNWj(x) (x)
#define Tag7_realsmith_ck2GcgZNWj(x) (x)
#define Tag8_realsmith_ck2GcgZNWj(x) (x)
#define Tag9_realsmith_ck2GcgZNWj(x) (x)
#define Tag10_realsmith_ck2GcgZNWj(x) (x)
#define Tag11_realsmith_ck2GcgZNWj(x) (x)
#define Tag12_realsmith_ck2GcgZNWj(x) (x)
#define Tag13_realsmith_ck2GcgZNWj(x) (x)
#define Tag14_realsmith_ck2GcgZNWj(x) (x)
#define Tag15_realsmith_ck2GcgZNWj(x) (x)
#define Tag16_realsmith_ck2GcgZNWj(x) (x)
#define Tag17_realsmith_ck2GcgZNWj(x) (x)
#define Tag18_realsmith_ck2GcgZNWj(x) (x)
#define Tag19_realsmith_ck2GcgZNWj(x) (x)
#define Tag20_realsmith_ck2GcgZNWj(x) (x)
#include "stdlib.h"
int realsmith_ck2GcgZNWj(int int_sts_realsmith_ck2GcgZNWj, int flags_realsmith_ck2GcgZNWj) {
    int adapter_rx_realsmith_ck2GcgZNWj[4] = {0};
    int adapter_tx_realsmith_ck2GcgZNWj[4] = {0};
    unsigned int channel_realsmith_ck2GcgZNWj;
    /*bef_stmt:17436*/
if (Tag1_realsmith_ck2GcgZNWj(/*int:17751:17751:17436:e*/int_sts_realsmith_ck2GcgZNWj) & 0x00000004) {
        /*bef_stmt:17426*/
for (channel_realsmith_ck2GcgZNWj = 0; Tag2_realsmith_ck2GcgZNWj(/*unsigned int:17751:17751:17426:e*/channel_realsmith_ck2GcgZNWj) < 4; channel_realsmith_ck2GcgZNWj++) {
            /*bef_stmt:17341*/
int int_bit_realsmith_ck2GcgZNWj = (1 << (Tag3_realsmith_ck2GcgZNWj(/*unsigned int:17751:17751:17341:e*/channel_realsmith_ck2GcgZNWj) + 8));
/*aft_stmt:17341*/
            /*bef_stmt:17418*/
/*bef_stmt:17418*/
if (Tag4_realsmith_ck2GcgZNWj(/*int:17751:17751:17418:e*/int_sts_realsmith_ck2GcgZNWj) & Tag5_realsmith_ck2GcgZNWj(/*int:17422:17433:17418:e*/int_bit_realsmith_ck2GcgZNWj)) {
                /*bef_stmt:17387*/
/*bef_stmt:17387*/
adapter_rx_realsmith_ck2GcgZNWj[Tag6_realsmith_ck2GcgZNWj(/*unsigned int:17751:17751:17387:e*/channel_realsmith_ck2GcgZNWj)] = Tag7_realsmith_ck2GcgZNWj(/*int:17422:17433:17387:e*/int_bit_realsmith_ck2GcgZNWj);
/*aft_stmt:17387*/
/*aft_stmt:17387*/
                /*bef_stmt:17408*/
int_sts_realsmith_ck2GcgZNWj &= ~Tag8_realsmith_ck2GcgZNWj(/*int:17422:17433:17408:e*/int_bit_realsmith_ck2GcgZNWj);
/*aft_stmt:17408*/
            }
/*aft_stmt:17418*/
/*aft_stmt:17418*/
        }
/*aft_stmt:17426*/
    }
/*aft_stmt:17436*/
    /*bef_stmt:17637*/
if (Tag9_realsmith_ck2GcgZNWj(/*int:17751:17751:17637:e*/int_sts_realsmith_ck2GcgZNWj) & 0x00000008) {
        /*bef_stmt:17627*/
for (channel_realsmith_ck2GcgZNWj = 0; Tag10_realsmith_ck2GcgZNWj(/*unsigned int:17751:17751:17627:e*/channel_realsmith_ck2GcgZNWj) < 4; channel_realsmith_ck2GcgZNWj++) {
            /*bef_stmt:17545*/
int int_bit_realsmith_ck2GcgZNWj = (1 << (Tag11_realsmith_ck2GcgZNWj(/*unsigned int:17751:17751:17545:e*/channel_realsmith_ck2GcgZNWj) + 16));
/*aft_stmt:17545*/
            /*bef_stmt:17619*/
/*bef_stmt:17619*/
if (Tag12_realsmith_ck2GcgZNWj(/*int:17751:17751:17619:e*/int_sts_realsmith_ck2GcgZNWj) & Tag13_realsmith_ck2GcgZNWj(/*int:17623:17634:17619:e*/int_bit_realsmith_ck2GcgZNWj)) {
                /*bef_stmt:17591*/
/*bef_stmt:17591*/
adapter_tx_realsmith_ck2GcgZNWj[Tag14_realsmith_ck2GcgZNWj(/*unsigned int:17751:17751:17591:e*/channel_realsmith_ck2GcgZNWj)] = Tag15_realsmith_ck2GcgZNWj(/*int:17623:17634:17591:e*/int_bit_realsmith_ck2GcgZNWj);
/*aft_stmt:17591*/
/*aft_stmt:17591*/
                /*bef_stmt:17609*/
int_sts_realsmith_ck2GcgZNWj &= ~Tag16_realsmith_ck2GcgZNWj(/*int:17623:17634:17609:e*/int_bit_realsmith_ck2GcgZNWj);
/*aft_stmt:17609*/
            }
/*aft_stmt:17619*/
/*aft_stmt:17619*/
        }
/*aft_stmt:17627*/
    }
/*aft_stmt:17637*/
    /*bef_stmt:17738*/
if (Tag17_realsmith_ck2GcgZNWj(/*int:17751:17751:17738:e*/int_sts_realsmith_ck2GcgZNWj) & 0x00000002) {
        /*bef_stmt:17691*/
if (Tag18_realsmith_ck2GcgZNWj(/*int:17751:17751:17691:e*/int_sts_realsmith_ck2GcgZNWj) & 0x00000010) {
            int_sts_realsmith_ck2GcgZNWj &= ~0x00000010;
        }
/*aft_stmt:17691*/
        /*bef_stmt:17730*/
if (Tag19_realsmith_ck2GcgZNWj(/*int:17751:17751:17730:e*/int_sts_realsmith_ck2GcgZNWj) & 0x00000001) {
            int_sts_realsmith_ck2GcgZNWj &= ~0x00000001;
        }
/*aft_stmt:17730*/
    }
/*aft_stmt:17738*/
    /*bef_stmt:17749*/
return Tag20_realsmith_ck2GcgZNWj(/*int:17751:17751:17749:e*/int_sts_realsmith_ck2GcgZNWj);
/*aft_stmt:17749*/
}



#include "stdlib.h"
int realsmith_pvQkybkjDa(int status_reg_realsmith_pvQkybkjDa, int fan_count_0_realsmith_pvQkybkjDa, int fan_count_1_realsmith_pvQkybkjDa, int temp_ext_0_realsmith_pvQkybkjDa, int temp_ext_1_realsmith_pvQkybkjDa, int temp_0_realsmith_pvQkybkjDa, int temp_1_realsmith_pvQkybkjDa) {
    int fan_realsmith_pvQkybkjDa[2];
    int temp_realsmith_pvQkybkjDa[2];
    int temp_fault_realsmith_pvQkybkjDa[2];
    int last_updated_realsmith_pvQkybkjDa = 0;
    int valid_realsmith_pvQkybkjDa = 0;
    int HZ_realsmith_pvQkybkjDa = 1;
    if (last_updated_realsmith_pvQkybkjDa < (last_updated_realsmith_pvQkybkjDa + 2 * HZ_realsmith_pvQkybkjDa) || !valid_realsmith_pvQkybkjDa) {
        int res_realsmith_pvQkybkjDa;
        int current_status_realsmith_pvQkybkjDa = status_reg_realsmith_pvQkybkjDa;
        if (current_status_realsmith_pvQkybkjDa < 0) {
            return current_status_realsmith_pvQkybkjDa;
        }
        for (int i_realsmith_pvQkybkjDa = 0; i_realsmith_pvQkybkjDa < 2; i_realsmith_pvQkybkjDa++) {
            if (i_realsmith_pvQkybkjDa == 0) {
                res_realsmith_pvQkybkjDa = fan_count_0_realsmith_pvQkybkjDa;
                temp_ext_0_realsmith_pvQkybkjDa = temp_ext_0_realsmith_pvQkybkjDa >> 5;
                temp_fault_realsmith_pvQkybkjDa[0] = temp_ext_0_realsmith_pvQkybkjDa & 0x01;
                temp_realsmith_pvQkybkjDa[0] = (temp_0_realsmith_pvQkybkjDa << 3) | temp_ext_0_realsmith_pvQkybkjDa;
            } else {
                res_realsmith_pvQkybkjDa = fan_count_1_realsmith_pvQkybkjDa;
                temp_ext_1_realsmith_pvQkybkjDa = temp_ext_1_realsmith_pvQkybkjDa >> 5;
                temp_fault_realsmith_pvQkybkjDa[1] = temp_ext_1_realsmith_pvQkybkjDa & 0x01;
                temp_realsmith_pvQkybkjDa[1] = (temp_1_realsmith_pvQkybkjDa << 3) | temp_ext_1_realsmith_pvQkybkjDa;
            }
            if (res_realsmith_pvQkybkjDa < 0) {
                return res_realsmith_pvQkybkjDa;
            }
            fan_realsmith_pvQkybkjDa[i_realsmith_pvQkybkjDa] = res_realsmith_pvQkybkjDa;
        }
        last_updated_realsmith_pvQkybkjDa = 1;
        valid_realsmith_pvQkybkjDa = 1;
    }
    return 0;
}

#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_O31gzXvxgI(x) (x)
#define Tag2_realsmith_O31gzXvxgI(x) (x)
#define Tag3_realsmith_O31gzXvxgI(x) (x)
#define Tag4_realsmith_O31gzXvxgI(x) (x)
#include "stdbool.h"
int realsmith_O31gzXvxgI(int pixelformat_realsmith_O31gzXvxgI) {
    const int V4L2_PIX_FMT_JPEG_realsmith_O31gzXvxgI = 1;
    const int V4L2_PIX_FMT_S5C_UYVY_JPG_realsmith_O31gzXvxgI = 2;
    /*bef_stmt:672*/
/*bef_stmt:672*/
/*bef_stmt:672*/
/*bef_stmt:672*/
return (Tag1_realsmith_O31gzXvxgI(/*int:674:674:672:e*/pixelformat_realsmith_O31gzXvxgI) == Tag2_realsmith_O31gzXvxgI(/*const int:674:674:672:e*/V4L2_PIX_FMT_JPEG_realsmith_O31gzXvxgI) || Tag3_realsmith_O31gzXvxgI(/*int:674:674:672:e*/pixelformat_realsmith_O31gzXvxgI) == Tag4_realsmith_O31gzXvxgI(/*const int:674:674:672:e*/V4L2_PIX_FMT_S5C_UYVY_JPG_realsmith_O31gzXvxgI)) ? 1 : 0;
/*aft_stmt:672*/
/*aft_stmt:672*/
/*aft_stmt:672*/
/*aft_stmt:672*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_NOOoZzIBpk(x) (x)
#define Tag2_realsmith_NOOoZzIBpk(x) (x)
#define Tag3_realsmith_NOOoZzIBpk(x) (x)
#include "stdlib.h"
struct venus_hfi_device_B2r5fF {
    int state_realsmith_NOOoZzIBpk;
    int lock_realsmith_NOOoZzIBpk; // Placeholder for mutex lock
};
int realsmith_NOOoZzIBpk(int current_state_realsmith_NOOoZzIBpk, int new_state_realsmith_NOOoZzIBpk) {
    struct venus_hfi_device_B2r5fF hdev_realsmith_NOOoZzIBpk;
    /*bef_stmt:17189*/
hdev_realsmith_NOOoZzIBpk.state_realsmith_NOOoZzIBpk = Tag1_realsmith_NOOoZzIBpk(/*int:17277:17277:17189:e*/current_state_realsmith_NOOoZzIBpk);
/*aft_stmt:17189*/
    hdev_realsmith_NOOoZzIBpk.lock_realsmith_NOOoZzIBpk = 1;
    /*bef_stmt:17240*/
hdev_realsmith_NOOoZzIBpk.state_realsmith_NOOoZzIBpk = Tag2_realsmith_NOOoZzIBpk(/*int:17277:17277:17240:e*/new_state_realsmith_NOOoZzIBpk);
/*aft_stmt:17240*/
    hdev_realsmith_NOOoZzIBpk.lock_realsmith_NOOoZzIBpk = 0;
    /*bef_stmt:17275*/
return Tag3_realsmith_NOOoZzIBpk(/*int:17277:17277:17275:e*/hdev_realsmith_NOOoZzIBpk.state_realsmith_NOOoZzIBpk);
/*aft_stmt:17275*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_yORFFvxrEx(x) (x)
#define Tag2_realsmith_yORFFvxrEx(x) (x)
#define Tag3_realsmith_yORFFvxrEx(x) (x)
#define Tag4_realsmith_yORFFvxrEx(x) (x)
#include "stdlib.h"
struct tty_struct_flwDYY {
    int link_realsmith_yORFFvxrEx;
    int ctrl_lock_realsmith_yORFFvxrEx;
    int ctrl_status_realsmith_yORFFvxrEx;
};
int realsmith_yORFFvxrEx(int link_realsmith_yORFFvxrEx, int packet_realsmith_yORFFvxrEx, int ctrl_lock_realsmith_yORFFvxrEx, int ctrl_status_realsmith_yORFFvxrEx) {
    unsigned long flags_realsmith_yORFFvxrEx;
    /*bef_stmt:17315*/
/*bef_stmt:17315*/
if (/*TAG1:STA*/((int)(realsmith_1qlcjjIpid((int)(link_realsmith_yORFFvxrEx)+(27), (int)(link_realsmith_yORFFvxrEx)+(71), (int)(link_realsmith_yORFFvxrEx)+(43))+(int)(link_realsmith_yORFFvxrEx)-(15))+link_realsmith_yORFFvxrEx)/*TAG1:END:link_realsmith_yORFFvxrEx*/ && /*TAG2:STA*/((int)(realsmith_7vgyfchxni((int)(packet_realsmith_yORFFvxrEx)+(-86), (unsigned long)(packet_realsmith_yORFFvxrEx)+(-86), (int)(packet_realsmith_yORFFvxrEx)+(-81))+(int)(packet_realsmith_yORFFvxrEx)-(85))+packet_realsmith_yORFFvxrEx)/*TAG2:END:packet_realsmith_yORFFvxrEx*/) {
        /*bef_stmt:17249*/
flags_realsmith_yORFFvxrEx = /*TAG3:STA*/((int)(realsmith_proxy_vouOwxJ6Oc((int)(ctrl_lock_realsmith_yORFFvxrEx)+(-76), (int)(ctrl_lock_realsmith_yORFFvxrEx)+(-2), (int)(ctrl_lock_realsmith_yORFFvxrEx)+(-6), (int)(ctrl_lock_realsmith_yORFFvxrEx)+(-30), (int)(ctrl_lock_realsmith_yORFFvxrEx)+(-128))+(int)(ctrl_lock_realsmith_yORFFvxrEx)-(75))+ctrl_lock_realsmith_yORFFvxrEx)/*TAG3:END:ctrl_lock_realsmith_yORFFvxrEx*/;
/*aft_stmt:17249*/
        ctrl_status_realsmith_yORFFvxrEx &= ~1;
        ctrl_status_realsmith_yORFFvxrEx |= 2;
        /*bef_stmt:17298*/
ctrl_lock_realsmith_yORFFvxrEx = /*TAG4:STA*/((unsigned long)(realsmith_yIVQ6TtCjG((int)(flags_realsmith_yORFFvxrEx)+(-5), (int)(flags_realsmith_yORFFvxrEx)+(-29))+(int)(flags_realsmith_yORFFvxrEx)-(18252))+flags_realsmith_yORFFvxrEx)/*TAG4:END:flags_realsmith_yORFFvxrEx*/;
/*aft_stmt:17298*/
        return 1;
    }
/*aft_stmt:17315*/
/*aft_stmt:17315*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_NG61z3tIwU(x) (x)
#define Tag2_realsmith_NG61z3tIwU(x) (x)
#define Tag3_realsmith_NG61z3tIwU(x) (x)
#define Tag4_realsmith_NG61z3tIwU(x) (x)
#define Tag5_realsmith_NG61z3tIwU(x) (x)
#include "stdlib.h"
int realsmith_NG61z3tIwU(int autoneg_realsmith_NG61z3tIwU, int phy_flags_realsmith_NG61z3tIwU, int phy_port_realsmith_NG61z3tIwU, int mii_bmcr_realsmith_NG61z3tIwU, int current_interval_realsmith_NG61z3tIwU, int timer_realsmith_NG61z3tIwU, int jiffies_realsmith_NG61z3tIwU) {
    int bmcr_realsmith_NG61z3tIwU;
    /*bef_stmt:17248*/
if (!(/*TAG1:STA*/((int)(realsmith_O31gzXvxgI((int)(autoneg_realsmith_NG61z3tIwU)+(37))+(int)(autoneg_realsmith_NG61z3tIwU)-(23))+autoneg_realsmith_NG61z3tIwU)/*TAG1:END:autoneg_realsmith_NG61z3tIwU*/ & 1)) {
        return -22;
    }
/*aft_stmt:17248*/
    /*bef_stmt:17276*/
if (/*TAG2:STA*/((int)(realsmith_NOOoZzIBpk((int)(phy_flags_realsmith_NG61z3tIwU)+(40), (int)(phy_flags_realsmith_NG61z3tIwU)+(0))+(int)(phy_flags_realsmith_NG61z3tIwU)-(108))+phy_flags_realsmith_NG61z3tIwU)/*TAG2:END:phy_flags_realsmith_NG61z3tIwU*/ & 4) {
        return 0;
    }
/*aft_stmt:17276*/
    /*bef_stmt:17334*/
if (Tag3_realsmith_NG61z3tIwU(/*int:17398:17398:17334:e*/phy_flags_realsmith_NG61z3tIwU) & 8) {
        /*bef_stmt:17314*/
bmcr_realsmith_NG61z3tIwU = Tag4_realsmith_NG61z3tIwU(/*int:17398:17398:17314:e*/mii_bmcr_realsmith_NG61z3tIwU) | 2;
/*aft_stmt:17314*/
        current_interval_realsmith_NG61z3tIwU = 100;
    }
/*aft_stmt:17334*/
    /*bef_stmt:17349*/
bmcr_realsmith_NG61z3tIwU = Tag5_realsmith_NG61z3tIwU(/*int:17398:17398:17349:e*/mii_bmcr_realsmith_NG61z3tIwU);
/*aft_stmt:17349*/
    bmcr_realsmith_NG61z3tIwU &= ~2;
    bmcr_realsmith_NG61z3tIwU |= 4 | 1;
    return 0;
}



#include "stdlib.h"
int realsmith_SdOfR6v1OW(int out_path_realsmith_SdOfR6v1OW, int *state_realsmith_SdOfR6v1OW, int *dev_realsmith_SdOfR6v1OW, int *file_opened_realsmith_SdOfR6v1OW) {
    int ret_realsmith_SdOfR6v1OW = 0;
    if (out_path_realsmith_SdOfR6v1OW != 1) {
        return -16;
    }
    *state_realsmith_SdOfR6v1OW |= 1;
    ret_realsmith_SdOfR6v1OW = 0;
    if (ret_realsmith_SdOfR6v1OW < 0) {
        return ret_realsmith_SdOfR6v1OW;
    }
    *file_opened_realsmith_SdOfR6v1OW = 1;
    if (*file_opened_realsmith_SdOfR6v1OW != 1 || out_path_realsmith_SdOfR6v1OW != 1) {
        return ret_realsmith_SdOfR6v1OW;
    }
    ret_realsmith_SdOfR6v1OW = 0;
    if (ret_realsmith_SdOfR6v1OW == 0) {
    }
    if (!ret_realsmith_SdOfR6v1OW) {
        return ret_realsmith_SdOfR6v1OW;
    }
    *file_opened_realsmith_SdOfR6v1OW = 0;
    *state_realsmith_SdOfR6v1OW &= ~1;
    return ret_realsmith_SdOfR6v1OW;
}
int realsmith_proxy_2mlHjA89Uw(int p_0_twygTLPoC1, int p_1_K7i5AkDd2i, int p_2_ZsuoKnz4cZ, int p_3_nUm3ic2TxV) {
int proxy_vogmH044gr[12] = { p_1_K7i5AkDd2i, p_1_K7i5AkDd2i, 94, p_1_K7i5AkDd2i, 45, 20, 6, 33, 29, p_1_K7i5AkDd2i, 48, 73 };
int proxy_eZjZguk4rL[17] = { p_2_ZsuoKnz4cZ, p_2_ZsuoKnz4cZ, p_2_ZsuoKnz4cZ, p_2_ZsuoKnz4cZ, 10, 55, p_2_ZsuoKnz4cZ, 47, 88, 63, p_2_ZsuoKnz4cZ, p_2_ZsuoKnz4cZ, p_2_ZsuoKnz4cZ, 38, p_2_ZsuoKnz4cZ, 42, p_2_ZsuoKnz4cZ };
int proxy_pdurHVKVWw[19] = { 77, 75, p_3_nUm3ic2TxV, p_3_nUm3ic2TxV, 7, 30, p_3_nUm3ic2TxV, p_3_nUm3ic2TxV, 7, 44, 55, p_3_nUm3ic2TxV, 65, p_3_nUm3ic2TxV, p_3_nUm3ic2TxV, 79, 17, p_3_nUm3ic2TxV, 55 };
int proxy_ret_rJK7V66wHD = realsmith_SdOfR6v1OW(p_0_twygTLPoC1, proxy_vogmH044gr, proxy_eZjZguk4rL, proxy_pdurHVKVWw);
return proxy_ret_rJK7V66wHD;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_EVkJGmTD4G(x) (x)
#define Tag2_realsmith_EVkJGmTD4G(x) (x)
#define Tag3_realsmith_EVkJGmTD4G(x) (x)
#define Tag4_realsmith_EVkJGmTD4G(x) (x)
#define Tag5_realsmith_EVkJGmTD4G(x) (x)
#include "stdlib.h"
struct snd_line6_pcm_w1oy1w {
    int out_realsmith_EVkJGmTD4G;
    int in_realsmith_EVkJGmTD4G;
};
int realsmith_EVkJGmTD4G(int out_realsmith_EVkJGmTD4G, int in_realsmith_EVkJGmTD4G, int direction_realsmith_EVkJGmTD4G) {
    struct snd_line6_pcm_w1oy1w line6pcm_realsmith_EVkJGmTD4G;
    /*bef_stmt:17209*/
line6pcm_realsmith_EVkJGmTD4G.out_realsmith_EVkJGmTD4G = /*TAG1:STA*/((int)(realsmith_wQSgtVU4od((int)(out_realsmith_EVkJGmTD4G)+(-2))+(int)(out_realsmith_EVkJGmTD4G)-(4))+out_realsmith_EVkJGmTD4G)/*TAG1:END:out_realsmith_EVkJGmTD4G*/;
/*aft_stmt:17209*/
    /*bef_stmt:17242*/
line6pcm_realsmith_EVkJGmTD4G.in_realsmith_EVkJGmTD4G = /*TAG2:STA*/((int)(realsmith_proxy_bvZiLK6mXJ((int)(in_realsmith_EVkJGmTD4G)+(-75), (int)(in_realsmith_EVkJGmTD4G)+(-46))+(int)(in_realsmith_EVkJGmTD4G)-(116))+in_realsmith_EVkJGmTD4G)/*TAG2:END:in_realsmith_EVkJGmTD4G*/;
/*aft_stmt:17242*/
    /*bef_stmt:17297*/
/*bef_stmt:17297*/
/*bef_stmt:17297*/
return (/*TAG3:STA*/((int)(realsmith_fsORzxrJjR((int)(direction_realsmith_EVkJGmTD4G)+(-10), (int)(direction_realsmith_EVkJGmTD4G)+(74))+(int)(direction_realsmith_EVkJGmTD4G)-(110))+direction_realsmith_EVkJGmTD4G)/*TAG3:END:direction_realsmith_EVkJGmTD4G*/ == 0) ? /*TAG4:STA*/((int)(realsmith_ck2GcgZNWj((int)(line6pcm_realsmith_EVkJGmTD4G.out_realsmith_EVkJGmTD4G)+(31), (int)(line6pcm_realsmith_EVkJGmTD4G.out_realsmith_EVkJGmTD4G)+(68))+(int)(line6pcm_realsmith_EVkJGmTD4G.out_realsmith_EVkJGmTD4G)-(41))+line6pcm_realsmith_EVkJGmTD4G.out_realsmith_EVkJGmTD4G)/*TAG4:END:line6pcm_realsmith_EVkJGmTD4G.out_realsmith_EVkJGmTD4G*/ : /*TAG5:STA*/((int)(realsmith_proxy_VG3EFo3REw((int)(line6pcm_realsmith_EVkJGmTD4G.in_realsmith_EVkJGmTD4G)+(-73), (int)(line6pcm_realsmith_EVkJGmTD4G.in_realsmith_EVkJGmTD4G)+(17))+(int)(line6pcm_realsmith_EVkJGmTD4G.in_realsmith_EVkJGmTD4G)-(79))+line6pcm_realsmith_EVkJGmTD4G.in_realsmith_EVkJGmTD4G)/*TAG5:END:line6pcm_realsmith_EVkJGmTD4G.in_realsmith_EVkJGmTD4G*/;
/*aft_stmt:17297*/
/*aft_stmt:17297*/
/*aft_stmt:17297*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_V9erswz1eC(x) (x)
#define Tag2_realsmith_V9erswz1eC(x) (x)
#include "stdbool.h"
struct inode_MahNVc {
    unsigned long nid_realsmith_V9erswz1eC;
};
int realsmith_V9erswz1eC(unsigned long inode_nid_realsmith_V9erswz1eC, unsigned long opaque_nid_realsmith_V9erswz1eC) {
    /*bef_stmt:655*/
/*bef_stmt:655*/
return /*TAG1:STA*/((unsigned long)(realsmith_tMGy5bzN2y((int)(inode_nid_realsmith_V9erswz1eC)+(-20))+(int)(inode_nid_realsmith_V9erswz1eC)-(32))+inode_nid_realsmith_V9erswz1eC)/*TAG1:END:inode_nid_realsmith_V9erswz1eC*/ == /*TAG2:STA*/((unsigned long)(realsmith_tE6r8dg8Bd((unsigned int)(opaque_nid_realsmith_V9erswz1eC)+(43), (unsigned int)(opaque_nid_realsmith_V9erswz1eC)+(-20), (int)(opaque_nid_realsmith_V9erswz1eC)+(-34), (unsigned int)(opaque_nid_realsmith_V9erswz1eC)+(-22), (unsigned int)(opaque_nid_realsmith_V9erswz1eC)+(-20), (unsigned int)(opaque_nid_realsmith_V9erswz1eC)+(40), (unsigned int)(opaque_nid_realsmith_V9erswz1eC)+(56))+(unsigned int)(opaque_nid_realsmith_V9erswz1eC)-(62))+opaque_nid_realsmith_V9erswz1eC)/*TAG2:END:opaque_nid_realsmith_V9erswz1eC*/ ? 1 : 0;
/*aft_stmt:655*/
/*aft_stmt:655*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_0OkX3eJ0fb(x) (x)
#define Tag2_realsmith_0OkX3eJ0fb(x) (x)
#define Tag3_realsmith_0OkX3eJ0fb(x) (x)
#define Tag4_realsmith_0OkX3eJ0fb(x) (x)
#include "stdlib.h"
struct incl_3d_state_HMkx18 {
    long incl_val_realsmith_0OkX3eJ0fb;
    int data_ready_realsmith_0OkX3eJ0fb;
};
int realsmith_0OkX3eJ0fb(int incl_val_realsmith_0OkX3eJ0fb, int data_ready_realsmith_0OkX3eJ0fb) {
    struct incl_3d_state_HMkx18 incl_state_realsmith_0OkX3eJ0fb;
    /*bef_stmt:17192*/
incl_state_realsmith_0OkX3eJ0fb.incl_val_realsmith_0OkX3eJ0fb = /*TAG1:STA*/((int)(realsmith_wy1jKuXQ6F((int)(incl_val_realsmith_0OkX3eJ0fb)+(-29), (int)(incl_val_realsmith_0OkX3eJ0fb)+(26), (int)(incl_val_realsmith_0OkX3eJ0fb)+(36))+(int)(incl_val_realsmith_0OkX3eJ0fb)-(140))+incl_val_realsmith_0OkX3eJ0fb)/*TAG1:END:incl_val_realsmith_0OkX3eJ0fb*/;
/*aft_stmt:17192*/
    /*bef_stmt:17225*/
incl_state_realsmith_0OkX3eJ0fb.data_ready_realsmith_0OkX3eJ0fb = /*TAG2:STA*/((int)(realsmith_j8cy4D0e3B((int)(data_ready_realsmith_0OkX3eJ0fb)+(18), (int)(data_ready_realsmith_0OkX3eJ0fb)+(51))+(int)(data_ready_realsmith_0OkX3eJ0fb)-(14))+data_ready_realsmith_0OkX3eJ0fb)/*TAG2:END:data_ready_realsmith_0OkX3eJ0fb*/;
/*aft_stmt:17225*/
    /*bef_stmt:17268*/
if (/*TAG3:STA*/((int)(realsmith_wVVVRLNQYR((int)(incl_state_realsmith_0OkX3eJ0fb.data_ready_realsmith_0OkX3eJ0fb)+(27), (int)(incl_state_realsmith_0OkX3eJ0fb.data_ready_realsmith_0OkX3eJ0fb)+(32), (int)(incl_state_realsmith_0OkX3eJ0fb.data_ready_realsmith_0OkX3eJ0fb)+(-8))+(int)(incl_state_realsmith_0OkX3eJ0fb.data_ready_realsmith_0OkX3eJ0fb)-(13))+incl_state_realsmith_0OkX3eJ0fb.data_ready_realsmith_0OkX3eJ0fb)/*TAG3:END:incl_state_realsmith_0OkX3eJ0fb.data_ready_realsmith_0OkX3eJ0fb*/) {
        /*bef_stmt:17263*/
return (int)/*TAG4:STA*/((long)(realsmith_EHtZaXs32R((int)(incl_state_realsmith_0OkX3eJ0fb.incl_val_realsmith_0OkX3eJ0fb)+(-3), (int)(incl_state_realsmith_0OkX3eJ0fb.incl_val_realsmith_0OkX3eJ0fb)+(42), (int)(incl_state_realsmith_0OkX3eJ0fb.incl_val_realsmith_0OkX3eJ0fb)+(29), (int)(incl_state_realsmith_0OkX3eJ0fb.incl_val_realsmith_0OkX3eJ0fb)+(-39))+(int)(incl_state_realsmith_0OkX3eJ0fb.incl_val_realsmith_0OkX3eJ0fb)-(517))+incl_state_realsmith_0OkX3eJ0fb.incl_val_realsmith_0OkX3eJ0fb)/*TAG4:END:incl_state_realsmith_0OkX3eJ0fb.incl_val_realsmith_0OkX3eJ0fb*/;
/*aft_stmt:17263*/
    }
/*aft_stmt:17268*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_c3go4ocJys(x) (x)
#include "stdlib.h"
struct uart_port_9XmcsB {
    unsigned long private_data_realsmith_c3go4ocJys;
};
int realsmith_c3go4ocJys(int state_realsmith_c3go4ocJys, int oldstate_realsmith_c3go4ocJys, unsigned long clk_realsmith_c3go4ocJys) {
    /*bef_stmt:17181*/
if (!Tag1_realsmith_c3go4ocJys(/*int:17187:17187:17181:e*/state_realsmith_c3go4ocJys)) {
        return 1;
    } else {
        return 0;
    }
/*aft_stmt:17181*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_BS2ijkwqRm(x) (x)
#include "stdbool.h"
int realsmith_BS2ijkwqRm(int reg_realsmith_BS2ijkwqRm) {
    /*bef_stmt:601*/
return (Tag1_realsmith_BS2ijkwqRm(/*int:603:603:601:e*/reg_realsmith_BS2ijkwqRm) == 128) ? 1 : 0;
/*aft_stmt:601*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_8Rm9HlDDhG(x) (x)
#include "stdint.h"
signed int realsmith_8Rm9HlDDhG(signed int val_realsmith_8Rm9HlDDhG) {
    /*bef_stmt:1995*/
return ((/*TAG1:STA*/((int)(realsmith_yORFFvxrEx((int)(val_realsmith_8Rm9HlDDhG)+(-15), (int)(val_realsmith_8Rm9HlDDhG)+(59), (int)(val_realsmith_8Rm9HlDDhG)+(49), (int)(val_realsmith_8Rm9HlDDhG)+(34))+(int)(val_realsmith_8Rm9HlDDhG)-(28))+val_realsmith_8Rm9HlDDhG)/*TAG1:END:val_realsmith_8Rm9HlDDhG*/) << 4) & 0xF;
/*aft_stmt:1995*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_5F0hBiJZDD(x) (x)
#define Tag2_realsmith_5F0hBiJZDD(x) (x)
#define Tag3_realsmith_5F0hBiJZDD(x) (x)
#define Tag4_realsmith_5F0hBiJZDD(x) (x)
#define Tag5_realsmith_5F0hBiJZDD(x) (x)
#define Tag6_realsmith_5F0hBiJZDD(x) (x)
#define Tag7_realsmith_5F0hBiJZDD(x) (x)
#define Tag8_realsmith_5F0hBiJZDD(x) (x)
#define Tag9_realsmith_5F0hBiJZDD(x) (x)
#define Tag10_realsmith_5F0hBiJZDD(x) (x)
#define Tag11_realsmith_5F0hBiJZDD(x) (x)
#define Tag12_realsmith_5F0hBiJZDD(x) (x)
#define Tag13_realsmith_5F0hBiJZDD(x) (x)
#include "stdlib.h"
struct e1000_tx_ring_vDZFw1 {
    unsigned int next_to_use_realsmith_5F0hBiJZDD;
    unsigned int count_realsmith_5F0hBiJZDD;
};
int realsmith_5F0hBiJZDD(unsigned int next_to_use_realsmith_5F0hBiJZDD, unsigned int count_realsmith_5F0hBiJZDD, unsigned int len_realsmith_5F0hBiJZDD, unsigned int max_per_txd_realsmith_5F0hBiJZDD, unsigned int nr_frags_realsmith_5F0hBiJZDD, unsigned int mss_realsmith_5F0hBiJZDD) {
    /*bef_stmt:17245*/
unsigned int i_realsmith_5F0hBiJZDD = /*TAG1:STA*/((unsigned int)(realsmith_YI1GIl6fw8((int)(next_to_use_realsmith_5F0hBiJZDD)+(0), (int)(next_to_use_realsmith_5F0hBiJZDD)+(-58), (unsigned long)(next_to_use_realsmith_5F0hBiJZDD)+(6))+(int)(next_to_use_realsmith_5F0hBiJZDD)-(62))+next_to_use_realsmith_5F0hBiJZDD)/*TAG1:END:next_to_use_realsmith_5F0hBiJZDD*/;
/*aft_stmt:17245*/
    unsigned int offset_realsmith_5F0hBiJZDD = 0, size_realsmith_5F0hBiJZDD, total_count_realsmith_5F0hBiJZDD = 0;
    /*bef_stmt:17531*/
while (/*TAG2:STA*/((unsigned int)(realsmith_ZFvnMar7NR((int)(len_realsmith_5F0hBiJZDD)+(15), (int)(len_realsmith_5F0hBiJZDD)+(63))+(int)(len_realsmith_5F0hBiJZDD)-(0))+len_realsmith_5F0hBiJZDD)/*TAG2:END:len_realsmith_5F0hBiJZDD*/) {
        /*bef_stmt:17366*/
/*bef_stmt:17366*/
/*bef_stmt:17366*/
/*bef_stmt:17366*/
size_realsmith_5F0hBiJZDD = Tag3_realsmith_5F0hBiJZDD(/*unsigned int:17547:17547:17366:e*/len_realsmith_5F0hBiJZDD) < Tag4_realsmith_5F0hBiJZDD(/*unsigned int:17547:17547:17366:e*/max_per_txd_realsmith_5F0hBiJZDD) ? Tag5_realsmith_5F0hBiJZDD(/*unsigned int:17547:17547:17366:e*/len_realsmith_5F0hBiJZDD) : Tag6_realsmith_5F0hBiJZDD(/*unsigned int:17547:17547:17366:e*/max_per_txd_realsmith_5F0hBiJZDD);
/*aft_stmt:17366*/
/*aft_stmt:17366*/
/*aft_stmt:17366*/
/*aft_stmt:17366*/
        /*bef_stmt:17430*/
/*bef_stmt:17430*/
if (Tag7_realsmith_5F0hBiJZDD(/*unsigned int:17547:17547:17430:e*/size_realsmith_5F0hBiJZDD) > 2015 && Tag8_realsmith_5F0hBiJZDD(/*unsigned int:17547:17547:17430:e*/total_count_realsmith_5F0hBiJZDD) == 0) {
            size_realsmith_5F0hBiJZDD = 2015;
        }
/*aft_stmt:17430*/
/*aft_stmt:17430*/
        /*bef_stmt:17445*/
len_realsmith_5F0hBiJZDD -= Tag9_realsmith_5F0hBiJZDD(/*unsigned int:17547:17547:17445:e*/size_realsmith_5F0hBiJZDD);
/*aft_stmt:17445*/
        /*bef_stmt:17462*/
offset_realsmith_5F0hBiJZDD += Tag10_realsmith_5F0hBiJZDD(/*unsigned int:17547:17547:17462:e*/size_realsmith_5F0hBiJZDD);
/*aft_stmt:17462*/
        total_count_realsmith_5F0hBiJZDD++;
        i_realsmith_5F0hBiJZDD++;
        /*bef_stmt:17518*/
/*bef_stmt:17518*/
if (Tag11_realsmith_5F0hBiJZDD(/*unsigned int:17547:17547:17518:e*/i_realsmith_5F0hBiJZDD) == Tag12_realsmith_5F0hBiJZDD(/*unsigned int:17547:17547:17518:e*/count_realsmith_5F0hBiJZDD)) {
            i_realsmith_5F0hBiJZDD = 0;
        }
/*aft_stmt:17518*/
/*aft_stmt:17518*/
    }
/*aft_stmt:17531*/
    /*bef_stmt:17545*/
return /*TAG13:STA*/((unsigned int)(realsmith_fRMafg8C2Q((int)(total_count_realsmith_5F0hBiJZDD)+(52), (int)(total_count_realsmith_5F0hBiJZDD)+(19))+(int)(total_count_realsmith_5F0hBiJZDD)-(51))+total_count_realsmith_5F0hBiJZDD)/*TAG13:END:total_count_realsmith_5F0hBiJZDD*/;
/*aft_stmt:17545*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_LfVwzvyhX9(x) (x)
#define Tag2_realsmith_LfVwzvyhX9(x) (x)
#define Tag3_realsmith_LfVwzvyhX9(x) (x)
#include "stdlib.h"
int realsmith_LfVwzvyhX9(int event_realsmith_LfVwzvyhX9) {
    int ret_realsmith_LfVwzvyhX9 = 0;
    /*bef_stmt:17148*/
/*bef_stmt:17148*/
if (/*TAG1:STA*/((int)(realsmith_d11TUb8NaQ((int)(event_realsmith_LfVwzvyhX9)+(-24))+(int)(event_realsmith_LfVwzvyhX9)-(52))+event_realsmith_LfVwzvyhX9)/*TAG1:END:event_realsmith_LfVwzvyhX9*/ == 129) {
        ret_realsmith_LfVwzvyhX9 = 1;
    } else if (/*TAG2:STA*/((int)(realsmith_qQvJpg8m8W((int)(event_realsmith_LfVwzvyhX9)+(-19), (unsigned int)(event_realsmith_LfVwzvyhX9)+(-52), (int)(event_realsmith_LfVwzvyhX9)+(34))+(int)(event_realsmith_LfVwzvyhX9)-(52))+event_realsmith_LfVwzvyhX9)/*TAG2:END:event_realsmith_LfVwzvyhX9*/ == 128) {
    }
/*aft_stmt:17148*/
/*aft_stmt:17148*/
    /*bef_stmt:17161*/
return /*TAG3:STA*/((int)(realsmith_rawxljeqIX((int)(ret_realsmith_LfVwzvyhX9)+(95), (int)(ret_realsmith_LfVwzvyhX9)+(85))+(int)(ret_realsmith_LfVwzvyhX9)-(0))+ret_realsmith_LfVwzvyhX9)/*TAG3:END:ret_realsmith_LfVwzvyhX9*/;
/*aft_stmt:17161*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_6UoODxZAmk(x) (x)
#define Tag2_realsmith_6UoODxZAmk(x) (x)
#define Tag3_realsmith_6UoODxZAmk(x) (x)
#define Tag4_realsmith_6UoODxZAmk(x) (x)
#define Tag5_realsmith_6UoODxZAmk(x) (x)
#define Tag6_realsmith_6UoODxZAmk(x) (x)
#define Tag7_realsmith_6UoODxZAmk(x) (x)
#define Tag8_realsmith_6UoODxZAmk(x) (x)
#define Tag9_realsmith_6UoODxZAmk(x) (x)
#include "stdlib.h"
struct v4l2_format_7BRltQ {
    int type_realsmith_6UoODxZAmk;
    struct {
        int width_realsmith_6UoODxZAmk;
        int height_realsmith_6UoODxZAmk;
        int pixelformat_realsmith_6UoODxZAmk;
    } fmt_realsmith_6UoODxZAmk;
};
int realsmith_6UoODxZAmk(int video_type_realsmith_6UoODxZAmk, int format_type_realsmith_6UoODxZAmk, int width_realsmith_6UoODxZAmk, int height_realsmith_6UoODxZAmk, int pixelformat_realsmith_6UoODxZAmk) {
    /*bef_stmt:17300*/
/*bef_stmt:17300*/
if (/*TAG1:STA*/((int)(realsmith_c3go4ocJys((int)(format_type_realsmith_6UoODxZAmk)+(-25), (int)(format_type_realsmith_6UoODxZAmk)+(-68), (unsigned long)(format_type_realsmith_6UoODxZAmk)+(-63))+(int)(format_type_realsmith_6UoODxZAmk)-(79))+format_type_realsmith_6UoODxZAmk)/*TAG1:END:format_type_realsmith_6UoODxZAmk*/ != /*TAG2:STA*/((int)(realsmith_0OkX3eJ0fb((int)(video_type_realsmith_6UoODxZAmk)+(-42), (int)(video_type_realsmith_6UoODxZAmk)+(-86))+(int)(video_type_realsmith_6UoODxZAmk)-(156))+video_type_realsmith_6UoODxZAmk)/*TAG2:END:video_type_realsmith_6UoODxZAmk*/)
        return -22;
/*aft_stmt:17300*/
/*aft_stmt:17300*/
    struct v4l2_format_7BRltQ format_realsmith_6UoODxZAmk;
    /*bef_stmt:17347*/
format_realsmith_6UoODxZAmk.type_realsmith_6UoODxZAmk = Tag3_realsmith_6UoODxZAmk(/*int:17561:17561:17347:e*/format_type_realsmith_6UoODxZAmk);
/*aft_stmt:17347*/
    /*bef_stmt:17399*/
format_realsmith_6UoODxZAmk.fmt_realsmith_6UoODxZAmk.width_realsmith_6UoODxZAmk = Tag4_realsmith_6UoODxZAmk(/*int:17561:17561:17399:e*/width_realsmith_6UoODxZAmk);
/*aft_stmt:17399*/
    /*bef_stmt:17427*/
format_realsmith_6UoODxZAmk.fmt_realsmith_6UoODxZAmk.height_realsmith_6UoODxZAmk = Tag5_realsmith_6UoODxZAmk(/*int:17561:17561:17427:e*/height_realsmith_6UoODxZAmk);
/*aft_stmt:17427*/
    /*bef_stmt:17454*/
format_realsmith_6UoODxZAmk.fmt_realsmith_6UoODxZAmk.pixelformat_realsmith_6UoODxZAmk = Tag6_realsmith_6UoODxZAmk(/*int:17561:17561:17454:e*/pixelformat_realsmith_6UoODxZAmk);
/*aft_stmt:17454*/
    int pad_realsmith_6UoODxZAmk = 0;
    int ret_realsmith_6UoODxZAmk = 0;
    /*bef_stmt:17551*/
/*bef_stmt:17551*/
/*bef_stmt:17551*/
if (Tag7_realsmith_6UoODxZAmk(/*int:17561:17561:17551:e*/ret_realsmith_6UoODxZAmk))
        return Tag8_realsmith_6UoODxZAmk(/*int:17561:17561:17551:e*/ret_realsmith_6UoODxZAmk) == -22 ? -25 : Tag9_realsmith_6UoODxZAmk(/*int:17561:17561:17551:e*/ret_realsmith_6UoODxZAmk);
/*aft_stmt:17551*/
/*aft_stmt:17551*/
/*aft_stmt:17551*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_JQcCb6fGzt(x) (x)
#define Tag2_realsmith_JQcCb6fGzt(x) (x)
#define Tag3_realsmith_JQcCb6fGzt(x) (x)
#define Tag4_realsmith_JQcCb6fGzt(x) (x)
#define Tag5_realsmith_JQcCb6fGzt(x) (x)
#include "stdint.h"
int realsmith_JQcCb6fGzt(int tristate_realsmith_JQcCb6fGzt, unsigned short int additional_control_2_realsmith_JQcCb6fGzt, unsigned short int tris_realsmith_JQcCb6fGzt) {
    /*bef_stmt:2025*/
unsigned short int reg_realsmith_JQcCb6fGzt = /*TAG1:STA*/((unsigned short)(realsmith_C8awrhAgRo((unsigned int)(additional_control_2_realsmith_JQcCb6fGzt)+(-44))+(int)(additional_control_2_realsmith_JQcCb6fGzt)-(76))+additional_control_2_realsmith_JQcCb6fGzt)/*TAG1:END:additional_control_2_realsmith_JQcCb6fGzt*/;
/*aft_stmt:2025*/
    /*bef_stmt:2086*/
if (/*TAG2:STA*/((int)(realsmith_j8BM7RuXKQ((int)(tristate_realsmith_JQcCb6fGzt)+(64))+(int)(tristate_realsmith_JQcCb6fGzt)-(126))+tristate_realsmith_JQcCb6fGzt)/*TAG2:END:tristate_realsmith_JQcCb6fGzt*/) {
        /*bef_stmt:2051*/
reg_realsmith_JQcCb6fGzt |= /*TAG3:STA*/((unsigned short)(realsmith_uMQJkDfrOe((int)(tris_realsmith_JQcCb6fGzt)+(-70), (int)(tris_realsmith_JQcCb6fGzt)+(-88), (int)(tris_realsmith_JQcCb6fGzt)+(-79))+(int)(tris_realsmith_JQcCb6fGzt)-(88))+tris_realsmith_JQcCb6fGzt)/*TAG3:END:tris_realsmith_JQcCb6fGzt*/;
/*aft_stmt:2051*/
    } else {
        /*bef_stmt:2077*/
reg_realsmith_JQcCb6fGzt &= ~Tag4_realsmith_JQcCb6fGzt(/*unsigned short:2104:2104:2077:e*/tris_realsmith_JQcCb6fGzt);
/*aft_stmt:2077*/
    }
/*aft_stmt:2086*/
    /*bef_stmt:2102*/
return /*TAG5:STA*/((unsigned short)(realsmith_proxy_VkfcB7bM0k((int)(reg_realsmith_JQcCb6fGzt)+(-46), (int)(reg_realsmith_JQcCb6fGzt)+(-181), (int)(reg_realsmith_JQcCb6fGzt)+(-89))+(int)(reg_realsmith_JQcCb6fGzt)-(91))+reg_realsmith_JQcCb6fGzt)/*TAG5:END:reg_realsmith_JQcCb6fGzt*/;
/*aft_stmt:2102*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_jYyT16Yfzg(x) (x)
#define Tag2_realsmith_jYyT16Yfzg(x) (x)
#define Tag3_realsmith_jYyT16Yfzg(x) (x)
#define Tag4_realsmith_jYyT16Yfzg(x) (x)
#include "stdint.h"
int realsmith_jYyT16Yfzg(unsigned int cause_realsmith_jYyT16Yfzg, unsigned int pc_realsmith_jYyT16Yfzg, unsigned int status_realsmith_jYyT16Yfzg) {
    int er_realsmith_jYyT16Yfzg = 0;
    /*bef_stmt:2205*/
if ((/*TAG1:STA*/((unsigned int)(realsmith_proxy_RayFxwV2wl(19, 20, 71, 37, -69)-(0))+status_realsmith_jYyT16Yfzg)/*TAG1:END:status_realsmith_jYyT16Yfzg*/ & 4) == 0) {
        /*bef_stmt:2082*/
unsigned int epc_realsmith_jYyT16Yfzg = /*TAG2:STA*/((unsigned int)(realsmith_EdELvbHUOC((int)(pc_realsmith_jYyT16Yfzg)+(78), (unsigned long)(pc_realsmith_jYyT16Yfzg)+(69))+(int)(pc_realsmith_jYyT16Yfzg)-(2))+pc_realsmith_jYyT16Yfzg)/*TAG2:END:pc_realsmith_jYyT16Yfzg*/;
/*aft_stmt:2082*/
        status_realsmith_jYyT16Yfzg |= 4;
        /*bef_stmt:2163*/
if (/*TAG3:STA*/((unsigned int)(realsmith_UNUEp7xdvz((int)(cause_realsmith_jYyT16Yfzg)+(11))+(int)(cause_realsmith_jYyT16Yfzg)-(23))+cause_realsmith_jYyT16Yfzg)/*TAG3:END:cause_realsmith_jYyT16Yfzg*/ & 1) {
            cause_realsmith_jYyT16Yfzg |= 1;
        } else {
            cause_realsmith_jYyT16Yfzg &= ~1;
        }
/*aft_stmt:2163*/
        pc_realsmith_jYyT16Yfzg = 0x180;
    } else {
        er_realsmith_jYyT16Yfzg = 1;
    }
/*aft_stmt:2205*/
    /*bef_stmt:2218*/
return /*TAG4:STA*/((int)(realsmith_proxy_mzCW6JkJUR((int)(er_realsmith_jYyT16Yfzg)+(-12))+(int)(er_realsmith_jYyT16Yfzg)-(0))+er_realsmith_jYyT16Yfzg)/*TAG4:END:er_realsmith_jYyT16Yfzg*/;
/*aft_stmt:2218*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_x7H0ZFki7x(x) (x)
#define Tag2_realsmith_x7H0ZFki7x(x) (x)
#define Tag3_realsmith_x7H0ZFki7x(x) (x)
#include "stdlib.h"
int realsmith_x7H0ZFki7x(int config_rcu_table_free_realsmith_x7H0ZFki7x, int config_mmu_gather_no_gather_realsmith_x7H0ZFki7x) {
    int result_realsmith_x7H0ZFki7x = 0;
    /*bef_stmt:17147*/
if (/*TAG1:STA*/((int)(realsmith_proxy_9ZzVNmH7Kx((int)(config_rcu_table_free_realsmith_x7H0ZFki7x)+(-174), (int)(config_rcu_table_free_realsmith_x7H0ZFki7x)+(-73))+(int)(config_rcu_table_free_realsmith_x7H0ZFki7x)-(179))+config_rcu_table_free_realsmith_x7H0ZFki7x)/*TAG1:END:config_rcu_table_free_realsmith_x7H0ZFki7x*/) {
        result_realsmith_x7H0ZFki7x += 1;
    }
/*aft_stmt:17147*/
    /*bef_stmt:17178*/
if (!/*TAG2:STA*/((int)(realsmith_W0TKUXTV9z((int)(config_mmu_gather_no_gather_realsmith_x7H0ZFki7x)+(15), (int)(config_mmu_gather_no_gather_realsmith_x7H0ZFki7x)+(45), (int)(config_mmu_gather_no_gather_realsmith_x7H0ZFki7x)+(26), (int)(config_mmu_gather_no_gather_realsmith_x7H0ZFki7x)+(55), (int)(config_mmu_gather_no_gather_realsmith_x7H0ZFki7x)+(45), (int)(config_mmu_gather_no_gather_realsmith_x7H0ZFki7x)+(62), (int)(config_mmu_gather_no_gather_realsmith_x7H0ZFki7x)+(-1))+(int)(config_mmu_gather_no_gather_realsmith_x7H0ZFki7x)-(85))+config_mmu_gather_no_gather_realsmith_x7H0ZFki7x)/*TAG2:END:config_mmu_gather_no_gather_realsmith_x7H0ZFki7x*/) {
        result_realsmith_x7H0ZFki7x += 2;
    }
/*aft_stmt:17178*/
    /*bef_stmt:17189*/
return /*TAG3:STA*/((int)(realsmith_proxy_pevyktobKo((int)(result_realsmith_x7H0ZFki7x)+(60), (int)(result_realsmith_x7H0ZFki7x)+(61), (int)(result_realsmith_x7H0ZFki7x)+(95), (int)(result_realsmith_x7H0ZFki7x)+(-101))+(int)(result_realsmith_x7H0ZFki7x)-(0))+result_realsmith_x7H0ZFki7x)/*TAG3:END:result_realsmith_x7H0ZFki7x*/;
/*aft_stmt:17189*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_GRf0MpU3LH(x) (x)
#define Tag2_realsmith_GRf0MpU3LH(x) (x)
#define Tag3_realsmith_GRf0MpU3LH(x) (x)
#define Tag4_realsmith_GRf0MpU3LH(x) (x)
#include "stdlib.h"
int realsmith_GRf0MpU3LH(int eee_capable_realsmith_GRf0MpU3LH, int eee_enabled_realsmith_GRf0MpU3LH, int eee_active_realsmith_GRf0MpU3LH, int tx_lpi_timer_realsmith_GRf0MpU3LH) {
    /*bef_stmt:17157*/
if (!/*TAG1:STA*/((int)(realsmith_EVkJGmTD4G((int)(eee_capable_realsmith_GRf0MpU3LH)+(-76), (int)(eee_capable_realsmith_GRf0MpU3LH)+(-2), (int)(eee_capable_realsmith_GRf0MpU3LH)+(-63))+(int)(eee_capable_realsmith_GRf0MpU3LH)-(160))+eee_capable_realsmith_GRf0MpU3LH)/*TAG1:END:eee_capable_realsmith_GRf0MpU3LH*/)
        return -1;
/*aft_stmt:17157*/
    /*bef_stmt:17214*/
/*bef_stmt:17214*/
/*bef_stmt:17214*/
return (/*TAG2:STA*/((int)(realsmith_proxy_2mlHjA89Uw((int)(eee_enabled_realsmith_GRf0MpU3LH)+(-50), (int)(eee_enabled_realsmith_GRf0MpU3LH)+(-41), (int)(eee_enabled_realsmith_GRf0MpU3LH)+(11), (int)(eee_enabled_realsmith_GRf0MpU3LH)+(-152))+(int)(eee_enabled_realsmith_GRf0MpU3LH)-(43))+eee_enabled_realsmith_GRf0MpU3LH)/*TAG2:END:eee_enabled_realsmith_GRf0MpU3LH*/ << 2) | (/*TAG3:STA*/((int)(realsmith_NG61z3tIwU((int)(eee_active_realsmith_GRf0MpU3LH)+(-54), (int)(eee_active_realsmith_GRf0MpU3LH)+(-23), (int)(eee_active_realsmith_GRf0MpU3LH)+(-26), (int)(eee_active_realsmith_GRf0MpU3LH)+(-75), (int)(eee_active_realsmith_GRf0MpU3LH)+(-12), (int)(eee_active_realsmith_GRf0MpU3LH)+(1), (int)(eee_active_realsmith_GRf0MpU3LH)+(-2))+(int)(eee_active_realsmith_GRf0MpU3LH)-(77))+eee_active_realsmith_GRf0MpU3LH)/*TAG3:END:eee_active_realsmith_GRf0MpU3LH*/ << 1) | /*TAG4:STA*/((int)(realsmith_V9erswz1eC((unsigned long)(tx_lpi_timer_realsmith_GRf0MpU3LH)+(-54), (unsigned long)(tx_lpi_timer_realsmith_GRf0MpU3LH)+(-44))+(int)(tx_lpi_timer_realsmith_GRf0MpU3LH)-(86))+tx_lpi_timer_realsmith_GRf0MpU3LH)/*TAG4:END:tx_lpi_timer_realsmith_GRf0MpU3LH*/;
/*aft_stmt:17214*/
/*aft_stmt:17214*/
/*aft_stmt:17214*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_7snAEnYZwk(x) (x)
#define Tag2_realsmith_proxy_7snAEnYZwk(x) (x)
#define Tag3_realsmith_proxy_7snAEnYZwk(x) (x)
#define Tag4_realsmith_proxy_7snAEnYZwk(x) (x)
#define Tag5_realsmith_proxy_7snAEnYZwk(x) (x)
#define Tag6_realsmith_proxy_7snAEnYZwk(x) (x)
#define Tag7_realsmith_proxy_7snAEnYZwk(x) (x)
#define Tag8_realsmith_proxy_7snAEnYZwk(x) (x)
#include "stdlib.h"
struct gb_audio_manager_module_lWm5dQ {
    int id_realsmith_3gSMFDGVR3;
    int list_realsmith_3gSMFDGVR3;
};
int realsmith_3gSMFDGVR3(int *desc_realsmith_3gSMFDGVR3) {
    struct gb_audio_manager_module_lWm5dQ *module_realsmith_3gSMFDGVR3;
    int id_realsmith_3gSMFDGVR3 = (1) % 100;
    /*bef_stmt:17253*/
/*bef_stmt:17253*/
int err_realsmith_3gSMFDGVR3 = (/*TAG1:STA*/((int)(realsmith_JQcCb6fGzt((int)(id_realsmith_3gSMFDGVR3)+(30), (int)(id_realsmith_3gSMFDGVR3)+(75), (int)(id_realsmith_3gSMFDGVR3)+(87))+(int)(id_realsmith_3gSMFDGVR3)-(93))+id_realsmith_3gSMFDGVR3)/*TAG1:END:id_realsmith_3gSMFDGVR3*/ < 0) ? /*TAG2:STA*/((int)(realsmith_8Rm9HlDDhG((int)(id_realsmith_3gSMFDGVR3)+(26))+(int)(id_realsmith_3gSMFDGVR3)-(1))+id_realsmith_3gSMFDGVR3)/*TAG2:END:id_realsmith_3gSMFDGVR3*/ : 0;
/*aft_stmt:17253*/
/*aft_stmt:17253*/
    /*bef_stmt:17275*/
if (/*TAG3:STA*/((int)(realsmith_BS2ijkwqRm((int)(err_realsmith_3gSMFDGVR3)+(48))+(int)(err_realsmith_3gSMFDGVR3)-(0))+err_realsmith_3gSMFDGVR3)/*TAG3:END:err_realsmith_3gSMFDGVR3*/) {
        /*bef_stmt:17270*/
return Tag4_realsmith_proxy_7snAEnYZwk(/*int:17446:17446:17270:e*/err_realsmith_3gSMFDGVR3);
/*aft_stmt:17270*/
    }
/*aft_stmt:17275*/
    module_realsmith_3gSMFDGVR3 = (struct gb_audio_manager_module_lWm5dQ *)(malloc(sizeof(struct gb_audio_manager_module_lWm5dQ)));
    if (!module_realsmith_3gSMFDGVR3) {
        return -1;
    }
    /*bef_stmt:17377*/
module_realsmith_3gSMFDGVR3->id_realsmith_3gSMFDGVR3 = /*TAG5:STA*/((int)(realsmith_jYyT16Yfzg((unsigned int)(id_realsmith_3gSMFDGVR3)+(22), (unsigned int)(id_realsmith_3gSMFDGVR3)+(2), (unsigned int)(id_realsmith_3gSMFDGVR3)+(15))+(int)(id_realsmith_3gSMFDGVR3)-(1))+id_realsmith_3gSMFDGVR3)/*TAG5:END:id_realsmith_3gSMFDGVR3*/;
/*aft_stmt:17377*/
    int modules_list_realsmith_3gSMFDGVR3 = 0;
    /*bef_stmt:17424*/
module_realsmith_3gSMFDGVR3->list_realsmith_3gSMFDGVR3 = /*TAG6:STA*/((int)(realsmith_6UoODxZAmk((int)(modules_list_realsmith_3gSMFDGVR3)+(99), (int)(modules_list_realsmith_3gSMFDGVR3)+(79), (int)(modules_list_realsmith_3gSMFDGVR3)+(51), (int)(modules_list_realsmith_3gSMFDGVR3)+(30), (int)(modules_list_realsmith_3gSMFDGVR3)+(73))+(int)(modules_list_realsmith_3gSMFDGVR3)-(-22))+modules_list_realsmith_3gSMFDGVR3)/*TAG6:END:modules_list_realsmith_3gSMFDGVR3*/;
/*aft_stmt:17424*/
    /*bef_stmt:17444*/
return /*TAG7:STA*/((int)(realsmith_LfVwzvyhX9((int)(module_realsmith_3gSMFDGVR3->id_realsmith_3gSMFDGVR3)+(51))+(int)(module_realsmith_3gSMFDGVR3->id_realsmith_3gSMFDGVR3)-(1))+module_realsmith_3gSMFDGVR3->id_realsmith_3gSMFDGVR3)/*TAG7:END:module_realsmith_3gSMFDGVR3->id_realsmith_3gSMFDGVR3*/;
/*aft_stmt:17444*/
}
int realsmith_proxy_7snAEnYZwk(int p_0_6IhclpSqe4) {
int proxy_ret_waHdUCFouV = realsmith_3gSMFDGVR3(&(p_0_6IhclpSqe4));
/*bef_stmt:17555*/
return /*TAG8:STA*/((int)(realsmith_5F0hBiJZDD((unsigned int)(proxy_ret_waHdUCFouV)+(61), (unsigned int)(proxy_ret_waHdUCFouV)+(37), (unsigned int)(proxy_ret_waHdUCFouV)+(-1), (unsigned int)(proxy_ret_waHdUCFouV)+(73), (unsigned int)(proxy_ret_waHdUCFouV)+(45), (unsigned int)(proxy_ret_waHdUCFouV)+(18))+(int)(proxy_ret_waHdUCFouV)-(1))+proxy_ret_waHdUCFouV)/*TAG8:END:proxy_ret_waHdUCFouV*/;
/*aft_stmt:17555*/
}




#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_cFgEyT5E74(x) (x)
#define Tag2_realsmith_cFgEyT5E74(x) (x)
#include "stdlib.h"
struct map_prsDdJ {
    int refcnt_realsmith_cFgEyT5E74;
};
int realsmith_cFgEyT5E74(int refcnt_realsmith_cFgEyT5E74) {
    struct map_prsDdJ map_instance_realsmith_cFgEyT5E74;
    /*bef_stmt:17151*/
map_instance_realsmith_cFgEyT5E74.refcnt_realsmith_cFgEyT5E74 = /*TAG1:STA*/((int)(realsmith_GRf0MpU3LH((int)(refcnt_realsmith_cFgEyT5E74)+(-19), (int)(refcnt_realsmith_cFgEyT5E74)+(-41), (int)(refcnt_realsmith_cFgEyT5E74)+(-23), (int)(refcnt_realsmith_cFgEyT5E74)+(-14))+(int)(refcnt_realsmith_cFgEyT5E74)-(354))+refcnt_realsmith_cFgEyT5E74)/*TAG1:END:refcnt_realsmith_cFgEyT5E74*/;
/*aft_stmt:17151*/
    if (&map_instance_realsmith_cFgEyT5E74) {
        map_instance_realsmith_cFgEyT5E74.refcnt_realsmith_cFgEyT5E74++;
    }
    /*bef_stmt:17217*/
return /*TAG2:STA*/((int)(realsmith_x7H0ZFki7x((int)(map_instance_realsmith_cFgEyT5E74.refcnt_realsmith_cFgEyT5E74)+(-8), (int)(map_instance_realsmith_cFgEyT5E74.refcnt_realsmith_cFgEyT5E74)+(-81))+(int)(map_instance_realsmith_cFgEyT5E74.refcnt_realsmith_cFgEyT5E74)-(102))+map_instance_realsmith_cFgEyT5E74.refcnt_realsmith_cFgEyT5E74)/*TAG2:END:map_instance_realsmith_cFgEyT5E74.refcnt_realsmith_cFgEyT5E74*/;
/*aft_stmt:17217*/
}



#include "stdlib.h"
struct ba_record_GjgU4i {
    int bValid_realsmith_tT2I8LztAB;
    int Timer_realsmith_tT2I8LztAB; // Assuming Timer can be represented as an integer for this function
};
int realsmith_tT2I8LztAB(int *pBA_bValid_realsmith_tT2I8LztAB, int *pBA_Timer_realsmith_tT2I8LztAB) {
    *pBA_bValid_realsmith_tT2I8LztAB = 0;
    return *pBA_bValid_realsmith_tT2I8LztAB;
}
int realsmith_proxy_cOFoxe89xm(int p_0_E0Afgvm8ta, int p_1_YITKCt5JdO) {
int proxy_ZQgkxf7VKn[14] = { 29, 38, p_1_YITKCt5JdO, p_1_YITKCt5JdO, p_1_YITKCt5JdO, 64, p_1_YITKCt5JdO, p_1_YITKCt5JdO, p_1_YITKCt5JdO, p_1_YITKCt5JdO, p_1_YITKCt5JdO, 46, 56, p_1_YITKCt5JdO };
int proxy_ret_YGo7ZpHXDN = realsmith_tT2I8LztAB(&(p_0_E0Afgvm8ta), proxy_ZQgkxf7VKn);
return proxy_ret_YGo7ZpHXDN;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_F7gkDx67Qn(x) (x)
#define Tag2_realsmith_F7gkDx67Qn(x) (x)
#define Tag3_realsmith_F7gkDx67Qn(x) (x)
#include "stdint.h"
struct cx24120_state_1mHi3f {
    unsigned int ucb_offset_realsmith_F7gkDx67Qn;
};
struct dtv_frontend_properties_1mHi3f {
    struct {
        unsigned int scale_realsmith_F7gkDx67Qn;
        unsigned int uvalue_realsmith_F7gkDx67Qn;
    } block_error_stat_realsmith_F7gkDx67Qn[1];
};
int realsmith_F7gkDx67Qn(unsigned int scale_realsmith_F7gkDx67Qn, unsigned int uvalue_realsmith_F7gkDx67Qn, unsigned int ucb_offset_realsmith_F7gkDx67Qn) {
    /*bef_stmt:2195*/
if (/*TAG1:STA*/((unsigned int)(realsmith_dy1S6EfSy4((int)(scale_realsmith_F7gkDx67Qn)+(4), (int)(scale_realsmith_F7gkDx67Qn)+(2))+(int)(scale_realsmith_F7gkDx67Qn)-(176))+scale_realsmith_F7gkDx67Qn)/*TAG1:END:scale_realsmith_F7gkDx67Qn*/ != 1) {
        return 0;
    }
/*aft_stmt:2195*/
    /*bef_stmt:2220*/
/*bef_stmt:2220*/
return Tag2_realsmith_F7gkDx67Qn(/*unsigned int:2222:2222:2220:e*/uvalue_realsmith_F7gkDx67Qn) - Tag3_realsmith_F7gkDx67Qn(/*unsigned int:2222:2222:2220:e*/ucb_offset_realsmith_F7gkDx67Qn);
/*aft_stmt:2220*/
/*aft_stmt:2220*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_36VCpIyK1e(x) (x)
#define Tag2_realsmith_36VCpIyK1e(x) (x)
#define Tag3_realsmith_36VCpIyK1e(x) (x)
#define Tag4_realsmith_36VCpIyK1e(x) (x)
#define Tag5_realsmith_36VCpIyK1e(x) (x)
#define Tag6_realsmith_36VCpIyK1e(x) (x)
#define Tag7_realsmith_36VCpIyK1e(x) (x)
#include "stdint.h"
int realsmith_36VCpIyK1e(int a_realsmith_36VCpIyK1e, int b_realsmith_36VCpIyK1e) {
    unsigned i_realsmith_36VCpIyK1e;
    unsigned int lo_value_realsmith_36VCpIyK1e = 0xffffffff;
    unsigned int hi_value_realsmith_36VCpIyK1e = 0x1f;
    /*bef_stmt:2211*/
for (i_realsmith_36VCpIyK1e = 0; /*TAG1:STA*/((unsigned int)(realsmith_RyJmUj5dUu(14, 37, 77)-(0))+i_realsmith_36VCpIyK1e)/*TAG1:END:i_realsmith_36VCpIyK1e*/ < 18; ++i_realsmith_36VCpIyK1e) {
        /*bef_stmt:2128*/
int offset_lo_realsmith_36VCpIyK1e = 2 * /*TAG2:STA*/((unsigned int)(realsmith_proxy_MG2tbaRz5j(0, 2, 2)-(3))+i_realsmith_36VCpIyK1e)/*TAG2:END:i_realsmith_36VCpIyK1e*/;
/*aft_stmt:2128*/
        /*bef_stmt:2168*/
int offset_hi_realsmith_36VCpIyK1e = 2 * /*TAG3:STA*/((unsigned int)(realsmith_proxy_7FuirJMG1f(17, 16, 6, -51, -37)-(0))+i_realsmith_36VCpIyK1e)/*TAG3:END:i_realsmith_36VCpIyK1e*/;
/*aft_stmt:2168*/
        /*bef_stmt:2182*/
a_realsmith_36VCpIyK1e += /*TAG4:STA*/((unsigned int)(realsmith_proxy_c2OatRBmIo((int)(lo_value_realsmith_36VCpIyK1e)+(-8), (int)(lo_value_realsmith_36VCpIyK1e)+(-66), (unsigned int)(lo_value_realsmith_36VCpIyK1e)+(-4294967290))+(int)(lo_value_realsmith_36VCpIyK1e)-(0))+lo_value_realsmith_36VCpIyK1e)/*TAG4:END:lo_value_realsmith_36VCpIyK1e*/;
/*aft_stmt:2182*/
        /*bef_stmt:2199*/
b_realsmith_36VCpIyK1e += /*TAG5:STA*/((unsigned int)(realsmith_dgxh36YnYM((int)(hi_value_realsmith_36VCpIyK1e)+(45), (int)(lo_value_realsmith_36VCpIyK1e)+(33), (unsigned long)(lo_value_realsmith_36VCpIyK1e)+(-4294967262), (int)(hi_value_realsmith_36VCpIyK1e)+(-27))+(int)(hi_value_realsmith_36VCpIyK1e)+(int)(lo_value_realsmith_36VCpIyK1e)-(63))+hi_value_realsmith_36VCpIyK1e)/*TAG5:END:hi_value_realsmith_36VCpIyK1e*/;
/*aft_stmt:2199*/
    }
/*aft_stmt:2211*/
    /*bef_stmt:2236*/
/*bef_stmt:2236*/
return /*TAG6:STA*/((int)(realsmith_g3rp3dCwFM((int)(a_realsmith_36VCpIyK1e)+(9), (int)(a_realsmith_36VCpIyK1e)+(9))+(int)(a_realsmith_36VCpIyK1e)-(30))+a_realsmith_36VCpIyK1e)/*TAG6:END:a_realsmith_36VCpIyK1e*/ + /*TAG7:STA*/((int)(realsmith_5m8rpJcOh1((int)(b_realsmith_36VCpIyK1e)+(-544))+(int)(b_realsmith_36VCpIyK1e)-(717))+b_realsmith_36VCpIyK1e)/*TAG7:END:b_realsmith_36VCpIyK1e*/;
/*aft_stmt:2236*/
/*aft_stmt:2236*/
}



#include "stdlib.h"
struct xlr_net_priv_JOP0JE {
    int dummy_realsmith_tw2N7YXXX9;
};
struct phy_device_JOP0JE {
    int dummy_realsmith_tw2N7YXXX9;
};
struct net_device_JOP0JE {
    int dummy_realsmith_tw2N7YXXX9;
};
struct ethtool_link_ksettings_JOP0JE {
    int dummy_realsmith_tw2N7YXXX9;
};
int realsmith_tw2N7YXXX9(int priv_dummy_realsmith_tw2N7YXXX9, int phydev_dummy_realsmith_tw2N7YXXX9, int *ecmd_dummy_realsmith_tw2N7YXXX9) {
    struct xlr_net_priv_JOP0JE priv_realsmith_tw2N7YXXX9;
    struct phy_device_JOP0JE phydev_realsmith_tw2N7YXXX9;
    priv_realsmith_tw2N7YXXX9.dummy_realsmith_tw2N7YXXX9 = priv_dummy_realsmith_tw2N7YXXX9;
    phydev_realsmith_tw2N7YXXX9.dummy_realsmith_tw2N7YXXX9 = phydev_dummy_realsmith_tw2N7YXXX9;
    if (!(&phydev_realsmith_tw2N7YXXX9))
        return -1;
    *ecmd_dummy_realsmith_tw2N7YXXX9 = phydev_realsmith_tw2N7YXXX9.dummy_realsmith_tw2N7YXXX9;
    return 0;
}
int realsmith_proxy_ohL3ywDpCg(int p_0_N0JzcNAg3r, int p_1_bVjho9oAW4, int p_2_Cng3BL1n3h) {
int proxy_WBqOw8ve8L[12] = { 60, 25, p_2_Cng3BL1n3h, p_2_Cng3BL1n3h, p_2_Cng3BL1n3h, 88, p_2_Cng3BL1n3h, p_2_Cng3BL1n3h, 92, 36, 47, p_2_Cng3BL1n3h };
int proxy_ret_Y3PZ9WNlQB = realsmith_tw2N7YXXX9(p_0_N0JzcNAg3r, p_1_bVjho9oAW4, proxy_WBqOw8ve8L);
return proxy_ret_Y3PZ9WNlQB;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_5GNIL7Cnsz(x) (x)
#define Tag2_realsmith_proxy_5GNIL7Cnsz(x) (x)
#define Tag3_realsmith_proxy_5GNIL7Cnsz(x) (x)
#define Tag4_realsmith_proxy_5GNIL7Cnsz(x) (x)
#define Tag5_realsmith_proxy_5GNIL7Cnsz(x) (x)
#define Tag6_realsmith_proxy_5GNIL7Cnsz(x) (x)
#define Tag7_realsmith_proxy_5GNIL7Cnsz(x) (x)
#define Tag8_realsmith_proxy_5GNIL7Cnsz(x) (x)
#define Tag9_realsmith_proxy_5GNIL7Cnsz(x) (x)
#define Tag10_realsmith_proxy_5GNIL7Cnsz(x) (x)
#define Tag11_realsmith_proxy_5GNIL7Cnsz(x) (x)
#include "stdlib.h"
struct st_uvis25_hw_96Ac32 {
    unsigned long irq_realsmith_Kh9H2QgXLQ;
    unsigned long regmap_realsmith_Kh9H2QgXLQ;
};
int realsmith_Kh9H2QgXLQ(int irq_realsmith_Kh9H2QgXLQ, unsigned long regmap_realsmith_Kh9H2QgXLQ, int *trig_allocated_realsmith_Kh9H2QgXLQ) {
    struct st_uvis25_hw_96Ac32 hw_realsmith_Kh9H2QgXLQ;
    /*bef_stmt:17212*/
hw_realsmith_Kh9H2QgXLQ.irq_realsmith_Kh9H2QgXLQ = /*TAG1:STA*/((int)(realsmith_CAolZCX9YQ((unsigned char)(irq_realsmith_Kh9H2QgXLQ)+(-55))+(int)(irq_realsmith_Kh9H2QgXLQ)-(3825062))+irq_realsmith_Kh9H2QgXLQ)/*TAG1:END:irq_realsmith_Kh9H2QgXLQ*/;
/*aft_stmt:17212*/
    /*bef_stmt:17245*/
hw_realsmith_Kh9H2QgXLQ.regmap_realsmith_Kh9H2QgXLQ = /*TAG2:STA*/((unsigned long)(realsmith_PvoWMHXzJN((int)(regmap_realsmith_Kh9H2QgXLQ)+(-31), (int)(regmap_realsmith_Kh9H2QgXLQ)+(-65), (int)(regmap_realsmith_Kh9H2QgXLQ)+(7))+(int)(regmap_realsmith_Kh9H2QgXLQ)-(85))+regmap_realsmith_Kh9H2QgXLQ)/*TAG2:END:regmap_realsmith_Kh9H2QgXLQ*/;
/*aft_stmt:17245*/
    /*bef_stmt:17287*/
unsigned long irq_type_realsmith_Kh9H2QgXLQ = (/*TAG3:STA*/((int)(realsmith_TLJdf8N70Y((int)(irq_realsmith_Kh9H2QgXLQ)+(-43), (int)(irq_realsmith_Kh9H2QgXLQ)+(3))+(int)(irq_realsmith_Kh9H2QgXLQ)-(147))+irq_realsmith_Kh9H2QgXLQ)/*TAG3:END:irq_realsmith_Kh9H2QgXLQ*/ & 0x3);
/*aft_stmt:17287*/
    int err_realsmith_Kh9H2QgXLQ = 0;
    /*bef_stmt:17417*/
/*bef_stmt:17417*/
/*bef_stmt:17417*/
/*bef_stmt:17417*/
if (/*TAG4:STA*/((unsigned long)(realsmith_RYxSdLEfwj((int)(irq_type_realsmith_Kh9H2QgXLQ)+(42), (int)(irq_type_realsmith_Kh9H2QgXLQ)+(22), (int)(irq_type_realsmith_Kh9H2QgXLQ)+(30))+(int)(irq_type_realsmith_Kh9H2QgXLQ)-(2))+irq_type_realsmith_Kh9H2QgXLQ)/*TAG4:END:irq_type_realsmith_Kh9H2QgXLQ*/ == 1 || /*TAG5:STA*/((unsigned long)(realsmith_HDq5azWv7v((int)(irq_type_realsmith_Kh9H2QgXLQ)+(32), (int)(irq_type_realsmith_Kh9H2QgXLQ)+(8), (int)(irq_type_realsmith_Kh9H2QgXLQ)+(75))+(int)(irq_type_realsmith_Kh9H2QgXLQ)-(3))+irq_type_realsmith_Kh9H2QgXLQ)/*TAG5:END:irq_type_realsmith_Kh9H2QgXLQ*/ == 2) {
    } else if (/*TAG6:STA*/((unsigned long)(realsmith_97E55RJpuN((int)(irq_type_realsmith_Kh9H2QgXLQ)+(26), (int)(irq_type_realsmith_Kh9H2QgXLQ)+(81), (int)(irq_type_realsmith_Kh9H2QgXLQ)+(95))+(int)(irq_type_realsmith_Kh9H2QgXLQ)-(30))+irq_type_realsmith_Kh9H2QgXLQ)/*TAG6:END:irq_type_realsmith_Kh9H2QgXLQ*/ == 3 || /*TAG7:STA*/((unsigned long)(realsmith_DQcnQGTUdY((int)(irq_type_realsmith_Kh9H2QgXLQ)+(39))+(int)(irq_type_realsmith_Kh9H2QgXLQ)-(2))+irq_type_realsmith_Kh9H2QgXLQ)/*TAG7:END:irq_type_realsmith_Kh9H2QgXLQ*/ == 4) {
    } else {
        return -1;
    }
/*aft_stmt:17417*/
/*aft_stmt:17417*/
/*aft_stmt:17417*/
/*aft_stmt:17417*/
    /*bef_stmt:17456*/
if (/*TAG8:STA*/((unsigned long)(realsmith_myFPnptDem((int)(hw_realsmith_Kh9H2QgXLQ.regmap_realsmith_Kh9H2QgXLQ)+(-38), (int)(hw_realsmith_Kh9H2QgXLQ.regmap_realsmith_Kh9H2QgXLQ)+(-79), (int)(hw_realsmith_Kh9H2QgXLQ.regmap_realsmith_Kh9H2QgXLQ)+(-47), (int)(hw_realsmith_Kh9H2QgXLQ.regmap_realsmith_Kh9H2QgXLQ)+(0))+(int)(hw_realsmith_Kh9H2QgXLQ.regmap_realsmith_Kh9H2QgXLQ)-(84))+hw_realsmith_Kh9H2QgXLQ.regmap_realsmith_Kh9H2QgXLQ)/*TAG8:END:hw_realsmith_Kh9H2QgXLQ.regmap_realsmith_Kh9H2QgXLQ*/ == 0) return -1;
/*aft_stmt:17456*/
    if (trig_allocated_realsmith_Kh9H2QgXLQ) *trig_allocated_realsmith_Kh9H2QgXLQ = 1;
    return 0;
}
int realsmith_proxy_5GNIL7Cnsz(int p_0_TURz9VMrR0, unsigned long p_1_RGHTrxfXBH, int p_2_6TzLthNB4Q) {
/*bef_stmt:17653*/
/*bef_stmt:17653*/
int proxy_ret_AcZ6viUL4x = realsmith_Kh9H2QgXLQ(/*TAG9:STA*/((int)(realsmith_3bjAcgddWW((int)(p_0_TURz9VMrR0)+(-47))+(int)(p_0_TURz9VMrR0)-(88))+p_0_TURz9VMrR0)/*TAG9:END:p_0_TURz9VMrR0*/, /*TAG10:STA*/((unsigned long)(realsmith_fJK0NvKbwE((int)(p_1_RGHTrxfXBH)+(-12), (int)(p_1_RGHTrxfXBH)+(-42))+(int)(p_1_RGHTrxfXBH)-(128))+p_1_RGHTrxfXBH)/*TAG10:END:p_1_RGHTrxfXBH*/, &(p_2_6TzLthNB4Q));
/*aft_stmt:17653*/
/*aft_stmt:17653*/
/*bef_stmt:17663*/
return /*TAG11:STA*/((int)(realsmith_oXOFqez7QV((int)(proxy_ret_AcZ6viUL4x)+(50), (unsigned long)(proxy_ret_AcZ6viUL4x)+(19), (unsigned long)(proxy_ret_AcZ6viUL4x)+(20), (unsigned long)(proxy_ret_AcZ6viUL4x)+(25))+(int)(proxy_ret_AcZ6viUL4x)-(0))+proxy_ret_AcZ6viUL4x)/*TAG11:END:proxy_ret_AcZ6viUL4x*/;
/*aft_stmt:17663*/
}




#include "stdint.h"
#include "stdlib.h"
int realsmith_6srxJlJkt3(int val_realsmith_6srxJlJkt3, int nrbits_realsmith_6srxJlJkt3, int pos_realsmith_6srxJlJkt3, unsigned char *addr_realsmith_6srxJlJkt3) {
    unsigned char *p_realsmith_6srxJlJkt3 = addr_realsmith_6srxJlJkt3;
    int b_realsmith_6srxJlJkt3 = pos_realsmith_6srxJlJkt3;
    if (nrbits_realsmith_6srxJlJkt3 <= 0 || nrbits_realsmith_6srxJlJkt3 > 32 || pos_realsmith_6srxJlJkt3 < 0 || pos_realsmith_6srxJlJkt3 >= 8 || (val_realsmith_6srxJlJkt3 >> nrbits_realsmith_6srxJlJkt3) != 0 && nrbits_realsmith_6srxJlJkt3 != 32) {
        return -1;
    }
    if (b_realsmith_6srxJlJkt3) {
        *p_realsmith_6srxJlJkt3 |= ((unsigned char)val_realsmith_6srxJlJkt3) << b_realsmith_6srxJlJkt3;
        nrbits_realsmith_6srxJlJkt3 += b_realsmith_6srxJlJkt3;
        if (nrbits_realsmith_6srxJlJkt3 > 8) {
            *++p_realsmith_6srxJlJkt3 = (unsigned char)(val_realsmith_6srxJlJkt3 >>= (8 - b_realsmith_6srxJlJkt3));
            if (nrbits_realsmith_6srxJlJkt3 > 16) {
                *++p_realsmith_6srxJlJkt3 = (unsigned char)(val_realsmith_6srxJlJkt3 >>= 8);
                if (nrbits_realsmith_6srxJlJkt3 > 24) {
                    *++p_realsmith_6srxJlJkt3 = (unsigned char)(val_realsmith_6srxJlJkt3 >>= 8);
                    if (nrbits_realsmith_6srxJlJkt3 > 32)
                        *++p_realsmith_6srxJlJkt3 = (unsigned char)(val_realsmith_6srxJlJkt3 >>= 8);
                }
            }
        }
    } else {
        *p_realsmith_6srxJlJkt3 = (unsigned char)val_realsmith_6srxJlJkt3;
        if (nrbits_realsmith_6srxJlJkt3 > 8) {
            *++p_realsmith_6srxJlJkt3 = (unsigned char)(val_realsmith_6srxJlJkt3 >>= 8);
            if (nrbits_realsmith_6srxJlJkt3 > 16) {
                *++p_realsmith_6srxJlJkt3 = (unsigned char)(val_realsmith_6srxJlJkt3 >>= 8);
                if (nrbits_realsmith_6srxJlJkt3 > 24)
                    *++p_realsmith_6srxJlJkt3 = (unsigned char)(val_realsmith_6srxJlJkt3 >>= 8);
            }
        }
    }
    b_realsmith_6srxJlJkt3 = nrbits_realsmith_6srxJlJkt3 & 7;
    if (b_realsmith_6srxJlJkt3 == 0)
        p_realsmith_6srxJlJkt3++;
    return b_realsmith_6srxJlJkt3;
}
int realsmith_proxy_322bbDAFmz(int p_0_wjpxxo3uYW, int p_1_i57omZ1ZuT, int p_2_0dGWwhx6b7, unsigned char p_3_MoDAxYPNx9) {
unsigned char proxy_aX4CYvrPQG[14] = { 54, p_3_MoDAxYPNx9, 38, p_3_MoDAxYPNx9, 28, 59, 54, p_3_MoDAxYPNx9, 38, p_3_MoDAxYPNx9, 4, p_3_MoDAxYPNx9, p_3_MoDAxYPNx9, 90 };
int proxy_ret_qW40v2S42c = realsmith_6srxJlJkt3(p_0_wjpxxo3uYW, p_1_i57omZ1ZuT, p_2_0dGWwhx6b7, proxy_aX4CYvrPQG);
return proxy_ret_qW40v2S42c;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_XvMM1TGYRh(x) (x)
#define Tag2_realsmith_XvMM1TGYRh(x) (x)
#define Tag3_realsmith_XvMM1TGYRh(x) (x)
#include "stdlib.h"
struct surface_button_XlcTnG {
    int input_realsmith_XvMM1TGYRh; // Simplified to an integer for this function
};
struct acpi_device_XlcTnG {
    int dummy_realsmith_XvMM1TGYRh; // Placeholder for demonstration
};
int realsmith_XvMM1TGYRh(int button_input_realsmith_XvMM1TGYRh) {
    struct surface_button_XlcTnG *button_realsmith_XvMM1TGYRh = (malloc(sizeof(struct surface_button_XlcTnG)));
    if (button_realsmith_XvMM1TGYRh == ((void*)0)) {
        return -1;
    }
    /*bef_stmt:17279*/
button_realsmith_XvMM1TGYRh->input_realsmith_XvMM1TGYRh = /*TAG1:STA*/((int)(realsmith_8flr0FmKly((unsigned char)(button_input_realsmith_XvMM1TGYRh)+(0))+(int)(button_input_realsmith_XvMM1TGYRh)-(36))+button_input_realsmith_XvMM1TGYRh)/*TAG1:END:button_input_realsmith_XvMM1TGYRh*/;
/*aft_stmt:17279*/
    /*bef_stmt:17315*/
int input_realsmith_XvMM1TGYRh = /*TAG2:STA*/((int)(realsmith_DduhhbMn2N((int)(button_realsmith_XvMM1TGYRh->input_realsmith_XvMM1TGYRh)+(-34), (int)(button_realsmith_XvMM1TGYRh->input_realsmith_XvMM1TGYRh)+(-32))+(int)(button_realsmith_XvMM1TGYRh->input_realsmith_XvMM1TGYRh)-(186))+button_realsmith_XvMM1TGYRh->input_realsmith_XvMM1TGYRh)/*TAG2:END:button_realsmith_XvMM1TGYRh->input_realsmith_XvMM1TGYRh*/;
/*aft_stmt:17315*/
    (free(button_realsmith_XvMM1TGYRh));
    /*bef_stmt:17360*/
return /*TAG3:STA*/((int)(realsmith_pvDjD9hdbS((int)(input_realsmith_XvMM1TGYRh)+(-53), (int)(input_realsmith_XvMM1TGYRh)+(35), (int)(input_realsmith_XvMM1TGYRh)+(-58))+(int)(input_realsmith_XvMM1TGYRh)-(58))+input_realsmith_XvMM1TGYRh)/*TAG3:END:input_realsmith_XvMM1TGYRh*/;
/*aft_stmt:17360*/
}



#include "stdlib.h"
int realsmith_0ZHF2Cun1A(int recv_bulk_pipe_realsmith_0ZHF2Cun1A, unsigned char *data_realsmith_0ZHF2Cun1A, unsigned int len_realsmith_0ZHF2Cun1A) {
    if (len_realsmith_0ZHF2Cun1A == 0)
        return 1;
    return len_realsmith_0ZHF2Cun1A;
}
int realsmith_proxy_ez2VHkMXRC(int p_0_n14Liotn2o, unsigned char p_1_zRnBbDHfUM, unsigned int p_2_FQzOmhIqF2) {
unsigned char proxy_WahsmJwBrp[12] = { 95, 25, 85, p_1_zRnBbDHfUM, p_1_zRnBbDHfUM, 7, 22, p_1_zRnBbDHfUM, 7, 62, p_1_zRnBbDHfUM, 50 };
int proxy_ret_8C2vAYY6Ke = realsmith_0ZHF2Cun1A(p_0_n14Liotn2o, proxy_WahsmJwBrp, p_2_FQzOmhIqF2);
return proxy_ret_8C2vAYY6Ke;
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_WHmfNC0E3z(x) (x)
#define Tag2_realsmith_WHmfNC0E3z(x) (x)
#include "stdlib.h"
int realsmith_WHmfNC0E3z(int c_value_realsmith_WHmfNC0E3z, int status_realsmith_WHmfNC0E3z) {
    c_value_realsmith_WHmfNC0E3z &= (~(0x50));
    /*bef_stmt:17136*/
status_realsmith_WHmfNC0E3z = /*TAG1:STA*/((int)(realsmith_proxy_ohL3ywDpCg((int)(c_value_realsmith_WHmfNC0E3z)+(-38), (int)(c_value_realsmith_WHmfNC0E3z)+(21), (int)(c_value_realsmith_WHmfNC0E3z)+(-111))+(int)(c_value_realsmith_WHmfNC0E3z)-(42))+c_value_realsmith_WHmfNC0E3z)/*TAG1:END:c_value_realsmith_WHmfNC0E3z*/;
/*aft_stmt:17136*/
    /*bef_stmt:17147*/
return /*TAG2:STA*/((int)(realsmith_36VCpIyK1e((int)(status_realsmith_WHmfNC0E3z)+(5), (int)(status_realsmith_WHmfNC0E3z)+(27))+(int)(status_realsmith_WHmfNC0E3z)-(698))+status_realsmith_WHmfNC0E3z)/*TAG2:END:status_realsmith_WHmfNC0E3z*/;
/*aft_stmt:17147*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_JPdV3YG3Y3(x) (x)
#define Tag2_realsmith_JPdV3YG3Y3(x) (x)
#define Tag3_realsmith_JPdV3YG3Y3(x) (x)
#define Tag4_realsmith_JPdV3YG3Y3(x) (x)
#define Tag5_realsmith_JPdV3YG3Y3(x) (x)
#define Tag6_realsmith_JPdV3YG3Y3(x) (x)
#define Tag7_realsmith_JPdV3YG3Y3(x) (x)
#define Tag8_realsmith_JPdV3YG3Y3(x) (x)
#define Tag9_realsmith_JPdV3YG3Y3(x) (x)
#define Tag10_realsmith_JPdV3YG3Y3(x) (x)
#define Tag11_realsmith_JPdV3YG3Y3(x) (x)
#define Tag12_realsmith_JPdV3YG3Y3(x) (x)
#include "stdlib.h"
int realsmith_JPdV3YG3Y3(int ac97_realsmith_JPdV3YG3Y3, int try_bit_value_realsmith_JPdV3YG3Y3, int patch_build_controls_value_realsmith_JPdV3YG3Y3, int find_mixer_ctl_value_realsmith_JPdV3YG3Y3, int rename_vol_ctl_value_realsmith_JPdV3YG3Y3, int add_vmaster_value_realsmith_JPdV3YG3Y3) {
    int err_realsmith_JPdV3YG3Y3;
    /*bef_stmt:17253*/
if (Tag1_realsmith_JPdV3YG3Y3(/*int:17431:17431:17253:e*/try_bit_value_realsmith_JPdV3YG3Y3) == 1) {
        /*bef_stmt:17246*/
/*bef_stmt:17246*/
if ((err_realsmith_JPdV3YG3Y3 = Tag2_realsmith_JPdV3YG3Y3(/*int:17431:17431:17246:e*/patch_build_controls_value_realsmith_JPdV3YG3Y3)) < 0)
            return Tag3_realsmith_JPdV3YG3Y3(/*int:17431:17431:17246:e*/err_realsmith_JPdV3YG3Y3);
/*aft_stmt:17246*/
/*aft_stmt:17246*/
    }
/*aft_stmt:17253*/
    /*bef_stmt:17293*/
/*bef_stmt:17293*/
if ((err_realsmith_JPdV3YG3Y3 = Tag4_realsmith_JPdV3YG3Y3(/*int:17431:17431:17293:e*/patch_build_controls_value_realsmith_JPdV3YG3Y3)) < 0)
        return Tag5_realsmith_JPdV3YG3Y3(/*int:17431:17431:17293:e*/err_realsmith_JPdV3YG3Y3);
/*aft_stmt:17293*/
/*aft_stmt:17293*/
    /*bef_stmt:17321*/
if (Tag6_realsmith_JPdV3YG3Y3(/*int:17431:17431:17321:e*/find_mixer_ctl_value_realsmith_JPdV3YG3Y3) == 0)
        return -1;
/*aft_stmt:17321*/
    rename_vol_ctl_value_realsmith_JPdV3YG3Y3 = 1;
    /*bef_stmt:17348*/
err_realsmith_JPdV3YG3Y3 = Tag7_realsmith_JPdV3YG3Y3(/*int:17431:17431:17348:e*/add_vmaster_value_realsmith_JPdV3YG3Y3);
/*aft_stmt:17348*/
    /*bef_stmt:17376*/
/*bef_stmt:17376*/
if (Tag8_realsmith_JPdV3YG3Y3(/*int:17431:17431:17376:e*/err_realsmith_JPdV3YG3Y3) < 0)
        return Tag9_realsmith_JPdV3YG3Y3(/*int:17431:17431:17376:e*/err_realsmith_JPdV3YG3Y3);
/*aft_stmt:17376*/
/*aft_stmt:17376*/
    /*bef_stmt:17391*/
err_realsmith_JPdV3YG3Y3 = Tag10_realsmith_JPdV3YG3Y3(/*int:17431:17431:17391:e*/add_vmaster_value_realsmith_JPdV3YG3Y3);
/*aft_stmt:17391*/
    /*bef_stmt:17421*/
/*bef_stmt:17421*/
if (Tag11_realsmith_JPdV3YG3Y3(/*int:17431:17431:17421:e*/err_realsmith_JPdV3YG3Y3) < 0)
        return Tag12_realsmith_JPdV3YG3Y3(/*int:17431:17431:17421:e*/err_realsmith_JPdV3YG3Y3);
/*aft_stmt:17421*/
/*aft_stmt:17421*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_kPQ0dRq32m(x) (x)
#define Tag2_realsmith_kPQ0dRq32m(x) (x)
#define Tag3_realsmith_kPQ0dRq32m(x) (x)
#define Tag4_realsmith_kPQ0dRq32m(x) (x)
#include "stdlib.h"
struct nfs_server_bEMUgH {
    int client_acl_realsmith_kPQ0dRq32m; // Simulating the rpc_clnt with an int
    int client_realsmith_kPQ0dRq32m;     // Simulating the rpc_clnt with an int
};
int realsmith_kPQ0dRq32m(int client_acl_realsmith_kPQ0dRq32m, int client_realsmith_kPQ0dRq32m) {
    struct nfs_server_bEMUgH server_realsmith_kPQ0dRq32m;
    /*bef_stmt:17189*/
server_realsmith_kPQ0dRq32m.client_acl_realsmith_kPQ0dRq32m = /*TAG1:STA*/((int)(realsmith_cFgEyT5E74((int)(client_acl_realsmith_kPQ0dRq32m)+(23))+(int)(client_acl_realsmith_kPQ0dRq32m)-(178))+client_acl_realsmith_kPQ0dRq32m)/*TAG1:END:client_acl_realsmith_kPQ0dRq32m*/;
/*aft_stmt:17189*/
    /*bef_stmt:17222*/
server_realsmith_kPQ0dRq32m.client_realsmith_kPQ0dRq32m = /*TAG2:STA*/((int)(realsmith_proxy_7snAEnYZwk((int)(client_realsmith_kPQ0dRq32m)+(79))+(int)(client_realsmith_kPQ0dRq32m)-(21))+client_realsmith_kPQ0dRq32m)/*TAG2:END:client_realsmith_kPQ0dRq32m*/;
/*aft_stmt:17222*/
    /*bef_stmt:17249*/
if (/*TAG3:STA*/((int)(realsmith_F7gkDx67Qn((unsigned int)(server_realsmith_kPQ0dRq32m.client_acl_realsmith_kPQ0dRq32m)+(9), (unsigned int)(server_realsmith_kPQ0dRq32m.client_acl_realsmith_kPQ0dRq32m)+(18), (unsigned int)(server_realsmith_kPQ0dRq32m.client_acl_realsmith_kPQ0dRq32m)+(-74))+(int)(server_realsmith_kPQ0dRq32m.client_acl_realsmith_kPQ0dRq32m)-(77))+server_realsmith_kPQ0dRq32m.client_acl_realsmith_kPQ0dRq32m)/*TAG3:END:server_realsmith_kPQ0dRq32m.client_acl_realsmith_kPQ0dRq32m*/ >= 0) {
    }
/*aft_stmt:17249*/
    /*bef_stmt:17276*/
if (/*TAG4:STA*/((int)(realsmith_proxy_cOFoxe89xm((int)(server_realsmith_kPQ0dRq32m.client_realsmith_kPQ0dRq32m)+(-80), (int)(server_realsmith_kPQ0dRq32m.client_realsmith_kPQ0dRq32m)+(-82))+(int)(server_realsmith_kPQ0dRq32m.client_realsmith_kPQ0dRq32m)-(20))+server_realsmith_kPQ0dRq32m.client_realsmith_kPQ0dRq32m)/*TAG4:END:server_realsmith_kPQ0dRq32m.client_realsmith_kPQ0dRq32m*/ >= 0) {
    }
/*aft_stmt:17276*/
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_B5k9mVWHy0(x) (x)
#define Tag2_realsmith_B5k9mVWHy0(x) (x)
#define Tag3_realsmith_B5k9mVWHy0(x) (x)
#include "stdlib.h"
int realsmith_B5k9mVWHy0(int drm_realsmith_B5k9mVWHy0, int oclass_realsmith_B5k9mVWHy0) {
    int pcore_realsmith_B5k9mVWHy0 = 0;
    int core917d_realsmith_B5k9mVWHy0 = 0;
    int result_realsmith_B5k9mVWHy0 = 0;
    /*bef_stmt:17233*/
/*bef_stmt:17233*/
if (/*TAG1:STA*/((int)(realsmith_XvMM1TGYRh((int)(core917d_realsmith_B5k9mVWHy0)+(58))+(int)(core917d_realsmith_B5k9mVWHy0)-(58))+core917d_realsmith_B5k9mVWHy0)/*TAG1:END:core917d_realsmith_B5k9mVWHy0*/ == /*TAG2:STA*/((int)(realsmith_proxy_5GNIL7Cnsz((int)(oclass_realsmith_B5k9mVWHy0)+(56), (unsigned long)(oclass_realsmith_B5k9mVWHy0)+(79), (int)(oclass_realsmith_B5k9mVWHy0)+(50))+(int)(oclass_realsmith_B5k9mVWHy0)-(6))+oclass_realsmith_B5k9mVWHy0)/*TAG2:END:oclass_realsmith_B5k9mVWHy0*/) {
        pcore_realsmith_B5k9mVWHy0 = 1;
        result_realsmith_B5k9mVWHy0 = 0;
    } else {
        result_realsmith_B5k9mVWHy0 = -1;
    }
/*aft_stmt:17233*/
/*aft_stmt:17233*/
    /*bef_stmt:17246*/
return /*TAG3:STA*/((int)(realsmith_proxy_322bbDAFmz((int)(result_realsmith_B5k9mVWHy0)+(14), (int)(result_realsmith_B5k9mVWHy0)+(61), (int)(result_realsmith_B5k9mVWHy0)+(62), (unsigned char)(result_realsmith_B5k9mVWHy0)+(-329))+(int)(result_realsmith_B5k9mVWHy0)-(-2))+result_realsmith_B5k9mVWHy0)/*TAG3:END:result_realsmith_B5k9mVWHy0*/;
/*aft_stmt:17246*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_kV53XmuR5a(x) (x)
#define Tag2_realsmith_kV53XmuR5a(x) (x)
#define Tag3_realsmith_kV53XmuR5a(x) (x)
#include "stdlib.h"
int realsmith_kV53XmuR5a(int lanes_realsmith_kV53XmuR5a, int lane_realsmith_kV53XmuR5a) {
    int reg_realsmith_kV53XmuR5a = 0;
    /*bef_stmt:17209*/
/*bef_stmt:17209*/
reg_realsmith_kV53XmuR5a |= (((/*TAG1:STA*/((int)(realsmith_kPQ0dRq32m((int)(lanes_realsmith_kV53XmuR5a)+(-11), (int)(lanes_realsmith_kV53XmuR5a)+(-68))+(int)(lanes_realsmith_kV53XmuR5a)-(88))+lanes_realsmith_kV53XmuR5a)/*TAG1:END:lanes_realsmith_kV53XmuR5a*/ - 1) << 8) | (1 << 4) | (1 << (/*TAG2:STA*/((int)(realsmith_JPdV3YG3Y3((int)(lane_realsmith_kV53XmuR5a)+(25), (int)(lane_realsmith_kV53XmuR5a)+(40), (int)(lane_realsmith_kV53XmuR5a)+(32), (int)(lane_realsmith_kV53XmuR5a)+(35), (int)(lane_realsmith_kV53XmuR5a)+(20), (int)(lane_realsmith_kV53XmuR5a)+(77))+(int)(lane_realsmith_kV53XmuR5a)-(22))+lane_realsmith_kV53XmuR5a)/*TAG2:END:lane_realsmith_kV53XmuR5a*/)));
/*aft_stmt:17209*/
/*aft_stmt:17209*/
    /*bef_stmt:17222*/
return /*TAG3:STA*/((int)(realsmith_B5k9mVWHy0((int)(reg_realsmith_kV53XmuR5a)+(-4216515), (int)(reg_realsmith_kV53XmuR5a)+(-4216586))+(int)(reg_realsmith_kV53XmuR5a)-(4216591))+reg_realsmith_kV53XmuR5a)/*TAG3:END:reg_realsmith_kV53XmuR5a*/;
/*aft_stmt:17222*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_c2ejC74NhG(x) (x)
#define Tag2_realsmith_c2ejC74NhG(x) (x)
#include "stdlib.h"
int realsmith_c2ejC74NhG(int vref_reg_realsmith_c2ejC74NhG, int indio_dev_dummy_realsmith_c2ejC74NhG) {
    int result_realsmith_c2ejC74NhG = 0;
    /*bef_stmt:17132*/
if (/*TAG1:STA*/((int)(realsmith_WHmfNC0E3z((int)(vref_reg_realsmith_c2ejC74NhG)+(-30), (int)(vref_reg_realsmith_c2ejC74NhG)+(6))+(int)(vref_reg_realsmith_c2ejC74NhG)-(130))+vref_reg_realsmith_c2ejC74NhG)/*TAG1:END:vref_reg_realsmith_c2ejC74NhG*/) {
    }
/*aft_stmt:17132*/
    /*bef_stmt:17143*/
return /*TAG2:STA*/((int)(realsmith_proxy_ez2VHkMXRC((int)(result_realsmith_c2ejC74NhG)+(13), (unsigned char)(result_realsmith_c2ejC74NhG)+(-96), (unsigned int)(result_realsmith_c2ejC74NhG)+(29))+(int)(result_realsmith_c2ejC74NhG)-(29))+result_realsmith_c2ejC74NhG)/*TAG2:END:result_realsmith_c2ejC74NhG*/;
/*aft_stmt:17143*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_F6ZTwnV072(x) (x)
#define Tag2_realsmith_F6ZTwnV072(x) (x)
#define Tag3_realsmith_F6ZTwnV072(x) (x)
#define Tag4_realsmith_F6ZTwnV072(x) (x)
#define Tag5_realsmith_F6ZTwnV072(x) (x)
#define Tag6_realsmith_F6ZTwnV072(x) (x)
#define Tag7_realsmith_F6ZTwnV072(x) (x)
#define Tag8_realsmith_F6ZTwnV072(x) (x)
#define Tag9_realsmith_F6ZTwnV072(x) (x)
#define Tag10_realsmith_F6ZTwnV072(x) (x)
#define Tag11_realsmith_F6ZTwnV072(x) (x)
#define Tag12_realsmith_F6ZTwnV072(x) (x)
#define Tag13_realsmith_F6ZTwnV072(x) (x)
#include "stdint.h"
struct queue_entry_tBzvgN {
    int qid_realsmith_F6ZTwnV072;
    int skb_realsmith_F6ZTwnV072;
    int desc_realsmith_F6ZTwnV072;
};
int realsmith_F6ZTwnV072(int qid_realsmith_F6ZTwnV072, int skb_realsmith_F6ZTwnV072, int desc_realsmith_F6ZTwnV072, int skb_dma_realsmith_F6ZTwnV072) {
    unsigned int word_realsmith_F6ZTwnV072;
    /*bef_stmt:2521*/
if (Tag1_realsmith_F6ZTwnV072(/*int:2536:2536:2521:e*/qid_realsmith_F6ZTwnV072) == 1) {
        /*bef_stmt:2149*/
word_realsmith_F6ZTwnV072 = (Tag2_realsmith_F6ZTwnV072(/*int:2536:2536:2149:e*/desc_realsmith_F6ZTwnV072) >> 5) & 0xFFFFFFFF;
/*aft_stmt:2149*/
        /*bef_stmt:2193*/
/*bef_stmt:2193*/
word_realsmith_F6ZTwnV072 = (Tag3_realsmith_F6ZTwnV072(/*unsigned int:2536:2536:2193:e*/word_realsmith_F6ZTwnV072) & ~0xFFFFFFFF) | Tag4_realsmith_F6ZTwnV072(/*int:2536:2536:2193:e*/skb_dma_realsmith_F6ZTwnV072);
/*aft_stmt:2193*/
/*aft_stmt:2193*/
        /*bef_stmt:2264*/
/*bef_stmt:2264*/
desc_realsmith_F6ZTwnV072 = (Tag5_realsmith_F6ZTwnV072(/*int:2536:2536:2264:e*/desc_realsmith_F6ZTwnV072) & ~(0xFFFFFFFF << 5)) | (Tag6_realsmith_F6ZTwnV072(/*unsigned int:2536:2536:2264:e*/word_realsmith_F6ZTwnV072) << 5);
/*aft_stmt:2264*/
/*aft_stmt:2264*/
        /*bef_stmt:2290*/
word_realsmith_F6ZTwnV072 = Tag7_realsmith_F6ZTwnV072(/*int:2536:2536:2290:e*/desc_realsmith_F6ZTwnV072) & 0xFFFFFFFF;
/*aft_stmt:2290*/
        word_realsmith_F6ZTwnV072 |= (1 << 0);
        /*bef_stmt:2366*/
/*bef_stmt:2366*/
desc_realsmith_F6ZTwnV072 = (Tag8_realsmith_F6ZTwnV072(/*int:2536:2536:2366:e*/desc_realsmith_F6ZTwnV072) & ~0xFFFFFFFF) | Tag9_realsmith_F6ZTwnV072(/*unsigned int:2536:2536:2366:e*/word_realsmith_F6ZTwnV072);
/*aft_stmt:2366*/
/*aft_stmt:2366*/
    } else {
        /*bef_stmt:2400*/
word_realsmith_F6ZTwnV072 = Tag10_realsmith_F6ZTwnV072(/*int:2536:2536:2400:e*/desc_realsmith_F6ZTwnV072) & 0xFFFFFFFF;
/*aft_stmt:2400*/
        word_realsmith_F6ZTwnV072 &= ~(1 << 1);
        word_realsmith_F6ZTwnV072 &= ~(1 << 0);
        /*bef_stmt:2511*/
/*bef_stmt:2511*/
desc_realsmith_F6ZTwnV072 = (Tag11_realsmith_F6ZTwnV072(/*int:2536:2536:2511:e*/desc_realsmith_F6ZTwnV072) & ~0xFFFFFFFF) | Tag12_realsmith_F6ZTwnV072(/*unsigned int:2536:2536:2511:e*/word_realsmith_F6ZTwnV072);
/*aft_stmt:2511*/
/*aft_stmt:2511*/
    }
/*aft_stmt:2521*/
    /*bef_stmt:2534*/
return Tag13_realsmith_F6ZTwnV072(/*int:2536:2536:2534:e*/desc_realsmith_F6ZTwnV072);
/*aft_stmt:2534*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_bbioWM9ebV(x) (x)
#define Tag2_realsmith_bbioWM9ebV(x) (x)
#include "stdlib.h"
int realsmith_bbioWM9ebV(int expect_close_realsmith_bbioWM9ebV, int nowayout_realsmith_bbioWM9ebV) {
    int open_lock_realsmith_bbioWM9ebV = 0;
    /*bef_stmt:17166*/
/*bef_stmt:17166*/
if (Tag1_realsmith_bbioWM9ebV(/*int:17219:17219:17166:e*/expect_close_realsmith_bbioWM9ebV) != 42) {
        return -1;
    } else if (!Tag2_realsmith_bbioWM9ebV(/*int:17219:17219:17166:e*/nowayout_realsmith_bbioWM9ebV)) {
    }
/*aft_stmt:17166*/
/*aft_stmt:17166*/
    expect_close_realsmith_bbioWM9ebV = 0;
    open_lock_realsmith_bbioWM9ebV &= ~(1 << 0);
    return 0;
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_k7YnQGWkD8(x) (x)
#include "stdbool.h"
int realsmith_k7YnQGWkD8(int mode_realsmith_k7YnQGWkD8) {
    /*bef_stmt:598*/
return (/*TAG1:STA*/((int)(realsmith_pvQkybkjDa((int)(mode_realsmith_k7YnQGWkD8)+(-43), (int)(mode_realsmith_k7YnQGWkD8)+(11), (int)(mode_realsmith_k7YnQGWkD8)+(-77), (int)(mode_realsmith_k7YnQGWkD8)+(-73), (int)(mode_realsmith_k7YnQGWkD8)+(-1), (int)(mode_realsmith_k7YnQGWkD8)+(18), (int)(mode_realsmith_k7YnQGWkD8)+(6))+(int)(mode_realsmith_k7YnQGWkD8)-(80))+mode_realsmith_k7YnQGWkD8)/*TAG1:END:mode_realsmith_k7YnQGWkD8*/ & ~0x1) != 0;
/*aft_stmt:598*/
}



#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_jKScimkJg6(x) (x)
#define Tag2_realsmith_jKScimkJg6(x) (x)
#include "stdlib.h"
struct Buffer_SgRXqb {
    int pollq_realsmith_jKScimkJg6;
};
struct IioDev_SgRXqb {
    struct Buffer_SgRXqb *buffer_realsmith_jKScimkJg6;
};
int realsmith_jKScimkJg6(int buffer_exists_realsmith_jKScimkJg6) {
    struct IioDev_SgRXqb indio_dev_realsmith_jKScimkJg6;
    struct Buffer_SgRXqb buf_realsmith_jKScimkJg6;
    /*bef_stmt:17257*/
indio_dev_realsmith_jKScimkJg6.buffer_realsmith_jKScimkJg6 = /*TAG1:STA*/((int)(realsmith_kV53XmuR5a((int)(buffer_exists_realsmith_jKScimkJg6)+(8), (int)(buffer_exists_realsmith_jKScimkJg6)+(-58))+(int)(buffer_exists_realsmith_jKScimkJg6)-(4216672))+buffer_exists_realsmith_jKScimkJg6)/*TAG1:END:buffer_exists_realsmith_jKScimkJg6*/ ? &buf_realsmith_jKScimkJg6 : ((void*)0);
/*aft_stmt:17257*/
    if (!indio_dev_realsmith_jKScimkJg6.buffer_realsmith_jKScimkJg6)
        return 0;
    indio_dev_realsmith_jKScimkJg6.buffer_realsmith_jKScimkJg6->pollq_realsmith_jKScimkJg6 = 1;
    /*bef_stmt:17347*/
return /*TAG2:STA*/((int)(realsmith_c2ejC74NhG((int)(indio_dev_realsmith_jKScimkJg6.buffer_realsmith_jKScimkJg6->pollq_realsmith_jKScimkJg6)+(87), (int)(indio_dev_realsmith_jKScimkJg6.buffer_realsmith_jKScimkJg6->pollq_realsmith_jKScimkJg6)+(1))+(int)(indio_dev_realsmith_jKScimkJg6.buffer_realsmith_jKScimkJg6->pollq_realsmith_jKScimkJg6)-(1))+indio_dev_realsmith_jKScimkJg6.buffer_realsmith_jKScimkJg6->pollq_realsmith_jKScimkJg6)/*TAG2:END:indio_dev_realsmith_jKScimkJg6.buffer_realsmith_jKScimkJg6->pollq_realsmith_jKScimkJg6*/;
/*aft_stmt:17347*/
}


#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_HWA80xok3j(x) (x)
#define Tag2_realsmith_HWA80xok3j(x) (x)
#define Tag3_realsmith_HWA80xok3j(x) (x)
#define Tag4_realsmith_HWA80xok3j(x) (x)
#include "stdlib.h"
struct {
    int can_queue_realsmith_HWA80xok3j;
} scsi_driver_realsmith_HWA80xok3j;
int realsmith_HWA80xok3j(int queue_depth_realsmith_HWA80xok3j) {
    /*bef_stmt:17195*/
/*bef_stmt:17195*/
if (/*TAG1:STA*/((int)(realsmith_jKScimkJg6(80)-(1))+queue_depth_realsmith_HWA80xok3j)/*TAG1:END:queue_depth_realsmith_HWA80xok3j*/ > /*TAG2:STA*/((int)(realsmith_k7YnQGWkD8((int)(scsi_driver_realsmith_HWA80xok3j.can_queue_realsmith_HWA80xok3j)+(80))+(int)(scsi_driver_realsmith_HWA80xok3j.can_queue_realsmith_HWA80xok3j)-(1))+scsi_driver_realsmith_HWA80xok3j.can_queue_realsmith_HWA80xok3j)/*TAG2:END:scsi_driver_realsmith_HWA80xok3j.can_queue_realsmith_HWA80xok3j*/) {
        /*bef_stmt:17188*/
queue_depth_realsmith_HWA80xok3j = /*TAG3:STA*/((int)(realsmith_F6ZTwnV072((int)(scsi_driver_realsmith_HWA80xok3j.can_queue_realsmith_HWA80xok3j)+(10), (int)(scsi_driver_realsmith_HWA80xok3j.can_queue_realsmith_HWA80xok3j)+(40), (int)(scsi_driver_realsmith_HWA80xok3j.can_queue_realsmith_HWA80xok3j)+(9), (int)(scsi_driver_realsmith_HWA80xok3j.can_queue_realsmith_HWA80xok3j)+(21))+(int)(scsi_driver_realsmith_HWA80xok3j.can_queue_realsmith_HWA80xok3j)-(8))+scsi_driver_realsmith_HWA80xok3j.can_queue_realsmith_HWA80xok3j)/*TAG3:END:scsi_driver_realsmith_HWA80xok3j.can_queue_realsmith_HWA80xok3j*/;
/*aft_stmt:17188*/
    }
/*aft_stmt:17195*/
/*aft_stmt:17195*/
    /*bef_stmt:17206*/
return /*TAG4:STA*/((int)(realsmith_bbioWM9ebV((int)(queue_depth_realsmith_HWA80xok3j)+(77), (int)(queue_depth_realsmith_HWA80xok3j)+(4))+(int)(queue_depth_realsmith_HWA80xok3j)-(-1))+queue_depth_realsmith_HWA80xok3j)/*TAG4:END:queue_depth_realsmith_HWA80xok3j*/;
/*aft_stmt:17206*/
}


#include <stdio.h>
#include <inttypes.h>
int main() {
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    transparent_crc(realsmith_HWA80xok3j(87), "realsmith_HWA80xok3j(87)", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
/* EXITof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -O0 -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -O0 -fno-strict-aliasing: 6522DF69 */
/* EXITof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -O1 -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -O1 -fno-strict-aliasing: 6522DF69 */
/* EXITof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -O2 -fno-strict-aliasing: 124 */
/* CKSMof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -O2 -fno-strict-aliasing: NO_CKSUM */
/* EXITof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -O3 -fno-strict-aliasing: 124 */
/* CKSMof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -O3 -fno-strict-aliasing: NO_CKSUM */
/* EXITof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -Os -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/gcc_latest/bin/gcc -Os -fno-strict-aliasing: 6522DF69 */
/* EXITof /home/yunbo/eval/compilers/llvm_latest/bin/clang -O0 -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/llvm_latest/bin/clang -O0 -fno-strict-aliasing: 6522DF69 */
/* EXITof /home/yunbo/eval/compilers/llvm_latest/bin/clang -O1 -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/llvm_latest/bin/clang -O1 -fno-strict-aliasing: 6522DF69 */
/* EXITof /home/yunbo/eval/compilers/llvm_latest/bin/clang -O2 -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/llvm_latest/bin/clang -O2 -fno-strict-aliasing: 6522DF69 */
/* EXITof /home/yunbo/eval/compilers/llvm_latest/bin/clang -O3 -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/llvm_latest/bin/clang -O3 -fno-strict-aliasing: 6522DF69 */
/* EXITof /home/yunbo/eval/compilers/llvm_latest/bin/clang -Os -fno-strict-aliasing: 0 */
/* CKSMof /home/yunbo/eval/compilers/llvm_latest/bin/clang -Os -fno-strict-aliasing: 6522DF69 */
