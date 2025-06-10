#ifndef __safeDivide_h__
#define __safeDivide_h__

#include <iostream>

inline int safeDivide(int a, int b)
{
    try
    {
        if (b == 0)
        {
            throw 1;
        }
    }
    catch (int)
    {
        std::cout << "调用catch" << "\n";
        b = 5;
    }
    return a / b;
}

#endif