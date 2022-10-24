#include <iostream>
#include "CircleManager.h"

using namespace std;

int main() {
	int n;
	cout << "원의 개수 >> ";
	cin >> n;

	CircleManager cm(n);
	cm.searchByName();
	cm.searchByArea();
}