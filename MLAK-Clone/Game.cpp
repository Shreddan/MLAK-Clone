#include "Game.h"

Game::Game()
{
	this->Hour = 8;
	this->Day = 1;
	this->timeAllowed = 1;
	states.emplace_back(0);
}

Game::~Game()
{
}

void Game::addRenderable(int ind, const std::string path)
{
	states[ind].renderables.emplace_back(path);
}