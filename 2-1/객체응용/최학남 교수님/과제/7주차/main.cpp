#include<iostream>
using namespace std;

#include "SavingAccount.h" // 헤더파일을 include

int main()
{
	SavingAccount::modifyInterestRate(0.03); // 연 이자를 3%로 할당

	SavingAccount* ptrServer1 = new SavingAccount(2000.00); // new을 이용해 ptrSever1 객체에 동적 메모리 할당, 객체의 잔고를 $2000로 초기화
	SavingAccount* ptrServer2 = new SavingAccount(3000.00); // new을 이용해 ptrSever2 객체에 동적 메모리 할당, 객체의 잔고를 $3000로 초기화

	cout << "server1 balance : ";
	ptrServer1->printBalance(); // ptrServer1의 잔고 출력
	cout << "server2 balance : ";
	ptrServer2->printBalance(); // ptrServer2의 잔고 출력
	cout << endl;

	cout << "server1 interest : ";
	ptrServer1->calculateMonthlyInterest(); // ptrServer1의 월 이자 계산
	cout << "server2 interest : ";
	ptrServer2->calculateMonthlyInterest(); // ptrServer2의 월 이자 계산
	cout << endl;

	cout << "server1 balance : ";
	ptrServer1->printBalance(); // ptrServer1의 잔고(월이자 0.03%가 고려된 값) 출력
	cout << "server2 balance : ";
	ptrServer2->printBalance(); // ptrServer2의 잔고(월이자 0.03%가 고려된 값) 출력
	cout << endl;

	SavingAccount::modifyInterestRate(0.04); // 연 이자를 4%로 할당

	cout << "server1 interest : ";
	ptrServer1->calculateMonthlyInterest(); // ptrServer1의 월 이자 계산
	cout << "server2 interest : ";
	ptrServer2->calculateMonthlyInterest(); // ptrServer2의 월 이자 계산
	cout << endl;

	cout << "server1 balance : ";
	ptrServer1->printBalance(); // ptrServer1의 잔고(월이자 0.04%가 고려된 값) 출력
	cout << "server2 balance : ";
	ptrServer2->printBalance(); // ptrServer2의 잔고(월이자 0.04%가 고려된 값) 출력

	delete ptrServer1; // ptrServer1의 메모리 공간 해제
	delete ptrServer2; // ptrServer2의 메모리 공간 해제
	return 0;
}