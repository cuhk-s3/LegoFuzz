#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_NWvSmdKOaJ(x) (x)
#define Tag2_realsmith_NWvSmdKOaJ(x) (x)
#define Tag3_realsmith_NWvSmdKOaJ(x) (x)
#define Tag4_realsmith_NWvSmdKOaJ(x) (x)
#define Tag5_realsmith_NWvSmdKOaJ(x) (x)
#define Tag6_realsmith_NWvSmdKOaJ(x) (x)
#include "stdlib.h"
int realsmith_NWvSmdKOaJ(int sysdev_realsmith_NWvSmdKOaJ, unsigned long baudrate_realsmith_NWvSmdKOaJ, int databits_realsmith_NWvSmdKOaJ, int stopbits_realsmith_NWvSmdKOaJ, int parity_realsmith_NWvSmdKOaJ) {
    unsigned long DEFAULT_BAUD_RATE_realsmith_NWvSmdKOaJ = 9600;
    unsigned long actual_baudrate_realsmith_NWvSmdKOaJ;
    int actual_databits_realsmith_NWvSmdKOaJ;
    int actual_stopbits_realsmith_NWvSmdKOaJ;
    int actual_parity_realsmith_NWvSmdKOaJ;
    /*bef_stmt:17397*/
if (Tag1_realsmith_NWvSmdKOaJ(/*int:17410:17410:17397:e*/sysdev_realsmith_NWvSmdKOaJ) != 0) {
        /*bef_stmt:17285*/
actual_baudrate_realsmith_NWvSmdKOaJ = Tag2_realsmith_NWvSmdKOaJ(/*unsigned long:17410:17410:17285:e*/baudrate_realsmith_NWvSmdKOaJ);
/*aft_stmt:17285*/
        /*bef_stmt:17300*/
actual_databits_realsmith_NWvSmdKOaJ = Tag3_realsmith_NWvSmdKOaJ(/*int:17410:17410:17300:e*/databits_realsmith_NWvSmdKOaJ);
/*aft_stmt:17300*/
        /*bef_stmt:17315*/
actual_stopbits_realsmith_NWvSmdKOaJ = Tag4_realsmith_NWvSmdKOaJ(/*int:17410:17410:17315:e*/stopbits_realsmith_NWvSmdKOaJ);
/*aft_stmt:17315*/
        /*bef_stmt:17330*/
actual_parity_realsmith_NWvSmdKOaJ = Tag5_realsmith_NWvSmdKOaJ(/*int:17410:17410:17330:e*/parity_realsmith_NWvSmdKOaJ);
/*aft_stmt:17330*/
    } else {
        /*bef_stmt:17351*/
actual_baudrate_realsmith_NWvSmdKOaJ = Tag6_realsmith_NWvSmdKOaJ(/*unsigned long:17410:17410:17351:e*/DEFAULT_BAUD_RATE_realsmith_NWvSmdKOaJ);
/*aft_stmt:17351*/
        actual_databits_realsmith_NWvSmdKOaJ = 8;
        actual_stopbits_realsmith_NWvSmdKOaJ = 1;
        actual_parity_realsmith_NWvSmdKOaJ = 0;
    }
/*aft_stmt:17397*/
    return 0;
}

