/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --font /home/holidin/SquareLine/assets/Roboto-Medium.ttf -o /home/holidin/SquareLine/assets/ui_font_roboto_medium.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_ROBOTO_MEDIUM
#define UI_FONT_ROBOTO_MEDIUM 1
#endif

#if UI_FONT_ROBOTO_MEDIUM

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfc, 0x80,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x14, 0x51, 0xf9, 0x42, 0x9f, 0x8a, 0x24, 0x50,

    /* U+0024 "$" */
    0x23, 0x92, 0x94, 0x38, 0xe1, 0x8c, 0x5c, 0x40,

    /* U+0025 "%" */
    0x60, 0x94, 0x94, 0x68, 0x18, 0x16, 0x29, 0x29,
    0x6,

    /* U+0026 "&" */
    0x30, 0x91, 0x23, 0xc7, 0x1e, 0xa7, 0x44, 0x7c,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x29, 0x49, 0x24, 0x91, 0x22,

    /* U+0029 ")" */
    0x89, 0x12, 0x49, 0x25, 0x28,

    /* U+002A "*" */
    0x21, 0x3e, 0xc5, 0x0,

    /* U+002B "+" */
    0x20, 0x82, 0x3f, 0x20, 0x82, 0x0,

    /* U+002C "," */
    0x54,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x11, 0x12, 0x22, 0x44, 0x48,

    /* U+0030 "0" */
    0x74, 0x63, 0x18, 0xc6, 0x31, 0x70,

    /* U+0031 "1" */
    0x3c, 0x92, 0x49, 0x20,

    /* U+0032 "2" */
    0x72, 0x28, 0x82, 0x10, 0xc6, 0x10, 0xfc,

    /* U+0033 "3" */
    0x76, 0x42, 0x13, 0x4, 0x39, 0x70,

    /* U+0034 "4" */
    0x8, 0x63, 0x8a, 0x6b, 0x2f, 0xc2, 0x8,

    /* U+0035 "5" */
    0x7e, 0x31, 0xe0, 0x86, 0x39, 0x70,

    /* U+0036 "6" */
    0x32, 0x21, 0xe8, 0xc6, 0x39, 0x70,

    /* U+0037 "7" */
    0xfc, 0x30, 0x86, 0x10, 0x43, 0x8, 0x60,

    /* U+0038 "8" */
    0x74, 0x63, 0x17, 0x46, 0x31, 0x70,

    /* U+0039 "9" */
    0x76, 0xe3, 0x18, 0xbc, 0x22, 0x60,

    /* U+003A ":" */
    0x82,

    /* U+003B ";" */
    0x87, 0x0,

    /* U+003C "<" */
    0x9, 0xf9, 0xc3, 0x84,

    /* U+003D "=" */
    0xf8, 0x1, 0xf0,

    /* U+003E ">" */
    0x87, 0xe, 0x7e, 0x40,

    /* U+003F "?" */
    0x72, 0x42, 0x11, 0x10, 0x80, 0x20,

    /* U+0040 "@" */
    0x1e, 0x8, 0x64, 0xb, 0x39, 0x9a, 0x64, 0x99,
    0x26, 0x5b, 0x9b, 0x90, 0x6, 0x0, 0xf8,

    /* U+0041 "A" */
    0x18, 0x18, 0x3c, 0x3c, 0x24, 0x66, 0x7e, 0x42,
    0xc3,

    /* U+0042 "B" */
    0xfa, 0x18, 0x61, 0xfa, 0x18, 0x61, 0xf8,

    /* U+0043 "C" */
    0x39, 0x38, 0x60, 0x82, 0x8, 0x53, 0x78,

    /* U+0044 "D" */
    0xf2, 0x28, 0x61, 0x86, 0x18, 0x62, 0xf0,

    /* U+0045 "E" */
    0xfc, 0x21, 0xf, 0xc2, 0x10, 0xf8,

    /* U+0046 "F" */
    0xfc, 0x21, 0xf, 0x42, 0x10, 0x80,

    /* U+0047 "G" */
    0x3c, 0x8e, 0xc, 0x8, 0xf0, 0x60, 0xa1, 0x3c,

    /* U+0048 "H" */
    0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1, 0x82,

    /* U+0049 "I" */
    0xff, 0x80,

    /* U+004A "J" */
    0x8, 0x42, 0x10, 0x84, 0x31, 0x70,

    /* U+004B "K" */
    0x8e, 0x6b, 0x28, 0xe3, 0xc9, 0xa2, 0x8c,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x42, 0x10, 0xf8,

    /* U+004D "M" */
    0xc1, 0xe0, 0xf8, 0xf4, 0x5a, 0x6d, 0xb6, 0x53,
    0x39, 0x88, 0x80,

    /* U+004E "N" */
    0x83, 0x87, 0x8d, 0x9b, 0xb3, 0x63, 0xc3, 0x82,

    /* U+004F "O" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xa2, 0x38,

    /* U+0050 "P" */
    0xfa, 0x18, 0x61, 0xfa, 0x8, 0x20, 0x80,

    /* U+0051 "Q" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xa3, 0x3c,
    0xc,

    /* U+0052 "R" */
    0xfa, 0x18, 0x61, 0xfa, 0x68, 0xe3, 0x84,

    /* U+0053 "S" */
    0x39, 0x14, 0x58, 0x38, 0x38, 0x71, 0x78,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,

    /* U+0055 "U" */
    0x86, 0x18, 0x61, 0x86, 0x18, 0x63, 0x78,

    /* U+0056 "V" */
    0xc3, 0x42, 0x46, 0x64, 0x24, 0x2c, 0x38, 0x18,
    0x18,

    /* U+0057 "W" */
    0xc4, 0x53, 0x14, 0xed, 0x2b, 0x6a, 0x9e, 0xa3,
    0x28, 0xc6, 0x31, 0x0,

    /* U+0058 "X" */
    0x46, 0xc8, 0xb1, 0xc1, 0x87, 0xb, 0x32, 0x46,

    /* U+0059 "Y" */
    0xc6, 0x89, 0xb1, 0x43, 0x82, 0x4, 0x8, 0x10,

    /* U+005A "Z" */
    0xfc, 0x31, 0x84, 0x30, 0x86, 0x30, 0xfc,

    /* U+005B "[" */
    0xea, 0xaa, 0xaa, 0xc0,

    /* U+005C "\\" */
    0xc2, 0x10, 0xc2, 0x10, 0xc2, 0x18, 0x40,

    /* U+005D "]" */
    0xd5, 0x55, 0x55, 0xc0,

    /* U+005E "^" */
    0x21, 0x14, 0xad, 0x80,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0x4c,

    /* U+0061 "a" */
    0x74, 0x42, 0xf8, 0xc5, 0xe0,

    /* U+0062 "b" */
    0x84, 0x21, 0xe9, 0xc6, 0x31, 0x9f, 0x80,

    /* U+0063 "c" */
    0x7b, 0x28, 0x20, 0x82, 0x27, 0x0,

    /* U+0064 "d" */
    0x8, 0x42, 0xfc, 0xc6, 0x31, 0xcb, 0xc0,

    /* U+0065 "e" */
    0x76, 0x63, 0xf8, 0x65, 0xc0,

    /* U+0066 "f" */
    0x34, 0x4f, 0x44, 0x44, 0x44,

    /* U+0067 "g" */
    0x7e, 0x63, 0x18, 0xe5, 0xe1, 0x8b, 0x80,

    /* U+0068 "h" */
    0x84, 0x21, 0xe8, 0xc6, 0x31, 0x8c, 0x40,

    /* U+0069 "i" */
    0xbf, 0x80,

    /* U+006A "j" */
    0x45, 0x55, 0x57,

    /* U+006B "k" */
    0x84, 0x21, 0x3b, 0x73, 0x96, 0x94, 0xc0,

    /* U+006C "l" */
    0xff, 0xc0,

    /* U+006D "m" */
    0xff, 0x44, 0x62, 0x31, 0x18, 0x8c, 0x46, 0x22,

    /* U+006E "n" */
    0xf4, 0x63, 0x18, 0xc6, 0x20,

    /* U+006F "o" */
    0x7b, 0x38, 0x61, 0x87, 0x37, 0x80,

    /* U+0070 "p" */
    0xf4, 0xe3, 0x18, 0xcf, 0xd0, 0x84, 0x0,

    /* U+0071 "q" */
    0x7e, 0x63, 0x18, 0xe5, 0xe1, 0x8, 0x40,

    /* U+0072 "r" */
    0xf2, 0x49, 0x20,

    /* U+0073 "s" */
    0x74, 0x70, 0xe0, 0xc5, 0xc0,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x44, 0x70,

    /* U+0075 "u" */
    0x8c, 0x63, 0x18, 0xc5, 0xe0,

    /* U+0076 "v" */
    0xcd, 0x24, 0x9e, 0x30, 0xc3, 0x0,

    /* U+0077 "w" */
    0xc9, 0xac, 0x95, 0x4a, 0xa7, 0x71, 0xb0, 0x88,

    /* U+0078 "x" */
    0x4d, 0xe3, 0xc, 0x31, 0xec, 0xc0,

    /* U+0079 "y" */
    0x45, 0x36, 0x8a, 0x38, 0xc3, 0x4, 0x31, 0x80,

    /* U+007A "z" */
    0xf8, 0xcc, 0x46, 0x63, 0xe0,

    /* U+007B "{" */
    0x2d, 0x24, 0xa2, 0x49, 0x30,

    /* U+007C "|" */
    0xff, 0xe0,

    /* U+007D "}" */
    0x8c, 0x44, 0x44, 0x34, 0x44, 0x4c, 0x80,

    /* U+007E "~" */
    0x65, 0x28, 0x70
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 48, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 51, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 62, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 5, .adv_w = 117, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 13, .adv_w = 109, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 21, .adv_w = 141, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 123, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 32, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 39, .adv_w = 67, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 44, .adv_w = 68, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 49, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 53, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 59, .adv_w = 42, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 60, .adv_w = 63, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 61, .adv_w = 54, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 76, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 67, .adv_w = 109, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 109, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 109, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 109, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 109, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 109, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 109, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 109, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 109, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 109, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 51, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 46, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 131, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 135, .adv_w = 107, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 138, .adv_w = 100, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 142, .adv_w = 93, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 172, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 163, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 121, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 125, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 125, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 109, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 131, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 136, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 54, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 107, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 121, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 168, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 136, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 133, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 123, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 133, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 285, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 117, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 125, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 124, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 169, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 122, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 117, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 53, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 362, .adv_w = 80, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 369, .adv_w = 53, .box_w = 2, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 373, .adv_w = 82, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 377, .adv_w = 87, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 378, .adv_w = 62, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 379, .adv_w = 104, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 384, .adv_w = 108, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 391, .adv_w = 101, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 397, .adv_w = 108, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 103, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 68, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 109, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 421, .adv_w = 107, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 49, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 48, .box_w = 2, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 433, .adv_w = 100, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 49, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 167, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 107, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 109, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 108, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 468, .adv_w = 109, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 475, .adv_w = 68, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 478, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 64, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 107, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 95, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 143, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 507, .adv_w = 97, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 93, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 521, .adv_w = 97, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 64, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 531, .adv_w = 48, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 533, .adv_w = 64, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 540, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 3}
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
    1, 53,
    3, 3,
    3, 8,
    3, 34,
    3, 66,
    3, 68,
    3, 69,
    3, 70,
    3, 72,
    3, 78,
    3, 79,
    3, 80,
    3, 81,
    3, 82,
    3, 84,
    3, 88,
    8, 3,
    8, 8,
    8, 34,
    8, 66,
    8, 68,
    8, 69,
    8, 70,
    8, 72,
    8, 78,
    8, 79,
    8, 80,
    8, 81,
    8, 82,
    8, 84,
    8, 88,
    9, 55,
    9, 56,
    9, 58,
    13, 3,
    13, 8,
    15, 3,
    15, 8,
    16, 16,
    34, 3,
    34, 8,
    34, 32,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 78,
    34, 79,
    34, 80,
    34, 81,
    34, 85,
    34, 86,
    34, 87,
    34, 88,
    34, 90,
    34, 91,
    35, 53,
    35, 55,
    35, 58,
    36, 10,
    36, 53,
    36, 62,
    36, 94,
    37, 13,
    37, 15,
    37, 34,
    37, 53,
    37, 55,
    37, 57,
    37, 58,
    37, 59,
    38, 53,
    38, 68,
    38, 69,
    38, 70,
    38, 71,
    38, 72,
    38, 80,
    38, 82,
    38, 86,
    38, 87,
    38, 88,
    38, 90,
    39, 13,
    39, 15,
    39, 34,
    39, 43,
    39, 53,
    39, 66,
    39, 68,
    39, 69,
    39, 70,
    39, 72,
    39, 80,
    39, 82,
    39, 83,
    39, 86,
    39, 87,
    39, 90,
    41, 34,
    41, 53,
    41, 57,
    41, 58,
    42, 34,
    42, 53,
    42, 57,
    42, 58,
    43, 34,
    44, 14,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 68,
    44, 69,
    44, 70,
    44, 72,
    44, 80,
    44, 82,
    44, 86,
    44, 87,
    44, 88,
    44, 90,
    45, 3,
    45, 8,
    45, 34,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 86,
    45, 87,
    45, 88,
    45, 90,
    46, 34,
    46, 53,
    46, 57,
    46, 58,
    47, 34,
    47, 53,
    47, 57,
    47, 58,
    48, 13,
    48, 15,
    48, 34,
    48, 53,
    48, 55,
    48, 57,
    48, 58,
    48, 59,
    49, 13,
    49, 15,
    49, 34,
    49, 43,
    49, 57,
    49, 59,
    49, 66,
    49, 68,
    49, 69,
    49, 70,
    49, 72,
    49, 80,
    49, 82,
    49, 85,
    49, 87,
    49, 90,
    50, 53,
    50, 55,
    50, 56,
    50, 58,
    51, 53,
    51, 55,
    51, 58,
    53, 1,
    53, 13,
    53, 14,
    53, 15,
    53, 34,
    53, 36,
    53, 40,
    53, 43,
    53, 48,
    53, 50,
    53, 52,
    53, 53,
    53, 55,
    53, 56,
    53, 58,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 72,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    54, 34,
    55, 10,
    55, 13,
    55, 14,
    55, 15,
    55, 34,
    55, 36,
    55, 40,
    55, 48,
    55, 50,
    55, 62,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 80,
    55, 82,
    55, 83,
    55, 86,
    55, 87,
    55, 90,
    55, 94,
    56, 10,
    56, 13,
    56, 14,
    56, 15,
    56, 34,
    56, 53,
    56, 62,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 72,
    56, 80,
    56, 82,
    56, 83,
    56, 86,
    56, 94,
    57, 14,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 55,
    57, 68,
    57, 69,
    57, 70,
    57, 72,
    57, 80,
    57, 82,
    57, 86,
    57, 87,
    57, 90,
    58, 7,
    58, 10,
    58, 11,
    58, 13,
    58, 14,
    58, 15,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 52,
    58, 53,
    58, 54,
    58, 55,
    58, 56,
    58, 57,
    58, 58,
    58, 62,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 72,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 85,
    58, 86,
    58, 87,
    58, 89,
    58, 90,
    58, 91,
    58, 94,
    59, 34,
    59, 36,
    59, 40,
    59, 48,
    59, 50,
    59, 68,
    59, 69,
    59, 70,
    59, 72,
    59, 80,
    59, 82,
    59, 86,
    59, 87,
    59, 88,
    59, 90,
    60, 43,
    60, 54,
    66, 3,
    66, 8,
    66, 87,
    66, 90,
    67, 3,
    67, 8,
    67, 87,
    67, 89,
    67, 90,
    67, 91,
    68, 3,
    68, 8,
    70, 3,
    70, 8,
    70, 87,
    70, 90,
    71, 3,
    71, 8,
    71, 10,
    71, 62,
    71, 68,
    71, 69,
    71, 70,
    71, 72,
    71, 82,
    71, 94,
    73, 3,
    73, 8,
    76, 68,
    76, 69,
    76, 70,
    76, 72,
    76, 82,
    78, 3,
    78, 8,
    79, 3,
    79, 8,
    80, 3,
    80, 8,
    80, 87,
    80, 89,
    80, 90,
    80, 91,
    81, 3,
    81, 8,
    81, 87,
    81, 89,
    81, 90,
    81, 91,
    83, 3,
    83, 8,
    83, 13,
    83, 15,
    83, 66,
    83, 68,
    83, 69,
    83, 70,
    83, 71,
    83, 72,
    83, 80,
    83, 82,
    83, 85,
    83, 87,
    83, 88,
    83, 90,
    85, 80,
    87, 3,
    87, 8,
    87, 13,
    87, 15,
    87, 66,
    87, 68,
    87, 69,
    87, 70,
    87, 71,
    87, 72,
    87, 80,
    87, 82,
    88, 13,
    88, 15,
    89, 68,
    89, 69,
    89, 70,
    89, 72,
    89, 80,
    89, 82,
    90, 3,
    90, 8,
    90, 13,
    90, 15,
    90, 66,
    90, 68,
    90, 69,
    90, 70,
    90, 71,
    90, 72,
    90, 80,
    90, 82,
    91, 68,
    91, 69,
    91, 70,
    91, 72,
    91, 80,
    91, 82,
    92, 43,
    92, 54
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -6, -3, -3, -11, -5, -6, -6, -6,
    -6, -2, -2, -9, -2, -6, -9, 1,
    -3, -3, -11, -5, -6, -6, -6, -6,
    -2, -2, -9, -2, -6, -9, 1, 2,
    4, 2, -27, -27, -27, -27, -23, -11,
    -11, -8, -2, -2, -2, -2, -11, -2,
    -7, -4, -14, -4, -4, -1, -4, -2,
    -1, -5, -3, -5, 1, -3, -2, -5,
    -2, -3, -1, -2, -11, -11, -2, -8,
    -2, -2, -4, -2, 2, -2, -2, -2,
    -2, -2, -2, -2, -2, -2, -2, -2,
    -26, -26, -18, -19, 2, -3, -2, -2,
    -2, -2, -2, -2, -2, -2, -2, -2,
    2, -3, 2, -3, 2, -3, 2, -3,
    -2, -15, -3, -3, -3, -3, -2, -2,
    -2, -2, -3, -2, -2, -4, -6, -4,
    -27, -27, 2, -6, -6, -6, -6, -19,
    -2, -19, -9, -26, -1, -12, -5, -12,
    2, -3, 2, -3, 2, -3, 2, -3,
    -11, -11, -2, -8, -2, -2, -4, -2,
    -38, -38, -17, -17, -5, -3, -1, -1,
    -1, -1, -1, -1, -1, 1, 1, 1,
    -3, -3, -2, -3, -5, -2, -4, -6,
    -24, -25, -24, -11, -3, -3, -20, -3,
    -3, -1, 2, 2, 1, 2, -16, -8,
    -8, -8, -8, -8, -8, -19, -8, -8,
    -6, -7, -6, -8, -4, -7, -8, -6,
    -2, 2, -20, -15, -20, -7, -1, -1,
    -1, -1, 2, -4, -4, -4, -4, -4,
    -4, -4, -3, -3, -1, -1, 2, 1,
    -13, -6, -13, -4, 1, 1, -3, -3,
    -3, -3, -3, -3, -3, -2, -2, 1,
    -15, -2, -2, -2, -2, 1, -2, -2,
    -2, -2, -2, -2, -2, -3, -3, -3,
    2, -5, -22, -14, -22, -14, -3, -3,
    -9, -3, -3, -1, 2, -9, 2, 2,
    1, 2, 2, -6, -6, -6, -6, -2,
    -6, -4, -4, -6, -4, -6, -4, -5,
    -2, -4, -2, -2, -2, -3, 2, 1,
    -2, -2, -2, -2, -2, -2, -2, -2,
    -2, -2, -2, -3, -3, -3, -2, -2,
    -2, -2, -1, -1, -3, -3, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    2, 2, 2, 2, -2, -2, -2, -2,
    -2, 2, -7, -7, -2, -2, -2, -2,
    -2, -7, -7, -7, -7, -8, -8, -1,
    -2, -1, -1, -3, -3, -1, -1, -1,
    -1, 2, 2, -16, -16, -3, -2, -2,
    -2, 2, -2, -3, -2, 5, 2, 2,
    2, -3, 1, 1, -16, -16, -1, -1,
    -1, -1, 1, -1, -1, -1, -12, -12,
    -2, -2, -2, -2, -4, -2, 1, 1,
    -16, -16, -1, -1, -1, -1, 1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -2, -2
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 434,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
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
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_roboto_medium = {
#else
lv_font_t ui_font_roboto_medium = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_ROBOTO_MEDIUM*/

