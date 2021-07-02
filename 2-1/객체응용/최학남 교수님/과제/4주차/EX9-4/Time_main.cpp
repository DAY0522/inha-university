#include<iostream>
using std::cout;
using std::endl;

#include "Time.h"

int main()
{
	Time t1;
	
	t1.printStandard();
	cout << endl;
	t1.printUniversal();

	return 0;
}