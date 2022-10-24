#include "GamblingGame.h"
#include <iostream>

GamblingGame::GamblingGame(){
	string input;
	cout << "ù��° ���� �̸� >> ";
	cin >> input;
	a.setName(input);
	cout << "�ι�° ���� �̸� >> ";
	cin >> input;
	b.setName(input);
}

void GamblingGame::playGame(){
	srand((unsigned)time(0));
	while (true) {
		cout << a.getName() << ": <Enter>" << endl;
		if (play()) {
			cout << a.getName() << "�� �¸�!!" << endl;
			break;
		}
		else {
			cout << "�ƽ�����!" << endl;
		}

		cout << b.getName() << ": <Enter>" << endl;

		if (play()) {
			cout << b.getName() << "�� �¸�!!" << endl;
			break;
		}
		else {
			cout << "�ƽ�����!" << endl;
		}
	}
}

bool GamblingGame::play(){
	int a, b, c;

	a = rand() % 3;
	b = rand() % 3;
	c = rand() % 3;

	cout << "\t\t" << a << "\t" << b << "\t" << c << "\t";

	if (a == b && b == c) {
		return true;
	}
	else {
		return false;
	}
}
