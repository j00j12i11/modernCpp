#include <iostream>
#include <string>
#include "InkJetPrinter.h"
#include "LaserPrinter.h"

using namespace std;

int main() {
	InkJetPrinter InkP("Officejet V40", "HP", 5, 10);
	LaserPrinter LaserP("SCX-6x45", "�Ｚ����", 3, 20);
	
	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" ;
	cout << endl << "��ũ�� : "; InkP.show();
	cout << endl << "������ : "; LaserP.show();

	int a, b; char YN;
	while (true) {
		cout << endl << endl << "������(1:��ũ��, 2:������)�� �ż� �Է� >> ";
		cin >> a >> b;
		switch (a) {
		case 1: InkP.print(b); break;
		case 2: LaserP.print(b); break;
		}

		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n) >>";
		cin >> YN;
		if (YN == 'n') break;
	}

	cout << endl << "��ũ�� : "; InkP.show();
	cout << endl << "������ : "; LaserP.show();
}