#include<iostream>

using namespace std;

#define n 10

double square(double a);
double arr_sig(double arr[]);

int main(void)
{
	double x[n] = { 3.0, 4.5, 5.5, 6.5, 7.5, 8.5, 8.0, 9.0, 9.5, 10.0 };
	double y[n] = { 1.5, 2.0, 3.5, 5.0, 6.0, 7.5, 9.0, 10.5, 12.0, 14.0 };

	double xy[n];
	double x_sq[n];

	for (int i = 0; i < n; i++)
	{
		xy[i] = x[i] * y[i];
		x_sq[i] = square(x[i]);
	}

	double b = (n * arr_sig(xy) - arr_sig(x) * arr_sig(y))
		/ (n * arr_sig(x_sq) - square(arr_sig(x)));
	double a = (arr_sig(y) / n) - b * (arr_sig(x) / n);


	cout << "a = "<< a << endl;
	cout << "b = " << b << endl;

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
