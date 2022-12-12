#pragma once
#include <iostream>
#include <string>

using namespace std;

class Shape {
protected:
	virtual void draw() = 0;
public:
	Shape() {}
	virtual ~Shape() {}
	void paint() { draw(); }
};

