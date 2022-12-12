#include <map>
#include <iostream>

using namespace std;

int main() {
	map<string, string> who;

	cout << "***** 암호 관리 프로그램 WHO를 시작합니다 *****" << endl;

	int btn; string n, c;
	bool run = true;
	while (run) {
		cout << "삽입:1, 검사:2, 종료:3 >> ";
		cin >> btn;
		switch (btn) {
		case 1:
			cout << "이름과 암호>> ";
			cin >> n >> c;
			who.insert(make_pair(n, c));
			break;
		case 2:
			cout << "이름?";
			cin >> n;
			cout << "암호?";
			cin >> c;
			if (c == who[n]) cout << "통과!!" << endl;
			else cout << "실패~~" << endl;
			break;
		case 3:
			cout << "프로그램을 종료합니다..." << endl;
			run = false;
		}
	}
}