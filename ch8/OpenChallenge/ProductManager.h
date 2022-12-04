#pragma once
class ProductManager{
	void* p[100];
	int t[100]; // 책 = 1, 음악CD = 2, 회화책 = 3
	int index;
public:
	ProductManager();
	void run();
	void new_book();
	void new_compdisc();
	void new_convbook();
	void printAll();
};

