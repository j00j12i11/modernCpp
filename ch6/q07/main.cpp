#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};

int Random::nextInt(int min, int max){
	int result;
	while (true) {
		result = rand();
		if (result >= min && result <= max) {
			return result;
		}
	}
}

char Random::nextAlphabet(){
	while (true) {
		int r = nextInt(65, 122);
		if (r < 91 || r > 96){
			return r;
		}
	}
}

double Random::nextDouble(){
	return (double)rand() / 32767;
}

int main() {
	cout << "1���� 100���� ������ ���� 10���� ����մϴ�." << endl;
	for (int i = 0; i < 10; i++) { cout << Random::nextInt() << " "; }
	cout << endl << "���ĺ��� �����ϰ� 10���� ����մϴ�." << endl;
	for (int i = 0; i < 10; i++) { cout << Random::nextAlphabet() << " "; }
	cout << endl << "������ �Ǽ��� 10���� ����մϴ�." << endl;
	for (int i = 0; i < 10; i++) { cout << Random::nextDouble() << " "; }
}