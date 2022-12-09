#include "LaserPrinter.h"
#include <string>
#include <iostream>

using namespace std;

LaserPrinter::LaserPrinter(string mo, string ma, int paper, int toner) :Printer(mo, ma) {
	availableCount = paper;
	availableToner = toner;
}

void LaserPrinter::show() {
	cout << model << " ,";
	cout << manufacturer << " ,";
	cout << "남은 종이 " << availableCount << "장 ,";
	cout << "남은 잉크 " << availableToner;
}

void LaserPrinter::print(int pages) {
	if (availableCount < pages)
		cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
	else if (availableToner < pages)
		cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
	else {
		availableCount -= pages;
		availableToner -= pages;
		cout << "프린트하였습니다." << endl;
	}
}
