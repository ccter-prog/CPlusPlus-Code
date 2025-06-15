#include "Array.h"

int main(void)
{
    Array a(5);
    Array b;
    b = a;
    b.print();
    return 0;
}