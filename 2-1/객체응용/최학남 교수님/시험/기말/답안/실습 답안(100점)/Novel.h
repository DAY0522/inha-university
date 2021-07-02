#ifndef NOVEL_H
#define NOVEL_H

#include<iostream>
using namespace std;

#include "Book.h"

class Novel : public Book
{
public:
	Novel(string);
	void print() const;
	~Novel();
};

#endif