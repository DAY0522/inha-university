#include<iostream>
using namespace std;

int main_4(void)
{
	const double TAX_RATE = 0.15;
	double income, salary;

	cout << "insert your salary : ";
	//printf("insert your salary : ");
	cin >> salary;
	//scanf_s("%lf", &salary);

	income = salary - TAX_RATE * salary;
	cout << "net income : " << income << endl;
	//printf("net income : %lf\n", income);

	//TAX_RATE = 0.20; // const 선언으로 TAX_RATE는 변경 불가
	income = salary - TAX_RATE * salary;
	cout << "net income : " << income << endl;

	return 0;
}