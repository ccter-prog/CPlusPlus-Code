#include <iostream>
#include "Upcast.h"

void upcast(Employee *p)
{
    double temp = p -> calculateSalary();
    std::cout << temp << "\n";
}