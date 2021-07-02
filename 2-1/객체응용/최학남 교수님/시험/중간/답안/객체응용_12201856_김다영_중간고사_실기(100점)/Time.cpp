#include <iostream>
#include <iomanip>
using namespace std;
#include "Time.h"

int Time::count = 0;

Time::Time(int hr, int min, int sec)
{
	setTime(hr, min, sec);
	count++;
}

void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
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
	cout << setfill('0') << setw(2) << getHour() << ":"
		<< setw(2) << getMinute() << ":" << setw(2) << getSecond();
}

void Time::printStandard()
{
	cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
		<< ":" << setfill('0') << setw(2) << getMinute()
		<< ":" << setw(2) << getSecond() << (hour < 12 ? "AM" : "PM");
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


void Time::tick()
{
	setSecond(second + 1);
	if (second == 0)
	{
		setMinute(minute + 1);
		if (minute == 0)
		{
			setHour(hour + 1);
		}
	}
}

int Time::getCount()
{
	return count;
}