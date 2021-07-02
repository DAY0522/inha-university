#include <iostream>

using namespace std;

// 클래스의 다중 정의 에러를 방지하기 위해 포함 전처리기 사용
#ifndef COMPLEX_H // COMPLEX_H가 def되지 않았으면 true가 돼 #endif가 나오기 전까지의 코드를 컴파일한다.
#define COMPLEX_H
class Complex { // Complex class 선언
public: // 멤버 함수는 public
	Complex(double = 0.0, double = 0.0); // Complex class의 생성자 선언, 두 개의 double형 parameter를 기본 인자로 초기화
	void add(Complex com); // 두 개의 복소수를 더하는 함수 선언
	void sub(Complex com); // 두 개의 복소수를 빼는 복소수 선언
	void print(); // 복소수를 (실수부, 허수부)의 형태로 출력하는 함수 선언
private: // 멤버 변수는 private
	double real; // 복소수의 실수부를 나타내는 double형 변수 선언
	double imag; // 복소수의 허수부를 나타내는 double형 변수 선언
};

#endif // #ifndef의 끝부분