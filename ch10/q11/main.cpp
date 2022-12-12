#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
public:
	int year;
	string name, author;
	Book(int year = 2000, string name = "bookName", string author = "bookAuthor") {
		this->year = year; this->name = name; this->author = author; 
	}
	void printInfo() {
		cout << year << "년도, ";
		cout << name << ", ";
		cout << author << endl;
	}
};

int main() {
	vector<Book> v_b;
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
	int x; string n, a;
	while (true) {
		cout << "년도>>";
		cin >> x;
		if (x == -1) break;
		cout << "책이름>>";
		cin.ignore(); getline(cin, n);
		cout << "저자>>";
		 getline(cin, a);
		
		v_b.push_back(Book(x, n, a));
	}

	cout << "총 입고된 책은 " << v_b.size() << "권 입니다." << endl;
	cout << "검색하고자 하는 저자의 이름을 입력하세요>>";
	cin.ignore(); getline(cin, a); 
	for (int i = 0; i < v_b.size(); i++) {
		if (v_b[i].author == a) v_b[i].printInfo();
	}
	cout << "검색하고자 하는 년도를 입력하세요>>";
	cin >> x;
	for (int i = 0; i < v_b.size(); i++) {
		if (v_b[i].year == x) v_b[i].printInfo();
	}
}