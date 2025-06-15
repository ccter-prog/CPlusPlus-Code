#ifndef __PartTimeEmployee_H__
#define __PartTimeEmployee_H__

#include "Employee.h"

class PartTimeEmployee : public Employee
{
    public:
        PartTimeEmployee(double rate, int hours);
        virtual double calculateSalary() const override;
    private:
        double hourlyRate;
        int hoursWorked;
};

inline PartTimeEmployee::PartTimeEmployee(double rate, int hours) : hourlyRate(rate), hoursWorked(hours)
{}

inline double PartTimeEmployee::calculateSalary() const
{
    return hourlyRate * hoursWorked;
}

#endif