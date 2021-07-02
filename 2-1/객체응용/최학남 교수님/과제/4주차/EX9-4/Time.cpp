#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include "Time.h"

Time::Time()
{
	time_t currentTime = time(0);
	tm* localTime = localtime(&currentTime);
	setTime(localTime->tm_hour, localTime->tm_min, localTime->tm_sec);
}

void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h)
{
	hour = (h >= 0 && h < 24) ? h : 0;
}

void Time::setMinute(int m)
{
	minute = (m >= 0 && m < 60) ? m : 0;
}

void Time::setSecond(int s)
{
	second = (s >= 0 && s < 60) ? s : 0;
}

int Time::getHour()
{
	return hour;
}

int Time::getMinute()
{
	return minute;
}

int Time::getSecond()
{
	return second;
}

void Time::printUniversal()
{

	cout << setfill('0') << setw(2) << hour << ":"
		<< setw(2) << minute << ":" << setw(2) << second;
}

void Time::printStandard()
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
		<< setfill('0') << setw(2) << minute << ":" << setw(2)
		<< second << (hour < 12 ? " AM" : " PM"); // hour가 12보다 작으면 AM을, 크면 PM을 출력
}