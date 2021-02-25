#include<iostream>
using namespace std;

void sum(int n, int* add_sum, int* even_sum, int* odd_sum);

int main(void)
{
	int x;
	cin >> x;

	int add = 0;
	int even = 0;
	int odd = 0; 

	sum(x, &add, &even, &odd);
	cout << "add : " << add << endl;
	cout << "even : " << even << endl;
	cout << "odd : " << odd << endl;

	return 0;
}

void sum(int n, int* add_sum, int* even_sum, int* odd_sum)
{
	for (int i = 1; i <= n; i++)
	{
		*add_sum += i;
	}

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			continue;
		}
		*even_sum += i;
	}

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		*odd_sum += i;
	}
}