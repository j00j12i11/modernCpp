#include "Game.h"
#include <iostream>

Game::Game(int size){
	this->size = size;
	p = new Player[size];

	string n;
	for (int i = 0; i < size; i++) {
		cout << "참가자의 입력을 입력하세요. 빈칸없이 >>";
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
	string pre = "아버지";
	cout << "시작하는 단어는 아버지입니다.";

	int n = 0;
	string cur;
	while (true) {
		cout << p[n % size].getName() << ">>";
		cin >> cur;
		if (pre.at(pre.size() - 2) == cur.at(0) && pre.at(pre.size() - 1) == cur.at(1)) {
			pre = cur; n++;
		}
		else {
			cout << p[n % size].getName() << "의 패배";
			break;
		}
	}

}
