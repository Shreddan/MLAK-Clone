#include "Game.h"



Game::Game()
{
	this->Hour = 8;
	this->Day = 1;
	this->timeAllowed = 1;
	this->gState = 0;
	initDungs();
}

Game::~Game()
{
}

void Game::addGui(olc::Sprite *spritesrc)
{
	gui = new GUI(spritesrc);
}

void Game::initDungs()
{
	dungeons.emplace_back(0, 75, 50);
	dungeons.emplace_back(1, 150, 100);
	dungeons.emplace_back(2, 225, 150);
	dungeons.emplace_back(3, 300, 200);
	dungeons.emplace_back(4, 375, 250);
}

void Game::initBuilds()
{
	buildings.emplace_back(0, true);
	buildings.emplace_back(1, true);
	buildings.emplace_back(2, true);
	buildings.emplace_back(3, false);
	buildings.emplace_back(4, true);
}
