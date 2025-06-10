#include "Point.h"
#include <iostream>

using namespace std;

int main(void)
{
    Point p(5, 9);
    cout << "The distance to the origin is: " << p.distanceToOrigin() << "\n";
    return 0;
}