#include<iostream>
using namespace std;

int main_1_2(void)
{
	int x; // int type(-2147483648~2147483647)
	unsigned int y; // unsigned int type(0~4294967295)

	x = 2147483647;
	cout << "x = " << x << endl;
	//printf("x = %d\n", x);
	cout << "x+1 = " << x+1 << endl;
	//printf("x+1 = %d\n", x+1);
	cout << "x+2 = " << x+2 << endl;
	//printf("x+2 = %d\n", x+2);
	cout << "x+3 = " << x+3 << endl;
	//printf("x+3 = %d\n", x+3);

	y = 4294967295;
	cout << "y = " << y << endl;
	//printf("y = %u\n", y);
	cout << "y+1 = " << y+1 << endl;
	//printf("y+1 = %u\n", y+1);
	cout << "y+2 = " << y+2 << endl;
	//printf("y+2 = %u\n", y+2);
	cout << "y+3 = " << y+3 << endl;
	//printf("y+3 = %u\n", y+3);

	return 0;
}