#pragma once
#include <string>
#include "Printer.h"

using namespace std;

class InkPrinter : public Printer {
public:
	int availableInk;

	InkPrinter();
	InkPrinter(string modelName, string manufactuer, int paper, int availableInk);

	bool printInkJet(int pages);
	void showState();
};

