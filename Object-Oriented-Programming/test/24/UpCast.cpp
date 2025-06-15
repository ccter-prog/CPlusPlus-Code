#include <iostream>
#include "UpCast.h"

void upcast(Shape *p)
{
    double temp = p -> area();
    std::cout << temp << "\n";
}