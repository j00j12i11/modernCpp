#include "Printer.h"
#include "InkPrinter.h"
#include "LaserPrinter.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	Printer* p[2];
	p[0] = new InkPrinter("OfficeJet V40", "HP", 5, 10);
	p[1] = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);

	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : "; ((InkPrinter*)p[0])->showState();
	cout << "������ : "; ((LaserPrinter*)p[1])->showState();

	int menu, pages;
	bool success;
	char yn;
	while (true) {
		cout << "\n������(1:��ũ��, 2:������)�� �ż� �Է�>>";
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
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
		else
			cout << "����Ʈ�� �� �����ϴ�." << endl;

		((InkPrinter*)p[0])->showState();
		((LaserPrinter*)p[1])->showState();

		cout << "��� ����Ʈ �Ͻðڽ��ϱ�?(y/n)>>";
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