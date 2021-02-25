#include<iostream> 
using namespace std; 
int N = 1000; 
int cal_sum(); 
int main(void) { 
	int sum; 
	sum = cal_sum(); 
	{ 
		int k; 
		k = 9; 
		cout << "k = " << k << endl; 
	} 
	cout << "sum of first " << N << " naural numbers is " << sum << endl; 
	return 0;
} 

int cal_sum() { 
	int i, s = 0; 
	for (i = 0; i <= N; i++) 
	{
		s = s + i; 
	}
	return s; 
} 