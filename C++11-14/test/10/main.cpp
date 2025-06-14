#include "GenericContainer.h"

int main()
{
    GenericContainer <std::vector> a;
    GenericContainer <std::list> b;
    a.push(10);
    a.print();
    b.push(100);
    b.print();
    return 0;
}