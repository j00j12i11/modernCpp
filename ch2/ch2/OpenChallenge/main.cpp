#include <iostream>
#include <string>

using namespace std;

int main() {

	string a, b;
	
	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���." << endl;
	
	cout << "�ι̿� >> ";
	cin >> a;

	cout << "�ٸ��� >> ";
	cin >> b;

	if (a == "����") {
		if (b == "����")
			cout << "�����ϴ�" << endl;
		else if (b == "����")
			cout << "�ٸ����� �̰���ϴ�" << endl;
		else
			cout << "�ι̿��� �̰���ϴ�" << endl;
	}
	else if (a == "����") {
		if (b == "����")
			cout << "�����ϴ�" << endl;
		else if (b == "��")
			cout << "�ٸ����� �̰���ϴ�" << endl;
		else
			cout << "�ι̿��� �̰���ϴ�" << endl;
	}
	else {
		if (b == "��")
			cout << "�����ϴ�" << endl;
		else if (b == "����")
			cout << "�ٸ����� �̰���ϴ�" << endl;
		else
			cout << "�ι̿��� �̰���ϴ�" << endl;
	}

	return 0;
}