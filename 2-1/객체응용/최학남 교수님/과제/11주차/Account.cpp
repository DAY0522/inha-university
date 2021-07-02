#include<iostream>
using namespace std;

#include"Account.h"

Account::Account(int b)
{
	// 계좌 잔고의 유효성 검사
	if (b >= 0) // 계좌 잔고가 0보다 크거나 같으면 유효한 값
	{
		balance = b; // 입력된 값을 balance에 할당
	}
	else  // 계좌 잔고가 0보다 작으면 유효하지 않은 값
	{
		balance = 0; // 유효하지 않은 값이므로 잔고를 0으로 초기화
		cout << "입력된 값이 유효하지 않은 값이므로 0으로 초기화 합니다." << endl;
	}
}

void Account::credit(int m)
{
	balance += m; // 입력된 인자만큼 계좌 잔고에 더함
}

void Account::debit(int m)
{
	// 계좌 잔고의 유효성 검사
	if (balance >= m) // 출금하려는 값이 기존 잔고보다 크면 유효한 값
	{
		balance -= m; // 입력된 인자만큼 계좌 잔고에서 뺌
	}
	else // 출금하려는 값이 기존 잔고보다 작으면 유효한 값
	{
		cout << "잔고가 부족합니다." << endl;  // 오류 메시지 출력
	}
}

int Account::get(void) const 
{
	return balance; // 현재 잔고를 반환
}

void Account::set(int& b)
{
	balance = b; // 입력된 인자를 balance에 할당
}

void Account::print()
{
	cout << balance << endl; // 현재 잔고를 출력
}


SavingAccount::SavingAccount(int b, double i)
	: Account(b)
{
	// 이자의 유효성 검사
	if (i >= 0) // 이자가 0보다 크거나 같으면 유효한 값
	{
		interestrate = i; // 입력된 i를 interestrate에 할당
	}
	else // 이자가 0보다 작으면 유효하지 않은 ㄱ밧
	{
		interestrate = 0; 
		cout << "입력된 값이 유효하지 않은 값이므로 0으로 초기화 합니다." << endl;
	}
}

double SavingAccount::CalculateInterest()
{
	return interestrate * double(get()); // 이자를 계산한 계좌 잔고
}

CheckingAccount::CheckingAccount(int b, int t)
	: Account(b)
{
	// 수수료의 유효성 검사
	if (t >= 0) // 수수료가 0보다 크거나 같으면 유효한 값
	{
		TransactionFee = t; // t를 TransactionFee에 할당
	}
	else // 수수료가 0보다 작으면 유효하지 않은 값
	{
		TransactionFee = 0;
		cout << "입력된 값이 유효하지 않은 값이므로 0으로 초기화 합니다." << endl;
	}
}

void CheckingAccount::credit(int m)
{
	int b = get() + m - TransactionFee; // 입금 후 계좌 잔고는 (원래 계좌 잔고 + 입금할 금액 - 수수료)
	// 입금 후 금액의 유효성 검사
	if (b >= 0) // 입금 후 금액이 0보다 크거나 같으면 유효한 값
	{
		set(b); // 입금 후 금액을 set함수를 이용해 balance에 할당
	}
	else // 입금 후 금액이 0보다 작으면 유효하지 않은 값
	{
		cout << "입금 잔액이 부족합니다." << endl;
	}
}

void CheckingAccount::debit(int m)
{
	int b = get() - m - TransactionFee; // 출금 후 계좌 잔고는 (원래 계좌 잔고 - 출금할 금액 - 수수료)
	// 출금 후 금액의 유효성 검사
	if (b >= 0) // 출금 후 금액이 0보다 크거나 같으면 유효한 값
	{
		set(b);  // 출금 후 금액을 set함수를 이용해 balance에 할당
	}
	else // 출금 후 금액이 0보다 작으면 유효하지 않은 값
	{
		cout << "출금 잔액이 부족합니다." << endl;
	}
}