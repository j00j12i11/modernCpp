#include "CoffeeMachine.h"
#include "CoffeeMachine.h"
#include <iostream>
using namespace std;

CoffeeMachine::CoffeeMachine(int c, int w, int s) {
	coffee = c;
	water = w;
	sugar = s;
}

void CoffeeMachine::drinkEspresso() {
	coffee -= 1;
	water -= 1;
}

void CoffeeMachine::drinkAmericano() {
	coffee -= 1;
	water -= 2;
}

void CoffeeMachine::drinkSugarCoffee() {
	coffee -= 1;
	water -= 2;
	sugar -= 1;
}

void CoffeeMachine::show() {
	cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << ", ��:" << water << ", ����:" << sugar << endl;
}

void CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
}
