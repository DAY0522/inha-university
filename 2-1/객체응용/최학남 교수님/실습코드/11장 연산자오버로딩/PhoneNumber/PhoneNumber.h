#pragma once

#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
using namespace std;
#include <string>

class PhoneNumber
{
	friend ostream& operator<<(ostream&, const PhoneNumber&);
	friend istream& operator>>(istream&, PhoneNumber&);
private:
	string areaCode;
	string exchange;
	string line;
};

#endif // !PHONENUMBER_H
