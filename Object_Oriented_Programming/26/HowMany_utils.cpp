#include <iostream>
#include "HowMany_utils.h"

HowMany f(HowMany x)
{
    std::cout << "begin of f" << "\n";
    x.print("x argument inside f()");
    std::cout << "end of f" << "\n";
    return x;
}