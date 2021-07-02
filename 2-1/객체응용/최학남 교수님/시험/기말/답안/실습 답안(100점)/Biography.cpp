#include <iostream>
#include <iomanip>

using namespace std;

#include "Biography.h"

Biography::Biography(string Bio)
	: Book(Bio)
{
	cout << "Derived Biography - Constructor for " << getbook() << endl;
}

void Biography::print() const
{
	cout << "Biography" << endl;
}

Biography::~Biography()
{
	cout << "derived Biography - Destructor" << getbook() << endl;
}