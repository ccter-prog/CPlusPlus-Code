#ifndef __A_H__
#define __A_H__

class A
{
    public:
        A();
        virtual ~A();
    private:
        int *temp;
};

inline A::A()
{
    temp = new int[99999999999999];
}

inline A::~A()
{
    if (temp)
    {
        delete[] temp;
    }
    temp = nullptr;
}

#endif