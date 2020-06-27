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
	dungeons.emplace_back(0, 100, 350);
	dungeons.emplace_back(1, 200, 400);
	dungeons.emplace_back(2, 280, 450);
	dungeons.emplace_back(3, 325, 500);
	dungeons.emplace_back(4, 365, 550);
}

void Game::initBuilds()
{
	buildings.emplace_back(0, true);
	buildings.emplace_back(1, true);
	buildings.emplace_back(2, true);
	buildings.emplace_back(3, false);
	buildings.emplace_back(4, true);
}
