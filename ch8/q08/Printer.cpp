#include "Printer.h"

Printer::Printer() :Printer("EMPTY_NAME", "EMPTY_MANUF", 0) { }

Printer::Printer(string modelName, string manufactuer, int paper) {
	this->modelName = modelName;
	this->manufactuer = manufactuer;
	availableCount = paper;
	printedCount = 0;
}

bool Printer::print(int pages)
{
	if (availableCount >= pages) {
		printedCount += pages;
		availableCount -= pages;
		return true;
	}
	else
		return false;
}
