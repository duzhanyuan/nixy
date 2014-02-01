/*
    The Nixy Library
    Code covered by the MIT License

    Author: mutouyun (http://darkc.at)
*/

//////////////////////////////////////////////////////////////////////////

#if defined(NX_OS_WIN)
#   include "al/thread/condition_win.hxx"
#elif defined(NX_OS_LINUX)
#   include "al/thread/condition_linux.hxx"
#endif

//////////////////////////////////////////////////////////////////////////