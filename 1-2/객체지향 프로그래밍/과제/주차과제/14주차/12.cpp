#include<iostream>
using namespace std;

struct student
{
	int number;
	char name[20];
	double height;
	struct student* next;
};

int main()
{
	struct student s = { 12201856,"Kim",170 };
	struct student* p;

	p = &s;

	cout << "Student id is : " << s.number << endl;
	cout << "Student id is : " << (*p).number << endl;
	cout << "Student id is : " << p->number << endl;

	return 0;
}