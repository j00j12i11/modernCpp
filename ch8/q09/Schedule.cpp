#include "Schedule.h"
#include "Console.h"
#include <iostream>
#include <string>

using namespace std;

void Schedule::reservation(int s_num, string name) {
	s_num--;
	if (s[s_num].isReserved()) {
		cout << "이미 예약된 곳임." << endl;
	} else {
		s[s_num].Reserve(name);
	}
	
}

void Schedule::cancel(int s_num, string name){
	s_num--;
	if (s[s_num].isReserved() && s[s_num].getName() == name) {
		s[s_num].cancel();
	}
}

void Schedule::show(){
	cout << label << ":\t";
	for (int i = 0; i < 8; i++) {
		if (s[i].isReserved()) {
			cout << s[i].getName() << "\t";
		}
		else {
			cout << "---\t";
		}
	}
	cout << endl;
}

string Schedule::getLabel()
{
	return label;
}
