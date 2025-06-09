#include <iostream>

template <typename T>
inline int add(std::initializer_list<T> vals)
{
    int sum = 0;
    for (typename std::initializer_list<T>::iterator p = vals.begin(); p != vals.end(); p++)
    {
        sum += *p;
    }
    return sum;
}

template <typename T, typename... types>
inline int add_s(const T &firstArg, const types &...args)
{
    
}