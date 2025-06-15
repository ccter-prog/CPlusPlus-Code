#ifndef __Bubble_Sort_H__
#define __Bubble_Sort_H__

class Bubble_Sort
{
    public:
        void kongzhi(int *arr, int size_arr);
        Bubble_Sort();
    private:
        void positive_sorting(int *arr, int size_arr);
        void reverse_sort(int *arr, int size_arr);
        int control;
};

#endif