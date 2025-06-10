#ifndef __Fee_H__
#define __Fee_H__

#include "Fi.h"

class Fee
{
    public:
        Fee(int);
        Fee(const Fi &);
};

inline Fee::Fee(int)
{}

inline Fee::Fee(const Fi &)
{}

#endif