#pragma once
class ProductManager{
	void* p[100];
	int t[100]; // å = 1, ����CD = 2, ȸȭå = 3
	int index;
public:
	ProductManager();
	void run();
	void new_book();
	void new_compdisc();
	void new_convbook();
	void printAll();
};

