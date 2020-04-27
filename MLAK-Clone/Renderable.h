#pragma once
#include <olcPixelGameEngine.h>
#include "Player.h"
#include "Map.h"

class Renderable
{
public:
	Renderable(const std::string &path);
	~Renderable();

	void Load(const std::string &path);



	olc::Sprite* sprite = nullptr;
	olc::Decal* decal = nullptr;
};

