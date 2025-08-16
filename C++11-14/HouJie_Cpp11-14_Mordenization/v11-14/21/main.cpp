#include <iostream>
#include "tup.h"
#include <string>

int main()
{
    tup<int, float, std::string> it1(41, 6.3, "nico");
    std::cout << it1.head() << '\n';
    std::cout << it1.tail().head() << '\n';
    std::cout << it1.tail().tail().head() << '\n';
    return 0;
}