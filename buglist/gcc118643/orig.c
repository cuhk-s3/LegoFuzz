#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_w1L2HqcxZK(x) (x)
#define Tag2_realsmith_w1L2HqcxZK(x) (x)
#define Tag3_realsmith_w1L2HqcxZK(x) (x)
#include "stdlib.h"
int realsmith_w1L2HqcxZK(int type_realsmith_w1L2HqcxZK, int hw_context_realsmith_w1L2HqcxZK, int dd_realsmith_w1L2HqcxZK) {
    unsigned long reg_realsmith_w1L2HqcxZK;
    /*bef_stmt:17190*/
unsigned char set_realsmith_w1L2HqcxZK = (Tag1_realsmith_w1L2HqcxZK(/*int:17276:17276:17190:e*/type_realsmith_w1L2HqcxZK) == 1 ? 1 : 0);
/*aft_stmt:17190*/
    reg_realsmith_w1L2HqcxZK = 0;
    /*bef_stmt:17258*/
if (Tag2_realsmith_w1L2HqcxZK(/*unsigned char:17276:17276:17258:e*/set_realsmith_w1L2HqcxZK)) {
        reg_realsmith_w1L2HqcxZK &= ~0x1;
    } else {
        reg_realsmith_w1L2HqcxZK |= 0x1;
    }
/*aft_stmt:17258*/
    /*bef_stmt:17274*/
return Tag3_realsmith_w1L2HqcxZK(/*unsigned long:17276:17276:17274:e*/reg_realsmith_w1L2HqcxZK);
/*aft_stmt:17274*/
}

