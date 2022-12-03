#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class UpAndDownGame {
	static int goal;
public:
	static void newGame();
	static int answer(int num);
};

int UpAndDownGame::goal = 0;

class Person {
	string name;
public:
	Person(string name) { this->name = name; }
	int turn() {
		int result;
		cout << name << ">>";
		cin >> result;
		return result;
	}
	void winner() {
		cout << name << "가 이겼습니다!";
	}
};

int main() {
	cout << "Up & Down 게임을 시작합니다." << endl;
	int low = 0;
	int high = 99;
	Person player[2] = { Person("김인수"), Person("오은경") };

	int tmp;
	UpAndDownGame::newGame();
	while (true) {
		for (int i = 0; i < 2; i++) {
			cout << "답은 " << low << "과 " << high << "사이에 있습니다." << endl;
			int num = player[i].turn();
			tmp = UpAndDownGame::answer(num);
			if (tmp == 0) {
				player[i].winner(); break;
			}
			else if (tmp > 0 && low < num) low = num;
			else if (tmp < 0 && high > num) high = num;
		}
		if (tmp == 0) break;
	}
}

void UpAndDownGame::newGame(){
	srand((unsigned)time(0));
	int n = rand();
	goal = n % 100;
}

int UpAndDownGame::answer(int num){
	return goal - num;
}
