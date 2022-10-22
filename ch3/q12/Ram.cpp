#include "Ram.h"
#include <iostream>

using namespace std;

Ram::Ram() {
	for (auto& m : mem) m = 0;
}

Ram::~Ram(){
	cout << "�޸� ���ŵ�" << endl;
}

char Ram::read(int address){
	return mem[address];
}

void Ram::write(int address, char value){
	mem[address] = value;
}
