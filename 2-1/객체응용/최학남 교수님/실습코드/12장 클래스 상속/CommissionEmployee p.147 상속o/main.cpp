#include <iomanip>
#include <iostream>
#include "BasePlusCommissionEmployee.h"

using namespace std;

int main() {
    BasePlusCommissionEmployee employee("Bob", "Lewis", "333-33-3333", 5000, 0.04, 300);
    cout << fixed << setprecision(2);
    cout << "Employee information obtained by get functions: " << endl
        << "First name is " << employee.getFirstName() << endl
        << "Last name is " << employee.getLastName() << endl
        << "Social security number is " << employee.getSocialSecurityNumber() << endl
        << "Gross sales is " << employee.getGrossSales() << endl
        << "Commission rate is " << employee.getCommissionRate() << endl
        << "Base salary is " << employee.getBaseSalary() << endl;

    employee.setBaseSalary(1000);

    cout << "\nUpdated employee information output by print function: \n" << endl;
    employee.print();

    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
    return 0;
}