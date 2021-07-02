#include "Rational.h" // Rational 클래스를 이용하기 위해 헤더파일 include
#include<iostream>
using namespace std;

void reduced_form(int *n, int *d) 
// 입력된 Rational의 멤버변수가 기약분수가 아닐 시 기약분수로 만들어주기 위한 reduced_form 함수 선언
// Rational 함수의 멤버변수 값을 reduced_form 함수 내에서 직접 바꿔야 하므로 call by reference를 이용
{
    if (*n >= *d) // 분자(*n)가 분모(*d)보다 크거나 같으면
    {
        int max = *d; // max에 분모값을 할당
        for (int i = max; i > 1; i--) { // index를 max부터 시작해서 1보다 클때까지
            if (*n % i == 0 && *d % i == 0) 
            // 분자가 i로 나누어 떨어지고, d가 i로 나누어 떨어질 때
            // 이를 처음으로 만족하는 i는 분자와 분모의 최대공약수이므로
            {
                *n /= i; // 분자를 최대 공약수로 나눠준다.
                *d /= i; // 분모를 최대 공약수로 나눠준다.
                return; // 최대공약수로 나눠주면 해당 분수는 기약분수 형태이므로 더 이상 for문을 이용하지 않아도 된다.
            }
            //(numerator % i == 0) ? (denominator % i) ? numerator /= i, denominator /= i : 0 : 0;
        }
    }
    else // 분자(*n)가 분모(*d)보다 작으면
    {
        int max = *n; // max 분자 값을 할당
        for (int i = max; i > 1; i--) {
            // 이중조건문, 둘다 만족시 나누기 수행
            if (*n % i == 0 && *d % i == 0)
           // 분자가 i로 나누어 떨어지고, d가 i로 나누어 떨어질 때
           // 이를 처음으로 만족하는 i는 분자와 분모의 최대공약수이므로
            {
                *n /= i; // 분자를 최대 공약수로 나눠준다.
                *d /= i; // 분모를 최대 공약수로 나눠준다.
                return; // 최대공약수로 나눠주면 해당 분수는 기약분수 형태이므로 더 이상 for문을 이용하지 않아도 된다.
            }
            //(numerator % i == 0) ? (denominator % i) ? numerator /= i, denominator /= i : 0 : 0;
        }
    }
}

Rational::Rational(int n, int d) :numerator(n), denominator(d) // Rational class의 생성자 정의
// 멤버이니셜라이저(:)를 이용해 분자와 분모를 사용자가 입력한 n과 d로 초기화
{
    if (denominator == 0)
    {
        cout << "분모가 0이 될 수 없으므로 분모를 1로 대체합니다." << endl;
        denominator = 1;
    }
    reduced_form(&numerator, &denominator); // 입력된 분수를 기약분수로 만들어주기 위해 reduced_form 함수에 멤버변수를 대입해줌
}

void Rational::add(Rational R1, Rational R2) // Rational class의 add 멤버함수 선언
{
    numerator = R1.numerator * R2.denominator + R1.denominator * R2.numerator; // 분수의 덧셈이므로 분자는 (R1의 분자*R2의 분모)+(R2의 분자*R1의 분모)를 한 값
    denominator = R1.denominator * R2.denominator; // 분수의 덧셈이므로 분모는 (R1의 분모*R2의 분모)
    reduced_form(&numerator, &denominator); // 덧셈을 완료한 후 기약분수 형태로 만듦
}

void Rational::sub(Rational R1, Rational R2) // Rational class의 sub 멤버함수 선언
{
    numerator = R1.numerator * R2.denominator - R1.denominator * R2.numerator; // 분수의 뺄셈이므로 분자는 (R1의 분자*R2의 분모)-(R2의 분자*R1의 분모)를 한 값
    denominator = R1.denominator * R2.denominator; // 분수의 덧셈이므로 분모는 (R1의 분모*R2의 분모)
    reduced_form(&numerator, &denominator); // 뺄셈을 완료한 후 기약분수 형태로 만듦
}

void Rational::mul(Rational R1, Rational R2) // Rational class의 mul 멤버함수 선언
{
    numerator = R1.numerator * R2.numerator; // 분수의 곱셈이므로 분자는 (R1의 분자*R2의 분자)
    denominator = R1.denominator * R2.denominator; // 분수의 곱셈이므로 분모는 (R1의 분모*R2의 분모)
    reduced_form(&numerator, &denominator); // 곱셈을 완료한 후 기약분수 형태로 만듦
}

void Rational::div(Rational R1, Rational R2) // Rational class의 div 멤버함수 선언
{
    numerator = R1.numerator * R2.denominator; // 분수의 나눗셈이므로 분자는 (R1의 분자*R2의 분모)
    denominator = R1.denominator * R2.numerator; // 분수의 나눗셈이므로 분자는 (R1의 분모*R2의 분자)
    reduced_form(&numerator, &denominator); // 나눗셈을 완료한 후 기약분수 형태로 만듦
}

void Rational::print_fract() // Rational class의 print_fract 멤버함수 선언
{
    if (numerator == 0) // 만약에 분자가 0이면 해당 분수는 0인 것이므로 0을 출력하게 한다.
    {
        cout << numerator; // 0을 출력
        return;
    }
    else if (numerator == denominator) // 만약에 분자와 분모가 동일하면 1인 것이므로
    {
        cout << numerator / denominator; // 1을 출력한다.
        return;
    }
    else if (denominator == 1)
    {
        cout << numerator;
        return;
    }
    cout << numerator << "/" << denominator; // 만약에 분자가 0도 아니고 분자와 분모가 동일한 것도 아니면 분자 / 분모를 출력한다.
}

void Rational::print_float() // Rational class의 print_float 멤버함수 선언
{
    cout << (double)numerator / (double)denominator; // 분자를 분모로 나눈 값을 출력한다
}