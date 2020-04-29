#pragma once
#include "Equipment.h"

class Adventurer
{
public:
	Adventurer();
	~Adventurer();

private:
	int Level;
	int Hp;
	int HpMax;
	int Energy;
	int EnergyMaX;
	int Money;
	int Class;

	std::vector<Equipment> equipped;

};

