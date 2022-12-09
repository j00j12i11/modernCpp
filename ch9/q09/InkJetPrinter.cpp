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
	cout << "���� ���� " << availableCount << "�� ,";
	cout << "���� ��ũ " << availableInk;
}

void InkJetPrinter::print(int pages){
	if (availableCount < pages)
		cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	else if (availableInk < pages)
		cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	else {
		availableCount -= pages;
		availableInk -= pages;
		cout << "����Ʈ�Ͽ����ϴ�." << endl;
	}
}
