#include "Score.h"

Score::Score() : max(0)
{}

int Score::score(int *arr, int size_arr)
{
    for(int i = 0;i < size_arr;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}