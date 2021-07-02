#pragma once
#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include <string>
using namespace std;

class CommissionEmployee
{
public:
	CommissionEmployee(const string&, double = 0.0);
	~CommissionEmployee();

	void setFirstName(const string&);
	string getFirstName() const;

	void setGrossSales(double);
	double getGrossSales() const;

	void print() const;
private:
	string firstName;
	double grossSales;
};

#endif