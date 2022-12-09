#pragma once
#include "Printer.h"
#include <string>

using namespace std;

class LaserPrinter : public Printer {
	int availableToner;
public:
	LaserPrinter(string mo, string ma, int paper, int toner);
	void show() override;
	void print(int pages) override;
};

