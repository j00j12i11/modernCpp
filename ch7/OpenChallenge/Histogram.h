#pragma once
#include <string>

using namespace std;

class Histogram {
	string str;
public:
	Histogram() {};
	Histogram(string str);
	Histogram& operator << (string str);
	Histogram& operator << (char ch);
	void operator ! ();
};