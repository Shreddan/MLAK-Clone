#include "Renderable.h"

Renderable::Renderable() : Decal(sprite)
{
}

Renderable::Renderable(olc::Sprite *spritesrc) : Decal(spritesrc)
{
	this->sprite = spritesrc;
}

Renderable::~Renderable()
{
	delete sprite;
}
