#include <iostream>
#include <string>

using namespace std;

int main() {

	cout << "문자열들을 입력하라(100개 미만)." << endl;

	char str[100];
	cin.getline(str, 100);

	int count = 0;
	for (char& c : str) {
		if (c == 'x')
			count++;
	}
	cout << "x의 개수는 " << count << endl;

	return 0;
}