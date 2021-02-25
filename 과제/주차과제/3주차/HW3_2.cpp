#include<iostream>
using namespace std;
int main(void)
{
	int line = 1;
	for (char i = 65; i <= 71; i++)
	{
		cout << i;
		if (i==71-(line-1))
		{
			for (int j = 0; j < 2 * (line-1) - 1; j++)
				cout << ' ';
			if (i == 71)
				i--;
			for (i; i >=65 ; i--)
				cout << i;
			cout << endl;
			line++;
		}
		if (line>7)
			break;
	}
	return 0;
}