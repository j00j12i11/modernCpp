#include "GamblingGame.h"
#include <iostream>

GamblingGame::GamblingGame(){
	string input;
	cout << "첫번째 선수 이름 >> ";
	cin >> input;
	a.setName(input);
	cout << "두번째 선수 이름 >> ";
	cin >> input;
	b.setName(input);
}

void GamblingGame::playGame(){
	srand((unsigned)time(0));
	while (true) {
		cout << a.getName() << ": <Enter>" << endl;
		if (play()) {
			cout << a.getName() << "님 승리!!" << endl;
			break;
		}
		else {
			cout << "아쉽군요!" << endl;
		}

		cout << b.getName() << ": <Enter>" << endl;

		if (play()) {
			cout << b.getName() << "님 승리!!" << endl;
			break;
		}
		else {
			cout << "아쉽군요!" << endl;
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
