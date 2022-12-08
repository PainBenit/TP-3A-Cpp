#if 1
#include<iostream>
#include "Date.h"

Date::Date(int day, int month, int year) :
	_day(day), _month(month), _year(year) {}

Date::getStringDate()
{
	std::string Date = to_string(_day) + "/" + to_string(_month) + "/" + to_string(_year);
	return Date
}

Date::getArrayDate()
{
	std::array<int, 3> Date = {_day, _month , _year};
	return Date
}
#endif
