#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
#define SIZE 10
#define ROWS 3
#define COLS 3

void selection_sort(int list[], int n);
void print_list(int list[], int n);
int seq_search(int list[], int n, int key);
int binary_search(int list[], int n, int key);

int main(void)
{
	int A[ROWS][COLS] = { {2,3,0},{8,9,1},{7,0,5} };
	int B[ROWS][COLS] = { {1,0,0},{1,0,0},{1,0,0} };
	int D[ROWS][COLS] = { 0 };
	int r, c, i;

	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
		{
			for (i = 0; i < COLS; i++)
			{
				D[r][c] += A[r][i] * B[i][c];
			}
		}

	}

	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
		{
			cout.width(3);
			cout.fill(' ');
			cout << D[r][c] << " ";
		}
		cout << endl;
	}

	return 0;
}
int binary_search(int list[], int n, int key)
{
	int low, high, middle;

	low = 0;
	high = n - 1;

	while (low<=high)
	{
		middle = (low + high) / 2;
		if (key == list[middle])
		{
			return middle;
		}
		else if (key>list[middle])
		{
			low = middle + 1;
		}
		else
		{
			high = middle - 1;
		}
	}
	return -1;
}

/*
int main(void)
{
	int s[3][5];
	int i, j;
	int value = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			s[i][j] = value++;
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << s[i][j] << endl;
		}
	}

	return 0;
}


int main(void)
{
	int s[3][5];
	int i, j;
	int value = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			s[i][j] = value++;
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout.width(3);
			cout.fill(' ');
			cout << s[i][j];
		}
		cout << endl;
	}

	return 0;
}


int main(void)
{
	int s[6][3][5];
	int x, y, z;
	int i = 0;

	for (z = 0; z < 6; z++)
	{
		for (y = 0; y < 3; y++)
		{
			for (x = 0; x < 5; x++)
			{
				s[z][y][x] = i++;
				cout << s[z][y][x] << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}


int main(void)
{
	int data[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		cout << "Enter the number : ";
		cin >> data[i];
	}

	cout << "===================" << endl;
	cout << "      Revers       " << endl;
	cout << "===================" << endl;


	for (i = SIZE - 1; i >= 0; i--)
	{
		cout << data[i] << " ";
	}
	cout << endl;

	return 0;
}


int main(void)
{
	int freq[SIZE];
	int i, score;

	for (i = 0; i < SIZE; i++)
	{
		freq[i] = 0;
	}

	while (1)
	{
		cout << "Enter the number (exit : -1) : ";
		cin >> score;
		if (score < 0 || score > 100)
			break;
		freq[score]++;
	}

	cout << "==========================" << endl;
	cout << "   Number     Frequency   " << endl;
	cout << "==========================" << endl;

	for (i = 0; i < SIZE; i++)
	{
		cout.width(6);
		cout.fill(' ');
		cout << i << "            " << freq[i] << endl;
	}

	return 0;
}


int main(void)
{
	int freq[SIZE] = { 0 };
	int i;

	for (i = 0; i < 10000; i++)
	{
		++freq[rand() % 6]; // seed 값을 설정해주지 않았으므로 매번 같은 값이 나옴
	}

	cout << "==========================" << endl;
	cout << "   Number     Frequency   " << endl;
	cout << "==========================" << endl;

	for (i = 0; i < SIZE; i++)
	{
		cout.width(6);
		cout.fill(' ');
		cout << i+1 << "          " << freq[i] << endl;
	}

	return 0;
}


int main(void)
{
	int grade[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };

	cout << "";
	print_list(grade, SIZE);

	selection_sort(grade, SIZE);

	cout << "";
	print_list(grade, SIZE);

	return 0;
}
void selection_sort(int list[], int n)
{
	int i, j, temp, min;

	for (i = 0; i < n-1; i++)
	{
		min = i;
		for (j = i+1; j < n; j++)
		{
			if (list[j]<list[min]) // 내림차순으로 하려면 이 부분만 >로 바꾸면 됨
			{
				min = j;
			}
		}
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;
	}
}
void print_list(int list[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << list[i] << ' ';
	}
	cout << endl;
}


int main(void)
{
	int key;
	int grade[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "Enter the key : ";
	cin >> key;

	cout << "Result : " <<  seq_search(grade, SIZE, key);

	return 0;
}
int seq_search(int list[], int n, int key) {
	int i;
	for (i = 0; i < SIZE; i++)
	{
		if (list[i]==key)
		{
			return i;
		}
	}
	return -1;
}


int main(void)
{
	int key;
	int grade[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "Enter the key : ";
	cin >> key;
	cout << "Result : " << binary_search(grade, SIZE, key);

	return 0;
}
int binary_search(int list[], int n, int key)
{
	int low, high, middle;

	low = 0;
	high = n - 1;

	while (low<=high)
	{
		middle = (low + high) / 2;
		if (key == list[middle])
		{
			return middle;
		}
		else if (key>list[middle])
		{
			low = middle + 1;
		}
		else
		{
			high = middle - 1;
		}
	}
	return -1;
}
*/