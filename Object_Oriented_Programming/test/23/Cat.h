#ifndef __Cat_H__
#define __Cat_H__

#include "Animal.h"

class Cat : public Animal
{
    public:
        virtual void speak(void) const override;
};

inline void Cat::speak(void) const
{
    std::cout << "This is Cat::speak()" << "\n";
}

#endif