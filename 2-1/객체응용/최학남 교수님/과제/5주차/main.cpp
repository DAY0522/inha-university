#include <iostream>
using namespace std;

#include "Time.h" // Time 클래스를 이용하기 위해 헤더파일 include

int main()
{
	Time t(23, 58, 40); // Time class 객체 t 생성, 시 : 23, 분 : 58, 초 : 40으로 초기화
	int day = 1; // hour이 0이 됐을 때 날짜가 바뀜을 보여주기 위한 int형 변수 day 선언 및 1로 초기화

	for (int i = 0; i < 180; i++) // loop를 통해 tick 함수가 잘 작동되는지 확인
	{
		if (t.tick() == 1) // if문 내에서 t.tick()이 실행되면서 for loop 한 번 돌 때마다 1초씩 증가
		// t.tick()의 반환값이 1이면 day를 1 더해줘야함
		{
			day++; // 반환값이 1이면 hour이 0이 됐다는 것이므로 day에 1을 더해줌
		}
		cout << "Day-" << day << " : "; // day를 출력
		t.printStandard(); // Standard 시간으로 객체 t의 시:분:초(AM/PM)을 출력
	}

	return 0;
}