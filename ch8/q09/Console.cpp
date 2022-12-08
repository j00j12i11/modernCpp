#include "Console.h"
#include <iostream>
#include <string>

using namespace std;

void Console::input(int& btn){
	cin >> btn;
}

void Console::input(string& str){
	cin.ignore();
	getline(cin, str);
}
