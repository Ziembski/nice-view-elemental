#include "../../include/utils/draw_animation2.h"

#include <lvgl.h>
#include "../../include/images/animation2_background.h"
#include "../../include/images/animation2_flash.h"
#include "../../include/images/animation2_Aaim.h"
#include "../../include/images/animation2_Adraw.h"
#include "../../include/images/animation2_Aflash.h"
#include "../../include/images/animation2_Aflash2.h"
#include "../../include/images/animation2_Aflash3.h"
#include "../../include/images/animation2_Aholster.h"
#include "../../include/images/animation2_Alaugh.h"
#include "../../include/images/animation2_Astanding.h"
#include "../../include/images/animation2_Ao1.h"
#include "../../include/images/animation2_Ao2.h"
#include "../../include/images/animation2_Ao3.h"
#include "../../include/images/animation2_Ao4.h"
#include "../../include/images/animation2_Ao5.h"
#include "../../include/images/animation2_Ao6.h"
#include "../../include/images/animation2_Ao7.h"
#include "../../include/images/animation2_Ao8.h"
#include "../../include/images/animation2_Ao9.h"
#include "../../include/images/animation2_Aw1.h"
#include "../../include/images/animation2_Aw2.h"
#include "../../include/images/animation2_Aw3.h"
#include "../../include/images/animation2_Aw4.h"
#include "../../include/images/animation2_Aw5.h"
#include "../../include/images/animation2_Aw6.h"
#include "../../include/images/animation2_Aw7.h"
#include "../../include/images/animation2_Aw8.h"
#include "../../include/images/animation2_Aw9.h"
	
#include "../../include/images/animation2_Bw1.h"
#include "../../include/images/animation2_Bw2.h"
#include "../../include/images/animation2_Bw3.h"
#include "../../include/images/animation2_Bw4.h"
#include "../../include/images/animation2_Bw5.h"
#include "../../include/images/animation2_Bw6.h"
#include "../../include/images/animation2_Bw7.h"
#include "../../include/images/animation2_Bw8.h"
#include "../../include/images/animation2_Bw9.h"
#include "../../include/images/animation2_Baim.h"
#include "../../include/images/animation2_Bdraw.h"
#include "../../include/images/animation2_Bstanding.h"
#include "../../include/images/animation2_Bhit.h"
	
#include "../../include/images/animation2_Cw1.h"
#include "../../include/images/animation2_Cw2.h"
#include "../../include/images/animation2_Cw3.h"
#include "../../include/images/animation2_Cw4.h"
#include "../../include/images/animation2_Cw5.h"
#include "../../include/images/animation2_Cw6.h"
#include "../../include/images/animation2_Cw7.h"
#include "../../include/images/animation2_Cw8.h"
#include "../../include/images/animation2_Cw9.h"
#include "../../include/images/animation2_Caim.h"
#include "../../include/images/animation2_Cdraw.h"
#include "../../include/images/animation2_Cstanding.h"
#include "../../include/images/animation2_Chit1.h"
#include "../../include/images/animation2_Chit2.h"
#include "../../include/images/animation2_Chit3.h"
#include "../../include/images/animation2_Chit4.h"
#include "../../include/images/animation2_Chit5.h"
#include "../../include/images/animation2_Chit6.h"
#include "../../include/images/animation2_Chit7.h"
#include "../../include/images/animation2_Chit8.h"
#include "../../include/images/animation2_Chit9.h"
#include "../../include/images/animation2_Chit10.h"
#include "../../include/images/animation2_Chit11.h"
#include "../../include/images/animation2_Chit12.h"


void draw_animation2(lv_obj_t* canvas, unsigned index) {
    lv_draw_img_dsc_t img_dsc;
    lv_draw_img_dsc_init(&img_dsc);

    switch (index % 36) {
        case 1: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_background, &img_dsc);
            break;
        }

        case 2: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aw1, &img_dsc);
            break;
        }
 
        case 3: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aw2, &img_dsc);
            break;
        }

        case 4: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aw3, &img_dsc);
            break;
        }

        case 5: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aw4, &img_dsc);
            break;
        }

        case 6: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aw5, &img_dsc);
            break;
        }

        case 7: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aw6, &img_dsc);
            break;
        }

        case 8: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aw7, &img_dsc);
            break;
        }

        case 9: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aw8, &img_dsc);
            break;
        }

        case 10: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aw9, &img_dsc);
            break;
        }

        case 11: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Astanding, &img_dsc);
            break;
        }

        case 12: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Astanding, &img_dsc);
            break;
        }

        case 13: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Astanding, &img_dsc);
            break;
        }

        case 14: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Astanding, &img_dsc);
            break;
        }

        case 15: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Astanding, &img_dsc);
            break;
        }

        case 16: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Astanding, &img_dsc);
            break;
        }

        case 17: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Astanding, &img_dsc);
            break;
        }

        case 18: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Astanding, &img_dsc);
            break;
        }

        case 19: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Astanding, &img_dsc);
            break;
        }

        case 20: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Astanding, &img_dsc);
            break;
        }

        case 21: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Astanding, &img_dsc);
            break;
        }

        case 22: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Astanding, &img_dsc);
            break;
        }		

        case 23: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Adraw, &img_dsc);
            break;
        }

        case 24: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aaim, &img_dsc);
            break;
        }

        case 25: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aaim, &img_dsc);
            break;
        }

        case 26: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aflash, &img_dsc);
            break;
        }

        case 27: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aflash2, &img_dsc);
            break;
        }

        case 28: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aflash3, &img_dsc);
            break;
        }

        case 29: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Alaugh, &img_dsc);
            break;
        }

        case 30: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aaim, &img_dsc);
            break;
        }

        case 31: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Alaugh, &img_dsc);
            break;
        }

        case 32: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aaim, &img_dsc);
            break;
        }

        case 33: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Alaugh, &img_dsc);
            break;
        }

        case 34: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aaim, &img_dsc);
            break;
        }

        case 35: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Aholster, &img_dsc);
            break;
        }

        case 36: {
            lv_canvas_draw_img(canvas, 0, 0, &animation2_Astanding, &img_dsc);
            break;
        }


    }
}
