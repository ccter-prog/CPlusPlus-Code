#include <iostream>
#include "Array.h"
#include "Array_Friend.h"

int main(void)
{
    Array a(5);
    Array b(5);
    a.push_back(10);
    a.push_back(20);
    b.push_back(10);
    b.push_back(20);
    int temp = *(a + 1);
    std::cout << temp << "\n";
    if (a == b)
    {
        std::cout << "a = b" << "\n";
    }
    return 0;
}