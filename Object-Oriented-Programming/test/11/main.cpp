#include <iostream>
#include "head.h"

int main(void)
{
    int a = 20;
    int b = 12;
    std::cout << "a = " << a << ", b = " << b << "\n";
    std::cout << "a + b = " << add(a, b) << "\n";
    std::cout << "a - b = " << subtract(a, b) << "\n";
    std::cout << "a * b = " << multiply(a, b) << "\n";
    std::cout << "a / b = " << divide(a, b) << "\n";
    return 0;
}