#include<iostream>
using namespace std;

int main()
{
	int i;
	double* pd;

	pd = &i;
	*pd = 36.4;

	return 0;
}