#include <iostream>
#include <string>

using namespace std;

int main() {

	cout << "���ڿ����� �Է��϶�(100�� �̸�)." << endl;

	char str[100];
	cin.getline(str, 100);

	int count = 0;
	for (char& c : str) {
		if (c == 'x')
			count++;
	}
	cout << "x�� ������ " << count << endl;

	return 0;
}