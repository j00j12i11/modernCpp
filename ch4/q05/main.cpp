#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	string input;
	srand((unsigned)time(0));
	while (true) {
		cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)\n>>";
		getline(cin, input);
		
		if (input == "exit") break;

		int n = rand() % input.size();
		input[n] += 6;

		cout << input << endl;
		
	}
}