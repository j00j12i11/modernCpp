#pragma once
#include "Product.h"
#include <string>

using namespace std;

class Book : public Product {
public:
	int ISBN;
	string Author, BookTitle;
	Book(int id, int price, string description, string producer, int isbn, string author, string booktitle);
	void printInfo();
};

