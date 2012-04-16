/*
 * SneeuwMan.cpp
 *
 *      Author: JEM W
 */
#include "SneeuwVlok.hpp"
//Constructor, de size wordt met rand gedaan om zo
//verschillende groottes van sneeuwvlokken te hebben
SneeuwVlok::SneeuwVlok(int positionX, int positionY)
{
	this->positionX = positionX;
	this->positionY = positionY;
	this->size = rand() % 15 + 2;
	this->dead = false;
}
	//Methode draw
	void SneeuwVlok::draw()
	{
		maSetColor(0xFFFFFF);
		maFillRect(this->positionX, this->positionY, this->size, this->size);
	}

	//Methode fall
	void SneeuwVlok::fall(int groundLevel)
	{
		//Y positie wordt met 5 verhoogd, oftewel wordt lager op het scherm
		this->positionY+=5;
		//Zodra de vlok grondlevel heeft bereikt wordt deze dood
		this->dead = (this->positionY > groundLevel);
	}

	//Returned of de vlok dood is of niet
	bool SneeuwVlok::isDead()
	{
		return this->dead;
	}
