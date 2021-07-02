#include<iostream>
using namespace std;

#include "SavingAccount.h" // 헤더파일을 include

double SavingAccount::annualInterestRate = 0.03; // annualInterestRate를 초기화(객체가 생성되지 않아도 이항 연산자를 이용해 접근 가능)

SavingAccount::SavingAccount(double b)  // double 변수 하나를 parameter로 받는 생성자 선언
{
	savingsBalance = b >= 0 ? b : 0; // 유효성 검사를 통해 0보다 크거나 같은 값이 입력되면 입력한 값 그대로, 작은 값이 입력되면 0으로 초기화
}

void SavingAccount::calculateMonthlyInterest() // 월이자를 계산해주는 함수 정의
{
	cout << "$" << (savingsBalance * annualInterestRate) / 12 << endl; // 월이자((savingsBalance * annualInterestRate) / 12 )를 출력
	savingsBalance *= 1 + annualInterestRate / 12; // 이자를 고려('1 + annualInterestRate / 12'를 원래 금액에 곱함)하여 다음달 잔고를 계산
}

void SavingAccount::modifyInterestRate(double i)  // annualInterestRate 값을 수정하는 함수 정의
{
	annualInterestRate = i > 0 ? i : 0.03; // 유효성 검사를 통해 0보다 크거나 같은 값이 입력되면 입력한 값 그대로, 작은 값이 입력되면 0.03으로 초기화
}

void SavingAccount::printBalance() const // 잔고를 출력해주는 함수 정의
{
	cout << "$" << savingsBalance << endl; // 현재 잔고(savingsBalance)를 출력
}