#include<iostream>
using namespace std;

int main(void)
{
	int i = 1;
	int sum = 0;
	do
	{
		sum += i;
	} while (i++<100);
	cout << sum;
	return 0;
}