#include<iostream>
using namespace std;
#define SIZE 7
void square_array(int a[], int size);
void print_array(int a[], int size);
void square_element(int e);

int main()
{
	int list[SIZE] = { 1,2,3,4,5,6,7 };

	print_array(list, SIZE);
	square_array(list, SIZE);
	// 각 배열의 요소들이 제곱됨
	print_array(list, SIZE); 
	// 제곱된 배열값들이 출력됨

	cout << "list[6] : " << list[6] << endl;
	square_element(list[6]);
	cout << "list[6] : " << list[6] << endl;
	return 0;
}

void square_array(int a[], int size)
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		a[i] *= a[i];
	}
}

void print_array(int a[], int size)
{
	int i;

	for (i = 0; i < SIZE; i++)
	{
		cout.width(5);
		cout.fill(' ');
		cout << a[i];
	}
	cout << endl;
}

void square_element(int e)
{
	e *= e;
}


/*
EX 1
int main()
{
	int grade[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		grade[i] = 0;
	}
	cout << "===========================" << endl;
	cout << "      INDEX     VALUE      " << endl;
	cout << "===========================" << endl;

	for (i = 0; i < 10; i++)
	{
		cout << "	" << i << "	  " << grade[i] << endl;
	}
	return 0;
}



EX 2
int main()
{
	int grade[10] = { 31,64,1,2,3,4,5,55,71,100 };
	int i;

	cout << "===========================" << endl;
	cout << "      INDEX     VALUE      " << endl;
	cout << "===========================" << endl;

	for (i = 0; i < 10; i++)
	{
		cout << "	" << i << "	  " << grade[i] << endl;
	}
	return 0;
}


EX 3
int main()
{
	int grade[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++)
	{
		cout << "Enter the scores: ";
		cin >> grade[i];
	}

	for (i = 0; i < STUDENTS; i++)
	{
		cout << i << "th : " << grade[i] << endl;
		sum += grade[i];
	}

	average = sum / STUDENTS;
	cout << "average score = " << average << endl;

	return 0;
}


EX 5
int main()
{
	int array[SIZE] = { 1,2,3,4,5 };
	int i;

	for (i = 0; i <= SIZE; i++)
	{
		cout << "array[" << i << "] : " << array[i] << endl;
	}
	// size보다 큰 값을 출력하려고 하면 쓰레기 값이 출력됨

	return 0;
}


EX 6
int main()
{
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE];
	int i;

	for (i = 0; i <= SIZE; i++)
	{
		b[i] = a[i];
	}

	for (i = 0; i < SIZE; i++)
	{
		cout << "b[" << i << "] : " << b[i] << endl;
	}

	return 0;
}


EX 7
int main()
{
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = { 1,2,3,4,5 };
	int i;

	//cout << a << "  " << b << endl;
	//if (a==b)
	//{
	//	// else로 넘어감. 이렇게 배열이 같은 지를 확인 할 수 없음
	//	cout << "wrong results" << endl;
	//}
	//else
	//{
	//	cout << "wrong results" << endl;
	//}

	for (i = 0; i < SIZE; i++)
	{
		if (a[i] != b[i])
		{
			cout << "a[]!=b[]" << endl;
			return 0;
		}
	}
	cout << "a[]=b[]" << endl;

	return 0;
}


EX 8
int main()
{
	int grade[] = { 1,2,3,4,5,6 };
	int i, size;

	size = sizeof(grade) / sizeof(grade[0]);
	cout << "sizeof(grade) : " << sizeof(grade) << ", sizeof(grade[0]) : " << sizeof(grade[0]) << endl;
	cout << "size : " << size << endl;

	for (i = 0; i < size; i++)
	{
		cout << grade[i] << endl;
	}
	return 0;
}


EX 9
int main()
{
	int grade[SIZE];
	int i, min;

	for (i = 0; i < SIZE; i++)
	{
		cout << "Enter the scores : ";
		cin >> grade[i];
	}

	min = grade[0];
	for (i = 0; i < SIZE; i++)
	{
		if (grade[i]<min)
		{
			min = grade[i];
		}
	}
	cout << "Minimum value is " << min << endl;

	return 0;
}
*/