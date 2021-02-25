#include<iostream>
using namespace std;

/*
int main(void) // Ex. 
{
	return 0;
}


int main(void) // Ex. a
{
	int j;
	while (j <= 10)
	{
		cout << j << endl; // endl : endline
		j += 1; // j=j+1
	}
	return 0;
}


int main(void) // Ex. b
{
	int i = 1;
	while (i <= 10); // ;이 붙으면 안 된다. 있으면 무한루프 발생. 즉, while문만 무한으로 실행(while문 다음으로 넘어가지 못하게 됨)
	{
		cout << i << endl; // endl : endline
		i ++; // i=i+1
	}
	return 0;
}


int main(void) // Ex. c
{
	int j = 0;
	while (j <= 10)
	{
		cout << j << endl;
		j = j + 1;
	}
	return 0;
}


int main(void) // Ex. d
{
	int x = 1;
	while (x==1) // ==은 같다는 연산자
	{
		x = x - 1;
		cout << x << endl;
	}
	return 0;
}


int main(void) // Ex. e
{
	int x = 1;
	while (x==1) // 괄호가 없으면 while문 아래 코드 하나만 loop문으로 받을 수 있음
		x = x - 1;
	cout << x << endl;
	return 0;
}


int main(void) // Ex. f ( while문과 for문의 차이)
{
	char x; // char : -128 ~ 127
	while (x = 0; x <= 255; x++)
	{
		cout << "Ascii value" << int(x) << "Character" << x << endl;
	} // char 자료형을 decimal로 출력하고 싶을 때는 int(변수)를 입력해주면 된다.
	return 0;
}


int main(void) // Ex. f - 1 ( while문과 for문의 차이)
{
	char x; // char : -128 ~ 127
	for (x = 0; x <= 255; x++) // char은 128이 되면 -128이 되므로 무한루프가 발생하게 된다.
	{
		cout << "Ascii value" << int(x) << "Character" << x << endl;
	} // char 자료형을 decimal로 출력하고 싶을 때는 int(변수)를 입력해주면 된다.
	return 0;
}


int main(void) // Ex. f - 2
{
	unsigned char x; // unsigned char : 0 ~ 255
	for (x = 0; x < 255; x++)  // unsigned일 때는 overflow 발생 x
	{
		cout << "Ascii value : " << int(x) << ", Character : " << x << endl;
	}
	return 0;
}


int main(void) // Ex. g
{
	int x = 4, y, z;
	y = --x; // 먼저 x = x - 1 함
	z = x--; // 다음 줄에서 x = x - 1이 됨
	cout << x << ' ' << y << ' ' << z;
	return 0;
}


int main(void) // Ex. h 
{
	int x = 4, y = 3, z;
	z = x-- - y;
	cout << x << ' ' << y << ' ' << z;
	return 0;
}


int main(void) // Ex. h -1
{
	int x = 4, y = 3, z;
	z = --x - y;
	cout << x << ' ' << y << ' ' << z;
	return 0;
}


int main(void) // Ex. i
{
	while ('a'<'b') // a와 b가 아스키코드로 인식 돼어 97<98이므로 무한루프 발생
	{ // 조건문에 문자가 들어갈 수도 있다!
		cout << "malyalam is a palindrome" << endl;
	}
	return 0;
}


int main(void) // Ex. j
{
	int i = 10;
	while (i = 20) // =이 하나 있어서 무한루프가 발생하게 된다.
				   // i = 20을 참으로 받아들임.
	{
		cout << "A computer buff!" << endl;
	}
	return 0;
}


int main(void) // Ex. j -1
{
	int i = 10;
	while (0) // 0은 false로 판단되므로 while문이 실행되지 않는다.
	{
		cout << "A computer buff!" << endl;
	}
	cout << "end" << endl;
	return 0;
}


int main(void) // Ex. k
{
	int i;
	while (i = 10) // i++; 을 하더라도 다시 i가 10으로 초기화 되므로 계속 10만 출력하게 됨
	{
		cout << i << endl;
		i = i + 1; // i++; 과 동일
		//cout << i << endl; // 하면 11이 출력됨
	}
	return 0;
}


int main(void) // Ex. ㅣ
{
	float x = 1.1;
	while (x == 1.1) // float 같은 경우 근사치를 가지고 있어서 정확히 1.1이 되지 않는다.
					 // 따라서 x == 1.1은 false가 되므로 반복문이 실행되지 않는다.
					 // 조건문에는 float, double은 쓰지 않는 것이 좋다.
	{
		cout << x << endl;
		x = x - 0.1;
	}
	return 0;
}


int main(void) // Ex. m
{
	printf("%d %d", '1', '2');

	while ('1' < '2') // 조건문 : 49 < 50
	{
		cout << "while loop" << endl;
	}
	return 0;
}


int main(void) // Ex. n
{
	char x;
	for (x = 0; x <= 255; x++)
	{
		cout << "Ascii value" << int(x) << "Character" << x << endl;
	}
	return 0;
}


int main(void) // Ex. o
{
	int x = 4, y = 0, z;
	while (x >= 0)
	{
		x--;
		y++;

		if (x == y)
			continue; // x가 2, y가 2가 되면 continue가 실행돼 다음 반복문으로 넘어가게 됨
		else
			cout << x << ' ' << y << endl;
	}
	return 0;
}


int main(void) // Ex. p
{
	int x = 4, y = 0, z;
	while (x >= 0)
	{
		if (x == y)
			break; // x가 2, y가 2가 되면 break가 실행돼 반복문이 종료됨
		else
			cout << x << ' ' << y << endl;

		x--;
		y++;
	}
	return 0;
}
*/