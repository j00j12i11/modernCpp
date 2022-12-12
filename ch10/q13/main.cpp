#include <map>
#include <iostream>

using namespace std;

int main() {
	map<string, int> grade;

	cout << "***** 점수관리 프로그램 High Score을 시작합니다 *****" << endl;

	int btn, x; string n;
	bool run = true;
	while (run) {
		cout << "입력:1, 조회:2, 종료:3 >> ";
		cin >> btn;
		switch (btn) {
		case 1:
			cout << "이름과 점수>> ";
			cin >> n >> x;
			grade.insert(make_pair(n, x));
			break;
		case 2:
			cout << "이름 >>";
			cin >> n;
			cout << n << "의 점수는 " << grade[n] << endl;
			break;
		case 3:
			cout << "프로그램을 종료합니다..." << endl;
			run = false;
		}
	}
}