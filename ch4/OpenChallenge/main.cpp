#include <iostream>
#include "Game.h"

using namespace std;

int main() {
	int num;
	cout << "���� �ձ� ������ �����մϴ�." << endl;
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�?";
	cin >> num;

	Game gm(num);
	gm.play();
}