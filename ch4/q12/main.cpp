#include <iostream>
#include "CircleManager.h"

using namespace std;

int main() {
	int n;
	cout << "���� ���� >> ";
	cin >> n;

	CircleManager cm(n);
	cm.searchByName();
	cm.searchByArea();
}