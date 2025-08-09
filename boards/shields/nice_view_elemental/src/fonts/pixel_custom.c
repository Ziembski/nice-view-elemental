/*******************************************************************************
 * Size: 15 px
 * Bpp: 1
 * Opts: --bpp 1 --size 15 --no-compress --stride 1 --align 1 --font PIxel custom.ttf --range 32-127 --format lvgl -o pixel_custom.c
 ******************************************************************************/

#include "../../include/fonts/pixel_custom.h"

#include <lvgl.h>

#ifndef PIXEL_CUSTOM
#define PIXEL_CUSTOM 1
#endif

#if PIXEL_CUSTOM

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xf0, 0xf0,

    /* U+0022 "\"" */
    0xcf, 0x3c, 0xf3,

    /* U+0023 "#" */
    0x33, 0x19, 0xbf, 0xff, 0xf3, 0x31, 0x9b, 0xff,
    0xff, 0x33, 0x19, 0x80,

    /* U+0024 "$" */
    0xc, 0x6, 0xf, 0xe7, 0xfc, 0xc6, 0x60, 0xfc,
    0x7e, 0xc, 0x86, 0x7f, 0xdf, 0xe0, 0xc0, 0x60,

    /* U+0025 "%" */
    0xf0, 0xf8, 0x7c, 0xde, 0x60, 0xc0, 0x60, 0xce,
    0x67, 0xc3, 0xe1, 0xc0,

    /* U+0026 "&" */
    0x30, 0x30, 0xcc, 0xcc, 0x30, 0x30, 0xcc, 0xcc,
    0x33, 0x33,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x33, 0xcc, 0xcc, 0xcc, 0x33,

    /* U+0029 ")" */
    0xcc, 0x33, 0x33, 0x33, 0xcc,

    /* U+002A "*" */
    0x30, 0xcf, 0xff, 0x30, 0xcc, 0xf3,

    /* U+002B "+" */
    0x30, 0xcf, 0xff, 0x30, 0xc0,

    /* U+002C "," */
    0x33, 0xcc,

    /* U+002D "-" */
    0xff, 0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0xc, 0x30, 0xc3, 0x30, 0xcc, 0x30, 0xc3, 0x0,

    /* U+0030 "0" */
    0x3c, 0x3c, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x3c, 0x3c,

    /* U+0031 "1" */
    0x30, 0xcf, 0x3c, 0x30, 0xc3, 0xc, 0xff, 0xf0,

    /* U+0032 "2" */
    0x3c, 0x3c, 0xc3, 0xc3, 0xc, 0xc, 0x30, 0x30,
    0xff, 0xff,

    /* U+0033 "3" */
    0x3c, 0x3c, 0xc3, 0xc3, 0xc, 0xc, 0xc3, 0xc3,
    0x3c, 0x3c,

    /* U+0034 "4" */
    0xc, 0xc, 0x3c, 0x3c, 0xcc, 0xcc, 0xff, 0xff,
    0xc, 0xc,

    /* U+0035 "5" */
    0xff, 0xff, 0xc0, 0xc0, 0x3c, 0x3c, 0x3, 0x3,
    0xfc, 0xfc,

    /* U+0036 "6" */
    0x3f, 0x3f, 0xc0, 0xc0, 0xfc, 0xfc, 0xc3, 0xc3,
    0x3c, 0x3c,

    /* U+0037 "7" */
    0xff, 0xff, 0x3, 0x3, 0xc, 0xc, 0x30, 0x30,
    0xc0, 0xc0,

    /* U+0038 "8" */
    0x3c, 0x3c, 0xc3, 0xc3, 0x3c, 0x3c, 0xc3, 0xc3,
    0x3c, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x3c, 0xc3, 0xc3, 0x3f, 0x3f, 0x3, 0x3,
    0x3c, 0x3c,

    /* U+003A ":" */
    0xf0, 0xf0,

    /* U+003B ";" */
    0x33, 0x0, 0x33, 0xcc,

    /* U+003C "<" */
    0xc, 0x33, 0xc, 0xc3, 0x3, 0xc, 0xc, 0x30,

    /* U+003D "=" */
    0xff, 0xf0, 0x0, 0xff, 0xf0,

    /* U+003E ">" */
    0xc3, 0x3, 0xc, 0xc, 0x33, 0xc, 0xc3, 0x0,

    /* U+003F "?" */
    0x3f, 0x3f, 0xc3, 0xc3, 0xc, 0xc, 0x0, 0x0,
    0xc, 0xc,

    /* U+0040 "@" */
    0x3f, 0x1f, 0xb0, 0x38, 0x1c, 0xfe, 0x7f, 0x33,
    0x99, 0xf, 0x87, 0xc0,

    /* U+0041 "A" */
    0x30, 0xcc, 0xf3, 0xcf, 0x3f, 0xff, 0xcf, 0x30,

    /* U+0042 "B" */
    0xf3, 0xcc, 0xf3, 0xf3, 0xcc, 0xf3, 0xf3, 0xc0,

    /* U+0043 "C" */
    0x3c, 0xfc, 0x30, 0xc3, 0xc, 0x30, 0x3c, 0xf0,

    /* U+0044 "D" */
    0xf3, 0xcc, 0xf3, 0xcf, 0x3c, 0xf3, 0xf3, 0xc0,

    /* U+0045 "E" */
    0xff, 0xfc, 0x30, 0xf3, 0xcc, 0x30, 0xff, 0xf0,

    /* U+0046 "F" */
    0xff, 0xfc, 0x30, 0xf3, 0xcc, 0x30, 0xc3, 0x0,

    /* U+0047 "G" */
    0x3c, 0xfc, 0x30, 0xc3, 0xc, 0xf3, 0x3c, 0xf0,

    /* U+0048 "H" */
    0xcf, 0x3c, 0xf3, 0xff, 0xfc, 0xf3, 0xcf, 0x30,

    /* U+0049 "I" */
    0xff, 0xff, 0xf0,

    /* U+004A "J" */
    0xff, 0xf0, 0xc3, 0xc, 0x3c, 0xf3, 0xf3, 0xc0,

    /* U+004B "K" */
    0xcf, 0x3c, 0xf3, 0xf3, 0xcc, 0xf3, 0xcf, 0x30,

    /* U+004C "L" */
    0xcc, 0xcc, 0xcc, 0xcc, 0xff,

    /* U+004D "M" */
    0xc1, 0xe0, 0xfc, 0xfe, 0x7c, 0xde, 0x6f, 0x7,
    0x83, 0xc1, 0xe0, 0xc0,

    /* U+004E "N" */
    0xc3, 0xc3, 0xf3, 0xf3, 0xcf, 0xcf, 0xc3, 0xc3,
    0xc3, 0xc3,

    /* U+004F "O" */
    0x3c, 0x3c, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x3c, 0x3c,

    /* U+0050 "P" */
    0xf3, 0xcc, 0xf3, 0xf3, 0xcc, 0x30, 0xc3, 0x0,

    /* U+0051 "Q" */
    0x3f, 0x1f, 0xb0, 0x38, 0x1c, 0xce, 0x67, 0xd,
    0x86, 0x3c, 0x9e, 0x40,

    /* U+0052 "R" */
    0xf3, 0xcc, 0xf3, 0xf3, 0xcc, 0xf3, 0xcf, 0x30,

    /* U+0053 "S" */
    0x3f, 0x3f, 0xc0, 0xc0, 0x3c, 0x3c, 0x3, 0x3,
    0xfc, 0xfc,

    /* U+0054 "T" */
    0xff, 0xf3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc0,

    /* U+0055 "U" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x3c, 0x3c,

    /* U+0056 "V" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0x30, 0xc0,

    /* U+0057 "W" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0xde, 0x6f, 0xcf,
    0xe7, 0xc1, 0xe0, 0xc0,

    /* U+0058 "X" */
    0xcf, 0x3c, 0xf3, 0x30, 0xcc, 0xf3, 0xcf, 0x30,

    /* U+0059 "Y" */
    0xcf, 0x3c, 0xf3, 0x30, 0xc3, 0xc, 0x30, 0xc0,

    /* U+005A "Z" */
    0xff, 0xf0, 0xc3, 0x30, 0xcc, 0x30, 0xff, 0xf0,

    /* U+005B "[" */
    0xff, 0xcc, 0xcc, 0xcc, 0xff,

    /* U+005C "\\" */
    0xc3, 0xc, 0x30, 0x30, 0xc0, 0xc3, 0xc, 0x30,

    /* U+005D "]" */
    0xff, 0x33, 0x33, 0x33, 0xff,

    /* U+005E "^" */
    0x30, 0xcc, 0xf3,

    /* U+005F "_" */
    0xff, 0xf0,

    /* U+0060 "`" */
    0xcc, 0x33,

    /* U+0061 "a" */
    0x30, 0xcc, 0xf3, 0xcf, 0x3f, 0xff, 0xcf, 0x30,

    /* U+0062 "b" */
    0xf3, 0xcc, 0xf3, 0xf3, 0xcc, 0xf3, 0xf3, 0xc0,

    /* U+0063 "c" */
    0x3c, 0xfc, 0x30, 0xc3, 0xc, 0x30, 0x3c, 0xf0,

    /* U+0064 "d" */
    0xf3, 0xcc, 0xf3, 0xcf, 0x3c, 0xf3, 0xf3, 0xc0,

    /* U+0065 "e" */
    0xff, 0xfc, 0x30, 0xf3, 0xcc, 0x30, 0xff, 0xf0,

    /* U+0066 "f" */
    0xff, 0xfc, 0x30, 0xf3, 0xcc, 0x30, 0xc3, 0x0,

    /* U+0067 "g" */
    0x3c, 0xfc, 0x30, 0xc3, 0xc, 0xf3, 0x3c, 0xf0,

    /* U+0068 "h" */
    0xcf, 0x3c, 0xf3, 0xff, 0xfc, 0xf3, 0xcf, 0x30,

    /* U+0069 "i" */
    0xff, 0xff, 0xf0,

    /* U+006A "j" */
    0xff, 0xf0, 0xc3, 0xc, 0x3c, 0xf3, 0xf3, 0xc0,

    /* U+006B "k" */
    0xcf, 0x3c, 0xf3, 0xf3, 0xcc, 0xf3, 0xcf, 0x30,

    /* U+006C "l" */
    0xcc, 0xcc, 0xcc, 0xcc, 0xff,

    /* U+006D "m" */
    0xc1, 0xe0, 0xfc, 0xfe, 0x7c, 0xde, 0x6f, 0x7,
    0x83, 0xc1, 0xe0, 0xc0,

    /* U+006E "n" */
    0xc3, 0xc3, 0xf3, 0xf3, 0xcf, 0xcf, 0xc3, 0xc3,
    0xc3, 0xc3,

    /* U+006F "o" */
    0x3c, 0x3c, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x3c, 0x3c,

    /* U+0070 "p" */
    0xf3, 0xcc, 0xf3, 0xf3, 0xcc, 0x30, 0xc3, 0x0,

    /* U+0071 "q" */
    0x3f, 0x1f, 0xb0, 0x38, 0x1c, 0xce, 0x67, 0xd,
    0x86, 0x3c, 0x9e, 0x40,

    /* U+0072 "r" */
    0xf3, 0xcc, 0xf3, 0xf3, 0xcc, 0xf3, 0xcf, 0x30,

    /* U+0073 "s" */
    0x3c, 0x3c, 0xc0, 0xc0, 0x3c, 0x3c, 0x3, 0x3,
    0x3c, 0x3c,

    /* U+0074 "t" */
    0xff, 0xf3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc0,

    /* U+0075 "u" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x3c, 0x3c,

    /* U+0076 "v" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0x30, 0xc0,

    /* U+0077 "w" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0xde, 0x6f, 0xcf,
    0xe7, 0xc1, 0xe0, 0xc0,

    /* U+0078 "x" */
    0xcf, 0x3c, 0xf3, 0x30, 0xcc, 0xf3, 0xcf, 0x30,

    /* U+0079 "y" */
    0xcf, 0x3c, 0xf3, 0x30, 0xc3, 0xc, 0x30, 0xc0,

    /* U+007A "z" */
    0xff, 0xf0, 0xc3, 0x30, 0xcc, 0x30, 0xff, 0xf0,

    /* U+007B "{" */
    0x3c, 0xf3, 0xc, 0xc3, 0x3, 0xc, 0x3c, 0xf0,

    /* U+007C "|" */
    0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xf3, 0xc3, 0xc, 0xc, 0x33, 0xc, 0xf3, 0xc0,

    /* U+007E "~" */
    0x30, 0x98, 0x73, 0x39, 0x9c, 0x36, 0x18
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 60, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 60, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 120, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 7, .adv_w = 180, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 180, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 35, .adv_w = 180, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 60, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 58, .adv_w = 90, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 90, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 74, .adv_w = 120, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 79, .adv_w = 60, .box_w = 4, .box_h = 4, .ofs_x = -2, .ofs_y = -2},
    {.bitmap_index = 81, .adv_w = 120, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 83, .adv_w = 60, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 60, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 60, .box_w = 4, .box_h = 8, .ofs_x = -2, .ofs_y = -2},
    {.bitmap_index = 196, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 120, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 209, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 180, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 60, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 90, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 180, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 180, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 397, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 180, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 459, .adv_w = 90, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 472, .adv_w = 90, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 120, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 480, .adv_w = 120, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 90, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 484, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 516, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 548, .adv_w = 60, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 90, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 572, .adv_w = 180, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 594, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 604, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 612, .adv_w = 180, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 624, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 632, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 660, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 668, .adv_w = 180, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 680, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 704, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 712, .adv_w = 60, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 723, .adv_w = 180, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};


/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t pixel_custom = {
#else
lv_font_t pixel_custom = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};

#endif /*#if PIXEL_CUSTOM*/
