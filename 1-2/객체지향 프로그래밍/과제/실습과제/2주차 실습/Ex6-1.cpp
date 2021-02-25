#include<iostream>
#include<iomanip>
using namespace std;

int main_6_1()
{
	float x = 1.234567890123456789;
	double y = 1.234567890123456789;

	//printf("size of float = %d\n", sizeof(float));
	//printf("size of float = %d\n", sizeof(double));

	cout << fixed;
	cout.precision(25); // 소수점 2번째 자리까지 고정
	cout << "x = " << setw(30) << x << endl;
	//printf("x = %30.25\n", x);

	cout << fixed;
	cout.precision(25); // 소수점 2번째 자리까지 고정
	cout << "y = " << setw(30) << y << endl;
	//printf("y = %30.25\n", y);

	//setw는 자리 크기 고정시키는 것
	//fixed, precision은 소수점 자리수 설정하는 것


	return 0;
}