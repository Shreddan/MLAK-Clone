#include "Adventurer.h"

Adventurer::Adventurer()
{
	this->name = "";
	this->Level = 1;
	this->EnergyMax = 100;
	this->Energy = EnergyMax;
	this->HpMax = 42;
	this->Hp = HpMax;
	this->Money = 0;
	this->Class = Vagrant;
	this->HappinessMax = 100;
	this->Happiness = HappinessMax;
}

Adventurer::~Adventurer()
{
}
