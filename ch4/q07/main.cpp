#include <iostream>
#include "Circle.h"

using namespace std;

int main() {
	Circle p[3];
	int r;
	int count=0;

	for (int i = 0; i < 3; i++) {
		cout << "�� " << i+1 << "�� ������ >> ";
		cin >> r;
		p[i].setRadius(r);
		if (p[i].getArea() > 100) count++;
	}

	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << endl;

}