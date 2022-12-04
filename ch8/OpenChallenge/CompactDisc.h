#pragma once
#include "Product.h"
class CompactDisc : public Product {
public:
	string AlbumTitle, Artist;
	CompactDisc(int id, int price, string description, string producer, string albumtitle, string artist);
	void printInfo();
};

