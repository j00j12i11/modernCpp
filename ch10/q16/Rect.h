#pragma once
#include <iostream>
#include "Shape.h"
class Rect : public Shape {
protected:
	void draw() override {
		cout << "Rectangle" << endl;
	}
};

