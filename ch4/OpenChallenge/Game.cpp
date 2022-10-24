#include "Game.h"
#include <iostream>

Game::Game(int size){
	this->size = size;
	p = new Player[size];

	string n;
	for (int i = 0; i < size; i++) {
		cout << "�������� �Է��� �Է��ϼ���. ��ĭ���� >>";
		cin >> n;
		p[i].setName(n);
	}
}

Game::~Game()
{
	delete[] p;
}

void Game::play()
{
	string pre = "�ƹ���";
	cout << "�����ϴ� �ܾ�� �ƹ����Դϴ�.";

	int n = 0;
	string cur;
	while (true) {
		cout << p[n % size].getName() << ">>";
		cin >> cur;
		if (pre.at(pre.size() - 2) == cur.at(0) && pre.at(pre.size() - 1) == cur.at(1)) {
			pre = cur; n++;
		}
		else {
			cout << p[n % size].getName() << "�� �й�";
			break;
		}
	}

}
