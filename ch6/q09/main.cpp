#include <iostream>
#include <string>

using namespace std;

class Board {
public:
	static string board[100];
	static int index;
	static void add(string text) {
		board[index] = text;
		index++;
	}
	static void print() {
		cout << "********** �Խ����Դϴ�. **********" << endl;
		for (int i = 0; i < index; i++)
			cout << i << ":" << board[i] << endl;
		cout << endl;
	}
};

string Board::board[100];
int Board::index = 0;

int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿����ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���.");
	Board::print();
}
