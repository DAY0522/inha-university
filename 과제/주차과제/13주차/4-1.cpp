#include<iostream>
using namespace std;

struct student
{
	char name[20];
	int id;
	char sex;
	int kor, eng, math;
};

void main() {
	struct student std[5]; // 5 students
	int i;
	cout << "enter name, id, sex, kor, eng, math for 5 students" << endl;
	for (i = 0; i < 5; i++) { // read data for each student
		cout << "student " << i+1 << endl;
		cin >> std[i].name >> std[i].id >> std[i].sex
			>> std[i].kor >> std[i].eng >> std[i].math;
	}
	// now display
	cout << "now displaying the students" << endl;
	for (i = 0; i < 5; i++) {
		cout << "student " << i+1 << endl;
		cout << "name : " << std[i].name << "  student id : " << std[i].id << "  sex : " << std[i].sex << endl;
		cout << "kor score : " << std[i].kor << "  eng score : " << std[i].eng << "  math score : " << std[i].math << endl;
	}
}
