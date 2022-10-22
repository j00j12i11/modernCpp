#include "Account.h"

Account::Account(string n, int i, int b){
	name = n; id = i; balance = b;
}

void Account::deposit(int m){
	balance += m;
}

int Account::withdraw(int m){
	if (balance - m >= 0) {
		balance -= m;
		return m;
	}
	else {
		balance = 0;
		return balance;
	}

	return -1;
}

int Account::inquiry(){
	return balance;
}

string Account::getOwner()
{
	return name;
}
