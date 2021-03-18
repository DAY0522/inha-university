#include<iostream>
using namespace std;

struct student
{
	int number;
	char name[20];
	double height;
	struct date* dob;
};

struct date
{
	int month;
	int day;
	int year;
};

int main()
{
	struct date d = { 3,20,1980 };
	struct student  s = { 12201856,"Kim",170 };

	s.dob = &d;

	cout << "SID : " << s.number << endl;
	cout << "NAME : " << s.name << endl;
	cout << "HEIGHT : " << s.height << endl;

	cout << "Bday : " << (*s.dob).year << "." << 
		(*s.dob).month << "." << (*s.dob).day <<  endl;

	return 0;
}