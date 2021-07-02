#include<iostream>
using std::cout;
using std::endl;

#include<iomanip>
using std::setfill;
using std::setw;

#ifndef TIME_H
#define TIME_H

class Time
{
public:
	Time();
	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);
	int getHour();
	int getMinute();
	int getSecond();

	void printUniversal();
	void printStandard();

private:
	int hour;
	int minute;
	int second;
};

#endif