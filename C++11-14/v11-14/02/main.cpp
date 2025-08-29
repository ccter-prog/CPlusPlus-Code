#include <iostream>
#include "My_unique_ptr.h"

int main()
{
    My_unique_ptr<int> p(new int(1000));
    std::cout << *p << '\n';
    return 0;
}