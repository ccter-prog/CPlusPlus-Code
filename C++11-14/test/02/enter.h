#ifndef __enter_H__
#define __enter_H__

#include <iostream>

inline void enter(void)
{
    std::cout.put('\n');
    std::cout << "------------------------------------------------------------------------" << "\n";
    std::cout.put('\n');
}

#endif