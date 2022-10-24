#pragma once
#include <string>

using namespace std;

class Histogram{
	string str;
public:
	Histogram() {};
	Histogram(string str);
	void put(string str);
	void putc(char ch);
	void print();
};

