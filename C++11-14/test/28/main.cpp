#include <iostream>
#include "Math.h"

namespace Math
{
    double cube(double x) { return x * x * x; }
}

int main()
{
    std::cout << Math::PI << '\n';
    return 0;
}