#include<iostream>
#include<string>
using namespace std;

class Date // Date 클래스를 정의
{
public: // 각 멤버 함수는 public으로 정의
	Date(int m, int d, int y); // 입력된 m, d, y에 따라 멤버 변수를 초기화 하는 생성자 인터페이스 선언
	void setMonth(int m); // month 변수에 값을 할당하기 위해 set함수 인터페이스 선언
	int getMonth(); // month변수의 값을 불러오기 위한 get함수 인터페이스 선언
	void setDay(int d); // day 변수에 값을 할당하기 위해 set함수 인터페이스 선언
	int getDay(); // day변수의 값을 불러오기 위한 get함수 인터페이스 선언
	void setYear(int y); // year 변수에 값을 할당하기 위해 set함수 인터페이스 선언
	int getYear(); // year변수의 값을 불러오기 위한 get함수 인터페이스 선언
	void displayDate(); // month/day/year을 출력하는 함수 인터페이스 선언
private: // 각 멤버 변수는 private로 정의
	int month; // month 변수를 int형으로 선언
	int day; // day 변수를 int형으로 선언
	int year; // year 변수를 int형으로 선언
};