#include <iostream>
#include "ArrayHandler.h"

int main()
{
    std::cout << ArrayHandler<int>::size << '\n';
    std::cout << ArrayHandler<int[5]>::size << '\n';
    std::cout << ArrayHandler<std::array<double, 3>>::size << '\n';
    return 0;
}