#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_xlWLdFJ9QQ(x) (x)
#define Tag2_realsmith_xlWLdFJ9QQ(x) (x)
#define Tag3_realsmith_xlWLdFJ9QQ(x) (x)
#define Tag4_realsmith_xlWLdFJ9QQ(x) (x)
#define Tag5_realsmith_xlWLdFJ9QQ(x) (x)
#define Tag6_realsmith_xlWLdFJ9QQ(x) (x)
#define Tag7_realsmith_xlWLdFJ9QQ(x) (x)
#define Tag8_realsmith_xlWLdFJ9QQ(x) (x)
#define Tag9_realsmith_xlWLdFJ9QQ(x) (x)
#define Tag10_realsmith_xlWLdFJ9QQ(x) (x)
#define Tag11_realsmith_xlWLdFJ9QQ(x) (x)
#define Tag12_realsmith_xlWLdFJ9QQ(x) (x)
#include "stdlib.h"
int realsmith_xlWLdFJ9QQ(int brdrw_realsmith_xlWLdFJ9QQ, int brdcs_realsmith_xlWLdFJ9QQ, int brddat5_realsmith_xlWLdFJ9QQ, int brddat6_realsmith_xlWLdFJ9QQ, int eeprom_realsmith_xlWLdFJ9QQ, int spiocap_realsmith_xlWLdFJ9QQ) {
    int int_50_realsmith_xlWLdFJ9QQ, ext_present_realsmith_xlWLdFJ9QQ, eeprom_present_realsmith_xlWLdFJ9QQ;
    int brdctl_realsmith_xlWLdFJ9QQ;
    /*bef_stmt:17276*/
/*bef_stmt:17276*/
brdctl_realsmith_xlWLdFJ9QQ = (Tag1_realsmith_xlWLdFJ9QQ(/*int:17471:17471:17276:e*/brdrw_realsmith_xlWLdFJ9QQ) | Tag2_realsmith_xlWLdFJ9QQ(/*int:17471:17471:17276:e*/brdcs_realsmith_xlWLdFJ9QQ));
/*aft_stmt:17276*/
/*aft_stmt:17276*/
    brdctl_realsmith_xlWLdFJ9QQ = 0;
    /*bef_stmt:17315*/
brdctl_realsmith_xlWLdFJ9QQ = (Tag3_realsmith_xlWLdFJ9QQ(/*int:17471:17471:17315:e*/brdctl_realsmith_xlWLdFJ9QQ) & 0xFF);
/*aft_stmt:17315*/
    /*bef_stmt:17348*/
/*bef_stmt:17348*/
int_50_realsmith_xlWLdFJ9QQ = !(Tag4_realsmith_xlWLdFJ9QQ(/*int:17471:17471:17348:e*/brdctl_realsmith_xlWLdFJ9QQ) & Tag5_realsmith_xlWLdFJ9QQ(/*int:17471:17471:17348:e*/brddat5_realsmith_xlWLdFJ9QQ));
/*aft_stmt:17348*/
/*aft_stmt:17348*/
    /*bef_stmt:17381*/
/*bef_stmt:17381*/
ext_present_realsmith_xlWLdFJ9QQ = !(Tag6_realsmith_xlWLdFJ9QQ(/*int:17471:17471:17381:e*/brdctl_realsmith_xlWLdFJ9QQ) & Tag7_realsmith_xlWLdFJ9QQ(/*int:17471:17471:17381:e*/brddat6_realsmith_xlWLdFJ9QQ));
/*aft_stmt:17381*/
/*aft_stmt:17381*/
    /*bef_stmt:17412*/
/*bef_stmt:17412*/
eeprom_present_realsmith_xlWLdFJ9QQ = (Tag8_realsmith_xlWLdFJ9QQ(/*int:17471:17471:17412:e*/spiocap_realsmith_xlWLdFJ9QQ) & Tag9_realsmith_xlWLdFJ9QQ(/*int:17471:17471:17412:e*/eeprom_realsmith_xlWLdFJ9QQ));
/*aft_stmt:17412*/
/*aft_stmt:17412*/
    /*bef_stmt:17469*/
/*bef_stmt:17469*/
/*bef_stmt:17469*/
return (Tag10_realsmith_xlWLdFJ9QQ(/*int:17471:17471:17469:e*/int_50_realsmith_xlWLdFJ9QQ) << 2) | (Tag11_realsmith_xlWLdFJ9QQ(/*int:17471:17471:17469:e*/ext_present_realsmith_xlWLdFJ9QQ) << 1) | Tag12_realsmith_xlWLdFJ9QQ(/*int:17471:17471:17469:e*/eeprom_present_realsmith_xlWLdFJ9QQ);
/*aft_stmt:17469*/
/*aft_stmt:17469*/
/*aft_stmt:17469*/
}

