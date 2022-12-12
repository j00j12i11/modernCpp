#include <iostream>

using namespace std;

template <class T>
T biggest(T array[], int len);

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	double y[] = { 0.1, 1.5, 6.6, 92.1, 0.001 };
	char z[] = { 'a', 'c', 'z', 'k', 'f' };

	cout << biggest(x, 5) << endl;
	cout << biggest(y, 5) << endl;
	cout << biggest(z, 5) << endl;
}

template <class T>
T biggest(T array[], int len) {
	T big = array[0];
	for (int i = 1; i < len; i++) {
		if (big < array[i]) big = array[i];
	}
	return big;
}