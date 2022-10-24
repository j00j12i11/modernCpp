#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cout << "문자열 입력>> ";
	getline(cin, str);
	int count = 0;
	
	// 1번 방식
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'a') count++;
	}
	cout << "문자 a는 " << count << "개 있습니다." << endl;

	// 2번 방식
	int index = 0; count = 0;
	while (true) {
		index = str.find('a', index);
		if (index == -1) { break; }
		else {  count++; }
	}

	cout << "문자 a는 " << count << "개 있습니다." << endl;
}