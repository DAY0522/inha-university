#include "CommissionEmployee2.h"
#include <iostream>
#include <string>

using namespace std;

CommissionEmployee::CommissionEmployee(const string& first, double sales)
    : firstName(first)
{
    setGrossSales(sales);

    cout << "CommissionEmployee constructor: " << endl;
    print();
    cout << "\n\n";
}

CommissionEmployee::~CommissionEmployee()
{
    cout << "CommissionEmployee destructor: " << endl;
    print();
    cout << "\n\n";
}

string CommissionEmployee::getFirstName() const {
    return firstName;
}

double CommissionEmployee::getGrossSales() const {
    return grossSales;
}

void CommissionEmployee::setFirstName(const string& first) {
    firstName = first;
}

void CommissionEmployee::setGrossSales(double sales) {
    grossSales = sales < 0.0 ? 0 : sales;
}

void CommissionEmployee::print() const {
    cout << "commission employee: " << getFirstName()
        << "\ngross sales: " << getGrossSales() ;
}