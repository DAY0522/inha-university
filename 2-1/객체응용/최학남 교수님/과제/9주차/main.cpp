#include <iostream>
using namespace std;
#include "Rational Number.h"

int main()
{
	RationalNumber rn(1, 3); // Rational class인 rn을 생성
	RationalNumber rn2(3, 4); // Rational class인 rn을 생성
	RationalNumber rn3; // Rational class인 rn을 생성

	rn3 = rn + rn2; // + 연산자 오버로딩을 이용해 RationalNumber class(rn, rn2)의 값을 더함
	rn3.printRational();

	rn3 = rn - rn2; // - 연산자 오버로딩을 이용해 RationalNumber class(rn, rn2)의 값을 뺌
	rn3.printRational();

	rn3 = rn * rn2; // * 연산자 오버로딩을 이용해 RationalNumber class(rn, rn2)의 값을 곱함
	rn3.printRational();

	rn3 = rn / rn2; // / 연산자 오버로딩을 이용해 RationalNumber class(rn, rn2)의 값을 나눔
	rn3.printRational();

	cout << "rn > rn2 ? ";
	if (rn > rn2) cout << "true" << endl; // > 연산자 오버로딩을 이용해 RationalNumber class(rn, rn2)의 값을 비교(rn>rn2인가?)
	else cout << "false" << endl;

	cout << "rn < rn2 ? ";
	if (rn < rn2) cout << "true" << endl; // < 연산자 오버로딩을 이용해 RationalNumber class(rn, rn2)의 값을 비교(rn<rn2인가?)
	else cout << "false" << endl;

	cout << "rn >= rn2 ? ";
	if (rn >= rn2) cout << "true" << endl; // >= 연산자 오버로딩을 이용해 RationalNumber class(rn, rn2)의 값을 비교(rn>=rn2인가?)
	else cout << "false" << endl;

	cout << "rn <= rn2 ? ";
	if (rn <= rn2) cout << "true" << endl; // <= 연산자 오버로딩을 이용해 RationalNumber class(rn, rn2)의 값을 비교(rn<=rn2인가?)
	else cout << "false" << endl;

	cout << "rn == rn2 ? ";
	if (rn == rn2) cout << "true" << endl; // == 연산자 오버로딩을 이용해 RationalNumber class(rn, rn2)의 값을 비교(rn==rn2인가?)
	else cout << "false" << endl;

	cout << "rn != rn2 ? ";
	if (rn != rn2) cout << "true" << endl; // != 연산자 오버로딩을 이용해 RationalNumber class(rn, rn2)의 값을 비교(rn!=rn2인가?)
	else cout << "false" << endl;

	return 0;
}