#pragma once
#include "Player.h"
class Game
{
	Player* p;
	int size;
public:
	Game(int size);
	~Game();
	void play();
};

