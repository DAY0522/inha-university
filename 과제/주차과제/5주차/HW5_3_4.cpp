#include<iostream>
using namespace std;

int main(void)
{
	int menu, country, food;
	cout << "Select a menu" << endl;
	cout << "1. food  2. drink" << endl;
	cin >> menu;
	switch (menu)
	{
	case 1:
		cout << "You have selected food. Which food?" << endl;
		cout << "1. Korean  2. American  3. Chinese" << endl;
		cin >> country;
		switch (country)
		{
		case 1:
			cout << "You have selected a Korean food." << endl;
			cout << "Which Korean food?" << endl;
			cout << "1. Rice  2. Bulgogi" << endl;
			cin >> food;
			if (food == 1)
				cout << "Enjoy your rice!" << endl;
			else if (food == 2)
				cout << "Enjoy your bulgogi!" << endl;
			else
				cout << "Please select the 1 or 2" << endl;
			break;
		case 2:
			cout << "You have selected an American food." << endl;
			cout << "Which American food?" << endl;
			cout << "1. Hamburger  2. Salad" << endl;
			cin >> food;
			if (food == 1)
				cout << "Enjoy your hamburger!" << endl;
			else if (food == 2)
				cout << "Enjoy your salad!" << endl;
			else
				cout << "Please select the 1 or 2" << endl;
			break;
		case 3:
			cout << "You have selected a Chinese food." << endl;
			cout << "Which Chinese food?" << endl;
			cout << "1. Noodle  2. Dimsum" << endl;
			cin >> food;
			if (food == 1)
				cout << "Enjoy your noodle!" << endl;
			else if (food == 2)
				cout << "Enjoy your dimsum!" << endl;
			else
				cout << "Please select the 1 or 2" << endl;
			break;
		default:
			cout << "Please select the 1 or 2 or 3" << endl;
		}
		break;
	case 2:
		cout << "You have selected drink. Which drink?" << endl;
		cout << "1. Cola  2. Orange juice  3. Water" << endl;
		cin >> food;
		if (food == 1)
			cout << "Enjoy your cola!" << endl;
		else if (food == 2)
			cout << "Enjoy your orange juice!" << endl;
		else if (food == 3)
			cout << "Enjoy your water!" << endl;
		else
			cout << "Please select the 1 or 2 or 3" << endl;
		break;
	default:
		cout << "Please select the 1 or 2" << endl;
	}
	return 0;
}