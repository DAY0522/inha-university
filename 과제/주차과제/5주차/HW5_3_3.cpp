#include<iostream>
using namespace std;

int main(void)
{
	int menu;
	cout << "Enter a mesu number : rice(1), bread(2), drink(3), noodle(4)" << endl;
	cin >> menu;
	switch (menu)
	{
	case 1:
		cout << "you have selected a rice" << endl;
		break;
	case 2:
		cout << "you have selected a bread" << endl;
		break;
	case 3:
		cout << "you have selected a drink" << endl;
		break;
	case 4:
		cout << "you have selected a noodle" << endl;
		break;
	default:
		cout << "there is no such menu" << endl;
	}


	return 0;
}