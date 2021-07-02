#include "Complex.h" // Complex 클래스를 이용하기 위해 헤더파일 include
#include <iostream>

using namespace std;

int main()
{
	Complex c1(1, 7); // Complex 객체 c1을 생성하는 동시에 생성자를 이용해 실수부를 1, 허수부를 7로 초기화
	Complex c2(9, 2); // Complex 객체 c2을 생성하는 동시에 생성자를 이용해 실수부를 9, 허수부를 2로 초기화
	Complex c3(10, 1); // Complex 객체 c3을 생성하는 동시에 생성자를 이용해 실수부를 10, 허수부를 1로 초기화
	Complex c4(11, 5); // Complex 객체 c4을 생성하는 동시에 생성자를 이용해 실수부를 11, 허수부를 5로 초기화

	c1.print(); // print 멤버 함수를 이용해 c1을 출력 
	cout << " + ";
	c2.print(); // print 멤버 함수를 이용해 c2을 출력 
	cout << " = ";
	c1.add(c2); // add 멤버 함수를 이용해 c1에서 c2를 더함
	c1.print(); // add 함수의 결과를 보기 위해 c1을 다시 print함수를 이용해 출력

	cout << endl;

	c3.print(); // print 멤버 함수를 이용해 c3을 출력 
	cout << " - ";
	c4.print(); // print 멤버 함수를 이용해 c4을 출력 
	cout << " = ";
	c3.sub(c4); // sub 멤버 함수를 이용해 c3에서 c4를 뺌
	c3.print(); // add 함수의 결과를 보기 위해 c3을 다시 print함수를 이용해 출력

	return 0;
}