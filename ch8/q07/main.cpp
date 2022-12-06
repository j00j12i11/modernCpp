#include <iostream>

using namespace std;

class BaseMemory {
	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
	void w(int index, char val) { *(mem + index) = val; }
	char r(int index) { return *(mem + index); }
};

class ROM : public BaseMemory {
public:
	ROM(int size, char* initialMem, int initialSize);
	char read(int index) { return r(index); }
};

class RAM : public BaseMemory {
public:
	RAM(int size = 0);
	char read(int index) { return r(index); }
	void write(int index, char val) { w(index, val); }
};

int main() {
	char x[5] = { 'h', 'e', 'l','l','o' };
	ROM biosROM(1024 * 10, x, 5);
	RAM mainMemory(1024 * 1024);

	for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
}

ROM::ROM(int size, char* initialMem, int initialSize):BaseMemory(size){
	for (int i = 0; i < initialSize; i++) {
		w(i, *(initialMem + i));
	}
}

RAM::RAM(int size):BaseMemory(size){ }
