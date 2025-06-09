#ifndef __print_H__
#define __print_H__

#include <iostream>

inline void print(std::initializer_list<int> vals)
{
    for (std::initializer_list<int>::iterator p = vals.begin(); p != vals.end(); p++)
    {
        std::cout << *p << "\n";
    }
}

#endif