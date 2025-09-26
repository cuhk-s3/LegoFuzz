#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_X6PFT28Bsp(x) (x)
#define Tag2_realsmith_X6PFT28Bsp(x) (x)
#define Tag3_realsmith_X6PFT28Bsp(x) (x)
#define Tag4_realsmith_X6PFT28Bsp(x) (x)
#include "stdlib.h"
int realsmith_X6PFT28Bsp(int ch_addr_realsmith_X6PFT28Bsp) {
    unsigned long adt_realsmith_X6PFT28Bsp[4] = { 0, 0, 0, 0 };
    const int ADT0_CE_BIT_realsmith_X6PFT28Bsp = 0;
    const int ADT0_LE_BIT_realsmith_X6PFT28Bsp = 1;
    const int ADT0_PG_BIT_realsmith_X6PFT28Bsp = 2;
    const unsigned long ADT_realsmith_X6PFT28Bsp = 0;
    /*bef_stmt:17381*/
/*bef_stmt:17381*/
/*bef_stmt:17381*/
adt_realsmith_X6PFT28Bsp[0] =
        (1 << Tag1_realsmith_X6PFT28Bsp(/*const int:17408:17408:17381:e*/ADT0_CE_BIT_realsmith_X6PFT28Bsp)) |
        (1 << Tag2_realsmith_X6PFT28Bsp(/*const int:17408:17408:17381:e*/ADT0_LE_BIT_realsmith_X6PFT28Bsp)) |
        (0 << Tag3_realsmith_X6PFT28Bsp(/*const int:17408:17408:17381:e*/ADT0_PG_BIT_realsmith_X6PFT28Bsp));
/*aft_stmt:17381*/
/*aft_stmt:17381*/
/*aft_stmt:17381*/
    /*bef_stmt:17406*/
return Tag4_realsmith_X6PFT28Bsp(/*unsigned long:17408:17408:17406:e*/adt_realsmith_X6PFT28Bsp[0]);
/*aft_stmt:17406*/
}

