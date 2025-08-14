#pragma once

#include <iostream>

inline void My_Printf()
{}

template <typename T, typename... types>
void My_Printf(const char* s, T value, const types&... args)
{
    while (*s)
    {
        if (*s == '%' && *(s++) != '%')
        {
            std::cout << value;
            printf(s++, args...);
            return;
        }
    }
}