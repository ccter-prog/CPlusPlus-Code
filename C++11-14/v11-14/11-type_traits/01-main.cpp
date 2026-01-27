#include "safe_add.h"
#include <print>

int main()
{
    std::println("{}\n{}", safe_add(5, 3), safe_add(2.5, 3.5));
    // int x = 10;
    // int* ptr = &x;
    // safe_add(ptr, ptr);
    return 0;
}