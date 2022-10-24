#include <iostream>

using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n; p = new int[n];
	}
	void read();
	void write();
	int big();
	~Sample();
};

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "���� ū ���� " << s.big() << endl;
}

void Sample::read(){
	for (int i = 0; i < size; i++) {
		cin >> *(p + i);
	}
}

void Sample::write(){
	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}

int Sample::big(){
	int b = p[0];
	for (int i = 1; i < size; i++) {
		if (b < p[i]) b = p[i];
	}
	return b;
}

Sample::~Sample(){
	delete[] p;
}
