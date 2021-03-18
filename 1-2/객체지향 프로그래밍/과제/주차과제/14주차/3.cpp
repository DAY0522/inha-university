#include<iostream>
using namespace std;

int main()
{
	int i = 10000;
	int* p, * q;

	p = &i;
	q = &i;

	*p = *p + 1;
	*q = *q + 1;

	cout << "i = " << i << endl;

	return 0;
}