#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_SCPpxyWLNH(x) (x)
#define Tag2_realsmith_SCPpxyWLNH(x) (x)
#define Tag3_realsmith_SCPpxyWLNH(x) (x)
#define Tag4_realsmith_SCPpxyWLNH(x) (x)
#define Tag5_realsmith_SCPpxyWLNH(x) (x)
#define Tag6_realsmith_SCPpxyWLNH(x) (x)
#include "stdlib.h"
int realsmith_SCPpxyWLNH(int new_vclk_realsmith_SCPpxyWLNH, int new_dclk_realsmith_SCPpxyWLNH, int old_vclk_realsmith_SCPpxyWLNH, int old_dclk_realsmith_SCPpxyWLNH, unsigned long new_sclk_realsmith_SCPpxyWLNH, unsigned long old_sclk_realsmith_SCPpxyWLNH) {
    /*bef_stmt:17222*/
/*bef_stmt:17222*/
/*bef_stmt:17222*/
/*bef_stmt:17222*/
if (Tag1_realsmith_SCPpxyWLNH(/*int:17260:17260:17222:e*/new_vclk_realsmith_SCPpxyWLNH) == Tag2_realsmith_SCPpxyWLNH(/*int:17260:17260:17222:e*/old_vclk_realsmith_SCPpxyWLNH) && Tag3_realsmith_SCPpxyWLNH(/*int:17260:17260:17222:e*/new_dclk_realsmith_SCPpxyWLNH) == Tag4_realsmith_SCPpxyWLNH(/*int:17260:17260:17222:e*/old_dclk_realsmith_SCPpxyWLNH))
        return 0;
/*aft_stmt:17222*/
/*aft_stmt:17222*/
/*aft_stmt:17222*/
/*aft_stmt:17222*/
    /*bef_stmt:17250*/
/*bef_stmt:17250*/
if (Tag5_realsmith_SCPpxyWLNH(/*unsigned long:17260:17260:17250:e*/new_sclk_realsmith_SCPpxyWLNH) < Tag6_realsmith_SCPpxyWLNH(/*unsigned long:17260:17260:17250:e*/old_sclk_realsmith_SCPpxyWLNH))
        return 0;
/*aft_stmt:17250*/
/*aft_stmt:17250*/
    return 1;
}

