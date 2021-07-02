#include <iomanip>
#include <iostream>
#include "BasePlusCommissionEmployee2.h"
#include "CommissionEmployee2.h"

using namespace std;

int main() {
    CommissionEmployee commissionEmployee("Sue", "Jones", "222-22-2222", 10000, 0.06);
    CommissionEmployee* commissionEmployeePtr = 0;
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "333-33-3333", 5000, 0.04, 300);
    BasePlusCommissionEmployee* basePlusCommissionEmployeePtr = 0;

    cout << fixed << setprecision(2);

    cout << "Invoking print function on base-class and derived-class "
        <<"\nobjects with static binding\n\n";
    commissionEmployee.print();
    cout << "\n\n";
    basePlusCommissionEmployee.print();

    cout << "\n\n\nInvoking print function on base-class and derived-class "
        << "\nobjects with static binding";

    commissionEmployeePtr = &commissionEmployee;
    cout << "\n\nCalling virtual function print with base-class pointer"
        << "\nto base-class object invokes base-class "
        << "print function:\n\n";
    commissionEmployeePtr->print();
    cout << endl;

    basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\n\nCalling virtual function print with derived-class pointer"
        <<"\nto derived-class object invokes derived-class "
        << "print function:\n\n";
    basePlusCommissionEmployeePtr->print();
    cout << endl;

    commissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\n\nCalling virtual function print with base-class pointer"
        << "\nto derived-class object invokes derived-class "
        << "print function:\n\n";

    commissionEmployeePtr->print();
    cout << endl;

    return 0;
}