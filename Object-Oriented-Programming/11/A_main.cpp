#include "A.h"

int main(void)
{
    A *p = new A[10];
    for(int i = 0;i < 10;i++)
    {
        p[i].set(i);
    }
    delete[] p;
    int *q = NULL;
    delete(q);
    return 0;
}