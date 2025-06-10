#include <iostream>
#include "Bubble_Sort.h"

using namespace std;

Bubble_Sort::Bubble_Sort()
{
    control = -1;
}

void Bubble_Sort::kongzhi(int *arr, int size_arr)
{
    do
    {
        cout << "1.正冒泡排序 2.反冒泡排序 0.退出，请输入：";
        cin >> control;
        switch(control)
        {
            case 1:
                positive_sorting(arr, size_arr);
                cout << "排序完成" << "\n";
                break;
            case 2:
                reverse_sort(arr, size_arr);
                cout << "排序完成" << "\n";
                break;
            case 0:
                cout << "退出" << "\n";
                break;
            default:
                cout << "输入无效，请重新输入！" << "\n";
                break;
        }
    } while(control);
}

void Bubble_Sort::positive_sorting(int *arr, int size_arr)
{
    for(int i = 0;i < size_arr;i++)
    {
        for(int j = 0;j < size_arr - i;j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Bubble_Sort::reverse_sort(int *arr, int size_arr)
{
    for(int i = 0;i < size_arr;i++)
    {
        for(int j = 0;j < size_arr - i;j++)
        {
            if(arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}