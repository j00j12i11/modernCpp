#include "Player.h"
#include <iostream>

using namespace std;

void Player::setName(string name) {
	this->name = name;
}

string Player::getName()
{
	return name;
}
