#include <iostream>
#include "B.h"

B::B() : A(10)
{
    std::cout << "B::B()" << "\n";
}

void B::f()
{
    set(50);
    print();
}

void B::print()
{
    std::cout << "B::print()" << "\n";
}

B::~B()
{
    std::cout << "B::~B()" << "\n";
}