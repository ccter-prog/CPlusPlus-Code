#include "Date.h"

int main(void)
{
    Date a(2025, 3, 24);
    a.print();
    ++a;
    a.print();
    a++;
    a.print();
    --a;
    a.print();
    a--;
    a.print();
    return 0;
}