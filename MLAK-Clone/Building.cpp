#include "Building.h"

Building::Building(std::string path, int bType)
{
	this->spr = new olc::Sprite(path);
	this->dec = new olc::Decal(spr);
	this->bType = bType;
}

Building::~Building()
{
}
