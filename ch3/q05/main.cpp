#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
public:
	Random();
	int next();
	int nextInRange(int start, int end);
};

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << " ";
	}
	
	cout << endl << endl << " -- 2���� 4������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << " ";
	}
	cout << endl;
}

Random::Random(){
	srand((unsigned)time(0));
}

int Random::next(){
	return rand();
}

int Random::nextInRange(int start, int end){
	int range = end - start + 1;
	return rand() % range + start;
}
