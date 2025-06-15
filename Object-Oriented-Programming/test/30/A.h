#ifndef __A_H__
#define __A_H__

class A
{
    public:
        A(const char *s);
        const char *what() const;
        virtual ~A();
    private:
        char *str;
};

inline A::A(const char *s) : str(nullptr)
{
    int size = 0;
    for (; s[size] != '\0'; size++);
    size++;
    str = new char[size];
    for (int i = 0; i < size; i++)
    {
        str[i] = s[i];
    }
}

inline const char *A::what() const
{
    return str;
}

inline A::~A()
{
    if (str)
    {
        delete[] str;
    }
    str = nullptr;
}

#endif