#pragma once
#include "Rend.h"
#include "Player.h"
#include "Map.h"
#include "Dungeon.h"

class Renderable : public olc::Decal
{
public:
	Renderable();
	Renderable(olc::Sprite *spritesrc);
	~Renderable();
};

struct GUI : public Renderable
{
	GUI() {}
	GUI(olc::Sprite* spritesrc) : Renderable(spritesrc) { this->sprite = spritesrc; }
	~GUI() { delete sprite; };

};