/*******************************************************************************
 * Size: 44 px
 * Bpp: 1
 * Opts: --bpp 1 --size 44 --no-compress --font Custom Font.woff --range 32-127 --format lvgl -o custom_font_44.c
 ******************************************************************************/

#include "../../include/fonts/custom_font_44.h"

#include <lvgl.h>

#ifndef CUSTOM_FONT_44
#define CUSTOM_FONT_44 1
#endif

#if CUSTOM_FONT_44

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfe, 0x7f, 0xcc,

    /* U+0022 "\"" */
    0xff, 0xf, 0xf0,

    /* U+0023 "#" */
    0x33, 0x6, 0x63, 0xff, 0xff, 0xf3, 0x31, 0xff,
    0xff, 0xf9, 0x98, 0x33, 0x0,

    /* U+0024 "$" */
    0x30, 0x86, 0x10, 0xcd, 0x99, 0xbf, 0xff, 0xff,
    0xcc, 0xd8, 0x63, 0xc, 0x60,

    /* U+0025 "%" */
    0xf0, 0x7e, 0xf, 0xc6, 0x78, 0xc0, 0xe0, 0x63,
    0xcc, 0x7e, 0xf, 0xc1, 0xe0,

    /* U+0026 "&" */
    0x2, 0x20, 0x44, 0xcf, 0x19, 0xec, 0xc3, 0x98,
    0x73, 0x9, 0x9e, 0x33, 0xc0,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0xc0, 0x78, 0xc, 0xfe, 0x1f, 0xc0,

    /* U+0029 ")" */
    0x3f, 0x87, 0xf3, 0x1, 0xe0, 0x30,

    /* U+002A "*" */
    0x33, 0xff, 0xf1, 0x93, 0x20,

    /* U+002B "+" */
    0xc, 0x6, 0x3, 0x1, 0x8f, 0xff, 0xfc, 0x30,
    0x18, 0xc, 0x0,

    /* U+002C "," */
    0xcc, 0x33,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0xf0, 0xf, 0xe0, 0xe, 0x0, 0xf, 0x0, 0xf0,

    /* U+0030 "0" */
    0x3f, 0x87, 0xf3, 0x9, 0xe1, 0x3c, 0xc7, 0xf8,
    0xfc, 0x19, 0xfc, 0x3f, 0x80,

    /* U+0031 "1" */
    0x0, 0x7f, 0xff, 0xff, 0x98, 0x33, 0x6,

    /* U+0032 "2" */
    0x30, 0x66, 0xf, 0x31, 0xe6, 0x3c, 0x27, 0x83,
    0xf0, 0x79, 0x83, 0x30, 0x60,

    /* U+0033 "3" */
    0x33, 0x86, 0x73, 0x31, 0xe6, 0x3c, 0xc7, 0x80,
    0xf0, 0x19, 0x8c, 0x31, 0x80,

    /* U+0034 "4" */
    0x1, 0x80, 0x33, 0xff, 0xff, 0xf3, 0x18, 0x1b,
    0x3, 0x60, 0x1c, 0x3, 0x80,

    /* U+0035 "5" */
    0xc3, 0x98, 0x73, 0x31, 0xe6, 0x3c, 0xc7, 0x98,
    0xf3, 0x1f, 0x8c, 0xf1, 0x80,

    /* U+0036 "6" */
    0x31, 0x86, 0x33, 0x19, 0xe3, 0x3c, 0x67, 0x8c,
    0xf1, 0x99, 0xfc, 0x3f, 0x80,

    /* U+0037 "7" */
    0xf0, 0x1e, 0x3, 0x30, 0x66, 0xc, 0x3f, 0x87,
    0xf0, 0x6, 0x0, 0xc0, 0x0,

    /* U+0038 "8" */
    0x33, 0x86, 0x73, 0x31, 0xe6, 0x3c, 0xc7, 0x98,
    0xf3, 0x19, 0x9c, 0x33, 0x80,

    /* U+0039 "9" */
    0x3f, 0x87, 0xf3, 0x31, 0xe6, 0x3c, 0xc7, 0x98,
    0xf3, 0x19, 0x8c, 0x31, 0x80,

    /* U+003A ":" */
    0xcf, 0x30,

    /* U+003B ";" */
    0xcd, 0x98, 0x8, 0x10,

    /* U+003C "<" */
    0xc1, 0xf9, 0xcc, 0x81, 0x80, 0xc0,

    /* U+003D "=" */
    0xcf, 0x3c, 0xf3, 0xcc,

    /* U+003E ">" */
    0xc, 0x1f, 0xc, 0x98, 0x3c, 0x18,

    /* U+003F "?" */
    0x30, 0x6, 0x3, 0x30, 0x66, 0xc, 0x27, 0x84,
    0xf0, 0x1, 0x80, 0x30, 0x0,

    /* U+0040 "@" */
    0x3f, 0xe7, 0xff, 0x31, 0xe6, 0x3c, 0xf7, 0x81,
    0xf0, 0x39, 0xf8, 0x3f, 0x0,

    /* U+0041 "A" */
    0x3f, 0xe7, 0xff, 0x18, 0x63, 0xc, 0x61, 0x8c,
    0x31, 0x81, 0xff, 0x3f, 0xe0,

    /* U+0042 "B" */
    0x33, 0x86, 0x73, 0x31, 0xe6, 0x3c, 0xc7, 0x98,
    0xf3, 0x1f, 0xff, 0xff, 0xe0,

    /* U+0043 "C" */
    0x31, 0x86, 0x33, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x19, 0xfc, 0x3f, 0x80,

    /* U+0044 "D" */
    0x3f, 0x87, 0xf3, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1f, 0xff, 0xff, 0xe0,

    /* U+0045 "E" */
    0xc0, 0x78, 0xf, 0x31, 0xe6, 0x3c, 0xc7, 0x98,
    0xf3, 0x1f, 0xff, 0xff, 0xe0,

    /* U+0046 "F" */
    0xc0, 0x18, 0x3, 0x30, 0x66, 0xc, 0xc1, 0x98,
    0x33, 0x7, 0xff, 0xff, 0xe0,

    /* U+0047 "G" */
    0x37, 0x86, 0xf3, 0x19, 0xe3, 0x3c, 0x7, 0x80,
    0xf0, 0x19, 0xfc, 0x3f, 0x80,

    /* U+0048 "H" */
    0xff, 0xff, 0xfc, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x7, 0xff, 0xff, 0xe0,

    /* U+0049 "I" */
    0xc0, 0x7f, 0xff, 0xff, 0xe0, 0x3c, 0x6,

    /* U+004A "J" */
    0xff, 0x9f, 0xf3, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3c, 0xc7, 0x80,

    /* U+004B "K" */
    0xc1, 0xf8, 0x3c, 0xc8, 0x19, 0x0, 0xc0, 0x18,
    0x3, 0x7, 0xff, 0xff, 0xe0,

    /* U+004C "L" */
    0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x6, 0x0,
    0xc0, 0x1f, 0xff, 0xff, 0xe0,

    /* U+004D "M" */
    0xff, 0xff, 0xff, 0x0, 0x60, 0x3, 0x1, 0xe0,
    0x30, 0x7, 0xff, 0xff, 0xe0,

    /* U+004E "N" */
    0xff, 0xff, 0xfc, 0x30, 0x6, 0x3, 0x1, 0xe0,
    0x30, 0x7, 0xff, 0xff, 0xe0,

    /* U+004F "O" */
    0x3f, 0x87, 0xf3, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x19, 0xfc, 0x3f, 0x80,

    /* U+0050 "P" */
    0x3c, 0x7, 0x83, 0x8, 0x61, 0xc, 0x21, 0x84,
    0x30, 0x87, 0xff, 0xff, 0xe0,

    /* U+0051 "Q" */
    0x3f, 0x67, 0xef, 0x2, 0x60, 0x4c, 0x37, 0x86,
    0xf0, 0x19, 0xfc, 0x3f, 0x80,

    /* U+0052 "R" */
    0x3d, 0xe7, 0xbf, 0x8, 0x61, 0xc, 0x21, 0x84,
    0x30, 0x87, 0xff, 0xff, 0xe0,

    /* U+0053 "S" */
    0xc3, 0x98, 0x73, 0x31, 0xe6, 0x3c, 0xc7, 0x98,
    0xf3, 0x19, 0x83, 0x30, 0x60,

    /* U+0054 "T" */
    0xc0, 0x18, 0x3, 0x0, 0x60, 0xf, 0xff, 0xff,
    0xf0, 0x6, 0x0, 0xc0, 0x0,

    /* U+0055 "U" */
    0xff, 0x9f, 0xf0, 0x1, 0x80, 0x30, 0x6, 0x0,
    0xc0, 0x1f, 0xfc, 0xff, 0x80,

    /* U+0056 "V" */
    0xfe, 0x1f, 0xc0, 0x6, 0x0, 0xc0, 0x6, 0x3,
    0x0, 0x67, 0xf0, 0xfe, 0x0,

    /* U+0057 "W" */
    0xff, 0xff, 0xfc, 0x6, 0x0, 0xc0, 0x60, 0xf,
    0x0, 0x67, 0xff, 0xff, 0xe0,

    /* U+0058 "X" */
    0xc0, 0x78, 0xc, 0xc6, 0x18, 0xc0, 0xe0, 0x63,
    0xc, 0x66, 0x3, 0xc0, 0x60,

    /* U+0059 "Y" */
    0xf0, 0x1e, 0x0, 0x30, 0x6, 0x0, 0x3e, 0x18,
    0x3, 0x7, 0x80, 0xf0, 0x0,

    /* U+005A "Z" */
    0xc0, 0x78, 0xf, 0xc1, 0xf8, 0x3c, 0xc7, 0x84,
    0xf0, 0x9e, 0xf, 0xc1, 0xe0,

    /* U+005B "[" */
    0xc0, 0x78, 0xf, 0x1, 0xff, 0xff, 0xfe,

    /* U+005C "\\" */
    0x0, 0xf0, 0xef, 0xe, 0xf, 0x0, 0xf0, 0x0,

    /* U+005D "]" */
    0xff, 0xff, 0xff, 0x1, 0xe0, 0x3c, 0x6,

    /* U+005E "^" */
    0x3c, 0xc3, 0x30,

    /* U+005F "_" */
    0xff, 0xff, 0xc0,

    /* U+0060 "`" */
    0x33, 0xcc,

    /* U+0061 "a" */
    0x3f, 0x9f, 0xf3, 0x79, 0xfc, 0xf8,

    /* U+0062 "b" */
    0x3, 0xf0, 0x3f, 0x3, 0x3f, 0xff, 0xff, 0xf0,

    /* U+0063 "c" */
    0xc0, 0xe0, 0x70, 0x27, 0xe3, 0xf0,

    /* U+0064 "d" */
    0xff, 0xff, 0xff, 0x3, 0x30, 0x3f, 0x3, 0xf0,

    /* U+0065 "e" */
    0xfe, 0x7f, 0x33, 0x67, 0xb3, 0xd8,

    /* U+0066 "f" */
    0x3f, 0x9f, 0xf3, 0x19, 0x8c, 0x0,

    /* U+0067 "g" */
    0x3f, 0xff, 0xf3, 0x6, 0x3, 0x0,

    /* U+0068 "h" */
    0xff, 0xff, 0xfc, 0x18, 0x0, 0xf0, 0x1e,

    /* U+0069 "i" */
    0xdf, 0xef, 0xc0,

    /* U+006A "j" */
    0xcf, 0xf9, 0xfc, 0x1, 0x80, 0x30,

    /* U+006B "k" */
    0xd, 0xe1, 0xbc, 0x8, 0x7f, 0xff, 0xfe,

    /* U+006C "l" */
    0x0, 0x60, 0xf, 0xff, 0xff, 0xf0,

    /* U+006D "m" */
    0x3f, 0x9f, 0xf0, 0x18, 0xf, 0xff, 0xff, 0x1,
    0xff, 0xff, 0x80,

    /* U+006E "n" */
    0x3f, 0x9f, 0xf0, 0x1f, 0xff, 0xf8,

    /* U+006F "o" */
    0x3f, 0x7f, 0xf0, 0x27, 0xe3, 0xf0,

    /* U+0070 "p" */
    0x3c, 0x1e, 0x33, 0x1f, 0xff, 0xf8,

    /* U+0071 "q" */
    0xff, 0xff, 0xf3, 0x6, 0x3, 0x0,

    /* U+0072 "r" */
    0xc0, 0x60, 0x30, 0x7, 0xf3, 0xf8,

    /* U+0073 "s" */
    0xc2, 0x67, 0xf3, 0x66, 0x33, 0x18,

    /* U+0074 "t" */
    0x30, 0x7f, 0xff, 0xfe, 0x18, 0x3, 0x0,

    /* U+0075 "u" */
    0xff, 0xff, 0xc0, 0x7f, 0xcf, 0xe0,

    /* U+0076 "v" */
    0xfe, 0x7f, 0xc0, 0x7f, 0xcf, 0xe0,

    /* U+0077 "w" */
    0xfe, 0x7f, 0x0, 0x60, 0x31, 0xe0, 0xc, 0x7,
    0xfc, 0xfe, 0x0,

    /* U+0078 "x" */
    0xf3, 0xff, 0xc3, 0x1e, 0x7f, 0x38,

    /* U+0079 "y" */
    0xfe, 0x7f, 0x3, 0x7e, 0x3f, 0x18,

    /* U+007A "z" */
    0xf1, 0xfe, 0xf3, 0x78, 0x7c, 0x38,

    /* U+007B "{" */
    0xc0, 0x78, 0xf, 0x1, 0x9e, 0xc3, 0xd8, 0x4,
    0x0, 0x80,

    /* U+007C "|" */
    0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0x2, 0x0, 0x40, 0xf6, 0x1e, 0xcc, 0x7, 0x80,
    0xf0, 0x18,

    /* U+007E "~" */
    0xcc, 0x3c, 0xc3, 0x30
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 59, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 205, .box_w = 11, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 4, .adv_w = 205, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 7, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 205, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 60, .adv_w = 205, .box_w = 11, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 66, .adv_w = 205, .box_w = 11, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 72, .adv_w = 235, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 77, .adv_w = 176, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 176, .box_w = 4, .box_h = 4, .ofs_x = 7, .ofs_y = 2},
    {.bitmap_index = 90, .adv_w = 117, .box_w = 2, .box_h = 5, .ofs_x = 5, .ofs_y = 2},
    {.bitmap_index = 92, .adv_w = 176, .box_w = 2, .box_h = 2, .ofs_x = 9, .ofs_y = 4},
    {.bitmap_index = 93, .adv_w = 205, .box_w = 12, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 101, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 205, .box_w = 11, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 121, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 147, .box_w = 6, .box_h = 2, .ofs_x = 4, .ofs_y = 4},
    {.bitmap_index = 227, .adv_w = 176, .box_w = 7, .box_h = 4, .ofs_x = 4, .ofs_y = 2},
    {.bitmap_index = 231, .adv_w = 176, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 237, .adv_w = 147, .box_w = 6, .box_h = 5, .ofs_x = 4, .ofs_y = 2},
    {.bitmap_index = 241, .adv_w = 176, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 247, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 260, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 273, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 205, .box_w = 11, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 384, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 397, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 475, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 501, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 566, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 579, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 592, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 205, .box_w = 11, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 612, .adv_w = 205, .box_w = 12, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 620, .adv_w = 205, .box_w = 11, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 627, .adv_w = 88, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 630, .adv_w = 176, .box_w = 2, .box_h = 9, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 633, .adv_w = 205, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 635, .adv_w = 205, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 641, .adv_w = 205, .box_w = 12, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 649, .adv_w = 205, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 655, .adv_w = 205, .box_w = 12, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 663, .adv_w = 205, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 669, .adv_w = 176, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 675, .adv_w = 176, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 681, .adv_w = 205, .box_w = 11, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 688, .adv_w = 205, .box_w = 9, .box_h = 2, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 691, .adv_w = 205, .box_w = 11, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 697, .adv_w = 205, .box_w = 11, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 704, .adv_w = 205, .box_w = 11, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 710, .adv_w = 205, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 205, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 727, .adv_w = 205, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 733, .adv_w = 205, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 739, .adv_w = 205, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 745, .adv_w = 205, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 751, .adv_w = 205, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 757, .adv_w = 205, .box_w = 11, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 764, .adv_w = 205, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 770, .adv_w = 205, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 776, .adv_w = 205, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 787, .adv_w = 205, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 793, .adv_w = 205, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 799, .adv_w = 205, .box_w = 9, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 805, .adv_w = 205, .box_w = 11, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 815, .adv_w = 205, .box_w = 11, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 818, .adv_w = 205, .box_w = 11, .box_h = 7, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 828, .adv_w = 117, .box_w = 4, .box_h = 7, .ofs_x = 4, .ofs_y = 0}
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

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    3, 34,
    3, 43,
    8, 34,
    8, 43,
    13, 3,
    13, 8,
    15, 3,
    15, 8,
    34, 3,
    34, 8,
    34, 53,
    34, 55,
    34, 56,
    34, 58,
    35, 53,
    35, 58,
    37, 53,
    37, 58,
    39, 13,
    39, 15,
    39, 34,
    39, 66,
    40, 53,
    40, 58,
    45, 3,
    45, 8,
    45, 53,
    45, 55,
    45, 56,
    45, 58,
    48, 53,
    48, 58,
    49, 13,
    49, 15,
    50, 53,
    50, 58,
    51, 53,
    51, 58,
    52, 66,
    52, 68,
    52, 69,
    52, 70,
    52, 72,
    52, 80,
    52, 82,
    52, 91,
    53, 13,
    53, 15,
    53, 34,
    53, 48,
    53, 53,
    53, 58,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 74,
    53, 78,
    53, 79,
    53, 80,
    53, 83,
    53, 84,
    53, 86,
    53, 91,
    54, 53,
    54, 58,
    55, 13,
    55, 15,
    55, 34,
    55, 55,
    55, 56,
    55, 58,
    56, 13,
    56, 15,
    56, 34,
    56, 55,
    56, 56,
    56, 58,
    58, 13,
    58, 15,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 55,
    58, 56,
    58, 58,
    58, 66,
    67, 71,
    67, 73,
    67, 74,
    67, 75,
    67, 76,
    67, 77,
    67, 78,
    67, 79,
    67, 81,
    67, 83,
    67, 85,
    67, 86,
    70, 66,
    70, 71,
    70, 73,
    70, 74,
    70, 75,
    70, 76,
    70, 77,
    70, 78,
    70, 79,
    70, 81,
    70, 83,
    70, 85,
    70, 86,
    71, 13,
    71, 15,
    71, 66,
    71, 71,
    71, 85,
    71, 87,
    71, 88,
    76, 85,
    80, 73,
    80, 74,
    80, 75,
    80, 76,
    80, 77,
    80, 78,
    80, 79,
    80, 81,
    80, 83,
    80, 85,
    80, 86,
    81, 73,
    81, 74,
    81, 75,
    81, 76,
    81, 77,
    81, 78,
    81, 79,
    81, 81,
    81, 83,
    81, 85,
    81, 86,
    84, 71,
    84, 73,
    84, 74,
    84, 75,
    84, 76,
    84, 77,
    84, 78,
    84, 79,
    84, 81,
    84, 83,
    84, 85,
    84, 86,
    85, 67,
    85, 68,
    85, 69,
    85, 70,
    85, 72,
    85, 89,
    87, 66,
    87, 71,
    87, 73,
    87, 74,
    87, 75,
    87, 76,
    87, 77,
    87, 78,
    87, 79,
    87, 81,
    87, 83,
    87, 85,
    87, 86,
    88, 66,
    88, 71,
    88, 73,
    88, 75,
    88, 76,
    88, 77,
    88, 78,
    88, 79,
    88, 81,
    88, 83,
    88, 85,
    88, 86,
    89, 73,
    89, 76,
    89, 77,
    89, 86,
    90, 66,
    90, 71,
    90, 73,
    90, 75,
    90, 76,
    90, 77,
    90, 78,
    90, 79,
    90, 81,
    90, 83,
    90, 85,
    90, 86,
    91, 66,
    91, 71,
    91, 77,
    91, 84,
    91, 85
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -63, -32, -63, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -63, -63, -32, -32, -32, -32, 32, 32,
    32, 32, 32, 32, 32, 32, -32, -32,
    -32, -32, -63, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, 32, 32, 32,
    32, 32, 32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32, -32, -32, -32, -32, -32, -32, -32,
    -32
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 209,
    .glyph_ids_size = 0
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
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
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
const lv_font_t custom_font_44 = {
#else
lv_font_t custom_font_44 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 9,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};

#endif /*#if CUSTOM_FONT_44*/
