#include<stdio.h>

int main(void)
{
	char Grade = 65;
	short Weight = 78;
	int Salary = 2000000;
	long Distance1 = 149600000;
	unsigned int Price_of_apt = 2200000000;
	float Height = 178.9;
	float Distance2 = 2e+19;
	double Distance3 = 3e+123;

	printf("Grade : %c\n", Grade);
	printf("Weight : %dkg\n", Weight);
	printf("Salary : %d¿ø\n", Salary);
	printf("Distance1 : %ldkm\n", Distance1);
	printf("Price_of_apt : %u¿ø\n", Price_of_apt);
	printf("Height : %.1fcm\n", Height);
	printf("Distance2 : %1.ekm\n", Distance2);
	printf("Distance3 : %1.ekm\n", Distance3);

	return 0;
}