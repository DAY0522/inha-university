#include<iostream>
using namespace std;

int main()
{
	int n = 10;
	int* m;
	m = &n;
	cout << "Address : " << m << " Value : " << *m << endl;

	n = 100;
	cout << "Address : " << m << " Value : " << *m << endl;

	return 0;
}