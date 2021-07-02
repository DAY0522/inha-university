#include <iostream>
using namespace std;

#include "PhoneNumber.h"

int main()
{
	PhoneNumber phone;

	cout << "Enter phone number in the form (123) 456-7890:" << endl;

	cin >> phone;
	cout << "The phone number entered as: ";

	cout << phone << endl;

	return 0;
}