#include<iostream>
using namespace std;

#include "Ex3-12.h"

int main()
{
	Date date(5, 6, 1981); // 생성자를 이용해 Date클래스의 객체 date를 초기화

	cout << "Month : " << date.getMonth() << endl 
		<< "Day : " << date.getDay() << endl
		<< "Year : " << date.getYear() << endl;
	// date 객체의 멤버함수인 getMonth, getDay, getYear를 이용해 month, day, year값을 출력
	
	cout << "\nOriginal date : " << endl;
	date.displayDate(); // date객체의 멤버함수인 displayDate를 이용해 월,일,년도를 출력 

	date.setMonth(1); // setMonth 함수를 이용해 date의 month 멤버 변수를 1로 초기화
	date.setDay(1); // setDay 함수를 이용해 date의 day 멤버 변수를 1로 초기화
	date.setYear(2005); // setYear 함수를 이용해 date의 year 멤버 변수를 2005로 초기화
	
	cout << "\nNew date : " << endl;
	date.displayDate(); // date객체의 멤버함수인 displayDate를 이용해 새롭게 할당된 월,일,년도를 출력 

	return 0;
}