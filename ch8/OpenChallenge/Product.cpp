#include "Product.h"
#include <iostream>

using namespace std;

Product::Product(int id, int price, string description, string producer){
	ID = id;
	Price = price;
	Description = description;
	Producer = producer;
}

void Product::printInfo(){
	cout << "--- ��ǰ ID : " << ID << endl;
	cout << "��ǰ���� >> " << Description << endl;
	cout << "������ >> " << Producer << endl;
	cout << "���� >> " << Price << endl;
}
