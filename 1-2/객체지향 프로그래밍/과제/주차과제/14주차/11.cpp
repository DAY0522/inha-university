#include<iostream>
using namespace std;

void addmult(int a, int b, int* sum, int* mult);

int main()
{
	int x = 10;
	int y = 20;
	int s;
	int m;

	addmult(x, y, &s, &m);
	cout << s << ' ' << m << endl;

	return 0;
}

void addmult(int a, int b, int* sum, int* mult)
{
	*sum = a + b;
	*mult = a * b;
}