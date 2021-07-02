#include <iostream>
using namespace std;

#include "book.h"

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