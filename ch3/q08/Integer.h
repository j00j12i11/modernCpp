#pragma once
#include <string>
using namespace std;

class Integer {
public:
	int num;
	Integer(int n) :num(n) { }
	Integer(string str) { num = stoi(str); }
	int get() { return num; }
	void set(int i) { num = i; }
	int isEven() { return num % 2 == 0 ? 1 : 0; }
};

