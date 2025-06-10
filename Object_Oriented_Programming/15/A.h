#ifndef __A_H__
#define __A_H__

class A
{
    public:
        A(int j);
        void print();
        void print(int k);
        ~A();
    protected:
        void set(int j);
    private:
        int i;
};

#endif