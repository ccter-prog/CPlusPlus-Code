#include <iostream>
#include <string>
#include "Array.h"

int main(void)
{
    Array<int> a(5);
    Array<std::string> b("Hello");
    std::cout << b[0] << '\n';
    return 0;
}