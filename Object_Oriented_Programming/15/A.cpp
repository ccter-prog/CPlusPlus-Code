#include <iostream>
#include "A.h"

using namespace std;

A::A(int j) : i(0)
{
    cout << "A::A()" << "\n";
}

void A::set(int j)
{
    i = j;
}

void A::print()
{
    cout << "A::print() " << i << "\n";
}

void A::print(int k)
{
    cout << k;
    print();
}

A::~A()
{
    cout << "A::~A()" << "\n";
}