#include "AirlineBook.h"
#include "Console.h"
#include <iostream>
#include <string>

using namespace std;
AirlineBook::AirlineBook(){
	sch = new Schedule[3]{ Schedule("07시"),  Schedule("12시"),  Schedule("17시") };
}

AirlineBook::~AirlineBook(){
	delete[] sch;
}

bool AirlineBook::run(){
	cout << "***** 한성항공에 오신 것을 환영합니다 *****" << endl;
	int btn; string str;
	while (true) {
		cout << endl << "예약:1, 취소:2, 보기:3, 끝내기:4>> "; Console::input(btn);
		switch (btn) {
		case 1:
			makeReserve(); break;
		case 2:
			cancelReserve(); break;
		case 3:
			showReserve(); break;
		case 4:
			cout << "예약 시스템을 종료합니다." << endl; return true;
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
	cout << "좌석 번호>> "; Console::input(seatnum);
	cout << "이름 입력>> "; Console::input(name);
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
	cout << "좌석 번호>> "; Console::input(seatnum);
	cout << "이름 입력>> "; Console::input(name);
	(sch + btn-1)->cancel(seatnum, name);
}

void AirlineBook::showReserve(){
	for (int i = 0; i < 3; i++) {
		(sch + i)->show();
	}
}
