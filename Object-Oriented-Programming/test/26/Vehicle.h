#ifndef __Vehicle_H__
#define __Vehicle_H__

#include <iostream>

class Vehicle
{
    public:
        virtual void move();
};

inline void Vehicle::move()
{
    std::cout << "Vehicle is moving" << "\n";
}

#endif