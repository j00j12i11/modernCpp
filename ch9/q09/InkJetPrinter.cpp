#include "InkJetPrinter.h"
#include <string>
#include <iostream>

using namespace std;

InkJetPrinter::InkJetPrinter(string mo, string ma, int paper, int ink) :Printer(mo, ma) {
	availableCount = paper;
	availableInk = ink;
}

void InkJetPrinter::show(){
	cout << model << " ,";
	cout << manufacturer << " ,";
	cout << "남은 종이 " << availableCount << "장 ,";
	cout << "남은 잉크 " << availableInk;
}

void InkJetPrinter::print(int pages){
	if (availableCount < pages)
		cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
	else if (availableInk < pages)
		cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
	else {
		availableCount -= pages;
		availableInk -= pages;
		cout << "프린트하였습니다." << endl;
	}
}
