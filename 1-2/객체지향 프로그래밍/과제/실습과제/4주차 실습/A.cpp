#include<iostream>
using namespace std;

int main_A(void) {
	char suite = 3;

	// 모든 switch문은 if문으로 표현 가능
	// 하지만 모든 if문을 switch문으로 표현하는 것은 불가능
	switch (suite) // () 안은 반드시 정수가 들어가야 한다.
				   // char, short, int, long, long long, ...
	{
	case 1:
		cout << "Diamond" << endl;
		break;
	case 2:
		cout << "Spade" << endl;
		break;
	default: // 예외처리
		cout << "Heart" << endl;
		break;
	}
	cout << "I thought one wears a suite" << endl;

	return 0;
}