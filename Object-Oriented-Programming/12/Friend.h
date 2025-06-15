#ifndef __Friend_H__
#define __Friend_H__

struct X;

struct Y
{
    void f(X *);
};

struct X
{
    public:
        X();
        friend void g(X *, int);
        friend void Y::f(X *);
        friend struct Z;
        friend void h();
    private:
        int i;
};

#endif