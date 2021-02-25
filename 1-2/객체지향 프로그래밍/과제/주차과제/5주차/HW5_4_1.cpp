#include<iostream>
using namespace std;

int main(void)
{
	int a;
	int max=-2147483648, index = 0;
	cout << "Enter 10 numbers" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		if (a>max)
		{
			max = a;
			index = i;	
		}
	}
	cout << "The max : " << max << endl;
	cout << "The location of max : " << index << endl;

	return 0;
}