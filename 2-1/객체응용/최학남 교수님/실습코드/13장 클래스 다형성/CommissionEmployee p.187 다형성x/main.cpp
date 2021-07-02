#include <iomanip>
#include <iostream>
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"

using namespace std;

int main() {
    CommissionEmployee commissionEmployee("Sue", "Jones", "222-22-2222", 10000, 0.06);
    CommissionEmployee* commissionEmployeePtr = 0;
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "333-33-3333", 5000, 0.04, 300);
    BasePlusCommissionEmployee* basePlusCommissionEmployeePtr = 0;

    cout << fixed << setprecision(2);

    cout << "Print base-class and derived-class objects:\n" << endl;
    commissionEmployee.print();
    cout << endl;
    basePlusCommissionEmployee.print();
    cout << endl;

    commissionEmployeePtr = &commissionEmployee;
    cout << "\nCalling print with base-class pointer to\nbase-class object invokes base-class print function:\n" << endl;
    commissionEmployeePtr->print();
    cout << endl;

    basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\nCalling print with derived-class pointer to derived-class object invokes derived-class print function:" << endl;
    basePlusCommissionEmployeePtr->print();
    cout << endl;

    commissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\nCalling print with base-class pointer to derived-class object\ninvokes base-class print function on that derived-class object:\n" << endl;
    commissionEmployeePtr->print();
    cout << endl;
    return 0;
}