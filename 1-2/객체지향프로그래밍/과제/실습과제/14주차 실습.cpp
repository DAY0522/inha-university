#include<iostream>
using namespace std;
#pragma warning(disable:4996)

//calloc은 0으로 초기화 시켜줌

struct Book
{
	int number;
	char title[100]; // title이 10이면 error 발생
	//why? 입력받은 제목보다 배열 공간이 적음
};

int main(void)
{
	FILE* fp;
	char fname[100];
	int number, count = 0;
	char name[20];
	float score, total = 0.0;

	//파일 이름 입력 받기
	cout << "Enter the score file name : ";
	cin >> fname;

	// 파일 열기
	fopen_s(&fp, fname, "w"); // 쓰기 모드로 파일을 엶

	if (fp == NULL)
	{
		fprintf(stderr, "can not open the  %s file.\n", fname); // stderr는 오류를 뜻함
		exit(1);
	}

	// 학번, 이름, 점수 저장
	while (1)
	{
		cout << "Enter the number, name, score : ";
		cin >> number;
		if (number < 0)
		{
			break;
		}

		cin >> name >> score;
		fprintf(fp, "%d %s %f\n", number, name, score);
	}

	fclose(fp);


	//파일을 읽기 모드로 열기
	fopen_s(&fp, fname, "r");

	if (fp == NULL)
	{
		fprintf(stderr, "can not open the  %s file.\n", fname);
		cout << "Can not open the" << fname << " file" << endl;
		exit(1);
	}

	// 점수 읽기 + 평균 점수 계산

	while (1)
	{
		fscanf(fp, "%d %s %f", &number, name, &score);
		//fscanf_s(fp, "%d %s %f", &number, name, &score);
		// name은 배열이여서 &를 안 붙임

		if (feof(fp)!=0)
		{
			break;
		}
		cout << "number : " << number << ", name : " << name << ", score : " << score << endl;
		total += score;
		count++;
	}
	cout << "Average - " << (total / count) << endl;
	fclose(fp);

	return 0;
}

/*
//EX1
int main(void)
{
	char* pc = NULL;
	pc = (char*)malloc(sizeof(char)); // 동적할당
	// char*은 형변환

	if (pc == NULL) // 메모리 공간 할당이 되지 않았을 때 에러 발생 문구 출력
	{
		cout << "Memory allocation Error" << endl;
		exit(1);
	}

	*pc = 'm';
	cout << "*pc : " << *pc << endl;
	free(pc); //메모리 할당 해제

	return 0;
}


//EX2
int main(void)
{
	char* pc = NULL;
	int i = 0;
	pc = (char*)malloc(100*sizeof(char));


	if (pc == NULL)
	{
		cout << "Memory allocation Error" << endl;
		exit(1);
	}

	for (i = 0; i < 26; i++)
	{
		*(pc + i) = 'a' + i;
	}
	*(pc + i) = 0;
	cout << "pc : " << pc << endl;
	free(pc);

	return 0;
}

//EX3
int main(void)
{
	int* pi;
	pi = (int*)malloc(5 * sizeof(int));
	// 캐스팅을 해주지 않으면 void*로 할당되는듯? 그래서 int* 해주는 듯

	if (pi == NULL)
	{
		cout << "Memory allocation Error" << endl;
		exit(1);
	}

	pi[0] = 100;
	pi[1] = 200;
	pi[2] = 300;
	pi[3] = 400;
	pi[4] = 500;

	for (int i = 0; i < 5; i++)
	{
		cout << "pc[" << i << "] : " << pi[i] << endl;
	}

	return 0;
}


//EX4
struct Book
{
	int number;
	char title[100]; // title이 10이면 error 발생
	//why? 입력받은 제목보다 배열 공간이 적음
};

int main(void)
{
	struct Book* p;

	p = (struct Book*)malloc(2 * sizeof(struct Book));

	if (p == NULL)
	{
		cout << "Memory allocation Error" << endl;
		exit(1);
	}

	p->number = 1;
	strcpy_s(p->title, "C/C++ programming");

	(p + 1)->number = 2;
	strcpy_s((p+1)->title, "Data Structure");

	cout << "p->number : " << p->number << endl;
	cout << "p->title : " << p->title << endl;

	cout << "(p+1)->number : " << (p+1)->number << endl;
	cout << "(p+1)->title : " << (p+1)->title << endl;

	free(p);

	return 0;
}


//EX5
int main(void)
{
	FILE* fp = NULL;

	// fp = fopen("sample.txt", "w"); 원래는 이건데 error 발생함
	fopen_s(&fp, "sample.txt", "w");

	if (fp == NULL) // 할당이 안 됐으면
	{
		cout << "failed" << endl;
	}
	else
	{
		cout << "success!" << endl;
	}
	fprintf(fp, "hello");

	fclose(fp);

	return 0;
}


//EX6
int main(void)
{
	FILE* fp;
	char fname[100];
	int number, count = 0;
	char name[20];
	float score, total = 0.0;

	//파일 이름 입력 받기
	cout << "Enter the score file name : ";
	cin >> fname;

	// 파일 열기
	fopen_s(&fp, fname, "w"); // 쓰기 모드로 파일을 엶

	if (fp == NULL)
	{
		fprintf(stderr, "can not open the  %s file.\n", fname); // stderr는 오류를 뜻함
		exit(1);
	}

	// 학번, 이름, 점수 저장
	while (1)
	{
		cout << "Enter the number, name, score : ";
		cin >> number;
		if (number < 0)
		{
			break;
		}

		cin >> name >> score;
		fprintf(fp, "%d %s %f\n", number, name, score);
	}

	fclose(fp);


	//파일을 읽기 모드로 열기
	fopen_s(&fp, fname, "r");

	if (fp == NULL)
	{
		fprintf(stderr, "can not open the  %s file.\n", fname);
		cout << "Can not open the" << fname << " file" << endl;
		exit(1);
	}

	// 점수 읽기 + 평균 점수 계산

	while (1)
	{
		fscanf(fp, "%d %s %f", &number, name, &score);
		//fscanf_s(fp, "%d %s %f", &number, name, &score);
		// name은 배열이여서 &를 안 붙임

		if (feof(fp)!=0)
		{
			break;
		}
		cout << "number : " << number << ", name : " << name << ", score : " << score << endl;
		total += score;
		count++;
	}
	cout << "Average - " << (total / count) << endl;
	fclose(fp);

	return 0;
}
*/