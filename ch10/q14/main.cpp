#include <map>
#include <iostream>

using namespace std;

int main() {
	map<string, string> who;

	cout << "***** ��ȣ ���� ���α׷� WHO�� �����մϴ� *****" << endl;

	int btn; string n, c;
	bool run = true;
	while (run) {
		cout << "����:1, �˻�:2, ����:3 >> ";
		cin >> btn;
		switch (btn) {
		case 1:
			cout << "�̸��� ��ȣ>> ";
			cin >> n >> c;
			who.insert(make_pair(n, c));
			break;
		case 2:
			cout << "�̸�?";
			cin >> n;
			cout << "��ȣ?";
			cin >> c;
			if (c == who[n]) cout << "���!!" << endl;
			else cout << "����~~" << endl;
			break;
		case 3:
			cout << "���α׷��� �����մϴ�..." << endl;
			run = false;
		}
	}
}