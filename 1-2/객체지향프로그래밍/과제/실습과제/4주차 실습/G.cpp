#include<iostream>
using namespace std;

int main_G(void)
{
	int i = 1;
	switch (i-2)
	{
	case -1:
		cout << "Feeding fish" << endl;
		break;
	case 0:
		cout << "Weeding grass" << endl;;
		break;
	case 1:
		cout << "mending roof" << endl;
		break;
	default:
		cout << "Just to survive" << endl;
	}

	return 0;
}