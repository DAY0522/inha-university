#ifndef COMMISSION_EMPLOYEE_H
#define COMMISSION_EMPLOYEE_H

#include <string>

using namespace std;

class CommissionEmployee
{
public:
    CommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);

    double getCommissionRate() const;
    string getFirstName() const;
    double getGrossSales() const;
    string getLastName() const;
    string getSocialSecurityNumber() const;

    void setCommissionRate(double);
    void setFirstName(const string&);
    void setGrossSales(double);
    void setLastName(const string&);
    void setSocialSecurityNumber(const string&);

    double earnings() const;
    void print() const;

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales;
    double commissionRate;
};

#endif