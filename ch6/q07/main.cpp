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
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다." << endl;
	for (int i = 0; i < 10; i++) { cout << Random::nextInt() << " "; }
	cout << endl << "알파벳을 랜덤하게 10개를 출력합니다." << endl;
	for (int i = 0; i < 10; i++) { cout << Random::nextAlphabet() << " "; }
	cout << endl << "랜덤한 실수를 10개를 출력합니다." << endl;
	for (int i = 0; i < 10; i++) { cout << Random::nextDouble() << " "; }
}