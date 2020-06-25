#include "Building.h"

Building::Building(std::string path)
{
	this->spr = new olc::Sprite(path);
	this->dec = new olc::Decal(spr);
}

Building::~Building()
{
}
