#include<iostream>
#include<iomanip>
using namespace std;

int main_6_2()
{
	float y = 6.5e2;

	printf("y=%f\n", y);
	printf("y=%e\n", y);

	cout << y << endl;
	cout.setf(ios::scientific, ios::floatfield);
	cout << y << endl;

	return 0;
}