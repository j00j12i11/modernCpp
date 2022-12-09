#include "GraphicEditor.h"

GraphicEditor::GraphicEditor(){
	pStart = pLast = nullptr;
}

void GraphicEditor::addGraphic(int num) {
	Shape* tmp = nullptr;
	switch (num) {
	case 1: tmp = new Line; break;
	case 2: tmp = new Circle; break;
	case 3: tmp = new Rect; break;
	}
	
	if (pStart == nullptr) {
		pStart = pLast = tmp;
	}
	else {
		pLast = pLast->add(tmp);
	}


}

void GraphicEditor::deleteGraphic(int idx){
	Shape* tmp = pStart;
	Shape* pre = nullptr;

	if (idx == 0) {
		if (pStart == pLast) {
			delete tmp;
			pStart = pLast = nullptr;
		}
		else {
			tmp = tmp->getNext();
			delete pStart;
			pStart = tmp;
		}
		
	} 
	else {
		for (int i = 0; i < idx; i++) {
			if (i == idx - 1) pre = tmp;
			tmp = tmp->getNext();
		}
		tmp = pre->getNext();
		pre->changeNext(tmp->getNext());
		delete tmp;
	}
}

void GraphicEditor::showGraphic(){
	Shape* tmp = pStart;
	if (pStart == nullptr) {
		cout << "아무것도 없습니다." << endl;
	}
	else {
		for (int i = 0; ; i++) {
			cout << i << ": "; tmp->paint();
			if (tmp == pLast) break;
			else tmp = tmp->getNext();
		}
	}
}

