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
			cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
			for (int i = 0; i < index; i++) {
				cout << log[i][0] << ":" << log[i][1] << endl;
			}
		}
		else {
			cout << "----- " << tag << "태그의 Trace 정보를 출력합니다. -----" << endl;
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
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}


int main() {
	Trace::put("main()", "프로그램 시작합니다");
	f();
	Trace::put("main()", "종료");
	Trace::print("f()");
	Trace::print();
}