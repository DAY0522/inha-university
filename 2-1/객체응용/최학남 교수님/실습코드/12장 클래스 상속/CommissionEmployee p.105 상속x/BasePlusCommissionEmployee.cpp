#include "BasePlusCommissionEmployee.h"
#include <iostream>
#include <string>

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first, const string& last, const string& ssn, double sales, double rate, double salary) {
    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;
    setGrossSales(sales);
    setCommissionRate(rate);
    setBaseSalary(salary);
}

double BasePlusCommissionEmployee::earnings() const {
    return baseSalary + commissionRate * grossSales;
}

double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}

double BasePlusCommissionEmployee::getCommissionRate() const {
    return commissionRate;
}

string BasePlusCommissionEmployee::getFirstName() const {
    return firstName;
}

double BasePlusCommissionEmployee::getGrossSales() const {
    return grossSales;
}

string BasePlusCommissionEmployee::getLastName() const {
    return lastName;
}

string BasePlusCommissionEmployee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}

void BasePlusCommissionEmployee::print() const {
    cout << "commission employee: " << firstName << ' ' << lastName << endl
        << "social security number: " << socialSecurityNumber << endl
        << "gross sales: " << grossSales << endl
        << "commission rate: " << commissionRate << endl
        << "base salary: " << baseSalary << endl;
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    baseSalary = salary < 0.0 ? 0 : salary;
}

void BasePlusCommissionEmployee::setCommissionRate(double rate) {
    commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0;
}

void BasePlusCommissionEmployee::setFirstName(const string& first) {
    firstName = first;
}

void BasePlusCommissionEmployee::setGrossSales(double sales) {
    grossSales = sales < 0.0 ? 0 : sales;
}

void BasePlusCommissionEmployee::setLastName(const string& last) {
    lastName = last;
}

void BasePlusCommissionEmployee::setSocialSecurityNumber(const string& ssn) {
    socialSecurityNumber = ssn;
}
