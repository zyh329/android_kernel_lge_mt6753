/* arch/arm/mach-##/lge/lge_mtk_lcdc_luts.c
 * Copyright (c) 2014, LG Electronics. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/module.h>

/* pixel order : RBG */
/*
   Gamma   Gain      Offset
   Red        1		1             0
   Green     1		1             0
   Blue       1		1             0
 */
#if defined(TARGET_MT6582_B2L)
const unsigned int p_lg_mtk_lcdc_lut[256] = {
    /* default linear qlut */
	0x00000000, 0x00010101, 0x00020202, 0x00030303, 
	0x00040404, 0x00050505, 0x00060606, 0x00070707, 
	0x00080808, 0x00090909, 0x000A0A0A, 0x000A0B0B, 
	0x000B0C0C, 0x000C0D0D, 0x000D0E0D, 0x000E0F0E, 
	0x000F100F, 0x00101110, 0x00111211, 0x00121312, 
	0x00131413, 0x00141514, 0x00151615, 0x00161716, 
	0x00171817, 0x00181918, 0x00191A19, 0x001A1B1A, 
	0x001B1C1B, 0x001C1D1C, 0x001D1E1D, 0x001E1F1E, 
	0x001E201F, 0x001F2120, 0x00202221, 0x00212322, 
	0x00222423, 0x00232524, 0x00242625, 0x00252726, 
	0x00262827, 0x00272928, 0x00282A29, 0x00292B29, 
	0x002A2C2A, 0x002B2D2B, 0x002C2E2C, 0x002D2F2D, 
	0x002E302E, 0x002F312F, 0x00303230, 0x00313331, 
	0x00323432, 0x00333533, 0x00343634, 0x00343735, 
	0x00353836, 0x00363937, 0x00373A38, 0x00383B39, 
	0x00393C3A, 0x003A3D3B, 0x003B3E3C, 0x003C3F3D, 
	0x003D403E, 0x003E413F, 0x003F4240, 0x00404341, 
	0x00414442, 0x00424543, 0x00434644, 0x00444745, 
	0x00454846, 0x00464947, 0x00474A48, 0x00484B49, 
	0x00494C4A, 0x004A4D4B, 0x004B4E4C, 0x004C4F4D, 
	0x004D504D, 0x004E514E, 0x004F524F, 0x00505350, 
	0x00515451, 0x00525552, 0x00535653, 0x00535754, 
	0x00545855, 0x00555956, 0x00565A57, 0x00575B58, 
	0x00585C59, 0x00595D5A, 0x005A5E5B, 0x005B5F5C, 
	0x005C605D, 0x005D615E, 0x005E625F, 0x005F6360, 
	0x00606461, 0x00616562, 0x00626663, 0x00636764, 
	0x00646865, 0x00656966, 0x00666A67, 0x00676B68, 
	0x00686C69, 0x00696D6A, 0x006A6E6B, 0x006B6F6C, 
	0x006C706D, 0x006D716E, 0x006E726F, 0x006F7370, 
	0x00707471, 0x00717572, 0x00727673, 0x00737774, 
	0x00747875, 0x00757976, 0x00767A77, 0x00777B78, 
	0x00787C79, 0x00797D7A, 0x007A7E7B, 0x007B7F7C, 
	0x007C807D, 0x007D817E, 0x007E827F, 0x007F8380, 
	0x00808481, 0x00818582, 0x00828683, 0x00838784, 
	0x00848885, 0x00858986, 0x00868A87, 0x00878B88, 
	0x00888C89, 0x00898D8A, 0x008A8E8B, 0x008B8F8C, 
	0x008C908D, 0x008D918E, 0x008E928F, 0x008F9390, 
	0x00909491, 0x00919592, 0x00929693, 0x00939794, 
	0x00949895, 0x00959996, 0x00969A97, 0x00979B98, 
	0x00989C99, 0x00999D9A, 0x009A9E9B, 0x009B9F9C, 
	0x009CA09D, 0x009DA19E, 0x009EA29F, 0x009FA3A0, 
	0x00A0A4A1, 0x00A1A5A2, 0x00A2A6A3, 0x00A3A7A4, 
	0x00A4A8A5, 0x00A6A9A6, 0x00A7AAA7, 0x00A8ABA8, 
	0x00A9ACA9, 0x00AAADAA, 0x00ABAEAB, 0x00ACAFAC, 
	0x00ADB0AE, 0x00AEB1AF, 0x00AFB2B0, 0x00B0B3B1, 
	0x00B1B4B2, 0x00B2B5B3, 0x00B3B6B4, 0x00B4B7B5, 
	0x00B5B8B6, 0x00B6B9B7, 0x00B7BAB8, 0x00B8BBB9, 
	0x00B9BCBA, 0x00BABDBB, 0x00BBBEBC, 0x00BCBFBD, 
	0x00BDC0BE, 0x00BEC1BF, 0x00BFC2C0, 0x00C0C3C1, 
	0x00C1C4C2, 0x00C2C5C3, 0x00C3C6C4, 0x00C4C7C5, 
	0x00C5C8C6, 0x00C7C9C7, 0x00C8CAC8, 0x00C9CBC9, 
	0x00CACCCA, 0x00CBCDCB, 0x00CCCECC, 0x00CDCFCD, 
	0x00CED0CE, 0x00CFD1CF, 0x00D0D2D0, 0x00D1D3D1, 
	0x00D2D4D2, 0x00D3D5D4, 0x00D4D6D5, 0x00D5D7D6, 
	0x00D6D8D7, 0x00D7D9D8, 0x00D8DAD9, 0x00D9DBDA, 
	0x00DADCDB, 0x00DBDDDC, 0x00DCDEDD, 0x00DDDFDE, 
	0x00DFE0DF, 0x00E0E1E0, 0x00E1E2E1, 0x00E2E3E2, 
	0x00E3E4E3, 0x00E4E5E4, 0x00E5E6E5, 0x00E6E7E6, 
	0x00E7E8E7, 0x00E8E9E8, 0x00E9EAE9, 0x00EAEBEA, 
	0x00EBECEB, 0x00ECEDEC, 0x00EDEEED, 0x00EEEFEE, 
	0x00EFF0EF, 0x00F0F1F0, 0x00F1F2F2, 0x00F2F3F3, 
	0x00F3F4F4, 0x00F5F5F5, 0x00F6F6F6, 0x00F7F7F7, 
	0x00F8F8F8, 0x00F9F9F9, 0x00FAFAFA, 0x00FBFBFB, 
	0x00FCFCFC, 0x00FDFDFD, 0x00FEFEFE, 0x00FFFFFF, 
};
#else
const unsigned int p_lg_mtk_lcdc_lut[256] = {
    /* default linear qlut */
	0x00000000, 0x00010101, 0x00020202, 0x00030303,
	0x00040404, 0x00050505, 0x00060606, 0x00070707,
	0x00080808, 0x00090909, 0x000A0A0A, 0x000B0B0B,
	0x000C0C0C, 0x000D0D0D, 0x000E0E0E, 0x000F0F0F,
	0x00101010, 0x00111111, 0x00121212, 0x00131313,
	0x00141414, 0x00151515, 0x00161616, 0x00171717,
	0x00181818, 0x00191919, 0x001A1A1A, 0x001B1B1B,
	0x001C1C1C, 0x001D1D1D, 0x001E1E1E, 0x001F1F1F,
	0x00202020, 0x00212121, 0x00222222, 0x00232323,
	0x00242424, 0x00252525, 0x00262626, 0x00272727,
	0x00282828, 0x00292929, 0x002A2A2A, 0x002B2B2B,
	0x002C2C2C, 0x002D2D2D, 0x002E2E2E, 0x002F2F2F,
	0x00303030, 0x00313131, 0x00323232, 0x00333333,
	0x00343434, 0x00353535, 0x00363636, 0x00373737,
	0x00383838, 0x00393939, 0x003A3A3A, 0x003B3B3B,
	0x003C3C3C, 0x003D3D3D, 0x003E3E3E, 0x003F3F3F,
	0x00404040, 0x00414141, 0x00424242, 0x00434343,
	0x00444444, 0x00454545, 0x00464646, 0x00474747,
	0x00484848, 0x00494949, 0x004A4A4A, 0x004B4B4B,
	0x004C4C4C, 0x004D4D4D, 0x004E4E4E, 0x004F4F4F,
	0x00505050, 0x00515151, 0x00525252, 0x00535353,
	0x00545454, 0x00555555, 0x00565656, 0x00575757,
	0x00585858, 0x00595959, 0x005A5A5A, 0x005B5B5B,
	0x005C5C5C, 0x005D5D5D, 0x005E5E5E, 0x005F5F5F,
	0x00606060, 0x00616161, 0x00626262, 0x00636363,
	0x00646464, 0x00656565, 0x00666666, 0x00676767,
	0x00686868, 0x00696969, 0x006A6A6A, 0x006B6B6B,
	0x006C6C6C, 0x006D6D6D, 0x006E6E6E, 0x006F6F6F,
	0x00707070, 0x00717171, 0x00727272, 0x00737373,
	0x00747474, 0x00757575, 0x00767676, 0x00777777,
	0x00787878, 0x00797979, 0x007A7A7A, 0x007B7B7B,
	0x007C7C7C, 0x007D7D7D, 0x007E7E7E, 0x007F7F7F,
	0x00808080, 0x00818181, 0x00828282, 0x00838383,
	0x00848484, 0x00858585, 0x00868686, 0x00878787,
	0x00888888, 0x00898989, 0x008A8A8A, 0x008B8B8B,
	0x008C8C8C, 0x008D8D8D, 0x008E8E8E, 0x008F8F8F,
	0x00909090, 0x00919191, 0x00929292, 0x00939393,
	0x00949494, 0x00959595, 0x00969696, 0x00979797,
	0x00989898, 0x00999999, 0x009A9A9A, 0x009B9B9B,
	0x009C9C9C, 0x009D9D9D, 0x009E9E9E, 0x009F9F9F,
	0x00A0A0A0, 0x00A1A1A1, 0x00A2A2A2, 0x00A3A3A3,
	0x00A4A4A4, 0x00A5A5A5, 0x00A6A6A6, 0x00A7A7A7,
	0x00A8A8A8, 0x00A9A9A9, 0x00AAAAAA, 0x00ABABAB,
	0x00ACACAC, 0x00ADADAD, 0x00AEAEAE, 0x00AFAFAF,
	0x00B0B0B0, 0x00B1B1B1, 0x00B2B2B2, 0x00B3B3B3,
	0x00B4B4B4, 0x00B5B5B5, 0x00B6B6B6, 0x00B7B7B7,
	0x00B8B8B8, 0x00B9B9B9, 0x00BABABA, 0x00BBBBBB,
	0x00BCBCBC, 0x00BDBDBD, 0x00BEBEBE, 0x00BFBFBF,
	0x00C0C0C0, 0x00C1C1C1, 0x00C2C2C2, 0x00C3C3C3,
	0x00C4C4C4, 0x00C5C5C5, 0x00C6C6C6, 0x00C7C7C7,
	0x00C8C8C8, 0x00C9C9C9, 0x00CACACA, 0x00CBCBCB,
	0x00CCCCCC, 0x00CDCDCD, 0x00CECECE, 0x00CFCFCF,
	0x00D0D0D0, 0x00D1D1D1, 0x00D2D2D2, 0x00D3D3D3,
	0x00D4D4D4, 0x00D5D5D5, 0x00D6D6D6, 0x00D7D7D7,
	0x00D8D8D8, 0x00D9D9D9, 0x00DADADA, 0x00DBDBDB,
	0x00DCDCDC, 0x00DDDDDD, 0x00DEDEDE, 0x00DFDFDF,
	0x00E0E0E0, 0x00E1E1E1, 0x00E2E2E2, 0x00E3E3E3,
	0x00E4E4E4, 0x00E5E5E5, 0x00E6E6E6, 0x00E7E7E7,
	0x00E8E8E8, 0x00E9E9E9, 0x00EAEAEA, 0x00EBEBEB,
	0x00ECECEC, 0x00EDEDED, 0x00EEEEEE, 0x00EFEFEF,
	0x00F0F0F0, 0x00F1F1F1, 0x00F2F2F2, 0x00F3F3F3,
	0x00F4F4F4, 0x00F5F5F5, 0x00F6F6F6, 0x00F7F7F7,
	0x00F8F8F8, 0x00F9F9F9, 0x00FAFAFA, 0x00FBFBFB,
	0x00FCFCFC, 0x00FDFDFD, 0x00FEFEFE, 0x00FFFFFF
};
#endif
EXPORT_SYMBOL(p_lg_mtk_lcdc_lut);

