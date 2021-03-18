#include<iostream>
using namespace std;

int main()
{
	int a[] = { 10,20,30,40,50 };

	cout << &a[0] << endl;
	cout << &a[1] << endl;
	cout << &a[2] << endl;

	cout << a << endl; 
	cout << *a << endl; 

	return 0;
}