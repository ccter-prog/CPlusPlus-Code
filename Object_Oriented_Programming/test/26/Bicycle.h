#ifndef __Bicycle_H__
#define __Bicycle_H__

#include "Vehicle.h"

class Bicycle : public Vehicle
{
    public:
        virtual void move() override;
};

inline void Bicycle::move()
{
    std::cout << "Bicycle is pedaling" << "\n";
}

#endif