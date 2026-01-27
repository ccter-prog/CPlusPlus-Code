#include "safe_deref.h"
#include <print>

int main()
{
    int x = 42;
    int* ptr = &x;
    std::println("{}", safe_deref(x));
    std::println("{}", safe_deref(ptr));
    safe_deref(ptr) = 100;
    std::println("{}", x);
    return 0;
}