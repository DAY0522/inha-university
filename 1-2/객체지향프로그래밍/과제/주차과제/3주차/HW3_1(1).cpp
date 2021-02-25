#include<iostream>
using namespace std;

int main(void)
{
	int i = 0;
	int sum = 0;
	while (i++ < 100)
		sum += i;
	cout << sum;
	return 0;
}