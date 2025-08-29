#include <iostream>
#include "My_shared_ptr.h"

int main()
{
    My_shared_ptr<int> a(new int(100));
    std::cout << *a << '\n';
    return 0;
}