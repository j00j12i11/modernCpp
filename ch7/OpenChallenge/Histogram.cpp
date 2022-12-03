#include "Histogram.h"
#include <string>
#include <iostream>

using namespace std;

Histogram::Histogram(string str) {
	this->str = str + "\n";
}

Histogram& Histogram::operator<<(string str)
{
	this->str += str;
	return *this;
}

Histogram& Histogram::operator<<(char ch)
{
	str += ch;
	return *this;
}

void Histogram::operator!(){
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
