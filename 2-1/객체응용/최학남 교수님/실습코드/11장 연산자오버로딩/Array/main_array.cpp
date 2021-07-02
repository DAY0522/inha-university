#include<iostream>
using namespace std;

#include "Array.h"

int main()
{
	Array integers1(7);
	Array integers2;

	cout << "size of Array integers1 is "
		<< integers1.getSize()
		<< "\nArray after initialization:\n" << integers1;

	cout << "size of Array integers2 is "
		<< integers2.getSize()
		<< "\nArray after initialization:\n" << integers2;

	cout << "\nEnter 17 integers:" << endl;
	cin >> integers1 >> integers2;

	cout << "\nAfter input, the Arrays contain:\n"
		<< "integers1:\n" << integers1
		<< "integers2:\n" << integers2;

	cout << "\nEvaluating: integers1 != ingegers2" << endl;

	if (integers1 != integers2)
		cout << "integers1 and integers2 are not equal" << endl;

	Array integers3(integers1);

	cout << "\nsize of Array integers3 is "
		<< integers3.getSize()
		<< "\nArray after initialization:\n" << integers3;

	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1 = integers2;

	cout << "integers1:\n" << integers1
		<< "integers2:\n" << integers2;

	cout << "\nEvaluating: integers1 == ingegers2" << endl;

	if (integers1 == integers2)
		cout << "integers1 and integers2 are equal" << endl;

	cout << "\nintegers1[5] is " << integers1[5];

	cout << "\n\nAssigning 1000 to integers1[5]" << endl;
	cout << "integers1:\n" << integers1;

	cout << "\nAttempt to assign 1000 to integers1[15]" << endl;
	//integers[15] = 1000;

	return 0;
}