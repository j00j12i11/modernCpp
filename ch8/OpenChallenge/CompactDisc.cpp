#include "CompactDisc.h"
#include <iostream>

using namespace std;

CompactDisc::CompactDisc(int id, int price, string description, string producer, string albumtitle, string artist)
:Product(id, price, description, producer){
	AlbumTitle = albumtitle;
	Artist = artist;
}

void CompactDisc::printInfo(){
	cout << "--- ��ǰ ID : " << ID << endl;
	cout << "��ǰ���� >> " << Description << endl;
	cout << "������ >> " << Producer << endl;
	cout << "���� >> " << Price << endl;
	cout << "�ٹ����� >> " << AlbumTitle << endl;
	cout << "���� >> " << Artist << endl;
}

