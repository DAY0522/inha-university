#include<iostream>
using namespace std;

int main_C(void)
{
	int k, j = 2;

	switch (k=j+1)
	// switch는 if문보다 빠르다. (조건식과 대입식의 차이?)
	// if문보다는 가독성이 좋다.
	// 복잡할 때는 if문을 사용하는 것이 더 좋다.
	{
	case 0: // if(k==0)
		cout << "Tailor" << endl;
	case 1:
		cout << "Tutor" << endl;
	case 2:
		cout << "Tramp" << endl;
	default:
		cout << "Pure Simple Egghead!" << endl;
	}
	return 0;
}