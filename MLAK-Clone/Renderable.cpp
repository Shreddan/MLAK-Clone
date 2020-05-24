#include "Renderable.h"

Renderable::Renderable()
{
}

Renderable::Renderable(const std::string &path)
{
	Load(path);
}

Renderable::~Renderable()
{
	delete sprite;
	delete decal;
}

void Renderable::Load(const std::string &path)
{
	sprite = new olc::Sprite(path);
	decal = new olc::Decal(sprite);
}
