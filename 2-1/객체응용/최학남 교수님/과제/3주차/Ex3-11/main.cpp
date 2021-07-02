#include<iostream>
using namespace std;
#include "Ex3-11.h" // 헤더파일을 include

int main()
{
	Employee lisa("Lisa", "Roberts", 4500); // Employee 클래스의 객체인 lisa를 선언하고 생성자를 통해 각 멤버변수를 초기화
	Employee mark("Mark", "Stein", 4000); // Employee 클래스의 객체인 mark를 선언하고 생성자를 통해 각 멤버변수를 초기화

	cout << "Employees' yearly salaries : " << endl // cout을 이용해 문제에서 제시한 문구를 출력
		<< lisa.getFirstName() << " " << lisa.getLastName() // lisa 객체의 멤버 변수에 접근하여 값을 출력할 수 없으므로 각각의 get함수를 이용해 firstname과 lastname, monthlysalary의 값을 반환받아 출력
		<< " : $" << (lisa.getMonthlySalary()*12) << endl // 객체가 가지고 있는 monthlysalary 변수는 월급이므로 연봉을 출력하기 위해 12를 곱한다.
		<< mark.getFirstName() << " " << mark.getLastName() // mark 객체의 멤버 변수에 접근하여 값을 출력할 수 없으므로 각각의 get함수를 이용해 firstname과 lastname, monthlysalary의 값을 반환받아 출력
		<< " : $" << (mark.getMonthlySalary()*12) << endl;

	// 각각 객체의 월급을 10% 인상하기 위해 get함수를 통해 monthlysalary 값을 불러와 1.1을 곱해주고 set함수를 이용해 monthlysalary에 값을 다시 할당한다.
	lisa.setMonthlySalary(lisa.getMonthlySalary() * 1.1);
	mark.setMonthlySalary(mark.getMonthlySalary() * 1.1);

	// 앞에서와 동일한 방법으로 객체의 멤버변수를 출력해준다.
	cout << endl << "Employees' yearly salaries after 10% raise : " << endl
		<< lisa.getFirstName() << " " << lisa.getLastName()
		<< " : $" << (lisa.getMonthlySalary()*12) << endl
		<< mark.getFirstName() << " " << mark.getLastName()
		<< " : $" << (mark.getMonthlySalary()*12) << endl;

	return 0;
}