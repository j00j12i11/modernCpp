#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	while (true) {
		cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)\n>>";
		getline(cin, input);

		if (input == "exit") break;

		for (int i = input.size() - 1; i >= 0; i--) {
			cout << input[i];
		}
		cout << endl;

	}
}