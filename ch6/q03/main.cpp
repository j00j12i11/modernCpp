#include <iostream>

using namespace std;

/* (1) �Լ� �ߺ����� �̿� */
//int big(int a, int b) {
//	int result = a;
//	if (result < b) result = b;
//
//	if (result > 100) return 100;
//	else return result;
//}
//int big(int a, int b, int c) {
//	int result = a;
//	if (result < b) result = b;
//	
//	if (result > c) return c;
//	else return result;
//}

/* (2) ����Ʈ �Ű����� �̿� */
int big(int a, int b, int c=100) {
	int result = a;
	if (result < b) result = b;

	if (result > c) return c;
	else return result;
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}