#include<iostream>
using namespace std;

int main_E(void)
{
	int k;
	float j = 2.0; // 2.9여도 k = j + 1은 3이 된다. int가 되기 위해 소수점을 그냥 버림

	switch (k=j+1) // j가 float이어도 k가 int이므로 
	{
	case 3:
		cout << "Trapped" << endl;
		break;
	default:
		cout << "Caught!" << endl;
	}

	return 0;
}