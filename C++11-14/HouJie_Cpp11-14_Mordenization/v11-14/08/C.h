#ifndef __C_H__
#define __C_H__

#include <iostream>
#include <string>

class C
{
    public:
        explicit C(const std::string &s);
        friend std::ostream &operator <<(std::ostream &os, const C &obj);
};

inline C::C(const std::string &s)
{}

#endif