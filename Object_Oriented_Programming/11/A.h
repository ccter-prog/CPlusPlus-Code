#ifndef __A_H__
#define __A_H__

#include <iostream>

using namespace std;

class A
{
    public:
        void set(int i);
        void f();
        A();
        ~A();
    private:
        int i;
};

#endif