#include<iostream>
using namespace std;

int main(void)
{
	float a = 3.5;
	a = a - 0.5;
	switch (int(a))
	{
	case 0:
		cout << "The art of C" << endl;
		break;
	case 1:
		cout << "The spirit of C" << endl;
		break;
	case 2:
		cout << "See through C" << endl;
		break;
	case 3:
		cout << "Simply c" << endl;
		break;
	default:
		break;
	}
	return 0;
}