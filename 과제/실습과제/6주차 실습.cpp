#include<iostream>
using namespace std;

int square(int n);
int get_max(int a, int b);
int absolute(int x);
void draw_rect(int side);
int get_integer(void);
int power(int x, int y);
int factorial(int n);
int add(int a, int b);
int combination(int n, int r);


int main(void)
{
	int a, b;

	a = get_integer();
	b = get_integer();

	cout << "C(" << a << ", " << b << ") = " << combination(a, b) << endl;

}

int combination(int n, int r)
{
	return(factorial(n) / (factorial(r) * factorial(n - r)));
}

int add(int a, int b)
{
	return (a + b);
}

int square(int n) {
	return(n * n);
}

int get_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int absolute(int x)
{
	if (x > 0) {
		return x;
	}
	else
	{
		return -x;
	}
}

void draw_rect(int side)
{
	int x, y;
	for (y = 0; y < side; y++)
	{
		for (x = 0; x < side; x++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int get_integer(void)
{
	int n;
	cout << "Integer value : ";
	cin >> n;

	return n;
}

int power(int x, int y)
{
	int i;
	long result = 1;

	for (i = 0; i < y; i++)
	{
		result *= x;
	}

	return result;
}

int factorial(int n)
{
	int i;
	long result = 1;

	for (i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

/*
int main(void)
{
	int x, y, result;

	return 0;
}
*/

//ex 1)
//int main(void)
//{
//	int x, y, result;
//	x = 5;
//
//	result = square(x);
//	cout << square(x) << endl;
//	cout << result << endl;
//
//	return 0;
//}

//ex2)
//int main(void)
//{
//	int x, y, result;
//
//	cout << "Enter x, y" << endl;
//	cin >> x >> y;
//
//	result = get_max(x, y);
//
//	cout << "result : " << result << endl;
//	return 0;
//}

//ex3)
//int main(void)
//{
//	int x, y, result;
//	cout << "Enter x, y" << endl;
//	cin >> x >> y;
//
//	result = absolute(x);
//	cout << "absolute(x) : " << result << endl;
//
//	result = absolute(y);
//	cout << "absolute(y) : " << result << endl;
//
//	return 0;
//}

//ex4)
//int main(void)
//{
//	int x, y, result;
//	cout << "Enter x" << endl;
//	cin >> x;
//
//	draw_rect(x);
//
//	return 0;
//}

//ex5)
//int main(void)
//{
//	int x, y, result;
//	x = get_integer();
//	cout << "x : " << x << endl;
//
//	y = get_integer();
//	cout << "y : " << y << endl;
//
//	return 0;
//}

//ex6)
//int main(void)
//{
//	int x, y, result;
//	x = get_integer();
//	cout << "x : " << x << endl;
//
//	y = get_integer();
//	cout << "y : " << y << endl;
//
//	result = power(x, y);
//	cout << "result : " << result << endl;
//	return 0;
//}


//ex7)
//int main(void)
//{
//	int x, y, result;
//	x = get_integer();
//	cout << "x : " << x << endl;
//
//	result = factorial(x);
//	cout << "result : " << result << endl;
//	return 0;
//}

//int main(void)
//{
//	int x = 15, y, z, result;
//	z = square(x);
//	cout << "z : " << z << endl;
//}

//int main(void)
//{
//	int a, b;
//
//	a = get_integer();
//	b = get_integer();
//
//	cout << "C(" << a << ", " << b << ") = " << combination(a, b) << endl;
//
//}