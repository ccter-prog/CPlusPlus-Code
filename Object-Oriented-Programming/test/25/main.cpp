#include "FullTimeEmployee.h"
#include "PartTimeEmployee.h"
#include "Upcast.h"

int main(void)
{
    FullTimeEmployee fullTime(5000.0);
    PartTimeEmployee partTime(20.0, 80);
    upcast(&fullTime);
    upcast(&partTime);
    return 0;
}