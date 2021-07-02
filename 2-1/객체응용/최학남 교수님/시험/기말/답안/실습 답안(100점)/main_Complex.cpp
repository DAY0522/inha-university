#include <iostream>
using namespace std;

#include "Complex.h"

int main()
{
	Complex<double> a(15.0, 20.3);
	Complex<double> b(5.5, 7.6);
	Complex<int> c(50, 10);
	Complex<int> d(40, 55);
	Complex<double> e = a + b;
	Complex<int> f = c - d;


	a.printComplex();
	cout << "+";
	b.printComplex();
	cout << " = ";
	e.printComplex();

	cout << "\n";

	c.printComplex();
	cout << "+";
	d.printComplex();
	cout << " = ";
	f.printComplex();


	return 0;
}