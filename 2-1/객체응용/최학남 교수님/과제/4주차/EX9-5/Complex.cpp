#include "Complex.h" // Complex 클래스를 이용하기 위해 헤더파일 include
#include<iostream>
using namespace std;

Complex::Complex(double r, double i) // Complex class의 생성자 정의
	: real(r), imag(i) {} // 멤버 이니셜라이저(:)를 이용해 real과 imag 변수를 사용자가 입력한 r과 i로 초기화

void Complex::add(Complex com) // Complex class의 add 함수 정의
{
	real += com.real; // 기존 객체의 real 변수에 사용자가 입력한 추가 객체 com의 real 변수를 더함
	imag += com.imag; // 기존 객체의 imag 변수에 사용자가 입력한 추가 객체 com의 imag 변수를 더함
}

void Complex::sub(Complex com) // Complex class의 sub 함수 정의
{
	real -= com.real; // 기존 객체의 real 변수에 사용자가 입력한 추가 객체 com의 real 변수를 뺌
	imag -= com.imag; // 기존 객체의 imag 변수에 사용자가 입력한 추가 객체 com의 imag 변수를 뺌
}

void Complex::print() // Complex class의 print 함수 정의
{
	cout << "(" << real << ", " << imag << ")"; // cout을 이용해 복소수를 (실수부, 허수부) 형태로 출력
}