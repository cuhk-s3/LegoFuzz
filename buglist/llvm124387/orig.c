#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_5UxDx5j43E(x) (x)
#define Tag2_realsmith_5UxDx5j43E(x) (x)
#define Tag3_realsmith_5UxDx5j43E(x) (x)
#define Tag4_realsmith_5UxDx5j43E(x) (x)
#define Tag5_realsmith_5UxDx5j43E(x) (x)
#define Tag6_realsmith_5UxDx5j43E(x) (x)
#define Tag7_realsmith_5UxDx5j43E(x) (x)
#define Tag8_realsmith_5UxDx5j43E(x) (x)
#define Tag9_realsmith_5UxDx5j43E(x) (x)
#define Tag10_realsmith_5UxDx5j43E(x) (x)
#define Tag11_realsmith_5UxDx5j43E(x) (x)
#define Tag12_realsmith_5UxDx5j43E(x) (x)
#define Tag13_realsmith_5UxDx5j43E(x) (x)
#define Tag14_realsmith_5UxDx5j43E(x) (x)
#define Tag15_realsmith_5UxDx5j43E(x) (x)
#define Tag16_realsmith_5UxDx5j43E(x) (x)
#define Tag17_realsmith_5UxDx5j43E(x) (x)
#define Tag18_realsmith_5UxDx5j43E(x) (x)
#define Tag19_realsmith_5UxDx5j43E(x) (x)
#define Tag20_realsmith_5UxDx5j43E(x) (x)
#define Tag21_realsmith_5UxDx5j43E(x) (x)
#define Tag22_realsmith_5UxDx5j43E(x) (x)
#define Tag23_realsmith_5UxDx5j43E(x) (x)
#define Tag24_realsmith_5UxDx5j43E(x) (x)
#define Tag25_realsmith_5UxDx5j43E(x) (x)
#define Tag26_realsmith_5UxDx5j43E(x) (x)
#define Tag27_realsmith_5UxDx5j43E(x) (x)
#include "stdlib.h"
int realsmith_5UxDx5j43E(int baud_us_realsmith_5UxDx5j43E, int ts_nsec_realsmith_5UxDx5j43E, unsigned char curs_realsmith_5UxDx5j43E, int pll_time_realsmith_5UxDx5j43E, int shreg_realsmith_5UxDx5j43E, int dcd_time_realsmith_5UxDx5j43E, int dcd_sum0_realsmith_5UxDx5j43E, int dcd_sum1_realsmith_5UxDx5j43E, int dcd_sum2_realsmith_5UxDx5j43E, unsigned char last_rxbit_realsmith_5UxDx5j43E, int opt_dcd_realsmith_5UxDx5j43E) {
    int timediff_realsmith_5UxDx5j43E;
    /*bef_stmt:17321*/
int bdus8_realsmith_5UxDx5j43E = Tag1_realsmith_5UxDx5j43E(/*int:17951:17951:17321:e*/baud_us_realsmith_5UxDx5j43E) >> 3;
/*aft_stmt:17321*/
    /*bef_stmt:17355*/
int bdus4_realsmith_5UxDx5j43E = Tag2_realsmith_5UxDx5j43E(/*int:17951:17951:17355:e*/baud_us_realsmith_5UxDx5j43E) >> 2;
/*aft_stmt:17355*/
    /*bef_stmt:17389*/
int bdus2_realsmith_5UxDx5j43E = Tag3_realsmith_5UxDx5j43E(/*int:17951:17951:17389:e*/baud_us_realsmith_5UxDx5j43E) >> 1;
/*aft_stmt:17389*/
    /*bef_stmt:17430*/
/*bef_stmt:17430*/
timediff_realsmith_5UxDx5j43E = 1000000 + Tag4_realsmith_5UxDx5j43E(/*int:17951:17951:17430:e*/ts_nsec_realsmith_5UxDx5j43E) / 1000 - Tag5_realsmith_5UxDx5j43E(/*int:17951:17951:17430:e*/pll_time_realsmith_5UxDx5j43E);
/*aft_stmt:17430*/
/*aft_stmt:17430*/
    /*bef_stmt:17463*/
while (Tag6_realsmith_5UxDx5j43E(/*int:17951:17951:17463:e*/timediff_realsmith_5UxDx5j43E) >= 500000)
        timediff_realsmith_5UxDx5j43E -= 1000000;
/*aft_stmt:17463*/
    /*bef_stmt:17584*/
/*bef_stmt:17584*/
while (Tag7_realsmith_5UxDx5j43E(/*int:17951:17951:17584:e*/timediff_realsmith_5UxDx5j43E) >= Tag8_realsmith_5UxDx5j43E(/*int:17951:17951:17584:e*/bdus2_realsmith_5UxDx5j43E)) {
        /*bef_stmt:17496*/
timediff_realsmith_5UxDx5j43E -= Tag9_realsmith_5UxDx5j43E(/*int:17951:17951:17496:e*/baud_us_realsmith_5UxDx5j43E);
/*aft_stmt:17496*/
        /*bef_stmt:17513*/
pll_time_realsmith_5UxDx5j43E += Tag10_realsmith_5UxDx5j43E(/*int:17951:17951:17513:e*/baud_us_realsmith_5UxDx5j43E);
/*aft_stmt:17513*/
        dcd_time_realsmith_5UxDx5j43E--;
        /*bef_stmt:17556*/
if (Tag11_realsmith_5UxDx5j43E(/*int:17951:17951:17556:e*/shreg_realsmith_5UxDx5j43E) & 1) {
            shreg_realsmith_5UxDx5j43E = 0x10000;
        }
/*aft_stmt:17556*/
        shreg_realsmith_5UxDx5j43E >>= 1;
    }
/*aft_stmt:17584*/
/*aft_stmt:17584*/
    /*bef_stmt:17731*/
if (Tag12_realsmith_5UxDx5j43E(/*int:17951:17951:17731:e*/dcd_time_realsmith_5UxDx5j43E) <= 0) {
        /*bef_stmt:17664*/
/*bef_stmt:17664*/
/*bef_stmt:17664*/
/*bef_stmt:17664*/
if (!Tag13_realsmith_5UxDx5j43E(/*int:17951:17951:17664:e*/opt_dcd_realsmith_5UxDx5j43E))
            dcd_sum0_realsmith_5UxDx5j43E += (Tag14_realsmith_5UxDx5j43E(/*int:17951:17951:17664:e*/dcd_sum0_realsmith_5UxDx5j43E) + Tag15_realsmith_5UxDx5j43E(/*int:17951:17951:17664:e*/dcd_sum1_realsmith_5UxDx5j43E) + Tag16_realsmith_5UxDx5j43E(/*int:17951:17951:17664:e*/dcd_sum2_realsmith_5UxDx5j43E)) < 0;
/*aft_stmt:17664*/
/*aft_stmt:17664*/
/*aft_stmt:17664*/
/*aft_stmt:17664*/
        /*bef_stmt:17679*/
dcd_sum2_realsmith_5UxDx5j43E = Tag17_realsmith_5UxDx5j43E(/*int:17951:17951:17679:e*/dcd_sum1_realsmith_5UxDx5j43E);
/*aft_stmt:17679*/
        /*bef_stmt:17694*/
dcd_sum1_realsmith_5UxDx5j43E = Tag18_realsmith_5UxDx5j43E(/*int:17951:17951:17694:e*/dcd_sum0_realsmith_5UxDx5j43E);
/*aft_stmt:17694*/
        dcd_sum0_realsmith_5UxDx5j43E = 2;
        dcd_time_realsmith_5UxDx5j43E += 120;
    }
/*aft_stmt:17731*/
    /*bef_stmt:17903*/
/*bef_stmt:17903*/
if (Tag19_realsmith_5UxDx5j43E(/*unsigned char:17951:17951:17903:e*/last_rxbit_realsmith_5UxDx5j43E) != Tag20_realsmith_5UxDx5j43E(/*unsigned char:17951:17951:17903:e*/curs_realsmith_5UxDx5j43E)) {
        /*bef_stmt:17770*/
last_rxbit_realsmith_5UxDx5j43E = Tag21_realsmith_5UxDx5j43E(/*unsigned char:17951:17951:17770:e*/curs_realsmith_5UxDx5j43E);
/*aft_stmt:17770*/
        shreg_realsmith_5UxDx5j43E |= 0x10000;
        /*bef_stmt:17845*/
/*bef_stmt:17845*/
/*bef_stmt:17845*/
if (Tag22_realsmith_5UxDx5j43E(/*int:17951:17951:17845:e*/timediff_realsmith_5UxDx5j43E) > 0)
            pll_time_realsmith_5UxDx5j43E += Tag23_realsmith_5UxDx5j43E(/*int:17951:17951:17845:e*/bdus8_realsmith_5UxDx5j43E);
        else
            pll_time_realsmith_5UxDx5j43E += 1000000 - Tag24_realsmith_5UxDx5j43E(/*int:17951:17951:17845:e*/bdus8_realsmith_5UxDx5j43E);
/*aft_stmt:17845*/
/*aft_stmt:17845*/
/*aft_stmt:17845*/
        /*bef_stmt:17891*/
if ((1) > Tag25_realsmith_5UxDx5j43E(/*int:17951:17951:17891:e*/bdus4_realsmith_5UxDx5j43E))
            dcd_sum0_realsmith_5UxDx5j43E += 4;
        else
            dcd_sum0_realsmith_5UxDx5j43E--;
/*aft_stmt:17891*/
    }
/*aft_stmt:17903*/
/*aft_stmt:17903*/
    /*bef_stmt:17938*/
while (Tag26_realsmith_5UxDx5j43E(/*int:17951:17951:17938:e*/pll_time_realsmith_5UxDx5j43E) >= 1000000)
        pll_time_realsmith_5UxDx5j43E -= 1000000;
/*aft_stmt:17938*/
    /*bef_stmt:17949*/
return Tag27_realsmith_5UxDx5j43E(/*int:17951:17951:17949:e*/pll_time_realsmith_5UxDx5j43E);
/*aft_stmt:17949*/
}

