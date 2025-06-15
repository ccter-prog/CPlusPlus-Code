#ifndef __Airplane_H__
#define __Airplane_H__

#include "Vehicle.h"

class Airplane : public Vehicle
{
    public:
        virtual void move() override;
};

inline void Airplane::move()
{
    std::cout << "Airplane is flying" << "\n";
}

#endif