#include "Circle.h"

void Circle::setRadius(int radius){
	this->radius = radius;
}

double Circle::getArea(){
	return radius*radius*3.14;
}
