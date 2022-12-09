#pragma once
#include <iostream>
#include <string>

using namespace std;

class Shape {
	Shape* next;
protected:
	virtual void draw() = 0;
public:
	Shape() { next = NULL; }
	virtual ~Shape() {}
	void paint() { draw(); }
	Shape* add(Shape* p) { this->next = p; return p; }
	Shape* getNext() { return next; }
	void changeNext(Shape* p) { next = p; }
};

