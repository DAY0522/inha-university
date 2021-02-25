#include<iostream>
using namespace std;
int main(void)
{
	char num;
	cin >> num;
	while (num < 65 || (num > 90 && num < 97) || num>122) {
		cout << "잘못 입력하셨습니다. 알파벳을 다시 입력하세요" << endl;
		cin >> num;
	}
	switch (num/92)
	{
	case 0:
		cout << char(num + 32);
		break;
	case 1:
		cout << num;
		break;
	default:
		break;
	}
	return 0;
}