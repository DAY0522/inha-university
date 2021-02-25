#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
using namespace std;

int addmult(int, int);

int main() {
	int i = 3, j = 4, k, l;
	k = addmult(i, j);
	l = addmult(i, j);
	cout << "k: " << k << ", l: " << l << endl;
	return 0;
}

int addmult(int ii, int jj)
{
	int kk, ll;
	kk = ii + jj;
	ll = ii * jj;
	return (kk, ll);
}



/*
int main() {


	return 0;
}


example 4-1
int global;

int main() {
	int local;
	global = 0;
	local = 2;
	{
		int very_local; // very_local은 지역함수로 괄호 안에서만 유효하다.
		very_local = global + local;
		cout << "global : " << global << endl;
		cout << "local : " << local << endl;
		cout << "very_local : " << very_local << endl; // 괄호 밖으로 이 문장이 가면 error 발생.
	}
	return 0;
}


example 4-2
int N = 1000;
int cal_sum();

int main() {
	int sum;
	sum = cal_sum();
	cout << " sum of first " << N << " naural numbers is " << sum << endl;
	return 0;
}

int cal_sum() {
	int i, s = 0;
	for ( i = 0; i <=N; i++) // N을 전역변수로 사용함으로써 인자가 없는 함수를 만들 수 있다.
	{
		s = s + i;
	}
	return s;
}

example 4-3
int N = 1000;
void sub1(void);
void sub2(void);

int main() {
	//sub1();
	sub2();
	return 0;
}

void sub1(void)
{
	int x;
	x = 0;
	{
		int y;
		x = 1;
		y = 2;
	}
	x = 3;
	//y = 4;
}

void sub2(void) {
	int x;
	x = 0;
	{
		int y;
		x = 1;
		y = 2;
	}
	{
		int y;
		x = 3;
		y = 3;
	}

	cout << "x: " << x;
}


example 5
// 프로토타입은 function call 이전에만 입력하면된다.
// 굳이 main함수 윗 부분이 아니더라도 main함수 안에서도 함수를 불러오기 전에 사용 가능하다.

int main() {
	void message();
	message();
	return 0;
}

void message() {
	cout << "Category of Function" << endl;
}


example 6-1
int cal_sum();

int main() {
	int sum;
	sum = cal_sum();
	cout << "sum : " << sum << endl;
	return 0;
}

int cal_sum() {
	int i, s = 0;
	for (i = 0; i <= 10; i++) // N을 전역변수로 사용함으로써 인자가 없는 함수를 만들 수 있다.
	{
		s = s + i;
	}
	return s;
}

example 6-3
void today(int, int, int);

int main() {
	int d, m, y;
	cout << "enter today's data dd/mm/yy" << endl;
	cin >> d >> m >> y;
	today(d, m, y);
	return 0;
}

void today(int x, int y, int z)
{
	cout << "Today is " << z << "-" << y << "-" << x << endl;
}


example 7
int add(int a, int b, int c);

int main() {
	int x, y, z;
	cout << "Enter any three numbers: " << endl;
	cin >> x >> y >> z;
	z = add(x, y, z);
	cout << "z = " << z;

	return 0;
}

int add(int a, int b, int c)
{
	return (a + b + c);
}


example 8-1
int main() {
	float pi= 3.14159265;
	cout << cos(pi)<< endl;

	return 0;
}


example 8-2
void get_random(int n);

int main() {
	srand((unsigned)time(NULL));
	get_random(10);
	return 0;
}

void get_random(int n)
{
	int i;
	cout.precision(6); // 6자리까지 숫자를 출력! precision은 %6d와 같은 의미
	for (i = 0; i < n; i++)
	{
		cout << rand() << endl;
	}
}


example 8-3 // 프로세싱 시간 측정하는 함수
void get_random(int n);

int main() {
	time_t a = time(NULL);
	for (int x = 0; x < 1000000000; x++){}
	time_t b = time(NULL);

	cout << "processing time = " << b - a << endl;
}


example 9-1
void swap(int, int);

int main() {
	int x, y;
	cout << "Enter the values of x and y" << endl;
	cin >> x >> y;
	swap(x, y);
	cout << "x=" << x << " ,y=" << y << endl;
	return 0;
}

void swap(int a, int b)
{
	int c;
	c = a;
	a = b;
	b = c;
	cout << "the values after swapping ard x=" << a << ", y=" << b << endl;
}


example 9-2
void swap(int*, int*);

int main() {
	int x, y;
	cout << "Enter the values of x and y" << endl;
	cin >> x >> y;
	swap(&x, &y);
	cout << "x=" << x << " ,y=" << y << endl;
	return 0;
}

void swap(int* a, int* b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
	cout << "the values after swapping ard x=" << *a << ", y=" << *b << endl;
}


exercise 4(a)
int addmult(int, int);

int main() {
	int i = 3, j = 4, k, l;
	k = addmult(i, j);
	l = addmult(i, j);
	cout << "k: " << k << ", l: " << l << endl;
	return 0;
}

int addmult(int ii, int jj)
{
	int kk, ll;
	kk = ii + jj;
	ll = ii * jj;
	return (kk, ll);
}

int addmult(int, int, int);

int main() {
	int i = 3, j = 4, k, l;
	k = addmult(i, j, 0);
	l = addmult(i, j, 1);
	cout << "k: " << k << ", l: " << l << endl;
	return 0;
}

int addmult(int ii, int jj, int flag)
{
	int result;

	if (flag==0)
	{
		result = ii + jj;
	}
	else
	{
		result = ii * jj;
	}
	return result;
}
*/