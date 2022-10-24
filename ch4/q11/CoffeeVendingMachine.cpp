#include "CoffeeVendingMachine.h"
#include <iostream>\

using namespace std;

void CoffeeVendingMachine::fill() {
	for (auto& t : tong)
		t.fill(10);
}

void CoffeeVendingMachine::selectEspresso() {
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 1) {
		tong[0].consume(1);
		tong[1].consume(1);
		cout << "���������� �弼��" << endl;
	}
	else {
		cout << "���ᰡ �����մϴ�." << endl;
	}
}

void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2) {
		tong[0].consume(1);
		tong[1].consume(2);
		cout << "�Ƹ޸�ī�� �弼��" << endl;
	}
	else {
		cout << "���ᰡ �����մϴ�." << endl;
	}
}

void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 1) {
		tong[0].consume(1);
		tong[1].consume(2);
		tong[2].consume(1);
		cout << "����Ŀ�� �弼��" << endl;
	}
	else {
		cout << "���ᰡ �����մϴ�." << endl;
	}
}

void CoffeeVendingMachine::show() {
	cout << "Ŀ�� " << tong[0].getSize() << ",�� " << tong[1].getSize() << ",���� " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::run() {
	int btn;
	cout << " ***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;
	while (true) {
		cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���) >> ";
		cin >> btn;

		switch (btn) {
		case 1: selectEspresso(); break;
		case 2: selectAmericano(); break;
		case 3: selectSugarCoffee(); break;
		case 4: show(); break;
		case 5: fill(); break;
		default:
			cout << "�ٽ� �Է��ϼ���." << endl;
			break;
		}
	}
}