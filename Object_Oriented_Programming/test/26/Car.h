#ifndef __Car_H__
#define __Car_H__

#include "Vehicle.h"

class Car : public Vehicle
{
    public:
        virtual void move() override;
};

inline void Car::move()
{
    std::cout << "Car is driving" << "\n";
}

#endif