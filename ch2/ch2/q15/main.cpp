#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b;
	char op[10];
	while (true) {
		cout << "?";
		cin >> a >> op >> b;
		if (strcmp(op, "+") == 0)
			cout << a << " " << op << " " << b << " = " << a + b << endl;
		if (strcmp(op, "-") == 0)
			cout << a << " " << op << " " << b << " = " << a - b << endl;
		if (strcmp(op, "*") == 0)
			cout << a << " " << op << " " << b << " = " << a * b << endl;
		if (strcmp(op, "/") == 0)
			cout << a << " " << op << " " << b << " = " << a / b << endl;
		if (strcmp(op, "%") == 0)
			cout << a << " " << op << " " << b << " = " << a % b << endl;
	}

	return 0;
}