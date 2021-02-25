#include<iostream>
using namespace std;

int main_3(void)
{
	const double TAX_RATE = 0.15;
	double income, salary;

	cout << "insert your salary : ";
	//printf("insert your salary : ");
	cin >> salary;
	//scanf_s("%lf", &salary);

	income = salary - TAX_RATE * salary;
	cout << "net income : " << income << endl;
	printf("net income : %lf\n", income);


	return 0;
}