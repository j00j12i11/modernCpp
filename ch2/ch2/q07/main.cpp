#include <iostream>

using namespace std;

int main() {
	char str[10];

	while (true) {
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(str, 10);
		if (strcmp(str, "yes") == 0) {
			cout << "�����մϴ�..." << endl;
			break;
		}
	}
	return 0;
}