#include <iostream>

using namespace std;

class Stack {
	int array[100];
	int top;
public:
	Stack() { top = 0; }
	Stack& operator << (int x) {
		array[top++] = x;
		return *this;
	}
	void operator >> (int& x) {
		if (top == 0) {
			cout << "error: this is empty" << endl;
		}
		else {
			x = array[--top];
		}
	}
	bool operator ! () {
		if (top == 0) return true;
		else return false;
	}
};

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}