#include "add.h"
#include <print>

int main()
{
    std::println("{}", add<int, int>(5, 3));
    std::println("{}", add<double, double>(2.5, 3.5));
    return 0;
}