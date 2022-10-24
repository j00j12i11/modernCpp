#include <iostream>

using namespace std;

class myIntStack {
	int p[10];
	int tos;
public:
	myIntStack();
	bool push(int n);
	bool pop(int& n);
};

int main() {
	myIntStack a;
	for (int i = 0; i < 11; i++) {
		if (a.push(i)) cout << i << " ";
		else cout << endl << i + 1 << "번째 stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n)) cout << n << ' ';
		else cout << endl << i + 1 << " 번째 stack empty";
	}
	cout << endl;
}

myIntStack::myIntStack() { tos = -1; }

bool myIntStack::push(int n)
{
	if (tos == 9) {
		return false;
	}
	tos++;
	p[tos] = n;
	return true;
}

bool myIntStack::pop(int& n)
{
	if (tos == -1) {
		return false;
	}
	n = p[tos];
	tos--;
	return true;
}
