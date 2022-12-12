#include <iostream>
#include <string>
#include "GraphicEditor.h"

class UI {
public:
	static int Menu_ui();
	static int Add_ui();
	static int Delete_ui();
};

int main() {
	GraphicEditor ge;
	cout << "그래픽 에디터입니다." << endl;
	bool btn = true;

	while (btn) {
		switch (UI::Menu_ui()) {
		case 1: ge.addGraphic(UI::Add_ui()); break;
		case 2: ge.deleteGraphic(UI::Delete_ui()); break;
		case 3: ge.showGraphic(); break;
		case 4: btn = false;
		}
	}
}

int UI::Menu_ui() {
	int n;
	cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
	cin >> n;
	return n;
}

int UI::Add_ui() {
	int n;
	cout << "선: 1, 원:2, 사각형:3 >> ";
	cin >> n;
	return n;
}

int UI::Delete_ui() {
	int n;
	cout << "삭제하고자 하는 도형의 인덱스 >> ";
	cin >> n;
	return n;
}
