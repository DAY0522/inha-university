#include "Rational.h" // Complex 클래스를 이용하기 위해 헤더파일 include
#include <iostream>

using namespace std;

int main()
{
	Rational R1(2, 6); // Rational class의 객체인 R1을 선언하고 멤버 변수를 2, 6으로 초기화
	Rational R2(21, 24); // Rational class의 객체인 R2을 선언하고 멤버 변수를 21, 24으로 초기화
	Rational R3; // Rational class의 객체인 R3을 선언, 초기화 값을 입력해주지 않았으므로 디폴트 인자에 의해 분자는 0, 분모는 1이 됨

	R1.print_fract(); // R1을 분수 형태로 출력
	cout << " + ";
	R2.print_fract(); // R2를 분수 형태로 출력
	cout << " = ";
	R3.add(R1,R2); // R1과 R2를 더한 값을 R3에 대입
	R3.print_fract(); // R3을 분수 형태로 출력
	cout << endl;
	R3.print_fract(); // R3을 분수 형태로 출력
	cout << " = ";
	R3.print_float(); // R3을 소수 형태로 출력

	cout << endl << endl;


	R1.print_fract(); // R1을 분수 형태로 출력
	cout << " - ";
	R2.print_fract(); // R2을 분수 형태로 출력
	cout << " = ";
	R3.sub(R1,R2); // R1에서 R2를 뺀 값을 R3에 대입
	R3.print_fract(); // R3을 분수 형태로 출력
	cout << endl;
	R3.print_fract(); // R3을 분수 형태로 출력
	cout << " = ";
	R3.print_float(); // R3을 소수 형태로 출력

	cout << endl << endl;


	R1.print_fract(); // R1을 분수 형태로 출력
	cout << " x ";
	R2.print_fract(); // R2을 분수 형태로 출력
	cout << " = ";
	R3.mul(R1,R2); // R1과 R2를 곱한 값을 R3에 대입
	R3.print_fract(); // R3를 분수 형태로 출력
	cout << endl;
	R3.print_fract(); // R3를 분수 형태로 출력
	cout << " = ";
	R3.print_float(); // R3를 소수 형태로 출력

	cout << endl << endl;


	R1.print_fract(); // R1을 분수 형태로 출력
	cout << " / ";
	R2.print_fract(); // R2을 분수 형태로 출력
	cout << " = ";
	R3.div(R1,R2); // R1에서 R2를 나눈 값을 R3에 대입
	R3.print_fract(); // R3를 분수 형태로 출력
	cout << endl;
	R3.print_fract(); // R3를 분수 형태로 출력
	cout << " = ";
	R3.print_float(); // R3를 소수 형태로 출력

	cout << endl << endl;

	return 0;
}