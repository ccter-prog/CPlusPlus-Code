#include <iostream>
#include <string>
#include "Array.h"

int main()
{
    Array<std::string> arr;
    arr.emplace_back("Hello");
    std::cout << arr[0] << '\n';
    return 0;
}