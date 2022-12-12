#pragma once
#include <iostream>
#include "Shape.h"
class Line : public Shape {
protected:
	void draw() override {
		cout << "Line" << endl;
	}
};

