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