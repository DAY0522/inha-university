#include<iostream>
using namespace std;

#define SIZE 20

void show_arr(int arr[][20], int a, int b);
int row_sum(int arr[][20], int row);
int col_sum(int arr[][20], int col);
int dia_sum(int arr[][20]);
int bdia_sum(int arr[][20]);
int max_i(int a, int b, int* max_i, int i);

int main()
{
	int arr[SIZE][SIZE];
	int num;

	//1,2
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			arr[i][j] = rand() % 100;
			show_arr(arr, i, j);
		}
		cout << endl;
	}
	cout << endl;


	//3
	cin >> num;
	cout << "row " << num << " : " << row_sum(arr, num) << endl;
	cout << endl;


	//4
	cin >> num;
	cout << "col " << num << " : " << col_sum(arr, num) << endl;
	cout << endl;


	//5
	cout << "diagonal sum : " << dia_sum(arr) << endl;
	cout << endl;


	//6
	cout << "backward diagonal sum : " << bdia_sum(arr) << endl;
	cout << endl;


	//7
	int row_max = 0;
	int ri = 0;
	cin >> num;
	for (int i = 0; i < SIZE; i++)
	{
		row_max = max_i(arr[num][i], row_max, &ri, i);
	}
	cout << "row max " << num << " : " << row_max << endl;
	cout << endl;

	//8
	int col_max = 0;
	int ci = 0;
	cin >> num;
	for (int i = 0; i < SIZE; i++)
	{
		col_max = max_i(arr[i][num], col_max, &ci, i);
	}
	cout << "col max " << num << " : " << col_max << endl;
	cout << endl;

	//9
	int max_row = 0;
	int max_ri = 0;
	for (int i = 0; i < SIZE; i++)
	{
		max_row = max_i(row_sum(arr, i), max_row, &max_ri, i);
	}
	cout << "max row number :" << max_ri << endl;
	cout << "max row sum : " << max_row << endl;
	cout << endl;
	

	//10
	int max_col = 0;
	int max_ci = 0;
	for (int i = 0; i < SIZE; i++)
	{
		max_col = max_i(col_sum(arr, i), max_col, &max_ci, i);
	}
	cout << "max col number :" << max_ci << endl;
	cout << "max col sum : " << max_col << endl;


	return 0;
}


void show_arr(int arr[][20], int a, int b)
{
	cout.width(4);
	cout.fill(' ');
	cout << arr[a][b];
}

int row_sum(int arr[][20], int row)
{
	int sum_row = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum_row += arr[row][i];
	}
	return sum_row;
}

int col_sum(int arr[][20], int col)
{
	int sum_col = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum_col += arr[i][col];
	}
	return sum_col;
}

int dia_sum(int arr[][20])
{
	int sum_dia = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum_dia += arr[i][i];
	}
	return sum_dia;
}

int bdia_sum(int arr[][20])
{
	int sum_bdia = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum_bdia += arr[i][(SIZE-1)-i];
	}
	return sum_bdia;
}

int max_i(int a, int b, int* max_i, int i)
{
	if (a > b)
	{
		*max_i = i;
		return a;
	}
	else
		return b;
}