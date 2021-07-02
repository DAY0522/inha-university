#include <iostream>
using namespace std;

#include "Novel.h"
#include "Biography.h"

int main()
{
    Book* NovelPtr = new Novel("The Alchemist");
    Book* BiographyPtr = new Biography("Paulo Coelho");

    NovelPtr->print();
    BiographyPtr->print();

    delete NovelPtr;
    delete BiographyPtr;

	return 0;
}