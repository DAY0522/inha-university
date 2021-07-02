#include <iostream>
using namespace std;

#include "BasePlusCommissionEmployee2.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first
    , double sales, double salary)
    : CommissionEmployee(first, sales)
{
    setBaseSalary(salary);

    cout << "BasePlusCommissionEmployee constructor: " << endl;
    print();
    cout << "\n\n";
}

BasePlusCommissionEmployee::~BasePlusCommissionEmployee()
{
    cout << "BasePlusCommissionEmployee destructor: " << endl;
    print();
    cout << "\n\n";
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    baseSalary = (salary < 0.0) ? 0 : salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}

void BasePlusCommissionEmployee::print() const {
    cout << "base-salaried " << endl;
    CommissionEmployee::print();

    cout << "\nbase salary : " << getBaseSalary();
}