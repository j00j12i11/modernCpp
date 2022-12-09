#include <string>
#include <iostream>

using namespace std;

class LoopAdder {
	string name;
	int x, y, sum;
	void read();
	void write();
protected:
	LoopAdder(string name = "") { this->name = name; }
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;
public:
	void run();
};

class WhileLoopAdder : public LoopAdder {
	virtual int calculate();
public:
	WhileLoopAdder(string name = "") : LoopAdder(name) {};
};

class doWhileLoopAdder : public LoopAdder {
	virtual int calculate();
public:
	doWhileLoopAdder(string name = "") : LoopAdder(name) {};
};

int main() {
	WhileLoopAdder wihleLoop("While Loop");
	doWhileLoopAdder doWhileLoop("Do while Loop");

	wihleLoop.run();
	doWhileLoop.run();
}

void LoopAdder::read() {
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
	cin >> x >> y;
}

void LoopAdder::write() {
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�" << endl;
}

void LoopAdder::run() {
	read();
	sum = calculate();
	write();
}

int WhileLoopAdder::calculate() {
	int x = getX();
	int y = getY();
	int sum = 0;
	while (x <= y) {
		sum += x++;
	}
	return sum;
}

int doWhileLoopAdder::calculate() {
	int x = getX();
	int y = getY();
	int sum = 0;
	do {
		sum += x++;
	} while (x <= y);
	return sum;
}
