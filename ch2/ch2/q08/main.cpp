#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "5���� �̸��� ';'�� �����Ͽ� �Է��ϼ���" << endl;
	cout << ">>";

	char name[5][100];

	for (int i = 0; i < 5; i++) {
		cin.getline(name[i], 100, ';');

	}
	int idx = 0; int length = 0;
	for (int i = 0; i < 5; i++) {
		cout << i+1 << " : " << name[i] << endl;
		int temp = strlen(name[i]);
		if (length < temp) idx = i;
	}

	cout << "���� �� �̸��� " << name[idx] << endl;

	return 0;
}