#include<iostream>
using namespace std;

int main()
{
	int a[] = { 10,20,30,40,50 };

	cout << "a = " << a << endl;
	cout << "a + 1 = " << a + 1 << endl;

	cout << "a = " << *a << endl;
	cout << "a + 1 = " << *(a + 1) << endl;

	return 0;
}