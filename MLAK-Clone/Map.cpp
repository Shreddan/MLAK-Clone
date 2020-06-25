#include "Map.h"

Map::Map()
{
}

Map::~Map()
{
	delete tiles;
}

void Map::Create(size_t w, size_t h)
{
	tiles = new Tile[w * h];
}
