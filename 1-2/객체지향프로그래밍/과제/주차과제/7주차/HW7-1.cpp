#include<iostream> // iostream 헤더파일을 include
using namespace std; // 표준 네임페이스를 사용
int N = 1000; // int형 변수 N을 전역변수로 선언 후 1000으로 초기화
int cal_sum(); // 0~N까지 합을 반환하는 함수 프로토타입 선언

int main(void) { // 메인함수 정의
	int sum; //int형 변수 sum을 지역변수로 선언
	sum = cal_sum(); // sum에 cal_sum의 반환값을 대입
	{ // 괄호 열기
		int k; //int형 변수 k를 지역변수로 선언
		k = 9; // k를 9로 초기화
		cout << "k = " << k << endl; // k를 출력 후 출바꿈
	} //괄호 닫기
	cout << "sum of first " << N << " naural numbers is " << sum << endl; // N과 sum을 출력한 후 줄바꿈
	return 0; // 0을 반환
} // 괄호 닫기

int cal_sum() { // int형(반환o) 함수 cal_sum 정의
	int i, s = 0; // int형 변수 i, s를 지역변수로 선언 후 s를 =으로 초기화
	for (i = 0; i <= N; i++) //i가 0부터 N보다 작거나 같을 때까지 i++을 하면서 for문 작성
	{ // 괄호 열기
		s = s + i; // s에 i를 더한 값을 s에 대입
	} // 괄호 닫기
	return s; // for문을 통한 최종적인 s값 출력
} // 괄호 닫기