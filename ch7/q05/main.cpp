#include <iostream>
#include <string>

using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int red, int green, int blue) { this->red = red; this->green = green; this->blue = blue; }
	void setColor(int red, int green, int blue) { this->red = red; this->green = green; this->blue = blue; }
	void show() { cout << red << " " << green << " " << blue << endl; }
	Color operator + (Color c) {
		Color result(red + c.red, green + c.green, blue + c.blue);
		return result;
	}
	bool operator == (Color c) {
		if (this->red == c.red && this->green == c.green && this->blue == c.blue)
			return true;
		else
			return false;
	}
};

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}