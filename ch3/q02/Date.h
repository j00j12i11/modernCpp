#pragma once
#include <string>

using namespace std;
class Date {
public:
	int year, month, day;
	Date(int y, int m, int d);
	Date(string ymd);
	int show();
	int getYear();
	int getMonth();
	int getDay();

};

