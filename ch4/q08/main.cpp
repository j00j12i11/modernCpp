#include <iostream>

using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};

int main() {
	int size;
	cout << "���� ���� >> ";
	cin >> size;
	Circle *p = new Circle[size];

	int r;
	int count = 0;
	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		p[i].setRadius(r);
		if (p[i].getArea() > 100) count++;
	}

	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << endl;

}

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return radius * radius * 3.14;
}