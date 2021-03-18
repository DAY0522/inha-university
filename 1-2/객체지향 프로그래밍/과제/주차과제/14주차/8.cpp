#include<iostream>
using namespace std;

void sub(int* p);

int main()
{
	int i = 100;

	sub(&i);

	cout << i << endl;

	return 0;
}

void sub(int* p)
{
	*p = 200;
}