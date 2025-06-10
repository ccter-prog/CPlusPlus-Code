#include "A.h"

A::A()
{
    i = 0;
    cout << "A::A()" << endl;
}

A::~A()
{
    cout << "A::~A(), i = " << i << endl;
}

void A::set(int i)
{
    this -> i = i;
}

void A::f()
{
    cout << "Hello";
}