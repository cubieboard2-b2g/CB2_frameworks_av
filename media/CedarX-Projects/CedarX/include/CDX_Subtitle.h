/*******************************************************************************
--                                                                            --
--                    CedarX Multimedia Framework                             --
--                                                                            --
--          the Multimedia Framework for Linux/Android System                 --
--                                                                            --
--       This software is confidential and proprietary and may be used        --
--        only as expressly authorized by a licensing agreement from          --
--                         Softwinner Products.                               --
--                                                                            --
--                   (C) COPYRIGHT 2011 SOFTWINNER PRODUCTS                   --
--                            ALL RIGHTS RESERVED                             --
--                                                                            --
--                 The entire notice above must be reproduced                 --
--                  on all copies and should not be removed.                  --
--                                                                            --
*******************************************************************************/

#ifndef CDX_Subtitle_H_
#define CDX_Subtitle_H_

#include "CDX_Charset.h"

enum CEDARX_SUBTITLE_FILE_FMT
{
    CDX_SUBTITLE_NONE    = 0,
    CDX_SUBTITLE_UNKNOWN ,
    CDX_SUBTITLE_LRC     ,
    CDX_SUBTITLE_SRT     ,
    CDX_SUBTITLE_KSC     ,
    CDX_SUBTITLE_SMI     ,
    CDX_SUBTITLE_SSA     ,
    CDX_SUBTITLE_TXT     ,
    CDX_SUBTITLE_SUB     ,
    CDX_SUBTITLE_IDXSUB  ,
    CDX_SUBTITLE_ITXT    ,
    CDX_SUBTITLE_ISUB    ,
    CDX_SUBTITLE_ISSA    ,
    CDX_SUBTITLE_PGS     ,
    CDX_SUBTITLE_ITTXT   ,
};

typedef enum CEDARX_SUBTITLE_ENCODE_TYPE
{
    CDX_SUBTITLE_ENCODE_UNKNOWN = SUB_CHARSET_UNKNOWN,// unknown subtitle encode type
    CDX_SUBTITLE_ENCODE_NONE    = SUB_CHARSET_UNKNOWN,  // none subtitle bitstream
    CDX_SUBTITLE_ENCODE_BITMAP  = SUB_CHARSET_BITMAP,    // subtitle encode type is bitmap, 4 colors supported.
    CDX_SUBTITLE_ENCODE_UTF8    = SUB_CHARSET_UTF_8,      // subtitle encode type is UTF8
    CDX_SUBTITLE_ENCODE_GB2312  = SUB_CHARSET_HZ_GB_2312,    // subtitle encode type is GB2312
    CDX_SUBTITLE_ENCODE_UTF16LE = SUB_CHARSET_UTF_16LE,   // subtitle encode type is UTF16-LE
    CDX_SUBTITLE_ENCODE_UTF16BE = SUB_CHARSET_UTF_16BE,   // subtitle encode type is UTF16-BE
    CDX_SUBTITLE_ENCODE_UTF32LE = SUB_CHARSET_UTF_32LE,   // subtitle encode type is UTF32-LE
    CDX_SUBTITLE_ENCODE_UTF32BE = SUB_CHARSET_UTF_32BE,   // subtitle encode type is UTF32-BE
    CDX_SUBTITLE_ENCODE_BIG5    = SUB_CHARSET_BIG5,      // subtitle encode type is BIG5
    CDX_SUBTITLE_ENCODE_GBK     = SUB_CHARSET_GBK,       // subtitle encode type is GBK
    CDX_SUBTITLE_ENCODE_ANSI    = SUB_CHARSET_UTF_8,      // subtitle encode type is text, unknown character encode type

    CDX_SUBTITLE_ENCODE_

} CEDARX_SUBTITLE_ENCODE_TYPE;

typedef enum CEDARX_SUBTITLE_SRC_TYPE{
	CDX_SUBTITLE_UNKOWN = 0,
	CDX_SUBTITLE_EXTERNAL,
	CDX_SUBTITLE_IN_LINE
}CEDARX_SUBTITLE_SRC_TYPE;
#endif
