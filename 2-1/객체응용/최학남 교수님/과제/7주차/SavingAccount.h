#pragma once // 다중정의 에러를 방지

#ifndef SAVINGACCUNT_H
#define SAVINGACCUNT_H

class SavingAccount // SavingAccount 클래스 정의
{
public:
	SavingAccount(double); // double 변수 하나를 parameter로 받는 생성자 선언
	void calculateMonthlyInterest(); // 월이자를 계산해주는 함수 선언
	static void modifyInterestRate(double); // annualInterestRate 값을 수정하는 함수 선언
	void printBalance() const; // 잔고를 출력해주는 함수 선언
private:
	double savingsBalance; // 잔고 금액
	static double annualInterestRate; // 연이자
};

#endif