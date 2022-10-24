#include <iostream>

using namespace std;

bool bigger(int a, int b, int& big) {
	if (a > b) {
		big = a; return false;
	}
	else if (b > a) {
		big = b; return false;
	}
	else {
		big = a; return true;
	}

}

int main() {
	int big = 0;
	cout << "a = 4, b = 9" << endl;
	cout << "bigger = " << bigger(4, 9, big) << " big: " << big << endl;

	cout << "a = 5, b = 5" << endl;
	cout << "bigger = " << bigger(5, 5, big) << " big: " << big << endl;
}