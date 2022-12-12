#include <iostream>

using namespace std;

template <class T>
bool equalArrays(T ary1[], T ary2[], int len);

int main() {
	int x1[] = { 1, 10, 100, 5, 4 };
	int x2[] = { 1, 10, 100, 5, 4 };
	double y1[] = { 0.1, 1.5, 6.6, 92.1, 0.001 };
	double y2[] = { 0.1, 1.5, 6.6, 92.1, 0.001 };
	char z1[] = { 'a', 'c', 'z', 'k', 'f' };
	char z2[] = { 'a', 'c', 'z', 'k', 'D' };

	if (equalArrays(x1, x2, 5)) cout << "x 배열들은 같다" << endl;
	else cout << "x 배열들은 다르다" << endl;

	if (equalArrays(y1, y2, 5)) cout << "y 배열들은 같다" << endl;
	else cout << "y 배열들은 다르다" << endl;

	if (equalArrays(z1, z2, 5)) cout << "z 배열들은 같다" << endl;
	else cout << "z 배열들은 다르다" << endl;
}

template<class T>
bool equalArrays(T ary1[], T ary2[], int len){
	for (int i = 0; i < len; i++) {
		if (ary1[i] != ary2[i]) return false;
	}
	return true;
}
