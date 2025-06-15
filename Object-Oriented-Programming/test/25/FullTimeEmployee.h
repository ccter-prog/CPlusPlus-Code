#ifndef __FullTimeEmployee_H__
#define __FullTimeEmployee_H__

#include "Employee.h"

class FullTimeEmployee : public Employee
{
    public:
        FullTimeEmployee(double salary);
        virtual double calculateSalary() const override;
    private:
        double monthlySalary;
};

inline FullTimeEmployee::FullTimeEmployee(double salary) : monthlySalary(salary)
{}

inline double FullTimeEmployee::calculateSalary() const
{
    return monthlySalary;
}

#endif