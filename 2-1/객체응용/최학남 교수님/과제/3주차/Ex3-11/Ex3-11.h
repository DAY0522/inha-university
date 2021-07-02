#include<iostream>
#include<string>
using namespace std;

class Employee { // Employee 클래스를 정의
public: // 각 멤버 함수는 public으로 정의
	Employee(string f, string l, int s); // 입력된 f, l, s로 변수를 초기화 하는 생성자 인터페이스 선언
	void setFirstName(string f); //firstName 변수에 값을 할당하기 위해 setFirstName함수 인터페이스 선언
	string getFirstName(); // firstName변수의 값을 불러오기 위한 getFirstName함수 인터페이스 선언
	void setLastName(string l); //lastName 변수에 값을 할당하기 위해 setLastName함수 인터페이스 선언
	string getLastName(); // lastName변수의 값을 불러오기 위한 getLastName함수 인터페이스 선언
	void setMonthlySalary(int s); //monthlySalary 변수에 값을 할당하기 위해 setMonthlySalary함수 인터페이스 선언
	int getMonthlySalary(); // monthlySalary변수의 값을 불러오기 위한 getMonthlySalary함수 인터페이스 선언
private: // 각 멤버 변수는 private로 정의
	string firstName; // string형인 fistName 변수 선언
	string lastName; // string형인 lastName 변수 선언
	int monthlySalary; // int형인 monthlySalary 변수 선언
};