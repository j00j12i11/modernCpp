#include <iostream>

using namespace std;

int sum(int a, int b);

int main() {
	int n;
	cout << "�� ���� �Է��ϼ���>>"; 
	cin >> n;
	cout << "1����" << n << "������ ���� " << sum(1,n) << "�Դϴ�." << endl;

	return 0;
}

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++) {
		res += k;
	}
	return res;
}