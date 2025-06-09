#include <iostream>
#include "A.h"

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 76, 8, 9, 10};
    A<int> a(arr);
    int *p = a.print(0, 4);
    for (int i = 0; i < 4; i++)
    {
        std::cout << p[i] << "\n";
    }

    return 0;
}