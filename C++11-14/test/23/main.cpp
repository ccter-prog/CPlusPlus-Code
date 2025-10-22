#include <string>
// #include <utility>
#include "forwardTwo.h"

int main()
{
    int x = 42;
    std::string s("test");
    forwardTwo(x, s);
    forwardTwo(42, "test");
    // forwardTwo(x, std::move(s));  会报错
    return 0;
}