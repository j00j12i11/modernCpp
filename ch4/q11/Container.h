#pragma once
class Container{
	int size;
public:
	Container() { size = 10; }
	void fill(int n);
	bool consume(int n);
	int getSize();
};

