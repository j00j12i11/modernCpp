#include <iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle() :Circle(1) {}
	Circle(int r) { radius = r; }
	int getRadius() { return radius; }
};

void swap(Circle& a, Circle& b) {
	Circle temp = a;
	a = b;
	b = temp;
}

int main() {

	Circle a(1);
	Circle b(4);

	cout << "a - radius: " << a.getRadius() << endl;
	cout << "b - radius: " << b.getRadius() << endl << endl;

	swap(a, b);

	cout << "a - radius: " << a.getRadius() << endl;
	cout << "b - radius: " << b.getRadius() << endl;
}