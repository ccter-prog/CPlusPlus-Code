#ifndef __Array_H__
#define __Array_H__

class Array
{
    public:
        Array();
        Array(const int Array_size);
        Array(const Array &obj);
        int &operator [](int index);
        int &operator *();
        int &operator *(const int &p);
        friend int *operator +(Array &obj, const int num);
        Array &operator =(Array &obj);
        friend bool operator ==(const Array &obj1, const Array &obj2);
        Array &push_back(const int num);
        int length(const Array &obj);
        virtual ~Array();
    private:
        int *arr;
        int size;
        int index;
};

inline Array::Array() : arr(nullptr), size(0), index(0)
{}

inline Array::Array(const int Array_size) : arr(nullptr), size(Array_size), index(0)
{
    arr = new int[Array_size];
}

inline Array::Array(const Array &obj)
{
    size = obj.size;
    index = obj.index;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = obj.arr[i];
    }
}

inline int &Array::operator [](int index)
{
    return arr[index];
}

inline int &Array::operator *()
{
    return arr[0];
}

inline int &Array::operator *(const int &p)
{
    return arr[p];
}

inline Array &Array::operator =(Array &obj)
{
    if (obj.arr)
    {
        delete[] arr;
        obj.arr = nullptr;
    }
    obj.size = size;
    obj.arr = new int[obj.size];
    for (int i = 0; i < size; i++)
    {
        obj.arr[i] = arr[i];
    }
    return *this;
}

inline Array &Array::push_back(const int num)
{
    if (!arr || index == size)
    {
        int *p = arr;
        size *= 2;
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = p[i];
        }
        delete[] p;
    }
    else
    {
        arr[index] = num;
        index++;
    }
    return *this;
}

inline int Array::length(const Array &obj)
{
    return obj.size;
}

inline Array::~Array()
{
    if (arr)
    {
        delete[] arr;
    }
    arr = nullptr;
}

#endif