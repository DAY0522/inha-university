#include<iostream>
using namespace std;

int main(void)
{
	int sum = 0;

	for (int i = 1; i <= 30; i++)
	{
		sum += i * i + 1;
	}

	cout << sum;
	return 0;
}