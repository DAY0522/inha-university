#include <iomanip>
#include <iostream>
#include "CommissionEmployee.h"
using namespace std;

int main() {
    CommissionEmployee employee("Sue", "Jones", "222-22-2222", 10000, 0.06);
    cout << fixed << setprecision(2);
    cout << "Employee information obtained by getter funtions:" << endl
        << "First name is " << employee.getFirstName() << endl
        << "Last name is " << employee.getLastName() << endl
        << "Social security number is " << employee.getSocialSecurityNumber() << endl
        << "Gross sales is " << employee.getGrossSales() << endl
        << "Commission rate is " << employee.getCommissionRate() << endl;
    employee.setGrossSales(8000);
    employee.setCommissionRate(0.1);
    cout << "Updated employee information output by print function:" << endl;
    employee.print();
    cout << "Employee's earnings: $" << employee.earnings() << endl;
    return 0;
}
