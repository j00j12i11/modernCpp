#include <iostream>

using namespace std;

int main() {
	int total = 0;
	
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;

	char menu[100]; int num;
	while (total <= 20000) {
		cout << "�ֹ�>>";
		cin >> menu >> num;
		
		if (strcmp(menu, "����������") == 0) {
			num *= 2000;
			cout << num << "���Դϴ�. ���ְ� �弼��" << endl;
			total += num;
		}
		else if (strcmp(menu, "�Ƹ޸�ī��") == 0) {
			num *= 2300;
			cout << num << "���Դϴ�. ���ְ� �弼��" << endl;
			total += num;
		}
		else if (strcmp(menu, "īǪġ��") == 0) {
			num *= 2500;
			cout << num << "���Դϴ�. ���ְ� �弼��" << endl;
			total += num;
		}
		else {
			cout << "�ٽ� �Է����ּ���." << endl;
		}
	}

	cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���Ϻ���~~~";

	return 0;
}