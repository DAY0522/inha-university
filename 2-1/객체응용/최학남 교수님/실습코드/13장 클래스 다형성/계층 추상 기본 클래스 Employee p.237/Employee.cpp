#include<iostream>
using namespace std;

#include "Employee.h"

Employee::Employee(const string& first, const string& last, const string& ssn)
	:firstName(first), lastName(last), socialSecurityNumber(ssn)
{
}

void Employee::setFirstName(const string& first)
{
	firstName = first;
}

string Employee::getFistName() const
{
	return firstName;
}

void Employee::setLastName(const string& last)
{
	lastName = last;
}

string Employee::getLastName() const
{
	return lastName;
}

void Employee::setSocialSecurityNumber(const string& ssn)
{
	socialSecurityNumber = ssn;
}

string Employee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}

void Employee::print() const
{
	cout << getFistName() << ' ' << getLastName()
		<< "\nsocial security number : " << getSocialSecurityNumber();
}