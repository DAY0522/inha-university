#include "Book.h"
#include <iostream>
#include <iomanip>
using namespace std;


Book::Book(string b)
{
	setbook(b);
	cout << "Base Book - Constructor for " << getbook() << endl;
}

void Book::setbook(string b)
{
	book = b;
}

string Book::getbook()
{
	return book;
}

void Book::print() const
{
	cout << "Book" << endl;
}

Book::~Book()
{
	cout << "Base Book - Destructor for " << getbook() << endl;
}
