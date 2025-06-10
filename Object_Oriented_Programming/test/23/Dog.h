#ifndef __Dog_H__
#define __Dog_H__

#include "Animal.h"

class Dog : public Animal
{
    public:
        virtual void speak(void) const override;
};

inline void Dog::speak(void) const
{
    std::cout << "This is Dog::speak()" << "\n";
}

#endif