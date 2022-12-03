#include <iostream>
#include <string>

using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price, this->pages = pages;
	}
	void show() {
		cout << title << " " << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
	bool operator > (string str) {
		return this->title > str;
	}
};

int main() {
	Book a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요>>";
	getline(cin, b);
	//friend는 건너뛰었으므로 살짝 변경함.
	if (a > b)
		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
}