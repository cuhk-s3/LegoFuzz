#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_OJsEFsufKD(x) (x)
#define Tag2_realsmith_OJsEFsufKD(x) (x)
#define Tag3_realsmith_OJsEFsufKD(x) (x)
#define Tag4_realsmith_OJsEFsufKD(x) (x)
#define Tag5_realsmith_OJsEFsufKD(x) (x)
#include "stdlib.h"
int realsmith_OJsEFsufKD(int outer_lateral_relids_realsmith_OJsEFsufKD, int inner_lateral_relids_realsmith_OJsEFsufKD, int joinrelids_realsmith_OJsEFsufKD) {
    /*bef_stmt:17153*/
/*bef_stmt:17153*/
int result_realsmith_OJsEFsufKD = Tag1_realsmith_OJsEFsufKD(/*int:17216:17216:17153:e*/outer_lateral_relids_realsmith_OJsEFsufKD) | Tag2_realsmith_OJsEFsufKD(/*int:17216:17216:17153:e*/inner_lateral_relids_realsmith_OJsEFsufKD);
/*aft_stmt:17153*/
/*aft_stmt:17153*/
    /*bef_stmt:17170*/
result_realsmith_OJsEFsufKD &= ~Tag3_realsmith_OJsEFsufKD(/*int:17216:17216:17170:e*/joinrelids_realsmith_OJsEFsufKD);
/*aft_stmt:17170*/
    /*bef_stmt:17203*/
if (Tag4_realsmith_OJsEFsufKD(/*int:17216:17216:17203:e*/result_realsmith_OJsEFsufKD) == 0) {
        return -1;
    }
/*aft_stmt:17203*/
    /*bef_stmt:17214*/
return Tag5_realsmith_OJsEFsufKD(/*int:17216:17216:17214:e*/result_realsmith_OJsEFsufKD);
/*aft_stmt:17214*/
}

