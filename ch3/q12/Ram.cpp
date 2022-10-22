#include "Ram.h"
#include <iostream>

using namespace std;

Ram::Ram() {
	for (auto& m : mem) m = 0;
}

Ram::~Ram(){
	cout << "메모리 제거됨" << endl;
}

char Ram::read(int address){
	return mem[address];
}

void Ram::write(int address, char value){
	mem[address] = value;
}
