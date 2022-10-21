#include <iostream>

using namespace std;

int main() {
	float a, b, c, d, e;

	cout << "5개의 실수를 입력하라>>";
	cin >> a >> b >> c >> d >> e;

	float tmp;

	tmp = a;
	if (tmp < b) tmp = b;
	if (tmp < c) tmp = c;
	if (tmp < d) tmp = d;
	if (tmp < e) tmp = e;

	cout << "제일 큰 수 = " << tmp << endl;

	return 0;
}