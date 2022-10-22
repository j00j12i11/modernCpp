#pragma once
#include <iostream>

class CoffeeMachine {
public:
	int coffee, water, sugar;
	CoffeeMachine(int c, int w, int s);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void show();
	void fill();
};

