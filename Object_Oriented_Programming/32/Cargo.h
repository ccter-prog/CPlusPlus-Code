#ifndef __Cargo_H__
#define __Cargo_H__

#include <iostream>

class Cargo
{
    public:
        Cargo &operator =(const Cargo &);
};

inline Cargo &Cargo::operator =(const Cargo &)
{
    std::cout << "inside Cargo::operator =()" << "\n";
    return *this;
}

#endif