#include <iostream>

using namespace std;

int main() {
	cout.setf(ios_base::left);

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout << j << "x" << i << "=";
			cout.width(2);
			cout << i * j << "  ";
		}
		cout << endl;
	}

	return 0;
}