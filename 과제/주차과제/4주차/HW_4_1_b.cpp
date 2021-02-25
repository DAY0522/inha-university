#include<iostream>
using namespace std;

int main(void)
{
	int temp;
	cin >> temp;
	switch ((temp - 1) / 10)
	{
	case 0:
	case 1:
		cout << "Ooooooohhhh! Damn cool!" << endl;
		break;
	case 2:
		cout << "Rain rain here again!" << endl;
		break;
	default:
		if (temp <= 0)
		{
			cout << "Ooooooohhhh! Damn cool!" << endl;
			break;
		}
		cout << "Good old nagpur weather" << endl;
	}
	return 0;
}