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
	cout << "�׷��� �������Դϴ�." << endl;
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
	cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
	cin >> n;
	return n;
}

int UI::Add_ui() {
	int n;
	cout << "��: 1, ��:2, �簢��:3 >> ";
	cin >> n;
	return n;
}

int UI::Delete_ui() {
	int n;
	cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
	cin >> n;
	return n;
}
