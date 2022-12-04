#include "ConversationBook.h"
#include <iostream>

using namespace std;

ConversationBook::ConversationBook(int id, int price, string description, string producer, int isbn, string author, string booktitle, string language)
: Book(id, price, description, producer, isbn, author, booktitle){
	Language = language;
}

void ConversationBook::printInfo(){
	cout << "--- ��ǰ ID : " << ID << endl;
	cout << "��ǰ���� >> " << Description << endl;
	cout << "������ >> " << Producer << endl;
	cout << "���� >> " << Price << endl;
	cout << "ISBN >> " << ISBN << endl;
	cout << "å���� >> " << BookTitle << endl;
	cout << "���� >> " << Author << endl;
	cout << "��� >> " << Language << endl;
}
