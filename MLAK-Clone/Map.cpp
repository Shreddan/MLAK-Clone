#include "Map.h"

Map::Map(const std::string path, const size_t width, const size_t height)
{
	this->spr = new olc::Sprite(path);
	this->dec = new olc::Decal(spr);
	Create(width, height);
}

Map::~Map()
{
	delete tiles;
}

void Map::Create(size_t w, size_t h)
{
	tiles = new Tile[w * h];
}
