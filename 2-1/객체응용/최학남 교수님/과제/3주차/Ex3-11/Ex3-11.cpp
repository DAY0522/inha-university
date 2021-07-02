#include<iostream>
#include<string>
using namespace std;
#include "Ex3-11.h" // 헤더파일을 include 해줌

Employee::Employee(string f, string l, int s) // 생성자 정의
{
	setFirstName(f); // setFirstName 함수를 이용하여 firstname 멤버 변수를 입력된 f의 값으로 초기화
	setLastName(l); // setLastName 함수를 이용하여 lastrname 멤버 변수를 입력된 l의 값으로 초기화
	setMonthlySalary(s); // setMonthlySalary 함수를 이용하여 monthlySalary 멤버 변수를 입력된 s의 값으로 초기화
}
void Employee::setFirstName(string f) { // Employee 클래스의 멤버함수인 setFirstName을 정의
	firstName = f; // setFirstName은 firstName 값을 입력한 f 값으로 재할당 하는 함수이므로 firstName에 f를 대입한다.
}
string Employee::getFirstName() { // Employee 클래스의 멤버함수인 getFisrtName를 정의
	return firstName; // getFirstName은 firstName을 반환하는 함수이므로 firstName을 return 해준다
}
void Employee::setLastName(string l) {  // Employee 클래스의 멤버함수인 setLastName을 정의
	lastName = l; // setLastName은 lastName 값을 입력한 l 값으로 재할당 하는 함수이므로 lastName에 l을 대입한다.
}
string Employee::getLastName() {   // Employee 클래스의 멤버함수인 getLastName를 정의
	return lastName; // getLastName은 lastName을 반환하는 함수이므로 lastName을 return 해준다
}
void Employee::setMonthlySalary(int s) {  // Employee 클래스의 멤버함수인 setMonthlySalary을 정의
	if (s<0) // 월급이 음수가 입력되면 0으로 초기화를 시켜야 하므로 if문 이용
	{
		monthlySalary = 0; // s<0이 true이면 음수가 입력된 것이므로 monthlySalary에 0 대입
		return; // return을 통해 함수 종료
	}
	monthlySalary = s; // if문에 만족하지 않으면 양수(0포함)가 올바르게 입력된 것이므로 monthlySalary에 입력된 s를 대입
}
int Employee::getMonthlySalary()  // Employee 클래스의 멤버함수인 getMonthlySalary를 정의
{
	return monthlySalary; // getMonthlySalary은 monthlySalary을 반환하는 함수이므로 monthlySalary을 return 해준다
}