#include <iostream>

using namespace std;

template <class T>
bool search(T element, T array[], int len);

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	double y[] = { 0.1, 1.5, 6.6, 92.1, 0.001 };
	char z[] = { 'a', 'c', 'z', 'k', 'f' };

	if (search(100, x, 5)) cout << "100�� �迭 x�� ���ԵǾ� �ִ�" << endl;
	else cout << "100�� �迭 x�� ���ԵǾ� ���� �ʴ�" << endl;

	if (search(92.1, y, 5)) cout << "92.1�� �迭 y�� ���ԵǾ� �ִ�" << endl;
	else cout << "92.1�� �迭 y�� ���ԵǾ� ���� �ʴ�" << endl;

	if (search('s', z, 5)) cout << "'s'�� �迭 z�� ���ԵǾ� �ִ�" << endl;
	else cout << "'s'�� �迭 z�� ���ԵǾ� ���� �ʴ�" << endl;
}

template<class T>
bool search(T element, T array[], int len) {
	for (int i = 0; i < len; i++) {
		if (array[i] == element) return true;
	}
	return false;
}
