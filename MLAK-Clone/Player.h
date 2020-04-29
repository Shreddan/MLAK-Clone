#pragma once
#include <iostream>

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

};

