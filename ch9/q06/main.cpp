#include <iostream>
#include <string>

using namespace std;

class AbstrackStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;

	virtual int size() = 0;
};

class IntStack {
	int *p;
	int top;
public:
	IntStack() { top = 0; p = new int[5]; }
	~IntStack() { delete[] p; }
	bool push(int n) { 
		if (top < 5) {
			p[top++] = n; return true;
		}
		else { return false; }
	}
	bool pop(int& n) {
		if (top == 0) {
			return false;
		}
		else { n = p[--top]; }
	}
	int size() { return top; }
};

int main() {
	IntStack s;
	
	cout << "스택에 넣을 정수를 입력하세요" << endl;

	int tmp;
	while (true)
	{
		cout << " >> ";
		cin >> tmp;
		if (!s.push(tmp)) {
			cout << "스택이 가득 차서 [" << tmp << "]는 저장되지 않았습니다." << endl;
			break;
		}
	}

	cout << "스택에 저장된 정수의 개수" << s.size();

	cout << "스택의 모든 정수를 pop합니다." << endl;
	while (true)
	{
		if (!s.pop(tmp)) {
			cout << "스택의 모든 정수를 출력했습니다." << endl;
			break;
		}
		cout << " >> " << tmp << endl;
	}
}