#include "Printer.h"
#include "InkPrinter.h"
#include "LaserPrinter.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	Printer* p[2];
	p[0] = new InkPrinter("OfficeJet V40", "HP", 5, 10);
	p[1] = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);

	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : "; ((InkPrinter*)p[0])->showState();
	cout << "레이저 : "; ((LaserPrinter*)p[1])->showState();

	int menu, pages;
	bool success;
	char yn;
	while (true) {
		cout << "\n프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> menu >> pages;
		switch (menu) {
		case 1:
			success = ((InkPrinter*)p[0])->printInkJet(pages);
			break;
		case 2:
			success = ((LaserPrinter*)p[1])->printLaser(pages);
			break;
		defalt:
			success = false;
		}

		if (success)
			cout << "프린트하였습니다." << endl;
		else
			cout << "프린트할 수 없습니다." << endl;

		((InkPrinter*)p[0])->showState();
		((LaserPrinter*)p[1])->showState();

		cout << "계속 프린트 하시겠습니까?(y/n)>>";
		cin >> yn;
		if (yn == 'y')
			continue;
		else if (yn == 'n')
			break;
	}

	delete p[0];
	delete p[1];

	return 0;
}