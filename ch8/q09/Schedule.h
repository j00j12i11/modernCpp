#pragma once
#include "Seat.h"
#include <string>

class Schedule{
	string label;
	Seat* s;
public:
	Schedule(string label) {this->label = label; s = new Seat[8]; }
	~Schedule() { delete[] s; }
	void reservation(int s_num, string name);
	void cancel(int s_num, string name);
	void show();
	string getLabel();
};

