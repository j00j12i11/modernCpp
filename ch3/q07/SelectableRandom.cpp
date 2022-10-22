#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

class SelectableRandom {
public:
	SelectableRandom(bool even);
	bool isEven;
	int next();
	int nextInRange(int start, int end);
};

SelectableRandom::SelectableRandom(bool even) {
	srand((unsigned)time(0));
	isEven = even;
}

int SelectableRandom::next() {
	int tmp;
	while (true) {
		tmp = rand();
		if ((tmp % 2 == 0)) {
			if (isEven) return tmp;
		}
		else {
			if (!isEven) return tmp;
		}
	}
	return -1;
}

int SelectableRandom::nextInRange(int low, int high) {
	int range = (high - low) + 1;
	int tmp;
	while (true) {
		tmp = low + (rand() % (range));
		if ((tmp % 2 == 0)) {
			if (isEven) return tmp;
		}
		else {
			if (!isEven) return tmp;
		}
	}
	return -1;
}

int main() {
	SelectableRandom e(true);
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = e.next();
		cout << n << ' ';
	}
	SelectableRandom o(false);
	cout << endl << endl << "-- 2���� " << "9 ������ Ȧ�� ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = o.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}