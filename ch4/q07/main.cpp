#include <iostream>
#include "Circle.h"

using namespace std;

int main() {
	Circle p[3];
	int r;
	int count=0;

	for (int i = 0; i < 3; i++) {
		cout << "원 " << i+1 << "의 반지름 >> ";
		cin >> r;
		p[i].setRadius(r);
		if (p[i].getArea() > 100) count++;
	}

	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;

}