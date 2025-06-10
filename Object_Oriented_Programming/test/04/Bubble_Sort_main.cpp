#include <iostream>
#include "Bubble_Sort.h"

using namespace std;

int main(void)
{
    Bubble_Sort sort;
    const int NUMBER = 10;
    int arr[NUMBER] = {1, 2, 9 , 13, 134, 82, 14, 45, 13, 129};
    int len = sizeof(arr) / sizeof(arr[0]);
    sort.kongzhi(arr, len);
    for(int i = 0;i < len;i++)
    {
        cout << arr[i] << " ";
    }
    putchar('\n');
    return 0;
}