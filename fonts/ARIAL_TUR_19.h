/*
 *
 * ARIAL_TUR_19
 *
 * created with FontGenerator
 * written by Miradil Zeynalli
 *
 * http://www.apetech.de/fontCreator
 *
 * File Name           : ARIAL_TUR_19.h
 * Date                : %date
 * Font size in bytes  : 5188
 * Font width          : 14
 * Font height         : 32
 * Font first char     : 46
 * Font last char      : 58
 * Font used chars     : 12
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

#ifndef ARIAL_TUR_19_H
#define ARIAL_TUR_19_H

#define ARIAL_TUR_19_WIDTH 14
#define ARIAL_TUR_19_HEIGHT 32

const static uint8_t ARIAL_TUR_19[] PROGMEM = {
    0x14, 0x44, // size
    0x0E, // width
    0x20, // height
    0x2E, // first char
    0x0C, // char count
    
    // char widths
    0x0B, 0x0B, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E,
	0x0E, 0x0E,
    
    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x00, 0x00, // 46
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0xF8, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1F, 0x1F, 0x03, 0x00, 0x00, 0x00, // 47
	0x00, 0x00, 0x00, 0xC0, 0xF0, 0xF8, 0x78, 0x78, 0x78, 0x78, 0xF0, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x03, 0x07, 0x07, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x07, 0x03, 0x00, // 48
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x1E, 0x1F, 0x07, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, // 49
	0x00, 0x00, 0x80, 0xC0, 0xF0, 0xF8, 0x78, 0x78, 0x78, 0x78, 0xF8, 0xF0, 0xF0, 0x80, 0x00, 0x00, 0x07, 0x07, 0x07, 0x01, 0x00, 0x00, 0x00, 0xC0, 0xE1, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0xF8, 0x7E, 0x3F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, // 50
	0x00, 0x00, 0x80, 0xF0, 0xF0, 0xF8, 0x78, 0x78, 0x78, 0xF8, 0xF0, 0xF0, 0x80, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x01, 0xE0, 0xE0, 0xE0, 0xF9, 0xFF, 0x3F, 0x1F, 0x00, 0x00, 0x00, 0x70, 0xF0, 0xF0, 0x80, 0x01, 0x01, 0x01, 0x01, 0x87, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x03, 0x07, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x07, 0x03, 0x00, // 51
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0xFC, 0x3E, 0x07, 0x03, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7E, 0x7F, 0x7F, 0x79, 0x78, 0x78, 0x78, 0x78, 0xFF, 0xFF, 0xFF, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x00, 0x00, // 52
	0x00, 0x00, 0x00, 0xC0, 0xF8, 0xF8, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0x3C, 0x3C, 0xFC, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x70, 0xF0, 0xF0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x03, 0x07, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x07, 0x07, 0x03, 0x00, // 53
	0x00, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0xF8, 0x78, 0x78, 0x78, 0xF8, 0xF0, 0xF0, 0x80, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xC3, 0xE1, 0xE0, 0xE0, 0xE0, 0xE1, 0xC3, 0x03, 0x03, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0x87, 0x01, 0x01, 0x01, 0x01, 0x87, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x03, 0x07, 0x07, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x07, 0x03, 0x00, // 54
	0x00, 0x00, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0xFE, 0x3F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFE, 0xFF, 0x7F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
	0x00, 0x00, 0x80, 0xF0, 0xF0, 0xF8, 0x78, 0x78, 0x78, 0x78, 0xF8, 0xF0, 0xF0, 0x80, 0x00, 0x00, 0x1F, 0x3F, 0xFF, 0xF9, 0xE0, 0xE0, 0xE0, 0xE0, 0xF9, 0xFF, 0x3F, 0x1F, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x87, 0x01, 0x01, 0x01, 0x01, 0x87, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x03, 0x07, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x07, 0x03, 0x00, // 56
	0x00, 0x00, 0x80, 0xC0, 0xF0, 0xF8, 0x78, 0x78, 0x78, 0x78, 0xF0, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xE3, 0xC0, 0xC0, 0xC0, 0xC0, 0xE1, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0xC0, 0xC0, 0xC1, 0x87, 0x07, 0x07, 0x07, 0x87, 0xC1, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x07, 0x07, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x07, 0x03, 0x00, 0x00  // 57
	
};

#endif