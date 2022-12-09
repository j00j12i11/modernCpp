#pragma once
#include <string>;

using namespace std;

class Printer{
protected:
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public:
	Printer(string mo, string ma) { model = mo; manufacturer = ma; }
	virtual void show() = 0;
	virtual void print(int pages) = 0;
};

