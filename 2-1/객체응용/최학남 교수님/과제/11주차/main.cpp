#include<iostream>
using namespace std;

#include "Account.h"

int main()
{
	Account ac(10000); // Account class 변수 생성(생성자를 이용해 balance를 10000으로 초기화)
	cout << "Account : " << endl;
	cout << "계좌 잔고 - ";
	ac.print();
	ac.credit(10000); // 10000원을 입금
	cout << "입금 후 - ";
	ac.print();
	ac.debit(5000); // 5000원을 출금
	cout << "출금 후 - ";
	ac.print();
	cout << endl;

	SavingAccount sa(ac.get(), 0.1); // SavingAccount class 변수 생성(생성자를 이용해 balance를 ac 변수와 동일하게 초기화, 이자율은 0.1로 초기화)
	cout << "SavingAccount : " << endl;
	cout << "계좌 잔고 - ";
	sa.print();
	cout << "interest - " << sa.CalculateInterest() << endl; // 현재 잔고에서 계좌에 적립된 이자를 출력
	ac.credit(int(sa.CalculateInterest())); // 이자를 현재 계좌 잔고에 더함
	cout << "이자 입금 후 - ";
	sa.print();
	cout << endl;

	CheckingAccount ca(ac.get(), 1000); // CheckingAccount class 변수 생성(생성자를 이용해 balance를 ac 변수와 동일하게 초기화, 수수료는 1000으로 초기화)
	cout << "CheckingAccount : " << endl;
	cout << "계좌 잔고 - "; 
	ca.print();
	ca.credit(10000); // 10000원을 입금(수수료 고려)
	cout << "입금 후 - "; 
	ca.print();
	ca.debit(5000); // 5000원을 출금(수수로 고려)
	cout << "출금 후 - "; 
	ca.print();
	cout << endl;

	return 0;
}