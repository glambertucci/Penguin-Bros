#pragma once
#include "Body.h"
#include "../Atack/PAtack.h"
class Player :
	public Body
{
public:
	Player();
	~Player();
private:
	PAtack atk;
	int lifes;
	long long unsigned int points;
	double xCoord;
	double yCoord;
};

