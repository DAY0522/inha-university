#include <iostream>
using namespace std;
#include "Rational Number.h"

RationalNumber::RationalNumber(int n, int d)
{
	numerator = n; // 분자
	denominator = d; // 분모
	reduction(); 
}

RationalNumber RationalNumber::operator+(const RationalNumber& R) // + 연산자 오버로딩 정의
{
	RationalNumber RN;
	RN.numerator = numerator * R.denominator + denominator * R.numerator; // 분수의 덧셈이므로 분자는 (객체 자신의 분자*R의 분모)+(R의 분자*객체 자신의 분모)를 한 값
	RN.denominator = denominator * R.denominator; // 분수의 덧셈이므로 분모는 (객체 자신의 분모*R의 분모)
	RN.reduction();
	return RN;
}

RationalNumber RationalNumber::operator-(const RationalNumber& R) // - 연산자 오버로딩 정의
{
	RationalNumber RN(numerator * R.denominator - denominator * R.numerator, denominator * R.denominator); 
	// 분수의 뺄셈이므로 분자는 (객체 자신의 분자*R의 분모)-(R의 분자*객체 자신의 분모)를 한 값
	// 분수의 뺄셈이므로 분모는 (객체 자신의 분모*R의 분모)
	RN.reduction();
	return RN;
}

RationalNumber RationalNumber::operator*(const RationalNumber& R) // * 연산자 오버로딩 정의
{
	RationalNumber RN;
	RN.numerator = numerator * R.numerator; // 분수의 곱셈이므로 분자는 (객체 자신의 분자*R의 분자)
	RN.denominator = denominator * R.denominator; // 분수의 곱셈이므로 분모는 (객체 자신의 분모*R의 분모)
	RN.reduction();
	return RN;
}

RationalNumber RationalNumber::operator/(RationalNumber& R) // / 연산자 오버로딩 정의
{
	RationalNumber RN;
	RN.numerator = numerator * R.denominator; // 분수의 나눗셈이므로 분자는 (객체 자신의 분자*R의 분모)
	RN.denominator = denominator * R.numerator; // 분수의 나눗셈이므로 분자는 (객체 자신의 분모*R의 분자)
	if (RN.denominator < 0 && RN.numerator < 0)
	{
		RN.denominator = -RN.denominator;
		RN.numerator = -RN.numerator;
	}
	RN.reduction(); 
	return RN;
}

bool RationalNumber::operator>(const RationalNumber& R) const // > 연산자 오버로딩 정의
{
	return (double)numerator / (double)denominator > (double)R.numerator / (double)R.denominator ? 1 : 0;
}


bool RationalNumber::operator<(const RationalNumber& R) const // < 연산자 오버로딩 정의
{
	return (double)numerator / (double)denominator < (double)R.numerator / (double)R.denominator ? 1 : 0;
}

bool RationalNumber::operator>=(const RationalNumber& R) const // >= 연산자 오버로딩 정의
{
	return (double)numerator / (double)denominator >= (double)R.numerator / (double)R.denominator ? 1 : 0;
}

bool RationalNumber::operator<=(const RationalNumber& R) const // <= 연산자 오버로딩 정의
{
	return (double)numerator / (double)denominator <= (double)R.numerator / (double)R.denominator ? 1 : 0;
}

bool RationalNumber::operator==(const RationalNumber& R) const // == 연산자 오버로딩 정의
{
	return (double)numerator / (double)denominator == (double)R.numerator / (double)R.denominator ? 1 : 0;
}

bool RationalNumber::operator!=(const RationalNumber& R) const // != 연산자 오버로딩 정의
{
	return (double)numerator / (double)denominator != (double)R.numerator / (double)R.denominator ? 1 : 0;
}

void RationalNumber::reduction() // 기약분수로 만드는 함수 정의
{
	if (denominator == 0 || denominator < 0) // 분모가 음수이거나 0이면 오류 발생 문구 출력 후 exit함
	{
		cout << "분모가 음수이거나 0이 될 수 없습니다." << endl;
		exit(1);
	}

	if (numerator < 0)
	{
		numerator = -numerator;
		if (numerator >= denominator)
		{
			int max = denominator;
			for (int i = max; i > 1; i--) {
				if (numerator % i == 0 && denominator % i == 0)
				{
					numerator /= i;
					denominator /= i;
				}
			}
		}
		else
		{
			int max = numerator;
			for (int i = max; i > 1; i--) {
				if (numerator % i == 0 && denominator % i == 0)
				{
					numerator /= i;
					denominator /= i;
				}
			}
		}
		numerator = -numerator;
	}
	else
	{
		if (numerator >= denominator)
		{
			int max = denominator;
			for (int i = max; i > 1; i--) {
				if (numerator % i == 0 && denominator % i == 0)
				{
					numerator /= i;
					denominator /= i;
					return;
				}
			}
		}
		else
		{
			int max = numerator;
			for (int i = max; i > 1; i--) {
				if (numerator % i == 0 && denominator % i == 0)
				{
					numerator /= i;
					denominator /= i;
					return;
				}
			}
		}
	}
}

void RationalNumber::printRational() const
{
	if (numerator == 0) // 만약에 분자가 0이면 해당 분수는 0인 것이므로 0을 출력하게 한다.
	{
		cout << numerator << endl; // 0을 출력
		return;
	}
	else if (numerator == denominator) // 만약에 분자와 분모가 동일하면 1인 것이므로
	{
		cout << numerator / denominator << endl; // 1을 출력한다.
		return;
	}
	else if (denominator == 1) // 분모가 1이면 분자만 출력한다
	{
		cout << numerator << endl; // 분자만 출력
		return;
	}
	cout << numerator << "/" << denominator << endl; // 만약에 분자가 0도 아니고 분자와 분모가 동일한 것도 아니면 분자 / 분모를 출력한다.
}