#include <iostream>

using namespace std;

template <class T>
bool search(T element, T array[], int len);

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	double y[] = { 0.1, 1.5, 6.6, 92.1, 0.001 };
	char z[] = { 'a', 'c', 'z', 'k', 'f' };

	if (search(100, x, 5)) cout << "100이 배열 x에 포함되어 있다" << endl;
	else cout << "100이 배열 x에 포함되어 있지 않다" << endl;

	if (search(92.1, y, 5)) cout << "92.1이 배열 y에 포함되어 있다" << endl;
	else cout << "92.1이 배열 y에 포함되어 있지 않다" << endl;

	if (search('s', z, 5)) cout << "'s'이 배열 z에 포함되어 있다" << endl;
	else cout << "'s'이 배열 z에 포함되어 있지 않다" << endl;
}

template<class T>
bool search(T element, T array[], int len) {
	for (int i = 0; i < len; i++) {
		if (array[i] == element) return true;
	}
	return false;
}
