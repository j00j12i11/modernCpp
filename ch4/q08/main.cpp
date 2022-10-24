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
	cout << "원의 개수 >> ";
	cin >> size;
	Circle *p = new Circle[size];

	int r;
	int count = 0;
	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		p[i].setRadius(r);
		if (p[i].getArea() > 100) count++;
	}

	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;

}

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return radius * radius * 3.14;
}