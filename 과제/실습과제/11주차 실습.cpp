#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
#define SIZE 3


/*
EX 1
struct student
{
	int number;
	char name[10]; // string 입력할 때 이용
	double height;
}; // 항상 세미콜론 붙여주기

int main()
{
	struct student s; // parameter 처럼 이용
	s.number = 12201856;
	strcpy_s(s.name, "dayeong"); // strcpy : string copy (,) , 앞에 거에 , 뒤에 거를 copy한다.
	s.height = 170.3;

	cout << "sid : " << s.number << endl;
	cout << "name : " << s.name << endl;
	cout << "height : " << s.height << endl;

	return 0;
}

EX 2
struct student
{
	int korean;
	int english;
	int math;
};

int main()
{
	struct student x, y;

	x.korean = 80;
	x.english = 90;
	x.math = 70;

	cout << "x - korean : " << x.korean;
	cout << ", english : " << x.english;
	cout << ", math : " << x.math << endl;

	cin >> y.korean >> y.english >> y.math;

	cout << "y - korean : " << y.korean;
	cout << ", english : " << y.english;
	cout << ", math : " << y.math << endl;


	return 0;
}

EX 3
struct student
{
	int number;
	char name[20];
	double height;
};

int main()
{
	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		cout << "Enter the student ID : ";
		cin >> list[i].number;

		cout << "Enter the name : ";
		cin >> list[i].name;

		cout << "Enter the height : ";
		cin >> list[i].height;
	}

	for (i = 0; i < SIZE; i++)
	{
		cout << i << "th - SID : " << list[i].number;
		cout << ", name : " << list[i].name;
		cout << ", height : " << list[i].height << endl;
	}

	return 0;
}

EX 4
struct vector
{
   float x;
   float y;
};

struct vector get_vector_sum(struct vector a, struct vector b);

int main()
{
   struct vector a = { 2.0, 3.0 }; // (x,y)
   struct vector b = { 5.0, 6.0 }; // 구조체에서 선언한 순서대로 배열을 이용 가능한 듯?
   struct vector sum;

   sum = get_vector_sum(a, b);
   cout << "Vector Sum is " << sum.x << ", " << sum.y << endl;


   return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b)
{
   struct vector result;

   result.x = a.x + b.x;
   result.y = a.y + b.y;

   return result;
}
*/