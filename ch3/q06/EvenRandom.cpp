#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

class EvenRandom {
public:
	EvenRandom();
	int next();
	int nextInRange(int start, int end);
};

EvenRandom::EvenRandom() {
	srand((unsigned)time(0));
}

int EvenRandom::next() {
	int tmp;
	while (true) {
		tmp = rand();
		if (tmp % 2 == 0) return tmp;
	}
	return -1;
}

int EvenRandom::nextInRange(int low, int high) {
	int range = (high - low) + 1;
	int tmp;
	while (true) {
		tmp = low + (rand() % (range));
		if (tmp % 2 == 0) return tmp;
	}
	return -1;
}

int main() {
	EvenRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "10 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}