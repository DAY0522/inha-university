#include<iostream>
using namespace std;

int main(void) {
	int a, b;
	while (1)
	{
		cin >> a >> b;
		if (a > b)
			cout << a << " is bigger than " << b << endl;
		else if (a < b)
			cout << b << " is bigger than " << a << endl;
		else
			break;
	}

	return 0;
}