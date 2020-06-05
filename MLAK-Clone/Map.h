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

	void Create(int w, int h);


	//Objs
	Tile* tiles;
};

