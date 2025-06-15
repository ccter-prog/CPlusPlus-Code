#include "MyString.h"

int main(void)
{
    MyString a("hello World");
    a.print();
    a[0] = 'H';
    a.print();
    return 0;
}