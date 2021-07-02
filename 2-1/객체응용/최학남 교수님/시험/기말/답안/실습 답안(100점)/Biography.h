#ifndef BIOGRAPHY_H
#define BIOGRAPHY_H

#include<iostream>
using namespace std;

#include "Book.h"

class Biography : public Book
{
public:
	Biography(string);
	void print() const;
	~Biography();
};

#endif