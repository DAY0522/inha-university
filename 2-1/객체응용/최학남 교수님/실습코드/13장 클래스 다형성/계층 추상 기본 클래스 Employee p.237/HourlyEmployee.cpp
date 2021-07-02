#include <iostream>
using namespace std;

#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const string& first, const string& last, const string& ssn, double hourlywage, double hoursworked)
	:Employee(first, last, ssn) 
{
	setWage(hourlywage);
	setHours(hoursworked);
}

void HourlyEmployee::setWage(double hourlywage)
{
	wage = (hourlywage < 0.0) ? 0.0 : hourlywage;
}

double HourlyEmployee::getWage() const
{
	return wage;
}

void HourlyEmployee::setHours(double hoursworked)
{
	hours = ((hoursworked >= 0.0) && (hoursworked <= 1680.0)) ? hoursworked : 0.0;
}

double HourlyEmployee::getHours() const
{
	return hours;
}

double HourlyEmployee::earnings() const
{
	if (getHours() <= 40)
		return getWage() * getHours();
	else
		return 40 * getWage() + ((getHours() - 40) * getWage() * 1.5);
}

void HourlyEmployee::print() const
{
	cout << "hourly employee : ";
	Employee::print();
	cout << "\nhourly wage : " << getWage() <<
		"; hours worked : " << getHours();
}