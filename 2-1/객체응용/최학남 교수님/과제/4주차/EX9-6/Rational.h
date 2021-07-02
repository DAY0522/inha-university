#include <iostream>
using namespace std;

// 클래스의 다중 정의 에러를 방지하기 위해 포함 전처리기 사용
#ifndef RATIONAL_H // RATIONAL_H가 def되지 않았으면 true가 돼 #endif가 나오기 전까지의 코드를 컴파일한다.
#define RATIONAL_H
class Rational // Rational class 선언
{
public: // 멤버 함수는 public
	Rational(int = 0, int = 1); // Rational calss의 생성자 선언(두개의 int형 parameter의 디폴트 인자를 0, 1로 설정)
	void add(Rational, Rational); // 두개의 Rational 객체를 parameter로 하는 두 분수를 더해주는 함수 정의
	void sub(Rational, Rational); // 두개의 Rational 객체를 parameter로 하는 두 분수를 빼주는 함수 정의
	void mul(Rational, Rational); // 두개의 Rational 객체를 parameter로 하는 두 분수를 곱해주는 함수 정의
	void div(Rational, Rational); // 두개의 Rational 객체를 parameter로 하는 두 분수를 나눠주는 함수 정의
	void print_fract(); // 분수를 분수 모양 그대로 풀력하는 함수 선언
	void print_float(); // 분수를 소수로 출력하는 함수 선언
private: // 멤버 변수는 private
	int numerator; // 분수의 분자를 나타내는 int형 변수 선언
	int denominator; // 분수의 분모를 나타내는 int형 변수 선언
};

#endif // #ifndef의 끝부분