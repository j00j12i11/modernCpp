#include <iostream>

using namespace std;

int main() {

	int a, b;

	cout << "�� ���� �Է��϶�>>";
	cin >> a >> b;

	if (a > b) {
		cout << "ū �� = " << a << endl;
	}
	else if (a == b) {
		cout << "���� ���� �Է���" << endl;
	}
	else {
		cout << "ū �� = " << b << endl;
	}

	return 0;
}