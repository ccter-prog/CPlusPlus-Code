#ifndef __Employee_H__
#define __Employee_H__

class Employee
{
    public:
        virtual double calculateSalary() const;
};

inline double Employee::calculateSalary() const
{
    return 0.0;
}

#endif