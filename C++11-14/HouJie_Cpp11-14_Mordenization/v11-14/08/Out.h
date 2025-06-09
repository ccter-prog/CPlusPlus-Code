#ifndef __Out_H__
#define __Out_H__

#include "C.h"

inline std::ostream &operator <<(std::ostream &os, const C &obj)
{
    os << "This's operator <<" << "\n";
    return os;
}

#endif