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
		cout << name << "�� �̰���ϴ�!";
	}
};

int main() {
	cout << "Up & Down ������ �����մϴ�." << endl;
	int low = 0;
	int high = 99;
	Person player[2] = { Person("���μ�"), Person("������") };

	int tmp;
	UpAndDownGame::newGame();
	while (true) {
		for (int i = 0; i < 2; i++) {
			cout << "���� " << low << "�� " << high << "���̿� �ֽ��ϴ�." << endl;
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
