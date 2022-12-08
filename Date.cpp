#if 1
#include<iostream>
#include "Date.h"
#include <Array>
#include <string>

Date::Date ()
	:_day(0),_month(0),_year(0)
{}

Date::Date(int day, int month, int year) :
	_day(day), _month(month), _year(year) {}

std::string Date::getStringDate()
{
	std::string Date = std::to_string(_day) + "/" + std::to_string(_month) + "/" + std::to_string(_year);
	return Date;
}

std::array <int,3> Date::getArrayDate()
{
	std::array < int, 3 > Date = { _day, _month , _year };
	return Date;
}

void Date::setDate( int day, int month, int year)
{
	_day = day;
	_month = month;
	_year = year;
}
#endif
