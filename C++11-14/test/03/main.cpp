#include <iostream>
#include "Array.h"

int main()
{
    Array<int> arr = {1, 2, 3};
    Array<int>::iterator pos = arr.begin() + 1;
    pos = arr.insert(pos, 10);
    pos = arr.insert(pos, 20);
    for (size_t i = 0; i < arr.length(); i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout.put('\n');
    return 0;
}