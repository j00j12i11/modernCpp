#include <iostream>

using namespace std;

int main() {
	float a, b, c, d, e;

	cout << "5���� �Ǽ��� �Է��϶�>>";
	cin >> a >> b >> c >> d >> e;

	float tmp;

	tmp = a;
	if (tmp < b) tmp = b;
	if (tmp < c) tmp = c;
	if (tmp < d) tmp = d;
	if (tmp < e) tmp = e;

	cout << "���� ū �� = " << tmp << endl;

	return 0;
}