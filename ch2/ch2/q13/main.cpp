#include <iostream>

using namespace std;

int main() {
	int num, people;
	char menu[3][100] = { "«��", "¥��", "������" };
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;
	
	while (true) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>>  ";
		cin >> num;
		if (num == 4) break;
		else if (num == 1 || num == 2 || num == 3) {
			cout << "���κ�?";
			cin >> people;

			cout << menu[num-1] << " " << people << "�κ� ���Խ��ϴ�." << endl;
		}
		else {
			cout << "�ٽ� �ֹ��ϼ���!!" << endl;
		}
	}
	cout << "���� ������ �������ϴ�" << endl;

	return 0;
}