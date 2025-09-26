#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_proxy_I042lqTJwM(x) (x)
#define Tag2_realsmith_proxy_I042lqTJwM(x) (x)
#define Tag3_realsmith_proxy_I042lqTJwM(x) (x)
#define Tag4_realsmith_proxy_I042lqTJwM(x) (x)
#define Tag5_realsmith_proxy_I042lqTJwM(x) (x)
#define Tag6_realsmith_proxy_I042lqTJwM(x) (x)
#define Tag7_realsmith_proxy_I042lqTJwM(x) (x)
#define Tag8_realsmith_proxy_I042lqTJwM(x) (x)
#include "stdlib.h"
int realsmith_0pRTdY5EoF(int pincfgxref_realsmith_0pRTdY5EoF, unsigned long *bias_value_realsmith_0pRTdY5EoF) {
    /*bef_stmt:17129*/
int pincfg_node_realsmith_0pRTdY5EoF = Tag1_realsmith_proxy_I042lqTJwM(/*int:17625:17625:17129:e*/pincfgxref_realsmith_0pRTdY5EoF);
/*aft_stmt:17129*/
    int i_realsmith_0pRTdY5EoF;
    struct {
        unsigned long bias_realsmith_0pRTdY5EoF;
        int name_realsmith_0pRTdY5EoF;
    } jx4780_bias_table_realsmith_0pRTdY5EoF[] = {
        {1, 0}, {2, 1}, {3, 2}
    };
    int nitems_realsmith_0pRTdY5EoF = sizeof(jx4780_bias_table_realsmith_0pRTdY5EoF) / sizeof(jx4780_bias_table_realsmith_0pRTdY5EoF[0]);
    /*bef_stmt:17609*/
/*bef_stmt:17609*/
for (i_realsmith_0pRTdY5EoF = 0; Tag2_realsmith_proxy_I042lqTJwM(/*int:17625:17625:17609:e*/i_realsmith_0pRTdY5EoF) < Tag3_realsmith_proxy_I042lqTJwM(/*int:17625:17625:17609:e*/nitems_realsmith_0pRTdY5EoF); i_realsmith_0pRTdY5EoF++) {
        /*bef_stmt:17602*/
/*bef_stmt:17602*/
if (Tag4_realsmith_proxy_I042lqTJwM(/*int:17625:17625:17602:e*/pincfg_node_realsmith_0pRTdY5EoF) == Tag5_realsmith_proxy_I042lqTJwM(/*int:17625:17625:17602:e*/jx4780_bias_table_realsmith_0pRTdY5EoF[i_realsmith_0pRTdY5EoF].name_realsmith_0pRTdY5EoF)) {
            /*bef_stmt:17588*/
*bias_value_realsmith_0pRTdY5EoF = Tag6_realsmith_proxy_I042lqTJwM(/*unsigned long:17625:17625:17588:e*/jx4780_bias_table_realsmith_0pRTdY5EoF[i_realsmith_0pRTdY5EoF].bias_realsmith_0pRTdY5EoF);
/*aft_stmt:17588*/
            return 0;
        }
/*aft_stmt:17602*/
/*aft_stmt:17602*/
    }
/*aft_stmt:17609*/
/*aft_stmt:17609*/
    return -1;
}
int realsmith_proxy_I042lqTJwM(int p_0_UunDiLOySS, unsigned long p_1_R26vrMwiBS) {
/*bef_stmt:17761*/
int proxy_ret_IV5waUaS6I = realsmith_0pRTdY5EoF(Tag7_realsmith_proxy_I042lqTJwM(/*int:17773:17773:17761:e*/p_0_UunDiLOySS), &(p_1_R26vrMwiBS));
/*aft_stmt:17761*/
/*bef_stmt:17771*/
return Tag8_realsmith_proxy_I042lqTJwM(/*int:17773:17773:17771:e*/proxy_ret_IV5waUaS6I);
/*aft_stmt:17771*/
}


