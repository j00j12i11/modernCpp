#include <iostream>
#include <string>

using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "��" << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class KmToMile : public Converter {
	virtual double convert(double src) { return src / 1.609344; }
	virtual string getSourceString() { return "Km"; }
	virtual string getDestString() { return "Mile"; }
public:
	KmToMile(double ratio) : Converter(ratio) {};
};

int main() {
	KmToMile toMile(1.609344);
	toMile.run();
}