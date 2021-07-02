#ifndef BASE_PLUS_COMMISSION_EMPLOYEE_H
#define BASE_PLUS_COMMISSION_EMPLOYEE_H

#include <string>
#include "CommissionEmployee2.h"

using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const string&, double = 0.0, double = 0.0);
    ~BasePlusCommissionEmployee();

    void setBaseSalary(double);
    double getBaseSalary() const;

    void print() const;

private:
    double baseSalary;
};

#endif