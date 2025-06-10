#include "Counter.h"

int main(void)
{
    Counter a(10);
    a.print();
    --a;
    a.print();
    a--;
    a.print();
    return 0;
}