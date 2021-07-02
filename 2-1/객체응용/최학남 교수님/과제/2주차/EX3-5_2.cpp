#include<iostream>
#include<string>
using namespace std;

class Account // Account class를 생성한다.
{
public:
	Account(int Balance, string Name) // 계좌의 초기 금액과 계좌명을 초기화 해주기 위해 생성자를 선언한다.
	{
		balance = Balance; // 생성자의 인수로 입력된 Balance를 class 멤버 데이터인 balance에 입력한다.
		name = Name; // 생성자의 인수로 입력된 Name를 class 멤버 데이터인 name에 입력한다.
	}
	void credit() // 입금을 위한 멤버 함수를 선언한다.
	{
		int M; // 입금할 금액을 나타내는 변수 M을 int형으로 선언한다.
		cout << "Enter deposit amount for " << name << " : "; // 입금할 금액을 입력하라는 문구를 출력한다.
		cin >> M; // 입금할 금액을 사용자에게 입력받는다.
		cout << "attempting to deposit " << M << " from " << name << " balance" << endl; // 사용자가 입력한 금액 만큼 입금 시도 중이라는 문구를 출력한다.
		balance += M; // 사용자가 $M를 입금했으므로 원래의 금액인 balance에 M을 더해준다.
	}
	void debit() // 출금을 위한 멤버 함수를 선언한다.
	{
		int M; // 출금할 금액을 나타내는 변수 M을 int형으로 선언한다.
		cout << "Enter withdrawal amount for " << name << " : "; // 출금할 금액을 입력하라는 문구를 출력한다.
		cin >> M; // 출금할 금액을 사용자에게 입력받는다.
		cout << "attempting to subtract " << M << " from " << name << " balance" << endl; // 사용자가 입력한 금액 만큼 출금 시도 중이라는 문구를 출력한다.
		if (balance < M) // 만약 사용자가 입력한 출금 금액보다 원래 잔고가 더 적으면 if문이 true가 돼
		{
			cout << "Debit amount exceeded account balance." << endl; // 출금 금액이 통장 잔고를 초과했다는 문구를 출력한다.
			return; // 해당 함수를 종료시키기 위해 return 한다.
		}
		balance -= M; // 사용자가 $M를 출금했으므로 원래의 금액인 balance에 M을 빼준다.
	}
	int getBalance() // 현재 통장 잔고를 반환해주는 GetBalance 함수를 선언한다.
	{
		return balance; // 현재 통장 잔고를 나타내는 멤버 변수 balance를 return 한다.
	}

private:
	int balance; // Account class 멤버 함수로 통장 잔고를 나타내는 balance를 int형으로 선언한다.
	string name; // Account calss 멤버 함수로 통장 이름을 나타내는 name을 string형으로 선언한다.
};

int main()
{
	Account account1(50, "account1"); // Account형인 account1 변수를 생성하고, 생성자를 이용해 초기 잔고를 $50, 계좌명을 account1로 각 멤버 변수를 초기화 한다.

	cout << "account1 balance : $" << account1.getBalance() << endl; // getBalance 함수의 return 값을 출력해 account1의 초기 잔고를 확인한다. 여기서 멤버 함수를 불러오기 위해 “.”을 이용한다.

	account1.credit(); // credit 함수를 이용해 account1 계좌에 입금을 한다.

	cout << "account1 balance : $" << account1.getBalance() << endl; // 입금이 잘 됐는지 확인하기 위해 getBalance 함수의 return 값을 다시 출력해 입금 후의 account1의 잔고를 확인한다.

	account1.debit(); // debit 함수를 이용해 acccount1 계좌에 출금을 한다.

	cout << "account1 balance : $" << account1.getBalance() << endl; // 출금이 잘 됐는지 확인하기 위해 getBalance 함수의 return 값을 다시 출력해 출금 후의 account1의 잔고를 확인한다.

	return 0;
}