#include "../../include/utils/draw_background.h"

#include <lvgl.h>
#include "../../include/images/background_0.h"
#include "../../include/images/background_1.h"
#include "../../include/images/background_2.h"
#include "../../include/images/background_3.h"
#include "../../include/images/background_4.h"
#include "../../include/images/background_5.h"
#include "../../include/images/background_6.h"
#include "../../include/images/background_7.h"
#include "../../include/images/background_8.h"
#include "../../include/images/background_9.h"
#include "../../include/images/background_10.h"
#include "../../include/images/background_11.h"
#include "../../include/images/background_12.h"
#include "../../include/images/background_13.h"
#include "../../include/images/background_14.h"
#include "../../include/images/background_15.h"
#include "../../include/images/background_16.h"
#include "../../include/images/background_17.h"
#include "../../include/images/background_18.h"
#include "../../include/images/background_19.h"
#include "../../include/images/background_20.h"
#include "../../include/images/background_21.h"
#include "../../include/images/background_22.h"
#include "../../include/images/background_23.h"
#include "../../include/images/background_24.h"
#include "../../include/images/background_25.h"
#include "../../include/images/background_26.h"
#include "../../include/images/background_27.h"
#include "../../include/images/background_28.h"
#include "../../include/images/background_29.h"
#include "../../include/images/background_30.h"
#include "../../include/images/background_31.h"

void draw_background(lv_obj_t* canvas, unsigned index) {
    lv_draw_img_dsc_t img_dsc;
    lv_draw_img_dsc_init(&img_dsc);

    switch (index % 32) {
        case 0: {
            lv_canvas_draw_img(canvas, 0, 0, &background_0, &img_dsc);
            break;
        }
        case 1: {
            lv_canvas_draw_img(canvas, 0, 0, &background_1, &img_dsc);
            break;
        }
        case 2: {
            lv_canvas_draw_img(canvas, 0, 0, &background_2, &img_dsc);
            break;
        }
        case 3: {
            lv_canvas_draw_img(canvas, 0, 0, &background_3, &img_dsc);
            break;
        }
        case 4: {
            lv_canvas_draw_img(canvas, 0, 0, &background_4, &img_dsc);
            break;
        }
        case 5: {
            lv_canvas_draw_img(canvas, 0, 0, &background_5, &img_dsc);
            break;
        }
        case 6: {
            lv_canvas_draw_img(canvas, 0, 0, &background_6, &img_dsc);
            break;
        }
        case 7: {
            lv_canvas_draw_img(canvas, 0, 0, &background_7, &img_dsc);
            break;
        }
        case 8: {
            lv_canvas_draw_img(canvas, 0, 0, &background_8, &img_dsc);
            break;
        }
        case 9: {
            lv_canvas_draw_img(canvas, 0, 0, &background_9, &img_dsc);
            break;
        }
        case 10: {
            lv_canvas_draw_img(canvas, 0, 0, &background_10, &img_dsc);
            break;
        }
        case 11: {
            lv_canvas_draw_img(canvas, 0, 0, &background_11, &img_dsc);
            break;
        }
        case 12: {
            lv_canvas_draw_img(canvas, 0, 0, &background_12, &img_dsc);
            break;
        }
        case 13: {
            lv_canvas_draw_img(canvas, 0, 0, &background_13, &img_dsc);
            break;
        }
        case 14: {
            lv_canvas_draw_img(canvas, 0, 0, &background_14, &img_dsc);
            break;
        }
        case 15: {
            lv_canvas_draw_img(canvas, 0, 0, &background_15, &img_dsc);
            break;
        }
        case 16: {
            lv_canvas_draw_img(canvas, 0, 0, &background_16, &img_dsc);
            break;
        }
        case 17: {
            lv_canvas_draw_img(canvas, 0, 0, &background_17, &img_dsc);
            break;
        }
        case 18: {
            lv_canvas_draw_img(canvas, 0, 0, &background_18, &img_dsc);
            break;
        }
        case 19: {
            lv_canvas_draw_img(canvas, 0, 0, &background_19, &img_dsc);
            break;
        }
        case 20: {
            lv_canvas_draw_img(canvas, 0, 0, &background_20, &img_dsc);
            break;
        }
        case 21: {
            lv_canvas_draw_img(canvas, 0, 0, &background_21, &img_dsc);
            break;
        }
        case 22: {
            lv_canvas_draw_img(canvas, 0, 0, &background_22, &img_dsc);
            break;
        }
        case 23: {
            lv_canvas_draw_img(canvas, 0, 0, &background_23, &img_dsc);
            break;
        }
        case 24: {
            lv_canvas_draw_img(canvas, 0, 0, &background_24, &img_dsc);
            break;
        }
        case 25: {
            lv_canvas_draw_img(canvas, 0, 0, &background_25, &img_dsc);
            break;
        }
        case 26: {
            lv_canvas_draw_img(canvas, 0, 0, &background_26, &img_dsc);
            break;
        }
        case 27: {
            lv_canvas_draw_img(canvas, 0, 0, &background_27, &img_dsc);
            break;
        }
        case 28: {
            lv_canvas_draw_img(canvas, 0, 0, &background_28, &img_dsc);
            break;
        }
        case 29: {
            lv_canvas_draw_img(canvas, 0, 0, &background_29, &img_dsc);
            break;
        }
        case 30: {
            lv_canvas_draw_img(canvas, 0, 0, &background_30, &img_dsc);
            break;
        }
        case 31: {
            lv_canvas_draw_img(canvas, 0, 0, &background_31, &img_dsc);
            break;
        }
        

    }
}
