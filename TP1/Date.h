#pragma once
#include <iostream>
#include <array>

class Date
{
private:
	int _year;
	int _month;
	int _day;

public:
	Date(int day, int month, int year);
	Date();

	void setDate(int day, int month, int year);
	std::array <int,3> getArrayDate();
	std::string getStringDate();
};

