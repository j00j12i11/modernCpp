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
	cout << "--- 상품 ID : " << ID << endl;
	cout << "상품설명 >> " << Description << endl;
	cout << "생산자 >> " << Producer << endl;
	cout << "가격 >> " << Price << endl;
}
