#include<iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	cout << "Enter 3 numbers" << endl;
	cin >> a >> b >> c;
	int max;
	if (a > b)
	{
		if (a > c)
		{
			max = a;
		}
		else
		{
			max = c;
		}
	}
	else
	{
		if (b > c)
		{
			max = b;
		}
		else
		{
			max = c;
		}
	}
	cout << max << " is the greatest." << endl;

	return 0;
}