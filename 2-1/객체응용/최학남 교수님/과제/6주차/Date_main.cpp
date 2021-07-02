#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
	Date d1; // d1을 기본 생성자로 선언
	Date d2(142, 2021); // d2를 선언한 후 ddd, yyyy형태로 생성자를 통해 초기화
	Date d3(22, 5, 2021); // d3를 선언한 후 dd, m, yyyy형태로 생성자를 통해 초기화
	Date d4("May", 22, 2021); // d4를 선어한 후 month(string), dd, yyyy형태로 생성자를 통해 초기화

	d1.print(); // d1을 mm/dd/yyyy형태로 출력
	cout << endl; 

	d2.printDDDYYYY(); // d2를 ddd/yyyy형태로 출력
	cout << endl; 

	d3.printMMDDYY(); // d3를 mm/dd/yy형태로 출력
	cout << endl; 

	d4.printMonthDDYYYY(); // d4를 month(string), dd, yyyy형태로 출력 
	cout << endl;


	return 0;
}