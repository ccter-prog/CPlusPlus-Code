#include "gcd.h"
#include <print>

int main()
{
    static_assert(gcd(48, 18) == 6);
    static_assert(gcd(7, 13) == 1);
    static_assert(gcd(0, 5) == 5);

    std::println("All compile-time checks passed!");
    return 0;
}