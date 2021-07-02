#ifndef BOOK_H
#define BOOK_H
#include<iostream>
#include<string>
using namespace std;

class Book
{
private:
	string book;
public:
	Book(string);
	void setbook(string);
	string getbook();
	virtual void print() const;
	virtual ~Book();
};
#endif 