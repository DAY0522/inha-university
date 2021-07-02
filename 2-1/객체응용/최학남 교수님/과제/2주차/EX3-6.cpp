#include<iostream>
#include<string>
using namespace std;

class Invoice // Invoice class를 정의한다.
{
public:
	Invoice(string Number, string Description, int Quantity, int Price) // Number, Description, Quantity, Price를 초기화 해주기 위해 생성자를 선언한다.
	{
		number = Number; // 생성자의 인수로 입력된 Number를 class 멤버 데이터인 number에 입력한다.
		description = Description; // 생성자의 인수로 입력된 Description을 class 멤버 데이터인 description에 입력한다.
		if (Quantity < 0) // 생성자의 인수에 입력된 Quantity가 0보다 작으면 유효하지 않은 값이므로
		{
			cout << "quantity cannot be negative. quantity set to 0." << endl; // 입력된 Quantity가 음수를 가지고 있다는 문구를 출력해준뒤
			quantity = 0; // 0으로 초기화를 시킨다.
		}
		else
		{
			quantity = Quantity; // 만약에 Quantity가 0 이상이면 유효한 값이므로 입력된 인수를 quantity에 입력한다.
		}
		if (Price < 0) // 생성자의 인수에 입력된 Price가 0보다 작으면 유효하지 않은 값이므로
		{
			cout << "price cannot be negative. price set to 0." << endl; // 입력된 Price가 음수를 가지고 있다는 문구를 출력해준뒤
			price = 0; // 0으로 초기화를 시킨다.
		}
		else 
		{
			price = Price; // 만약에 Price가 0 이상이면 유효한 값이므로 입력된 인수를 price에 입력한다.
		}
		cout << "Invoice data members modified." << endl; // 위 과정이 끝나면 모든 멤버 변수가 수정되었다는 문구를 출력한다.
		cout << endl;
	}
	// main 함수에서는 멤버 변수를 직접 불러올 수 없으므로 멤버 변수 값을 이용하기 위해 get함수를 이용한다.
	string get_N()  // string형인 number를 반환해주는 함수를 선언하기 위해 get_N함수를 정의한다.
	{
		return number; // number를 return 한다.
	}
	string get_D() // string형인 description을 반환해주는 함수를 선언하기 위해 get_D함수를 정의한다.
	{
		return description; // description을 return 한다.
	}
	int get_Q() // int형인 quantity를 반환해주는 함수를 선언하기 위해 get_Q함수를 정의한다.
	{
		return quantity; // quantity를 return 한다.
	}
	int  get_P() // int형인 price를 반환해주는 함수를 선언하기 위해 get_P함수를 정의한다.
	{
		return price; // price를 return 한다.
	}
	int getInvoiceAmount() // 총 물품의 금액을 반환하는 함수인 getInvoiceAmount 함수를 정의한다.
	{
		return quantity * price; // 총 물품의 금액은 물품의 수량인 quantity와 가격 price를 곱한 값이므로 return 해준다.
	}
private:
	string number; // 물품의 번호인 number 멤버 변수를 string 형으로 선언한다.
	string description; // 물품의 설명인 description 멤버 변수를 string 형으로 선언한다.
	int quantity; // 물품의 수량인 quantity 멤버 변수를 int형으로 선언한다.
	int price; // 물품의 가격인 price를 int형으로 선언한다.
};

int main()
{
	Invoice item1("12345", "Hammer", 100, 5); // Invoice형 변수인 item1을 선언하고, 생성자를 이용하여 물품의 각 항목을 초기화 한다.
	Invoice item2("123456", "Saw", -10, 10); // Invoice형 변수인 item2을 선언하고, 생성자를 이용하여 물품의 각 항목을 초기화 한다.

	cout << "Part number : " << item1.get_N() << endl; // item1의 number를 get_N 함수의 return 값을 이용해 출력한다.
	cout << "Part description : " << item1.get_D() << endl; // item1의 description을 get_D 함수의 return 값을 이용해 출력한다.
	cout << "Quantity : " << item1.get_Q() << endl; // item1의 quantity를 get_Q 함수의 return 값을 이용해 출력한다.
	cout << "Price per item : $" << item1.get_P() << endl; // item1의 item 당 price를 get_P 함수의 return 값을 이용해 출력한다.
	cout << "Invoice amount : $" << item1.getInvoiceAmount() << endl; // item1의 총 물품 금액을 getInvoiceAmount 함수를 이용해 출력한다.
	cout << endl;

	cout << "Part number : " << item2.get_N() << endl; // item2의 number를 get_N 함수의 return 값을 이용해 출력한다.
	cout << "Part description : " << item2.get_D() << endl; // item2의 description을 get_D 함수의 return 값을 이용해 출력한다.
	cout << "Quantity : " << item2.get_Q() << endl; // item2의 quantity를 get_Q 함수의 return 값을 이용해 출력한다.
	cout << "Price per item : $" << item2.get_P() << endl; // item2의 item 당 price를 get_P 함수의 return 값을 이용해 출력한다.
	cout << "Invoice amount : $" << item2.getInvoiceAmount() << endl; // item2의 총 물품 금액을 getInvoiceAmount 함수를 이용해 출력한다.
	cout << endl;
}