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
	cout << "���� ���� " << availableCount << "�� ,";
	cout << "���� ��ũ " << availableToner;
}

void LaserPrinter::print(int pages) {
	if (availableCount < pages)
		cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	else if (availableToner < pages)
		cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	else {
		availableCount -= pages;
		availableToner -= pages;
		cout << "����Ʈ�Ͽ����ϴ�." << endl;
	}
}
