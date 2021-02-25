#include<iostream>
#include<string>
using namespace std;

struct student
{
	string name;
	int id;
	int age;
	char sex;
	int kor, eng, math;
};

int sum(student stu[], int index);

int main(void)
{
	struct student stu[2];
	int i;
	for (i = 0; i < 2; i++) { 
		cout << "student " << i + 1 << " : ";
		cin >> stu[i].name >> stu[i].id >> stu[i].age >> stu[i].sex >> stu[i].kor >> stu[i].eng >> stu[i].math;
	}

  cout << "the score report" << endl;
	for (i = 0; i < 2; i++) {
		cout << "student " << i + 1 << endl << 
			"student name : " << stu[i].name << "  student id : " << stu[i].id << "  age : " << stu[i].age <<
			"  sex : " << stu[i].sex << endl << "korean : " << stu[i].kor << "  english : " << stu[i].eng << 
			"  math : " << stu[i].math << "  total : " << sum(stu, i) << endl;;
	}
	return 0;
}

int sum(struct student stu[], int index)
{
	return stu[index].kor + stu[index].eng + stu[index].math;
}
