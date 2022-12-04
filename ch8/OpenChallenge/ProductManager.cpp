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
	cout << "***** ��ǰ ���� ���α׷��� �۵��մϴ� *****" << endl;
	while (true) {
		int tmp;
		cout << "��ǰ �߰�(1), ��� ��ǰ ��ȸ(2), ������(3) ? ";
		cin >> tmp; cin.ignore();
		if (tmp == 3) { break; }
		else if (tmp == 2) { printAll(); }
		else if (tmp == 1) {
			int t;
			cout << "��ǰ���� å(1), ����CD(2), ȸȭå(3) ? ";
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
	cout << "��ǰ���� >> "; getline(cin, des);
	cout << "������ >> "; getline(cin, prod);
	cout << "���� >> "; cin >> price; cin.ignore();
	cout << "å���� >> "; getline(cin, title);
	cout << "���� >> "; getline(cin, author);
	cout << "ISBN >> "; cin >> isbn; cin.ignore();

	p[index] = new Book(index, price, des, prod, isbn, author, title);
	t[index] = 1;
	index++;
}

void ProductManager::new_compdisc(){
	string des, prod, title, artist;
	int price;
	cout << "��ǰ���� >> "; getline(cin, des);
	cout << "������ >> "; getline(cin, prod);
	cout << "���� >> "; cin >> price; cin.ignore();
	cout << "�ٹ����� >> "; getline(cin, title);
	cout << "���� >> "; getline(cin, artist);

	p[index] = new CompactDisc(index, price, des, prod, title, artist);
	t[index] = 2;
	index++;
}

void ProductManager::new_convbook(){
	string des, prod, title, author, lang;
	int price, isbn;
	cout << "��ǰ���� >> "; getline(cin, des);
	cout << "������ >> "; getline(cin, prod);
	cout << "���� >> "; cin >> price; cin.ignore();
	cout << "å���� >> "; getline(cin, title);
	cout << "���� >> "; getline(cin, author);
	cout << "ISBN >> "; cin >> isbn; cin.ignore();
	cout << "��� >> "; getline(cin, lang);

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
