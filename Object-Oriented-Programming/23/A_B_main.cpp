#include "A.h"
#include "B.h"

void callprint(A *p);

int main(void)
{
    A a;
    B b;
    callprint(&b);
    return 0;
}

void callprint(A *p)
{
    p -> print();
}