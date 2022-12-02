#include <iostream>
#include <string>

using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	/* (1) 함수 중복 정의를 이용 */
	//Person() :Person(1, "Grace", 20.5) {}
	//Person(int id, string name) :Person(id, name, 20.5) {}
	//Person(int id, string name, double weight) {
	//	this->id = id;
	//	this->name = name;
	//	this->weight = weight;
	//}

	/* (2) 디폴트 매개변수 이용 */
	Person(int id=1, string name="Grace", double weight=20.5) {
		this->id = id;
		this->name = name;
		this->weight = weight;
	}
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}