#include <iostream>
#include <string>

using namespace std;

int main() {

	string a, b;
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> a;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> b;

	if (a == b)
		cout << "�����ϴ�." << endl;
	else
		cout << "���� �ʽ��ϴ�." << endl;

	return 0;
}