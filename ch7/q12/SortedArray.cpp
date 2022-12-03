#include "SortedArray.h"
#include <iostream>

using namespace std;

void SortedArray::sort(){
	for (int i = 1; i < size; i++) {
		for (int j = 0; j < size - i; j++) {
			if (p[j] > p[j + 1]) {
				int tmp = p[j + 1];
				p[j+1] = p[j];
				p[j] = tmp;
			}
		}
	}
}

SortedArray::SortedArray() { p = NULL; size = 0; }

SortedArray::SortedArray(SortedArray& src){
	size = src.size;
	p = new int[size];
	for (int i = 0; i < size; i++)
		p[i] = src.p[i];
}

SortedArray::SortedArray(int p[], int size){
	this->size = size;
	this->p = new int[size];
	for (int i = 0; i < size; i++) {
		this->p[i] = p[i];
	}
	this->sort();
}

SortedArray::~SortedArray(){
	delete[] p;
}

SortedArray SortedArray::operator+(SortedArray& op2){
	SortedArray result;
	result.size = this->size + op2.size;
	result.p = new int[result.size];
	for (int i = 0; i < result.size; i++) {
		if (i < size)
			result.p[i] = p[i];
		else
			result.p[i] = op2.p[i - size];
	}
	result.sort();
	return result;
}

SortedArray& SortedArray::operator=(const SortedArray& op2)
{
	size = op2.size;
	p = new int[size];
	for (int i = 0; i < size; i++) {
		p[i] = op2.p[i];
	}
	return *this;
}

void SortedArray::show(){
	cout << "배열 출력 : ";
	for (int i = 0; i < size; i++) cout << p[i] << " ";
	cout << endl;
}
