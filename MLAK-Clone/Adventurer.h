#pragma once
#include "Equipment.h"
#include <unordered_set>

class Adventurer
{
public:
	Adventurer();
	~Adventurer();

	enum classes
	{
		Vagrant,
		Warrior,
		BlackM,
		WhiteM,
		Rogue,
		Ranger
	};

private:
	int Level;
	int Hp;
	int HpMax;
	int Energy;
	int EnergyMaX;
	int Happiness;
	int Money;
	int Class;

	//std::unordered_set<Equipment> Inventory;
};

