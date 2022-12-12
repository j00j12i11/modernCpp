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
		cout << year << "�⵵, ";
		cout << name << ", ";
		cout << author << endl;
	}
};

int main() {
	vector<Book> v_b;
	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
	int x; string n, a;
	while (true) {
		cout << "�⵵>>";
		cin >> x;
		if (x == -1) break;
		cout << "å�̸�>>";
		cin.ignore(); getline(cin, n);
		cout << "����>>";
		 getline(cin, a);
		
		v_b.push_back(Book(x, n, a));
	}

	cout << "�� �԰�� å�� " << v_b.size() << "�� �Դϴ�." << endl;
	cout << "�˻��ϰ��� �ϴ� ������ �̸��� �Է��ϼ���>>";
	cin.ignore(); getline(cin, a); 
	for (int i = 0; i < v_b.size(); i++) {
		if (v_b[i].author == a) v_b[i].printInfo();
	}
	cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>>";
	cin >> x;
	for (int i = 0; i < v_b.size(); i++) {
		if (v_b[i].year == x) v_b[i].printInfo();
	}
}