#include <iostream>

using namespace std;

int main() {

	int a, b;

	cout << "두 수를 입력하라>>";
	cin >> a >> b;

	if (a > b) {
		cout << "큰 수 = " << a << endl;
	}
	else if (a == b) {
		cout << "같은 수를 입력함" << endl;
	}
	else {
		cout << "큰 수 = " << b << endl;
	}

	return 0;
}