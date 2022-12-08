#include "AirlineBook.h"
#include "Console.h"
#include <iostream>
#include <string>

using namespace std;
AirlineBook::AirlineBook(){
	sch = new Schedule[3]{ Schedule("07��"),  Schedule("12��"),  Schedule("17��") };
}

AirlineBook::~AirlineBook(){
	delete[] sch;
}

bool AirlineBook::run(){
	cout << "***** �Ѽ��װ��� ���� ���� ȯ���մϴ� *****" << endl;
	int btn; string str;
	while (true) {
		cout << endl << "����:1, ���:2, ����:3, ������:4>> "; Console::input(btn);
		switch (btn) {
		case 1:
			makeReserve(); break;
		case 2:
			cancelReserve(); break;
		case 3:
			showReserve(); break;
		case 4:
			cout << "���� �ý����� �����մϴ�." << endl; return true;
		}
	}
}

void AirlineBook::makeReserve(){
	int btn;
	for (int i = 0; i < 3; i++) {
		cout << (sch + i)->getLabel() << ":" << i+1 << " ";
	}
	cout << ">> "; Console::input(btn);
	
	(sch + btn-1)->show();
	int seatnum; string name;
	cout << "�¼� ��ȣ>> "; Console::input(seatnum);
	cout << "�̸� �Է�>> "; Console::input(name);
	(sch + btn-1)->reservation(seatnum, name);
}

void AirlineBook::cancelReserve(){
	int btn;
	for (int i = 0; i < 3; i++) {
		cout << (sch + i)->getLabel() << ":" << i+1 << " ";
	}
	cout << ">> "; Console::input(btn);
	(sch + btn-1)->show();
	int seatnum; string name;
	cout << "�¼� ��ȣ>> "; Console::input(seatnum);
	cout << "�̸� �Է�>> "; Console::input(name);
	(sch + btn-1)->cancel(seatnum, name);
}

void AirlineBook::showReserve(){
	for (int i = 0; i < 3; i++) {
		(sch + i)->show();
	}
}
