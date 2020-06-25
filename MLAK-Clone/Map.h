#pragma once
class Map
{
public:
	Map();
	~Map();

	struct Tile
	{
		int tWidth;
		int tHeight;
	};

	void Create(size_t w, size_t h);


	//Objs
	Tile* tiles;
};

