#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	while (true) {
		cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)\n>>";
		getline(cin, input);

		if (input == "exit") break;

		for (int i = input.size() - 1; i >= 0; i--) {
			cout << input[i];
		}
		cout << endl;

	}
}