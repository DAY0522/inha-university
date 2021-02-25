#include<iostream>
using namespace std;
int get_max2(int x, int y);
int get_max3(int x, int y, int z);
int main(void) {
	int max1, max2;
	int x = 2, y = 5, z = -2;
	max1 = get_max2(x, z);
	max2 = get_max3(x, y, z);

	cout << "the maximum value is " << max1 << endl;
	cout << "the maximum value is " << max2 << endl;
	return 0;
}

int get_max2(int x, int y)
{
	if (x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int get_max3(int x, int y, int z)
{
	return get_max2(get_max2(x, y), z);
}
