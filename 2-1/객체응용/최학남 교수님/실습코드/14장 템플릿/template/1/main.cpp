#include <iostream>
using namespace std;

#include "Complex.h"

int main()
{
	Complex<int> c1(1, 2);
	c1.print();

	Complex<int> c2(3, 4);
	c2.print();

	Complex<int> c3 = c1 + c2;
	c3.print();

	Complex<int> c4 = c1 - c2;
	c4.print();

	return 0;
}