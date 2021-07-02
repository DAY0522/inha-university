#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#ifndef DATE_H
#define DATE_H

class Date
{
public:
	Date(); // Date의 default constructor 선언
	Date(int, int); // 두 개의 int형 변수를 parameter로 받는 constructor 선언
	Date(int, int, int); // 세 개의 int형 변수를 parameter로 받는 constructor 선언
	Date(string, int, int); // 하나의 string형 변수와 두 개의 int형 변수를 parameter로 받는 constructor 선언
	void setDay(int); // day의 값을 할당해주는 setDay 함수 선언
	void setMonth(int); // month의 값을 할당해주는 setDay 함수 선언
	void setYear(int); // year의 값을 할당해주는 setDay 함수 선언
	void print() const; // print data in month/day/year format
	void printDDDYYYY() const; // print data in ddd yyyy format  
	void printMMDDYY() const; // print data  in mm/dd/yy format
	void printMonthDDYYYY() const; // print data in Month dd, yyyy format
private:
	int year; // '년도'를 나타내는 year 변수
	int month; // '월'을 나타내는 month 변수
	int day; // '일'을 나타내는 day 변수

	int checkDay(int) const; // day가 적절한 값인지 확인해주는 함수
	int checkMonth(int) const;  // month가 적절한 값인지 확인해주는 함수
	int checkYear(int) const;  // year가 적절한 값인지 확인해주는 함수
	int daysInMonth(int) const; // parameter로 입력된 '월'의 마지막 '일'을 반환하는 함수
	bool isLeapYear() const; // 윤년인지 확인해주는 함수
	int convertDDToDDD() const; // MM. DD형태를 DDD형태로 바꿔주는 함수
	void setMMDDFromDDD(int); // DDD형태를 MM, DD로 변환해주는 함수
	string convertMMToMonth(int) const; // MM으로 표현된 '월'을 string으로 바꿔주는 함수
	void setMMFromMonth(string); // string으로 표현된 month를 int형으로 바꿔주는 함수
	int convertYYYYToYY() const; // YYYY형태로 표현된 year를 YY형태로 바꿔주는 함수
	void setYYYYFromYY(int); // YY 형태로 표현된 year를 YYYY형태로 바꿔주는 함수
};

#endif