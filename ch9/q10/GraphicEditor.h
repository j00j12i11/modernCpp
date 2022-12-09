#pragma once
#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Rect.h"

class GraphicEditor {
	Shape* pStart;
	Shape* pLast;
public:
	GraphicEditor();
	void addGraphic(int num);
	void deleteGraphic(int idx);
	void showGraphic();
};

