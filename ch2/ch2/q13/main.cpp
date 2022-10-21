#include <iostream>

using namespace std;

int main() {
	int num, people;
	char menu[3][100] = { "짬뽕", "짜장", "군만두" };
	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;
	
	while (true) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>  ";
		cin >> num;
		if (num == 4) break;
		else if (num == 1 || num == 2 || num == 3) {
			cout << "몇인분?";
			cin >> people;

			cout << menu[num-1] << " " << people << "인분 나왔습니다." << endl;
		}
		else {
			cout << "다시 주문하세요!!" << endl;
		}
	}
	cout << "오늘 영업은 끝났습니다" << endl;

	return 0;
}