#include <iostream>
#include "TypeInfo.h"

int main()
{
    std::cout << TypeInfo<double>::name() << '\n';
    std::cout << TypeInfo<int>::name() << '\n';
    std::cout << TypeInfo<int*>::name() << '\n';
    std::cout << TypeInfo<char**>::name() << '\n';
    return 0;
}