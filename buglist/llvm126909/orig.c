#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_H6q5E2v8HC(x) (x)
#define Tag2_realsmith_H6q5E2v8HC(x) (x)
#define Tag3_realsmith_H6q5E2v8HC(x) (x)
#define Tag4_realsmith_H6q5E2v8HC(x) (x)
#define Tag5_realsmith_H6q5E2v8HC(x) (x)
#define Tag6_realsmith_H6q5E2v8HC(x) (x)
#include "stdlib.h"
int realsmith_H6q5E2v8HC(int size_realsmith_H6q5E2v8HC, int vaddr_realsmith_H6q5E2v8HC, int dma_handle_realsmith_H6q5E2v8HC, int attrs_realsmith_H6q5E2v8HC) {
    /*bef_stmt:17196*/
unsigned long count_realsmith_H6q5E2v8HC = (Tag1_realsmith_H6q5E2v8HC(/*int:17369:17369:17196:e*/size_realsmith_H6q5E2v8HC) + (4096 - 1)) / 4096;
/*aft_stmt:17196*/
    unsigned long page_realsmith_H6q5E2v8HC;
    /*bef_stmt:17283*/
if (Tag2_realsmith_H6q5E2v8HC(/*int:17369:17369:17283:e*/vaddr_realsmith_H6q5E2v8HC) % 2 == 0) {
        /*bef_stmt:17255*/
page_realsmith_H6q5E2v8HC = Tag3_realsmith_H6q5E2v8HC(/*int:17369:17369:17255:e*/vaddr_realsmith_H6q5E2v8HC);
/*aft_stmt:17255*/
    } else {
        /*bef_stmt:17276*/
page_realsmith_H6q5E2v8HC = Tag4_realsmith_H6q5E2v8HC(/*int:17369:17369:17276:e*/dma_handle_realsmith_H6q5E2v8HC);
/*aft_stmt:17276*/
    }
/*aft_stmt:17283*/
    /*bef_stmt:17363*/
if (Tag5_realsmith_H6q5E2v8HC(/*unsigned long:17369:17369:17363:e*/page_realsmith_H6q5E2v8HC) % 2 == 0) {
        return 0;
    } else {
        /*bef_stmt:17358*/
return (int)(Tag6_realsmith_H6q5E2v8HC(/*int:17369:17369:17358:e*/size_realsmith_H6q5E2v8HC) / 4096);
/*aft_stmt:17358*/
    }
/*aft_stmt:17363*/
}

