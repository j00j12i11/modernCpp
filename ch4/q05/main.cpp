#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	string input;
	srand((unsigned)time(0));
	while (true) {
		cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)\n>>";
		getline(cin, input);
		
		if (input == "exit") break;

		int n = rand() % input.size();
		input[n] += 6;

		cout << input << endl;
		
	}
}