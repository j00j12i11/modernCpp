#include <vector>
#include <iostream>
#include <iterator>
#include <string>

using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius, string name) {
		this->radius = radius;
		this->name = name;
	}
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

int main() {
	vector<Circle*> v;

	cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�." << endl;
	bool run=true; 
	int b, r; string n;
	vector<Circle*>::iterator it;
	Circle *tmp;
	while (run) {
		cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
		cin >> b;
		switch (b) {
		case 1:
			cout << "�����ϰ��� �ϴ� ���� �������� �̸��� >> ";
			cin >> r >> n;
			tmp = new Circle(r, n);
			v.push_back(tmp);
			break;
		case 2:
			cout << "�����ϰ��� �ϴ� ���� �̸��� >> ";
			cin >> n;
			it = v.begin();
			while (it != v.end()) {
				tmp = *it;
				if (tmp->getName() == n) {
					it = v.erase(it);
				}
				else { it++; }
			}
			break;
		case 3:
			it = v.begin();
			while (it != v.end()) {
				tmp = *it++;
				cout << tmp->getName() << endl;
			}
			break;
		case 4:
			run = false;
		}
	}
}