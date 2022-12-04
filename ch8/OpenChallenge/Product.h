#pragma once
#include <string>

using namespace std;

class Product{
public:
	int ID, Price;
	string Description, Producer;
	Product(int id, int price, string description, string producer);
	void printInfo();
};

