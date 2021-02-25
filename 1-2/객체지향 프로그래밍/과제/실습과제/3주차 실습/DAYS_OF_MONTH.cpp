#include<iostream>
#include<iomanip>
using namespace std;

#define START_DAY 5
#define DAYS_OF_MONTH 31

int main(void)
{
	int day, date;
	cout << "=========================================" << endl;
	cout << "Sun.  Mon.  Tue.  Wed.  Thu.  Fri.  Sat. " << endl;
	cout << "=========================================" << endl;

	for (day = 0; day < START_DAY; day++)
	{
		cout << "      "; // 여기선 5요일 뒤에 첫날이 시작되므로 공백을 5번 출력한다.
	}

	for (date = 1; date <= DAYS_OF_MONTH; date++)
	{
		if (day == 7)
		{
			day = 0;
			cout << endl;
		}
		day++;
		//printf("%4d", date);
		cout << setw(4) << date << "  ";
		

		// 왜 이렇게 작성하면 안 되나?
		/*cout.precision(4);
		cout << date;*/
	}

	cout << "\n=========================================\n";
	return 0;
}