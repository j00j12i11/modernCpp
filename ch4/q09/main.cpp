#include <iostream>;
#include <string>;

using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() {}
	string getName() { return name; }
	string getTel() { return tel; }	
	void set(string name, string tel) { this->name = name; this->tel = tel; }
};

int main() {
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
	string n, t;
	Person p[3];
	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">> ";
		cin >> n >> t;
		p[i].set(n, t);
	}

	cout << "��� ����� �̸��� ";
	for (Person& a : p) { cout << a.getName() << " "; }
	cout << endl;

	cout << "��ȭ��ȣ�� �˻��մϴ�.";
	cout << "�̸��� �Է��ϼ��� >> ";
	cin >> n;
	for (Person& a : p) { 
		if (a.getName() == n)
			cout << "��ȭ ��ȣ�� " << a.getTel() << endl;
	}
}