#pragma once
#include <olcPixelGameEngine.h>

enum BuildingType
{
	SmallHouse,
	MedHouse,
	BigHouse,
	ResearchCentre,
	Bakery,
	GuildHall,
	ArmourShop,
	WeaponShop,
	PotionShop
};

class Building
{
public:
	Building(std::string path, int bType);
	~Building();

private:
	int x;
	int y;
	int bType;
	olc::Sprite* spr = nullptr;
	olc::Decal* dec = nullptr;

};

