#define _CRT_SECURE_NO_WARNINGS
#include "Date.h" // Date header파일 include
#include<iostream>
#include<ctime> // time, time_t, tm 등을 이용해 현재 날짜를 불러오기 위해 ctime 라이브러리 이용
#include<iomanip> // setfill, setw를 이용하기 위해 iomanip 라이브러리 이용
using namespace std;

const string strmonth[13] = { "\n0","January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
// '년도'를 string으로 저장하고 있는 strmonth 배열 생성
const int daysPerMonth[13] = { 0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
// '월'의 마지막 날짜를 저장하고 있는 daysPerMonth 배열 생성

Date::Date() // default 생성자 정의
{
	time_t currentDay= time(0); // time()함수를 통해 현재 시간을 반환받고 time_t형 currentDay변수에 할당
	tm* localDay = localtime(&currentDay); // localtime 함수를 통해 currentDay를 년, 월, 일 등의 기준에 따라 변환
	setYear(localDay->tm_year + 1900); // localDay의 tm_year에 접근해 현재 '년도'를 부름. 해당 년도는 1900년부터 시작하므로 1900을 더해준 값을 year 변수에 할당
	setMonth(localDay->tm_mon + 1); // localDay의 tm_mon에 접근해 현재 '월'을 불러온다. 해당 월은 1월=0, 12월=11이므로 1을 더해준 값을 month 변수에 할당
	setDay(localDay->tm_mday); // localDay의 tm_mday에 접근해 현재 '일'을 불러와 day변수에 할당 
}

Date::Date(int ddd, int yyyy) // using ddd yyyy format
{
	setYear(yyyy); // setYear함수를 통해 year에 yyyy를 할당
	setMMDDFromDDD(ddd); 
}

Date::Date(int dd, int mm, int yyyy) // using dd/mm/yyyy format
{
	setYear(yyyy); // setYear함수를 통해 year에 yyyy를 할당
	setMonth(mm); // setMonth함수를 통해 month에 mm를 할당
	setDay(dd); // setDay함수를 통해 day에 dd를 할당
}

Date::Date(string month, int dd, int yyyy) // using Month dd, yyyy format
{
	setYear(yyyy); // setYear함수를 통해 year에 yyyy를 할당
	setMMFromMonth(month); // 
	setDay(dd); // setDay함수를 통해 day에 dd를 할당
}

void Date::setDay(int d)
{
	day = checkDay(d); // 입력된 d에 대해 유효성 검사 진행
}

void Date::setMonth(int m)
{
	month = checkMonth(m); // 입력된 m에 대해 유효성 검사 진행
}

void Date::setYear(int y)
{
	year = checkYear(y); // 입력된 y에 대해 유효성 검사 진행
}

void Date::print() const 
{
	cout << setfill('0') << setw(2) << this->month << '/' << setfill('0') << setw(2) << this->day << '/' << this->year;
	// setw를 통해 2자리를 확보한 후 month, day가 2자리가 아닐 때는 해당 자리에 setfill을 이용해 0을 대입, year는 그대로 출력
}

void Date::printDDDYYYY() const // 입력된 year, month, day에 대해 
{
	cout << convertDDToDDD() << " " << year; // month와 day를 ddd형태로 반환해주는 convertDDToDDD함수의 반환값과 year를 출력
}

void Date::printMMDDYY() const // 입력된 year, month, day에 대해 월, 일, 년도(뒤에 2자리)로 출력해주는 함수
{
	cout << setfill('0')<<setw(2)<< month << "/" << // setw를 통해 2자리를 확보한 후 month, day가 2자리가 아닐 때는 해당 자리에 setfill을 이용해 0을 대입
		setfill('0') << setw(2) << day << "/" << convertYYYYToYY(); // month와 day는 그대로 출력하고, year는 yyyy형태로 표현돼 있으므로 convertYYYYToYY함수를 이용해 yy형태로 변환
}

void Date::printMonthDDYYYY() const // 입력된 year, month, day에 대해 월(string), 일, 년도로 출력해주는 함수
{
	cout << convertMMToMonth(month) << ", " << day << ", " << year; // month는 convertMMToMonth함수를 이용해 string으로 반환받은 값을 출력, day, year는 그대로 출력한다
}

int Date::checkDay(int d) const // d의 유효성 검사
{
	if (d > 0 && d <= daysInMonth(month)) // d가 0보다 크거나 해당 월의 마지막 날짜보다 작거나 같으면 유효한 값이므로
		return d; // d를 그대로 반환
	else // 이를 위배하면 유효하지 않은 값이므로
		cout << "Invalid day (" << d << ") set to 1.\n"; // 오류메시지 출력
	return 1; // 1을 반환
}

int Date::checkMonth(int m) const // m의 유효성 검사
{
	if (m > 0 && m <= 12) // m가 1~12 사이의 값이 아니면
		return m; // m을 반환
	else // 1~12 사이의 값이 아니면 잘못된 값이므로
		cout << "Invalid month (" << m << ") set to 1.\n"; // 잘못됐다는 문구를 출력
	return 1; // 1반환
}

int Date::checkYear(int y) const // y의 유효성 검사
{
	if (y >= 0) // y가 0보다 크거나 같으면 유효한 값이므로 
		return y; // y를 반환
	else // y가 0보다 작으면 유효한 값이 아니므로
		cout << "Invalid year (" << y << ") set to 1900.\n"; // 잘못된 값이라는 메시지를 출력
	return 1900; // 1900를 반환
}

int Date::daysInMonth(int mm) const // mm월의 마지막 날짜를 반환하는 함수
{
	if (mm <= 0 || mm > 12) // mm이 1과 12 사이 값이 아니면 잘못된 값이므로
	{
		return -1; // -1 반환
	}
	if (mm == 2) // mm이 2이면 윤년인지 확인을 해줘야함
	{
		if (isLeapYear()) // isLeapYear이 1이면 윤년인 것이므로
		{
			return 29; // 29를 반환
		}
		return 28; // 윤년이 아니면 28을 반환
	}
	return daysPerMonth[mm]; // 1~12사이의 값인데 2가 아니면 daysPerMonth에 입력된 mm번째 값을 반환
}

bool Date::isLeapYear() const // 윤년인가?
{
	return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
	// 해당 년도가 400으로 나누어 떨어지거나, 4로 나누어 떨어지고 100으로 나누어 떨어지지 않으면 윤년이므로 1을 반환, 아니면 0을 반환하게 함
}

int Date::convertDDToDDD() const // mm, dd로 표현된 '월', '일'을 ddd로 변경해주는 함수
{
	int ddd = 0; // ddd를 지역변수로 선언하고 0으로 초기화
	for (int i = 1; i < month; i++) // i가 1부터 month-1까지 for loop를 돌려
	{
		ddd += daysInMonth(i); // i월의 마지막 일을 ddd에 더해준다
	}
	ddd += day; // 그리고 ddd를 day에 더해준다.
	return ddd; // ddd를 return
}

void Date::setMMDDFromDDD(int ddd) // ddd로 표현된 '일'을, '월'과 '일'로 바꿔 표현해주는 함수
{
	int m = 1; // 지역변수 m을 선언한 후 1로 초기화
	while (ddd > daysInMonth(m)) // ddd가 m의 마지막 일보다 크면 다음 달이 될 수 있는 것이므로(안 되면 다음 달이 될 수 없으므로 while문이 종료)
	{
		ddd -= daysInMonth(m); // ddd를 m의 마지막 일로 빼주고
		m++; // m을 1 증가
	}
	month = m; // month에 m을 할당
	day = ddd; // day에 ddd를 할당
}

string Date::convertMMToMonth(int m) const // 숫자로 입력된 '월'을 문자열로 바꿔주는 함수
{
	return strmonth[m]; // m을 문자열로 표현한 strmonth[m]를 반환
}

void Date::setMMFromMonth(string m) // string으로 표현된 '월'을 숫자로 바꾸는 함수
{
	for (int i = 1; i <= 12; i++) // for문을 통해 위에서 정의한 strmonth와 입력된 string으로 표현된 문자열을 비교한 뒤 일치하면 strmonth의 index 반환
	{
		if (m == strmonth[i]) // string으로 입력한 월(m)과 strmonth를 비교한 뒤 일치하면
		{
			month = i; // index 값 반환(i가 m을 숫자로 표현한 월이 됨)
		}
	}
}

int Date::convertYYYYToYY() const // yyyy로 표현된 년도를 yy로 바꾸는 함수
{
	return year % 100; // 십의 자리, 일의 자리만 불러오면 되므로 100으로 나눈 나머지를 불러온다.
}

void Date::setYYYYFromYY(int yy) // yy형태를 yyyy형태로 바꿔주는 함수
{
	if (yy >= 0 || yy < 100) // 1951~2050년까지만 값을 반환한다고 가정하자.
		year = (yy > 50 ? 1900 : 2000) + yy; // yy값이 0~50이면 2000에 더해 2000~2050값을, 51~99이면 1900에 더해 1951~1999를 year에 할당
	else {
		cout << "Invalid year (" << yy << ") sets to 1900." << std::endl; // 0~99사이의 값이 아니라면 위배된 값이라는 문구를 출력하고 1900년으로 정의해준다.
		year = 1900;
	}
}
