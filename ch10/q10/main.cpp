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
	vec.push_back(Nation("������", "���帮��"));
	vec.push_back(Nation("���ѹα�", "����"));
	vec.push_back(Nation("�̱�", "������"));
	
	cout << "***** ������ ���� ���߱� ������ �����մϴ�. *****" << endl;
	bool run = true;
	int btn; int idx;
	string a, b;
	while (run) {
		cout << "���� �Է�: 1, ����:2, ����:3 >> ";
		cin >> btn;
		switch (btn) {
		case 1:
			idx = vec.size();
			cout << "���� " << idx << "���� ���� �ԷµǾ� �ֽ��ϴ�." << endl;
			cout << "����� ������ �Է��ϼ���(no no �̸� �Է� ��)" << endl;
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
				cout << q.nation << "�� ������?";
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