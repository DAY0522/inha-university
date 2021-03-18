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
	struct student s1 = { 30,"Kim",167.2 };
	struct student s2 = { 31,"Park",179.1, NULL};
	struct student* first;
	struct student* current = NULL;

	first = &s1;
	s1.next = &s2;
	s2.next = NULL;

	current = first;
	while (current != NULL)
	{
		cout << current->number << endl;
		current = current->next;
	}
	return 0;
}