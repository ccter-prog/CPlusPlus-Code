#ifndef __A_H__
#define __A_H__

template <typename T>
class A
{
    public:
        A(T *p);
        T *print(int index1, int index2);
        virtual ~A();
    private:
        T *p;
        T *q;
};

template <typename T>
inline A<T>::A(T *p) : p(p), q(nullptr)
{}

template <typename T>
inline T *A<T>::print(int index1, int index2)
{
    if (q)
    {
        delete[] q;
    }
    q = new T[index2 - index1];
    for (int i = index1; i < index2; i++)
    {
        q[i] = p[i];
    }
    return q;
}

template <typename T>
inline A<T>::~A()
{
    if (q)
    {
        delete[] q;
    }
    q = nullptr;
    p = nullptr;
}

#endif