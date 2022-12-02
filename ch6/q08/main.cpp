#include <iostream>

using namespace std;

class Trace {
	static int index;
public:
	static string log[100][2];
	static void put(string tag, string debug_info) {
		log[index][0] = tag;
		log[index][1] = debug_info;
		index++;
	}
	static void print(string tag = "") {
		if (tag == "") {
			cout << "----- ��� Trace ������ ����մϴ�. -----" << endl;
			for (int i = 0; i < index; i++) {
				cout << log[i][0] << ":" << log[i][1] << endl;
			}
		}
		else {
			cout << "----- " << tag << "�±��� Trace ������ ����մϴ�. -----" << endl;
			for (int i = 0; i < index; i++) {
				if (log[i][0] == tag)
					cout << tag << ":" << log[i][1] << endl;
			}
		}
	}
};

string Trace::log[100][2];
int Trace::index = 0;

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}


int main() {
	Trace::put("main()", "���α׷� �����մϴ�");
	f();
	Trace::put("main()", "����");
	Trace::print("f()");
	Trace::print();
}