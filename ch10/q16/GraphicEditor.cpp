#include "GraphicEditor.h"
#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Rect.h"

GraphicEditor::GraphicEditor(){ }

void GraphicEditor::addGraphic(int num){
	switch (num) {
	case 1: v.push_back(new Line); break;
	case 2: v.push_back(new Circle); break;
	case 3: v.push_back(new Rect); break;
	}
}

void GraphicEditor::deleteGraphic(int idx){
	vector<Shape*>::iterator it = v.begin();
	it += idx;
	v.erase(it);
}

void GraphicEditor::showGraphic() {
	vector<Shape*>::iterator it;
	Shape* p;
	int i = 0;
	for (it = v.begin(); it != v.end(); it++, i++) {
		p = *it;
		cout << i << ": "; p->paint();
	}
}
