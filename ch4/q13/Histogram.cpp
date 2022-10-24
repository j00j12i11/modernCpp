#include "Histogram.h"
#include <string>
#include <iostream>

using namespace std;

Histogram::Histogram(string str){
	this->str = str + "\n";
}

void Histogram::put(string str){
	this->str += str;
}

void Histogram::putc(char ch){
	str += ch;
}

void Histogram::print(){
	cout << str << endl << endl;

	int nums[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int total = 0;

	for (auto& s : str) {
		if (isalpha(s)) {
			total += 1;
			char ch = tolower(s);
			nums[ch - 97] += 1;
		}
	}

	cout << "ÃÑ ¾ËÆÄºª ¼ö" << total << endl << endl;

	for (int i = 0; i < 26; i++) {
		cout << char(i + 97) << " (" << nums[i] << ") -> ";
		for (int j = 0; j < nums[i]; j++) cout << "*";
		cout << endl;
	}
}
