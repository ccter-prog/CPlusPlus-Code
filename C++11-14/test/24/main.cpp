#include <string>
#include "wrapper.h"

int main()
{
    int a = 1;
    std::string b("hello");
    wrapper(a, b, 3.14);
    wrapper("test", 42);
    return 0;
}