#include <iostream>

using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize);

int main() {
	int x1[] = { 2, 5, 10, 15, 20, 10, 10 };
	int x2[] = { 2, 4, 5, 10 };

	int size;
	int* P_int = remove(x1, 7, x2, 4, size);
	for (int i = 0; i < size; i++) cout << P_int[i] << " ";
	cout << endl;

	char y1[] = { 'a', 'b', 'c', 'd', 'l' };
	char y2[] = { 'a', 'd', 'l' };

	char* P_char = remove(y1, 5, y2, 3, size);\
	for (int i = 0; i < size; i++) cout << P_char[i] << " ";
	cout << endl;


}

template<class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	retSize = sizeSrc;
	for (int i = 0; i < sizeSrc; i++) {
		for (int j = 0; j < sizeMinus; j++) {
			if (src[i] == minus[j]) {
				src[i] = NULL;
				retSize--;
			}
		}
	}
	T* p = new T[retSize];
	int idx = 0;
	for (int i = 0; i < sizeSrc; i++) {
		if (src[i] != NULL) {
			p[idx++] = src[i];
		}
			
	}

	return p;
}
