#pragma once
#include "Rend.h"
#include "Player.h"
#include "Map.h"

class Renderable
{
public:
	Renderable();
	Renderable(const std::string &path);
	~Renderable();

	virtual void Load(const std::string &path) = 0;

	olc::Sprite* sprite = nullptr;
	olc::Decal* decal = nullptr;
};

class HUD : public Renderable
{
public:
	HUD(const std::string& path) { Load(path); }
	~HUD() { };

	void Load(const std::string& path) { sprite = new olc::Sprite(path); decal = new olc::Decal(sprite); };

};