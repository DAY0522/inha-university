#include<iostream>

#ifndef TIME_H // #ifndef-#endif를 통해 Time class의 다중 정의를 방지
#define TIME_H

class Time {  // Time class 정의
public: // 멤버 함수를 public으로 정의
	Time(int = 0, int = 0, int = 0); // 생성자 프로토타입 선언, 디폴트 인자를 이용해 아무런 값이 입력되지 않았을 시 0으로 초기화
	void setTime(int, int, int); // hour, minute, second에 값을 재할당하는 setTime 함수 프로토타입 선언
	void setHour(int); // hour에 값을 재할당하는 setHour 함수 프로토타입 선언
	void setMinute(int); // minute에 값을 재할당하는 setMinute 함수 프로토타입 선언
	void setSecond(int); // second에 값을 재할당하는 setSecond 함수 프로토타입 선언
	int getHour() const; // hour의 값을 반환하는 getHour 함수 프로토타입 선언
	int getMinute() const; // minute의 값을 반환하는 getMinute 함수 프로토타입 선언
	int getSecond() const; // secpnd의 값을 반환하는 getSecond 함수 프로토타입 선언
	void printUniversal(); // Universal로 시간을 print하는 printUniversal 함수 선언
	void printStandard(); // Standard로 시간을 print하는 printStandard 함수 선언
	int tick(); // 함수 호출 시 초를 1초씩 늘리는 tick 함수 프로토타입 선언

private: // 멤버 변수를 private으로 정의
	int hour; // '시'를 나타내는 int형 변수 hour 선언
	int minute; // '분'을 나타내는 int형 변수 minute 선언
	int second; // '초'를 나타내는 int형 변수 second 선언
};

#endif