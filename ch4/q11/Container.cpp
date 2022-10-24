#include "Container.h"

void Container::fill(int n) {
	size = n;
}
bool Container::consume(int n) {
	if (size < n)
		return false;
	else {
		size -= n;
		return true;
	}
}
int Container::getSize() {
	return size;
}