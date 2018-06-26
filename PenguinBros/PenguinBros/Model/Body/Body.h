#pragma once
class Body
{
public:
	Body();
	~Body();
	virtual void move(void *)=0;//Al igual que lo que recibe y devuelve
protected:
	int id;//Probablemente cambiemos el tipo de dato a un typdef enum

};

