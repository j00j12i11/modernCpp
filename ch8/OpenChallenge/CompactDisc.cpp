#include "CompactDisc.h"
#include <iostream>

using namespace std;

CompactDisc::CompactDisc(int id, int price, string description, string producer, string albumtitle, string artist)
:Product(id, price, description, producer){
	AlbumTitle = albumtitle;
	Artist = artist;
}

void CompactDisc::printInfo(){
	cout << "--- 상품 ID : " << ID << endl;
	cout << "상품설명 >> " << Description << endl;
	cout << "생산자 >> " << Producer << endl;
	cout << "가격 >> " << Price << endl;
	cout << "앨범제목 >> " << AlbumTitle << endl;
	cout << "가수 >> " << Artist << endl;
}

