#include "InkPrinter.h"
#include <iostream>
using namespace std;

InkPrinter::InkPrinter() :Printer() {
	availableInk = 0;
}

InkPrinter::InkPrinter(string modelName, string manufactuer, int paper, int availableInk)
	:Printer(modelName, manufactuer, paper) {
	this->availableInk = availableInk;
}

bool InkPrinter::printInkJet(int pages) {
	if (availableInk >= pages && print(pages)) {
		availableInk -= pages;
		return true;
	}
	else
		return false;
}

void InkPrinter::showState() {
	cout << modelName << " | " << manufactuer << " | " << "남은 종이 " << availableCount << "장 | 남은 잉크 " << availableInk << endl;
}


