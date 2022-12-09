#pragma once
#include "Printer.h"
#include <string>

using namespace std;

class InkJetPrinter : public Printer {
	int availableInk;
public:
	InkJetPrinter(string mo, string ma, int paper, int ink);
	void show() override;
	void print(int pages) override;
};

