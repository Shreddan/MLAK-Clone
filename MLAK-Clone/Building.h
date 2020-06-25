#pragma once
#include <olcPixelGameEngine.h>

class Building
{
public:
	Building(std::string path);
	~Building();

private:
	olc::Sprite* spr = nullptr;
	olc::Decal* dec = nullptr;
};

