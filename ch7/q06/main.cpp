#include <iostream>

using namespace std;

class Matrix {
	int m[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) { m[0] = a; m[1] = b; m[2] = c; m[3] = d; }
	void show() {
		cout << "{ " << m[0] << " " << m[1] << " " << m[2] << " " << m[3] << " }" << endl;
	}
	Matrix operator + (Matrix matirx) {
		return Matrix(m[0] + matirx.m[0], m[1] + matirx.m[1], m[2] + matirx.m[2], m[3] + matirx.m[3]);
	}
	Matrix& operator += (Matrix matrix) {
		m[0] += matrix.m[0];
		m[1] += matrix.m[1];
		m[2] += matrix.m[2];
		m[3] += matrix.m[3];

		return *this;
	}
	bool operator == (Matrix matrix) {
		for (int i = 0; i < 4; i++) {
			if (m[i] != matrix.m[i])
				return false;
		}
		return true;
	}
};

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c) {
		cout << "a and c are the same" << endl;
	}
}