#include<iostream>

#define STU_NUMBER 1
#define REG_NUMBER 2
#pragma pack(4)

using namespace std;

union  example
{
	int i;
	char c;
};
union ip_address
{
	unsigned long ladder;
	unsigned char saddr[4];
};

struct student {
	int type;
	union 
	{
		int stu_number;
		char reg_number[15];
	}id;
	char name[20];
};

void print(struct student s);

enum days { SUN, MON, TUE, WED, THU, FRI, SAT };
enum colors { white, red, blue, green, black };
enum levels { low = 1, };
enum CarOptions {
	SunRoof = 0x01,
	Spoiler = 0X02,
	FogLights = 0x04,
	Tintedwindows = 0x08
};

enum tvtype {LCD1, LCD2, LED, PDP, TD};

typedef struct point {
	int x;
	int y;
}POINT;

POINT translate(POINT p, POINT delta);

union test {
	int a;
	double b;
	char name[9];
};

struct  test1{
	double a;
	char b;
	short c;
	int d;
};

struct test2
{
	char a;
	double b;
	short c;
	int d;
};

int main()
{
	cout << "test : " << sizeof(test) << "Byte" << endl;
	cout << "test1 : " << sizeof(test1) << "Byte" << endl;
	cout << "test2 : " << sizeof(test2) << "Byte" << endl;
	return 0;
}

void print(struct student s)
{
	switch (s.type){
	case STU_NUMBER:
		cout << "SID : " << s.id.stu_number << endl;
		cout << "Name :" << s.name << endl;
		break;
	case REG_NUMBER:
		cout << "RID : " << s.id.reg_number << endl;
		cout << "Name :" << s.name << endl;
		break;
	default:
		cout << "type error" << endl;
		break;
	}
}


POINT translate(POINT p, POINT delta)
{
	POINT new_p;

	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;
}

/*
EX 5
int main()
{
	union example v;

	v.i = 100;
	cout << "v.c : " << v.c << ", v.i :" << v.i << endl;

	v.c = 'A';
	cout << "v.c : " << v.c << ", v.i :" << v.i << endl;


	return 0;
}

EX 6
int main()
{
	union ip_address addr;

	addr.saddr[0] = 1; //
	addr.saddr[1] = 0; //
	addr.saddr[2] = 0; //
	addr.saddr[3] = 127; // 16진수로 7f

	// 스택으로 아래부터 0 / 1 / 2 / 3으로 각각 1 / 0 / 0 / 127이 16진수로 들어감
	// 그 결과

	cout << hex;
	cout << "addr.laddr : " << addr.ladder << endl;

	return 0;
}

EX 7
int main()
{
	struct student s1, s2;

	s1.type = STU_NUMBER;
	s1.id.stu_number = 12201856;
	strcpy_s(s1.name, "Dayoung");

	s2.type = REG_NUMBER;
	strcpy_s(s2.id.reg_number, "123456-789012");
	strcpy_s(s2.name, "Kim");

	print(s1);
	print(s2);

	return 0;
}

EX8
int main()
{
	enum days days1;
	days1 = FRI;

	int days2;
	days2 = WED;

	if (days1==5)
	{
		cout << "Friday" << endl;
	}

	if (days2==3)
	{
		cout << "Wednesday" << endl;
	}

	return 0;
}

EX9

int main()
{
	enum days days1;
	days1 = FRI;

	int days2;
	days2 = WED;

	if (days1==5)
	{
		cout << "Friday" << endl;
	}

	if (days2==3)
	{
		cout << "Wednesday" << endl;
	}

	cout << Tintedwindows << endl;
	return 0;
}

EX10
int main()
{
	int type;

	cout << "Enter the type of TV : ";
	cin >> type;

	switch (type)
	{
	case LCD1:
		cout << "LCD1 TV" << endl;
		break;
	case LCD2:
		cout << "LCD2 TV" << endl;
		break;
	case LED:
		cout << "LED TV" << endl;
		break;
	case PDP:
		cout << "PDP TV" << endl;
		break;
	case TD:
		cout << "3D TV" << endl;
		break;
	default:
		cout << "reselect the TV type" << endl;
		break;
	}
	return 0;
}

EX11
int main()
{
	POINT p = { 2,3 };
	POINT delta = { 10,10 };
	POINT result;

	result = translate(p, delta);
	cout << "coordinate of the new point : (" << result.x << ", " << result.y << ")" << endl;
	return 0;
}

EX12
int main()
{
	cout << "test : " << sizeof(test) << "Byte" << endl;
	cout << "test1 : " << sizeof(test1) << "Byte" << endl;
	cout << "test2 : " << sizeof(test2) << "Byte" << endl;
	return 0;
}
*/