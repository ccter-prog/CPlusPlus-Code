#include <utility>
#include "process.h"

int main()
{
    int a = 0;
    forward(2);
    forward(std::move(a));
    return 0;
}