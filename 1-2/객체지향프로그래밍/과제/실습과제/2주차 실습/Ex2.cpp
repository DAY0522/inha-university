#include<iostream>
using namespace std;
#define PI 3.141592

int main_2(void)
{
	float radius, area, circumference; // 반지름, 넓이, 둘레

	cout << "insert the radius : ";
	//printf("insert the radius : ");
	cin >> radius;
	//scanf_s("%f", &radius);

	area = PI * radius * radius;
	circumference = 2.0 * PI * radius;

	cout << "radius = " << radius << endl;
	cout << fixed;
	cout.precision(2); // 소수점 2번째 자리까지 고정
	cout << "radius = " << radius << endl;

	//printf("radius = %f\n", radius);
	cout << "circle area = " << area << endl << "circumference = " << circumference << radius << endl;
	//printf("circle area = %f, circumference = %f\n", area, circumference);

	return 0;
}