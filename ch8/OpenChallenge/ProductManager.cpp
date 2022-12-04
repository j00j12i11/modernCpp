#include "ProductManager.h"
#include "Book.h"
#include "ConversationBook.h"
#include "CompactDisc.h"
#include <iostream>
#include <string>

using namespace std;

ProductManager::ProductManager(){
	index = 0;
	for (int i = 0; i < 100; i++) {
		p[i] = nullptr;
	}
}

void ProductManager::run(){
	cout << "***** 상품 관리 프로그램을 작동합니다 *****" << endl;
	while (true) {
		int tmp;
		cout << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) ? ";
		cin >> tmp; cin.ignore();
		if (tmp == 3) { break; }
		else if (tmp == 2) { printAll(); }
		else if (tmp == 1) {
			int t;
			cout << "상품종류 책(1), 음악CD(2), 회화책(3) ? ";
			cin >> t; cin.ignore();
			switch (t) {
			case 1: new_book(); break;
			case 2: new_compdisc(); break;
			case 3: new_convbook(); break;
			}
		}
	}
}

void ProductManager::new_book(){
	string des, prod, title, author;
	int price, isbn;
	cout << "상품설명 >> "; getline(cin, des);
	cout << "생산자 >> "; getline(cin, prod);
	cout << "가격 >> "; cin >> price; cin.ignore();
	cout << "책제목 >> "; getline(cin, title);
	cout << "저자 >> "; getline(cin, author);
	cout << "ISBN >> "; cin >> isbn; cin.ignore();

	p[index] = new Book(index, price, des, prod, isbn, author, title);
	t[index] = 1;
	index++;
}

void ProductManager::new_compdisc(){
	string des, prod, title, artist;
	int price;
	cout << "상품설명 >> "; getline(cin, des);
	cout << "생산자 >> "; getline(cin, prod);
	cout << "가격 >> "; cin >> price; cin.ignore();
	cout << "앨범제목 >> "; getline(cin, title);
	cout << "가수 >> "; getline(cin, artist);

	p[index] = new CompactDisc(index, price, des, prod, title, artist);
	t[index] = 2;
	index++;
}

void ProductManager::new_convbook(){
	string des, prod, title, author, lang;
	int price, isbn;
	cout << "상품설명 >> "; getline(cin, des);
	cout << "생산자 >> "; getline(cin, prod);
	cout << "가격 >> "; cin >> price; cin.ignore();
	cout << "책제목 >> "; getline(cin, title);
	cout << "저자 >> "; getline(cin, author);
	cout << "ISBN >> "; cin >> isbn; cin.ignore();
	cout << "언어 >> "; getline(cin, lang);

	p[index] = new ConversationBook(index, price, des, prod, isbn, author, title, lang);
	t[index] = 3;
	index++;
}

void ProductManager::printAll(){
	Book* B_ptr = nullptr;
	CompactDisc* CD_ptr = nullptr;
	ConversationBook* CB_ptr = nullptr;

	for (int i = 0; i < index; i++) {
		switch (t[i]) {
		case 1:
			B_ptr = (Book*)p[i];
			B_ptr->printInfo(); break;
		case 2:
			CD_ptr = (CompactDisc*)p[i];
			CD_ptr->printInfo(); break;
		case 3:
			CB_ptr = (ConversationBook*)p[i];
			CB_ptr->printInfo(); break;
		}
	}
}
