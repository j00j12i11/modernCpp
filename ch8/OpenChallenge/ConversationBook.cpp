#include "ConversationBook.h"
#include <iostream>

using namespace std;

ConversationBook::ConversationBook(int id, int price, string description, string producer, int isbn, string author, string booktitle, string language)
: Book(id, price, description, producer, isbn, author, booktitle){
	Language = language;
}

void ConversationBook::printInfo(){
	cout << "--- 상품 ID : " << ID << endl;
	cout << "상품설명 >> " << Description << endl;
	cout << "생산자 >> " << Producer << endl;
	cout << "가격 >> " << Price << endl;
	cout << "ISBN >> " << ISBN << endl;
	cout << "책제목 >> " << BookTitle << endl;
	cout << "저자 >> " << Author << endl;
	cout << "언어 >> " << Language << endl;
}
