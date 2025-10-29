#include <iostream>
#include "Array.h"

int main()
{
    Array<int> arr = {1, 2, 3};
    arr.resize(5);
    for (auto i : arr)
    {
        std::cout << i << ' ';
    }
    std::cout.put('\n');
    arr.erase(0);
    for (auto i : arr)
    {
        std::cout << i << ' ';
    }
    std::cout.put('\n');
    return 0;
}