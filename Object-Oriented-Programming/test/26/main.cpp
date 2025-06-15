#include "Airplane.h"
#include "Bicycle.h"
#include "Car.h"
#include "Upcast.h"

int main(void)
{
    Airplane a;
    Bicycle b;
    Car c;
    upcast(&a);
    upcast(&b);
    upcast(&c);
    return 0;
}