#pragma once
#include<iostream>
#include<string>
using namespace std;
class Date {
	unsigned short day : 5;
	unsigned short month : 4;
	short year;

public:
	void SetDates(unsigned short day, unsigned short month, short year);

	void SetDay(unsigned short day);
	unsigned short GetDay() const;

	void SetMonth(unsigned short month);
	unsigned short GetMonth() const;

	void SetYear(short year);
	short GetYear() const;
		
	operator string()
	{
		return to_string(GetDay()) + "/" + to_string(GetMonth()) + "/" + to_string(GetYear());
	}
};