/*
    The Nixy Library
    Code covered by the MIT License

    Author: mutouyun (http://darkc.at)
*/

#pragma once

//////////////////////////////////////////////////////////////////////////

/*
    Standard Librarys
*/

// std::size_t, ...
#include <cstddef>
// std::printf, /*std::*/vsnprintf, std::vsprintf, ...
#include <cstdio>
// std::rand, std::srand, ...
#include <cstdlib>
// std::va_list, va_start, va_end
#include <cstdarg>
// std::memcpy, std::memset, ...
#include <cstring>
// std::cout, std::cerr, std::clog, ...
#include <iostream>
// std::setiosflags, ...
#include <iomanip>

/*
    Detect platforms
*/

// NX_OS, NX_CC, NDEBUG, ...
#include "al/platdetect.h"

//////////////////////////////////////////////////////////////////////////

// Namespace Define

#define NX_BEG              namespace nx {
#define NX_END              }

//////////////////////////////////////////////////////////////////////////
NX_BEG
//////////////////////////////////////////////////////////////////////////

// Global Types

typedef unsigned char       uchar;
typedef unsigned short      ushort;
typedef unsigned int        uint;
typedef unsigned long       ulong;
typedef long long           llong;
typedef unsigned long long  ullong;

typedef wchar_t             wchar;
typedef long double         ldouble;

typedef char*               pchar;
typedef const char*         cpchar;
typedef wchar_t*            pwchar;
typedef const wchar_t*      cpwchar;
typedef void*               pvoid;
typedef const void*         cpvoid;

typedef unsigned char       byte;

typedef std::size_t         size_t;
typedef std::ptrdiff_t      ptrdiff_t;

typedef signed char         sint8;
typedef uchar               uint8;
typedef short               sint16;
typedef ushort              uint16;
typedef int                 sint32;
typedef uint                uint32;
typedef llong               sint64;
typedef ullong              uint64;

//////////////////////////////////////////////////////////////////////////
NX_END
//////////////////////////////////////////////////////////////////////////