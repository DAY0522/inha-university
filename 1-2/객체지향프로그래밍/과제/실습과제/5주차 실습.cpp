#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	/*
	float fNum = 3.1415926;
	printf("%10.2f\n", fNum);
	cout << setw(10) << setprecision(3) << fNum << endl;

	int x, y;
	cin >> x >> y;
	cout << "it is " << x << endl;
	cout << "they are " << x << " and " << y << endl;

	int n;
	cin >> n;
	cout << "it is " << n << endl;
	*/

	/*
	int n2;
	while (cin >> n2)
	{
		cout << n2 << endl;
	}
	*/

	/*
	int x = 10;
	int y = 20;
	if (x > y)
	{
		cout << x << " is bigger than " << y << endl;
	}
	else
	{
		cout << x << " is smaller than(of equal to) " << y << endl;
	}
	*/

	/*
	int x = 80;
	if (x >= 90)
	{
		cout << "grade is A" << endl;
	}
	else if (x >= 80)
	{
		cout << "grade is B" << endl;
	}
	else if (x >= 70)
	{
		cout << "grade is C" << endl;
	}
	else if (x >= 60)
	{
		cout << "grade is D" << endl;
	}
	else
	{
		cout << "grade is F" << endl;
	}
	*/

	/*
	int x = 60;
	if (x>50)
	{
		if (x>80)
		{
			cout << x << " is greater than 80" << endl;
		}
		else
		{
			cout << x << " is betwiin 50 and 80" << endl;
		}
	}
	*/

	/*
	while (1) {
		int country, city;
		cout << "Select the country" << endl;
		cout << "(1) Korea, (2) Japan, (3) quit" << endl;
		cin >> country;
		if (country == 3) break;
		switch (country)
		{
		case 1:
			cout << "Select the city : (1) Seoul, (2) Incheon" << endl;
			cin >> city;
			if (city == 1)
				cout << "you select the Korea Seoul" << endl;
			else if (city == 2)
				cout << "you select the Korea Incheon" << endl;
			else
				cout << "please select the 1 or 2" << endl;
			break;
		case 2:
			cout << "Select the city : (1) Osaka, (2) Tokyo" << endl;
			cin >> city;
			if (city == 1)
				cout << "you select the Japan Osaka" << endl;
			else if (city == 2)
				cout << "you select the Japan Tokyo" << endl;
			else
				cout << "please select the 1 or 2" << endl;
			break;
		default:
			cout << "please select the 1 or 2" << endl;
		}
	}
	*/

	/*
	int x;
	int m = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> x;
		if (x > m)
			m = x;
	}
	cout << "the max is " << m;
	*/

	/*
	int i = 0;
	for (;;)
	{
		if (i == 100)
			break;
		else
			cout << i << endl;
		i++;
	}
	*/

	/* //HW#1-(1)
	int x, y;
	x = 10;
	y = 20;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	*/

	/* //HW#1-(2)
	int x, y;
	x = 10;
	y = 20;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	int z = x + y;
	cout << "x + y = " << z;
	*/

	/* //HW#1-(3)
	int x, y;
	x = 10;
	y = 20;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "x + y = " << x + y << endl;
	cout << "x - y = " << x - y << endl;
	cout << "x * y = " << x * y << endl;
	cout << "x / y = " << float(x) / float(y);
	*/

	/* //HW#1-(4)
	const float pi = 3.141592;
	cout << setprecision(3) << pi << endl;
	*/

	/* //2-(1)
	int a, b;
	cin >> a >> b;
	cout << "they are " << a << " and " << b << endl;
	*/

	/* //HW#2-(2)
	int a, b;
	cin >> a >> b;
	cout << "sum : " << a + b << "   sub : " << a - b << "   mul : " << a * b << "   div : " << float(a) / float(b) << endl;
	*/
	return 0;
}