#include <iostream>

using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb);

int main() {
	int x[] = { 1, 2, 3, 4, 5 };
	int y[] = { 10, 20, 30 };

	int * i_array = concat(x, 5, y, 3);
	for (int i = 0; i < 8; i++)
		cout << i_array[i] << " ";
	cout << endl;

	char a[] = { 'h', 'e', 'l', 'l', 'o' };
	char b[] = { 'C', 'P', 'P'};

	char* c_array = concat(a, 5, b, 3);
	for (int i = 0; i < 8; i++)
		cout << c_array[i] << " ";
	cout << endl;

	delete[] i_array;
	delete[] c_array;
}

template<class T>
T* concat(T a[], int sizea, T b[], int sizeb){
	T* array = new T[sizea + sizeb];
	for (int i = 0; i < sizea + sizeb; i++) {
		if (i < sizea) array[i] = a[i];
		else array[i] = b[i - sizea];
	}
	return array;
}
