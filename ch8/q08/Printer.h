#pragma once
#include <string>

using namespace std;

class Printer {
public:
	string modelName;
	string manufactuer;
	int printedCount;
	int availableCount;

	Printer();
	Printer(string modelName, string manufactuer, int paper);
	bool print(int pages);
};

