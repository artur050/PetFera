#ifndef _Date_HPP_
#define _Date_HPP_

#include <iostream>
using namespace std;

class Date {
protected:
	int year_;
	int month_;
	int day_;

public:
	Date();
	Date(const int& d, const int& m, const int& y);

	bool valid(void) const;

	int day() const;
	int month() const;
	int year() const;

	void set_day(const int& day);
	void set_month(const int& month);
	void set_year(const int& year);

	Date operator ++(); //prefix
	Date operator ++(int); //postfix
	Date operator --(); //prefix
	Date operator --(int); //postfix
	int operator -(Date);
};

bool operator ==(const Date&, const Date&); // comparison operators
bool operator !=(const Date&, const Date&); 
bool operator <(const Date&, const Date&); 
bool operator >(const Date&, const Date&); 
bool operator <=(const Date&, const Date&); 
bool operator >=(const Date&, const Date&); 

ostream& operator <<(ostream& os, const Date& d);

#endif