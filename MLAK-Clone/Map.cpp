#include "Map.h"

Map::Map()
{
}

Map::~Map()
{
	delete tiles;
}

void Map::Create(int w, int h)
{
	tiles = new Tile[w * h];
}
