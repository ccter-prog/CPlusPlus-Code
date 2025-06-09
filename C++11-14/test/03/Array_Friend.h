#include "Array.h"

inline int *operator +(Array &obj, const int num)
{
    return &obj[num];
}

inline bool operator ==(const Array &obj1, const Array &obj2)
{
    bool ret = true;
    for (int i = 0; obj1.index == obj2.index && i < obj1.index; i++)
    {
        if (obj1.arr[i] != obj2.arr[i])
        {
            ret = false;
            break;
        }
    }
    return ret;
}