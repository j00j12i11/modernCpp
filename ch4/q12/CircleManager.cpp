#include "CircleManager.h"
#include <iostream>

CircleManager::CircleManager(int size){
	this->size = size;
	p = new Circle[size];

	string n; int r;
	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> n >> r;
		p[i].setCircle(n, r);
	}
}

CircleManager::~CircleManager(){
	delete[] p;
}

void CircleManager::searchByName(){
	string n;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> n;

	for (int i = 0; i < size; i++) {
		if (n.compare(p[i].getName()) == 0)
			cout << n << "�� ������ " << p[i].getArea() << endl;
	}
}

void CircleManager::searchByArea(){
	int n;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> n;
	cout << n << "���� ū ���� �˻��մϴ�." << endl;

	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > n)
		cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
	}
	cout << endl;
}
