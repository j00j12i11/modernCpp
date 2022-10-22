#pragma once
#include <string>

using namespace std;

class Account{
	string name;
	int id, balance;
public:
	Account(string n, int i, int b);
	void deposit(int m);
	int withdraw(int m);
	int inquiry();
	string getOwner();
};

