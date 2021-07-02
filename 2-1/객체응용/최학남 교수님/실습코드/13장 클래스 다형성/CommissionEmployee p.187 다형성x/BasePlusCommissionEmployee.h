#ifndef BASE_PLUS_COMMISSION_EMPLOYEE_H
#define BASE_PLUS_COMMISSION_EMPLOYEE_H

#include <string>
#include "CommissionEmployee.h"

using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee {
private:
    double baseSalary;

public:
    BasePlusCommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);
    double earnings() const;
    double getBaseSalary() const;
    void print() const;
    void setBaseSalary(double);
};

#endif