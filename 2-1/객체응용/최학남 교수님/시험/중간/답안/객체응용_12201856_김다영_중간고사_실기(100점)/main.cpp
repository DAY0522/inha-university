#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
	Time t1(23, 59, 57);
	Time t2(13, 30, 45);
	Time t3(99, 99, 99);
	Time t4;

	for (int i = 0; i < 18; i++)
	{
		if (i < 9)
		{
			t1.printStandard();
		}
		else
		{
			t1.printUniversal();
		}
		t1.tick();
		cout << endl;
	}

	cout << endl;

	cout << "생성된 Time클래스의 객체 수 : " << Time::getCount() << endl;
	return 0;
}