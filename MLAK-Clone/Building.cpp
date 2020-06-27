#include "Building.h"

Building::Building(int bType, bool isR)
{
	this->bType = bType;
	this->isAvailable = isR;
}

Building::~Building()
{
}
