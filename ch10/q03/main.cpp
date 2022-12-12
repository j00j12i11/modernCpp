#include <iostream>

using namespace std;

template <class T>
void reverseArray(T ary[], int len);

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	double y[] = { 0.1, 1.5, 6.6, 92.1, 0.001 };
	char z[] = { 'a', 'c', 'z', 'k', 'f' };

	cout << "x 원본: ";
	for (int i = 0; i < 5; i++) cout << x[i] << " "; cout << endl;
	reverseArray(x, 5);
	cout << "x 반전: ";
	for (int i = 0; i < 5; i++) cout << x[i] << " "; cout << endl;

	cout << "y 원본: ";
	for (int i = 0; i < 5; i++) cout << y[i] << " "; cout << endl;
	reverseArray(y, 5);
	cout << "y 반전: ";
	for (int i = 0; i < 5; i++) cout << y[i] << " "; cout << endl;

	cout << "z 원본: ";
	for (int i = 0; i < 5; i++) cout << z[i] << " "; cout << endl;
	reverseArray(z, 5);
	cout << "z 반전: ";
	for (int i = 0; i < 5; i++) cout << z[i] << " "; cout << endl;
}

template<class T>
void reverseArray(T ary[], int len) {
	T tmp;
	for (int i = 0; i < len/2; i++) {
		tmp = ary[i];
		ary[i] = ary[len - i - 1];
		ary[len - i - 1] = tmp;
	}
}
