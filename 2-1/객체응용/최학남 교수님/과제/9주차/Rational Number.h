#pragma once
#ifndef RATIONAL_NUMBER_H
#define RATIONAL_NUMBER_H
class RationalNumber {
public:
	RationalNumber(int = 0, int = 1); // default constructor
	RationalNumber operator+(const RationalNumber&); // addition
	RationalNumber operator-(const RationalNumber&); // subtraction
	RationalNumber operator*(const RationalNumber&); // multiplication
	RationalNumber operator/(RationalNumber&); // division

	// relational operators
	bool operator>(const RationalNumber&) const;
	bool operator<(const RationalNumber&) const;
	bool operator>=(const RationalNumber&) const;
	bool operator<=(const RationalNumber&) const;
	// equality operators
	bool operator==(const RationalNumber&) const;
	bool operator!=(const RationalNumber&) const;
	void printRational() const; // display rational number
private:
	int numerator; // private variable numerator
	int denominator; // private variable denominator
	void reduction(); // function for fraction reduction
}; // end class RationalNumber
#endif
