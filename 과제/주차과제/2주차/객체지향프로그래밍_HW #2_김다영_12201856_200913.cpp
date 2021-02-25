#include<iostream>
using namespace std;

int main(void)
{
	char Grade = 65;
	short Weight = 78;
	int Salary = 2000000;
	long Distance1 = 149600000;
	unsigned int Price_of_apt = 2200000000;
	float Height = 178.9;
	float Distance2 = 2e+19;
	double Distance3 = 3e+123;

	cout << "Grade : " << Grade << endl;
	cout << "Weight : " << Weight << "kg" << endl;
	cout << "Salary : " << Salary << "¿ø" << endl;
	cout << "Distance1 : " << Distance1 << "km" << endl;
	cout << "Price_of_apt : " << Price_of_apt << "¿ø" << endl;
	cout << "Height : " << Height << "cm" << endl;
	cout << "Distance2 : " << Distance2 << "km" << endl;
	cout << "Distance3 : " << Distance3 << "km" << endl;

	return 0;
}