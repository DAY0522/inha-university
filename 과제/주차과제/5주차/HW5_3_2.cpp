#include<iostream>
using namespace std;

int main(void)
{
	int a, b;
	cout << "Enter two numbers" << endl;
	cin >> a >> b;
	if (b % a == 0)
	{
		cout << a << " is a factor of " << b << endl;
	}
	else
	{
		cout << a << " is not a factor of " << b << endl;
	}

	return 0;
}