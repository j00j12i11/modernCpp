#include "Date.h"
#include <string>
#include <iostream>
using namespace std;

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

Date::Date(string ymd) {
	year = stoi(ymd.substr(0, 4));
	month = stoi(ymd.substr(5, 1));
	day = stoi(ymd.substr(7));
}

int Date::show()
{
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
	return 0;
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}
