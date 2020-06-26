#pragma once
#include <olcPixelGameEngine.h>
class Map
{
public:
	Map(const std::string path, const size_t width, const size_t height);
	~Map();

	struct Tile
	{
		int tWidth;
		int tHeight;
	};

	void Create(size_t w, size_t h);
	


	//Objs
	olc::Sprite* spr = nullptr;
	olc::Decal* dec = nullptr;
	Tile* tiles = nullptr;
};

