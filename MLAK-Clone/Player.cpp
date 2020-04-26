#include "Player.h"

Player::Player()
{
	this->Name = nameChar();
	this->Materia = 0;
	this->Treasury = 100;
	this->CityLevel = 1;
}

Player::~Player()
{
}

std::string Player::nameChar()
{
	std::string s;
	std::cin >> s;
	return s;
}
