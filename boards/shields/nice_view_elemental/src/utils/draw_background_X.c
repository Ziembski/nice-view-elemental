#include "../../include/utils/draw_background.h"

#include <lvgl.h>
#include "../../include/images/background_X.h"


void draw_background_X(lv_obj_t* canvas, unsigned index) {
    lv_draw_img_dsc_t img_dsc;
    lv_draw_img_dsc_init(&img_dsc);

    switch (index % 1) {
        case 0: {
            lv_canvas_draw_img(canvas, 0, 0, &background_X, &img_dsc);
            break;
        }
    

    }
}
