#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
using namespace std;

class Nation {
public:
	string nation;
	string capital;
	Nation(string nation = "", string capital = "") { this->nation = nation; this->capital = capital; }
	bool operator == (Nation n) {
		if (nation == n.nation && capital == n.capital)
			return true;
		else
			return false;
	}
};

int main() {
	vector<Nation> vec;
	vec.push_back(Nation("스페인", "마드리드"));
	vec.push_back(Nation("대한민국", "서울"));
	vec.push_back(Nation("미국", "워싱턴"));
	
	cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****" << endl;
	bool run = true;
	int btn; int idx;
	string a, b;
	while (run) {
		cout << "정보 입력: 1, 퀴즈:2, 종료:3 >> ";
		cin >> btn;
		switch (btn) {
		case 1:
			idx = vec.size();
			cout << "현재 " << idx << "개의 나라가 입력되어 있습니다." << endl;
			cout << "나라와 수도를 입력하세요(no no 이면 입력 끝)" << endl;
			while (true) {
				cout << ++idx << ">> ";
				cin >> a >> b;
				if (a == "no" && b == "no") break;
				Nation tmp(a, b);
				if (find(vec.begin(), vec.end(), tmp) == vec.end()) {
					vec.push_back(tmp);
				}
				else {
					cout << "already exists !!" << endl;
					idx--;
				}
			}
			break;
		case 2:
			while (true) {
				int idx = rand() % vec.size();
				Nation& q = vec[idx];
				cout << q.nation << "의 수도는?";
				cin >> a;
				if (a == "exit") break;
				else if (a == q.capital) cout << "Correct !!" << endl;
				else cout << "No !!" << endl;
			}
			
			break;
		case 3:
			run = false;
		}
	}
}