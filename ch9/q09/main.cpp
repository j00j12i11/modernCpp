#include <iostream>
#include <string>
#include "InkJetPrinter.h"
#include "LaserPrinter.h"

using namespace std;

int main() {
	InkJetPrinter InkP("Officejet V40", "HP", 5, 10);
	LaserPrinter LaserP("SCX-6x45", "삼성전자", 3, 20);
	
	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" ;
	cout << endl << "잉크젯 : "; InkP.show();
	cout << endl << "레이저 : "; LaserP.show();

	int a, b; char YN;
	while (true) {
		cout << endl << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력 >> ";
		cin >> a >> b;
		switch (a) {
		case 1: InkP.print(b); break;
		case 2: LaserP.print(b); break;
		}

		cout << "계속 프린트 하시겠습니까(y/n) >>";
		cin >> YN;
		if (YN == 'n') break;
	}

	cout << endl << "잉크젯 : "; InkP.show();
	cout << endl << "레이저 : "; LaserP.show();
}