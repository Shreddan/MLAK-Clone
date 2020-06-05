#include "Equipment.h"

Equipment::Equipment()
{
	this->LevelReq = 0;
	this->BuyCost = 0;
	this->SellCost = BuyCost * 0.70;
	this->Type = None;
	this->isEquipped = false;
}

Equipment::~Equipment()
{
}
