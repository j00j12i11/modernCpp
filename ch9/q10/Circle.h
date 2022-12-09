#pragma once
#include <iostream>
#include "Shape.h"
class Circle : public Shape {
protected:
	void draw() override {
		cout << "Circle" << endl;
	}
};

