#include<iostream>
using namespace std;

int main(void) {
	int a = 3, b = 4, c;
	c = b - a;
	switch (c)
	{
	case 1:
	case 2:
		cout << "God give me an opportunity to change things" << endl;
		break;
	case 3:
	case 4:
		cout << "God give me an opportunity to run my show" << endl;
		break;
	default:
		break;
	}

	return 0;
}