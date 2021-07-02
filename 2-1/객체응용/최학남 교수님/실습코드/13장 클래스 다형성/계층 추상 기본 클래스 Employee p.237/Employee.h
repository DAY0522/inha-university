#pragma once

#include <string>
using namespace std;

class Employee
{
public:
	Employee(const string&, const string&, const string&);

	void setFirstName(const string&);
	string getFistName() const;

	void setLastName(const string&);
	string getLastName() const;

	void setSocialSecurityNumber(const string&);
	string getSocialSecurityNumber() const;

	virtual double earnings() const = 0;
	virtual void print() const;

private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
};