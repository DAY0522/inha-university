#pragma once

class Account // Account class 선언
{
public:
	Account(int); // Account class의 생성자 선언(int형 변수 하나를 인자로 받음)
	void credit(int); // 계좌에 입력된 인자만큼 돈을 입금하는 credit 함수 선언
	void debit(int); // 계좌에 입력된 인자만큼 돈을 출금하는 debit 함수 선언
	int get() const; // balance를 return하는 get함수 선언
	void set(int&); // balance를 입력된 인자로 초기화하는 set함수 선언
	void print(); // 계좌 잔고를 출력하는 print 함수 선언

private:
	int balance; // 계좌 잔고에 해당하는 int형 변수 balance
};

class SavingAccount // SavingAccount class 선언
	: public Account // 기본클래스로 Account를 상속(접근지정자 : public)
{
public:
	SavingAccount(int, double);  // Account class의 생성자 선언(int형 변수 하나, double형 변수 하나를 인자로 받음)
	double CalculateInterest();
private:
	double interestrate; // 이자에 해당하는 double형 변수 interestrate
};

class CheckingAccount // CheckingAccount class 선언
	: public Account // 기본클래스로 Account를 상속(접근지정자 : public)
{
public:
	CheckingAccount(int, int);  // Account class의 생성자 선언(int형 변수 두 개를 인자로 받음)
	void credit(int); // 계좌에 입력된 인자만큼 돈을 입금하는 credit 함수 선언(수수료 고려)
	void debit(int); // 계좌에 입력된 인자만큼 돈을 출금하는 debit 함수 선언(수수료 고려)

private:
	int TransactionFee; // 수수료에 해당하는 int형 변수 TransactionFee
};