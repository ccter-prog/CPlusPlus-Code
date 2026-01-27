#include "ArrayWrapper.h"
#include <print>

int main()
{
    int arr1[5];
    int arr2[10];
    // int not_array;
    ArrayWrapper<int[5]> w1(arr1);
    ArrayWrapper<int[10]> w2(arr2);
    std::println("{}\n{}", w1.get_size(), w2.get_size());
    return 0;
}