#include "MyString.h"

size_t MyString::DCtor = 0;
size_t MyString::Ctor = 0;
size_t MyString::CCtor = 0;
size_t MyString::CAsgn = 0;
size_t MyString::MCtor = 0;
size_t MyString::MAsgn = 0;
size_t MyString::Dtor = 0;

std::ostream& operator<<(std::ostream& os, const MyString& str)
{
    if (str._data)
    {
        os << str._data;
    }
    return os;
}