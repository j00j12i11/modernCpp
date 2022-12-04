#pragma once
#include "Book.h"
#include <string>

using namespace std;

class ConversationBook : public Book{
public:
	string Language;
	ConversationBook(int id, int price, string description, string producer, int isbn, string author, string booktitle, string language);
	void printInfo();
};

