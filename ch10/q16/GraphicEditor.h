#pragma once
#include <vector>
#include "Shape.h"

class GraphicEditor {
	vector<Shape*> v;
public:
	GraphicEditor();
	void addGraphic(int num);
	void deleteGraphic(int idx);
	void showGraphic();
};

