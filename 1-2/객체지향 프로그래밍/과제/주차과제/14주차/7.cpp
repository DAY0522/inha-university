#include<iostream>
using namespace std;

int main()
{
	int a[] = { 10,20,30,40,50 };
	int* p;

	p = a;
	cout << "1 = " << a[0] << " 2 = " << a[1] << " 3 = " << a[2] << endl;
	cout << "1 = " << p[0] << " 2 = " << p[1] << " 3 = " << p[2] << endl;

	p[0] = 60;
	p[1] = 70;
	p[2] = 80;

	cout << "1 = " << a[0] << " 2 = " << a[1] << " 3 = " << a[2] << endl;
	cout << "1 = " << p[0] << " 2 = " << p[1] << " 3 = " << p[2] << endl;

	return 0;
}