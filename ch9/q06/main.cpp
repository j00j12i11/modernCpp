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
	
	cout << "���ÿ� ���� ������ �Է��ϼ���" << endl;

	int tmp;
	while (true)
	{
		cout << " >> ";
		cin >> tmp;
		if (!s.push(tmp)) {
			cout << "������ ���� ���� [" << tmp << "]�� ������� �ʾҽ��ϴ�." << endl;
			break;
		}
	}

	cout << "���ÿ� ����� ������ ����" << s.size();

	cout << "������ ��� ������ pop�մϴ�." << endl;
	while (true)
	{
		if (!s.pop(tmp)) {
			cout << "������ ��� ������ ����߽��ϴ�." << endl;
			break;
		}
		cout << " >> " << tmp << endl;
	}
}