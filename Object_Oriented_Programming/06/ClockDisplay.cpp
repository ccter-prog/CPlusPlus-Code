#include "ClockDisplay.h"
#include <iostream>

using namespace std;

void ClockDisplay::start(void)
{
    hours.increase();
    minutes.increase();
    hours.print();
    minutes.print();
}