#include <iostream>
#include <iomanip>

using namespace std;

#include "Novel.h"

Novel::Novel(string novel)
	: Book(novel)
{
	setbook(novel);
	cout << "Derived Novel - Constructor for " << getbook() << endl;
}

void Novel::print() const
{
	cout << "Novel" << endl;
}

Novel::~Novel()
{
	cout << "derived Novel - Destructor " << getbook() << endl;
}