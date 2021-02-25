#include<iostream>
using namespace std;

int main(void)
{
	int menu;
	int a, b;
	while (1)
	{
		cout << "1. add   2. sub   3. mul   4. div   5. quit" << endl;
		cout << "select operation" << endl;
		cin >> menu;
		if (menu == 5)
			break;
		switch (menu)
		{
		case 1:
			cout << "enter two numbers" << endl;
			cin >> a >> b;
			cout << "the sum is " << a + b << endl;
			break;
		case 2:
			cout << "enter two numbers" << endl;
			cin >> a >> b;
			cout << "the sub is " << a - b << endl;
			break;
		case 3:
			cout << "enter two numbers" << endl;
			cin >> a >> b;
			cout << "the mul is " << a * b << endl;
			break;
		case 4:
			cout << "enter two numbers" << endl;
			cin >> a >> b;
			cout << "the div is " << float(a) / float(b) << endl;
			break;
		default:
			cout << "Enter numbers from 1 to 5" << endl;
		}
	}


	return 0;
}