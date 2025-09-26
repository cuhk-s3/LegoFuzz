#include<stdint.h>
#include<inttypes.h>
#define Tag1_realsmith_WY0rFfZ9oo(x) (x)
#define Tag2_realsmith_WY0rFfZ9oo(x) (x)
#define Tag3_realsmith_WY0rFfZ9oo(x) (x)
#define Tag4_realsmith_WY0rFfZ9oo(x) (x)
#define Tag5_realsmith_WY0rFfZ9oo(x) (x)
#include "stdlib.h"
struct gpio_hpd_config_FrVJ8P {
    long delay_on_disconnect_realsmith_WY0rFfZ9oo;
    long delay_on_connect_realsmith_WY0rFfZ9oo;
};
struct gpio_FrVJ8P {
    int dummy_realsmith_WY0rFfZ9oo;
};
struct dc_link_FrVJ8P {
    int is_hpd_filter_disabled_realsmith_WY0rFfZ9oo;
    int ctx_realsmith_WY0rFfZ9oo; // simplified for numeric representation
    int link_id_realsmith_WY0rFfZ9oo; // simplified for numeric representation
};
int realsmith_WY0rFfZ9oo(int link_ctx_realsmith_WY0rFfZ9oo, int link_id_realsmith_WY0rFfZ9oo, int enable_realsmith_WY0rFfZ9oo) {
    struct dc_link_FrVJ8P link_realsmith_WY0rFfZ9oo;
    link_realsmith_WY0rFfZ9oo.is_hpd_filter_disabled_realsmith_WY0rFfZ9oo = 0;
    /*bef_stmt:17334*/
link_realsmith_WY0rFfZ9oo.ctx_realsmith_WY0rFfZ9oo = Tag1_realsmith_WY0rFfZ9oo(/*int:17726:17726:17334:e*/link_ctx_realsmith_WY0rFfZ9oo);
/*aft_stmt:17334*/
    /*bef_stmt:17355*/
link_realsmith_WY0rFfZ9oo.link_id_realsmith_WY0rFfZ9oo = Tag2_realsmith_WY0rFfZ9oo(/*int:17726:17726:17355:e*/link_id_realsmith_WY0rFfZ9oo);
/*aft_stmt:17355*/
    struct gpio_FrVJ8P *hpd_realsmith_WY0rFfZ9oo = (struct gpio_FrVJ8P*)(malloc(sizeof(struct gpio_FrVJ8P)));
    /*bef_stmt:17705*/
if (Tag3_realsmith_WY0rFfZ9oo(/*int:17726:17726:17705:e*/enable_realsmith_WY0rFfZ9oo)) {
        link_realsmith_WY0rFfZ9oo.is_hpd_filter_disabled_realsmith_WY0rFfZ9oo = 0;
    } else {
        link_realsmith_WY0rFfZ9oo.is_hpd_filter_disabled_realsmith_WY0rFfZ9oo = 1;
        if (hpd_realsmith_WY0rFfZ9oo) {
            int gpio_open_result_realsmith_WY0rFfZ9oo = 1;
            /*bef_stmt:17657*/
if (Tag4_realsmith_WY0rFfZ9oo(/*int:17692:17701:17657:e*/gpio_open_result_realsmith_WY0rFfZ9oo) == 1) {
                struct gpio_hpd_config_FrVJ8P config_realsmith_WY0rFfZ9oo;
                config_realsmith_WY0rFfZ9oo.delay_on_connect_realsmith_WY0rFfZ9oo = 0;
                config_realsmith_WY0rFfZ9oo.delay_on_disconnect_realsmith_WY0rFfZ9oo = 0;
                (free(hpd_realsmith_WY0rFfZ9oo));
            } else {
            }
/*aft_stmt:17657*/
            (free(hpd_realsmith_WY0rFfZ9oo));
        }
    }
/*aft_stmt:17705*/
    /*bef_stmt:17724*/
return Tag5_realsmith_WY0rFfZ9oo(/*int:17726:17726:17724:e*/link_realsmith_WY0rFfZ9oo.is_hpd_filter_disabled_realsmith_WY0rFfZ9oo);
/*aft_stmt:17724*/
}

