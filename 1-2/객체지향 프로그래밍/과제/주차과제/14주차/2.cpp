#include<iostream>
using namespace std;

int main()
{
	char c = 'A';
	int i = 10000;
	double d = 6.78;

	char* pc = &c;
	int* pi = &i;
	double* pd = &d;

	(*pc)++;
	*pi = *pi + 1;
	*pd += 1;

	cout << "c = " << c << endl;
	cout << "i = " << i << endl;
	cout << "d = " << d << endl;
	//아래 코드도 동일한 코드!
	//cout << "c = " << *pc << endl;
	//cout << "i = " << *pi << endl;
	//cout << "d = " << *pd << endl;

return 0;
}