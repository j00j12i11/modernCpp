#include <map>
#include <iostream>

using namespace std;

int main() {
	map<string, int> grade;

	cout << "***** �������� ���α׷� High Score�� �����մϴ� *****" << endl;

	int btn, x; string n;
	bool run = true;
	while (run) {
		cout << "�Է�:1, ��ȸ:2, ����:3 >> ";
		cin >> btn;
		switch (btn) {
		case 1:
			cout << "�̸��� ����>> ";
			cin >> n >> x;
			grade.insert(make_pair(n, x));
			break;
		case 2:
			cout << "�̸� >>";
			cin >> n;
			cout << n << "�� ������ " << grade[n] << endl;
			break;
		case 3:
			cout << "���α׷��� �����մϴ�..." << endl;
			run = false;
		}
	}
}