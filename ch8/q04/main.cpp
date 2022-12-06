#include <iostream>
#include <string>

using namespace std;

class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint :public Point {
	string color;
public:
	ColorPoint(int x = 0, int y = 0, string color = "BLACK");
	void setPoint(int x, int y);
	void setColor(string color);
	void show();
};

int main() {
	ColorPoint zeroPoint;
	zeroPoint.show();
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}

ColorPoint::ColorPoint(int x, int y, string color) : Point(x, y) {
	this->color = color;
}

void ColorPoint::setPoint(int x, int y) {
	move(x, y);
}

void ColorPoint::setColor(string color) {
	this->color = color;
}

void ColorPoint::show() {
	cout << color << "������ (" << getX() << "," << getY() << ")�� ��ġ�� ���Դϴ�." << endl;
}
