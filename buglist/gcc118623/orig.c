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
if (Tag1_realsmith_HWA80xok3j(/*int:17208:17208:17195:e*/queue_depth_realsmith_HWA80xok3j) > Tag2_realsmith_HWA80xok3j(/*int:0:0:17195:e*/scsi_driver_realsmith_HWA80xok3j.can_queue_realsmith_HWA80xok3j)) {
        /*bef_stmt:17188*/
queue_depth_realsmith_HWA80xok3j = Tag3_realsmith_HWA80xok3j(/*int:0:0:17188:e*/scsi_driver_realsmith_HWA80xok3j.can_queue_realsmith_HWA80xok3j);
/*aft_stmt:17188*/
    }
/*aft_stmt:17195*/
/*aft_stmt:17195*/
    /*bef_stmt:17206*/
return Tag4_realsmith_HWA80xok3j(/*int:17208:17208:17206:e*/queue_depth_realsmith_HWA80xok3j);
/*aft_stmt:17206*/
}

