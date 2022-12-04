#include "Book.h"
#include <iostream>

using namespace std;

Book::Book(int id, int price, string description, string producer, int isbn, string author, string booktitle)
:Product(id, price, description, producer) {
	ISBN = isbn;
	Author = author;
	BookTitle = booktitle;
}

void Book::printInfo(){
	cout << "--- 상품 ID : " << ID << endl;
	cout << "상품설명 >> " << Description << endl;
	cout << "생산자 >> " << Producer << endl;
	cout << "가격 >> " << Price << endl;
	cout << "ISBN >> " << ISBN << endl;
	cout << "책제목 >> " << BookTitle << endl;
	cout << "저자 >> " << Author << endl;
}
