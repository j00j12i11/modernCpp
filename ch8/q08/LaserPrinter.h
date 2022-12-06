#pragma once
#include <string>
#include "Printer.h"

using namespace std;

class LaserPrinter : public Printer {
public:
	int availableToner;

	LaserPrinter();
	LaserPrinter(string modelName, string manufactuer, int paper, int availableToner);

	bool printLaser(int pages);
	void showState();
};

