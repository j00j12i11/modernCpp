#include <iostream>

using namespace std;

class Statistics {
	int* array;
	int top;
public:
	Statistics() { array = new int[8]; top = 0; }
	~Statistics() { delete[] array; }
	bool operator !() { 
		if (top == 0) return false;
		else return true;
	}
	Statistics& operator << (int x) {
		*(array + top) = x;
		top++;
		return *this;
	}
	void operator >> (int* x) {
		for (int i = 0; i < top; i++, x++) {
			*x = array[i];
		}
	}
	void operator >> (int& x) {
		x = 0;
		for (int i = 0; i < top; i++) {
			x += array[i];
		}
		x /= top;
	}
	void operator ~ () {
		for (int i = 0; i < top; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};

int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이타가 없습니다." << endl;

	int x[5];
	cout << "5 개의 정수를 입력하라 >>";
	for (int i = 0; i < 5; i++) cin >> x[i];

	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg=" << avg << endl;
}