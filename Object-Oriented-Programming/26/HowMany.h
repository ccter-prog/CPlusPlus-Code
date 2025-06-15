#ifndef __HowMany_H__
#define __HowMany_H__

#include <iostream>
#include <string>

extern int objectCount;

class HowMany
{
    public:
        HowMany();
        HowMany(const HowMany &a);
        void print(const std::string &msg = "");
        ~HowMany();
};

inline HowMany::HowMany()
{
    objectCount++;
    print("HowMany()");
}

inline HowMany::HowMany(const HowMany &a)
{
    objectCount++;
    print("HowMany(HowMany &a)");
}

inline void HowMany::print(const std::string &msg)
{
    if(msg.size() != 0)
    {
        std::cout << msg << ": ";
    }
    std::cout << "objectCount = " << objectCount << "\n";
}

inline HowMany::~HowMany()
{
    objectCount--;
    print("~HowMany()");
}

#endif