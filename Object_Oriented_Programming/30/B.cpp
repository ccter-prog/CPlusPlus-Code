#include "B.h"

const A operator -(const A &a, const A &b)
{
    return A(a.i - b.i);
}