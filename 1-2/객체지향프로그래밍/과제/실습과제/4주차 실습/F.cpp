#include<iostream>
using namespace std;

int main_F(void)
{
	int ch = 'a' + 'b';
	switch (ch)
	{
	case 'a':
	case 'b':
		cout << "You entered b" << endl;
		break;
	case 'A':
		cout << "a as in ashar" << endl;
		break;
	case 'b'+'a':
		cout << "You entered a and b" << endl;
	}

	return 0;
}