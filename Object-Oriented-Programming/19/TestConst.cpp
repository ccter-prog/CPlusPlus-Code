#include <iostream>
#include "TestConst.h"

int main(void)
{
    int i;
    const int ci = 3;
    int *ip = &i;
    const int *cip = &ci;
    return 0;
}