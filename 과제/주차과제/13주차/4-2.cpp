#include<iostream>
using namespace std;

struct student
{
	char name[20];
	int id;
	char sex;
	int kor, eng, math;
};

struct student stu[5]; // 5 students

void load();
void show();
void best_score();
void male_students();
void female_students();
void change();

int main() {

	int i;
	while (1)
	{
		cout << "selcet menu(1~6)" << endl;
		cin >> i;
		switch (i)
		{
		case 1:
			load();
			break;
		case 2:
			show();
			break;
		case 3:
			best_score();
			break;
		case 4:
			male_students();
			break;
		case 5:
			female_students();
			break;
		case 6:
			change();
			break;
		default:
			cout << "잘못된 값을 입력하셨습니다. 1~6의 숫자를 입력하시오." << endl;
			break;
		}
	}
	return 0;
}

void load(void)
{
	cout << "enter data for 5 students(name id sex korean english math scores)" << endl;
	for (int i = 0; i < 5; i++) { // read data for each student
		cout << "student " << i + 1 << endl;
		cin >> stu[i].name >> stu[i].id >> stu[i].sex
			>> stu[i].kor >> stu[i].eng >> stu[i].math;
	}
	cout << endl;
}

void show()
{
	cout << "displaying the students" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "student " << i + 1 << endl;
		cout << "name : " << stu[i].name << "  student ID : " << stu[i].id << "  sex : " << stu[i].sex << endl;
		cout << "kor score : " << stu[i].kor << "  eng score : " << stu[i].eng << "  math score : " << stu[i].math << endl;
	}
	cout << endl;
}

void best_score() 
{
	int k_max = stu[0].kor;
	int e_max = stu[0].eng;
	int m_max = stu[0].math;
	int k_i = 0;
	int e_i = 0;
	int m_i = 0;

	for (int i = 1; i < 5; i++) {
		if (stu[i].kor > k_max)
		{
			k_i = i;
			k_max = stu[i].kor;
		}
		if (stu[i].eng > e_max)
		{
			e_i = i;
			e_max = stu[i].eng;
		}
		if (stu[i].math > m_max)
		{
			m_i = i;
			m_max = stu[i].math;
		}
	}
	cout << "best score for korean :" << stu[k_i].name << " " << stu[k_i].kor << endl;
	cout << "best score for english :" << stu[e_i].name << " " << stu[e_i].eng << endl;
	cout << "best score for math :" << stu[m_i].name << " " << stu[m_i].math << endl;
	cout << endl;
}

void male_students()
{
	for (int i = 0; i < 5; i++) {
		if (stu[i].sex == 'M')
		{
			cout << "student " << i + 1 << endl;
			cout << "name : " << stu[i].name << "  student ID : " << stu[i].id << "  sex : " << stu[i].sex << endl;
			cout << "kor score : " << stu[i].kor << "  eng score : " << stu[i].eng << "  math score : " << stu[i].math << endl;
		}
	}
	cout << endl;
}
void female_students()
{
	for (int i = 0; i < 5; i++) {
		if (stu[i].sex == 'F')
		{
			cout << "student " << i+1 << endl;
			cout << "name : " << stu[i].name << "  student ID : " << stu[i].id << "  sex : " << stu[i].sex << endl;
			cout << "kor score : " << stu[i].kor << "  eng score : " << stu[i].eng << "  math score : " << stu[i].math << endl;
		}
	}
	cout << endl;
}

void change() 
{
	cout << "enter student ID" << endl;
	int s_id;
	cin >> s_id;
	for (int i = 0; i < 5; i++) { // read data for each student
		if (stu[i].id == s_id)
		{
			cout << "enter new data(name id sex korean english math)" << endl;
			cin >> stu[i].name >> stu[i].id >> stu[i].sex
				>> stu[i].kor >> stu[i].eng >> stu[i].math;
		}
	}
	cout << endl;
}