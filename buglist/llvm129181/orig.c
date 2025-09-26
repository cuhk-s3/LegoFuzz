#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_mpz193s4J6(x) (x)
#define Tag2_realsmith_mpz193s4J6(x) (x)
#define Tag3_realsmith_mpz193s4J6(x) (x)
#define Tag4_realsmith_mpz193s4J6(x) (x)
#define Tag5_realsmith_mpz193s4J6(x) (x)
#define Tag6_realsmith_mpz193s4J6(x) (x)
#define Tag7_realsmith_mpz193s4J6(x) (x)
#include "stdlib.h"
int realsmith_mpz193s4J6(int mii_bus_dev_realsmith_mpz193s4J6, int bus_realsmith_mpz193s4J6, int phy_mask_realsmith_mpz193s4J6, int switch_data_realsmith_mpz193s4J6, int reset_func_realsmith_mpz193s4J6, int pdev_dev_realsmith_mpz193s4J6) {
    int ag_mii_bus_realsmith_mpz193s4J6 = 0;
    int result_realsmith_mpz193s4J6 = 0;
    /*bef_stmt:17262*/
/*bef_stmt:17262*/
if (Tag1_realsmith_mpz193s4J6(/*int:17365:17365:17262:e*/mii_bus_dev_realsmith_mpz193s4J6) == 0 || Tag2_realsmith_mpz193s4J6(/*int:17365:17365:17262:e*/bus_realsmith_mpz193s4J6) == 0)
        return 1;
/*aft_stmt:17262*/
/*aft_stmt:17262*/
    /*bef_stmt:17277*/
ag_mii_bus_realsmith_mpz193s4J6 = Tag3_realsmith_mpz193s4J6(/*int:17365:17365:17277:e*/mii_bus_dev_realsmith_mpz193s4J6);
/*aft_stmt:17277*/
    /*bef_stmt:17308*/
if (Tag4_realsmith_mpz193s4J6(/*int:17365:17365:17308:e*/ag_mii_bus_realsmith_mpz193s4J6) == 0) {
        return -1;
    }
/*aft_stmt:17308*/
    /*bef_stmt:17321*/
if (Tag5_realsmith_mpz193s4J6(/*int:17365:17365:17321:e*/reset_func_realsmith_mpz193s4J6)) {
    }
/*aft_stmt:17321*/
    /*bef_stmt:17338*/
if (Tag6_realsmith_mpz193s4J6(/*int:17365:17365:17338:e*/switch_data_realsmith_mpz193s4J6))
        return 2;
/*aft_stmt:17338*/
    /*bef_stmt:17355*/
if (Tag7_realsmith_mpz193s4J6(/*int:17365:17365:17355:e*/phy_mask_realsmith_mpz193s4J6))
        return 3;
/*aft_stmt:17355*/
    return 1;
}

