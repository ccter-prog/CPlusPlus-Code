#include <iostream>

void f(int i)
{
    std::cout << "void f(int i)\n";
}

void f(void* p)
{
    std::cout << "void f(void* p)\n";
}

int main()
{
    f(0);
    if (!NULL)
    {
        std::cout << "NULL == 0\n";
    }
    f(NULL);
    f(nullptr);
    nullptr_t nl;
    f(nl);
    return 0;
}