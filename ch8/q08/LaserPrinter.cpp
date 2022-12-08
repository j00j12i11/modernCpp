#include "LaserPrinter.h"
#include <iostream>
using namespace std;

LaserPrinter::LaserPrinter() :Printer() {
	availableToner = 0;
}

LaserPrinter::LaserPrinter(string modelName, string manufactuer, int paper, int availableToner)
	:Printer(modelName, manufactuer, paper) {
	this->availableToner = availableToner;
}

bool LaserPrinter::printLaser(int pages) {
	if (availableToner >= pages && print(pages)) {
		availableToner -= pages;
		return true;
	}
	else
		return false;
}

void LaserPrinter::showState() {
	cout << modelName << " | " << manufactuer << " | " << "���� ���� " << availableCount << "�� | ���� ��ũ " << availableToner << endl;
}
