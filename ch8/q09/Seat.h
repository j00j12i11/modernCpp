#pragma once
#include <string>

using namespace std;

class Seat{
	bool RSVD;
	string name;
public:
	Seat() { RSVD = false; name = ""; }
	bool isReserved() { return RSVD; }
	void Reserve(string name) { this->name = name; RSVD = true; }
	string getName() { return name; }
	void cancel() { this->name = ""; RSVD = false; }
};

