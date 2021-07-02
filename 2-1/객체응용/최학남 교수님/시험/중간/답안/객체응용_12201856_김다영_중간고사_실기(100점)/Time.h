#pragma once
// Time.h
#ifndef TIME_H
#define TIME_H
class Time {
public:
public:
	Time(int = 12, int = 0, int = 0);

	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);

	int getHour();
	int getMinute();
	int getSecond();
	void tick();
	void printUniversal();
	void printStandard();

	static int getCount();

private:
	int hour;
	int minute;
	int second;

	static int count;
};
#endif