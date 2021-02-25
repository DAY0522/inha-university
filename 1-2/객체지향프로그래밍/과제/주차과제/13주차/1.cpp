#include<iostream>
#include<string>
using namespace std;

struct student
{
	int kor, eng, math;
};

int sum(student stu[], int index);

int main(void)
{
	struct student stu[3];
	int i;
	cout << "Enter scores for 3 students" << endl;
	for (i = 0; i < 3; i++) {
		cout << "student " << i + 1 << " : ";
		cin >> stu[i].kor >> stu[i].eng >> stu[i].math;
	}

	cout << "The score report" << endl;
	for (i = 0; i < 3; i++) {
		cout << "student " << i + 1 << endl <<
			"korean : " << stu[i].kor << "  english : " << stu[i].eng 
			<< "  math : " << stu[i].math << "  total : " << sum(stu, i) << endl;
	}
	return 0;
}

int sum(struct student stu[], int index)
{
	return stu[index].kor + stu[index].eng + stu[index].math;
}
