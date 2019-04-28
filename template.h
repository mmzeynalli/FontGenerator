/*
 *
 * %fontName
 *
 * created with FontGenerator
 * written by Miradil Zeynalli
 *
 * https://github.com/mmzeynalli/FontGenerator
 *
 * File Name           : %fileName
 * Date                : %date
 * Font size in bytes  : %size
 * Font width          : %width
 * Font height         : %height
 * Font first char     : %firstChar
 * Font last char      : %lastChar
 * Font used chars     : %charCount
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef %defName_H
#define %defName_H

#define %defName_WIDTH %width
#define %defName_HEIGHT %height

const static uint8_t %name[] PROGMEM = {
    %binSize, // size
    %binWidth, // width
    %binHeight, // height
    %binFirstChar, // first char
    %binCharCount, // char count
    
    // char widths
    %fontWidthData
    
    // font data
    %fontData
};

#endif
