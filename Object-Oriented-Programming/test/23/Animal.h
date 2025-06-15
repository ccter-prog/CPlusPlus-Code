#ifndef __Animal_H__
#define __Animal_H__

#include <iostream>

class Animal
{
    public:
        virtual void speak(void) const;
};

inline void Animal::speak(void) const
{
    std::cout << "This is Animal::speak()" << "\n";
}

#endif