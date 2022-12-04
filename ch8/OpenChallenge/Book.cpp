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
	cout << "--- ��ǰ ID : " << ID << endl;
	cout << "��ǰ���� >> " << Description << endl;
	cout << "������ >> " << Producer << endl;
	cout << "���� >> " << Price << endl;
	cout << "ISBN >> " << ISBN << endl;
	cout << "å���� >> " << BookTitle << endl;
	cout << "���� >> " << Author << endl;
}
