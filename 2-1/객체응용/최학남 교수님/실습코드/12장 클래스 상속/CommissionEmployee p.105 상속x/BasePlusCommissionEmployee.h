#ifndef BASE_PLUS_COMMISSION_EMPLOYEE_H
#define BASE_PLUS_COMMISSION_EMPLOYEE_H

#include <string>

using namespace std;

class BasePlusCommissionEmployee {
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales;
    double commissionRate;
    double baseSalary;

public:
    BasePlusCommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);
    double earnings() const;
    double getBaseSalary() const;
    double getCommissionRate() const;
    string getFirstName() const;
    double getGrossSales() const;
    string getLastName() const;
    string getSocialSecurityNumber() const;
    void print() const;
    void setBaseSalary(double);
    void setCommissionRate(double);
    void setFirstName(const string&);
    void setGrossSales(double);
    void setLastName(const string&);
    void setSocialSecurityNumber(const string&);
};

#endif
