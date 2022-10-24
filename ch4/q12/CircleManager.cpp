#include "CircleManager.h"
#include <iostream>

CircleManager::CircleManager(int size){
	this->size = size;
	p = new Circle[size];

	string n; int r;
	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> n >> r;
		p[i].setCircle(n, r);
	}
}

CircleManager::~CircleManager(){
	delete[] p;
}

void CircleManager::searchByName(){
	string n;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> n;

	for (int i = 0; i < size; i++) {
		if (n.compare(p[i].getName()) == 0)
			cout << n << "의 면적은 " << p[i].getArea() << endl;
	}
}

void CircleManager::searchByArea(){
	int n;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> n;
	cout << n << "보다 큰 원을 검색합니다." << endl;

	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > n)
		cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
	}
	cout << endl;
}
