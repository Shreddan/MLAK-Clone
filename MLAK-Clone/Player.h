#pragma once
#include <iostream>

class Player
{
public:
	Player();
	~Player();

	//Get - Set
	void setMateria(int m) { Materia += m; }


private:
	std::string Name;
	int Materia;
	int Treasury;
	int CityLevel;

};

