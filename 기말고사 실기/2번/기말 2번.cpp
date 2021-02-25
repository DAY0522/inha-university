#include<iostream>
#include<stdlib.h>
#pragma warning(disable:4996)
using namespace std;

int main(void)
{
	FILE* fp = NULL;

	int number, count = 0;
	double total_k = 0.0, total_e = 0.0, total_m = 0.0;

	int num;
	char name[20];
	int Korean;
	int English;
	int Math;

	fopen_s(&fp, "student003.txt", "r");

	if (fp == NULL)
	{
		cout << "error!" << endl;
		exit(1);
	}


	while (1)
	{
		fscanf(fp, "%d %s %d %d %d", &num, name, &Korean, &English, &Math);
		total_k += Korean;
		total_e += English;
		total_m += Math;
		if (feof(fp) != 0)
		{
			break;
		}

		count++;
	}

	float aver_k = float(total_k) / float(count);
	float aver_e = float(total_e) / float(count);
	float aver_m = float(total_m) / float(count);

	cout << aver_k << endl;
	cout << aver_e << endl;
	cout << aver_m << endl;

	fclose(fp);


	FILE* fp2 = NULL;
	fopen_s(&fp2, "evaluation.txt", "w");

	if (fp2 == NULL)
	{
		cout << "error!" << endl;
		exit(1);
	}


	fprintf(fp2, "%f %f %f", aver_k, aver_e, aver_m);

	fclose(fp2);

	return 0;
}