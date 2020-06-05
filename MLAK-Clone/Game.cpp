#include "Game.h"



Game::Game()
{
	this->Hour = 8;
	this->Day = 1;
	this->timeAllowed = 1;
	this->gState = 0;
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
	dungeons.emplace_back(0);
	dungeons.emplace_back(0);
	dungeons.emplace_back(1);
	dungeons.emplace_back(1);
	dungeons.emplace_back(2);
	dungeons.emplace_back(2);
	dungeons.emplace_back(3);
	dungeons.emplace_back(3);
	dungeons.emplace_back(4);
	dungeons.emplace_back(4);
}
