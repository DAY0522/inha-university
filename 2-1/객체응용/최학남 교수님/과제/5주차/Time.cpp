#include <iostream>
#include<iomanip>
using namespace std;

#include "Time.h" // Time 클래스를 이용하기 위해 헤더파일 include

Time::Time(int h, int m, int s)
	:hour(h), minute(m), second(s){} // 멤버 이니셜라이저(:)를 이용해 멤버 변수 초기화

void Time::setTime(int h, int m, int s) // setTime 함수 정의
{
	setHour(h); // setHour 함수를 이용해 hour에 h 값을 할당
	setMinute(m); // setMinute 함수를 이용해 minute에 m 값을 할당
	setSecond(s); // setSecond 함수를 이용해 second에 s 값을 할당
}

void Time::setHour(int h) // setHour 함수 정의
{
	hour = (h >= 0 && h < 24) ? h : 0; // 유효성 검사 진행
	// '시'는 0시~23시까지 존재하므로 해당하는 값이 아니면 0으로 값을 할당
}

void Time::setMinute(int m) // setMinute 함수 정의
{
	minute = (m >= 0 && m < 60) ? m : 0; // 유효성 검사 진행
	// '분'은 0분~59분까지 존재하므로 해당하는 값이 아니면 0으로 값을 할당
}

void Time::setSecond(int s) // setSecond 함수 정의
{
	second = (s >= 0 && s < 60) ? s : 0; // 유효성 검사 진행
	// '초'는 0초~59초까지 존재하므로 존재하므로 해당하는 값이 아니면 0으로 값을 할당
}

int Time::getHour() const // getHour 함수 정의
{
	return hour; // 멤버변수 hour를 반환
}

int Time::getMinute() const // getMinute 함수 정의
{
	return minute; // 멤버변수 minute를 반환
}

int Time::getSecond() const // getSecond 함수 정의
{
	return second; // 멤버변수 second를 반환
}

void Time::printUniversal() // printUniversal 함수 정의
{

	cout << setfill('0') << setw(2) << hour << ":"
		<< setw(2) << minute << ":" << setw(2) << second << endl;
	// setfill을 이용하여 setw를 통해 할당된 출력 칸 수만큼 출력이 안 됐을 시 0으로 빈 칸을 채움
	// universal 시간이므로 00:00:00~23:59:59 형태로 시간을 출력
}

void Time::printStandard() // printStandard 함수 정의
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
		// Standard 시간은 0시~11시까지 표시되므로 0시이거나 12시이면 0시로, 아니면 12로 나눠 1부터 11까지의 시간을 반환해야한다.
		<< setfill('0') << setw(2) << minute << ":" << setw(2)
		<< second << (hour < 12 ? " AM" : " PM") << endl; // hour가 12보다 작으면 AM을, 크면 PM을 출력
	// setfill을 이용하여 setw를 통해 할당된 출력 칸 수만큼 출력이 안 됐을 시 0으로 빈 칸을 채움
	// Standard 시간이므로 0:00:00~11:59:59(AM/PM) 형태로 시간을 출력
}

int Time::tick() // tick 함수 정의
{
	setSecond(second+1); // tick 함수는 초를 1초 늘리는 함수이므로 원래 second 값에 1을 더한 값을 second에 값 재할당
	if (second == 0) // 만약에 second가 0이 되면 (59초->0초)가 되고 분이 1만큼 늘어나야 함
	{
		setMinute(minute+1); // 따라서 second가 0이 됐을 시 minute에 1을 더한 값을 minute에 다시 값할당
		if (minute == 0) // 만약 minute이 0이 되면 (59분->0분)이 되고 시간이 1만큼 늘어나야 함
		{
			setHour(hour+1); // 따라서 minute이 0이 됐을 시 hour에 1을 더한 값을 hour에 다시 값할당
			if (hour == 0) // hour에 1 더한 값이 0이라면 (23시->0시)가 되는 것이므로 날짜(day)가 하루 늘어나야 함
			{
				return 1; // main 함수에서 hour가 0이 됐을 시 day를 1 늘려주기 위해 1을 return 해줌
				// return 값이 1이면 day를 1 늘려주고, 0이면 그대로 나두면 됨
			}
		}
	}
	return 0; // return 값이 0이면 day를 늘리지 않아도 됨
}