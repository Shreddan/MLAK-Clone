#pragma once
#include <iostream>
#include "Equipment.h"

class Player
{
public:
	Player();
	~Player();

	//Get - Set
	void setName(std::string s) { Name = s; }
	void setMateria(int m) { Materia += m; }
	void setTreasury(int t) { Treasury += t; }
	void incremCityLevel() { CityLevel++; }


private:
	std::string Name;
	int Materia;
	int Treasury;
	int CityLevel;
	Equipment Head;
	Equipment NeckAcc;
	Equipment Torso;
	Equipment WristAcc;
	Equipment Arms;
	Equipment Legs;
	Equipment Boots;


};

