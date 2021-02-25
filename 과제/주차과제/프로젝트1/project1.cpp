#include<iostream>
#include<math.h>
using namespace std;

#define n 11

double square(double a);
double arr_sig(double arr[]);

int main(void)
{
	double x[n] = { 34.22,39.87,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.71,55.15 };
	double y[n] = { 102.43,100.93,97.43,97.81,98.32,98.32,100.07,97.08,91.59,94.85,94.65 };

	double xy[n];
	double x_sq[n];
	double y_sq[n];

	for (int i = 0; i < n; i++)
	{
		xy[i] = x[i] * y[i];
		x_sq[i] = square(x[i]);
		y_sq[i] = square(y[i]);
	}

	double r = (n * arr_sig(xy) - arr_sig(x) * arr_sig(y))
		/ sqrt((n * arr_sig(x_sq) - square(arr_sig(x))) *
			(n * arr_sig(y_sq) - square(arr_sig(y))));

	cout << "r = " << r << endl;

	return 0;
}

double square(double a)
{
	a *= a;
	return a;
}

double arr_sig(double arr[])
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
