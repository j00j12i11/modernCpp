#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cout << "���ڿ� �Է�>> ";
	getline(cin, str);
	int count = 0;
	
	// 1�� ���
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'a') count++;
	}
	cout << "���� a�� " << count << "�� �ֽ��ϴ�." << endl;

	// 2�� ���
	int index = 0; count = 0;
	while (true) {
		index = str.find('a', index);
		if (index == -1) { break; }
		else {  count++; }
	}

	cout << "���� a�� " << count << "�� �ֽ��ϴ�." << endl;
}