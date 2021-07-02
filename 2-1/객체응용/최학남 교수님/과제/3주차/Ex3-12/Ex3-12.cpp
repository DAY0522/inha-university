#include<iostream>
#include<string>
using namespace std;

#include "Ex3-12.h" // 헤더파일을 include 해줌

Date::Date(int m, int d, int y){ // 생성자 정의
	setMonth(m); // setMonth함수를 이용하여 month 멤버변수를 입력된 m의 값으로 초기화
	setDay(d); // setDay함수를 이용하여 day 멤버변수를 입력된 d의 값으로 초기화
	setYear(y); // setYear함수를 이용하여 year 멤버변수를 입력된 y의 값으로 초기화
}

void Date::setMonth(int m){  // Date 클래스의 멤버함수인 setMonth를 정의
	if (m < 1 || m > 12) // m이 1보다 작거나, 12보다 크면
	{
		month = 0; // month에 0을 대입한다.
		return;
	}
	month = m; // if문을 만족시키지 않으면, 1과 12 사이의 값을 가지는 것이므로 원래 입력된 값인 m을 대입한다.
}

int Date::getMonth(){ // Date 클래스의 멤버함수인 getMonth를 정의
	return month; // getMonth는 month 멤버 변수를 반환하는 함수이므로 month를 return해준다.
}

void Date::setDay(int d){ // Date 클래스의 멤버함수인 setDay를 정의
	day = d; // setDay는 day 값을 입력한 값으로 재할당 하는 함수이므로 day에 d를 대입한다.
}

int Date::getDay() { // Date 클래스의 멤버함수인 getDay를 정의
	return day; // getDay는 day 멤버 변수를 반환하는 함수이므로 day를 return해준다.
}

void Date::setYear(int y) { // Date 클래스의 멤버함수인 setYear를 정의
	year = y; // setYear는 year 값을 입력한 값으로 재할당 하는 함수이므로 year에 y를 대입한다.
}

int Date::getYear() { // Date 클래스의 멤버함수인 getYear를 정의
	return year; // getYear는 year 멤버 변수를 반환하는 함수이므로 year를 return해준다.
}

void Date::displayDate() { // Date 클래스의 멤버함수인 dispalyDate함수를 정의
	cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
} // dispalyDate 함수는 month, day, year 변수를 /로 구분해 출력하는 함수이다. month, day, year 변수를 바로 불러올 수 없으므로 get함수를 이용해 반환 값을 출력한다.