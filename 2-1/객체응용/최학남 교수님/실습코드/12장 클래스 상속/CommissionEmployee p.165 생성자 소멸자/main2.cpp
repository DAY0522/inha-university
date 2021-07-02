#include <iostream>
#include <iomanip>
using namespace std;

#include "BasePlusCommissionEmployee2.h"

int main()
{
    cout << fixed << setprecision(2);
    {
        CommissionEmployee employee1("Bob", 5000);
    }

    cout << endl;
    BasePlusCommissionEmployee employee2("Lisa", 2000, 800);

    cout << endl;
    BasePlusCommissionEmployee employee3("Mark", 8000, 2000);

    cout << endl;

    return 0;
}