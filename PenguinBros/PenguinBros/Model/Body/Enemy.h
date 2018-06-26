#pragma once
#include "Body.h"
#include "../Atack/EAtack.h"
class Enemy :
	public Body
{
public:
	Enemy();
	~Enemy();
	void setMovement(void*);
private:
	EAtack atk;
	
};

