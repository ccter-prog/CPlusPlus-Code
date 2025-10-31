#include <iostream>
#include "Array.h"

int main()
{
    Array<int> arr = {10, 20, 30, 40, 50};
    Array<int>::iterator it = arr.begin() + 2;
    arr.erase(it);
    for (auto i : arr)
    {
        std::cout << i << ' ';
    }
    std::cout.put('\n');
    return 0;
}