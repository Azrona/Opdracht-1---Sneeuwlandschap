/*
 * SneeuwMan.cpp
 *
 *      Author: JEM W
 */


#include "SneeuwLandschap.hpp"
//Constructor
SneeuwMan::SneeuwMan(int positionX, int positionY) {
	this->positionX = positionX;
	this->positionY = positionY;
}

SneeuwMan::~SneeuwMan()
{

}
//Beweegt de sneeuwman in de juiste richting
void SneeuwMan::move(int direction)
{
	this->positionX += direction;
}

//Tekent de sneeuwman
void SneeuwMan::draw()
{
	int width = 30;
	int height = 40;

	maSetColor(0xffffff);
	maFillRect(this->positionX - (width / 3), this->positionY - height - (height / 2), width - (width /3), height);
	maFillRect(this->positionX - (width / 2), this->positionY - height, width, height);
}


