# include <iostream>
# include <string>

using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius = 0, string name = "");
	string getName() { return name; }
	void SetName(string name) { this->name = name; }
};

int main() {
	NamedCircle pizza[5];
	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	int r; string n;
	for (int i = 0; i < 5; i++) {
		cout << i+1 << ">> ";
		cin >> r >> n;
		pizza[i].setRadius(r); pizza[i].SetName(n);
	}

	double max_a; string max_n;
	max_a = pizza[0].getArea();
	max_n = pizza[0].getName();
	for (int i = 1; i < 5; i++) {
		if (pizza[i].getArea() > max_a) {
			max_a = pizza[i].getArea();
			max_n = pizza[i].getName();
		}
	}
	cout << "���� ������ ū ���ڴ� " << max_n << "�Դϴ�." << endl;
}

NamedCircle::NamedCircle(int radius, string name) :Circle(radius) {
	this->name = name;
}
